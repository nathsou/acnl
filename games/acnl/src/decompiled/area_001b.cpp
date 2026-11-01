// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_001b02c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b02c0 {

struct __attribute__((packed)) Local_001b02c0_r0_6 {
    u8 unknown_0[0x24];  // (not used here)
    u32 word_24;
    u8 unknown_28[0xabc];  // (not used here)
    u32 word_ae4;
    u32 word_ae8;
};
GUEST_OFFSET(Local_001b02c0_r0_6, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Local_001b02c0_r0_6, word_ae4, 0xae4);  // (from the original)
GUEST_OFFSET(Local_001b02c0_r0_6, word_ae8, 0xae8);  // (from the original)

inline constexpr guest::Function<0x001324a8, u32(u32)> call_001324a8;  // (from the original)
inline constexpr guest::Function<0x001c55b0, u32(u32)> call_001c55b0;  // (from the original)
inline constexpr guest::Function<0x002f7604, u32(u32)> call_002f7604;  // (from the original)

u32 f_001b02c0(u32 r0) {
    u32 r0_1 = call_001c55b0(r0);
    *gptr<u32>(r0_1) = 0x8eb3f8;  // (from the original)
    u32 r0_3 = call_001324a8(r0_1 + 0x9e0u);  // (from the original)
    *gptr<u32>(r0_3 + 0xcu) = 0;  // (from the original)
    *gptr<u32>(r0_3) = 0x8ebb18;  // (from the original)
    u32 ea_1 = r0_3 + 0x1cu;  // (from the original)
    *gptr<u32>(ea_1) = 0;
    u32 r0_5 = call_002f7604(ea_1 + 4u);
    gptr<Local_001b02c0_r0_6> r0_6 = gptr<Local_001b02c0_r0_6>(r0_5 - 0xa00u);  // (from the original)
    r0_6->word_24 = 0x1b0314;  // (from the original)
    r0_6->word_ae8 = ~0u;
    r0_6->word_ae4 = 0;
    guest::cpu()->r[1] = 0x1b0314u;  // (from the original)
    return r0_6.addr();
}

}  // namespace d_001b02c0
GUEST_EXPORT_FRAMED(0x001b02c0, d_001b02c0::f_001b02c0, 0x4010);  // pushes {r4, lr} first, as the original

// f_001b1010: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b1010 {

inline constexpr guest::Function<0x001bc1fc, u32(u32)> call_001bc1fc;  // (from the original)
inline constexpr guest::Function<0x001bc684, u32(u32)> call_001bc684;  // (from the original)
inline constexpr guest::Function<0x001bcbb8, u32(u32, u32, u32, u32)> call_001bcbb8;  // (from the original)
inline constexpr guest::Function<0x001bd6f0, u32(u32)> call_001bd6f0;  // (from the original)
inline constexpr guest::Function<0x001bdedc, u32(u32)> call_001bdedc;  // (from the original)
inline constexpr guest::Function<0x001be284, u32(u32)> call_001be284;  // (from the original)

u32 f_001b1010() {
    u32 r0_1 = call_001bcbb8(0xac3a14u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_2 = call_001bd6f0(0xac4e40u);  // (from the original)
    u32 r0_3 = call_001bc684(0xac8c6cu);  // (from the original)
    u32 r0_4 = call_001bdedc(0xacfa98u);  // (from the original)
    u32 r0_5 = call_001be284(0xacfdc4u);  // (from the original)
    u32 r0_6 = call_001bc1fc(0xad0ff0u);  // (from the original)
    return r0_6 & ((((r0_1 & r0_2) & r0_3) & r0_4) & r0_5);
}

}  // namespace d_001b1010
GUEST_EXPORT_FRAMED(0x001b1010, d_001b1010::f_001b1010, 0x4010);  // pushes {r4, lr} first, as the original

// f_001b1308: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b1308 {

inline constexpr guest::Function<0x00132478, u32(u32, u32, u32, u32)> call_00132478;  // (from the original)
inline constexpr guest::Function<0x00138744, u32(u32, u32, u32, u32)> call_00138744;  // (from the original)
inline constexpr guest::Function<0x0013f134, u32(u32, u32, u32, u32)> call_0013f134;  // (from the original)
inline constexpr guest::Function<0x002f747c, u32(u32, u32, u32, u32)> call_002f747c;  // (from the original)
inline constexpr guest::Function<0x0031758c, u32(u32, u32, u32, u32)> call_0031758c;  // (from the original)
inline constexpr guest::Function<0x005b19f8, u32(u32, u32, u32, u32)> call_005b19f8;  // (from the original)

