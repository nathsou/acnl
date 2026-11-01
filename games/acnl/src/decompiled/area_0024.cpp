// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_00240080: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00240080 {

inline constexpr guest::Function<0x007206e0, u32(u32, u32, u32)> call_007206e0;  // (from the original)

u32 f_00240080(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0xab7de4u;  // (from the original)
    if (r2 < 4u) {
        r0_1 += (r2 << 2);
    }
    u32 r0_2 = *gptr<u32>(r0_1);
    if (r0_2 == 0) {
        return r0_2;
    }
    return call_007206e0(r0_2, r0, r1);
}

}  // namespace d_00240080
GUEST_EXPORT(0x00240080, d_00240080::f_00240080);

// f_002404b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002404b0 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x003026e8, u32(u32, u32)> call_003026e8;  // (from the original)
inline constexpr guest::Function<0x0070b334, u32(u32, u32)> call_0070b334;  // (from the original)

u32 f_002404b0(u32 r0, u32 r1, u32 r2) {
    u32 r4_1 = 0u;
    u32 r0_1 = call_002fb328(r0, r1);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r0_2 = *gptr<u8>(r0_1 + 0x6e2a6u);  // (from the original)
    if (r0_2 != 1u) {
        u32 r0_3 = call_002fb328(r0_2, r1_1);
        r0_2 = call_0070b334(r0_3 + 0x6e2a4u, guest::cpu()->r[1]);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        if (r0_2 == 0) {
            return r4_1;
        }
    }
    u32 r0_5 = call_002fb328(r0_2, r1_1);
    u32 r0_6 = *gptr<u8>(r0_5 + 0x6e2b2u);  // (from the original)
    if (r0_6 == r0) {
        u32 r0_7 = call_002fb328(r0_6, guest::cpu()->r[1]);
        u32 r0_8 = *gptr<u8>(r0_7 + 0x6e2b3u);  // (from the original)
        if (r0_8 == r1) {
            u32 r0_9 = call_002fb328(r0_8, guest::cpu()->r[1]);
            u32 r0_11 = call_003026e8(r0_9 + 0x6e2b0u, guest::cpu()->r[1]);  // (from the original)
            if (r0_11 == r2) {
                r4_1 = 1u;
            }
        }
    }
    return r4_1;
}

}  // namespace d_002404b0
GUEST_EXPORT_FRAMED(0x002404b0, d_002404b0::f_002404b0, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0024088c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0024088c {

inline guest::global<u32, 0x00ab7df4> global_00ab7df4;  // (from the original)
inline constexpr guest::Function<0x00241870, u32(u32, u32, u32, u32)> call_00241870;  // (from the original)
inline constexpr guest::Function<0x00314a1c, u32(u32, u32, u32, u32)> call_00314a1c;  // (from the original)
inline constexpr guest::Function<0x00314a9c, u32(u32, u32, u32, u32)> call_00314a9c;  // (from the original)
inline constexpr guest::Function<0x00314b04, u32(u32, u32, u32, u32)> call_00314b04;  // (from the original)
inline constexpr guest::Function<0x007c7740, u32(u32, u32, u32, u32)> call_007c7740;  // (from the original)

void f_0024088c(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x64);  // the original's stack frame
    u32 r5_1 = *global_00ab7df4;
    call_00314a1c(frame.at(0x30).addr(), r5_1, r2, r3);  // (from the original)
    call_00314a9c(frame.at(0x18).addr(), r5_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_007c7740(frame.at(0).addr(), frame.at(0x18).addr(), frame.at(0x30).addr(), r0);  // (from the original)
    call_00314a1c(frame.at(0x48).addr(), r5_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_6 = call_00314b04(frame.at(0).addr(), frame.at(0x48).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r2_5 = guest::cpu()->r[2];
    u32 r3_4 = guest::cpu()->r[3];
    if (r0_6 == 0) {
        return;
    }
    call_00241870(*frame.at<u32>(8), *frame.at<u32>(0xc), r2_5, r3_4);  // (from the original)
}

}  // namespace d_0024088c
GUEST_EXPORT_FRAMED(0x0024088c, d_0024088c::f_0024088c, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00240c80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00240c80 {

struct __attribute__((packed)) Local_00240c80_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_00240c80_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00240c80_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00240c80_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00240c80_ea_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_00240c80_ea_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_00240c80_ea_1, word_14, 0x14);  // (from the original)

struct __attribute__((packed)) Local_00240c80_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_00240c80_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00240c80_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00240c80_ea_2, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00240c80_ea_2, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_00240c80_ea_2, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_00240c80_ea_2, word_14, 0x14);  // (from the original)

inline constexpr guest::Function<0x001dba70, u32(u32, u32, u32, u32)> call_001dba70;  // (from the original)
inline constexpr guest::Function<0x001dbc04, u32(u32, u32, u32, u32)> call_001dbc04;  // (from the original)
inline constexpr guest::Function<0x001dc87c, u32(u32, u32, u32, u32)> call_001dc87c;  // (from the original)
inline constexpr guest::Function<0x001dcb90, u32(u32, u32, u32, u32)> call_001dcb90;  // (from the original)
inline constexpr guest::Function<0x0055cb58, u32(u32, u32, u32, u32)> call_0055cb58;  // (from the original)

void f_00240c80(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_00240c80_ea_2> ea_2 = gptr<Local_00240c80_ea_2>(0u);
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 r8_1 = 0;
    if (r0 < 0u || r0 == 0) {
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        guest::cpu()->r[8] = r8;
        guest::cpu()->r[13] = r13;
        return;
    }
    gptr<Local_00240c80_ea_1> ea_1 = gptr<Local_00240c80_ea_1>(r13 - 0x18);  // (from the original)
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r6;
    ea_1->word_c = r7;
    ea_1->word_10 = r8;
    ea_1->word_14 = r14;
    r13 -= 0x18;  // (from the original)
    r5 = r0;
    r7 = r1;
    r8 = 0x51eb851fu;  // (from the original)
    r6 = 8u;
    goto L_240d7c;
L_240d6c:;
    r4 += 1u;
L_240d70:;
    if (r4 < r5) {
        r6 = r4 + 8u & 0xffu;  // (from the original)
        if (r4 > 2u) {
            guest::cpu()->r[13] = r13;
            u32 r0_1 = call_0055cb58(r7, r1, r2, r3);
            u64 res_1 = u64(r8) * r0_1;
            u32 r3_1 = res_1;
            u32 cf_1 = r0_1 + ((u32(res_1 >> 0x20) >> 5) * ~0x18u << 2) >= 0x28u;  // (from the original)
            if (cf_1) {
                guest::cpu()->r[13] = r13;
                u32 r0_2 = call_001dc87c(0x957216u, r6, r7, r3_1);  // (from the original)
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_2 != 0) {
                    guest::preempt();
                    goto L_240d6c;
                }
            } else {
                guest::cpu()->r[13] = r13;
                u32 r0_3 = call_001dbc04(0x957216u, r6, r7, r3_1);  // (from the original)
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_3 != 0) {
                    guest::preempt();
                    goto L_240d6c;
                }
                guest::cpu()->r[13] = r13;
                u32 r0_4 = call_001dcb90(0x957216u, r6, r7, r3);  // (from the original)
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_4 != 0) {
                    guest::preempt();
                    goto L_240d6c;
                }
            }
            guest::cpu()->r[13] = r13;
            call_001dba70(0x957216u, r6, r7, r3);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        } else {
            if (r4 == 0) {
                goto L_240d7c;
            }
            if (r4 == 1u) {
                guest::cpu()->r[13] = r13;
                u32 r0_5 = call_001dc87c(0x957216u, r6, r7, r3);  // (from the original)
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_5 == 0) {
                    guest::cpu()->r[13] = r13;
                    call_001dba70(0x957216u, r6, r7, r3);  // (from the original)
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                }
                r4 = 2u;
                guest::preempt();
                goto L_240d70;
            }
            guest::cpu()->r[13] = r13;
            u32 r0_6 = call_001dba70(0x957216u, r6, r7, r3);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_6 == 0) {
                guest::preempt();
                goto L_240d70;
            }
        }
        guest::preempt();
        goto L_240d6c;
    }
    ea_2 = gptr<Local_00240c80_ea_2>(r13);
    r13 += 0x18;  // (from the original)
    r4_1 = ea_2->word_0;
    r5_1 = ea_2->word_4;
    r6_1 = ea_2->word_8;
    r7_1 = ea_2->word_c;
    r8_1 = ea_2->word_10;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[13] = r13;
    return;
L_240d7c:;
    guest::cpu()->r[13] = r13;
    u32 r0_7 = call_001dc87c(0x957216u, r6, r7, r3);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_7 == 0) {
        guest::cpu()->r[13] = r13;
        call_001dba70(0x957216u, r6, r7, r3);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r4 = 1u;
    guest::preempt();
    goto L_240d70;
}

}  // namespace d_00240c80
GUEST_EXPORT(0x00240c80, d_00240c80::f_00240c80);

// f_00240de4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00240de4 {

struct __attribute__((packed)) Local_00240de4_r0_5 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
};
GUEST_OFFSET(Local_00240de4_r0_5, byte_8, 0x8);  // (from the original)

inline guest::global<u32, 0x00ab7df4> global_00ab7df4;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x00314a1c, u32(u32, u32, u32, u32)> call_00314a1c;  // (from the original)
inline constexpr guest::Function<0x00314a9c, u32(u32, u32)> call_00314a9c;  // (from the original)
inline constexpr guest::Function<0x00314b04, u32(u32, u32)> call_00314b04;  // (from the original)
inline constexpr guest::Function<0x00314b58, u32(u32, u32)> call_00314b58;  // (from the original)
inline constexpr guest::Function<0x005ca4b4, u32(u32, u32)> call_005ca4b4;  // (from the original)
inline constexpr guest::Function<0x006cba30, u32(u32, u32)> call_006cba30;  // (from the original)
inline constexpr guest::Function<0x006cbbe4, u32(u32, u32)> call_006cbbe4;  // (from the original)
inline constexpr guest::Function<0x006cc934, u32(u32, u32)> call_006cc934;  // (from the original)

