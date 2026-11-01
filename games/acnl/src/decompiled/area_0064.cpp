// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "player/slot_object.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_006401f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006401f4 {

inline constexpr guest::Function<0x002fb94c, u32(u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x002fe574, u32(u32, u32)> call_002fe574;  // (from the original)
inline constexpr guest::Function<0x00713aa8, u32(u32, u32, u32, u32)> call_00713aa8;  // (from the original)
inline constexpr guest::Function<0x0071a7ec, u32(u32, u32)> call_0071a7ec;  // (from the original)
inline constexpr guest::Function<0x0076e014, u32(u32, u32)> call_0076e014;  // (from the original)
inline constexpr guest::Function<0x008273c8, u32(u32, u32)> call_008273c8;  // (from the original)

void f_006401f4(u32 r0, u32 r1) {
    guest::StackFrame frame(0x70);  // the original's stack frame
    u32 r0_6 = 0;
    u32 r0_8 = 0;
    u32 r0_10 = 0;
    u32 r0_12 = 0;
    u32 r0_16 = 0;
    u32 r6_1 = 0;
    u32 r0_1 = call_00713aa8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        return;
    }
    *frame.at<u32>(0x2c) = 0x640538;  // (from the original)
    *frame.at<u32>(0x28) = 0x9047f8;  // (from the original)
    u32 r0_2 = call_008273c8(r0_1, frame.at(0x28).addr());  // (from the original)
    r1 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        *frame.at<u32>(0x3c) = 0x640548;  // (from the original)
        *frame.at<u32>(0x38) = 0x9047f8;  // (from the original)
        u32 r0_3 = call_008273c8(r0_1, frame.at(0x38).addr());  // (from the original)
        r1 = guest::cpu()->r[1];
        if (r0_3 == 0) {
            *frame.at<u32>(0x4c) = 0x640554;  // (from the original)
            *frame.at<u32>(0x48) = 0x9047f8;  // (from the original)
            u32 r0_4 = call_008273c8(r0_1, frame.at(0x48).addr());  // (from the original)
            r1 = guest::cpu()->r[1];
            if (r0_4 == 0) {
                *frame.at<u32>(0x14) = 0x640560;  // (from the original)
                *frame.at<u32>(0x10) = 0x9047f8;  // (from the original)
                u32 r0_5 = call_008273c8(r0_1, frame.at(0x10).addr());  // (from the original)
                r1 = guest::cpu()->r[1];
                if (r0_5 == 0) {
                    *frame.at<u32>(0x1c) = 0x640570;  // (from the original)
                    *frame.at<u32>(0x18) = 0x9047f8;  // (from the original)
                    r0_6 = call_008273c8(r0_1, frame.at(0x18).addr());  // (from the original)
                    r1 = guest::cpu()->r[1];
                    if (r0_6 == 0) {
                        goto L_6402b4;
                    }
                }
            }
        }
    }
    r0_6 = 1u;
L_6402b4:;
    if (r0_6 != 0) {
        guest::cpu()->r[1] = r1;
        return;
    }
    *gptr<u8>(r0 + 0x2d1u) = u8(u32(*gptr<u8>(r0 + 0x2d1u)) | 0x20u);  // (from the original)
    *frame.at<u32>(0x1c) = 0x640580;  // (from the original)
    u32 r5 = r0 + 0x2d1u;  // (from the original)
    *frame.at<u32>(0x18) = 0x9047f8;  // (from the original)
    u32 r0_7 = call_008273c8(r0_1, frame.at(0x18).addr());  // (from the original)
    r1 = guest::cpu()->r[1];
    if (r0_7 == 0) {
        *frame.at<u32>(0x14) = 0x64058c;  // (from the original)
        *frame.at<u32>(0x10) = 0x9047f8;  // (from the original)
        r0_8 = call_008273c8(r0_1, frame.at(0x10).addr());  // (from the original)
        r1 = guest::cpu()->r[1];
        if (r0_8 == 0) {
            goto L_64031c;
        }
    }
    r0_8 = 1u;
L_64031c:;
    if (r0_8 == 0) {
        goto L_640338;
    } else {
        r0 = u32(*gptr<u8>(r5)) & ~0x20u;  // (from the original)
    }
    *gptr<u8>(r5) = u8(r0);
    guest::cpu()->r[1] = r1;
    return;
L_640338:;
    *frame.at<u32>(0x34) = 0x640594;  // (from the original)
    *frame.at<u32>(0x30) = 0x9047f8;  // (from the original)
    u32 r0_9 = call_008273c8(r0_1, frame.at(0x30).addr());  // (from the original)
    r1 = guest::cpu()->r[1];
    if (r0_9 == 0) {
        *frame.at<u32>(0x44) = 0x6405a0;  // (from the original)
        *frame.at<u32>(0x40) = 0x9047f8;  // (from the original)
        r0_10 = call_008273c8(r0_1, frame.at(0x40).addr());  // (from the original)
        r1 = guest::cpu()->r[1];
        if (r0_10 == 0) {
            goto L_640384;
        }
    }
    r0_10 = 1u;
