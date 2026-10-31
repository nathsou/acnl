// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "core/callback_table.hpp"
#include "graphics/hemisphere_light.hpp"

#include <bit>

using guest::gptr;

// f_001a08bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001a08bc {

struct __attribute__((packed)) Object_001a08bc_0 {
    u8 unknown_0[0x38];  // (not used here)
    u8 byte_38;
    u8 byte_39;
    u8 byte_3a;
    u8 byte_3b;
    u8 byte_3c;
    u8 byte_3d;
    u8 byte_3e;
};
GUEST_OFFSET(Object_001a08bc_0, byte_38, 0x38);  // (from the original)
GUEST_OFFSET(Object_001a08bc_0, byte_39, 0x39);  // (from the original)
GUEST_OFFSET(Object_001a08bc_0, byte_3a, 0x3a);  // (from the original)
GUEST_OFFSET(Object_001a08bc_0, byte_3b, 0x3b);  // (from the original)
GUEST_OFFSET(Object_001a08bc_0, byte_3c, 0x3c);  // (from the original)
GUEST_OFFSET(Object_001a08bc_0, byte_3d, 0x3d);  // (from the original)
GUEST_OFFSET(Object_001a08bc_0, byte_3e, 0x3e);  // (from the original)

inline guest::global<u32, 0x0084b068> global_0084b068;  // (from the original)
inline constexpr guest::Function<0x008166f0, u32(u32, u32, u32, u32)> call_008166f0;  // (from the original)

u32 f_001a08bc(gptr<Object_001a08bc_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 8u;
    arg0->byte_38 = u8(0u);
    arg0->byte_39 = u8(0u);
    arg0->byte_3c = u8(0u);
    arg0->byte_3a = u8(0u);
    arg0->byte_3b = u8(0u);
    arg0->byte_3d = u8(0u);
    arg0->byte_3e = u8(0u);
    r0_1 = r0 + 0x14u;  // (from the original)
    r1_1 = *global_0084b068;
    r2_1 = *gptr<u32>(0x84b068u + 4);  // (from the original)
    r0_2 = call_008166f0(r0_1, r1_1, r2_1, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_2;
    return r0_2;
}

}  // namespace d_001a08bc
GUEST_EXPORT(0x001a08bc, d_001a08bc::f_001a08bc);

// f_001a1204: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001a1204 {

inline guest::global<u32, 0x001a1240> global_001a1240;  // (from the original)
inline guest::global<u32, 0x00857318> global_00857318;  // (from the original)
inline guest::global<u32, 0x00998540> global_00998540;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)

u32 f_001a1204(float S0) {
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r12_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 zf_1 = 0;
    float S0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r1_1 = *global_00857318;
    r2_1 = *gptr<u32>(0x857318u + 4);  // (from the original)
    r3_1 = *gptr<u32>(0x857318u + 8);  // (from the original)
    r12_1 = *gptr<u32>(0x857318u + 0xc);  // (from the original)
    *global_00998540 = u32(r1_1);
    *gptr<u32>(0x998540u + 4) = u32(r2_1);  // (from the original)
    *gptr<u32>(0x998540u + 8) = u32(r3_1);  // (from the original)
    *gptr<u32>(0x998540u + 0xc) = u32(r12_1);  // (from the original)
    guest::cpu()->s[0] = S0;
    r0_1 = call_002f74c8(0x998540u, r1_1, r2_1, r3_1);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    zf_1 = r0_1 == 1u;
    if (zf_1) {
        S0_1 = std::bit_cast<float>(*global_001a1240);
        *gptr<u32>(0x998540u + 8u) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    } else {
        S0_1 = std::bit_cast<float>(*gptr<u32>(0x998540u + 8u));  // (from the original)
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->s[0] = S0_1;
    return 0x998540u;  // (from the original)
}

}  // namespace d_001a1204
GUEST_EXPORT(0x001a1204, d_001a1204::f_001a1204);

// f_001a1abc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001a1abc {

inline guest::global<u32, 0x001a1b30> global_001a1b30;  // (from the original)
inline constexpr guest::Function<0x001a2c48, u32(u32, u32, u32, u32)> call_001a2c48;  // (from the original)

u32 f_001a1abc(u32 r0, u32 r1, u32 r2, float S0) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    float S0_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0_1 = call_001a2c48(r0, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    S0_1 = guest::cpu()->s[0];
    if (r2 + 1u != 0) {
        *gptr<u8>(r0 + 0x135u) = u8(r2);  // (from the original)
        S0_1 = std::bit_cast<float>(*global_001a1b30);
        r0_1 = r0 + 0xf4u;  // (from the original)
        *gptr<u32>(r0 + 0x154u) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
        *gptr<u32>(r0 + 0xf4u) = u32(*gptr<u32>(r0 + 4u));  // (from the original)
        *gptr<u32>(r0 + 0xf8u) = u32(*gptr<u32>(r0 + 8u));  // (from the original)
        *gptr<u32>(r0 + 0xfcu) = u32(*gptr<u32>(r0 + 0xcu));  // (from the original)
        *gptr<u32>(r0 + 0x100u) = u32(*gptr<u32>(r0 + 0x10u));  // (from the original)
        *gptr<u32>(r0 + 0x104u) = u32(*gptr<u32>(r0 + 0x14u));  // (from the original)
        *gptr<u32>(r0 + 0x108u) = u32(*gptr<u32>(r0 + 0x18u));  // (from the original)
        *gptr<u16>(r0_1 + 0x18u) = u16(u32(*gptr<u16>(r0 + 0x1cu)));  // (from the original)
        *gptr<u16>(r0_1 + 0x1au) = u16(u32(*gptr<u16>(r0 + 0x1eu)));  // (from the original)
        r1_1 = *gptr<u32>(r0 + 0x20u);  // (from the original)
        *gptr<u32>(r0_1 + 0x1cu) = u32(r1_1);  // (from the original)
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_1;
    return r0_1;
}

}  // namespace d_001a1abc
GUEST_EXPORT(0x001a1abc, d_001a1abc::f_001a1abc);

// f_001a2068: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001a2068 {

inline constexpr guest::Function<0x001a1430, u32(u32, u32, u32, u32)> call_001a1430;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)

