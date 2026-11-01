// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_00200a6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00200a6c {

inline constexpr guest::Function<0x0056a974, u32(u32, u32, u32, u32)> call_0056a974;  // (from the original)

u32 f_00200a6c(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 zf_1 = r1 == 0;
    if (!zf_1) {
        zf_1 = r2 == 0;
    }
    if (zf_1) {
        guest::cpu()->r[1] = r1;
        return 1u;
    }
    *frame.at<u32>(4) = r1;
    *frame.at<u32>(0) = 0x9047f8;  // (from the original)
    u32 r0_1 = call_0056a974(r0, frame.at(0).addr(), r2, 0u);
    return r0_1;
}

}  // namespace d_00200a6c
GUEST_EXPORT_FRAMED(0x00200a6c, d_00200a6c::f_00200a6c, 0x4000);  // pushes {lr} first, as the original

// f_00200ab0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00200ab0 {

inline constexpr guest::Function<0x00138744, u32(u32, u32, u32, u32)> call_00138744;  // (from the original)

void f_00200ab0() {
    call_00138744(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00200ab0
GUEST_EXPORT(0x00200ab0, d_00200ab0::f_00200ab0);

// f_00200ab4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00200ab4 {

struct __attribute__((packed)) Object_00200ab4_0 {
    u8 unknown_0[0xd0];  // (not used here)
    u32 word_d0;
};
GUEST_OFFSET(Object_00200ab4_0, word_d0, 0xd0);  // (from the original)

inline constexpr guest::Function<0x00134544, u32(u32, u32, u32, u32)> call_00134544;  // (from the original)

u32 f_00200ab4(gptr<Object_00200ab4_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 res_2 = 0;
    u32 r6 = r0;
    u32 r7 = r1;
    if (arg0->word_d0 != 0) {
        u32 r12_1 = arg0->word_d0;
        r0 = 0u;
        u32 r4 = *gptr<u8>(r12_1 + r3 + 2u);
        r1 = u32(*gptr<u16>(arg0->word_d0)) + 2u;
        u32 r8 = (r4 + (r4 << 1)) << 1;
        if (r3 != 0) {
            u32 r12 = r12_1 + 1u;
            if ((r3 & 1u) != 0) {
                u32 ea_2 = r12 + 1u;
                r12 = ea_2;
                r0 = *gptr<u8>(ea_2);
            }
            u32 res_1 = r3 >> 1;
            r3 = res_1;
            u32 r5 = 0u;
            if (res_1 != 0) {
                do {
                    u32 r9_1 = *gptr<u8>(r12 + 1u);
                    u32 ea_4 = r12 + 2u;
                    r12 = ea_4;
                    u32 r10_1 = *gptr<u8>(ea_4);
                    res_2 = r3 - 1u;
                    r3 = res_2;
                    r0 += r9_1;
                    r5 += r10_1;
                    guest::preempt();
                } while (res_2 != 0);
            }
            r0 += r5;
        }
        u32 r3_1 = r4 + (r4 << 1);
        if (r2 >= r3_1 << 1) {
            call_00134544(r7, *gptr<u32>(r6 + 0xd0u) + (r1 + (r0 + (r0 << 1) << 1)), r8, r3_1);  // (from the original)
            return r4;
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_00200ab4
GUEST_EXPORT_FRAMED(0x00200ab4, d_00200ab4::f_00200ab4, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_00200b64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00200b64 {

inline constexpr guest::Function<0x00138744, u32(u32, u32, u32, u32)> call_00138744;  // (from the original)
inline constexpr guest::Function<0x0013bc00, u32(u32, u32, u32, u32)> call_0013bc00;  // (from the original)

u32 f_00200b64(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    call_00138744(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    frame.release();
    return call_0013bc00(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00200b64
GUEST_EXPORT(0x00200b64, d_00200b64::f_00200b64);

// f_00200b7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00200b7c {

struct __attribute__((packed)) Object_00200b7c_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_00200b7c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00200b7c_0, word_4, 0x4);  // (from the original)


void f_00200b7c(gptr<Object_00200b7c_0> arg0, u32 r1) {
    arg0->word_4 = r1;
    arg0->word_0 = 0x8ed678;  // (from the original)
}

}  // namespace d_00200b7c
GUEST_EXPORT(0x00200b7c, d_00200b7c::f_00200b7c);

// f_00200b9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00200b9c {

struct __attribute__((packed)) Object_00200b9c_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00200b9c_0, word_0, 0x0);  // (from the original)

struct __attribute__((packed)) Object_00200b9c_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_00200b9c_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00200b9c_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_00200b9c_r6_1 {
    u8 unknown_0[0x8];  // (not used here)
    u16 half_8;
    u16 half_a;
    u8 byte_c;
    u8 byte_d;
};
GUEST_OFFSET(Local_00200b9c_r6_1, half_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00200b9c_r6_1, half_a, 0xa);  // (from the original)
GUEST_OFFSET(Local_00200b9c_r6_1, byte_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_00200b9c_r6_1, byte_d, 0xd);  // (from the original)

inline constexpr guest::Function<0x00200ab4, u32(u32, u32, u32, u32)> call_00200ab4;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x0030b654, u32(u32, u32, u32, u32)> call_0030b654;  // (from the original)
inline constexpr guest::Function<0x003117dc, u32(u32, u32, u32, u32)> call_003117dc;  // (from the original)
inline constexpr guest::Function<0x00317148, u32(u32, u32, u32, u32)> call_00317148;  // (from the original)
inline constexpr guest::Function<0x0057bce0, u32(u32, u32, u32, u32)> call_0057bce0;  // (from the original)
inline constexpr guest::Function<0x00712600, u32(u32, u32, u32, u32)> call_00712600;  // (from the original)

void f_00200b9c(gptr<Object_00200b9c_0> arg0, gptr<Object_00200b9c_1> arg1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r5 = r0;
    u32 r0_1 = arg0->word_0;
    if (r0_1 != 0) {
        u32 r0_2 = call_00317148(r0_1, arg1->word_0, arg1->word_4, r3);
        *frame.at<u32>(8) = r0_2;
        u32 r0_4 = call_00712600(*gptr<u32>(r5 + 4u), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0_4 != 0) {
            u32 r3_2 = *gptr<u16>(*frame.at<u32>(8));
            u32 r0_6 = call_00200ab4(*gptr<u32>(r5 + 4u), r5 + 8u, 0x600u, r3_2);  // (from the original)
            r1 = guest::cpu()->r[1];
            u32 r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            u32 r7 = r0_6;
            u32 r4 = 0u;
            if (r0_6 >= 0u && r0_6 != 0) {
                u32 r11 = 0u;
                do {
                    gptr<Local_00200b9c_r6_1> r6_1 = gptr<Local_00200b9c_r6_1>(r5 + (r4 + (r4 << 1) << 1));
                    u32 r8_1 = r6_1->half_8;
                    u32 r10_1 = r6_1->byte_c;
                    u32 r9_1 = r6_1->byte_d;
                    call_002fcbb0(frame.at(4).addr(), r8_1, r2, r3);
                    u32 r0_9 = call_0030b654(frame.at(4).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                    if (r0_9 != 0) {
                        u32 r6_2 = u32(r6_1->half_a) >> 0xe;  // (from the original)
                        u32 r0_11 = call_002fcbb0(frame.at(0).addr(), r8_1, guest::cpu()->r[2], guest::cpu()->r[3]);
                        call_003117dc(frame.at(4).addr(), r0_11, r6_2, guest::cpu()->r[3]);
                    }
                    u32 r0_13 = *frame.at<u32>(8);
                    *frame.at<u32>(0) = r11;
                    call_0057bce0(r0_13, frame.at(4).addr(), r10_1, r9_1);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    r4 += 1u;
                    guest::preempt();
                } while (r4 < r7);
            }
        }
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_00200b9c
GUEST_EXPORT_FRAMED(0x00200b9c, d_00200b9c::f_00200b9c, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_00200ca0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00200ca0 {

struct __attribute__((packed)) Object_00200ca0_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00200ca0_0, word_0, 0x0);  // (from the original)

struct __attribute__((packed)) Object_00200ca0_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_00200ca0_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00200ca0_1, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x001c1fcc, u32(u32, u32, u32)> call_001c1fcc;  // (from the original)
inline constexpr guest::Function<0x00304530, u32(u32, u32, u32)> call_00304530;  // (from the original)
inline constexpr guest::Function<0x00317148, u32(u32, u32, u32, u32)> call_00317148;  // (from the original)
inline constexpr guest::Function<0x006a92f4, u32(u32, u32, u32, u32)> call_006a92f4;  // (from the original)
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32)> call_0075291c;  // (from the original)

void f_00200ca0(gptr<Object_00200ca0_0> arg0, gptr<Object_00200ca0_1> arg1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = arg0->word_0;
    if (r0_1 != 0) {
        u32 r0_2 = call_00317148(r0_1, arg1->word_0, arg1->word_4, guest::cpu()->r[3]);
        u32 r0_4 = call_0075291c(arg0->word_0, arg1->word_0, arg1->word_4);
        if (r0_4 != 0) {
            u32 r0_5 = *gptr<u16>(r0_2);
            u32 r0_6 = call_00304530(r0_5, guest::cpu()->r[1], guest::cpu()->r[2]);
            u32 r0_7 = call_001c1fcc(r0_6, r0_5, guest::cpu()->r[2]);
            if (r0_7 != 0) {
                frame.release();
                call_006a92f4(r0_4, r0_7, 0xa00u, guest::cpu()->r[3]);
                return;  // (from the original)
            }
        }
    }
}

}  // namespace d_00200ca0
GUEST_EXPORT(0x00200ca0, d_00200ca0::f_00200ca0);

// f_00201ea0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00201ea0 {

struct __attribute__((packed)) Object_00201ea0_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00201ea0_0, word_0, 0x0);  // (from the original)

struct __attribute__((packed)) Object_00201ea0_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_00201ea0_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00201ea0_1, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x00317148, u32(u32, u32, u32, u32)> call_00317148;  // (from the original)
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> call_0052f144;  // (from the original)
inline constexpr guest::Function<0x0057bb98, u32(u32, u32, u32, u32)> call_0057bb98;  // (from the original)
inline constexpr guest::Function<0x0057bce0, u32(u32, u32, u32, u32)> call_0057bce0;  // (from the original)
inline constexpr guest::Function<0x007481ec, u32(u32, u32, u32, u32)> call_007481ec;  // (from the original)
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32, u32)> call_0074824c;  // (from the original)
inline constexpr guest::Function<0x00748284, u32(u32, u32, u32, u32)> call_00748284;  // (from the original)

void f_00201ea0(gptr<Object_00201ea0_0> arg0, gptr<Object_00201ea0_1> arg1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x2c);  // the original's stack frame
    u32 r0_10 = 0;
    u32 r0_1 = arg0->word_0;
    if (r0_1 != 0) {
        u32 r0_2 = call_00317148(r0_1, arg1->word_0, arg1->word_4, r3);
        u32 r5 = r0_2;
        if (r0_2 != 0) {
            u32 r0_3 = call_0057bb98(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            call_0074824c(frame.at(0x18).addr(), r0_3, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            call_00748284(frame.at(8).addr(), r0_3, guest::cpu()->r[2], guest::cpu()->r[3]);
            u32 r0_7 = call_007481ec(frame.at(8).addr(), frame.at(0x18).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            if (r0_7 == 0) {
            } else {
                u32 r6 = 0u;
                u32 r7 = 1u;
                do {
                    u32 r4_1 = *frame.at<u32>(0x14);  // (from the original)
                    u32 r2_6 = *frame.at<u32>(0x10);  // (from the original)
                    *frame.at<u32>(0) = r6;
                    call_0057bce0(r5, 0x95bfdcu, r2_6, r4_1);  // (from the original)
                    u32 r4_2 = *frame.at<u32>(0x14);  // (from the original)
                    u32 r2_7 = *frame.at<u32>(0x10);  // (from the original)
                    *frame.at<u32>(0) = r7;
                    call_0057bce0(r5, 0x95bfdcu, r2_7, r4_2);  // (from the original)
                    call_0052f144(frame.at(8).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                    r0_10 = call_007481ec(frame.at(8).addr(), frame.at(0x18).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                    guest::preempt();
                } while (r0_10 != 0);
            }
        }
    }
}

}  // namespace d_00201ea0
GUEST_EXPORT_FRAMED(0x00201ea0, d_00201ea0::f_00201ea0, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00201fa0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00201fa0 {

inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> call_002fd108;  // (from the original)
inline constexpr guest::Function<0x005814d0, u32(u32, u32, u32, u32)> call_005814d0;  // (from the original)
inline constexpr guest::Function<0x005817f0, u32(u32, u32, u32, u32)> call_005817f0;  // (from the original)
inline constexpr guest::Function<0x005819ec, u32(u32, u32, u32, u32)> call_005819ec;  // (from the original)

u32 f_00201fa0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = call_002fd108(0x38u, r0, 4u, r3);  // (from the original)
    u32 r0_2 = call_005819ec(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_2 != 0) {
        u32 r0_3 = call_005814d0(r0_2, r0, r1, r2);
        u32 zf_1 = r0_3 == 0;
        r0_2 = r0_2;
        if (zf_1) {
            call_005817f0(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            r0_2 = 0u;
        }
    }
    return r0_2;
}

}  // namespace d_00201fa0
GUEST_EXPORT_FRAMED(0x00201fa0, d_00201fa0::f_00201fa0, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_002021d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002021d4 {

struct __attribute__((packed)) Local_002021d4_r0_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002021d4_r0_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002021d4_r0_2, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x009825ec> global_009825ec;  // (from the original)
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;  // (from the original)
inline constexpr guest::Function<0x0052f074, u32(u32, u32, u32)> call_0052f074;  // (from the original)
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32)> call_0052f144;  // (from the original)
inline constexpr guest::Function<0x0052f200, u32(u32, u32, u32)> call_0052f200;  // (from the original)
inline constexpr guest::Function<0x007481ec, u32(u32, u32, u32)> call_007481ec;  // (from the original)
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32, u32)> call_0074824c;  // (from the original)
inline constexpr guest::Function<0x00748284, u32(u32, u32, u32)> call_00748284;  // (from the original)

void f_002021d4(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x24);  // the original's stack frame
    u32 r0_14 = 0;
    u32 r4 = r0;
    if ((*global_009825ec & 1u) == 0) {
        u32 r0_1 = call_002fe7dc(0x9825ecu, r1, r2, guest::cpu()->r[3]);  // (from the original)
        r2 = guest::cpu()->r[2];
        if (r0_1 != 0) {
            gptr<Local_002021d4_r0_2> r0_2 = gptr<Local_002021d4_r0_2>(frame.at(0x10).addr());  // (from the original)
            r0_2->word_0 = 6;
            r0_2->word_4 = 5;
            u32 r0_3 = call_0052f074(r0_2.addr(), 6u, 5u);
            call_0052f200(0xaf8484u, r0_3, r0_2.addr());  // (from the original)
            r2 = 0x100000u;  // (from the original)
        }
    }
    call_0074824c(frame.at(0).addr(), 0xaf8484u, r2, guest::cpu()->r[3]);  // (from the original)
    call_00748284(frame.at(0x10).addr(), 0xaf8484u, guest::cpu()->r[2]);  // (from the original)
    u32 r0_7 = call_007481ec(frame.at(0x10).addr(), frame.at(0).addr(), guest::cpu()->r[2]);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_7 == 0) {
    } else {
        u32 r5 = 0x3du;  // (from the original)
        u32 r6 = 0x47u;  // (from the original)
        do {
            u32 r0_8 = *frame.at<u32>(0x1c);  // (from the original)
            if (*gptr<u8>(*frame.at<u32>(0x18) + ((r0_8 << 3) - r0_8 + r4)) == 0x21u) {  // (from the original)
                u32 r0_9 = *frame.at<u32>(0x1c);  // (from the original)
                *gptr<u8>(*frame.at<u32>(0x18) + r4 + ((r0_9 << 3) - r0_9 + 1u)) = u8(r5);  // (from the original)
            }
            u32 r7_1 = *frame.at<u32>(0x18);  // (from the original)
            u32 r0_10 = *frame.at<u32>(0x1c);  // (from the original)
            if (*gptr<u8>(r7_1 + ((r0_10 << 3) - r0_10 + r4)) == 0x20u) {  // (from the original)
                u32 r7_2 = *frame.at<u32>(0x18) + r4;  // (from the original)
                u32 r0_11 = *frame.at<u32>(0x1c);  // (from the original)
                *gptr<u8>(r7_2 + ((r0_11 << 3) - r0_11 - 1u)) = u8(r6);
            }
            call_0052f144(frame.at(0x10).addr(), r1, r2);  // (from the original)
            r0_14 = call_007481ec(frame.at(0x10).addr(), frame.at(0).addr(), guest::cpu()->r[2]);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            guest::preempt();
        } while (r0_14 != 0);
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_002021d4
GUEST_EXPORT_FRAMED(0x002021d4, d_002021d4::f_002021d4, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00202370: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00202370 {

struct __attribute__((packed)) Local_00202370_r0_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00202370_r0_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00202370_r0_2, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x009825ec> global_009825ec;  // (from the original)
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;  // (from the original)
inline constexpr guest::Function<0x0052f074, u32(u32, u32, u32, u32)> call_0052f074;  // (from the original)
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> call_0052f144;  // (from the original)
inline constexpr guest::Function<0x0052f200, u32(u32, u32, u32, u32)> call_0052f200;  // (from the original)
inline constexpr guest::Function<0x0055cb58, u32(u32, u32, u32, u32)> call_0055cb58;  // (from the original)
inline constexpr guest::Function<0x007481ec, u32(u32, u32, u32, u32)> call_007481ec;  // (from the original)
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32, u32)> call_0074824c;  // (from the original)
inline constexpr guest::Function<0x00748284, u32(u32, u32, u32, u32)> call_00748284;  // (from the original)

void f_00202370(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x20);  // the original's stack frame
    u32 r0_11 = 0;
    u32 r0_20 = 0;
    u32 r4 = r0;
    u32 r5 = r1;
    u32 r9 = r2;
    u32 r8 = r3;
    if ((*global_009825ec & 1u) == 0) {
        u32 r0_1 = call_002fe7dc(0x9825ecu, r1, r2, r3);  // (from the original)
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_1 != 0) {
            gptr<Local_00202370_r0_2> r0_2 = gptr<Local_00202370_r0_2>(frame.at(0x10).addr());  // (from the original)
            r0_2->word_0 = 6;
            r0_2->word_4 = 5;
            u32 r0_3 = call_0052f074(r0_2.addr(), 6u, 5u, r3);
            call_0052f200(0xaf8484u, r0_3, r0_2.addr(), guest::cpu()->r[3]);  // (from the original)
            r3 = guest::cpu()->r[3];
            r2 = 0x100000u;  // (from the original)
        }
    }
    u32 r10 = 0xaf8484u;  // (from the original)
    call_0074824c(frame.at(0).addr(), r10, r2, r3);
    u32 r6 = 0u;
    call_00748284(frame.at(0x10).addr(), r10, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_7 = call_007481ec(frame.at(0x10).addr(), frame.at(0).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_7 != 0) {
        do {
            u32 r7_1 = *frame.at<u32>(0x18);  // (from the original)
            u32 r0_8 = *frame.at<u32>(0x1c);  // (from the original)
            if (*gptr<u8>(r7_1 + ((r0_8 << 3) - r0_8 + r4)) == r5) {
                r6 += 1u;
            }
            call_0052f144(frame.at(0x10).addr(), r1, r2, r3);  // (from the original)
            r0_11 = call_007481ec(frame.at(0x10).addr(), frame.at(0).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            guest::preempt();
        } while (r0_11 != 0);
    }
    u32 r7 = 0u;
    u32 r0_12 = call_0055cb58(r8, r1, r2, r3);
    r6 = u64(r0_12) * r6 >> 0x20;  // (from the original)
    call_00748284(frame.at(0x10).addr(), r10, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_15 = call_007481ec(frame.at(0x10).addr(), frame.at(0).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_15 != 0) {
        do {
            u32 r8_1 = *frame.at<u32>(0x18);  // (from the original)
            u32 r0_16 = *frame.at<u32>(0x1c);  // (from the original)
            if (*gptr<u8>(r8_1 + ((r0_16 << 3) - r0_16 + r4)) == r5) {
                if (r7 != r6) {
                    r7 += 1u;
                } else {
                    u32 r0_17 = *frame.at<u32>(0x1c);  // (from the original)
                    *gptr<u8>(*frame.at<u32>(0x18) + ((r0_17 << 3) - r0_17 + r4)) = u8(r9);  // (from the original)
                    return;
                }
            }
            call_0052f144(frame.at(0x10).addr(), r1, r2, r3);  // (from the original)
            r0_20 = call_007481ec(frame.at(0x10).addr(), frame.at(0).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            guest::preempt();
        } while (r0_20 != 0);
    }
}

}  // namespace d_00202370
GUEST_EXPORT_FRAMED(0x00202370, d_00202370::f_00202370, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_002025bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002025bc {

inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> call_002fd108;  // (from the original)
inline constexpr guest::Function<0x00581050, u32(u32, u32, u32, u32)> call_00581050;  // (from the original)
inline constexpr guest::Function<0x005817f0, u32(u32, u32, u32, u32)> call_005817f0;  // (from the original)
inline constexpr guest::Function<0x005819ec, u32(u32, u32, u32, u32)> call_005819ec;  // (from the original)

u32 f_002025bc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = call_002fd108(0x38u, r0, 4u, r3);  // (from the original)
    u32 r0_2 = call_005819ec(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_2 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        u32 r0_3 = call_00581050(r0_2, r0, r1, r2);
        r1_2 = guest::cpu()->r[1];
        u32 zf_1 = r0_3 == 0;
        r0_2 = r0_2;
        if (zf_1) {
            call_005817f0(r0_2, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1_2 = guest::cpu()->r[1];
            r0_2 = 0u;
        }
    }
    guest::cpu()->r[1] = r1_2;
    return r0_2;
}

}  // namespace d_002025bc
GUEST_EXPORT_FRAMED(0x002025bc, d_002025bc::f_002025bc, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_002026e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002026e4 {

inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> call_002fd108;  // (from the original)
inline constexpr guest::Function<0x005810ac, u32(u32, u32, u32, u32)> call_005810ac;  // (from the original)
inline constexpr guest::Function<0x005817f0, u32(u32, u32, u32, u32)> call_005817f0;  // (from the original)
inline constexpr guest::Function<0x005819ec, u32(u32, u32, u32, u32)> call_005819ec;  // (from the original)

u32 f_002026e4(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r0_1 = call_002fd108(0x38u, r0, 4u, r3);  // (from the original)
    u32 r0_2 = call_005819ec(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_2 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        *frame.at<u32>(0) = r3;
        u32 r0_3 = call_005810ac(r0_2, r0, r1, r2);
        r1_2 = guest::cpu()->r[1];
        u32 zf_1 = r0_3 == 0;
        r0_2 = r0_2;
        if (zf_1) {
            call_005817f0(r0_2, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1_2 = guest::cpu()->r[1];
            r0_2 = 0u;
        }
    }
    guest::cpu()->r[1] = r1_2;
    return r0_2;
}

}  // namespace d_002026e4
GUEST_EXPORT_FRAMED(0x002026e4, d_002026e4::f_002026e4, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_00203170: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00203170 {

inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> call_002fd108;  // (from the original)
inline constexpr guest::Function<0x005812ec, u32(u32, u32, u32, u32)> call_005812ec;  // (from the original)
inline constexpr guest::Function<0x005817f0, u32(u32, u32, u32, u32)> call_005817f0;  // (from the original)
inline constexpr guest::Function<0x005819ec, u32(u32, u32, u32, u32)> call_005819ec;  // (from the original)

u32 f_00203170(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r0_1 = call_002fd108(0x38u, r0, 4u, r3);  // (from the original)
    u32 r0_2 = call_005819ec(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_2 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        *frame.at<u32>(0) = r3;
        u32 r0_3 = call_005812ec(r0_2, r0, r1, r2);
        r1_2 = guest::cpu()->r[1];
        u32 zf_1 = r0_3 == 0;
        r0_2 = r0_2;
        if (zf_1) {
            call_005817f0(r0_2, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1_2 = guest::cpu()->r[1];
            r0_2 = 0u;
        }
    }
    guest::cpu()->r[1] = r1_2;
    return r0_2;
}

}  // namespace d_00203170
GUEST_EXPORT_FRAMED(0x00203170, d_00203170::f_00203170, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_0020350c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020350c {

struct __attribute__((packed)) Local_0020350c_r0_12 {
    u8 unknown_0[0x434];  // (not used here)
    u32 word_434;
    u32 word_438;
};
GUEST_OFFSET(Local_0020350c_r0_12, word_434, 0x434);  // (from the original)
GUEST_OFFSET(Local_0020350c_r0_12, word_438, 0x438);  // (from the original)

inline constexpr guest::Function<0x001207d8, u32(u32, u32, u32, u32)> call_001207d8;  // (from the original)
inline constexpr guest::Function<0x00125aec, u32(u32)> call_00125aec;  // (from the original)
inline constexpr guest::Function<0x0012c984, u32(u32, u32)> call_0012c984;  // (from the original)

u32 f_0020350c(u32 r0, u32 r1) {
    u32 r0_1 = call_001207d8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_3 = call_0012c984(r0_1 + 0x248u, guest::cpu()->r[1]);  // (from the original)
    u32 r0_5 = call_00125aec(r0_3 + 0x14cu);  // (from the original)
    u32 r0_7 = call_00125aec(r0_5 + 0x28u);  // (from the original)
    u32 r0_9 = call_00125aec(r0_7 + 0x28u);  // (from the original)
    u32 r0_11 = call_00125aec(r0_9 + 0x28u);  // (from the original)
    gptr<Local_0020350c_r0_12> r0_12 = gptr<Local_0020350c_r0_12>(r0_11 - 0x40cu);  // (from the original)
    r0_12->word_434 = 0;
    r0_12->word_438 = 0;
    guest::cpu()->r[1] = 0u;
    return r0_12.addr();
}

}  // namespace d_0020350c
GUEST_EXPORT_FRAMED(0x0020350c, d_0020350c::f_0020350c, 0x4010);  // pushes {r4, lr} first, as the original

// f_00203558: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00203558 {

inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x005b449c, u32(u32, u32)> call_005b449c;  // (from the original)
inline constexpr guest::Function<0x006fa40c, u32(u32, u32, u32, u32)> call_006fa40c;  // (from the original)
inline constexpr guest::Function<0x006fb030, u32(u32, u32, u32, u32)> call_006fb030;  // (from the original)

u32 f_00203558(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r1_3 = 0;
    u32 r0_1 = call_002f74e0(0x80u, r0, r2, r3);  // (from the original)
    u32 r2_1 = guest::cpu()->r[2];
    u32 r3_1 = guest::cpu()->r[3];
    if (r0_1 != 0) {
        u32 r0_2 = call_006fa40c(r0, guest::cpu()->r[1], r2_1, r3_1);
        u32 r0_3 = call_006fb030(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r0_4 = r0_3 + (r0_2 + (r0_2 << 1) << 1);
        u64 t_1 = u64(0u) + ~0u + u32(r0_4 >= 0x18u);  // (from the original)
        r1_3 = t_1;
        if (!u32(t_1 >> 0x20)) {  // (from the original)
            guest::cpu()->r[1] = r1_3;
            return 0xa82000u + (r0_4 << 5) + 0x2e8u;  // (from the original)
        }
    } else {
        u32 r0_6 = call_002f74e0(0x2000u, r0, r2_1, r3_1);  // (from the original)
        if (r0_6 != 0) {
            u32 r0_7 = call_005b449c(0x2000u, r0);  // (from the original)
            r1_3 = guest::cpu()->r[1];
            if (r0_7 < 4u) {
                return 0xa82000u + (r0_7 << 5) + 0x5e8u;  // (from the original)
            }
        } else {
            u32 r0_8 = call_002f74e0(0x40u, r0, r2_1, r3_1);  // (from the original)
            if (r0_8 != 0) {
                u32 r0_9 = call_005b449c(0x40u, r0);  // (from the original)
                r1_3 = guest::cpu()->r[1];
                if (r0_9 < 0xau) {  // (from the original)
                    return 0xa82000u + (r0_9 << 5) + 0x668u;  // (from the original)
                }
            } else {
                u32 r0_10 = call_002f74e0(0x20000000u, r0, r2_1, r3_1);  // (from the original)
                r1_3 = guest::cpu()->r[1];
                if (r0_10 != 0) {
                    u32 r0_11 = call_005b449c(0x20000000u, r0);  // (from the original)
                    r1_3 = guest::cpu()->r[1];
                    if (r0_11 < 2u) {
                        return 0xa82000u + (r0_11 << 5) + 0x7a8u;  // (from the original)
                    }
                }
            }
        }
    }
    guest::cpu()->r[1] = r1_3;
    return 0u;
}

}  // namespace d_00203558
GUEST_EXPORT_FRAMED(0x00203558, d_00203558::f_00203558, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00203660: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00203660 {

inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x005b449c, u32(u32, u32)> call_005b449c;  // (from the original)
inline constexpr guest::Function<0x006fa40c, u32(u32, u32, u32, u32)> call_006fa40c;  // (from the original)
inline constexpr guest::Function<0x006fb030, u32(u32, u32, u32, u32)> call_006fb030;  // (from the original)

u32 f_00203660(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r1_3 = 0;
    u32 r0_1 = call_002f74e0(0x80u, r0, r2, r3);  // (from the original)
    u32 r2_1 = guest::cpu()->r[2];
    u32 r3_1 = guest::cpu()->r[3];
    if (r0_1 != 0) {
        u32 r0_2 = call_006fa40c(r0, guest::cpu()->r[1], r2_1, r3_1);
        u32 r0_3 = call_006fb030(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r0_4 = r0_3 + (r0_2 + (r0_2 << 1) << 1);
        u64 t_1 = u64(0u) + ~0u + u32(r0_4 >= 0x18u);  // (from the original)
        r1_3 = t_1;
        if (!u32(t_1 >> 0x20)) {  // (from the original)
            guest::cpu()->r[1] = r1_3;
            return 0xa82000u + (r0_4 << 4) + 8u;  // (from the original)
        }
    } else {
        u32 r0_6 = call_002f74e0(0x40u, r0, r2_1, r3_1);  // (from the original)
        u32 r2_3 = guest::cpu()->r[2];
        u32 r3_3 = guest::cpu()->r[3];
        if (r0_6 != 0) {
            u32 r0_7 = call_005b449c(0x40u, r0);  // (from the original)
            r1_3 = guest::cpu()->r[1];
            if (r0_7 < 0xau) {  // (from the original)
                return 0xa82000u + (r0_7 << 4) + 0x1c8u;  // (from the original)
            }
        } else {
            u32 r0_8 = call_002f74e0(0x2000u, r0, r2_3, r3_3);  // (from the original)
            u32 r2_4 = guest::cpu()->r[2];
            u32 r3_4 = guest::cpu()->r[3];
            if (r0_8 != 0) {
                u32 r0_9 = call_005b449c(0x2000u, r0);  // (from the original)
                r1_3 = guest::cpu()->r[1];
                if (r0_9 < 4u) {
                    return 0xa82000u + (r0_9 << 4) + 0x188u;  // (from the original)
                }
            } else {
                u32 r0_10 = call_002f74e0(0x4000u, r0, r2_4, r3_4);  // (from the original)
                u32 r2_5 = guest::cpu()->r[2];
                u32 r3_5 = guest::cpu()->r[3];
                if (r0_10 != 0) {
                    u32 r0_11 = call_006fb030(r0, guest::cpu()->r[1], r2_5, r3_5);
                    r1_3 = guest::cpu()->r[1];
                    if (r0_11 < 6u) {
                        return 0xa82000u + (r0_11 << 4) + 0x268u;  // (from the original)
                    }
                } else {
                    u32 r0_12 = call_002f74e0(0x20000000u, r0, r2_5, r3_5);  // (from the original)
                    r1_3 = guest::cpu()->r[1];
                    if (r0_12 != 0) {
                        u32 r0_13 = call_005b449c(0x20000000u, r0);  // (from the original)
                        r1_3 = guest::cpu()->r[1];
                        if (r0_13 < 2u) {
                            return 0xa82000u + (r0_13 << 4) + 0x2c8u;  // (from the original)
                        }
                    }
                }
            }
        }
    }
    guest::cpu()->r[1] = r1_3;
    return 0u;
}

}  // namespace d_00203660
GUEST_EXPORT_FRAMED(0x00203660, d_00203660::f_00203660, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0020378c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020378c {

struct __attribute__((packed)) Object_0020378c_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0020378c_0, word_0, 0x0);  // (from the original)

struct __attribute__((packed)) Object_0020378c_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_0020378c_1, word_4, 0x4);  // (from the original)


void f_0020378c(gptr<Object_0020378c_0> arg0, gptr<Object_0020378c_1> arg1) {
    u32 r1_1 = arg1->word_4;
    u32 r2_1 = (r1_1 & 0x3fc00u) >> 0xa;  // (from the original)
    if (r2_1 == 0x61u && (r1_1 & 0x3ffu) == 0x268u) {  // (from the original)
        arg0->word_0 = 0;
        guest::cpu()->r[1] = 0u;
        return;
    }
    if (r2_1 == 0x61u && (r1_1 & 0x3ffu) == 0x90u) {  // (from the original)
        arg0->word_0 = 1;
        guest::cpu()->r[1] = 1u;
        return;
    }
    if (r2_1 == 0x61u && (r1_1 & 0x3ffu) == 0x290u) {  // (from the original)
        arg0->word_0 = 2;
        guest::cpu()->r[1] = 2u;
        return;
    }
    if (r2_1 == 0x61u && (r1_1 & 0x3ffu) == 0x280u) {  // (from the original)
        arg0->word_0 = 3;
        guest::cpu()->r[1] = 3u;
        return;
    }
    if (r2_1 == 0x61u && (r1_1 & 0x3ffu) == 0x288u) {  // (from the original)
        arg0->word_0 = 4;
        guest::cpu()->r[1] = 4u;
        return;
    }
    if (r2_1 == 0x61u && (r1_1 & 0x3ffu) == 0x270u) {  // (from the original)
        arg0->word_0 = 5;
        guest::cpu()->r[1] = 5u;
        return;
    }
    if (r2_1 == 0x61u && (r1_1 & 0x3ffu) == 0x210u) {  // (from the original)
        arg0->word_0 = 6;
        guest::cpu()->r[1] = 6u;
        return;
    }
    if (r2_1 == 0x61u && (r1_1 & 0x3ffu) == 0x218u) {  // (from the original)
        arg0->word_0 = 7;
        guest::cpu()->r[1] = 7u;
        return;
    }
    if (r2_1 == 0x61u && (r1_1 & 0x3ffu) == 0x238u) {  // (from the original)
        arg0->word_0 = 8;
        guest::cpu()->r[1] = 8u;
        return;
    }
    if (r2_1 == 0x61u && (r1_1 & 0x3ffu) == 0x118u) {  // (from the original)
        arg0->word_0 = 9;
        guest::cpu()->r[1] = 9u;
        return;
    }
    if (r2_1 == 0x61u && (r1_1 & 0x3ffu) == 0x120u) {  // (from the original)
        arg0->word_0 = 0xa;  // (from the original)
        guest::cpu()->r[1] = 0xau;  // (from the original)
        return;
    }
    if (r2_1 == 0x61u) {  // (from the original)
        u32 r3_1 = r1_1 & 0x3ffu;  // (from the original)
        if (s32(r3_1) >= 0x208 && s32(r3_1) < 0x210) {  // (from the original)
            arg0->word_0 = 0xb;  // (from the original)
            guest::cpu()->r[1] = 0xbu;  // (from the original)
            return;
        }
    }
    if (r2_1 == 0x61u && (r1_1 & 0x3ffu) == 0x250u) {  // (from the original)
        arg0->word_0 = 0xc;  // (from the original)
        guest::cpu()->r[1] = 0xcu;  // (from the original)
        return;
    }
    if (r2_1 == 0x61u && (r1_1 & 0x3ffu) == 0x240u) {  // (from the original)
        arg0->word_0 = 0xd;  // (from the original)
        guest::cpu()->r[1] = 0xdu;  // (from the original)
        return;
    }
    if (r2_1 == 0x61u && (r1_1 & 0x3ffu) == 0x148u) {  // (from the original)
        arg0->word_0 = 0xf;  // (from the original)
        guest::cpu()->r[1] = 0xfu;  // (from the original)
        return;
    }
    if (r2_1 != 0x61u) {  // (from the original)
        arg0->word_0 = 0x10;  // (from the original)
        guest::cpu()->r[1] = 0x10u;  // (from the original)
        return;
    }
    u32 r1_2 = r1_1 & 0x3ffu;  // (from the original)
    if (s32(r1_2) < 0x100) {  // (from the original)
        arg0->word_0 = 0x10;  // (from the original)
        guest::cpu()->r[1] = 0x10u;  // (from the original)
        return;
    }
    if (s32(r1_2) < 0x140) {  // (from the original)
        arg0->word_0 = 0xe;  // (from the original)
        guest::cpu()->r[1] = 0xeu;  // (from the original)
        return;
    }
    arg0->word_0 = 0x10;  // (from the original)
    guest::cpu()->r[1] = 0x10u;  // (from the original)
}

}  // namespace d_0020378c
GUEST_EXPORT(0x0020378c, d_0020378c::f_0020378c);

// f_00203948: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00203948 {

inline guest::global<u32, 0x0087c07c> global_0087c07c;  // (from the original)
inline guest::global<u32, 0x0087c080> global_0087c080;  // (from the original)
inline guest::global<u8, 0x00953684> global_00953684;  // (from the original)
inline guest::global<u32, 0x00a827f4> global_00a827f4;  // (from the original)
inline guest::global<u32, 0x00a827f8> global_00a827f8;  // (from the original)
inline guest::global<u32, 0x00a82888> global_00a82888;  // (from the original)
inline guest::global<u8, 0x00a82b88> global_00a82b88;  // (from the original)

u32 f_00203948(u32 r0) {
    if ((r0 & ~u32(s8(*global_00953684))) != 0) {
        *global_00a82b88 = 1;
        *global_00953684 = 1;
    }
    u32 r12_1 = *global_00a827f4;
    u32 r2_1 = *global_0087c07c;
    u32 r0_1 = *global_0087c080;
    if (r12_1 != r2_1) {
        guest::cpu()->r[1] = 0xa827e8u;  // (from the original)
        return 0u;
    }
    u32 r2_2 = *global_00a827f8;
    if (r12_1 == 0 && ((r2_2 | r0_1) & 1u) == 0) {
        goto L_2039a4;
    }
    if (r2_2 != r0_1) {
        guest::cpu()->r[1] = 0xa827e8u;  // (from the original)
        return 0u;
    }
L_2039a4:;
    if (*global_00a82888 == 2u) {
        guest::cpu()->r[1] = 0xa827e8u;  // (from the original)
        return 1u;
    }
    u32 r0_2 = *global_00953684 == 0 ? 2u : 3u;
    guest::cpu()->r[1] = 0xa827e8u;  // (from the original)
    return r0_2;
}

}  // namespace d_00203948
GUEST_EXPORT(0x00203948, d_00203948::f_00203948);

// f_00203bd0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00203bd0 {

inline guest::global<u32, 0x0087c074> global_0087c074;  // (from the original)
inline guest::global<u32, 0x0087c078> global_0087c078;  // (from the original)
inline guest::global<u32, 0x00a827f4> global_00a827f4;  // (from the original)
inline guest::global<u32, 0x00a827f8> global_00a827f8;  // (from the original)
inline constexpr guest::Function<0x0051bbbc, u32(u32, u32, u32, u32)> call_0051bbbc;  // (from the original)

u32 f_00203bd0() {
    u32 r1_1 = *global_0087c074;
    u32 r2_1 = *global_00a827f4;
    u32 r0_1 = *global_0087c078;
    if (r2_1 != r1_1) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r1_2 = *global_00a827f8;
    if (r2_1 == 0) {
        r2_1 = r1_2 | r0_1;
        if ((r2_1 & 1u) == 0) {
            goto L_203c14;
        }
    }
    if (r1_2 != r0_1) {
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
L_203c14:;
    call_0051bbbc(3u, r1_2, r2_1, guest::cpu()->r[3]);
    return 1u;
}

}  // namespace d_00203bd0
GUEST_EXPORT_FRAMED(0x00203bd0, d_00203bd0::f_00203bd0, 0x4010);  // pushes {r4, lr} first, as the original

// f_00203c34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00203c34 {

inline guest::global<u8, 0x00953684> global_00953684;  // (from the original)
inline constexpr guest::Function<0x0051bc4c, u32(u32)> call_0051bc4c;  // (from the original)

u32 f_00203c34() {
    u32 r0 = 0;
    call_0051bc4c(r0);
    *global_00953684 = 0;
    guest::cpu()->r[1] = 0x953684u;  // (from the original)
    return 0u;
}

}  // namespace d_00203c34
GUEST_EXPORT_FRAMED(0x00203c34, d_00203c34::f_00203c34, 0x4010);  // pushes {r4, lr} first, as the original

// f_00203c50: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00203c50 {

inline guest::global<u8, 0x00a82898> global_00a82898;  // (from the original)

u32 f_00203c50() {
    return *global_00a82898 == 0;
}

}  // namespace d_00203c50
GUEST_EXPORT(0x00203c50, d_00203c50::f_00203c50);

// f_00203c6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00203c6c {

struct __attribute__((packed)) Local_00203c6c_r2_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00203c6c_r2_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00203c6c_r2_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00203c6c_r2_1, word_8, 0x8);  // (from the original)

inline guest::global<u32, 0x00203cfc> global_00203cfc;  // (from the original)
inline guest::global<u32, 0x00203d00> global_00203d00;  // (from the original)
inline constexpr guest::Function<0x0013451c, u32(u32, u32, u32, u32)> call_0013451c;  // (from the original)
inline constexpr guest::Function<0x0014ef20, u32(u32, u32, u32)> call_0014ef20;  // (from the original)
inline constexpr guest::Function<0x001ab07c, u32(u32, u32, u32)> call_001ab07c;  // (from the original)
inline constexpr guest::Function<0x004ee4c8, u32(u32, u32)> call_004ee4c8;  // (from the original)

u32 f_00203c6c(u32 r0, u32 r1, u32 r2, float S0, float S1, float S2, float S3) {
    guest::StackFrame frame(0x60);  // the original's stack frame
    call_0013451c(frame.at(0).addr(), r1, r2, guest::cpu()->r[3]);
    gptr<Local_00203c6c_r2_1> r2_1 = gptr<Local_00203c6c_r2_1>(r0 + 0x344u);  // (from the original)
    float S3_1 = std::bit_cast<float>(*global_00203d00);
    u32 r0_2 = frame.at(0).addr();
    float S0_1 = std::bit_cast<float>(r2_1->word_0);
    float S1_1 = std::bit_cast<float>(r2_1->word_4);
    float S2_1 = std::bit_cast<float>(r2_1->word_8);
    *frame.at<u32>(0x30) = std::bit_cast<u32>(S3_1);  // (from the original)
    float S1_2 = S1_1 * S0_1;
    float S2_2 = S2_1 * S0_1;
    float S0_2 = std::bit_cast<float>(*global_00203cfc);
    *frame.at<u32>(0x34) = std::bit_cast<u32>(S0_2);  // (from the original)
    *frame.at<u32>(0x38) = std::bit_cast<u32>(S0_2);  // (from the original)
    *frame.at<u32>(0x40) = std::bit_cast<u32>(S0_2);  // (from the original)
    *frame.at<u32>(0x44) = std::bit_cast<u32>(S3_1);  // (from the original)
    *frame.at<u32>(0x48) = std::bit_cast<u32>(S0_2);  // (from the original)
    *frame.at<u32>(0x50) = std::bit_cast<u32>(S0_2);  // (from the original)
    *frame.at<u32>(0x54) = std::bit_cast<u32>(S0_2);  // (from the original)
    *frame.at<u32>(0x58) = std::bit_cast<u32>(S3_1);  // (from the original)
    *frame.at<u32>(0x3c) = std::bit_cast<u32>(S0_2);  // (from the original)
    *frame.at<u32>(0x4c) = std::bit_cast<u32>(S1_2);  // (from the original)
    *frame.at<u32>(0x5c) = std::bit_cast<u32>(S2_2);  // (from the original)
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    guest::cpu()->s[2] = S2_2;
    guest::cpu()->s[3] = S3_1;
    call_0014ef20(r0_2, r0_2, frame.at(0x30).addr());  // (from the original)
    call_001ab07c(r0 + 0x284u, r0, frame.at(0).addr());  // (from the original)
    u32 r0_5 = call_004ee4c8(r0 + 0x78u, frame.at(0).addr());  // (from the original)
    return r0_5;
}

}  // namespace d_00203c6c
GUEST_EXPORT_FRAMED(0x00203c6c, d_00203c6c::f_00203c6c, 0x4010);  // pushes {r4, lr} first, as the original

// f_0020407c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020407c {

struct __attribute__((packed)) Object_0020407c_0 {
    u8 unknown_0[0x164];  // (not used here)
    u32 word_164;
    u8 unknown_168[0x116];  // (not used here)
    u16 half_27e;
};
GUEST_OFFSET(Object_0020407c_0, word_164, 0x164);  // (from the original)
GUEST_OFFSET(Object_0020407c_0, half_27e, 0x27e);  // (from the original)

inline constexpr guest::Function<0x002fa9d0, u32(u32, u32, u32, u32)> call_002fa9d0;  // (from the original)
inline constexpr guest::Function<0x00317cc8, u32(u32, u32, u32, u32)> call_00317cc8;  // (from the original)
inline constexpr guest::Function<0x004f2ef0, u32(u32, u32, u32, u32)> call_004f2ef0;  // (from the original)
inline constexpr guest::Function<0x00736a1c, u32(u32, u32, u32, u32)> call_00736a1c;  // (from the original)

u32 f_0020407c(gptr<Object_0020407c_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r4_1 = 0;
    u32 r0_11 = 0;
    *frame.at<u32>(0) = r3;
    u32 r1_1 = arg0->half_27e;
    u32 r0_2 = call_00317cc8(r0 + 0x164u, r1_1, r2, r3);  // (from the original)
    u32 r1_2 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    u32 r3_1 = guest::cpu()->r[3];
    if (r0_2 != 0) {
        u32 ea_1 = arg0->word_164 + 0x28u;  // (from the original)
        r1_2 = *gptr<u32>(ea_1);
        u32 r0_4 = r1_2 == 0 ? 0u : ea_1 + r1_2;
        *frame.at<u32>(0) = r0_4;
        if (r0_4 != 0 && r3 != 0) {
            u32 r0_5 = call_002fa9d0(r3, r1_2, r2_1, r3_1);
            u32 r0_6 = call_00736a1c(frame.at(0).addr(), r3, r0_5, guest::cpu()->r[3]);
            r1_2 = guest::cpu()->r[1];
            r2_1 = guest::cpu()->r[2];
            r3_1 = guest::cpu()->r[3];
            if (r0_6 != 0) {
                u32 ea_2 = r0_6 + 0xcu;  // (from the original)
                r1_2 = *gptr<u32>(ea_2);
                r4_1 = r1_2 == 0 ? 0u : r1_2 + ea_2;
                goto L_204114;
            }
        }
        r4_1 = 0u;
L_204114:;
        u32 ea_3 = r0_2 + 0xc0u;  // (from the original)
        u32 r0_7 = *gptr<u32>(ea_3);
        u32 r0_8 = r0_7 == 0 ? 0u : r0_7 + ea_3;
        *frame.at<u32>(0) = r0_8;
        if (r0_8 != 0 && r1 != 0) {
            u32 r0_9 = call_002fa9d0(r1, r1_2, r2_1, r3_1);
            u32 r0_10 = call_00736a1c(frame.at(0).addr(), r1, r0_9, guest::cpu()->r[3]);
            r1_2 = guest::cpu()->r[1];
            r3_1 = guest::cpu()->r[3];
            if (r0_10 != 0) {
                u32 ea_4 = r0_10 + 0xcu;  // (from the original)
                r1_2 = *gptr<u32>(ea_4);
                r0_11 = r1_2 == 0 ? 0u : ea_4 + r1_2;
                goto L_204178;
            }
        }
        r0_11 = 0u;
L_204178:;
        if (r0_11 == 0 || r4_1 == 0) {
            guest::cpu()->r[1] = r1_2;
            return 0u;
        }
        call_004f2ef0(r0_11, r2, r4_1, r3_1);
        r1_2 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1_2;
    return 1u;
}

}  // namespace d_0020407c
GUEST_EXPORT_FRAMED(0x0020407c, d_0020407c::f_0020407c, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_00204568: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00204568 {

inline constexpr guest::Function<0x00203d04, u32(u32, u32, u32, u32)> call_00203d04;  // (from the original)

u32 f_00204568(u32 r0, u32 r1_unused, u32 r2) {
    u32 r0_1 = call_00203d04(r0, guest::cpu()->r[1], r2, guest::cpu()->r[3]);
    *gptr<u8>(r0 + 0x280u) = u8(u32(*gptr<u8>(r0 + 0x280u)) & ~0x80u);  // (from the original)
    return r0_1;
}

}  // namespace d_00204568
GUEST_EXPORT_FRAMED(0x00204568, d_00204568::f_00204568, 0x4010);  // pushes {r4, lr} first, as the original

// f_00204584: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00204584 {

inline constexpr guest::Function<0x00203d04, u32(u32, u32, u32, u32)> call_00203d04;  // (from the original)

void f_00204584(u32 r0, u32 r1_unused, u32 r2) {
    call_00203d04(r0, guest::cpu()->r[1], r2, guest::cpu()->r[3]);
    *gptr<u8>(r0 + 0x280u) = u8(u32(*gptr<u8>(r0 + 0x280u)) & ~0x40u);  // (from the original)
}

}  // namespace d_00204584
GUEST_EXPORT_FRAMED(0x00204584, d_00204584::f_00204584, 0x4010);  // pushes {r4, lr} first, as the original

// f_002045a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002045a0 {

inline constexpr guest::Function<0x00203d04, u32(u32, u32, u32, u32)> call_00203d04;  // (from the original)

void f_002045a0(u32 r0, u32 r1_unused, u32 r2) {
    call_00203d04(r0, guest::cpu()->r[1], r2, guest::cpu()->r[3]);
    *gptr<u8>(r0 + 0x280u) = u8(u32(*gptr<u8>(r0 + 0x280u)) & ~0x20u);  // (from the original)
}

}  // namespace d_002045a0
GUEST_EXPORT_FRAMED(0x002045a0, d_002045a0::f_002045a0, 0x4010);  // pushes {r4, lr} first, as the original

// f_002068b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002068b8 {

struct __attribute__((packed)) Object_002068b8_1 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(Object_002068b8_1, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002068b8_1, byte_1, 0x1);  // (from the original)

inline guest::global<u32, 0x00950148> global_00950148;  // (from the original)
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> call_00305f44;  // (from the original)
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;  // (from the original)
inline constexpr guest::Function<0x00624ee8, u32(u32, u32, u32, u32)> call_00624ee8;  // (from the original)
inline constexpr guest::Function<0x00624f00, u32(u32, u32, u32, u32)> call_00624f00;  // (from the original)
inline constexpr guest::Function<0x0069858c, u32(u32, u32, u32)> call_0069858c;  // (from the original)
inline constexpr guest::Function<0x00746f24, u32(u32, u32, u32, u32)> call_00746f24;  // (from the original)

u32 f_002068b8(u32 r0_unused, gptr<Object_002068b8_1> arg1, u32 r2, u32 r3) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r1 = arg1.addr();
    u32 r7 = 0u;
    u32 r0_1 = arg1->byte_0;
    u32 r1_1 = arg1->byte_1;
    *frame.at<u8>(2) = u8(r7);
    *frame.at<u8>(3) = u8(r7);
    u32 r6 = (r0_1 >> 5) + (r1_1 << 3) & 0xffu;  // (from the original)
    u32 r0_2 = 0xau | r6 << 5;  // (from the original)
    *frame.at<u8>(4) = u8(r7);
    u32 r1_2 = r7 | (r6 & 0xf8u) >> 3;  // (from the original)
    *frame.at<u8>(5) = u8(r7);
    *frame.at<u8>(0) = u8(r0_2);
    *frame.at<u8>(6) = u8(r7);
    *frame.at<u8>(1) = u8(r1_2);
    u32 r0_3 = call_00305f44(r0_2, r1_2, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 r5 = 0u;
    u32 r4 = r5;
    r1 = u32(*frame.at<u8>(1)) & ~0xe0u;  // (from the original)
    *frame.at<u8>(1) = u8(r1 | r0_3 << 5);
    do {
        u32 r0_5 = call_00624f00(r4 & 0xffu, r1, r2, r3);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_5 != 0) {
            u32 r0_7 = call_00624ee8(r4 & 0xffu, r1, r2, r3);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_7 > r5) {
                r5 = r0_7;
            }
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 4u);
    u32 r0_8 = call_00746f24(0xa22020u, r1, r2, r3);  // (from the original)
    u32 r4_1 = r0_8 + r5 + 0x12cu;  // (from the original)
    *frame.at<u8>(4) = u8(r7 | r4_1 >> 8);
    *frame.at<u8>(5) = u8(r7 | r4_1 >> 0x10);  // (from the original)
    *frame.at<u8>(6) = u8(r7 | r4_1 >> 0x18);  // (from the original)
    *frame.at<u8>(3) = u8(r4_1);
    call_006249b0(0x40u, 4u, frame.at(0).addr(), 7u);  // (from the original)
    u32 r1_3 = guest::cpu()->r[1];
    u32 r0_9 = *global_00950148;
    if (r0_9 != 0) {
        r0_9 = call_0069858c(r0_9, r6, r4_1);
        r1_3 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1_3;
    return r0_9;
}

}  // namespace d_002068b8
GUEST_EXPORT_FRAMED(0x002068b8, d_002068b8::f_002068b8, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00206f7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00206f7c {

struct __attribute__((packed)) Local_00206f7c_r2_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00206f7c_r2_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00206f7c_r2_2, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_00206f7c_r3_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_00206f7c_r3_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00206f7c_r3_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00206f7c_r3_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00206f7c_r3_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_00206f7c_r3_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_00206f7c_r3_1, word_14, 0x14);  // (from the original)

struct __attribute__((packed)) Local_00206f7c_r3_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_00206f7c_r3_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00206f7c_r3_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00206f7c_r3_2, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00206f7c_r3_2, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_00206f7c_r3_2, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_00206f7c_r3_2, word_14, 0x14);  // (from the original)

struct __attribute__((packed)) Local_00206f7c_r3_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00206f7c_r3_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00206f7c_r3_3, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x0020707c> global_0020707c;  // (from the original)
inline guest::global<u32, 0x00207080> global_00207080;  // (from the original)
inline guest::global<u32, 0x00887520> global_00887520;  // (from the original)
inline constexpr guest::Function<0x002b6a00, u32(u32, u32)> call_002b6a00;  // (from the original)
inline constexpr guest::Function<0x002f6a30, u32(u32, u32)> call_002f6a30;  // (from the original)
inline constexpr guest::Function<0x002f6e98, u32(u32, u32, u32, u32)> call_002f6e98;  // (from the original)
inline constexpr guest::Function<0x002f7508, u32(u32, u32, u32)> call_002f7508;  // (from the original)
inline constexpr guest::Function<0x0056878c, u32(u32, u32)> call_0056878c;  // (from the original)

void f_00206f7c(u32 r0, u32 r1) {
    guest::StackFrame frame(0x40);  // the original's stack frame
    gptr<Local_00206f7c_r3_1> r3_1 = gptr<Local_00206f7c_r3_1>(0x887508u);  // (from the original)
    float S0_1 = std::bit_cast<float>(r3_1->word_0);
    float S1_1 = std::bit_cast<float>(r3_1->word_4);
    float S2_1 = std::bit_cast<float>(r3_1->word_8);
    float S3_1 = std::bit_cast<float>(r3_1->word_c);
    float S4_1 = std::bit_cast<float>(r3_1->word_10);
    float S5_1 = std::bit_cast<float>(r3_1->word_14);
    gptr<Local_00206f7c_r3_2> r3_2 = gptr<Local_00206f7c_r3_2>(frame.at(0x24).addr());  // (from the original)
    r3_2->word_0 = std::bit_cast<u32>(S0_1);
    r3_2->word_4 = std::bit_cast<u32>(S1_1);
    r3_2->word_8 = std::bit_cast<u32>(S2_1);
    r3_2->word_c = std::bit_cast<u32>(S3_1);
    r3_2->word_10 = std::bit_cast<u32>(S4_1);
    r3_2->word_14 = std::bit_cast<u32>(S5_1);
    gptr<Local_00206f7c_r3_3> r3_3 = gptr<Local_00206f7c_r3_3>(frame.at(0x1c).addr());  // (from the original)
    *frame.at<u32>(0x3c) = *global_00887520;  // (from the original)
    r3_3->word_0 = r1;
    r3_3->word_4 = r0 + 4u;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    guest::cpu()->s[3] = S3_1;
    guest::cpu()->s[4] = S4_1;
    guest::cpu()->s[5] = S5_1;
    call_002f6e98(r0 + 0x260u, frame.at(0x1c).addr(), 0u, r3_3.addr());  // (from the original)
    float S0_2 = std::bit_cast<float>(*global_0020707c);
    *gptr<u32>(r0 + 0x334u) = *gptr<u32>(r0 + 0x334u) | 0x40u;  // (from the original)
    *frame.at<u32>(0) = 0;
    *frame.at<u32>(4) = 0;
    float S1_2 = std::bit_cast<float>(*global_00207080);
    gptr<Local_00206f7c_r2_2> r2_2 = gptr<Local_00206f7c_r2_2>(frame.at(8).addr());
    *frame.at<u32>(8) = 0;
    *frame.at<u32>(0xc) = 0;  // (from the original)
    *frame.at<u32>(0x10) = 0;  // (from the original)
    *frame.at<u32>(0x14) = 0;  // (from the original)
    *frame.at<u32>(0x18) = 0;  // (from the original)
    r2_2->word_0 = std::bit_cast<u32>(S0_2);
    r2_2->word_4 = std::bit_cast<u32>(S1_2);
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    u32 r0_3 = call_0056878c(r0 + 4u, 0x887574u);  // (from the original)
    *frame.at<u32>(0) = r0_3;
    u32 r0_4 = *gptr<u32>(r0 + 0x17cu);  // (from the original)
    *frame.at<u32>(0x10) = 0;  // (from the original)
    *frame.at<u32>(4) = r0_4;
    *frame.at<u32>(0x14) = 0;  // (from the original)
    call_002b6a00(r0 + 0x180u, frame.at(0).addr());  // (from the original)
    call_002f7508(r0 + 0x260u, r0 + 0x180u, 1u);  // (from the original)
    call_002f6a30(r0 + 0x260u, 0u);  // (from the original)
    *gptr<u32>(r0 + 0x250u) = 0x10003f6;  // (from the original)
    *gptr<u8>(r0 + 0x25bu) = 1;  // (from the original)
    *gptr<u8>(r0 + 0x25cu) = 1;  // (from the original)
    *gptr<u32>(r0 + 0x24cu) = 0x1000403;  // (from the original)
    *gptr<u8>(r0 + 0x25au) = 1;  // (from the original)
    *gptr<u16>(0x330u + r0) = 3;  // (from the original)
}

}  // namespace d_00206f7c
GUEST_EXPORT_FRAMED(0x00206f7c, d_00206f7c::f_00206f7c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00207168: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00207168 {

inline constexpr guest::Function<0x00207190, u32(u32, u32, u32, u32)> call_00207190;  // (from the original)

u32 f_00207168(u32 r0_unused, u32 r1_unused, u32 r2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    *frame.at<u16>(0) = 0;
    *frame.at<u16>(2) = u16(r2);
    *frame.at<u16>(4) = 0;
    call_00207190(guest::cpu()->r[0], guest::cpu()->r[1], frame.at(0).addr(), guest::cpu()->r[3]);
    return guest::cpu()->r[0];
}

}  // namespace d_00207168
GUEST_EXPORT_FRAMED(0x00207168, d_00207168::f_00207168, 0x4010);  // pushes {r4, lr} first, as the original

// f_00207330: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00207330 {

inline guest::global<u32, 0x00957308> global_00957308;  // (from the original)
inline constexpr guest::Function<0x001391d8, u32(u32, u32, u32, u32)> call_001391d8;  // (from the original)
inline constexpr guest::Function<0x00207b1c, u32(u32, u32)> call_00207b1c;  // (from the original)

u32 f_00207330(u32 r0_unused, u32 r1) {
    u32 r0_1 = call_001391d8(0x24u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    if (r0_1 != 0) {
        r0_1 = call_00207b1c(r0_1, guest::cpu()->r[1]);
    }
    *global_00957308 = r0_1;
    return !(r0_1 == 0);
}

}  // namespace d_00207330
GUEST_EXPORT_FRAMED(0x00207330, d_00207330::f_00207330, 0x4010);  // pushes {r4, lr} first, as the original

// f_0020758c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020758c {

inline constexpr guest::Function<0x00207750, u32(u32, u32, u32, u32)> call_00207750;  // (from the original)
inline constexpr guest::Function<0x002e6944, u32(u32, u32)> call_002e6944;  // (from the original)
inline constexpr guest::Function<0x003166a8, u32(u32, u32, u32, u32)> call_003166a8;  // (from the original)

u32 f_0020758c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    call_003166a8(frame.at(0).addr(), r1, r2, r3);
    u32 r0_3 = call_00207750(frame.at(0).addr(), r0, r2, r1);
    call_002e6944(frame.at(0).addr(), guest::cpu()->r[1]);
    return r0_3;
}

}  // namespace d_0020758c
GUEST_EXPORT_FRAMED(0x0020758c, d_0020758c::f_0020758c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0020763c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020763c {

struct __attribute__((packed)) Local_0020763c_ea_11 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0020763c_ea_11, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0020763c_ea_11, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x00952c3c> global_00952c3c;  // (from the original)
inline guest::global<u32, 0x00957310> global_00957310;  // (from the original)
inline guest::global<u32, 0x009752e0> global_009752e0;  // (from the original)
inline constexpr guest::Function<0x001316b8, u32(u32, u32, u32, u32)> call_001316b8;  // (from the original)
inline constexpr guest::Function<0x0054ee94, u32(u32, u32, u32, u32)> call_0054ee94;  // (from the original)

void f_0020763c(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x38);  // the original's stack frame
    *frame.at<u32>(8) = 0x9047f8;  // (from the original)
    *frame.at<u32>(0x10) = 0;  // (from the original)
    *frame.at<u32>(0x14) = 0;  // (from the original)
    *frame.at<u32>(0xc) = 0x8c9f1c;  // (from the original)
    *frame.at<u8>(0x24) = 1;  // (from the original)
    *frame.at<u32>(0x20) = 0;  // (from the original)
    *frame.at<u8>(0x25) = 1;  // (from the original)
    *frame.at<u32>(0x28) = 0;  // (from the original)
    *frame.at<u32>(0x2c) = 0;  // (from the original)
    *frame.at<u8>(0x30) = 0;  // (from the original)
    u32 r0_1 = *global_00952c3c;
    gptr<Local_0020763c_ea_11> ea_11 = gptr<Local_0020763c_ea_11>(frame.at(0x18).addr());  // (from the original)
    ea_11->word_0 = r0_1;
    ea_11->word_4 = 0x80;  // (from the original)
    *frame.at<u32>(0xc) = *global_00957310;  // (from the original)
    u32 r0_3 = call_001316b8(*gptr<u32>(*global_009752e0 + 0x1cu), frame.at(8).addr(), r2, r3);  // (from the original)
    *gptr<u32>(r0 + 0xcu) = r0_3;  // (from the original)
    *frame.at<u32>(0) = 0;
    *frame.at<u32>(4) = 0;
    call_0054ee94(*gptr<u32>(r0 + 4u), *global_00952c3c, r0_3, 1u);
}

}  // namespace d_0020763c
GUEST_EXPORT_FRAMED(0x0020763c, d_0020763c::f_0020763c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00207710: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00207710 {

struct __attribute__((packed)) Object_00207710_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u8 unknown_8[0x4];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_00207710_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00207710_0, word_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x002ffb64, u32(u32, u32)> call_002ffb64;  // (from the original)
inline constexpr guest::Function<0x0054ee44, u32(u32, u32, u32, u32)> call_0054ee44;  // (from the original)

void f_00207710(gptr<Object_00207710_0> arg0) {
    call_0054ee44(arg0->word_4, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r0_2 = arg0->word_c;
    if (r0_2 == 0) {
        return;
    }
    call_002ffb64(r0_2, r1_1);
    arg0->word_c = 0;
}

}  // namespace d_00207710
GUEST_EXPORT_FRAMED(0x00207710, d_00207710::f_00207710, 0x4010);  // pushes {r4, lr} first, as the original

// f_00207750: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00207750 {

inline guest::global<u32, 0x00957308> global_00957308;  // (from the original)
inline constexpr guest::Function<0x002e61cc, u32(u32, u32, u32, u32)> call_002e61cc;  // (from the original)
inline constexpr guest::Function<0x002e64bc, u32(u32, u32, u32, u32)> call_002e64bc;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x0054fbb0, u32(u32, u32, u32, u32)> call_0054fbb0;  // (from the original)
inline constexpr guest::Function<0x0072072c, u32(u32, u32, u32, u32)> call_0072072c;  // (from the original)

u32 f_00207750(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r4_1 = r2;
    call_002e64bc(r0, r1, r2, r3);
    u32 r0_1 = 0u;
    if (r4_1 == 3u || r4_1 == 4u) {
        r0_1 = 1u;
    } else if (s32(r4_1) >= 5) {
        r0_1 = 2u;
        r4_1 = 0u;
    }
    u32 r12_1 = *gptr<u32>(*global_00957308 + 4u);
    *frame.at<u32>(0) = r0_1;
    *frame.at<u32>(4) = r4_1 & 0xffu;  // (from the original)
    *frame.at<u32>(8) = ~0u;
    u32 r0_2 = call_0054fbb0(r12_1, r0 + 0xcu, r3, r1);  // (from the original)
    u32 r1_2 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        u32 r0_3 = call_0072072c(r0, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_2 = guest::cpu()->r[1];
        if (r0_3 != 0) {
            u32 r0_4 = call_002f74c8(r0_3, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
            u32 r0_5 = call_002f74e0(4u, r0_4, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1_2 = guest::cpu()->r[1];
            if (r0_5 != 0) {
                call_002e61cc(r0, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
                r1_2 = guest::cpu()->r[1];
            }
        }
    }
    guest::cpu()->r[1] = r1_2;
    return r0_2;
}

}  // namespace d_00207750
GUEST_EXPORT_FRAMED(0x00207750, d_00207750::f_00207750, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0020968c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020968c {

struct __attribute__((packed)) Object_0020968c_0 {
    u8 unknown_0[0x4fc];  // (not used here)
    u32 word_4fc;
};
GUEST_OFFSET(Object_0020968c_0, word_4fc, 0x4fc);  // (from the original)

inline constexpr guest::Function<0x00132364, u32(u32, u32, u32, u32)> call_00132364;  // (from the original)
inline constexpr guest::Function<0x001323b4, u32(u32, u32, u32, u32)> call_001323b4;  // (from the original)
inline constexpr guest::Function<0x002cd0e0, u32(u32)> call_002cd0e0;  // (from the original)

u32 f_0020968c(gptr<Object_0020968c_0> arg0) {
    if (arg0->word_4fc == 1u) {
        call_00132364(arg0.addr() + 0x170u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    }
    call_001323b4(arg0.addr() + 0x24u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    if (arg0->word_4fc == 0) {
        call_002cd0e0(arg0.addr() + 0xb60u);  // (from the original)
    }
    return 1u;
}

}  // namespace d_0020968c
GUEST_EXPORT_FRAMED(0x0020968c, d_0020968c::f_0020968c, 0x4010);  // pushes {r4, lr} first, as the original

// f_00209770: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00209770 {

inline constexpr guest::Function<0x00569dc4, u32(u32, u32, u32, u32)> call_00569dc4;  // (from the original)
inline constexpr guest::Function<0x0056a974, u32(u32, u32, u32, u32)> call_0056a974;  // (from the original)

u32 f_00209770(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r0_1 = call_00569dc4(r0, r1, r2, r3);
    *frame.at<u32>(4) = 0x2097a8;  // (from the original)
    *frame.at<u32>(0) = 0x9047f8;  // (from the original)
    u32 r0_2 = call_0056a974(0xabe0b8u, frame.at(0).addr(), *gptr<u32>(r0_1 + 4u), 0x80u);  // (from the original)
    return r0_2;
}

}  // namespace d_00209770
GUEST_EXPORT_FRAMED(0x00209770, d_00209770::f_00209770, 0x4000);  // pushes {lr} first, as the original

// f_00209c98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00209c98 {

struct __attribute__((packed)) Local_00209c98_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00209c98_ea_4, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00209c98_ea_4, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_00209c98_ea_6 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00209c98_ea_6, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00209c98_ea_6, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_00209c98_r0_11 {
    u8 unknown_0[0x510];  // (not used here)
    u32 word_510;
    u8 byte_514;
    u8 unknown_515[0x1b];  // (not used here)
    u8 byte_530;
};
GUEST_OFFSET(Local_00209c98_r0_11, word_510, 0x510);  // (from the original)
GUEST_OFFSET(Local_00209c98_r0_11, byte_514, 0x514);  // (from the original)
GUEST_OFFSET(Local_00209c98_r0_11, byte_530, 0x530);  // (from the original)

struct __attribute__((packed)) Local_00209c98_r1_5 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00209c98_r1_5, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00209c98_r1_5, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_00209c98_r1_6 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00209c98_r1_6, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00209c98_r1_6, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_00209c98_r1_9 {
    u8 unknown_0[0x190];  // (not used here)
    u8 byte_190;
    u8 byte_191;
    u8 byte_192;
    u8 byte_193;
    u32 word_194;
};
GUEST_OFFSET(Local_00209c98_r1_9, byte_190, 0x190);  // (from the original)
GUEST_OFFSET(Local_00209c98_r1_9, byte_191, 0x191);  // (from the original)
GUEST_OFFSET(Local_00209c98_r1_9, byte_192, 0x192);  // (from the original)
GUEST_OFFSET(Local_00209c98_r1_9, byte_193, 0x193);  // (from the original)
GUEST_OFFSET(Local_00209c98_r1_9, word_194, 0x194);  // (from the original)

inline guest::global<u32, 0x00209dd8> global_00209dd8;  // (from the original)
inline guest::global<u32, 0x008877e4> global_008877e4;  // (from the original)
inline guest::global<u32, 0x008877e8> global_008877e8;  // (from the original)
inline constexpr guest::Function<0x001207d8, u32(u32, u32, u32, u32)> call_001207d8;  // (from the original)
inline constexpr guest::Function<0x00125aec, u32(u32, u32, u32, u32)> call_00125aec;  // (from the original)
inline constexpr guest::Function<0x00125e3c, u32(u32, u32, u32, u32)> call_00125e3c;  // (from the original)
inline constexpr guest::Function<0x002cd444, u32(u32, u32, u32, u32)> call_002cd444;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x0033f0d8, u32(u32, u32, u32, u32)> call_0033f0d8;  // (from the original)

u32 f_00209c98(gptr<SelectWindow> arg0, float S0) {
    arg0->word_4 = 0;
    arg0->byte_8 = 0;
    u32 r2_1 = *global_008877e8;
    arg0->word_c = *global_008877e4;
    arg0->word_10 = r2_1;
    arg0->word_14 = 0;
    arg0->byte_18 = 0;
    arg0->word_1c = 0;
    arg0->word_0 = 0x8ed7e0;  // (from the original)
    arg0->word_20 = 0;
    u32 r0_2 = call_00125e3c(arg0.addr() + 0x24u, 0x8ed7e0u, r2_1, arg0.addr() + 0xcu);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_2 = guest::cpu()->r[2];
    u32 r3_2 = guest::cpu()->r[3];
    u32 r0_4 = call_001207d8(r0_2 + 0x14cu, r1_1, r2_2, r3_2);  // (from the original)
    u32 r1_2 = guest::cpu()->r[1];
    u32 r2_3 = guest::cpu()->r[2];
    u32 r3_3 = guest::cpu()->r[3];
    u32 r0_6 = call_00125aec(r0_4 + 0x248u, r1_2, r2_3, r3_3);  // (from the original)
    u32 r1_3 = guest::cpu()->r[1];
    u32 r2_4 = guest::cpu()->r[2];
    u32 r3_4 = guest::cpu()->r[3];
    u32 r0_8 = call_00125aec(r0_6 + 0x28u, r1_3, r2_4, r3_4);  // (from the original)
    u32 r1_4 = guest::cpu()->r[1];
    u32 r2_5 = guest::cpu()->r[2];
    u32 r3_5 = guest::cpu()->r[3];
    u32 r0_10 = call_00125aec(r0_8 + 0x28u, r1_4, r2_5, r3_5);  // (from the original)
    u32 r2_6 = guest::cpu()->r[2];
    u32 r3_6 = guest::cpu()->r[3];
    gptr<Local_00209c98_r0_11> r0_11 = gptr<Local_00209c98_r0_11>(r0_10 - 0x408u);  // (from the original)
    *gptr<u32>(r0_11.addr() + 0x430u) = 0;  // (from the original)
    *gptr<u32>(r0_11.addr() + 0x434u) = 0;  // (from the original)
    u32 r5_1 = ~0u;
    *gptr<u32>(r0_11.addr() + 0x438u) = 0;  // (from the original)
    gptr<Local_00209c98_ea_4> ea_4 = gptr<Local_00209c98_ea_4>(r0_11.addr() + 0x4fcu);  // (from the original)
    ea_4->word_0 = 0;
    ea_4->word_4 = r5_1;
    *gptr<u32>(r0_11.addr() + 0x504u) = r5_1;  // (from the original)
    gptr<Local_00209c98_ea_6> ea_6 = gptr<Local_00209c98_ea_6>(r0_11.addr() + 0x508u);  // (from the original)
    ea_6->word_0 = 0;
    ea_6->word_4 = r5_1;
    float S0_5 = std::bit_cast<float>(*global_00209dd8);
    gptr<Local_00209c98_r1_5> r1_5 = gptr<Local_00209c98_r1_5>(r0_11.addr() + 0x518u);  // (from the original)
    r0_11->word_510 = r5_1;
    r0_11->byte_514 = 0;
    r1_5->word_0 = std::bit_cast<u32>(S0_5);
    r1_5->word_4 = std::bit_cast<u32>(S0_5);
    gptr<Local_00209c98_r1_6> r1_6 = gptr<Local_00209c98_r1_6>(r0_11.addr() + 0x520u);  // (from the original)
    r1_6->word_0 = std::bit_cast<u32>(S0_5);
    r1_6->word_4 = std::bit_cast<u32>(S0_5);
    u32 r1_7 = r0_11.addr() + 0x400u;  // (from the original)
    r0_11->byte_530 = 0;
    *gptr<u32>(r1_7 + 0x134u) = std::bit_cast<u32>(S0_5);  // (from the original)
    guest::cpu()->s[0] = S0_5;
    u32 r0_13 = call_0033f0d8(r0_11.addr() + 0x538u, r1_7, r2_6, r3_6);  // (from the original)
    u32 r0_15 = call_00301d0c(r0_13 + 0xe8u, 0x2b6de0u, 0xe0u, 6u);  // (from the original)
    u32 r3_7 = guest::cpu()->r[3];
    u32 r0_16 = r0_15 + 0x540u;  // (from the original)
    u32 r0_17 = call_002cd444(r0_16, r0_16 + 0x118u, 1u, r3_7);  // (from the original)
    *gptr<u32>(r0_17 + 0xe4u) = 0x8ef270;  // (from the original)
    *gptr<u32>(r0_17) = 0x8ef22c;  // (from the original)
    u32 r0_19 = call_00301d0c(r0_17 + 0x118u, 0x2e0994u, 0x518u, 1u);  // (from the original)
    u32 r0_20 = r0_19 - 0xc78u;  // (from the original)
    gptr<Local_00209c98_r1_9> r1_9 = gptr<Local_00209c98_r1_9>(r0_20 + 0x1000u);  // (from the original)
    r1_9->byte_190 = 0;
    r1_9->byte_191 = 0;
    r1_9->byte_192 = 0;
    r1_9->byte_193 = 0;
    r1_9->word_194 = r5_1;
    guest::cpu()->r[1] = r1_9.addr();
    return r0_20;
}

}  // namespace d_00209c98
GUEST_EXPORT_FRAMED(0x00209c98, d_00209c98::f_00209c98, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00209f40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00209f40 {

struct __attribute__((packed)) Object_00209f40_0 {
    u8 unknown_0[0x1470];  // (not used here)
    u32 word_1470;
    u32 word_1474;
    u32 word_1478;
    u8 byte_147c;
    u8 unknown_147d[0x3];  // (not used here)
    u32 word_1480;
};
GUEST_OFFSET(Object_00209f40_0, word_1470, 0x1470);  // (from the original)
GUEST_OFFSET(Object_00209f40_0, word_1474, 0x1474);  // (from the original)
GUEST_OFFSET(Object_00209f40_0, word_1478, 0x1478);  // (from the original)
GUEST_OFFSET(Object_00209f40_0, byte_147c, 0x147c);  // (from the original)
GUEST_OFFSET(Object_00209f40_0, word_1480, 0x1480);  // (from the original)

struct __attribute__((packed)) Object_00209f40_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00209f40_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00209f40_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00209f40_1, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Object_00209f40_2 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_00209f40_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00209f40_2, word_8, 0x8);  // (from the original)

inline guest::global<u32, 0x0095731c> global_0095731c;  // (from the original)

u32 f_00209f40(gptr<Object_00209f40_0> arg0, gptr<Object_00209f40_1> arg1, gptr<Object_00209f40_2> arg2, float S0, float S1) {
    u32 fpsr = guest::cpu()->fpscr;
    u32 r3_1 = arg0->word_1480 + 1u;
    arg0->word_1480 = r3_1;
    if (s32(r3_1) >= 0x12c || arg0->byte_147c == 0) {  // (from the original)
        return 0u;
    }
    float S0_1 = std::bit_cast<float>(arg0->word_1470) - std::bit_cast<float>(arg2->word_0);
    float S1_1 = std::bit_cast<float>(arg0->word_1478) - std::bit_cast<float>(arg2->word_8);
    float S0_2 = S0_1 * S0_1 + S1_1 * S1_1;
    float S1_2 = std::bit_cast<float>(*global_0095731c);
    u32 fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(sqrtf(S0_2), S1_2);  // (from the original)
    if (fpsr_1 >> 0x1e & 1 || fpsr_1 >> 0x1f != (fpsr_1 >> 0x1c & 1)) {  // (from the original)
        arg0->byte_147c = 0;
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_2;
        return 0u;
    }
    arg1->word_0 = arg0->word_1470;
    arg1->word_4 = arg0->word_1474;
    arg1->word_8 = arg0->word_1478;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    return 1u;
}

}  // namespace d_00209f40
GUEST_EXPORT(0x00209f40, d_00209f40::f_00209f40);

// f_0020a35c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020a35c {

struct __attribute__((packed)) Object_0020a35c_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(Object_0020a35c_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0020a35c_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0020a35c_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0020a35c_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0020a35c_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0020a35c_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0020a35c_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_0020a35c_0, word_20, 0x20);  // (from the original)

struct __attribute__((packed)) Local_0020a35c_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0020a35c_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0020a35c_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0020a35c_ea_1, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x00307040, u32(u32, u32, u32)> call_00307040;  // (from the original)

u32 f_0020a35c(gptr<Object_0020a35c_0> arg0, u32 r1) {
    u32 r0_1 = arg0.addr() + 4u;
    arg0->word_4 = 0x10;  // (from the original)
    arg0->word_10 = r0_1 + 0x20u;  // (from the original)
    arg0->word_14 = 0;
    arg0->word_18 = 0;
    arg0->word_8 = 0x10;  // (from the original)
    arg0->word_c = 0x100;  // (from the original)
    u32 r4_1 = r0_1 + 0x18u;  // (from the original)
    arg0->word_1c = 0;
    arg0->word_20 = r0_1 + 0x1420u;  // (from the original)
    u32 r0_3 = call_00301d0c(r0_1 + 0x20u, 0x274724u, 0x14u, 0x100u);  // (from the original)
    u32 r0_4 = r0_3 + 0x1400u;  // (from the original)
    u32 r0_5 = call_00307040(r0_4, 0x100u, r0_4 + 0x2cu);  // (from the original)
    gptr<Local_0020a35c_ea_1> ea_1 = gptr<Local_0020a35c_ea_1>(r0_5 + 0x14u);  // (from the original)
    ea_1->word_0 = 0x10;  // (from the original)
    ea_1->word_4 = 0x10;  // (from the original)
    ea_1->word_8 = 0;
    *gptr<u32>(r0_5) = 0x8fa3b4;  // (from the original)
    *gptr<u32>(r0_5 + 0x20u) = 0;  // (from the original)
    *gptr<u32>(r0_5 + 0x24u) = 0;  // (from the original)
    *gptr<u32>(r0_5 + 0x28u) = 0;  // (from the original)
    u32 r0_6 = r0_5 - 0x1424u;  // (from the original)
    *gptr<u32>(r0_6) = r1;
    *gptr<u8>(0x147cu + r0_6) = 0;  // (from the original)
    *gptr<u32>(0x1480u + r0_6) = 0;  // (from the original)
    return r0_6;
}

}  // namespace d_0020a35c
GUEST_EXPORT_FRAMED(0x0020a35c, d_0020a35c::f_0020a35c, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0020a418: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020a418 {


void f_0020a418(gptr<SoundFaderEx> arg0, float S0_unused, float S1) {
    u32 r1_1 = arg0->word_14;
    if (s32(r1_1) > 0) {
        float S0_1 = std::bit_cast<float>(arg0->word_4);
        u32 r1_2 = r1_1 - 1u;
        arg0->word_14 = r1_2;
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->s[0] = S0_1;
        return;
    }
    u32 r1_3 = arg0->word_10;
    u32 res_1 = r1_3;
    u32 vf_1 = (r1_3 & (r1_3 ^ res_1)) >> 0x1f;  // (from the original)
    if (res_1 == 0) {
        r1_3 = ~0u;
        arg0->word_10 = r1_3;
    }
    if (res_1 == 0 || res_1 >> 0x1f != vf_1) {  // (from the original)
        float S0_2 = std::bit_cast<float>(arg0->word_4);
        guest::cpu()->r[1] = r1_3;
        guest::cpu()->s[0] = S0_2;
        return;
    }
    u32 res_2 = r1_3 - 1u;
    arg0->word_10 = res_2;
    if (res_2 == 0) {
        u32 r1_4 = arg0->word_8;
        arg0->word_4 = r1_4;
        float S0_3 = std::bit_cast<float>(arg0->word_4);
        guest::cpu()->r[1] = r1_4;
        guest::cpu()->s[0] = S0_3;
        return;
    }
    float S1_1 = std::bit_cast<float>(arg0->word_c);
    arg0->word_4 = std::bit_cast<u32>(std::bit_cast<float>(arg0->word_4) + S1_1);
    float S0_4 = std::bit_cast<float>(arg0->word_4);
    guest::cpu()->r[1] = res_2;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_0020a418
GUEST_EXPORT(0x0020a418, d_0020a418::f_0020a418);

// f_0020a474: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020a474 {

struct __attribute__((packed)) Object_0020a474_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Object_0020a474_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0020a474_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0020a474_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0020a474_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0020a474_0, word_14, 0x14);  // (from the original)


void f_0020a474(gptr<Object_0020a474_0> arg0, u32 r1, u32 r2, float S0, float S1) {
    if (s32(r1) < 0) {
        r1 = 0u;
    }
    arg0->word_8 = std::bit_cast<u32>(S0);
    if (r1 == 0) {
        r1 = ~0u;
        arg0->word_4 = std::bit_cast<u32>(S0);
        arg0->word_10 = r1;
    } else {
        float S2_1 = std::bit_cast<float>(arg0->word_4);
        arg0->word_10 = r1;
        S0 = S0 - S2_1;
        S1 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r1))));
        arg0->word_c = std::bit_cast<u32>(S0 / S1);
    }
    if (s32(r2) < 0) {
        r2 = 0u;
    }
    arg0->word_14 = r2;
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
}

}  // namespace d_0020a474
GUEST_EXPORT(0x0020a474, d_0020a474::f_0020a474);

// f_0020a64c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020a64c {


void f_0020a64c(gptr<SoundObjFieldObj> arg0, u32 r1) {
    if (r1 >= 0xeu || arg0->word_3c == r1) {  // (from the original)
        return;
    }
    u32 r2_1 = arg0->word_40;
    arg0->word_3c = r1;
    arg0->word_40 = r2_1 + 1u;
}

}  // namespace d_0020a64c
GUEST_EXPORT(0x0020a64c, d_0020a64c::f_0020a64c);

// f_0020acb0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020acb0 {

struct __attribute__((packed)) Object_0020acb0_0 {
    u8 unknown_0[0x3c];  // (not used here)
    u32 word_3c;
};
GUEST_OFFSET(Object_0020acb0_0, word_3c, 0x3c);  // (from the original)


void f_0020acb0(gptr<Object_0020acb0_0> arg0) {
    arg0->word_3c = 0xb;  // (from the original)
    guest::cpu()->r[1] = 0xbu;  // (from the original)
}

}  // namespace d_0020acb0
GUEST_EXPORT(0x0020acb0, d_0020acb0::f_0020acb0);

// f_0020acc0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020acc0 {

struct __attribute__((packed)) Object_0020acc0_0 {
    u32 word_0;
    u8 unknown_4[0x33];  // (not used here)
    u8 byte_37;
};
GUEST_OFFSET(Object_0020acc0_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0020acc0_0, byte_37, 0x37);  // (from the original)


u32 f_0020acc0(gptr<Object_0020acc0_0> arg0, u32 r1) {
    u32 r2_1 = s8(arg0->byte_37);
    if (r2_1 == r1) {
        guest::cpu()->r[1] = r1;
        return arg0.addr();
    }
    arg0->byte_37 = u8(r1);
    u32 r1_1 = *gptr<u32>(arg0->word_0 + 0x18u);  // (from the original)
    // virtual function 6 of arg0.addr()
    return guest::call_address<u32>(r1_1, arg0.addr(), r1_1, r2_1, guest::cpu()->r[3]);
}

}  // namespace d_0020acc0
GUEST_EXPORT(0x0020acc0, d_0020acc0::f_0020acc0);

// f_0020ace8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020ace8 {

struct __attribute__((packed)) Object_0020ace8_0 {
    u32 word_0;
    u8 unknown_4[0x32];  // (not used here)
    u8 byte_36;
};
GUEST_OFFSET(Object_0020ace8_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0020ace8_0, byte_36, 0x36);  // (from the original)


void f_0020ace8(gptr<Object_0020ace8_0> arg0, u32 r1) {
    u32 r2_1 = s8(arg0->byte_36);
    if (r2_1 == r1) {
        return;
    }
    arg0->byte_36 = u8(r1);
    u32 r1_1 = *gptr<u32>(arg0->word_0 + 0x18u);  // (from the original)
    // virtual function 6 of arg0.addr()
    guest::call_address<u32>(r1_1, arg0.addr(), r1_1, r2_1, guest::cpu()->r[3]);
}

}  // namespace d_0020ace8
GUEST_EXPORT(0x0020ace8, d_0020ace8::f_0020ace8);

// f_0020ada8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020ada8 {

struct __attribute__((packed)) Object_0020ada8_0 {
    u8 unknown_0[0x39];  // (not used here)
    u8 byte_39;
};
GUEST_OFFSET(Object_0020ada8_0, byte_39, 0x39);  // (from the original)

inline guest::global<u32, 0x0094d080> global_0094d080;  // (from the original)

void f_0020ada8(gptr<Object_0020ada8_0> arg0, u32 r1) {
    u32 res_1 = r1 + 0xfefff986u;  // (from the original)
    u32 zf_1 = res_1 == 0;
    if (!zf_1) {
        zf_1 = res_1 == 1u;
    }
    if (!zf_1 && res_1 != 2u && res_1 != 3u) {
        guest::cpu()->r[1] = res_1;
        return;
    }
    u32 r1_1 = *gptr<u32>(*global_0094d080 + 0xcf8u);  // (from the original)
    if (r1_1 == 0) {
        arg0->byte_39 = 1;
        guest::cpu()->r[1] = r1_1;
        return;
    }
    u32 r1_2 = *gptr<u32>(r1_1 + 4u);
    if (s32(r1_2) <= s32(0x42200000u)) {  // (from the original)
        arg0->byte_39 = 0;
        guest::cpu()->r[1] = 0u;
        return;
    }
    arg0->byte_39 = 1;
    guest::cpu()->r[1] = r1_2;
}

}  // namespace d_0020ada8
GUEST_EXPORT(0x0020ada8, d_0020ada8::f_0020ada8);

// f_0020ae0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020ae0c {

struct __attribute__((packed)) Object_0020ae0c_0 {
    u32 word_0;
    u8 unknown_4[0x35];  // (not used here)
    u8 byte_39;
};
GUEST_OFFSET(Object_0020ae0c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0020ae0c_0, byte_39, 0x39);  // (from the original)


u32 f_0020ae0c(gptr<Object_0020ae0c_0> arg0, u32 r1) {
    u32 r2_1 = s8(arg0->byte_39);
    if (r2_1 == r1) {
        guest::cpu()->r[1] = r1;
        return arg0.addr();
    }
    arg0->byte_39 = u8(r1);
    u32 r1_1 = *gptr<u32>(arg0->word_0 + 0x18u);  // (from the original)
    // virtual function 6 of arg0.addr()
    return guest::call_address<u32>(r1_1, arg0.addr(), r1_1, r2_1, guest::cpu()->r[3]);
}

}  // namespace d_0020ae0c
GUEST_EXPORT(0x0020ae0c, d_0020ae0c::f_0020ae0c);

// f_0020ae2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020ae2c {

struct __attribute__((packed)) Object_0020ae2c_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_0020ae2c_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0020ae2c_2, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x0020ae7c> global_0020ae7c;  // (from the original)

void f_0020ae2c(gptr<SoundObjBase> arg0, u32 r1, gptr<Object_0020ae2c_2> arg2) {
    u32 fpsr = guest::cpu()->fpscr;
    u32 r3_1 = arg0->word_3c;
    float S0_1 = std::bit_cast<float>(arg2->word_4);
    float S1_1 = std::bit_cast<float>(*global_0020ae7c);
    float S2_1 = std::bit_cast<float>(*gptr<u32>(0x94d0d8u + ((r3_1 << 3) - r3_1 << 2) + 0x18u));  // (from the original)
    arg0->word_8 = arg2->word_0;
    float S0_2 = S0_1 + S2_1;
    u32 fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S0_2, S1_1);  // (from the original)
    if (fpsr_1 >> 0x1f == (fpsr_1 >> 0x1c & 1)) {  // (from the original)
        arg0->word_c = std::bit_cast<u32>(S0_2);
        u32 r1_1 = *gptr<u32>(r1 + 4u);
        arg0->word_10 = r1_1;
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_1;
        return;
    }
    float S1_2 = std::bit_cast<float>(arg0->word_30);
    float S0_3 = S1_2 * S0_2;
    arg0->word_c = std::bit_cast<u32>(S0_3);
    u32 r1_2 = *gptr<u32>(r1 + 4u);
    arg0->word_10 = r1_2;
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_2;
}

}  // namespace d_0020ae2c
GUEST_EXPORT(0x0020ae2c, d_0020ae2c::f_0020ae2c);

// f_0020aedc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020aedc {

inline guest::global<u32, 0x0094d080> global_0094d080;  // (from the original)
inline constexpr guest::Function<0x001d7b90, u32(u32, u32)> call_001d7b90;  // (from the original)

u32 f_0020aedc(gptr<SoundObjBase> arg0, u32 r1) {
    u32 r0_1 = arg0->byte_34;
    if (r0_1 == 0) {
        return r0_1;
    }
    call_001d7b90(*global_0094d080 + 0x754u, arg0.addr());  // (from the original)
    arg0->byte_34 = 0;
    return 0u;
}

}  // namespace d_0020aedc
GUEST_EXPORT_FRAMED(0x0020aedc, d_0020aedc::f_0020aedc, 0x4010);  // pushes {r4, lr} first, as the original

// f_0020af18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020af18 {

inline guest::global<u32, 0x0020af9c> global_0020af9c;  // (from the original)
inline guest::global<u32, 0x0020afa0> global_0020afa0;  // (from the original)
inline guest::global<u32, 0x0020afa4> global_0020afa4;  // (from the original)
inline guest::global<u32, 0x0020afa8> global_0020afa8;  // (from the original)
inline guest::global<u32, 0x0020afac> global_0020afac;  // (from the original)

void f_0020af18(gptr<SoundObjBase> arg0) {
    arg0->word_4 = 8;
    float S0_1 = std::bit_cast<float>(*global_0020af9c);
    arg0->word_0 = 0x8ed810;  // (from the original)
    arg0->word_8 = std::bit_cast<u32>(S0_1);
    arg0->word_c = std::bit_cast<u32>(S0_1);
    float S1_1 = std::bit_cast<float>(*global_0020afa0);
    float S0_2 = std::bit_cast<float>(*global_0020afa4);
    arg0->word_10 = std::bit_cast<u32>(std::bit_cast<float>(*global_0020afa8));
    arg0->word_14 = std::bit_cast<u32>(S1_1);
    arg0->word_18 = std::bit_cast<u32>(S0_2);
    arg0->word_1c = std::bit_cast<u32>(S0_2);
    arg0->word_20 = std::bit_cast<u32>(S0_2);
    arg0->word_24 = std::bit_cast<u32>(S1_1);
    float S0_3 = std::bit_cast<float>(*global_0020afac);
    arg0->word_28 = 0;
    arg0->word_2c = std::bit_cast<u32>(S0_3);
    arg0->word_30 = std::bit_cast<u32>(S1_1);
    arg0->byte_34 = 0;
    arg0->byte_35 = 0;
    arg0->byte_36 = 0;
    arg0->byte_37 = 1;
    arg0->byte_38 = 0;
    arg0->byte_39 = 1;
    arg0->word_40 = 0;
    arg0->word_3c = 3;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_0020af18
GUEST_EXPORT(0x0020af18, d_0020af18::f_0020af18);

// f_0020afb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020afb8 {

inline constexpr guest::Function<0x0020a4cc, u32(u32, u32, u32, u32)> call_0020a4cc;  // (from the original)

u32 f_0020afb8(gptr<SoundObjFall> arg0) {
    arg0->word_3c = 5;
    arg0->byte_35 = 1;
    arg0->byte_37 = 0;
    u32 r0_1 = arg0->byte_34;
    if (r0_1 == 0) {
        arg0->byte_39 = 0;
        r0_1 = call_0020a4cc(arg0.addr(), guest::cpu()->r[1], guest::cpu()->r[2], 0u);
        arg0->word_5c = 0x1000786;  // (from the original)
    }
    return r0_1;
}

}  // namespace d_0020afb8
GUEST_EXPORT_FRAMED(0x0020afb8, d_0020afb8::f_0020afb8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0020b0d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020b0d4 {

struct __attribute__((packed)) Object_0020b0d4_0 {
    u8 unknown_0[0x34];  // (not used here)
    u8 byte_34;
    u8 unknown_35[0x7];  // (not used here)
    u32 word_3c;
    u8 unknown_40[0x1c];  // (not used here)
    u32 word_5c;
    u8 byte_60;
    u8 unknown_61[0x3];  // (not used here)
    u32 word_64;
    u32 word_68;
    u32 word_6c;
};
GUEST_OFFSET(Object_0020b0d4_0, byte_34, 0x34);  // (from the original)
GUEST_OFFSET(Object_0020b0d4_0, word_3c, 0x3c);  // (from the original)
GUEST_OFFSET(Object_0020b0d4_0, word_5c, 0x5c);  // (from the original)
GUEST_OFFSET(Object_0020b0d4_0, byte_60, 0x60);  // (from the original)
GUEST_OFFSET(Object_0020b0d4_0, word_64, 0x64);  // (from the original)
GUEST_OFFSET(Object_0020b0d4_0, word_68, 0x68);  // (from the original)
GUEST_OFFSET(Object_0020b0d4_0, word_6c, 0x6c);  // (from the original)

struct __attribute__((packed)) Object_0020b0d4_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_0020b0d4_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0020b0d4_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0020b0d4_2, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_0020b0d4_r0_2 {
    u8 unknown_0[0xd11];  // (not used here)
    u8 byte_d11;
    u8 unknown_d12[0x2];  // (not used here)
    u32 word_d14;
    u32 word_d18;
};
GUEST_OFFSET(Local_0020b0d4_r0_2, byte_d11, 0xd11);  // (from the original)
GUEST_OFFSET(Local_0020b0d4_r0_2, word_d14, 0xd14);  // (from the original)
GUEST_OFFSET(Local_0020b0d4_r0_2, word_d18, 0xd18);  // (from the original)

inline guest::global<u32, 0x0094d080> global_0094d080;  // (from the original)
inline constexpr guest::Function<0x006b4aa8, u32(u32, u32, u32, u32)> call_006b4aa8;  // (from the original)
inline constexpr guest::Function<0x0081fe54, u32(u32, u32, u32, u32)> call_0081fe54;  // (from the original)
inline constexpr guest::Function<0x00820098, u32(u32, u32, u32, u32)> call_00820098;  // (from the original)

u32 f_0020b0d4(gptr<Object_0020b0d4_0> arg0, u32 r1, gptr<Object_0020b0d4_2> arg2, float S0, float S1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r2 = arg2.addr();
    u32 fpsr = guest::cpu()->fpscr;
    u32 r2_2 = 0;
    u32 r0_1 = arg0->byte_34;
    u32 r7_1 = r1;
    u32 zf_1 = r0_1 == 0;
    if (!zf_1) {
        r0_1 = arg0->word_5c;
        zf_1 = r0_1 + 1u == 0;
    }
    if (!zf_1) {
        u32 r1_1 = arg0->word_3c;
        S1 = std::bit_cast<float>(arg2->word_0);
        r1 = (r1_1 << 3) - r1_1;
        S0 = fabsf(S1);
        r0_1 = 0x94d0d8u + (r1 << 2);  // (from the original)
        float S2_1 = std::bit_cast<float>(*gptr<u32>(r0_1 + 4u));
        u32 fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S0, S2_1);  // (from the original)
        if (!!(fpsr_1 >> 0x1e & 1) || fpsr_1 >> 0x1f != (fpsr_1 >> 0x1c & 1)) {  // (from the original)
            float S3_1 = std::bit_cast<float>(*gptr<u32>(r0_1 + 0x18u));  // (from the original)
            S0 = fabsf(std::bit_cast<float>(arg2->word_4) + S3_1);
            u32 fpsr_2 = fpsr_1 & 0xfffffffu | vfp_cmpf(S0, S2_1);  // (from the original)
            if (!!(fpsr_2 >> 0x1e & 1) || fpsr_2 >> 0x1f != (fpsr_2 >> 0x1c & 1)) {  // (from the original)
                gptr<Local_0020b0d4_r0_2> r0_2 = gptr<Local_0020b0d4_r0_2>(*global_0094d080);
                u32 r1_2 = r0_2->byte_d11;
                if (r1_2 != 0) {
                    if (r1_2 == 1u || r1_2 == 2u) {
                        if (arg0->byte_60 != 0) {
                            goto L_20b254;
                        }
                        arg0->word_64 = std::bit_cast<u32>(S1);
                        arg0->word_68 = arg2->word_4;
                        arg0->word_6c = arg2->word_8;
                        arg0->byte_60 = 1;
                        guest::cpu()->s[0] = S0;
                        guest::cpu()->s[1] = S1;
                        guest::cpu()->s[2] = S2_1;
                        guest::cpu()->s[3] = S3_1;
                        call_00820098(r0, r7_1, r2, guest::cpu()->r[3]);
                        r2 = guest::cpu()->r[2];
                        S0 = guest::cpu()->s[0];
                        S1 = guest::cpu()->s[1];
                        S2_1 = guest::cpu()->s[2];
                        S3_1 = guest::cpu()->s[3];
                        goto L_20b264;
                    }
                    if (r1_2 == 3u) {
                        u32 r1_3 = r0_2->word_d18;
                        u32 r6_1 = s32(r1_3 + (r1_3 >> 0x1f)) >> 1;  // (from the original)
                        if (s32(r0_2->word_d14) < s32(r6_1)) {
                            float S0_1 = std::bit_cast<float>(arg0->word_64);
                            guest::cpu()->s[0] = S0_1;
                            guest::cpu()->s[1] = S1;
                            guest::cpu()->s[2] = S2_1;
                            guest::cpu()->s[3] = S3_1;
                            call_006b4aa8(r6_1, r1_3, 0u, guest::cpu()->r[3]);
                            float S0_2 = guest::cpu()->s[0];
                            *frame.at<u32>(0) = std::bit_cast<u32>(S0_2);
                            float S0_3 = std::bit_cast<float>(arg0->word_68);
                            float S1_1 = std::bit_cast<float>(arg2->word_4);
                            u32 r1_4 = *gptr<u32>(*global_0094d080 + 0xd18u);  // (from the original)
                            guest::cpu()->s[0] = S0_3;
                            guest::cpu()->s[1] = S1_1;
                            call_006b4aa8(r6_1, r1_4, 0u, guest::cpu()->r[3]);
                            float S0_4 = guest::cpu()->s[0];
                            *frame.at<u32>(4) = std::bit_cast<u32>(S0_4);
                            float S1_2 = std::bit_cast<float>(arg2->word_8);
                            float S0_5 = std::bit_cast<float>(arg0->word_6c);
                            u32 r1_5 = *gptr<u32>(*global_0094d080 + 0xd18u);  // (from the original)
                            guest::cpu()->s[0] = S0_5;
                            guest::cpu()->s[1] = S1_2;
                            call_006b4aa8(r6_1, r1_5, 0u, guest::cpu()->r[3]);
                            float S0_6 = guest::cpu()->s[0];
                            *frame.at<u32>(8) = std::bit_cast<u32>(S0_6);
                            guest::cpu()->s[0] = S0_6;
                            call_00820098(r0, r7_1, frame.at(0).addr(), guest::cpu()->r[3]);
                            r2 = guest::cpu()->r[2];
                            S0 = guest::cpu()->s[0];
                            S1 = guest::cpu()->s[1];
                            S2_1 = guest::cpu()->s[2];
                            S3_1 = guest::cpu()->s[3];
                            goto L_20b264;
                        }
                        goto L_20b254;
                    }
                    goto L_20b264;
                }
                guest::cpu()->s[0] = S0;
                guest::cpu()->s[1] = S1;
                guest::cpu()->s[2] = S2_1;
                guest::cpu()->s[3] = S3_1;
                call_00820098(r0, r7_1, r2, guest::cpu()->r[3]);
                r2 = guest::cpu()->r[2];
                S0 = guest::cpu()->s[0];
                S1 = guest::cpu()->s[1];
                S2_1 = guest::cpu()->s[2];
                S3_1 = guest::cpu()->s[3];
                if (arg0->byte_60 != 0) {
                    arg0->byte_60 = 0;
                }
                goto L_20b264;
L_20b254:;
                r2_2 = r0 + 0x64u;  // (from the original)
                guest::cpu()->s[0] = S0;
                guest::cpu()->s[1] = S1;
                guest::cpu()->s[2] = S2_1;
                guest::cpu()->s[3] = S3_1;
                call_00820098(r0, r7_1, r2_2, guest::cpu()->r[3]);
                r2 = guest::cpu()->r[2];
                S0 = guest::cpu()->s[0];
                S1 = guest::cpu()->s[1];
                S2_1 = guest::cpu()->s[2];
                S3_1 = guest::cpu()->s[3];
L_20b264:;
                u32 r1_6 = arg0->word_5c;
                guest::cpu()->s[0] = S0;
                guest::cpu()->s[1] = S1;
                guest::cpu()->s[2] = S2_1;
                guest::cpu()->s[3] = S3_1;
                r0_1 = call_0081fe54(r0, r1_6, r2, guest::cpu()->r[3]);
                r1 = guest::cpu()->r[1];
                S0 = guest::cpu()->s[0];
                S1 = guest::cpu()->s[1];
            }
        }
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0_1;
}

}  // namespace d_0020b0d4
GUEST_EXPORT_FRAMED(0x0020b0d4, d_0020b0d4::f_0020b0d4, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0020b280: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020b280 {

struct __attribute__((packed)) Local_0020b280_r0_6 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0020b280_r0_6, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0020b280_r0_6, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0020b280_r0_6, word_8, 0x8);  // (from the original)

inline guest::global<u32, 0x0020b304> global_0020b304;  // (from the original)
inline constexpr guest::Function<0x0020af18, u32(u32, u32, u32, u32)> call_0020af18;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

u32 f_0020b280(u32 r0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 r0_1 = call_0020af18(r0, r1, r2, r3);
    *gptr<u32>(r0_1) = 0x8f8d88;  // (from the original)
    u32 r0_3 = call_00301d0c(r0_1 + 0x44u, 0x131800u, 4u, 1u);  // (from the original)
    u32 r0_5 = call_00301d0c(r0_3 + 4u, 0x1287a8u, 0x14u, 1u);  // (from the original)
    *gptr<u32>(r0_5 + 0x14u) = ~0u;  // (from the original)
    *gptr<u32>(r0_5 - 0x48u) = 0x8ed874;  // (from the original)
    u32 r1_1 = r0_5 - 0x48u;  // (from the original)
    *gptr<u8>(r0_5 + 0x18u) = 0;  // (from the original)
    float S0_3 = std::bit_cast<float>(*global_0020b304);
    gptr<Local_0020b280_r0_6> r0_6 = gptr<Local_0020b280_r0_6>(r0_5 + 0x1cu);  // (from the original)
    r0_6->word_0 = std::bit_cast<u32>(S0_3);
    r0_6->word_4 = std::bit_cast<u32>(S0_3);
    r0_6->word_8 = std::bit_cast<u32>(S0_3);
    *gptr<u32>(r1_1 + 4u) = 5;
    guest::cpu()->s[0] = S0_3;
    return r1_1;
}

}  // namespace d_0020b280
GUEST_EXPORT_FRAMED(0x0020b280, d_0020b280::f_0020b280, 0x4010);  // pushes {r4, lr} first, as the original

// f_0020b3ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020b3ac {

inline constexpr guest::Function<0x0020a4cc, u32(u32, u32, u32, u32)> call_0020a4cc;  // (from the original)

u32 f_0020b3ac(gptr<SoundObjPond> arg0) {
    arg0->word_3c = 6;
    arg0->byte_35 = 1;
    u32 r0_1 = arg0->byte_34;
    if (r0_1 == 0) {
        arg0->byte_39 = 0;
        r0_1 = call_0020a4cc(arg0.addr(), guest::cpu()->r[1], guest::cpu()->r[2], 1u);
        arg0->word_5c = 0x1000787;  // (from the original)
    }
    return r0_1;
}

}  // namespace d_0020b3ac
GUEST_EXPORT_FRAMED(0x0020b3ac, d_0020b3ac::f_0020b3ac, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0020b494: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020b494 {

inline guest::global<u32, 0x0020b4b0> global_0020b4b0;  // (from the original)
inline constexpr guest::Function<0x0047e100, u32(u32, u32, u32, u32)> call_0047e100;  // (from the original)
inline constexpr guest::Function<0x0047e224, u32(u32, u32, u32, u32)> call_0047e224;  // (from the original)

void f_0020b494(u32 r0, float S0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    call_0047e100(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    float S0_1 = std::bit_cast<float>(*global_0020b4b0);
    guest::cpu()->s[0] = S0_1;
    frame.release();
    call_0047e224(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
}

}  // namespace d_0020b494
GUEST_EXPORT(0x0020b494, d_0020b494::f_0020b494);

// f_0020b9b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020b9b0 {

struct __attribute__((packed)) Local_0020b9b0_r0_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0020b9b0_r0_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0020b9b0_r0_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_0020b9b0_r0_7 {
    u16 half_0;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Local_0020b9b0_r0_7, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0020b9b0_r0_7, byte_2, 0x2);  // (from the original)
GUEST_OFFSET(Local_0020b9b0_r0_7, byte_3, 0x3);  // (from the original)

struct __attribute__((packed)) Local_0020b9b0_r5_1 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(Local_0020b9b0_r5_1, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0020b9b0_r5_1, byte_1, 0x1);  // (from the original)

inline constexpr guest::Function<0x002d39a8, u32(u32)> call_002d39a8;  // (from the original)
inline constexpr guest::Function<0x003052f0, u32(u32)> call_003052f0;  // (from the original)
inline constexpr guest::Function<0x0056bb88, u32(u32)> call_0056bb88;  // (from the original)
inline constexpr guest::Function<0x00613e08, u32(u32, u32, u32, u32)> call_00613e08;  // (from the original)
inline constexpr guest::Function<0x006efcdc, u32(u32)> call_006efcdc;  // (from the original)

u32 f_0020b9b0(u32 r0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    call_00613e08(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(0x1404u + r0) = 0;  // (from the original)
    gptr<Local_0020b9b0_r0_1> r0_1 = gptr<Local_0020b9b0_r0_1>(r0 + 0x1408u);  // (from the original)
    r0_1->word_0 = 0;
    r0_1->word_4 = 0;
    call_006efcdc(r0 + 0x1410u);  // (from the original)
    call_003052f0(r0 + 0x1420u);  // (from the original)
    call_002d39a8(r0 + 0x144eu);  // (from the original)
    gptr<Local_0020b9b0_r5_1> r5_1 = gptr<Local_0020b9b0_r5_1>(r0 + 0x1466u);  // (from the original)
    call_0056bb88(frame.at(0).addr());
    r5_1->byte_0 = u8(*frame.at<u32>(4));
    call_0056bb88(frame.at(0).addr());
    r5_1->byte_1 = u8(u32(s32(*frame.at<u32>(4) << 0x10) >> 0x18));  // (from the original)
    gptr<Local_0020b9b0_r0_7> r0_7 = gptr<Local_0020b9b0_r0_7>(r0 + 0x1468u);  // (from the original)
    r0_7->half_0 = 0;
    r0_7->byte_2 = 0;
    r0_7->byte_3 = 0;
    *gptr<u8>(r0 + 0x14aeu) = 0;  // (from the original)
    return r0_7.addr();
}

}  // namespace d_0020b9b0
GUEST_EXPORT_FRAMED(0x0020b9b0, d_0020b9b0::f_0020b9b0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0020bb20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020bb20 {

inline constexpr guest::Function<0x0024ea1c, u32(u32, u32)> call_0024ea1c;  // (from the original)

u32 f_0020bb20() {
    return call_0024ea1c(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_0020bb20
GUEST_EXPORT(0x0020bb20, d_0020bb20::f_0020bb20);

// f_0020bb24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020bb24 {

inline constexpr guest::Function<0x0024ea1c, u32(u32)> call_0024ea1c;  // (from the original)

u32 f_0020bb24(u32 r0) {
    call_0024ea1c(r0);
    return r0;
}

}  // namespace d_0020bb24
GUEST_EXPORT_FRAMED(0x0020bb24, d_0020bb24::f_0020bb24, 0x4010);  // pushes {r4, lr} first, as the original

// f_0020bb3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020bb3c {

struct __attribute__((packed)) Local_0020bb3c_r0_1 {
    u8 unknown_0[0x28];  // (not used here)
    u8 byte_28;
};
GUEST_OFFSET(Local_0020bb3c_r0_1, byte_28, 0x28);  // (from the original)


u32 f_0020bb3c(u32 r0, u32 r1) {
    if (r1 >= 6u) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    gptr<Local_0020bb3c_r0_1> r0_1 = gptr<Local_0020bb3c_r0_1>(r0 + (r1 >> 3));
    u32 r1_1 = u32(r0_1->byte_28) & ~(1u << (r1 & 7u));
    r0_1->byte_28 = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
    return r0_1.addr();
}

}  // namespace d_0020bb3c
GUEST_EXPORT(0x0020bb3c, d_0020bb3c::f_0020bb3c);

// f_0020bb60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020bb60 {

inline constexpr guest::Function<0x0020bd70, u32(u32, u32, u32)> call_0020bd70;  // (from the original)
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32)> call_002ff6f8;  // (from the original)

u32 f_0020bb60(u32 r0, u32 r1) {
    u32 r0_1 = call_0020bd70(r0, 6u + (r1 << 1), 1u);
    u32 zf_1 = r0_1 == 1u;
    u32 r0_2 = r1 << 1;
    if (zf_1) {
        guest::cpu()->r[1] = r0_1;
        return r0_2;
    }
    if (r0_1 == 2u) {
        guest::cpu()->r[1] = r0_1;
        return r0_2 + 1u;
    }
    if (r0_1 != 3u) {
        guest::cpu()->r[1] = r0_1;
        return r0_2;
    }
    u32 r0_4 = call_002ff6f8(2u, r0_1);
    return r0_4 + (r1 << 1);
}

}  // namespace d_0020bb60
GUEST_EXPORT_FRAMED(0x0020bb60, d_0020bb60::f_0020bb60, 0x4010);  // pushes {r4, lr} first, as the original

// f_0020bbac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020bbac {

inline constexpr guest::Function<0x0020bd70, u32(u32, u32, u32)> call_0020bd70;  // (from the original)
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32)> call_002ff6f8;  // (from the original)

u32 f_0020bbac(u32 r0, u32 r1) {
    u32 r5_1 = r1 << 1;
    u32 r0_1 = call_0020bd70(r0, r5_1, 1u);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 != 1u) {
        if (r0_1 == 2u) {
            return r5_1 + 1u;
        }
        if (r0_1 == 3u) {
            u32 r0_3 = call_002ff6f8(2u, r1_1);
            return r0_3 + (r1 << 1);
        }
    }
    guest::cpu()->r[1] = r1_1;
    return r5_1;
}

}  // namespace d_0020bbac
GUEST_EXPORT_FRAMED(0x0020bbac, d_0020bbac::f_0020bbac, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0020bc68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020bc68 {

inline constexpr guest::Function<0x0020bd70, u32(u32, u32, u32)> call_0020bd70;  // (from the original)
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32)> call_002ff6f8;  // (from the original)

u32 f_0020bc68(u32 r0, u32 r1) {
    u32 r4_1 = r1 - 1u;
    u32 r0_1 = call_0020bd70(r0, 0x22u + (r4_1 << 1), 0u);  // (from the original)
    u32 r1_2 = guest::cpu()->r[1];
    if (r0_1 == 1u) {
        return r4_1 << 1;
    }
    if (r0_1 == 2u) {
        return (r4_1 << 1) + 1u;
    }
    if (r0_1 != 3u) {
        return ~0u;
    }
    u32 r0_5 = call_002ff6f8(2u, r1_2);
    return r0_5 + (r4_1 << 1);
}

}  // namespace d_0020bc68
GUEST_EXPORT_FRAMED(0x0020bc68, d_0020bc68::f_0020bc68, 0x4010);  // pushes {r4, lr} first, as the original

// f_0020bcb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020bcb8 {

inline constexpr guest::Function<0x0020bd70, u32(u32, u32, u32)> call_0020bd70;  // (from the original)
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32)> call_002ff6f8;  // (from the original)

u32 f_0020bcb8(u32 r0, u32 r1) {
    u32 r0_1 = call_0020bd70(r0, 0x10u + (r1 << 1), 1u);  // (from the original)
    u32 zf_1 = r0_1 == 1u;
    u32 r0_2 = r1 << 1;
    if (zf_1) {
        guest::cpu()->r[1] = r0_1;
        return r0_2;
    }
    if (r0_1 == 2u) {
        guest::cpu()->r[1] = r0_1;
        return r0_2 + 1u;
    }
    if (r0_1 != 3u) {
        guest::cpu()->r[1] = r0_1;
        return r0_2;
    }
    u32 r0_4 = call_002ff6f8(2u, r0_1);
    return r0_4 + (r1 << 1);
}

}  // namespace d_0020bcb8
GUEST_EXPORT_FRAMED(0x0020bcb8, d_0020bcb8::f_0020bcb8, 0x4010);  // pushes {r4, lr} first, as the original

// f_0020bd70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020bd70 {

struct __attribute__((packed)) Local_0020bd70_r0_1 {
    u8 unknown_0[0x1a];  // (not used here)
    u8 byte_1a;
};
GUEST_OFFSET(Local_0020bd70_r0_1, byte_1a, 0x1a);  // (from the original)

struct __attribute__((packed)) Local_0020bd70_r12_1 {
    u8 unknown_0[0x1a];  // (not used here)
    u8 byte_1a;
};
GUEST_OFFSET(Local_0020bd70_r12_1, byte_1a, 0x1a);  // (from the original)


u32 f_0020bd70(u32 r0, u32 r1, u32 r2) {
    u32 r4_1 = 1u << (r1 & 7u);
    u32 r3_1 = 3u;
    gptr<Local_0020bd70_r12_1> r12_1 = gptr<Local_0020bd70_r12_1>(r0 + (r1 >> 3));
    if (r1 < 0x6cu && (u32(r12_1->byte_1a) & r4_1) == 0) {  // (from the original)
        goto L_20bda0;
    }
    r3_1 = 2u;
L_20bda0:;
    u32 r6_1 = r1 + 1u;
    u32 r5_1 = 1u << (r6_1 & 7u);
    gptr<Local_0020bd70_r0_1> r0_1 = gptr<Local_0020bd70_r0_1>(r0 + (r6_1 >> 3));
    if (r6_1 < 0x6cu && (u32(r0_1->byte_1a) & r5_1) == 0) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return r3_1 & 3u;
    }
    r3_1 &= 1u;
    if (r2 != 0 && r3_1 == 0) {
        if (r1 < 0x6cu) {  // (from the original)
            r12_1->byte_1a = u8(u32(r12_1->byte_1a) & ~r4_1);
        }
        r1 += 1u;
        if (r1 < 0x6cu) {  // (from the original)
            r1 = u32(r0_1->byte_1a) & ~r5_1;
            r0_1->byte_1a = u8(r1);
        }
        r3_1 = 3u;
    }
    guest::cpu()->r[1] = r1;
    return r3_1 & 3u;
}

}  // namespace d_0020bd70
GUEST_EXPORT_FRAMED(0x0020bd70, d_0020bd70::f_0020bd70, 0xf0);  // pushes {r4, r5, r6, r7} first, as the original

