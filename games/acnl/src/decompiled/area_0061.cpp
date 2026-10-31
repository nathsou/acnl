// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "graphics/hemisphere_light.hpp"

#include <bit>

using guest::gptr;

// f_00610d2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00610d2c {

struct __attribute__((packed)) Object_00610d2c_0 {
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
};
GUEST_OFFSET(Object_00610d2c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00610d2c_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00610d2c_0, byte_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00610d2c_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00610d2c_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_00610d2c_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_00610d2c_0, byte_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_00610d2c_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_00610d2c_0, word_20, 0x20);  // (from the original)

inline constexpr guest::Function<0x00125aec, u32(u32, u32, u32, u32)> call_00125aec;  // (from the original)
inline constexpr guest::Function<0x00125e3c, u32(u32, u32, u32, u32)> call_00125e3c;  // (from the original)
inline constexpr guest::Function<0x002f7604, u32(u32, u32, u32, u32)> call_002f7604;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x005673c8, u32(u32, u32, u32, u32)> call_005673c8;  // (from the original)
inline constexpr guest::Function<0x005e3128, u32(u32, u32, u32, u32)> call_005e3128;  // (from the original)

u32 f_00610d2c(gptr<Object_00610d2c_0> arg0) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 8;
    r4 = 0u;
    arg0->word_4 = u32(r4);
    arg0->byte_8 = u8(r4);
    r2 = *gptr<u32>(0x8490d0u + 4);  // (from the original)
    r3 = r0 + 0xcu;  // (from the original)
    arg0->word_c = u32(*gptr<u32>(0x8490d0u));  // (from the original)
    arg0->word_10 = u32(r2);
    arg0->word_14 = u32(r4);
    r1 = 0x8f80dcu;  // (from the original)
    arg0->byte_18 = u8(r4);
    arg0->word_1c = u32(r4);
    arg0->word_0 = u32(r1);
    arg0->word_20 = u32(r4);
    r0 = r0 + 0x24u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005673c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 8u;
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
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125aec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    ea = r0 + 0x28u;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    r0 = ea + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00125e3c(r0, r1, r2, r3);
    *gptr<u32>(r0 + 0x14cu) = u32(r4);  // (from the original)
    *gptr<u32>(r0 + 0x150u) = u32(r4);  // (from the original)
    *gptr<u8>(r0 + 0x154u) = u8(r4);  // (from the original)
    r1 = 0x1ce394u;  // (from the original)
    r3 = 0x10u;  // (from the original)
    r2 = 0x34u;  // (from the original)
    r0 = r0 + 0x158u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r12 = r0 - 0x560u;  // (from the original)
    r0 = r0 + 0x340u;  // (from the original)
    *gptr<u32>(r0 + 4u) = u32(r4);
    *gptr<u32>(r0 + 8u) = u32(r4);
    *gptr<u32>(r0 + 0xcu) = u32(r4);  // (from the original)
    *gptr<u32>(r0) = u32(0x8eb288u);  // (from the original)
    r1 = 0x2b6de0u;  // (from the original)
    *gptr<u32>(r0 + 0x10u) = u32(r4);  // (from the original)
    r3 = 0x15u;  // (from the original)
    r2 = 0xe0u;  // (from the original)
    r0 = r12 + 0x914u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x1260u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f7604(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0xe4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f7604(r0, r1, r2, r3);
    r2 = r0 - 0x1c58u;  // (from the original)
    *gptr<u32>(r0 + 0xe4u) = u32(r4);  // (from the original)
    r0 = r0 + 0x128u;  // (from the original)
    *gptr<u32>(0x1d7cu + r2) = u32(r4);  // (from the original)
    *gptr<u32>(r0 + 4u) = u32(r0 + 0xcu);  // (from the original)
    *gptr<u32>(r0 + 8u) = u32(6u);
    r3 = 0x8c9f1eu;  // (from the original)
    *gptr<u32>(r0) = u32(0x9055a0u);  // (from the original)
    *gptr<u16>(*gptr<u32>(r0 + 4u) + 0xau) = u16(u32(*gptr<u16>(r3)));  // (from the original)
    *gptr<u32>(r0) = u32(0x90529cu);  // (from the original)
    *gptr<u16>(*gptr<u32>(r0 + 4u)) = u16(u32(*gptr<u16>(r3)));
    r1 = 0x10u;  // (from the original)
    r0 = r2 + 0x1d98u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e3128(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x10u;  // (from the original)
    r0 = r0 + 0xc4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e3128(r0, r1, r2, r3);
    r2 = 0x1f20u;  // (from the original)
    r0 = r0 - 0x1e5cu;  // (from the original)
    r1 = r2 + 4u;
    *gptr<u32>(r2 + r0) = u32(r4);
    r2 = r1 + 4u;
    *gptr<u32>(r1 + r0) = u32(r4);
    r1 = r1 + 8u;
    *gptr<u32>(r2 + r0) = u32(r4);
    r2 = r1 + 4u;
    *gptr<u32>(r1 + r0) = u32(r4);
    r3 = r1 + 0x18u;  // (from the original)
    r1 = r1 + 0x1cu;  // (from the original)
    *gptr<u32>(r2 + r0) = u32(r4);
    *gptr<u32>(r3 + r0) = u32(r4);
    *gptr<u8>(r1 + r0) = u8(r4);
    *gptr<u8>((r1 | u32(s32(r1) >> 0xc)) + r0) = u8(r4);  // (from the original)
    *gptr<u8>(r1 + 2u + r0) = u8(r4);
    *gptr<u8>((r1 | u32(s32(r1) >> 0xb)) + r0) = u8(r4);  // (from the original)
    *gptr<u8>(r1 + 4u + r0) = u8(r4);
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00610d2c
GUEST_EXPORT(0x00610d2c, d_00610d2c::f_00610d2c);

// f_006124bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006124bc {

inline constexpr guest::Function<0x001b5d74, u32(u32, u32, u32, u32)> call_001b5d74;  // (from the original)
inline constexpr guest::Function<0x001b5d94, u32(u32, u32, u32, u32)> call_001b5d94;  // (from the original)
inline constexpr guest::Function<0x00335328, u32(u32, u32, u32, u32)> call_00335328;  // (from the original)

u32 f_006124bc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 zf = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    r4 = r2;
    r6 = r1;
    r0 = r1;
    r0 = call_001b5d94(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        if (r4 < 2u) {
            goto L_6124ec;
        }
    }
    r0 = 1u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_6124ec:;
    r4 = r5 + ((r4 << 6) - (r4 + (r4 << 2)) << 2) + 0x52cu;  // (from the original)
    r0 = r6;
    r0 = call_001b5d74(r0, r1, r2, r3);
    zf = r0 == 0;
    r1 = r0;
    r0 = r4;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    r3 = 1u;
    if (zf) {
        r1 = 0x88766cu;  // (from the original)
    }
    r2 = 0u;
    return call_00335328(r0, r1, r2, r3);
}

}  // namespace d_006124bc
GUEST_EXPORT(0x006124bc, d_006124bc::f_006124bc);

// f_00612738: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00612738 {

inline constexpr guest::Function<0x001b545c, u32(u32, u32, u32, u32)> call_001b545c;  // (from the original)
inline constexpr guest::Function<0x001b5d94, u32(u32, u32, u32, u32)> call_001b5d94;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32, u32)> call_002fc20c;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;  // (from the original)
inline constexpr guest::Function<0x005b3ec4, u32(u32, u32, u32, u32)> call_005b3ec4;  // (from the original)
inline constexpr guest::Function<0x0071f66c, u32(u32, u32, u32, u32)> call_0071f66c;  // (from the original)

u32 f_00612738(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    u32 cf = 0;
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r6 = 0x95bfdcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005b3ec4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    if (r0 == 0) {
        goto L_6128bc;
    }
    r0 = *gptr<u32>(0x95722cu);  // (from the original)
    if ((r0 & 1u) != 0) {
        goto L_612788;
    }
    r0 = 0x95722cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fe7dc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_612788;
    }
    r0 = 0x957230u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc20c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0x100000u;  // (from the original)
    r1 = 0x2f777cu;  // (from the original)
    r0 = 0x95722cu;  // (from the original)
