// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "graphics/hemisphere_light.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_006e140c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e140c {

struct __attribute__((packed)) Local_006e140c_ea_1 {
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
};
GUEST_OFFSET(Local_006e140c_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_006e140c_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_006e140c_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_006e140c_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_006e140c_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_006e140c_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_006e140c_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_006e140c_ea_1, word_1c, 0x1c);
GUEST_OFFSET(Local_006e140c_ea_1, word_20, 0x20);
GUEST_OFFSET(Local_006e140c_ea_1, word_24, 0x24);
GUEST_OFFSET(Local_006e140c_ea_1, word_28, 0x28);
GUEST_OFFSET(Local_006e140c_ea_1, word_2c, 0x2c);
GUEST_OFFSET(Local_006e140c_ea_1, word_30, 0x30);

struct __attribute__((packed)) Local_006e140c_ea_6 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006e140c_ea_6, word_0, 0x0);
GUEST_OFFSET(Local_006e140c_ea_6, word_4, 0x4);

struct __attribute__((packed)) Local_006e140c_ea_7 {
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
GUEST_OFFSET(Local_006e140c_ea_7, word_0, 0x0);
GUEST_OFFSET(Local_006e140c_ea_7, word_4, 0x4);
GUEST_OFFSET(Local_006e140c_ea_7, word_8, 0x8);
GUEST_OFFSET(Local_006e140c_ea_7, word_c, 0xc);
GUEST_OFFSET(Local_006e140c_ea_7, word_10, 0x10);
GUEST_OFFSET(Local_006e140c_ea_7, word_14, 0x14);
GUEST_OFFSET(Local_006e140c_ea_7, word_18, 0x18);
GUEST_OFFSET(Local_006e140c_ea_7, word_1c, 0x1c);
GUEST_OFFSET(Local_006e140c_ea_7, word_20, 0x20);

struct __attribute__((packed)) Local_006e140c_r4_3 {
    u16 half_0;
    u16 half_2;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_006e140c_r4_3, half_0, 0x0);
GUEST_OFFSET(Local_006e140c_r4_3, half_2, 0x2);
GUEST_OFFSET(Local_006e140c_r4_3, word_4, 0x4);
GUEST_OFFSET(Local_006e140c_r4_3, word_8, 0x8);
GUEST_OFFSET(Local_006e140c_r4_3, word_c, 0xc);
GUEST_OFFSET(Local_006e140c_r4_3, word_10, 0x10);
GUEST_OFFSET(Local_006e140c_r4_3, word_14, 0x14);

inline constexpr guest::Function<0x0013fac4, u32(u32, u32, u32, u32)> call_0013fac4;
inline constexpr guest::Function<0x00160c10, u32(u32, u32)> call_00160c10;
inline constexpr guest::Function<0x00160c68, u32(u32, u32, u32, u32)> call_00160c68;
inline constexpr guest::Function<0x002f9e1c, u32(u32, u32, u32, u32)> call_002f9e1c;

struct __attribute__((packed)) Frame_006e140c {
    u8 unknown_0[0x4];  // (not read or written by name)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u8 unknown_14[0x4];  // (not read or written by name)
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u8 unknown_24[0x4];  // (not read or written by name)
    u32 word_28;
    u8 unknown_2c[0x4];  // (not read or written by name)
    u32 word_30;
    u8 unknown_34[0x4];  // (not read or written by name)
    u32 word_38;
    u8 unknown_3c[0xc];  // (not read or written by name)
    u32 word_48;
    u32 word_4c;
    u8 unknown_50[0x4];  // (not read or written by name)
    u32 word_54;
    u8 unknown_58[0x28];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006e140c, word_4, 0x4);
GUEST_OFFSET(Frame_006e140c, word_8, 0x8);
GUEST_OFFSET(Frame_006e140c, word_c, 0xc);
GUEST_OFFSET(Frame_006e140c, word_10, 0x10);
GUEST_OFFSET(Frame_006e140c, word_18, 0x18);
GUEST_OFFSET(Frame_006e140c, word_1c, 0x1c);
GUEST_OFFSET(Frame_006e140c, word_20, 0x20);
GUEST_OFFSET(Frame_006e140c, word_28, 0x28);
GUEST_OFFSET(Frame_006e140c, word_30, 0x30);
GUEST_OFFSET(Frame_006e140c, word_38, 0x38);
GUEST_OFFSET(Frame_006e140c, word_48, 0x48);
GUEST_OFFSET(Frame_006e140c, word_4c, 0x4c);
GUEST_OFFSET(Frame_006e140c, word_54, 0x54);
GUEST_SIZE(Frame_006e140c, 0x80);

u32 f_006e140c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_006e140c> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r14 = guest::cpu()->r[14];
    u32 res_1 = 0;
    gptr<Local_006e140c_ea_6> ea_6 = gptr<Local_006e140c_ea_6>(0u);
    gptr<Local_006e140c_ea_1> ea_1 = gptr<Local_006e140c_ea_1>(frame.at(0x4c).addr());  // (from the original)
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
    ea_1->word_30 = r14;
    u32 r5_1 = r3;
    r10 = *frame.at<u32>(0x80);  // (from the original)
    u32 r0_1 = *gptr<u32>(frame->word_4c + 0x288u);  // (from the original)
    frame->word_10 = r0_1;
    u32 r1_1 = r0_1 + (r0_1 << 1);
    frame->word_4 = r1_1;
    u32 r0_3 = call_00160c68(r1_1 * r0_1, r1_1, r2, r3);
    u32 r1_2 = guest::cpu()->r[1];
    frame->word_18 = r0_3;
    if (r0_3 != 0) {
        u32 r6_1 = frame->word_18;
        u32 r4_1 = r5_1 * frame->word_54;
        call_0013fac4(r6_1, r4_1 * frame->word_4, 0xffu, guest::cpu()->r[3]);  // (from the original)
        r3 = guest::cpu()->r[3];
        frame->word_28 = 0;
        u32 r1_4 = frame->word_54;
        r8 = 0u;
        frame->word_c = r4_1;
        u32 r0_4 = (r5_1 + r1) * r1_4;
        u32 r1_5 = frame->word_4;
        frame->word_8 = r0_4;
        r11 = r1_5 * r4_1 + r6_1;
        if (s32(r0_4) > s32(r4_1)) {
            u32 r1_6 = r4_1 + (r4_1 << 1);
            frame->word_20 = r1_6;
            u32 r1_7 = r0_4 + (r0_4 << 1) - r1_6 + 2u;
            frame->word_30 = r1_7;
            u32 r0_5 = u64(s64(s32(0x55555556u)) * s32(r1_7)) >> 0x20;  // (from the original)
            r9 = frame->word_54 - 1u;
            frame->word_38 = r0_5 - u32(s32(r0_5) >> 0x1f);  // (from the original)
            do {
                u32 r4_2 = frame->word_20;
                call_0013fac4(r11, r4_2, 0xffu, r3);  // (from the original)
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                frame->word_1c = r4_2;
                u32 r0_6 = frame->word_30;
                r5 = 0u;
                frame->word_48 = r0_6;
                if (s32(r0_6) > 2) {
                    r6 = frame->word_38;
                    r4 = r11 + r4_2 + 2u;
                    r7 = 0u;
                    do {
                        u32 r0_7 = ~u32(*gptr<u8>(gptr<u32>(r10)[r8] + r5));
                        *gptr<u8>(r4 - 1u) = u8(r0_7);
                        *gptr<u8>(r4 - 2u) = u8(r0_7);
                        *gptr<u8>(r4) = u8(r0_7);
                        call_002f9e1c(r7, frame->word_54, r2, r3);
                        r2 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
                        if (guest::cpu()->r[1] == r9) {
                            r5 += 1u;
                        }
                        res_1 = r6 - 1u;
                        r6 = res_1;
                        r4 += 3u;
                        r7 += 1u;
                        guest::preempt();
                    } while (res_1 != 0);
                    u32 r0_8 = u64(s64(s32(0x55555556u)) * s32(frame->word_48)) >> 0x20;  // (from the original)
                    u32 r0_9 = r0_8 - u32(s32(r0_8) >> 0x1f);  // (from the original)
                    r4_2 = r0_9 + (r0_9 << 1) + frame->word_1c;
                }
                call_0013fac4(r11 + r4_2, frame->word_4 - r4_2, 0xffu, r3);  // (from the original)
                r11 += frame->word_4;
                call_002f9e1c(frame->word_28, frame->word_54, guest::cpu()->r[2], guest::cpu()->r[3]);
                r3 = guest::cpu()->r[3];
                if (guest::cpu()->r[1] == r9) {
                    r8 += 1u;
                }
                frame->word_c = frame->word_c + 1u;
                frame->word_28 = frame->word_28 + 1u;
                ea_6 = gptr<Local_006e140c_ea_6>(frame.at(8).addr());
                guest::preempt();
            } while (s32(ea_6->word_4) < s32(ea_6->word_0));
        }
        call_0013fac4(r11, (frame->word_10 - frame->word_c) * frame->word_4, 0xffu, r3);  // (from the original)
        u32 r0_14 = *frame.at<u32>(0x84);  // (from the original)
        u32 r3_3 = u64(s64(s32(0x55555556u)) * s32(frame->word_4)) >> 0x20;  // (from the original)
        u32 r2_2 = frame->word_10;
        gptr<Local_006e140c_r4_3> r4_3 = gptr<Local_006e140c_r4_3>(frame->word_4c + (r0_14 + (r0_14 << 1) << 3));
        r1_2 = r4_3->word_4;
        r4_3->word_10 = 0;
        r4_3->word_c = 0;
        r4_3->half_2 = u16(r2_2);
        r4_3->half_0 = u16(r3_3 - u32(s32(r3_3) >> 0x1f));  // (from the original)
        r4_3->word_14 = 0;
        r4_3->word_8 = 0;
        if (r1_2 != 0) {
            call_00160c10(r1_2, r1_2);
            r1_2 = guest::cpu()->r[1];
        }
        r4_3->word_4 = frame->word_18;
        r0_3 = 1u;
    }
    gptr<Local_006e140c_ea_7> ea_7 = gptr<Local_006e140c_ea_7>(frame.at(0x5c).addr());  // (from the original)
    u32 r4_4 = ea_7->word_0;
    u32 r5_2 = ea_7->word_4;
    u32 r6_2 = ea_7->word_8;
    u32 r7_1 = ea_7->word_c;
    u32 r8_1 = ea_7->word_10;
    u32 r9_1 = ea_7->word_14;
    u32 r10_1 = ea_7->word_18;
    u32 r11_1 = ea_7->word_1c;
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[4] = r4_4;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
    guest::cpu()->r[10] = r10_1;
    guest::cpu()->r[11] = r11_1;
    return r0_3;
}

}  // namespace d_006e140c
GUEST_EXPORT(0x006e140c, d_006e140c::f_006e140c);

// f_006e1d28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e1d28 {

inline constexpr guest::Function<0x00100ef9, u32(u32, u32, u32)> call_00100ef8;
inline constexpr guest::Function<0x001019c5, u32(u32, u32)> call_001019c4;
inline constexpr guest::Function<0x0015f67c, u32(u32, u32, u32, u32)> call_0015f67c;

void f_006e1d28(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = call_0015f67c(r0, r1, r2, guest::cpu()->r[3]);
    if (r0_1 == 1u) {
        call_00100ef8(r0 + 0x180u, 0x6e1dfcu, 0x6e1e00u);  // (from the original)
    } else if (r0_1 == 2u) {
        call_00100ef8(r0 + 0x180u, 0x6e1dfcu, 0x6e1e34u);  // (from the original)
    } else if (r0_1 == 7u) {
        call_00100ef8(r0 + 0x180u, 0x6e1dfcu, 0x6e1e1cu);  // (from the original)
    } else if (r0_1 == 8u) {
        call_00100ef8(r0 + 0x180u, 0x6e1dfcu, 0x8aec1cu);  // (from the original)
    } else {
        call_00100ef8(r0 + 0x180u, 0x6e1dfcu, 0x6e1de8u);  // (from the original)
    }
    frame.release();
    call_001019c4(r0 + 0x180u, r1);
    return;  // (from the original)
}

}  // namespace d_006e1d28
GUEST_EXPORT(0x006e1d28, d_006e1d28::f_006e1d28);

// f_006e23dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e23dc {

struct __attribute__((packed)) Object_006e23dc_0 {
    u8 unknown_0[0x2760];  // (not used here)
    u32 word_2760;
    u32 word_2764;
    u8 unknown_2768[0x5c];  // (not used here)
    u8 byte_27c4;
};
GUEST_OFFSET(Object_006e23dc_0, word_2760, 0x2760);
GUEST_OFFSET(Object_006e23dc_0, word_2764, 0x2764);
GUEST_OFFSET(Object_006e23dc_0, byte_27c4, 0x27c4);

struct __attribute__((packed)) Local_006e23dc_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006e23dc_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_006e23dc_ea_2, word_4, 0x4);

inline guest::global<u32, 0x0085e1ec> global_0085e1ec;
inline guest::global<u32, 0x0085e1f0> global_0085e1f0;
inline constexpr guest::Function<0x00617110, u32(u32, u32, u32, u32)> call_00617110;

u32 f_006e23dc(gptr<Object_006e23dc_0> arg0, u32 r1, u32 r2, u32 r3) {
    if (arg0->word_2760 != 0) {
        return 0u;
    }
    u32 r0_1 = arg0->word_2764;
    if ((r0_1 & 1u) != 0 && r0_1 != 0) {
        return 0u;
    }
    u32 r0_2 = call_00617110(r0_1, r1, r2, r3);
    if (r0_2 == 0) {
        return r0_2;
    }
    *gptr<u8>(arg0.addr() + 0x27c3u) = 0;  // (from the original)
    u32 r1_2 = *global_0085e1ec;
    u32 r2_1 = *global_0085e1f0;
    gptr<Local_006e23dc_ea_2> ea_2 = gptr<Local_006e23dc_ea_2>(arg0.addr() + 0x2760u);  // (from the original)
    ea_2->word_0 = r1_2;
    ea_2->word_4 = r2_1;
    *gptr<u32>(arg0.addr() + 0x27a8u) = 0;  // (from the original)
    *gptr<u8>(0x27c6u + arg0.addr()) = 0;  // (from the original)
    arg0->byte_27c4 = 1;
    guest::cpu()->r[1] = r1_2;
    return 1u;
}

}  // namespace d_006e23dc
GUEST_EXPORT_FRAMED(0x006e23dc, d_006e23dc::f_006e23dc, 0x4010);  // pushes {r4, lr} first, as the original

// f_006e247c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e247c {

inline guest::global<u8, 0x00951694> global_00951694;
inline constexpr guest::Function<0x005c394c, u32(u32, u32, u32, u32)> call_005c394c;

void f_006e247c() {
    u32 r1_1 = *global_00951694;
    call_005c394c(0u, r1_1, 0u, guest::cpu()->r[3]);
    *global_00951694 = 8;
}

}  // namespace d_006e247c
GUEST_EXPORT_FRAMED(0x006e247c, d_006e247c::f_006e247c, 0x4010);  // pushes {r4, lr} first, as the original

// f_006e2534: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e2534 {

struct __attribute__((packed)) Object_006e2534_0 {
    u8 unknown_0[0x2760];  // (not used here)
    u32 word_2760;
    u32 word_2764;
    u8 unknown_2768[0x40];  // (not used here)
    u32 word_27a8;
    u8 unknown_27ac[0x1a];  // (not used here)
    u8 byte_27c6;
};
GUEST_OFFSET(Object_006e2534_0, word_2760, 0x2760);
GUEST_OFFSET(Object_006e2534_0, word_2764, 0x2764);
GUEST_OFFSET(Object_006e2534_0, word_27a8, 0x27a8);
GUEST_OFFSET(Object_006e2534_0, byte_27c6, 0x27c6);