u32 f_001a2068(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    u32 ea_1 = 0;
    u32 r0_3 = 0;
    u32 ea_2 = 0;
    u32 r1_2 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    u32 r1_3 = 0;
    u32 ea_5 = 0;
    u32 r2_2 = 0;
    u32 ea_6 = 0;
    u32 r0_4 = 0;
    u32 ea_7 = 0;
    u32 ea_8 = 0;
    u32 ea_9 = 0;
    u32 r3_2 = 0;
    float S1_3 = 0;
    float S0_3 = 0;
    u32 r2_3 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_4 = 0;
    float S0_4 = 0;
    float S1_4 = 0;
    r13 = r13 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0_1 = call_002f74c8(r0, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    S0_1 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    r0_2 = call_002f74e0(8u, r0_1, r2_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    if (r0_2 == 0) {
        r13 = r13 + 0x28u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_2;
        return r0_2;
    }
    ea_1 = r0 + 0x30u;  // (from the original)
    r0_3 = *gptr<u32>(ea_1);
    ea_2 = r0 + 0x38u;  // (from the original)
    r1_2 = *gptr<u32>(ea_2);
    ea_3 = r13 + 0x10u;  // (from the original)
    *gptr<u32>(ea_3) = u32(r0_3);
    *gptr<u32>(ea_3 + 4) = u32(r1_2);
    ea_4 = r0 + 0x1a8u;  // (from the original)
    r1_3 = u32(*gptr<u8>(ea_4));
    ea_5 = r0 + 0x1eu;  // (from the original)
    r2_2 = u32(s32(s16(*gptr<u16>(ea_5))));
    ea_6 = r0 + 0x1a9u;  // (from the original)
    r0_4 = u32(*gptr<u8>(ea_6));
    ea_7 = r13 + 4u;
    *gptr<u32>(ea_7) = u32(r1_3);
    ea_8 = r13;
    *gptr<u32>(ea_8) = u32(r0 + 0xd8u);  // (from the original)
    ea_9 = r13 + 8u;
    *gptr<u32>(ea_9) = u32(r0_4);
    *gptr<u32>(ea_9 + 4) = u32(r2_2);
    r3_2 = r0 + 0xe0u;  // (from the original)
    S1_3 = std::bit_cast<float>(*gptr<u32>(r0 + 0x2cu));  // (from the original)
    S0_3 = std::bit_cast<float>(*gptr<u32>(r0 + 0x168u));  // (from the original)
    r2_3 = r13 + 0x10u;  // (from the original)
    r0_5 = r0 + 0x50u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_3;
    r0_6 = call_001a1430(r0_5, r1, r2_3, r3_2);
    r1_4 = guest::cpu()->r[1];
    S0_4 = guest::cpu()->s[0];
    S1_4 = guest::cpu()->s[1];
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_4;
    return r0_6;
}

}  // namespace d_001a2068
GUEST_EXPORT(0x001a2068, d_001a2068::f_001a2068);

// f_001a25dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001a25dc {

struct __attribute__((packed)) Object_001a25dc_0 {
    u8 unknown_0[0x114];  // (not used here)
    u32 word_114;
    u32 word_118;
    u32 word_11c;
};
GUEST_OFFSET(Object_001a25dc_0, word_114, 0x114);  // (from the original)
GUEST_OFFSET(Object_001a25dc_0, word_118, 0x118);  // (from the original)
GUEST_OFFSET(Object_001a25dc_0, word_11c, 0x11c);  // (from the original)

inline guest::global<u32, 0x001a2748> global_001a2748;  // (from the original)
inline constexpr guest::Function<0x001a1abc, u32(u32, u32, u32, u32)> call_001a1abc;  // (from the original)
inline constexpr guest::Function<0x001a2ce0, u32(u32, u32, u32, u32)> call_001a2ce0;  // (from the original)
inline constexpr guest::Function<0x001a3abc, u32(u32, u32, u32, u32)> call_001a3abc;  // (from the original)
inline constexpr guest::Function<0x001a3f90, u32(u32, u32, u32, u32)> call_001a3f90;  // (from the original)
inline constexpr guest::Function<0x001a4904, u32(u32, u32, u32, u32)> call_001a4904;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x005c2768, u32(u32, u32, u32, u32)> call_005c2768;  // (from the original)

u32 f_001a25dc(gptr<Object_001a25dc_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    float S0 = 0;
    float S1 = 0;
    float S2 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    float S2_2 = 0;
    float S0_3 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r1_2 = 0;
    u32 r3_3 = 0;
    u32 r2_3 = 0;
    u32 r0_4 = 0;
    float S0_4 = 0;
    float S1_3 = 0;
    float S2_3 = 0;
    u32 r3_4 = 0;
    u32 r2_4 = 0;
    u32 r1_3 = 0;
    u32 r0_5 = 0;
    u32 r1_4 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    float S0_5 = 0;
    float S1_4 = 0;
    float S2_4 = 0;
    u32 r0_6 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    float S0_6 = 0;
    float S1_5 = 0;
    float S2_5 = 0;
    u32 r0_7 = 0;
    u32 r1_5 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    float S0_7 = 0;
    float S1_6 = 0;
    float S2_6 = 0;
    u32 r0_8 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    float S0_8 = 0;
    float S1_7 = 0;
    float S2_7 = 0;
    u32 r0_9 = 0;
    u32 r1_6 = 0;
    u32 r1_7 = 0;
    u32 res_1 = 0;
    u32 nf_1 = 0;
    u32 zf_1 = 0;
    u32 vf_1 = 0;
    u32 r3_9 = 0;
    u32 r2_9 = 0;
    u32 r1_8 = 0;
    u32 r2_10 = 0;
    u32 r1_9 = 0;
    u32 r0_10 = 0;
    u32 r1_10 = 0;
    float S0_9 = 0;
    float S1_8 = 0;
    r4 = r0;
    r13 = r13 - 0x48u;  // (from the original)
    S0_1 = std::bit_cast<float>(arg0->word_114);
    S1_1 = std::bit_cast<float>(arg0->word_118);
    S2_1 = std::bit_cast<float>(arg0->word_11c);
    r0_1 = r13 + 0x10u;  // (from the original)
    *gptr<u32>(r0_1) = u32(std::bit_cast<u32>(S0_1));
    *gptr<u32>(r0_1 + 4) = u32(std::bit_cast<u32>(S1_1));
    *gptr<u32>(r0_1 + 8) = u32(std::bit_cast<u32>(S2_1));
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    r0_2 = call_005c2768(r0_1, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    S2_2 = guest::cpu()->s[2];
    if (r0_2 != 0) {
        r1_1 = *gptr<u32>(r0_2);
        S1_2 = std::bit_cast<float>(*global_001a2748);
        *gptr<u32>(r13 + 0x10u) = u32(r1_1);  // (from the original)
        S0_3 = std::bit_cast<float>(*gptr<u32>(r0_2 + 4u));
        *gptr<u32>(r13 + 0x14u) = u32(std::bit_cast<u32>(S0_3));  // (from the original)
        S0_2 = S0_3 + S1_2;
        r0_2 = *gptr<u32>(r0_2 + 8u);
        *gptr<u32>(r13 + 0x18u) = u32(r0_2);  // (from the original)
        *gptr<u32>(r13 + 0x14u) = u32(std::bit_cast<u32>(S0_2));  // (from the original)
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    guest::cpu()->s[2] = S2_2;
    r0_3 = call_002f74c8(r0_2, r1_1, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    r5 = r4 + 0x100u;  // (from the original)
    if (r0_3 == 0x32u) {  // (from the original)
        goto L_1a26d8;
    }
    r1_2 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_001a3f90(r4, r1_2, r2_2, r3_2);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
L_1a2648:;
    *gptr<u16>(r5 + 0xacu) = u16(r0);  // (from the original)
L_1a264c:;
    r3_3 = r4 + 0xa8u;  // (from the original)
    r2_3 = r13 + 0x10u;  // (from the original)
    r0_4 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    call_001a4904(r0_4, r4, r2_3, r3_3);
    S0_4 = guest::cpu()->s[0];
    S1_3 = guest::cpu()->s[1];
    S2_3 = guest::cpu()->s[2];
    r3_4 = r4 + 0x114u;  // (from the original)
    *gptr<u32>(r4 + 0x114u) = u32(*gptr<u32>(r13 + 4u));  // (from the original)
    r2_4 = r13 + 0x20u;  // (from the original)
    *gptr<u32>(r4 + 0x118u) = u32(*gptr<u32>(r13 + 8u));  // (from the original)
    *gptr<u32>(r4 + 0x11cu) = u32(*gptr<u32>(r13 + 0xcu));  // (from the original)
    r1_3 = r13 + 0x10u;  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_3;
    guest::cpu()->s[2] = S2_3;
    r0_5 = call_001a2ce0(r4, r1_3, r2_4, r3_4);
    r1_4 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    S0_5 = guest::cpu()->s[0];
    S1_4 = guest::cpu()->s[1];
    S2_4 = guest::cpu()->s[2];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_5;
    guest::cpu()->s[1] = S1_4;
    guest::cpu()->s[2] = S2_4;
    r0_6 = call_002f74c8(r0_5, r1_4, r2_5, r3_5);
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    S0_6 = guest::cpu()->s[0];
    S1_5 = guest::cpu()->s[1];
    S2_5 = guest::cpu()->s[2];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_6;
    guest::cpu()->s[1] = S1_5;
    guest::cpu()->s[2] = S2_5;
    r0_7 = call_002f74e0(8u, r0_6, r2_6, r3_6);
    r1_5 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    S0_7 = guest::cpu()->s[0];
    S1_6 = guest::cpu()->s[1];
    S2_6 = guest::cpu()->s[2];
    if (r0_7 == 0) {
        goto L_1a272c;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_7;
    guest::cpu()->s[1] = S1_6;
    guest::cpu()->s[2] = S2_6;
    r0_8 = call_002f74c8(r0_7, r1_5, r2_7, r3_7);
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    S0_8 = guest::cpu()->s[0];
    S1_7 = guest::cpu()->s[1];
    S2_7 = guest::cpu()->s[2];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_8;
    guest::cpu()->s[1] = S1_7;
    guest::cpu()->s[2] = S2_7;
    r0_9 = call_002f74e0(0x100u, r0_8, r2_8, r3_8);  // (from the original)
    r3_7 = guest::cpu()->r[3];
    S0_7 = guest::cpu()->s[0];
    S1_6 = guest::cpu()->s[1];
    S2_6 = guest::cpu()->s[2];
    if (r0_9 == 0) {
        goto L_1a2710;
    }
    goto L_1a272c;
L_1a26d8:;
    if (u32(*gptr<u8>(r4 + 0x1b3u)) == 2u) {  // (from the original)
        *gptr<u16>(r5 + 0xacu) = u16(0x1555u);  // (from the original)
        guest::preempt();
        goto L_1a264c;
    }
    r1_6 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_001a3f90(r4, r1_6, r2_2, r3_2);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    r1_7 = u32(s32(s16(*gptr<u16>(r5 + 0xaau))));  // (from the original)
    *gptr<u16>(r5 + 0xacu) = u16(r0);  // (from the original)
    res_1 = 0x1555u - r1_7;  // (from the original)
    nf_1 = res_1 >> 0x1f;  // (from the original)
    zf_1 = res_1 == 0;
    vf_1 = ((0x1555u ^ r1_7) & (0x1555u ^ res_1)) >> 0x1f;  // (from the original)
    if (!zf_1 && nf_1 == vf_1) {
        r0 = 0x18e4u;  // (from the original)
    }
    if (zf_1 || nf_1 != vf_1) {
        guest::preempt();
        goto L_1a264c;
    }
    guest::preempt();
    goto L_1a2648;
L_1a2710:;
    *gptr<u32>(r13) = u32(r13 + 0x10u);  // (from the original)
    r3_9 = r13 + 4u;
    r2_9 = r4 + 0x114u;  // (from the original)
    r1_8 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_7;
    guest::cpu()->s[1] = S1_6;
    guest::cpu()->s[2] = S2_6;
    call_001a3abc(r4, r1_8, r2_9, r3_9);
    r3_7 = guest::cpu()->r[3];
    S0_7 = guest::cpu()->s[0];
    S1_6 = guest::cpu()->s[1];
    S2_6 = guest::cpu()->s[2];
L_1a272c:;
    r2_10 = u32(s32(s8(*gptr<u8>(r5 + 0x36u))));  // (from the original)
    r1_9 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_7;
    guest::cpu()->s[1] = S1_6;
    guest::cpu()->s[2] = S2_6;
    r0_10 = call_001a1abc(r4, r1_9, r2_10, r3_7);
    r1_10 = guest::cpu()->r[1];
    S0_9 = guest::cpu()->s[0];
    S1_8 = guest::cpu()->s[1];
    *gptr<u8>(r4 + 0x1b8u) = u8(0u);  // (from the original)
    r13 = r13 + 0x48u;  // (from the original)
    guest::cpu()->r[1] = r1_10;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_9;
    guest::cpu()->s[1] = S1_8;
    return r0_10;
}

}  // namespace d_001a25dc
GUEST_EXPORT(0x001a25dc, d_001a25dc::f_001a25dc);

// f_001a32c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001a32c8 {

struct __attribute__((packed)) Object_001a32c8_0 {
    u8 unknown_0[0x158];  // (not used here)
    u32 word_158;
    u32 word_15c;
};
GUEST_OFFSET(Object_001a32c8_0, word_158, 0x158);  // (from the original)
GUEST_OFFSET(Object_001a32c8_0, word_15c, 0x15c);  // (from the original)

struct __attribute__((packed)) Object_001a32c8_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_001a32c8_1, word_0, 0x0);  // (from the original)

inline guest::global<u32, 0x001a3344> global_001a3344;  // (from the original)
inline guest::global<u32, 0x001a334c> global_001a334c;  // (from the original)
inline guest::global<u32, 0x001a3350> global_001a3350;  // (from the original)
inline guest::global<u32, 0x0095089c> global_0095089c;  // (from the original)

void f_001a32c8(gptr<Object_001a32c8_0> arg0, gptr<Object_001a32c8_1> arg1) {
    u32 fpsr = guest::cpu()->fpscr;
    float S1_1 = 0;
    float S0_1 = 0;
    u32 fpsr_1 = 0;
    float S2_1 = 0;
    float S3_1 = 0;
    u32 fpsr_2 = 0;
    float S1_2 = 0;
    float S0_2 = 0;
    float S2_2 = 0;
    float S0_3 = 0;
    u32 fpsr_3 = 0;
    float S1_3 = 0;
    u32 fpsr_4 = 0;
    S1_1 = std::bit_cast<float>(arg0->word_15c);
    S0_1 = std::bit_cast<float>(*global_001a3344);
    fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S1_1, S0_1);  // (from the original)
    if (fpsr_1 >> 0x1e & 1 || fpsr_1 >> 0x1f != (fpsr_1 >> 0x1c & 1)) {  // (from the original)
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return;
    }
    S2_1 = std::bit_cast<float>(arg0->word_158);
    S3_1 = std::bit_cast<float>(*global_0095089c);
    fpsr_2 = fpsr_1 & 0xfffffffu | vfp_cmpf(S1_1 - S2_1, S3_1 * std::bit_cast<float>(*global_001a334c));  // (from the original)
    if (!(fpsr_2 >> 0x1d & 1) || !!(fpsr_2 >> 0x1e & 1)) {  // (from the original)
        S1_2 = S2_1 + S1_1;
        S0_2 = S1_2 * std::bit_cast<float>(*global_001a3350);
        arg1->word_0 = u32(std::bit_cast<u32>(S0_2));
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_2;
        return;
    }
    S2_2 = S2_1 + S3_1;
    S0_3 = std::bit_cast<float>(arg1->word_0);
    fpsr_3 = fpsr_2 & 0xfffffffu | vfp_cmpf(S2_2, S0_3);  // (from the original)
    if (!(fpsr_3 >> 0x1e & 1) && fpsr_3 >> 0x1f == (fpsr_3 >> 0x1c & 1)) {  // (from the original)
        arg1->word_0 = u32(std::bit_cast<u32>(S2_2));
        guest::cpu()->s[0] = S0_3;
        guest::cpu()->s[1] = S1_1;
        return;
    }
    S1_3 = S1_1 - S3_1;
    fpsr_4 = fpsr_3 & 0xfffffffu | vfp_cmpf(S0_3, S1_3);  // (from the original)
    if (!(fpsr_4 >> 0x1e & 1) && fpsr_4 >> 0x1f == (fpsr_4 >> 0x1c & 1)) {  // (from the original)
        S0_3 = S1_3;
    }
    arg1->word_0 = u32(std::bit_cast<u32>(S0_3));
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_3;
    return;
}

}  // namespace d_001a32c8
GUEST_EXPORT(0x001a32c8, d_001a32c8::f_001a32c8);

// f_001a360c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001a360c {

struct __attribute__((packed)) Object_001a360c_0 {
    u8 unknown_0[0xc0];  // (not used here)
    u32 word_c0;
    u32 word_c4;
    u32 word_c8;
    u8 unknown_cc[0x26];  // (not used here)
    u8 byte_f2;
    u8 byte_f3;
    u8 unknown_f4[0x40];  // (not used here)
    u8 byte_134;
    u8 unknown_135[0x1];  // (not used here)
    u8 byte_136;
    u8 unknown_137[0x82];  // (not used here)
    u8 byte_1b9;
    u8 unknown_1ba[0x1];  // (not used here)
    u8 byte_1bb;
    u8 byte_1bc;
};
GUEST_OFFSET(Object_001a360c_0, word_c0, 0xc0);  // (from the original)
GUEST_OFFSET(Object_001a360c_0, word_c4, 0xc4);  // (from the original)
GUEST_OFFSET(Object_001a360c_0, word_c8, 0xc8);  // (from the original)
GUEST_OFFSET(Object_001a360c_0, byte_f2, 0xf2);  // (from the original)
GUEST_OFFSET(Object_001a360c_0, byte_f3, 0xf3);  // (from the original)
GUEST_OFFSET(Object_001a360c_0, byte_134, 0x134);  // (from the original)
GUEST_OFFSET(Object_001a360c_0, byte_136, 0x136);  // (from the original)
GUEST_OFFSET(Object_001a360c_0, byte_1b9, 0x1b9);  // (from the original)
GUEST_OFFSET(Object_001a360c_0, byte_1bb, 0x1bb);  // (from the original)
GUEST_OFFSET(Object_001a360c_0, byte_1bc, 0x1bc);  // (from the original)

struct __attribute__((packed)) Object_001a360c_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_001a360c_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_001a360c_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_001a360c_1, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x001a1abc, u32(u32, u32, u32, u32)> call_001a1abc;  // (from the original)
inline constexpr guest::Function<0x006e225c, u32(u32, u32, u32, u32)> call_006e225c;  // (from the original)

u32 f_001a360c(gptr<Object_001a360c_0> arg0, gptr<Object_001a360c_1> arg1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r4_1 = 0;
    u32 r1_1 = 0;
    u32 r4_2 = 0;
    u32 r5_1 = 0;
    u32 zf_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    r13 = r13 - 0x10;  // (from the original)
    r4_1 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    arg0->byte_1bb = u8(0u);
    arg0->word_c0 = u32(arg1->word_0);
    arg0->word_c4 = u32(arg1->word_4);
    arg0->word_c8 = u32(arg1->word_8);
    arg0->byte_134 = u8(r2);
    arg0->byte_1b9 = u8(r4_1);
    r1_1 = u32(arg0->byte_f2);
    arg0->byte_136 = u8(r3);
    if (r1_1 != 0x16u) {  // (from the original)
        r1_1 = 0x16u;  // (from the original)
        arg0->byte_f3 = u8(r1_1);
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r4_2 = r0;
    r5_1 = r0 + 0x100u;  // (from the original)
    r0 = u32(arg0->byte_1bb);
    if (r0 != 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    zf_1 = r2 == 0x1bu;  // (from the original)
    if (!zf_1) {
        zf_1 = r2 == 0x4du;  // (from the original)
    }
    if (zf_1) {
        arg0->byte_1bc = u8(1u);
    }
    r0_1 = u32(arg0->byte_134);
    guest::cpu()->r[13] = r13;
    r0_2 = call_006e225c(r0_1, r1_1, r2, r3);
    r3_1 = guest::cpu()->r[3];
    r2_1 = u32(s32(s8(*gptr<u8>(r5_1 + 0x36u))));  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_001a1abc(r4_2, r0_2, r2_1, r3_1);
    *gptr<u32>(r4_2 + 0x114u) = u32(*gptr<u32>(r4_2 + 0xc0u));  // (from the original)
    *gptr<u32>(r4_2 + 0x118u) = u32(*gptr<u32>(r4_2 + 0xc4u));  // (from the original)
    r1_1 = *gptr<u32>(r4_2 + 0xc8u);  // (from the original)
    *gptr<u32>(r4_2 + 0x11cu) = u32(r1_1);  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_001a360c
GUEST_EXPORT(0x001a360c, d_001a360c::f_001a360c);

// f_001a40e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001a40e8 {

inline guest::global<u32, 0x001a41b4> global_001a41b4;  // (from the original)
inline guest::global<u32, 0x001a41b8> global_001a41b8;  // (from the original)
inline guest::global<u32, 0x001a41bc> global_001a41bc;  // (from the original)
inline guest::global<u32, 0x001a41c0> global_001a41c0;  // (from the original)
inline guest::global<u32, 0x001a41c4> global_001a41c4;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x0056a224, u32(u32, u32, u32, u32)> call_0056a224;  // (from the original)
inline constexpr guest::Function<0x005c2768, u32(u32, u32, u32, u32)> call_005c2768;  // (from the original)

u32 f_001a40e8(u32 r0, u32 r1, float S0, float S1, float S2, float S3, float S4, float S5) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    float S1_1 = 0;
    float S0_1 = 0;
    float S0_2 = 0;
    float S3_1 = 0;
    float S1_2 = 0;
    float S4_1 = 0;
    float S5_1 = 0;
    u32 r0_2 = 0;
    float S2_1 = 0;
    float S0_3 = 0;
    float S1_3 = 0;
    u32 r0_3 = 0;
    float S0_4 = 0;
    float S1_4 = 0;
    float S2_2 = 0;
    float S3_2 = 0;
    float S4_2 = 0;
    float S5_2 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    float S3_3 = 0;
    float S4_3 = 0;
    float S5_3 = 0;
    float S2_3 = 0;
    float S1_5 = 0;
    float S0_5 = 0;
    u32 r1_3 = 0;
    u32 r0_5 = 0;
    float S2_4 = 0;
    float S0_6 = 0;
    float S1_6 = 0;
    float S1_7 = 0;
    float S0_7 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    r0_1 = call_005c2768(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    S1_1 = guest::cpu()->s[1];
    if (r0_1 == 0) {
        S0_1 = std::bit_cast<float>(*global_001a41b4);
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return r0_1;
    }
    S0_2 = std::bit_cast<float>(*gptr<u32>(r0_1 + 8u));
    S3_1 = std::bit_cast<float>(*gptr<u32>(r0_1));
    S1_2 = std::bit_cast<float>(*gptr<u32>(r0_1 + 4u)) + std::bit_cast<float>(*global_001a41b8);
    S4_1 = std::bit_cast<float>(*gptr<u32>(r1));
    S5_1 = std::bit_cast<float>(*gptr<u32>(r1 + 4));
    r0_2 = r13 + 4u;
    S2_1 = std::bit_cast<float>(*gptr<u32>(r1 + 8u)) - S0_2;
    S0_3 = S4_1 - S3_1;
    S1_3 = S5_1 - S1_2;
    *gptr<u32>(r0_2) = u32(std::bit_cast<u32>(S0_3));
    *gptr<u32>(r0_2 + 4) = u32(std::bit_cast<u32>(S1_3));
    *gptr<u32>(r0_2 + 8) = u32(std::bit_cast<u32>(S2_1));
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_3;
    guest::cpu()->s[2] = S2_1;
    guest::cpu()->s[3] = S3_1;
    guest::cpu()->s[4] = S4_1;
    guest::cpu()->s[5] = S5_1;
    r0_3 = call_002f74c8(r0_2, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    S0_4 = guest::cpu()->s[0];
    S1_4 = guest::cpu()->s[1];
    S2_2 = guest::cpu()->s[2];
    S3_2 = guest::cpu()->s[3];
    S4_2 = guest::cpu()->s[4];
    S5_2 = guest::cpu()->s[5];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_4;
    guest::cpu()->s[2] = S2_2;
    guest::cpu()->s[3] = S3_2;
    guest::cpu()->s[4] = S4_2;
    guest::cpu()->s[5] = S5_2;
    r0_4 = call_002f74e0(8u, r0_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    S3_3 = guest::cpu()->s[3];
    S4_3 = guest::cpu()->s[4];
    S5_3 = guest::cpu()->s[5];
    if (r0_4 != 0) {
        S2_3 = std::bit_cast<float>(*global_001a41bc);
        S1_5 = std::bit_cast<float>(*global_001a41c0);
        S0_5 = std::bit_cast<float>(vcvt_sz_f(float(std::bit_cast<u32>(std::bit_cast<float>(u32(*gptr<u8>(r0 + 0x1a8u))))) * S2_3 * S1_5));  // (from the original)
        *gptr<u16>(r13) = u16(0u - std::bit_cast<u32>(S0_5));
        r1_3 = *gptr<u32>(r13);
        r0_5 = r13 + 4u;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_5;
        guest::cpu()->s[1] = S1_5;
        guest::cpu()->s[2] = S2_3;
        guest::cpu()->s[3] = S3_3;
        guest::cpu()->s[4] = S4_3;
        guest::cpu()->s[5] = S5_3;
        r0_4 = call_0056a224(r0_5, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_2 = guest::cpu()->r[1];
    }
    S2_4 = std::bit_cast<float>(*gptr<u32>(r13 + 8u));
    S0_6 = std::bit_cast<float>(*gptr<u32>(r13 + 0xcu)) * std::bit_cast<float>(*global_001a41c4);  // (from the original)
    S1_6 = std::bit_cast<float>(*gptr<u32>(r13 + 4u));
    S1_7 = S1_6 * S1_6 + S2_4 * S2_4 + S0_6 * S0_6;
    S0_7 = sqrtf(S1_7);
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_7;
    guest::cpu()->s[1] = S1_7;
    return r0_4;
}

}  // namespace d_001a40e8
GUEST_EXPORT(0x001a40e8, d_001a40e8::f_001a40e8);

// f_001a48a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001a48a0 {

inline guest::global<u32, 0x001a48fc> global_001a48fc;  // (from the original)
inline guest::global<u32, 0x001a4900> global_001a4900;  // (from the original)
inline constexpr guest::Function<0x006e225c, u32(u32, u32, u32, u32)> call_006e225c;  // (from the original)

u32 f_001a48a0(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2, float S3, float S4) {
    u32 r4 = guest::cpu()->r[4];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    float S2_1 = 0;
    float S3_1 = 0;
    float S4_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    r0_1 = call_006e225c(r2, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    S0 = std::bit_cast<float>(*gptr<u32>(r0_1));
    S1 = std::bit_cast<float>(*gptr<u32>(r0_1 + 4));
    S2_1 = std::bit_cast<float>(*gptr<u32>(r0_1 + 8));
    S3_1 = std::bit_cast<float>(*gptr<u32>(r0_1 + 0xc));  // (from the original)
    S4_1 = std::bit_cast<float>(*gptr<u32>(r0_1 + 0x10));  // (from the original)
    *gptr<u32>(r4) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r4 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r4 + 8) = u32(std::bit_cast<u32>(S2_1));
    *gptr<u32>(r4 + 0xc) = u32(std::bit_cast<u32>(S3_1));  // (from the original)
    *gptr<u32>(r4 + 0x10) = u32(std::bit_cast<u32>(S4_1));  // (from the original)
    if (r3 == 0) {
        goto L_1a48d4;
    } else {
        r0 = u32(*gptr<u16>(r3));
    }
    *gptr<u16>(r4 + 0x12u) = u16(r0);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
L_1a48d4:;
    S1 = std::bit_cast<float>(*global_001a4900);
    S0 = std::bit_cast<float>(vcvt_sz_f(float(std::bit_cast<u32>(std::bit_cast<float>(u32(*gptr<u8>(r0 + 0x1a8u))))) * std::bit_cast<float>(*global_001a48fc) * S1));  // (from the original)
    r0 = std::bit_cast<u32>(S0);
    *gptr<u16>(r4 + 0x12u) = u16(r0);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_001a48a0
GUEST_EXPORT(0x001a48a0, d_001a48a0::f_001a48a0);

// f_001a4904: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001a4904 {

struct __attribute__((packed)) Object_001a4904_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_001a4904_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_001a4904_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_001a4904_0, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Object_001a4904_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_001a4904_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_001a4904_3, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_001a4904_3, word_8, 0x8);  // (from the original)

inline guest::global<u32, 0x001a4968> global_001a4968;  // (from the original)

u32 f_001a4904(gptr<Object_001a4904_0> arg0, u32 r1_unused, gptr<Float3> arg2, gptr<Object_001a4904_3> arg3) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    float S1_1 = 0;
    float S2_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    float S0_1 = 0;
    float S1_2 = 0;
    float S2_2 = 0;
    float S0_2 = 0;
    S1_1 = arg2->v[1] + std::bit_cast<float>(arg3->word_4);
    S2_1 = arg2->v[2] + std::bit_cast<float>(arg3->word_8);
    r13 = r13 - 0x18u;  // (from the original)
    r0_1 = r13;
    *gptr<u32>(r0_1) = u32(std::bit_cast<u32>(arg2->v[0] + std::bit_cast<float>(arg3->word_0)));
    *gptr<u32>(r0_1 + 4) = u32(std::bit_cast<u32>(S1_1));
    *gptr<u32>(r0_1 + 8) = u32(std::bit_cast<u32>(S2_1));
    r1_1 = r13 + 4u;
    S0_1 = std::bit_cast<float>(*global_001a4968);
    S1_2 = std::bit_cast<float>(*gptr<u32>(r1_1)) * S0_1;
    S2_2 = std::bit_cast<float>(*gptr<u32>(r1_1 + 4)) * S0_1;
    S0_2 = std::bit_cast<float>(*gptr<u32>(r13)) * S0_1;
    arg0->word_0 = u32(std::bit_cast<u32>(S0_2));
    arg0->word_4 = u32(std::bit_cast<u32>(S1_2));
    arg0->word_8 = u32(std::bit_cast<u32>(S2_2));
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    return r0;
}

}  // namespace d_001a4904
GUEST_EXPORT(0x001a4904, d_001a4904::f_001a4904);

// f_001a4e7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001a4e7c {

struct __attribute__((packed)) Object_001a4e7c_0 {
    u8 unknown_0[0x158];  // (not used here)
    u32 word_158;
    u32 word_15c;
    u32 word_160;
    u32 word_164;
};
GUEST_OFFSET(Object_001a4e7c_0, word_158, 0x158);  // (from the original)
GUEST_OFFSET(Object_001a4e7c_0, word_15c, 0x15c);  // (from the original)
GUEST_OFFSET(Object_001a4e7c_0, word_160, 0x160);  // (from the original)
GUEST_OFFSET(Object_001a4e7c_0, word_164, 0x164);  // (from the original)

struct __attribute__((packed)) Object_001a4e7c_1 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_001a4e7c_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_001a4e7c_1, word_8, 0x8);  // (from the original)

inline guest::global<u32, 0x001a4f64> global_001a4f64;  // (from the original)
inline guest::global<u32, 0x001a4f68> global_001a4f68;  // (from the original)
inline guest::global<u32, 0x001a4f70> global_001a4f70;  // (from the original)

void f_001a4e7c(gptr<Object_001a4e7c_0> arg0, gptr<Object_001a4e7c_1> arg1, float S0) {
    u32 fpsr = guest::cpu()->fpscr;
    float S1_1 = 0;
    float S5_1 = 0;
    float S4_1 = 0;
    u32 fpsr_1 = 0;
    float S2_1 = 0;
    float S3_1 = 0;
    float S2_2 = 0;
    float S1_2 = 0;
    float S1_3 = 0;
    u32 fpsr_2 = 0;
    float S2_3 = 0;
    float S3_2 = 0;
    float S5_2 = 0;
    u32 fpsr_3 = 0;
    float S0_1 = 0;
    float S2_4 = 0;
    float S0_2 = 0;
    u32 fpsr_4 = 0;
    float S1_4 = 0;
    u32 fpsr_5 = 0;
    S1_1 = std::bit_cast<float>(arg0->word_15c);
    S5_1 = std::bit_cast<float>(*global_001a4f64);
    S4_1 = std::bit_cast<float>(*global_001a4f68);
    fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S1_1, S5_1);  // (from the original)
    if (fpsr_1 >> 0x1e & 1 || fpsr_1 >> 0x1f != (fpsr_1 >> 0x1c & 1)) {  // (from the original)
        goto L_1a4ef4;
    }
    S2_1 = std::bit_cast<float>(arg0->word_158);
    S3_1 = std::bit_cast<float>(*gptr<u32>(0x950874u + 0x34u));  // (from the original)
    fpsr_1 = fpsr_1 & 0xfffffffu | vfp_cmpf(S1_1 - S2_1, S3_1 * std::bit_cast<float>(*global_001a4f70));  // (from the original)
    if (!(fpsr_1 >> 0x1d & 1) || !!(fpsr_1 >> 0x1e & 1)) {  // (from the original)
        S0 = (S2_1 + S1_1) * S4_1;
        arg1->word_0 = u32(std::bit_cast<u32>(S0));
        goto L_1a4ef4;
    }
    S2_2 = S2_1 + S3_1;
    S0 = std::bit_cast<float>(arg1->word_0);
    fpsr_1 = fpsr_1 & 0xfffffffu | vfp_cmpf(S2_2, S0);  // (from the original)
    if (!(fpsr_1 >> 0x1e & 1) && fpsr_1 >> 0x1f == (fpsr_1 >> 0x1c & 1)) {  // (from the original)
        arg1->word_0 = u32(std::bit_cast<u32>(S2_2));
        goto L_1a4ef4;
    }
    S1_2 = S1_1 - S3_1;
    fpsr_1 = fpsr_1 & 0xfffffffu | vfp_cmpf(S0, S1_2);  // (from the original)
    if (!(fpsr_1 >> 0x1e & 1) && fpsr_1 >> 0x1f == (fpsr_1 >> 0x1c & 1)) {  // (from the original)
        S0 = S1_2;
    }
    arg1->word_0 = u32(std::bit_cast<u32>(S0));
L_1a4ef4:;
    S1_3 = std::bit_cast<float>(arg0->word_164);
    fpsr_2 = fpsr_1 & 0xfffffffu | vfp_cmpf(S1_3, S5_1);  // (from the original)
    if (fpsr_2 >> 0x1e & 1 || fpsr_2 >> 0x1f != (fpsr_2 >> 0x1c & 1)) {  // (from the original)
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1_3;
        return;
    }
    S2_3 = std::bit_cast<float>(arg0->word_160);
    S3_2 = std::bit_cast<float>(*gptr<u32>(0x950874u + 0x38u));  // (from the original)
    S5_2 = std::bit_cast<float>(*gptr<u32>(0x950874u + 0x3cu));  // (from the original)
    fpsr_3 = fpsr_2 & 0xfffffffu | vfp_cmpf(S1_3 - S2_3, S3_2 + S5_2);  // (from the original)
    if (!(fpsr_3 >> 0x1d & 1) || !!(fpsr_3 >> 0x1e & 1)) {  // (from the original)
        S0_1 = (S2_3 + S1_3) * S4_1;
        arg1->word_8 = u32(std::bit_cast<u32>(S0_1));
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_3;
        return;
    }
    S2_4 = S2_3 + S5_2;
    S0_2 = std::bit_cast<float>(arg1->word_8);
    fpsr_4 = fpsr_3 & 0xfffffffu | vfp_cmpf(S2_4, S0_2);  // (from the original)
    if (!(fpsr_4 >> 0x1e & 1) && fpsr_4 >> 0x1f == (fpsr_4 >> 0x1c & 1)) {  // (from the original)
        arg1->word_8 = u32(std::bit_cast<u32>(S2_4));
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_3;
        return;
    }
    S1_4 = S1_3 - S3_2;
    fpsr_5 = fpsr_4 & 0xfffffffu | vfp_cmpf(S0_2, S1_4);  // (from the original)
    if (!(fpsr_5 >> 0x1e & 1) && fpsr_5 >> 0x1f == (fpsr_5 >> 0x1c & 1)) {  // (from the original)
        S0_2 = S1_4;
    }
    arg1->word_8 = u32(std::bit_cast<u32>(S0_2));
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_4;
    return;
}

}  // namespace d_001a4e7c
GUEST_EXPORT(0x001a4e7c, d_001a4e7c::f_001a4e7c);

// f_001a5e64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001a5e64 {

struct __attribute__((packed)) Object_001a5e64_0 {
    u8 unknown_0[0x158];  // (not used here)
    u32 word_158;
    u32 word_15c;
    u32 word_160;
    u32 word_164;
};
GUEST_OFFSET(Object_001a5e64_0, word_158, 0x158);  // (from the original)
GUEST_OFFSET(Object_001a5e64_0, word_15c, 0x15c);  // (from the original)
GUEST_OFFSET(Object_001a5e64_0, word_160, 0x160);  // (from the original)
GUEST_OFFSET(Object_001a5e64_0, word_164, 0x164);  // (from the original)

struct __attribute__((packed)) Object_001a5e64_1 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_001a5e64_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_001a5e64_1, word_8, 0x8);  // (from the original)