L_612788:;
    guest::cpu()->r[13] = r13;
    r0 = call_002fb328(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = 0xffffu;  // (from the original)
    r0 = r0 + 0x62250u;  // (from the original)
    res = r0 + 0x8c04u;  // (from the original)
    r4 = res;
    if (res == 0) {
        goto L_6127f8;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0xa1u) {  // (from the original)
        if (r0 == 0xa2u) {  // (from the original)
            goto L_6127e0;
        }
        goto L_6127f8;
    }
    r4 = u32(*gptr<u16>(r4 + 0xcu));  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_001b5d94(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_6127fc;
    }
    goto L_6127f8;
L_6127e0:;
    r4 = u32(*gptr<u16>(r4 + 0xeu));  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_001b5d94(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_6127fc;
    }
L_6127f8:;
    r4 = r7;
L_6127fc:;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_001b545c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r0 = *gptr<u32>(0xa834a0u);  // (from the original)
        zf = r0 == 0;
        cf = r0 >= 0u;
        if (!zf) {
            r1 = 0x18fu;  // (from the original)
            zf = r1 == r4;
            cf = r1 >= r4;
        }
        if (!cf || zf) {
            goto L_6128bc;
        }
        r1 = r4 + (r4 << 1) + (r4 << 3);
        res = r0 + (r1 << 3);
        r0 = res;
        if (res == 0) {
            goto L_6128bc;
        }
        r4 = r0 + 4u;
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_002fcb34(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        if (r0 == 0x2fu) {  // (from the original)
            r0 = r4;
            goto L_6128c0;
        }
        goto L_6128bc;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0xa1u) {  // (from the original)
        r0 = r5 + 0x52cu;  // (from the original)
        goto L_61287c;
    }
    if (r0 == 0xa2u) {  // (from the original)
        r0 = r5 + 0x618u;  // (from the original)
    } else {
        goto L_6128bc;
    }
L_61287c:;
    r0 = *gptr<u32>(r0 + 0xd0u);  // (from the original)
    if (r0 == 0) {
        goto L_6128bc;
    }
    r1 = r0;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0071f66c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = 0x957230u;  // (from the original)
    r1 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = 0x957230u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb34(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0x2fu) {  // (from the original)
        r0 = 0x957230u;  // (from the original)
        goto L_6128c0;
    }
L_6128bc:;
    r0 = r6;
L_6128c0:;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00612738
GUEST_EXPORT(0x00612738, d_00612738::f_00612738);

// f_0061290c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061290c {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x0056a94c, u32(u32, u32, u32, u32)> call_0056a94c;  // (from the original)
inline constexpr guest::Function<0x006124bc, u32(u32, u32, u32, u32)> call_006124bc;  // (from the original)

u32 f_0061290c(u32 r0) {
    u32 res = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r13 = r13 - 0x20u;  // (from the original)
    r5 = 0x9047f8u;  // (from the original)
    r7 = *gptr<u32>(0x952c3cu);  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(0x8876fcu);  // (from the original)
    r1 = r13;
    r2 = r7;
    r0 = r4 + 0x9ccu;  // (from the original)
    *gptr<u32>(r13) = u32(r5);
    guest::cpu()->r[13] = r13;
    r0 = call_0056a94c(r0, r1, r2, guest::cpu()->r[3]);
    r6 = r0;
    r1 = r13;
    r2 = r7;
    *gptr<u32>(r13 + 4u) = u32(0x8876ccu);  // (from the original)
    r0 = r4 + 0xab8u;  // (from the original)
    *gptr<u32>(r13) = u32(r5);
    guest::cpu()->r[13] = r13;
    r0 = call_0056a94c(r0, r1, r2, guest::cpu()->r[3]);
    r6 = r6 & r0;
    r1 = r13;
    r2 = r7;
    *gptr<u32>(r13 + 4u) = u32(0x8876a0u);  // (from the original)
    r0 = r4 + 0x7f4u;  // (from the original)
    *gptr<u32>(r13) = u32(r5);
    guest::cpu()->r[13] = r13;
    r0 = call_0056a94c(r0, r1, r2, guest::cpu()->r[3]);
    r6 = r6 & r0;
    r1 = r13;
    r2 = r7;
    *gptr<u32>(r13 + 4u) = u32(0x887674u);  // (from the original)
    r0 = r4 + 0x8e0u;  // (from the original)
    *gptr<u32>(r13) = u32(r5);
    guest::cpu()->r[13] = r13;
    r0 = call_0056a94c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r6 = r6 & r0;
    guest::cpu()->r[13] = r13;
    r0 = call_002fb328(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    res = r0 + 0x6ae54u;  // (from the original)
    r5 = res;
    if (res == 0) {
        r0 = r6;
        goto L_6129f4;
    }
    r1 = u32(*gptr<u16>(r5 + 0xcu));  // (from the original)
    r2 = 0u;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_006124bc(r0, r1, r2, guest::cpu()->r[3]);
    r1 = u32(*gptr<u16>(r5 + 0xeu));  // (from the original)
    r5 = r0 & r6;
    r2 = 1u;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_006124bc(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 & r5;
L_6129f4:;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0061290c
GUEST_EXPORT(0x0061290c, d_0061290c::f_0061290c);

// f_00612cec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00612cec {

struct __attribute__((packed)) Object_00612cec_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_00612cec_0, half_0, 0x0);  // (from the original)


void f_00612cec(gptr<Object_00612cec_0> arg0) {
    u32 r1 = 0;
    r1 = 0x109u;  // (from the original)
    arg0->half_0 = u16(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_00612cec
GUEST_EXPORT(0x00612cec, d_00612cec::f_00612cec);

// f_00612d0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00612d0c {

struct __attribute__((packed)) Object_00612d0c_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_00612d0c_0, half_0, 0x0);  // (from the original)


void f_00612d0c(gptr<Object_00612d0c_0> arg0) {
    u32 r1 = 0;
    r1 = 0x7dbu;  // (from the original)
    arg0->half_0 = u16(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_00612d0c
GUEST_EXPORT(0x00612d0c, d_00612d0c::f_00612d0c);

// f_00613658: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00613658 {

inline constexpr guest::Function<0x005cdf48, u32(u32, u32, u32, u32)> call_005cdf48;  // (from the original)

u32 f_00613658(u32 r0) {
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r2 = ~0u;
    r3 = ~0x80000000u;  // (from the original)
    r0 = call_005cdf48(r0, guest::cpu()->r[1], r2, r3);
    r0 = r4 + 0xfu;  // (from the original)
    r2 = ~0u;
    r3 = ~0x80000000u;  // (from the original)
    r0 = call_005cdf48(r0, guest::cpu()->r[1], r2, r3);
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_00613658
GUEST_EXPORT(0x00613658, d_00613658::f_00613658);

// f_00613684: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00613684 {


u32 f_00613684(u32 r0, u32 r1, u32 r2) {
    u32 cf = 0;
    cf = r1 >= 5u;
    if (!cf) {
        cf = r2 >= 4u;
    }
    if (cf) {
        r0 = r0 + 0x58u;  // (from the original)
        return r0;
    }
    r0 = r0 + (r2 + (r2 << 2) << 0xa) + (r1 << 0xa) + 0x58u;  // (from the original)
    return r0;
}

}  // namespace d_00613684
GUEST_EXPORT(0x00613684, d_00613684::f_00613684);

// f_006136a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006136a8 {


u32 f_006136a8(u32 r0, u32 r1, u32 r2) {
    u32 cf = 0;
    cf = r1 >= 5u;
    if (!cf) {
        cf = r2 >= 4u;
    }
    if (cf) {
        r0 = r0 + 0x5058u;  // (from the original)
        return r0;
    }
    r0 = r0 + (r2 + (r2 << 2) << 8) + (r1 << 8) + 0x5058u;  // (from the original)
    return r0;
}

}  // namespace d_006136a8
GUEST_EXPORT(0x006136a8, d_006136a8::f_006136a8);

// f_006136d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006136d4 {


u32 f_006136d4(u32 r0, u32 r1) {
    u32 cf = 0;
    cf = r0 >= 7u;
    if (!cf) {
        cf = r1 >= 6u;
    }
    if (cf) {
        r0 = 0u;
    } else {
        r0 = 1u;
    }
    return r0;
}

}  // namespace d_006136d4
GUEST_EXPORT(0x006136d4, d_006136d4::f_006136d4);

// f_006136e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006136e8 {


u32 f_006136e8(u32 r0, u32 r1) {
    u32 cf = 0;
    r1 = r1 - 1u;
    cf = r1 >= 4u;
    if (!cf) {
        cf = r0 - 1u >= 5u;
    }
    if (cf) {
        r0 = 0u;
    } else {
        r0 = 1u;
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006136e8
GUEST_EXPORT(0x006136e8, d_006136e8::f_006136e8);

// f_00613704: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00613704 {


u32 f_00613704(u32 r0, u32 r1) {
    u32 cf = 0;
    cf = r0 >= 5u;
    if (!cf) {
        cf = r1 >= 4u;
    }
    if (cf) {
        r0 = 0u;
    } else {
        r0 = 1u;
    }
    return r0;
}

}  // namespace d_00613704
GUEST_EXPORT(0x00613704, d_00613704::f_00613704);

// f_00613718: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00613718 {


u32 f_00613718(u32 r0, u32 r1) {
    u32 cf = 0;
    r1 = r1 - 0x10u;  // (from the original)
    cf = r1 >= 0x40u;  // (from the original)
    if (!cf) {
        cf = r0 - 0x10u >= 0x50u;  // (from the original)
    }
    if (cf) {
        r0 = 0u;
    } else {
        r0 = 1u;
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00613718
GUEST_EXPORT(0x00613718, d_00613718::f_00613718);

// f_00613764: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00613764 {

struct __attribute__((packed)) Object_00613764_0 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Object_00613764_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00613764_0, byte_1, 0x1);  // (from the original)
GUEST_OFFSET(Object_00613764_0, byte_2, 0x2);  // (from the original)

inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

u32 f_00613764(gptr<Object_00613764_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    r2 = 2u;
    guest::cpu()->r[13] -= 8u;
    r1 = 3u;
    arg0->byte_0 = u8(r2);
    arg0->byte_1 = u8(r1);
    arg0->byte_2 = u8(r1);
    r1 = 0x612cfcu;  // (from the original)
    r3 = 0x2au;  // (from the original)
    r0 = r0 + 4u;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = 0x6efd9cu;  // (from the original)
    r3 = 0x14u;  // (from the original)
    r2 = 0x400u;  // (from the original)
    r0 = r0 + 0x54u;  // (from the original)
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = 0x1e036cu;  // (from the original)
    r3 = 0x14u;  // (from the original)
    r2 = 0x100u;  // (from the original)
    r0 = r0 + 0x5000u;  // (from the original)
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r0 + 0xffffafa8u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00613764
GUEST_EXPORT(0x00613764, d_00613764::f_00613764);

// f_006138a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006138a4 {

inline constexpr guest::Function<0x00301444, u32(u32, u32, u32, u32)> call_00301444;  // (from the original)

u32 f_006138a4() {
    u32 r1 = 0;
    r1 = 0x4000u;  // (from the original)
    return call_00301444(guest::cpu()->r[0], r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_006138a4
GUEST_EXPORT(0x006138a4, d_006138a4::f_006138a4);

// f_00613de4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00613de4 {

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)

u32 f_00613de4() {
    u32 r2 = 0;
    r2 = 0x30u;  // (from the original)
    return call_002f8574(guest::cpu()->r[0], guest::cpu()->r[1], r2, guest::cpu()->r[3]);
}

}  // namespace d_00613de4
GUEST_EXPORT(0x00613de4, d_00613de4::f_00613de4);

// f_00613dfc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00613dfc {

inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)

u32 f_00613dfc() {
    u32 r2 = 0;
    r2 = 0x1404u;  // (from the original)
    return call_002fbb30(guest::cpu()->r[0], guest::cpu()->r[1], r2, guest::cpu()->r[3]);
}

}  // namespace d_00613dfc
GUEST_EXPORT(0x00613dfc, d_00613dfc::f_00613dfc);

// f_00613e08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00613e08 {

struct __attribute__((packed)) Object_00613e08_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00613e08_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)

u32 f_00613e08(gptr<Object_00613e08_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    arg0->word_0 = u32(0u);
    r0 = r0 + 4u;
    r1 = 0x1400u;  // (from the original)
    return call_002f825c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00613e08
GUEST_EXPORT(0x00613e08, d_00613e08::f_00613e08);

// f_00613e18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00613e18 {

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)

u32 f_00613e18(u32 r0) {
    u32 r1 = 0;
    r1 = 0x1400u;  // (from the original)
    r0 = r0 + 4u;
    return call_002f825c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00613e18
GUEST_EXPORT(0x00613e18, d_00613e18::f_00613e18);

// f_00613e24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00613e24 {

struct __attribute__((packed)) Object_00613e24_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00613e24_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)

u32 f_00613e24(gptr<Object_00613e24_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    arg0->word_0 = u32(0u);
    r1 = 0x1400u;  // (from the original)
    r0 = r4 + 4u;
    r0 = call_002f825c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00613e24
GUEST_EXPORT(0x00613e24, d_00613e24::f_00613e24);

// f_00613e80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00613e80 {

inline constexpr guest::Function<0x0013fac4, u32(u32, u32, u32, u32)> call_0013fac4;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x00313124, u32(u32, u32, u32, u32)> call_00313124;  // (from the original)
inline constexpr guest::Function<0x007179a0, u32(u32, u32, u32, u32)> call_007179a0;  // (from the original)
inline constexpr guest::Function<0x007179ec, u32(u32, u32, u32, u32)> call_007179ec;  // (from the original)
inline constexpr guest::Function<0x00717aac, u32(u32, u32, u32, u32)> call_00717aac;  // (from the original)
inline constexpr guest::Function<0x00718270, u32(u32, u32, u32, u32)> call_00718270;  // (from the original)
inline constexpr guest::Function<0x007182f0, u32(u32, u32, u32, u32)> call_007182f0;  // (from the original)

u32 f_00613e80(u32 r0, u32 r1_unused, u32 r2) {
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r13 = r13 - 0x38u;  // (from the original)
    r7 = r0;
    r8 = 1u;
    r0 = 0x94d938u;  // (from the original)
    r1 = 0u;
    *gptr<u8>(r0) = u8(r8);
    r0 = r0 + 1u;
    *gptr<u8>(r0) = u8(r1);
    guest::cpu()->r[13] = r13;
    r0 = call_002fb328(r0, r1, r2, guest::cpu()->r[3]);
    r6 = r0 + 0x668a0u;  // (from the original)
    r0 = r13;
    r2 = 0xffu;  // (from the original)
    r1 = 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0013fac4(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = u32(*gptr<u8>(r13 + 0x10u));  // (from the original)
    zf = r6 == 0;
    *gptr<u8>(r13) = u8(u32(*gptr<u8>(r13)) & ~0x80u);  // (from the original)
    if (!zf) {
        r9 = 0x984694u;  // (from the original)
    }
    r1 = r1 & ~8u;
    *gptr<u8>(r13 + 1u) = u8(u32(*gptr<u8>(r13 + 1u)) & ~1u & ~2u & ~4u & ~8u & ~0x10u & ~0x20u);  // (from the original)
    r0 = u32(*gptr<u8>(r13 + 5u));
    if (!zf) {
        r4 = 0u;
    }
    *gptr<u8>(r13 + 0x10u) = u8(r1);  // (from the original)
    *gptr<u8>(r13 + 5u) = u8(r0 & ~2u & ~4u & ~0x80u);  // (from the original)
    r0 = u32(*gptr<u8>(r13 + 9u)) & ~2u;
    *gptr<u8>(r13 + 9u) = u8(r0);
    if (zf) {
        goto L_614018;
    }
L_613f28:;
    r1 = r4;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_007182f0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0) {
        goto L_61400c;
    }
    r2 = r4;
    r1 = r6;
    r0 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00718270(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00313124(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0) {
        goto L_614004;
    }
    r5 = r13;
    r0 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb34(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 >= 0x9bu) {  // (from the original)
        goto L_614004;
    }
    r1 = u32(*gptr<u8>(r5 + (r0 >> 3)));
    if ((lsr_r(r1, r0 & 7u) & 1u) == 0) {
        goto L_614004;
    }
    r1 = r4;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_00717aac(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    if (r0 == 2u) {
        r1 = r4;
        r0 = r6;
        guest::cpu()->r[13] = r13;
        r0 = call_007179ec(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0 == r7) {
            goto L_614004;
        }
    }
    r2 = r4;
    r1 = r9 + (r4 + (r4 << 1) << 2);
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_007179a0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_614004;
    }
    r1 = 0x94d939u;  // (from the original)
    if (r4 >= 8u) {
        goto L_614004;
    }
    r0 = r1 + (r4 >> 3);
    r2 = r4 & 7u;
    r1 = u32(*gptr<u8>(r0)) | lsl_r(r8, r2 & 0xff);  // (from the original)
    *gptr<u8>(r0) = u8(r1);
L_614004:;
    r0 = r13 + 0x14u;  // (from the original)
L_61400c:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(8u)) {
        guest::preempt();
        goto L_613f28;
    }
L_614018:;
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00613e80
GUEST_EXPORT(0x00613e80, d_00613e80::f_00613e80);

// f_00614568: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00614568 {

inline constexpr guest::Function<0x006f7e64, u32(u32, u32, u32, u32)> call_006f7e64;  // (from the original)
inline constexpr guest::Function<0x006f83f8, u32(u32, u32, u32, u32)> call_006f83f8;  // (from the original)

u32 f_00614568(u32 r0, u32 r1) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_006f7e64(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0x90ab60u;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    r0 = r0 + 0x10u;  // (from the original)
    r0 = call_006f83f8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0x10u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00614568
GUEST_EXPORT(0x00614568, d_00614568::f_00614568);

// f_006145cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006145cc {

inline constexpr guest::Function<0x0052ee54, u32(u32, u32, u32, u32)> call_0052ee54;  // (from the original)
inline constexpr guest::Function<0x0052f200, u32(u32, u32, u32, u32)> call_0052f200;  // (from the original)
inline constexpr guest::Function<0x0056a378, u32(u32, u32, u32, u32)> call_0056a378;  // (from the original)

u32 f_006145cc(u32 r0, gptr<Float3> arg1, gptr<Float3> arg2) {
    u32 r1 = arg1.addr();
    u32 r2 = arg2.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    float S0 = 0;
    float S1 = 0;
    float S2 = 0;
    float S3 = 0;
    float S4 = 0;
    float S5 = 0;
    r4 = r1;
    S3 = arg1->v[0];
    r13 = r13 - 0x48u;  // (from the original)
    r1 = r4 + 4u;
    S0 = arg2->v[0] - S3;
    S4 = arg1->v[1];
    S5 = arg1->v[2];
    r6 = r0;
    r5 = r2;
    r0 = r13 + 0x10u;  // (from the original)
    S1 = arg2->v[1] - S4;
    S2 = arg2->v[2] - S5;
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r0 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r0 + 8) = u32(std::bit_cast<u32>(S2));
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    r0 = call_0056a378(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    S0 = std::bit_cast<float>(*gptr<u32>(0x61472cu));  // (from the original)
    r0 = r13 + 0x1cu;  // (from the original)
    S3 = std::bit_cast<float>(*gptr<u32>(r13 + 0x10u)) * S0;  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(std::bit_cast<u32>(S3));  // (from the original)
    S1 = std::bit_cast<float>(*gptr<u32>(r13 + 0x14u)) * S0;  // (from the original)
    *gptr<u32>(r13 + 0x14u) = u32(std::bit_cast<u32>(S1));  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r13 + 0x18u)) * S0;  // (from the original)
    *gptr<u32>(r13 + 0x18u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    S2 = std::bit_cast<float>(*gptr<u32>(r4 + 8u)) - S0;
    S1 = std::bit_cast<float>(*gptr<u32>(r4 + 4)) - S1;
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r4)) - S3));
    *gptr<u32>(r0 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r0 + 8) = u32(std::bit_cast<u32>(S2));
    r1 = r13 + 0x10u;  // (from the original)
    r0 = r13 + 0x28u;  // (from the original)
    S3 = std::bit_cast<float>(*gptr<u32>(r1));
    S4 = std::bit_cast<float>(*gptr<u32>(r1 + 4));
    S5 = std::bit_cast<float>(*gptr<u32>(r1 + 8));
    S0 = std::bit_cast<float>(*gptr<u32>(r5)) + S3;
    S2 = std::bit_cast<float>(*gptr<u32>(r5 + 8)) + S5;
    S1 = std::bit_cast<float>(*gptr<u32>(r5 + 4)) + S4;
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r0 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r0 + 8) = u32(std::bit_cast<u32>(S2));
    r1 = r13 + 0x1cu;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    r0 = call_0052ee54(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    r1 = r13 + 0x28u;  // (from the original)
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    r0 = call_0052ee54(r0, r1, r2, guest::cpu()->r[3]);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    r0 = *gptr<u32>(r13 + 8u);
    if (s32(r0) < s32(*gptr<u32>(r13))) {
        r1 = r0;
        r0 = *gptr<u32>(r13);
        *gptr<u32>(r13) = u32(r1);
        *gptr<u32>(r13 + 8u) = u32(r0);
    }
    r0 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    r1 = *gptr<u32>(r13 + 4u);
    if (s32(r0) < s32(r1)) {
        r1 = r0;
        r0 = *gptr<u32>(r13 + 4u);
        *gptr<u32>(r13 + 4u) = u32(r1);
        *gptr<u32>(r13 + 0xcu) = u32(r0);  // (from the original)
    }
    r2 = r13 + 8u;
    *gptr<u32>(r13) = u32(*gptr<u32>(r13) - 1u);
    *gptr<u32>(r13 + 4u) = u32(r1 - 1u);
    r1 = r13;
    *gptr<u32>(r13 + 8u) = u32(*gptr<u32>(r13 + 8u) + 1u);
    *gptr<u32>(r13 + 0xcu) = u32(*gptr<u32>(r13 + 0xcu) + 1u);  // (from the original)
    r0 = r6;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    r0 = call_0052f200(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r0 = r13;
    r13 = r13 + 0x48u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_006145cc
GUEST_EXPORT(0x006145cc, d_006145cc::f_006145cc);

// f_0061476c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061476c {

inline constexpr guest::Function<0x00138bbc, u32(u32, u32, u32, u32)> call_00138bbc;  // (from the original)

u32 f_0061476c(u32 r0, u32 r1) {
    if (r0 == 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = r0;
    r0 = 0x9870a8u;  // (from the original)
    return call_00138bbc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0061476c
GUEST_EXPORT(0x0061476c, d_0061476c::f_0061476c);

// f_00614854: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00614854 {

inline constexpr guest::Function<0x006f7dc0, u32(u32, u32, u32, u32)> call_006f7dc0;  // (from the original)
inline constexpr guest::Function<0x006f7e64, u32(u32, u32, u32, u32)> call_006f7e64;  // (from the original)

u32 f_00614854(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r0 = call_006f7e64(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0x90ab70u;  // (from the original)
    r4 = 0u;
    *gptr<u32>(r0) = u32(r1);
    *gptr<u8>(r0 + 0x10u) = u8(r4);  // (from the original)
    r0 = r0 + 0x14u;  // (from the original)
    r0 = call_006f7dc0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0x14u;  // (from the original)
    *gptr<u16>(r0 + 0x40u) = u16(r4);  // (from the original)
    *gptr<u32>(r0 + 0x44u) = u32(r4);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00614854
GUEST_EXPORT(0x00614854, d_00614854::f_00614854);

// f_006148e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006148e4 {

struct __attribute__((packed)) Object_006148e4_0 {
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
};
GUEST_OFFSET(Object_006148e4_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_006148e4_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_006148e4_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_006148e4_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_006148e4_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_006148e4_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_006148e4_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_006148e4_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_006148e4_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_006148e4_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_006148e4_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_006148e4_0, word_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Object_006148e4_0, word_30, 0x30);  // (from the original)
GUEST_OFFSET(Object_006148e4_0, word_34, 0x34);  // (from the original)
GUEST_OFFSET(Object_006148e4_0, word_38, 0x38);  // (from the original)
GUEST_OFFSET(Object_006148e4_0, word_3c, 0x3c);  // (from the original)
GUEST_OFFSET(Object_006148e4_0, word_40, 0x40);  // (from the original)
GUEST_OFFSET(Object_006148e4_0, word_44, 0x44);  // (from the original)
GUEST_OFFSET(Object_006148e4_0, word_48, 0x48);  // (from the original)

inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

u32 f_006148e4(gptr<Object_006148e4_0> arg0) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r13 = guest::cpu()->r[13];
    r1 = 0u;
    r13 = r13 - 8;
    arg0->word_0 = u32(r1);
    arg0->word_c = u32(r1);
    arg0->word_10 = u32(r1);
    arg0->word_14 = u32(r1);
    arg0->word_18 = u32(r1);
    arg0->word_1c = u32(r1);
    arg0->word_20 = u32(r1);
    arg0->word_24 = u32(r1);
    arg0->word_28 = u32(r1);
    arg0->word_2c = u32(r1);
    arg0->word_30 = u32(r1);
    arg0->word_34 = u32(r1);
    arg0->word_38 = u32(r1);
    arg0->word_3c = u32(r1);
    arg0->word_40 = u32(r1);
    arg0->word_44 = u32(r1);
    arg0->word_48 = u32(r1);
    arg0->word_4 = u32(r1);
    ea = r0 + 8u;
    arg0->word_8 = u32(r1);
    r1 = 0x6148e0u;  // (from the original)
    r3 = 4u;
    r2 = 0x10u;  // (from the original)
    r0 = ea + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0xcu;  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006148e4
GUEST_EXPORT(0x006148e4, d_006148e4::f_006148e4);

// f_006149e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006149e8 {

inline constexpr guest::Function<0x00614854, u32(u32, u32, u32, u32)> call_00614854;  // (from the original)

u32 f_006149e8(u32 r0, u32 r1, u32 r2) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_00614854(r0, r1, r2, guest::cpu()->r[3]);
    r1 = 0u;
    *gptr<u32>(r0 + 0x48u) = u32(r1);  // (from the original)
    *gptr<u32>(r0) = u32(0x90ab88u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006149e8
GUEST_EXPORT(0x006149e8, d_006149e8::f_006149e8);

// f_00615328: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00615328 {

inline constexpr guest::Function<0x00779548, u32(u32, u32, u32, u32)> call_00779548;  // (from the original)

u32 f_00615328() {
    return call_00779548(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00615328
GUEST_EXPORT(0x00615328, d_00615328::f_00615328);

// f_0061532c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061532c {

struct __attribute__((packed)) Object_0061532c_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u16 half_24;
    u8 byte_26;
    u8 byte_27;
    u16 half_28;
    u16 half_2a;
    u8 byte_2c;
    u8 byte_2d;
    u16 half_2e;
};
GUEST_OFFSET(Object_0061532c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0061532c_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0061532c_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0061532c_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0061532c_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0061532c_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0061532c_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0061532c_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_0061532c_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_0061532c_0, half_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_0061532c_0, byte_26, 0x26);  // (from the original)
GUEST_OFFSET(Object_0061532c_0, byte_27, 0x27);  // (from the original)
GUEST_OFFSET(Object_0061532c_0, half_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_0061532c_0, half_2a, 0x2a);  // (from the original)
GUEST_OFFSET(Object_0061532c_0, byte_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Object_0061532c_0, byte_2d, 0x2d);  // (from the original)
GUEST_OFFSET(Object_0061532c_0, half_2e, 0x2e);  // (from the original)


void f_0061532c(gptr<Object_0061532c_0> arg0) {
    u32 r1 = 0;
    r1 = 0u;
    arg0->word_0 = u32(r1);
    arg0->word_4 = u32(r1);
    arg0->word_8 = u32(r1);
    arg0->word_c = u32(r1);
    arg0->word_10 = u32(r1);
    arg0->word_14 = u32(r1);
    arg0->word_18 = u32(r1);
    arg0->word_1c = u32(r1);
    arg0->word_20 = u32(r1);
    arg0->half_24 = u16(r1);
    arg0->byte_26 = u8(r1);
    arg0->half_28 = u16(r1);
    arg0->half_2a = u16(r1);
    arg0->byte_2c = u8(r1);
    arg0->byte_2d = u8(r1);
    arg0->byte_27 = u8(r1);
    arg0->half_2e = u16(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_0061532c
GUEST_EXPORT(0x0061532c, d_0061532c::f_0061532c);

// f_006153d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006153d0 {

inline constexpr guest::Function<0x00131280, u32(u32, u32, u32, u32)> call_00131280;  // (from the original)
inline constexpr guest::Function<0x001320cc, u32(u32, u32, u32, u32)> call_001320cc;  // (from the original)

u32 f_006153d0(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    r6 = 0x951668u;  // (from the original)
    if (*gptr<u32>(r6) != 0) {
        goto L_615424;
    }
    r2 = 4u;
    r1 = r5;
    r0 = 0x10u;  // (from the original)
    r0 = call_00131280(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r4 = r0;
    if (r0 == 0) {
        *gptr<u32>(r6 + 4u) = u32(r4);
        r4 = 0u;
        goto L_615420;
    }
    r1 = r5;
    r2 = 3u;
    r0 = call_001320cc(r0, r1, r2, guest::cpu()->r[3]);
    r1 = 0x90aba0u;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    *gptr<u32>(r6 + 4u) = u32(r0);
L_615420:;
    *gptr<u32>(r6) = u32(r4);
L_615424:;
    r0 = *gptr<u32>(r6);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006153d0
GUEST_EXPORT(0x006153d0, d_006153d0::f_006153d0);

// f_00615534: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00615534 {

struct __attribute__((packed)) Object_00615534_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u16 half_14;
};
GUEST_OFFSET(Object_00615534_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00615534_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00615534_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00615534_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00615534_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_00615534_0, half_14, 0x14);  // (from the original)


void f_00615534(gptr<Object_00615534_0> arg0) {
    u32 r1 = 0;
    r1 = 0u;
    arg0->word_0 = u32(r1);
    arg0->word_4 = u32(r1);
    arg0->word_8 = u32(r1);
    arg0->word_c = u32(r1);
    arg0->word_10 = u32(r1);
    arg0->half_14 = u16(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_00615534
GUEST_EXPORT(0x00615534, d_00615534::f_00615534);

// f_00615b2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00615b2c {


u32 f_00615b2c(u32 r0, u32 r1, float S0_unused, float S1) {
    u32 res = 0;
    u32 r2 = 0;
    float S0 = 0;
    float S2 = 0;
    S0 = std::bit_cast<float>(*gptr<u32>(0x615bacu));  // (from the original)
    if (r1 >= 0x6bu) {  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    r2 = 0x86a2c8u + (r1 + (r1 << 1) + (r1 << 4) << 2);  // (from the original)
    S1 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r2 + 0x28u)))));  // (from the original)
    r1 = uxth(*gptr<u32>(r2 + 0x24u));  // (from the original)
    if (u32(S1 == std::bit_cast<float>(*gptr<u32>(0x615bb4u)))) {  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    r0 = r0 - r1;
    r1 = 0x3f333333u;  // (from the original)
    S2 = S1 * std::bit_cast<float>(*gptr<u32>(0x615bb8u));  // (from the original)
    S1 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r0))));
    S0 = S1 / S2 + S0;
    r0 = std::bit_cast<u32>(S0);
    res = r1 - r0;
    if (!u32(res == 0) && res >> 0x1f == ((r1 ^ r0) & (r1 ^ res)) >> 0x1f) {  // (from the original)
        S0 = std::bit_cast<float>(*gptr<u32>(0x615bc0u));  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    r1 = 0x3fa66666u;  // (from the original)
    r0 = std::bit_cast<u32>(S0);
    if (s32(r1) < s32(r0)) {
        S0 = std::bit_cast<float>(*gptr<u32>(0x615bc8u));  // (from the original)
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_00615b2c
GUEST_EXPORT(0x00615b2c, d_00615b2c::f_00615b2c);

// f_00615bcc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00615bcc {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x0076eb20, u32(u32, u32, u32, u32)> call_0076eb20;  // (from the original)

u32 f_00615bcc(u32 r0, u32 r1, u32 r2) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 nf = 0;
    u32 zf = 0;
    u32 cf = 0;
    u32 vf = 0;
    guest::cpu()->r[13] -= 0x20u;  // (from the original)
    r5 = r0;
    r4 = r1;
    r0 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r0;
    r0 = 0x40000u;  // (from the original)
    r0 = call_002f74e0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r9 = 0x862de8u;  // (from the original)
    r6 = 0u;
    r7 = 1u;
    r8 = 2u;
    r10 = r9 + 0x960u;  // (from the original)
    if (r0 != 0) {
        r0 = u32(s32(s8(*gptr<u8>(r4 + 7u))));
        r1 = r0 - 4u;
        if (r5 != 0) {
            cf = r1 >= 5u;
            if (cf) {
                r1 = r0 - 0x10u;  // (from the original)
                cf = r1 >= 5u;
            }
            if (cf) {
                if (r0 - 9u >= 7u) {
                    r6 = r8;
                } else {
                    r6 = r7;
                }
            }
            r0 = r9 + (r6 + (r6 << 2) << 4);
            guest::cpu()->r[13] += 0x20u;  // (from the original)
            guest::cpu()->r[1] = r1;
            return r0;
        }
        cf = r1 >= 5u;
        if (cf) {
            r1 = r0 - 0x10u;  // (from the original)
            cf = r1 >= 5u;
        }
        if (cf) {
            if (r0 - 9u >= 7u) {
                r6 = r8;
            } else {
                r6 = r7;
            }
        }
        r0 = r10 + (r6 + (r6 << 1) << 5);
        guest::cpu()->r[13] += 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r0;
    r0 = 0x20000u;  // (from the original)
    r0 = call_002f74e0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0) {
        r0 = *gptr<u32>(0x95c6d0u) + 0x10u;  // (from the original)
        r0 = call_0076eb20(r0, r1, r2, guest::cpu()->r[3]);
        r1 = u32(s32(s8(*gptr<u8>(r4 + 7u))));
        r2 = r1 - 4u;
        if (r5 != 0) {
            cf = r2 >= 5u;
            if (cf) {
                cf = r1 - 0x10u >= 5u;  // (from the original)
            }
            if (cf) {
                if (r1 - 9u >= 7u) {
                    r6 = r8;
                } else {
                    r6 = r7;
                }
            }
            r1 = r6 + (r6 << 2);
            r0 = r9 + ((r0 << 4) - r0 << 4) + (r1 << 4);
            guest::cpu()->r[13] += 0x20u;  // (from the original)
            guest::cpu()->r[1] = r1;
            return r0;
        }
        cf = r2 >= 5u;
        if (cf) {
            cf = r1 - 0x10u >= 5u;  // (from the original)
        }
        if (cf) {
            if (r1 - 9u >= 7u) {
                r6 = r8;
            } else {
                r6 = r7;
            }
        }
        r1 = r0 + (r0 << 3);
        r0 = r6 + (r6 << 1);
        r1 = r10 + (r1 << 5);
        goto L_615df4;
    }
    r0 = u32(s32(s8(*gptr<u8>(r4 + 4u)))) - 1u;
    if (r5 == 0) {
        goto L_615da4;
    }
    if (r0 == 7u) {
        goto L_615d80;
    }
    zf = r0 == 8u;
    if (u32(r0 >= 8u) && !zf) {
        r0 = r0 + 2u;
    }
    if (zf) {
        goto L_615d90;
    }
L_615d34:;
    r0 = r0 & 0xffu;  // (from the original)
    r0 = (r0 << 4) - r0;
    r1 = 0x85ff50u + (r0 + (r0 << 2) << 2);  // (from the original)
    r0 = u32(s32(s8(*gptr<u8>(r4 + 7u))));
    cf = r0 - 4u >= 5u;
    if (cf) {
        cf = r0 - 0x10u >= 5u;  // (from the original)
    }
    if (cf) {
        if (r0 - 9u >= 7u) {
            r6 = r8;
        } else {
            r6 = r7;
        }
    }
    r0 = r1 + (r6 + (r6 << 3) + (r6 << 4) << 2);
    guest::cpu()->r[13] += 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_615d80:;
    r1 = u32(s32(s8(*gptr<u8>(r4 + 5u))));
    res = r1 - 0xfu;  // (from the original)
    if (!u32(res == 0) && res >> 0x1f == ((r1 ^ 0xfu) & (r1 ^ res)) >> 0x1f) {  // (from the original)
        r0 = 8u;
    }
    guest::preempt();
    goto L_615d34;
L_615d90:;
    r0 = u32(s32(s8(*gptr<u8>(r4 + 5u))));
    res = r0 - 0xfu;  // (from the original)
    nf = res >> 0x1f;  // (from the original)
    zf = res == 0;
    vf = ((r0 ^ 0xfu) & (r0 ^ res)) >> 0x1f;  // (from the original)
    if (!zf && nf == vf) {
        r0 = 0xau;  // (from the original)
    }
    if (zf || nf != vf) {
        r0 = 9u;
    }
    guest::preempt();
    goto L_615d34;
L_615da4:;
    if (r0 == 7u) {
        goto L_615dfc;
    }
    zf = r0 == 8u;
    if (u32(r0 >= 8u) && !zf) {
        r0 = r0 + 2u;
    }
    if (zf) {
        goto L_615e0c;
    }
L_615db8:;
    r0 = r0 & 0xffu;  // (from the original)
    r1 = 0x860fb8u + (r0 + (r0 << 3) << 5);  // (from the original)
    r0 = u32(s32(s8(*gptr<u8>(r4 + 7u))));
    cf = r0 - 4u >= 5u;
    if (cf) {
        cf = r0 - 0x10u >= 5u;  // (from the original)
    }
    if (cf) {
        if (r0 - 9u >= 7u) {
            r6 = r8;
        } else {
            r6 = r7;
        }
    }
    r0 = r6 + (r6 << 1);
L_615df4:;
    r0 = r1 + (r0 << 5);
    guest::cpu()->r[13] += 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_615dfc:;
    r1 = u32(s32(s8(*gptr<u8>(r4 + 5u))));
    res = r1 - 0xfu;  // (from the original)
    if (!u32(res == 0) && res >> 0x1f == ((r1 ^ 0xfu) & (r1 ^ res)) >> 0x1f) {  // (from the original)
        r0 = 8u;
    }
    guest::preempt();
    goto L_615db8;
L_615e0c:;
    r0 = u32(s32(s8(*gptr<u8>(r4 + 5u))));
    res = r0 - 0xfu;  // (from the original)
    nf = res >> 0x1f;  // (from the original)
    zf = res == 0;
    vf = ((r0 ^ 0xfu) & (r0 ^ res)) >> 0x1f;  // (from the original)
    if (!zf && nf == vf) {
        r0 = 0xau;  // (from the original)
    }
    if (zf || nf != vf) {
        r0 = 9u;
    }
    guest::preempt();
    goto L_615db8;
}

}  // namespace d_00615bcc
GUEST_EXPORT(0x00615bcc, d_00615bcc::f_00615bcc);

// f_00615ffc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00615ffc {

inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x006d9058, u32(u32, u32, u32, u32)> call_006d9058;  // (from the original)

u32 f_00615ffc(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    r6 = r1;
    r4 = r2;
    r0 = r2;
    r0 = call_002fcb34(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0x28u) {  // (from the original)
        r0 = 0u;
        goto L_616050;
    }
    r0 = r4;
    r0 = call_006d9058(r0, r1, r2, guest::cpu()->r[3]);
    r0 = r0 & 0xffu;  // (from the original)
    r0 = 0x86a2c8u + (r0 + (r0 << 1) + (r0 << 4) << 2);  // (from the original)
    r1 = u32(*gptr<u8>(r0 + 0x48u));  // (from the original)
    *gptr<u32>(r5) = u32(r1);
    *gptr<u32>(r6) = u32(u32(*gptr<u8>(r0 + 0x49u)));  // (from the original)
    r0 = 1u;
L_616050:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00615ffc
GUEST_EXPORT(0x00615ffc, d_00615ffc::f_00615ffc);

// f_00616058: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00616058 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x0076ebb8, u32(u32, u32, u32, u32)> call_0076ebb8;  // (from the original)

u32 f_00616058(u32 r0, u32 r1, u32 r2) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 nf = 0;
    u32 zf = 0;
    u32 cf = 0;
    u32 vf = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r4 = r0;
    r0 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r0;
    r0 = 0x40000u;  // (from the original)
    r0 = call_002f74e0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r8 = 0x864288u;  // (from the original)
    r5 = 0u;
    r6 = 1u;
    r7 = 2u;
    if (r0 != 0) {
        r0 = u32(s32(s8(*gptr<u8>(r4 + 7u))));
        r1 = r0 - 4u;
        cf = r1 >= 5u;
        if (cf) {
            r1 = r0 - 0x10u;  // (from the original)
            cf = r1 >= 5u;
        }
        if (cf) {
            if (r0 - 9u >= 7u) {
                r5 = r7;
            } else {
                r5 = r6;
            }
        }
        r0 = r8 + (r5 + (r5 << 3) << 3);
        guest::cpu()->r[13] += 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r0;
    r0 = 0x20000u;  // (from the original)
    r0 = call_002f74e0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0) {
        r0 = *gptr<u32>(0x95c6d0u) + 0x10u;  // (from the original)
        r0 = call_0076ebb8(r0, r1, r2, guest::cpu()->r[3]);
        r1 = r0;
        r0 = u32(s32(s8(*gptr<u8>(r4 + 7u))));
        cf = r0 - 4u >= 5u;
        if (cf) {
            cf = r0 - 0x10u >= 5u;  // (from the original)
        }
        if (cf) {
            if (r0 - 9u >= 7u) {
                r5 = r7;
            } else {
                r5 = r6;
            }
        }
        r1 = r1 + (r1 << 3);
        r0 = r5 + (r5 << 3);
        r1 = r8 + (r1 + (r1 << 1) << 3);
        goto L_616188;
    }
    r0 = u32(s32(s8(*gptr<u8>(r4 + 4u)))) - 1u;
    if (r0 == 7u) {
        goto L_616190;
    }
    zf = r0 == 8u;
    if (u32(r0 >= 8u) && !zf) {
        r0 = r0 + 2u;
    }
    if (zf) {
        goto L_6161a0;
    }
L_616148:;
    r0 = r0 & 0xffu;  // (from the original)
    r1 = 0x861f78u + (r0 + (r0 << 5) << 3);  // (from the original)
    r0 = u32(s32(s8(*gptr<u8>(r4 + 7u))));
    cf = r0 - 4u >= 5u;
    if (cf) {
        cf = r0 - 0x10u >= 5u;  // (from the original)
    }
    if (cf) {
        if (r0 - 9u >= 7u) {
            r5 = r7;
        } else {
            r5 = r6;
        }
    }
    r0 = r5 + (r5 << 1) + (r5 << 3);
L_616188:;
    r0 = r1 + (r0 << 3);
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_616190:;
    r1 = u32(s32(s8(*gptr<u8>(r4 + 5u))));
    res = r1 - 0xfu;  // (from the original)
    if (!u32(res == 0) && res >> 0x1f == ((r1 ^ 0xfu) & (r1 ^ res)) >> 0x1f) {  // (from the original)
        r0 = 8u;
    }
    guest::preempt();
    goto L_616148;
L_6161a0:;
    r0 = u32(s32(s8(*gptr<u8>(r4 + 5u))));
    res = r0 - 0xfu;  // (from the original)
    nf = res >> 0x1f;  // (from the original)
    zf = res == 0;
    vf = ((r0 ^ 0xfu) & (r0 ^ res)) >> 0x1f;  // (from the original)
    if (!zf && nf == vf) {
        r0 = 0xau;  // (from the original)
    }
    if (zf || nf != vf) {
        r0 = 9u;
    }
    guest::preempt();
    goto L_616148;
}

}  // namespace d_00616058
GUEST_EXPORT(0x00616058, d_00616058::f_00616058);

// f_006165c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006165c4 {


u32 f_006165c4(u32 r0) {
    u32 r1 = 0;
    r1 = 0x952880u;  // (from the original)
    if (r0 >= 3u) {
        r0 = *gptr<u32>(r1);
    } else {
        r0 = *gptr<u32>(r1 + (r0 << 2));
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006165c4
GUEST_EXPORT(0x006165c4, d_006165c4::f_006165c4);

// f_0061666c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061666c {

inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x006bd2c8, u32(u32, u32, u32, u32)> call_006bd2c8;  // (from the original)
inline constexpr guest::Function<0x007701b8, u32(u32, u32, u32, u32)> call_007701b8;  // (from the original)

u32 f_0061666c(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r6 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_002fb94c(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    if (r0 == 0) {
        goto L_6166c4;
    }
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb34(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 != 0x28u) {  // (from the original)
        goto L_6166c4;
    }
    r4 = r5 + 0x6c20u;  // (from the original)
    r1 = r6;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, guest::cpu()->r[2], r3);
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_007701b8(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    r4 = r0 ^ 1u;
    if (r4 == 0) {
        goto L_6166cc;
    }
L_6166c4:;
    r0 = 0u;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_6166cc:;
    r1 = r6;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_006bd2c8(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0061666c
GUEST_EXPORT(0x0061666c, d_0061666c::f_0061666c);

// f_00616e70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00616e70 {

struct __attribute__((packed)) Object_00616e70_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_00616e70_0, half_0, 0x0);  // (from the original)


u32 f_00616e70(gptr<Object_00616e70_0> arg0, u32 r1) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 nf = 0;
    u32 zf = 0;
    u32 vf = 0;
    r2 = u32(s32(s16(arg0->half_0)));
    res = r2 - r1;
    nf = res >> 0x1f;  // (from the original)
    zf = res == 0;
    vf = ((r2 ^ r1) & (r2 ^ res)) >> 0x1f;  // (from the original)
    if (zf || nf != vf) {
        r1 = 0u - r1;
        res = r1 - r2;
        nf = res >> 0x1f;  // (from the original)
        zf = res == 0;
        vf = ((r1 ^ r2) & (r1 ^ res)) >> 0x1f;  // (from the original)
    }
    if (!zf && nf == vf) {
        arg0->half_0 = u16(r1);
        r0 = 0u;
    }
    if (zf || nf != vf) {
        r0 = 1u;
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00616e70
GUEST_EXPORT(0x00616e70, d_00616e70::f_00616e70);

// f_00616fb0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00616fb0 {


u32 f_00616fb0() {
    u32 r0 = 0;
    r0 = *gptr<u32>(*gptr<u32>(0x952b8cu) + 0xcu);  // (from the original)
    return r0;
}

}  // namespace d_00616fb0
GUEST_EXPORT(0x00616fb0, d_00616fb0::f_00616fb0);

// f_00616fc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00616fc4 {


u32 f_00616fc4() {
    u32 r0 = 0;
    r0 = *gptr<u32>(*gptr<u32>(0x952b8cu) + 0x10u);  // (from the original)
    return r0;
}

}  // namespace d_00616fc4
GUEST_EXPORT(0x00616fc4, d_00616fc4::f_00616fc4);

// f_00617088: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00617088 {


void f_00617088(u32 r0, u32 r1) {
    u32 r2 = 0;
    r2 = 0u;
    if (r1 < 4u) {
        *gptr<u8>(r0 + r1) = u8(r2);
    }
    return;
}

}  // namespace d_00617088
GUEST_EXPORT(0x00617088, d_00617088::f_00617088);

// f_00617120: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00617120 {

inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32, u32, u32, u32)> call_00137e84;  // (from the original)
inline constexpr guest::Function<0x00624c78, u32(u32, u32, u32, u32)> call_00624c78;  // (from the original)

u32 f_00617120(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r6 = r0;
    r5 = r0 + 0x13280u;  // (from the original)
    r4 = r1;
    r0 = r5;
    r0 = call_00135740(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r6 = r6 + 0x13000u;  // (from the original)
    r0 = r4;
    r7 = u32(*gptr<u8>(r6 + 0x276u));  // (from the original)
    r0 = call_00624c78(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if ((r0 & r7) == 0) {
        goto L_617190;
    }
    r7 = u32(*gptr<u8>(r6 + 0x278u));  // (from the original)
    r0 = r4;
    r0 = call_00624c78(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if ((r0 & r7) != 0) {
        goto L_617190;
    }
    r7 = u32(*gptr<u8>(r6 + 0x272u));  // (from the original)
    r0 = r4;
    r0 = call_00624c78(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if ((r0 & r7) == 0) {
        goto L_617190;
    }
    r6 = u32(*gptr<u8>(r6 + 0x274u));  // (from the original)
    r0 = r4;
    r0 = call_00624c78(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if ((r0 & r6) == 0) {
        goto L_6171a0;
    }
L_617190:;
    r0 = r5;
    r0 = call_00137e84(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = 0u;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    return r0;
L_6171a0:;
    r0 = r5;
    r0 = call_00137e84(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    return r0;
}

}  // namespace d_00617120
GUEST_EXPORT(0x00617120, d_00617120::f_00617120);

// f_006174fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006174fc {

struct __attribute__((packed)) Object_006174fc_0 {
    u8 unknown_0[0x132a0];  // (not used here)
    u32 word_132a0;
};
GUEST_OFFSET(Object_006174fc_0, word_132a0, 0x132a0);  // (from the original)

inline constexpr guest::Function<0x0050d478, u32(u32, u32, u32, u32)> call_0050d478;  // (from the original)
inline constexpr guest::Function<0x00622c5c, u32(u32, u32, u32, u32)> call_00622c5c;  // (from the original)
inline constexpr guest::Function<0x00623168, u32(u32, u32, u32, u32)> call_00623168;  // (from the original)

u32 f_006174fc(gptr<Object_006174fc_0> arg0) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = r0 + 0x13000u;  // (from the original)
    r1 = arg0->word_132a0;
    if (r1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    res = r1 - 1u;
    r1 = res;
    arg0->word_132a0 = u32(r1);
    if (res != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 0xa22020u;  // (from the original)
    r0 = call_0050d478(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x3594u;  // (from the original)
    r0 = call_00622c5c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x4000u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    r0 = r0 + 0x3880u;  // (from the original)
    return call_00623168(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_006174fc
GUEST_EXPORT(0x006174fc, d_006174fc::f_006174fc);

// f_006176fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006176fc {

inline constexpr guest::Function<0x0062c790, u32(u32, u32, u32, u32)> call_0062c790;  // (from the original)

u32 f_006176fc(u32 r0) {
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    float S0 = 0;
    float S1 = 0;
    r13 = r13 - 0x10u;  // (from the original)
    r12 = r13 + 0x10u;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r12));
    S1 = std::bit_cast<float>(*gptr<u32>(r12 + 4));
    r0 = r0 + 0x28ecu;  // (from the original)
    *gptr<u32>(r13) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r13 + 4) = u32(std::bit_cast<u32>(S1));
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_0062c790(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_006176fc
GUEST_EXPORT(0x006176fc, d_006176fc::f_006176fc);

// f_00617724: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00617724 {

struct __attribute__((packed)) Object_00617724_0 {
    u8 unknown_0[0x132a0];  // (not used here)
    u32 word_132a0;
};
GUEST_OFFSET(Object_00617724_0, word_132a0, 0x132a0);  // (from the original)

inline constexpr guest::Function<0x0050cfb8, u32(u32, u32, u32, u32)> call_0050cfb8;  // (from the original)
inline constexpr guest::Function<0x0050cfcc, u32(u32, u32, u32, u32)> call_0050cfcc;  // (from the original)
inline constexpr guest::Function<0x0062217c, u32(u32, u32, u32, u32)> call_0062217c;  // (from the original)
inline constexpr guest::Function<0x006297a8, u32(u32, u32, u32, u32)> call_006297a8;  // (from the original)

u32 f_00617724(gptr<Object_00617724_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0 + 0x13000u;  // (from the original)
    r4 = r0;
    if (arg0->word_132a0 == 0) {
        goto L_617774;
    } else {
        r6 = 1u;
    }
L_617740:;
    if (*gptr<u32>(r5 + 0x2a0u) == 0) {  // (from the original)
        goto L_61778c;
    }
    if (r6 == 0) {
        goto L_61776c;
    }
L_617754:;
    r0 = *gptr<u32>(r5 + 0x2a0u);  // (from the original)
    if (r0 + 1u != 0) {
        *gptr<u32>(r5 + 0x2a0u) = u32(r0 + 1u);  // (from the original)
    }
    r0 = 0xa22020u;  // (from the original)
    r0 = call_0050cfb8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
L_61776c:;
    r0 = r6;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_617774:;
    r0 = 0xa22020u;  // (from the original)
    r1 = r4 + 0xb0u;  // (from the original)
    r0 = call_0050cfcc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r6 = r0;
    guest::preempt();
    goto L_617740;
L_61778c:;
    if (r6 == 0) {
        guest::preempt();
        goto L_61776c;
    }
    r0 = r4 + 0x3594u;  // (from the original)
    r0 = call_0062217c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x7874u;  // (from the original)
    r0 = call_006297a8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::preempt();
    goto L_617754;
}

}  // namespace d_00617724
GUEST_EXPORT(0x00617724, d_00617724::f_00617724);

// f_00617824: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00617824 {

inline constexpr guest::Function<0x0062c2bc, u32(u32, u32, u32, u32)> call_0062c2bc;  // (from the original)

u32 f_00617824(u32 r0) {
    u32 r2 = 0;
    u32 r3 = 0;
    r3 = 0x88f298u;  // (from the original)
    r2 = 0x87bd90u;  // (from the original)
    r0 = r0 + 0x28ecu;  // (from the original)
    return call_0062c2bc(r0, guest::cpu()->r[1], r2, r3);
}

}  // namespace d_00617824
GUEST_EXPORT(0x00617824, d_00617824::f_00617824);

// f_006179d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006179d0 {

inline constexpr guest::Function<0x0061d9e0, u32(u32, u32, u32, u32)> call_0061d9e0;  // (from the original)
inline constexpr guest::Function<0x006235cc, u32(u32, u32, u32, u32)> call_006235cc;  // (from the original)

u32 f_006179d0(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    r4 = 1u;
    r0 = r0 + 0x23cu;  // (from the original)
    r0 = call_006235cc(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 == 0) {
        r4 = 0u;
    }
    r0 = r5 + 0x27a0u;  // (from the original)
    r0 = call_0061d9e0(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 == 0) {
        r4 = 0u;
    }
    r0 = r4;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0;
}

}  // namespace d_006179d0
GUEST_EXPORT(0x006179d0, d_006179d0::f_006179d0);

// f_00617d08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00617d08 {

struct __attribute__((packed)) Object_00617d08_0 {
    u8 unknown_0[0x132af];  // (not used here)
    u8 byte_132af;
};
GUEST_OFFSET(Object_00617d08_0, byte_132af, 0x132af);  // (from the original)

inline constexpr guest::Function<0x0056bd04, u32(u32, u32, u32, u32)> call_0056bd04;  // (from the original)
inline constexpr guest::Function<0x0061a41c, u32(u32, u32, u32, u32)> call_0061a41c;  // (from the original)
inline constexpr guest::Function<0x0061dae4, u32(u32, u32, u32, u32)> call_0061dae4;  // (from the original)
inline constexpr guest::Function<0x006214c4, u32(u32, u32, u32, u32)> call_006214c4;  // (from the original)
inline constexpr guest::Function<0x00623664, u32(u32, u32, u32, u32)> call_00623664;  // (from the original)
inline constexpr guest::Function<0x0075f1c4, u32(u32, u32, u32, u32)> call_0075f1c4;  // (from the original)

u32 f_00617d08(gptr<Object_00617d08_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 zf = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r6 = r0 + 0x13200u;  // (from the original)
    r4 = r0;
    r5 = r0 + 0x13000u;  // (from the original)
    r0 = u32(arg0->byte_132af);
    if (r0 != 0) {
        r0 = call_0056bd04(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        *gptr<u8>(r5 + 0x2afu) = u8(0u);  // (from the original)
    }
    r0 = r4 + 0x1e4u;  // (from the original)
    r0 = call_0061a41c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x1c0u;  // (from the original)
    r0 = call_006214c4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x23cu;  // (from the original)
    r0 = call_00623664(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x27a0u;  // (from the original)
    r0 = call_0061dae4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = u32(*gptr<u8>(r5 + 0x29du));  // (from the original)
    zf = r0 == 2u;
    if (!zf) {
        r0 = u32(*gptr<u8>(r6 + 0xb0u));  // (from the original)
        zf = r0 == 0;
    }
    if (!zf) {
        r1 = 2u;
        r0 = r4 + 0x7874u;  // (from the original)
        r0 = call_0075f1c4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0 != 0) {
            r0 = 2u;
            *gptr<u8>(r5 + 0x29du) = u8(r0);  // (from the original)
        }
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00617d08
GUEST_EXPORT(0x00617d08, d_00617d08::f_00617d08);

// f_00618164: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00618164 {

inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32, u32, u32, u32)> call_00137e84;  // (from the original)
inline constexpr guest::Function<0x00617088, u32(u32, u32, u32, u32)> call_00617088;  // (from the original)
inline constexpr guest::Function<0x0061dd74, u32(u32, u32, u32, u32)> call_0061dd74;  // (from the original)
inline constexpr guest::Function<0x00620660, u32(u32, u32, u32, u32)> call_00620660;  // (from the original)
inline constexpr guest::Function<0x00621684, u32(u32, u32, u32, u32)> call_00621684;  // (from the original)
inline constexpr guest::Function<0x006237a4, u32(u32, u32, u32, u32)> call_006237a4;  // (from the original)
inline constexpr guest::Function<0x00623c3c, u32(u32, u32, u32, u32)> call_00623c3c;  // (from the original)
inline constexpr guest::Function<0x006245ec, u32(u32, u32, u32, u32)> call_006245ec;  // (from the original)
inline constexpr guest::Function<0x00624ae4, u32(u32, u32, u32, u32)> call_00624ae4;  // (from the original)
inline constexpr guest::Function<0x00624b24, u32(u32, u32, u32, u32)> call_00624b24;  // (from the original)
inline constexpr guest::Function<0x00624f14, u32(u32, u32, u32, u32)> call_00624f14;  // (from the original)
inline constexpr guest::Function<0x006251a0, u32(u32, u32, u32, u32)> call_006251a0;  // (from the original)
inline constexpr guest::Function<0x00628000, u32(u32, u32, u32, u32)> call_00628000;  // (from the original)
inline constexpr guest::Function<0x0062a04c, u32(u32, u32, u32, u32)> call_0062a04c;  // (from the original)

u32 f_00618164(u32 r0, u32 r1) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    if (r1 >= 4u) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        guest::cpu()->r[8] = r8;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    *gptr<u32>(ea + 8) = u32(r6);
    *gptr<u32>(ea + 0xc) = u32(r7);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r8);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r14);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r4 = r0;
    r6 = r1;
    r7 = r0 + r6 + 0x13000u;  // (from the original)
    r8 = 0u;
    r5 = r4 + 0x13280u;  // (from the original)
    r0 = r5;
    *gptr<u8>(r7 + 0x2a4u) = u8(r8);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00135740(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r5;
    *gptr<u8>(r7 + 0x2a8u) = u8(r8);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00137e84(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r6;
    r0 = r4 + 0x1c0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00621684(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r6;
    r0 = r4 + 0x58u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00624f14(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r6;
    r0 = r4 + 0x78u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00623c3c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r6;
    r0 = r4 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00628000(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r6;
    r0 = r4 + 0x27a0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0061dd74(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r6;
    r0 = r4 + 0x2784u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006251a0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r6;
    r0 = r4 + 0x277cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00617088(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r6;
    r0 = r4 + 0x23cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006237a4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r6;
    r0 = r4 + 0x22cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006245ec(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r6;
    r0 = r4 + 0x214u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00620660(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r6;
    r0 = r4 + 0x1e4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00624ae4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00135740(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r6;
    r0 = 0x13272u + r4;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00624b24(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r6;
    r0 = r4 + 0x13274u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00624b24(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r6;
    r0 = 0x13276u + r4;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00624b24(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r6;
    r0 = r4 + 0x13278u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00624b24(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r6;
    r0 = 0x1327au + r4;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00624b24(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r6;
    r0 = r4 + 0x1327cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00624b24(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r6;
    r0 = r4 + 0x13270u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00624b24(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r6;
    r0 = 0x1326eu + r4;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00624b24(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r6;
    r0 = r4 + 0x1326cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00624b24(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00137e84(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r6;
    r0 = r4 + 0xb0u;  // (from the original)
    ea = r13;
    r13 = r13 + 0x18;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    r7 = *gptr<u32>(ea + 0xc);  // (from the original)
    r8 = *gptr<u32>(ea + 0x10);  // (from the original)
    r14 = *gptr<u32>(ea + 0x14);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[7] = r7;
    guest::cpu()->r[8] = r8;
    return call_0062a04c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00618164
GUEST_EXPORT(0x00618164, d_00618164::f_00618164);

// f_006182f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006182f4 {

inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32, u32, u32, u32)> call_00137e84;  // (from the original)

u32 f_006182f4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 zf = 0;
    u32 cf = 0;
    if (r1 >= 4u) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        guest::cpu()->r[8] = r8;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    *gptr<u32>(ea + 8) = u32(r6);
    *gptr<u32>(ea + 0xc) = u32(r7);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r8);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r14);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r5 = r0;
    r6 = r0 + 0x13280u;  // (from the original)
    r7 = r1;
    r4 = r2;
    r8 = r3;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_00135740(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r5 + r7 + 0x13000u;  // (from the original)
    if (r8 == 0) {
        goto L_61835c;
    }
    r0 = u32(*gptr<u8>(r1 + 0x2a8u));  // (from the original)
    zf = r4 == r0;
    cf = r4 >= r0;
    r0 = r4 - r0;
    if (!cf || zf) {
        r0 = r0 + 0x100u;  // (from the original)
    }
    if ((r0 & 0xffu) == 1u) {  // (from the original)
        goto L_61835c;
    }
    r0 = r5 + 0x13000u;  // (from the original)
    r2 = u32(*gptr<u8>(r0 + 0x26au)) | 8u;  // (from the original)
    *gptr<u8>(r0 + 0x26au) = u8(r2);  // (from the original)
L_61835c:;
    r0 = r6;
    ea = r1 + 0x2a8u;  // (from the original)
    *gptr<u8>(ea) = u8(r4);
    ea = r13;
    r13 = r13 + 0x18;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    r7 = *gptr<u32>(ea + 0xc);  // (from the original)
    r8 = *gptr<u32>(ea + 0x10);  // (from the original)
    r14 = *gptr<u32>(ea + 0x14);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[7] = r7;
    guest::cpu()->r[8] = r8;
    return call_00137e84(r0, r1, r2, r3);
}

}  // namespace d_006182f4
GUEST_EXPORT(0x006182f4, d_006182f4::f_006182f4);

// f_00618384: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00618384 {

inline constexpr guest::Function<0x001add58, u32(u32, u32, u32, u32)> call_001add58;  // (from the original)
inline constexpr guest::Function<0x00308d4d, u32(u32, u32, u32, u32)> call_00308d4c;  // (from the original)

u32 f_00618384(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r0 = r0 + 0x7894u;  // (from the original)
    r5 = r0;
    r0 = call_001add58(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r5;
    r0 = call_00308d4c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = 0u;
    *gptr<u8>(r4 + 0x9db0u) = u8(r0);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0;
}

}  // namespace d_00618384
GUEST_EXPORT(0x00618384, d_00618384::f_00618384);

// f_006184d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006184d8 {

struct __attribute__((packed)) Object_006184d8_0 {
    u8 unknown_0[0x1f1];  // (not used here)
    u8 byte_1f1;
};
GUEST_OFFSET(Object_006184d8_0, byte_1f1, 0x1f1);  // (from the original)

inline constexpr guest::Function<0x0075f644, u32(u32, u32, u32, u32)> call_0075f644;  // (from the original)

u32 f_006184d8(gptr<Object_006184d8_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 zf = 0;
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = u32(arg0->byte_1f1);
    zf = r0 == 0;
    if (!zf) {
        zf = r0 == 5u;
    }
    if (zf) {
        r1 = 0u;
        r2 = 1u;
        r0 = r4 + 0xb0u;  // (from the original)
        r0 = call_0075f644(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0 == 0) {
            goto L_618524;
        }
    }
    r0 = u32(*gptr<u8>(r4 + 0x1f0u));  // (from the original)
    if (r0 == 1u) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (r0 == 0) {
        r0 = ~0u;
    } else {
        r0 = 0u;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
L_618524:;
    *gptr<u8>(r4 + 0x1f0u) = u8(0u);  // (from the original)
    r0 = ~0u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006184d8
GUEST_EXPORT(0x006184d8, d_006184d8::f_006184d8);

// f_00618684: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00618684 {

inline constexpr guest::Function<0x0050d24c, u32(u32, u32, u32, u32)> call_0050d24c;  // (from the original)
inline constexpr guest::Function<0x00617f90, u32(u32, u32, u32, u32)> call_00617f90;  // (from the original)

u32 f_00618684(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = 0xa22020u;  // (from the original)
    r0 = call_0050d24c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r2 = 0u;
    r1 = 1u;
    r0 = r4;
    r0 = call_00617f90(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00618684
GUEST_EXPORT(0x00618684, d_00618684::f_00618684);

// f_006186b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006186b8 {

inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> call_00300904;  // (from the original)
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;  // (from the original)

u32 f_006186b8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 zf = 0;
    ea = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    *gptr<u32>(ea + 8) = u32(r4);
    *gptr<u32>(ea + 0xc) = u32(r5);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r6);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r14);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r5 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_00300904(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r4 = r5 + 0x13000u;  // (from the original)
    if (r0 == 0) {
        goto L_618718;
    }
    r0 = r5 + 0x13200u;  // (from the original)
    r3 = 1u;
    r2 = r13 + 4u;
    zf = u32(*gptr<u8>(r0 + 0xacu)) == 0;  // (from the original)
    if (!zf) {
        zf = u32(*gptr<u8>(r0 + 0xaeu)) == 0;  // (from the original)
    }
    if (!zf) {
        zf = u32(*gptr<u8>(r4 + 0x268u)) == 0;  // (from the original)
    }
    if (!zf) {
        r1 = 0u;
        r0 = 0x76u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_006249b0(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        goto L_618718;
    }
    r1 = 4u;
    r0 = 0x76u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006249b0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_618718:;
    ea = r13 + 4u;
    r0 = u32(*gptr<u8>(ea));
    ea = r4 + 0x2b1u;  // (from the original)
    *gptr<u8>(ea) = u8(r0);
    r13 = r13 + 8u;
    ea = r13;
    r13 = r13 + 0x10;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006186b8
GUEST_EXPORT(0x006186b8, d_006186b8::f_006186b8);

// f_00618aa4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00618aa4 {

inline constexpr guest::Function<0x0050d238, u32(u32, u32, u32, u32)> call_0050d238;  // (from the original)
inline constexpr guest::Function<0x00617f90, u32(u32, u32, u32, u32)> call_00617f90;  // (from the original)

u32 f_00618aa4(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = 0xa22020u;  // (from the original)
    r0 = call_0050d238(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r2 = 1u;
    r1 = r2;
    r0 = r4;
    r0 = call_00617f90(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00618aa4
GUEST_EXPORT(0x00618aa4, d_00618aa4::f_00618aa4);

// f_00618ad8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00618ad8 {

struct __attribute__((packed)) Object_00618ad8_0 {
    u8 unknown_0[0x1f0];  // (not used here)
    u8 byte_1f0;
    u8 byte_1f1;
};
GUEST_OFFSET(Object_00618ad8_0, byte_1f0, 0x1f0);  // (from the original)
GUEST_OFFSET(Object_00618ad8_0, byte_1f1, 0x1f1);  // (from the original)


u32 f_00618ad8(gptr<Object_00618ad8_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 zf = 0;
    r1 = r0;
    r0 = u32(arg0->byte_1f0);
    r2 = 7u;
    zf = r0 == 0;
    if (!zf) {
        zf = r0 == 1u;
    }
    if (!zf) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    arg0->byte_1f0 = u8(2u);
    r0 = 1u;
    arg0->byte_1f1 = u8(r2);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00618ad8
GUEST_EXPORT(0x00618ad8, d_00618ad8::f_00618ad8);

// f_00618b08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00618b08 {

struct __attribute__((packed)) Object_00618b08_0 {
    u8 unknown_0[0x1f0];  // (not used here)
    u8 byte_1f0;
    u8 byte_1f1;
};
GUEST_OFFSET(Object_00618b08_0, byte_1f0, 0x1f0);  // (from the original)
GUEST_OFFSET(Object_00618b08_0, byte_1f1, 0x1f1);  // (from the original)


u32 f_00618b08(gptr<Object_00618b08_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 zf = 0;
    r1 = r0;
    r0 = u32(arg0->byte_1f0);
    r2 = 5u;
    zf = r0 == 0;
    if (!zf) {
        zf = r0 == 1u;
    }
    if (!zf) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    arg0->byte_1f0 = u8(2u);
    r0 = 1u;
    arg0->byte_1f1 = u8(r2);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00618b08
GUEST_EXPORT(0x00618b08, d_00618b08::f_00618b08);

// f_00618b38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00618b38 {

inline constexpr guest::Function<0x0050d260, u32(u32, u32, u32, u32)> call_0050d260;  // (from the original)
inline constexpr guest::Function<0x00617f90, u32(u32, u32, u32, u32)> call_00617f90;  // (from the original)
inline constexpr guest::Function<0x0061ee74, u32(u32, u32, u32, u32)> call_0061ee74;  // (from the original)
inline constexpr guest::Function<0x0070ab10, u32(u32, u32, u32, u32)> call_0070ab10;  // (from the original)

u32 f_00618b38(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    r0 = 0xa22020u;  // (from the original)
    r5 = r2;
    guest::cpu()->r[13] = r13;
    r0 = call_0050d260(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r2 = r5;
    r1 = 0u;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00617f90(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(0x9529ccu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0070ab10(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(r0);
    r3 = 0u;
    r2 = r13;
    r1 = r3;
    r0 = r4 + 0x27a0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0061ee74(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00618b38
GUEST_EXPORT(0x00618b38, d_00618b38::f_00618b38);

// f_00618c00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00618c00 {

struct __attribute__((packed)) Object_00618c00_0 {
    u8 unknown_0[0x1326a];  // (not used here)
    u8 byte_1326a;
    u8 byte_1326b;
    u8 unknown_1326c[0x38];  // (not used here)
    u8 byte_132a4;
    u8 byte_132a5;
    u8 byte_132a6;
    u8 byte_132a7;
    u8 byte_132a8;
    u8 byte_132a9;
    u8 byte_132aa;
    u8 byte_132ab;
    u8 unknown_132ac[0x3];  // (not used here)
    u8 byte_132af;
};
GUEST_OFFSET(Object_00618c00_0, byte_1326a, 0x1326a);  // (from the original)
GUEST_OFFSET(Object_00618c00_0, byte_1326b, 0x1326b);  // (from the original)
GUEST_OFFSET(Object_00618c00_0, byte_132a4, 0x132a4);  // (from the original)
GUEST_OFFSET(Object_00618c00_0, byte_132a5, 0x132a5);  // (from the original)
GUEST_OFFSET(Object_00618c00_0, byte_132a6, 0x132a6);  // (from the original)
GUEST_OFFSET(Object_00618c00_0, byte_132a7, 0x132a7);  // (from the original)
GUEST_OFFSET(Object_00618c00_0, byte_132a8, 0x132a8);  // (from the original)
GUEST_OFFSET(Object_00618c00_0, byte_132a9, 0x132a9);  // (from the original)
GUEST_OFFSET(Object_00618c00_0, byte_132aa, 0x132aa);  // (from the original)
GUEST_OFFSET(Object_00618c00_0, byte_132ab, 0x132ab);  // (from the original)
GUEST_OFFSET(Object_00618c00_0, byte_132af, 0x132af);  // (from the original)

inline constexpr guest::Function<0x00301444, u32(u32, u32, u32, u32)> call_00301444;  // (from the original)
inline constexpr guest::Function<0x006170f4, u32(u32, u32, u32, u32)> call_006170f4;  // (from the original)
inline constexpr guest::Function<0x0061a6a4, u32(u32, u32, u32, u32)> call_0061a6a4;  // (from the original)
inline constexpr guest::Function<0x0061f3f8, u32(u32, u32, u32, u32)> call_0061f3f8;  // (from the original)
inline constexpr guest::Function<0x00620dcc, u32(u32, u32, u32, u32)> call_00620dcc;  // (from the original)
inline constexpr guest::Function<0x006239fc, u32(u32, u32, u32, u32)> call_006239fc;  // (from the original)
inline constexpr guest::Function<0x00623dcc, u32(u32, u32, u32, u32)> call_00623dcc;  // (from the original)
inline constexpr guest::Function<0x0062478c, u32(u32, u32, u32, u32)> call_0062478c;  // (from the original)
inline constexpr guest::Function<0x00624be4, u32(u32, u32, u32, u32)> call_00624be4;  // (from the original)
inline constexpr guest::Function<0x00624c68, u32(u32, u32, u32, u32)> call_00624c68;  // (from the original)
inline constexpr guest::Function<0x00624fd4, u32(u32, u32, u32, u32)> call_00624fd4;  // (from the original)
inline constexpr guest::Function<0x006255b8, u32(u32, u32, u32, u32)> call_006255b8;  // (from the original)
inline constexpr guest::Function<0x00625da4, u32(u32, u32, u32, u32)> call_00625da4;  // (from the original)
inline constexpr guest::Function<0x00625ed4, u32(u32, u32, u32, u32)> call_00625ed4;  // (from the original)
inline constexpr guest::Function<0x00626070, u32(u32, u32, u32, u32)> call_00626070;  // (from the original)
inline constexpr guest::Function<0x00626454, u32(u32, u32, u32, u32)> call_00626454;  // (from the original)
inline constexpr guest::Function<0x006265c4, u32(u32, u32, u32, u32)> call_006265c4;  // (from the original)
inline constexpr guest::Function<0x0062834c, u32(u32, u32, u32, u32)> call_0062834c;  // (from the original)
inline constexpr guest::Function<0x00629808, u32(u32, u32, u32, u32)> call_00629808;  // (from the original)
inline constexpr guest::Function<0x0062a724, u32(u32, u32, u32, u32)> call_0062a724;  // (from the original)

u32 f_00618c00(gptr<Object_00618c00_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r5 = r0 + 0x13000u;  // (from the original)
    r7 = 0u;
    arg0->byte_132a4 = u8(r7);
    arg0->byte_132a8 = u8(r7);
    arg0->byte_132a5 = u8(r7);
    arg0->byte_132a9 = u8(r7);
    arg0->byte_132a6 = u8(r7);
    arg0->byte_132aa = u8(r7);
    arg0->byte_132a7 = u8(r7);
    arg0->byte_132ab = u8(r7);
    arg0->byte_1326a = u8(r7);
    r4 = r0;
    arg0->byte_1326b = u8(r7);
    r6 = r1;
    r0 = r0 + 0x1c0u;  // (from the original)
    arg0->byte_132af = u8(r7);
    r0 = call_00624be4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x7840u;  // (from the original)
    r0 = call_00625da4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x7858u;  // (from the original)
    r0 = call_00626454(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x786cu;  // (from the original)
    r0 = call_006265c4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x784cu;  // (from the original)
    r0 = call_00625ed4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x7864u;  // (from the original)
    r0 = call_00626070(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x2784u;  // (from the original)
    r0 = call_006255b8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x277cu;  // (from the original)
    r0 = call_006170f4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x23cu;  // (from the original)
    r0 = call_006239fc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x22cu;  // (from the original)
    r0 = call_0062478c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x214u;  // (from the original)
    r0 = call_00620dcc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x1e4u;  // (from the original)
    r0 = call_0061a6a4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x10u;  // (from the original)
    r0 = call_0062834c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x58u;  // (from the original)
    r0 = call_00624fd4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x78u;  // (from the original)
    r0 = call_00623dcc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0xa4u;  // (from the original)
    r0 = call_00629808(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x1326cu;  // (from the original)
    r0 = call_00624c68(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = 0x1326eu + r4;  // (from the original)
    r0 = call_00624c68(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x13270u;  // (from the original)
    r0 = call_00624c68(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = 0x13272u + r4;  // (from the original)
    r0 = call_00624c68(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x13274u;  // (from the original)
    r0 = call_00624c68(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = 0x13276u + r4;  // (from the original)
    r0 = call_00624c68(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x13278u;  // (from the original)
    r0 = call_00624c68(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = 0x1327au + r4;  // (from the original)
    r0 = call_00624c68(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x1327cu;  // (from the original)
    r0 = call_00624c68(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0xb0u;  // (from the original)
    r0 = call_0062a724(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = 4u;
    *gptr<u8>(r5 + 0x2b1u) = u8(r7);  // (from the original)
    *gptr<u8>(r5 + 0x268u) = u8(r0);  // (from the original)
    *gptr<u8>(r5 + 0x2aeu) = u8(r7);  // (from the original)
    *gptr<u8>(r5 + 0x2b2u) = u8(r7);  // (from the original)
    *gptr<u8>(r5 + 0x2b3u) = u8(r7);  // (from the original)
    *gptr<u8>(r5 + 0x2b4u) = u8(r7);  // (from the original)
    *gptr<u8>(r5 + 0x2b5u) = u8(r7);  // (from the original)
    *gptr<u8>(r5 + 0x2b6u) = u8(r7);  // (from the original)
    *gptr<u8>(r5 + 0x2b7u) = u8(r7);  // (from the original)
    if (r6 == 0) {
        *gptr<u8>(r5 + 0x2acu) = u8(r7);  // (from the original)
        *gptr<u8>(r5 + 0x29cu) = u8(8u);  // (from the original)
        r0 = r4 + 0x27a0u;  // (from the original)
        *gptr<u8>(r5 + 0x2adu) = u8(r7);  // (from the original)
        r0 = call_0061f3f8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r0 = 6u;
        *gptr<u8>(r5 + 0x266u) = u8(r0);  // (from the original)
        *gptr<u8>(r5 + 0x29du) = u8(r7);  // (from the original)
        *gptr<u8>(r5 + 0x267u) = u8(r0);  // (from the original)
        r0 = r4 + 0x13000u;  // (from the original)
        guest::cpu()->r[13] += 0x18u;  // (from the original)
        r0 = r0 + 0x234u;  // (from the original)
        r1 = 0x32u;  // (from the original)
        return call_00301444(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00618c00
GUEST_EXPORT(0x00618c00, d_00618c00::f_00618c00);

// f_00618ecc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00618ecc {

inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32, u32, u32, u32)> call_00137e84;  // (from the original)
inline constexpr guest::Function<0x00624c78, u32(u32, u32, u32, u32)> call_00624c78;  // (from the original)
inline constexpr guest::Function<0x0075e7ac, u32(u32, u32, u32, u32)> call_0075e7ac;  // (from the original)
inline constexpr guest::Function<0x0075f448, u32(u32, u32, u32, u32)> call_0075f448;  // (from the original)

u32 f_00618ecc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    guest::cpu()->r[13] -= 0x20u;  // (from the original)
    r7 = r0;
    r9 = r1;
    r10 = r2;
    if (r3 == 0) {
        goto L_618f68;
    }
    r5 = r7 + 0x13280u;  // (from the original)
    r4 = r1;
    r0 = r5;
    r0 = call_00135740(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r7 + 0x13000u;  // (from the original)
    r0 = r4;
    r8 = u32(*gptr<u8>(r6 + 0x276u));  // (from the original)
    r0 = call_00624c78(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if ((r0 & r8) == 0) {
        goto L_618f4c;
    }
    r8 = u32(*gptr<u8>(r6 + 0x278u));  // (from the original)
    r0 = r4;
    r0 = call_00624c78(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if ((r0 & r8) != 0) {
        goto L_618f4c;
    }
    r8 = u32(*gptr<u8>(r6 + 0x272u));  // (from the original)
    r0 = r4;
    r0 = call_00624c78(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if ((r0 & r8) == 0) {
        goto L_618f4c;
    }
    r0 = r4;
    r4 = u32(*gptr<u8>(r6 + 0x274u));  // (from the original)
    r0 = call_00624c78(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if ((r0 & r4) == 0) {
        goto L_618f60;
    }
L_618f4c:;
    r0 = r5;
    r0 = call_00137e84(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    goto L_618fa0;
L_618f60:;
    r0 = r5;
    r0 = call_00137e84(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_618f68:;
    r1 = r9;
    r0 = r7 + 0xb0u;  // (from the original)
    r0 = call_0075f448(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_618fa0;
    }
    if (r10 == 0) {
        goto L_618fa8;
    }
    r1 = r9;
    r0 = r7 + 0x78u;  // (from the original)
    r0 = call_0075e7ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_618fa8;
    }
L_618fa0:;
    r0 = 0u;
    guest::cpu()->r[13] += 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_618fa8:;
    r0 = 1u;
    guest::cpu()->r[13] += 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00618ecc
GUEST_EXPORT(0x00618ecc, d_00618ecc::f_00618ecc);

// f_00619044: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00619044 {

inline constexpr guest::Function<0x0012bfec, u32(u32, u32, u32, u32)> call_0012bfec;  // (from the original)
inline constexpr guest::Function<0x001ae1e4, u32(u32, u32, u32, u32)> call_001ae1e4;  // (from the original)
inline constexpr guest::Function<0x0029b870, u32(u32, u32, u32, u32)> call_0029b870;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x00617104, u32(u32, u32, u32, u32)> call_00617104;  // (from the original)
inline constexpr guest::Function<0x0061a71c, u32(u32, u32, u32, u32)> call_0061a71c;  // (from the original)
inline constexpr guest::Function<0x0061f4c0, u32(u32, u32, u32, u32)> call_0061f4c0;  // (from the original)
inline constexpr guest::Function<0x00620e68, u32(u32, u32, u32, u32)> call_00620e68;  // (from the original)
inline constexpr guest::Function<0x006220f8, u32(u32, u32, u32, u32)> call_006220f8;  // (from the original)
inline constexpr guest::Function<0x00622d04, u32(u32, u32, u32, u32)> call_00622d04;  // (from the original)
inline constexpr guest::Function<0x00623184, u32(u32, u32, u32, u32)> call_00623184;  // (from the original)
inline constexpr guest::Function<0x00623bb4, u32(u32, u32, u32, u32)> call_00623bb4;  // (from the original)
inline constexpr guest::Function<0x00623e3c, u32(u32, u32, u32, u32)> call_00623e3c;  // (from the original)
inline constexpr guest::Function<0x00624920, u32(u32, u32, u32, u32)> call_00624920;  // (from the original)
inline constexpr guest::Function<0x00624c90, u32(u32, u32, u32, u32)> call_00624c90;  // (from the original)
inline constexpr guest::Function<0x00625060, u32(u32, u32, u32, u32)> call_00625060;  // (from the original)
inline constexpr guest::Function<0x00625664, u32(u32, u32, u32, u32)> call_00625664;  // (from the original)
inline constexpr guest::Function<0x00625e2c, u32(u32, u32, u32, u32)> call_00625e2c;  // (from the original)
inline constexpr guest::Function<0x00625f58, u32(u32, u32, u32, u32)> call_00625f58;  // (from the original)
inline constexpr guest::Function<0x006260f0, u32(u32, u32, u32, u32)> call_006260f0;  // (from the original)
inline constexpr guest::Function<0x006264e0, u32(u32, u32, u32, u32)> call_006264e0;  // (from the original)
inline constexpr guest::Function<0x00626644, u32(u32, u32, u32, u32)> call_00626644;  // (from the original)
inline constexpr guest::Function<0x00628518, u32(u32, u32, u32, u32)> call_00628518;  // (from the original)
inline constexpr guest::Function<0x006297f0, u32(u32, u32, u32, u32)> call_006297f0;  // (from the original)
inline constexpr guest::Function<0x006298a8, u32(u32, u32, u32, u32)> call_006298a8;  // (from the original)
inline constexpr guest::Function<0x0062ac50, u32(u32, u32, u32, u32)> call_0062ac50;  // (from the original)
inline constexpr guest::Function<0x0062b014, u32(u32, u32, u32, u32)> call_0062b014;  // (from the original)
inline constexpr guest::Function<0x0062c868, u32(u32, u32, u32, u32)> call_0062c868;  // (from the original)

u32 f_00619044(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    r0 = r0 + 0x10u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    r0 = call_00628518(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x48u;  // (from the original)
    r0 = call_00625060(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x20u;  // (from the original)
    r0 = call_00623e3c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x2cu;  // (from the original)
    r0 = call_006298a8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0xcu;  // (from the original)
    r0 = call_0062ac50(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x110u;  // (from the original)
    r0 = call_006220f8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x24u;  // (from the original)
    r0 = call_0061a71c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x30u;  // (from the original)
    r0 = call_00620e68(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x18u;  // (from the original)
    r0 = call_00624920(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x10u;  // (from the original)
    r0 = call_00623bb4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x2540u;  // (from the original)
    r0 = call_00617104(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 8u;
    r0 = call_00625664(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x1cu;  // (from the original)
    r0 = call_0061f4c0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x14cu;  // (from the original)
    r0 = call_0062c868(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x3f0u;  // (from the original)
    r0 = call_0062b014(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x8b8u;  // (from the original)
    r0 = call_00622d04(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x42acu;  // (from the original)
    r0 = call_00625e2c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0xcu;  // (from the original)
    r0 = call_00625f58(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0xcu;  // (from the original)
    r0 = call_006264e0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0xcu;  // (from the original)
    r0 = call_006260f0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 8u;
    r0 = call_00626644(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 8u;
    r0 = call_006297f0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0xcu;  // (from the original)
    r0 = call_00623184(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x14u;  // (from the original)
    r0 = call_001ae1e4(r0, r1, r2, r3);
    r2 = 0x2520u;  // (from the original)
    r1 = 0x1ae1e4u;  // (from the original)
    r0 = r0 + 0x2520u;  // (from the original)
    r3 = 4u;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x9480u;  // (from the original)
    r0 = call_0029b870(r0, r1, r2, r3);
    r1 = r0 - 0x13000u;  // (from the original)
    r0 = r0 - 0x234u;  // (from the original)
    r2 = 6u;
    *gptr<u8>(r0 + 0x266u) = u8(r2);  // (from the original)
    r3 = 4u;
    *gptr<u8>(r0 + 0x267u) = u8(r2);  // (from the original)
    *gptr<u8>(r0 + 0x268u) = u8(r3);  // (from the original)
    r4 = 0u;
    *gptr<u8>(r0 + 0x269u) = u8(r3);  // (from the original)
    *gptr<u8>(r0 + 0x26au) = u8(r4);  // (from the original)
    r1 = r1 - 0x234u;  // (from the original)
    *gptr<u8>(r0 + 0x26bu) = u8(r4);  // (from the original)
    r0 = r1 + 0x1326cu;  // (from the original)
    r0 = call_00624c90(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x1326eu;  // (from the original)
    r0 = r0 - 0x1326cu + r1;  // (from the original)
    r0 = call_00624c90(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0xfffecd92u;  // (from the original)
    r0 = r0 + r1 + 0x13270u;  // (from the original)
    r0 = call_00624c90(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x13272u;  // (from the original)
    r0 = r0 - 0x13270u + r1;  // (from the original)
    r0 = call_00624c90(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0xfffecd8eu;  // (from the original)
    r0 = r0 + r1 + 0x13274u;  // (from the original)
    r0 = call_00624c90(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x13276u;  // (from the original)
    r0 = r0 - 0x13274u + r1;  // (from the original)
    r0 = call_00624c90(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0xfffecd8au;  // (from the original)
    r0 = r0 + r1 + 0x13278u;  // (from the original)
    r0 = call_00624c90(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x1327au;  // (from the original)
    r0 = r0 - 0x13278u + r1;  // (from the original)
    r0 = call_00624c90(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0xfffecd86u;  // (from the original)
    r0 = r0 + r1 + 0x1327cu;  // (from the original)
    r0 = call_00624c90(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 4u;
    r0 = call_0012bfec(r0, r1, r2, r3);
    r0 = r0 - 0x13280u;  // (from the original)
    r1 = r0 + 0x13000u;  // (from the original)
    *gptr<u8>(r1 + 0x29cu) = u8(8u);  // (from the original)
    *gptr<u8>(r1 + 0x29du) = u8(r4);  // (from the original)
    *gptr<u32>(r1 + 0x2a0u) = u32(r4);  // (from the original)
    *gptr<u8>(r1 + 0x2acu) = u8(r4);  // (from the original)
    *gptr<u8>(r1 + 0x2adu) = u8(r4);  // (from the original)
    *gptr<u8>(r1 + 0x2aeu) = u8(r4);  // (from the original)
    *gptr<u8>(r1 + 0x2afu) = u8(r4);  // (from the original)
    *gptr<u8>(r1 + 0x2b0u) = u8(r4);  // (from the original)
    *gptr<u8>(r1 + 0x2b1u) = u8(r4);  // (from the original)
    *gptr<u8>(r1 + 0x2b2u) = u8(r4);  // (from the original)
    *gptr<u8>(r1 + 0x2b3u) = u8(r4);  // (from the original)
    *gptr<u8>(r1 + 0x2b4u) = u8(r4);  // (from the original)
    *gptr<u8>(r1 + 0x2b5u) = u8(r4);  // (from the original)
    *gptr<u8>(r1 + 0x2b6u) = u8(r4);  // (from the original)
    *gptr<u8>(r1 + 0x2b7u) = u8(r4);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00619044
GUEST_EXPORT(0x00619044, d_00619044::f_00619044);

// f_00619298: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00619298 {

inline constexpr guest::Function<0x00100b80, u32(u32, u32, u32, u32)> call_00100b80;  // (from the original)
inline constexpr guest::Function<0x00137e8c, u32(u32, u32, u32, u32)> call_00137e8c;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x0061f5e0, u32(u32, u32, u32, u32)> call_0061f5e0;  // (from the original)
inline constexpr guest::Function<0x00622158, u32(u32, u32, u32, u32)> call_00622158;  // (from the original)
inline constexpr guest::Function<0x00623c28, u32(u32, u32, u32, u32)> call_00623c28;  // (from the original)
inline constexpr guest::Function<0x0062ad20, u32(u32, u32, u32, u32)> call_0062ad20;  // (from the original)
inline constexpr guest::Function<0x0062b064, u32(u32, u32, u32, u32)> call_0062b064;  // (from the original)
inline constexpr guest::Function<0x0062c8cc, u32(u32, u32, u32, u32)> call_0062c8cc;  // (from the original)

u32 f_00619298(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    r0 = r0 + 0x13280u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    r0 = call_00137e8c(r0, r1, r2, r3);
    r0 = r0 - 0x4cu;  // (from the original)
    r2 = 0x2520u;  // (from the original)
    r1 = 0x100b80u;  // (from the original)
    r4 = r0 - 0x13234u;  // (from the original)
    r0 = r0 - 0x9480u;  // (from the original)
    r3 = 4u;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x7894u;  // (from the original)
    r0 = call_00100b80(r0, r1, r2, r3);
    r4 = r0 - 0xaa0u;  // (from the original)
    r1 = 0x62573cu;  // (from the original)
    r0 = r4;
    r3 = 0x20u;  // (from the original)
    r2 = 4u;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 - 0x4118u;  // (from the original)
    r0 = call_0062b064(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x3f0u;  // (from the original)
    r0 = call_0062c8cc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x14cu;  // (from the original)
    r0 = call_0061f5e0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x2564u;  // (from the original)
    r0 = call_00623c28(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x7cu;  // (from the original)
    r0 = call_00622158(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x110u;  // (from the original)
    r0 = call_0062ad20(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0xb0u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00619298
GUEST_EXPORT(0x00619298, d_00619298::f_00619298);

// f_0061a41c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061a41c {

inline constexpr guest::Function<0x005ce6dc, u32(u32, u32, u32, u32)> call_005ce6dc;  // (from the original)
inline constexpr guest::Function<0x0060b0b8, u32(u32, u32, u32, u32)> call_0060b0b8;  // (from the original)
inline constexpr guest::Function<0x00624b24, u32(u32, u32, u32, u32)> call_00624b24;  // (from the original)
inline constexpr guest::Function<0x00627f74, u32(u32, u32, u32, u32)> call_00627f74;  // (from the original)
inline constexpr guest::Function<0x0062801c, u32(u32, u32, u32, u32)> call_0062801c;  // (from the original)
inline constexpr guest::Function<0x0075dfe8, u32(u32, u32, u32, u32)> call_0075dfe8;  // (from the original)

u32 f_0061a41c(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = 0x95362cu;  // (from the original)
    r6 = 0u;
    r0 = u32(*gptr<u8>(*gptr<u32>(r5) + 0x54u));  // (from the original)
    if (r0 != 0) {
        goto L_61a498;
    }
    r0 = call_005ce6dc(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0) {
        goto L_61a498;
    }
    r0 = *gptr<u32>(r5);
    r1 = u32(*gptr<u8>(0x132b4u + r0));  // (from the original)
    if (r1 != 0) {
        goto L_61a498;
    }
    r1 = u32(*gptr<u8>(r4 + 0x27u));  // (from the original)
    if (r1 == 0) {
        goto L_61a498;
    }
    r0 = call_0075dfe8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_61a4b0;
    }
    r5 = *gptr<u32>(r5) + 0x10u;  // (from the original)
    r0 = r5;
    r0 = call_00627f74(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 0u;
    r1 = 0x1du;  // (from the original)
    r0 = r5;
    r0 = call_0062801c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
L_61a494:;
    *gptr<u8>(r4 + 0x27u) = u8(r6);  // (from the original)
L_61a498:;
    r0 = u32(*gptr<u8>(r4 + 0x2au));  // (from the original)
    if (r0 != 0) {
        r0 = call_0060b0b8(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        *gptr<u8>(r4 + 0x2au) = u8(r6);  // (from the original)
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_61a4b0:;
    r1 = 0u;
    r0 = r4 + 0x24u;  // (from the original)
    r0 = call_00624b24(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    *gptr<u8>(*gptr<u32>(r5) + 0x1b8u) = u8(r6);  // (from the original)
    guest::preempt();
    goto L_61a494;
}

}  // namespace d_0061a41c
GUEST_EXPORT(0x0061a41c, d_0061a41c::f_0061a41c);

// f_0061a684: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061a684 {


u32 f_0061a684(u32 r0, u32 r1, u32 r2) {
    if (r1 < 4u) {
        r0 = r0 + r1;
        *gptr<u8>(r0 + 8u) = u8(r2);
    }
    return r0;
}

}  // namespace d_0061a684
GUEST_EXPORT(0x0061a684, d_0061a684::f_0061a684);

// f_0061a6a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061a6a4 {

struct __attribute__((packed)) Object_0061a6a4_0 {
    u8 unknown_0[0x2];  // (not used here)
    u32 word_2;
    u8 unknown_6[0x6];  // (not used here)
    u8 byte_c;
    u8 byte_d;
    u32 word_e;
    u8 byte_12;
    u8 unknown_13[0x1];  // (not used here)
    u32 word_14;
    u8 byte_18;
    u8 byte_19;
};
GUEST_OFFSET(Object_0061a6a4_0, word_2, 0x2);  // (from the original)
GUEST_OFFSET(Object_0061a6a4_0, byte_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0061a6a4_0, byte_d, 0xd);  // (from the original)
GUEST_OFFSET(Object_0061a6a4_0, word_e, 0xe);  // (from the original)
GUEST_OFFSET(Object_0061a6a4_0, byte_12, 0x12);  // (from the original)
GUEST_OFFSET(Object_0061a6a4_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0061a6a4_0, byte_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0061a6a4_0, byte_19, 0x19);  // (from the original)

inline constexpr guest::Function<0x00624c68, u32(u32, u32, u32, u32)> call_00624c68;  // (from the original)

u32 f_0061a6a4(gptr<Object_0061a6a4_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r5 = 0u;
    r6 = 8u;
    arg0->word_2 = u32(r5);
    arg0->word_e = u32(r5);
    arg0->byte_c = u8(r5);
    arg0->byte_d = u8(r6);
    arg0->byte_12 = u8(r5);
    arg0->word_14 = u32(r5);
    r7 = 4u;
    arg0->byte_18 = u8(r6);
    r4 = r0;
    arg0->byte_19 = u8(r7);
    r0 = r0 + 6u;
    r0 = call_00624c68(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r4 + 6u;
    r0 = call_00624c68(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u8>(r4) = u8(r6);
    *gptr<u8>(r4 + 1u) = u8(r7);
    *gptr<u8>(r4 + 0x26u) = u8(r5);  // (from the original)
    *gptr<u32>(r4 + 0x1cu) = u32(r5);  // (from the original)
    r0 = r4 + 0x24u;  // (from the original)
    *gptr<u32>(r4 + 0x20u) = u32(r5);  // (from the original)
    r0 = call_00624c68(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u8>(r4 + 0x27u) = u8(r5);  // (from the original)
    *gptr<u8>(r4 + 0x28u) = u8(r5);  // (from the original)
    *gptr<u8>(r4 + 0x2au) = u8(r5);  // (from the original)
    *gptr<u8>(r4 + 0x2bu) = u8(r5);  // (from the original)
    *gptr<u8>(r4 + 0x2cu) = u8(r5);  // (from the original)
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    return r0;
}

}  // namespace d_0061a6a4
GUEST_EXPORT(0x0061a6a4, d_0061a6a4::f_0061a6a4);

// f_0061a71c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061a71c {

struct __attribute__((packed)) Object_0061a71c_0 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(Object_0061a71c_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0061a71c_0, byte_1, 0x1);  // (from the original)

inline constexpr guest::Function<0x00624c90, u32(u32, u32, u32, u32)> call_00624c90;  // (from the original)

u32 f_0061a71c(gptr<Object_0061a71c_0> arg0) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10;  // (from the original)
    r5 = 8u;
    r6 = 4u;
    arg0->byte_0 = u8(r5);
    arg0->byte_1 = u8(r6);
    r0 = r0 + 6u;
    guest::cpu()->r[13] = r13;
    r0 = call_00624c90(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r0 - 6u;
    r4 = 0u;
    ea = r0 + 0xcu;  // (from the original)
    *gptr<u8>(ea) = u8(r4);
    ea = r0 + 0x12u;  // (from the original)
    *gptr<u8>(ea) = u8(r4);
    ea = r0 + 0x14u;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    ea = r0 + 0x18u;  // (from the original)
    *gptr<u8>(ea) = u8(r5);
    ea = r0 + 0x19u;  // (from the original)
    *gptr<u8>(ea) = u8(r6);
    ea = r0 + 0x1cu;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    ea = r0 + 0x20u;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    r0 = ea + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00624c90(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r0 - 0x24u;  // (from the original)
    *gptr<u8>(r0 + 0x26u) = u8(r4);  // (from the original)
    *gptr<u8>(r0 + 0x27u) = u8(r4);  // (from the original)
    *gptr<u8>(r0 + 0x28u) = u8(r4);  // (from the original)
    *gptr<u8>(r0 + 0x29u) = u8(r4);  // (from the original)
    *gptr<u8>(r0 + 0x2au) = u8(r4);  // (from the original)
    *gptr<u8>(r0 + 0x2bu) = u8(r4);  // (from the original)
    *gptr<u8>(r0 + 0x2cu) = u8(r4);  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0061a71c
GUEST_EXPORT(0x0061a71c, d_0061a71c::f_0061a71c);

// f_0061a7a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061a7a0 {

inline constexpr guest::Function<0x0075de74, u32(u32, u32, u32, u32)> call_0075de74;  // (from the original)

u32 f_0061a7a0() {
    u32 r0 = 0;
    r0 = *gptr<u32>(0x95362cu);  // (from the original)
    return call_0075de74(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0061a7a0
GUEST_EXPORT(0x0061a7a0, d_0061a7a0::f_0061a7a0);

// f_0061a7b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061a7b0 {

inline constexpr guest::Function<0x006256d0, u32(u32, u32, u32, u32)> call_006256d0;  // (from the original)

u32 f_0061a7b0(u32 r0, u32 r1) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 8;
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_006256d0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = ~2u;
    r1 = ~0u;
    ea = r4 + 8u;
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0061a7b0
GUEST_EXPORT(0x0061a7b0, d_0061a7b0::f_0061a7b0);

// f_0061a7cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061a7cc {

struct __attribute__((packed)) Object_0061a7cc_0 {
    u32 word_0;
    u16 half_4;
    u16 half_6;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_0061a7cc_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0061a7cc_0, half_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0061a7cc_0, half_6, 0x6);  // (from the original)
GUEST_OFFSET(Object_0061a7cc_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0061a7cc_0, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Object_0061a7cc_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_0061a7cc_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0061a7cc_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Object_0061a7cc_2 {
    u32 word_0;
    u16 half_4;
    u16 half_6;
};
GUEST_OFFSET(Object_0061a7cc_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0061a7cc_2, half_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0061a7cc_2, half_6, 0x6);  // (from the original)


void f_0061a7cc(gptr<Object_0061a7cc_0> arg0, gptr<Object_0061a7cc_1> arg1, gptr<Object_0061a7cc_2> arg2) {
    u32 r1 = arg1.addr();
    u32 r2 = arg2.addr();
    arg0->word_0 = u32(arg2->word_0);
    arg0->half_4 = u16(u32(arg2->half_4));
    arg0->half_6 = u16(u32(arg2->half_6));
    r1 = arg1->word_0;
    r2 = arg1->word_4;
    arg0->word_8 = u32(r1);
    arg0->word_c = u32(r2);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_0061a7cc
GUEST_EXPORT(0x0061a7cc, d_0061a7cc::f_0061a7cc);

// f_0061a810: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061a810 {

inline constexpr guest::Function<0x00622fa0, u32(u32, u32, u32, u32)> call_00622fa0;  // (from the original)
inline constexpr guest::Function<0x00627d44, u32(u32, u32, u32, u32)> call_00627d44;  // (from the original)
inline constexpr guest::Function<0x00627f74, u32(u32, u32, u32, u32)> call_00627f74;  // (from the original)
inline constexpr guest::Function<0x0062801c, u32(u32, u32, u32, u32)> call_0062801c;  // (from the original)
inline constexpr guest::Function<0x0075dfe8, u32(u32, u32, u32, u32)> call_0075dfe8;  // (from the original)

u32 f_0061a810(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xffffffe0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    r4 = r0;
    r7 = 0x95362cu;  // (from the original)
    r0 = *gptr<u32>(r7);
    guest::cpu()->r[13] = r13;
    r0 = call_0075dfe8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_61a858;
    }
    r0 = r4 << 8;
    r8 = r13;
    r4 = 0x30u;  // (from the original)
    r5 = 0u;
    r6 = 2u;
    *gptr<u16>(r13) = u16(r0);
    if (0u == 0) {
        goto L_61a870;
    }
L_61a850:;
    r0 = 1u;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_61a858:;
    ea = r7;
    r0 = *gptr<u32>(ea);
    r1 = r4;
    ea = r13;
    r13 = r13 + 0x20;  // (from the original)
    r3 = *gptr<u32>(ea);
    r0 = r0 + 0x7880u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_00622fa0(r0, r1, r2, r3);
L_61a870:;
    r7 = *gptr<u32>(r7) + 0x10u;  // (from the original)
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_00627f74(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = r6;
    r1 = r8;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_00627d44(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = r5;
    r1 = r4;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_0062801c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    guest::preempt();
    goto L_61a850;
}

}  // namespace d_0061a810
GUEST_EXPORT(0x0061a810, d_0061a810::f_0061a810);

// f_0061d9bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061d9bc {

inline constexpr guest::Function<0x006a69c0, u32(u32, u32, u32, u32)> call_006a69c0;  // (from the original)
inline constexpr guest::Function<0x006c3e4c, u32(u32, u32, u32, u32)> call_006c3e4c;  // (from the original)

u32 f_0061d9bc() {
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = *gptr<u32>(0x95c6d0u);  // (from the original)
    r0 = r4;
    r0 = call_006c3e4c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    return call_006a69c0(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0061d9bc
GUEST_EXPORT(0x0061d9bc, d_0061d9bc::f_0061d9bc);

// f_0061d9e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061d9e0 {

inline constexpr guest::Function<0x005ce6dc, u32(u32, u32, u32, u32)> call_005ce6dc;  // (from the original)
inline constexpr guest::Function<0x00623894, u32(u32, u32, u32, u32)> call_00623894;  // (from the original)
inline constexpr guest::Function<0x0062390c, u32(u32, u32, u32, u32)> call_0062390c;  // (from the original)
inline constexpr guest::Function<0x0062468c, u32(u32, u32, u32, u32)> call_0062468c;  // (from the original)

u32 f_0061d9e0(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    r6 = 0x95362cu;  // (from the original)
    r0 = u32(*gptr<u8>(*gptr<u32>(r6) + 0x132b4u));  // (from the original)
    if (r0 == 0) {
        r0 = call_005ce6dc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0 == 0) {
            goto L_61da18;
        }
    }
    r0 = 1u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_61da18:;
    r0 = u32(*gptr<u8>(r5));
    r4 = 1u;
    if (r0 != 0x2bu) {  // (from the original)
        if (r0 != 0x37u) {  // (from the original)
            goto L_61da84;
        }
    } else {
        r1 = u32(*gptr<u8>(r5 + 3u));
        r0 = *gptr<u32>(r6) + 0x23cu;  // (from the original)
        r0 = call_00623894(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = u32(*gptr<u8>(r5 + 3u));
        if (r0 == 0) {
            r4 = 0u;
        }
        r0 = *gptr<u32>(r6) + 0x23cu;  // (from the original)
        r0 = call_0062390c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0 != 0) {
            goto L_61da84;
        }
        goto L_61da80;
    }
    r0 = call_0062468c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_61da84;
    }
L_61da80:;
    r4 = 0u;
L_61da84:;
    r0 = r4;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0061d9e0
GUEST_EXPORT(0x0061d9e0, d_0061d9e0::f_0061d9e0);

// f_0061dad0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061dad0 {

struct __attribute__((packed)) Object_0061dad0_0 {
    u8 unknown_0[0x4c];  // (not used here)
    u32 word_4c;
};
GUEST_OFFSET(Object_0061dad0_0, word_4c, 0x4c);  // (from the original)


void f_0061dad0(gptr<Object_0061dad0_0> arg0) {
    u32 r1 = 0;
    r1 = *gptr<u32>(0x87bd1cu);  // (from the original)
    arg0->word_4c = u32(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_0061dad0
GUEST_EXPORT(0x0061dad0, d_0061dad0::f_0061dad0);

// f_0061dae4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061dae4 {

inline constexpr guest::Function<0x0051d7f0, u32(u32, u32, u32, u32)> call_0051d7f0;  // (from the original)
inline constexpr guest::Function<0x005ce6dc, u32(u32, u32, u32, u32)> call_005ce6dc;  // (from the original)
inline constexpr guest::Function<0x0060b0b8, u32(u32, u32, u32, u32)> call_0060b0b8;  // (from the original)
inline constexpr guest::Function<0x00618164, u32(u32, u32, u32, u32)> call_00618164;  // (from the original)
inline constexpr guest::Function<0x00618fb0, u32(u32, u32, u32, u32)> call_00618fb0;  // (from the original)
inline constexpr guest::Function<0x0061f3f8, u32(u32, u32, u32, u32)> call_0061f3f8;  // (from the original)
inline constexpr guest::Function<0x006238d0, u32(u32, u32, u32, u32)> call_006238d0;  // (from the original)
inline constexpr guest::Function<0x00623948, u32(u32, u32, u32, u32)> call_00623948;  // (from the original)

u32 f_0061dae4(u32 r0, u32 r1) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 nf = 0;
    u32 zf = 0;
    u32 vf = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r4 = r0;
    r0 = call_005ce6dc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r7 = 0u;
    r5 = r4 + 0x100u;  // (from the original)
    if (r0 == 0) {
        r8 = 0x95362cu;  // (from the original)
        r0 = *gptr<u32>(r8);
        r1 = u32(*gptr<u8>(0x132b4u + r0));  // (from the original)
        if (r1 == 0) {
            goto L_61db28;
        }
    }
    r0 = u32(*gptr<u8>(r5 + 0x46u));  // (from the original)
    if (r0 == 0) {
        goto L_61dc24;
    }
    goto L_61dc14;
L_61db28:;
    r1 = u32(*gptr<u8>(r4));
    res = r1 - 0x43u;  // (from the original)
    nf = res >> 0x1f;  // (from the original)
    zf = res == 0;
    vf = ((r1 ^ 0x43u) & (r1 ^ res)) >> 0x1f;  // (from the original)
    if (zf) {
        goto L_61dbe8;
    }
    if (!(!zf && nf == vf)) {
        if (r1 == 0x2bu) {  // (from the original)
            goto L_61db6c;
        }
        if (r1 == 0x32u) {  // (from the original)
            goto L_61db90;
        }
        if (r1 == 0x37u) {  // (from the original)
            r0 = call_00618fb0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
        }
        goto L_61dc08;
    }
    zf = r1 == 0x55u;  // (from the original)
    if (!zf) {
        zf = r1 == 0x5eu;  // (from the original)
    }
    if (!zf) {
        goto L_61dc08;
    }
    goto L_61dbe8;
L_61db6c:;
    r1 = u32(*gptr<u8>(r4 + 3u));
    r0 = r0 + 0x23cu;  // (from the original)
    r0 = call_00623948(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = *gptr<u32>(r8);
    r0 = call_00618fb0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    goto L_61dc08;
L_61db90:;
    r1 = u32(*gptr<u8>(r4 + 3u));
    r0 = r0 + 0x23cu;  // (from the original)
    r0 = call_006238d0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r6 = u32(*gptr<u8>(r4 + 3u));
    if (r6 >= 4u) {
        goto L_61dc08;
    }
    r0 = *gptr<u32>(r8);
    r1 = r6;
    r0 = call_00618164(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = *gptr<u32>(r8);
    r1 = 4u;
    *gptr<u8>(r0 + 0x1e5u) = u8(r1);  // (from the original)
    *gptr<u8>(r0 + 0x3cu) = u8(r1);  // (from the original)
    *gptr<u8>(r0 + 0x54u) = u8(r7);  // (from the original)
    r0 = r6;
    r0 = call_0051d7f0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    r0 = call_0061f3f8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    goto L_61dc08;
L_61dbe8:;
    r0 = r4;
    r0 = call_0061f3f8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    *gptr<u8>(r4 + 0x13eu) = u8(r7);  // (from the original)
    *gptr<u8>(r4 + 0x13fu) = u8(r7);  // (from the original)
    *gptr<u8>(*gptr<u32>(r8) + 0x132b6u) = u8(r7);  // (from the original)
    *gptr<u8>(r4) = u8(r7);
L_61dc08:;
    r0 = u32(*gptr<u8>(r5 + 0x46u));  // (from the original)
    if (r0 == 0) {
        goto L_61dc24;
    }
L_61dc14:;
    r0 = call_0060b0b8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    *gptr<u8>(r4 + 0x146u) = u8(r7);  // (from the original)
    *gptr<u32>(r4 + 0x4cu) = u32(r7);  // (from the original)
L_61dc24:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0061dae4
GUEST_EXPORT(0x0061dae4, d_0061dae4::f_0061dae4);

// f_0061dc30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061dc30 {

inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> call_00300904;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> call_00305f44;  // (from the original)
inline constexpr guest::Function<0x00308340, u32(u32, u32, u32, u32)> call_00308340;  // (from the original)
inline constexpr guest::Function<0x00565cc0, u32(u32, u32, u32, u32)> call_00565cc0;  // (from the original)
inline constexpr guest::Function<0x005b5d38, u32(u32, u32, u32, u32)> call_005b5d38;  // (from the original)
inline constexpr guest::Function<0x006c39c4, u32(u32, u32, u32, u32)> call_006c39c4;  // (from the original)
inline constexpr guest::Function<0x006c3a58, u32(u32, u32, u32, u32)> call_006c3a58;  // (from the original)
inline constexpr guest::Function<0x006c3c00, u32(u32, u32, u32, u32)> call_006c3c00;  // (from the original)
inline constexpr guest::Function<0x006c4280, u32(u32, u32, u32, u32)> call_006c4280;  // (from the original)

u32 f_0061dc30(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2, float S3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x90u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0 = call_00305f44(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    r0 = r13 + 0x68u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0 = call_006c3a58(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    r1 = 0x3040fcu;  // (from the original)
    r3 = 4u;
    r2 = 0xcu;  // (from the original)
    r0 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0 = call_00301d0c(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    r1 = 0x567470u;  // (from the original)
    r3 = 4u;
    r2 = 2u;
    r0 = r13 + 0x60u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    r4 = r13 + 0x30u;  // (from the original)
    r6 = r13 + 0x60u;  // (from the original)
    r5 = 0u;
    do {
L_61dc78:;
        r1 = r5 & 0xffu;  // (from the original)
        r0 = r4;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        guest::cpu()->s[3] = S3;
        r0 = call_006c3c00(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S3 = std::bit_cast<float>(*gptr<u32>(r4 + 8u));
        S2 = std::bit_cast<float>(*gptr<u32>(r4));
        S1 = std::bit_cast<float>(*gptr<u32>(r13 + 0x70u)) - S3;  // (from the original)
        S0 = std::bit_cast<float>(*gptr<u32>(r13 + 0x68u)) - S2;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        guest::cpu()->s[3] = S3;
        r0 = call_00565cc0(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        S2 = guest::cpu()->s[2];
        S3 = guest::cpu()->s[3];
        r5 = r5 + 1u;
        res = r5 - 4u;
        r4 = r4 + 0xcu;  // (from the original)
        *gptr<u16>(r6) = u16(r0);
        r6 = r6 + 2u;
        guest::preempt();
    } while (res >> 0x1f != ((r5 ^ 4u) & (r5 ^ res)) >> 0x1f);  // (from the original)
    r0 = u32(s32(s8(*gptr<u8>(*gptr<u32>(0x95c6d0u) + 0x1cu))));  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0 = call_006c4280(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0 = call_006c39c4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    r5 = r0;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0 = call_00300904(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    r4 = r0 ^ 1u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0 = call_00308340(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    r1 = 1u;
    ea = r13 + 0x28u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    ea = r13 + 0x2cu;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    ea = r13 + 0x24u;  // (from the original)
    *gptr<u32>(ea) = u32(0u);
    ea = r13 + 0x18u;  // (from the original)
    *gptr<u32>(ea) = u32(r13 + 0x54u);  // (from the original)
    r6 = r13 + 0x30u;  // (from the original)
    ea = r13 + 0x20u;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    ea = r13 + 0x1cu;  // (from the original)
    *gptr<u32>(ea) = u32(r13 + 0x66u);  // (from the original)
    ea = r13 + 0x14u;  // (from the original)
    *gptr<u32>(ea) = u32(r13 + 0x64u);  // (from the original)
    r4 = r13 + 0x60u;  // (from the original)
    r8 = r13 + 0x3cu;  // (from the original)
    ea = r13;
    *gptr<u32>(ea) = u32(r6);
    ea = r13 + 4u;
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r8);
    r7 = r13 + 0x62u;  // (from the original)
    ea = r13 + 0xcu;  // (from the original)
    *gptr<u32>(ea) = u32(r7);
    *gptr<u32>(ea + 4) = u32(r13 + 0x48u);  // (from the original)
    r3 = *gptr<u32>(0x881b84u);  // (from the original)
    r2 = *gptr<u32>(0x881b48u);  // (from the original)
    r1 = r5;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0 = call_005b5d38(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r13 = r13 + 0x90u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_0061dc30
GUEST_EXPORT(0x0061dc30, d_0061dc30::f_0061dc30);

// f_0061de7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061de7c {

inline constexpr guest::Function<0x00305f2c, u32(u32, u32, u32, u32)> call_00305f2c;  // (from the original)
inline constexpr guest::Function<0x0061e11c, u32(u32, u32, u32, u32)> call_0061e11c;  // (from the original)
inline constexpr guest::Function<0x00627f74, u32(u32, u32, u32, u32)> call_00627f74;  // (from the original)
inline constexpr guest::Function<0x0062801c, u32(u32, u32, u32, u32)> call_0062801c;  // (from the original)
inline constexpr guest::Function<0x0075dfe8, u32(u32, u32, u32, u32)> call_0075dfe8;  // (from the original)

u32 f_0061de7c(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r0 = call_00305f2c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 2u) {
        goto L_61ded4;
    }
    r5 = 0x95362cu;  // (from the original)
    r0 = *gptr<u32>(r5);
    r0 = call_0075dfe8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        *gptr<u8>(r4) = u8(6u);
        goto L_61decc;
    }
    r4 = *gptr<u32>(r5) + 0x10u;  // (from the original)
    r0 = r4;
    r0 = call_00627f74(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 0u;
    r1 = 0x6au;  // (from the original)
    r0 = r4;
    r0 = call_0062801c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
L_61decc:;
    r0 = 1u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_61ded4:;
    r1 = 0u;
    r0 = r4;
    r0 = call_0061e11c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::preempt();
    goto L_61decc;
}

}  // namespace d_0061de7c
GUEST_EXPORT(0x0061de7c, d_0061de7c::f_0061de7c);

// f_0061df58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061df58 {

inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> call_00305f44;  // (from the original)
inline constexpr guest::Function<0x00623f34, u32(u32, u32, u32, u32)> call_00623f34;  // (from the original)
inline constexpr guest::Function<0x00624008, u32(u32, u32, u32, u32)> call_00624008;  // (from the original)
inline constexpr guest::Function<0x00624024, u32(u32, u32, u32, u32)> call_00624024;  // (from the original)
inline constexpr guest::Function<0x00624b60, u32(u32, u32, u32, u32)> call_00624b60;  // (from the original)
inline constexpr guest::Function<0x00624c78, u32(u32, u32, u32, u32)> call_00624c78;  // (from the original)
inline constexpr guest::Function<0x0070ab10, u32(u32, u32, u32, u32)> call_0070ab10;  // (from the original)
inline constexpr guest::Function<0x0075f4d4, u32(u32, u32, u32, u32)> call_0075f4d4;  // (from the original)

u32 f_0061df58(u32 r0, u32 r1, u32 r2) {
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
    r5 = r0;
    r13 = r13 - 0x30u;  // (from the original)
    r4 = r2;
    r0 = r0 + 5u;
    guest::cpu()->r[13] = r13;
    r0 = call_00624b60(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r4;
    r0 = r5 + 7u;
    guest::cpu()->r[13] = r13;
    r0 = call_00624b60(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r4 = u32(*gptr<u8>(r5 + 5u));
    r0 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_00624c78(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    if ((r0 & r4) == 0) {
        r7 = r5 + 5u;
    } else {
        r7 = r5 + 7u;
    }
    r0 = r5 + 0x70u;  // (from the original)
    r1 = u32(*gptr<u8>(r7));
    guest::cpu()->r[13] = r13;
    r0 = call_00624b60(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = u32(*gptr<u8>(r5 + 0x71u));  // (from the original)
    r11 = 0u;
    *gptr<u8>(r5 + 0x13cu) = u8(r0);  // (from the original)
    *gptr<u32>(r5 + 0x5cu) = u32(r11);  // (from the original)
    if (r0 == 0) {
        goto L_61e100;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_00305f44(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r4 = u32(*gptr<u8>(r5 + 5u));
    r10 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_00624c78(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    res = r0 & r4;
    r0 = res;
    if (res != 0) {
        r0 = 1u;
    }
    r9 = 4u;
    r4 = 0u;
    *gptr<u8>(r5 + 0x144u) = u8(r0);  // (from the original)
L_61dfdc:;
    r8 = r4 & 0xffu;  // (from the original)
    r6 = u32(*gptr<u8>(r7));
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_00624c78(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if ((r0 & r6) != 0) {
        r9 = r8;
    } else {
        r4 = r4 + 1u;
        if (s32(r4) < s32(4u)) {
            guest::preempt();
            goto L_61dfdc;
        }
    }
    r4 = 0x95362cu;  // (from the original)
    if (r9 == r10) {
        r0 = 1u;
    } else {
        r0 = 0u;
    }
    *gptr<u8>(r5 + 0x13du) = u8(r0);  // (from the original)
    if (r0 == 0) {
        goto L_61e058;
    }
    r0 = *gptr<u32>(0x9529ccu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0070ab10(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
L_61e034:;
    *gptr<u32>(r5 + 0x5cu) = u32(r0);  // (from the original)
L_61e038:;
    r0 = *gptr<u32>(r4);
    r10 = r0 + 0xb0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00305f44(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r9 = r0;
    if (r0 >= 4u) {
        goto L_61e0f8;
    } else {
        r4 = 0u;
    }
    goto L_61e078;
L_61e058:;
    r1 = r9;
    r0 = *gptr<u32>(r4) + 0xb0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0075f4d4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0) {
        r0 = *gptr<u32>(r0);
        guest::preempt();
        goto L_61e034;
    }
    guest::preempt();
    goto L_61e038;
L_61e078:;
    r8 = r5 + (r4 << 2);
    r7 = r4 & 0xffu;  // (from the original)
    *gptr<u32>(r8 + 0x60u) = u32(r11);  // (from the original)
    r6 = u32(*gptr<u8>(r5 + 0x70u));  // (from the original)
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_00624c78(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if ((r0 & r6) == 0) {
        goto L_61e0ec;
    }
    if (r7 == r9) {
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_00624008(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_00623f34(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        *gptr<u32>(r8 + 0x60u) = u32(*gptr<u32>(r13));  // (from the original)
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_00624024(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        goto L_61e0ec;
    }
    r1 = r7;
    r0 = r10;
    guest::cpu()->r[13] = r13;
    r0 = call_0075f4d4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0) {
        r0 = *gptr<u32>(r0);
        *gptr<u32>(r8 + 0x60u) = u32(r0);  // (from the original)
    }
L_61e0ec:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(4u)) {
        guest::preempt();
        goto L_61e078;
    }
L_61e0f8:;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_61e100:;
    r0 = 1u;
    *gptr<u8>(r5 + 0x144u) = u8(r0);  // (from the original)
    *gptr<u8>(r5 + 0x13du) = u8(r11);  // (from the original)
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0061df58
GUEST_EXPORT(0x0061df58, d_0061df58::f_0061df58);

// f_0061e488: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061e488 {

struct __attribute__((packed)) Object_0061e488_0 {
    u8 byte_0;
    u8 unknown_1[0x2];  // (not used here)
    u8 byte_3;
};
GUEST_OFFSET(Object_0061e488_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0061e488_0, byte_3, 0x3);  // (from the original)

inline constexpr guest::Function<0x00621684, u32(u32, u32, u32, u32)> call_00621684;  // (from the original)
inline constexpr guest::Function<0x00623984, u32(u32, u32, u32, u32)> call_00623984;  // (from the original)
inline constexpr guest::Function<0x00624b24, u32(u32, u32, u32, u32)> call_00624b24;  // (from the original)

u32 f_0061e488(gptr<Object_0061e488_0> arg0, u32 r1_unused, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r6 = 0x95362cu;  // (from the original)
    r1 = u32(arg0->byte_0);
    r0 = *gptr<u32>(r6);
    if (r1 == 0x2eu) {  // (from the original)
        goto L_61e4f8;
    }
    if (r1 == 0x39u) {  // (from the original)
        goto L_61e528;
    }
    if (r1 != 0x5au) {  // (from the original)
        goto L_61e4f4;
    }
    r5 = u32(arg0->byte_3);
    *gptr<u8>(r0 + 0x3cu) = u8(r5);  // (from the original)
    r1 = r5;
    r0 = r0 + 0x1c0u;  // (from the original)
    r0 = call_00621684(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r5;
    r0 = *gptr<u32>(r6) + 0x13270u;  // (from the original)
    r0 = call_00624b24(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r5;
    r0 = *gptr<u32>(r6) + 0x23cu;  // (from the original)
    r0 = call_00623984(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = 0x5bu;  // (from the original)
L_61e4f0:;
    *gptr<u8>(r4) = u8(r0);
L_61e4f4:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_61e4f8:;
    r5 = u32(*gptr<u8>(r4 + 3u));
    *gptr<u8>(r0 + 0x3cu) = u8(r5);  // (from the original)
    r1 = r5;
    r0 = r0 + 0x1c0u;  // (from the original)
    r0 = call_00621684(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r5;
    r0 = *gptr<u32>(r6) + 0x23cu;  // (from the original)
    r0 = call_00623984(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = 0x2fu;  // (from the original)
    guest::preempt();
    goto L_61e4f0;
L_61e528:;
    r1 = 0x3au;  // (from the original)
    *gptr<u8>(r0 + 0x54u) = u8(1u);  // (from the original)
    *gptr<u8>(r4) = u8(r1);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0061e488
GUEST_EXPORT(0x0061e488, d_0061e488::f_0061e488);

// f_0061e574: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061e574 {

inline constexpr guest::Function<0x001148c5, u32(u32, u32, u32, u32)> call_001148c4;  // (from the original)
inline constexpr guest::Function<0x00282c78, u32(u32, u32, u32, u32)> call_00282c78;  // (from the original)
inline constexpr guest::Function<0x00282d6c, u32(u32, u32, u32, u32)> call_00282d6c;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x002fd068, u32(u32, u32, u32, u32)> call_002fd068;  // (from the original)
inline constexpr guest::Function<0x00303660, u32(u32, u32, u32, u32)> call_00303660;  // (from the original)
inline constexpr guest::Function<0x00305f2c, u32(u32, u32, u32, u32)> call_00305f2c;  // (from the original)
inline constexpr guest::Function<0x00308340, u32(u32, u32, u32, u32)> call_00308340;  // (from the original)
inline constexpr guest::Function<0x0030b6c4, u32(u32, u32, u32, u32)> call_0030b6c4;  // (from the original)
inline constexpr guest::Function<0x005b4d04, u32(u32, u32, u32, u32)> call_005b4d04;  // (from the original)
inline constexpr guest::Function<0x005c5bb8, u32(u32, u32, u32, u32)> call_005c5bb8;  // (from the original)
inline constexpr guest::Function<0x0061dc30, u32(u32, u32, u32, u32)> call_0061dc30;  // (from the original)
inline constexpr guest::Function<0x0061f3f8, u32(u32, u32, u32, u32)> call_0061f3f8;  // (from the original)
inline constexpr guest::Function<0x006b7380, u32(u32, u32, u32, u32)> call_006b7380;  // (from the original)
inline constexpr guest::Function<0x006b8cb8, u32(u32, u32, u32, u32)> call_006b8cb8;  // (from the original)
inline constexpr guest::Function<0x006bced4, u32(u32, u32, u32, u32)> call_006bced4;  // (from the original)
inline constexpr guest::Function<0x006e08b4, u32(u32, u32, u32, u32)> call_006e08b4;  // (from the original)

u32 f_0061e574(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_00305f2c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 2u) {
        r0 = u32(*gptr<u8>(r4 + 0x144u));  // (from the original)
        if (r0 == 0) {
            goto L_61e630;
        }
    }
    guest::cpu()->r[13] = r13;
    r0 = call_00282d6c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = 2u;
    guest::cpu()->r[13] = r13;
    r0 = call_006e08b4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_002fb94c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    if (r0 != 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_006bced4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r5 = r0;
        r0 = r4 + 0x6b8cu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00303660(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r0;
        guest::cpu()->r[13] = r13;
        r0 = call_002fd068(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_006b8cb8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0 = call_002fd068(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_006b7380(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    guest::cpu()->r[13] = r13;
    r0 = call_005c5bb8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_001148c4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_0061dc30(r0, r1, r2, r3);
    goto L_61e674;
L_61e630:;
    guest::cpu()->r[13] = r13;
    r0 = call_00282c78(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_00308340(r0, r1, r2, r3);
    r1 = 1u;
    r3 = r1;
    r2 = 0u;
    *gptr<u32>(r13) = u32(r1);
    r1 = r2;
    guest::cpu()->r[13] = r13;
    r0 = call_005b4d04(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_0030b6c4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_0061f3f8(r0, r1, r2, r3);
    }
L_61e674:;
    r1 = 0u;
    r0 = *gptr<u32>(0x95362cu) + 0x13000u;  // (from the original)
    *gptr<u8>(r0 + 0x2b6u) = u8(r1);  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0061e574
GUEST_EXPORT(0x0061e574, d_0061e574::f_0061e574);

// f_0061e690: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061e690 {

inline constexpr guest::Function<0x00617840, u32(u32, u32, u32, u32)> call_00617840;  // (from the original)
inline constexpr guest::Function<0x00624f00, u32(u32, u32, u32, u32)> call_00624f00;  // (from the original)
inline constexpr guest::Function<0x00626328, u32(u32, u32, u32, u32)> call_00626328;  // (from the original)

u32 f_0061e690(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r13 = r13 - 0x30u;  // (from the original)
    r6 = r1;
    r0 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_00626328(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_61e720;
    }
    r9 = 0x95362cu;  // (from the original)
    *gptr<u8>(r4 + 0x141u) = u8(1u);  // (from the original)
    r4 = 0u;
    r7 = r4;
    r8 = 0x14u;  // (from the original)
L_61e6c8:;
    res = r4 & 0xffu;  // (from the original)
    r5 = res;
    if (res == 0) {
        goto L_61e710;
    }
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00624f00(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        if (r6 != r5) {
            goto L_61e710;
        }
    }
    *gptr<u32>(r13 + 8u) = u32(r7);
    *gptr<u32>(r13 + 0xcu) = u32(r7);  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(r7);  // (from the original)
    r3 = 0u;
    *gptr<u32>(r13) = u32(r7);
    *gptr<u32>(r13 + 4) = u32(r8);
    r0 = *gptr<u32>(r9);
    r2 = r3;
    r1 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00617840(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_61e710:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(4u)) {
        guest::preempt();
        goto L_61e6c8;
    }
    r0 = 1u;
L_61e720:;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0061e690
GUEST_EXPORT(0x0061e690, d_0061e690::f_0061e690);

// f_0061e72c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061e72c {

inline constexpr guest::Function<0x00308340, u32(u32, u32, u32, u32)> call_00308340;  // (from the original)
inline constexpr guest::Function<0x005b4d7c, u32(u32, u32, u32, u32)> call_005b4d7c;  // (from the original)
inline constexpr guest::Function<0x006c3be4, u32(u32, u32, u32, u32)> call_006c3be4;  // (from the original)
inline constexpr guest::Function<0x006c4280, u32(u32, u32, u32, u32)> call_006c4280;  // (from the original)

u32 f_0061e72c(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10u;  // (from the original)
    r0 = u32(s32(s8(*gptr<u8>(*gptr<u32>(0x95c6d0u) + 0x1cu))));  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006c4280(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_006c3be4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_00308340(r0, r1, r2, r3);
    r1 = 1u;
    r3 = r1;
    r2 = r1;
    *gptr<u32>(r13) = u32(r1);
    *gptr<u32>(r13 + 4u) = u32(r1);
    r1 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_005b4d7c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0061e72c
GUEST_EXPORT(0x0061e72c, d_0061e72c::f_0061e72c);

// f_0061eb20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061eb20 {

inline constexpr guest::Function<0x002d57f4, u32(u32, u32, u32, u32)> call_002d57f4;  // (from the original)
inline constexpr guest::Function<0x00305f2c, u32(u32, u32, u32, u32)> call_00305f2c;  // (from the original)
inline constexpr guest::Function<0x00308340, u32(u32, u32, u32, u32)> call_00308340;  // (from the original)
inline constexpr guest::Function<0x00565c34, u32(u32, u32, u32, u32)> call_00565c34;  // (from the original)
inline constexpr guest::Function<0x005b5068, u32(u32, u32, u32, u32)> call_005b5068;  // (from the original)
inline constexpr guest::Function<0x005b5b78, u32(u32, u32, u32, u32)> call_005b5b78;  // (from the original)
inline constexpr guest::Function<0x005b5d60, u32(u32, u32, u32, u32)> call_005b5d60;  // (from the original)
inline constexpr guest::Function<0x005c4234, u32(u32, u32, u32, u32)> call_005c4234;  // (from the original)
inline constexpr guest::Function<0x005c6580, u32(u32, u32, u32, u32)> call_005c6580;  // (from the original)

u32 f_0061eb20(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    float S0 = 0;
    float S1 = 0;
    float S2 = 0;
    r13 = r13 - 0x60u;  // (from the original)
    r0 = r13 + 0x38u;  // (from the original)
    S2 = std::bit_cast<float>(*gptr<u32>(0x61ec60u));  // (from the original)
    S1 = std::bit_cast<float>(*gptr<u32>(0x61ec64u));  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x61ec68u));  // (from the original)
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r0 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r0 + 8) = u32(std::bit_cast<u32>(S2));
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_00308340(r0, r1, r2, r3);
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
    r0 = call_005b5068(r0, r1, r2, r3);
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
    r0 = call_00305f2c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    r7 = 0x881b58u;  // (from the original)
    r5 = 0u;
    r4 = r13 + 0x38u;  // (from the original)
    r6 = 1u;
    if (r0 == 2u) {
        goto L_61ebf0;
    }
    r0 = 0u;
    *gptr<u16>(r13 + 0x44u) = u16(r0);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_00308340(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    r2 = 0xa22014u;  // (from the original)
    ea = r13 + 0x28u;  // (from the original)
    *gptr<u32>(ea) = u32(r5);
    ea = r13 + 0x2cu;  // (from the original)
    *gptr<u32>(ea) = u32(r5);
    *gptr<u32>(ea + 4) = u32(r6);
    r1 = r13 + 0x44u;  // (from the original)
    ea = r13 + 0x34u;  // (from the original)
    *gptr<u32>(ea) = u32(r6);
    ea = r13 + 0x1cu;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(r2);
    r3 = r2 - 0xcu;  // (from the original)
    ea = r13 + 0x24u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    ea = r13 + 8u;
    *gptr<u32>(ea) = u32(r4);
    ea = r13 + 0xcu;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(r3 - 0xcu);  // (from the original)
    ea = r13 + 0x14u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(r3);
    r2 = *gptr<u32>(0x881b84u);  // (from the original)
    *gptr<u32>(r13) = u32(*gptr<u32>(0x881b48u));  // (from the original)
    *gptr<u32>(r13 + 4) = u32(r2);
    r2 = *gptr<u32>(r7);
    r3 = *gptr<u32>(0x881b44u);  // (from the original)
    r1 = 0x67u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_005b5d60(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    r0 = 0x95bfdcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_005c4234(r0, r1, r2, r3);
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
    r0 = call_005c6580(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
L_61ebe0:;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_002d57f4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r13 = r13 + 0x60u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
L_61ebf0:;
    r0 = r13 + 0x38u;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r0));
    S1 = std::bit_cast<float>(*gptr<u32>(r0 + 4));
    S2 = std::bit_cast<float>(*gptr<u32>(r0 + 8));
    r0 = r13 + 0x1cu;  // (from the original)
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r0 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r0 + 8) = u32(std::bit_cast<u32>(S2));
    S0 = std::bit_cast<float>(*gptr<u32>(0x61ec84u));  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_00565c34(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S2 = guest::cpu()->s[2];
    S1 = std::bit_cast<float>(*gptr<u32>(r13 + 0x1cu));  // (from the original)
    r2 = 0u;
    r4 = r13 + 0x14u;  // (from the original)
    S0 = S0 + S1;
    *gptr<u32>(r13 + 0x1cu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u16>(r13 + 0x14u) = u16(r2);  // (from the original)
    *gptr<u16>(r13 + 0x16u) = u16(r2);  // (from the original)
    *gptr<u16>(r13 + 0x18u) = u16(r2);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_00308340(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    ea = r13 + 4u;
    *gptr<u32>(ea) = u32(r5);
    ea = r13 + 8u;
    *gptr<u32>(ea) = u32(r5);
    *gptr<u32>(ea + 4) = u32(r6);
    r3 = r4;
    *gptr<u32>(r13 + 0x10u) = u32(r6);  // (from the original)
    r2 = r13 + 0x1cu;  // (from the original)
    *gptr<u32>(r13) = u32(*gptr<u32>(r7));
    r1 = 0x67u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_005b5b78(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    guest::preempt();
    goto L_61ebe0;
}

}  // namespace d_0061eb20
GUEST_EXPORT(0x0061eb20, d_0061eb20::f_0061eb20);

// f_0061ec88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061ec88 {

inline constexpr guest::Function<0x0030b6c4, u32(u32, u32, u32, u32)> call_0030b6c4;  // (from the original)
inline constexpr guest::Function<0x0058d3b4, u32(u32, u32, u32, u32)> call_0058d3b4;  // (from the original)
inline constexpr guest::Function<0x00623e70, u32(u32, u32, u32, u32)> call_00623e70;  // (from the original)
inline constexpr guest::Function<0x00624c68, u32(u32, u32, u32, u32)> call_00624c68;  // (from the original)
inline constexpr guest::Function<0x00624c78, u32(u32, u32, u32, u32)> call_00624c78;  // (from the original)
inline constexpr guest::Function<0x0075dfe8, u32(u32, u32, u32, u32)> call_0075dfe8;  // (from the original)

u32 f_0061ec88(u32 r0, u32 r1, u32 r2, float S0) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r0 = *gptr<u32>(0x95362cu);  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_0075dfe8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    r5 = r0;
    r6 = 0u;
    r0 = r4 + 0x18u;  // (from the original)
    *gptr<u8>(r4 + 0x141u) = u8(r6);  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_00624c68(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    r0 = r4 + 0x28u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_00624c68(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    r0 = r4 + 0x30u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_00624c68(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    r0 = 2u;
    *gptr<u8>(r4 + 1u) = u8(r0);
    guest::cpu()->s[0] = S0;
    r0 = call_0030b6c4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    if (r0 == 0) {
        r0 = 0x4au;  // (from the original)
        *gptr<u8>(r4 + 0x145u) = u8(r6);  // (from the original)
        goto L_61ecf0;
    }
    r2 = 0u;
    r1 = r5;
    r0 = r4 + 0x14u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_00623e70(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    r0 = 0x45u;  // (from the original)
L_61ecf0:;
    *gptr<u8>(r4) = u8(r0);
    r4 = u32(*gptr<u8>(r4 + 5u));
    r0 = r5;
    guest::cpu()->s[0] = S0;
    r0 = call_00624c78(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    if ((r0 & r4) != 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        r0 = 0x10004afu;  // (from the original)
        S0 = std::bit_cast<float>(*gptr<u32>(0x61ed20u));  // (from the original)
        guest::cpu()->s[0] = S0;
        return call_0058d3b4(r0, r1, r2, guest::cpu()->r[3]);
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_0061ec88
GUEST_EXPORT(0x0061ec88, d_0061ec88::f_0061ec88);

// f_0061ee60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061ee60 {

struct __attribute__((packed)) Object_0061ee60_0 {
    u8 unknown_0[0x50];  // (not used here)
    u32 word_50;
};
GUEST_OFFSET(Object_0061ee60_0, word_50, 0x50);  // (from the original)


void f_0061ee60(gptr<Object_0061ee60_0> arg0) {
    u32 r1 = 0;
    r1 = arg0->word_50;
    if (u32(r1 >= 0x96u) && !u32(r1 == 0x96u)) {  // (from the original)
        r1 = 0x96u;  // (from the original)
    }
    arg0->word_50 = u32(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_0061ee60
GUEST_EXPORT(0x0061ee60, d_0061ee60::f_0061ee60);

// f_0061f2a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061f2a0 {

inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> call_00300904;  // (from the original)
inline constexpr guest::Function<0x00305f2c, u32(u32, u32, u32, u32)> call_00305f2c;  // (from the original)
inline constexpr guest::Function<0x00618b9c, u32(u32, u32, u32, u32)> call_00618b9c;  // (from the original)

u32 f_0061f2a0(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = call_00300904(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 == 0) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = call_00305f2c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 != 2u) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    if (u32(*gptr<u8>(r4)) == 0) {
        r0 = *gptr<u32>(0x95362cu);  // (from the original)
        guest::cpu()->r[13] += 8u;
        return call_00618b9c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r0 = 0u;
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_0061f2a0
GUEST_EXPORT(0x0061f2a0, d_0061f2a0::f_0061f2a0);

// f_0061f3f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061f3f8 {

struct __attribute__((packed)) Object_0061f3f8_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_0061f3f8_0, byte_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x00624c68, u32(u32, u32, u32, u32)> call_00624c68;  // (from the original)

u32 f_0061f3f8(gptr<Object_0061f3f8_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = 0u;
    arg0->byte_0 = u8(r5);
    r0 = r0 + 0x18u;  // (from the original)
    r0 = call_00624c68(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x20u;  // (from the original)
    r0 = call_00624c68(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x28u;  // (from the original)
    r0 = call_00624c68(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x30u;  // (from the original)
    r0 = call_00624c68(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0xffu;  // (from the original)
    r0 = 4u;
    *gptr<u8>(r4 + 2u) = u8(r1);
    *gptr<u8>(r4 + 3u) = u8(r0);
    *gptr<u8>(r4 + 4u) = u8(r0);
    r0 = r4 + 5u;
    r0 = call_00624c68(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 7u;
    r0 = call_00624c68(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x10u;  // (from the original)
    r0 = call_00624c68(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x38u;  // (from the original)
    r0 = call_00624c68(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x40u;  // (from the original)
    r0 = call_00624c68(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    *gptr<u8>(r4 + 0x44u) = u8(3u);  // (from the original)
    *gptr<u8>(r4 + 0x140u) = u8(r5);  // (from the original)
    *gptr<u8>(r4 + 0x141u) = u8(r5);  // (from the original)
    *gptr<u8>(r4 + 0x142u) = u8(r5);  // (from the original)
    *gptr<u32>(r4 + 0x60u) = u32(r5);  // (from the original)
    *gptr<u32>(r4 + 0x64u) = u32(r5);  // (from the original)
    *gptr<u32>(r4 + 0x68u) = u32(r5);  // (from the original)
    r0 = r4 + 0x70u;  // (from the original)
    *gptr<u32>(r4 + 0x6cu) = u32(r5);  // (from the original)
    r0 = call_00624c68(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    *gptr<u8>(r4 + 0x146u) = u8(r5);  // (from the original)
    r0 = 0x13au;  // (from the original)
    *gptr<u32>(r4 + 0x4cu) = u32(r5);  // (from the original)
    *gptr<u32>(r4 + 0x50u) = u32(r5);  // (from the original)
    *gptr<u32>(r4 + 0x58u) = u32(r5);  // (from the original)
    *gptr<u32>(r4 + 0x5cu) = u32(r5);  // (from the original)
    *gptr<u16>(r0 + r4) = u16(r5);
    *gptr<u8>(r4 + 0x13du) = u8(r5);  // (from the original)
    *gptr<u8>(r4 + 0x13eu) = u8(r5);  // (from the original)
    *gptr<u8>(r4 + 0x13fu) = u8(r5);  // (from the original)
    *gptr<u8>(r4 + 0x147u) = u8(r5);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0061f3f8
GUEST_EXPORT(0x0061f3f8, d_0061f3f8::f_0061f3f8);

// f_0061f4c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061f4c0 {

struct __attribute__((packed)) Object_0061f4c0_0 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
    u8 byte_4;
};
GUEST_OFFSET(Object_0061f4c0_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0061f4c0_0, byte_1, 0x1);  // (from the original)
GUEST_OFFSET(Object_0061f4c0_0, byte_2, 0x2);  // (from the original)
GUEST_OFFSET(Object_0061f4c0_0, byte_3, 0x3);  // (from the original)
GUEST_OFFSET(Object_0061f4c0_0, byte_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x00624c90, u32(u32, u32, u32, u32)> call_00624c90;  // (from the original)

u32 f_0061f4c0(gptr<Object_0061f4c0_0> arg0) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10;  // (from the original)
    r5 = 0u;
    r3 = 2u;
    arg0->byte_0 = u8(r5);
    r2 = 0xffu;  // (from the original)
    arg0->byte_1 = u8(r3);
    r1 = 4u;
    arg0->byte_2 = u8(r2);
    arg0->byte_3 = u8(r1);
    arg0->byte_4 = u8(r1);
    r0 = r0 + 5u;
    guest::cpu()->r[13] = r13;
    r0 = call_00624c90(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 2u;
    guest::cpu()->r[13] = r13;
    r0 = call_00624c90(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 9u;
    guest::cpu()->r[13] = r13;
    r0 = call_00624c90(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0x90ac18u;  // (from the original)
    *gptr<u32>(r0 - 4u) = u32(r4);
    r0 = r0 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_00624c90(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r0 - 4u) = u32(r4);
    r0 = r0 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_00624c90(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r0 - 4u) = u32(r4);
    r0 = r0 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_00624c90(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r0 - 4u) = u32(r4);
    r0 = r0 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_00624c90(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r0 - 4u) = u32(r4);
    r0 = r0 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_00624c90(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r0 - 4u) = u32(r4);
    r0 = r0 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_00624c90(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    ea = r0 - 4u;
    *gptr<u32>(ea) = u32(r4);
    r0 = ea - 0x3cu;  // (from the original)
    r1 = 3u;
    ea = r0 + 0x44u;  // (from the original)
    *gptr<u8>(ea) = u8(r1);
    ea = r0 + 0x48u;  // (from the original)
    *gptr<u32>(ea) = u32(r5);
    ea = r0 + 0x4cu;  // (from the original)
    *gptr<u32>(ea) = u32(r5);
    ea = r0 + 0x50u;  // (from the original)
    *gptr<u32>(ea) = u32(r5);
    ea = r0 + 0x54u;  // (from the original)
    *gptr<u32>(ea) = u32(r5);
    ea = r0 + 0x58u;  // (from the original)
    *gptr<u32>(ea) = u32(r5);
    ea = r0 + 0x5cu;  // (from the original)
    *gptr<u32>(ea) = u32(r5);
    r0 = ea + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00624c90(r0, r1, r2, r3);
    r1 = 0x29b870u;  // (from the original)
    r3 = 4u;
    r2 = 0x32u;  // (from the original)
    r0 = r0 + 2u;
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = 0x13au;  // (from the original)
    r0 = r0 - 0x72u;  // (from the original)
    *gptr<u16>(r1 + r0) = u16(r5);
    *gptr<u8>(r0 + 0x13cu) = u8(r5);  // (from the original)
    *gptr<u8>(r0 + 0x13du) = u8(r5);  // (from the original)
    *gptr<u8>(r0 + 0x13eu) = u8(r5);  // (from the original)
    *gptr<u8>(r0 + 0x13fu) = u8(r5);  // (from the original)
    *gptr<u8>(r0 + 0x140u) = u8(r5);  // (from the original)
    *gptr<u8>(r0 + 0x141u) = u8(r5);  // (from the original)
    *gptr<u8>(r0 + 0x142u) = u8(r5);  // (from the original)
    *gptr<u8>(r0 + 0x143u) = u8(r5);  // (from the original)
    *gptr<u8>(r0 + 0x144u) = u8(r5);  // (from the original)
    *gptr<u8>(r0 + 0x145u) = u8(r5);  // (from the original)
    *gptr<u8>(r0 + 0x146u) = u8(r5);  // (from the original)
    *gptr<u8>(r0 + 0x147u) = u8(r5);  // (from the original)
    *gptr<u8>(r0 + 0x148u) = u8(r5);  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0061f4c0
GUEST_EXPORT(0x0061f4c0, d_0061f4c0::f_0061f4c0);

// f_0061f608: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061f608 {

struct __attribute__((packed)) Object_0061f608_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_0061f608_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0061f608_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0061f608_0, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Object_0061f608_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_0061f608_1, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x0050d1b4, u32(u32, u32, u32, u32)> call_0050d1b4;  // (from the original)
inline constexpr guest::Function<0x0061f6a0, u32(u32, u32, u32, u32)> call_0061f6a0;  // (from the original)
inline constexpr guest::Function<0x00746efc, u32(u32, u32, u32, u32)> call_00746efc;  // (from the original)
inline constexpr guest::Function<0x00746f8c, u32(u32, u32, u32, u32)> call_00746f8c;  // (from the original)

u32 f_0061f608(gptr<Object_0061f608_0> arg0, gptr<Object_0061f608_1> arg1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 zf = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r0 = arg1->word_0;
    r5 = r1;
    r6 = r2;
    zf = r0 == 0;
    if (!zf) {
        r1 = arg0->word_0;
        zf = r1 == r0;
    }
    if (zf) {
        goto L_61f694;
    }
    r1 = arg0->word_4;
    zf = r1 == r0;
    if (!zf) {
        r1 = arg0->word_8;
        zf = r1 == r0;
    }
    if (zf) {
        goto L_61f694;
    }
    r0 = 0xa22020u;  // (from the original)
    r0 = call_00746f8c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0) {
        r0 = 0xa22020u;  // (from the original)
        r0 = call_00746efc(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0 >= 2u) {
            r0 = 0u;
            goto L_61f690;
        }
    }
    r0 = 0xa22020u;  // (from the original)
    r2 = r6;
    r1 = r5;
    r0 = call_0050d1b4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_61f690;
    }
    r1 = r5;
    r0 = r4;
    r0 = call_0061f6a0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
L_61f690:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_61f694:;
    r0 = 1u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0061f608
GUEST_EXPORT(0x0061f608, d_0061f608::f_0061f608);

// f_0061f6a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061f6a0 {

struct __attribute__((packed)) Object_0061f6a0_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_0061f6a0_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0061f6a0_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0061f6a0_0, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Object_0061f6a0_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_0061f6a0_1, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> call_00305f44;  // (from the original)
inline constexpr guest::Function<0x0075f4d4, u32(u32, u32, u32, u32)> call_0075f4d4;  // (from the original)

u32 f_0061f6a0(gptr<Object_0061f6a0_0> arg0, gptr<Object_0061f6a0_1> arg1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    *gptr<u32>(r13 + 0xffffffd8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x28;  // (from the original)
    r7 = r0;
    r8 = r1;
    r0 = arg1->word_0;
    if (r0 == 0) {
        goto L_61f7b8;
    }
    r1 = arg0->word_0;
    r10 = 0u;
    zf = r1 == r0;
    if (!zf) {
        r2 = arg0->word_4;
        zf = r2 == r0;
    }
    if (zf) {
        goto L_61f7b8;
    }
    r3 = arg0->word_8;
    r11 = 2u;
    if (r3 == r0) {
        goto L_61f7b8;
    }
    if (r1 == 0) {
        goto L_61f7b0;
    }
    if (r2 == 0) {
        goto L_61f7bc;
    }
    if (r3 == 0) {
        goto L_61f7ac;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_00305f44(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 >= 4u) {
        goto L_61f788;
    }
    r9 = 0x88f298u;  // (from the original)
    r6 = 0u;
    *gptr<u32>(r13) = u32(*gptr<u32>(0x95362cu) + 0xb0u);  // (from the original)
L_61f71c:;
    r5 = *gptr<u32>(r7 + (r6 << 2));
    if (r5 == 0) {
        goto L_61f788;
    } else {
        r4 = 0u;
    }
L_61f72c:;
    r0 = *gptr<u32>(r13);
    r1 = r4 & 0xffu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0075f4d4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    zf = r0 == 0;
    if (!zf) {
        r1 = *gptr<u32>(r0);
        zf = r1 == 0;
    }
    if (zf) {
        goto L_61f778;
    }
    r2 = u32(*gptr<u16>(r0 + 4u));
    r3 = u32(*gptr<u16>(r9));
    zf = r2 == r3;
    if (!zf) {
        zf = u32(*gptr<u16>(r0 + 6u)) == 0;
    }
    if (zf) {
        goto L_61f778;
    }
    if (r1 != r5) {
        goto L_61f778;
    }
    r6 = r6 + 1u;
    if (r6 < 3u) {
        guest::preempt();
        goto L_61f71c;
    }
    goto L_61f788;
L_61f778:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(4u)) {
        guest::preempt();
        goto L_61f72c;
    }
    *gptr<u32>(r7 + (r6 << 2)) = u32(r10);
L_61f788:;
    if (*gptr<u32>(r7) == 0) {
        goto L_61f7b0;
    }
    if (*gptr<u32>(r7 + 4u) == 0) {
        goto L_61f7bc;
    }
    r0 = *gptr<u32>(r7 + 8u);
    if (r0 != 0) {
        goto L_61f7b8;
    }
L_61f7ac:;
    r10 = r11;
L_61f7b0:;
    r0 = *gptr<u32>(r8);
    *gptr<u32>(r7 + (r10 << 2)) = u32(r0);
L_61f7b8:;
    r13 = r13 + 0x28;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_61f7bc:;
    r10 = 1u;
    guest::preempt();
    goto L_61f7b0;
}

}  // namespace d_0061f6a0
GUEST_EXPORT(0x0061f6a0, d_0061f6a0::f_0061f6a0);

// f_0061fc98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061fc98 {

struct __attribute__((packed)) Object_0061fc98_0 {
    u8 unknown_0[0x11ae8];  // (not used here)
    u8 byte_11ae8;
};
GUEST_OFFSET(Object_0061fc98_0, byte_11ae8, 0x11ae8);  // (from the original)

inline constexpr guest::Function<0x0050d0c4, u32(u32, u32, u32, u32)> call_0050d0c4;  // (from the original)

u32 f_0061fc98(gptr<Object_0061fc98_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r5 = r4 + 0x11ae8u;  // (from the original)
    r13 = r13 - 0x18u;  // (from the original)
    r0 = 1u;
    r6 = 0u;
    arg0->byte_11ae8 = u8(r0);
    *gptr<u32>(r13) = u32(r0);
    *gptr<u32>(r13 + 4) = u32(r6);
    r0 = 0xa22020u;  // (from the original)
    r3 = r4 + 0x11ae4u;  // (from the original)
    r2 = 0x64u;  // (from the original)
    r1 = r4 + 0x11950u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0050d0c4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        *gptr<u8>(r5) = u8(r6);
        r1 = r4 - 0xfffee517u;  // (from the original)
        *gptr<u8>(r1) = u8(r6);
    }
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0061fc98
GUEST_EXPORT(0x0061fc98, d_0061fc98::f_0061fc98);

// f_0061fd68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061fd68 {

inline constexpr guest::Function<0x00622fe4, u32(u32, u32, u32, u32)> call_00622fe4;  // (from the original)
inline constexpr guest::Function<0x00627d44, u32(u32, u32, u32, u32)> call_00627d44;  // (from the original)
inline constexpr guest::Function<0x00627f74, u32(u32, u32, u32, u32)> call_00627f74;  // (from the original)
inline constexpr guest::Function<0x0062801c, u32(u32, u32, u32, u32)> call_0062801c;  // (from the original)
inline constexpr guest::Function<0x0075dfe8, u32(u32, u32, u32, u32)> call_0075dfe8;  // (from the original)

u32 f_0061fd68(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xffffffe0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    r4 = r0;
    r7 = 0x95362cu;  // (from the original)
    r0 = *gptr<u32>(r7);
    guest::cpu()->r[13] = r13;
    r0 = call_0075dfe8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_61fdb4;
    }
    r0 = 1u | r4 << 8;
    r8 = r13;
    r4 = 0x30u;  // (from the original)
    r5 = 0u;
    r6 = 2u;
    *gptr<u16>(r13) = u16(r0);
    if (0u == 0) {
        goto L_61fdcc;
    }
L_61fdac:;
    r0 = 1u;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_61fdb4:;
    ea = r7;
    r0 = *gptr<u32>(ea);
    r1 = r4;
    ea = r13;
    r13 = r13 + 0x20;  // (from the original)
    r3 = *gptr<u32>(ea);
    r0 = r0 + 0x7880u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_00622fe4(r0, r1, r2, r3);
L_61fdcc:;
    r7 = *gptr<u32>(r7) + 0x10u;  // (from the original)
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_00627f74(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = r6;
    r1 = r8;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_00627d44(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = r5;
    r1 = r4;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_0062801c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    guest::preempt();
    goto L_61fdac;
}

}  // namespace d_0061fd68
GUEST_EXPORT(0x0061fd68, d_0061fd68::f_0061fd68);