// f_0020be1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020be1c {

struct __attribute__((packed)) Object_0020be1c_0 {
    u16 half_0;
    u8 byte_2;
    u8 byte_3;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u16 half_18;
    u32 word_1a;
    u32 word_1e;
    u32 word_22;
    u16 half_26;
    u8 byte_28;
};
GUEST_OFFSET(Object_0020be1c_0, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0020be1c_0, byte_2, 0x2);  // (from the original)
GUEST_OFFSET(Object_0020be1c_0, byte_3, 0x3);  // (from the original)
GUEST_OFFSET(Object_0020be1c_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0020be1c_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0020be1c_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0020be1c_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0020be1c_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0020be1c_0, half_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0020be1c_0, word_1a, 0x1a);  // (from the original)
GUEST_OFFSET(Object_0020be1c_0, word_1e, 0x1e);  // (from the original)
GUEST_OFFSET(Object_0020be1c_0, word_22, 0x22);  // (from the original)
GUEST_OFFSET(Object_0020be1c_0, half_26, 0x26);  // (from the original)
GUEST_OFFSET(Object_0020be1c_0, byte_28, 0x28);  // (from the original)


void f_0020be1c(gptr<Object_0020be1c_0> arg0) {
    arg0->half_0 = 0;
    arg0->byte_2 = 0;
    arg0->byte_3 = 0;
    arg0->word_4 = 0;
    arg0->word_8 = 0;
    arg0->word_c = 0;
    arg0->word_10 = 0;
    arg0->word_14 = 0;
    arg0->half_18 = 0;
    arg0->word_1a = 0;
    arg0->word_1e = 0;
    arg0->word_22 = 0;
    arg0->half_26 = 0;
    arg0->byte_28 = 0;
}

}  // namespace d_0020be1c
GUEST_EXPORT(0x0020be1c, d_0020be1c::f_0020be1c);