inline guest::global<u32, 0x001a5f44> global_001a5f44;  // (from the original)
inline guest::global<u32, 0x001a5f48> global_001a5f48;  // (from the original)
inline guest::global<u32, 0x001a5f50> global_001a5f50;  // (from the original)
inline guest::global<u32, 0x009508a0> global_009508a0;  // (from the original)

void f_001a5e64(gptr<Object_001a5e64_0> arg0, gptr<Object_001a5e64_1> arg1, float S0) {
    u32 fpsr = guest::cpu()->fpscr;
    float S1_1 = 0;
    float S5_1 = 0;
    float S3_1 = 0;
    u32 fpsr_1 = 0;
    float S2_1 = 0;
    float S4_1 = 0;
    float S2_2 = 0;
    float S1_2 = 0;
    float S1_3 = 0;
    u32 fpsr_2 = 0;
    float S2_3 = 0;
    float S4_2 = 0;
    float S5_2 = 0;
    u32 fpsr_3 = 0;
    float S0_1 = 0;
    float S2_4 = 0;
    float S0_2 = 0;
    u32 fpsr_4 = 0;
    float S1_4 = 0;
    u32 fpsr_5 = 0;
    S1_1 = std::bit_cast<float>(arg0->word_15c);
    S5_1 = std::bit_cast<float>(*global_001a5f44);
    S3_1 = std::bit_cast<float>(*global_001a5f48);
    fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S1_1, S5_1);  // (from the original)
    if (fpsr_1 >> 0x1e & 1 || fpsr_1 >> 0x1f != (fpsr_1 >> 0x1c & 1)) {  // (from the original)
        goto L_1a5ed4;
    }
    S2_1 = std::bit_cast<float>(arg0->word_158);
    if (s32(std::bit_cast<u32>(S1_1 - S2_1)) <= s32(0x43a00000u)) {  // (from the original)
        S0 = (S2_1 + S1_1) * S3_1;
        arg1->word_0 = u32(std::bit_cast<u32>(S0));
        goto L_1a5ed4;
    }
    S4_1 = std::bit_cast<float>(*global_001a5f50);
    S0 = std::bit_cast<float>(arg1->word_0);
    S2_2 = S2_1 + S4_1;
    fpsr_1 = fpsr_1 & 0xfffffffu | vfp_cmpf(S0, S2_2);  // (from the original)
    if (!(fpsr_1 >> 0x1d & 1)) {  // (from the original)
        arg1->word_0 = u32(std::bit_cast<u32>(S2_2));
        goto L_1a5ed4;
    }
    S1_2 = S1_1 - S4_1;
    fpsr_1 = fpsr_1 & 0xfffffffu | vfp_cmpf(S0, S1_2);  // (from the original)
    if (!(fpsr_1 >> 0x1e & 1) && fpsr_1 >> 0x1f == (fpsr_1 >> 0x1c & 1)) {  // (from the original)
        S0 = S1_2;
    }
    arg1->word_0 = u32(std::bit_cast<u32>(S0));
L_1a5ed4:;
    S1_3 = std::bit_cast<float>(arg0->word_164);
    fpsr_2 = fpsr_1 & 0xfffffffu | vfp_cmpf(S1_3, S5_1);  // (from the original)
    if (fpsr_2 >> 0x1e & 1 || fpsr_2 >> 0x1f != (fpsr_2 >> 0x1c & 1)) {  // (from the original)
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1_3;
        return;
    }
    S2_3 = std::bit_cast<float>(arg0->word_160);
    S4_2 = std::bit_cast<float>(*global_009508a0);
    S5_2 = std::bit_cast<float>(*gptr<u32>(0x9508a0u + 4));  // (from the original)
    fpsr_3 = fpsr_2 & 0xfffffffu | vfp_cmpf(S1_3 - S2_3, S4_2 + S5_2);  // (from the original)
    if (!(fpsr_3 >> 0x1d & 1) || !!(fpsr_3 >> 0x1e & 1)) {  // (from the original)
        S0_1 = (S2_3 + S1_3) * S3_1;
        arg1->word_8 = u32(std::bit_cast<u32>(S0_1));
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_3;
        return;
    }
    S2_4 = S2_3 + S5_2;
    S0_2 = std::bit_cast<float>(arg1->word_8);
    fpsr_4 = fpsr_3 & 0xfffffffu | vfp_cmpf(S2_4, S0_2);  // (from the original)
    if (!(fpsr_4 >> 0x1e & 1) && fpsr_4 >> 0x1f == (fpsr_4 >> 0x1c & 1)) {  // (from the original)
        arg1->word_8 = u32(std::bit_cast<u32>(S2_4));
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_3;
        return;
    }
    S1_4 = S1_3 - S4_2;
    fpsr_5 = fpsr_4 & 0xfffffffu | vfp_cmpf(S0_2, S1_4);  // (from the original)
    if (!(fpsr_5 >> 0x1e & 1) && fpsr_5 >> 0x1f == (fpsr_5 >> 0x1c & 1)) {  // (from the original)
        S0_2 = S1_4;
    }
    arg1->word_8 = u32(std::bit_cast<u32>(S0_2));
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_4;
    return;
}

}  // namespace d_001a5e64
GUEST_EXPORT(0x001a5e64, d_001a5e64::f_001a5e64);

// f_001a616c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001a616c {

struct __attribute__((packed)) Object_001a616c_0 {
    u8 unknown_0[0x1aa];  // (not used here)
    u16 half_1aa;
    u16 half_1ac;
};
GUEST_OFFSET(Object_001a616c_0, half_1aa, 0x1aa);  // (from the original)
GUEST_OFFSET(Object_001a616c_0, half_1ac, 0x1ac);  // (from the original)


u32 f_001a616c(gptr<Object_001a616c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    r1_1 = r0 + 0x100u;  // (from the original)
    r0_1 = u32(s32(s16(arg0->half_1aa)));
    if (r0_1 >> 0x1f != (r0_1 & (r0_1 ^ r0_1)) >> 0x1f) {  // (from the original)
        r0_1 = 0u - r0_1;
    }
    if (s32(0xaaau) <= s32(r0_1)) {  // (from the original)
        *gptr<u16>(r1_1 + 0xacu) = u16(0u);  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    r0_2 = 0x1555u;  // (from the original)
    if (u32(s32(s16(arg0->half_1ac))) >> 0x1f == 0u) {  // (from the original)
        r0_2 = u32(s32(r0_2) >> 0xd) - r0_2;  // (from the original)
    }
    *gptr<u16>(r1_1 + 0xacu) = u16(r0_2);  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_001a616c
GUEST_EXPORT(0x001a616c, d_001a616c::f_001a616c);

// f_001a63e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001a63e8 {

inline guest::global<u32, 0x001a64f0> global_001a64f0;  // (from the original)
inline guest::global<u32, 0x001a64f4> global_001a64f4;  // (from the original)
inline guest::global<u32, 0x001a64f8> global_001a64f8;  // (from the original)
inline constexpr guest::Function<0x0023ffb8, u32(u32, u32, u32, u32)> call_0023ffb8;  // (from the original)
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> call_002ff6f8;  // (from the original)

u32 f_001a63e8(u32 r0, u32 r1, float S0, float S1, float S2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_3 = 0;
    float S2_2 = 0;
    u32 r0_8 = 0;
    r6 = r0;
    r5 = r0 + 0x3cu;  // (from the original)
    r13 = r13 - 0x28u;  // (from the original)
    r8 = r1;
    r7 = 0u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0_1 = call_002ff6f8(0x18u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    S0_1 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    S2_1 = guest::cpu()->s[2];
    r9 = 0x950aa4u;  // (from the original)
    r0_2 = sxth(r0_1);
    *gptr<u16>(r5 + 2u) = u16(r0_2);
    r1_1 = u32(*gptr<u8>(r9 + (r0_2 << 4)));
    r0_3 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    r0_4 = call_0023ffb8(r0_3, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    if (r0_4 == 0) {
        r4 = 0u;
    } else {
        r7 = 1u;
        goto L_1a6458;
    }
    do {
L_1a6430:;
        r0_5 = sxth(r4);
        *gptr<u16>(r5 + 2u) = u16(r0_5);
        r1_2 = u32(*gptr<u8>(r9 + (r0_5 << 4)));
        r0_6 = r13;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        r0_7 = call_0023ffb8(r0_6, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        S2 = guest::cpu()->s[2];
        if (r0_7 != 0) {
            r7 = 1u;
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(0x18u));  // (from the original)
L_1a6458:;
    if (r8 == 0) {
        goto L_1a64d4;
    }
    if (r7 != 0) {
        *gptr<u32>(r6 + 4u) = u32(*gptr<u32>(r13));
        *gptr<u32>(r6 + 8u) = u32(*gptr<u32>(r13 + 4u));
        *gptr<u32>(r6 + 0xcu) = u32(*gptr<u32>(r13 + 8u));  // (from the original)
        r1_3 = r9 + (u32(s32(s16(*gptr<u16>(r5 + 2u)))) << 4) + 4u;
        *gptr<u32>(r6 + 4u) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r6 + 4u)) + std::bit_cast<float>(*gptr<u32>(r1_3))));
        *gptr<u32>(r6 + 8u) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r6 + 8u)) + std::bit_cast<float>(*gptr<u32>(r1_3 + 4u))));
        S1 = std::bit_cast<float>(*gptr<u32>(r1_3 + 8u));
        S0 = std::bit_cast<float>(*gptr<u32>(r6 + 0xcu)) + S1;  // (from the original)
        *gptr<u32>(r6 + 0xcu) = u32(std::bit_cast<u32>(S0));  // (from the original)
        goto L_1a64d4;
    }
    S0 = std::bit_cast<float>(*global_001a64f0);
    S1 = std::bit_cast<float>(*global_001a64f4);
    S2_2 = std::bit_cast<float>(*global_001a64f8);
    r0_8 = r6 + 4u;
    *gptr<u32>(r0_8) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r0_8 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r0_8 + 8) = u32(std::bit_cast<u32>(S2_2));
L_1a64d4:;
    *gptr<u8>(r6 + 0xf3u) = u8(0x14u);  // (from the original)
    *gptr<u8>(r6 + 0x136u) = u8(0xffu);  // (from the original)
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return 0xffu;  // (from the original)
}

}  // namespace d_001a63e8
GUEST_EXPORT(0x001a63e8, d_001a63e8::f_001a63e8);

// f_001a7760: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001a7760 {

inline constexpr guest::Function<0x00757aa0, u32(u32, u32, u32, u32)> call_00757aa0;  // (from the original)