L_640384:;
    if (r0_10 == 0) {
        *frame.at<u32>(0x54) = 0x6405ac;  // (from the original)
        *frame.at<u32>(0x50) = 0x9047f8;  // (from the original)
        u32 r0_11 = call_008273c8(r0_1, frame.at(0x50).addr());  // (from the original)
        if (r0_11 == 0) {
            *frame.at<u32>(0x5c) = 0x6405bc;  // (from the original)
            *frame.at<u32>(0x58) = 0x9047f8;  // (from the original)
            r0_12 = call_008273c8(r0_1, frame.at(0x58).addr());  // (from the original)
            if (r0_12 == 0) {
                goto L_6403e0;
            }
        }
        r0_12 = 1u;
L_6403e0:;
        if (r0_12 == 0) {
            goto L_6403fc;
        }
L_6403e8:;
        r1 = u32(*gptr<u8>(r5)) & ~0x20u;  // (from the original)
        r0 = r1 | 0x40u;  // (from the original)
        *gptr<u8>(r5) = u8(r1);
        *gptr<u8>(r5) = u8(r0);
        guest::cpu()->r[1] = r1;
        return;
L_6403fc:;
        *frame.at<u32>(0x24) = 0x6405c4;  // (from the original)
        *frame.at<u32>(0x20) = 0x9047f8;  // (from the original)
        u32 r0_13 = call_008273c8(r0_1, frame.at(0x20).addr());  // (from the original)
        u32 r1_13 = guest::cpu()->r[1];
        if (r0_13 == 0) {
            *frame.at<u32>(0x64) = 0x6405dc;  // (from the original)
            *frame.at<u32>(0x60) = 0x9047f8;  // (from the original)
            u32 r0_14 = call_008273c8(r0_1, frame.at(0x60).addr());  // (from the original)
            r1 = guest::cpu()->r[1];
            if (r0_14 != 0) {
                *frame.at<u32>(0x6c) = 0x6405e8;  // (from the original)
                *frame.at<u32>(0x68) = 0x9047f8;  // (from the original)
                u32 r0_15 = call_008273c8(r0_1, frame.at(0x68).addr());  // (from the original)
                r1 = guest::cpu()->r[1];
                if (r0_15 == 0) {
                    r0_16 = 1u;
                    goto L_640508;
                }
            }
            r0_16 = 0u;
L_640508:;
            if (r0_16 == 0) {
                guest::cpu()->r[1] = r1;
                return;
            }
            u32 r0_17 = call_002fb94c(r0_16, r1);
            r1 = guest::cpu()->r[1];
            if (r0_17 == 0) {
                return;
            }
            u32 r0_18 = call_0076e014(r0_17, r1);
            if (r0_18 != 0) {
                guest::preempt();
                goto L_6403e8;
            }
            return;
        }
        u32 r0_19 = call_002fb94c(r0_13, r1_13);
        r1 = guest::cpu()->r[1];
        if (r0_19 == 0) {
            return;
        }
        u32 r0_21 = call_0071a7ec(r0_19 + 0xau, r1);  // (from the original)
        u32 r0_23 = call_002fcbb0(frame.at(0x60).addr(), 0x28b1u);  // (from the original)
        u32 r0_24 = call_002fe574(r0_21, r0_23);
        u32 r1_17 = guest::cpu()->r[1];
        if (r0_24 == 0) {
            call_002fcbb0(frame.at(0xc).addr(), 0x28b2u);  // (from the original)
            u32 r0_26 = call_002fe574(r0_21, frame.at(0xc).addr());  // (from the original)
            r1_17 = guest::cpu()->r[1];
            if (r0_26 == 0) {
                r6_1 = 0u;
                goto L_640490;
            }
        }
        r6_1 = 1u;
L_640490:;
        if (r6_1 != 0) {
            guest::preempt();
            goto L_6403e8;
        }
        guest::cpu()->r[1] = r1_17;
        return;
    }
    r0 = u32(*gptr<u8>(r5)) | 0x40u;  // (from the original)
    *gptr<u8>(r5) = u8(r0);
    guest::cpu()->r[1] = r1;
}

}  // namespace d_006401f4
GUEST_EXPORT_FRAMED(0x006401f4, d_006401f4::f_006401f4, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_006405f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006405f4 {

struct __attribute__((packed)) Local_006405f4_ea_1 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Local_006405f4_ea_1, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006405f4_ea_1, byte_1, 0x1);  // (from the original)
GUEST_OFFSET(Local_006405f4_ea_1, byte_2, 0x2);  // (from the original)

inline guest::global<u32, 0x00aaf14c> global_00aaf14c;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x0031917c, u32(u32, u32, u32)> call_0031917c;  // (from the original)
inline constexpr guest::Function<0x0071dcdc, u32(u32, u32)> call_0071dcdc;  // (from the original)
inline constexpr guest::Function<0x00756120, u32(u32, u32, u32)> call_00756120;  // (from the original)
inline constexpr guest::Function<0x00758dd4, u32(u32, u32)> call_00758dd4;  // (from the original)

u32 f_006405f4(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = call_002fb328(r0, r1, r2, guest::cpu()->r[3]);
    u32 r0_3 = call_0031917c(r0_1 + 0x406ecu, r1, guest::cpu()->r[2]);  // (from the original)
    u32 r6_1 = *global_00aaf14c;
    u32 r1_1 = r2;
    if (r2 + 1u == 0) {
        r0_3 = call_00756120(r0_3, r6_1, guest::cpu()->r[2]);
        r1_1 = r0_3;
    }
    gptr<Local_006405f4_ea_1> ea_1 = gptr<Local_006405f4_ea_1>(r0 + 0x270u);  // (from the original)
    ea_1->byte_0 = u8(r1);
    u32 r5_1 = 0u;
    ea_1->byte_1 = u8(r1_1);
    if (r1_1 + 1u != 0) {
        r0_3 = call_0071dcdc(r6_1 + 0x7008u, r1_1);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        u32 r6_2 = r0_3;
        if (r0_3 != 0) {
            r0_3 = call_00758dd4(r0_3, r1_1);
            r1_1 = guest::cpu()->r[1];
            if (r0_3 == 2u) {
                r5_1 = 1u;
                r0_3 = call_002fcaf4(r6_2 + 0x274u, r1_1);  // (from the original)
                r1_1 = guest::cpu()->r[1];
                if (r0_3 != 0) {
                    r5_1 = 2u;
                }
            }
        }
    }
    ea_1->byte_2 = u8(r5_1);
    guest::cpu()->r[1] = r1_1;
    return r0_3;
}

}  // namespace d_006405f4
GUEST_EXPORT_FRAMED(0x006405f4, d_006405f4::f_006405f4, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00641f88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00641f88 {

struct __attribute__((packed)) Object_00641f88_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00641f88_0, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_00641f88_res_1 {
    u8 unknown_0[0x3];  // (not used here)
    u8 byte_3;
    u8 unknown_4[0xf];  // (not used here)
    u8 byte_13;
    u8 unknown_14[0x3];  // (not used here)
    u8 byte_17;
    u8 unknown_18[0x3];  // (not used here)
    u8 byte_1b;
    u8 unknown_1c[0x1];  // (not used here)
    u8 byte_1d;
};
GUEST_OFFSET(Local_00641f88_res_1, byte_3, 0x3);  // (from the original)
GUEST_OFFSET(Local_00641f88_res_1, byte_13, 0x13);  // (from the original)
GUEST_OFFSET(Local_00641f88_res_1, byte_17, 0x17);  // (from the original)
GUEST_OFFSET(Local_00641f88_res_1, byte_1b, 0x1b);  // (from the original)
GUEST_OFFSET(Local_00641f88_res_1, byte_1d, 0x1d);  // (from the original)

inline guest::global<u32, 0x0095debc> global_0095debc;  // (from the original)
inline guest::global<u32, 0x00a83af0> global_00a83af0;  // (from the original)
inline constexpr guest::Function<0x00300914, u32(u32, u32, u32, u32)> call_00300914;  // (from the original)
inline constexpr guest::Function<0x00300924, u32(u32, u32, u32)> call_00300924;  // (from the original)
inline constexpr guest::Function<0x005f11b4, u32(u32, u32, u32, u32)> call_005f11b4;  // (from the original)
inline constexpr guest::Function<0x005fcfd8, u32(u32, u32, u32, u32)> call_005fcfd8;  // (from the original)
inline constexpr guest::Function<0x0075c348, u32(u32, u32, u32, u32)> call_0075c348;  // (from the original)

u32 f_00641f88(gptr<Object_00641f88_0> arg0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r5_1 = *global_0095debc;
    u32 r0_1 = arg0->word_4;
    u32 r1_1 = *global_00a83af0;
    u32 zf_1 = r1_1 == 0;
    u32 cf_1 = r1_1 >= 0u;
    if (!zf_1) {
        zf_1 = 0x18fu == r1;  // (from the original)
        cf_1 = 0x18fu >= r1;  // (from the original)
    }
    if (!!cf_1 && !zf_1) {
        u32 r2_1 = r1 + (r1 << 4);
        gptr<Local_00641f88_res_1> res_1 = gptr<Local_00641f88_res_1>(r1_1 + (r2_1 << 1));
        u32 zf_2 = res_1.addr() == 0;
        if (!zf_2) {
            zf_2 = r5_1 == 0;
        }
        if (!zf_2 && r0_1 != 0) {
            r0_1 = *gptr<u32>(r0_1 + 0x354u);  // (from the original)
            if (r0_1 != 0) {
                call_005fcfd8(frame.at(0).addr(), r1_1, r2_1, r3);
                res_1->byte_13 = 0;
                call_0075c348(r5_1, frame.at(0).addr(), 0x6420b4u, res_1.addr() + 0x10u);  // (from the original)
                call_005f11b4(r0_1, frame.at(0).addr(), 0xcu, 0u);  // (from the original)
                res_1->byte_1b = 0;
                call_0075c348(r5_1, frame.at(0).addr(), 0x6420c4u, res_1.addr() + 0x18u);  // (from the original)
                call_005f11b4(r0_1, frame.at(0).addr(), 0xau, 0u);  // (from the original)
                res_1->byte_17 = 0;
                call_0075c348(r5_1, frame.at(0).addr(), 0x6420d4u, res_1.addr() + 0x14u);  // (from the original)
                call_005f11b4(r0_1, frame.at(0).addr(), 0xbu, 0u);  // (from the original)
                call_00300914(r0_1, u32(res_1->byte_1d) >> 4, 0u, guest::cpu()->r[3]);
                u32 r1_9 = s8(res_1->byte_3);
                call_00300924(r0_1, r1_9, 0u);
                r1_1 = guest::cpu()->r[1];
                r0_1 = frame.at(0).addr();
            }
        }
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_00641f88
GUEST_EXPORT_FRAMED(0x00641f88, d_00641f88::f_00641f88, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0064664c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0064664c {

struct __attribute__((packed)) Object_0064664c_0 {
    u8 unknown_0[0xf0];  // (not used here)
    u32 word_f0;
};
GUEST_OFFSET(Object_0064664c_0, word_f0, 0xf0);  // (from the original)

struct __attribute__((packed)) Local_0064664c_r4_2 {
    u8 unknown_0[0x30];  // (not used here)
    u32 word_30;
};
GUEST_OFFSET(Local_0064664c_r4_2, word_30, 0x30);  // (from the original)

inline constexpr guest::Function<0x00239174, u32(u32, u32, u32)> call_00239174;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x00313440, u32(u32, u32, u32)> call_00313440;  // (from the original)
inline constexpr guest::Function<0x005b6a10, u32(u32, u32, u32)> call_005b6a10;  // (from the original)
inline constexpr guest::Function<0x005c1d80, u32(u32, u32, u32)> call_005c1d80;  // (from the original)
inline constexpr guest::Function<0x0069a764, u32(u32, u32, u32)> call_0069a764;  // (from the original)

u32 f_0064664c(gptr<Object_0064664c_0> arg0, u32 r1_unused, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r4 = 0;
    u32 r5 = 0;
    u32 r7 = 0;
    u32 r9 = 0;
    u32 r10 = 0;
    u32 r1_4 = 0;
    u32 r2_3 = 0;
    u32 r0_4 = 0;
    u32 r2_4 = 0;
    u32 r0_5 = 0;
    u32 r1_5 = 0;
    u32 r2_5 = 0;
    u32 r0_6 = 0;
    u32 r1_6 = 0;
    u32 r2_6 = 0;
    u32 r0_7 = 0;
    u32 r1_7 = 0;
    u32 r6 = r0;
    u32 r0_1 = 3u;
    u32 r1_1 = ~0u;
    u32 r8 = 0x984718u;  // (from the original)
    *gptr<u32>(r8) = r0_1;
    *gptr<u32>(r8 + 4) = r1_1;
    *gptr<u8>(r8 + 8u) = 0;
    u32 r4_1 = arg0->word_f0;
    if (r4_1 != 0) {
        u32 r0_2 = call_002f74c8(r0_1, r1_1, r2, guest::cpu()->r[3]);
        u32 r0_3 = call_00313440(r0_2, guest::cpu()->r[1], guest::cpu()->r[2]);
        u32 r2_2 = guest::cpu()->r[2];
        gptr<Local_0064664c_r4_2> r4_2 = gptr<Local_0064664c_r4_2>(r4_1 + 0x1000u);  // (from the original)
        u32 r1_3 = r4_2->word_30;
        if (r0_3 != r1_3) {
            goto L_6466fc;
        }
        r9 = 1u;
        *gptr<u32>(r8) = r9;
        call_00239174(r6, r1_3, 0u);
        r1_4 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
        r0_4 = 0x950148u;  // (from the original)
        r7 = *gptr<u32>(r0_4);
        if (r7 == 0) {
            goto L_646768;
        }
        r5 = r4_2->word_30;
        r10 = 0x88722eu;  // (from the original)
        r4 = 0u;
L_6466c0:;
        r2_4 = *gptr<u16>(r10);
        r0_4 = call_0069a764(r7, r4, r2_4);
        r1_4 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
        if (r0_4 == 0 || r4 == r5) {
            goto L_646720;
        }
        *gptr<u8>(r8 + 8u) = u8(r9);
        r0_4 = call_00239174(r6, r4, 1u);
        r1_4 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
        goto L_646768;
L_6466fc:;
        r0_5 = call_002f74c8(r0_3, r1_3, r2_2, guest::cpu()->r[3]);
        r1_5 = guest::cpu()->r[1];
        r2_5 = guest::cpu()->r[2];
        r0_4 = call_005b6a10(r0_5, r1_5, r2_5);
        r1_4 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
        if (r0_4 == 0) {
            goto L_646730;
        } else {
            *gptr<u32>(r8) = 0;
        }
        goto L_646768;
L_646720:;
        r4 += 1u;
        if (s32(r4) < 0xa) {  // (from the original)
            guest::preempt();
            goto L_6466c0;
        }
        goto L_646768;
L_646730:;
        *gptr<u32>(r8) = 2;
        r0_6 = call_002f74c8(2u, r1_4, r2_3, guest::cpu()->r[3]);
        r1_6 = guest::cpu()->r[1];
        r2_6 = guest::cpu()->r[2];
        r0_7 = call_00313440(r0_6, r1_6, r2_6);
        call_00239174(r6, r0_7, 0u);
        r1_7 = r4_2->word_30;
        r0_4 = call_00239174(r6, r1_7, 1u);
        r1_4 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
L_646768:;
        u32 r0_8 = call_005c1d80(r0_4, r1_4, r2_3);
        r1_1 = guest::cpu()->r[1];
        *gptr<u32>(r8 + 4u) = r0_8;
        r0_1 = 0x1717c0u;  // (from the original)
        *gptr<u32>(r6 + 0x164u) = r0_1;  // (from the original)
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0064664c
GUEST_EXPORT_FRAMED(0x0064664c, d_0064664c::f_0064664c, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_006483f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006483f4 {

struct __attribute__((packed)) Local_006483f4_r0_2 {
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
GUEST_OFFSET(Local_006483f4_r0_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006483f4_r0_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_006483f4_r0_2, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_006483f4_r0_2, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_006483f4_r0_2, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_006483f4_r0_2, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_006483f4_r0_2, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_006483f4_r0_2, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Local_006483f4_r0_2, word_20, 0x20);  // (from the original)

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fc900, u32(u32, u32, u32, u32)> call_002fc900;  // (from the original)
inline constexpr guest::Function<0x002fe4c0, u32(u32, u32, u32, u32)> call_002fe4c0;  // (from the original)
inline constexpr guest::Function<0x0030031c, u32(u32, u32, u32, u32)> call_0030031c;  // (from the original)
inline constexpr guest::Function<0x00301df4, u32(u32, u32, u32, u32)> call_00301df4;  // (from the original)
inline constexpr guest::Function<0x0051ccc0, u32(u32, u32, u32, u32)> call_0051ccc0;  // (from the original)
inline constexpr guest::Function<0x00632acc, u32(u32, u32, u32, u32)> call_00632acc;  // (from the original)
inline constexpr guest::Function<0x00761c48, u32(u32, u32, u32, u32)> call_00761c48;  // (from the original)
inline constexpr guest::Function<0x008273c8, u32(u32, u32, u32, u32)> call_008273c8;  // (from the original)

u32 f_006483f4(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2, float S3, float S4, float S5, float S6, float S7) {
    guest::StackFrame frame(0x34);  // the original's stack frame
    u32 r6_1 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    float S2_2 = 0;
    float S3_2 = 0;
    float S4_2 = 0;
    float S5_2 = 0;
    float S6_2 = 0;
    float S7_2 = 0;
    u32 r5_1 = 0;
    u32 r0_12 = 0;
    u32 r0_1 = call_002fc900(r0, r1, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    u32 r3_1 = guest::cpu()->r[3];
    gptr<Local_006483f4_r0_2> r0_2 = gptr<Local_006483f4_r0_2>(r0_1 == 0 ? 0x841be4u : 0x841c08u);  // (from the original)
    float S0_1 = std::bit_cast<float>(r0_2->word_0);
    float S1_1 = std::bit_cast<float>(r0_2->word_4);
    float S2_1 = std::bit_cast<float>(r0_2->word_8);
    float S3_1 = std::bit_cast<float>(r0_2->word_c);
    float S4_1 = std::bit_cast<float>(r0_2->word_10);
    float S5_1 = std::bit_cast<float>(r0_2->word_14);
    float S6_1 = std::bit_cast<float>(r0_2->word_18);
    float S7_1 = std::bit_cast<float>(r0_2->word_1c);
    *gptr<u32>(r1) = std::bit_cast<u32>(S0_1);
    *gptr<u32>(r1 + 4) = std::bit_cast<u32>(S1_1);
    *gptr<u32>(r1 + 8) = std::bit_cast<u32>(S2_1);
    *gptr<u32>(r1 + 0xc) = std::bit_cast<u32>(S3_1);  // (from the original)
    *gptr<u32>(r1 + 0x10) = std::bit_cast<u32>(S4_1);  // (from the original)
    *gptr<u32>(r1 + 0x14) = std::bit_cast<u32>(S5_1);  // (from the original)
    *gptr<u32>(r1 + 0x18) = std::bit_cast<u32>(S6_1);  // (from the original)
    *gptr<u32>(r1 + 0x1c) = std::bit_cast<u32>(S7_1);  // (from the original)
    *gptr<u32>(r1 + 0x20u) = r0_2->word_20;  // (from the original)
    u32 r0_3 = *gptr<u32>(r0 + 0xf0u);  // (from the original)
    if (r0_3 != 0) {
        r6_1 = *gptr<u32>(r0_3 + 0x1028u);  // (from the original)
        if (r6_1 != 0) {
            guest::cpu()->s[0] = S0_1;
            guest::cpu()->s[1] = S1_1;
            guest::cpu()->s[2] = S2_1;
            guest::cpu()->s[3] = S3_1;
            guest::cpu()->s[4] = S4_1;
            guest::cpu()->s[5] = S5_1;
            guest::cpu()->s[6] = S6_1;
            guest::cpu()->s[7] = S7_1;
            r0_4 = call_00632acc(r0, r1_1, r2_1, r3_1);
            r1_2 = guest::cpu()->r[1];
            r2_2 = guest::cpu()->r[2];
            r3_2 = guest::cpu()->r[3];
            S0_2 = guest::cpu()->s[0];
            S1_2 = guest::cpu()->s[1];
            S2_2 = guest::cpu()->s[2];
            S3_2 = guest::cpu()->s[3];
            S4_2 = guest::cpu()->s[4];
            S5_2 = guest::cpu()->s[5];
            S6_2 = guest::cpu()->s[6];
            S7_2 = guest::cpu()->s[7];
            r5_1 = r0_4;
            if (r0_4 == 0) {
                goto L_64849c;
            }
            r0_4 = call_0030031c(r5_1 + 0xeau, 1u, r2_2, r3_2);  // (from the original)
            r1_2 = guest::cpu()->r[1];
            r2_2 = guest::cpu()->r[2];
            r3_2 = guest::cpu()->r[3];
            S0_2 = guest::cpu()->s[0];
            S1_2 = guest::cpu()->s[1];
            S2_2 = guest::cpu()->s[2];
            S3_2 = guest::cpu()->s[3];
            S4_2 = guest::cpu()->s[4];
            S5_2 = guest::cpu()->s[5];
            S6_2 = guest::cpu()->s[6];
            S7_2 = guest::cpu()->s[7];
            if (r0_4 == 0) {
                goto L_64847c;
            }
            goto L_64849c;
        }
    }
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return 0u;
L_64847c:;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    guest::cpu()->s[2] = S2_2;
    guest::cpu()->s[3] = S3_2;
    guest::cpu()->s[4] = S4_2;
    guest::cpu()->s[5] = S5_2;
    guest::cpu()->s[6] = S6_2;
    guest::cpu()->s[7] = S7_2;
    r0_4 = call_00761c48(r0, r2, r6_1, r5_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    S2_2 = guest::cpu()->s[2];
    S3_2 = guest::cpu()->s[3];
    S4_2 = guest::cpu()->s[4];
    S5_2 = guest::cpu()->s[5];
    S6_2 = guest::cpu()->s[6];
    S7_2 = guest::cpu()->s[7];
    if (r0_4 != 0) {
        goto L_6484a0;
    }
L_64849c:;
    *gptr<u32>(r1 + 8u) = 0;
L_6484a0:;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    guest::cpu()->s[2] = S2_2;
    guest::cpu()->s[3] = S3_2;
    guest::cpu()->s[4] = S4_2;
    guest::cpu()->s[5] = S5_2;
    guest::cpu()->s[6] = S6_2;
    guest::cpu()->s[7] = S7_2;
    u32 r0_6 = call_002fb328(r0_4, r1_2, r2_2, r3_2);
    u32 r2_3 = guest::cpu()->r[2];
    u32 r3_3 = guest::cpu()->r[3];
    u32 r0_8 = call_00301df4(r0_6 + 0xa0u, 0u, r2_3, r3_3);  // (from the original)
    u32 r1_3 = guest::cpu()->r[1];
    u32 r2_4 = guest::cpu()->r[2];
    u32 r3_4 = guest::cpu()->r[3];
    u32 r0_9 = call_002fb328(r0_8, r1_3, r2_4, r3_4);
    u32 r2_5 = guest::cpu()->r[2];
    u32 r3_5 = guest::cpu()->r[3];
    float S0_5 = guest::cpu()->s[0];
    float S1_5 = guest::cpu()->s[1];
    float S2_5 = guest::cpu()->s[2];
    float S3_5 = guest::cpu()->s[3];
    float S4_5 = guest::cpu()->s[4];
    float S5_5 = guest::cpu()->s[5];
    float S6_5 = guest::cpu()->s[6];
    float S7_5 = guest::cpu()->s[7];
    u32 r0_10 = *gptr<u8>(r0_9 + 0x80u + 0x6214fu);  // (from the original)
    u32 r1_4 = r0_10 << 0x1e;  // (from the original)
    u32 nf_1 = r1_4 >> 0x1f;  // (from the original)
    u32 vf_1 = 0u;
    if (nf_1 == vf_1) {
        r1_4 = r0_10 << 0x1d;  // (from the original)
        nf_1 = r1_4 >> 0x1f;  // (from the original)
        vf_1 = 0u;
    }
    if (nf_1 == vf_1) {
        r1_4 = r0_10 << 0x1c;  // (from the original)
        u32 nf_2 = r1_4 >> 0x1f;  // (from the original)
        u32 vf_2 = 0u;
        if (nf_2 == vf_2) {
            r0_10 <<= 0x1b;  // (from the original)
            nf_2 = r0_10 >> 0x1f;  // (from the original)
            vf_2 = 0u;
        }
        if (nf_2 == vf_2) {
            u32 r0_11 = call_002fb328(r0_10, r1_4, r2_5, r3_5);
            r2_5 = guest::cpu()->r[2];
            r3_5 = guest::cpu()->r[3];
            S0_5 = guest::cpu()->s[0];
            S1_5 = guest::cpu()->s[1];
            S2_5 = guest::cpu()->s[2];
            S3_5 = guest::cpu()->s[3];
            S4_5 = guest::cpu()->s[4];
            S5_5 = guest::cpu()->s[5];
            S6_5 = guest::cpu()->s[6];
            S7_5 = guest::cpu()->s[7];
            r1_4 = 4u;
            if (r1_4 != (u32(*gptr<u8>(r0_11 + 0x80u + 0x6214fu + 4u)) >> 4u & 7u)) {  // (from the original)
                r0_12 = 1u;
                goto L_64851c;
            }
        }
    }
    r0_12 = 0u;
L_64851c:;
    if ((r0_12 - 1u & r0_8) != 0) {
        if ((u32(*gptr<u8>(r0_8 + 0x570eu)) & 1u) != 0) {  // (from the original)
            goto L_648540;
        }
    }
    *gptr<u32>(r1 + 0x18u) = 0;  // (from the original)
L_648540:;
    guest::cpu()->s[0] = S0_5;
    guest::cpu()->s[1] = S1_5;
    guest::cpu()->s[2] = S2_5;
    guest::cpu()->s[3] = S3_5;
    guest::cpu()->s[4] = S4_5;
    guest::cpu()->s[5] = S5_5;
    guest::cpu()->s[6] = S6_5;
    guest::cpu()->s[7] = S7_5;
    u32 r0_13 = call_002fe4c0(r6_1, r1_4, r2_5, r3_5);
    u32 r1_5 = guest::cpu()->r[1];
    u32 r2_6 = guest::cpu()->r[2];
    u32 r3_6 = guest::cpu()->r[3];
    u32 r0_14 = call_0051ccc0(r0_13, r1_5, r2_6, r3_6);
    u32 r2_7 = guest::cpu()->r[2];
    u32 r3_7 = guest::cpu()->r[3];
    *frame.at<u32>(4) = 0x648648;  // (from the original)
    *frame.at<u32>(0) = 0x9047f8;  // (from the original)
    u32 r0_15 = call_008273c8(r0_14, frame.at(0).addr(), r2_7, r3_7);
    u32 r1_7 = guest::cpu()->r[1];
    u32 r2_8 = guest::cpu()->r[2];
    u32 r3_8 = guest::cpu()->r[3];
    float S0_8 = guest::cpu()->s[0];
    float S1_8 = guest::cpu()->s[1];
    if (r0_15 != 0) {
        *frame.at<u32>(0xc) = 0x648654;  // (from the original)
        *frame.at<u32>(8) = 0x9047f8;  // (from the original)
        u32 r0_16 = call_008273c8(r0_14, frame.at(8).addr(), r2_8, r3_8);
        r1_7 = guest::cpu()->r[1];
        u32 r2_9 = guest::cpu()->r[2];
        u32 r3_9 = guest::cpu()->r[3];
        S0_8 = guest::cpu()->s[0];
        S1_8 = guest::cpu()->s[1];
        if (r0_16 != 0) {
            *gptr<u32>(r1 + 0xcu) = 0;  // (from the original)
        } else {
            *frame.at<u32>(0x14) = 0x64865c;  // (from the original)
            *frame.at<u32>(0x10) = 0x9047f8;  // (from the original)
            u32 r0_17 = call_008273c8(r0_14, frame.at(0x10).addr(), r2_9, r3_9);  // (from the original)
            r1_7 = guest::cpu()->r[1];
            u32 r2_10 = guest::cpu()->r[2];
            u32 r3_10 = guest::cpu()->r[3];
            S0_8 = guest::cpu()->s[0];
            S1_8 = guest::cpu()->s[1];
            if (r0_17 != 0) {
                *gptr<u32>(r1 + 0x14u) = 0;  // (from the original)
            } else {
                *frame.at<u32>(0x1c) = 0x648664;  // (from the original)
                *frame.at<u32>(0x18) = 0x9047f8;  // (from the original)
                u32 r0_18 = call_008273c8(r0_14, frame.at(0x18).addr(), r2_10, r3_10);  // (from the original)
                r1_7 = guest::cpu()->r[1];
                u32 r2_11 = guest::cpu()->r[2];
                u32 r3_11 = guest::cpu()->r[3];
                S0_8 = guest::cpu()->s[0];
                S1_8 = guest::cpu()->s[1];
                if (r0_18 != 0) {
                    *gptr<u32>(r1 + 0x18u) = 0;  // (from the original)
                } else {
                    *frame.at<u32>(0x24) = 0x648670;  // (from the original)
                    *frame.at<u32>(0x20) = 0x9047f8;  // (from the original)
                    u32 r0_19 = call_008273c8(r0_14, frame.at(0x20).addr(), r2_11, r3_11);  // (from the original)
                    r1_7 = guest::cpu()->r[1];
                    u32 r2_12 = guest::cpu()->r[2];
                    u32 r3_12 = guest::cpu()->r[3];
                    S0_8 = guest::cpu()->s[0];
                    S1_8 = guest::cpu()->s[1];
                    if (r0_19 != 0) {
                        *gptr<u32>(r1 + 0x20u) = 0;  // (from the original)
                    } else {
                        *frame.at<u32>(0x2c) = 0x648678;  // (from the original)
                        *frame.at<u32>(0x28) = 0x9047f8;  // (from the original)
                        u32 r0_20 = call_008273c8(r0_14, frame.at(0x28).addr(), r2_12, r3_12);  // (from the original)
                        r1_7 = guest::cpu()->r[1];
                        S0_8 = guest::cpu()->s[0];
                        S1_8 = guest::cpu()->s[1];
                        if (r0_20 != 0) {
                            *gptr<u32>(r1 + 0x1cu) = 0;  // (from the original)
                        }
                    }
                }
            }
        }
    }
    guest::cpu()->r[1] = r1_7;
    guest::cpu()->s[0] = S0_8;
    guest::cpu()->s[1] = S1_8;
    return 1u;
}

}  // namespace d_006483f4
GUEST_EXPORT_FRAMED(0x006483f4, d_006483f4::f_006483f4, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_0064bed4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0064bed4 {

inline constexpr guest::Function<0x00112714, u32(u32, u32, u32, u32)> call_00112714;  // (from the original)
inline constexpr guest::Function<0x00114375, u32(u32, u32, u32, u32)> call_00114374;  // (from the original)
inline constexpr guest::Function<0x005dc9d4, u32(u32, u32, u32, u32)> call_005dc9d4;  // (from the original)
inline constexpr guest::Function<0x00632acc, u32(u32, u32, u32, u32)> call_00632acc;  // (from the original)

u32 f_0064bed4(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    call_005dc9d4(r0 + 0x7cu, r1, guest::cpu()->r[2], r3);  // (from the original)
    u32 r0_2 = call_00632acc(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_2 = guest::cpu()->r[1];
    u32 r3_2 = guest::cpu()->r[3];
    if (r0_2 != 0) {
        r0_2 = call_00114374(r0_2 + 0x62u, r1, guest::cpu()->r[2], r3_2);  // (from the original)
        r1_2 = guest::cpu()->r[1];
        r3_2 = guest::cpu()->r[3];
    }
    u32 zf_1 = r3 == 0;
    if (!zf_1) {
        r0_2 = *gptr<u32>(r0 + 0xf0u);  // (from the original)
        zf_1 = r0_2 == 0;
    }
    if (!zf_1) {
        r0_2 = *gptr<u32>(r0_2 + 0x1028u);  // (from the original)
        if (r0_2 != 0) {
            frame.release();
            return call_00112714(r0_2, r1, guest::cpu()->r[2], r3_2);
        }
    }
    guest::cpu()->r[1] = r1_2;
    return r0_2;
}

}  // namespace d_0064bed4
GUEST_EXPORT(0x0064bed4, d_0064bed4::f_0064bed4);

// f_0064c130: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0064c130 {

struct __attribute__((packed)) Object_0064c130_0 {
    u8 unknown_0[0xf0];  // (not used here)
    u32 word_f0;
};
GUEST_OFFSET(Object_0064c130_0, word_f0, 0xf0);  // (from the original)

struct __attribute__((packed)) Local_0064c130_r1_1 {
    u8 byte_0;
    u8 unknown_1[0x570d];  // (not used here)
    u8 byte_570e;
};
GUEST_OFFSET(Local_0064c130_r1_1, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0064c130_r1_1, byte_570e, 0x570e);  // (from the original)

inline guest::global<u32, 0x00aaf14c> global_00aaf14c;  // (from the original)
inline constexpr guest::Function<0x00318944, u32(u32, u32, u32, u32)> call_00318944;  // (from the original)
inline constexpr guest::Function<0x0051ddb8, u32(u32, u32, u32, u32)> call_0051ddb8;  // (from the original)

u32 f_0064c130(gptr<Object_0064c130_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    gptr<Local_0064c130_r1_1> r1_1 = gptr<Local_0064c130_r1_1>(*global_00aaf14c);
    if (r1_1.addr() != 0) {
        r1_1 = gptr<Local_0064c130_r1_1>(u32(r1_1->byte_570e) << 0x19);  // (from the original)
        if (r1_1.addr() >> 0x1f) {  // (from the original)
            r1_1 = gptr<Local_0064c130_r1_1>(*gptr<u32>(arg0->word_f0 + 0x102cu));  // (from the original)
            if (r1_1.addr() != 0) {
                u32 ea_1 = r1_1.addr() + 0x1eu;  // (from the original)
                r1_1 = gptr<Local_0064c130_r1_1>(ea_1);
                r2 = u32(*gptr<u8>(ea_1)) | 0x10u;  // (from the original)
                r1_1->byte_0 = u8(r2);
            }
        }
    }
    u32 r0_1 = arg0->word_f0 + 0x1000u;  // (from the original)
    u32 r4_1 = *gptr<u32>(r0_1 + 0x2cu);  // (from the original)
    if (r4_1 == 0) {
        guest::cpu()->r[1] = r1_1.addr();
        return r0_1;
    }
    u32 r0_3 = call_00318944(r4_1 + 0x28u, r1_1.addr(), r2, r3);  // (from the original)
    if (r0_3 < 2u) {
        return r0_3;
    }
    frame.release();
    return call_0051ddb8(r4_1 + 0x28u, 0u, 0u, 0u);  // (from the original)
}

}  // namespace d_0064c130
GUEST_EXPORT(0x0064c130, d_0064c130::f_0064c130);

// f_0064c450: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0064c450 {

struct __attribute__((packed)) Local_0064c450_r0_10 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_0064c450_r0_10, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0064c450_r0_10, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0064c450_r0_10, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0064c450_r0_10, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_0064c450_r0_10, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_0064c450_r0_10, word_14, 0x14);  // (from the original)

struct __attribute__((packed)) Local_0064c450_r0_7 {
    u8 unknown_0[0x264];  // (not used here)
    u32 word_264;
    u32 word_268;
    u32 word_26c;
    u32 word_270;
    u32 word_274;
    u32 word_278;
};
GUEST_OFFSET(Local_0064c450_r0_7, word_264, 0x264);  // (from the original)
GUEST_OFFSET(Local_0064c450_r0_7, word_268, 0x268);  // (from the original)
GUEST_OFFSET(Local_0064c450_r0_7, word_26c, 0x26c);  // (from the original)
GUEST_OFFSET(Local_0064c450_r0_7, word_270, 0x270);  // (from the original)
GUEST_OFFSET(Local_0064c450_r0_7, word_274, 0x274);  // (from the original)
GUEST_OFFSET(Local_0064c450_r0_7, word_278, 0x278);  // (from the original)

inline constexpr guest::Function<0x001abcd4, u32(u32, u32, u32)> call_001abcd4;  // (from the original)
inline constexpr guest::Function<0x001da158, u32(u32, u32, u32)> call_001da158;  // (from the original)
inline constexpr guest::Function<0x002e6944, u32(u32, u32, u32)> call_002e6944;  // (from the original)
inline constexpr guest::Function<0x00317e2c, u32(u32, u32, u32)> call_00317e2c;  // (from the original)
inline constexpr guest::Function<0x0031e204, u32(u32, u32, u32)> call_0031e204;  // (from the original)
inline constexpr guest::Function<0x004edd6c, u32(u32, u32, u32)> call_004edd6c;  // (from the original)
inline constexpr guest::Function<0x004edd84, u32(u32, u32, u32)> call_004edd84;  // (from the original)
inline constexpr guest::Function<0x004ef50c, u32(u32, u32, u32)> call_004ef50c;  // (from the original)
inline constexpr guest::Function<0x0051e018, u32(u32, u32, u32, u32)> call_0051e018;  // (from the original)
inline constexpr guest::Function<0x006a8954, u32(u32, u32, u32)> call_006a8954;  // (from the original)
inline constexpr guest::Function<0x006acabc, u32(u32, u32, u32)> call_006acabc;  // (from the original)
inline constexpr guest::Function<0x006e480c, u32(u32, u32)> call_006e480c;  // (from the original)
inline constexpr guest::Function<0x006ee4b8, u32(u32, u32, u32)> call_006ee4b8;  // (from the original)

u32 f_0064c450(gptr<AcNpcNml> arg0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r5 = 0u;
    arg0->word_0 = 0x8f8484;  // (from the original)
    u32 r1_1 = *gptr<u32>(0x102cu + r0);  // (from the original)
    if (r1_1 != 0) {
        *gptr<u8>(r1_1 + 0x34u) = u8(r5);  // (from the original)
    }
    u32 r0_2 = call_0051e018(r0 + 0xfe0u, r1_1, 0x102cu, guest::cpu()->r[3]);  // (from the original)
    *gptr<u32>(r0_2 - 0x4d4u) = 0x8f8c1c;  // (from the original)
    u32 r0_4 = call_004edd6c(r0_2 - 0x150u, 0x8f8c1cu, guest::cpu()->r[2]);  // (from the original)
    *gptr<u32>(r0_4 - 0x384u) = 0x8ed6ac;  // (from the original)
    u32 r0_6 = call_0031e204(r0_4 - 0xd4u, 0x8ed6acu, guest::cpu()->r[2]);  // (from the original)
    gptr<Local_0064c450_r0_7> r0_7 = gptr<Local_0064c450_r0_7>(r0_6 - 0x2b0u);  // (from the original)
    u32 r4_1 = ~0u;
    r0_7->word_278 = r4_1;
    r0_7->word_274 = r5;
    r0_7->word_270 = r4_1;
    r0_7->word_26c = r5;
    r0_7->word_264 = r5;
    r0_7->word_268 = r4_1;
    u32 r0_9 = call_00317e2c(r0_7.addr() + 0x15cu, guest::cpu()->r[1], guest::cpu()->r[2]);  // (from the original)
    gptr<Local_0064c450_r0_10> r0_10 = gptr<Local_0064c450_r0_10>(r0_9 - 0x18u);  // (from the original)
    r0_10->word_14 = r4_1;
    r0_10->word_10 = r5;
    r0_10->word_c = r4_1;
    r0_10->word_8 = r5;
    r0_10->word_4 = r4_1;
    r0_10->word_0 = r5;
    u32 r0_11 = r0_10.addr() - 0x144u;  // (from the original)
    *gptr<u32>(r0_11) = 0x8eb174;  // (from the original)
    call_001abcd4(r0_11, 0x8eb174u, guest::cpu()->r[2]);  // (from the original)
    u32 r0_13 = call_004ef50c(r0_11 + 0xccu, guest::cpu()->r[1], guest::cpu()->r[2]);  // (from the original)
    u32 r0_15 = call_004edd84(r0_13 - 0x54u, guest::cpu()->r[1], guest::cpu()->r[2]);  // (from the original)
    *gptr<u32>(r0_15 - 0xb84u) = 0x8f779c;  // (from the original)
    u32 r0_17 = call_002e6944(r0_15 - 0xc8u, 0x8f779cu, guest::cpu()->r[2]);  // (from the original)
    u32 r0_19 = call_002e6944(r0_17 - 0x18u, guest::cpu()->r[1], guest::cpu()->r[2]);  // (from the original)
    u32 r0_21 = call_001da158(r0_19 - 0xf0u, guest::cpu()->r[1], guest::cpu()->r[2]);  // (from the original)
    u32 r0_23 = call_006acabc(r0_21 - 0xccu, guest::cpu()->r[1], guest::cpu()->r[2]);  // (from the original)
    u32 r0_25 = call_006a8954(r0_23 - 0x284u, guest::cpu()->r[1], guest::cpu()->r[2]);  // (from the original)
    u32 r0_27 = call_006ee4b8(r0_25 - 0x5ecu, guest::cpu()->r[1], guest::cpu()->r[2]);  // (from the original)
    u32 r1_10 = guest::cpu()->r[1];
    r0 = *gptr<u32>(r0_27 - 8u);
    u32 r2 = (r0_27 - 0x78u) + 0x70u;  // (from the original)
    if (r0 != 0) {
        do {
            r1_10 = *gptr<u32>(r0 + 4u);
            *gptr<u32>(r0) = r5;
            *gptr<u32>(r0 + 4u) = r5;
            r0 = r1_10;
            guest::preempt();
        } while (r1_10 != 0);
    }
    frame.release();
    return call_006e480c(r2 - 0x70u, r1_10);  // (from the original)
}

}  // namespace d_0064c450
GUEST_EXPORT(0x0064c450, d_0064c450::f_0064c450);

// f_0064d78c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0064d78c {

struct __attribute__((packed)) Object_0064d78c_0 {
    u8 unknown_0[0x1a9];  // (not used here)
    u8 byte_1a9;
    u8 unknown_1aa[0x436];  // (not used here)
    u16 half_5e0;
};
GUEST_OFFSET(Object_0064d78c_0, byte_1a9, 0x1a9);  // (from the original)
GUEST_OFFSET(Object_0064d78c_0, half_5e0, 0x5e0);  // (from the original)

struct __attribute__((packed)) Local_0064d78c_r1_5 {
    u8 unknown_0[0xb];  // (not used here)
    u8 byte_b;
};
GUEST_OFFSET(Local_0064d78c_r1_5, byte_b, 0xb);  // (from the original)

inline guest::global<u16, 0x00aaef30> global_00aaef30;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fe8a8, u32(u32, u32, u32, u32)> call_002fe8a8;  // (from the original)
inline constexpr guest::Function<0x003117bc, u32(u32, u32, u32)> call_003117bc;  // (from the original)
inline constexpr guest::Function<0x005361a8, u32(u32, u32, u32)> call_005361a8;  // (from the original)
inline constexpr guest::Function<0x0062f03c, u32(u32, u32, u32)> call_0062f03c;  // (from the original)
inline constexpr guest::Function<0x0070e594, u32(u32, u32, u32)> call_0070e594;  // (from the original)
inline constexpr guest::Function<0x0071a7ec, u32(u32, u32, u32)> call_0071a7ec;  // (from the original)
inline constexpr guest::Function<0x0071a820, u32(u32, u32, u32)> call_0071a820;  // (from the original)
inline constexpr guest::Function<0x0076c440, u32(u32, u32, u32)> call_0076c440;  // (from the original)

void f_0064d78c(gptr<Object_0064d78c_0> arg0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r0_5 = 0;
    if (arg0->byte_1a9 != 0) {
        u32 r0_1 = arg0->half_5e0;
        if (r0_1 == 0) {
            goto L_64d7d4;
        }
        r1 = r0 + 0x5e0u;  // (from the original)
        if (r0_1 >= 1u) {
            arg0->half_5e0 = u16(r0_1 - 1u);
        } else {
            arg0->half_5e0 = 0;
        }
    }
    guest::cpu()->r[1] = r1;
    return;
L_64d7d4:;
    *gptr<u16>(0x5e0u + r0) = 0x384;  // (from the original)
    u32 r0_2 = *gptr<u8>(r0 + 0x1acu);  // (from the original)
    u32 r0_3 = call_002fe8a8(r0_2, 0x384u, r2, guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    if (r0_3 == 0 || u32(*gptr<u8>(0x570bu + r0_3)) & 2u) {  // (from the original)
        return;
    }
    if ((u32(*gptr<u8>(r0 + 0x172u)) >> 1u & 1u) == 0) {  // (from the original)
        r0_5 = call_0070e594(r0 + 0x1b4u, r1, r2_1);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
    } else {
        r0_5 = 0x95bfdcu;  // (from the original)
    }
    u32 r0_6 = call_003117bc(r0_5, r1, r2_1);
    r1 = guest::cpu()->r[1];
    u32 r2_2 = guest::cpu()->r[2];
    if (r0_6 == 8u) {
        return;
    }
    u32 r0_8 = call_0071a7ec(r0 + 0x3b4u, r1, r2_2);  // (from the original)
    call_002fc934(frame.at(0).addr(), r0_8, guest::cpu()->r[2]);
    u32 r0_11 = call_005361a8(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2]);
    u32 r1_2 = guest::cpu()->r[1];
    u32 r2_5 = guest::cpu()->r[2];
    if (r0_11 != 0 && u32(*gptr<u8>(r0_11 + 0x1cu)) & 0x40u) {  // (from the original)
        return;
    }
    u32 r0_13 = call_0076c440(frame.at(0).addr(), r1_2, r2_5);
    r1_2 = guest::cpu()->r[1];
    u32 r2_6 = guest::cpu()->r[2];
    if (r0_13 == 0) {
        goto L_64d890;
    }
    return;
L_64d890:;
    u32 r0_15 = call_0071a820(r0 + 0x3b4u, r1_2, r2_6);  // (from the original)
    call_002fc934(frame.at(4).addr(), r0_15, guest::cpu()->r[2]);
    u32 r0_18 = call_005361a8(frame.at(4).addr(), guest::cpu()->r[1], guest::cpu()->r[2]);
    r1 = guest::cpu()->r[1];
    u32 r2_9 = guest::cpu()->r[2];
    if (r0_18 != 0) {
        r0_18 = u32(*gptr<u8>(r0_18 + 0x1cu)) << 0x19;  // (from the original)
        if (r0_18 >> 0x1f) {  // (from the original)
            return;
        }
    }
    u32 r0_19 = call_0062f03c(r0_18, r1, r2_9);
    r1 = guest::cpu()->r[1];
    if (r0_19 != 3u && r0_19 != 4u) {
        u32 r0_20 = call_0062f03c(r0_19, r1, guest::cpu()->r[2]);
        r1 = guest::cpu()->r[1];
        if (r0_20 != 5u && r0_20 != 6u) {
            u32 r0_21 = call_002fb378(r0_20, r1, guest::cpu()->r[2]);
            r1 = guest::cpu()->r[1];
            u32 r0_22 = u32(*gptr<s8>(r0_21 + 7u)) - 0xau;  // (from the original)
            if (r0_22 < 7u) {
                u32 r0_23 = call_002f74c8(r0_22, r1, guest::cpu()->r[2]);
                u32 r0_24 = call_002f74e0(0x40000u, r0_23, guest::cpu()->r[2]);  // (from the original)
                r1 = guest::cpu()->r[1];
                if (r0_24 == 0) {
                    u32 r0_25 = *gptr<s8>(r0_21 + 4u);
                    if (r0_25 != 7u) {
                        if (r0_25 == 8u) {
                            goto L_64d95c;
                        }
                        if (r0_25 != 9u) {
                            return;
                        }
                    } else {
                        if (*gptr<s8>(r0_21 + 5u) < 0x10) {  // (from the original)
                            return;
                        }
                        goto L_64d95c;
                    }
                    if (*gptr<s8>(r0_21 + 5u) > 0xf) {  // (from the original)
                        return;
                    }
                }
L_64d95c:;
                u32 r1_4 = *global_00aaef30;
                if (r1_4 == 0) {
                    goto L_64d9a8;
                }
                if (r1_4 < 0x384u) {  // (from the original)
                    *global_00aaef30 = 0;
                    goto L_64d9a8;
                }
                u32 res_2 = r1_4 - 0x384u & 0xffffu;  // (from the original)
                r1 = res_2;
                *global_00aaef30 = u16(r1);
                if (res_2 == 0) {
                    goto L_64d9a8;
                }
            }
        }
    }
    guest::cpu()->r[1] = r1;
    return;
L_64d9a8:;
    gptr<Local_0064d78c_r1_5> r1_5 = gptr<Local_0064d78c_r1_5>(r0_3 + 0x5700u);  // (from the original)
    r1_5->byte_b = u8(u32(r1_5->byte_b) | 2u);
    r1 = 0x6978u;  // (from the original)
    *global_00aaef30 = u16(r1);
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0064d78c
GUEST_EXPORT_FRAMED(0x0064d78c, d_0064d78c::f_0064d78c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0064dd60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0064dd60 {

inline guest::global<u32, 0x0095c6d0> global_0095c6d0;  // (from the original)

u32 f_0064dd60() {
    u32 r0_1 = *global_0095c6d0;
    if (r0_1 != 0) {
        r0_1 = *gptr<u8>(r0_1 + 0x1du);  // (from the original)
    }
    return r0_1;
}

}  // namespace d_0064dd60
GUEST_EXPORT(0x0064dd60, d_0064dd60::f_0064dd60);

// f_0064dd78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0064dd78 {

struct __attribute__((packed)) Object_0064dd78_0 {
    u8 unknown_0[0x170];  // (not used here)
    u8 byte_170;
    u8 byte_171;
    u8 unknown_172[0x7];  // (not used here)
    u8 byte_179;
};
GUEST_OFFSET(Object_0064dd78_0, byte_170, 0x170);  // (from the original)
GUEST_OFFSET(Object_0064dd78_0, byte_171, 0x171);  // (from the original)
GUEST_OFFSET(Object_0064dd78_0, byte_179, 0x179);  // (from the original)

struct __attribute__((packed)) Local_0064dd78_r4_1 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
};
GUEST_OFFSET(Local_0064dd78_r4_1, byte_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x0058a1d8, u32(u32, u32)> call_0058a1d8;  // (from the original)
inline constexpr guest::Function<0x0058a8e0, u32(u32, u32)> call_0058a8e0;  // (from the original)
inline constexpr guest::Function<0x0058c19c, u32(u32, u32, u32, u32)> call_0058c19c;  // (from the original)

u32 f_0064dd78(gptr<Object_0064dd78_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    gptr<Local_0064dd78_r4_1> r4_1 = gptr<Local_0064dd78_r4_1>(r0 + 0x171u);  // (from the original)
    u32 r0_1 = u32(arg0->byte_171) >> 5u & 1u;
    if (r0_1 != 0) {
        if (r1 != 0) {
            u32 r1_1 = u32(arg0->byte_179) | 4u;
            arg0->byte_179 = u8(r1_1);
            u32 r0_2 = call_0058c19c(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
            call_0058a8e0(r0_2, 5u);
        }
        r0_1 = r4_1->byte_8;
        r1 = r0_1 >> 3u & 1u;
        if (r1 == 0) {
            r0_3 = r0_1 | 8u;
            r4_1->byte_8 = u8(r0_3);
        } else {
            goto L_64dde4;
        }
        r0_4 = call_0058c19c(r0_3, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_2 = guest::cpu()->r[1];
        r0_1 = call_0058a1d8(r0_4, r1_2);
        r1 = guest::cpu()->r[1];
L_64dde4:;
        arg0->byte_170 = 1;
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_0064dd78
GUEST_EXPORT_FRAMED(0x0064dd78, d_0064dd78::f_0064dd78, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0064de10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0064de10 {

struct __attribute__((packed)) Object_0064de10_0 {
    u8 unknown_0[0x174];  // (not used here)
    u8 byte_174;
};
GUEST_OFFSET(Object_0064de10_0, byte_174, 0x174);  // (from the original)

inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x002fcb84, u32(u32, u32, u32, u32)> call_002fcb84;  // (from the original)
inline constexpr guest::Function<0x00596ab0, u32(u32, u32, u32, u32)> call_00596ab0;  // (from the original)
inline constexpr guest::Function<0x00650140, u32(u32, u32, u32, u32)> call_00650140;  // (from the original)
inline constexpr guest::Function<0x0068dc14, u32(u32, u32, u32, u32)> call_0068dc14;  // (from the original)
inline constexpr guest::Function<0x006ba118, u32(u32, u32, u32, u32)> call_006ba118;  // (from the original)

void f_0064de10(gptr<Object_0064de10_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r2_5 = 0;
    u32 r4_1 = *frame.at<u32>(0x20);  // (from the original)
    if ((u32(arg0->byte_174) & 1u) == 0) {
        goto L_64de54;
    }
    call_0068dc14(r0, 0x1000555u, 0u, r3);  // (from the original)
    r1 = guest::cpu()->r[1];
    return;
L_64de54:;
    u32 r0_1 = call_00650140(r1, r2, r3, r3);
    r1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        call_002fc934(frame.at(0).addr(), r0_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        call_00596ab0(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r0_4 = call_002fcb84(r0_1, 0xccu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        u32 r3_4 = guest::cpu()->r[3];
        if (r0_4 == 0) {
            u32 r0_5 = call_002fcb84(r0_1, 0xc9u, guest::cpu()->r[2], r3_4);  // (from the original)
            r2_5 = guest::cpu()->r[2];
            r3_4 = guest::cpu()->r[3];
            if (r0_5 == 0) {
                goto L_64decc;
            }
        }
        call_0068dc14(r0, 0x1000616u, 0u, r3_4);  // (from the original)
        r1 = guest::cpu()->r[1];
        return;
L_64decc:;
        if (r4_1 != 0) {
            call_0068dc14(r0, 0x1000654u, 0u, r3_4);  // (from the original)
            r1 = guest::cpu()->r[1];
            return;
        }
        call_002fc934(frame.at(4).addr(), frame.at(0).addr(), r2_5, r3_4);
        call_006ba118(frame.at(4).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r0_9 = call_002fcb34(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r0_11 = call_002fcb34(frame.at(4).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r3_8 = guest::cpu()->r[3];
        if (r0_9 == 0x3fu || r0_9 == 0x3eu || r0_11 == 0x40u) {  // (from the original)
            goto L_64df60;
        }
        call_0068dc14(r0, 0x1000555u, 0u, r3_8);  // (from the original)
        r1 = guest::cpu()->r[1];
        return;
L_64df60:;
        call_0068dc14(r0, 0x1000616u, 0u, r3_8);  // (from the original)
        r1 = guest::cpu()->r[1];
        return;
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0064de10
GUEST_EXPORT_FRAMED(0x0064de10, d_0064de10::f_0064de10, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0064ee94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0064ee94 {

inline constexpr guest::Function<0x005d43f4, u32(u32, u32, u32, u32)> call_005d43f4;  // (from the original)
inline constexpr guest::Function<0x006c5c60, u32(u32, u32, u32, u32)> call_006c5c60;  // (from the original)

u32 f_0064ee94(u32 r0, u32 r1, u32 r2_unused, u32 r3, float S0) {
    u32 r0_1 = call_005d43f4(r0, r1, guest::cpu()->r[2], r3);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r3_1 = guest::cpu()->r[3];
    if (r3 != 0) {
        r0_1 = call_006c5c60(r0, 0u, guest::cpu()->r[2], r3_1);
        r1_1 = guest::cpu()->r[1];
        float S0_2 = guest::cpu()->s[0];
        *gptr<u32>(r0 + 4u) = std::bit_cast<u32>(S0_2);
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0064ee94
GUEST_EXPORT_FRAMED(0x0064ee94, d_0064ee94::f_0064ee94, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0064f018: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0064f018 {

inline constexpr guest::Function<0x001b76ec, u32(u32, u32, u32, u32)> call_001b76ec;  // (from the original)
inline constexpr guest::Function<0x002bf814, u32(u32, u32, u32, u32)> call_002bf814;  // (from the original)
inline constexpr guest::Function<0x002fe8a8, u32(u32, u32, u32, u32)> call_002fe8a8;  // (from the original)
inline constexpr guest::Function<0x006e0b2c, u32(u32, u32, u32, u32)> call_006e0b2c;  // (from the original)

void f_0064f018(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r0_1 = call_002fe8a8(r1, r1, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    u32 zf_1 = r0_1 == 0;
    if (!zf_1) {
        u32 res_1 = r0_1 + 0x6bd0u;  // (from the original)
        zf_1 = res_1 == 0;
        r4 = res_1;
    }
    if (!zf_1) {
        u32 r0_2 = call_006e0b2c(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        if (r0_2 != 0) {
            r0_2 = call_001b76ec(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        }
        frame.release();
        call_002bf814(r4, r0, 0u, r0_2 ^ 1u);
        return;
    }
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_0064f018
GUEST_EXPORT(0x0064f018, d_0064f018::f_0064f018);

// f_0064f068: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0064f068 {

inline guest::global<u32, 0x0095c6d0> global_0095c6d0;  // (from the original)
inline constexpr guest::Function<0x0076e6cc, u32(u32, u32)> call_0076e6cc;  // (from the original)

u32 f_0064f068(u32 r0, u32 r1) {
    u32 r4_1 = *global_0095c6d0;
    if (r4_1 != 0) {
        u32 r0_1 = call_0076e6cc(r4_1, r1);
        if (r0_1 == r0) {
            if (r1 != 0x40u && u32(*gptr<s8>(r4_1 + 0x1cu)) != r1) {  // (from the original)
                return 0u;
            }
            return 1u;
        }
    }
    return 0u;
}

}  // namespace d_0064f068
GUEST_EXPORT_FRAMED(0x0064f068, d_0064f068::f_0064f068, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0064f0bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0064f0bc {

inline constexpr guest::Function<0x0062f03c, u32(u32, u32, u32, u32)> call_0062f03c;  // (from the original)

u32 f_0064f0bc(u32 r0) {
    u32 r0_1 = call_0062f03c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 == 1u) {
        return r0_1;
    }
    return r0_1 == 0 ? 1u : 0u;
}

}  // namespace d_0064f0bc
GUEST_EXPORT_FRAMED(0x0064f0bc, d_0064f0bc::f_0064f0bc, 0x4010);  // pushes {r4, lr} first, as the original

// f_0064f0dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0064f0dc {

inline constexpr guest::Function<0x0062f03c, u32(u32, u32, u32, u32)> call_0062f03c;  // (from the original)

u32 f_0064f0dc(u32 r0) {
    u32 r0_1 = call_0062f03c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return (r0_1 == 3u || r0_1 == 4u) ? 1u : 0u;
}

}  // namespace d_0064f0dc
GUEST_EXPORT_FRAMED(0x0064f0dc, d_0064f0dc::f_0064f0dc, 0x4010);  // pushes {r4, lr} first, as the original

// f_0064f298: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0064f298 {

inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> call_002feb00;  // (from the original)
inline constexpr guest::Function<0x0059a9ac, u32(u32, u32, u32, u32)> call_0059a9ac;  // (from the original)
inline constexpr guest::Function<0x006a5e34, u32(u32)> call_006a5e34;  // (from the original)
inline constexpr guest::Function<0x006a5f0c, u32(u32, u32, u32)> call_006a5f0c;  // (from the original)
inline constexpr guest::Function<0x006c602c, u32(u32, u32, u32)> call_006c602c;  // (from the original)

void f_0064f298(u32 r0, u32 r1, u32 r2, u32 r3, float S0) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r4_1 = *frame.at<u32>(0x18);  // (from the original)
    u32 r0_1 = call_006a5e34(r0);
    float S0_1 = guest::cpu()->s[0];
    if (r0_1 != 0) {
        u32 r0_2 = call_002feb00(r0_1, r2, r3, r4_1);
        S0_1 = guest::cpu()->s[0];
        if (r0_2 != 0) {
            *frame.at<u32>(0) = r4_1;
            call_0059a9ac(r1, r0_2, r2, r3);
            return;
        }
    }
    guest::cpu()->s[0] = S0_1;
    call_006a5f0c(r1, r2, r3);
    call_006c602c(r2, r3, 0u);
    float S0_4 = guest::cpu()->s[0];
    *gptr<u32>(r1 + 4u) = std::bit_cast<u32>(S0_4);
}

}  // namespace d_0064f298
GUEST_EXPORT_FRAMED(0x0064f298, d_0064f298::f_0064f298, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0064f314: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0064f314 {

struct __attribute__((packed)) Object_0064f314_0 {
    u8 unknown_0[0x1ac];  // (not used here)
    u8 byte_1ac;
};
GUEST_OFFSET(Object_0064f314_0, byte_1ac, 0x1ac);  // (from the original)

inline constexpr guest::Function<0x001b76ec, u32(u32, u32, u32, u32)> call_001b76ec;  // (from the original)
inline constexpr guest::Function<0x002bf814, u32(u32, u32, u32, u32)> call_002bf814;  // (from the original)
inline constexpr guest::Function<0x002fe8a8, u32(u32, u32, u32, u32)> call_002fe8a8;  // (from the original)
inline constexpr guest::Function<0x006e0b2c, u32(u32, u32, u32, u32)> call_006e0b2c;  // (from the original)

u32 f_0064f314(gptr<Object_0064f314_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r5 = guest::cpu()->r[5];
    u32 r0_1 = arg0->byte_1ac;
    u32 r0_2 = call_002fe8a8(r0_1, r1, r2, r3);
    u32 zf_1 = r0_2 == 0;
    if (!zf_1) {
        u32 res_1 = r0_2 + 0x6bd0u;  // (from the original)
        zf_1 = res_1 == 0;
        r5 = res_1;
    }
    u32 r1_1 = 0u;
    if (!zf_1) {
        u32 r0_3 = call_006e0b2c(r0_2, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        if (r0_3 != 0) {
            r0_3 = call_001b76ec(r1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        }
        u32 r0_4 = call_002bf814(r5, r1, 0u, r0_3 ^ 1u);
        r1_1 = r0_4;
    }
    guest::cpu()->r[1] = r1_1;
    return r1_1;
}

}  // namespace d_0064f314
GUEST_EXPORT_FRAMED(0x0064f314, d_0064f314::f_0064f314, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0064f3b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0064f3b4 {

inline constexpr guest::Function<0x00584134, u32(u32)> call_00584134;  // (from the original)
inline constexpr guest::Function<0x0058c514, u32(u32, u32)> call_0058c514;  // (from the original)

u32 f_0064f3b4(gptr<SlotObject> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r1_1 = u32(arg0->flags_171) >> 5u & 1u;
    if (r1_1 != 0) {
        u32 r6_1 = r0 + 0x17du;  // (from the original)
        u32 r5_1 = r1 & 7u;
        if (r1 < 0x32u) {  // (from the original)
            r0 = lsr_r(u32(*gptr<u8>(r6_1 + (r1 >> 3))), r5_1 & 0xff);  // (from the original)
            if ((r0 & 1u) != 0) {
                guest::cpu()->r[1] = r1_1;
                return r0;
            }
        }
        u32 r0_1 = call_00584134(r0);
        r0 = call_0058c514(r0_1, r1);
        r1_1 = guest::cpu()->r[1];
        if (r1 < 0x32u) {  // (from the original)
            r0 = r6_1 + (r1 >> 3);
            r1_1 = u32(*gptr<u8>(r0)) | lsl_r(1u, r5_1 & 0xff);  // (from the original)
            *gptr<u8>(r0) = u8(r1_1);
        }
    }
    guest::cpu()->r[1] = r1_1;
    return r0;
}

}  // namespace d_0064f3b4
GUEST_EXPORT_FRAMED(0x0064f3b4, d_0064f3b4::f_0064f3b4, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original