// f_0020bec8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020bec8 {

struct __attribute__((packed)) Object_0020bec8_0 {
    u16 half_0;
    u8 byte_2;
    u8 byte_3;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u16 half_18;
    u32 word_1a;
    u32 word_1e;
    u32 word_22;
    u16 half_26;
    u8 byte_28;
};
GUEST_OFFSET(Object_0020bec8_0, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0020bec8_0, byte_2, 0x2);  // (from the original)
GUEST_OFFSET(Object_0020bec8_0, byte_3, 0x3);  // (from the original)
GUEST_OFFSET(Object_0020bec8_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0020bec8_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0020bec8_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0020bec8_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0020bec8_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0020bec8_0, half_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0020bec8_0, word_1a, 0x1a);  // (from the original)
GUEST_OFFSET(Object_0020bec8_0, word_1e, 0x1e);  // (from the original)
GUEST_OFFSET(Object_0020bec8_0, word_22, 0x22);  // (from the original)
GUEST_OFFSET(Object_0020bec8_0, half_26, 0x26);  // (from the original)
GUEST_OFFSET(Object_0020bec8_0, byte_28, 0x28);  // (from the original)


void f_0020bec8(gptr<Object_0020bec8_0> arg0) {
    arg0->half_0 = 0;
    arg0->byte_2 = 0;
    arg0->byte_3 = 0;
    arg0->word_4 = 0;
    arg0->word_8 = 0;
    arg0->word_c = 0;
    arg0->word_10 = 0;
    arg0->word_14 = 0;
    arg0->half_18 = 0;
    arg0->word_1a = 0;
    arg0->word_1e = 0;
    arg0->word_22 = 0;
    arg0->half_26 = 0;
    arg0->byte_28 = 0;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_0020bec8
GUEST_EXPORT(0x0020bec8, d_0020bec8::f_0020bec8);

// f_0020bf68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020bf68 {


void f_0020bf68(u32 r0) {
    u32 r2 = 0u;
    u32 r1 = r2;
    u32 r3 = r2;
    do {
        u32 r12_1 = (r2 << 4) - r2;
        u32 r2_1 = r2 + 1u;
        u32 r4_1 = (r2_1 << 4) - r2_1;
        r1 += 2u;
        *gptr<u8>(r0 + (r12_1 + (r12_1 << 3) << 4) + 0x86cu) = u8(r3);  // (from the original)
        r2 = r2_1 + 1u;
        *gptr<u8>(r0 + (r4_1 + (r4_1 << 3) << 4) + 0x86cu) = u8(r3);  // (from the original)
        guest::preempt();
    } while (r1 < 0xau);  // (from the original)
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0020bf68
GUEST_EXPORT_FRAMED(0x0020bf68, d_0020bf68::f_0020bf68, 0x10);  // pushes {r4} first, as the original

// f_0020bfb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020bfb4 {

inline constexpr guest::Function<0x001b3f24, u32(u32, u32, u32, u32)> call_001b3f24;  // (from the original)

void f_0020bfb4(u32 r0) {
    u32 r1_1 = 0;
    u32 r5 = r0;
    u32 r4 = 0u;
    do {
        u32 r0_1 = (r4 << 4) - r4;
        call_001b3f24(r5 + (r0_1 + (r0_1 << 3) << 4), 0x16u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        u32 r0_3 = r4;
        r1_1 = r5 + r4 + 0x5460u;  // (from the original)
        r4 += 1u;
        *gptr<u8>(r1_1) = u8(r0_3);
        guest::preempt();
    } while (r4 < 0xau);  // (from the original)
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_0020bfb4
GUEST_EXPORT_FRAMED(0x0020bfb4, d_0020bfb4::f_0020bfb4, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0020c03c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020c03c {

struct __attribute__((packed)) Object_0020c03c_0 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
    u8 unknown_9[0x5702];  // (not used here)
    u8 byte_570b;
};
GUEST_OFFSET(Object_0020c03c_0, byte_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0020c03c_0, byte_570b, 0x570b);  // (from the original)

struct __attribute__((packed)) Local_0020c03c_r0_1 {
    u8 unknown_0[0xb];  // (not used here)
    u8 byte_b;
};
GUEST_OFFSET(Local_0020c03c_r0_1, byte_b, 0xb);  // (from the original)

struct __attribute__((packed)) Local_0020c03c_r0_2 {
    u8 unknown_0[0xb];  // (not used here)
    u8 byte_b;
};
GUEST_OFFSET(Local_0020c03c_r0_2, byte_b, 0xb);  // (from the original)

struct __attribute__((packed)) Local_0020c03c_r0_3 {
    u8 unknown_0[0xb];  // (not used here)
    u8 byte_b;
};
GUEST_OFFSET(Local_0020c03c_r0_3, byte_b, 0xb);  // (from the original)

struct __attribute__((packed)) Local_0020c03c_r1_2 {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
};
GUEST_OFFSET(Local_0020c03c_r1_2, byte_4, 0x4);  // (from the original)


u32 f_0020c03c(gptr<Object_0020c03c_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    gptr<Local_0020c03c_r1_2> r1_2 = gptr<Local_0020c03c_r1_2>(0u);
    u32 r2_3 = 0;
    u32 res_2 = 0;
    u32 r2_6 = 0;
    u32 r2_7 = 0;
    gptr<Local_0020c03c_r0_2> r0_2 = gptr<Local_0020c03c_r0_2>(0u);
    u32 r1_3 = 0;
    u32 zf_1 = r1 == 0;
    if (zf_1) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (zf_1 || (r1 >> 0x1f) != 0u) {  // (from the original)
        if (!((u32(*gptr<u8>(r0 + 0x570bu)) << 0x1e) >> 0x1f)) {  // (from the original)
            gptr<Local_0020c03c_r0_1> r0_1 = gptr<Local_0020c03c_r0_1>(r0 + 0x5700u);  // (from the original)
            u32 r1_1 = u32(r0_1->byte_b) & ~2u;
            r0_1->byte_b = u8(r1_1);
            guest::cpu()->r[1] = r1_1;
            return r0_1.addr();
        }
        r1_2 = gptr<Local_0020c03c_r1_2>(r0 + 4u);
        u32 r2_2 = u32(arg0->byte_8) + 2u;
        if (r2_2 >> 0x1f) {  // (from the original)
            goto L_20c074;
        }
        if (s32(r2_2) > 0xf) {  // (from the original)
            goto L_20c084;
        }
        r2_3 = r2_2 & 0xffu;  // (from the original)
        if (r2_3 <= 0xfu) {  // (from the original)
            goto L_20c100;
        }
        r1_2->byte_4 = 0xf;  // (from the original)
        r0_2 = gptr<Local_0020c03c_r0_2>(r0 + 0x5700u);  // (from the original)
        r1_3 = u32(r0_2->byte_b) & ~2u;
        r0_2->byte_b = u8(r1_3);
        guest::cpu()->r[1] = r1_3;
        return r0_2.addr();
    }
    res_2 = u32(arg0->byte_570b) << 0x1e;  // (from the original)
    if (!(res_2 >> 0x1f)) {  // (from the original)
        r1_2 = gptr<Local_0020c03c_r1_2>(r0 + 4u);
        u32 r2_5 = (0u - r1) + u32(arg0->byte_8);
        if (r2_5 >> 0x1f) {  // (from the original)
            goto L_20c074;
        }
        if (s32(r2_5) > 0xf) {  // (from the original)
            goto L_20c084;
        }
        r2_3 = r2_5 & 0xffu;  // (from the original)
        if (r2_3 > 0xfu) {  // (from the original)
            r1_2->byte_4 = 0xf;  // (from the original)
            r0_2 = gptr<Local_0020c03c_r0_2>(r0 + 0x5700u);  // (from the original)
            r1_3 = u32(r0_2->byte_b) & ~2u;
            r0_2->byte_b = u8(r1_3);
            guest::cpu()->r[1] = r1_3;
            return r0_2.addr();
        }
        goto L_20c100;
    }
    r2_6 = 3u - r1;
    r1_2 = gptr<Local_0020c03c_r1_2>(r0 + 4u);
    r2_7 = r2_6 + u32(arg0->byte_8);
    if (!(r2_7 >> 0x1f)) {  // (from the original)
        if (s32(r2_7) <= 0xf) {  // (from the original)
            r2_3 = r2_7 & 0xffu;  // (from the original)
            if (r2_3 > 0xfu) {  // (from the original)
                r1_2->byte_4 = 0xf;  // (from the original)
                r0_2 = gptr<Local_0020c03c_r0_2>(r0 + 0x5700u);  // (from the original)
                r1_3 = u32(r0_2->byte_b) & ~2u;
                r0_2->byte_b = u8(r1_3);
                guest::cpu()->r[1] = r1_3;
                return r0_2.addr();
            }
            goto L_20c100;
        }
        goto L_20c084;
    }
L_20c074:;
    r2_3 = 0u;
    goto L_20c100;
L_20c084:;
    r2_3 = 0xfu;  // (from the original)
    goto L_20c100;
L_20c100:;
    r1_2->byte_4 = u8(r2_3);
    gptr<Local_0020c03c_r0_3> r0_3 = gptr<Local_0020c03c_r0_3>(r0 + 0x5700u);  // (from the original)
    u32 r1_4 = u32(r0_3->byte_b) & ~2u;
    r0_3->byte_b = u8(r1_4);
    guest::cpu()->r[1] = r1_4;
    return r0_3.addr();
}

}  // namespace d_0020c03c
GUEST_EXPORT(0x0020c03c, d_0020c03c::f_0020c03c);

// f_0020c118: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020c118 {

inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)

void f_0020c118() {
    call_002fbb30(guest::cpu()->r[0], guest::cpu()->r[1], 0x6b88u, guest::cpu()->r[3]);
    return;  // (from the original)
}

}  // namespace d_0020c118
GUEST_EXPORT(0x0020c118, d_0020c118::f_0020c118);

// f_0020c124: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020c124 {

inline constexpr guest::Function<0x002ff6f8, u32(u32, u32)> call_002ff6f8;  // (from the original)
inline constexpr guest::Function<0x00312434, u32(u32, u32, u32)> call_00312434;  // (from the original)

void f_0020c124(u32 r0, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = call_002ff6f8(0x64u, r1);  // (from the original)
    if (s32(r0_1) >= 0xa) {  // (from the original)
        return;
    }
    frame.release();
    call_00312434(r0, 1u, 0u);
    return;
}

}  // namespace d_0020c124
GUEST_EXPORT(0x0020c124, d_0020c124::f_0020c124);

// f_0020c158: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020c158 {

inline constexpr guest::Function<0x002ff6f8, u32(u32, u32)> call_002ff6f8;  // (from the original)
inline constexpr guest::Function<0x00312434, u32(u32, u32, u32)> call_00312434;  // (from the original)

u32 f_0020c158(u32 r0, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = call_002ff6f8(0x64u, r1);  // (from the original)
    if (s32(r0_1) >= 0xa) {  // (from the original)
        return 0u;
    }
    frame.release();
    return call_00312434(r0, 1u, 0u);
}

}  // namespace d_0020c158
GUEST_EXPORT(0x0020c158, d_0020c158::f_0020c158);