struct __attribute__((packed)) Local_006e2534_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006e2534_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_006e2534_ea_1, word_4, 0x4);

inline guest::global<u32, 0x0085e1f4> global_0085e1f4;
inline guest::global<u32, 0x0085e1f8> global_0085e1f8;
inline guest::global<u32, 0x0095362c> global_0095362c;
inline constexpr guest::Function<0x006295d8, u32(u32, u32)> call_006295d8;
inline constexpr guest::Function<0x0075f0b0, u32(u32, u32, u32, u32)> call_0075f0b0;

u32 f_006e2534(gptr<Object_006e2534_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0_5 = 0;
    if (arg0->word_2760 == 0) {
        u32 r0_1 = arg0->word_2764;
        if ((r0_1 & 1u) == 0 || r0_1 == 0) {
            u32 r0_3 = call_0075f0b0(*global_0095362c + 0x7874u, 4u, r2, r3);  // (from the original)
            if (r0_3 != 0) {
                r0_5 = call_006295d8(*global_0095362c + 0x7874u, 4u);  // (from the original)
                r1 = guest::cpu()->r[1];
                if (r0_5 == 0) {
                    return r0_5;
                }
            }
            u32 r1_1 = *global_0085e1f4;
            u32 r2_1 = *global_0085e1f8;
            gptr<Local_006e2534_ea_1> ea_1 = gptr<Local_006e2534_ea_1>(arg0.addr() + 0x2760u);  // (from the original)
            ea_1->word_0 = r1_1;
            ea_1->word_4 = r2_1;
            arg0->word_27a8 = 0;
            arg0->byte_27c6 = 0;
            guest::cpu()->r[1] = r1_1;
            return 1u;
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_006e2534
GUEST_EXPORT_FRAMED(0x006e2534, d_006e2534::f_006e2534, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006e2724: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e2724 {

struct __attribute__((packed)) Object_006e2724_0 {
    u8 unknown_0[0x1d8];  // (not used here)
    u32 word_1d8;
    u8 unknown_1dc[0x25c4];  // (not used here)
    u32 word_27a0;
};
GUEST_OFFSET(Object_006e2724_0, word_1d8, 0x1d8);
GUEST_OFFSET(Object_006e2724_0, word_27a0, 0x27a0);

inline constexpr guest::Function<0x0050d128, u32(u32, u32, u32, u32)> call_0050d128;
inline constexpr guest::Function<0x006e3da0, u32(u32, u32, u32, u32)> call_006e3da0;
inline constexpr guest::Function<0x00746e4c, u32(u32, u32, u32, u32)> call_00746e4c;
inline constexpr guest::Function<0x00746ed0, u32(u32, u32)> call_00746ed0;
inline constexpr guest::Function<0x00746efc, u32(u32)> call_00746efc;
inline constexpr guest::Function<0x00746f8c, u32(u32)> call_00746f8c;

struct __attribute__((packed)) Frame_006e2724 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Frame_006e2724, word_0, 0x0);
GUEST_OFFSET(Frame_006e2724, word_4, 0x4);
GUEST_SIZE(Frame_006e2724, 0x8);

u32 f_006e2724(gptr<Object_006e2724_0> arg0) {
    guest::StackFrameOf<Frame_006e2724> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r0_3 = 0;
    u32 r5 = r0;
    u32 r3_1 = arg0->word_27a0;
    u32 r0_1 = *gptr<u32>(r5 + 0x2770u);  // (from the original)
    u32 r1_1 = *gptr<u8>((0x2770u | u32(s32(0x2770u) >> 0xb)) + r5);  // (from the original)
    frame->word_0 = r0_1;
    frame->word_4 = r1_1;
    u32 r0_2 = call_0050d128(0xa22020u, r5 + 0x44u, r5 + 0x2790u, r3_1);  // (from the original)
    u32 r2 = guest::cpu()->r[2];
    u32 r3 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        r0_3 = call_00746f8c(0xa22020u);  // (from the original)
        if (r0_3 != 0) {
            u32 r0_4 = call_00746efc(0xa22020u);  // (from the original)
            u32 r1_4 = guest::cpu()->r[1];
            if (r0_4 >= 2u) {
                u32 r0_5 = call_00746ed0(0xa22020u, r1_4);  // (from the original)
                r1_4 = guest::cpu()->r[1];
                if (r0_5 != 0) {
                    u32 r0_6 = call_00746ed0(0xa22020u, r1_4);  // (from the original)
                    r1_4 = r5 + 0x27a8u;  // (from the original)
                    *gptr<u32>(r1_4) = r0_6;
                    *gptr<u8>(r5 + 0x27c6u) = 1;  // (from the original)
                }
            }
            guest::cpu()->r[1] = r1_4;
            return ~0u;
        }
    } else {
        u32 r6 = arg0->word_1d8;
        if (r6 != 0) {
            r4 = 0u;
        }
        if (r6 >= 0u && r6 != 0) {
            do {
                u32 r0_9 = call_00746e4c(r5 + 0x44u, r4, r2, r3);  // (from the original)
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_9 != 0) {
                    call_006e3da0(r0_9, guest::cpu()->r[1], r2, r3);
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                }
                r4 += 1u;
                guest::preempt();
            } while (r4 < r6);
        }
        r0_3 = 1u;
    }
    return r0_3;
}

}  // namespace d_006e2724
GUEST_EXPORT_FRAMED(0x006e2724, d_006e2724::f_006e2724, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006e2820: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e2820 {

struct __attribute__((packed)) Object_006e2820_0 {
    u8 unknown_0[0x2788];  // (not used here)
    u32 word_2788;
    u32 word_278c;
};
GUEST_OFFSET(Object_006e2820_0, word_2788, 0x2788);
GUEST_OFFSET(Object_006e2820_0, word_278c, 0x278c);

struct __attribute__((packed)) Local_006e2820_r0_2 {
    u8 byte_0;
};
GUEST_OFFSET(Local_006e2820_r0_2, byte_0, 0x0);

struct __attribute__((packed)) Local_006e2820_r12 {
    u32 word_0;
};
GUEST_OFFSET(Local_006e2820_r12, word_0, 0x0);

struct __attribute__((packed)) Local_006e2820_r3_2 {
    u8 unknown_0[0x90];  // (not used here)
    u16 half_90;
    u16 half_92;
};
GUEST_OFFSET(Local_006e2820_r3_2, half_90, 0x90);
GUEST_OFFSET(Local_006e2820_r3_2, half_92, 0x92);

inline constexpr guest::Function<0x0050cb2c, u32(u32, u32, u32, u32)> call_0050cb2c;

void f_006e2820(gptr<Object_006e2820_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = r0;
    u32 r7 = r1;
    u32 r8 = r2;
    u32 r6 = *gptr<u32>(guest::cpu()->r[13] + 0x20u);  // (from the original)
    u32 r5 = r3;
    call_0050cb2c(r0 + 0x44u, r1, r2, r3);  // (from the original)
    r1 = 0xffffu;  // (from the original)
    r3 = r4 + 0x2788u;  // (from the original)
    arg0->word_2788 = 0;
    arg0->word_278c = 0;
    if (r5 == r1) {
        r3 = 0u;
    }
    gptr<Local_006e2820_r12> r12 = gptr<Local_006e2820_r12>(r4 + 0x27a0u);  // (from the original)
    if (r5 == r1) {
        r0 = r3;
        do {
            u32 r2_1 = r0 << 0x1c >> 0x14;  // (from the original)
            u32 r3_1 = r3 + 1u;
            *gptr<u16>((r4 + (r3 << 1) + 0x2700u) + 0x90u) = u16(r2_1 | 0x8000u | 1u);  // (from the original)
            r0 += 1u;
            r3 = r3_1 + 1u;
            *gptr<u16>((r4 + (r3_1 << 1) + 0x2700u) + 0x90u) = u16(r2_1 | 1u);  // (from the original)
            guest::preempt();
        } while (s32(r0) < 4);
        r12->word_0 = r3;
    } else {
        gptr<Local_006e2820_r3_2> r3_2 = gptr<Local_006e2820_r3_2>(r4 + 0x2700u);  // (from the original)
        r2 = 1u;
        r3_2->half_90 = u16(r5);
        r0 = r2;
        r3_2->half_92 = u16(r1);
        do {
            u32 r2_2 = r2 + 1u;
            r0 += 2u;
            *gptr<u16>((r4 + (r2 << 1)) + 0x2792u) = u16(r1);  // (from the original)
            r2 = r2_2 + 1u;
            *gptr<u16>((r4 + (r2_2 << 1) + 0x2700u) + 0x92u) = u16(r1);  // (from the original)
            guest::preempt();
        } while (r0 < 7u);
        r12->word_0 = 1;
    }
    u32 zf_1 = r5 == r1;
    if (r5 != r1) {
        r1 = 0u;
    }
    *gptr<u32>(r4 + 0x2770u) = r7;  // (from the original)
    gptr<Local_006e2820_r0_2> r0_2 = gptr<Local_006e2820_r0_2>(r4 + 0x2774u);  // (from the original)
    *gptr<u8>(r4 + 0x27c5u) = u8(r6);  // (from the original)
    if (zf_1) {
        r0_2->byte_0 = u8(r8);
    } else {
        r0_2->byte_0 = u8(r1);
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_006e2820
GUEST_EXPORT_FRAMED(0x006e2820, d_006e2820::f_006e2820, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_006e35fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e35fc {

struct __attribute__((packed)) Object_006e35fc_0 {
    u8 unknown_0[0x36];  // (not used here)
    u16 half_36;
    u8 unknown_38[0x2728];  // (not used here)
    u32 word_2760;
    u32 word_2764;
    u8 unknown_2768[0x40];  // (not used here)
    u32 word_27a8;
    u8 unknown_27ac[0x1a];  // (not used here)
    u8 byte_27c6;
};
GUEST_OFFSET(Object_006e35fc_0, half_36, 0x36);
GUEST_OFFSET(Object_006e35fc_0, word_2760, 0x2760);
GUEST_OFFSET(Object_006e35fc_0, word_2764, 0x2764);
GUEST_OFFSET(Object_006e35fc_0, word_27a8, 0x27a8);
GUEST_OFFSET(Object_006e35fc_0, byte_27c6, 0x27c6);

struct __attribute__((packed)) Local_006e35fc_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006e35fc_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_006e35fc_ea_2, word_4, 0x4);

inline guest::global<u32, 0x0085e234> global_0085e234;
inline guest::global<u32, 0x0085e238> global_0085e238;
inline constexpr guest::Function<0x002fb328, u32(u32)> call_002fb328;
inline constexpr guest::Function<0x0035072c, u32(u32)> call_0035072c;
inline constexpr guest::Function<0x004dcf6c, u32(u32)> call_004dcf6c;
inline constexpr guest::Function<0x0050c9a4, u32(u32, u32, u32, u32)> call_0050c9a4;
inline constexpr guest::Function<0x006d3cd4, u32(u32)> call_006d3cd4;

struct __attribute__((packed)) Frame_006e35fc {
    u32 word_0;
};
GUEST_OFFSET(Frame_006e35fc, word_0, 0x0);
GUEST_SIZE(Frame_006e35fc, 0x4);

u32 f_006e35fc(gptr<Object_006e35fc_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_006e35fc> frame;  // the original's stack frame
    frame->word_0 = r3;
    if (arg0->word_2760 == 0) {
        u32 r0_1 = arg0->word_2764;
        if ((r0_1 & 1u) == 0 || r0_1 == 0) {
            call_0050c9a4(arg0.addr() + 0x10u, r1, r2, r3);  // (from the original)
            call_004dcf6c(arg0.addr() + 0x10u);  // (from the original)
            call_0035072c(frame.at(0).addr());
            u32 r0_6 = call_006d3cd4(frame->word_0 >> 0x18);  // (from the original)
            u32 r0_7 = r0_6 << 0x1c >> 0x14 | 0x8000u | 2u;  // (from the original)
            arg0->half_36 = u16(r0_7);
            u32 r0_8 = call_002fb328(r0_7);
            *gptr<u32>(arg0.addr() + 0x3cu) = *gptr<u32>(r0_8 + 0x8880cu);  // (from the original)
            u32 r1_4 = *global_0085e234;
            u32 r2_4 = *global_0085e238;
            gptr<Local_006e35fc_ea_2> ea_2 = gptr<Local_006e35fc_ea_2>(arg0.addr() + 0x2760u);  // (from the original)
            ea_2->word_0 = r1_4;
            ea_2->word_4 = r2_4;
            arg0->word_27a8 = 0;
            arg0->byte_27c6 = 0;
            guest::cpu()->r[1] = r1_4;
            return 1u;
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_006e35fc
GUEST_EXPORT_FRAMED(0x006e35fc, d_006e35fc::f_006e35fc, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_006e4490: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e4490 {

inline constexpr guest::Function<0x00132478, u32(u32, u32)> call_00132478;

void f_006e4490() {
    call_00132478(0x9ab57cu, guest::cpu()->r[1]);
    return;  // (from the original)
}

}  // namespace d_006e4490
GUEST_EXPORT(0x006e4490, d_006e4490::f_006e4490);

// f_006e449c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e449c {


u32 f_006e449c(u32 r0, u32 r1) {
    return r1 & 0x3ffffu | r0 << 0x12;  // (from the original)
}

}  // namespace d_006e449c
GUEST_EXPORT(0x006e449c, d_006e449c::f_006e449c);

// f_006e44bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e44bc {

struct __attribute__((packed)) Object_006e44bc_0 {
    u8 unknown_0[0xc];  // (not used here)
    u16 half_c;
    u8 unknown_e[0x46];  // (not used here)
    u32 word_54;
};
GUEST_OFFSET(Object_006e44bc_0, half_c, 0xc);
GUEST_OFFSET(Object_006e44bc_0, word_54, 0x54);

inline constexpr guest::Function<0x0013f000, u32(u32, u32)> call_0013f000;
inline constexpr guest::Function<0x005bf748, u32(u32, u32)> call_005bf748;

void f_006e44bc(gptr<Object_006e44bc_0> arg0, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    call_0013f000(0x9ab57cu, arg0.addr() + 0x48u);  // (from the original)
    arg0->word_54 = r1 & 0x3ffffu | u32(arg0->half_c) << 0x12;  // (from the original)
    frame.release();
    call_005bf748(0x9ab57cu, arg0.addr() + 0x48u);
    return;  // (from the original)
}

}  // namespace d_006e44bc
GUEST_EXPORT(0x006e44bc, d_006e44bc::f_006e44bc);

// f_006e46c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e46c8 {

inline constexpr guest::Function<0x005bf758, u32(u32, u32)> call_005bf758;

u32 f_006e46c8(u32 r0) {
    u32 r0_1 = call_005bf758(0x9ab57cu, r0);  // (from the original)
    if (r0_1 != 0) {
        r0_1 = *gptr<u32>(r0_1 + 0x10u);  // (from the original)
    }
    return r0_1;
}

}  // namespace d_006e46c8
GUEST_EXPORT_FRAMED(0x006e46c8, d_006e46c8::f_006e46c8, 0x4010);  // pushes {r4, lr} first, as the original

// f_006e46f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e46f4 {

struct __attribute__((packed)) Object_006e46f4_0 {
    u8 unknown_0[0x54];  // (not used here)
    u32 word_54;
    u32 word_58;
    float float_5c;
    float float_60;
    u16 half_64;
};
GUEST_OFFSET(Object_006e46f4_0, word_54, 0x54);
GUEST_OFFSET(Object_006e46f4_0, word_58, 0x58);
GUEST_OFFSET(Object_006e46f4_0, float_5c, 0x5c);
GUEST_OFFSET(Object_006e46f4_0, float_60, 0x60);
GUEST_OFFSET(Object_006e46f4_0, half_64, 0x64);

inline constexpr guest::Function<0x0057ba40, u32(u32, u32)> call_0057ba40;

u32 f_006e46f4(gptr<Object_006e46f4_0> arg0, u32 r1, float S0, float S1) {
    u32 r0_1 = call_0057ba40(arg0.addr(), r1);
    if (r0_1 == 0) {
        return r0_1;
    }
    arg0->word_54 = 0;
    arg0->word_58 = arg0.addr();
    float S0_2 = 2304.0f;
    float S1_2 = 14.0f;
    arg0->float_5c = S0_2;
    arg0->float_60 = S1_2;
    arg0->half_64 = 2;
    guest::cpu()->r[1] = arg0.addr() + 0x5cu;  // (from the original)
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    return 1u;
}

}  // namespace d_006e46f4
GUEST_EXPORT_FRAMED(0x006e46f4, d_006e46f4::f_006e46f4, 0x4010);  // pushes {r4, lr} first, as the original

// f_006e47a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e47a0 {

inline constexpr u32 vtable_DemoActor = 0x008f9530u;
inline constexpr u32 vtable_DemoActor__ListNodeDemoActor = 0x0090b134u;
inline constexpr guest::Function<0x001324a8, u32(u32)> call_001324a8;
inline constexpr guest::Function<0x0057ba68, u32(u32, u32, u32, u32)> call_0057ba68;

u32 f_006e47a0(gptr<DemoActor> arg0, u32 r1, u32 r2, float S0) {
    call_0057ba68(arg0.addr(), r1, r2, guest::cpu()->r[3]);
    arg0->word_0 = vtable_DemoActor;
    call_001324a8(arg0.addr() + 0x48u);  // (from the original)
    arg0->word_54 = 0;
    arg0->word_48 = vtable_DemoActor__ListNodeDemoActor;
    arg0->word_58 = 0;
    float S0_1 = 0.0f;
    arg0->float_5c = S0_1;
    arg0->float_60 = S0_1;
    arg0->half_64 = 0;
    guest::cpu()->r[1] = 0u;
    guest::cpu()->s[0] = S0_1;
    return arg0.addr();
}

}  // namespace d_006e47a0
GUEST_EXPORT_FRAMED(0x006e47a0, d_006e47a0::f_006e47a0, 0x4010);  // pushes {r4, lr} first, as the original

// f_006e4a48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e4a48 {

inline constexpr u32 vtable_FaderWipe = 0x008f95d8u;
inline constexpr guest::Function<0x005664d8, u32(u32, u32, u32)> call_005664d8;

u32 f_006e4a48(gptr<FaderWipe> arg0, u32 r1) {
    call_005664d8(arg0.addr(), r1, guest::cpu()->r[2]);
    arg0->word_0 = vtable_FaderWipe;
    guest::cpu()->r[1] = 0x8f95d8u;  // (from the original)
    return arg0.addr();
}

}  // namespace d_006e4a48
GUEST_EXPORT_FRAMED(0x006e4a48, d_006e4a48::f_006e4a48, 0x4010);  // pushes {r4, lr} first, as the original

// f_006e4b0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e4b0c {


u32 f_006e4b0c(u32 r0, u32 r1) {
    if (r0 >= 5u) {
        return 0x9b3b08u;  // (from the original)
    }
    guest::cpu()->r[1] = 0x9b3b08u;  // (from the original)
    return ((r0 << 6) - r0 * 5u << 2) + 0x9b3b08u;  // (from the original)
}

}  // namespace d_006e4b0c
GUEST_EXPORT(0x006e4b0c, d_006e4b0c::f_006e4b0c);

// f_006e4b30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e4b30 {

inline constexpr guest::Function<0x00200ab4, u32(u32, u32, u32, u32)> call_00200ab4;

u32 f_006e4b30(u32 r0, u32 r1, u32 r2) {
    return call_00200ab4(0x9b3b08u, r0, r1, r2);  // (from the original)
}

}  // namespace d_006e4b30
GUEST_EXPORT(0x006e4b30, d_006e4b30::f_006e4b30);

// f_006e4b48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e4b48 {

inline constexpr guest::Function<0x00200ab4, u32(u32, u32, u32, u32)> call_00200ab4;

void f_006e4b48(u32 r0, u32 r1, u32 r2) {
    call_00200ab4(0x9b3dccu, r0, r1, r2);  // (from the original)
}

}  // namespace d_006e4b48
GUEST_EXPORT_FRAMED(0x006e4b48, d_006e4b48::f_006e4b48, 0x4010);  // pushes {r4, lr} first, as the original

// f_006e4c94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e4c94 {

struct __attribute__((packed)) Local_006e4c94_r0_1 {
    u8 byte_0;
};
GUEST_OFFSET(Local_006e4c94_r0_1, byte_0, 0x0);

inline constexpr guest::Function<0x002f73b8, u32(u32, u32)> call_002f73b8;
inline constexpr guest::Function<0x006e50f0, u32(u32, u32, u32, u32)> call_006e50f0;

u32 f_006e4c94(u32 r0, u32 r1, u32 r2) {
    gptr<Local_006e4c94_r0_1> r0_1 = gptr<Local_006e4c94_r0_1>(0u);
    u32 r6 = r0;
    u32 r4 = 0u;
    u32 r10 = 1u;
    u32 r5 = r0 + 0x35e0u;  // (from the original)
    u32 r9 = r0 + 0x35e2u;  // (from the original)
    do {
        r0_1 = gptr<Local_006e4c94_r0_1>(r4 & 0xffu);  // (from the original)
        if (r0_1.addr() != 0 && r0_1.addr() < 0xeu) {  // (from the original)
            r1 = *gptr<u8>(r5 + (r0_1.addr() >> 3));
            u32 r8_1 = r0_1.addr() & 7u;
            r0_1 = gptr<Local_006e4c94_r0_1>(lsr_r(r1, r8_1 & 0xff));  // (from the original)
            if (!((r0_1.addr() & 1u) == 0)) {
                u32 r7_1 = r4 & 0xffu;  // (from the original)
                call_006e50f0(r6, r7_1, r2, guest::cpu()->r[3]);
                u32 r1_1 = r7_1 * 0x21u;  // (from the original)
                call_002f73b8(r6 + (r1_1 << 3), r1_1);
                r0_1 = gptr<Local_006e4c94_r0_1>(r9 + (r7_1 >> 3));
                r2 = r0_1->byte_0;
                r1 = r2 & ~lsl_r(r10, r8_1 & 0xff);  // (from the original)
                r0_1->byte_0 = u8(r1);
            }
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0xeu);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_1.addr();
}

}  // namespace d_006e4c94
GUEST_EXPORT_FRAMED(0x006e4c94, d_006e4c94::f_006e4c94, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_006e4d30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e4d30 {

inline constexpr guest::Function<0x006e5718, u32(u32)> call_006e5718;

u32 f_006e4d30(u32 r0) {
    if (r0 >= 0x276u) {  // (from the original)
        return 0u;
    }
    u32 r0_1 = call_006e5718(r0);
    return u32(*gptr<u8>(r0_1 + 0x10u)) >> 3u & 1u;  // (from the original)
}

}  // namespace d_006e4d30
GUEST_EXPORT_FRAMED(0x006e4d30, d_006e4d30::f_006e4d30, 0x4000);  // pushes {lr} first, as the original

// f_006e4d80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e4d80 {


u32 f_006e4d80(u32 r0) {
    return gptr<u16>(0x865cf8u)[r0 & 3u];  // (from the original)
}

}  // namespace d_006e4d80
GUEST_EXPORT(0x006e4d80, d_006e4d80::f_006e4d80);

// f_006e4d98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e4d98 {


u32 f_006e4d98(u32 r0) {
    return r0 == 0x6au || r0 == 0x6bu;  // (from the original)
}

}  // namespace d_006e4d98
GUEST_EXPORT(0x006e4d98, d_006e4d98::f_006e4d98);

