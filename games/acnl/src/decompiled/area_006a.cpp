// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "graphics/hemisphere_light.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_006a04c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a04c4 {

inline constexpr guest::Function<0x001139fd, u32(u32, u32)> call_001139fc;  // (from the original)
inline constexpr guest::Function<0x00116e31, u32(u32, u32)> call_00116e30;  // (from the original)
inline constexpr guest::Function<0x0011945d, u32(u32, u32)> call_0011945c;  // (from the original)
inline constexpr guest::Function<0x001194e1, u32(u32, u32)> call_001194e0;  // (from the original)
inline constexpr guest::Function<0x0011a391, u32(u32, u32)> call_0011a390;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb310, u32(u32, u32)> call_002fb310;  // (from the original)
inline constexpr guest::Function<0x002fe450, u32(u32, u32)> call_002fe450;  // (from the original)
inline constexpr guest::Function<0x002fe4d0, u32(u32, u32)> call_002fe4d0;  // (from the original)
inline constexpr guest::Function<0x00300904, u32(u32, u32)> call_00300904;  // (from the original)
inline constexpr guest::Function<0x003058c9, u32(u32, u32)> call_003058c8;  // (from the original)
inline constexpr guest::Function<0x003099d0, u32(u32, u32)> call_003099d0;  // (from the original)
inline constexpr guest::Function<0x0051d1f8, u32(u32, u32)> call_0051d1f8;  // (from the original)