u32 f_00240de4() {
    guest::StackFrame frame(0x38);  // the original's stack frame
    u32 r0_13 = 0;
    u32 r0_22 = 0;
    u32 r5 = 0u;
    u32 r6 = *global_00ab7df4;
    call_00314a1c(frame.at(0x18).addr(), r6, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_00314a9c(frame.at(0).addr(), r6);
    u32 r0_4 = call_00314b04(frame.at(0).addr(), frame.at(0x18).addr());  // (from the original)
    u32 r1 = guest::cpu()->r[1];
    if (r0_4 != 0) {
        do {
            gptr<Local_00240de4_r0_5> r0_5 = gptr<Local_00240de4_r0_5>(frame.at(8).addr());
            u32 r0_6 = r0_5->byte_8;
            u32 r0_7 = call_006cc934(r0_6, r1);
            u32 r1_2 = guest::cpu()->r[1];
            if (r0_7 == 0) {
                u32 r0_8 = r0_5->byte_8;
                u32 r0_9 = call_005ca4b4(r0_8, r1_2);
                r1_2 = guest::cpu()->r[1];
                if (r0_9 == 0) {
                    u32 r0_10 = r0_5->byte_8;
                    u32 res_1 = r0_10 - 0x4eu;  // (from the original)
                    u32 zf_1 = res_1 == 0;
                    if (!zf_1) {
                        if (!!zf_1 || (res_1 >> 0x1f) != (((r0_10 ^ 0x4eu) & (r0_10 ^ res_1)) >> 0x1f)) {  // (from the original)
                            if (r0_10 != 0x4cu && r0_10 != 0x4du) {  // (from the original)
                                goto L_240e88;
                            }
                        } else if (r0_10 != 0x4fu && r0_10 != 0x5fu) {  // (from the original)
                            goto L_240e88;
                        }
                    }
                }
                r5 += 1u;
            }
L_240e88:;
            call_00314b58(frame.at(0).addr(), r1_2);
            r0_13 = call_00314b04(frame.at(0).addr(), frame.at(0x18).addr());  // (from the original)
            r1 = guest::cpu()->r[1];
            guest::preempt();
        } while (r0_13 != 0);
    }
    u32 r4 = r5;
    r5 = 0u;
    call_00314a1c(frame.at(0x18).addr(), r6, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_00314a9c(frame.at(0).addr(), r6);
    u32 r0_17 = call_00314b04(frame.at(0).addr(), frame.at(0x18).addr());  // (from the original)
    r1 = guest::cpu()->r[1];
    if (r0_17 != 0) {
        do {
            u32 r0_18 = *frame.at<u8>(0x10);  // (from the original)
            u32 r0_19 = call_006cc934(r0_18, r1);
            if (r0_19 != 0) {
                r5 += 1u;
            }
            call_00314b58(frame.at(0).addr(), guest::cpu()->r[1]);
            r0_22 = call_00314b04(frame.at(0).addr(), frame.at(0x18).addr());  // (from the original)
            r1 = guest::cpu()->r[1];
            guest::preempt();
        } while (r0_22 != 0);
    }
    u32 r0_23 = frame.at(0x18).addr();  // (from the original)
    if (r5 > 1u) {
        r0_23 = r4 + r5;
        r4 = r0_23 - 1u;
    }
    u32 r0_24 = call_006cba30(r0_23, r1);
    u32 r1_7 = guest::cpu()->r[1];
    if (r0_24 != 0x50u) {  // (from the original)
        r4 += 1u;
    }
    u32 r0_25 = call_006cbbe4(r0_24, r1_7);
    if (r0_25 != 0x54u) {  // (from the original)
        r4 += 1u;
    }
    u32 r0_26 = call_002fb328(r0_25, r1_7);
    u32 r0_27 = r0_26 + 0x62250u;  // (from the original)
    u32 res_2 = r0_27 + 0x8b52u;  // (from the original)
    u32 zf_2 = res_2 == 0;
    if (!zf_2) {
        zf_2 = *gptr<u8>(res_2) == 0;
    }
    if (!zf_2) {
        r4 += 1u;
    }
    u32 res_3 = r0_27 + 0x8b54u;  // (from the original)
    u32 zf_3 = res_3 == 0;
    u32 r1_8 = res_3;
    if (!zf_3) {
        r1_8 = *gptr<u8>(r1_8);
        zf_3 = r1_8 == 0;
    }
    if (!zf_3) {
        r4 += 1u;
    }
    u32 r0_28 = r0_27 + 0x8a6cu;  // (from the original)
    if (r0_28 != 0) {
        r0_28 = *gptr<u8>(r0_28);
        if (r0_28 == 1u) {
            r4 += 1u;
        }
    }
    u32 r0_29 = call_002fb328(r0_28, r1_8);
    if (*gptr<u8>(r0_29 + 0x6e2a6u) == 1u) {  // (from the original)
        r4 -= 1u;
    }
    return r4;
}

}  // namespace d_00240de4
GUEST_EXPORT_FRAMED(0x00240de4, d_00240de4::f_00240de4, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002412fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002412fc {

struct __attribute__((packed)) Local_002412fc_r0_5 {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
};
GUEST_OFFSET(Local_002412fc_r0_5, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002412fc_r0_5, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_002412fc_r0_5, byte_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x00314a1c, u32(u32, u32, u32, u32)> call_00314a1c;  // (from the original)
inline constexpr guest::Function<0x00314a9c, u32(u32, u32, u32, u32)> call_00314a9c;  // (from the original)
inline constexpr guest::Function<0x00314b04, u32(u32, u32, u32, u32)> call_00314b04;  // (from the original)
inline constexpr guest::Function<0x00314b58, u32(u32, u32, u32, u32)> call_00314b58;  // (from the original)
inline constexpr guest::Function<0x005ca4b4, u32(u32, u32, u32, u32)> call_005ca4b4;  // (from the original)
inline constexpr guest::Function<0x006a6c78, u32(u32, u32, u32, u32)> call_006a6c78;  // (from the original)

u32 f_002412fc(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x48);  // the original's stack frame
    u32 r0_11 = 0;
    u32 r3_1 = 0xab7df4u;  // (from the original)
    u32 r5 = r0;
    u32 r7 = r1;
    if (r2 < 0xeu) {  // (from the original)
        r3_1 += (r2 << 2);
    }
    u32 r6 = 0u;
    u32 r4_1 = *gptr<u32>(r3_1);
    call_00314a1c(frame.at(0x28).addr(), r4_1, r2, r3_1);  // (from the original)
    call_00314a9c(frame.at(0).addr(), r4_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_4 = call_00314b04(frame.at(0).addr(), frame.at(0x28).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    u32 r3 = guest::cpu()->r[3];
    if (r0_4 == 0) {
    } else {
        u32 r8 = 0u;
        do {
            gptr<Local_002412fc_r0_5> r0_5 = gptr<Local_002412fc_r0_5>(frame.at(8).addr());
            u32 r0_6 = r0_5->byte_8;
            u32 r0_7 = call_005ca4b4(r0_6, r1, r2, r3);
            u32 r1_2 = guest::cpu()->r[1];
            u32 r2_3 = guest::cpu()->r[2];
            u32 r3_4 = guest::cpu()->r[3];
            if (r0_7 == 0) {
                *frame.at<u32>(0x18) = r8;  // (from the original)
                *frame.at<u32>(0x1c) = r8;  // (from the original)
                call_006a6c78(frame.at(0x18).addr(), frame.at(0x1c).addr(), r0_5->word_0, r0_5->word_4);  // (from the original)
                r1_2 = guest::cpu()->r[1];
                r2_3 = guest::cpu()->r[2];
                r3_4 = guest::cpu()->r[3];
                if (r5 == *frame.at<u32>(0x18) && r7 == *frame.at<u32>(0x1c)) {  // (from the original)
                    r6 += 1u;
                }
            }
            call_00314b58(frame.at(0).addr(), r1_2, r2_3, r3_4);
            r0_11 = call_00314b04(frame.at(0).addr(), frame.at(0x28).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            guest::preempt();
        } while (r0_11 != 0);
    }
    guest::cpu()->r[1] = r1;
    return r6;
}

}  // namespace d_002412fc
GUEST_EXPORT_FRAMED(0x002412fc, d_002412fc::f_002412fc, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_002413e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002413e0 {

inline constexpr guest::Function<0x0023fc84, u32(u32, u32, u32, u32)> call_0023fc84;  // (from the original)

u32 f_002413e0(u32 r0, u32 r1) {
    guest::StackFrame frame(0x14);  // the original's stack frame
    call_0023fc84(frame.at(0).addr(), r0, r1, 1u);
    u32 r0_2 = *frame.at<u32>(8) & 0xffu;  // (from the original)
    if (r0_2 >= 0xfcu) {  // (from the original)
        r0_2 = 0xfcu;  // (from the original)
    }
    return r0_2;
}

}  // namespace d_002413e0
GUEST_EXPORT_FRAMED(0x002413e0, d_002413e0::f_002413e0, 0x4000);  // pushes {lr} first, as the original

// f_00241cf0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00241cf0 {


u32 f_00241cf0(u32 r0) {
    u32 r2 = 0x887460u;  // (from the original)
    u32 r1 = 0u;
    do {
        if (*gptr<u8>(r2 + r1) == r0 || *gptr<u8>(r2 + r1 + 1u) == r0) {
            guest::cpu()->r[1] = r1;
            return 1u;
        }
        r1 += 2u;
        guest::preempt();
    } while (r1 < 8u);
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_00241cf0
GUEST_EXPORT(0x00241cf0, d_00241cf0::f_00241cf0);

// f_00242004: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00242004 {

inline guest::global<u32, 0x00ab7e04> global_00ab7e04;  // (from the original)

void f_00242004() {
    u32 r0_1 = *global_00ab7e04;
    u32 r1_1 = *gptr<u32>(*gptr<u32>(r0_1) + 0x1cu);  // (from the original)
    // virtual function 7 of r0_1
    guest::call_address<u32>(r1_1, r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00242004
GUEST_EXPORT(0x00242004, d_00242004::f_00242004);

// f_0024201c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0024201c {

struct __attribute__((packed)) Local_0024201c_r0_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0024201c_r0_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0024201c_r0_1, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x003026e8, u32(u32, u32)> call_003026e8;  // (from the original)
inline constexpr guest::Function<0x00527a2c, u32(u32, u32, u32, u32)> call_00527a2c;  // (from the original)
inline constexpr guest::Function<0x00527c34, u32(u32, u32, u32, u32)> call_00527c34;  // (from the original)
inline constexpr guest::Function<0x005cda44, u32(u32, u32, u32, u32)> call_005cda44;  // (from the original)
inline constexpr guest::Function<0x006cc934, u32(u32, u32)> call_006cc934;  // (from the original)
inline constexpr guest::Function<0x006f9330, u32(u32, u32)> call_006f9330;  // (from the original)
inline constexpr guest::Function<0x0070b3a4, u32(u32, u32)> call_0070b3a4;  // (from the original)

u32 f_0024201c(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    gptr<Local_0024201c_r0_1> r0_1 = gptr<Local_0024201c_r0_1>(frame.at(8).addr());
    r0_1->word_0 = r0;
    r0_1->word_4 = r1;
    call_00527c34(r0_1.addr(), r2, 1u, 1u);
    u32 r0_3 = call_002fae84(frame.at(8).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_5 = call_005cda44(r0_3 + 0x4be00u, r2, r0, r1);  // (from the original)
    *frame.at<u32>(0) = r0_5;
    call_00527a2c(1u, r0, r1, r2);
    u32 r0_6 = call_006cc934(r2, guest::cpu()->r[1]);
    u32 r1_3 = guest::cpu()->r[1];
    if (r0_6 != 0) {
        u32 r0_7 = call_002fb328(r0_6, r1_3);
        r1_3 = guest::cpu()->r[1];
        r0_6 = *gptr<u8>(r0_7 + 0x6e2a6u);  // (from the original)
        if (r0_6 != 0) {
            u32 r0_8 = call_002fb328(r0_6, r1_3);
            r0_6 = call_0070b3a4(r0_8 + 0x6e2a4u, guest::cpu()->r[1]);  // (from the original)
            r1_3 = guest::cpu()->r[1];
            if (r0_6 == 0) {
                u32 r0_10 = call_002fb328(r0_6, r1_3);
                r0_6 = call_003026e8(r0_10 + 0x6e2b0u, guest::cpu()->r[1]);  // (from the original)
                r1_3 = guest::cpu()->r[1];
                if (r0_6 == r2) {
                    u32 r0_12 = call_002fb328(r0_6, r1_3);
                    r1_3 = guest::cpu()->r[1];
                    r0_6 = *gptr<u8>(r0_12 + 0x6e2b2u);  // (from the original)
                    if (r0_6 == r0) {
                        u32 r0_13 = call_002fb328(r0_6, r1_3);
                        r1_3 = guest::cpu()->r[1];
                        r0_6 = *gptr<u8>(r0_13 + 0x6e2b3u);  // (from the original)
                        if (r0_6 == r1) {
                            u32 r0_14 = call_002fb328(r0_6, r1_3);
                            u32 r0_15 = *gptr<s8>(r0_14 + 0x6e2a4u);  // (from the original)
                            u32 r0_16 = call_002fb328(r0_15, r1_3);
                            r0_6 = call_006f9330(r0 + r0_15, u32(*gptr<s8>(r0_16 + 0x6e2a5u)) + r1);  // (from the original)
                            r1_3 = guest::cpu()->r[1];
                        }
                    }
                }
            }
        }
    }
    guest::cpu()->r[1] = r1_3;
    return r0_6;
}

}  // namespace d_0024201c
GUEST_EXPORT_FRAMED(0x0024201c, d_0024201c::f_0024201c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00242744: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00242744 {

inline guest::global<u32, 0x00ab7df4> global_00ab7df4;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x003026e8, u32(u32, u32)> call_003026e8;  // (from the original)
inline constexpr guest::Function<0x00314a1c, u32(u32, u32)> call_00314a1c;  // (from the original)
inline constexpr guest::Function<0x00314a9c, u32(u32, u32)> call_00314a9c;  // (from the original)
inline constexpr guest::Function<0x00314b04, u32(u32, u32)> call_00314b04;  // (from the original)
inline constexpr guest::Function<0x00314b58, u32(u32, u32)> call_00314b58;  // (from the original)
inline constexpr guest::Function<0x0070b334, u32(u32, u32)> call_0070b334;  // (from the original)

u32 f_00242744() {
    guest::StackFrame frame(0x30);  // the original's stack frame
    u32 r1 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    call_002f825c(0xab7e2cu, 0xfdu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r6 = 0u;
    u32 r8 = 0xab7e2cu;  // (from the original)
    u32 r7 = *global_00ab7df4;
    do {
        u32 r5 = r6 & 0xffu;  // (from the original)
        u32 r4 = 0u;
        call_00314a1c(frame.at(0x18).addr(), r7);  // (from the original)
        call_00314a9c(frame.at(0).addr(), r7);
        u32 r0_4 = call_00314b04(frame.at(0).addr(), frame.at(0x18).addr());  // (from the original)
        r1 = guest::cpu()->r[1];
        if (r0_4 != 0) {
            do {
                if (r5 == *frame.at<u8>(0x10)) {  // (from the original)
                    r4 += 1u;
                }
                call_00314b58(frame.at(0).addr(), r1);
                r0_7 = call_00314b04(frame.at(0).addr(), frame.at(0x18).addr());  // (from the original)
                r1 = guest::cpu()->r[1];
                guest::preempt();
            } while (r0_7 != 0);
        }
        r0_8 = frame.at(0x18).addr();  // (from the original)
        *gptr<u8>(r8 + r6) = u8(r4);
        r6 += 1u;
        guest::preempt();
    } while (s32(r6) < 0xfc);  // (from the original)
    u32 r0_9 = call_002fb328(r0_8, r1);
    u32 r1_3 = guest::cpu()->r[1];
    u32 r0_10 = *gptr<u8>(r0_9 + 0x6e2a6u);  // (from the original)
    if (r0_10 != 1u) {
        u32 r0_11 = call_002fb328(r0_10, r1_3);
        r0_10 = call_0070b334(r0_11 + 0x6e2a4u, guest::cpu()->r[1]);  // (from the original)
        r1_3 = guest::cpu()->r[1];
        if (r0_10 == 0) {
            return r0_10;
        }
    }
    u32 r0_13 = call_002fb328(r0_10, r1_3);
    r0_10 = call_003026e8(r0_13 + 0x6e2b0u, guest::cpu()->r[1]);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    if (r0_10 < 0xfcu) {  // (from the original)
        r1_3 = *gptr<u8>(r8 + r0_10);
        if (r1_3 != 0) {
            r1_3 -= 1u;
            *gptr<u8>(r8 + r0_10) = u8(r1_3);
        }
    }
    guest::cpu()->r[1] = r1_3;
    return r0_10;
}

}  // namespace d_00242744
GUEST_EXPORT_FRAMED(0x00242744, d_00242744::f_00242744, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00242cc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00242cc4 {

struct __attribute__((packed)) Local_00242cc4_r0_5 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00242cc4_r0_5, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00242cc4_r0_5, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x00ab7e00> global_00ab7e00;  // (from the original)
inline constexpr guest::Function<0x00314a1c, u32(u32, u32, u32, u32)> call_00314a1c;  // (from the original)
inline constexpr guest::Function<0x00314a9c, u32(u32, u32, u32, u32)> call_00314a9c;  // (from the original)
inline constexpr guest::Function<0x00314b04, u32(u32, u32, u32, u32)> call_00314b04;  // (from the original)
inline constexpr guest::Function<0x00314b58, u32(u32, u32, u32, u32)> call_00314b58;  // (from the original)
inline constexpr guest::Function<0x00527c34, u32(u32, u32, u32, u32)> call_00527c34;  // (from the original)

void f_00242cc4(u32 r0_unused, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x3c);  // the original's stack frame
    u32 r0_8 = 0;
    u32 r1_5 = 0;
    u32 r4_1 = *global_00ab7e00;
    call_00314a1c(frame.at(0x18).addr(), r4_1, r2, r3);  // (from the original)
    call_00314a9c(frame.at(0).addr(), r4_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_4 = call_00314b04(frame.at(0).addr(), frame.at(0x18).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    if (r0_4 == 0) {
        return;
    }
    do {
        u32 r4_2 = *frame.at<u8>(0x10);  // (from the original)
        u32 r5_1 = *frame.at<u32>(0xc);  // (from the original)
        gptr<Local_00242cc4_r0_5> r0_5 = gptr<Local_00242cc4_r0_5>(frame.at(0x30).addr());  // (from the original)
        r0_5->word_0 = *frame.at<u32>(8);
        r0_5->word_4 = r5_1;
        call_00527c34(r0_5.addr(), r4_2, 0x1eu, 0u);  // (from the original)
        call_00314b58(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        r0_8 = call_00314b04(frame.at(0).addr(), frame.at(0x18).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1_5 = guest::cpu()->r[1];
        guest::preempt();
    } while (r0_8 != 0);
    guest::cpu()->r[1] = r1_5;
}

}  // namespace d_00242cc4
GUEST_EXPORT_FRAMED(0x00242cc4, d_00242cc4::f_00242cc4, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_002443b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002443b8 {

struct __attribute__((packed)) Object_002443b8_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u8 unknown_1c[0xc];  // (not used here)
    u32 word_28;
    u8 unknown_2c[0xc];  // (not used here)
    u32 word_38;
    u8 unknown_3c[0x4];  // (not used here)
    u32 word_40;
    u8 byte_44;
};
GUEST_OFFSET(Object_002443b8_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_002443b8_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_002443b8_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_002443b8_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_002443b8_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_002443b8_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_002443b8_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_002443b8_0, word_38, 0x38);  // (from the original)
GUEST_OFFSET(Object_002443b8_0, word_40, 0x40);  // (from the original)
GUEST_OFFSET(Object_002443b8_0, byte_44, 0x44);  // (from the original)

struct __attribute__((packed)) Local_002443b8_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_002443b8_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002443b8_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_002443b8_ea_1, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_002443b8_r0_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_002443b8_r0_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002443b8_r0_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_002443b8_r0_1, word_8, 0x8);  // (from the original)

inline guest::global<u32, 0x002444c4> global_002444c4;  // (from the original)
inline guest::global<u32, 0x002444c8> global_002444c8;  // (from the original)
inline guest::global<u32, 0x002444d0> global_002444d0;  // (from the original)
inline constexpr guest::Function<0x0014f378, u32(u32, u32, u32)> call_0014f378;  // (from the original)
inline constexpr guest::Function<0x006e225c, u32(u32, u32, u32, u32)> call_006e225c;  // (from the original)

u32 f_002443b8(gptr<Object_002443b8_0> arg0, u32 r1, u32 r2_unused, u32 r3) {
    float S0_1 = std::bit_cast<float>(*global_002444c4);
    arg0->word_10 = std::bit_cast<u32>(std::bit_cast<float>(arg0->word_10) * S0_1);
    arg0->word_14 = std::bit_cast<u32>(std::bit_cast<float>(arg0->word_14) * S0_1);
    arg0->word_18 = std::bit_cast<u32>(std::bit_cast<float>(arg0->word_18) * S0_1);
    float S1_1 = std::bit_cast<float>(arg0->word_38);
    float S0_2 = std::bit_cast<float>(*global_002444c8) - S1_1;
    gptr<Local_002443b8_r0_1> r0_1 = gptr<Local_002443b8_r0_1>(arg0->word_40 + 0x14u);  // (from the original)
    float S6_1 = std::bit_cast<float>(r0_1->word_0) * S1_1;
    float S5_1 = std::bit_cast<float>(arg0->word_4) * S0_2;
    float S2_1 = std::bit_cast<float>(arg0->word_8) * S0_2;
    float S3_1 = std::bit_cast<float>(r0_1->word_8) * S1_1;
    float S4_1 = std::bit_cast<float>(r0_1->word_4) * S1_1;
    float S1_2 = S5_1 + S6_1;
    float S0_3 = std::bit_cast<float>(arg0->word_c) * S0_2 + S3_1;
    float S2_2 = S2_1 + S4_1;
    arg0->word_c = std::bit_cast<u32>(S0_3);
    arg0->word_4 = std::bit_cast<u32>(S1_2);
    arg0->word_8 = std::bit_cast<u32>(S2_2);
    u32 r0_2 = std::bit_cast<u32>(S0_3);
    u32 r1_1 = arg0->word_28;
    if (r0_2 != 0x45354000u && s32(r0_2) >= s32(0x45354000u)) {  // (from the original)
        S0_3 = std::bit_cast<float>(*global_002444d0);
    }
    arg0->word_8 = r1_1;
    arg0->word_c = std::bit_cast<u32>(S0_3);
    u32 r0_3 = arg0->byte_44;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_2;
    guest::cpu()->s[2] = S2_2;
    guest::cpu()->s[3] = S3_1;
    guest::cpu()->s[4] = S4_1;
    guest::cpu()->s[5] = S5_1;
    guest::cpu()->s[6] = S6_1;
    u32 r0_4 = call_006e225c(r0_3, r1_1, 0x45354000u, r3);  // (from the original)
    *gptr<u32>(r1) = arg0->word_4;
    *gptr<u32>(r1 + 4u) = arg0->word_8;
    *gptr<u32>(r1 + 8u) = arg0->word_c;
    call_0014f378(r1, r1, arg0.addr() + 0x10u);  // (from the original)
    u32 r0_5 = *gptr<u32>(r0_4);
    u32 r1_2 = *gptr<u32>(r0_4 + 4);
    u32 r2_2 = *gptr<u32>(r0_4 + 8);
    gptr<Local_002443b8_ea_1> ea_1 = gptr<Local_002443b8_ea_1>(r1 + 0xcu);  // (from the original)
    ea_1->word_0 = r0_5;
    ea_1->word_4 = r1_2;
    ea_1->word_8 = r2_2;
    *gptr<u16>(r1 + 0x18u) = u16(u32(*gptr<u16>(r0_4 + 0x10u)));  // (from the original)
    u32 r1_3 = *gptr<u16>(r0_4 + 0x12u);  // (from the original)
    *gptr<u16>(r1 + 0x1au) = u16(r1_3);  // (from the original)
    u32 r0_6 = *gptr<u32>(r0_4 + 0xcu);  // (from the original)
    *gptr<u32>(r1 + 0x1cu) = r0_6;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    return r0_6;
}

}  // namespace d_002443b8
GUEST_EXPORT_FRAMED(0x002443b8, d_002443b8::f_002443b8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00244a00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00244a00 {

struct __attribute__((packed)) Object_00244a00_0 {
    u8 unknown_0[0x14];  // (not used here)
    u8 byte_14;
    u8 unknown_15[0x3];  // (not used here)
    u32 word_18;
};
GUEST_OFFSET(Object_00244a00_0, byte_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_00244a00_0, word_18, 0x18);  // (from the original)

inline guest::global<u32, 0x0094cff4> global_0094cff4;  // (from the original)
inline guest::global<u32, 0x00952c3c> global_00952c3c;  // (from the original)
inline constexpr guest::Function<0x001662e8, u32(u32, u32, u32)> call_001662e8;  // (from the original)
inline constexpr guest::Function<0x002763bc, u32(u32, u32, u32)> call_002763bc;  // (from the original)
inline constexpr guest::Function<0x0027646c, u32(u32, u32, u32, u32)> call_0027646c;  // (from the original)

void f_00244a00(gptr<Object_00244a00_0> arg0, u32 r1, u32 r2) {
    if (arg0->byte_14 != 0) {
        return;
    }
    u32 r0_1 = *global_00952c3c;
    if (r0_1 == 0) {
        return;
    }
    call_0027646c(r0_1, r1, r2, guest::cpu()->r[3]);
    u32 r0_3 = call_002763bc(*global_0094cff4, 1u, arg0.addr());
    u32 r0_4 = call_001662e8(r0_3, guest::cpu()->r[1], guest::cpu()->r[2]);
    arg0->word_18 = r0_4;
    arg0->byte_14 = 1;
}

}  // namespace d_00244a00
GUEST_EXPORT_FRAMED(0x00244a00, d_00244a00::f_00244a00, 0x4010);  // pushes {r4, lr} first, as the original

// f_00244b48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00244b48 {

inline guest::global<u32, 0x0094cd08> global_0094cd08;  // (from the original)
inline guest::global<u32, 0x0094cd0c> global_0094cd0c;  // (from the original)
inline constexpr guest::Function<0x00131280, u32(u32, u32, u32, u32)> call_00131280;  // (from the original)
inline constexpr guest::Function<0x001320cc, u32(u32, u32, u32)> call_001320cc;  // (from the original)
inline constexpr guest::Function<0x00246774, u32(u32, u32)> call_00246774;  // (from the original)

void f_00244b48(u32 r0, u32 r1) {
    u32 r0_3 = 0;
    if (*global_0094cd08 == 0) {
        u32 r0_1 = call_00131280(0xccu, r0, 4u, guest::cpu()->r[3]);  // (from the original)
        r1 = guest::cpu()->r[1];
        u32 r0_2 = r0_1 + 4u;
        if (r0_2 != 0) {
            r0_2 = call_001320cc(r0_2, r0, 3u);
            r1 = 0x8fa35cu;  // (from the original)
            *gptr<u32>(r0_2) = r1;
        }
        *global_0094cd0c = r0_2;
        if (r0_1 == 0) {
            r0_3 = 0u;
        } else {
            r0_3 = call_00246774(r0_1, r1);
            r1 = guest::cpu()->r[1];
        }
        *global_0094cd08 = r0_3;
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_00244b48
GUEST_EXPORT_FRAMED(0x00244b48, d_00244b48::f_00244b48, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00244bb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00244bb4 {

inline guest::global<u32, 0x0094d080> global_0094d080;  // (from the original)
inline constexpr guest::Function<0x002e7d20, u32(u32, u32, u32, u32)> call_002e7d20;  // (from the original)
inline constexpr guest::Function<0x006b4170, u32(u32, u32, u32, u32)> call_006b4170;  // (from the original)
inline constexpr guest::Function<0x006b41a4, u32(u32, u32, u32, u32)> call_006b41a4;  // (from the original)

void f_00244bb4(u32 r0_unused, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = *global_0094d080;
    if (r3 != 0) {
        u32 r1_1 = r1;
        if (r1_1 != 0) {
            r1_1 = r1 + 4u;
        }
        call_006b41a4(r0_1, r1_1, guest::cpu()->r[2], r3);
        frame.release();
        call_002e7d20(r1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        return;
    }
    call_006b4170(r0_1, r1 == 0 ? 0u : r1 + 4u, guest::cpu()->r[2], r3);
    frame.release();
    call_002e7d20(r1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
}

}  // namespace d_00244bb4
GUEST_EXPORT(0x00244bb4, d_00244bb4::f_00244bb4);

// f_002454f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002454f8 {

struct __attribute__((packed)) Object_002454f8_0 {
    u8 unknown_0[0x1c];  // (not used here)
    u8 byte_1c;
};
GUEST_OFFSET(Object_002454f8_0, byte_1c, 0x1c);  // (from the original)

inline guest::global<u32, 0x0094d004> global_0094d004;  // (from the original)
inline guest::global<u32, 0x0094d080> global_0094d080;  // (from the original)
inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32, u32)> call_00137e84;  // (from the original)
inline constexpr guest::Function<0x0032be18, u32(u32, u32, u32, u32)> call_0032be18;  // (from the original)
inline constexpr guest::Function<0x004c765c, u32(u32, u32, u32, u32)> call_004c765c;  // (from the original)
inline constexpr guest::Function<0x0070ebdc, u32(u32, u32, u32, u32)> call_0070ebdc;  // (from the original)
inline constexpr guest::Function<0x0070eca8, u32(u32, u32, u32, u32)> call_0070eca8;  // (from the original)

void f_002454f8(gptr<Object_002454f8_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x28);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r12 = guest::cpu()->r[12];
    *frame.at<u32>(0x20) = r12;  // (from the original)
    u32 r5 = r0;
    u32 r6_1 = *global_0094d004;
    u32 r0_1 = call_0070eca8(r6_1, u32(arg0->byte_1c) & 0x7fu, r2, r3);  // (from the original)
    u32 r0_2 = call_0070ebdc(r6_1, r0_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_2 = guest::cpu()->r[1];
    u32 r7 = r0_2;
    if (r0_1 >= 0xcu) {  // (from the original)
        r7 = sxth(r0_2 + 3u);
    }
    if (r7 != 6u && s32(r7) >= 6) {
        r7 = sxth(r7 - 0xcu);  // (from the original)
    }
    u32 r6 = *global_0094d080 + 0x738u;  // (from the original)
    if (r6 != 0) {
        u32 r9 = 0x982848u;  // (from the original)
        call_00135740(0x982848u, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        u32 r1_3 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (*gptr<u32>(r5 + 0x7cu) != 0) {  // (from the original)
            u32 r10 = 0x2710u;  // (from the original)
            u32 r4 = 0u;
            u32 r11 = r4 - r10;
            u32 r8 = r7 - r10;
            do {
                u32 r1_4 = *gptr<u8>(r6 + r4);
                if (r1_4 != 0xdu) {  // (from the original)
                    if (r1_4 == 0xeu || r1_4 == 0xfu || r1_4 == r10) {  // (from the original)
                        r3 = r10;
                        goto L_2455c0;
                    }
                    if (r1_4 != r11) {
                        u32 r0_3 = call_0032be18(0u, r1_4, r2, r3);
                        r3 = sxth(r0_3 + r7);
                        goto L_2455c0;
                    }
                }
                r3 = sxth(r8);
L_2455c0:;
                u32 r0_4 = *gptr<u32>(r5 + 0x7cu);  // (from the original)
                r2 = r4;
                r1_3 = 0xfu;  // (from the original)
                if (r0_4 != 0) {
                    call_004c765c(r0_4, r1_3, r2, r3);
                    r1_3 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                }
                r4 += 1u;
                guest::preempt();
            } while (s32(r4) < 0x10);  // (from the original)
        }
        frame.release();
        call_00137e84(r9, r1_3);
        return;
    }
    guest::cpu()->r[1] = r1_2;
}

}  // namespace d_002454f8
GUEST_EXPORT(0x002454f8, d_002454f8::f_002454f8);

// f_002458e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002458e4 {

inline guest::global<u32, 0x00245954> global_00245954;  // (from the original)
inline guest::global<u32, 0x0024595c> global_0024595c;  // (from the original)

void f_002458e4(gptr<SoundDJPlayer> arg0) {
    u32 fpsr = guest::cpu()->fpscr;
    arg0->word_b0 = 0;
    arg0->word_8c = 0;
    arg0->word_b4 = 0;
    arg0->half_b8 = 0;
    float S0_1 = std::bit_cast<float>(*global_00245954) / float(s32(std::bit_cast<u32>(std::bit_cast<float>(u32(*gptr<s16>(0x8391dau + (arg0->word_18 << 1)))))));  // (from the original)
    float S2_1 = std::bit_cast<float>(*global_0024595c);
    u32 r1_1 = std::bit_cast<u32>(std::bit_cast<float>(vcvt_sz_f(S0_1)));
    float S1_1 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r1_1))));
    u32 fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S1_1, S0_1);  // (from the original)
    if (fpsr_1 >> 0x1e & 1) {  // (from the original)
        arg0->word_bc = r1_1;
        arg0->word_94 = std::bit_cast<u32>(S2_1);
        arg0->word_98 = std::bit_cast<u32>(S2_1);
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return;
    }
    u32 fpsr_2 = fpsr_1 & 0xfffffffu | vfp_cmpf(S2_1, S0_1);  // (from the original)
    if (!(fpsr_2 >> 0x1d & 1) || fpsr_2 >> 0x1e & 1) {  // (from the original)
        r1_1 += 1u;
    }
    arg0->word_bc = r1_1;
    arg0->word_94 = std::bit_cast<u32>(S2_1);
    arg0->word_98 = std::bit_cast<u32>(S2_1);
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_002458e4
GUEST_EXPORT(0x002458e4, d_002458e4::f_002458e4);

// f_00246774: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00246774 {

struct __attribute__((packed)) Local_00246774_r0_3 {
    u8 unknown_0[0x70];  // (not used here)
    u8 byte_70;
    u8 unknown_71[0x3];  // (not used here)
    u32 word_74;
    u32 word_78;
    u32 word_7c;
    u8 byte_80;
    u8 byte_81;
    u8 byte_82;
    u8 byte_83;
    u16 half_84;
    u8 unknown_86[0x2];  // (not used here)
    u32 word_88;
    u32 word_8c;
    u8 byte_90;
    u8 byte_91;
    u8 unknown_92[0x2];  // (not used here)
    u32 word_94;
    u32 word_98;
    u32 word_9c;
    u32 word_a0;
    u32 word_a4;
    u32 word_a8;
    u16 half_ac;
    u8 unknown_ae[0x2];  // (not used here)
    u32 word_b0;
    u32 word_b4;
    u16 half_b8;
    u8 unknown_ba[0x2];  // (not used here)
    u32 word_bc;
    u8 byte_c0;
    u8 unknown_c1[0x1];  // (not used here)
    u16 half_c2;
    u8 byte_c4;
    u8 byte_c5;
    u8 unknown_c6[0x2];  // (not used here)
    u32 word_c8;
};
GUEST_OFFSET(Local_00246774_r0_3, byte_70, 0x70);  // (from the original)
GUEST_OFFSET(Local_00246774_r0_3, word_74, 0x74);  // (from the original)
GUEST_OFFSET(Local_00246774_r0_3, word_78, 0x78);  // (from the original)
GUEST_OFFSET(Local_00246774_r0_3, word_7c, 0x7c);  // (from the original)
GUEST_OFFSET(Local_00246774_r0_3, byte_80, 0x80);  // (from the original)
GUEST_OFFSET(Local_00246774_r0_3, byte_81, 0x81);  // (from the original)
GUEST_OFFSET(Local_00246774_r0_3, byte_82, 0x82);  // (from the original)
GUEST_OFFSET(Local_00246774_r0_3, byte_83, 0x83);  // (from the original)
GUEST_OFFSET(Local_00246774_r0_3, half_84, 0x84);  // (from the original)
GUEST_OFFSET(Local_00246774_r0_3, word_88, 0x88);  // (from the original)
GUEST_OFFSET(Local_00246774_r0_3, word_8c, 0x8c);  // (from the original)
GUEST_OFFSET(Local_00246774_r0_3, byte_90, 0x90);  // (from the original)
GUEST_OFFSET(Local_00246774_r0_3, byte_91, 0x91);  // (from the original)
GUEST_OFFSET(Local_00246774_r0_3, word_94, 0x94);  // (from the original)
GUEST_OFFSET(Local_00246774_r0_3, word_98, 0x98);  // (from the original)
GUEST_OFFSET(Local_00246774_r0_3, word_9c, 0x9c);  // (from the original)
GUEST_OFFSET(Local_00246774_r0_3, word_a0, 0xa0);  // (from the original)
GUEST_OFFSET(Local_00246774_r0_3, word_a4, 0xa4);  // (from the original)
GUEST_OFFSET(Local_00246774_r0_3, word_a8, 0xa8);  // (from the original)
GUEST_OFFSET(Local_00246774_r0_3, half_ac, 0xac);  // (from the original)
GUEST_OFFSET(Local_00246774_r0_3, word_b0, 0xb0);  // (from the original)
GUEST_OFFSET(Local_00246774_r0_3, word_b4, 0xb4);  // (from the original)
GUEST_OFFSET(Local_00246774_r0_3, half_b8, 0xb8);  // (from the original)
GUEST_OFFSET(Local_00246774_r0_3, word_bc, 0xbc);  // (from the original)
GUEST_OFFSET(Local_00246774_r0_3, byte_c0, 0xc0);  // (from the original)
GUEST_OFFSET(Local_00246774_r0_3, half_c2, 0xc2);  // (from the original)
GUEST_OFFSET(Local_00246774_r0_3, byte_c4, 0xc4);  // (from the original)
GUEST_OFFSET(Local_00246774_r0_3, byte_c5, 0xc5);  // (from the original)
GUEST_OFFSET(Local_00246774_r0_3, word_c8, 0xc8);  // (from the original)

inline guest::global<u32, 0x00246874> global_00246874;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

u32 f_00246774(gptr<SoundDJPlayer> arg0, float S0) {
    arg0->word_0 = 0x8ee76c;  // (from the original)
    arg0->byte_14 = 0;
    arg0->byte_15 = 0;
    arg0->word_18 = 0;
    arg0->byte_1c = 0xff;  // (from the original)
    arg0->byte_1d = 0xff;  // (from the original)
    u32 ea_1 = arg0.addr() + 0x20u;  // (from the original)
    arg0->word_20 = 0;
    u32 res_1 = ea_1 + 0x10u;  // (from the original)
    arg0->word_24 = 0;
    arg0->word_28 = 0;
    arg0->word_2c = 0;
    if (res_1 != 0) {
        arg0->word_20 = res_1;
        arg0->word_24 = 0x1e;  // (from the original)
    }
    arg0->word_50 = 0;
    arg0->byte_54 = 0;
    arg0->byte_55 = 1;
    u32 r0_2 = call_00301d0c(ea_1 + 0x38u, 0x2e7db0u, 0xcu, 2u);  // (from the original)
    gptr<Local_00246774_r0_3> r0_3 = gptr<Local_00246774_r0_3>(r0_2 - 0x58u);  // (from the original)
    float S0_1 = std::bit_cast<float>(*global_00246874);
    r0_3->byte_70 = 0;
    r0_3->word_74 = 0x8f3a54;  // (from the original)
    r0_3->word_78 = 0;
    r0_3->word_7c = 0;
    r0_3->byte_80 = 0;
    r0_3->byte_81 = 0;
    r0_3->byte_82 = 0;
    r0_3->byte_83 = 0;
    r0_3->half_84 = 0;
    r0_3->word_88 = 0;
    r0_3->word_8c = 0;
    r0_3->byte_90 = 0;
    r0_3->byte_91 = 0;
    r0_3->word_94 = std::bit_cast<u32>(S0_1);
    r0_3->word_98 = std::bit_cast<u32>(S0_1);
    r0_3->word_9c = std::bit_cast<u32>(S0_1);
    r0_3->word_a0 = std::bit_cast<u32>(S0_1);
    r0_3->word_a4 = 0;
    r0_3->word_a8 = 0;
    r0_3->half_ac = u16(~0u);
    r0_3->word_b0 = 0;
    r0_3->word_b4 = 0;
    r0_3->half_b8 = 0;
    r0_3->word_bc = 0;
    r0_3->byte_c0 = 0;
    r0_3->half_c2 = 0;
    r0_3->byte_c4 = 0;
    r0_3->byte_c5 = 0;
    r0_3->word_c8 = 2;
    guest::cpu()->r[1] = 2u;
    guest::cpu()->s[0] = S0_1;
    return r0_3.addr();
}

}  // namespace d_00246774
GUEST_EXPORT_FRAMED(0x00246774, d_00246774::f_00246774, 0x4010);  // pushes {r4, lr} first, as the original

// f_00246934: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00246934 {

inline guest::global<u32, 0x0094d540> global_0094d540;  // (from the original)
inline constexpr guest::Function<0x0020a4cc, u32(u32, u32, u32, u32)> call_0020a4cc;  // (from the original)
inline constexpr guest::Function<0x00246df4, u32(u32, u32, u32, u32)> call_00246df4;  // (from the original)

u32 f_00246934(gptr<SoundObjRiver> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = arg0->byte_34;
    if (r0_1 == 0) {
        r0_1 = *global_0094d540;
        if (r0_1 != 0) {
            u32 r0_2 = call_00246df4(r0_1, arg0.addr(), r2, r3);
            arg0->word_44 = r0_2;
            arg0->byte_48 = 0;
            arg0->word_3c = 7;
            arg0->byte_35 = 1;
            arg0->byte_37 = 0;
            arg0->byte_39 = 0;
            frame.release();
            return call_0020a4cc(arg0.addr(), r1, r2, 7u);
        }
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_00246934
GUEST_EXPORT(0x00246934, d_00246934::f_00246934);

// f_00246b90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00246b90 {

inline guest::global<u32, 0x0094d540> global_0094d540;  // (from the original)
inline constexpr guest::Function<0x0020aedc, u32(u32, u32)> call_0020aedc;  // (from the original)
inline constexpr guest::Function<0x00246f34, u32(u32, u32)> call_00246f34;  // (from the original)

u32 f_00246b90(gptr<SoundObjRiver> arg0, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = arg0->byte_34;
    if (r0_1 == 0) {
        return r0_1;
    }
    u32 r1_1 = arg0->word_44;
    if (r1_1 + 1u == 0) {
        frame.release();
        return call_0020aedc(arg0.addr(), r1_1);
    }
    u32 r0_2 = *global_0094d540;
    if (r0_2 != 0) {
        call_00246f34(r0_2, r1_1);
        r1_1 = guest::cpu()->r[1];
    }
    frame.release();
    return call_0020aedc(arg0.addr(), r1_1);
}

}  // namespace d_00246b90
GUEST_EXPORT(0x00246b90, d_00246b90::f_00246b90);

// f_00246bd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00246bd4 {

inline guest::global<u32, 0x00246c10> global_00246c10;  // (from the original)
inline constexpr guest::Function<0x0020af18, u32(u32)> call_0020af18;  // (from the original)

u32 f_00246bd4(u32 r0) {
    u32 r0_1 = call_0020af18(r0);
    *gptr<u32>(r0_1 + 0x44u) = ~0u;  // (from the original)
    *gptr<u32>(r0_1) = 0x8ee798;  // (from the original)
    float S0_1 = std::bit_cast<float>(*global_00246c10);
    *gptr<u8>(r0_1 + 0x48u) = 0;  // (from the original)
    *gptr<u8>(r0_1 + 0x49u) = 0;  // (from the original)
    *gptr<u32>(r0_1 + 0x4cu) = std::bit_cast<u32>(S0_1);  // (from the original)
    *gptr<u32>(r0_1 + 0x50u) = std::bit_cast<u32>(S0_1);  // (from the original)
    *gptr<u32>(r0_1 + 0x54u) = std::bit_cast<u32>(S0_1);  // (from the original)
    guest::cpu()->r[1] = 0u;
    guest::cpu()->s[0] = S0_1;
    return r0_1;
}

}  // namespace d_00246bd4
GUEST_EXPORT_FRAMED(0x00246bd4, d_00246bd4::f_00246bd4, 0x4010);  // pushes {r4, lr} first, as the original

// f_00246c68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00246c68 {

inline guest::global<u32, 0x0094d540> global_0094d540;  // (from the original)
inline constexpr guest::Function<0x0020aedc, u32(u32, u32)> call_0020aedc;  // (from the original)
inline constexpr guest::Function<0x00246f34, u32(u32, u32)> call_00246f34;  // (from the original)

u32 f_00246c68(gptr<SoundObjRiver> arg0, u32 r1) {
    arg0->word_0 = 0x8ee798;  // (from the original)
    if (arg0->byte_34 == 0) {
        return arg0.addr();
    }
    u32 r1_1 = arg0->word_44;
    if (r1_1 + 1u != 0) {
        u32 r0_1 = *global_0094d540;
        if (r0_1 != 0) {
            call_00246f34(r0_1, r1_1);
            r1_1 = guest::cpu()->r[1];
        }
    }
    call_0020aedc(arg0.addr(), r1_1);
    return arg0.addr();
}

}  // namespace d_00246c68
GUEST_EXPORT_FRAMED(0x00246c68, d_00246c68::f_00246c68, 0x4010);  // pushes {r4, lr} first, as the original

// f_00246cb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00246cb8 {

inline constexpr guest::Function<0x00131280, u32(u32, u32, u32, u32)> call_00131280;  // (from the original)
inline constexpr guest::Function<0x001320cc, u32(u32, u32, u32, u32)> call_001320cc;  // (from the original)

void f_00246cb8(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r6 = 0x94d540u;  // (from the original)
    if (*gptr<u32>(r6) == 0) {
        u32 r0_1 = call_00131280(0x108u, r0, 4u, r3);  // (from the original)
        u32 r4 = r0_1;
        if (r0_1 == 0) {
            *gptr<u32>(r6 + 4u) = r4;
            r4 = 0u;
        } else {
            u32 r0_2 = call_001320cc(r0_1, r0, 3u, guest::cpu()->r[3]);
            *gptr<u32>(r0_2) = 0x8fa36c;  // (from the original)
            *gptr<u32>(r6 + 4u) = r0_2;
            r0 = 0u;
            *gptr<u32>(r4 + 0x10u) = r0;  // (from the original)
            u32 r2 = r0;
            u32 r1 = r0;
            *gptr<u32>(r4 + 0x104u) = r0;  // (from the original)
            do {
                u32 r2_1 = r2 + 1u;
                r1 += 2u;
                *gptr<u32>((r4 + (r2 << 2)) + 0x14u) = r0;  // (from the original)
                r2 = r2_1 + 1u;
                *gptr<u32>((r4 + (r2_1 << 2)) + 0x14u) = r0;  // (from the original)
                guest::preempt();
            } while (r1 < 0x3cu);  // (from the original)
        }
        *gptr<u32>(r6) = r4;
    }
}

}  // namespace d_00246cb8
GUEST_EXPORT_FRAMED(0x00246cb8, d_00246cb8::f_00246cb8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00246df4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00246df4 {

struct __attribute__((packed)) Object_00246df4_0 {
    u8 unknown_0[0x104];  // (not used here)
    u32 word_104;
};
GUEST_OFFSET(Object_00246df4_0, word_104, 0x104);  // (from the original)


u32 f_00246df4(gptr<Object_00246df4_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = r0;
    if (arg0->word_104 >= 0x3cu) {  // (from the original)
        return 0x3du;  // (from the original)
    }
    if (r1 == 0) {
        return 0x3du;  // (from the original)
    } else {
        r0 = 0u;
    }
    do {
        if (*gptr<u32>(r2 + (r0 << 2) + 0x14u) == 0) {  // (from the original)
            *gptr<u32>(r2 + (r0 << 2) + 0x14u) = r1;  // (from the original)
            *gptr<u32>(r2 + 0x104u) = *gptr<u32>(r2 + 0x104u) + 1u;  // (from the original)
            return r0;
        }
        r0 += 1u;
        guest::preempt();
    } while (r0 < 0x3cu);  // (from the original)
    return 0x3du;  // (from the original)
}

}  // namespace d_00246df4
GUEST_EXPORT(0x00246df4, d_00246df4::f_00246df4);

// f_00246f34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00246f34 {

struct __attribute__((packed)) Object_00246f34_0 {
    u8 unknown_0[0x104];  // (not used here)
    u32 word_104;
};
GUEST_OFFSET(Object_00246f34_0, word_104, 0x104);  // (from the original)

struct __attribute__((packed)) Local_00246f34_r1_1 {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
};
GUEST_OFFSET(Local_00246f34_r1_1, word_14, 0x14);  // (from the original)


void f_00246f34(gptr<Object_00246f34_0> arg0, u32 r1) {
    if (r1 >= 0x3cu) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return;
    }
    gptr<Local_00246f34_r1_1> r1_1 = gptr<Local_00246f34_r1_1>(arg0.addr() + (r1 << 2));
    if (r1_1->word_14 == 0) {
        guest::cpu()->r[1] = r1_1.addr();
        return;
    }
    r1_1->word_14 = 0;
    u32 r1_2 = arg0->word_104 - 1u;
    arg0->word_104 = r1_2;
    guest::cpu()->r[1] = r1_2;
}

}  // namespace d_00246f34
GUEST_EXPORT(0x00246f34, d_00246f34::f_00246f34);

// f_00246f64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00246f64 {

struct __attribute__((packed)) Object_00246f64_0 {
    u8 unknown_0[0x38];  // (not used here)
    u8 byte_38;
};
GUEST_OFFSET(Object_00246f64_0, byte_38, 0x38);  // (from the original)

struct __attribute__((packed)) Local_00246f64_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00246f64_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00246f64_ea_1, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x002d1f40, u32(u32, u32, u32, u32)> call_002d1f40;  // (from the original)

void f_00246f64(gptr<Object_00246f64_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r14 = guest::cpu()->r[14];
    if (arg0->byte_38 != 0) {
        return;
    }
    gptr<Local_00246f64_ea_1> ea_1 = gptr<Local_00246f64_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r3;
    ea_1->word_4 = r14;
    *frame.at<u32>(0) = 0;
    call_002d1f40(arg0.addr() + 4u, 0x9841c8u, 0x9841c8u, 0u);  // (from the original)
    u32 ea_2 = frame.at(0).addr();
}

}  // namespace d_00246f64
GUEST_EXPORT(0x00246f64, d_00246f64::f_00246f64);

// f_00247240: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00247240 {

struct __attribute__((packed)) Object_00247240_0 {
    u8 unknown_0[0x38];  // (not used here)
    u8 byte_38;
    u8 unknown_39[0x3f];  // (not used here)
    u32 word_78;
    u8 unknown_7c[0x18];  // (not used here)
    u8 byte_94;
};
GUEST_OFFSET(Object_00247240_0, byte_38, 0x38);  // (from the original)
GUEST_OFFSET(Object_00247240_0, word_78, 0x78);  // (from the original)
GUEST_OFFSET(Object_00247240_0, byte_94, 0x94);  // (from the original)

inline guest::global<u32, 0x0094cfec> global_0094cfec;  // (from the original)
inline constexpr guest::Function<0x002d1858, u32(u32, u32, u32, u32)> call_002d1858;  // (from the original)

void f_00247240(gptr<Object_00247240_0> arg0) {
    if (arg0->byte_38 == 0) {
        return;
    }
    if (arg0->byte_94 != 0) {
        arg0->byte_94 = 0;
        return;
    }
    call_002d1858(*global_0094cfec, arg0->word_78, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00247240
GUEST_EXPORT(0x00247240, d_00247240::f_00247240);

// f_0024727c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0024727c {

struct __attribute__((packed)) Object_0024727c_0 {
    u8 unknown_0[0x38];  // (not used here)
    u8 byte_38;
};
GUEST_OFFSET(Object_0024727c_0, byte_38, 0x38);  // (from the original)

inline constexpr guest::Function<0x002d27e0, u32(u32, u32, u32, u32)> call_002d27e0;  // (from the original)

void f_0024727c(gptr<Object_0024727c_0> arg0) {
    u32 r1_1 = arg0->byte_38;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return;
    }
    call_002d27e0(arg0.addr() + 4u, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0024727c
GUEST_EXPORT(0x0024727c, d_0024727c::f_0024727c);

// f_00247294: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00247294 {

struct __attribute__((packed)) Object_00247294_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00247294_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x002d2a4c, u32(u32, u32, u32, u32)> call_002d2a4c;  // (from the original)

u32 f_00247294(gptr<Object_00247294_0> arg0) {
    arg0->word_0 = 0;
    u32 r0_2 = call_002d2a4c(arg0.addr() + 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_3 = r0_2 - 4u;
    *gptr<u8>(r0_3 + 0x94u) = 0;  // (from the original)
    return r0_3;
}

}  // namespace d_00247294
GUEST_EXPORT_FRAMED(0x00247294, d_00247294::f_00247294, 0x4010);  // pushes {r4, lr} first, as the original

// f_002472b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002472b0 {

struct __attribute__((packed)) Object_002472b0_0 {
    u8 unknown_0[0x38];  // (not used here)
    u8 byte_38;
};
GUEST_OFFSET(Object_002472b0_0, byte_38, 0x38);  // (from the original)

inline constexpr guest::Function<0x00136cc8, u32(u32)> call_00136cc8;  // (from the original)
inline constexpr guest::Function<0x002d27e0, u32(u32, u32, u32, u32)> call_002d27e0;  // (from the original)
inline constexpr guest::Function<0x002d2b90, u32(u32, u32, u32, u32)> call_002d2b90;  // (from the original)

u32 f_002472b0(gptr<Object_002472b0_0> arg0) {
    if (arg0->byte_38 != 0) {
        call_002d27e0(arg0.addr() + 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    u32 r0_3 = call_002d2b90(arg0.addr() + 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_4 = r0_3 - 4u;
    call_00136cc8(r0_4);
    return r0_4;
}

}  // namespace d_002472b0
GUEST_EXPORT_FRAMED(0x002472b0, d_002472b0::f_002472b0, 0x4010);  // pushes {r4, lr} first, as the original

// f_00248cd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00248cd4 {

struct __attribute__((packed)) Local_00248cd4_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00248cd4_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00248cd4_ea_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_00248cd4_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00248cd4_ea_4, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00248cd4_ea_4, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x0052f200, u32(u32, u32, u32)> call_0052f200;  // (from the original)
inline constexpr guest::Function<0x005ca234, u32(u32)> call_005ca234;  // (from the original)

void f_00248cd4(u32 r0, u32 r1) {
    guest::StackFrame frame(0x14);  // the original's stack frame
    u32 r0_1 = call_005ca234(r1);
    u32 r2_1 = *gptr<s8>(r0_1 + 1u);
    gptr<Local_00248cd4_ea_1> ea_1 = gptr<Local_00248cd4_ea_1>(frame.at(0).addr());
    ea_1->word_0 = u32(*gptr<s8>(r0_1));
    ea_1->word_4 = r2_1;
    u32 r2_2 = *gptr<s8>(r0_1 + 3u);
    u32 r1_1 = *gptr<s8>(r0_1 + 2u);
    gptr<Local_00248cd4_ea_4> ea_4 = gptr<Local_00248cd4_ea_4>(frame.at(8).addr());
    ea_4->word_0 = r1_1;
    ea_4->word_4 = r2_2;
    call_0052f200(r0, frame.at(0).addr(), frame.at(8).addr());
}

}  // namespace d_00248cd4
GUEST_EXPORT_FRAMED(0x00248cd4, d_00248cd4::f_00248cd4, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00248d34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00248d34 {

inline constexpr guest::Function<0x0052ee54, u32(u32, u32, u32, u32)> call_0052ee54;  // (from the original)
inline constexpr guest::Function<0x006cac2c, u32(u32, u32, u32, u32)> call_006cac2c;  // (from the original)
inline constexpr guest::Function<0x006cac70, u32(u32, u32, u32, u32)> call_006cac70;  // (from the original)
inline constexpr guest::Function<0x006cacdc, u32(u32, u32, u32, u32)> call_006cacdc;  // (from the original)

u32 f_00248d34(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_4 = 0;
    u32 r5 = r0;
    u32 r6 = r1;
    call_0052ee54(frame.at(0).addr(), r2, r2, r3);
    u32 r0_2 = call_006cacdc(r3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        goto L_248dc4;
    }
    r0_3 = call_006cac2c(r3, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0_3 != 0) {
        goto L_248dc4;
    }
    r0_4 = call_006cac70(r3, r1, r2_3, r3_3);
    r1 = guest::cpu()->r[1];
    if (r0_4 != 0 || r3 == 0x4eu) {  // (from the original)
        goto L_248dc4;
    }
    if (r3 == 0xc6u) {  // (from the original)
        goto L_248dc4;
    } else {
        r0 = *frame.at<u32>(4) - 1u;
    }
    *frame.at<u32>(4) = r0;
    *gptr<u32>(r5) = *frame.at<u32>(0);
    *gptr<u32>(r6) = *frame.at<u32>(4);
    return 1u;
L_248dc4:;
    r0 = *frame.at<u32>(4) - 2u;
    *frame.at<u32>(4) = r0;
    *gptr<u32>(r5) = *frame.at<u32>(0);
    *gptr<u32>(r6) = *frame.at<u32>(4);
    guest::cpu()->r[1] = r1;
    return 1u;
}

}  // namespace d_00248d34
GUEST_EXPORT_FRAMED(0x00248d34, d_00248d34::f_00248d34, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00248dd0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00248dd0 {

struct __attribute__((packed)) Object_00248dd0_0 {
    u8 unknown_0[0x10];  // (not used here)
    u8 byte_10;
};
GUEST_OFFSET(Object_00248dd0_0, byte_10, 0x10);  // (from the original)

struct __attribute__((packed)) Local_00248dd0_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00248dd0_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00248dd0_ea_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_00248dd0_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00248dd0_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00248dd0_ea_3, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_00248dd0_ea_5 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00248dd0_ea_5, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00248dd0_ea_5, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_00248dd0_r4_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00248dd0_r4_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00248dd0_r4_1, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x0023fc84, u32(u32, u32, u32, u32)> call_0023fc84;  // (from the original)
inline constexpr guest::Function<0x00240010, u32(u32, u32, u32, u32)> call_00240010;  // (from the original)
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> call_0052f144;  // (from the original)
inline constexpr guest::Function<0x0060d20c, u32(u32, u32, u32, u32)> call_0060d20c;  // (from the original)
inline constexpr guest::Function<0x006cc934, u32(u32, u32, u32, u32)> call_006cc934;  // (from the original)
inline constexpr guest::Function<0x007206b8, u32(u32, u32, u32, u32)> call_007206b8;  // (from the original)
inline constexpr guest::Function<0x00748164, u32(u32, u32, u32, u32)> call_00748164;  // (from the original)
inline constexpr guest::Function<0x007481ec, u32(u32, u32, u32, u32)> call_007481ec;  // (from the original)
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32, u32)> call_0074824c;  // (from the original)
inline constexpr guest::Function<0x00748284, u32(u32, u32, u32, u32)> call_00748284;  // (from the original)

u32 f_00248dd0(gptr<Object_00248dd0_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x54);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r0_17 = 0;
    u32 r6 = r0;
    u32 r1_1 = r0 & ~0xffu;  // (from the original)
    u32 r0_1 = arg0->byte_10;
    u32 r7 = r1_1 | r0_1;
    u32 r0_2 = call_00240010(r0_1, r1_1, r2, r3);
    u32 r5 = r0_2;
    call_00748284(frame.at(0).addr(), r6, guest::cpu()->r[2], guest::cpu()->r[3]);
    call_0074824c(frame.at(0x20).addr(), r6, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_6 = call_007481ec(frame.at(0).addr(), frame.at(0x20).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_6 != 0) {
        do {
            gptr<Local_00248dd0_r4_1> r4_1 = gptr<Local_00248dd0_r4_1>(frame.at(8).addr());
            if (r5 != 0) {
                u32 r0_7 = call_007206b8(r5, r4_1->word_0, r4_1->word_4, r3);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_7 != 0) {
                    call_0023fc84(frame.at(0x30).addr(), r4_1->word_0, r4_1->word_4, r7 & 0xffu);  // (from the original)
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    u32 r0_9 = *frame.at<u32>(0x38) & 0xffu;  // (from the original)
                    if (r0_9 < 0xfcu) {  // (from the original)
                        u32 r0_10 = call_006cc934(r0_9, r1, r2, r3);
                        r1 = guest::cpu()->r[1];
                        r2 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
                        if (r0_10 != 0) {
                            if (*gptr<u32>(r6 + 0x20u) != 0) {  // (from the original)
                                call_00748164(frame.at(0x18).addr(), frame.at(8).addr(), r6 + 0x24u, r3);  // (from the original)
                                gptr<Local_00248dd0_ea_1> ea_1 = gptr<Local_00248dd0_ea_1>(frame.at(0x18).addr());  // (from the original)
                                u32 r1_6 = ea_1->word_0;
                                u32 r2_7 = ea_1->word_4;
                                u32 r2_8 = r2_7 + (r2_7 << 2) << 5;
                                u32 r1_7 = r2_8 + (r1_6 + (r1_6 << 2) << 1) + *gptr<u32>(r6 + 0x20u);  // (from the original)
                                call_0060d20c(frame.at(0x30).addr(), r1_7, r2_8, guest::cpu()->r[3]);  // (from the original)
                                r1 = guest::cpu()->r[1];
                                r2 = guest::cpu()->r[2];
                                r3 = guest::cpu()->r[3];
                                if (*frame.at<u8>(0x38) == 0) {  // (from the original)
                                    goto L_248f5c;
                                }
                                u32 r4_2 = *frame.at<u32>(0xc);  // (from the original)
                                u32 r1_8 = *frame.at<u32>(8);
                                u32 r3_6 = *gptr<u8>(r6 + 0x10u);  // (from the original)
                                call_0023fc84(frame.at(0x40).addr(), r1_8, r4_2, r3_6);  // (from the original)
                                r1 = *frame.at<u32>(0x40);  // (from the original)
                                gptr<Local_00248dd0_ea_3> ea_3 = gptr<Local_00248dd0_ea_3>(frame.at(0x44).addr());  // (from the original)
                                u32 r0_14 = ea_3->word_0;
                                u32 r2_9 = ea_3->word_4 & 0xffu;  // (from the original)
                                if (r2_9 < 0xfcu) {  // (from the original)
                                    *gptr<u8>(r6 + 0x12u) = u8(r2_9);  // (from the original)
                                    gptr<Local_00248dd0_ea_5> ea_5 = gptr<Local_00248dd0_ea_5>(r6 + 0x14u);  // (from the original)
                                    ea_5->word_0 = r1;
                                    ea_5->word_4 = r0_14;
                                }
                            }
                            guest::cpu()->r[1] = r1;
                            return 1u;
L_248f5c:;
                        }
                    }
                }
            }
            call_0052f144(frame.at(0).addr(), r1, r2, r3);
            r0_17 = call_007481ec(frame.at(0).addr(), frame.at(0x20).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            guest::preempt();
        } while (r0_17 != 0);
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_00248dd0
GUEST_EXPORT_FRAMED(0x00248dd0, d_00248dd0::f_00248dd0, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00248fb0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00248fb0 {

struct __attribute__((packed)) Object_00248fb0_0 {
    u8 unknown_0[0x11];  // (not used here)
    u8 byte_11;
};
GUEST_OFFSET(Object_00248fb0_0, byte_11, 0x11);  // (from the original)

inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> call_002fe7cc;  // (from the original)
inline constexpr guest::Function<0x0052edfc, u32(u32, u32, u32)> call_0052edfc;  // (from the original)
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32)> call_0052f144;  // (from the original)
inline constexpr guest::Function<0x0060d20c, u32(u32, u32, u32)> call_0060d20c;  // (from the original)
inline constexpr guest::Function<0x00748164, u32(u32, u32, u32)> call_00748164;  // (from the original)
inline constexpr guest::Function<0x007481ec, u32(u32, u32, u32)> call_007481ec;  // (from the original)
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32)> call_0074824c;  // (from the original)
inline constexpr guest::Function<0x00748284, u32(u32, u32, u32)> call_00748284;  // (from the original)

u32 f_00248fb0(gptr<Object_00248fb0_0> arg0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x3c);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r0_14 = 0;
    u32 r5 = r0;
    u32 r0_1 = arg0->byte_11;
    u32 r0_2 = call_002fe7cc(r0_1, r1, r2, guest::cpu()->r[3]);
    u32 r4 = r0_2;
    call_00748284(frame.at(8).addr(), r5, guest::cpu()->r[2]);
    call_0074824c(frame.at(0x20).addr(), r5, guest::cpu()->r[2]);  // (from the original)
    u32 r0_6 = call_007481ec(frame.at(8).addr(), frame.at(0x20).addr(), guest::cpu()->r[2]);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_6 != 0) {
        do {
            if (r4 != 0) {
                call_0052edfc(frame.at(0x18).addr(), frame.at(0x10).addr(), r2);  // (from the original)
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                if (s32(*frame.at<u32>(0x1c)) <= 0) {  // (from the original)
                    if (*gptr<u32>(r5 + 0x20u) != 0) {  // (from the original)
                        call_00748164(frame.at(0).addr(), frame.at(0x10).addr(), r5 + 0x24u);  // (from the original)
                        u32 r0_10 = *frame.at<u32>(4);
                        u32 r1_3 = *frame.at<u32>(0);
                        u32 r2_5 = *gptr<u32>(r5 + 0x20u);  // (from the original)
                        call_0060d20c(frame.at(0x30).addr(), (r0_10 + (r0_10 << 2) << 5) + (r1_3 + (r1_3 << 2) << 1) + r2_5, r2_5);  // (from the original)
                        r1 = guest::cpu()->r[1];
                        r2 = guest::cpu()->r[2];
                        if (*frame.at<u8>(0x38) == 0) {  // (from the original)
                            goto L_2490bc;
                        }
                    }
                    guest::cpu()->r[1] = r1;
                    return 1u;
L_2490bc:;
                }
            }
            call_0052f144(frame.at(8).addr(), r1, r2);
            r0_14 = call_007481ec(frame.at(8).addr(), frame.at(0x20).addr(), guest::cpu()->r[2]);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            guest::preempt();
        } while (r0_14 != 0);
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_00248fb0
GUEST_EXPORT_FRAMED(0x00248fb0, d_00248fb0::f_00248fb0, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0024910c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0024910c {

struct __attribute__((packed)) Object_0024910c_0 {
    u8 unknown_0[0x12];  // (not used here)
    u8 byte_12;
    u8 unknown_13[0x1];  // (not used here)
    u32 word_14;
    u32 word_18;
};
GUEST_OFFSET(Object_0024910c_0, byte_12, 0x12);  // (from the original)
GUEST_OFFSET(Object_0024910c_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0024910c_0, word_18, 0x18);  // (from the original)

inline constexpr guest::Function<0x003026cc, u32(u32)> call_003026cc;  // (from the original)
inline constexpr guest::Function<0x0030ce60, u32(u32)> call_0030ce60;  // (from the original)
inline constexpr guest::Function<0x00314bc4, u32(u32)> call_00314bc4;  // (from the original)
inline constexpr guest::Function<0x005ca4b4, u32(u32)> call_005ca4b4;  // (from the original)
inline constexpr guest::Function<0x005ca530, u32(u32)> call_005ca530;  // (from the original)
inline constexpr guest::Function<0x0071831c, u32(u32)> call_0071831c;  // (from the original)
inline constexpr guest::Function<0x00718340, u32(u32)> call_00718340;  // (from the original)

u32 f_0024910c(gptr<Object_0024910c_0> arg0) {
    u32 r0_1 = arg0->byte_12;
    u32 r0_2 = call_005ca4b4(r0_1);
    if (r0_2 == 0) {
        u32 r0_3 = arg0->byte_12;
        r0_2 = call_005ca530(r0_3);
        if (r0_2 == 0) {
            return 0u;
        }
    }
    u32 r0_4 = call_0030ce60(r0_2);
    u32 r0_5 = call_00314bc4(r0_4);
    if (r0_5 != 0) {
        u32 r0_6 = call_003026cc(r0_4);
        if (r0_6 == arg0->byte_12) {
            u32 r0_7 = call_0071831c(r0_4);
            if (r0_7 == arg0->word_14) {
                u32 r0_8 = call_00718340(r0_4);
                if (r0_8 == arg0->word_18) {
                    return 1u;
                }
            }
        }
    }
    return 0u;
}

}  // namespace d_0024910c
GUEST_EXPORT_FRAMED(0x0024910c, d_0024910c::f_0024910c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0024919c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0024919c {

struct __attribute__((packed)) Object_0024919c_0 {
    u8 unknown_0[0x10];  // (not used here)
    u8 byte_10;
};
GUEST_OFFSET(Object_0024919c_0, byte_10, 0x10);  // (from the original)

struct __attribute__((packed)) Local_0024919c_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0024919c_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0024919c_ea_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_0024919c_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0024919c_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0024919c_ea_3, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_0024919c_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0024919c_ea_4, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0024919c_ea_4, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_0024919c_ea_5 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0024919c_ea_5, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0024919c_ea_5, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_0024919c_r3_14 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0024919c_r3_14, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0024919c_r3_14, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_0024919c_r3_15 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0024919c_r3_15, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0024919c_r3_15, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_0024919c_r3_17 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0024919c_r3_17, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0024919c_r3_17, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_0024919c_r3_18 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0024919c_r3_18, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0024919c_r3_18, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_0024919c_r5_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0024919c_r5_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0024919c_r5_1, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x0023fc84, u32(u32, u32, u32, u32)> call_0023fc84;  // (from the original)
inline constexpr guest::Function<0x00240010, u32(u32, u32, u32, u32)> call_00240010;  // (from the original)
inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> call_002fe7cc;  // (from the original)
inline constexpr guest::Function<0x00317148, u32(u32, u32, u32, u32)> call_00317148;  // (from the original)
inline constexpr guest::Function<0x0052ed04, u32(u32, u32, u32, u32)> call_0052ed04;  // (from the original)
inline constexpr guest::Function<0x0052edfc, u32(u32, u32, u32, u32)> call_0052edfc;  // (from the original)
inline constexpr guest::Function<0x0052f0f0, u32(u32, u32, u32, u32)> call_0052f0f0;  // (from the original)
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> call_0052f144;  // (from the original)
inline constexpr guest::Function<0x005ca52c, u32(u32, u32, u32, u32)> call_005ca52c;  // (from the original)
inline constexpr guest::Function<0x00605618, u32(u32, u32, u32, u32)> call_00605618;  // (from the original)
inline constexpr guest::Function<0x0060d20c, u32(u32, u32, u32, u32)> call_0060d20c;  // (from the original)
inline constexpr guest::Function<0x006cba30, u32(u32, u32, u32, u32)> call_006cba30;  // (from the original)
inline constexpr guest::Function<0x006cbbe4, u32(u32, u32, u32, u32)> call_006cbbe4;  // (from the original)
inline constexpr guest::Function<0x007206b8, u32(u32, u32, u32, u32)> call_007206b8;  // (from the original)
inline constexpr guest::Function<0x00748164, u32(u32, u32, u32, u32)> call_00748164;  // (from the original)
inline constexpr guest::Function<0x007481ec, u32(u32, u32, u32, u32)> call_007481ec;  // (from the original)
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32, u32)> call_0074824c;  // (from the original)
inline constexpr guest::Function<0x00748284, u32(u32, u32, u32, u32)> call_00748284;  // (from the original)
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32, u32)> call_0075291c;  // (from the original)
inline constexpr guest::Function<0x0075d608, u32(u32, u32, u32, u32)> call_0075d608;  // (from the original)

u32 f_0024919c(gptr<Object_0024919c_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x68);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r5 = 0;
    u32 r9 = 0;
    u32 r10 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    u32 r0_21 = 0;
    u32 r2_10 = 0;
    u32 r3_8 = 0;
    u32 r0_22 = 0;
    u32 r0_23 = 0;
    u32 r2_11 = 0;
    u32 r3_9 = 0;
    u32 r6_1 = 0;
    u32 r0_24 = 0;
    u32 r2_12 = 0;
    u32 r3_10 = 0;
    u32 r0_25 = 0;
    u32 r1_10 = 0;
    u32 r2_13 = 0;
    u32 r3_11 = 0;
    u32 r6_2 = 0;
    u32 r0_26 = 0;
    u32 r2_14 = 0;
    u32 r3_12 = 0;
    u32 r0_27 = 0;
    u32 r1_11 = 0;
    u32 r2_15 = 0;
    u32 r3_13 = 0;
    u32 r1_12 = 0;
    u32 r0_28 = 0;
    u32 r0_29 = 0;
    u32 r0_30 = 0;
    u32 r0_31 = 0;
    gptr<Local_0024919c_r3_14> r3_14 = gptr<Local_0024919c_r3_14>(0u);
    u32 r1_13 = 0;
    u32 r2_16 = 0;
    u32 r0_32 = 0;
    u32 r0_35 = 0;
    u32 r1_20 = 0;
    u32 r0_44 = 0;
    gptr<Local_0024919c_r3_18> r3_18 = gptr<Local_0024919c_r3_18>(0u);
    u32 r1_21 = 0;
    u32 r2_22 = 0;
    u32 r0_45 = 0;
    u32 r0_50 = 0;
    u32 r2_23 = 0;
    u32 r3_19 = 0;
    u32 r1_22 = 0;
    u32 r0_51 = 0;
    u32 r0_52 = 0;
    u32 r4 = r0;
    u32 r1_1 = r0 & ~0xffu;  // (from the original)
    u32 r0_1 = arg0->byte_10;
    u32 r7 = r1_1 | r0_1;
    u32 r0_2 = call_00240010(r0_1, r1_1, r2, r3);
    u32 r6 = r0_2;
    call_00748284(frame.at(0).addr(), r4, guest::cpu()->r[2], guest::cpu()->r[3]);
    call_0074824c(frame.at(0x10).addr(), r4, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_6 = call_007481ec(frame.at(0).addr(), frame.at(0x10).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_6 != 0) {
        do {
            gptr<Local_0024919c_r5_1> r5_1 = gptr<Local_0024919c_r5_1>(frame.at(8).addr());
            if (r6 != 0) {
                u32 r0_7 = call_007206b8(r6, r5_1->word_0, r5_1->word_4, r3);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_7 != 0) {
                    call_0023fc84(frame.at(0x30).addr(), r5_1->word_0, r5_1->word_4, r7 & 0xffu);  // (from the original)
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    u32 r0_9 = *frame.at<u32>(0x38) & 0xffu;  // (from the original)
                    if (r0_9 < 0xfcu) {  // (from the original)
                        u32 r0_10 = call_005ca52c(r0_9, r1, r2, r3);
                        r1 = guest::cpu()->r[1];
                        r2 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
                        if (r0_10 != 0) {
                            if (*gptr<u32>(r4 + 0x20u) == 0) {  // (from the original)
                                return 1u;
                            }
                            call_00748164(frame.at(0x28).addr(), frame.at(8).addr(), r4 + 0x24u, r3);  // (from the original)
                            gptr<Local_0024919c_ea_1> ea_1 = gptr<Local_0024919c_ea_1>(frame.at(0x28).addr());  // (from the original)
                            u32 r0_12 = ea_1->word_0;
                            u32 r1_6 = ea_1->word_4;
                            u32 r2_7 = *gptr<u32>(r4 + 0x20u);  // (from the original)
                            u32 r1_7 = (r1_6 + (r1_6 << 2) << 5) + (r0_12 + (r0_12 << 2) << 1) + r2_7;
                            call_0060d20c(frame.at(0x30).addr(), r1_7, r2_7, guest::cpu()->r[3]);  // (from the original)
                            r1 = guest::cpu()->r[1];
                            r2 = guest::cpu()->r[2];
                            r3 = guest::cpu()->r[3];
                            if (*frame.at<u8>(0x38) != 0) {  // (from the original)
                                u32 r5_2 = *frame.at<u32>(0xc);  // (from the original)
                                u32 r1_8 = *frame.at<u32>(8);
                                u32 r3_6 = *gptr<u8>(r4 + 0x10u);  // (from the original)
                                call_0023fc84(frame.at(0x50).addr(), r1_8, r5_2, r3_6);  // (from the original)
                                u32 r0_15 = *frame.at<u32>(0x58);  // (from the original)
                                gptr<Local_0024919c_ea_3> ea_3 = gptr<Local_0024919c_ea_3>(frame.at(0x50).addr());  // (from the original)
                                r1 = ea_3->word_0;
                                u32 r2_8 = ea_3->word_4;
                                u32 r0_16 = r0_15 & 0xffu;  // (from the original)
                                if (r0_16 < 0xfcu) {  // (from the original)
                                    *gptr<u8>(r4 + 0x12u) = u8(r0_16);  // (from the original)
                                    gptr<Local_0024919c_ea_4> ea_4 = gptr<Local_0024919c_ea_4>(r4 + 0x14u);  // (from the original)
                                    ea_4->word_0 = r1;
                                    ea_4->word_4 = r2_8;
                                }
                                goto L_249700;
                            }
                        }
                    }
                }
            }
            call_0052f144(frame.at(0).addr(), r1, r2, r3);
            r0_19 = call_007481ec(frame.at(0).addr(), frame.at(0x10).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            guest::preempt();
        } while (r0_19 != 0);
    }
    r0_20 = *gptr<u8>(r4 + 0x11u);  // (from the original)
    r0_21 = call_002fe7cc(r0_20, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r7 = r0_21;
    if (r0_21 == 0) {
        return 0u;
    }
    r0_22 = *gptr<u8>(r4 + 0x11u);  // (from the original)
    r0_23 = call_002fe7cc(r0_22, r1, r2_10, r3_8);
    r2_11 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r5 = r0_23;
    r6_1 = frame.at(0).addr();
    r0_24 = frame.at(0x20).addr();  // (from the original)
    call_00748284(r0_24, r4, r2_11, r3_9);
    r2_12 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r0_25 = r6_1 + 8u;
    *frame.at<u32>(0) = *frame.at<u32>(0x20);  // (from the original)
    *frame.at<u32>(4) = *frame.at<u32>(0x24);  // (from the original)
    r1_10 = frame.at(0x28).addr();  // (from the original)
    call_0052f0f0(r0_25, r1_10, r2_12, r3_10);
    r2_13 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    r6_2 = frame.at(0x10).addr();  // (from the original)
    r0_26 = frame.at(0x20).addr();  // (from the original)
    call_0074824c(r0_26, r4, r2_13, r3_11);
    r2_14 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    r0_27 = r6_2 + 8u;
    *frame.at<u32>(0x10) = *frame.at<u32>(0x20);  // (from the original)
    *frame.at<u32>(0x14) = *frame.at<u32>(0x24);  // (from the original)
    r1_11 = frame.at(0x28).addr();  // (from the original)
    call_0052f0f0(r0_27, r1_11, r2_14, r3_12);
    r2_15 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    r1_12 = frame.at(0x10).addr();  // (from the original)
    r0_28 = frame.at(0).addr();
    r0_29 = call_007481ec(r0_28, r1_12, r2_15, r3_13);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_29 == 0) {
        return 0u;
    } else {
        r9 = 0x59u;  // (from the original)
        r10 = 0x58u;  // (from the original)
    }
L_2493e4:;
    r0_30 = frame.at(8).addr();
    if (r5 == 0) {
        goto L_24969c;
    }
    r0_31 = frame.at(0x48).addr();  // (from the original)
    call_0052edfc(r0_31, r0_30, r2, r3);
    r3_14 = gptr<Local_0024919c_r3_14>(frame.at(0x48).addr());  // (from the original)
    r1_13 = r3_14->word_0;
    r2_16 = r3_14->word_4;
    r0_32 = call_0075291c(r5, r1_13, r2_16, r3_14.addr());
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_32 != 0) {
        call_0052ed04(frame.at(0x40).addr(), r0_30, r2, r3);  // (from the original)
        gptr<Local_0024919c_r3_15> r3_15 = gptr<Local_0024919c_r3_15>(frame.at(0x40).addr());  // (from the original)
        u32 r0_34 = call_0075d608(r0_32, r3_15->word_0, r3_15->word_4, r3_15.addr());
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        u32 res_1 = r0_34 - 0x9du;  // (from the original)
        u32 zf_1 = res_1 == 0;
        if (zf_1) {
            goto L_249498;
        }
        if (!zf_1 && (res_1 >> 0x1f) == (((r0_34 ^ 0x9du) & (r0_34 ^ res_1)) >> 0x1f)) {  // (from the original)
            if (r0_34 != 0x9eu && r0_34 != 0x9fu) {  // (from the original)
                goto L_249458;
            }
            goto L_249498;
        }
        if (r0_34 == 0x11u || r0_34 == 0x9cu) {  // (from the original)
            goto L_249498;
        }
L_249458:;
    }
L_249464:;
    goto L_24969c;
L_249498:;
    r0_35 = frame.at(0).addr();
    if (*gptr<u32>(r4 + 0x20u) != 0) {  // (from the original)
        call_00748164(frame.at(0x58).addr(), r0_35 + 8u, r4 + 0x24u, r3);  // (from the original)
        gptr<Local_0024919c_ea_5> ea_5 = gptr<Local_0024919c_ea_5>(frame.at(0x58).addr());  // (from the original)
        u32 r1_16 = ea_5->word_0;
        u32 r2_19 = ea_5->word_4;
        u32 r2_20 = r2_19 + (r2_19 << 2) << 5;
        u32 r1_17 = r2_20 + (r1_16 + (r1_16 << 2) << 1) + *gptr<u32>(r4 + 0x20u);  // (from the original)
        call_0060d20c(frame.at(0x34).addr(), r1_17, r2_20, guest::cpu()->r[3]);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (*frame.at<u8>(0x3c) != 0) {  // (from the original)
            call_0052edfc(frame.at(0x60).addr(), frame.at(8).addr(), r2, r3);  // (from the original)
            gptr<Local_0024919c_r3_17> r3_17 = gptr<Local_0024919c_r3_17>(frame.at(0x60).addr());  // (from the original)
            u32 r0_39 = call_00317148(r7, r3_17->word_0, r3_17->word_4, r3_17.addr());
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_39 != 0) {
                u32 r0_40 = *gptr<u16>(r0_39);
                u32 r0_41 = call_00605618(r0_40, r1, r2, r3);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_41 == 1u) {
                    *gptr<u8>(r4 + 0x12u) = u8(r9);  // (from the original)
                    goto L_249700;
                }
                if (r0_41 == 2u) {
                    u32 r0_42 = call_006cba30(r0_41, r1, r2, r3);
                    r1 = guest::cpu()->r[1];
                    *gptr<u8>(r4 + 0x12u) = u8(r0_42);  // (from the original)
                    goto L_249700;
                }
                if (r0_41 == 3u) {
                    *gptr<u8>(r4 + 0x12u) = u8(r10);  // (from the original)
                    goto L_249700;
                }
                if (r0_41 == 4u) {
                    u32 r0_43 = call_006cbbe4(r0_41, r1, r2, r3);
                    r1 = guest::cpu()->r[1];
                    *gptr<u8>(r4 + 0x12u) = u8(r0_43);  // (from the original)
                    goto L_249700;
                }
            }
        }
        guest::preempt();
        goto L_249464;
    }
    r1_20 = r0_35 + 8u;
    r0_44 = frame.at(0x38).addr();  // (from the original)
    call_0052edfc(r0_44, r1_20, r2, r3);
    r3_18 = gptr<Local_0024919c_r3_18>(frame.at(0x38).addr());  // (from the original)
    r1_21 = r3_18->word_0;
    r2_22 = r3_18->word_4;
    r0_45 = call_00317148(r7, r1_21, r2_22, r3_18.addr());
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_45 != 0) {
        u32 r0_46 = *gptr<u16>(r0_45);
        u32 r0_47 = call_00605618(r0_46, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_47 == 1u) {
            *gptr<u8>(r4 + 0x12u) = u8(r9);  // (from the original)
            goto L_2496f0;
        }
        if (r0_47 == 2u) {
            u32 r0_48 = call_006cba30(r0_47, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            *gptr<u8>(r4 + 0x12u) = u8(r0_48);  // (from the original)
            goto L_2496f0;
        }
        if (r0_47 == 3u) {
            *gptr<u8>(r4 + 0x12u) = u8(r10);  // (from the original)
            goto L_249700;
        }
        if (r0_47 == 4u) {
            u32 r0_49 = call_006cbbe4(r0_47, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            *gptr<u8>(r4 + 0x12u) = u8(r0_49);  // (from the original)
            return 1u;
        }
    }
L_24969c:;
    r0_50 = frame.at(0).addr();
    call_0052f144(r0_50, r1, r2, r3);
    r2_23 = guest::cpu()->r[2];
    r3_19 = guest::cpu()->r[3];
    r1_22 = frame.at(0x10).addr();  // (from the original)
    r0_51 = frame.at(0).addr();
    r0_52 = call_007481ec(r0_51, r1_22, r2_23, r3_19);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_52 != 0) {
        guest::preempt();
        goto L_2493e4;
    }
    return 0u;
L_2496f0:;
L_249700:;
    guest::cpu()->r[1] = r1;
    return 1u;
}

}  // namespace d_0024919c
GUEST_EXPORT_FRAMED(0x0024919c, d_0024919c::f_0024919c, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_00249eec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00249eec {

struct __attribute__((packed)) Object_00249eec_0 {
    u8 unknown_0[0x10];  // (not used here)
    u8 byte_10;
};
GUEST_OFFSET(Object_00249eec_0, byte_10, 0x10);  // (from the original)

struct __attribute__((packed)) Local_00249eec_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00249eec_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00249eec_ea_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_00249eec_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00249eec_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00249eec_ea_3, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_00249eec_ea_5 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00249eec_ea_5, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00249eec_ea_5, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_00249eec_r4_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00249eec_r4_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00249eec_r4_1, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x0023fc84, u32(u32, u32, u32, u32)> call_0023fc84;  // (from the original)
inline constexpr guest::Function<0x00240010, u32(u32, u32, u32, u32)> call_00240010;  // (from the original)
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> call_0052f144;  // (from the original)
inline constexpr guest::Function<0x0060d20c, u32(u32, u32, u32, u32)> call_0060d20c;  // (from the original)
inline constexpr guest::Function<0x006cbb94, u32(u32, u32, u32, u32)> call_006cbb94;  // (from the original)
inline constexpr guest::Function<0x007206b8, u32(u32, u32, u32, u32)> call_007206b8;  // (from the original)
inline constexpr guest::Function<0x00748164, u32(u32, u32, u32, u32)> call_00748164;  // (from the original)
inline constexpr guest::Function<0x007481ec, u32(u32, u32, u32, u32)> call_007481ec;  // (from the original)
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32, u32)> call_0074824c;  // (from the original)
inline constexpr guest::Function<0x00748284, u32(u32, u32, u32, u32)> call_00748284;  // (from the original)

u32 f_00249eec(gptr<Object_00249eec_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x54);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r0_17 = 0;
    u32 r6 = r0;
    u32 r1_1 = r0 & ~0xffu;  // (from the original)
    u32 r0_1 = arg0->byte_10;
    u32 r7 = r1_1 | r0_1;
    u32 r0_2 = call_00240010(r0_1, r1_1, r2, r3);
    u32 r5 = r0_2;
    call_00748284(frame.at(0).addr(), r6, guest::cpu()->r[2], guest::cpu()->r[3]);
    call_0074824c(frame.at(0x20).addr(), r6, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_6 = call_007481ec(frame.at(0).addr(), frame.at(0x20).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_6 != 0) {
        do {
            gptr<Local_00249eec_r4_1> r4_1 = gptr<Local_00249eec_r4_1>(frame.at(8).addr());
            if (r5 != 0) {
                u32 r0_7 = call_007206b8(r5, r4_1->word_0, r4_1->word_4, r3);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_7 != 0) {
                    call_0023fc84(frame.at(0x30).addr(), r4_1->word_0, r4_1->word_4, r7 & 0xffu);  // (from the original)
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    u32 r0_9 = *frame.at<u32>(0x38) & 0xffu;  // (from the original)
                    if (r0_9 < 0xfcu) {  // (from the original)
                        u32 r0_10 = call_006cbb94(r0_9, r1, r2, r3);
                        r1 = guest::cpu()->r[1];
                        r2 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
                        if (r0_10 != 0) {
                            if (*gptr<u32>(r6 + 0x20u) != 0) {  // (from the original)
                                call_00748164(frame.at(0x18).addr(), frame.at(8).addr(), r6 + 0x24u, r3);  // (from the original)
                                gptr<Local_00249eec_ea_1> ea_1 = gptr<Local_00249eec_ea_1>(frame.at(0x18).addr());  // (from the original)
                                u32 r1_6 = ea_1->word_0;
                                u32 r2_7 = ea_1->word_4;
                                u32 r2_8 = r2_7 + (r2_7 << 2) << 5;
                                u32 r1_7 = r2_8 + (r1_6 + (r1_6 << 2) << 1) + *gptr<u32>(r6 + 0x20u);  // (from the original)
                                call_0060d20c(frame.at(0x30).addr(), r1_7, r2_8, guest::cpu()->r[3]);  // (from the original)
                                r1 = guest::cpu()->r[1];
                                r2 = guest::cpu()->r[2];
                                r3 = guest::cpu()->r[3];
                                if (*frame.at<u8>(0x38) == 0) {  // (from the original)
                                    goto L_24a078;
                                }
                                u32 r4_2 = *frame.at<u32>(0xc);  // (from the original)
                                u32 r1_8 = *frame.at<u32>(8);
                                u32 r3_6 = *gptr<u8>(r6 + 0x10u);  // (from the original)
                                call_0023fc84(frame.at(0x40).addr(), r1_8, r4_2, r3_6);  // (from the original)
                                r1 = *frame.at<u32>(0x40);  // (from the original)
                                gptr<Local_00249eec_ea_3> ea_3 = gptr<Local_00249eec_ea_3>(frame.at(0x44).addr());  // (from the original)
                                u32 r0_14 = ea_3->word_0;
                                u32 r2_9 = ea_3->word_4 & 0xffu;  // (from the original)
                                if (r2_9 < 0xfcu) {  // (from the original)
                                    *gptr<u8>(r6 + 0x12u) = u8(r2_9);  // (from the original)
                                    gptr<Local_00249eec_ea_5> ea_5 = gptr<Local_00249eec_ea_5>(r6 + 0x14u);  // (from the original)
                                    ea_5->word_0 = r1;
                                    ea_5->word_4 = r0_14;
                                }
                            }
                            guest::cpu()->r[1] = r1;
                            return 1u;
L_24a078:;
                        }
                    }
                }
            }
            call_0052f144(frame.at(0).addr(), r1, r2, r3);
            r0_17 = call_007481ec(frame.at(0).addr(), frame.at(0x20).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            guest::preempt();
        } while (r0_17 != 0);
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_00249eec
GUEST_EXPORT_FRAMED(0x00249eec, d_00249eec::f_00249eec, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0024a0cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0024a0cc {

struct __attribute__((packed)) Object_0024a0cc_0 {
    u8 unknown_0[0x10];  // (not used here)
    u8 byte_10;
};
GUEST_OFFSET(Object_0024a0cc_0, byte_10, 0x10);  // (from the original)

struct __attribute__((packed)) Local_0024a0cc_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0024a0cc_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0024a0cc_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0024a0cc_ea_1, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_0024a0cc_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0024a0cc_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0024a0cc_ea_2, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_0024a0cc_r4_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0024a0cc_r4_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0024a0cc_r4_1, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x0023fc84, u32(u32, u32, u32, u32)> call_0023fc84;  // (from the original)
inline constexpr guest::Function<0x00240010, u32(u32, u32, u32, u32)> call_00240010;  // (from the original)
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> call_0052f144;  // (from the original)
inline constexpr guest::Function<0x005ca4f0, u32(u32, u32, u32, u32)> call_005ca4f0;  // (from the original)
inline constexpr guest::Function<0x0060d20c, u32(u32, u32, u32, u32)> call_0060d20c;  // (from the original)
inline constexpr guest::Function<0x006cbb94, u32(u32, u32, u32, u32)> call_006cbb94;  // (from the original)
inline constexpr guest::Function<0x007206b8, u32(u32, u32, u32, u32)> call_007206b8;  // (from the original)
inline constexpr guest::Function<0x00748164, u32(u32, u32, u32, u32)> call_00748164;  // (from the original)
inline constexpr guest::Function<0x007481ec, u32(u32, u32, u32, u32)> call_007481ec;  // (from the original)
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32, u32)> call_0074824c;  // (from the original)
inline constexpr guest::Function<0x00748284, u32(u32, u32, u32, u32)> call_00748284;  // (from the original)

u32 f_0024a0cc(gptr<Object_0024a0cc_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x54);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r0_18 = 0;
    u32 r6 = r0;
    u32 r1_1 = r0 & ~0xffu;  // (from the original)
    u32 r0_1 = arg0->byte_10;
    u32 r7 = r1_1 | r0_1;
    u32 r0_2 = call_00240010(r0_1, r1_1, r2, r3);
    u32 r5 = r0_2;
    call_00748284(frame.at(0).addr(), r6, guest::cpu()->r[2], guest::cpu()->r[3]);
    call_0074824c(frame.at(0x20).addr(), r6, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_6 = call_007481ec(frame.at(0).addr(), frame.at(0x20).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_6 != 0) {
        do {
            gptr<Local_0024a0cc_r4_1> r4_1 = gptr<Local_0024a0cc_r4_1>(frame.at(8).addr());
            if (r5 != 0) {
                u32 r0_7 = call_007206b8(r5, r4_1->word_0, r4_1->word_4, r3);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_7 != 0) {
                    call_0023fc84(frame.at(0x30).addr(), r4_1->word_0, r4_1->word_4, r7 & 0xffu);  // (from the original)
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    u32 r4_2 = *frame.at<u32>(0x38) & 0xffu;  // (from the original)
                    if (r4_2 < 0xfcu) {  // (from the original)
                        u32 r0_9 = call_005ca4f0(r4_2, r1, r2, r3);
                        r1 = guest::cpu()->r[1];
                        r2 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
                        if (r0_9 != 0) {
                            u32 r0_10 = call_006cbb94(r4_2, r1, r2, r3);
                            r1 = guest::cpu()->r[1];
                            r2 = guest::cpu()->r[2];
                            r3 = guest::cpu()->r[3];
                            if (r0_10 == 0) {
                                if (*gptr<u32>(r6 + 0x20u) != 0) {  // (from the original)
                                    call_00748164(frame.at(0x18).addr(), frame.at(8).addr(), r6 + 0x24u, r3);  // (from the original)
                                    u32 r0_12 = *frame.at<u32>(0x1c);  // (from the original)
                                    u32 r1_6 = *frame.at<u32>(0x18);  // (from the original)
                                    u32 r2_7 = *gptr<u32>(r6 + 0x20u);  // (from the original)
                                    u32 r1_7 = (r0_12 + (r0_12 << 2) << 5) + (r1_6 + (r1_6 << 2) << 1) + r2_7;
                                    call_0060d20c(frame.at(0x30).addr(), r1_7, r2_7, guest::cpu()->r[3]);  // (from the original)
                                    r1 = guest::cpu()->r[1];
                                    r2 = guest::cpu()->r[2];
                                    r3 = guest::cpu()->r[3];
                                    if (*frame.at<u8>(0x38) == 0) {  // (from the original)
                                        goto L_24a264;
                                    }
                                    u32 r4_3 = *frame.at<u32>(0xc);  // (from the original)
                                    u32 r1_8 = *frame.at<u32>(8);
                                    u32 r3_6 = *gptr<u8>(r6 + 0x10u);  // (from the original)
                                    call_0023fc84(frame.at(0x40).addr(), r1_8, r4_3, r3_6);  // (from the original)
                                    gptr<Local_0024a0cc_ea_1> ea_1 = gptr<Local_0024a0cc_ea_1>(frame.at(0x40).addr());  // (from the original)
                                    u32 r0_15 = ea_1->word_0;
                                    r1 = ea_1->word_4;
                                    u32 r2_8 = ea_1->word_8 & 0xffu;  // (from the original)
                                    if (r2_8 < 0xfcu) {  // (from the original)
                                        *gptr<u8>(r6 + 0x12u) = u8(r2_8);  // (from the original)
                                        gptr<Local_0024a0cc_ea_2> ea_2 = gptr<Local_0024a0cc_ea_2>(r6 + 0x14u);  // (from the original)
                                        ea_2->word_0 = r0_15;
                                        ea_2->word_4 = r1;
                                    }
                                }
                                guest::cpu()->r[1] = r1;
                                return 1u;
L_24a264:;
                            }
                        }
                    }
                }
            }
            call_0052f144(frame.at(0).addr(), r1, r2, r3);
            r0_18 = call_007481ec(frame.at(0).addr(), frame.at(0x20).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            guest::preempt();
        } while (r0_18 != 0);
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_0024a0cc
GUEST_EXPORT_FRAMED(0x0024a0cc, d_0024a0cc::f_0024a0cc, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0024a528: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0024a528 {

inline constexpr guest::Function<0x00615328, u32(u32)> call_00615328;  // (from the original)

void f_0024a528(u32 r0) {
    call_00615328(r0);
    *gptr<u8>(r0 + 0xau) = 0;  // (from the original)
    *gptr<u8>(r0 + 0xbu) = 0;  // (from the original)
    *gptr<u32>(r0 + 0xcu) = 0;  // (from the original)
}

}  // namespace d_0024a528
GUEST_EXPORT_FRAMED(0x0024a528, d_0024a528::f_0024a528, 0x4010);  // pushes {r4, lr} first, as the original

// f_0024a548: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0024a548 {

inline constexpr guest::Function<0x00615328, u32(u32)> call_00615328;  // (from the original)

u32 f_0024a548(u32 r0) {
    call_00615328(r0);
    *gptr<u8>(r0 + 0xau) = 0;  // (from the original)
    *gptr<u8>(r0 + 0xbu) = 0;  // (from the original)
    *gptr<u32>(r0 + 0xcu) = 0;  // (from the original)
    return r0;
}

}  // namespace d_0024a548
GUEST_EXPORT_FRAMED(0x0024a548, d_0024a548::f_0024a548, 0x4010);  // pushes {r4, lr} first, as the original

// f_0024a56c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0024a56c {

inline constexpr guest::Function<0x002f825c, u32(u32, u32)> call_002f825c;  // (from the original)

u32 f_0024a56c(u32 r0) {
    call_002f825c(r0, 0x320u);  // (from the original)
    return r0;
}

}  // namespace d_0024a56c
GUEST_EXPORT_FRAMED(0x0024a56c, d_0024a56c::f_0024a56c, 0x4010);  // pushes {r4, lr} first, as the original

// f_0024a684: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0024a684 {


void f_0024a684(u32 r0, u32 r1) {
    u32 r2 = 0u;
    do {
        u32 r4_1 = r0 + (r2 << 2);
        *gptr<u32>(r0 + (r2 << 2)) = *gptr<u32>(r1 + (r2 << 2));
        u32 r3_1 = *gptr<u32>(r1 + (r2 << 2) + 4u);
        r2 += 2u;
        *gptr<u32>(r4_1 + 4u) = r3_1;
        guest::preempt();
    } while (r2 < 0xbau);  // (from the original)
}

}  // namespace d_0024a684
GUEST_EXPORT_FRAMED(0x0024a684, d_0024a684::f_0024a684, 0x10);  // pushes {r4} first, as the original

// f_0024a6b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0024a6b8 {

struct __attribute__((packed)) Local_0024a6b8_r0_1 {
    u8 unknown_0[0x1b4];  // (not used here)
    u8 byte_1b4;
};
GUEST_OFFSET(Local_0024a6b8_r0_1, byte_1b4, 0x1b4);  // (from the original)


void f_0024a6b8(u32 r0, u32 r1) {
    gptr<Local_0024a6b8_r0_1> r0_1 = gptr<Local_0024a6b8_r0_1>(r0 + r1);
    u32 r1_1 = r0_1->byte_1b4;
    if ((r1_1 & 2u) == 0) {
        r0_1->byte_1b4 = u8(r1_1 | 2u);
    }
}

}  // namespace d_0024a6b8
GUEST_EXPORT(0x0024a6b8, d_0024a6b8::f_0024a6b8);

// f_0024a6d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0024a6d0 {

struct __attribute__((packed)) Local_0024a6d0_r0_2 {
    u8 unknown_0[0x1b4];  // (not used here)
    u8 byte_1b4;
};
GUEST_OFFSET(Local_0024a6d0_r0_2, byte_1b4, 0x1b4);  // (from the original)

inline constexpr guest::Function<0x0029b88c, u32(u32, u32, u32, u32)> call_0029b88c;  // (from the original)
inline constexpr guest::Function<0x002fd068, u32(u32, u32)> call_002fd068;  // (from the original)
inline constexpr guest::Function<0x006b8a00, u32(u32, u32)> call_006b8a00;  // (from the original)

u32 f_0024a6d0(u32 r0, u32 r1) {
    u32 r6 = r0;
    u32 r9 = 0u;
    u32 r10 = 0x1869fu;  // (from the original)
    u32 r4 = r9;
    do {
        u32 r5_1 = r4 & 0xffu;  // (from the original)
        if (r5_1 != 0) {
            u32 r0_1 = call_0029b88c(r5_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = *gptr<u32>(r6 + (r5_1 << 2) + 0x1cu);  // (from the original)
            if (*gptr<u32>(r0_1 + 0xcu) <= r1) {  // (from the original)
                gptr<Local_0024a6d0_r0_2> r0_2 = gptr<Local_0024a6d0_r0_2>(r6 + r5_1);
                r1 = r0_2->byte_1b4;
                if ((r1 & 1u) == 0) {
                    u32 r1_1 = r1 | 1u;
                    r0_2->byte_1b4 = u8(r1_1);
                    if ((r1_1 & 4u) == 0) {
                        u32 r1_2 = r1_1 | 4u;
                        r0_2->byte_1b4 = u8(r1_2);
                        u32 r0_3 = call_002fd068(r0_2.addr(), r1_2);
                        call_006b8a00(r0_3, 1u);
                        r1_1 = guest::cpu()->r[1];
                    }
                    u32 r0_4 = call_0029b88c(r5_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
                    r1 = guest::cpu()->r[1];
                    u32 r0_5 = *gptr<u32>(r0_4 + 4u);
                    if (r0_5 == 0) {
                        r0_5 = 2u;
                    } else {
                        u32 zf_1 = r0_5 == 1u;
                        if (zf_1) {
                            r0_5 = 3u;
                        } else {
                            zf_1 = r0_5 == 2u;
                        }
                        if (!zf_1) {
                            r0_5 = r0_5 == 3u;
                        }
                    }
                    r9 += r0_5;
                    if (r9 > r10) {
                        r9 = r10;
                    }
                }
            }
        }
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 0x66);  // (from the original)
    return r9;
}

}  // namespace d_0024a6d0
GUEST_EXPORT_FRAMED(0x0024a6d0, d_0024a6d0::f_0024a6d0, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0024a7d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0024a7d4 {

inline constexpr guest::Function<0x002f825c, u32(u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x00303cdc, u32(u32)> call_00303cdc;  // (from the original)
inline constexpr guest::Function<0x00779598, u32(u32)> call_00779598;  // (from the original)

void f_0024a7d4(u32 r0) {
    call_00303cdc(r0);
    call_002f825c(r0 + 0x1cu, 0x198u);  // (from the original)
    call_002f825c(r0 + 0x1b4u, 0x66u);  // (from the original)
    *gptr<u8>(r0 + 8u) = 0;
    *gptr<u8>(r0 + 9u) = 0;
    call_00779598(r0 + 0xau);  // (from the original)
    call_00779598(r0 + 0x11u);  // (from the original)
    *gptr<u8>(r0 + 0x18u) = 0x65;  // (from the original)
    *gptr<u32>(r0 + 0x21cu) = 0;  // (from the original)
    *gptr<u32>(r0 + 0x220u) = 0;  // (from the original)
    *gptr<u32>(r0 + 0x224u) = 0;  // (from the original)
    *gptr<u32>(r0 + 0x228u) = 0;  // (from the original)
    *gptr<u32>(r0 + 0x22cu) = 0;  // (from the original)
    *gptr<u32>(r0 + 0x230u) = 0;  // (from the original)
    *gptr<u32>(r0 + 0x234u) = 0;  // (from the original)
    *gptr<u32>(r0 + 0x238u) = 0;  // (from the original)
    *gptr<u8>(r0 + 0x19u) = 0;  // (from the original)
    *gptr<u8>(r0 + 0x1au) = 0;  // (from the original)
}

}  // namespace d_0024a7d4
GUEST_EXPORT_FRAMED(0x0024a7d4, d_0024a7d4::f_0024a7d4, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0024a848: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0024a848 {

inline constexpr guest::Function<0x002f825c, u32(u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x00303cdc, u32(u32)> call_00303cdc;  // (from the original)
inline constexpr guest::Function<0x00779598, u32(u32)> call_00779598;  // (from the original)

void f_0024a848(u32 r0) {
    call_00303cdc(r0);
    call_002f825c(r0 + 0x1cu, 0x198u);  // (from the original)
    call_002f825c(r0 + 0x1b4u, 0x66u);  // (from the original)
    *gptr<u8>(r0 + 8u) = 0;
    *gptr<u8>(r0 + 9u) = 0;
    call_00779598(r0 + 0xau);  // (from the original)
    call_00779598(r0 + 0x11u);  // (from the original)
    *gptr<u8>(r0 + 0x18u) = 0x65;  // (from the original)
    *gptr<u32>(r0 + 0x21cu) = 0;  // (from the original)
    *gptr<u32>(r0 + 0x220u) = 0;  // (from the original)
    *gptr<u32>(r0 + 0x224u) = 0;  // (from the original)
    *gptr<u32>(r0 + 0x228u) = 0;  // (from the original)
    *gptr<u32>(r0 + 0x22cu) = 0;  // (from the original)
    *gptr<u32>(r0 + 0x230u) = 0;  // (from the original)
    *gptr<u32>(r0 + 0x234u) = 0;  // (from the original)
    *gptr<u32>(r0 + 0x238u) = 0;  // (from the original)
    *gptr<u8>(r0 + 0x19u) = 0;  // (from the original)
    *gptr<u8>(r0 + 0x1au) = 0;  // (from the original)
}

}  // namespace d_0024a848
GUEST_EXPORT_FRAMED(0x0024a848, d_0024a848::f_0024a848, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0024b448: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0024b448 {

struct __attribute__((packed)) Local_0024b448_r5_1 {
    u8 unknown_0[0x1c];  // (not used here)
    u32 word_1c;
};
GUEST_OFFSET(Local_0024b448_r5_1, word_1c, 0x1c);  // (from the original)

inline constexpr guest::Function<0x0029b88c, u32(u32, u32, u32)> call_0029b88c;  // (from the original)
inline constexpr guest::Function<0x00303534, u32(u32, u32, u32)> call_00303534;  // (from the original)
inline constexpr guest::Function<0x00303660, u32(u32, u32)> call_00303660;  // (from the original)
inline constexpr guest::Function<0x00305f2c, u32(u32, u32, u32, u32)> call_00305f2c;  // (from the original)
inline constexpr guest::Function<0x00613c8c, u32(u32, u32, u32)> call_00613c8c;  // (from the original)
inline constexpr guest::Function<0x00613d38, u32(u32, u32)> call_00613d38;  // (from the original)
inline constexpr guest::Function<0x007159b0, u32(u32, u32, u32)> call_007159b0;  // (from the original)

u32 f_0024b448(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r1_5 = 0;
    u32 r7 = r0;
    u32 r4 = r1;
    u32 r6 = r2;
    u32 r0_1 = call_00305f2c(r0, r1, r2, guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_1 == 3u) {
    } else {
        u32 r5 = 0u;
L_24b46c:;
        if (r4 != 2u) {
            u32 r0_2 = call_007159b0(r7, r5, r2);
            r2 = guest::cpu()->r[2];
            if (r0_2 != r4) {
                r5 += 1u;
                if (s32(r5) >= 4) {
                    return r0_2;
                }
                guest::preempt();
                goto L_24b46c;
            }
        }
        gptr<Local_0024b448_r5_1> r5_1 = gptr<Local_0024b448_r5_1>(r7 + (r4 << 2));
        call_00303534(frame.at(0).addr(), r5_1->word_1c, r2);
        if (s32(r6) >= 0) {
            u32 r0_4 = call_0029b88c(r4, guest::cpu()->r[1], guest::cpu()->r[2]);
            call_00613c8c(frame.at(0).addr(), r6, *gptr<u32>(r0_4 + 0xcu));  // (from the original)
            r1_5 = guest::cpu()->r[1];
        } else {
            call_00613d38(frame.at(0).addr(), r6);
            r1_5 = guest::cpu()->r[1];
        }
        r0_1 = call_00303660(frame.at(0).addr(), r1_5);
        r1_1 = guest::cpu()->r[1];
        r5_1->word_1c = r0_1;
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0024b448
GUEST_EXPORT_FRAMED(0x0024b448, d_0024b448::f_0024b448, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0024b500: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0024b500 {

inline constexpr guest::Function<0x0029b88c, u32(u32, u32, u32)> call_0029b88c;  // (from the original)
inline constexpr guest::Function<0x00303534, u32(u32, u32, u32)> call_00303534;  // (from the original)
inline constexpr guest::Function<0x00303660, u32(u32)> call_00303660;  // (from the original)
inline constexpr guest::Function<0x00613c8c, u32(u32, u32, u32)> call_00613c8c;  // (from the original)
inline constexpr guest::Function<0x007159b0, u32(u32, u32, u32, u32)> call_007159b0;  // (from the original)

void f_0024b500(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r5 = r0;
    u32 r4 = r1;
    u32 r7 = 0x11u;  // (from the original)
    u32 r6 = 0u;
    do {
        u32 r0_1 = call_007159b0(r5, r6, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0_1 == r7) {
            u32 r8 = r5 + (r7 << 2);
            r6 = *gptr<u32>(r8 + 0x1cu);  // (from the original)
            if (s32(r6) < 3) {
                if (s32(r6) <= 0) {
                    r0 = 0u;
                } else {
                    r0 = r6 & 1u;
                    r1 = 0u;
                    if (s32(r0) > 0) {
                        do {
                            r2 = *gptr<u32>(r5 + (r1 << 2) + 0x21cu);  // (from the original)
                            if (r2 == r4) {
                                guest::cpu()->r[1] = r1;
                                return;
                            }
                            r1 += 1u;
                            guest::preempt();
                        } while (s32(r0) > s32(r1));
                    }
                }
                if (s32(r0) < s32(r6)) {
                    do {
                        r1 = r5 + (r0 << 2);
                        r2 = *gptr<u32>(r1 + 0x21cu);  // (from the original)
                        u32 zf_1 = r2 == r4;
                        if (!zf_1) {
                            r1 = *gptr<u32>(r1 + 0x220u);  // (from the original)
                            zf_1 = r1 == r4;
                        }
                        if (zf_1) {
                            guest::cpu()->r[1] = r1;
                            return;
                        }
                        r0 += 2u;
                        guest::preempt();
                    } while (s32(r6) > s32(r0));
                }
                call_00303534(frame.at(0).addr(), r6, r2);
                u32 r0_3 = call_0029b88c(r7, guest::cpu()->r[1], guest::cpu()->r[2]);
                call_00613c8c(frame.at(0).addr(), 1u, *gptr<u32>(r0_3 + 0xcu));  // (from the original)
                u32 r0_6 = call_00303660(frame.at(0).addr());
                r1 = r5 + (r6 << 2);
                *gptr<u32>(r8 + 0x1cu) = r0_6;  // (from the original)
                *gptr<u32>(r1 + 0x21cu) = r4;  // (from the original)
            }
            guest::cpu()->r[1] = r1;
            return;
        }
        r6 += 1u;
        guest::preempt();
    } while (s32(r6) < 4);
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0024b500
GUEST_EXPORT_FRAMED(0x0024b500, d_0024b500::f_0024b500, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0024b600: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0024b600 {

struct __attribute__((packed)) Local_0024b600_r0_1 {
    u8 unknown_0[0x1b4];  // (not used here)
    u8 byte_1b4;
};
GUEST_OFFSET(Local_0024b600_r0_1, byte_1b4, 0x1b4);  // (from the original)

inline constexpr guest::Function<0x002fd068, u32(u32)> call_002fd068;  // (from the original)
inline constexpr guest::Function<0x006b8a00, u32(u32, u32)> call_006b8a00;  // (from the original)

void f_0024b600(u32 r0, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    gptr<Local_0024b600_r0_1> r0_1 = gptr<Local_0024b600_r0_1>(r0 + r1);
    u32 r1_1 = r0_1->byte_1b4;
    if ((r1_1 & 4u) != 0) {
        guest::cpu()->r[1] = r1_1;
        return;
    }
    r0_1->byte_1b4 = u8(r1_1 | 4u);
    u32 r0_2 = call_002fd068(r0_1.addr());
    frame.release();
    call_006b8a00(r0_2, 1u);
    return;
}

}  // namespace d_0024b600
GUEST_EXPORT(0x0024b600, d_0024b600::f_0024b600);

// f_0024b630: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0024b630 {

struct __attribute__((packed)) Local_0024b630_r1_1 {
    u8 unknown_0[0x228];  // (not used here)
    u32 word_228;
    u32 word_22c;
};
GUEST_OFFSET(Local_0024b630_r1_1, word_228, 0x228);  // (from the original)
GUEST_OFFSET(Local_0024b630_r1_1, word_22c, 0x22c);  // (from the original)

inline constexpr guest::Function<0x0029b88c, u32(u32, u32, u32)> call_0029b88c;  // (from the original)
inline constexpr guest::Function<0x00303534, u32(u32, u32, u32)> call_00303534;  // (from the original)
inline constexpr guest::Function<0x00303660, u32(u32)> call_00303660;  // (from the original)
inline constexpr guest::Function<0x00613c8c, u32(u32, u32, u32)> call_00613c8c;  // (from the original)
inline constexpr guest::Function<0x007159b0, u32(u32, u32, u32, u32)> call_007159b0;  // (from the original)

void f_0024b630(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r5 = r0;
    u32 r4 = r1;
    u32 r7 = 0x12u;  // (from the original)
    u32 r6 = 0u;
    do {
        u32 r0_1 = call_007159b0(r5, r6, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        if (r0_1 == r7) {
            u32 r8 = r5 + (r7 << 2);
            r6 = *gptr<u32>(r8 + 0x1cu);  // (from the original)
            if (s32(r6) < 5) {
                if (s32(r6) <= 0) {
                    r0 = 0u;
                } else {
                    r0 = r6 & 1u;
                    r1 = 0u;
                    if (s32(r0) > 0) {
                        do {
                            r2 = *gptr<u32>(r5 + (r1 << 2) + 0x228u);  // (from the original)
                            if (r2 == r4) {
                                return;
                            }
                            r1 += 1u;
                            guest::preempt();
                        } while (s32(r0) > s32(r1));
                    }
                }
                if (s32(r0) < s32(r6)) {
                    do {
                        gptr<Local_0024b630_r1_1> r1_1 = gptr<Local_0024b630_r1_1>(r5 + (r0 << 2));
                        r2 = r1_1->word_228;
                        if (r2 == r4 || r1_1->word_22c == r4) {
                            return;
                        }
                        r0 += 2u;
                        guest::preempt();
                    } while (s32(r6) > s32(r0));
                }
                call_00303534(frame.at(0).addr(), r6, r2);
                u32 r0_3 = call_0029b88c(r7, guest::cpu()->r[1], guest::cpu()->r[2]);
                call_00613c8c(frame.at(0).addr(), 1u, *gptr<u32>(r0_3 + 0xcu));  // (from the original)
                u32 r0_6 = call_00303660(frame.at(0).addr());
                *gptr<u32>(r8 + 0x1cu) = r0_6;  // (from the original)
                *gptr<u32>(r5 + (r6 << 2) + 0x228u) = r4;  // (from the original)
            }
            return;
        }
        r6 += 1u;
        guest::preempt();
    } while (s32(r6) < 4);
}

}  // namespace d_0024b630
GUEST_EXPORT_FRAMED(0x0024b630, d_0024b630::f_0024b630, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0024b730: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0024b730 {

inline constexpr guest::Function<0x002f825c, u32(u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x00303cdc, u32(u32)> call_00303cdc;  // (from the original)
inline constexpr guest::Function<0x005cdf48, u32(u32, u32, u32, u32)> call_005cdf48;  // (from the original)
inline constexpr guest::Function<0x00779598, u32(u32)> call_00779598;  // (from the original)

u32 f_0024b730(u32 r0, u32 r1) {
    call_005cdf48(r0, r1, ~0u, ~0x80000000u);  // (from the original)
    call_00303cdc(r0);
    call_002f825c(r0 + 0x1cu, 0x198u);  // (from the original)
    call_002f825c(r0 + 0x1b4u, 0x66u);  // (from the original)
    *gptr<u8>(r0 + 8u) = 0;
    *gptr<u8>(r0 + 9u) = 0;
    call_00779598(r0 + 0xau);  // (from the original)
    call_00779598(r0 + 0x11u);  // (from the original)
    *gptr<u8>(r0 + 0x18u) = 0x65;  // (from the original)
    *gptr<u32>(r0 + 0x21cu) = 0;  // (from the original)
    *gptr<u32>(r0 + 0x220u) = 0;  // (from the original)
    *gptr<u32>(r0 + 0x224u) = 0;  // (from the original)
    *gptr<u32>(r0 + 0x228u) = 0;  // (from the original)
    *gptr<u32>(r0 + 0x22cu) = 0;  // (from the original)
    *gptr<u32>(r0 + 0x230u) = 0;  // (from the original)
    *gptr<u32>(r0 + 0x234u) = 0;  // (from the original)
    *gptr<u32>(r0 + 0x238u) = 0;  // (from the original)
    *gptr<u8>(r0 + 0x19u) = 0;  // (from the original)
    *gptr<u8>(r0 + 0x1au) = 0;  // (from the original)
    return r0;
}

}  // namespace d_0024b730
GUEST_EXPORT_FRAMED(0x0024b730, d_0024b730::f_0024b730, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0024b97c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0024b97c {

inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x00303534, u32(u32, u32, u32, u32)> call_00303534;  // (from the original)

u32 f_0024b97c(u32 r0) {
    u32 r0_1 = call_00301d0c(r0, 0x613dc0u, 8u, 0x18u);  // (from the original)
    u32 r5 = r0_1;
    call_00303534(r0_1 + 0xd8u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r6 = 0u;
    call_00303534(r5 + 0xe0u, r6, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r2 = guest::cpu()->r[2];
    u32 r3 = guest::cpu()->r[3];
    u32 r4 = 0u;
    do {
        call_00303534(r5 + (r4 << 3), 0u, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 0x18);  // (from the original)
    *gptr<u32>(r5 + 0xc0u) = r6;  // (from the original)
    *gptr<u32>(r5 + 0xc4u) = r6;  // (from the original)
    *gptr<u32>(r5 + 0xc8u) = r6;  // (from the original)
    *gptr<u32>(r5 + 0xccu) = r6;  // (from the original)
    *gptr<u32>(r5 + 0xd0u) = r6;  // (from the original)
    *gptr<u32>(r5 + 0xd4u) = r6;  // (from the original)
    call_00303534(r5 + 0xd8u, 0u, r2, r3);  // (from the original)
    call_00303534(r5 + 0xe0u, 0u, r2, r3);  // (from the original)
    return r5;
}

}  // namespace d_0024b97c
GUEST_EXPORT_FRAMED(0x0024b97c, d_0024b97c::f_0024b97c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0024c4dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0024c4dc {

struct __attribute__((packed)) Object_0024c4dc_0 {
    u8 unknown_0[0x4c];  // (not used here)
    u32 word_4c;
};
GUEST_OFFSET(Object_0024c4dc_0, word_4c, 0x4c);  // (from the original)

inline constexpr guest::Function<0x0024c71c, u32(u32, u32, u32, u32)> call_0024c71c;  // (from the original)

u32 f_0024c4dc(gptr<Object_0024c4dc_0> arg0, u32 r1) {
    guest::StackFrame frame(0x68);  // the original's stack frame
    if (r1 >= 0x19u) {  // (from the original)
        return 0u;
    }
    if ((arg0->word_4c & lsl_r(1u, r1 & 0xff)) != 0) {  // (from the original)
        return 0u;
    }
    call_0024c71c(arg0.addr(), frame.at(0).addr(), 1u, guest::cpu()->r[3]);
    return *gptr<u32>(frame.at(0).addr() + (r1 << 2));
}

}  // namespace d_0024c4dc
GUEST_EXPORT_FRAMED(0x0024c4dc, d_0024c4dc::f_0024c4dc, 0x4010);  // pushes {r4, lr} first, as the original

// f_0024c53c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0024c53c {

inline constexpr guest::Function<0x00306e7c, u32(u32, u32, u32)> call_00306e7c;  // (from the original)
inline constexpr guest::Function<0x00306f60, u32(u32, u32, u32)> call_00306f60;  // (from the original)
inline constexpr guest::Function<0x00307040, u32(u32, u32, u32, u32)> call_00307040;  // (from the original)
inline constexpr guest::Function<0x0030716c, u32(u32, u32, u32)> call_0030716c;  // (from the original)
inline constexpr guest::Function<0x007701f8, u32(u32, u32, u32)> call_007701f8;  // (from the original)

u32 f_0024c53c(u32 r0, u32 r1) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r0_5 = 0;
    u32 r6 = r0;
    u32 r0_2 = call_00307040(frame.at(0).addr(), 5u, frame.at(0x14).addr(), guest::cpu()->r[3]);  // (from the original)
    *gptr<u32>(r0_2) = 0x8eb364;  // (from the original)
    call_00306e7c(frame.at(0).addr(), 0x8eb364u, guest::cpu()->r[2]);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_3 = guest::cpu()->r[2];
    if (r1 != 0) {
        if ((u32(*gptr<u8>(0x5712u + r1)) >> 7) == 0) {  // (from the original)
        } else {
            u32 r4 = 1u;
            u32 r5 = r1 + 0x6c20u;  // (from the original)
            do {
                u32 r0_4 = call_007701f8(r5, 8u, r4);
                r1_1 = guest::cpu()->r[1];
                r2_3 = guest::cpu()->r[2];
                if (r0_4 != 0) {
                    goto L_24c634;
                }
                r4 += 1u;
                guest::preempt();
            } while (s32(r4) < 9);
        }
    }
    r0_5 = u32(*gptr<u8>(r6 + 0xcu)) & 7u;  // (from the original)
    if (r0_5 != 0) {
        if (r0_5 == 1u) {
            call_0030716c(frame.at(0).addr(), 1u, r2_3);
            call_0030716c(frame.at(0).addr(), 4u, guest::cpu()->r[2]);
            r1_1 = guest::cpu()->r[1];
            r2_3 = guest::cpu()->r[2];
        } else if (r0_5 != 2u && r0_5 == 3u) {
            call_0030716c(frame.at(0).addr(), 3u, r2_3);
            call_0030716c(frame.at(0).addr(), 4u, guest::cpu()->r[2]);
            r1_1 = guest::cpu()->r[1];
            r2_3 = guest::cpu()->r[2];
        }
    } else {
        call_0030716c(frame.at(0).addr(), 0u, r2_3);
        r1_1 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
    }
L_24c634:;
    u32 r0_12 = call_00306f60(frame.at(0).addr(), r1_1, r2_3);
    u32 r1_2 = u32(*gptr<u8>(r6 + 0xcu)) & 0x47u;  // (from the original)
    u32 r0_13 = r1_2 | r0_12 << 3;
    *gptr<u8>(r6 + 0xcu) = u8(r0_13);  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return r0_13;
}

}  // namespace d_0024c53c
GUEST_EXPORT_FRAMED(0x0024c53c, d_0024c53c::f_0024c53c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0024c71c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0024c71c {

struct __attribute__((packed)) Local_0024c71c_r1_2 {
    u32 word_0;
};
GUEST_OFFSET(Local_0024c71c_r1_2, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x00306e7c, u32(u32, u32, u32, u32)> call_00306e7c;  // (from the original)
inline constexpr guest::Function<0x00307040, u32(u32, u32, u32, u32)> call_00307040;  // (from the original)
inline constexpr guest::Function<0x0030716c, u32(u32, u32, u32, u32)> call_0030716c;  // (from the original)
inline constexpr guest::Function<0x00540c1c, u32(u32, u32, u32, u32)> call_00540c1c;  // (from the original)
inline constexpr guest::Function<0x00718e78, u32(u32, u32, u32, u32)> call_00718e78;  // (from the original)

u32 f_0024c71c(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x104);  // the original's stack frame
    u32 r12 = 0;
    gptr<Local_0024c71c_r1_2> r1_2 = gptr<Local_0024c71c_r1_2>(0u);
    u32 r8 = r0;
    u32 r9 = r1;
    u32 r0_2 = call_00307040(frame.at(0xd8).addr(), 0x32u, frame.at(0xec).addr(), r3);  // (from the original)
    *gptr<u32>(r0_2) = 0x8eb358;  // (from the original)
    call_00306e7c(frame.at(0xd8).addr(), 0x8eb358u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *frame.at<u32>(0x100) = u32(*gptr<u8>(r8 + 0x50u));  // (from the original)
    u32 r10 = 0u;
    *frame.at<u32>(0) = r10;
    *frame.at<u32>(4) = r10;
    *frame.at<u32>(8) = r10;
    call_00540c1c(frame.at(0).addr(), 0x19u, frame.at(0xc).addr(), guest::cpu()->r[3]);  // (from the original)
    u32 r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 r7 = 0u;
    u32 r11 = frame.at(0x70).addr();  // (from the original)
    do {
        u32 r4 = 0u;
        u32 r5 = r7 + (r7 << 2);
        do {
            u32 r0_6 = call_00718e78(frame.at(0xd8).addr(), frame.at(0x100).addr(), r2, r3);  // (from the original)
            call_0030716c(frame.at(0xd8).addr(), r0_6, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            r3 = guest::cpu()->r[3];
            r12 = guest::cpu()->r[12];
            u32 r0_8 = r5 + r4;
            *gptr<u32>(r11 + (r0_8 << 2)) = r0_6 + 1u;
            r2 = *frame.at<u32>(4);
            if (s32(*frame.at<u32>(0)) < s32(r2)) {
                r2 = *frame.at<u32>(0);
                *gptr<u32>(*frame.at<u32>(8) + (r2 << 2)) = r11 + (r0_8 << 2);
                *frame.at<u32>(0) = *frame.at<u32>(0) + 1u;
            }
            r4 += 1u;
            guest::preempt();
        } while (r4 < 5u);
        r7 += 1u;
        guest::preempt();
    } while (r7 < 5u);
    r0 = 0u;
    r2 = 1u;
    do {
        if ((*gptr<u32>(r8 + 0x4cu) & lsl_r(r2, r0 & 0xff)) != 0) {  // (from the original)
            r1_2 = gptr<Local_0024c71c_r1_2>(r0 >= 0x19u ? r9 : r9 + (r0 << 2));  // (from the original)
            r1_2->word_0 = r10;
        } else {
            u32 r3_4 = *frame.at<u32>(0);
            r1_2 = gptr<Local_0024c71c_r1_2>(r0 >= 0x19u ? r9 : r9 + (r0 << 2));  // (from the original)
            u32 zf_1 = r3_4 == r0;
            u32 cf_1 = r3_4 >= r0;
            if (r3_4 > r0) {
                r12 = *frame.at<u32>(8);
            } else {
                r3_4 = 0u;
            }
            if (cf_1 && !zf_1) {
                r3_4 = *gptr<u32>(r12 + (r0 << 2));
            }
            r1_2->word_0 = *gptr<u32>(r3_4);
        }
        r0 += 1u;
        guest::preempt();
    } while (r0 < 0x19u);  // (from the original)
    guest::cpu()->r[1] = r1_2.addr();
    return r0;
}

}  // namespace d_0024c71c
GUEST_EXPORT_FRAMED(0x0024c71c, d_0024c71c::f_0024c71c, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_0024c858: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0024c858 {

struct __attribute__((packed)) Local_0024c858_r3_3 {
    u8 unknown_0[0x12];  // (not used here)
    u8 byte_12;
    u8 unknown_13[0x1];  // (not used here)
    u16 half_14;
};
GUEST_OFFSET(Local_0024c858_r3_3, byte_12, 0x12);  // (from the original)
GUEST_OFFSET(Local_0024c858_r3_3, half_14, 0x14);  // (from the original)

inline constexpr guest::Function<0x0024c53c, u32(u32, u32, u32, u32)> call_0024c53c;  // (from the original)
inline constexpr guest::Function<0x002fb378, u32(u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> call_002ff6f8;  // (from the original)
inline constexpr guest::Function<0x00779638, u32(u32, u32, u32, u32)> call_00779638;  // (from the original)

void f_0024c858(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res_1 = 0;
    u32 r4 = r0;
    u32 r0_1 = call_002ff6f8(0xau, r1, r2, r3);  // (from the original)
    u32 r6 = 0u;
    *gptr<u8>(r4 + 0xcu) = u8(r6);  // (from the original)
    *gptr<u8>(r4 + 9u) = u8(r0_1 + 1u);
    call_0024c53c(r4, r6, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r5 = 0xffu;  // (from the original)
    call_00779638(r4 + 0xdu, r5, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r0 = 0u;
    r2 = 7u;
    r1 = 0xfu;  // (from the original)
    do {
        gptr<Local_0024c858_r3_3> r3_3 = gptr<Local_0024c858_r3_3>(r4 + (r0 << 2));
        res_1 = r2 - 1u;
        r2 = res_1;
        r3_3->byte_12 = u8(r1);
        r0 += 1u;
        r3_3->half_14 = u16(r6);
        guest::preempt();
    } while (res_1 != 0);
    u32 r0_3 = call_002fb378(r0);
    *gptr<u16>(r4 + 0x30u) = u16(*gptr<u32>(r0_3));  // (from the original)
    *gptr<u8>(r4 + 0x3cu) = u8(r5);  // (from the original)
    *gptr<u8>(r4 + 0x58u) = 5;  // (from the original)
    guest::cpu()->r[1] = 5u;
}

}  // namespace d_0024c858
GUEST_EXPORT_FRAMED(0x0024c858, d_0024c858::f_0024c858, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0024c8d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0024c8d4 {

struct __attribute__((packed)) Object_0024c8d4_0 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u8 byte_8;
    u8 byte_9;
    u16 half_a;
    u8 byte_c;
    u32 word_d;
    u8 byte_11;
};
GUEST_OFFSET(Object_0024c8d4_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0024c8d4_0, byte_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0024c8d4_0, byte_9, 0x9);  // (from the original)
GUEST_OFFSET(Object_0024c8d4_0, half_a, 0xa);  // (from the original)
GUEST_OFFSET(Object_0024c8d4_0, byte_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0024c8d4_0, word_d, 0xd);  // (from the original)
GUEST_OFFSET(Object_0024c8d4_0, byte_11, 0x11);  // (from the original)

struct __attribute__((packed)) Local_0024c8d4_r1_1 {
    u8 unknown_0[0x59];  // (not used here)
    u8 byte_59;
};
GUEST_OFFSET(Local_0024c8d4_r1_1, byte_59, 0x59);  // (from the original)

struct __attribute__((packed)) Local_0024c8d4_r2_1 {
    u8 unknown_0[0x12];  // (not used here)
    u8 byte_12;
    u8 unknown_13[0x1];  // (not used here)
    u16 half_14;
};
GUEST_OFFSET(Local_0024c8d4_r2_1, byte_12, 0x12);  // (from the original)
GUEST_OFFSET(Local_0024c8d4_r2_1, half_14, 0x14);  // (from the original)

inline constexpr guest::Function<0x0030589c, u32(u32)> call_0030589c;  // (from the original)

void f_0024c8d4(gptr<Object_0024c8d4_0> arg0) {
    u32 r0 = arg0.addr();
    u32 res_1 = 0;
    u32 cf_1 = 0;
    u32 r4 = r0;
    u32 r5 = 0u;
    arg0->word_0 = r5;
    arg0->byte_8 = u8(r5);
    arg0->half_a = u16(r5);
    arg0->byte_9 = u8(r5);
    arg0->byte_c = 0xff;  // (from the original)
    arg0->byte_11 = u8(r5);
    r0 = r5;
    u32 r1 = 7u;
    arg0->word_d = r5;
    do {
        gptr<Local_0024c8d4_r2_1> r2_1 = gptr<Local_0024c8d4_r2_1>(r4 + (r0 << 2));
        res_1 = r1 - 1u;
        r1 = res_1;
        r2_1->byte_12 = u8(r5);
        r0 += 1u;
        r2_1->half_14 = u16(r5);
        guest::preempt();
    } while (res_1 != 0);
    *gptr<u8>(r4 + 0x2fu) = u8(r5);  // (from the original)
    *gptr<u8>(r4 + 0x2eu) = u8(r5);  // (from the original)
    *gptr<u32>(r4 + 0x34u) = r5;  // (from the original)
    *gptr<u8>(r4 + 0x38u) = u8(r5);  // (from the original)
    *gptr<u8>(r4 + 0x39u) = u8(r5);  // (from the original)
    *gptr<u16>(r4 + 0x3au) = u16(r5);  // (from the original)
    *gptr<u8>(r4 + 0x3cu) = u8(r5);  // (from the original)
    *gptr<u8>(r4 + 0x3du) = u8(r5);  // (from the original)
    *gptr<u16>(r4 + 0x3eu) = u16(r5);  // (from the original)
    *gptr<u8>(r4 + 0x40u) = u8(r5);  // (from the original)
    *gptr<u8>(r4 + 0x41u) = u8(r5);  // (from the original)
    *gptr<u16>(r4 + 0x42u) = u16(r5);  // (from the original)
    *gptr<u8>(r4 + 0x44u) = u8(r5);  // (from the original)
    *gptr<u8>(r4 + 0x45u) = u8(r5);  // (from the original)
    *gptr<u16>(r4 + 0x48u) = u16(r5);  // (from the original)
    *gptr<u32>(r4 + 0x4cu) = r5;  // (from the original)
    *gptr<u16>(r4 + 0x4au) = u16(r5);  // (from the original)
    *gptr<u8>(r4 + 0x51u) = u8(r5);  // (from the original)
    *gptr<u16>(r4 + 0x52u) = u16(r5);  // (from the original)
    *gptr<u8>(r4 + 0x54u) = u8(r5);  // (from the original)
    *gptr<u8>(r4 + 0x55u) = u8(r5);  // (from the original)
    *gptr<u8>(r4 + 0x56u) = u8(u32(*gptr<u8>(r4 + 0x56u)) & ~0xfu);  // (from the original)
    *gptr<u8>(r4 + 0x57u) = u8(r5);  // (from the original)
    r0 = 0u;
    *gptr<u8>(r4 + 0x58u) = u8(r5);  // (from the original)
    do {
        gptr<Local_0024c8d4_r1_1> r1_1 = gptr<Local_0024c8d4_r1_1>(r4 + r0);
        r1_1->byte_59 = u8(u32(r1_1->byte_59) & ~0xfu);  // (from the original)
        do {
            r0 += 1u;
            cf_1 = r0 >= 0xeu;  // (from the original)
            if (s32(r0) >= 0xe) {  // (from the original)
                *gptr<u8>(r4 + 0x67u) = u8(r5);  // (from the original)
                *gptr<u8>(r4 + 0x68u) = u8(r5);  // (from the original)
                *gptr<u8>(r4 + 0x69u) = u8(r5);  // (from the original)
                call_0030589c(r4 + 0x6au);  // (from the original)
                *gptr<u8>(r4 + 0x80u) = u8(u32(*gptr<u8>(r4 + 0x80u)) & ~7u);  // (from the original)
                *gptr<u8>(r4 + 0x81u) = u8(u32(*gptr<u8>(r4 + 0x81u)) & ~1u);  // (from the original)
                *gptr<u8>(r4 + 0x82u) = u8(r5);  // (from the original)
                *gptr<u8>(r4 + 0x84u) = u8(r5);  // (from the original)
                *gptr<u8>(r4 + 0x85u) = u8(r5);  // (from the original)
                *gptr<u8>(r4 + 0x86u) = u8(r5);  // (from the original)
                *gptr<u8>(r4 + 0x87u) = u8(r5);  // (from the original)
                return;
            }
            guest::preempt();
        } while (cf_1);
        guest::preempt();
    } while (1);
}

}  // namespace d_0024c8d4
GUEST_EXPORT_FRAMED(0x0024c8d4, d_0024c8d4::f_0024c8d4, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0024d778: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0024d778 {

struct __attribute__((packed)) Object_0024d778_0 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u8 byte_8;
    u8 byte_9;
    u16 half_a;
    u8 byte_c;
    u32 word_d;
    u8 byte_11;
};
GUEST_OFFSET(Object_0024d778_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0024d778_0, byte_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0024d778_0, byte_9, 0x9);  // (from the original)
GUEST_OFFSET(Object_0024d778_0, half_a, 0xa);  // (from the original)
GUEST_OFFSET(Object_0024d778_0, byte_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0024d778_0, word_d, 0xd);  // (from the original)
GUEST_OFFSET(Object_0024d778_0, byte_11, 0x11);  // (from the original)

struct __attribute__((packed)) Local_0024d778_r1_2 {
    u8 unknown_0[0x12];  // (not used here)
    u8 byte_12;
    u8 unknown_13[0x1];  // (not used here)
    u16 half_14;
};
GUEST_OFFSET(Local_0024d778_r1_2, byte_12, 0x12);  // (from the original)
GUEST_OFFSET(Local_0024d778_r1_2, half_14, 0x14);  // (from the original)

struct __attribute__((packed)) Local_0024d778_r2_1 {
    u8 unknown_0[0x12];  // (not used here)
    u8 byte_12;
    u8 unknown_13[0x1];  // (not used here)
    u16 half_14;
};
GUEST_OFFSET(Local_0024d778_r2_1, byte_12, 0x12);  // (from the original)
GUEST_OFFSET(Local_0024d778_r2_1, half_14, 0x14);  // (from the original)

inline constexpr guest::Function<0x0024c53c, u32(u32, u32, u32, u32)> call_0024c53c;  // (from the original)
inline constexpr guest::Function<0x002fb378, u32(u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> call_002ff6f8;  // (from the original)
inline constexpr guest::Function<0x0030589c, u32(u32, u32, u32, u32)> call_0030589c;  // (from the original)
inline constexpr guest::Function<0x00779638, u32(u32, u32, u32, u32)> call_00779638;  // (from the original)

void f_0024d778(gptr<Object_0024d778_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r0 = arg0.addr();
    u32 res_1 = 0;
    u32 cf_1 = 0;
    u32 res_2 = 0;
    u32 r5 = 0u;
    arg0->word_0 = r5;
    arg0->byte_8 = u8(r5);
    arg0->half_a = u16(r5);
    u32 r6 = 0xffu;  // (from the original)
    arg0->byte_9 = u8(r5);
    arg0->byte_c = u8(r6);
    arg0->byte_11 = u8(r5);
    u32 r4 = r0;
    arg0->word_d = r5;
    u32 r1 = r5;
    r0 = 7u;
    do {
        gptr<Local_0024d778_r2_1> r2_1 = gptr<Local_0024d778_r2_1>(r4 + (r1 << 2));
        res_1 = r0 - 1u;
        r0 = res_1;
        r2_1->byte_12 = u8(r5);
        r1 += 1u;
        r2_1->half_14 = u16(r5);
        guest::preempt();
    } while (res_1 != 0);
    *gptr<u8>(r4 + 0x2fu) = u8(r5);  // (from the original)
    *gptr<u8>(r4 + 0x2eu) = u8(r5);  // (from the original)
    *gptr<u32>(r4 + 0x34u) = r5;  // (from the original)
    *gptr<u8>(r4 + 0x38u) = u8(r5);  // (from the original)
    *gptr<u8>(r4 + 0x39u) = u8(r5);  // (from the original)
    *gptr<u16>(r4 + 0x3au) = u16(r5);  // (from the original)
    *gptr<u8>(r4 + 0x3cu) = u8(r5);  // (from the original)
    *gptr<u8>(r4 + 0x3du) = u8(r5);  // (from the original)
    *gptr<u16>(r4 + 0x3eu) = u16(r5);  // (from the original)
    *gptr<u8>(r4 + 0x40u) = u8(r5);  // (from the original)
    *gptr<u8>(r4 + 0x41u) = u8(r5);  // (from the original)
    *gptr<u16>(r4 + 0x42u) = u16(r5);  // (from the original)
    *gptr<u8>(r4 + 0x44u) = u8(r5);  // (from the original)
    *gptr<u8>(r4 + 0x45u) = u8(r5);  // (from the original)
    *gptr<u16>(r4 + 0x48u) = u16(r5);  // (from the original)
    *gptr<u32>(r4 + 0x4cu) = r5;  // (from the original)
    *gptr<u16>(r4 + 0x4au) = u16(r5);  // (from the original)
    *gptr<u8>(r4 + 0x51u) = u8(r5);  // (from the original)
    *gptr<u16>(r4 + 0x52u) = u16(r5);  // (from the original)
    *gptr<u8>(r4 + 0x54u) = u8(r5);  // (from the original)
    *gptr<u8>(r4 + 0x55u) = u8(r5);  // (from the original)
    *gptr<u8>(r4 + 0x56u) = u8(u32(*gptr<u8>(r4 + 0x56u)) & ~0xfu);  // (from the original)
    *gptr<u8>(r4 + 0x57u) = u8(r5);  // (from the original)
    r0 = 0u;
    *gptr<u8>(r4 + 0x58u) = u8(r5);  // (from the original)
    do {
        r1 = r4 + r0;
        u32 r2 = u32(*gptr<u8>(r1 + 0x59u)) & ~0xfu;  // (from the original)
        *gptr<u8>(r1 + 0x59u) = u8(r2);  // (from the original)
        do {
            r0 += 1u;
            cf_1 = r0 >= 0xeu;  // (from the original)
            if (s32(r0) >= 0xe) {  // (from the original)
                *gptr<u8>(r4 + 0x67u) = u8(r5);  // (from the original)
                *gptr<u8>(r4 + 0x68u) = u8(r5);  // (from the original)
                *gptr<u8>(r4 + 0x69u) = u8(r5);  // (from the original)
                call_0030589c(r4 + 0x6au, r1, r2, r3);  // (from the original)
                *gptr<u8>(r4 + 0x80u) = u8(u32(*gptr<u8>(r4 + 0x80u)) & ~7u);  // (from the original)
                *gptr<u8>(r4 + 0x81u) = u8(u32(*gptr<u8>(r4 + 0x81u)) & ~1u);  // (from the original)
                *gptr<u8>(r4 + 0x82u) = u8(r5);  // (from the original)
                *gptr<u8>(r4 + 0x86u) = u8(r5);  // (from the original)
                *gptr<u8>(r4 + 0x87u) = u8(r5);  // (from the original)
                u32 r0_2 = call_002ff6f8(0xau, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                *gptr<u8>(r4 + 9u) = u8(r0_2 + 1u);
                *gptr<u8>(r4 + 0xcu) = u8(r5);  // (from the original)
                call_0024c53c(r4, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
                call_00779638(r4 + 0xdu, r6, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                r0 = 0u;
                r2 = 7u;
                r3 = 0xfu;  // (from the original)
                do {
                    gptr<Local_0024d778_r1_2> r1_2 = gptr<Local_0024d778_r1_2>(r4 + (r0 << 2));
                    res_2 = r2 - 1u;
                    r2 = res_2;
                    r1_2->byte_12 = u8(r3);
                    r0 += 1u;
                    r1_2->half_14 = u16(r5);
                    guest::preempt();
                } while (res_2 != 0);
                u32 r0_4 = call_002fb378(r0);
                *gptr<u16>(r4 + 0x30u) = u16(*gptr<u32>(r0_4));  // (from the original)
                *gptr<u8>(r4 + 0x3cu) = u8(r6);  // (from the original)
                *gptr<u8>(r4 + 0x58u) = 5;  // (from the original)
                guest::cpu()->r[1] = 5u;
                return;
            }
            guest::preempt();
        } while (cf_1);
        guest::preempt();
    } while (1);
}

}  // namespace d_0024d778
GUEST_EXPORT_FRAMED(0x0024d778, d_0024d778::f_0024d778, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0024d8fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0024d8fc {

struct __attribute__((packed)) Object_0024d8fc_0 {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
    u8 byte_9;
    u16 half_a;
    u8 byte_c;
    u32 word_d;
    u8 byte_11;
    u8 unknown_12[0x1c];  // (not used here)
    u8 byte_2e;
    u8 byte_2f;
    u16 half_30;
    u16 half_32;
    u32 word_34;
    u8 byte_38;
    u8 byte_39;
    u16 half_3a;
    u8 byte_3c;
    u8 byte_3d;
    u16 half_3e;
    u8 byte_40;
    u8 byte_41;
    u16 half_42;
    u8 byte_44;
    u8 byte_45;
    u16 half_46;
    u16 half_48;
    u16 half_4a;
    u32 word_4c;
    u8 byte_50;
    u8 byte_51;
    u16 half_52;
    u8 byte_54;
    u8 byte_55;
    u8 byte_56;
    u8 byte_57;
    u8 byte_58;
    u8 unknown_59[0xe];  // (not used here)
    u8 byte_67;
    u8 byte_68;
    u8 byte_69;
    u8 unknown_6a[0x16];  // (not used here)
    u8 byte_80;
    u8 byte_81;
    u8 byte_82;
    u8 unknown_83[0x1];  // (not used here)
    u8 byte_84;
    u8 byte_85;
    u8 byte_86;
    u8 byte_87;
};
GUEST_OFFSET(Object_0024d8fc_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0024d8fc_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0024d8fc_0, byte_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0024d8fc_0, byte_9, 0x9);  // (from the original)
GUEST_OFFSET(Object_0024d8fc_0, half_a, 0xa);  // (from the original)
GUEST_OFFSET(Object_0024d8fc_0, byte_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0024d8fc_0, word_d, 0xd);  // (from the original)
GUEST_OFFSET(Object_0024d8fc_0, byte_11, 0x11);  // (from the original)
GUEST_OFFSET(Object_0024d8fc_0, byte_2e, 0x2e);  // (from the original)
GUEST_OFFSET(Object_0024d8fc_0, byte_2f, 0x2f);  // (from the original)
GUEST_OFFSET(Object_0024d8fc_0, half_30, 0x30);  // (from the original)
GUEST_OFFSET(Object_0024d8fc_0, half_32, 0x32);  // (from the original)
GUEST_OFFSET(Object_0024d8fc_0, word_34, 0x34);  // (from the original)
GUEST_OFFSET(Object_0024d8fc_0, byte_38, 0x38);  // (from the original)
GUEST_OFFSET(Object_0024d8fc_0, byte_39, 0x39);  // (from the original)
GUEST_OFFSET(Object_0024d8fc_0, half_3a, 0x3a);  // (from the original)
GUEST_OFFSET(Object_0024d8fc_0, byte_3c, 0x3c);  // (from the original)
GUEST_OFFSET(Object_0024d8fc_0, byte_3d, 0x3d);  // (from the original)
GUEST_OFFSET(Object_0024d8fc_0, half_3e, 0x3e);  // (from the original)
GUEST_OFFSET(Object_0024d8fc_0, byte_40, 0x40);  // (from the original)
GUEST_OFFSET(Object_0024d8fc_0, byte_41, 0x41);  // (from the original)
GUEST_OFFSET(Object_0024d8fc_0, half_42, 0x42);  // (from the original)
GUEST_OFFSET(Object_0024d8fc_0, byte_44, 0x44);  // (from the original)
GUEST_OFFSET(Object_0024d8fc_0, byte_45, 0x45);  // (from the original)
GUEST_OFFSET(Object_0024d8fc_0, half_46, 0x46);  // (from the original)
GUEST_OFFSET(Object_0024d8fc_0, half_48, 0x48);  // (from the original)
GUEST_OFFSET(Object_0024d8fc_0, half_4a, 0x4a);  // (from the original)
GUEST_OFFSET(Object_0024d8fc_0, word_4c, 0x4c);  // (from the original)
GUEST_OFFSET(Object_0024d8fc_0, byte_50, 0x50);  // (from the original)
GUEST_OFFSET(Object_0024d8fc_0, byte_51, 0x51);  // (from the original)
GUEST_OFFSET(Object_0024d8fc_0, half_52, 0x52);  // (from the original)
GUEST_OFFSET(Object_0024d8fc_0, byte_54, 0x54);  // (from the original)
GUEST_OFFSET(Object_0024d8fc_0, byte_55, 0x55);  // (from the original)
GUEST_OFFSET(Object_0024d8fc_0, byte_56, 0x56);  // (from the original)
GUEST_OFFSET(Object_0024d8fc_0, byte_57, 0x57);  // (from the original)
GUEST_OFFSET(Object_0024d8fc_0, byte_58, 0x58);  // (from the original)
GUEST_OFFSET(Object_0024d8fc_0, byte_67, 0x67);  // (from the original)
GUEST_OFFSET(Object_0024d8fc_0, byte_68, 0x68);  // (from the original)
GUEST_OFFSET(Object_0024d8fc_0, byte_69, 0x69);  // (from the original)
GUEST_OFFSET(Object_0024d8fc_0, byte_80, 0x80);  // (from the original)
GUEST_OFFSET(Object_0024d8fc_0, byte_81, 0x81);  // (from the original)
GUEST_OFFSET(Object_0024d8fc_0, byte_82, 0x82);  // (from the original)
GUEST_OFFSET(Object_0024d8fc_0, byte_84, 0x84);  // (from the original)
GUEST_OFFSET(Object_0024d8fc_0, byte_85, 0x85);  // (from the original)
GUEST_OFFSET(Object_0024d8fc_0, byte_86, 0x86);  // (from the original)
GUEST_OFFSET(Object_0024d8fc_0, byte_87, 0x87);  // (from the original)

struct __attribute__((packed)) Local_0024d8fc_r3_1 {
    u8 unknown_0[0x12];  // (not used here)
    u8 byte_12;
    u8 unknown_13[0x1];  // (not used here)
    u16 half_14;
};
GUEST_OFFSET(Local_0024d8fc_r3_1, byte_12, 0x12);  // (from the original)
GUEST_OFFSET(Local_0024d8fc_r3_1, half_14, 0x14);  // (from the original)

inline constexpr guest::Function<0x0030589c, u32(u32, u32)> call_0030589c;  // (from the original)

u32 f_0024d8fc(gptr<Object_0024d8fc_0> arg0) {
    u32 r0 = arg0.addr();
    u32 res_1 = 0;
    u32 cf_1 = 0;
    u32 r4 = r0;
    r0 = 0u;
    arg0->word_0 = r0;
    arg0->word_4 = r0;
    arg0->byte_8 = u8(r0);
    arg0->byte_9 = 0x80;  // (from the original)
    arg0->half_a = u16(r0);
    arg0->byte_c = 0xff;  // (from the original)
    arg0->byte_11 = u8(r0);
    arg0->byte_2e = u8(r0);
    arg0->byte_2f = u8(r0);
    arg0->half_30 = u16(r0);
    arg0->half_32 = u16(r0);
    arg0->word_34 = r0;
    arg0->byte_38 = u8(r0);
    arg0->byte_39 = u8(r0);
    arg0->half_3a = u16(r0);
    arg0->byte_3c = 0xff;  // (from the original)
    arg0->byte_3d = u8(r0);
    arg0->half_3e = u16(r0);
    arg0->byte_40 = u8(r0);
    arg0->byte_41 = 1;
    arg0->half_42 = u16(r0);
    arg0->byte_44 = u8(r0);
    arg0->byte_45 = u8(r0);
    arg0->half_46 = u16(r0);
    arg0->half_48 = u16(r0);
    arg0->half_4a = u16(r0);
    arg0->word_4c = r0;
    arg0->byte_50 = u8(r0);
    arg0->byte_51 = u8(r0);
    arg0->half_52 = u16(r0);
    arg0->byte_54 = u8(r0);
    arg0->byte_55 = u8(r0);
    arg0->byte_56 = u8(r0);
    arg0->byte_57 = u8(r0);
    arg0->byte_58 = 5;
    arg0->byte_67 = u8(r0);
    arg0->byte_68 = u8(r0);
    arg0->byte_69 = u8(r0);
    arg0->byte_80 = u8(r0);
    arg0->byte_81 = u8(r0);
    arg0->byte_82 = u8(r0);
    arg0->byte_84 = u8(r0);
    arg0->byte_85 = u8(r0);
    arg0->byte_86 = u8(r0);
    arg0->byte_87 = u8(r0);
    u32 r2 = 0u;
    u32 r1 = 7u;
    arg0->word_d = r0;
    do {
        gptr<Local_0024d8fc_r3_1> r3_1 = gptr<Local_0024d8fc_r3_1>(r4 + (r2 << 2));
        res_1 = r1 - 1u;
        r1 = res_1;
        r3_1->byte_12 = u8(r0);
        r2 += 1u;
        r3_1->half_14 = u16(r0);
        guest::preempt();
    } while (res_1 != 0);
    *gptr<u16>(r4 + 0x52u) = u16(r0);  // (from the original)
    *gptr<u8>(r4 + 0x54u) = u8(r0);  // (from the original)
    *gptr<u8>(r4 + 0x55u) = u8(r0);  // (from the original)
    r0 = 0u;
    do {
        r1 = r4 + r0;
        *gptr<u8>(r1 + 0x59u) = u8(u32(*gptr<u8>(r1 + 0x59u)) & ~0xfu);  // (from the original)
        do {
            r0 += 1u;
            cf_1 = r0 >= 0xeu;  // (from the original)
            if (s32(r0) >= 0xe) {  // (from the original)
                call_0030589c(r4 + 0x6au, r1);  // (from the original)
                return r4;
            }
            guest::preempt();
        } while (cf_1);
        guest::preempt();
    } while (1);
}

}  // namespace d_0024d8fc
GUEST_EXPORT_FRAMED(0x0024d8fc, d_0024d8fc::f_0024d8fc, 0x4010);  // pushes {r4, lr} first, as the original

// f_0024dbb0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0024dbb0 {

inline constexpr guest::Function<0x00134544, u32(u32, u32, u32, u32)> call_00134544;  // (from the original)

u32 f_0024dbb0() {
    return call_00134544(guest::cpu()->r[0], guest::cpu()->r[1], 0x1228u, guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0024dbb0
GUEST_EXPORT(0x0024dbb0, d_0024dbb0::f_0024dbb0);

// f_0024dbc0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0024dbc0 {

struct __attribute__((packed)) Local_0024dbc0_r0_8 {
    u16 half_0;
    u8 byte_2;
};
GUEST_OFFSET(Local_0024dbc0_r0_8, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0024dbc0_r0_8, byte_2, 0x2);  // (from the original)

inline constexpr guest::Function<0x002d4d30, u32(u32, u32, u32)> call_002d4d30;  // (from the original)
inline constexpr guest::Function<0x002d4f3c, u32(u32, u32, u32)> call_002d4f3c;  // (from the original)
inline constexpr guest::Function<0x002d5184, u32(u32, u32, u32)> call_002d5184;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x0032cc68, u32(u32, u32, u32, u32)> call_0032cc68;  // (from the original)

void f_0024dbc0(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r6 = r0;
    call_0032cc68(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 0x95c2d8u;  // (from the original)
    u32 r0_1 = r1 + (r1 << 1);
    u32 r4 = 0u;
    r1 = r2 + 0x30u;  // (from the original)
    u32 r8 = r2 + (r0_1 << 2);
    u32 r7 = r1 + (r0_1 << 2);
    do {
        u32 r5_1 = r6 + (r4 + (r4 << 7) + (r4 << 8) << 1);
        call_002d4f3c(r5_1 + 0x18u, r1, r2);  // (from the original)
        u32 r1_1 = *gptr<u16>(r8 + (r4 << 1));
        call_002fcbb0(frame.at(0).addr(), r1_1, guest::cpu()->r[2]);
        call_002d4d30(r5_1 + 0x18u, frame.at(0).addr(), guest::cpu()->r[2]);  // (from the original)
        u32 r1_3 = *gptr<u16>(r7 + (r4 << 1));
        call_002fcbb0(frame.at(4).addr(), r1_3, guest::cpu()->r[2]);
        call_002d5184(r5_1 + 0x18u, frame.at(4).addr(), guest::cpu()->r[2]);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r4 += 1u;
        guest::preempt();
    } while (r4 < 6u);
    *gptr<u8>(r6 + 0x36u) = 0;  // (from the original)
    gptr<Local_0024dbc0_r0_8> r0_8 = gptr<Local_0024dbc0_r0_8>((r6 + 0x1000u) + 0x224u);  // (from the original)
    r0_8->half_0 = 0;
    r0_8->byte_2 = 0x1e;  // (from the original)
    guest::cpu()->r[1] = 0x1eu;  // (from the original)
}

}  // namespace d_0024dbc0
GUEST_EXPORT_FRAMED(0x0024dbc0, d_0024dbc0::f_0024dbc0, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0024dcc0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0024dcc0 {

inline constexpr guest::Function<0x001de8fc, u32(u32, u32)> call_001de8fc;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x0032ccb0, u32(u32, u32, u32, u32)> call_0032ccb0;  // (from the original)

u32 f_0024dcc0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = call_0032ccb0(r0, r1, r2, r3);
    u32 r0_3 = call_00301d0c(r0_1 + 0x18u, 0x2d5278u, 0x302u, 6u);  // (from the original)
    u32 r0_5 = call_001de8fc(r0_3 + 0x120cu, guest::cpu()->r[1]);  // (from the original)
    return r0_5 - 0x1224u;  // (from the original)
}

}  // namespace d_0024dcc0
GUEST_EXPORT_FRAMED(0x0024dcc0, d_0024dcc0::f_0024dcc0, 0x4010);  // pushes {r4, lr} first, as the original

// f_0024dcf8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0024dcf8 {

inline constexpr guest::Function<0x00301444, u32(u32, u32)> call_00301444;  // (from the original)

void f_0024dcf8(u32 r0) {
    call_00301444(r0, 0x28u);  // (from the original)
    *gptr<u8>(r0 + 0x28u) = 0xff;  // (from the original)
}

}  // namespace d_0024dcf8
GUEST_EXPORT_FRAMED(0x0024dcf8, d_0024dcf8::f_0024dcf8, 0x4010);  // pushes {r4, lr} first, as the original

// f_0024dd14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0024dd14 {

inline constexpr guest::Function<0x00301444, u32(u32, u32)> call_00301444;  // (from the original)

void f_0024dd14(u32 r0) {
    call_00301444(r0, 0x28u);  // (from the original)
    *gptr<u8>(r0 + 0x28u) = 0xff;  // (from the original)
}

}  // namespace d_0024dd14
GUEST_EXPORT_FRAMED(0x0024dd14, d_0024dd14::f_0024dd14, 0x4010);  // pushes {r4, lr} first, as the original

// f_0024dda0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0024dda0 {


void f_0024dda0(u32 r0, u32 r1, u32 r2) {
    u32 r3_1 = *gptr<u8>(r0 + r1);
    *gptr<u8>(r0 + r1) = u8(u32(*gptr<u8>(r0 + r2)));
    *gptr<u8>(r0 + r2) = u8(r3_1);
}

}  // namespace d_0024dda0
GUEST_EXPORT(0x0024dda0, d_0024dda0::f_0024dda0);

// f_0024ddb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0024ddb4 {


u32 f_0024ddb4(u32 r0, u32 r1) {
    u32 r3 = 0xffffu;  // (from the original)
    u32 r2 = 0u;
    do {
        if (*gptr<u16>(r0 + (r2 << 1) + 4u) == r3) {
            u32 r0_1 = r0 + (r2 << 1);
            *gptr<u16>(r0_1 + 4u) = u16(r1);
            return r0_1;
        }
        r2 += 1u;
        guest::preempt();
    } while (s32(r2) < 6);
    return r0;
}

}  // namespace d_0024ddb4
GUEST_EXPORT(0x0024ddb4, d_0024ddb4::f_0024ddb4);

// f_0024ddec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0024ddec {


void f_0024ddec(u32 r0) {
    u32 r3 = 0xffffu;  // (from the original)
    u32 r2 = 0u;
    u32 r1 = r2;
    do {
        u32 r2_1 = r2 + 1u;
        r1 += 2u;
        *gptr<u16>((r0 + (r2 << 1)) + 4u) = u16(r3);
        r2 = r2_1 + 1u;
        *gptr<u16>((r0 + (r2_1 << 1)) + 4u) = u16(r3);
        guest::preempt();
    } while (s32(r1) < 6);
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0024ddec
GUEST_EXPORT_FRAMED(0x0024ddec, d_0024ddec::f_0024ddec, 0x10);  // pushes {r4} first, as the original

// f_0024dea8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0024dea8 {

struct __attribute__((packed)) Local_0024dea8_r0_5 {
    u8 unknown_0[0x3];  // (not used here)
    u8 byte_3;
};
GUEST_OFFSET(Local_0024dea8_r0_5, byte_3, 0x3);  // (from the original)

inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x003035a4, u32(u32, u32)> call_003035a4;  // (from the original)

void f_0024dea8(u32 r0, u32 r1, u32 r2) {
    u32 r4_1 = r1;
    if (r1 != 0 && r4_1 == 1u) {
        u32 r0_1 = call_002fae84(r0, r1, r2, guest::cpu()->r[3]);
        u32 r0_3 = call_003035a4(r0_1 + 0x7170cu, 5u);  // (from the original)
        u32 r0_4 = call_002fae84(r0_3, 5u, r2, guest::cpu()->r[3]);
        gptr<Local_0024dea8_r0_5> r0_5 = gptr<Local_0024dea8_r0_5>(r0_4 + 0x6214fu);  // (from the original)
        r1 = u32(r0_5->byte_3) | 0x10u;  // (from the original)
        r0_5->byte_3 = u8(r1);
    }
    *gptr<u8>(r0) = u8(r4_1);
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0024dea8
GUEST_EXPORT_FRAMED(0x0024dea8, d_0024dea8::f_0024dea8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0024defc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0024defc {

struct __attribute__((packed)) Local_0024defc_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0024defc_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0024defc_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0024defc_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0024defc_ea_1, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Local_0024defc_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0024defc_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0024defc_ea_3, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0024defc_ea_3, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0024defc_ea_3, word_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x00303534, u32(u32, u32)> call_00303534;  // (from the original)
inline constexpr guest::Function<0x003052f0, u32(u32)> call_003052f0;  // (from the original)

u32 f_0024defc(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r14 = guest::cpu()->r[14];
    if (r2 >= 4u) {
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        return r0;
    }
    gptr<Local_0024defc_ea_1> ea_1 = gptr<Local_0024defc_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r6;
    ea_1->word_c = r14;
    call_002fc8e8(r0 + (r2 << 2), 0x95bfdcu);  // (from the original)
    call_003052f0(r0 + ((r2 << 3) - r2 + (r2 << 4) << 1) + 0x14u);  // (from the original)
    call_00303534(r0 + (r2 << 3) + 0xccu, 0u);  // (from the original)
    u32 r1_1 = r0 + r2;
    *gptr<u8>(r1_1 + 0x10u) = 1;  // (from the original)
    gptr<Local_0024defc_ea_3> ea_3 = gptr<Local_0024defc_ea_3>(frame.at(0).addr());
    u32 r4_1 = ea_3->word_0;
    u32 r5_1 = ea_3->word_4;
    u32 r6_1 = ea_3->word_8;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    return 1u;
}

}  // namespace d_0024defc
GUEST_EXPORT(0x0024defc, d_0024defc::f_0024defc);

// f_0024df54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0024df54 {

struct __attribute__((packed)) Local_0024df54_ea_1 {
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
};
GUEST_OFFSET(Local_0024df54_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0024df54_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0024df54_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0024df54_ea_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_0024df54_ea_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_0024df54_ea_1, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_0024df54_ea_1, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_0024df54_ea_1, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Local_0024df54_ea_1, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Local_0024df54_ea_1, word_24, 0x24);  // (from the original)

struct __attribute__((packed)) Local_0024df54_ea_2 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
};
GUEST_OFFSET(Local_0024df54_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0024df54_ea_2, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0024df54_ea_2, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_0024df54_ea_2, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_0024df54_ea_2, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_0024df54_ea_2, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_0024df54_ea_2, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Local_0024df54_ea_2, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Local_0024df54_ea_2, word_24, 0x24);  // (from the original)

struct __attribute__((packed)) Local_0024df54_r0_12 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u16 half_14;
};
GUEST_OFFSET(Local_0024df54_r0_12, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0024df54_r0_12, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0024df54_r0_12, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0024df54_r0_12, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_0024df54_r0_12, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_0024df54_r0_12, half_14, 0x14);  // (from the original)

struct __attribute__((packed)) Local_0024df54_r0_2 {
    u8 unknown_0[0x10];  // (not used here)
    u8 byte_10;
};
GUEST_OFFSET(Local_0024df54_r0_2, byte_10, 0x10);  // (from the original)

struct __attribute__((packed)) Local_0024df54_r1_3 {
    u8 unknown_0[0x38];  // (not used here)
    u32 word_38;
    u32 word_3c;
    u32 word_40;
    u32 word_44;
    u32 word_48;
    u16 half_4c;
};
GUEST_OFFSET(Local_0024df54_r1_3, word_38, 0x38);  // (from the original)
GUEST_OFFSET(Local_0024df54_r1_3, word_3c, 0x3c);  // (from the original)
GUEST_OFFSET(Local_0024df54_r1_3, word_40, 0x40);  // (from the original)
GUEST_OFFSET(Local_0024df54_r1_3, word_44, 0x44);  // (from the original)
GUEST_OFFSET(Local_0024df54_r1_3, word_48, 0x48);  // (from the original)
GUEST_OFFSET(Local_0024df54_r1_3, half_4c, 0x4c);  // (from the original)

inline guest::global<u32, 0x00aaf14c> global_00aaf14c;  // (from the original)
inline constexpr guest::Function<0x001b4a8c, u32(u32, u32, u32, u32)> call_001b4a8c;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fe940, u32(u32, u32, u32, u32)> call_002fe940;  // (from the original)
inline constexpr guest::Function<0x004e39c4, u32(u32, u32)> call_004e39c4;  // (from the original)
inline constexpr guest::Function<0x006bb8c0, u32(u32, u32)> call_006bb8c0;  // (from the original)

u32 f_0024df54(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x28);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r14 = guest::cpu()->r[14];
    if (r2 >= 4u) {
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        guest::cpu()->r[8] = r8;
        guest::cpu()->r[9] = r9;
        guest::cpu()->r[10] = r10;
        guest::cpu()->r[11] = r11;
        return r0;
    }
    gptr<Local_0024df54_ea_1> ea_1 = gptr<Local_0024df54_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r3;
    ea_1->word_4 = r4;
    ea_1->word_8 = r5;
    ea_1->word_c = r6;
    ea_1->word_10 = r7;
    ea_1->word_14 = r8;
    ea_1->word_18 = r9;
    ea_1->word_1c = r10;
    ea_1->word_20 = r11;
    ea_1->word_24 = r14;
    u32 r7_1 = r0 + (r2 << 2);
    u32 r8_1 = *frame.at<u32>(0x30);  // (from the original)
    u32 r9_1 = *frame.at<u32>(0x28);  // (from the original)
    call_002fc934(frame.at(0).addr(), r7_1, r2, r3);
    u32 r2_1 = guest::cpu()->r[2];
    gptr<Local_0024df54_r0_2> r0_2 = gptr<Local_0024df54_r0_2>(r0 + r2);
    u32 r1_1 = r0_2->byte_10;
    if (r1_1 == 0) {
        r0_2->byte_10 = 1;
        call_001b4a8c(r0 + ((r2 << 3) - r2 + (r2 << 4) << 1) + 0x14u, r8_1, r2_1, guest::cpu()->r[3]);  // (from the original)
        u32 r0_4 = *global_00aaf14c;
        if (r0_4 != 0) {
            u32 r0_6 = call_002fe940(r0_4 + 0x55a6u, r8_1, r2_1, guest::cpu()->r[3]);  // (from the original)
            if (r0_6 != 0) {
                u32 r0_7 = call_002fb94c(r0_6);
                u32 r0_9 = call_002fc8e8(r0_7 + 0x8f0eu, frame.at(0).addr());  // (from the original)
                u32 r0_10 = call_002fae84(r0_9);
                u32 r0_11 = call_002fb94c(r0_10);
                gptr<Local_0024df54_r1_3> r1_3 = gptr<Local_0024df54_r1_3>(r0_10 + 0x62100u);  // (from the original)
                gptr<Local_0024df54_r0_12> r0_12 = gptr<Local_0024df54_r0_12>(r0_11 + 0x8f12u);  // (from the original)
                r0_12->word_0 = r1_3->word_38;
                r0_12->word_4 = r1_3->word_3c;
                r0_12->word_8 = r1_3->word_40;
                r0_12->word_c = r1_3->word_44;
                r0_12->word_10 = r1_3->word_48;
                r0_12->half_14 = u16(u32(r1_3->half_4c));
            }
        }
        u32 r0_13 = call_006bb8c0(r7_1, 1u);
        u32 r0_14 = call_002f74c8(r0_13, guest::cpu()->r[1]);
        r1_1 = guest::cpu()->r[1];
        if (r0_14 == r1) {
            call_004e39c4(r3, r9_1);
            r1_1 = guest::cpu()->r[1];
        }
    }
    gptr<Local_0024df54_ea_2> ea_2 = gptr<Local_0024df54_ea_2>(frame.at(0).addr());
    u32 r4_1 = ea_2->word_4;
    u32 r5_1 = ea_2->word_8;
    u32 r6_1 = ea_2->word_c;
    u32 r7_2 = ea_2->word_10;
    u32 r8_2 = ea_2->word_14;
    u32 r9_2 = ea_2->word_18;
    u32 r10_1 = ea_2->word_1c;
    u32 r11_1 = ea_2->word_20;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[8] = r8_2;
    guest::cpu()->r[9] = r9_2;
    guest::cpu()->r[10] = r10_1;
    guest::cpu()->r[11] = r11_1;
    return frame.at(0).addr();
}

}  // namespace d_0024df54
GUEST_EXPORT(0x0024df54, d_0024df54::f_0024df54);

// f_0024e500: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0024e500 {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x00303534, u32(u32, u32, u32, u32)> call_00303534;  // (from the original)
inline constexpr guest::Function<0x003059f8, u32(u32, u32, u32, u32)> call_003059f8;  // (from the original)

void f_0024e500(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x20);  // the original's stack frame
    u32 r0_1 = 0;
    *frame.at<u32>(0) = r3;
    u32 r5 = r0;
    u32 r6 = r1;
    u32 r4 = 0u;
    u32 r8 = 0x2085u;  // (from the original)
    u32 r7 = ~0u;
    do {
        if (r4 < 8u) {
            r0_1 = *gptr<s8>(r5 + r4 + 0x34u);  // (from the original)
            if (s32(r0_1) >= 0 && s32(r0_1) < 4) {
                goto L_24e53c;
            }
        }
        r0_1 = r7;
L_24e53c:;
        if (r0_1 == r6) {
            u32 r0_3 = call_002fcbb0(frame.at(0).addr(), r8, r2, r3);
            u32 r2_1 = r5 + (r4 << 2) + 0x14u;  // (from the original)
            call_002fc8e8(r2_1, r0_3, r2_1, guest::cpu()->r[3]);
            *gptr<u8>(r5 + r4 + 0x34u) = u8(r7);  // (from the original)
            call_00303534(r5 + (r4 << 3) + 0x3cu, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            u32 r0_5 = (r4 << 4) - r4;
            u32 r0_6 = r5 + (r0_5 + (r0_5 << 3) << 4) + 0x7cu;  // (from the original)
            call_003059f8(r0_6, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 8);
    frame.release();
    call_00303534((r5 + (r6 << 3)) + 0x43fcu, 0u, r2, r3);  // (from the original)
    return;
}

}  // namespace d_0024e500
GUEST_EXPORT(0x0024e500, d_0024e500::f_0024e500);

// f_0024e8cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0024e8cc {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x00303534, u32(u32, u32, u32, u32)> call_00303534;  // (from the original)
inline constexpr guest::Function<0x003059f8, u32(u32, u32, u32, u32)> call_003059f8;  // (from the original)

void f_0024e8cc(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r0_2 = 0;
    *frame.at<u32>(0) = r3;
    u32 r5 = r0 + 0x4650u;  // (from the original)
    u32 r6 = r1;
    u32 r4 = 0u;
    u32 r8 = 0x2085u;  // (from the original)
    u32 r7 = ~0u;
    do {
        if (r4 < 8u) {
            u32 r0_1 = *gptr<s8>(r5 + r4 + 0x34u);  // (from the original)
            u32 nf_1 = r0_1 >> 0x1f;  // (from the original)
            u32 vf_1 = (r0_1 & (r0_1 ^ r0_1)) >> 0x1f;  // (from the original)
            if (nf_1 == vf_1) {
                u32 res_1 = r0_1 - 4u;
                nf_1 = res_1 >> 0x1f;  // (from the original)
                vf_1 = ((r0_1 ^ 4u) & (r0_1 ^ res_1)) >> 0x1f;  // (from the original)
            }
            if (nf_1 == vf_1) {
                r0_2 = r0_1 - 4u;
                goto L_24e914;
            }
        }
        r0_2 = r7;
L_24e914:;
        if (r0_2 == r6) {
            u32 r0_4 = call_002fcbb0(frame.at(0).addr(), r8, r2, r3);
            u32 r2_1 = r5 + (r4 << 2) + 0x14u;  // (from the original)
            call_002fc8e8(r2_1, r0_4, r2_1, guest::cpu()->r[3]);
            *gptr<u8>(r5 + r4 + 0x34u) = u8(r7);  // (from the original)
            call_00303534(r5 + (r4 << 3) + 0x3cu, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            u32 r0_6 = (r4 << 4) - r4;
            u32 r0_7 = r5 + (r0_6 + (r0_6 << 3) << 4) + 0x7cu;  // (from the original)
            call_003059f8(r0_7, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 8);
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0024e8cc
GUEST_EXPORT_FRAMED(0x0024e8cc, d_0024e8cc::f_0024e8cc, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_0024ee14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0024ee14 {

inline guest::global<u32, 0x00985df0> global_00985df0;  // (from the original)
inline guest::global<u32, 0x00985df4> global_00985df4;  // (from the original)
inline guest::global<u8, 0x00985df8> global_00985df8;  // (from the original)
inline guest::global<u32, 0x00985dfc> global_00985dfc;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32)> call_003171b4;  // (from the original)
inline constexpr guest::Function<0x006cbcbc, u32(u32, u32, u32, u32)> call_006cbcbc;  // (from the original)
inline constexpr guest::Function<0x006fa430, u32(u32, u32, u32, u32)> call_006fa430;  // (from the original)

u32 f_0024ee14(u32 r0_unused, u32 r1, u32 r2) {
    guest::StackFrame frame(0x14);  // the original's stack frame
    u32 r0_1 = *global_00985df8;
    if (r0_1 < 0xfcu) {  // (from the original)
        *global_00985df0 = 0;
        r0_1 = 0xfcu;  // (from the original)
        *global_00985df4 = 0;
        r2 = ~0u;
        *global_00985df8 = u8(r0_1);
        *global_00985dfc = r2;
    }
    if (r1 == 0) {
        u32 r0_2 = call_006cbcbc(r0_1, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0_2 == 0) {
            return r0_2;
        }
    }
    u32 r0_3 = *global_00985df8;
    if (r0_3 < 0xfcu) {  // (from the original)
        u32 r0_4 = call_002fb328(r0_3, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        u32 zf_1 = *gptr<u8>(r0_4 + 0x53480u) == 1u;  // (from the original)
        u32 r0_5 = *global_00985df8;
        if (zf_1) {
            if (r0_5 == 0xfau) {  // (from the original)
                return r0_5;
            }
        } else if (r0_5 == 0xfbu) {  // (from the original)
            return r0_5;
        }
    }
    call_006fa430(frame.at(0).addr(), r1, r2, guest::cpu()->r[3]);
    u32 r2_1 = frame.at(0).addr();
    u32 r1_1 = frame.at(0x10).addr();  // (from the original)
    *frame.at<u32>(0xc) = 0;  // (from the original)
    *frame.at<u32>(0x10) = 0;  // (from the original)
    u32 r0_8 = call_003171b4(frame.at(0xc).addr(), r1_1, r2_1);  // (from the original)
    u32 r0_9 = call_002fb328(r0_8, r1_1, r2_1, guest::cpu()->r[3]);
    if (*gptr<u8>(r0_9 + 0x53480u) != 1u) {  // (from the original)
        *global_00985df0 = *frame.at<u32>(0xc);  // (from the original)
        u32 r1_2 = *frame.at<u32>(0x10);  // (from the original)
        *global_00985df4 = r1_2;
        *global_00985df8 = 0xfb;  // (from the original)
        *global_00985dfc = 0;
        guest::cpu()->r[1] = r1_2;
        return 0xfbu;  // (from the original)
    }
    *global_00985df0 = *frame.at<u32>(0xc);  // (from the original)
    u32 r1_3 = *frame.at<u32>(0x10);  // (from the original)
    *global_00985df4 = r1_3;
    *global_00985df8 = 0xfa;  // (from the original)
    *global_00985dfc = 0;
    guest::cpu()->r[1] = r1_3;
    return 0xfau;  // (from the original)
}

}  // namespace d_0024ee14
GUEST_EXPORT_FRAMED(0x0024ee14, d_0024ee14::f_0024ee14, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0024ef38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0024ef38 {

inline guest::global<u32, 0x00985df0> global_00985df0;  // (from the original)
inline guest::global<u32, 0x00985df4> global_00985df4;  // (from the original)
inline guest::global<u8, 0x00985df8> global_00985df8;  // (from the original)
inline guest::global<u32, 0x00985dfc> global_00985dfc;  // (from the original)

void f_0024ef38(gptr<VillageSpBook> arg0) {
    arg0->word_0 = 0x8ee8e8;  // (from the original)
    *global_00985df0 = 0;
    *global_00985df4 = 0;
    *global_00985df8 = 0xfc;  // (from the original)
    *global_00985dfc = ~0u;
}

}  // namespace d_0024ef38
GUEST_EXPORT(0x0024ef38, d_0024ef38::f_0024ef38);

// f_0024f010: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0024f010 {

inline constexpr guest::Function<0x0014f92c, u32(u32, u32, u32)> call_0014f92c;  // (from the original)
inline constexpr guest::Function<0x002a7190, u32(u32, u32, u32)> call_002a7190;  // (from the original)
inline constexpr guest::Function<0x002fb96c, u32(u32, u32, u32, u32)> call_002fb96c;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x00303110, u32(u32, u32, u32)> call_00303110;  // (from the original)
inline constexpr guest::Function<0x003031f0, u32(u32, u32, u32)> call_003031f0;  // (from the original)
inline constexpr guest::Function<0x0076aa40, u32(u32, u32, u32)> call_0076aa40;  // (from the original)
inline constexpr guest::Function<0x0076bac4, u32(u32, u32, u32)> call_0076bac4;  // (from the original)

void f_0024f010(u32 r0, u32 r1, u32 r2) {
    u32 r6 = r1;
    u32 r7 = r2;
    u32 r0_1 = call_002fb96c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    u32 r10 = 0x9845b8u;  // (from the original)
    u32 r4 = 0u;
    u32 r9 = r0_1 + 0x5544u;  // (from the original)
    do {
        u32 r0_2 = call_002a7190(r9, r4, r2);
        u32 r5_1 = 0u;
        u32 r0_3 = call_003031f0(r0_2, guest::cpu()->r[1], guest::cpu()->r[2]);
        u32 r0_4 = call_0076aa40(r0_3, guest::cpu()->r[1], guest::cpu()->r[2]);
        u32 r1_3 = guest::cpu()->r[1];
        u32 r2_3 = guest::cpu()->r[2];
        if (r0_4 != 0) {
            u32 r0_5 = call_003031f0(r0_2, r1_3, r2_3);
            u32 r0_6 = call_0076bac4(r0_5, guest::cpu()->r[1], guest::cpu()->r[2]);
            r1_3 = guest::cpu()->r[1];
            r2_3 = guest::cpu()->r[2];
            if (r0_6 == r6) {
                call_002fc8e8(r0_2, 0x95bfdcu, r2_3);  // (from the original)
                r1_3 = guest::cpu()->r[1];
                r2_3 = guest::cpu()->r[2];
                r5_1 = 1u;
            }
        }
        u32 r0_7 = call_00303110(r0_2, r1_3, r2_3);
        u32 r0_8 = call_0076aa40(r0_7, guest::cpu()->r[1], guest::cpu()->r[2]);
        u32 r1_6 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0_8 != 0) {
            u32 r0_9 = call_00303110(r0_2, r1_6, r2);
            r0_8 = call_0076bac4(r0_9, guest::cpu()->r[1], guest::cpu()->r[2]);
            r1_6 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            if (r0_8 == r6) {
                r0_8 = call_002fc8e8(r0_2 + 8u, 0x95bfdcu, r2);  // (from the original)
                r1_6 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r5_1 = 1u;
            }
        }
        u32 zf_1 = (r7 & r5_1) == 0;
        if (!zf_1) {
            r0_8 = *gptr<u32>(r10 + (r4 << 2));
            zf_1 = r0_8 == 0;
        }
        if (!zf_1) {
            call_0014f92c(r0_8, r1_6, r2);
            r2 = guest::cpu()->r[2];
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 4u);
}

}  // namespace d_0024f010
GUEST_EXPORT_FRAMED(0x0024f010, d_0024f010::f_0024f010, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0024f238: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0024f238 {

inline constexpr guest::Function<0x0057b990, u32(u32, u32, u32, u32)> call_0057b990;  // (from the original)
inline constexpr guest::Function<0x006b0d98, u32(u32)> call_006b0d98;  // (from the original)

u32 f_0024f238(u32 r0) {
    u32 r0_1 = call_0057b990(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 == 0) {
        return r0_1;
    }
    if (*gptr<u8>(r0 + 0x110u) != 0) {  // (from the original)
        call_006b0d98(r0 + 0xccu);  // (from the original)
    }
    return 1u;
}

}  // namespace d_0024f238
GUEST_EXPORT_FRAMED(0x0024f238, d_0024f238::f_0024f238, 0x4010);  // pushes {r4, lr} first, as the original

// f_0024f400: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0024f400 {

struct __attribute__((packed)) Local_0024f400_r0_4 {
    u8 unknown_0[0x110];  // (not used here)
    u8 byte_110;
    u8 unknown_111[0x3];  // (not used here)
    u32 word_114;
    u32 word_118;
    u8 byte_11c;
};
GUEST_OFFSET(Local_0024f400_r0_4, byte_110, 0x110);  // (from the original)
GUEST_OFFSET(Local_0024f400_r0_4, word_114, 0x114);  // (from the original)
GUEST_OFFSET(Local_0024f400_r0_4, word_118, 0x118);  // (from the original)
GUEST_OFFSET(Local_0024f400_r0_4, byte_11c, 0x11c);  // (from the original)

inline guest::global<u32, 0x0024f460> global_0024f460;  // (from the original)
inline constexpr guest::Function<0x001f4fec, u32(u32, u32, u32, u32)> call_001f4fec;  // (from the original)
inline constexpr guest::Function<0x002d59d4, u32(u32, u32, u32)> call_002d59d4;  // (from the original)
inline constexpr guest::Function<0x006b1468, u32(u32, u32, u32)> call_006b1468;  // (from the original)

u32 f_0024f400(u32 r0, u32 r1, u32 r2, float S0) {
    u32 r0_1 = call_001f4fec(r0, r1 + 4u, r2, guest::cpu()->r[3]);
    u32 r1_2 = *gptr<u32>(r1);
    *gptr<u32>(r0_1) = r1_2;
    u32 r1_3 = *gptr<u32>(r1_2 - 0xcu);  // (from the original)
    u32 r2_1 = *gptr<u32>(r1 + 0xcu);  // (from the original)
    *gptr<u32>(r0_1 + r1_3) = r2_1;
    *gptr<u8>(r0_1 + 0xc9u) = 0;  // (from the original)
    u32 r0_3 = call_006b1468(r0_1 + 0xccu, r1_3, r2_1);  // (from the original)
    u32 r2_2 = guest::cpu()->r[2];
    gptr<Local_0024f400_r0_4> r0_4 = gptr<Local_0024f400_r0_4>(r0_3 - 0xccu);  // (from the original)
    float S0_2 = std::bit_cast<float>(*global_0024f460);
    r0_4->byte_110 = 1;
    r0_4->word_114 = std::bit_cast<u32>(S0_2);
    r0_4->word_118 = std::bit_cast<u32>(S0_2);
    r0_4->byte_11c = 0;
    guest::cpu()->s[0] = S0_2;
    u32 r0_6 = call_002d59d4(r0_4.addr() + 0x120u, 1u, r2_2);  // (from the original)
    return r0_6 - 0x120u;  // (from the original)
}

}  // namespace d_0024f400
GUEST_EXPORT_FRAMED(0x0024f400, d_0024f400::f_0024f400, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0024f70c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0024f70c {


u32 f_0024f70c(u32 r0_unused, u32 r1) {
    u32 r1_1 = *gptr<u32>(0x8452f8u + (r1 << 2));  // (from the original)
    return guest::call_address<u32>(r1_1, guest::cpu()->r[0], r1_1, 0x8452f8u, guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0024f70c
GUEST_EXPORT(0x0024f70c, d_0024f70c::f_0024f70c);

// f_0024fbd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0024fbd4 {

inline constexpr guest::Function<0x001e5894, u32(u32, u32, u32, u32)> call_001e5894;  // (from the original)
inline constexpr guest::Function<0x00277d98, u32(u32, u32, u32)> call_00277d98;  // (from the original)

void f_0024fbd4(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    call_001e5894(frame.at(0).addr(), r1, r2, guest::cpu()->r[3]);
    call_00277d98(r0, r1, frame.at(0).addr());
    *gptr<u8>(r0 + 0xc4u) = 1;  // (from the original)
}

}  // namespace d_0024fbd4
GUEST_EXPORT_FRAMED(0x0024fbd4, d_0024fbd4::f_0024fbd4, 0x4030);  // pushes {r4, r5, lr} first, as the original