// f_006e4e70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e4e70 {


u32 f_006e4e70(u32 r0) {
    return r0 == 0 ? 0x1au : 0x1bu;  // (from the original)
}

}  // namespace d_006e4e70
GUEST_EXPORT(0x006e4e70, d_006e4e70::f_006e4e70);

// f_006e5920: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e5920 {

inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> call_004b4fc0;
inline constexpr guest::Function<0x00568630, u32(u32, u32, u32, u32)> call_00568630;
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> call_00568984;
inline constexpr guest::Function<0x00568c10, u32(u32)> call_00568c10;
inline constexpr guest::Function<0x005697e0, u32(u32)> call_005697e0;

void f_006e5920(u32 r0, u32 r1, u32 r2_unused, u32 r3, float S0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_2 = call_004b4fc0(r0 + 0x460u, 0x6e5998u, 1u, r3);  // (from the original)
    call_00568630(r0 + 0x460u, r0 + 0xa58u, r0_2, 0u);  // (from the original)
    float S0_2 = float(r1);
    guest::cpu()->s[0] = S0_2;
    call_005697e0(r0 + 0xa58u);  // (from the original)
    call_00568c10(r0 + 0x460u);  // (from the original)
    u32 r0_6 = call_004b4fc0(r0 + 0x460u, 0x6e5998u, 1u, guest::cpu()->r[3]);  // (from the original)
    frame.release();
    call_00568984(r0_6, r0 + 0xa58u, r0_6, 0u);
    return;  // (from the original)
}

}  // namespace d_006e5920
GUEST_EXPORT(0x006e5920, d_006e5920::f_006e5920);

// f_006e59c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e59c0 {

struct __attribute__((packed)) Object_006e59c0_0 {
    u8 unknown_0[0xaf0];  // (not used here)
    u8 byte_af0;
};
GUEST_OFFSET(Object_006e59c0_0, byte_af0, 0xaf0);

inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> call_004b4fc0;
inline constexpr guest::Function<0x00568630, u32(u32, u32, u32, u32)> call_00568630;
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> call_00568984;
inline constexpr guest::Function<0x00568c10, u32(u32)> call_00568c10;
inline constexpr guest::Function<0x005697e0, u32(u32)> call_005697e0;

void f_006e59c0(gptr<Object_006e59c0_0> arg0, u32 r1, u32 r2_unused, u32 r3, float S0) {
    u32 r0_2 = call_004b4fc0(arg0.addr() + 0x460u, 0x6e5a34u, 1u, r3);  // (from the original)
    call_00568630(arg0.addr() + 0x460u, arg0.addr() + 0xa80u, r0_2, 0u);  // (from the original)
    float S0_2 = float(r1);
    guest::cpu()->s[0] = S0_2;
    call_005697e0(arg0.addr() + 0xa80u);  // (from the original)
    call_00568c10(arg0.addr() + 0x460u);  // (from the original)
    u32 r0_7 = call_004b4fc0(arg0.addr() + 0x460u, 0x6e5a34u, 1u, guest::cpu()->r[3]);  // (from the original)
    call_00568984(r0_7, arg0.addr() + 0xa80u, r0_7, 0u);  // (from the original)
    arg0->byte_af0 = u8(r1);
}

}  // namespace d_006e59c0
GUEST_EXPORT_FRAMED(0x006e59c0, d_006e59c0::f_006e59c0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006e5e94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e5e94 {

struct __attribute__((packed)) Object_006e5e94_0 {
    u8 unknown_0[0xaed];  // (not used here)
    u8 byte_aed;
};
GUEST_OFFSET(Object_006e5e94_0, byte_aed, 0xaed);

struct __attribute__((packed)) Local_006e5e94_r0_2 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_006e5e94_r0_2, byte_b7, 0xb7);

inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32)> call_004b4fc0;
inline constexpr guest::Function<0x00568630, u32(u32, u32, u32, u32)> call_00568630;
inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> call_0056878c;
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> call_00568984;
inline constexpr guest::Function<0x005697e0, u32(u32)> call_005697e0;

