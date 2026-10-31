// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "graphics/hemisphere_light.hpp"

#include <bit>

using guest::gptr;

// f_006a0848: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a0848 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x00307220, u32(u32, u32, u32, u32)> call_00307220;  // (from the original)
inline constexpr guest::Function<0x0057b9dc, u32(u32, u32, u32, u32)> call_0057b9dc;  // (from the original)
inline constexpr guest::Function<0x006cbbe4, u32(u32, u32, u32, u32)> call_006cbbe4;  // (from the original)

u32 f_006a0848(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2, float S3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x30u;  // (from the original)
    r5 = r0;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    r1 = r0;
    r0 = 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0 = call_002f74e0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    if (r0 != 0) {
        r13 = r13 + 0x30u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0 = call_002fb94c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    if (r0 == 0) {
        r13 = r13 + 0x30u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0 = call_006cbbe4(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    r1 = r0;
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0 = call_00307220(r0, r1, r2, r3);
    S3 = std::bit_cast<float>(*gptr<u32>(0x6a0980u));  // (from the original)
    S1 = std::bit_cast<float>(*gptr<u32>(0x6a0984u));  // (from the original)
    S2 = std::bit_cast<float>(*gptr<u32>(0x85f2ccu));  // (from the original)
    r1 = 0u;
    *gptr<u32>(r13 + 0xcu) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r13 + 0xcu)) + S2 * S3));  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r13 + 4u)) + S2 * S1;
    *gptr<u32>(r13 + 4u) = u32(std::bit_cast<u32>(S0));
    *gptr<u16>(r13 + 0x10u) = u16(r1);  // (from the original)
    *gptr<u16>(r13 + 0x14u) = u16(r1);  // (from the original)
    *gptr<u16>(r13 + 0x12u) = u16(0xffff8000u);  // (from the original)
    r1 = u32(*gptr<u8>(0x8c9f1cu)) << 0x18 | (((u32(*gptr<u8>(0x8540d0u)) & 0xffu | r4 & ~0xffu) & ~0xff00u | u32(*gptr<u8>(0x8540d1u)) << 8 & 0xff00u) & ~0xff0000u | u32(*gptr<u8>(0x8540d2u)) << 0x10 & 0xff0000u) & ~0xff000000u;  // (from the original)
    *gptr<u8>(r13 + 0x18u) = u8(1u);  // (from the original)
    *gptr<u8>(r13 + 0x19u) = u8(0u);  // (from the original)
    *gptr<u32>(r13 + 0x1cu) = u32(r1);  // (from the original)
    r2 = r13 + 0x18u;  // (from the original)
    r0 = u32(*gptr<u16>(0x88729au));  // (from the original)
    *gptr<u32>(r13) = u32(r13 + 0x10u);  // (from the original)
    r3 = r13 + 4u;
    r4 = r5;
    r1 = r5;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0 = call_0057b9dc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (r0 == 0) {
        r13 = r13 + 0x30u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    r1 = r4 + 0xeb54u;  // (from the original)
    r2 = *gptr<u32>(r1 + 4u);
    if (r2 != 0) {
        *gptr<u32>(r2) = u32(r0);
    }
    r0 = *gptr<u32>(r1 + 4u) + 4u;
    *gptr<u32>(r1 + 4u) = u32(r0);
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_006a0848
GUEST_EXPORT(0x006a0848, d_006a0848::f_006a0848);

// f_006a0ecc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a0ecc {

inline constexpr guest::Function<0x001139f4, u32(u32, u32, u32, u32)> call_001139f4;  // (from the original)
inline constexpr guest::Function<0x00116e31, u32(u32, u32, u32, u32)> call_00116e30;  // (from the original)
inline constexpr guest::Function<0x00116ea5, u32(u32, u32, u32, u32)> call_00116ea4;  // (from the original)
inline constexpr guest::Function<0x00119715, u32(u32, u32, u32, u32)> call_00119714;  // (from the original)
inline constexpr guest::Function<0x001198e9, u32(u32, u32, u32, u32)> call_001198e8;  // (from the original)
inline constexpr guest::Function<0x0011a1c9, u32(u32, u32, u32, u32)> call_0011a1c8;  // (from the original)
inline constexpr guest::Function<0x0011a651, u32(u32, u32, u32, u32)> call_0011a650;  // (from the original)
inline constexpr guest::Function<0x0011b4f7, u32(u32, u32, u32, u32)> call_0011b4f6;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb310, u32(u32, u32, u32, u32)> call_002fb310;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fe419, u32(u32, u32, u32, u32)> call_002fe418;  // (from the original)
inline constexpr guest::Function<0x002fe450, u32(u32, u32, u32, u32)> call_002fe450;  // (from the original)
inline constexpr guest::Function<0x002ff6f4, u32(u32, u32, u32, u32)> call_002ff6f4;  // (from the original)
inline constexpr guest::Function<0x003058c9, u32(u32, u32, u32, u32)> call_003058c8;  // (from the original)
inline constexpr guest::Function<0x00309ac9, u32(u32, u32, u32, u32)> call_00309ac8;  // (from the original)
inline constexpr guest::Function<0x00309eb9, u32(u32, u32, u32, u32)> call_00309eb8;  // (from the original)
inline constexpr guest::Function<0x0051ca20, u32(u32, u32, u32, u32)> call_0051ca20;  // (from the original)
inline constexpr guest::Function<0x00716b74, u32(u32, u32, u32, u32)> call_00716b74;  // (from the original)
inline constexpr guest::Function<0x00716de4, u32(u32, u32, u32, u32)> call_00716de4;  // (from the original)
inline constexpr guest::Function<0x0076cec4, u32(u32, u32, u32, u32)> call_0076cec4;  // (from the original)

u32 f_006a0ecc(u32 r0, u32 r1, u32 r2) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r13 = guest::cpu()->r[13];
    u32 nf = 0;
    u32 zf = 0;
    u32 vf = 0;
    r13 = r13 - 0x38u;  // (from the original)
    r10 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_0051ca20(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_6a11c0;
    }
    r0 = 0xaaef18u;  // (from the original)
    r6 = *gptr<u32>(r0 + 0x234u);  // (from the original)
    if (r6 == 0) {
        goto L_6a11c0;
    }
    res = u32(*gptr<u8>(0x5701u + r6)) << 0x1e;  // (from the original)
    r0 = res;
    if (!(res >> 0x1f)) {  // (from the original)
        goto L_6a11c0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fae84(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    r0 = call_002fb310(r0, r1, r2, guest::cpu()->r[3]);
    r9 = r0 + 4u;
    r2 = 0u;
    r1 = 0xau;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00116ea4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r5 = 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fb328(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 0u;
    r7 = r0 + 0x6aeb8u;  // (from the original)
    r1 = 0xbu;  // (from the original)
    r0 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00116ea4(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r4 = 0x4au;  // (from the original)
    do {
L_6a0f48:;
        r1 = r4 & 0xffu;  // (from the original)
        r0 = r7;
        guest::cpu()->r[13] = r13;
        r0 = call_0076cec4(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (!(r0 == 0)) {
            r1 = r4 - 0x4au;  // (from the original)
            r0 = r13 + 0xcu;  // (from the original)
            guest::cpu()->r[13] = r13;
            r0 = call_00116e30(r0, r1, r2, guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) <= s32(0x54u));  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    res = r0 - 0x3fu;  // (from the original)
    nf = res >> 0x1f;  // (from the original)
    zf = res == 0;
    vf = ((r0 ^ 0x3fu) & (r0 ^ res)) >> 0x1f;  // (from the original)
    r7 = r0;
    if (zf) {
        r5 = 0x15u;  // (from the original)
        goto L_6a0fcc;
    }
    if (!(!zf && nf == vf)) {
        zf = r7 == 0x39u;  // (from the original)
        if (!zf) {
            zf = r7 == 0x3au;  // (from the original)
        }
        if (zf) {
            goto L_6a0fc8;
        }
        zf = r7 == 0x3bu;  // (from the original)
        if (!zf) {
            zf = r7 == 0x3cu;  // (from the original)
        }
        if (zf) {
            goto L_6a0fc8;
        }
        goto L_6a0fcc;
    }
    zf = r7 == 0x46u;  // (from the original)
    if (!zf) {
        zf = r7 == 0x47u;  // (from the original)
    }
    if (zf) {
        r5 = 9u;
        goto L_6a0fcc;
    }
    if (r7 == 0x49u) {  // (from the original)
        r5 = 0xau;  // (from the original)
    }
    goto L_6a0fcc;
L_6a0fc8:;
    r5 = 8u;
L_6a0fcc:;
    r4 = 0u;
    r8 = r6 + 0x55a6u;  // (from the original)
L_6a0fd8:;
    r1 = r4;
    r0 = r9;
    guest::cpu()->r[13] = r13;
    r0 = call_003058c8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r6 = r0;
    if (r0 == 0) {
        goto L_6a10e8;
    }
    r0 = u32(*gptr<u8>(0x250fu + r6));  // (from the original)
    zf = r0 == r5;
    if (!zf) {
        zf = r5 == 0xau;  // (from the original)
    }
    if (zf) {
        goto L_6a11c0;
    }
    r1 = r4;
    r0 = r10;
    guest::cpu()->r[13] = r13;
    r0 = call_0011b4f6(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0) {
        goto L_6a10e8;
    }
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_0011a1c8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0) {
        goto L_6a10e8;
    }
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_001198e8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0) {
        goto L_6a10e8;
    }
    r1 = 0u;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_00309ac8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    if (r0 != 0) {
        r2 = 0u;
        r1 = r4;
        r0 = r9;
        guest::cpu()->r[13] = r13;
        r0 = call_00119714(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0 == 0) {
            goto L_6a10e8;
        }
    }
    r1 = r8;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_00309eb8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_6a10e8;
    }
    res = u32(*gptr<u8>(r0 + 0xbcu)) >> 7;  // (from the original)
    if (res == 0) {
        goto L_6a10e8;
    }
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_0011a650(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0) {
        goto L_6a10e8;
    }
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002fe450(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_6a10e8;
    }
    r1 = u32(*gptr<u8>(r0 + 0x1cu));  // (from the original)
    if (r1 != 0xa5u) {  // (from the original)
        goto L_6a10e8;
    }
    if (u32(*gptr<u8>(r0 + 0x1du)) != 0xa5u) {  // (from the original)
        goto L_6a10e8;
    }
    r1 = r4;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00116e30(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
L_6a10e8:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(0xau)) {  // (from the original)
        guest::preempt();
        goto L_6a0fd8;
    }
    r0 = *gptr<u32>(r13 + 8u);
    res = r0;
    if (u32(res == 0) || res >> 0x1f != (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        goto L_6a11c0;
    }
    r0 = 0x64u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002ff6f4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (s32(r0) >= s32(0x14u)) {  // (from the original)
        goto L_6a11c0;
    }
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fe418(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r0;
    r0 = r9;
    guest::cpu()->r[13] = r13;
    r0 = call_003058c8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r6 = r0;
    if (r0 == 0) {
        goto L_6a11c0;
    }
    zf = r7 == 0x46u;  // (from the original)
    if (!zf) {
        zf = r7 == 0x47u;  // (from the original)
    }
    if (!zf) {
        if (r7 == 0x49u) {  // (from the original)
            goto L_6a1198;
        }
        goto L_6a1190;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fb328(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r0 + 0x62250u;  // (from the original)
    res = r0 + 0x8b32u;  // (from the original)
    r4 = res;
    if (res == 0) {
        goto L_6a11c0;
    }
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00716de4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0) {
        goto L_6a1190;
    }
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00716b74(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_6a11c0;
    }
L_6a1190:;
    r1 = r5;
    goto L_6a11b4;
L_6a1198:;
    r0 = *gptr<u32>(r13 + 0x14u);  // (from the original)
    res = r0;
    if (u32(res == 0) || res >> 0x1f != (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        goto L_6a11c0;
    }
    r0 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fe418(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r0 = r0 + 0xau;  // (from the original)
    r1 = r0 & 0xffu;  // (from the original)
L_6a11b4:;
    if (r1 != 0x18u) {  // (from the original)
        r0 = r6;
        guest::cpu()->r[13] = r13;
        r0 = call_001139f4(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
L_6a11c0:;
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006a0ecc
GUEST_EXPORT(0x006a0ecc, d_006a0ecc::f_006a0ecc);

// f_006a14bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a14bc {

inline constexpr guest::Function<0x00111f95, u32(u32, u32, u32, u32)> call_00111f94;  // (from the original)
inline constexpr guest::Function<0x001120f1, u32(u32, u32, u32, u32)> call_001120f0;  // (from the original)
inline constexpr guest::Function<0x001139fd, u32(u32, u32, u32, u32)> call_001139fc;  // (from the original)
inline constexpr guest::Function<0x00116e31, u32(u32, u32, u32, u32)> call_00116e30;  // (from the original)
inline constexpr guest::Function<0x00116e4f, u32(u32, u32, u32, u32)> call_00116e4e;  // (from the original)
inline constexpr guest::Function<0x00116e93, u32(u32, u32, u32, u32)> call_00116e92;  // (from the original)
inline constexpr guest::Function<0x00116ea5, u32(u32, u32, u32, u32)> call_00116ea4;  // (from the original)
inline constexpr guest::Function<0x001198e9, u32(u32, u32, u32, u32)> call_001198e8;  // (from the original)
inline constexpr guest::Function<0x0011a1c9, u32(u32, u32, u32, u32)> call_0011a1c8;  // (from the original)
inline constexpr guest::Function<0x0011a651, u32(u32, u32, u32, u32)> call_0011a650;  // (from the original)
inline constexpr guest::Function<0x0011ab05, u32(u32, u32, u32, u32)> call_0011ab04;  // (from the original)
inline constexpr guest::Function<0x0011b4f7, u32(u32, u32, u32, u32)> call_0011b4f6;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb310, u32(u32, u32, u32, u32)> call_002fb310;  // (from the original)
inline constexpr guest::Function<0x002fe419, u32(u32, u32, u32, u32)> call_002fe418;  // (from the original)
inline constexpr guest::Function<0x002fe450, u32(u32, u32, u32, u32)> call_002fe450;  // (from the original)
inline constexpr guest::Function<0x002fe4d0, u32(u32, u32, u32, u32)> call_002fe4d0;  // (from the original)
inline constexpr guest::Function<0x002ff6f4, u32(u32, u32, u32, u32)> call_002ff6f4;  // (from the original)
inline constexpr guest::Function<0x003041c8, u32(u32, u32, u32, u32)> call_003041c8;  // (from the original)
inline constexpr guest::Function<0x003058c9, u32(u32, u32, u32, u32)> call_003058c8;  // (from the original)
inline constexpr guest::Function<0x00309f85, u32(u32, u32, u32, u32)> call_00309f84;  // (from the original)
inline constexpr guest::Function<0x0030a038, u32(u32, u32, u32, u32)> call_0030a038;  // (from the original)
inline constexpr guest::Function<0x0051ca20, u32(u32, u32, u32, u32)> call_0051ca20;  // (from the original)
inline constexpr guest::Function<0x0051d1f8, u32(u32, u32, u32, u32)> call_0051d1f8;  // (from the original)
inline constexpr guest::Function<0x0051d6e8, u32(u32, u32, u32, u32)> call_0051d6e8;  // (from the original)

u32 f_006a14bc(u32 r0, u32 r1, u32 r2) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r13 = guest::cpu()->r[13];
    u32 nf = 0;
    u32 zf = 0;
    u32 vf = 0;
    r13 = r13 - 0x50u;  // (from the original)
    r10 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_0051ca20(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_6a17d8;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fae84(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    r0 = call_002fb310(r0, r1, r2, guest::cpu()->r[3]);
    r9 = r0 + 4u;
    r2 = 0u;
    r1 = 0xau;  // (from the original)
    r0 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00116ea4(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 0u;
    r1 = 0x18u;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00116ea4(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = 2u;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0030a038(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r6 = *gptr<u32>(0xaaf14cu);  // (from the original)
    if (r6 != 0) {
        res = u32(*gptr<u8>(0x5701u + r6)) << 0x1e;  // (from the original)
        r0 = res;
        if (res >> 0x1f) {  // (from the original)
            goto L_6a1534;
        }
    }
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0051d6e8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
L_6a1534:;
    guest::cpu()->r[13] = r13;
    r0 = call_003041c8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0x2bu) {  // (from the original)
        r1 = 5u;
        goto L_6a1554;
    }
    if (r0 == 0x32u) {  // (from the original)
        r1 = 6u;
    } else {
        goto L_6a155c;
    }
L_6a1554:;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00116e4e(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
L_6a155c:;
    guest::cpu()->r[13] = r13;
    r0 = call_001120f0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        r1 = 5u;
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_00116e4e(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
    }
    guest::cpu()->r[13] = r13;
    r0 = call_00111f94(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        r1 = 6u;
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_00116e4e(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
    }
    r4 = 0u;
L_6a15a0:;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002fe450(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r5 = r0;
    r1 = r4;
    r0 = r9;
    guest::cpu()->r[13] = r13;
    r0 = call_003058c8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    zf = r5 == 0;
    r7 = r0;
    if (!zf) {
        zf = r7 == 0;
    }
    if (zf) {
        goto L_6a1678;
    }
    r8 = u32(*gptr<u8>(0x250fu + r7));  // (from the original)
    res = r8 - 3u;
    nf = res >> 0x1f;  // (from the original)
    vf = ((r8 ^ 3u) & (r8 ^ res)) >> 0x1f;  // (from the original)
    if (res == 0) {
        goto L_6a1678;
    }
    if (nf == vf) {
        goto L_6a1604;
    }
    zf = r8 == 0;
    if (!zf) {
        zf = r8 == 1u;
    }
    if (zf) {
        goto L_6a1678;
    }
L_6a15e8:;
    r1 = r4;
    r0 = r10;
    guest::cpu()->r[13] = r13;
    r0 = call_0011b4f6(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0) {
        goto L_6a166c;
    }
    goto L_6a1614;
L_6a1604:;
    zf = r8 == 7u;
    if (!zf) {
        zf = r8 == 0x17u;  // (from the original)
    }
    if (zf) {
        goto L_6a1678;
    }
    guest::preempt();
    goto L_6a15e8;
L_6a1614:;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_0011a1c8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0) {
        goto L_6a166c;
    }
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_001198e8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0) {
        goto L_6a166c;
    }
    res = *gptr<u32>(r5 + 0x20u) << 0x11 >> 0x1e;  // (from the original)
    if (res != 0) {
        goto L_6a166c;
    }
    r0 = 0x64u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002ff6f4(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    if (s32(r0) >= s32(0x14u)) {  // (from the original)
        goto L_6a166c;
    }
    r1 = r4;
    r0 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00116e30(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
L_6a166c:;
    r1 = r8;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00116e4e(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
L_6a1678:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(0xau)) {  // (from the original)
        guest::preempt();
        goto L_6a15a0;
    }
    r8 = r6 + 0x55a6u;  // (from the original)
L_6a168c:;
    r0 = *gptr<u32>(r13 + 0x14u);  // (from the original)
    nf = r0 >> 0x1f;  // (from the original)
    zf = r0 == 0;
    vf = 0u;
    if (!zf && nf == vf) {
        r0 = *gptr<u32>(r13 + 8u);
        nf = r0 >> 0x1f;  // (from the original)
        zf = r0 == 0;
        vf = 0u;
    }
    if (zf || nf != vf) {
        goto L_6a17d8;
    }
    r0 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fe418(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r7 = r0;
    r1 = r0;
    r0 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00116e4e(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r7;
    r0 = r9;
    guest::cpu()->r[13] = r13;
    r0 = call_003058c8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r5 = r0;
    if (r0 == 0) {
        guest::preempt();
        goto L_6a168c;
    }
    r1 = r13;
    r0 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00116e92(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    if (r6 == 0) {
        goto L_6a1728;
    }
    r1 = r8;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00309f84(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_6a1720;
    }
    res = u32(*gptr<u8>(r0 + 0xbcu)) >> 7;  // (from the original)
    if (res == 0) {
        goto L_6a1720;
    }
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0011a650(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_6a1728;
    }
L_6a1720:;
    r0 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0051d6e8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
L_6a1728:;
    r4 = r13 + 0x18u;  // (from the original)
    r1 = 5u;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0011b4f6(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0) {
        r1 = r4;
        r0 = r13 + 0x24u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00116e92(r0, r1, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        r1 = r7;
        r0 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_0011ab04(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0 == 0) {
            r1 = 5u;
            r0 = r13 + 0x24u;  // (from the original)
            guest::cpu()->r[13] = r13;
            r0 = call_00116e4e(r0, r1, r2, guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
        }
        r0 = r13 + 0x24u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002fe418(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r4 = r0 & 0xffu;  // (from the original)
    } else {
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_002fe418(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r4 = r0 & 0xffu;  // (from the original)
    }
    if (r4 >= 0x18u) {  // (from the original)
        guest::preempt();
        goto L_6a168c;
    }
    r1 = r4;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_001139fc(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r4;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00116e4e(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    r0 = call_0051d1f8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == r7) {
        r0 = ~0u;
        guest::cpu()->r[13] = r13;
        r0 = call_002fe4d0(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
    }
    guest::preempt();
    goto L_6a168c;
L_6a17d8:;
    r13 = r13 + 0x50u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006a14bc
GUEST_EXPORT(0x006a14bc, d_006a14bc::f_006a14bc);

// f_006a2c2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a2c2c {

inline constexpr guest::Function<0x00757aa0, u32(u32, u32, u32, u32)> call_00757aa0;  // (from the original)

u32 f_006a2c2c(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r3;
    r0 = call_00757aa0(r0, r1, guest::cpu()->r[2], r3);
    r1 = *gptr<u32>(r4);
    *gptr<u8>(r1 + r0) = u8(r5);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006a2c2c
GUEST_EXPORT(0x006a2c2c, d_006a2c2c::f_006a2c2c);

// f_006a2c48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a2c48 {

inline constexpr guest::Function<0x005bf518, u32(u32, u32, u32, u32)> call_005bf518;  // (from the original)

u32 f_006a2c48(u32 r0_unused, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r1;
    call_005bf518(guest::cpu()->r[0], r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    return guest::cpu()->r[0];
}

}  // namespace d_006a2c48
GUEST_EXPORT(0x006a2c48, d_006a2c48::f_006a2c48);

// f_006a2c58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a2c58 {

struct __attribute__((packed)) Object_006a2c58_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_006a2c58_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_006a2c58_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_006a2c58_0, word_8, 0x8);  // (from the original)


void f_006a2c58(gptr<Object_006a2c58_0> arg0, u32 r1, u32 r2, u32 r3) {
    arg0->word_0 = u32(r1);
    arg0->word_4 = u32(r2);
    arg0->word_8 = u32(r3);
    return;
}

}  // namespace d_006a2c58
GUEST_EXPORT(0x006a2c58, d_006a2c58::f_006a2c58);

// f_006a2ca4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a2ca4 {

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x005d6cc0, u32(u32, u32, u32, u32)> call_005d6cc0;  // (from the original)
inline constexpr guest::Function<0x005d6d28, u32(u32, u32, u32, u32)> call_005d6d28;  // (from the original)
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32, u32, u32)> call_005ea8dc;  // (from the original)
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;  // (from the original)
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> call_005ea964;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)

u32 f_006a2ca4(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0xb8u;  // (from the original)
    r5 = r0;
    r7 = r1;
    r0 = r13 + 8u;
    r2 = 0x40u;  // (from the original)
    r1 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003083bc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = 0x90a228u;  // (from the original)
    *gptr<u32>(r0) = u32(r6);
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005f4bfc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0 - 0xcu;  // (from the original)
    r1 = 0x80u;  // (from the original)
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, r3);
    r2 = 0x8906ecu;  // (from the original)
    r0 = r4 + 0x18u;  // (from the original)
    r4 = 0u;
    r0 = r0 - 2u;
    r1 = 0x20u;  // (from the original)
    do {
L_6a2cf4:;
        ea = r2;
        r3 = u32(*gptr<u16>(ea));
        res = r1 - 1u;
        r1 = res;
        ea = r0 + 2u;
        *gptr<u16>(ea) = u16(r3);
        ea = r2;
        r3 = u32(*gptr<u16>(ea));
        ea = r0 + 4u;
        *gptr<u16>(ea) = u16(r3);
        r0 = ea;
        guest::preempt();
    } while (res != 0);
    r8 = 0x95deccu;  // (from the original)
    r1 = 0u;
    r0 = *gptr<u32>(r8);
    guest::cpu()->r[13] = r13;
    r0 = call_005ea8f8(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(r4);
    r2 = 0x857b98u;  // (from the original)
    r0 = *gptr<u32>(r8);
    r3 = r7;
    r1 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea964(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r8);
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea8dc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 8u;
    r0 = r5 + 0x24u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005d6cc0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r5 + 0x24u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005d6d28(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r13 + 8u) = u32(r6);
    r0 = r13 + 8u;
    r13 = r13 + 0xb8u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006a2ca4
GUEST_EXPORT(0x006a2ca4, d_006a2ca4::f_006a2ca4);

// f_006a3988: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a3988 {

inline constexpr guest::Function<0x001323bc, u32(u32, u32, u32, u32)> call_001323bc;  // (from the original)
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32, u32)> call_00569e6c;  // (from the original)

u32 f_006a3988(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = call_001323bc(r0, r1, r2, guest::cpu()->r[3]);
    r1 = r4 + 0x400u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    r2 = 1u;
    r1 = r1 + 0x104u;  // (from the original)
    return call_00569e6c(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_006a3988
GUEST_EXPORT(0x006a3988, d_006a3988::f_006a3988);

// f_006a3bd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a3bd4 {

inline constexpr guest::Function<0x00132364, u32(u32, u32, u32, u32)> call_00132364;  // (from the original)
inline constexpr guest::Function<0x001323b4, u32(u32, u32, u32, u32)> call_001323b4;  // (from the original)
inline constexpr guest::Function<0x005d6bfc, u32(u32, u32, u32, u32)> call_005d6bfc;  // (from the original)
inline constexpr guest::Function<0x005e2e04, u32(u32, u32, u32, u32)> call_005e2e04;  // (from the original)

u32 f_006a3bd4(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = r0 + 0x650u;  // (from the original)
    r0 = call_00132364(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r4 + 0x504u;  // (from the original)
    r0 = call_001323b4(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r4 + 0x24u;  // (from the original)
    r0 = call_005d6bfc(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r4 + 0x124u;  // (from the original)
    r0 = call_005e2e04(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r4 + 0x1e8u;  // (from the original)
    r0 = call_005e2e04(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r4 + 0x2acu;  // (from the original)
    r0 = call_005e2e04(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r4 + 0x370u;  // (from the original)
    r0 = call_005e2e04(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r4 + 0x434u;  // (from the original)
    r0 = call_005e2e04(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = 1u;
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_006a3bd4
GUEST_EXPORT(0x006a3bd4, d_006a3bd4::f_006a3bd4);

// f_006a3cb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a3cb4 {

inline constexpr guest::Function<0x00567e24, u32(u32, u32, u32, u32)> call_00567e24;  // (from the original)

u32 f_006a3cb4(u32 r0) {
    u32 r1 = 0;
    r1 = 0x6a3cc0u;  // (from the original)
    r0 = r0 + 0x650u;  // (from the original)
    return call_00567e24(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_006a3cb4
GUEST_EXPORT(0x006a3cb4, d_006a3cb4::f_006a3cb4);

// f_006a3d54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a3d54 {

inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> call_0056878c;  // (from the original)
inline constexpr guest::Function<0x00568a80, u32(u32, u32, u32, u32)> call_00568a80;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)
inline constexpr guest::Function<0x005d46dc, u32(u32, u32, u32, u32)> call_005d46dc;  // (from the original)
inline constexpr guest::Function<0x005d69bc, u32(u32, u32, u32, u32)> call_005d69bc;  // (from the original)

u32 f_006a3d54(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xffffffe0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    r4 = r0;
    r0 = r0 + 0x504u;  // (from the original)
    r1 = 0x6a4000u;  // (from the original)
    r8 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_0056878c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = 0u;
    *gptr<u8>(r0 + 0xb7u) = u8(u32(*gptr<u8>(r0 + 0xb7u)) & 0xfeu);  // (from the original)
    r1 = 0x6a4008u;  // (from the original)
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_0056878c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u8>(r0 + 0xb7u) = u8(u32(*gptr<u8>(r0 + 0xb7u)) & 0xfeu);  // (from the original)
    r1 = 0x6a4010u;  // (from the original)
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_0056878c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u8>(r0 + 0xb7u) = u8(u32(*gptr<u8>(r0 + 0xb7u)) & 0xfeu);  // (from the original)
    r1 = 0x6a4018u;  // (from the original)
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_0056878c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u8>(r0 + 0xb7u) = u8(u32(*gptr<u8>(r0 + 0xb7u)) & 0xfeu);  // (from the original)
    r1 = 0x6a4024u;  // (from the original)
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_0056878c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u8>(r0 + 0xb7u) = u8(u32(*gptr<u8>(r0 + 0xb7u)) & 0xfeu);  // (from the original)
    r1 = 0x6a4030u;  // (from the original)
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_0056878c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u8>(r0 + 0xb7u) = u8(u32(*gptr<u8>(r0 + 0xb7u)) & 0xfeu);  // (from the original)
    r1 = 0x6a403cu;  // (from the original)
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_0056878c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u8>(r0 + 0xb7u) = u8(u32(*gptr<u8>(r0 + 0xb7u)) & 0xfeu);  // (from the original)
    r1 = 0x6a4044u;  // (from the original)
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_0056878c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u8>(r0 + 0xb7u) = u8(u32(*gptr<u8>(r0 + 0xb7u)) & 0xfeu);  // (from the original)
    r1 = 0x6a4050u;  // (from the original)
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_0056878c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u8>(r0 + 0xb7u) = u8(u32(*gptr<u8>(r0 + 0xb7u)) & 0xfeu);  // (from the original)
    r1 = 0x6a4058u;  // (from the original)
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_0056878c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = u32(*gptr<u8>(r0 + 0xb7u)) & 0xfeu;  // (from the original)
    *gptr<u8>(r0 + 0xb7u) = u8(r1);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005d46dc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_6a3f34;
    }
    r1 = 0x6a4060u;  // (from the original)
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_00568a80(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    ea = r0 + 0xb7u;  // (from the original)
    *gptr<u8>(ea) = u8(u32(*gptr<u8>(ea)) & 0xfeu | 1u);  // (from the original)
    r1 = 0x6a406cu;  // (from the original)
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_00568a80(r0, r1, r2, r3);
    r3 = r0;
    ea = r0 + 0xb7u;  // (from the original)
    r2 = 0u;
    *gptr<u8>(ea) = u8(u32(*gptr<u8>(ea)) & 0xfeu | 1u);  // (from the original)
    r1 = r5;
    r0 = r4 + 0x24u;  // (from the original)
    *gptr<u32>(r13) = u32(r6);
    guest::cpu()->r[13] = r13;
    r0 = call_005d69bc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x6a4078u;  // (from the original)
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_00568a80(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u8>(r0 + 0xb7u) = u8(u32(*gptr<u8>(r0 + 0xb7u)) & 0xfeu);  // (from the original)
    r1 = 0x6a4084u;  // (from the original)
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_00568a80(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u8>(r0 + 0xb7u) = u8(u32(*gptr<u8>(r0 + 0xb7u)) & 0xfeu);  // (from the original)
    r1 = 0x6a4090u;  // (from the original)
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_00568a80(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u8>(r0 + 0xb7u) = u8(u32(*gptr<u8>(r0 + 0xb7u)) & 0xfeu);  // (from the original)
    r1 = 0x6a409cu;  // (from the original)
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_00568a80(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    *gptr<u8>(r0 + 0xb7u) = u8(u32(*gptr<u8>(r0 + 0xb7u)) & 0xfeu);  // (from the original)
L_6a3f18:;
    r0 = 0u;
    r1 = r0;
    ea = r4 + 0x940u;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    r0 = r8;
    ea = r13;
    r13 = r13 + 0x20;  // (from the original)
    r3 = *gptr<u32>(ea);
    guest::cpu()->r[13] = r13;
    return call_00568c10(r0, r1, r2, r3);
L_6a3f34:;
    r1 = 0x6a4078u;  // (from the original)
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_00568a80(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r0;
    ea = r0 + 0xb7u;  // (from the original)
    *gptr<u8>(ea) = u8(u32(*gptr<u8>(ea)) & 0xfeu | 1u);  // (from the original)
    r1 = 0x6a4084u;  // (from the original)
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_00568a80(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = r0;
    ea = r0 + 0xb7u;  // (from the original)
    *gptr<u8>(ea) = u8(u32(*gptr<u8>(ea)) & 0xfeu | 1u);  // (from the original)
    r1 = 0x6a4090u;  // (from the original)
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_00568a80(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    ea = r0 + 0xb7u;  // (from the original)
    *gptr<u8>(ea) = u8(u32(*gptr<u8>(ea)) & 0xfeu | 1u);  // (from the original)
    r1 = 0x6a409cu;  // (from the original)
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_00568a80(r0, r1, r2, r3);
    ea = r0 + 0xb7u;  // (from the original)
    r3 = r5;
    *gptr<u8>(ea) = u8(u32(*gptr<u8>(ea)) & 0xfeu | 1u);  // (from the original)
    *gptr<u32>(r13) = u32(r0);
    r2 = r7;
    r1 = r6;
    r0 = r4 + 0x24u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005d69bc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x6a4060u;  // (from the original)
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_00568a80(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u8>(r0 + 0xb7u) = u8(u32(*gptr<u8>(r0 + 0xb7u)) & 0xfeu);  // (from the original)
    r1 = 0x6a406cu;  // (from the original)
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_00568a80(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    *gptr<u8>(r0 + 0xb7u) = u8(u32(*gptr<u8>(r0 + 0xb7u)) & 0xfeu);  // (from the original)
    guest::preempt();
    goto L_6a3f18;
}

}  // namespace d_006a3d54
GUEST_EXPORT(0x006a3d54, d_006a3d54::f_006a3d54);

// f_006a4f98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a4f98 {

inline constexpr guest::Function<0x006a42e4, u32(u32, u32, u32, u32)> call_006a42e4;  // (from the original)

u32 f_006a4f98(u32 r0) {
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18u;  // (from the original)
    r4 = 0x9047f8u;  // (from the original)
    r5 = r0;
    *gptr<u32>(r13 + 4u) = u32(0x6a4fe0u);  // (from the original)
    r1 = r13;
    r0 = r5;
    *gptr<u32>(r13) = u32(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_006a42e4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r13 + 4u) = u32(0x6a4fecu);  // (from the original)
    r1 = r13;
    r0 = r5;
    *gptr<u32>(r13) = u32(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_006a42e4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006a4f98
GUEST_EXPORT(0x006a4f98, d_006a4f98::f_006a4f98);

// f_006a51ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a51ec {

inline constexpr guest::Function<0x001b19dc, u32(u32, u32, u32, u32)> call_001b19dc;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x0070b334, u32(u32, u32, u32, u32)> call_0070b334;  // (from the original)

u32 f_006a51ec(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r1;
    r0 = call_002fae84(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r0 + 0x6e224u;  // (from the original)
    r1 = r4;
    r0 = call_001b19dc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = call_002fb328(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 + 0x6e2a4u;  // (from the original)
    r0 = call_0070b334(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_002fae84(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r0 + 0x6214fu;  // (from the original)
    r1 = u32(*gptr<u8>(r0 + 0xau)) & ~0x80u;  // (from the original)
    *gptr<u8>(r0 + 0xau) = u8(r1);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006a51ec
GUEST_EXPORT(0x006a51ec, d_006a51ec::f_006a51ec);

// f_006a5928: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a5928 {

inline constexpr guest::Function<0x001aa440, u32(u32, u32, u32, u32)> call_001aa440;  // (from the original)
inline constexpr guest::Function<0x001c8290, u32(u32, u32, u32, u32)> call_001c8290;  // (from the original)
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> call_002fd108;  // (from the original)
inline constexpr guest::Function<0x006e4a48, u32(u32, u32, u32, u32)> call_006e4a48;  // (from the original)

u32 f_006a5928(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20u;  // (from the original)
    r2 = 4u;
    r6 = 0x952c7cu;  // (from the original)
    r0 = 0x18u;  // (from the original)
    r1 = *gptr<u32>(r6);
    guest::cpu()->r[13] = r13;
    r0 = call_002fd108(r0, r1, r2, r3);
    r1 = 0u;
    *gptr<u8>(r13 + 4u) = u8(r1);
    *gptr<u8>(r13 + 5u) = u8(r1);
    *gptr<u8>(r13 + 6u) = u8(r1);
    r2 = r13 + 4u;
    r5 = r1;
    r3 = r1;
    *gptr<u8>(r13 + 7u) = u8(r1);
    *gptr<u32>(r13) = u32(r1);
    guest::cpu()->r[13] = r13;
    r0 = call_001aa440(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    r4 = 0x952640u;  // (from the original)
    *gptr<u32>(r4 + 4u) = u32(r0);
    if (r0 == 0) {
        goto L_6a5b58;
    }
    r1 = *gptr<u32>(r6);
    r2 = 4u;
    r0 = 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fd108(r0, r1, r2, r3);
    r3 = 0u;
    r1 = 0xffu;  // (from the original)
    *gptr<u8>(r13 + 4u) = u8(r3);
    *gptr<u8>(r13 + 5u) = u8(r1);
    *gptr<u8>(r13 + 6u) = u8(r1);
    *gptr<u8>(r13 + 7u) = u8(r1);
    r2 = r13 + 4u;
    r1 = r3;
    *gptr<u32>(r13) = u32(r5);
    guest::cpu()->r[13] = r13;
    r0 = call_001aa440(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r4 + 8u) = u32(r0);
    if (r0 == 0) {
        goto L_6a5b58;
    }
    r1 = *gptr<u32>(r6);
    r2 = 4u;
    r0 = 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fd108(r0, r1, r2, r3);
    r7 = 0u;
    r12 = 0xffu;  // (from the original)
    *gptr<u8>(r13 + 4u) = u8(r7);
    *gptr<u8>(r13 + 5u) = u8(r12);
    *gptr<u8>(r13 + 6u) = u8(r12);
    r2 = r13 + 4u;
    r3 = 1u;
    r1 = r7;
    *gptr<u8>(r13 + 7u) = u8(r12);
    *gptr<u32>(r13) = u32(r5);
    guest::cpu()->r[13] = r13;
    r0 = call_001aa440(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r4 + 0xcu) = u32(r0);  // (from the original)
    if (r0 == 0) {
        goto L_6a5b58;
    }
    r1 = *gptr<u32>(r6);
    r2 = 4u;
    r0 = 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fd108(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0u;
    r1 = r2;
    guest::cpu()->r[13] = r13;
    r0 = call_006e4a48(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r4 + 0x10u) = u32(r0);  // (from the original)
    if (r0 == 0) {
        goto L_6a5b58;
    }
    r1 = *gptr<u32>(r6);
    r2 = 4u;
    r0 = 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fd108(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0u;
    r1 = r2;
    guest::cpu()->r[13] = r13;
    r0 = call_001c8290(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r4 + 0x14u) = u32(r0);  // (from the original)
    if (r0 == 0) {
        goto L_6a5b58;
    }
    r1 = *gptr<u32>(r6);
    r2 = 4u;
    r0 = 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fd108(r0, r1, r2, r3);
    r1 = 0u;
    *gptr<u8>(r13 + 4u) = u8(r1);
    *gptr<u8>(r13 + 5u) = u8(r1);
    *gptr<u8>(r13 + 6u) = u8(r1);
    r3 = r1;
    *gptr<u8>(r13 + 7u) = u8(r1);
    r2 = r13 + 4u;
    r1 = 1u;
    *gptr<u32>(r13) = u32(r5);
    guest::cpu()->r[13] = r13;
    r0 = call_001aa440(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r4 + 0x18u) = u32(r0);  // (from the original)
    if (r0 == 0) {
        goto L_6a5b58;
    }
    r1 = *gptr<u32>(r6);
    r2 = 4u;
    r0 = 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fd108(r0, r1, r2, r3);
    r3 = 0u;
    r1 = 0xffu;  // (from the original)
    *gptr<u8>(r13 + 4u) = u8(r3);
    *gptr<u8>(r13 + 5u) = u8(r1);
    *gptr<u8>(r13 + 6u) = u8(r1);
    *gptr<u8>(r13 + 7u) = u8(r1);
    r2 = r13 + 4u;
    r1 = 1u;
    *gptr<u32>(r13) = u32(r5);
    guest::cpu()->r[13] = r13;
    r0 = call_001aa440(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r4 + 0x1cu) = u32(r0);  // (from the original)
    if (r0 == 0) {
        goto L_6a5b58;
    }
    r1 = *gptr<u32>(r6);
    r2 = 4u;
    r0 = 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fd108(r0, r1, r2, r3);
    r1 = 0xffu;  // (from the original)
    *gptr<u8>(r13 + 4u) = u8(r7);
    *gptr<u8>(r13 + 5u) = u8(r1);
    *gptr<u8>(r13 + 6u) = u8(r1);
    r3 = 1u;
    *gptr<u8>(r13 + 7u) = u8(r1);
    r2 = r13 + 4u;
    r1 = r3;
    *gptr<u32>(r13) = u32(r5);
    guest::cpu()->r[13] = r13;
    r0 = call_001aa440(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r4 + 0x20u) = u32(r0);  // (from the original)
    if (r0 == 0) {
        goto L_6a5b58;
    }
    r1 = *gptr<u32>(r6);
    r2 = 4u;
    r0 = 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fd108(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0u;
    r1 = 1u;
    guest::cpu()->r[13] = r13;
    r0 = call_001c8290(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r4 + 0x24u) = u32(r0);  // (from the original)
    if (r0 == 0) {
        goto L_6a5b58;
    }
    *gptr<u8>(r4 + 1u) = u8(r5);
    r0 = 1u;
    *gptr<u32>(r4 + 0x28u) = u32(r5);  // (from the original)
L_6a5b58:;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006a5928
GUEST_EXPORT(0x006a5928, d_006a5928::f_006a5928);

// f_006a5b88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a5b88 {

inline constexpr guest::Function<0x00565f00, u32(u32, u32, u32, u32)> call_00565f00;  // (from the original)
inline constexpr guest::Function<0x0058d5a0, u32(u32, u32, u32, u32)> call_0058d5a0;  // (from the original)
inline constexpr guest::Function<0x0076f0cc, u32(u32, u32, u32, u32)> call_0076f0cc;  // (from the original)
inline constexpr guest::Function<0x0076f1b4, u32(u32, u32, u32, u32)> call_0076f1b4;  // (from the original)

u32 f_006a5b88(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = 0x952640u;  // (from the original)
    r6 = 0x94e4b8u;  // (from the original)
    *gptr<u8>(r5 + 1u) = u8(1u);
    *gptr<u32>(r5 + 0x28u) = u32(r4);  // (from the original)
    r0 = *gptr<u32>(r6);
    if (r0 == 0) {
        goto L_6a5bd0;
    }
    r0 = call_0076f1b4(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 == 0) {
        goto L_6a5bd0;
    }
    r0 = *gptr<u32>(r6);
    r0 = call_0076f0cc(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 == 0) {
        r0 = 1u;
        goto L_6a5bf4;
    }
L_6a5bd0:;
    r0 = uxth(r4);
    r0 = call_00565f00(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 == 0) {
        goto L_6a5bf4;
    }
    r0 = call_0058d5a0(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u8>(r5 + 1u) = u8(0u);
    r0 = 1u;
L_6a5bf4:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0;
}

}  // namespace d_006a5b88
GUEST_EXPORT(0x006a5b88, d_006a5b88::f_006a5b88);

// f_006a5c00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a5c00 {

inline constexpr guest::Function<0x00565f74, u32(u32, u32, u32, u32)> call_00565f74;  // (from the original)
inline constexpr guest::Function<0x0058d6bc, u32(u32, u32, u32, u32)> call_0058d6bc;  // (from the original)

u32 f_006a5c00(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    r0 = uxth(r0);
    guest::cpu()->r[13] -= 8u;
    r0 = call_00565f74(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r4 = r0;
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = 0x952640u;  // (from the original)
    r0 = 0u;
    *gptr<u8>(r1 + 1u) = u8(r0);
    r0 = call_0058d6bc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006a5c00
GUEST_EXPORT(0x006a5c00, d_006a5c00::f_006a5c00);

// f_006a5dd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a5dd4 {

struct __attribute__((packed)) Object_006a5dd4_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_006a5dd4_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_006a5dd4_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_006a5dd4_0, word_8, 0x8);  // (from the original)


void f_006a5dd4(gptr<Object_006a5dd4_0> arg0, u32 r1, u32 r2) {
    float S0 = 0;
    float S1 = 0;
    r1 = r1 << 5;
    arg0->word_4 = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(0x6a5e00u))));  // (from the original)
    S0 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r1))));
    S1 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r2 << 5))));
    arg0->word_0 = u32(std::bit_cast<u32>(S0));
    arg0->word_8 = u32(std::bit_cast<u32>(S1));
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return;
}

}  // namespace d_006a5dd4
GUEST_EXPORT(0x006a5dd4, d_006a5dd4::f_006a5dd4);

// f_006a6408: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a6408 {

inline constexpr guest::Function<0x001c2074, u32(u32, u32, u32, u32)> call_001c2074;  // (from the original)
inline constexpr guest::Function<0x0024246c, u32(u32, u32, u32, u32)> call_0024246c;  // (from the original)
inline constexpr guest::Function<0x002e3bd4, u32(u32, u32, u32, u32)> call_002e3bd4;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002faea4, u32(u32, u32, u32, u32)> call_002faea4;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x00304530, u32(u32, u32, u32, u32)> call_00304530;  // (from the original)
inline constexpr guest::Function<0x0030512c, u32(u32, u32, u32, u32)> call_0030512c;  // (from the original)
inline constexpr guest::Function<0x0030fbb4, u32(u32, u32, u32, u32)> call_0030fbb4;  // (from the original)
inline constexpr guest::Function<0x00317148, u32(u32, u32, u32, u32)> call_00317148;  // (from the original)
inline constexpr guest::Function<0x0057bc20, u32(u32, u32, u32, u32)> call_0057bc20;  // (from the original)
inline constexpr guest::Function<0x0057bce0, u32(u32, u32, u32, u32)> call_0057bce0;  // (from the original)
inline constexpr guest::Function<0x00613704, u32(u32, u32, u32, u32)> call_00613704;  // (from the original)
inline constexpr guest::Function<0x00613758, u32(u32, u32, u32, u32)> call_00613758;  // (from the original)
inline constexpr guest::Function<0x006a6f50, u32(u32, u32, u32, u32)> call_006a6f50;  // (from the original)
inline constexpr guest::Function<0x006a92f4, u32(u32, u32, u32, u32)> call_006a92f4;  // (from the original)
inline constexpr guest::Function<0x006f9db4, u32(u32, u32, u32, u32)> call_006f9db4;  // (from the original)
inline constexpr guest::Function<0x006f9e94, u32(u32, u32, u32, u32)> call_006f9e94;  // (from the original)
inline constexpr guest::Function<0x006fa728, u32(u32, u32, u32, u32)> call_006fa728;  // (from the original)
inline constexpr guest::Function<0x006fae98, u32(u32, u32, u32, u32)> call_006fae98;  // (from the original)
inline constexpr guest::Function<0x006fb0cc, u32(u32, u32, u32, u32)> call_006fb0cc;  // (from the original)
inline constexpr guest::Function<0x00720358, u32(u32, u32, u32, u32)> call_00720358;  // (from the original)
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32, u32)> call_0075291c;  // (from the original)
inline constexpr guest::Function<0x0075db98, u32(u32, u32, u32, u32)> call_0075db98;  // (from the original)
inline constexpr guest::Function<0x0076ce3c, u32(u32, u32, u32, u32)> call_0076ce3c;  // (from the original)

u32 f_006a6408(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x30u;  // (from the original)
    r8 = 0x9b4a24u;  // (from the original)
    r9 = *gptr<u32>(r8 + 4u);
    guest::cpu()->r[13] = r13;
    r0 = call_002fae84(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r7 = r0 + 0x53400u;  // (from the original)
    r6 = 0u;
L_6a6428:;
    r4 = 0u;
    do {
L_6a642c:;
        r2 = r6;
        r1 = r4;
        r0 = r9;
        guest::cpu()->r[13] = r13;
        r0 = call_00317148(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r5 = r0;
        if (!(r0 == 0)) {
            r2 = r6;
            r1 = r4;
            r0 = r7;
            guest::cpu()->r[13] = r13;
            r0 = call_0075db98(r0, r1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            *gptr<u16>(r5) = u16(u32(*gptr<u16>(r0)));
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 7u);
    r6 = r6 + 1u;
    if (r6 < 6u) {
        guest::preempt();
        goto L_6a6428;
    }
    r5 = 0u;
L_6a648c:;
    r4 = 0u;
L_6a6490:;
    r1 = r5;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00613704(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_6a64e4;
    }
    r2 = r5;
    r1 = r4;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_002faea4(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r6 = r0;
    r2 = r5 + 1u;
    r1 = r4 + 1u;
    r0 = r9;
    guest::cpu()->r[13] = r13;
    r0 = call_00317148(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_6a64e4;
    }
    r2 = 0u;
    r1 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_0057bc20(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_6a64e4:;
    r4 = r4 + 1u;
    if (r4 < 5u) {
        guest::preempt();
        goto L_6a6490;
    }
    r5 = r5 + 1u;
    if (r5 < 4u) {
        guest::preempt();
        goto L_6a648c;
    }
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_00613758(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    *gptr<u32>(r9 + 0x28u) = u32(r1);  // (from the original)
    r0 = 1u;
    guest::cpu()->r[13] = r13;
    r0 = call_006f9e94(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_006a6f50(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0u;
    r0 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_0024246c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r6 = 2u;
    r11 = 0u;
    r10 = 1u;
L_6a6540:;
    r4 = r6 & 0xffu;  // (from the original)
    r2 = 0u;
    r7 = *gptr<u32>(r8 + (r4 << 2));
    r1 = r2;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_00317148(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r9 = r0;
    if (r0 == 0) {
        goto L_6a66a0;
    }
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_006fa728(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_002fb328(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r5;
    r0 = r0 + 0x5d900u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0030fbb4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_006fb0cc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    r1 = r0;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_006fae98(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 4u) = u32(r0);
    *gptr<u16>(r9) = u16(r0);
    r1 = r4;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0030512c(r0, r1, r2, r3);
    r5 = 0u;
    *gptr<u32>(r13 + 8u) = u32(r0);
L_6a65c8:;
    r4 = 0u;
    do {
L_6a65cc:;
        r0 = *gptr<u32>(r13 + 8u);
        r3 = 0u;
        r2 = r5;
        r1 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_00720358(r0, r1, r2, r3);
        r1 = r0;
        r3 = r5 + 4u;
        r2 = r4 + 3u;
        r0 = r9;
        *gptr<u32>(r13) = u32(r11);
        guest::cpu()->r[13] = r13;
        r0 = call_0057bce0(r0, r1, r2, r3);
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 0xau);  // (from the original)
    r5 = r5 + 1u;
    if (r5 < 0xau) {  // (from the original)
        guest::preempt();
        goto L_6a65c8;
    }
    r5 = 0u;
L_6a6614:;
    r4 = 0u;
    do {
L_6a6618:;
        r0 = *gptr<u32>(r13 + 8u);
        r3 = 1u;
        r2 = r5;
        r1 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_00720358(r0, r1, r2, r3);
        r1 = r0;
        r3 = r5 + 5u;
        r2 = r4 + 4u;
        r0 = r9;
        *gptr<u32>(r13) = u32(r10);
        guest::cpu()->r[13] = r13;
        r0 = call_0057bce0(r0, r1, r2, r3);
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 8u);
    r5 = r5 + 1u;
    if (r5 < 8u) {
        guest::preempt();
        goto L_6a6614;
    }
    r2 = 0u;
    r1 = r2;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_0075291c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    if (r0 == 0) {
        goto L_6a66a0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_00304530(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = *gptr<u32>(r13 + 4u);
    guest::cpu()->r[13] = r13;
    r0 = call_001c2074(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = r0;
    if (r0 == 0) {
        goto L_6a66a0;
    }
    r2 = 0xa00u;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_006a92f4(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
L_6a66a0:;
    r6 = r6 + 1u;
    if (r6 < 0x1au) {  // (from the original)
        guest::preempt();
        goto L_6a6540;
    }
    r6 = 0x1au;  // (from the original)
L_6a66b0:;
    r4 = r6 & 0xffu;  // (from the original)
    r2 = 0u;
    r7 = *gptr<u32>(r8 + (r4 << 2));
    r1 = r2;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_00317148(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r9 = r0;
    if (r0 == 0) {
        goto L_6a680c;
    }
    r10 = uxth(r6 + 0x13du);  // (from the original)
    r1 = r10;
    r0 = r9;
    *gptr<u16>(r0) = u16(r1);
    guest::cpu()->r[13] = r13;
    r0 = call_002fb328(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0xfff951c8u;  // (from the original)
    r5 = r0 + 0x80u - r1;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_006f9db4(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0076ce3c(r0, r1, r2, r3);
    r5 = 0u;
    r11 = r5;
    *gptr<u32>(r13 + 4u) = u32(r0 + 2u);
L_6a6730:;
    r4 = 0u;
    do {
L_6a6734:;
        r0 = *gptr<u32>(r13 + 4u);
        r3 = 0u;
        r2 = r5;
        r1 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_00720358(r0, r1, r2, r3);
        r1 = r0;
        r3 = r5 + 4u;
        r2 = r4 + 3u;
        r0 = r9;
        *gptr<u32>(r13) = u32(r11);
        guest::cpu()->r[13] = r13;
        r0 = call_0057bce0(r0, r1, r2, r3);
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 0xau);  // (from the original)
    r5 = r5 + 1u;
    if (r5 < 0xau) {  // (from the original)
        guest::preempt();
        goto L_6a6730;
    }
    r5 = 0u;
    r11 = 1u;
L_6a6780:;
    r4 = 0u;
    do {
L_6a6784:;
        r0 = *gptr<u32>(r13 + 4u);
        r3 = 1u;
        r2 = r5;
        r1 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_00720358(r0, r1, r2, r3);
        r1 = r0;
        r3 = r5 + 5u;
        r2 = r4 + 4u;
        r0 = r9;
        *gptr<u32>(r13) = u32(r11);
        guest::cpu()->r[13] = r13;
        r0 = call_0057bce0(r0, r1, r2, r3);
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 8u);
    r5 = r5 + 1u;
    if (r5 < 8u) {
        guest::preempt();
        goto L_6a6780;
    }
    r2 = 0u;
    r1 = r2;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_0075291c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    if (r0 == 0) {
        goto L_6a680c;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_00304530(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r10;
    guest::cpu()->r[13] = r13;
    r0 = call_001c2074(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    if (r0 == 0) {
        goto L_6a680c;
    }
    r2 = 0xa00u;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_006a92f4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_6a680c:;
    r6 = r6 + 1u;
    if (r6 < 0x1eu) {  // (from the original)
        guest::preempt();
        goto L_6a66b0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fae84(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x6fe36u;  // (from the original)
    r0 = r0 + r1;
    guest::cpu()->r[13] = r13;
    r0 = call_002e3bd4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006a6408
GUEST_EXPORT(0x006a6408, d_006a6408::f_006a6408);

// f_006a69a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a69a8 {


u32 f_006a69a8() {
    u32 r0 = 0;
    r0 = *gptr<u32>(0x9b4a24u);  // (from the original)
    if (r0 != 0) {
        r0 = 1u;
    }
    return r0;
}

}  // namespace d_006a69a8
GUEST_EXPORT(0x006a69a8, d_006a69a8::f_006a69a8);

// f_006a69c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a69c0 {

inline constexpr guest::Function<0x0022d64c, u32(u32, u32, u32, u32)> call_0022d64c;  // (from the original)
inline constexpr guest::Function<0x002b836c, u32(u32, u32, u32, u32)> call_002b836c;  // (from the original)

u32 f_006a69c0(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    goto L_6a69c0;
L_6a69c0:;
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = call_002b836c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r4;
    r0 = *gptr<u32>(0x9b4aa0u);  // (from the original)
    r0 = call_0022d64c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = *gptr<u32>(r4 + 0x10u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return guest::call_address<u32>(0x114b15u, r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_006a69c0
GUEST_EXPORT(0x006a69c0, d_006a69c0::f_006a69c0);

// f_006a6cc8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a6cc8 {

inline constexpr guest::Function<0x001348cc, u32(u32, u32, u32, u32)> call_001348cc;  // (from the original)

u32 f_006a6cc8(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    r1 = r0;
    r2 = 0x102au;  // (from the original)
    r0 = *gptr<u32>(0x9526f8u);  // (from the original)
    return call_001348cc(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_006a6cc8
GUEST_EXPORT(0x006a6cc8, d_006a6cc8::f_006a6cc8);

// f_006a7174: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a7174 {

inline constexpr guest::Function<0x0012eacc, u32(u32, u32, u32, u32)> call_0012eacc;  // (from the original)
inline constexpr guest::Function<0x002ffb64, u32(u32, u32, u32, u32)> call_002ffb64;  // (from the original)
inline constexpr guest::Function<0x005817f0, u32(u32, u32, u32, u32)> call_005817f0;  // (from the original)
inline constexpr guest::Function<0x00581a18, u32(u32, u32, u32, u32)> call_00581a18;  // (from the original)

u32 f_006a7174(u32 r0_unused, u32 r1) {
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = 0x9b4a24u;  // (from the original)
    r0 = *gptr<u32>(r4 + 0x78u);  // (from the original)
    if (r0 == 0) {
        goto L_6a71e0;
    }
    r5 = 0x9526ecu;  // (from the original)
    r1 = *gptr<u32>(r5 + 8u);
    if (r1 == 0) {
        goto L_6a71e0;
    }
    r0 = call_005817f0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = *gptr<u32>(r4 + 0x78u);  // (from the original)
    if (r0 != 0) {
        r0 = call_00581a18(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r0 = call_002ffb64(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    r6 = 0u;
    *gptr<u32>(r4 + 0x78u) = u32(*gptr<u32>(r5 + 8u));  // (from the original)
    *gptr<u32>(r5 + 8u) = u32(r6);
    r0 = *gptr<u32>(r5 + 0xcu);  // (from the original)
    if (r0 != 0) {
        r0 = call_0012eacc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r0 = call_002ffb64(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    *gptr<u32>(r5 + 0xcu) = u32(r6);  // (from the original)
L_6a71e0:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006a7174
GUEST_EXPORT(0x006a7174, d_006a7174::f_006a7174);

// f_006a71ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a71ec {

inline constexpr guest::Function<0x002025bc, u32(u32, u32, u32, u32)> call_002025bc;  // (from the original)
inline constexpr guest::Function<0x002ebce4, u32(u32, u32, u32, u32)> call_002ebce4;  // (from the original)
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> call_002fd108;  // (from the original)

u32 f_006a71ec(u32 r0_unused, u32 r1) {
    u32 r0 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    r0 = 0x952c50u;  // (from the original)
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = *gptr<u32>(r0);
    if (r4 == 0) {
        goto L_6a7250;
    }
    r6 = 0x9b4a24u;  // (from the original)
    r5 = 0x9526ecu;  // (from the original)
    r2 = 4u;
    r1 = r2;
    *gptr<u32>(r5 + 8u) = u32(*gptr<u32>(r6 + 0x78u));  // (from the original)
    r0 = r4;
    r0 = call_002025bc(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_6a7250;
    }
    *gptr<u32>(r6 + 0x78u) = u32(r0);  // (from the original)
    r0 = *gptr<u32>(r5 + 0xcu);  // (from the original)
    if (r0 != 0) {
        goto L_6a7250;
    }
    r0 = 0x102au;  // (from the original)
    r2 = 4u;
    r1 = r4;
    r0 = call_002fd108(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = call_002ebce4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r5 + 0xcu) = u32(r0);  // (from the original)
L_6a7250:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006a71ec
GUEST_EXPORT(0x006a71ec, d_006a71ec::f_006a71ec);

// f_006a733c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a733c {

inline constexpr guest::Function<0x006c78b8, u32(u32, u32, u32, u32)> call_006c78b8;  // (from the original)

u32 f_006a733c(gptr<Float3> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    float S0 = 0;
    float S1 = 0;
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = r1;
    r1 = r2;
    S1 = std::bit_cast<float>(*gptr<u32>(0x6a7390u));  // (from the original)
    arg0->v[0] = float(s32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(0x85f2e8u) + (r0 << 5)))));  // (from the original)
    arg0->v[1] = S1;
    r2 = 0u;
    S0 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(0x85f2ecu) + (r1 << 5)))));  // (from the original)
    arg0->v[2] = S0;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_006c78b8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    *gptr<u32>(r4 + 4u) = u32(std::bit_cast<u32>(S0));
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_006a733c
GUEST_EXPORT(0x006a733c, d_006a733c::f_006a733c);

// f_006a739c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a739c {

inline constexpr guest::Function<0x006c7908, u32(u32, u32, u32, u32)> call_006c7908;  // (from the original)

u32 f_006a739c(gptr<Float3> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    float S0 = 0;
    float S1 = 0;
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r4 = r0;
    r0 = r1;
    r1 = r2;
    r2 = r3;
    r6 = *gptr<u32>(0x85f2e8u);  // (from the original)
    r3 = *gptr<u32>(r13 + 0x18u);  // (from the original)
    S1 = std::bit_cast<float>(*gptr<u32>(0x6a7404u));  // (from the original)
    r5 = r3 + (r1 << 4);
    arg0->v[0] = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r6 + (r2 + (r0 << 4) << 5)))));
    arg0->v[1] = S1;
    S0 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(0x85f2ecu) + (r5 << 5)))));  // (from the original)
    arg0->v[2] = S0;
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_006c7908(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    *gptr<u32>(r4 + 4u) = u32(std::bit_cast<u32>(S0));
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_006a739c
GUEST_EXPORT(0x006a739c, d_006a739c::f_006a739c);

// f_006a7410: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a7410 {

inline constexpr guest::Function<0x002e3bd4, u32(u32, u32, u32, u32)> call_002e3bd4;  // (from the original)

u32 f_006a7410() {
    u32 r0 = 0;
    guest::cpu()->r[13] -= 8u;
    r0 = *gptr<u32>(0x9526f8u);  // (from the original)
    r0 = call_002e3bd4(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = 1u;
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_006a7410
GUEST_EXPORT(0x006a7410, d_006a7410::f_006a7410);

// f_006a742c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a742c {

inline constexpr guest::Function<0x00114c9d, u32(u32, u32, u32, u32)> call_00114c9c;  // (from the original)
inline constexpr guest::Function<0x002e38b4, u32(u32, u32, u32, u32)> call_002e38b4;  // (from the original)
inline constexpr guest::Function<0x002e3bd4, u32(u32, u32, u32, u32)> call_002e3bd4;  // (from the original)
inline constexpr guest::Function<0x0055cabc, u32(u32, u32, u32, u32)> call_0055cabc;  // (from the original)
inline constexpr guest::Function<0x0055cb58, u32(u32, u32, u32, u32)> call_0055cb58;  // (from the original)
inline constexpr guest::Function<0x005d1ee0, u32(u32, u32, u32, u32)> call_005d1ee0;  // (from the original)

u32 f_006a742c(u32 r0) {
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r4 = 0x9526ecu;  // (from the original)
    r13 = r13 - 0x18u;  // (from the original)
    r1 = *gptr<u32>(r4 + 0xcu);  // (from the original)
    if (r1 == 0) {
        r0 = 1u;
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r1 = r0;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0055cabc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = *gptr<u32>(r4 + 0xcu);  // (from the original)
    r1 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002e38b4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = *gptr<u32>(r4 + 0xcu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002e3bd4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0055cb58(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] = r13;
    r0 = call_005d1ee0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0055cb58(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] = r13;
    r0 = call_00114c9c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006a742c
GUEST_EXPORT(0x006a742c, d_006a742c::f_006a742c);

// f_006a8280: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a8280 {

struct __attribute__((packed)) Object_006a8280_0 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
    u8 byte_4;
    u8 byte_5;
    u8 unknown_6[0x2];  // (not used here)
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
};
GUEST_OFFSET(Object_006a8280_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_006a8280_0, byte_1, 0x1);  // (from the original)
GUEST_OFFSET(Object_006a8280_0, byte_2, 0x2);  // (from the original)
GUEST_OFFSET(Object_006a8280_0, byte_3, 0x3);  // (from the original)
GUEST_OFFSET(Object_006a8280_0, byte_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_006a8280_0, byte_5, 0x5);  // (from the original)
GUEST_OFFSET(Object_006a8280_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_006a8280_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_006a8280_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_006a8280_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_006a8280_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_006a8280_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_006a8280_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_006a8280_0, word_24, 0x24);  // (from the original)

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x00307040, u32(u32, u32, u32, u32)> call_00307040;  // (from the original)

u32 f_006a8280(gptr<Object_006a8280_0> arg0) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18;  // (from the original)
    r6 = 0u;
    r4 = 0xffu;  // (from the original)
    arg0->byte_0 = u8(r6);
    arg0->byte_1 = u8(r6);
    arg0->byte_2 = u8(r6);
    arg0->byte_3 = u8(r6);
    arg0->byte_4 = u8(r4);
    r3 = 0xfu;  // (from the original)
    arg0->byte_5 = u8(r4);
    arg0->word_8 = u32(r3);
    arg0->word_14 = u32(r0 + 0x28u);  // (from the original)
    arg0->word_18 = u32(r6);
    r7 = 0xe1u;  // (from the original)
    arg0->word_1c = u32(r6);
    arg0->word_c = u32(r3);
    arg0->word_10 = u32(r7);
    r4 = r0 + 0x20u;  // (from the original)
    r12 = r0 + 0x11bcu;  // (from the original)
    r1 = 0x274724u;  // (from the original)
    r3 = r7;
    r2 = 0x14u;  // (from the original)
    r0 = r0 + 0x28u;  // (from the original)
    arg0->word_20 = u32(r6);
    arg0->word_24 = u32(r12);
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x1194u;  // (from the original)
    r4 = 0xfu;  // (from the original)
    r5 = r4;
    r2 = r0 + 0x2cu;  // (from the original)
    r1 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_00307040(r0, r1, r2, r3);
    r3 = 0x10u;  // (from the original)
    ea = r0 + 0x14u;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    *gptr<u32>(ea + 8) = u32(r6);
    r4 = r0 - 0x11bcu;  // (from the original)
    r2 = r3;
    *gptr<u32>(r0) = u32(0x8fa3a4u);  // (from the original)
    *gptr<u32>(r0 + 0x20u) = u32(r6);  // (from the original)
    *gptr<u32>(r0 + 0x24u) = u32(r6);  // (from the original)
    *gptr<u32>(r0 + 0x28u) = u32(r6);  // (from the original)
    *gptr<u8>(r4 + 2u) = u8(r3);
    r1 = 0x51u;  // (from the original)
    *gptr<u8>(r4 + 3u) = u8(r3);
    *gptr<u8>(r4 + 4u) = u8(r1);
    *gptr<u8>(r4 + 5u) = u8(r1);
    r0 = u32(*gptr<u8>(r4));
    r1 = u32(*gptr<u8>(r4 + 1u));
    r3 = u32(*gptr<u8>(r4 + 4u));
    if (r0 < 0x10u) {  // (from the original)
        r0 = r2;
        goto L_6a836c;
    }
    if (u32(r0 >= 0x51u) && !u32(r0 == 0x51u)) {  // (from the original)
        r0 = r3;
    }
L_6a836c:;
    *gptr<u8>(r4) = u8(r0);
    r0 = u32(*gptr<u8>(r4 + 3u));
    r2 = u32(*gptr<u8>(r4 + 5u));
    if (r1 < 0x10u) {  // (from the original)
        r1 = r0;
        goto L_6a838c;
    }
    if (u32(r1 >= 0x51u) && !u32(r1 == 0x51u)) {  // (from the original)
        r1 = r2;
    }
L_6a838c:;
    r0 = r4 + 0x1000u;  // (from the original)
    *gptr<u8>(r4 + 1u) = u8(r1);
    *gptr<u8>(r0 + 0x214u) = u8(r6);  // (from the original)
    *gptr<u8>(r0 + 0x215u) = u8(r6);  // (from the original)
    *gptr<u32>(r0 + 0x218u) = u32(r6);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 1u) {
        r2 = 0x51u;  // (from the original)
        *gptr<u8>(r4 + 4u) = u8(r2);
        r1 = 0u;
        *gptr<u8>(r4 + 5u) = u8(r2);
        *gptr<u8>(r4 + 2u) = u8(r1);
        *gptr<u8>(r4 + 3u) = u8(r1);
        r0 = u32(*gptr<u8>(r4));
        r1 = u32(*gptr<u8>(r4 + 1u));
        if (u32(r0 >= 0x51u) && !u32(r0 == 0x51u)) {  // (from the original)
            r0 = r2;
        }
        *gptr<u8>(r4) = u8(r0);
        r0 = u32(*gptr<u8>(r4 + 5u));
        if (u32(r1 >= 0x51u) && !u32(r1 == 0x51u)) {  // (from the original)
            r1 = r0;
        }
        *gptr<u8>(r4 + 1u) = u8(r1);
    }
    r0 = r4;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006a8280
GUEST_EXPORT(0x006a8280, d_006a8280::f_006a8280);

// f_006a83fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a83fc {

inline constexpr guest::Function<0x006a8598, u32(u32, u32, u32, u32)> call_006a8598;  // (from the original)

u32 f_006a83fc(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    float S0 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x6a843cu));  // (from the original)
    r4 = r13 + 8u;
    *gptr<u32>(r13 + 8u) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r13 + 0xcu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    r12 = r3;
    *gptr<u32>(r13) = u32(r2);
    *gptr<u32>(r13 + 4) = u32(r4);
    r3 = r1;
    r1 = r12;
    r2 = *gptr<u32>(0x8653fcu + (r12 << 3));  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    call_006a8598(guest::cpu()->r[0], r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return guest::cpu()->r[0];
}

}  // namespace d_006a83fc
GUEST_EXPORT(0x006a83fc, d_006a83fc::f_006a83fc);

// f_006a8444: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a8444 {

inline constexpr guest::Function<0x006a8598, u32(u32, u32, u32, u32)> call_006a8598;  // (from the original)

u32 f_006a8444(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10u;  // (from the original)
    r12 = r1;
    *gptr<u32>(r13) = u32(r2);
    *gptr<u32>(r13 + 4) = u32(r3);
    r1 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    r3 = r12;
    r2 = *gptr<u32>(0x8653fcu + (r1 << 3));  // (from the original)
    guest::cpu()->r[13] = r13;
    call_006a8598(guest::cpu()->r[0], r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return guest::cpu()->r[0];
}

}  // namespace d_006a8444
GUEST_EXPORT(0x006a8444, d_006a8444::f_006a8444);

// f_006a8474: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a8474 {

struct __attribute__((packed)) Object_006a8474_0 {
    u8 unknown_0[0x184];  // (not used here)
    u32 word_184;
};
GUEST_OFFSET(Object_006a8474_0, word_184, 0x184);  // (from the original)

inline constexpr guest::Function<0x00207190, u32(u32, u32, u32, u32)> call_00207190;  // (from the original)
inline constexpr guest::Function<0x002e5bec, u32(u32, u32, u32, u32)> call_002e5bec;  // (from the original)

u32 f_006a8474(gptr<Object_006a8474_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r0 = arg0->word_184;
    r13 = r13 - 0x38u;  // (from the original)
    r0 = r4 + (r0 + (r0 << 1) << 3) + 4u;
    r3 = *gptr<u32>(r0 + 0xcu);  // (from the original)
    if (r3 == 0) {
        r0 = 0u;
        r13 = r13 + 0x38u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    if (*gptr<u32>(r0 + 0x10u) != *gptr<u32>(r3 + 0xcu)) {  // (from the original)
        r0 = 0u;
        r13 = r13 + 0x38u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r3 = 1u;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00207190(r0, r1, guest::cpu()->r[2], r3);
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r4 + 0x184u);  // (from the original)
    r1 = r13;
    r0 = r4 + (r0 + (r0 << 1) << 3) + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002e5bec(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006a8474
GUEST_EXPORT(0x006a8474, d_006a8474::f_006a8474);

// f_006a84e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a84e8 {

inline constexpr guest::Function<0x006a8598, u32(u32, u32, u32, u32)> call_006a8598;  // (from the original)

u32 f_006a84e8(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    float S0 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x6a852cu));  // (from the original)
    r4 = r13 + 8u;
    *gptr<u32>(r13 + 8u) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r13 + 0xcu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r13) = u32(r2);
    *gptr<u32>(r13 + 4) = u32(r4);
    r12 = r3;
    r3 = r1;
    r1 = r12;
    r2 = *gptr<u32>(0x8653fcu + (r12 << 3) + 4u);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    call_006a8598(guest::cpu()->r[0], r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return guest::cpu()->r[0];
}

}  // namespace d_006a84e8
GUEST_EXPORT(0x006a84e8, d_006a84e8::f_006a84e8);

// f_006a8534: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a8534 {

inline constexpr guest::Function<0x006a8598, u32(u32, u32, u32, u32)> call_006a8598;  // (from the original)

u32 f_006a8534(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10u;  // (from the original)
    r12 = r1;
    r1 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    *gptr<u32>(r13) = u32(r2);
    *gptr<u32>(r13 + 4) = u32(r3);
    r3 = r12;
    r2 = *gptr<u32>(0x8653fcu + (r1 << 3) + 4u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_006a8598(guest::cpu()->r[0], r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return guest::cpu()->r[0];
}

}  // namespace d_006a8534
GUEST_EXPORT(0x006a8534, d_006a8534::f_006a8534);

// f_006a8954: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a8954 {

struct __attribute__((packed)) Object_006a8954_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_006a8954_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)

u32 f_006a8954(gptr<Object_006a8954_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r1 = 0x2e6944u;  // (from the original)
    r3 = 0x10u;  // (from the original)
    arg0->word_0 = u32(0x8f8b60u);  // (from the original)
    r2 = 0x18u;  // (from the original)
    r0 = r4 + 4u;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006a8954
GUEST_EXPORT(0x006a8954, d_006a8954::f_006a8954);

// f_006a8988: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a8988 {

struct __attribute__((packed)) Object_006a8988_0 {
    u8 unknown_0[0x18];  // (not used here)
    u32 word_18;
};
GUEST_OFFSET(Object_006a8988_0, word_18, 0x18);  // (from the original)

inline constexpr guest::Function<0x00125b38, u32(u32, u32, u32, u32)> call_00125b38;  // (from the original)
inline constexpr guest::Function<0x0031758c, u32(u32, u32, u32, u32)> call_0031758c;  // (from the original)

u32 f_006a8988(gptr<Object_006a8988_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r13 = r13 - 0x18u;  // (from the original)
    r0 = 1u;
    if (arg0->word_18 != 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    *gptr<u32>(r13 + 0xcu) = u32(0x6a89f4u);  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(0x9047f8u);  // (from the original)
    *gptr<u32>(r13) = u32(1u);
    *gptr<u32>(r13 + 4) = u32(0u);
    r2 = r1;
    r3 = r13 + 8u;
    r1 = 0x1080u;  // (from the original)
    r0 = r4 + 0x3cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0031758c(r0, r1, r2, r3);
    r2 = *gptr<u32>(r4 + 0x40u);  // (from the original)
    r3 = 0u;
    r1 = *gptr<u32>(0x952ae4u);  // (from the original)
    r0 = r4 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125b38(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006a8988
GUEST_EXPORT(0x006a8988, d_006a8988::f_006a8988);

// f_006a8a0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a8a0c {

struct __attribute__((packed)) Object_006a8a0c_0 {
    u8 unknown_0[0x28];  // (not used here)
    u32 word_28;
};
GUEST_OFFSET(Object_006a8a0c_0, word_28, 0x28);  // (from the original)

inline constexpr guest::Function<0x00125b38, u32(u32, u32, u32, u32)> call_00125b38;  // (from the original)
inline constexpr guest::Function<0x0031758c, u32(u32, u32, u32, u32)> call_0031758c;  // (from the original)

u32 f_006a8a0c(gptr<Object_006a8a0c_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r13 = r13 - 0x18u;  // (from the original)
    r0 = 1u;
    if (arg0->word_28 != 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    *gptr<u32>(r13 + 0xcu) = u32(0x6a8a78u);  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(0x9047f8u);  // (from the original)
    *gptr<u32>(r13) = u32(1u);
    *gptr<u32>(r13 + 4) = u32(0u);
    r2 = r1;
    r3 = r13 + 8u;
    r1 = 0x4000u;  // (from the original)
    r0 = r4 + 0x44u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0031758c(r0, r1, r2, r3);
    r2 = *gptr<u32>(r4 + 0x48u);  // (from the original)
    r3 = 0u;
    r1 = *gptr<u32>(0x952ae8u);  // (from the original)
    r0 = r4 + 0x24u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125b38(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006a8a0c
GUEST_EXPORT(0x006a8a0c, d_006a8a0c::f_006a8a0c);

// f_006a8a90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a8a90 {

inline constexpr guest::Function<0x0013864c, u32(u32, u32, u32, u32)> call_0013864c;  // (from the original)
inline constexpr guest::Function<0x002f747c, u32(u32, u32, u32, u32)> call_002f747c;  // (from the original)

u32 f_006a8a90(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = r0 + 0x14u;  // (from the original)
    r0 = call_0013864c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r4 + 0x3cu;  // (from the original)
    guest::cpu()->r[13] += 8u;
    return call_002f747c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_006a8a90
GUEST_EXPORT(0x006a8a90, d_006a8a90::f_006a8a90);

// f_006a8aac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a8aac {

struct __attribute__((packed)) Object_006a8aac_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_006a8aac_0, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x00125b38, u32(u32, u32, u32, u32)> call_00125b38;  // (from the original)
inline constexpr guest::Function<0x0031758c, u32(u32, u32, u32, u32)> call_0031758c;  // (from the original)

u32 f_006a8aac(gptr<Object_006a8aac_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r13 = r13 - 0x18u;  // (from the original)
    r0 = 1u;
    if (arg0->word_8 != 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    *gptr<u32>(r13 + 0xcu) = u32(0x6a8b18u);  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(0x9047f8u);  // (from the original)
    *gptr<u32>(r13) = u32(1u);
    *gptr<u32>(r13 + 4) = u32(0u);
    r2 = r1;
    r3 = r13 + 8u;
    r1 = 0x1600u;  // (from the original)
    r0 = r4 + 0x34u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0031758c(r0, r1, r2, r3);
    r2 = *gptr<u32>(r4 + 0x38u);  // (from the original)
    r3 = 0u;
    r1 = *gptr<u32>(0x952ae0u);  // (from the original)
    r0 = r4 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00125b38(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006a8aac
GUEST_EXPORT(0x006a8aac, d_006a8aac::f_006a8aac);

// f_006a8b34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a8b34 {

inline constexpr guest::Function<0x0013864c, u32(u32, u32, u32, u32)> call_0013864c;  // (from the original)
inline constexpr guest::Function<0x002f747c, u32(u32, u32, u32, u32)> call_002f747c;  // (from the original)

u32 f_006a8b34(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = r0 + 0x24u;  // (from the original)
    r0 = call_0013864c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r4 + 0x44u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    return call_002f747c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_006a8b34
GUEST_EXPORT(0x006a8b34, d_006a8b34::f_006a8b34);

// f_006a8b50: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a8b50 {

inline constexpr guest::Function<0x0013864c, u32(u32, u32, u32, u32)> call_0013864c;  // (from the original)
inline constexpr guest::Function<0x002f747c, u32(u32, u32, u32, u32)> call_002f747c;  // (from the original)

u32 f_006a8b50(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = r0 + 4u;
    r0 = call_0013864c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r4 + 0x34u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    return call_002f747c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_006a8b50
GUEST_EXPORT(0x006a8b50, d_006a8b50::f_006a8b50);

// f_006a8d28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a8d28 {

struct __attribute__((packed)) Object_006a8d28_0 {
    u8 unknown_0[0x254];  // (not used here)
    u32 word_254;
    u32 word_258;
};
GUEST_OFFSET(Object_006a8d28_0, word_254, 0x254);  // (from the original)
GUEST_OFFSET(Object_006a8d28_0, word_258, 0x258);  // (from the original)

inline constexpr guest::Function<0x004bef3c, u32(u32, u32, u32, u32)> call_004bef3c;  // (from the original)

u32 f_006a8d28(gptr<Object_006a8d28_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 zf = 0;
    r2 = arg0->word_254;
    zf = r2 == 0;
    if (!zf) {
        r0 = arg0->word_258;
        zf = r0 == 0;
    }
    if (zf) {
        r0 = 0u;
        return r0;
    }
    if ((u32(*gptr<u8>(r2 + 0xb7u)) & 1u) == 0) {  // (from the original)
        r0 = 0u;
        return r0;
    }
    r2 = u32(*gptr<u8>(r0 + 0xb7u));  // (from the original)
    if ((r2 & 1u) == 0) {
        r0 = 0u;
        return r0;
    }
    return call_004bef3c(r0, guest::cpu()->r[1], r2, guest::cpu()->r[3]);
}

}  // namespace d_006a8d28
GUEST_EXPORT(0x006a8d28, d_006a8d28::f_006a8d28);

// f_006a97a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a97a0 {

struct __attribute__((packed)) Object_006a97a0_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_006a97a0_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_006a97a0_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_006a97a0_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_006a97a0_0, word_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x006a5e04, u32(u32, u32, u32, u32)> call_006a5e04;  // (from the original)

u32 f_006a97a0(gptr<Object_006a97a0_0> arg0, u32 r1, u32 r2) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r3 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 8;
    arg0->word_0 = u32(r1);
    arg0->word_4 = u32(r2);
    arg0->word_8 = u32(r1 * *gptr<u32>(0x85f2c4u));  // (from the original)
    r3 = r2 * *gptr<u32>(0x85f2c8u);  // (from the original)
    ea = r0 + 0xcu;  // (from the original)
    arg0->word_c = u32(r3);
    r0 = ea + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_006a5e04(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
    r13 = r13 + 8;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006a97a0
GUEST_EXPORT(0x006a97a0, d_006a97a0::f_006a97a0);

// f_006a9834: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a9834 {

struct __attribute__((packed)) Object_006a9834_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_006a9834_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_006a9834_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_006a9834_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_006a9834_0, word_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

u32 f_006a9834(gptr<Object_006a9834_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = 0u;
    arg0->word_0 = u32(r0);
    arg0->word_4 = u32(r0);
    arg0->word_8 = u32(r0);
    arg0->word_c = u32(r0);
    r1 = 0xa00u;  // (from the original)
    r0 = r4 + 0x1cu;  // (from the original)
    r0 = call_002f825c(r0, r1, r2, r3);
    r1 = 0x60d240u;  // (from the original)
    r0 = r4 + 0x1cu;  // (from the original)
    r3 = 0x100u;  // (from the original)
    r2 = 0xau;  // (from the original)
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0x1cu;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006a9834
GUEST_EXPORT(0x006a9834, d_006a9834::f_006a9834);

// f_006a987c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a987c {

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)

u32 f_006a987c(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r1 = 0x60d260u;  // (from the original)
    r0 = r0 + 0x1cu;  // (from the original)
    r3 = 0x100u;  // (from the original)
    r2 = 0xau;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006a987c
GUEST_EXPORT(0x006a987c, d_006a987c::f_006a987c);

// f_006a98b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a98b0 {

struct __attribute__((packed)) Object_006a98b0_0 {
    u8 byte_0;
    u8 unknown_1[0x3];  // (not used here)
    u32 word_4;
    u8 unknown_8[0x8];  // (not used here)
    u32 word_10;
    u16 half_14;
    u16 half_16;
    u8 byte_18;
};
GUEST_OFFSET(Object_006a98b0_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_006a98b0_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_006a98b0_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_006a98b0_0, half_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_006a98b0_0, half_16, 0x16);  // (from the original)
GUEST_OFFSET(Object_006a98b0_0, byte_18, 0x18);  // (from the original)


u32 f_006a98b0(gptr<Object_006a98b0_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    float S0 = 0;
    float S1 = 0;
    guest::cpu()->r[13] -= 4u;
    S1 = std::bit_cast<float>(arg0->word_4);
    arg0->word_10 = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(0x6a9960u))));  // (from the original)
    S0 = fabsf(S1);
    r12 = 0u;
    if (r1 != 0) {
        r4 = std::bit_cast<u32>(S0);
        res = r4 - 0x34000000u;  // (from the original)
        if (!u32(res == 0) && res >> 0x1f == ((r4 ^ 0x34000000u) & (r4 ^ res)) >> 0x1f) {  // (from the original)
            guest::cpu()->r[13] += 4u;
            r0 = 0u;
            guest::cpu()->r[1] = r1;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            return r0;
        }
        arg0->byte_18 = u8(r1);
        S0 = std::bit_cast<float>(*gptr<u32>(0x6a9964u));  // (from the original)
        arg0->word_4 = u32(std::bit_cast<u32>(S0));
        if (r2 == 0) {
            goto L_6a9944;
        }
        if (r3 == 0) {
            arg0->byte_0 = u8(r12);
            guest::cpu()->r[13] += 4u;
            r0 = 1u;
            guest::cpu()->r[1] = r1;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            return r0;
        }
        arg0->byte_0 = u8(1u);
        r1 = 0xfu;  // (from the original)
        arg0->half_14 = u16(r12);
        arg0->half_16 = u16(r1);
        guest::cpu()->r[13] += 4u;
        r0 = 1u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    *gptr<u8>(r0) = u8(r12);
    if (s32(std::bit_cast<u32>(S0)) <= s32(0x34000000u)) {  // (from the original)
        guest::cpu()->r[13] += 4u;
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    *gptr<u8>(r0 + 0x18u) = u8(r1);  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x6a9968u));  // (from the original)
    *gptr<u32>(r0 + 4u) = u32(std::bit_cast<u32>(S0));
    if (r2 == 0) {
        goto L_6a9944;
    }
    guest::cpu()->r[13] += 4u;
    r0 = 1u;
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
L_6a9944:;
    *gptr<u32>(r0 + 8u) = u32(std::bit_cast<u32>(S0));
    guest::cpu()->r[13] += 4u;
    r0 = 0u;
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_006a98b0
GUEST_EXPORT(0x006a98b0, d_006a98b0::f_006a98b0);

// f_006a996c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a996c {

struct __attribute__((packed)) Object_006a996c_0 {
    u8 byte_0;
    u8 unknown_1[0x3];  // (not used here)
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not used here)
    u32 word_10;
    u8 unknown_14[0x4];  // (not used here)
    u8 byte_18;
};
GUEST_OFFSET(Object_006a996c_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_006a996c_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_006a996c_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_006a996c_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_006a996c_0, byte_18, 0x18);  // (from the original)


void f_006a996c(gptr<Object_006a996c_0> arg0, u32 r1) {
    u32 res = 0;
    u32 r2 = 0;
    float S0 = 0;
    arg0->word_10 = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(0x6a99d0u))));  // (from the original)
    if (r1 != 0) {
        S0 = fabsf(std::bit_cast<float>(arg0->word_4));
        r2 = std::bit_cast<u32>(S0);
        res = r2 - 0x34000000u;  // (from the original)
        if (!u32(res == 0) && res >> 0x1f == ((r2 ^ 0x34000000u) & (r2 ^ res)) >> 0x1f) {  // (from the original)
            guest::cpu()->s[0] = S0;
            return;
        }
        arg0->byte_18 = u8(r1);
        S0 = std::bit_cast<float>(*gptr<u32>(0x6a99d4u));  // (from the original)
        arg0->word_4 = u32(std::bit_cast<u32>(S0));
        arg0->word_8 = u32(std::bit_cast<u32>(S0));
        guest::cpu()->s[0] = S0;
        return;
    }
    S0 = std::bit_cast<float>(arg0->word_4);
    arg0->byte_0 = u8(0u);
    S0 = fabsf(S0);
    if (s32(std::bit_cast<u32>(S0)) <= s32(0x34000000u)) {  // (from the original)
        guest::cpu()->s[0] = S0;
        return;
    }
    arg0->byte_18 = u8(r1);
    S0 = std::bit_cast<float>(*gptr<u32>(0x6a99d8u));  // (from the original)
    arg0->word_4 = u32(std::bit_cast<u32>(S0));
    arg0->word_8 = u32(std::bit_cast<u32>(S0));
    guest::cpu()->s[0] = S0;
    return;
}

}  // namespace d_006a996c
GUEST_EXPORT(0x006a996c, d_006a996c::f_006a996c);

// f_006a99dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a99dc {

struct __attribute__((packed)) Object_006a99dc_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not used here)
    u32 word_10;
    u8 unknown_14[0x4];  // (not used here)
    u8 byte_18;
};
GUEST_OFFSET(Object_006a99dc_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_006a99dc_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_006a99dc_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_006a99dc_0, byte_18, 0x18);  // (from the original)


u32 f_006a99dc(gptr<Object_006a99dc_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r3 = 0;
    float S0 = 0;
    float S1 = 0;
    float S2 = 0;
    S1 = std::bit_cast<float>(*gptr<u32>(0x6a9a38u));  // (from the original)
    S2 = std::bit_cast<float>(*gptr<u32>(0x6a9a3cu));  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x6a9a34u));  // (from the original)
    arg0->word_10 = u32(std::bit_cast<u32>(S1));
    arg0->word_8 = u32(std::bit_cast<u32>(S2));
    r3 = 1u;
    arg0->word_4 = u32(std::bit_cast<u32>(S0));
    arg0->byte_18 = u8(r3);
    if (r1 == 0) {
        arg0->word_8 = u32(std::bit_cast<u32>(S0));
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    r1 = 0u;
    if (r2 == 0) {
        *gptr<u8>(r0) = u8(r1);
        r0 = 1u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    *gptr<u8>(r0) = u8(r3);
    *gptr<u16>(r0 + 0x14u) = u16(r1);  // (from the original)
    *gptr<u16>(r0 + 0x16u) = u16(0xfu);  // (from the original)
    r0 = 1u;
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_006a99dc
GUEST_EXPORT(0x006a99dc, d_006a99dc::f_006a99dc);

// f_006a9a40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a9a40 {

struct __attribute__((packed)) Object_006a9a40_0 {
    u8 byte_0;
    u8 unknown_1[0x3];  // (not used here)
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not used here)
    u32 word_10;
    u8 unknown_14[0x4];  // (not used here)
    u8 byte_18;
};
GUEST_OFFSET(Object_006a9a40_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_006a9a40_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_006a9a40_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_006a9a40_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_006a9a40_0, byte_18, 0x18);  // (from the original)


u32 f_006a9a40(gptr<Object_006a9a40_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 zf = 0;
    float S0 = 0;
    float S1 = 0;
    S1 = std::bit_cast<float>(*gptr<u32>(0x6a9a78u));  // (from the original)
    r2 = 0u;
    S0 = std::bit_cast<float>(*gptr<u32>(0x6a9a74u));  // (from the original)
    arg0->word_10 = u32(std::bit_cast<u32>(S1));
    arg0->byte_0 = u8(r2);
    zf = r1 == 0;
    arg0->word_4 = u32(std::bit_cast<u32>(S0));
    if (!zf) {
        S0 = std::bit_cast<float>(*gptr<u32>(0x6a9a7cu));  // (from the original)
    }
    arg0->byte_18 = u8(r2);
    arg0->word_8 = u32(std::bit_cast<u32>(S0));
    if (zf) {
        r0 = 0u;
    } else {
        r0 = 1u;
    }
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_006a9a40
GUEST_EXPORT(0x006a9a40, d_006a9a40::f_006a9a40);

// f_006aa3e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006aa3e0 {

inline constexpr guest::Function<0x005e9e58, u32(u32, u32, u32, u32)> call_005e9e58;  // (from the original)
inline constexpr guest::Function<0x00601a20, u32(u32, u32, u32, u32)> call_00601a20;  // (from the original)

u32 f_006aa3e0(u32 r0, u32 r1, float S0, float S1) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_00601a20(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r4 = 0u;
    S0 = std::bit_cast<float>(*gptr<u32>(0x6aa434u));  // (from the original)
    *gptr<u32>(r0) = u32(0x90af70u);  // (from the original)
    *gptr<u32>(r0 + 0x60u) = u32(r4);  // (from the original)
    *gptr<u32>(r0 + 0x64u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    S1 = std::bit_cast<float>(*gptr<u32>(0x6aa438u));  // (from the original)
    *gptr<u32>(r0 + 0x68u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    r1 = r0 + 0x6cu;  // (from the original)
    *gptr<u32>(r1) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r1 + 4) = u32(std::bit_cast<u32>(S1));
    r1 = r4;
    *gptr<u32>(r0 + 0x74u) = u32(r4);  // (from the original)
    r0 = r0 + 0x78u;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    r0 = r0 + 4u;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_005e9e58(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r0 = r0 - 0x7cu;  // (from the original)
    *gptr<u8>(r0 + 0x80u) = u8(r4);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_006aa3e0
GUEST_EXPORT(0x006aa3e0, d_006aa3e0::f_006aa3e0);

// f_006aa46c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006aa46c {

struct __attribute__((packed)) Object_006aa46c_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_006aa46c_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x00601a88, u32(u32, u32, u32, u32)> call_00601a88;  // (from the original)

u32 f_006aa46c(gptr<Object_006aa46c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    r1 = 0x90af70u;  // (from the original)
    arg0->word_0 = u32(r1);
    return call_00601a88(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_006aa46c
GUEST_EXPORT(0x006aa46c, d_006aa46c::f_006aa46c);

// f_006ab00c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ab00c {

inline constexpr guest::Function<0x0020bf0c, u32(u32, u32, u32, u32)> call_0020bf0c;  // (from the original)
inline constexpr guest::Function<0x0020bf68, u32(u32, u32, u32, u32)> call_0020bf68;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x002ff8b0, u32(u32, u32, u32, u32)> call_002ff8b0;  // (from the original)
inline constexpr guest::Function<0x004e4ac4, u32(u32, u32, u32, u32)> call_004e4ac4;  // (from the original)
inline constexpr guest::Function<0x0071287c, u32(u32, u32, u32, u32)> call_0071287c;  // (from the original)

u32 f_006ab00c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fb94c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_6ab0a8;
    }
    r5 = r0 + 0x2cu;  // (from the original)
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0071287c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_6ab0a8;
    }
    r0 = 0u;
    r4 = r0;
    r6 = 1u;
    *gptr<u16>(r13) = u16(r0);
L_6ab040:;
    r1 = r4;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0020bf0c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (u32(*gptr<u8>(r0 + 0x86cu)) == 0) {  // (from the original)
        goto L_6ab078;
    }
    r1 = r13;
    if (r4 >= 0xau) {  // (from the original)
        goto L_6ab078;
    }
    r0 = r1 + (r4 >> 3);
    r2 = r4 & 7u;
    r1 = u32(*gptr<u8>(r0)) | lsl_r(r6, r2 & 0xff);  // (from the original)
    *gptr<u8>(r0) = u8(r1);
L_6ab078:;
    r4 = r4 + 1u;
    if (r4 < 0xau) {  // (from the original)
        guest::preempt();
        goto L_6ab040;
    }
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0020bf68(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002ff8b0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_004e4ac4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
L_6ab0a8:;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006ab00c
GUEST_EXPORT(0x006ab00c, d_006ab00c::f_006ab00c);

// f_006ac088: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ac088 {

struct __attribute__((packed)) Object_006ac088_0 {
    u8 unknown_0[0x4c8];  // (not used here)
    u8 byte_4c8;
};
GUEST_OFFSET(Object_006ac088_0, byte_4c8, 0x4c8);  // (from the original)

inline constexpr guest::Function<0x001aae00, u32(u32, u32, u32, u32)> call_001aae00;  // (from the original)

u32 f_006ac088(gptr<Object_006ac088_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    if (u32(arg0->byte_4c8) != 0) {
        r1 = 2u;
        r0 = r4;
        r0 = call_001aae00(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    r0 = 0u;
    *gptr<u8>(r4 + 0x4c8u) = u8(r0);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006ac088
GUEST_EXPORT(0x006ac088, d_006ac088::f_006ac088);

// f_006ac35c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ac35c {

struct __attribute__((packed)) Object_006ac35c_0 {
    u8 unknown_0[0x360];  // (not used here)
    u32 word_360;
};
GUEST_OFFSET(Object_006ac35c_0, word_360, 0x360);  // (from the original)

inline constexpr guest::Function<0x002052f8, u32(u32, u32, u32, u32)> call_002052f8;  // (from the original)
inline constexpr guest::Function<0x002132d0, u32(u32, u32, u32, u32)> call_002132d0;  // (from the original)

u32 f_006ac35c(gptr<Object_006ac35c_0> arg0, u32 r1) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r4 = r0;
    r3 = 0u;
    arg0->word_360 = u32(r1);
    r0 = call_002052f8(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_6ac414;
    }
    r5 = *gptr<u32>(r4 + 0x4ccu);  // (from the original)
    r6 = r4 + 0x281u;  // (from the original)
    r7 = 0u;
    if ((u32(*gptr<u8>(r4 + 0x281u)) & 1u) != 0) {  // (from the original)
        r1 = r4 + 0x264u;  // (from the original)
        r0 = r5 + 0x1b0u;  // (from the original)
        r0 = call_002132d0(r0, r1, guest::cpu()->r[2], r3);
        r1 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
        if (r0 == 0) {
            goto L_6ac418;
        }
    }
    if (*gptr<u32>(0x1984u + r5) == 0) {  // (from the original)
        goto L_6ac3e0;
    }
    res = u32(*gptr<u8>(r6)) << 0x1d >> 0x1f;  // (from the original)
    if (res == 0) {
        goto L_6ac3e0;
    }
    r1 = r4 + 0x26cu;  // (from the original)
    r0 = r5 + 0x1980u;  // (from the original)
    r0 = call_002132d0(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_6ac418;
    }
L_6ac3e0:;
    r0 = u32(*gptr<u8>(r6));
    r6 = 1u;
    res = r0 << 0x1e >> 0x1f;  // (from the original)
    if (res != 0) {
        r1 = r4 + 0x274u;  // (from the original)
        r0 = r5 + 0x7020u;  // (from the original)
        r0 = call_002132d0(r0, r1, guest::cpu()->r[2], r3);
        r1 = guest::cpu()->r[1];
        if (r0 == 0) {
            goto L_6ac418;
        }
    }
    r0 = r6;
L_6ac414:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_6ac418:;
    r0 = r7;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006ac35c
GUEST_EXPORT(0x006ac35c, d_006ac35c::f_006ac35c);

// f_006ac760: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ac760 {

inline constexpr guest::Function<0x00138744, u32(u32, u32, u32, u32)> call_00138744;  // (from the original)
inline constexpr guest::Function<0x004f1270, u32(u32, u32, u32, u32)> call_004f1270;  // (from the original)

u32 f_006ac760(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0 + 0x384u;  // (from the original)
    r0 = r0 + 0x3d4u;  // (from the original)
    r0 = call_00138744(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r4;
    r0 = call_004f1270(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = 3u;
    *gptr<u32>(r4 + 0xcu) = u32(r0);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_006ac760
GUEST_EXPORT(0x006ac760, d_006ac760::f_006ac760);

// f_006ac784: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ac784 {

inline constexpr guest::Function<0x0012ca7c, u32(u32, u32, u32, u32)> call_0012ca7c;  // (from the original)
inline constexpr guest::Function<0x00206190, u32(u32, u32, u32, u32)> call_00206190;  // (from the original)
inline constexpr guest::Function<0x004edd3c, u32(u32, u32, u32, u32)> call_004edd3c;  // (from the original)

u32 f_006ac784(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10;  // (from the original)
    r4 = r1;
    r5 = r2;
    r6 = r3;
    guest::cpu()->r[13] = r13;
    r0 = call_00206190(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x8f8c1cu;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    r0 = r0 + 0x384u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_004edd3c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 3u;
    ea = r0 + 0xcu;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    r0 = ea + 0x44u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0012ca7c(r0, r1, r2, r3);
    *gptr<u32>(r0) = u32(0x8f9600u);  // (from the original)
    r0 = r0 - 0x3d4u;  // (from the original)
    r1 = 0u;
    *gptr<u8>(r0 + 0x4c8u) = u8(r1);  // (from the original)
    *gptr<u32>(r0 + 0x4ccu) = u32(r1);  // (from the original)
    *gptr<u8>(r0 + 0x4d0u) = u8(r1);  // (from the original)
    *gptr<u8>(r0 + 0x4d1u) = u8(1u);  // (from the original)
    r3 = u32(*gptr<u8>(r0 + 0x281u));  // (from the original)
    r1 = r0 + 0x281u;  // (from the original)
    if (r4 == 0) {
        r3 = r3 & ~1u;
    } else {
        r3 = r3 | 1u;
    }
    *gptr<u8>(r1) = u8(r3);
    r3 = r3 & 0xffu;  // (from the original)
    if (r5 == 0) {
        r3 = r3 & ~4u;
    } else {
        r3 = r3 | 4u;
    }
    r2 = r3 & 0xffu;  // (from the original)
    if (r6 == 0) {
        r2 = r2 & ~2u;
    } else {
        r2 = r2 | 2u;
    }
    *gptr<u8>(r1) = u8(r3);
    *gptr<u8>(r1) = u8(r2);
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006ac784
GUEST_EXPORT(0x006ac784, d_006ac784::f_006ac784);

// f_006ac834: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ac834 {

struct __attribute__((packed)) Object_006ac834_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_006ac834_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x001abcd4, u32(u32, u32, u32, u32)> call_001abcd4;  // (from the original)
inline constexpr guest::Function<0x00317e2c, u32(u32, u32, u32, u32)> call_00317e2c;  // (from the original)
inline constexpr guest::Function<0x0031e204, u32(u32, u32, u32, u32)> call_0031e204;  // (from the original)
inline constexpr guest::Function<0x004edd6c, u32(u32, u32, u32, u32)> call_004edd6c;  // (from the original)
inline constexpr guest::Function<0x004edd84, u32(u32, u32, u32, u32)> call_004edd84;  // (from the original)
inline constexpr guest::Function<0x004ef50c, u32(u32, u32, u32, u32)> call_004ef50c;  // (from the original)

u32 f_006ac834(gptr<Object_006ac834_0> arg0) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r1 = 0x8f8c1cu;  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    arg0->word_0 = u32(r1);
    r0 = r0 + 0x384u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_004edd6c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0x8ed6acu;  // (from the original)
    *gptr<u32>(r0 - 0x384u) = u32(r1);  // (from the original)
    r0 = r0 - 0xd4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0031e204(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r0 - 0x2b0u;  // (from the original)
    r4 = 0u;
    r5 = ~0u;
    ea = r0 + 0x274u;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    ea = r0 + 0x26cu;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    r1 = r0 + 0x264u;  // (from the original)
    r0 = r0 + 0x15cu;  // (from the original)
    *gptr<u32>(r1) = u32(r4);
    *gptr<u32>(r1 + 4) = u32(r5);
    guest::cpu()->r[13] = r13;
    r0 = call_00317e2c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r0 - 0x18u;  // (from the original)
    ea = r0 + 0x10u;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    ea = r0 + 8u;
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    r1 = 0x8eb174u;  // (from the original)
    *gptr<u32>(r0) = u32(r4);
    *gptr<u32>(r0 + 4) = u32(r5);
    r0 = r0 - 0x144u;  // (from the original)
    r4 = r0;
    *gptr<u32>(r0) = u32(r1);
    guest::cpu()->r[13] = r13;
    r0 = call_001abcd4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0xccu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_004ef50c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0x54u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_004edd84(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0x78u;  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006ac834
GUEST_EXPORT(0x006ac834, d_006ac834::f_006ac834);

// f_006ac8e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ac8e8 {

struct __attribute__((packed)) Object_006ac8e8_0 {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u32 word_28;
    u32 word_2c;
};
GUEST_OFFSET(Object_006ac8e8_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_006ac8e8_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_006ac8e8_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_006ac8e8_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_006ac8e8_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_006ac8e8_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_006ac8e8_0, word_2c, 0x2c);  // (from the original)


void f_006ac8e8(gptr<Object_006ac8e8_0> arg0) {
    u32 r1 = 0;
    float S0 = 0;
    float S1 = 0;
    float S2 = 0;
    r1 = 0u;
    S1 = std::bit_cast<float>(*gptr<u32>(0x6ac91cu));  // (from the original)
    arg0->word_2c = u32(r1);
    S2 = std::bit_cast<float>(*gptr<u32>(0x6ac920u));  // (from the original)
    arg0->word_14 = u32(std::bit_cast<u32>(S1));
    S0 = std::bit_cast<float>(*gptr<u32>(0x6ac918u));  // (from the original)
    arg0->word_1c = u32(std::bit_cast<u32>(S1));
    arg0->word_18 = u32(std::bit_cast<u32>(S2));
    arg0->word_20 = u32(std::bit_cast<u32>(S0));
    arg0->word_28 = u32(std::bit_cast<u32>(S0));
    arg0->word_24 = u32(std::bit_cast<u32>(S2));
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return;
}

}  // namespace d_006ac8e8
GUEST_EXPORT(0x006ac8e8, d_006ac8e8::f_006ac8e8);

// f_006ac950: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ac950 {

struct __attribute__((packed)) Object_006ac950_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u8 unknown_8[0x8];  // (not used here)
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u32 word_28;
    u32 word_2c;
    u32 word_30;
};
GUEST_OFFSET(Object_006ac950_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_006ac950_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_006ac950_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_006ac950_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_006ac950_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_006ac950_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_006ac950_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_006ac950_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_006ac950_0, word_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Object_006ac950_0, word_30, 0x30);  // (from the original)

inline constexpr guest::Function<0x006f7e90, u32(u32, u32, u32, u32)> call_006f7e90;  // (from the original)
inline constexpr guest::Function<0x00770c10, u32(u32, u32, u32, u32)> call_00770c10;  // (from the original)

u32 f_006ac950(gptr<Object_006ac950_0> arg0, u32 r1, u32 r2, float S0, float S1) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    float S2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r0 = arg0->word_4;
    if (r0 == 0) {
        goto L_6ac9fc;
    }
    r1 = 0u;
    S1 = std::bit_cast<float>(*gptr<u32>(0x6aca04u));  // (from the original)
    arg0->word_2c = u32(r1);
    arg0->word_30 = u32(r1);
    S2 = std::bit_cast<float>(*gptr<u32>(0x6aca08u));  // (from the original)
    arg0->word_14 = u32(std::bit_cast<u32>(S1));
    S0 = std::bit_cast<float>(*gptr<u32>(0x6aca00u));  // (from the original)
    arg0->word_1c = u32(std::bit_cast<u32>(S1));
    arg0->word_18 = u32(std::bit_cast<u32>(S2));
    arg0->word_20 = u32(std::bit_cast<u32>(S0));
    arg0->word_28 = u32(std::bit_cast<u32>(S0));
    arg0->word_24 = u32(std::bit_cast<u32>(S2));
    if (u32(*gptr<u8>(r0 + 4u)) != 2u) {
        goto L_6ac9c8;
    }
    r0 = arg0->word_10;
    r1 = arg0->word_4;
    if (r0 == 0) {
        goto L_6ac9c8;
    }
    *gptr<u32>(r1 + 8u) = u32(*gptr<u32>(r0 + 0x14u));  // (from the original)
    r2 = *gptr<u32>(r0 + 0x18u);  // (from the original)
    *gptr<u32>(r1 + 0xcu) = u32(r2);  // (from the original)
    *gptr<u32>(r1 + 0x10u) = u32(*gptr<u32>(r0 + 0x1cu));  // (from the original)
L_6ac9c8:;
    r0 = 0x9502f8u;  // (from the original)
    r5 = *gptr<u32>(r0);
    if (r5 == 0) {
        goto L_6ac9fc;
    }
    r0 = r5 + 0x14u;  // (from the original)
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_00770c10(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    if (r0 != 0) {
        goto L_6ac9fc;
    }
    r1 = r4;
    r0 = r5 + 0x14u;  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    return call_006f7e90(r0, r1, r2, guest::cpu()->r[3]);
L_6ac9fc:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_006ac950
GUEST_EXPORT(0x006ac950, d_006ac950::f_006ac950);

// f_006aca78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006aca78 {

inline constexpr guest::Function<0x006f7e64, u32(u32, u32, u32, u32)> call_006f7e64;  // (from the original)

u32 f_006aca78(u32 r0, u32 r1, u32 r2) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_006f7e64(r0, r1, r2, guest::cpu()->r[3]);
    r1 = 0u;
    *gptr<u32>(r0 + 0x10u) = u32(r1);  // (from the original)
    *gptr<u32>(r0) = u32(0x8f8c74u);  // (from the original)
    *gptr<u32>(r0 + 0x2cu) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x30u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x34u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x38u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x3cu) = u32(r1);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006aca78
GUEST_EXPORT(0x006aca78, d_006aca78::f_006aca78);

// f_006acabc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006acabc {

inline constexpr guest::Function<0x006f7e8c, u32(u32, u32, u32, u32)> call_006f7e8c;  // (from the original)

u32 f_006acabc() {
    return call_006f7e8c(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_006acabc
GUEST_EXPORT(0x006acabc, d_006acabc::f_006acabc);

// f_006acac0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006acac0 {

inline constexpr guest::Function<0x002fd6bc, u32(u32, u32, u32, u32)> call_002fd6bc;  // (from the original)

u32 f_006acac0(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = r0 + 0xe30u;  // (from the original)
    r0 = call_002fd6bc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r0;
    r0 = r4 + 0x6000u;  // (from the original)
    *gptr<u8>(r0 + 0x359u) = u8(r1);  // (from the original)
    r0 = *gptr<u32>(r0 + 0x340u);  // (from the original)
    r1 = u32(*gptr<u8>(r0 + 0xb7u)) & 0xfeu;  // (from the original)
    *gptr<u8>(r0 + 0xb7u) = u8(r1);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006acac0
GUEST_EXPORT(0x006acac0, d_006acac0::f_006acac0);

// f_006acf28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006acf28 {

struct __attribute__((packed)) Object_006acf28_0 {
    u8 unknown_0[0x6340];  // (not used here)
    u32 word_6340;
    u8 unknown_6344[0x4];  // (not used here)
    u32 word_6348;
    u8 unknown_634c[0xc];  // (not used here)
    u8 byte_6358;
};
GUEST_OFFSET(Object_006acf28_0, word_6340, 0x6340);  // (from the original)
GUEST_OFFSET(Object_006acf28_0, word_6348, 0x6348);  // (from the original)
GUEST_OFFSET(Object_006acf28_0, byte_6358, 0x6358);  // (from the original)

inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)

u32 f_006acf28(gptr<Object_006acf28_0> arg0) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    ea = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    *gptr<u32>(ea + 8) = u32(r6);
    *gptr<u32>(ea + 0xc) = u32(r14);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r5 = r0;
    r0 = arg0->word_6340;
    if (u32(arg0->byte_6358) == 0) {
        r1 = 1u;
    } else {
        r1 = 0u;
    }
    *gptr<u8>(r0 + 0xb7u) = u8(r1 | u32(*gptr<u8>(r0 + 0xb7u)) & 0xfeu);  // (from the original)
    r1 = arg0->word_6348;
    r3 = u32(*gptr<u8>(r1 + 0xb7u)) & 0xfeu;  // (from the original)
    *gptr<u8>(r1 + 0xb7u) = u8(u32(arg0->byte_6358) | r3);  // (from the original)
    r0 = u32(arg0->byte_6358);
    if (r0 == 0) {
        r4 = 0u;
    } else {
        goto L_6acfbc;
    }
    do {
L_6acf84:;
        r0 = r4 + (r4 << 4);
        r1 = r5 + (r0 + (r0 << 1) << 4);
        r0 = *gptr<u32>(0x1808u + r1);  // (from the original)
        r2 = u32(*gptr<u8>(r0 + 0xb7u)) & 0xfeu;  // (from the original)
        *gptr<u8>(r0 + 0xb7u) = u8(r2);  // (from the original)
        r0 = r1 + 0x16bcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00568c10(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 0x18u);  // (from the original)
L_6acfbc:;
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

}  // namespace d_006acf28
GUEST_EXPORT(0x006acf28, d_006acf28::f_006acf28);

// f_006acfc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006acfc4 {

inline constexpr guest::Function<0x001b98e0, u32(u32, u32, u32, u32)> call_001b98e0;  // (from the original)
inline constexpr guest::Function<0x001b9964, u32(u32, u32, u32, u32)> call_001b9964;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x00568a80, u32(u32, u32, u32, u32)> call_00568a80;  // (from the original)
inline constexpr guest::Function<0x005e2e50, u32(u32, u32, u32, u32)> call_005e2e50;  // (from the original)
inline constexpr guest::Function<0x005e2f94, u32(u32, u32, u32, u32)> call_005e2f94;  // (from the original)
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32, u32, u32)> call_005ea8dc;  // (from the original)
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)
inline constexpr guest::Function<0x006ad3a0, u32(u32, u32, u32, u32)> call_006ad3a0;  // (from the original)

u32 f_006acfc4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0xb8u;  // (from the original)
    r5 = r0;
    r4 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_002fb94c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r6 = u32(*gptr<u8>(r4));
    r7 = u32(*gptr<u8>(r0 + 0x55d2u));  // (from the original)
    r9 = u32(*gptr<u8>(r4 + 1u));
    r0 = r13;
    r2 = 0x40u;  // (from the original)
    r1 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003083bc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r8 = 0x90a228u;  // (from the original)
    *gptr<u32>(r0) = u32(r8);
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005f4bfc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0 - 0xcu;  // (from the original)
    r1 = 0x80u;  // (from the original)
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, r3);
    r2 = 0x8906ecu;  // (from the original)
    r0 = r4 + 0x16u;  // (from the original)
    r1 = 0x20u;  // (from the original)
    do {
L_6ad024:;
        res = r1 - 1u;
        r1 = res;
        ea = r2;
        r3 = u32(*gptr<u16>(ea));
        ea = r0 + 2u;
        *gptr<u16>(ea) = u16(r3);
        ea = r2;
        r3 = u32(*gptr<u16>(ea));
        ea = r0 + 4u;
        *gptr<u16>(ea) = u16(r3);
        r0 = ea;
        guest::preempt();
    } while (res != 0);
    r4 = 0x95deccu;  // (from the original)
    r1 = 0u;
    r0 = *gptr<u32>(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_005ea8f8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r6 == r7) {
        r2 = r9;
        r1 = r6;
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_001b9964(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    } else {
        r1 = r6;
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_001b98e0(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r0 = *gptr<u32>(r4);
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea8dc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x6ad0f8u;  // (from the original)
    r0 = r5 + 0x4bcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00568a80(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r2 = r13;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_006ad3a0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r5 + 0x6418u;  // (from the original)
    r1 = r13;
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_005e2e50(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_005e2f94(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r13) = u32(r8);
    r0 = r13;
    r13 = r13 + 0xb8u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006acfc4
GUEST_EXPORT(0x006acfc4, d_006acfc4::f_006acfc4);

// f_006adc30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006adc30 {

struct __attribute__((packed)) Object_006adc30_0 {
    u8 unknown_0[0x16b8];  // (not used here)
    u32 word_16b8;
    u8 unknown_16bc[0x4c80];  // (not used here)
    u32 word_633c;
};
GUEST_OFFSET(Object_006adc30_0, word_16b8, 0x16b8);  // (from the original)
GUEST_OFFSET(Object_006adc30_0, word_633c, 0x633c);  // (from the original)

inline constexpr guest::Function<0x002f6b14, u32(u32, u32, u32, u32)> call_002f6b14;  // (from the original)
inline constexpr guest::Function<0x002f6e14, u32(u32, u32, u32, u32)> call_002f6e14;  // (from the original)
inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> call_004b4fc0;  // (from the original)
inline constexpr guest::Function<0x004b6dc8, u32(u32, u32, u32, u32)> call_004b6dc8;  // (from the original)
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> call_00568984;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)
inline constexpr guest::Function<0x005697e0, u32(u32, u32, u32, u32)> call_005697e0;  // (from the original)

u32 f_006adc30(gptr<Object_006adc30_0> arg0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0 + 0x16b8u;  // (from the original)
    r4 = r0;
    if (arg0->word_16b8 != 0x19u) {  // (from the original)
        r1 = arg0->word_633c;
        r0 = *gptr<u32>(r1 + 0xcu);  // (from the original)
        if (r0 != 0) {
            guest::cpu()->s[0] = S0;
            r0 = call_004b6dc8(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            S0 = guest::cpu()->s[0];
        }
        r0 = *gptr<u32>(r5);
        r0 = r0 + (r0 << 4);
        r0 = r4 + (r0 + (r0 << 1) << 4);
        r6 = r0 + 0x16bcu;  // (from the original)
        r0 = r0 + 0x1908u;  // (from the original)
        guest::cpu()->s[0] = S0;
        r0 = call_002f6e14(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        r0 = r6 + 0x24cu;  // (from the original)
        guest::cpu()->s[0] = S0;
        r0 = call_002f6b14(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        r0 = *gptr<u32>(r5);
        r0 = r0 + (r0 << 4);
        r0 = r4 + (r0 + (r0 << 1) << 4) + 0x16bcu;  // (from the original)
        r1 = *gptr<u32>(r0 + 0x320u) & ~8u;  // (from the original)
        *gptr<u32>(r0 + 0x320u) = u32(r1);  // (from the original)
        *gptr<u32>(r5) = u32(0x19u);  // (from the original)
    }
    r0 = u32(*gptr<u8>(r4 + 0x9c8u));  // (from the original)
    if (r0 == 1u) {
        r0 = r4 + 0x9acu;  // (from the original)
        S0 = std::bit_cast<float>(*gptr<u32>(0x6add18u));  // (from the original)
        r5 = r0;
        guest::cpu()->s[0] = S0;
        r0 = call_005697e0(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        r0 = r4 + 0x798u;  // (from the original)
        r4 = r0;
        guest::cpu()->s[0] = S0;
        r0 = call_00568c10(r0, r1, r2, r3);
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        r1 = 0x881ae4u;  // (from the original)
        r2 = 1u;
        r0 = r4;
        guest::cpu()->s[0] = S0;
        r0 = call_004b4fc0(r0, r1, r2, r3);
        S0 = guest::cpu()->s[0];
        r2 = r0;
        r1 = r5;
        r0 = r4;
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        r3 = 0u;
        guest::cpu()->s[0] = S0;
        return call_00568984(r0, r1, r2, r3);
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_006adc30
GUEST_EXPORT(0x006adc30, d_006adc30::f_006adc30);

// f_006add20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006add20 {

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x00300a64, u32(u32, u32, u32, u32)> call_00300a64;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x00568a80, u32(u32, u32, u32, u32)> call_00568a80;  // (from the original)
inline constexpr guest::Function<0x0056d374, u32(u32, u32, u32, u32)> call_0056d374;  // (from the original)
inline constexpr guest::Function<0x0056d488, u32(u32, u32, u32, u32)> call_0056d488;  // (from the original)
inline constexpr guest::Function<0x005e2e50, u32(u32, u32, u32, u32)> call_005e2e50;  // (from the original)
inline constexpr guest::Function<0x005e2f94, u32(u32, u32, u32, u32)> call_005e2f94;  // (from the original)
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32, u32, u32)> call_005ea8dc;  // (from the original)
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;  // (from the original)
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> call_005ea964;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)
inline constexpr guest::Function<0x006ad3a0, u32(u32, u32, u32, u32)> call_006ad3a0;  // (from the original)

u32 f_006add20(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0xc0u;  // (from the original)
    r5 = r0;
    r6 = r1;
    r7 = r2;
    r0 = r13 + 0x70u;  // (from the original)
    r10 = 4u;
    r2 = 9u;
    r1 = r13 + 0x88u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003083bc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r8 = 0x90a3e8u;  // (from the original)
    *gptr<u32>(r0) = u32(r8);
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005f4bfc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0 - 0xcu;  // (from the original)
    r1 = 0x12u;  // (from the original)
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r9 = 0x8906ecu;  // (from the original)
    r0 = r4 + 0x18u;  // (from the original)
    *gptr<u16>(r4 + 0x18u) = u16(u32(*gptr<u16>(r9)));  // (from the original)
    r1 = 4u;
    do {
L_6add78:;
        ea = r9;
        r2 = u32(*gptr<u16>(ea));
        res = r1 - 1u;
        r1 = res;
        ea = r0 + 2u;
        *gptr<u16>(ea) = u16(r2);
        ea = r9;
        r2 = u32(*gptr<u16>(ea));
        ea = r0 + 4u;
        *gptr<u16>(ea) = u16(r2);
        r0 = ea;
        guest::preempt();
    } while (res != 0);
    r0 = r4;
    r1 = r10;
    guest::cpu()->r[13] = r13;
    r0 = call_0056d374(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r0 = r13 + 0x70u;  // (from the original)
    r2 = u32(*gptr<u8>(r6 + 0x14u)) & 1u;  // (from the original)
    r1 = r6 + 2u;
    guest::cpu()->r[13] = r13;
    r0 = call_0056d488(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    if (r7 == 0) {
        r6 = 0x162u;  // (from the original)
    } else {
        r6 = 0x161u;  // (from the original)
    }
    r0 = r13 + 8u;
    r2 = 0x28u;  // (from the original)
    r1 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003083bc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = 0x90a030u;  // (from the original)
    *gptr<u32>(r0) = u32(r7);
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005f4bfc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0 - 0xcu;  // (from the original)
    r1 = 0x50u;  // (from the original)
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x18u;  // (from the original)
    r4 = 0u;
    r0 = r0 - 2u;
    r1 = 0x14u;  // (from the original)
    do {
L_6addf8:;
        ea = r9;
        r2 = u32(*gptr<u16>(ea));
        res = r1 - 1u;
        r1 = res;
        ea = r0 + 2u;
        *gptr<u16>(ea) = u16(r2);
        ea = r9;
        r2 = u32(*gptr<u16>(ea));
        ea = r0 + 4u;
        *gptr<u16>(ea) = u16(r2);
        r0 = ea;
        guest::preempt();
    } while (res != 0);
    r9 = 0x95deccu;  // (from the original)
    r1 = 0u;
    r0 = *gptr<u32>(r9);
    guest::cpu()->r[13] = r13;
    r0 = call_005ea8f8(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(*gptr<u32>(r9) + 0x14u);  // (from the original)
    r2 = 0u;
    r1 = r13 + 0x70u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00300a64(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(r4);
    r0 = *gptr<u32>(r9);
    r3 = r6;
    r2 = 0x6adeecu;  // (from the original)
    r1 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea964(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r9);
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea8dc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x6adef8u;  // (from the original)
    r0 = r5 + 0x4bcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00568a80(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r2 = r13 + 8u;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_006ad3a0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r5 + 0x64dcu;  // (from the original)
    r1 = r13 + 8u;
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_005e2e50(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_005e2f94(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r13 + 8u) = u32(r7);
    *gptr<u32>(r13 + 0x70u) = u32(r8);  // (from the original)
    r0 = r13 + 0x70u;  // (from the original)
    r13 = r13 + 0xc0u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006add20
GUEST_EXPORT(0x006add20, d_006add20::f_006add20);

// f_006ae344: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ae344 {

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x0056e04c, u32(u32, u32, u32, u32)> call_0056e04c;  // (from the original)
inline constexpr guest::Function<0x005e2e50, u32(u32, u32, u32, u32)> call_005e2e50;  // (from the original)
inline constexpr guest::Function<0x005e2f94, u32(u32, u32, u32, u32)> call_005e2f94;  // (from the original)
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32, u32, u32)> call_005ea8dc;  // (from the original)
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;  // (from the original)
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> call_005ea964;  // (from the original)
inline constexpr guest::Function<0x005f12f4, u32(u32, u32, u32, u32)> call_005f12f4;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)

u32 f_006ae344(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x98u;  // (from the original)
    r7 = r0;
    r5 = r1;
    r0 = r13 + 0x50u;  // (from the original)
    r2 = 9u;
    r1 = r13 + 0x68u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003083bc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = 0x90a3e8u;  // (from the original)
    *gptr<u32>(r0) = u32(r6);
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005f4bfc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0 - 0xcu;  // (from the original)
    r1 = 0x12u;  // (from the original)
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r8 = 0x8906ecu;  // (from the original)
    r0 = r4 + 0x18u;  // (from the original)
    *gptr<u16>(r4 + 0x18u) = u16(u32(*gptr<u16>(r8)));  // (from the original)
    r1 = 4u;
    do {
L_6ae394:;
        ea = r8;
        r2 = u32(*gptr<u16>(ea));
        res = r1 - 1u;
        r1 = res;
        ea = r0 + 2u;
        *gptr<u16>(ea) = u16(r2);
        ea = r8;
        r2 = u32(*gptr<u16>(ea));
        ea = r0 + 4u;
        *gptr<u16>(ea) = u16(r2);
        r0 = ea;
        guest::preempt();
    } while (res != 0);
    r1 = r5 + 0x16u;  // (from the original)
    r0 = r13 + 0x50u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056e04c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r0 = r13 + 4u;
    r2 = 0x19u;  // (from the original)
    r1 = r13 + 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003083bc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = 0x909e00u;  // (from the original)
    *gptr<u32>(r0) = u32(r5);
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005f4bfc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0 - 0xcu;  // (from the original)
    r1 = 0x32u;  // (from the original)
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x18u;  // (from the original)
    *gptr<u16>(r4 + 0x18u) = u16(u32(*gptr<u16>(r8)));  // (from the original)
    r1 = 0xcu;  // (from the original)
    do {
L_6ae3f4:;
        ea = r8;
        r2 = u32(*gptr<u16>(ea));
        res = r1 - 1u;
        r1 = res;
        ea = r0 + 2u;
        *gptr<u16>(ea) = u16(r2);
        ea = r8;
        r2 = u32(*gptr<u16>(ea));
        ea = r0 + 4u;
        *gptr<u16>(ea) = u16(r2);
        r0 = ea;
        guest::preempt();
    } while (res != 0);
    r4 = 0x95deccu;  // (from the original)
    r1 = 0u;
    r0 = *gptr<u32>(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_005ea8f8(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(*gptr<u32>(r4) + 0x14u);  // (from the original)
    r2 = 0u;
    r1 = r13 + 0x50u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005f12f4(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(0u);
    r3 = 0x15fu;  // (from the original)
    r0 = *gptr<u32>(r4);
    r2 = 0x6ae4c8u;  // (from the original)
    r1 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea964(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r4);
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea8dc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r7 + 0x65a0u;  // (from the original)
    r1 = r13 + 4u;
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_005e2e50(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_005e2f94(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r13 + 4u) = u32(r5);
    *gptr<u32>(r13 + 0x50u) = u32(r6);  // (from the original)
    r0 = r13 + 0x50u;  // (from the original)
    r13 = r13 + 0x98u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006ae344
GUEST_EXPORT(0x006ae344, d_006ae344::f_006ae344);

// f_006ae6a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ae6a0 {

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x00300914, u32(u32, u32, u32, u32)> call_00300914;  // (from the original)
inline constexpr guest::Function<0x00300924, u32(u32, u32, u32, u32)> call_00300924;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x00568a80, u32(u32, u32, u32, u32)> call_00568a80;  // (from the original)
inline constexpr guest::Function<0x005e2e50, u32(u32, u32, u32, u32)> call_005e2e50;  // (from the original)
inline constexpr guest::Function<0x005e2f94, u32(u32, u32, u32, u32)> call_005e2f94;  // (from the original)
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32, u32, u32)> call_005ea8dc;  // (from the original)
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;  // (from the original)
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> call_005ea964;  // (from the original)
inline constexpr guest::Function<0x005f1224, u32(u32, u32, u32, u32)> call_005f1224;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)
inline constexpr guest::Function<0x006ad3a0, u32(u32, u32, u32, u32)> call_006ad3a0;  // (from the original)

u32 f_006ae6a0(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x88u;  // (from the original)
    r6 = r0;
    r4 = r1;
    r0 = r13 + 8u;
    r2 = 0x28u;  // (from the original)
    r1 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003083bc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = 0x90a030u;  // (from the original)
    *gptr<u32>(r0) = u32(r7);
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005f4bfc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0 - 0xcu;  // (from the original)
    r1 = 0x50u;  // (from the original)
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, r3);
    r2 = 0x8906ecu;  // (from the original)
    r0 = r5 + 0x18u;  // (from the original)
    r5 = 0u;
    r0 = r0 - 2u;
    r1 = 0x14u;  // (from the original)
    do {
L_6ae6f0:;
        ea = r2;
        r3 = u32(*gptr<u16>(ea));
        res = r1 - 1u;
        r1 = res;
        ea = r0 + 2u;
        *gptr<u16>(ea) = u16(r3);
        ea = r2;
        r3 = u32(*gptr<u16>(ea));
        ea = r0 + 4u;
        *gptr<u16>(ea) = u16(r3);
        r0 = ea;
        guest::preempt();
    } while (res != 0);
    r8 = 0x95deccu;  // (from the original)
    r1 = 0u;
    r0 = *gptr<u32>(r8);
    guest::cpu()->r[13] = r13;
    r0 = call_005ea8f8(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(*gptr<u32>(r8) + 0x14u);  // (from the original)
    r1 = uxth(r4);
    r2 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005f1224(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(*gptr<u32>(r8) + 0x14u);  // (from the original)
    r2 = 0u;
    r1 = r4 << 8 >> 0x18;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00300914(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(*gptr<u32>(r8) + 0x14u);  // (from the original)
    r1 = r4 >> 0x18;  // (from the original)
    r2 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_00300924(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(r5);
    r3 = 0x165u;  // (from the original)
    r0 = *gptr<u32>(r8);
    r2 = 0x6ae7f8u;  // (from the original)
    r1 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea964(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r8);
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea8dc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x6ae804u;  // (from the original)
    r0 = r6 + 0x4bcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00568a80(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r2 = r13 + 8u;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_006ad3a0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r6 + 0x68b0u;  // (from the original)
    r1 = r13 + 8u;
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_005e2e50(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_005e2f94(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r13 + 8u) = u32(r7);
    r0 = r13 + 8u;
    r13 = r13 + 0x88u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006ae6a0
GUEST_EXPORT(0x006ae6a0, d_006ae6a0::f_006ae6a0);

// f_006ae870: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ae870 {

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x00300914, u32(u32, u32, u32, u32)> call_00300914;  // (from the original)
inline constexpr guest::Function<0x00300924, u32(u32, u32, u32, u32)> call_00300924;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x00568a80, u32(u32, u32, u32, u32)> call_00568a80;  // (from the original)
inline constexpr guest::Function<0x005e2e50, u32(u32, u32, u32, u32)> call_005e2e50;  // (from the original)
inline constexpr guest::Function<0x005e2f94, u32(u32, u32, u32, u32)> call_005e2f94;  // (from the original)
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32, u32, u32)> call_005ea8dc;  // (from the original)
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;  // (from the original)
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> call_005ea964;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)
inline constexpr guest::Function<0x006ad3a0, u32(u32, u32, u32, u32)> call_006ad3a0;  // (from the original)

u32 f_006ae870(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x88u;  // (from the original)
    r5 = r0;
    r6 = r1;
    r0 = r13 + 8u;
    r2 = 0x28u;  // (from the original)
    r1 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003083bc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = 0x90a030u;  // (from the original)
    *gptr<u32>(r0) = u32(r7);
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005f4bfc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0 - 0xcu;  // (from the original)
    r1 = 0x50u;  // (from the original)
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, r3);
    r2 = 0x8906ecu;  // (from the original)
    r0 = r4 + 0x18u;  // (from the original)
    r4 = 0u;
    r0 = r0 - 2u;
    r1 = 0x14u;  // (from the original)
    do {
L_6ae8c0:;
        ea = r2;
        r3 = u32(*gptr<u16>(ea));
        res = r1 - 1u;
        r1 = res;
        ea = r0 + 2u;
        *gptr<u16>(ea) = u16(r3);
        ea = r2;
        r3 = u32(*gptr<u16>(ea));
        ea = r0 + 4u;
        *gptr<u16>(ea) = u16(r3);
        r0 = ea;
        guest::preempt();
    } while (res != 0);
    r8 = 0x95deccu;  // (from the original)
    r1 = 0u;
    r0 = *gptr<u32>(r8);
    guest::cpu()->r[13] = r13;
    r0 = call_005ea8f8(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(*gptr<u32>(r8) + 0x14u);  // (from the original)
    r1 = u32(*gptr<u8>(r6));
    r2 = 1u;
    guest::cpu()->r[13] = r13;
    r0 = call_00300914(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(*gptr<u32>(r8) + 0x14u);  // (from the original)
    r1 = u32(*gptr<u8>(r6 + 1u));
    r2 = 1u;
    guest::cpu()->r[13] = r13;
    r0 = call_00300924(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(r4);
    r3 = 0x163u;  // (from the original)
    r0 = *gptr<u32>(r8);
    r2 = 0x6ae9acu;  // (from the original)
    r1 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea964(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r8);
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea8dc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x6ae9b8u;  // (from the original)
    r0 = r5 + 0x4bcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00568a80(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r2 = r13 + 8u;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_006ad3a0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r5 + 0x6664u;  // (from the original)
    r1 = r13 + 8u;
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_005e2e50(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_005e2f94(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r13 + 8u) = u32(r7);
    r0 = r13 + 8u;
    r13 = r13 + 0x88u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006ae870
GUEST_EXPORT(0x006ae870, d_006ae870::f_006ae870);

// f_006ae9c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ae9c4 {

inline constexpr guest::Function<0x002b6a00, u32(u32, u32, u32, u32)> call_002b6a00;  // (from the original)
inline constexpr guest::Function<0x002f6a30, u32(u32, u32, u32, u32)> call_002f6a30;  // (from the original)
inline constexpr guest::Function<0x002f6e98, u32(u32, u32, u32, u32)> call_002f6e98;  // (from the original)
inline constexpr guest::Function<0x002f7508, u32(u32, u32, u32, u32)> call_002f7508;  // (from the original)
inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> call_004b4fc0;  // (from the original)
inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> call_0056878c;  // (from the original)

u32 f_006ae9c4(u32 r0, float S0, float S1) {
    u32 ea = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r1 = r0 + 0x2cu;  // (from the original)
    r6 = 0x8817a8u;  // (from the original)
    r13 = r13 - 0x60u;  // (from the original)
    r9 = r13 + 0x24u;  // (from the original)
    r7 = r0 + 0x798u;  // (from the original)
    ea = r6 + 0x224u;  // (from the original)
    r2 = *gptr<u32>(ea + 4);
    r3 = *gptr<u32>(ea + 8);
    r5 = *gptr<u32>(ea + 0xc);  // (from the original)
    r8 = *gptr<u32>(ea + 0x10);  // (from the original)
    r12 = *gptr<u32>(ea + 0x14);  // (from the original)
    *gptr<u32>(r9) = u32(*gptr<u32>(ea));
    *gptr<u32>(r9 + 4) = u32(r2);
    *gptr<u32>(r9 + 8) = u32(r3);
    *gptr<u32>(r9 + 0xc) = u32(r5);  // (from the original)
    *gptr<u32>(r9 + 0x10) = u32(r8);  // (from the original)
    *gptr<u32>(r9 + 0x14) = u32(r12);  // (from the original)
    r3 = r13 + 0x1cu;  // (from the original)
    r2 = 0u;
    *gptr<u32>(r13 + 0x3cu) = u32(*gptr<u32>(r6 + 0x23cu));  // (from the original)
    r0 = r4 + 0x15d0u;  // (from the original)
    *gptr<u32>(r3) = u32(r1);
    *gptr<u32>(r3 + 4) = u32(r7);
    r1 = r13 + 0x1cu;  // (from the original)
    r5 = r0;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_002f6e98(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    ea = r5 + 0xd4u;  // (from the original)
    r9 = 0u;
    S0 = std::bit_cast<float>(*gptr<u32>(0x6aeb00u));  // (from the original)
    r1 = *gptr<u32>(ea) | 0x40u;  // (from the original)
    ea = r5 + 0xd4u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    ea = r13;
    *gptr<u32>(ea) = u32(r9);
    ea = r13 + 4u;
    *gptr<u32>(ea) = u32(r9);
    S1 = std::bit_cast<float>(*gptr<u32>(0x6aeb04u));  // (from the original)
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
    ea = r13 + 8u;
    *gptr<u32>(ea) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(ea + 4) = u32(std::bit_cast<u32>(S1));
    r8 = 1u;
    ea = r6 + 8u;
    r1 = *gptr<u32>(ea);
    r6 = *gptr<u32>(ea + 4);
    r0 = r7;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_0056878c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    *gptr<u32>(r13) = u32(r0);
    r2 = 1u;
    r1 = r6;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_004b4fc0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r6 = r4 + 0x14f0u;  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(r0);
    r1 = r13;
    r0 = r6;
    *gptr<u32>(r13 + 0x10u) = u32(r9);  // (from the original)
    *gptr<u32>(r13 + 0x14u) = u32(r9);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_002b6a00(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r2 = 1u;
    r1 = r6;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_002f7508(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r1 = 0u;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_002f6a30(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r2 = 0x100041fu;  // (from the original)
    *gptr<u32>(r5 + 0xd4u) = u32(*gptr<u32>(r5 + 0xd4u) | 8u);  // (from the original)
    r0 = 0x15bcu;  // (from the original)
    r1 = r0 + 0xeu;  // (from the original)
    *gptr<u32>(r0 + r4) = u32(r2);
    *gptr<u8>(r1 + r4) = u8(r8);
    *gptr<u32>(r6 + 0xd0u) = u32(r2 - 0x87u);  // (from the original)
    r1 = r1 + 0xd6u;  // (from the original)
    *gptr<u8>(r6 + 0xdbu) = u8(r8);  // (from the original)
    r0 = 3u;
    *gptr<u8>(r6 + 0xdcu) = u8(r8);  // (from the original)
    *gptr<u16>(r1 + r4) = u16(r0);
    r13 = r13 + 0x60u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_006ae9c4
GUEST_EXPORT(0x006ae9c4, d_006ae9c4::f_006ae9c4);

// f_006aee8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006aee8c {

inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x00568a80, u32(u32, u32, u32, u32)> call_00568a80;  // (from the original)
inline constexpr guest::Function<0x005e2e50, u32(u32, u32, u32, u32)> call_005e2e50;  // (from the original)
inline constexpr guest::Function<0x005e2f94, u32(u32, u32, u32, u32)> call_005e2f94;  // (from the original)
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32, u32, u32)> call_005ea8dc;  // (from the original)
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;  // (from the original)
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> call_005ea964;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)
inline constexpr guest::Function<0x006ad3a0, u32(u32, u32, u32, u32)> call_006ad3a0;  // (from the original)

u32 f_006aee8c(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x70u;  // (from the original)
    r4 = r0;
    r0 = r13 + 4u;
    r2 = 0x1eu;  // (from the original)
    r1 = r13 + 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003083bc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = 0x909ea8u;  // (from the original)
    *gptr<u32>(r0) = u32(r5);
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005f4bfc(r0, r1, r2, r3);
    r0 = r0 - 0xcu;  // (from the original)
    r6 = 0u;
    *gptr<u32>(r0 + 0x18u) = u32(r6);  // (from the original)
    *gptr<u32>(r0 + 0x1cu) = u32(r6);  // (from the original)
    *gptr<u32>(r0 + 0x20u) = u32(r6);  // (from the original)
    *gptr<u32>(r0 + 0x24u) = u32(r6);  // (from the original)
    *gptr<u32>(r0 + 0x28u) = u32(r6);  // (from the original)
    *gptr<u32>(r0 + 0x2cu) = u32(r6);  // (from the original)
    *gptr<u32>(r0 + 0x30u) = u32(r6);  // (from the original)
    *gptr<u32>(r0 + 0x34u) = u32(r6);  // (from the original)
    *gptr<u32>(r0 + 0x38u) = u32(r6);  // (from the original)
    *gptr<u32>(r0 + 0x3cu) = u32(r6);  // (from the original)
    *gptr<u32>(r0 + 0x40u) = u32(r6);  // (from the original)
    *gptr<u32>(r0 + 0x44u) = u32(r6);  // (from the original)
    *gptr<u32>(r0 + 0x48u) = u32(r6);  // (from the original)
    r2 = 0x8906ecu;  // (from the original)
    *gptr<u32>(r0 + 0x4cu) = u32(r6);  // (from the original)
    *gptr<u32>(r0 + 0x50u) = u32(r6);  // (from the original)
    r1 = 0xfu;  // (from the original)
    r0 = r0 + 0x16u;  // (from the original)
    do {
L_6aef04:;
        ea = r2;
        r3 = u32(*gptr<u16>(ea));
        res = r1 - 1u;
        r1 = res;
        ea = r0 + 2u;
        *gptr<u16>(ea) = u16(r3);
        ea = r2;
        r3 = u32(*gptr<u16>(ea));
        ea = r0 + 4u;
        *gptr<u16>(ea) = u16(r3);
        r0 = ea;
        guest::preempt();
    } while (res != 0);
    r7 = 0x95deccu;  // (from the original)
    r1 = 0u;
    r0 = *gptr<u32>(r7);
    guest::cpu()->r[13] = r13;
    r0 = call_005ea8f8(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(r6);
    r3 = 0x167u;  // (from the original)
    r2 = 0x881a44u;  // (from the original)
    r0 = *gptr<u32>(r7);
    r1 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea964(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r7);
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea8dc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x4bcu;  // (from the original)
    r1 = 0x881a68u;  // (from the original)
    r6 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_00568a80(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r2 = r13 + 4u;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_006ad3a0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x881a5cu;  // (from the original)
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_00568a80(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r2 = r13 + 4u;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_006ad3a0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x6974u;  // (from the original)
    r1 = r13 + 4u;
    r6 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_005e2e50(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_005e2f94(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x6a38u;  // (from the original)
    r1 = r13 + 4u;
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_005e2e50(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_005e2f94(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r13 + 4u) = u32(r5);
    r0 = r13 + 4u;
    r13 = r13 + 0x70u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006aee8c
GUEST_EXPORT(0x006aee8c, d_006aee8c::f_006aee8c);

// f_006af218: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006af218 {

inline constexpr guest::Function<0x002b6a00, u32(u32, u32, u32, u32)> call_002b6a00;  // (from the original)
inline constexpr guest::Function<0x002f6a30, u32(u32, u32, u32, u32)> call_002f6a30;  // (from the original)
inline constexpr guest::Function<0x002f6e98, u32(u32, u32, u32, u32)> call_002f6e98;  // (from the original)
inline constexpr guest::Function<0x002f7508, u32(u32, u32, u32, u32)> call_002f7508;  // (from the original)
inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> call_004b4fc0;  // (from the original)
inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> call_0056878c;  // (from the original)

u32 f_006af218(u32 r0, float S0, float S1) {
    u32 ea = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r1 = r0 + 0x2cu;  // (from the original)
    r6 = 0x8817a8u;  // (from the original)
    r13 = r13 - 0x60u;  // (from the original)
    r9 = r13 + 0x24u;  // (from the original)
    r7 = r0 + 0x4bcu;  // (from the original)
    ea = r6 + 0x200u;  // (from the original)
    r2 = *gptr<u32>(ea + 4);
    r3 = *gptr<u32>(ea + 8);
    r5 = *gptr<u32>(ea + 0xc);  // (from the original)
    r8 = *gptr<u32>(ea + 0x10);  // (from the original)
    r12 = *gptr<u32>(ea + 0x14);  // (from the original)
    *gptr<u32>(r9) = u32(*gptr<u32>(ea));
    *gptr<u32>(r9 + 4) = u32(r2);
    *gptr<u32>(r9 + 8) = u32(r3);
    *gptr<u32>(r9 + 0xc) = u32(r5);  // (from the original)
    *gptr<u32>(r9 + 0x10) = u32(r8);  // (from the original)
    *gptr<u32>(r9 + 0x14) = u32(r12);  // (from the original)
    r3 = r13 + 0x1cu;  // (from the original)
    r2 = 0u;
    *gptr<u32>(r13 + 0x3cu) = u32(*gptr<u32>(r6 + 0x218u));  // (from the original)
    r0 = r4 + 0x140cu;  // (from the original)
    *gptr<u32>(r3) = u32(r1);
    *gptr<u32>(r3 + 4) = u32(r7);
    r1 = r13 + 0x1cu;  // (from the original)
    r5 = r0;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_002f6e98(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r9 = 0u;
    S0 = std::bit_cast<float>(*gptr<u32>(0x6af350u));  // (from the original)
    *gptr<u32>(r5 + 0xd4u) = u32(*gptr<u32>(r5 + 0xd4u) | 0x40u);  // (from the original)
    *gptr<u32>(r13) = u32(r9);
    *gptr<u32>(r13 + 4u) = u32(r9);
    S1 = std::bit_cast<float>(*gptr<u32>(0x6af354u));  // (from the original)
    r0 = r13 + 8u;
    *gptr<u32>(r13 + 8u) = u32(r9);
    *gptr<u32>(r13 + 0xcu) = u32(r9);  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(r9);  // (from the original)
    *gptr<u32>(r13 + 0x14u) = u32(r9);  // (from the original)
    *gptr<u32>(r13 + 0x18u) = u32(r9);  // (from the original)
    r8 = 1u;
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r0 + 4) = u32(std::bit_cast<u32>(S1));
    r0 = r7;
    r1 = *gptr<u32>(r6);
    r6 = *gptr<u32>(r6 + 4);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_0056878c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    *gptr<u32>(r13) = u32(r0);
    r2 = 1u;
    r1 = r6;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_004b4fc0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r6 = r4 + 0x132cu;  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(r0);
    r1 = r13;
    r0 = r6;
    *gptr<u32>(r13 + 0x10u) = u32(r9);  // (from the original)
    *gptr<u32>(r13 + 0x14u) = u32(r9);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_002b6a00(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r2 = 1u;
    r1 = r6;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_002f7508(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r2 = 0x13f8u;  // (from the original)
    r1 = 0x100041du;  // (from the original)
    *gptr<u32>(r2 + r4) = u32(r1);
    *gptr<u8>(r2 + 0xeu + r4) = u8(r8);  // (from the original)
    *gptr<u32>(r6 + 0xd0u) = u32(r1 - 0x85u);  // (from the original)
    *gptr<u8>(r6 + 0xdbu) = u8(r8);  // (from the original)
    r1 = 0u;
    r0 = r5;
    *gptr<u8>(r6 + 0xdcu) = u8(r8);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_002f6a30(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r1 = 0x14dcu;  // (from the original)
    *gptr<u32>(r5 + 0xd4u) = u32(*gptr<u32>(r5 + 0xd4u) | 8u);  // (from the original)
    r0 = 3u;
    *gptr<u16>(r1 + r4) = u16(r0);
    r13 = r13 + 0x60u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_006af218
GUEST_EXPORT(0x006af218, d_006af218::f_006af218);

// f_006af568: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006af568 {

inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> call_004b4fc0;  // (from the original)
inline constexpr guest::Function<0x00568630, u32(u32, u32, u32, u32)> call_00568630;  // (from the original)
inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> call_0056878c;  // (from the original)
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> call_00568984;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)
inline constexpr guest::Function<0x00569508, u32(u32, u32, u32, u32)> call_00569508;  // (from the original)
inline constexpr guest::Function<0x005e2e50, u32(u32, u32, u32, u32)> call_005e2e50;  // (from the original)
inline constexpr guest::Function<0x005e2f94, u32(u32, u32, u32, u32)> call_005e2f94;  // (from the original)
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32, u32, u32)> call_005ea8dc;  // (from the original)
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;  // (from the original)
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> call_005ea964;  // (from the original)
inline constexpr guest::Function<0x005f12c4, u32(u32, u32, u32, u32)> call_005f12c4;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)
inline constexpr guest::Function<0x00770300, u32(u32, u32, u32, u32)> call_00770300;  // (from the original)
inline constexpr guest::Function<0x0077033c, u32(u32, u32, u32, u32)> call_0077033c;  // (from the original)

u32 f_006af568(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r13 = r13 - 0x68u;  // (from the original)
    r5 = r2;
    r6 = r1;
    r0 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_0077033c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r10 = 0u;
    r8 = r4 + 0x4bcu;  // (from the original)
    if (r0 == 0) {
        goto L_6af740;
    }
    r0 = r13 + 8u;
    r2 = 0x14u;  // (from the original)
    r1 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003083bc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = 0x909ce8u;  // (from the original)
    *gptr<u32>(r0) = u32(r7);
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005f4bfc(r0, r1, r2, r3);
    r0 = r0 - 0xcu;  // (from the original)
    r2 = 0x8906ecu;  // (from the original)
    *gptr<u32>(r0 + 0x18u) = u32(r10);  // (from the original)
    *gptr<u32>(r0 + 0x1cu) = u32(r10);  // (from the original)
    *gptr<u32>(r0 + 0x20u) = u32(r10);  // (from the original)
    *gptr<u32>(r0 + 0x24u) = u32(r10);  // (from the original)
    *gptr<u32>(r0 + 0x28u) = u32(r10);  // (from the original)
    *gptr<u32>(r0 + 0x2cu) = u32(r10);  // (from the original)
    *gptr<u32>(r0 + 0x30u) = u32(r10);  // (from the original)
    *gptr<u32>(r0 + 0x34u) = u32(r10);  // (from the original)
    *gptr<u32>(r0 + 0x38u) = u32(r10);  // (from the original)
    *gptr<u32>(r0 + 0x3cu) = u32(r10);  // (from the original)
    r1 = 0xau;  // (from the original)
    r0 = r0 + 0x16u;  // (from the original)
    do {
L_6af5ec:;
        ea = r2;
        r3 = u32(*gptr<u16>(ea));
        res = r1 - 1u;
        r1 = res;
        ea = r0 + 2u;
        *gptr<u16>(ea) = u16(r3);
        ea = r2;
        r3 = u32(*gptr<u16>(ea));
        ea = r0 + 4u;
        *gptr<u16>(ea) = u16(r3);
        r0 = ea;
        guest::preempt();
    } while (res != 0);
    r9 = 0x95deccu;  // (from the original)
    r1 = 0u;
    r0 = *gptr<u32>(r9);
    guest::cpu()->r[13] = r13;
    r0 = call_005ea8f8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r5 != 0) {
        r0 = r6;
        guest::cpu()->r[13] = r13;
        r0 = call_00770300(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r5 = r0;
        r6 = r1;
        r0 = *gptr<u32>(*gptr<u32>(r9) + 0x14u);  // (from the original)
        r2 = r5;
        r3 = r6;
        guest::cpu()->r[13] = r13;
        r0 = call_005f12c4(r0, r1, r2, r3);
        *gptr<u32>(r13) = u32(r10);
        r0 = *gptr<u32>(r9);
        r3 = 0x168u;  // (from the original)
        r2 = 0x6af76cu;  // (from the original)
        r1 = r13 + 8u;
        guest::cpu()->r[13] = r13;
        r0 = call_005ea964(r0, r1, r2, r3);
        r3 = guest::cpu()->r[3];
        r2 = 1u;
        r1 = 0x6af778u;  // (from the original)
        r0 = r8;
        guest::cpu()->r[13] = r13;
        r0 = call_004b4fc0(r0, r1, r2, r3);
        r5 = r0;
        r2 = r0;
        r3 = 0u;
        r1 = r4 + 0x720u;  // (from the original)
        r0 = r8;
        guest::cpu()->r[13] = r13;
        r0 = call_00568630(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r4 + 0x720u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00569508(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r8;
        guest::cpu()->r[13] = r13;
        r0 = call_00568c10(r0, r1, r2, r3);
        r3 = 0u;
        r2 = r5;
        r1 = r4 + 0x720u;  // (from the original)
        r0 = r8;
        guest::cpu()->r[13] = r13;
        r0 = call_00568984(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    } else {
        *gptr<u32>(r13) = u32(r10);
        r3 = 0x169u;  // (from the original)
        r0 = *gptr<u32>(r9);
        r2 = 0x6af76cu;  // (from the original)
        r1 = r13 + 8u;
        guest::cpu()->r[13] = r13;
        r0 = call_005ea964(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r0 = *gptr<u32>(r9);
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea8dc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x6728u;  // (from the original)
    r1 = r13 + 8u;
    r5 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_005e2e50(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_005e2f94(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x67ecu;  // (from the original)
    r1 = r13 + 8u;
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_005e2e50(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_005e2f94(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r13 + 8u) = u32(r7);
    r0 = r13 + 8u;
    r13 = r13 + 0x68u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_6af740:;
    r1 = 0x6af788u;  // (from the original)
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_0056878c(r0, r1, r2, r3);
    r1 = u32(*gptr<u8>(r0 + 0xb7u)) & 0xfeu;  // (from the original)
    *gptr<u8>(r0 + 0xb7u) = u8(r1);  // (from the original)
    r13 = r13 + 0x68u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006af568
GUEST_EXPORT(0x006af568, d_006af568::f_006af568);

// f_006afbcc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006afbcc {

inline constexpr guest::Function<0x001323bc, u32(u32, u32, u32, u32)> call_001323bc;  // (from the original)
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32, u32)> call_00569e6c;  // (from the original)

u32 f_006afbcc(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = call_001323bc(r0, r1, r2, guest::cpu()->r[3]);
    r1 = r4 + 0x400u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    r2 = 0u;
    r1 = r1 + 0xbcu;  // (from the original)
    return call_00569e6c(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_006afbcc
GUEST_EXPORT(0x006afbcc, d_006afbcc::f_006afbcc);
