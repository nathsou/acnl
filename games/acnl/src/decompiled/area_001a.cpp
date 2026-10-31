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

inline constexpr guest::Function<0x008166f0, u32(u32, u32, u32, u32)> call_008166f0;  // (from the original)

u32 f_001a08bc(gptr<Object_001a08bc_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    r1 = 0u;
    guest::cpu()->r[13] -= 8u;
    arg0->byte_38 = u8(r1);
    arg0->byte_39 = u8(r1);
    arg0->byte_3c = u8(r1);
    arg0->byte_3a = u8(r1);
    arg0->byte_3b = u8(r1);
    arg0->byte_3d = u8(r1);
    arg0->byte_3e = u8(r1);
    r0 = r0 + 0x14u;  // (from the original)
    r1 = *gptr<u32>(0x84b068u);  // (from the original)
    r2 = *gptr<u32>(0x84b068u + 4);  // (from the original)
    r0 = call_008166f0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_001a08bc
GUEST_EXPORT(0x001a08bc, d_001a08bc::f_001a08bc);

// f_001a1204: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001a1204 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)

u32 f_001a1204(float S0) {
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r12 = 0;
    u32 zf = 0;
    guest::cpu()->r[13] -= 8u;
    r0 = 0x998540u;  // (from the original)
    r1 = *gptr<u32>(0x857318u);  // (from the original)
    r2 = *gptr<u32>(0x857318u + 4);  // (from the original)
    r3 = *gptr<u32>(0x857318u + 8);  // (from the original)
    r12 = *gptr<u32>(0x857318u + 0xc);  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    *gptr<u32>(r0 + 4) = u32(r2);
    *gptr<u32>(r0 + 8) = u32(r3);
    *gptr<u32>(r0 + 0xc) = u32(r12);  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    zf = r0 == 1u;
    r0 = 0x998540u;  // (from the original)
    if (zf) {
        S0 = std::bit_cast<float>(*gptr<u32>(0x1a1240u));  // (from the original)
        *gptr<u32>(r0 + 8u) = u32(std::bit_cast<u32>(S0));
    } else {
        S0 = std::bit_cast<float>(*gptr<u32>(r0 + 8u));
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_001a1204
GUEST_EXPORT(0x001a1204, d_001a1204::f_001a1204);

// f_001a1abc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001a1abc {

inline constexpr guest::Function<0x001a2c48, u32(u32, u32, u32, u32)> call_001a2c48;  // (from the original)

u32 f_001a1abc(u32 r0, u32 r1, u32 r2, float S0) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    r4 = r2;
    guest::cpu()->s[0] = S0;
    r0 = call_001a2c48(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    if (r4 + 1u != 0) {
        *gptr<u8>(r5 + 0x135u) = u8(r4);  // (from the original)
        S0 = std::bit_cast<float>(*gptr<u32>(0x1a1b30u));  // (from the original)
        r0 = r5 + 0xf4u;  // (from the original)
        *gptr<u32>(r5 + 0x154u) = u32(std::bit_cast<u32>(S0));  // (from the original)
        *gptr<u32>(r5 + 0xf4u) = u32(*gptr<u32>(r5 + 4u));  // (from the original)
        *gptr<u32>(r5 + 0xf8u) = u32(*gptr<u32>(r5 + 8u));  // (from the original)
        *gptr<u32>(r5 + 0xfcu) = u32(*gptr<u32>(r5 + 0xcu));  // (from the original)
        *gptr<u32>(r5 + 0x100u) = u32(*gptr<u32>(r5 + 0x10u));  // (from the original)
        *gptr<u32>(r5 + 0x104u) = u32(*gptr<u32>(r5 + 0x14u));  // (from the original)
        *gptr<u32>(r5 + 0x108u) = u32(*gptr<u32>(r5 + 0x18u));  // (from the original)
        *gptr<u16>(r0 + 0x18u) = u16(u32(*gptr<u16>(r5 + 0x1cu)));  // (from the original)
        *gptr<u16>(r0 + 0x1au) = u16(u32(*gptr<u16>(r5 + 0x1eu)));  // (from the original)
        r1 = *gptr<u32>(r5 + 0x20u);  // (from the original)
        *gptr<u32>(r0 + 0x1cu) = u32(r1);  // (from the original)
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_001a1abc
GUEST_EXPORT(0x001a1abc, d_001a1abc::f_001a1abc);

// f_001a2068: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001a2068 {

inline constexpr guest::Function<0x001a1430, u32(u32, u32, u32, u32)> call_001a1430;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)

u32 f_001a2068(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x28u;  // (from the original)
    r4 = r0;
    r5 = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r1 = r0;
    r0 = 8u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_002f74e0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (r0 == 0) {
        r13 = r13 + 0x28u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    ea = r4 + 0x30u;  // (from the original)
    r0 = *gptr<u32>(ea);
    ea = r4 + 0x38u;  // (from the original)
    r1 = *gptr<u32>(ea);
    ea = r13 + 0x10u;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    ea = r4 + 0x1a8u;  // (from the original)
    r1 = u32(*gptr<u8>(ea));
    ea = r4 + 0x1eu;  // (from the original)
    r2 = u32(s32(s16(*gptr<u16>(ea))));
    ea = r4 + 0x1a9u;  // (from the original)
    r0 = u32(*gptr<u8>(ea));
    ea = r13 + 4u;
    *gptr<u32>(ea) = u32(r1);
    ea = r13;
    *gptr<u32>(ea) = u32(r4 + 0xd8u);  // (from the original)
    ea = r13 + 8u;
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r2);
    r3 = r4 + 0xe0u;  // (from the original)
    S1 = std::bit_cast<float>(*gptr<u32>(r4 + 0x2cu));  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r4 + 0x168u));  // (from the original)
    r2 = r13 + 0x10u;  // (from the original)
    r1 = r5;
    r0 = r4 + 0x50u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_001a1430(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
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

inline constexpr guest::Function<0x001a1abc, u32(u32, u32, u32, u32)> call_001a1abc;  // (from the original)
inline constexpr guest::Function<0x001a2ce0, u32(u32, u32, u32, u32)> call_001a2ce0;  // (from the original)
inline constexpr guest::Function<0x001a3abc, u32(u32, u32, u32, u32)> call_001a3abc;  // (from the original)
inline constexpr guest::Function<0x001a3f90, u32(u32, u32, u32, u32)> call_001a3f90;  // (from the original)
inline constexpr guest::Function<0x001a4904, u32(u32, u32, u32, u32)> call_001a4904;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x005c2768, u32(u32, u32, u32, u32)> call_005c2768;  // (from the original)

u32 f_001a25dc(gptr<Object_001a25dc_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 nf = 0;
    u32 zf = 0;
    u32 vf = 0;
    float S0 = 0;
    float S1 = 0;
    float S2 = 0;
    r4 = r0;
    r13 = r13 - 0x48u;  // (from the original)
    S0 = std::bit_cast<float>(arg0->word_114);
    S1 = std::bit_cast<float>(arg0->word_118);
    S2 = std::bit_cast<float>(arg0->word_11c);
    r0 = r13 + 0x10u;  // (from the original)
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r0 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r0 + 8) = u32(std::bit_cast<u32>(S2));
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_005c2768(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    if (r0 != 0) {
        r1 = *gptr<u32>(r0);
        S1 = std::bit_cast<float>(*gptr<u32>(0x1a2748u));  // (from the original)
        *gptr<u32>(r13 + 0x10u) = u32(r1);  // (from the original)
        S0 = std::bit_cast<float>(*gptr<u32>(r0 + 4u));
        *gptr<u32>(r13 + 0x14u) = u32(std::bit_cast<u32>(S0));  // (from the original)
        S0 = S0 + S1;
        r0 = *gptr<u32>(r0 + 8u);
        *gptr<u32>(r13 + 0x18u) = u32(r0);  // (from the original)
        *gptr<u32>(r13 + 0x14u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    r5 = r4 + 0x100u;  // (from the original)
    if (r0 == 0x32u) {  // (from the original)
        goto L_1a26d8;
    }
    r1 = r13 + 0x10u;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_001a3f90(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
L_1a2648:;
    *gptr<u16>(r5 + 0xacu) = u16(r0);  // (from the original)
L_1a264c:;
    r3 = r4 + 0xa8u;  // (from the original)
    r2 = r13 + 0x10u;  // (from the original)
    r1 = r4;
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_001a4904(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    r6 = 0u;
    r3 = r4 + 0x114u;  // (from the original)
    *gptr<u32>(r4 + 0x114u) = u32(*gptr<u32>(r13 + 4u));  // (from the original)
    r2 = r13 + 0x20u;  // (from the original)
    r0 = r4;
    *gptr<u32>(r4 + 0x118u) = u32(*gptr<u32>(r13 + 8u));  // (from the original)
    *gptr<u32>(r4 + 0x11cu) = u32(*gptr<u32>(r13 + 0xcu));  // (from the original)
    r1 = r13 + 0x10u;  // (from the original)
    *gptr<u32>(r13) = u32(r6);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_001a2ce0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    r1 = r0;
    r0 = 8u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_002f74e0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    if (r0 == 0) {
        goto L_1a272c;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    r1 = r0;
    r0 = 0x100u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_002f74e0(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    if (r0 == 0) {
        goto L_1a2710;
    }
    goto L_1a272c;
L_1a26d8:;
    r6 = 0x1555u;  // (from the original)
    if (u32(*gptr<u8>(r4 + 0x1b3u)) == 2u) {  // (from the original)
        *gptr<u16>(r5 + 0xacu) = u16(r6);  // (from the original)
        guest::preempt();
        goto L_1a264c;
    }
    r1 = r13 + 0x10u;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_001a3f90(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    r1 = u32(s32(s16(*gptr<u16>(r5 + 0xaau))));  // (from the original)
    *gptr<u16>(r5 + 0xacu) = u16(r0);  // (from the original)
    res = r6 - r1;
    nf = res >> 0x1f;  // (from the original)
    zf = res == 0;
    vf = ((r6 ^ r1) & (r6 ^ res)) >> 0x1f;  // (from the original)
    if (!zf && nf == vf) {
        r0 = 0x18e4u;  // (from the original)
    }
    if (zf || nf != vf) {
        guest::preempt();
        goto L_1a264c;
    }
    guest::preempt();
    goto L_1a2648;
L_1a2710:;
    *gptr<u32>(r13) = u32(r13 + 0x10u);  // (from the original)
    r3 = r13 + 4u;
    r2 = r4 + 0x114u;  // (from the original)
    r1 = r13 + 0x20u;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_001a3abc(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
L_1a272c:;
    r2 = u32(s32(s8(*gptr<u8>(r5 + 0x36u))));  // (from the original)
    r1 = r13 + 0x20u;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_001a1abc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    *gptr<u8>(r4 + 0x1b8u) = u8(r6);  // (from the original)
    r13 = r13 + 0x48u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
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


void f_001a32c8(gptr<Object_001a32c8_0> arg0, gptr<Object_001a32c8_1> arg1) {
    u32 fpsr = guest::cpu()->fpscr;
    float S0 = 0;
    float S1 = 0;
    float S2 = 0;
    float S3 = 0;
    S1 = std::bit_cast<float>(arg0->word_15c);
    S0 = std::bit_cast<float>(*gptr<u32>(0x1a3344u));  // (from the original)
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S1, S0);  // (from the original)
    if (fpsr >> 0x1e & 1 || fpsr >> 0x1f != (fpsr >> 0x1c & 1)) {  // (from the original)
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return;
    }
    S2 = std::bit_cast<float>(arg0->word_158);
    S3 = std::bit_cast<float>(*gptr<u32>(0x95089cu));  // (from the original)
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S1 - S2, S3 * std::bit_cast<float>(*gptr<u32>(0x1a334cu)));  // (from the original)
    if (!(fpsr >> 0x1d & 1 && !(fpsr >> 0x1e & 1))) {  // (from the original)
        S1 = S2 + S1;
        S0 = S1 * std::bit_cast<float>(*gptr<u32>(0x1a3350u));  // (from the original)
        arg1->word_0 = u32(std::bit_cast<u32>(S0));
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return;
    }
    S2 = S2 + S3;
    S0 = std::bit_cast<float>(arg1->word_0);
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S2, S0);  // (from the original)
    if (!(fpsr >> 0x1e & 1) && fpsr >> 0x1f == (fpsr >> 0x1c & 1)) {  // (from the original)
        arg1->word_0 = u32(std::bit_cast<u32>(S2));
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return;
    }
    S1 = S1 - S3;
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S0, S1);  // (from the original)
    if (!(fpsr >> 0x1e & 1) && fpsr >> 0x1f == (fpsr >> 0x1c & 1)) {  // (from the original)
        S0 = S1;
    }
    arg1->word_0 = u32(std::bit_cast<u32>(S0));
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
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
    u32 r1 = arg1.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r13 = r13 - 0x10;  // (from the original)
    r4 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    arg0->byte_1bb = u8(0u);
    arg0->word_c0 = u32(arg1->word_0);
    arg0->word_c4 = u32(arg1->word_4);
    arg0->word_c8 = u32(arg1->word_8);
    arg0->byte_134 = u8(r2);
    arg0->byte_1b9 = u8(r4);
    r1 = u32(arg0->byte_f2);
    arg0->byte_136 = u8(r3);
    if (r1 != 0x16u) {  // (from the original)
        r1 = 0x16u;  // (from the original)
        arg0->byte_f3 = u8(r1);
        goto L_1a36a8;
    }
    r4 = r0;
    r5 = r0 + 0x100u;  // (from the original)
    r0 = u32(arg0->byte_1bb);
    if (r0 != 0) {
        goto L_1a36a8;
    }
    zf = r2 == 0x1bu;  // (from the original)
    if (!zf) {
        zf = r2 == 0x4du;  // (from the original)
    }
    if (zf) {
        arg0->byte_1bc = u8(1u);
    }
    r0 = u32(arg0->byte_134);
    guest::cpu()->r[13] = r13;
    r0 = call_006e225c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r2 = u32(s32(s8(*gptr<u8>(r5 + 0x36u))));  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_001a1abc(r0, r1, r2, r3);
    *gptr<u32>(r4 + 0x114u) = u32(*gptr<u32>(r4 + 0xc0u));  // (from the original)
    *gptr<u32>(r4 + 0x118u) = u32(*gptr<u32>(r4 + 0xc4u));  // (from the original)
    r1 = *gptr<u32>(r4 + 0xc8u);  // (from the original)
    *gptr<u32>(r4 + 0x11cu) = u32(r1);  // (from the original)
L_1a36a8:;
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_001a360c
GUEST_EXPORT(0x001a360c, d_001a360c::f_001a360c);

// f_001a40e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001a40e8 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x0056a224, u32(u32, u32, u32, u32)> call_0056a224;  // (from the original)
inline constexpr guest::Function<0x005c2768, u32(u32, u32, u32, u32)> call_005c2768;  // (from the original)

u32 f_001a40e8(u32 r0, u32 r1, float S0, float S1, float S2, float S3, float S4, float S5) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20u;  // (from the original)
    r5 = r0;
    r4 = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    r0 = call_005c2768(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S1 = guest::cpu()->s[1];
    if (r0 == 0) {
        S0 = std::bit_cast<float>(*gptr<u32>(0x1a41b4u));  // (from the original)
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    S0 = std::bit_cast<float>(*gptr<u32>(r0 + 8u));
    S3 = std::bit_cast<float>(*gptr<u32>(r0));
    S1 = std::bit_cast<float>(*gptr<u32>(r0 + 4u)) + std::bit_cast<float>(*gptr<u32>(0x1a41b8u));  // (from the original)
    S4 = std::bit_cast<float>(*gptr<u32>(r4));
    S5 = std::bit_cast<float>(*gptr<u32>(r4 + 4));
    r0 = r13 + 4u;
    S2 = std::bit_cast<float>(*gptr<u32>(r4 + 8u)) - S0;
    S0 = S4 - S3;
    S1 = S5 - S1;
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r0 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r0 + 8) = u32(std::bit_cast<u32>(S2));
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    r0 = call_002f74c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    r1 = r0;
    r0 = 8u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    r0 = call_002f74e0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    if (r0 != 0) {
        S2 = std::bit_cast<float>(*gptr<u32>(0x1a41bcu));  // (from the original)
        S1 = std::bit_cast<float>(*gptr<u32>(0x1a41c0u));  // (from the original)
        S0 = std::bit_cast<float>(vcvt_sz_f(float(std::bit_cast<u32>(std::bit_cast<float>(u32(*gptr<u8>(r5 + 0x1a8u))))) * S2 * S1));  // (from the original)
        *gptr<u16>(r13) = u16(0u - std::bit_cast<u32>(S0));
        r1 = *gptr<u32>(r13);
        r0 = r13 + 4u;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        guest::cpu()->s[3] = S3;
        guest::cpu()->s[4] = S4;
        guest::cpu()->s[5] = S5;
        r0 = call_0056a224(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    S2 = std::bit_cast<float>(*gptr<u32>(r13 + 8u));
    S0 = std::bit_cast<float>(*gptr<u32>(r13 + 0xcu)) * std::bit_cast<float>(*gptr<u32>(0x1a41c4u));  // (from the original)
    S1 = std::bit_cast<float>(*gptr<u32>(r13 + 4u));
    S1 = S1 * S1 + S2 * S2 + S0 * S0;
    S0 = sqrtf(S1);
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_001a40e8
GUEST_EXPORT(0x001a40e8, d_001a40e8::f_001a40e8);

// f_001a48a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001a48a0 {

inline constexpr guest::Function<0x006e225c, u32(u32, u32, u32, u32)> call_006e225c;  // (from the original)

u32 f_001a48a0(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2, float S3, float S4) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r6 = r0;
    r4 = r1;
    r0 = r2;
    r5 = r3;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    r0 = call_006e225c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = std::bit_cast<float>(*gptr<u32>(r0));
    S1 = std::bit_cast<float>(*gptr<u32>(r0 + 4));
    S2 = std::bit_cast<float>(*gptr<u32>(r0 + 8));
    S3 = std::bit_cast<float>(*gptr<u32>(r0 + 0xc));  // (from the original)
    S4 = std::bit_cast<float>(*gptr<u32>(r0 + 0x10));  // (from the original)
    *gptr<u32>(r4) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r4 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r4 + 8) = u32(std::bit_cast<u32>(S2));
    *gptr<u32>(r4 + 0xc) = u32(std::bit_cast<u32>(S3));  // (from the original)
    *gptr<u32>(r4 + 0x10) = u32(std::bit_cast<u32>(S4));  // (from the original)
    if (r5 == 0) {
        goto L_1a48d4;
    } else {
        r0 = u32(*gptr<u16>(r5));
    }
L_1a48cc:;
    *gptr<u16>(r4 + 0x12u) = u16(r0);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
L_1a48d4:;
    S1 = std::bit_cast<float>(*gptr<u32>(0x1a4900u));  // (from the original)
    S0 = std::bit_cast<float>(vcvt_sz_f(float(std::bit_cast<u32>(std::bit_cast<float>(u32(*gptr<u8>(r6 + 0x1a8u))))) * std::bit_cast<float>(*gptr<u32>(0x1a48fcu)) * S1));  // (from the original)
    r0 = std::bit_cast<u32>(S0);
    guest::preempt();
    goto L_1a48cc;
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


u32 f_001a4904(gptr<Object_001a4904_0> arg0, u32 r1_unused, gptr<Float3> arg2, gptr<Object_001a4904_3> arg3) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    float S0 = 0;
    float S1 = 0;
    float S2 = 0;
    S1 = arg2->v[1] + std::bit_cast<float>(arg3->word_4);
    S2 = arg2->v[2] + std::bit_cast<float>(arg3->word_8);
    r13 = r13 - 0x18u;  // (from the original)
    r4 = r0;
    r0 = r13;
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(arg2->v[0] + std::bit_cast<float>(arg3->word_0)));
    *gptr<u32>(r0 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r0 + 8) = u32(std::bit_cast<u32>(S2));
    r1 = r13 + 4u;
    S0 = std::bit_cast<float>(*gptr<u32>(0x1a4968u));  // (from the original)
    r0 = r4;
    S1 = std::bit_cast<float>(*gptr<u32>(r1)) * S0;
    S2 = std::bit_cast<float>(*gptr<u32>(r1 + 4)) * S0;
    S0 = std::bit_cast<float>(*gptr<u32>(r13)) * S0;
    arg0->word_0 = u32(std::bit_cast<u32>(S0));
    arg0->word_4 = u32(std::bit_cast<u32>(S1));
    arg0->word_8 = u32(std::bit_cast<u32>(S2));
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
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


void f_001a4e7c(gptr<Object_001a4e7c_0> arg0, gptr<Object_001a4e7c_1> arg1, float S0) {
    u32 r2 = 0;
    u32 fpsr = guest::cpu()->fpscr;
    float S1 = 0;
    float S2 = 0;
    float S3 = 0;
    float S4 = 0;
    float S5 = 0;
    S1 = std::bit_cast<float>(arg0->word_15c);
    S5 = std::bit_cast<float>(*gptr<u32>(0x1a4f64u));  // (from the original)
    S4 = std::bit_cast<float>(*gptr<u32>(0x1a4f68u));  // (from the original)
    r2 = 0x950874u;  // (from the original)
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S1, S5);  // (from the original)
    if (fpsr >> 0x1e & 1 || fpsr >> 0x1f != (fpsr >> 0x1c & 1)) {  // (from the original)
        goto L_1a4ef4;
    }
    S2 = std::bit_cast<float>(arg0->word_158);
    S3 = std::bit_cast<float>(*gptr<u32>(r2 + 0x34u));  // (from the original)
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S1 - S2, S3 * std::bit_cast<float>(*gptr<u32>(0x1a4f70u)));  // (from the original)
    if (!(fpsr >> 0x1d & 1 && !(fpsr >> 0x1e & 1))) {  // (from the original)
        S0 = (S2 + S1) * S4;
        arg1->word_0 = u32(std::bit_cast<u32>(S0));
        goto L_1a4ef4;
    }
    S2 = S2 + S3;
    S0 = std::bit_cast<float>(arg1->word_0);
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S2, S0);  // (from the original)
    if (!(fpsr >> 0x1e & 1) && fpsr >> 0x1f == (fpsr >> 0x1c & 1)) {  // (from the original)
        arg1->word_0 = u32(std::bit_cast<u32>(S2));
        goto L_1a4ef4;
    }
    S1 = S1 - S3;
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S0, S1);  // (from the original)
    if (!(fpsr >> 0x1e & 1) && fpsr >> 0x1f == (fpsr >> 0x1c & 1)) {  // (from the original)
        S0 = S1;
    }
    arg1->word_0 = u32(std::bit_cast<u32>(S0));
L_1a4ef4:;
    S1 = std::bit_cast<float>(arg0->word_164);
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S1, S5);  // (from the original)
    if (fpsr >> 0x1e & 1 || fpsr >> 0x1f != (fpsr >> 0x1c & 1)) {  // (from the original)
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return;
    }
    S2 = std::bit_cast<float>(arg0->word_160);
    S3 = std::bit_cast<float>(*gptr<u32>(r2 + 0x38u));  // (from the original)
    S5 = std::bit_cast<float>(*gptr<u32>(r2 + 0x3cu));  // (from the original)
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S1 - S2, S3 + S5);  // (from the original)
    if (!(fpsr >> 0x1d & 1 && !(fpsr >> 0x1e & 1))) {  // (from the original)
        S0 = (S2 + S1) * S4;
        arg1->word_8 = u32(std::bit_cast<u32>(S0));
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return;
    }
    S2 = S2 + S5;
    S0 = std::bit_cast<float>(arg1->word_8);
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S2, S0);  // (from the original)
    if (!(fpsr >> 0x1e & 1) && fpsr >> 0x1f == (fpsr >> 0x1c & 1)) {  // (from the original)
        arg1->word_8 = u32(std::bit_cast<u32>(S2));
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return;
    }
    S1 = S1 - S3;
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S0, S1);  // (from the original)
    if (!(fpsr >> 0x1e & 1) && fpsr >> 0x1f == (fpsr >> 0x1c & 1)) {  // (from the original)
        S0 = S1;
    }
    arg1->word_8 = u32(std::bit_cast<u32>(S0));
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
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


void f_001a5e64(gptr<Object_001a5e64_0> arg0, gptr<Object_001a5e64_1> arg1, float S0) {
    u32 res = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 fpsr = guest::cpu()->fpscr;
    float S1 = 0;
    float S2 = 0;
    float S3 = 0;
    float S4 = 0;
    float S5 = 0;
    S1 = std::bit_cast<float>(arg0->word_15c);
    S5 = std::bit_cast<float>(*gptr<u32>(0x1a5f44u));  // (from the original)
    S3 = std::bit_cast<float>(*gptr<u32>(0x1a5f48u));  // (from the original)
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S1, S5);  // (from the original)
    if (fpsr >> 0x1e & 1 || fpsr >> 0x1f != (fpsr >> 0x1c & 1)) {  // (from the original)
        goto L_1a5ed4;
    }
    S2 = std::bit_cast<float>(arg0->word_158);
    r3 = 0x43a00000u;  // (from the original)
    r2 = std::bit_cast<u32>(S1 - S2);
    res = r2 - r3;
    if (!(!u32(res == 0) && res >> 0x1f == ((r2 ^ r3) & (r2 ^ res)) >> 0x1f)) {  // (from the original)
        S0 = (S2 + S1) * S3;
        arg1->word_0 = u32(std::bit_cast<u32>(S0));
        goto L_1a5ed4;
    }
    S4 = std::bit_cast<float>(*gptr<u32>(0x1a5f50u));  // (from the original)
    S0 = std::bit_cast<float>(arg1->word_0);
    S2 = S2 + S4;
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S0, S2);  // (from the original)
    if (!(fpsr >> 0x1d & 1)) {  // (from the original)
        arg1->word_0 = u32(std::bit_cast<u32>(S2));
        goto L_1a5ed4;
    }
    S1 = S1 - S4;
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S0, S1);  // (from the original)
    if (!(fpsr >> 0x1e & 1) && fpsr >> 0x1f == (fpsr >> 0x1c & 1)) {  // (from the original)
        S0 = S1;
    }
    arg1->word_0 = u32(std::bit_cast<u32>(S0));
L_1a5ed4:;
    S1 = std::bit_cast<float>(arg0->word_164);
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S1, S5);  // (from the original)
    if (fpsr >> 0x1e & 1 || fpsr >> 0x1f != (fpsr >> 0x1c & 1)) {  // (from the original)
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return;
    }
    r2 = 0x9508a0u;  // (from the original)
    S2 = std::bit_cast<float>(arg0->word_160);
    S4 = std::bit_cast<float>(*gptr<u32>(r2));
    S5 = std::bit_cast<float>(*gptr<u32>(r2 + 4));
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S1 - S2, S4 + S5);  // (from the original)
    if (!(fpsr >> 0x1d & 1 && !(fpsr >> 0x1e & 1))) {  // (from the original)
        S0 = (S2 + S1) * S3;
        arg1->word_8 = u32(std::bit_cast<u32>(S0));
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return;
    }
    S2 = S2 + S5;
    S0 = std::bit_cast<float>(arg1->word_8);
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S2, S0);  // (from the original)
    if (!(fpsr >> 0x1e & 1) && fpsr >> 0x1f == (fpsr >> 0x1c & 1)) {  // (from the original)
        arg1->word_8 = u32(std::bit_cast<u32>(S2));
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return;
    }
    S1 = S1 - S4;
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S0, S1);  // (from the original)
    if (!(fpsr >> 0x1e & 1) && fpsr >> 0x1f == (fpsr >> 0x1c & 1)) {  // (from the original)
        S0 = S1;
    }
    arg1->word_8 = u32(std::bit_cast<u32>(S0));
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
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
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    r1 = r0 + 0x100u;  // (from the original)
    r0 = u32(s32(s16(arg0->half_1aa)));
    res = r0;
    if (res >> 0x1f != (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        r0 = 0u - r0;
    }
    if (s32(0xaaau) <= s32(r0)) {  // (from the original)
        r0 = 0u;
        *gptr<u16>(r1 + 0xacu) = u16(r0);  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 0x1555u;  // (from the original)
    if (u32(s32(s16(arg0->half_1ac))) >> 0x1f == 0u) {  // (from the original)
        r0 = u32(s32(r0) >> 0xd) - r0;  // (from the original)
    }
    *gptr<u16>(r1 + 0xacu) = u16(r0);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_001a616c
GUEST_EXPORT(0x001a616c, d_001a616c::f_001a616c);

// f_001a63e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001a63e8 {

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
    r6 = r0;
    r5 = r0 + 0x3cu;  // (from the original)
    r13 = r13 - 0x28u;  // (from the original)
    r8 = r1;
    r7 = 0u;
    r0 = 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_002ff6f8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    r9 = 0x950aa4u;  // (from the original)
    r0 = sxth(r0);
    *gptr<u16>(r5 + 2u) = u16(r0);
    r1 = u32(*gptr<u8>(r9 + (r0 << 4)));
    r0 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_0023ffb8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    if (r0 == 0) {
        r4 = 0u;
    } else {
        r7 = 1u;
        goto L_1a6458;
    }
    do {
L_1a6430:;
        r0 = sxth(r4);
        *gptr<u16>(r5 + 2u) = u16(r0);
        r1 = u32(*gptr<u8>(r9 + (r0 << 4)));
        r0 = r13;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        r0 = call_0023ffb8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        S2 = guest::cpu()->s[2];
        if (r0 != 0) {
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
        r1 = r9 + (u32(s32(s16(*gptr<u16>(r5 + 2u)))) << 4) + 4u;
        *gptr<u32>(r6 + 4u) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r6 + 4u)) + std::bit_cast<float>(*gptr<u32>(r1))));
        *gptr<u32>(r6 + 8u) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r6 + 8u)) + std::bit_cast<float>(*gptr<u32>(r1 + 4u))));
        S1 = std::bit_cast<float>(*gptr<u32>(r1 + 8u));
        S0 = std::bit_cast<float>(*gptr<u32>(r6 + 0xcu)) + S1;  // (from the original)
        *gptr<u32>(r6 + 0xcu) = u32(std::bit_cast<u32>(S0));  // (from the original)
        goto L_1a64d4;
    }
    S0 = std::bit_cast<float>(*gptr<u32>(0x1a64f0u));  // (from the original)
    S1 = std::bit_cast<float>(*gptr<u32>(0x1a64f4u));  // (from the original)
    S2 = std::bit_cast<float>(*gptr<u32>(0x1a64f8u));  // (from the original)
    r0 = r6 + 4u;
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r0 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r0 + 8) = u32(std::bit_cast<u32>(S2));
L_1a64d4:;
    r1 = 0x14u;  // (from the original)
    r0 = 0xffu;  // (from the original)
    *gptr<u8>(r6 + 0xf3u) = u8(r1);  // (from the original)
    *gptr<u8>(r6 + 0x136u) = u8(r0);  // (from the original)
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_001a63e8
GUEST_EXPORT(0x001a63e8, d_001a63e8::f_001a63e8);