u32 f_006e5e94(gptr<Object_006e5e94_0> arg0, u32 r1, u32 r2, u32 r3, float S0) {
    gptr<Local_006e5e94_r0_2> r0_2 = gptr<Local_006e5e94_r0_2>(call_0056878c(arg0.addr() + 0x460u, 0x6e5f38u, r2, r3));  // (from the original)
    u32 r1_1 = u32(r0_2->byte_b7) & 0xfeu | r1;  // (from the original)
    r0_2->byte_b7 = u8(r1_1);
    u32 r0_3 = arg0->byte_aed;
    if (r1 != 0) {
        if (r0_3 == 0) {
            u32 r0_5 = call_004b4fc0(arg0.addr() + 0x460u, 0x6e5f48u, 1u);  // (from the original)
            call_00568630(r0_5, arg0.addr() + 0xa30u, r0_5, 0u);  // (from the original)
            float S0_3 = 0.0f;
            guest::cpu()->s[0] = S0_3;
            r0_3 = call_005697e0(arg0.addr() + 0xa30u);  // (from the original)
            r1_1 = guest::cpu()->r[1];
        }
    } else if (r0_3 == 1u) {
        u32 r0_8 = call_004b4fc0(arg0.addr() + 0x460u, 0x6e5f48u, 1u);  // (from the original)
        r0_3 = call_00568984(arg0.addr() + 0x460u, arg0.addr() + 0xa30u, r0_8, 0u);  // (from the original)
        r1_1 = guest::cpu()->r[1];
    }
    arg0->byte_aed = u8(r1);
    guest::cpu()->r[1] = r1_1;
    return r0_3;
}

}  // namespace d_006e5e94
GUEST_EXPORT_FRAMED(0x006e5e94, d_006e5e94::f_006e5e94, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006e5f58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e5f58 {

struct __attribute__((packed)) Object_006e5f58_0 {
    u8 unknown_0[0xaee];  // (not used here)
    u8 byte_aee;
};
GUEST_OFFSET(Object_006e5f58_0, byte_aee, 0xaee);

inline constexpr guest::Function<0x006c8e30, u32(u32, u32)> call_006c8e30;
inline constexpr guest::Function<0x006c9050, u32(u32, u32)> call_006c9050;

u32 f_006e5f58(gptr<Object_006e5f58_0> arg0, u32 r1) {
    u32 r0_1 = s8(arg0->byte_aee);
    if (r0_1 != r1) {
        if (r1 != 0) {
            r0_1 = call_006c8e30(arg0.addr() + 0x24u, r1);  // (from the original)
        } else {
            r0_1 = call_006c9050(arg0.addr() + 0x24u, r1);  // (from the original)
        }
        arg0->byte_aee = u8(r1);
    }
    return r0_1;
}

}  // namespace d_006e5f58
GUEST_EXPORT_FRAMED(0x006e5f58, d_006e5f58::f_006e5f58, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006e64c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e64c4 {

struct __attribute__((packed)) Object_006e64c4_0 {
    u8 unknown_0[0x5cc];  // (not used here)
    u32 word_5cc;
    u8 unknown_5d0[0x510];  // (not used here)
    u32 word_ae0;
    u8 unknown_ae4[0x4];  // (not used here)
    u32 word_ae8;
};
GUEST_OFFSET(Object_006e64c4_0, word_5cc, 0x5cc);
GUEST_OFFSET(Object_006e64c4_0, word_ae0, 0xae0);
GUEST_OFFSET(Object_006e64c4_0, word_ae8, 0xae8);

inline constexpr guest::Function<0x001323b4, u32(u32)> call_001323b4;
inline constexpr guest::Function<0x004b6d74, u32(u32, u32)> call_004b6d74;
inline constexpr guest::Function<0x004b6dc8, u32(u32, u32, u32, u32)> call_004b6dc8;
inline constexpr guest::Function<0x00584134, u32(u32)> call_00584134;
inline constexpr guest::Function<0x0058660c, u32(u32, u32, u32, u32)> call_0058660c;
inline constexpr guest::Function<0x0058c5f0, u32(u32, u32)> call_0058c5f0;
inline constexpr guest::Function<0x006c8ef0, u32(u32)> call_006c8ef0;

void f_006e64c4(gptr<Object_006e64c4_0> arg0) {
    u32 r0_1 = arg0->word_ae8;
    u32 r1_1 = *gptr<u32>(r0_1 + 0x10u);  // (from the original)
    if (r1_1 != 0) {
        u32 r1_2 = arg0->word_ae0;
        u32 r5_1 = arg0.addr() + 0xae0u;  // (from the original)
        call_004b6dc8(r0_1, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
        r0_1 = call_004b6d74(arg0->word_5cc, arg0->word_ae0);
        r1_1 = guest::cpu()->r[1];
    }
    u32 r0_3 = call_0058660c(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_4 = *gptr<u16>(r0_3 + 0xeu);  // (from the original)
    if ((r0_4 & 8u) == 0) {
        u32 r0_5 = call_00584134(r0_4);
        call_0058c5f0(r0_5, 0x24u);  // (from the original)
    }
    call_006c8ef0(arg0.addr() + 0x24u);  // (from the original)
    call_001323b4(arg0.addr() + 0x460u);  // (from the original)
    call_001323b4(arg0.addr() + 0x5acu);  // (from the original)
}

}  // namespace d_006e64c4
GUEST_EXPORT_FRAMED(0x006e64c4, d_006e64c4::f_006e64c4, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006e69cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e69cc {

struct __attribute__((packed)) Local_006e69cc_r0_25 {
    u8 unknown_0[0xaa8];  // (not used here)
    u32 word_aa8;
    u32 word_aac;
    u32 word_ab0;
    u32 word_ab4;
    u32 word_ab8;
    u32 word_abc;
    u32 word_ac0;
    u32 word_ac4;
    u32 word_ac8;
    u32 word_acc;
    u32 word_ad0;
    u32 word_ad4;
    u32 word_ad8;
    u32 word_adc;
    u32 word_ae0;
    u32 word_ae4;
    u32 word_ae8;
    u8 byte_aec;
    u8 byte_aed;
    u8 byte_aee;
    u8 byte_aef;
    u8 byte_af0;
    u8 byte_af1;
};
GUEST_OFFSET(Local_006e69cc_r0_25, word_aa8, 0xaa8);
GUEST_OFFSET(Local_006e69cc_r0_25, word_aac, 0xaac);
GUEST_OFFSET(Local_006e69cc_r0_25, word_ab0, 0xab0);
GUEST_OFFSET(Local_006e69cc_r0_25, word_ab4, 0xab4);
GUEST_OFFSET(Local_006e69cc_r0_25, word_ab8, 0xab8);
GUEST_OFFSET(Local_006e69cc_r0_25, word_abc, 0xabc);
GUEST_OFFSET(Local_006e69cc_r0_25, word_ac0, 0xac0);
GUEST_OFFSET(Local_006e69cc_r0_25, word_ac4, 0xac4);
GUEST_OFFSET(Local_006e69cc_r0_25, word_ac8, 0xac8);
GUEST_OFFSET(Local_006e69cc_r0_25, word_acc, 0xacc);
GUEST_OFFSET(Local_006e69cc_r0_25, word_ad0, 0xad0);
GUEST_OFFSET(Local_006e69cc_r0_25, word_ad4, 0xad4);
GUEST_OFFSET(Local_006e69cc_r0_25, word_ad8, 0xad8);
GUEST_OFFSET(Local_006e69cc_r0_25, word_adc, 0xadc);
GUEST_OFFSET(Local_006e69cc_r0_25, word_ae0, 0xae0);
GUEST_OFFSET(Local_006e69cc_r0_25, word_ae4, 0xae4);
GUEST_OFFSET(Local_006e69cc_r0_25, word_ae8, 0xae8);
GUEST_OFFSET(Local_006e69cc_r0_25, byte_aec, 0xaec);
GUEST_OFFSET(Local_006e69cc_r0_25, byte_aed, 0xaed);
GUEST_OFFSET(Local_006e69cc_r0_25, byte_aee, 0xaee);
GUEST_OFFSET(Local_006e69cc_r0_25, byte_aef, 0xaef);
GUEST_OFFSET(Local_006e69cc_r0_25, byte_af0, 0xaf0);
GUEST_OFFSET(Local_006e69cc_r0_25, byte_af1, 0xaf1);

struct __attribute__((packed)) Local_006e69cc_r0_9 {
    u8 unknown_0[0x430];  // (not used here)
    u8 byte_430;
    u8 byte_431;
    u8 unknown_432[0x2];  // (not used here)
    u32 word_434;
};
GUEST_OFFSET(Local_006e69cc_r0_9, byte_430, 0x430);
GUEST_OFFSET(Local_006e69cc_r0_9, byte_431, 0x431);
GUEST_OFFSET(Local_006e69cc_r0_9, word_434, 0x434);

inline constexpr u32 vtable_WaitIcon = 0x008f8ed0u;
inline constexpr u32 vtable_MsgWindow = 0x008f9618u;
inline guest::global<u32, 0x0087aab4> global_0087aab4;
inline guest::global<u32, 0x0087aab8> global_0087aab8;
inline guest::global<u32, 0x0087aabc> global_0087aabc;
inline guest::global<u32, 0x0087aac0> global_0087aac0;
inline constexpr guest::Function<0x001207d8, u32(u32)> call_001207d8;
inline constexpr guest::Function<0x00125aec, u32(u32)> call_00125aec;
inline constexpr guest::Function<0x00125e3c, u32(u32, u32, u32, u32)> call_00125e3c;

u32 f_006e69cc(gptr<MsgWindow> arg0, float S0) {
    arg0->word_4 = 0;
    arg0->byte_8 = 0;
    u32 r3_1 = *global_0087aac0;
    arg0->word_c = *global_0087aabc;
    arg0->word_10 = r3_1;
    arg0->word_14 = 0;
    arg0->byte_18 = 0;
    arg0->word_1c = 0;
    arg0->word_0 = vtable_MsgWindow;
    arg0->word_20 = 0;
    u32 r0_1 = arg0.addr() + 0x24u;  // (from the original)
    arg0->word_28 = 0;
    arg0->byte_2c = 0;
    u32 r2_1 = *global_0087aab4;
    u32 r1_1 = *global_0087aab8;
    arg0->word_30 = r2_1;
    arg0->word_34 = r1_1;
    arg0->word_38 = 0;
    arg0->byte_3c = 0;
    arg0->word_40 = 0;
    arg0->word_24 = vtable_WaitIcon;
    arg0->word_44 = 0;
    u32 r0_3 = call_00125e3c(r0_1 + 0x24u, 0x8f8ed0u, r2_1, r0_1 + 0x10u);  // (from the original)
    u32 r0_5 = call_001207d8(r0_3 + 0x14cu);  // (from the original)
    u32 r0_6 = r0_5 + 0x248u;  // (from the original)
    call_00125aec(r0_6);
    u32 r0_7 = r0_6 + 0x28u;  // (from the original)
    call_00125aec(r0_7);
    u32 r0_8 = r0_7 + 0x28u;  // (from the original)
    call_00125aec(r0_8);
    gptr<Local_006e69cc_r0_9> r0_9 = gptr<Local_006e69cc_r0_9>(r0_8 - 0x408u);  // (from the original)
    u32 r1_6 = r0_9.addr() + 0x400u;  // (from the original)
    r0_9->byte_430 = 0;
    r0_9->byte_431 = 0;
    r0_9->word_434 = 0;
    float S0_5 = 0.0f;
    *gptr<u32>(r1_6 + 0x38u) = std::bit_cast<u32>(S0_5);  // (from the original)
    guest::cpu()->s[0] = S0_5;
    u32 r0_11 = call_00125e3c(r0_9.addr() + 0x43cu, r1_6, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_13 = call_00125e3c(r0_11 + 0x14cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_15 = call_001207d8(r0_13 + 0x14cu);  // (from the original)
    u32 r0_16 = r0_15 + 0x248u;  // (from the original)
    call_00125aec(r0_16);
    u32 r0_17 = r0_16 + 0x28u;  // (from the original)
    call_00125aec(r0_17);
    u32 r0_18 = r0_17 + 0x28u;  // (from the original)
    call_00125aec(r0_18);
    u32 r0_19 = r0_18 + 0x28u;  // (from the original)
    call_00125aec(r0_19);
    u32 r0_20 = r0_19 + 0x28u;  // (from the original)
    call_00125aec(r0_20);
    u32 r0_21 = r0_20 + 0x28u;  // (from the original)
    call_00125aec(r0_21);
    u32 r0_22 = r0_21 + 0x28u;  // (from the original)
    call_00125aec(r0_22);
    u32 r0_23 = r0_22 + 0x28u;  // (from the original)
    call_00125aec(r0_23);
    u32 r0_24 = r0_23 + 0x28u;  // (from the original)
    call_00125aec(r0_24);
    gptr<Local_006e69cc_r0_25> r0_25 = gptr<Local_006e69cc_r0_25>(r0_24 - 0xa80u);  // (from the original)
    r0_25->word_aa8 = 0;
    r0_25->word_aac = 0;
    r0_25->word_ab0 = 0;
    r0_25->word_ab4 = 0;
    r0_25->word_ab8 = 0;
    r0_25->word_abc = 0;
    r0_25->word_ad4 = 0;
    r0_25->word_ad8 = 0;
    r0_25->word_adc = 0;
    r0_25->word_ae0 = 0;
    r0_25->word_ae4 = 0;
    r0_25->word_ae8 = 0;
    r0_25->byte_aec = 1;
    r0_25->byte_aed = 0;
    r0_25->byte_aee = 0;
    r0_25->byte_aef = 0;
    r0_25->byte_af0 = 7;
    r0_25->byte_af1 = 2;
    r0_25->word_ac0 = 0;
    r0_25->word_ac4 = 0;
    r0_25->word_ac8 = 0;
    r0_25->word_acc = 0;
    r0_25->word_ad0 = 0;
    return r0_25.addr();
}

}  // namespace d_006e69cc
GUEST_EXPORT_FRAMED(0x006e69cc, d_006e69cc::f_006e69cc, 0x4010);  // pushes {r4, lr} first, as the original

// f_006e7c8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e7c8c {

struct __attribute__((packed)) Object_006e7c8c_0 {
    u8 unknown_0[0x474];  // (not used here)
    u8 byte_474;
    u8 unknown_475[0x23];  // (not used here)
    u16 half_498;
    u8 unknown_49a[0x66];  // (not used here)
    u16 half_500;
};
GUEST_OFFSET(Object_006e7c8c_0, byte_474, 0x474);
GUEST_OFFSET(Object_006e7c8c_0, half_498, 0x498);
GUEST_OFFSET(Object_006e7c8c_0, half_500, 0x500);

struct __attribute__((packed)) Object_006e7c8c_1 {
    u16 half_0;
};
GUEST_OFFSET(Object_006e7c8c_1, half_0, 0x0);


u32 f_006e7c8c(gptr<Object_006e7c8c_0> arg0, gptr<Object_006e7c8c_1> arg1) {
    arg0->half_500 = u16(u32(arg1->half_0));
    if (arg0->byte_474 >= 0x1du) {  // (from the original)
        guest::cpu()->r[1] = arg1.addr();
        return arg0.addr();
    }
    u32 r1_1 = arg1->half_0;
    arg0->half_498 = u16(r1_1);
    guest::cpu()->r[1] = r1_1;
    return arg0.addr() + 0x478u;  // (from the original)
}

}  // namespace d_006e7c8c
GUEST_EXPORT(0x006e7c8c, d_006e7c8c::f_006e7c8c);

// f_006e7d98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e7d98 {

struct __attribute__((packed)) Object_006e7d98_0 {
    u8 unknown_0[0x28];  // (not used here)
    u32 word_28;
    u8 unknown_2c[0x4];  // (not used here)
    u8 byte_30;
    u8 unknown_31[0x443];  // (not used here)
    u8 byte_474;
    u8 unknown_475[0xf];  // (not used here)
    float float_484;
    float float_488;
    u32 word_48c;
    u8 unknown_490[0x18];  // (not used here)
    u8 byte_4a8;
    u8 unknown_4a9[0x34];  // (not used here)
    u8 byte_4dd;
    u8 unknown_4de[0xe];  // (not used here)
    float float_4ec;
    float float_4f0;
    float float_4f4;
};
GUEST_OFFSET(Object_006e7d98_0, word_28, 0x28);
GUEST_OFFSET(Object_006e7d98_0, byte_30, 0x30);
GUEST_OFFSET(Object_006e7d98_0, byte_474, 0x474);
GUEST_OFFSET(Object_006e7d98_0, float_484, 0x484);
GUEST_OFFSET(Object_006e7d98_0, float_488, 0x488);
GUEST_OFFSET(Object_006e7d98_0, word_48c, 0x48c);
GUEST_OFFSET(Object_006e7d98_0, byte_4a8, 0x4a8);
GUEST_OFFSET(Object_006e7d98_0, byte_4dd, 0x4dd);
GUEST_OFFSET(Object_006e7d98_0, float_4ec, 0x4ec);
GUEST_OFFSET(Object_006e7d98_0, float_4f0, 0x4f0);
GUEST_OFFSET(Object_006e7d98_0, float_4f4, 0x4f4);

struct __attribute__((packed)) Local_006e7d98_r0_2 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 unknown_3[0xa9d];  // (not used here)
    u32 word_aa0;
};
GUEST_OFFSET(Local_006e7d98_r0_2, byte_0, 0x0);
GUEST_OFFSET(Local_006e7d98_r0_2, byte_1, 0x1);
GUEST_OFFSET(Local_006e7d98_r0_2, byte_2, 0x2);
GUEST_OFFSET(Local_006e7d98_r0_2, word_aa0, 0xaa0);

struct __attribute__((packed)) Local_006e7d98_r1_1 {
    u8 unknown_0[0x7];  // (not used here)
    u8 byte_7;
};
GUEST_OFFSET(Local_006e7d98_r1_1, byte_7, 0x7);

struct __attribute__((packed)) Local_006e7d98_r5_1 {
    u8 unknown_0[0xc];  // (not used here)
    float float_c;
    u8 unknown_10[0x4];  // (not used here)
    float float_14;
};
GUEST_OFFSET(Local_006e7d98_r5_1, float_c, 0xc);
GUEST_OFFSET(Local_006e7d98_r5_1, float_14, 0x14);

inline constexpr guest::Function<0x007523a8, u32(u32, u32)> call_007523a8;

u32 f_006e7d98(gptr<Object_006e7d98_0> arg0, gptr<Float3> arg1, float S0, float S1) {
    u32 r1 = arg1.addr();
    gptr<Local_006e7d98_r5_1> r5_1 = gptr<Local_006e7d98_r5_1>(arg0.addr() + 0x4e0u);  // (from the original)
    arg0->float_4ec = arg1->v[0];
    arg0->float_4f0 = arg1->v[1];
    arg0->float_4f4 = arg1->v[2];
    if (arg0->byte_474 < 0x1du) {  // (from the original)
        arg0->float_484 = arg1->v[0];
        arg0->float_488 = arg1->v[1];
        r1 = std::bit_cast<u32>(arg1->v[2]);
        arg0->word_48c = r1;
    }
    u32 r0_1 = arg0->word_28;
    gptr<Local_006e7d98_r0_2> r0_2 = gptr<Local_006e7d98_r0_2>(call_007523a8(r0_1, r1));
    gptr<Local_006e7d98_r1_1> r1_1 = gptr<Local_006e7d98_r1_1>(guest::cpu()->r[1]);
    float S0_1 = guest::cpu()->s[0];
    float S1_1 = guest::cpu()->s[1];
    if (r0_2.addr() != 0) {
        r0_2 = gptr<Local_006e7d98_r0_2>(u32(arg0->byte_4a8));
        if (r0_2.addr() == 0) {
            r0_2 = gptr<Local_006e7d98_r0_2>(arg0->word_28);
            r1_1 = gptr<Local_006e7d98_r1_1>(r0_2->word_aa0);
            if (r1_1.addr() != 0) {
                r0_2 = gptr<Local_006e7d98_r0_2>(u32(arg0->byte_30));
                if (r0_2.addr() == 1u || r0_2.addr() == 2u || r0_2.addr() == 3u || r0_2.addr() == 5u || r0_2.addr() == 6u || r0_2.addr() == 7u || r0_2.addr() == 8u || r0_2.addr() == 9u || r0_2.addr() == 0xau || r0_2.addr() == 0xbu) {  // (from the original)
                    u32 r2_1 = u32(r1_1->byte_7) & ~0x3fu | r0_2.addr() & 0x3fu;  // (from the original)
                    r1_1->byte_7 = u8(r2_1);
                    r1_1->byte_7 = u8(r2_1 & ~0xc0u | u32(arg0->byte_4dd) << 6);  // (from the original)
                    r0_2 = gptr<Local_006e7d98_r0_2>(r1_1.addr() + 9u);
                    S1_1 = r5_1->float_14;
                    u32 r1_2 = vcvt_uz_f(r5_1->float_c);
                    S0_1 = std::bit_cast<float>(vcvt_uz_f(S1_1));
                    r0_2->byte_0 = u8(r1_2);
                    u32 r3_1 = u32(r0_2->byte_1) & ~0xfu | (r1_2 & 0xf00u) >> 8;  // (from the original)
                    u32 r1_3 = std::bit_cast<u32>(S0_1);
                    r1_1 = gptr<Local_006e7d98_r1_1>(r1_3 >> 4);
                    r0_2->byte_1 = u8(r3_1 & ~0xf0u | r1_3 << 4);  // (from the original)
                    r0_2->byte_2 = u8(r1_1.addr());
                }
            }
        }
    }
    guest::cpu()->r[1] = r1_1.addr();
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return r0_2.addr();
}

}  // namespace d_006e7d98
GUEST_EXPORT_FRAMED(0x006e7d98, d_006e7d98::f_006e7d98, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006e9cf0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006e9cf0 {

struct __attribute__((packed)) Object_006e9cf0_0 {
    u8 unknown_0[0x474];  // (not used here)
    u8 byte_474;
    u8 unknown_475[0x25];  // (not used here)
    u16 half_49a;
    u8 unknown_49c[0x64];  // (not used here)
    u16 half_500;
};
GUEST_OFFSET(Object_006e9cf0_0, byte_474, 0x474);
GUEST_OFFSET(Object_006e9cf0_0, half_49a, 0x49a);
GUEST_OFFSET(Object_006e9cf0_0, half_500, 0x500);

struct __attribute__((packed)) Object_006e9cf0_1 {
    u16 half_0;
};
GUEST_OFFSET(Object_006e9cf0_1, half_0, 0x0);


void f_006e9cf0(gptr<Object_006e9cf0_0> arg0, gptr<Object_006e9cf0_1> arg1) {
    arg0->half_500 = u16(u32(arg1->half_0));
    if (arg0->byte_474 >= 0x1du) {  // (from the original)
        return;
    }
    arg0->half_49a = u16(u32(arg1->half_0));
}

}  // namespace d_006e9cf0
GUEST_EXPORT(0x006e9cf0, d_006e9cf0::f_006e9cf0);

// f_006ea210: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ea210 {

struct __attribute__((packed)) Object_006ea210_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 byte_10;
    u8 unknown_11[0x3];  // (not used here)
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u16 half_20;
    u16 half_22;
    u8 unknown_24[0x4];  // (not used here)
    u32 word_28;
    u8 unknown_2c[0x480];  // (not used here)
    u32 word_4ac;
    u32 word_4b0;
    u32 word_4b4;
    u32 word_4b8;
    u32 word_4bc;
    u32 word_4c0;
    u8 unknown_4c4[0xa];  // (not used here)
    u16 half_4ce;
    u8 byte_4d0;
    u8 unknown_4d1[0xb];  // (not used here)
    u8 byte_4dc;
};
GUEST_OFFSET(Object_006ea210_0, word_4, 0x4);
GUEST_OFFSET(Object_006ea210_0, word_8, 0x8);
GUEST_OFFSET(Object_006ea210_0, word_c, 0xc);
GUEST_OFFSET(Object_006ea210_0, byte_10, 0x10);
GUEST_OFFSET(Object_006ea210_0, word_14, 0x14);
GUEST_OFFSET(Object_006ea210_0, word_18, 0x18);
GUEST_OFFSET(Object_006ea210_0, word_1c, 0x1c);
GUEST_OFFSET(Object_006ea210_0, half_20, 0x20);
GUEST_OFFSET(Object_006ea210_0, half_22, 0x22);
GUEST_OFFSET(Object_006ea210_0, word_28, 0x28);
GUEST_OFFSET(Object_006ea210_0, word_4ac, 0x4ac);
GUEST_OFFSET(Object_006ea210_0, word_4b0, 0x4b0);
GUEST_OFFSET(Object_006ea210_0, word_4b4, 0x4b4);
GUEST_OFFSET(Object_006ea210_0, word_4b8, 0x4b8);
GUEST_OFFSET(Object_006ea210_0, word_4bc, 0x4bc);
GUEST_OFFSET(Object_006ea210_0, word_4c0, 0x4c0);
GUEST_OFFSET(Object_006ea210_0, half_4ce, 0x4ce);
GUEST_OFFSET(Object_006ea210_0, byte_4d0, 0x4d0);
GUEST_OFFSET(Object_006ea210_0, byte_4dc, 0x4dc);

inline constexpr guest::Function<0x006ea9dc, u32(u32, u32, u32, u32)> call_006ea9dc;

u32 f_006ea210(gptr<Object_006ea210_0> arg0) {
    arg0->word_4 = arg0->word_4b8;
    arg0->word_8 = arg0->word_4bc;
    arg0->word_c = arg0->word_4c0;
    arg0->half_20 = u16(u32(*gptr<u16>(arg0->word_28 + 0x2eu)));  // (from the original)
    arg0->half_22 = u16(u32(arg0->half_4ce));
    u32 r2_1 = arg0->word_4b0;
    arg0->word_14 = arg0->word_4ac;
    arg0->word_18 = r2_1;
    arg0->byte_10 = u8(u32(arg0->byte_4d0));
    arg0->word_1c = arg0->word_4b4;
    call_006ea9dc(arg0.addr(), arg0.addr() + 0x4acu, r2_1, arg0.addr() + 0x14u);  // (from the original)
    arg0->byte_4dc = 0;
    return 1u;
}

}  // namespace d_006ea210
GUEST_EXPORT_FRAMED(0x006ea210, d_006ea210::f_006ea210, 0x4010);  // pushes {r4, lr} first, as the original

// f_006ea318: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ea318 {

struct __attribute__((packed)) Object_006ea318_0 {
    u8 unknown_0[0x34];  // (not used here)
    u32 word_34;
    u8 unknown_38[0x3fc];  // (not used here)
    u32 word_434;
};
GUEST_OFFSET(Object_006ea318_0, word_34, 0x34);
GUEST_OFFSET(Object_006ea318_0, word_434, 0x434);

struct __attribute__((packed)) Local_006ea318_r0_2 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_006ea318_r0_2, word_10, 0x10);
GUEST_OFFSET(Local_006ea318_r0_2, word_14, 0x14);

inline constexpr guest::Function<0x0026a418, u32(u32, u32, u32, u32)> call_0026a418;

void f_006ea318(gptr<Object_006ea318_0> arg0, u32 r1_unused, u32 r2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    call_0026a418(arg0.addr() + 0x3cu, arg0->word_434, r2, guest::cpu()->r[3]);  // (from the original)
    u32 r2_1 = guest::cpu()->r[2];
    gptr<Local_006ea318_r0_2> r0_2 = gptr<Local_006ea318_r0_2>(arg0->word_34);
    if (r0_2.addr() == 0) {
        return;
    }
    u32 r1_2 = r0_2->word_10;
    if (r1_2 == 0) {
        r2_1 = r0_2->word_14;
        if ((r2_1 & 1u) == 0 || r2_1 == 0) {
            return;
        }
    }
    u32 r0_3 = r0_2->word_14;
    u32 zf_1 = (r0_3 & 1u) == 0;
    u32 r0_4 = arg0.addr() + u32(s32(r0_3) >> 1);
    if (zf_1) {
        frame.release();
        guest::call_address<u32>(r1_2, r0_4, r1_2, r2_1, guest::cpu()->r[3]);
        return;
    }
    u32 r2_2 = *gptr<u32>(r0_4);
    u32 r1_3 = *gptr<u32>(r2_2 + r1_2);
    frame.release();
    guest::call_address<u32>(r1_3, r0_4, r1_3, r2_2, guest::cpu()->r[3]);
    return;
}

}  // namespace d_006ea318
GUEST_EXPORT(0x006ea318, d_006ea318::f_006ea318);

// f_006ed200: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ed200 {

struct __attribute__((packed)) Object_006ed200_0 {
    u8 unknown_0[0x28];  // (not used here)
    u32 word_28;
    u8 unknown_2c[0x4];  // (not used here)
    u8 byte_30;
    u8 unknown_31[0x477];  // (not used here)
    u8 byte_4a8;
    u8 unknown_4a9[0xf];  // (not used here)
    float float_4b8;
    u8 unknown_4bc[0x4];  // (not used here)
    float float_4c0;
    u8 unknown_4c4[0x19];  // (not used here)
    u8 byte_4dd;
    u8 unknown_4de[0x74];  // (not used here)
    u8 byte_552;
};
GUEST_OFFSET(Object_006ed200_0, word_28, 0x28);
GUEST_OFFSET(Object_006ed200_0, byte_30, 0x30);
GUEST_OFFSET(Object_006ed200_0, byte_4a8, 0x4a8);
GUEST_OFFSET(Object_006ed200_0, float_4b8, 0x4b8);
GUEST_OFFSET(Object_006ed200_0, float_4c0, 0x4c0);
GUEST_OFFSET(Object_006ed200_0, byte_4dd, 0x4dd);
GUEST_OFFSET(Object_006ed200_0, byte_552, 0x552);

struct __attribute__((packed)) Local_006ed200_r0_3 {
    u8 unknown_0[0x7];  // (not used here)
    u8 byte_7;
    u8 byte_8;
};
GUEST_OFFSET(Local_006ed200_r0_3, byte_7, 0x7);
GUEST_OFFSET(Local_006ed200_r0_3, byte_8, 0x8);

struct __attribute__((packed)) Local_006ed200_r0_4 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Local_006ed200_r0_4, byte_0, 0x0);
GUEST_OFFSET(Local_006ed200_r0_4, byte_1, 0x1);
GUEST_OFFSET(Local_006ed200_r0_4, byte_2, 0x2);