// f_0020c500: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020c500 {

struct __attribute__((packed)) Local_0020c500_r6_1 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
    u8 byte_4;
};
GUEST_OFFSET(Local_0020c500_r6_1, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0020c500_r6_1, byte_1, 0x1);  // (from the original)
GUEST_OFFSET(Local_0020c500_r6_1, byte_2, 0x2);  // (from the original)
GUEST_OFFSET(Local_0020c500_r6_1, byte_3, 0x3);  // (from the original)
GUEST_OFFSET(Local_0020c500_r6_1, byte_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x001df0b0, u32(u32, u32)> call_001df0b0;  // (from the original)
inline constexpr guest::Function<0x001e0370, u32(u32, u32)> call_001e0370;  // (from the original)
inline constexpr guest::Function<0x0024b7f8, u32(u32, u32)> call_0024b7f8;  // (from the original)
inline constexpr guest::Function<0x002a71b4, u32(u32, u32)> call_002a71b4;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x003052f0, u32(u32, u32)> call_003052f0;  // (from the original)
inline constexpr guest::Function<0x00582dc4, u32(u32, u32)> call_00582dc4;  // (from the original)
inline constexpr guest::Function<0x00613e08, u32(u32, u32)> call_00613e08;  // (from the original)
inline constexpr guest::Function<0x006efcdc, u32(u32, u32)> call_006efcdc;  // (from the original)

void f_0020c500(u32 r0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r1_3 = 0;
    u32 r5 = r0;
    call_002f825c(r0, 0x6b88u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_003052f0(r5 + 0x55a6u, guest::cpu()->r[1]);  // (from the original)
    u32 r4_1 = r5 + 0xau;  // (from the original)
    gptr<Local_0020c500_r6_1> r6_1 = gptr<Local_0020c500_r6_1>(r5 + 4u);
    call_002fc8e8(r4_1, 0x95bfdcu);  // (from the original)
    call_002fc8e8(r4_1 + 4u, 0x95bfdcu);  // (from the original)
    call_002fc8e8(r4_1 + 8u, 0x95bfdcu);  // (from the original)
    call_002fc8e8(r4_1 + 0xcu, 0x95bfdcu);  // (from the original)
    call_002fc8e8(r4_1 + 0x10u, 0x95bfdcu);  // (from the original)
    call_002fc8e8(r4_1 + 0x14u, 0x95bfdcu);  // (from the original)
    call_002fc8e8(r4_1 + 0x18u, 0x95bfdcu);  // (from the original)
    call_002fc8e8(r4_1 + 0x1cu, 0x95bfdcu);  // (from the original)
    *gptr<u8>(r4_1 + 0x20u) = 1;  // (from the original)
    r6_1->byte_2 = 0;
    r6_1->byte_0 = 0;
    r6_1->byte_4 = 2;
    r6_1->byte_1 = 0;
    r6_1->byte_3 = 0;
    call_00582dc4(r6_1.addr() + 0x5494u, 2u);  // (from the original)
    call_0024b7f8(r5 + 0x55dcu, guest::cpu()->r[1]);  // (from the original)
    u32 r6 = r5 + 0x5700u;  // (from the original)
    u32 r4 = 0u;
    do {
        call_001e0370(r6, r4);
        r1_3 = guest::cpu()->r[1];
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 0x12c);  // (from the original)
    call_00613e08(r5 + 0x5734u, r1_3);  // (from the original)
    call_002a71b4(r5 + 0x5544u, guest::cpu()->r[1]);  // (from the original)
    call_001df0b0(r5 + 0x56c4u, guest::cpu()->r[1]);  // (from the original)
    frame.release();
    call_006efcdc((r5 + 0x5000u) + 0x6f0u, guest::cpu()->r[1]);  // (from the original)
    return;
}

}  // namespace d_0020c500
GUEST_EXPORT(0x0020c500, d_0020c500::f_0020c500);

// f_0020cbf0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020cbf0 {

struct __attribute__((packed)) Object_0020cbf0_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0020cbf0_0, word_0, 0x0);  // (from the original)

