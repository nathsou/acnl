// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "graphics/hemisphere_light.hpp"

#include <bit>

using guest::gptr;

// f_006a04c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a04c4 {

inline constexpr guest::Function<0x001139fd, u32(u32, u32, u32, u32)> call_001139fc;  // (from the original)
inline constexpr guest::Function<0x00116e31, u32(u32, u32, u32, u32)> call_00116e30;  // (from the original)
inline constexpr guest::Function<0x0011945d, u32(u32, u32, u32, u32)> call_0011945c;  // (from the original)
inline constexpr guest::Function<0x001194e1, u32(u32, u32, u32, u32)> call_001194e0;  // (from the original)
inline constexpr guest::Function<0x0011a391, u32(u32, u32, u32, u32)> call_0011a390;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb310, u32(u32, u32, u32, u32)> call_002fb310;  // (from the original)
inline constexpr guest::Function<0x002fe450, u32(u32, u32, u32, u32)> call_002fe450;  // (from the original)
inline constexpr guest::Function<0x002fe4d0, u32(u32, u32, u32, u32)> call_002fe4d0;  // (from the original)
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> call_00300904;  // (from the original)
inline constexpr guest::Function<0x003058c9, u32(u32, u32, u32, u32)> call_003058c8;  // (from the original)
inline constexpr guest::Function<0x003099d0, u32(u32, u32, u32, u32)> call_003099d0;  // (from the original)
inline constexpr guest::Function<0x0051d1f8, u32(u32, u32, u32, u32)> call_0051d1f8;  // (from the original)