inline constexpr guest::Function<0x007523a8, u32(u32, u32)> call_007523a8;

void f_006ed200(gptr<Object_006ed200_0> arg0, u32 r1, float S0, float S1) {
    u32 r0_1 = arg0->word_28;
    u32 r5_2 = (arg0.addr() + 0x400u) + 0xacu;  // (from the original)
    u32 r0_2 = call_007523a8(r0_1, r1);
    u32 r1_1 = guest::cpu()->r[1];
    float S0_1 = guest::cpu()->s[0];
    float S1_1 = guest::cpu()->s[1];
    if (r0_2 != 0 && arg0->byte_4a8 == 0) {
        gptr<Local_006ed200_r0_3> r0_3 = gptr<Local_006ed200_r0_3>(*gptr<u32>(arg0->word_28 + 0xaa0u));  // (from the original)
        if (r0_3.addr() != 0) {
            u32 r2_1 = u32(arg0->byte_30) & 0x3fu | u32(r0_3->byte_7) & ~0x3fu;  // (from the original)
            r0_3->byte_7 = u8(r2_1);
            r0_3->byte_7 = u8(r2_1 & ~0xc0u | u32(arg0->byte_4dd) << 6);  // (from the original)
            u32 r1_2 = u32(r0_3->byte_8) + 1u;
            r0_3->byte_8 = u8(r1_2);
            arg0->byte_552 = u8(r1_2);
            gptr<Local_006ed200_r0_4> r0_4 = gptr<Local_006ed200_r0_4>(r0_3.addr() + 9u);
            S1_1 = arg0->float_4c0;
            u32 r1_3 = vcvt_uz_f(arg0->float_4b8);
            S0_1 = std::bit_cast<float>(vcvt_uz_f(S1_1));
            r0_4->byte_0 = u8(r1_3);
            u32 r2_2 = u32(r0_4->byte_1) & ~0xfu | (r1_3 & 0xf00u) >> 8;  // (from the original)
            u32 r1_4 = std::bit_cast<u32>(S0_1);
            r1_1 = r1_4 >> 4;
            r0_4->byte_1 = u8(r2_2 & ~0xf0u | r1_4 << 4);  // (from the original)
            r0_4->byte_2 = u8(r1_1);
        }
    }
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_006ed200
GUEST_EXPORT_FRAMED(0x006ed200, d_006ed200::f_006ed200, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006ee02c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ee02c {

struct __attribute__((packed)) Object_006ee02c_0 {
    u8 unknown_0[0x474];  // (not used here)
    u8 byte_474;
    u8 unknown_475[0x3];  // (not used here)
    u32 word_478;
    u32 word_47c;
    u8 unknown_480[0x60];  // (not used here)
    u32 word_4e0;
    u32 word_4e4;
};
GUEST_OFFSET(Object_006ee02c_0, byte_474, 0x474);
GUEST_OFFSET(Object_006ee02c_0, word_478, 0x478);
GUEST_OFFSET(Object_006ee02c_0, word_47c, 0x47c);
GUEST_OFFSET(Object_006ee02c_0, word_4e0, 0x4e0);
GUEST_OFFSET(Object_006ee02c_0, word_4e4, 0x4e4);

struct __attribute__((packed)) Object_006ee02c_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_006ee02c_1, word_0, 0x0);
GUEST_OFFSET(Object_006ee02c_1, word_4, 0x4);


void f_006ee02c(gptr<Object_006ee02c_0> arg0, gptr<Object_006ee02c_1> arg1) {
    u32 r3_1 = arg1->word_4;
    arg0->word_4e0 = arg1->word_0;
    arg0->word_4e4 = r3_1;
    if (arg0->byte_474 >= 0x1du) {  // (from the original)
        guest::cpu()->r[1] = arg1.addr();
        return;
    }
    u32 r1_1 = arg1->word_0;
    u32 r2_1 = arg1->word_4;
    arg0->word_478 = r1_1;
    arg0->word_47c = r2_1;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_006ee02c
GUEST_EXPORT(0x006ee02c, d_006ee02c::f_006ee02c);

// f_006ee264: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ee264 {

struct __attribute__((packed)) Local_006ee264_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006ee264_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_006ee264_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_006ee264_r0_11 {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
    float float_10;
    u8 byte_14;
};
GUEST_OFFSET(Local_006ee264_r0_11, float_0, 0x0);
GUEST_OFFSET(Local_006ee264_r0_11, float_4, 0x4);
GUEST_OFFSET(Local_006ee264_r0_11, float_8, 0x8);
GUEST_OFFSET(Local_006ee264_r0_11, float_c, 0xc);
GUEST_OFFSET(Local_006ee264_r0_11, float_10, 0x10);
GUEST_OFFSET(Local_006ee264_r0_11, byte_14, 0x14);

struct __attribute__((packed)) Local_006ee264_r0_4 {
    u8 unknown_0[0x20];  // (not used here)
    u16 half_20;
    u16 half_22;
};
GUEST_OFFSET(Local_006ee264_r0_4, half_20, 0x20);
GUEST_OFFSET(Local_006ee264_r0_4, half_22, 0x22);

struct __attribute__((packed)) Local_006ee264_r0_6 {
    u8 unknown_0[0x20];  // (not used here)
    u16 half_20;
    u16 half_22;
};
GUEST_OFFSET(Local_006ee264_r0_6, half_20, 0x20);
GUEST_OFFSET(Local_006ee264_r0_6, half_22, 0x22);

struct __attribute__((packed)) Local_006ee264_r0_8 {
    u8 unknown_0[0x4dc];  // (not used here)
    u8 byte_4dc;
    u8 byte_4dd;
};
GUEST_OFFSET(Local_006ee264_r0_8, byte_4dc, 0x4dc);
GUEST_OFFSET(Local_006ee264_r0_8, byte_4dd, 0x4dd);

struct __attribute__((packed)) Local_006ee264_r0_9 {
    u8 unknown_0[0x20];  // (not used here)
    u16 half_20;
    u16 half_22;
};
GUEST_OFFSET(Local_006ee264_r0_9, half_20, 0x20);
GUEST_OFFSET(Local_006ee264_r0_9, half_22, 0x22);

struct __attribute__((packed)) Local_006ee264_r1_3 {
    u8 unknown_0[0x528];  // (not used here)
    u32 word_528;
    u32 word_52c;
};
GUEST_OFFSET(Local_006ee264_r1_3, word_528, 0x528);
GUEST_OFFSET(Local_006ee264_r1_3, word_52c, 0x52c);

inline constexpr u32 vtable_EmoticonActionEx_AudioObjNpc_ = 0x008f1904u;
inline constexpr u32 vtable_NpcAction = 0x008f969cu;
inline guest::global<u32, 0x008806bc> global_008806bc;
inline guest::global<u32, 0x008806c0> global_008806c0;
inline constexpr guest::Function<0x00269478, u32(u32, u32, u32, u32)> call_00269478;
inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32)> call_002fc20c;
inline constexpr guest::Function<0x003166a8, u32(u32, u32)> call_003166a8;

u32 f_006ee264(gptr<NpcAction> arg0, u32 r1, float S0_unused, float S1, float S2, float S3, float S4) {
    u32 r14 = 0xae5658u;  // (from the original)
    gptr<Local_006ee264_ea_1> ea_1 = gptr<Local_006ee264_ea_1>(r14);
    u32 r12_1 = ea_1->word_4;
    float S0_1 = std::bit_cast<float>(*gptr<u32>(r14 + 8u));
    arg0->word_4 = ea_1->word_0;
    arg0->word_8 = r12_1;
    arg0->float_c = S0_1;
    arg0->byte_10 = 0;
    float S0_2 = 0.0f;
    u32 r3_1 = *global_008806c0;
    arg0->word_14 = *global_008806bc;
    arg0->word_18 = r3_1;
    arg0->float_1c = S0_2;
    arg0->half_20 = 0;
    arg0->half_22 = 0;
    arg0->half_24 = 0;
    arg0->byte_26 = 0;
    arg0->byte_27 = 0;
    arg0->word_0 = vtable_NpcAction;
    arg0->word_28 = 0;
    arg0->word_2c = 0;
    arg0->byte_30 = 0x1d;  // (from the original)
    arg0->byte_31 = 0x1d;  // (from the original)
    arg0->byte_32 = 0x1d;  // (from the original)
    arg0->word_34 = 0;
    guest::cpu()->s[0] = S0_2;
    u32 r0_2 = call_00269478((arg0.addr() + 0x34u) + 4u, r1, 0x8f969cu, r3_1);  // (from the original)
    *gptr<u32>(r0_2) = vtable_EmoticonActionEx_AudioObjNpc_;
    u32 r0_3 = r0_2 + 0x408u;  // (from the original)
    *gptr<u32>(r0_3) = r1;
    gptr<Local_006ee264_r0_4> r0_4 = gptr<Local_006ee264_r0_4>(r0_3 + 0x38u);  // (from the original)
    r0_4->half_20 = 0;
    r0_4->half_22 = 0;
    u32 r0_5 = r0_4.addr() + 0x28u;  // (from the original)
    call_002fc20c(r0_5, 0x8f1904u, guest::cpu()->r[2]);  // (from the original)
    gptr<Local_006ee264_r0_6> r0_6 = gptr<Local_006ee264_r0_6>(r0_5 + 0xcu);  // (from the original)
    r0_6->half_20 = 0;
    r0_6->half_22 = 0;
    u32 r0_7 = r0_6.addr() + 0x28u;  // (from the original)
    call_002fc20c(r0_7, guest::cpu()->r[1], guest::cpu()->r[2]);
    gptr<Local_006ee264_r0_8> r0_8 = gptr<Local_006ee264_r0_8>(r0_7 - 0x4d4u);  // (from the original)
    r0_8->byte_4dc = 1;
    r0_8->byte_4dd = 0;
    *gptr<u16>(r0_8.addr() + 0x4deu) = 0x276;  // (from the original)
    gptr<Local_006ee264_r0_9> r0_9 = gptr<Local_006ee264_r0_9>(r0_8.addr() + 0x4e0u);  // (from the original)
    r0_9->half_20 = 0;
    r0_9->half_22 = 0;
    u32 r0_10 = r0_9.addr() + 0x28u;  // (from the original)
    call_002fc20c(r0_10, 0x276u, 0x4deu);  // (from the original)
    float S0_6 = 0.82f;
    float S1_4 = 1.42f;
    float S2_4 = 2.0f;
    float S3_4 = 1.25f;
    float S4_4 = 0.8f;
    gptr<Local_006ee264_r0_11> r0_11 = gptr<Local_006ee264_r0_11>(r0_10 + 8u);
    gptr<Local_006ee264_r1_3> r1_3 = gptr<Local_006ee264_r1_3>((r0_10 - 0x400u) - 0x108u);  // (from the original)
    r0_11->float_0 = S0_6;
    r0_11->float_4 = S1_4;
    r0_11->float_8 = S2_4;
    r0_11->float_c = S3_4;
    r0_11->float_10 = S4_4;
    r0_11->byte_14 = 1;
    r1_3->word_528 = 0;
    u32 r0_12 = r1_3.addr() + 0x538u;  // (from the original)
    r1_3->word_52c = 0;
    guest::cpu()->s[0] = S0_6;
    guest::cpu()->s[1] = S1_4;
    call_003166a8(r0_12, r1_3.addr());
    u32 r0_13 = r0_12 - 0x538u;  // (from the original)
    *gptr<u8>(r0_13 + 0x550u) = 0;  // (from the original)
    *gptr<u8>(r0_13 + 0x551u) = 2;  // (from the original)
    *gptr<u8>(r0_13 + 0x554u) = 0;  // (from the original)
    *gptr<u8>(r0_13 + 0x555u) = 0;  // (from the original)
    *gptr<u32>(r0_13 + 0x4acu) = 0;  // (from the original)
    *gptr<u32>(r0_13 + 0x4b0u) = 0;  // (from the original)
    *gptr<u32>(r0_13 + 0x4b4u) = 0;  // (from the original)
    *gptr<u32>(r0_13 + 0x4b8u) = 0;  // (from the original)
    *gptr<u32>(r0_13 + 0x4bcu) = 0;  // (from the original)
    *gptr<u32>(r0_13 + 0x4c0u) = 0;  // (from the original)
    *gptr<u32>(r0_13 + 0x4c4u) = 0;  // (from the original)
    *gptr<u32>(r0_13 + 0x4c8u) = 0;  // (from the original)
    *gptr<u32>(r0_13 + 0x4ccu) = 0;  // (from the original)
    *gptr<u32>(r0_13 + 0x4d0u) = 0;  // (from the original)
    *gptr<u32>(r0_13 + 0x4d4u) = 0;  // (from the original)
    *gptr<u32>(r0_13 + 0x4d8u) = 0;  // (from the original)
    *gptr<u8>(r0_13 + 0x4d8u) = 2;  // (from the original)
    *gptr<u32>(r0_13 + 0x4e0u) = 0;  // (from the original)
    *gptr<u32>(r0_13 + 0x4e4u) = 0;  // (from the original)
    *gptr<u32>(r0_13 + 0x4e8u) = 0;  // (from the original)
    *gptr<u32>(r0_13 + 0x4ecu) = 0;  // (from the original)
    *gptr<u32>(r0_13 + 0x4f0u) = 0;  // (from the original)
    *gptr<u32>(r0_13 + 0x4f4u) = 0;  // (from the original)
    *gptr<u32>(r0_13 + 0x4f8u) = 0;  // (from the original)
    *gptr<u32>(r0_13 + 0x4fcu) = 0;  // (from the original)
    *gptr<u32>(r0_13 + 0x500u) = 0;  // (from the original)
    *gptr<u32>(r0_13 + 0x504u) = 0;  // (from the original)
    *gptr<u32>(r0_13 + 0x508u) = 0;  // (from the original)
    *gptr<u32>(r0_13 + 0x50cu) = 0;  // (from the original)
    *gptr<u8>(r0_13 + 0x50cu) = 2;  // (from the original)
    *gptr<u8>(r0_13 + 0x474u) = 0x1d;  // (from the original)
    *gptr<u8>(r0_13 + 0x475u) = 0;  // (from the original)
    *gptr<u8>(r0_13 + 0x4a8u) = 0;  // (from the original)
    *gptr<u32>(r0_13 + 0x478u) = 0;  // (from the original)
    *gptr<u32>(r0_13 + 0x47cu) = 0;  // (from the original)
    *gptr<u32>(r0_13 + 0x480u) = 0;  // (from the original)
    *gptr<u32>(r0_13 + 0x484u) = 0;  // (from the original)
    *gptr<u32>(r0_13 + 0x488u) = 0;  // (from the original)
    *gptr<u32>(r0_13 + 0x48cu) = 0;  // (from the original)
    *gptr<u32>(r0_13 + 0x490u) = 0;  // (from the original)
    *gptr<u32>(r0_13 + 0x494u) = 0;  // (from the original)
    *gptr<u32>(r0_13 + 0x498u) = 0;  // (from the original)
    *gptr<u32>(r0_13 + 0x49cu) = 0;  // (from the original)
    *gptr<u32>(r0_13 + 0x4a0u) = 0;  // (from the original)
    *gptr<u32>(r0_13 + 0x4a4u) = 0;  // (from the original)
    *gptr<u8>(r0_13 + 0x4a4u) = 2;  // (from the original)
    return r0_13;
}

}  // namespace d_006ee264
GUEST_EXPORT_FRAMED(0x006ee264, d_006ee264::f_006ee264, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006ee4b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ee4b8 {

inline constexpr u32 vtable_NpcAction = 0x008f969cu;
inline constexpr guest::Function<0x002694b8, u32(u32)> call_002694b8;
inline constexpr guest::Function<0x002e6944, u32(u32, u32, u32, u32)> call_002e6944;

u32 f_006ee4b8(gptr<NpcAction> arg0) {
    arg0->word_0 = vtable_NpcAction;
    u32 r0_1 = arg0.addr() + 0x538u;  // (from the original)
    call_002e6944(r0_1, 0x8f969cu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_002694b8(r0_1 - 0x500u);  // (from the original)
    return r0_1 - 0x538u;  // (from the original)
}

}  // namespace d_006ee4b8
GUEST_EXPORT_FRAMED(0x006ee4b8, d_006ee4b8::f_006ee4b8, 0x4010);  // pushes {r4, lr} first, as the original

// f_006eedc8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006eedc8 {

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;

u32 f_006eedc8(u32 r0, u32 r1, u32 r2) {
    u32 res_2 = 0;
    u32 r6 = r0;
    u32 r5 = 0xab7fc0u;  // (from the original)
    if (*gptr<u32>(r5 + 0xd0u) != 0) {  // (from the original)
        u32 r3 = *gptr<u32>(r5 + 0xd0u);  // (from the original)
        r0 = 0u;
        u32 r4 = *gptr<u8>(r3 + r2 + 2u);
        u32 ea_3 = *gptr<u32>(r5 + 0xd0u);  // (from the original)
        u32 r7 = r4 << 3;
        u32 r8 = u32(*gptr<u16>(ea_3)) + 2u;
        if (r2 != 0) {
            r3 += 1u;
            if ((r2 & 1u) != 0) {
                u32 ea_4 = r3 + 1u;
                r3 = ea_4;
                r0 = *gptr<u8>(ea_4);
            }
            u32 res_1 = r2 >> 1;
            r2 = res_1;
            u32 r12 = 0u;
            if (res_1 != 0) {
                do {
                    u32 r9_1 = *gptr<u8>(r3 + 1u);
                    u32 ea_6 = r3 + 2u;
                    r3 = ea_6;
                    u32 r10_1 = *gptr<u8>(ea_6);
                    res_2 = r2 - 1u;
                    r2 = res_2;
                    r0 += r9_1;
                    r12 += r10_1;
                    guest::preempt();
                } while (res_2 != 0);
            }
            r0 += r12;
        }
        if (r1 >= r4 << 3) {
            call_002f8574(r6, *gptr<u32>(r5 + 0xd0u) + (r8 + (r0 << 3)), r7, r3);  // (from the original)
            return r4;
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_006eedc8
GUEST_EXPORT_FRAMED(0x006eedc8, d_006eedc8::f_006eedc8, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_006eeef4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006eeef4 {

inline guest::global<u32, 0x00957318> global_00957318;
inline guest::global<u32, 0x00ac1850> global_00ac1850;

void f_006eeef4() {
    u32 res_1 = 0;
    u32 res_2 = 0;
    u32 r1 = 0xabe1a4u;  // (from the original)
    u32 r2 = 0u;
    u32 r3 = 0x63u;  // (from the original)
    u32 r0 = r1 + 0x84u;  // (from the original)
    u32 r12 = 8u;
    do {
        u32 r4_1 = (r2 << 3) - r2;
        res_1 = r3 - 1u;
        r3 = res_1;
        r2 += 1u;
        u32 r4_2 = r1 + (r4_1 + (r4_1 << 2) << 2);
        *gptr<u32>(r4_2 + 0x88u) = r4_2 + 0x8cu;  // (from the original)
        *gptr<u8>(r0) = u8(r12);
        r0 += 0x8cu;  // (from the original)
        guest::preempt();
    } while (res_1 != 0);
    r2 = 0u;
    *global_00ac1850 = r2;
    *gptr<u8>(0xac184cu) = u8(r12);  // (from the original)
    r12 = 0xac1854u;  // (from the original)
    r0 = r2;
    r3 = 0x1bu;  // (from the original)
    u32 r4 = r12 + 0x6cu;  // (from the original)
    do {
        *gptr<u32>(r12 + (r0 << 2)) = r2;
        *gptr<u32>(r4 + (r0 << 2)) = r2;
        res_2 = r3 - 1u;
        r3 = res_2;
        r0 += 1u;
        guest::preempt();
    } while (res_2 != 0);
    *global_00957318 = r1;
}

}  // namespace d_006eeef4
GUEST_EXPORT_FRAMED(0x006eeef4, d_006eeef4::f_006eeef4, 0x30);  // pushes {r4, r5} first, as the original

// f_006ef0a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ef0a0 {

struct __attribute__((packed)) Object_006ef0a0_0 {
    u8 unknown_0[0x84];  // (not used here)
    u8 byte_84;
    u8 byte_85;
    u8 unknown_86[0x2];  // (not used here)
    u32 word_88;
};
GUEST_OFFSET(Object_006ef0a0_0, byte_84, 0x84);
GUEST_OFFSET(Object_006ef0a0_0, byte_85, 0x85);
GUEST_OFFSET(Object_006ef0a0_0, word_88, 0x88);

inline constexpr guest::Function<0x0028f7fc, u32(u32, u32)> call_0028f7fc;

u32 f_006ef0a0(gptr<Object_006ef0a0_0> arg0) {
    u32 r1_1 = arg0->byte_84;
    if ((r1_1 & 0x10u) != 0 || arg0->byte_85 >= 0x1bu) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return arg0.addr();
    }
    arg0->byte_84 = u8(r1_1 | 0x10u);  // (from the original)
    u32 r3_1 = arg0->byte_85;
    arg0->word_88 = gptr<u32>(0xac1854u)[r3_1];  // (from the original)
    *gptr<u32>((r3_1 << 2) + 0xac1854u) = arg0.addr();  // (from the original)
    u32 r2_1 = arg0->byte_85;
    if (gptr<u32>(0xac18c0u)[r2_1] == 0) {  // (from the original)
        *gptr<u32>((r2_1 << 2) + 0xac18c0u) = arg0.addr();  // (from the original)
    }
    u32 r1_2 = arg0->byte_84;
    if ((r1_2 & 1u) == 0 || (r1_2 & 0x20u) != 0) {  // (from the original)
        guest::cpu()->r[1] = r1_2;
        return arg0.addr();
    }
    return call_0028f7fc(arg0.addr(), r1_2);
}

}  // namespace d_006ef0a0
GUEST_EXPORT(0x006ef0a0, d_006ef0a0::f_006ef0a0);

// f_006ef39c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ef39c {

struct __attribute__((packed)) Local_006ef39c_r4_1 {
    u8 unknown_0[0x7c];  // (not used here)
    float float_7c;
    u8 unknown_80[0x4];  // (not used here)
    u8 byte_84;
    u8 byte_85;
    u8 unknown_86[0x2];  // (not used here)
    u32 word_88;
};
GUEST_OFFSET(Local_006ef39c_r4_1, float_7c, 0x7c);
GUEST_OFFSET(Local_006ef39c_r4_1, byte_84, 0x84);
GUEST_OFFSET(Local_006ef39c_r4_1, byte_85, 0x85);
GUEST_OFFSET(Local_006ef39c_r4_1, word_88, 0x88);

inline guest::global<u32, 0x00957318> global_00957318;
inline constexpr guest::Function<0x0028f7fc, u32(u32, u32)> call_0028f7fc;
inline constexpr guest::Function<0x006ef4d8, u32(u32, u32, u32, u32)> call_006ef4d8;

struct __attribute__((packed)) Frame_006ef39c {
    u32 word_0;
    float float_4;
    u8 unknown_8[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006ef39c, word_0, 0x0);
GUEST_OFFSET(Frame_006ef39c, float_4, 0x4);
GUEST_SIZE(Frame_006ef39c, 0x10);

u32 f_006ef39c(u32 r0, u32 r1, u32 r2, u32 r3, float S0_unused, float S1_unused, float S2_unused, float S3) {
    guest::StackFrameOf<Frame_006ef39c> frame;  // the original's stack frame
    u32 fpsr = guest::cpu()->fpscr;
    gptr<Local_006ef39c_r4_1> r4_1 = gptr<Local_006ef39c_r4_1>(*global_00957318);
    float S6_1 = std::bit_cast<float>(*frame.at<u32>(0x10));  // (from the original)
    if (r4_1.addr() == 0) {
        return r0;
    }
    float S5_1 = 1.0f;
    *global_00957318 = r4_1->word_88;
    float S4_1 = 0.0f;
    u32 fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S3, S4_1);  // (from the original)
    if (fpsr_1 >> 0x1d & 1) {  // (from the original)
        u32 fpsr_2 = fpsr_1 & 0xfffffffu | vfp_cmpf(S3, S5_1);  // (from the original)
        if (!(fpsr_2 >> 0x1e & 1) && fpsr_2 >> 0x1f == (fpsr_2 >> 0x1c & 1)) {  // (from the original)
            S3 = S5_1;
        }
    } else {
        S3 = S4_1;
    }
    r4_1->float_7c = S3;
    frame->word_0 = r3;
    frame->float_4 = S6_1;
    call_006ef4d8(r4_1.addr(), r0, r1, r2);
    u32 r1_1 = r4_1->byte_84;
    if ((r1_1 & 0x10u) != 0 || r4_1->byte_85 >= 0x1bu) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r4_1.addr();
    }
    r4_1->byte_84 = u8(r1_1 | 0x10u);  // (from the original)
    r4_1->word_88 = gptr<u32>(0xac1854u)[u32(r4_1->byte_85)];  // (from the original)
    *gptr<u32>((u32(r4_1->byte_85) << 2) + 0xac1854u) = r4_1.addr();  // (from the original)
    u32 r2_1 = r4_1->byte_85;
    if (gptr<u32>(0xac18c0u)[r2_1] == 0) {  // (from the original)
        *gptr<u32>((r2_1 << 2) + 0xac18c0u) = r4_1.addr();  // (from the original)
    }
    u32 r1_2 = r4_1->byte_84;
    if ((r1_2 & 1u) == 0 || (r1_2 & 0x20u) != 0) {  // (from the original)
        guest::cpu()->r[1] = r1_2;
        return r4_1.addr();
    }
    frame.release();
    return call_0028f7fc(r4_1.addr(), r1_2);
}

}  // namespace d_006ef39c
GUEST_EXPORT(0x006ef39c, d_006ef39c::f_006ef39c);

// f_006ef48c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ef48c {

struct __attribute__((packed)) Local_006ef48c_r0_1 {
    u8 unknown_0[0x38];  // (not used here)
    float float_38;
    u8 unknown_3c[0x40];  // (not used here)
    float float_7c;
    u8 unknown_80[0x2];  // (not used here)
    u16 half_82;
    u8 byte_84;
};
GUEST_OFFSET(Local_006ef48c_r0_1, float_38, 0x38);
GUEST_OFFSET(Local_006ef48c_r0_1, float_7c, 0x7c);
GUEST_OFFSET(Local_006ef48c_r0_1, half_82, 0x82);
GUEST_OFFSET(Local_006ef48c_r0_1, byte_84, 0x84);

inline guest::global<u32, 0x00957318> global_00957318;

u32 f_006ef48c(float S0) {
    gptr<Local_006ef48c_r0_1> r0_1 = gptr<Local_006ef48c_r0_1>(*global_00957318);
    if (r0_1.addr() == 0) {
        guest::cpu()->r[1] = 0x957318u;  // (from the original)
        return r0_1.addr();
    }
    float S0_1 = 1.0f;
    r0_1->byte_84 = u8(u32(r0_1->byte_84) & ~0x20u | 5u);  // (from the original)
    *global_00957318 = *gptr<u32>(*global_00957318 + 0x88u);  // (from the original)
    r0_1->half_82 = u16(~0u);
    r0_1->float_7c = S0_1;
    r0_1->float_38 = S0_1;
    guest::cpu()->r[1] = 0x957318u;  // (from the original)
    guest::cpu()->s[0] = S0_1;
    return r0_1.addr();
}

}  // namespace d_006ef48c
GUEST_EXPORT(0x006ef48c, d_006ef48c::f_006ef48c);

// f_006ef61c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ef61c {

struct __attribute__((packed)) Object_006ef61c_0 {
    u8 unknown_0[0x84];  // (not used here)
    u8 byte_84;
    u8 unknown_85[0x3];  // (not used here)
    u32 word_88;
};
GUEST_OFFSET(Object_006ef61c_0, byte_84, 0x84);
GUEST_OFFSET(Object_006ef61c_0, word_88, 0x88);

inline guest::global<u32, 0x00957318> global_00957318;

void f_006ef61c(gptr<Object_006ef61c_0> arg0, u32 r1) {
    if (arg0.addr() == 0) {
        return;
    }
    u32 r1_1 = arg0->byte_84;
    u32 r2_1 = r1_1 & ~0x24u;  // (from the original)
    arg0->byte_84 = u8(r2_1);
    if ((r2_1 & 0x10u) != 0) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return;
    }
    arg0->word_88 = *global_00957318;
    *global_00957318 = arg0.addr();
    guest::cpu()->r[1] = 0x957318u;  // (from the original)
}

}  // namespace d_006ef61c
GUEST_EXPORT(0x006ef61c, d_006ef61c::f_006ef61c);