struct __attribute__((packed)) Local_0020cbf0_r5_1 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(Local_0020cbf0_r5_1, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0020cbf0_r5_1, byte_1, 0x1);  // (from the original)

struct __attribute__((packed)) Local_0020cbf0_r5_2 {
    u16 half_0;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Local_0020cbf0_r5_2, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0020cbf0_r5_2, byte_2, 0x2);  // (from the original)
GUEST_OFFSET(Local_0020cbf0_r5_2, byte_3, 0x3);  // (from the original)

inline constexpr guest::Function<0x001e0370, u32(u32, u32, u32, u32)> call_001e0370;  // (from the original)
inline constexpr guest::Function<0x0020c024, u32(u32, u32, u32, u32)> call_0020c024;  // (from the original)
inline constexpr guest::Function<0x0024b97c, u32(u32, u32, u32, u32)> call_0024b97c;  // (from the original)
inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32, u32)> call_002fc20c;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x00301444, u32(u32, u32, u32, u32)> call_00301444;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x0056bb88, u32(u32, u32, u32, u32)> call_0056bb88;  // (from the original)
inline constexpr guest::Function<0x00582db8, u32(u32, u32, u32, u32)> call_00582db8;  // (from the original)
inline constexpr guest::Function<0x00613e24, u32(u32)> call_00613e24;  // (from the original)
inline constexpr guest::Function<0x006efd24, u32(u32, u32, u32, u32)> call_006efd24;  // (from the original)