// f_001a7760: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001a7760 {

inline constexpr guest::Function<0x00757aa0, u32(u32, u32, u32, u32)> call_00757aa0;  // (from the original)

u32 f_001a7760(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18;  // (from the original)
    r4 = r0;
    r7 = r3;
    r3 = r13 + 0x18u;  // (from the original)
    r5 = *gptr<u32>(r3);
    r6 = *gptr<u32>(r3 + 4);
    guest::cpu()->r[13] = r13;
    r0 = call_00757aa0(r0, r1, r2, r3);
    r0 = r0 + (r0 << 1);
    *gptr<u8>(*gptr<u32>(r4) + r0) = u8(r6);
    r1 = r0 + 1u;
    r0 = r0 + 2u;
    *gptr<u8>(*gptr<u32>(r4) + r1) = u8(r5);
    r1 = *gptr<u32>(r4);
    *gptr<u8>(r1 + r0) = u8(r7);
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
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
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r6 = r1;
    r0 = r1;
    r0 = call_002fcb10(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_1a7850;
    }
    r0 = r6;
    r0 = call_0030b654(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_1a7850;
    }
    r0 = r6;
    r0 = call_0030f594(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_1a7850;
    }
    r5 = r4 + 0x40u;  // (from the original)
    *gptr<u32>(r4 + 0x3cu) = u32(*gptr<u32>(r4 + 0x3cu) + 1u);  // (from the original)
    r0 = r6;
    r0 = call_002fcb10(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r0 = r6;
        r0 = call_0030b6b8(r0, r1, r2, r3);
        r0 = r0 - 0x2000u;  // (from the original)
        r3 = r0 & 7u;
        r2 = u32(*gptr<u8>(r5 + (r0 >> 3)));
        r1 = r2 | lsl_r(1u, r3 & 0xff);  // (from the original)
        *gptr<u8>(r5 + (r0 >> 3)) = u8(r1);
    }
    r0 = r6;
    r0 = call_0076880c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    r0 = r6;
    r0 = call_007689a4(r0, r1, r2, r3);
    r1 = *gptr<u32>(r4 + (r5 << 2)) + 1u;
    *gptr<u32>(r4 + (r5 << 2)) = u32(r1);
    if (r5 == r0) {
        goto L_1a7850;
    }
    r1 = *gptr<u32>(r4 + (r0 << 2)) + 1u;
    *gptr<u32>(r4 + (r0 << 2)) = u32(r1);
L_1a7850:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_001a77a0
GUEST_EXPORT(0x001a77a0, d_001a77a0::f_001a77a0);

// f_001a8ddc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001a8ddc {

inline constexpr guest::Function<0x008167fc, u32(u32, u32, u32, u32)> call_008167fc;  // (from the original)

u32 f_001a8ddc(gptr<CallbackTable> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    r3 = 0x857a50u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    r12 = u32(arg0->key1);
    r4 = 1u;
    r1 = *gptr<u32>(r3 + 0x14u);  // (from the original)
    if (r12 == *gptr<u32>(r3 + 0x10u)) {  // (from the original)
        if (r12 == 0) {
            if (((u32(arg0->key2) | r1) & 1u) == 0) {
                goto L_1a8e54;
            }
        }
        if (*gptr<u32>(r0 + 0x10u) == r1) {  // (from the original)
            goto L_1a8e54;
        }
    }
    r1 = *gptr<u32>(r3 + 0x3cu);  // (from the original)
    if (r12 != *gptr<u32>(r3 + 0x38u)) {  // (from the original)
        goto L_1a8ea8;
    }
    if (r12 == 0) {
        if (((*gptr<u32>(r0 + 0x10u) | r1) & 1u) == 0) {  // (from the original)
            goto L_1a8e54;
        }
    }
    if (*gptr<u32>(r0 + 0x10u) != r1) {  // (from the original)
        goto L_1a8ea8;
    }
L_1a8e54:;
    r1 = 0x94fd2bu;  // (from the original)
    r2 = u32(*gptr<u8>(0x1864u + r0));  // (from the original)
    if (r2 == 0) {
        *gptr<u8>(r1) = u8(r4);
        goto L_1a8e78;
    }
    if (r2 == 1u) {
        *gptr<u8>(r1) = u8(0u);
    }
L_1a8e78:;
    if (u32(*gptr<u8>(0x185du + r0)) != 0) {  // (from the original)
        r3 = r3 + 0x30u;  // (from the original)
        r1 = *gptr<u32>(r3);
        r2 = *gptr<u32>(r3 + 4);
        r0 = call_008167fc(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r3 = r3 + 0x28u;  // (from the original)
    r1 = *gptr<u32>(r3);
    r2 = *gptr<u32>(r3 + 4);
    r0 = call_008167fc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
L_1a8ea8:;
    r0 = r0 + 0x185eu;  // (from the original)
    *gptr<u8>(r0) = u8(r4);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
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
    u32 r1 = 0;
    u32 r2 = 0;
    r1 = ~0u;
    r2 = 0u;
    arg0->word_0 = u32(r1);
    arg0->word_4 = u32(r1);
    arg0->word_8 = u32(r2);
    arg0->word_10 = u32(r1);
    arg0->word_c = u32(r2);
    arg0->word_14 = u32(r1);
    arg0->byte_18 = u8(1u);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_001a9368
GUEST_EXPORT(0x001a9368, d_001a9368::f_001a9368);

// f_001a998c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001a998c {

inline constexpr guest::Function<0x002cd444, u32(u32, u32, u32, u32)> call_002cd444;  // (from the original)
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> call_002fd108;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x00567d60, u32(u32, u32, u32, u32)> call_00567d60;  // (from the original)
inline constexpr guest::Function<0x00567e24, u32(u32, u32, u32, u32)> call_00567e24;  // (from the original)
inline constexpr guest::Function<0x00569d50, u32(u32, u32, u32, u32)> call_00569d50;  // (from the original)

u32 f_001a998c(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r1 = 0x1a9ab0u;  // (from the original)
    r0 = r0 + 0x12c8u;  // (from the original)
    r0 = call_00567e24(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_1a9aac;
    }
    r1 = *gptr<u32>(0x94e4b8u) + 0x34u;  // (from the original)
    r0 = r4 + 0x1510u;  // (from the original)
    r0 = call_00567d60(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = 0x518u;  // (from the original)
    r0 = u32(*gptr<u8>(0x98c56cu));  // (from the original)
    if (r0 != 0) {
        if (r0 == 1u) {
            goto L_1a9a48;
        }
        goto L_1a9aa8;
    }
    r4 = r4 + 0x184cu;  // (from the original)
    r0 = *gptr<u32>(r4);
    if (r0 != 0) {
        goto L_1a9aa8;
    }
    r0 = call_00569d50(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = *gptr<u32>(r0 + 4u);
    r2 = 4u;
    r0 = 0x630u;  // (from the original)
    r0 = call_002fd108(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 1u;
    r1 = r0 + 0x118u;  // (from the original)
    r0 = call_002cd444(r0, r1, r2, r3);
    r2 = 0x8ef22cu;  // (from the original)
    r3 = 1u;
    *gptr<u32>(r0) = u32(r2);
    *gptr<u32>(r0 + 0xe4u) = u32(r2 + 0x44u);  // (from the original)
    r1 = 0x2e0994u;  // (from the original)
    r2 = r5;
    r0 = r0 + 0x118u;  // (from the original)
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r4) = u32(r0 - 0x118u);  // (from the original)
    goto L_1a9aa8;
L_1a9a48:;
    r4 = r4 + 0x1850u;  // (from the original)
    r0 = *gptr<u32>(r4);
    if (r0 != 0) {
        goto L_1a9aa8;
    }
    r0 = call_00569d50(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = *gptr<u32>(r0 + 4u);
    r0 = 0xb48u;  // (from the original)
    r2 = 4u;
    r0 = call_002fd108(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 2u;
    r1 = r0 + 0x118u;  // (from the original)
    r0 = call_002cd444(r0, r1, r2, r3);
    r1 = 0x8ef284u;  // (from the original)
    r3 = 2u;
    *gptr<u32>(r0 + 0xe4u) = u32(r1 + 0x44u);  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    r1 = 0x2e0994u;  // (from the original)
    r2 = r5;
    r0 = r0 + 0x118u;  // (from the original)
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r4) = u32(r0 - 0x118u);  // (from the original)
L_1a9aa8:;
    r0 = 1u;
L_1a9aac:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
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
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    r13 = r13 - 0x20;  // (from the original)
    r4 = 0u;
    r3 = r0 + 0xcu;  // (from the original)
    r5 = 0x857a50u;  // (from the original)
    arg0->word_4 = u32(r4);
    arg0->byte_8 = u8(r4);
    ea = r5 + 0x48u;  // (from the original)
    r2 = *gptr<u32>(ea + 4);
    arg0->word_c = u32(*gptr<u32>(ea));
    arg0->word_10 = u32(r2);
    arg0->word_14 = u32(r4);
    r1 = 0x8eb138u;  // (from the original)
    arg0->byte_18 = u8(r4);
    arg0->word_1c = u32(r4);
    arg0->word_0 = u32(r1);
    arg0->word_20 = u32(r4);
    ea = r0 + 0x24u;  // (from the original)
    arg0->word_24 = u32(r4);
    r0 = ea + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_005d8ec8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x1008u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125e3c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x14cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125e3c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x14cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_001207d8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x248u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_001207d8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x248u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125aec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125aec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125aec(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x17d0u;  // (from the original)
    r0 = r0 - 0x17a8u;  // (from the original)
    *gptr<u32>(r1 + r0) = u32(r4);
    r0 = r0 + 0x17d4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125aec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125aec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125aec(r0, r1, r2, r3);
    r14 = 0x184cu;  // (from the original)
    r0 = r0 - 0x1824u;  // (from the original)
    r1 = 1u;
    *gptr<u32>(r14 + r0) = u32(r4);
    r14 = r14 + (r1 << 2);
    *gptr<u32>(r14 + r0) = u32(r4);
    r14 = r14 | r1 << 2;
    *gptr<u32>(r14 + r0) = u32(r4);
    r14 = r14 + (r1 << 2);
    r7 = r14 | r1 << 2;
    *gptr<u32>(r14 + r0) = u32(r4);
    r6 = r7 | r1;
    *gptr<u8>(r7 + r0) = u8(r4);
    r14 = r6 + r1;
    r7 = r14 | r1;
    ea = r6 + r0;
    *gptr<u8>(ea) = u8(r4);
    r8 = r7 + r1;
    ea = r14 + r0;
    *gptr<u8>(ea) = u8(r4);
    r6 = r8 | r1 << 2;
    ea = r7 + r0;
    *gptr<u8>(ea) = u8(r1);
    ea = r8 + r0;
    *gptr<u32>(ea) = u32(0x10003c0u);  // (from the original)
    ea = r6 + r0;
    *gptr<u8>(ea) = u8(3u);
    ea = r6 + (r1 << 2) + r0;
    *gptr<u32>(ea) = u32(~0u);
    ea = r5 + 0x40u;  // (from the original)
    r2 = *gptr<u32>(ea);
    r3 = *gptr<u32>(ea + 4);
    r1 = r0 + 0x1800u;  // (from the original)
    ea = r1 + 0x6cu;  // (from the original)
    *gptr<u32>(ea) = u32(r2);
    *gptr<u32>(ea + 4) = u32(r3);
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
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
    u32 r1 = 0;
    r1 = 0x8eb138u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(r1);
    r0 = r0 + 0x1824u;  // (from the original)
    r0 = call_0056988c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0x2cu;  // (from the original)
    r0 = call_0056988c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0x248u;  // (from the original)
    r0 = call_00567ef0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0x248u;  // (from the original)
    r0 = call_00567ef0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0x14cu;  // (from the original)
    r0 = call_005bf744(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0x14cu;  // (from the original)
    r0 = call_005bf744(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0x1008u;  // (from the original)
    r0 = call_005d5414(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_001aa100
GUEST_EXPORT(0x001aa100, d_001aa100::f_001aa100);

// f_001aa440: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001aa440 {

inline constexpr guest::Function<0x005664d8, u32(u32, u32, u32, u32)> call_005664d8;  // (from the original)

u32 f_001aa440(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10;  // (from the original)
    r4 = r2;
    r2 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    r5 = r3;
    guest::cpu()->r[13] = r13;
    r0 = call_005664d8(r0, r1, r2, r3);
    r1 = r0;
    *gptr<u32>(r0) = u32(0x8eb14cu);  // (from the original)
    r0 = r0 + 0x10u;  // (from the original)
    r2 = u32(*gptr<u8>(r4 + 3u));
    r3 = u32(*gptr<u8>(r4 + 2u));
    r12 = u32(*gptr<u8>(r4 + 1u));
    *gptr<u8>(r0) = u8(u32(*gptr<u8>(r4)));
    *gptr<u8>(r0 + 1u) = u8(r12);
    *gptr<u8>(r0 + 2u) = u8(r3);
    *gptr<u8>(r0 + 3u) = u8(r2);
    r0 = r1;
    *gptr<u8>(r1 + 0x14u) = u8(r5);  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
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
    u32 ea = 0;
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18;  // (from the original)
    r5 = r0;
    r6 = r0 + 0x650u;  // (from the original)
    r7 = r1;
    r4 = r2;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_00135748(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_001aa8c8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r7;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_001aa500(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    res = r0;
    if (res >> 0x1f == (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        ea = r5 + (r0 << 4) + 0x18u;  // (from the original)
        r1 = *gptr<u32>(ea + 4);
        *gptr<u32>(r4) = u32(*gptr<u32>(ea));
        *gptr<u32>(r4 + 4) = u32(r1);
    } else {
        r0 = 0u;
        *gptr<u32>(r4) = u32(r0);
        *gptr<u32>(r4 + 4u) = u32(r0);
    }
    r0 = r6;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_001357ec(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_001aa4a0
GUEST_EXPORT(0x001aa4a0, d_001aa4a0::f_001aa4a0);

// f_001aa630: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001aa630 {

struct __attribute__((packed)) Object_001aa630_0 {
    u8 unknown_0[0x664];  // (not used here)
    u8 byte_664;
};
GUEST_OFFSET(Object_001aa630_0, byte_664, 0x664);  // (from the original)

inline constexpr guest::Function<0x0048a6d8, u32(u32, u32, u32, u32)> call_0048a6d8;  // (from the original)

u32 f_001aa630(gptr<Object_001aa630_0> arg0, u32 r1) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 zf = 0;
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    if (u32(arg0->byte_664) != 1u) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = r4 + 0x65cu;  // (from the original)
    r0 = call_0048a6d8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    res = r0 & 0x80000000u;  // (from the original)
    r1 = res;
    *gptr<u32>(r4 + 0x660u) = u32(r0);  // (from the original)
    if (!(res >> 0x1f)) {  // (from the original)
        *gptr<u8>(r4 + 0x664u) = u8(3u);  // (from the original)
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = 0xd860c4f2u;  // (from the original)
    zf = r0 == r1;
    if (!zf) {
        r1 = 0xd8a0c4fau;  // (from the original)
        zf = r0 == r1;
    }
    if (!zf) {
        r1 = 0xd8a0c4f8u;  // (from the original)
    }
    r0 = 0u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
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
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 nf = 0;
    u32 vf = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r0 + 0x650u;  // (from the original)
    r6 = r1;
    r0 = r5;
    r0 = call_00135748(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = u32(*gptr<u8>(r4 + 0x664u));  // (from the original)
    if (r0 == 0) {
        r0 = call_00124f94(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        res = r0 & 0x80000000u;  // (from the original)
        r2 = res;
        *gptr<u32>(r4 + 0x660u) = u32(r0);  // (from the original)
        if (res >> 0x1f) {  // (from the original)
            r0 = r5;
            r0 = call_001357ec(r0, r1, r2, guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            r0 = 0u;
            guest::cpu()->r[13] += 0x10u;  // (from the original)
            guest::cpu()->r[1] = r1;
            return r0;
        }
        r1 = 1u;
        r0 = 0x80u;  // (from the original)
        *gptr<u8>(r4 + 0x664u) = u8(r1);  // (from the original)
        r0 = call_001251b0(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
    }
    r0 = r5;
    r0 = call_001357ec(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r6;
    r0 = call_0048a604(r0, r1, r2, guest::cpu()->r[3]);
    r1 = r0 & 0x80000000u;  // (from the original)
    nf = r1 >> 0x1f;  // (from the original)
    vf = 0u;
    *gptr<u32>(r4 + 0x660u) = u32(r0);  // (from the original)
    if (nf != vf) {
        r1 = 0xd860c4f2u;  // (from the original)
    }
    if (nf == vf) {
        r0 = 1u;
    }
    if (nf != vf) {
        r0 = 0u;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_001aa804
GUEST_EXPORT(0x001aa804, d_001aa804::f_001aa804);

// f_001aa88c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001aa88c {

inline constexpr guest::Function<0x00125110, u32(u32, u32, u32, u32)> call_00125110;  // (from the original)
inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> call_00135748;  // (from the original)
inline constexpr guest::Function<0x001357ec, u32(u32, u32, u32, u32)> call_001357ec;  // (from the original)

u32 f_001aa88c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r0 + 0x650u;  // (from the original)
    r0 = r5;
    r0 = call_00135748(r0, r1, r2, r3);
    r3 = 0x64u;  // (from the original)
    r2 = 0u;
    r1 = r4 + 0x668u;  // (from the original)
    r0 = r4 + 0x10u;  // (from the original)
    r0 = call_00125110(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r4 + 0x660u) = u32(r0);  // (from the original)
    r0 = r5;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_001357ec(r0, r1, r2, r3);
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
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r5 = r0;
    r0 = u32(arg0->byte_664);
    r13 = r13 - 0x28u;  // (from the original)
    if (r0 == 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_00124f94(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
        res = r0 & 0x80000000u;  // (from the original)
        r2 = res;
        *gptr<u32>(r5 + 0x660u) = u32(r0);  // (from the original)
        if (res >> 0x1f) {  // (from the original)
            r13 = r13 + 0x28u;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return r0;
        }
        r1 = 1u;
        r0 = 0x80u;  // (from the original)
        *gptr<u8>(r5 + 0x664u) = u8(r1);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_001251b0(r0, r1, r2, r3);
        r3 = guest::cpu()->r[3];
    }
    r4 = 0u;
L_1aa904:;
    r2 = 0u;
    r1 = 1u;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0048a574(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r4 = 1u;
        guest::preempt();
        goto L_1aa904;
    }
    if (r4 == 0) {
        r13 = r13 + 0x28u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r3 = 0x64u;  // (from the original)
    r2 = 0u;
    r1 = r5 + 0x668u;  // (from the original)
    r0 = r5 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125110(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r5 + 0x660u) = u32(r0);  // (from the original)
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
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
    u32 ea = 0;
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    r0 = r0 + 0x650u;  // (from the original)
    r5 = r1;
    r6 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_00135748(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_001aa8c8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (*gptr<u32>(r5) != 0) {
        r1 = r5;
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_001aa500(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        res = r0;
        if (res >> 0x1f == (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
            goto L_1aa9e4;
        }
    }
    ea = r5 + 4u;
    r5 = ea;
    r2 = *gptr<u32>(ea);
    r1 = *gptr<u32>(r5 + 4u);
    res = r2 | r1;
    if (res == 0) {
        goto L_1aa9e0;
    }
    r3 = *gptr<u32>(r4 + 0x668u);  // (from the original)
    r0 = 0u;
    if (!u32(r3 >= 0u) || u32(r3 == 0)) {
        goto L_1aa9e0;
    }
    do {
L_1aa9ac:;
        r12 = r4 + (r0 << 4);
        r5 = *gptr<u32>(r12 + 0x10u);  // (from the original)
        if (!(r5 != 0)) {
            ea = r12 + 0x18u;  // (from the original)
            r5 = *gptr<u32>(ea) ^ r2;
            res = *gptr<u32>(ea + 4) ^ r1 | r5;
            if (res == 0) {
                goto L_1aa9e4;
            }
        }
        r0 = r0 + 1u;
        guest::preempt();
    } while (u32(r3 >= r0) && !u32(r3 == r0));
L_1aa9e0:;
    r0 = ~0u;
L_1aa9e4:;
    r1 = 1u;
    r4 = r1 + u32(s32(r0) >> 0x1f);  // (from the original)
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_001357ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
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
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    r4 = r0 + 0x650u;  // (from the original)
    r6 = r1;
    r0 = r4;
    r0 = call_00135748(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r5;
    r0 = call_001aa8c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r6;
    r0 = r5;
    r0 = call_001aa500(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 1u;
    r5 = r1 + u32(s32(r0) >> 0x1f);  // (from the original)
    r0 = r4;
    r0 = call_001357ec(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r5;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_001aa9fc
GUEST_EXPORT(0x001aa9fc, d_001aa9fc::f_001aa9fc);

// f_001aadd0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001aadd0 {

inline constexpr guest::Function<0x004ee9cc, u32(u32, u32, u32, u32)> call_004ee9cc;  // (from the original)

u32 f_001aadd0(u32 r0, u32 r1, float S0) {
    u32 fpsr = guest::cpu()->fpscr;
    float S1 = 0;
    S1 = std::bit_cast<float>(*gptr<u32>(0x1aadfcu));  // (from the original)
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S1, S0);  // (from the original)
    if (!(fpsr >> 0x1e & 1) && fpsr >> 0x1f == (fpsr >> 0x1c & 1)) {  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    if (r1 >= 4u) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    r1 = r1 + (r1 << 1);
    r0 = r0 + (r1 << 3) + 0xe0u;  // (from the original)
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return call_004ee9cc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_001aadd0
GUEST_EXPORT(0x001aadd0, d_001aadd0::f_001aadd0);

// f_001aaed4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001aaed4 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x00745d44, u32(u32, u32, u32, u32)> call_00745d44;  // (from the original)

u32 f_001aaed4(u32 r0) {
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = 0x952d18u;  // (from the original)
    r0 = r0 + 0x78u;  // (from the original)
    r1 = *gptr<u32>(r5 + 8u);
    r0 = call_00745d44(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r4 + 0x9cu) = u32(r0);  // (from the original)
    r1 = *gptr<u32>(r5 + 4u);
    r0 = r4 + 0x78u;  // (from the original)
    r0 = call_00745d44(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r4 + 0xa0u) = u32(r0);  // (from the original)
    r1 = *gptr<u32>(r5 + 0x18u);  // (from the original)
    r0 = r4 + 0x78u;  // (from the original)
    r0 = call_00745d44(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r4 + 0xa4u) = u32(r0);  // (from the original)
    r1 = *gptr<u32>(r5 + 0x1cu);  // (from the original)
    r0 = r4 + 0x78u;  // (from the original)
    r0 = call_00745d44(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r4 + 0xa8u) = u32(r0);  // (from the original)
    r1 = *gptr<u32>(r5 + 0x28u);  // (from the original)
    r0 = r4 + 0x78u;  // (from the original)
    r0 = call_00745d44(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r4 + 0xacu) = u32(r0);  // (from the original)
    r1 = *gptr<u32>(r5 + 0x2cu);  // (from the original)
    r0 = r4 + 0x78u;  // (from the original)
    r0 = call_00745d44(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r4 + 0xb0u) = u32(r0);  // (from the original)
    r1 = *gptr<u32>(r5 + 0x30u);  // (from the original)
    r0 = r4 + 0x78u;  // (from the original)
    r0 = call_00745d44(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r4 + 0xb4u) = u32(r0);  // (from the original)
    r1 = *gptr<u32>(r5 + 0xcu);  // (from the original)
    r0 = r4 + 0x78u;  // (from the original)
    r0 = call_00745d44(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r4 + 0xb8u) = u32(r0);  // (from the original)
    r1 = *gptr<u32>(r5 + 0x10u);  // (from the original)
    r0 = r4 + 0x78u;  // (from the original)
    r0 = call_00745d44(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r4 + 0xbcu) = u32(r0);  // (from the original)
    r1 = *gptr<u32>(r5 + 0x14u);  // (from the original)
    r0 = r4 + 0x78u;  // (from the original)
    r0 = call_00745d44(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r4 + 0xc0u) = u32(r0);  // (from the original)
    r1 = *gptr<u32>(r5 + 0x34u);  // (from the original)
    r0 = r4 + 0x78u;  // (from the original)
    r0 = call_00745d44(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r4 + 0xc4u) = u32(r0);  // (from the original)
    r0 = call_002f74c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r0;
    r0 = 0x20u;  // (from the original)
    r0 = call_002f74e0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r6 = 0u;
    if (r0 != 0) {
        goto L_1aaff0;
    }
    r0 = call_002f74c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0x4au) {  // (from the original)
        goto L_1aaff0;
    }
    r0 = call_002f74c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0x4bu) {  // (from the original)
        goto L_1aaff0;
    }
    r0 = call_002f74c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0x4cu) {  // (from the original)
        goto L_1aaff0;
    }
    r0 = call_002f74c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r0;
    r0 = 0x400000u;  // (from the original)
    r0 = call_002f74e0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = 2u;
        *gptr<u8>(r5) = u8(r0);
        goto L_1aaff4;
    }
L_1aaff0:;
    *gptr<u8>(r5) = u8(r6);
L_1aaff4:;
    r0 = call_002f74c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r0;
    r0 = 0x20u;  // (from the original)
    r0 = call_002f74e0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    *gptr<u8>(r4 + 0x141u) = u8(r0);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
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
    u32 r2 = 0;
    r2 = arg0->word_1c;
    if (r2 == 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = arg0->word_24;
    r0 = r2;
    return call_0049fffc(r0, r1, r2, guest::cpu()->r[3]);
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

inline constexpr guest::Function<0x0014f378, u32(u32, u32, u32, u32)> call_0014f378;  // (from the original)
inline constexpr guest::Function<0x0056a224, u32(u32, u32, u32, u32)> call_0056a224;  // (from the original)

u32 f_001ab2ec(gptr<Object_001ab2ec_0> arg0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r4 = r0;
    zf = r2 == 0;
    r5 = r2;
    if (zf) {
        r5 = arg0->word_18;
    }
    r13 = r13 - 0x28u;  // (from the original)
    r6 = r1;
    if (zf) {
        zf = r5 == 0;
    }
    r7 = r3;
    if (zf) {
        goto L_1ab3b8;
    }
    r0 = r13 + 4u;
    r2 = r4;
    r1 = r4 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_0014f378(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    *gptr<u16>(r13) = u16(u32(*gptr<u16>(r6 + 0x92u)));  // (from the original)
    r1 = *gptr<u32>(r13);
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_0056a224(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S1 = std::bit_cast<float>(*gptr<u32>(r5 + 8u));
    *gptr<u32>(r5) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r5)) + std::bit_cast<float>(*gptr<u32>(r13 + 4u))));
    S0 = S1 + std::bit_cast<float>(*gptr<u32>(r13 + 0xcu));  // (from the original)
    *gptr<u32>(r5 + 8u) = u32(std::bit_cast<u32>(S0));
    if (r7 == 0) {
        goto L_1ab3b8;
    }
    S0 = std::bit_cast<float>(*gptr<u32>(0x1ab3c0u));  // (from the original)
    *gptr<u32>(r4 + 8u) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r4) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r4 + 0x14u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r4 + 0xcu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    r0 = *gptr<u32>(r4 + 0x20u);  // (from the original)
    r1 = *gptr<u32>(r4 + 0x10u);  // (from the original)
    *gptr<u32>(r0 + 0xcu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r0 + 0x1cu) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x2cu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r0 + 0x3cu) = u32(*gptr<u32>(r0 + 0x3cu) | 0x800u);  // (from the original)
    r3 = *gptr<u32>(r4);
    r0 = *gptr<u32>(r4 + 0x1cu);  // (from the original)
    ea = r4 + 4u;
    r2 = *gptr<u32>(ea + 4);
    *gptr<u32>(r0 + 0x1cu) = u32(*gptr<u32>(ea));  // (from the original)
    *gptr<u32>(r0 + 0x2cu) = u32(r2);  // (from the original)
    *gptr<u32>(r0 + 0xcu) = u32(r3);  // (from the original)
    r1 = *gptr<u32>(r0 + 0x3cu) | 0x800u;  // (from the original)
    *gptr<u32>(r0 + 0x3cu) = u32(r1);  // (from the original)
L_1ab3b8:;
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
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r4 = r0;
    r6 = r2;
    r0 = 0xa14b5cu;  // (from the original)
    r5 = r3;
    guest::cpu()->r[13] = r13;
    r0 = call_0076f954(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(r5);
    r2 = *gptr<u32>(r0);
    r3 = r6;
    r1 = r4 + 0x78u;  // (from the original)
    r0 = r4 + 0xccu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_004eefe0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r1 = 1u;
        r0 = r4 + 0xe0u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_004ee904(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r4 + 0xccu;  // (from the original)
        r0 = r4 + 0x78u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_004edaec(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r0 = 1u;
    }
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
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
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = 0x276u;  // (from the original)
    arg0->half_68 = u16(r0);
    arg0->half_70 = u16(r0);
    arg0->half_6a = u16(r0);
    arg0->half_72 = u16(r0);
    arg0->half_6c = u16(r0);
    arg0->half_74 = u16(r0);
    arg0->half_6e = u16(r0);
    arg0->half_76 = u16(r0);
    if (arg0->word_7c != 0) {
        r0 = r4 + 0x78u;  // (from the original)
        r0 = call_004f1270(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r0 = r4 + 0xccu;  // (from the original)
    r0 = call_004ef3a4(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = 1u;
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_001abcd4
GUEST_EXPORT(0x001abcd4, d_001abcd4::f_001abcd4);

// f_001abfb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001abfb4 {

inline constexpr guest::Function<0x001abd24, u32(u32, u32, u32, u32)> call_001abd24;  // (from the original)

u32 f_001abfb4(u32 r0_unused, u32 r1_unused, u32 r2, u32 r3) {
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    float S3 = 0;
    float S4 = 0;
    r13 = r13 - 0x10u;  // (from the original)
    r12 = r13 + 0x10u;  // (from the original)
    S3 = std::bit_cast<float>(*gptr<u32>(r12));
    S4 = std::bit_cast<float>(*gptr<u32>(r12 + 4));
    r12 = r13 + 4u;
    *gptr<u32>(r13) = u32(r3);
    r3 = r2;
    r2 = 0u;
    *gptr<u32>(r12) = u32(std::bit_cast<u32>(S3));
    *gptr<u32>(r12 + 4) = u32(std::bit_cast<u32>(S4));
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    call_001abd24(guest::cpu()->r[0], guest::cpu()->r[1], r2, r3);
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
    u32 r1 = arg1.addr();
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    float S0 = 0;
    r12 = *gptr<u32>(r13);
    arg0->half_38 = u16(r2);
    arg0->word_48 = u32(std::bit_cast<u32>(arg1->v[0]));
    S0 = arg1->v[1];
    arg0->word_4c = u32(std::bit_cast<u32>(S0));
    r1 = std::bit_cast<u32>(arg1->v[2]);
    arg0->word_50 = u32(r1);
    arg0->half_30 = u16(r3);
    arg0->half_32 = u16(r12);
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
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
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 8;
    r4 = r0;
    r1 = 0x2b6ef8u;  // (from the original)
    r3 = 8u;
    arg0->word_0 = u32(0x8eb1a8u);  // (from the original)
    r2 = 0xe0u;  // (from the original)
    r0 = r4 + 0xbccu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x1c81ccu;  // (from the original)
    r3 = 8u;
    r2 = 0x1cu;  // (from the original)
    r0 = r4 + 0xaecu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r4) = u32(0x8eb3f8u);  // (from the original)
    r0 = r4 + 0xa00u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f7710(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    ea = r0 - 0xa00u;  // (from the original)
    *gptr<u32>(ea) = u32(0x8eb984u);  // (from the original)
    r1 = 0x8f0888u;  // (from the original)
    ea = ea + 0x224u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    r0 = ea + 0x608u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f7710(r0, r1, r2, r3);
    r1 = 0x2b6ef8u;  // (from the original)
    r4 = r0 - 0x608u;  // (from the original)
    r3 = 2u;
    r2 = 0xe0u;  // (from the original)
    r0 = r0 - 0x1c0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x410u;  // (from the original)
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
    r0 = r0 - 0x14cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005bf744(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x248u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00567ef0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x38u;  // (from the original)
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
    r0 = r0 - 0x14cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005bf744(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0x2cu;  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_001aca90
GUEST_EXPORT(0x001aca90, d_001aca90::f_001aca90);

// f_001acf0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001acf0c {

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
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    u32 cf = 0;
    r13 = r13 - 0x18;  // (from the original)
    r4 = r0;
    r5 = r1;
    r8 = 0x94fcfcu;  // (from the original)
    r7 = r2;
    r6 = r3;
    if ((*gptr<u32>(r8 + 4u) & 1u) != 0) {
        goto L_1acf5c;
    }
    r0 = r8 + 4u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_002fe7dc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    if (r0 == 0) {
        goto L_1acf5c;
    }
    r0 = 0x98c334u;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x1ad068u));  // (from the original)
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r0 + 4u) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r0 + 8u) = u32(std::bit_cast<u32>(S0));
L_1acf5c:;
    r1 = 0x1ad070u;  // (from the original)
    r0 = r4 + 4u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_0056878c(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    ea = 0x98c334u;  // (from the original)
    r1 = *gptr<u32>(ea);
    r2 = *gptr<u32>(ea + 4);
    r3 = *gptr<u32>(ea + 8);
    ea = r0 + 0x34u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(r2);
    *gptr<u32>(ea + 8) = u32(r3);
    *gptr<u8>(r0 + 0xb7u) = u8(u32(*gptr<u8>(r0 + 0xb7u)) & 0xcfu);  // (from the original)
    *gptr<u8>(r4 + 0x3d8u) = u8(r5);  // (from the original)
    if (r6 != 0) {
        S2 = std::bit_cast<float>(*gptr<u32>(0x1ad07cu));  // (from the original)
        r0 = *gptr<u32>(r4 + 0x150u);  // (from the original)
        S1 = float(std::bit_cast<u32>(std::bit_cast<float>(r5)));
        S0 = std::bit_cast<float>(*gptr<u32>(r4 + 0x3ccu)) + S1 * S2;  // (from the original)
        *gptr<u32>(r0 + 0x2cu) = u32(std::bit_cast<u32>(S0));  // (from the original)
        *gptr<u8>(r0 + 0xb7u) = u8(u32(*gptr<u8>(r0 + 0xb7u)) & 0xcfu);  // (from the original)
    }
    r1 = r4 + 0x21cu;  // (from the original)
    r0 = r4 + 4u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_004b9b64(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    r0 = r4 + 0x21cu;  // (from the original)
    S0 = float(std::bit_cast<u32>(std::bit_cast<float>(u32(*gptr<u8>(r4 + 0x3d8u)))));  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_005697e0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    r1 = r4 + 0x244u;  // (from the original)
    r0 = r4 + 4u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_004b9b64(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    r0 = r4 + 0x244u;  // (from the original)
    S0 = float(std::bit_cast<u32>(std::bit_cast<float>(u32(*gptr<u8>(r4 + 0x3d8u)))));  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_005697e0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    r0 = r4 + 4u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_00568c10(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    r1 = r4 + 0x21cu;  // (from the original)
    r0 = r4 + 4u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_00569420(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    r1 = r4 + 0x244u;  // (from the original)
    r0 = r4 + 4u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_00569420(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    r1 = *gptr<u32>(r4) + (u32(*gptr<u8>(r4 + 0x3d8u)) << 5);  // (from the original)
    r0 = r4 + 0x158u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_005e2e50(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    r0 = r4 + 0x158u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_005e2f94(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    zf = r7 == 0;
    cf = r7 >= 0u;
    if (!zf) {
        r0 = u32(*gptr<u8>(r4 + 0x3d8u));  // (from the original)
        zf = r0 == 1u;
        cf = r0 >= 1u;
    }
    if (!(!cf || zf)) {
        r1 = u32(*gptr<u8>(0x84b478u + r0));  // (from the original)
        r0 = *gptr<u32>(r8);
        r13 = r13 + 0x18;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        return call_00583a18(r0, r1, r2, r3);
    }
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
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

// f_001add58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001add58 {

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
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x2558u;  // (from the original)
    r6 = r0;
    r5 = r13;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00113d14(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r6;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_001138dc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00301e20(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_1adeac;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fae84(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_002fb310(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = r0 + 0x1976cu;  // (from the original)
    r0 = *gptr<u32>(r13 + 0x2510u);  // (from the original)
    if ((r0 & 0x600u) != 0) {  // (from the original)
        goto L_1addf8;
    }
    r4 = r5 + 0x8a0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fae84(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x62138u;  // (from the original)
    r2 = u32(*gptr<u16>(r0));
    if (u32(*gptr<u16>(r13 + 0x8a0u)) != r2) {  // (from the original)
        goto L_1addf8;
    }
    r2 = u32(*gptr<u8>(r13 + 0x8b4u));  // (from the original)
    if (r2 != u32(*gptr<u8>(r0 + 0x14u))) {  // (from the original)
        goto L_1addf8;
    }
    r1 = r0 + 2u;
    r2 = 0x12u;  // (from the original)
    r0 = r4 + 2u;
    guest::cpu()->r[13] = r13;
    r0 = call_00100d2c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_1adebc;
    }
L_1addf8:;
    r1 = r6 + 0x2518u;  // (from the original)
    r0 = *gptr<u32>(0x9529ccu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_001aa9fc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_1adedc;
    }
    r4 = r13 + 0x2210u;  // (from the original)
    r1 = 0u;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00758bac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_1ade98;
    }
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00311c50(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_1ade90;
    }
    ea = r0 + 0x16u;  // (from the original)
    r0 = ea;
    r3 = u32(*gptr<u16>(ea));
    r2 = u32(*gptr<u16>(r13 + 0x8a0u));  // (from the original)
    r1 = r5 + 0x8a0u;  // (from the original)
    if (r3 != r2) {
        goto L_1ade90;
    }
    r2 = u32(*gptr<u8>(r0 + 0x14u));  // (from the original)
    r3 = u32(*gptr<u8>(r13 + 0x8b4u));  // (from the original)
    if (r2 != r3) {
        goto L_1ade90;
    }
    r2 = 0x12u;  // (from the original)
    r1 = r1 + 2u;
    r0 = r0 + 2u;
    guest::cpu()->r[13] = r13;
    r0 = call_00100d2c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_1ade98;
    }
L_1ade90:;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002ff408(r0, r1, r2, r3);
L_1ade98:;
    r3 = 0u;
    r2 = 1u;
    r1 = r5;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_00114088(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_1adeac:;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00100b8c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x2558u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_1adebc:;
    r3 = 0u;
    r2 = r3;
    r1 = r5;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_00114088(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::preempt();
    goto L_1adeac;
L_1adedc:;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00112d9c(r0, r1, r2, r3);
    guest::preempt();
    goto L_1ade98;
}

}  // namespace d_001add58
GUEST_EXPORT(0x001add58, d_001add58::f_001add58);

// f_001ae1e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001ae1e4 {

inline constexpr guest::Function<0x00113d15, u32(u32, u32, u32, u32)> call_00113d14;  // (from the original)

u32 f_001ae1e4(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_00113d14(r0, r1, r2, r3);
    r2 = 0x2518u;  // (from the original)
    r1 = 0u;
    *gptr<u32>(r2 + r0) = u32(r1);
    *gptr<u8>((r2 | u32(s32(r2) >> 0xb)) + r0) = u8(r1);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_001ae1e4
GUEST_EXPORT(0x001ae1e4, d_001ae1e4::f_001ae1e4);

// f_001aebdc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001aebdc {

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)

u32 f_001aebdc(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r1 = 0x3084ccu;  // (from the original)
    r4 = r0;
    r3 = 0xau;  // (from the original)
    r2 = 0xcu;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
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
    r1 = u32(arg0->byte_0) & ~0xfu | r1 & 0xfu;  // (from the original)
    arg0->byte_0 = u8(r1);
    guest::cpu()->r[1] = r1;
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
    u32 r1 = 0;
    arg0->byte_0 = u8(u32(arg0->byte_0) & ~0x7fu | 0x6bu);  // (from the original)
    arg0->byte_3 = u8(u32(arg0->byte_3) & ~0x80u);  // (from the original)
    r1 = u32(arg0->byte_4) & ~3u | 2u;
    arg0->byte_4 = u8(r1);
    guest::cpu()->r[1] = r1;
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

inline constexpr guest::Function<0x004bb4bc, u32(u32, u32, u32, u32)> call_004bb4bc;  // (from the original)

u32 f_001aede0(gptr<Object_001aede0_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    float S0 = 0;
    float S1 = 0;
    float S2 = 0;
    float S3 = 0;
    S0 = std::bit_cast<float>(*gptr<u32>(0x1aee90u));  // (from the original)
    r13 = r13 - 0x28u;  // (from the original)
    r3 = r3 + 1u;
    r12 = *gptr<u32>(r13 + 0x28u);  // (from the original)
    r14 = r13 + 8u;
    *gptr<u32>(r13) = u32(std::bit_cast<u32>(float(s32(std::bit_cast<u32>(std::bit_cast<float>(r1)))) * S0));
    *gptr<u32>(r13 + 4u) = u32(std::bit_cast<u32>(float(s32(std::bit_cast<u32>(std::bit_cast<float>(r2)))) * S0));
    S1 = std::bit_cast<float>(r2);
    r2 = r12 + 1u;
    *gptr<u32>(r14) = u32(std::bit_cast<u32>(float(s32(std::bit_cast<u32>(std::bit_cast<float>(r3)))) * S0));
    *gptr<u32>(r14 + 4) = u32(std::bit_cast<u32>(float(s32(std::bit_cast<u32>(S1))) * S0));
    S1 = std::bit_cast<float>(r1);
    r14 = r13 + 0x10u;  // (from the original)
    r1 = 0u;
    S3 = float(s32(std::bit_cast<u32>(S1)));
    *gptr<u32>(r14) = u32(std::bit_cast<u32>(S3 * S0));
    *gptr<u32>(r14 + 4) = u32(std::bit_cast<u32>(float(s32(std::bit_cast<u32>(std::bit_cast<float>(r2)))) * S0));
    S2 = std::bit_cast<float>(r2);
    r2 = r13;
    S2 = float(s32(std::bit_cast<u32>(S2)));
    S1 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r3)))) * S0;
    S0 = S2 * S0;
    *gptr<u32>(r13 + 0x18u) = u32(std::bit_cast<u32>(S1));  // (from the original)
    *gptr<u32>(r13 + 0x1cu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    r0 = arg0->word_c;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0 = call_004bb4bc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_001aede0
GUEST_EXPORT(0x001aede0, d_001aede0::f_001aede0);

// f_001af458: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001af458 {

inline constexpr guest::Function<0x00138744, u32(u32, u32, u32, u32)> call_00138744;  // (from the original)

u32 f_001af458() {
    u32 r0 = 0;
    r0 = 0xa18690u;  // (from the original)
    return call_00138744(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_001af458
GUEST_EXPORT(0x001af458, d_001af458::f_001af458);

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
    u32 res = 0;
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r5 = r1;
    r6 = r2;
    r1 = r3;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0076a684(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    zf = r0 == 0;
    r0 = r13;
    if (zf) {
        guest::cpu()->r[13] = r13;
        r0 = call_0076ae38(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 != 0) {
            r0 = r13;
            guest::cpu()->r[13] = r13;
            r0 = call_006bb1a0(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
    } else {
        guest::cpu()->r[13] = r13;
        r0 = call_006b9798(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r0 = *gptr<u32>(r6);
    r4 = 0u;
    res = r0;
    if (u32(res == 0) || res >> 0x1f != (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        goto L_1afd24;
    }
L_1afcc8:;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb34(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    zf = r0 == 0x27u;  // (from the original)
    if (!zf) {
        zf = r0 == 0x24u;  // (from the original)
    }
    r0 = r5 + (r4 << 2);
    r1 = r13;
    if (zf) {
        goto L_1afd00;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_0076aa04(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_1afd14;
    }
L_1afcf4:;
    r0 = r13;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_1afd00:;
    guest::cpu()->r[13] = r13;
    r0 = call_002fe574(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        guest::preempt();
        goto L_1afcf4;
    }
L_1afd14:;
    r0 = *gptr<u32>(r6);
    r4 = r4 + 1u;
    res = r0 - r4;
    if (!u32(res == 0) && res >> 0x1f == ((r0 ^ r4) & (r0 ^ res)) >> 0x1f) {  // (from the original)
        guest::preempt();
        goto L_1afcc8;
    }
L_1afd24:;
    r0 = r5 + (r0 << 2);
    r1 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r6) = u32(*gptr<u32>(r6) + 1u);
    r0 = r13;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_001afc70
GUEST_EXPORT(0x001afc70, d_001afc70::f_001afc70);

// f_001aff90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001aff90 {

inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;  // (from the original)
inline constexpr guest::Function<0x0056a974, u32(u32, u32, u32, u32)> call_0056a974;  // (from the original)
inline constexpr guest::Function<0x005d46dc, u32(u32, u32, u32, u32)> call_005d46dc;  // (from the original)

u32 f_001aff90(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r4 = 0x953390u;  // (from the original)
    r13 = r13 - 0x10u;  // (from the original)
    if ((*gptr<u32>(r4 + 4u) & 1u) != 0) {
        goto L_1affd0;
    }
    r0 = r4 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fe7dc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_1affd0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_005d46dc(r0, r1, r2, r3);
    *gptr<u32>(r4 + 8u) = u32(*gptr<u32>(r4 + 0xcu + (r0 << 2)));  // (from the original)
L_1affd0:;
    r1 = r13;
    *gptr<u32>(r13 + 4u) = u32(*gptr<u32>(r4 + 8u));
    *gptr<u32>(r13) = u32(0x9047f8u);  // (from the original)
    r3 = 0x80u;  // (from the original)
    r2 = *gptr<u32>(0x952c3cu);  // (from the original)
    r0 = 0xa18690u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056a974(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_001aff90
GUEST_EXPORT(0x001aff90, d_001aff90::f_001aff90);