void f_006a04c4(u32 r0, u32 r1) {
    u32 r4 = 0;
    u32 r0_7 = 0;
    u32 r1_4 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r1_5 = 0;
    u32 r0_10 = 0;
    u32 r1_6 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r1_7 = 0;
    u32 r8 = r1;
    u32 r0_1 = call_002fae84(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_2 = call_002fb310(r0_1, guest::cpu()->r[1]);
    u32 r7 = r0_2 + 4u;
    u32 r0_3 = call_0011945c(r7, ~0u);
    if (r0_3 == 0) {
        return;
    } else {
        r4 = 0u;
    }
    do {
        u32 r0_4 = call_001194e0(r7, r4);
        u32 r0_5 = call_003058c8(r7, r0_4);
        if (r0_5 != 0) {
            call_001139fc(r0_5, 2u);
            call_00116e30(r8, r0_4);
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 2u);
    r4 = 0u;
L_6a053c:;
    u32 r0_6 = call_003058c8(r7, r4);
    if (r0_6 == 0) {
        goto L_6a05d8;
    }
    r0_7 = call_002fe450(r4, guest::cpu()->r[1]);
    r1_4 = guest::cpu()->r[1];
    if (r0_7 == 0) {
        goto L_6a05d8;
    }
    r0_8 = call_003099d0(r0_7, r1_4);
    if (s32(r0_8) < 0) {
        goto L_6a05d8;
    }
    r0_9 = call_003058c8(r7, r0_8);
    r1_5 = guest::cpu()->r[1];
    r0_10 = call_00300904(r0_9, r1_5);
    r1_6 = guest::cpu()->r[1];
    if ((r0_10 - 1u & r0_9) == 0) {
        goto L_6a05e8;
    }
    r0_11 = call_0011a390(r0_9, r1_6);
    if (r0_11 == 0) {
        goto L_6a05e8;
    }
    call_001139fc(r0_6, 3u);
    r0 = call_00116e30(r8, r4);
    r1 = guest::cpu()->r[1];
L_6a05c4:;
    r0_12 = call_0051d1f8(r0, r1);
    r1_7 = guest::cpu()->r[1];
    if (r0_12 == r4) {
        call_002fe4d0(~0u, r1_7);
    }
L_6a05d8:;
    r4 += 1u;
    if (s32(r4) < 0xa) {  // (from the original)
        guest::preempt();
        goto L_6a053c;
    }
    return;
L_6a05e8:;
    r0 = call_001139fc(r0_6, 2u);
    r1 = guest::cpu()->r[1];
    guest::preempt();
    goto L_6a05c4;
}

}  // namespace d_006a04c4
GUEST_EXPORT_FRAMED(0x006a04c4, d_006a04c4::f_006a04c4, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_006a0848: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a0848 {

struct __attribute__((packed)) Local_006a0848_r1_5 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Local_006a0848_r1_5, word_4, 0x4);  // (from the original)

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

void f_006a0848(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2, float S3) {
    guest::StackFrame frame(0x24);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r0_1 = call_002f74c8(r0, r1, r2, r3);
    u32 r2_1 = guest::cpu()->r[2];
    u32 r3_1 = guest::cpu()->r[3];
    u32 r0_2 = call_002f74e0(0x10u, r0_1, r2_1, r3_1);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_2 = guest::cpu()->r[2];
    u32 r3_2 = guest::cpu()->r[3];
    if (r0_2 != 0) {
        return;
    }
    u32 r0_3 = call_002fb94c(r0_2, r1_1, r2_2, r3_2);
    u32 r1_2 = guest::cpu()->r[1];
    u32 r2_3 = guest::cpu()->r[2];
    u32 r3_3 = guest::cpu()->r[3];
    if (r0_3 == 0) {
        return;
    }
    u32 r0_4 = call_006cbbe4(r0_3, r1_2, r2_3, r3_3);
    u32 r2_4 = guest::cpu()->r[2];
    u32 r3_4 = guest::cpu()->r[3];
    call_00307220(frame.at(4).addr(), r0_4, r2_4, r3_4);
    float S3_5 = std::bit_cast<float>(*global_006a0980);
    float S1_5 = std::bit_cast<float>(*global_006a0984);
    float S2_5 = std::bit_cast<float>(*global_0085f2cc);
    *frame.at<u32>(0xc) = std::bit_cast<u32>(std::bit_cast<float>(*frame.at<u32>(0xc)) + S2_5 * S3_5);  // (from the original)
    float S0_5 = std::bit_cast<float>(*frame.at<u32>(4)) + S2_5 * S1_5;
    *frame.at<u32>(4) = std::bit_cast<u32>(S0_5);
    *frame.at<u16>(0x10) = 0;  // (from the original)
    *frame.at<u16>(0x14) = 0;  // (from the original)
    *frame.at<u16>(0x12) = u16(0xffff8000u);  // (from the original)
    u32 r1_3 = u32(*global_008c9f1c) << 0x18 | (((u32(*global_008540d0) & 0xffu | r4 & ~0xffu) & ~0xff00u | u32(*global_008540d1) << 8 & 0xff00u) & ~0xff0000u | u32(*global_008540d2) << 0x10 & 0xff0000u) & ~0xff000000u;  // (from the original)
    *frame.at<u8>(0x18) = 1;  // (from the original)
    *frame.at<u8>(0x19) = 0;  // (from the original)
    *frame.at<u32>(0x1c) = r1_3;  // (from the original)
    u32 r0_6 = *global_0088729a;
    *frame.at<u32>(0) = frame.at(0x10).addr();  // (from the original)
    guest::cpu()->s[0] = S0_5;
    guest::cpu()->s[1] = S1_5;
    guest::cpu()->s[2] = S2_5;
    guest::cpu()->s[3] = S3_5;
    u32 r0_7 = call_0057b9dc(r0_6, r0, frame.at(0x18).addr(), frame.at(4).addr());  // (from the original)
    if (r0_7 == 0) {
        return;
    }
    gptr<Local_006a0848_r1_5> r1_5 = gptr<Local_006a0848_r1_5>(r0 + 0xeb54u);  // (from the original)
    u32 r2_6 = r1_5->word_4;
    if (r2_6 != 0) {
        *gptr<u32>(r2_6) = r0_7;
    }
    r1_5->word_4 = r1_5->word_4 + 4u;
    guest::cpu()->r[1] = r1_5.addr();
}

}  // namespace d_006a0848
GUEST_EXPORT_FRAMED(0x006a0848, d_006a0848::f_006a0848, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_006a0ecc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a0ecc {

inline guest::global<u32, 0x00aaf14c> global_00aaf14c;  // (from the original)
inline constexpr guest::Function<0x001139f4, u32(u32, u32, u32)> call_001139f4;  // (from the original)
inline constexpr guest::Function<0x00116e31, u32(u32, u32, u32)> call_00116e30;  // (from the original)
inline constexpr guest::Function<0x00116ea5, u32(u32, u32, u32)> call_00116ea4;  // (from the original)
inline constexpr guest::Function<0x00119715, u32(u32, u32, u32)> call_00119714;  // (from the original)
inline constexpr guest::Function<0x001198e9, u32(u32, u32, u32)> call_001198e8;  // (from the original)
inline constexpr guest::Function<0x0011a1c9, u32(u32, u32, u32)> call_0011a1c8;  // (from the original)
inline constexpr guest::Function<0x0011a651, u32(u32, u32, u32)> call_0011a650;  // (from the original)
inline constexpr guest::Function<0x0011b4f7, u32(u32, u32, u32)> call_0011b4f6;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb310, u32(u32, u32, u32)> call_002fb310;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fe419, u32(u32, u32, u32)> call_002fe418;  // (from the original)
inline constexpr guest::Function<0x002fe450, u32(u32, u32, u32)> call_002fe450;  // (from the original)
inline constexpr guest::Function<0x002ff6f4, u32(u32, u32, u32)> call_002ff6f4;  // (from the original)
inline constexpr guest::Function<0x003058c9, u32(u32, u32, u32)> call_003058c8;  // (from the original)
inline constexpr guest::Function<0x00309ac9, u32(u32, u32, u32)> call_00309ac8;  // (from the original)
inline constexpr guest::Function<0x00309eb9, u32(u32, u32, u32)> call_00309eb8;  // (from the original)
inline constexpr guest::Function<0x0051ca20, u32(u32, u32, u32, u32)> call_0051ca20;  // (from the original)
inline constexpr guest::Function<0x00716b74, u32(u32, u32, u32)> call_00716b74;  // (from the original)
inline constexpr guest::Function<0x00716de4, u32(u32, u32, u32)> call_00716de4;  // (from the original)
inline constexpr guest::Function<0x0076cec4, u32(u32, u32, u32)> call_0076cec4;  // (from the original)

void f_006a0ecc(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r0_9 = 0;
    u32 r1_5 = 0;
    u32 r1_7 = 0;
    u32 r1_10 = 0;
    u32 r10 = r1;
    u32 r0_1 = call_0051ca20(r0, r1, r2, guest::cpu()->r[3]);
    if (r0_1 != 0) {
        u32 r6 = *global_00aaf14c;
        if (r6 != 0) {
            u32 r0_2 = u32(*gptr<u8>(0x5701u + r6)) << 0x1e;  // (from the original)
            if (r0_2 >> 0x1f) {  // (from the original)
                u32 r0_3 = call_002fae84(r0_2, guest::cpu()->r[1], guest::cpu()->r[2]);
                u32 r0_4 = call_002fb310(r0_3, guest::cpu()->r[1], guest::cpu()->r[2]);
                u32 r9 = r0_4 + 4u;
                u32 r0_6 = call_00116ea4(frame.at(0).addr(), 0xau, 0u);  // (from the original)
                u32 r5 = 0x18u;  // (from the original)
                u32 r0_7 = call_002fb328(r0_6, guest::cpu()->r[1], guest::cpu()->r[2]);
                u32 r7 = r0_7 + 0x6aeb8u;  // (from the original)
                call_00116ea4(frame.at(0xc).addr(), 0xbu, 0u);  // (from the original)
                r2 = guest::cpu()->r[2];
                u32 r4 = 0x4au;  // (from the original)
                do {
                    r0_9 = call_0076cec4(r7, r4 & 0xffu, r2);  // (from the original)
                    r1_5 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    if (r0_9 != 0) {
                        r0_9 = call_00116e30(frame.at(0xc).addr(), r4 - 0x4au, r2);  // (from the original)
                        r1_5 = guest::cpu()->r[1];
                        r2 = guest::cpu()->r[2];
                    }
                    r4 += 1u;
                    guest::preempt();
                } while (s32(r4) <= 0x54);  // (from the original)
                u32 r0_11 = call_002f74c8(r0_9, r1_5, r2);
                r2 = guest::cpu()->r[2];
                u32 res_1 = r0_11 - 0x3fu;  // (from the original)
                u32 zf_1 = res_1 == 0;
                r7 = r0_11;
                if (zf_1) {
                    r5 = 0x15u;  // (from the original)
                } else {
                    if (!!zf_1 || (res_1 >> 0x1f) != (((r0_11 ^ 0x3fu) & (r0_11 ^ res_1)) >> 0x1f)) {  // (from the original)
                        if (r7 == 0x39u || r7 == 0x3au || r7 == 0x3bu || r7 == 0x3cu) {  // (from the original)
                            goto L_6a0fc8;
                        }
                        goto L_6a0fcc;
                    }
                    if (r7 == 0x46u || r7 == 0x47u) {  // (from the original)
                        r5 = 9u;
                        goto L_6a0fcc;
                    }
                    if (r7 == 0x49u) {  // (from the original)
                        r5 = 0xau;  // (from the original)
                    }
                    goto L_6a0fcc;
L_6a0fc8:;
                    r5 = 8u;
                }
L_6a0fcc:;
                r4 = 0u;
                u32 r8 = r6 + 0x55a6u;  // (from the original)
                do {
                    u32 r0_12 = call_003058c8(r9, r4, r2);
                    r1_7 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    if (r0_12 != 0) {
                        if (*gptr<u8>(0x250fu + r0_12) == r5 || r5 == 0xau) {  // (from the original)
                            return;
                        }
                        u32 r0_13 = call_0011b4f6(r10, r4, r2);
                        r1_7 = guest::cpu()->r[1];
                        r2 = guest::cpu()->r[2];
                        if (r0_13 == 0) {
                            u32 r0_14 = call_0011a1c8(r0_12, r1_7, r2);
                            r1_7 = guest::cpu()->r[1];
                            r2 = guest::cpu()->r[2];
                            if (r0_14 == 0) {
                                u32 r0_15 = call_001198e8(r0_12, r1_7, r2);
                                r1_7 = guest::cpu()->r[1];
                                r2 = guest::cpu()->r[2];
                                if (r0_15 == 0) {
                                    u32 r0_16 = call_00309ac8(r0_12, 0u, r2);
                                    r2 = guest::cpu()->r[2];
                                    if (r0_16 != 0) {
                                        u32 r0_17 = call_00119714(r9, r4, 0u);
                                        r1_7 = guest::cpu()->r[1];
                                        r2 = guest::cpu()->r[2];
                                        if (r0_17 == 0) {
                                            goto L_6a10e8;
                                        }
                                    }
                                    u32 r0_18 = call_00309eb8(r0_12, r8, r2);
                                    r1_7 = guest::cpu()->r[1];
                                    r2 = guest::cpu()->r[2];
                                    if (r0_18 != 0) {
                                        if ((u32(*gptr<u8>(r0_18 + 0xbcu)) >> 7) != 0) {  // (from the original)
                                            u32 r0_19 = call_0011a650(r0_12, r1_7, r2);
                                            r1_7 = guest::cpu()->r[1];
                                            r2 = guest::cpu()->r[2];
                                            if (r0_19 == 0) {
                                                u32 r0_20 = call_002fe450(r4, r1_7, r2);
                                                r1_7 = guest::cpu()->r[1];
                                                r2 = guest::cpu()->r[2];
                                                if (r0_20 != 0) {
                                                    r1_7 = *gptr<u8>(r0_20 + 0x1cu);  // (from the original)
                                                    if (r1_7 == 0xa5u && *gptr<u8>(r0_20 + 0x1du) == 0xa5u) {  // (from the original)
                                                        call_00116e30(frame.at(0).addr(), r4, r2);
                                                        r1_7 = guest::cpu()->r[1];
                                                        r2 = guest::cpu()->r[2];
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
L_6a10e8:;
                    r4 += 1u;
                    guest::preempt();
                } while (s32(r4) < 0xa);  // (from the original)
                if (s32(*frame.at<u32>(8)) > 0) {
                    u32 r0_22 = call_002ff6f4(0x64u, r1_7, r2);  // (from the original)
                    if (s32(r0_22) < 0x14) {  // (from the original)
                        u32 r0_24 = call_002fe418(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2]);
                        u32 r0_25 = call_003058c8(r9, r0_24, guest::cpu()->r[2]);
                        u32 r1_9 = guest::cpu()->r[1];
                        u32 r2_6 = guest::cpu()->r[2];
                        if (r0_25 != 0) {
                            if (r7 != 0x46u && r7 != 0x47u) {  // (from the original)
                                if (r7 == 0x49u) {  // (from the original)
                                    if (s32(*frame.at<u32>(0x14)) <= 0) {  // (from the original)
                                        return;
                                    }
                                    u32 r0_27 = call_002fe418(frame.at(0xc).addr(), r1_9, r2_6);  // (from the original)
                                    r2_6 = guest::cpu()->r[2];
                                    r1_10 = r0_27 + 0xau & 0xffu;  // (from the original)
                                    goto L_6a11b4;
                                }
                            } else {
                                u32 r0_28 = call_002fb328(r0_25, r1_9, r2_6);
                                u32 r4_1 = r0_28 + 0x6ad82u;  // (from the original)
                                if (r4_1 == 0) {
                                    return;
                                }
                                u32 r0_29 = call_00716de4(r4_1, guest::cpu()->r[1], guest::cpu()->r[2]);
                                r2_6 = guest::cpu()->r[2];
                                if (r0_29 == 0) {
                                    u32 r0_30 = call_00716b74(r4_1, guest::cpu()->r[1], r2_6);
                                    r2_6 = guest::cpu()->r[2];
                                    if (r0_30 == 0) {
                                        return;
                                    }
                                }
                            }
                            r1_10 = r5;
L_6a11b4:;
                            if (r1_10 != 0x18u) {  // (from the original)
                                call_001139f4(r0_25, r1_10, r2_6);
                            }
                        }
                    }
                }
            }
        }
    }
}

}  // namespace d_006a0ecc
GUEST_EXPORT_FRAMED(0x006a0ecc, d_006a0ecc::f_006a0ecc, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_006a14bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a14bc {

inline guest::global<u32, 0x00aaf14c> global_00aaf14c;  // (from the original)
inline constexpr guest::Function<0x00111f95, u32(u32, u32, u32)> call_00111f94;  // (from the original)
inline constexpr guest::Function<0x001120f1, u32(u32, u32, u32)> call_001120f0;  // (from the original)
inline constexpr guest::Function<0x001139fd, u32(u32, u32, u32)> call_001139fc;  // (from the original)
inline constexpr guest::Function<0x00116e31, u32(u32, u32, u32)> call_00116e30;  // (from the original)
inline constexpr guest::Function<0x00116e4f, u32(u32, u32, u32)> call_00116e4e;  // (from the original)
inline constexpr guest::Function<0x00116e93, u32(u32, u32, u32)> call_00116e92;  // (from the original)
inline constexpr guest::Function<0x00116ea5, u32(u32, u32, u32)> call_00116ea4;  // (from the original)
inline constexpr guest::Function<0x001198e9, u32(u32, u32, u32)> call_001198e8;  // (from the original)
inline constexpr guest::Function<0x0011a1c9, u32(u32, u32, u32)> call_0011a1c8;  // (from the original)
inline constexpr guest::Function<0x0011a651, u32(u32, u32, u32)> call_0011a650;  // (from the original)
inline constexpr guest::Function<0x0011ab05, u32(u32, u32, u32)> call_0011ab04;  // (from the original)
inline constexpr guest::Function<0x0011b4f7, u32(u32, u32, u32)> call_0011b4f6;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb310, u32(u32, u32, u32)> call_002fb310;  // (from the original)
inline constexpr guest::Function<0x002fe419, u32(u32, u32, u32)> call_002fe418;  // (from the original)
inline constexpr guest::Function<0x002fe450, u32(u32, u32, u32)> call_002fe450;  // (from the original)
inline constexpr guest::Function<0x002fe4d0, u32(u32, u32, u32)> call_002fe4d0;  // (from the original)
inline constexpr guest::Function<0x002ff6f4, u32(u32, u32, u32)> call_002ff6f4;  // (from the original)
inline constexpr guest::Function<0x003041c8, u32(u32, u32, u32)> call_003041c8;  // (from the original)
inline constexpr guest::Function<0x003058c9, u32(u32, u32, u32)> call_003058c8;  // (from the original)
inline constexpr guest::Function<0x00309f85, u32(u32, u32, u32)> call_00309f84;  // (from the original)
inline constexpr guest::Function<0x0030a038, u32(u32, u32, u32)> call_0030a038;  // (from the original)
inline constexpr guest::Function<0x0051ca20, u32(u32, u32, u32, u32)> call_0051ca20;  // (from the original)
inline constexpr guest::Function<0x0051d1f8, u32(u32, u32, u32)> call_0051d1f8;  // (from the original)
inline constexpr guest::Function<0x0051d6e8, u32(u32, u32, u32)> call_0051d6e8;  // (from the original)

void f_006a14bc(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x30);  // the original's stack frame
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_5 = 0;
    u32 r0_10 = 0;
    u32 r4_2 = 0;
    u32 r10 = r1;
    u32 r0_1 = call_0051ca20(r0, r1, r2, guest::cpu()->r[3]);
    if (r0_1 != 0) {
        u32 r0_2 = call_002fae84(r0_1, guest::cpu()->r[1], guest::cpu()->r[2]);
        u32 r0_3 = call_002fb310(r0_2, guest::cpu()->r[1], guest::cpu()->r[2]);
        u32 r9 = r0_3 + 4u;
        call_00116ea4(frame.at(0xc).addr(), 0xau, 0u);  // (from the original)
        call_00116ea4(frame.at(0).addr(), 0x18u, 0u);  // (from the original)
        call_0030a038(frame.at(0).addr(), 2u, guest::cpu()->r[2]);
        u32 r1_3 = guest::cpu()->r[1];
        u32 r2_4 = guest::cpu()->r[2];
        u32 r6 = *global_00aaf14c;
        if (r6 != 0) {
            r0_7 = u32(*gptr<u8>(0x5701u + r6)) << 0x1e;  // (from the original)
            if (r0_7 >> 0x1f) {  // (from the original)
                goto L_6a1534;
            }
        }
        r0_8 = frame.at(0).addr();
        r0_7 = call_0051d6e8(r0_8, r1_3, r2_4);
        r1_3 = guest::cpu()->r[1];
        r2_4 = guest::cpu()->r[2];
L_6a1534:;
        u32 r0_9 = call_003041c8(r0_7, r1_3, r2_4);
        u32 r1_4 = guest::cpu()->r[1];
        u32 r2_5 = guest::cpu()->r[2];
        if (r0_9 == 0x2bu) {  // (from the original)
            r1_5 = 5u;
        } else if (r0_9 == 0x32u) {  // (from the original)
            r1_5 = 6u;
        } else {
            goto L_6a155c;
        }
        r0_10 = frame.at(0).addr();
        r0_9 = call_00116e4e(r0_10, r1_5, r2_5);
        r1_4 = guest::cpu()->r[1];
        r2_5 = guest::cpu()->r[2];
L_6a155c:;
        u32 r0_11 = call_001120f0(r0_9, r1_4, r2_5);
        u32 r1_6 = guest::cpu()->r[1];
        u32 r2_6 = guest::cpu()->r[2];
        if (r0_11 == 0) {
            r0_11 = call_00116e4e(frame.at(0).addr(), 5u, r2_6);
            r1_6 = guest::cpu()->r[1];
            r2_6 = guest::cpu()->r[2];
        }
        u32 r0_13 = call_00111f94(r0_11, r1_6, r2_6);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0_13 == 0) {
            call_00116e4e(frame.at(0).addr(), 6u, r2);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
        }
        u32 r4 = 0u;
        do {
            u32 r0_15 = call_002fe450(r4, r1, r2);
            u32 r0_16 = call_003058c8(r9, r4, guest::cpu()->r[2]);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            u32 zf_1 = r0_15 == 0;
            if (!zf_1) {
                zf_1 = r0_16 == 0;
            }
            if (!zf_1) {
                u32 r8_1 = *gptr<u8>(0x250fu + r0_16);  // (from the original)
                u32 res_1 = r8_1 - 3u;
                if (res_1 != 0) {
                    if ((res_1 >> 0x1f) == (((r8_1 ^ 3u) & (r8_1 ^ res_1)) >> 0x1f)) {  // (from the original)
                        if (r8_1 == 7u || r8_1 == 0x17u) {  // (from the original)
                            goto L_6a1678;
                        }
                    } else if (r8_1 == 0 || r8_1 == 1u) {
                        goto L_6a1678;
                    }
                    u32 r0_17 = call_0011b4f6(r10, r4, r2);
                    u32 r2_8 = guest::cpu()->r[2];
                    if (r0_17 == 0) {
                        u32 r0_18 = call_0011a1c8(r0_16, guest::cpu()->r[1], r2_8);
                        r2_8 = guest::cpu()->r[2];
                        if (r0_18 == 0) {
                            u32 r0_19 = call_001198e8(r0_16, guest::cpu()->r[1], r2_8);
                            r2_8 = guest::cpu()->r[2];
                            if (r0_19 == 0) {
                                if ((*gptr<u32>(r0_15 + 0x20u) >> 0xdu & 3u) == 0) {  // (from the original)
                                    u32 r0_20 = call_002ff6f4(0x64u, guest::cpu()->r[1], r2_8);  // (from the original)
                                    r2_8 = guest::cpu()->r[2];
                                    if (s32(r0_20) < 0x14) {  // (from the original)
                                        call_00116e30(frame.at(0xc).addr(), r4, r2_8);  // (from the original)
                                        r2_8 = guest::cpu()->r[2];
                                    }
                                }
                            }
                        }
                    }
                    call_00116e4e(frame.at(0).addr(), r8_1, r2_8);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                }
            }
L_6a1678:;
            r4 += 1u;
            guest::preempt();
        } while (s32(r4) < 0xa);  // (from the original)
        u32 r8 = r6 + 0x55a6u;  // (from the original)
L_6a168c:;
        u32 r0_23 = *frame.at<u32>(0x14);  // (from the original)
        u32 nf_2 = r0_23 >> 0x1f;  // (from the original)
        u32 zf_2 = r0_23 == 0;
        u32 vf_2 = 0u;
        if (!zf_2 && nf_2 == vf_2) {
            u32 r0_24 = *frame.at<u32>(8);
            nf_2 = r0_24 >> 0x1f;  // (from the original)
            zf_2 = r0_24 == 0;
            vf_2 = 0u;
        }
        if (!zf_2 && nf_2 == vf_2) {
            u32 r0_26 = call_002fe418(frame.at(0xc).addr(), r1, r2);  // (from the original)
            call_00116e4e(frame.at(0xc).addr(), r0_26, guest::cpu()->r[2]);  // (from the original)
            u32 r0_28 = call_003058c8(r9, r0_26, guest::cpu()->r[2]);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            if (r0_28 == 0) {
                guest::preempt();
                goto L_6a168c;
            }
            call_00116e92(frame.at(0x18).addr(), frame.at(0).addr(), r2);  // (from the original)
            u32 r2_11 = guest::cpu()->r[2];
            if (r6 != 0) {
                u32 r0_30 = call_00309f84(r0_28, r8, r2_11);
                u32 r1_11 = guest::cpu()->r[1];
                r2_11 = guest::cpu()->r[2];
                if (r0_30 != 0) {
                    if ((u32(*gptr<u8>(r0_30 + 0xbcu)) >> 7) != 0) {  // (from the original)
                        u32 r0_31 = call_0011a650(r0_28, r1_11, r2_11);
                        r1_11 = guest::cpu()->r[1];
                        r2_11 = guest::cpu()->r[2];
                        if (r0_31 == 0) {
                            goto L_6a1728;
                        }
                    }
                }
                call_0051d6e8(frame.at(0x18).addr(), r1_11, r2_11);  // (from the original)
                r2_11 = guest::cpu()->r[2];
            }
L_6a1728:;
            u32 r4_1 = frame.at(0x18).addr();  // (from the original)
            u32 r0_33 = call_0011b4f6(r4_1, 5u, r2_11);
            u32 r1_12 = guest::cpu()->r[1];
            u32 r2_12 = guest::cpu()->r[2];
            if (r0_33 != 0) {
                call_00116e92(frame.at(0x24).addr(), r4_1, r2_12);  // (from the original)
                u32 r0_35 = call_0011ab04(r0_28, r0_26, guest::cpu()->r[2]);
                u32 r1_13 = guest::cpu()->r[1];
                u32 r2_14 = guest::cpu()->r[2];
                if (r0_35 == 0) {
                    call_00116e4e(frame.at(0x24).addr(), 5u, r2_14);  // (from the original)
                    r1_13 = guest::cpu()->r[1];
                    r2_14 = guest::cpu()->r[2];
                }
                u32 r0_38 = call_002fe418(frame.at(0x24).addr(), r1_13, r2_14);  // (from the original)
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r4_2 = r0_38 & 0xffu;  // (from the original)
            } else {
                u32 r0_39 = call_002fe418(r4_1, r1_12, r2_12);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r4_2 = r0_39 & 0xffu;  // (from the original)
            }
            if (r4_2 >= 0x18u) {  // (from the original)
                guest::preempt();
                goto L_6a168c;
            }
            call_001139fc(r0_28, r4_2, r2);
            u32 r0_41 = call_00116e4e(frame.at(0).addr(), r4_2, guest::cpu()->r[2]);
            u32 r0_42 = call_0051d1f8(r0_41, guest::cpu()->r[1], guest::cpu()->r[2]);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            if (r0_42 == r0_26) {
                call_002fe4d0(~0u, r1, r2);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
            }
            guest::preempt();
            goto L_6a168c;
        }
    }
}

}  // namespace d_006a14bc
GUEST_EXPORT_FRAMED(0x006a14bc, d_006a14bc::f_006a14bc, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_006a1ca0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a1ca0 {

struct __attribute__((packed)) Object_006a1ca0_0 {
    u8 unknown_0[0xeb54];  // (not used here)
    u32 word_eb54;
    u32 word_eb58;
};
GUEST_OFFSET(Object_006a1ca0_0, word_eb54, 0xeb54);  // (from the original)
GUEST_OFFSET(Object_006a1ca0_0, word_eb58, 0xeb58);  // (from the original)

struct __attribute__((packed)) Local_006a1ca0_r5_1 {
    u32 word_0;
    u8 unknown_4[0x50];  // (not used here)
    u32 word_54;
};
GUEST_OFFSET(Local_006a1ca0_r5_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006a1ca0_r5_1, word_54, 0x54);  // (from the original)


u32 f_006a1ca0(gptr<Object_006a1ca0_0> arg0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r7 = r1;
    r1 = r0 + 0xeb54u;  // (from the original)
    u32 r4 = arg0->word_eb54;
    u32 r6 = arg0->word_eb58;
    u32 r8 = r2;
    if (r4 != r6) {
        do {
            gptr<Local_006a1ca0_r5_1> r5_1 = gptr<Local_006a1ca0_r5_1>(*gptr<u32>(r4));
            if (r5_1.addr() != 0 && r5_1->word_54 == r7) {
                u32 r2_1 = *gptr<u32>(r5_1->word_0 + 0xe8u);  // (from the original)
                // virtual function 58 of r5_1.addr()
                frame.release();
                return guest::call_address<u32>(r2_1, r5_1.addr(), r8, r2_1, guest::cpu()->r[3]);
            }
            r4 += 4u;
            guest::preempt();
        } while (r4 != r6);
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_006a1ca0
GUEST_EXPORT(0x006a1ca0, d_006a1ca0::f_006a1ca0);

// f_006a2c2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a2c2c {

inline constexpr guest::Function<0x00757aa0, u32(u32, u32, u32, u32)> call_00757aa0;  // (from the original)

u32 f_006a2c2c(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r0_1 = call_00757aa0(r0, r1, guest::cpu()->r[2], r3);
    u32 r1_1 = *gptr<u32>(r0);
    *gptr<u8>(r1_1 + r0_1) = u8(r3);
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_006a2c2c
GUEST_EXPORT_FRAMED(0x006a2c2c, d_006a2c2c::f_006a2c2c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006a2c48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a2c48 {

inline constexpr guest::Function<0x005bf518, u32(u32, u32)> call_005bf518;  // (from the original)

u32 f_006a2c48(u32 r0_unused, u32 r1) {
    call_005bf518(guest::cpu()->r[0], r1);
    return guest::cpu()->r[0];
}

}  // namespace d_006a2c48
GUEST_EXPORT_FRAMED(0x006a2c48, d_006a2c48::f_006a2c48, 0x4010);  // pushes {r4, lr} first, as the original

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
    arg0->word_0 = r1;
    arg0->word_4 = r2;
    arg0->word_8 = r3;
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

void f_006a2ca4(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0xa0);  // the original's stack frame
    u32 res_1 = 0;
    u32 r3_4 = 0;
    u32 r5 = r0;
    u32 r7 = r1;
    u32 r0_2 = call_003083bc(frame.at(8).addr(), frame.at(0x20).addr(), 0x40u, r3);  // (from the original)
    u32 r6 = 0x90a228u;  // (from the original)
    *gptr<u32>(r0_2) = r6;
    u32 r0_4 = call_005f4bfc(r0_2 + 0xcu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_002f825c(r0_4 + 0xcu, 0x80u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r2 = 0x8906ecu;  // (from the original)
    u32 r4 = 0u;
    r0 = ((r0_4 - 0xcu) + 0x18u) - 2u;  // (from the original)
    r1 = 0x20u;  // (from the original)
    do {
        u32 r3_3 = *gptr<u16>(r2);
        res_1 = r1 - 1u;
        r1 = res_1;
        *gptr<u16>(r0 + 2u) = u16(r3_3);
        r3_4 = *gptr<u16>(r2);
        u32 ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r3_4);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    call_005ea8f8(*global_0095decc, 0u, r2, r3_4);
    *frame.at<u32>(0) = r4;
    call_005ea964(*global_0095decc, frame.at(8).addr(), 0x857b98u, r7);  // (from the original)
    call_005ea8dc(*global_0095decc, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    call_005d6cc0(r5 + 0x24u, frame.at(8).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_005d6d28(r5 + 0x24u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *frame.at<u32>(8) = r6;
}

}  // namespace d_006a2ca4
GUEST_EXPORT_FRAMED(0x006a2ca4, d_006a2ca4::f_006a2ca4, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_006a3988: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a3988 {

inline constexpr guest::Function<0x001323bc, u32(u32)> call_001323bc;  // (from the original)
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32)> call_00569e6c;  // (from the original)

u32 f_006a3988(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = call_001323bc(r0);
    frame.release();
    return call_00569e6c(r0_1, (r0 + 0x400u) + 0x104u, 1u);  // (from the original)
}

}  // namespace d_006a3988
GUEST_EXPORT(0x006a3988, d_006a3988::f_006a3988);

// f_006a3bd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a3bd4 {

inline constexpr guest::Function<0x00132364, u32(u32, u32, u32, u32)> call_00132364;  // (from the original)
inline constexpr guest::Function<0x001323b4, u32(u32)> call_001323b4;  // (from the original)
inline constexpr guest::Function<0x005d6bfc, u32(u32)> call_005d6bfc;  // (from the original)
inline constexpr guest::Function<0x005e2e04, u32(u32)> call_005e2e04;  // (from the original)

u32 f_006a3bd4(u32 r0) {
    call_00132364(r0 + 0x650u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_001323b4(r0 + 0x504u);  // (from the original)
    call_005d6bfc(r0 + 0x24u);  // (from the original)
    call_005e2e04(r0 + 0x124u);  // (from the original)
    call_005e2e04(r0 + 0x1e8u);  // (from the original)
    call_005e2e04(r0 + 0x2acu);  // (from the original)
    call_005e2e04(r0 + 0x370u);  // (from the original)
    call_005e2e04(r0 + 0x434u);  // (from the original)
    return 1u;
}

}  // namespace d_006a3bd4
GUEST_EXPORT_FRAMED(0x006a3bd4, d_006a3bd4::f_006a3bd4, 0x4010);  // pushes {r4, lr} first, as the original

// f_006a3cb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a3cb4 {

inline constexpr guest::Function<0x00567e24, u32(u32, u32)> call_00567e24;  // (from the original)

u32 f_006a3cb4(u32 r0) {
    return call_00567e24(r0 + 0x650u, 0x6a3cc0u);  // (from the original)
}

}  // namespace d_006a3cb4
GUEST_EXPORT(0x006a3cb4, d_006a3cb4::f_006a3cb4);

// f_006a3d54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a3d54 {

struct __attribute__((packed)) Local_006a3d54_ea_1 {
    u8 byte_0;
};
GUEST_OFFSET(Local_006a3d54_ea_1, byte_0, 0x0);  // (from the original)

struct __attribute__((packed)) Local_006a3d54_ea_2 {
    u8 byte_0;
};
GUEST_OFFSET(Local_006a3d54_ea_2, byte_0, 0x0);  // (from the original)

struct __attribute__((packed)) Local_006a3d54_ea_3 {
    u8 byte_0;
};
GUEST_OFFSET(Local_006a3d54_ea_3, byte_0, 0x0);  // (from the original)

struct __attribute__((packed)) Local_006a3d54_ea_4 {
    u8 byte_0;
};
GUEST_OFFSET(Local_006a3d54_ea_4, byte_0, 0x0);  // (from the original)

struct __attribute__((packed)) Local_006a3d54_ea_5 {
    u8 byte_0;
};
GUEST_OFFSET(Local_006a3d54_ea_5, byte_0, 0x0);  // (from the original)

struct __attribute__((packed)) Local_006a3d54_ea_6 {
    u8 byte_0;
};
GUEST_OFFSET(Local_006a3d54_ea_6, byte_0, 0x0);  // (from the original)

struct __attribute__((packed)) Local_006a3d54_ea_7 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006a3d54_ea_7, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006a3d54_ea_7, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> call_0056878c;  // (from the original)
inline constexpr guest::Function<0x00568a80, u32(u32, u32, u32, u32)> call_00568a80;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)
inline constexpr guest::Function<0x005d46dc, u32(u32, u32, u32, u32)> call_005d46dc;  // (from the original)
inline constexpr guest::Function<0x005d69bc, u32(u32, u32, u32, u32)> call_005d69bc;  // (from the original)

void f_006a3d54(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x20);  // the original's stack frame
    u32 r2_17 = 0;
    *frame.at<u32>(0) = r3;
    u32 r0_1 = r0 + 0x504u;  // (from the original)
    u32 r0_2 = call_0056878c(r0_1, 0x6a4000u, r2, r3);  // (from the original)
    *gptr<u8>(r0_2 + 0xb7u) = u8(u32(*gptr<u8>(r0_2 + 0xb7u)) & 0xfeu);  // (from the original)
    u32 r0_3 = call_0056878c(r0_1, 0x6a4008u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *gptr<u8>(r0_3 + 0xb7u) = u8(u32(*gptr<u8>(r0_3 + 0xb7u)) & 0xfeu);  // (from the original)
    u32 r0_4 = call_0056878c(r0_1, 0x6a4010u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *gptr<u8>(r0_4 + 0xb7u) = u8(u32(*gptr<u8>(r0_4 + 0xb7u)) & 0xfeu);  // (from the original)
    u32 r0_5 = call_0056878c(r0_1, 0x6a4018u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *gptr<u8>(r0_5 + 0xb7u) = u8(u32(*gptr<u8>(r0_5 + 0xb7u)) & 0xfeu);  // (from the original)
    u32 r0_6 = call_0056878c(r0_1, 0x6a4024u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *gptr<u8>(r0_6 + 0xb7u) = u8(u32(*gptr<u8>(r0_6 + 0xb7u)) & 0xfeu);  // (from the original)
    u32 r0_7 = call_0056878c(r0_1, 0x6a4030u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *gptr<u8>(r0_7 + 0xb7u) = u8(u32(*gptr<u8>(r0_7 + 0xb7u)) & 0xfeu);  // (from the original)
    u32 r0_8 = call_0056878c(r0_1, 0x6a403cu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *gptr<u8>(r0_8 + 0xb7u) = u8(u32(*gptr<u8>(r0_8 + 0xb7u)) & 0xfeu);  // (from the original)
    u32 r0_9 = call_0056878c(r0_1, 0x6a4044u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *gptr<u8>(r0_9 + 0xb7u) = u8(u32(*gptr<u8>(r0_9 + 0xb7u)) & 0xfeu);  // (from the original)
    u32 r0_10 = call_0056878c(r0_1, 0x6a4050u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *gptr<u8>(r0_10 + 0xb7u) = u8(u32(*gptr<u8>(r0_10 + 0xb7u)) & 0xfeu);  // (from the original)
    u32 r0_11 = call_0056878c(r0_1, 0x6a4058u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r1_1 = u32(*gptr<u8>(r0_11 + 0xb7u)) & 0xfeu;  // (from the original)
    *gptr<u8>(r0_11 + 0xb7u) = u8(r1_1);  // (from the original)
    u32 r0_12 = call_005d46dc(r0_11, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r2_11 = guest::cpu()->r[2];
    u32 r3_11 = guest::cpu()->r[3];
    if (r0_12 == 0) {
        u32 r0_13 = call_00568a80(r0_1, 0x6a4078u, r2_11, r3_11);  // (from the original)
        gptr<Local_006a3d54_ea_1> ea_1 = gptr<Local_006a3d54_ea_1>(r0_13 + 0xb7u);  // (from the original)
        ea_1->byte_0 = u8(u32(ea_1->byte_0) & 0xfeu | 1u);  // (from the original)
        u32 r0_14 = call_00568a80(r0_1, 0x6a4084u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        gptr<Local_006a3d54_ea_2> ea_2 = gptr<Local_006a3d54_ea_2>(r0_14 + 0xb7u);  // (from the original)
        ea_2->byte_0 = u8(u32(ea_2->byte_0) & 0xfeu | 1u);  // (from the original)
        u32 r0_15 = call_00568a80(r0_1, 0x6a4090u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        gptr<Local_006a3d54_ea_3> ea_3 = gptr<Local_006a3d54_ea_3>(r0_15 + 0xb7u);  // (from the original)
        ea_3->byte_0 = u8(u32(ea_3->byte_0) & 0xfeu | 1u);  // (from the original)
        u32 r0_16 = call_00568a80(r0_1, 0x6a409cu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        gptr<Local_006a3d54_ea_4> ea_4 = gptr<Local_006a3d54_ea_4>(r0_16 + 0xb7u);  // (from the original)
        ea_4->byte_0 = u8(u32(ea_4->byte_0) & 0xfeu | 1u);  // (from the original)
        *frame.at<u32>(0) = r0_16;
        call_005d69bc(r0 + 0x24u, r0_13, r0_14, r0_15);  // (from the original)
        u32 r0_18 = call_00568a80(r0_1, 0x6a4060u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        *gptr<u8>(r0_18 + 0xb7u) = u8(u32(*gptr<u8>(r0_18 + 0xb7u)) & 0xfeu);  // (from the original)
        u32 r0_19 = call_00568a80(r0_1, 0x6a406cu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r2_17 = guest::cpu()->r[2];
        *gptr<u8>(r0_19 + 0xb7u) = u8(u32(*gptr<u8>(r0_19 + 0xb7u)) & 0xfeu);  // (from the original)
    } else {
        u32 r0_20 = call_00568a80(r0_1, 0x6a4060u, r2_11, r3_11);  // (from the original)
        gptr<Local_006a3d54_ea_5> ea_5 = gptr<Local_006a3d54_ea_5>(r0_20 + 0xb7u);  // (from the original)
        ea_5->byte_0 = u8(u32(ea_5->byte_0) & 0xfeu | 1u);  // (from the original)
        u32 r0_21 = call_00568a80(r0_1, 0x6a406cu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        gptr<Local_006a3d54_ea_6> ea_6 = gptr<Local_006a3d54_ea_6>(r0_21 + 0xb7u);  // (from the original)
        ea_6->byte_0 = u8(u32(ea_6->byte_0) & 0xfeu | 1u);  // (from the original)
        *frame.at<u32>(0) = 0;
        call_005d69bc(r0 + 0x24u, r0_20, 0u, r0_21);  // (from the original)
        u32 r0_23 = call_00568a80(r0_1, 0x6a4078u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        *gptr<u8>(r0_23 + 0xb7u) = u8(u32(*gptr<u8>(r0_23 + 0xb7u)) & 0xfeu);  // (from the original)
        u32 r0_24 = call_00568a80(r0_1, 0x6a4084u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        *gptr<u8>(r0_24 + 0xb7u) = u8(u32(*gptr<u8>(r0_24 + 0xb7u)) & 0xfeu);  // (from the original)
        u32 r0_25 = call_00568a80(r0_1, 0x6a4090u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        *gptr<u8>(r0_25 + 0xb7u) = u8(u32(*gptr<u8>(r0_25 + 0xb7u)) & 0xfeu);  // (from the original)
        u32 r0_26 = call_00568a80(r0_1, 0x6a409cu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r2_17 = guest::cpu()->r[2];
        *gptr<u8>(r0_26 + 0xb7u) = u8(u32(*gptr<u8>(r0_26 + 0xb7u)) & 0xfeu);  // (from the original)
    }
    gptr<Local_006a3d54_ea_7> ea_7 = gptr<Local_006a3d54_ea_7>(r0 + 0x940u);  // (from the original)
    ea_7->word_0 = 0;
    ea_7->word_4 = 0;
    u32 r3_22 = *frame.at<u32>(0);
    frame.release();
    call_00568c10(r0_1, 0u, r2_17, r3_22);
    return;
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
    u32 r2_1 = arg0->word_14;
    u32 r12 = 3u;
    u32 r1 = r2_1 - 0x124u;  // (from the original)
    u32 r2 = *gptr<u32>(r2_1 + 4u);
    for (;;) {
        if (!(r1 != r0 - 0x114u)) {  // (from the original)
            break;
        }
        *gptr<u8>(r1 + 0x120u) = u8(r12);  // (from the original)
        r1 = r2 - 0x124u;  // (from the original)
        r2 = *gptr<u32>(r2 + 4u);
        guest::preempt();
    }
    arg0->byte_e25 = 1;
    guest::cpu()->r[1] = 1u;
}

}  // namespace d_006a42ac
GUEST_EXPORT(0x006a42ac, d_006a42ac::f_006a42ac);

// f_006a4f98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a4f98 {

inline constexpr guest::Function<0x006a42e4, u32(u32, u32, u32, u32)> call_006a42e4;  // (from the original)

void f_006a4f98(u32 r0) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    *frame.at<u32>(4) = 0x6a4fe0;  // (from the original)
    *frame.at<u32>(0) = 0x9047f8;  // (from the original)
    call_006a42e4(r0, frame.at(0).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
    *frame.at<u32>(4) = 0x6a4fec;  // (from the original)
    *frame.at<u32>(0) = 0x9047f8;  // (from the original)
    call_006a42e4(r0, frame.at(0).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_006a4f98
GUEST_EXPORT_FRAMED(0x006a4f98, d_006a4f98::f_006a4f98, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_006a51ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a51ec {

struct __attribute__((packed)) Local_006a51ec_r0_8 {
    u8 unknown_0[0xa];  // (not used here)
    u8 byte_a;
};
GUEST_OFFSET(Local_006a51ec_r0_8, byte_a, 0xa);  // (from the original)

inline constexpr guest::Function<0x001b19dc, u32(u32, u32)> call_001b19dc;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x0070b334, u32(u32, u32)> call_0070b334;  // (from the original)

u32 f_006a51ec(u32 r0, u32 r1) {
    u32 r0_1 = call_002fae84(r0);
    u32 r0_3 = call_001b19dc(r0_1 + 0x6e224u, r1);  // (from the original)
    u32 r0_4 = call_002fb328(r0_3, guest::cpu()->r[1]);
    u32 r0_6 = call_0070b334(r0_4 + 0x6e2a4u, guest::cpu()->r[1]);  // (from the original)
    if (r0_6 == 0) {
        return r0_6;
    }
    u32 r0_7 = call_002fae84(r0_6);
    gptr<Local_006a51ec_r0_8> r0_8 = gptr<Local_006a51ec_r0_8>(r0_7 + 0x6214fu);  // (from the original)
    u32 r1_4 = u32(r0_8->byte_a) & ~0x80u;  // (from the original)
    r0_8->byte_a = u8(r1_4);
    guest::cpu()->r[1] = r1_4;
    return r0_8.addr();
}

}  // namespace d_006a51ec
GUEST_EXPORT_FRAMED(0x006a51ec, d_006a51ec::f_006a51ec, 0x4010);  // pushes {r4, lr} first, as the original

// f_006a5928: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a5928 {

inline guest::global<u8, 0x00952641> global_00952641;  // (from the original)
inline guest::global<u32, 0x00952644> global_00952644;  // (from the original)
inline guest::global<u32, 0x00952648> global_00952648;  // (from the original)
inline guest::global<u32, 0x0095264c> global_0095264c;  // (from the original)
inline guest::global<u32, 0x00952650> global_00952650;  // (from the original)
inline guest::global<u32, 0x00952654> global_00952654;  // (from the original)
inline guest::global<u32, 0x00952658> global_00952658;  // (from the original)
inline guest::global<u32, 0x0095265c> global_0095265c;  // (from the original)
inline guest::global<u32, 0x00952660> global_00952660;  // (from the original)
inline guest::global<u32, 0x00952664> global_00952664;  // (from the original)
inline guest::global<u32, 0x00952668> global_00952668;  // (from the original)
inline guest::global<u32, 0x00952c7c> global_00952c7c;  // (from the original)
inline constexpr guest::Function<0x001aa440, u32(u32, u32, u32, u32)> call_001aa440;  // (from the original)
inline constexpr guest::Function<0x001c8290, u32(u32, u32, u32, u32)> call_001c8290;  // (from the original)
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> call_002fd108;  // (from the original)
inline constexpr guest::Function<0x006e4a48, u32(u32, u32, u32, u32)> call_006e4a48;  // (from the original)

void f_006a5928(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r0_1 = call_002fd108(0x18u, *global_00952c7c, 4u, r3);  // (from the original)
    *frame.at<u8>(4) = 0;
    *frame.at<u8>(5) = 0;
    *frame.at<u8>(6) = 0;
    *frame.at<u8>(7) = 0;
    *frame.at<u32>(0) = 0;
    u32 r0_2 = call_001aa440(r0_1, 0u, frame.at(4).addr(), 0u);
    u32 r1_2 = guest::cpu()->r[1];
    *global_00952644 = r0_2;
    if (r0_2 != 0) {
        u32 r0_3 = call_002fd108(0x18u, *global_00952c7c, 4u, guest::cpu()->r[3]);  // (from the original)
        *frame.at<u8>(4) = 0;
        *frame.at<u8>(5) = 0xff;  // (from the original)
        *frame.at<u8>(6) = 0xff;  // (from the original)
        *frame.at<u8>(7) = 0xff;  // (from the original)
        *frame.at<u32>(0) = 0;
        u32 r0_4 = call_001aa440(r0_3, 0u, frame.at(4).addr(), 0u);
        r1_2 = guest::cpu()->r[1];
        *global_00952648 = r0_4;
        if (r0_4 != 0) {
            u32 r0_5 = call_002fd108(0x18u, *global_00952c7c, 4u, guest::cpu()->r[3]);  // (from the original)
            *frame.at<u8>(4) = 0;
            *frame.at<u8>(5) = 0xff;  // (from the original)
            *frame.at<u8>(6) = 0xff;  // (from the original)
            *frame.at<u8>(7) = 0xff;  // (from the original)
            *frame.at<u32>(0) = 0;
            u32 r0_6 = call_001aa440(r0_5, 0u, frame.at(4).addr(), 1u);
            r1_2 = guest::cpu()->r[1];
            *global_0095264c = r0_6;
            if (r0_6 != 0) {
                u32 r0_7 = call_002fd108(0x14u, *global_00952c7c, 4u, guest::cpu()->r[3]);  // (from the original)
                u32 r0_8 = call_006e4a48(r0_7, 0u, 0u, guest::cpu()->r[3]);
                r1_2 = guest::cpu()->r[1];
                *global_00952650 = r0_8;
                if (r0_8 != 0) {
                    u32 r0_9 = call_002fd108(0x10u, *global_00952c7c, 4u, guest::cpu()->r[3]);  // (from the original)
                    u32 r0_10 = call_001c8290(r0_9, 0u, 0u, guest::cpu()->r[3]);
                    r1_2 = guest::cpu()->r[1];
                    *global_00952654 = r0_10;
                    if (r0_10 != 0) {
                        u32 r0_11 = call_002fd108(0x18u, *global_00952c7c, 4u, guest::cpu()->r[3]);  // (from the original)
                        *frame.at<u8>(4) = 0;
                        *frame.at<u8>(5) = 0;
                        *frame.at<u8>(6) = 0;
                        *frame.at<u8>(7) = 0;
                        *frame.at<u32>(0) = 0;
                        u32 r0_12 = call_001aa440(r0_11, 1u, frame.at(4).addr(), 0u);
                        r1_2 = guest::cpu()->r[1];
                        *global_00952658 = r0_12;
                        if (r0_12 != 0) {
                            u32 r0_13 = call_002fd108(0x18u, *global_00952c7c, 4u, guest::cpu()->r[3]);  // (from the original)
                            *frame.at<u8>(4) = 0;
                            *frame.at<u8>(5) = 0xff;  // (from the original)
                            *frame.at<u8>(6) = 0xff;  // (from the original)
                            *frame.at<u8>(7) = 0xff;  // (from the original)
                            *frame.at<u32>(0) = 0;
                            u32 r0_14 = call_001aa440(r0_13, 1u, frame.at(4).addr(), 0u);
                            r1_2 = guest::cpu()->r[1];
                            *global_0095265c = r0_14;
                            if (r0_14 != 0) {
                                u32 r0_15 = call_002fd108(0x18u, *global_00952c7c, 4u, guest::cpu()->r[3]);  // (from the original)
                                *frame.at<u8>(4) = 0;
                                *frame.at<u8>(5) = 0xff;  // (from the original)
                                *frame.at<u8>(6) = 0xff;  // (from the original)
                                *frame.at<u8>(7) = 0xff;  // (from the original)
                                *frame.at<u32>(0) = 0;
                                u32 r0_16 = call_001aa440(r0_15, 1u, frame.at(4).addr(), 1u);
                                r1_2 = guest::cpu()->r[1];
                                *global_00952660 = r0_16;
                                if (r0_16 != 0) {
                                    u32 r0_17 = call_002fd108(0x10u, *global_00952c7c, 4u, 1u);  // (from the original)
                                    u32 r0_18 = call_001c8290(r0_17, 1u, 0u, 1u);
                                    r1_2 = guest::cpu()->r[1];
                                    *global_00952664 = r0_18;
                                    if (r0_18 != 0) {
                                        *global_00952641 = 0;
                                        *global_00952668 = 0;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    guest::cpu()->r[1] = r1_2;
}

}  // namespace d_006a5928
GUEST_EXPORT_FRAMED(0x006a5928, d_006a5928::f_006a5928, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_006a5b88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a5b88 {

inline guest::global<u32, 0x0094e4b8> global_0094e4b8;  // (from the original)
inline guest::global<u8, 0x00952641> global_00952641;  // (from the original)
inline guest::global<u32, 0x00952668> global_00952668;  // (from the original)
inline constexpr guest::Function<0x00565f00, u32(u32, u32, u32, u32)> call_00565f00;  // (from the original)
inline constexpr guest::Function<0x0058d5a0, u32(u32)> call_0058d5a0;  // (from the original)
inline constexpr guest::Function<0x0076f0cc, u32(u32)> call_0076f0cc;  // (from the original)
inline constexpr guest::Function<0x0076f1b4, u32(u32, u32, u32, u32)> call_0076f1b4;  // (from the original)

u32 f_006a5b88(u32 r0) {
    u32 r0_5 = 0;
    *global_00952641 = 1;
    *global_00952668 = r0;
    u32 r0_1 = *global_0094e4b8;
    if (r0_1 != 0) {
        u32 r0_2 = call_0076f1b4(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        if (r0_2 != 0) {
            u32 r0_4 = call_0076f0cc(*global_0094e4b8);
            if (r0_4 == 0) {
                return 1u;
            }
        }
    }
    r0_5 = call_00565f00(uxth(r0), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_5 != 0) {
        call_0058d5a0(r0_5);
        *global_00952641 = 0;
        r0_5 = 1u;
    }
    return r0_5;
}

}  // namespace d_006a5b88
GUEST_EXPORT_FRAMED(0x006a5b88, d_006a5b88::f_006a5b88, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006a5c00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a5c00 {

inline guest::global<u8, 0x00952641> global_00952641;  // (from the original)
inline constexpr guest::Function<0x00565f74, u32(u32, u32, u32, u32)> call_00565f74;  // (from the original)
inline constexpr guest::Function<0x0058d6bc, u32(u32, u32)> call_0058d6bc;  // (from the original)

u32 f_006a5c00(u32 r0, u32 r1) {
    u32 r0_2 = call_00565f74(uxth(r0), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_2 == 0) {
        return r0_2;
    }
    *global_00952641 = 0;
    call_0058d6bc(0u, 0x952640u);  // (from the original)
    return r0_2;
}

}  // namespace d_006a5c00
GUEST_EXPORT_FRAMED(0x006a5c00, d_006a5c00::f_006a5c00, 0x4010);  // pushes {r4, lr} first, as the original

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
    u32 r1_1 = r1 << 5;
    arg0->word_4 = std::bit_cast<u32>(std::bit_cast<float>(*global_006a5e00));
    float S0_1 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r1_1))));
    float S1_1 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r2 << 5))));
    arg0->word_0 = std::bit_cast<u32>(S0_1);
    arg0->word_8 = std::bit_cast<u32>(S1_1);
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
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
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r4 = 0;
    u32 r1_1 = 0;
    u32 r3_12 = 0;
    u32 r0_24 = 0;
    u32 r1_9 = 0;
    u32 r2_15 = 0;
    u32 r3_18 = 0;
    u32 r8 = 0x9b4a24u;  // (from the original)
    u32 r9 = *gptr<u32>(r8 + 4u);
    u32 r0_1 = call_002fae84(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    u32 r7 = r0_1 + 0x53400u;  // (from the original)
    u32 r6 = 0u;
    do {
        r4 = 0u;
        do {
            u32 r0_2 = call_00317148(r9, r4, r6, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_2 != 0) {
                u32 r0_3 = call_0075db98(r7, r4, r6, r3);
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                *gptr<u16>(r0_2) = u16(u32(*gptr<u16>(r0_3)));
            }
            r4 += 1u;
            guest::preempt();
        } while (r4 < 7u);
        r6 += 1u;
        guest::preempt();
    } while (r6 < 6u);
    u32 r5 = 0u;
    do {
        r4 = 0u;
        do {
            u32 r0_4 = call_00613704(r4, r5, r2, r3);
            r1_1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_4 != 0) {
                u32 r0_5 = call_002faea4(r7, r4, r5, r3);
                u32 r0_6 = call_00317148(r9, r4 + 1u, r5 + 1u, guest::cpu()->r[3]);
                r1_1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_6 != 0) {
                    call_0057bc20(r0_6, r0_5, 0u, r3);
                    r1_1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                }
            }
            r4 += 1u;
            guest::preempt();
        } while (r4 < 5u);
        r5 += 1u;
        guest::preempt();
    } while (r5 < 4u);
    u32 r0_7 = call_00613758(r7, r1_1, r2, r3);
    *gptr<u32>(r9 + 0x28u) = r0_7;  // (from the original)
    u32 r0_8 = call_006f9e94(1u, r0_7, guest::cpu()->r[2], guest::cpu()->r[3]);
    call_006a6f50(r0_8, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_0024246c(0u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r3 = guest::cpu()->r[3];
    r6 = 2u;
    u32 r11 = 0u;
    u32 r10 = 1u;
    do {
        u32 r4_1 = r6 & 0xffu;  // (from the original)
        r7 = *gptr<u32>(r8 + (r4_1 << 2));
        u32 r0_9 = call_00317148(r7, 0u, 0u, r3);
        r3 = guest::cpu()->r[3];
        r9 = r0_9;
        if (r0_9 != 0) {
            u32 r0_10 = call_006fa728(r4_1, guest::cpu()->r[1], guest::cpu()->r[2], r3);
            u32 r0_11 = call_002fb328(r0_10, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            u32 r0_13 = call_0030fbb4(r0_11 + 0x5d900u, r0_10, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            u32 r0_14 = call_006fb0cc(r4_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            u32 r0_15 = call_006fae98(r0_13, r0_14, guest::cpu()->r[2], guest::cpu()->r[3]);
            *frame.at<u32>(4) = r0_15;
            *gptr<u16>(r9) = u16(r0_15);
            u32 r0_16 = call_0030512c(r0_13, r0_14, guest::cpu()->r[2], guest::cpu()->r[3]);
            r5 = 0u;
            *frame.at<u32>(8) = r0_16;
            do {
                r4 = 0u;
                do {
                    u32 r0_18 = call_00720358(*frame.at<u32>(8), r4, r5, 0u);
                    *frame.at<u32>(0) = r11;
                    call_0057bce0(r9, r0_18, r4 + 3u, r5 + 4u);
                    r4 += 1u;
                    guest::preempt();
                } while (r4 < 0xau);  // (from the original)
                r5 += 1u;
                guest::preempt();
            } while (r5 < 0xau);  // (from the original)
            r5 = 0u;
            do {
                r4 = 0u;
                do {
                    u32 r0_20 = call_00720358(*frame.at<u32>(8), r4, r5, 1u);
                    *frame.at<u32>(0) = r10;
                    call_0057bce0(r9, r0_20, r4 + 4u, r5 + 5u);
                    r3_12 = guest::cpu()->r[3];
                    r4 += 1u;
                    guest::preempt();
                } while (r4 < 8u);
                r5 += 1u;
                guest::preempt();
            } while (r5 < 8u);
            u32 r0_21 = call_0075291c(r7, 0u, 0u, r3_12);
            r3 = guest::cpu()->r[3];
            if (r0_21 != 0) {
                u32 r0_22 = call_00304530(r0_21, guest::cpu()->r[1], guest::cpu()->r[2], r3);
                u32 r0_23 = call_001c2074(r0_22, *frame.at<u32>(4), guest::cpu()->r[2], guest::cpu()->r[3]);
                r3 = guest::cpu()->r[3];
                if (r0_23 != 0) {
                    call_006a92f4(r0_21, r0_23, 0xa00u, r3);  // (from the original)
                    r3 = guest::cpu()->r[3];
                }
            }
        }
        r6 += 1u;
        guest::preempt();
    } while (r6 < 0x1au);  // (from the original)
    r6 = 0x1au;  // (from the original)
    do {
        u32 r4_2 = r6 & 0xffu;  // (from the original)
        r7 = *gptr<u32>(r8 + (r4_2 << 2));
        r0_24 = call_00317148(r7, 0u, 0u, r3);
        r1_9 = guest::cpu()->r[1];
        r2_15 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r9 = r0_24;
        if (r0_24 != 0) {
            r10 = uxth(r6 + 0x13du);  // (from the original)
            *gptr<u16>(r9) = u16(r10);
            u32 r0_25 = call_002fb328(r9, r10, r2_15, r3);
            u32 r0_26 = call_006f9db4(r4_2, 0xfff951c8u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            u32 r0_27 = call_0076ce3c(r0_25 + 0x80u - 0xfff951c8u, r0_26, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            r5 = 0u;
            r11 = r5;
            *frame.at<u32>(4) = r0_27 + 2u;
            do {
                r4 = 0u;
                do {
                    u32 r0_29 = call_00720358(*frame.at<u32>(4), r4, r5, 0u);
                    *frame.at<u32>(0) = r11;
                    call_0057bce0(r9, r0_29, r4 + 3u, r5 + 4u);
                    r4 += 1u;
                    guest::preempt();
                } while (r4 < 0xau);  // (from the original)
                r5 += 1u;
                guest::preempt();
            } while (r5 < 0xau);  // (from the original)
            r5 = 0u;
            r11 = 1u;
            do {
                r4 = 0u;
                do {
                    u32 r0_31 = call_00720358(*frame.at<u32>(4), r4, r5, 1u);
                    *frame.at<u32>(0) = r11;
                    call_0057bce0(r9, r0_31, r4 + 4u, r5 + 5u);
                    r3_18 = guest::cpu()->r[3];
                    r4 += 1u;
                    guest::preempt();
                } while (r4 < 8u);
                r5 += 1u;
                guest::preempt();
            } while (r5 < 8u);
            r0_24 = call_0075291c(r7, 0u, 0u, r3_18);
            r1_9 = guest::cpu()->r[1];
            r2_15 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            u32 r4_3 = r0_24;
            if (r0_24 != 0) {
                u32 r0_32 = call_00304530(r0_24, r1_9, r2_15, r3);
                r0_24 = call_001c2074(r0_32, r10, guest::cpu()->r[2], guest::cpu()->r[3]);
                r2_15 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                r1_9 = r0_24;
                if (r0_24 != 0) {
                    r0_24 = call_006a92f4(r4_3, r1_9, 0xa00u, r3);  // (from the original)
                    r1_9 = guest::cpu()->r[1];
                    r2_15 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                }
            }
        }
        r6 += 1u;
        guest::preempt();
    } while (r6 < 0x1eu);  // (from the original)
    u32 r0_33 = call_002fae84(r0_24, r1_9, r2_15, r3);
    call_002e3bd4(r0_33 + 0x6fe36u, 0x6fe36u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    return 1u;
}

}  // namespace d_006a6408
GUEST_EXPORT_FRAMED(0x006a6408, d_006a6408::f_006a6408, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_006a69a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a69a8 {

inline guest::global<u32, 0x009b4a24> global_009b4a24;  // (from the original)

u32 f_006a69a8() {
    u32 r0_1 = *global_009b4a24;
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
inline constexpr guest::Function<0x0022d64c, u32(u32, u32)> call_0022d64c;  // (from the original)
inline constexpr guest::Function<0x002b836c, u32(u32, u32, u32, u32)> call_002b836c;  // (from the original)

void f_006a69c0(u32 r0, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    call_002b836c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    call_0022d64c(*global_009b4aa0, r0);
    u32 r0_2 = *gptr<u32>(r0 + 0x10u);  // (from the original)
    frame.release();
    guest::call_address<u32>(0x114b15u, r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    return;
}

}  // namespace d_006a69c0
GUEST_EXPORT(0x006a69c0, d_006a69c0::f_006a69c0);

// f_006a6b48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a6b48 {

inline constexpr guest::Function<0x002ffb64, u32(u32)> call_002ffb64;  // (from the original)
inline constexpr guest::Function<0x005817f0, u32(u32, u32, u32, u32)> call_005817f0;  // (from the original)
inline constexpr guest::Function<0x00581a18, u32(u32)> call_00581a18;  // (from the original)

u32 f_006a6b48() {
    u32 r0_4 = 0;
    u32 r7 = 0u;
    u32 r6 = 0x9b4a24u;  // (from the original)
    u32 r0_1 = *gptr<u32>(r6 + 0x7cu);  // (from the original)
    if (r0_1 != 0) {
        call_005817f0(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r0_2 = *gptr<u32>(r6 + 0x7cu);  // (from the original)
        if (r0_2 != 0) {
            u32 r0_3 = call_00581a18(r0_2);
            call_002ffb64(r0_3);
        }
        *gptr<u32>(r6 + 0x7cu) = r7;  // (from the original)
    }
    u32 r4 = 0x20u;  // (from the original)
    do {
        u32 r5_1 = r4 & 0xffu;  // (from the original)
        r0_4 = *gptr<u32>(r6 + (r5_1 << 2));
        if (r0_4 != 0) {
            call_005817f0(r0_4, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            r0_4 = *gptr<u32>(r6 + (r5_1 << 2));
            if (r0_4 != 0) {
                u32 r0_5 = call_00581a18(r0_4);
                r0_4 = call_002ffb64(r0_5);
            }
            *gptr<u32>(r6 + (r5_1 << 2)) = r7;
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0x2au);  // (from the original)
    return r0_4;
}

}  // namespace d_006a6b48
GUEST_EXPORT_FRAMED(0x006a6b48, d_006a6b48::f_006a6b48, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_006a6cc8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a6cc8 {

inline guest::global<u32, 0x009526f8> global_009526f8;  // (from the original)
inline constexpr guest::Function<0x001348cc, u32(u32, u32, u32, u32)> call_001348cc;  // (from the original)

void f_006a6cc8(u32 r0) {
    call_001348cc(*global_009526f8, r0, 0x102au, guest::cpu()->r[3]);  // (from the original)
    return;  // (from the original)
}

}  // namespace d_006a6cc8
GUEST_EXPORT(0x006a6cc8, d_006a6cc8::f_006a6cc8);

// f_006a7174: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a7174 {

inline guest::global<u32, 0x009526f4> global_009526f4;  // (from the original)
inline guest::global<u32, 0x009526f8> global_009526f8;  // (from the original)
inline guest::global<u32, 0x009b4a9c> global_009b4a9c;  // (from the original)
inline constexpr guest::Function<0x0012eacc, u32(u32, u32)> call_0012eacc;  // (from the original)
inline constexpr guest::Function<0x002ffb64, u32(u32, u32)> call_002ffb64;  // (from the original)
inline constexpr guest::Function<0x005817f0, u32(u32, u32, u32, u32)> call_005817f0;  // (from the original)
inline constexpr guest::Function<0x00581a18, u32(u32, u32)> call_00581a18;  // (from the original)

u32 f_006a7174(u32 r0_unused, u32 r1) {
    u32 r0_1 = *global_009b4a9c;
    if (r0_1 != 0) {
        r1 = *global_009526f4;
        if (r1 != 0) {
            call_005817f0(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            u32 r0_2 = *global_009b4a9c;
            if (r0_2 != 0) {
                u32 r0_3 = call_00581a18(r0_2, r1);
                call_002ffb64(r0_3, guest::cpu()->r[1]);
                r1 = guest::cpu()->r[1];
            }
            *global_009b4a9c = *global_009526f4;
            *global_009526f4 = 0;
            r0_1 = *global_009526f8;
            if (r0_1 != 0) {
                u32 r0_4 = call_0012eacc(r0_1, r1);
                r0_1 = call_002ffb64(r0_4, guest::cpu()->r[1]);
                r1 = guest::cpu()->r[1];
            }
            *global_009526f8 = 0;
        }
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_006a7174
GUEST_EXPORT_FRAMED(0x006a7174, d_006a7174::f_006a7174, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006a71ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a71ec {

inline guest::global<u32, 0x009526f4> global_009526f4;  // (from the original)
inline guest::global<u32, 0x009526f8> global_009526f8;  // (from the original)
inline guest::global<u32, 0x00952c50> global_00952c50;  // (from the original)
inline guest::global<u32, 0x009b4a9c> global_009b4a9c;  // (from the original)
inline constexpr guest::Function<0x002025bc, u32(u32, u32, u32, u32)> call_002025bc;  // (from the original)
inline constexpr guest::Function<0x002ebce4, u32(u32, u32)> call_002ebce4;  // (from the original)
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32)> call_002fd108;  // (from the original)

void f_006a71ec(u32 r0_unused, u32 r1) {
    u32 r4_1 = *global_00952c50;
    if (r4_1 != 0) {
        *global_009526f4 = *global_009b4a9c;
        u32 r0_1 = call_002025bc(r4_1, 4u, 4u, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0_1 != 0) {
            *global_009b4a9c = r0_1;
            if (*global_009526f8 == 0) {
                u32 r0_2 = call_002fd108(0x102au, r4_1, 4u);  // (from the original)
                u32 r0_3 = call_002ebce4(r0_2, guest::cpu()->r[1]);
                r1 = guest::cpu()->r[1];
                *global_009526f8 = r0_3;
            }
        }
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_006a71ec
GUEST_EXPORT_FRAMED(0x006a71ec, d_006a71ec::f_006a71ec, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006a733c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a733c {

inline guest::global<u32, 0x006a7390> global_006a7390;  // (from the original)
inline guest::global<u32, 0x0085f2e8> global_0085f2e8;  // (from the original)
inline guest::global<u32, 0x0085f2ec> global_0085f2ec;  // (from the original)
inline constexpr guest::Function<0x006c78b8, u32(u32, u32, u32)> call_006c78b8;  // (from the original)

u32 f_006a733c(gptr<Float3> arg0, u32 r1, u32 r2) {
    float S1_1 = std::bit_cast<float>(*global_006a7390);
    arg0->v[0] = float(s32(std::bit_cast<u32>(std::bit_cast<float>(*global_0085f2e8 + (r1 << 5)))));
    arg0->v[1] = S1_1;
    float S0_1 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(*global_0085f2ec + (r2 << 5)))));
    arg0->v[2] = S0_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    u32 r0_1 = call_006c78b8(r1, r2, 0u);
    float S0_2 = guest::cpu()->s[0];
    arg0->v[1] = S0_2;
    guest::cpu()->s[0] = S0_2;
    return r0_1;
}

}  // namespace d_006a733c
GUEST_EXPORT_FRAMED(0x006a733c, d_006a733c::f_006a733c, 0x4010);  // pushes {r4, lr} first, as the original

// f_006a739c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a739c {

inline guest::global<u32, 0x006a7404> global_006a7404;  // (from the original)
inline guest::global<u32, 0x0085f2e8> global_0085f2e8;  // (from the original)
inline guest::global<u32, 0x0085f2ec> global_0085f2ec;  // (from the original)
inline constexpr guest::Function<0x006c7908, u32(u32, u32, u32, u32)> call_006c7908;  // (from the original)

u32 f_006a739c(gptr<Float3> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r6_1 = *global_0085f2e8;
    u32 r3_1 = *frame.at<u32>(0x18);  // (from the original)
    float S1_1 = std::bit_cast<float>(*global_006a7404);
    u32 r5_1 = r3_1 + (r2 << 4);
    arg0->v[0] = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r6_1 + (r3 + (r1 << 4) << 5)))));
    arg0->v[1] = S1_1;
    float S0_1 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(*global_0085f2ec + (r5_1 << 5)))));
    arg0->v[2] = S0_1;
    *frame.at<u32>(0) = 0;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    u32 r0_1 = call_006c7908(r1, r2, r3, r3_1);
    float S0_2 = guest::cpu()->s[0];
    arg0->v[1] = S0_2;
    guest::cpu()->s[0] = S0_2;
    return r0_1;
}

}  // namespace d_006a739c
GUEST_EXPORT_FRAMED(0x006a739c, d_006a739c::f_006a739c, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_006a7410: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a7410 {

inline guest::global<u32, 0x009526f8> global_009526f8;  // (from the original)
inline constexpr guest::Function<0x002e3bd4, u32(u32, u32, u32, u32)> call_002e3bd4;  // (from the original)

u32 f_006a7410() {
    call_002e3bd4(*global_009526f8, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return 1u;
}

}  // namespace d_006a7410
GUEST_EXPORT_FRAMED(0x006a7410, d_006a7410::f_006a7410, 0x4010);  // pushes {r4, lr} first, as the original

// f_006a742c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a742c {

inline guest::global<u32, 0x009526f8> global_009526f8;  // (from the original)
inline constexpr guest::Function<0x00114c9d, u32(u32, u32)> call_00114c9c;  // (from the original)
inline constexpr guest::Function<0x002e38b4, u32(u32, u32)> call_002e38b4;  // (from the original)
inline constexpr guest::Function<0x002e3bd4, u32(u32, u32)> call_002e3bd4;  // (from the original)
inline constexpr guest::Function<0x0055cabc, u32(u32, u32, u32, u32)> call_0055cabc;  // (from the original)
inline constexpr guest::Function<0x0055cb58, u32(u32, u32)> call_0055cb58;  // (from the original)
inline constexpr guest::Function<0x005d1ee0, u32(u32, u32)> call_005d1ee0;  // (from the original)

u32 f_006a742c(u32 r0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r1_1 = *global_009526f8;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    call_0055cabc(frame.at(0).addr(), r0, guest::cpu()->r[2], guest::cpu()->r[3]);
    call_002e38b4(*global_009526f8, frame.at(0).addr());
    call_002e3bd4(*global_009526f8, guest::cpu()->r[1]);
    u32 r0_5 = call_0055cb58(frame.at(0).addr(), guest::cpu()->r[1]);
    call_005d1ee0(r0_5, guest::cpu()->r[1]);
    u32 r0_7 = call_0055cb58(frame.at(0).addr(), guest::cpu()->r[1]);
    call_00114c9c(r0_7, guest::cpu()->r[1]);
    return 1u;
}

}  // namespace d_006a742c
GUEST_EXPORT_FRAMED(0x006a742c, d_006a742c::f_006a742c, 0x4010);  // pushes {r4, lr} first, as the original

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

struct __attribute__((packed)) Local_006a8280_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_006a8280_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006a8280_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_006a8280_ea_1, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_006a8280_r0_7 {
    u8 unknown_0[0x214];  // (not used here)
    u8 byte_214;
    u8 byte_215;
    u8 unknown_216[0x2];  // (not used here)
    u32 word_218;
};
GUEST_OFFSET(Local_006a8280_r0_7, byte_214, 0x214);  // (from the original)
GUEST_OFFSET(Local_006a8280_r0_7, byte_215, 0x215);  // (from the original)
GUEST_OFFSET(Local_006a8280_r0_7, word_218, 0x218);  // (from the original)

struct __attribute__((packed)) Local_006a8280_r4_2 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
    u8 byte_4;
    u8 byte_5;
};
GUEST_OFFSET(Local_006a8280_r4_2, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006a8280_r4_2, byte_1, 0x1);  // (from the original)
GUEST_OFFSET(Local_006a8280_r4_2, byte_2, 0x2);  // (from the original)
GUEST_OFFSET(Local_006a8280_r4_2, byte_3, 0x3);  // (from the original)
GUEST_OFFSET(Local_006a8280_r4_2, byte_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_006a8280_r4_2, byte_5, 0x5);  // (from the original)

inline constexpr guest::Function<0x002f74c8, u32(u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x00307040, u32(u32, u32, u32, u32)> call_00307040;  // (from the original)

u32 f_006a8280(gptr<Object_006a8280_0> arg0) {
    arg0->byte_0 = 0;
    arg0->byte_1 = 0;
    arg0->byte_2 = 0;
    arg0->byte_3 = 0;
    arg0->byte_4 = 0xff;  // (from the original)
    arg0->byte_5 = 0xff;  // (from the original)
    arg0->word_8 = 0xf;  // (from the original)
    arg0->word_14 = arg0.addr() + 0x28u;  // (from the original)
    arg0->word_18 = 0;
    arg0->word_1c = 0;
    arg0->word_c = 0xf;  // (from the original)
    arg0->word_10 = 0xe1;  // (from the original)
    u32 r4_1 = arg0.addr() + 0x20u;  // (from the original)
    arg0->word_20 = 0;
    arg0->word_24 = arg0.addr() + 0x11bcu;  // (from the original)
    u32 r0_2 = call_00301d0c(arg0.addr() + 0x28u, 0x274724u, 0x14u, 0xe1u);  // (from the original)
    u32 r0_3 = r0_2 + 0x1194u;  // (from the original)
    u32 r0_4 = call_00307040(r0_3, 0xe1u, r0_3 + 0x2cu, guest::cpu()->r[3]);  // (from the original)
    gptr<Local_006a8280_ea_1> ea_1 = gptr<Local_006a8280_ea_1>(r0_4 + 0x14u);  // (from the original)
    ea_1->word_0 = 0xf;  // (from the original)
    ea_1->word_4 = 0xf;  // (from the original)
    ea_1->word_8 = 0;
    gptr<Local_006a8280_r4_2> r4_2 = gptr<Local_006a8280_r4_2>(r0_4 - 0x11bcu);  // (from the original)
    *gptr<u32>(r0_4) = 0x8fa3a4;  // (from the original)
    *gptr<u32>(r0_4 + 0x20u) = 0;  // (from the original)
    *gptr<u32>(r0_4 + 0x24u) = 0;  // (from the original)
    *gptr<u32>(r0_4 + 0x28u) = 0;  // (from the original)
    r4_2->byte_2 = 0x10;  // (from the original)
    r4_2->byte_3 = 0x10;  // (from the original)
    r4_2->byte_4 = 0x51;  // (from the original)
    r4_2->byte_5 = 0x51;  // (from the original)
    u32 r0_5 = r4_2->byte_0;
    u32 r1_1 = r4_2->byte_1;
    u32 r3_2 = r4_2->byte_4;
    if (r0_5 < 0x10u) {  // (from the original)
        r0_5 = 0x10u;  // (from the original)
    } else if (r0_5 > 0x51u) {  // (from the original)
        r0_5 = r3_2;
    }
    r4_2->byte_0 = u8(r0_5);
    u32 r0_6 = r4_2->byte_3;
    u32 r2_2 = r4_2->byte_5;
    if (r1_1 < 0x10u) {  // (from the original)
        r1_1 = r0_6;
    } else if (r1_1 > 0x51u) {  // (from the original)
        r1_1 = r2_2;
    }
    gptr<Local_006a8280_r0_7> r0_7 = gptr<Local_006a8280_r0_7>(r4_2.addr() + 0x1000u);  // (from the original)
    r4_2->byte_1 = u8(r1_1);
    r0_7->byte_214 = 0;
    r0_7->byte_215 = 0;
    r0_7->word_218 = 0;
    u32 r0_8 = call_002f74c8(r0_7.addr());
    if (r0_8 == 1u) {
        r4_2->byte_4 = 0x51;  // (from the original)
        r4_2->byte_5 = 0x51;  // (from the original)
        r4_2->byte_2 = 0;
        r4_2->byte_3 = 0;
        u32 r0_9 = r4_2->byte_0;
        u32 r1_2 = r4_2->byte_1;
        if (r0_9 > 0x51u) {  // (from the original)
            r0_9 = 0x51u;  // (from the original)
        }
        r4_2->byte_0 = u8(r0_9);
        u32 r0_10 = r4_2->byte_5;
        if (r1_2 > 0x51u) {  // (from the original)
            r1_2 = r0_10;
        }
        r4_2->byte_1 = u8(r1_2);
    }
    return r4_2.addr();
}

}  // namespace d_006a8280
GUEST_EXPORT_FRAMED(0x006a8280, d_006a8280::f_006a8280, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_006a83fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a83fc {

inline guest::global<u32, 0x006a843c> global_006a843c;  // (from the original)
inline constexpr guest::Function<0x006a8598, u32(u32, u32, u32, u32)> call_006a8598;  // (from the original)

u32 f_006a83fc(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    float S0_1 = std::bit_cast<float>(*global_006a843c);
    *frame.at<u32>(8) = std::bit_cast<u32>(S0_1);
    *frame.at<u32>(0xc) = std::bit_cast<u32>(S0_1);  // (from the original)
    *frame.at<u32>(0x10) = std::bit_cast<u32>(S0_1);  // (from the original)
    *frame.at<u32>(0) = r2;
    *frame.at<u32>(4) = frame.at(8).addr();
    u32 r2_1 = *gptr<u32>(0x8653fcu + (r3 << 3));  // (from the original)
    guest::cpu()->s[0] = S0_1;
    call_006a8598(guest::cpu()->r[0], r3, r2_1, r1);
    return guest::cpu()->r[0];
}

}  // namespace d_006a83fc
GUEST_EXPORT_FRAMED(0x006a83fc, d_006a83fc::f_006a83fc, 0x4010);  // pushes {r4, lr} first, as the original

// f_006a8444: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a8444 {

inline constexpr guest::Function<0x006a8598, u32(u32, u32, u32, u32)> call_006a8598;  // (from the original)

u32 f_006a8444(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    *frame.at<u32>(0) = r2;
    *frame.at<u32>(4) = r3;
    u32 r1_1 = *frame.at<u32>(0x10);  // (from the original)
    call_006a8598(guest::cpu()->r[0], r1_1, *gptr<u32>(0x8653fcu + (r1_1 << 3)), r1);  // (from the original)
    return guest::cpu()->r[0];
}

}  // namespace d_006a8444
GUEST_EXPORT_FRAMED(0x006a8444, d_006a8444::f_006a8444, 0x4000);  // pushes {lr} first, as the original

// f_006a8474: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a8474 {

struct __attribute__((packed)) Object_006a8474_0 {
    u8 unknown_0[0x184];  // (not used here)
    u32 word_184;
};
GUEST_OFFSET(Object_006a8474_0, word_184, 0x184);  // (from the original)

struct __attribute__((packed)) Local_006a8474_r0_2 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Local_006a8474_r0_2, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_006a8474_r0_2, word_10, 0x10);  // (from the original)

inline constexpr guest::Function<0x00207190, u32(u32, u32, u32, u32)> call_00207190;  // (from the original)
inline constexpr guest::Function<0x002e5bec, u32(u32, u32)> call_002e5bec;  // (from the original)

void f_006a8474(gptr<Object_006a8474_0> arg0, u32 r1) {
    guest::StackFrame frame(0x30);  // the original's stack frame
    u32 r0_1 = arg0->word_184;
    gptr<Local_006a8474_r0_2> r0_2 = gptr<Local_006a8474_r0_2>(arg0.addr() + (r0_1 + (r0_1 << 1) << 3) + 4u);
    u32 r3_1 = r0_2->word_c;
    if (r3_1 == 0 || r0_2->word_10 != *gptr<u32>(r3_1 + 0xcu)) {  // (from the original)
        return;
    }
    call_00207190(frame.at(0).addr(), r1, guest::cpu()->r[2], 1u);
    u32 r0_4 = arg0->word_184;
    call_002e5bec(arg0.addr() + (r0_4 + (r0_4 << 1) << 3) + 4u, frame.at(0).addr());
}

}  // namespace d_006a8474
GUEST_EXPORT_FRAMED(0x006a8474, d_006a8474::f_006a8474, 0x4010);  // pushes {r4, lr} first, as the original

// f_006a84e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a84e8 {

inline guest::global<u32, 0x006a852c> global_006a852c;  // (from the original)
inline constexpr guest::Function<0x006a8598, u32(u32, u32, u32, u32)> call_006a8598;  // (from the original)

u32 f_006a84e8(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    float S0_1 = std::bit_cast<float>(*global_006a852c);
    *frame.at<u32>(8) = std::bit_cast<u32>(S0_1);
    *frame.at<u32>(0xc) = std::bit_cast<u32>(S0_1);  // (from the original)
    *frame.at<u32>(0x10) = std::bit_cast<u32>(S0_1);  // (from the original)
    *frame.at<u32>(0) = r2;
    *frame.at<u32>(4) = frame.at(8).addr();
    u32 r2_1 = *gptr<u32>(0x8653fcu + (r3 << 3) + 4u);  // (from the original)
    guest::cpu()->s[0] = S0_1;
    call_006a8598(guest::cpu()->r[0], r3, r2_1, r1);
    return guest::cpu()->r[0];
}

}  // namespace d_006a84e8
GUEST_EXPORT_FRAMED(0x006a84e8, d_006a84e8::f_006a84e8, 0x4010);  // pushes {r4, lr} first, as the original

// f_006a8534: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a8534 {

inline constexpr guest::Function<0x006a8598, u32(u32, u32, u32, u32)> call_006a8598;  // (from the original)

u32 f_006a8534(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r1_1 = *frame.at<u32>(0x10);  // (from the original)
    *frame.at<u32>(0) = r2;
    *frame.at<u32>(4) = r3;
    call_006a8598(guest::cpu()->r[0], r1_1, *gptr<u32>(0x8653fcu + (r1_1 << 3) + 4u), r1);  // (from the original)
    return guest::cpu()->r[0];
}

}  // namespace d_006a8534
GUEST_EXPORT_FRAMED(0x006a8534, d_006a8534::f_006a8534, 0x4000);  // pushes {lr} first, as the original

// f_006a8568: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a8568 {

struct __attribute__((packed)) Object_006a8568_0 {
    u8 unknown_0[0x188];  // (not used here)
    u32 word_188;
};
GUEST_OFFSET(Object_006a8568_0, word_188, 0x188);  // (from the original)

inline constexpr guest::Function<0x002e6450, u32(u32, u32, u32, u32)> call_002e6450;  // (from the original)

void f_006a8568(gptr<Object_006a8568_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r5 = r0;
    u32 r4 = 0u;
    arg0->word_188 = r1;
    do {
        call_002e6450(r5 + (r4 + (r4 << 1) << 3) + 4u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 0x10);  // (from the original)
}

}  // namespace d_006a8568
GUEST_EXPORT_FRAMED(0x006a8568, d_006a8568::f_006a8568, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006a8954: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a8954 {

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)

u32 f_006a8954(gptr<FootMark_rec> arg0) {
    arg0->word_0 = 0x8f8b60;  // (from the original)
    call_002f76ac(arg0.addr() + 4u, 0x2e6944u, 0x18u, 0x10u);  // (from the original)
    return arg0.addr();
}

}  // namespace d_006a8954
GUEST_EXPORT_FRAMED(0x006a8954, d_006a8954::f_006a8954, 0x4010);  // pushes {r4, lr} first, as the original

// f_006a8988: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a8988 {

struct __attribute__((packed)) Object_006a8988_0 {
    u8 unknown_0[0x18];  // (not used here)
    u32 word_18;
    u8 unknown_1c[0x24];  // (not used here)
    u32 word_40;
};
GUEST_OFFSET(Object_006a8988_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_006a8988_0, word_40, 0x40);  // (from the original)

inline guest::global<u32, 0x00952ae4> global_00952ae4;  // (from the original)
inline constexpr guest::Function<0x00125b38, u32(u32, u32, u32, u32)> call_00125b38;  // (from the original)
inline constexpr guest::Function<0x0031758c, u32(u32, u32, u32, u32)> call_0031758c;  // (from the original)

void f_006a8988(gptr<Object_006a8988_0> arg0, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    if (arg0->word_18 != 0) {
        return;
    }
    *frame.at<u32>(0xc) = 0x6a89f4;  // (from the original)
    *frame.at<u32>(8) = 0x9047f8;  // (from the original)
    *frame.at<u32>(0) = 1;
    *frame.at<u32>(4) = 0;
    call_0031758c(arg0.addr() + 0x3cu, 0x1080u, r1, frame.at(8).addr());  // (from the original)
    call_00125b38(arg0.addr() + 0x14u, *global_00952ae4, arg0->word_40, 0u);  // (from the original)
}

}  // namespace d_006a8988
GUEST_EXPORT_FRAMED(0x006a8988, d_006a8988::f_006a8988, 0x4010);  // pushes {r4, lr} first, as the original

// f_006a8a0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a8a0c {

struct __attribute__((packed)) Object_006a8a0c_0 {
    u8 unknown_0[0x28];  // (not used here)
    u32 word_28;
    u8 unknown_2c[0x1c];  // (not used here)
    u32 word_48;
};
GUEST_OFFSET(Object_006a8a0c_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_006a8a0c_0, word_48, 0x48);  // (from the original)

inline guest::global<u32, 0x00952ae8> global_00952ae8;  // (from the original)
inline constexpr guest::Function<0x00125b38, u32(u32, u32, u32, u32)> call_00125b38;  // (from the original)
inline constexpr guest::Function<0x0031758c, u32(u32, u32, u32, u32)> call_0031758c;  // (from the original)

u32 f_006a8a0c(gptr<Object_006a8a0c_0> arg0, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    if (arg0->word_28 != 0) {
        return 1u;
    }
    *frame.at<u32>(0xc) = 0x6a8a78;  // (from the original)
    *frame.at<u32>(8) = 0x9047f8;  // (from the original)
    *frame.at<u32>(0) = 1;
    *frame.at<u32>(4) = 0;
    call_0031758c(arg0.addr() + 0x44u, 0x4000u, r1, frame.at(8).addr());  // (from the original)
    u32 r0_3 = call_00125b38(arg0.addr() + 0x24u, *global_00952ae8, arg0->word_48, 0u);  // (from the original)
    return r0_3;
}

}  // namespace d_006a8a0c
GUEST_EXPORT_FRAMED(0x006a8a0c, d_006a8a0c::f_006a8a0c, 0x4010);  // pushes {r4, lr} first, as the original

// f_006a8a90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a8a90 {

inline constexpr guest::Function<0x0013864c, u32(u32, u32, u32, u32)> call_0013864c;  // (from the original)
inline constexpr guest::Function<0x002f747c, u32(u32, u32, u32, u32)> call_002f747c;  // (from the original)

void f_006a8a90(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    call_0013864c(r0 + 0x14u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    frame.release();
    call_002f747c(r0 + 0x3cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    return;
}

}  // namespace d_006a8a90
GUEST_EXPORT(0x006a8a90, d_006a8a90::f_006a8a90);

// f_006a8aac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a8aac {

struct __attribute__((packed)) Object_006a8aac_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u8 unknown_c[0x2c];  // (not used here)
    u32 word_38;
};
GUEST_OFFSET(Object_006a8aac_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_006a8aac_0, word_38, 0x38);  // (from the original)

inline guest::global<u32, 0x00952ae0> global_00952ae0;  // (from the original)
inline constexpr guest::Function<0x00125b38, u32(u32, u32, u32, u32)> call_00125b38;  // (from the original)
inline constexpr guest::Function<0x0031758c, u32(u32, u32, u32, u32)> call_0031758c;  // (from the original)

void f_006a8aac(gptr<Object_006a8aac_0> arg0, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    if (arg0->word_8 != 0) {
        return;
    }
    *frame.at<u32>(0xc) = 0x6a8b18;  // (from the original)
    *frame.at<u32>(8) = 0x9047f8;  // (from the original)
    *frame.at<u32>(0) = 1;
    *frame.at<u32>(4) = 0;
    call_0031758c(arg0.addr() + 0x34u, 0x1600u, r1, frame.at(8).addr());  // (from the original)
    call_00125b38(arg0.addr() + 4u, *global_00952ae0, arg0->word_38, 0u);
}

}  // namespace d_006a8aac
GUEST_EXPORT_FRAMED(0x006a8aac, d_006a8aac::f_006a8aac, 0x4010);  // pushes {r4, lr} first, as the original

// f_006a8b34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a8b34 {

inline constexpr guest::Function<0x0013864c, u32(u32, u32, u32, u32)> call_0013864c;  // (from the original)
inline constexpr guest::Function<0x002f747c, u32(u32, u32, u32, u32)> call_002f747c;  // (from the original)

u32 f_006a8b34(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    call_0013864c(r0 + 0x24u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    frame.release();
    return call_002f747c(r0 + 0x44u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_006a8b34
GUEST_EXPORT(0x006a8b34, d_006a8b34::f_006a8b34);

// f_006a8b50: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a8b50 {

inline constexpr guest::Function<0x0013864c, u32(u32, u32, u32, u32)> call_0013864c;  // (from the original)
inline constexpr guest::Function<0x002f747c, u32(u32, u32, u32, u32)> call_002f747c;  // (from the original)

void f_006a8b50(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    call_0013864c(r0 + 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    frame.release();
    call_002f747c(r0 + 0x34u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    return;
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

inline constexpr guest::Function<0x004bef3c, u32(u32, u32)> call_004bef3c;  // (from the original)

u32 f_006a8d28(gptr<Object_006a8d28_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r2_1 = arg0->word_254;
    u32 zf_1 = r2_1 == 0;
    if (!zf_1) {
        r0 = arg0->word_258;
        zf_1 = r0 == 0;
    }
    if (zf_1 || (u32(*gptr<u8>(r2_1 + 0xb7u)) & 1u) == 0 || (u32(*gptr<u8>(r0 + 0xb7u)) & 1u) == 0) {  // (from the original)
        return 0u;
    }
    return call_004bef3c(r0, guest::cpu()->r[1]);
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
inline constexpr guest::Function<0x006a5e04, u32(u32, u32, u32)> call_006a5e04;  // (from the original)

u32 f_006a97a0(gptr<Object_006a97a0_0> arg0, u32 r1, u32 r2) {
    arg0->word_0 = r1;
    arg0->word_4 = r2;
    arg0->word_8 = r1 * *global_0085f2c4;
    arg0->word_c = r2 * *global_0085f2c8;
    call_006a5e04((arg0.addr() + 0xcu) + 4u, r1, r2);  // (from the original)
    return 1u;
}

}  // namespace d_006a97a0
GUEST_EXPORT_FRAMED(0x006a97a0, d_006a97a0::f_006a97a0, 0x4010);  // pushes {r4, lr} first, as the original

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
    arg0->word_0 = 0;
    arg0->word_4 = 0;
    arg0->word_8 = 0;
    arg0->word_c = 0;
    call_002f825c(arg0.addr() + 0x1cu, 0xa00u, r2, r3);  // (from the original)
    u32 r0_3 = call_00301d0c(arg0.addr() + 0x1cu, 0x60d240u, 0xau, 0x100u);  // (from the original)
    return r0_3 - 0x1cu;  // (from the original)
}

}  // namespace d_006a9834
GUEST_EXPORT_FRAMED(0x006a9834, d_006a9834::f_006a9834, 0x4010);  // pushes {r4, lr} first, as the original

// f_006a987c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a987c {

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)

u32 f_006a987c(u32 r0) {
    call_002f76ac(r0 + 0x1cu, 0x60d260u, 0xau, 0x100u);  // (from the original)
    return r0;
}

}  // namespace d_006a987c
GUEST_EXPORT_FRAMED(0x006a987c, d_006a987c::f_006a987c, 0x4010);  // pushes {r4, lr} first, as the original

// f_006a98b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a98b0 {

struct __attribute__((packed)) Object_006a98b0_0 {
    u8 byte_0;
    u8 unknown_1[0x3];  // (not used here)
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not used here)
    u32 word_10;
    u16 half_14;
    u16 half_16;
    u8 byte_18;
};
GUEST_OFFSET(Object_006a98b0_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_006a98b0_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_006a98b0_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_006a98b0_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_006a98b0_0, half_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_006a98b0_0, half_16, 0x16);  // (from the original)
GUEST_OFFSET(Object_006a98b0_0, byte_18, 0x18);  // (from the original)

inline guest::global<u32, 0x006a9960> global_006a9960;  // (from the original)
inline guest::global<u32, 0x006a9964> global_006a9964;  // (from the original)
inline guest::global<u32, 0x006a9968> global_006a9968;  // (from the original)

u32 f_006a98b0(gptr<Object_006a98b0_0> arg0, u32 r1, u32 r2, u32 r3) {
    float S0_2 = 0;
    float S1_1 = std::bit_cast<float>(arg0->word_4);
    arg0->word_10 = std::bit_cast<u32>(std::bit_cast<float>(*global_006a9960));
    float S0_1 = fabsf(S1_1);
    if (r1 != 0) {
        if (s32(std::bit_cast<u32>(S0_1)) > 0x34000000) {  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->s[0] = S0_1;
            guest::cpu()->s[1] = S1_1;
            return 0u;
        }
        arg0->byte_18 = u8(r1);
        S0_2 = std::bit_cast<float>(*global_006a9964);
        arg0->word_4 = std::bit_cast<u32>(S0_2);
        if (r2 == 0) {
            arg0->word_8 = std::bit_cast<u32>(S0_2);
            guest::cpu()->r[1] = r1;
            guest::cpu()->s[0] = S0_2;
            guest::cpu()->s[1] = S1_1;
            return 0u;
        }
        if (r3 == 0) {
            arg0->byte_0 = 0;
            guest::cpu()->r[1] = r1;
            guest::cpu()->s[0] = S0_2;
            guest::cpu()->s[1] = S1_1;
            return 1u;
        }
        arg0->byte_0 = 1;
        arg0->half_14 = 0;
        arg0->half_16 = 0xf;  // (from the original)
        guest::cpu()->r[1] = 0xfu;  // (from the original)
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_1;
        return 1u;
    }
    arg0->byte_0 = 0;
    if (s32(std::bit_cast<u32>(S0_1)) <= 0x34000000) {  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return 0u;
    }
    arg0->byte_18 = u8(r1);
    S0_2 = std::bit_cast<float>(*global_006a9968);
    arg0->word_4 = std::bit_cast<u32>(S0_2);
    if (r2 != 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_1;
        return 1u;
    }
    arg0->word_8 = std::bit_cast<u32>(S0_2);
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_1;
    return 0u;
}

}  // namespace d_006a98b0
GUEST_EXPORT_FRAMED(0x006a98b0, d_006a98b0::f_006a98b0, 0x10);  // pushes {r4} first, as the original

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
    arg0->word_10 = std::bit_cast<u32>(std::bit_cast<float>(*global_006a99d0));
    if (r1 != 0) {
        float S0_1 = fabsf(std::bit_cast<float>(arg0->word_4));
        if (s32(std::bit_cast<u32>(S0_1)) > 0x34000000) {  // (from the original)
            guest::cpu()->s[0] = S0_1;
            return;
        }
        arg0->byte_18 = u8(r1);
        float S0_2 = std::bit_cast<float>(*global_006a99d4);
        arg0->word_4 = std::bit_cast<u32>(S0_2);
        arg0->word_8 = std::bit_cast<u32>(S0_2);
        guest::cpu()->s[0] = S0_2;
        return;
    }
    float S0_3 = std::bit_cast<float>(arg0->word_4);
    arg0->byte_0 = 0;
    float S0_4 = fabsf(S0_3);
    if (s32(std::bit_cast<u32>(S0_4)) <= 0x34000000) {  // (from the original)
        guest::cpu()->s[0] = S0_4;
        return;
    }
    arg0->byte_18 = u8(r1);
    float S0_5 = std::bit_cast<float>(*global_006a99d8);
    arg0->word_4 = std::bit_cast<u32>(S0_5);
    arg0->word_8 = std::bit_cast<u32>(S0_5);
    guest::cpu()->s[0] = S0_5;
}

}  // namespace d_006a996c
GUEST_EXPORT(0x006a996c, d_006a996c::f_006a996c);

// f_006a99dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a99dc {

struct __attribute__((packed)) Object_006a99dc_0 {
    u8 byte_0;
    u8 unknown_1[0x3];  // (not used here)
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not used here)
    u32 word_10;
    u16 half_14;
    u16 half_16;
    u8 byte_18;
};
GUEST_OFFSET(Object_006a99dc_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_006a99dc_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_006a99dc_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_006a99dc_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_006a99dc_0, half_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_006a99dc_0, half_16, 0x16);  // (from the original)
GUEST_OFFSET(Object_006a99dc_0, byte_18, 0x18);  // (from the original)

inline guest::global<u32, 0x006a9a34> global_006a9a34;  // (from the original)
inline guest::global<u32, 0x006a9a38> global_006a9a38;  // (from the original)
inline guest::global<u32, 0x006a9a3c> global_006a9a3c;  // (from the original)

u32 f_006a99dc(gptr<Object_006a99dc_0> arg0, u32 r1, u32 r2) {
    float S1_1 = std::bit_cast<float>(*global_006a9a38);
    float S2_1 = std::bit_cast<float>(*global_006a9a3c);
    float S0_1 = std::bit_cast<float>(*global_006a9a34);
    arg0->word_10 = std::bit_cast<u32>(S1_1);
    arg0->word_8 = std::bit_cast<u32>(S2_1);
    arg0->word_4 = std::bit_cast<u32>(S0_1);
    arg0->byte_18 = 1;
    if (r1 == 0) {
        arg0->word_8 = std::bit_cast<u32>(S0_1);
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return 0u;
    }
    if (r2 == 0) {
        arg0->byte_0 = 0;
        guest::cpu()->r[1] = 0u;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return 1u;
    }
    arg0->byte_0 = 1;
    arg0->half_14 = 0;
    arg0->half_16 = 0xf;  // (from the original)
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
    float S1_1 = std::bit_cast<float>(*global_006a9a78);
    float S0_1 = std::bit_cast<float>(*global_006a9a74);
    arg0->word_10 = std::bit_cast<u32>(S1_1);
    arg0->byte_0 = 0;
    arg0->word_4 = std::bit_cast<u32>(S0_1);
    if (r1 != 0) {
        S0_1 = std::bit_cast<float>(*global_006a9a7c);
    }
    arg0->byte_18 = 0;
    arg0->word_8 = std::bit_cast<u32>(S0_1);
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return !(r1 == 0);
}

}  // namespace d_006a9a40
GUEST_EXPORT(0x006a9a40, d_006a9a40::f_006a9a40);

// f_006aa3e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006aa3e0 {

struct __attribute__((packed)) Local_006aa3e0_r1_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006aa3e0_r1_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006aa3e0_r1_1, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x006aa434> global_006aa434;  // (from the original)
inline guest::global<u32, 0x006aa438> global_006aa438;  // (from the original)
inline constexpr guest::Function<0x005e9e58, u32(u32)> call_005e9e58;  // (from the original)
inline constexpr guest::Function<0x00601a20, u32(u32)> call_00601a20;  // (from the original)

void f_006aa3e0(u32 r0, float S0, float S1) {
    u32 r0_1 = call_00601a20(r0);
    float S0_1 = std::bit_cast<float>(*global_006aa434);
    *gptr<u32>(r0_1) = 0x90af70;  // (from the original)
    *gptr<u32>(r0_1 + 0x60u) = 0;  // (from the original)
    *gptr<u32>(r0_1 + 0x64u) = std::bit_cast<u32>(S0_1);  // (from the original)
    float S1_1 = std::bit_cast<float>(*global_006aa438);
    *gptr<u32>(r0_1 + 0x68u) = std::bit_cast<u32>(S0_1);  // (from the original)
    gptr<Local_006aa3e0_r1_1> r1_1 = gptr<Local_006aa3e0_r1_1>(r0_1 + 0x6cu);  // (from the original)
    r1_1->word_0 = std::bit_cast<u32>(S0_1);
    r1_1->word_4 = std::bit_cast<u32>(S1_1);
    *gptr<u32>(r0_1 + 0x74u) = 0;  // (from the original)
    u32 r0_2 = r0_1 + 0x78u;  // (from the original)
    *gptr<u32>(r0_2) = 0;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    u32 r0_4 = call_005e9e58(r0_2 + 4u);
    *gptr<u8>(r0_4 + 4u) = 0;
}

}  // namespace d_006aa3e0
GUEST_EXPORT_FRAMED(0x006aa3e0, d_006aa3e0::f_006aa3e0, 0x4010);  // pushes {r4, lr} first, as the original

// f_006aa46c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006aa46c {

inline constexpr guest::Function<0x00601a88, u32(u32, u32)> call_00601a88;  // (from the original)

u32 f_006aa46c(gptr<MailWork__BodyLineEngine> arg0) {
    arg0->word_0 = 0x90af70;  // (from the original)
    return call_00601a88(arg0.addr(), 0x90af70u);  // (from the original)
}

}  // namespace d_006aa46c
GUEST_EXPORT(0x006aa46c, d_006aa46c::f_006aa46c);

// f_006ab00c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ab00c {

struct __attribute__((packed)) Local_006ab00c_r0_3 {
    u8 byte_0;
};
GUEST_OFFSET(Local_006ab00c_r0_3, byte_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x0020bf0c, u32(u32, u32, u32, u32)> call_0020bf0c;  // (from the original)
inline constexpr guest::Function<0x0020bf68, u32(u32, u32, u32, u32)> call_0020bf68;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x002ff8b0, u32(u32, u32, u32, u32)> call_002ff8b0;  // (from the original)
inline constexpr guest::Function<0x004e4ac4, u32(u32, u32, u32, u32)> call_004e4ac4;  // (from the original)
inline constexpr guest::Function<0x0071287c, u32(u32, u32, u32, u32)> call_0071287c;  // (from the original)

u32 f_006ab00c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r1_2 = 0;
    *frame.at<u32>(0) = r3;
    u32 r0_1 = call_002fb94c(r0, r1, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        u32 r5 = r0_1 + 0x2cu;  // (from the original)
        r0_1 = call_0071287c(r5, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_1 != 0) {
            u32 r4 = 0u;
            u32 r6 = 1u;
            *frame.at<u16>(0) = 0;
            do {
                u32 r0_2 = call_0020bf0c(r5, r4, r2, r3);
                r1_2 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (*gptr<u8>(r0_2 + 0x86cu) != 0) {  // (from the original)
                    r1_2 = frame.at(0).addr();
                    if (r4 < 0xau) {  // (from the original)
                        gptr<Local_006ab00c_r0_3> r0_3 = gptr<Local_006ab00c_r0_3>(r1_2 + (r4 >> 3));
                        r2 = r4 & 7u;
                        r1_2 = u32(r0_3->byte_0) | lsl_r(r6, r2 & 0xff);  // (from the original)
                        r0_3->byte_0 = u8(r1_2);
                    }
                }
                r4 += 1u;
                guest::preempt();
            } while (r4 < 0xau);  // (from the original)
            call_0020bf68(r5, r1_2, r2, r3);
            u32 r0_4 = call_002ff8b0(4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            call_004e4ac4(r0_4, frame.at(0).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
            r1_1 = guest::cpu()->r[1];
            r0_1 = 1u;
        }
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_006ab00c
GUEST_EXPORT_FRAMED(0x006ab00c, d_006ab00c::f_006ab00c, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_006ac088: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ac088 {

struct __attribute__((packed)) Object_006ac088_0 {
    u8 unknown_0[0x4c8];  // (not used here)
    u8 byte_4c8;
};
GUEST_OFFSET(Object_006ac088_0, byte_4c8, 0x4c8);  // (from the original)

inline constexpr guest::Function<0x001aae00, u32(u32, u32, u32, u32)> call_001aae00;  // (from the original)

void f_006ac088(gptr<Object_006ac088_0> arg0, u32 r1) {
    if (arg0->byte_4c8 == 0) {
        arg0->byte_4c8 = 0;
        return;
    }
    call_001aae00(arg0.addr(), 2u, guest::cpu()->r[2], guest::cpu()->r[3]);
    arg0->byte_4c8 = 0;
}

}  // namespace d_006ac088
GUEST_EXPORT_FRAMED(0x006ac088, d_006ac088::f_006ac088, 0x4010);  // pushes {r4, lr} first, as the original

// f_006ac35c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ac35c {

struct __attribute__((packed)) Object_006ac35c_0 {
    u8 unknown_0[0x281];  // (not used here)
    u8 byte_281;
    u8 unknown_282[0xde];  // (not used here)
    u32 word_360;
    u8 unknown_364[0x168];  // (not used here)
    u32 word_4cc;
};
GUEST_OFFSET(Object_006ac35c_0, byte_281, 0x281);  // (from the original)
GUEST_OFFSET(Object_006ac35c_0, word_360, 0x360);  // (from the original)
GUEST_OFFSET(Object_006ac35c_0, word_4cc, 0x4cc);  // (from the original)

struct __attribute__((packed)) Local_006ac35c_r6_1 {
    u8 byte_0;
};
GUEST_OFFSET(Local_006ac35c_r6_1, byte_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x002052f8, u32(u32, u32, u32, u32)> call_002052f8;  // (from the original)
inline constexpr guest::Function<0x002132d0, u32(u32, u32, u32, u32)> call_002132d0;  // (from the original)

u32 f_006ac35c(gptr<Object_006ac35c_0> arg0, u32 r1) {
    arg0->word_360 = r1;
    u32 r0_1 = call_002052f8(arg0.addr(), r1, guest::cpu()->r[2], 0u);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r3_1 = guest::cpu()->r[3];
    if (r0_1 != 0) {
        u32 r5_1 = arg0->word_4cc;
        gptr<Local_006ac35c_r6_1> r6_1 = gptr<Local_006ac35c_r6_1>(arg0.addr() + 0x281u);  // (from the original)
        if ((u32(arg0->byte_281) & 1u) != 0) {
            u32 r0_3 = call_002132d0(r5_1 + 0x1b0u, arg0.addr() + 0x264u, guest::cpu()->r[2], r3_1);  // (from the original)
            r1_1 = guest::cpu()->r[1];
            r3_1 = guest::cpu()->r[3];
            if (r0_3 == 0) {
                return 0u;
            }
        }
        if (*gptr<u32>(0x1984u + r5_1) != 0) {  // (from the original)
            if ((u32(r6_1->byte_0) >> 2u & 1u) != 0) {
                u32 r0_5 = call_002132d0(r5_1 + 0x1980u, arg0.addr() + 0x26cu, guest::cpu()->r[2], r3_1);  // (from the original)
                r1_1 = guest::cpu()->r[1];
                r3_1 = guest::cpu()->r[3];
                if (r0_5 == 0) {
                    return 0u;
                }
            }
        }
        u32 r0_6 = r6_1->byte_0;
        if ((r0_6 >> 1u & 1u) != 0) {
            u32 r0_8 = call_002132d0(r5_1 + 0x7020u, arg0.addr() + 0x274u, guest::cpu()->r[2], r3_1);  // (from the original)
            r1_1 = guest::cpu()->r[1];
            if (r0_8 == 0) {
                return 0u;
            }
        }
        r0_1 = 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_006ac35c
GUEST_EXPORT_FRAMED(0x006ac35c, d_006ac35c::f_006ac35c, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_006ac760: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ac760 {

inline constexpr guest::Function<0x00138744, u32(u32, u32, u32, u32)> call_00138744;  // (from the original)
inline constexpr guest::Function<0x004f1270, u32(u32)> call_004f1270;  // (from the original)

void f_006ac760(u32 r0) {
    u32 r4_1 = r0 + 0x384u;  // (from the original)
    call_00138744(r0 + 0x3d4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_004f1270(r4_1);
    *gptr<u32>(r4_1 + 0xcu) = 3;  // (from the original)
}

}  // namespace d_006ac760
GUEST_EXPORT_FRAMED(0x006ac760, d_006ac760::f_006ac760, 0x4010);  // pushes {r4, lr} first, as the original

// f_006ac784: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ac784 {

struct __attribute__((packed)) Local_006ac784_r0_6 {
    u8 unknown_0[0x281];  // (not used here)
    u8 byte_281;
    u8 unknown_282[0x246];  // (not used here)
    u8 byte_4c8;
    u8 unknown_4c9[0x3];  // (not used here)
    u32 word_4cc;
    u8 byte_4d0;
    u8 byte_4d1;
};
GUEST_OFFSET(Local_006ac784_r0_6, byte_281, 0x281);  // (from the original)
GUEST_OFFSET(Local_006ac784_r0_6, byte_4c8, 0x4c8);  // (from the original)
GUEST_OFFSET(Local_006ac784_r0_6, word_4cc, 0x4cc);  // (from the original)
GUEST_OFFSET(Local_006ac784_r0_6, byte_4d0, 0x4d0);  // (from the original)
GUEST_OFFSET(Local_006ac784_r0_6, byte_4d1, 0x4d1);  // (from the original)

struct __attribute__((packed)) Local_006ac784_r1_1 {
    u8 byte_0;
};
GUEST_OFFSET(Local_006ac784_r1_1, byte_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x0012ca7c, u32(u32)> call_0012ca7c;  // (from the original)
inline constexpr guest::Function<0x00206190, u32(u32, u32, u32, u32)> call_00206190;  // (from the original)
inline constexpr guest::Function<0x004edd3c, u32(u32, u32, u32, u32)> call_004edd3c;  // (from the original)

u32 f_006ac784(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = call_00206190(r0, r1, r2, r3);
    *gptr<u32>(r0_1) = 0x8f8c1c;  // (from the original)
    u32 r0_3 = call_004edd3c(r0_1 + 0x384u, 0x8f8c1cu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 ea_1 = r0_3 + 0xcu;  // (from the original)
    *gptr<u32>(ea_1) = 3;
    u32 r0_5 = call_0012ca7c(ea_1 + 0x44u);  // (from the original)
    *gptr<u32>(r0_5) = 0x8f9600;  // (from the original)
    gptr<Local_006ac784_r0_6> r0_6 = gptr<Local_006ac784_r0_6>(r0_5 - 0x3d4u);  // (from the original)
    r0_6->byte_4c8 = 0;
    r0_6->word_4cc = 0;
    r0_6->byte_4d0 = 0;
    r0_6->byte_4d1 = 1;
    u32 r3_2 = r0_6->byte_281;
    gptr<Local_006ac784_r1_1> r1_1 = gptr<Local_006ac784_r1_1>(r0_6.addr() + 0x281u);  // (from the original)
    u32 r3_3 = r1 == 0 ? r3_2 & ~1u : r3_2 | 1u;
    r1_1->byte_0 = u8(r3_3);
    u32 r3_4 = r3_3 & 0xffu;  // (from the original)
    u32 r3_5 = r2 == 0 ? r3_4 & ~4u : r3_4 | 4u;
    u32 r2_2 = r3_5 & 0xffu;  // (from the original)
    r1_1->byte_0 = u8(r3_5);
    r1_1->byte_0 = u8(r3 == 0 ? r2_2 & ~2u : r2_2 | 2u);
    guest::cpu()->r[1] = r1_1.addr();
    return r0_6.addr();
}

}  // namespace d_006ac784
GUEST_EXPORT_FRAMED(0x006ac784, d_006ac784::f_006ac784, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006ac834: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ac834 {

struct __attribute__((packed)) Local_006ac834_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006ac834_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006ac834_ea_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_006ac834_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006ac834_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006ac834_ea_2, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_006ac834_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006ac834_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006ac834_ea_3, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_006ac834_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006ac834_ea_4, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006ac834_ea_4, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_006ac834_r0_8 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006ac834_r0_8, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006ac834_r0_8, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_006ac834_r1_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006ac834_r1_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006ac834_r1_1, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x001abcd4, u32(u32, u32)> call_001abcd4;  // (from the original)
inline constexpr guest::Function<0x00317e2c, u32(u32, u32)> call_00317e2c;  // (from the original)
inline constexpr guest::Function<0x0031e204, u32(u32, u32)> call_0031e204;  // (from the original)
inline constexpr guest::Function<0x004edd6c, u32(u32, u32, u32, u32)> call_004edd6c;  // (from the original)
inline constexpr guest::Function<0x004edd84, u32(u32, u32)> call_004edd84;  // (from the original)
inline constexpr guest::Function<0x004ef50c, u32(u32, u32)> call_004ef50c;  // (from the original)

u32 f_006ac834(gptr<NpcModel> arg0) {
    arg0->word_0 = 0x8f8c1c;  // (from the original)
    u32 r0_2 = call_004edd6c(arg0.addr() + 0x384u, 0x8f8c1cu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *gptr<u32>(r0_2 - 0x384u) = 0x8ed6ac;  // (from the original)
    u32 r0_4 = call_0031e204(r0_2 - 0xd4u, 0x8ed6acu);  // (from the original)
    u32 r0_5 = r0_4 - 0x2b0u;  // (from the original)
    u32 r5_1 = ~0u;
    gptr<Local_006ac834_ea_1> ea_1 = gptr<Local_006ac834_ea_1>(r0_5 + 0x274u);  // (from the original)
    ea_1->word_0 = 0;
    ea_1->word_4 = r5_1;
    gptr<Local_006ac834_ea_2> ea_2 = gptr<Local_006ac834_ea_2>(r0_5 + 0x26cu);  // (from the original)
    ea_2->word_0 = 0;
    ea_2->word_4 = r5_1;
    gptr<Local_006ac834_r1_1> r1_1 = gptr<Local_006ac834_r1_1>(r0_5 + 0x264u);  // (from the original)
    r1_1->word_0 = 0;
    r1_1->word_4 = r5_1;
    u32 r0_7 = call_00317e2c(r0_5 + 0x15cu, r1_1.addr());  // (from the original)
    gptr<Local_006ac834_r0_8> r0_8 = gptr<Local_006ac834_r0_8>(r0_7 - 0x18u);  // (from the original)
    gptr<Local_006ac834_ea_3> ea_3 = gptr<Local_006ac834_ea_3>(r0_8.addr() + 0x10u);  // (from the original)
    ea_3->word_0 = 0;
    ea_3->word_4 = r5_1;
    gptr<Local_006ac834_ea_4> ea_4 = gptr<Local_006ac834_ea_4>(r0_8.addr() + 8u);
    ea_4->word_0 = 0;
    ea_4->word_4 = r5_1;
    r0_8->word_0 = 0;
    r0_8->word_4 = r5_1;
    u32 r0_9 = r0_8.addr() - 0x144u;  // (from the original)
    *gptr<u32>(r0_9) = 0x8eb174;  // (from the original)
    call_001abcd4(r0_9, 0x8eb174u);  // (from the original)
    u32 r0_11 = call_004ef50c(r0_9 + 0xccu, guest::cpu()->r[1]);  // (from the original)
    u32 r0_13 = call_004edd84(r0_11 - 0x54u, guest::cpu()->r[1]);  // (from the original)
    return r0_13 - 0x78u;  // (from the original)
}

}  // namespace d_006ac834
GUEST_EXPORT_FRAMED(0x006ac834, d_006ac834::f_006ac834, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

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
    float S1_1 = std::bit_cast<float>(*global_006ac91c);
    arg0->word_2c = 0;
    float S2_1 = std::bit_cast<float>(*global_006ac920);
    arg0->word_14 = std::bit_cast<u32>(S1_1);
    float S0_1 = std::bit_cast<float>(*global_006ac918);
    arg0->word_1c = std::bit_cast<u32>(S1_1);
    arg0->word_18 = std::bit_cast<u32>(S2_1);
    arg0->word_20 = std::bit_cast<u32>(S0_1);
    arg0->word_28 = std::bit_cast<u32>(S0_1);
    arg0->word_24 = std::bit_cast<u32>(S2_1);
    guest::cpu()->r[1] = 0u;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
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

struct __attribute__((packed)) Local_006ac950_r0_2 {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_006ac950_r0_2, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_006ac950_r0_2, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_006ac950_r0_2, word_1c, 0x1c);  // (from the original)

inline guest::global<u32, 0x006aca00> global_006aca00;  // (from the original)
inline guest::global<u32, 0x006aca04> global_006aca04;  // (from the original)
inline guest::global<u32, 0x006aca08> global_006aca08;  // (from the original)
inline constexpr guest::Function<0x006f7e90, u32(u32, u32)> call_006f7e90;  // (from the original)
inline constexpr guest::Function<0x00770c10, u32(u32, u32)> call_00770c10;  // (from the original)

u32 f_006ac950(gptr<Object_006ac950_0> arg0, u32 r1, float S0, float S1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = arg0->word_4;
    if (r0_1 != 0) {
        r1 = 0u;
        S1 = std::bit_cast<float>(*global_006aca04);
        arg0->word_2c = r1;
        arg0->word_30 = r1;
        float S2_1 = std::bit_cast<float>(*global_006aca08);
        arg0->word_14 = std::bit_cast<u32>(S1);
        S0 = std::bit_cast<float>(*global_006aca00);
        arg0->word_1c = std::bit_cast<u32>(S1);
        arg0->word_18 = std::bit_cast<u32>(S2_1);
        arg0->word_20 = std::bit_cast<u32>(S0);
        arg0->word_28 = std::bit_cast<u32>(S0);
        arg0->word_24 = std::bit_cast<u32>(S2_1);
        if (*gptr<u8>(r0_1 + 4u) == 2u) {
            gptr<Local_006ac950_r0_2> r0_2 = gptr<Local_006ac950_r0_2>(arg0->word_10);
            r1 = arg0->word_4;
            if (r0_2.addr() != 0) {
                *gptr<u32>(r1 + 8u) = r0_2->word_14;
                *gptr<u32>(r1 + 0xcu) = r0_2->word_18;  // (from the original)
                *gptr<u32>(r1 + 0x10u) = r0_2->word_1c;  // (from the original)
            }
        }
        r0_1 = 0x9502f8u;  // (from the original)
        u32 r5_1 = *gptr<u32>(r0_1);
        if (r5_1 != 0) {
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            r0_1 = call_00770c10(r5_1 + 0x14u, r1);  // (from the original)
            r1 = guest::cpu()->r[1];
            S0 = guest::cpu()->s[0];
            S1 = guest::cpu()->s[1];
            if (r0_1 == 0) {
                frame.release();
                return call_006f7e90(r5_1 + 0x14u, arg0.addr());  // (from the original)
            }
        }
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0_1;
}

}  // namespace d_006ac950
GUEST_EXPORT(0x006ac950, d_006ac950::f_006ac950);

// f_006aca78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006aca78 {

inline constexpr guest::Function<0x006f7e64, u32(u32)> call_006f7e64;  // (from the original)

u32 f_006aca78(u32 r0) {
    u32 r0_1 = call_006f7e64(r0);
    *gptr<u32>(r0_1 + 0x10u) = 0;  // (from the original)
    *gptr<u32>(r0_1) = 0x8f8c74;  // (from the original)
    *gptr<u32>(r0_1 + 0x2cu) = 0;  // (from the original)
    *gptr<u32>(r0_1 + 0x30u) = 0;  // (from the original)
    *gptr<u32>(r0_1 + 0x34u) = 0;  // (from the original)
    *gptr<u32>(r0_1 + 0x38u) = 0;  // (from the original)
    *gptr<u32>(r0_1 + 0x3cu) = 0;  // (from the original)
    guest::cpu()->r[1] = 0u;
    return r0_1;
}

}  // namespace d_006aca78
GUEST_EXPORT_FRAMED(0x006aca78, d_006aca78::f_006aca78, 0x4010);  // pushes {r4, lr} first, as the original

// f_006acabc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006acabc {

inline constexpr guest::Function<0x006f7e8c, u32(u32, u32)> call_006f7e8c;  // (from the original)

u32 f_006acabc() {
    return call_006f7e8c(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_006acabc
GUEST_EXPORT(0x006acabc, d_006acabc::f_006acabc);

// f_006acac0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006acac0 {

struct __attribute__((packed)) Local_006acac0_r0_3 {
    u8 unknown_0[0x340];  // (not used here)
    u32 word_340;
    u8 unknown_344[0x15];  // (not used here)
    u8 byte_359;
};
GUEST_OFFSET(Local_006acac0_r0_3, word_340, 0x340);  // (from the original)
GUEST_OFFSET(Local_006acac0_r0_3, byte_359, 0x359);  // (from the original)

struct __attribute__((packed)) Local_006acac0_r0_4 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_006acac0_r0_4, byte_b7, 0xb7);  // (from the original)

inline constexpr guest::Function<0x002fd6bc, u32(u32, u32, u32, u32)> call_002fd6bc;  // (from the original)

void f_006acac0(u32 r0, u32 r1) {
    u32 r0_2 = call_002fd6bc(r0 + 0xe30u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    gptr<Local_006acac0_r0_3> r0_3 = gptr<Local_006acac0_r0_3>(r0 + 0x6000u);  // (from the original)
    r0_3->byte_359 = u8(r0_2);
    gptr<Local_006acac0_r0_4> r0_4 = gptr<Local_006acac0_r0_4>(r0_3->word_340);
    u32 r1_1 = u32(r0_4->byte_b7) & 0xfeu;  // (from the original)
    r0_4->byte_b7 = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_006acac0
GUEST_EXPORT_FRAMED(0x006acac0, d_006acac0::f_006acac0, 0x4010);  // pushes {r4, lr} first, as the original

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

struct __attribute__((packed)) Local_006acf28_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_006acf28_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006acf28_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_006acf28_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_006acf28_ea_1, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Local_006acf28_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_006acf28_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006acf28_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_006acf28_ea_2, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_006acf28_ea_2, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Local_006acf28_r0_1 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_006acf28_r0_1, byte_b7, 0xb7);  // (from the original)

struct __attribute__((packed)) Local_006acf28_r0_3 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_006acf28_r0_3, byte_b7, 0xb7);  // (from the original)

inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)

void f_006acf28(gptr<Object_006acf28_0> arg0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_006acf28_ea_1> ea_1 = gptr<Local_006acf28_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r6;
    ea_1->word_c = r14;
    r5 = r0;
    gptr<Local_006acf28_r0_1> r0_1 = gptr<Local_006acf28_r0_1>(arg0->word_6340);
    r0_1->byte_b7 = u8((arg0->byte_6358 == 0 ? 1u : 0u) | u32(r0_1->byte_b7) & 0xfeu);  // (from the original)
    u32 r1_1 = arg0->word_6348;
    u32 r3 = u32(*gptr<u8>(r1_1 + 0xb7u)) & 0xfeu;  // (from the original)
    *gptr<u8>(r1_1 + 0xb7u) = u8(u32(arg0->byte_6358) | r3);  // (from the original)
    if (arg0->byte_6358 == 0) {
        r4 = 0u;
        do {
            u32 r0_2 = r4 + (r4 << 4);
            u32 r1_2 = r5 + (r0_2 + (r0_2 << 1) << 4);
            gptr<Local_006acf28_r0_3> r0_3 = gptr<Local_006acf28_r0_3>(*gptr<u32>(0x1808u + r1_2));  // (from the original)
            u32 r2_1 = u32(r0_3->byte_b7) & 0xfeu;  // (from the original)
            r0_3->byte_b7 = u8(r2_1);
            call_00568c10(r1_2 + 0x16bcu, r1_2, r2_1, r3);  // (from the original)
            r1_1 = guest::cpu()->r[1];
            r3 = guest::cpu()->r[3];
            r4 += 1u;
            guest::preempt();
        } while (r4 < 0x18u);  // (from the original)
    }
    gptr<Local_006acf28_ea_2> ea_2 = gptr<Local_006acf28_ea_2>(frame.at(0).addr());
    u32 r4_1 = ea_2->word_0;
    u32 r5_1 = ea_2->word_4;
    u32 r6_1 = ea_2->word_8;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
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
inline constexpr guest::Function<0x005e2f94, u32(u32)> call_005e2f94;  // (from the original)
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32, u32, u32)> call_005ea8dc;  // (from the original)
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)
inline constexpr guest::Function<0x006ad3a0, u32(u32, u32, u32, u32)> call_006ad3a0;  // (from the original)

void f_006acfc4(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x9c);  // the original's stack frame
    u32 res_1 = 0;
    u32 r3_5 = 0;
    u32 r2_4 = 0;
    u32 r3_7 = 0;
    u32 r5 = r0;
    u32 r0_1 = call_002fb94c(r0, r1, r2, r3);
    u32 r6 = *gptr<u8>(r1);
    u32 r7 = *gptr<u8>(r0_1 + 0x55d2u);  // (from the original)
    u32 r9 = *gptr<u8>(r1 + 1u);
    u32 r0_3 = call_003083bc(frame.at(0).addr(), frame.at(0x18).addr(), 0x40u, guest::cpu()->r[3]);  // (from the original)
    u32 r8 = 0x90a228u;  // (from the original)
    *gptr<u32>(r0_3) = r8;
    u32 r0_5 = call_005f4bfc(r0_3 + 0xcu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_002f825c(r0_5 + 0xcu, 0x80u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r2 = 0x8906ecu;  // (from the original)
    r0 = (r0_5 - 0xcu) + 0x16u;  // (from the original)
    r1 = 0x20u;  // (from the original)
    do {
        res_1 = r1 - 1u;
        r1 = res_1;
        u32 r3_4 = *gptr<u16>(r2);
        *gptr<u16>(r0 + 2u) = u16(r3_4);
        r3_5 = *gptr<u16>(r2);
        u32 ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r3_5);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    call_005ea8f8(*global_0095decc, 0u, r2, r3_5);
    u32 r2_3 = guest::cpu()->r[2];
    u32 r3_6 = guest::cpu()->r[3];
    if (r6 == r7) {
        call_001b9964(frame.at(0).addr(), r6, r9, r3_6);
        r2_4 = guest::cpu()->r[2];
        r3_7 = guest::cpu()->r[3];
    } else {
        call_001b98e0(frame.at(0).addr(), r6, r2_3, r3_6);
        r2_4 = guest::cpu()->r[2];
        r3_7 = guest::cpu()->r[3];
    }
    call_005ea8dc(*global_0095decc, 0u, r2_4, r3_7);
    u32 r0_12 = call_00568a80(r5 + 0x4bcu, 0x6ad0f8u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_006ad3a0(r5, r0_12, frame.at(0).addr(), guest::cpu()->r[3]);
    u32 r0_13 = r5 + 0x6418u;  // (from the original)
    call_005e2e50(r0_13, frame.at(0).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
    call_005e2f94(r0_13);
    *frame.at<u32>(0) = r8;
}

}  // namespace d_006acfc4
GUEST_EXPORT_FRAMED(0x006acfc4, d_006acfc4::f_006acfc4, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

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

struct __attribute__((packed)) Local_006adc30_r0_9 {
    u8 unknown_0[0x320];  // (not used here)
    u32 word_320;
};
GUEST_OFFSET(Local_006adc30_r0_9, word_320, 0x320);  // (from the original)

struct __attribute__((packed)) Local_006adc30_r5_1 {
    u32 word_0;
};
GUEST_OFFSET(Local_006adc30_r5_1, word_0, 0x0);  // (from the original)

inline guest::global<u32, 0x006add18> global_006add18;  // (from the original)
inline constexpr guest::Function<0x002f6b14, u32(u32, u32, u32, u32)> call_002f6b14;  // (from the original)
inline constexpr guest::Function<0x002f6e14, u32(u32, u32, u32, u32)> call_002f6e14;  // (from the original)
inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> call_004b4fc0;  // (from the original)
inline constexpr guest::Function<0x004b6dc8, u32(u32, u32, u32, u32)> call_004b6dc8;  // (from the original)
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> call_00568984;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)
inline constexpr guest::Function<0x005697e0, u32(u32, u32, u32, u32)> call_005697e0;  // (from the original)

void f_006adc30(gptr<Object_006adc30_0> arg0, u32 r1, u32 r2, u32 r3, float S0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    gptr<Local_006adc30_r5_1> r5_1 = gptr<Local_006adc30_r5_1>(arg0.addr() + 0x16b8u);  // (from the original)
    if (arg0->word_16b8 != 0x19u) {  // (from the original)
        u32 r1_1 = arg0->word_633c;
        u32 r0_1 = *gptr<u32>(r1_1 + 0xcu);  // (from the original)
        if (r0_1 != 0) {
            call_004b6dc8(r0_1, r1_1, r2, r3);
            r1_1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            S0 = guest::cpu()->s[0];
        }
        u32 r0_2 = r5_1->word_0;
        u32 r0_3 = r0_2 + (r0_2 << 4);
        u32 r0_4 = arg0.addr() + (r0_3 + (r0_3 << 1) << 4);
        guest::cpu()->s[0] = S0;
        call_002f6e14(r0_4 + 0x1908u, r1_1, r2, r3);  // (from the original)
        u32 r1_2 = guest::cpu()->r[1];
        u32 r2_1 = guest::cpu()->r[2];
        u32 r3_1 = guest::cpu()->r[3];
        call_002f6b14((r0_4 + 0x16bcu) + 0x24cu, r1_2, r2_1, r3_1);  // (from the original)
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        u32 r0_7 = r5_1->word_0;
        u32 r0_8 = r0_7 + (r0_7 << 4);
        gptr<Local_006adc30_r0_9> r0_9 = gptr<Local_006adc30_r0_9>(arg0.addr() + (r0_8 + (r0_8 << 1) << 4) + 0x16bcu);  // (from the original)
        r1 = r0_9->word_320 & ~8u;
        r0_9->word_320 = r1;
        r5_1->word_0 = 0x19;  // (from the original)
    }
    if (*gptr<u8>(arg0.addr() + 0x9c8u) == 1u) {  // (from the original)
        u32 r0_10 = arg0.addr() + 0x9acu;  // (from the original)
        float S0_2 = std::bit_cast<float>(*global_006add18);
        guest::cpu()->s[0] = S0_2;
        call_005697e0(r0_10, r1, r2, r3);
        u32 r1_3 = guest::cpu()->r[1];
        u32 r2_2 = guest::cpu()->r[2];
        u32 r3_2 = guest::cpu()->r[3];
        u32 r0_11 = arg0.addr() + 0x798u;  // (from the original)
        call_00568c10(r0_11, r1_3, r2_2, r3_2);
        u32 r3_3 = guest::cpu()->r[3];
        u32 r0_12 = call_004b4fc0(r0_11, 0x881ae4u, 1u, r3_3);  // (from the original)
        frame.release();
        call_00568984(r0_12, r0_10, r0_12, 0u);
        return;
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
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
inline constexpr guest::Function<0x005e2f94, u32(u32)> call_005e2f94;  // (from the original)
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32, u32, u32)> call_005ea8dc;  // (from the original)
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;  // (from the original)
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> call_005ea964;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)
inline constexpr guest::Function<0x006ad3a0, u32(u32, u32, u32, u32)> call_006ad3a0;  // (from the original)

void f_006add20(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0xa0);  // the original's stack frame
    u32 res_1 = 0;
    u32 r2_4 = 0;
    u32 res_2 = 0;
    u32 r2_9 = 0;
    u32 r5 = r0;
    u32 r6 = r1;
    u32 r7 = r2;
    u32 r10 = 4u;
    u32 r0_2 = call_003083bc(frame.at(0x70).addr(), frame.at(0x88).addr(), 9u, r3);  // (from the original)
    u32 r8 = 0x90a3e8u;  // (from the original)
    *gptr<u32>(r0_2) = r8;
    u32 r0_4 = call_005f4bfc(r0_2 + 0xcu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r4 = r0_4 - 0xcu;  // (from the original)
    call_002f825c(r0_4 + 0xcu, 0x12u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r3 = guest::cpu()->r[3];
    u32 r9 = 0x8906ecu;  // (from the original)
    r0 = r4 + 0x18u;  // (from the original)
    *gptr<u16>(r4 + 0x18u) = u16(u32(*gptr<u16>(r9)));  // (from the original)
    r1 = 4u;
    do {
        u32 r2_3 = *gptr<u16>(r9);
        res_1 = r1 - 1u;
        r1 = res_1;
        *gptr<u16>(r0 + 2u) = u16(r2_3);
        r2_4 = *gptr<u16>(r9);
        u32 ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r2_4);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    call_0056d374(r4, r10, r2_4, r3);
    call_0056d488(frame.at(0x70).addr(), r6 + 2u, u32(*gptr<u8>(r6 + 0x14u)) & 1u, guest::cpu()->r[3]);  // (from the original)
    r6 = r7 == 0 ? 0x162u : 0x161u;  // (from the original)
    u32 r0_8 = call_003083bc(frame.at(8).addr(), frame.at(0x20).addr(), 0x28u, guest::cpu()->r[3]);  // (from the original)
    r7 = 0x90a030u;  // (from the original)
    *gptr<u32>(r0_8) = r7;
    u32 r0_10 = call_005f4bfc(r0_8 + 0xcu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_002f825c(r0_10 + 0xcu, 0x50u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    r0 = ((r0_10 - 0xcu) + 0x18u) - 2u;  // (from the original)
    r1 = 0x14u;  // (from the original)
    do {
        u32 r2_8 = *gptr<u16>(r9);
        res_2 = r1 - 1u;
        r1 = res_2;
        *gptr<u16>(r0 + 2u) = u16(r2_8);
        r2_9 = *gptr<u16>(r9);
        u32 ea_4 = r0 + 4u;
        *gptr<u16>(ea_4) = u16(r2_9);
        r0 = ea_4;
        guest::preempt();
    } while (res_2 != 0);
    call_005ea8f8(*global_0095decc, 0u, r2_9, r3);
    call_00300a64(*gptr<u32>(*global_0095decc + 0x14u), frame.at(0x70).addr(), 0u, guest::cpu()->r[3]);  // (from the original)
    *frame.at<u32>(0) = r4;
    call_005ea964(*global_0095decc, frame.at(8).addr(), 0x6adeecu, r6);  // (from the original)
    call_005ea8dc(*global_0095decc, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_18 = call_00568a80(r5 + 0x4bcu, 0x6adef8u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_006ad3a0(r5, r0_18, frame.at(8).addr(), guest::cpu()->r[3]);
    u32 r0_19 = r5 + 0x64dcu;  // (from the original)
    call_005e2e50(r0_19, frame.at(8).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
    call_005e2f94(r0_19);
    *frame.at<u32>(8) = r7;
    *frame.at<u32>(0x70) = r8;  // (from the original)
}

}  // namespace d_006add20
GUEST_EXPORT_FRAMED(0x006add20, d_006add20::f_006add20, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_006ae344: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ae344 {

inline guest::global<u32, 0x0095decc> global_0095decc;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x0056e04c, u32(u32, u32, u32, u32)> call_0056e04c;  // (from the original)
inline constexpr guest::Function<0x005e2e50, u32(u32, u32, u32, u32)> call_005e2e50;  // (from the original)
inline constexpr guest::Function<0x005e2f94, u32(u32)> call_005e2f94;  // (from the original)
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32, u32, u32)> call_005ea8dc;  // (from the original)
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;  // (from the original)
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> call_005ea964;  // (from the original)
inline constexpr guest::Function<0x005f12f4, u32(u32, u32, u32, u32)> call_005f12f4;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)

void f_006ae344(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x80);  // the original's stack frame
    u32 res_1 = 0;
    u32 r2_4 = 0;
    u32 res_2 = 0;
    u32 r2_8 = 0;
    u32 r7 = r0;
    u32 r5 = r1;
    u32 r0_2 = call_003083bc(frame.at(0x50).addr(), frame.at(0x68).addr(), 9u, r3);  // (from the original)
    u32 r6 = 0x90a3e8u;  // (from the original)
    *gptr<u32>(r0_2) = r6;
    u32 r0_4 = call_005f4bfc(r0_2 + 0xcu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r4_1 = r0_4 - 0xcu;  // (from the original)
    call_002f825c(r0_4 + 0xcu, 0x12u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r3 = guest::cpu()->r[3];
    u32 r8 = 0x8906ecu;  // (from the original)
    r0 = r4_1 + 0x18u;  // (from the original)
    *gptr<u16>(r4_1 + 0x18u) = u16(u32(*gptr<u16>(r8)));  // (from the original)
    r1 = 4u;
    do {
        u32 r2_3 = *gptr<u16>(r8);
        res_1 = r1 - 1u;
        r1 = res_1;
        *gptr<u16>(r0 + 2u) = u16(r2_3);
        r2_4 = *gptr<u16>(r8);
        u32 ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r2_4);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    call_0056e04c(frame.at(0x50).addr(), r5 + 0x16u, r2_4, r3);  // (from the original)
    u32 r0_8 = call_003083bc(frame.at(4).addr(), frame.at(0x1c).addr(), 0x19u, guest::cpu()->r[3]);  // (from the original)
    r5 = 0x909e00u;  // (from the original)
    *gptr<u32>(r0_8) = r5;
    u32 r0_10 = call_005f4bfc(r0_8 + 0xcu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r4_2 = r0_10 - 0xcu;  // (from the original)
    call_002f825c(r0_10 + 0xcu, 0x32u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r3 = guest::cpu()->r[3];
    r0 = r4_2 + 0x18u;  // (from the original)
    *gptr<u16>(r4_2 + 0x18u) = u16(u32(*gptr<u16>(r8)));  // (from the original)
    r1 = 0xcu;  // (from the original)
    do {
        u32 r2_7 = *gptr<u16>(r8);
        res_2 = r1 - 1u;
        r1 = res_2;
        *gptr<u16>(r0 + 2u) = u16(r2_7);
        r2_8 = *gptr<u16>(r8);
        u32 ea_4 = r0 + 4u;
        *gptr<u16>(ea_4) = u16(r2_8);
        r0 = ea_4;
        guest::preempt();
    } while (res_2 != 0);
    call_005ea8f8(*global_0095decc, 0u, r2_8, r3);
    call_005f12f4(*gptr<u32>(*global_0095decc + 0x14u), frame.at(0x50).addr(), 0u, guest::cpu()->r[3]);  // (from the original)
    *frame.at<u32>(0) = 0;
    call_005ea964(*global_0095decc, frame.at(4).addr(), 0x6ae4c8u, 0x15fu);  // (from the original)
    call_005ea8dc(*global_0095decc, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_16 = r7 + 0x65a0u;  // (from the original)
    call_005e2e50(r0_16, frame.at(4).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
    call_005e2f94(r0_16);
    *frame.at<u32>(4) = r5;
    *frame.at<u32>(0x50) = r6;  // (from the original)
}

}  // namespace d_006ae344
GUEST_EXPORT_FRAMED(0x006ae344, d_006ae344::f_006ae344, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_006ae6a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ae6a0 {

inline guest::global<u32, 0x0095decc> global_0095decc;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x00300914, u32(u32, u32, u32, u32)> call_00300914;  // (from the original)
inline constexpr guest::Function<0x00300924, u32(u32, u32, u32, u32)> call_00300924;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x00568a80, u32(u32, u32, u32, u32)> call_00568a80;  // (from the original)
inline constexpr guest::Function<0x005e2e50, u32(u32, u32, u32, u32)> call_005e2e50;  // (from the original)
inline constexpr guest::Function<0x005e2f94, u32(u32)> call_005e2f94;  // (from the original)
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32, u32, u32)> call_005ea8dc;  // (from the original)
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;  // (from the original)
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> call_005ea964;  // (from the original)
inline constexpr guest::Function<0x005f1224, u32(u32, u32, u32, u32)> call_005f1224;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)
inline constexpr guest::Function<0x006ad3a0, u32(u32, u32, u32, u32)> call_006ad3a0;  // (from the original)

void f_006ae6a0(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x70);  // the original's stack frame
    u32 res_1 = 0;
    u32 r3_4 = 0;
    u32 r6 = r0;
    u32 r4 = r1;
    u32 r0_2 = call_003083bc(frame.at(8).addr(), frame.at(0x20).addr(), 0x28u, r3);  // (from the original)
    u32 r7 = 0x90a030u;  // (from the original)
    *gptr<u32>(r0_2) = r7;
    u32 r0_4 = call_005f4bfc(r0_2 + 0xcu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_002f825c(r0_4 + 0xcu, 0x50u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r2 = 0x8906ecu;  // (from the original)
    u32 r5 = 0u;
    r0 = ((r0_4 - 0xcu) + 0x18u) - 2u;  // (from the original)
    r1 = 0x14u;  // (from the original)
    do {
        u32 r3_3 = *gptr<u16>(r2);
        res_1 = r1 - 1u;
        r1 = res_1;
        *gptr<u16>(r0 + 2u) = u16(r3_3);
        r3_4 = *gptr<u16>(r2);
        u32 ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r3_4);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    call_005ea8f8(*global_0095decc, 0u, r2, r3_4);
    call_005f1224(*gptr<u32>(*global_0095decc + 0x14u), uxth(r4), 0u, guest::cpu()->r[3]);  // (from the original)
    call_00300914(*gptr<u32>(*global_0095decc + 0x14u), r4 >> 0x10u & 0xffu, 0u, guest::cpu()->r[3]);  // (from the original)
    call_00300924(*gptr<u32>(*global_0095decc + 0x14u), r4 >> 0x18, 0u, guest::cpu()->r[3]);  // (from the original)
    *frame.at<u32>(0) = r5;
    call_005ea964(*global_0095decc, frame.at(8).addr(), 0x6ae7f8u, 0x165u);  // (from the original)
    call_005ea8dc(*global_0095decc, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_14 = call_00568a80(r6 + 0x4bcu, 0x6ae804u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_006ad3a0(r6, r0_14, frame.at(8).addr(), guest::cpu()->r[3]);
    u32 r0_15 = r6 + 0x68b0u;  // (from the original)
    call_005e2e50(r0_15, frame.at(8).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
    call_005e2f94(r0_15);
    *frame.at<u32>(8) = r7;
}

}  // namespace d_006ae6a0
GUEST_EXPORT_FRAMED(0x006ae6a0, d_006ae6a0::f_006ae6a0, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_006ae870: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ae870 {

inline guest::global<u32, 0x0095decc> global_0095decc;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x00300914, u32(u32, u32, u32, u32)> call_00300914;  // (from the original)
inline constexpr guest::Function<0x00300924, u32(u32, u32, u32, u32)> call_00300924;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x00568a80, u32(u32, u32, u32, u32)> call_00568a80;  // (from the original)
inline constexpr guest::Function<0x005e2e50, u32(u32, u32, u32, u32)> call_005e2e50;  // (from the original)
inline constexpr guest::Function<0x005e2f94, u32(u32)> call_005e2f94;  // (from the original)
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32, u32, u32)> call_005ea8dc;  // (from the original)
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;  // (from the original)
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> call_005ea964;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)
inline constexpr guest::Function<0x006ad3a0, u32(u32, u32, u32, u32)> call_006ad3a0;  // (from the original)

void f_006ae870(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x70);  // the original's stack frame
    u32 res_1 = 0;
    u32 r3_4 = 0;
    u32 r5 = r0;
    u32 r6 = r1;
    u32 r0_2 = call_003083bc(frame.at(8).addr(), frame.at(0x20).addr(), 0x28u, r3);  // (from the original)
    u32 r7 = 0x90a030u;  // (from the original)
    *gptr<u32>(r0_2) = r7;
    u32 r0_4 = call_005f4bfc(r0_2 + 0xcu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_002f825c(r0_4 + 0xcu, 0x50u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r2 = 0x8906ecu;  // (from the original)
    u32 r4 = 0u;
    r0 = ((r0_4 - 0xcu) + 0x18u) - 2u;  // (from the original)
    r1 = 0x14u;  // (from the original)
    do {
        u32 r3_3 = *gptr<u16>(r2);
        res_1 = r1 - 1u;
        r1 = res_1;
        *gptr<u16>(r0 + 2u) = u16(r3_3);
        r3_4 = *gptr<u16>(r2);
        u32 ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r3_4);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    call_005ea8f8(*global_0095decc, 0u, r2, r3_4);
    u32 r0_8 = *gptr<u32>(*global_0095decc + 0x14u);  // (from the original)
    u32 r1_3 = *gptr<u8>(r6);
    call_00300914(r0_8, r1_3, 1u, guest::cpu()->r[3]);
    u32 r0_9 = *gptr<u32>(*global_0095decc + 0x14u);  // (from the original)
    u32 r1_4 = *gptr<u8>(r6 + 1u);
    call_00300924(r0_9, r1_4, 1u, guest::cpu()->r[3]);
    *frame.at<u32>(0) = r4;
    call_005ea964(*global_0095decc, frame.at(8).addr(), 0x6ae9acu, 0x163u);  // (from the original)
    call_005ea8dc(*global_0095decc, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_13 = call_00568a80(r5 + 0x4bcu, 0x6ae9b8u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_006ad3a0(r5, r0_13, frame.at(8).addr(), guest::cpu()->r[3]);
    u32 r0_14 = r5 + 0x6664u;  // (from the original)
    call_005e2e50(r0_14, frame.at(8).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
    call_005e2f94(r0_14);
    *frame.at<u32>(8) = r7;
}

}  // namespace d_006ae870
GUEST_EXPORT_FRAMED(0x006ae870, d_006ae870::f_006ae870, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_006ae9c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ae9c4 {

struct __attribute__((packed)) Local_006ae9c4_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_006ae9c4_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006ae9c4_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_006ae9c4_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_006ae9c4_ea_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_006ae9c4_ea_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_006ae9c4_ea_1, word_14, 0x14);  // (from the original)

struct __attribute__((packed)) Local_006ae9c4_ea_11 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006ae9c4_ea_11, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006ae9c4_ea_11, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_006ae9c4_ea_12 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006ae9c4_ea_12, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006ae9c4_ea_12, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_006ae9c4_r0_1 {
    u8 unknown_0[0xd4];  // (not used here)
    u32 word_d4;
};
GUEST_OFFSET(Local_006ae9c4_r0_1, word_d4, 0xd4);  // (from the original)

struct __attribute__((packed)) Local_006ae9c4_r3_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006ae9c4_r3_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006ae9c4_r3_2, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_006ae9c4_r6_2 {
    u8 unknown_0[0xd0];  // (not used here)
    u32 word_d0;
    u8 unknown_d4[0x7];  // (not used here)
    u8 byte_db;
    u8 byte_dc;
};
GUEST_OFFSET(Local_006ae9c4_r6_2, word_d0, 0xd0);  // (from the original)
GUEST_OFFSET(Local_006ae9c4_r6_2, byte_db, 0xdb);  // (from the original)
GUEST_OFFSET(Local_006ae9c4_r6_2, byte_dc, 0xdc);  // (from the original)

struct __attribute__((packed)) Local_006ae9c4_r9_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_006ae9c4_r9_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006ae9c4_r9_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_006ae9c4_r9_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_006ae9c4_r9_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_006ae9c4_r9_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_006ae9c4_r9_1, word_14, 0x14);  // (from the original)

inline guest::global<u32, 0x006aeb00> global_006aeb00;  // (from the original)
inline guest::global<u32, 0x006aeb04> global_006aeb04;  // (from the original)
inline guest::global<u32, 0x008819e4> global_008819e4;  // (from the original)
inline constexpr guest::Function<0x002b6a00, u32(u32, u32, u32, u32)> call_002b6a00;  // (from the original)
inline constexpr guest::Function<0x002f6a30, u32(u32, u32)> call_002f6a30;  // (from the original)
inline constexpr guest::Function<0x002f6e98, u32(u32, u32, u32, u32)> call_002f6e98;  // (from the original)
inline constexpr guest::Function<0x002f7508, u32(u32, u32, u32, u32)> call_002f7508;  // (from the original)
inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> call_004b4fc0;  // (from the original)
inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> call_0056878c;  // (from the original)

void f_006ae9c4(u32 r0, float S0, float S1) {
    guest::StackFrame frame(0x44);  // the original's stack frame
    gptr<Local_006ae9c4_r9_1> r9_1 = gptr<Local_006ae9c4_r9_1>(frame.at(0x24).addr());  // (from the original)
    u32 r7_1 = r0 + 0x798u;  // (from the original)
    gptr<Local_006ae9c4_ea_1> ea_1 = gptr<Local_006ae9c4_ea_1>(0x8819ccu);  // (from the original)
    u32 r2_1 = ea_1->word_4;
    u32 r3_1 = ea_1->word_8;
    u32 r5_1 = ea_1->word_c;
    u32 r8_1 = ea_1->word_10;
    u32 r12_1 = ea_1->word_14;
    r9_1->word_0 = ea_1->word_0;
    r9_1->word_4 = r2_1;
    r9_1->word_8 = r3_1;
    r9_1->word_c = r5_1;
    r9_1->word_10 = r8_1;
    r9_1->word_14 = r12_1;
    gptr<Local_006ae9c4_r3_2> r3_2 = gptr<Local_006ae9c4_r3_2>(frame.at(0x1c).addr());  // (from the original)
    *frame.at<u32>(0x3c) = *global_008819e4;  // (from the original)
    gptr<Local_006ae9c4_r0_1> r0_1 = gptr<Local_006ae9c4_r0_1>(r0 + 0x15d0u);  // (from the original)
    r3_2->word_0 = r0 + 0x2cu;  // (from the original)
    r3_2->word_4 = r7_1;
    call_002f6e98(r0_1.addr(), frame.at(0x1c).addr(), 0u, r3_2.addr());  // (from the original)
    u32 r2_2 = guest::cpu()->r[2];
    u32 r3_3 = guest::cpu()->r[3];
    float S0_1 = std::bit_cast<float>(*global_006aeb00);
    *gptr<u32>(r0_1.addr() + 0xd4u) = *gptr<u32>(r0_1.addr() + 0xd4u) | 0x40u;  // (from the original)
    *frame.at<u32>(0) = 0;
    *frame.at<u32>(4) = 0;
    float S1_1 = std::bit_cast<float>(*global_006aeb04);
    *frame.at<u32>(8) = 0;
    *frame.at<u32>(0xc) = 0;  // (from the original)
    *frame.at<u32>(0x10) = 0;  // (from the original)
    *frame.at<u32>(0x14) = 0;  // (from the original)
    *frame.at<u32>(0x18) = 0;  // (from the original)
    gptr<Local_006ae9c4_ea_11> ea_11 = gptr<Local_006ae9c4_ea_11>(frame.at(8).addr());
    ea_11->word_0 = std::bit_cast<u32>(S0_1);
    ea_11->word_4 = std::bit_cast<u32>(S1_1);
    gptr<Local_006ae9c4_ea_12> ea_12 = gptr<Local_006ae9c4_ea_12>(0x8817b0u);  // (from the original)
    u32 r1_4 = ea_12->word_0;
    u32 r6_1 = ea_12->word_4;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    u32 r0_2 = call_0056878c(r7_1, r1_4, r2_2, r3_3);
    u32 r3_4 = guest::cpu()->r[3];
    *frame.at<u32>(0) = r0_2;
    u32 r0_3 = call_004b4fc0(r7_1, r6_1, 1u, r3_4);
    u32 r2_3 = guest::cpu()->r[2];
    u32 r3_5 = guest::cpu()->r[3];
    gptr<Local_006ae9c4_r6_2> r6_2 = gptr<Local_006ae9c4_r6_2>(r0 + 0x14f0u);  // (from the original)
    *frame.at<u32>(4) = r0_3;
    *frame.at<u32>(0x10) = 0;  // (from the original)
    *frame.at<u32>(0x14) = 0;  // (from the original)
    call_002b6a00(r6_2.addr(), frame.at(0).addr(), r2_3, r3_5);
    u32 r3_6 = guest::cpu()->r[3];
    call_002f7508(r0_1.addr(), r6_2.addr(), 1u, r3_6);
    call_002f6a30(r0_1.addr(), 0u);
    r0_1->word_d4 = r0_1->word_d4 | 8u;
    u32 r1_6 = 0x15cau;  // (from the original)
    *gptr<u32>(0x15bcu + r0) = 0x100041f;  // (from the original)
    *gptr<u8>(r1_6 + r0) = 1;
    r6_2->word_d0 = 0x1000398;  // (from the original)
    u32 r1_7 = r1_6 + 0xd6u;  // (from the original)
    r6_2->byte_db = 1;
    r6_2->byte_dc = 1;
    *gptr<u16>(r1_7 + r0) = 3;
    guest::cpu()->r[1] = r1_7;
}

}  // namespace d_006ae9c4
GUEST_EXPORT_FRAMED(0x006ae9c4, d_006ae9c4::f_006ae9c4, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_006aee8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006aee8c {

struct __attribute__((packed)) Local_006aee8c_r0_5 {
    u8 unknown_0[0x18];  // (not used here)
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
};
GUEST_OFFSET(Local_006aee8c_r0_5, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_006aee8c_r0_5, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Local_006aee8c_r0_5, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Local_006aee8c_r0_5, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Local_006aee8c_r0_5, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Local_006aee8c_r0_5, word_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Local_006aee8c_r0_5, word_30, 0x30);  // (from the original)
GUEST_OFFSET(Local_006aee8c_r0_5, word_34, 0x34);  // (from the original)
GUEST_OFFSET(Local_006aee8c_r0_5, word_38, 0x38);  // (from the original)
GUEST_OFFSET(Local_006aee8c_r0_5, word_3c, 0x3c);  // (from the original)
GUEST_OFFSET(Local_006aee8c_r0_5, word_40, 0x40);  // (from the original)
GUEST_OFFSET(Local_006aee8c_r0_5, word_44, 0x44);  // (from the original)
GUEST_OFFSET(Local_006aee8c_r0_5, word_48, 0x48);  // (from the original)
GUEST_OFFSET(Local_006aee8c_r0_5, word_4c, 0x4c);  // (from the original)
GUEST_OFFSET(Local_006aee8c_r0_5, word_50, 0x50);  // (from the original)

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

void f_006aee8c(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x5c);  // the original's stack frame
    u32 res_1 = 0;
    u32 r3_3 = 0;
    u32 r4 = r0;
    u32 r0_2 = call_003083bc(frame.at(4).addr(), frame.at(0x1c).addr(), 0x1eu, r3);  // (from the original)
    u32 r5 = 0x909ea8u;  // (from the original)
    *gptr<u32>(r0_2) = r5;
    u32 r0_4 = call_005f4bfc(r0_2 + 0xcu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    gptr<Local_006aee8c_r0_5> r0_5 = gptr<Local_006aee8c_r0_5>(r0_4 - 0xcu);  // (from the original)
    u32 r6 = 0u;
    r0_5->word_18 = r6;
    r0_5->word_1c = r6;
    r0_5->word_20 = r6;
    r0_5->word_24 = r6;
    r0_5->word_28 = r6;
    r0_5->word_2c = r6;
    r0_5->word_30 = r6;
    r0_5->word_34 = r6;
    r0_5->word_38 = r6;
    r0_5->word_3c = r6;
    r0_5->word_40 = r6;
    r0_5->word_44 = r6;
    r0_5->word_48 = r6;
    u32 r2 = 0x8906ecu;  // (from the original)
    r0_5->word_4c = r6;
    r0_5->word_50 = r6;
    u32 r1 = 0xfu;  // (from the original)
    r0 = r0_5.addr() + 0x16u;  // (from the original)
    do {
        u32 r3_2 = *gptr<u16>(r2);
        res_1 = r1 - 1u;
        r1 = res_1;
        *gptr<u16>(r0 + 2u) = u16(r3_2);
        r3_3 = *gptr<u16>(r2);
        u32 ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r3_3);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    call_005ea8f8(*global_0095decc, 0u, r2, r3_3);
    *frame.at<u32>(0) = r6;
    call_005ea964(*global_0095decc, frame.at(4).addr(), 0x881a44u, 0x167u);  // (from the original)
    call_005ea8dc(*global_0095decc, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_9 = r4 + 0x4bcu;  // (from the original)
    u32 r0_10 = call_00568a80(r0_9, 0x881a68u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_006ad3a0(r4, r0_10, frame.at(4).addr(), guest::cpu()->r[3]);
    u32 r0_11 = call_00568a80(r0_9, 0x881a5cu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_006ad3a0(r4, r0_11, frame.at(4).addr(), guest::cpu()->r[3]);
    u32 r0_12 = r4 + 0x6974u;  // (from the original)
    call_005e2e50(r0_12, frame.at(4).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
    call_005e2f94(r0_12, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r2_9 = guest::cpu()->r[2];
    u32 r3_11 = guest::cpu()->r[3];
    u32 r0_13 = r4 + 0x6a38u;  // (from the original)
    u32 r1_6 = frame.at(4).addr();
    call_005e2e50(r0_13, r1_6, r2_9, r3_11);
    call_005e2f94(r0_13, r1_6, r2_9, r3_11);
    *frame.at<u32>(4) = r5;
}

}  // namespace d_006aee8c
GUEST_EXPORT_FRAMED(0x006aee8c, d_006aee8c::f_006aee8c, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_006af218: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006af218 {

struct __attribute__((packed)) Local_006af218_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_006af218_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006af218_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_006af218_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_006af218_ea_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_006af218_ea_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_006af218_ea_1, word_14, 0x14);  // (from the original)

struct __attribute__((packed)) Local_006af218_r0_1 {
    u8 unknown_0[0xd4];  // (not used here)
    u32 word_d4;
};
GUEST_OFFSET(Local_006af218_r0_1, word_d4, 0xd4);  // (from the original)

struct __attribute__((packed)) Local_006af218_r0_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006af218_r0_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006af218_r0_2, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_006af218_r3_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006af218_r3_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006af218_r3_2, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_006af218_r6_2 {
    u8 unknown_0[0xd0];  // (not used here)
    u32 word_d0;
    u8 unknown_d4[0x7];  // (not used here)
    u8 byte_db;
    u8 byte_dc;
};
GUEST_OFFSET(Local_006af218_r6_2, word_d0, 0xd0);  // (from the original)
GUEST_OFFSET(Local_006af218_r6_2, byte_db, 0xdb);  // (from the original)
GUEST_OFFSET(Local_006af218_r6_2, byte_dc, 0xdc);  // (from the original)

struct __attribute__((packed)) Local_006af218_r9_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_006af218_r9_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006af218_r9_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_006af218_r9_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_006af218_r9_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_006af218_r9_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_006af218_r9_1, word_14, 0x14);  // (from the original)

inline guest::global<u32, 0x006af350> global_006af350;  // (from the original)
inline guest::global<u32, 0x006af354> global_006af354;  // (from the original)
inline guest::global<u32, 0x008817a8> global_008817a8;  // (from the original)
inline guest::global<u32, 0x008817ac> global_008817ac;  // (from the original)
inline guest::global<u32, 0x008819c0> global_008819c0;  // (from the original)
inline constexpr guest::Function<0x002b6a00, u32(u32, u32, u32, u32)> call_002b6a00;  // (from the original)
inline constexpr guest::Function<0x002f6a30, u32(u32, u32)> call_002f6a30;  // (from the original)
inline constexpr guest::Function<0x002f6e98, u32(u32, u32, u32, u32)> call_002f6e98;  // (from the original)
inline constexpr guest::Function<0x002f7508, u32(u32, u32, u32)> call_002f7508;  // (from the original)
inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> call_004b4fc0;  // (from the original)
inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> call_0056878c;  // (from the original)

void f_006af218(u32 r0, float S0, float S1) {
    guest::StackFrame frame(0x44);  // the original's stack frame
    gptr<Local_006af218_r9_1> r9_1 = gptr<Local_006af218_r9_1>(frame.at(0x24).addr());  // (from the original)
    u32 r7_1 = r0 + 0x4bcu;  // (from the original)
    gptr<Local_006af218_ea_1> ea_1 = gptr<Local_006af218_ea_1>(0x8819a8u);  // (from the original)
    u32 r2_1 = ea_1->word_4;
    u32 r3_1 = ea_1->word_8;
    u32 r5_1 = ea_1->word_c;
    u32 r8_1 = ea_1->word_10;
    u32 r12_1 = ea_1->word_14;
    r9_1->word_0 = ea_1->word_0;
    r9_1->word_4 = r2_1;
    r9_1->word_8 = r3_1;
    r9_1->word_c = r5_1;
    r9_1->word_10 = r8_1;
    r9_1->word_14 = r12_1;
    gptr<Local_006af218_r3_2> r3_2 = gptr<Local_006af218_r3_2>(frame.at(0x1c).addr());  // (from the original)
    *frame.at<u32>(0x3c) = *global_008819c0;  // (from the original)
    gptr<Local_006af218_r0_1> r0_1 = gptr<Local_006af218_r0_1>(r0 + 0x140cu);  // (from the original)
    r3_2->word_0 = r0 + 0x2cu;  // (from the original)
    r3_2->word_4 = r7_1;
    call_002f6e98(r0_1.addr(), frame.at(0x1c).addr(), 0u, r3_2.addr());  // (from the original)
    u32 r2_2 = guest::cpu()->r[2];
    u32 r3_3 = guest::cpu()->r[3];
    float S0_1 = std::bit_cast<float>(*global_006af350);
    r0_1->word_d4 = r0_1->word_d4 | 0x40u;  // (from the original)
    *frame.at<u32>(0) = 0;
    *frame.at<u32>(4) = 0;
    float S1_1 = std::bit_cast<float>(*global_006af354);
    gptr<Local_006af218_r0_2> r0_2 = gptr<Local_006af218_r0_2>(frame.at(8).addr());
    *frame.at<u32>(8) = 0;
    *frame.at<u32>(0xc) = 0;  // (from the original)
    *frame.at<u32>(0x10) = 0;  // (from the original)
    *frame.at<u32>(0x14) = 0;  // (from the original)
    *frame.at<u32>(0x18) = 0;  // (from the original)
    r0_2->word_0 = std::bit_cast<u32>(S0_1);
    r0_2->word_4 = std::bit_cast<u32>(S1_1);
    u32 r1_3 = *global_008817a8;
    u32 r6_1 = *global_008817ac;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    u32 r0_3 = call_0056878c(r7_1, r1_3, r2_2, r3_3);
    u32 r3_4 = guest::cpu()->r[3];
    *frame.at<u32>(0) = r0_3;
    u32 r0_4 = call_004b4fc0(r7_1, r6_1, 1u, r3_4);
    u32 r2_3 = guest::cpu()->r[2];
    u32 r3_5 = guest::cpu()->r[3];
    gptr<Local_006af218_r6_2> r6_2 = gptr<Local_006af218_r6_2>(r0 + 0x132cu);  // (from the original)
    *frame.at<u32>(4) = r0_4;
    *frame.at<u32>(0x10) = 0;  // (from the original)
    *frame.at<u32>(0x14) = 0;  // (from the original)
    call_002b6a00(r6_2.addr(), frame.at(0).addr(), r2_3, r3_5);
    call_002f7508(r0_1.addr(), r6_2.addr(), 1u);
    *gptr<u32>(0x13f8u + r0) = 0x100041d;  // (from the original)
    *gptr<u8>(0x1406u + r0) = 1;  // (from the original)
    r6_2->word_d0 = 0x1000398;  // (from the original)
    r6_2->byte_db = 1;
    r6_2->byte_dc = 1;
    call_002f6a30(r0_1.addr(), 0u);
    r0_1->word_d4 = r0_1->word_d4 | 8u;
    *gptr<u16>(0x14dcu + r0) = 3;  // (from the original)
    guest::cpu()->r[1] = 0x14dcu;  // (from the original)
}

}  // namespace d_006af218
GUEST_EXPORT_FRAMED(0x006af218, d_006af218::f_006af218, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_006af568: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006af568 {

struct __attribute__((packed)) Local_006af568_r0_6 {
    u8 unknown_0[0x18];  // (not used here)
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
};
GUEST_OFFSET(Local_006af568_r0_6, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_006af568_r0_6, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Local_006af568_r0_6, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Local_006af568_r0_6, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Local_006af568_r0_6, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Local_006af568_r0_6, word_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Local_006af568_r0_6, word_30, 0x30);  // (from the original)
GUEST_OFFSET(Local_006af568_r0_6, word_34, 0x34);  // (from the original)
GUEST_OFFSET(Local_006af568_r0_6, word_38, 0x38);  // (from the original)
GUEST_OFFSET(Local_006af568_r0_6, word_3c, 0x3c);  // (from the original)

inline guest::global<u32, 0x0095decc> global_0095decc;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> call_004b4fc0;  // (from the original)
inline constexpr guest::Function<0x00568630, u32(u32, u32, u32, u32)> call_00568630;  // (from the original)
inline constexpr guest::Function<0x0056878c, u32(u32, u32)> call_0056878c;  // (from the original)
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

void f_006af568(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x48);  // the original's stack frame
    u32 res_1 = 0;
    u32 r3_4 = 0;
    u32 r2_5 = 0;
    u32 r3_9 = 0;
    u32 r4 = r0;
    u32 r5 = r2;
    u32 r6 = r1;
    u32 r0_1 = call_0077033c(r1, r1, r2, r3);
    u32 r10 = 0u;
    u32 r8 = r4 + 0x4bcu;  // (from the original)
    if (r0_1 != 0) {
        u32 r0_3 = call_003083bc(frame.at(8).addr(), frame.at(0x20).addr(), 0x14u, guest::cpu()->r[3]);  // (from the original)
        u32 r7 = 0x909ce8u;  // (from the original)
        *gptr<u32>(r0_3) = r7;
        u32 r0_5 = call_005f4bfc(r0_3 + 0xcu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        gptr<Local_006af568_r0_6> r0_6 = gptr<Local_006af568_r0_6>(r0_5 - 0xcu);  // (from the original)
        r2 = 0x8906ecu;  // (from the original)
        r0_6->word_18 = r10;
        r0_6->word_1c = r10;
        r0_6->word_20 = r10;
        r0_6->word_24 = r10;
        r0_6->word_28 = r10;
        r0_6->word_2c = r10;
        r0_6->word_30 = r10;
        r0_6->word_34 = r10;
        r0_6->word_38 = r10;
        r0_6->word_3c = r10;
        r1 = 0xau;  // (from the original)
        r0 = r0_6.addr() + 0x16u;  // (from the original)
        do {
            u32 r3_3 = *gptr<u16>(r2);
            res_1 = r1 - 1u;
            r1 = res_1;
            *gptr<u16>(r0 + 2u) = u16(r3_3);
            r3_4 = *gptr<u16>(r2);
            u32 ea_2 = r0 + 4u;
            *gptr<u16>(ea_2) = u16(r3_4);
            r0 = ea_2;
            guest::preempt();
        } while (res_1 != 0);
        call_005ea8f8(*global_0095decc, 0u, r2, r3_4);
        if (r5 != 0) {
            u32 r0_8 = call_00770300(r6, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            u32 r1_4 = guest::cpu()->r[1];
            call_005f12c4(*gptr<u32>(*global_0095decc + 0x14u), r1_4, r0_8, r1_4);  // (from the original)
            *frame.at<u32>(0) = r10;
            call_005ea964(*global_0095decc, frame.at(8).addr(), 0x6af76cu, 0x168u);  // (from the original)
            u32 r0_11 = call_004b4fc0(r8, 0x6af778u, 1u, guest::cpu()->r[3]);  // (from the original)
            call_00568630(r8, r4 + 0x720u, r0_11, 0u);  // (from the original)
            call_00569508(r4 + 0x720u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            call_00568c10(r8, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            call_00568984(r8, r4 + 0x720u, r0_11, 0u);  // (from the original)
            r2_5 = guest::cpu()->r[2];
            r3_9 = guest::cpu()->r[3];
        } else {
            *frame.at<u32>(0) = r10;
            call_005ea964(*global_0095decc, frame.at(8).addr(), 0x6af76cu, 0x169u);  // (from the original)
            r2_5 = guest::cpu()->r[2];
            r3_9 = guest::cpu()->r[3];
        }
        call_005ea8dc(*global_0095decc, 0u, r2_5, r3_9);
        u32 r0_15 = r4 + 0x6728u;  // (from the original)
        call_005e2e50(r0_15, frame.at(8).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
        call_005e2f94(r0_15, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r2_8 = guest::cpu()->r[2];
        u32 r3_12 = guest::cpu()->r[3];
        u32 r0_16 = r4 + 0x67ecu;  // (from the original)
        u32 r1_13 = frame.at(8).addr();
        call_005e2e50(r0_16, r1_13, r2_8, r3_12);
        call_005e2f94(r0_16, r1_13, r2_8, r3_12);
        *frame.at<u32>(8) = r7;
        return;
    }
    u32 r0_17 = call_0056878c(r8, 0x6af788u);  // (from the original)
    *gptr<u8>(r0_17 + 0xb7u) = u8(u32(*gptr<u8>(r0_17 + 0xb7u)) & 0xfeu);  // (from the original)
}

}  // namespace d_006af568
GUEST_EXPORT_FRAMED(0x006af568, d_006af568::f_006af568, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_006afbcc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006afbcc {

inline constexpr guest::Function<0x001323bc, u32(u32)> call_001323bc;  // (from the original)
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32)> call_00569e6c;  // (from the original)

void f_006afbcc(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = call_001323bc(r0);
    frame.release();
    call_00569e6c(r0_1, (r0 + 0x400u) + 0xbcu, 0u);  // (from the original)
    return;
}

}  // namespace d_006afbcc
GUEST_EXPORT(0x006afbcc, d_006afbcc::f_006afbcc);