u32 f_001b1308(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x24);  // the original's stack frame
    u32 zf_2 = 0;
    u32 zf_4 = 0;
    u32 r1_6 = 0;
    u32 cf_1 = 0;
    u32 zf_7 = 0;
    u32 zf_9 = 0;
    u32 r1_12 = 0;
    u32 cf_2 = 0;
    u32 zf_12 = 0;
    u32 zf_14 = 0;
    u32 r1_18 = 0;
    u32 cf_3 = 0;
    u32 zf_17 = 0;
    u32 zf_19 = 0;
    u32 r1_24 = 0;
    u32 cf_4 = 0;
    u32 zf_22 = 0;
    u32 zf_24 = 0;
    u32 r1_30 = 0;
    u32 cf_5 = 0;
    u32 zf_27 = 0;
    u32 zf_29 = 0;
    u32 r1_37 = 0;
    u32 cf_6 = 0;
    u32 r10 = 0xc800u;  // (from the original)
    u32 r5 = 0xac3a14u;  // (from the original)
    u32 r11 = 0x952c54u;  // (from the original)
    u32 r4 = *gptr<u32>(0x140cu + r5);  // (from the original)
    u32 r9 = *gptr<u32>(r11);
    u32 zf_1 = r4 == 0;
    if (!zf_1) {
        do {
            call_005b19f8(r4 + 0xcu, r1, r2, r3);  // (from the original)
            call_00138744(r4 + 0x14u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r4 = *gptr<u32>(r4 + 8u);
            zf_2 = r4 == 0;
            guest::preempt();
        } while (!zf_2);
    }
    r4 = *gptr<u32>(0x1424u + r5);  // (from the original)
    u32 zf_3 = r4 == 0;
    if (!zf_3) {
        do {
            call_005b19f8(r4 + 0xcu, r1, r2, r3);  // (from the original)
            call_00138744(r4 + 0x14u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r4 = *gptr<u32>(r4 + 8u);
            zf_4 = r4 == 0;
            guest::preempt();
        } while (!zf_4);
    }
    call_00132478((r5 + 0x1400u) + 8u, r1, r2, r3);  // (from the original)
    u32 r0_8 = (r5 + 0x1400u) + 0x14u;  // (from the original)
    u32 r6 = r0_8;
    call_00132478(r0_8, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_00132478((r5 + 0x1000u) + 0x420u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    do {
        call_0013f134(r6, (r5 + (r4 << 8)) + 8u, r2, r3);
        r1_6 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 += 1u;
        cf_1 = r4 >= 0x14u;  // (from the original)
        guest::preempt();
    } while (!cf_1);
    call_002f747c(r5, r1_6, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = 0x9047f8u;  // (from the original)
    u32 zf_5 = r9 == 0;
    u32 r7 = 0u;
    u32 r8 = 1u;
    if (!zf_5) {
        *frame.at<u32>(0xc) = 0x88e3d4;  // (from the original)
        *frame.at<u32>(8) = r6;
        *frame.at<u32>(4) = r7;
        *frame.at<u32>(0) = r8;
        call_0031758c(r5, r10, r9, frame.at(8).addr());
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r5 = 0xac4e40u;  // (from the original)
    r9 = *gptr<u32>(r11);
    r10 = 0x26c00u;  // (from the original)
    r4 = *gptr<u32>(0x3e0cu + r5);  // (from the original)
    u32 zf_6 = r4 == 0;
    if (!zf_6) {
        do {
            call_005b19f8(r4 + 0xcu, r1, r2, r3);  // (from the original)
            call_00138744(r4 + 0x14u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r4 = *gptr<u32>(r4 + 8u);
            zf_7 = r4 == 0;
            guest::preempt();
        } while (!zf_7);
    }
    r4 = *gptr<u32>(0x3e24u + r5);  // (from the original)
    u32 zf_8 = r4 == 0;
    if (!zf_8) {
        do {
            call_005b19f8(r4 + 0xcu, r1, r2, r3);  // (from the original)
            call_00138744(r4 + 0x14u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r4 = *gptr<u32>(r4 + 8u);
            zf_9 = r4 == 0;
            guest::preempt();
        } while (!zf_9);
    }
    call_00132478((r5 + 0x3c00u) + 0x208u, r1, r2, r3);  // (from the original)
    u32 r0_19 = (r5 + 0x3c00u) + 0x214u;  // (from the original)
    *frame.at<u32>(0x10) = r0_19;  // (from the original)
    call_00132478(r0_19, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_00132478((r5 + 0x3000u) + 0xe20u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    do {
        call_0013f134(*frame.at<u32>(0x10), (r5 + (r4 << 8)) + 8u, r2, r3);  // (from the original)
        r1_12 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 += 1u;
        cf_2 = r4 >= 0x3eu;  // (from the original)
        guest::preempt();
    } while (!cf_2);
    call_002f747c(r5, r1_12, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 zf_10 = r9 == 0;
    if (!zf_10) {
        *frame.at<u32>(0x14) = 0x88e3d4;  // (from the original)
        *frame.at<u32>(0x10) = r6;  // (from the original)
        *frame.at<u32>(4) = r7;
        *frame.at<u32>(0) = r8;
        call_0031758c(r5, r10, r9, frame.at(0x10).addr());  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r5 = 0xac8c6cu;  // (from the original)
    r9 = *gptr<u32>(r11);
    r10 = 0x44c00u;  // (from the original)
    r4 = *gptr<u32>(0x6e0cu + r5);  // (from the original)
    u32 zf_11 = r4 == 0;
    if (!zf_11) {
        do {
            call_005b19f8(r4 + 0xcu, r1, r2, r3);  // (from the original)
            call_00138744(r4 + 0x14u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r4 = *gptr<u32>(r4 + 8u);
            zf_12 = r4 == 0;
            guest::preempt();
        } while (!zf_12);
    }
    r4 = *gptr<u32>(0x6e24u + r5);  // (from the original)
    u32 zf_13 = r4 == 0;
    if (!zf_13) {
        do {
            call_005b19f8(r4 + 0xcu, r1, r2, r3);  // (from the original)
            call_00138744(r4 + 0x14u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r4 = *gptr<u32>(r4 + 8u);
            zf_14 = r4 == 0;
            guest::preempt();
        } while (!zf_14);
    }
    call_00132478((r5 + 0x6c00u) + 0x208u, r1, r2, r3);  // (from the original)
    u32 r0_31 = (r5 + 0x6c00u) + 0x214u;  // (from the original)
    *frame.at<u32>(8) = r0_31;
    call_00132478(r0_31, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_00132478((r5 + 0x6000u) + 0xe20u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    do {
        call_0013f134(*frame.at<u32>(8), (r5 + (r4 << 8)) + 8u, r2, r3);
        r1_18 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 += 1u;
        cf_3 = r4 >= 0x6eu;  // (from the original)
        guest::preempt();
    } while (!cf_3);
    call_002f747c(r5, r1_18, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 zf_15 = r9 == 0;
    if (!zf_15) {
        *frame.at<u32>(0xc) = 0x88e3d4;  // (from the original)
        *frame.at<u32>(8) = r6;
        *frame.at<u32>(4) = r7;
        *frame.at<u32>(0) = r8;
        call_0031758c(r5, r10, r9, frame.at(8).addr());
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r5 = 0xacfa98u;  // (from the original)
    r9 = *gptr<u32>(r11);
    r10 = 0x1e00u;  // (from the original)
    r4 = *gptr<u32>(r5 + 0x30cu);  // (from the original)
    u32 zf_16 = r4 == 0;
    if (!zf_16) {
        do {
            call_005b19f8(r4 + 0xcu, r1, r2, r3);  // (from the original)
            call_00138744(r4 + 0x14u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r4 = *gptr<u32>(r4 + 8u);
            zf_17 = r4 == 0;
            guest::preempt();
        } while (!zf_17);
    }
    r4 = *gptr<u32>(r5 + 0x324u);  // (from the original)
    u32 zf_18 = r4 == 0;
    if (!zf_18) {
        do {
            call_005b19f8(r4 + 0xcu, r1, r2, r3);  // (from the original)
            call_00138744(r4 + 0x14u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r4 = *gptr<u32>(r4 + 8u);
            zf_19 = r4 == 0;
            guest::preempt();
        } while (!zf_19);
    }
    call_00132478(r5 + 0x308u, r1, r2, r3);  // (from the original)
    call_00132478(r5 + 0x314u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_00132478(r5 + 0x320u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    do {
        call_0013f134(r5 + 0x314u, (r5 + (r4 << 8)) + 8u, r2, r3);  // (from the original)
        r1_24 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 += 1u;
        cf_4 = r4 >= 3u;
        guest::preempt();
    } while (!cf_4);
    call_002f747c(r5, r1_24, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 zf_20 = r9 == 0;
    if (!zf_20) {
        *frame.at<u32>(0x14) = 0x88e3d4;  // (from the original)
        *frame.at<u32>(0x10) = r6;  // (from the original)
        *frame.at<u32>(4) = r7;
        *frame.at<u32>(0) = r8;
        call_0031758c(r5, r10, r9, frame.at(0x10).addr());  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r5 = 0xacfdc4u;  // (from the original)
    r9 = *gptr<u32>(r11);
    r10 = r5 + 0x1000u;  // (from the original)
    *frame.at<u32>(0x18) = 0xbe00;  // (from the original)
    r4 = *gptr<u32>(r10 + 0x20cu);  // (from the original)
    u32 zf_21 = r4 == 0;
    if (!zf_21) {
        do {
            call_005b19f8(r4 + 0xcu, r1, r2, r3);  // (from the original)
            call_00138744(r4 + 0x14u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r4 = *gptr<u32>(r4 + 8u);
            zf_22 = r4 == 0;
            guest::preempt();
        } while (!zf_22);
    }
    r4 = *gptr<u32>(r10 + 0x224u);  // (from the original)
    u32 zf_23 = r4 == 0;
    if (!zf_23) {
        do {
            call_005b19f8(r4 + 0xcu, r1, r2, r3);  // (from the original)
            call_00138744(r4 + 0x14u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r4 = *gptr<u32>(r4 + 8u);
            zf_24 = r4 == 0;
            guest::preempt();
        } while (!zf_24);
    }
    call_00132478((r5 + 0x1000u) + 0x208u, r1, r2, r3);  // (from the original)
    u32 r0_52 = (r5 + 0x1000u) + 0x214u;  // (from the original)
    r10 = r0_52;
    call_00132478(r0_52, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_00132478((r5 + 0x1000u) + 0x220u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    do {
        call_0013f134(r10, (r5 + (r4 << 8)) + 8u, r2, r3);
        r1_30 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 += 1u;
        cf_5 = r4 >= 0x12u;  // (from the original)
        guest::preempt();
    } while (!cf_5);
    call_002f747c(r5, r1_30, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 zf_25 = r9 == 0;
    if (!zf_25) {
        *frame.at<u32>(4) = r7;
        u32 r1_31 = *frame.at<u32>(0x18);  // (from the original)
        *frame.at<u32>(0xc) = 0x88e3d4;  // (from the original)
        *frame.at<u32>(8) = r6;
        *frame.at<u32>(0) = r8;
        call_0031758c(r5, r1_31, r9, frame.at(8).addr());
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r5 = 0xad0ff0u;  // (from the original)
    r9 = *gptr<u32>(r11);
    r10 = 0x12200u;  // (from the original)
    r4 = *gptr<u32>(0x1f0cu + r5);  // (from the original)
    u32 zf_26 = r4 == 0;
    if (!zf_26) {
        do {
            call_005b19f8(r4 + 0xcu, r1, r2, r3);  // (from the original)
            call_00138744(r4 + 0x14u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r4 = *gptr<u32>(r4 + 8u);
            zf_27 = r4 == 0;
            guest::preempt();
        } while (!zf_27);
    }
    r4 = *gptr<u32>(0x1f24u + r5);  // (from the original)
    u32 zf_28 = r4 == 0;
    if (!zf_28) {
        do {
            call_005b19f8(r4 + 0xcu, r1, r2, r3);  // (from the original)
            call_00138744(r4 + 0x14u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r4 = *gptr<u32>(r4 + 8u);
            zf_29 = r4 == 0;
            guest::preempt();
        } while (!zf_29);
    }
    call_00132478((r5 + 0x1c00u) + 0x308u, r1, r2, r3);  // (from the original)
    u32 r0_63 = (r5 + 0x1c00u) + 0x314u;  // (from the original)
    r11 = r0_63;
    call_00132478(r0_63, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_00132478((r5 + 0x1000u) + 0xf20u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    do {
        call_0013f134(r11, (r5 + (r4 << 8)) + 8u, r2, r3);
        r1_37 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 += 1u;
        cf_6 = r4 >= 0x1fu;  // (from the original)
        guest::preempt();
    } while (!cf_6);
    u32 r0_67 = call_002f747c(r5, r1_37, r2, r3);
    u32 zf_30 = r9 == 0;
    if (!zf_30) {
        *frame.at<u32>(0xc) = 0x88e3d4;  // (from the original)
        *frame.at<u32>(8) = r6;
        *frame.at<u32>(4) = r7;
        *frame.at<u32>(0) = r8;
        r0_67 = call_0031758c(r5, r10, r9, frame.at(8).addr());
    }
    return r0_67;
}

}  // namespace d_001b1308
GUEST_EXPORT_FRAMED(0x001b1308, d_001b1308::f_001b1308, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_001b1900: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b1900 {

struct __attribute__((packed)) Object_001b1900_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_001b1900_0, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Object_001b1900_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_001b1900_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_001b1900_1, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x00134544, u32(u32, u32, u32, u32)> call_00134544;  // (from the original)
inline constexpr guest::Function<0x003193e8, u32(u32, u32, u32, u32)> call_003193e8;  // (from the original)
inline constexpr guest::Function<0x007586b4, u32(u32, u32, u32, u32)> call_007586b4;  // (from the original)

u32 f_001b1900(gptr<Object_001b1900_0> arg0, gptr<Object_001b1900_1> arg1) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r3_3 = 0;
    u32 r4_1 = 0;
    u32 r6 = r0;
    u32 r5 = r1;
    u32 r4 = r1;
    if (arg1->word_4 != 3u) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    if (arg0->word_4 == 3u) {
        goto L_1b1988;
    }
    if (arg1->word_8 == 0) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
L_1b1934:;
    r3_1 = ~0u;
    r0_1 = r4 + 4u;
    r0_2 = call_003193e8(r0_1, 0x28cu, r3_1, r3_1);  // (from the original)
    r2_1 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r1 = *gptr<u32>(r4);
    if (r1 != r0_2) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    r0_3 = r4 + 0x10u;  // (from the original)
    r0_4 = call_007586b4(r0_3, 0u, r2_1, r3_2);
    r1 = guest::cpu()->r[1];
    r3_3 = guest::cpu()->r[3];
    if (r0_4 == 0) {
        return 0u;
    } else {
        r4_1 = 1u;
    }
    call_00134544(r6, r5, 0x290u, r3_3);  // (from the original)
    r1 = guest::cpu()->r[1];
    return r4_1;
L_1b1988:;
    r1 = *gptr<u32>(r4 + 8u);
    if (r1 > *gptr<u32>(r6 + 8u)) {
        guest::preempt();
        goto L_1b1934;
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_001b1900
GUEST_EXPORT_FRAMED(0x001b1900, d_001b1900::f_001b1900, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001b19ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b19ac {

struct __attribute__((packed)) Object_001b19ac_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 byte_c;
};
GUEST_OFFSET(Object_001b19ac_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_001b19ac_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_001b19ac_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_001b19ac_0, byte_c, 0xc);  // (from the original)

struct __attribute__((packed)) Local_001b19ac_r0_3 {
    u8 unknown_0[0xd];  // (not used here)
    u16 half_d;
    u8 byte_f;
};
GUEST_OFFSET(Local_001b19ac_r0_3, half_d, 0xd);  // (from the original)
GUEST_OFFSET(Local_001b19ac_r0_3, byte_f, 0xf);  // (from the original)

inline constexpr guest::Function<0x002ff368, u32(u32, u32, u32, u32)> call_002ff368;  // (from the original)

u32 f_001b19ac(gptr<Object_001b19ac_0> arg0) {
    u32 r0 = arg0.addr();
    arg0->word_0 = 0;
    arg0->word_4 = 0;
    arg0->word_8 = 0;
    arg0->byte_c = 0;
    u32 r0_2 = call_002ff368(r0 + 0x10u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    gptr<Local_001b19ac_r0_3> r0_3 = gptr<Local_001b19ac_r0_3>(r0_2 - 0x10u);  // (from the original)
    r0_3->half_d = 0;
    r0_3->byte_f = 0;
    return r0_3.addr();
}

}  // namespace d_001b19ac
GUEST_EXPORT_FRAMED(0x001b19ac, d_001b19ac::f_001b19ac, 0x4010);  // pushes {r4, lr} first, as the original

// f_001b19dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b19dc {

struct __attribute__((packed)) Object_001b19dc_0 {
    u8 unknown_0[0x2];  // (not used here)
    u8 byte_2;
    u8 unknown_3[0x1];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_001b19dc_0, byte_2, 0x2);  // (from the original)
GUEST_OFFSET(Object_001b19dc_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_001b19dc_0, word_8, 0x8);  // (from the original)


void f_001b19dc(gptr<Object_001b19dc_0> arg0, u32 r1) {
    u32 r2_1 = arg0->word_8 + r1;
    arg0->word_8 = r2_1;
    u32 r1_1 = arg0->byte_2;
    if (r1_1 != 2u && r1_1 != 1u) {
        guest::cpu()->r[1] = r1_1;
        return;
    }
    u32 r1_2 = arg0->word_4;
    if (r1_2 == 0 || r2_1 == 0) {
        guest::cpu()->r[1] = r1_2;
        return;
    }
    if (r1_2 <= r2_1) {
        r1_2 = 2u;
        arg0->byte_2 = u8(r1_2);
    }
    guest::cpu()->r[1] = r1_2;
    return;
}

}  // namespace d_001b19dc
GUEST_EXPORT(0x001b19dc, d_001b19dc::f_001b19dc);

// f_001b1a18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b1a18 {

struct __attribute__((packed)) Object_001b1a18_0 {
    u8 unknown_0[0x2];  // (not used here)
    u8 byte_2;
};
GUEST_OFFSET(Object_001b1a18_0, byte_2, 0x2);  // (from the original)


void f_001b1a18(gptr<Object_001b1a18_0> arg0) {
    u32 r1_1 = arg0->byte_2;
    if (r1_1 == 2u) {
        r1_1 = 4u;
        arg0->byte_2 = u8(r1_1);
    }
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_001b1a18
GUEST_EXPORT(0x001b1a18, d_001b1a18::f_001b1a18);

// f_001b1a2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b1a2c {

struct __attribute__((packed)) Object_001b1a2c_0 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(Object_001b1a2c_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_001b1a2c_0, byte_1, 0x1);  // (from the original)


void f_001b1a2c(gptr<Object_001b1a2c_0> arg0, u32 r1, u32 r2) {
    arg0->byte_0 = u8(r1);
    arg0->byte_1 = u8(r2);
    return;
}

}  // namespace d_001b1a2c
GUEST_EXPORT(0x001b1a2c, d_001b1a2c::f_001b1a2c);

// f_001b1a44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b1a44 {

struct __attribute__((packed)) Object_001b1a44_0 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 unknown_3[0x1];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_001b1a44_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_001b1a44_0, byte_1, 0x1);  // (from the original)
GUEST_OFFSET(Object_001b1a44_0, byte_2, 0x2);  // (from the original)
GUEST_OFFSET(Object_001b1a44_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_001b1a44_0, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x0024ea1c, u32(u32)> call_0024ea1c;  // (from the original)

u32 f_001b1a44(gptr<Object_001b1a44_0> arg0) {
    u32 r0 = arg0.addr();
    arg0->byte_0 = 0;
    arg0->byte_1 = 0;
    arg0->byte_2 = 0;
    arg0->word_4 = 0;
    arg0->word_8 = 0;
    call_0024ea1c(r0 + 0xcu);  // (from the original)
    return r0;
}

}  // namespace d_001b1a44
GUEST_EXPORT_FRAMED(0x001b1a44, d_001b1a44::f_001b1a44, 0x4010);  // pushes {r4, lr} first, as the original

// f_001b1b40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b1b40 {

struct __attribute__((packed)) Object_001b1b40_0 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Object_001b1b40_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_001b1b40_0, byte_1, 0x1);  // (from the original)
GUEST_OFFSET(Object_001b1b40_0, byte_2, 0x2);  // (from the original)

struct __attribute__((packed)) Object_001b1b40_1 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Object_001b1b40_1, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_001b1b40_1, byte_1, 0x1);  // (from the original)
GUEST_OFFSET(Object_001b1b40_1, byte_2, 0x2);  // (from the original)


void f_001b1b40(gptr<Object_001b1b40_0> arg0, gptr<Object_001b1b40_1> arg1) {
    arg0->byte_0 = u8(u32(arg1->byte_0));
    arg0->byte_1 = u8(u32(arg1->byte_1));
    u32 r1_1 = arg1->byte_2;
    arg0->byte_2 = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_001b1b40
GUEST_EXPORT(0x001b1b40, d_001b1b40::f_001b1b40);

// f_001b1bf8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b1bf8 {

struct __attribute__((packed)) Local_001b1bf8_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_001b1bf8_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001b1bf8_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_001b1bf8_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_001b1bf8_ea_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_001b1bf8_ea_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_001b1bf8_ea_1, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_001b1bf8_ea_1, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_001b1bf8_ea_1, word_1c, 0x1c);  // (from the original)

struct __attribute__((packed)) Local_001b1bf8_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_001b1bf8_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001b1bf8_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_001b1bf8_ea_2, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_001b1bf8_ea_2, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_001b1bf8_ea_2, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_001b1bf8_ea_2, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_001b1bf8_ea_2, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_001b1bf8_ea_2, word_1c, 0x1c);  // (from the original)

struct __attribute__((packed)) Local_001b1bf8_ea_3 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_001b1bf8_ea_3, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_001b1bf8_ea_3, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_001b1bf8_ea_3, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_001b1bf8_ea_3, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_001b1bf8_ea_3, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_001b1bf8_ea_3, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_001b1bf8_ea_3, word_1c, 0x1c);  // (from the original)

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> call_002fc994;  // (from the original)
inline constexpr guest::Function<0x0059e65c, u32(u32, u32, u32, u32)> call_0059e65c;  // (from the original)
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> call_006a5e34;  // (from the original)

u32 f_001b1bf8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    if (s32(r1) < 0 || r1 >= 0x10u) {  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        guest::cpu()->r[8] = r8;
        guest::cpu()->r[9] = r9;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    gptr<Local_001b1bf8_ea_1> ea_1 = gptr<Local_001b1bf8_ea_1>(r13 - 0x20);  // (from the original)
    ea_1->word_0 = r3;
    ea_1->word_4 = r4;
    ea_1->word_8 = r5;
    ea_1->word_c = r6;
    ea_1->word_10 = r7;
    ea_1->word_14 = r8;
    ea_1->word_18 = r9;
    ea_1->word_1c = r14;
    r13 -= 0x20;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r0 + (r1 << 2), 0x95bfdcu, r2, r3);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    u32 r3_1 = guest::cpu()->r[3];
    u32 r0_2 = r0 + r1;
    *gptr<u8>(r0_2 + 0x40u) = 0;  // (from the original)
    guest::cpu()->r[13] = r13;
    u32 r0_3 = call_006a5e34(r0_2, r1_1, r2_1, r3_1);
    u32 r1_2 = guest::cpu()->r[1];
    if (r0_3 != 0) {
        *gptr<u32>(r13) = 0;
        guest::cpu()->r[13] = r13;
        call_002fc994(r0_3, 0x95bfdcu, r2, r3);  // (from the original)
        gptr<Local_001b1bf8_ea_2> ea_2 = gptr<Local_001b1bf8_ea_2>(r13);
        r13 += 0x20;  // (from the original)
        u32 r3_2 = ea_2->word_0;
        u32 r4_1 = ea_2->word_4;
        u32 r5_1 = ea_2->word_8;
        u32 r6_1 = ea_2->word_c;
        u32 r7_1 = ea_2->word_10;
        u32 r8_1 = ea_2->word_14;
        u32 r9_1 = ea_2->word_18;
        r14 = ea_2->word_1c;
        guest::cpu()->r[13] = r13;
        guest::cpu()->r[4] = r4_1;
        guest::cpu()->r[5] = r5_1;
        guest::cpu()->r[6] = r6_1;
        guest::cpu()->r[7] = r7_1;
        guest::cpu()->r[8] = r8_1;
        guest::cpu()->r[9] = r9_1;
        return call_0059e65c(r2, r3, 1u, r3_2);
    }
    gptr<Local_001b1bf8_ea_3> ea_3 = gptr<Local_001b1bf8_ea_3>(r13);
    r13 += 0x20;  // (from the original)
    u32 r4_2 = ea_3->word_4;
    u32 r5_2 = ea_3->word_8;
    u32 r6_2 = ea_3->word_c;
    u32 r7_2 = ea_3->word_10;
    u32 r8_2 = ea_3->word_14;
    u32 r9_2 = ea_3->word_18;
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[8] = r8_2;
    guest::cpu()->r[9] = r9_2;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_001b1bf8
GUEST_EXPORT(0x001b1bf8, d_001b1bf8::f_001b1bf8);

// f_001b1c70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b1c70 {

inline constexpr guest::Function<0x001b1b5c, u32(u32, u32, u32, u32)> call_001b1b5c;  // (from the original)
inline constexpr guest::Function<0x001b21f4, u32(u32, u32, u32, u32)> call_001b21f4;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002fc288, u32(u32, u32, u32, u32)> call_002fc288;  // (from the original)
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x002fe9c8, u32(u32, u32, u32, u32)> call_002fe9c8;  // (from the original)
inline constexpr guest::Function<0x003004c4, u32(u32, u32, u32, u32)> call_003004c4;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

void f_001b1c70(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x2f8);  // the original's stack frame
    u32 res_2 = 0;
    u32 r6 = 0u;
    u32 r5 = r0;
    u32 r4 = r6;
    do {
        u32 r0_2 = call_002fcaf4(r5 + (r4 << 2), r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_2 == 0) {
            r6 += 1u;
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0x10u);  // (from the original)
    call_002fc288(frame.at(0).addr(), r1, r2, r3);
    call_002fe9c8(frame.at(0).addr(), 5u, 5u, 0u);
    call_00301d0c(frame.at(0x2e8).addr(), 0x2fc20cu, 4u, 3u);  // (from the original)
    call_003004c4(frame.at(0x2e8).addr(), 3u, frame.at(0).addr(), guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 res_1 = r6 - 3u;
    u32 r7 = 0u;
    if ((res_1 >> 0x1f) != (((r6 ^ 3u) & (r6 ^ res_1)) >> 0x1f)) {  // (from the original)
        u32 r10 = frame.at(0x2e8).addr();  // (from the original)
        do {
            u32 r8 = r10 + (r7 << 2);
            u32 r9 = 0u;
            u32 r0_7 = call_002fcb34(r8, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_7 == 0x95u) {  // (from the original)
                goto L_1b1d58;
            }
            call_001b1b5c(r5, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r4 = 0u;
            do {
                u32 r0_9 = call_002fcaf4(r5 + (r4 << 2), r1, r2, r3);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_9 != 0) {
                    call_001b21f4(r5, r4, r8, r9);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    goto L_1b1d58;
                }
                r4 += 1u;
                guest::preempt();
            } while (r4 < 0x10u);  // (from the original)
L_1b1d58:;
            r6 += 1u;
            res_2 = r6 - 3u;
            r7 += 1u;
            guest::preempt();
        } while (res_2 >> 0x1f != ((r6 ^ 3u) & (r6 ^ res_2)) >> 0x1f);  // (from the original)
    }
    call_002f76ac(frame.at(0x2e8).addr(), 0x2f777cu, 4u, 3u);  // (from the original)
    return;
}

}  // namespace d_001b1c70
GUEST_EXPORT_FRAMED(0x001b1c70, d_001b1c70::f_001b1c70, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_001b2114: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b2114 {

inline constexpr guest::Function<0x001b1b5c, u32(u32, u32, u32, u32)> call_001b1b5c;  // (from the original)
inline constexpr guest::Function<0x001b21f4, u32(u32, u32, u32, u32)> call_001b21f4;  // (from the original)
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)

u32 f_001b2114(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    u32 r5 = r0;
    u32 r7 = r2;
    u32 r6 = r1;
    u32 r0_1 = call_002fcb34(r1, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    u32 r3_1 = guest::cpu()->r[3];
    if (r0_1 == 0x95u) {  // (from the original)
        guest::cpu()->r[13] += 0x18u;  // (from the original)
        return 1u;
    }
    call_001b1b5c(r5, r1, r2_1, r3_1);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 r4 = 0u;
    do {
        u32 r0_4 = call_002fcaf4(r5 + (r4 << 2), r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_4 != 0) {
            guest::cpu()->r[13] += 0x18u;  // (from the original)
            return call_001b21f4(r5, r4, r6, r7);
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0x10u);  // (from the original)
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_001b2114
GUEST_EXPORT(0x001b2114, d_001b2114::f_001b2114);

// f_001b21f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b21f4 {

struct __attribute__((packed)) Local_001b21f4_r5_1 {
    u8 unknown_0[0x40];  // (not used here)
    u8 byte_40;
};
GUEST_OFFSET(Local_001b21f4_r5_1, byte_40, 0x40);  // (from the original)

inline constexpr guest::Function<0x002fae84, u32(u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb310, u32(u32)> call_002fb310;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x002fcb9c, u32(u32, u32)> call_002fcb9c;  // (from the original)
inline constexpr guest::Function<0x002fe53c, u32(u32, u32, u32, u32)> call_002fe53c;  // (from the original)
inline constexpr guest::Function<0x0030c578, u32(u32, u32)> call_0030c578;  // (from the original)
inline constexpr guest::Function<0x006b9914, u32(u32, u32, u32, u32)> call_006b9914;  // (from the original)
inline constexpr guest::Function<0x006b9924, u32(u32, u32, u32, u32)> call_006b9924;  // (from the original)
inline constexpr guest::Function<0x006b9c98, u32(u32, u32, u32, u32)> call_006b9c98;  // (from the original)
inline constexpr guest::Function<0x00768174, u32(u32, u32, u32, u32)> call_00768174;  // (from the original)
inline constexpr guest::Function<0x00768cc8, u32(u32, u32, u32, u32)> call_00768cc8;  // (from the original)

u32 f_001b21f4(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    gptr<Local_001b21f4_r5_1> r5_1 = gptr<Local_001b21f4_r5_1>(0u);
    u32 r6_1 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r1_11 = 0;
    u32 r0_17 = 0;
    u32 r1_12 = 0;
    u32 r0_18 = 0;
    call_002fc934(frame.at(0).addr(), r2, r2, r3);
    u32 r0_3 = call_002fe53c(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_2 = guest::cpu()->r[1];
    u32 r2_2 = guest::cpu()->r[2];
    u32 r3_2 = guest::cpu()->r[3];
    if (r0_3 != 0) {
        call_006b9914(frame.at(0).addr(), r1_2, r2_2, r3_2);
        r1_2 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
    }
    u32 r0_5 = call_002fcb34(r2, r1_2, r2_2, r3_2);
    u32 r1_3 = guest::cpu()->r[1];
    u32 r2_3 = guest::cpu()->r[2];
    u32 r3_3 = guest::cpu()->r[3];
    if (r0_5 != 0x4eu) {  // (from the original)
        if (r1 >= 0x10u) {  // (from the original)
            return 0u;
        }
        u32 r0_6 = call_00768174(r2, r1_3, r2_3, r3_3);
        r1_4 = guest::cpu()->r[1];
        r2_4 = guest::cpu()->r[2];
        r3_4 = guest::cpu()->r[3];
        r5_1 = gptr<Local_001b21f4_r5_1>(r0 + r1);
        r6_1 = r0 + (r1 << 2);
        if (r0_6 == 0) {
            goto L_1b22b8;
        }
        call_002fc8e8(r6_1, frame.at(0).addr());
        call_006b9924(r6_1, guest::cpu()->r[1], r2_4, r3_4);
        r5_1->byte_40 = u8(r3);
        return 1u;
    }
    r0_7 = call_002fae84(r0_5);
    r0_8 = call_002fb310(r0_7);
    r0_9 = r0_8 + 4u + 0x1764au;  // (from the original)
    call_0030c578(r0_9, 0x1764au);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    return 0u;
L_1b22b8:;
    u32 r0_10 = call_00768cc8(r2, r1_4, r2_4, r3_4);
    r1_3 = guest::cpu()->r[1];
    u32 r2_5 = guest::cpu()->r[2];
    u32 r3_5 = guest::cpu()->r[3];
    if (r0_10 == 0) {
        return 0u;
    }
    call_002fc934(frame.at(4).addr(), frame.at(0).addr(), r2_5, r3_5);
    u32 r0_13 = call_002fcb34(frame.at(4).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_10 = guest::cpu()->r[1];
    u32 r2_7 = guest::cpu()->r[2];
    u32 r3_7 = guest::cpu()->r[3];
    u32 zf_1 = r0_13 == 0x2bu;  // (from the original)
    u32 r0_14 = frame.at(4).addr();
    if (!zf_1) {
        call_006b9924(r0_14, r1_10, r2_7, r3_7);
        r1_3 = guest::cpu()->r[1];
        r2_8 = guest::cpu()->r[2];
        r3_8 = guest::cpu()->r[3];
        if (r0_13 == 0x27u || r0_13 == 0x24u) {  // (from the original)
            return 0u;
        }
        if (r0_13 == 0x3fu) {  // (from the original)
            goto L_1b2354;
        }
        goto L_1b2378;
    }
    r0_15 = call_002fcb9c(r0_14, r1_10);
    r1_3 = guest::cpu()->r[1];
    if (r0_15 == 0) {
        goto L_1b2340;
    }
    return 0u;
L_1b2340:;
    r0_16 = frame.at(4).addr();
    call_006b9924(r0_16, r1_3, r2_7, r3_7);
    goto L_1b2378;
L_1b2354:;
    r1_11 = frame.at(4).addr();
    r0_17 = frame.at(8).addr();
    call_006b9c98(r0_17, r1_11, r2_8, r3_8);
    r1_12 = frame.at(8).addr();
    r0_18 = frame.at(4).addr();
    call_002fc8e8(r0_18, r1_12);
L_1b2378:;
    call_002fc8e8(r6_1, frame.at(4).addr());
    r5_1->byte_40 = u8(r3);
    return 1u;
}

}  // namespace d_001b21f4
GUEST_EXPORT_FRAMED(0x001b21f4, d_001b21f4::f_001b21f4, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_001b23ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b23ac {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

u32 f_001b23ac(u32 r0) {
    u32 r0_1 = call_00301d0c(r0, 0x2fc20cu, 4u, 0x10u);  // (from the original)
    u32 r2 = guest::cpu()->r[2];
    u32 r3 = guest::cpu()->r[3];
    u32 r5 = r0_1;
    u32 r4 = 0u;
    do {
        call_002fc8e8(r5 + (r4 << 2), 0x95bfdcu, r2, r3);  // (from the original)
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0x10u);  // (from the original)
    return r5;
}

}  // namespace d_001b23ac
GUEST_EXPORT_FRAMED(0x001b23ac, d_001b23ac::f_001b23ac, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001b23f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b23f0 {

struct __attribute__((packed)) Object_001b23f0_0 {
    u8 unknown_0[0xc6];  // (not used here)
    u8 byte_c6;
    u8 byte_c7;
};
GUEST_OFFSET(Object_001b23f0_0, byte_c6, 0xc6);  // (from the original)
GUEST_OFFSET(Object_001b23f0_0, byte_c7, 0xc7);  // (from the original)

inline constexpr guest::Function<0x0022d74c, u32(u32, u32, u32, u32)> call_0022d74c;  // (from the original)
inline constexpr guest::Function<0x0022e048, u32(u32)> call_0022e048;  // (from the original)
inline constexpr guest::Function<0x0022e05c, u32(u32, u32, u32, u32)> call_0022e05c;  // (from the original)
inline constexpr guest::Function<0x0022e070, u32(u32, u32, u32, u32)> call_0022e070;  // (from the original)
inline constexpr guest::Function<0x0022e08c, u32(u32, u32, u32, u32)> call_0022e08c;  // (from the original)
inline constexpr guest::Function<0x0022e138, u32(u32)> call_0022e138;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32, u32)> call_002fc20c;  // (from the original)
inline constexpr guest::Function<0x002ff408, u32(u32, u32, u32, u32)> call_002ff408;  // (from the original)
inline constexpr guest::Function<0x00300a64, u32(u32, u32, u32, u32)> call_00300a64;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x0056d374, u32(u32, u32, u32, u32)> call_0056d374;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)

void f_001b23f0(gptr<Object_001b23f0_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x3ec);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 res_1 = 0;
    u32 r3_8 = 0;
    u32 r0_10 = 0;
    u32 r0_14 = 0;
    u32 r7 = 0u;
    u32 r4 = r0;
    u32 r9 = frame.at(0x288).addr();  // (from the original)
    arg0->byte_c7 = u8(r7);
    arg0->byte_c6 = u8(r7);
    call_0022e08c(r9, r1, r2, r3);
    *frame.at<u32>(8) = r7;
    *frame.at<u32>(0xc) = r7;  // (from the original)
    *frame.at<u32>(0x10) = r7;  // (from the original)
    *frame.at<u32>(0x14) = r7;  // (from the original)
    *frame.at<u32>(0x18) = r7;  // (from the original)
    *frame.at<u32>(0x1c) = r7;  // (from the original)
    *frame.at<u32>(0x20) = r7;  // (from the original)
    *frame.at<u32>(0x24) = r7;  // (from the original)
    *frame.at<u32>(0x28) = r7;  // (from the original)
    *frame.at<u32>(0x2c) = r7;  // (from the original)
    *frame.at<u32>(0x30) = r7;  // (from the original)
    *frame.at<u32>(0x34) = r7;  // (from the original)
    *frame.at<u8>(0x38) = u8(r7);  // (from the original)
    *frame.at<u32>(0x3c) = r7;  // (from the original)
    *frame.at<u32>(0x40) = r7;  // (from the original)
    *frame.at<u32>(0x44) = r7;  // (from the original)
    u32 r10 = frame.at(8).addr();
    *frame.at<u32>(0x48) = r7;  // (from the original)
    *frame.at<u32>(0x4c) = r7;  // (from the original)
    *frame.at<u32>(0x50) = r7;  // (from the original)
    *frame.at<u32>(0x54) = r7;  // (from the original)
    *frame.at<u32>(0x58) = r7;  // (from the original)
    *frame.at<u32>(0x5c) = r7;  // (from the original)
    *frame.at<u32>(0x60) = r7;  // (from the original)
    *frame.at<u32>(0x64) = r7;  // (from the original)
    *frame.at<u32>(0x68) = r7;  // (from the original)
    *frame.at<u8>(0x6c) = u8(r7);  // (from the original)
    u32 r0_2 = call_002fc20c(r10 + 0x274u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_002ff408(r0_2 + 0xfffffd8cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_0022e05c(r9, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r8 = frame.at(0x3c0).addr();  // (from the original)
    u32 r11 = 4u;
    u32 r0_4 = call_003083bc(r8, frame.at(0x3d8).addr(), 9u, guest::cpu()->r[3]);  // (from the original)
    u32 r6 = 0x90a3e8u;  // (from the original)
    *gptr<u32>(r0_4) = r6;
    u32 r0_6 = call_005f4bfc(r0_4 + 0xcu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r5 = r0_6 - 0xcu;  // (from the original)
    call_002f825c(r0_6 + 0xcu, 0x12u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1 = 0x8906ecu;  // (from the original)
    r0 = r5 + 0x18u;  // (from the original)
    *gptr<u16>(r5 + 0x18u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    r2 = 4u;
    do {
        u32 r3_7 = *gptr<u16>(r1);
        res_1 = r2 - 1u;
        r2 = res_1;
        *gptr<u16>(r0 + 2u) = u16(r3_7);
        r3_8 = *gptr<u16>(r1);
        u32 ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r3_8);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    call_0056d374(r5, r11, r2, r3_8);
    u32 r0_8 = call_0022e070(r9, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_00300a64(r0_8, r8, 0u, guest::cpu()->r[3]);
    *frame.at<u32>(0x3c0) = r6;  // (from the original)
    *frame.at<u32>(0) = r7;
    *frame.at<u32>(4) = r7;
    call_0022d74c(r9, r10, 0x88e890u, 3u);  // (from the original)
    call_002f8574(r4 + 0x84u, r10 + 0x22cu, 0x42u, guest::cpu()->r[3]);  // (from the original)
    if (u32(*frame.at<u8>(0x38)) == 6u) {  // (from the original)
        r0_10 = r4 + 0x42u;  // (from the original)
        *gptr<u8>(r4 + 0xc7u) = u8(u32(*frame.at<u8>(0x276)));  // (from the original)
    } else {
        *gptr<u8>(r4 + 0xc6u) = u8(u32(*frame.at<u8>(0x276)));  // (from the original)
        r0_10 = r4;
    }
    u32 r0_11 = call_002f8574(r0_10, r10 + 0x68u, 0x42u, guest::cpu()->r[3]);  // (from the original)
    u32 r0_12 = call_002fb94c(r0_11, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_10 = 0u;
    if (r0_12 != 0) {
        r1_10 = r0_12 + 0x55a6u;  // (from the original)
    }
    *frame.at<u32>(0) = 1;
    *frame.at<u32>(4) = r1_10;
    call_0022d74c(r9, r10, 0x88e890u, 4u);  // (from the original)
    call_002f8574(r4 + 0x84u, r10 + 0x22cu, 0x42u, guest::cpu()->r[3]);  // (from the original)
    u32 r1_12 = *frame.at<u8>(0x276);  // (from the original)
    if (u32(*frame.at<u8>(0x38)) == 6u) {  // (from the original)
        *gptr<u8>(r4 + 0xc7u) = u8(r1_12);  // (from the original)
        r0_14 = r4 + 0x42u;  // (from the original)
    } else {
        *gptr<u8>(r4 + 0xc6u) = u8(r1_12);  // (from the original)
        r0_14 = r4;
    }
    call_002f8574(r0_14, r10 + 0x68u, 0x42u, guest::cpu()->r[3]);  // (from the original)
    call_0022e048(r0_14);
    call_0022e138(r9);
    return;
}

}  // namespace d_001b23f0
GUEST_EXPORT_FRAMED(0x001b23f0, d_001b23f0::f_001b23f0, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_001b264c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b264c {

inline constexpr guest::Function<0x00301444, u32(u32, u32)> call_00301444;  // (from the original)

void f_001b264c(u32 r0) {
    call_00301444(r0, 0xc8u);  // (from the original)
    *gptr<u8>(r0 + 0xc7u) = 0xff;  // (from the original)
    *gptr<u8>(r0 + 0xc6u) = 0xff;  // (from the original)
    return;
}

}  // namespace d_001b264c
GUEST_EXPORT_FRAMED(0x001b264c, d_001b264c::f_001b264c, 0x4010);  // pushes {r4, lr} first, as the original

// f_001b266c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b266c {

inline constexpr guest::Function<0x00301444, u32(u32, u32)> call_00301444;  // (from the original)

u32 f_001b266c(u32 r0) {
    call_00301444(r0, 0xc8u);  // (from the original)
    *gptr<u8>(r0 + 0xc7u) = 0xff;  // (from the original)
    *gptr<u8>(r0 + 0xc6u) = 0xff;  // (from the original)
    return r0;
}

}  // namespace d_001b266c
GUEST_EXPORT_FRAMED(0x001b266c, d_001b266c::f_001b266c, 0x4010);  // pushes {r4, lr} first, as the original

// f_001b2690: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b2690 {

inline constexpr guest::Function<0x0024dbc0, u32(u32, u32)> call_0024dbc0;  // (from the original)
inline constexpr guest::Function<0x006bd910, u32(u32, u32, u32, u32)> call_006bd910;  // (from the original)

u32 f_001b2690(u32 r0) {
    call_006bd910(r0 + 8u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    call_0024dbc0(r0 + 0xa488u, 0u);  // (from the original)
    *gptr<u8>(r0 + 0xc8b0u) = 0;  // (from the original)
    return 0u;
}

}  // namespace d_001b2690
GUEST_EXPORT_FRAMED(0x001b2690, d_001b2690::f_001b2690, 0x4010);  // pushes {r4, lr} first, as the original

// f_001b26c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b26c8 {

struct __attribute__((packed)) Local_001b26c8_r1_22 {
    u16 half_0;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Local_001b26c8_r1_22, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001b26c8_r1_22, byte_2, 0x2);  // (from the original)
GUEST_OFFSET(Local_001b26c8_r1_22, byte_3, 0x3);  // (from the original)

inline constexpr guest::Function<0x001b266c, u32(u32, u32, u32, u32)> call_001b266c;  // (from the original)
inline constexpr guest::Function<0x0020bec8, u32(u32, u32, u32, u32)> call_0020bec8;  // (from the original)
inline constexpr guest::Function<0x0020cbf0, u32(u32, u32, u32, u32)> call_0020cbf0;  // (from the original)
inline constexpr guest::Function<0x0024a56c, u32(u32, u32, u32, u32)> call_0024a56c;  // (from the original)
inline constexpr guest::Function<0x0024a5ec, u32(u32, u32, u32, u32)> call_0024a5ec;  // (from the original)
inline constexpr guest::Function<0x0024b730, u32(u32, u32, u32, u32)> call_0024b730;  // (from the original)
inline constexpr guest::Function<0x0024d8fc, u32(u32, u32, u32, u32)> call_0024d8fc;  // (from the original)
inline constexpr guest::Function<0x0024dcc0, u32(u32, u32, u32, u32)> call_0024dcc0;  // (from the original)
inline constexpr guest::Function<0x0029b870, u32(u32)> call_0029b870;  // (from the original)
inline constexpr guest::Function<0x002beff0, u32(u32, u32, u32, u32)> call_002beff0;  // (from the original)
inline constexpr guest::Function<0x002c0048, u32(u32, u32, u32, u32)> call_002c0048;  // (from the original)
inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32, u32)> call_002fc20c;  // (from the original)
inline constexpr guest::Function<0x00301444, u32(u32, u32, u32, u32)> call_00301444;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x00303534, u32(u32, u32, u32, u32)> call_00303534;  // (from the original)
inline constexpr guest::Function<0x00303b10, u32(u32, u32, u32, u32)> call_00303b10;  // (from the original)
inline constexpr guest::Function<0x003328ec, u32(u32, u32, u32, u32)> call_003328ec;  // (from the original)
inline constexpr guest::Function<0x005bb9f0, u32(u32, u32, u32, u32)> call_005bb9f0;  // (from the original)
inline constexpr guest::Function<0x005bd01c, u32(u32, u32, u32, u32)> call_005bd01c;  // (from the original)
inline constexpr guest::Function<0x005bd234, u32(u32, u32, u32, u32)> call_005bd234;  // (from the original)
inline constexpr guest::Function<0x005bd3fc, u32(u32, u32, u32, u32)> call_005bd3fc;  // (from the original)
inline constexpr guest::Function<0x005bdaa0, u32(u32, u32, u32, u32)> call_005bdaa0;  // (from the original)
inline constexpr guest::Function<0x005be19c, u32(u32, u32, u32, u32)> call_005be19c;  // (from the original)
inline constexpr guest::Function<0x005be8c0, u32(u32, u32, u32, u32)> call_005be8c0;  // (from the original)

u32 f_001b26c8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res_1 = 0;
    u32 r0_2 = call_0020cbf0(r0 + 8u, r1, r2, r3);
    call_00303534(r0_2 + 0x6b8cu, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r6 = 0u;
    call_00303534(r0_2 + 0x6b94u, r6, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_00303534(r0_2 + 0x6b9cu, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_00303534(r0_2 + 0x6ba4u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_8 = call_00301d0c(r0_2 + 0x6bd0u, 0x2fc20cu, 4u, 0x10u);  // (from the original)
    call_0024a5ec(r0_8 + 0x50u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_00303534(r0_8 + 0x338u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_12 = call_00301d0c(r0_8 + 0x340u, 0x2fc20cu, 4u, 0x28u);  // (from the original)
    u32 r0_14 = call_00301d0c(r0_12 + 0xa0u, 0x2fc20cu, 4u, 0x10u);  // (from the original)
    u32 r0_16 = call_002fc20c(r0_14 + 0x50u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_18 = call_002fc20c(r0_16 + 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_20 = call_00301d0c(r0_18 + 4u, 0x2ff368u, 0x280u, 0xau);  // (from the original)
    u32 r0_22 = call_001b266c(r0_20 + 0x1900u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r3 = 0xffffu;  // (from the original)
    r0 = r0_22 + 0xf2u;  // (from the original)
    r2 = 0u;
    r1 = r2;
    do {
        u32 r2_10 = r2 + 1u;
        r1 += 2u;
        *gptr<u16>(r0 + (r2 << 1)) = u16(r3);
        res_1 = r1 - 0x20u;  // (from the original)
        r2 = r2_10 + 1u;
        *gptr<u16>(r0 + (r2_10 << 1)) = u16(r3);
        guest::preempt();
    } while (res_1 >> 0x1f != ((r1 ^ 0x20u) & (r1 ^ res_1)) >> 0x1f);  // (from the original)
    u32 r0_24 = call_0024d8fc(r0 + 0x42u, r1, r2, r3);  // (from the original)
    u32 r0_26 = call_0024b730(r0_24 + 0xa4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r4_1 = r0_26 + 0x23cu;  // (from the original)
    call_00303534(r4_1, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    call_00303534(r4_1 + 8u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    call_00303534(r4_1 + 0x10u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_00303534(r4_1 + 0x18u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_00303534(r4_1 + 0x20u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_00303534(r4_1 + 0x28u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_002beff0(r4_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_32 = (r0_26 - 0x8ae0u) + 0x8d4cu;  // (from the original)
    u32 r0_33 = call_005bd234(r0_32, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_35 = call_005bd3fc(r0_33 + 0x10u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_37 = call_005bdaa0(r0_35 + 0x10u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_39 = call_005be19c(r0_37 + 0x18u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_41 = call_005bb9f0(r0_39 + 0x76u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_43 = call_005bd01c(r0_41 + 0xeu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_45 = call_005be8c0(r0_43 + 0xb6u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_47 = call_0020bec8(r0_45 + 0x22u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_49 = call_002fc20c(r0_47 + 0x2au, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_51 = call_002fc20c(r0_49 + 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r5_3 = r0_51 + 0x69u;  // (from the original)
    *gptr<u16>(r0_51 + 0x1cu) = 0x7db;  // (from the original)
    *gptr<u16>(r0_51 + 0x1eu) = 0x7db;  // (from the original)
    *gptr<u16>(r0_51 + 0x20u) = u16(r6);  // (from the original)
    *gptr<u8>(r0_51 + 0x22u) = u8(r6);  // (from the original)
    *gptr<u8>(r0_51 + 0x23u) = u8(r6);  // (from the original)
    call_00301444(r5_3, 0x22u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_002c0048(r5_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r4 = (r0_51 - 0x8f0eu) + 0x8f99u;  // (from the original)
    r0 = 0u;
    *gptr<u8>(r4) = u8(r6);
    goto L_1b2938;
L_1b291c:;
    if (r0 == 0) {
        goto L_1b2938;
    }
    if (r0 == 1u) {
        goto L_1b2948;
    }
    if (r0 != 2u) {
        goto L_1b2964;
    }
    goto L_1b2958;
L_1b2938:;
    *gptr<u8>(r4) = u8(u32(*gptr<u8>(r4)) & ~1u);
    goto L_1b2964;
L_1b2948:;
    *gptr<u8>(r4) = u8(u32(*gptr<u8>(r4)) & ~2u);
    goto L_1b2964;
L_1b2958:;
    *gptr<u8>(r4) = u8(u32(*gptr<u8>(r4)) & ~4u);
L_1b2964:;
    r0 += 1u;
    if (s32(r0) < 3) {
        guest::preempt();
        goto L_1b291c;
    }
    u32 r0_53 = call_00301d0c(r4 + 0xfu, 0x2fc20cu, 4u, 0xau);  // (from the original)
    u32 r0_55 = call_0024a56c(r0_53 + 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_57 = call_00301d0c(r0_55 + 0x320u, 0x2fc20cu, 4u, 0xb4u);  // (from the original)
    u32 r0_59 = call_003328ec(r0_57 + 0x314u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r4_3 = r0_59 - 0x9604u;  // (from the original)
    call_00301444(r0_59 + 0xde0u, 0x40u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_00301444(r4_3 + 0xa424u, 0x40u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_63 = call_00301d0c(r4_3 + 0xa468u, 0x6bd060u, 6u, 3u);  // (from the original)
    u32 r0_65 = call_00303b10(r0_63 + 0x12u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_67 = call_0024dcc0(r0_65 + 6u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_69 = call_00301d0c(r0_67 + 0x1228u, 0x2fc20cu, 4u, 0x168u);  // (from the original)
    u32 r0_71 = call_0029b870(r0_69 + 0x5a0u);  // (from the original)
    u32 r0_72 = r0_71 - 0xbc50u;  // (from the original)
    gptr<Local_001b26c8_r1_22> r1_22 = gptr<Local_001b26c8_r1_22>(r0_72 + 0xbc84u);  // (from the original)
    r1_22->half_0 = u16(r6);
    r1_22->byte_2 = u8(r6);
    r1_22->byte_3 = u8(r6);
    guest::cpu()->r[1] = r1_22.addr();
    return r0_72;
}

}  // namespace d_001b26c8
GUEST_EXPORT_FRAMED(0x001b26c8, d_001b26c8::f_001b26c8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001b2a5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b2a5c {

inline constexpr guest::Function<0x00134fa4, u32(u32, u32, u32, u32)> call_00134fa4;  // (from the original)
inline constexpr guest::Function<0x00138a00, u32(u32, u32, u32, u32)> call_00138a00;  // (from the original)
inline constexpr guest::Function<0x00138a1c, u32(u32, u32, u32, u32)> call_00138a1c;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)

u32 f_001b2a5c(u32 r0) {
    u32 r0_1 = r0 + 0xbc50u;  // (from the original)
    call_002f76ac(r0_1 - 0x5a0u, 0x2f777cu, 4u, 0x168u);  // (from the original)
    u32 r0_3 = (r0_1 - 0xbc50u) + 0xa488u;  // (from the original)
    u32 r0_4 = call_00134fa4(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_5 = r0_4 - 6u;
    call_002f76ac(r0_5 - 0x12u, 0x138b90u, 6u, 3u);  // (from the original)
    u32 r4_2 = r0_5 - 0xe76u;  // (from the original)
    call_002f76ac(r4_2, 0x2f77e8u, 0x280u, 5u);  // (from the original)
    u32 r4_3 = r4_2 - 0x9604u;  // (from the original)
    call_002f76ac(r4_3 + 0x92f0u, 0x2f777cu, 4u, 0xb4u);  // (from the original)
    u32 r0_8 = r4_3 + 0x8fd0u;  // (from the original)
    call_002f76ac(r0_8 - 0x28u, 0x2f777cu, 4u, 0xau);  // (from the original)
    u32 r0_10 = (r0_8 - 0x8fd0u) + 0x8d84u;  // (from the original)
    u32 r0_11 = call_00138a1c(r0_10, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_13 = call_00138a00(r0_11 - 0x18u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_14 = r0_13 - 0x20u;  // (from the original)
    call_002f76ac(r0_14 - 0x1d44u, 0x2f77e8u, 0x280u, 0xau);  // (from the original)
    u32 r0_16 = (r0_14 - 0x8d4cu) + 0x7000u;  // (from the original)
    u32 r4_6 = r0_16 - 0xf0u;  // (from the original)
    call_002f76ac(r0_16 - 0x50u, 0x2f777cu, 4u, 0x10u);  // (from the original)
    call_002f76ac(r4_6, 0x2f777cu, 4u, 0x28u);  // (from the original)
    u32 r4_7 = r4_6 - 0x6f10u;  // (from the original)
    call_002f76ac(r4_7 + 0x6bd0u, 0x2f777cu, 4u, 0x10u);  // (from the original)
    u32 r0_19 = r4_7 + 0x56f0u;  // (from the original)
    call_002f76ac(r0_19 - 0x1acu, 0x2f7744u, 0x18u, 4u);  // (from the original)
    return (r0_19 - 0x56f0u) + 0xfffffff8u;  // (from the original)
}

}  // namespace d_001b2a5c
GUEST_EXPORT_FRAMED(0x001b2a5c, d_001b2a5c::f_001b2a5c, 0x4010);  // pushes {r4, lr} first, as the original

// f_001b3174: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b3174 {

struct __attribute__((packed)) Local_001b3174_r0_1 {
    u8 unknown_0[0x58];  // (not used here)
    u8 byte_58;
};
GUEST_OFFSET(Local_001b3174_r0_1, byte_58, 0x58);  // (from the original)


void f_001b3174(u32 r0, u32 r1, u32 r2) {
    if (r1 >= 0xfu) {  // (from the original)
        return;
    }
    gptr<Local_001b3174_r0_1> r0_1 = gptr<Local_001b3174_r0_1>(r0 + r1);
    if ((u32(*gptr<u16>(0x95c010u + (r2 << 1))) & 0xfu) == 0) {  // (from the original)
        r0_1->byte_58 = u8(r2);
    } else {
        r0_1->byte_58 = 0;
    }
    return;
}

}  // namespace d_001b3174
GUEST_EXPORT(0x001b3174, d_001b3174::f_001b3174);

// f_001b31a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b31a4 {

struct __attribute__((packed)) Local_001b31a4_r3_2 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u16 half_c;
    u8 byte_e;
};
GUEST_OFFSET(Local_001b31a4_r3_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_001b31a4_r3_2, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_001b31a4_r3_2, half_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_001b31a4_r3_2, byte_e, 0xe);  // (from the original)

struct __attribute__((packed)) Local_001b31a4_r4_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u16 half_c;
    u8 byte_e;
};
GUEST_OFFSET(Local_001b31a4_r4_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001b31a4_r4_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_001b31a4_r4_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_001b31a4_r4_1, half_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_001b31a4_r4_1, byte_e, 0xe);  // (from the original)

inline guest::global<u32, 0x00975338> global_00975338;  // (from the original)
inline constexpr guest::Function<0x00125b38, u32(u32, u32, u32, u32)> call_00125b38;  // (from the original)
inline constexpr guest::Function<0x0012ca50, u32(u32, u32, u32, u32)> call_0012ca50;  // (from the original)
inline constexpr guest::Function<0x0013864c, u32(u32, u32, u32, u32)> call_0013864c;  // (from the original)
inline constexpr guest::Function<0x0013bb80, u32(u32)> call_0013bb80;  // (from the original)
inline constexpr guest::Function<0x003045a8, u32(u32, u32, u32, u32)> call_003045a8;  // (from the original)

u32 f_001b31a4(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x14);  // the original's stack frame
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    call_0012ca50(frame.at(0).addr(), r1, r2, r3);
    u32 r0_3 = call_003045a8(*global_00975338, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r4 = r0_3;
    call_00125b38(frame.at(0).addr(), 0x1b328cu, r0_3, 0u);  // (from the original)
    r3 = 0x95c010u;  // (from the original)
    u32 r0 = *frame.at<u32>(4);
    r1 = 0u;
    do {
        u32 r12_1 = r3 + (r1 << 1);
        u32 v_1 = *gptr<u8>(r0);
        u32 r0_5 = r0 + 1u;
        r1 += 1u;
        u32 v_2 = *gptr<u8>(r0_5);
        r0 = r0_5 + 1u;
        r2_2 = v_1 | v_2 << 8;
        *gptr<u16>(r12_1) = u16(r2_2);
        guest::preempt();
    } while (r1 < 0x100u);  // (from the original)
    call_0013864c(frame.at(0).addr(), r1, r2_2, r3);
    call_00125b38(frame.at(0).addr(), 0x1b32a8u, r4, 0u);  // (from the original)
    r2 = 0xad53a4u;  // (from the original)
    r1 = *frame.at<u32>(4);
    r0 = 0u;
    do {
        gptr<Local_001b31a4_r3_2> r3_2 = gptr<Local_001b31a4_r3_2>(r1);
        u32 v_3 = *gptr<u32>(r1);
        r1 += 0xfu;  // (from the original)
        gptr<Local_001b31a4_r4_1> r4_1 = gptr<Local_001b31a4_r4_1>((r0 << 4) - r0 + r2);
        r0 += 1u;
        r4_1->word_0 = v_3;
        r4_1->word_4 = r3_2->word_4;
        r4_1->word_8 = r3_2->word_8;
        r4_1->half_c = u16(u32(r3_2->half_c));
        r3_3 = r3_2->byte_e;
        r4_1->byte_e = u8(r3_3);
        guest::preempt();
    } while (r0 < 0xcu);  // (from the original)
    call_0013864c(frame.at(0).addr(), r1, r2, r3_3);
    u32 r0_10 = call_0013bb80(frame.at(0).addr());
    return r0_10;
}

}  // namespace d_001b31a4
GUEST_EXPORT_FRAMED(0x001b31a4, d_001b31a4::f_001b31a4, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_001b32c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b32c8 {

inline constexpr guest::Function<0x0013fac4, u32(u32, u32, u32, u32)> call_0013fac4;  // (from the original)
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32)> call_002fbb30;  // (from the original)

void f_001b32c8(u32 r0, u32 r1) {
    call_0013fac4(r0 + 0x6cu, 0x800u, 0xccu, guest::cpu()->r[3]);  // (from the original)
    call_002fbb30(r0, r1, 0x26cu);  // (from the original)
    *gptr<u8>(r0 + 0x86cu) = 0;  // (from the original)
    return;
}

}  // namespace d_001b32c8
GUEST_EXPORT_FRAMED(0x001b32c8, d_001b32c8::f_001b32c8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001b3300: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b3300 {

struct __attribute__((packed)) Local_001b3300_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_001b3300_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001b3300_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_001b3300_ea_1, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_001b3300_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_001b3300_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001b3300_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_001b3300_ea_2, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x001b3340, u32(u32, u32, u32)> call_001b3340;  // (from the original)
inline constexpr guest::Function<0x001c4c14, u32(u32, u32, u32, u32)> call_001c4c14;  // (from the original)

u32 f_001b3300(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r14 = guest::cpu()->r[14];
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        return r0;
    }
    gptr<Local_001b3300_ea_1> ea_1 = gptr<Local_001b3300_ea_1>(frame.at(0xc).addr());  // (from the original)
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r14;
    call_001c4c14(frame.at(0).addr(), r1, r2, guest::cpu()->r[3]);
    call_001b3340(r0, frame.at(0).addr(), r2);
    gptr<Local_001b3300_ea_2> ea_2 = gptr<Local_001b3300_ea_2>(frame.at(0xc).addr());  // (from the original)
    u32 r4_1 = ea_2->word_0;
    u32 r5_1 = ea_2->word_4;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    return frame.at(0).addr();
}

}  // namespace d_001b3300
GUEST_EXPORT(0x001b3300, d_001b3300::f_001b3300);

// f_001b3340: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b3340 {

struct __attribute__((packed)) Object_001b3340_0 {
    u8 unknown_0[0x69];  // (not used here)
    u8 byte_69;
};
GUEST_OFFSET(Object_001b3340_0, byte_69, 0x69);  // (from the original)

struct __attribute__((packed)) Local_001b3340_ea_1 {
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
};
GUEST_OFFSET(Local_001b3340_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001b3340_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_001b3340_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_001b3340_ea_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_001b3340_ea_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_001b3340_ea_1, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_001b3340_ea_1, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_001b3340_ea_1, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Local_001b3340_ea_1, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Local_001b3340_ea_1, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Local_001b3340_ea_1, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Local_001b3340_ea_1, word_2c, 0x2c);  // (from the original)

struct __attribute__((packed)) Local_001b3340_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(Local_001b3340_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001b3340_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_001b3340_ea_2, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_001b3340_ea_2, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_001b3340_ea_2, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_001b3340_ea_2, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_001b3340_ea_2, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_001b3340_ea_2, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Local_001b3340_ea_2, word_20, 0x20);  // (from the original)

struct __attribute__((packed)) Local_001b3340_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(Local_001b3340_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001b3340_ea_3, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_001b3340_ea_3, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_001b3340_ea_3, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_001b3340_ea_3, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_001b3340_ea_3, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_001b3340_ea_3, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_001b3340_ea_3, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Local_001b3340_ea_3, word_20, 0x20);  // (from the original)

inline constexpr guest::Function<0x001b488c, u32(u32, u32, u32, u32)> call_001b488c;  // (from the original)
inline constexpr guest::Function<0x006aaa58, u32(u32, u32, u32, u32)> call_006aaa58;  // (from the original)
inline constexpr guest::Function<0x0070b7e8, u32(u32, u32, u32, u32)> call_0070b7e8;  // (from the original)
inline constexpr guest::Function<0x0070d904, u32(u32, u32, u32, u32)> call_0070d904;  // (from the original)

void f_001b3340(gptr<Object_001b3340_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x50);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r14 = guest::cpu()->r[14];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    gptr<Local_001b3340_ea_2> ea_2 = gptr<Local_001b3340_ea_2>(0u);
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 r8_1 = 0;
    u32 r9_1 = 0;
    u32 r10_2 = 0;
    u32 r11_2 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r8_2 = 0;
    u32 r0_10 = 0;
    u32 r3_2 = 0;
    u32 r9_2 = 0;
    u32 r10_3 = 0;
    u32 r1_4 = 0;
    u32 r1_6 = 0;
    gptr<Local_001b3340_ea_1> ea_1 = gptr<Local_001b3340_ea_1>(frame.at(0x20).addr());  // (from the original)
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r4;
    ea_1->word_10 = r5;
    ea_1->word_14 = r6;
    ea_1->word_18 = r7;
    ea_1->word_1c = r8;
    ea_1->word_20 = r9;
    ea_1->word_24 = r10;
    ea_1->word_28 = r11;
    ea_1->word_2c = r14;
    r7 = r0;
    r6 = 0x95c010u;  // (from the original)
    if (u32(arg0->byte_69) == 8u) {
        r8 = 0u;
        goto L_1b33bc;
    }
    r1_1 = frame.at(8).addr();
    call_0070b7e8(r7, r1_1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    r0_1 = *frame.at<u32>(0x10);  // (from the original)
    r5 = 0u;
    if (r0_1 < 0u || r0_1 == 0) {
        goto L_1b3508;
    }
L_1b337c:;
    r0_2 = *frame.at<u32>(0x14);  // (from the original)
    r4 = 0u;
    if (r0_2 < 0u || r0_2 == 0) {
        goto L_1b34f8;
    }
L_1b338c:;
    if (u32(*frame.at<u8>(0x18)) == 0) {  // (from the original)
        goto L_1b3478;
    }
    r1_2 = *frame.at<u32>(0x14) - r4 - 1u;  // (from the original)
    r0_3 = *frame.at<u32>(0x24);  // (from the original)
    r0_4 = call_0070d904(r0_3, r1_2, r5, r3);
    goto L_1b3488;
L_1b33bc:;
    r5 = 0u;
    r6 = 0x88ebe0u + (r8 << 3);  // (from the original)
    do {
        r4 = 0u;
        r9 = (r5 & 0x1fu) + ((r8 & 3u) << 5);  // (from the original)
        do {
            r1 = *gptr<u32>(r6) + r4;
            if (r1 < 0x34u) {  // (from the original)
                u32 r0_6 = call_0070d904(*frame.at<u32>(0x24), r1, *gptr<u32>(r6 + 4u) + r5, r3);  // (from the original)
                u32 r0_7 = r0_6 & 0xfu;  // (from the original)
                if (r0_7 >= 0xfu) {  // (from the original)
                    r0_7 = 0xcu;  // (from the original)
                }
                u32 r10_1 = r0_7 & 0xfu;  // (from the original)
                u32 r11_1 = r4 & 0x1fu;  // (from the original)
                *frame.at<u32>(0) = r8 & 3u;
                call_001b488c(r7, r10_1, r11_1, r5 & 0x1fu);  // (from the original)
                u32 r1_3 = *gptr<u16>(0x95c010u + (u32(*gptr<u8>(r7 + r10_1 + 0x58u)) << 1));  // (from the original)
                call_006aaa58(r7, r1_3, r11_1, r9);
                r1 = guest::cpu()->r[1];
                r3 = guest::cpu()->r[3];
            }
            r4 += 1u;
            guest::preempt();
        } while (r4 < 0x20u);  // (from the original)
        r5 += 1u;
        guest::preempt();
    } while (r5 < 0x20u);  // (from the original)
    r8 += 1u;
    if (r8 < 4u) {
        guest::preempt();
        goto L_1b33bc;
    }
L_1b3470:;
    ea_2 = gptr<Local_001b3340_ea_2>(frame.at(0x2c).addr());  // (from the original)
    r4_1 = ea_2->word_0;
    r5_1 = ea_2->word_4;
    r6_1 = ea_2->word_8;
    r7_1 = ea_2->word_c;
    r8_1 = ea_2->word_10;
    r9_1 = ea_2->word_14;
    r10_2 = ea_2->word_18;
    r11_2 = ea_2->word_1c;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
    guest::cpu()->r[10] = r10_2;
    guest::cpu()->r[11] = r11_2;
    return;
L_1b3478:;
    r0_8 = *frame.at<u32>(0x24);  // (from the original)
    r0_4 = call_0070d904(r0_8, r5, r4, r3);
L_1b3488:;
    r0_9 = r0_4 & 0xfu;  // (from the original)
    if (r0_9 >= 0xfu) {  // (from the original)
        r0_9 = 0xcu;  // (from the original)
    }
    r8_2 = r0_9 & 0xfu;  // (from the original)
    r0_10 = *frame.at<u32>(0xc) & 3u;  // (from the original)
    r3_2 = *frame.at<u32>(8) + r4 & 0x1fu;  // (from the original)
    r9_2 = r5 & 0x1fu;  // (from the original)
    r10_3 = r3_2 + (r0_10 << 5);
    *frame.at<u32>(0) = r0_10;
    call_001b488c(r7, r8_2, r9_2, r3_2);
    r1_4 = *gptr<u16>(r6 + (u32(*gptr<u8>(r7 + r8_2 + 0x58u)) << 1));  // (from the original)
    call_006aaa58(r7, r1_4, r9_2, r10_3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    r4 += 1u;
    if (*frame.at<u32>(0x14) > r4) {  // (from the original)
        guest::preempt();
        goto L_1b338c;
    }
L_1b34f8:;
    r5 += 1u;
    if (*frame.at<u32>(0x10) > r5) {  // (from the original)
        guest::preempt();
        goto L_1b337c;
    }
L_1b3508:;
    if (u32(*frame.at<u8>(0x19)) == 0) {  // (from the original)
        guest::preempt();
        goto L_1b3470;
    } else {
        r5 = 0u;
    }
    do {
        r4 = 0u;
        do {
            u32 r0_12 = call_0070d904(*frame.at<u32>(0x24), r5, r4 + 0x20u, r3);  // (from the original)
            u32 r0_13 = r0_12 & 0xfu;  // (from the original)
            if (r0_13 >= 0xfu) {  // (from the original)
                r0_13 = 0xcu;  // (from the original)
            }
            u32 r3_3 = *frame.at<u32>(0x1c) + r4 & 0x1fu;  // (from the original)
            u32 r8_3 = r0_13 & 0xfu;  // (from the original)
            u32 r9_3 = r5 & 0x1fu;  // (from the original)
            *frame.at<u32>(0) = 3;
            call_001b488c(r7, r8_3, r9_3, r3_3);
            u32 r1_5 = *gptr<u16>(r6 + (u32(*gptr<u8>(r7 + r8_3 + 0x58u)) << 1));  // (from the original)
            call_006aaa58(r7, r1_5, r9_3, r3_3 + 0x60u);  // (from the original)
            r1_6 = guest::cpu()->r[1];
            r3 = guest::cpu()->r[3];
            r4 += 1u;
            guest::preempt();
        } while (r4 < 0x10u);  // (from the original)
        r5 += 1u;
        guest::preempt();
    } while (r5 < 0x20u);  // (from the original)
    gptr<Local_001b3340_ea_3> ea_3 = gptr<Local_001b3340_ea_3>(frame.at(0x2c).addr());  // (from the original)
    u32 r4_2 = ea_3->word_0;
    u32 r5_2 = ea_3->word_4;
    u32 r6_2 = ea_3->word_8;
    u32 r7_2 = ea_3->word_c;
    u32 r8_4 = ea_3->word_10;
    u32 r9_4 = ea_3->word_14;
    u32 r10_5 = ea_3->word_18;
    u32 r11_3 = ea_3->word_1c;
    guest::cpu()->r[1] = r1_6;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[8] = r8_4;
    guest::cpu()->r[9] = r9_4;
    guest::cpu()->r[10] = r10_5;
    guest::cpu()->r[11] = r11_3;
    return;
}

}  // namespace d_001b3340
GUEST_EXPORT(0x001b3340, d_001b3340::f_001b3340);

// f_001b35b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b35b0 {

inline constexpr guest::Function<0x001c4bc8, u32(u32, u32, u32, u32)> call_001c4bc8;  // (from the original)
inline constexpr guest::Function<0x001c4c14, u32(u32, u32, u32, u32)> call_001c4c14;  // (from the original)

void f_001b35b0(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r4 = *frame.at<u32>(0x20);  // (from the original)
    u32 r6 = r2;
    u32 r7 = r3;
    call_001c4c14(frame.at(0).addr(), r1, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    if (*frame.at<u32>(8) == 0x20u) {  // (from the original)
        goto L_1b3610;
    }
    r0_2 = *gptr<u8>(r0 + 0x69u);  // (from the original)
    if (r0_2 >= 0xcu || r0_2 >= 9u) {  // (from the original)
        goto L_1b361c;
    }
L_1b35f0:;
    r0_3 = frame.at(0).addr();
    call_001c4bc8(r0_3, r7, r4, r6);
    r1_1 = guest::cpu()->r[1];
    return;
L_1b3610:;
    if (r4 >= 0x20u) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return;
    }
    guest::preempt();
    goto L_1b35f0;
L_1b361c:;
    if (r4 >= 0x20u) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return;
    }
    call_001c4bc8(frame.at(0).addr(), r7, r4, r6);
    call_001c4bc8(frame.at(0).addr(), r7, r4 + 0x20u, r6);  // (from the original)
    call_001c4bc8(frame.at(0).addr(), r7, r4 + 0x40u, r6);  // (from the original)
    call_001c4bc8(frame.at(0).addr(), r7, r4 + 0x60u, r6);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    return;
}

}  // namespace d_001b35b0
GUEST_EXPORT_FRAMED(0x001b35b0, d_001b35b0::f_001b35b0, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_001b3a20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b3a20 {


u32 f_001b3a20(u32 r0, u32 r1) {
    u32 r0_1 = r0 + (r1 << 4) & 0xffu;  // (from the original)
    if ((u32(*gptr<u16>(0x95c010u + (r0_1 << 1))) & 0xfu) != 0) {  // (from the original)
        r0_1 = 0u;
    }
    return r0_1;
}

}  // namespace d_001b3a20
GUEST_EXPORT(0x001b3a20, d_001b3a20::f_001b3a20);

// f_001b3a44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b3a44 {


u32 f_001b3a44(u32 r0, u32 r1) {
    if (r0 >= 0xcu || r1 >= 0xfu) {  // (from the original)
        return 0u;
    }
    return *gptr<u8>((r0 << 4) - r0 + 0xad53a4u + r1);  // (from the original)
}

}  // namespace d_001b3a44
GUEST_EXPORT(0x001b3a44, d_001b3a44::f_001b3a44);

// f_001b3a6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b3a6c {


void f_001b3a6c(u32 r0, u32 r1) {
    u32 r3 = (r1 << 4) - r1;
    u32 r2 = 0u;
    u32 r12 = 0xad53a4u + r3;  // (from the original)
    do {
        u32 cf_1 = r1 >= 0xcu || r2 >= 0xfu;  // (from the original)
        if (!cf_1) {
            r3 = *gptr<u8>(r12 + r2);
        }
        u32 r4_1 = r0 + r2;
        if (cf_1) {
            r3 = 0u;
        }
        r2 += 1u;
        *gptr<u8>(r4_1 + 0x58u) = u8(r3);  // (from the original)
        guest::preempt();
    } while (r2 < 0xfu);  // (from the original)
    return;
}

}  // namespace d_001b3a6c
GUEST_EXPORT_FRAMED(0x001b3a6c, d_001b3a6c::f_001b3a6c, 0x10);  // pushes {r4} first, as the original

// f_001b3ab0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b3ab0 {

struct __attribute__((packed)) Object_001b3ab0_0 {
    u8 unknown_0[0x69];  // (not used here)
    u8 byte_69;
};
GUEST_OFFSET(Object_001b3ab0_0, byte_69, 0x69);  // (from the original)

struct __attribute__((packed)) Local_001b3ab0_r4_1 {
    u8 unknown_0[0x6c];  // (not used here)
    u32 word_6c;
};
GUEST_OFFSET(Local_001b3ab0_r4_1, word_6c, 0x6c);  // (from the original)

struct __attribute__((packed)) Local_001b3ab0_r5_1 {
    u8 unknown_0[0x6c];  // (not used here)
    u32 word_6c;
};
GUEST_OFFSET(Local_001b3ab0_r5_1, word_6c, 0x6c);  // (from the original)

struct __attribute__((packed)) Local_001b3ab0_r5_2 {
    u8 unknown_0[0x6c];  // (not used here)
    u32 word_6c;
};
GUEST_OFFSET(Local_001b3ab0_r5_2, word_6c, 0x6c);  // (from the original)

struct __attribute__((packed)) Local_001b3ab0_r6_1 {
    u8 unknown_0[0x6c];  // (not used here)
    u32 word_6c;
};
GUEST_OFFSET(Local_001b3ab0_r6_1, word_6c, 0x6c);  // (from the original)


void f_001b3ab0(gptr<Object_001b3ab0_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = 0;
    u32 r9 = 0;
    u32 r10 = 0;
    u32 r11 = 0;
    u32 r12 = 0;
    u32 r3_2 = 0;
    gptr<Local_001b3ab0_r4_1> r4_1 = gptr<Local_001b3ab0_r4_1>(0u);
    u32 r3_3 = 0;
    u32 r1_2 = 0;
    *frame.at<u32>(0) = r3;
    u32 r8 = 0xfu;  // (from the original)
    u32 r1_1 = arg0->byte_69;
    if (r1_1 != 8u) {
        if (r1_1 - 6u <= 1u || r1_1 >= 0xcu || r1_1 >= 9u) {  // (from the original)
            goto L_1b3bb0;
        }
        if (r1_1 == 4u || r1_1 == 3u || r1_1 == 5u) {
            r3 = 0u;
            r9 = 0x180u;  // (from the original)
            goto L_1b3c20;
        }
        goto L_1b3c70;
    }
    r9 = 0x88e9c8u;  // (from the original)
    r11 = 1u;
    *frame.at<u32>(0) = 0;
    do {
        r10 = 0x88e8c0u + (*frame.at<u32>(0) << 1);  // (from the original)
        r2 = 0u;
        u32 r14 = *frame.at<u32>(0) << 0x1e >> 0x17;  // (from the original)
        do {
            r1 = 0u;
            u32 r5 = r14 + ((r2 & 0x1fu) << 2);  // (from the original)
            do {
                if (u32(*gptr<u8>(r10)) + r1 < 0x34u) {  // (from the original)
                    if ((*gptr<u32>(r9 + (r2 + (r1 << 5) << 2)) & lsl_r(r11, r1 & 0xff)) == 0) {  // (from the original)
                        goto L_1b3b80;
                    }
                }
                r3_2 = r1 & 0x1fu;  // (from the original)
                r4_1 = gptr<Local_001b3ab0_r4_1>(r0 + (r5 + (r3_2 >> 3) << 2));
                r3_3 = r3_2 << 0x1d >> 0x1b;  // (from the original)
                r4_1->word_6c = lsl_r(0xcu, r3_3 & 0xff) | r4_1->word_6c & ~lsl_r(r8, r3_3 & 0xff);  // (from the original)
L_1b3b80:;
                r1 += 1u;
                guest::preempt();
            } while (r1 < 0x20u);  // (from the original)
            r2 += 1u;
            guest::preempt();
        } while (r2 < 0x20u);  // (from the original)
        r1_2 = *frame.at<u32>(0) + 1u;
        *frame.at<u32>(0) = r1_2;
        guest::preempt();
    } while (r1_2 < 4u);
    return;
L_1b3bb0:;
    r9 = 1u;
    do {
        r3 = 0u;
        r10 = r9 << 0x1e >> 0x17;  // (from the original)
        do {
            r1 = 0u;
            r4 = r10 + ((r3 & 0x1fu) << 2);  // (from the original)
            do {
                u32 r2_1 = r1 & 0x1fu;  // (from the original)
                gptr<Local_001b3ab0_r5_1> r5_1 = gptr<Local_001b3ab0_r5_1>(r0 + (r4 + (r2_1 >> 3) << 2));
                u32 r2_2 = r2_1 << 0x1d >> 0x1b;  // (from the original)
                r1 += 1u;
                r5_1->word_6c = r5_1->word_6c & ~lsl_r(r8, r2_2 & 0xff) | lsl_r(0xcu, r2_2 & 0xff);  // (from the original)
                guest::preempt();
            } while (r1 < 0x20u);  // (from the original)
            r3 += 1u;
            guest::preempt();
        } while (r3 < 0x20u);  // (from the original)
        r9 += 1u;
        guest::preempt();
    } while (r9 < 4u);
    return;
L_1b3c20:;
    r1 = 0u;
    r12 = r9 + ((r3 & 0x1fu) << 2);  // (from the original)
    do {
        u32 r2_3 = r1 & 0x1fu;  // (from the original)
        gptr<Local_001b3ab0_r5_2> r5_2 = gptr<Local_001b3ab0_r5_2>(r0 + (r12 + (r2_3 >> 3) << 2));
        u32 r2_4 = r2_3 << 0x1d >> 0x1b;  // (from the original)
        r1 += 1u;
        r5_2->word_6c = r5_2->word_6c & ~lsl_r(r8, r2_4 & 0xff) | lsl_r(0xcu, r2_4 & 0xff);  // (from the original)
        guest::preempt();
    } while (r1 < 0x20u);  // (from the original)
    r3 += 1u;
    if (r3 < 0x20u) {  // (from the original)
        guest::preempt();
        goto L_1b3c20;
    }
L_1b3c70:;
    u32 r1_3 = arg0->byte_69;
    r2 = 0x20u;  // (from the original)
    if (r1_3 == 2u || r1_3 == 5u) {
        r2 = 0u;
        goto L_1b3c9c;
    }
    if (r1_3 == 1u || r1_3 == 4u) {
        r2 = 0x10u;  // (from the original)
    } else {
        r3 = 0u;
        goto L_1b3cf0;
    }
L_1b3c9c:;
    r3 = 0u;
L_1b3ca0:;
    r1 = r2;
    if (r2 >= 0x20u) {  // (from the original)
        goto L_1b3cf0;
    }
    r4 = 0x100u + ((r3 & 0x1fu) << 2);  // (from the original)
    do {
        u32 r12_1 = r1 & 0x1fu;  // (from the original)
        gptr<Local_001b3ab0_r6_1> r6_1 = gptr<Local_001b3ab0_r6_1>(r0 + (r4 + (r12_1 >> 3) << 2));
        u32 r12_2 = r12_1 << 0x1d >> 0x1b;  // (from the original)
        r1 += 1u;
        r6_1->word_6c = r6_1->word_6c & ~lsl_r(r8, r12_2 & 0xff) | lsl_r(0xcu, r12_2 & 0xff);  // (from the original)
        guest::preempt();
    } while (r1 < 0x20u);  // (from the original)
L_1b3cf0:;
    r3 += 1u;
    if (r3 < 0x20u) {  // (from the original)
        guest::preempt();
        goto L_1b3ca0;
    }
    return;
}

}  // namespace d_001b3ab0
GUEST_EXPORT_FRAMED(0x001b3ab0, d_001b3ab0::f_001b3ab0, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_001b3d08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b3d08 {


u32 f_001b3d08(u32 r0, u32 r1) {
    return (r1 == 0 ? 0u : 0xfu) | u32(*gptr<u16>(0x95c010u + (r0 << 1)));  // (from the original)
}

}  // namespace d_001b3d08
GUEST_EXPORT(0x001b3d08, d_001b3d08::f_001b3d08);

// f_001b3d2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b3d2c {

inline guest::global<u32, 0x00aaf14c> global_00aaf14c;  // (from the original)
inline constexpr guest::Function<0x001b4a8c, u32(u32, u32, u32, u32)> call_001b4a8c;  // (from the original)

void f_001b3d2c(u32 r0) {
    u32 r1_1 = *global_00aaf14c;
    if (r1_1 == 0) {
        return;
    }
    call_001b4a8c(r0 + 0x2au, r1_1 + 0x55a6u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    return;
}

}  // namespace d_001b3d2c
GUEST_EXPORT(0x001b3d2c, d_001b3d2c::f_001b3d2c);

// f_001b488c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b488c {

struct __attribute__((packed)) Local_001b488c_r2_2 {
    u8 unknown_0[0x6c];  // (not used here)
    u32 word_6c;
};
GUEST_OFFSET(Local_001b488c_r2_2, word_6c, 0x6c);  // (from the original)


void f_001b488c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r2_1 = r2 & 0x1fu;  // (from the original)
    u32 r12_1 = (*gptr<u32>(guest::cpu()->r[13] + 4u) << 0x1e >> 0x17) + ((r3 & 0x1fu) << 2);  // (from the original)
    gptr<Local_001b488c_r2_2> r2_2 = gptr<Local_001b488c_r2_2>(r0 + (r12_1 + (r2_1 >> 3) << 2));
    u32 r0_1 = (r2_1 << 0x1d) >> 0x1b;  // (from the original)
    r2_2->word_6c = r2_2->word_6c & ~lsl_r(0xfu, r0_1 & 0xff) | lsl_r(r1 & 0xfu, r0_1 & 0xff);  // (from the original)
    return;
}

}  // namespace d_001b488c
GUEST_EXPORT_FRAMED(0x001b488c, d_001b488c::f_001b488c, 0x10);  // pushes {r4} first, as the original

// f_001b48dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b48dc {

inline constexpr guest::Function<0x002fe940, u32(u32, u32, u32, u32)> call_002fe940;  // (from the original)
inline constexpr guest::Function<0x0030f52c, u32(u32, u32)> call_0030f52c;  // (from the original)

void f_001b48dc(u32 r0, u32 r1, u32 r2) {
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    u32 r0_2 = call_002fe940(r0 + 0x2au, r1, r2, guest::cpu()->r[3]);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        call_0030f52c(r0 + 0x40u, r2);  // (from the original)
        return;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_001b48dc
GUEST_EXPORT(0x001b48dc, d_001b48dc::f_001b48dc);

// f_001b490c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b490c {

inline constexpr guest::Function<0x001b2c7c, u32(u32, u32, u32)> call_001b2c7c;  // (from the original)
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)
inline constexpr guest::Function<0x002fc900, u32(u32, u32, u32)> call_002fc900;  // (from the original)
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32)> call_00305f44;  // (from the original)
inline constexpr guest::Function<0x006aac60, u32(u32, u32, u32)> call_006aac60;  // (from the original)

void f_001b490c(u32 r0, u32 r1) {
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_1 = call_002fbb30(r0, r1, 0x870u, guest::cpu()->r[3]);  // (from the original)
    *gptr<u8>(r0 + 0x86cu) = 0;  // (from the original)
    u32 r0_2 = call_002fc900(r0_1, guest::cpu()->r[1], guest::cpu()->r[2]);
    u32 r1_2 = guest::cpu()->r[1];
    u32 r2_2 = guest::cpu()->r[2];
    if (r0_2 == 0) {
        goto L_1b4968;
    }
    r0_3 = call_00305f44(r0_2, r1_2, r2_2);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    if (r0_3 == 0) {
        goto L_1b4968;
    }
    r0_4 = call_006aac60(r0, r1_2, r2_2);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    if ((r0_4 >> 8u & 0xfu) == 0) {  // (from the original)
        r1_2 = 1u;
        *gptr<u8>(r0 + 0x86cu) = u8(r1_2);  // (from the original)
    }
L_1b4968:;
    call_001b2c7c(r0, r1_2, r2_2);
    *gptr<u16>(r0 + 0x28u) = 0;  // (from the original)
    return;
}

}  // namespace d_001b490c
GUEST_EXPORT_FRAMED(0x001b490c, d_001b490c::f_001b490c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001b4980: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b4980 {

struct __attribute__((packed)) Object_001b4980_0 {
    u8 unknown_0[0x67];  // (not used here)
    u8 byte_67;
    u8 byte_68;
    u8 byte_69;
    u8 unknown_6a[0x802];  // (not used here)
    u8 byte_86c;
};
GUEST_OFFSET(Object_001b4980_0, byte_67, 0x67);  // (from the original)
GUEST_OFFSET(Object_001b4980_0, byte_68, 0x68);  // (from the original)
GUEST_OFFSET(Object_001b4980_0, byte_69, 0x69);  // (from the original)
GUEST_OFFSET(Object_001b4980_0, byte_86c, 0x86c);  // (from the original)


void f_001b4980(gptr<Object_001b4980_0> arg0) {
    arg0->byte_67 = 1;
    arg0->byte_68 = 0;
    arg0->byte_69 = 4;
    arg0->byte_86c = 0;
    guest::cpu()->r[1] = 0u;
    return;
}

}  // namespace d_001b4980
GUEST_EXPORT_FRAMED(0x001b4980, d_001b4980::f_001b4980, 0x4010);  // pushes {r4, lr} first, as the original

// f_001b49b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b49b0 {

inline constexpr guest::Function<0x001b2c7c, u32(u32, u32, u32, u32)> call_001b2c7c;  // (from the original)
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)
inline constexpr guest::Function<0x002fc900, u32(u32, u32, u32, u32)> call_002fc900;  // (from the original)
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> call_00305f44;  // (from the original)
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;  // (from the original)
inline constexpr guest::Function<0x006aac60, u32(u32, u32, u32, u32)> call_006aac60;  // (from the original)
inline constexpr guest::Function<0x006aaf98, u32(u32, u32, u32, u32)> call_006aaf98;  // (from the original)
inline constexpr guest::Function<0x006ab0b0, u32(u32, u32, u32, u32)> call_006ab0b0;  // (from the original)

u32 f_001b49b0(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_8 = 0;
    u32 r2_7 = 0;
    *frame.at<u32>(0) = r3;
    u32 r0_1 = call_002fbb30(r0, r1, 0x870u, r3);  // (from the original)
    *gptr<u8>(r0 + 0x86cu) = 0;  // (from the original)
    u32 r0_2 = call_002fc900(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_2 = guest::cpu()->r[1];
    u32 r2_2 = guest::cpu()->r[2];
    u32 r3_2 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        goto L_1b49fc;
    }
    r0_3 = call_00305f44(r0_2, r1_2, r2_2, r3_2);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_3 == 0) {
        goto L_1b49fc;
    }
    r0_4 = call_006aac60(r0, r1_2, r2_2, r3_2);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if ((r0_4 >> 8u & 0xfu) == 0) {  // (from the original)
        r1_2 = 1u;
        *gptr<u8>(r0 + 0x86cu) = u8(r1_2);  // (from the original)
    }
L_1b49fc:;
    call_006ab0b0(r0, r1_2, r2_2, r3_2);
    u32 r0_5 = call_006aac60(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_6 = call_006aaf98(r0_5, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_7 = call_002fc900(r0_6, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_5 = guest::cpu()->r[1];
    u32 r2_6 = guest::cpu()->r[2];
    u32 r3_6 = guest::cpu()->r[3];
    if (r0_7 == 0) {
        goto L_1b4a68;
    }
    r0_8 = call_006aac60(r1, r1_5, r2_6, r3_6);
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r1_5 = 0xffffu;  // (from the original)
    if (r0_5 == r1_5 || r0_8 == r1_5) {
        goto L_1b4a68;
    } else {
        *frame.at<u16>(0) = u16(r0_5);
        *frame.at<u16>(2) = u16(r0_8);
    }
    r2_7 = frame.at(0).addr();
    call_006249b0(0x6du, 4u, r2_7, 4u);  // (from the original)
    r1_5 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
L_1b4a68:;
    call_001b2c7c(r0, r1_5, r2_6, r3_6);
    *gptr<u16>(r0 + 0x28u) = 0;  // (from the original)
    return r0;
}

}  // namespace d_001b49b0
GUEST_EXPORT_FRAMED(0x001b49b0, d_001b49b0::f_001b49b0, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_001b4a8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b4a8c {

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)

u32 f_001b4a8c() {
    return call_002f8574(guest::cpu()->r[0], guest::cpu()->r[1], 0x2eu, guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_001b4a8c
GUEST_EXPORT(0x001b4a8c, d_001b4a8c::f_001b4a8c);

// f_001b4b20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b4b20 {

struct __attribute__((packed)) Object_001b4b20_0 {
    u8 unknown_0[0x16];  // (not used here)
    u32 word_16;
    u32 word_1a;
    u32 word_1e;
    u32 word_22;
    u32 word_26;
    u16 half_2a;
};
GUEST_OFFSET(Object_001b4b20_0, word_16, 0x16);  // (from the original)
GUEST_OFFSET(Object_001b4b20_0, word_1a, 0x1a);  // (from the original)
GUEST_OFFSET(Object_001b4b20_0, word_1e, 0x1e);  // (from the original)
GUEST_OFFSET(Object_001b4b20_0, word_22, 0x22);  // (from the original)
GUEST_OFFSET(Object_001b4b20_0, word_26, 0x26);  // (from the original)
GUEST_OFFSET(Object_001b4b20_0, half_2a, 0x2a);  // (from the original)

struct __attribute__((packed)) Object_001b4b20_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u16 half_14;
};
GUEST_OFFSET(Object_001b4b20_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_001b4b20_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_001b4b20_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_001b4b20_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_001b4b20_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_001b4b20_1, half_14, 0x14);  // (from the original)

struct __attribute__((packed)) Local_001b4b20_r4_1 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(Local_001b4b20_r4_1, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001b4b20_r4_1, byte_1, 0x1);  // (from the original)

inline constexpr guest::Function<0x0035072c, u32(u32, u32, u32, u32)> call_0035072c;  // (from the original)

void f_001b4b20(gptr<Object_001b4b20_0> arg0, gptr<Object_001b4b20_1> arg1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r0 = arg0.addr();
    *frame.at<u32>(0) = r3;
    gptr<Local_001b4b20_r4_1> r4_1 = gptr<Local_001b4b20_r4_1>(r0 + 0x2cu);  // (from the original)
    arg0->word_16 = arg1->word_0;
    arg0->word_1a = arg1->word_4;
    arg0->word_1e = arg1->word_8;
    arg0->word_22 = arg1->word_c;
    u32 r2_1 = arg1->word_10;
    arg0->word_26 = r2_1;
    u32 r1_1 = arg1->half_14;
    arg0->half_2a = u16(r1_1);
    call_0035072c(frame.at(0).addr(), r1_1, r2_1, r3);
    r4_1->byte_0 = u8(*frame.at<u32>(0) >> 0x18);  // (from the original)
    r4_1->byte_1 = u8(*frame.at<u32>(0) >> 0x10);  // (from the original)
    return;
}

}  // namespace d_001b4b20
GUEST_EXPORT_FRAMED(0x001b4b20, d_001b4b20::f_001b4b20, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_001b545c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b545c {


u32 f_001b545c(u32 r0) {
    guest::cpu()->r[1] = 0x18fu;  // (from the original)
    return r0 >= 0x18fu ? 0u : 1u;  // (from the original)
}

}  // namespace d_001b545c
GUEST_EXPORT(0x001b545c, d_001b545c::f_001b545c);

// f_001b5474: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b5474 {

struct __attribute__((packed)) Local_001b5474_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
};
GUEST_OFFSET(Local_001b5474_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001b5474_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_001b5474_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_001b5474_ea_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_001b5474_ea_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_001b5474_ea_1, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_001b5474_ea_1, word_18, 0x18);  // (from the original)

struct __attribute__((packed)) Local_001b5474_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001b5474_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001b5474_ea_2, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_001b5474_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
};
GUEST_OFFSET(Local_001b5474_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001b5474_ea_3, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_001b5474_ea_3, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_001b5474_ea_3, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_001b5474_ea_3, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_001b5474_ea_3, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_001b5474_ea_3, word_18, 0x18);  // (from the original)

struct __attribute__((packed)) Local_001b5474_r4_1 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
};
GUEST_OFFSET(Local_001b5474_r4_1, byte_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> call_002fc994;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x00303acc, u32(u32, u32, u32, u32)> call_00303acc;  // (from the original)
inline constexpr guest::Function<0x0030b654, u32(u32, u32, u32, u32)> call_0030b654;  // (from the original)
inline constexpr guest::Function<0x004e9a78, u32(u32, u32, u32, u32)> call_004e9a78;  // (from the original)
inline constexpr guest::Function<0x0059e65c, u32(u32, u32, u32, u32)> call_0059e65c;  // (from the original)
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> call_006a5e34;  // (from the original)

u32 f_001b5474(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x28);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r14 = guest::cpu()->r[14];
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    u32 r0_1 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_4 = 0;
    u32 r0_6 = 0;
    u32 r2_4 = 0;
    u32 r3_5 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r3_6 = 0;
    if (r2 >= 2u) {
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        guest::cpu()->r[8] = r8;
        guest::cpu()->r[9] = r9;
        return r0;
    }
    gptr<Local_001b5474_ea_1> ea_1 = gptr<Local_001b5474_ea_1>(frame.at(0xc).addr());  // (from the original)
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r6;
    ea_1->word_c = r7;
    ea_1->word_10 = r8;
    ea_1->word_14 = r9;
    ea_1->word_18 = r14;
    gptr<Local_001b5474_r4_1> r4_1 = gptr<Local_001b5474_r4_1>(r0 + r2);
    gptr<Local_001b5474_ea_2> ea_2 = gptr<Local_001b5474_ea_2>(frame.at(0x28).addr());  // (from the original)
    u32 r6_1 = ea_2->word_0;
    u32 r7_1 = ea_2->word_4;
    u32 r3_1 = frame.at(4).addr();
    if (u32(r4_1->byte_8) != 0) {
        call_002fcbb0(r3_1, 0x2083u, r2, r3_1);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
    } else {
        call_002fc934(r3_1, r0 + (r2 << 2), r2, r3_1);
        r1_1 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
    }
    if (u32(r4_1->byte_8) == 0) {
        r4_1->byte_8 = 1;
    } else {
        goto L_1b55a4;
    }
    r0_1 = call_002f74c8(1u, r1_1, r2_1, r3_2);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0_1 != r1) {
        goto L_1b55a4;
    }
    r0_2 = frame.at(4).addr();
    r0_3 = call_0030b654(r0_2, r1_1, r2_2, r3_3);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    if (r0_3 != 0) {
        u32 r0_5 = call_00303acc(frame.at(4).addr(), r1_3, r2_3, r3_4);
        if (r0_5 != 0) {
            call_004e9a78(r3, r6_1, 2u, r7_1);
            r1_1 = guest::cpu()->r[1];
            goto L_1b55a4;
        }
        call_004e9a78(r3, r6_1, 1u, r7_1);
        r1_1 = guest::cpu()->r[1];
        goto L_1b55a4;
    }
    r0_6 = call_006a5e34(r0_3, r1_3, r2_3, r3_4);
    r1_1 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    if (r0_6 == 0) {
        goto L_1b55a4;
    }
    r0_7 = frame.at(8).addr();
    r0_8 = call_002fcbb0(r0_7, 0x2083u, r2_4, r3_5);  // (from the original)
    *frame.at<u32>(0) = 0;
    call_002fc994(r0_6, r0_8, r3, r6_1);
    r3_6 = guest::cpu()->r[3];
    call_0059e65c(r3, r6_1, 1u, r3_6);
    r1_1 = guest::cpu()->r[1];
L_1b55a4:;
    gptr<Local_001b5474_ea_3> ea_3 = gptr<Local_001b5474_ea_3>(frame.at(0xc).addr());  // (from the original)
    u32 r4_2 = ea_3->word_0;
    u32 r5_1 = ea_3->word_4;
    u32 r6_2 = ea_3->word_8;
    u32 r7_2 = ea_3->word_c;
    u32 r8_1 = ea_3->word_10;
    u32 r9_1 = ea_3->word_14;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
    return frame.at(4).addr();
}

}  // namespace d_001b5474
GUEST_EXPORT(0x001b5474, d_001b5474::f_001b5474);

// f_001b55b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b55b8 {

inline constexpr guest::Function<0x00135740, u32(u32, u32, u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32, u32)> call_00137e84;  // (from the original)
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)
inline constexpr guest::Function<0x0056029c, u32(u32, u32, u32)> call_0056029c;  // (from the original)
inline constexpr guest::Function<0x005603f0, u32(u32, u32, u32, u32)> call_005603f0;  // (from the original)

u32 f_001b55b8(u32 r0, u32 r1_unused, u32 r2) {
    guest::StackFrame frame(0x640);  // the original's stack frame
    u32 r1 = 0;
    u32 r4 = 0;
    u32 r5 = 0;
    u32 r6 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r0_6 = 0;
    u32 r5_1 = 0;
    u32 r1_3 = 0;
    u32 r0_8 = 0;
    u32 r1_4 = 0;
    u32 r2_2 = 0;
    u32 r1_1 = r0 - 0x2000u;  // (from the original)
    u32 cf_1 = r0 >= 0x18fu;  // (from the original)
    u32 r0_1 = r0 - 0x1000u;  // (from the original)
    if (cf_1) {
        cf_1 = r0_1 >= 0x10u;  // (from the original)
    }
    if (cf_1) {
        if (r1_1 >= 0x11u) {  // (from the original)
            guest::cpu()->r[1] = r1_1;
            return 0u;
        }
    }
    if (r0_1 < 0x10u) {  // (from the original)
        r6 = 0x982268u;  // (from the original)
        r5 = r0_1;
        r0_3 = *gptr<u32>(r6);
        if (r0_3 == 0) {
            goto L_1b5628;
        }
        r0_2 = *gptr<u32>(*gptr<u32>(r6) + (r5 << 2));
        guest::cpu()->r[1] = r1_1;
        return r0_2;
    }
    if (r1_1 >= 0x11u) {  // (from the original)
        goto L_1b567c;
    }
    r6 = 0x9821f4u;  // (from the original)
    r5 = r1_1;
    r0_4 = *gptr<u32>(r6);
    if (r0_4 == 0) {
        goto L_1b56a8;
    }
    r0_2 = *gptr<u32>(*gptr<u32>(r6) + (r5 << 2));
    guest::cpu()->r[1] = r1_1;
    return r0_2;
L_1b5628:;
    r0_5 = call_005603f0(r0_3, r1_1, r2, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r4 = r0_5;
    call_00135740(r0_5, r1_2, r2_1);
    r1 = guest::cpu()->r[1];
    if (*gptr<u32>(r6) != 0) {
        goto L_1b5664;
    }
    call_0056029c(0xaf7f84u, 0x9821f8u, 0x10u);  // (from the original)
    r1 = guest::cpu()->r[1];
    r0_6 = 0xaf7f84u;  // (from the original)
    goto L_1b56dc;
L_1b5664:;
    call_00137e84(r4, r1);
    r1_1 = guest::cpu()->r[1];
    return *gptr<u32>(*gptr<u32>(r6) + (r5 << 2));
L_1b567c:;
    r5_1 = frame.at(0).addr();
    call_002fbb30(r5_1, 0xa83afcu, 0x63cu, guest::cpu()->r[3]);  // (from the original)
    r1_3 = *gptr<u32>(r5_1 + (r0 << 2));
    *gptr<u8>(r1_3 + 0xfu) = 0;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    return r1_3 + 0xau;  // (from the original)
L_1b56a8:;
    r0_8 = call_005603f0(r0_4, r1_1, r2, guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r4 = r0_8;
    call_00135740(r0_8, r1_4, r2_2);
    r1 = guest::cpu()->r[1];
    if (*gptr<u32>(r6) != 0) {
        guest::preempt();
        goto L_1b5664;
    }
    call_0056029c(0xaf7f40u, 0x982180u, 0x11u);  // (from the original)
    r1 = guest::cpu()->r[1];
    r0_6 = 0xaf7f40u;  // (from the original)
L_1b56dc:;
    *gptr<u32>(r6) = r0_6;
    guest::preempt();
    goto L_1b5664;
}

}  // namespace d_001b55b8
GUEST_EXPORT_FRAMED(0x001b55b8, d_001b55b8::f_001b55b8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001b5d74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b5d74 {

inline guest::global<u32, 0x0095c360> global_0095c360;  // (from the original)
inline constexpr guest::Function<0x001b55b8, u32(u32, u32, u32, u32)> call_001b55b8;  // (from the original)

u32 f_001b5d74(u32 r0) {
    u32 r1_1 = r0 - 0x2010u;  // (from the original)
    if (r1_1 == 0) {
        return *global_0095c360;
    }
    return call_001b55b8(r0, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_001b5d74
GUEST_EXPORT(0x001b5d74, d_001b5d74::f_001b5d74);

// f_001b5d94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b5d94 {


u32 f_001b5d94(u32 r0) {
    u32 r1_1 = 0x18fu;  // (from the original)
    u32 cf_1 = r0 >= r1_1;
    if (cf_1) {
        r1_1 = r0 - 0x1000u;  // (from the original)
        cf_1 = r1_1 >= 0x10u;  // (from the original)
    }
    if (!cf_1) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    if (r0 - 0x2000u >= 0x11u) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_001b5d94
GUEST_EXPORT(0x001b5d94, d_001b5d94::f_001b5d94);

// f_001b5f7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b5f7c {

struct __attribute__((packed)) Object_001b5f7c_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_001b5f7c_0, byte_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x002d4d30, u32(u32, u32)> call_002d4d30;  // (from the original)
inline constexpr guest::Function<0x002d4f3c, u32(u32, u32, u32, u32)> call_002d4f3c;  // (from the original)
inline constexpr guest::Function<0x002d5184, u32(u32, u32)> call_002d5184;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x00301444, u32(u32, u32)> call_00301444;  // (from the original)
inline constexpr guest::Function<0x003059f8, u32(u32, u32)> call_003059f8;  // (from the original)

void f_001b5f7c(gptr<Object_001b5f7c_0> arg0, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0 = arg0.addr();
    arg0->byte_0 = 0xff;  // (from the original)
    call_002d4f3c(r0 + 2u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    call_003059f8(r0 + 0x304u, guest::cpu()->r[1]);  // (from the original)
    call_00301444(r0 + 0xb74u, 0x22u);  // (from the original)
    call_002fcbb0(frame.at(0).addr(), 0x23c6u);  // (from the original)
    call_002fcbb0(frame.at(4).addr(), 0x2460u);  // (from the original)
    call_002d4d30(r0 + 2u, frame.at(0).addr());
    call_002d5184(r0 + 2u, frame.at(4).addr());
    return;
}

}  // namespace d_001b5f7c
GUEST_EXPORT_FRAMED(0x001b5f7c, d_001b5f7c::f_001b5f7c, 0x4010);  // pushes {r4, lr} first, as the original

// f_001b625c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b625c {

inline constexpr guest::Function<0x001b6278, u32(u32, u32, u32, u32)> call_001b6278;  // (from the original)

void f_001b625c(u32 r0_unused, u32 r1) {
    if (s32(r1) >= 0xa) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return;
    }
    call_001b6278(guest::cpu()->r[0], 1u, r1, 0u);
    return;
}

}  // namespace d_001b625c
GUEST_EXPORT(0x001b625c, d_001b625c::f_001b625c);

// f_001b732c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b732c {

struct __attribute__((packed)) Object_001b732c_0 {
    u8 byte_0;
    u8 byte_1;
    u16 half_2;
    u16 half_4;
    u8 unknown_6[0x8];  // (not used here)
    u8 byte_e;
    u8 byte_f;
    u8 unknown_10[0x8];  // (not used here)
    u8 byte_18;
    u8 byte_19;
};
GUEST_OFFSET(Object_001b732c_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_001b732c_0, byte_1, 0x1);  // (from the original)
GUEST_OFFSET(Object_001b732c_0, half_2, 0x2);  // (from the original)
GUEST_OFFSET(Object_001b732c_0, half_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_001b732c_0, byte_e, 0xe);  // (from the original)
GUEST_OFFSET(Object_001b732c_0, byte_f, 0xf);  // (from the original)
GUEST_OFFSET(Object_001b732c_0, byte_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_001b732c_0, byte_19, 0x19);  // (from the original)


void f_001b732c(gptr<Object_001b732c_0> arg0) {
    arg0->byte_0 = 0;
    u32 r2_1 = ~0u;
    arg0->byte_1 = 0;
    arg0->half_2 = u16(r2_1);
    arg0->half_4 = u16(r2_1);
    arg0->byte_e = 0;
    arg0->byte_f = 0xc8;  // (from the original)
    arg0->byte_18 = 0;
    arg0->byte_19 = 0xc8;  // (from the original)
    guest::cpu()->r[1] = 0u;
    return;
}

}  // namespace d_001b732c
GUEST_EXPORT(0x001b732c, d_001b732c::f_001b732c);

// f_001b7530: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b7530 {

struct __attribute__((packed)) Object_001b7530_0 {
    u8 unknown_0[0x18];  // (not used here)
    u8 byte_18;
};
GUEST_OFFSET(Object_001b7530_0, byte_18, 0x18);  // (from the original)

inline guest::global<u8, 0x00ad56fa> global_00ad56fa;  // (from the original)
inline guest::global<u8, 0x00ad56fb> global_00ad56fb;  // (from the original)

u32 f_001b7530(gptr<Object_001b7530_0> arg0) {
    if (u32(*global_00ad56fa) != 0) {
        guest::cpu()->r[1] = 0xad56e0u;  // (from the original)
        return 0u;
    }
    u32 r1_1 = *global_00ad56fb;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    if (u32(arg0->byte_18) <= 0xfu) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_001b7530
GUEST_EXPORT(0x001b7530, d_001b7530::f_001b7530);

// f_001b7568: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b7568 {

inline guest::global<u32, 0x0095c6d0> global_0095c6d0;  // (from the original)
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x006c4280, u32(u32, u32, u32, u32)> call_006c4280;  // (from the original)
inline constexpr guest::Function<0x00768738, u32(u32, u32, u32, u32)> call_00768738;  // (from the original)
inline constexpr guest::Function<0x0076e80c, u32(u32, u32, u32, u32)> call_0076e80c;  // (from the original)

u32 f_001b7568(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_10 = 0;
    u32 r4 = r0 + (r1 << 2);
    u32 r6 = *gptr<u32>(r4 + 0x10u);  // (from the original)
    u32 r0_1 = s32(s8(*gptr<u8>(*global_0095c6d0 + 0x1cu)));  // (from the original)
    u32 r0_2 = call_006c4280(r0_1, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    u32 r3_1 = guest::cpu()->r[3];
    if (r0_2 == 1u) {
        goto L_1b75c8;
    }
    if (r0_2 == 2u || r0_2 == 3u || r0_2 == 0xau) {  // (from the original)
        goto L_1b7600;
    }
    *gptr<u32>(r4 + 0x10u) = *gptr<u32>(r4 + 0x10u) + r2;  // (from the original)
    return *gptr<u32>(r4 + 0x10u) == r6 ? 0u : 1u;  // (from the original)
L_1b75c8:;
    *gptr<u32>(r4 + 0x10u) = *gptr<u32>(r4 + 0x10u) + r2;  // (from the original)
    r0_4 = *global_0095c6d0 + 0x10u;  // (from the original)
    r0_5 = call_0076e80c(r0_4, r3, r2_1, r3_1);
    r1 = guest::cpu()->r[1];
    if (r0_5 != 0) {
        return *gptr<u32>(r4 + 0x10u) == r6 ? 0u : 1u;  // (from the original)
    }
    *gptr<u32>(r4 + 0x20u) = *gptr<u32>(r4 + 0x20u) + r2;  // (from the original)
    return *gptr<u32>(r4 + 0x10u) == r6 ? 0u : 1u;  // (from the original)
L_1b7600:;
    u32 r0_6 = *global_0095c6d0 + 0x10u;  // (from the original)
    r1 = *gptr<u8>(r0_6 + 0xdu);  // (from the original)
    if (r1 != 0) {
        if (r1 == 1u) {
            goto L_1b7644;
        }
        if (r1 != 2u) {
            r0_3 = *gptr<u32>(r4 + 0x10u) == r6 ? 0u : 1u;  // (from the original)
            guest::cpu()->r[1] = r1;
            return r0_3;
        }
        u32 r0_7 = call_0076e80c(r0_6, r3, r2_1, r3_1);
        r1 = guest::cpu()->r[1];
        if (r0_7 == 0) {
            return *gptr<u32>(r4 + 0x10u) == r6 ? 0u : 1u;  // (from the original)
        }
    }
    r0_8 = *gptr<u32>(r4 + 0x10u) + r2;  // (from the original)
    goto L_1b767c;
L_1b7644:;
    r0_9 = call_002fcaf4(r3, r1, r2_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_9 != 0) {
        r1 = (r2 << 7) - (r2 + (r2 << 1));
        r0_8 = *gptr<u32>(r4 + 0x10u) + (r1 << 3);  // (from the original)
        goto L_1b767c;
    }
    r0_10 = call_00768738(r3, r1_1, r2_2, r3_2);
    r1 = *gptr<u32>(r4 + 0x10u);  // (from the original)
    r0_8 = r0_10 * r2 + r1;
L_1b767c:;
    *gptr<u32>(r4 + 0x10u) = r0_8;  // (from the original)
    r0_3 = *gptr<u32>(r4 + 0x10u) == r6 ? 0u : 1u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_3;
}

}  // namespace d_001b7568
GUEST_EXPORT_FRAMED(0x001b7568, d_001b7568::f_001b7568, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_001b7688: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b7688 {

inline guest::global<u32, 0x0095c71c> global_0095c71c;  // (from the original)
inline guest::global<u32, 0x0095c720> global_0095c720;  // (from the original)
inline constexpr guest::Function<0x00131280, u32(u32, u32, u32, u32)> call_00131280;  // (from the original)
inline constexpr guest::Function<0x001320cc, u32(u32, u32, u32)> call_001320cc;  // (from the original)

void f_001b7688(u32 r0) {
    u32 r0_2 = 0;
    if (*global_0095c71c == 0) {
        u32 r0_1 = call_00131280(0x3cu, r0, 4u, guest::cpu()->r[3]);  // (from the original)
        u32 r4_1 = r0_1;
        if (r0_1 == 0) {
            *global_0095c720 = r4_1;
            r4_1 = 0u;
            goto L_1b76d8;
        }
        r0_2 = call_001320cc(r0_1, r0, 3u);
        *gptr<u32>(r0_2) = 0x8f9a24;  // (from the original)
        *global_0095c720 = r0_2;
L_1b76d8:;
        *global_0095c71c = r4_1;
    }
    return;
}

}  // namespace d_001b7688
GUEST_EXPORT_FRAMED(0x001b7688, d_001b7688::f_001b7688, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001b7b90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b7b90 {

struct __attribute__((packed)) Local_001b7b90_r4_1 {
    u8 unknown_0[0x34];  // (not used here)
    u8 byte_34;
};
GUEST_OFFSET(Local_001b7b90_r4_1, byte_34, 0x34);  // (from the original)

inline guest::global<u32, 0x0095c6d0> global_0095c6d0;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> call_00300904;  // (from the original)
inline constexpr guest::Function<0x004e4510, u32(u32, u32, u32, u32)> call_004e4510;  // (from the original)
inline constexpr guest::Function<0x005b49e0, u32(u32, u32, u32, u32)> call_005b49e0;  // (from the original)
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;  // (from the original)
inline constexpr guest::Function<0x00625690, u32(u32, u32, u32, u32)> call_00625690;  // (from the original)
inline constexpr guest::Function<0x006c4280, u32(u32, u32, u32, u32)> call_006c4280;  // (from the original)

void f_001b7b90(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::cpu()->r[13] -= 8u;
    u32 r0_1 = *global_0095c6d0;
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        return;
    }
    u32 r0_2 = s32(s8(*gptr<u8>(r0_1 + 0x1cu)));  // (from the original)
    u32 r0_3 = call_006c4280(r0_2, r1, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    u32 r3_1 = guest::cpu()->r[3];
    if (r0_3 != 9u) {
        guest::cpu()->r[13] += 8u;
        return;
    }
    u32 r0_4 = call_002f74c8(r0_3, r1_1, r2_1, r3_1);
    u32 r0_5 = call_005b49e0(r0_4, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_3 = guest::cpu()->r[1];
    u32 r2_3 = guest::cpu()->r[2];
    u32 r3_3 = guest::cpu()->r[3];
    if (r0_5 == 0) {
        guest::cpu()->r[13] += 8u;
        return;
    }
    u32 r0_6 = call_002f74c8(r0_5, r1_3, r2_3, r3_3);
    u32 r1_4 = guest::cpu()->r[1];
    u32 r2_4 = guest::cpu()->r[2];
    u32 r3_4 = guest::cpu()->r[3];
    u32 r0_7 = r0_6 - 0x81u;  // (from the original)
    gptr<Local_001b7b90_r4_1> r4_1 = gptr<Local_001b7b90_r4_1>(r0 + u32(s32(r0_7 + (r0_7 >> 0x1f)) >> 1));  // (from the original)
    u32 r0_8 = r4_1->byte_34;
    if (r0_8 != 0) {
        guest::cpu()->r[13] += 8u;
        return;
    }
    u32 r0_9 = call_002f74c8(r0_8, r1_4, r2_4, r3_4);
    u32 r0_10 = call_004e4510(r0_9, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_6 = guest::cpu()->r[1];
    u32 r2_6 = guest::cpu()->r[2];
    u32 r3_6 = guest::cpu()->r[3];
    if (r0_10 == 0) {
        guest::cpu()->r[13] += 8u;
        return;
    }
    r4_1->byte_34 = 1;
    u32 r0_11 = call_00300904(1u, r1_6, r2_6, r3_6);
    u32 r1_7 = guest::cpu()->r[1];
    u32 r2_7 = guest::cpu()->r[2];
    u32 r3_7 = guest::cpu()->r[3];
    if (r0_11 == 0) {
        guest::cpu()->r[13] += 8u;
        return;
    }
    u32 r0_12 = call_00625690(r0_11, r1_7, r2_7, r3_7);
    if (r0_12 <= 1u) {
        guest::cpu()->r[13] += 8u;
        return;
    }
    guest::cpu()->r[13] += 8u;
    call_006249b0(0x45u, 4u, 0u, 0u);
    return;  // (from the original)
}

}  // namespace d_001b7b90
GUEST_EXPORT(0x001b7b90, d_001b7b90::f_001b7b90);

// f_001b88c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b88c0 {

inline guest::global<u8, 0x00951481> global_00951481;  // (from the original)
inline guest::global<u32, 0x00951488> global_00951488;  // (from the original)
inline constexpr guest::Function<0x00135520, u32(u32)> call_00135520;  // (from the original)

u32 f_001b88c0(u32 r0_unused, u32 r1) {
    u32 r0_1 = *global_00951488 - 1u;
    *global_00951488 = r0_1;
    if (r0_1 != 0 && r0_1 >> 0x1f == (r0_1 & (r0_1 ^ r0_1)) >> 0x1f) {  // (from the original)
        return r0_1;
    }
    u32 r0_2 = call_00135520(0x8575c8u);  // (from the original)
    u32 r1_1 = r0_2 & 0x80000000u;  // (from the original)
    u32 nf_1 = r1_1 >> 0x1f;  // (from the original)
    if (nf_1 != 0u) {
        r1_1 = r0_2 & 0x3fc00u;  // (from the original)
    }
    if (nf_1 != 0u) {
        r1_1 >>= 0xa;  // (from the original)
    }
    *global_00951481 = 0;
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_001b88c0
GUEST_EXPORT_FRAMED(0x001b88c0, d_001b88c0::f_001b88c0, 0x4010);  // pushes {r4, lr} first, as the original

// f_001b8978: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b8978 {

inline guest::global<u8, 0x00951480> global_00951480;  // (from the original)
inline constexpr guest::Function<0x001b8008, u32(u32, u32, u32)> call_001b8008;  // (from the original)
inline constexpr guest::Function<0x001b88c0, u32(u32, u32)> call_001b88c0;  // (from the original)
inline constexpr guest::Function<0x001b9254, u32(u32, u32, u32)> call_001b9254;  // (from the original)
inline constexpr guest::Function<0x002ff8b0, u32(u32, u32, u32, u32)> call_002ff8b0;  // (from the original)

u32 f_001b8978(u32 r0_unused, u32 r1, u32 r2) {
    u32 r4 = 0;
    u32 r7 = guest::cpu()->r[7];
    u32 r0_1 = call_002ff8b0(4u, r1, r2, guest::cpu()->r[3]);
    u32 r5 = r0_1;
    u32 r0_2 = call_001b9254(0u, 0u, 0u);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    u32 zf_1 = r0_2 == 1u;
    if (zf_1) {
        r7 = 0x9514b0u;  // (from the original)
    }
    u32 r6 = r0_2;
    if (zf_1) {
        r4 = 0u;
    } else {
        return r0_2;
    }
    do {
        u32 r0_4 = call_001b8008(*gptr<u32>(*gptr<u32>(r7 + (r4 << 2)) + (r5 << 2)), r1, r2);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0_4 != 1u) {
            r6 = r0_4;
        }
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 3);
    u32 r0_5 = *global_00951480;
    if (r0_5 != 0) {
        if (r0_5 == 1u) {
            call_001b88c0(r0_5, r1);
            r1 = guest::cpu()->r[1];
        }
    }
    guest::cpu()->r[1] = r1;
    return r6;
}

}  // namespace d_001b8978
GUEST_EXPORT_FRAMED(0x001b8978, d_001b8978::f_001b8978, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_001b8a08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b8a08 {

struct __attribute__((packed)) Object_001b8a08_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_001b8a08_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x0012f598, u32(u32, u32, u32, u32)> call_0012f598;  // (from the original)

u32 f_001b8a08(gptr<Object_001b8a08_0> arg0) {
    u32 r2 = 0;
    u32 r0_2 = 0;
    u32 r0_4 = 0;
    u32 r0_6 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r1_4 = 0;
    u32 r0_10 = 0;
    u32 res_1 = 0;
    u32 nf_1 = 0;
    u32 vf_1 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r1_5 = 0;
    u32 r0_13 = 0;
    u32 r0_1 = arg0->word_0;
    u32 r1_1 = r0_1 & 0x80000000u;  // (from the original)
    if (s32(r1_1) >= 0) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    u32 r1_2 = (r0_1 & 0x3fc00u) >> 0xa;  // (from the original)
    if (r1_2 != 0x11u) {  // (from the original)
        goto L_1b8a50;
    }
    r0_2 = r0_1 & 0x3ffu;  // (from the original)
    if (s32(r0_2) < 0x64) {  // (from the original)
        goto L_1b8a50;
    }
    if (s32(r0_2) <= 0xb3) {  // (from the original)
        guest::cpu()->r[1] = r1_2;
        return 5u;
    }
L_1b8a50:;
    u32 r0_3 = arg0->word_0;
    u32 r1_3 = (r0_3 & 0x3fc00u) >> 0xa;  // (from the original)
    if (r1_3 != 0x11u) {  // (from the original)
        goto L_1b8a7c;
    }
    r0_4 = r0_3 & 0x3ffu;  // (from the original)
    if (s32(r0_4) < 0xb4) {  // (from the original)
        goto L_1b8a7c;
    }
    if (s32(r0_4) <= 0xc7) {  // (from the original)
        guest::cpu()->r[1] = r1_3;
        return 8u;
    }
L_1b8a7c:;
    u32 r0_5 = arg0->word_0;
    if ((r0_5 & 0x3fc00u) >> 0xa != 0x11u) {  // (from the original)
        goto L_1b8ab0;
    }
    r0_6 = r0_5 & 0x3ffu;  // (from the original)
    if (s32(r0_6) < s32(0x186u)) {  // (from the original)
        goto L_1b8ab0;
    }
    if (s32(r0_6) < 0x190) {  // (from the original)
        guest::cpu()->r[1] = 0x186u;  // (from the original)
        return 3u;
    }
L_1b8ab0:;
    u32 r0_7 = arg0->word_0;
    if ((r0_7 & 0x3fc00u) >> 0xa != 0x11u) {  // (from the original)
        goto L_1b8b24;
    }
    r0_8 = r0_7 & 0x3ffu;  // (from the original)
    if (s32(r0_8) < 0xe6 || s32(r0_8) >= 0x154) {  // (from the original)
        goto L_1b8b24;
    }
    r0_9 = arg0->word_0;
    r1_4 = (r0_9 & 0x3fc00u) >> 0xa;  // (from the original)
    if (r1_4 != 0x11u) {  // (from the original)
        guest::cpu()->r[1] = r1_4;
        return 8u;
    }
    r0_10 = r0_9 & 0x3ffu;  // (from the original)
    res_1 = r0_10 - 0x118u;  // (from the original)
    nf_1 = res_1 >> 0x1f;  // (from the original)
    vf_1 = ((r0_10 ^ 0x118u) & (r0_10 ^ res_1)) >> 0x1f;  // (from the original)
    if (nf_1 == vf_1) {
        r1_4 = 0x14eu;  // (from the original)
        u32 res_2 = r1_4 - r0_10;
        nf_1 = res_2 >> 0x1f;  // (from the original)
        vf_1 = ((r1_4 ^ r0_10) & (r1_4 ^ res_2)) >> 0x1f;  // (from the original)
    }
    if (nf_1 != vf_1) {
        guest::cpu()->r[1] = r1_4;
        return 8u;
    }
    r0_11 = arg0->word_0;
    r2 = r0_11 >> 0x1f;  // (from the original)
    if (r2 != 0) {
        call_0012f598(r0_11, 0x1b8b10u, r2, guest::cpu()->r[3]);  // (from the original)
    }
    goto L_1b8b54;
L_1b8b24:;
    r0_12 = arg0->word_0;
    r1_5 = (r0_12 & 0x3fc00u) >> 0xa;  // (from the original)
    if (r1_5 != 0x11u) {  // (from the original)
        goto L_1b8b54;
    }
    r0_13 = r0_12 & 0x3ffu;  // (from the original)
    if (s32(r0_13) < 0xc8) {  // (from the original)
        goto L_1b8b54;
    }
    if (s32(r0_13) <= 0xdb) {  // (from the original)
        guest::cpu()->r[1] = r1_5;
        return 4u;
    }
L_1b8b54:;
    u32 r1_6 = 0x1b8b5cu;  // (from the original)
    u32 r0_14 = arg0->word_0;
    if ((r0_14 >> 0x1f) != 0) {  // (from the original)
        call_0012f598(r0_14, r1_6, r2, guest::cpu()->r[3]);
        r1_6 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1_6;
    return 8u;
}

}  // namespace d_001b8a08
GUEST_EXPORT_FRAMED(0x001b8a08, d_001b8a08::f_001b8a08, 0x4010);  // pushes {r4, lr} first, as the original

// f_001b9400: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b9400 {

inline guest::global<u8, 0x00951480> global_00951480;  // (from the original)
inline guest::global<u8, 0x00951481> global_00951481;  // (from the original)
inline guest::global<u32, 0x0095bf70> global_0095bf70;  // (from the original)
inline constexpr guest::Function<0x001b8e44, u32(u32, u32, u32, u32)> call_001b8e44;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x00345bc4, u32(u32)> call_00345bc4;  // (from the original)
inline constexpr guest::Function<0x003463a4, u32(u32, u32, u32, u32)> call_003463a4;  // (from the original)
inline constexpr guest::Function<0x005ca648, u32(u32, u32, u32, u32)> call_005ca648;  // (from the original)
inline constexpr guest::Function<0x005cad0c, u32(u32, u32, u32, u32)> call_005cad0c;  // (from the original)

u32 f_001b9400(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r0_7 = 0;
    *frame.at<u32>(0) = r3;
    if (r0 != 0) {
        u32 r0_1 = call_005ca648(r0, r1, r2, r3);
        u32 r0_2 = call_005cad0c(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        *frame.at<u32>(0) = 0;
        u32 r0_4 = call_001b8e44(*global_0095bf70, 0u, r0_2, 8u);
        if (r0_4 != 1u) {
            return r0_4;
        }
    }
    u32 r1_3 = *global_00951480;
    if (r1_3 != 1u) {
        guest::cpu()->r[1] = r1_3;
        return 1u;
    }
    u32 r0_5 = *global_00951481;
    if (r0_5 == 0) {
        guest::cpu()->r[1] = r1_3;
        return 1u;
    }
    if (r0 != 0) {
        u32 r0_6 = call_002fb328(r0_5);
        r0_7 = call_003463a4(0x1b94a8u, r1_3, *gptr<u32>(r0_6), *gptr<u32>(r0_6 + 4));  // (from the original)
    } else {
        r0_7 = call_00345bc4(0x1b94a8u);  // (from the original)
    }
    r1_3 = r0_7 & 0x80000000u;  // (from the original)
    if (!(r1_3 >> 0x1f)) {  // (from the original)
        guest::cpu()->r[1] = r1_3;
        return 1u;
    }
    guest::cpu()->r[1] = (r0_7 & 0x3fc00u) >> 0xa;  // (from the original)
    return 8u;
}

}  // namespace d_001b9400
GUEST_EXPORT_FRAMED(0x001b9400, d_001b9400::f_001b9400, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_001b94b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b94b0 {

inline guest::global<u8, 0x009500e0> global_009500e0;  // (from the original)
inline guest::global<u8, 0x009500e1> global_009500e1;  // (from the original)
inline constexpr guest::Function<0x0012f598, u32(u32, u32, u32)> call_0012f598;  // (from the original)
inline constexpr guest::Function<0x001b8008, u32(u32, u32, u32)> call_001b8008;  // (from the original)
inline constexpr guest::Function<0x001b88c0, u32(u32, u32, u32, u32)> call_001b88c0;  // (from the original)
inline constexpr guest::Function<0x001b9254, u32(u32, u32, u32, u32)> call_001b9254;  // (from the original)
inline constexpr guest::Function<0x001b94b0, u32(u32, u32, u32)> call_001b94b0;  // (from the original)
inline constexpr guest::Function<0x00345c20, u32(u32, u32, u32, u32)> call_00345c20;  // (from the original)

void f_001b94b0(u32 r0_unused, u32 r1, u32 r2) {
    u32 r4 = 0;
    u32 r5 = 0;
    u32 r6 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 res_1 = 0;
    u32 r2_1 = 0;
    u32 r8 = 0x951480u;  // (from the original)
    u32 r0_1 = *gptr<u8>(r8);
    if (r0_1 == 2u) {
        *gptr<u8>(r8) = 1;
        goto L_1b94e0;
    }
    if (r0_1 == 0) {
        r6 = 1u;
        goto L_1b952c;
    }
    if (r0_1 != 1u) {
        goto L_1b9514;
    }
L_1b94e0:;
    r0_2 = *gptr<u8>(r8 + 1u);
    if (r0_2 != 0) {
        call_001b88c0(r0_2, r1, r2, guest::cpu()->r[3]);
    }
    r0_3 = call_00345c20(0x10u, 1u, 1u, guest::cpu()->r[3]);  // (from the original)
    res_1 = r0_3 & 0x80000000u;  // (from the original)
    if (!(res_1 >> 0x1f)) {  // (from the original)
        goto L_1b9514;
    }
    r2_1 = r0_3 >> 0x1f;  // (from the original)
    if (r2_1 != 0) {
        call_0012f598(r0_3, 0x1b9510u, r2_1);  // (from the original)
    }
L_1b9514:;
    *global_009500e0 = 0;
    *global_009500e1 = 0;
    guest::cpu()->r[1] = 0x9500e1u;  // (from the original)
    return;
L_1b952c:;
    u32 r0_4 = call_001b9254(0u, 0u, 0u, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_4 == 1u) {
        r5 = 0x951494u;  // (from the original)
        r4 = 0u;
        goto L_1b9560;
    }
    if (r0_4 == 3u) {
        call_001b94b0(r0_4, r1, r2);
    }
    guest::preempt();
    goto L_1b9514;
L_1b9560:;
    call_001b8008(*gptr<u32>(r5 + (r4 << 2)), r1, r2);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r4 += 1u;
    if (s32(r4) < 7) {
        guest::preempt();
        goto L_1b9560;
    }
    u32 r7 = 0x9514b0u;  // (from the original)
    r5 = 0u;
    do {
        r4 = 0u;
        do {
            call_001b8008(*gptr<u32>(*gptr<u32>(r7 + (r4 << 2)) + (r5 << 2)), r1, r2);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r4 += 1u;
            guest::preempt();
        } while (s32(r4) < 3);
        r5 += 1u;
        guest::preempt();
    } while (s32(r5) < 4);
    if (r6 == 0) {
        guest::preempt();
        goto L_1b9514;
    }
    u32 r0_7 = *gptr<u8>(r8);
    if (r0_7 != 0) {
        if (r0_7 == 1u) {
            call_001b88c0(r0_7, r1, r2, guest::cpu()->r[3]);
        }
        guest::preempt();
        goto L_1b9514;
    }
    guest::preempt();
    goto L_1b9514;
}

}  // namespace d_001b94b0
GUEST_EXPORT_FRAMED(0x001b94b0, d_001b94b0::f_001b94b0, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_001b95f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b95f8 {

inline guest::global<u8, 0x00951480> global_00951480;  // (from the original)
inline constexpr guest::Function<0x001b85c0, u32(u32, u32, u32, u32)> call_001b85c0;  // (from the original)
inline constexpr guest::Function<0x001b88c0, u32(u32, u32)> call_001b88c0;  // (from the original)
inline constexpr guest::Function<0x001b9254, u32(u32, u32, u32, u32)> call_001b9254;  // (from the original)
inline constexpr guest::Function<0x0053dffc, u32(u32, u32, u32)> call_0053dffc;  // (from the original)

u32 f_001b95f8(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r4_1 = r1;
    u32 r6_1 = r0;
    if (r1 != 0) {
        r0 = call_001b9254(0u, 0u, 0u, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0 != 1u) {
            return 0u;
        }
    }
    u32 r5_1 = 0u;
    u32 r0_2 = call_001b85c0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        *frame.at<u32>(0) = 0x9047f8;  // (from the original)
        *frame.at<u32>(4) = r6_1;
        u32 r0_3 = call_0053dffc(r0_2, frame.at(0x10).addr(), frame.at(0).addr());  // (from the original)
        r1 = guest::cpu()->r[1];
        if (r0_3 != 0) {
            r5_1 = s32(s8(*frame.at<u8>(0x10)));  // (from the original)
        }
    }
    if (r4_1 == 0) {
        guest::cpu()->r[1] = r1;
        return r5_1;
    }
    u32 r0_4 = *global_00951480;
    if (r0_4 != 0) {
        if (r0_4 == 1u) {
            call_001b88c0(r0_4, r1);
            r1 = guest::cpu()->r[1];
        }
        guest::cpu()->r[1] = r1;
        return r5_1;
    }
    guest::cpu()->r[1] = r1;
    return r5_1;
}

}  // namespace d_001b95f8
GUEST_EXPORT_FRAMED(0x001b95f8, d_001b95f8::f_001b95f8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001b96a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b96a0 {

inline guest::global<u32, 0x0088e5bc> global_0088e5bc;  // (from the original)
inline guest::global<u32, 0x0095bf70> global_0095bf70;  // (from the original)
inline constexpr guest::Function<0x001b8b74, u32(u32, u32, u32, u32)> call_001b8b74;  // (from the original)
inline constexpr guest::Function<0x005cad0c, u32(u32, u32, u32, u32)> call_005cad0c;  // (from the original)

u32 f_001b96a0(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::cpu()->r[13] -= 8u;
    u32 r0_1 = call_005cad0c(r0, r1, r2, r3);
    u32 r3_1 = *global_0088e5bc;
    u32 r0_2 = *global_0095bf70;
    guest::cpu()->r[13] += 8u;
    return call_001b8b74(r0_2, 0u, r0_1, r3_1);
}

}  // namespace d_001b96a0
GUEST_EXPORT(0x001b96a0, d_001b96a0::f_001b96a0);

// f_001b97dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b97dc {

inline guest::global<u8, 0x00951480> global_00951480;  // (from the original)
inline constexpr guest::Function<0x001b8008, u32(u32, u32, u32, u32)> call_001b8008;  // (from the original)
inline constexpr guest::Function<0x001b88c0, u32(u32, u32)> call_001b88c0;  // (from the original)
inline constexpr guest::Function<0x001b9254, u32(u32, u32, u32, u32)> call_001b9254;  // (from the original)
inline constexpr guest::Function<0x001b94b0, u32(u32, u32, u32)> call_001b94b0;  // (from the original)

void f_001b97dc(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r7 = r0;
    if (r0 == 0) {
        goto L_1b981c;
    }
    r0_1 = call_001b9254(0u, 0u, 0u, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_1 == 1u) {
        goto L_1b981c;
    }
    if (r0_1 == 3u) {
        call_001b94b0(r0_1, r1, r2);
        r1 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1;
    return;
L_1b981c:;
    u32 r5 = 0x951494u;  // (from the original)
    u32 r4 = 0u;
    do {
        u32 r0_3 = call_001b8008(*gptr<u32>(r5 + (r4 << 2)), r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0_3 != 1u) {
        }
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 7);
    u32 r8 = 0x9514b0u;  // (from the original)
    r5 = 0u;
    do {
        r4 = 0u;
        do {
            u32 r0_5 = call_001b8008(*gptr<u32>(*gptr<u32>(r8 + (r4 << 2)) + (r5 << 2)), r1, r2, guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            if (r0_5 != 1u) {
            }
            r4 += 1u;
            guest::preempt();
        } while (s32(r4) < 3);
        r5 += 1u;
        guest::preempt();
    } while (s32(r5) < 4);
    if (r7 == 0) {
        guest::cpu()->r[1] = r1;
        return;
    }
    u32 r0_6 = *global_00951480;
    if (r0_6 != 0) {
        if (r0_6 == 1u) {
            call_001b88c0(r0_6, r1);
            r1 = guest::cpu()->r[1];
        }
        guest::cpu()->r[1] = r1;
        return;
    }
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_001b97dc
GUEST_EXPORT_FRAMED(0x001b97dc, d_001b97dc::f_001b97dc, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_001b9a88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b9a88 {


u32 f_001b9a88(u32 r0) {
    u32 r2_1 = ((r0 & 0x40u) >> 6) + ((r0 & 0x80u) >> 7);  // (from the original)
    u32 r1_1 = ((r0 & 0x10u) >> 4) + ((r0 & 0x20u) >> 5);  // (from the original)
    u32 r3_1 = ((r0 & 4u) >> 2) + ((r0 & 8u) >> 3);
    u32 r2_2 = r2_1 + (r2_1 << 3);
    u32 r1_2 = r1_1 + (r1_1 << 3) + (r2_2 + (r2_2 << 1)) + (r3_1 + (r3_1 << 1));
    guest::cpu()->r[1] = r1_2;
    return (r0 & 1u) + ((r0 & 2u) >> 1) + r1_2;
}

}  // namespace d_001b9a88
GUEST_EXPORT(0x001b9a88, d_001b9a88::f_001b9a88);

// f_001b9ae4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b9ae4 {

inline constexpr guest::Function<0x001b9a88, u32(u32)> call_001b9a88;  // (from the original)

u32 f_001b9ae4(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r0_4 = 0;
    u32 r0_8 = 0;
    u32 r0_10 = 0;
    u32 r0_12 = 0;
    u32 res_1 = r0 - 0xeu;  // (from the original)
    u32 zf_1 = res_1 == 0;
    if (!zf_1) {
        if (!!zf_1 || (res_1 >> 0x1f) != (((r0 ^ 0xeu) & (r0 ^ res_1)) >> 0x1f)) {  // (from the original)
            if (r0 == 0xbu) {  // (from the original)
                goto L_1b9b2c;
            }
            if (r0 == 0xcu) {  // (from the original)
                goto L_1b9b58;
            }
            if (r0 != 0xdu) {  // (from the original)
                return 0x9fu;  // (from the original)
            }
            goto L_1b9b78;
        }
        if (r0 == 0x10u) {  // (from the original)
            goto L_1b9bb8;
        }
        if (r0 == 0x1bu) {  // (from the original)
            goto L_1b9bd8;
        }
        if (r0 != 0x1cu) {  // (from the original)
            return 0x9fu;  // (from the original)
        }
        goto L_1b9bf8;
L_1b9b2c:;
        r0_1 = call_001b9a88(r1);
        if (r0_1 < 0x1bu) {  // (from the original)
            return *gptr<u16>(0x865168u + (r0_1 << 1));  // (from the original)
        }
        return 0x9fu;  // (from the original)
L_1b9b58:;
        r0_4 = call_001b9a88(r1);
        return r0_4 >= 0x1bu ? 0xa6u : u32(*gptr<u16>(0x86519eu + (r0_4 << 1)));  // (from the original)
L_1b9b78:;
        u32 r0_6 = call_001b9a88(r1);
        return r0_6 >= 0x1bu ? 0xacu : u32(*gptr<u16>(0x8651d4u + (r0_6 << 1)));  // (from the original)
    }
    r0_8 = call_001b9a88(r1);
    return r0_8 >= 0x51u ? 0xb2u : u32(*gptr<u16>(0x86520au + (r0_8 << 1)));  // (from the original)
L_1b9bb8:;
    r0_10 = call_001b9a88(r1);
    return r0_10 >= 9u ? 0xbbu : u32(*gptr<u16>(0x8652acu + (r0_10 << 1)));  // (from the original)
L_1b9bd8:;
    r0_12 = call_001b9a88(r1);
    return r0_12 >= 0x1bu ? 0xbeu : u32(*gptr<u16>(0x8652beu + (r0_12 << 1)));  // (from the original)
L_1b9bf8:;
    u32 r0_14 = call_001b9a88(r1);
    return r0_14 >= 0x1bu ? 0xc4u : u32(*gptr<u16>(0x8652f4u + (r0_14 << 1)));  // (from the original)
}

}  // namespace d_001b9ae4
GUEST_EXPORT_FRAMED(0x001b9ae4, d_001b9ae4::f_001b9ae4, 0x4000);  // pushes {lr} first, as the original

// f_001b9c34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b9c34 {


u32 f_001b9c34(u32 r0) {
    u32 r0_1 = r0 - 0xbeu;  // (from the original)
    return r0_1 >= 6u ? 0u : u32(*gptr<u16>(0x865360u + (r0_1 << 1)));  // (from the original)
}

}  // namespace d_001b9c34
GUEST_EXPORT(0x001b9c34, d_001b9c34::f_001b9c34);

// f_001b9c54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b9c54 {


u32 f_001b9c54(u32 r0) {
    u32 r0_1 = r0 - 0xb2u;  // (from the original)
    return r0_1 >= 8u ? 0u : u32(*gptr<u16>(0x865350u + (r0_1 << 1)));  // (from the original)
}

}  // namespace d_001b9c54
GUEST_EXPORT(0x001b9c54, d_001b9c54::f_001b9c54);

// f_001b9c74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b9c74 {


u32 f_001b9c74(u32 r0) {
    u32 r0_1 = r0 - 0xa6u;  // (from the original)
    return r0_1 >= 6u ? 0u : u32(*gptr<u16>(0x865338u + (r0_1 << 1)));  // (from the original)
}

}  // namespace d_001b9c74
GUEST_EXPORT(0x001b9c74, d_001b9c74::f_001b9c74);

// f_001b9c94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b9c94 {


u32 f_001b9c94(u32 r0) {
    u32 r0_1 = r0 - 0x9fu;  // (from the original)
    return r0_1 >= 7u ? 0u : u32(*gptr<u16>(0x86532au + (r0_1 << 1)));  // (from the original)
}

}  // namespace d_001b9c94
GUEST_EXPORT(0x001b9c94, d_001b9c94::f_001b9c94);

// f_001b9cb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b9cb4 {


u32 f_001b9cb4(u32 r0) {
    u32 r0_1 = r0 - 0xacu;  // (from the original)
    return r0_1 >= 6u ? 0u : u32(*gptr<u16>(0x865344u + (r0_1 << 1)));  // (from the original)
}

}  // namespace d_001b9cb4
GUEST_EXPORT(0x001b9cb4, d_001b9cb4::f_001b9cb4);

// f_001b9cd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b9cd4 {


u32 f_001b9cd4(u32 r0) {
    u32 r0_1 = r0 - 0xc4u;  // (from the original)
    return r0_1 >= 4u ? 0u : u32(*gptr<u16>(0x865160u + (r0_1 << 1)));  // (from the original)
}

}  // namespace d_001b9cd4
GUEST_EXPORT(0x001b9cd4, d_001b9cd4::f_001b9cd4);

// f_001b9cf4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b9cf4 {


u32 f_001b9cf4(u32 r0) {
    u32 r0_1 = r0 - 0xbbu;  // (from the original)
    return r0_1 >= 3u ? 0u : u32(*gptr<u16>(0x86515au + (r0_1 << 1)));  // (from the original)
}

}  // namespace d_001b9cf4
GUEST_EXPORT(0x001b9cf4, d_001b9cf4::f_001b9cf4);

// f_001b9d14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b9d14 {

inline constexpr guest::Function<0x002fc25c, u32(u32, u32, u32, u32)> call_002fc25c;  // (from the original)

u32 f_001b9d14(u32 r0, u32 r1) {
    u32 r6 = 0u;
    u32 r8 = r0;
    u32 r9 = r1;
    u32 r10 = 0x9528b8u;  // (from the original)
    u32 r4 = r6;
    u32 r5 = r6;
    do {
        u32 r0_1 = lsr_r(r9, r4 & 0xff);  // (from the original)
        u32 r1_1 = lsr_r(r8, r4 & 0xff);  // (from the original)
        u32 r2_1 = r0_1 & 1u;
        u32 r3_1 = r1_1 & 1u;
        u32 r0_2 = r2_1 + ((r0_1 & 2u) >> 1);
        u32 r1_2 = r3_1 + ((r1_1 & 2u) >> 1);
        u32 r7_1 = r1_2 + (r0_2 + (r0_2 << 1));
        u32 r0_3 = call_002fc25c(4u, r1_2, r2_1, r3_1);
        r5 += 1u;
        u32 r0_4 = lsl_r(u32(*gptr<u8>(*gptr<u32>(r10 + (r7_1 << 2)) + r0_3)), r4 & 0xff) | r6;  // (from the original)
        r4 = uxth(r4 + 2u);
        r6 = uxth(r0_4);
        guest::preempt();
    } while (r5 < 4u);
    return r6;
}

}  // namespace d_001b9d14
GUEST_EXPORT_FRAMED(0x001b9d14, d_001b9d14::f_001b9d14, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_001ba7c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001ba7c0 {

struct __attribute__((packed)) Local_001ba7c0_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001ba7c0_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001ba7c0_ea_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_001ba7c0_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001ba7c0_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001ba7c0_ea_2, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_001ba7c0_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001ba7c0_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001ba7c0_ea_3, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_001ba7c0_r0_9 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_001ba7c0_r0_9, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001ba7c0_r0_9, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_001ba7c0_r0_9, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_001ba7c0_r0_9, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_001ba7c0_r0_9, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_001ba7c0_r0_9, word_14, 0x14);  // (from the original)

inline guest::global<u8, 0x008c9f1c> global_008c9f1c;  // (from the original)
inline guest::global<u32, 0x00952cac> global_00952cac;  // (from the original)
inline guest::global<u32, 0x00a18590> global_00a18590;  // (from the original)
inline guest::global<u32, 0x00a18594> global_00a18594;  // (from the original)
inline guest::global<u32, 0x00a18598> global_00a18598;  // (from the original)
inline guest::global<u32, 0x00a1859c> global_00a1859c;  // (from the original)
inline guest::global<u32, 0x00a185a0> global_00a185a0;  // (from the original)
inline guest::global<u32, 0x00a185a4> global_00a185a4;  // (from the original)
inline constexpr guest::Function<0x0012ca50, u32(u32, u32, u32, u32)> call_0012ca50;  // (from the original)
inline constexpr guest::Function<0x0013864c, u32(u32, u32, u32, u32)> call_0013864c;  // (from the original)
inline constexpr guest::Function<0x0013bb80, u32(u32, u32, u32, u32)> call_0013bb80;  // (from the original)
inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)
inline constexpr guest::Function<0x00544f18, u32(u32, u32, u32, u32)> call_00544f18;  // (from the original)
inline constexpr guest::Function<0x00544fec, u32(u32, u32, u32, u32)> call_00544fec;  // (from the original)
inline constexpr guest::Function<0x0054a644, u32(u32, u32, u32, u32)> call_0054a644;  // (from the original)
inline constexpr guest::Function<0x0056a4a4, u32(u32, u32, u32, u32)> call_0056a4a4;  // (from the original)
inline constexpr guest::Function<0x005bf790, u32(u32, u32, u32, u32)> call_005bf790;  // (from the original)

u32 f_001ba7c0(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3, float S0, float S1, float S2, float S3, float S4, float S5) {
    guest::StackFrame frame(0x130);  // the original's stack frame
    u32 r2_7 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    gptr<Local_001ba7c0_r0_9> r0_9 = gptr<Local_001ba7c0_r0_9>(0u);
    float S0_6 = 0;
    float S1_6 = 0;
    float S2_6 = 0;
    float S3_6 = 0;
    float S4_6 = 0;
    float S5_6 = 0;
    u32 r0_10 = 0;
    u32 r2_14 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    u32 r1_11 = 0;
    u32 r1_12 = 0;
    u32 r2_15 = 0;
    u32 r3_12 = 0;
    u32 r0_20 = 0;
    u32 r0_28 = 0;
    u32 r0_29 = 0;
    u32 r1_18 = 0;
    u32 r1_19 = 0;
    u32 r0_30 = 0;
    gptr<Local_001ba7c0_ea_1> ea_1 = gptr<Local_001ba7c0_ea_1>(frame.at(4).addr());
    ea_1->word_0 = frame.at(0xc).addr();  // (from the original)
    ea_1->word_4 = 0x100;  // (from the original)
    u32 r2_1 = *global_008c9f1c;
    *gptr<u8>(0x100u + frame.at(0xb).addr()) = u8(r2_1);  // (from the original)
    u32 r0_1 = *global_008c9f1c;
    *frame.at<u32>(0) = 0x9048b0;  // (from the original)
    *frame.at<u8>(0xc) = u8(r0_1);  // (from the original)
    u32 r0_3 = call_0054a644(frame.at(0x110).addr(), frame.at(0).addr(), r2_1, r3);  // (from the original)
    u32 r2_2 = guest::cpu()->r[2];
    u32 r3_1 = guest::cpu()->r[3];
    u32 r0_4 = call_00544fec(r0_3, 0x1baa00u, r2_2, r3_1);  // (from the original)
    u32 r1_2 = guest::cpu()->r[1];
    u32 r2_3 = guest::cpu()->r[2];
    u32 r3_2 = guest::cpu()->r[3];
    call_00544f18(r0_4, r1_2, r2_3, r3_2);
    u32 r1_3 = guest::cpu()->r[1];
    u32 r2_4 = guest::cpu()->r[2];
    u32 r3_3 = guest::cpu()->r[3];
    u32 r6_1 = frame.at(0).addr();
    call_0012ca50(frame.at(0x110).addr(), r1_3, r2_4, r3_3);  // (from the original)
    u32 r1_4 = guest::cpu()->r[1];
    u32 r2_5 = guest::cpu()->r[2];
    u32 r3_4 = guest::cpu()->r[3];
    u32 r0_6 = call_0056a4a4(r6_1, r1_4, r2_5, r3_4);
    u32 r1_5 = guest::cpu()->r[1];
    u32 r2_6 = guest::cpu()->r[2];
    u32 r3_5 = guest::cpu()->r[3];
    float S0_5 = guest::cpu()->s[0];
    float S1_5 = guest::cpu()->s[1];
    float S2_5 = guest::cpu()->s[2];
    float S3_5 = guest::cpu()->s[3];
    float S4_5 = guest::cpu()->s[4];
    float S5_5 = guest::cpu()->s[5];
    if (r0_6 == 0) {
        goto L_1ba868;
    }
    r2_7 = *global_00952cac;
    r0_7 = frame.at(0x110).addr();  // (from the original)
    r0_8 = call_005bf790(r0_7, r6_1, r2_7, 0x20u);  // (from the original)
    r1_5 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    S0_5 = guest::cpu()->s[0];
    S1_5 = guest::cpu()->s[1];
    S2_5 = guest::cpu()->s[2];
    S3_5 = guest::cpu()->s[3];
    S4_5 = guest::cpu()->s[4];
    S5_5 = guest::cpu()->s[5];
    if (r0_8 == 0) {
        goto L_1ba868;
    }
    r0_9 = gptr<Local_001ba7c0_r0_9>(*frame.at<u32>(0x114));  // (from the original)
    S0_6 = std::bit_cast<float>(r0_9->word_0);
    S1_6 = std::bit_cast<float>(r0_9->word_4);
    S2_6 = std::bit_cast<float>(r0_9->word_8);
    S3_6 = std::bit_cast<float>(r0_9->word_c);
    S4_6 = std::bit_cast<float>(r0_9->word_10);
    S5_6 = std::bit_cast<float>(r0_9->word_14);
    r0_10 = frame.at(0x110).addr();  // (from the original)
    *global_00a18590 = std::bit_cast<u32>(S0_6);
    *global_00a18594 = std::bit_cast<u32>(S1_6);
    *global_00a18598 = std::bit_cast<u32>(S2_6);
    *global_00a1859c = std::bit_cast<u32>(S3_6);
    *global_00a185a0 = std::bit_cast<u32>(S4_6);
    *global_00a185a4 = std::bit_cast<u32>(S5_6);
    guest::cpu()->s[0] = S0_6;
    guest::cpu()->s[1] = S1_6;
    guest::cpu()->s[2] = S2_6;
    guest::cpu()->s[3] = S3_6;
    guest::cpu()->s[4] = S4_6;
    guest::cpu()->s[5] = S5_6;
    call_0013864c(r0_10, r1_5, r2_6, r3_5);
    r1_5 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    S0_5 = guest::cpu()->s[0];
    S1_5 = guest::cpu()->s[1];
    S2_5 = guest::cpu()->s[2];
    S3_5 = guest::cpu()->s[3];
    S4_5 = guest::cpu()->s[4];
    S5_5 = guest::cpu()->s[5];
L_1ba868:;
    guest::cpu()->s[0] = S0_5;
    guest::cpu()->s[1] = S1_5;
    guest::cpu()->s[2] = S2_5;
    guest::cpu()->s[3] = S3_5;
    guest::cpu()->s[4] = S4_5;
    guest::cpu()->s[5] = S5_5;
    call_0013bb80(frame.at(0x110).addr(), r1_5, r2_6, r3_5);  // (from the original)
    u32 r3_6 = guest::cpu()->r[3];
    gptr<Local_001ba7c0_ea_2> ea_2 = gptr<Local_001ba7c0_ea_2>(frame.at(4).addr());
    ea_2->word_0 = frame.at(0xc).addr();  // (from the original)
    ea_2->word_4 = 0x100;  // (from the original)
    u32 r2_8 = *global_008c9f1c;
    *gptr<u8>(0x100u + frame.at(0xb).addr()) = u8(r2_8);  // (from the original)
    u32 r0_12 = *global_008c9f1c;
    *frame.at<u32>(0) = 0x9048b0;  // (from the original)
    *frame.at<u8>(0xc) = u8(r0_12);  // (from the original)
    u32 r0_14 = call_0054a644(frame.at(0x110).addr(), frame.at(0).addr(), r2_8, r3_6);  // (from the original)
    u32 r2_9 = guest::cpu()->r[2];
    u32 r3_7 = guest::cpu()->r[3];
    u32 r0_15 = call_00544fec(r0_14, 0x1baa1cu, r2_9, r3_7);  // (from the original)
    u32 r1_7 = guest::cpu()->r[1];
    u32 r2_10 = guest::cpu()->r[2];
    u32 r3_8 = guest::cpu()->r[3];
    call_00544f18(r0_15, r1_7, r2_10, r3_8);
    u32 r1_8 = guest::cpu()->r[1];
    u32 r2_11 = guest::cpu()->r[2];
    u32 r3_9 = guest::cpu()->r[3];
    u32 r5_1 = frame.at(0).addr();
    call_0012ca50(frame.at(0x110).addr(), r1_8, r2_11, r3_9);  // (from the original)
    u32 r1_9 = guest::cpu()->r[1];
    u32 r2_12 = guest::cpu()->r[2];
    u32 r3_10 = guest::cpu()->r[3];
    u32 r0_17 = call_0056a4a4(r5_1, r1_9, r2_12, r3_10);
    u32 r1_10 = guest::cpu()->r[1];
    u32 r2_13 = guest::cpu()->r[2];
    u32 r3_11 = guest::cpu()->r[3];
    float S0_12 = guest::cpu()->s[0];
    float S1_12 = guest::cpu()->s[1];
    float S2_12 = guest::cpu()->s[2];
    float S3_12 = guest::cpu()->s[3];
    float S4_12 = guest::cpu()->s[4];
    float S5_12 = guest::cpu()->s[5];
    if (r0_17 == 0) {
        goto L_1ba928;
    }
    r2_14 = *global_00952cac;
    r0_18 = frame.at(0x110).addr();  // (from the original)
    r0_19 = call_005bf790(r0_18, r5_1, r2_14, 0x20u);  // (from the original)
    r1_10 = guest::cpu()->r[1];
    r2_13 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    S0_12 = guest::cpu()->s[0];
    S1_12 = guest::cpu()->s[1];
    S2_12 = guest::cpu()->s[2];
    S3_12 = guest::cpu()->s[3];
    S4_12 = guest::cpu()->s[4];
    S5_12 = guest::cpu()->s[5];
    if (r0_19 == 0) {
        goto L_1ba928;
    }
    r1_11 = *frame.at<u32>(0x114);  // (from the original)
    call_002f8574(0xa185a8u, r1_11, 0x3cu, r3_11);  // (from the original)
    r1_12 = guest::cpu()->r[1];
    r2_15 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    r0_20 = frame.at(0x110).addr();  // (from the original)
    call_0013864c(r0_20, r1_12, r2_15, r3_12);
    r1_10 = guest::cpu()->r[1];
    r2_13 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    S0_12 = guest::cpu()->s[0];
    S1_12 = guest::cpu()->s[1];
    S2_12 = guest::cpu()->s[2];
    S3_12 = guest::cpu()->s[3];
    S4_12 = guest::cpu()->s[4];
    S5_12 = guest::cpu()->s[5];
L_1ba928:;
    guest::cpu()->s[0] = S0_12;
    guest::cpu()->s[1] = S1_12;
    guest::cpu()->s[2] = S2_12;
    guest::cpu()->s[3] = S3_12;
    guest::cpu()->s[4] = S4_12;
    guest::cpu()->s[5] = S5_12;
    call_0013bb80(frame.at(0x110).addr(), r1_10, r2_13, r3_11);  // (from the original)
    u32 r3_13 = guest::cpu()->r[3];
    gptr<Local_001ba7c0_ea_3> ea_3 = gptr<Local_001ba7c0_ea_3>(frame.at(4).addr());
    ea_3->word_0 = frame.at(0xc).addr();  // (from the original)
    ea_3->word_4 = 0x100;  // (from the original)
    u32 r2_16 = *global_008c9f1c;
    *gptr<u8>(0x100u + frame.at(0xb).addr()) = u8(r2_16);  // (from the original)
    u32 r0_22 = *global_008c9f1c;
    *frame.at<u32>(0) = 0x9048b0;  // (from the original)
    *frame.at<u8>(0xc) = u8(r0_22);  // (from the original)
    u32 r0_24 = call_0054a644(frame.at(0x110).addr(), frame.at(0).addr(), r2_16, r3_13);  // (from the original)
    u32 r2_17 = guest::cpu()->r[2];
    u32 r3_14 = guest::cpu()->r[3];
    u32 r0_25 = call_00544fec(r0_24, 0x1baa34u, r2_17, r3_14);  // (from the original)
    u32 r1_14 = guest::cpu()->r[1];
    u32 r2_18 = guest::cpu()->r[2];
    u32 r3_15 = guest::cpu()->r[3];
    call_00544f18(r0_25, r1_14, r2_18, r3_15);
    u32 r1_15 = guest::cpu()->r[1];
    u32 r2_19 = guest::cpu()->r[2];
    u32 r3_16 = guest::cpu()->r[3];
    u32 r4_1 = frame.at(0).addr();
    call_0012ca50(frame.at(0x110).addr(), r1_15, r2_19, r3_16);  // (from the original)
    u32 r1_16 = guest::cpu()->r[1];
    u32 r2_20 = guest::cpu()->r[2];
    u32 r3_17 = guest::cpu()->r[3];
    u32 r0_27 = call_0056a4a4(r4_1, r1_16, r2_20, r3_17);
    u32 r1_17 = guest::cpu()->r[1];
    float S0_19 = guest::cpu()->s[0];
    float S1_19 = guest::cpu()->s[1];
    float S2_19 = guest::cpu()->s[2];
    float S3_19 = guest::cpu()->s[3];
    float S4_19 = guest::cpu()->s[4];
    float S5_19 = guest::cpu()->s[5];
    if (r0_27 == 0) {
        goto L_1ba9e8;
    }
    r2_20 = *global_00952cac;
    r0_28 = frame.at(0x110).addr();  // (from the original)
    r0_29 = call_005bf790(r0_28, r4_1, r2_20, 0x20u);  // (from the original)
    r1_17 = guest::cpu()->r[1];
    r3_17 = guest::cpu()->r[3];
    S0_19 = guest::cpu()->s[0];
    S1_19 = guest::cpu()->s[1];
    S2_19 = guest::cpu()->s[2];
    S3_19 = guest::cpu()->s[3];
    S4_19 = guest::cpu()->s[4];
    S5_19 = guest::cpu()->s[5];
    if (r0_29 == 0) {
        goto L_1ba9e8;
    }
    r1_18 = *frame.at<u32>(0x114);  // (from the original)
    call_002f8574(0xa185e4u, r1_18, 0x38u, r3_17);  // (from the original)
    r1_19 = guest::cpu()->r[1];
    r2_20 = guest::cpu()->r[2];
    r3_17 = guest::cpu()->r[3];
    S2_19 = guest::cpu()->s[2];
    S3_19 = guest::cpu()->s[3];
    S4_19 = guest::cpu()->s[4];
    S5_19 = guest::cpu()->s[5];
    r0_30 = frame.at(0x110).addr();  // (from the original)
    call_0013864c(r0_30, r1_19, r2_20, r3_17);
    r1_17 = guest::cpu()->r[1];
    S0_19 = guest::cpu()->s[0];
    S1_19 = guest::cpu()->s[1];
L_1ba9e8:;
    guest::cpu()->s[0] = S0_19;
    guest::cpu()->s[1] = S1_19;
    guest::cpu()->s[2] = S2_19;
    guest::cpu()->s[3] = S3_19;
    guest::cpu()->s[4] = S4_19;
    guest::cpu()->s[5] = S5_19;
    u32 r0_32 = call_0013bb80(frame.at(0x110).addr(), r1_17, r2_20, r3_17);  // (from the original)
    return r0_32;
}

}  // namespace d_001ba7c0
GUEST_EXPORT_FRAMED(0x001ba7c0, d_001ba7c0::f_001ba7c0, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_001baa4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001baa4c {

struct __attribute__((packed)) Local_001baa4c_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_001baa4c_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001baa4c_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_001baa4c_ea_1, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_001baa4c_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_001baa4c_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001baa4c_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_001baa4c_ea_2, word_8, 0x8);  // (from the original)

inline guest::global<u32, 0x00952cac> global_00952cac;  // (from the original)
inline constexpr guest::Function<0x0012ca50, u32(u32, u32, u32, u32)> call_0012ca50;  // (from the original)
inline constexpr guest::Function<0x0013864c, u32(u32, u32, u32, u32)> call_0013864c;  // (from the original)
inline constexpr guest::Function<0x0013bb80, u32(u32, u32)> call_0013bb80;  // (from the original)
inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)
inline constexpr guest::Function<0x0056a4a4, u32(u32, u32, u32, u32)> call_0056a4a4;  // (from the original)
inline constexpr guest::Function<0x005bf790, u32(u32, u32, u32, u32)> call_005bf790;  // (from the original)

void f_001baa4c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x20);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r14 = guest::cpu()->r[14];
    u32 r2_2 = 0;
    u32 r0_3 = 0;
    u32 r3_2 = 0;
    u32 r1_3 = 0;
    u32 r1_4 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    if (r0 == 0) {
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        return;
    }
    gptr<Local_001baa4c_ea_1> ea_1 = gptr<Local_001baa4c_ea_1>(frame.at(0x14).addr());  // (from the original)
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r14;
    call_0012ca50(frame.at(0).addr(), r1, r2, r3);
    u32 r0_2 = call_0056a4a4(r1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_2 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        goto L_1baab4;
    }
    r2_2 = *global_00952cac;
    r0_3 = frame.at(0).addr();
    r0_2 = call_005bf790(r0_3, r1, r2_2, 0x20u);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r3_2 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        goto L_1baab4;
    }
    r1_3 = *frame.at<u32>(4);
    call_002f8574(r0, r1_3, 0x78u, r3_2);  // (from the original)
    r1_4 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_2 = frame.at(0).addr();
    call_0013864c(r0_2, r1_4, r2_3, r3_3);
    r1_2 = guest::cpu()->r[1];
L_1baab4:;
    call_0013bb80(r0_2, r1_2);
    gptr<Local_001baa4c_ea_2> ea_2 = gptr<Local_001baa4c_ea_2>(frame.at(0x14).addr());  // (from the original)
    u32 r4_1 = ea_2->word_0;
    u32 r5_1 = ea_2->word_4;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    return;
}

}  // namespace d_001baa4c
GUEST_EXPORT(0x001baa4c, d_001baa4c::f_001baa4c);

// f_001baac8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001baac8 {

struct __attribute__((packed)) Local_001baac8_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_001baac8_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001baac8_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_001baac8_ea_1, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_001baac8_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_001baac8_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001baac8_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_001baac8_ea_2, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_001baac8_r0_5 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_001baac8_r0_5, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001baac8_r0_5, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_001baac8_r0_5, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_001baac8_r0_5, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_001baac8_r0_5, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_001baac8_r0_5, word_14, 0x14);  // (from the original)

inline guest::global<u32, 0x00952cac> global_00952cac;  // (from the original)
inline constexpr guest::Function<0x0012ca50, u32(u32, u32, u32, u32)> call_0012ca50;  // (from the original)
inline constexpr guest::Function<0x0013864c, u32(u32, u32, u32, u32)> call_0013864c;  // (from the original)
inline constexpr guest::Function<0x0013bb80, u32(u32, u32)> call_0013bb80;  // (from the original)
inline constexpr guest::Function<0x0056a4a4, u32(u32, u32, u32, u32)> call_0056a4a4;  // (from the original)
inline constexpr guest::Function<0x005bf790, u32(u32, u32, u32, u32)> call_005bf790;  // (from the original)

u32 f_001baac8(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2, float S3, float S4, float S5) {
    guest::StackFrame frame(0x20);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r14 = guest::cpu()->r[14];
    u32 r2_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r2_3 = 0;
    u32 r3_2 = 0;
    gptr<Local_001baac8_r0_5> r0_5 = gptr<Local_001baac8_r0_5>(0u);
    float S0_3 = 0;
    float S1_3 = 0;
    float S2_3 = 0;
    float S3_3 = 0;
    float S4_3 = 0;
    float S5_3 = 0;
    u32 r0_6 = 0;
    if (r0 == 0) {
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        return r0;
    }
    gptr<Local_001baac8_ea_1> ea_1 = gptr<Local_001baac8_ea_1>(frame.at(0x14).addr());  // (from the original)
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r14;
    call_0012ca50(frame.at(0).addr(), r1, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    u32 r3_1 = guest::cpu()->r[3];
    u32 r0_2 = call_0056a4a4(r1, r1_1, r2_1, r3_1);
    u32 r1_2 = guest::cpu()->r[1];
    float S0_2 = guest::cpu()->s[0];
    float S1_2 = guest::cpu()->s[1];
    if (r0_2 == 0) {
        goto L_1bab2c;
    }
    r2_2 = *global_00952cac;
    r0_3 = frame.at(0).addr();
    r0_4 = call_005bf790(r0_3, r1, r2_2, 0x20u);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    if (r0_4 == 0) {
        goto L_1bab2c;
    }
    r0_5 = gptr<Local_001baac8_r0_5>(*frame.at<u32>(4));
    S0_3 = std::bit_cast<float>(r0_5->word_0);
    S1_3 = std::bit_cast<float>(r0_5->word_4);
    S2_3 = std::bit_cast<float>(r0_5->word_8);
    S3_3 = std::bit_cast<float>(r0_5->word_c);
    S4_3 = std::bit_cast<float>(r0_5->word_10);
    S5_3 = std::bit_cast<float>(r0_5->word_14);
    r0_6 = frame.at(0).addr();
    *gptr<u32>(r0) = std::bit_cast<u32>(S0_3);
    *gptr<u32>(r0 + 4) = std::bit_cast<u32>(S1_3);
    *gptr<u32>(r0 + 8) = std::bit_cast<u32>(S2_3);
    *gptr<u32>(r0 + 0xc) = std::bit_cast<u32>(S3_3);  // (from the original)
    *gptr<u32>(r0 + 0x10) = std::bit_cast<u32>(S4_3);  // (from the original)
    *gptr<u32>(r0 + 0x14) = std::bit_cast<u32>(S5_3);  // (from the original)
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_3;
    guest::cpu()->s[2] = S2_3;
    guest::cpu()->s[3] = S3_3;
    guest::cpu()->s[4] = S4_3;
    guest::cpu()->s[5] = S5_3;
    call_0013864c(r0_6, r1_2, r2_3, r3_2);
    r1_2 = guest::cpu()->r[1];
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
L_1bab2c:;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    u32 r0_8 = call_0013bb80(frame.at(0).addr(), r1_2);
    gptr<Local_001baac8_ea_2> ea_2 = gptr<Local_001baac8_ea_2>(frame.at(0x14).addr());  // (from the original)
    u32 r4_1 = ea_2->word_0;
    u32 r5_1 = ea_2->word_4;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    return r0_8;
}

}  // namespace d_001baac8
GUEST_EXPORT(0x001baac8, d_001baac8::f_001baac8);

// f_001bab40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001bab40 {

struct __attribute__((packed)) Local_001bab40_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_001bab40_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001bab40_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_001bab40_ea_1, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_001bab40_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_001bab40_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001bab40_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_001bab40_ea_2, word_8, 0x8);  // (from the original)

inline guest::global<u32, 0x00952cac> global_00952cac;  // (from the original)
inline constexpr guest::Function<0x0012ca50, u32(u32, u32, u32, u32)> call_0012ca50;  // (from the original)
inline constexpr guest::Function<0x0013864c, u32(u32, u32, u32, u32)> call_0013864c;  // (from the original)
inline constexpr guest::Function<0x0013bb80, u32(u32, u32)> call_0013bb80;  // (from the original)
inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)
inline constexpr guest::Function<0x0056a4a4, u32(u32, u32, u32, u32)> call_0056a4a4;  // (from the original)
inline constexpr guest::Function<0x005bf790, u32(u32, u32, u32, u32)> call_005bf790;  // (from the original)

u32 f_001bab40(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x20);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r14 = guest::cpu()->r[14];
    u32 r2_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r3_2 = 0;
    u32 r1_3 = 0;
    u32 r1_4 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    if (r0 == 0) {
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        return r0;
    }
    gptr<Local_001bab40_ea_1> ea_1 = gptr<Local_001bab40_ea_1>(frame.at(0x14).addr());  // (from the original)
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r14;
    call_0012ca50(frame.at(0).addr(), r1, r2, r3);
    u32 r0_2 = call_0056a4a4(r1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_2 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        goto L_1baba8;
    }
    r2_2 = *global_00952cac;
    r0_3 = frame.at(0).addr();
    r0_4 = call_005bf790(r0_3, r1, r2_2, 0x20u);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r3_2 = guest::cpu()->r[3];
    if (r0_4 == 0) {
        goto L_1baba8;
    }
    r1_3 = *frame.at<u32>(4);
    call_002f8574(r0, r1_3, 0x3cu, r3_2);  // (from the original)
    r1_4 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_5 = frame.at(0).addr();
    call_0013864c(r0_5, r1_4, r2_3, r3_3);
    r1_2 = guest::cpu()->r[1];
L_1baba8:;
    u32 r0_7 = call_0013bb80(frame.at(0).addr(), r1_2);
    gptr<Local_001bab40_ea_2> ea_2 = gptr<Local_001bab40_ea_2>(frame.at(0x14).addr());  // (from the original)
    u32 r4_1 = ea_2->word_0;
    u32 r5_1 = ea_2->word_4;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    return r0_7;
}

}  // namespace d_001bab40
GUEST_EXPORT(0x001bab40, d_001bab40::f_001bab40);

// f_001babbc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001babbc {

struct __attribute__((packed)) Local_001babbc_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_001babbc_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001babbc_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_001babbc_ea_1, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_001babbc_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_001babbc_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001babbc_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_001babbc_ea_2, word_8, 0x8);  // (from the original)

inline guest::global<u32, 0x00952cac> global_00952cac;  // (from the original)
inline constexpr guest::Function<0x0012ca50, u32(u32, u32, u32, u32)> call_0012ca50;  // (from the original)
inline constexpr guest::Function<0x0013864c, u32(u32, u32, u32, u32)> call_0013864c;  // (from the original)
inline constexpr guest::Function<0x0013bb80, u32(u32, u32)> call_0013bb80;  // (from the original)
inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)
inline constexpr guest::Function<0x0056a4a4, u32(u32, u32, u32, u32)> call_0056a4a4;  // (from the original)
inline constexpr guest::Function<0x005bf790, u32(u32, u32, u32, u32)> call_005bf790;  // (from the original)

u32 f_001babbc(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x20);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r14 = guest::cpu()->r[14];
    u32 r2_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r3_2 = 0;
    u32 r1_3 = 0;
    u32 r1_4 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    if (r0 == 0) {
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        return r0;
    }
    gptr<Local_001babbc_ea_1> ea_1 = gptr<Local_001babbc_ea_1>(frame.at(0x14).addr());  // (from the original)
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r14;
    call_0012ca50(frame.at(0).addr(), r1, r2, r3);
    u32 r0_2 = call_0056a4a4(r1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_2 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        goto L_1bac24;
    }
    r2_2 = *global_00952cac;
    r0_3 = frame.at(0).addr();
    r0_4 = call_005bf790(r0_3, r1, r2_2, 0x20u);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r3_2 = guest::cpu()->r[3];
    if (r0_4 == 0) {
        goto L_1bac24;
    }
    r1_3 = *frame.at<u32>(4);
    call_002f8574(r0, r1_3, 0x38u, r3_2);  // (from the original)
    r1_4 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_5 = frame.at(0).addr();
    call_0013864c(r0_5, r1_4, r2_3, r3_3);
    r1_2 = guest::cpu()->r[1];
L_1bac24:;
    u32 r0_7 = call_0013bb80(frame.at(0).addr(), r1_2);
    gptr<Local_001babbc_ea_2> ea_2 = gptr<Local_001babbc_ea_2>(frame.at(0x14).addr());  // (from the original)
    u32 r4_1 = ea_2->word_0;
    u32 r5_1 = ea_2->word_4;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    return r0_7;
}

}  // namespace d_001babbc
GUEST_EXPORT(0x001babbc, d_001babbc::f_001babbc);

// f_001bac38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001bac38 {

struct __attribute__((packed)) Object_001bac38_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Object_001bac38_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_001bac38_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_001bac38_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_001bac38_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_001bac38_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_001bac38_0, word_14, 0x14);  // (from the original)

inline guest::global<u32, 0x00a18590> global_00a18590;  // (from the original)
inline guest::global<u32, 0x00a18594> global_00a18594;  // (from the original)
inline guest::global<u32, 0x00a18598> global_00a18598;  // (from the original)
inline guest::global<u32, 0x00a1859c> global_00a1859c;  // (from the original)
inline guest::global<u32, 0x00a185a0> global_00a185a0;  // (from the original)
inline guest::global<u32, 0x00a185a4> global_00a185a4;  // (from the original)

void f_001bac38(gptr<Object_001bac38_0> arg0) {
    float S1_1 = std::bit_cast<float>(*global_00a18594);
    float S2_1 = std::bit_cast<float>(*global_00a18598);
    float S3_1 = std::bit_cast<float>(*global_00a1859c);
    float S4_1 = std::bit_cast<float>(*global_00a185a0);
    float S5_1 = std::bit_cast<float>(*global_00a185a4);
    arg0->word_0 = std::bit_cast<u32>(std::bit_cast<float>(*global_00a18590));
    arg0->word_4 = std::bit_cast<u32>(S1_1);
    arg0->word_8 = std::bit_cast<u32>(S2_1);
    arg0->word_c = std::bit_cast<u32>(S3_1);
    arg0->word_10 = std::bit_cast<u32>(S4_1);
    arg0->word_14 = std::bit_cast<u32>(S5_1);
    return;
}

}  // namespace d_001bac38
GUEST_EXPORT(0x001bac38, d_001bac38::f_001bac38);

// f_001bac4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001bac4c {

struct __attribute__((packed)) Object_001bac4c_0 {
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
};
GUEST_OFFSET(Object_001bac4c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_001bac4c_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_001bac4c_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_001bac4c_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_001bac4c_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_001bac4c_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_001bac4c_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_001bac4c_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_001bac4c_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_001bac4c_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_001bac4c_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_001bac4c_0, word_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Object_001bac4c_0, word_30, 0x30);  // (from the original)
GUEST_OFFSET(Object_001bac4c_0, word_34, 0x34);  // (from the original)
GUEST_OFFSET(Object_001bac4c_0, word_38, 0x38);  // (from the original)

struct __attribute__((packed)) Local_001bac4c_r1_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
};
GUEST_OFFSET(Local_001bac4c_r1_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001bac4c_r1_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_001bac4c_r1_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_001bac4c_r1_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_001bac4c_r1_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_001bac4c_r1_1, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_001bac4c_r1_1, word_18, 0x18);  // (from the original)

struct __attribute__((packed)) Local_001bac4c_r2_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_001bac4c_r2_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001bac4c_r2_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_001bac4c_r2_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_001bac4c_r2_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_001bac4c_r2_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_001bac4c_r2_1, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_001bac4c_r2_1, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_001bac4c_r2_1, word_1c, 0x1c);  // (from the original)


void f_001bac4c(gptr<Object_001bac4c_0> arg0) {
    gptr<Local_001bac4c_r2_1> r2_1 = gptr<Local_001bac4c_r2_1>(0xa185a8u);  // (from the original)
    gptr<Local_001bac4c_r1_1> r1_1 = gptr<Local_001bac4c_r1_1>(0xa185c8u);  // (from the original)
    float S1_1 = std::bit_cast<float>(r2_1->word_4);
    float S2_1 = std::bit_cast<float>(r2_1->word_8);
    float S3_1 = std::bit_cast<float>(r2_1->word_c);
    float S4_1 = std::bit_cast<float>(r2_1->word_10);
    float S5_1 = std::bit_cast<float>(r2_1->word_14);
    float S6_1 = std::bit_cast<float>(r2_1->word_18);
    float S7_1 = std::bit_cast<float>(r2_1->word_1c);
    arg0->word_0 = std::bit_cast<u32>(std::bit_cast<float>(r2_1->word_0));
    arg0->word_4 = std::bit_cast<u32>(S1_1);
    arg0->word_8 = std::bit_cast<u32>(S2_1);
    arg0->word_c = std::bit_cast<u32>(S3_1);
    arg0->word_10 = std::bit_cast<u32>(S4_1);
    arg0->word_14 = std::bit_cast<u32>(S5_1);
    arg0->word_18 = std::bit_cast<u32>(S6_1);
    arg0->word_1c = std::bit_cast<u32>(S7_1);
    float S1_2 = std::bit_cast<float>(r1_1->word_4);
    float S2_2 = std::bit_cast<float>(r1_1->word_8);
    float S3_2 = std::bit_cast<float>(r1_1->word_c);
    float S4_2 = std::bit_cast<float>(r1_1->word_10);
    float S5_2 = std::bit_cast<float>(r1_1->word_14);
    float S6_2 = std::bit_cast<float>(r1_1->word_18);
    arg0->word_20 = std::bit_cast<u32>(std::bit_cast<float>(r1_1->word_0));
    arg0->word_24 = std::bit_cast<u32>(S1_2);
    arg0->word_28 = std::bit_cast<u32>(S2_2);
    arg0->word_2c = std::bit_cast<u32>(S3_2);
    arg0->word_30 = std::bit_cast<u32>(S4_2);
    arg0->word_34 = std::bit_cast<u32>(S5_2);
    arg0->word_38 = std::bit_cast<u32>(S6_2);
    return;
}

}  // namespace d_001bac4c
GUEST_EXPORT(0x001bac4c, d_001bac4c::f_001bac4c);

// f_001bac74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001bac74 {

struct __attribute__((packed)) Object_001bac74_0 {
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
};
GUEST_OFFSET(Object_001bac74_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_001bac74_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_001bac74_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_001bac74_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_001bac74_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_001bac74_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_001bac74_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_001bac74_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_001bac74_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_001bac74_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_001bac74_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_001bac74_0, word_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Object_001bac74_0, word_30, 0x30);  // (from the original)
GUEST_OFFSET(Object_001bac74_0, word_34, 0x34);  // (from the original)

struct __attribute__((packed)) Local_001bac74_r1_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_001bac74_r1_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001bac74_r1_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_001bac74_r1_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_001bac74_r1_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_001bac74_r1_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_001bac74_r1_1, word_14, 0x14);  // (from the original)

struct __attribute__((packed)) Local_001bac74_r2_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_001bac74_r2_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001bac74_r2_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_001bac74_r2_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_001bac74_r2_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_001bac74_r2_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_001bac74_r2_1, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_001bac74_r2_1, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_001bac74_r2_1, word_1c, 0x1c);  // (from the original)


void f_001bac74(gptr<Object_001bac74_0> arg0) {
    gptr<Local_001bac74_r2_1> r2_1 = gptr<Local_001bac74_r2_1>(0xa185e4u);  // (from the original)
    gptr<Local_001bac74_r1_1> r1_1 = gptr<Local_001bac74_r1_1>(0xa18604u);  // (from the original)
    float S1_1 = std::bit_cast<float>(r2_1->word_4);
    float S2_1 = std::bit_cast<float>(r2_1->word_8);
    float S3_1 = std::bit_cast<float>(r2_1->word_c);
    float S4_1 = std::bit_cast<float>(r2_1->word_10);
    float S5_1 = std::bit_cast<float>(r2_1->word_14);
    float S6_1 = std::bit_cast<float>(r2_1->word_18);
    float S7_1 = std::bit_cast<float>(r2_1->word_1c);
    arg0->word_0 = std::bit_cast<u32>(std::bit_cast<float>(r2_1->word_0));
    arg0->word_4 = std::bit_cast<u32>(S1_1);
    arg0->word_8 = std::bit_cast<u32>(S2_1);
    arg0->word_c = std::bit_cast<u32>(S3_1);
    arg0->word_10 = std::bit_cast<u32>(S4_1);
    arg0->word_14 = std::bit_cast<u32>(S5_1);
    arg0->word_18 = std::bit_cast<u32>(S6_1);
    arg0->word_1c = std::bit_cast<u32>(S7_1);
    float S1_2 = std::bit_cast<float>(r1_1->word_4);
    float S2_2 = std::bit_cast<float>(r1_1->word_8);
    float S3_2 = std::bit_cast<float>(r1_1->word_c);
    float S4_2 = std::bit_cast<float>(r1_1->word_10);
    float S5_2 = std::bit_cast<float>(r1_1->word_14);
    arg0->word_20 = std::bit_cast<u32>(std::bit_cast<float>(r1_1->word_0));
    arg0->word_24 = std::bit_cast<u32>(S1_2);
    arg0->word_28 = std::bit_cast<u32>(S2_2);
    arg0->word_2c = std::bit_cast<u32>(S3_2);
    arg0->word_30 = std::bit_cast<u32>(S4_2);
    arg0->word_34 = std::bit_cast<u32>(S5_2);
    return;
}

}  // namespace d_001bac74
GUEST_EXPORT(0x001bac74, d_001bac74::f_001bac74);

// f_001bac9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001bac9c {

inline constexpr guest::Function<0x0013fac4, u32(u32, u32, u32)> call_0013fac4;  // (from the original)
inline constexpr guest::Function<0x00301444, u32(u32, u32)> call_00301444;  // (from the original)

u32 f_001bac9c() {
    guest::cpu()->r[13] -= 8u;
    call_00301444(0xa21f6cu, 0x20u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return call_0013fac4(0x953602u, 0x20u, ~0u);  // (from the original)
}

}  // namespace d_001bac9c
GUEST_EXPORT(0x001bac9c, d_001bac9c::f_001bac9c);

// f_001bace0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001bace0 {

inline constexpr guest::Function<0x00118c9d, u32(u32, u32, u32, u32)> call_00118c9c;  // (from the original)
inline constexpr guest::Function<0x001df274, u32(u32, u32, u32, u32)> call_001df274;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fb918, u32(u32, u32, u32, u32)> call_002fb918;  // (from the original)
inline constexpr guest::Function<0x00309fbc, u32(u32, u32, u32, u32)> call_00309fbc;  // (from the original)
inline constexpr guest::Function<0x006f5138, u32(u32, u32, u32, u32)> call_006f5138;  // (from the original)
inline constexpr guest::Function<0x0071a0b0, u32(u32, u32, u32, u32)> call_0071a0b0;  // (from the original)
inline constexpr guest::Function<0x00758070, u32(u32, u32, u32, u32)> call_00758070;  // (from the original)
inline constexpr guest::Function<0x007580d0, u32(u32, u32, u32, u32)> call_007580d0;  // (from the original)
inline constexpr guest::Function<0x00758128, u32(u32, u32, u32, u32)> call_00758128;  // (from the original)
inline constexpr guest::Function<0x00770934, u32(u32, u32, u32, u32)> call_00770934;  // (from the original)

u32 f_001bace0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_6 = 0;
    u32 r1_2 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r5_1 = 0;
    u32 r0_7 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r6_1 = 0;
    u32 r0_8 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r0_9 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    u32 r0_10 = 0;
    u32 r1_3 = 0;
    u32 r2_9 = 0;
    u32 r3_9 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r2_10 = 0;
    u32 r3_10 = 0;
    u32 r0_13 = 0;
    u32 r2_11 = 0;
    u32 r3_11 = 0;
    u32 r0_14 = 0;
    u32 r0_1 = call_00758128(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    u32 r3_1 = guest::cpu()->r[3];
    if (r0_1 != 0) {
        return 0u;
    }
    u32 r0_2 = call_007580d0(r0, r1, r2_1, r3_1);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_2 = guest::cpu()->r[2];
    u32 r3_2 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        goto L_1bad8c;
    }
    r0_3 = call_002fb328(r0_2, r1_1, r2_2, r3_2);
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_4 = r0_3 + 0xa0u;  // (from the original)
    r0_5 = call_0071a0b0(r0_4, r0_2, r2_3, r3_3);
    r1 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    if (r0_5 == 0) {
        return 0u;
    } else {
    }
    r0_6 = call_007580d0(r0, r1, r2_4, r3_4);
    r1_2 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    if (r0_6 == 0) {
        r5_1 = 0u;
        goto L_1bad58;
    }
    r0_7 = call_002fb328(r0_6, r1_2, r2_5, r3_5);
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r6_1 = r0_7 + 0xa0u;  // (from the original)
    r0_8 = call_0071a0b0(r6_1, r0_6, r2_6, r3_6);
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_6 = call_00309fbc(r6_1, r0_8, r2_7, r3_7);
    r1_2 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r5_1 = r0_6;
L_1bad58:;
    r0_9 = call_002fb918(r0_6, r1_2, r2_5, r3_5);
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r0_10 = call_001df274(r0_9, r5_1, r2_8, r3_8);
    r1_3 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r0_11 = call_00770934(r0_10, r1_3, r2_9, r3_9);
    r1 = r0_11;
    if (r1 >> 0x1f == (r0_11 & (r0_11 ^ r1)) >> 0x1f) {  // (from the original)
        goto L_1badc0;
    }
    guest::cpu()->r[1] = r1;
    return 0u;
L_1bad8c:;
    r0_12 = call_00758070(r0, r1_1, r2_2, r3_2);
    r1 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    if (r0_12 == 0) {
        return 0u;
    }
    r0_13 = call_002fb328(r0_12, r1, r2_10, r3_10);
    r2_11 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    r0_14 = r0_13 + 0x292a4u;  // (from the original)
    call_00118c9c(r0_14, r0_12, r2_11, r3_11);
    r1 = guest::cpu()->r[1];
    return 0u;
L_1badc0:;
    call_006f5138(r0_10, r1, r0, 0u);
    return 1u;
}

}  // namespace d_001bace0
GUEST_EXPORT_FRAMED(0x001bace0, d_001bace0::f_001bace0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001baf6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001baf6c {

inline constexpr guest::Function<0x001e4348, u32(u32, u32, u32)> call_001e4348;  // (from the original)
inline constexpr guest::Function<0x002fb918, u32(u32, u32, u32, u32)> call_002fb918;  // (from the original)
inline constexpr guest::Function<0x007105d4, u32(u32, u32, u32)> call_007105d4;  // (from the original)

u32 f_001baf6c(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = call_002fb918(r0, r1, r2, guest::cpu()->r[3]);
    u32 r4_1 = r0_1 + 0xa4f8u;  // (from the original)
    u32 r0_2 = call_007105d4(r4_1, guest::cpu()->r[1], guest::cpu()->r[2]);
    u32 r1_2 = r0_2;
    if (r0_2 + 1u == 0) {
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    call_001e4348(r4_1, r1_2, r0);
    r1_2 = guest::cpu()->r[1];
    return 1u;
}

}  // namespace d_001baf6c
GUEST_EXPORT_FRAMED(0x001baf6c, d_001baf6c::f_001baf6c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001bb0c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001bb0c4 {

struct __attribute__((packed)) Local_001bb0c4_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001bb0c4_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001bb0c4_ea_1, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x00953fa4> global_00953fa4;  // (from the original)
inline guest::global<u32, 0x00953fa8> global_00953fa8;  // (from the original)
inline constexpr guest::Function<0x001bbc30, u32(u32, u32, u32, u32)> call_001bbc30;  // (from the original)
inline constexpr guest::Function<0x001df3d4, u32(u32, u32, u32, u32)> call_001df3d4;  // (from the original)
inline constexpr guest::Function<0x001e4214, u32(u32, u32, u32, u32)> call_001e4214;  // (from the original)
inline constexpr guest::Function<0x001e442c, u32(u32, u32, u32, u32)> call_001e442c;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x002fb918, u32(u32, u32, u32, u32)> call_002fb918;  // (from the original)
inline constexpr guest::Function<0x002fc900, u32(u32, u32, u32, u32)> call_002fc900;  // (from the original)
inline constexpr guest::Function<0x002ff3fc, u32(u32, u32, u32, u32)> call_002ff3fc;  // (from the original)
inline constexpr guest::Function<0x006f4f48, u32(u32, u32, u32, u32)> call_006f4f48;  // (from the original)
inline constexpr guest::Function<0x00710614, u32(u32, u32, u32, u32)> call_00710614;  // (from the original)

void f_001bb0c4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    r13 -= 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    u32 r0_1 = call_002f74c8(r0, r1, r2, r3);
    u32 r2_1 = guest::cpu()->r[2];
    u32 r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_2 = call_002f74e0(0x10u, r0_1, r2_1, r3_1);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_2 = guest::cpu()->r[2];
    u32 r3_2 = guest::cpu()->r[3];
    if (r0_2 != 0) {
        r13 += 0x10;  // (from the original)
        guest::cpu()->r[13] = r13;
        return;
    }
    guest::cpu()->r[13] = r13;
    u32 r0_3 = call_002fc900(r0_2, r1_1, r2_2, r3_2);
    r1_1 = guest::cpu()->r[1];
    u32 r2_3 = guest::cpu()->r[2];
    u32 r3_3 = guest::cpu()->r[3];
    if (r0_3 != 0) {
        r13 += 0x10;  // (from the original)
        guest::cpu()->r[13] = r13;
        return;
    }
    guest::cpu()->r[13] = r13;
    u32 r0_4 = call_002f74c8(r0_3, r1_1, r2_3, r3_3);
    u32 r2_4 = guest::cpu()->r[2];
    u32 r3_4 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_5 = call_002f74e0(0x20000u, r0_4, r2_4, r3_4);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    u32 r2_5 = guest::cpu()->r[2];
    u32 r3_5 = guest::cpu()->r[3];
    if (r0_5 != 0) {
        r13 += 0x10;  // (from the original)
        guest::cpu()->r[13] = r13;
        return;
    }
    guest::cpu()->r[13] = r13;
    u32 r0_6 = call_002fb918(r0_5, r1_1, r2_5, r3_5);
    u32 r1_2 = guest::cpu()->r[1];
    u32 r2_6 = guest::cpu()->r[2];
    u32 r3_6 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_7 = call_001df3d4(r0_6, r1_2, r2_6, r3_6);
    u32 r1_3 = guest::cpu()->r[1];
    u32 r2_7 = guest::cpu()->r[2];
    u32 r3_7 = guest::cpu()->r[3];
    if (r0_7 != 0) {
        guest::cpu()->r[13] = r13;
        r0_7 = call_006f4f48(r0_7, r1_3, r2_7, r3_7);
        r1_3 = guest::cpu()->r[1];
        r2_7 = guest::cpu()->r[2];
        r3_7 = guest::cpu()->r[3];
    }
    guest::cpu()->r[13] = r13;
    u32 r0_8 = call_002fb378(r0_7, r1_3, r2_7, r3_7);
    u32 r1_4 = guest::cpu()->r[1];
    u32 r2_8 = guest::cpu()->r[2];
    u32 r3_8 = guest::cpu()->r[3];
    u32 r4_1 = *gptr<u32>(r0_8);
    u32 r5_1 = *gptr<u32>(r0_8 + 4);
    u32 r6_1 = *gptr<u32>(r0_8 + 8);
    guest::cpu()->r[13] = r13;
    u32 r0_9 = call_002fb918(r0_8, r1_4, r2_8, r3_8);
    gptr<Local_001bb0c4_ea_1> ea_1 = gptr<Local_001bb0c4_ea_1>(r0_9 + 0x16cf8u);  // (from the original)
    u32 r3_9 = ea_1->word_4;
    *global_00953fa4 = ea_1->word_0;
    *global_00953fa8 = r3_9;
    guest::cpu()->r[13] = r13;
    u32 r0_11 = call_001e4214(r0_9 + 0xa4f8u, r4_1, r5_1, r6_1);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    u32 r2_9 = guest::cpu()->r[2];
    u32 r3_10 = guest::cpu()->r[3];
    if (r0_11 == 0) {
        r13 += 0x10;  // (from the original)
        guest::cpu()->r[13] = r13;
        return;
    }
    guest::cpu()->r[13] = r13;
    u32 r0_12 = call_002fb918(r0_11, r1_1, r2_9, r3_10);
    u32 r1_5 = guest::cpu()->r[1];
    u32 r2_10 = guest::cpu()->r[2];
    u32 r3_11 = guest::cpu()->r[3];
    u32 r6 = r0_12 + 0xa4f8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    u32 r0_13 = call_001e442c(r6, r1_5, r2_10, r3_11);
    u32 r1_6 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 r5 = r0_13;
    u32 r4 = 0u;
    if (r0_13 != 0 && r0_13 >> 0x1f == (r0_13 & (r0_13 ^ r0_13)) >> 0x1f) {  // (from the original)
        do {
            guest::cpu()->r[13] = r13;
            u32 r0_14 = call_00710614(r6, r4, r2, r3);
            u32 r1_7 = guest::cpu()->r[1];
            u32 r2_11 = guest::cpu()->r[2];
            u32 r3_12 = guest::cpu()->r[3];
            guest::cpu()->r[13] = r13;
            u32 r0_15 = call_001bbc30(r0_14, r1_7, r2_11, r3_12);
            r1_6 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_15 != 0) {
                guest::cpu()->r[13] = r13;
                call_002ff3fc(r6, r4, r2, r3);
                r1_6 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
            }
            r4 += 1u;
            guest::preempt();
        } while (s32(r4) < s32(r5));
    }
    r13 += 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_001e442c(r6, r1_6, r2, r3);
    return;
}

}  // namespace d_001bb0c4
GUEST_EXPORT(0x001bb0c4, d_001bb0c4::f_001bb0c4);

// f_001bb304: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001bb304 {

struct __attribute__((packed)) Object_001bb304_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_001bb304_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_001bb304_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_001bb304_0, word_8, 0x8);  // (from the original)

inline guest::global<u32, 0x00aaf6a4> global_00aaf6a4;  // (from the original)
inline guest::global<u32, 0x00aaf6a8> global_00aaf6a8;  // (from the original)
inline guest::global<u32, 0x00aaf6ac> global_00aaf6ac;  // (from the original)
inline constexpr guest::Function<0x0056cbe8, u32(u32, u32, u32, u32)> call_0056cbe8;  // (from the original)
inline constexpr guest::Function<0x0056cce4, u32(u32, u32, u32, u32)> call_0056cce4;  // (from the original)
inline constexpr guest::Function<0x0056ce84, u32(u32, u32, u32, u32)> call_0056ce84;  // (from the original)
inline constexpr guest::Function<0x0056cedc, u32(u32, u32, u32, u32)> call_0056cedc;  // (from the original)

void f_001bb304(gptr<Object_001bb304_0> arg0) {
    guest::cpu()->r[13] -= 8u;
    u32 r2_1 = arg0->word_4;
    u32 r3_1 = arg0->word_8;
    *global_00aaf6a4 = arg0->word_0;
    *global_00aaf6a8 = r2_1;
    *global_00aaf6ac = r3_1;
    call_0056cce4(0xaaf6a4u, 6u, r2_1, r3_1);  // (from the original)
    call_0056ce84(0xaaf6a4u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_0056cedc(0xaaf6a4u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r2_4 = guest::cpu()->r[2];
    u32 r3_4 = guest::cpu()->r[3];
    guest::cpu()->r[13] += 8u;
    call_0056cbe8(0xaaf6a4u, 0u, r2_4, r3_4);
    return;  // (from the original)
}

}  // namespace d_001bb304
GUEST_EXPORT(0x001bb304, d_001bb304::f_001bb304);

// f_001bb354: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001bb354 {

struct __attribute__((packed)) Local_001bb354_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001bb354_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001bb354_ea_1, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x00953fa4> global_00953fa4;  // (from the original)
inline guest::global<u32, 0x00953fa8> global_00953fa8;  // (from the original)
inline constexpr guest::Function<0x001bbc30, u32(u32, u32, u32, u32)> call_001bbc30;  // (from the original)
inline constexpr guest::Function<0x001e4214, u32(u32, u32, u32, u32)> call_001e4214;  // (from the original)
inline constexpr guest::Function<0x001e442c, u32(u32, u32, u32, u32)> call_001e442c;  // (from the original)
inline constexpr guest::Function<0x002fb918, u32(u32, u32, u32, u32)> call_002fb918;  // (from the original)
inline constexpr guest::Function<0x002ff3fc, u32(u32, u32, u32, u32)> call_002ff3fc;  // (from the original)
inline constexpr guest::Function<0x00710614, u32(u32, u32, u32, u32)> call_00710614;  // (from the original)

u32 f_001bb354(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    r13 -= 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    u32 r0_1 = call_002fb918(r0, r1, r2, r3);
    gptr<Local_001bb354_ea_1> ea_1 = gptr<Local_001bb354_ea_1>(r0_1 + 0x16cf8u);  // (from the original)
    u32 r3_1 = ea_1->word_4;
    *global_00953fa4 = ea_1->word_0;
    *global_00953fa8 = r3_1;
    guest::cpu()->r[13] = r13;
    u32 r0_3 = call_001e4214(r0_1 + 0xa4f8u, r0, r1, r2);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    u32 r3_2 = guest::cpu()->r[3];
    if (r0_3 != 0) {
        guest::cpu()->r[13] = r13;
        u32 r0_4 = call_002fb918(r0_3, r1_1, r2_1, r3_2);
        u32 r1_2 = guest::cpu()->r[1];
        u32 r2_2 = guest::cpu()->r[2];
        u32 r3_3 = guest::cpu()->r[3];
        u32 r6 = r0_4 + 0xa4f8u;  // (from the original)
        guest::cpu()->r[13] = r13;
        u32 r0_5 = call_001e442c(r6, r1_2, r2_2, r3_3);
        u32 r1_3 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        u32 r5 = r0_5;
        u32 r4 = 0u;
        if (r0_5 != 0 && r0_5 >> 0x1f == (r0_5 & (r0_5 ^ r0_5)) >> 0x1f) {  // (from the original)
            do {
                guest::cpu()->r[13] = r13;
                u32 r0_6 = call_00710614(r6, r4, r2, r3);
                u32 r1_4 = guest::cpu()->r[1];
                u32 r2_3 = guest::cpu()->r[2];
                u32 r3_4 = guest::cpu()->r[3];
                guest::cpu()->r[13] = r13;
                u32 r0_7 = call_001bbc30(r0_6, r1_4, r2_3, r3_4);
                r1_3 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_7 != 0) {
                    guest::cpu()->r[13] = r13;
                    call_002ff3fc(r6, r4, r2, r3);
                    r1_3 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                }
                r4 += 1u;
                guest::preempt();
            } while (s32(r4) < s32(r5));
        }
        r13 += 0x10;  // (from the original)
        guest::cpu()->r[13] = r13;
        return call_001e442c(r6, r1_3, r2, r3);
    }
    r13 += 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_001bb354
GUEST_EXPORT(0x001bb354, d_001bb354::f_001bb354);

// f_001bbbe8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001bbbe8 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x0070eed0, u32(u32, u32)> call_0070eed0;  // (from the original)
inline constexpr guest::Function<0x00770934, u32(u32, u32)> call_00770934;  // (from the original)

u32 f_001bbbe8(u32 r0, u32 r1) {
    u32 r0_1 = call_002fb328(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_3 = call_0070eed0(r0_1 + 0x71900u, r0);  // (from the original)
    u32 r0_4 = call_00770934(r0_3, guest::cpu()->r[1]);
    return r0_4 + 1u == 0 ? 0u : 1u;
}

}  // namespace d_001bbbe8
GUEST_EXPORT_FRAMED(0x001bbbe8, d_001bbbe8::f_001bbbe8, 0x4010);  // pushes {r4, lr} first, as the original

// f_001bbc30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001bbc30 {

inline constexpr guest::Function<0x0010cadd, u32(u32, u32, u32, u32)> call_0010cadc;  // (from the original)
inline constexpr guest::Function<0x001127ac, u32(u32, u32, u32, u32)> call_001127ac;  // (from the original)
inline constexpr guest::Function<0x00118c9d, u32(u32, u32, u32, u32)> call_00118c9c;  // (from the original)
inline constexpr guest::Function<0x001df274, u32(u32, u32, u32, u32)> call_001df274;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb310, u32(u32, u32, u32, u32)> call_002fb310;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fb918, u32(u32, u32, u32, u32)> call_002fb918;  // (from the original)
inline constexpr guest::Function<0x00309fbc, u32(u32, u32, u32, u32)> call_00309fbc;  // (from the original)
inline constexpr guest::Function<0x006f5138, u32(u32, u32, u32, u32)> call_006f5138;  // (from the original)
inline constexpr guest::Function<0x0071a0b0, u32(u32, u32, u32, u32)> call_0071a0b0;  // (from the original)
inline constexpr guest::Function<0x00758070, u32(u32, u32, u32, u32)> call_00758070;  // (from the original)
inline constexpr guest::Function<0x007580d0, u32(u32, u32, u32, u32)> call_007580d0;  // (from the original)
inline constexpr guest::Function<0x00758128, u32(u32, u32, u32, u32)> call_00758128;  // (from the original)
inline constexpr guest::Function<0x00770934, u32(u32, u32, u32, u32)> call_00770934;  // (from the original)

u32 f_001bbc30(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r8 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_17 = 0;
    u32 r2_14 = 0;
    u32 r3_14 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    u32 r2_15 = 0;
    u32 r3_15 = 0;
    u32 r0_20 = 0;
    u32 r1_6 = 0;
    u32 r2_16 = 0;
    u32 r3_16 = 0;
    u32 r5_1 = 0;
    u32 r0_21 = 0;
    u32 r2_17 = 0;
    u32 r3_17 = 0;
    u32 r7_1 = 0;
    u32 r0_22 = 0;
    u32 r2_18 = 0;
    u32 r3_18 = 0;
    u32 r0_23 = 0;
    u32 r2_19 = 0;
    u32 r3_19 = 0;
    u32 r0_24 = 0;
    u32 r1_7 = 0;
    u32 r2_20 = 0;
    u32 r3_20 = 0;
    u32 r0_25 = 0;
    u32 r0_1 = call_00758128(r0, r1, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    u32 r3_1 = guest::cpu()->r[3];
    if (r0_1 != 0) {
        return 1u;
    }
    u32 r0_2 = call_007580d0(r0, r1_1, r2_1, r3_1);
    u32 r1_2 = guest::cpu()->r[1];
    u32 r2_2 = guest::cpu()->r[2];
    u32 r3_2 = guest::cpu()->r[3];
    if (r0_2 != 0) {
        u32 r0_3 = call_002fb328(r0_2, r1_2, r2_2, r3_2);
        u32 r0_5 = call_0071a0b0(r0_3 + 0xa0u, r0_2, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        u32 r2_4 = guest::cpu()->r[2];
        u32 r3_4 = guest::cpu()->r[3];
        if (r0_5 == 0) {
            return 1u;
        } else {
            r8 = 0u;
        }
        u32 r0_6 = call_00758128(r0, r1_1, r2_4, r3_4);
        r1 = guest::cpu()->r[1];
        r2_5 = guest::cpu()->r[2];
        r3_5 = guest::cpu()->r[3];
        if (r0_6 != 0) {
            return r8;
        }
    } else {
        u32 r0_7 = call_00758070(r0, r1_2, r2_2, r3_2);
        r1_1 = guest::cpu()->r[1];
        u32 r2_6 = guest::cpu()->r[2];
        u32 r3_6 = guest::cpu()->r[3];
        if (r0_7 == 0) {
            return 1u;
        }
        u32 r0_8 = call_002fb328(r0_7, r1_1, r2_6, r3_6);
        u32 r0_10 = call_00118c9c(r0_8 + 0x292a4u, r0_7, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        u32 r2_8 = guest::cpu()->r[2];
        u32 r3_8 = guest::cpu()->r[3];
        if (r0_10 + 1u == 0) {
            return 1u;
        }
        u32 r0_11 = call_00758070(r0, r1_1, r2_8, r3_8);
        u32 r1_3 = guest::cpu()->r[1];
        if (r0_11 != 0) {
            u32 r0_12 = call_002fae84(r0_11, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
            u32 r0_13 = call_002fb310(r0_12, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            u32 r0_15 = call_0010cadc(r0_13 + 4u, r0_11, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1_3 = guest::cpu()->r[1];
            if (r0_15 != 0) {
                call_001127ac(r0_15, r0, guest::cpu()->r[2], guest::cpu()->r[3]);
                r1_3 = guest::cpu()->r[1];
            }
        }
        guest::cpu()->r[1] = r1_3;
        return 1u;
    }
    u32 r0_16 = call_007580d0(r0, r1, r2_5, r3_5);
    u32 r1_5 = guest::cpu()->r[1];
    u32 r2_13 = guest::cpu()->r[2];
    u32 r3_13 = guest::cpu()->r[3];
    if (r0_16 == 0) {
        goto L_1bbdb0;
    }
    r0_17 = call_002fb328(r0_16, r1_5, r2_13, r3_13);
    r2_14 = guest::cpu()->r[2];
    r3_14 = guest::cpu()->r[3];
    r0_18 = r0_17 + 0xa0u;  // (from the original)
    r0_19 = call_0071a0b0(r0_18, r0_16, r2_14, r3_14);
    r1 = guest::cpu()->r[1];
    r2_15 = guest::cpu()->r[2];
    r3_15 = guest::cpu()->r[3];
    if (r0_19 == 0) {
        return r8;
    }
    r0_20 = call_007580d0(r0, r1, r2_15, r3_15);
    r1_6 = guest::cpu()->r[1];
    r2_16 = guest::cpu()->r[2];
    r3_16 = guest::cpu()->r[3];
    if (r0_20 == 0) {
        r5_1 = r8;
        goto L_1bbd68;
    }
    r0_21 = call_002fb328(r0_20, r1_6, r2_16, r3_16);
    r2_17 = guest::cpu()->r[2];
    r3_17 = guest::cpu()->r[3];
    r7_1 = r0_21 + 0xa0u;  // (from the original)
    r0_22 = call_0071a0b0(r7_1, r0_20, r2_17, r3_17);
    r2_18 = guest::cpu()->r[2];
    r3_18 = guest::cpu()->r[3];
    r0_20 = call_00309fbc(r7_1, r0_22, r2_18, r3_18);
    r1_6 = guest::cpu()->r[1];
    r2_16 = guest::cpu()->r[2];
    r3_16 = guest::cpu()->r[3];
    r5_1 = r0_20;
L_1bbd68:;
    r0_23 = call_002fb918(r0_20, r1_6, r2_16, r3_16);
    r2_19 = guest::cpu()->r[2];
    r3_19 = guest::cpu()->r[3];
    r0_24 = call_001df274(r0_23, r5_1, r2_19, r3_19);
    r1_7 = guest::cpu()->r[1];
    r2_20 = guest::cpu()->r[2];
    r3_20 = guest::cpu()->r[3];
    r0_25 = call_00770934(r0_24, r1_7, r2_20, r3_20);
    r1 = r0_25;
    if (r1 >> 0x1f != (r0_25 & (r0_25 ^ r1)) >> 0x1f) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return r8;
    }
    call_006f5138(r0_24, r1, r0, 0u);
    r1 = guest::cpu()->r[1];
    return 1u;
L_1bbdb0:;
    u32 r0_26 = call_00758070(r0, r1_5, r2_13, r3_13);
    r1 = guest::cpu()->r[1];
    u32 r2_21 = guest::cpu()->r[2];
    u32 r3_21 = guest::cpu()->r[3];
    if (r0_26 == 0) {
        return r8;
    }
    u32 r0_27 = call_002fb328(r0_26, r1, r2_21, r3_21);
    call_00118c9c(r0_27 + 0x292a4u, r0_26, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    return r8;
}

}  // namespace d_001bbc30
GUEST_EXPORT_FRAMED(0x001bbc30, d_001bbc30::f_001bbc30, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_001bfa48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001bfa48 {

struct __attribute__((packed)) Local_001bfa48_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001bfa48_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001bfa48_ea_1, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x0094ddbc> global_0094ddbc;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x00303acc, u32(u32, u32, u32)> call_00303acc;  // (from the original)
inline constexpr guest::Function<0x00535ab0, u32(u32, u32, u32)> call_00535ab0;  // (from the original)
inline constexpr guest::Function<0x0068efc8, u32(u32, u32)> call_0068efc8;  // (from the original)
inline constexpr guest::Function<0x006a6dbc, u32(u32, u32, u32)> call_006a6dbc;  // (from the original)

u32 f_001bfa48(u32 r0, u32 r1, u32 r2, float S0, float S1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r4 = r0;
    u32 r0_1 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
    float S0_1 = guest::cpu()->s[0];
    float S1_1 = guest::cpu()->s[1];
    u32 zf_1 = r0_1 == 0x30u;  // (from the original)
    gptr<Local_001bfa48_ea_1> ea_1 = gptr<Local_001bfa48_ea_1>(r4 + 0x28cu);  // (from the original)
    u32 r1_1 = ea_1->word_0;
    u32 r2_1 = ea_1->word_4;
    if (!zf_1) {
        zf_1 = r0_1 == 0x31u;  // (from the original)
    }
    u32 r0_2 = frame.at(0).addr();
    if (zf_1) {
        goto L_1bfac0;
    }
    call_00535ab0(r0_2, r1_1, r2_1);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
L_1bfa74:;
    r0_3 = r4 + 0x276u;  // (from the original)
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0_4 = call_00303acc(r0_3, r1, r2);
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    if (r0_4 != 0) {
        S1_2 = std::bit_cast<float>(*global_0094ddbc);
        S0_2 = std::bit_cast<float>(*frame.at<u32>(4)) + S1_2;
        *frame.at<u32>(4) = std::bit_cast<u32>(S0_2);
    }
    r0_5 = *gptr<u32>(r4 + 0xf0u);  // (from the original)
    r1_2 = r0_5 == 0 ? 0u : r0_5 + 0x14u;  // (from the original)
    r0_6 = frame.at(0).addr();
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    r0_7 = call_0068efc8(r0_6, r1_2);
    return r0_7;
L_1bfac0:;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    call_006a6dbc(r0_2, r1_1, r2_1);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    guest::preempt();
    goto L_1bfa74;
}

}  // namespace d_001bfa48
GUEST_EXPORT_FRAMED(0x001bfa48, d_001bfa48::f_001bfa48, 0x4010);  // pushes {r4, lr} first, as the original
