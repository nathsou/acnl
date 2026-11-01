// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "item/item.hpp"
#include "player/slot_object.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_0076054c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076054c {

struct __attribute__((packed)) Local_0076054c_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0076054c_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0076054c_ea_1, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x00aaf14c> global_00aaf14c;  // (from the original)
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> call_00300904;  // (from the original)
inline constexpr guest::Function<0x00309eb9, u32(u32, u32)> call_00309eb8;  // (from the original)
inline constexpr guest::Function<0x00318944, u32(u32, u32)> call_00318944;  // (from the original)
inline constexpr guest::Function<0x005c2c80, u32(u32, u32)> call_005c2c80;  // (from the original)

u32 f_0076054c(u32 r0, u32 r1) {
    u32 r0_2 = 0;
    u32 r0_1 = call_00300904(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        return 0u;
    }
    r0_2 = call_005c2c80(r0_1, r1_1);
    r1_1 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        return r0_2;
    }
    gptr<Local_0076054c_ea_1> ea_1 = gptr<Local_0076054c_ea_1>(r0 + 0x1028u);  // (from the original)
    u32 r4_1 = ea_1->word_0;
    u32 r0_3 = ea_1->word_4;
    u32 zf_1 = r0_3 == 0;
    if (zf_1) {
        r1_1 = 0u;
    } else {
        r1_1 = r0_3 + 0x38u;  // (from the original)
        zf_1 = r4_1 == 0;
    }
    if (!zf_1) {
        zf_1 = r1_1 == 0;
    }
    if (zf_1) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    if (s32(r1) >= 0) {
        u32 r0_5 = call_00318944(r0_3 + 0x28u, r1_1);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        if (r0_5 != 0 && r0_5 != 1u) {
            return 0u;
        }
    }
    r0_2 = *global_00aaf14c;
    if (r0_2 == 0) {
        guest::cpu()->r[1] = r1_1;
        return r0_2;
    }
    r1_1 = u32(*gptr<u8>(0x5705u + r0_2)) << 0x1d;  // (from the original)
    if (!(r1_1 >> 0x1f)) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r0_6 = call_00309eb8(r4_1, r0_2 + 0x55a6u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    if (r0_6 == 0) {
        return 0u;
    }
    if ((u32(*gptr<u8>(r0_6 + 0xbcu)) >> 7) != 0) {  // (from the original)
        return 1u;
    }
    return 0u;
}

}  // namespace d_0076054c
GUEST_EXPORT_FRAMED(0x0076054c, d_0076054c::f_0076054c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_007608f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007608f8 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x002fcb84, u32(u32, u32, u32, u32)> call_002fcb84;  // (from the original)
inline constexpr guest::Function<0x002fe574, u32(u32, u32, u32, u32)> call_002fe574;  // (from the original)
inline constexpr guest::Function<0x006bada0, u32(u32, u32, u32, u32)> call_006bada0;  // (from the original)

u32 f_007608f8(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r4 = 0;
    u32 r0_5 = 0;
    u32 r3_6 = 0;
    u32 r1_2 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    u32 r3_7 = 0;
    u32 r0_7 = 0;
    u32 r3_8 = 0;
    u32 r1_4 = 0;
    u32 r0_8 = 0;
    *frame.at<u32>(0) = r3;
    u32 r4_1 = r1;
    u32 r0_1 = call_002fb94c(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    u32 r3_1 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        return 9u;
    }
    u32 r0_2 = call_002fcb84(r4_1, 0x2006u, guest::cpu()->r[2], r3_1);  // (from the original)
    r1 = guest::cpu()->r[1];
    u32 r3_2 = guest::cpu()->r[3];
    if (r0_2 != 0) {
        return 5u;
    }
    u32 r0_3 = call_002fcb84(r4_1, 0x2e61u, guest::cpu()->r[2], r3_2);  // (from the original)
    r1 = guest::cpu()->r[1];
    u32 r3_3 = guest::cpu()->r[3];
    if (r0_3 != 0) {
        return 6u;
    }
    call_002fcb34(r4_1, r1, guest::cpu()->r[2], r3_3);
    u32 r0_4 = call_002fcb34(r4_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    u32 r3_5 = guest::cpu()->r[3];
    u32 res_1 = r0_4 - 0x34u;  // (from the original)
    if (res_1 != 0) {
        if ((res_1 >> 0x1f) != (((r0_4 ^ 0x34u) & (r0_4 ^ res_1)) >> 0x1f)) {  // (from the original)
            if (r0_4 == 0x24u) {  // (from the original)
                return 8u;
            }
            if (r0_4 == 0x27u || r0_4 == 0x28u) {  // (from the original)
                return 7u;
            }
            if (r0_4 == 0x33u) {  // (from the original)
                goto L_7609fc;
            }
            return 9u;
        }
        if (r0_4 == 0x35u) {  // (from the original)
            return 4u;
        }
        if (r0_4 == 0x75u || r0_4 == 0x76u) {  // (from the original)
            return 0xau;  // (from the original)
        }
        return 9u;
    }
    r0_5 = call_002fb328(r0_4, r1, guest::cpu()->r[2], r3_5);
    r3_6 = guest::cpu()->r[3];
    r1_2 = r0_5 + 0x80u + 0x621b2u + 8u;  // (from the original)
    r0_6 = frame.at(0).addr();
    call_002fc934(r0_6, r1_2, guest::cpu()->r[2], r3_6);
    r1_3 = guest::cpu()->r[1];
    r3_7 = guest::cpu()->r[3];
    r0_7 = frame.at(0).addr();
    call_006bada0(r0_7, r1_3, guest::cpu()->r[2], r3_7);
    r3_8 = guest::cpu()->r[3];
    r1_4 = frame.at(0).addr();
    r0_8 = call_002fe574(r4_1, r1_4, guest::cpu()->r[2], r3_8);
    r1 = guest::cpu()->r[1];
    r4 = r0_8 == 0 ? 0u : 1u;
L_7609e8:;
    guest::cpu()->r[1] = r1;
    return r4;
L_7609fc:;
    u32 r0_9 = call_002fcb84(r4_1, 0x200du, guest::cpu()->r[2], r3_5);  // (from the original)
    r1 = guest::cpu()->r[1];
    u32 r3_9 = guest::cpu()->r[3];
    if (r0_9 == 0) {
        goto L_760a20;
    }
    return 9u;
L_760a20:;
    u32 r0_10 = call_002fb328(r0_9, r1, guest::cpu()->r[2], r3_9);
    call_002fc934(frame.at(0).addr(), r0_10 + 0x80u + 0x621b2u + 8u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_12 = call_002fe574(r4_1, frame.at(0).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r4 = r0_12 == 0 ? 2u : 3u;
    guest::preempt();
    goto L_7609e8;
}

}  // namespace d_007608f8
GUEST_EXPORT_FRAMED(0x007608f8, d_007608f8::f_007608f8, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00760c70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00760c70 {

inline guest::global<u32, 0x00aaf14c> global_00aaf14c;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002ff8b0, u32(u32)> call_002ff8b0;  // (from the original)
inline constexpr guest::Function<0x00309ef0, u32(u32, u32)> call_00309ef0;  // (from the original)
inline constexpr guest::Function<0x0030fbb4, u32(u32, u32)> call_0030fbb4;  // (from the original)
inline constexpr guest::Function<0x007203d4, u32(u32, u32)> call_007203d4;  // (from the original)
inline constexpr guest::Function<0x00761ab0, u32(u32, u32, u32, u32)> call_00761ab0;  // (from the original)

u32 f_00760c70(u32 r0, u32 r1) {
    u32 r0_1 = call_00761ab0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        return r0_1;
    }
    u32 r4_1 = *global_00aaf14c;
    u32 r0_2 = call_002ff8b0(4u);
    u32 r0_3 = call_002fb328(r0_2);
    u32 r0_5 = call_0030fbb4(r0_3 + 0x5d900u, r0_2);  // (from the original)
    u32 r0_6 = call_007203d4(r0_5, 0u);
    r1_1 = guest::cpu()->r[1];
    if (r0_6 < 3u) {
        if (r4_1 == 0) {
            return 0u;
        }
        if (!((u32(*gptr<u8>(0x5715u + r4_1)) << 0x1b) >> 0x1f)) {  // (from the original)
            return 0u;
        }
    }
    u32 r5_1 = *gptr<u32>(r0 + 0xf0u);  // (from the original)
    if (r4_1 == 0 || r5_1 == 0) {
        return 0u;
    }
    u32 r6_1 = r4_1 + 0x8dfau;  // (from the original)
    u32 r0_7 = call_00309ef0(r6_1, r1_1);
    r1_1 = guest::cpu()->r[1];
    if (r0_7 != 0 && u32(*gptr<u8>(r6_1 + 9u)) != 3u) {
        return 0u;
    }
    r1_1 = *gptr<u16>(0x8ec2u + r4_1);  // (from the original)
    if (r1_1 == u32(*gptr<u16>(0x9acu + r5_1))) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r0_8 = *gptr<u32>(0x1028u + r5_1);  // (from the original)
    if (r0_8 == 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    if (u32(*gptr<u8>(r0_8 + 0x250fu)) == 0) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_00760c70
GUEST_EXPORT_FRAMED(0x00760c70, d_00760c70::f_00760c70, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00760d60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00760d60 {

struct __attribute__((packed)) Local_00760d60_r5_1 {
    u8 unknown_0[0x28];  // (not used here)
    u32 word_28;
    u32 word_2c;
    u32 word_30;
};
GUEST_OFFSET(Local_00760d60_r5_1, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Local_00760d60_r5_1, word_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Local_00760d60_r5_1, word_30, 0x30);  // (from the original)

inline guest::global<u8, 0x00950145> global_00950145;  // (from the original)
inline guest::global<u32, 0x00aaf14c> global_00aaf14c;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb310, u32(u32, u32, u32)> call_002fb310;  // (from the original)
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> call_00300904;  // (from the original)
inline constexpr guest::Function<0x00309865, u32(u32, u32, u32)> call_00309864;  // (from the original)
inline constexpr guest::Function<0x0051ce84, u32(u32, u32, u32)> call_0051ce84;  // (from the original)
inline constexpr guest::Function<0x0051db9c, u32(u32, u32, u32)> call_0051db9c;  // (from the original)
inline constexpr guest::Function<0x005bdb34, u32(u32, u32, u32)> call_005bdb34;  // (from the original)
inline constexpr guest::Function<0x007241b0, u32(u32, u32, u32)> call_007241b0;  // (from the original)

u32 f_00760d60(u32 r0, u32 r1, u32 r2) {
    u32 r4 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r0_1 = call_00300904(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    if (r0_1 != 0 || u32(*global_00950145) != 0) {
        return 0u;
    }
    u32 r0_2 = *global_00aaf14c;
    if (r0_2 == 0) {
        return 0u;
    }
    u32 r0_4 = call_007241b0(r0_2 + 0x6bd0u, r1, r2_1);  // (from the original)
    r1 = guest::cpu()->r[1];
    u32 r2_2 = guest::cpu()->r[2];
    if (s32(r0_4) < 0) {
        return 0u;
    }
    r0 = *gptr<u32>(r0 + 0xf0u);  // (from the original)
    if (r0 == 0) {
        return r0;
    }
    gptr<Local_00760d60_r5_1> r5_1 = gptr<Local_00760d60_r5_1>(r0 + 0x1000u);  // (from the original)
    r0 = r5_1->word_2c;
    if (r0 == 0) {
        return r0;
    }
    u32 r6_1 = *gptr<u8>(r0 + 0x24u);  // (from the original)
    u32 r0_5 = call_005bdb34(r6_1, r1, r2_2);
    r1 = guest::cpu()->r[1];
    u32 r2_3 = guest::cpu()->r[2];
    if (r0_5 != 5u) {
        return 0u;
    }
    u32 r4_1 = r5_1->word_28;
    if (r4_1 == 0) {
        return 0u;
    }
    u32 r0_6 = call_002fae84(r0_5, r1, r2_3);
    u32 r0_7 = call_002fb310(r0_6, guest::cpu()->r[1], guest::cpu()->r[2]);
    u32 r0_9 = call_00309864(r0_7 + 4u, 0u, guest::cpu()->r[2]);
    u32 r5 = r5_1->word_30;
    u32 r7 = r0_9;
    if (r6_1 == 8u) {
        goto L_760e38;
    } else {
        r4 = 0u;
    }
L_760e0c:;
    r0_10 = call_0051ce84(r4, r7, r5);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_10 == 0) {
        goto L_760e5c;
    }
L_760e28:;
    call_0051db9c(1u, r1, r2);
    r1 = guest::cpu()->r[1];
    return 1u;
L_760e38:;
    r0_11 = s32(s8(*gptr<u8>(0x2516u + r4_1)));  // (from the original)
    r0 = call_0051ce84(r0_11, r7, r5);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        return r0;
    }
    guest::preempt();
    goto L_760e28;
L_760e5c:;
    r4 += 1u;
    if (s32(r4) < 0xa) {  // (from the original)
        guest::preempt();
        goto L_760e0c;
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_00760d60
GUEST_EXPORT_FRAMED(0x00760d60, d_00760d60::f_00760d60, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00760e7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00760e7c {

inline constexpr guest::Function<0x002f74c8, u32(u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x002fb378, u32(u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x002fdf10, u32(u32, u32)> call_002fdf10;  // (from the original)
inline constexpr guest::Function<0x0030b6c4, u32(u32, u32)> call_0030b6c4;  // (from the original)
inline constexpr guest::Function<0x0051cc90, u32(u32, u32)> call_0051cc90;  // (from the original)

u32 f_00760e7c(u32 r0, u32 r1) {
    u32 r0_1 = call_002fb94c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_2 = call_002fb378(r0_1, guest::cpu()->r[1]);
    u32 r0_3 = s32(s8(*gptr<u8>(r0_2 + 7u)));
    u32 r1_2 = u32(*gptr<u8>(r0_1 + 0x5705u)) << 0x1d;  // (from the original)
    if (!(r1_2 >> 0x1f)) {  // (from the original)
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    u32 r0_4 = r0_3 - 2u;
    if (r0_4 < 4u) {
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    u32 r0_5 = call_0030b6c4(r0_4, r1_2);
    r1_2 = guest::cpu()->r[1];
    if (r0_5 == 0) {
        return 0u;
    }
    u32 r0_6 = call_0051cc90(r0_5, r1_2);
    r1_2 = guest::cpu()->r[1];
    if (r0_6 != 0) {
        u32 r0_7 = call_002fdf10(2u, r1_2);
        r1_2 = guest::cpu()->r[1];
        if (r0_7 != 0) {
            return 0u;
        }
    }
    u32 r0_8 = call_002fdf10(0xdu, r1_2);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    if (r0_8 != 0) {
        return 0u;
    }
    u32 r0_9 = *gptr<u32>(r0 + 0xf0u);  // (from the original)
    if (r0_9 == 0) {
        return 0u;
    }
    u32 r0_10 = r0_9 + 0x1000u;  // (from the original)
    u32 r4_1 = *gptr<u32>(r0_10 + 0x2cu);  // (from the original)
    if (r4_1 == 0) {
        return 0u;
    }
    u32 r0_11 = call_002f74c8(r0_10);
    u32 r0_12 = call_002f74e0(0x40u, r0_11);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    if (r0_12 == 0) {
        return 1u;
    }
    u32 r0_13 = *gptr<u32>(r4_1 + 0x44u);  // (from the original)
    if ((r0_13 & 8u) != 0) {
        return 0u;
    }
    if ((r0_13 & 0x10u) == 0) {  // (from the original)
        return 1u;
    }
    return 0u;
}

}  // namespace d_00760e7c
GUEST_EXPORT_FRAMED(0x00760e7c, d_00760e7c::f_00760e7c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00761ab0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00761ab0 {

inline guest::global<u8, 0x00950145> global_00950145;  // (from the original)
inline guest::global<u32, 0x00950148> global_00950148;  // (from the original)
inline constexpr guest::Function<0x00229c50, u32(u32, u32)> call_00229c50;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fb378, u32(u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> call_00300904;  // (from the original)
inline constexpr guest::Function<0x00309ef0, u32(u32, u32)> call_00309ef0;  // (from the original)
inline constexpr guest::Function<0x0058dd08, u32(u32, u32)> call_0058dd08;  // (from the original)
inline constexpr guest::Function<0x0058e348, u32(u32, u32)> call_0058e348;  // (from the original)
inline constexpr guest::Function<0x00698ac0, u32(u32, u32)> call_00698ac0;  // (from the original)
inline constexpr guest::Function<0x0069fd54, u32(u32, u32)> call_0069fd54;  // (from the original)

u32 f_00761ab0(u32 r0, u32 r1) {
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r4_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_7 = 0;
    u32 r0_9 = 0;
    u32 r1_3 = 0;
    u32 r0_10 = 0;
    u32 r1_4 = 0;
    u32 r0_11 = 0;
    u32 r0_1 = call_00300904(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        return 0u;
    }
    if (r1 != 0) {
        goto L_761af4;
    }
    r0_2 = call_002fb328(r0_1, r1_1);
    r1_2 = guest::cpu()->r[1];
    r4_1 = r0_2 + 0x40690u;  // (from the original)
    r0_3 = r4_1 + 0x46u;  // (from the original)
    r0_4 = call_00309ef0(r0_3, r1_2);
    r1_1 = guest::cpu()->r[1];
    if (r0_4 == 0) {
        goto L_761af4;
    }
    if (u32(*gptr<u8>(r4_1 + 0x4fu)) < 4u) {  // (from the original)
        return 0u;
    }
L_761af4:;
    u32 r0_5 = *global_00950148;
    if (r1 != 0) {
        if (r0_5 != 0) {
            r0_5 = call_0069fd54(r0_5, r1_1);
            r1_1 = guest::cpu()->r[1];
            if (r0_5 != 0) {
                return 0u;
            }
        }
        r0_5 = call_00229c50(r0_5, r1_1);
        r1_1 = guest::cpu()->r[1];
        if (s32(r0_5) > 0) {
            return 0u;
        }
    }
    u32 r0_6 = call_002f74c8(r0_5, r1_1);
    r0_7 = call_002f74e0(0x20u, r0_6);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    if (r0_7 == 0) {
        return r0_7;
    }
    u32 r0_8 = call_00698ac0(r0_7, r1_1);
    r1_1 = guest::cpu()->r[1];
    u32 r5_1 = 1u;
    if (r0_8 != 0) {
        goto L_761b94;
    }
    r0_9 = call_002fb378(r0_8, r1_1);
    r1_3 = guest::cpu()->r[1];
    r0_10 = call_0058e348(r0_9, r1_3);
    r1_4 = guest::cpu()->r[1];
    r0_11 = call_0058dd08(r0_10, r1_4);
    r1_1 = guest::cpu()->r[1];
    if (r0_11 != 0) {
        if (r0_10 == 5u) {
            goto L_761b94;
        }
    }
    r5_1 = 0u;
L_761b94:;
    u32 r0_12 = u32(s32(s8(*global_00950145))) | r5_1;
    if (r0_12 != 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r0_13 = call_002fb378(r0_12, r1_1);
    r1_1 = guest::cpu()->r[1];
    if (u32(s32(s8(*gptr<u8>(r0_13 + 7u)))) - 6u < 0xcu) {  // (from the original)
        return 1u;
    }
    return 0u;
}

}  // namespace d_00761ab0
GUEST_EXPORT_FRAMED(0x00761ab0, d_00761ab0::f_00761ab0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00761f60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00761f60 {

inline guest::global<u32, 0x00a83af0> global_00a83af0;  // (from the original)

u32 f_00761f60(gptr<AcNpcNml__TalkRcpt> arg0, u32 r1) {
    u32 r0_1 = arg0->word_f0;
    if (r0_1 == 0) {
        return 0u;
    }
    u32 r1_1 = *global_00a83af0;
    u32 r0_2 = *gptr<u16>(r0_1 + 0x9acu);  // (from the original)
    u32 zf_1 = r1_1 == 0;
    u32 cf_1 = r1_1 >= 0u;
    if (!zf_1) {
        zf_1 = 0x18fu == r0_2;  // (from the original)
        cf_1 = 0x18fu >= r0_2;  // (from the original)
    }
    if (!cf_1 || zf_1) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r0_3 = r1_1 + (r0_2 + (r0_2 << 4) << 1);
    if (r0_3 == 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r0_4 = *gptr<u8>(r0_3 + 0x1cu);  // (from the original)
    if (8u > (r0_4 >> 4)) {
        guest::cpu()->r[1] = 8u;
        return r0_4 >> 4;
    }
    guest::cpu()->r[1] = 8u;
    return 0u;
}

}  // namespace d_00761f60
GUEST_EXPORT(0x00761f60, d_00761f60::f_00761f60);

// f_007622c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007622c8 {

inline constexpr guest::Function<0x006c06dc, u32(u32, u32, u32, u32)> call_006c06dc;  // (from the original)

u32 f_007622c8(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    *frame.at<u32>(0) = r0 + 0x1b4u;  // (from the original)
    u32 r0_1 = call_006c06dc(r1, r2, r3, *frame.at<u32>(8));
    return r0_1;
}

}  // namespace d_007622c8
GUEST_EXPORT_FRAMED(0x007622c8, d_007622c8::f_007622c8, 0x4000);  // pushes {lr} first, as the original

// f_007622f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007622f0 {

inline constexpr guest::Function<0x005d43f4, u32(u32, u32, u32, u32)> call_005d43f4;  // (from the original)
inline constexpr guest::Function<0x006c5c60, u32(u32, u32, u32, u32)> call_006c5c60;  // (from the original)

u32 f_007622f0(u32 r0, u32 r1, u32 r2_unused, u32 r3, float S0) {
    u32 r0_1 = call_005d43f4(r1, r0 + 0x14u, guest::cpu()->r[2], r3);  // (from the original)
    u32 r1_2 = guest::cpu()->r[1];
    u32 r3_1 = guest::cpu()->r[3];
    if (r3 != 0) {
        r0_1 = call_006c5c60(r1, 0u, guest::cpu()->r[2], r3_1);
        r1_2 = guest::cpu()->r[1];
        float S0_2 = guest::cpu()->s[0];
        *gptr<u32>(r1 + 4u) = std::bit_cast<u32>(S0_2);
    }
    guest::cpu()->r[1] = r1_2;
    return r0_1;
}

}  // namespace d_007622f0
GUEST_EXPORT_FRAMED(0x007622f0, d_007622f0::f_007622f0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_007626fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007626fc {

inline constexpr guest::Function<0x005ce32c, u32(u32, u32, u32)> call_005ce32c;  // (from the original)
inline constexpr guest::Function<0x005d43f4, u32(u32, u32, u32, u32)> call_005d43f4;  // (from the original)
inline constexpr guest::Function<0x006c5c60, u32(u32, u32, u32)> call_006c5c60;  // (from the original)
inline constexpr guest::Function<0x006c5d30, u32(u32, u32, u32)> call_006c5d30;  // (from the original)

u32 f_007626fc(gptr<SlotObject> arg0, u32 r1, float S0) {
    guest::StackFrame frame(0x28);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r4_1 = frame.at(0x18).addr();  // (from the original)
    *frame.at<u16>(8) = u16(u32(arg0->angles[1]) + r1);
    u32 r2_1 = *frame.at<u32>(8);
    call_005d43f4(r4_1, r0 + 0x14u, r2_1, guest::cpu()->r[3]);  // (from the original)
    u32 r2_2 = guest::cpu()->r[2];
    call_006c5c60(r4_1, 0u, r2_2);
    u32 r2_3 = guest::cpu()->r[2];
    float S0_2 = guest::cpu()->s[0];
    *frame.at<u32>(0x1c) = std::bit_cast<u32>(S0_2);  // (from the original)
    guest::cpu()->s[0] = S0_2;
    u32 r0_2 = call_005ce32c(frame.at(0x18).addr(), 0u, r2_3);  // (from the original)
    if (s32(r0_2) >= 0) {
        return 1u;
    }
    call_006c5d30(frame.at(0xc).addr(), frame.at(0x18).addr(), 0u);  // (from the original)
    if (s32(*frame.at<u32>(0x10)) >= s32(0x3f666666u)) {  // (from the original)
        guest::cpu()->r[1] = 0x3f666666u;  // (from the original)
        return 0u;
    }
    guest::cpu()->r[1] = 0x3f666666u;  // (from the original)
    return 1u;
}

}  // namespace d_007626fc
GUEST_EXPORT_FRAMED(0x007626fc, d_007626fc::f_007626fc, 0x4010);  // pushes {r4, lr} first, as the original

// f_00762ab8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00762ab8 {

inline constexpr guest::Function<0x00659674, u32(u32, u32, u32, u32)> call_00659674;  // (from the original)
inline constexpr guest::Function<0x006a6dbc, u32(u32, u32, u32, u32)> call_006a6dbc;  // (from the original)
inline constexpr guest::Function<0x006c588c, u32(u32, u32, u32, u32)> call_006c588c;  // (from the original)
inline constexpr guest::Function<0x007648b8, u32(u32, u32, u32, u32)> call_007648b8;  // (from the original)

void f_00762ab8(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x14);  // the original's stack frame
    call_00659674(r0 + 0x424u, 1u, r2, r3);  // (from the original)
    call_006a6dbc(frame.at(4).addr(), r1, r2, guest::cpu()->r[3]);
    u32 r0_4 = call_006c588c(frame.at(4).addr(), 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 zf_1 = r0_4 == 0x16u;  // (from the original)
    u32 r0_5 = frame.at(4).addr();
    if (!zf_1) {
        *frame.at<u32>(0) = r0_5;
        if (r3 == 0) {
            goto L_762b74;
        }
        call_007648b8(r0, 0u, 0u, 0x162u);  // (from the original)
        return;
    }
    *frame.at<u32>(0) = r0_5;
    if (r3 != 0) {
        call_007648b8(r0, 0u, 0u, 0x161u);  // (from the original)
        return;
    }
    call_007648b8(r0, 0u, 0u, 0x160u);  // (from the original)
    return;
L_762b74:;
    call_007648b8(r0, 0u, 0u, 0x15fu);  // (from the original)
    return;
}

}  // namespace d_00762ab8
GUEST_EXPORT_FRAMED(0x00762ab8, d_00762ab8::f_00762ab8, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00762d38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00762d38 {

struct __attribute__((packed)) Object_00762d38_0 {
    u8 unknown_0[0x172];  // (not used here)
    u8 byte_172;
    u8 unknown_173[0x7ac];  // (not used here)
    u8 byte_91f;
};
GUEST_OFFSET(Object_00762d38_0, byte_172, 0x172);  // (from the original)
GUEST_OFFSET(Object_00762d38_0, byte_91f, 0x91f);  // (from the original)

inline constexpr guest::Function<0x002f74c8, u32(u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x003117bc, u32(u32, u32)> call_003117bc;  // (from the original)
inline constexpr guest::Function<0x0070e594, u32(u32, u32, u32, u32)> call_0070e594;  // (from the original)
inline constexpr guest::Function<0x007626c0, u32(u32, u32)> call_007626c0;  // (from the original)

u32 f_00762d38(gptr<Object_00762d38_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r0_2 = 0;
    if ((u32(arg0->byte_172) >> 1u & 1u) == 0) {
        r0_2 = call_0070e594(r0 + 0x1b4u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1 = guest::cpu()->r[1];
    } else {
        r0_2 = 0x95bfdcu;  // (from the original)
    }
    u32 r0_3 = call_003117bc(r0_2, r1);
    if (r0_3 != 4u) {
        return 0u;
    }
    u32 r0_4 = arg0->byte_91f;
    if (r0_4 == 0) {
        return 0u;
    }
    u32 r0_5 = call_002f74c8(r0_4);
    u32 r0_6 = call_002f74e0(0x10000000u, r0_5);  // (from the original)
    u32 r1_2 = guest::cpu()->r[1];
    if ((u32(*gptr<u8>(r0_6 == 0 ? r0 + 0x91bu : r0 + 0x907u)) >> 6u & 1u) != 0) {  // (from the original)
        return 1u;
    }
    u32 r0_7 = call_007626c0(r0, r1_2);
    if (r0_7 == 0) {
        return 0u;
    }
    return 1u;
}

}  // namespace d_00762d38
GUEST_EXPORT_FRAMED(0x00762d38, d_00762d38::f_00762d38, 0x4010);  // pushes {r4, lr} first, as the original

// f_00762dc8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00762dc8 {

struct __attribute__((packed)) Object_00762dc8_0 {
    u8 unknown_0[0x2e];  // (not used here)
    u16 half_2e;
};
GUEST_OFFSET(Object_00762dc8_0, half_2e, 0x2e);  // (from the original)

inline guest::global<u32, 0x00762de8> global_00762de8;  // (from the original)
inline constexpr guest::Function<0x007622f0, u32(u32, u32, u32, u32)> call_007622f0;  // (from the original)

void f_00762dc8(gptr<Object_00762dc8_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    r13 -= 8u;
    *gptr<u16>(r13) = u16(u32(arg0->half_2e));
    u32 r2_1 = *gptr<u32>(r13);
    float S0_1 = std::bit_cast<float>(*global_00762de8);
    r13 += 8u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    call_007622f0(r0, guest::cpu()->r[1], r2_1, 1u);
    return;
}

}  // namespace d_00762dc8
GUEST_EXPORT(0x00762dc8, d_00762dc8::f_00762dc8);

// f_00762dec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00762dec {

inline constexpr guest::Function<0x006a6dbc, u32(u32, u32, u32, u32)> call_006a6dbc;  // (from the original)
inline constexpr guest::Function<0x006c588c, u32(u32, u32, u32, u32)> call_006c588c;  // (from the original)
inline constexpr guest::Function<0x007648b8, u32(u32, u32, u32, u32)> call_007648b8;  // (from the original)

void f_00762dec(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    call_006a6dbc(frame.at(4).addr(), r1, r2, r3);
    u32 r0_3 = call_006c588c(frame.at(4).addr(), 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    *frame.at<u32>(0) = frame.at(4).addr();
    if (r0_3 != 0x16u) {  // (from the original)
        call_007648b8(r0, 0u, 0u, 0x15du);  // (from the original)
        return;
    }
    call_007648b8(r0, 0u, 0u, 0x15eu);  // (from the original)
    return;
}

}  // namespace d_00762dec
GUEST_EXPORT_FRAMED(0x00762dec, d_00762dec::f_00762dec, 0x4010);  // pushes {r4, lr} first, as the original

// f_00762e98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00762e98 {

inline guest::global<u32, 0x00763034> global_00763034;  // (from the original)
inline guest::global<u32, 0x0094def4> global_0094def4;  // (from the original)
inline guest::global<u32, 0x009856c4> global_009856c4;  // (from the original)
inline guest::global<u32, 0x009856c8> global_009856c8;  // (from the original)
inline guest::global<u32, 0x009856cc> global_009856cc;  // (from the original)
inline guest::global<u32, 0x00ae5658> global_00ae5658;  // (from the original)
inline guest::global<u32, 0x00ae565c> global_00ae565c;  // (from the original)
inline guest::global<u32, 0x00ae5660> global_00ae5660;  // (from the original)
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32)> call_002fe7dc;  // (from the original)
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> call_006a5e34;  // (from the original)
inline constexpr guest::Function<0x006a5f0c, u32(u32, u32, u32)> call_006a5f0c;  // (from the original)
inline constexpr guest::Function<0x006c8928, u32(u32, u32, u32)> call_006c8928;  // (from the original)
inline constexpr guest::Function<0x00752990, u32(u32, u32, u32)> call_00752990;  // (from the original)
inline constexpr guest::Function<0x00752998, u32(u32, u32, u32)> call_00752998;  // (from the original)

u32 f_00762e98(u32 r0, u32 r1, u32 r2, float S0, float S1, float S2, float S3) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r7 = guest::cpu()->r[7];
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r8 = r0;
    u32 r4_1 = r1;
    u32 r0_1 = call_006a5e34(r0, r1, r2, guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    float S0_1 = guest::cpu()->s[0];
    float S1_1 = guest::cpu()->s[1];
    float S2_1 = guest::cpu()->s[2];
    float S3_1 = guest::cpu()->s[3];
    u32 r9 = r0_1;
    if (r0_1 != 0) {
        if ((*global_0094def4 & 1u) == 0) {
            call_002fe7dc(0x94def4u, r1_1, r2_1);  // (from the original)
            S0_1 = guest::cpu()->s[0];
            S1_1 = guest::cpu()->s[1];
            S2_1 = guest::cpu()->s[2];
            S3_1 = guest::cpu()->s[3];
        }
        u32 r6 = 0u;
        u32 r5 = r6;
        *global_009856c4 = *global_00ae5658;
        u32 r2_2 = *global_00ae565c;
        *global_009856c8 = r2_2;
        u32 r1_2 = *global_00ae5660;
        *global_009856cc = r1_2;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        guest::cpu()->s[2] = S2_1;
        guest::cpu()->s[3] = S3_1;
        u32 r0_2 = call_00752998(r9, r1_2, r2_2);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        S2 = guest::cpu()->s[2];
        S3 = guest::cpu()->s[3];
        u32 zf_1 = r0_2 == 0;
        u32 cf_1 = r0_2 >= 0u;
        if (cf_1 && !zf_1) {
            r7 = sxtb(r4_1);
        }
        if (!cf_1 || zf_1) {
            return 0u;
        }
        do {
            u32 r4 = 0u;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            guest::cpu()->s[2] = S2;
            guest::cpu()->s[3] = S3;
            u32 r0_3 = call_00752990(r9, r1, r2);
            u32 r1_3 = guest::cpu()->r[1];
            u32 r2_3 = guest::cpu()->r[2];
            S0 = guest::cpu()->s[0];
            S1 = guest::cpu()->s[1];
            S2 = guest::cpu()->s[2];
            S3 = guest::cpu()->s[3];
            if (r0_3 >= 0u && r0_3 != 0) {
                do {
                    guest::cpu()->s[0] = S0;
                    guest::cpu()->s[1] = S1;
                    guest::cpu()->s[2] = S2;
                    guest::cpu()->s[3] = S3;
                    u32 r0_4 = call_006c8928(r4, r5, 0u);
                    u32 r1_4 = guest::cpu()->r[1];
                    u32 r2_4 = guest::cpu()->r[2];
                    float S0_2 = guest::cpu()->s[0];
                    float S1_2 = guest::cpu()->s[1];
                    float S2_2 = guest::cpu()->s[2];
                    float S3_2 = guest::cpu()->s[3];
                    if (s32(r0_4) >= 0 && r0_4 == r7) {
                        call_006a5f0c(frame.at(0).addr(), r4, r5);
                        r1_4 = guest::cpu()->r[1];
                        r2_4 = guest::cpu()->r[2];
                        S3_2 = std::bit_cast<float>(*frame.at<u32>(0));
                        r6 += 1u;
                        S1_2 = std::bit_cast<float>(*global_009856c8);
                        S2_2 = std::bit_cast<float>(*global_009856cc);
                        *global_009856c4 = std::bit_cast<u32>(std::bit_cast<float>(*global_009856c4) + S3_2);
                        *global_009856c8 = std::bit_cast<u32>(S1_2 + std::bit_cast<float>(*frame.at<u32>(4)));
                        S0_2 = S2_2 + std::bit_cast<float>(*frame.at<u32>(8));
                        *global_009856cc = std::bit_cast<u32>(S0_2);
                    }
                    r4 += 1u;
                    guest::cpu()->s[0] = S0_2;
                    guest::cpu()->s[1] = S1_2;
                    guest::cpu()->s[2] = S2_2;
                    guest::cpu()->s[3] = S3_2;
                    r0_6 = call_00752990(r9, r1_4, r2_4);
                    r1_3 = guest::cpu()->r[1];
                    r2_3 = guest::cpu()->r[2];
                    S0 = guest::cpu()->s[0];
                    S1 = guest::cpu()->s[1];
                    S2 = guest::cpu()->s[2];
                    S3 = guest::cpu()->s[3];
                    guest::preempt();
                } while (r0_6 > r4);
            }
            r5 += 1u;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            guest::cpu()->s[2] = S2;
            guest::cpu()->s[3] = S3;
            r0_7 = call_00752998(r9, r1_3, r2_3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            S0 = guest::cpu()->s[0];
            S1 = guest::cpu()->s[1];
            S2 = guest::cpu()->s[2];
            S3 = guest::cpu()->s[3];
            guest::preempt();
        } while (r0_7 > r5);
        if (r6 == 0) {
            guest::cpu()->r[1] = r1;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            return 0u;
        }
        r1_1 = 0x9856c4u;  // (from the original)
        float S0_3 = std::bit_cast<float>(*global_00763034) / float(std::bit_cast<u32>(std::bit_cast<float>(r6)));
        *global_009856c4 = std::bit_cast<u32>(std::bit_cast<float>(*global_009856c4) * S0_3);
        *global_009856c8 = std::bit_cast<u32>(std::bit_cast<float>(*global_009856c8) * S0_3);
        S1_1 = std::bit_cast<float>(*global_009856cc);
        S0_1 = S1_1 * S0_3;
        *global_009856cc = std::bit_cast<u32>(S0_1);
        *gptr<u32>(r1_1 + 4u) = *gptr<u32>(r8 + 0x18u);  // (from the original)
        r0_1 = r1_1;
    }
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return r0_1;
}

}  // namespace d_00762e98
GUEST_EXPORT_FRAMED(0x00762e98, d_00762e98::f_00762e98, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_00763298: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00763298 {

struct __attribute__((packed)) Object_00763298_0 {
    u8 unknown_0[0x174];  // (not used here)
    u8 byte_174;
};
GUEST_OFFSET(Object_00763298_0, byte_174, 0x174);  // (from the original)

inline constexpr guest::Function<0x0062f03c, u32(u32, u32, u32, u32)> call_0062f03c;  // (from the original)
inline constexpr guest::Function<0x0062fb44, u32(u32, u32)> call_0062fb44;  // (from the original)
inline constexpr guest::Function<0x006c588c, u32(u32, u32)> call_006c588c;  // (from the original)
inline constexpr guest::Function<0x006c8778, u32(u32, u32)> call_006c8778;  // (from the original)

u32 f_00763298(gptr<Object_00763298_0> arg0, u32 r1) {
    u32 r1_1 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    u32 r0_6 = 0;
    u32 r0_1 = u32(arg0->byte_174) >> 1u & 1u;
    if (r0_1 == 0) {
        return r0_1;
    }
    u32 r0_2 = call_0062f03c(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 zf_1 = r0_2 == 3u || r0_2 == 4u;
    if (!zf_1) {
        u32 r0_3 = call_006c588c(r1, 0u);
        r1_1 = guest::cpu()->r[1];
        if (r0_3 == 0x14u) {  // (from the original)
            goto L_763338;
        }
        if (r0_3 == 0x11u || r0_3 == 0x17u) {  // (from the original)
            return 1u;
        }
        if (r0_3 == 0x16u) {  // (from the original)
            return 5u;
        }
        return r0_3 == 0x19u ? 9u : 0u;  // (from the original)
    }
    r0_5 = call_006c588c(r1, 0u);
    r1_2 = guest::cpu()->r[1];
    if (r0_5 == 0x16u) {  // (from the original)
        return 6u;
    }
    if (r0_5 != 0x14u) {  // (from the original)
        return 8u;
    }
    r0_6 = call_006c8778(r1, r1_2);
    if (r0_6 < 0x40u) {  // (from the original)
        return 7u;
    }
    return 8u;
L_763338:;
    u32 r0_7 = call_006c8778(r1, r1_1);
    u32 r1_4 = guest::cpu()->r[1];
    if (r0_7 < 0x40u) {  // (from the original)
        return 3u;
    }
    u32 r0_8 = call_0062fb44(r0_7, r1_4);
    return r0_8 == 0 ? 2u : 4u;
}

}  // namespace d_00763298
GUEST_EXPORT_FRAMED(0x00763298, d_00763298::f_00763298, 0x4010);  // pushes {r4, lr} first, as the original

// f_00763360: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00763360 {

struct __attribute__((packed)) Object_00763360_0 {
    u8 unknown_0[0x1ac];  // (not used here)
    u8 byte_1ac;
};
GUEST_OFFSET(Object_00763360_0, byte_1ac, 0x1ac);  // (from the original)

inline constexpr guest::Function<0x002fe8a8, u32(u32, u32, u32, u32)> call_002fe8a8;  // (from the original)
inline constexpr guest::Function<0x0072413c, u32(u32, u32, u32, u32)> call_0072413c;  // (from the original)

u32 f_00763360(gptr<Object_00763360_0> arg0, u32 r1, u32 r2) {
    guest::cpu()->r[13] -= 8u;
    u32 r0_1 = arg0->byte_1ac;
    u32 r0_2 = call_002fe8a8(r0_1, r1, r2, guest::cpu()->r[3]);
    u32 zf_1 = r0_2 == 0;
    if (!zf_1) {
        u32 res_1 = r0_2 + 0x6bd0u;  // (from the original)
        zf_1 = res_1 == 0;
        r0_2 = res_1;
    }
    if (zf_1) {
        guest::cpu()->r[13] += 8u;
        return 0u;
    }
    guest::cpu()->r[13] += 8u;
    return call_0072413c(r0_2, r1, 0u, guest::cpu()->r[3]);
}

}  // namespace d_00763360
GUEST_EXPORT(0x00763360, d_00763360::f_00763360);

// f_00763398: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00763398 {

struct __attribute__((packed)) Local_00763398_r0_4 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00763398_r0_4, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00763398_r0_4, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00763398_r0_4, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_00763398_r0_6 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00763398_r0_6, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00763398_r0_6, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00763398_r0_6, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_00763398_r1_4 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00763398_r1_4, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00763398_r1_4, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00763398_r1_4, word_8, 0x8);  // (from the original)

inline guest::global<u32, 0x00763468> global_00763468;  // (from the original)
inline guest::global<u32, 0x0085f2d0> global_0085f2d0;  // (from the original)
inline guest::global<u32, 0x0094def8> global_0094def8;  // (from the original)
inline guest::global<u32, 0x009856d0> global_009856d0;  // (from the original)
inline guest::global<u32, 0x009856d4> global_009856d4;  // (from the original)
inline guest::global<u32, 0x009856d8> global_009856d8;  // (from the original)
inline constexpr guest::Function<0x002fe7dd, u32(u32)> call_002fe7dc;  // (from the original)
inline constexpr guest::Function<0x00308340, u32(u32, u32, u32)> call_00308340;  // (from the original)
inline constexpr guest::Function<0x0056a224, u32(u32, u32, u32)> call_0056a224;  // (from the original)
inline constexpr guest::Function<0x005b5080, u32(u32, u32, u32)> call_005b5080;  // (from the original)
inline constexpr guest::Function<0x00762e98, u32(u32, u32, u32, u32)> call_00762e98;  // (from the original)

u32 f_00763398(u32 r0, u32 r1, u32 r2, float S0, float S1, float S2, float S3, float S4, float S5) {
    guest::StackFrame frame(0x44);  // the original's stack frame
    u32 r0_1 = call_00762e98(r0, r1, r2, guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    if (r0_1 == 0) {
        return r0_1;
    }
    u32 r0_2 = call_00308340(r0_1, r1_1, r2_1);
    u32 r0_3 = call_005b5080(r0_2, frame.at(0x28).addr(), r1);  // (from the original)
    u32 r2_2 = guest::cpu()->r[2];
    if (r0_3 == 0) {
        return r0_3;
    }
    float S0_4 = std::bit_cast<float>(*global_00763468);
    u32 r5_1 = sxth(u32(*frame.at<u16>(0x3a)) + 0x8000u);  // (from the original)
    float S2_3 = std::bit_cast<float>(*global_0085f2d0);
    gptr<Local_00763398_r0_4> r0_4 = gptr<Local_00763398_r0_4>(frame.at(0x14).addr());  // (from the original)
    r0_4->word_0 = std::bit_cast<u32>(S0_4);
    r0_4->word_4 = std::bit_cast<u32>(S0_4);
    r0_4->word_8 = std::bit_cast<u32>(S2_3);
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S0_4;
    guest::cpu()->s[2] = S2_3;
    call_0056a224(frame.at(0x14).addr(), r5_1, r2_2);  // (from the original)
    if ((*global_0094def8 & 1u) == 0) {
        call_002fe7dc(0x94def8u);  // (from the original)
    }
    gptr<Local_00763398_r1_4> r1_4 = gptr<Local_00763398_r1_4>(frame.at(0x14).addr());  // (from the original)
    gptr<Local_00763398_r0_6> r0_6 = gptr<Local_00763398_r0_6>(frame.at(4).addr());
    float S0_5 = std::bit_cast<float>(*gptr<u32>(r0_1)) + std::bit_cast<float>(r1_4->word_0);
    float S2_4 = std::bit_cast<float>(*gptr<u32>(r0_1 + 8)) + std::bit_cast<float>(r1_4->word_8);
    float S1_4 = std::bit_cast<float>(*gptr<u32>(r0_1 + 4)) + std::bit_cast<float>(r1_4->word_4);
    r0_6->word_0 = std::bit_cast<u32>(S0_5);
    r0_6->word_4 = std::bit_cast<u32>(S1_4);
    r0_6->word_8 = std::bit_cast<u32>(S2_4);
    *global_009856d0 = *frame.at<u32>(4);
    *global_009856d4 = *frame.at<u32>(8);
    *global_009856d8 = *frame.at<u32>(0xc);  // (from the original)
    guest::cpu()->r[1] = r1_4.addr();
    guest::cpu()->s[0] = S0_5;
    guest::cpu()->s[1] = S1_4;
    return 0x9856d0u;  // (from the original)
}

}  // namespace d_00763398
GUEST_EXPORT_FRAMED(0x00763398, d_00763398::f_00763398, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_007634d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007634d0 {

struct __attribute__((packed)) Object_007634d0_1 {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u8 unknown_20[0x189];  // (not used here)
    u8 byte_1a9;
    u8 unknown_1aa[0x27a];  // (not used here)
    u32 word_424;
    u32 word_428;
    u32 word_42c;
    u8 unknown_430[0x1108];  // (not used here)
    u32 word_1538;
};
GUEST_OFFSET(Object_007634d0_1, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_007634d0_1, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_007634d0_1, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_007634d0_1, byte_1a9, 0x1a9);  // (from the original)
GUEST_OFFSET(Object_007634d0_1, word_424, 0x424);  // (from the original)
GUEST_OFFSET(Object_007634d0_1, word_428, 0x428);  // (from the original)
GUEST_OFFSET(Object_007634d0_1, word_42c, 0x42c);  // (from the original)
GUEST_OFFSET(Object_007634d0_1, word_1538, 0x1538);  // (from the original)

inline guest::global<u32, 0x009856f4> global_009856f4;  // (from the original)
inline guest::global<u32, 0x009856f8> global_009856f8;  // (from the original)
inline guest::global<u32, 0x009856fc> global_009856fc;  // (from the original)
inline constexpr guest::Function<0x0064f390, u32(u32)> call_0064f390;  // (from the original)

void f_007634d0(u32 r0, gptr<Object_007634d0_1> arg1, float S0, float S1) {
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 b_1 = 0;
    u32 r0_4 = 0;
    u32 r0_1 = arg1->byte_1a9;
    if (r0_1 >= 0xebu) {  // (from the original)
        goto L_763570;
    }
    r0_2 = call_0064f390(r0_1);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (r0_2 == 0) {
        goto L_763570;
    }
    r0_3 = u32(*gptr<u8>(r0_2 + 7u)) << 0x1a;  // (from the original)
    b_1 = r0_3 >> 0x1e;  // (from the original)
    if (3u <= b_1) {
        goto L_763520;
    }
    r0_4 = r0_3 >> 0x1e;  // (from the original)
    if (r0_4 == 0) {
        goto L_763520;
    }
    if (r0_4 == 1u) {
        goto L_763554;
    }
    goto L_763570;
L_763520:;
    *global_009856f4 = arg1->word_14;
    *global_009856f8 = arg1->word_18;
    *global_009856fc = arg1->word_1c;
    S1 = std::bit_cast<float>(arg1->word_1538);
    S0 = std::bit_cast<float>(*global_009856f8) + S1;
    *global_009856f8 = std::bit_cast<u32>(S0);
    goto L_763570;
L_763554:;
    *global_009856f4 = arg1->word_424;
    *global_009856f8 = arg1->word_428;
    *global_009856fc = arg1->word_42c;
L_763570:;
    u32 r1_1 = *global_009856f8;
    u32 r2_1 = *global_009856fc;
    *gptr<u32>(r0) = *global_009856f4;
    *gptr<u32>(r0 + 4) = r1_1;
    *gptr<u32>(r0 + 8) = r2_1;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return;
}

}  // namespace d_007634d0
GUEST_EXPORT_FRAMED(0x007634d0, d_007634d0::f_007634d0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00763580: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00763580 {

struct __attribute__((packed)) Object_00763580_0 {
    u8 unknown_0[0x1a9];  // (not used here)
    u8 byte_1a9;
};
GUEST_OFFSET(Object_00763580_0, byte_1a9, 0x1a9);  // (from the original)


u32 f_00763580(gptr<Object_00763580_0> arg0) {
    u32 r0_1 = arg0->byte_1a9;
    if (r0_1 == 0xc7u || r0_1 == 0xc8u) {  // (from the original)
        return 1u;
    }
    if (r0_1 != 0xc9u && r0_1 != 0xcau) {  // (from the original)
        return 0u;
    }
    return 1u;
}

}  // namespace d_00763580
GUEST_EXPORT(0x00763580, d_00763580::f_00763580);

// f_007635a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007635a8 {

inline guest::global<u8, 0x0094fd2b> global_0094fd2b;  // (from the original)

u32 f_007635a8() {
    return u32(*global_0094fd2b) == 0 ? 1u : 0u;
}

}  // namespace d_007635a8
GUEST_EXPORT(0x007635a8, d_007635a8::f_007635a8);

// f_007635c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007635c4 {

struct __attribute__((packed)) Object_007635c4_0 {
    u8 unknown_0[0x2e];  // (not used here)
    u16 half_2e;
};
GUEST_OFFSET(Object_007635c4_0, half_2e, 0x2e);  // (from the original)

inline guest::global<u32, 0x007635f0> global_007635f0;  // (from the original)
inline constexpr guest::Function<0x0064ee94, u32(u32, u32, u32, u32)> call_0064ee94;  // (from the original)

void f_007635c4(gptr<Object_007635c4_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    r13 -= 8u;
    *gptr<u16>(r13) = u16(u32(arg0->half_2e));
    u32 r2_1 = *gptr<u32>(r13);
    float S0_1 = std::bit_cast<float>(*global_007635f0);
    r13 += 8u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    call_0064ee94(r1, r0 + 0x14u, r2_1, 1u);  // (from the original)
    return;
}

}  // namespace d_007635c4
GUEST_EXPORT(0x007635c4, d_007635c4::f_007635c4);

// f_007635f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007635f4 {

inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32, u32)> call_003171b4;  // (from the original)
inline constexpr guest::Function<0x00597790, u32(u32, u32, u32)> call_00597790;  // (from the original)

u32 f_007635f4(u32 r0_unused, u32 r1) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    call_003171b4(frame.at(0).addr(), frame.at(4).addr(), r1, guest::cpu()->r[3]);
    u32 r0_3 = call_00597790(*frame.at<u32>(0), *frame.at<u32>(4), guest::cpu()->r[2]);
    return r0_3;
}

}  // namespace d_007635f4
GUEST_EXPORT_FRAMED(0x007635f4, d_007635f4::f_007635f4, 0x4000);  // pushes {lr} first, as the original

// f_007636ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007636ec {

inline constexpr guest::Function<0x006a6dbc, u32(u32, u32, u32, u32)> call_006a6dbc;  // (from the original)
inline constexpr guest::Function<0x006c588c, u32(u32, u32, u32, u32)> call_006c588c;  // (from the original)
inline constexpr guest::Function<0x007648b8, u32(u32, u32, u32, u32)> call_007648b8;  // (from the original)

void f_007636ec(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    call_006a6dbc(frame.at(4).addr(), r1, r2, r3);
    u32 r0_3 = call_006c588c(frame.at(4).addr(), 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    *frame.at<u32>(0) = frame.at(4).addr();
    if (r0_3 != 0x16u) {  // (from the original)
        call_007648b8(r0, 0u, 0u, 0x199u);  // (from the original)
        return;
    }
    call_007648b8(r0, 0u, 0u, 0x198u);  // (from the original)
    return;
}

}  // namespace d_007636ec
GUEST_EXPORT_FRAMED(0x007636ec, d_007636ec::f_007636ec, 0x4010);  // pushes {r4, lr} first, as the original

// f_00763758: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00763758 {

struct __attribute__((packed)) Object_00763758_0 {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
};
GUEST_OFFSET(Object_00763758_0, byte_171, 0x171);  // (from the original)

inline constexpr guest::Function<0x00596334, u32(u32, u32, u32, u32)> call_00596334;  // (from the original)

void f_00763758(gptr<Object_00763758_0> arg0) {
    u32 r0_1 = u32(arg0->byte_171) >> 5u & 1u;
    if (r0_1 == 0) {
        return;
    }
    call_00596334(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
}

}  // namespace d_00763758
GUEST_EXPORT(0x00763758, d_00763758::f_00763758);

// f_00763770: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00763770 {

struct __attribute__((packed)) Object_00763770_0 {
    u8 unknown_0[0x1ac];  // (not used here)
    u8 byte_1ac;
};
GUEST_OFFSET(Object_00763770_0, byte_1ac, 0x1ac);  // (from the original)

inline constexpr guest::Function<0x002fe8a8, u32(u32, u32, u32, u32)> call_002fe8a8;  // (from the original)
inline constexpr guest::Function<0x0059d164, u32(u32, u32, u32, u32)> call_0059d164;  // (from the original)
inline constexpr guest::Function<0x0071a844, u32(u32, u32, u32, u32)> call_0071a844;  // (from the original)
inline constexpr guest::Function<0x007680a0, u32(u32, u32, u32, u32)> call_007680a0;  // (from the original)
inline constexpr guest::Function<0x007686e8, u32(u32, u32, u32, u32)> call_007686e8;  // (from the original)

void f_00763770(gptr<Object_00763770_0> arg0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 r0 = arg0.addr();
    u32 r0_3 = 0;
    float S0_3 = 0;
    u32 r2_3 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    u32 r4 = r0;
    u32 r6 = r1;
    u32 r0_1 = arg0->byte_1ac;
    u32 r7 = r2;
    u32 r0_2 = call_002fe8a8(r0_1, r1, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    u32 r3_1 = guest::cpu()->r[3];
    float S0_1 = guest::cpu()->s[0];
    if (r0_2 == 0) {
        r0_3 = 0x95bfdcu;  // (from the original)
    } else {
        r0_3 = call_0071a844(r0_2 + 0xau, r1_1, r2_1, r3_1);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
        S0_1 = guest::cpu()->s[0];
    }
    guest::cpu()->s[0] = S0_1;
    u32 r0_5 = call_007686e8(r0_3, r1_1, r2_1, r3_1);
    u32 r1_2 = guest::cpu()->r[1];
    u32 r2_2 = guest::cpu()->r[2];
    u32 r3_2 = guest::cpu()->r[3];
    float S0_2 = guest::cpu()->s[0];
    if (r0_5 == 0) {
        goto L_7637cc;
    } else {
        r3 = 1u;
    }
    S0_3 = std::bit_cast<float>(*gptr<u32>(r4 + 0x18u));  // (from the original)
    r2_3 = u32(*gptr<u8>(r4 + 0x171u)) >> 5u & 1u;  // (from the original)
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->s[0] = S0_3;
    call_0059d164(r6, r7, r2_3, r3);
    return;
L_7637cc:;
    guest::cpu()->s[0] = S0_2;
    u32 r0_6 = call_007680a0(r0_3, r1_2, r2_2, r3_2);
    r3 = r0_6 == 0 ? 0u : 2u;
    S0_3 = std::bit_cast<float>(*gptr<u32>(r4 + 0x18u));  // (from the original)
    r2_3 = u32(*gptr<u8>(r4 + 0x171u)) >> 5u & 1u;  // (from the original)
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->s[0] = S0_3;
    call_0059d164(r6, r7, r2_3, r3);
    return;
}

}  // namespace d_00763770
GUEST_EXPORT(0x00763770, d_00763770::f_00763770);

// f_00763c44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00763c44 {

inline guest::global<u32, 0x0085f2cc> global_0085f2cc;  // (from the original)
inline guest::global<u32, 0x0094df64> global_0094df64;  // (from the original)
inline guest::global<u32, 0x00985754> global_00985754;  // (from the original)
inline guest::global<u32, 0x00985758> global_00985758;  // (from the original)
inline guest::global<u32, 0x0098575c> global_0098575c;  // (from the original)
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;  // (from the original)
inline constexpr guest::Function<0x002ff8b0, u32(u32, u32)> call_002ff8b0;  // (from the original)
inline constexpr guest::Function<0x00307220, u32(u32, u32)> call_00307220;  // (from the original)
inline constexpr guest::Function<0x003094f0, u32(u32, u32)> call_003094f0;  // (from the original)
inline constexpr guest::Function<0x006c5c60, u32(u32, u32)> call_006c5c60;  // (from the original)
inline constexpr guest::Function<0x00765e28, u32(u32, u32, u32, u32)> call_00765e28;  // (from the original)

u32 f_00763c44(u32 r0, u32 r1, float S0, float S1) {
    u32 r13 = guest::cpu()->r[13];
    r13 -= 0x18u;  // (from the original)
    if ((*global_0094df64 & 1u) == 0) {
        guest::cpu()->r[13] = r13;
        call_002fe7dc(0x94df64u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
    }
    *global_00985754 = *gptr<u32>(r0 + 0x14u);  // (from the original)
    *global_00985758 = *gptr<u32>(r0 + 0x18u);  // (from the original)
    u32 r1_1 = *gptr<u32>(r0 + 0x1cu);  // (from the original)
    *global_0098575c = r1_1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    u32 r0_1 = call_00765e28(r0, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_2 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        r13 += 0x18u;  // (from the original)
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    u32 r0_2 = *gptr<u8>(r0 + 0x1acu);  // (from the original)
    guest::cpu()->r[13] = r13;
    u32 r0_3 = call_002ff8b0(r0_2, r1_2);
    u32 r1_3 = guest::cpu()->r[1];
    guest::cpu()->r[13] = r13;
    u32 r0_4 = call_003094f0(r0_3, r1_3);
    if (r0_4 == 0) {
        r13 += 0x18u;  // (from the original)
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    guest::cpu()->r[13] = r13;
    call_00307220(r13, r0_3);
    float S1_4 = std::bit_cast<float>(*global_0085f2cc);
    float S0_4 = std::bit_cast<float>(*gptr<u32>(r13 + 8u)) + S1_4;
    *gptr<u32>(r13 + 8u) = std::bit_cast<u32>(S0_4);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_4;
    call_006c5c60(r13, 0u);
    float S0_5 = guest::cpu()->s[0];
    *gptr<u32>(r13 + 4u) = std::bit_cast<u32>(S0_5);
    *global_00985754 = *gptr<u32>(r13);
    *global_00985758 = *gptr<u32>(r13 + 4u);
    u32 r1_5 = *gptr<u32>(r13 + 8u);
    *global_0098575c = r1_5;
    r13 += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_5;
    return 0x985754u;  // (from the original)
}

}  // namespace d_00763c44
GUEST_EXPORT(0x00763c44, d_00763c44::f_00763c44);

// f_00763d34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00763d34 {

inline guest::global<u8, 0x009506b0> global_009506b0;  // (from the original)
inline guest::global<u32, 0x009506b4> global_009506b4;  // (from the original)
inline constexpr guest::Function<0x006dfde8, u32(u32)> call_006dfde8;  // (from the original)

void f_00763d34() {
    if (u32(*global_009506b0) != 0xffu) {  // (from the original)
        return;
    }
    u32 r0_1 = *global_009506b4;
    if (r0_1 == 0) {
        return;
    }
    u32 r0_2 = call_006dfde8(r0_1);
    if (r0_2 == 0) {
        return;
    }
    *gptr<u8>(r0_2 + 0x2f1fu) = 1;  // (from the original)
    return;
}

}  // namespace d_00763d34
GUEST_EXPORT_FRAMED(0x00763d34, d_00763d34::f_00763d34, 0x4010);  // pushes {r4, lr} first, as the original

// f_00763d80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00763d80 {

struct __attribute__((packed)) Local_00763d80_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00763d80_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00763d80_ea_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_00763d80_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00763d80_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00763d80_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00763d80_ea_2, word_8, 0x8);  // (from the original)

inline guest::global<u8, 0x009506b0> global_009506b0;  // (from the original)
inline guest::global<u32, 0x009506b4> global_009506b4;  // (from the original)
inline constexpr guest::Function<0x006dfde8, u32(u32)> call_006dfde8;  // (from the original)

void f_00763d80(u32 r0, u32 r1) {
    u32 r1_1 = 0;
    gptr<Local_00763d80_ea_1> ea_1 = gptr<Local_00763d80_ea_1>(0u);
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r5 = r0;
    u32 r4 = r1;
    if (u32(*global_009506b0) == 0xffu) {  // (from the original)
        goto L_763db4;
    }
    r1_1 = *gptr<u32>(r1 + 0x1cu);  // (from the original)
    ea_1 = gptr<Local_00763d80_ea_1>(r4 + 0x14u);  // (from the original)
    r0_1 = ea_1->word_0;
    r2_1 = ea_1->word_4;
    *gptr<u32>(r5 + 8u) = r1_1;
    *gptr<u32>(r5) = r0_1;
    *gptr<u32>(r5 + 4) = r2_1;
    guest::cpu()->r[1] = r1_1;
    return;
L_763db4:;
    u32 r0_2 = *global_009506b4;
    if (r0_2 == 0) {
        r1_1 = *gptr<u32>(r1 + 0x1cu);  // (from the original)
        ea_1 = gptr<Local_00763d80_ea_1>(r4 + 0x14u);  // (from the original)
        r0_1 = ea_1->word_0;
        r2_1 = ea_1->word_4;
        *gptr<u32>(r5 + 8u) = r1_1;
        *gptr<u32>(r5) = r0_1;
        *gptr<u32>(r5 + 4) = r2_1;
        guest::cpu()->r[1] = r1_1;
        return;
    }
    u32 r0_3 = call_006dfde8(r0_2);
    if (r0_3 != 0) {
        u32 r1_2 = *gptr<u32>(r0_3 + 0x18u);  // (from the original)
        u32 r2_2 = *gptr<u32>(r0_3 + 0x14u);  // (from the original)
        *gptr<u32>(r5 + 8u) = *gptr<u32>(r0_3 + 0x1cu);  // (from the original)
        *gptr<u32>(r5 + 4u) = r1_2;
        *gptr<u32>(r5) = r2_2;
        guest::cpu()->r[1] = r1_2;
        return;
    }
    gptr<Local_00763d80_ea_2> ea_2 = gptr<Local_00763d80_ea_2>(r4 + 0x14u);  // (from the original)
    u32 r1_3 = ea_2->word_4;
    u32 r2_3 = ea_2->word_8;
    *gptr<u32>(r5) = ea_2->word_0;
    *gptr<u32>(r5 + 4) = r1_3;
    *gptr<u32>(r5 + 8) = r2_3;
    guest::cpu()->r[1] = r1_3;
    return;
}

}  // namespace d_00763d80
GUEST_EXPORT_FRAMED(0x00763d80, d_00763d80::f_00763d80, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00764500: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00764500 {

struct __attribute__((packed)) Object_00764500_0 {
    u8 unknown_0[0x2e];  // (not used here)
    u16 half_2e;
    u8 unknown_30[0x141];  // (not used here)
    u8 byte_171;
    u8 unknown_172[0x2];  // (not used here)
    u8 byte_174;
    u8 unknown_175[0x752];  // (not used here)
    u8 byte_8c7;
};
GUEST_OFFSET(Object_00764500_0, half_2e, 0x2e);  // (from the original)
GUEST_OFFSET(Object_00764500_0, byte_171, 0x171);  // (from the original)
GUEST_OFFSET(Object_00764500_0, byte_174, 0x174);  // (from the original)
GUEST_OFFSET(Object_00764500_0, byte_8c7, 0x8c7);  // (from the original)

inline guest::global<u32, 0x0085f2d0> global_0085f2d0;  // (from the original)
inline constexpr guest::Function<0x004e0cb0, u32(u32, u32, u32)> call_004e0cb0;  // (from the original)
inline constexpr guest::Function<0x004e0f68, u32(u32, u32, u32, u32)> call_004e0f68;  // (from the original)
inline constexpr guest::Function<0x004e99f0, u32(u32, u32, u32)> call_004e99f0;  // (from the original)
inline constexpr guest::Function<0x005d43f4, u32(u32, u32, u32)> call_005d43f4;  // (from the original)
inline constexpr guest::Function<0x006c5c60, u32(u32, u32, u32)> call_006c5c60;  // (from the original)
inline constexpr guest::Function<0x007500b4, u32(u32, u32, u32)> call_007500b4;  // (from the original)
inline constexpr guest::Function<0x00750894, u32(u32, u32, u32)> call_00750894;  // (from the original)

u32 f_00764500(gptr<Object_00764500_0> arg0, u32 r1_unused, u32 r2, float S0) {
    guest::StackFrame frame(0x14);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r1_1 = u32(arg0->byte_171) >> 5u & 1u;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r0_1 = arg0->byte_174;
    if ((r0_1 & 1u) == 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r0_2 = call_004e0f68(r0_1, r1_1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    if (r0_2 == 0) {
        return 0u;
    }
    u32 r0_3 = u32(arg0->byte_8c7) & 1u;
    if (r0_3 == 0) {
        return r0_3;
    }
    u32 r5_1 = frame.at(8).addr();
    *frame.at<u16>(4) = u16(u32(arg0->half_2e));
    u32 r2_1 = *frame.at<u32>(4);
    float S0_1 = std::bit_cast<float>(*global_0085f2d0);
    guest::cpu()->s[0] = S0_1;
    call_005d43f4(r5_1, r0 + 0x14u, r2_1);  // (from the original)
    u32 r2_2 = guest::cpu()->r[2];
    u32 r0_4 = call_006c5c60(r5_1, 0u, r2_2);
    u32 r1_3 = guest::cpu()->r[1];
    u32 r2_3 = guest::cpu()->r[2];
    float S0_3 = guest::cpu()->s[0];
    *frame.at<u32>(0xc) = std::bit_cast<u32>(S0_3);  // (from the original)
    guest::cpu()->s[0] = S0_3;
    u32 r0_5 = call_004e0cb0(r0_4, r1_3, r2_3);
    u32 r0_6 = call_004e99f0(r0_5, frame.at(8).addr(), 1u);
    r1_1 = guest::cpu()->r[1];
    u32 r2_4 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    u32 r4_1 = r0_6;
    if (r0_6 == 0) {
        goto L_7645a8;
    }
    r0_6 = call_00750894(r0_6, r1_1, r2_4);
    r1_1 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    if (r0_6 != 0) {
        goto L_7645a8;
    }
    r0_6 = call_007500b4(r4_1, r1_1, r2_4);
    r1_1 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    if (r0_6 == 0) {
        return 1u;
    }
L_7645a8:;
    guest::cpu()->s[0] = S0;
    u32 r0_7 = call_004e0cb0(r0_6, r1_1, r2_4);
    u32 r0_8 = call_004e99f0(r0_7, frame.at(8).addr(), 0u);
    r1_1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    if (r0_8 == 0) {
        return 0u;
    }
    u32 r0_9 = call_00750894(r0_8, r1_1, 0u);
    r1_1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    if (r0_9 != 0) {
        return 0u;
    }
    u32 r0_10 = call_007500b4(r0_8, r1_1, 0u);
    r1_1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    if (r0_10 == 0) {
        return 1u;
    }
    return 0u;
}

}  // namespace d_00764500
GUEST_EXPORT_FRAMED(0x00764500, d_00764500::f_00764500, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00764608: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00764608 {

inline constexpr guest::Function<0x004e40e4, u32(u32, u32, u32, u32)> call_004e40e4;  // (from the original)

u32 f_00764608(u32 r0_unused, u32 r1) {
    return call_004e40e4(r1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00764608
GUEST_EXPORT(0x00764608, d_00764608::f_00764608);

// f_00764610: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00764610 {

inline constexpr guest::Function<0x002fc934, u32(u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x006d3158, u32(u32)> call_006d3158;  // (from the original)

void f_00764610(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r0_2 = call_002fc934(frame.at(0).addr(), guest::cpu()->r[1]);
    call_006d3158(r0_2);
    return;
}

}  // namespace d_00764610
GUEST_EXPORT_FRAMED(0x00764610, d_00764610::f_00764610, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00764634: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00764634 {

inline constexpr guest::Function<0x002fc934, u32(u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x006d318c, u32(u32, u32)> call_006d318c;  // (from the original)

void f_00764634(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r0_2 = call_002fc934(frame.at(0).addr(), r1);
    call_006d318c(r0_2, r2);
    return;
}

}  // namespace d_00764634
GUEST_EXPORT_FRAMED(0x00764634, d_00764634::f_00764634, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00764660: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00764660 {

struct __attribute__((packed)) Local_00764660_r1_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00764660_r1_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00764660_r1_1, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x0076470c> global_0076470c;  // (from the original)
inline guest::global<u32, 0x00764710> global_00764710;  // (from the original)
inline guest::global<u32, 0x0085f2cc> global_0085f2cc;  // (from the original)
inline guest::global<u32, 0x0085f2d0> global_0085f2d0;  // (from the original)
inline guest::global<u32, 0x0085f2d8> global_0085f2d8;  // (from the original)
inline constexpr guest::Function<0x0023ffb8, u32(u32, u32, u32, u32)> call_0023ffb8;  // (from the original)
inline constexpr guest::Function<0x006c5c60, u32(u32, u32, u32)> call_006c5c60;  // (from the original)

void f_00764660(u32 r0, u32 r1, u32 r2, float S0, float S1, float S2, float S3, float S4) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r0_2 = call_0023ffb8(frame.at(0).addr(), 0x5cu, r2, guest::cpu()->r[3]);  // (from the original)
    u32 r2_1 = guest::cpu()->r[2];
    u32 zf_1 = r0_2 == 0;
    if (zf_1) {
        gptr<Local_00764660_r1_1> r1_1 = gptr<Local_00764660_r1_1>(r1 + 0x14u);  // (from the original)
        float S0_1 = std::bit_cast<float>(r1_1->word_0);
        float S1_1 = std::bit_cast<float>(r1_1->word_4);
        u32 r1_2 = *gptr<u32>(r1 + 0x1cu);  // (from the original)
        *gptr<u32>(r0) = std::bit_cast<u32>(S0_1);
        *gptr<u32>(r0 + 4) = std::bit_cast<u32>(S1_1);
        *gptr<u32>(r0 + 8u) = r1_2;
    } else {
        r2_1 = frame.at(4).addr();
        float S0_2 = std::bit_cast<float>(*gptr<u32>(r2_1));
        float S1_2 = std::bit_cast<float>(*gptr<u32>(r2_1 + 4));
        *gptr<u32>(r0) = *frame.at<u32>(0);
        *gptr<u32>(r0 + 4u) = std::bit_cast<u32>(S0_2);
        *gptr<u32>(r0 + 8u) = std::bit_cast<u32>(S1_2);
    }
    float S4_1 = std::bit_cast<float>(*global_0076470c);
    float S1_3 = std::bit_cast<float>(*global_00764710);
    float S3_1 = std::bit_cast<float>(*global_0085f2d8);
    *gptr<u32>(r0) = std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r0)) - (std::bit_cast<float>(*global_0085f2cc) + S3_1 * S4_1));
    float S2_1 = std::bit_cast<float>(*global_0085f2d0);
    float S0_3 = std::bit_cast<float>(*gptr<u32>(r0 + 8u)) + S2_1 * S1_3;
    *gptr<u32>(r0 + 8u) = std::bit_cast<u32>(S0_3);
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_3;
    guest::cpu()->s[2] = S2_1;
    guest::cpu()->s[3] = S3_1;
    guest::cpu()->s[4] = S4_1;
    call_006c5c60(r0, 0u, r2_1);
    float S0_4 = guest::cpu()->s[0];
    *gptr<u32>(r0 + 4u) = std::bit_cast<u32>(S0_4);
    return;
}

}  // namespace d_00764660
GUEST_EXPORT_FRAMED(0x00764660, d_00764660::f_00764660, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_007648b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007648b8 {

struct __attribute__((packed)) Object_007648b8_0 {
    u8 unknown_0[0x2e];  // (not used here)
    u16 half_2e;
    u8 unknown_30[0x143];  // (not used here)
    u8 byte_173;
};
GUEST_OFFSET(Object_007648b8_0, half_2e, 0x2e);  // (from the original)
GUEST_OFFSET(Object_007648b8_0, byte_173, 0x173);  // (from the original)

struct __attribute__((packed)) Object_007648b8_1 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_007648b8_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_007648b8_1, word_10, 0x10);  // (from the original)

struct __attribute__((packed)) Local_007648b8_r1_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_007648b8_r1_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_007648b8_r1_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_007648b8_r1_1, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_007648b8_r2_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_007648b8_r2_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_007648b8_r2_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_007648b8_r2_1, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x002073dc, u32(u32, u32, u32, u32)> call_002073dc;  // (from the original)
inline constexpr guest::Function<0x002075d4, u32(u32, u32, u32, u32)> call_002075d4;  // (from the original)
inline constexpr guest::Function<0x002e6368, u32(u32, u32, u32, u32)> call_002e6368;  // (from the original)

void f_007648b8(gptr<Object_007648b8_0> arg0, gptr<Object_007648b8_1> arg1, u32 r2, u32 r3, float S0, float S1) {
    guest::StackFrame frame(0x20);  // the original's stack frame
    u32 r1 = arg1.addr();
    gptr<Local_007648b8_r1_1> r1_1 = gptr<Local_007648b8_r1_1>(*frame.at<u32>(0x38));  // (from the original)
    if ((u32(arg0->byte_173) >> 7) != 0) {
        return;
    }
    float S0_1 = std::bit_cast<float>(r1_1->word_0);
    float S1_1 = std::bit_cast<float>(r1_1->word_4);
    float S2_1 = std::bit_cast<float>(r1_1->word_8);
    gptr<Local_007648b8_r2_1> r2_1 = gptr<Local_007648b8_r2_1>(frame.at(0x14).addr());  // (from the original)
    r2_1->word_0 = std::bit_cast<u32>(S0_1);
    r2_1->word_4 = std::bit_cast<u32>(S1_1);
    r2_1->word_8 = std::bit_cast<u32>(S2_1);
    u32 r1_2 = arg0->half_2e;
    *frame.at<u16>(0xc) = 0;  // (from the original)
    *frame.at<u16>(0xe) = u16(r1_2);  // (from the original)
    *frame.at<u16>(0x10) = 0;  // (from the original)
    if (r1 != 0) {
        u32 r0_1 = arg1->word_c;
        if (r0_1 != 0) {
            u32 r1_3 = arg1->word_10;
            if (r1_3 == *gptr<u32>(r0_1 + 0xcu)) {  // (from the original)
                guest::cpu()->s[0] = S0_1;
                guest::cpu()->s[1] = S1_1;
                guest::cpu()->s[2] = S2_1;
                call_002e6368(r1, r1_3, r2_1.addr(), r3);
                S0_1 = guest::cpu()->s[0];
                S1_1 = guest::cpu()->s[1];
                S2_1 = guest::cpu()->s[2];
            }
        }
        *frame.at<u32>(8) = 0;
        *frame.at<u32>(0) = 0xae5664;  // (from the original)
        *frame.at<u32>(4) = 1;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        guest::cpu()->s[2] = S2_1;
        call_002073dc(r1, r3, frame.at(0x14).addr(), frame.at(0xc).addr());  // (from the original)
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
    } else {
        *frame.at<u32>(4) = 0;
        *frame.at<u32>(0) = 1;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        guest::cpu()->s[2] = S2_1;
        call_002075d4(r3, frame.at(0x14).addr(), frame.at(0xc).addr(), 0xae5664u);  // (from the original)
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
    }
    if (r2 == 0) {
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return;
    }
    *gptr<u16>(r2) = u16(u32(*frame.at<u16>(0xc)));  // (from the original)
    *gptr<u16>(r2 + 2u) = u16(u32(*frame.at<u16>(0xe)));  // (from the original)
    *gptr<u16>(r2 + 4u) = u16(u32(*frame.at<u16>(0x10)));  // (from the original)
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return;
}

}  // namespace d_007648b8
GUEST_EXPORT_FRAMED(0x007648b8, d_007648b8::f_007648b8, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00764af8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00764af8 {

struct __attribute__((packed)) Object_00764af8_0 {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
    u8 unknown_172[0x3a];  // (not used here)
    u8 byte_1ac;
};
GUEST_OFFSET(Object_00764af8_0, byte_171, 0x171);  // (from the original)
GUEST_OFFSET(Object_00764af8_0, byte_1ac, 0x1ac);  // (from the original)

inline constexpr guest::Function<0x002fe8a8, u32(u32, u32, u32, u32)> call_002fe8a8;  // (from the original)
inline constexpr guest::Function<0x00598464, u32(u32, u32, u32, u32)> call_00598464;  // (from the original)
inline constexpr guest::Function<0x0071a844, u32(u32, u32, u32, u32)> call_0071a844;  // (from the original)
inline constexpr guest::Function<0x007680a0, u32(u32, u32, u32, u32)> call_007680a0;  // (from the original)
inline constexpr guest::Function<0x007686e8, u32(u32, u32, u32, u32)> call_007686e8;  // (from the original)

void f_00764af8(gptr<Object_00764af8_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    u32 r5 = r1;
    u32 r6 = r2;
    u32 r1_1 = u32(arg0->byte_171) >> 5u & 1u;
    if (r1_1 != 0) {
        u32 r0_1 = arg0->byte_1ac;
        u32 r0_2 = call_002fe8a8(r0_1, r1_1, r2, r3);
        u32 r1_2 = guest::cpu()->r[1];
        u32 r2_1 = guest::cpu()->r[2];
        u32 r3_1 = guest::cpu()->r[3];
        if (r0_2 == 0) {
            r0_3 = 0x95bfdcu;  // (from the original)
        } else {
            r0_3 = call_0071a844(r0_2 + 0xau, r1_2, r2_1, r3_1);  // (from the original)
            r1_2 = guest::cpu()->r[1];
            r2_1 = guest::cpu()->r[2];
            r3_1 = guest::cpu()->r[3];
        }
        u32 r0_5 = call_007686e8(r0_3, r1_2, r2_1, r3_1);
        u32 r1_3 = guest::cpu()->r[1];
        u32 r2_2 = guest::cpu()->r[2];
        u32 r3_2 = guest::cpu()->r[3];
        if (r0_5 == 0) {
            goto L_764b54;
        } else {
            r2 = 1u;
        }
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        call_00598464(r5, r6, r2, 0u);
        return;
L_764b54:;
        u32 r0_6 = call_007680a0(r0_3, r1_3, r2_2, r3_2);
        r2 = r0_6 == 0 ? 0u : 2u;
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        call_00598464(r5, r6, r2, 0u);
        return;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_00764af8
GUEST_EXPORT(0x00764af8, d_00764af8::f_00764af8);

// f_00764b74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00764b74 {

struct __attribute__((packed)) Object_00764b74_0 {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
};
GUEST_OFFSET(Object_00764b74_0, byte_171, 0x171);  // (from the original)

inline constexpr guest::Function<0x005964ec, u32(u32, u32, u32, u32)> call_005964ec;  // (from the original)

void f_00764b74(gptr<Object_00764b74_0> arg0) {
    u32 r0_1 = u32(arg0->byte_171) >> 5u & 1u;
    if (r0_1 == 0) {
        return;
    }
    call_005964ec(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
}

}  // namespace d_00764b74
GUEST_EXPORT(0x00764b74, d_00764b74::f_00764b74);

// f_00764dc8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00764dc8 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x0030b6b8, u32(u32, u32)> call_0030b6b8;  // (from the original)
inline constexpr guest::Function<0x004e6200, u32(u32, u32, u32, u32)> call_004e6200;  // (from the original)

u32 f_00764dc8(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r0_1 = call_002f74c8(r0, r1, guest::cpu()->r[2], r3);
    u32 r0_2 = call_002f74e0(0x20u, r0_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r3_2 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        return r0_2;
    }
    call_004e6200(frame.at(0).addr(), r0 + 0x14u, guest::cpu()->r[2], r3_2);  // (from the original)
    u32 r0_5 = call_0030b6b8(frame.at(0).addr(), guest::cpu()->r[1]);
    u32 res_1 = r0_5 - 0x2070u;  // (from the original)
    u32 zf_1 = res_1 == 0;
    if (!zf_1) {
        zf_1 = res_1 == 1u;
    }
    if (!zf_1) {
        zf_1 = res_1 == 2u;
    }
    if (!zf_1) {
        return 0u;
    }
    return 1u;
}

}  // namespace d_00764dc8
GUEST_EXPORT_FRAMED(0x00764dc8, d_00764dc8::f_00764dc8, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0076507c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076507c {

struct __attribute__((packed)) Object_0076507c_0 {
    u8 unknown_0[0x1ac];  // (not used here)
    u8 byte_1ac;
};
GUEST_OFFSET(Object_0076507c_0, byte_1ac, 0x1ac);  // (from the original)

inline constexpr guest::Function<0x002fe8a8, u32(u32, u32, u32, u32)> call_002fe8a8;  // (from the original)
inline constexpr guest::Function<0x0076fd38, u32(u32, u32, u32, u32)> call_0076fd38;  // (from the original)

u32 f_0076507c(gptr<Object_0076507c_0> arg0, u32 r1) {
    guest::cpu()->r[13] -= 8u;
    u32 r0_1 = arg0->byte_1ac;
    u32 r0_2 = call_002fe8a8(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_2 == 0) {
        guest::cpu()->r[13] += 8u;
        return r0_2;
    }
    guest::cpu()->r[13] += 8u;
    return call_0076fd38(r0_2 + 0x6c20u, 0x27u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0076507c
GUEST_EXPORT(0x0076507c, d_0076507c::f_0076507c);

// f_007650ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007650ac {

inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32, u32)> call_003171b4;  // (from the original)
inline constexpr guest::Function<0x005983ac, u32(u32, u32, u32)> call_005983ac;  // (from the original)

u32 f_007650ac(u32 r0_unused, u32 r1) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    call_003171b4(frame.at(0).addr(), frame.at(4).addr(), r1, guest::cpu()->r[3]);
    u32 r0_3 = call_005983ac(*frame.at<u32>(0), *frame.at<u32>(4), guest::cpu()->r[2]);
    return r0_3;
}

}  // namespace d_007650ac
GUEST_EXPORT_FRAMED(0x007650ac, d_007650ac::f_007650ac, 0x4000);  // pushes {lr} first, as the original

// f_007650d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007650d4 {

struct __attribute__((packed)) Local_007650d4_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_007650d4_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_007650d4_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_007650d4_ea_1, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_007650d4_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_007650d4_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_007650d4_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_007650d4_ea_2, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32, u32)> call_003171b4;  // (from the original)
inline constexpr guest::Function<0x00597678, u32(u32, u32, u32)> call_00597678;  // (from the original)
inline constexpr guest::Function<0x00597c30, u32(u32, u32, u32)> call_00597c30;  // (from the original)

u32 f_007650d4(u32 r0_unused, u32 r1) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_007650d4_ea_1> ea_1 = gptr<Local_007650d4_ea_1>(frame.at(0xc).addr());  // (from the original)
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r14;
    call_003171b4(frame.at(0).addr(), frame.at(4).addr(), r1, guest::cpu()->r[3]);
    u32 r4_1 = *frame.at<u32>(4);
    u32 r5_1 = *frame.at<u32>(0);
    u32 r0_2 = call_00597c30(r5_1, r4_1, guest::cpu()->r[2]);
    if (s32(r0_2) < 0) {
        r0_2 = call_00597678(r5_1, r4_1, guest::cpu()->r[2]);
    }
    gptr<Local_007650d4_ea_2> ea_2 = gptr<Local_007650d4_ea_2>(frame.at(0xc).addr());  // (from the original)
    u32 r4_2 = ea_2->word_0;
    u32 r5_2 = ea_2->word_4;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_2;
    return r0_2;
}

}  // namespace d_007650d4
GUEST_EXPORT(0x007650d4, d_007650d4::f_007650d4);

// f_0076511c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076511c {

inline constexpr guest::Function<0x002fc934, u32(u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x006d34e8, u32(u32)> call_006d34e8;  // (from the original)

void f_0076511c(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r0_2 = call_002fc934(frame.at(0).addr(), guest::cpu()->r[1]);
    call_006d34e8(r0_2);
    return;
}

}  // namespace d_0076511c
GUEST_EXPORT_FRAMED(0x0076511c, d_0076511c::f_0076511c, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00765140: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00765140 {

inline constexpr guest::Function<0x002fc934, u32(u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x006d31e4, u32(u32)> call_006d31e4;  // (from the original)

void f_00765140(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r0_2 = call_002fc934(frame.at(0).addr(), guest::cpu()->r[1]);
    call_006d31e4(r0_2);
    return;
}

}  // namespace d_00765140
GUEST_EXPORT_FRAMED(0x00765140, d_00765140::f_00765140, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00765370: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00765370 {

struct __attribute__((packed)) Local_00765370_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00765370_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00765370_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00765370_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00765370_ea_1, word_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x004e3f8c, u32(u32, u32, u32, u32)> call_004e3f8c;  // (from the original)

u32 f_00765370(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x20);  // the original's stack frame
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_00765370_ea_1> ea_1 = gptr<Local_00765370_ea_1>(frame.at(0x10).addr());  // (from the original)
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r14;
    u32 r0_2 = call_004e3f8c(frame.at(0).addr(), r1, frame.at(0x18).addr(), guest::cpu()->r[3]);  // (from the original)
    u32 v_1 = *frame.at<u32>(0x1c);  // (from the original)
    return r0_2;
}

}  // namespace d_00765370
GUEST_EXPORT(0x00765370, d_00765370::f_00765370);

// f_0076538c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076538c {

inline guest::global<u32, 0x0085f2d0> global_0085f2d0;  // (from the original)
inline constexpr guest::Function<0x0014fea4, u32(u32, u32, u32, u32)> call_0014fea4;  // (from the original)
inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32, u32)> call_003171b4;  // (from the original)
inline constexpr guest::Function<0x004e0cb0, u32(u32, u32, u32, u32)> call_004e0cb0;  // (from the original)
inline constexpr guest::Function<0x004e9a28, u32(u32, u32, u32, u32)> call_004e9a28;  // (from the original)
inline constexpr guest::Function<0x0056b06c, u32(u32, u32, u32, u32)> call_0056b06c;  // (from the original)
inline constexpr guest::Function<0x0057ba08, u32(u32, u32, u32, u32)> call_0057ba08;  // (from the original)
inline constexpr guest::Function<0x005d43f4, u32(u32, u32, u32, u32)> call_005d43f4;  // (from the original)
inline constexpr guest::Function<0x006a5e44, u32(u32, u32, u32, u32)> call_006a5e44;  // (from the original)
inline constexpr guest::Function<0x006a5f0c, u32(u32, u32, u32)> call_006a5f0c;  // (from the original)
inline constexpr guest::Function<0x006c5c60, u32(u32, u32, u32, u32)> call_006c5c60;  // (from the original)

u32 f_0076538c(gptr<SlotObject> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x34);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r9_1 = frame.at(0x18).addr();  // (from the original)
    *frame.at<u16>(0x10) = u16(u32(arg0->angles[1]));  // (from the original)
    u32 r5_1 = *frame.at<u32>(0x50);  // (from the original)
    u32 r2_1 = *frame.at<u32>(0x10);  // (from the original)
    float S0_1 = std::bit_cast<float>(*global_0085f2d0);
    guest::cpu()->s[0] = S0_1;
    call_005d43f4(r9_1, r0 + 0x14u, r2_1, r3);  // (from the original)
    u32 r2_2 = guest::cpu()->r[2];
    u32 r3_1 = guest::cpu()->r[3];
    call_006c5c60(r9_1, 0u, r2_2, r3_1);
    u32 r3_2 = guest::cpu()->r[3];
    float S0_3 = guest::cpu()->s[0];
    *frame.at<u32>(0x1c) = std::bit_cast<u32>(S0_3);  // (from the original)
    guest::cpu()->s[0] = S0_3;
    call_003171b4(frame.at(0).addr(), frame.at(4).addr(), frame.at(0x18).addr(), r3_2);  // (from the original)
    u32 r2_4 = guest::cpu()->r[2];
    u32 r3_3 = guest::cpu()->r[3];
    u32 r0_2 = *frame.at<u32>(0);
    u32 r1_3 = *frame.at<u32>(4);
    u32 r0_3 = call_0014fea4(r0_2, r1_3, r2_4, r3_3);
    u32 r1_4 = guest::cpu()->r[1];
    u32 r2_5 = guest::cpu()->r[2];
    u32 r3_4 = guest::cpu()->r[3];
    float S0_5 = guest::cpu()->s[0];
    if (r0_3 == 0) {
        return r0_3;
    }
    u32 r0_4 = call_004e0cb0(r0_3, r1_4, r2_5, r3_4);
    u32 r1_5 = *frame.at<u32>(0);
    u32 r2_6 = *frame.at<u32>(4);
    r0_3 = call_004e9a28(r0_4, r1_5, r2_6, 0u);
    r1_4 = guest::cpu()->r[1];
    u32 r2_7 = guest::cpu()->r[2];
    u32 r3_5 = guest::cpu()->r[3];
    S0_5 = guest::cpu()->s[0];
    if (r0_3 == 0) {
        return r0_3;
    }
    u32 r1_6 = *gptr<u16>(r0_3 + 0x2eu);  // (from the original)
    *frame.at<u16>(8) = u16(r1_6);
    u32 r0_6 = call_0057ba08(r0_3 + 0x14u, r0 + 0x14u, r2_7, r3_5);  // (from the original)
    u32 r2_8 = guest::cpu()->r[2];
    u32 r3_6 = guest::cpu()->r[3];
    u32 r0_7 = s32(s16(*frame.at<u16>(8)));
    u32 r0_8 = call_0056b06c(r0_7, r0_6, r2_8, r3_6);
    r1_4 = guest::cpu()->r[1];
    u32 r2_9 = guest::cpu()->r[2];
    u32 r3_7 = guest::cpu()->r[3];
    S0_5 = guest::cpu()->s[0];
    if (s32(r0_8) >= 0x2800) {  // (from the original)
        return 0u;
    }
    call_006a5e44(frame.at(8).addr(), r0 + 0x14u, r2_9, r3_7);  // (from the original)
    *frame.at<u32>(0xc) = std::bit_cast<u32>(arg0->position.v[1]);  // (from the original)
    u32 r1_9 = *frame.at<u32>(0);
    u32 r2_10 = *frame.at<u32>(4);
    call_006a5f0c(frame.at(0x24).addr(), r1_9, r2_10);  // (from the original)
    *gptr<u32>(r1) = *frame.at<u32>(0);
    *gptr<u32>(r2) = *frame.at<u32>(4);
    *gptr<u32>(r3) = *frame.at<u32>(8);
    *gptr<u32>(r3 + 4u) = *frame.at<u32>(0xc);  // (from the original)
    *gptr<u32>(r3 + 8u) = *frame.at<u32>(0x10);  // (from the original)
    u32 r0_12 = call_0057ba08(frame.at(8).addr(), frame.at(0x24).addr(), r2_10, r3_7);  // (from the original)
    r1_4 = guest::cpu()->r[1];
    S0_5 = guest::cpu()->s[0];
    *gptr<u16>(r5_1) = u16(r0_12);
    return 1u;
}

}  // namespace d_0076538c
GUEST_EXPORT_FRAMED(0x0076538c, d_0076538c::f_0076538c, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_007654a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007654a8 {

struct __attribute__((packed)) Local_007654a8_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_007654a8_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_007654a8_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_007654a8_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_007654a8_ea_1, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Local_007654a8_ea_2 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_007654a8_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_007654a8_ea_2, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_007654a8_ea_2, word_c, 0xc);  // (from the original)

inline guest::global<u32, 0x00950148> global_00950148;  // (from the original)
inline constexpr guest::Function<0x0014feac, u32(u32, u32, u32, u32)> call_0014feac;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x0030b6b8, u32(u32, u32, u32, u32)> call_0030b6b8;  // (from the original)
inline constexpr guest::Function<0x00695ed8, u32(u32, u32, u32, u32)> call_00695ed8;  // (from the original)
inline constexpr guest::Function<0x00751058, u32(u32, u32, u32, u32)> call_00751058;  // (from the original)

u32 f_007654a8(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_007654a8_ea_2> ea_2 = gptr<Local_007654a8_ea_2>(0u);
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        return r0;
    }
    gptr<Local_007654a8_ea_1> ea_1 = gptr<Local_007654a8_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r3;
    ea_1->word_4 = r4;
    ea_1->word_8 = r5;
    ea_1->word_c = r14;
    u32 r0_1 = call_00751058(r1, r1, guest::cpu()->r[2], r3);
    call_002fc934(frame.at(0).addr(), r0_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_4 = call_0030b6b8(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r3_3 = guest::cpu()->r[3];
    u32 r1_2 = r0_4 - 0x3726u;  // (from the original)
    if (r1_2 != 0) {
        ea_2 = gptr<Local_007654a8_ea_2>(frame.at(0).addr());
        r4_1 = ea_2->word_4;
        r5_1 = ea_2->word_8;
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[4] = r4_1;
        guest::cpu()->r[5] = r5_1;
        return frame.at(0).addr();
    }
    u32 r0_5 = *global_00950148;
    if (r0_5 == 0) {
        ea_2 = gptr<Local_007654a8_ea_2>(frame.at(0).addr());
        r4_1 = ea_2->word_4;
        r5_1 = ea_2->word_8;
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[4] = r4_1;
        guest::cpu()->r[5] = r5_1;
        return frame.at(0).addr();
    }
    u32 r0_6 = call_00695ed8(r0_5, 0x765514u, guest::cpu()->r[2], r3_3);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    if (r0_6 != 0) {
        call_0014feac(r0_6, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_2 = guest::cpu()->r[1];
    }
    ea_2 = gptr<Local_007654a8_ea_2>(frame.at(0).addr());
    r4_1 = ea_2->word_4;
    r5_1 = ea_2->word_8;
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    return frame.at(0).addr();
}

}  // namespace d_007654a8
GUEST_EXPORT(0x007654a8, d_007654a8::f_007654a8);

// f_00765518: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00765518 {

struct __attribute__((packed)) Object_00765518_0 {
    u8 unknown_0[0x1ac];  // (not used here)
    u8 byte_1ac;
};
GUEST_OFFSET(Object_00765518_0, byte_1ac, 0x1ac);  // (from the original)

inline constexpr guest::Function<0x002fe8a8, u32(u32, u32, u32, u32)> call_002fe8a8;  // (from the original)
inline constexpr guest::Function<0x0076fd38, u32(u32, u32, u32, u32)> call_0076fd38;  // (from the original)

u32 f_00765518(gptr<Object_00765518_0> arg0, u32 r1) {
    guest::cpu()->r[13] -= 8u;
    u32 r0_1 = arg0->byte_1ac;
    u32 r0_2 = call_002fe8a8(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_2 == 0) {
        guest::cpu()->r[13] += 8u;
        return r0_2;
    }
    guest::cpu()->r[13] += 8u;
    return call_0076fd38(r0_2 + 0x6c20u, 0x24u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_00765518
GUEST_EXPORT(0x00765518, d_00765518::f_00765518);

// f_00765548: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00765548 {

struct __attribute__((packed)) Local_00765548_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00765548_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00765548_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00765548_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00765548_ea_1, word_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x004e440c, u32(u32, u32, u32, u32)> call_004e440c;  // (from the original)

u32 f_00765548(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x20);  // the original's stack frame
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_00765548_ea_1> ea_1 = gptr<Local_00765548_ea_1>(frame.at(0x10).addr());  // (from the original)
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r14;
    u32 r0_2 = call_004e440c(frame.at(0).addr(), r1, frame.at(0x18).addr(), guest::cpu()->r[3]);  // (from the original)
    u32 v_1 = *frame.at<u32>(0x1c);  // (from the original)
    return r0_2;
}

}  // namespace d_00765548
GUEST_EXPORT(0x00765548, d_00765548::f_00765548);

// f_00765564: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00765564 {

struct __attribute__((packed)) Object_00765564_0 {
    u8 unknown_0[0x1ac];  // (not used here)
    u8 byte_1ac;
};
GUEST_OFFSET(Object_00765564_0, byte_1ac, 0x1ac);  // (from the original)

inline constexpr guest::Function<0x005c12d0, u32(u32)> call_005c12d0;  // (from the original)
inline constexpr guest::Function<0x005c91a0, u32(u32)> call_005c91a0;  // (from the original)

u32 f_00765564(gptr<Object_00765564_0> arg0) {
    u32 r0_1 = arg0->byte_1ac;
    u32 r0_2 = call_005c91a0(r0_1);
    u32 zf_1 = r0_2 == 0;
    u32 r0_3 = arg0->byte_1ac;
    if (zf_1) {
        return r0_3 & 3u;
    }
    u32 r0_5 = call_005c12d0(r0_3);
    return r0_5 & 0xffu;  // (from the original)
}

}  // namespace d_00765564
GUEST_EXPORT_FRAMED(0x00765564, d_00765564::f_00765564, 0x4010);  // pushes {r4, lr} first, as the original

// f_00765590: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00765590 {

struct __attribute__((packed)) Object_00765590_0 {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
    u8 unknown_172[0x37];  // (not used here)
    u8 byte_1a9;
    u8 unknown_1aa[0x71d];  // (not used here)
    u8 byte_8c7;
};
GUEST_OFFSET(Object_00765590_0, byte_171, 0x171);  // (from the original)
GUEST_OFFSET(Object_00765590_0, byte_1a9, 0x1a9);  // (from the original)
GUEST_OFFSET(Object_00765590_0, byte_8c7, 0x8c7);  // (from the original)

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x006c6b84, u32(u32, u32)> call_006c6b84;  // (from the original)

u32 f_00765590(gptr<Object_00765590_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    u32 r0_6 = 0;
    u32 r0_1 = u32(arg0->byte_171) >> 5u & 1u;
    if (r0_1 == 0) {
        return r0_1;
    }
    u32 r0_2 = call_002f74c8(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_3 = call_002f74e0(0x200u, r0_2);  // (from the original)
    if (r0_3 != 0) {
        goto L_7655f4;
    }
    r0_4 = call_002f74c8(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_5 = call_002f74e0(0x10000000u, r0_4);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    if (r0_5 != 0) {
        goto L_7655f4;
    }
    r0_6 = call_002f74c8(r0_5, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_1 = call_002f74e0(0x20u, r0_6);  // (from the original)
    if (r0_1 == 0) {
        return r0_1;
    }
L_7655f4:;
    if ((u32(arg0->byte_8c7) & 1u) != 0 || u32(arg0->byte_1a9) == 0x82u) {  // (from the original)
        return 0u;
    }
    r0_1 = call_006c6b84(r1 == 0 ? r0 + 0x14u : r1, 0u);  // (from the original)
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    return r0_1;
}

}  // namespace d_00765590
GUEST_EXPORT_FRAMED(0x00765590, d_00765590::f_00765590, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00765634: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00765634 {

struct __attribute__((packed)) Object_00765634_0 {
    u8 unknown_0[0x1ac];  // (not used here)
    u8 byte_1ac;
};
GUEST_OFFSET(Object_00765634_0, byte_1ac, 0x1ac);  // (from the original)

inline constexpr guest::Function<0x002fe8a8, u32(u32, u32, u32, u32)> call_002fe8a8;  // (from the original)
inline constexpr guest::Function<0x0076fd38, u32(u32, u32, u32, u32)> call_0076fd38;  // (from the original)

u32 f_00765634(gptr<Object_00765634_0> arg0, u32 r1) {
    guest::cpu()->r[13] -= 8u;
    u32 r0_1 = arg0->byte_1ac;
    u32 r0_2 = call_002fe8a8(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_2 == 0) {
        guest::cpu()->r[13] += 8u;
        return r0_2;
    }
    guest::cpu()->r[13] += 8u;
    return call_0076fd38(r0_2 + 0x6c20u, 0x28u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_00765634
GUEST_EXPORT(0x00765634, d_00765634::f_00765634);

// f_007656b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007656b0 {

inline constexpr guest::Function<0x004e40e8, u32(u32, u32, u32, u32)> call_004e40e8;  // (from the original)

u32 f_007656b0(u32 r0_unused, u32 r1) {
    return call_004e40e8(r1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_007656b0
GUEST_EXPORT(0x007656b0, d_007656b0::f_007656b0);

// f_007656b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007656b8 {

struct __attribute__((packed)) Local_007656b8_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_007656b8_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_007656b8_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_007656b8_ea_1, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x0014f3cc, u32(u32, u32, u32)> call_0014f3cc;  // (from the original)
inline constexpr guest::Function<0x0067e9e8, u32(u32, u32, u32, u32)> call_0067e9e8;  // (from the original)
inline constexpr guest::Function<0x0068752c, u32(u32, u32, u32, u32)> call_0068752c;  // (from the original)
inline constexpr guest::Function<0x00763d80, u32(u32, u32)> call_00763d80;  // (from the original)
inline constexpr guest::Function<0x00765564, u32(u32, u32, u32, u32)> call_00765564;  // (from the original)

void f_007656b8(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4c);  // the original's stack frame
    u32 r0_2 = call_0067e9e8(frame.at(0).addr(), r1, r2, r3);
    if (r0_2 != 0) {
        u32 r0_3 = call_00765564(r1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        call_0068752c(frame.at(0x3c).addr(), r0_3, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        call_0014f3cc(frame.at(0x30).addr(), frame.at(0).addr(), frame.at(0x3c).addr());  // (from the original)
        gptr<Local_007656b8_ea_1> ea_1 = gptr<Local_007656b8_ea_1>(frame.at(0x30).addr());  // (from the original)
        u32 r1_3 = ea_1->word_4;
        u32 r2_4 = ea_1->word_8;
        *gptr<u32>(r0) = ea_1->word_0;
        *gptr<u32>(r0 + 4) = r1_3;
        *gptr<u32>(r0 + 8) = r2_4;
        guest::cpu()->r[1] = r1_3;
        return;
    }
    call_00763d80(r0, r1);
    return;
}

}  // namespace d_007656b8
GUEST_EXPORT_FRAMED(0x007656b8, d_007656b8::f_007656b8, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00765724: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00765724 {

inline guest::global<u32, 0x00765814> global_00765814;  // (from the original)
inline guest::global<u32, 0x0085f2cc> global_0085f2cc;  // (from the original)
inline guest::global<u32, 0x00886a60> global_00886a60;  // (from the original)
inline guest::global<u32, 0x00886a64> global_00886a64;  // (from the original)
inline guest::global<u32, 0x00886a68> global_00886a68;  // (from the original)
inline guest::global<u32, 0x0094df68> global_0094df68;  // (from the original)
inline guest::global<u32, 0x0094df6c> global_0094df6c;  // (from the original)
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;  // (from the original)
inline constexpr guest::Function<0x0064ee94, u32(u32, u32, u32, u32)> call_0064ee94;  // (from the original)
inline constexpr guest::Function<0x007622f0, u32(u32, u32, u32, u32)> call_007622f0;  // (from the original)

void f_00765724(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    guest::StackFrame frame(0x14);  // the original's stack frame
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    if ((*global_0094df68 & 1u) != 0) {
        goto L_765778;
    }
    r0_1 = 0x94df68u;  // (from the original)
    r0_2 = call_002fe7dc(r0_1, r1, r2, r3);
    S1 = guest::cpu()->s[1];
    if (r0_2 == 0) {
        goto L_765778;
    }
    S1 = std::bit_cast<float>(*global_00765814);
    *global_0094df6c = std::bit_cast<u32>(std::bit_cast<float>(*global_0085f2cc) * S1);
L_765778:;
    *frame.at<u16>(0xc) = u16(u32(*gptr<u16>(r0 + 0x2eu)) - 0x4000u);  // (from the original)
    u32 r2_1 = *frame.at<u32>(0xc);  // (from the original)
    float S0_1 = std::bit_cast<float>(*global_00886a60);
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1;
    call_007622f0(r0, frame.at(0).addr(), r2_1, 1u);
    u32 r1_2 = frame.at(0).addr();
    *frame.at<u16>(0xc) = u16(u32(*gptr<u16>(r0 + 0x2eu)));  // (from the original)
    u32 r2_2 = *frame.at<u32>(0xc);  // (from the original)
    float S0_2 = std::bit_cast<float>(*global_00886a64);
    guest::cpu()->s[0] = S0_2;
    call_0064ee94(r1_2, r1_2, r2_2, 1u);
    float S0_3 = std::bit_cast<float>(*global_0094df6c);
    *frame.at<u32>(4) = std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r0 + 0x18u)) + S0_3);  // (from the original)
    *gptr<u32>(r1) = *frame.at<u32>(0);
    *gptr<u32>(r1 + 4u) = *frame.at<u32>(4);
    *gptr<u32>(r1 + 8u) = *frame.at<u32>(8);
    *gptr<u32>(r2) = *global_00886a68;
    float S1_2 = std::bit_cast<float>(*global_0085f2cc);
    float S0_4 = S1_2 - S0_3;
    *gptr<u32>(r3) = std::bit_cast<u32>(S0_4);
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_2;
    return;
}

}  // namespace d_00765724
GUEST_EXPORT_FRAMED(0x00765724, d_00765724::f_00765724, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_00765938: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00765938 {

struct __attribute__((packed)) Local_00765938_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00765938_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00765938_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00765938_ea_1, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_00765938_r0_5 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00765938_r0_5, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00765938_r0_5, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00765938_r0_5, word_8, 0x8);  // (from the original)

inline guest::global<u32, 0x00886b0c> global_00886b0c;  // (from the original)
inline guest::global<u32, 0x00886b1c> global_00886b1c;  // (from the original)
inline guest::global<u32, 0x00886b20> global_00886b20;  // (from the original)
inline guest::global<u32, 0x00886b34> global_00886b34;  // (from the original)
inline guest::global<u32, 0x00886b38> global_00886b38;  // (from the original)
inline guest::global<u32, 0x00ae5658> global_00ae5658;  // (from the original)
inline guest::global<u32, 0x00ae565c> global_00ae565c;  // (from the original)
inline guest::global<u32, 0x00ae5660> global_00ae5660;  // (from the original)
inline constexpr guest::Function<0x0014f3cc, u32(u32, u32, u32)> call_0014f3cc;  // (from the original)
inline constexpr guest::Function<0x0067e9e8, u32(u32, u32, u32, u32)> call_0067e9e8;  // (from the original)
inline constexpr guest::Function<0x00765564, u32(u32, u32, u32, u32)> call_00765564;  // (from the original)
inline constexpr guest::Function<0x007656b8, u32(u32, u32, u32, u32)> call_007656b8;  // (from the original)

void f_00765938(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2) {
    guest::StackFrame frame(0x6c);  // the original's stack frame
    float S1_2 = 0;
    float S1_3 = 0;
    gptr<Local_00765938_r0_5> r0_5 = gptr<Local_00765938_r0_5>(0u);
    u32 r1_2 = 0;
    u32 r0_6 = 0;
    gptr<Local_00765938_ea_1> ea_1 = gptr<Local_00765938_ea_1>(0u);
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 r0_2 = call_0067e9e8(frame.at(0x30).addr(), r1, r2, r3);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    u32 r3_1 = guest::cpu()->r[3];
    float S0_1 = guest::cpu()->s[0];
    float S1_1 = guest::cpu()->s[1];
    if (r0_2 != 0) {
        u32 r0_3 = call_00765564(r1, r1_1, r2_1, r3_1);
        u32 r3_2 = guest::cpu()->r[3];
        *frame.at<u32>(0x20) = 0;  // (from the original)
        *frame.at<u32>(0x24) = 0;  // (from the original)
        *frame.at<u32>(0x28) = 0;  // (from the original)
        *frame.at<u32>(0x2c) = 0;  // (from the original)
        u32 r0_4 = r0_3 & 3u;
        *frame.at<u32>(0x20) = *global_00886b1c;  // (from the original)
        u32 r2_2 = *global_00886b34;
        *frame.at<u32>(0) = 0;
        *frame.at<u32>(4) = 0;
        *frame.at<u32>(8) = 0;
        *frame.at<u32>(0xc) = 0;  // (from the original)
        *frame.at<u32>(0x28) = r2_2;  // (from the original)
        u32 r2_3 = frame.at(0x20).addr() + (r0_4 << 2);  // (from the original)
        *frame.at<u32>(0) = *global_00886b20;
        *frame.at<u32>(8) = *global_00886b38;
        float S0_2 = std::bit_cast<float>(*gptr<u32>(r2_3));
        float S2_2 = std::bit_cast<float>(*gptr<u32>(frame.at(0).addr() + (r0_4 << 2)));
        if (std::bit_cast<u32>(std::bit_cast<float>(vcvt_sz_f(S0_2))) == 0) {
            S1_2 = std::bit_cast<float>(vcvt_sz_f(S2_2));
            if (std::bit_cast<u32>(S1_2) == 0) {
                goto L_765a28;
            }
        }
        S1_3 = std::bit_cast<float>(*global_00886b0c);
        r0_5 = gptr<Local_00765938_r0_5>(frame.at(0x60).addr());  // (from the original)
        r0_5->word_0 = std::bit_cast<u32>(S0_2);
        r0_5->word_4 = std::bit_cast<u32>(S1_3);
        r0_5->word_8 = std::bit_cast<u32>(S2_2);
        r1_2 = frame.at(0x30).addr();  // (from the original)
        r0_6 = frame.at(0x10).addr();  // (from the original)
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_3;
        call_0014f3cc(r0_6, r1_2, r0_5.addr());
        ea_1 = gptr<Local_00765938_ea_1>(frame.at(0x10).addr());  // (from the original)
        r1_3 = ea_1->word_4;
        r2_4 = ea_1->word_8;
        *gptr<u32>(r0) = ea_1->word_0;
        *gptr<u32>(r0 + 4) = r1_3;
        *gptr<u32>(r0 + 8) = r2_4;
        return;
L_765a28:;
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_2;
        guest::cpu()->s[2] = S2_2;
        call_007656b8(r0, r1, r2_3, r3_2);
        return;
    }
    u32 r1_4 = *global_00ae5658;
    u32 r2_5 = *global_00ae565c;
    *gptr<u32>(r0 + 8u) = *global_00ae5660;
    *gptr<u32>(r0) = r1_4;
    *gptr<u32>(r0 + 4) = r2_5;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return;
}

}  // namespace d_00765938
GUEST_EXPORT_FRAMED(0x00765938, d_00765938::f_00765938, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00765aac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00765aac {

struct __attribute__((packed)) Object_00765aac_0 {
    u8 unknown_0[0x8c7];  // (not used here)
    u8 byte_8c7;
};
GUEST_OFFSET(Object_00765aac_0, byte_8c7, 0x8c7);  // (from the original)

struct __attribute__((packed)) Object_00765aac_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00765aac_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00765aac_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00765aac_1, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x004e5288, u32(u32, u32, u32, u32)> call_004e5288;  // (from the original)
inline constexpr guest::Function<0x005d43f4, u32(u32, u32, u32, u32)> call_005d43f4;  // (from the original)
inline constexpr guest::Function<0x006c5c60, u32(u32, u32, u32, u32)> call_006c5c60;  // (from the original)
inline constexpr guest::Function<0x006e56a4, u32(u32, u32, u32, u32)> call_006e56a4;  // (from the original)

u32 f_00765aac(gptr<Object_00765aac_0> arg0, gptr<Object_00765aac_1> arg1, u32 r2, float S0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r1 = arg1.addr();
    u32 r2_1 = arg1->word_0;
    u32 r3_1 = arg1->word_4;
    u32 r12_1 = arg1->word_8;
    *frame.at<u32>(0) = r2_1;
    *frame.at<u32>(4) = r3_1;
    *frame.at<u32>(8) = r12_1;
    u32 r0_1 = u32(arg0->byte_8c7) >> 1u & 1u;
    if (r0_1 == 0) {
        u32 r6_1 = frame.at(0).addr();
        call_006e56a4(r0_1, r1, r2_1, r3_1);
        u32 r3_2 = guest::cpu()->r[3];
        float S0_1 = guest::cpu()->s[0];
        float S0_2 = -S0_1;
        guest::cpu()->s[0] = S0_2;
        call_005d43f4(r6_1, r1, r2, r3_2);
        r2_1 = guest::cpu()->r[2];
        u32 r3_3 = guest::cpu()->r[3];
        call_006c5c60(r6_1, 0u, r2_1, r3_3);
        r3_1 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        *frame.at<u32>(4) = std::bit_cast<u32>(S0);
    }
    guest::cpu()->s[0] = S0;
    u32 r0_3 = call_004e5288(frame.at(0).addr(), r2, r2_1, r3_1);
    return r0_3;
}

}  // namespace d_00765aac
GUEST_EXPORT_FRAMED(0x00765aac, d_00765aac::f_00765aac, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00765cec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00765cec {

struct __attribute__((packed)) Object_00765cec_0 {
    u8 unknown_0[0x8c7];  // (not used here)
    u8 byte_8c7;
};
GUEST_OFFSET(Object_00765cec_0, byte_8c7, 0x8c7);  // (from the original)

struct __attribute__((packed)) Object_00765cec_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00765cec_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00765cec_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00765cec_1, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x004e5570, u32(u32, u32, u32, u32)> call_004e5570;  // (from the original)
inline constexpr guest::Function<0x005d43f4, u32(u32, u32, u32, u32)> call_005d43f4;  // (from the original)
inline constexpr guest::Function<0x006c5c60, u32(u32, u32, u32, u32)> call_006c5c60;  // (from the original)
inline constexpr guest::Function<0x006e56a4, u32(u32, u32, u32, u32)> call_006e56a4;  // (from the original)

u32 f_00765cec(gptr<Object_00765cec_0> arg0, gptr<Object_00765cec_1> arg1, u32 r2, float S0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r1 = arg1.addr();
    u32 r2_1 = arg1->word_0;
    u32 r3_1 = arg1->word_4;
    u32 r12_1 = arg1->word_8;
    *frame.at<u32>(0) = r2_1;
    *frame.at<u32>(4) = r3_1;
    *frame.at<u32>(8) = r12_1;
    u32 r0_1 = u32(arg0->byte_8c7) >> 1u & 1u;
    if (r0_1 == 0) {
        u32 r6_1 = frame.at(0).addr();
        call_006e56a4(r0_1, r1, r2_1, r3_1);
        u32 r3_2 = guest::cpu()->r[3];
        float S0_1 = guest::cpu()->s[0];
        float S0_2 = -S0_1;
        guest::cpu()->s[0] = S0_2;
        call_005d43f4(r6_1, r1, r2, r3_2);
        r2_1 = guest::cpu()->r[2];
        u32 r3_3 = guest::cpu()->r[3];
        call_006c5c60(r6_1, 0u, r2_1, r3_3);
        r3_1 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        *frame.at<u32>(4) = std::bit_cast<u32>(S0);
    }
    guest::cpu()->s[0] = S0;
    u32 r0_3 = call_004e5570(frame.at(0).addr(), r2, r2_1, r3_1);
    return r0_3;
}

}  // namespace d_00765cec
GUEST_EXPORT_FRAMED(0x00765cec, d_00765cec::f_00765cec, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00765d54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00765d54 {

inline guest::global<u32, 0x00886b10> global_00886b10;  // (from the original)
inline guest::global<u32, 0x00886b24> global_00886b24;  // (from the original)
inline guest::global<u32, 0x00886b28> global_00886b28;  // (from the original)
inline guest::global<u32, 0x00886b3c> global_00886b3c;  // (from the original)
inline constexpr guest::Function<0x006c5c60, u32(u32, u32)> call_006c5c60;  // (from the original)
inline constexpr guest::Function<0x00764660, u32(u32, u32)> call_00764660;  // (from the original)
inline constexpr guest::Function<0x00765564, u32(u32, u32, u32, u32)> call_00765564;  // (from the original)

void f_00765d54(u32 r0, u32 r1, float S0, float S1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = call_00765564(r1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *frame.at<u32>(0) = *global_00886b10;
    *frame.at<u32>(4) = *global_00886b24;
    *frame.at<u32>(8) = *global_00886b28;
    *frame.at<u32>(0xc) = *global_00886b3c;  // (from the original)
    call_00764660(r0, r1);
    float S0_2 = std::bit_cast<float>(*gptr<u32>(frame.at(0).addr() + ((r0_1 & 3u) << 2)));
    *gptr<u32>(r0) = std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r0)) + S0_2);
    float S1_2 = std::bit_cast<float>(*gptr<u32>(r0 + 8u));
    float S0_3 = S1_2 + S0_2;
    *gptr<u32>(r0 + 8u) = std::bit_cast<u32>(S0_3);
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_2;
    call_006c5c60(r0, 0u);
    float S0_4 = guest::cpu()->s[0];
    *gptr<u32>(r0 + 4u) = std::bit_cast<u32>(S0_4);
    guest::cpu()->s[0] = S0_4;
    return;
}

}  // namespace d_00765d54
GUEST_EXPORT_FRAMED(0x00765d54, d_00765d54::f_00765d54, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00765e04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00765e04 {

struct __attribute__((packed)) Object_00765e04_0 {
    u8 unknown_0[0x172];  // (not used here)
    u8 byte_172;
};
GUEST_OFFSET(Object_00765e04_0, byte_172, 0x172);  // (from the original)

inline constexpr guest::Function<0x0070e594, u32(u32, u32, u32, u32)> call_0070e594;  // (from the original)

u32 f_00765e04(gptr<Object_00765e04_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1_1 = u32(arg0->byte_172) >> 1u & 1u;
    if (r1_1 != 0) {
        guest::cpu()->r[1] = r1_1;
        return 0x95bfdcu;  // (from the original)
    }
    return call_0070e594(r0 + 0x1b4u, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_00765e04
GUEST_EXPORT(0x00765e04, d_00765e04::f_00765e04);

// f_00765e28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00765e28 {

inline constexpr guest::Function<0x0027ab40, u32(u32, u32)> call_0027ab40;  // (from the original)
inline constexpr guest::Function<0x002ff8b0, u32(u32, u32)> call_002ff8b0;  // (from the original)
inline constexpr guest::Function<0x005c2c80, u32(u32, u32)> call_005c2c80;  // (from the original)

u32 f_00765e28(gptr<AcPlayer_rec> arg0) {
    u32 r0 = arg0.addr();
    guest::cpu()->r[13] -= 8u;
    u32 r1_1 = u32(arg0->byte_171) >> 5u & 1u;
    if (r1_1 != 0) {
        guest::cpu()->r[13] += 8u;
        return call_005c2c80(r0, r1_1);
    }
    u32 r0_1 = arg0->byte_1ac;
    u32 r0_2 = call_002ff8b0(r0_1, r1_1);
    u32 r0_3 = call_0027ab40(r0_2, guest::cpu()->r[1]);
    if (r0_3 != 0) {
        r0_3 = 1u;
    }
    guest::cpu()->r[13] += 8u;
    return r0_3;
}

}  // namespace d_00765e28
GUEST_EXPORT(0x00765e28, d_00765e28::f_00765e28);

// f_00765e64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00765e64 {

inline guest::global<u32, 0x001a142c> global_001a142c;  // (from the original)
inline guest::global<u32, 0x00765e8c> global_00765e8c;  // (from the original)
inline guest::global<u32, 0x00950874> global_00950874;  // (from the original)

u32 f_00765e64(u32 r0_unused, u32 r1_unused, u32 r2) {
    u32 r0 = 0;
    u32 r1 = 0;
    float S0_4 = 0;
    goto L_765e64;
L_1a13f8:;
    if (r1 + 0x8000u == 0) {  // (from the original)
        float S0_1 = std::bit_cast<float>(*gptr<u32>(r0 + 8u));
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0_1;
        return r0;
    }
    if (r1 + 0x4000u == 0) {  // (from the original)
        float S0_2 = std::bit_cast<float>(*gptr<u32>(r0));
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0_2;
        return r0;
    }
    if (r1 == 0) {
        float S0_3 = std::bit_cast<float>(*gptr<u32>(r0 + 0x18u));  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0_3;
        return r0;
    }
    S0_4 = r1 == 0x4000u ? std::bit_cast<float>(*gptr<u32>(r0 + 0x10u)) : std::bit_cast<float>(*global_001a142c);  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0_4;
    return r0;
L_765e64:;
    r1 = r2;
    u32 r0_1 = *global_00950874;
    if (r0_1 == 0) {
        float S0_5 = std::bit_cast<float>(*global_00765e8c);
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0_5;
        return r0_1;
    }
    r0 = r0_1 + 0x50u;  // (from the original)
    guest::preempt();
    goto L_1a13f8;
}

}  // namespace d_00765e64
GUEST_EXPORT(0x00765e64, d_00765e64::f_00765e64);

// f_00765f54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00765f54 {

struct __attribute__((packed)) Object_00765f54_0 {
    u8 unknown_0[0x20];  // (not used here)
    u32 word_20;
    u32 word_24;
};
GUEST_OFFSET(Object_00765f54_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_00765f54_0, word_24, 0x24);  // (from the original)

inline guest::global<u32, 0x00848128> global_00848128;  // (from the original)
inline guest::global<u32, 0x0084812c> global_0084812c;  // (from the original)

u32 f_00765f54(gptr<Object_00765f54_0> arg0) {
    u32 r3_1 = arg0->word_20;
    u32 r2_1 = *global_00848128;
    u32 r1_1 = *global_0084812c;
    if (r3_1 != r2_1) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    if (r3_1 == 0) {
        if (((arg0->word_24 | r1_1) & 1u) == 0) {
            guest::cpu()->r[1] = r1_1;
            return 0u;
        }
    }
    if (arg0->word_24 != r1_1) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_00765f54
GUEST_EXPORT(0x00765f54, d_00765f54::f_00765f54);

// f_0076609c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076609c {

struct __attribute__((packed)) Object_0076609c_0 {
    u8 unknown_0[0xeb54];  // (not used here)
    u32 word_eb54;
    u32 word_eb58;
};
GUEST_OFFSET(Object_0076609c_0, word_eb54, 0xeb54);  // (from the original)
GUEST_OFFSET(Object_0076609c_0, word_eb58, 0xeb58);  // (from the original)

struct __attribute__((packed)) Object_0076609c_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_0076609c_1, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x003009a9, u32(u32, u32, u32, u32)> call_003009a8;  // (from the original)

u32 f_0076609c(gptr<Object_0076609c_0> arg0, gptr<Object_0076609c_1> arg1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r0_3 = 0;
    u32 r8_1 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    *frame.at<u32>(0) = r3;
    u32 r7 = r1;
    u32 r9 = 0u;
    u32 r4 = arg0->word_eb54;
    u32 r6 = arg0->word_eb58;
    if (r1 != 0) {
        r9 = arg1->word_0;
    }
    u32 r0_2 = call_002fb328(r0 + 0xeb54u, r1, guest::cpu()->r[2], r3);  // (from the original)
    r3 = guest::cpu()->r[3];
    u32 r10 = 0u;
    u32 r11 = r10;
    *frame.at<u32>(0) = r0_2 + 0x292a4u;  // (from the original)
    if (r4 == r6) {
        return r10;
    }
    do {
        u32 r5_1 = *gptr<u32>(r4);
        if (r5_1 == 0) {
            goto L_76614c;
        }
        r0_3 = r5_1 + 0x9a8u;  // (from the original)
        if (u32(*gptr<u8>(r5_1 + 0x9a8u)) != 0) {  // (from the original)
            goto L_76614c;
        }
        r8_1 = s32(s8(*gptr<u8>(r0_3 + 6u)));
        r0_4 = *frame.at<u32>(0);
        r0_5 = call_003009a8(r0_4, r8_1, guest::cpu()->r[2], r3);
        r3 = guest::cpu()->r[3];
        if (r0_5 == 0 || u32(*gptr<u8>(r0_5 + 0x250fu)) != 0) {  // (from the original)
            goto L_76614c;
        }
        if (s32(r8_1) >= s32(r9)) {
            if (r7 != 0) {
                *gptr<u32>(r7) = r8_1;
            }
            return r5_1;
        }
        if (r10 == 0) {
            r10 = r5_1;
            r11 = r8_1;
        }
L_76614c:;
        r4 += 4u;
        guest::preempt();
    } while (r4 != r6);
    if (r10 == 0) {
        return r10;
    }
    if (r7 != 0) {
        *gptr<u32>(r7) = r11;
    }
    return r10;
}

}  // namespace d_0076609c
GUEST_EXPORT_FRAMED(0x0076609c, d_0076609c::f_0076609c, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_00766170: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00766170 {

struct __attribute__((packed)) Object_00766170_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_00766170_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00766170_0, word_10, 0x10);  // (from the original)

struct __attribute__((packed)) Local_00766170_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00766170_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00766170_ea_1, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x00857b48> global_00857b48;  // (from the original)
inline guest::global<u32, 0x00857b4c> global_00857b4c;  // (from the original)

u32 f_00766170(gptr<Object_00766170_0> arg0) {
    u32 r4_1 = 0;
    u32 r3_1 = arg0->word_c;
    u32 r1_1 = *global_00857b4c;
    if (r3_1 != *global_00857b48) {
        goto L_7661b8;
    }
    if (r3_1 == 0) {
        if (((arg0->word_10 | r1_1) & 1u) == 0) {
            goto L_7661b0;
        }
    }
    if (arg0->word_10 != r1_1) {
        goto L_7661b8;
    }
L_7661b0:;
    r4_1 = 1u;
    goto L_7661bc;
L_7661b8:;
    r4_1 = 0u;
L_7661bc:;
    gptr<Local_00766170_ea_1> ea_1 = gptr<Local_00766170_ea_1>(0x857b40u);  // (from the original)
    u32 r1_2 = ea_1->word_4;
    if (r3_1 != ea_1->word_0) {
        guest::cpu()->r[1] = r1_2;
        return 0u | r4_1;
    }
    if (r3_1 == 0) {
        if (((arg0->word_10 | r1_2) & 1u) == 0) {
            guest::cpu()->r[1] = r1_2;
            return 1u | r4_1;
        }
    }
    if (arg0->word_10 != r1_2) {
        guest::cpu()->r[1] = r1_2;
        return 0u | r4_1;
    }
    guest::cpu()->r[1] = r1_2;
    return 1u | r4_1;
}

}  // namespace d_00766170
GUEST_EXPORT_FRAMED(0x00766170, d_00766170::f_00766170, 0x10);  // pushes {r4} first, as the original

// f_007667a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007667a8 {


void f_007667a8(u32 r0, u32 r1, u32 r2, u32 r3) {
    goto L_7667a8;
L_7667a8:;
    u32 r12_1 = r1;
    u32 r1_2 = r3 & 0xfu;  // (from the original)
    u32 r2_1 = r2 & 0xfu;  // (from the original)
    r1 = r0 + (r1_2 + (r1_2 << 2) << 5) + (r2_1 + (r2_1 << 2) << 1) + 0x1cu;  // (from the original)
    r0 = r12_1;
    *gptr<u16>(r0) = u16(u32(*gptr<u16>(r1)));
    *gptr<u16>(r0 + 2u) = u16(u32(*gptr<u16>(r1 + 2u)));
    *gptr<u16>(r0 + 4u) = u16(u32(*gptr<u16>(r1 + 4u)));
    *gptr<u16>(r0 + 6u) = u16(u32(*gptr<u16>(r1 + 6u)));
    *gptr<u8>(r0 + 8u) = u8(u32(*gptr<u8>(r1 + 8u)));
    u32 r1_1 = *gptr<u8>(r1 + 9u);
    *gptr<u8>(r0 + 9u) = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_007667a8
GUEST_EXPORT(0x007667a8, d_007667a8::f_007667a8);

// f_007667d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007667d0 {

inline guest::global<u32, 0x0085f2e0> global_0085f2e0;  // (from the original)
inline guest::global<u32, 0x0085f2e4> global_0085f2e4;  // (from the original)
inline guest::global<u32, 0x0085f2e8> global_0085f2e8;  // (from the original)
inline guest::global<u32, 0x0085f2ec> global_0085f2ec;  // (from the original)
inline constexpr guest::Function<0x0075d630, u32(u32, u32)> call_0075d630;  // (from the original)

void f_007667d0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = r3 & 0xfu;  // (from the original)
    u32 r1_1 = r2 & 0xfu;  // (from the original)
    call_0075d630(r0 + (r0_1 + (r0_1 << 2) << 5) + (r1_1 + (r1_1 << 2) << 1) + 0x1cu, r1);  // (from the original)
    u32 r3_1 = *global_0085f2ec;
    u32 r0_3 = r2 * *global_0085f2e0 + *gptr<u32>(r0 + 8u) + *global_0085f2e8;
    u32 r2_1 = r3 * *global_0085f2e4 + *gptr<u32>(r0 + 0xcu);  // (from the original)
    *gptr<u32>(r1 + 4u) = *gptr<u32>(r1 + 4u) + r0_3;
    u32 r1_2 = r2_1 + r3_1;
    *gptr<u32>(r1 + 0xcu) = *gptr<u32>(r1 + 0xcu) + r1_2;  // (from the original)
    *gptr<u32>(r1 + 0x14u) = *gptr<u32>(r1 + 0x14u) + r0_3;  // (from the original)
    *gptr<u32>(r1 + 0x1cu) = *gptr<u32>(r1 + 0x1cu) + r1_2;  // (from the original)
    *gptr<u32>(r1 + 0x24u) = r0_3 + *gptr<u32>(r1 + 0x24u);  // (from the original)
    *gptr<u32>(r1 + 0x2cu) = *gptr<u32>(r1 + 0x2cu) + r1_2;  // (from the original)
    return;
}

}  // namespace d_007667d0
GUEST_EXPORT_FRAMED(0x007667d0, d_007667d0::f_007667d0, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0076689c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076689c {

inline guest::global<u32, 0x0085f2e0> global_0085f2e0;  // (from the original)
inline guest::global<u32, 0x0085f2e4> global_0085f2e4;  // (from the original)
inline guest::global<u32, 0x0085f2e8> global_0085f2e8;  // (from the original)
inline guest::global<u32, 0x0085f2ec> global_0085f2ec;  // (from the original)
inline constexpr guest::Function<0x0075d6a4, u32(u32, u32)> call_0075d6a4;  // (from the original)

void f_0076689c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = r3 & 0xfu;  // (from the original)
    u32 r1_1 = r2 & 0xfu;  // (from the original)
    call_0075d6a4(r0 + (r0_1 + (r0_1 << 2) << 5) + (r1_1 + (r1_1 << 2) << 1) + 0x1cu, r1);  // (from the original)
    u32 r3_1 = *global_0085f2ec;
    u32 r0_3 = r2 * *global_0085f2e0 + *gptr<u32>(r0 + 8u) + *global_0085f2e8;
    u32 r2_1 = r3 * *global_0085f2e4 + *gptr<u32>(r0 + 0xcu);  // (from the original)
    *gptr<u32>(r1 + 4u) = *gptr<u32>(r1 + 4u) + r0_3;
    u32 r1_2 = r2_1 + r3_1;
    *gptr<u32>(r1 + 0xcu) = *gptr<u32>(r1 + 0xcu) + r1_2;  // (from the original)
    *gptr<u32>(r1 + 0x14u) = *gptr<u32>(r1 + 0x14u) + r0_3;  // (from the original)
    *gptr<u32>(r1 + 0x1cu) = *gptr<u32>(r1 + 0x1cu) + r1_2;  // (from the original)
    *gptr<u32>(r1 + 0x24u) = r0_3 + *gptr<u32>(r1 + 0x24u);  // (from the original)
    *gptr<u32>(r1 + 0x2cu) = *gptr<u32>(r1 + 0x2cu) + r1_2;  // (from the original)
    return;
}

}  // namespace d_0076689c
GUEST_EXPORT_FRAMED(0x0076689c, d_0076689c::f_0076689c, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00766968: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00766968 {

inline guest::global<u32, 0x0085f2e0> global_0085f2e0;  // (from the original)
inline guest::global<u32, 0x0085f2e4> global_0085f2e4;  // (from the original)
inline guest::global<u32, 0x0085f2e8> global_0085f2e8;  // (from the original)
inline guest::global<u32, 0x0085f2ec> global_0085f2ec;  // (from the original)
inline constexpr guest::Function<0x0075d718, u32(u32, u32)> call_0075d718;  // (from the original)

void f_00766968(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = r3 & 0xfu;  // (from the original)
    u32 r1_1 = r2 & 0xfu;  // (from the original)
    call_0075d718(r0 + (r0_1 + (r0_1 << 2) << 5) + (r1_1 + (r1_1 << 2) << 1) + 0x1cu, r1);  // (from the original)
    u32 r3_1 = *global_0085f2ec;
    u32 r0_3 = r2 * *global_0085f2e0 + *gptr<u32>(r0 + 8u) + *global_0085f2e8;
    u32 r2_1 = r3 * *global_0085f2e4 + *gptr<u32>(r0 + 0xcu);  // (from the original)
    *gptr<u32>(r1 + 4u) = *gptr<u32>(r1 + 4u) + r0_3;
    u32 r1_2 = r2_1 + r3_1;
    *gptr<u32>(r1 + 0xcu) = *gptr<u32>(r1 + 0xcu) + r1_2;  // (from the original)
    *gptr<u32>(r1 + 0x14u) = *gptr<u32>(r1 + 0x14u) + r0_3;  // (from the original)
    *gptr<u32>(r1 + 0x1cu) = *gptr<u32>(r1 + 0x1cu) + r1_2;  // (from the original)
    *gptr<u32>(r1 + 0x24u) = r0_3 + *gptr<u32>(r1 + 0x24u);  // (from the original)
    *gptr<u32>(r1 + 0x2cu) = *gptr<u32>(r1 + 0x2cu) + r1_2;  // (from the original)
    return;
}

}  // namespace d_00766968
GUEST_EXPORT_FRAMED(0x00766968, d_00766968::f_00766968, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00766a34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00766a34 {

inline guest::global<u32, 0x0085f2e0> global_0085f2e0;  // (from the original)
inline guest::global<u32, 0x0085f2e4> global_0085f2e4;  // (from the original)
inline guest::global<u32, 0x0085f2e8> global_0085f2e8;  // (from the original)
inline guest::global<u32, 0x0085f2ec> global_0085f2ec;  // (from the original)
inline constexpr guest::Function<0x0075d788, u32(u32, u32)> call_0075d788;  // (from the original)

void f_00766a34(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = r3 & 0xfu;  // (from the original)
    u32 r1_1 = r2 & 0xfu;  // (from the original)
    call_0075d788(r0 + (r0_1 + (r0_1 << 2) << 5) + (r1_1 + (r1_1 << 2) << 1) + 0x1cu, r1);  // (from the original)
    u32 r3_1 = *global_0085f2ec;
    u32 r0_3 = r2 * *global_0085f2e0 + *gptr<u32>(r0 + 8u) + *global_0085f2e8;
    u32 r2_1 = r3 * *global_0085f2e4 + *gptr<u32>(r0 + 0xcu);  // (from the original)
    *gptr<u32>(r1 + 4u) = *gptr<u32>(r1 + 4u) + r0_3;
    u32 r1_2 = r2_1 + r3_1;
    *gptr<u32>(r1 + 0xcu) = *gptr<u32>(r1 + 0xcu) + r1_2;  // (from the original)
    *gptr<u32>(r1 + 0x14u) = *gptr<u32>(r1 + 0x14u) + r0_3;  // (from the original)
    *gptr<u32>(r1 + 0x1cu) = *gptr<u32>(r1 + 0x1cu) + r1_2;  // (from the original)
    *gptr<u32>(r1 + 0x24u) = r0_3 + *gptr<u32>(r1 + 0x24u);  // (from the original)
    *gptr<u32>(r1 + 0x2cu) = *gptr<u32>(r1 + 0x2cu) + r1_2;  // (from the original)
    return;
}

}  // namespace d_00766a34
GUEST_EXPORT_FRAMED(0x00766a34, d_00766a34::f_00766a34, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00766b00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00766b00 {


u32 f_00766b00(u32 r0, u32 r1) {
    if (r1 >= 8u) {
        r1 = 1u;
    }
    return r0 + (r1 + (r1 << 1) << 2);
}

}  // namespace d_00766b00
GUEST_EXPORT(0x00766b00, d_00766b00::f_00766b00);

// f_00766bf8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00766bf8 {

struct __attribute__((packed)) Object_00766bf8_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00766bf8_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00766bf8_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00766bf8_0, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Object_00766bf8_1 {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u32 word_28;
    u32 word_2c;
};
GUEST_OFFSET(Object_00766bf8_1, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_00766bf8_1, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_00766bf8_1, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_00766bf8_1, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_00766bf8_1, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_00766bf8_1, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_00766bf8_1, word_2c, 0x2c);  // (from the original)

struct __attribute__((packed)) Local_00766bf8_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00766bf8_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00766bf8_ea_1, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x00766c64> global_00766c64;  // (from the original)

void f_00766bf8(gptr<Object_00766bf8_0> arg0, gptr<Object_00766bf8_1> arg1, float S0, float S1) {
    u32 r1 = arg1.addr();
    u32 r2_1 = arg1->word_2c;
    if (r2_1 != 0) {
        if (r2_1 == 1u) {
            gptr<Local_00766bf8_ea_1> ea_1 = gptr<Local_00766bf8_ea_1>(r1 + 0x20u);  // (from the original)
            u32 r2_2 = ea_1->word_0;
            u32 r3_1 = ea_1->word_4;
            u32 r1_1 = arg1->word_28;
            arg0->word_8 = r1_1;
            arg0->word_0 = r2_2;
            arg0->word_4 = r3_1;
            guest::cpu()->r[1] = r1_1;
            return;
        }
        float S0_1 = std::bit_cast<float>(arg1->word_1c) + std::bit_cast<float>(arg1->word_28);
        float S1_1 = std::bit_cast<float>(arg1->word_14) + std::bit_cast<float>(arg1->word_20);
        float S2_1 = std::bit_cast<float>(arg1->word_18) + std::bit_cast<float>(arg1->word_24);
        arg0->word_8 = std::bit_cast<u32>(S0_1);
        arg0->word_0 = std::bit_cast<u32>(S1_1);
        arg0->word_4 = std::bit_cast<u32>(S2_1);
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return;
    }
    float S0_2 = std::bit_cast<float>(*global_00766c64);
    arg0->word_0 = std::bit_cast<u32>(S0_2);
    arg0->word_4 = std::bit_cast<u32>(S0_2);
    arg0->word_8 = std::bit_cast<u32>(S0_2);
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1;
    return;
}

}  // namespace d_00766bf8
GUEST_EXPORT(0x00766bf8, d_00766bf8::f_00766bf8);

// f_00766c68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00766c68 {

struct __attribute__((packed)) Object_00766c68_0 {
    u8 unknown_0[0x30];  // (not used here)
    u32 word_30;
};
GUEST_OFFSET(Object_00766c68_0, word_30, 0x30);  // (from the original)


u32 f_00766c68(gptr<Object_00766c68_0> arg0, u32 r1) {
    u32 r0_1 = arg0->word_30 & r1;
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    return r0_1;
}

}  // namespace d_00766c68
GUEST_EXPORT(0x00766c68, d_00766c68::f_00766c68);

// f_00766c78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00766c78 {

struct __attribute__((packed)) Object_00766c78_0 {
    u8 unknown_0[0x16b4];  // (not used here)
    u32 word_16b4;
};
GUEST_OFFSET(Object_00766c78_0, word_16b4, 0x16b4);  // (from the original)


u32 f_00766c78(gptr<Object_00766c78_0> arg0) {
    return arg0->word_16b4 == 0x19u ? 0u : 1u;  // (from the original)
}

}  // namespace d_00766c78
GUEST_EXPORT(0x00766c78, d_00766c78::f_00766c78);

// f_00766e64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00766e64 {

struct __attribute__((packed)) Object_00766e64_0 {
    u8 unknown_0[0xc10];  // (not used here)
    u32 word_c10;
};
GUEST_OFFSET(Object_00766e64_0, word_c10, 0xc10);  // (from the original)

inline constexpr guest::Function<0x0073df8c, u32(u32, u32, u32, u32)> call_0073df8c;  // (from the original)

u32 f_00766e64(gptr<Object_00766e64_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    *frame.at<u32>(0) = 0;
    u32 r0_2 = call_0073df8c(arg0->word_c10, guest::cpu()->r[1], 0u, frame.at(0).addr());
    if (r0_2 != 0) {
        r0_2 = *frame.at<u32>(0);
    }
    return r0_2;
}

}  // namespace d_00766e64
GUEST_EXPORT_FRAMED(0x00766e64, d_00766e64::f_00766e64, 0x4000);  // pushes {lr} first, as the original

// f_00766f1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00766f1c {

inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)

u32 f_00766f1c(u32 r0_unused, u32 r1) {
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r4 = r1;
    u32 r0_1 = call_002f74e0(0x10u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    if (r0_1 == 0) {
        goto L_766f6c;
    }
    r0_2 = call_002f74e0(0x400000u, r4, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    if (r0_2 == 0) {
        return r0_2;
    }
    if (r4 == 0x2au) {  // (from the original)
        return 0u;
    }
L_766f50:;
    r0_3 = call_002f74e0(8u, r4, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_3 != 0) {
        return 2u;
    }
    goto L_767000;
L_766f6c:;
    r0_4 = call_002f74e0(0x20000u, r4, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    if (r0_4 != 0) {
        return 0u;
    }
    r0_5 = call_002f74e0(0x200000u, r4, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    if (r0_5 != 0) {
        return 0u;
    }
    r0_6 = call_002f74e0(0x8000u, r4, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    if (r0_6 != 0) {
        return 0u;
    }
    r0_7 = call_002f74e0(0x800000u, r4, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    if (r0_7 != 0 || r4 == 0x5bu || r4 == 0x36u || r4 == 0x37u || r4 == 0x34u || r4 == 5u) {  // (from the original)
        return 0u;
    }
    if (r4 != 0xbu && r4 != 0x11u && r4 != 0x17u) {  // (from the original)
        guest::preempt();
        goto L_766f50;
    }
    return 0u;
L_767000:;
    u32 r0_8 = call_002f74e0(0x400u, r4, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    if (r0_8 != 0) {
        return 2u;
    }
    u32 r0_9 = call_002f74e0(0x10000000u, r4, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    if (r0_9 == 0) {
        return 1u;
    }
    return 2u;
}

}  // namespace d_00766f1c
GUEST_EXPORT_FRAMED(0x00766f1c, d_00766f1c::f_00766f1c, 0x4010);  // pushes {r4, lr} first, as the original

// f_007680a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007680a0 {


u32 f_007680a0(gptr<Item> arg0) {
    u32 r0_1 = u32(arg0->id) & ~0x8000u;  // (from the original)
    u32 res_1 = r0_1 - 0x334fu;  // (from the original)
    u32 zf_1 = res_1 == 0;
    u32 r1_1 = res_1;
    if (!zf_1) {
        u32 res_2 = r0_1 - 0x3353u;  // (from the original)
        zf_1 = res_2 == 0;
        r1_1 = res_2;
    }
    if (zf_1) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    u32 res_3 = r0_1 - 0x3357u;  // (from the original)
    u32 zf_2 = res_3 == 0;
    u32 r1_2 = res_3;
    if (!zf_2) {
        u32 res_4 = r0_1 - 0x335bu;  // (from the original)
        zf_2 = res_4 == 0;
        r1_2 = res_4;
    }
    if (zf_2) {
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    u32 res_5 = r0_1 - 0x335fu;  // (from the original)
    u32 zf_3 = res_5 == 0;
    u32 r1_3 = res_5;
    if (!zf_3) {
        u32 res_6 = r0_1 - 0x3363u;  // (from the original)
        zf_3 = res_6 == 0;
        r1_3 = res_6;
    }
    if (!zf_3) {
        guest::cpu()->r[1] = r1_3;
        return 0u;
    }
    guest::cpu()->r[1] = r1_3;
    return 1u;
}

}  // namespace d_007680a0
GUEST_EXPORT(0x007680a0, d_007680a0::f_007680a0);

// f_00768400: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00768400 {


u32 f_00768400(gptr<Item> arg0) {
    u32 r0_1 = u32(arg0->id) & ~0x8000u;  // (from the original)
    if (r0_1 == 0xbu || r0_1 == 0xcu || r0_1 == 0xdu || r0_1 == 0xeu || r0_1 == 0xfu || r0_1 == 0x10u || r0_1 == 0x15u || r0_1 == 0x16u || r0_1 == 0x17u || r0_1 == 0x18u) {  // (from the original)
        return 1u;
    }
    if (r0_1 != 0x19u && r0_1 != 0x1au) {  // (from the original)
        return 0u;
    }
    return 1u;
}

}  // namespace d_00768400
GUEST_EXPORT(0x00768400, d_00768400::f_00768400);

// f_007689a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007689a4 {

inline constexpr guest::Function<0x004e0f14, u32(u32, u32, u32, u32)> call_004e0f14;  // (from the original)
inline constexpr guest::Function<0x005361a8, u32(u32, u32, u32, u32)> call_005361a8;  // (from the original)
inline constexpr guest::Function<0x00744df8, u32(u32, u32, u32, u32)> call_00744df8;  // (from the original)
inline constexpr guest::Function<0x00744f60, u32(u32, u32, u32, u32)> call_00744f60;  // (from the original)
inline constexpr guest::Function<0x00745218, u32(u32, u32, u32, u32)> call_00745218;  // (from the original)
inline constexpr guest::Function<0x007452e8, u32(u32, u32, u32, u32)> call_007452e8;  // (from the original)
inline constexpr guest::Function<0x007684a4, u32(u32, u32, u32, u32)> call_007684a4;  // (from the original)
inline constexpr guest::Function<0x0076880c, u32(u32, u32, u32, u32)> call_0076880c;  // (from the original)
inline constexpr guest::Function<0x007689a4, u32(u32, u32, u32, u32)> call_007689a4;  // (from the original)
inline constexpr guest::Function<0x00769d2c, u32(u32, u32, u32, u32)> call_00769d2c;  // (from the original)
inline constexpr guest::Function<0x0076b2b4, u32(u32, u32, u32, u32)> call_0076b2b4;  // (from the original)
inline constexpr guest::Function<0x0076bb34, u32(u32, u32, u32, u32)> call_0076bb34;  // (from the original)
inline constexpr guest::Function<0x0076c030, u32(u32, u32, u32, u32)> call_0076c030;  // (from the original)
inline constexpr guest::Function<0x0076c1a4, u32(u32, u32, u32, u32)> call_0076c1a4;  // (from the original)

u32 f_007689a4(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r3_3 = 0;
    u32 r5_1 = 0;
    u32 r0_4 = 0;
    u32 r3_4 = 0;
    u32 r0_5 = 0;
    u32 r3_5 = 0;
    u32 r0_6 = 0;
    u32 r1_2 = 0;
    u32 r3_6 = 0;
    u32 r0_7 = 0;
    u32 r3_7 = 0;
    u32 zf_1 = 0;
    u32 r0_13 = 0;
    u32 r0_17 = 0;
    *frame.at<u32>(0) = r3;
    u32 r10_1 = r0;
    r0 = call_005361a8(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    u32 r3_1 = guest::cpu()->r[3];
    if (r0 == 0) {
        return r0;
    }
    u32 r0_1 = call_007684a4(r10_1, r1, guest::cpu()->r[2], r3_1);
    r1 = guest::cpu()->r[1];
    u32 r3_2 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        goto L_768adc;
    }
    r0_2 = call_004e0f14(r10_1, r1, guest::cpu()->r[2], r3_2);
    r1 = guest::cpu()->r[1];
    r3_2 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        goto L_768adc;
    }
    r0_3 = call_00744f60(r0_2, 0u, guest::cpu()->r[2], r3_2);
    r1_1 = guest::cpu()->r[1];
    r3_3 = guest::cpu()->r[3];
    r5_1 = r0_3;
    r0_4 = call_0076b2b4(r10_1, r1_1, guest::cpu()->r[2], r3_3);
    r3_4 = guest::cpu()->r[3];
    r0_5 = call_00744df8(r0_2, r0_4, guest::cpu()->r[2], r3_4);
    r3_5 = guest::cpu()->r[3];
    r0_6 = call_00744f60(r0_2, r0_4, guest::cpu()->r[2], r3_5);
    r1_2 = guest::cpu()->r[1];
    r3_6 = guest::cpu()->r[3];
    r0_7 = call_0076bb34(r10_1, r1_2, guest::cpu()->r[2], r3_6);
    r1 = guest::cpu()->r[1];
    r3_7 = guest::cpu()->r[3];
    zf_1 = r0_7 == 0;
    if (!zf_1) {
        zf_1 = r0_7 == 1u;
    }
    if (zf_1) {
        u32 r0_8 = call_0076c1a4(r10_1, r1, guest::cpu()->r[2], r3_7);
        u32 r0_9 = call_00745218(r0_2, r0_8, guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r0_10 = call_007452e8(r0_2, r0_8, guest::cpu()->r[2], guest::cpu()->r[3]);
        r3_7 = guest::cpu()->r[3];
        r1 = r0_9 | r0_10;
        if (r1 == 0) {
            guest::cpu()->r[1] = r1;
            return r0_6;
        }
        if (r0_10 != 0) {
            r5_1 = r0_10;
        }
    }
    if (r0_5 != 0) {
        if (r0_7 != 2u && r0_7 != 4u && r0_7 != 8u) {
            guest::cpu()->r[1] = r1;
            return r5_1;
        }
        call_0076c030(frame.at(0).addr(), r10_1, guest::cpu()->r[2], r3_7);
        r0_13 = call_0076880c(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    } else {
        if (r0_6 != 0) {
            guest::cpu()->r[1] = r1;
            return r5_1;
        }
        if (r0_7 != 2u) {
            if (r0_7 != 4u && r0_7 != 8u) {
                guest::cpu()->r[1] = r1;
                return r5_1;
            }
        }
        call_0076c030(frame.at(0).addr(), r10_1, guest::cpu()->r[2], r3_7);
        r0_13 = call_007689a4(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1;
    return r0_13;
L_768adc:;
    u32 r0_16 = *gptr<u8>(r0 + 0xau);  // (from the original)
    if (r0_16 < 0x9bu) {  // (from the original)
        if (r0_16 == 0x47u) {  // (from the original)
            goto L_768b00;
        }
    }
    if (r0_16 >= 0x9bu || r0_16 != 0x48u) {  // (from the original)
        goto L_768b18;
    }
L_768b00:;
    r0_17 = call_00769d2c(r10_1, r1, guest::cpu()->r[2], r3_2);
    r1 = guest::cpu()->r[1];
    if (r0_17 != 0) {
        return u32(*gptr<u8>(r0_17 + 0x67u)) >> 4;  // (from the original)
    }
L_768b18:;
    u32 r0_18 = u32(*gptr<u8>(r0 + 0x18u)) & 0xfu;  // (from the original)
    if (r0_18 >= 0xfu) {  // (from the original)
        r0_18 = 0u;
    }
    guest::cpu()->r[1] = r1;
    return r0_18;
}

}  // namespace d_007689a4
GUEST_EXPORT_FRAMED(0x007689a4, d_007689a4::f_007689a4, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_00768c40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00768c40 {

struct __attribute__((packed)) Object_00768c40_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_00768c40_0, half_0, 0x0);  // (from the original)


u32 f_00768c40(gptr<Object_00768c40_0> arg0) {
    u32 r0_1 = u32(arg0->half_0) & ~0x8000u;  // (from the original)
    u32 res_1 = r0_1 - 0xbdu;  // (from the original)
    u32 zf_1 = res_1 == 0;
    if (zf_1) {
        return 1u;
    }
    if (!!zf_1 || (res_1 >> 0x1f) != (((r0_1 ^ 0xbdu) & (r0_1 ^ res_1)) >> 0x1f)) {  // (from the original)
        if (r0_1 == 0xa0u || r0_1 == 0xa6u || r0_1 == 0xacu || r0_1 == 0xb3u) {  // (from the original)
            return 1u;
        }
        return 0u;
    }
    if (r0_1 != 0xbeu && r0_1 != 0xc6u && r0_1 != 0xc8u) {  // (from the original)
        return 0u;
    }
    return 1u;
}

}  // namespace d_00768c40
GUEST_EXPORT(0x00768c40, d_00768c40::f_00768c40);

// f_00768dc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00768dc4 {

inline guest::global<u32, 0x0095c6d0> global_0095c6d0;  // (from the original)
inline constexpr guest::Function<0x002fccdc, u32(u32, u32)> call_002fccdc;  // (from the original)
inline constexpr guest::Function<0x0076e6cc, u32(u32, u32)> call_0076e6cc;  // (from the original)

u32 f_00768dc4(u32 r0, u32 r1) {
    u32 r0_3 = 0;
    u32 r4_1 = r1;
    u32 r0_1 = *global_0095c6d0;
    if (r0_1 != 0) {
        u32 r0_2 = call_0076e6cc(r0_1, r1);
        r1 = guest::cpu()->r[1];
        if (r0_2 == 8u) {
            goto L_768e08;
        }
    }
    if (r4_1 == 0) {
        goto L_768e08;
    }
    r0_3 = call_002fccdc(r0, r1);
    if (r0_3 == 0xau) {  // (from the original)
        return 1u;
    }
L_768e08:;
    u32 r0_4 = u32(*gptr<u16>(r0)) & ~0x8000u;  // (from the original)
    if (r0_4 == 0xau || r0_4 == 0x14u || r0_4 == 0x1eu || r0_4 == 9u || r0_4 == 0x13u || r0_4 == 0x1du || r0_4 == 0xbu || r0_4 == 0xcu || r0_4 == 0xdu || r0_4 == 0xeu || r0_4 == 0xfu || r0_4 == 0x10u || r0_4 == 0x15u || r0_4 == 0x16u || r0_4 == 0x17u || r0_4 == 0x18u) {  // (from the original)
        return 1u;
    }
    if (r0_4 != 0x19u && r0_4 != 0x1au) {  // (from the original)
        return 0u;
    }
    return 1u;
}

}  // namespace d_00768dc4
GUEST_EXPORT_FRAMED(0x00768dc4, d_00768dc4::f_00768dc4, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00768fac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00768fac {

struct __attribute__((packed)) Object_00768fac_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_00768fac_0, half_0, 0x0);  // (from the original)


u32 f_00768fac(gptr<Object_00768fac_0> arg0) {
    u32 r0_1 = u32(arg0->half_0) & ~0x8000u;  // (from the original)
    u32 res_1 = r0_1 - 0x30ccu;  // (from the original)
    u32 zf_1 = res_1 == 0;
    u32 r1_1 = res_1;
    if (!zf_1) {
        u32 res_2 = r0_1 - 0x30cdu;  // (from the original)
        zf_1 = res_2 == 0;
        r1_1 = res_2;
    }
    if (zf_1) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    u32 res_3 = r0_1 - 0x30ceu;  // (from the original)
    u32 zf_2 = res_3 == 0;
    u32 r1_2 = res_3;
    if (!zf_2) {
        u32 res_4 = r0_1 - 0x30cfu;  // (from the original)
        zf_2 = res_4 == 0;
        r1_2 = res_4;
    }
    if (zf_2) {
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    u32 res_5 = r0_1 - 0x30d0u;  // (from the original)
    u32 zf_3 = res_5 == 0;
    u32 r1_3 = res_5;
    if (!zf_3) {
        u32 res_6 = r0_1 - 0x30d1u;  // (from the original)
        zf_3 = res_6 == 0;
        r1_3 = res_6;
    }
    if (!zf_3) {
        guest::cpu()->r[1] = r1_3;
        return 0u;
    }
    guest::cpu()->r[1] = r1_3;
    return 1u;
}

}  // namespace d_00768fac
GUEST_EXPORT(0x00768fac, d_00768fac::f_00768fac);

// f_007695b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007695b0 {

struct __attribute__((packed)) Object_007695b0_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_007695b0_0, half_0, 0x0);  // (from the original)


u32 f_007695b0(gptr<Object_007695b0_0> arg0) {
    u32 r0_1 = u32(arg0->half_0) & ~0x8000u;  // (from the original)
    u32 res_1 = r0_1 - 0x28a8u;  // (from the original)
    u32 zf_1 = res_1 == 0;
    u32 r1_1 = res_1;
    if (!zf_1) {
        u32 res_2 = r0_1 - 0x28a9u;  // (from the original)
        zf_1 = res_2 == 0;
        r1_1 = res_2;
    }
    guest::cpu()->r[1] = r1_1;
    return zf_1 ? 1u : 0u;
}

}  // namespace d_007695b0
GUEST_EXPORT(0x007695b0, d_007695b0::f_007695b0);

// f_00769880: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00769880 {

struct __attribute__((packed)) Object_00769880_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_00769880_0, half_0, 0x0);  // (from the original)


u32 f_00769880(gptr<Object_00769880_0> arg0) {
    u32 r0_1 = u32(arg0->half_0) & ~0x8000u;  // (from the original)
    u32 res_1 = r0_1 - 0x290du;  // (from the original)
    u32 zf_1 = res_1 == 0;
    u32 r1_1 = res_1;
    if (!zf_1) {
        u32 res_2 = r0_1 - 0x290eu;  // (from the original)
        zf_1 = res_2 == 0;
        r1_1 = res_2;
    }
    guest::cpu()->r[1] = r1_1;
    return zf_1 ? 1u : 0u;
}

}  // namespace d_00769880
GUEST_EXPORT(0x00769880, d_00769880::f_00769880);

// f_00769cc0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00769cc0 {


u32 f_00769cc0(gptr<Item> arg0) {
    u32 r0_1 = u32(arg0->id) & ~0x8000u;  // (from the original)
    u32 r1_1 = r0_1 - 0x30ccu;  // (from the original)
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r1_2 = r0_1 - 0x30cdu;  // (from the original)
    if (r1_2 == 0) {
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    u32 r1_3 = r0_1 - 0x30ceu;  // (from the original)
    if (r1_3 == 0) {
        guest::cpu()->r[1] = r1_3;
        return 2u;
    }
    u32 r1_4 = r0_1 - 0x30cfu;  // (from the original)
    if (r1_4 == 0) {
        guest::cpu()->r[1] = r1_4;
        return 3u;
    }
    u32 r1_5 = r0_1 - 0x30d0u;  // (from the original)
    if (r1_5 == 0) {
        guest::cpu()->r[1] = r1_5;
        return 0u;
    }
    u32 r1_6 = r0_1 - 0x30d1u;  // (from the original)
    if (r1_6 != 0) {
        guest::cpu()->r[1] = r1_6;
        return ~0u;
    }
    guest::cpu()->r[1] = r1_6;
    return 1u;
}

}  // namespace d_00769cc0
GUEST_EXPORT(0x00769cc0, d_00769cc0::f_00769cc0);

// f_00769fb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00769fb8 {


u32 f_00769fb8(gptr<Item> arg0) {
    u32 r0 = arg0.addr();
    u32 r2 = 0x88e622u;  // (from the original)
    u32 r1 = 0u;
    r0 = u32(arg0->id) & ~0x8000u;  // (from the original)
    do {
        if (r0 == u32(*gptr<u16>(r2 + (r1 << 1)))) {
            guest::cpu()->r[1] = r1;
            return 1u;
        }
        r1 += 1u;
        guest::preempt();
    } while (r1 < 0x12u);  // (from the original)
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_00769fb8
GUEST_EXPORT(0x00769fb8, d_00769fb8::f_00769fb8);

// f_0076a068: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076a068 {

inline constexpr guest::Function<0x004e0f14, u32(u32, u32)> call_004e0f14;  // (from the original)
inline constexpr guest::Function<0x00745218, u32(u32, u32)> call_00745218;  // (from the original)
inline constexpr guest::Function<0x007452e8, u32(u32, u32)> call_007452e8;  // (from the original)
inline constexpr guest::Function<0x007684a4, u32(u32, u32, u32, u32)> call_007684a4;  // (from the original)

u32 f_0076a068(u32 r0, u32 r1) {
    u32 r0_4 = 0;
    u32 res_1 = 0;
    u32 r0_1 = call_007684a4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        u32 r0_2 = call_004e0f14(r0, r1_1);
        r1_1 = guest::cpu()->r[1];
        if (r0_2 != 0) {
            u32 r0_3 = call_007684a4(r0, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
            if (r0_3 == 0) {
                goto L_76a0bc;
            }
            r0_4 = call_004e0f14(r0, guest::cpu()->r[1]);
            r1_1 = guest::cpu()->r[1];
            if (r0_4 == 0) {
                goto L_76a0bc;
            }
            res_1 = u32(*gptr<u8>(r0_4 + 0x20u)) >> 3u & 1u;  // (from the original)
            if (res_1 != 0) {
                return 1u;
            }
L_76a0bc:;
            u32 r0_5 = call_00745218(r0_2, 1u);
            r1_1 = guest::cpu()->r[1];
            if (r0_5 != 0) {
                return 1u;
            }
            u32 r0_6 = call_007452e8(r0_2, 1u);
            r1_1 = guest::cpu()->r[1];
            if (r0_6 != 0) {
                return 1u;
            }
        }
        u32 res_2 = (u32(*gptr<u16>(r0)) & ~0x8000u) - 0x2f38u;  // (from the original)
        u32 zf_1 = res_2 == 0;
        u32 r0_7 = res_2;
        if (!zf_1) {
            u32 res_3 = r0_7 - 0x112u;  // (from the original)
            zf_1 = res_3 == 0;
            r0_7 = res_3;
        }
        if (!zf_1) {
            zf_1 = r0_7 == 1u;
        }
        if (zf_1) {
            guest::cpu()->r[1] = r1_1;
            return 1u;
        }
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_0076a068
GUEST_EXPORT_FRAMED(0x0076a068, d_0076a068::f_0076a068, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0076a11c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076a11c {

inline constexpr guest::Function<0x004e0f14, u32(u32, u32, u32, u32)> call_004e0f14;  // (from the original)
inline constexpr guest::Function<0x005361a8, u32(u32, u32)> call_005361a8;  // (from the original)
inline constexpr guest::Function<0x00745404, u32(u32, u32)> call_00745404;  // (from the original)

u32 f_0076a11c(u32 r0, u32 r1) {
    u32 res_2 = 0;
    u32 res_3 = 0;
    u32 res_4 = 0;
    u32 res_5 = 0;
    u32 r0_8 = 0;
    u32 r0_1 = call_004e0f14(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        call_005361a8(r1, r1_1);
        u32 r0_2 = u32(*gptr<u16>(r1)) & ~0x8000u;  // (from the original)
        if ((r0_2 - 0x20a1u) == 0) {  // (from the original)
            u32 r0_3 = call_00745404(r0_1, 1u);
            r1_1 = guest::cpu()->r[1];
            if (r0_3 != 0) {
                goto L_76a228;
            }
            return 0u;
        }
        res_2 = r0_2 - 0x20a2u;  // (from the original)
        if (res_2 == 0) {
            u32 r0_4 = call_00745404(r0_1, 2u);
            r1_1 = guest::cpu()->r[1];
            if (r0_4 != 0) {
                goto L_76a228;
            }
            return 0u;
        }
        res_3 = r0_2 - 0x20a3u;  // (from the original)
        if (res_3 == 0) {
            u32 r0_5 = call_00745404(r0_1, 3u);
            r1_1 = guest::cpu()->r[1];
            if (r0_5 != 0) {
                goto L_76a228;
            }
            return 0u;
        }
        res_4 = r0_2 - 0x20a4u;  // (from the original)
        if (res_4 == 0) {
            u32 r0_6 = call_00745404(r0_1, 4u);
            r1_1 = guest::cpu()->r[1];
            if (r0_6 != 0) {
                goto L_76a228;
            }
            return 0u;
        }
        res_5 = r0_2 - 0x20a5u;  // (from the original)
        if (res_5 == 0) {
            u32 r0_7 = call_00745404(r0_1, 5u);
            r1_1 = guest::cpu()->r[1];
            if (r0_7 != 0) {
                goto L_76a228;
            }
            return 0u;
        }
        r1_1 = r0_2 - 0x20a6u;  // (from the original)
        if (r1_1 != 0) {
            guest::cpu()->r[1] = r1_1;
            return 0u;
        }
        r0_8 = call_00745404(r0_1, 6u);
        r1_1 = guest::cpu()->r[1];
        if (r0_8 == 0) {
            return 0u;
        }
L_76a228:;
        r0_1 = 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0076a11c
GUEST_EXPORT_FRAMED(0x0076a11c, d_0076a11c::f_0076a11c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0076a4ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076a4ac {


u32 f_0076a4ac(gptr<Item> arg0) {
    u32 r0_1 = u32(arg0->flags) & 0x388u;  // (from the original)
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    return r0_1;
}

}  // namespace d_0076a4ac
GUEST_EXPORT(0x0076a4ac, d_0076a4ac::f_0076a4ac);

// f_0076a590: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076a590 {

inline constexpr guest::Function<0x005359fc, u32(u32)> call_005359fc;  // (from the original)
inline constexpr guest::Function<0x005361a8, u32(u32, u32)> call_005361a8;  // (from the original)

u32 f_0076a590(u32 r0, u32 r1) {
    u32 r0_3 = 0;
    u32 r0_6 = 0;
    u32 r0_10 = 0;
    u32 r0_1 = call_005361a8(r0, r1);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        return 0x7ffeu;  // (from the original)
    }
    u32 r0_2 = *gptr<u8>(r0_1 + 0xau);  // (from the original)
    if (r0_2 >= 0x9bu) {  // (from the original)
        return 0x7ffeu;  // (from the original)
    }
    u32 r5_1 = ~0u;
    if (r0_2 != 0x33u) {  // (from the original)
        if (r0_2 == 0x34u) {  // (from the original)
            goto L_76a61c;
        }
        return 0x7ffeu;  // (from the original)
    }
    r0_3 = call_005361a8(r0, r1_1);
    if (r0_3 != 0) {
        u32 r0_4 = *gptr<u8>(r0_3 + 0xau);  // (from the original)
        u32 r4_1 = u32(*gptr<u16>(r0)) & ~0x8000u;  // (from the original)
        if (r0_4 >= 0x9bu) {  // (from the original)
            r0_4 = 0u;
        }
        u32 r0_5 = call_005359fc(r0_4);
        r5_1 = r4_1 - u32(*gptr<u16>(r0_5));
    }
    r0_6 = call_005359fc(0x75u);  // (from the original)
    r1_1 = *gptr<u32>(r0_6 + 4u);
    if (r1_1 > r5_1) {
        r0_10 = uxth(u32(*gptr<u16>(r0_6)) + r5_1);
        guest::cpu()->r[1] = r1_1;
        return r0_10;
    }
    guest::cpu()->r[1] = r1_1;
    return 0x7ffeu;  // (from the original)
L_76a61c:;
    u32 r0_7 = call_005361a8(r0, r1_1);
    if (r0_7 != 0) {
        u32 r0_8 = *gptr<u8>(r0_7 + 0xau);  // (from the original)
        u32 r4_2 = u32(*gptr<u16>(r0)) & ~0x8000u;  // (from the original)
        if (r0_8 >= 0x9bu) {  // (from the original)
            r0_8 = 0u;
        }
        u32 r0_9 = call_005359fc(r0_8);
        r5_1 = r4_2 - u32(*gptr<u16>(r0_9));
    }
    r0_6 = call_005359fc(0x76u);  // (from the original)
    r1_1 = *gptr<u32>(r0_6 + 4u);
    if (r1_1 <= r5_1) {
        guest::cpu()->r[1] = r1_1;
        return 0x7ffeu;  // (from the original)
    }
    r0_10 = uxth(u32(*gptr<u16>(r0_6)) + r5_1);
    guest::cpu()->r[1] = r1_1;
    return r0_10;
}

}  // namespace d_0076a590
GUEST_EXPORT_FRAMED(0x0076a590, d_0076a590::f_0076a590, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0076a730: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076a730 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x00313124, u32(u32, u32, u32)> call_00313124;  // (from the original)
inline constexpr guest::Function<0x005b4724, u32(u32, u32, u32)> call_005b4724;  // (from the original)
inline constexpr guest::Function<0x00724424, u32(u32, u32, u32)> call_00724424;  // (from the original)
inline constexpr guest::Function<0x00724578, u32(u32, u32, u32)> call_00724578;  // (from the original)
inline constexpr guest::Function<0x0076a7f8, u32(u32, u32, u32, u32)> call_0076a7f8;  // (from the original)

u32 f_0076a730(u32 r0, u32 r1, u32 r2) {
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    u32 r0_1 = call_002fb94c(r0, r1, r2, guest::cpu()->r[3]);
    u32 r0_3 = call_00724424(r0_1 + 0x6bd0u, r1, 0u);  // (from the original)
    u32 r0_4 = call_002fb94c(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_6 = call_00724578(r0_4 + 0x6bd0u, r1, guest::cpu()->r[2]);  // (from the original)
    u32 r0_7 = call_002fcaf4(r0_3, guest::cpu()->r[1], guest::cpu()->r[2]);
    r1 = guest::cpu()->r[1];
    u32 r2_4 = guest::cpu()->r[2];
    if (r0_7 == 0 && r0_6 == 0) {
        goto L_76a788;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return 0u;
L_76a788:;
    u32 r0_8 = call_002f74c8(r0_7, r1, r2_4);
    r0 = call_002f74e0(8u, r0_8, guest::cpu()->r[2]);
    r1 = guest::cpu()->r[1];
    u32 r2_6 = guest::cpu()->r[2];
    if (r0 != 0) {
        r0 = call_005b4724(r0, r1, r2_6);
        r1 = guest::cpu()->r[1];
        r2_6 = guest::cpu()->r[2];
        if (r0 == 0) {
            guest::cpu()->r[13] += 0x10u;  // (from the original)
            return r0;
        }
    }
    u32 r0_9 = call_002f74c8(r0, r1, r2_6);
    u32 r0_10 = call_002f74e0(4u, r0_9, guest::cpu()->r[2]);
    r1 = guest::cpu()->r[1];
    u32 r2_8 = guest::cpu()->r[2];
    if (r0_10 != 0) {
        u32 r0_11 = call_00313124(r0_3, r1, r2_8);
        r1 = guest::cpu()->r[1];
        r2_8 = guest::cpu()->r[2];
        if (r0_11 != 0) {
            guest::cpu()->r[13] += 0x10u;  // (from the original)
            return 0u;
        }
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_0076a7f8(r0_3, r1, r2_8, guest::cpu()->r[3]);
}

}  // namespace d_0076a730
GUEST_EXPORT(0x0076a730, d_0076a730::f_0076a730);

// f_0076a880: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076a880 {

inline constexpr guest::Function<0x004e0f14, u32(u32, u32, u32, u32)> call_004e0f14;  // (from the original)
inline constexpr guest::Function<0x005361a8, u32(u32, u32)> call_005361a8;  // (from the original)
inline constexpr guest::Function<0x007453f0, u32(u32, u32)> call_007453f0;  // (from the original)
inline constexpr guest::Function<0x007684a4, u32(u32, u32)> call_007684a4;  // (from the original)
inline constexpr guest::Function<0x0076a068, u32(u32, u32)> call_0076a068;  // (from the original)

u32 f_0076a880(u32 r0, u32 r1) {
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r0_1 = call_004e0f14(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        call_005361a8(r1, r1_1);
        u32 r0_2 = call_0076a068(r0, guest::cpu()->r[1]);
        r1_1 = guest::cpu()->r[1];
        if (r0_2 == 0) {
            goto L_76a968;
        }
        r0_3 = call_004e0f14(r0, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        if (r0_3 == 0) {
            goto L_76a968;
        }
        r0_4 = call_007453f0(r0_3, 1u);
        r1_1 = guest::cpu()->r[1];
        if (r0_4 == 0) {
            u32 r0_5 = call_007684a4(r0, r1_1);
            r1_1 = guest::cpu()->r[1];
            if (r0_5 == 0) {
                goto L_76a968;
            }
            u32 r0_6 = call_004e0f14(r0, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1_1 = guest::cpu()->r[1];
            if (r0_6 == 0) {
                goto L_76a968;
            }
            if ((u32(*gptr<u8>(r0_6 + 0x20u)) >> 3u & 1u) == 0) {  // (from the original)
                goto L_76a968;
            }
            u32 r0_7 = call_007453f0(r0_3, 2u);
            r1_1 = guest::cpu()->r[1];
            if (r0_7 == 0) {
                goto L_76a968;
            }
        }
        r0_8 = call_005361a8(r1, r1_1);
        r1_1 = guest::cpu()->r[1];
        if (r0_8 == 0) {
            goto L_76a940;
        }
        r0_9 = *gptr<u8>(r0_8 + 0xau);  // (from the original)
        if (r0_9 >= 0x9bu) {  // (from the original)
            goto L_76a940;
        }
        if (r0_9 == 6u || r0_9 == 7u) {
            return 1u;
        }
L_76a940:;
        r0_10 = call_005361a8(r1, r1_1);
        r1_1 = guest::cpu()->r[1];
        if (r0_10 == 0) {
            goto L_76a968;
        }
        r0_11 = *gptr<u8>(r0_10 + 0xau);  // (from the original)
        if (r0_11 >= 0x9bu) {  // (from the original)
            goto L_76a968;
        }
        if (r0_11 == 0x47u) {  // (from the original)
            return 1u;
        }
L_76a968:;
        r0_1 = 0u;
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0076a880
GUEST_EXPORT_FRAMED(0x0076a880, d_0076a880::f_0076a880, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0076ab7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076ab7c {

inline constexpr guest::Function<0x0076af88, u32(u32, u32, u32, u32)> call_0076af88;  // (from the original)

u32 f_0076ab7c(u32 r0, u32 r1) {
    u32 r0_1 = call_0076af88(r0, r1, r0, guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    if (r0_1 == 0) {
        return r0_1;
    }
    u32 r0_2 = call_0076af88(r2_1, r1_1, r2_1, guest::cpu()->r[3]);
    u32 r1_2 = guest::cpu()->r[1];
    u32 r2_2 = guest::cpu()->r[2];
    if (r0_2 != 0) {
        if (((u32(*gptr<u16>(r2_2 + 2u)) & 8u) >> 3) != 0) {
            return 1u;
        }
    }
    u32 r1_3 = r1_2 + 7u;
    u32 r0_3 = lsl_r(1u, r1_3 & 0xff) & ~0xc000u & u32(*gptr<u16>(r2_2 + 2u));  // (from the original)
    if (r0_3 == 0) {
        guest::cpu()->r[1] = r1_3;
        return r0_3;
    }
    guest::cpu()->r[1] = r1_3;
    return 1u;
}

}  // namespace d_0076ab7c
GUEST_EXPORT_FRAMED(0x0076ab7c, d_0076ab7c::f_0076ab7c, 0x4000);  // pushes {lr} first, as the original

// f_0076acd8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076acd8 {

struct __attribute__((packed)) Object_0076acd8_0 {
    u16 half_0;
    u16 half_2;
};
GUEST_OFFSET(Object_0076acd8_0, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0076acd8_0, half_2, 0x2);  // (from the original)


u32 f_0076acd8(gptr<Object_0076acd8_0> arg0) {
    u32 r12_1 = arg0->half_0;
    u32 r2_1 = 0x334eu;  // (from the original)
    u32 r1_1 = r12_1 & ~0x8000u;  // (from the original)
    if (r1_1 != 0x334du && r1_1 != r2_1) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r1_2 = r12_1 & ~0x8000u;  // (from the original)
    if (r1_2 != 0x334du && r1_2 != r2_1) {  // (from the original)
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    if ((u32(arg0->half_2) & 0xfu) >= 8u) {  // (from the original)
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    guest::cpu()->r[1] = r1_2;
    return 0u;
}

}  // namespace d_0076acd8
GUEST_EXPORT(0x0076acd8, d_0076acd8::f_0076acd8);

// f_0076ad24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076ad24 {

inline constexpr guest::Function<0x0076af88, u32(u32, u32)> call_0076af88;  // (from the original)

u32 f_0076ad24(u32 r0) {
    u32 r0_1 = call_0076af88(r0, r0);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        return ~0u;
    }
    u32 r0_3 = *gptr<u16>(r1_1 + 2u);
    u32 r1_2 = (r0_3 & 8u) >> 3;
    if (r1_2 == 0) {
        guest::cpu()->r[1] = r1_2;
        return ~0u;
    }
    u32 r1_3 = (r0_3 & 8u) >> 3;
    if (r1_3 != 0) {
        guest::cpu()->r[1] = r1_3;
        return r0_3 >> 4u & 7u;
    }
    guest::cpu()->r[1] = r1_3;
    return ~0u;
}

}  // namespace d_0076ad24
GUEST_EXPORT_FRAMED(0x0076ad24, d_0076ad24::f_0076ad24, 0x4000);  // pushes {lr} first, as the original

// f_0076ad64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076ad64 {


u32 f_0076ad64(gptr<Item> arg0) {
    return u32(arg0->flags) & ~0xc000u;  // (from the original)
}

}  // namespace d_0076ad64
GUEST_EXPORT(0x0076ad64, d_0076ad64::f_0076ad64);

// f_0076adf4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076adf4 {


u32 f_0076adf4(gptr<Item> arg0) {
    u32 r1_1 = u32(arg0->id) & ~0x8000u;  // (from the original)
    u32 r0_1 = (r1_1 == 0x334du || r1_1 == 0x334eu) ? u32(arg0->flags) & 0xfu : 0u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0076adf4
GUEST_EXPORT(0x0076adf4, d_0076adf4::f_0076adf4);

// f_0076ae1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076ae1c {


u32 f_0076ae1c(gptr<Item> arg0) {
    u32 r1_1 = u32(arg0->id) & ~0x8000u;  // (from the original)
    u32 r0_1 = r1_1 == 0x2000u ? u32(arg0->flags) & ~0xc000u : 0u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0076ae1c
GUEST_EXPORT(0x0076ae1c, d_0076ae1c::f_0076ae1c);

// f_0076ae38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076ae38 {


u32 f_0076ae38(gptr<Item> arg0) {
    u32 r0_1 = u32(arg0->id) & ~0x8000u;  // (from the original)
    u32 res_1 = r0_1 - 0x3064u;  // (from the original)
    u32 zf_1 = res_1 == 0;
    u32 r2_1 = r0_1 - 0x3064u;  // (from the original)
    if (zf_1) {
        guest::cpu()->r[1] = 0x3064u;  // (from the original)
        return 1u;
    }
    if (!!zf_1 || (res_1 >> 0x1f) != (((r0_1 ^ 0x3064u) & (r0_1 ^ res_1)) >> 0x1f)) {  // (from the original)
        u32 res_2 = r0_1 - 0x3057u;  // (from the original)
        u32 zf_2 = res_2 == 0;
        if (!zf_2) {
            zf_2 = res_2 == 1u;
        }
        if (zf_2 || res_2 == 3u || res_2 == 4u) {
            guest::cpu()->r[1] = 0x3064u;  // (from the original)
            return 1u;
        }
        guest::cpu()->r[1] = 0x3064u;  // (from the original)
        return 0u;
    }
    if (r2_1 != 1u && r2_1 != 3u && r2_1 != 4u) {
        guest::cpu()->r[1] = 0x3064u;  // (from the original)
        return 0u;
    }
    guest::cpu()->r[1] = 0x3064u;  // (from the original)
    return 1u;
}

}  // namespace d_0076ae38
GUEST_EXPORT(0x0076ae38, d_0076ae38::f_0076ae38);

// f_0076afbc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076afbc {

inline constexpr guest::Function<0x005361a8, u32(u32, u32, u32, u32)> call_005361a8;  // (from the original)
inline constexpr guest::Function<0x007486dc, u32(u32, u32)> call_007486dc;  // (from the original)

u32 f_0076afbc(u32 r0, u32 r1) {
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 b_1 = 0;
    u32 res_1 = 0;
    u32 zf_1 = 0;
    goto L_76afbc;
L_748658:;
    r1_1 = *gptr<u8>(r0 + 0x11u);  // (from the original)
    if (r1_1 >= 0x56u || r1_1 == 0) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    r0_1 = *gptr<u8>(r0 + 0x19u);  // (from the original)
    b_1 = r0_1 >> 4;
    if (6u <= b_1) {
        guest::cpu()->r[1] = 6u;
        return 1u;
    }
    res_1 = r0_1 >> 4;
    zf_1 = res_1 == 0;
    if (!zf_1) {
        zf_1 = res_1 == 1u;
    }
    if (!zf_1) {
        zf_1 = res_1 == 2u;
    }
    if (zf_1) {
        guest::cpu()->r[1] = 6u;
        return 1u;
    }
    guest::cpu()->r[1] = 6u;
    return 0u;
L_76afbc:;
    u32 r0_2 = call_005361a8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_2 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        return 0u;
    }
    u32 r0_3 = call_007486dc(r0_2, r1_2);
    u32 r1_3 = guest::cpu()->r[1];
    if (r0_3 == 0) {
        return 0u;
    }
    r0 = call_005361a8(r0, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::preempt();
    goto L_748658;
}

}  // namespace d_0076afbc
GUEST_EXPORT_FRAMED(0x0076afbc, d_0076afbc::f_0076afbc, 0x4010);  // pushes {r4, lr} first, as the original

// f_0076b2b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076b2b4 {

inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x004e0f14, u32(u32, u32)> call_004e0f14;  // (from the original)
inline constexpr guest::Function<0x007450c4, u32(u32, u32)> call_007450c4;  // (from the original)
inline constexpr guest::Function<0x007453a4, u32(u32, u32)> call_007453a4;  // (from the original)
inline constexpr guest::Function<0x007684a4, u32(u32, u32, u32, u32)> call_007684a4;  // (from the original)
inline constexpr guest::Function<0x0076a11c, u32(u32, u32)> call_0076a11c;  // (from the original)

u32 f_0076b2b4(u32 r0, u32 r1) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r5 = 0;
    u32 r6 = 0;
    u32 r8 = 0;
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r0_2 = 0;
    u32 zf_1 = 0;
    u32 cf_1 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    u32 r0_6 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r0_17 = 0;
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
    u32 r0_32 = 0;
    u32 r9 = r0;
    u32 r0_1 = call_007684a4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    u32 r4 = 0u;
    if (r0_1 == 0) {
        goto L_76b388;
    }
    r0_2 = u32(*gptr<u16>(r9 + 2u)) >> 0xau & 0xfu;  // (from the original)
    if (r0_2 > 0xdu || r0_2 == 0) {  // (from the original)
        goto L_76b388;
    }
    if (r0_2 <= 7u) {
        r10 = 1u;
        goto L_76b304;
    }
    zf_1 = r0_2 == 9u;
    cf_1 = r0_2 >= 9u;
    if (!cf_1 || zf_1) {
        r10 = 2u;
    }
    if (cf_1 && !zf_1) {
        r10 = 4u;
    }
L_76b304:;
    r0_3 = call_007684a4(r9, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_3 == 0) {
        r5 = 0u;
        goto L_76b32c;
    }
    r5 = u32(*gptr<u16>(r9 + 2u)) >> 0xau & 0xfu;  // (from the original)
    if (r5 > 0xdu) {  // (from the original)
        r5 = r4;
    }
L_76b32c:;
    if (r10 == 1u) {
        return r5;
    }
    r0_5 = call_007684a4(r9, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    if (r0_5 == 0) {
        goto L_76b390;
    }
    r0_6 = call_004e0f14(r9, r1_2);
    r1_2 = guest::cpu()->r[1];
    r6 = r0_6;
    if (r0_6 == 0) {
        goto L_76b390;
    } else {
        r8 = 0u;
        r4 = 1u;
    }
    do {
        u32 r0_7 = call_007453a4(r6, r4);
        r1_2 = guest::cpu()->r[1];
        if (r0_7 != 0) {
            r8 += 1u;
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 <= 0xeu);  // (from the original)
    goto L_76b394;
L_76b388:;
    r10 = r4;
    guest::preempt();
    goto L_76b304;
L_76b390:;
    r8 = 0u;
L_76b394:;
    r6 = 0u;
    r0_4 = call_004e0f14(r9, r1_2);
    u32 r1_3 = guest::cpu()->r[1];
    *frame.at<u32>(0) = r0_4;
    if (r0_4 == 0) {
        return r0_4;
    }
    r4 = r8 + 1u;
    u32 r7 = r8 + 3u;
    u32 zf_2 = r7 == r4;
    u32 cf_2 = r7 >= r4;
    if (cf_2 && !zf_2) {
        r11 = 0x20a2u;  // (from the original)
    }
    if (!!cf_2 && !zf_2) {
        do {
            u32 r0_9 = call_007450c4(*frame.at<u32>(0), r4);
            r1_3 = guest::cpu()->r[1];
            if (r0_9 != 1u) {
                if (r0_9 != 2u) {
                    goto L_76b438;
                }
            } else {
                u32 r0_11 = call_002fcbb0(frame.at(4).addr(), 0x20a1u);  // (from the original)
                u32 r0_12 = call_0076a11c(r9, r0_11);
                r1_3 = guest::cpu()->r[1];
                if (r0_12 != 0) {
                    r6 += 1u;
                }
                if (r5 == 8u) {
                    return r8 + r6;
                }
                goto L_76b438;
            }
            r0_13 = frame.at(4).addr();
            r0_14 = call_002fcbb0(r0_13, r11);
            r0_15 = call_0076a11c(r9, r0_14);
            r1_3 = guest::cpu()->r[1];
            if (r0_15 != 0) {
                r6 += 1u;
            }
            if (r5 == 9u) {
                return r8 + r6;
            }
L_76b438:;
            r4 += 1u;
            guest::preempt();
        } while (r4 < r7);
    }
    r7 = 0u;
    u32 r0_16 = call_007684a4(r9, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_16 == 0) {
        goto L_76b4a8;
    }
    r0_17 = call_004e0f14(r9, guest::cpu()->r[1]);
    r11 = r0_17;
    if (r0_17 == 0) {
        goto L_76b4a8;
    } else {
        r6 = 0u;
        r4 = 1u;
    }
    do {
        u32 r0_18 = call_007450c4(r11, r4);
        if (r0_18 == 1u || r0_18 == 2u) {
            r6 += 1u;
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0xeu);  // (from the original)
    goto L_76b4ac;
L_76b4a8:;
    r6 = 0u;
L_76b4ac:;
    r6 += r8;
    r4 = r6 + 1u;
    u32 zf_3 = r4 == 0xdu;  // (from the original)
    u32 cf_3 = r4 >= 0xdu;  // (from the original)
    if (!cf_3 || zf_3) {
        r8 = 0x20a3u;  // (from the original)
        r11 = r8 + 1u;
    }
    if (!cf_3 || !!zf_3) {
        do {
            u32 r0_20 = call_007450c4(*frame.at<u32>(0), r4);
            if (r0_20 != 3u) {
                if (r0_20 == 4u) {
                    goto L_76b524;
                }
                if (r0_20 == 5u) {
                    goto L_76b550;
                }
                if (r0_20 != 6u) {
                    goto L_76b5a4;
                }
                goto L_76b57c;
            }
            r0_21 = frame.at(4).addr();
            r0_22 = call_002fcbb0(r0_21, r8);
            r0_23 = call_0076a11c(r9, r0_22);
            if (r0_23 != 0) {
                r7 += 1u;
            }
            if (r5 == 0xau) {  // (from the original)
                return r6 + r7;
            }
            goto L_76b5a4;
L_76b524:;
            r0_24 = frame.at(4).addr();
            r0_25 = call_002fcbb0(r0_24, r11);
            r0_26 = call_0076a11c(r9, r0_25);
            if (r0_26 != 0) {
                r7 += 1u;
            }
            if (r5 == 0xbu) {  // (from the original)
                return r6 + r7;
            }
            goto L_76b5a4;
L_76b550:;
            r0_27 = frame.at(4).addr();
            r0_28 = call_002fcbb0(r0_27, 0x20a5u);  // (from the original)
            r0_29 = call_0076a11c(r9, r0_28);
            if (r0_29 != 0) {
                r7 += 1u;
            }
            if (r5 == 0xcu) {  // (from the original)
                return r6 + r7;
            }
            goto L_76b5a4;
L_76b57c:;
            r0_30 = frame.at(4).addr();
            r0_31 = call_002fcbb0(r0_30, 0x20a6u);  // (from the original)
            r0_32 = call_0076a11c(r9, r0_31);
            if (r0_32 != 0) {
                r7 += 1u;
            }
            if (r5 == 0xdu) {  // (from the original)
                return r6 + r7;
            }
L_76b5a4:;
            r4 += 1u;
            guest::preempt();
        } while (r4 <= 0xdu);  // (from the original)
    }
    return 0u;
}

}  // namespace d_0076b2b4
GUEST_EXPORT_FRAMED(0x0076b2b4, d_0076b2b4::f_0076b2b4, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_0076b984: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076b984 {

inline constexpr guest::Function<0x00535a68, u32(u32)> call_00535a68;  // (from the original)

u32 f_0076b984(u32 r0) {
    u32 r0_1 = call_00535a68(r0);
    if (r0_1 == 0) {
        guest::cpu()->r[1] = r0_1;
        return r0_1;
    }
    u32 r0_2 = r0_1 + 4u;
    *gptr<u8>(r0_1 + 0xcu) = 0;  // (from the original)
    u32 r1_1 = *gptr<u8>(r0_1 + 4u);
    if (r1_1 == 0) {
        r0_2 = 0u;
    }
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_0076b984
GUEST_EXPORT_FRAMED(0x0076b984, d_0076b984::f_0076b984, 0x4010);  // pushes {r4, lr} first, as the original

// f_0076bab4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076bab4 {


u32 f_0076bab4(gptr<Item> arg0) {
    return u32(arg0->flags) >> 8u & 0xfu;  // (from the original)
}

}  // namespace d_0076bab4
GUEST_EXPORT(0x0076bab4, d_0076bab4::f_0076bab4);

// f_0076bb90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076bb90 {

inline guest::global<u32, 0x0076bc7c> global_0076bc7c;  // (from the original)
inline guest::global<u32, 0x0095bfd8> global_0095bfd8;  // (from the original)
inline guest::global<u32, 0x00ad4ad4> global_00ad4ad4;  // (from the original)
inline guest::global<u32, 0x00ad4ad8> global_00ad4ad8;  // (from the original)
inline guest::global<u32, 0x00ad4adc> global_00ad4adc;  // (from the original)
inline guest::global<u32, 0x00ad4ae0> global_00ad4ae0;  // (from the original)
inline constexpr guest::Function<0x002fe7dd, u32(u32)> call_002fe7dc;  // (from the original)
inline constexpr guest::Function<0x007684a4, u32(u32)> call_007684a4;  // (from the original)

u32 f_0076bb90(u32 r0, float S0) {
    u32 r0_2 = 0;
    u32 zf_1 = 0;
    u32 cf_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_1 = call_007684a4(r0);
    float S0_1 = guest::cpu()->s[0];
    if (r0_1 == 0) {
        goto L_76bc1c;
    }
    r0_2 = u32(*gptr<u16>(r0 + 2u)) >> 0xau & 0xfu;  // (from the original)
    if (r0_2 > 0xdu) {  // (from the original)
        goto L_76bc1c;
    }
    zf_1 = r0_2 == 0;
    cf_1 = r0_2 >= 0u;
    if (!zf_1) {
        zf_1 = r0_2 == 7u;
        cf_1 = r0_2 >= 7u;
    }
    if (cf_1 && !zf_1) {
        zf_1 = r0_2 == 9u;
        cf_1 = r0_2 >= 9u;
    }
    if (!cf_1 || zf_1) {
        goto L_76bc1c;
    }
    r0_3 = call_007684a4(r0);
    S0_1 = guest::cpu()->s[0];
    if (r0_3 == 0) {
        goto L_76bc1c;
    }
    r0_4 = u32(*gptr<u16>(r0 + 2u)) >> 0xau & 0xfu;  // (from the original)
    if (r0_4 > 0xdu) {  // (from the original)
        goto L_76bc1c;
    }
    if (r0_4 == 0xau) {  // (from the original)
        return 0x9c9068u;  // (from the original)
    }
    if (r0_4 == 0xbu) {  // (from the original)
        return 0x9c9078u;  // (from the original)
    }
    if (r0_4 == 0xcu) {  // (from the original)
        return 0x9c9088u;  // (from the original)
    }
    if (r0_4 == 0xdu) {  // (from the original)
        return 0x9c9098u;  // (from the original)
    }
L_76bc1c:;
    if ((*global_0095bfd8 & 1u) != 0) {
        guest::cpu()->s[0] = S0_1;
        return 0xad4ad4u;  // (from the original)
    }
    guest::cpu()->s[0] = S0_1;
    u32 r0_5 = call_002fe7dc(0x95bfd8u);  // (from the original)
    if (r0_5 == 0) {
        return 0xad4ad4u;  // (from the original)
    }
    float S0_3 = std::bit_cast<float>(*global_0076bc7c);
    *global_00ad4ad4 = std::bit_cast<u32>(S0_3);
    *global_00ad4ad8 = std::bit_cast<u32>(S0_3);
    *global_00ad4adc = std::bit_cast<u32>(S0_3);
    *global_00ad4ae0 = std::bit_cast<u32>(S0_3);
    guest::cpu()->s[0] = S0_3;
    return 0xad4ad4u;  // (from the original)
}

}  // namespace d_0076bb90
GUEST_EXPORT_FRAMED(0x0076bb90, d_0076bb90::f_0076bb90, 0x4010);  // pushes {r4, lr} first, as the original

// f_0076bc84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076bc84 {

inline constexpr guest::Function<0x005361a8, u32(u32, u32)> call_005361a8;  // (from the original)

u32 f_0076bc84(u32 r0, u32 r1) {
    u32 r0_3 = 0;
    u32 r0_1 = call_005361a8(r0, r1);
    if (r0_1 == 0) {
        return 0xa5u;  // (from the original)
    }
    u32 r1_2 = *gptr<u8>(r0_1 + 0xau);  // (from the original)
    u32 r0_2 = u32(*gptr<u8>(r0_1 + 0x1bu)) >> 6;  // (from the original)
    if (r1_2 >= 0x9bu) {  // (from the original)
        r1_2 = 0u;
        goto L_76bcb4;
    }
    if (r1_2 == 0x2cu) {  // (from the original)
        goto L_76bd08;
    }
L_76bcb4:;
    if (s32(r1_2) <= 0x2c) {  // (from the original)
        if (r1_2 == 0x24u) {  // (from the original)
            goto L_76bcf8;
        }
        if (r1_2 != 0x27u && r1_2 != 0x28u) {  // (from the original)
            guest::cpu()->r[1] = r1_2;
            return 0xa5u;  // (from the original)
        }
    } else {
        if (r1_2 != 0x54u && r1_2 != 0x58u) {  // (from the original)
            guest::cpu()->r[1] = r1_2;
            return 0xa5u;  // (from the original)
        }
        goto L_76bd18;
    }
    if (r0_2 >= 3u) {
        guest::cpu()->r[1] = r1_2;
        return 0xa5u;  // (from the original)
    } else {
        r0_3 = r0_2 + 0x4au;  // (from the original)
    }
    guest::cpu()->r[1] = r1_2;
    return r0_3 & 0xffu;  // (from the original)
L_76bcf8:;
    if (r0_2 < 3u) {
        guest::cpu()->r[1] = r1_2;
        return (r0_2 + 0x4du) & 0xffu;  // (from the original)
    }
    guest::cpu()->r[1] = r1_2;
    return 0xa5u;  // (from the original)
L_76bd08:;
    if (r0_2 < 3u) {
        guest::cpu()->r[1] = r1_2;
        return (r0_2 + 0x50u) & 0xffu;  // (from the original)
    }
    guest::cpu()->r[1] = r1_2;
    return 0xa5u;  // (from the original)
L_76bd18:;
    if (r0_2 < 2u) {
        guest::cpu()->r[1] = r1_2;
        return (r0_2 + 0x53u) & 0xffu;  // (from the original)
    }
    guest::cpu()->r[1] = r1_2;
    return 0xa5u;  // (from the original)
}

}  // namespace d_0076bc84
GUEST_EXPORT_FRAMED(0x0076bc84, d_0076bc84::f_0076bc84, 0x4010);  // pushes {r4, lr} first, as the original

// f_0076c030: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076c030 {

inline guest::global<u16, 0x0095bfdc> global_0095bfdc;  // (from the original)
inline guest::global<u16, 0x0095bfde> global_0095bfde;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x00304f30, u32(u32, u32, u32, u32)> call_00304f30;  // (from the original)
inline constexpr guest::Function<0x005359fc, u32(u32, u32, u32, u32)> call_005359fc;  // (from the original)
inline constexpr guest::Function<0x0076bb34, u32(u32, u32, u32, u32)> call_0076bb34;  // (from the original)
inline constexpr guest::Function<0x0076c1a4, u32(u32, u32, u32, u32)> call_0076c1a4;  // (from the original)

u32 f_0076c030(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r5 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r3_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r2_4 = 0;
    u32 r3_7 = 0;
    u32 r1_9 = 0;
    u32 r0_10 = 0;
    u32 r4 = r0;
    u32 r0_1 = call_0076bb34(r1, r1, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    u32 r3_1 = guest::cpu()->r[3];
    u32 r7_1 = 0x7ffeu;  // (from the original)
    if (r0_1 != 2u) {
        if (r0_1 == 4u) {
            goto L_76c09c;
        }
        if (r0_1 != 8u) {
            r1_9 = *global_0095bfdc;
            *gptr<u16>(r4) = u16(r1_9);
            r0_10 = *global_0095bfde;
            *gptr<u16>(r4 + 2u) = u16(r0_10);
            guest::cpu()->r[1] = r1_9;
            return r0_10;
        }
        goto L_76c0e4;
    }
    r0_2 = call_0076c1a4(r1, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r5 = r0_2;
    r0 = call_005359fc(6u, r1_2, r2, r3_2);
    r3 = guest::cpu()->r[3];
    if (*gptr<u32>(r0 + 4u) <= r5) {
        goto L_76c0c0;
    }
L_76c08c:;
    r7_1 = uxth(u32(*gptr<u16>(r0)) + r5);
    goto L_76c0c0;
L_76c09c:;
    r0_3 = call_0076c1a4(r1, r1_1, r2_1, r3_1);
    r1_3 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r5 = r0_3;
    r0 = call_005359fc(7u, r1_3, r2, r3_3);
    r3 = guest::cpu()->r[3];
    if (*gptr<u32>(r0 + 4u) > r5) {
        guest::preempt();
        goto L_76c08c;
    }
L_76c0c0:;
    r0_4 = frame.at(4).addr();
    call_002fcbb0(r0_4, r7_1, r2, r3);
    *gptr<u16>(r4) = u16(u32(*frame.at<u16>(4)));
    r0_5 = *frame.at<u16>(6);
    *gptr<u16>(r4 + 2u) = u16(r0_5);
    return r0_5;
L_76c0e4:;
    call_002fcbb0(frame.at(0).addr(), 0x33a7u, r2_1, r3_1);  // (from the original)
    u32 r0_7 = call_0076bb34(r1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_6 = guest::cpu()->r[1];
    u32 r2_3 = guest::cpu()->r[2];
    u32 r3_5 = guest::cpu()->r[3];
    if (r0_7 != 8u) {
        r1_9 = *global_0095bfdc;
        *gptr<u16>(r4) = u16(r1_9);
        r0_10 = *global_0095bfde;
        *gptr<u16>(r4 + 2u) = u16(r0_10);
        guest::cpu()->r[1] = r1_9;
        return r0_10;
    }
    u32 r0_8 = call_0076c1a4(r1, r1_6, r2_3, r3_5);
    if (r0_8 >= 0x30u) {  // (from the original)
        r1_9 = *global_0095bfdc;
        *gptr<u16>(r4) = u16(r1_9);
        r0_10 = *global_0095bfde;
        *gptr<u16>(r4 + 2u) = u16(r0_10);
        guest::cpu()->r[1] = r1_9;
        return r0_10;
    }
    u32 r1_7 = 1u;
    if (r0_8 < 0x28u) {  // (from the original)
        r2_4 = u32(u64(0xcccccccdu) * r0_8 >> 0x20) >> 3;  // (from the original)
        u32 r3_6 = 0u - r2_4;
        r3_7 = r0_8 + (r3_6 + (r3_6 << 2) << 1);
    } else {
        r1_7 = 0u;
        r2_4 = r1_7;
        r3_7 = r0_8 - 0x28u;  // (from the original)
    }
    u32 zf_1 = sxtb(r1_7) == 0;
    u32 r1_8 = 0u;
    if (zf_1) {
        r1_8 = 3u;
    }
    call_00304f30(frame.at(0).addr(), r1_8, r2_4, r3_7);
    r1_9 = guest::cpu()->r[1];
    *gptr<u16>(r4) = u16(u32(*frame.at<u16>(0)));
    r0_10 = *frame.at<u16>(2);
    *gptr<u16>(r4 + 2u) = u16(r0_10);
    return r0_10;
}

}  // namespace d_0076c030
GUEST_EXPORT_FRAMED(0x0076c030, d_0076c030::f_0076c030, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0076c234: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076c234 {

inline constexpr guest::Function<0x004e0f14, u32(u32)> call_004e0f14;  // (from the original)
inline constexpr guest::Function<0x0076bb34, u32(u32)> call_0076bb34;  // (from the original)
inline constexpr guest::Function<0x0076c1a4, u32(u32, u32, u32, u32)> call_0076c1a4;  // (from the original)

u32 f_0076c234(u32 r0) {
    u32 r0_1 = call_0076c1a4(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_2 = call_004e0f14(r0);
    if (r0_2 == 0) {
        return 0u;
    }
    u32 r0_3 = call_0076bb34(r0);
    if (r0_3 != 1u || r0_1 != 1u) {
        return 0u;
    }
    if (s32(u32(*gptr<u8>(r0_2 + 0x20u)) << 0x1c) < 0) {  // (from the original)
        return 1u;
    }
    return 0u;
}

}  // namespace d_0076c234
GUEST_EXPORT_FRAMED(0x0076c234, d_0076c234::f_0076c234, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0076c288: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076c288 {

inline constexpr guest::Function<0x0076bb34, u32(u32, u32, u32, u32)> call_0076bb34;  // (from the original)
inline constexpr guest::Function<0x0076c1a4, u32(u32, u32, u32, u32)> call_0076c1a4;  // (from the original)

u32 f_0076c288(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = call_0076bb34(r0, r1, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    u32 r3_1 = guest::cpu()->r[3];
    if (r0_1 != 8u) {
        return 0u;
    }
    u32 r0_2 = call_0076c1a4(r0, r1_1, r2_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    if (r0_2 >= 0x30u) {  // (from the original)
        return 0u;
    }
    if (r0_2 < 0x28u) {  // (from the original)
        *gptr<u8>(r1) = 1;
        u32 r1_2 = u32(u64(0xcccccccdu) * r0_2 >> 0x20) >> 3;  // (from the original)
        u32 r2_2 = 0u - r1_2;
        *gptr<u32>(r2) = r1_2;
        u32 r1_3 = r2_2 + (r2_2 << 2);
        *gptr<u32>(r3) = r0_2 + (r1_3 << 1);
        guest::cpu()->r[1] = r1_3;
        return 1u;
    }
    *gptr<u8>(r1) = 0;
    *gptr<u32>(r2) = 0;
    *gptr<u32>(r3) = r0_2 - 0x28u;  // (from the original)
    guest::cpu()->r[1] = 0u;
    return 1u;
}

}  // namespace d_0076c288
GUEST_EXPORT_FRAMED(0x0076c288, d_0076c288::f_0076c288, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0076c564: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076c564 {

struct __attribute__((packed)) Object_0076c564_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_0076c564_0, half_0, 0x0);  // (from the original)


u32 f_0076c564(gptr<Object_0076c564_0> arg0) {
    u32 r0_1 = u32(arg0->half_0) & ~0x8000u;  // (from the original)
    if (r0_1 == 0x7cu || r0_1 == 0x7du) {  // (from the original)
        return 1u;
    }
    if (r0_1 != 0x7eu && r0_1 != 0x7fu) {  // (from the original)
        return 0u;
    }
    return 1u;
}

}  // namespace d_0076c564
GUEST_EXPORT(0x0076c564, d_0076c564::f_0076c564);

// f_0076c674: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076c674 {


u32 f_0076c674(gptr<Item> arg0) {
    return u32(arg0->flags) & 1u;
}

}  // namespace d_0076c674
GUEST_EXPORT(0x0076c674, d_0076c674::f_0076c674);

// f_0076c680: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076c680 {


u32 f_0076c680(gptr<Item> arg0) {
    u32 r0_1 = u32(arg0->id) & ~0x8000u;  // (from the original)
    u32 res_1 = r0_1 - 0x334du;  // (from the original)
    u32 zf_1 = res_1 == 0;
    u32 r1_1 = res_1;
    if (!zf_1) {
        u32 res_2 = r0_1 - 0x334eu;  // (from the original)
        zf_1 = res_2 == 0;
        r1_1 = res_2;
    }
    guest::cpu()->r[1] = r1_1;
    return zf_1 ? 1u : 0u;
}

}  // namespace d_0076c680
GUEST_EXPORT(0x0076c680, d_0076c680::f_0076c680);

// f_0076c6e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076c6e4 {


u32 f_0076c6e4(u32 r0, u32 r1) {
    u32 r12 = guest::cpu()->r[12];
    u32 res_1 = 0;
    u32 r2 = 0u;
    u32 r3 = r2;
    u32 r4 = 8u;
    u32 r5 = 0x10u;  // (from the original)
    u32 r6 = 1u;
    do {
        u32 b_1 = r2 << 1;
        u32 zf_1 = r5 == b_1;
        u32 cf_1 = r5 >= b_1;
        if (cf_1 && !zf_1) {
            r12 = r1 + r3;
        }
        if (!cf_1 || zf_1) {
            r12 = r1;
        }
        *gptr<u8>(r12) = u8(u32(*gptr<u8>(r0)) & 0xfu);  // (from the original)
        u32 v_1 = *gptr<u8>(r0);
        r0 += 1u;
        r12 = r6 + (r2 << 1) >= 0x10u ? r1 : r1 + r3 + 1u;  // (from the original)
        res_1 = r4 - 1u;
        r4 = res_1;
        r3 += 2u;
        r2 += 1u;
        *gptr<u8>(r12) = u8(v_1 >> 4);
        guest::preempt();
    } while (res_1 != 0);
    return r0;
}

}  // namespace d_0076c6e4
GUEST_EXPORT_FRAMED(0x0076c6e4, d_0076c6e4::f_0076c6e4, 0x1f0);  // pushes {r4, r5, r6, r7, r8} first, as the original

// f_0076c74c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076c74c {

inline constexpr guest::Function<0x006bbd54, u32(u32, u32, u32, u32)> call_006bbd54;  // (from the original)
inline constexpr guest::Function<0x0076c8b8, u32(u32, u32, u32, u32)> call_0076c8b8;  // (from the original)
inline constexpr guest::Function<0x0076d134, u32(u32, u32, u32, u32)> call_0076d134;  // (from the original)
inline constexpr guest::Function<0x0076d668, u32(u32, u32, u32, u32)> call_0076d668;  // (from the original)

u32 f_0076c74c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r4 = 0;
    u32 r1_4 = 0;
    *frame.at<u32>(0) = r3;
    u32 r5 = r0;
    u32 r0_1 = call_0076d134(r0, r1, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    u32 r3_1 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        return r0_1;
    }
    u32 r0_2 = call_0076c8b8(r5, r1_1, r2_1, r3_1);
    r3 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        return r0_2;
    } else {
        r4 = 0u;
    }
    do {
        call_006bbd54(frame.at(0).addr(), 0x24u, r4, r3);  // (from the original)
        u32 r0_4 = call_0076d668(r5, frame.at(0).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_4 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
        if (r0_4 == 0) {
            return 0u;
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0x48u);  // (from the original)
    r4 = 0u;
    do {
        call_006bbd54(frame.at(0).addr(), 0x2cu, r4, r3);  // (from the original)
        u32 r0_6 = call_0076d668(r5, frame.at(0).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_4 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
        if (r0_6 == 0) {
            return 0u;
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0x43u);  // (from the original)
    guest::cpu()->r[1] = r1_4;
    return 1u;
}

}  // namespace d_0076c74c
GUEST_EXPORT_FRAMED(0x0076c74c, d_0076c74c::f_0076c74c, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0076c808: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076c808 {

struct __attribute__((packed)) Local_0076c808_r0_2 {
    u8 unknown_0[0x448];  // (not used here)
    u8 byte_448;
    u8 unknown_449[0x42];  // (not used here)
    u8 byte_48b;
    u8 unknown_48c[0x47];  // (not used here)
    u8 byte_4d3;
    u8 unknown_4d4[0x1d];  // (not used here)
    u8 byte_4f1;
    u8 unknown_4f2[0x47];  // (not used here)
    u8 byte_539;
    u8 unknown_53a[0x18];  // (not used here)
    u8 byte_552;
};
GUEST_OFFSET(Local_0076c808_r0_2, byte_448, 0x448);  // (from the original)
GUEST_OFFSET(Local_0076c808_r0_2, byte_48b, 0x48b);  // (from the original)
GUEST_OFFSET(Local_0076c808_r0_2, byte_4d3, 0x4d3);  // (from the original)
GUEST_OFFSET(Local_0076c808_r0_2, byte_4f1, 0x4f1);  // (from the original)
GUEST_OFFSET(Local_0076c808_r0_2, byte_539, 0x539);  // (from the original)
GUEST_OFFSET(Local_0076c808_r0_2, byte_552, 0x552);  // (from the original)

inline constexpr guest::Function<0x0076d714, u32(u32, u32, u32, u32)> call_0076d714;  // (from the original)

u32 f_0076c808(u32 r0, u32 r1, u32 r2) {
    u32 r0_3 = 0;
    u32 r0_1 = call_0076d714(r0, r1, r2, r1);
    u32 r3_1 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        return 0u;
    }
    gptr<Local_0076c808_r0_2> r0_2 = gptr<Local_0076c808_r0_2>(r0 + r2);
    u32 res_1 = r3_1 - 0x2cu;  // (from the original)
    if (res_1 == 0) {
        r0_3 = r0_2->byte_448;
        goto L_76c878;
    }
    if ((res_1 >> 0x1f) != (((r3_1 ^ 0x2cu) & (r3_1 ^ res_1)) >> 0x1f)) {  // (from the original)
        if (r3_1 == 0x24u) {  // (from the original)
            r0_3 = r0_2->byte_4f1;
            goto L_76c878;
        }
        if (r3_1 == 0x27u) {  // (from the original)
            r0_3 = r0_2->byte_48b;
            goto L_76c878;
        }
        if (r3_1 == 0x28u) {  // (from the original)
            r0_3 = r0_2->byte_4d3;
            goto L_76c878;
        }
        return 0u;
    }
    if (r3_1 == 0x54u) {  // (from the original)
        r0_3 = r0_2->byte_539;
        goto L_76c878;
    }
    if (r3_1 == 0x58u) {  // (from the original)
        r0_3 = r0_2->byte_552;
    } else {
        return 0u;
    }
L_76c878:;
    if (r0_3 != 0) {
        return 1u;
    }
    return 0u;
}

}  // namespace d_0076c808
GUEST_EXPORT_FRAMED(0x0076c808, d_0076c808::f_0076c808, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0076c88c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076c88c {

inline constexpr guest::Function<0x0076d668, u32(u32, u32, u32, u32)> call_0076d668;  // (from the original)

u32 f_0076c88c(u32 r0) {
    u32 r0_1 = call_0076d668(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    return r0_1;
}

}  // namespace d_0076c88c
GUEST_EXPORT_FRAMED(0x0076c88c, d_0076c88c::f_0076c88c, 0x4010);  // pushes {r4, lr} first, as the original

// f_0076c8a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076c8a0 {

inline constexpr guest::Function<0x0076cb70, u32(u32, u32, u32, u32)> call_0076cb70;  // (from the original)

u32 f_0076c8a0(u32 r0, u32 r1) {
    u32 r0_1 = call_0076cb70(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[1] = 0x2710u;  // (from the original)
    return r0_1 * 0x2710u;  // (from the original)
}

}  // namespace d_0076c8a0
GUEST_EXPORT_FRAMED(0x0076c8a0, d_0076c8a0::f_0076c8a0, 0x4010);  // pushes {r4, lr} first, as the original

// f_0076c8b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076c8b8 {

inline constexpr guest::Function<0x006bbd54, u32(u32, u32, u32, u32)> call_006bbd54;  // (from the original)
inline constexpr guest::Function<0x0076d668, u32(u32, u32, u32, u32)> call_0076d668;  // (from the original)

u32 f_0076c8b8(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r1_2 = 0;
    *frame.at<u32>(0) = r3;
    u32 r4 = r0;
    u32 r5 = 0u;
    do {
        call_006bbd54(frame.at(0).addr(), 0x27u, r5, r3);  // (from the original)
        u32 r0_2 = call_0076d668(r4, frame.at(0).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_2 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
        if (r0_2 == 0) {
            return 0u;
        }
        r5 += 1u;
        guest::preempt();
    } while (r5 < 0x48u);  // (from the original)
    r5 = 0u;
    do {
        call_006bbd54(frame.at(0).addr(), 0x28u, r5, r3);  // (from the original)
        u32 r0_4 = call_0076d668(r4, frame.at(0).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_2 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
        if (r0_4 == 0) {
            return 0u;
        }
        r5 += 1u;
        guest::preempt();
    } while (r5 < 0x1eu);  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return 1u;
}

}  // namespace d_0076c8b8
GUEST_EXPORT_FRAMED(0x0076c8b8, d_0076c8b8::f_0076c8b8, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0076c958: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076c958 {

inline constexpr guest::Function<0x0027a42c, u32(u32, u32)> call_0027a42c;  // (from the original)
inline constexpr guest::Function<0x002fb96c, u32(u32, u32)> call_002fb96c;  // (from the original)
inline constexpr guest::Function<0x002fbd54, u32(u32, u32)> call_002fbd54;  // (from the original)
inline constexpr guest::Function<0x002ff8b0, u32(u32, u32, u32)> call_002ff8b0;  // (from the original)
inline constexpr guest::Function<0x0076d668, u32(u32, u32, u32, u32)> call_0076d668;  // (from the original)

u32 f_0076c958(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = call_0076d668(r0, r2, r2, guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    u32 zf_1 = r0_1 == 0;
    if (!zf_1) {
        zf_1 = r0_1 == 5u;
    }
    if (zf_1) {
        return 0u;
    }
    call_002ff8b0(4u, r1_1, r2_1);
    u32 r0_2 = call_0076d668(r0, r2, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_4 = call_002fb96c(r0_2 - 1u & 3u, guest::cpu()->r[1]);
    u32 r0_5 = r0_4 + 0x55a6u;  // (from the original)
    u32 r0_6 = call_002fbd54(r0_5, guest::cpu()->r[1]);
    r1_1 = guest::cpu()->r[1];
    if (r0_6 == 0) {
        return 0u;
    }
    call_0027a42c(r1, r0_5);
    return 1u;
}

}  // namespace d_0076c958
GUEST_EXPORT_FRAMED(0x0076c958, d_0076c958::f_0076c958, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0076cb70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076cb70 {

inline constexpr guest::Function<0x006bbd54, u32(u32, u32, u32, u32)> call_006bbd54;  // (from the original)
inline constexpr guest::Function<0x0076d668, u32(u32, u32, u32, u32)> call_0076d668;  // (from the original)

u32 f_0076cb70(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r1_7 = 0;
    *frame.at<u32>(0) = r3;
    u32 r5 = 0u;
    u32 r7 = r0;
    u32 r6 = r0;
    u32 r4 = r5;
    do {
        call_006bbd54(frame.at(0).addr(), 0x54u, r4, r3);  // (from the original)
        u32 r0_2 = call_0076d668(r6, frame.at(0).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
        r3 = guest::cpu()->r[3];
        if (r0_2 != 0) {
            r5 += 1u;
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0x19u);  // (from the original)
    r4 = 0u;
    do {
        call_006bbd54(frame.at(0).addr(), 0x58u, r4, r3);  // (from the original)
        u32 r0_4 = call_0076d668(r6, frame.at(0).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
        r3 = guest::cpu()->r[3];
        if (r0_4 != 0) {
            r5 += 1u;
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 8u);
    r6 = 0u;
    r4 = r6;
    do {
        call_006bbd54(frame.at(0).addr(), 0x27u, r4, r3);  // (from the original)
        u32 r0_6 = call_0076d668(r7, frame.at(0).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
        r3 = guest::cpu()->r[3];
        if (r0_6 != 0) {
            r6 += 1u;
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0x48u);  // (from the original)
    r4 = 0u;
    do {
        call_006bbd54(frame.at(0).addr(), 0x28u, r4, r3);  // (from the original)
        u32 r0_8 = call_0076d668(r7, frame.at(0).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
        r3 = guest::cpu()->r[3];
        if (r0_8 != 0) {
            r6 += 1u;
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0x1eu);  // (from the original)
    u32 r8 = r6 + r5;
    r5 = 0u;
    r6 = r7;
    r4 = r5;
    do {
        call_006bbd54(frame.at(0).addr(), 0x24u, r4, r3);  // (from the original)
        u32 r0_10 = call_0076d668(r6, frame.at(0).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
        r3 = guest::cpu()->r[3];
        if (r0_10 != 0) {
            r5 += 1u;
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0x48u);  // (from the original)
    r8 += r5;
    r5 = 0u;
    r6 = r7;
    r4 = r5;
    do {
        call_006bbd54(frame.at(0).addr(), 0x2cu, r4, r3);  // (from the original)
        u32 r0_12 = call_0076d668(r6, frame.at(0).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_7 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
        if (r0_12 != 0) {
            r5 += 1u;
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0x43u);  // (from the original)
    guest::cpu()->r[1] = r1_7;
    return r5 + r8;
}

}  // namespace d_0076cb70
GUEST_EXPORT_FRAMED(0x0076cb70, d_0076cb70::f_0076cb70, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_0076cd0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076cd0c {

inline constexpr guest::Function<0x006bbd54, u32(u32, u32, u32, u32)> call_006bbd54;  // (from the original)
inline constexpr guest::Function<0x0076d668, u32(u32, u32, u32, u32)> call_0076d668;  // (from the original)

u32 f_0076cd0c(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r5 = r0;
    u32 r4 = 0u;
L_76cd18:;
    call_006bbd54(frame.at(0).addr(), 0x2cu, r4, r3);  // (from the original)
    u32 r0_2 = call_0076d668(r5, frame.at(0).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
    r3 = guest::cpu()->r[3];
    if (r0_2 != 0) {
        r4 += 1u;
        if (r4 < 0x43u) {  // (from the original)
            guest::preempt();
            goto L_76cd18;
        }
        return 1u;
    }
    return 0u;
}

}  // namespace d_0076cd0c
GUEST_EXPORT_FRAMED(0x0076cd0c, d_0076cd0c::f_0076cd0c, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0076ce68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076ce68 {

inline constexpr guest::Function<0x006bbd54, u32(u32, u32, u32, u32)> call_006bbd54;  // (from the original)
inline constexpr guest::Function<0x0076d668, u32(u32, u32, u32, u32)> call_0076d668;  // (from the original)

u32 f_0076ce68(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r5 = r0;
    u32 r4 = 0u;
L_76ce74:;
    call_006bbd54(frame.at(0).addr(), 0x24u, r4, r3);  // (from the original)
    u32 r0_2 = call_0076d668(r5, frame.at(0).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
    r3 = guest::cpu()->r[3];
    if (r0_2 != 0) {
        r4 += 1u;
        if (r4 < 0x48u) {  // (from the original)
            guest::preempt();
            goto L_76ce74;
        }
        return 1u;
    }
    return 0u;
}

}  // namespace d_0076ce68
GUEST_EXPORT_FRAMED(0x0076ce68, d_0076ce68::f_0076ce68, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0076d134: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076d134 {

inline constexpr guest::Function<0x006bbd54, u32(u32, u32, u32, u32)> call_006bbd54;  // (from the original)
inline constexpr guest::Function<0x0076d668, u32(u32, u32, u32, u32)> call_0076d668;  // (from the original)

u32 f_0076d134(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r1_2 = 0;
    *frame.at<u32>(0) = r3;
    u32 r4 = r0;
    u32 r5 = 0u;
    do {
        call_006bbd54(frame.at(0).addr(), 0x54u, r5, r3);  // (from the original)
        u32 r0_2 = call_0076d668(r4, frame.at(0).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_2 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
        if (r0_2 == 0) {
            return 0u;
        }
        r5 += 1u;
        guest::preempt();
    } while (r5 < 0x19u);  // (from the original)
    r5 = 0u;
    do {
        call_006bbd54(frame.at(0).addr(), 0x58u, r5, r3);  // (from the original)
        u32 r0_4 = call_0076d668(r4, frame.at(0).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_2 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
        if (r0_4 == 0) {
            return 0u;
        }
        r5 += 1u;
        guest::preempt();
    } while (r5 < 8u);
    guest::cpu()->r[1] = r1_2;
    return 1u;
}

}  // namespace d_0076d134
GUEST_EXPORT_FRAMED(0x0076d134, d_0076d134::f_0076d134, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0076d214: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076d214 {

inline constexpr guest::Function<0x002f9e1c, u32(u32, u32, u32, u32)> call_002f9e1c;  // (from the original)
inline constexpr guest::Function<0x006bbd54, u32(u32, u32, u32, u32)> call_006bbd54;  // (from the original)
inline constexpr guest::Function<0x0076d668, u32(u32, u32, u32, u32)> call_0076d668;  // (from the original)

u32 f_0076d214(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r2_3 = 0;
    *frame.at<u32>(0) = r3;
    u32 r5 = 0u;
    u32 r6 = r0;
    u32 r4 = r5;
    do {
        call_006bbd54(frame.at(0).addr(), 0x27u, r4, r3);  // (from the original)
        u32 r0_2 = call_0076d668(r6, frame.at(0).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
        r3 = guest::cpu()->r[3];
        if (r0_2 != 0) {
            r5 += 1u;
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0x48u);  // (from the original)
    r4 = 0u;
    do {
        call_006bbd54(frame.at(0).addr(), 0x28u, r4, r3);  // (from the original)
        u32 r0_4 = call_0076d668(r6, frame.at(0).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
        r2_3 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_4 != 0) {
            r5 += 1u;
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0x1eu);  // (from the original)
    u32 r0_6 = call_002f9e1c(r5 * 0x64u, 0x66u, r2_3, r3);  // (from the original)
    if (s32(r0_6) <= 0) {
        if (s32(r5) > 0) {
            return 1u;
        }
    }
    if (s32(r0_6) > 0x64) {  // (from the original)
        r0_6 = 0x64u;  // (from the original)
    }
    return r0_6;
}

}  // namespace d_0076d214
GUEST_EXPORT_FRAMED(0x0076d214, d_0076d214::f_0076d214, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0076d3a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076d3a4 {

inline constexpr guest::Function<0x006bbd54, u32(u32, u32, u32, u32)> call_006bbd54;  // (from the original)
inline constexpr guest::Function<0x0076d668, u32(u32, u32, u32, u32)> call_0076d668;  // (from the original)

u32 f_0076d3a4(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r1_3 = 0;
    *frame.at<u32>(0) = r3;
    u32 r5 = 0u;
    u32 r6 = r0;
    u32 r4 = r5;
    do {
        call_006bbd54(frame.at(0).addr(), 0x54u, r4, r3);  // (from the original)
        u32 r0_2 = call_0076d668(r6, frame.at(0).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
        r3 = guest::cpu()->r[3];
        if (r0_2 != 0) {
            r5 += 1u;
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0x19u);  // (from the original)
    r4 = 0u;
    do {
        call_006bbd54(frame.at(0).addr(), 0x58u, r4, r3);  // (from the original)
        u32 r0_4 = call_0076d668(r6, frame.at(0).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_3 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
        if (r0_4 != 0) {
            r5 += 1u;
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 8u);
    guest::cpu()->r[1] = r1_3;
    return r5;
}

}  // namespace d_0076d3a4
GUEST_EXPORT_FRAMED(0x0076d3a4, d_0076d3a4::f_0076d3a4, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0076d430: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076d430 {

inline constexpr guest::Function<0x002f9e1c, u32(u32, u32, u32, u32)> call_002f9e1c;  // (from the original)
inline constexpr guest::Function<0x006bbd54, u32(u32, u32, u32, u32)> call_006bbd54;  // (from the original)
inline constexpr guest::Function<0x0076d668, u32(u32, u32, u32, u32)> call_0076d668;  // (from the original)

u32 f_0076d430(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r2_2 = 0;
    *frame.at<u32>(0) = r3;
    u32 r5 = 0u;
    u32 r6 = r0;
    u32 r4 = r5;
    do {
        call_006bbd54(frame.at(0).addr(), 0x2cu, r4, r3);  // (from the original)
        u32 r0_2 = call_0076d668(r6, frame.at(0).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
        r2_2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_2 != 0) {
            r5 += 1u;
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0x43u);  // (from the original)
    u32 r0_4 = call_002f9e1c(r5 * 0x64u, 0x43u, r2_2, r3);  // (from the original)
    if (s32(r0_4) <= 0) {
        if (s32(r5) > 0) {
            return 1u;
        }
    }
    if (s32(r0_4) > 0x64) {  // (from the original)
        r0_4 = 0x64u;  // (from the original)
    }
    return r0_4;
}

}  // namespace d_0076d430
GUEST_EXPORT_FRAMED(0x0076d430, d_0076d430::f_0076d430, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0076d4ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076d4ac {

inline constexpr guest::Function<0x002f9e1c, u32(u32, u32, u32, u32)> call_002f9e1c;  // (from the original)
inline constexpr guest::Function<0x006bbd54, u32(u32, u32, u32, u32)> call_006bbd54;  // (from the original)
inline constexpr guest::Function<0x0076d668, u32(u32, u32, u32, u32)> call_0076d668;  // (from the original)

u32 f_0076d4ac(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r2_2 = 0;
    *frame.at<u32>(0) = r3;
    u32 r5 = 0u;
    u32 r6 = r0;
    u32 r4 = r5;
    do {
        call_006bbd54(frame.at(0).addr(), 0x24u, r4, r3);  // (from the original)
        u32 r0_2 = call_0076d668(r6, frame.at(0).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
        r2_2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_2 != 0) {
            r5 += 1u;
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0x48u);  // (from the original)
    u32 r0_4 = call_002f9e1c(r5 * 0x64u, 0x48u, r2_2, r3);  // (from the original)
    if (s32(r0_4) <= 0) {
        if (s32(r5) > 0) {
            return 1u;
        }
    }
    if (s32(r0_4) > 0x64) {  // (from the original)
        r0_4 = 0x64u;  // (from the original)
    }
    return r0_4;
}

}  // namespace d_0076d4ac
GUEST_EXPORT_FRAMED(0x0076d4ac, d_0076d4ac::f_0076d4ac, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0076d5b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076d5b0 {

inline constexpr guest::Function<0x002f9e1c, u32(u32, u32, u32, u32)> call_002f9e1c;  // (from the original)
inline constexpr guest::Function<0x006bbd54, u32(u32, u32, u32, u32)> call_006bbd54;  // (from the original)
inline constexpr guest::Function<0x0076d668, u32(u32, u32, u32, u32)> call_0076d668;  // (from the original)

u32 f_0076d5b0(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r2_3 = 0;
    *frame.at<u32>(0) = r3;
    u32 r5 = 0u;
    u32 r6 = r0;
    u32 r4 = r5;
    do {
        call_006bbd54(frame.at(0).addr(), 0x54u, r4, r3);  // (from the original)
        u32 r0_2 = call_0076d668(r6, frame.at(0).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
        r3 = guest::cpu()->r[3];
        if (r0_2 != 0) {
            r5 += 1u;
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0x19u);  // (from the original)
    r4 = 0u;
    do {
        call_006bbd54(frame.at(0).addr(), 0x58u, r4, r3);  // (from the original)
        u32 r0_4 = call_0076d668(r6, frame.at(0).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
        r2_3 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_4 != 0) {
            r5 += 1u;
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 8u);
    u32 r0_6 = call_002f9e1c(r5 * 0x64u, 0x21u, r2_3, r3);  // (from the original)
    if (s32(r0_6) <= 0) {
        if (s32(r5) > 0) {
            return 1u;
        }
    }
    if (s32(r0_6) > 0x64) {  // (from the original)
        r0_6 = 0x64u;  // (from the original)
    }
    return r0_6;
}

}  // namespace d_0076d5b0
GUEST_EXPORT_FRAMED(0x0076d5b0, d_0076d5b0::f_0076d5b0, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0076d668: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076d668 {

inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x002ffad8, u32(u32, u32, u32, u32)> call_002ffad8;  // (from the original)
inline constexpr guest::Function<0x0076d714, u32(u32, u32, u32, u32)> call_0076d714;  // (from the original)

u32 f_0076d668(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = call_002fcb34(r1, r1, r2, r3);
    u32 r0_2 = call_002ffad8(r1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_3 = call_0076d714(r0, r0_1, r0_2, r0_2);
    u32 r3_2 = guest::cpu()->r[3];
    if (r0_3 == 0) {
        return r0_3;
    }
    u32 res_1 = r0_1 - 0x2cu;  // (from the original)
    u32 zf_1 = res_1 == 0;
    if (zf_1) {
        return *gptr<u8>(r0 + r3_2 + 0x448u);  // (from the original)
    }
    if (!!zf_1 || (res_1 >> 0x1f) != (((r0_1 ^ 0x2cu) & (r0_1 ^ res_1)) >> 0x1f)) {  // (from the original)
        if (r0_1 == 0x24u) {  // (from the original)
            return *gptr<u8>(r0 + r3_2 + 0x4f1u);  // (from the original)
        }
        if (r0_1 == 0x27u) {  // (from the original)
            return *gptr<u8>(r0 + r3_2 + 0x48bu);  // (from the original)
        }
        if (r0_1 == 0x28u) {  // (from the original)
            return *gptr<u8>(r0 + r3_2 + 0x4d3u);  // (from the original)
        }
    } else {
        if (r0_1 == 0x54u) {  // (from the original)
            return *gptr<u8>(r0 + r3_2 + 0x539u);  // (from the original)
        }
        if (r0_1 == 0x58u) {  // (from the original)
            return *gptr<u8>(r0 + r3_2 + 0x552u);  // (from the original)
        }
    }
    return 0u;
}

}  // namespace d_0076d668
GUEST_EXPORT_FRAMED(0x0076d668, d_0076d668::f_0076d668, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0076d714: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076d714 {


u32 f_0076d714(u32 r0_unused, u32 r1, u32 r2) {
    u32 res_1 = r1 - 0x2cu;  // (from the original)
    if (res_1 != 0) {
        if ((res_1 >> 0x1f) != (((r1 ^ 0x2cu) & (r1 ^ res_1)) >> 0x1f)) {  // (from the original)
            if (r1 == 0x24u) {  // (from the original)
                goto L_76d774;
            }
            if (r1 == 0x27u) {  // (from the original)
                goto L_76d780;
            }
            if (r1 != 0x28u) {  // (from the original)
                return 0u;
            }
            goto L_76d78c;
        }
        if (r1 == 0x54u) {  // (from the original)
            goto L_76d75c;
        }
        if (r1 != 0x58u) {  // (from the original)
            return 0u;
        }
        goto L_76d768;
    }
    if (r2 < 0x43u) {  // (from the original)
        return 1u;
    }
    return 0u;
L_76d75c:;
    if (r2 < 0x19u) {  // (from the original)
        return 1u;
    }
    return 0u;
L_76d768:;
    if (r2 >= 8u) {
        return 0u;
    }
    return 1u;
L_76d774:;
    if (r2 < 0x48u) {  // (from the original)
        return 1u;
    }
    return 0u;
L_76d780:;
    if (r2 < 0x48u) {  // (from the original)
        return 1u;
    }
    return 0u;
L_76d78c:;
    if (r2 >= 0x1eu) {  // (from the original)
        return 0u;
    }
    return 1u;
}

}  // namespace d_0076d714
GUEST_EXPORT(0x0076d714, d_0076d714::f_0076d714);

// f_0076d7a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076d7a4 {

inline constexpr guest::Function<0x00303660, u32(u32, u32)> call_00303660;  // (from the original)

u32 f_0076d7a4(u32 r0) {
    return call_00303660(r0 + 0x6b94u, guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_0076d7a4
GUEST_EXPORT(0x0076d7a4, d_0076d7a4::f_0076d7a4);

// f_0076d918: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076d918 {

struct __attribute__((packed)) Local_0076d918_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0076d918_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0076d918_ea_2, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x0012e640, u32(u32, u32, u32, u32)> call_0012e640;  // (from the original)
inline constexpr guest::Function<0x00303660, u32(u32)> call_00303660;  // (from the original)
inline constexpr guest::Function<0x006c91d0, u32(u32)> call_006c91d0;  // (from the original)
inline constexpr guest::Function<0x00716060, u32(u32)> call_00716060;  // (from the original)

u32 f_0076d918(u32 r0) {
    u32 r0_1 = call_006c91d0(r0);
    u32 r0_3 = call_00303660(r0 + 0x6b8cu);  // (from the original)
    *gptr<u32>(r0_1 + 4u) = r0_3;
    gptr<Local_0076d918_ea_2> ea_2 = gptr<Local_0076d918_ea_2>(r0 + 0x6bb0u);  // (from the original)
    u32 r0_5 = call_0012e640(ea_2->word_0, ea_2->word_4, 0xe10u, 0u);  // (from the original)
    u32 r0_6 = r0_5 * 0x2710u;  // (from the original)
    if (s32(r0_6) > s32(0x1312d00u)) {  // (from the original)
        r0_6 = 0x1312d00u;  // (from the original)
    }
    *gptr<u32>(r0_1) = r0_6;
    u32 r0_8 = call_00716060(r0 + 0x55dcu);  // (from the original)
    u32 r1_2 = (r0_3 + r0_6) + r0_8;
    *gptr<u32>(r0_1 + 0x10u) = r0_8;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return r1_2;
}

}  // namespace d_0076d918
GUEST_EXPORT_FRAMED(0x0076d918, d_0076d918::f_0076d918, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0076d9f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076d9f8 {


u32 f_0076d9f8(u32 r0, u32 r1) {
    if (r1 >= 0x18fu) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    u32 r2_1 = r1 >> 3;
    u32 r1_1 = r1 & 7u;
    if (r2_1 >= 0x32u) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r0_1 = lsr_r(u32(*gptr<u8>(r0 + r2_1 + 0x8f3cu)), r1_1 & 0xff) & 1u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0076d9f8
GUEST_EXPORT(0x0076d9f8, d_0076d9f8::f_0076d9f8);

// f_0076da3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076da3c {

inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x0030f594, u32(u32, u32)> call_0030f594;  // (from the original)
inline constexpr guest::Function<0x0071a844, u32(u32)> call_0071a844;  // (from the original)
inline constexpr guest::Function<0x00768628, u32(u32, u32)> call_00768628;  // (from the original)
inline constexpr guest::Function<0x00769840, u32(u32, u32)> call_00769840;  // (from the original)

u32 f_0076da3c(u32 r0, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r6_1 = 0;
    u32 r8 = 0x95bfdcu;  // (from the original)
    u32 r7 = r0;
    u32 r5 = r0 + 0x6bd0u;  // (from the original)
    u32 r4 = 0u;
    do {
        if (r4 < 0x10u) {  // (from the original)
            r6_1 = r5 + (r4 << 2);
            u32 r0_1 = call_002fcaf4(r6_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            if (r0_1 != 0) {
                goto L_76da90;
            }
            u32 r0_2 = call_00769840(r6_1, guest::cpu()->r[1]);
            if (r0_2 != 0) {
                goto L_76da90;
            }
        }
        r6_1 = r8;
L_76da90:;
        call_002fc934(frame.at(4).addr(), r6_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r0_5 = call_002fcaf4(frame.at(4).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0_5 == 0) {
            u32 r0_7 = call_00768628(frame.at(4).addr(), r1);
            r1 = guest::cpu()->r[1];
            if (r0_7 == 0) {
                return 1u;
            }
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0x10u);  // (from the original)
    u32 r0_9 = call_0071a844(r7 + 0xau);  // (from the original)
    call_002fc934(frame.at(0).addr(), r0_9, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_12 = call_002fcaf4(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_4 = guest::cpu()->r[1];
    if (r0_12 != 0) {
        return 0u;
    }
    goto L_76db20;
L_76db20:;
    u32 r0_14 = call_00768628(frame.at(0).addr(), r1_4);
    r1_4 = guest::cpu()->r[1];
    if (r0_14 != 0) {
        return 0u;
    }
    u32 r0_16 = call_0030f594(frame.at(0).addr(), r1_4);
    r1_4 = guest::cpu()->r[1];
    if (r0_16 == 0) {
        return 1u;
    }
    return 0u;
}

}  // namespace d_0076da3c
GUEST_EXPORT_FRAMED(0x0076da3c, d_0076da3c::f_0076da3c, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0076dc14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076dc14 {

inline constexpr guest::Function<0x00118c9d, u32(u32, u32)> call_00118c9c;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> call_00301e20;  // (from the original)
inline constexpr guest::Function<0x00309ef0, u32(u32)> call_00309ef0;  // (from the original)

u32 f_0076dc14(u32 r0, u32 r1) {
    u32 r0_1 = call_00301e20(r1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 == 0) {
        return 0u;
    }
    u32 r0_2 = call_002fb328(r0_1, guest::cpu()->r[1]);
    u32 r0_4 = call_00118c9c(r0_2 + 0x292a4u, r1);  // (from the original)
    u32 r5_1 = r0 + 0x8d4cu;  // (from the original)
    u32 r0_5 = call_00309ef0(r5_1);
    if (r0_5 == 0 || u32(*gptr<u8>(r5_1 + 9u)) != 0) {
        return 0u;
    }
    if (u32(s32(s8(*gptr<u8>(0x8d5bu + r0)))) == r0_4) {  // (from the original)
        return r5_1;
    }
    return 0u;
}

}  // namespace d_0076dc14
GUEST_EXPORT_FRAMED(0x0076dc14, d_0076dc14::f_0076dc14, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0076dcfc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076dcfc {

inline constexpr guest::Function<0x00118c9d, u32(u32, u32)> call_00118c9c;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> call_00301e20;  // (from the original)
inline constexpr guest::Function<0x00309ef0, u32(u32, u32)> call_00309ef0;  // (from the original)

u32 f_0076dcfc(u32 r0, u32 r1) {
    u32 r0_1 = call_00301e20(r1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        return 0u;
    }
    u32 r0_2 = call_002fb328(r0_1, r1_1);
    u32 r0_4 = call_00118c9c(r0_2 + 0x292a4u, r1);  // (from the original)
    u32 r5_1 = r0 + 0x8d6cu;  // (from the original)
    call_00309ef0(r0_4, guest::cpu()->r[1]);
    r1_1 = guest::cpu()->r[1];
    if (u32(*gptr<u8>(r5_1 + 9u)) == 1u) {
        return 0u;
    }
    if (u32(s32(s8(*gptr<u8>(0x8d80u + r0)))) == r0_4) {  // (from the original)
        return r5_1;
    }
    return 0u;
}

}  // namespace d_0076dcfc
GUEST_EXPORT_FRAMED(0x0076dcfc, d_0076dcfc::f_0076dcfc, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0076de78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076de78 {

struct __attribute__((packed)) Local_0076de78_ea_1 {
    u16 half_0;
    u8 unknown_2[0x12];  // (not used here)
    u8 byte_14;
};
GUEST_OFFSET(Local_0076de78_ea_1, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0076de78_ea_1, byte_14, 0x14);  // (from the original)

inline constexpr guest::Function<0x00100d2d, u32(u32, u32, u32)> call_00100d2c;  // (from the original)
inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> call_00301e20;  // (from the original)
inline constexpr guest::Function<0x00309ef0, u32(u32, u32, u32)> call_00309ef0;  // (from the original)
inline constexpr guest::Function<0x00757a58, u32(u32, u32, u32)> call_00757a58;  // (from the original)

u32 f_0076de78(u32 r0, u32 r1, u32 r2) {
    u32 r4 = 0;
    u32 r1_1 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    gptr<Local_0076de78_ea_1> ea_1 = gptr<Local_0076de78_ea_1>(0u);
    u32 r0_7 = 0;
    u32 r1_3 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r5 = r2;
    u32 r6 = r1;
    u32 r0_1 = call_00301e20(r1, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        u32 r0_2 = r0 + 0x8d84u;  // (from the original)
        u32 r8 = r0_2;
        u32 r0_3 = call_00309ef0(r0_2, r1, guest::cpu()->r[2]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0_3 == 0) {
            goto L_76df68;
        } else {
            r4 = 0u;
        }
        do {
            if (r5 != 2u && r5 != r4) {
                goto L_76df5c;
            }
            r1_1 = r4 & 0xffu;  // (from the original)
            r0_4 = call_00757a58(r8, r1_1, r2);
            r2 = guest::cpu()->r[2];
            r1 = *gptr<u16>(r6 + 0x2cu);  // (from the original)
            if (u32(*gptr<u16>(r0_4 + 0x2cu)) != r1) {  // (from the original)
                goto L_76df5c;
            }
            r1 = *gptr<u16>(r6);
            if (u32(*gptr<u16>(r0_4)) != r1) {
                goto L_76df5c;
            }
            r1 = *gptr<u8>(r0_4 + 0x14u);  // (from the original)
            if (r1 != u32(*gptr<u8>(r6 + 0x14u))) {  // (from the original)
                goto L_76df5c;
            }
            r1_2 = r6 + 2u;
            r0_5 = r0_4 + 2u;
            r0_6 = call_00100d2c(r0_5, r1_2, 0x12u);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            if (r0_6 != 0) {
                goto L_76df5c;
            }
            ea_1 = gptr<Local_0076de78_ea_1>(r0_4 + 0x16u);  // (from the original)
            r1 = ea_1->half_0;
            r2 = *gptr<u16>(r6 + 0x16u);  // (from the original)
            r0_7 = r6 + 0x16u;  // (from the original)
            if (r1 != r2) {
                goto L_76df5c;
            }
            r1 = ea_1->byte_14;
            r2 = *gptr<u8>(r0_7 + 0x14u);  // (from the original)
            if (r1 != r2) {
                goto L_76df5c;
            }
            r1_3 = r0_7 + 2u;
            r0_8 = ea_1.addr() + 2u;
            r0_9 = call_00100d2c(r0_8, r1_3, 0x12u);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            if (r0_9 == 0) {
                return 1u;
            }
L_76df5c:;
            r4 += 1u;
            guest::preempt();
        } while (s32(r4) < 2);
L_76df68:;
        r0_1 = 0u;
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_0076de78
GUEST_EXPORT_FRAMED(0x0076de78, d_0076de78::f_0076de78, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0076df94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076df94 {

inline constexpr guest::Function<0x002fcb84, u32(u32, u32)> call_002fcb84;  // (from the original)
inline constexpr guest::Function<0x0071a3a8, u32(u32)> call_0071a3a8;  // (from the original)
inline constexpr guest::Function<0x0071a7ec, u32(u32)> call_0071a7ec;  // (from the original)
inline constexpr guest::Function<0x0071a820, u32(u32)> call_0071a820;  // (from the original)
inline constexpr guest::Function<0x0071a868, u32(u32)> call_0071a868;  // (from the original)

u32 f_0076df94(u32 r0) {
    u32 r4_1 = r0 + 0xau;  // (from the original)
    u32 r0_1 = call_0071a7ec(r4_1);
    u32 r0_2 = call_002fcb84(r0_1, 0x282bu);  // (from the original)
    if (r0_2 != 0) {
        return 1u;
    }
    u32 r0_3 = call_0071a868(r4_1);
    u32 r0_4 = call_002fcb84(r0_3, 0x2598u);  // (from the original)
    if (r0_4 != 0) {
        return 1u;
    }
    u32 r0_5 = call_0071a3a8(r4_1);
    u32 r0_6 = call_002fcb84(r0_5, 0x26feu);  // (from the original)
    if (r0_6 != 0) {
        return 1u;
    }
    u32 r0_7 = call_0071a820(r4_1);
    u32 r0_8 = call_002fcb84(r0_7, 0x2925u);  // (from the original)
    if (r0_8 == 0) {
        return r0_8;
    }
    return 1u;
}

}  // namespace d_0076df94
GUEST_EXPORT_FRAMED(0x0076df94, d_0076df94::f_0076df94, 0x4010);  // pushes {r4, lr} first, as the original

// f_0076e014: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076e014 {

inline constexpr guest::Function<0x002fcb84, u32(u32, u32)> call_002fcb84;  // (from the original)
inline constexpr guest::Function<0x0071a3a8, u32(u32)> call_0071a3a8;  // (from the original)
inline constexpr guest::Function<0x0071a7ec, u32(u32)> call_0071a7ec;  // (from the original)
inline constexpr guest::Function<0x0071a820, u32(u32)> call_0071a820;  // (from the original)
inline constexpr guest::Function<0x0071a868, u32(u32)> call_0071a868;  // (from the original)

u32 f_0076e014(u32 r0) {
    u32 r4_1 = r0 + 0xau;  // (from the original)
    u32 r0_1 = call_0071a7ec(r4_1);
    u32 r0_2 = call_002fcb84(r0_1, 0x282bu);  // (from the original)
    if (r0_2 == 0) {
        return 0u;
    }
    u32 r0_3 = call_0071a868(r4_1);
    u32 r0_4 = call_002fcb84(r0_3, 0x2598u);  // (from the original)
    if (r0_4 == 0) {
        return 0u;
    }
    u32 r0_5 = call_0071a3a8(r4_1);
    u32 r0_6 = call_002fcb84(r0_5, 0x26feu);  // (from the original)
    if (r0_6 == 0) {
        return 0u;
    }
    u32 r0_7 = call_0071a820(r4_1);
    u32 r0_8 = call_002fcb84(r0_7, 0x2925u);  // (from the original)
    if (r0_8 != 0) {
        return 1u;
    }
    return 0u;
}

}  // namespace d_0076e014
GUEST_EXPORT_FRAMED(0x0076e014, d_0076e014::f_0076e014, 0x4010);  // pushes {r4, lr} first, as the original

// f_0076e108: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076e108 {

inline constexpr guest::Function<0x007460e8, u32(u32, u32)> call_007460e8;  // (from the original)
inline constexpr guest::Function<0x00825d6c, u32(u32, u32, u32, u32)> call_00825d6c;  // (from the original)

u32 f_0076e108(u32 r0, u32 r1) {
    u32 r0_2 = 0;
    u32 res_1 = 0;
    u32 zf_1 = 0;
    u32 r0_3 = 0;
    u32 r0_1 = call_00825d6c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        goto L_76e148;
    }
    r0_2 = u32(*gptr<u8>(r0 + 0x24u)) & 1u;  // (from the original)
    r1_1 = r0_2 + (r0_2 << 1);
    res_1 = r0 + (r1_1 << 3) + 0x7b0u;  // (from the original)
    zf_1 = res_1 == 0;
    if (!zf_1) {
        r1_1 = *gptr<u32>(res_1 + 8u);
        zf_1 = r1_1 == 0;
    }
    if (zf_1) {
        goto L_76e148;
    }
    r0_3 = call_007460e8(res_1, r1_1);
    r1_1 = guest::cpu()->r[1];
    if (r0_3 == 0) {
        return r0_3;
    }
L_76e148:;
    u32 r0_4 = call_00825d6c(r0, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_2 = guest::cpu()->r[1];
    if (r0_4 == 0) {
        return 1u;
    }
    u32 res_2 = r0 + ((u32(*gptr<u8>(r0 + 0x24u)) & 1u) << 5) + 0x504u;  // (from the original)
    u32 zf_2 = res_2 == 0;
    if (!zf_2) {
        r1_2 = *gptr<u32>(res_2 + 8u);
        zf_2 = r1_2 == 0;
    }
    if (zf_2) {
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    u32 r0_5 = call_007460e8(res_2, r1_2);
    if (r0_5 == 0) {
        return r0_5;
    }
    return 1u;
}

}  // namespace d_0076e108
GUEST_EXPORT_FRAMED(0x0076e108, d_0076e108::f_0076e108, 0x4010);  // pushes {r4, lr} first, as the original

// f_0076e290: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076e290 {

inline guest::global<u32, 0x0076e2d4> global_0076e2d4;  // (from the original)
inline constexpr guest::Function<0x007461b4, u32(u32, u32, u32, u32)> call_007461b4;  // (from the original)
inline constexpr guest::Function<0x00825d6c, u32(u32, u32, u32, u32)> call_00825d6c;  // (from the original)

void f_0076e290(u32 r0, u32 r1, float S0) {
    guest::cpu()->r[13] -= 8u;
    u32 r0_1 = call_00825d6c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    float S0_1 = guest::cpu()->s[0];
    if (r0_1 == 0) {
        float S0_2 = std::bit_cast<float>(*global_0076e2d4);
        guest::cpu()->r[13] += 8u;
        guest::cpu()->s[0] = S0_2;
        return;
    }
    u32 r0_2 = u32(*gptr<u8>(r0 + 0x24u)) & 1u;  // (from the original)
    u32 res_1 = r0 + (r0_2 + (r0_2 << 1) << 3) + 0x7b0u;  // (from the original)
    u32 zf_1 = res_1 == 0;
    if (!zf_1) {
        r1_1 = *gptr<u32>(res_1 + 8u);
        zf_1 = r1_1 == 0;
    }
    if (zf_1) {
        float S0_3 = std::bit_cast<float>(*global_0076e2d4);
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_3;
        return;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->s[0] = S0_1;
    call_007461b4(res_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
}

}  // namespace d_0076e290
GUEST_EXPORT(0x0076e290, d_0076e290::f_0076e290);

// f_0076e2d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076e2d8 {

inline constexpr guest::Function<0x0014f3cc, u32(u32, u32, u32)> call_0014f3cc;  // (from the original)
inline constexpr guest::Function<0x0052e3ec, u32(u32, u32)> call_0052e3ec;  // (from the original)
inline constexpr guest::Function<0x00745f80, u32(u32)> call_00745f80;  // (from the original)
inline constexpr guest::Function<0x00825d6c, u32(u32, u32)> call_00825d6c;  // (from the original)

u32 f_0076e2d8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = call_00825d6c(r0, r1);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        u32 r0_2 = call_00745f80(r0_1);
        call_0014f3cc(r1, r0_2, r2);
        r1_1 = guest::cpu()->r[1];
        if (r3 != 0) {
            call_0052e3ec(r1, r1);
            r1_1 = guest::cpu()->r[1];
        }
        r0_1 = 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0076e2d8
GUEST_EXPORT_FRAMED(0x0076e2d8, d_0076e2d8::f_0076e2d8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0076e37c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076e37c {

struct __attribute__((packed)) Object_0076e37c_0 {
    u8 unknown_0[0x24];  // (not used here)
    u8 byte_24;
};
GUEST_OFFSET(Object_0076e37c_0, byte_24, 0x24);  // (from the original)

inline constexpr guest::Function<0x0014f3cc, u32(u32, u32, u32)> call_0014f3cc;  // (from the original)
inline constexpr guest::Function<0x0052e3ec, u32(u32, u32)> call_0052e3ec;  // (from the original)
inline constexpr guest::Function<0x00745d44, u32(u32, u32, u32, u32)> call_00745d44;  // (from the original)
inline constexpr guest::Function<0x0076e1fc, u32(u32, u32, u32, u32)> call_0076e1fc;  // (from the original)

u32 f_0076e37c(gptr<Object_0076e37c_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x34);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r0_3 = 0;
    u32 r4_1 = *frame.at<u32>(0x48);  // (from the original)
    u32 r0_1 = u32(arg0->byte_24) & 1u;
    u32 r1_1 = r2;
    if (r0_1 < 2u) {
        u32 r0_2 = r0 + (r0_1 + (r0_1 << 1) << 2);
        r2 = *gptr<u32>(r0_2 + 0x4bcu);  // (from the original)
        if (r2 != 0) {
            r0_3 = r0_2 + 0x4b8u;  // (from the original)
            goto L_76e3c8;
        }
    }
    r0_3 = 0u;
L_76e3c8:;
    if (r0_3 != 0) {
        u32 r0_4 = call_00745d44(r0_3, r1_1, r2, r3);
        u32 r1_2 = guest::cpu()->r[1];
        u32 r3_1 = guest::cpu()->r[3];
        if (r0_4 >> 0x1f != (r0_4 & (r0_4 ^ r0_4)) >> 0x1f) {  // (from the original)
            return 0u;
        }
        u32 r0_5 = call_0076e1fc(r0, frame.at(0).addr(), r0_4, r3_1);
        r1_2 = guest::cpu()->r[1];
        if (r0_5 == 0) {
            return 0u;
        }
        call_0014f3cc(r1, frame.at(0).addr(), r3);
        r1_1 = guest::cpu()->r[1];
        if (r4_1 != 0) {
            call_0052e3ec(r1, r1);
            r1_1 = guest::cpu()->r[1];
        }
        r0_3 = 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return r0_3;
}

}  // namespace d_0076e37c
GUEST_EXPORT_FRAMED(0x0076e37c, d_0076e37c::f_0076e37c, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0076e438: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076e438 {

struct __attribute__((packed)) Object_0076e438_0 {
    u8 unknown_0[0x24];  // (not used here)
    u8 byte_24;
};
GUEST_OFFSET(Object_0076e438_0, byte_24, 0x24);  // (from the original)


u32 f_0076e438(gptr<Object_0076e438_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1_1 = u32(arg0->byte_24) & 1u;
    u32 r0_1 = *gptr<u32>(r0 + (r1_1 << 2) + 0x584u);  // (from the original)
    if (r0_1 != 0) {
        r0_1 = s32(s8(*gptr<u8>(r0_1 + 0x166au)));  // (from the original)
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0076e438
GUEST_EXPORT(0x0076e438, d_0076e438::f_0076e438);

// f_0076e458: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076e458 {

struct __attribute__((packed)) Object_0076e458_0 {
    u8 unknown_0[0x24];  // (not used here)
    u8 byte_24;
};
GUEST_OFFSET(Object_0076e458_0, byte_24, 0x24);  // (from the original)

struct __attribute__((packed)) Local_0076e458_r0_2 {
    u8 unknown_0[0x64];  // (not used here)
    u16 half_64;
    u8 unknown_66[0x4];  // (not used here)
    u8 byte_6a;
};
GUEST_OFFSET(Local_0076e458_r0_2, half_64, 0x64);  // (from the original)
GUEST_OFFSET(Local_0076e458_r0_2, byte_6a, 0x6a);  // (from the original)


u32 f_0076e458(gptr<Object_0076e458_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1_1 = u32(arg0->byte_24) & 1u;
    u32 r0_1 = *gptr<u32>(r0 + (r1_1 << 2) + 0x584u);  // (from the original)
    if (r0_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    gptr<Local_0076e458_r0_2> r0_2 = gptr<Local_0076e458_r0_2>(r0_1 + 0x1600u);  // (from the original)
    u32 r1_2 = r0_2->byte_6a;
    if (r1_2 == 0) {
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    if (u32(r0_2->half_64) == 0) {
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    guest::cpu()->r[1] = r1_2;
    return 0u;
}

}  // namespace d_0076e458
GUEST_EXPORT(0x0076e458, d_0076e458::f_0076e458);

// f_0076e49c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076e49c {

struct __attribute__((packed)) Object_0076e49c_0 {
    u8 unknown_0[0x24];  // (not used here)
    u8 byte_24;
};
GUEST_OFFSET(Object_0076e49c_0, byte_24, 0x24);  // (from the original)

inline constexpr guest::Function<0x00535a68, u32(u32, u32)> call_00535a68;  // (from the original)

u32 f_0076e49c(gptr<Object_0076e49c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1_1 = u32(arg0->byte_24) & 1u;
    u32 r0_2 = call_00535a68(r0 + (r1_1 << 4) + 0x3cu, r1_1);  // (from the original)
    if (r0_2 == 0) {
        return r0_2;
    }
    u32 r0_3 = u32(*gptr<u8>(r0_2 + 0xdu)) << 0x1d;  // (from the original)
    u32 nf_1 = r0_3 >> 0x1f;  // (from the original)
    if (nf_1 != 0u) {
        r0_3 = 1u;
    }
    if (nf_1 == 0u) {
        r0_3 = 0u;
    }
    return r0_3;
}

}  // namespace d_0076e49c
GUEST_EXPORT_FRAMED(0x0076e49c, d_0076e49c::f_0076e49c, 0x4010);  // pushes {r4, lr} first, as the original

// f_0076e4d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076e4d4 {

inline constexpr guest::Function<0x0052e3ec, u32(u32, u32)> call_0052e3ec;  // (from the original)
inline constexpr guest::Function<0x00745f80, u32(u32)> call_00745f80;  // (from the original)
inline constexpr guest::Function<0x00825d6c, u32(u32, u32)> call_00825d6c;  // (from the original)

u32 f_0076e4d4(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = call_00825d6c(r0, r1);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        u32 r0_2 = call_00745f80(r0_1);
        *gptr<u32>(r1) = *gptr<u32>(r0_2 + 0xcu);  // (from the original)
        r1_1 = *gptr<u32>(r0_2 + 0x1cu);  // (from the original)
        *gptr<u32>(r1 + 4u) = r1_1;
        *gptr<u32>(r1 + 8u) = *gptr<u32>(r0_2 + 0x2cu);  // (from the original)
        if (r2 != 0) {
            call_0052e3ec(r1, r1);
            r1_1 = guest::cpu()->r[1];
        }
        r0_1 = 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0076e4d4
GUEST_EXPORT_FRAMED(0x0076e4d4, d_0076e4d4::f_0076e4d4, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0076e524: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076e524 {

struct __attribute__((packed)) Object_0076e524_0 {
    u8 unknown_0[0x24];  // (not used here)
    u8 byte_24;
};
GUEST_OFFSET(Object_0076e524_0, byte_24, 0x24);  // (from the original)

inline constexpr guest::Function<0x002fc934, u32(u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x003117bc, u32(u32, u32)> call_003117bc;  // (from the original)

u32 f_0076e524(gptr<Object_0076e524_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r0 = arg0.addr();
    *frame.at<u32>(0) = r3;
    call_002fc934(frame.at(0).addr(), r0 + ((u32(arg0->byte_24) & 1u) << 4) + 0x3cu);  // (from the original)
    u32 r0_3 = call_003117bc(frame.at(0).addr(), guest::cpu()->r[1]);
    return r0_3 == 0xeu ? 1u : 0u;  // (from the original)
}

}  // namespace d_0076e524
GUEST_EXPORT_FRAMED(0x0076e524, d_0076e524::f_0076e524, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0076e564: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076e564 {

inline guest::global<u32, 0x0095c6d8> global_0095c6d8;  // (from the original)
inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32, u32)> call_002fc20c;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;  // (from the original)
inline constexpr guest::Function<0x006158c4, u32(u32, u32, u32, u32)> call_006158c4;  // (from the original)

u32 f_0076e564(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r0_1 = 0;
    *frame.at<u32>(0) = r3;
    if ((*global_0095c6d8 & 1u) != 0) {
        goto L_76e5a8;
    }
    r0_1 = call_002fe7dc(0x95c6d8u, r1, r2, r3);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        goto L_76e5a8;
    }
    call_002fc20c(0x95c6dcu, r1, r2, r3);  // (from the original)
    r3 = guest::cpu()->r[3];
    r2 = 0x100000u;  // (from the original)
    r1 = 0x2f777cu;  // (from the original)
L_76e5a8:;
    u32 r4_1 = s32(s8(*gptr<u8>(r0 + 0x1cu)));  // (from the original)
    u32 r0_2 = 0u;
    if (r4_1 + 1u != 0) {
        if (s32(r4_1) >= 0x40) {  // (from the original)
            goto L_76e5e0;
        }
        u32 r0_3 = call_006158c4(r0_2, r1, r2, r3);
        r3 = guest::cpu()->r[3];
        r0_2 = sxtb(u32(*gptr<u16>(r0_3 + (r4_1 + (r4_1 << 2) << 2) + 0x14u)));  // (from the original)
        if (r0_2 < 0xcu) {  // (from the original)
            goto L_76e5e0;
        }
    }
    r0_2 = 0u;
L_76e5e0:;
    u32 r1_1 = *gptr<u16>(*gptr<u32>(0x95c6e4u + (r0_2 << 2)) + 2u);  // (from the original)
    u32 r0_5 = call_002fcbb0(frame.at(0).addr(), r1_1, r2, r3);
    call_002fc8e8(0x95c6dcu, r0_5);  // (from the original)
    return 0x95c6dcu;  // (from the original)
}

}  // namespace d_0076e564
GUEST_EXPORT_FRAMED(0x0076e564, d_0076e564::f_0076e564, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0076e62c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076e62c {


u32 f_0076e62c(u32 r0, u32 r1) {
    if (r1 >= 8u) {
        r1 = 0u;
    }
    guest::cpu()->r[1] = r1;
    return r0 + (r1 << 2) + 0xecu;  // (from the original)
}

}  // namespace d_0076e62c
GUEST_EXPORT(0x0076e62c, d_0076e62c::f_0076e62c);

// f_0076e6cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076e6cc {

inline constexpr guest::Function<0x006158c4, u32(u32)> call_006158c4;  // (from the original)
inline constexpr guest::Function<0x006e0b2c, u32(u32, u32)> call_006e0b2c;  // (from the original)

u32 f_0076e6cc(u32 r0, u32 r1) {
    u32 r0_1 = call_006e0b2c(r0, r1);
    if (r0_1 == 0) {
        return ~0u;
    }
    u32 r4_1 = s32(s8(*gptr<u8>(r0 + 0x1cu)));  // (from the original)
    if (r4_1 + 1u == 0) {
        return 0u;
    }
    if (s32(r4_1) >= 0x40) {  // (from the original)
        return sxtb(0u);
    }
    u32 r0_4 = call_006158c4(r0_1);
    u32 r1_2 = r4_1 + (r4_1 << 2);
    u32 r0_5 = sxtb(u32(*gptr<u16>(r0_4 + (r1_2 << 2) + 0x14u)));  // (from the original)
    if (r0_5 >= 0xcu) {  // (from the original)
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    guest::cpu()->r[1] = r1_2;
    return sxtb(r0_5);
}

}  // namespace d_0076e6cc
GUEST_EXPORT_FRAMED(0x0076e6cc, d_0076e6cc::f_0076e6cc, 0x4010);  // pushes {r4, lr} first, as the original

// f_0076ec0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076ec0c {

inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x002fcb84, u32(u32, u32)> call_002fcb84;  // (from the original)

u32 f_0076ec0c(u32 r0, u32 r1) {
    u32 r6 = 0;
    u32 r7 = r0;
    u32 r8 = r1;
    u32 r0_1 = call_002fcaf4(r1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        r6 = 0u;
    } else {
        return 0u;
    }
    do {
        u32 r4 = 0u;
        u32 r5 = r7 + (r6 + (r6 << 2) << 2);
        do {
            u32 r1_2 = *gptr<u16>(r5 + (r4 << 1) + 0x14u);  // (from the original)
            u32 r0_2 = call_002fcb84(r8, r1_2);
            r1_1 = guest::cpu()->r[1];
            if (r0_2 != 0) {
                return 1u;
            }
            r4 += 1u;
            guest::preempt();
        } while (s32(r4) < 0xa);  // (from the original)
        r6 += 1u;
        guest::preempt();
    } while (s32(r6) < 6);
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_0076ec0c
GUEST_EXPORT_FRAMED(0x0076ec0c, d_0076ec0c::f_0076ec0c, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0076ec7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076ec7c {

inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)

u32 f_0076ec7c(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r1_1 = *gptr<u16>(r1 + (r2 + (r2 << 2) << 2) + (r3 << 1) + 0x8cu);  // (from the original)
    return call_002fcbb0(guest::cpu()->r[0], r1_1, r2, r3);
}

}  // namespace d_0076ec7c
GUEST_EXPORT(0x0076ec7c, d_0076ec7c::f_0076ec7c);

// f_0076ec90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076ec90 {


u32 f_0076ec90(u32 r0, u32 r1) {
    u32 r3 = 0u;
    u32 r2 = r3;
    do {
        if (u32(*gptr<u8>(r0 + sxtb(r2) + 0x10u)) == 0) {  // (from the original)
            goto L_76ecbc;
        }
        if (r3 != r1) {
            r3 += 1u;
            goto L_76ecbc;
        }
        return sxtb(r2);
L_76ecbc:;
        r2 += 1u;
        guest::preempt();
    } while (s32(r2) < 0x40);  // (from the original)
    return ~0u;
}

}  // namespace d_0076ec90
GUEST_EXPORT(0x0076ec90, d_0076ec90::f_0076ec90);

// f_0076ed30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076ed30 {


u32 f_0076ed30(u32 r0) {
    u32 r2 = r0;
    r0 = 0u;
    u32 r1 = r0;
    do {
        u32 r3_1 = r2 + sxtb(r1);
        r1 += 1u;
        if (u32(*gptr<u8>(r3_1 + 0x10u)) != 0) {  // (from the original)
            r0 += 1u;
        }
        guest::preempt();
    } while (s32(r1) < 0x40);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0076ed30
GUEST_EXPORT(0x0076ed30, d_0076ed30::f_0076ed30);

// f_0076ee14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076ee14 {

struct __attribute__((packed)) Object_0076ee14_0 {
    u8 unknown_0[0x1c204];  // (not used here)
    u8 byte_1c204;
};
GUEST_OFFSET(Object_0076ee14_0, byte_1c204, 0x1c204);  // (from the original)


u32 f_0076ee14(gptr<Object_0076ee14_0> arg0) {
    u32 r0_1 = arg0->byte_1c204;
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    return r0_1;
}

}  // namespace d_0076ee14
GUEST_EXPORT(0x0076ee14, d_0076ee14::f_0076ee14);

// f_0076eec4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076eec4 {


u32 f_0076eec4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r1_1 = r2 + (r1 + (r1 << 1) << 1);
    u32 r1_2 = r3 + (r1_1 + (r1_1 << 2) << 1);
    guest::cpu()->r[1] = r1_2;
    return r0 + (r1_2 << 2);
}

}  // namespace d_0076eec4
GUEST_EXPORT(0x0076eec4, d_0076eec4::f_0076eec4);

// f_0076ef10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076ef10 {


void f_0076ef10() {
    return;
}

}  // namespace d_0076ef10
GUEST_EXPORT(0x0076ef10, d_0076ef10::f_0076ef10);

// f_0076ef28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076ef28 {


u32 f_0076ef28(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r1_1 = r3 + (r2 + (r1 + (r1 << 1) << 1) << 2);
    u32 r1_2 = (r1_1 << 4) - r1_1;
    return r0 + (r1_2 + (r1_2 << 3) << 4) + 4u;
}

}  // namespace d_0076ef28
GUEST_EXPORT(0x0076ef28, d_0076ef28::f_0076ef28);

// f_0076ef60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076ef60 {


u32 f_0076ef60(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r1_1 = r2 + (r1 + (r1 << 1) << 1);
    if ((r1_1 & 1u) != 0) {
        r3 += 4u;
    }
    u32 r1_2 = *gptr<u8>(r0 + (r1_1 >> 1) + 0x25f84u);  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return (r1_2 & lsl_r(1u, r3 & 0xff)) == 0 ? 1u : 0u;  // (from the original)
}

}  // namespace d_0076ef60
GUEST_EXPORT(0x0076ef60, d_0076ef60::f_0076ef60);

// f_0076f018: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076f018 {


u32 f_0076f018(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r1_1 = r1 + (r1 << 3) + r2;
    u32 r1_2 = r3 + (r1_1 + (r1_1 << 2) << 1);
    guest::cpu()->r[1] = r1_2;
    return r0 + (r1_2 << 2);
}

}  // namespace d_0076f018
GUEST_EXPORT(0x0076f018, d_0076f018::f_0076f018);

// f_0076f030: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076f030 {

struct __attribute__((packed)) Object_0076f030_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_0076f030_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0076f030_0, word_10, 0x10);  // (from the original)

struct __attribute__((packed)) Local_0076f030_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0076f030_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0076f030_ea_1, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x00845290> global_00845290;  // (from the original)
inline guest::global<u32, 0x00845294> global_00845294;  // (from the original)

u32 f_0076f030(gptr<Object_0076f030_0> arg0) {
    u32 r4_1 = 0;
    u32 r3_1 = arg0->word_c;
    u32 r1_1 = *global_00845294;
    if (r3_1 != *global_00845290) {
        goto L_76f078;
    }
    if (r3_1 == 0) {
        if (((arg0->word_10 | r1_1) & 1u) == 0) {
            goto L_76f070;
        }
    }
    if (arg0->word_10 != r1_1) {
        goto L_76f078;
    }
L_76f070:;
    r4_1 = 1u;
    goto L_76f07c;
L_76f078:;
    r4_1 = 0u;
L_76f07c:;
    gptr<Local_0076f030_ea_1> ea_1 = gptr<Local_0076f030_ea_1>(0x845288u);  // (from the original)
    u32 r1_2 = ea_1->word_4;
    if (r3_1 != ea_1->word_0) {
        guest::cpu()->r[1] = r1_2;
        return 0u | r4_1;
    }
    if (r3_1 == 0) {
        if (((arg0->word_10 | r1_2) & 1u) == 0) {
            guest::cpu()->r[1] = r1_2;
            return 1u | r4_1;
        }
    }
    if (arg0->word_10 != r1_2) {
        guest::cpu()->r[1] = r1_2;
        return 0u | r4_1;
    }
    guest::cpu()->r[1] = r1_2;
    return 1u | r4_1;
}

}  // namespace d_0076f030
GUEST_EXPORT_FRAMED(0x0076f030, d_0076f030::f_0076f030, 0x10);  // pushes {r4} first, as the original

// f_0076f1b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076f1b4 {

struct __attribute__((packed)) Object_0076f1b4_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_0076f1b4_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0076f1b4_0, word_10, 0x10);  // (from the original)

inline guest::global<u32, 0x00845fc8> global_00845fc8;  // (from the original)
inline guest::global<u32, 0x00845fcc> global_00845fcc;  // (from the original)

u32 f_0076f1b4(gptr<Object_0076f1b4_0> arg0) {
    u32 r3_1 = arg0->word_c;
    u32 r2_1 = *global_00845fc8;
    u32 r1_1 = *global_00845fcc;
    if (r3_1 != r2_1) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    if (r3_1 == 0) {
        if (((arg0->word_10 | r1_1) & 1u) == 0) {
            guest::cpu()->r[1] = r1_1;
            return 1u;
        }
    }
    if (arg0->word_10 != r1_1) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_0076f1b4
GUEST_EXPORT(0x0076f1b4, d_0076f1b4::f_0076f1b4);

// f_0076f214: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076f214 {

struct __attribute__((packed)) Object_0076f214_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_0076f214_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0076f214_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0076f214_0, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Object_0076f214_1 {
    u8 unknown_0[0x20];  // (not used here)
    u32 word_20;
};
GUEST_OFFSET(Object_0076f214_1, word_20, 0x20);  // (from the original)

struct __attribute__((packed)) Local_0076f214_r1_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0076f214_r1_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0076f214_r1_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0076f214_r1_1, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_0076f214_r4_2 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Local_0076f214_r4_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0076f214_r4_2, word_8, 0x8);  // (from the original)

inline guest::global<u32, 0x0076f2c0> global_0076f2c0;  // (from the original)
inline guest::global<u32, 0x0076f2c4> global_0076f2c4;  // (from the original)

void f_0076f214(gptr<Object_0076f214_0> arg0, gptr<Object_0076f214_1> arg1, u32 r2, float S0_unused, float S1) {
    u32 r1 = arg1.addr();
    u32 fpsr = guest::cpu()->fpscr;
    float S0_1 = 0;
    float S0_2 = 0;
    u32 r4_1 = arg1->word_20;
    float S2 = std::bit_cast<float>(*global_0076f2c0);
    u32 r12 = ~0u;
    u32 r3 = 0u;
    if (r4_1 < 0u || r4_1 == 0) {
        S0_2 = std::bit_cast<float>(*global_0076f2c4);
        arg0->word_0 = std::bit_cast<u32>(S0_2);
        arg0->word_4 = std::bit_cast<u32>(S0_2);
        arg0->word_8 = std::bit_cast<u32>(S0_2);
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0_2;
        return;
    }
    do {
        gptr<Local_0076f214_r4_2> r4_2 = gptr<Local_0076f214_r4_2>(r1 + 0x344u);  // (from the original)
        if (r3 < 0xau) {  // (from the original)
            r4_2 = gptr<Local_0076f214_r4_2>(r4_2.addr() + (r3 << 4));
        }
        float S1_1 = std::bit_cast<float>(*gptr<u32>(r2)) - std::bit_cast<float>(r4_2->word_0);
        S0_1 = std::bit_cast<float>(*gptr<u32>(r2 + 8u)) - std::bit_cast<float>(r4_2->word_8);
        S1 = S1_1 * S1_1 + S0_1 * S0_1;
        fpsr = fpsr & 0xfffffffu | vfp_cmpf(S1, S2);  // (from the original)
        if (!(fpsr >> 0x1d & 1)) {  // (from the original)
            S2 = S1;
            r12 = r3;
        }
        r3 += 1u;
        guest::preempt();
    } while (*gptr<u32>(r1 + 0x20u) > r3);  // (from the original)
    if (r12 + 1u == 0) {
        S0_2 = std::bit_cast<float>(*global_0076f2c4);
        arg0->word_0 = std::bit_cast<u32>(S0_2);
        arg0->word_4 = std::bit_cast<u32>(S0_2);
        arg0->word_8 = std::bit_cast<u32>(S0_2);
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1;
        return;
    }
    gptr<Local_0076f214_r1_1> r1_1 = gptr<Local_0076f214_r1_1>(r1 + 0x344u);  // (from the original)
    if (r12 < 0xau) {  // (from the original)
        r1_1 = gptr<Local_0076f214_r1_1>(r1_1.addr() + (r12 << 4));
    }
    u32 r2_1 = r1_1->word_0;
    u32 r3_1 = r1_1->word_4;
    u32 r1_2 = r1_1->word_8;
    arg0->word_8 = r1_2;
    arg0->word_0 = r2_1;
    arg0->word_4 = r3_1;
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1;
    return;
}

}  // namespace d_0076f214
GUEST_EXPORT_FRAMED(0x0076f214, d_0076f214::f_0076f214, 0x30);  // pushes {r4, r5} first, as the original

// f_0076f2c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076f2c8 {

struct __attribute__((packed)) Object_0076f2c8_0 {
    u8 unknown_0[0x67cc];  // (not used here)
    u32 word_67cc;
};
GUEST_OFFSET(Object_0076f2c8_0, word_67cc, 0x67cc);  // (from the original)


u32 f_0076f2c8(gptr<Object_0076f2c8_0> arg0) {
    return arg0->word_67cc;
}

}  // namespace d_0076f2c8
GUEST_EXPORT(0x0076f2c8, d_0076f2c8::f_0076f2c8);

// f_0076f38c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076f38c {

struct __attribute__((packed)) Object_0076f38c_0 {
    u8 unknown_0[0x67cc];  // (not used here)
    u32 word_67cc;
    u8 unknown_67d0[0x4];  // (not used here)
    u32 word_67d4;
};
GUEST_OFFSET(Object_0076f38c_0, word_67cc, 0x67cc);  // (from the original)
GUEST_OFFSET(Object_0076f38c_0, word_67d4, 0x67d4);  // (from the original)


u32 f_0076f38c(gptr<Object_0076f38c_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r0_1 = r0 + 0x67ccu;  // (from the original)
    u32 r2_1 = arg0->word_67cc;
    u32 zf_1 = r2_1 == r1;
    u32 cf_1 = r2_1 >= r1;
    if (cf_1 && !zf_1) {
        r0_1 = *gptr<u32>(arg0->word_67d4 + (r1 << 2));
    }
    if (!cf_1 || zf_1) {
        r0_1 = 0u;
    }
    u32 r1_1 = *gptr<u32>(*gptr<u32>(r0_1) + 0xa0u);  // (from the original)
    // virtual function 40 of r0_1
    return guest::call_address<u32>(r1_1, r0_1, r1_1, r2_1, guest::cpu()->r[3]);
}

}  // namespace d_0076f38c
GUEST_EXPORT(0x0076f38c, d_0076f38c::f_0076f38c);

// f_0076f68c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076f68c {

struct __attribute__((packed)) Object_0076f68c_0 {
    u8 unknown_0[0x64];  // (not used here)
    u16 half_64;
};
GUEST_OFFSET(Object_0076f68c_0, half_64, 0x64);  // (from the original)


u32 f_0076f68c(gptr<Object_0076f68c_0> arg0) {
    return (u32(arg0->half_64) & 8u) >> 3;
}

}  // namespace d_0076f68c
GUEST_EXPORT(0x0076f68c, d_0076f68c::f_0076f68c);

// f_0076f69c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076f69c {

struct __attribute__((packed)) Object_0076f69c_0 {
    u8 unknown_0[0x64];  // (not used here)
    u16 half_64;
};
GUEST_OFFSET(Object_0076f69c_0, half_64, 0x64);  // (from the original)


u32 f_0076f69c(gptr<Object_0076f69c_0> arg0) {
    return (u32(arg0->half_64) & 4u) >> 2;
}

}  // namespace d_0076f69c
GUEST_EXPORT(0x0076f69c, d_0076f69c::f_0076f69c);

// f_0076f7e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076f7e8 {

struct __attribute__((packed)) Object_0076f7e8_0 {
    u8 unknown_0[0x64];  // (not used here)
    u16 half_64;
};
GUEST_OFFSET(Object_0076f7e8_0, half_64, 0x64);  // (from the original)


u32 f_0076f7e8(gptr<Object_0076f7e8_0> arg0) {
    u32 r0_1 = arg0->half_64;
    if ((r0_1 & 1u) != 0) {
        return 0u;
    }
    return (r0_1 & 2u) == 0 ? 2u : 1u;
}

}  // namespace d_0076f7e8
GUEST_EXPORT(0x0076f7e8, d_0076f7e8::f_0076f7e8);

// f_0076f9fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076f9fc {

struct __attribute__((packed)) Object_0076f9fc_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_0076f9fc_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0076f9fc_0, word_10, 0x10);  // (from the original)

inline guest::global<u32, 0x0087aa84> global_0087aa84;  // (from the original)
inline guest::global<u32, 0x0087aa88> global_0087aa88;  // (from the original)
inline guest::global<u32, 0x0087aa8c> global_0087aa8c;  // (from the original)
inline guest::global<u32, 0x0087aa90> global_0087aa90;  // (from the original)
inline guest::global<u32, 0x0087aa94> global_0087aa94;  // (from the original)
inline guest::global<u32, 0x0087aa98> global_0087aa98;  // (from the original)
inline guest::global<u32, 0x0087aa9c> global_0087aa9c;  // (from the original)
inline guest::global<u32, 0x0087aaa0> global_0087aaa0;  // (from the original)
inline guest::global<u32, 0x0087aaa4> global_0087aaa4;  // (from the original)
inline guest::global<u32, 0x0087aaa8> global_0087aaa8;  // (from the original)
inline guest::global<u32, 0x0087aaac> global_0087aaac;  // (from the original)
inline guest::global<u32, 0x0087aab0> global_0087aab0;  // (from the original)

u32 f_0076f9fc(gptr<Object_0076f9fc_0> arg0) {
    u32 r4_1 = 0;
    u32 r3_3 = 0;
    u32 r3_5 = 0;
    u32 r3_7 = 0;
    u32 r3_9 = 0;
    u32 r1_1 = arg0->word_c;
    u32 r3_1 = *global_0087aa98;
    if (r1_1 != *global_0087aa94) {
        goto L_76fa44;
    }
    if (r1_1 == 0) {
        if (((arg0->word_10 | r3_1) & 1u) == 0) {
            goto L_76fa3c;
        }
    }
    if (arg0->word_10 != r3_1) {
        goto L_76fa44;
    }
L_76fa3c:;
    r4_1 = 1u;
    goto L_76fa48;
L_76fa44:;
    r4_1 = 0u;
L_76fa48:;
    u32 r3_2 = *global_0087aa88;
    if (r1_1 != *global_0087aa84) {
        goto L_76fa84;
    }
    if (r1_1 == 0) {
        if (((arg0->word_10 | r3_2) & 1u) == 0) {
            goto L_76fa7c;
        }
    }
    if (arg0->word_10 != r3_2) {
        goto L_76fa84;
    }
L_76fa7c:;
    r3_3 = 1u;
    goto L_76fa88;
L_76fa84:;
    r3_3 = 0u;
L_76fa88:;
    u32 r4_2 = r4_1 | r3_3;
    u32 r3_4 = *global_0087aaa0;
    if (r1_1 != *global_0087aa9c) {
        goto L_76fac8;
    }
    if (r1_1 == 0) {
        if (((arg0->word_10 | r3_4) & 1u) == 0) {
            goto L_76fac0;
        }
    }
    if (arg0->word_10 != r3_4) {
        goto L_76fac8;
    }
L_76fac0:;
    r3_5 = 1u;
    goto L_76facc;
L_76fac8:;
    r3_5 = 0u;
L_76facc:;
    u32 r4_3 = r4_2 | r3_5;
    u32 r3_6 = *global_0087aa90;
    if (r1_1 != *global_0087aa8c) {
        goto L_76fb0c;
    }
    if (r1_1 == 0) {
        if (((arg0->word_10 | r3_6) & 1u) == 0) {
            goto L_76fb04;
        }
    }
    if (arg0->word_10 != r3_6) {
        goto L_76fb0c;
    }
L_76fb04:;
    r3_7 = 1u;
    goto L_76fb10;
L_76fb0c:;
    r3_7 = 0u;
L_76fb10:;
    u32 r4_4 = r4_3 | r3_7;
    u32 r3_8 = *global_0087aab0;
    if (r1_1 != *global_0087aaac) {
        goto L_76fb50;
    }
    if (r1_1 == 0) {
        if (((arg0->word_10 | r3_8) & 1u) == 0) {
            goto L_76fb48;
        }
    }
    if (arg0->word_10 != r3_8) {
        goto L_76fb50;
    }
L_76fb48:;
    r3_9 = 1u;
    goto L_76fb54;
L_76fb50:;
    r3_9 = 0u;
L_76fb54:;
    u32 r12_1 = r4_4 | r3_9;
    u32 r3_10 = *global_0087aaa4;
    u32 r2_1 = *global_0087aaa8;
    if (r1_1 != r3_10) {
        guest::cpu()->r[1] = r1_1;
        return 0u | r12_1;
    }
    if (r1_1 == 0) {
        r1_1 = arg0->word_10 | r2_1;
        if ((r1_1 & 1u) == 0) {
            guest::cpu()->r[1] = r1_1;
            return 1u | r12_1;
        }
    }
    if (arg0->word_10 != r2_1) {
        guest::cpu()->r[1] = r1_1;
        return 0u | r12_1;
    }
    guest::cpu()->r[1] = r1_1;
    return 1u | r12_1;
}

}  // namespace d_0076f9fc
GUEST_EXPORT_FRAMED(0x0076f9fc, d_0076f9fc::f_0076f9fc, 0x10);  // pushes {r4} first, as the original

// f_0076fd38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0076fd38 {

inline guest::global<u8, 0x00ad2f1c> global_00ad2f1c;  // (from the original)
inline constexpr guest::Function<0x005359fc, u32(u32, u32)> call_005359fc;  // (from the original)
inline constexpr guest::Function<0x006ef7a4, u32(u32, u32, u32, u32)> call_006ef7a4;  // (from the original)

u32 f_0076fd38(u32 r0, u32 r1) {
    call_006ef7a4(0xad2f1cu, r0, r1, guest::cpu()->r[3]);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    u32 r0_1 = *global_00ad2f1c;
    if (r0_1 == 0x9bu) {  // (from the original)
        return 0u;
    }
    u32 r0_2 = call_005359fc(r0_1, r1_1);
    if (*gptr<u32>(0xad2f1cu + (*gptr<u32>(r0_2 + 4u) << 2)) + 1u != 0) {  // (from the original)
        return 1u;
    }
    return 0u;
}

}  // namespace d_0076fd38
GUEST_EXPORT_FRAMED(0x0076fd38, d_0076fd38::f_0076fd38, 0x4010);  // pushes {r4, lr} first, as the original