u32 f_0020cbf0(gptr<Object_0020cbf0_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r6 = 0u;
    arg0->word_0 = r6;
    u32 r0_2 = call_002fc20c(r0 + 0xau, r1, r2, r3);  // (from the original)
    u32 r0_4 = call_002fc20c(r0_2 + 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_6 = call_002fc20c(r0_4 + 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_8 = call_002fc20c(r0_6 + 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_10 = call_002fc20c(r0_8 + 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_12 = call_002fc20c(r0_10 + 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_14 = call_002fc20c(r0_12 + 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_16 = call_002fc20c(r0_14 + 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r4_1 = r0_16 - 0x1cu;  // (from the original)
    call_002fc8e8(r4_1, 0x95bfdcu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_002fc8e8(r4_1 + 4u, 0x95bfdcu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_002fc8e8(r4_1 + 8u, 0x95bfdcu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_002fc8e8(r4_1 + 0xcu, 0x95bfdcu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_002fc8e8(r4_1 + 0x10u, 0x95bfdcu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_002fc8e8(r4_1 + 0x14u, 0x95bfdcu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_002fc8e8(r4_1 + 0x18u, 0x95bfdcu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_002fc8e8(r4_1 + 0x1cu, 0x95bfdcu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *gptr<u8>(r4_1 + 0x20u) = 1;  // (from the original)
    u32 r0_25 = call_0020c024(r4_1 + 0x22u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_00582db8(r0_25 + 0x546cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_28 = call_00301d0c((r0_25 - 0x28u) + 0x5540u, 0x1df4c4u, 0x18u, 4u);  // (from the original)
    u32 r0_29 = r0_28 + 0x62u;  // (from the original)
    gptr<Local_0020cbf0_r5_1> r5_1 = gptr<Local_0020cbf0_r5_1>(r0_29 + 0x2eu);  // (from the original)
    u32 r4_3 = r0_29 - 0x55a6u;  // (from the original)
    call_0056bb88(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r5_1->byte_0 = u8(*frame.at<u32>(4));
    call_0056bb88(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r5_1->byte_1 = u8(u32(s32(*frame.at<u32>(4) << 0x10) >> 0x18));  // (from the original)
    gptr<Local_0020cbf0_r5_2> r5_2 = gptr<Local_0020cbf0_r5_2>(r4_3 + 0x55d6u);  // (from the original)
    r5_2->half_0 = u16(r6);
    r5_2->byte_2 = u8(r6);
    r5_2->byte_3 = u8(r6);
    u32 r0_33 = call_0024b97c(r4_3 + 0x55dcu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_35 = call_006efd24(r0_33 + 0x114u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r5 = r0_35 + 0x10u;  // (from the original)
    call_00301444(r5, 0x34u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 r4 = 0u;
    do {
        call_001e0370(r5, r4, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 0x12c);  // (from the original)
    u32 r0_37 = call_00613e24(r5 + 0x34u);  // (from the original)
    u32 r0_38 = r0_37 - 0x5734u;  // (from the original)
    *gptr<u8>(0x6b7au + r0_38) = u8(r6);  // (from the original)
    *gptr<u8>((0x6b7au | u32(s32(0x6b7au) >> 5)) + r0_38) = u8(r6);  // (from the original)
    guest::cpu()->r[1] = 0x6b7au;  // (from the original)
    return r0_38;
}

}  // namespace d_0020cbf0
GUEST_EXPORT_FRAMED(0x0020cbf0, d_0020cbf0::f_0020cbf0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0020cd9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020cd9c {

struct __attribute__((packed)) Object_0020cd9c_0 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Object_0020cd9c_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0020cd9c_0, byte_1, 0x1);  // (from the original)
GUEST_OFFSET(Object_0020cd9c_0, byte_2, 0x2);  // (from the original)

struct __attribute__((packed)) Local_0020cd9c_ea_1 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Local_0020cd9c_ea_1, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0020cd9c_ea_1, byte_1, 0x1);  // (from the original)
GUEST_OFFSET(Local_0020cd9c_ea_1, byte_2, 0x2);  // (from the original)

inline guest::global<u8, 0x00ad55d8> global_00ad55d8;  // (from the original)
inline guest::global<u8, 0x00ad55d9> global_00ad55d9;  // (from the original)
inline guest::global<u8, 0x00ad55da> global_00ad55da;  // (from the original)

void f_0020cd9c(gptr<Object_0020cd9c_0> arg0, u32 r1) {
    if (r1 < 6u) {
        gptr<Local_0020cd9c_ea_1> ea_1 = gptr<Local_0020cd9c_ea_1>(r1 + (r1 << 1) + 0xad55d8u);  // (from the original)
        arg0->byte_0 = u8(u32(ea_1->byte_0));
        arg0->byte_1 = u8(u32(ea_1->byte_1));
        u32 r1_1 = ea_1->byte_2;
        arg0->byte_2 = u8(r1_1);
        guest::cpu()->r[1] = r1_1;
        return;
    }
    arg0->byte_0 = u8(u32(*global_00ad55d8));
    arg0->byte_1 = u8(u32(*global_00ad55d9));
    u32 r1_2 = *global_00ad55da;
    arg0->byte_2 = u8(r1_2);
    guest::cpu()->r[1] = r1_2;
}

}  // namespace d_0020cd9c
GUEST_EXPORT(0x0020cd9c, d_0020cd9c::f_0020cd9c);

// f_0020cde4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020cde4 {

struct __attribute__((packed)) Object_0020cde4_0 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Object_0020cde4_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0020cde4_0, byte_1, 0x1);  // (from the original)
GUEST_OFFSET(Object_0020cde4_0, byte_2, 0x2);  // (from the original)

struct __attribute__((packed)) Local_0020cde4_ea_1 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Local_0020cde4_ea_1, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0020cde4_ea_1, byte_1, 0x1);  // (from the original)
GUEST_OFFSET(Local_0020cde4_ea_1, byte_2, 0x2);  // (from the original)

inline guest::global<u8, 0x00ad5602> global_00ad5602;  // (from the original)
inline guest::global<u8, 0x00ad5603> global_00ad5603;  // (from the original)
inline guest::global<u8, 0x00ad5604> global_00ad5604;  // (from the original)

void f_0020cde4(gptr<Object_0020cde4_0> arg0, u32 r1) {
    if (r1 < 0x10u) {  // (from the original)
        gptr<Local_0020cde4_ea_1> ea_1 = gptr<Local_0020cde4_ea_1>(r1 + (r1 << 1) + 0xad5602u);  // (from the original)
        arg0->byte_0 = u8(u32(ea_1->byte_0));
        arg0->byte_1 = u8(u32(ea_1->byte_1));
        u32 r1_1 = ea_1->byte_2;
        arg0->byte_2 = u8(r1_1);
        return;
    }
    arg0->byte_0 = u8(u32(*global_00ad5602));
    arg0->byte_1 = u8(u32(*global_00ad5603));
    u32 r1_2 = *global_00ad5604;
    arg0->byte_2 = u8(r1_2);
}

}  // namespace d_0020cde4
GUEST_EXPORT(0x0020cde4, d_0020cde4::f_0020cde4);

// f_0020ce2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020ce2c {

struct __attribute__((packed)) Object_0020ce2c_0 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Object_0020ce2c_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0020ce2c_0, byte_1, 0x1);  // (from the original)
GUEST_OFFSET(Object_0020ce2c_0, byte_2, 0x2);  // (from the original)

struct __attribute__((packed)) Local_0020ce2c_ea_1 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Local_0020ce2c_ea_1, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0020ce2c_ea_1, byte_1, 0x1);  // (from the original)
GUEST_OFFSET(Local_0020ce2c_ea_1, byte_2, 0x2);  // (from the original)

inline guest::global<u8, 0x00ad55ea> global_00ad55ea;  // (from the original)
inline guest::global<u8, 0x00ad55eb> global_00ad55eb;  // (from the original)
inline guest::global<u8, 0x00ad55ec> global_00ad55ec;  // (from the original)

void f_0020ce2c(gptr<Object_0020ce2c_0> arg0, u32 r1) {
    if (r1 < 8u) {
        gptr<Local_0020ce2c_ea_1> ea_1 = gptr<Local_0020ce2c_ea_1>(r1 + (r1 << 1) + 0xad55eau);  // (from the original)
        arg0->byte_0 = u8(u32(ea_1->byte_0));
        arg0->byte_1 = u8(u32(ea_1->byte_1));
        u32 r1_1 = ea_1->byte_2;
        arg0->byte_2 = u8(r1_1);
        guest::cpu()->r[1] = r1_1;
        return;
    }
    arg0->byte_0 = u8(u32(*global_00ad55ea));
    arg0->byte_1 = u8(u32(*global_00ad55eb));
    u32 r1_2 = *global_00ad55ec;
    arg0->byte_2 = u8(r1_2);
    guest::cpu()->r[1] = r1_2;
}

}  // namespace d_0020ce2c
GUEST_EXPORT(0x0020ce2c, d_0020ce2c::f_0020ce2c);

// f_0020d084: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020d084 {

struct __attribute__((packed)) Local_0020d084_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0020d084_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0020d084_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0020d084_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0020d084_ea_1, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Local_0020d084_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0020d084_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0020d084_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0020d084_ea_2, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0020d084_ea_2, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Local_0020d084_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_0020d084_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0020d084_ea_3, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0020d084_ea_3, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0020d084_ea_3, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_0020d084_ea_3, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_0020d084_ea_3, word_14, 0x14);  // (from the original)

struct __attribute__((packed)) Local_0020d084_ea_5 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_0020d084_ea_5, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0020d084_ea_5, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0020d084_ea_5, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0020d084_ea_5, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_0020d084_ea_5, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_0020d084_ea_5, word_14, 0x14);  // (from the original)

inline constexpr guest::Function<0x0024e500, u32(u32, u32, u32, u32)> call_0024e500;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x00303cdc, u32(u32)> call_00303cdc;  // (from the original)

void f_0020d084(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_0020d084_ea_1> ea_1 = gptr<Local_0020d084_ea_1>(r13 - 0x10);  // (from the original)
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r6;
    ea_1->word_c = r14;
    r13 -= 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0024e500(r0 + 0x4650u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    gptr<Local_0020d084_ea_2> ea_2 = gptr<Local_0020d084_ea_2>(r13);
    r13 += 0x10;  // (from the original)
    u32 r4_1 = ea_2->word_0;
    u32 r5_1 = ea_2->word_4;
    u32 r6_1 = ea_2->word_8;
    r14 = ea_2->word_c;
    u32 r0_3 = (r0 + 0x4400u) + 0x1fcu;  // (from the original)
    if (r1 >= 4u) {
        guest::cpu()->r[4] = r4_1;
        guest::cpu()->r[5] = r5_1;
        guest::cpu()->r[6] = r6_1;
        guest::cpu()->r[7] = r7;
        guest::cpu()->r[8] = r8;
        guest::cpu()->r[13] = r13;
        return;
    }
    gptr<Local_0020d084_ea_3> ea_3 = gptr<Local_0020d084_ea_3>(r13 - 0x18);  // (from the original)
    ea_3->word_0 = r4_1;
    ea_3->word_4 = r5_1;
    ea_3->word_8 = r6_1;
    ea_3->word_c = r7;
    ea_3->word_10 = r8;
    ea_3->word_14 = r14;
    r13 -= 0x18;  // (from the original)
    u32 r6_2 = r0_3 + (r1 << 2);
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r6_2, 0x95bfdcu);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r6_2 + 0x10u, 0x95bfdcu);  // (from the original)
    *gptr<u8>(r0_3 + r1 + 0x20u) = 0;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00303cdc(r0_3 + (r1 << 3) + 0x24u);  // (from the original)
    *gptr<u32>(r6_2 + 0x44u) = 0;  // (from the original)
    gptr<Local_0020d084_ea_5> ea_5 = gptr<Local_0020d084_ea_5>(r13);
    r13 += 0x18;  // (from the original)
    u32 r4_2 = ea_5->word_0;
    u32 r5_2 = ea_5->word_4;
    u32 r6_3 = ea_5->word_8;
    u32 r7_1 = ea_5->word_c;
    u32 r8_1 = ea_5->word_10;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_3;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[13] = r13;
}

}  // namespace d_0020d084
GUEST_EXPORT(0x0020d084, d_0020d084::f_0020d084);

// f_0020d104: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020d104 {

struct __attribute__((packed)) Local_0020d104_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_0020d104_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0020d104_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0020d104_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0020d104_ea_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_0020d104_ea_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_0020d104_ea_1, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_0020d104_ea_1, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_0020d104_ea_1, word_1c, 0x1c);  // (from the original)

struct __attribute__((packed)) Local_0020d104_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0020d104_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0020d104_ea_2, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_0020d104_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_0020d104_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0020d104_ea_3, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0020d104_ea_3, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0020d104_ea_3, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_0020d104_ea_3, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_0020d104_ea_3, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_0020d104_ea_3, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_0020d104_ea_3, word_1c, 0x1c);  // (from the original)

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> call_002fc994;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x0030b654, u32(u32, u32, u32, u32)> call_0030b654;  // (from the original)
inline constexpr guest::Function<0x004e9a78, u32(u32, u32, u32, u32)> call_004e9a78;  // (from the original)
inline constexpr guest::Function<0x0059e65c, u32(u32, u32, u32, u32)> call_0059e65c;  // (from the original)
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> call_006a5e34;  // (from the original)

u32 f_0020d104(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x30);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r14 = guest::cpu()->r[14];
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    if (r2 >= 4u) {
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        guest::cpu()->r[8] = r8;
        guest::cpu()->r[9] = r9;
        guest::cpu()->r[10] = r10;
        return r0;
    }
    gptr<Local_0020d104_ea_1> ea_1 = gptr<Local_0020d104_ea_1>(frame.at(0x10).addr());  // (from the original)
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r6;
    ea_1->word_c = r7;
    ea_1->word_10 = r8;
    ea_1->word_14 = r9;
    ea_1->word_18 = r10;
    ea_1->word_1c = r14;
    gptr<Local_0020d104_ea_2> ea_2 = gptr<Local_0020d104_ea_2>(frame.at(0x30).addr());  // (from the original)
    u32 r6_1 = ea_2->word_0;
    u32 r7_1 = ea_2->word_4;
    u32 r4_1 = r0 + (r2 << 2);
    u32 r12_1 = frame.at(4).addr();
    if (*gptr<u8>(r0 + r2 + 0x20u) != 0) {  // (from the original)
        call_002fc934(r12_1, r4_1, r2, r3);
        r2_1 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
    } else {
        call_002fc934(r12_1, r4_1 + 0x10u, r2, r3);  // (from the original)
        r2_1 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
    }
    u32 r0_2 = call_002fcbb0(frame.at(8).addr(), 0x7ffeu, r2_1, r3_1);  // (from the original)
    u32 r2_2 = r4_1 + 0x10u;  // (from the original)
    call_002fc8e8(r2_2, r0_2, r2_2, guest::cpu()->r[3]);
    u32 r0_4 = call_002f74c8(frame.at(8).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_3 = guest::cpu()->r[1];
    if (r0_4 == r1) {
        u32 r0_6 = call_0030b654(frame.at(4).addr(), r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r1_4 = guest::cpu()->r[1];
        u32 r2_5 = guest::cpu()->r[2];
        u32 r3_5 = guest::cpu()->r[3];
        if (r0_6 != 0) {
            call_004e9a78(r3, r6_1, 0u, r7_1);
            r1_3 = guest::cpu()->r[1];
        } else {
            u32 r0_7 = call_006a5e34(r0_6, r1_4, r2_5, r3_5);
            r1_3 = guest::cpu()->r[1];
            if (r0_7 != 0) {
                u32 r0_9 = call_002fcbb0(frame.at(0xc).addr(), 0x7ffeu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                *frame.at<u32>(0) = 0;
                call_002fc994(r0_7, r0_9, r3, r6_1);
                call_0059e65c(r3, r6_1, 1u, guest::cpu()->r[3]);
                r1_3 = guest::cpu()->r[1];
            }
        }
    }
    gptr<Local_0020d104_ea_3> ea_3 = gptr<Local_0020d104_ea_3>(frame.at(0x10).addr());  // (from the original)
    u32 r4_2 = ea_3->word_0;
    u32 r5_1 = ea_3->word_4;
    u32 r6_2 = ea_3->word_8;
    u32 r7_2 = ea_3->word_c;
    u32 r8_1 = ea_3->word_10;
    u32 r9_1 = ea_3->word_14;
    u32 r10_1 = ea_3->word_18;
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
    guest::cpu()->r[10] = r10_1;
    return frame.at(4).addr();
}

}  // namespace d_0020d104
GUEST_EXPORT(0x0020d104, d_0020d104::f_0020d104);

// f_0020d328: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020d328 {

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x00303cdc, u32(u32, u32)> call_00303cdc;  // (from the original)

void f_0020d328(u32 r0) {
    u32 r1_2 = 0;
    u32 r5 = r0;
    call_002f825c(r0, 0x54u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r4 = 0u;
    u32 r7 = r4;
    do {
        u32 r6_1 = r5 + (r4 << 2);
        call_002fc8e8(r6_1, 0x95bfdcu);  // (from the original)
        call_002fc8e8(r6_1 + 0x10u, 0x95bfdcu);  // (from the original)
        *gptr<u8>(r5 + r4 + 0x20u) = u8(r7);  // (from the original)
        call_00303cdc(r5 + (r4 << 3) + 0x24u, guest::cpu()->r[1]);  // (from the original)
        r1_2 = guest::cpu()->r[1];
        r4 += 1u;
        *gptr<u32>(r6_1 + 0x44u) = r7;  // (from the original)
        guest::preempt();
    } while (s32(r4) < 4);
    guest::cpu()->r[1] = r1_2;
}

}  // namespace d_0020d328
GUEST_EXPORT_FRAMED(0x0020d328, d_0020d328::f_0020d328, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0020d600: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020d600 {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> call_002ff6f8;  // (from the original)

u32 f_0020d600(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r0_1 = call_002ff6f8(3u, r1, guest::cpu()->r[2], r3);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r3_1 = guest::cpu()->r[3];
    if (r0_1 != 0) {
        if (r0_1 == 1u) {
            u32 r0_3 = call_002fcbb0(frame.at(0).addr(), 0x26ccu, guest::cpu()->r[2], r3_1);  // (from the original)
            call_002fc8e8(r0, r0_3);
            return frame.at(0).addr();
        }
        if (r0_1 != 2u) {
            guest::cpu()->r[1] = r1_1;
            return r0_1;
        }
        u32 r0_6 = call_002fcbb0(frame.at(0).addr(), 0x2767u, guest::cpu()->r[2], r3_1);  // (from the original)
        call_002fc8e8(r0 + 0xcu, r0_6);  // (from the original)
        return frame.at(0).addr();
    }
    u32 r0_10 = call_002fcbb0(frame.at(0).addr(), 0x25dau, guest::cpu()->r[2], r3_1);  // (from the original)
    call_002fc8e8(r0, r0_10);
    return frame.at(0).addr();
}

}  // namespace d_0020d600
GUEST_EXPORT_FRAMED(0x0020d600, d_0020d600::f_0020d600, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0020d71c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020d71c {

struct __attribute__((packed)) Local_0020d71c_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_0020d71c_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0020d71c_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0020d71c_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0020d71c_ea_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_0020d71c_ea_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_0020d71c_ea_1, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_0020d71c_ea_1, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_0020d71c_ea_1, word_1c, 0x1c);  // (from the original)

struct __attribute__((packed)) Local_0020d71c_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0020d71c_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0020d71c_ea_2, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_0020d71c_ea_3 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_0020d71c_ea_3, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0020d71c_ea_3, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0020d71c_ea_3, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_0020d71c_ea_3, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_0020d71c_ea_3, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_0020d71c_ea_3, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_0020d71c_ea_3, word_1c, 0x1c);  // (from the original)

inline constexpr guest::Function<0x0014f8a4, u32(u32, u32, u32, u32)> call_0014f8a4;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)

void f_0020d71c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x20);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r14 = guest::cpu()->r[14];
    if (r2 >= 0xdu) {  // (from the original)
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        guest::cpu()->r[8] = r8;
        guest::cpu()->r[9] = r9;
        return;
    }
    gptr<Local_0020d71c_ea_1> ea_1 = gptr<Local_0020d71c_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r3;
    ea_1->word_4 = r4;
    ea_1->word_8 = r5;
    ea_1->word_c = r6;
    ea_1->word_10 = r7;
    ea_1->word_14 = r8;
    ea_1->word_18 = r9;
    ea_1->word_1c = r14;
    gptr<Local_0020d71c_ea_2> ea_2 = gptr<Local_0020d71c_ea_2>(frame.at(0x20).addr());  // (from the original)
    u32 r6_1 = ea_2->word_0;
    u32 r7_1 = ea_2->word_4;
    u32 r0_2 = call_002fc8e8(r0 + (r2 << 2), r3, r2, r3);
    u32 r0_3 = call_002f74c8(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_3 == r1) {
        u32 r0_5 = call_002fc934(frame.at(0).addr(), r3, guest::cpu()->r[2], guest::cpu()->r[3]);
        call_0014f8a4(r2, r0_5, r6_1, r7_1);
    }
    gptr<Local_0020d71c_ea_3> ea_3 = gptr<Local_0020d71c_ea_3>(frame.at(0).addr());
    u32 r4_1 = ea_3->word_4;
    u32 r5_1 = ea_3->word_8;
    u32 r6_2 = ea_3->word_c;
    u32 r7_2 = ea_3->word_10;
    u32 r8_1 = ea_3->word_14;
    u32 r9_1 = ea_3->word_18;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
}

}  // namespace d_0020d71c
GUEST_EXPORT(0x0020d71c, d_0020d71c::f_0020d71c);

// f_0020d8a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020d8a4 {

struct __attribute__((packed)) Object_0020d8a4_0 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
};
GUEST_OFFSET(Object_0020d8a4_0, byte_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x0056b550, u32(u32, u32, u32, u32)> call_0056b550;  // (from the original)

u32 f_0020d8a4(gptr<Object_0020d8a4_0> arg0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    arg0->byte_8 = 0;
    u32 r0_1 = call_002fb378(0u, r1, r2, guest::cpu()->r[3]);
    u32 r1_1 = *gptr<u32>(r0_1);
    u32 r0_2 = *gptr<u32>(r0_1 + 4u);
    u32 zf_1 = r1_1 == 0x7dcu;  // (from the original)
    if (zf_1 || s32(r1_1) < s32(0x7dcu)) {  // (from the original)
        r1_1 = sxtb(r0_2);
        zf_1 = r1_1 == 1u;
    }
    if (!zf_1) {
        frame.release();
        return call_0056b550(r0_2, r1_1, 0x7dcu, guest::cpu()->r[3]);  // (from the original)
    }
    u32 r1_2 = s32(r0_2 << 0x10) >> 0x18;  // (from the original)
    u32 res_1 = r1_2 - 1u;
    u32 nf_1 = res_1 >> 0x1f;  // (from the original)
    u32 vf_1 = ((r1_2 ^ 1u) & (r1_2 ^ res_1)) >> 0x1f;  // (from the original)
    if (res_1 == 0 || nf_1 != vf_1) {
        r0_2 = s32(r0_2) >> 0x18;  // (from the original)
        u32 res_2 = r0_2 - 6u;
        nf_1 = res_2 >> 0x1f;  // (from the original)
        vf_1 = ((r0_2 ^ 6u) & (r0_2 ^ res_2)) >> 0x1f;  // (from the original)
    }
    if (nf_1 == vf_1) {
        frame.release();
        return call_0056b550(r0_2, r1_2, 0x7dcu, guest::cpu()->r[3]);  // (from the original)
    }
    u32 r0_3 = u32(arg0->byte_8) | 1u;
    arg0->byte_8 = u8(r0_3);
    frame.release();
    return call_0056b550(r0_3, r1_2, 0x7dcu, guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0020d8a4
GUEST_EXPORT(0x0020d8a4, d_0020d8a4::f_0020d8a4);

// f_0020fb10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0020fb10 {

inline guest::global<u8, 0x00953f68> global_00953f68;  // (from the original)
inline guest::global<u32, 0x00aaf14c> global_00aaf14c;  // (from the original)
inline constexpr guest::Function<0x002d4d30, u32(u32, u32, u32, u32)> call_002d4d30;  // (from the original)
inline constexpr guest::Function<0x002d5184, u32(u32, u32)> call_002d5184;  // (from the original)
inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32, u32)> call_002fc20c;  // (from the original)
inline constexpr guest::Function<0x002fc288, u32(u32, u32, u32, u32)> call_002fc288;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x002fe9c8, u32(u32, u32, u32, u32)> call_002fe9c8;  // (from the original)
inline constexpr guest::Function<0x002fe9dc, u32(u32, u32, u32, u32)> call_002fe9dc;  // (from the original)
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> call_002ff6f8;  // (from the original)
inline constexpr guest::Function<0x003004c4, u32(u32, u32, u32, u32)> call_003004c4;  // (from the original)
inline constexpr guest::Function<0x00305f2c, u32(u32, u32, u32, u32)> call_00305f2c;  // (from the original)
inline constexpr guest::Function<0x0030f594, u32(u32, u32, u32, u32)> call_0030f594;  // (from the original)
inline constexpr guest::Function<0x00317efc, u32(u32, u32, u32, u32)> call_00317efc;  // (from the original)
inline constexpr guest::Function<0x005c4e00, u32(u32, u32, u32, u32)> call_005c4e00;  // (from the original)
inline constexpr guest::Function<0x005dc9d4, u32(u32, u32, u32, u32)> call_005dc9d4;  // (from the original)
inline constexpr guest::Function<0x00700198, u32(u32, u32, u32, u32)> call_00700198;  // (from the original)
inline constexpr guest::Function<0x0072031c, u32(u32, u32, u32, u32)> call_0072031c;  // (from the original)
inline constexpr guest::Function<0x007203f0, u32(u32, u32, u32, u32)> call_007203f0;  // (from the original)

void f_0020fb10(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x2ec);  // the original's stack frame
    u32 r4_2 = 0;
    u32 r0_1 = call_005c4e00(r0, r1, r2, r3);
    u32 r0_2 = call_00317efc(r0_1, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r7 = r0_2;
    u32 r0_3 = call_0072031c(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_4 = call_0030f594(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_3 = guest::cpu()->r[1];
    u32 r2_4 = guest::cpu()->r[2];
    u32 r3_4 = guest::cpu()->r[3];
    if (r0_4 == 0) {
        u32 r0_5 = call_0072031c(r7, r1_3, r2_4, r3_4);
        call_005dc9d4(r0 + 0x7cu, r0_5, 0u, guest::cpu()->r[3]);  // (from the original)
        u32 r0_7 = call_0072031c(r7, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        call_002fc8e8(r0 + 0x130u, r0_7, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1_3 = guest::cpu()->r[1];
        r2_4 = guest::cpu()->r[2];
        r3_4 = guest::cpu()->r[3];
        *gptr<u8>(r0 + 0x138u) = 0;  // (from the original)
    }
    u32 r0_9 = call_007203f0(r7, r1_3, r2_4, r3_4);
    u32 r0_10 = call_0030f594(r0_9, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_6 = guest::cpu()->r[1];
    u32 r2_8 = guest::cpu()->r[2];
    u32 r3_9 = guest::cpu()->r[3];
    if (r0_10 == 0) {
        u32 r0_11 = call_007203f0(r7, r1_6, r2_8, r3_9);
        call_005dc9d4(r0 + 0x7cu, r0_11, 0u, guest::cpu()->r[3]);  // (from the original)
        u32 r0_13 = call_007203f0(r7, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        call_002fc8e8(r0 + 0x130u, r0_13, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1_6 = guest::cpu()->r[1];
        r2_8 = guest::cpu()->r[2];
        r3_9 = guest::cpu()->r[3];
        *gptr<u8>(r0 + 0x138u) = 0;  // (from the original)
    }
    u32 r0_15 = call_00700198(4u, r1_6, r2_8, r3_9);
    u32 r0_16 = call_00700198(4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r2_12 = *gptr<u16>(r0_16 + 2u);
    u64 res_1 = u64(0xcccccccdu) * (u32(*gptr<u16>(r0_15 + 4u)) + r2_12);  // (from the original)
    u32 r1_9 = res_1;
    u32 r0_17 = u32(res_1 >> 0x20) >> 3;  // (from the original)
    u32 r4_1 = r0_17 + 0x1eu;  // (from the original)
    u32 r0_18 = call_00305f2c(r0_17, r1_9, r2_12, guest::cpu()->r[3]);
    u32 r1_10 = guest::cpu()->r[1];
    u32 r2_13 = guest::cpu()->r[2];
    u32 r3_15 = guest::cpu()->r[3];
    if (r0_18 != 3u && *global_00aaf14c != 0) {
        u32 r0_19 = *global_00953f68;
        if (r0_19 == 6u) {
            r4_2 = r4_1 + 0x32u;  // (from the original)
            goto L_20fc38;
        }
        if (r0_19 == 7u) {
            r4_2 = r4_1 - 0x14u;  // (from the original)
            goto L_20fc38;
        }
    }
    r4_2 = r4_1 + 0xau;  // (from the original)
L_20fc38:;
    u32 r5_1 = 1u;
    u32 r6 = r5_1;
    u32 r0_20 = call_002ff6f8(0x64u, r1_10, r2_13, r3_15);  // (from the original)
    if (s32(r0_20) < s32(r4_2)) {
        r5_1 = 0x36u;  // (from the original)
    }
    u32 r0_21 = call_002ff6f8(0x64u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    if (s32(r0_21) < s32(r4_2)) {
        r6 = 0x36u;  // (from the original)
    }
    call_002fc20c(frame.at(0x2e8).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_002fc288(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = call_002fe9c8(frame.at(0).addr(), 3u, r5_1, 0u);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 r4 = 0u;
    do {
        u32 r0_25 = call_005c4e00(r0, r1, r2, r3);
        u32 r0_26 = call_00317efc(r0_25, r4 & 0xffu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = *gptr<u8>(r0_26 + 0x1eu);  // (from the original)
        if (r0 >= 2u) {
            u32 r0_27 = call_0072031c(r0_26, r1, r2, r3);
            r0 = call_002fcaf4(r0_27, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0 == 0) {
                u32 r0_28 = call_0072031c(r0_26, r1, r2, r3);
                r0 = call_002fe9dc(frame.at(0).addr(), r0_28, guest::cpu()->r[2], guest::cpu()->r[3]);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
            }
        }
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 6);
    call_003004c4(frame.at(0x2e8).addr(), 1u, frame.at(0).addr(), r3);  // (from the original)
    call_002d4d30(r7, frame.at(0x2e8).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_002fc20c(frame.at(0x2e8).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_002fc288(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = call_002fe9c8(frame.at(0).addr(), 4u, r6, 0u);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    do {
        u32 r0_34 = call_005c4e00(r0, r1, r2, r3);
        u32 r0_35 = call_00317efc(r0_34, r4 & 0xffu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = *gptr<u8>(r0_35 + 0x1eu);  // (from the original)
        if (r0 >= 2u) {
            u32 r0_36 = call_007203f0(r0_35, r1, r2, r3);
            r0 = call_002fcaf4(r0_36, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0 == 0) {
                u32 r0_37 = call_007203f0(r0_35, r1, r2, r3);
                r0 = call_002fe9dc(frame.at(0).addr(), r0_37, guest::cpu()->r[2], guest::cpu()->r[3]);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
            }
        }
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 6);
    call_003004c4(frame.at(0x2e8).addr(), 1u, frame.at(0).addr(), r3);  // (from the original)
    call_002d5184(r7, frame.at(0x2e8).addr());  // (from the original)
}

}  // namespace d_0020fb10
GUEST_EXPORT_FRAMED(0x0020fb10, d_0020fb10::f_0020fb10, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original
