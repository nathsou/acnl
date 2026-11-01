// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_00510878: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00510878 {

inline guest::global<u32, 0x0096b92c> global_0096b92c;  // (from the original)
inline guest::global<u32, 0x0096b930> global_0096b930;  // (from the original)
inline constexpr guest::Function<0x002ffb64, u32(u32)> call_002ffb64;  // (from the original)
inline constexpr guest::Function<0x00377160, u32(u32)> call_00377160;  // (from the original)
inline constexpr guest::Function<0x00489ec8, u32(u32)> call_00489ec8;  // (from the original)
inline constexpr guest::Function<0x0050cd1c, u32(u32)> call_0050cd1c;  // (from the original)
inline constexpr guest::Function<0x00515d1c, u32(u32, u32, u32, u32)> call_00515d1c;  // (from the original)

void f_00510878(u32 r0) {
    call_00515d1c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (*gptr<u32>(r0 + 0x14u) != 0) {  // (from the original)
        return;
    }
    u32 r0_1 = *gptr<u32>(r0 + 0x38u);  // (from the original)
    if (r0_1 == 0) {
        u32 r0_2 = call_00489ec8(r0_1);
        call_0050cd1c(r0_2);
        *gptr<u8>(r0 + 0x40u) = 0;  // (from the original)
        *gptr<u8>(r0 + 0x41u) = 0;  // (from the original)
    }
    if (u32(*gptr<u8>(r0 + 0x40u)) != 0) {  // (from the original)
        return;
    }
    *global_0096b92c = 0;
    *global_0096b930 = 0;
    call_00377160(0x96b930u);  // (from the original)
    *gptr<u8>(r0 + 0x28u) = 0;  // (from the original)
    u32 r0_3 = *gptr<u32>(r0 + 0x24u);  // (from the original)
    if (r0_3 != 0) {
        call_002ffb64(r0_3);
        *gptr<u32>(r0 + 0x24u) = 0;  // (from the original)
    }
    *gptr<u32>(r0 + 0x1cu) = 0;  // (from the original)
    return;
}

}  // namespace d_00510878
GUEST_EXPORT_FRAMED(0x00510878, d_00510878::f_00510878, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00510b68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00510b68 {

inline constexpr guest::Function<0x0044acbc, u32(u32, u32)> call_0044acbc;  // (from the original)
inline constexpr guest::Function<0x0044badc, u32(u32, u32)> call_0044badc;  // (from the original)
inline constexpr guest::Function<0x0044c1ac, u32(u32, u32)> call_0044c1ac;  // (from the original)
inline constexpr guest::Function<0x0044c1ec, u32(u32, u32)> call_0044c1ec;  // (from the original)
inline constexpr guest::Function<0x004ddc34, u32(u32, u32)> call_004ddc34;  // (from the original)
inline constexpr guest::Function<0x0073394c, u32(u32, u32, u32, u32)> call_0073394c;  // (from the original)
inline constexpr guest::Function<0x00733a8c, u32(u32, u32)> call_00733a8c;  // (from the original)
inline constexpr guest::Function<0x00733ae4, u32(u32, u32)> call_00733ae4;  // (from the original)
inline constexpr guest::Function<0x00733e00, u32(u32, u32)> call_00733e00;  // (from the original)

void f_00510b68(u32 r0, u32 r1) {
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 res_2 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_1 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r1_2 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r4 = r0;
    u32 r5 = 0x974a64u;  // (from the original)
    u32 r0_2 = call_0073394c(*gptr<u32>(r5), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 res_1 = r0_2 & 0x80000000u;  // (from the original)
    u32 r6 = 0u;
    if (res_1 >> 0x1f) {  // (from the original)
        r1 = 0xd8a14825u;  // (from the original)
        if (r0_2 == r1) {
            goto L_510bdc;
        }
    } else {
        u32 r0_4 = call_00733e00(*gptr<u32>(r5), res_1);
        r1 = guest::cpu()->r[1];
        if (r0_4 == 0) {
            goto L_510bdc;
        }
    }
    r0_5 = *gptr<u32>(r5);
    r0_6 = call_0044acbc(r0_5, r1);
    r1 = guest::cpu()->r[1];
    res_2 = r0_6 & 0x80000000u;  // (from the original)
    if (res_2 >> 0x1f) {  // (from the original)
        goto L_510bdc;
    }
L_510bc0:;
    r0_7 = *gptr<u32>(r5);
    r0_8 = call_00733ae4(r0_7, r1);
    r1_1 = guest::cpu()->r[1];
    if (r0_8 == 0) {
        goto L_510c10;
    }
    r0_9 = *gptr<u32>(r5);
    call_00733a8c(r0_9, r1_1);
    r1 = guest::cpu()->r[1];
L_510bdc:;
    r0_10 = *gptr<u32>(r5);
    call_0044c1ac(r0_10, r1);
    r1_2 = guest::cpu()->r[1];
    r0_11 = *gptr<u32>(r5);
    if (r0_11 != 0) {
        call_0044badc(r0_11, 0x7d0u);  // (from the original)
        r1_2 = guest::cpu()->r[1];
    }
    *gptr<u8>(r4 + 0x6bu) = u8(r6);  // (from the original)
    r0_12 = *gptr<u32>(r5);
    if (r0_12 != 0) {
        call_0044c1ec(r0_12, r1_2);
        r1_2 = guest::cpu()->r[1];
    }
    *gptr<u8>(r4 + 0x69u) = u8(r6);  // (from the original)
    *gptr<u8>(r4 + 0x68u) = u8(r6);  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return;
L_510c10:;
    call_004ddc34(r0_8, r1_1);
    r1 = guest::cpu()->r[1];
    guest::preempt();
    goto L_510bc0;
}

}  // namespace d_00510b68
GUEST_EXPORT_FRAMED(0x00510b68, d_00510b68::f_00510b68, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0051139c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051139c {

inline constexpr guest::Function<0x0044af48, u32(u32, u32, u32, u32)> call_0044af48;  // (from the original)
inline constexpr guest::Function<0x0044c1ac, u32(u32, u32, u32, u32)> call_0044c1ac;  // (from the original)
inline constexpr guest::Function<0x004ddc34, u32(u32, u32, u32, u32)> call_004ddc34;  // (from the original)
inline constexpr guest::Function<0x0051207c, u32(u32, u32, u32, u32)> call_0051207c;  // (from the original)
inline constexpr guest::Function<0x00733aac, u32(u32, u32, u32, u32)> call_00733aac;  // (from the original)
inline constexpr guest::Function<0x00733b4c, u32(u32, u32, u32, u32)> call_00733b4c;  // (from the original)

u32 f_0051139c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 res_2 = 0;
    u32 r2_2 = 0;
    u32 r4 = r0;
    u32 r6 = 0x974a64u;  // (from the original)
    *frame.at<u32>(4) = 0xe7e3ffff;  // (from the original)
    *gptr<u32>(*gptr<u32>(r6) + 0x60u) = 0x515344;  // (from the original)
    u32 r0_2 = call_0044af48(*gptr<u32>(r6), r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *frame.at<u32>(4) = r0_2;
    u32 r5 = 0u;
    if (!((r0_2 & 0x80000000u) >> 0x1f)) {  // (from the original)
        goto L_5113ec;
    }
    r0_3 = *gptr<u32>(r6);
    call_0044c1ac(r0_3, r1, r2, r3);
    goto L_511414;
L_5113ec:;
    r0_4 = *gptr<u32>(r6);
    r0_5 = call_00733b4c(r0_4, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_5 == 0) {
        goto L_511438;
    }
    r0_6 = *gptr<u32>(r6);
    r0_7 = call_00733aac(r0_6, r1_1, r2_1, r3_1);
    *frame.at<u32>(4) = r0_7;
    res_2 = r0_7 & 0x80000000u;  // (from the original)
    if (!(res_2 >> 0x1f)) {  // (from the original)
        *gptr<u8>(r4 + 0x6bu) = 1;  // (from the original)
        return 1u;
    }
L_511414:;
    r2_2 = frame.at(4).addr();
    *frame.at<u32>(0) = r5;
    call_0051207c(r4, 3u, r2_2, 0u);
    return 0u;
L_511438:;
    call_004ddc34(r0_5, r1_1, r2_1, r3_1);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::preempt();
    goto L_5113ec;
}

}  // namespace d_0051139c
GUEST_EXPORT_FRAMED(0x0051139c, d_0051139c::f_0051139c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00511468: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00511468 {

inline constexpr guest::Function<0x0044b7d8, u32(u32, u32, u32, u32)> call_0044b7d8;  // (from the original)
inline constexpr guest::Function<0x004ddc34, u32(u32, u32, u32, u32)> call_004ddc34;  // (from the original)
inline constexpr guest::Function<0x0051207c, u32(u32, u32, u32, u32)> call_0051207c;  // (from the original)
inline constexpr guest::Function<0x00733b84, u32(u32, u32, u32, u32)> call_00733b84;  // (from the original)
inline constexpr guest::Function<0x00733c20, u32(u32, u32, u32, u32)> call_00733c20;  // (from the original)

void f_00511468(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r4 = r0;
    u32 r5 = 0x974a64u;  // (from the original)
    u32 r0_2 = call_0044b7d8(*gptr<u32>(r5), r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *frame.at<u32>(4) = r0_2;
    if ((r0_2 & 0x80000000u) >> 0x1f) {  // (from the original)
        goto L_5114d8;
    }
L_51148c:;
    r0_3 = *gptr<u32>(r5);
    r0_4 = call_00733c20(r0_3, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_4 != 0) {
        u32 r0_6 = call_00733b84(*gptr<u32>(r5), r1_1, r2_1, r3_1);
        *frame.at<u32>(4) = r0_6;
        if ((r0_6 & 0x80000000u) >> 0x1f) {  // (from the original)
            goto L_5114d8;
        }
        *gptr<u8>(r4 + 0x6au) = 1;  // (from the original)
        return;
    }
    call_004ddc34(r0_4, r1_1, r2_1, r3_1);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::preempt();
    goto L_51148c;
L_5114d8:;
    *frame.at<u32>(0) = 0;
    call_0051207c(r4, 3u, frame.at(4).addr(), 0u);
    return;
}

}  // namespace d_00511468
GUEST_EXPORT_FRAMED(0x00511468, d_00511468::f_00511468, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00511504: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00511504 {

inline constexpr guest::Function<0x0050ee4c, u32(u32, u32, u32, u32)> call_0050ee4c;  // (from the original)

u32 f_00511504(u32 r0) {
    u32 r0_1 = call_0050ee4c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    return r0_1;
}

}  // namespace d_00511504
GUEST_EXPORT_FRAMED(0x00511504, d_00511504::f_00511504, 0x4010);  // pushes {r4, lr} first, as the original

// f_00511a04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00511a04 {

inline constexpr guest::Function<0x0044b868, u32(u32, u32, u32, u32)> call_0044b868;  // (from the original)
inline constexpr guest::Function<0x004ddc34, u32(u32, u32, u32, u32)> call_004ddc34;  // (from the original)
inline constexpr guest::Function<0x0051207c, u32(u32, u32, u32, u32)> call_0051207c;  // (from the original)
inline constexpr guest::Function<0x00733bbc, u32(u32, u32, u32, u32)> call_00733bbc;  // (from the original)
inline constexpr guest::Function<0x00733c50, u32(u32, u32, u32, u32)> call_00733c50;  // (from the original)

void f_00511a04(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r4 = r0;
    u32 r5 = 0x974a64u;  // (from the original)
    u32 r0_2 = call_0044b868(*gptr<u32>(r5), r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *frame.at<u32>(4) = r0_2;
    u32 r6 = 0u;
    if ((r0_2 & 0x80000000u) >> 0x1f) {  // (from the original)
        goto L_511a60;
    }
L_511a2c:;
    r0_3 = *gptr<u32>(r5);
    r0_4 = call_00733c50(r0_3, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_4 == 0) {
        goto L_511a84;
    }
    r0_5 = *gptr<u32>(r5);
    r0_6 = call_00733bbc(r0_5, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    *frame.at<u32>(4) = r0_6;
    if (s32(r0_6) >= 0) {
        *gptr<u8>(r4 + 0x6au) = u8(r6);  // (from the original)
        return;
    }
L_511a60:;
    r2_2 = frame.at(4).addr();
    *frame.at<u32>(0) = r6;
    call_0051207c(r4, 3u, r2_2, 0u);
    r1_2 = guest::cpu()->r[1];
    return;
L_511a84:;
    call_004ddc34(r0_4, r1_1, r2_1, r3_1);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::preempt();
    goto L_511a2c;
}

}  // namespace d_00511a04
GUEST_EXPORT_FRAMED(0x00511a04, d_00511a04::f_00511a04, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0051207c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051207c {

inline guest::global<u32, 0x00974a58> global_00974a58;  // (from the original)
inline constexpr guest::Function<0x004133a0, u32(u32, u32, u32)> call_004133a0;  // (from the original)
inline constexpr guest::Function<0x00413478, u32(u32, u32, u32, u32)> call_00413478;  // (from the original)
inline constexpr guest::Function<0x004137d8, u32(u32, u32, u32)> call_004137d8;  // (from the original)
inline constexpr guest::Function<0x0072f380, u32(u32, u32, u32)> call_0072f380;  // (from the original)
inline constexpr guest::Function<0x0072f3a4, u32(u32, u32, u32)> call_0072f3a4;  // (from the original)

void f_0051207c(u32 r0, u32 r1, u32 r2) {
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    u32 r0_1 = call_00413478(r2, r1, r2, guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    if (r0_1 == 0) {
        r4_1 = 0u;
        goto L_5120b0;
    }
    r4_1 = (r0_1 == 1u || r0_1 == 2u) ? 1u : 3u;
L_5120b0:;
    if (r4_1 != r1) {
        r4_1 = r1;
    }
    u32 r0_2 = call_004133a0(r2, r1_1, r2_1);
    u32 r1_2 = guest::cpu()->r[1];
    u32 r2_2 = guest::cpu()->r[2];
    if (r0_2 == 3u || r0_2 == 0) {
        goto L_512104;
    }
    r5_1 = *global_00974a58;
    if (r5_1 == 0) {
        goto L_51210c;
    }
    r0_3 = call_0072f380(r5_1, r1_2, r2_2);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    if (r0_3 != 0) {
        goto L_512104;
    }
    r0_4 = call_0072f3a4(r5_1, r1_3, r2_3);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    if (r0_4 == 0) {
        goto L_51210c;
    }
L_512104:;
    r0_5 = 0u;
    goto L_512114;
L_51210c:;
    r0_5 = call_004137d8(r2, r1_2, r2_2);
L_512114:;
    u32 r2_4 = *gptr<u32>(r0 + 0x54u);  // (from the original)
    if (r2_4 != 0) {
        guest::cpu()->r[13] += 0x18u;  // (from the original)
        guest::call_address<u32>(r2_4, r4_1, r0_5, r2_4, guest::cpu()->r[3]);
        return;
    }
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r0_5;
    return;
}

}  // namespace d_0051207c
GUEST_EXPORT(0x0051207c, d_0051207c::f_0051207c);

// f_005122a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005122a8 {

struct __attribute__((packed)) Local_005122a8_ea_1 {
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
GUEST_OFFSET(Local_005122a8_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_005122a8_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_005122a8_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_005122a8_ea_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_005122a8_ea_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_005122a8_ea_1, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_005122a8_ea_1, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_005122a8_ea_1, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Local_005122a8_ea_1, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Local_005122a8_ea_1, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Local_005122a8_ea_1, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Local_005122a8_ea_1, word_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Local_005122a8_ea_1, word_30, 0x30);  // (from the original)
GUEST_OFFSET(Local_005122a8_ea_1, word_34, 0x34);  // (from the original)

struct __attribute__((packed)) Local_005122a8_ea_7 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005122a8_ea_7, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_005122a8_ea_7, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_005122a8_ea_8 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u8 unknown_20[0x4];  // (not used here)
    u32 word_24;
};
GUEST_OFFSET(Local_005122a8_ea_8, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_005122a8_ea_8, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_005122a8_ea_8, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_005122a8_ea_8, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_005122a8_ea_8, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_005122a8_ea_8, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_005122a8_ea_8, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_005122a8_ea_8, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Local_005122a8_ea_8, word_24, 0x24);  // (from the original)

struct __attribute__((packed)) Local_005122a8_ea_9 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u8 unknown_20[0x4];  // (not used here)
    u32 word_24;
};
GUEST_OFFSET(Local_005122a8_ea_9, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_005122a8_ea_9, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_005122a8_ea_9, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_005122a8_ea_9, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_005122a8_ea_9, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_005122a8_ea_9, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_005122a8_ea_9, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_005122a8_ea_9, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Local_005122a8_ea_9, word_24, 0x24);  // (from the original)

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)
inline constexpr guest::Function<0x00301444, u32(u32, u32, u32, u32)> call_00301444;  // (from the original)
inline constexpr guest::Function<0x0041f11c, u32(u32, u32, u32, u32)> call_0041f11c;  // (from the original)
inline constexpr guest::Function<0x0041f184, u32(u32, u32, u32, u32)> call_0041f184;  // (from the original)
inline constexpr guest::Function<0x0041fc80, u32(u32, u32, u32, u32)> call_0041fc80;  // (from the original)
inline constexpr guest::Function<0x0041fd0c, u32(u32)> call_0041fd0c;  // (from the original)
inline constexpr guest::Function<0x0044c1ec, u32(u32, u32, u32, u32)> call_0044c1ec;  // (from the original)
inline constexpr guest::Function<0x0051139c, u32(u32, u32, u32, u32)> call_0051139c;  // (from the original)
inline constexpr guest::Function<0x0051207c, u32(u32, u32, u32, u32)> call_0051207c;  // (from the original)
inline constexpr guest::Function<0x005124b8, u32(u32, u32, u32, u32)> call_005124b8;  // (from the original)
inline constexpr guest::Function<0x0072f038, u32(u32, u32, u32, u32)> call_0072f038;  // (from the original)
inline constexpr guest::Function<0x0072f26c, u32(u32, u32, u32, u32)> call_0072f26c;  // (from the original)
inline constexpr guest::Function<0x0072f300, u32(u32, u32, u32, u32)> call_0072f300;  // (from the original)

u32 f_005122a8(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x458);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r12 = guest::cpu()->r[12];
    u32 r14 = guest::cpu()->r[14];
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_2 = 0;
    u32 r2_5 = 0;
    u32 r3_4 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_3 = 0;
    u32 r2_6 = 0;
    u32 r3_5 = 0;
    u32 r5_1 = 0;
    u32 r2_7 = 0;
    u32 r3_6 = 0;
    u32 r3_7 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    u32 r0_10 = 0;
    u32 r1_5 = 0;
    u32 r2_9 = 0;
    u32 r3_9 = 0;
    u32 r0_11 = 0;
    gptr<Local_005122a8_ea_8> ea_8 = gptr<Local_005122a8_ea_8>(0u);
    u32 r4_1 = 0;
    u32 r5_2 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 r8_1 = 0;
    u32 r9_1 = 0;
    u32 r10_1 = 0;
    u32 r11_1 = 0;
    u32 r0_12 = 0;
    gptr<Local_005122a8_ea_1> ea_1 = gptr<Local_005122a8_ea_1>(frame.at(0x420).addr());  // (from the original)
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r3;
    ea_1->word_10 = r4;
    ea_1->word_14 = r5;
    ea_1->word_18 = r6;
    ea_1->word_1c = r7;
    ea_1->word_20 = r8;
    ea_1->word_24 = r9;
    ea_1->word_28 = r10;
    ea_1->word_2c = r11;
    ea_1->word_30 = r12;
    ea_1->word_34 = r14;
    r4 = r0;
    r6 = r3;
    r8 = 0u;
    *frame.at<u8>(0x3f0) = 1;  // (from the original)
    *frame.at<u32>(0x3f4) = r8;  // (from the original)
    *frame.at<u8>(0x3f8) = u8(r8);  // (from the original)
    *frame.at<u32>(0x3fc) = 0x2710;  // (from the original)
    *frame.at<u32>(0x408) = r8;  // (from the original)
    gptr<Local_005122a8_ea_7> ea_7 = gptr<Local_005122a8_ea_7>(frame.at(0x400).addr());  // (from the original)
    ea_7->word_0 = 0x3e8;  // (from the original)
    ea_7->word_4 = ~0u;
    u32 r2_1 = frame.at(0x3f0).addr();  // (from the original)
    *frame.at<u32>(0x40c) = 0x3e8;  // (from the original)
    *frame.at<u8>(0x410) = u8(r8);  // (from the original)
    *frame.at<u32>(0x414) = r8;  // (from the original)
    u32 r0_1 = call_005124b8(r4, r2_1, r2_1, 0x2710u);  // (from the original)
    u32 r2_2 = guest::cpu()->r[2];
    u32 r3_1 = guest::cpu()->r[3];
    r10 = 0x974a64u;  // (from the original)
    *frame.at<u32>(4) = r0_1;
    if ((r0_1 & 0x80000000u) >> 0x1f) {  // (from the original)
        u32 r0_2 = *gptr<u32>(r10);
        if (r0_2 != 0) {
            call_0044c1ec(r0_2, guest::cpu()->r[1], r2_2, r3_1);
        }
        *gptr<u8>(r4 + 0x69u) = u8(r8);  // (from the original)
        *gptr<u8>(r4 + 0x68u) = u8(r8);  // (from the original)
        *frame.at<u32>(0) = r8;
        call_0051207c(r4, 3u, frame.at(4).addr(), 0u);
    } else {
        *frame.at<u32>(0x214) = r8;  // (from the original)
        r9 = frame.at(0x210).addr();  // (from the original)
        *frame.at<u32>(0x318) = r8;  // (from the original)
        *frame.at<u32>(0x3e8) = r8;  // (from the original)
        call_002f825c(frame.at(0x218).addr(), 0xffu, r2_2, r3_1);  // (from the original)
        u32 r0_4 = frame.at(0x31d).addr();  // (from the original)
        *frame.at<u32>(0) = r0_4;
        call_00301444(r0_4, 0xc8u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        u32 r3_3 = guest::cpu()->r[3];
        r7 = 0x974a58u;  // (from the original)
        r11 = 4u;
        *frame.at<u8>(0x210) = u8(r1 + 8u);  // (from the original)
        *frame.at<u8>(0x31c) = 0xb;  // (from the original)
        *frame.at<u8>(0x211) = u8(r11);  // (from the original)
        if (r1 == 0) {
            goto L_51245c;
        }
        r0_5 = *gptr<u32>(r7);
        r0 = call_0072f26c(r0_5, 0x198eu, 0u, r3_3);  // (from the original)
        r3 = guest::cpu()->r[3];
L_5123ac:;
        *frame.at<u32>(0x214) = r0;  // (from the original)
        r0_6 = r9 + 8u;
        call_002f8574(r0_6, 0x87be2fu, 0x21u, r3);  // (from the original)
        r1_2 = guest::cpu()->r[1];
        r2_5 = guest::cpu()->r[2];
        r3_4 = guest::cpu()->r[3];
        *frame.at<u32>(0x318) = 0x21;  // (from the original)
        r0_7 = *gptr<u32>(r7);
        r0_8 = call_0072f300(r0_7, r1_2, r2_5, r3_4);
        r1_3 = guest::cpu()->r[1];
        r2_6 = guest::cpu()->r[2];
        r3_5 = guest::cpu()->r[3];
        if (r0_8 >= r6) {
            call_002f8574(*frame.at<u32>(0), *frame.at<u32>(0x428), r6, r3_5);  // (from the original)
            r1_3 = guest::cpu()->r[1];
            r2_6 = guest::cpu()->r[2];
            r3_5 = guest::cpu()->r[3];
            *frame.at<u32>(0x3e8) = r6;  // (from the original)
        }
        r5_1 = frame.at(8).addr();
        call_0041f184(r5_1, r1_3, r2_6, r3_5);
        r2_7 = guest::cpu()->r[2];
        r3_6 = guest::cpu()->r[3];
        call_0041f11c(r5_1, r9, r2_7, r3_6);
        r3_7 = guest::cpu()->r[3];
        *frame.at<u16>(0xe) = u16(r11);  // (from the original)
        call_0041fc80(r5_1, 0x87be50u, 0x14u, r3_7);  // (from the original)
        r2_8 = guest::cpu()->r[2];
        r3_8 = guest::cpu()->r[3];
        r0_10 = call_0051139c(r4, r5_1, r2_8, r3_8);
        r1_5 = guest::cpu()->r[1];
        r2_9 = guest::cpu()->r[2];
        r3_9 = guest::cpu()->r[3];
        if (r0_10 == 0) {
            goto L_512474;
        }
        *gptr<u8>(r4 + 0x6au) = 1;  // (from the original)
        r0_11 = *gptr<u32>(r7);
        call_0072f038(r0_11, r1_5, r2_9, r3_9);
        call_0041fd0c(r0_11);
        ea_8 = gptr<Local_005122a8_ea_8>(frame.at(0x430).addr());  // (from the original)
        r4_1 = ea_8->word_0;
        r5_2 = ea_8->word_4;
        r6_1 = ea_8->word_8;
        r7_1 = ea_8->word_c;
        r8_1 = ea_8->word_10;
        r9_1 = ea_8->word_14;
        r10_1 = ea_8->word_18;
        r11_1 = ea_8->word_1c;
        guest::cpu()->r[4] = r4_1;
        guest::cpu()->r[5] = r5_2;
        guest::cpu()->r[6] = r6_1;
        guest::cpu()->r[7] = r7_1;
        guest::cpu()->r[8] = r8_1;
        guest::cpu()->r[9] = r9_1;
        guest::cpu()->r[10] = r10_1;
        guest::cpu()->r[11] = r11_1;
        return 0u;
L_51245c:;
        r0_12 = *gptr<u32>(r7);
        r0 = call_0072f26c(r0_12, 0x198du, 0u, r3_3);  // (from the original)
        r3 = guest::cpu()->r[3];
        guest::preempt();
        goto L_5123ac;
L_512474:;
        u32 r0_13 = *gptr<u32>(r10);
        if (r0_13 != 0) {
            call_0044c1ec(r0_13, r1_5, r2_9, r3_9);
        }
        *gptr<u8>(r4 + 0x69u) = u8(r8);  // (from the original)
        *gptr<u8>(r4 + 0x68u) = u8(r8);  // (from the original)
        call_0041fd0c(r0_13);
    }
    gptr<Local_005122a8_ea_9> ea_9 = gptr<Local_005122a8_ea_9>(frame.at(0x430).addr());  // (from the original)
    u32 r4_2 = ea_9->word_0;
    u32 r5_3 = ea_9->word_4;
    u32 r6_2 = ea_9->word_8;
    u32 r7_2 = ea_9->word_c;
    u32 r8_2 = ea_9->word_10;
    u32 r9_2 = ea_9->word_14;
    u32 r10_2 = ea_9->word_18;
    u32 r11_2 = ea_9->word_1c;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_3;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[8] = r8_2;
    guest::cpu()->r[9] = r9_2;
    guest::cpu()->r[10] = r10_2;
    guest::cpu()->r[11] = r11_2;
    return 0x80000006u;  // (from the original)
}

}  // namespace d_005122a8
GUEST_EXPORT(0x005122a8, d_005122a8::f_005122a8);

// f_005124b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005124b8 {

struct __attribute__((packed)) Object_005124b8_0 {
    u8 unknown_0[0x69];  // (not used here)
    u8 byte_69;
    u8 unknown_6a[0x2];  // (not used here)
    u32 word_6c;
    u32 word_70;
    u32 word_74;
    u32 word_78;
    u32 word_7c;
    u32 word_80;
    u32 word_84;
    u32 word_88;
};
GUEST_OFFSET(Object_005124b8_0, byte_69, 0x69);  // (from the original)
GUEST_OFFSET(Object_005124b8_0, word_6c, 0x6c);  // (from the original)
GUEST_OFFSET(Object_005124b8_0, word_70, 0x70);  // (from the original)
GUEST_OFFSET(Object_005124b8_0, word_74, 0x74);  // (from the original)
GUEST_OFFSET(Object_005124b8_0, word_78, 0x78);  // (from the original)
GUEST_OFFSET(Object_005124b8_0, word_7c, 0x7c);  // (from the original)
GUEST_OFFSET(Object_005124b8_0, word_80, 0x80);  // (from the original)
GUEST_OFFSET(Object_005124b8_0, word_84, 0x84);  // (from the original)
GUEST_OFFSET(Object_005124b8_0, word_88, 0x88);  // (from the original)

struct __attribute__((packed)) Object_005124b8_1 {
    u8 byte_0;
    u8 unknown_1[0x3];  // (not used here)
    u32 word_4;
    u8 unknown_8[0x4];  // (not used here)
    u32 word_c;
    u32 word_10;
    u8 unknown_14[0x10];  // (not used here)
    u32 word_24;
};
GUEST_OFFSET(Object_005124b8_1, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005124b8_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005124b8_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_005124b8_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_005124b8_1, word_24, 0x24);  // (from the original)

struct __attribute__((packed)) Local_005124b8_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_005124b8_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_005124b8_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_005124b8_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_005124b8_ea_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_005124b8_ea_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_005124b8_ea_1, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_005124b8_ea_1, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_005124b8_ea_1, word_1c, 0x1c);  // (from the original)

inline guest::global<u32, 0x00974a64> global_00974a64;  // (from the original)
inline constexpr guest::Function<0x003081b4, u32(u32, u32, u32, u32)> call_003081b4;  // (from the original)
inline constexpr guest::Function<0x0044c5e8, u32(u32, u32, u32, u32)> call_0044c5e8;  // (from the original)

u32 f_005124b8(gptr<Object_005124b8_0> arg0, gptr<Object_005124b8_1> arg1, float S0, float S1) {
    guest::StackFrame frame(0x4c);  // the original's stack frame
    u32 r1 = arg1.addr();
    u32 r0_1 = 0;
    if (u32(arg0->byte_69) != 0) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    float S0_1 = std::bit_cast<float>(arg0->word_6c);
    float S1_1 = std::bit_cast<float>(arg0->word_70);
    float S2_1 = std::bit_cast<float>(arg0->word_74);
    float S3_1 = std::bit_cast<float>(arg0->word_78);
    float S4_1 = std::bit_cast<float>(arg0->word_7c);
    float S5_1 = std::bit_cast<float>(arg0->word_80);
    float S6_1 = std::bit_cast<float>(arg0->word_84);
    float S7_1 = std::bit_cast<float>(arg0->word_88);
    u32 r7_1 = frame.at(0).addr();
    gptr<Local_005124b8_ea_1> ea_1 = gptr<Local_005124b8_ea_1>(frame.at(0x28).addr());  // (from the original)
    ea_1->word_0 = std::bit_cast<u32>(S0_1);
    ea_1->word_4 = std::bit_cast<u32>(S1_1);
    ea_1->word_8 = std::bit_cast<u32>(S2_1);
    ea_1->word_c = std::bit_cast<u32>(S3_1);
    ea_1->word_10 = std::bit_cast<u32>(S4_1);
    ea_1->word_14 = std::bit_cast<u32>(S5_1);
    ea_1->word_18 = std::bit_cast<u32>(S6_1);
    ea_1->word_1c = std::bit_cast<u32>(S7_1);
    arg1->word_24 = frame.at(0x28).addr();  // (from the original)
    arg1->byte_0 = 0;
    arg1->word_c = 0x7530;  // (from the original)
    arg1->word_10 = 0x7d0;  // (from the original)
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    guest::cpu()->s[3] = S3_1;
    guest::cpu()->s[4] = S4_1;
    guest::cpu()->s[5] = S5_1;
    guest::cpu()->s[6] = S6_1;
    guest::cpu()->s[7] = S7_1;
    call_003081b4(r7_1, 0x512550u, 0x7530u, 0x7d0u);  // (from the original)
    u32 r2_1 = guest::cpu()->r[2];
    u32 r3_1 = guest::cpu()->r[3];
    *frame.at<u8>(0x22) = 4;  // (from the original)
    *frame.at<u8>(0x23) = 0;  // (from the original)
    arg1->word_4 = r7_1;
    u32 r0_2 = *global_00974a64;
    r0_1 = call_0044c5e8(r0_2, r1, r2_1, r3_1);
    r1 = r0_1 & 0x80000000u;  // (from the original)
    if (s32(r1) >= 0) {
        r1 = 1u;
        arg0->byte_69 = u8(r1);
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_005124b8
GUEST_EXPORT_FRAMED(0x005124b8, d_005124b8::f_005124b8, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00512940: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00512940 {

inline constexpr guest::Function<0x00510b68, u32(u32, u32, u32, u32)> call_00510b68;  // (from the original)

void f_00512940(u32 r0) {
    call_00510b68(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u8>(r0 + 0x6au) = 0;  // (from the original)
    return;
}

}  // namespace d_00512940
GUEST_EXPORT_FRAMED(0x00512940, d_00512940::f_00512940, 0x4010);  // pushes {r4, lr} first, as the original

// f_00512a98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00512a98 {

struct __attribute__((packed)) Local_00512a98_r3_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00512a98_r3_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00512a98_r3_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00512a98_r3_1, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x0044b700, u32(u32, u32, u32, u32)> call_0044b700;  // (from the original)
inline constexpr guest::Function<0x0044c1ac, u32(u32, u32, u32, u32)> call_0044c1ac;  // (from the original)
inline constexpr guest::Function<0x0044c1ec, u32(u32, u32, u32, u32)> call_0044c1ec;  // (from the original)
inline constexpr guest::Function<0x004ddc34, u32(u32, u32, u32, u32)> call_004ddc34;  // (from the original)
inline constexpr guest::Function<0x0051207c, u32(u32, u32, u32, u32)> call_0051207c;  // (from the original)
inline constexpr guest::Function<0x005124b8, u32(u32, u32, u32, u32)> call_005124b8;  // (from the original)
inline constexpr guest::Function<0x00733b7c, u32(u32, u32, u32, u32)> call_00733b7c;  // (from the original)
inline constexpr guest::Function<0x00733bf0, u32(u32, u32, u32, u32)> call_00733bf0;  // (from the original)

u32 f_00512a98(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x34);  // the original's stack frame
    u32 r3 = 0;
    u32 r2_2 = 0;
    u32 r0_4 = 0;
    u32 r2_3 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 zf_1 = 0;
    u32 r2_5 = 0;
    u32 r4 = r0;
    u32 r8 = 0u;
    u32 r9 = 1u;
    gptr<Local_00512a98_r3_1> r3_1 = gptr<Local_00512a98_r3_1>(frame.at(0x18).addr());  // (from the original)
    *frame.at<u32>(4) = 0xe7e3ffff;  // (from the original)
    *frame.at<u32>(0x14) = 0x2710;  // (from the original)
    u32 r2_1 = ~0u;
    *frame.at<u8>(8) = u8(r9);
    *frame.at<u32>(0xc) = r8;  // (from the original)
    *frame.at<u8>(0x10) = u8(r8);  // (from the original)
    r3_1->word_0 = 0x3e8;  // (from the original)
    r3_1->word_4 = r2_1;
    r3_1->word_8 = r8;
    *frame.at<u32>(0x24) = 0x3e8;  // (from the original)
    *frame.at<u8>(0x28) = u8(r8);  // (from the original)
    *frame.at<u32>(0x2c) = r8;  // (from the original)
    u32 r0_1 = call_005124b8(r4, frame.at(8).addr(), r2_1, r3_1.addr());
    u32 r7 = 0x974a64u;  // (from the original)
    *frame.at<u32>(4) = r0_1;
    if (!((r0_1 & 0x80000000u) >> 0x1f)) {  // (from the original)
        goto L_512b40;
    }
    r2_2 = frame.at(4).addr();
    *frame.at<u32>(0) = r8;
    call_0051207c(r4, 3u, r2_2, 0u);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r7);
    if (r0 == 0) {
        *gptr<u8>(r4 + 0x69u) = u8(r8);  // (from the original)
        *gptr<u8>(r4 + 0x68u) = u8(r8);  // (from the original)
        return 0u;
    }
L_512b2c:;
    call_0044c1ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u8>(r4 + 0x69u) = u8(r8);  // (from the original)
    *gptr<u8>(r4 + 0x68u) = u8(r8);  // (from the original)
    return 0u;
L_512b40:;
    *gptr<u32>(*gptr<u32>(r7) + 0x60u) = 0x515344;  // (from the original)
    u32 r0_3 = call_0044b700(*gptr<u32>(r7), r1, r2, 1u);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *frame.at<u32>(4) = r0_3;
    if (!((r0_3 & 0x80000000u) >> 0x1f)) {  // (from the original)
        goto L_512b9c;
    }
    r0_4 = *gptr<u32>(r7);
    call_0044c1ac(r0_4, r1, r2, r3);
    r2_3 = frame.at(4).addr();
    *frame.at<u32>(0) = r8;
    call_0051207c(r4, 3u, r2_3, 0u);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r7);
    if (r0 == 0) {
        *gptr<u8>(r4 + 0x69u) = u8(r8);  // (from the original)
        *gptr<u8>(r4 + 0x68u) = u8(r8);  // (from the original)
        return 0u;
    }
    guest::preempt();
    goto L_512b2c;
L_512b9c:;
    u32 r0_6 = call_00733bf0(*gptr<u32>(r7), r1, r2, r3);
    u32 r1_2 = guest::cpu()->r[1];
    u32 r2_4 = guest::cpu()->r[2];
    u32 r3_2 = guest::cpu()->r[3];
    if (r0_6 == 0) {
        goto L_512c60;
    }
    r0_7 = *gptr<u32>(r7);
    r0_8 = call_00733b7c(r0_7, r1_2, r2_4, r3_2);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0_8 & 0x80000000u;  // (from the original)
    *frame.at<u32>(4) = r0_8;
    if (r1 >> 0x1f == (r1 & (r1 ^ r1)) >> 0x1f) {  // (from the original)
        *gptr<u8>(r4 + 0x6bu) = u8(r9);  // (from the original)
        guest::cpu()->r[1] = r1;
        return 1u;
    }
    r1 = 0xd8a148e5u;  // (from the original)
    zf_1 = r0_8 == r1;
    if (!zf_1) {
        r1 += 0xeu;  // (from the original)
        zf_1 = r0_8 == r1;
    }
    if (!zf_1) {
        r1 = 0xd8a148e0u;  // (from the original)
        zf_1 = r0_8 == r1;
    }
    if (zf_1) {
        goto L_512c40;
    }
    if (r0_8 != 0xe0e14826u && r0_8 != 0xe0a14827u && r0_8 != 0xd8a14825u && r0_8 != 0xd8a148f7u) {  // (from the original)
        r1 = 0xf8a148c4u;  // (from the original)
        u32 zf_2 = r0_8 == r1;
        if (!zf_2) {
            r1 = 0xd8a14903u;  // (from the original)
            zf_2 = r0_8 == r1;
        }
        if (!zf_2) {
            goto L_512c40;
        }
    }
    r2_5 = frame.at(4).addr();
    *frame.at<u32>(0) = r8;
    call_0051207c(r4, 3u, r2_5, 0u);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_512c40:;
    r0 = *gptr<u32>(r7);
    if (r0 != 0) {
        guest::preempt();
        goto L_512b2c;
    }
    *gptr<u8>(r4 + 0x69u) = u8(r8);  // (from the original)
    *gptr<u8>(r4 + 0x68u) = u8(r8);  // (from the original)
    guest::cpu()->r[1] = r1;
    return 0u;
L_512c60:;
    call_004ddc34(r0_6, r1_2, r2_4, r3_2);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::preempt();
    goto L_512b9c;
}

}  // namespace d_00512a98
GUEST_EXPORT_FRAMED(0x00512a98, d_00512a98::f_00512a98, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_00512d88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00512d88 {

struct __attribute__((packed)) Local_00512d88_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00512d88_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00512d88_ea_1, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x00974a58> global_00974a58;  // (from the original)
inline guest::global<u32, 0x00974a6c> global_00974a6c;  // (from the original)
inline constexpr guest::Function<0x00426900, u32(u32, u32, u32, u32)> call_00426900;  // (from the original)
inline constexpr guest::Function<0x0048a908, u32(u32, u32, u32)> call_0048a908;  // (from the original)
inline constexpr guest::Function<0x0072ef34, u32(u32, u32, u32)> call_0072ef34;  // (from the original)
inline constexpr guest::Function<0x007344dc, u32(u32, u32, u32, u32)> call_007344dc;  // (from the original)

void f_00512d88(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x48);  // the original's stack frame
    u32 r6_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 res_2 = 0;
    u32 r1_3 = 0;
    u32 r0_5 = 0;
    u32 res_3 = 0;
    gptr<Local_00512d88_ea_1> ea_1 = gptr<Local_00512d88_ea_1>(0u);
    u32 r1_4 = 0;
    u32 r5_1 = *global_00974a6c;
    if (r5_1 != 0) {
        call_00426900(frame.at(0x28).addr(), r1, r2, r3);  // (from the original)
        u32 r0_2 = call_007344dc(r5_1, frame.at(0x28).addr(), r1, r2);  // (from the original)
        r1 = guest::cpu()->r[1];
        if ((r0_2 & 0x80000000u) >> 0x1f) {  // (from the original)
            goto L_512e3c;
        }
        r6_1 = frame.at(0x40).addr();  // (from the original)
        r0_3 = *global_00974a58;
        if (r0_3 == 0) {
            goto L_512e3c;
        }
        r1_2 = frame.at(0).addr();
        *frame.at<u8>(0) = 0;
        r0_4 = call_0072ef34(r0_3, r1_2, frame.at(0x28).addr());  // (from the original)
        r1 = guest::cpu()->r[1];
        res_2 = r0_4 & 0x80000000u;  // (from the original)
        if (res_2 >> 0x1f) {  // (from the original)
            goto L_512e3c;
        }
        r1_3 = frame.at(2).addr();
        r0_5 = call_0048a908(r6_1, r1_3, 1u);
        r1 = guest::cpu()->r[1];
        res_3 = r0_5 & 0x80000000u;  // (from the original)
        if (res_3 >> 0x1f) {  // (from the original)
            goto L_512e3c;
        }
        ea_1 = gptr<Local_00512d88_ea_1>(frame.at(0x40).addr());  // (from the original)
        r1_4 = ea_1->word_4;
        *gptr<u32>(r3) = ea_1->word_0;
        *gptr<u32>(r3 + 4) = r1_4;
        *frame.at<u32>(0x28) = 0x900484;  // (from the original)
        guest::cpu()->r[1] = r1_4;
        return;
L_512e3c:;
        *frame.at<u32>(0x28) = 0x900484;  // (from the original)
    }
    *gptr<u32>(r3) = 0;
    *gptr<u32>(r3 + 4u) = 0;
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_00512d88
GUEST_EXPORT_FRAMED(0x00512d88, d_00512d88::f_00512d88, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00512e64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00512e64 {

inline constexpr guest::Function<0x003d0cbc, u32(u32, u32, u32, u32)> call_003d0cbc;  // (from the original)
inline constexpr guest::Function<0x003d0d6c, u32(u32, u32, u32, u32)> call_003d0d6c;  // (from the original)
inline constexpr guest::Function<0x005148a4, u32(u32, u32, u32, u32)> call_005148a4;  // (from the original)

u32 f_00512e64(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    u32 r0_2 = call_003d0cbc(frame.at(8).addr(), r1, r2, r3);
    *frame.at<u32>(0) = r0_2;
    u32 r0_3 = call_005148a4(r0, 0x66u, 0u, 0u);  // (from the original)
    call_003d0d6c(frame.at(8).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return r0_3;
}

}  // namespace d_00512e64
GUEST_EXPORT_FRAMED(0x00512e64, d_00512e64::f_00512e64, 0x4010);  // pushes {r4, lr} first, as the original

// f_005132e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005132e8 {

struct __attribute__((packed)) Local_005132e8_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005132e8_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_005132e8_ea_2, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_005132e8_r7_1 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u8 byte_c;
    u8 unknown_d[0x423];  // (not used here)
    u8 byte_430;
};
GUEST_OFFSET(Local_005132e8_r7_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_005132e8_r7_1, byte_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_005132e8_r7_1, byte_430, 0x430);  // (from the original)

inline guest::global<u8, 0x00953660> global_00953660;  // (from the original)
inline guest::global<u32, 0x00974a64> global_00974a64;  // (from the original)
inline guest::global<u32, 0x00974a6c> global_00974a6c;  // (from the original)
inline constexpr guest::Function<0x00403828, u32(u32, u32, u32)> call_00403828;  // (from the original)
inline constexpr guest::Function<0x00403838, u32(u32, u32, u32, u32)> call_00403838;  // (from the original)
inline constexpr guest::Function<0x0040aca8, u32(u32, u32, u32)> call_0040aca8;  // (from the original)
inline constexpr guest::Function<0x0040acc4, u32(u32, u32, u32)> call_0040acc4;  // (from the original)
inline constexpr guest::Function<0x0040ad14, u32(u32, u32, u32)> call_0040ad14;  // (from the original)
inline constexpr guest::Function<0x0040ad30, u32(u32, u32, u32)> call_0040ad30;  // (from the original)
inline constexpr guest::Function<0x0040ad4c, u32(u32, u32, u32)> call_0040ad4c;  // (from the original)
inline constexpr guest::Function<0x0040ad68, u32(u32, u32, u32)> call_0040ad68;  // (from the original)
inline constexpr guest::Function<0x0040ad88, u32(u32, u32, u32)> call_0040ad88;  // (from the original)
inline constexpr guest::Function<0x0040b620, u32(u32, u32, u32)> call_0040b620;  // (from the original)
inline constexpr guest::Function<0x0044badc, u32(u32, u32)> call_0044badc;  // (from the original)
inline constexpr guest::Function<0x0044f0f4, u32(u32, u32, u32)> call_0044f0f4;  // (from the original)
inline constexpr guest::Function<0x0045ee4c, u32(u32, u32, u32)> call_0045ee4c;  // (from the original)
inline constexpr guest::Function<0x00512a98, u32(u32, u32, u32)> call_00512a98;  // (from the original)
inline constexpr guest::Function<0x00733cf0, u32(u32, u32, u32)> call_00733cf0;  // (from the original)

u32 f_005132e8(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0xee0);  // the original's stack frame
    u32 r1_5 = 0;
    u32 r0_6 = 0;
    gptr<Local_005132e8_r7_1> r7_1 = gptr<Local_005132e8_r7_1>(frame.at(0).addr());
    call_00403838(r7_1.addr(), r1, r2, guest::cpu()->r[3]);
    *frame.at<u16>(4) = 1;
    *frame.at<u16>(6) = 4;
    r7_1->byte_430 = 0;
    call_00403828(r7_1.addr(), 3u, 8u);
    call_00403828(r7_1.addr(), 4u, 2u);
    call_00403828(r7_1.addr(), 5u, *gptr<u32>(r0 + 0x60u));  // (from the original)
    r7_1->word_8 = 0xbba;  // (from the original)
    r7_1->byte_c = 0;
    call_00403828(r7_1.addr(), 1u, r1);
    call_00403828(r7_1.addr(), 3u, 8u | u32(*global_00953660) << 5);
    call_00403828(r7_1.addr(), 2u, 1u);
    u32 r5_1 = frame.at(0x4c0).addr();  // (from the original)
    u32 r0_1 = call_0040b620(r5_1, guest::cpu()->r[1], guest::cpu()->r[2]);
    *gptr<u32>(r0_1) = 0x8ff6bc;  // (from the original)
    *gptr<u8>(r0_1 + 4u) = 2;
    call_0040aca8(r5_1, 0xbbau, 0x8ff6bcu);  // (from the original)
    call_0040ad88(r5_1, 1u, guest::cpu()->r[2]);
    call_0040ad68(r5_1, 4u, guest::cpu()->r[2]);
    call_0040ad4c(r5_1, 0u, guest::cpu()->r[2]);
    *gptr<u8>(r5_1 + 0x9d4u) = 0;  // (from the original)
    call_0040ad14(r5_1, 1u, guest::cpu()->r[2]);
    call_0040ad30(r5_1, 1u, guest::cpu()->r[2]);
    call_0040acc4(r5_1, 3u, 8u | u32(*global_00953660) << 5);
    call_0040acc4(r5_1, 4u, 2u);
    call_0040acc4(r5_1, 5u, *gptr<u32>(r0 + 0x60u));  // (from the original)
    call_0040acc4(r5_1, 2u, 1u);
    call_0040acc4(r5_1, 1u, r1);
    u32 r0_2 = call_00512a98(r0, r7_1.addr(), r5_1);
    u32 r1_2 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        u32 r0_3 = *global_00974a64;
        *gptr<u32>(r0 + 0x1cu) = *gptr<u32>(r0_3 + (u32(*gptr<u8>(r0_3 + 0xb5u)) << 2) + 0xc4u);  // (from the original)
        gptr<Local_005132e8_ea_2> ea_2 = gptr<Local_005132e8_ea_2>(r0_3 + 0x7cu);  // (from the original)
        u32 r0_5 = call_0044f0f4(*global_00974a6c, ea_2->word_0, ea_2->word_4);
        call_0045ee4c(r0_5, r0 + 0x20u, guest::cpu()->r[2]);  // (from the original)
        r1_5 = guest::cpu()->r[1];
        r0_6 = *gptr<u32>(r0 + 0x18u);  // (from the original)
        u32 zf_1 = r0_6 == 0;
        if (!zf_1) {
            r0_6 = *global_00974a64;
            zf_1 = r0_6 == 0;
        }
        if (zf_1) {
            goto L_5134fc;
        }
        r0_6 = call_00733cf0(r0_6, r1_5, guest::cpu()->r[2]);
        r1_5 = guest::cpu()->r[1];
        if (r0_6 == 0) {
            goto L_5134fc;
        }
        return 1u;
    }
    guest::cpu()->r[1] = r1_2;
    return 0u;
L_5134fc:;
    if (*global_00974a64 != 0) {
        call_0044badc(r0_6, 0x1f4u);  // (from the original)
        r1_5 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1_5;
    return 1u;
}

}  // namespace d_005132e8
GUEST_EXPORT_FRAMED(0x005132e8, d_005132e8::f_005132e8, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_00513e6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00513e6c {

inline guest::global<u32, 0x00974a58> global_00974a58;  // (from the original)
inline constexpr guest::Function<0x00415b1c, u32(u32, u32, u32, u32)> call_00415b1c;  // (from the original)

void f_00513e6c(u32 r0_unused, u32 r1, u32 r2) {
    if (r1 == 0 || r2 == 0) {
        return;
    }
    if (r2 > 0xb8u) {  // (from the original)
        r2 = 0xb8u;  // (from the original)
    }
    call_00415b1c(*global_00974a58, r1, r2, guest::cpu()->r[3]);
    return;
}

}  // namespace d_00513e6c
GUEST_EXPORT(0x00513e6c, d_00513e6c::f_00513e6c);

// f_00514264: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00514264 {

struct __attribute__((packed)) Local_00514264_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00514264_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00514264_ea_1, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x00974a64> global_00974a64;  // (from the original)
inline guest::global<u32, 0x00974a6c> global_00974a6c;  // (from the original)
inline constexpr guest::Function<0x0044badc, u32(u32, u32)> call_0044badc;  // (from the original)
inline constexpr guest::Function<0x0044f0f4, u32(u32, u32, u32, u32)> call_0044f0f4;  // (from the original)
inline constexpr guest::Function<0x0045ee4c, u32(u32, u32, u32, u32)> call_0045ee4c;  // (from the original)
inline constexpr guest::Function<0x00510738, u32(u32, u32, u32, u32)> call_00510738;  // (from the original)
inline constexpr guest::Function<0x0051207c, u32(u32, u32, u32, u32)> call_0051207c;  // (from the original)

u32 f_00514264(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r0_1 = call_00510738(r0, r1, r2, r3);
    *frame.at<u32>(4) = r0_1;
    if (!((r0_1 & 0x80000000u) >> 0x1f)) {  // (from the original)
        gptr<Local_00514264_ea_1> ea_1 = gptr<Local_00514264_ea_1>(*global_00974a64 + 0x7cu);  // (from the original)
        u32 r0_3 = call_0044f0f4(*global_00974a6c, ea_1->word_0, ea_1->word_4, guest::cpu()->r[3]);
        call_0045ee4c(r0_3, r0 + 0x20u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        u32 r0_4 = *global_00974a64;
        if (r0_4 != 0) {
            call_0044badc(r0_4, 0x1f4u);  // (from the original)
        }
        return 0u;
    }
    if (r0_1 == 0xd8a148f4u || r0_1 == 0xd8a148e5u) {  // (from the original)
        return 0x80000002u;  // (from the original)
    }
    if (r0_1 == 0xd8a148f3u || r0_1 == (0xd8a148f3u | 0xd8a148f3u >> 0x18)) {  // (from the original)
        return 0x80000001u;  // (from the original)
    }
    if (r0_1 == 0xd8a148e0u) {  // (from the original)
        return 0x80000003u;  // (from the original)
    }
    *frame.at<u32>(0) = 0;
    call_0051207c(r0, 3u, frame.at(4).addr(), 0u);
    return 0x80000006u;  // (from the original)
}

}  // namespace d_00514264
GUEST_EXPORT_FRAMED(0x00514264, d_00514264::f_00514264, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0051433c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051433c {

struct __attribute__((packed)) Local_0051433c_r6_1 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u8 byte_c;
    u8 unknown_d[0x423];  // (not used here)
    u8 byte_430;
};
GUEST_OFFSET(Local_0051433c_r6_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0051433c_r6_1, byte_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_0051433c_r6_1, byte_430, 0x430);  // (from the original)

inline guest::global<u8, 0x00953660> global_00953660;  // (from the original)
inline constexpr guest::Function<0x00403828, u32(u32, u32, u32)> call_00403828;  // (from the original)
inline constexpr guest::Function<0x00403838, u32(u32, u32, u32, u32)> call_00403838;  // (from the original)
inline constexpr guest::Function<0x00514acc, u32(u32, u32, u32)> call_00514acc;  // (from the original)

u32 f_0051433c(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x4c0);  // the original's stack frame
    gptr<Local_0051433c_r6_1> r6_1 = gptr<Local_0051433c_r6_1>(frame.at(0).addr());
    call_00403838(r6_1.addr(), r1, r2, guest::cpu()->r[3]);
    *frame.at<u16>(4) = 1;
    *frame.at<u16>(6) = 4;
    r6_1->byte_430 = 0;
    call_00403828(r6_1.addr(), 3u, 8u);
    call_00403828(r6_1.addr(), 4u, 2u);
    call_00403828(r6_1.addr(), 5u, *gptr<u32>(r0 + 0x60u));  // (from the original)
    r6_1->word_8 = 0xbba;  // (from the original)
    r6_1->byte_c = 0;
    call_00403828(r6_1.addr(), 1u, r1);
    call_00403828(r6_1.addr(), 3u, 8u | u32(*global_00953660) << 5);
    call_00403828(r6_1.addr(), 2u, 2u);
    u32 r0_1 = call_00514acc(r0, r6_1.addr(), guest::cpu()->r[2]);
    if (r0_1 != 0) {
        return 1u;
    }
    return 0u;
}

}  // namespace d_0051433c
GUEST_EXPORT_FRAMED(0x0051433c, d_0051433c::f_0051433c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00514524: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00514524 {

struct __attribute__((packed)) Object_00514524_0 {
    u8 unknown_0[0x1c];  // (not used here)
    u32 word_1c;
};
GUEST_OFFSET(Object_00514524_0, word_1c, 0x1c);  // (from the original)

inline constexpr guest::Function<0x00400fd8, u32(u32, u32, u32, u32)> call_00400fd8;  // (from the original)
inline constexpr guest::Function<0x004394b8, u32(u32)> call_004394b8;  // (from the original)
inline constexpr guest::Function<0x00514264, u32(u32, u32)> call_00514264;  // (from the original)

u32 f_00514524(gptr<Object_00514524_0> arg0, u32 r1) {
    guest::StackFrame frame(0x74);  // the original's stack frame
    u32 r0 = arg0.addr();
    arg0->word_1c = r1;
    call_00400fd8(frame.at(0).addr(), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *frame.at<u32>(0x6c) = r1;  // (from the original)
    u32 r0_2 = call_00514264(r0, frame.at(0).addr());
    call_004394b8(r0_2);
    return r0_2;
}

}  // namespace d_00514524
GUEST_EXPORT_FRAMED(0x00514524, d_00514524::f_00514524, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00514acc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00514acc {

struct __attribute__((packed)) Local_00514acc_ea_5 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00514acc_ea_5, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00514acc_ea_5, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00514acc_ea_5, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_00514acc_ea_7 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00514acc_ea_7, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00514acc_ea_7, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x00974a64> global_00974a64;  // (from the original)
inline guest::global<u32, 0x00974a6c> global_00974a6c;  // (from the original)
inline constexpr guest::Function<0x0044c1ec, u32(u32, u32, u32, u32)> call_0044c1ec;  // (from the original)
inline constexpr guest::Function<0x0044f0f4, u32(u32, u32, u32, u32)> call_0044f0f4;  // (from the original)
inline constexpr guest::Function<0x0045ee4c, u32(u32, u32, u32, u32)> call_0045ee4c;  // (from the original)
inline constexpr guest::Function<0x0051139c, u32(u32, u32, u32, u32)> call_0051139c;  // (from the original)
inline constexpr guest::Function<0x0051207c, u32(u32, u32, u32, u32)> call_0051207c;  // (from the original)
inline constexpr guest::Function<0x005124b8, u32(u32, u32, u32, u32)> call_005124b8;  // (from the original)

u32 f_00514acc(u32 r0, u32 r1) {
    guest::StackFrame frame(0x34);  // the original's stack frame
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r2_2 = 0;
    u32 r6 = 0u;
    *frame.at<u8>(8) = 1;
    u32 r4 = r0;
    u32 r3_1 = ~0u;
    *frame.at<u32>(0xc) = r6;  // (from the original)
    *frame.at<u8>(0x10) = u8(r6);  // (from the original)
    *frame.at<u32>(0x14) = 0x2710;  // (from the original)
    gptr<Local_00514acc_ea_5> ea_5 = gptr<Local_00514acc_ea_5>(frame.at(0x18).addr());  // (from the original)
    ea_5->word_0 = 0x3e8;  // (from the original)
    ea_5->word_4 = r3_1;
    ea_5->word_8 = r6;
    *frame.at<u32>(0x24) = 0x3e8;  // (from the original)
    *frame.at<u8>(0x28) = u8(r6);  // (from the original)
    *frame.at<u32>(0x2c) = r6;  // (from the original)
    u32 r0_1 = call_005124b8(r4, frame.at(8).addr(), 0x2710u, r3_1);  // (from the original)
    u32 r2_1 = guest::cpu()->r[2];
    u32 r3_2 = guest::cpu()->r[3];
    *frame.at<u32>(4) = r0_1;
    if (!((r0_1 & 0x80000000u) >> 0x1f)) {  // (from the original)
        goto L_514b68;
    }
    r2_2 = frame.at(4).addr();
    *frame.at<u32>(0) = r6;
    call_0051207c(r4, 3u, r2_2, 0u);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *global_00974a64;
    if (r0 == 0) {
        *gptr<u8>(r4 + 0x69u) = u8(r6);  // (from the original)
        *gptr<u8>(r4 + 0x68u) = u8(r6);  // (from the original)
        return 0u;
    }
L_514b54:;
    call_0044c1ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u8>(r4 + 0x69u) = u8(r6);  // (from the original)
    *gptr<u8>(r4 + 0x68u) = u8(r6);  // (from the original)
    return 0u;
L_514b68:;
    u32 r0_2 = call_0051139c(r4, r1, r2_1, r3_2);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 zf_1 = r0_2 == 0;
    r0 = *global_00974a64;
    if (!zf_1) {
        *gptr<u32>(r4 + 0x1cu) = *gptr<u32>(r0 + (u32(*gptr<u8>(r0 + 0xb5u)) << 2) + 0xc4u);  // (from the original)
        gptr<Local_00514acc_ea_7> ea_7 = gptr<Local_00514acc_ea_7>(r0 + 0x7cu);  // (from the original)
        u32 r0_4 = call_0044f0f4(*global_00974a6c, ea_7->word_0, ea_7->word_4, r3);
        call_0045ee4c(r0_4, r4 + 0x20u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        return 1u;
    }
    if (r0 != 0) {
        guest::preempt();
        goto L_514b54;
    }
    *gptr<u8>(r4 + 0x69u) = u8(r6);  // (from the original)
    *gptr<u8>(r4 + 0x68u) = u8(r6);  // (from the original)
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_00514acc
GUEST_EXPORT_FRAMED(0x00514acc, d_00514acc::f_00514acc, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00514c3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00514c3c {

inline constexpr guest::Function<0x0044b0fc, u32(u32, u32, u32, u32)> call_0044b0fc;  // (from the original)
inline constexpr guest::Function<0x004ddc34, u32(u32, u32, u32, u32)> call_004ddc34;  // (from the original)
inline constexpr guest::Function<0x0051207c, u32(u32, u32, u32, u32)> call_0051207c;  // (from the original)
inline constexpr guest::Function<0x00733b14, u32(u32, u32, u32, u32)> call_00733b14;  // (from the original)
inline constexpr guest::Function<0x00733b8c, u32(u32, u32, u32, u32)> call_00733b8c;  // (from the original)

u32 f_00514c3c(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r2_2 = 0;
    u32 r4 = r0;
    u32 r5 = 0x974a64u;  // (from the original)
    u32 r0_2 = call_0044b0fc(*gptr<u32>(r5), 2u, 1u, r3);
    u32 r1 = guest::cpu()->r[1];
    u32 r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *frame.at<u32>(4) = r0_2;
    if ((r0_2 & 0x80000000u) >> 0x1f) {  // (from the original)
        goto L_514c98;
    }
L_514c68:;
    r0_3 = *gptr<u32>(r5);
    r0_4 = call_00733b8c(r0_3, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_4 == 0) {
        goto L_514cc0;
    }
    r0_5 = *gptr<u32>(r5);
    r0_6 = call_00733b14(r0_5, r1_1, r2_1, r3_1);
    *frame.at<u32>(4) = r0_6;
    if (s32(r0_6) >= 0) {
        return 1u;
    }
L_514c98:;
    r2_2 = frame.at(4).addr();
    *frame.at<u32>(0) = 0;
    call_0051207c(r4, 3u, r2_2, 0u);
    return 0u;
L_514cc0:;
    call_004ddc34(r0_4, r1_1, r2_1, r3_1);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::preempt();
    goto L_514c68;
}

}  // namespace d_00514c3c
GUEST_EXPORT_FRAMED(0x00514c3c, d_00514c3c::f_00514c3c, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00515148: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00515148 {

struct __attribute__((packed)) Object_00515148_0 {
    u8 unknown_0[0x18];  // (not used here)
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u8 unknown_24[0x46];  // (not used here)
    u8 byte_6a;
    u8 unknown_6b[0x23];  // (not used here)
    u16 half_8e;
};
GUEST_OFFSET(Object_00515148_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_00515148_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_00515148_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_00515148_0, byte_6a, 0x6a);  // (from the original)
GUEST_OFFSET(Object_00515148_0, half_8e, 0x8e);  // (from the original)

inline guest::global<u32, 0x00974a64> global_00974a64;  // (from the original)
inline constexpr guest::Function<0x003d0cbc, u32(u32, u32, u32, u32)> call_003d0cbc;  // (from the original)
inline constexpr guest::Function<0x003d0d6c, u32(u32, u32, u32, u32)> call_003d0d6c;  // (from the original)
inline constexpr guest::Function<0x00510b68, u32(u32, u32, u32, u32)> call_00510b68;  // (from the original)
inline constexpr guest::Function<0x005148a4, u32(u32, u32, u32, u32)> call_005148a4;  // (from the original)
inline constexpr guest::Function<0x00733cf0, u32(u32, u32, u32, u32)> call_00733cf0;  // (from the original)

void f_00515148(gptr<Object_00515148_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x14);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    u32 r0_5 = 0;
    if (arg0->word_18 == 0) {
        goto L_5151ac;
    }
    r0_1 = *global_00974a64;
    if (r0_1 == 0) {
        goto L_5151ac;
    }
    r0_2 = call_00733cf0(r0_1, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        goto L_5151ac;
    }
    r0_3 = frame.at(8).addr();
    r0_4 = call_003d0cbc(r0_3, 0x5151d4u, r2, r3);  // (from the original)
    *frame.at<u32>(0) = r0_4;
    r2_1 = arg0->word_1c;
    call_005148a4(r0, 0x65u, r2_1, 0x8020000u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_5 = frame.at(8).addr();
    call_003d0d6c(r0_5, r1_1, r2_2, r3_1);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_5151ac:;
    call_00510b68(r0, r1, r2, r3);
    arg0->word_20 = 0;
    arg0->byte_6a = 0;
    arg0->half_8e = 0;
    *gptr<u16>(0x28eu + r0) = 0;  // (from the original)
    return;
}

}  // namespace d_00515148
GUEST_EXPORT_FRAMED(0x00515148, d_00515148::f_00515148, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_005152d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005152d4 {

inline guest::global<u32, 0x00974a64> global_00974a64;  // (from the original)
inline constexpr guest::Function<0x0044badc, u32(u32, u32)> call_0044badc;  // (from the original)

void f_005152d4(u32 r0_unused, u32 r1) {
    u32 r0 = 0;
    if (*global_00974a64 == 0) {
        return;
    }
    call_0044badc(r0, 0x7d0u);
    return;  // (from the original)
}

}  // namespace d_005152d4
GUEST_EXPORT(0x005152d4, d_005152d4::f_005152d4);

// f_005152f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005152f4 {

inline constexpr guest::Function<0x003d0cbc, u32(u32, u32, u32, u32)> call_003d0cbc;  // (from the original)
inline constexpr guest::Function<0x003d0d6c, u32(u32, u32, u32, u32)> call_003d0d6c;  // (from the original)
inline constexpr guest::Function<0x005148a4, u32(u32, u32, u32, u32)> call_005148a4;  // (from the original)

u32 f_005152f4(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_2 = call_003d0cbc(frame.at(8).addr(), r3, r2, r3);
    *frame.at<u32>(0) = r0_2;
    u32 r0_3 = call_005148a4(r0, 0x67u, r1, r2);  // (from the original)
    call_003d0d6c(frame.at(8).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return r0_3;
}

}  // namespace d_005152f4
GUEST_EXPORT_FRAMED(0x005152f4, d_005152f4::f_005152f4, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00515cdc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00515cdc {

inline guest::global<u32, 0x00974a14> global_00974a14;  // (from the original)
inline constexpr guest::Function<0x00135740, u32(u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32, u32)> call_00137e84;  // (from the original)
inline constexpr guest::Function<0x00426174, u32(u32)> call_00426174;  // (from the original)
inline constexpr guest::Function<0x0050f7a0, u32(u32, u32, u32, u32)> call_0050f7a0;  // (from the original)
inline constexpr guest::Function<0x005118d4, u32(u32)> call_005118d4;  // (from the original)

void f_00515cdc(u32 r0) {
    guest::cpu()->r[13] -= 8u;
    call_0050f7a0(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_005118d4(r0);
    u32 r0_1 = r0 + 0x290u;  // (from the original)
    call_00135740(r0_1);
    u32 r0_2 = *global_00974a14;
    if (r0_2 != 0) {
        call_00426174(r0_2);
    }
    guest::cpu()->r[13] += 8u;
    call_00137e84(r0_1, guest::cpu()->r[1]);
    return;
}

}  // namespace d_00515cdc
GUEST_EXPORT(0x00515cdc, d_00515cdc::f_00515cdc);

// f_005164c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005164c0 {

struct __attribute__((packed)) Object_005164c0_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 byte_c;
    u8 unknown_d[0x3];  // (not used here)
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u8 byte_28;
};
GUEST_OFFSET(Object_005164c0_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005164c0_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005164c0_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_005164c0_0, byte_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_005164c0_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_005164c0_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_005164c0_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_005164c0_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_005164c0_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_005164c0_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_005164c0_0, byte_28, 0x28);  // (from the original)

struct __attribute__((packed)) Local_005164c0_r0_3 {
    u8 unknown_0[0x30];  // (not used here)
    u32 word_30;
    u32 word_34;
    u32 word_38;
    u32 word_3c;
    u8 byte_40;
    u8 byte_41;
    u8 byte_42;
    u8 unknown_43[0x1];  // (not used here)
    u32 word_44;
    u32 word_48;
    u32 word_4c;
    u32 word_50;
    u32 word_54;
    u32 word_58;
    u32 word_5c;
    u32 word_60;
    u32 word_64;
    u8 byte_68;
    u8 byte_69;
    u8 byte_6a;
    u8 byte_6b;
};
GUEST_OFFSET(Local_005164c0_r0_3, word_30, 0x30);  // (from the original)
GUEST_OFFSET(Local_005164c0_r0_3, word_34, 0x34);  // (from the original)
GUEST_OFFSET(Local_005164c0_r0_3, word_38, 0x38);  // (from the original)
GUEST_OFFSET(Local_005164c0_r0_3, word_3c, 0x3c);  // (from the original)
GUEST_OFFSET(Local_005164c0_r0_3, byte_40, 0x40);  // (from the original)
GUEST_OFFSET(Local_005164c0_r0_3, byte_41, 0x41);  // (from the original)
GUEST_OFFSET(Local_005164c0_r0_3, byte_42, 0x42);  // (from the original)
GUEST_OFFSET(Local_005164c0_r0_3, word_44, 0x44);  // (from the original)
GUEST_OFFSET(Local_005164c0_r0_3, word_48, 0x48);  // (from the original)
GUEST_OFFSET(Local_005164c0_r0_3, word_4c, 0x4c);  // (from the original)
GUEST_OFFSET(Local_005164c0_r0_3, word_50, 0x50);  // (from the original)
GUEST_OFFSET(Local_005164c0_r0_3, word_54, 0x54);  // (from the original)
GUEST_OFFSET(Local_005164c0_r0_3, word_58, 0x58);  // (from the original)
GUEST_OFFSET(Local_005164c0_r0_3, word_5c, 0x5c);  // (from the original)
GUEST_OFFSET(Local_005164c0_r0_3, word_60, 0x60);  // (from the original)
GUEST_OFFSET(Local_005164c0_r0_3, word_64, 0x64);  // (from the original)
GUEST_OFFSET(Local_005164c0_r0_3, byte_68, 0x68);  // (from the original)
GUEST_OFFSET(Local_005164c0_r0_3, byte_69, 0x69);  // (from the original)
GUEST_OFFSET(Local_005164c0_r0_3, byte_6a, 0x6a);  // (from the original)
GUEST_OFFSET(Local_005164c0_r0_3, byte_6b, 0x6b);  // (from the original)

struct __attribute__((packed)) Local_005164c0_r0_6 {
    u32 word_0;
    u8 unknown_4[0x8a];  // (not used here)
    u16 half_8e;
};
GUEST_OFFSET(Local_005164c0_r0_6, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_005164c0_r0_6, half_8e, 0x8e);  // (from the original)

inline guest::global<u32, 0x00952c9c> global_00952c9c;  // (from the original)
inline guest::global<u32, 0x00953664> global_00953664;  // (from the original)
inline constexpr guest::Function<0x0012bfec, u32(u32, u32, u32)> call_0012bfec;  // (from the original)
inline constexpr guest::Function<0x003bd7f0, u32(u32, u32, u32, u32)> call_003bd7f0;  // (from the original)

u32 f_005164c0(gptr<Object_005164c0_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    arg0->word_0 = 0;
    arg0->word_4 = 0;
    arg0->word_8 = 0;
    arg0->byte_c = 0;
    arg0->word_10 = 0x903610;  // (from the original)
    arg0->word_14 = 0;
    arg0->word_18 = 0;
    arg0->word_1c = 0;
    arg0->word_20 = 0;
    arg0->word_24 = 0;
    arg0->byte_28 = 0;
    u32 r0_2 = call_003bd7f0(r0 + 0x2cu, r1, 0x903610u, guest::cpu()->r[3]);  // (from the original)
    *gptr<u32>(r0_2) = 0x9035fc;  // (from the original)
    u32 r1_1 = r0_2 + 0x1d4u;  // (from the original)
    gptr<Local_005164c0_r0_3> r0_3 = gptr<Local_005164c0_r0_3>(r0_2 - 0x2cu);  // (from the original)
    r0_3->word_30 = 0;
    r0_3->word_34 = 0;
    r0_3->word_38 = 0;
    r0_3->word_3c = 0;
    r0_3->byte_40 = 0;
    r0_3->byte_41 = 0;
    r0_3->byte_42 = 0;
    r0_3->word_44 = 0;
    r0_3->word_48 = 0;
    r0_3->word_4c = 0;
    r0_3->word_50 = 0;
    r0_3->word_54 = 0;
    r0_3->word_58 = 0;
    r0_3->word_5c = 0;
    r0_3->word_60 = 0;
    r0_3->word_64 = 0;
    r0_3->byte_68 = 0;
    r0_3->byte_69 = 0;
    r0_3->byte_6a = 0;
    r0_3->byte_6b = 0;
    *gptr<u16>(r1_1 + 0x8eu) = 0;  // (from the original)
    u32 r0_5 = call_0012bfec(r0_3.addr() + 0x290u, r1_1, guest::cpu()->r[2]);  // (from the original)
    gptr<Local_005164c0_r0_6> r0_6 = gptr<Local_005164c0_r0_6>(r0_5 - 0x290u);  // (from the original)
    *global_00953664 = r0_6.addr();
    u32 r1_2 = *global_00952c9c;
    r0_6->word_0 = r1_2;
    r0_6->half_8e = 0;
    guest::cpu()->r[1] = r1_2;
    return r0_6.addr();
}

}  // namespace d_005164c0
GUEST_EXPORT_FRAMED(0x005164c0, d_005164c0::f_005164c0, 0x4010);  // pushes {r4, lr} first, as the original

// f_0051659c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051659c {

struct __attribute__((packed)) Object_0051659c_0 {
    u8 unknown_0[0x2d0];  // (not used here)
    u8 byte_2d0;
};
GUEST_OFFSET(Object_0051659c_0, byte_2d0, 0x2d0);  // (from the original)

struct __attribute__((packed)) Local_0051659c_ea_7 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0051659c_ea_7, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0051659c_ea_7, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x0087bdbc> global_0087bdbc;  // (from the original)
inline guest::global<u32, 0x0087bdc0> global_0087bdc0;  // (from the original)
inline guest::global<u32, 0x00953658> global_00953658;  // (from the original)
inline constexpr guest::Function<0x0050e1d0, u32(u32, u32)> call_0050e1d0;  // (from the original)

u32 f_0051659c(gptr<Object_0051659c_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    if (u32(arg0->byte_2d0) != 0) {
        return 1u;
    }
    u32 r0_2 = call_0050e1d0(r0 + 0xcu, r1);  // (from the original)
    if (r0_2 == 0) {
        return r0_2;
    }
    *gptr<u32>(r0 + 0x54u) = 0x5168e0;  // (from the original)
    *gptr<u32>(r0 + 0x58u) = 0x516844;  // (from the original)
    *gptr<u32>(r0 + 0x5cu) = 0x516954;  // (from the original)
    *gptr<u32>(r0 + 0x60u) = 0x5167e8;  // (from the original)
    *gptr<u32>(r0 + 0x64u) = 0x516914;  // (from the original)
    *gptr<u32>(r0 + 0x68u) = 0x517a1c;  // (from the original)
    u32 r1_2 = *global_0087bdbc;
    u32 r2_1 = *global_0087bdc0;
    gptr<Local_0051659c_ea_7> ea_7 = gptr<Local_0051659c_ea_7>(r0 + 0x2c8u);  // (from the original)
    ea_7->word_0 = r1_2;
    ea_7->word_4 = r2_1;
    arg0->byte_2d0 = 1;
    *global_00953658 = 0;
    guest::cpu()->r[1] = 0x953658u;  // (from the original)
    return 1u;
}

}  // namespace d_0051659c
GUEST_EXPORT_FRAMED(0x0051659c, d_0051659c::f_0051659c, 0x4010);  // pushes {r4, lr} first, as the original

// f_005166a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005166a8 {

struct __attribute__((packed)) Object_005166a8_0 {
    u8 unknown_0[0x28];  // (not used here)
    u32 word_28;
    u8 unknown_2c[0x8];  // (not used here)
    u8 byte_34;
    u8 unknown_35[0x283];  // (not used here)
    u32 word_2b8;
    u8 byte_2bc;
    u8 unknown_2bd[0x13];  // (not used here)
    u8 byte_2d0;
    u8 unknown_2d1[0xb];  // (not used here)
    u32 word_2dc;
    u32 word_2e0;
    u8 unknown_2e4[0x4];  // (not used here)
    u32 word_2e8;
    u32 word_2ec;
    u32 word_2f0;
    u8 unknown_2f4[0x4];  // (not used here)
    u32 word_2f8;
    u32 word_2fc;
    u32 word_300;
    u8 unknown_304[0x4];  // (not used here)
    u32 word_308;
    u32 word_30c;
    u32 word_310;
    u8 unknown_314[0x4];  // (not used here)
    u32 word_318;
    u32 word_31c;
    u32 word_320;
    u8 unknown_324[0x4];  // (not used here)
    u8 byte_328;
};
GUEST_OFFSET(Object_005166a8_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_005166a8_0, byte_34, 0x34);  // (from the original)
GUEST_OFFSET(Object_005166a8_0, word_2b8, 0x2b8);  // (from the original)
GUEST_OFFSET(Object_005166a8_0, byte_2bc, 0x2bc);  // (from the original)
GUEST_OFFSET(Object_005166a8_0, byte_2d0, 0x2d0);  // (from the original)
GUEST_OFFSET(Object_005166a8_0, word_2dc, 0x2dc);  // (from the original)
GUEST_OFFSET(Object_005166a8_0, word_2e0, 0x2e0);  // (from the original)
GUEST_OFFSET(Object_005166a8_0, word_2e8, 0x2e8);  // (from the original)
GUEST_OFFSET(Object_005166a8_0, word_2ec, 0x2ec);  // (from the original)
GUEST_OFFSET(Object_005166a8_0, word_2f0, 0x2f0);  // (from the original)
GUEST_OFFSET(Object_005166a8_0, word_2f8, 0x2f8);  // (from the original)
GUEST_OFFSET(Object_005166a8_0, word_2fc, 0x2fc);  // (from the original)
GUEST_OFFSET(Object_005166a8_0, word_300, 0x300);  // (from the original)
GUEST_OFFSET(Object_005166a8_0, word_308, 0x308);  // (from the original)
GUEST_OFFSET(Object_005166a8_0, word_30c, 0x30c);  // (from the original)
GUEST_OFFSET(Object_005166a8_0, word_310, 0x310);  // (from the original)
GUEST_OFFSET(Object_005166a8_0, word_318, 0x318);  // (from the original)
GUEST_OFFSET(Object_005166a8_0, word_31c, 0x31c);  // (from the original)
GUEST_OFFSET(Object_005166a8_0, word_320, 0x320);  // (from the original)
GUEST_OFFSET(Object_005166a8_0, byte_328, 0x328);  // (from the original)

struct __attribute__((packed)) Object_005166a8_1 {
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
    u8 unknown_50[0x8];  // (not used here)
    u32 word_58;
    u32 word_5c;
    u8 byte_60;
    u8 byte_61;
};
GUEST_OFFSET(Object_005166a8_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005166a8_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005166a8_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_005166a8_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_005166a8_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_005166a8_1, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_005166a8_1, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_005166a8_1, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_005166a8_1, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_005166a8_1, word_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Object_005166a8_1, word_30, 0x30);  // (from the original)
GUEST_OFFSET(Object_005166a8_1, word_38, 0x38);  // (from the original)
GUEST_OFFSET(Object_005166a8_1, word_3c, 0x3c);  // (from the original)
GUEST_OFFSET(Object_005166a8_1, word_40, 0x40);  // (from the original)
GUEST_OFFSET(Object_005166a8_1, word_48, 0x48);  // (from the original)
GUEST_OFFSET(Object_005166a8_1, word_4c, 0x4c);  // (from the original)
GUEST_OFFSET(Object_005166a8_1, word_58, 0x58);  // (from the original)
GUEST_OFFSET(Object_005166a8_1, word_5c, 0x5c);  // (from the original)
GUEST_OFFSET(Object_005166a8_1, byte_60, 0x60);  // (from the original)
GUEST_OFFSET(Object_005166a8_1, byte_61, 0x61);  // (from the original)

struct __attribute__((packed)) Local_005166a8_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005166a8_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_005166a8_ea_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_005166a8_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005166a8_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_005166a8_ea_2, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x00953658> global_00953658;  // (from the original)
inline constexpr guest::Function<0x00131530, u32(u32, u32, u32, u32)> call_00131530;  // (from the original)
inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> call_00135748;  // (from the original)
inline constexpr guest::Function<0x001357ec, u32(u32, u32, u32, u32)> call_001357ec;  // (from the original)
inline constexpr guest::Function<0x00137878, u32(u32, u32)> call_00137878;  // (from the original)
inline constexpr guest::Function<0x00137a0c, u32(u32, u32, u32, u32)> call_00137a0c;  // (from the original)
inline constexpr guest::Function<0x00747094, u32(u32, u32, u32, u32)> call_00747094;  // (from the original)
inline constexpr guest::Function<0x007472b0, u32(u32, u32, u32, u32)> call_007472b0;  // (from the original)

void f_005166a8(gptr<Object_005166a8_0> arg0, gptr<Object_005166a8_1> arg1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r1_4 = 0;
    u32 r2_3 = 0;
    u32 r3_6 = 0;
    u32 r1_5 = 0;
    u32 r1_6 = 0;
    u32 r2_4 = 0;
    u32 r3_7 = 0;
    u32 r0_3 = 0;
    r13 -= 0x18u;  // (from the original)
    if (u32(arg0->byte_2d0) != 0) {
        u32 r3_1 = arg0->word_2ec;
        arg1->word_8 = arg0->word_2e8;
        arg1->word_c = r3_1;
        arg1->word_10 = arg0->word_2f0;
        u32 r3_2 = arg0->word_2fc;
        arg1->word_18 = arg0->word_2f8;
        arg1->word_1c = r3_2;
        arg1->word_20 = arg0->word_300;
        u32 r3_3 = arg0->word_30c;
        arg1->word_28 = arg0->word_308;
        arg1->word_2c = r3_3;
        arg1->word_30 = arg0->word_310;
        u32 r2_1 = arg0->word_318;
        u32 r3_4 = arg0->word_31c;
        arg1->word_38 = r2_1;
        arg1->word_3c = r3_4;
        arg1->word_40 = arg0->word_320;
        u32 r1_1 = arg0->word_2e0;
        arg1->word_48 = arg0->word_2dc;
        arg1->word_4c = r1_1;
        guest::cpu()->r[13] = r13;
        call_007472b0(r13, r0 + 0xcu, r2_1, r3_4);  // (from the original)
        u32 r2_2 = guest::cpu()->r[2];
        u32 r3_5 = guest::cpu()->r[3];
        gptr<Local_005166a8_ea_1> ea_1 = gptr<Local_005166a8_ea_1>(r13);
        u32 r0_2 = ea_1->word_0;
        u32 r1_3 = ea_1->word_4;
        gptr<Local_005166a8_ea_2> ea_2 = gptr<Local_005166a8_ea_2>(r1 + 0x50u);  // (from the original)
        ea_2->word_0 = r0_2;
        ea_2->word_4 = r1_3;
        arg1->byte_60 = u8(u32(arg0->byte_328));
        guest::cpu()->r[13] = r13;
        call_00135748(r0, r1_3, r2_2, r3_5);
        r1_4 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
        r3_6 = guest::cpu()->r[3];
        if (u32(arg0->byte_2bc) == 0) {
            goto L_51679c;
        }
        if (arg0->word_2b8 == 0) {
            goto L_516784;
        }
        goto L_51679c;
    }
    r13 += 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00137878(r1, r1);
    return;
L_516784:;
    r1_5 = r0 + 0x2bcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00131530(r2, r1_5, r2_3, r3_6);
    r1_6 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_3 = r0 + 0x2bcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00137a0c(r0_3, r1_6, r2_4, r3_7);
    r1_4 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
L_51679c:;
    guest::cpu()->r[13] = r13;
    call_001357ec(r0, r1_4, r2_3, r3_6);
    u32 r1_7 = guest::cpu()->r[1];
    u32 r2_5 = guest::cpu()->r[2];
    u32 r3_8 = guest::cpu()->r[3];
    arg1->word_58 = arg0->word_28;
    guest::cpu()->r[13] = r13;
    u32 r0_5 = call_00747094(r0 + 0xcu, r1_7, r2_5, r3_8);  // (from the original)
    u32 r1_8 = guest::cpu()->r[1];
    arg1->word_0 = r0_5;
    arg1->word_4 = r1_8;
    arg1->byte_61 = 0;
    if (u32(arg0->byte_34) != 0) {
        arg1->byte_61 = 1;
    }
    arg1->word_5c = *global_00953658;
    r13 += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_8;
    guest::cpu()->r[13] = r13;
    return;
}

}  // namespace d_005166a8
GUEST_EXPORT(0x005166a8, d_005166a8::f_005166a8);

// f_005182f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005182f4 {

struct __attribute__((packed)) Object_005182f4_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_005182f4_0, word_0, 0x0);  // (from the original)

struct __attribute__((packed)) Local_005182f4_ea_10 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005182f4_ea_10, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_005182f4_ea_10, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_005182f4_ea_11 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_005182f4_ea_11, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_005182f4_ea_11, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_005182f4_ea_11, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_005182f4_ea_13 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005182f4_ea_13, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_005182f4_ea_13, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_005182f4_ea_14 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005182f4_ea_14, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_005182f4_ea_14, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_005182f4_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005182f4_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_005182f4_ea_2, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_005182f4_r8_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005182f4_r8_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_005182f4_r8_1, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x0087bdb4> global_0087bdb4;  // (from the original)
inline guest::global<u32, 0x0087bdb8> global_0087bdb8;  // (from the original)
inline guest::global<u32, 0x00953658> global_00953658;  // (from the original)
inline guest::global<u32, 0x00953678> global_00953678;  // (from the original)
inline guest::global<u32, 0x0095367c> global_0095367c;  // (from the original)
inline constexpr guest::Function<0x0012f154, u32(u32, u32, u32, u32)> call_0012f154;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x005164c0, u32(u32, u32, u32, u32)> call_005164c0;  // (from the original)
inline constexpr guest::Function<0x0051b0e4, u32(u32, u32, u32, u32)> call_0051b0e4;  // (from the original)

u32 f_005182f4(gptr<Object_005182f4_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    arg0->word_0 = 0;
    call_0012f154(r0, r1, r2, r3);
    u32 r0_2 = call_005164c0(r0 + 0xcu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 ea_1 = r0_2 + 0x2acu;  // (from the original)
    *gptr<u32>(ea_1) = 0;
    u32 r0_4 = call_0051b0e4(ea_1 + 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_5 = r0_4 - 0x2bcu;  // (from the original)
    gptr<Local_005182f4_r8_1> r8_1 = gptr<Local_005182f4_r8_1>(r0_5 + 0x2dcu);  // (from the original)
    gptr<Local_005182f4_ea_2> ea_2 = gptr<Local_005182f4_ea_2>(r0_5 + 0x2d4u);  // (from the original)
    ea_2->word_0 = r1;
    ea_2->word_4 = r2;
    u32 r2_3 = *global_0095367c;
    r8_1->word_0 = *global_00953678;
    r8_1->word_4 = r2_3;
    u32 r0_7 = call_00301d0c(r0_5 + 0x2e8u, 0x51b084u, 0x10u, 4u);  // (from the original)
    u32 r0_8 = r0_7 - 0x2e8u;  // (from the original)
    u32 r12_1 = ~2u;
    u32 r9_1 = ~0u;
    *gptr<u8>(r0_8 + 0x328u) = 0;  // (from the original)
    *gptr<u8>(r0_8 + 0x329u) = 0;  // (from the original)
    *gptr<u32>(0x95365cu) = r0_8;  // (from the original)
    *gptr<u32>(r0_8 + 0x2ecu) = r9_1;  // (from the original)
    *gptr<u32>(r0_8 + 0x2e8u) = r12_1;  // (from the original)
    *gptr<u32>(r0_8 + 0x2f0u) = 0;  // (from the original)
    *gptr<u32>(r0_8 + 0x300u) = 0;  // (from the original)
    gptr<Local_005182f4_ea_10> ea_10 = gptr<Local_005182f4_ea_10>(r0_8 + 0x2f8u);  // (from the original)
    ea_10->word_0 = r12_1;
    ea_10->word_4 = r9_1;
    gptr<Local_005182f4_ea_11> ea_11 = gptr<Local_005182f4_ea_11>(r0_8 + 0x308u);  // (from the original)
    ea_11->word_0 = r12_1;
    ea_11->word_4 = r9_1;
    ea_11->word_8 = 0;
    *gptr<u32>(r0_8 + 0x320u) = 0;  // (from the original)
    gptr<Local_005182f4_ea_13> ea_13 = gptr<Local_005182f4_ea_13>(r0_8 + 0x318u);  // (from the original)
    ea_13->word_0 = r12_1;
    ea_13->word_4 = r9_1;
    u32 r1_3 = *global_0087bdb4;
    u32 r3_3 = *global_0087bdb8;
    gptr<Local_005182f4_ea_14> ea_14 = gptr<Local_005182f4_ea_14>(r0_8 + 0x2c8u);  // (from the original)
    ea_14->word_0 = r1_3;
    ea_14->word_4 = r3_3;
    *gptr<u8>(r0_8 + 0x2d0u) = 0;  // (from the original)
    *global_00953658 = 0;
    guest::cpu()->r[1] = r1_3;
    return r0_8;
}

}  // namespace d_005182f4
GUEST_EXPORT_FRAMED(0x005182f4, d_005182f4::f_005182f4, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_005183e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005183e0 {

struct __attribute__((packed)) Object_005183e0_0 {
    u8 unknown_0[0x1c];  // (not used here)
    u32 word_1c;
    u8 unknown_20[0x8];  // (not used here)
    u8 byte_28;
    u8 unknown_29[0x12c];  // (not used here)
    u8 byte_155;
};
GUEST_OFFSET(Object_005183e0_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_005183e0_0, byte_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_005183e0_0, byte_155, 0x155);  // (from the original)

inline guest::global<u32, 0x00952c9c> global_00952c9c;  // (from the original)
inline constexpr guest::Function<0x0013133c, u32(u32, u32, u32)> call_0013133c;  // (from the original)
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> call_002fd108;  // (from the original)
inline constexpr guest::Function<0x0051659c, u32(u32, u32, u32)> call_0051659c;  // (from the original)
inline constexpr guest::Function<0x005182f4, u32(u32, u32, u32)> call_005182f4;  // (from the original)
inline constexpr guest::Function<0x00518574, u32(u32, u32, u32)> call_00518574;  // (from the original)

u32 f_005183e0(gptr<Object_005183e0_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r5_1 = 0;
    if (u32(arg0->byte_155) != 0) {
        return 0u;
    }
    if (u32(arg0->byte_28) != 0) {
        return 1u;
    }
    u32 r0_2 = call_002fd108(0x330u, *global_00952c9c, 4u, guest::cpu()->r[3]);  // (from the original)
    u32 r0_3 = call_005182f4(r0_2, r1, r2);
    arg0->word_1c = r0_3;
    u32 r0_4 = call_0051659c(r0_3, guest::cpu()->r[1], guest::cpu()->r[2]);
    r1 = guest::cpu()->r[1];
    u32 r2_2 = guest::cpu()->r[2];
    if (r0_4 == 0) {
        return 0u;
    }
    call_0013133c(r0, r1, r2_2);
    r5_1 = 1u;
    arg0->byte_28 = u8(r5_1);
    call_00518574(r0, guest::cpu()->r[1], guest::cpu()->r[2]);
    r1 = guest::cpu()->r[1];
    return r5_1;
}

}  // namespace d_005183e0
GUEST_EXPORT_FRAMED(0x005183e0, d_005183e0::f_005183e0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00518468: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00518468 {

struct __attribute__((packed)) Object_00518468_0 {
    u8 unknown_0[0x150];  // (not used here)
    u32 word_150;
};
GUEST_OFFSET(Object_00518468_0, word_150, 0x150);  // (from the original)

inline constexpr guest::Function<0x00131470, u32(u32, u32, u32, u32)> call_00131470;  // (from the original)
inline constexpr guest::Function<0x0051b094, u32(u32, u32, u32)> call_0051b094;  // (from the original)

u32 f_00518468(gptr<Object_00518468_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x28);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r4_1 = *frame.at<u32>(0x34);  // (from the original)
    u32 r12_1 = *frame.at<u32>(0x30);  // (from the original)
    if ((arg0->word_150 & 4u) == 0 || (r2 | r3) == 0) {
        call_0051b094(r0 + 0x144u, 0x1eu, 6u);  // (from the original)
        return 0u;
    }
    *frame.at<u32>(0) = 0;
    *frame.at<u32>(4) = 0;
    *frame.at<u32>(8) = 0;
    *frame.at<u32>(0x14) = 0;  // (from the original)
    *frame.at<u32>(0x18) = 0;  // (from the original)
    *frame.at<u32>(0x1c) = 0;  // (from the original)
    *frame.at<u32>(0xc) = 0;  // (from the original)
    *frame.at<u32>(0x10) = 0;  // (from the original)
    *frame.at<u32>(0) = r2;
    *frame.at<u32>(4) = r3;
    *frame.at<u32>(0x20) = 0;  // (from the original)
    *frame.at<u32>(0x24) = 0;  // (from the original)
    *frame.at<u8>(8) = u8(r12_1);
    *frame.at<u8>(9) = u8(r4_1);
    u32 r0_2 = call_00131470(r0, 0x1eu, frame.at(0).addr(), r3);  // (from the original)
    return r0_2;
}

}  // namespace d_00518468
GUEST_EXPORT_FRAMED(0x00518468, d_00518468::f_00518468, 0x4010);  // pushes {r4, lr} first, as the original

// f_005184f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005184f0 {

struct __attribute__((packed)) Object_005184f0_0 {
    u8 unknown_0[0x28];  // (not used here)
    u8 byte_28;
    u8 unknown_29[0x127];  // (not used here)
    u32 word_150;
};
GUEST_OFFSET(Object_005184f0_0, byte_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_005184f0_0, word_150, 0x150);  // (from the original)

struct __attribute__((packed)) Local_005184f0_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005184f0_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_005184f0_ea_1, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x00131470, u32(u32, u32, u32, u32)> call_00131470;  // (from the original)
inline constexpr guest::Function<0x0051b094, u32(u32, u32, u32)> call_0051b094;  // (from the original)

u32 f_005184f0(gptr<Object_005184f0_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x2c);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r4_2 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    gptr<Local_005184f0_ea_1> ea_1 = gptr<Local_005184f0_ea_1>(frame.at(0x38).addr());  // (from the original)
    u32 r5_1 = ea_1->word_0;
    u32 r12_1 = ea_1->word_4;
    u32 r4_1 = arg0->byte_28;
    if (r4_1 != 2u) {
        goto L_518558;
    }
    r4_2 = arg0->word_150;
    if ((r4_2 & 1u) == 0) {
        goto L_518558;
    }
    *frame.at<u32>(0xc) = 0;  // (from the original)
    *frame.at<u32>(0x10) = 0;  // (from the original)
    *frame.at<u32>(0x14) = 0;  // (from the original)
    *frame.at<u32>(0x18) = 0;  // (from the original)
    *frame.at<u32>(0x1c) = 0;  // (from the original)
    *frame.at<u32>(0x20) = 0;  // (from the original)
    *frame.at<u32>(0x24) = 0;  // (from the original)
    *frame.at<u32>(0) = r1;
    *frame.at<u32>(4) = r2;
    *frame.at<u32>(8) = r3;
    r2_1 = frame.at(0).addr();
    *frame.at<u8>(0xd) = u8(r5_1);  // (from the original)
    *frame.at<u8>(0xc) = u8(r12_1);  // (from the original)
    r0_1 = call_00131470(r0, 4u, r2_1, r3);
    return r0_1;
L_518558:;
    call_0051b094(r0 + 0x144u, 4u, 6u);  // (from the original)
    return 0u;
}

}  // namespace d_005184f0
GUEST_EXPORT_FRAMED(0x005184f0, d_005184f0::f_005184f0, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0051868c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051868c {

struct __attribute__((packed)) Object_0051868c_0 {
    u8 unknown_0[0x28];  // (not used here)
    u8 byte_28;
    u8 unknown_29[0x7];  // (not used here)
    u8 byte_30;
    u8 unknown_31[0x11f];  // (not used here)
    u32 word_150;
};
GUEST_OFFSET(Object_0051868c_0, byte_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_0051868c_0, byte_30, 0x30);  // (from the original)
GUEST_OFFSET(Object_0051868c_0, word_150, 0x150);  // (from the original)

inline constexpr guest::Function<0x00131470, u32(u32, u32, u32, u32)> call_00131470;  // (from the original)
inline constexpr guest::Function<0x0051b094, u32(u32, u32, u32)> call_0051b094;  // (from the original)

u32 f_0051868c(gptr<Object_0051868c_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x28);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r0_2 = 0;
    u32 r0_1 = arg0->byte_28;
    u32 r12_1 = *frame.at<u32>(0x30);  // (from the original)
    if (r0_1 == 3u) {
        return 1u;
    }
    if (r0_1 == 2u && (arg0->word_150 & 1u) != 0) {
        if (u32(arg0->byte_30) == 0) {
            goto L_5186e8;
        }
        goto L_5186fc;
    }
    r0_2 = r0 + 0x144u;  // (from the original)
    call_0051b094(r0_2, 3u, 6u);
    return 0u;
L_5186e8:;
    if (r2 < 0x5cu) {  // (from the original)
        goto L_5186fc;
    }
    guest::cpu()->r[1] = r1;
    return 1u;
L_5186fc:;
    *frame.at<u32>(8) = 0;
    *frame.at<u32>(0xc) = 0;  // (from the original)
    *frame.at<u32>(0x10) = 0;  // (from the original)
    *frame.at<u32>(0x14) = 0;  // (from the original)
    *frame.at<u32>(0x18) = 0;  // (from the original)
    *frame.at<u32>(0x1c) = 0;  // (from the original)
    *frame.at<u32>(0x20) = 0;  // (from the original)
    *frame.at<u32>(0x24) = 0;  // (from the original)
    *frame.at<u32>(0) = r1;
    *frame.at<u32>(4) = r2;
    *frame.at<u16>(8) = u16(r3);
    *frame.at<u8>(0xa) = u8(r12_1);  // (from the original)
    u32 r0_3 = call_00131470(r0, 3u, frame.at(0).addr(), r3);
    u32 r1_2 = guest::cpu()->r[1];
    if (r0_3 != 0) {
        r1_2 = 3u;
        arg0->byte_28 = u8(r1_2);
    }
    guest::cpu()->r[1] = r1_2;
    return r0_3;
}

}  // namespace d_0051868c
GUEST_EXPORT_FRAMED(0x0051868c, d_0051868c::f_0051868c, 0x4010);  // pushes {r4, lr} first, as the original

// f_00518750: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00518750 {

struct __attribute__((packed)) Object_00518750_0 {
    u8 unknown_0[0x150];  // (not used here)
    u32 word_150;
};
GUEST_OFFSET(Object_00518750_0, word_150, 0x150);  // (from the original)

struct __attribute__((packed)) Object_00518750_2 {
    u16 half_0;
};
GUEST_OFFSET(Object_00518750_2, half_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x00131470, u32(u32, u32, u32, u32)> call_00131470;  // (from the original)
inline constexpr guest::Function<0x0051b094, u32(u32, u32, u32)> call_0051b094;  // (from the original)

u32 f_00518750(gptr<Object_00518750_0> arg0, u32 r1, gptr<Object_00518750_2> arg2, u32 r3) {
    guest::StackFrame frame(0x28);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r2 = arg2.addr();
    u32 res_1 = 0;
    u32 r5_1 = *frame.at<u32>(0x3c);  // (from the original)
    float S0 = std::bit_cast<float>(*frame.at<u32>(0x38));  // (from the original)
    if ((arg0->word_150 & 4u) != 0) {
        *frame.at<u32>(0) = 0;
        *frame.at<u32>(4) = 0;
        *frame.at<u32>(0x10) = 0;  // (from the original)
        *frame.at<u32>(0x1c) = 0;  // (from the original)
        *frame.at<u32>(0x14) = 0;  // (from the original)
        *frame.at<u32>(0x18) = 0;  // (from the original)
        *frame.at<u32>(0x20) = 0;  // (from the original)
        *frame.at<u32>(0x24) = 0;  // (from the original)
        *frame.at<u32>(8) = r1;
        u32 zf_1 = r3 == 8u;
        u32 cf_1 = r3 >= 8u;
        *frame.at<u32>(0) = 0;
        *frame.at<u32>(4) = 0;
        *frame.at<u32>(0xc) = std::bit_cast<u32>(S0);  // (from the original)
        if (cf_1 && !zf_1) {
            r3 = 8u;
        }
        if (!cf_1 || zf_1) {
            zf_1 = r3 == 0;
        }
        u32 r4 = frame.at(0).addr();
        *frame.at<u8>(0x10) = u8(r5_1);  // (from the original)
        if (!zf_1) {
            r1 = r2 - 2u;
            r2 = r4 + 0x10u;  // (from the original)
            if ((r3 & 1u) != 0) {
                r1 = r1 + 2u;
                r2 += 2u;
                *frame.at<u16>(0x12) = u16(u32(arg2->half_0));  // (from the original)
            }
            u32 r12 = r3 >> 1;
            if (r12 != 0) {
                do {
                    u32 r5_2 = *gptr<u16>(r1 + 2u);
                    res_1 = r12 - 1u;
                    r12 = res_1;
                    *gptr<u16>(r2 + 2u) = u16(r5_2);
                    u32 ea_4 = r1 + 4u;
                    r1 = ea_4;
                    u32 r5_3 = *gptr<u16>(ea_4);
                    u32 ea_5 = r2 + 4u;
                    *gptr<u16>(ea_5) = u16(r5_3);
                    r2 = ea_5;
                    guest::preempt();
                } while (res_1 != 0);
            }
            if (r3 >= 8u) {
                goto L_518814;
            }
        }
        r1 = 0xffffu;  // (from the original)
        do {
            u32 r2_1 = r4 + (r3 << 1);
            r3 += 1u;
            *gptr<u16>(r2_1 + 0x12u) = u16(r1);  // (from the original)
            guest::preempt();
        } while (r3 < 8u);
L_518814:;
        guest::cpu()->s[0] = S0;
        u32 r0_1 = call_00131470(r0, 0x1bu, r4, r3);  // (from the original)
        return r0_1;
    }
    guest::cpu()->s[0] = S0;
    call_0051b094(r0 + 0x144u, 0x1bu, 6u);  // (from the original)
    return 0u;
}

}  // namespace d_00518750
GUEST_EXPORT_FRAMED(0x00518750, d_00518750::f_00518750, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00518848: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00518848 {

struct __attribute__((packed)) Object_00518848_0 {
    u8 unknown_0[0x150];  // (not used here)
    u32 word_150;
};
GUEST_OFFSET(Object_00518848_0, word_150, 0x150);  // (from the original)

struct __attribute__((packed)) Local_00518848_r1_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00518848_r1_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00518848_r1_2, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x00131470, u32(u32, u32, u32, u32)> call_00131470;  // (from the original)
inline constexpr guest::Function<0x0051b094, u32(u32, u32, u32)> call_0051b094;  // (from the original)

u32 f_00518848(gptr<Object_00518848_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x2c);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 res_1 = 0;
    u32 r12_1 = *frame.at<u32>(0x34);  // (from the original)
    float S0 = std::bit_cast<float>(*frame.at<u32>(0x30));  // (from the original)
    u32 zf_1 = (arg0->word_150 & 4u) == 0;
    float S1 = std::bit_cast<float>(*frame.at<u32>(0x38));  // (from the original)
    if (!zf_1) {
        zf_1 = (r2 | r3) == 0;
    }
    if (zf_1) {
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        call_0051b094(r0 + 0x144u, 0x1bu, 6u);  // (from the original)
        return 0u;
    }
    *frame.at<u32>(0) = 0;
    *frame.at<u32>(4) = 0;
    *frame.at<u32>(0x14) = 0;  // (from the original)
    *frame.at<u32>(0x18) = 0;  // (from the original)
    *frame.at<u32>(0x10) = 0;  // (from the original)
    *frame.at<u32>(0) = r2;
    *frame.at<u32>(4) = r3;
    *frame.at<u32>(0x1c) = 0;  // (from the original)
    *frame.at<u32>(0x20) = 0;  // (from the original)
    *frame.at<u32>(0x24) = 0;  // (from the original)
    gptr<Local_00518848_r1_2> r1_2 = gptr<Local_00518848_r1_2>(frame.at(8).addr());
    r3 = 3u;
    r1_2->word_0 = std::bit_cast<u32>(S0);
    r1_2->word_4 = std::bit_cast<u32>(S1);
    r2 = frame.at(0x14).addr();  // (from the original)
    u32 r1 = 0xffffu;  // (from the original)
    *frame.at<u16>(0x12) = u16(r12_1);  // (from the original)
    *frame.at<u16>(0x14) = u16(r1);  // (from the original)
    do {
        *gptr<u16>(r2 + 2u) = u16(r1);
        res_1 = r3 - 1u;
        r3 = res_1;
        u32 ea_2 = r2 + 4u;
        *gptr<u16>(ea_2) = u16(r1);
        r2 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    u32 r0_2 = call_00131470(r0, 0x1bu, frame.at(0).addr(), r3);  // (from the original)
    return r0_2;
}

}  // namespace d_00518848
GUEST_EXPORT_FRAMED(0x00518848, d_00518848::f_00518848, 0x4000);  // pushes {lr} first, as the original

// f_005189e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005189e4 {

struct __attribute__((packed)) Object_005189e4_0 {
    u8 unknown_0[0x150];  // (not used here)
    u32 word_150;
};
GUEST_OFFSET(Object_005189e4_0, word_150, 0x150);  // (from the original)

inline constexpr guest::Function<0x00131470, u32(u32, u32, u32, u32)> call_00131470;  // (from the original)
inline constexpr guest::Function<0x0051b094, u32(u32, u32, u32)> call_0051b094;  // (from the original)

u32 f_005189e4(gptr<Object_005189e4_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x28);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r4_1 = arg0->word_150;
    u32 r12_1 = *frame.at<u32>(0x34);  // (from the original)
    float S0_1 = std::bit_cast<float>(*frame.at<u32>(0x30));  // (from the original)
    if ((r4_1 & 4u) != 0) {
        *frame.at<u32>(0x14) = 0;  // (from the original)
        *frame.at<u32>(0x18) = 0;  // (from the original)
        *frame.at<u32>(0x1c) = 0;  // (from the original)
        *frame.at<u32>(0x20) = 0;  // (from the original)
        *frame.at<u32>(0x24) = 0;  // (from the original)
        *frame.at<u32>(0) = r1;
        *frame.at<u32>(4) = r2;
        *frame.at<u32>(8) = r3;
        *frame.at<u32>(0xc) = std::bit_cast<u32>(S0_1);  // (from the original)
        *frame.at<u32>(0x10) = r12_1;  // (from the original)
        guest::cpu()->s[0] = S0_1;
        u32 r0_1 = call_00131470(r0, 0x19u, frame.at(0).addr(), r3);  // (from the original)
        return r0_1;
    }
    guest::cpu()->s[0] = S0_1;
    call_0051b094(r0 + 0x144u, 0x19u, 6u);  // (from the original)
    return 0u;
}

}  // namespace d_005189e4
GUEST_EXPORT_FRAMED(0x005189e4, d_005189e4::f_005189e4, 0x4010);  // pushes {r4, lr} first, as the original

// f_00518c3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00518c3c {

struct __attribute__((packed)) Object_00518c3c_0 {
    u8 unknown_0[0x150];  // (not used here)
    u32 word_150;
};
GUEST_OFFSET(Object_00518c3c_0, word_150, 0x150);  // (from the original)

inline constexpr guest::Function<0x00131470, u32(u32, u32, u32, u32)> call_00131470;  // (from the original)
inline constexpr guest::Function<0x0051b094, u32(u32, u32, u32)> call_0051b094;  // (from the original)

u32 f_00518c3c(gptr<Object_00518c3c_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x2c);  // the original's stack frame
    u32 r0 = arg0.addr();
    float S0_1 = std::bit_cast<float>(*frame.at<u32>(0x30));  // (from the original)
    if ((arg0->word_150 & 4u) != 0) {
        *frame.at<u32>(0xc) = 0;  // (from the original)
        *frame.at<u32>(0x14) = 0;  // (from the original)
        *frame.at<u32>(0x18) = 0;  // (from the original)
        *frame.at<u32>(0x1c) = 0;  // (from the original)
        *frame.at<u32>(0x20) = 0;  // (from the original)
        *frame.at<u32>(0x24) = 0;  // (from the original)
        *frame.at<u32>(0) = r1;
        *frame.at<u32>(4) = r2;
        *frame.at<u32>(8) = r3;
        *frame.at<u32>(0x10) = std::bit_cast<u32>(S0_1);  // (from the original)
        guest::cpu()->s[0] = S0_1;
        u32 r0_1 = call_00131470(r0, 0x1fu, frame.at(0).addr(), r3);  // (from the original)
        return r0_1;
    }
    guest::cpu()->s[0] = S0_1;
    call_0051b094(r0 + 0x144u, 0x1fu, 6u);  // (from the original)
    return 0u;
}

}  // namespace d_00518c3c
GUEST_EXPORT_FRAMED(0x00518c3c, d_00518c3c::f_00518c3c, 0x4000);  // pushes {lr} first, as the original

// f_00518ca8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00518ca8 {

struct __attribute__((packed)) Object_00518ca8_0 {
    u8 unknown_0[0x150];  // (not used here)
    u32 word_150;
};
GUEST_OFFSET(Object_00518ca8_0, word_150, 0x150);  // (from the original)

struct __attribute__((packed)) Local_00518ca8_r1_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00518ca8_r1_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00518ca8_r1_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00518ca8_r1_1, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_00518ca8_r1_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00518ca8_r1_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00518ca8_r1_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00518ca8_r1_2, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x00131470, u32(u32, u32, u32, u32)> call_00131470;  // (from the original)
inline constexpr guest::Function<0x0051b094, u32(u32, u32, u32)> call_0051b094;  // (from the original)

u32 f_00518ca8(gptr<Object_00518ca8_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x2c);  // the original's stack frame
    u32 r0 = arg0.addr();
    gptr<Local_00518ca8_r1_1> r1_1 = gptr<Local_00518ca8_r1_1>(frame.at(0x34).addr());  // (from the original)
    float S3_1 = std::bit_cast<float>(*frame.at<u32>(0x30));  // (from the original)
    float S0_1 = std::bit_cast<float>(r1_1->word_0);
    float S1_1 = std::bit_cast<float>(r1_1->word_4);
    float S2_1 = std::bit_cast<float>(r1_1->word_8);
    if ((arg0->word_150 & 4u) != 0) {
        *frame.at<u32>(4) = 0;
        *frame.at<u32>(0) = 0;
        *frame.at<u32>(0x18) = 0;  // (from the original)
        *frame.at<u32>(0x1c) = 0;  // (from the original)
        *frame.at<u32>(0x20) = 0;  // (from the original)
        *frame.at<u32>(0x24) = 0;  // (from the original)
        *frame.at<u32>(8) = std::bit_cast<u32>(S3_1);
        gptr<Local_00518ca8_r1_2> r1_2 = gptr<Local_00518ca8_r1_2>(frame.at(0xc).addr());  // (from the original)
        r1_2->word_0 = std::bit_cast<u32>(S0_1);
        r1_2->word_4 = std::bit_cast<u32>(S1_1);
        r1_2->word_8 = std::bit_cast<u32>(S2_1);
        *frame.at<u32>(0) = r2;
        *frame.at<u32>(4) = r3;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        guest::cpu()->s[2] = S2_1;
        guest::cpu()->s[3] = S3_1;
        u32 r0_1 = call_00131470(r0, 0x1cu, frame.at(0).addr(), r3);  // (from the original)
        return r0_1;
    }
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    call_0051b094(r0 + 0x144u, 0x1cu, 6u);  // (from the original)
    return 0u;
}

}  // namespace d_00518ca8
GUEST_EXPORT_FRAMED(0x00518ca8, d_00518ca8::f_00518ca8, 0x4000);  // pushes {lr} first, as the original

// f_00518edc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00518edc {

struct __attribute__((packed)) Object_00518edc_0 {
    u8 unknown_0[0x150];  // (not used here)
    u32 word_150;
};
GUEST_OFFSET(Object_00518edc_0, word_150, 0x150);  // (from the original)

inline constexpr guest::Function<0x00131470, u32(u32, u32, u32, u32)> call_00131470;  // (from the original)
inline constexpr guest::Function<0x0051b094, u32(u32, u32, u32)> call_0051b094;  // (from the original)

u32 f_00518edc(gptr<Object_00518edc_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x2c);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r0_2 = 0;
    u32 r12_1 = *frame.at<u32>(0x30);  // (from the original)
    float S0_1 = std::bit_cast<float>(*frame.at<u32>(0x34));  // (from the original)
    if ((arg0->word_150 & 4u) != 0) {
        if ((r2 | r3) != 0) {
            goto L_518f38;
        }
        guest::cpu()->s[0] = S0_1;
        call_0051b094(r0 + 0x144u, 0x1du, 6u);  // (from the original)
        return 1u;
    }
    r0_2 = r0 + 0x144u;  // (from the original)
    guest::cpu()->s[0] = S0_1;
    call_0051b094(r0_2, 0x1du, 6u);  // (from the original)
    return 0u;
L_518f38:;
    *frame.at<u32>(0) = 0;
    *frame.at<u32>(4) = 0;
    *frame.at<u32>(0xc) = 0;  // (from the original)
    *frame.at<u32>(0x14) = 0;  // (from the original)
    *frame.at<u32>(0x18) = 0;  // (from the original)
    *frame.at<u32>(0x10) = 0;  // (from the original)
    *frame.at<u32>(0x20) = 0;  // (from the original)
    *frame.at<u32>(0) = r2;
    *frame.at<u32>(4) = r3;
    *frame.at<u32>(0x1c) = 0;  // (from the original)
    *frame.at<u32>(0x24) = 0;  // (from the original)
    *frame.at<u16>(0xc) = u16(r12_1);  // (from the original)
    *frame.at<u32>(8) = std::bit_cast<u32>(S0_1);
    guest::cpu()->s[0] = S0_1;
    u32 r0_3 = call_00131470(r0, 0x1du, frame.at(0).addr(), r3);  // (from the original)
    return r0_3;
}

}  // namespace d_00518edc
GUEST_EXPORT_FRAMED(0x00518edc, d_00518edc::f_00518edc, 0x4000);  // pushes {lr} first, as the original

// f_005196cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005196cc {

struct __attribute__((packed)) Object_005196cc_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u8 unknown_14[0x8];  // (not used here)
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u8 byte_28;
    u8 unknown_29[0x7];  // (not used here)
    u8 byte_30;
    u8 unknown_31[0x7];  // (not used here)
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
    u8 byte_60;
    u8 byte_61;
};
GUEST_OFFSET(Object_005196cc_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005196cc_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005196cc_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_005196cc_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_005196cc_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_005196cc_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_005196cc_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_005196cc_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_005196cc_0, byte_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_005196cc_0, byte_30, 0x30);  // (from the original)
GUEST_OFFSET(Object_005196cc_0, word_38, 0x38);  // (from the original)
GUEST_OFFSET(Object_005196cc_0, word_3c, 0x3c);  // (from the original)
GUEST_OFFSET(Object_005196cc_0, word_40, 0x40);  // (from the original)
GUEST_OFFSET(Object_005196cc_0, word_44, 0x44);  // (from the original)
GUEST_OFFSET(Object_005196cc_0, word_48, 0x48);  // (from the original)
GUEST_OFFSET(Object_005196cc_0, word_4c, 0x4c);  // (from the original)
GUEST_OFFSET(Object_005196cc_0, word_50, 0x50);  // (from the original)
GUEST_OFFSET(Object_005196cc_0, word_54, 0x54);  // (from the original)
GUEST_OFFSET(Object_005196cc_0, word_58, 0x58);  // (from the original)
GUEST_OFFSET(Object_005196cc_0, word_5c, 0x5c);  // (from the original)
GUEST_OFFSET(Object_005196cc_0, byte_60, 0x60);  // (from the original)
GUEST_OFFSET(Object_005196cc_0, byte_61, 0x61);  // (from the original)

struct __attribute__((packed)) Local_005196cc_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005196cc_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_005196cc_ea_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_005196cc_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005196cc_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_005196cc_ea_2, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_005196cc_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005196cc_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_005196cc_ea_3, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_005196cc_r0_12 {
    u8 unknown_0[0x150];  // (not used here)
    u32 word_150;
    u8 byte_154;
    u8 byte_155;
};
GUEST_OFFSET(Local_005196cc_r0_12, word_150, 0x150);  // (from the original)
GUEST_OFFSET(Local_005196cc_r0_12, byte_154, 0x154);  // (from the original)
GUEST_OFFSET(Local_005196cc_r0_12, byte_155, 0x155);  // (from the original)

struct __attribute__((packed)) Local_005196cc_r2_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005196cc_r2_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_005196cc_r2_1, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x0087bdf4> global_0087bdf4;  // (from the original)
inline guest::global<u32, 0x0087bdf8> global_0087bdf8;  // (from the original)
inline constexpr guest::Function<0x0012f154, u32(u32, u32, u32, u32)> call_0012f154;  // (from the original)
inline constexpr guest::Function<0x00137878, u32(u32, u32, u32, u32)> call_00137878;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x0051b0e4, u32(u32)> call_0051b0e4;  // (from the original)

u32 f_005196cc(gptr<Object_005196cc_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r1_1 = *global_0087bdf8;
    arg0->word_8 = *global_0087bdf4;
    arg0->word_c = r1_1;
    arg0->word_0 = 0x905ea4;  // (from the original)
    arg0->word_4 = r0;
    arg0->word_10 = 0;
    call_0012f154(r0 + 0x10u, r1_1, r2, r3);  // (from the original)
    arg0->word_1c = 0;
    arg0->word_20 = 0;
    arg0->word_24 = 0;
    arg0->byte_28 = 0;
    arg0->byte_30 = 0;
    arg0->word_38 = 0;
    arg0->word_3c = 0;
    arg0->word_40 = 0;
    arg0->word_44 = 0;
    arg0->word_48 = 0;
    arg0->word_4c = 0;
    arg0->word_50 = 0;
    arg0->word_54 = 0;
    arg0->word_58 = 0;
    arg0->word_5c = 0;
    arg0->byte_60 = 0;
    arg0->byte_61 = 0;
    u32 r0_3 = call_00301d0c(r0 + 0x70u, 0x51b084u, 0x10u, 4u);  // (from the original)
    u32 r4_1 = r0_3 - 8u;
    u32 r0_4 = ~2u;
    u32 r1_2 = ~0u;
    gptr<Local_005196cc_ea_1> ea_1 = gptr<Local_005196cc_ea_1>(r4_1 + 0x48u);  // (from the original)
    ea_1->word_0 = r0_4;
    ea_1->word_4 = r1_2;
    gptr<Local_005196cc_r2_1> r2_1 = gptr<Local_005196cc_r2_1>(r4_1 + 0x50u);  // (from the original)
    r2_1->word_0 = r0_4;
    r2_1->word_4 = r1_2;
    call_00137878(r4_1, r1_2, r2_1.addr(), guest::cpu()->r[3]);
    u32 r0_6 = call_00301d0c(r4_1 + 0x70u, 0x51b084u, 0x10u, 4u);  // (from the original)
    u32 r4_2 = r0_6 - 8u;
    u32 r0_7 = ~2u;
    u32 r1_3 = ~0u;
    gptr<Local_005196cc_ea_2> ea_2 = gptr<Local_005196cc_ea_2>(r4_2 + 0x48u);  // (from the original)
    ea_2->word_0 = r0_7;
    ea_2->word_4 = r1_3;
    gptr<Local_005196cc_ea_3> ea_3 = gptr<Local_005196cc_ea_3>(r4_2 + 0x50u);  // (from the original)
    ea_3->word_0 = r0_7;
    ea_3->word_4 = r1_3;
    call_00137878(r4_2, r1_3, 0x10u, 4u);  // (from the original)
    u32 r0_9 = call_0051b0e4(r4_2 + 0x68u);  // (from the original)
    u32 r0_11 = call_0051b0e4(r0_9 + 0xcu);  // (from the original)
    gptr<Local_005196cc_r0_12> r0_12 = gptr<Local_005196cc_r0_12>(r0_11 - 0x144u);  // (from the original)
    r0_12->word_150 = 0;
    r0_12->byte_154 = 0;
    r0_12->byte_155 = 0;
    return r0_12.addr();
}

}  // namespace d_005196cc
GUEST_EXPORT_FRAMED(0x005196cc, d_005196cc::f_005196cc, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005197dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005197dc {

inline constexpr guest::Function<0x0013138c, u32(u32, u32, u32, u32)> call_0013138c;  // (from the original)

u32 f_005197dc(u32 r0) {
    call_0013138c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return r0;
}

}  // namespace d_005197dc
GUEST_EXPORT_FRAMED(0x005197dc, d_005197dc::f_005197dc, 0x4010);  // pushes {r4, lr} first, as the original

// f_005197f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005197f0 {

inline constexpr guest::Function<0x0046a174, u32(u32, u32, u32, u32)> call_0046a174;  // (from the original)
inline constexpr guest::Function<0x0046aa80, u32(u32, u32)> call_0046aa80;  // (from the original)
inline constexpr guest::Function<0x0046eaf0, u32(u32, u32, u32, u32)> call_0046eaf0;  // (from the original)

void f_005197f0(u32 r0, u32 r1) {
    guest::cpu()->r[13] -= 8u;
    u32 r0_1 = call_0046a174(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r0_2 = r0_1 & 0x80000000u;  // (from the original)
    u32 nf_1 = r0_2 >> 0x1f;  // (from the original)
    if (nf_1 == 0u) {
        r0_2 = 0u;
    }
    if (nf_1 != 0u) {
        guest::cpu()->r[13] += 8u;
        return;
    }
    u32 r0_3 = call_0046aa80(r0_2, r1_1);
    guest::cpu()->r[13] += 8u;
    call_0046eaf0(r0_3, r0_3 & 0x80000000u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    return;
}

}  // namespace d_005197f0
GUEST_EXPORT(0x005197f0, d_005197f0::f_005197f0);

// f_0051981c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051981c {

inline constexpr guest::Function<0x0046a174, u32(u32, u32, u32, u32)> call_0046a174;  // (from the original)
inline constexpr guest::Function<0x0046eaf0, u32(u32, u32, u32, u32)> call_0046eaf0;  // (from the original)
inline constexpr guest::Function<0x00519cc0, u32(u32, u32, u32, u32)> call_00519cc0;  // (from the original)

u32 f_0051981c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r0_1 = call_0046a174(r0, r1, r2, r3);
    u32 r3_1 = guest::cpu()->r[3];
    u32 r0_2 = r0_1 & 0x80000000u;  // (from the original)
    if (r0_2 >> 0x1f) {  // (from the original)
        return r0_2;
    }
    u32 r0_4 = call_00519cc0(frame.at(0).addr(), r0, r1, r3_1);
    u32 r0_5 = call_0046eaf0(r0_4, guest::cpu()->r[1], r1, guest::cpu()->r[3]);
    return r0_5;
}

}  // namespace d_0051981c
GUEST_EXPORT_FRAMED(0x0051981c, d_0051981c::f_0051981c, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0051984c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051984c {

inline constexpr guest::Function<0x0046a174, u32(u32, u32, u32, u32)> call_0046a174;  // (from the original)
inline constexpr guest::Function<0x0046eaf0, u32(u32, u32, u32, u32)> call_0046eaf0;  // (from the original)
inline constexpr guest::Function<0x00519fc0, u32(u32, u32, u32, u32)> call_00519fc0;  // (from the original)

u32 f_0051984c(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r0_1 = call_0046a174(r0, r1, guest::cpu()->r[2], r3);
    u32 r3_1 = guest::cpu()->r[3];
    u32 r0_2 = r0_1 & 0x80000000u;  // (from the original)
    if (r0_2 >> 0x1f) {  // (from the original)
        return r0_2;
    }
    u32 r0_4 = call_00519fc0(frame.at(0).addr(), r0, guest::cpu()->r[2], r3_1);
    u32 r0_5 = call_0046eaf0(r0_4, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return r0_5;
}

}  // namespace d_0051984c
GUEST_EXPORT_FRAMED(0x0051984c, d_0051984c::f_0051984c, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00519874: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00519874 {

inline constexpr guest::Function<0x0046a174, u32(u32, u32, u32, u32)> call_0046a174;  // (from the original)
inline constexpr guest::Function<0x0046aa14, u32(u32, u32, u32, u32)> call_0046aa14;  // (from the original)
inline constexpr guest::Function<0x0046eaf0, u32(u32, u32, u32, u32)> call_0046eaf0;  // (from the original)

u32 f_00519874(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r4_1 = 0u;
    u32 r0_1 = call_0046a174(r0, r1, guest::cpu()->r[2], r3);
    u32 r1_1 = guest::cpu()->r[1];
    if (!((r0_1 & 0x80000000u) >> 0x1f)) {  // (from the original)
        u32 r0_3 = call_0046aa14(frame.at(0).addr(), r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r1_2 = r0_3 & 0x80000000u;  // (from the original)
        u32 nf_1 = r1_2 >> 0x1f;  // (from the original)
        if (nf_1 == 0u) {
            r4_1 = s32(s8(*frame.at<u8>(0)));
        }
        if (nf_1 != 0u) {
            r4_1 = 0u;
        }
        call_0046eaf0(r0_3, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1_1;
    return r4_1 ^ 1u;
}

}  // namespace d_00519874
GUEST_EXPORT_FRAMED(0x00519874, d_00519874::f_00519874, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_005198b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005198b0 {

inline constexpr guest::Function<0x0046a174, u32(u32, u32, u32, u32)> call_0046a174;  // (from the original)
inline constexpr guest::Function<0x0046aad8, u32(u32, u32, u32)> call_0046aad8;  // (from the original)
inline constexpr guest::Function<0x0046b320, u32(u32, u32, u32)> call_0046b320;  // (from the original)
inline constexpr guest::Function<0x0046eaf0, u32(u32, u32, u32)> call_0046eaf0;  // (from the original)

u32 f_005198b0(u32 r0, u32 r1, u32 r2) {
    u32 r4_1 = 0u;
    u32 r0_1 = call_0046a174(r0, r1, r2, guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    if (!((r0_1 & 0x80000000u) >> 0x1f)) {  // (from the original)
        u32 r0_2 = call_0046aad8(0u, r1_1, r2_1);
        u32 r1_2 = r0_2 & 0x80000000u;  // (from the original)
        if (r1_2 >> 0x1f) {  // (from the original)
            r1_2 = 0xc8a0f842u;  // (from the original)
            if (r0_2 != r1_2) {
                goto L_519904;
            }
            r2_1 = 0u;
            r0_2 = call_0046b320(r0, r1, r2_1);
            r1_2 = r0_2 & 0x80000000u;  // (from the original)
            if (r1_2 >> 0x1f) {  // (from the original)
                goto L_519904;
            }
        }
        r4_1 = 1u;
L_519904:;
        call_0046eaf0(r0_2, r1_2, r2_1);
        r1_1 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1_1;
    return r4_1;
}

}  // namespace d_005198b0
GUEST_EXPORT_FRAMED(0x005198b0, d_005198b0::f_005198b0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00519960: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00519960 {

inline constexpr guest::Function<0x0046a174, u32(u32, u32, u32, u32)> call_0046a174;  // (from the original)
inline constexpr guest::Function<0x0046aad8, u32(u32, u32)> call_0046aad8;  // (from the original)
inline constexpr guest::Function<0x0046eaf0, u32(u32, u32)> call_0046eaf0;  // (from the original)

u32 f_00519960(u32 r0, u32 r1) {
    u32 r4_1 = 0u;
    u32 r0_1 = call_0046a174(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    if (((r0_1 & 0x80000000u) >> 0x1f) == 0u) {  // (from the original)
        r4_1 = 1u;
        u32 r0_2 = call_0046aad8(0u, r1_1);
        u32 r1_2 = r0_2 & 0x80000000u;  // (from the original)
        if (s32(r1_2) < 0) {
            r4_1 = 0u;
        }
        call_0046eaf0(r0_2, r1_2);
        r1_1 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1_1;
    return r4_1;
}

}  // namespace d_00519960
GUEST_EXPORT_FRAMED(0x00519960, d_00519960::f_00519960, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005199a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005199a0 {

inline constexpr guest::Function<0x0046a134, u32(u32, u32)> call_0046a134;  // (from the original)
inline constexpr guest::Function<0x0046a174, u32(u32, u32, u32, u32)> call_0046a174;  // (from the original)
inline constexpr guest::Function<0x0046bb74, u32(u32, u32)> call_0046bb74;  // (from the original)
inline constexpr guest::Function<0x0046beec, u32(u32, u32)> call_0046beec;  // (from the original)
inline constexpr guest::Function<0x0046c1ec, u32(u32, u32)> call_0046c1ec;  // (from the original)
inline constexpr guest::Function<0x0046c214, u32(u32, u32)> call_0046c214;  // (from the original)
inline constexpr guest::Function<0x0046eaf0, u32(u32, u32)> call_0046eaf0;  // (from the original)

u32 f_005199a0(u32 r0, u32 r1) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r1_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    u32 zf_1 = 0;
    u32 r4 = 0u;
    u32 r0_1 = call_0046a174(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    if ((r0_1 & 0x80000000u) >> 0x1f) {  // (from the original)
        return r4;
    }
    r4 = 1u;
    u32 r0_2 = frame.at(0).addr();
    if (r0 != 0) {
        call_0046c1ec(r0_2, r1_1);
        u32 r0_4 = call_0046bb74(frame.at(0).addr(), r0);
        r1 = guest::cpu()->r[1];
        r0 = frame.at(0).addr();
        if ((r0_4 & 0x80000000u) >> 0x1f) {  // (from the original)
            goto L_519a50;
        }
        r0 = call_0046beec(r0, r1);
        r1 = guest::cpu()->r[1];
        if (r0 != 0) {
            r4 = 0u;
            goto L_519a54;
        }
        goto L_519a54;
    }
    call_0046a134(r0_2, r1_1);
    r1_2 = guest::cpu()->r[1];
    r0_5 = frame.at(0).addr();
    r0_6 = call_0046beec(r0_5, r1_2);
    r1_3 = guest::cpu()->r[1];
    zf_1 = r0_6 == 0;
    r0 = frame.at(0).addr();
    if (zf_1) {
        goto L_519a68;
    }
    call_0046c214(r0, r1_3);
    r1 = guest::cpu()->r[1];
L_519a50:;
    r4 = 0u;
L_519a54:;
    call_0046eaf0(r0, r1);
    r1_1 = guest::cpu()->r[1];
    return r4;
L_519a68:;
    call_0046c214(r0, r1_3);
    r1 = guest::cpu()->r[1];
    guest::preempt();
    goto L_519a54;
}

}  // namespace d_005199a0
GUEST_EXPORT_FRAMED(0x005199a0, d_005199a0::f_005199a0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00519a7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00519a7c {

struct __attribute__((packed)) Local_00519a7c_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00519a7c_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00519a7c_ea_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_00519a7c_r4_1 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Local_00519a7c_r4_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00519a7c_r4_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00519a7c_r4_1, word_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x0046a174, u32(u32, u32, u32, u32)> call_0046a174;  // (from the original)
inline constexpr guest::Function<0x0046a2c0, u32(u32, u32, u32, u32)> call_0046a2c0;  // (from the original)
inline constexpr guest::Function<0x0046a424, u32(u32, u32, u32, u32)> call_0046a424;  // (from the original)
inline constexpr guest::Function<0x0046a45c, u32(u32, u32, u32, u32)> call_0046a45c;  // (from the original)
inline constexpr guest::Function<0x0046aad8, u32(u32, u32, u32, u32)> call_0046aad8;  // (from the original)
inline constexpr guest::Function<0x0046b3b0, u32(u32, u32, u32, u32)> call_0046b3b0;  // (from the original)
inline constexpr guest::Function<0x0046b4c4, u32(u32, u32, u32, u32)> call_0046b4c4;  // (from the original)
inline constexpr guest::Function<0x0046bb74, u32(u32, u32, u32, u32)> call_0046bb74;  // (from the original)
inline constexpr guest::Function<0x0046c1ec, u32(u32, u32, u32, u32)> call_0046c1ec;  // (from the original)
inline constexpr guest::Function<0x0046eaf0, u32(u32, u32, u32, u32)> call_0046eaf0;  // (from the original)
inline constexpr guest::Function<0x00519e3c, u32(u32, u32, u32, u32)> call_00519e3c;  // (from the original)
inline constexpr guest::Function<0x00519ed0, u32(u32, u32, u32, u32)> call_00519ed0;  // (from the original)

u32 f_00519a7c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x810);  // the original's stack frame
    u32 r8_1 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    gptr<Local_00519a7c_r4_1> r4_1 = gptr<Local_00519a7c_r4_1>(r0);
    u32 r5 = 0u;
    u32 r0_1 = call_0046a174(r0, r1, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (!((r0_1 & 0x80000000u) >> 0x1f)) {  // (from the original)
        r0 = call_0046aad8(0u, r1_1, r2, guest::cpu()->r[3]);
        r3 = guest::cpu()->r[3];
        r1 = r0 & 0x80000000u;  // (from the original)
        if (r1 >> 0x1f) {  // (from the original)
            goto L_519bc8;
        }
        r8_1 = frame.at(0x800).addr();  // (from the original)
        r1_2 = r4_1->word_0;
        r2_1 = r4_1->word_c;
        r0 = call_00519e3c(r8_1, r1_2, r2_1, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 == 0) {
            u32 r6_1 = frame.at(0x7d8).addr();  // (from the original)
            call_0046c1ec(r6_1, r1, r2, r3);
            r0 = call_0046bb74(r6_1, r4_1->word_0, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if ((r0 & 0x80000000u) >> 0x1f) {  // (from the original)
                goto L_519bc8;
            }
            u32 r7_1 = frame.at(0x7ec).addr();  // (from the original)
            call_0046a45c(r7_1, r1, r2, r3);
            gptr<Local_00519a7c_ea_1> ea_1 = gptr<Local_00519a7c_ea_1>(r4_1.addr() + 8u);
            r0 = call_0046a424(r7_1, ea_1->word_0 * 0xe10u, ea_1->word_4, guest::cpu()->r[3]);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (!((r0 & 0x80000000u) >> 0x1f)) {  // (from the original)
                goto L_519b48;
            }
L_519b28:;
            goto L_519bc8;
L_519b48:;
            u32 r9_1 = frame.at(0).addr();
            call_0046b4c4(r9_1, r1, r2, r3);
            u32 r0_2 = call_0046b3b0(r9_1, r4_1->word_4, guest::cpu()->r[2], guest::cpu()->r[3]);
            r2 = guest::cpu()->r[2];
            if ((r0_2 & 0x80000000u) >> 0x1f) {  // (from the original)
                r0 = r9_1;
                call_0046a2c0(r0, guest::cpu()->r[1], r2, guest::cpu()->r[3]);
                r1 = guest::cpu()->r[1];
                r3 = guest::cpu()->r[3];
                guest::preempt();
                goto L_519b28;
            }
            u32 r0_3 = call_00519ed0(r8_1, r6_1, r7_1, r9_1);
            r2 = guest::cpu()->r[2];
            r0 = r9_1;
            call_0046a2c0(r0, guest::cpu()->r[1], r2, guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            r3 = guest::cpu()->r[3];
            if (r0_3 == 0) {
                goto L_519bc8;
            }
        }
        r5 = 1u;
L_519bc8:;
        call_0046eaf0(r0, r1, r2, r3);
        r1_1 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1_1;
    return r5;
}

}  // namespace d_00519a7c
GUEST_EXPORT_FRAMED(0x00519a7c, d_00519a7c::f_00519a7c, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_00519bdc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00519bdc {

inline constexpr guest::Function<0x0046a174, u32(u32, u32, u32, u32)> call_0046a174;  // (from the original)
inline constexpr guest::Function<0x0046aa80, u32(u32, u32)> call_0046aa80;  // (from the original)
inline constexpr guest::Function<0x0046eaf0, u32(u32, u32, u32, u32)> call_0046eaf0;  // (from the original)

void f_00519bdc(u32 r0, u32 r1) {
    guest::cpu()->r[13] -= 8u;
    u32 r0_1 = call_0046a174(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r0_2 = r0_1 & 0x80000000u;  // (from the original)
    u32 nf_1 = r0_2 >> 0x1f;  // (from the original)
    if (nf_1 == 0u) {
        r0_2 = 1u;
    }
    if (nf_1 != 0u) {
        guest::cpu()->r[13] += 8u;
        return;
    }
    u32 r0_3 = call_0046aa80(r0_2, r1_1);
    guest::cpu()->r[13] += 8u;
    call_0046eaf0(r0_3, r0_3 & 0x80000000u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    return;
}

}  // namespace d_00519bdc
GUEST_EXPORT(0x00519bdc, d_00519bdc::f_00519bdc);

// f_00519c08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00519c08 {

inline constexpr guest::Function<0x0046a174, u32(u32, u32, u32, u32)> call_0046a174;  // (from the original)
inline constexpr guest::Function<0x0046aad8, u32(u32, u32, u32, u32)> call_0046aad8;  // (from the original)
inline constexpr guest::Function<0x0046eaf0, u32(u32, u32, u32, u32)> call_0046eaf0;  // (from the original)
inline constexpr guest::Function<0x0051a044, u32(u32, u32, u32, u32)> call_0051a044;  // (from the original)

u32 f_00519c08(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r4_1 = 1u;
    u32 r0_1 = call_0046a174(r0, r1, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    if (!((r0_1 & 0x80000000u) >> 0x1f)) {  // (from the original)
        u32 r0_2 = call_0046aad8(0u, r1_1, r2_1, guest::cpu()->r[3]);
        u32 r3_2 = guest::cpu()->r[3];
        u32 r1_2 = r0_2 & 0x80000000u;  // (from the original)
        if (!(r1_2 >> 0x1f)) {  // (from the original)
            r2_1 = r1;
            r0_2 = call_0051a044(frame.at(0).addr(), r0, r2_1, r3_2);
            r1_2 = guest::cpu()->r[1];
            r3_2 = guest::cpu()->r[3];
            r4_1 = r0_2;
        }
        call_0046eaf0(r0_2, r1_2, r2_1, r3_2);
        r1_1 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1_1;
    return r4_1;
}

}  // namespace d_00519c08
GUEST_EXPORT_FRAMED(0x00519c08, d_00519c08::f_00519c08, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00519c58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00519c58 {

inline constexpr guest::Function<0x0046a174, u32(u32, u32, u32, u32)> call_0046a174;  // (from the original)
inline constexpr guest::Function<0x0046aad8, u32(u32, u32, u32, u32)> call_0046aad8;  // (from the original)
inline constexpr guest::Function<0x0046eaf0, u32(u32, u32, u32, u32)> call_0046eaf0;  // (from the original)
inline constexpr guest::Function<0x00519e3c, u32(u32, u32, u32, u32)> call_00519e3c;  // (from the original)
inline constexpr guest::Function<0x0051a2c4, u32(u32, u32, u32, u32)> call_0051a2c4;  // (from the original)

void f_00519c58(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r2_2 = 0;
    u32 r0_3 = 0;
    *frame.at<u32>(0) = r3;
    u32 r0_1 = call_0046a174(r0, r1, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    if ((r0_1 & 0x80000000u) >> 0x1f) {  // (from the original)
        return;
    }
    u32 r0_2 = call_0046aad8(0u, r1_1, r2_1, guest::cpu()->r[3]);
    u32 r3_2 = guest::cpu()->r[3];
    if ((r0_2 & 0x80000000u) >> 0x1f) {  // (from the original)
        goto L_519cb0;
    }
    r1_1 = *gptr<u32>(r0);
    r2_2 = *gptr<u32>(r0 + 8u);
    r0_3 = frame.at(0).addr();
    r0_2 = call_00519e3c(r0_3, r1_1, r2_2, r3_2);
    r2_1 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        r1_1 = r0;
        r0_2 = call_0051a2c4(frame.at(0).addr(), r1_1, r2_1, r3_2);
        r3_2 = guest::cpu()->r[3];
        if (r0_2 == 0) {
            goto L_519cb0;
        }
    }
L_519cb0:;
    call_0046eaf0(r0_2, r1_1, r2_1, r3_2);
    return;
}

}  // namespace d_00519c58
GUEST_EXPORT_FRAMED(0x00519c58, d_00519c58::f_00519c58, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00519cc0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00519cc0 {

struct __attribute__((packed)) Object_00519cc0_1 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u16 half_8;
};
GUEST_OFFSET(Object_00519cc0_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00519cc0_1, half_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x00131280, u32(u32, u32, u32, u32)> call_00131280;  // (from the original)
inline constexpr guest::Function<0x002f88b8, u32(u32, u32, u32, u32)> call_002f88b8;  // (from the original)
inline constexpr guest::Function<0x0046a7bc, u32(u32, u32, u32, u32)> call_0046a7bc;  // (from the original)
inline constexpr guest::Function<0x0046a7cc, u32(u32, u32, u32, u32)> call_0046a7cc;  // (from the original)
inline constexpr guest::Function<0x0046a7f8, u32(u32, u32, u32, u32)> call_0046a7f8;  // (from the original)
inline constexpr guest::Function<0x0046b218, u32(u32, u32, u32, u32)> call_0046b218;  // (from the original)
inline constexpr guest::Function<0x0046c21c, u32(u32, u32, u32, u32)> call_0046c21c;  // (from the original)
inline constexpr guest::Function<0x0046c23c, u32(u32, u32, u32, u32)> call_0046c23c;  // (from the original)
inline constexpr guest::Function<0x0046c380, u32(u32, u32, u32, u32)> call_0046c380;  // (from the original)
inline constexpr guest::Function<0x0046c44c, u32(u32, u32, u32, u32)> call_0046c44c;  // (from the original)
inline constexpr guest::Function<0x0046c570, u32(u32, u32, u32, u32)> call_0046c570;  // (from the original)
inline constexpr guest::Function<0x0046c8a0, u32(u32, u32, u32, u32)> call_0046c8a0;  // (from the original)

u32 f_00519cc0(u32 r0, gptr<Object_00519cc0_1> arg1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x80);  // the original's stack frame
    u32 r1 = arg1.addr();
    u32 r4 = 0;
    u32 r6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r5_1 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 res_1 = 0;
    u32 r2_5 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 res_2 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 res_3 = 0;
    u32 r0_17 = 0;
    u32 r1_1 = arg1->word_0;
    u32 r7 = r2;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return r0;
    }
    u32 r0_2 = call_00131280(u32(arg1->half_8) << 2, r1_1, 4u, r3);
    u32 r8 = r0_2;
    u32 r2_1 = *gptr<u16>(r1 + 8u);
    call_0046a7f8(frame.at(0x68).addr(), r0_2, r2_1, guest::cpu()->r[3]);  // (from the original)
    call_0046a7bc(frame.at(0x68).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_6 = call_0046b218(*gptr<u32>(r1 + 4u), frame.at(0x68).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 b_1 = r0_6 >> 0x1f;  // (from the original)
    u32 zf_1 = b_1 == 0;
    r1 = b_1;
    if (!zf_1) {
        r1 = 0xd840f845u;  // (from the original)
    }
    if (!zf_1) {
        zf_1 = r0_6 == r1;
    }
    if (!zf_1) {
        goto L_519df4;
    }
    r6 = *frame.at<u16>(0x6c);  // (from the original)
    r0_7 = frame.at(8).addr();
    *frame.at<u32>(0) = 0;
    *frame.at<u32>(4) = 0;
    r0_8 = call_0046c8a0(r0_7, 0u, 0u, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r0_8 + 0x28u) = 0;  // (from the original)
    *gptr<u16>(r0_8 + 0x2cu) = 0;  // (from the original)
    r4 = 0u;
    if (r6 < 0u || r6 == 0) {
        goto L_519dec;
    }
L_519d5c:;
    r5_1 = frame.at(0).addr();
    r0_9 = frame.at(0x68).addr();  // (from the original)
    r0_10 = call_0046a7cc(r0_9, r4, r2, r3);
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_11 = r5_1 + 8u;
    r0_12 = call_0046c21c(r0_11, r0_10, r2_4, r3_4);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    res_1 = r0_12 & 0x80000000u;  // (from the original)
    if (res_1 >> 0x1f) {  // (from the original)
        goto L_519dd4;
    }
    r2_5 = frame.at(0x48).addr();  // (from the original)
    r0_13 = r5_1 + 8u;
    r0_14 = call_0046c380(r0_13, 6u, r2_5, 0x20u);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    res_2 = r0_14 & 0x80000000u;  // (from the original)
    if (res_2 >> 0x1f) {  // (from the original)
        goto L_519dd4;
    }
    *frame.at<u16>(0x34) = u16(*frame.at<u32>(0x54));  // (from the original)
    *frame.at<u32>(0x30) = *frame.at<u32>(0x58);  // (from the original)
    r0_15 = r5_1 + 8u;
    r0_16 = call_0046c44c(r0_15, r5_1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    res_3 = r0_16 & 0x80000000u;  // (from the original)
    if (res_3 >> 0x1f) {  // (from the original)
        goto L_519dd4;
    }
    if (r7 == 0) {
        goto L_519e10;
    }
L_519dd4:;
    r0_17 = frame.at(8).addr();
    call_0046c570(r0_17, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_519ddc:;
    r4 = uxth(r4 + 1u);
    if (r4 < r6) {
        guest::preempt();
        goto L_519d5c;
    }
L_519dec:;
L_519df4:;
    call_002f88b8(r8, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    return frame.at(0x68).addr();  // (from the original)
L_519e10:;
    u32 r0_19 = call_0046c23c(frame.at(8).addr(), frame.at(0x44).addr(), r2, r3);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if ((r0_19 & 0x80000000u) >> 0x1f || u32(*frame.at<u8>(0x44)) == 0) {  // (from the original)
        guest::preempt();
        goto L_519ddc;
    }
    guest::preempt();
    goto L_519dd4;
}

}  // namespace d_00519cc0
GUEST_EXPORT_FRAMED(0x00519cc0, d_00519cc0::f_00519cc0, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00519e3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00519e3c {

inline constexpr guest::Function<0x0046bb74, u32(u32, u32, u32)> call_0046bb74;  // (from the original)
inline constexpr guest::Function<0x0046bcc4, u32(u32, u32, u32)> call_0046bcc4;  // (from the original)
inline constexpr guest::Function<0x0046c1ec, u32(u32, u32, u32, u32)> call_0046c1ec;  // (from the original)

u32 f_00519e3c(u32 r0_unused, u32 r1, u32 r2) {
    guest::StackFrame frame(0x14);  // the original's stack frame
    call_0046c1ec(frame.at(0).addr(), r1, r2, guest::cpu()->r[3]);
    u32 r0_3 = call_0046bb74(frame.at(0).addr(), r1, guest::cpu()->r[2]);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_2 = guest::cpu()->r[2];
    if ((r0_3 & 0x80000000u) >> 0x1f) {  // (from the original)
        return 0u;
    }
    u32 r0_5 = call_0046bcc4(frame.at(0).addr(), r2, r2_2);
    u32 r1_2 = r0_5 & 0x80000000u;  // (from the original)
    if (!(r1_2 >> 0x1f)) {  // (from the original)
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    r1_1 = 0xd8e0f81au;  // (from the original)
    u32 zf_1 = r0_5 == r1_1;
    if (!zf_1) {
        r1_1 = 0xc8a0f832u;  // (from the original)
        zf_1 = r0_5 == r1_1;
    }
    if (zf_1) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    r1_1 = 0xc8a0f833u;  // (from the original)
    if (r0_5 != r1_1) {
        r1_1 -= 8u;
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_00519e3c
GUEST_EXPORT_FRAMED(0x00519e3c, d_00519e3c::f_00519e3c, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00519ed0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00519ed0 {

inline constexpr guest::Function<0x0046a82c, u32(u32, u32, u32, u32)> call_0046a82c;  // (from the original)
inline constexpr guest::Function<0x0046bf88, u32(u32, u32, u32, u32)> call_0046bf88;  // (from the original)

u32 f_00519ed0(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    *frame.at<u32>(0) = 0;
    u32 r0_1 = call_0046a82c(r1, r2, r3, 0u);
    u32 r3_1 = guest::cpu()->r[3];
    u32 r1_1 = 0xc8a0f82bu;  // (from the original)
    u32 r2_1 = r0_1 & 0x80000000u;  // (from the original)
    if (r2_1 >> 0x1f) {  // (from the original)
        if (r0_1 == r1_1 + 0xbu || r0_1 == r1_1 + 0x17u || r0_1 == r1_1 || r0_1 == 0xd8e0f81au) {  // (from the original)
            guest::cpu()->r[1] = r1_1;
            return 0u;
        }
        r1_1 = 0xd8e0f801u;  // (from the original)
        u32 zf_1 = r0_1 == r1_1;
        if (!zf_1) {
            r1_1 += 1u;
            zf_1 = r0_1 == r1_1;
        }
        if (zf_1) {
            guest::cpu()->r[1] = r1_1;
            return 0u;
        }
        r1_1 = 0xd8e0f81fu;  // (from the original)
        u32 zf_2 = r0_1 == r1_1;
        if (!zf_2) {
            r1_1 += 9u;
            zf_2 = r0_1 == r1_1;
        }
        if (zf_2) {
            guest::cpu()->r[1] = r1_1;
            return 0u;
        }
        r1_1 = 0xd8e0f826u;  // (from the original)
        u32 zf_3 = r0_1 == r1_1;
        if (!zf_3) {
            r1_1 -= 6u;
            zf_3 = r0_1 == r1_1;
        }
        if (zf_3) {
            guest::cpu()->r[1] = r1_1;
            return 0u;
        }
        r1_1 = 0xd8e0f821u;  // (from the original)
        u32 zf_4 = r0_1 == r1_1;
        if (!zf_4) {
            r1_1 -= 4u;
            zf_4 = r0_1 == r1_1;
        }
        if (zf_4) {
            guest::cpu()->r[1] = r1_1;
            return 0u;
        }
        r1_1 = 0xd8e0f827u;  // (from the original)
        if (r0_1 != r1_1) {
            r1_1 += 0x9au;  // (from the original)
        }
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r0_2 = call_0046bf88(r1, r1_1, r2_1, r3_1);
    r1_1 = r0_2 & 0x80000000u;  // (from the original)
    if (s32(r1_1) >= 0) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_00519ed0
GUEST_EXPORT_FRAMED(0x00519ed0, d_00519ed0::f_00519ed0, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00519fc0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00519fc0 {

inline constexpr guest::Function<0x0046b174, u32(u32, u32)> call_0046b174;  // (from the original)
inline constexpr guest::Function<0x0046bb74, u32(u32, u32)> call_0046bb74;  // (from the original)
inline constexpr guest::Function<0x0046c1ec, u32(u32, u32, u32, u32)> call_0046c1ec;  // (from the original)

u32 f_00519fc0(u32 r0_unused, u32 r1) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    call_0046c1ec(frame.at(0).addr(), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_3 = call_0046bb74(frame.at(0).addr(), r1);
    if ((r0_3 & 0x80000000u) >> 0x1f) {  // (from the original)
        return 0u;
    }
    u32 r0_5 = call_0046b174(frame.at(0).addr(), 0u);
    u32 r1_2 = r0_5 & 0x80000000u;  // (from the original)
    if (!(r1_2 >> 0x1f)) {  // (from the original)
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    u32 r1_3 = 0xd8e0f81au;  // (from the original)
    u32 zf_1 = r0_5 == r1_3;
    if (!zf_1) {
        r1_3 = 0xc8a0f832u;  // (from the original)
        zf_1 = r0_5 == r1_3;
    }
    if (!zf_1) {
        r1_3 = 0xc8a0f833u;  // (from the original)
    }
    guest::cpu()->r[1] = r1_3;
    return 0u;
}

}  // namespace d_00519fc0
GUEST_EXPORT_FRAMED(0x00519fc0, d_00519fc0::f_00519fc0, 0x4010);  // pushes {r4, lr} first, as the original

// f_0051a2c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051a2c4 {

struct __attribute__((packed)) Local_0051a2c4_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0051a2c4_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0051a2c4_ea_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_0051a2c4_r4_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0051a2c4_r4_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0051a2c4_r4_1, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x0046a2c8, u32(u32, u32, u32, u32)> call_0046a2c8;  // (from the original)
inline constexpr guest::Function<0x0046a424, u32(u32, u32, u32, u32)> call_0046a424;  // (from the original)
inline constexpr guest::Function<0x0046a45c, u32(u32, u32, u32, u32)> call_0046a45c;  // (from the original)
inline constexpr guest::Function<0x0046b8ac, u32(u32, u32, u32, u32)> call_0046b8ac;  // (from the original)
inline constexpr guest::Function<0x0046baec, u32(u32, u32, u32, u32)> call_0046baec;  // (from the original)
inline constexpr guest::Function<0x0046bb48, u32(u32, u32, u32, u32)> call_0046bb48;  // (from the original)
inline constexpr guest::Function<0x0046bb70, u32(u32, u32, u32, u32)> call_0046bb70;  // (from the original)
inline constexpr guest::Function<0x0046bb74, u32(u32, u32, u32, u32)> call_0046bb74;  // (from the original)
inline constexpr guest::Function<0x0046c1ec, u32(u32, u32, u32, u32)> call_0046c1ec;  // (from the original)
inline constexpr guest::Function<0x00519ed0, u32(u32, u32, u32, u32)> call_00519ed0;  // (from the original)

u32 f_0051a2c4(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x810);  // the original's stack frame
    u32 r2_4 = 0;
    u32 r0_3 = 0;
    u32 r1_4 = 0;
    u32 r2_5 = 0;
    u32 r3_4 = 0;
    u32 res_3 = 0;
    u32 r5_1 = frame.at(0x7ec).addr();  // (from the original)
    call_0046c1ec(r5_1, r1, r2, r3);
    u32 r0_1 = call_0046bb74(r5_1, *gptr<u32>(r1), guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_2 = guest::cpu()->r[1];
    u32 r2_2 = guest::cpu()->r[2];
    u32 r3_2 = guest::cpu()->r[3];
    if (!((r0_1 & 0x80000000u) >> 0x1f)) {  // (from the original)
        goto L_51a30c;
    }
    return 0u;
L_51a30c:;
    u32 r8_1 = frame.at(0x7d8).addr();  // (from the original)
    call_0046a45c(r8_1, r1_2, r2_2, r3_2);
    gptr<Local_0051a2c4_ea_1> ea_1 = gptr<Local_0051a2c4_ea_1>(r1 + 4u);
    u32 r0_2 = call_0046a424(r8_1, ea_1->word_0 * 0xe10u, ea_1->word_4, guest::cpu()->r[3]);  // (from the original)
    if ((r0_2 & 0x80000000u) >> 0x1f) {  // (from the original)
        goto L_51a36c;
    }
    *frame.at<u8>(0x804) = 0;  // (from the original)
    r2_4 = frame.at(0x804).addr();  // (from the original)
    r0_3 = call_0046a2c8(r8_1, 5u, r2_4, 1u);
    r1_4 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    res_3 = r0_3 & 0x80000000u;  // (from the original)
    if (!(res_3 >> 0x1f)) {  // (from the original)
        goto L_51a380;
    }
L_51a36c:;
    return 0u;
L_51a380:;
    u32 r7_1 = frame.at(0).addr();
    call_0046bb48(r7_1, r1_4, r2_5, r3_4);
    gptr<Local_0051a2c4_r4_1> r4_1 = gptr<Local_0051a2c4_r4_1>(r1 + 0xcu);  // (from the original)
    u32 r0_4 = call_0046b8ac(r7_1, r4_1->word_0, r4_1->word_4, guest::cpu()->r[3]);
    u32 r1_6 = guest::cpu()->r[1];
    u32 r2_7 = guest::cpu()->r[2];
    u32 r3_6 = guest::cpu()->r[3];
    if (!((r0_4 & 0x80000000u) >> 0x1f)) {  // (from the original)
        u32 r0_5 = call_0046baec(r7_1, r1_6, r2_7, r3_6);
        r1_6 = guest::cpu()->r[1];
        r2_7 = guest::cpu()->r[2];
        r3_6 = guest::cpu()->r[3];
        if (!((r0_5 & 0x80000000u) >> 0x1f)) {  // (from the original)
            goto L_51a3d0;
        }
    }
    call_0046bb70(r7_1, r1_6, r2_7, r3_6);
    guest::preempt();
    goto L_51a36c;
L_51a3d0:;
    u32 r0_6 = call_00519ed0(r0, r5_1, r8_1, r7_1);
    call_0046bb70(r0_6, r5_1, r8_1, r7_1);
    return r0_6;
}

}  // namespace d_0051a2c4
GUEST_EXPORT_FRAMED(0x0051a2c4, d_0051a2c4::f_0051a2c4, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0051a740: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051a740 {

inline constexpr guest::Function<0x0046a174, u32(u32, u32, u32, u32)> call_0046a174;  // (from the original)
inline constexpr guest::Function<0x0046eaf0, u32(u32, u32, u32, u32)> call_0046eaf0;  // (from the original)
inline constexpr guest::Function<0x0051a414, u32(u32, u32, u32, u32)> call_0051a414;  // (from the original)

u32 f_0051a740(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r4_1 = 0u;
    u32 r0_1 = call_0046a174(r0, r1, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    if (!((r0_1 & 0x80000000u) >> 0x1f)) {  // (from the original)
        u32 r0_3 = call_0051a414(frame.at(0).addr(), r0, r1, guest::cpu()->r[3]);
        r4_1 = r0_3;
        call_0046eaf0(r0_3, guest::cpu()->r[1], r1, guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1_1;
    return r4_1;
}

}  // namespace d_0051a740
GUEST_EXPORT_FRAMED(0x0051a740, d_0051a740::f_0051a740, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0051a874: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051a874 {

struct __attribute__((packed)) Local_0051a874_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Local_0051a874_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0051a874_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0051a874_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0051a874_ea_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_0051a874_ea_1, word_10, 0x10);  // (from the original)

struct __attribute__((packed)) Local_0051a874_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Local_0051a874_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0051a874_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0051a874_ea_2, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0051a874_ea_2, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_0051a874_ea_2, word_10, 0x10);  // (from the original)

inline constexpr guest::Function<0x002fa9d0, u32(u32, u32, u32, u32)> call_002fa9d0;  // (from the original)
inline constexpr guest::Function<0x0035153c, u32(u32, u32, u32, u32)> call_0035153c;  // (from the original)
inline constexpr guest::Function<0x0047ec00, u32(u32, u32, u32, u32)> call_0047ec00;  // (from the original)

u32 f_0051a874(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x20);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_0051a874_ea_2> ea_2 = gptr<Local_0051a874_ea_2>(0u);
    u32 r4_1 = 0;
    u32 r5_2 = 0;
    u32 r6_2 = 0;
    u32 r7_1 = 0;
    gptr<Local_0051a874_ea_1> ea_1 = gptr<Local_0051a874_ea_1>(frame.at(0xc).addr());  // (from the original)
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r6;
    ea_1->word_c = r7;
    ea_1->word_10 = r14;
    u32 r6_1 = *frame.at<u32>(0x20);  // (from the original)
    u32 r3_1 = *frame.at<u32>(0x24);  // (from the original)
    if (r6_1 == 0) {
        ea_2 = gptr<Local_0051a874_ea_2>(frame.at(0xc).addr());  // (from the original)
        r4_1 = ea_2->word_0;
        r5_2 = ea_2->word_4;
        r6_2 = ea_2->word_8;
        r7_1 = ea_2->word_c;
        guest::cpu()->r[4] = r4_1;
        guest::cpu()->r[5] = r5_2;
        guest::cpu()->r[6] = r6_2;
        guest::cpu()->r[7] = r7_1;
        return 0u;
    }
    u32 r5_1 = 0u;
    u32 r0_2 = call_0047ec00(r0, r1, r6_1, r3_1);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    u32 r3_2 = guest::cpu()->r[3];
    if ((r0_2 & 0x80000000u) >> 0x1f) {  // (from the original)
        ea_2 = gptr<Local_0051a874_ea_2>(frame.at(0xc).addr());  // (from the original)
        r4_1 = ea_2->word_0;
        r5_2 = ea_2->word_4;
        r6_2 = ea_2->word_8;
        r7_1 = ea_2->word_c;
        guest::cpu()->r[4] = r4_1;
        guest::cpu()->r[5] = r5_2;
        guest::cpu()->r[6] = r6_2;
        guest::cpu()->r[7] = r7_1;
        return r5_1;
    }
    u32 r0_3 = call_002fa9d0(r6_1, r1_1, r2_1, r3_2);
    *frame.at<u32>(4) = r0_3;
    *frame.at<u32>(0) = r3;
    u32 r0_4 = call_0035153c(r2, frame.at(0).addr(), r6_1, frame.at(4).addr());
    if ((r0_4 & 0x80000000u) >> 0x1f) {  // (from the original)
        ea_2 = gptr<Local_0051a874_ea_2>(frame.at(0xc).addr());  // (from the original)
        r4_1 = ea_2->word_0;
        r5_2 = ea_2->word_4;
        r6_2 = ea_2->word_8;
        r7_1 = ea_2->word_c;
        guest::cpu()->r[4] = r4_1;
        guest::cpu()->r[5] = r5_2;
        guest::cpu()->r[6] = r6_2;
        guest::cpu()->r[7] = r7_1;
        return r5_1;
    }
    if (*frame.at<u32>(0) > r3) {
        *frame.at<u32>(0) = r3;
    }
    r5_1 = *frame.at<u32>(0);
    *gptr<u16>(r2 + (r5_1 << 1)) = 0;
    ea_2 = gptr<Local_0051a874_ea_2>(frame.at(0xc).addr());  // (from the original)
    r4_1 = ea_2->word_0;
    r5_2 = ea_2->word_4;
    r6_2 = ea_2->word_8;
    r7_1 = ea_2->word_c;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_1;
    return r5_1;
}

}  // namespace d_0051a874
GUEST_EXPORT(0x0051a874, d_0051a874::f_0051a874);

// f_0051a9f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051a9f0 {

inline constexpr guest::Function<0x00351528, u32(u32, u32, u32, u32)> call_00351528;  // (from the original)
inline constexpr guest::Function<0x0047edb8, u32(u32, u32, u32, u32)> call_0047edb8;  // (from the original)

u32 f_0051a9f0(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r5_1 = *frame.at<u32>(0x28);  // (from the original)
    u32 r4_1 = *frame.at<u32>(0x2c);  // (from the original)
    if (r5_1 == 0) {
        return 0u;
    }
    *frame.at<u32>(4) = r1;
    u32 r6_1 = 0u;
    *frame.at<u32>(0) = r4_1;
    u32 r0_2 = call_00351528(r5_1, frame.at(0).addr(), r0, frame.at(4).addr());
    r1 = guest::cpu()->r[1];
    if (!((r0_2 & 0x80000000u) >> 0x1f)) {  // (from the original)
        if (*frame.at<u32>(0) >= r4_1) {
            *frame.at<u32>(0) = r4_1 - 1u;
        }
        *gptr<u8>(r5_1 + *frame.at<u32>(0)) = 0;
        u32 r0_3 = call_0047edb8(r5_1, r2, r3, frame.at(8).addr());
        r1 = guest::cpu()->r[1];
        if (s32(r0_3) >= 0) {
            r6_1 = *frame.at<u32>(8);
        }
    }
    guest::cpu()->r[1] = r1;
    return r6_1;
}

}  // namespace d_0051a9f0
GUEST_EXPORT_FRAMED(0x0051a9f0, d_0051a9f0::f_0051a9f0, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0051aa84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051aa84 {

struct __attribute__((packed)) Local_0051aa84_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0051aa84_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0051aa84_ea_3, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x00135748, u32(u32)> call_00135748;  // (from the original)
inline constexpr guest::Function<0x001357ec, u32(u32, u32)> call_001357ec;  // (from the original)
inline constexpr guest::Function<0x0013f134, u32(u32, u32)> call_0013f134;  // (from the original)

void f_0051aa84(u32 r0, u32 r1) {
    u32 r13 = guest::cpu()->r[13];
    r13 -= 0x18;  // (from the original)
    u32 r7_1 = r0 + 0xa8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00135748(r7_1);
    u32 r6_1 = r1 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00135748(r6_1);
    *gptr<u32>(r1 + 0x20u) = 0;  // (from the original)
    *gptr<u32>(r1 + 0x24u) = 0;  // (from the original)
    gptr<Local_0051aa84_ea_3> ea_3 = gptr<Local_0051aa84_ea_3>(r1 + 0x18u);  // (from the original)
    ea_3->word_0 = ~2u;
    ea_3->word_4 = ~0u;
    *gptr<u8>(r1 + 0x28u) = 0;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_001357ec(r6_1, r1);
    guest::cpu()->r[13] = r13;
    call_0013f134(r0 + 0x90u, r1);  // (from the original)
    r13 += 0x18;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_001357ec(r7_1, r1);
    return;
}

}  // namespace d_0051aa84
GUEST_EXPORT(0x0051aa84, d_0051aa84::f_0051aa84);

// f_0051ad60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051ad60 {

struct __attribute__((packed)) Object_0051ad60_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_0051ad60_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0051ad60_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_0051ad60_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0051ad60_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0051ad60_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0051ad60_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0051ad60_ea_1, word_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x00135748, u32(u32, u32)> call_00135748;  // (from the original)
inline constexpr guest::Function<0x001357ec, u32(u32, u32)> call_001357ec;  // (from the original)
inline constexpr guest::Function<0x0013f000, u32(u32, u32)> call_0013f000;  // (from the original)
inline constexpr guest::Function<0x0013f134, u32(u32, u32)> call_0013f134;  // (from the original)

u32 f_0051ad60(u32 r0, gptr<Object_0051ad60_1> arg1, u32 r2, u32 r3) {
    u32 r1 = arg1.addr();
    u32 r1_1 = arg1->word_0 ^ ~2u;
    if ((arg1->word_4 ^ ~0u | r1_1) == 0 || r2 == 0 || r3 == 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r9_1 = r0 + 0xa8u;  // (from the original)
    call_00135748(r9_1, r1_1);
    u32 r5_1 = *gptr<u32>(r0 + 0x94u);  // (from the original)
    call_001357ec(r9_1, guest::cpu()->r[1]);
    r1_1 = guest::cpu()->r[1];
    if (r5_1 == 0) {
        return 0u;
    }
    u32 r0_1 = *gptr<u32>(r1);
    u32 r1_3 = *gptr<u32>(r1 + 4);
    gptr<Local_0051ad60_ea_1> ea_1 = gptr<Local_0051ad60_ea_1>(r5_1 + 0x18u);  // (from the original)
    ea_1->word_0 = r0_1;
    ea_1->word_4 = r1_3;
    ea_1->word_8 = r2;
    ea_1->word_c = r3;
    u32 r6_1 = r0 + 0xa8u;  // (from the original)
    call_00135748(r6_1, r1_3);
    call_0013f000(r0 + 0x90u, r5_1);  // (from the original)
    call_0013f134(r0 + 0x9cu, r5_1);  // (from the original)
    call_001357ec(r6_1, guest::cpu()->r[1]);
    return r5_1;
}

}  // namespace d_0051ad60
GUEST_EXPORT_FRAMED(0x0051ad60, d_0051ad60::f_0051ad60, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0051ae04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051ae04 {

inline constexpr guest::Function<0x00125e08, u32(u32, u32, u32, u32)> call_00125e08;  // (from the original)
inline constexpr guest::Function<0x0012f154, u32(u32, u32, u32, u32)> call_0012f154;  // (from the original)
inline constexpr guest::Function<0x0013f134, u32(u32, u32, u32, u32)> call_0013f134;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

u32 f_0051ae04(u32 r0) {
    u32 r0_1 = call_00301d0c(r0, 0x51ab9cu, 0x30u, 3u);  // (from the original)
    u32 r0_3 = call_00125e08(r0_1 + 0x90u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_5 = call_00125e08(r0_3 + 0xcu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r5 = r0_5 - 0x9cu;  // (from the original)
    u32 ea_1 = r0_5 + 0xcu;  // (from the original)
    *gptr<u32>(ea_1) = 0;
    call_0012f154(ea_1, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r2 = guest::cpu()->r[2];
    u32 r3 = guest::cpu()->r[3];
    u32 r4 = 0u;
    do {
        call_0013f134(r5 + 0x90u, r5 + (r4 + (r4 << 1) << 4), r2, r3);  // (from the original)
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 3);
    return r5;
}

}  // namespace d_0051ae04
GUEST_EXPORT_FRAMED(0x0051ae04, d_0051ae04::f_0051ae04, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0051b048: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051b048 {

inline constexpr guest::Function<0x0047f3a0, u32(u32, u32, u32, u32)> call_0047f3a0;  // (from the original)

u32 f_0051b048() {
    return call_0047f3a0(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0051b048
GUEST_EXPORT(0x0051b048, d_0051b048::f_0051b048);

// f_0051b04c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051b04c {

inline guest::global<u8, 0x00953644> global_00953644;  // (from the original)

u32 f_0051b04c() {
    return u32(s32(s8(*global_00953644))) ^ 1u;
}

}  // namespace d_0051b04c
GUEST_EXPORT(0x0051b04c, d_0051b04c::f_0051b04c);

// f_0051b060: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051b060 {

inline guest::global<u8, 0x00953644> global_00953644;  // (from the original)
inline constexpr guest::Function<0x0047f3a0, u32(u32, u32, u32, u32)> call_0047f3a0;  // (from the original)

u32 f_0051b060(u32 r0, u32 r1) {
    u32 r0_1 = call_0047f3a0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 == 0) {
        return r0_1;
    }
    *global_00953644 = 1;
    guest::cpu()->r[1] = 0x953644u;  // (from the original)
    return 1u;
}

}  // namespace d_0051b060
GUEST_EXPORT_FRAMED(0x0051b060, d_0051b060::f_0051b060, 0x4010);  // pushes {r4, lr} first, as the original

// f_0051b728: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051b728 {

struct __attribute__((packed)) Local_0051b728_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0051b728_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0051b728_ea_1, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x0087c084> global_0087c084;  // (from the original)
inline guest::global<u32, 0x0087c088> global_0087c088;  // (from the original)
inline guest::global<u32, 0x00a827f4> global_00a827f4;  // (from the original)
inline guest::global<u32, 0x00a827f8> global_00a827f8;  // (from the original)
inline guest::global<u8, 0x00a82b88> global_00a82b88;  // (from the original)

u32 f_0051b728() {
    u32 r13 = guest::cpu()->r[13];
    r13 -= 4u;
    u32 r3_1 = *global_00a827f4;
    u32 r0_1 = *global_0087c088;
    u32 r2_1 = *global_00a827f8;
    if (r3_1 == *global_0087c084) {
        if (r3_1 == 0) {
            if (((r2_1 | r0_1) & 1u) == 0) {
                r13 += 4u;
                guest::cpu()->r[13] = r13;
                return 1u;
            }
        }
        if (r2_1 == r0_1) {
            r13 += 4u;
            guest::cpu()->r[13] = r13;
            return 1u;
        }
    }
    gptr<Local_0051b728_ea_1> ea_1 = gptr<Local_0051b728_ea_1>(0x87c08cu);  // (from the original)
    u32 r0_2 = ea_1->word_4;
    if (r3_1 == ea_1->word_0) {
        if (r3_1 == 0) {
            if (((r2_1 | r0_2) & 1u) == 0) {
                r13 += 4u;
                guest::cpu()->r[13] = r13;
                return 1u;
            }
        }
        if (r2_1 == r0_2) {
            r13 += 4u;
            guest::cpu()->r[13] = r13;
            return 1u;
        }
    }
    *global_00a82b88 = 1;
    r13 += 4u;
    guest::cpu()->r[13] = r13;
    return 0u;
}

}  // namespace d_0051b728
GUEST_EXPORT(0x0051b728, d_0051b728::f_0051b728);

// f_0051b87c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051b87c {

struct __attribute__((packed)) Object_0051b87c_0 {
    u8 unknown_0[0xb0];  // (not used here)
    u8 byte_b0;
    u8 unknown_b1[0x167];  // (not used here)
    u32 word_218;
    u8 unknown_21c[0x15c];  // (not used here)
    u32 word_378;
};
GUEST_OFFSET(Object_0051b87c_0, byte_b0, 0xb0);  // (from the original)
GUEST_OFFSET(Object_0051b87c_0, word_218, 0x218);  // (from the original)
GUEST_OFFSET(Object_0051b87c_0, word_378, 0x378);  // (from the original)

inline constexpr guest::Function<0x003da354, u32(u32, u32, u32, u32)> call_003da354;  // (from the original)
inline constexpr guest::Function<0x005cecfc, u32(u32, u32, u32, u32)> call_005cecfc;  // (from the original)

u32 f_0051b87c(gptr<Object_0051b87c_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    guest::cpu()->r[13] -= 8u;
    u32 r0_1 = arg0->byte_b0;
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        return r0_1;
    }
    call_003da354(r0 + 0xb4u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r1_1 = arg0->word_218;
    arg0->word_378 = r1_1;
    arg0->byte_b0 = 0;
    guest::cpu()->r[13] += 8u;
    return call_005cecfc(0u, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0051b87c
GUEST_EXPORT(0x0051b87c, d_0051b87c::f_0051b87c);

// f_0051bbbc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051bbbc {

struct __attribute__((packed)) Local_0051bbbc_ea_2 {
    u32 word_0;
    u8 unknown_4[0x2c0];  // (not used here)
    u32 word_2c4;
};
GUEST_OFFSET(Local_0051bbbc_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0051bbbc_ea_2, word_2c4, 0x2c4);  // (from the original)

inline guest::global<u32, 0x0087c084> global_0087c084;  // (from the original)
inline guest::global<u32, 0x0087c088> global_0087c088;  // (from the original)
inline guest::global<u32, 0x00a827f4> global_00a827f4;  // (from the original)
inline guest::global<u32, 0x00a827f8> global_00a827f8;  // (from the original)
inline constexpr guest::Function<0x0011d258, u32(u32, u32, u32)> call_0011d258;  // (from the original)
inline constexpr guest::Function<0x003da4ac, u32(u32, u32, u32, u32)> call_003da4ac;  // (from the original)
inline constexpr guest::Function<0x003da4cc, u32(u32)> call_003da4cc;  // (from the original)

void f_0051bbbc(u32 r0, u32 r1, u32 r2) {
    u32 ea_1 = 0;
    gptr<Local_0051bbbc_ea_2> ea_2 = gptr<Local_0051bbbc_ea_2>(0u);
    u32 r0_1 = call_003da4ac(r0, r1, r2, guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    if (r0_1 == 0) {
        return;
    }
    if (r0 == 3u) {
        u32 r0_2 = call_0011d258(r0_1, r1_1, r2_1);
        r1_1 = guest::cpu()->r[1];
        if (r0_2 != 0) {
            return;
        }
        call_003da4cc(0xa8289cu);  // (from the original)
    }
    u32 r2_2 = *global_00a827f4;
    r1_1 = *global_0087c084;
    u32 r0_4 = *global_0087c088;
    if (r2_2 != r1_1) {
        guest::cpu()->r[1] = r1_1;
        return;
    }
    if (r2_2 == 0) {
        if (((*global_00a827f8 | r0_4) & 1u) == 0) {
            r1_1 = 1u;
            ea_1 = 0xa82898u;  // (from the original)
            *gptr<u8>(ea_1) = u8(r1_1);
            ea_2 = gptr<Local_0051bbbc_ea_2>(0xa8289cu);  // (from the original)
            ea_2->word_0 = r0;
            ea_2->word_2c4 = ~0u;
            guest::cpu()->r[1] = r1_1;
            return;
        }
    }
    r1_1 = *global_00a827f8;
    if (r1_1 != r0_4) {
        guest::cpu()->r[1] = r1_1;
        return;
    }
    r1_1 = 1u;
    ea_1 = 0xa82898u;  // (from the original)
    *gptr<u8>(ea_1) = u8(r1_1);
    ea_2 = gptr<Local_0051bbbc_ea_2>(0xa8289cu);  // (from the original)
    ea_2->word_0 = r0;
    ea_2->word_2c4 = ~0u;
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_0051bbbc
GUEST_EXPORT_FRAMED(0x0051bbbc, d_0051bbbc::f_0051bbbc, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0051bc4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051bc4c {

struct __attribute__((packed)) Local_0051bc4c_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0051bc4c_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0051bc4c_ea_2, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_0051bc4c_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0051bc4c_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0051bc4c_ea_3, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x0087c090> global_0087c090;  // (from the original)
inline guest::global<u32, 0x00a827f4> global_00a827f4;  // (from the original)
inline guest::global<u32, 0x00a827f8> global_00a827f8;  // (from the original)
inline constexpr guest::Function<0x0081bf98, u32(u32, u32, u32)> call_0081bf98;  // (from the original)

void f_0051bc4c() {
    u32 r3_1 = *gptr<u32>(0x87c08cu);  // (from the original)
    gptr<Local_0051bc4c_ea_2> ea_2 = gptr<Local_0051bc4c_ea_2>(0x87c0a4u);  // (from the original)
    u32 r1_1 = ea_2->word_0;
    u32 r2_1 = ea_2->word_4;
    u32 r12_1 = *global_00a827f4;
    u32 r0_1 = *global_0087c090;
    if (r12_1 != r3_1) {
        return;
    }
    u32 r3_2 = *global_00a827f8;
    if (r12_1 == 0) {
        if (((r3_2 | r0_1) & 1u) == 0) {
            goto L_51bc9c;
        }
    }
    if (r3_2 != r0_1) {
        return;
    }
L_51bc9c:;
    call_0081bf98(0xa827e8u, r1_1, r2_1);  // (from the original)
    gptr<Local_0051bc4c_ea_3> ea_3 = gptr<Local_0051bc4c_ea_3>(0xa82888u);  // (from the original)
    ea_3->word_0 = 1;
    ea_3->word_4 = 0;
    return;
}

}  // namespace d_0051bc4c
GUEST_EXPORT_FRAMED(0x0051bc4c, d_0051bc4c::f_0051bc4c, 0x4010);  // pushes {r4, lr} first, as the original

// f_0051c098: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051c098 {

struct __attribute__((packed)) Object_0051c098_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x8];  // (not used here)
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Object_0051c098_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0051c098_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0051c098_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0051c098_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0051c098_0, word_1c, 0x1c);  // (from the original)

struct __attribute__((packed)) Local_0051c098_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0051c098_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0051c098_ea_1, word_4, 0x4);  // (from the original)


void f_0051c098(gptr<Object_0051c098_0> arg0, u32 r1, u32 r2) {
    u32 r3 = 0u;
    u32 r4 = arg0->word_4;
    u32 r6 = arg0->word_8;
    if (r4 == 0) {
        return;
    }
L_51c0b0:;
    gptr<Local_0051c098_ea_1> ea_1 = gptr<Local_0051c098_ea_1>(r6 + (r3 + (r3 << 1) << 2) + 4u);
    u32 r5_1 = ea_1->word_0;
    u32 r12_1 = ea_1->word_4;
    if (r5_1 != r1) {
        goto L_51c0f8;
    }
    if (r5_1 == 0) {
        if (((r12_1 | r2) & 1u) == 0) {
            arg0->word_14 = r1;
            arg0->word_18 = r2;
            arg0->word_1c = r3;
            return;
        }
    }
    if (r12_1 != r2) {
        goto L_51c0f8;
    }
    arg0->word_14 = r1;
    arg0->word_18 = r2;
    arg0->word_1c = r3;
    return;
L_51c0f8:;
    r3 += 1u;
    if (r3 != r4) {
        guest::preempt();
        goto L_51c0b0;
    }
    return;
}

}  // namespace d_0051c098
GUEST_EXPORT_FRAMED(0x0051c098, d_0051c098::f_0051c098, 0x70);  // pushes {r4, r5, r6} first, as the original

// f_0051c170: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051c170 {

inline guest::global<u32, 0x0087c114> global_0087c114;  // (from the original)
inline guest::global<u32, 0x0087c118> global_0087c118;  // (from the original)

void f_0051c170(gptr<nfp__Framework__Step> arg0, u32 r1) {
    arg0->word_0 = 0x903690;  // (from the original)
    arg0->word_4 = 0;
    arg0->word_8 = 0;
    float S0_1 = std::bit_cast<float>(*global_0087c114);
    float S1_1 = std::bit_cast<float>(*global_0087c118);
    arg0->word_14 = std::bit_cast<u32>(S0_1);
    arg0->word_18 = std::bit_cast<u32>(S1_1);
    arg0->word_1c = 0;
    arg0->word_c = 0x9036a0;  // (from the original)
    arg0->word_20 = 0;
    arg0->byte_24 = 0;
    arg0->word_10 = r1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return;
}

}  // namespace d_0051c170
GUEST_EXPORT(0x0051c170, d_0051c170::f_0051c170);

// f_0051ca20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051ca20 {

inline constexpr guest::Function<0x00308e80, u32(u32, u32, u32, u32)> call_00308e80;  // (from the original)

u32 f_0051ca20(u32 r0) {
    u32 r0_1 = call_00308e80(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return (r0_1 == 0x26u || r0_1 == 0xau) ? 1u : 0u;  // (from the original)
}

}  // namespace d_0051ca20
GUEST_EXPORT_FRAMED(0x0051ca20, d_0051ca20::f_0051ca20, 0x4010);  // pushes {r4, lr} first, as the original

// f_0051cbdc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051cbdc {

struct __attribute__((packed)) Object_0051cbdc_0 {
    u8 unknown_0[0x9a8];  // (not used here)
    u8 byte_9a8;
    u8 unknown_9a9[0x3];  // (not used here)
    u16 half_9ac;
};
GUEST_OFFSET(Object_0051cbdc_0, byte_9a8, 0x9a8);  // (from the original)
GUEST_OFFSET(Object_0051cbdc_0, half_9ac, 0x9ac);  // (from the original)


u32 f_0051cbdc(gptr<Object_0051cbdc_0> arg0) {
    u32 r1_1 = 0x18fu;  // (from the original)
    if (u32(arg0->byte_9a8) == 0) {
        r1_1 = arg0->half_9ac;
    }
    guest::cpu()->r[1] = r1_1;
    return r1_1;
}

}  // namespace d_0051cbdc
GUEST_EXPORT(0x0051cbdc, d_0051cbdc::f_0051cbdc);

// f_0051ccc0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051ccc0 {


u32 f_0051ccc0(u32 r0) {
    u32 cf_1 = r0 >= 8u;
    u32 r0_1 = 0xa83108u;  // (from the original)
    if (!cf_1) {
        r0_1 += (r0 + (r0 << 1) << 4);
    }
    return r0_1;
}

}  // namespace d_0051ccc0
GUEST_EXPORT(0x0051ccc0, d_0051ccc0::f_0051ccc0);

// f_0051cd48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051cd48 {

inline constexpr guest::Function<0x00111611, u32(u32, u32)> call_00111610;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb310, u32(u32, u32)> call_002fb310;  // (from the original)

u32 f_0051cd48(u32 r0, u32 r1) {
    u32 r0_1 = call_002fae84(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_2 = call_002fb310(r0_1, guest::cpu()->r[1]);
    u32 r0_3 = call_002fae84(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_00111610(r0_2 + 4u, r0_3 + 0x62138u);  // (from the original)
    return 1u;
}

}  // namespace d_0051cd48
GUEST_EXPORT_FRAMED(0x0051cd48, d_0051cd48::f_0051cd48, 0x4010);  // pushes {r4, lr} first, as the original

// f_0051d168: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051d168 {

inline constexpr guest::Function<0x0051f9cc, u32(u32, u32)> call_0051f9cc;  // (from the original)

u32 f_0051d168(u32 r0) {
    u32 r0_1 = call_0051f9cc(r0, guest::cpu()->r[1]);
    if (r0_1 >= 0xc8u) {  // (from the original)
        return 0u;
    }
    return r0_1 >= 0x3du ? 1u : 2u;  // (from the original)
}

}  // namespace d_0051d168
GUEST_EXPORT_FRAMED(0x0051d168, d_0051d168::f_0051d168, 0x4010);  // pushes {r4, lr} first, as the original

// f_0051d18c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051d18c {

inline constexpr guest::Function<0x002fb328, u32(u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x003009a9, u32(u32, u32)> call_003009a8;  // (from the original)
inline constexpr guest::Function<0x0051f9cc, u32(u32, u32)> call_0051f9cc;  // (from the original)

u32 f_0051d18c(u32 r0, u32 r1) {
    u32 r0_1 = call_002fb328(r0);
    u32 r6_1 = r0_1 + 0x292a4u;  // (from the original)
    u32 r0_2 = call_003009a8(r6_1, r0);
    u32 r0_3 = call_003009a8(r6_1, r1);
    if (r0_2 != 0 && r0_3 != 0) {
        u32 r0_4 = call_0051f9cc(r0_2, r0_3);
        if (r0_4 >= 0xc8u) {  // (from the original)
            return 0u;
        }
        if (r0_4 >= 0x3du) {  // (from the original)
            return 1u;
        }
    }
    return 2u;
}

}  // namespace d_0051d18c
GUEST_EXPORT_FRAMED(0x0051d18c, d_0051d18c::f_0051d18c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0051d264: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051d264 {

struct __attribute__((packed)) Local_0051d264_r1_1 {
    u8 unknown_0[0x9a];  // (not used here)
    u8 byte_9a;
};
GUEST_OFFSET(Local_0051d264_r1_1, byte_9a, 0x9a);  // (from the original)

inline guest::global<u32, 0x0095386c> global_0095386c;  // (from the original)
inline guest::global<u32, 0x00aaf14c> global_00aaf14c;  // (from the original)

u32 f_0051d264() {
    gptr<Local_0051d264_r1_1> r1_1 = gptr<Local_0051d264_r1_1>(*global_0095386c);
    u32 r0_1 = *global_00aaf14c;
    r1_1->byte_9a = 0xff;  // (from the original)
    if (r0_1 == 0) {
        guest::cpu()->r[1] = r1_1.addr();
        return r0_1;
    }
    u32 r0_2 = *gptr<u8>(r0_1 + 0x8f88u);  // (from the original)
    if (!((r0_2 << 0x19) >> 0x1f)) {  // (from the original)
        guest::cpu()->r[1] = r1_1.addr();
        return r0_2;
    }
    if ((r0_2 >> 7) != 0) {
        guest::cpu()->r[1] = r1_1.addr();
        return r0_2;
    }
    u32 r0_3 = r0_2 << 0x1a;  // (from the original)
    if (0xau != r0_3 >> 0x1c) {  // (from the original)
        r0_3 >>= 0x1c;  // (from the original)
        r1_1->byte_9a = u8(r0_3);
    }
    guest::cpu()->r[1] = r1_1.addr();
    return r0_3;
}

}  // namespace d_0051d264
GUEST_EXPORT(0x0051d264, d_0051d264::f_0051d264);

// f_0051d710: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051d710 {

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32)> call_002f8574;  // (from the original)
inline constexpr guest::Function<0x00301444, u32(u32, u32, u32, u32)> call_00301444;  // (from the original)
inline constexpr guest::Function<0x0051e7d4, u32(u32, u32, u32, u32)> call_0051e7d4;  // (from the original)

void f_0051d710(u32 r0, u32 r1, u32 r2) {
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    u32 r5_1 = 0xa82b90u + (r1 + (r1 << 3) + (r1 << 4) << 1);  // (from the original)
    call_00301444(r1 >= 4u ? 0xa82b90u : r5_1, 0x32u, r2, guest::cpu()->r[3]);  // (from the original)
    u32 r0_2 = 0xa82b90u;  // (from the original)
    if (r1 < 4u) {
        r0_2 = r5_1;
    }
    call_002f8574(r0_2, r0, 0x32u);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    if (r1 != 0) {
        guest::cpu()->r[13] += 0x18u;  // (from the original)
        call_0051e7d4(0xa82b90u, 2u, r2_1, guest::cpu()->r[3]);
        return;  // (from the original)
    }
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_0051d710
GUEST_EXPORT(0x0051d710, d_0051d710::f_0051d710);

// f_0051d7f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051d7f0 {

inline constexpr guest::Function<0x00301444, u32(u32, u32, u32, u32)> call_00301444;  // (from the original)
inline constexpr guest::Function<0x0051e7d4, u32(u32, u32, u32, u32)> call_0051e7d4;  // (from the original)

u32 f_0051d7f0(u32 r0, u32 r1_unused, u32 r2) {
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    u32 r0_1 = 0xa82b90u;  // (from the original)
    if (r0 < 4u) {
        r2 = r0 + (r0 << 3);
        r0_1 = 0xa82b90u + (r2 + (r0 << 4) << 1);  // (from the original)
    }
    u32 r0_2 = call_00301444(r0_1, 0x32u, r2, guest::cpu()->r[3]);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    if (r0 != 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return call_0051e7d4(0xa82b90u, 3u, r2_1, guest::cpu()->r[3]);  // (from the original)
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_0051d7f0
GUEST_EXPORT(0x0051d7f0, d_0051d7f0::f_0051d7f0);

// f_0051d8e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051d8e8 {


u32 f_0051d8e8(u32 r0) {
    u32 cf_1 = r0 >= 0x30u;  // (from the original)
    u32 r0_1 = 0xa83288u;  // (from the original)
    if (!cf_1) {
        r0_1 += (r0 << 2);
    }
    guest::cpu()->r[1] = r0;
    return r0_1;
}

}  // namespace d_0051d8e8
GUEST_EXPORT(0x0051d8e8, d_0051d8e8::f_0051d8e8);

// f_0051dacc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051dacc {

inline constexpr guest::Function<0x00301444, u32(u32, u32, u32, u32)> call_00301444;  // (from the original)
inline constexpr guest::Function<0x0051e7d4, u32(u32, u32, u32)> call_0051e7d4;  // (from the original)

void f_0051dacc(u32 r0_unused, u32 r1_unused, u32 r2) {
    u32 r4 = 0u;
    do {
        u32 r5_1 = r4 & 0xffu;  // (from the original)
        u32 r0_1 = 0xa82b90u;  // (from the original)
        if (r5_1 < 4u) {
            r2 = r5_1 + (r5_1 << 3);
            r0_1 = 0xa82b90u + (r2 + (r5_1 << 4) << 1);  // (from the original)
        }
        call_00301444(r0_1, 0x32u, r2, guest::cpu()->r[3]);  // (from the original)
        r2 = guest::cpu()->r[2];
        if (r5_1 != 0) {
            call_0051e7d4(0xa82b90u, 3u, r2);  // (from the original)
            r2 = guest::cpu()->r[2];
        }
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 4);
    return;
}

}  // namespace d_0051dacc
GUEST_EXPORT_FRAMED(0x0051dacc, d_0051dacc::f_0051dacc, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0051dbbc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051dbbc {

inline constexpr guest::Function<0x001198e9, u32(u32, u32)> call_001198e8;  // (from the original)
inline constexpr guest::Function<0x0011a1c9, u32(u32, u32)> call_0011a1c8;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x003009a9, u32(u32, u32)> call_003009a8;  // (from the original)
inline constexpr guest::Function<0x0051f9cc, u32(u32, u32)> call_0051f9cc;  // (from the original)
inline constexpr guest::Function<0x00565c10, u32(u32, u32)> call_00565c10;  // (from the original)

u32 f_0051dbbc(u32 r0, u32 r1, float S0) {
    u32 r1_2 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    float S0_3 = 0;
    u32 r0_1 = call_002fb328(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_3 = call_003009a8(r0_1 + 0x292a4u, r0);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    u32 r8 = 0u;
    u32 r6 = r0_3;
    u32 r7 = ~0u;
    u32 r9 = r8;
    u32 r0_4 = call_002fb328(r0_3, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    S0 = guest::cpu()->s[0];
    u32 r10 = r0_4 + 0x292a4u;  // (from the original)
    u32 r4 = 0u;
    do {
        guest::cpu()->s[0] = S0;
        u32 r0_5 = call_003009a8(r10, r4);
        r1_2 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        u32 zf_1 = r0_5 == 0;
        if (!zf_1) {
            zf_1 = r6 == r0_5;
        }
        if (zf_1) {
            goto L_51dc90;
        }
        r0_6 = call_001198e8(r0_5, r1_2);
        r1_2 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        if (r0_6 != 0) {
            goto L_51dc90;
        }
        r0_7 = call_0011a1c8(r0_5, r1_2);
        r1_2 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        if (r0_7 != 0) {
            goto L_51dc90;
        }
        r0_8 = 0u;
        r1_2 = r0_5;
        if (r6 != 0) {
            r0_8 = call_0051f9cc(r6, r1_2);
            r1_2 = guest::cpu()->r[1];
            S0 = guest::cpu()->s[0];
        }
        if (r0_8 > r8) {
            r8 = r0_8;
            r7 = r4;
            r9 = 0u;
            goto L_51dc90;
        }
        if (r8 == 0 || r0_8 != r8) {
            goto L_51dc90;
        }
        r9 += 1u;
        S0_3 = float(std::bit_cast<u32>(std::bit_cast<float>(r9)));
        guest::cpu()->s[0] = S0_3;
        call_00565c10(r0_8, r1_2);
        r1_2 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        if (s32(std::bit_cast<u32>(S0)) < 0x3f800000) {  // (from the original)
            r7 = r4;
        }
L_51dc90:;
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 0xa);  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->s[0] = S0;
    return r7;
}

}  // namespace d_0051dbbc
GUEST_EXPORT_FRAMED(0x0051dbbc, d_0051dbbc::f_0051dbbc, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0051dd50: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051dd50 {

inline constexpr guest::Function<0x002fb430, u32(u32, u32, u32, u32)> call_002fb430;  // (from the original)

void f_0051dd50() {
    call_002fb430(guest::cpu()->r[0], 0xa83394u, guest::cpu()->r[2], guest::cpu()->r[3]);
    return;  // (from the original)
}

}  // namespace d_0051dd50
GUEST_EXPORT(0x0051dd50, d_0051dd50::f_0051dd50);

// f_0051dfe4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051dfe4 {

struct __attribute__((packed)) Object_0051dfe4_0 {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
};
GUEST_OFFSET(Object_0051dfe4_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0051dfe4_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0051dfe4_0, byte_8, 0x8);  // (from the original)


void f_0051dfe4(gptr<Object_0051dfe4_0> arg0) {
    arg0->byte_8 = 7;
    arg0->word_0 = 0;
    arg0->word_4 = 0;
    guest::cpu()->r[1] = 0u;
    return;
}

}  // namespace d_0051dfe4
GUEST_EXPORT(0x0051dfe4, d_0051dfe4::f_0051dfe4);

// f_0051dffc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051dffc {

struct __attribute__((packed)) Object_0051dffc_0 {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
    u8 unknown_9[0x1];  // (not used here)
    u16 half_a;
    u8 byte_c;
};
GUEST_OFFSET(Object_0051dffc_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0051dffc_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0051dffc_0, byte_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0051dffc_0, half_a, 0xa);  // (from the original)
GUEST_OFFSET(Object_0051dffc_0, byte_c, 0xc);  // (from the original)


void f_0051dffc(gptr<Object_0051dffc_0> arg0) {
    arg0->word_0 = 0;
    arg0->word_4 = 0;
    arg0->byte_8 = 0;
    arg0->half_a = 0;
    arg0->byte_c = 0;
    return;
}

}  // namespace d_0051dffc
GUEST_EXPORT(0x0051dffc, d_0051dffc::f_0051dffc);

// f_0051e018: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051e018 {

inline constexpr guest::Function<0x002e6944, u32(u32)> call_002e6944;  // (from the original)

u32 f_0051e018(u32 r0) {
    u32 r0_2 = call_002e6944(r0 + 0x1cu);  // (from the original)
    return r0_2 - 0x1cu;  // (from the original)
}

}  // namespace d_0051e018
GUEST_EXPORT_FRAMED(0x0051e018, d_0051e018::f_0051e018, 0x4010);  // pushes {r4, lr} first, as the original

// f_0051e6fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051e6fc {

inline guest::global<u32, 0x0095386c> global_0095386c;  // (from the original)

u32 f_0051e6fc(u32 r0, u32 r1) {
    u32 r3 = 0;
    u32 res_1 = 0;
    u32 res_2 = 0;
    u32 res_3 = 0;
    u32 r2 = 0xffffu;  // (from the original)
    u32 r4 = 0u;
    u32 r5 = 0xbu;  // (from the original)
    u32 r6 = r0 + 0x7b8u;  // (from the original)
    do {
        u32 r12_1 = r6;
        if (r4 < 0xbu) {  // (from the original)
            r12_1 = r6 + (r4 << 1);
        }
        res_1 = r5 - 1u;
        r5 = res_1;
        r4 += 1u;
        *gptr<u16>(r12_1) = u16(r2);
        guest::preempt();
    } while (res_1 != 0);
    *gptr<u8>(r0 + 0x80eu) = 0xa5;  // (from the original)
    *gptr<u8>(r0 + 0x80du) = 0xa5;  // (from the original)
    if (r1 != 0) {
        r1 = r0 + 0x7ceu;  // (from the original)
        r4 = 1u;
        r3 = r2;
        u32 r12 = r4;
        *gptr<u16>(r1) = u16(r2);
        do {
            u32 r4_1 = r4 + 1u;
            *gptr<u16>(r1 + (r4 << 1)) = u16(r3);
            r12 += 2u;
            res_2 = r12 - 9u;
            r4 = r4_1 + 1u;
            *gptr<u16>(r1 + (r4_1 << 1)) = u16(r3);
            guest::preempt();
        } while (res_2 >> 0x1f != ((r12 ^ 9u) & (r12 ^ res_2)) >> 0x1f);  // (from the original)
    }
    r1 = 0u;
    *gptr<u16>(r0 + 0x811u) = u16(r1);  // (from the original)
    r0 = *global_0095386c;
    if (r0 == 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    } else {
        r3 = 0xbu;  // (from the original)
    }
    do {
        u32 r12_2 = r0 + (r1 << 1);
        res_3 = r3 - 1u;
        r3 = res_3;
        r1 += 1u;
        *gptr<u16>(r12_2 + 0x6cu) = u16(r2);  // (from the original)
        guest::preempt();
    } while (res_3 != 0);
    r1 = 0xa5u;  // (from the original)
    *gptr<u8>(r0 + 0x82u) = u8(r1);  // (from the original)
    *gptr<u8>(r0 + 0x83u) = u8(r1);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0051e6fc
GUEST_EXPORT_FRAMED(0x0051e6fc, d_0051e6fc::f_0051e6fc, 0x70);  // pushes {r4, r5, r6} first, as the original

// f_0051f568: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051f568 {

struct __attribute__((packed)) Object_0051f568_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_0051f568_0, byte_0, 0x0);  // (from the original)


void f_0051f568(gptr<Object_0051f568_0> arg0, u32 r1) {
    u32 r1_1 = r1 + u32(arg0->byte_0);
    if (s32(r1_1) < 0) {
        arg0->byte_0 = 0;
        guest::cpu()->r[1] = 0u;
        return;
    }
    if (r1_1 >= 0x20u) {  // (from the original)
        r1_1 = 0x20u;  // (from the original)
    }
    arg0->byte_0 = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_0051f568
GUEST_EXPORT(0x0051f568, d_0051f568::f_0051f568);

// f_0051f58c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051f58c {

struct __attribute__((packed)) Object_0051f58c_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_0051f58c_0, byte_0, 0x0);  // (from the original)


void f_0051f58c(gptr<Object_0051f58c_0> arg0) {
    u32 r1_1 = u32(arg0->byte_0) >> 1;
    if (r1_1 > 0x20u) {  // (from the original)
        r1_1 = 0x20u;  // (from the original)
    }
    arg0->byte_0 = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_0051f58c
GUEST_EXPORT(0x0051f58c, d_0051f58c::f_0051f58c);

// f_0051f84c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051f84c {

struct __attribute__((packed)) Object_0051f84c_0 {
    u8 unknown_0[0x9a8];  // (not used here)
    u8 byte_9a8;
};
GUEST_OFFSET(Object_0051f84c_0, byte_9a8, 0x9a8);  // (from the original)

inline constexpr guest::Function<0x0071b8d0, u32(u32, u32, u32, u32)> call_0071b8d0;  // (from the original)

u32 f_0051f84c(gptr<Object_0051f84c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1_1 = arg0->byte_9a8;
    if (r1_1 != 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r0_2 = call_0071b8d0((r0 + 0x9a8u) + 4u, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    if (r0_2 < 8u) {
        return r0_2;
    }
    return 0u;
}

}  // namespace d_0051f84c
GUEST_EXPORT_FRAMED(0x0051f84c, d_0051f84c::f_0051f84c, 0x4010);  // pushes {r4, lr} first, as the original

// f_0051f874: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051f874 {


u32 f_0051f874(u32 r0, u32 r1) {
    u32 res_1 = 0;
    u32 r5_2 = 0;
    u32 res_2 = 0;
    u32 res_3 = 0;
    u32 r3 = 0u;
    if (r0 >= 0x23u || r1 >= 0x23u) {  // (from the original)
        return r3;
    }
    u32 r2 = 0x880624u;  // (from the original)
    u32 r4 = 1u;
    u32 r12 = r4;
    u32 r6 = r4 + u32(s32(r2 + 0xcu - r2) >> 1);  // (from the original)
    do {
        u32 r5_1 = *gptr<u8>(r2);
        if (r5_1 != r0 || u32(*gptr<u8>(r2 + 1u)) != r1) {
            if (r5_1 != r1 || u32(*gptr<u8>(r2 + 1u)) != r0) {
                goto L_51f8d4;
            }
        }
        if (r2 != 0) {
            return 0x80u;  // (from the original)
        }
        goto L_51f8e4;
L_51f8d4:;
        r12 += 1u;
        res_1 = r6 - r12;
        r2 += 2u;
        guest::preempt();
    } while (res_1 != 0 && res_1 >> 0x1f == ((r6 ^ r12) & (r6 ^ res_1)) >> 0x1f);  // (from the original)
L_51f8e4:;
    if (r0 == r1) {
        goto L_51f938;
    }
    r2 = 0x880540u;  // (from the original)
    if (r0 >= 0x23u || r1 >= 0x23u) {  // (from the original)
        goto L_51f950;
    }
    r12 = 1u;
    r6 = r4 + u32(s32(r2 + 8u - r2) >> 1);
L_51f90c:;
    r5_2 = *gptr<u8>(r2);
    if (r5_2 != r0 || u32(*gptr<u8>(r2 + 1u)) != r1) {
        if (r5_2 != r1 || u32(*gptr<u8>(r2 + 1u)) != r0) {
            goto L_51f940;
        }
    }
    if (r2 == 0) {
        goto L_51f950;
    }
L_51f938:;
    return 0x40u;  // (from the original)
L_51f940:;
    r12 += 1u;
    res_2 = r6 - r12;
    r2 += 2u;
    if (res_2 != 0 && res_2 >> 0x1f == ((r6 ^ r12) & (r6 ^ res_2)) >> 0x1f) {  // (from the original)
        guest::preempt();
        goto L_51f90c;
    }
L_51f950:;
    r2 = 0x880630u;  // (from the original)
    if (r0 >= 0x23u || r1 >= 0x23u) {  // (from the original)
        return 0x20u;  // (from the original)
    }
    r12 = 1u;
    r4 += u32(s32(r2 + 0xau - r2) >> 1);  // (from the original)
    do {
        u32 r5_3 = *gptr<u8>(r2);
        if (r5_3 != r0 || u32(*gptr<u8>(r2 + 1u)) != r1) {
            if (r5_3 != r1 || u32(*gptr<u8>(r2 + 1u)) != r0) {
                goto L_51f9a0;
            }
        }
        if (r2 != 0) {
            return r3;
        }
        return 0x20u;  // (from the original)
L_51f9a0:;
        r12 += 1u;
        res_3 = r4 - r12;
        r2 += 2u;
        guest::preempt();
    } while (res_3 != 0 && res_3 >> 0x1f == ((r4 ^ r12) & (r4 ^ res_3)) >> 0x1f);  // (from the original)
    return 0x20u;  // (from the original)
}

}  // namespace d_0051f874
GUEST_EXPORT_FRAMED(0x0051f874, d_0051f874::f_0051f874, 0x1f0);  // pushes {r4, r5, r6, r7, r8} first, as the original

// f_0051fb04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051fb04 {

struct __attribute__((packed)) Local_0051fb04_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0051fb04_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0051fb04_ea_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_0051fb04_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0051fb04_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0051fb04_ea_2, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_0051fb04_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_0051fb04_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0051fb04_ea_3, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0051fb04_ea_3, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0051fb04_ea_3, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_0051fb04_ea_3, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_0051fb04_ea_3, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_0051fb04_ea_3, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_0051fb04_ea_3, word_1c, 0x1c);  // (from the original)

struct __attribute__((packed)) Local_0051fb04_ea_4 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_0051fb04_ea_4, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0051fb04_ea_4, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0051fb04_ea_4, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0051fb04_ea_4, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_0051fb04_ea_4, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_0051fb04_ea_4, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_0051fb04_ea_4, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_0051fb04_ea_4, word_1c, 0x1c);  // (from the original)

struct __attribute__((packed)) Local_0051fb04_ea_5 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_0051fb04_ea_5, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0051fb04_ea_5, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0051fb04_ea_5, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0051fb04_ea_5, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_0051fb04_ea_5, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_0051fb04_ea_5, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_0051fb04_ea_5, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_0051fb04_ea_5, word_1c, 0x1c);  // (from the original)

inline constexpr guest::Function<0x001198e9, u32(u32, u32)> call_001198e8;  // (from the original)
inline constexpr guest::Function<0x0011a1c9, u32(u32, u32)> call_0011a1c8;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x003009a9, u32(u32, u32)> call_003009a8;  // (from the original)
inline constexpr guest::Function<0x00301e20, u32(u32, u32)> call_00301e20;  // (from the original)
inline constexpr guest::Function<0x0051f9cc, u32(u32, u32)> call_0051f9cc;  // (from the original)
inline constexpr guest::Function<0x00565c10, u32(u32, u32)> call_00565c10;  // (from the original)

u32 f_0051fb04(u32 r0, u32 r1, float S0) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_2 = 0;
    u32 zf_1 = 0;
    u32 r0_7 = 0;
    gptr<Local_0051fb04_ea_4> ea_4 = gptr<Local_0051fb04_ea_4>(0u);
    u32 r4_2 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 r8_1 = 0;
    u32 r9_1 = 0;
    u32 r10_1 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    float S0_3 = 0;
    gptr<Local_0051fb04_ea_1> ea_1 = gptr<Local_0051fb04_ea_1>(r13 - 8);
    ea_1->word_0 = r4;
    ea_1->word_4 = r14;
    r13 -= 8;
    guest::cpu()->r[13] = r13;
    u32 r0_1 = call_002fb328(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] = r13;
    u32 r0_3 = call_003009a8(r0_1 + 0x292a4u, r0);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    float S0_2 = guest::cpu()->s[0];
    gptr<Local_0051fb04_ea_2> ea_2 = gptr<Local_0051fb04_ea_2>(r13);
    r13 += 8;
    u32 r4_1 = ea_2->word_0;
    r14 = ea_2->word_4;
    gptr<Local_0051fb04_ea_3> ea_3 = gptr<Local_0051fb04_ea_3>(r13 - 0x20);  // (from the original)
    ea_3->word_0 = r4_1;
    ea_3->word_4 = r5;
    ea_3->word_8 = r6;
    ea_3->word_c = r7;
    ea_3->word_10 = r8;
    ea_3->word_14 = r9;
    ea_3->word_18 = r10;
    ea_3->word_1c = r14;
    r13 -= 0x20;  // (from the original)
    r6 = r0_3;
    if (r0_3 == 0) {
        goto L_51fb88;
    }
    guest::cpu()->r[13] = r13;
    r0_4 = call_00301e20(r0_3, r1_1);
    r1_1 = guest::cpu()->r[1];
    S0_2 = guest::cpu()->s[0];
    if (r0_4 == 0) {
        goto L_51fb88;
    }
    r7 = ~0u;
    r9 = r7;
    r8 = 0u;
    guest::cpu()->r[13] = r13;
    r0_5 = call_002fb328(r0_4, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    S0 = guest::cpu()->s[0];
    r10 = r0_5 + 0x292a4u;  // (from the original)
    r4 = 0u;
L_51fb5c:;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0_6 = call_003009a8(r10, r4);
    r1_2 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    zf_1 = r0_6 == 0;
    if (!zf_1) {
        zf_1 = r6 == r0_6;
    }
    if (zf_1) {
        goto L_51fc00;
    }
    guest::cpu()->r[13] = r13;
    r0_7 = call_0011a1c8(r0_6, r1_2);
    r1_2 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    if (r0_7 == 0) {
        goto L_51fb90;
    }
    goto L_51fc00;
L_51fb88:;
    ea_4 = gptr<Local_0051fb04_ea_4>(r13);
    r13 += 0x20;  // (from the original)
    r4_2 = ea_4->word_0;
    r5_1 = ea_4->word_4;
    r6_1 = ea_4->word_8;
    r7_1 = ea_4->word_c;
    r8_1 = ea_4->word_10;
    r9_1 = ea_4->word_14;
    r10_1 = ea_4->word_18;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
    guest::cpu()->r[10] = r10_1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    return ~0u;
L_51fb90:;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0_9 = call_001198e8(r0_6, r1_2);
    r1_2 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    if (r0_9 != 0) {
        goto L_51fc00;
    }
    r0_10 = 0u;
    r1_2 = r0_6;
    if (r6 != 0) {
        guest::cpu()->r[13] = r13;
        r0_10 = call_0051f9cc(r6, r1_2);
        r1_2 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
    }
    if (r7 > r0_10) {
        r7 = r0_10;
        r9 = r4;
        r8 = 0u;
        goto L_51fc00;
    }
    if (r7 + 1u == 0 || r0_10 != r7) {
        goto L_51fc00;
    }
    r8 += 1u;
    S0_3 = float(std::bit_cast<u32>(std::bit_cast<float>(r8)));
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    call_00565c10(r0_10, r1_2);
    r1_2 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    if (s32(std::bit_cast<u32>(S0)) < 0x3f800000) {  // (from the original)
        r9 = r4;
    }
L_51fc00:;
    r4 += 1u;
    if (s32(r4) < 0xa) {  // (from the original)
        guest::preempt();
        goto L_51fb5c;
    }
    gptr<Local_0051fb04_ea_5> ea_5 = gptr<Local_0051fb04_ea_5>(r13);
    r13 += 0x20;  // (from the original)
    u32 r4_3 = ea_5->word_0;
    u32 r5_2 = ea_5->word_4;
    u32 r6_2 = ea_5->word_8;
    u32 r7_2 = ea_5->word_c;
    u32 r8_2 = ea_5->word_10;
    u32 r9_2 = ea_5->word_14;
    u32 r10_2 = ea_5->word_18;
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[4] = r4_3;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[8] = r8_2;
    guest::cpu()->r[9] = r9_2;
    guest::cpu()->r[10] = r10_2;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r9;
}

}  // namespace d_0051fb04
GUEST_EXPORT(0x0051fb04, d_0051fb04::f_0051fb04);

// f_0051fc14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0051fc14 {

inline constexpr guest::Function<0x0051ff28, u32(u32, u32, u32, u32)> call_0051ff28;  // (from the original)
inline constexpr guest::Function<0x00520ce8, u32(u32, u32, u32, u32)> call_00520ce8;  // (from the original)

u32 f_0051fc14(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r0_1 = call_00520ce8(r1, r1, r2, r3);
    *frame.at<u32>(0) = r3;
    u32 r0_2 = call_0051ff28(r0, r0_1, 0u, r2);
    return r0_2;
}

}  // namespace d_0051fc14
GUEST_EXPORT_FRAMED(0x0051fc14, d_0051fc14::f_0051fc14, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original