// f_006ef650: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ef650 {


u32 f_006ef650(u32 r0_unused, u32 r1) {
    u32 r0 = 0;
    u32 r3 = 0u;
    u32 r6 = r3;
    u32 r5 = 0xac18c0u;  // (from the original)
    u32 r4 = 0x957318u;  // (from the original)
    u32 r7 = r5 - 0x6cu;  // (from the original)
    do {
        r0 = gptr<u32>(r5)[r3];
        u32 zf_1 = r0 == 0;
        if (!zf_1) {
            r0 = gptr<u32>(r7)[r3];
            zf_1 = r0 == 0;
        }
        if (!zf_1) {
            do {
                u32 r12_1 = r0 + 0x84u;  // (from the original)
                u32 r1_1 = *gptr<u8>(r0 + 0x84u);  // (from the original)
                u32 r2_1 = r0;
                r0 = *gptr<u32>(r0 + 0x88u);  // (from the original)
                r1 = r1_1 & ~0x30u;  // (from the original)
                *gptr<u8>(r12_1) = u8(r1);
                if ((r1 & 8u) != 0 && (r1 & 4u) == 0) {
                    r1 = *gptr<u32>(r4);
                    *gptr<u32>(r2_1 + 0x88u) = r1;  // (from the original)
                    *gptr<u32>(r4) = r2_1;
                }
                guest::preempt();
            } while (r0 != 0);
        }
        *gptr<u32>(r7 + (r3 << 2)) = r6;
        *gptr<u32>(r5 + (r3 << 2)) = r6;
        r3 += 1u;
        guest::preempt();
    } while (s32(r3) < 0x1b);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006ef650
GUEST_EXPORT_FRAMED(0x006ef650, d_006ef650::f_006ef650, 0x1f0);  // pushes {r4, r5, r6, r7, r8} first, as the original

// f_006ef8e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ef8e8 {

struct __attribute__((packed)) Object_006ef8e8_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_006ef8e8_0, word_4, 0x4);

inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> call_002fcbb0;
inline constexpr guest::Function<0x005359fc, u32(u32, u32, u32, u32)> call_005359fc;
inline constexpr guest::Function<0x006b9b30, u32(u32, u32)> call_006b9b30;
inline constexpr guest::Function<0x006bbd54, u32(u32, u32, u32, u32)> call_006bbd54;
inline constexpr guest::Function<0x00768248, u32(u32, u32, u32, u32)> call_00768248;
inline constexpr guest::Function<0x00768da0, u32(u32)> call_00768da0;

void f_006ef8e8(gptr<Object_006ef8e8_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r6_1 = 0;
    u32 r5 = r1;
    u32 r4 = ~0u;
    u32 r10 = r0;
    u32 r6 = 0x6edu;  // (from the original)
    r1 = 1u;
    arg0->word_4 = r4;
    u32 r8 = r2;
    u32 r11 = r3;
    r0 = r1;
    do {
        r2_1 = r10 + (r1 << 2);
        u32 r1_1 = r1 + 1u;
        r0 += 2u;
        r3_1 = r10 + (r1_1 << 2);
        *gptr<u32>(r2_1 + 4u) = r4;
        r1 = r1_1 + 1u;
        *gptr<u32>(r3_1 + 4u) = r4;
        guest::preempt();
    } while (r0 < r6);
    *gptr<u8>(r10) = 0x9b;  // (from the original)
    u32 r9 = 0u;
    u32 r0_1 = call_005359fc(r8, r1, r2_1, r3_1);
    u32 r1_2 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    u32 r7 = *gptr<u32>(r0_1 + 4u);
    if (r7 > r6) {
        r0 = 1u;
        r1 = r0;
        *gptr<u32>(r10 + 4u) = r4;
        do {
            u32 r0_2 = r0 + 1u;
            r1 += 2u;
            *gptr<u32>((r10 + (r0 << 2)) + 4u) = r4;
            r0 = r0_2 + 1u;
            *gptr<u32>((r10 + (r0_2 << 2)) + 4u) = r4;
            guest::preempt();
        } while (r1 < r6);
        *gptr<u8>(r10) = 0x9b;  // (from the original)
        guest::cpu()->r[1] = r1;
        return;
    }
    r4 = 0u;
    if (r7 >= 0u && r7 != 0) {
        do {
            call_006bbd54(frame.at(0).addr(), r8, r4, r3);
            u32 r0_4 = call_006b9b30(r8, r4);
            call_002fcbb0(frame.at(4).addr(), r0_4);
            u32 r0_7 = call_00768da0(frame.at(4).addr());
            r1_2 = guest::cpu()->r[1];
            r3 = guest::cpu()->r[3];
            if (s32(r0_7) >= 0) {
                r1_2 = s32(r0_7) >> 5;
                if (r1_2 < 0xbau) {  // (from the original)
                    r1_2 = gptr<u32>(r5)[r1_2];
                    r6_1 = (r1_2 >> (r0_7 & 0x1fu)) & 1u;  // (from the original)
                    goto L_6efa0c;
                }
            }
            r6_1 = 0u;
L_6efa0c:;
            if (r6_1 != 0) {
                u32 r0_10 = call_00768248(frame.at(0).addr(), r1_2, guest::cpu()->r[2], r3);
                r1_2 = guest::cpu()->r[1];
                r3 = guest::cpu()->r[3];
                if (r0_10 == r11) {
                    u32 r0_11 = r10 + (r9 << 2);
                    r9 += 1u;
                    *gptr<u32>(r0_11 + 4u) = r4;
                }
            }
            r4 += 1u;
            guest::preempt();
        } while (r7 > r4);
    }
    *gptr<u8>(r10) = u8(r8);
    guest::cpu()->r[1] = r1_2;
}

}  // namespace d_006ef8e8
GUEST_EXPORT_FRAMED(0x006ef8e8, d_006ef8e8::f_006ef8e8, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_006efa68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006efa68 {

struct __attribute__((packed)) Object_006efa68_0 {
    u8 byte_0;
    u8 unknown_1[0x3];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_006efa68_0, byte_0, 0x0);
GUEST_OFFSET(Object_006efa68_0, word_4, 0x4);


void f_006efa68(gptr<Object_006efa68_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r12 = 0x6edu;  // (from the original)
    u32 r1 = ~0u;
    u32 r3 = 1u;
    u32 r2 = r3;
    arg0->word_4 = r1;
    do {
        u32 r3_1 = r3 + 1u;
        r2 += 2u;
        *gptr<u32>((r0 + (r3 << 2)) + 4u) = r1;
        r3 = r3_1 + 1u;
        *gptr<u32>((r0 + (r3_1 << 2)) + 4u) = r1;
        guest::preempt();
    } while (r2 < r12);
    arg0->byte_0 = 0x9b;  // (from the original)
    guest::cpu()->r[1] = 0x9bu;  // (from the original)
}

}  // namespace d_006efa68
GUEST_EXPORT_FRAMED(0x006efa68, d_006efa68::f_006efa68, 0x30);  // pushes {r4, r5} first, as the original

// f_006efab8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006efab8 {

struct __attribute__((packed)) Object_006efab8_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_006efab8_0, byte_0, 0x0);