u32 f_006a04c4(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r5_1 = 0;
    u32 r0_6 = 0;
    u32 r1_4 = 0;
    u32 r0_7 = 0;
    u32 r1_5 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r8 = r1;
    r0_1 = call_002fae84(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r0_2 = call_002fb310(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r7 = r0_2 + 4u;
    r1_2 = ~0u;
    r0_3 = call_0011945c(r7, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    if (r0_3 == 0) {
        goto L_6a05e4;
    } else {
        r4 = 0u;
    }
    do {
L_6a04f0:;
        r0_4 = call_001194e0(r7, r4, guest::cpu()->r[2], guest::cpu()->r[3]);
        r0_5 = call_003058c8(r7, r0_4, guest::cpu()->r[2], guest::cpu()->r[3]);
        if (!(r0_5 == 0)) {
            call_001139fc(r0_5, 2u, guest::cpu()->r[2], guest::cpu()->r[3]);
            call_00116e30(r8, r0_4, guest::cpu()->r[2], guest::cpu()->r[3]);
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 2u);
    r4 = 0u;
L_6a053c:;
    r0_3 = call_003058c8(r7, r4, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r5_1 = r0_3;
    if (r0_3 == 0) {
        goto L_6a05d8;
    }
    r0_3 = call_002fe450(r4, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    if (r0_3 == 0) {
        goto L_6a05d8;
    }
    r0_3 = call_003099d0(r0_3, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = r0_3;
    if (r0_3 >> 0x1f != (r0_3 & (r0_3 ^ r0_3)) >> 0x1f) {  // (from the original)
        goto L_6a05d8;
    }
    r0_6 = call_003058c8(r7, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    r0_7 = call_00300904(r0_6, r1_4, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    if ((r0_7 - 1u & r0_6) == 0) {
        goto L_6a05e8;
    }
    r0_8 = call_0011a390(r0_6, r1_5, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_8 == 0) {
        goto L_6a05e8;
    }
    call_001139fc(r5_1, 3u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = call_00116e30(r8, r4, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
L_6a05c4:;
    r0_3 = call_0051d1f8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    if (r0_3 == r4) {
        r0_9 = ~0u;
        r0_3 = call_002fe4d0(r0_9, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_3 = guest::cpu()->r[1];
    }
L_6a05d8:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(0xau)) {  // (from the original)
        guest::preempt();
        goto L_6a053c;
    }
L_6a05e4:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    return r0_3;
L_6a05e8:;
    r0 = call_001139fc(r5_1, 2u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::preempt();
    goto L_6a05c4;
}

}  // namespace d_006a04c4
GUEST_EXPORT(0x006a04c4, d_006a04c4::f_006a04c4);

// f_006a0848: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a0848 {

inline guest::global<u32, 0x006a0980> global_006a0980;  // (from the original)
inline guest::global<u32, 0x006a0984> global_006a0984;  // (from the original)
inline guest::global<u8, 0x008540d0> global_008540d0;  // (from the original)
inline guest::global<u8, 0x008540d1> global_008540d1;  // (from the original)
inline guest::global<u8, 0x008540d2> global_008540d2;  // (from the original)
inline guest::global<u32, 0x0085f2cc> global_0085f2cc;  // (from the original)
inline guest::global<u16, 0x0088729a> global_0088729a;  // (from the original)
inline guest::global<u8, 0x008c9f1c> global_008c9f1c;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x00307220, u32(u32, u32, u32, u32)> call_00307220;  // (from the original)
inline constexpr guest::Function<0x0057b9dc, u32(u32, u32, u32, u32)> call_0057b9dc;  // (from the original)
inline constexpr guest::Function<0x006cbbe4, u32(u32, u32, u32, u32)> call_006cbbe4;  // (from the original)

u32 f_006a0848(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2, float S3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    float S3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    float S2_2 = 0;
    float S3_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    float S0_3 = 0;
    float S1_3 = 0;
    float S2_3 = 0;
    float S3_3 = 0;
    u32 r0_4 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    float S0_4 = 0;
    float S1_4 = 0;
    float S2_4 = 0;
    float S3_4 = 0;
    u32 r0_5 = 0;
    float S3_5 = 0;
    float S1_5 = 0;
    float S2_5 = 0;
    float S0_5 = 0;
    u32 r1_3 = 0;
    u32 r2_5 = 0;
    u32 r0_6 = 0;
    u32 r3_5 = 0;
    u32 r0_7 = 0;
    u32 r1_4 = 0;
    float S0_6 = 0;
    float S1_6 = 0;
    u32 r1_5 = 0;
    u32 r2_6 = 0;
    u32 r0_8 = 0;
    r13 = r13 - 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0_1 = call_002f74c8(r0, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    S0_1 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    S2_1 = guest::cpu()->s[2];
    S3_1 = guest::cpu()->s[3];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    guest::cpu()->s[3] = S3_1;
    r0_2 = call_002f74e0(0x10u, r0_1, r2_1, r3_1);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    S2_2 = guest::cpu()->s[2];
    S3_2 = guest::cpu()->s[3];
    if (r0_2 != 0) {
        r13 = r13 + 0x30u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_2;
        return r0_2;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    guest::cpu()->s[2] = S2_2;
    guest::cpu()->s[3] = S3_2;
    r0_3 = call_002fb94c(r0_2, r1_1, r2_2, r3_2);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    S0_3 = guest::cpu()->s[0];
    S1_3 = guest::cpu()->s[1];
    S2_3 = guest::cpu()->s[2];
    S3_3 = guest::cpu()->s[3];
    if (r0_3 == 0) {
        r13 = r13 + 0x30u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_3;
        guest::cpu()->s[1] = S1_3;
        return r0_3;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_3;
    guest::cpu()->s[2] = S2_3;
    guest::cpu()->s[3] = S3_3;
    r0_4 = call_006cbbe4(r0_3, r1_2, r2_3, r3_3);
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    S0_4 = guest::cpu()->s[0];
    S1_4 = guest::cpu()->s[1];
    S2_4 = guest::cpu()->s[2];
    S3_4 = guest::cpu()->s[3];
    r0_5 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_4;
    guest::cpu()->s[2] = S2_4;
    guest::cpu()->s[3] = S3_4;
    call_00307220(r0_5, r0_4, r2_4, r3_4);
    S3_5 = std::bit_cast<float>(*global_006a0980);
    S1_5 = std::bit_cast<float>(*global_006a0984);
    S2_5 = std::bit_cast<float>(*global_0085f2cc);
    *gptr<u32>(r13 + 0xcu) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r13 + 0xcu)) + S2_5 * S3_5));  // (from the original)
    S0_5 = std::bit_cast<float>(*gptr<u32>(r13 + 4u)) + S2_5 * S1_5;
    *gptr<u32>(r13 + 4u) = u32(std::bit_cast<u32>(S0_5));
    *gptr<u16>(r13 + 0x10u) = u16(0u);  // (from the original)
    *gptr<u16>(r13 + 0x14u) = u16(0u);  // (from the original)
    *gptr<u16>(r13 + 0x12u) = u16(0xffff8000u);  // (from the original)
    r1_3 = u32(*global_008c9f1c) << 0x18 | (((u32(*global_008540d0) & 0xffu | r4 & ~0xffu) & ~0xff00u | u32(*global_008540d1) << 8 & 0xff00u) & ~0xff0000u | u32(*global_008540d2) << 0x10 & 0xff0000u) & ~0xff000000u;  // (from the original)
    *gptr<u8>(r13 + 0x18u) = u8(1u);  // (from the original)
    *gptr<u8>(r13 + 0x19u) = u8(0u);  // (from the original)
    *gptr<u32>(r13 + 0x1cu) = u32(r1_3);  // (from the original)
    r2_5 = r13 + 0x18u;  // (from the original)
    r0_6 = u32(*global_0088729a);
    *gptr<u32>(r13) = u32(r13 + 0x10u);  // (from the original)
    r3_5 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_5;
    guest::cpu()->s[1] = S1_5;
    guest::cpu()->s[2] = S2_5;
    guest::cpu()->s[3] = S3_5;
    r0_7 = call_0057b9dc(r0_6, r0, r2_5, r3_5);
    r1_4 = guest::cpu()->r[1];
    S0_6 = guest::cpu()->s[0];
    S1_6 = guest::cpu()->s[1];
    if (r0_7 == 0) {
        r13 = r13 + 0x30u;  // (from the original)
        guest::cpu()->r[1] = r1_4;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_6;
        guest::cpu()->s[1] = S1_6;
        return r0_7;
    }
    r1_5 = r0 + 0xeb54u;  // (from the original)
    r2_6 = *gptr<u32>(r1_5 + 4u);
    if (r2_6 != 0) {
        *gptr<u32>(r2_6) = u32(r0_7);
    }
    r0_8 = *gptr<u32>(r1_5 + 4u) + 4u;
    *gptr<u32>(r1_5 + 4u) = u32(r0_8);
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_6;
    guest::cpu()->s[1] = S1_6;
    return r0_8;
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
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 res_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_4 = 0;
    u32 r0_8 = 0;
    u32 r1_5 = 0;
    u32 r1_6 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 res_2 = 0;
    u32 nf_1 = 0;
    u32 zf_1 = 0;
    u32 vf_1 = 0;
    u32 zf_2 = 0;
    u32 zf_3 = 0;
    u32 zf_4 = 0;
    u32 r0_11 = 0;
    u32 zf_5 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 res_3 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    u32 r2_4 = 0;
    u32 r0_21 = 0;
    u32 r0_22 = 0;
    u32 r2_5 = 0;
    u32 r2_6 = 0;
    u32 r6_1 = 0;
    u32 zf_6 = 0;
    u32 r0_23 = 0;
    u32 r2_7 = 0;
    u32 res_4 = 0;
    u32 r1_7 = 0;
    u32 r0_24 = 0;
    u32 r0_25 = 0;
    r13 = r13 - 0x38u;  // (from the original)
    r10 = r1;
    guest::cpu()->r[13] = r13;
    r0_1 = call_0051ca20(r0, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    if (r0_1 == 0) {
        goto L_6a11c0;
    }
    r0_1 = 0xaaef18u;  // (from the original)
    r6 = *gptr<u32>(r0_1 + 0x234u);  // (from the original)
    if (r6 == 0) {
        goto L_6a11c0;
    }
    res_1 = u32(*gptr<u8>(0x5701u + r6)) << 0x1e;  // (from the original)
    r0_1 = res_1;
    if (!(res_1 >> 0x1f)) {  // (from the original)
        goto L_6a11c0;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fae84(r0_1, r1_1, r2_1, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    r0_3 = call_002fb310(r0_2, r1_2, r2_2, guest::cpu()->r[3]);
    r9 = r0_3 + 4u;
    r0_4 = r13;
    guest::cpu()->r[13] = r13;
    r0_5 = call_00116ea4(r0_4, 0xau, 0u, guest::cpu()->r[3]);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r5 = 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_6 = call_002fb328(r0_5, r1_3, r2_3, guest::cpu()->r[3]);
    r7 = r0_6 + 0x6aeb8u;  // (from the original)
    r0_7 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00116ea4(r0_7, 0xbu, 0u, guest::cpu()->r[3]);  // (from the original)
    r2 = guest::cpu()->r[2];
    r4 = 0x4au;  // (from the original)
    do {
L_6a0f48:;
        r1_4 = r4 & 0xffu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_8 = call_0076cec4(r7, r1_4, r2, guest::cpu()->r[3]);
        r1_5 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (!(r0_8 == 0)) {
            r1_6 = r4 - 0x4au;  // (from the original)
            r0_9 = r13 + 0xcu;  // (from the original)
            guest::cpu()->r[13] = r13;
            r0_8 = call_00116e30(r0_9, r1_6, r2, guest::cpu()->r[3]);
            r1_5 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) <= s32(0x54u));  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_10 = call_002f74c8(r0_8, r1_5, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    res_2 = r0_10 - 0x3fu;  // (from the original)
    nf_1 = res_2 >> 0x1f;  // (from the original)
    zf_1 = res_2 == 0;
    vf_1 = ((r0_10 ^ 0x3fu) & (r0_10 ^ res_2)) >> 0x1f;  // (from the original)
    r7 = r0_10;
    if (zf_1) {
        r5 = 0x15u;  // (from the original)
        goto L_6a0fcc;
    }
    if (!!zf_1 || nf_1 != vf_1) {
        zf_2 = r7 == 0x39u;  // (from the original)
        if (!zf_2) {
            zf_2 = r7 == 0x3au;  // (from the original)
        }
        if (zf_2) {
            goto L_6a0fc8;
        }
        zf_3 = r7 == 0x3bu;  // (from the original)
        if (!zf_3) {
            zf_3 = r7 == 0x3cu;  // (from the original)
        }
        if (zf_3) {
            goto L_6a0fc8;
        }
        goto L_6a0fcc;
    }
    zf_4 = r7 == 0x46u;  // (from the original)
    if (!zf_4) {
        zf_4 = r7 == 0x47u;  // (from the original)
    }
    if (zf_4) {
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
    guest::cpu()->r[13] = r13;
    r0_11 = call_003058c8(r9, r4, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_11 == 0) {
        goto L_6a10e8;
    }
    r0_1 = u32(*gptr<u8>(0x250fu + r0_11));  // (from the original)
    zf_5 = r0_1 == r5;
    if (!zf_5) {
        zf_5 = r5 == 0xau;  // (from the original)
    }
    if (zf_5) {
        goto L_6a11c0;
    }
    guest::cpu()->r[13] = r13;
    r0_12 = call_0011b4f6(r10, r4, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_12 != 0) {
        goto L_6a10e8;
    }
    guest::cpu()->r[13] = r13;
    r0_13 = call_0011a1c8(r0_11, r1_1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_13 != 0) {
        goto L_6a10e8;
    }
    guest::cpu()->r[13] = r13;
    r0_14 = call_001198e8(r0_11, r1_1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_14 != 0) {
        goto L_6a10e8;
    }
    guest::cpu()->r[13] = r13;
    r0_15 = call_00309ac8(r0_11, 0u, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    if (r0_15 != 0) {
        guest::cpu()->r[13] = r13;
        r0_16 = call_00119714(r9, r4, 0u, guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0_16 == 0) {
            goto L_6a10e8;
        }
    }
    guest::cpu()->r[13] = r13;
    r0_17 = call_00309eb8(r0_11, r8, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_17 == 0) {
        goto L_6a10e8;
    }
    res_3 = u32(*gptr<u8>(r0_17 + 0xbcu)) >> 7;  // (from the original)
    if (res_3 == 0) {
        goto L_6a10e8;
    }
    guest::cpu()->r[13] = r13;
    r0_18 = call_0011a650(r0_11, r1_1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_18 != 0) {
        goto L_6a10e8;
    }
    guest::cpu()->r[13] = r13;
    r0_19 = call_002fe450(r4, r1_1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_19 == 0) {
        goto L_6a10e8;
    }
    r1_1 = u32(*gptr<u8>(r0_19 + 0x1cu));  // (from the original)
    if (r1_1 != 0xa5u) {  // (from the original)
        goto L_6a10e8;
    }
    if (u32(*gptr<u8>(r0_19 + 0x1du)) != 0xa5u) {  // (from the original)
        goto L_6a10e8;
    }
    r0_20 = r13;
    guest::cpu()->r[13] = r13;
    call_00116e30(r0_20, r4, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
L_6a10e8:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(0xau)) {  // (from the original)
        guest::preempt();
        goto L_6a0fd8;
    }
    r0_1 = *gptr<u32>(r13 + 8u);
    if (r0_1 == 0 || r0_1 >> 0x1f != (r0_1 & (r0_1 ^ r0_1)) >> 0x1f) {  // (from the original)
        goto L_6a11c0;
    }
    guest::cpu()->r[13] = r13;
    r0_1 = call_002ff6f4(0x64u, r1_1, r2, guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    if (s32(r0_1) >= s32(0x14u)) {  // (from the original)
        goto L_6a11c0;
    }
    r0_21 = r13;
    guest::cpu()->r[13] = r13;
    r0_22 = call_002fe418(r0_21, r1_1, r2_4, guest::cpu()->r[3]);
    r2_5 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    r0_1 = call_003058c8(r9, r0_22, r2_5, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r6_1 = r0_1;
    if (r0_1 == 0) {
        goto L_6a11c0;
    }
    zf_6 = r7 == 0x46u;  // (from the original)
    if (!zf_6) {
        zf_6 = r7 == 0x47u;  // (from the original)
    }
    if (!zf_6) {
        if (r7 == 0x49u) {  // (from the original)
            goto L_6a1198;
        }
        goto L_6a1190;
    }
    guest::cpu()->r[13] = r13;
    r0_23 = call_002fb328(r0_1, r1_1, r2_6, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r0_1 = r0_23 + 0x62250u;  // (from the original)
    res_4 = r0_1 + 0x8b32u;  // (from the original)
    if (res_4 == 0) {
        goto L_6a11c0;
    }
    guest::cpu()->r[13] = r13;
    r0_1 = call_00716de4(res_4, r1_1, r2_7, guest::cpu()->r[3]);
    r1_7 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    if (r0_1 != 0) {
        goto L_6a1190;
    }
    guest::cpu()->r[13] = r13;
    r0_1 = call_00716b74(res_4, r1_7, r2_6, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    if (r0_1 == 0) {
        goto L_6a11c0;
    }
L_6a1190:;
    r1_1 = r5;
    goto L_6a11b4;
L_6a1198:;
    r0_1 = *gptr<u32>(r13 + 0x14u);  // (from the original)
    if (r0_1 == 0 || r0_1 >> 0x1f != (r0_1 & (r0_1 ^ r0_1)) >> 0x1f) {  // (from the original)
        goto L_6a11c0;
    }
    r0_24 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_25 = call_002fe418(r0_24, r1_1, r2_6, guest::cpu()->r[3]);
    r2_6 = guest::cpu()->r[2];
    r0_1 = r0_25 + 0xau;  // (from the original)
    r1_1 = r0_1 & 0xffu;  // (from the original)
L_6a11b4:;
    if (r1_1 != 0x18u) {  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_1 = call_001139f4(r6_1, r1_1, r2_6, guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
    }
L_6a11c0:;
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_006a0ecc
GUEST_EXPORT(0x006a0ecc, d_006a0ecc::f_006a0ecc);

// f_006a14bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a14bc {

inline guest::global<u32, 0x00aaf14c> global_00aaf14c;  // (from the original)
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
    u32 r4 = guest::cpu()->r[4];
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
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r2_3 = 0;
    u32 r0_6 = 0;
    u32 r1_2 = 0;
    u32 r2_4 = 0;
    u32 res_1 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r1_3 = 0;
    u32 r2_5 = 0;
    u32 r1_4 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r1_5 = 0;
    u32 r2_6 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r2_7 = 0;
    u32 r0_16 = 0;
    u32 zf_1 = 0;
    u32 res_2 = 0;
    u32 nf_1 = 0;
    u32 vf_1 = 0;
    u32 zf_2 = 0;
    u32 r0_17 = 0;
    u32 r1_6 = 0;
    u32 r2_8 = 0;
    u32 zf_3 = 0;
    u32 r0_18 = 0;
    u32 r1_7 = 0;
    u32 r0_19 = 0;
    u32 r1_8 = 0;
    u32 res_3 = 0;
    u32 r0_20 = 0;
    u32 r0_21 = 0;
    u32 r0_22 = 0;
    u32 nf_2 = 0;
    u32 zf_4 = 0;
    u32 vf_2 = 0;
    u32 r0_23 = 0;
    u32 r0_24 = 0;
    u32 r2_9 = 0;
    u32 r0_25 = 0;
    u32 r2_10 = 0;
    u32 r0_26 = 0;
    u32 r1_9 = 0;
    u32 r0_27 = 0;
    u32 r2_11 = 0;
    u32 r0_28 = 0;
    u32 r1_10 = 0;
    u32 res_4 = 0;
    u32 r0_29 = 0;
    u32 r0_30 = 0;
    u32 r4_1 = 0;
    u32 r0_31 = 0;
    u32 r1_11 = 0;
    u32 r2_12 = 0;
    u32 r0_32 = 0;
    u32 r2_13 = 0;
    u32 r0_33 = 0;
    u32 r1_12 = 0;
    u32 r2_14 = 0;
    u32 r0_34 = 0;
    u32 r0_35 = 0;
    u32 r0_36 = 0;
    u32 r4_2 = 0;
    u32 r0_37 = 0;
    u32 r2_15 = 0;
    u32 r0_38 = 0;
    u32 r0_39 = 0;
    u32 r1_13 = 0;
    u32 r2_16 = 0;
    u32 r0_40 = 0;
    u32 r0_41 = 0;
    r13 = r13 - 0x50u;  // (from the original)
    r10 = r1;
    guest::cpu()->r[13] = r13;
    r0_1 = call_0051ca20(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    if (r0_1 == 0) {
        goto L_6a17d8;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fae84(r0_1, r1, r2_1, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    r0_3 = call_002fb310(r0_2, r1_1, r2_2, guest::cpu()->r[3]);
    r9 = r0_3 + 4u;
    r0_4 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00116ea4(r0_4, 0xau, 0u, guest::cpu()->r[3]);  // (from the original)
    r0_5 = r13;
    guest::cpu()->r[13] = r13;
    call_00116ea4(r0_5, 0x18u, 0u, guest::cpu()->r[3]);  // (from the original)
    r2_3 = guest::cpu()->r[2];
    r0_6 = r13;
    guest::cpu()->r[13] = r13;
    call_0030a038(r0_6, 2u, r2_3, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r6 = *global_00aaf14c;
    if (r6 != 0) {
        res_1 = u32(*gptr<u8>(0x5701u + r6)) << 0x1e;  // (from the original)
        r0_7 = res_1;
        if (res_1 >> 0x1f) {  // (from the original)
            goto L_6a1534;
        }
    }
    r0_8 = r13;
    guest::cpu()->r[13] = r13;
    r0_7 = call_0051d6e8(r0_8, r1_2, r2_4, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
L_6a1534:;
    guest::cpu()->r[13] = r13;
    r0_9 = call_003041c8(r0_7, r1_2, r2_4, guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    if (r0_9 == 0x2bu) {  // (from the original)
        r1_4 = 5u;
        goto L_6a1554;
    }
    if (r0_9 == 0x32u) {  // (from the original)
        r1_4 = 6u;
    } else {
        goto L_6a155c;
    }
L_6a1554:;
    r0_10 = r13;
    guest::cpu()->r[13] = r13;
    r0_9 = call_00116e4e(r0_10, r1_4, r2_5, guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
L_6a155c:;
    guest::cpu()->r[13] = r13;
    r0_11 = call_001120f0(r0_9, r1_3, r2_5, guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    if (r0_11 == 0) {
        r0_12 = r13;
        guest::cpu()->r[13] = r13;
        r0_11 = call_00116e4e(r0_12, 5u, r2_6, guest::cpu()->r[3]);
        r1_5 = guest::cpu()->r[1];
        r2_6 = guest::cpu()->r[2];
    }
    guest::cpu()->r[13] = r13;
    r0_13 = call_00111f94(r0_11, r1_5, r2_6, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_13 == 0) {
        r0_14 = r13;
        guest::cpu()->r[13] = r13;
        call_00116e4e(r0_14, 6u, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
    }
    r4 = 0u;
L_6a15a0:;
    guest::cpu()->r[13] = r13;
    r0_15 = call_002fe450(r4, r1, r2, guest::cpu()->r[3]);
    r2_7 = guest::cpu()->r[2];
    r5 = r0_15;
    guest::cpu()->r[13] = r13;
    r0_16 = call_003058c8(r9, r4, r2_7, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    zf_1 = r5 == 0;
    r7 = r0_16;
    if (!zf_1) {
        zf_1 = r7 == 0;
    }
    if (zf_1) {
        goto L_6a1678;
    }
    r8 = u32(*gptr<u8>(0x250fu + r7));  // (from the original)
    res_2 = r8 - 3u;
    nf_1 = res_2 >> 0x1f;  // (from the original)
    vf_1 = ((r8 ^ 3u) & (r8 ^ res_2)) >> 0x1f;  // (from the original)
    if (res_2 == 0) {
        goto L_6a1678;
    }
    if (nf_1 == vf_1) {
        goto L_6a1604;
    }
    zf_2 = r8 == 0;
    if (!zf_2) {
        zf_2 = r8 == 1u;
    }
    if (zf_2) {
        goto L_6a1678;
    }
L_6a15e8:;
    guest::cpu()->r[13] = r13;
    r0_17 = call_0011b4f6(r10, r4, r2, guest::cpu()->r[3]);
    r1_6 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    if (r0_17 != 0) {
        goto L_6a166c;
    }
    goto L_6a1614;
L_6a1604:;
    zf_3 = r8 == 7u;
    if (!zf_3) {
        zf_3 = r8 == 0x17u;  // (from the original)
    }
    if (zf_3) {
        goto L_6a1678;
    }
    guest::preempt();
    goto L_6a15e8;
L_6a1614:;
    guest::cpu()->r[13] = r13;
    r0_18 = call_0011a1c8(r7, r1_6, r2_8, guest::cpu()->r[3]);
    r1_7 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    if (r0_18 != 0) {
        goto L_6a166c;
    }
    guest::cpu()->r[13] = r13;
    r0_19 = call_001198e8(r7, r1_7, r2_8, guest::cpu()->r[3]);
    r1_8 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    if (r0_19 != 0) {
        goto L_6a166c;
    }
    res_3 = *gptr<u32>(r5 + 0x20u) << 0x11 >> 0x1e;  // (from the original)
    if (res_3 != 0) {
        goto L_6a166c;
    }
    guest::cpu()->r[13] = r13;
    r0_20 = call_002ff6f4(0x64u, r1_8, r2_8, guest::cpu()->r[3]);  // (from the original)
    r2_8 = guest::cpu()->r[2];
    if (s32(r0_20) >= s32(0x14u)) {  // (from the original)
        goto L_6a166c;
    }
    r0_21 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00116e30(r0_21, r4, r2_8, guest::cpu()->r[3]);
    r2_8 = guest::cpu()->r[2];
L_6a166c:;
    r0_22 = r13;
    guest::cpu()->r[13] = r13;
    call_00116e4e(r0_22, r8, r2_8, guest::cpu()->r[3]);
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
    r0_1 = *gptr<u32>(r13 + 0x14u);  // (from the original)
    nf_2 = r0_1 >> 0x1f;  // (from the original)
    zf_4 = r0_1 == 0;
    vf_2 = 0u;
    if (!zf_4 && nf_2 == vf_2) {
        r0_1 = *gptr<u32>(r13 + 8u);
        nf_2 = r0_1 >> 0x1f;  // (from the original)
        zf_4 = r0_1 == 0;
        vf_2 = 0u;
    }
    if (zf_4 || nf_2 != vf_2) {
        goto L_6a17d8;
    }
    r0_23 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_24 = call_002fe418(r0_23, r1, r2, guest::cpu()->r[3]);
    r2_9 = guest::cpu()->r[2];
    r0_25 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00116e4e(r0_25, r0_24, r2_9, guest::cpu()->r[3]);
    r2_10 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    r0_26 = call_003058c8(r9, r0_24, r2_10, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_26 == 0) {
        guest::preempt();
        goto L_6a168c;
    }
    r1_9 = r13;
    r0_27 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00116e92(r0_27, r1_9, r2, guest::cpu()->r[3]);
    r2_11 = guest::cpu()->r[2];
    if (r6 == 0) {
        goto L_6a1728;
    }
    guest::cpu()->r[13] = r13;
    r0_28 = call_00309f84(r0_26, r8, r2_11, guest::cpu()->r[3]);
    r1_10 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    if (r0_28 == 0) {
        goto L_6a1720;
    }
    res_4 = u32(*gptr<u8>(r0_28 + 0xbcu)) >> 7;  // (from the original)
    if (res_4 == 0) {
        goto L_6a1720;
    }
    guest::cpu()->r[13] = r13;
    r0_29 = call_0011a650(r0_26, r1_10, r2_11, guest::cpu()->r[3]);
    r1_10 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    if (r0_29 == 0) {
        goto L_6a1728;
    }
L_6a1720:;
    r0_30 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0051d6e8(r0_30, r1_10, r2_11, guest::cpu()->r[3]);
    r2_11 = guest::cpu()->r[2];
L_6a1728:;
    r4_1 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_31 = call_0011b4f6(r4_1, 5u, r2_11, guest::cpu()->r[3]);
    r1_11 = guest::cpu()->r[1];
    r2_12 = guest::cpu()->r[2];
    if (r0_31 != 0) {
        r0_32 = r13 + 0x24u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_00116e92(r0_32, r4_1, r2_12, guest::cpu()->r[3]);
        r2_13 = guest::cpu()->r[2];
        guest::cpu()->r[13] = r13;
        r0_33 = call_0011ab04(r0_26, r0_24, r2_13, guest::cpu()->r[3]);
        r1_12 = guest::cpu()->r[1];
        r2_14 = guest::cpu()->r[2];
        if (r0_33 == 0) {
            r0_34 = r13 + 0x24u;  // (from the original)
            guest::cpu()->r[13] = r13;
            call_00116e4e(r0_34, 5u, r2_14, guest::cpu()->r[3]);
            r1_12 = guest::cpu()->r[1];
            r2_14 = guest::cpu()->r[2];
        }
        r0_35 = r13 + 0x24u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_36 = call_002fe418(r0_35, r1_12, r2_14, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r4_2 = r0_36 & 0xffu;  // (from the original)
    } else {
        guest::cpu()->r[13] = r13;
        r0_37 = call_002fe418(r4_1, r1_11, r2_12, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r4_2 = r0_37 & 0xffu;  // (from the original)
    }
    if (r4_2 >= 0x18u) {  // (from the original)
        guest::preempt();
        goto L_6a168c;
    }
    guest::cpu()->r[13] = r13;
    call_001139fc(r0_26, r4_2, r2, guest::cpu()->r[3]);
    r2_15 = guest::cpu()->r[2];
    r0_38 = r13;
    guest::cpu()->r[13] = r13;
    r0_39 = call_00116e4e(r0_38, r4_2, r2_15, guest::cpu()->r[3]);
    r1_13 = guest::cpu()->r[1];
    r2_16 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    r0_40 = call_0051d1f8(r0_39, r1_13, r2_16, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_40 == r0_24) {
        r0_41 = ~0u;
        guest::cpu()->r[13] = r13;
        call_002fe4d0(r0_41, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
    }
    guest::preempt();
    goto L_6a168c;
L_6a17d8:;
    r13 = r13 + 0x50u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_006a14bc
GUEST_EXPORT(0x006a14bc, d_006a14bc::f_006a14bc);

// f_006a1ca0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a1ca0 {

struct __attribute__((packed)) Object_006a1ca0_0 {
    u8 unknown_0[0xeb54];  // (not used here)
    u32 word_eb54;
    u32 word_eb58;
};
GUEST_OFFSET(Object_006a1ca0_0, word_eb54, 0xeb54);  // (from the original)
GUEST_OFFSET(Object_006a1ca0_0, word_eb58, 0xeb58);  // (from the original)


u32 f_006a1ca0(gptr<Object_006a1ca0_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r5_1 = 0;
    u32 r2_1 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r7 = r1;
    r1 = r0 + 0xeb54u;  // (from the original)
    r4 = arg0->word_eb54;
    r6 = arg0->word_eb58;
    r8 = r2;
    if (r4 == r6) {
        goto L_6a1d10;
    }
L_6a1ccc:;
    r5_1 = *gptr<u32>(r4);
    if (r5_1 == 0) {
        goto L_6a1d04;
    }
    if (*gptr<u32>(r5_1 + 0x54u) != r7) {  // (from the original)
        goto L_6a1d04;
    }
    r2_1 = *gptr<u32>(*gptr<u32>(r5_1) + 0xe8u);  // (from the original)
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    return guest::call_address<u32>(r2_1, r5_1, r8, r2_1, guest::cpu()->r[3]);
L_6a1d04:;
    r4 = r4 + 4u;
    if (r4 != r6) {
        guest::preempt();
        goto L_6a1ccc;
    }
L_6a1d10:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_006a1ca0
GUEST_EXPORT(0x006a1ca0, d_006a1ca0::f_006a1ca0);

// f_006a2c2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a2c2c {

inline constexpr guest::Function<0x00757aa0, u32(u32, u32, u32, u32)> call_00757aa0;  // (from the original)

u32 f_006a2c2c(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_00757aa0(r0, r1, guest::cpu()->r[2], r3);
    r1_1 = *gptr<u32>(r0);
    *gptr<u8>(r1_1 + r0_1) = u8(r3);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_006a2c2c
GUEST_EXPORT(0x006a2c2c, d_006a2c2c::f_006a2c2c);

// f_006a2c48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a2c48 {

inline constexpr guest::Function<0x005bf518, u32(u32, u32, u32, u32)> call_005bf518;  // (from the original)

u32 f_006a2c48(u32 r0_unused, u32 r1) {
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 8u;
    call_005bf518(guest::cpu()->r[0], r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
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

inline guest::global<u32, 0x0095decc> global_0095decc;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x005d6cc0, u32(u32, u32, u32, u32)> call_005d6cc0;  // (from the original)
inline constexpr guest::Function<0x005d6d28, u32(u32, u32, u32, u32)> call_005d6d28;  // (from the original)
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32, u32, u32)> call_005ea8dc;  // (from the original)
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;  // (from the original)
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> call_005ea964;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)

u32 f_006a2ca4(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r4_1 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r3_3 = 0;
    u32 res_1 = 0;
    u32 ea_1 = 0;
    u32 r3_4 = 0;
    u32 ea_2 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_5 = 0;
    u32 r0_9 = 0;
    u32 r2_4 = 0;
    u32 r3_6 = 0;
    u32 r1_4 = 0;
    u32 r0_10 = 0;
    u32 r1_5 = 0;
    u32 r2_5 = 0;
    u32 r3_7 = 0;
    u32 r0_11 = 0;
    u32 r1_6 = 0;
    u32 r0_12 = 0;
    r13 = r13 - 0xb8u;  // (from the original)
    r5 = r0;
    r7 = r1;
    r0_1 = r13 + 8u;
    r1_1 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_003083bc(r0_1, r1_1, 0x40u, r3);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r6 = 0x90a228u;  // (from the original)
    *gptr<u32>(r0_2) = u32(r6);
    r0_3 = r0_2 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_005f4bfc(r0_3, r1_2, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r4_1 = r0_4 - 0xcu;  // (from the original)
    r0_5 = r0_4 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r0_5, 0x80u, r2_2, r3_2);  // (from the original)
    r2 = 0x8906ecu;  // (from the original)
    r0_6 = r4_1 + 0x18u;  // (from the original)
    r4 = 0u;
    r0 = r0_6 - 2u;
    r1 = 0x20u;  // (from the original)
    do {
L_6a2cf4:;
        r3_3 = u32(*gptr<u16>(r2));
        res_1 = r1 - 1u;
        r1 = res_1;
        ea_1 = r0 + 2u;
        *gptr<u16>(ea_1) = u16(r3_3);
        r3_4 = u32(*gptr<u16>(r2));
        ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r3_4);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    r0_7 = *global_0095decc;
    guest::cpu()->r[13] = r13;
    call_005ea8f8(r0_7, 0u, r2, r3_4);
    *gptr<u32>(r13) = u32(r4);
    r0_8 = *global_0095decc;
    r1_3 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_005ea964(r0_8, r1_3, 0x857b98u, r7);  // (from the original)
    r2_3 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_9 = *global_0095decc;
    guest::cpu()->r[13] = r13;
    call_005ea8dc(r0_9, 0u, r2_3, r3_5);
    r2_4 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r1_4 = r13 + 8u;
    r0_10 = r5 + 0x24u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005d6cc0(r0_10, r1_4, r2_4, r3_6);
    r1_5 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_11 = r5 + 0x24u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005d6d28(r0_11, r1_5, r2_5, r3_7);
    r1_6 = guest::cpu()->r[1];
    *gptr<u32>(r13 + 8u) = u32(r6);
    r0_12 = r13 + 8u;
    r13 = r13 + 0xb8u;  // (from the original)
    guest::cpu()->r[1] = r1_6;
    guest::cpu()->r[13] = r13;
    return r0_12;
}

}  // namespace d_006a2ca4
GUEST_EXPORT(0x006a2ca4, d_006a2ca4::f_006a2ca4);

// f_006a3988: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a3988 {

inline constexpr guest::Function<0x001323bc, u32(u32, u32, u32, u32)> call_001323bc;  // (from the original)
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32, u32)> call_00569e6c;  // (from the original)

u32 f_006a3988(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_001323bc(r0, r1, r2, guest::cpu()->r[3]);
    r1_1 = r0 + 0x400u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    r1_2 = r1_1 + 0x104u;  // (from the original)
    return call_00569e6c(r0_1, r1_2, 1u, guest::cpu()->r[3]);
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
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = r0 + 0x650u;  // (from the original)
    call_00132364(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_2 = r0 + 0x504u;  // (from the original)
    call_001323b4(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_3 = r0 + 0x24u;  // (from the original)
    call_005d6bfc(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_4 = r0 + 0x124u;  // (from the original)
    call_005e2e04(r0_4, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_5 = r0 + 0x1e8u;  // (from the original)
    call_005e2e04(r0_5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_6 = r0 + 0x2acu;  // (from the original)
    call_005e2e04(r0_6, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_7 = r0 + 0x370u;  // (from the original)
    call_005e2e04(r0_7, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_8 = r0 + 0x434u;  // (from the original)
    call_005e2e04(r0_8, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    return 1u;
}

}  // namespace d_006a3bd4
GUEST_EXPORT(0x006a3bd4, d_006a3bd4::f_006a3bd4);

// f_006a3cb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a3cb4 {

inline constexpr guest::Function<0x00567e24, u32(u32, u32, u32, u32)> call_00567e24;  // (from the original)

u32 f_006a3cb4(u32 r0) {
    u32 r0_1 = 0;
    r0_1 = r0 + 0x650u;  // (from the original)
    return call_00567e24(r0_1, 0x6a3cc0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
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
    u32 r4 = guest::cpu()->r[4];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
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
    u32 r0_6 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_7 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_8 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r0_9 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    u32 r0_10 = 0;
    u32 r2_9 = 0;
    u32 r3_9 = 0;
    u32 r0_11 = 0;
    u32 r2_10 = 0;
    u32 r3_10 = 0;
    u32 r1_1 = 0;
    u32 r0_12 = 0;
    u32 r2_11 = 0;
    u32 r3_11 = 0;
    u32 r0_13 = 0;
    u32 r2_12 = 0;
    u32 r3_12 = 0;
    u32 ea_1 = 0;
    u32 r0_14 = 0;
    u32 ea_2 = 0;
    u32 r0_15 = 0;
    u32 r2_13 = 0;
    u32 r3_13 = 0;
    u32 r0_16 = 0;
    u32 r2_14 = 0;
    u32 r3_14 = 0;
    u32 r0_17 = 0;
    u32 r2_15 = 0;
    u32 r3_15 = 0;
    u32 r0_18 = 0;
    u32 r2_16 = 0;
    u32 r3_16 = 0;
    u32 r0_19 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    u32 r3_17 = 0;
    u32 r0_20 = 0;
    u32 r2_17 = 0;
    u32 r3_18 = 0;
    u32 ea_5 = 0;
    u32 r0_21 = 0;
    u32 r2_18 = 0;
    u32 r3_19 = 0;
    u32 ea_6 = 0;
    u32 r0_22 = 0;
    u32 r2_19 = 0;
    u32 r3_20 = 0;
    u32 ea_7 = 0;
    u32 r0_23 = 0;
    u32 ea_8 = 0;
    u32 r0_24 = 0;
    u32 r2_20 = 0;
    u32 r3_21 = 0;
    u32 r0_25 = 0;
    u32 r2_21 = 0;
    u32 r3_22 = 0;
    u32 r0_26 = 0;
    *gptr<u32>(r13 + 0xffffffe0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    r4 = r0;
    r0_1 = r0 + 0x504u;  // (from the original)
    r8 = r0_1;
    guest::cpu()->r[13] = r13;
    r0_2 = call_0056878c(r0_1, 0x6a4000u, r2, r3);  // (from the original)
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    *gptr<u8>(r0_2 + 0xb7u) = u8(u32(*gptr<u8>(r0_2 + 0xb7u)) & 0xfeu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_0056878c(r8, 0x6a4008u, r2_1, r3_1);  // (from the original)
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    *gptr<u8>(r0_3 + 0xb7u) = u8(u32(*gptr<u8>(r0_3 + 0xb7u)) & 0xfeu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_0056878c(r8, 0x6a4010u, r2_2, r3_2);  // (from the original)
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    *gptr<u8>(r0_4 + 0xb7u) = u8(u32(*gptr<u8>(r0_4 + 0xb7u)) & 0xfeu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_5 = call_0056878c(r8, 0x6a4018u, r2_3, r3_3);  // (from the original)
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    *gptr<u8>(r0_5 + 0xb7u) = u8(u32(*gptr<u8>(r0_5 + 0xb7u)) & 0xfeu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_6 = call_0056878c(r8, 0x6a4024u, r2_4, r3_4);  // (from the original)
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    *gptr<u8>(r0_6 + 0xb7u) = u8(u32(*gptr<u8>(r0_6 + 0xb7u)) & 0xfeu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_7 = call_0056878c(r8, 0x6a4030u, r2_5, r3_5);  // (from the original)
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    *gptr<u8>(r0_7 + 0xb7u) = u8(u32(*gptr<u8>(r0_7 + 0xb7u)) & 0xfeu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_8 = call_0056878c(r8, 0x6a403cu, r2_6, r3_6);  // (from the original)
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    *gptr<u8>(r0_8 + 0xb7u) = u8(u32(*gptr<u8>(r0_8 + 0xb7u)) & 0xfeu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_9 = call_0056878c(r8, 0x6a4044u, r2_7, r3_7);  // (from the original)
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    *gptr<u8>(r0_9 + 0xb7u) = u8(u32(*gptr<u8>(r0_9 + 0xb7u)) & 0xfeu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_10 = call_0056878c(r8, 0x6a4050u, r2_8, r3_8);  // (from the original)
    r2_9 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    *gptr<u8>(r0_10 + 0xb7u) = u8(u32(*gptr<u8>(r0_10 + 0xb7u)) & 0xfeu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_11 = call_0056878c(r8, 0x6a4058u, r2_9, r3_9);  // (from the original)
    r2_10 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r1_1 = u32(*gptr<u8>(r0_11 + 0xb7u)) & 0xfeu;  // (from the original)
    *gptr<u8>(r0_11 + 0xb7u) = u8(r1_1);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_12 = call_005d46dc(r0_11, r1_1, r2_10, r3_10);
    r2_11 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    if (r0_12 == 0) {
        goto L_6a3f34;
    }
    guest::cpu()->r[13] = r13;
    r0_13 = call_00568a80(r8, 0x6a4060u, r2_11, r3_11);  // (from the original)
    r2_12 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    ea_1 = r0_13 + 0xb7u;  // (from the original)
    *gptr<u8>(ea_1) = u8(u32(*gptr<u8>(ea_1)) & 0xfeu | 1u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_14 = call_00568a80(r8, 0x6a406cu, r2_12, r3_12);  // (from the original)
    ea_2 = r0_14 + 0xb7u;  // (from the original)
    *gptr<u8>(ea_2) = u8(u32(*gptr<u8>(ea_2)) & 0xfeu | 1u);  // (from the original)
    r0_15 = r4 + 0x24u;  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    call_005d69bc(r0_15, r0_13, 0u, r0_14);
    r2_13 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_16 = call_00568a80(r8, 0x6a4078u, r2_13, r3_13);  // (from the original)
    r2_14 = guest::cpu()->r[2];
    r3_14 = guest::cpu()->r[3];
    *gptr<u8>(r0_16 + 0xb7u) = u8(u32(*gptr<u8>(r0_16 + 0xb7u)) & 0xfeu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_17 = call_00568a80(r8, 0x6a4084u, r2_14, r3_14);  // (from the original)
    r2_15 = guest::cpu()->r[2];
    r3_15 = guest::cpu()->r[3];
    *gptr<u8>(r0_17 + 0xb7u) = u8(u32(*gptr<u8>(r0_17 + 0xb7u)) & 0xfeu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_18 = call_00568a80(r8, 0x6a4090u, r2_15, r3_15);  // (from the original)
    r2_16 = guest::cpu()->r[2];
    r3_16 = guest::cpu()->r[3];
    *gptr<u8>(r0_18 + 0xb7u) = u8(u32(*gptr<u8>(r0_18 + 0xb7u)) & 0xfeu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_19 = call_00568a80(r8, 0x6a409cu, r2_16, r3_16);  // (from the original)
    r2 = guest::cpu()->r[2];
    *gptr<u8>(r0_19 + 0xb7u) = u8(u32(*gptr<u8>(r0_19 + 0xb7u)) & 0xfeu);  // (from the original)
L_6a3f18:;
    ea_3 = r4 + 0x940u;  // (from the original)
    *gptr<u32>(ea_3) = u32(0u);
    *gptr<u32>(ea_3 + 4) = u32(0u);
    ea_4 = r13;
    r13 = r13 + 0x20;  // (from the original)
    r3_17 = *gptr<u32>(ea_4);
    guest::cpu()->r[13] = r13;
    return call_00568c10(r8, 0u, r2, r3_17);
L_6a3f34:;
    guest::cpu()->r[13] = r13;
    r0_20 = call_00568a80(r8, 0x6a4078u, r2_11, r3_11);  // (from the original)
    r2_17 = guest::cpu()->r[2];
    r3_18 = guest::cpu()->r[3];
    ea_5 = r0_20 + 0xb7u;  // (from the original)
    *gptr<u8>(ea_5) = u8(u32(*gptr<u8>(ea_5)) & 0xfeu | 1u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_21 = call_00568a80(r8, 0x6a4084u, r2_17, r3_18);  // (from the original)
    r2_18 = guest::cpu()->r[2];
    r3_19 = guest::cpu()->r[3];
    ea_6 = r0_21 + 0xb7u;  // (from the original)
    *gptr<u8>(ea_6) = u8(u32(*gptr<u8>(ea_6)) & 0xfeu | 1u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_22 = call_00568a80(r8, 0x6a4090u, r2_18, r3_19);  // (from the original)
    r2_19 = guest::cpu()->r[2];
    r3_20 = guest::cpu()->r[3];
    ea_7 = r0_22 + 0xb7u;  // (from the original)
    *gptr<u8>(ea_7) = u8(u32(*gptr<u8>(ea_7)) & 0xfeu | 1u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_23 = call_00568a80(r8, 0x6a409cu, r2_19, r3_20);  // (from the original)
    ea_8 = r0_23 + 0xb7u;  // (from the original)
    *gptr<u8>(ea_8) = u8(u32(*gptr<u8>(ea_8)) & 0xfeu | 1u);  // (from the original)
    *gptr<u32>(r13) = u32(r0_23);
    r0_24 = r4 + 0x24u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005d69bc(r0_24, r0_20, r0_21, r0_22);
    r2_20 = guest::cpu()->r[2];
    r3_21 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_25 = call_00568a80(r8, 0x6a4060u, r2_20, r3_21);  // (from the original)
    r2_21 = guest::cpu()->r[2];
    r3_22 = guest::cpu()->r[3];
    *gptr<u8>(r0_25 + 0xb7u) = u8(u32(*gptr<u8>(r0_25 + 0xb7u)) & 0xfeu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_26 = call_00568a80(r8, 0x6a406cu, r2_21, r3_22);  // (from the original)
    r2 = guest::cpu()->r[2];
    *gptr<u8>(r0_26 + 0xb7u) = u8(u32(*gptr<u8>(r0_26 + 0xb7u)) & 0xfeu);  // (from the original)
    guest::preempt();
    goto L_6a3f18;
}

}  // namespace d_006a3d54
GUEST_EXPORT(0x006a3d54, d_006a3d54::f_006a3d54);

// f_006a42ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a42ac {

struct __attribute__((packed)) Object_006a42ac_0 {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
    u8 unknown_18[0xe0d];  // (not used here)
    u8 byte_e25;
};
GUEST_OFFSET(Object_006a42ac_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_006a42ac_0, byte_e25, 0xe25);  // (from the original)


void f_006a42ac(gptr<Object_006a42ac_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r12 = 0;
    u32 r2_1 = 0;
    r2_1 = arg0->word_14;
    r12 = 3u;
    r1 = r2_1 - 0x124u;  // (from the original)
    r2 = *gptr<u32>(r2_1 + 4u);
    for (;;) {
L_6a42cc:;
        if (!(r1 != r0 - 0x114u)) {  // (from the original)
            break;
        }
L_6a42c0:;
        *gptr<u8>(r1 + 0x120u) = u8(r12);  // (from the original)
        r1 = r2 - 0x124u;  // (from the original)
        r2 = *gptr<u32>(r2 + 4u);
        guest::preempt();
    }
    arg0->byte_e25 = u8(1u);
    guest::cpu()->r[1] = 1u;
    return;
}

}  // namespace d_006a42ac
GUEST_EXPORT(0x006a42ac, d_006a42ac::f_006a42ac);

// f_006a4f98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a4f98 {

inline constexpr guest::Function<0x006a42e4, u32(u32, u32, u32, u32)> call_006a42e4;  // (from the original)

u32 f_006a4f98(u32 r0) {
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r0_1 = 0;
    u32 r1_3 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(0x6a4fe0u);  // (from the original)
    r1_1 = r13;
    *gptr<u32>(r13) = u32(0x9047f8u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_006a42e4(r0, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r13 + 4u) = u32(0x6a4fecu);  // (from the original)
    r1_2 = r13;
    *gptr<u32>(r13) = u32(0x9047f8u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_006a42e4(r0, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r0_1;
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
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_4 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_002fae84(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_2 = r0_1 + 0x6e224u;  // (from the original)
    r0_3 = call_001b19dc(r0_2, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r0_4 = call_002fb328(r0_3, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r0_5 = r0_4 + 0x6e2a4u;  // (from the original)
    r0_6 = call_0070b334(r0_5, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    if (r0_6 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_3;
        return r0_6;
    }
    r0_7 = call_002fae84(r0_6, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_8 = r0_7 + 0x6214fu;  // (from the original)
    r1_4 = u32(*gptr<u8>(r0_8 + 0xau)) & ~0x80u;  // (from the original)
    *gptr<u8>(r0_8 + 0xau) = u8(r1_4);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_4;
    return r0_8;
}

}  // namespace d_006a51ec
GUEST_EXPORT(0x006a51ec, d_006a51ec::f_006a51ec);

// f_006a5928: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a5928 {

inline guest::global<u32, 0x00952c7c> global_00952c7c;  // (from the original)
inline constexpr guest::Function<0x001aa440, u32(u32, u32, u32, u32)> call_001aa440;  // (from the original)
inline constexpr guest::Function<0x001c8290, u32(u32, u32, u32, u32)> call_001c8290;  // (from the original)
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> call_002fd108;  // (from the original)
inline constexpr guest::Function<0x006e4a48, u32(u32, u32, u32, u32)> call_006e4a48;  // (from the original)

u32 f_006a5928(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r3_1 = 0;
    u32 r1_3 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r1_4 = 0;
    u32 r0_4 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r1_5 = 0;
    u32 r0_5 = 0;
    u32 r3_4 = 0;
    u32 r3_5 = 0;
    u32 r1_6 = 0;
    u32 r0_6 = 0;
    u32 r3_6 = 0;
    u32 r3_7 = 0;
    u32 r1_7 = 0;
    u32 r0_7 = 0;
    u32 r2_4 = 0;
    u32 r3_8 = 0;
    u32 r1_8 = 0;
    u32 r0_8 = 0;
    u32 r2_5 = 0;
    u32 r3_9 = 0;
    u32 r1_9 = 0;
    u32 r0_9 = 0;
    u32 r2_6 = 0;
    u32 r3_10 = 0;
    u32 r1_10 = 0;
    u32 r0_10 = 0;
    u32 r3_11 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r1_1 = *global_00952c7c;
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fd108(0x18u, r1_1, 4u, r3);  // (from the original)
    *gptr<u8>(r13 + 4u) = u8(0u);
    *gptr<u8>(r13 + 5u) = u8(0u);
    *gptr<u8>(r13 + 6u) = u8(0u);
    r2_1 = r13 + 4u;
    *gptr<u8>(r13 + 7u) = u8(0u);
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    r0_2 = call_001aa440(r0_1, 0u, r2_1, 0u);
    r1_2 = guest::cpu()->r[1];
    r3_1 = guest::cpu()->r[3];
    *gptr<u32>(0x952640u + 4u) = u32(r0_2);  // (from the original)
    if (r0_2 == 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return r0_2;
    }
    r1_3 = *global_00952c7c;
    guest::cpu()->r[13] = r13;
    r0_3 = call_002fd108(0x18u, r1_3, 4u, r3_1);  // (from the original)
    *gptr<u8>(r13 + 4u) = u8(0u);
    *gptr<u8>(r13 + 5u) = u8(0xffu);  // (from the original)
    *gptr<u8>(r13 + 6u) = u8(0xffu);  // (from the original)
    *gptr<u8>(r13 + 7u) = u8(0xffu);  // (from the original)
    r2_2 = r13 + 4u;
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    r0_2 = call_001aa440(r0_3, 0u, r2_2, 0u);
    r1_2 = guest::cpu()->r[1];
    r3_2 = guest::cpu()->r[3];
    *gptr<u32>(0x952640u + 8u) = u32(r0_2);  // (from the original)
    if (r0_2 == 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return r0_2;
    }
    r1_4 = *global_00952c7c;
    guest::cpu()->r[13] = r13;
    r0_4 = call_002fd108(0x18u, r1_4, 4u, r3_2);  // (from the original)
    *gptr<u8>(r13 + 4u) = u8(0u);
    *gptr<u8>(r13 + 5u) = u8(0xffu);  // (from the original)
    *gptr<u8>(r13 + 6u) = u8(0xffu);  // (from the original)
    r2_3 = r13 + 4u;
    *gptr<u8>(r13 + 7u) = u8(0xffu);  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    r0_2 = call_001aa440(r0_4, 0u, r2_3, 1u);
    r1_2 = guest::cpu()->r[1];
    r3_3 = guest::cpu()->r[3];
    *gptr<u32>(0x952640u + 0xcu) = u32(r0_2);  // (from the original)
    if (r0_2 == 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return r0_2;
    }
    r1_5 = *global_00952c7c;
    guest::cpu()->r[13] = r13;
    r0_5 = call_002fd108(0x14u, r1_5, 4u, r3_3);  // (from the original)
    r3_4 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_2 = call_006e4a48(r0_5, 0u, 0u, r3_4);
    r1_2 = guest::cpu()->r[1];
    r3_5 = guest::cpu()->r[3];
    *gptr<u32>(0x952640u + 0x10u) = u32(r0_2);  // (from the original)
    if (r0_2 == 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return r0_2;
    }
    r1_6 = *global_00952c7c;
    guest::cpu()->r[13] = r13;
    r0_6 = call_002fd108(0x10u, r1_6, 4u, r3_5);  // (from the original)
    r3_6 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_2 = call_001c8290(r0_6, 0u, 0u, r3_6);
    r1_2 = guest::cpu()->r[1];
    r3_7 = guest::cpu()->r[3];
    *gptr<u32>(0x952640u + 0x14u) = u32(r0_2);  // (from the original)
    if (r0_2 == 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return r0_2;
    }
    r1_7 = *global_00952c7c;
    guest::cpu()->r[13] = r13;
    r0_7 = call_002fd108(0x18u, r1_7, 4u, r3_7);  // (from the original)
    *gptr<u8>(r13 + 4u) = u8(0u);
    *gptr<u8>(r13 + 5u) = u8(0u);
    *gptr<u8>(r13 + 6u) = u8(0u);
    *gptr<u8>(r13 + 7u) = u8(0u);
    r2_4 = r13 + 4u;
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    r0_2 = call_001aa440(r0_7, 1u, r2_4, 0u);
    r1_2 = guest::cpu()->r[1];
    r3_8 = guest::cpu()->r[3];
    *gptr<u32>(0x952640u + 0x18u) = u32(r0_2);  // (from the original)
    if (r0_2 == 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return r0_2;
    }
    r1_8 = *global_00952c7c;
    guest::cpu()->r[13] = r13;
    r0_8 = call_002fd108(0x18u, r1_8, 4u, r3_8);  // (from the original)
    *gptr<u8>(r13 + 4u) = u8(0u);
    *gptr<u8>(r13 + 5u) = u8(0xffu);  // (from the original)
    *gptr<u8>(r13 + 6u) = u8(0xffu);  // (from the original)
    *gptr<u8>(r13 + 7u) = u8(0xffu);  // (from the original)
    r2_5 = r13 + 4u;
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    r0_2 = call_001aa440(r0_8, 1u, r2_5, 0u);
    r1_2 = guest::cpu()->r[1];
    r3_9 = guest::cpu()->r[3];
    *gptr<u32>(0x952640u + 0x1cu) = u32(r0_2);  // (from the original)
    if (r0_2 == 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return r0_2;
    }
    r1_9 = *global_00952c7c;
    guest::cpu()->r[13] = r13;
    r0_9 = call_002fd108(0x18u, r1_9, 4u, r3_9);  // (from the original)
    *gptr<u8>(r13 + 4u) = u8(0u);
    *gptr<u8>(r13 + 5u) = u8(0xffu);  // (from the original)
    *gptr<u8>(r13 + 6u) = u8(0xffu);  // (from the original)
    *gptr<u8>(r13 + 7u) = u8(0xffu);  // (from the original)
    r2_6 = r13 + 4u;
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    r0_2 = call_001aa440(r0_9, 1u, r2_6, 1u);
    r1_2 = guest::cpu()->r[1];
    r3_10 = guest::cpu()->r[3];
    *gptr<u32>(0x952640u + 0x20u) = u32(r0_2);  // (from the original)
    if (r0_2 == 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return r0_2;
    }
    r1_10 = *global_00952c7c;
    guest::cpu()->r[13] = r13;
    r0_10 = call_002fd108(0x10u, r1_10, 4u, r3_10);  // (from the original)
    r3_11 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_2 = call_001c8290(r0_10, 1u, 0u, r3_11);
    r1_2 = guest::cpu()->r[1];
    *gptr<u32>(0x952640u + 0x24u) = u32(r0_2);  // (from the original)
    if (r0_2 == 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return r0_2;
    }
    *gptr<u8>(0x952640u + 1u) = u8(0u);  // (from the original)
    r0_2 = 1u;
    *gptr<u32>(0x952640u + 0x28u) = u32(0u);  // (from the original)
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_006a5928
GUEST_EXPORT(0x006a5928, d_006a5928::f_006a5928);

// f_006a5b88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a5b88 {

inline guest::global<u32, 0x0094e4b8> global_0094e4b8;  // (from the original)
inline constexpr guest::Function<0x00565f00, u32(u32, u32, u32, u32)> call_00565f00;  // (from the original)
inline constexpr guest::Function<0x0058d5a0, u32(u32, u32, u32, u32)> call_0058d5a0;  // (from the original)
inline constexpr guest::Function<0x0076f0cc, u32(u32, u32, u32, u32)> call_0076f0cc;  // (from the original)
inline constexpr guest::Function<0x0076f1b4, u32(u32, u32, u32, u32)> call_0076f1b4;  // (from the original)

u32 f_006a5b88(u32 r0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    *gptr<u8>(0x952640u + 1u) = u8(1u);  // (from the original)
    *gptr<u32>(0x952640u + 0x28u) = u32(r0);  // (from the original)
    r0_1 = *global_0094e4b8;
    if (r0_1 == 0) {
        goto L_6a5bd0;
    }
    r0_2 = call_0076f1b4(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_2 == 0) {
        goto L_6a5bd0;
    }
    r0_3 = *global_0094e4b8;
    r0_4 = call_0076f0cc(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_4 == 0) {
        r0_5 = 1u;
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return r0_5;
    }
L_6a5bd0:;
    r0_6 = uxth(r0);
    r0_5 = call_00565f00(r0_6, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_5 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return r0_5;
    }
    call_0058d5a0(r0_5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u8>(0x952640u + 1u) = u8(0u);  // (from the original)
    r0_5 = 1u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0_5;
}

}  // namespace d_006a5b88
GUEST_EXPORT(0x006a5b88, d_006a5b88::f_006a5b88);

// f_006a5c00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a5c00 {

inline constexpr guest::Function<0x00565f74, u32(u32, u32, u32, u32)> call_00565f74;  // (from the original)
inline constexpr guest::Function<0x0058d6bc, u32(u32, u32, u32, u32)> call_0058d6bc;  // (from the original)

u32 f_006a5c00(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    r0_1 = uxth(r0);
    guest::cpu()->r[13] -= 8u;
    r0_2 = call_00565f74(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return r0_2;
    }
    *gptr<u8>(0x952640u + 1u) = u8(0u);  // (from the original)
    call_0058d6bc(0u, 0x952640u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_2;
    return r0_2;
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

inline guest::global<u32, 0x006a5e00> global_006a5e00;  // (from the original)

void f_006a5dd4(gptr<Object_006a5dd4_0> arg0, u32 r1, u32 r2) {
    u32 r1_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    r1_1 = r1 << 5;
    arg0->word_4 = u32(std::bit_cast<u32>(std::bit_cast<float>(*global_006a5e00)));
    S0_1 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r1_1))));
    S1_1 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r2 << 5))));
    arg0->word_0 = u32(std::bit_cast<u32>(S0_1));
    arg0->word_8 = u32(std::bit_cast<u32>(S1_1));
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
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
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    u32 r0_5 = 0;
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r1_2 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_8 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r4_1 = 0;
    u32 r0_9 = 0;
    u32 r1_4 = 0;
    u32 r2_5 = 0;
    u32 r0_10 = 0;
    u32 r1_5 = 0;
    u32 r2_6 = 0;
    u32 r3_5 = 0;
    u32 r0_11 = 0;
    u32 r2_7 = 0;
    u32 r3_6 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r1_6 = 0;
    u32 r2_8 = 0;
    u32 r3_7 = 0;
    u32 r0_14 = 0;
    u32 r2_9 = 0;
    u32 r3_8 = 0;
    u32 r0_15 = 0;
    u32 r2_10 = 0;
    u32 r3_9 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    u32 r3_10 = 0;
    u32 r2_11 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    u32 r3_11 = 0;
    u32 r2_12 = 0;
    u32 r3_12 = 0;
    u32 r0_21 = 0;
    u32 r1_7 = 0;
    u32 r2_13 = 0;
    u32 r0_22 = 0;
    u32 r2_14 = 0;
    u32 r3_13 = 0;
    u32 r1_8 = 0;
    u32 r0_23 = 0;
    u32 r4_2 = 0;
    u32 r0_24 = 0;
    u32 r1_9 = 0;
    u32 r2_15 = 0;
    u32 r0_25 = 0;
    u32 r2_16 = 0;
    u32 r3_14 = 0;
    u32 r5_1 = 0;
    u32 r0_26 = 0;
    u32 r2_17 = 0;
    u32 r3_15 = 0;
    u32 r0_27 = 0;
    u32 r0_28 = 0;
    u32 r0_29 = 0;
    u32 r3_16 = 0;
    u32 r2_18 = 0;
    u32 r0_30 = 0;
    u32 r0_31 = 0;
    u32 r3_17 = 0;
    u32 r2_19 = 0;
    u32 r3_18 = 0;
    u32 r4_3 = 0;
    u32 r0_32 = 0;
    u32 r2_20 = 0;
    u32 r3_19 = 0;
    u32 r0_33 = 0;
    u32 r2_21 = 0;
    u32 r3_20 = 0;
    u32 r0_34 = 0;
    u32 r1_10 = 0;
    r13 = r13 - 0x30u;  // (from the original)
    r8 = 0x9b4a24u;  // (from the original)
    r9 = *gptr<u32>(r8 + 4u);
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fae84(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r7 = r0_1 + 0x53400u;  // (from the original)
    r6 = 0u;
L_6a6428:;
    r4 = 0u;
    do {
L_6a642c:;
        guest::cpu()->r[13] = r13;
        r0_2 = call_00317148(r9, r4, r6, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (!(r0_2 == 0)) {
            guest::cpu()->r[13] = r13;
            r0_3 = call_0075db98(r7, r4, r6, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            *gptr<u16>(r0_2) = u16(u32(*gptr<u16>(r0_3)));
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
    guest::cpu()->r[13] = r13;
    r0_4 = call_00613704(r4, r5, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_4 == 0) {
        goto L_6a64e4;
    }
    guest::cpu()->r[13] = r13;
    r0_5 = call_002faea4(r7, r4, r5, r3);
    r3_1 = guest::cpu()->r[3];
    r2_1 = r5 + 1u;
    r1_2 = r4 + 1u;
    guest::cpu()->r[13] = r13;
    r0_6 = call_00317148(r9, r1_2, r2_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_6 == 0) {
        goto L_6a64e4;
    }
    guest::cpu()->r[13] = r13;
    call_0057bc20(r0_6, r0_5, 0u, r3);
    r1_1 = guest::cpu()->r[1];
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
    guest::cpu()->r[13] = r13;
    r0_7 = call_00613758(r7, r1_1, r2, r3);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    *gptr<u32>(r9 + 0x28u) = u32(r0_7);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_8 = call_006f9e94(1u, r0_7, r2_2, r3_2);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_006a6f50(r0_8, r1_3, r2_3, r3_3);
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_0024246c(0u, 0u, r2_4, r3_4);
    r3 = guest::cpu()->r[3];
    r6 = 2u;
    r11 = 0u;
    r10 = 1u;
L_6a6540:;
    r4_1 = r6 & 0xffu;  // (from the original)
    r7 = *gptr<u32>(r8 + (r4_1 << 2));
    guest::cpu()->r[13] = r13;
    r0_9 = call_00317148(r7, 0u, 0u, r3);
    r1_4 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r9 = r0_9;
    if (r0_9 == 0) {
        goto L_6a66a0;
    }
    guest::cpu()->r[13] = r13;
    r0_10 = call_006fa728(r4_1, r1_4, r2_5, r3);
    r1_5 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_11 = call_002fb328(r0_10, r1_5, r2_6, r3_5);
    r2_7 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_12 = r0_11 + 0x5d900u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_13 = call_0030fbb4(r0_12, r0_10, r2_7, r3_6);
    r1_6 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_14 = call_006fb0cc(r4_1, r1_6, r2_8, r3_7);
    r2_9 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_15 = call_006fae98(r0_13, r0_14, r2_9, r3_8);
    r2_10 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 4u) = u32(r0_15);
    *gptr<u16>(r9) = u16(r0_15);
    guest::cpu()->r[13] = r13;
    r0_16 = call_0030512c(r0_13, r0_14, r2_10, r3_9);
    r5 = 0u;
    *gptr<u32>(r13 + 8u) = u32(r0_16);
L_6a65c8:;
    r4 = 0u;
    do {
L_6a65cc:;
        r0_17 = *gptr<u32>(r13 + 8u);
        guest::cpu()->r[13] = r13;
        r0_18 = call_00720358(r0_17, r4, r5, 0u);
        r3_10 = r5 + 4u;
        r2_11 = r4 + 3u;
        *gptr<u32>(r13) = u32(r11);
        guest::cpu()->r[13] = r13;
        call_0057bce0(r9, r0_18, r2_11, r3_10);
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
        r0_19 = *gptr<u32>(r13 + 8u);
        guest::cpu()->r[13] = r13;
        r0_20 = call_00720358(r0_19, r4, r5, 1u);
        r3_11 = r5 + 5u;
        r2_12 = r4 + 4u;
        *gptr<u32>(r13) = u32(r10);
        guest::cpu()->r[13] = r13;
        call_0057bce0(r9, r0_20, r2_12, r3_11);
        r3_12 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 8u);
    r5 = r5 + 1u;
    if (r5 < 8u) {
        guest::preempt();
        goto L_6a6614;
    }
    guest::cpu()->r[13] = r13;
    r0_21 = call_0075291c(r7, 0u, 0u, r3_12);
    r1_7 = guest::cpu()->r[1];
    r2_13 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_21 == 0) {
        goto L_6a66a0;
    }
    guest::cpu()->r[13] = r13;
    r0_22 = call_00304530(r0_21, r1_7, r2_13, r3);
    r2_14 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    r1_8 = *gptr<u32>(r13 + 4u);
    guest::cpu()->r[13] = r13;
    r0_23 = call_001c2074(r0_22, r1_8, r2_14, r3_13);
    r3 = guest::cpu()->r[3];
    if (r0_23 == 0) {
        goto L_6a66a0;
    }
    guest::cpu()->r[13] = r13;
    call_006a92f4(r0_21, r0_23, 0xa00u, r3);  // (from the original)
    r3 = guest::cpu()->r[3];
L_6a66a0:;
    r6 = r6 + 1u;
    if (r6 < 0x1au) {  // (from the original)
        guest::preempt();
        goto L_6a6540;
    }
    r6 = 0x1au;  // (from the original)
L_6a66b0:;
    r4_2 = r6 & 0xffu;  // (from the original)
    r7 = *gptr<u32>(r8 + (r4_2 << 2));
    guest::cpu()->r[13] = r13;
    r0_24 = call_00317148(r7, 0u, 0u, r3);
    r1_9 = guest::cpu()->r[1];
    r2_15 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r9 = r0_24;
    if (r0_24 == 0) {
        goto L_6a680c;
    }
    r10 = uxth(r6 + 0x13du);  // (from the original)
    *gptr<u16>(r9) = u16(r10);
    guest::cpu()->r[13] = r13;
    r0_25 = call_002fb328(r9, r10, r2_15, r3);
    r2_16 = guest::cpu()->r[2];
    r3_14 = guest::cpu()->r[3];
    r5_1 = r0_25 + 0x80u - 0xfff951c8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_26 = call_006f9db4(r4_2, 0xfff951c8u, r2_16, r3_14);  // (from the original)
    r2_17 = guest::cpu()->r[2];
    r3_15 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_27 = call_0076ce3c(r5_1, r0_26, r2_17, r3_15);
    r5 = 0u;
    r11 = r5;
    *gptr<u32>(r13 + 4u) = u32(r0_27 + 2u);
L_6a6730:;
    r4 = 0u;
    do {
L_6a6734:;
        r0_28 = *gptr<u32>(r13 + 4u);
        guest::cpu()->r[13] = r13;
        r0_29 = call_00720358(r0_28, r4, r5, 0u);
        r3_16 = r5 + 4u;
        r2_18 = r4 + 3u;
        *gptr<u32>(r13) = u32(r11);
        guest::cpu()->r[13] = r13;
        call_0057bce0(r9, r0_29, r2_18, r3_16);
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
        r0_30 = *gptr<u32>(r13 + 4u);
        guest::cpu()->r[13] = r13;
        r0_31 = call_00720358(r0_30, r4, r5, 1u);
        r3_17 = r5 + 5u;
        r2_19 = r4 + 4u;
        *gptr<u32>(r13) = u32(r11);
        guest::cpu()->r[13] = r13;
        call_0057bce0(r9, r0_31, r2_19, r3_17);
        r3_18 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 8u);
    r5 = r5 + 1u;
    if (r5 < 8u) {
        guest::preempt();
        goto L_6a6780;
    }
    guest::cpu()->r[13] = r13;
    r0_24 = call_0075291c(r7, 0u, 0u, r3_18);
    r1_9 = guest::cpu()->r[1];
    r2_15 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4_3 = r0_24;
    if (r0_24 == 0) {
        goto L_6a680c;
    }
    guest::cpu()->r[13] = r13;
    r0_32 = call_00304530(r0_24, r1_9, r2_15, r3);
    r2_20 = guest::cpu()->r[2];
    r3_19 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_24 = call_001c2074(r0_32, r10, r2_20, r3_19);
    r2_15 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1_9 = r0_24;
    if (r0_24 == 0) {
        goto L_6a680c;
    }
    guest::cpu()->r[13] = r13;
    r0_24 = call_006a92f4(r4_3, r1_9, 0xa00u, r3);  // (from the original)
    r1_9 = guest::cpu()->r[1];
    r2_15 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_6a680c:;
    r6 = r6 + 1u;
    if (r6 < 0x1eu) {  // (from the original)
        guest::preempt();
        goto L_6a66b0;
    }
    guest::cpu()->r[13] = r13;
    r0_33 = call_002fae84(r0_24, r1_9, r2_15, r3);
    r2_21 = guest::cpu()->r[2];
    r3_20 = guest::cpu()->r[3];
    r0_34 = r0_33 + 0x6fe36u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002e3bd4(r0_34, 0x6fe36u, r2_21, r3_20);  // (from the original)
    r1_10 = guest::cpu()->r[1];
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1_10;
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_006a6408
GUEST_EXPORT(0x006a6408, d_006a6408::f_006a6408);

// f_006a69a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a69a8 {

inline guest::global<u32, 0x009b4a24> global_009b4a24;  // (from the original)

u32 f_006a69a8() {
    u32 r0_1 = 0;
    r0_1 = *global_009b4a24;
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    return r0_1;
}

}  // namespace d_006a69a8
GUEST_EXPORT(0x006a69a8, d_006a69a8::f_006a69a8);

// f_006a69c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a69c0 {

inline guest::global<u32, 0x009b4aa0> global_009b4aa0;  // (from the original)
inline constexpr guest::Function<0x0022d64c, u32(u32, u32, u32, u32)> call_0022d64c;  // (from the original)
inline constexpr guest::Function<0x002b836c, u32(u32, u32, u32, u32)> call_002b836c;  // (from the original)

u32 f_006a69c0(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    goto L_6a69c0;
L_6a69c0:;
    guest::cpu()->r[13] -= 8u;
    call_002b836c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_1 = *global_009b4aa0;
    call_0022d64c(r0_1, r0, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r0_2 = *gptr<u32>(r0 + 0x10u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return guest::call_address<u32>(0x114b15u, r0_2, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_006a69c0
GUEST_EXPORT(0x006a69c0, d_006a69c0::f_006a69c0);

// f_006a6b48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a6b48 {

inline constexpr guest::Function<0x002ffb64, u32(u32, u32, u32, u32)> call_002ffb64;  // (from the original)
inline constexpr guest::Function<0x005817f0, u32(u32, u32, u32, u32)> call_005817f0;  // (from the original)
inline constexpr guest::Function<0x00581a18, u32(u32, u32, u32, u32)> call_00581a18;  // (from the original)

u32 f_006a6b48() {
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r5_1 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r7 = 0u;
    r6 = 0x9b4a24u;  // (from the original)
    r0_1 = *gptr<u32>(r6 + 0x7cu);  // (from the original)
    if (r0_1 != 0) {
        call_005817f0(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        r0_2 = *gptr<u32>(r6 + 0x7cu);  // (from the original)
        if (r0_2 != 0) {
            r0_3 = call_00581a18(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            call_002ffb64(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        }
        *gptr<u32>(r6 + 0x7cu) = u32(r7);  // (from the original)
    }
    r4 = 0x20u;  // (from the original)
    do {
L_6a6b80:;
        r5_1 = r4 & 0xffu;  // (from the original)
        r0_4 = *gptr<u32>(r6 + (r5_1 << 2));
        if (!(r0_4 == 0)) {
            call_005817f0(r0_4, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            r0_4 = *gptr<u32>(r6 + (r5_1 << 2));
            if (!(r0_4 == 0)) {
                r0_5 = call_00581a18(r0_4, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                r0_4 = call_002ffb64(r0_5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            }
            *gptr<u32>(r6 + (r5_1 << 2)) = u32(r7);
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 0x2au);  // (from the original)
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    return r0_4;
}

}  // namespace d_006a6b48
GUEST_EXPORT(0x006a6b48, d_006a6b48::f_006a6b48);

// f_006a6cc8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a6cc8 {

inline guest::global<u32, 0x009526f8> global_009526f8;  // (from the original)
inline constexpr guest::Function<0x001348cc, u32(u32, u32, u32, u32)> call_001348cc;  // (from the original)

u32 f_006a6cc8(u32 r0) {
    u32 r0_1 = 0;
    r0_1 = *global_009526f8;
    return call_001348cc(r0_1, r0, 0x102au, guest::cpu()->r[3]);  // (from the original)
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
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = *gptr<u32>(0x9b4a24u + 0x78u);  // (from the original)
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    r1 = *gptr<u32>(0x9526ecu + 8u);  // (from the original)
    if (r1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    call_005817f0(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0_2 = *gptr<u32>(0x9b4a24u + 0x78u);  // (from the original)
    if (r0_2 != 0) {
        r0_3 = call_00581a18(r0_2, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        call_002ffb64(r0_3, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    *gptr<u32>(0x9b4a24u + 0x78u) = u32(*gptr<u32>(0x9526ecu + 8u));  // (from the original)
    *gptr<u32>(0x9526ecu + 8u) = u32(0u);  // (from the original)
    r0_1 = *gptr<u32>(0x9526ecu + 0xcu);  // (from the original)
    if (r0_1 != 0) {
        r0_4 = call_0012eacc(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_2 = guest::cpu()->r[1];
        r0_1 = call_002ffb64(r0_4, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    *gptr<u32>(0x9526ecu + 0xcu) = u32(0u);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_006a7174
GUEST_EXPORT(0x006a7174, d_006a7174::f_006a7174);

// f_006a71ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a71ec {

inline constexpr guest::Function<0x002025bc, u32(u32, u32, u32, u32)> call_002025bc;  // (from the original)
inline constexpr guest::Function<0x002ebce4, u32(u32, u32, u32, u32)> call_002ebce4;  // (from the original)
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> call_002fd108;  // (from the original)

u32 f_006a71ec(u32 r0_unused, u32 r1) {
    u32 r0_1 = 0;
    u32 r4_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    r0_1 = 0x952c50u;  // (from the original)
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4_1 = *gptr<u32>(r0_1);
    if (r4_1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    *gptr<u32>(0x9526ecu + 8u) = u32(*gptr<u32>(0x9b4a24u + 0x78u));  // (from the original)
    r0_1 = call_002025bc(r4_1, 4u, 4u, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    *gptr<u32>(0x9b4a24u + 0x78u) = u32(r0_1);  // (from the original)
    r0_1 = *gptr<u32>(0x9526ecu + 0xcu);  // (from the original)
    if (r0_1 != 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    r0_2 = call_002fd108(0x102au, r4_1, 4u, guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r0_1 = call_002ebce4(r0_2, r1_1, r2_1, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(0x9526ecu + 0xcu) = u32(r0_1);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_006a71ec
GUEST_EXPORT(0x006a71ec, d_006a71ec::f_006a71ec);

// f_006a733c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a733c {

inline guest::global<u32, 0x006a7390> global_006a7390;  // (from the original)
inline guest::global<u32, 0x0085f2e8> global_0085f2e8;  // (from the original)
inline guest::global<u32, 0x0085f2ec> global_0085f2ec;  // (from the original)
inline constexpr guest::Function<0x006c78b8, u32(u32, u32, u32, u32)> call_006c78b8;  // (from the original)

u32 f_006a733c(gptr<Float3> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    float S1_1 = 0;
    float S0_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    guest::cpu()->r[13] -= 8u;
    S1_1 = std::bit_cast<float>(*global_006a7390);
    arg0->v[0] = float(s32(std::bit_cast<u32>(std::bit_cast<float>(*global_0085f2e8 + (r1 << 5)))));
    arg0->v[1] = S1_1;
    S0_1 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(*global_0085f2ec + (r2 << 5)))));
    arg0->v[2] = S0_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    r0_1 = call_006c78b8(r1, r2, 0u, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    *gptr<u32>(r0 + 4u) = u32(std::bit_cast<u32>(S0_2));
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    return r0_1;
}

}  // namespace d_006a733c
GUEST_EXPORT(0x006a733c, d_006a733c::f_006a733c);

// f_006a739c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a739c {

inline guest::global<u32, 0x006a7404> global_006a7404;  // (from the original)
inline guest::global<u32, 0x0085f2e8> global_0085f2e8;  // (from the original)
inline guest::global<u32, 0x0085f2ec> global_0085f2ec;  // (from the original)
inline constexpr guest::Function<0x006c7908, u32(u32, u32, u32, u32)> call_006c7908;  // (from the original)

u32 f_006a739c(gptr<Float3> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r6_1 = 0;
    u32 r3_1 = 0;
    float S1_1 = 0;
    u32 r5_1 = 0;
    float S0_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r6_1 = *global_0085f2e8;
    r3_1 = *gptr<u32>(r13 + 0x18u);  // (from the original)
    S1_1 = std::bit_cast<float>(*global_006a7404);
    r5_1 = r3_1 + (r2 << 4);
    arg0->v[0] = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r6_1 + (r3 + (r1 << 4) << 5)))));
    arg0->v[1] = S1_1;
    S0_1 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(*global_0085f2ec + (r5_1 << 5)))));
    arg0->v[2] = S0_1;
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    r0_1 = call_006c7908(r1, r2, r3, r3_1);
    r1_1 = guest::cpu()->r[1];
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    *gptr<u32>(r0 + 4u) = u32(std::bit_cast<u32>(S0_2));
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    return r0_1;
}

}  // namespace d_006a739c
GUEST_EXPORT(0x006a739c, d_006a739c::f_006a739c);

// f_006a7410: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a7410 {

inline guest::global<u32, 0x009526f8> global_009526f8;  // (from the original)
inline constexpr guest::Function<0x002e3bd4, u32(u32, u32, u32, u32)> call_002e3bd4;  // (from the original)

u32 f_006a7410() {
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = *global_009526f8;
    call_002e3bd4(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    return 1u;
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
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 r0_3 = 0;
    u32 r1_4 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_5 = 0;
    u32 r1_6 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_7 = 0;
    u32 r1_8 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    r1_1 = *gptr<u32>(0x9526ecu + 0xcu);  // (from the original)
    if (r1_1 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return 1u;
    }
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    call_0055cabc(r0_1, r0, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_2 = *gptr<u32>(0x9526ecu + 0xcu);  // (from the original)
    r1_2 = r13;
    guest::cpu()->r[13] = r13;
    call_002e38b4(r0_2, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r0_3 = *gptr<u32>(0x9526ecu + 0xcu);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002e3bd4(r0_3, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    r0_4 = r13;
    guest::cpu()->r[13] = r13;
    r0_5 = call_0055cb58(r0_4, r1_4, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    guest::cpu()->r[13] = r13;
    call_005d1ee0(r0_5, r1_5, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_6 = guest::cpu()->r[1];
    r0_6 = r13;
    guest::cpu()->r[13] = r13;
    r0_7 = call_0055cb58(r0_6, r1_6, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_7 = guest::cpu()->r[1];
    guest::cpu()->r[13] = r13;
    call_00114c9c(r0_7, r1_7, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_8 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_8;
    guest::cpu()->r[13] = r13;
    return 1u;
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
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r4_1 = 0;
    u32 r12_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r2_1 = 0;
    u32 r0_4 = 0;
    u32 ea_1 = 0;
    u32 r4_2 = 0;
    u32 r0_5 = 0;
    u32 r1_1 = 0;
    u32 r3_2 = 0;
    u32 r0_6 = 0;
    u32 r2_2 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_2 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    r13 = r13 - 0x18;  // (from the original)
    arg0->byte_0 = u8(0u);
    arg0->byte_1 = u8(0u);
    arg0->byte_2 = u8(0u);
    arg0->byte_3 = u8(0u);
    arg0->byte_4 = u8(0xffu);  // (from the original)
    arg0->byte_5 = u8(0xffu);  // (from the original)
    arg0->word_8 = u32(0xfu);  // (from the original)
    arg0->word_14 = u32(r0 + 0x28u);  // (from the original)
    arg0->word_18 = u32(0u);
    arg0->word_1c = u32(0u);
    arg0->word_c = u32(0xfu);  // (from the original)
    arg0->word_10 = u32(0xe1u);  // (from the original)
    r4_1 = r0 + 0x20u;  // (from the original)
    r12_1 = r0 + 0x11bcu;  // (from the original)
    r0_1 = r0 + 0x28u;  // (from the original)
    arg0->word_20 = u32(0u);
    arg0->word_24 = u32(r12_1);
    guest::cpu()->r[13] = r13;
    r0_2 = call_00301d0c(r0_1, 0x274724u, 0x14u, 0xe1u);  // (from the original)
    r3_1 = guest::cpu()->r[3];
    r0_3 = r0_2 + 0x1194u;  // (from the original)
    r2_1 = r0_3 + 0x2cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_00307040(r0_3, 0xe1u, r2_1, r3_1);  // (from the original)
    ea_1 = r0_4 + 0x14u;  // (from the original)
    *gptr<u32>(ea_1) = u32(0xfu);  // (from the original)
    *gptr<u32>(ea_1 + 4) = u32(0xfu);  // (from the original)
    *gptr<u32>(ea_1 + 8) = u32(0u);
    r4_2 = r0_4 - 0x11bcu;  // (from the original)
    *gptr<u32>(r0_4) = u32(0x8fa3a4u);  // (from the original)
    *gptr<u32>(r0_4 + 0x20u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_4 + 0x24u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_4 + 0x28u) = u32(0u);  // (from the original)
    *gptr<u8>(r4_2 + 2u) = u8(0x10u);  // (from the original)
    *gptr<u8>(r4_2 + 3u) = u8(0x10u);  // (from the original)
    *gptr<u8>(r4_2 + 4u) = u8(0x51u);  // (from the original)
    *gptr<u8>(r4_2 + 5u) = u8(0x51u);  // (from the original)
    r0_5 = u32(*gptr<u8>(r4_2));
    r1_1 = u32(*gptr<u8>(r4_2 + 1u));
    r3_2 = u32(*gptr<u8>(r4_2 + 4u));
    if (r0_5 < 0x10u) {  // (from the original)
        r0_5 = 0x10u;  // (from the original)
        goto L_6a836c;
    }
    if (r0_5 > 0x51u) {  // (from the original)
        r0_5 = r3_2;
    }
L_6a836c:;
    *gptr<u8>(r4_2) = u8(r0_5);
    r0_6 = u32(*gptr<u8>(r4_2 + 3u));
    r2_2 = u32(*gptr<u8>(r4_2 + 5u));
    if (r1_1 < 0x10u) {  // (from the original)
        r1_1 = r0_6;
        goto L_6a838c;
    }
    if (r1_1 > 0x51u) {  // (from the original)
        r1_1 = r2_2;
    }
L_6a838c:;
    r0_7 = r4_2 + 0x1000u;  // (from the original)
    *gptr<u8>(r4_2 + 1u) = u8(r1_1);
    *gptr<u8>(r0_7 + 0x214u) = u8(0u);  // (from the original)
    *gptr<u8>(r0_7 + 0x215u) = u8(0u);  // (from the original)
    *gptr<u32>(r0_7 + 0x218u) = u32(0u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_8 = call_002f74c8(r0_7, r1_1, r2_2, r3_2);
    r1_2 = guest::cpu()->r[1];
    if (r0_8 == 1u) {
        *gptr<u8>(r4_2 + 4u) = u8(0x51u);  // (from the original)
        *gptr<u8>(r4_2 + 5u) = u8(0x51u);  // (from the original)
        *gptr<u8>(r4_2 + 2u) = u8(0u);
        *gptr<u8>(r4_2 + 3u) = u8(0u);
        r0_9 = u32(*gptr<u8>(r4_2));
        r1_2 = u32(*gptr<u8>(r4_2 + 1u));
        if (r0_9 > 0x51u) {  // (from the original)
            r0_9 = 0x51u;  // (from the original)
        }
        *gptr<u8>(r4_2) = u8(r0_9);
        r0_10 = u32(*gptr<u8>(r4_2 + 5u));
        if (r1_2 > 0x51u) {  // (from the original)
            r1_2 = r0_10;
        }
        *gptr<u8>(r4_2 + 1u) = u8(r1_2);
    }
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r4_2;
}

}  // namespace d_006a8280
GUEST_EXPORT(0x006a8280, d_006a8280::f_006a8280);

// f_006a83fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a83fc {

inline guest::global<u32, 0x006a843c> global_006a843c;  // (from the original)
inline constexpr guest::Function<0x006a8598, u32(u32, u32, u32, u32)> call_006a8598;  // (from the original)

u32 f_006a83fc(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    float S0_1 = 0;
    u32 r4_1 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    float S0_2 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    S0_1 = std::bit_cast<float>(*global_006a843c);
    r4_1 = r13 + 8u;
    *gptr<u32>(r13 + 8u) = u32(std::bit_cast<u32>(S0_1));
    *gptr<u32>(r13 + 0xcu) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    *gptr<u32>(r13) = u32(r2);
    *gptr<u32>(r13 + 4) = u32(r4_1);
    r2_1 = *gptr<u32>(0x8653fcu + (r3 << 3));  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    call_006a8598(guest::cpu()->r[0], r3, r2_1, r1);
    r1_1 = guest::cpu()->r[1];
    S0_2 = guest::cpu()->s[0];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    return guest::cpu()->r[0];
}

}  // namespace d_006a83fc
GUEST_EXPORT(0x006a83fc, d_006a83fc::f_006a83fc);

// f_006a8444: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a8444 {

inline constexpr guest::Function<0x006a8598, u32(u32, u32, u32, u32)> call_006a8598;  // (from the original)

u32 f_006a8444(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r1_2 = 0;
    r13 = r13 - 0x10u;  // (from the original)
    *gptr<u32>(r13) = u32(r2);
    *gptr<u32>(r13 + 4) = u32(r3);
    r1_1 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    r2_1 = *gptr<u32>(0x8653fcu + (r1_1 << 3));  // (from the original)
    guest::cpu()->r[13] = r13;
    call_006a8598(guest::cpu()->r[0], r1_1, r2_1, r1);
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
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
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    r0_1 = arg0->word_184;
    r13 = r13 - 0x38u;  // (from the original)
    r0_2 = r0 + (r0_1 + (r0_1 << 1) << 3) + 4u;
    r3_1 = *gptr<u32>(r0_2 + 0xcu);  // (from the original)
    if (r3_1 == 0) {
        r13 = r13 + 0x38u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    if (*gptr<u32>(r0_2 + 0x10u) != *gptr<u32>(r3_1 + 0xcu)) {  // (from the original)
        r13 = r13 + 0x38u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    r0_3 = r13;
    guest::cpu()->r[13] = r13;
    call_00207190(r0_3, r1, guest::cpu()->r[2], 1u);
    r3_2 = guest::cpu()->r[3];
    r0_4 = *gptr<u32>(r0 + 0x184u);  // (from the original)
    r1_1 = r13;
    r0_5 = r0 + (r0_4 + (r0_4 << 1) << 3) + 4u;
    guest::cpu()->r[13] = r13;
    call_002e5bec(r0_5, r1_1, guest::cpu()->r[2], r3_2);
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_006a8474
GUEST_EXPORT(0x006a8474, d_006a8474::f_006a8474);

// f_006a84e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a84e8 {

inline guest::global<u32, 0x006a852c> global_006a852c;  // (from the original)
inline constexpr guest::Function<0x006a8598, u32(u32, u32, u32, u32)> call_006a8598;  // (from the original)

u32 f_006a84e8(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    float S0_1 = 0;
    u32 r4_1 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    float S0_2 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    S0_1 = std::bit_cast<float>(*global_006a852c);
    r4_1 = r13 + 8u;
    *gptr<u32>(r13 + 8u) = u32(std::bit_cast<u32>(S0_1));
    *gptr<u32>(r13 + 0xcu) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    *gptr<u32>(r13) = u32(r2);
    *gptr<u32>(r13 + 4) = u32(r4_1);
    r2_1 = *gptr<u32>(0x8653fcu + (r3 << 3) + 4u);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    call_006a8598(guest::cpu()->r[0], r3, r2_1, r1);
    r1_1 = guest::cpu()->r[1];
    S0_2 = guest::cpu()->s[0];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    return guest::cpu()->r[0];
}

}  // namespace d_006a84e8
GUEST_EXPORT(0x006a84e8, d_006a84e8::f_006a84e8);

// f_006a8534: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a8534 {

inline constexpr guest::Function<0x006a8598, u32(u32, u32, u32, u32)> call_006a8598;  // (from the original)

u32 f_006a8534(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r1_2 = 0;
    r13 = r13 - 0x10u;  // (from the original)
    r1_1 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    *gptr<u32>(r13) = u32(r2);
    *gptr<u32>(r13 + 4) = u32(r3);
    r2_1 = *gptr<u32>(0x8653fcu + (r1_1 << 3) + 4u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_006a8598(guest::cpu()->r[0], r1_1, r2_1, r1);
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return guest::cpu()->r[0];
}

}  // namespace d_006a8534
GUEST_EXPORT(0x006a8534, d_006a8534::f_006a8534);

// f_006a8568: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a8568 {

struct __attribute__((packed)) Object_006a8568_0 {
    u8 unknown_0[0x188];  // (not used here)
    u32 word_188;
};
GUEST_OFFSET(Object_006a8568_0, word_188, 0x188);  // (from the original)

inline constexpr guest::Function<0x002e6450, u32(u32, u32, u32, u32)> call_002e6450;  // (from the original)

u32 f_006a8568(gptr<Object_006a8568_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    r4 = 0u;
    arg0->word_188 = u32(r1);
    do {
L_6a8578:;
        r0_1 = r5 + (r4 + (r4 << 1) << 3) + 4u;
        r0_2 = call_002e6450(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(0x10u));  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0_2;
}

}  // namespace d_006a8568
GUEST_EXPORT(0x006a8568, d_006a8568::f_006a8568);

// f_006a8954: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a8954 {

struct __attribute__((packed)) Object_006a8954_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_006a8954_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)

u32 f_006a8954(gptr<Object_006a8954_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(0x8f8b60u);  // (from the original)
    r0_1 = r0 + 4u;
    call_002f76ac(r0_1, 0x2e6944u, 0x18u, 0x10u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
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

inline guest::global<u32, 0x00952ae4> global_00952ae4;  // (from the original)
inline constexpr guest::Function<0x00125b38, u32(u32, u32, u32, u32)> call_00125b38;  // (from the original)
inline constexpr guest::Function<0x0031758c, u32(u32, u32, u32, u32)> call_0031758c;  // (from the original)

u32 f_006a8988(gptr<Object_006a8988_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    if (arg0->word_18 != 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 1u;
    }
    *gptr<u32>(r13 + 0xcu) = u32(0x6a89f4u);  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(0x9047f8u);  // (from the original)
    *gptr<u32>(r13) = u32(1u);
    *gptr<u32>(r13 + 4) = u32(0u);
    r3_1 = r13 + 8u;
    r0_1 = r0 + 0x3cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0031758c(r0_1, 0x1080u, r1, r3_1);  // (from the original)
    r2_1 = *gptr<u32>(r0 + 0x40u);  // (from the original)
    r1_1 = *global_00952ae4;
    r0_2 = r0 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_00125b38(r0_2, r1_1, r2_1, 0u);
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_3;
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

inline guest::global<u32, 0x00952ae8> global_00952ae8;  // (from the original)
inline constexpr guest::Function<0x00125b38, u32(u32, u32, u32, u32)> call_00125b38;  // (from the original)
inline constexpr guest::Function<0x0031758c, u32(u32, u32, u32, u32)> call_0031758c;  // (from the original)

u32 f_006a8a0c(gptr<Object_006a8a0c_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    if (arg0->word_28 != 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 1u;
    }
    *gptr<u32>(r13 + 0xcu) = u32(0x6a8a78u);  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(0x9047f8u);  // (from the original)
    *gptr<u32>(r13) = u32(1u);
    *gptr<u32>(r13 + 4) = u32(0u);
    r3_1 = r13 + 8u;
    r0_1 = r0 + 0x44u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0031758c(r0_1, 0x4000u, r1, r3_1);  // (from the original)
    r2_1 = *gptr<u32>(r0 + 0x48u);  // (from the original)
    r1_1 = *global_00952ae8;
    r0_2 = r0 + 0x24u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_00125b38(r0_2, r1_1, r2_1, 0u);
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_006a8a0c
GUEST_EXPORT(0x006a8a0c, d_006a8a0c::f_006a8a0c);

// f_006a8a90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a8a90 {

inline constexpr guest::Function<0x0013864c, u32(u32, u32, u32, u32)> call_0013864c;  // (from the original)
inline constexpr guest::Function<0x002f747c, u32(u32, u32, u32, u32)> call_002f747c;  // (from the original)

u32 f_006a8a90(u32 r0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = r0 + 0x14u;  // (from the original)
    call_0013864c(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_2 = r0 + 0x3cu;  // (from the original)
    guest::cpu()->r[13] += 8u;
    return call_002f747c(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
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

inline guest::global<u32, 0x00952ae0> global_00952ae0;  // (from the original)
inline constexpr guest::Function<0x00125b38, u32(u32, u32, u32, u32)> call_00125b38;  // (from the original)
inline constexpr guest::Function<0x0031758c, u32(u32, u32, u32, u32)> call_0031758c;  // (from the original)

u32 f_006a8aac(gptr<Object_006a8aac_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    if (arg0->word_8 != 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 1u;
    }
    *gptr<u32>(r13 + 0xcu) = u32(0x6a8b18u);  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(0x9047f8u);  // (from the original)
    *gptr<u32>(r13) = u32(1u);
    *gptr<u32>(r13 + 4) = u32(0u);
    r3_1 = r13 + 8u;
    r0_1 = r0 + 0x34u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0031758c(r0_1, 0x1600u, r1, r3_1);  // (from the original)
    r2_1 = *gptr<u32>(r0 + 0x38u);  // (from the original)
    r1_1 = *global_00952ae0;
    r0_2 = r0 + 4u;
    guest::cpu()->r[13] = r13;
    r0_3 = call_00125b38(r0_2, r1_1, r2_1, 0u);
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_006a8aac
GUEST_EXPORT(0x006a8aac, d_006a8aac::f_006a8aac);

// f_006a8b34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a8b34 {

inline constexpr guest::Function<0x0013864c, u32(u32, u32, u32, u32)> call_0013864c;  // (from the original)
inline constexpr guest::Function<0x002f747c, u32(u32, u32, u32, u32)> call_002f747c;  // (from the original)

u32 f_006a8b34(u32 r0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = r0 + 0x24u;  // (from the original)
    call_0013864c(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_2 = r0 + 0x44u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    return call_002f747c(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_006a8b34
GUEST_EXPORT(0x006a8b34, d_006a8b34::f_006a8b34);

// f_006a8b50: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a8b50 {

inline constexpr guest::Function<0x0013864c, u32(u32, u32, u32, u32)> call_0013864c;  // (from the original)
inline constexpr guest::Function<0x002f747c, u32(u32, u32, u32, u32)> call_002f747c;  // (from the original)

u32 f_006a8b50(u32 r0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = r0 + 4u;
    call_0013864c(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_2 = r0 + 0x34u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    return call_002f747c(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
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
    u32 r2_1 = 0;
    u32 zf_1 = 0;
    u32 r2_2 = 0;
    r2_1 = arg0->word_254;
    zf_1 = r2_1 == 0;
    if (!zf_1) {
        r0 = arg0->word_258;
        zf_1 = r0 == 0;
    }
    if (zf_1) {
        return 0u;
    }
    if ((u32(*gptr<u8>(r2_1 + 0xb7u)) & 1u) == 0) {  // (from the original)
        return 0u;
    }
    r2_2 = u32(*gptr<u8>(r0 + 0xb7u));  // (from the original)
    if ((r2_2 & 1u) == 0) {
        return 0u;
    }
    return call_004bef3c(r0, guest::cpu()->r[1], r2_2, guest::cpu()->r[3]);
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

inline guest::global<u32, 0x0085f2c4> global_0085f2c4;  // (from the original)
inline guest::global<u32, 0x0085f2c8> global_0085f2c8;  // (from the original)
inline constexpr guest::Function<0x006a5e04, u32(u32, u32, u32, u32)> call_006a5e04;  // (from the original)

u32 f_006a97a0(gptr<Object_006a97a0_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r3_1 = 0;
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    r13 = r13 - 8;
    arg0->word_0 = u32(r1);
    arg0->word_4 = u32(r2);
    arg0->word_8 = u32(r1 * *global_0085f2c4);
    r3_1 = r2 * *global_0085f2c8;
    ea_1 = r0 + 0xcu;  // (from the original)
    arg0->word_c = u32(r3_1);
    r0_1 = ea_1 + 4u;
    guest::cpu()->r[13] = r13;
    call_006a5e04(r0_1, r1, r2, r3_1);
    r1_1 = guest::cpu()->r[1];
    r13 = r13 + 8;
    guest::cpu()->r[13] = r13;
    return 1u;
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
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(0u);
    arg0->word_4 = u32(0u);
    arg0->word_8 = u32(0u);
    arg0->word_c = u32(0u);
    r0_1 = r0 + 0x1cu;  // (from the original)
    call_002f825c(r0_1, 0xa00u, r2, r3);  // (from the original)
    r0_2 = r0 + 0x1cu;  // (from the original)
    r0_3 = call_00301d0c(r0_2, 0x60d240u, 0xau, 0x100u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r0_4 = r0_3 - 0x1cu;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return r0_4;
}

}  // namespace d_006a9834
GUEST_EXPORT(0x006a9834, d_006a9834::f_006a9834);

// f_006a987c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a987c {

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)

u32 f_006a987c(u32 r0) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = r0 + 0x1cu;  // (from the original)
    call_002f76ac(r0_1, 0x60d260u, 0xau, 0x100u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
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

inline guest::global<u32, 0x006a9960> global_006a9960;  // (from the original)
inline guest::global<u32, 0x006a9964> global_006a9964;  // (from the original)
inline guest::global<u32, 0x006a9968> global_006a9968;  // (from the original)

u32 f_006a98b0(gptr<Object_006a98b0_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    float S1_1 = 0;
    float S0_1 = 0;
    float S0_2 = 0;
    guest::cpu()->r[13] -= 4u;
    S1_1 = std::bit_cast<float>(arg0->word_4);
    arg0->word_10 = u32(std::bit_cast<u32>(std::bit_cast<float>(*global_006a9960)));
    S0_1 = fabsf(S1_1);
    if (r1 != 0) {
        if (s32(std::bit_cast<u32>(S0_1)) > s32(0x34000000u)) {  // (from the original)
            guest::cpu()->r[13] += 4u;
            guest::cpu()->r[1] = r1;
            guest::cpu()->s[0] = S0_1;
            guest::cpu()->s[1] = S1_1;
            return 0u;
        }
        arg0->byte_18 = u8(r1);
        S0_2 = std::bit_cast<float>(*global_006a9964);
        arg0->word_4 = u32(std::bit_cast<u32>(S0_2));
        if (r2 == 0) {
            *gptr<u32>(r0 + 8u) = u32(std::bit_cast<u32>(S0_2));
            guest::cpu()->r[13] += 4u;
            guest::cpu()->r[1] = r1;
            guest::cpu()->s[0] = S0_2;
            guest::cpu()->s[1] = S1_1;
            return 0u;
        }
        if (r3 == 0) {
            arg0->byte_0 = u8(0u);
            guest::cpu()->r[13] += 4u;
            guest::cpu()->r[1] = r1;
            guest::cpu()->s[0] = S0_2;
            guest::cpu()->s[1] = S1_1;
            return 1u;
        }
        arg0->byte_0 = u8(1u);
        arg0->half_14 = u16(0u);
        arg0->half_16 = u16(0xfu);  // (from the original)
        guest::cpu()->r[13] += 4u;
        guest::cpu()->r[1] = 0xfu;  // (from the original)
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_1;
        return 1u;
    }
    *gptr<u8>(r0) = u8(0u);
    if (s32(std::bit_cast<u32>(S0_1)) <= s32(0x34000000u)) {  // (from the original)
        guest::cpu()->r[13] += 4u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return 0u;
    }
    *gptr<u8>(r0 + 0x18u) = u8(r1);  // (from the original)
    S0_2 = std::bit_cast<float>(*global_006a9968);
    *gptr<u32>(r0 + 4u) = u32(std::bit_cast<u32>(S0_2));
    if (r2 == 0) {
        *gptr<u32>(r0 + 8u) = u32(std::bit_cast<u32>(S0_2));
        guest::cpu()->r[13] += 4u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_1;
        return 0u;
    }
    guest::cpu()->r[13] += 4u;
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_1;
    return 1u;
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

inline guest::global<u32, 0x006a99d0> global_006a99d0;  // (from the original)
inline guest::global<u32, 0x006a99d4> global_006a99d4;  // (from the original)
inline guest::global<u32, 0x006a99d8> global_006a99d8;  // (from the original)

void f_006a996c(gptr<Object_006a996c_0> arg0, u32 r1) {
    float S0_1 = 0;
    float S0_2 = 0;
    float S0_3 = 0;
    float S0_4 = 0;
    float S0_5 = 0;
    arg0->word_10 = u32(std::bit_cast<u32>(std::bit_cast<float>(*global_006a99d0)));
    if (r1 != 0) {
        S0_1 = fabsf(std::bit_cast<float>(arg0->word_4));
        if (s32(std::bit_cast<u32>(S0_1)) > s32(0x34000000u)) {  // (from the original)
            guest::cpu()->s[0] = S0_1;
            return;
        }
        arg0->byte_18 = u8(r1);
        S0_2 = std::bit_cast<float>(*global_006a99d4);
        arg0->word_4 = u32(std::bit_cast<u32>(S0_2));
        arg0->word_8 = u32(std::bit_cast<u32>(S0_2));
        guest::cpu()->s[0] = S0_2;
        return;
    }
    S0_3 = std::bit_cast<float>(arg0->word_4);
    arg0->byte_0 = u8(0u);
    S0_4 = fabsf(S0_3);
    if (s32(std::bit_cast<u32>(S0_4)) <= s32(0x34000000u)) {  // (from the original)
        guest::cpu()->s[0] = S0_4;
        return;
    }
    arg0->byte_18 = u8(r1);
    S0_5 = std::bit_cast<float>(*global_006a99d8);
    arg0->word_4 = u32(std::bit_cast<u32>(S0_5));
    arg0->word_8 = u32(std::bit_cast<u32>(S0_5));
    guest::cpu()->s[0] = S0_5;
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

inline guest::global<u32, 0x006a9a34> global_006a9a34;  // (from the original)
inline guest::global<u32, 0x006a9a38> global_006a9a38;  // (from the original)
inline guest::global<u32, 0x006a9a3c> global_006a9a3c;  // (from the original)

u32 f_006a99dc(gptr<Object_006a99dc_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    float S1_1 = 0;
    float S2_1 = 0;
    float S0_1 = 0;
    S1_1 = std::bit_cast<float>(*global_006a9a38);
    S2_1 = std::bit_cast<float>(*global_006a9a3c);
    S0_1 = std::bit_cast<float>(*global_006a9a34);
    arg0->word_10 = u32(std::bit_cast<u32>(S1_1));
    arg0->word_8 = u32(std::bit_cast<u32>(S2_1));
    arg0->word_4 = u32(std::bit_cast<u32>(S0_1));
    arg0->byte_18 = u8(1u);
    if (r1 == 0) {
        arg0->word_8 = u32(std::bit_cast<u32>(S0_1));
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return 0u;
    }
    if (r2 == 0) {
        *gptr<u8>(r0) = u8(0u);
        guest::cpu()->r[1] = 0u;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return 1u;
    }
    *gptr<u8>(r0) = u8(1u);
    *gptr<u16>(r0 + 0x14u) = u16(0u);  // (from the original)
    *gptr<u16>(r0 + 0x16u) = u16(0xfu);  // (from the original)
    guest::cpu()->r[1] = 0u;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return 1u;
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

inline guest::global<u32, 0x006a9a74> global_006a9a74;  // (from the original)
inline guest::global<u32, 0x006a9a78> global_006a9a78;  // (from the original)
inline guest::global<u32, 0x006a9a7c> global_006a9a7c;  // (from the original)

u32 f_006a9a40(gptr<Object_006a9a40_0> arg0, u32 r1) {
    float S1_1 = 0;
    float S0_1 = 0;
    u32 zf_1 = 0;
    u32 r0_1 = 0;
    S1_1 = std::bit_cast<float>(*global_006a9a78);
    S0_1 = std::bit_cast<float>(*global_006a9a74);
    arg0->word_10 = u32(std::bit_cast<u32>(S1_1));
    arg0->byte_0 = u8(0u);
    zf_1 = r1 == 0;
    arg0->word_4 = u32(std::bit_cast<u32>(S0_1));
    if (!zf_1) {
        S0_1 = std::bit_cast<float>(*global_006a9a7c);
    }
    arg0->byte_18 = u8(0u);
    arg0->word_8 = u32(std::bit_cast<u32>(S0_1));
    if (zf_1) {
        r0_1 = 0u;
    } else {
        r0_1 = 1u;
    }
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return r0_1;
}

}  // namespace d_006a9a40
GUEST_EXPORT(0x006a9a40, d_006a9a40::f_006a9a40);

// f_006aa3e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006aa3e0 {

inline guest::global<u32, 0x006aa434> global_006aa434;  // (from the original)
inline guest::global<u32, 0x006aa438> global_006aa438;  // (from the original)
inline constexpr guest::Function<0x005e9e58, u32(u32, u32, u32, u32)> call_005e9e58;  // (from the original)
inline constexpr guest::Function<0x00601a20, u32(u32, u32, u32, u32)> call_00601a20;  // (from the original)

u32 f_006aa3e0(u32 r0, u32 r1, float S0, float S1) {
    u32 r0_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    u32 r0_5 = 0;
    guest::cpu()->r[13] -= 8u;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0_1 = call_00601a20(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    S0_1 = std::bit_cast<float>(*global_006aa434);
    *gptr<u32>(r0_1) = u32(0x90af70u);  // (from the original)
    *gptr<u32>(r0_1 + 0x60u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_1 + 0x64u) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    S1_1 = std::bit_cast<float>(*global_006aa438);
    *gptr<u32>(r0_1 + 0x68u) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    r1_1 = r0_1 + 0x6cu;  // (from the original)
    *gptr<u32>(r1_1) = u32(std::bit_cast<u32>(S0_1));
    *gptr<u32>(r1_1 + 4) = u32(std::bit_cast<u32>(S1_1));
    *gptr<u32>(r0_1 + 0x74u) = u32(0u);  // (from the original)
    r0_2 = r0_1 + 0x78u;  // (from the original)
    *gptr<u32>(r0_2) = u32(0u);
    r0_3 = r0_2 + 4u;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    r0_4 = call_005e9e58(r0_3, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    r0_5 = r0_4 - 0x7cu;  // (from the original)
    *gptr<u8>(r0_5 + 0x80u) = u8(0u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    return r0_5;
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
    arg0->word_0 = u32(0x90af70u);  // (from the original)
    return call_00601a88(r0, 0x90af70u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
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
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r1_4 = 0;
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fb94c(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        r13 = r13 + 0x18;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    r5 = r0_1 + 0x2cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_0071287c(r5, r1_1, r2_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        r13 = r13 + 0x18;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    r4 = 0u;
    r6 = 1u;
    *gptr<u16>(r13) = u16(0u);
L_6ab040:;
    guest::cpu()->r[13] = r13;
    r0_2 = call_0020bf0c(r5, r4, r2, r3);
    r1_2 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (u32(*gptr<u8>(r0_2 + 0x86cu)) == 0) {  // (from the original)
        goto L_6ab078;
    }
    r1_2 = r13;
    if (r4 >= 0xau) {  // (from the original)
        goto L_6ab078;
    }
    r0_3 = r1_2 + (r4 >> 3);
    r2 = r4 & 7u;
    r1_2 = u32(*gptr<u8>(r0_3)) | lsl_r(r6, r2 & 0xff);  // (from the original)
    *gptr<u8>(r0_3) = u8(r1_2);
L_6ab078:;
    r4 = r4 + 1u;
    if (r4 < 0xau) {  // (from the original)
        guest::preempt();
        goto L_6ab040;
    }
    guest::cpu()->r[13] = r13;
    call_0020bf68(r5, r1_2, r2, r3);
    r1_3 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_4 = call_002ff8b0(4u, r1_3, r2_2, r3_2);
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r1_4 = r13;
    guest::cpu()->r[13] = r13;
    call_004e4ac4(r0_4, r1_4, r2_3, r3_3);
    r1_1 = guest::cpu()->r[1];
    r0_1 = 1u;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
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
    guest::cpu()->r[13] -= 8u;
    if (u32(arg0->byte_4c8) != 0) {
        call_001aae00(r0, 2u, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    *gptr<u8>(r0 + 0x4c8u) = u8(0u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return 0u;
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
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r3_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 res_1 = 0;
    u32 r1_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 res_2 = 0;
    u32 r1_4 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    arg0->word_360 = u32(r1);
    r0_1 = call_002052f8(r0, r1, guest::cpu()->r[2], 0u);
    r1_1 = guest::cpu()->r[1];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        goto L_6ac414;
    }
    r5_1 = *gptr<u32>(r0 + 0x4ccu);  // (from the original)
    r6_1 = r0 + 0x281u;  // (from the original)
    if ((u32(*gptr<u8>(r0 + 0x281u)) & 1u) != 0) {  // (from the original)
        r1_2 = r0 + 0x264u;  // (from the original)
        r0_2 = r5_1 + 0x1b0u;  // (from the original)
        r0_3 = call_002132d0(r0_2, r1_2, guest::cpu()->r[2], r3_1);
        r1_1 = guest::cpu()->r[1];
        r3_1 = guest::cpu()->r[3];
        if (r0_3 == 0) {
            goto L_6ac418;
        }
    }
    if (*gptr<u32>(0x1984u + r5_1) == 0) {  // (from the original)
        goto L_6ac3e0;
    }
    res_1 = u32(*gptr<u8>(r6_1)) << 0x1d >> 0x1f;  // (from the original)
    if (res_1 == 0) {
        goto L_6ac3e0;
    }
    r1_3 = r0 + 0x26cu;  // (from the original)
    r0_4 = r5_1 + 0x1980u;  // (from the original)
    r0_5 = call_002132d0(r0_4, r1_3, guest::cpu()->r[2], r3_1);
    r1_1 = guest::cpu()->r[1];
    r3_1 = guest::cpu()->r[3];
    if (r0_5 == 0) {
        goto L_6ac418;
    }
L_6ac3e0:;
    r0_6 = u32(*gptr<u8>(r6_1));
    res_2 = r0_6 << 0x1e >> 0x1f;  // (from the original)
    if (res_2 != 0) {
        r1_4 = r0 + 0x274u;  // (from the original)
        r0_7 = r5_1 + 0x7020u;  // (from the original)
        r0_8 = call_002132d0(r0_7, r1_4, guest::cpu()->r[2], r3_1);
        r1_1 = guest::cpu()->r[1];
        if (r0_8 == 0) {
            goto L_6ac418;
        }
    }
    r0_1 = 1u;
L_6ac414:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
L_6ac418:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_006ac35c
GUEST_EXPORT(0x006ac35c, d_006ac35c::f_006ac35c);

// f_006ac760: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ac760 {

inline constexpr guest::Function<0x00138744, u32(u32, u32, u32, u32)> call_00138744;  // (from the original)
inline constexpr guest::Function<0x004f1270, u32(u32, u32, u32, u32)> call_004f1270;  // (from the original)

u32 f_006ac760(u32 r0) {
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r4_1 = r0 + 0x384u;  // (from the original)
    r0_1 = r0 + 0x3d4u;  // (from the original)
    call_00138744(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_004f1270(r4_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r4_1 + 0xcu) = u32(3u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return 3u;
}

}  // namespace d_006ac760
GUEST_EXPORT(0x006ac760, d_006ac760::f_006ac760);

// f_006ac784: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ac784 {

inline constexpr guest::Function<0x0012ca7c, u32(u32, u32, u32, u32)> call_0012ca7c;  // (from the original)
inline constexpr guest::Function<0x00206190, u32(u32, u32, u32, u32)> call_00206190;  // (from the original)
inline constexpr guest::Function<0x004edd3c, u32(u32, u32, u32, u32)> call_004edd3c;  // (from the original)

u32 f_006ac784(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 ea_1 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r3_3 = 0;
    u32 r1_1 = 0;
    u32 r3_4 = 0;
    u32 r3_5 = 0;
    u32 r3_6 = 0;
    u32 r2_3 = 0;
    u32 r2_4 = 0;
    r13 = r13 - 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_00206190(r0, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    *gptr<u32>(r0_1) = u32(0x8f8c1cu);  // (from the original)
    r0_2 = r0_1 + 0x384u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_004edd3c(r0_2, 0x8f8c1cu, r2_1, r3_1);  // (from the original)
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    ea_1 = r0_3 + 0xcu;  // (from the original)
    *gptr<u32>(ea_1) = u32(3u);
    r0_4 = ea_1 + 0x44u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_5 = call_0012ca7c(r0_4, 3u, r2_2, r3_2);
    *gptr<u32>(r0_5) = u32(0x8f9600u);  // (from the original)
    r0_6 = r0_5 - 0x3d4u;  // (from the original)
    *gptr<u8>(r0_6 + 0x4c8u) = u8(0u);  // (from the original)
    *gptr<u32>(r0_6 + 0x4ccu) = u32(0u);  // (from the original)
    *gptr<u8>(r0_6 + 0x4d0u) = u8(0u);  // (from the original)
    *gptr<u8>(r0_6 + 0x4d1u) = u8(1u);  // (from the original)
    r3_3 = u32(*gptr<u8>(r0_6 + 0x281u));  // (from the original)
    r1_1 = r0_6 + 0x281u;  // (from the original)
    if (r1 == 0) {
        r3_4 = r3_3 & ~1u;
    } else {
        r3_4 = r3_3 | 1u;
    }
    *gptr<u8>(r1_1) = u8(r3_4);
    r3_5 = r3_4 & 0xffu;  // (from the original)
    if (r2 == 0) {
        r3_6 = r3_5 & ~4u;
    } else {
        r3_6 = r3_5 | 4u;
    }
    r2_3 = r3_6 & 0xffu;  // (from the original)
    if (r3 == 0) {
        r2_4 = r2_3 & ~2u;
    } else {
        r2_4 = r2_3 | 2u;
    }
    *gptr<u8>(r1_1) = u8(r3_6);
    *gptr<u8>(r1_1) = u8(r2_4);
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_6;
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
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r5_1 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r1_1 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    u32 r0_9 = 0;
    u32 r1_2 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r1_3 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r1_4 = 0;
    u32 r0_14 = 0;
    r13 = r13 - 0x10;  // (from the original)
    arg0->word_0 = u32(0x8f8c1cu);  // (from the original)
    r0_1 = r0 + 0x384u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_004edd6c(r0_1, 0x8f8c1cu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *gptr<u32>(r0_2 - 0x384u) = u32(0x8ed6acu);  // (from the original)
    r0_3 = r0_2 - 0xd4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_0031e204(r0_3, 0x8ed6acu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r0_5 = r0_4 - 0x2b0u;  // (from the original)
    r5_1 = ~0u;
    ea_1 = r0_5 + 0x274u;  // (from the original)
    *gptr<u32>(ea_1) = u32(0u);
    *gptr<u32>(ea_1 + 4) = u32(r5_1);
    ea_2 = r0_5 + 0x26cu;  // (from the original)
    *gptr<u32>(ea_2) = u32(0u);
    *gptr<u32>(ea_2 + 4) = u32(r5_1);
    r1_1 = r0_5 + 0x264u;  // (from the original)
    r0_6 = r0_5 + 0x15cu;  // (from the original)
    *gptr<u32>(r1_1) = u32(0u);
    *gptr<u32>(r1_1 + 4) = u32(r5_1);
    guest::cpu()->r[13] = r13;
    r0_7 = call_00317e2c(r0_6, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_8 = r0_7 - 0x18u;  // (from the original)
    ea_3 = r0_8 + 0x10u;  // (from the original)
    *gptr<u32>(ea_3) = u32(0u);
    *gptr<u32>(ea_3 + 4) = u32(r5_1);
    ea_4 = r0_8 + 8u;
    *gptr<u32>(ea_4) = u32(0u);
    *gptr<u32>(ea_4 + 4) = u32(r5_1);
    *gptr<u32>(r0_8) = u32(0u);
    *gptr<u32>(r0_8 + 4) = u32(r5_1);
    r0_9 = r0_8 - 0x144u;  // (from the original)
    *gptr<u32>(r0_9) = u32(0x8eb174u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_001abcd4(r0_9, 0x8eb174u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r0_10 = r0_9 + 0xccu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_11 = call_004ef50c(r0_10, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r0_12 = r0_11 - 0x54u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_13 = call_004edd84(r0_12, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    r0_14 = r0_13 - 0x78u;  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[13] = r13;
    return r0_14;
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

inline guest::global<u32, 0x006ac918> global_006ac918;  // (from the original)
inline guest::global<u32, 0x006ac91c> global_006ac91c;  // (from the original)
inline guest::global<u32, 0x006ac920> global_006ac920;  // (from the original)

void f_006ac8e8(gptr<Object_006ac8e8_0> arg0) {
    float S1_1 = 0;
    float S2_1 = 0;
    float S0_1 = 0;
    S1_1 = std::bit_cast<float>(*global_006ac91c);
    arg0->word_2c = u32(0u);
    S2_1 = std::bit_cast<float>(*global_006ac920);
    arg0->word_14 = u32(std::bit_cast<u32>(S1_1));
    S0_1 = std::bit_cast<float>(*global_006ac918);
    arg0->word_1c = u32(std::bit_cast<u32>(S1_1));
    arg0->word_18 = u32(std::bit_cast<u32>(S2_1));
    arg0->word_20 = u32(std::bit_cast<u32>(S0_1));
    arg0->word_28 = u32(std::bit_cast<u32>(S0_1));
    arg0->word_24 = u32(std::bit_cast<u32>(S2_1));
    guest::cpu()->r[1] = 0u;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
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

inline guest::global<u32, 0x006aca00> global_006aca00;  // (from the original)
inline guest::global<u32, 0x006aca04> global_006aca04;  // (from the original)
inline guest::global<u32, 0x006aca08> global_006aca08;  // (from the original)
inline constexpr guest::Function<0x006f7e90, u32(u32, u32, u32, u32)> call_006f7e90;  // (from the original)
inline constexpr guest::Function<0x00770c10, u32(u32, u32, u32, u32)> call_00770c10;  // (from the original)

u32 f_006ac950(gptr<Object_006ac950_0> arg0, u32 r1, u32 r2, float S0, float S1) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    float S2_1 = 0;
    u32 r0_2 = 0;
    u32 r5_1 = 0;
    u32 r0_3 = 0;
    u32 r2_1 = 0;
    float S2_2 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = arg0->word_4;
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0_1;
    }
    r1 = 0u;
    S1 = std::bit_cast<float>(*global_006aca04);
    arg0->word_2c = u32(r1);
    arg0->word_30 = u32(r1);
    S2_1 = std::bit_cast<float>(*global_006aca08);
    arg0->word_14 = u32(std::bit_cast<u32>(S1));
    S0 = std::bit_cast<float>(*global_006aca00);
    arg0->word_1c = u32(std::bit_cast<u32>(S1));
    arg0->word_18 = u32(std::bit_cast<u32>(S2_1));
    arg0->word_20 = u32(std::bit_cast<u32>(S0));
    arg0->word_28 = u32(std::bit_cast<u32>(S0));
    arg0->word_24 = u32(std::bit_cast<u32>(S2_1));
    if (u32(*gptr<u8>(r0_1 + 4u)) != 2u) {
        goto L_6ac9c8;
    }
    r0_2 = arg0->word_10;
    r1 = arg0->word_4;
    if (r0_2 == 0) {
        goto L_6ac9c8;
    }
    *gptr<u32>(r1 + 8u) = u32(*gptr<u32>(r0_2 + 0x14u));  // (from the original)
    r2 = *gptr<u32>(r0_2 + 0x18u);  // (from the original)
    *gptr<u32>(r1 + 0xcu) = u32(r2);  // (from the original)
    *gptr<u32>(r1 + 0x10u) = u32(*gptr<u32>(r0_2 + 0x1cu));  // (from the original)
L_6ac9c8:;
    r0_1 = 0x9502f8u;  // (from the original)
    r5_1 = *gptr<u32>(r0_1);
    if (r5_1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0_1;
    }
    r0_3 = r5_1 + 0x14u;  // (from the original)
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2_1;
    r0_1 = call_00770c10(r0_3, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2_2 = guest::cpu()->s[2];
    if (r0_1 != 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0_1;
    }
    r0_4 = r5_1 + 0x14u;  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2_2;
    return call_006f7e90(r0_4, r0, r2_1, guest::cpu()->r[3]);
}

}  // namespace d_006ac950
GUEST_EXPORT(0x006ac950, d_006ac950::f_006ac950);

// f_006aca78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006aca78 {

inline constexpr guest::Function<0x006f7e64, u32(u32, u32, u32, u32)> call_006f7e64;  // (from the original)

u32 f_006aca78(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_006f7e64(r0, r1, r2, guest::cpu()->r[3]);
    *gptr<u32>(r0_1 + 0x10u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_1) = u32(0x8f8c74u);  // (from the original)
    *gptr<u32>(r0_1 + 0x2cu) = u32(0u);  // (from the original)
    *gptr<u32>(r0_1 + 0x30u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_1 + 0x34u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_1 + 0x38u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_1 + 0x3cu) = u32(0u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0u;
    return r0_1;
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
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = r0 + 0xe30u;  // (from the original)
    r0_2 = call_002fd6bc(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_3 = r0 + 0x6000u;  // (from the original)
    *gptr<u8>(r0_3 + 0x359u) = u8(r0_2);  // (from the original)
    r0_4 = *gptr<u32>(r0_3 + 0x340u);  // (from the original)
    r1_1 = u32(*gptr<u8>(r0_4 + 0xb7u)) & 0xfeu;  // (from the original)
    *gptr<u8>(r0_4 + 0xb7u) = u8(r1_1);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return r0_4;
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
    u32 r0 = arg0.addr();
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r0_4 = 0;
    u32 r2_1 = 0;
    u32 r0_5 = 0;
    u32 ea_2 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    ea_1 = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r5);
    *gptr<u32>(ea_1 + 8) = u32(r6);
    *gptr<u32>(ea_1 + 0xc) = u32(r14);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r5 = r0;
    r0_1 = arg0->word_6340;
    if (u32(arg0->byte_6358) == 0) {
        r1_1 = 1u;
    } else {
        r1_1 = 0u;
    }
    *gptr<u8>(r0_1 + 0xb7u) = u8(r1_1 | u32(*gptr<u8>(r0_1 + 0xb7u)) & 0xfeu);  // (from the original)
    r1_2 = arg0->word_6348;
    r3 = u32(*gptr<u8>(r1_2 + 0xb7u)) & 0xfeu;  // (from the original)
    *gptr<u8>(r1_2 + 0xb7u) = u8(u32(arg0->byte_6358) | r3);  // (from the original)
    r0_2 = u32(arg0->byte_6358);
    if (r0_2 == 0) {
        r4 = 0u;
    } else {
        ea_2 = r13;
        r13 = r13 + 0x10;  // (from the original)
        r4_1 = *gptr<u32>(ea_2);
        r5_1 = *gptr<u32>(ea_2 + 4);
        r6_1 = *gptr<u32>(ea_2 + 8);
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[4] = r4_1;
        guest::cpu()->r[5] = r5_1;
        guest::cpu()->r[6] = r6_1;
        guest::cpu()->r[13] = r13;
        return r0_2;
    }
    do {
L_6acf84:;
        r0_3 = r4 + (r4 << 4);
        r1_3 = r5 + (r0_3 + (r0_3 << 1) << 4);
        r0_4 = *gptr<u32>(0x1808u + r1_3);  // (from the original)
        r2_1 = u32(*gptr<u8>(r0_4 + 0xb7u)) & 0xfeu;  // (from the original)
        *gptr<u8>(r0_4 + 0xb7u) = u8(r2_1);  // (from the original)
        r0_5 = r1_3 + 0x16bcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_2 = call_00568c10(r0_5, r1_3, r2_1, r3);
        r1_2 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 0x18u);  // (from the original)
    ea_2 = r13;
    r13 = r13 + 0x10;  // (from the original)
    r4_1 = *gptr<u32>(ea_2);
    r5_1 = *gptr<u32>(ea_2 + 4);
    r6_1 = *gptr<u32>(ea_2 + 8);
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_006acf28
GUEST_EXPORT(0x006acf28, d_006acf28::f_006acf28);

// f_006acfc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006acfc4 {

inline guest::global<u32, 0x0095decc> global_0095decc;  // (from the original)
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
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    u32 r4_1 = 0;
    u32 r0_6 = 0;
    u32 res_1 = 0;
    u32 r3_4 = 0;
    u32 ea_1 = 0;
    u32 r3_5 = 0;
    u32 ea_2 = 0;
    u32 r0_7 = 0;
    u32 r2_3 = 0;
    u32 r3_6 = 0;
    u32 r0_8 = 0;
    u32 r2_4 = 0;
    u32 r3_7 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r2_5 = 0;
    u32 r3_8 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r3_9 = 0;
    u32 r2_6 = 0;
    u32 r2_7 = 0;
    u32 r3_10 = 0;
    u32 r0_13 = 0;
    u32 r1_3 = 0;
    u32 r1_4 = 0;
    u32 r2_8 = 0;
    u32 r3_11 = 0;
    u32 r1_5 = 0;
    u32 r0_14 = 0;
    r13 = r13 - 0xb8u;  // (from the original)
    r5 = r0;
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fb94c(r0, r1, r2, r3);
    r3_1 = guest::cpu()->r[3];
    r6 = u32(*gptr<u8>(r1));
    r7 = u32(*gptr<u8>(r0_1 + 0x55d2u));  // (from the original)
    r9 = u32(*gptr<u8>(r1 + 1u));
    r0_2 = r13;
    r1_1 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_003083bc(r0_2, r1_1, 0x40u, r3_1);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r8 = 0x90a228u;  // (from the original)
    *gptr<u32>(r0_3) = u32(r8);
    r0_4 = r0_3 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_5 = call_005f4bfc(r0_4, r1_2, r2_1, r3_2);
    r2_2 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r4_1 = r0_5 - 0xcu;  // (from the original)
    r0_6 = r0_5 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r0_6, 0x80u, r2_2, r3_3);  // (from the original)
    r2 = 0x8906ecu;  // (from the original)
    r0 = r4_1 + 0x16u;  // (from the original)
    r1 = 0x20u;  // (from the original)
    do {
L_6ad024:;
        res_1 = r1 - 1u;
        r1 = res_1;
        r3_4 = u32(*gptr<u16>(r2));
        ea_1 = r0 + 2u;
        *gptr<u16>(ea_1) = u16(r3_4);
        r3_5 = u32(*gptr<u16>(r2));
        ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r3_5);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    r0_7 = *global_0095decc;
    guest::cpu()->r[13] = r13;
    call_005ea8f8(r0_7, 0u, r2, r3_5);
    r2_3 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    if (r6 == r7) {
        r0_8 = r13;
        guest::cpu()->r[13] = r13;
        call_001b9964(r0_8, r6, r9, r3_6);
        r2_4 = guest::cpu()->r[2];
        r3_7 = guest::cpu()->r[3];
    } else {
        r0_9 = r13;
        guest::cpu()->r[13] = r13;
        call_001b98e0(r0_9, r6, r2_3, r3_6);
        r2_4 = guest::cpu()->r[2];
        r3_7 = guest::cpu()->r[3];
    }
    r0_10 = *global_0095decc;
    guest::cpu()->r[13] = r13;
    call_005ea8dc(r0_10, 0u, r2_4, r3_7);
    r2_5 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r0_11 = r5 + 0x4bcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_12 = call_00568a80(r0_11, 0x6ad0f8u, r2_5, r3_8);  // (from the original)
    r3_9 = guest::cpu()->r[3];
    r2_6 = r13;
    guest::cpu()->r[13] = r13;
    call_006ad3a0(r5, r0_12, r2_6, r3_9);
    r2_7 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r0_13 = r5 + 0x6418u;  // (from the original)
    r1_3 = r13;
    guest::cpu()->r[13] = r13;
    call_005e2e50(r0_13, r1_3, r2_7, r3_10);
    r1_4 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_005e2f94(r0_13, r1_4, r2_8, r3_11);
    r1_5 = guest::cpu()->r[1];
    *gptr<u32>(r13) = u32(r8);
    r0_14 = r13;
    r13 = r13 + 0xb8u;  // (from the original)
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->r[13] = r13;
    return r0_14;
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

inline guest::global<u32, 0x006add18> global_006add18;  // (from the original)
inline constexpr guest::Function<0x002f6b14, u32(u32, u32, u32, u32)> call_002f6b14;  // (from the original)
inline constexpr guest::Function<0x002f6e14, u32(u32, u32, u32, u32)> call_002f6e14;  // (from the original)
inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> call_004b4fc0;  // (from the original)
inline constexpr guest::Function<0x004b6dc8, u32(u32, u32, u32, u32)> call_004b6dc8;  // (from the original)
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> call_00568984;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)
inline constexpr guest::Function<0x005697e0, u32(u32, u32, u32, u32)> call_005697e0;  // (from the original)

u32 f_006adc30(gptr<Object_006adc30_0> arg0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 r0 = arg0.addr();
    u32 r5_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r6_1 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    float S0_1 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    float S0_2 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    float S0_3 = 0;
    u32 r0_12 = 0;
    u32 r3_3 = 0;
    float S0_4 = 0;
    u32 r0_13 = 0;
    float S0_5 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5_1 = r0 + 0x16b8u;  // (from the original)
    if (arg0->word_16b8 != 0x19u) {  // (from the original)
        r1_1 = arg0->word_633c;
        r0_1 = *gptr<u32>(r1_1 + 0xcu);  // (from the original)
        if (r0_1 != 0) {
            guest::cpu()->s[0] = S0;
            call_004b6dc8(r0_1, r1_1, r2, r3);
            r1_1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            S0 = guest::cpu()->s[0];
        }
        r0_2 = *gptr<u32>(r5_1);
        r0_3 = r0_2 + (r0_2 << 4);
        r0_4 = r0 + (r0_3 + (r0_3 << 1) << 4);
        r6_1 = r0_4 + 0x16bcu;  // (from the original)
        r0_5 = r0_4 + 0x1908u;  // (from the original)
        guest::cpu()->s[0] = S0;
        call_002f6e14(r0_5, r1_1, r2, r3);
        r1_2 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
        S0_1 = guest::cpu()->s[0];
        r0_6 = r6_1 + 0x24cu;  // (from the original)
        guest::cpu()->s[0] = S0_1;
        call_002f6b14(r0_6, r1_2, r2_1, r3_1);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        r0_7 = *gptr<u32>(r5_1);
        r0_8 = r0_7 + (r0_7 << 4);
        r0_9 = r0 + (r0_8 + (r0_8 << 1) << 4) + 0x16bcu;  // (from the original)
        r1 = *gptr<u32>(r0_9 + 0x320u) & ~8u;  // (from the original)
        *gptr<u32>(r0_9 + 0x320u) = u32(r1);  // (from the original)
        *gptr<u32>(r5_1) = u32(0x19u);  // (from the original)
    }
    r0_10 = u32(*gptr<u8>(r0 + 0x9c8u));  // (from the original)
    if (r0_10 == 1u) {
        r0_11 = r0 + 0x9acu;  // (from the original)
        S0_2 = std::bit_cast<float>(*global_006add18);
        guest::cpu()->s[0] = S0_2;
        call_005697e0(r0_11, r1, r2, r3);
        r1_3 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        S0_3 = guest::cpu()->s[0];
        r0_12 = r0 + 0x798u;  // (from the original)
        guest::cpu()->s[0] = S0_3;
        call_00568c10(r0_12, r1_3, r2_2, r3_2);
        r3_3 = guest::cpu()->r[3];
        S0_4 = guest::cpu()->s[0];
        guest::cpu()->s[0] = S0_4;
        r0_13 = call_004b4fc0(r0_12, 0x881ae4u, 1u, r3_3);  // (from the original)
        S0_5 = guest::cpu()->s[0];
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->s[0] = S0_5;
        return call_00568984(r0_12, r0_11, r0_13, 0u);
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r0_10;
}

}  // namespace d_006adc30
GUEST_EXPORT(0x006adc30, d_006adc30::f_006adc30);

// f_006add20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006add20 {

inline guest::global<u32, 0x0095decc> global_0095decc;  // (from the original)
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
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_5 = 0;
    u32 r2_3 = 0;
    u32 res_1 = 0;
    u32 ea_1 = 0;
    u32 r2_4 = 0;
    u32 ea_2 = 0;
    u32 r3_3 = 0;
    u32 r0_6 = 0;
    u32 r2_5 = 0;
    u32 r1_3 = 0;
    u32 r3_4 = 0;
    u32 r0_7 = 0;
    u32 r1_4 = 0;
    u32 r0_8 = 0;
    u32 r1_5 = 0;
    u32 r2_6 = 0;
    u32 r3_5 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r2_7 = 0;
    u32 r3_6 = 0;
    u32 r4_1 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r2_8 = 0;
    u32 res_2 = 0;
    u32 ea_3 = 0;
    u32 r2_9 = 0;
    u32 ea_4 = 0;
    u32 r0_13 = 0;
    u32 r3_7 = 0;
    u32 r0_14 = 0;
    u32 r1_6 = 0;
    u32 r0_15 = 0;
    u32 r1_7 = 0;
    u32 r2_10 = 0;
    u32 r3_8 = 0;
    u32 r0_16 = 0;
    u32 r2_11 = 0;
    u32 r3_9 = 0;
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    u32 r3_10 = 0;
    u32 r2_12 = 0;
    u32 r2_13 = 0;
    u32 r3_11 = 0;
    u32 r0_19 = 0;
    u32 r1_8 = 0;
    u32 r1_9 = 0;
    u32 r2_14 = 0;
    u32 r3_12 = 0;
    u32 r1_10 = 0;
    u32 r0_20 = 0;
    r13 = r13 - 0xc0u;  // (from the original)
    r5 = r0;
    r6 = r1;
    r7 = r2;
    r0_1 = r13 + 0x70u;  // (from the original)
    r10 = 4u;
    r1_1 = r13 + 0x88u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_003083bc(r0_1, r1_1, 9u, r3);
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r8 = 0x90a3e8u;  // (from the original)
    *gptr<u32>(r0_2) = u32(r8);
    r0_3 = r0_2 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_005f4bfc(r0_3, r1_2, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r4 = r0_4 - 0xcu;  // (from the original)
    r0_5 = r0_4 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r0_5, 0x12u, r2_2, r3_2);  // (from the original)
    r3 = guest::cpu()->r[3];
    r9 = 0x8906ecu;  // (from the original)
    r0 = r4 + 0x18u;  // (from the original)
    *gptr<u16>(r4 + 0x18u) = u16(u32(*gptr<u16>(r9)));  // (from the original)
    r1 = 4u;
    do {
L_6add78:;
        r2_3 = u32(*gptr<u16>(r9));
        res_1 = r1 - 1u;
        r1 = res_1;
        ea_1 = r0 + 2u;
        *gptr<u16>(ea_1) = u16(r2_3);
        r2_4 = u32(*gptr<u16>(r9));
        ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r2_4);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    guest::cpu()->r[13] = r13;
    call_0056d374(r4, r10, r2_4, r3);
    r3_3 = guest::cpu()->r[3];
    r0_6 = r13 + 0x70u;  // (from the original)
    r2_5 = u32(*gptr<u8>(r6 + 0x14u)) & 1u;  // (from the original)
    r1_3 = r6 + 2u;
    guest::cpu()->r[13] = r13;
    call_0056d488(r0_6, r1_3, r2_5, r3_3);
    r3_4 = guest::cpu()->r[3];
    if (r7 == 0) {
        r6 = 0x162u;  // (from the original)
    } else {
        r6 = 0x161u;  // (from the original)
    }
    r0_7 = r13 + 8u;
    r1_4 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_8 = call_003083bc(r0_7, r1_4, 0x28u, r3_4);  // (from the original)
    r1_5 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r7 = 0x90a030u;  // (from the original)
    *gptr<u32>(r0_8) = u32(r7);
    r0_9 = r0_8 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_10 = call_005f4bfc(r0_9, r1_5, r2_6, r3_5);
    r2_7 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r4_1 = r0_10 - 0xcu;  // (from the original)
    r0_11 = r0_10 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r0_11, 0x50u, r2_7, r3_6);  // (from the original)
    r3 = guest::cpu()->r[3];
    r0_12 = r4_1 + 0x18u;  // (from the original)
    r4 = 0u;
    r0 = r0_12 - 2u;
    r1 = 0x14u;  // (from the original)
    do {
L_6addf8:;
        r2_8 = u32(*gptr<u16>(r9));
        res_2 = r1 - 1u;
        r1 = res_2;
        ea_3 = r0 + 2u;
        *gptr<u16>(ea_3) = u16(r2_8);
        r2_9 = u32(*gptr<u16>(r9));
        ea_4 = r0 + 4u;
        *gptr<u16>(ea_4) = u16(r2_9);
        r0 = ea_4;
        guest::preempt();
    } while (res_2 != 0);
    r0_13 = *global_0095decc;
    guest::cpu()->r[13] = r13;
    call_005ea8f8(r0_13, 0u, r2_9, r3);
    r3_7 = guest::cpu()->r[3];
    r0_14 = *gptr<u32>(*global_0095decc + 0x14u);  // (from the original)
    r1_6 = r13 + 0x70u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00300a64(r0_14, r1_6, 0u, r3_7);
    *gptr<u32>(r13) = u32(r4);
    r0_15 = *global_0095decc;
    r1_7 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_005ea964(r0_15, r1_7, 0x6adeecu, r6);  // (from the original)
    r2_10 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r0_16 = *global_0095decc;
    guest::cpu()->r[13] = r13;
    call_005ea8dc(r0_16, 0u, r2_10, r3_8);
    r2_11 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r0_17 = r5 + 0x4bcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_18 = call_00568a80(r0_17, 0x6adef8u, r2_11, r3_9);  // (from the original)
    r3_10 = guest::cpu()->r[3];
    r2_12 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_006ad3a0(r5, r0_18, r2_12, r3_10);
    r2_13 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    r0_19 = r5 + 0x64dcu;  // (from the original)
    r1_8 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_005e2e50(r0_19, r1_8, r2_13, r3_11);
    r1_9 = guest::cpu()->r[1];
    r2_14 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_005e2f94(r0_19, r1_9, r2_14, r3_12);
    r1_10 = guest::cpu()->r[1];
    *gptr<u32>(r13 + 8u) = u32(r7);
    *gptr<u32>(r13 + 0x70u) = u32(r8);  // (from the original)
    r0_20 = r13 + 0x70u;  // (from the original)
    r13 = r13 + 0xc0u;  // (from the original)
    guest::cpu()->r[1] = r1_10;
    guest::cpu()->r[13] = r13;
    return r0_20;
}

}  // namespace d_006add20
GUEST_EXPORT(0x006add20, d_006add20::f_006add20);

// f_006ae344: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ae344 {

inline guest::global<u32, 0x0095decc> global_0095decc;  // (from the original)
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
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r4_1 = 0;
    u32 r0_5 = 0;
    u32 r2_3 = 0;
    u32 res_1 = 0;
    u32 ea_1 = 0;
    u32 r2_4 = 0;
    u32 ea_2 = 0;
    u32 r1_3 = 0;
    u32 r0_6 = 0;
    u32 r3_3 = 0;
    u32 r0_7 = 0;
    u32 r1_4 = 0;
    u32 r0_8 = 0;
    u32 r1_5 = 0;
    u32 r2_5 = 0;
    u32 r3_4 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r2_6 = 0;
    u32 r3_5 = 0;
    u32 r4_2 = 0;
    u32 r0_11 = 0;
    u32 r2_7 = 0;
    u32 res_2 = 0;
    u32 ea_3 = 0;
    u32 r2_8 = 0;
    u32 ea_4 = 0;
    u32 r0_12 = 0;
    u32 r3_6 = 0;
    u32 r0_13 = 0;
    u32 r1_6 = 0;
    u32 r0_14 = 0;
    u32 r1_7 = 0;
    u32 r2_9 = 0;
    u32 r3_7 = 0;
    u32 r0_15 = 0;
    u32 r2_10 = 0;
    u32 r3_8 = 0;
    u32 r0_16 = 0;
    u32 r1_8 = 0;
    u32 r1_9 = 0;
    u32 r2_11 = 0;
    u32 r3_9 = 0;
    u32 r1_10 = 0;
    u32 r0_17 = 0;
    r13 = r13 - 0x98u;  // (from the original)
    r7 = r0;
    r5 = r1;
    r0_1 = r13 + 0x50u;  // (from the original)
    r1_1 = r13 + 0x68u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_003083bc(r0_1, r1_1, 9u, r3);
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r6 = 0x90a3e8u;  // (from the original)
    *gptr<u32>(r0_2) = u32(r6);
    r0_3 = r0_2 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_005f4bfc(r0_3, r1_2, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r4_1 = r0_4 - 0xcu;  // (from the original)
    r0_5 = r0_4 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r0_5, 0x12u, r2_2, r3_2);  // (from the original)
    r3 = guest::cpu()->r[3];
    r8 = 0x8906ecu;  // (from the original)
    r0 = r4_1 + 0x18u;  // (from the original)
    *gptr<u16>(r4_1 + 0x18u) = u16(u32(*gptr<u16>(r8)));  // (from the original)
    r1 = 4u;
    do {
L_6ae394:;
        r2_3 = u32(*gptr<u16>(r8));
        res_1 = r1 - 1u;
        r1 = res_1;
        ea_1 = r0 + 2u;
        *gptr<u16>(ea_1) = u16(r2_3);
        r2_4 = u32(*gptr<u16>(r8));
        ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r2_4);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    r1_3 = r5 + 0x16u;  // (from the original)
    r0_6 = r13 + 0x50u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0056e04c(r0_6, r1_3, r2_4, r3);
    r3_3 = guest::cpu()->r[3];
    r0_7 = r13 + 4u;
    r1_4 = r13 + 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_8 = call_003083bc(r0_7, r1_4, 0x19u, r3_3);  // (from the original)
    r1_5 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r5 = 0x909e00u;  // (from the original)
    *gptr<u32>(r0_8) = u32(r5);
    r0_9 = r0_8 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_10 = call_005f4bfc(r0_9, r1_5, r2_5, r3_4);
    r2_6 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r4_2 = r0_10 - 0xcu;  // (from the original)
    r0_11 = r0_10 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r0_11, 0x32u, r2_6, r3_5);  // (from the original)
    r3 = guest::cpu()->r[3];
    r0 = r4_2 + 0x18u;  // (from the original)
    *gptr<u16>(r4_2 + 0x18u) = u16(u32(*gptr<u16>(r8)));  // (from the original)
    r1 = 0xcu;  // (from the original)
    do {
L_6ae3f4:;
        r2_7 = u32(*gptr<u16>(r8));
        res_2 = r1 - 1u;
        r1 = res_2;
        ea_3 = r0 + 2u;
        *gptr<u16>(ea_3) = u16(r2_7);
        r2_8 = u32(*gptr<u16>(r8));
        ea_4 = r0 + 4u;
        *gptr<u16>(ea_4) = u16(r2_8);
        r0 = ea_4;
        guest::preempt();
    } while (res_2 != 0);
    r0_12 = *global_0095decc;
    guest::cpu()->r[13] = r13;
    call_005ea8f8(r0_12, 0u, r2_8, r3);
    r3_6 = guest::cpu()->r[3];
    r0_13 = *gptr<u32>(*global_0095decc + 0x14u);  // (from the original)
    r1_6 = r13 + 0x50u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005f12f4(r0_13, r1_6, 0u, r3_6);
    *gptr<u32>(r13) = u32(0u);
    r0_14 = *global_0095decc;
    r1_7 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_005ea964(r0_14, r1_7, 0x6ae4c8u, 0x15fu);  // (from the original)
    r2_9 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_15 = *global_0095decc;
    guest::cpu()->r[13] = r13;
    call_005ea8dc(r0_15, 0u, r2_9, r3_7);
    r2_10 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r0_16 = r7 + 0x65a0u;  // (from the original)
    r1_8 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_005e2e50(r0_16, r1_8, r2_10, r3_8);
    r1_9 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_005e2f94(r0_16, r1_9, r2_11, r3_9);
    r1_10 = guest::cpu()->r[1];
    *gptr<u32>(r13 + 4u) = u32(r5);
    *gptr<u32>(r13 + 0x50u) = u32(r6);  // (from the original)
    r0_17 = r13 + 0x50u;  // (from the original)
    r13 = r13 + 0x98u;  // (from the original)
    guest::cpu()->r[1] = r1_10;
    guest::cpu()->r[13] = r13;
    return r0_17;
}

}  // namespace d_006ae344
GUEST_EXPORT(0x006ae344, d_006ae344::f_006ae344);

// f_006ae6a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ae6a0 {

inline guest::global<u32, 0x0095decc> global_0095decc;  // (from the original)
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
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r5_1 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r3_3 = 0;
    u32 res_1 = 0;
    u32 ea_1 = 0;
    u32 r3_4 = 0;
    u32 ea_2 = 0;
    u32 r0_7 = 0;
    u32 r3_5 = 0;
    u32 r0_8 = 0;
    u32 r1_3 = 0;
    u32 r3_6 = 0;
    u32 r0_9 = 0;
    u32 r1_4 = 0;
    u32 r3_7 = 0;
    u32 r0_10 = 0;
    u32 r1_5 = 0;
    u32 r0_11 = 0;
    u32 r1_6 = 0;
    u32 r2_3 = 0;
    u32 r3_8 = 0;
    u32 r0_12 = 0;
    u32 r2_4 = 0;
    u32 r3_9 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r3_10 = 0;
    u32 r2_5 = 0;
    u32 r2_6 = 0;
    u32 r3_11 = 0;
    u32 r0_15 = 0;
    u32 r1_7 = 0;
    u32 r1_8 = 0;
    u32 r2_7 = 0;
    u32 r3_12 = 0;
    u32 r1_9 = 0;
    u32 r0_16 = 0;
    r13 = r13 - 0x88u;  // (from the original)
    r6 = r0;
    r4 = r1;
    r0_1 = r13 + 8u;
    r1_1 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_003083bc(r0_1, r1_1, 0x28u, r3);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r7 = 0x90a030u;  // (from the original)
    *gptr<u32>(r0_2) = u32(r7);
    r0_3 = r0_2 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_005f4bfc(r0_3, r1_2, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r5_1 = r0_4 - 0xcu;  // (from the original)
    r0_5 = r0_4 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r0_5, 0x50u, r2_2, r3_2);  // (from the original)
    r2 = 0x8906ecu;  // (from the original)
    r0_6 = r5_1 + 0x18u;  // (from the original)
    r5 = 0u;
    r0 = r0_6 - 2u;
    r1 = 0x14u;  // (from the original)
    do {
L_6ae6f0:;
        r3_3 = u32(*gptr<u16>(r2));
        res_1 = r1 - 1u;
        r1 = res_1;
        ea_1 = r0 + 2u;
        *gptr<u16>(ea_1) = u16(r3_3);
        r3_4 = u32(*gptr<u16>(r2));
        ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r3_4);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    r0_7 = *global_0095decc;
    guest::cpu()->r[13] = r13;
    call_005ea8f8(r0_7, 0u, r2, r3_4);
    r3_5 = guest::cpu()->r[3];
    r0_8 = *gptr<u32>(*global_0095decc + 0x14u);  // (from the original)
    r1_3 = uxth(r4);
    guest::cpu()->r[13] = r13;
    call_005f1224(r0_8, r1_3, 0u, r3_5);
    r3_6 = guest::cpu()->r[3];
    r0_9 = *gptr<u32>(*global_0095decc + 0x14u);  // (from the original)
    r1_4 = r4 << 8 >> 0x18;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00300914(r0_9, r1_4, 0u, r3_6);
    r3_7 = guest::cpu()->r[3];
    r0_10 = *gptr<u32>(*global_0095decc + 0x14u);  // (from the original)
    r1_5 = r4 >> 0x18;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00300924(r0_10, r1_5, 0u, r3_7);
    *gptr<u32>(r13) = u32(r5);
    r0_11 = *global_0095decc;
    r1_6 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_005ea964(r0_11, r1_6, 0x6ae7f8u, 0x165u);  // (from the original)
    r2_3 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r0_12 = *global_0095decc;
    guest::cpu()->r[13] = r13;
    call_005ea8dc(r0_12, 0u, r2_3, r3_8);
    r2_4 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r0_13 = r6 + 0x4bcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_14 = call_00568a80(r0_13, 0x6ae804u, r2_4, r3_9);  // (from the original)
    r3_10 = guest::cpu()->r[3];
    r2_5 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_006ad3a0(r6, r0_14, r2_5, r3_10);
    r2_6 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    r0_15 = r6 + 0x68b0u;  // (from the original)
    r1_7 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_005e2e50(r0_15, r1_7, r2_6, r3_11);
    r1_8 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_005e2f94(r0_15, r1_8, r2_7, r3_12);
    r1_9 = guest::cpu()->r[1];
    *gptr<u32>(r13 + 8u) = u32(r7);
    r0_16 = r13 + 8u;
    r13 = r13 + 0x88u;  // (from the original)
    guest::cpu()->r[1] = r1_9;
    guest::cpu()->r[13] = r13;
    return r0_16;
}

}  // namespace d_006ae6a0
GUEST_EXPORT(0x006ae6a0, d_006ae6a0::f_006ae6a0);

// f_006ae870: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ae870 {

inline guest::global<u32, 0x0095decc> global_0095decc;  // (from the original)
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
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r4_1 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r3_3 = 0;
    u32 res_1 = 0;
    u32 ea_1 = 0;
    u32 r3_4 = 0;
    u32 ea_2 = 0;
    u32 r0_7 = 0;
    u32 r3_5 = 0;
    u32 r0_8 = 0;
    u32 r1_3 = 0;
    u32 r3_6 = 0;
    u32 r0_9 = 0;
    u32 r1_4 = 0;
    u32 r0_10 = 0;
    u32 r1_5 = 0;
    u32 r2_3 = 0;
    u32 r3_7 = 0;
    u32 r0_11 = 0;
    u32 r2_4 = 0;
    u32 r3_8 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r3_9 = 0;
    u32 r2_5 = 0;
    u32 r2_6 = 0;
    u32 r3_10 = 0;
    u32 r0_14 = 0;
    u32 r1_6 = 0;
    u32 r1_7 = 0;
    u32 r2_7 = 0;
    u32 r3_11 = 0;
    u32 r1_8 = 0;
    u32 r0_15 = 0;
    r13 = r13 - 0x88u;  // (from the original)
    r5 = r0;
    r6 = r1;
    r0_1 = r13 + 8u;
    r1_1 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_003083bc(r0_1, r1_1, 0x28u, r3);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r7 = 0x90a030u;  // (from the original)
    *gptr<u32>(r0_2) = u32(r7);
    r0_3 = r0_2 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_005f4bfc(r0_3, r1_2, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r4_1 = r0_4 - 0xcu;  // (from the original)
    r0_5 = r0_4 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r0_5, 0x50u, r2_2, r3_2);  // (from the original)
    r2 = 0x8906ecu;  // (from the original)
    r0_6 = r4_1 + 0x18u;  // (from the original)
    r4 = 0u;
    r0 = r0_6 - 2u;
    r1 = 0x14u;  // (from the original)
    do {
L_6ae8c0:;
        r3_3 = u32(*gptr<u16>(r2));
        res_1 = r1 - 1u;
        r1 = res_1;
        ea_1 = r0 + 2u;
        *gptr<u16>(ea_1) = u16(r3_3);
        r3_4 = u32(*gptr<u16>(r2));
        ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r3_4);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    r0_7 = *global_0095decc;
    guest::cpu()->r[13] = r13;
    call_005ea8f8(r0_7, 0u, r2, r3_4);
    r3_5 = guest::cpu()->r[3];
    r0_8 = *gptr<u32>(*global_0095decc + 0x14u);  // (from the original)
    r1_3 = u32(*gptr<u8>(r6));
    guest::cpu()->r[13] = r13;
    call_00300914(r0_8, r1_3, 1u, r3_5);
    r3_6 = guest::cpu()->r[3];
    r0_9 = *gptr<u32>(*global_0095decc + 0x14u);  // (from the original)
    r1_4 = u32(*gptr<u8>(r6 + 1u));
    guest::cpu()->r[13] = r13;
    call_00300924(r0_9, r1_4, 1u, r3_6);
    *gptr<u32>(r13) = u32(r4);
    r0_10 = *global_0095decc;
    r1_5 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_005ea964(r0_10, r1_5, 0x6ae9acu, 0x163u);  // (from the original)
    r2_3 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_11 = *global_0095decc;
    guest::cpu()->r[13] = r13;
    call_005ea8dc(r0_11, 0u, r2_3, r3_7);
    r2_4 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r0_12 = r5 + 0x4bcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_13 = call_00568a80(r0_12, 0x6ae9b8u, r2_4, r3_8);  // (from the original)
    r3_9 = guest::cpu()->r[3];
    r2_5 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_006ad3a0(r5, r0_13, r2_5, r3_9);
    r2_6 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r0_14 = r5 + 0x6664u;  // (from the original)
    r1_6 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_005e2e50(r0_14, r1_6, r2_6, r3_10);
    r1_7 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_005e2f94(r0_14, r1_7, r2_7, r3_11);
    r1_8 = guest::cpu()->r[1];
    *gptr<u32>(r13 + 8u) = u32(r7);
    r0_15 = r13 + 8u;
    r13 = r13 + 0x88u;  // (from the original)
    guest::cpu()->r[1] = r1_8;
    guest::cpu()->r[13] = r13;
    return r0_15;
}

}  // namespace d_006ae870
GUEST_EXPORT(0x006ae870, d_006ae870::f_006ae870);

// f_006ae9c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ae9c4 {

inline guest::global<u32, 0x006aeb00> global_006aeb00;  // (from the original)
inline guest::global<u32, 0x006aeb04> global_006aeb04;  // (from the original)
inline constexpr guest::Function<0x002b6a00, u32(u32, u32, u32, u32)> call_002b6a00;  // (from the original)
inline constexpr guest::Function<0x002f6a30, u32(u32, u32, u32, u32)> call_002f6a30;  // (from the original)
inline constexpr guest::Function<0x002f6e98, u32(u32, u32, u32, u32)> call_002f6e98;  // (from the original)
inline constexpr guest::Function<0x002f7508, u32(u32, u32, u32, u32)> call_002f7508;  // (from the original)
inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> call_004b4fc0;  // (from the original)
inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> call_0056878c;  // (from the original)

u32 f_006ae9c4(u32 r0, float S0, float S1) {
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r9_1 = 0;
    u32 r7_1 = 0;
    u32 ea_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r5_1 = 0;
    u32 r8_1 = 0;
    u32 r12_1 = 0;
    u32 r3_2 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    u32 ea_2 = 0;
    float S0_1 = 0;
    u32 r1_3 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    u32 ea_5 = 0;
    float S1_1 = 0;
    u32 ea_6 = 0;
    u32 ea_7 = 0;
    u32 ea_8 = 0;
    u32 ea_9 = 0;
    u32 ea_10 = 0;
    u32 ea_11 = 0;
    u32 ea_12 = 0;
    u32 r1_4 = 0;
    u32 r6_1 = 0;
    u32 r0_2 = 0;
    u32 r3_4 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    u32 r0_3 = 0;
    u32 r2_3 = 0;
    u32 r3_5 = 0;
    float S0_3 = 0;
    float S1_3 = 0;
    u32 r6_2 = 0;
    u32 r1_5 = 0;
    u32 r3_6 = 0;
    float S0_4 = 0;
    float S1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_7 = 0;
    float S0_5 = 0;
    float S1_5 = 0;
    float S0_6 = 0;
    float S1_6 = 0;
    u32 r1_6 = 0;
    u32 r1_7 = 0;
    r1_1 = r0 + 0x2cu;  // (from the original)
    r13 = r13 - 0x60u;  // (from the original)
    r9_1 = r13 + 0x24u;  // (from the original)
    r7_1 = r0 + 0x798u;  // (from the original)
    ea_1 = 0x8817a8u + 0x224u;  // (from the original)
    r2_1 = *gptr<u32>(ea_1 + 4);
    r3_1 = *gptr<u32>(ea_1 + 8);
    r5_1 = *gptr<u32>(ea_1 + 0xc);  // (from the original)
    r8_1 = *gptr<u32>(ea_1 + 0x10);  // (from the original)
    r12_1 = *gptr<u32>(ea_1 + 0x14);  // (from the original)
    *gptr<u32>(r9_1) = u32(*gptr<u32>(ea_1));
    *gptr<u32>(r9_1 + 4) = u32(r2_1);
    *gptr<u32>(r9_1 + 8) = u32(r3_1);
    *gptr<u32>(r9_1 + 0xc) = u32(r5_1);  // (from the original)
    *gptr<u32>(r9_1 + 0x10) = u32(r8_1);  // (from the original)
    *gptr<u32>(r9_1 + 0x14) = u32(r12_1);  // (from the original)
    r3_2 = r13 + 0x1cu;  // (from the original)
    *gptr<u32>(r13 + 0x3cu) = u32(*gptr<u32>(0x8817a8u + 0x23cu));  // (from the original)
    r0_1 = r0 + 0x15d0u;  // (from the original)
    *gptr<u32>(r3_2) = u32(r1_1);
    *gptr<u32>(r3_2 + 4) = u32(r7_1);
    r1_2 = r13 + 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    call_002f6e98(r0_1, r1_2, 0u, r3_2);
    r2_2 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    ea_2 = r0_1 + 0xd4u;  // (from the original)
    S0_1 = std::bit_cast<float>(*global_006aeb00);
    r1_3 = *gptr<u32>(ea_2) | 0x40u;  // (from the original)
    ea_3 = r0_1 + 0xd4u;  // (from the original)
    *gptr<u32>(ea_3) = u32(r1_3);
    ea_4 = r13;
    *gptr<u32>(ea_4) = u32(0u);
    ea_5 = r13 + 4u;
    *gptr<u32>(ea_5) = u32(0u);
    S1_1 = std::bit_cast<float>(*global_006aeb04);
    ea_6 = r13 + 8u;
    *gptr<u32>(ea_6) = u32(0u);
    ea_7 = r13 + 0xcu;  // (from the original)
    *gptr<u32>(ea_7) = u32(0u);
    ea_8 = r13 + 0x10u;  // (from the original)
    *gptr<u32>(ea_8) = u32(0u);
    ea_9 = r13 + 0x14u;  // (from the original)
    *gptr<u32>(ea_9) = u32(0u);
    ea_10 = r13 + 0x18u;  // (from the original)
    *gptr<u32>(ea_10) = u32(0u);
    ea_11 = r13 + 8u;
    *gptr<u32>(ea_11) = u32(std::bit_cast<u32>(S0_1));
    *gptr<u32>(ea_11 + 4) = u32(std::bit_cast<u32>(S1_1));
    ea_12 = 0x8817a8u + 8u;  // (from the original)
    r1_4 = *gptr<u32>(ea_12);
    r6_1 = *gptr<u32>(ea_12 + 4);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    r0_2 = call_0056878c(r7_1, r1_4, r2_2, r3_3);
    r3_4 = guest::cpu()->r[3];
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    *gptr<u32>(r13) = u32(r0_2);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    r0_3 = call_004b4fc0(r7_1, r6_1, 1u, r3_4);
    r2_3 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    S0_3 = guest::cpu()->s[0];
    S1_3 = guest::cpu()->s[1];
    r6_2 = r0 + 0x14f0u;  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(r0_3);
    r1_5 = r13;
    *gptr<u32>(r13 + 0x10u) = u32(0u);  // (from the original)
    *gptr<u32>(r13 + 0x14u) = u32(0u);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_3;
    call_002b6a00(r6_2, r1_5, r2_3, r3_5);
    r3_6 = guest::cpu()->r[3];
    S0_4 = guest::cpu()->s[0];
    S1_4 = guest::cpu()->s[1];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_4;
    call_002f7508(r0_1, r6_2, 1u, r3_6);
    r2_4 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    S0_5 = guest::cpu()->s[0];
    S1_5 = guest::cpu()->s[1];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_5;
    guest::cpu()->s[1] = S1_5;
    call_002f6a30(r0_1, 0u, r2_4, r3_7);
    S0_6 = guest::cpu()->s[0];
    S1_6 = guest::cpu()->s[1];
    *gptr<u32>(r0_1 + 0xd4u) = u32(*gptr<u32>(r0_1 + 0xd4u) | 8u);  // (from the original)
    r1_6 = 0x15bcu + 0xeu;  // (from the original)
    *gptr<u32>(0x15bcu + r0) = u32(0x100041fu);  // (from the original)
    *gptr<u8>(r1_6 + r0) = u8(1u);
    *gptr<u32>(r6_2 + 0xd0u) = u32(0x100041fu - 0x87u);  // (from the original)
    r1_7 = r1_6 + 0xd6u;  // (from the original)
    *gptr<u8>(r6_2 + 0xdbu) = u8(1u);  // (from the original)
    *gptr<u8>(r6_2 + 0xdcu) = u8(1u);  // (from the original)
    *gptr<u16>(r1_7 + r0) = u16(3u);
    r13 = r13 + 0x60u;  // (from the original)
    guest::cpu()->r[1] = r1_7;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_6;
    guest::cpu()->s[1] = S1_6;
    return 3u;
}

}  // namespace d_006ae9c4
GUEST_EXPORT(0x006ae9c4, d_006ae9c4::f_006ae9c4);

// f_006aee8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006aee8c {

inline guest::global<u32, 0x0095decc> global_0095decc;  // (from the original)
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
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r3_2 = 0;
    u32 res_1 = 0;
    u32 ea_1 = 0;
    u32 r3_3 = 0;
    u32 ea_2 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    u32 r3_4 = 0;
    u32 r0_8 = 0;
    u32 r2_3 = 0;
    u32 r3_5 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r3_6 = 0;
    u32 r2_4 = 0;
    u32 r2_5 = 0;
    u32 r3_7 = 0;
    u32 r0_11 = 0;
    u32 r3_8 = 0;
    u32 r2_6 = 0;
    u32 r2_7 = 0;
    u32 r3_9 = 0;
    u32 r0_12 = 0;
    u32 r1_4 = 0;
    u32 r1_5 = 0;
    u32 r2_8 = 0;
    u32 r3_10 = 0;
    u32 r2_9 = 0;
    u32 r3_11 = 0;
    u32 r0_13 = 0;
    u32 r1_6 = 0;
    u32 r1_7 = 0;
    u32 r2_10 = 0;
    u32 r3_12 = 0;
    u32 r1_8 = 0;
    u32 r0_14 = 0;
    r13 = r13 - 0x70u;  // (from the original)
    r4 = r0;
    r0_1 = r13 + 4u;
    r1_1 = r13 + 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_003083bc(r0_1, r1_1, 0x1eu, r3);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r5 = 0x909ea8u;  // (from the original)
    *gptr<u32>(r0_2) = u32(r5);
    r0_3 = r0_2 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_005f4bfc(r0_3, r1_2, r2_1, r3_1);
    r0_5 = r0_4 - 0xcu;  // (from the original)
    r6 = 0u;
    *gptr<u32>(r0_5 + 0x18u) = u32(r6);  // (from the original)
    *gptr<u32>(r0_5 + 0x1cu) = u32(r6);  // (from the original)
    *gptr<u32>(r0_5 + 0x20u) = u32(r6);  // (from the original)
    *gptr<u32>(r0_5 + 0x24u) = u32(r6);  // (from the original)
    *gptr<u32>(r0_5 + 0x28u) = u32(r6);  // (from the original)
    *gptr<u32>(r0_5 + 0x2cu) = u32(r6);  // (from the original)
    *gptr<u32>(r0_5 + 0x30u) = u32(r6);  // (from the original)
    *gptr<u32>(r0_5 + 0x34u) = u32(r6);  // (from the original)
    *gptr<u32>(r0_5 + 0x38u) = u32(r6);  // (from the original)
    *gptr<u32>(r0_5 + 0x3cu) = u32(r6);  // (from the original)
    *gptr<u32>(r0_5 + 0x40u) = u32(r6);  // (from the original)
    *gptr<u32>(r0_5 + 0x44u) = u32(r6);  // (from the original)
    *gptr<u32>(r0_5 + 0x48u) = u32(r6);  // (from the original)
    r2 = 0x8906ecu;  // (from the original)
    *gptr<u32>(r0_5 + 0x4cu) = u32(r6);  // (from the original)
    *gptr<u32>(r0_5 + 0x50u) = u32(r6);  // (from the original)
    r1 = 0xfu;  // (from the original)
    r0 = r0_5 + 0x16u;  // (from the original)
    do {
L_6aef04:;
        r3_2 = u32(*gptr<u16>(r2));
        res_1 = r1 - 1u;
        r1 = res_1;
        ea_1 = r0 + 2u;
        *gptr<u16>(ea_1) = u16(r3_2);
        r3_3 = u32(*gptr<u16>(r2));
        ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r3_3);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    r0_6 = *global_0095decc;
    guest::cpu()->r[13] = r13;
    call_005ea8f8(r0_6, 0u, r2, r3_3);
    *gptr<u32>(r13) = u32(r6);
    r0_7 = *global_0095decc;
    r1_3 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_005ea964(r0_7, r1_3, 0x881a44u, 0x167u);  // (from the original)
    r2_2 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_8 = *global_0095decc;
    guest::cpu()->r[13] = r13;
    call_005ea8dc(r0_8, 0u, r2_2, r3_4);
    r2_3 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_9 = r4 + 0x4bcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_10 = call_00568a80(r0_9, 0x881a68u, r2_3, r3_5);  // (from the original)
    r3_6 = guest::cpu()->r[3];
    r2_4 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_006ad3a0(r4, r0_10, r2_4, r3_6);
    r2_5 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_11 = call_00568a80(r0_9, 0x881a5cu, r2_5, r3_7);  // (from the original)
    r3_8 = guest::cpu()->r[3];
    r2_6 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_006ad3a0(r4, r0_11, r2_6, r3_8);
    r2_7 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r0_12 = r4 + 0x6974u;  // (from the original)
    r1_4 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_005e2e50(r0_12, r1_4, r2_7, r3_9);
    r1_5 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_005e2f94(r0_12, r1_5, r2_8, r3_10);
    r2_9 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    r0_13 = r4 + 0x6a38u;  // (from the original)
    r1_6 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_005e2e50(r0_13, r1_6, r2_9, r3_11);
    r1_7 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_005e2f94(r0_13, r1_7, r2_10, r3_12);
    r1_8 = guest::cpu()->r[1];
    *gptr<u32>(r13 + 4u) = u32(r5);
    r0_14 = r13 + 4u;
    r13 = r13 + 0x70u;  // (from the original)
    guest::cpu()->r[1] = r1_8;
    guest::cpu()->r[13] = r13;
    return r0_14;
}

}  // namespace d_006aee8c
GUEST_EXPORT(0x006aee8c, d_006aee8c::f_006aee8c);

// f_006af218: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006af218 {

inline guest::global<u32, 0x006af350> global_006af350;  // (from the original)
inline guest::global<u32, 0x006af354> global_006af354;  // (from the original)
inline guest::global<u32, 0x008817a8> global_008817a8;  // (from the original)
inline constexpr guest::Function<0x002b6a00, u32(u32, u32, u32, u32)> call_002b6a00;  // (from the original)
inline constexpr guest::Function<0x002f6a30, u32(u32, u32, u32, u32)> call_002f6a30;  // (from the original)
inline constexpr guest::Function<0x002f6e98, u32(u32, u32, u32, u32)> call_002f6e98;  // (from the original)
inline constexpr guest::Function<0x002f7508, u32(u32, u32, u32, u32)> call_002f7508;  // (from the original)
inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> call_004b4fc0;  // (from the original)
inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> call_0056878c;  // (from the original)

u32 f_006af218(u32 r0, float S0, float S1) {
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r9_1 = 0;
    u32 r7_1 = 0;
    u32 ea_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r5_1 = 0;
    u32 r8_1 = 0;
    u32 r12_1 = 0;
    u32 r3_2 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    u32 r6_1 = 0;
    u32 r0_3 = 0;
    u32 r3_4 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    u32 r0_4 = 0;
    u32 r2_3 = 0;
    u32 r3_5 = 0;
    float S0_3 = 0;
    float S1_3 = 0;
    u32 r6_2 = 0;
    u32 r1_4 = 0;
    u32 r3_6 = 0;
    float S0_4 = 0;
    float S1_4 = 0;
    u32 r3_7 = 0;
    float S0_5 = 0;
    float S1_5 = 0;
    float S0_6 = 0;
    float S1_6 = 0;
    r1_1 = r0 + 0x2cu;  // (from the original)
    r13 = r13 - 0x60u;  // (from the original)
    r9_1 = r13 + 0x24u;  // (from the original)
    r7_1 = r0 + 0x4bcu;  // (from the original)
    ea_1 = 0x8817a8u + 0x200u;  // (from the original)
    r2_1 = *gptr<u32>(ea_1 + 4);
    r3_1 = *gptr<u32>(ea_1 + 8);
    r5_1 = *gptr<u32>(ea_1 + 0xc);  // (from the original)
    r8_1 = *gptr<u32>(ea_1 + 0x10);  // (from the original)
    r12_1 = *gptr<u32>(ea_1 + 0x14);  // (from the original)
    *gptr<u32>(r9_1) = u32(*gptr<u32>(ea_1));
    *gptr<u32>(r9_1 + 4) = u32(r2_1);
    *gptr<u32>(r9_1 + 8) = u32(r3_1);
    *gptr<u32>(r9_1 + 0xc) = u32(r5_1);  // (from the original)
    *gptr<u32>(r9_1 + 0x10) = u32(r8_1);  // (from the original)
    *gptr<u32>(r9_1 + 0x14) = u32(r12_1);  // (from the original)
    r3_2 = r13 + 0x1cu;  // (from the original)
    *gptr<u32>(r13 + 0x3cu) = u32(*gptr<u32>(0x8817a8u + 0x218u));  // (from the original)
    r0_1 = r0 + 0x140cu;  // (from the original)
    *gptr<u32>(r3_2) = u32(r1_1);
    *gptr<u32>(r3_2 + 4) = u32(r7_1);
    r1_2 = r13 + 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    call_002f6e98(r0_1, r1_2, 0u, r3_2);
    r2_2 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    S0_1 = std::bit_cast<float>(*global_006af350);
    *gptr<u32>(r0_1 + 0xd4u) = u32(*gptr<u32>(r0_1 + 0xd4u) | 0x40u);  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    *gptr<u32>(r13 + 4u) = u32(0u);
    S1_1 = std::bit_cast<float>(*global_006af354);
    r0_2 = r13 + 8u;
    *gptr<u32>(r13 + 8u) = u32(0u);
    *gptr<u32>(r13 + 0xcu) = u32(0u);  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(0u);  // (from the original)
    *gptr<u32>(r13 + 0x14u) = u32(0u);  // (from the original)
    *gptr<u32>(r13 + 0x18u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_2) = u32(std::bit_cast<u32>(S0_1));
    *gptr<u32>(r0_2 + 4) = u32(std::bit_cast<u32>(S1_1));
    r1_3 = *global_008817a8;
    r6_1 = *gptr<u32>(0x8817a8u + 4);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    r0_3 = call_0056878c(r7_1, r1_3, r2_2, r3_3);
    r3_4 = guest::cpu()->r[3];
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    *gptr<u32>(r13) = u32(r0_3);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    r0_4 = call_004b4fc0(r7_1, r6_1, 1u, r3_4);
    r2_3 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    S0_3 = guest::cpu()->s[0];
    S1_3 = guest::cpu()->s[1];
    r6_2 = r0 + 0x132cu;  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(r0_4);
    r1_4 = r13;
    *gptr<u32>(r13 + 0x10u) = u32(0u);  // (from the original)
    *gptr<u32>(r13 + 0x14u) = u32(0u);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_3;
    call_002b6a00(r6_2, r1_4, r2_3, r3_5);
    r3_6 = guest::cpu()->r[3];
    S0_4 = guest::cpu()->s[0];
    S1_4 = guest::cpu()->s[1];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_4;
    call_002f7508(r0_1, r6_2, 1u, r3_6);
    r3_7 = guest::cpu()->r[3];
    S0_5 = guest::cpu()->s[0];
    S1_5 = guest::cpu()->s[1];
    *gptr<u32>(0x13f8u + r0) = u32(0x100041du);  // (from the original)
    *gptr<u8>(0x13f8u + 0xeu + r0) = u8(1u);  // (from the original)
    *gptr<u32>(r6_2 + 0xd0u) = u32(0x100041du - 0x85u);  // (from the original)
    *gptr<u8>(r6_2 + 0xdbu) = u8(1u);  // (from the original)
    *gptr<u8>(r6_2 + 0xdcu) = u8(1u);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_5;
    guest::cpu()->s[1] = S1_5;
    call_002f6a30(r0_1, 0u, 0x13f8u, r3_7);  // (from the original)
    S0_6 = guest::cpu()->s[0];
    S1_6 = guest::cpu()->s[1];
    *gptr<u32>(r0_1 + 0xd4u) = u32(*gptr<u32>(r0_1 + 0xd4u) | 8u);  // (from the original)
    *gptr<u16>(0x14dcu + r0) = u16(3u);  // (from the original)
    r13 = r13 + 0x60u;  // (from the original)
    guest::cpu()->r[1] = 0x14dcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_6;
    guest::cpu()->s[1] = S1_6;
    return 3u;
}

}  // namespace d_006af218
GUEST_EXPORT(0x006af218, d_006af218::f_006af218);

// f_006af568: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006af568 {

inline guest::global<u32, 0x0095decc> global_0095decc;  // (from the original)
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
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r10 = guest::cpu()->r[10];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r3_3 = 0;
    u32 res_1 = 0;
    u32 ea_1 = 0;
    u32 r3_4 = 0;
    u32 ea_2 = 0;
    u32 r0_7 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_5 = 0;
    u32 r0_8 = 0;
    u32 r1_4 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r1_5 = 0;
    u32 r3_6 = 0;
    u32 r0_11 = 0;
    u32 r1_6 = 0;
    u32 r1_7 = 0;
    u32 r2_4 = 0;
    u32 r3_7 = 0;
    u32 r0_12 = 0;
    u32 r1_8 = 0;
    u32 r2_5 = 0;
    u32 r3_8 = 0;
    u32 r1_9 = 0;
    u32 r2_6 = 0;
    u32 r3_9 = 0;
    u32 r0_13 = 0;
    u32 r1_10 = 0;
    u32 r0_14 = 0;
    u32 r2_7 = 0;
    u32 r3_10 = 0;
    u32 r0_15 = 0;
    u32 r1_11 = 0;
    u32 r1_12 = 0;
    u32 r2_8 = 0;
    u32 r3_11 = 0;
    u32 r2_9 = 0;
    u32 r3_12 = 0;
    u32 r0_16 = 0;
    u32 r1_13 = 0;
    u32 r1_14 = 0;
    u32 r2_10 = 0;
    u32 r3_13 = 0;
    u32 r1_15 = 0;
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    u32 r1_16 = 0;
    r4 = r0;
    r13 = r13 - 0x68u;  // (from the original)
    r5 = r2;
    r6 = r1;
    guest::cpu()->r[13] = r13;
    r0_1 = call_0077033c(r1, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r10 = 0u;
    r8 = r4 + 0x4bcu;  // (from the original)
    if (r0_1 == 0) {
        goto L_6af740;
    }
    r0_2 = r13 + 8u;
    r1_1 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_003083bc(r0_2, r1_1, 0x14u, r3_1);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r7 = 0x909ce8u;  // (from the original)
    *gptr<u32>(r0_3) = u32(r7);
    r0_4 = r0_3 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_5 = call_005f4bfc(r0_4, r1_2, r2_2, r3_2);
    r0_6 = r0_5 - 0xcu;  // (from the original)
    r2 = 0x8906ecu;  // (from the original)
    *gptr<u32>(r0_6 + 0x18u) = u32(r10);  // (from the original)
    *gptr<u32>(r0_6 + 0x1cu) = u32(r10);  // (from the original)
    *gptr<u32>(r0_6 + 0x20u) = u32(r10);  // (from the original)
    *gptr<u32>(r0_6 + 0x24u) = u32(r10);  // (from the original)
    *gptr<u32>(r0_6 + 0x28u) = u32(r10);  // (from the original)
    *gptr<u32>(r0_6 + 0x2cu) = u32(r10);  // (from the original)
    *gptr<u32>(r0_6 + 0x30u) = u32(r10);  // (from the original)
    *gptr<u32>(r0_6 + 0x34u) = u32(r10);  // (from the original)
    *gptr<u32>(r0_6 + 0x38u) = u32(r10);  // (from the original)
    *gptr<u32>(r0_6 + 0x3cu) = u32(r10);  // (from the original)
    r1 = 0xau;  // (from the original)
    r0 = r0_6 + 0x16u;  // (from the original)
    do {
L_6af5ec:;
        r3_3 = u32(*gptr<u16>(r2));
        res_1 = r1 - 1u;
        r1 = res_1;
        ea_1 = r0 + 2u;
        *gptr<u16>(ea_1) = u16(r3_3);
        r3_4 = u32(*gptr<u16>(r2));
        ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r3_4);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    r0_7 = *global_0095decc;
    guest::cpu()->r[13] = r13;
    call_005ea8f8(r0_7, 0u, r2, r3_4);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    if (r5 != 0) {
        guest::cpu()->r[13] = r13;
        r0_8 = call_00770300(r6, r1_3, r2_3, r3_5);
        r1_4 = guest::cpu()->r[1];
        r0_9 = *gptr<u32>(*global_0095decc + 0x14u);  // (from the original)
        guest::cpu()->r[13] = r13;
        call_005f12c4(r0_9, r1_4, r0_8, r1_4);
        *gptr<u32>(r13) = u32(r10);
        r0_10 = *global_0095decc;
        r1_5 = r13 + 8u;
        guest::cpu()->r[13] = r13;
        call_005ea964(r0_10, r1_5, 0x6af76cu, 0x168u);  // (from the original)
        r3_6 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0_11 = call_004b4fc0(r8, 0x6af778u, 1u, r3_6);  // (from the original)
        r1_6 = r4 + 0x720u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_00568630(r8, r1_6, r0_11, 0u);
        r1_7 = guest::cpu()->r[1];
        r2_4 = guest::cpu()->r[2];
        r3_7 = guest::cpu()->r[3];
        r0_12 = r4 + 0x720u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_00569508(r0_12, r1_7, r2_4, r3_7);
        r1_8 = guest::cpu()->r[1];
        r2_5 = guest::cpu()->r[2];
        r3_8 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        call_00568c10(r8, r1_8, r2_5, r3_8);
        r1_9 = r4 + 0x720u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_00568984(r8, r1_9, r0_11, 0u);
        r2_6 = guest::cpu()->r[2];
        r3_9 = guest::cpu()->r[3];
    } else {
        *gptr<u32>(r13) = u32(r10);
        r0_13 = *global_0095decc;
        r1_10 = r13 + 8u;
        guest::cpu()->r[13] = r13;
        call_005ea964(r0_13, r1_10, 0x6af76cu, 0x169u);  // (from the original)
        r2_6 = guest::cpu()->r[2];
        r3_9 = guest::cpu()->r[3];
    }
    r0_14 = *global_0095decc;
    guest::cpu()->r[13] = r13;
    call_005ea8dc(r0_14, 0u, r2_6, r3_9);
    r2_7 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r0_15 = r4 + 0x6728u;  // (from the original)
    r1_11 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_005e2e50(r0_15, r1_11, r2_7, r3_10);
    r1_12 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_005e2f94(r0_15, r1_12, r2_8, r3_11);
    r2_9 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    r0_16 = r4 + 0x67ecu;  // (from the original)
    r1_13 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_005e2e50(r0_16, r1_13, r2_9, r3_12);
    r1_14 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_005e2f94(r0_16, r1_14, r2_10, r3_13);
    r1_15 = guest::cpu()->r[1];
    *gptr<u32>(r13 + 8u) = u32(r7);
    r0_17 = r13 + 8u;
    r13 = r13 + 0x68u;  // (from the original)
    guest::cpu()->r[1] = r1_15;
    guest::cpu()->r[13] = r13;
    return r0_17;
L_6af740:;
    guest::cpu()->r[13] = r13;
    r0_18 = call_0056878c(r8, 0x6af788u, r2_1, r3_1);  // (from the original)
    r1_16 = u32(*gptr<u8>(r0_18 + 0xb7u)) & 0xfeu;  // (from the original)
    *gptr<u8>(r0_18 + 0xb7u) = u8(r1_16);  // (from the original)
    r13 = r13 + 0x68u;  // (from the original)
    guest::cpu()->r[1] = r1_16;
    guest::cpu()->r[13] = r13;
    return r0_18;
}

}  // namespace d_006af568
GUEST_EXPORT(0x006af568, d_006af568::f_006af568);

// f_006afbcc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006afbcc {

inline constexpr guest::Function<0x001323bc, u32(u32, u32, u32, u32)> call_001323bc;  // (from the original)
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32, u32)> call_00569e6c;  // (from the original)

u32 f_006afbcc(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_001323bc(r0, r1, r2, guest::cpu()->r[3]);
    r1_1 = r0 + 0x400u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    r1_2 = r1_1 + 0xbcu;  // (from the original)
    return call_00569e6c(r0_1, r1_2, 0u, guest::cpu()->r[3]);
}

}  // namespace d_006afbcc
GUEST_EXPORT(0x006afbcc, d_006afbcc::f_006afbcc);