u32 f_001a7760(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r3_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    r13 = r13 - 0x18;  // (from the original)
    r3_1 = r13 + 0x18u;  // (from the original)
    r5_1 = *gptr<u32>(r3_1);
    r6_1 = *gptr<u32>(r3_1 + 4);
    guest::cpu()->r[13] = r13;
    r0_1 = call_00757aa0(r0, r1, r2, r3_1);
    r0_2 = r0_1 + (r0_1 << 1);
    *gptr<u8>(*gptr<u32>(r0) + r0_2) = u8(r6_1);
    r1_1 = r0_2 + 1u;
    r0_3 = r0_2 + 2u;
    *gptr<u8>(*gptr<u32>(r0) + r1_1) = u8(r5_1);
    r1_2 = *gptr<u32>(r0);
    *gptr<u8>(r1_2 + r0_3) = u8(r3);
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_001a7760
GUEST_EXPORT(0x001a7760, d_001a7760::f_001a7760);

// f_001a77a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001a77a0 {

inline constexpr guest::Function<0x002fcb10, u32(u32, u32, u32, u32)> call_002fcb10;  // (from the original)
inline constexpr guest::Function<0x0030b654, u32(u32, u32, u32, u32)> call_0030b654;  // (from the original)
inline constexpr guest::Function<0x0030b6b8, u32(u32, u32, u32, u32)> call_0030b6b8;  // (from the original)
inline constexpr guest::Function<0x0030f594, u32(u32, u32, u32, u32)> call_0030f594;  // (from the original)
inline constexpr guest::Function<0x0076880c, u32(u32, u32, u32, u32)> call_0076880c;  // (from the original)
inline constexpr guest::Function<0x007689a4, u32(u32, u32, u32, u32)> call_007689a4;  // (from the original)

u32 f_001a77a0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r5_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_002fcb10(r1, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    r0_1 = call_0030b654(r1, r1_1, r2_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    r0_1 = call_0030f594(r1, r1_1, r2_2, r3_2);
    r1_1 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0_1 != 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    r5_1 = r0 + 0x40u;  // (from the original)
    *gptr<u32>(r0 + 0x3cu) = u32(*gptr<u32>(r0 + 0x3cu) + 1u);  // (from the original)
    r0_2 = call_002fcb10(r1, r1_1, r2_3, r3_3);
    r1_2 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    if (r0_2 != 0) {
        r0_3 = call_0030b6b8(r1, r1_2, r2_4, r3_4);
        r0_4 = r0_3 - 0x2000u;  // (from the original)
        r3_4 = r0_4 & 7u;
        r2_4 = u32(*gptr<u8>(r5_1 + (r0_4 >> 3)));
        r1_2 = r2_4 | lsl_r(1u, r3_4 & 0xff);  // (from the original)
        *gptr<u8>(r5_1 + (r0_4 >> 3)) = u8(r1_2);
    }
    r0_5 = call_0076880c(r1, r1_2, r2_4, r3_4);
    r1_3 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_1 = call_007689a4(r1, r1_3, r2_5, r3_5);
    r1_1 = *gptr<u32>(r0 + (r0_5 << 2)) + 1u;
    *gptr<u32>(r0 + (r0_5 << 2)) = u32(r1_1);
    if (r0_5 == r0_1) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    r1_1 = *gptr<u32>(r0 + (r0_1 << 2)) + 1u;
    *gptr<u32>(r0 + (r0_1 << 2)) = u32(r1_1);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_001a77a0
GUEST_EXPORT(0x001a77a0, d_001a77a0::f_001a77a0);

// f_001a8ddc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001a8ddc {

inline guest::global<u8, 0x0094fd2b> global_0094fd2b;  // (from the original)
inline constexpr guest::Function<0x008167fc, u32(u32, u32, u32, u32)> call_008167fc;  // (from the original)

u32 f_001a8ddc(gptr<CallbackTable> arg0) {
    u32 r0 = arg0.addr();
    u32 r12_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    u32 r0_1 = 0;
    u32 r1_4 = 0;
    u32 r3_2 = 0;
    u32 r1_5 = 0;
    u32 r2_3 = 0;
    u32 r0_2 = 0;
    u32 r1_6 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 8u;
    r12_1 = u32(arg0->key1);
    r1_1 = *gptr<u32>(0x857a50u + 0x14u);  // (from the original)
    if (r12_1 == *gptr<u32>(0x857a50u + 0x10u)) {  // (from the original)
        if (r12_1 == 0) {
            if (((u32(arg0->key2) | r1_1) & 1u) == 0) {
                goto L_1a8e54;
            }
        }
        if (*gptr<u32>(r0 + 0x10u) == r1_1) {  // (from the original)
            goto L_1a8e54;
        }
    }
    r1_2 = *gptr<u32>(0x857a50u + 0x3cu);  // (from the original)
    if (r12_1 != *gptr<u32>(0x857a50u + 0x38u)) {  // (from the original)
        r0_3 = r0 + 0x185eu;  // (from the original)
        *gptr<u8>(r0_3) = u8(1u);
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        return r0_3;
    }
    if (r12_1 == 0) {
        if (((*gptr<u32>(r0 + 0x10u) | r1_2) & 1u) == 0) {  // (from the original)
            goto L_1a8e54;
        }
    }
    if (*gptr<u32>(r0 + 0x10u) != r1_2) {  // (from the original)
        r0_3 = r0 + 0x185eu;  // (from the original)
        *gptr<u8>(r0_3) = u8(1u);
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        return r0_3;
    }
L_1a8e54:;
    r2_1 = u32(*gptr<u8>(0x1864u + r0));  // (from the original)
    if (r2_1 == 0) {
        *global_0094fd2b = u8(1u);
        goto L_1a8e78;
    }
    if (r2_1 == 1u) {
        *global_0094fd2b = u8(0u);
    }
L_1a8e78:;
    if (u32(*gptr<u8>(0x185du + r0)) != 0) {  // (from the original)
        r3_1 = 0x857a50u + 0x30u;  // (from the original)
        r1_3 = *gptr<u32>(r3_1);
        r2_2 = *gptr<u32>(r3_1 + 4);
        r0_1 = call_008167fc(r0, r1_3, r2_2, r3_1);
        r1_4 = guest::cpu()->r[1];
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_4;
        return r0_1;
    }
    r3_2 = 0x857a50u + 0x28u;  // (from the original)
    r1_5 = *gptr<u32>(r3_2);
    r2_3 = *gptr<u32>(r3_2 + 4);
    r0_2 = call_008167fc(r0, r1_5, r2_3, r3_2);
    r1_6 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_6;
    return r0_2;
}

}  // namespace d_001a8ddc
GUEST_EXPORT(0x001a8ddc, d_001a8ddc::f_001a8ddc);

// f_001a9368: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001a9368 {

struct __attribute__((packed)) Object_001a9368_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u8 byte_18;
};
GUEST_OFFSET(Object_001a9368_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_001a9368_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_001a9368_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_001a9368_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_001a9368_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_001a9368_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_001a9368_0, byte_18, 0x18);  // (from the original)


void f_001a9368(gptr<Object_001a9368_0> arg0) {
    u32 r1_1 = 0;
    r1_1 = ~0u;
    arg0->word_0 = u32(r1_1);
    arg0->word_4 = u32(r1_1);
    arg0->word_8 = u32(0u);
    arg0->word_10 = u32(r1_1);
    arg0->word_c = u32(0u);
    arg0->word_14 = u32(r1_1);
    arg0->byte_18 = u8(1u);
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_001a9368
GUEST_EXPORT(0x001a9368, d_001a9368::f_001a9368);

// f_001a998c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001a998c {

inline guest::global<u32, 0x0094e4b8> global_0094e4b8;  // (from the original)
inline guest::global<u8, 0x0098c56c> global_0098c56c;  // (from the original)
inline constexpr guest::Function<0x002cd444, u32(u32, u32, u32, u32)> call_002cd444;  // (from the original)
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> call_002fd108;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x00567d60, u32(u32, u32, u32, u32)> call_00567d60;  // (from the original)
inline constexpr guest::Function<0x00567e24, u32(u32, u32, u32, u32)> call_00567e24;  // (from the original)
inline constexpr guest::Function<0x00569d50, u32(u32, u32, u32, u32)> call_00569d50;  // (from the original)

u32 f_001a998c(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r4_1 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r3_3 = 0;
    u32 r1_3 = 0;
    u32 r0_7 = 0;
    u32 r3_4 = 0;
    u32 r1_4 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r4_2 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r3_5 = 0;
    u32 r1_5 = 0;
    u32 r0_13 = 0;
    u32 r3_6 = 0;
    u32 r1_6 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = r0 + 0x12c8u;  // (from the original)
    r0_2 = call_00567e24(r0_1, 0x1a9ab0u, r2, r3);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0_2;
    }
    r1_2 = *global_0094e4b8 + 0x34u;  // (from the original)
    r0_3 = r0 + 0x1510u;  // (from the original)
    call_00567d60(r0_3, r1_2, r2_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_4 = u32(*global_0098c56c);
    if (r0_4 != 0) {
        if (r0_4 == 1u) {
            goto L_1a9a48;
        }
        goto L_1a9aa8;
    }
    r4_1 = r0 + 0x184cu;  // (from the original)
    r0_5 = *gptr<u32>(r4_1);
    if (r0_5 != 0) {
        goto L_1a9aa8;
    }
    r0_6 = call_00569d50(r0_5, r1_1, r2_2, r3_2);
    r3_3 = guest::cpu()->r[3];
    r1_3 = *gptr<u32>(r0_6 + 4u);
    r0_7 = call_002fd108(0x630u, r1_3, 4u, r3_3);  // (from the original)
    r3_4 = guest::cpu()->r[3];
    r1_4 = r0_7 + 0x118u;  // (from the original)
    r0_8 = call_002cd444(r0_7, r1_4, 1u, r3_4);
    *gptr<u32>(r0_8) = u32(0x8ef22cu);  // (from the original)
    *gptr<u32>(r0_8 + 0xe4u) = u32(0x8ef22cu + 0x44u);  // (from the original)
    r0_9 = r0_8 + 0x118u;  // (from the original)
    r0_10 = call_00301d0c(r0_9, 0x2e0994u, 0x518u, 1u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    *gptr<u32>(r4_1) = u32(r0_10 - 0x118u);  // (from the original)
    goto L_1a9aa8;
L_1a9a48:;
    r4_2 = r0 + 0x1850u;  // (from the original)
    r0_11 = *gptr<u32>(r4_2);
    if (r0_11 != 0) {
        goto L_1a9aa8;
    }
    r0_12 = call_00569d50(r0_11, r1_1, r2_2, r3_2);
    r3_5 = guest::cpu()->r[3];
    r1_5 = *gptr<u32>(r0_12 + 4u);
    r0_13 = call_002fd108(0xb48u, r1_5, 4u, r3_5);  // (from the original)
    r3_6 = guest::cpu()->r[3];
    r1_6 = r0_13 + 0x118u;  // (from the original)
    r0_14 = call_002cd444(r0_13, r1_6, 2u, r3_6);
    *gptr<u32>(r0_14 + 0xe4u) = u32(0x8ef284u + 0x44u);  // (from the original)
    *gptr<u32>(r0_14) = u32(0x8ef284u);  // (from the original)
    r0_15 = r0_14 + 0x118u;  // (from the original)
    r0_16 = call_00301d0c(r0_15, 0x2e0994u, 0x518u, 2u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    *gptr<u32>(r4_2) = u32(r0_16 - 0x118u);  // (from the original)
L_1a9aa8:;
    r0_2 = 1u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_001a998c
GUEST_EXPORT(0x001a998c, d_001a998c::f_001a998c);

// f_001a9f44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001a9f44 {

struct __attribute__((packed)) Object_001a9f44_0 {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
    u8 unknown_9[0x3];  // (not used here)
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u8 byte_18;
    u8 unknown_19[0x3];  // (not used here)
    u32 word_1c;
    u32 word_20;
    u32 word_24;
};
GUEST_OFFSET(Object_001a9f44_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_001a9f44_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_001a9f44_0, byte_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_001a9f44_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_001a9f44_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_001a9f44_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_001a9f44_0, byte_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_001a9f44_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_001a9f44_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_001a9f44_0, word_24, 0x24);  // (from the original)

inline constexpr guest::Function<0x001207d8, u32(u32, u32, u32, u32)> call_001207d8;  // (from the original)
inline constexpr guest::Function<0x00125aec, u32(u32, u32, u32, u32)> call_00125aec;  // (from the original)
inline constexpr guest::Function<0x00125e3c, u32(u32, u32, u32, u32)> call_00125e3c;  // (from the original)
inline constexpr guest::Function<0x005d8ec8, u32(u32, u32, u32, u32)> call_005d8ec8;  // (from the original)

u32 f_001a9f44(gptr<Object_001a9f44_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 r3_1 = 0;
    u32 ea_1 = 0;
    u32 r2_1 = 0;
    u32 ea_2 = 0;
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
    u32 r2_9 = 0;
    u32 r3_9 = 0;
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    u32 r1_8 = 0;
    u32 r2_10 = 0;
    u32 r3_10 = 0;
    u32 r0_20 = 0;
    u32 r0_21 = 0;
    u32 r1_9 = 0;
    u32 r2_11 = 0;
    u32 r3_11 = 0;
    u32 r0_22 = 0;
    u32 r0_23 = 0;
    u32 r0_24 = 0;
    u32 r7_1 = 0;
    u32 r6_1 = 0;
    u32 r7_2 = 0;
    u32 ea_3 = 0;
    u32 r8_1 = 0;
    u32 ea_4 = 0;
    u32 r6_2 = 0;
    u32 ea_5 = 0;
    u32 ea_6 = 0;
    u32 ea_7 = 0;
    u32 ea_8 = 0;
    u32 ea_9 = 0;
    u32 r2_12 = 0;
    u32 r3_12 = 0;
    u32 r1_10 = 0;
    u32 ea_10 = 0;
    r13 = r13 - 0x20;  // (from the original)
    r3_1 = r0 + 0xcu;  // (from the original)
    arg0->word_4 = u32(0u);
    arg0->byte_8 = u8(0u);
    ea_1 = 0x857a50u + 0x48u;  // (from the original)
    r2_1 = *gptr<u32>(ea_1 + 4);
    arg0->word_c = u32(*gptr<u32>(ea_1));
    arg0->word_10 = u32(r2_1);
    arg0->word_14 = u32(0u);
    arg0->byte_18 = u8(0u);
    arg0->word_1c = u32(0u);
    arg0->word_0 = u32(0x8eb138u);  // (from the original)
    arg0->word_20 = u32(0u);
    ea_2 = r0 + 0x24u;  // (from the original)
    arg0->word_24 = u32(0u);
    r0_1 = ea_2 + 4u;
    guest::cpu()->r[13] = r13;
    r0_2 = call_005d8ec8(r0_1, 0x8eb138u, r2_1, r3_1);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_3 = r0_2 + 0x1008u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_00125e3c(r0_3, r1_1, r2_2, r3_2);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_5 = r0_4 + 0x14cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_6 = call_00125e3c(r0_5, r1_2, r2_3, r3_3);
    r1_3 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_7 = r0_6 + 0x14cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_8 = call_001207d8(r0_7, r1_3, r2_4, r3_4);
    r1_4 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_9 = r0_8 + 0x248u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_10 = call_001207d8(r0_9, r1_4, r2_5, r3_5);
    r1_5 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_11 = r0_10 + 0x248u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_12 = call_00125aec(r0_11, r1_5, r2_6, r3_6);
    r1_6 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_13 = r0_12 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_14 = call_00125aec(r0_13, r1_6, r2_7, r3_7);
    r1_7 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r0_15 = r0_14 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_16 = call_00125aec(r0_15, r1_7, r2_8, r3_8);
    r2_9 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r0_17 = r0_16 - 0x17a8u;  // (from the original)
    *gptr<u32>(0x17d0u + r0_17) = u32(0u);  // (from the original)
    r0_18 = r0_17 + 0x17d4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_19 = call_00125aec(r0_18, 0x17d0u, r2_9, r3_9);  // (from the original)
    r1_8 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r0_20 = r0_19 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_21 = call_00125aec(r0_20, r1_8, r2_10, r3_10);
    r1_9 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    r0_22 = r0_21 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_23 = call_00125aec(r0_22, r1_9, r2_11, r3_11);
    r14 = 0x184cu;  // (from the original)
    r0_24 = r0_23 - 0x1824u;  // (from the original)
    *gptr<u32>(r14 + r0_24) = u32(0u);
    r14 = r14 + (1u << 2);
    *gptr<u32>(r14 + r0_24) = u32(0u);
    r14 = r14 | 1u << 2;
    *gptr<u32>(r14 + r0_24) = u32(0u);
    r14 = r14 + (1u << 2);
    r7_1 = r14 | 1u << 2;
    *gptr<u32>(r14 + r0_24) = u32(0u);
    r6_1 = r7_1 | 1u;
    *gptr<u8>(r7_1 + r0_24) = u8(0u);
    r14 = r6_1 + 1u;
    r7_2 = r14 | 1u;
    ea_3 = r6_1 + r0_24;
    *gptr<u8>(ea_3) = u8(0u);
    r8_1 = r7_2 + 1u;
    ea_4 = r14 + r0_24;
    *gptr<u8>(ea_4) = u8(0u);
    r6_2 = r8_1 | 1u << 2;
    ea_5 = r7_2 + r0_24;
    *gptr<u8>(ea_5) = u8(1u);
    ea_6 = r8_1 + r0_24;
    *gptr<u32>(ea_6) = u32(0x10003c0u);  // (from the original)
    ea_7 = r6_2 + r0_24;
    *gptr<u8>(ea_7) = u8(3u);
    ea_8 = r6_2 + (1u << 2) + r0_24;
    *gptr<u32>(ea_8) = u32(~0u);
    ea_9 = 0x857a50u + 0x40u;  // (from the original)
    r2_12 = *gptr<u32>(ea_9);
    r3_12 = *gptr<u32>(ea_9 + 4);
    r1_10 = r0_24 + 0x1800u;  // (from the original)
    ea_10 = r1_10 + 0x6cu;  // (from the original)
    *gptr<u32>(ea_10) = u32(r2_12);
    *gptr<u32>(ea_10 + 4) = u32(r3_12);
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1_10;
    guest::cpu()->r[13] = r13;
    return r0_24;
}

}  // namespace d_001a9f44
GUEST_EXPORT(0x001a9f44, d_001a9f44::f_001a9f44);

// f_001aa100: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001aa100 {

struct __attribute__((packed)) Object_001aa100_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_001aa100_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)
inline constexpr guest::Function<0x005d5414, u32(u32, u32, u32, u32)> call_005d5414;  // (from the original)

u32 f_001aa100(gptr<Object_001aa100_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_4 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r1_5 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r1_6 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r1_7 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r1_8 = 0;
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    u32 r1_9 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    u32 r1_10 = 0;
    u32 r0_21 = 0;
    u32 r0_22 = 0;
    u32 r1_11 = 0;
    u32 r0_23 = 0;
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(0x8eb138u);  // (from the original)
    r0_1 = r0 + 0x1824u;  // (from the original)
    r0_2 = call_0056988c(r0_1, 0x8eb138u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r0_3 = r0_2 - 0x28u;  // (from the original)
    r0_4 = call_0056988c(r0_3, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r0_5 = r0_4 - 0x28u;  // (from the original)
    r0_6 = call_0056988c(r0_5, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r0_7 = r0_6 - 0x2cu;  // (from the original)
    r0_8 = call_0056988c(r0_7, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    r0_9 = r0_8 - 0x28u;  // (from the original)
    r0_10 = call_0056988c(r0_9, r1_4, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    r0_11 = r0_10 - 0x28u;  // (from the original)
    r0_12 = call_0056988c(r0_11, r1_5, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_6 = guest::cpu()->r[1];
    r0_13 = r0_12 - 0x248u;  // (from the original)
    r0_14 = call_00567ef0(r0_13, r1_6, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_7 = guest::cpu()->r[1];
    r0_15 = r0_14 - 0x248u;  // (from the original)
    r0_16 = call_00567ef0(r0_15, r1_7, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_8 = guest::cpu()->r[1];
    r0_17 = r0_16 - 0x14cu;  // (from the original)
    r0_18 = call_005bf744(r0_17, r1_8, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_9 = guest::cpu()->r[1];
    r0_19 = r0_18 - 0x14cu;  // (from the original)
    r0_20 = call_005bf744(r0_19, r1_9, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_10 = guest::cpu()->r[1];
    r0_21 = r0_20 - 0x1008u;  // (from the original)
    r0_22 = call_005d5414(r0_21, r1_10, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_11 = guest::cpu()->r[1];
    r0_23 = r0_22 - 0x28u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_11;
    return r0_23;
}

}  // namespace d_001aa100
GUEST_EXPORT(0x001aa100, d_001aa100::f_001aa100);

// f_001aa440: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001aa440 {

inline constexpr guest::Function<0x005664d8, u32(u32, u32, u32, u32)> call_005664d8;  // (from the original)

u32 f_001aa440(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    u32 r12_1 = 0;
    r13 = r13 - 0x10;  // (from the original)
    r2_1 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_005664d8(r0, r1, r2_1, r3);
    *gptr<u32>(r0_1) = u32(0x8eb14cu);  // (from the original)
    r0_2 = r0_1 + 0x10u;  // (from the original)
    r2_2 = u32(*gptr<u8>(r2 + 3u));
    r3_1 = u32(*gptr<u8>(r2 + 2u));
    r12_1 = u32(*gptr<u8>(r2 + 1u));
    *gptr<u8>(r0_2) = u8(u32(*gptr<u8>(r2)));
    *gptr<u8>(r0_2 + 1u) = u8(r12_1);
    *gptr<u8>(r0_2 + 2u) = u8(r3_1);
    *gptr<u8>(r0_2 + 3u) = u8(r2_2);
    *gptr<u8>(r0_1 + 0x14u) = u8(r3);  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r0_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_001aa440
GUEST_EXPORT(0x001aa440, d_001aa440::f_001aa440);

// f_001aa4a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001aa4a0 {

inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> call_00135748;  // (from the original)
inline constexpr guest::Function<0x001357ec, u32(u32, u32, u32, u32)> call_001357ec;  // (from the original)
inline constexpr guest::Function<0x001aa500, u32(u32, u32, u32, u32)> call_001aa500;  // (from the original)
inline constexpr guest::Function<0x001aa8c8, u32(u32, u32, u32, u32)> call_001aa8c8;  // (from the original)

u32 f_001aa4a0(u32 r0, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r6_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r2_2 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 ea_1 = 0;
    r13 = r13 - 0x18;  // (from the original)
    r6_1 = r0 + 0x650u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00135748(r6_1, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    call_001aa8c8(r0, r1_1, r2_1, guest::cpu()->r[3]);
    r2_2 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    r0_1 = call_001aa500(r0, r1, r2_2, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    if (r0_1 >> 0x1f == (r0_1 & (r0_1 ^ r0_1)) >> 0x1f) {  // (from the original)
        ea_1 = r0 + (r0_1 << 4) + 0x18u;  // (from the original)
        r1_2 = *gptr<u32>(ea_1 + 4);
        *gptr<u32>(r2) = u32(*gptr<u32>(ea_1));
        *gptr<u32>(r2 + 4) = u32(r1_2);
    } else {
        *gptr<u32>(r2) = u32(0u);
        *gptr<u32>(r2 + 4u) = u32(0u);
    }
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_001357ec(r6_1, r1_2, r2_3, guest::cpu()->r[3]);
}

}  // namespace d_001aa4a0
GUEST_EXPORT(0x001aa4a0, d_001aa4a0::f_001aa4a0);

// f_001aa500: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001aa500 {

struct __attribute__((packed)) Object_001aa500_0 {
    u8 unknown_0[0x668];  // (not used here)
    u32 word_668;
};
GUEST_OFFSET(Object_001aa500_0, word_668, 0x668);  // (from the original)

struct __attribute__((packed)) Object_001aa500_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_001aa500_1, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x00125110, u32(u32, u32, u32, u32)> call_00125110;  // (from the original)

u32 f_001aa500(gptr<Object_001aa500_0> arg0, gptr<Object_001aa500_1> arg1) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r12 = 0;
    u32 r6_1 = 0;
    u32 r6_2 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 nf_1 = 0;
    u32 zf_1 = 0;
    u32 zf_2 = 0;
    u32 cf_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r2 = arg1->word_0;
    r5 = r1;
    if (r2 == 0) {
        r0_4 = ~0u;
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_4;
    }
    r3 = arg0->word_668;
    r12 = r4 + 0x668u;  // (from the original)
    if (r3 == 0) {
        r0 = 0u;
        goto L_1aa55c;
    }
    r0 = r3 & 1u;
    r1 = 0u;
    if (r0 == 0 || r0 >> 0x1f != (r0 & (r0 ^ r0)) >> 0x1f) {  // (from the original)
        goto L_1aa55c;
    }
    do {
L_1aa540:;
        r6_1 = *gptr<u32>(r4 + (r1 << 4) + 0x10u);  // (from the original)
        if (r6_1 == r2) {
            goto L_1aa5d8;
        }
        r1 = r1 + 1u;
        guest::preempt();
    } while (s32(r0) > s32(r1));
L_1aa55c:;
    if (r3 <= r0) {
        goto L_1aa58c;
    }
    do {
L_1aa564:;
        r1 = r4 + (r0 << 4);
        r6_2 = *gptr<u32>(r1 + 0x10u);  // (from the original)
        if (r6_2 == r2) {
            guest::cpu()->r[13] += 0x10u;  // (from the original)
            guest::cpu()->r[1] = r1;
            return r0;
        }
        r1 = *gptr<u32>(r1 + 0x20u);  // (from the original)
        if (r1 == r2) {
            r0_3 = r0 + 1u;
            guest::cpu()->r[13] += 0x10u;  // (from the original)
            guest::cpu()->r[1] = r1;
            return r0_3;
        }
        r0 = r0 + 2u;
        guest::preempt();
    } while (r3 > r0);
L_1aa58c:;
    r0_1 = r4 + 0x10u;  // (from the original)
    r0_2 = call_00125110(r0_1, r12, 0u, 0x64u);  // (from the original)
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r4 + 0x660u) = u32(r0_2);  // (from the original)
    r2 = *gptr<u32>(r4 + 0x668u);  // (from the original)
    if (r2 == 0) {
        r0 = 0u;
        goto L_1aa5ec;
    }
    r0 = r2 & 1u;
    nf_1 = r0 >> 0x1f;  // (from the original)
    zf_1 = r0 == 0;
    if (!zf_1 && nf_1 == 0u) {
        r3 = *gptr<u32>(r5);
    }
    r1 = 0u;
    if (zf_1 || nf_1 != 0u) {
        goto L_1aa5ec;
    }
L_1aa5c8:;
    if (*gptr<u32>(r4 + (r1 << 4) + 0x10u) != r3) {  // (from the original)
        goto L_1aa5e0;
    }
L_1aa5d8:;
    r0 = r1;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_1aa5e0:;
    r1 = r1 + 1u;
    if (s32(r0) > s32(r1)) {
        guest::preempt();
        goto L_1aa5c8;
    }
L_1aa5ec:;
    zf_2 = r2 == r0;
    cf_1 = r2 >= r0;
    if (cf_1 && !zf_2) {
        r1 = *gptr<u32>(r5);
    }
    if (!cf_1 || zf_2) {
        r0_4 = ~0u;
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_4;
    }
L_1aa5f8:;
    r3_1 = r4 + (r0 << 4);
    if (*gptr<u32>(r3_1 + 0x10u) == r1) {  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (*gptr<u32>(r3_1 + 0x20u) != r1) {  // (from the original)
        goto L_1aa61c;
    }
    r0_3 = r0 + 1u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_3;
L_1aa61c:;
    r0 = r0 + 2u;
    if (r2 > r0) {
        guest::preempt();
        goto L_1aa5f8;
    }
    r0_4 = ~0u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_4;
}

}  // namespace d_001aa500
GUEST_EXPORT(0x001aa500, d_001aa500::f_001aa500);

// f_001aa630: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001aa630 {

struct __attribute__((packed)) Object_001aa630_0 {
    u8 unknown_0[0x664];  // (not used here)
    u8 byte_664;
};
GUEST_OFFSET(Object_001aa630_0, byte_664, 0x664);  // (from the original)

inline constexpr guest::Function<0x0048a6d8, u32(u32, u32, u32, u32)> call_0048a6d8;  // (from the original)

u32 f_001aa630(gptr<Object_001aa630_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 res_1 = 0;
    u32 r1_1 = 0;
    u32 zf_1 = 0;
    guest::cpu()->r[13] -= 8u;
    if (u32(arg0->byte_664) != 1u) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    r0_1 = r0 + 0x65cu;  // (from the original)
    r0_2 = call_0048a6d8(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    res_1 = r0_2 & 0x80000000u;  // (from the original)
    *gptr<u32>(r0 + 0x660u) = u32(r0_2);  // (from the original)
    if (!(res_1 >> 0x1f)) {  // (from the original)
        *gptr<u8>(r0 + 0x664u) = u8(3u);  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = res_1;
        return 1u;
    }
    r1_1 = 0xd860c4f2u;  // (from the original)
    zf_1 = r0_2 == r1_1;
    if (!zf_1) {
        r1_1 = 0xd8a0c4fau;  // (from the original)
        zf_1 = r0_2 == r1_1;
    }
    if (!zf_1) {
        r1_1 = 0xd8a0c4f8u;  // (from the original)
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_001aa630
GUEST_EXPORT(0x001aa630, d_001aa630::f_001aa630);

// f_001aa804: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001aa804 {

inline constexpr guest::Function<0x00124f94, u32(u32, u32, u32, u32)> call_00124f94;  // (from the original)
inline constexpr guest::Function<0x001251b0, u32(u32, u32, u32, u32)> call_001251b0;  // (from the original)
inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> call_00135748;  // (from the original)
inline constexpr guest::Function<0x001357ec, u32(u32, u32, u32, u32)> call_001357ec;  // (from the original)
inline constexpr guest::Function<0x0048a604, u32(u32, u32, u32, u32)> call_0048a604;  // (from the original)

u32 f_001aa804(u32 r0, u32 r1, u32 r2) {
    u32 r5_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 res_1 = 0;
    u32 r1_3 = 0;
    u32 r1_4 = 0;
    u32 r2_2 = 0;
    u32 r0_3 = 0;
    u32 r1_5 = 0;
    u32 nf_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5_1 = r0 + 0x650u;  // (from the original)
    call_00135748(r5_1, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r0_1 = u32(*gptr<u8>(r0 + 0x664u));  // (from the original)
    if (r0_1 == 0) {
        r0_2 = call_00124f94(r0_1, r1_1, r2_1, guest::cpu()->r[3]);
        r1_2 = guest::cpu()->r[1];
        res_1 = r0_2 & 0x80000000u;  // (from the original)
        *gptr<u32>(r0 + 0x660u) = u32(r0_2);  // (from the original)
        if (res_1 >> 0x1f) {  // (from the original)
            call_001357ec(r5_1, r1_2, res_1, guest::cpu()->r[3]);
            r1_3 = guest::cpu()->r[1];
            guest::cpu()->r[13] += 0x10u;  // (from the original)
            guest::cpu()->r[1] = r1_3;
            return 0u;
        }
        *gptr<u8>(r0 + 0x664u) = u8(1u);  // (from the original)
        call_001251b0(0x80u, 1u, res_1, guest::cpu()->r[3]);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
    }
    call_001357ec(r5_1, r1_1, r2_1, guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r0_3 = call_0048a604(r1, r1_4, r2_2, guest::cpu()->r[3]);
    r1_5 = r0_3 & 0x80000000u;  // (from the original)
    nf_1 = r1_5 >> 0x1f;  // (from the original)
    *gptr<u32>(r0 + 0x660u) = u32(r0_3);  // (from the original)
    if (nf_1 != 0u) {
        r1_5 = 0xd860c4f2u;  // (from the original)
    }
    if (nf_1 == 0u) {
        r0_3 = 1u;
    }
    if (nf_1 != 0u) {
        r0_3 = 0u;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_5;
    return r0_3;
}

}  // namespace d_001aa804
GUEST_EXPORT(0x001aa804, d_001aa804::f_001aa804);

// f_001aa88c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001aa88c {

inline constexpr guest::Function<0x00125110, u32(u32, u32, u32, u32)> call_00125110;  // (from the original)
inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> call_00135748;  // (from the original)
inline constexpr guest::Function<0x001357ec, u32(u32, u32, u32, u32)> call_001357ec;  // (from the original)

u32 f_001aa88c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r5_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5_1 = r0 + 0x650u;  // (from the original)
    call_00135748(r5_1, r1, r2, r3);
    r1_1 = r0 + 0x668u;  // (from the original)
    r0_1 = r0 + 0x10u;  // (from the original)
    r0_2 = call_00125110(r0_1, r1_1, 0u, 0x64u);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    *gptr<u32>(r0 + 0x660u) = u32(r0_2);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_001357ec(r5_1, r1_2, r2_1, r3_1);
}

}  // namespace d_001aa88c
GUEST_EXPORT(0x001aa88c, d_001aa88c::f_001aa88c);

// f_001aa8c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001aa8c8 {

struct __attribute__((packed)) Object_001aa8c8_0 {
    u8 unknown_0[0x664];  // (not used here)
    u8 byte_664;
};
GUEST_OFFSET(Object_001aa8c8_0, byte_664, 0x664);  // (from the original)

inline constexpr guest::Function<0x00124f94, u32(u32, u32, u32, u32)> call_00124f94;  // (from the original)
inline constexpr guest::Function<0x00125110, u32(u32, u32, u32, u32)> call_00125110;  // (from the original)
inline constexpr guest::Function<0x001251b0, u32(u32, u32, u32, u32)> call_001251b0;  // (from the original)
inline constexpr guest::Function<0x0048a574, u32(u32, u32, u32, u32)> call_0048a574;  // (from the original)

u32 f_001aa8c8(gptr<Object_001aa8c8_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r3_1 = 0;
    u32 res_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_4 = 0;
    r5 = r0;
    r0_1 = u32(arg0->byte_664);
    r13 = r13 - 0x28u;  // (from the original)
    if (r0_1 == 0) {
        guest::cpu()->r[13] = r13;
        r0_2 = call_00124f94(r0_1, r1, r2, r3);
        r1_1 = guest::cpu()->r[1];
        r3_1 = guest::cpu()->r[3];
        res_1 = r0_2 & 0x80000000u;  // (from the original)
        *gptr<u32>(r5 + 0x660u) = u32(r0_2);  // (from the original)
        if (res_1 >> 0x1f) {  // (from the original)
            r13 = r13 + 0x28u;  // (from the original)
            guest::cpu()->r[1] = r1_1;
            guest::cpu()->r[13] = r13;
            return r0_2;
        }
        *gptr<u8>(r5 + 0x664u) = u8(1u);  // (from the original)
        guest::cpu()->r[13] = r13;
        call_001251b0(0x80u, 1u, res_1, r3_1);  // (from the original)
        r3 = guest::cpu()->r[3];
    }
    r4 = 0u;
L_1aa904:;
    r0_3 = r13;
    guest::cpu()->r[13] = r13;
    r0_4 = call_0048a574(r0_3, 1u, 0u, r3);
    r1_2 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0_4 != 0) {
        r4 = 1u;
        guest::preempt();
        goto L_1aa904;
    }
    if (r4 == 0) {
        r13 = r13 + 0x28u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return r0_4;
    }
    r1_3 = r5 + 0x668u;  // (from the original)
    r0_5 = r5 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_6 = call_00125110(r0_5, r1_3, 0u, 0x64u);  // (from the original)
    r1_4 = guest::cpu()->r[1];
    *gptr<u32>(r5 + 0x660u) = u32(r0_6);  // (from the original)
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[13] = r13;
    return r0_6;
}

}  // namespace d_001aa8c8
GUEST_EXPORT(0x001aa8c8, d_001aa8c8::f_001aa8c8);

// f_001aa94c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001aa94c {

inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> call_00135748;  // (from the original)
inline constexpr guest::Function<0x001357ec, u32(u32, u32, u32, u32)> call_001357ec;  // (from the original)
inline constexpr guest::Function<0x001aa500, u32(u32, u32, u32, u32)> call_001aa500;  // (from the original)
inline constexpr guest::Function<0x001aa8c8, u32(u32, u32, u32, u32)> call_001aa8c8;  // (from the original)

u32 f_001aa94c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r2_2 = 0;
    u32 ea_1 = 0;
    u32 res_1 = 0;
    u32 r12_1 = 0;
    u32 r5_1 = 0;
    u32 ea_2 = 0;
    u32 r5_2 = 0;
    u32 res_2 = 0;
    u32 r4_1 = 0;
    u32 r1_2 = 0;
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    r0_1 = r0 + 0x650u;  // (from the original)
    r6 = r0_1;
    guest::cpu()->r[13] = r13;
    call_00135748(r0_1, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_001aa8c8(r4, r1_1, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (*gptr<u32>(r1) != 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_001aa500(r4, r1, r2_2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 >> 0x1f == (r0 & (r0 ^ r0)) >> 0x1f) {  // (from the original)
            goto L_1aa9e4;
        }
    }
    ea_1 = r1 + 4u;
    r2 = *gptr<u32>(ea_1);
    r1 = *gptr<u32>(ea_1 + 4u);
    res_1 = r2 | r1;
    if (res_1 == 0) {
        goto L_1aa9e0;
    }
    r3 = *gptr<u32>(r4 + 0x668u);  // (from the original)
    r0 = 0u;
    if (r3 < 0u || r3 == 0) {
        goto L_1aa9e0;
    }
    do {
L_1aa9ac:;
        r12_1 = r4 + (r0 << 4);
        r5_1 = *gptr<u32>(r12_1 + 0x10u);  // (from the original)
        if (!(r5_1 != 0)) {
            ea_2 = r12_1 + 0x18u;  // (from the original)
            r5_2 = *gptr<u32>(ea_2) ^ r2;
            res_2 = *gptr<u32>(ea_2 + 4) ^ r1 | r5_2;
            if (res_2 == 0) {
                goto L_1aa9e4;
            }
        }
        r0 = r0 + 1u;
        guest::preempt();
    } while (r3 > r0);
L_1aa9e0:;
    r0 = ~0u;
L_1aa9e4:;
    r4_1 = 1u + u32(s32(r0) >> 0x1f);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_001357ec(r6, 1u, r2, r3);
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r4_1;
}

}  // namespace d_001aa94c
GUEST_EXPORT(0x001aa94c, d_001aa94c::f_001aa94c);

// f_001aa9fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001aa9fc {

inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> call_00135748;  // (from the original)
inline constexpr guest::Function<0x001357ec, u32(u32, u32, u32, u32)> call_001357ec;  // (from the original)
inline constexpr guest::Function<0x001aa500, u32(u32, u32, u32, u32)> call_001aa500;  // (from the original)
inline constexpr guest::Function<0x001aa8c8, u32(u32, u32, u32, u32)> call_001aa8c8;  // (from the original)

u32 f_001aa9fc(u32 r0, u32 r1) {
    u32 r4_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r5_1 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4_1 = r0 + 0x650u;  // (from the original)
    call_00135748(r4_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    call_001aa8c8(r0, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_1 = call_001aa500(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r5_1 = 1u + u32(s32(r0_1) >> 0x1f);  // (from the original)
    call_001357ec(r4_1, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return r5_1;
}

}  // namespace d_001aa9fc
GUEST_EXPORT(0x001aa9fc, d_001aa9fc::f_001aa9fc);

// f_001aadd0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001aadd0 {

inline guest::global<u32, 0x001aadfc> global_001aadfc;  // (from the original)
inline constexpr guest::Function<0x004ee9cc, u32(u32, u32, u32, u32)> call_004ee9cc;  // (from the original)

u32 f_001aadd0(u32 r0, u32 r1, float S0) {
    u32 fpsr = guest::cpu()->fpscr;
    float S1_1 = 0;
    u32 fpsr_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    S1_1 = std::bit_cast<float>(*global_001aadfc);
    fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S1_1, S0);  // (from the original)
    if (!(fpsr_1 >> 0x1e & 1) && fpsr_1 >> 0x1f == (fpsr_1 >> 0x1c & 1)) {  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[1] = S1_1;
        return r0;
    }
    if (r1 >= 4u) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[1] = S1_1;
        return r0;
    }
    r1_1 = r1 + (r1 << 1);
    r0_1 = r0 + (r1_1 << 3) + 0xe0u;  // (from the original)
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1_1;
    return call_004ee9cc(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_001aadd0
GUEST_EXPORT(0x001aadd0, d_001aadd0::f_001aadd0);

// f_001aaed4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001aaed4 {

inline guest::global<u8, 0x00952d18> global_00952d18;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x00745d44, u32(u32, u32, u32, u32)> call_00745d44;  // (from the original)

u32 f_001aaed4(u32 r0) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_4 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_5 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r1_6 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r1_7 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r1_8 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r1_9 = 0;
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    u32 r1_10 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    u32 r1_11 = 0;
    u32 r0_21 = 0;
    u32 r0_22 = 0;
    u32 r1_12 = 0;
    u32 r0_23 = 0;
    u32 r0_24 = 0;
    u32 r1_13 = 0;
    u32 r0_25 = 0;
    u32 r0_26 = 0;
    u32 r0_27 = 0;
    u32 r1_14 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = r0 + 0x78u;  // (from the original)
    r1_1 = *gptr<u32>(0x952d18u + 8u);  // (from the original)
    r0_2 = call_00745d44(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r0 + 0x9cu) = u32(r0_2);  // (from the original)
    r1_2 = *gptr<u32>(0x952d18u + 4u);  // (from the original)
    r0_3 = r0 + 0x78u;  // (from the original)
    r0_4 = call_00745d44(r0_3, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r0 + 0xa0u) = u32(r0_4);  // (from the original)
    r1_3 = *gptr<u32>(0x952d18u + 0x18u);  // (from the original)
    r0_5 = r0 + 0x78u;  // (from the original)
    r0_6 = call_00745d44(r0_5, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r0 + 0xa4u) = u32(r0_6);  // (from the original)
    r1_4 = *gptr<u32>(0x952d18u + 0x1cu);  // (from the original)
    r0_7 = r0 + 0x78u;  // (from the original)
    r0_8 = call_00745d44(r0_7, r1_4, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r0 + 0xa8u) = u32(r0_8);  // (from the original)
    r1_5 = *gptr<u32>(0x952d18u + 0x28u);  // (from the original)
    r0_9 = r0 + 0x78u;  // (from the original)
    r0_10 = call_00745d44(r0_9, r1_5, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r0 + 0xacu) = u32(r0_10);  // (from the original)
    r1_6 = *gptr<u32>(0x952d18u + 0x2cu);  // (from the original)
    r0_11 = r0 + 0x78u;  // (from the original)
    r0_12 = call_00745d44(r0_11, r1_6, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r0 + 0xb0u) = u32(r0_12);  // (from the original)
    r1_7 = *gptr<u32>(0x952d18u + 0x30u);  // (from the original)
    r0_13 = r0 + 0x78u;  // (from the original)
    r0_14 = call_00745d44(r0_13, r1_7, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r0 + 0xb4u) = u32(r0_14);  // (from the original)
    r1_8 = *gptr<u32>(0x952d18u + 0xcu);  // (from the original)
    r0_15 = r0 + 0x78u;  // (from the original)
    r0_16 = call_00745d44(r0_15, r1_8, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r0 + 0xb8u) = u32(r0_16);  // (from the original)
    r1_9 = *gptr<u32>(0x952d18u + 0x10u);  // (from the original)
    r0_17 = r0 + 0x78u;  // (from the original)
    r0_18 = call_00745d44(r0_17, r1_9, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r0 + 0xbcu) = u32(r0_18);  // (from the original)
    r1_10 = *gptr<u32>(0x952d18u + 0x14u);  // (from the original)
    r0_19 = r0 + 0x78u;  // (from the original)
    r0_20 = call_00745d44(r0_19, r1_10, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r0 + 0xc0u) = u32(r0_20);  // (from the original)
    r1_11 = *gptr<u32>(0x952d18u + 0x34u);  // (from the original)
    r0_21 = r0 + 0x78u;  // (from the original)
    r0_22 = call_00745d44(r0_21, r1_11, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_12 = guest::cpu()->r[1];
    *gptr<u32>(r0 + 0xc4u) = u32(r0_22);  // (from the original)
    r0_23 = call_002f74c8(r0_22, r1_12, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_24 = call_002f74e0(0x20u, r0_23, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_13 = guest::cpu()->r[1];
    if (r0_24 != 0) {
        goto L_1aaff0;
    }
    r0_24 = call_002f74c8(r0_24, r1_13, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_13 = guest::cpu()->r[1];
    if (r0_24 == 0x4au) {  // (from the original)
        goto L_1aaff0;
    }
    r0_24 = call_002f74c8(r0_24, r1_13, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_13 = guest::cpu()->r[1];
    if (r0_24 == 0x4bu) {  // (from the original)
        goto L_1aaff0;
    }
    r0_24 = call_002f74c8(r0_24, r1_13, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_13 = guest::cpu()->r[1];
    if (r0_24 == 0x4cu) {  // (from the original)
        goto L_1aaff0;
    }
    r0_25 = call_002f74c8(r0_24, r1_13, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_24 = call_002f74e0(0x400000u, r0_25, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_13 = guest::cpu()->r[1];
    if (r0_24 != 0) {
        r0_24 = 2u;
        *global_00952d18 = u8(r0_24);
        goto L_1aaff4;
    }
L_1aaff0:;
    *global_00952d18 = u8(0u);
L_1aaff4:;
    r0_26 = call_002f74c8(r0_24, r1_13, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_27 = call_002f74e0(0x20u, r0_26, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_14 = guest::cpu()->r[1];
    *gptr<u8>(r0 + 0x141u) = u8(r0_27);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_14;
    return r0_27;
}

}  // namespace d_001aaed4
GUEST_EXPORT(0x001aaed4, d_001aaed4::f_001aaed4);

// f_001ab060: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001ab060 {

struct __attribute__((packed)) Object_001ab060_0 {
    u8 unknown_0[0x1c];  // (not used here)
    u32 word_1c;
    u8 unknown_20[0x4];  // (not used here)
    u32 word_24;
};
GUEST_OFFSET(Object_001ab060_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_001ab060_0, word_24, 0x24);  // (from the original)

inline constexpr guest::Function<0x0049fffc, u32(u32, u32, u32, u32)> call_0049fffc;  // (from the original)

u32 f_001ab060(gptr<Object_001ab060_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    r2_1 = arg0->word_1c;
    if (r2_1 == 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1_1 = arg0->word_24;
    return call_0049fffc(r2_1, r1_1, r2_1, guest::cpu()->r[3]);
}

}  // namespace d_001ab060
GUEST_EXPORT(0x001ab060, d_001ab060::f_001ab060);

// f_001ab2ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001ab2ec {

struct __attribute__((packed)) Object_001ab2ec_0 {
    u8 unknown_0[0x18];  // (not used here)
    u32 word_18;
};
GUEST_OFFSET(Object_001ab2ec_0, word_18, 0x18);  // (from the original)

inline guest::global<u32, 0x001ab3c0> global_001ab3c0;  // (from the original)
inline constexpr guest::Function<0x0014f378, u32(u32, u32, u32, u32)> call_0014f378;  // (from the original)
inline constexpr guest::Function<0x0056a224, u32(u32, u32, u32, u32)> call_0056a224;  // (from the original)

u32 f_001ab2ec(gptr<Object_001ab2ec_0> arg0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r4_1 = 0;
    u32 zf_1 = 0;
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r3_2 = 0;
    u32 ea_1 = 0;
    u32 r2_2 = 0;
    r4_1 = r0;
    zf_1 = r2 == 0;
    r5_1 = r2;
    if (zf_1) {
        r5_1 = arg0->word_18;
    }
    r13 = r13 - 0x28u;  // (from the original)
    if (zf_1) {
        zf_1 = r5_1 == 0;
    }
    if (zf_1) {
        r13 = r13 + 0x28u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    r0_1 = r13 + 4u;
    r1_1 = r4_1 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    call_0014f378(r0_1, r1_1, r4_1, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    S0_1 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    S2_1 = guest::cpu()->s[2];
    *gptr<u16>(r13) = u16(u32(*gptr<u16>(r1 + 0x92u)));  // (from the original)
    r1_2 = *gptr<u32>(r13);
    r0_2 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    r0 = call_0056a224(r0_2, r1_2, r2_1, r3_1);
    r1 = guest::cpu()->r[1];
    S1 = std::bit_cast<float>(*gptr<u32>(r5_1 + 8u));
    *gptr<u32>(r5_1) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r5_1)) + std::bit_cast<float>(*gptr<u32>(r13 + 4u))));
    S0 = S1 + std::bit_cast<float>(*gptr<u32>(r13 + 0xcu));  // (from the original)
    *gptr<u32>(r5_1 + 8u) = u32(std::bit_cast<u32>(S0));
    if (r3 == 0) {
        r13 = r13 + 0x28u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    S0 = std::bit_cast<float>(*global_001ab3c0);
    *gptr<u32>(r4_1 + 8u) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r4_1) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r4_1 + 0x14u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r4_1 + 0xcu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    r0_3 = *gptr<u32>(r4_1 + 0x20u);  // (from the original)
    r1_3 = *gptr<u32>(r4_1 + 0x10u);  // (from the original)
    *gptr<u32>(r0_3 + 0xcu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r0_3 + 0x1cu) = u32(r1_3);  // (from the original)
    *gptr<u32>(r0_3 + 0x2cu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r0_3 + 0x3cu) = u32(*gptr<u32>(r0_3 + 0x3cu) | 0x800u);  // (from the original)
    r3_2 = *gptr<u32>(r4_1);
    r0 = *gptr<u32>(r4_1 + 0x1cu);  // (from the original)
    ea_1 = r4_1 + 4u;
    r2_2 = *gptr<u32>(ea_1 + 4);
    *gptr<u32>(r0 + 0x1cu) = u32(*gptr<u32>(ea_1));  // (from the original)
    *gptr<u32>(r0 + 0x2cu) = u32(r2_2);  // (from the original)
    *gptr<u32>(r0 + 0xcu) = u32(r3_2);  // (from the original)
    r1 = *gptr<u32>(r0 + 0x3cu) | 0x800u;  // (from the original)
    *gptr<u32>(r0 + 0x3cu) = u32(r1);  // (from the original)
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_001ab2ec
GUEST_EXPORT(0x001ab2ec, d_001ab2ec::f_001ab2ec);

// f_001ab70c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001ab70c {

inline constexpr guest::Function<0x004edaec, u32(u32, u32, u32, u32)> call_004edaec;  // (from the original)
inline constexpr guest::Function<0x004ee904, u32(u32, u32, u32, u32)> call_004ee904;  // (from the original)
inline constexpr guest::Function<0x004eefe0, u32(u32, u32, u32, u32)> call_004eefe0;  // (from the original)
inline constexpr guest::Function<0x0076f954, u32(u32, u32, u32, u32)> call_0076f954;  // (from the original)

u32 f_001ab70c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    u32 r0_4 = 0;
    u32 r2_3 = 0;
    u32 r3_2 = 0;
    u32 r1_3 = 0;
    u32 r0_5 = 0;
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_0076f954(0xa14b5cu, r1, r2, r3);  // (from the original)
    *gptr<u32>(r13) = u32(r3);
    r2_1 = *gptr<u32>(r0_1);
    r1_1 = r0 + 0x78u;  // (from the original)
    r0_2 = r0 + 0xccu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_004eefe0(r0_2, r1_1, r2_1, r2);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_3 != 0) {
        r0_4 = r0 + 0xe0u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_004ee904(r0_4, 1u, r2_2, r3_1);
        r2_3 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        r1_3 = r0 + 0xccu;  // (from the original)
        r0_5 = r0 + 0x78u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_004edaec(r0_5, r1_3, r2_3, r3_2);
        r1_2 = guest::cpu()->r[1];
        r0_3 = 1u;
    }
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_001ab70c
GUEST_EXPORT(0x001ab70c, d_001ab70c::f_001ab70c);

// f_001abcd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001abcd4 {

struct __attribute__((packed)) Object_001abcd4_0 {
    u8 unknown_0[0x68];  // (not used here)
    u16 half_68;
    u16 half_6a;
    u16 half_6c;
    u16 half_6e;
    u16 half_70;
    u16 half_72;
    u16 half_74;
    u16 half_76;
    u8 unknown_78[0x4];  // (not used here)
    u32 word_7c;
};
GUEST_OFFSET(Object_001abcd4_0, half_68, 0x68);  // (from the original)
GUEST_OFFSET(Object_001abcd4_0, half_6a, 0x6a);  // (from the original)
GUEST_OFFSET(Object_001abcd4_0, half_6c, 0x6c);  // (from the original)
GUEST_OFFSET(Object_001abcd4_0, half_6e, 0x6e);  // (from the original)
GUEST_OFFSET(Object_001abcd4_0, half_70, 0x70);  // (from the original)
GUEST_OFFSET(Object_001abcd4_0, half_72, 0x72);  // (from the original)
GUEST_OFFSET(Object_001abcd4_0, half_74, 0x74);  // (from the original)
GUEST_OFFSET(Object_001abcd4_0, half_76, 0x76);  // (from the original)
GUEST_OFFSET(Object_001abcd4_0, word_7c, 0x7c);  // (from the original)

inline constexpr guest::Function<0x004ef3a4, u32(u32, u32, u32, u32)> call_004ef3a4;  // (from the original)
inline constexpr guest::Function<0x004f1270, u32(u32, u32, u32, u32)> call_004f1270;  // (from the original)

u32 f_001abcd4(gptr<Object_001abcd4_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 8u;
    arg0->half_68 = u16(0x276u);  // (from the original)
    arg0->half_70 = u16(0x276u);  // (from the original)
    arg0->half_6a = u16(0x276u);  // (from the original)
    arg0->half_72 = u16(0x276u);  // (from the original)
    arg0->half_6c = u16(0x276u);  // (from the original)
    arg0->half_74 = u16(0x276u);  // (from the original)
    arg0->half_6e = u16(0x276u);  // (from the original)
    arg0->half_76 = u16(0x276u);  // (from the original)
    if (arg0->word_7c != 0) {
        r0_1 = r0 + 0x78u;  // (from the original)
        call_004f1270(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r0_2 = r0 + 0xccu;  // (from the original)
    call_004ef3a4(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    return 1u;
}

}  // namespace d_001abcd4
GUEST_EXPORT(0x001abcd4, d_001abcd4::f_001abcd4);

// f_001abfb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001abfb4 {

inline constexpr guest::Function<0x001abd24, u32(u32, u32, u32, u32)> call_001abd24;  // (from the original)

u32 f_001abfb4(u32 r0_unused, u32 r1_unused, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r12_1 = 0;
    float S3_1 = 0;
    float S4_1 = 0;
    u32 r12_2 = 0;
    r13 = r13 - 0x10u;  // (from the original)
    r12_1 = r13 + 0x10u;  // (from the original)
    S3_1 = std::bit_cast<float>(*gptr<u32>(r12_1));
    S4_1 = std::bit_cast<float>(*gptr<u32>(r12_1 + 4));
    r12_2 = r13 + 4u;
    *gptr<u32>(r13) = u32(r3);
    *gptr<u32>(r12_2) = u32(std::bit_cast<u32>(S3_1));
    *gptr<u32>(r12_2 + 4) = u32(std::bit_cast<u32>(S4_1));
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[3] = S3_1;
    guest::cpu()->s[4] = S4_1;
    call_001abd24(guest::cpu()->r[0], guest::cpu()->r[1], 0u, r2);
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return guest::cpu()->r[0];
}

}  // namespace d_001abfb4
GUEST_EXPORT(0x001abfb4, d_001abfb4::f_001abfb4);

// f_001ac668: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001ac668 {

struct __attribute__((packed)) Object_001ac668_0 {
    u8 unknown_0[0x30];  // (not used here)
    u16 half_30;
    u16 half_32;
    u8 unknown_34[0x4];  // (not used here)
    u16 half_38;
    u8 unknown_3a[0xe];  // (not used here)
    u32 word_48;
    u32 word_4c;
    u32 word_50;
};
GUEST_OFFSET(Object_001ac668_0, half_30, 0x30);  // (from the original)
GUEST_OFFSET(Object_001ac668_0, half_32, 0x32);  // (from the original)
GUEST_OFFSET(Object_001ac668_0, half_38, 0x38);  // (from the original)
GUEST_OFFSET(Object_001ac668_0, word_48, 0x48);  // (from the original)
GUEST_OFFSET(Object_001ac668_0, word_4c, 0x4c);  // (from the original)
GUEST_OFFSET(Object_001ac668_0, word_50, 0x50);  // (from the original)


void f_001ac668(gptr<Object_001ac668_0> arg0, gptr<Float3> arg1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r12_1 = 0;
    float S0_1 = 0;
    u32 r1_1 = 0;
    r12_1 = *gptr<u32>(r13);
    arg0->half_38 = u16(r2);
    arg0->word_48 = u32(std::bit_cast<u32>(arg1->v[0]));
    S0_1 = arg1->v[1];
    arg0->word_4c = u32(std::bit_cast<u32>(S0_1));
    r1_1 = std::bit_cast<u32>(arg1->v[2]);
    arg0->word_50 = u32(r1_1);
    arg0->half_30 = u16(r3);
    arg0->half_32 = u16(r12_1);
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_1;
    return;
}

}  // namespace d_001ac668
GUEST_EXPORT(0x001ac668, d_001ac668::f_001ac668);

// f_001aca90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001aca90 {

struct __attribute__((packed)) Object_001aca90_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_001aca90_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f7710, u32(u32, u32, u32, u32)> call_002f7710;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)

u32 f_001aca90(gptr<Object_001aca90_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r4_1 = 0;
    u32 r0_7 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_10 = 0;
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
    u32 r1_10 = 0;
    u32 r2_11 = 0;
    u32 r3_11 = 0;
    u32 r0_24 = 0;
    u32 r0_25 = 0;
    u32 r1_11 = 0;
    u32 r2_12 = 0;
    u32 r3_12 = 0;
    u32 r0_26 = 0;
    u32 r0_27 = 0;
    u32 r1_12 = 0;
    u32 r2_13 = 0;
    u32 r3_13 = 0;
    u32 r0_28 = 0;
    u32 r0_29 = 0;
    u32 r1_13 = 0;
    u32 r0_30 = 0;
    r13 = r13 - 8;
    arg0->word_0 = u32(0x8eb1a8u);  // (from the original)
    r0_1 = r0 + 0xbccu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f76ac(r0_1, 0x2b6ef8u, 0xe0u, 8u);  // (from the original)
    r0_2 = r0 + 0xaecu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f76ac(r0_2, 0x1c81ccu, 0x1cu, 8u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    *gptr<u32>(r0) = u32(0x8eb3f8u);  // (from the original)
    r0_3 = r0 + 0xa00u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_002f7710(r0_3, r1_1, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    ea_1 = r0_4 - 0xa00u;  // (from the original)
    *gptr<u32>(ea_1) = u32(0x8eb984u);  // (from the original)
    ea_2 = ea_1 + 0x224u;  // (from the original)
    *gptr<u32>(ea_2) = u32(0x8f0888u);  // (from the original)
    r0_5 = ea_2 + 0x608u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_6 = call_002f7710(r0_5, 0x8f0888u, r2_2, r3_2);  // (from the original)
    r4_1 = r0_6 - 0x608u;  // (from the original)
    r0_7 = r0_6 - 0x1c0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f76ac(r0_7, 0x2b6ef8u, 0xe0u, 2u);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_8 = r4_1 + 0x410u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_9 = call_0056988c(r0_8, r1_2, r2_3, r3_3);
    r1_3 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_10 = r0_9 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_11 = call_0056988c(r0_10, r1_3, r2_4, r3_4);
    r1_4 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_12 = r0_11 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_13 = call_0056988c(r0_12, r1_4, r2_5, r3_5);
    r1_5 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_14 = r0_13 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_15 = call_0056988c(r0_14, r1_5, r2_6, r3_6);
    r1_6 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_16 = r0_15 - 0x14cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_17 = call_005bf744(r0_16, r1_6, r2_7, r3_7);
    r1_7 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r0_18 = r0_17 - 0x248u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_19 = call_00567ef0(r0_18, r1_7, r2_8, r3_8);
    r1_8 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r0_20 = r0_19 - 0x38u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_21 = call_0056988c(r0_20, r1_8, r2_9, r3_9);
    r1_9 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r0_22 = r0_21 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_23 = call_0056988c(r0_22, r1_9, r2_10, r3_10);
    r1_10 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    r0_24 = r0_23 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_25 = call_0056988c(r0_24, r1_10, r2_11, r3_11);
    r1_11 = guest::cpu()->r[1];
    r2_12 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    r0_26 = r0_25 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_27 = call_0056988c(r0_26, r1_11, r2_12, r3_12);
    r1_12 = guest::cpu()->r[1];
    r2_13 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    r0_28 = r0_27 - 0x14cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_29 = call_005bf744(r0_28, r1_12, r2_13, r3_13);
    r1_13 = guest::cpu()->r[1];
    r0_30 = r0_29 - 0x2cu;  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_13;
    guest::cpu()->r[13] = r13;
    return r0_30;
}

}  // namespace d_001aca90
GUEST_EXPORT(0x001aca90, d_001aca90::f_001aca90);

// f_001accd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001accd4 {

inline constexpr guest::Function<0x0020ce94, u32(u32, u32, u32, u32)> call_0020ce94;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)

u32 f_001accd4(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    if (r1 != 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        r0_1 = r0 + 0x10u;  // (from the original)
        return call_0020ce94(r0_1, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r6 = r0 + 0x10u;  // (from the original)
    r0_2 = call_002fb328(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r5 = r0_2 + 0x6adb8u;  // (from the original)
    r4 = 0u;
    do {
L_1acd0c:;
        r1_1 = r5 + (r4 << 2);
        r0_3 = r6 + (r4 << 2);
        r0_4 = call_002fc8e8(r0_3, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_2 = guest::cpu()->r[1];
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 4u);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return r0_4;
}

}  // namespace d_001accd4
GUEST_EXPORT(0x001accd4, d_001accd4::f_001accd4);

// f_001acf0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001acf0c {

inline guest::global<u32, 0x001ad068> global_001ad068;  // (from the original)
inline guest::global<u32, 0x001ad07c> global_001ad07c;  // (from the original)
inline guest::global<u32, 0x0094fcfc> global_0094fcfc;  // (from the original)
inline guest::global<u32, 0x0098c334> global_0098c334;  // (from the original)
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;  // (from the original)
inline constexpr guest::Function<0x004b9b64, u32(u32, u32, u32, u32)> call_004b9b64;  // (from the original)
inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> call_0056878c;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)
inline constexpr guest::Function<0x00569420, u32(u32, u32, u32, u32)> call_00569420;  // (from the original)
inline constexpr guest::Function<0x005697e0, u32(u32, u32, u32, u32)> call_005697e0;  // (from the original)
inline constexpr guest::Function<0x00583a18, u32(u32, u32, u32, u32)> call_00583a18;  // (from the original)
inline constexpr guest::Function<0x005e2e50, u32(u32, u32, u32, u32)> call_005e2e50;  // (from the original)
inline constexpr guest::Function<0x005e2f94, u32(u32, u32, u32, u32)> call_005e2f94;  // (from the original)

u32 f_001acf0c(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r7_1 = 0;
    u32 r6_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 ea_1 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    float S1_2 = 0;
    float S2_2 = 0;
    u32 r0_7 = 0;
    float S0_2 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    float S0_3 = 0;
    float S1_3 = 0;
    float S2_3 = 0;
    u32 r1_4 = 0;
    u32 r0_8 = 0;
    u32 r1_5 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    float S1_4 = 0;
    float S2_4 = 0;
    u32 r0_9 = 0;
    float S0_4 = 0;
    u32 r1_6 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    float S0_5 = 0;
    float S1_5 = 0;
    float S2_5 = 0;
    u32 r0_10 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    float S0_6 = 0;
    float S1_6 = 0;
    float S2_6 = 0;
    u32 r1_7 = 0;
    u32 r0_11 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    float S0_7 = 0;
    float S1_7 = 0;
    float S2_7 = 0;
    u32 r1_8 = 0;
    u32 r0_12 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    float S0_8 = 0;
    float S1_8 = 0;
    float S2_8 = 0;
    u32 r1_9 = 0;
    u32 r0_13 = 0;
    u32 r1_10 = 0;
    u32 r2_9 = 0;
    u32 r3_9 = 0;
    float S0_9 = 0;
    float S1_9 = 0;
    float S2_9 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r1_11 = 0;
    u32 r2_10 = 0;
    u32 r3_10 = 0;
    float S0_10 = 0;
    float S1_10 = 0;
    float S2_10 = 0;
    u32 zf_1 = 0;
    u32 cf_1 = 0;
    u32 r1_12 = 0;
    u32 r0_16 = 0;
    r13 = r13 - 0x18;  // (from the original)
    r7_1 = r2;
    r6_1 = r3;
    if ((*gptr<u32>(0x94fcfcu + 4u) & 1u) != 0) {  // (from the original)
        goto L_1acf5c;
    }
    r0_1 = 0x94fcfcu + 4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0_2 = call_002fe7dc(r0_1, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    if (r0_2 == 0) {
        goto L_1acf5c;
    }
    S0 = std::bit_cast<float>(*global_001ad068);
    *global_0098c334 = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(0x98c334u + 4u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(0x98c334u + 8u) = u32(std::bit_cast<u32>(S0));  // (from the original)
L_1acf5c:;
    r0_3 = r0 + 4u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0_4 = call_0056878c(r0_3, 0x1ad070u, r2, r3);  // (from the original)
    S0_1 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    S2_1 = guest::cpu()->s[2];
    r1_1 = *global_0098c334;
    r2_1 = *gptr<u32>(0x98c334u + 4);  // (from the original)
    r3_1 = *gptr<u32>(0x98c334u + 8);  // (from the original)
    ea_1 = r0_4 + 0x34u;  // (from the original)
    *gptr<u32>(ea_1) = u32(r1_1);
    *gptr<u32>(ea_1 + 4) = u32(r2_1);
    *gptr<u32>(ea_1 + 8) = u32(r3_1);
    *gptr<u8>(r0_4 + 0xb7u) = u8(u32(*gptr<u8>(r0_4 + 0xb7u)) & 0xcfu);  // (from the original)
    *gptr<u8>(r0 + 0x3d8u) = u8(r1);  // (from the original)
    if (r6_1 != 0) {
        S2_1 = std::bit_cast<float>(*global_001ad07c);
        r0_5 = *gptr<u32>(r0 + 0x150u);  // (from the original)
        S1_1 = float(std::bit_cast<u32>(std::bit_cast<float>(r1)));
        S0_1 = std::bit_cast<float>(*gptr<u32>(r0 + 0x3ccu)) + S1_1 * S2_1;  // (from the original)
        *gptr<u32>(r0_5 + 0x2cu) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
        *gptr<u8>(r0_5 + 0xb7u) = u8(u32(*gptr<u8>(r0_5 + 0xb7u)) & 0xcfu);  // (from the original)
    }
    r1_2 = r0 + 0x21cu;  // (from the original)
    r0_6 = r0 + 4u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    call_004b9b64(r0_6, r1_2, r2_1, r3_1);
    r1_3 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    S1_2 = guest::cpu()->s[1];
    S2_2 = guest::cpu()->s[2];
    r0_7 = r0 + 0x21cu;  // (from the original)
    S0_2 = float(std::bit_cast<u32>(std::bit_cast<float>(u32(*gptr<u8>(r0 + 0x3d8u)))));  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    guest::cpu()->s[2] = S2_2;
    call_005697e0(r0_7, r1_3, r2_2, r3_2);
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    S0_3 = guest::cpu()->s[0];
    S1_3 = guest::cpu()->s[1];
    S2_3 = guest::cpu()->s[2];
    r1_4 = r0 + 0x244u;  // (from the original)
    r0_8 = r0 + 4u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_3;
    guest::cpu()->s[2] = S2_3;
    call_004b9b64(r0_8, r1_4, r2_3, r3_3);
    r1_5 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    S1_4 = guest::cpu()->s[1];
    S2_4 = guest::cpu()->s[2];
    r0_9 = r0 + 0x244u;  // (from the original)
    S0_4 = float(std::bit_cast<u32>(std::bit_cast<float>(u32(*gptr<u8>(r0 + 0x3d8u)))));  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_4;
    guest::cpu()->s[2] = S2_4;
    call_005697e0(r0_9, r1_5, r2_4, r3_4);
    r1_6 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    S0_5 = guest::cpu()->s[0];
    S1_5 = guest::cpu()->s[1];
    S2_5 = guest::cpu()->s[2];
    r0_10 = r0 + 4u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_5;
    guest::cpu()->s[1] = S1_5;
    guest::cpu()->s[2] = S2_5;
    call_00568c10(r0_10, r1_6, r2_5, r3_5);
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    S0_6 = guest::cpu()->s[0];
    S1_6 = guest::cpu()->s[1];
    S2_6 = guest::cpu()->s[2];
    r1_7 = r0 + 0x21cu;  // (from the original)
    r0_11 = r0 + 4u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_6;
    guest::cpu()->s[1] = S1_6;
    guest::cpu()->s[2] = S2_6;
    call_00569420(r0_11, r1_7, r2_6, r3_6);
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    S0_7 = guest::cpu()->s[0];
    S1_7 = guest::cpu()->s[1];
    S2_7 = guest::cpu()->s[2];
    r1_8 = r0 + 0x244u;  // (from the original)
    r0_12 = r0 + 4u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_7;
    guest::cpu()->s[1] = S1_7;
    guest::cpu()->s[2] = S2_7;
    call_00569420(r0_12, r1_8, r2_7, r3_7);
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    S0_8 = guest::cpu()->s[0];
    S1_8 = guest::cpu()->s[1];
    S2_8 = guest::cpu()->s[2];
    r1_9 = *gptr<u32>(r0) + (u32(*gptr<u8>(r0 + 0x3d8u)) << 5);  // (from the original)
    r0_13 = r0 + 0x158u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_8;
    guest::cpu()->s[1] = S1_8;
    guest::cpu()->s[2] = S2_8;
    call_005e2e50(r0_13, r1_9, r2_8, r3_8);
    r1_10 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    S0_9 = guest::cpu()->s[0];
    S1_9 = guest::cpu()->s[1];
    S2_9 = guest::cpu()->s[2];
    r0_14 = r0 + 0x158u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_9;
    guest::cpu()->s[1] = S1_9;
    guest::cpu()->s[2] = S2_9;
    r0_15 = call_005e2f94(r0_14, r1_10, r2_9, r3_9);
    r1_11 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    S0_10 = guest::cpu()->s[0];
    S1_10 = guest::cpu()->s[1];
    S2_10 = guest::cpu()->s[2];
    zf_1 = r7_1 == 0;
    cf_1 = r7_1 >= 0u;
    if (!zf_1) {
        r0_15 = u32(*gptr<u8>(r0 + 0x3d8u));  // (from the original)
        zf_1 = r0_15 == 1u;
        cf_1 = r0_15 >= 1u;
    }
    if (!!cf_1 && !zf_1) {
        r1_12 = u32(*gptr<u8>(0x84b478u + r0_15));  // (from the original)
        r0_16 = *global_0094fcfc;
        r13 = r13 + 0x18;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_10;
        guest::cpu()->s[1] = S1_10;
        guest::cpu()->s[2] = S2_10;
        return call_00583a18(r0_16, r1_12, r2_10, r3_10);
    }
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_11;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_10;
    guest::cpu()->s[1] = S1_10;
    return r0_15;
}

}  // namespace d_001acf0c
GUEST_EXPORT(0x001acf0c, d_001acf0c::f_001acf0c);

// f_001ad2e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001ad2e4 {

struct __attribute__((packed)) Object_001ad2e4_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_001ad2e4_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_001ad2e4_0, word_4, 0x4);  // (from the original)


void f_001ad2e4(gptr<Object_001ad2e4_0> arg0, u32 r1) {
    arg0->word_0 = u32(r1);
    arg0->word_4 = u32(0u);
    return;
}

}  // namespace d_001ad2e4
GUEST_EXPORT(0x001ad2e4, d_001ad2e4::f_001ad2e4);

// f_001ad5c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001ad5c8 {

inline guest::global<u8, 0x009535d5> global_009535d5;  // (from the original)
inline constexpr guest::Function<0x00308d4d, u32(u32, u32, u32, u32)> call_00308d4c;  // (from the original)

u32 f_001ad5c8() {
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 cf = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 res_1 = 0;
    guest::cpu()->r[13] -= 0x20u;  // (from the original)
    r5 = ~0u;
    r8 = 0u;
    r4 = r8;
    r9 = 0xa21c48u;  // (from the original)
    r6 = 0xa187d8u;  // (from the original)
    r7 = r9 - 0x10u;  // (from the original)
    goto L_1ad5f0;
L_1ad5e8:;
    if (cf) {
        r0 = 0xa21c48u;  // (from the original)
        goto L_1ad5f4;
    }
L_1ad5f0:;
    r0 = r9 + (r4 << 2);
L_1ad5f4:;
    *gptr<u32>(r0) = u32(r5);
    if (r4 >= 4u) {
        r0_1 = 0xa187d8u;  // (from the original)
    } else {
        r0_1 = r6 + (r4 * 0x4a3u << 3);  // (from the original)
    }
    call_00308d4c(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r4 >= 4u) {
        r0_2 = 0xa21c38u;  // (from the original)
    } else {
        r0_2 = r7 + (r4 << 2);
    }
    r4 = r4 + 1u;
    res_1 = r4 - 4u;
    cf = r4 >= 4u;
    *gptr<u32>(r0_2) = u32(r8);
    if (res_1 >> 0x1f != ((r4 ^ 4u) & (r4 ^ res_1)) >> 0x1f) {  // (from the original)
        guest::preempt();
        goto L_1ad5e8;
    }
    *global_009535d5 = u8(r8);
    guest::cpu()->r[13] += 0x20u;  // (from the original)
    return 0x9535d5u;  // (from the original)
}

}  // namespace d_001ad5c8
GUEST_EXPORT(0x001ad5c8, d_001ad5c8::f_001ad5c8);

// f_001add58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001add58 {

inline guest::global<u32, 0x009529cc> global_009529cc;  // (from the original)
inline constexpr guest::Function<0x00100b8d, u32(u32, u32, u32, u32)> call_00100b8c;  // (from the original)
inline constexpr guest::Function<0x00100d2d, u32(u32, u32, u32, u32)> call_00100d2c;  // (from the original)
inline constexpr guest::Function<0x00112d9d, u32(u32, u32, u32, u32)> call_00112d9c;  // (from the original)
inline constexpr guest::Function<0x001138dd, u32(u32, u32, u32, u32)> call_001138dc;  // (from the original)
inline constexpr guest::Function<0x00113d15, u32(u32, u32, u32, u32)> call_00113d14;  // (from the original)
inline constexpr guest::Function<0x00114089, u32(u32, u32, u32, u32)> call_00114088;  // (from the original)
inline constexpr guest::Function<0x001aa9fc, u32(u32, u32, u32, u32)> call_001aa9fc;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb310, u32(u32, u32, u32, u32)> call_002fb310;  // (from the original)
inline constexpr guest::Function<0x002ff408, u32(u32, u32, u32, u32)> call_002ff408;  // (from the original)
inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> call_00301e20;  // (from the original)
inline constexpr guest::Function<0x00311c50, u32(u32, u32, u32, u32)> call_00311c50;  // (from the original)
inline constexpr guest::Function<0x00758bac, u32(u32, u32, u32, u32)> call_00758bac;  // (from the original)

u32 f_001add58(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r5 = guest::cpu()->r[5];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_4 = 0;
    u32 r4_1 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_4 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_5 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r1_6 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r4_2 = 0;
    u32 r0_11 = 0;
    u32 r1_7 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_12 = 0;
    u32 r1_8 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 ea_1 = 0;
    u32 r1_9 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r1_10 = 0;
    r13 = r13 - 0x2558u;  // (from the original)
    r5 = r13;
    guest::cpu()->r[13] = r13;
    call_00113d14(r5, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_001138dc(r5, r0, r2_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_1 = call_00301e20(r5, r1_1, r2_2, r3_2);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        goto L_1adeac;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fae84(r0_1, r1, r2, r3);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_3 = call_002fb310(r0_2, r1_2, r2_3, r3_3);
    r1_3 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r7 = r0_3 + 0x1976cu;  // (from the original)
    r0_4 = *gptr<u32>(r13 + 0x2510u);  // (from the original)
    if ((r0_4 & 0x600u) != 0) {  // (from the original)
        goto L_1addf8;
    }
    r4_1 = r5 + 0x8a0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_5 = call_002fae84(r0_4, r1_3, r2_4, r3_4);
    r3_4 = guest::cpu()->r[3];
    r0_6 = r0_5 + 0x62138u;  // (from the original)
    r2_4 = u32(*gptr<u16>(r0_6));
    if (u32(*gptr<u16>(r13 + 0x8a0u)) != r2_4) {  // (from the original)
        goto L_1addf8;
    }
    r2_4 = u32(*gptr<u8>(r13 + 0x8b4u));  // (from the original)
    if (r2_4 != u32(*gptr<u8>(r0_6 + 0x14u))) {  // (from the original)
        goto L_1addf8;
    }
    r1_4 = r0_6 + 2u;
    r0_7 = r4_1 + 2u;
    guest::cpu()->r[13] = r13;
    r0_8 = call_00100d2c(r0_7, r1_4, 0x12u, r3_4);  // (from the original)
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    if (r0_8 == 0) {
        goto L_1adebc;
    }
L_1addf8:;
    r1_5 = r0 + 0x2518u;  // (from the original)
    r0_9 = *global_009529cc;
    guest::cpu()->r[13] = r13;
    r0_10 = call_001aa9fc(r0_9, r1_5, r2_4, r3_4);
    r1_6 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    if (r0_10 == 0) {
        goto L_1adedc;
    }
    r4_2 = r13 + 0x2210u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_11 = call_00758bac(r4_2, 0u, r2_5, r3_5);
    r1_7 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    if (r0_11 == 0) {
        goto L_1ade98;
    }
    guest::cpu()->r[13] = r13;
    r0_12 = call_00311c50(r4_2, r1_7, r2_6, r3_6);
    r1_8 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    if (r0_12 == 0) {
        goto L_1ade90;
    }
    ea_1 = r0_12 + 0x16u;  // (from the original)
    r3_7 = u32(*gptr<u16>(ea_1));
    r2_7 = u32(*gptr<u16>(r13 + 0x8a0u));  // (from the original)
    r1_8 = r5 + 0x8a0u;  // (from the original)
    if (r3_7 != r2_7) {
        goto L_1ade90;
    }
    r2_7 = u32(*gptr<u8>(ea_1 + 0x14u));  // (from the original)
    r3_7 = u32(*gptr<u8>(r13 + 0x8b4u));  // (from the original)
    if (r2_7 != r3_7) {
        goto L_1ade90;
    }
    r1_9 = r1_8 + 2u;
    r0_13 = ea_1 + 2u;
    guest::cpu()->r[13] = r13;
    r0_14 = call_00100d2c(r0_13, r1_9, 0x12u, r3_7);  // (from the original)
    r1_8 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    if (r0_14 == 0) {
        goto L_1ade98;
    }
L_1ade90:;
    guest::cpu()->r[13] = r13;
    call_002ff408(r4_2, r1_8, r2_7, r3_7);
L_1ade98:;
    guest::cpu()->r[13] = r13;
    call_00114088(r7, r5, 1u, 0u);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_1adeac:;
    guest::cpu()->r[13] = r13;
    r0_15 = call_00100b8c(r5, r1, r2, r3);
    r1_10 = guest::cpu()->r[1];
    r13 = r13 + 0x2558u;  // (from the original)
    guest::cpu()->r[1] = r1_10;
    guest::cpu()->r[13] = r13;
    return r0_15;
L_1adebc:;
    guest::cpu()->r[13] = r13;
    call_00114088(r7, r5, 0u, 0u);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::preempt();
    goto L_1adeac;
L_1adedc:;
    guest::cpu()->r[13] = r13;
    call_00112d9c(r5, r1_6, r2_5, r3_5);
    guest::preempt();
    goto L_1ade98;
}

}  // namespace d_001add58
GUEST_EXPORT(0x001add58, d_001add58::f_001add58);

// f_001ae1e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001ae1e4 {

inline constexpr guest::Function<0x00113d15, u32(u32, u32, u32, u32)> call_00113d14;  // (from the original)

u32 f_001ae1e4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_00113d14(r0, r1, r2, r3);
    *gptr<u32>(0x2518u + r0_1) = u32(0u);  // (from the original)
    *gptr<u8>((0x2518u | u32(s32(0x2518u) >> 0xb)) + r0_1) = u8(0u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0u;
    return r0_1;
}

}  // namespace d_001ae1e4
GUEST_EXPORT(0x001ae1e4, d_001ae1e4::f_001ae1e4);

// f_001aebdc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001aebdc {

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)

u32 f_001aebdc(u32 r0) {
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 8u;
    call_002f76ac(r0, 0x3084ccu, 0xcu, 0xau);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return r0;
}

}  // namespace d_001aebdc
GUEST_EXPORT(0x001aebdc, d_001aebdc::f_001aebdc);

// f_001aec00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001aec00 {

struct __attribute__((packed)) Object_001aec00_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_001aec00_0, byte_0, 0x0);  // (from the original)


void f_001aec00(gptr<Object_001aec00_0> arg0, u32 r1) {
    u32 r1_1 = 0;
    r1_1 = u32(arg0->byte_0) & ~0xfu | r1 & 0xfu;  // (from the original)
    arg0->byte_0 = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_001aec00
GUEST_EXPORT(0x001aec00, d_001aec00::f_001aec00);

// f_001aed7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001aed7c {

struct __attribute__((packed)) Object_001aed7c_0 {
    u8 byte_0;
    u8 unknown_1[0x2];  // (not used here)
    u8 byte_3;
    u8 byte_4;
};
GUEST_OFFSET(Object_001aed7c_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_001aed7c_0, byte_3, 0x3);  // (from the original)
GUEST_OFFSET(Object_001aed7c_0, byte_4, 0x4);  // (from the original)


void f_001aed7c(gptr<Object_001aed7c_0> arg0) {
    u32 r1_1 = 0;
    arg0->byte_0 = u8(u32(arg0->byte_0) & ~0x7fu | 0x6bu);  // (from the original)
    arg0->byte_3 = u8(u32(arg0->byte_3) & ~0x80u);  // (from the original)
    r1_1 = u32(arg0->byte_4) & ~3u | 2u;
    arg0->byte_4 = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_001aed7c
GUEST_EXPORT(0x001aed7c, d_001aed7c::f_001aed7c);

// f_001aede0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001aede0 {

struct __attribute__((packed)) Object_001aede0_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_001aede0_0, word_c, 0xc);  // (from the original)

inline guest::global<u32, 0x001aee90> global_001aee90;  // (from the original)
inline constexpr guest::Function<0x004bb4bc, u32(u32, u32, u32, u32)> call_004bb4bc;  // (from the original)

u32 f_001aede0(gptr<Object_001aede0_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    float S0_1 = 0;
    u32 r3_1 = 0;
    u32 r12_1 = 0;
    float S1_1 = 0;
    u32 r2_1 = 0;
    float S1_2 = 0;
    float S3_1 = 0;
    float S2_1 = 0;
    u32 r2_2 = 0;
    float S2_2 = 0;
    float S1_3 = 0;
    float S0_2 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    float S0_3 = 0;
    float S1_4 = 0;
    S0_1 = std::bit_cast<float>(*global_001aee90);
    r13 = r13 - 0x28u;  // (from the original)
    r3_1 = r3 + 1u;
    r12_1 = *gptr<u32>(r13 + 0x28u);  // (from the original)
    r14 = r13 + 8u;
    *gptr<u32>(r13) = u32(std::bit_cast<u32>(float(s32(std::bit_cast<u32>(std::bit_cast<float>(r1)))) * S0_1));
    *gptr<u32>(r13 + 4u) = u32(std::bit_cast<u32>(float(s32(std::bit_cast<u32>(std::bit_cast<float>(r2)))) * S0_1));
    S1_1 = std::bit_cast<float>(r2);
    r2_1 = r12_1 + 1u;
    *gptr<u32>(r14) = u32(std::bit_cast<u32>(float(s32(std::bit_cast<u32>(std::bit_cast<float>(r3_1)))) * S0_1));
    *gptr<u32>(r14 + 4) = u32(std::bit_cast<u32>(float(s32(std::bit_cast<u32>(S1_1))) * S0_1));
    S1_2 = std::bit_cast<float>(r1);
    r14 = r13 + 0x10u;  // (from the original)
    S3_1 = float(s32(std::bit_cast<u32>(S1_2)));
    *gptr<u32>(r14) = u32(std::bit_cast<u32>(S3_1 * S0_1));
    *gptr<u32>(r14 + 4) = u32(std::bit_cast<u32>(float(s32(std::bit_cast<u32>(std::bit_cast<float>(r2_1)))) * S0_1));
    S2_1 = std::bit_cast<float>(r2_1);
    r2_2 = r13;
    S2_2 = float(s32(std::bit_cast<u32>(S2_1)));
    S1_3 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r3_1)))) * S0_1;
    S0_2 = S2_2 * S0_1;
    *gptr<u32>(r13 + 0x18u) = u32(std::bit_cast<u32>(S1_3));  // (from the original)
    *gptr<u32>(r13 + 0x1cu) = u32(std::bit_cast<u32>(S0_2));  // (from the original)
    r0_1 = arg0->word_c;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_3;
    guest::cpu()->s[2] = S2_2;
    guest::cpu()->s[3] = S3_1;
    r0_2 = call_004bb4bc(r0_1, 0u, r2_2, r3_1);
    r1_1 = guest::cpu()->r[1];
    S0_3 = guest::cpu()->s[0];
    S1_4 = guest::cpu()->s[1];
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_4;
    return r0_2;
}

}  // namespace d_001aede0
GUEST_EXPORT(0x001aede0, d_001aede0::f_001aede0);

// f_001af458: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001af458 {

inline constexpr guest::Function<0x00138744, u32(u32, u32, u32, u32)> call_00138744;  // (from the original)

u32 f_001af458() {
    return call_00138744(0xa18690u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_001af458
GUEST_EXPORT(0x001af458, d_001af458::f_001af458);

// f_001af914: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001af914 {


u32 f_001af914(u32 r0_unused, u32 r1, u32 r2) {
    u32 r0 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r9 = guest::cpu()->r[9];
    u32 r12 = 0;
    u32 nf_1 = 0;
    u32 zf_1 = 0;
    u32 r7_1 = 0;
    u32 r6_1 = 0;
    u32 res_1 = 0;
    r0 = 0xa18690u;  // (from the original)
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r4 = *gptr<u32>(r0 + 0xd0u);  // (from the original)
    r9 = r2 - 1u;
    r3 = 0u;
    if (r9 == 0 || r9 >> 0x1f != (r9 & (r9 ^ r9)) >> 0x1f) {  // (from the original)
        goto L_1af9a4;
    }
L_1af930:;
    r5 = r1 + (r3 << 1);
    r0 = r3 + 1u;
    r12 = r2 - r0;
    r6 = u32(*gptr<u16>(r4 + (u32(*gptr<u16>(r5)) << 1) - 0x4000u));  // (from the original)
    nf_1 = r12 >> 0x1f;  // (from the original)
    zf_1 = r12 == 0;
    if (!zf_1 && nf_1 == 0u) {
        r0 = r1 + (r0 << 1);
    }
    if (zf_1 || nf_1 != 0u) {
        goto L_1af998;
    }
    do {
L_1af958:;
        r7_1 = u32(*gptr<u16>(r0));
        if (!(u32(*gptr<u16>(r4 + (r7_1 << 1) - 0x4000u)) >= r6)) {  // (from the original)
            r6_1 = u32(*gptr<u16>(r5));
            *gptr<u16>(r5) = u16(r7_1);
            *gptr<u16>(r0) = u16(r6_1);
            r6 = u32(*gptr<u16>(r4 + (u32(*gptr<u16>(r5)) << 1) - 0x4000u));  // (from the original)
        }
        res_1 = r12 - 1u;
        r12 = res_1;
        r0 = r0 + 2u;
        guest::preempt();
    } while (res_1 != 0);
L_1af998:;
    r3 = r3 + 1u;
    if (s32(r9) > s32(r3)) {
        guest::preempt();
        goto L_1af930;
    }
L_1af9a4:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    return r0;
}

}  // namespace d_001af914
GUEST_EXPORT(0x001af914, d_001af914::f_001af914);

// f_001afc70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001afc70 {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x002fe574, u32(u32, u32, u32, u32)> call_002fe574;  // (from the original)
inline constexpr guest::Function<0x006b9798, u32(u32, u32, u32, u32)> call_006b9798;  // (from the original)
inline constexpr guest::Function<0x006bb1a0, u32(u32, u32, u32, u32)> call_006bb1a0;  // (from the original)
inline constexpr guest::Function<0x0076a684, u32(u32, u32, u32, u32)> call_0076a684;  // (from the original)
inline constexpr guest::Function<0x0076aa04, u32(u32, u32, u32, u32)> call_0076aa04;  // (from the original)
inline constexpr guest::Function<0x0076ae38, u32(u32, u32, u32, u32)> call_0076ae38;  // (from the original)

u32 f_001afc70(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 zf_1 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 zf_2 = 0;
    u32 r0_10 = 0;
    u32 r1_3 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r1_4 = 0;
    u32 r1_5 = 0;
    u32 r0_15 = 0;
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r5 = r1;
    r6 = r2;
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    call_002fc934(r0_1, r3, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_2 = r13;
    guest::cpu()->r[13] = r13;
    r0_3 = call_0076a684(r0_2, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    zf_1 = r0_3 == 0;
    r0_4 = r13;
    if (zf_1) {
        guest::cpu()->r[13] = r13;
        r0_5 = call_0076ae38(r0_4, r1_2, r2_2, r3_2);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_5 != 0) {
            r0_6 = r13;
            guest::cpu()->r[13] = r13;
            call_006bb1a0(r0_6, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
    } else {
        guest::cpu()->r[13] = r13;
        call_006b9798(r0_4, r1_2, r2_2, r3_2);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r0_7 = *gptr<u32>(r6);
    r4 = 0u;
    if (r0_7 == 0 || r0_7 >> 0x1f != (r0_7 & (r0_7 ^ r0_7)) >> 0x1f) {  // (from the original)
        goto L_1afd24;
    }
L_1afcc8:;
    r0_8 = r13;
    guest::cpu()->r[13] = r13;
    r0_9 = call_002fcb34(r0_8, r1, r2, r3);
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    zf_2 = r0_9 == 0x27u;  // (from the original)
    if (!zf_2) {
        zf_2 = r0_9 == 0x24u;  // (from the original)
    }
    r0_10 = r5 + (r4 << 2);
    r1_3 = r13;
    if (zf_2) {
        goto L_1afd00;
    }
    guest::cpu()->r[13] = r13;
    r0_11 = call_0076aa04(r0_10, r1_3, r2_3, r3_3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_11 == 0) {
        goto L_1afd14;
    }
L_1afcf4:;
    r0_12 = r13;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_12;
L_1afd00:;
    guest::cpu()->r[13] = r13;
    r0_13 = call_002fe574(r0_10, r1_3, r2_3, r3_3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_13 != 0) {
        guest::preempt();
        goto L_1afcf4;
    }
L_1afd14:;
    r0_7 = *gptr<u32>(r6);
    r4 = r4 + 1u;
    if (s32(r0_7) > s32(r4)) {
        guest::preempt();
        goto L_1afcc8;
    }
L_1afd24:;
    r0_14 = r5 + (r0_7 << 2);
    r1_4 = r13;
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r0_14, r1_4, r2, r3);
    r1_5 = guest::cpu()->r[1];
    *gptr<u32>(r6) = u32(*gptr<u32>(r6) + 1u);
    r0_15 = r13;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->r[13] = r13;
    return r0_15;
}

}  // namespace d_001afc70
GUEST_EXPORT(0x001afc70, d_001afc70::f_001afc70);

// f_001afd70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001afd70 {

struct __attribute__((packed)) Object_001afd70_0 {
    u8 unknown_0[0x220];  // (not used here)
    u32 word_220;
    u8 unknown_224[0x8c0];  // (not used here)
    u32 word_ae4;
};
GUEST_OFFSET(Object_001afd70_0, word_220, 0x220);  // (from the original)
GUEST_OFFSET(Object_001afd70_0, word_ae4, 0xae4);  // (from the original)

inline constexpr guest::Function<0x001323b4, u32(u32, u32, u32, u32)> call_001323b4;  // (from the original)
inline constexpr guest::Function<0x00132410, u32(u32, u32, u32, u32)> call_00132410;  // (from the original)
inline constexpr guest::Function<0x002f88b8, u32(u32, u32, u32, u32)> call_002f88b8;  // (from the original)
inline constexpr guest::Function<0x004b6d74, u32(u32, u32, u32, u32)> call_004b6d74;  // (from the original)
inline constexpr guest::Function<0x005e2e04, u32(u32, u32, u32, u32)> call_005e2e04;  // (from the original)
inline constexpr guest::Function<0x005e3194, u32(u32, u32, u32, u32)> call_005e3194;  // (from the original)

u32 f_001afd70(gptr<Object_001afd70_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r0_4 = 0;
    u32 r1_4 = 0;
    u32 r6_1 = 0;
    u32 r0_5 = 0;
    u32 r1_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    r1_1 = arg0->word_ae4;
    if (r1_1 == 0) {
        goto L_1afd9c;
    }
    if (*gptr<u32>(r1_1 + 0xcu) != 0) {  // (from the original)
        goto L_1afd9c;
    }
    r0_1 = *gptr<u32>(arg0->word_220 + 0xcu);  // (from the original)
    call_004b6d74(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
L_1afd9c:;
    r0_2 = r5 + 0x2cu;  // (from the original)
    call_001323b4(r0_2, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r0_3 = r5 + 0x224u;  // (from the original)
    call_00132410(r0_3, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r0_4 = *gptr<u32>(r5 + 0x9c0u);  // (from the original)
    r4 = 0u;
    if (r0_4 == 0 || r0_4 >> 0x1f != (r0_4 & (r0_4 ^ r0_4)) >> 0x1f) {  // (from the original)
        r0_7 = *gptr<u32>(r5 + 0x21cu);  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return call_002f88b8(r0_7, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    do {
L_1afdc0:;
        r1_4 = r4 + (r4 << 4);
        r6_1 = r1_4 + (r4 << 5);
        r0_5 = *gptr<u32>(r5 + 0x21cu) + (r6_1 << 2);  // (from the original)
        call_005e2e04(r0_5, r1_4, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_5 = guest::cpu()->r[1];
        r0_6 = *gptr<u32>(r5 + 0x21cu) + (r6_1 << 2);  // (from the original)
        call_005e3194(r0_6, r1_5, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_3 = guest::cpu()->r[1];
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(*gptr<u32>(r5 + 0x9c0u)) > s32(r4));  // (from the original)
    r0_7 = *gptr<u32>(r5 + 0x21cu);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_002f88b8(r0_7, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_001afd70
GUEST_EXPORT(0x001afd70, d_001afd70::f_001afd70);

// f_001aff90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001aff90 {

inline guest::global<u32, 0x00952c3c> global_00952c3c;  // (from the original)
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;  // (from the original)
inline constexpr guest::Function<0x0056a974, u32(u32, u32, u32, u32)> call_0056a974;  // (from the original)
inline constexpr guest::Function<0x005d46dc, u32(u32, u32, u32, u32)> call_005d46dc;  // (from the original)

u32 f_001aff90(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    r13 = r13 - 0x10u;  // (from the original)
    if ((*gptr<u32>(0x953390u + 4u) & 1u) != 0) {  // (from the original)
        goto L_1affd0;
    }
    r0_1 = 0x953390u + 4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fe7dc(r0_1, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        goto L_1affd0;
    }
    guest::cpu()->r[13] = r13;
    r0_3 = call_005d46dc(r0_2, r1_1, r2_1, r3_1);
    *gptr<u32>(0x953390u + 8u) = u32(*gptr<u32>(0x953390u + 0xcu + (r0_3 << 2)));  // (from the original)
L_1affd0:;
    r1_2 = r13;
    *gptr<u32>(r13 + 4u) = u32(*gptr<u32>(0x953390u + 8u));  // (from the original)
    *gptr<u32>(r13) = u32(0x9047f8u);  // (from the original)
    r2_2 = *global_00952c3c;
    guest::cpu()->r[13] = r13;
    r0_4 = call_0056a974(0xa18690u, r1_2, r2_2, 0x80u);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r0_4;
}

}  // namespace d_001aff90
GUEST_EXPORT(0x001aff90, d_001aff90::f_001aff90);