struct __attribute__((packed)) Local_006efab8_r5_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Local_006efab8_r5_1, word_4, 0x4);

inline constexpr guest::Function<0x0013fac4, u32(u32, u32, u32, u32)> call_0013fac4;
inline constexpr guest::Function<0x005359fc, u32(u32)> call_005359fc;
inline constexpr guest::Function<0x006bbd54, u32(u32, u32, u32, u32)> call_006bbd54;
inline constexpr guest::Function<0x00768248, u32(u32)> call_00768248;

void f_006efab8(gptr<Object_006efab8_0> arg0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x1bc4);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r8 = guest::cpu()->r[8];
    u32 r12 = guest::cpu()->r[12];
    u32 res_1 = 0;
    *frame.at<u32>(0x1be0) = r12;  // (from the original)
    u32 r6 = r0;
    u32 r9 = r1;
    u32 r4_1 = arg0->byte_0;
    if (r4_1 != 0x9bu) {  // (from the original)
        u32 r11 = frame.at(0).addr();
        call_0013fac4(r11, 0x1bb4u, ~0u, r3);  // (from the original)
        u32 r7 = 0u;
        u32 r0_1 = call_005359fc(r4_1);
        r3 = guest::cpu()->r[3];
        r0 = r6 + 4u;
        r1 = (r6 + (*gptr<u32>(r0_1 + 4u) << 2)) + 4u;
        if (r1 > r0) {
            do {
                if (*gptr<u32>(r0) + 1u == 0) {
                    break;
                }
                r0 += 4u;
                r7 += 1u;
                guest::preempt();
            } while (r1 > r0);
        }
        if (r7 >= 0u && r7 != 0) {
            r8 = frame.at(0x1800).addr();  // (from the original)
        }
        u32 r4 = 0u;
        if (r7 >= 0u && r7 != 0) {
            u32 r10 = ~0u;
            r8 += 0x3b4u;  // (from the original)
            do {
                gptr<Local_006efab8_r5_1> r5_1 = gptr<Local_006efab8_r5_1>(r6 + (r4 << 2));
                u32 r1_3 = *gptr<u8>(r6);
                call_006bbd54(r8, r1_3, r5_1->word_4, r3);
                u32 r0_2 = call_00768248(r8);
                r3 = guest::cpu()->r[3];
                if (r0_2 == r9) {
                    r5_1->word_4 = r10;
                }
                *gptr<u32>(r11 + (r4 << 2)) = r5_1->word_4;
                r5_1->word_4 = r10;
                r4 += 1u;
                guest::preempt();
            } while (r4 < r7);
        }
        r1 = 0x6edu;  // (from the original)
        r0 = 0u;
        do {
            u32 r2_5 = *gptr<u32>(r11);
            if (r2_5 + 1u != 0) {
                u32 r3_3 = r6 + (r0 << 2);
                r0 += 1u;
                *gptr<u32>(r3_3 + 4u) = r2_5;
            }
            res_1 = r1 - 1u;
            r1 = res_1;
            r11 += 4u;
            guest::preempt();
        } while (res_1 != 0);
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_006efab8
GUEST_EXPORT_FRAMED(0x006efab8, d_006efab8::f_006efab8, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_006efbe8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006efbe8 {

struct __attribute__((packed)) Object_006efbe8_0 {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
    u8 byte_9;
};
GUEST_OFFSET(Object_006efbe8_0, word_0, 0x0);
GUEST_OFFSET(Object_006efbe8_0, word_4, 0x4);
GUEST_OFFSET(Object_006efbe8_0, byte_8, 0x8);
GUEST_OFFSET(Object_006efbe8_0, byte_9, 0x9);


void f_006efbe8(gptr<Object_006efbe8_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r1_1 = *gptr<u32>(guest::cpu()->r[13] + 4u);
    arg0->byte_8 = u8(u32(arg0->byte_8) | 1u);
    if ((arg0->word_0 ^ r2 | arg0->word_4 ^ r3) == 0) {
        guest::cpu()->r[1] = r1_1;
        return;
    }
    arg0->word_0 = r2;
    arg0->word_4 = r3;
    if (r1_1 != 0) {
        r1_1 = 0u;
        arg0->byte_9 = u8(r1_1);
    }
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_006efbe8
GUEST_EXPORT_FRAMED(0x006efbe8, d_006efbe8::f_006efbe8, 0x10);  // pushes {r4} first, as the original

// f_006efc2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006efc2c {

struct __attribute__((packed)) Object_006efc2c_0 {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
    u8 byte_9;
};
GUEST_OFFSET(Object_006efc2c_0, word_0, 0x0);
GUEST_OFFSET(Object_006efc2c_0, word_4, 0x4);
GUEST_OFFSET(Object_006efc2c_0, byte_8, 0x8);
GUEST_OFFSET(Object_006efc2c_0, byte_9, 0x9);

struct __attribute__((packed)) Object_006efc2c_1 {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
    u8 byte_9;
};
GUEST_OFFSET(Object_006efc2c_1, word_0, 0x0);
GUEST_OFFSET(Object_006efc2c_1, word_4, 0x4);
GUEST_OFFSET(Object_006efc2c_1, byte_8, 0x8);
GUEST_OFFSET(Object_006efc2c_1, byte_9, 0x9);


void f_006efc2c(gptr<Object_006efc2c_0> arg0, gptr<Object_006efc2c_1> arg1) {
    u32 r3_1 = arg1->word_4;
    arg0->word_0 = arg1->word_0;
    arg0->word_4 = r3_1;
    arg0->byte_9 = u8(u32(arg1->byte_9));
    u32 r1_1 = arg1->byte_8;
    arg0->byte_8 = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_006efc2c
GUEST_EXPORT(0x006efc2c, d_006efc2c::f_006efc2c);

// f_006efcdc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006efcdc {

struct __attribute__((packed)) Object_006efcdc_0 {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
    u8 byte_9;
};
GUEST_OFFSET(Object_006efcdc_0, word_0, 0x0);
GUEST_OFFSET(Object_006efcdc_0, word_4, 0x4);
GUEST_OFFSET(Object_006efcdc_0, byte_8, 0x8);
GUEST_OFFSET(Object_006efcdc_0, byte_9, 0x9);


void f_006efcdc(gptr<Object_006efcdc_0> arg0) {
    arg0->word_0 = 0;
    arg0->word_4 = 0;
    arg0->byte_9 = 0;
    arg0->byte_8 = 0;
}

}  // namespace d_006efcdc
GUEST_EXPORT(0x006efcdc, d_006efcdc::f_006efcdc);

// f_006efd24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006efd24 {

struct __attribute__((packed)) Object_006efd24_0 {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
    u8 byte_9;
};
GUEST_OFFSET(Object_006efd24_0, word_0, 0x0);
GUEST_OFFSET(Object_006efd24_0, word_4, 0x4);
GUEST_OFFSET(Object_006efd24_0, byte_8, 0x8);
GUEST_OFFSET(Object_006efd24_0, byte_9, 0x9);


void f_006efd24(gptr<Object_006efd24_0> arg0) {
    arg0->word_0 = 0;
    arg0->word_4 = 0;
    arg0->byte_9 = 0;
    arg0->byte_8 = 0;
}

}  // namespace d_006efd24
GUEST_EXPORT(0x006efd24, d_006efd24::f_006efd24);

// f_006efd40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006efd40 {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> call_002fc8e8;
inline constexpr guest::Function<0x0057bc2c, u32(u32, u32, u32, u32)> call_0057bc2c;

u32 f_006efd40(u32 r0) {
    u32 r0_1 = 0;
    u32 r5 = 0u;
    u32 r8 = r0;
    do {
        u32 r4 = 0u;
        u32 r7 = r8 + (r5 << 6);
        do {
            r0_1 = call_0057bc2c(r4, r5, guest::cpu()->r[2], guest::cpu()->r[3]);
            if (r0_1 != 0) {
                r0_1 = call_002fc8e8(r7 + (r4 << 2), 0x95bfd2u);  // (from the original)
            }
            r4 += 1u;
            guest::preempt();
        } while (r4 < 0x10u);  // (from the original)
        r5 += 1u;
        guest::preempt();
    } while (r5 < 0x10u);  // (from the original)
    return r0_1;
}

}  // namespace d_006efd40
GUEST_EXPORT_FRAMED(0x006efd40, d_006efd40::f_006efd40, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_006efd9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006efd9c {

inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;

u32 f_006efd9c() {
    return call_00301d0c(guest::cpu()->r[0], 0x2fc20cu, 4u, 0x100u);  // (from the original)
}

}  // namespace d_006efd9c
GUEST_EXPORT(0x006efd9c, d_006efd9c::f_006efd9c);

// f_006efdb0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006efdb0 {

inline constexpr guest::Function<0x006f0450, u32(u32, u32, u32, u32)> call_006f0450;

u32 f_006efdb0(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r0_2 = 0;
    u32 r0_1 = call_006f0450(r0, 0xeu, guest::cpu()->r[2], r3);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 >= 0xau) {  // (from the original)
        r0_2 = 3u;
    } else {
        u32 r0_3 = call_006f0450(r0, 0xcu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        u32 r0_4 = call_006f0450(r0, 8u, guest::cpu()->r[2], r0_3);
        r1_1 = guest::cpu()->r[1];
        u32 r3_2 = guest::cpu()->r[3];
        u32 cf_1 = r3_2 >= 0xfu;  // (from the original)
        if (cf_1) {
            cf_1 = r0_4 >= 0xau;  // (from the original)
        }
        if (cf_1) {
            r0_2 = 4u;
        } else if (r3_2 >= 0x14u) {  // (from the original)
            r0_2 = 5u;
        } else if (r0_4 >= 0x14u) {  // (from the original)
            r0_2 = 6u;
        } else {
            u32 r0_5 = call_006f0450(r0, 5u, guest::cpu()->r[2], r3_2);
            r1_1 = guest::cpu()->r[1];
            if (r0_5 >= 0x14u) {  // (from the original)
                r0_2 = 7u;
            } else {
                u32 r0_6 = call_006f0450(r0, 0xbu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                r1_1 = guest::cpu()->r[1];
                if (r0_6 >= 0x96u) {  // (from the original)
                    r0_2 = 8u;
                } else {
                    u32 r0_7 = call_006f0450(r0, 0x11u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                    r1_1 = guest::cpu()->r[1];
                    if (r0_7 >= 0xau) {  // (from the original)
                        r0_2 = 9u;
                    } else {
                        u32 r0_8 = call_006f0450(r0, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
                        u32 r0_9 = call_006f0450(r0, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
                        r1_1 = guest::cpu()->r[1];
                        u32 cf_2 = r0_8 >= 0x46u;  // (from the original)
                        if (cf_2) {
                            cf_2 = r0_9 >= 0x46u;  // (from the original)
                        }
                        if (cf_2) {
                            r0_2 = 0xau;  // (from the original)
                        } else {
                            u32 r0_10 = call_006f0450(r0, 2u, guest::cpu()->r[2], guest::cpu()->r[3]);
                            r1_1 = guest::cpu()->r[1];
                            if (r0_10 >= 0x32u) {  // (from the original)
                                r0_2 = 0xbu;  // (from the original)
                            } else if (r0_8 >= 0x64u) {  // (from the original)
                                r0_2 = 0xcu;  // (from the original)
                            } else if (r0_9 >= 0x64u) {  // (from the original)
                                r0_2 = 0xdu;  // (from the original)
                            } else {
                                u32 r0_11 = call_006f0450(r0, 6u, guest::cpu()->r[2], guest::cpu()->r[3]);
                                u32 r0_12 = call_006f0450(r0, 7u, guest::cpu()->r[2], guest::cpu()->r[3]);
                                r1_1 = 0xc350u;  // (from the original)
                                u32 cf_3 = r0_11 >= r1_1;
                                if (cf_3) {
                                    r1_1 <<= 2;
                                    cf_3 = r0_12 >= r1_1;
                                }
                                if (cf_3) {
                                    r0_2 = 0xeu;  // (from the original)
                                } else {
                                    r1_1 = 0x186a0u;  // (from the original)
                                    if (r0_11 >= r1_1) {
                                        r0_2 = 0xfu;  // (from the original)
                                    } else {
                                        r1_1 = 0x493e0u;  // (from the original)
                                        if (r0_12 >= r1_1) {
                                            r0_2 = 0x10u;  // (from the original)
                                        } else {
                                            u32 r0_13 = call_006f0450(r0, 0xdu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                                            r1_1 = guest::cpu()->r[1];
                                            if (r0_13 >= 0x32u) {  // (from the original)
                                                r0_2 = 0x11u;  // (from the original)
                                            } else {
                                                u32 r0_14 = call_006f0450(r0, 3u, guest::cpu()->r[2], guest::cpu()->r[3]);
                                                u32 r0_15 = call_006f0450(r0, 4u, guest::cpu()->r[2], guest::cpu()->r[3]);
                                                r1_1 = guest::cpu()->r[1];
                                                if (r0_14 >= 0xau && r0_15 >= 0xfu) {  // (from the original)
                                                    r0_2 = 0x12u;  // (from the original)
                                                } else {
                                                    u32 r0_16 = call_006f0450(r0, 9u, guest::cpu()->r[2], guest::cpu()->r[3]);
                                                    u32 r0_17 = call_006f0450(r0, 0xau, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                                                    r1_1 = guest::cpu()->r[1];
                                                    if (r0_16 >= 0x1eu && r0_17 >= 0xau) {  // (from the original)
                                                        r0_2 = 0x13u;  // (from the original)
                                                    } else if (r0_16 >= 0x32u) {  // (from the original)
                                                        r0_2 = 0x14u;  // (from the original)
                                                    } else if (r0_8 >= 0x46u) {  // (from the original)
                                                        r0_2 = 0x15u;  // (from the original)
                                                    } else if (r0_9 >= 0x46u) {  // (from the original)
                                                        r0_2 = 0x16u;  // (from the original)
                                                    } else if (r0_10 >= 0x1eu) {  // (from the original)
                                                        r0_2 = 0x17u;  // (from the original)
                                                    } else if (0x1388u >= r0_11) {  // (from the original)
                                                        r0_2 = 0x18u;  // (from the original)
                                                    } else if (r0_6 >= 0x64u) {  // (from the original)
                                                        r0_2 = 0x19u;  // (from the original)
                                                    } else {
                                                        u32 r0_18 = call_006f0450(r0, 0xfu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                                                        r1_1 = guest::cpu()->r[1];
                                                        if (r0_18 >= 0xfu) {  // (from the original)
                                                            r0_2 = 0x1au;  // (from the original)
                                                        } else {
                                                            u32 r0_19 = call_006f0450(r0, 0x10u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                                                            r1_1 = guest::cpu()->r[1];
                                                            r0_2 = r0_19 >= 0x384u ? 0x1bu : (guest::cpu()->r[3] | r0_4) == 0 ? 0x1cu : 0x31u;  // (from the original)
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_006efdb0
GUEST_EXPORT_FRAMED(0x006efdb0, d_006efdb0::f_006efdb0, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original
