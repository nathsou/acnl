// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_0067334c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0067334c {

struct __attribute__((packed)) Object_0067334c_0 {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
    u8 unknown_172[0x75c];  // (not used here)
    u8 byte_8ce;
    u8 byte_8cf;
};
GUEST_OFFSET(Object_0067334c_0, byte_171, 0x171);  // (from the original)
GUEST_OFFSET(Object_0067334c_0, byte_8ce, 0x8ce);  // (from the original)
GUEST_OFFSET(Object_0067334c_0, byte_8cf, 0x8cf);  // (from the original)

inline constexpr guest::Function<0x00597784, u32(u32, u32, u32, u32)> call_00597784;  // (from the original)
inline constexpr guest::Function<0x0066a18c, u32(u32, u32, u32, u32)> call_0066a18c;  // (from the original)

void f_0067334c(gptr<Object_0067334c_0> arg0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r6_1 = sxtb(u32(arg0->byte_8ce));
    u32 r1_1 = arg0->byte_171;
    u32 r5_1 = sxtb(u32(arg0->byte_8cf));
    if ((r1_1 & 1u) == 0) {
        guest::cpu()->r[1] = r1_1;
        return;
    } else {
        arg0->byte_171 = u8(r1_1 & ~1u);
    }
    call_0066a18c(arg0.addr(), r6_1, r5_1, guest::cpu()->r[3]);
    frame.release();
    call_00597784(arg0.addr(), r6_1, r5_1, guest::cpu()->r[3]);
    return;
}

}  // namespace d_0067334c
GUEST_EXPORT(0x0067334c, d_0067334c::f_0067334c);

// f_0067349c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0067349c {

struct __attribute__((packed)) Object_0067349c_0 {
    u8 unknown_0[0x47c];  // (not used here)
    u32 word_47c;
    u32 word_480;
    u8 unknown_484[0x3ec];  // (not used here)
    u8 byte_870;
    u8 unknown_871[0x3];  // (not used here)
    u32 word_874;
    u32 word_878;
    u32 word_87c;
    u32 word_880;
};
GUEST_OFFSET(Object_0067349c_0, word_47c, 0x47c);  // (from the original)
GUEST_OFFSET(Object_0067349c_0, word_480, 0x480);  // (from the original)
GUEST_OFFSET(Object_0067349c_0, byte_870, 0x870);  // (from the original)
GUEST_OFFSET(Object_0067349c_0, word_874, 0x874);  // (from the original)
GUEST_OFFSET(Object_0067349c_0, word_878, 0x878);  // (from the original)
GUEST_OFFSET(Object_0067349c_0, word_87c, 0x87c);  // (from the original)
GUEST_OFFSET(Object_0067349c_0, word_880, 0x880);  // (from the original)

struct __attribute__((packed)) Object_0067349c_1 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_0067349c_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0067349c_1, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_0067349c_r0_4 {
    u8 byte_0;
};
GUEST_OFFSET(Local_0067349c_r0_4, byte_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32, u32)> call_003171b4;  // (from the original)

void f_0067349c(gptr<Object_0067349c_0> arg0, gptr<Object_0067349c_1> arg1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r1 = arg1.addr();
    arg0->byte_870 = 9;
    arg0->word_874 = arg0->word_47c;
    u32 r3_1 = arg0->word_480;
    arg0->word_878 = r3_1;
    arg0->word_87c = arg1->word_0;
    arg0->word_880 = arg1->word_8;
    call_003171b4(frame.at(0).addr(), frame.at(4).addr(), r1, r3_1);
    r1 = 0xaadaf4u;  // (from the original)
    u32 r3 = ~0u;
    u32 r12 = 1u;
    do {
        u32 r2 = ~0u;
        do {
            u32 r0_2 = *frame.at<u32>(0) + r2;
            u32 cf_1 = r0_2 >= 0x70u;  // (from the original)
            u32 r4_1 = *frame.at<u32>(4) + r3;
            if (!cf_1) {
                cf_1 = r4_1 >= 0x70u;  // (from the original)
            }
            u32 r0_3 = cf_1 ? 0x3100u : r0_2 + ((r4_1 << 3) - r4_1 << 4);  // (from the original)
            if (r0_3 < 0x3100u) {  // (from the original)
                gptr<Local_0067349c_r0_4> r0_4 = gptr<Local_0067349c_r0_4>(r1 + (r0_3 >> 3));
                r0_4->byte_0 = u8(u32(r0_4->byte_0) | lsl_r(r12, (r0_3 & 7u) & 0xff));  // (from the original)
                *gptr<u8>(r1 + 0x620u) = u8(r12);  // (from the original)
            }
            r2 += 1u;
            guest::preempt();
        } while (s32(r2) <= 1);
        r3 += 1u;
        guest::preempt();
    } while (s32(r3) <= 1);
}

}  // namespace d_0067349c
GUEST_EXPORT_FRAMED(0x0067349c, d_0067349c::f_0067349c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006739b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006739b8 {

struct __attribute__((packed)) Local_006739b8_ea_1 {
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
GUEST_OFFSET(Local_006739b8_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006739b8_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_006739b8_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_006739b8_ea_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_006739b8_ea_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_006739b8_ea_1, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_006739b8_ea_1, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_006739b8_ea_1, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Local_006739b8_ea_1, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Local_006739b8_ea_1, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Local_006739b8_ea_1, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Local_006739b8_ea_1, word_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Local_006739b8_ea_1, word_30, 0x30);  // (from the original)

struct __attribute__((packed)) Local_006739b8_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_006739b8_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006739b8_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_006739b8_ea_2, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_006739b8_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006739b8_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006739b8_ea_3, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_006739b8_ea_4 {
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
GUEST_OFFSET(Local_006739b8_ea_4, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006739b8_ea_4, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_006739b8_ea_4, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_006739b8_ea_4, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_006739b8_ea_4, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_006739b8_ea_4, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_006739b8_ea_4, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_006739b8_ea_4, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Local_006739b8_ea_4, word_20, 0x20);  // (from the original)

struct __attribute__((packed)) Local_006739b8_ea_5 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
    u16 half_4;
    u8 unknown_6[0x1];  // (not used here)
    u8 byte_7;
};
GUEST_OFFSET(Local_006739b8_ea_5, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006739b8_ea_5, byte_1, 0x1);  // (from the original)
GUEST_OFFSET(Local_006739b8_ea_5, byte_2, 0x2);  // (from the original)
GUEST_OFFSET(Local_006739b8_ea_5, byte_3, 0x3);  // (from the original)
GUEST_OFFSET(Local_006739b8_ea_5, half_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_006739b8_ea_5, byte_7, 0x7);  // (from the original)

struct __attribute__((packed)) Local_006739b8_ea_6 {
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
GUEST_OFFSET(Local_006739b8_ea_6, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006739b8_ea_6, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_006739b8_ea_6, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_006739b8_ea_6, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_006739b8_ea_6, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_006739b8_ea_6, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_006739b8_ea_6, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_006739b8_ea_6, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Local_006739b8_ea_6, word_20, 0x20);  // (from the original)

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)
inline constexpr guest::Function<0x00723af8, u32(u32, u32, u32, u32)> call_00723af8;  // (from the original)

u32 f_006739b8(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x38);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_006739b8_ea_4> ea_4 = gptr<Local_006739b8_ea_4>(0u);
    u32 r4_1 = 0;
    u32 r5_2 = 0;
    u32 r6_1 = 0;
    u32 r7_2 = 0;
    u32 r8_2 = 0;
    u32 r9_2 = 0;
    u32 r10_2 = 0;
    u32 r11_1 = 0;
    u32 r1_3 = 0;
    gptr<Local_006739b8_ea_1> ea_1 = gptr<Local_006739b8_ea_1>(frame.at(4).addr());
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
    gptr<Local_006739b8_ea_2> ea_2 = gptr<Local_006739b8_ea_2>(frame.at(0x40).addr());  // (from the original)
    u32 r5_1 = ea_2->word_0;
    u32 r8_1 = ea_2->word_4;
    u32 r10_1 = ea_2->word_8;
    gptr<Local_006739b8_ea_3> ea_3 = gptr<Local_006739b8_ea_3>(frame.at(0x38).addr());  // (from the original)
    u32 r7_1 = ea_3->word_0;
    u32 r9_1 = ea_3->word_4;
    u32 r0_2 = call_00723af8(r0 + 0x68u, r1, r2, r3);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    u32 r3_1 = guest::cpu()->r[3];
    if (r0_2 == 0 && r1 != 0 && r1 < 0x41u) {  // (from the original)
        goto L_673a08;
    }
    ea_4 = gptr<Local_006739b8_ea_4>(frame.at(0x14).addr());  // (from the original)
    r4_1 = ea_4->word_0;
    r5_2 = ea_4->word_4;
    r6_1 = ea_4->word_8;
    r7_2 = ea_4->word_c;
    r8_2 = ea_4->word_10;
    r9_2 = ea_4->word_14;
    r10_2 = ea_4->word_18;
    r11_1 = ea_4->word_1c;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[8] = r8_2;
    guest::cpu()->r[9] = r9_2;
    guest::cpu()->r[10] = r10_2;
    guest::cpu()->r[11] = r11_1;
    return 0u;
L_673a08:;
    u32 r0_3 = call_00656c20(r0, r1_1, r2_1, r3_1);
    gptr<Local_006739b8_ea_5> ea_5 = gptr<Local_006739b8_ea_5>(r0_3 + 0xeu);  // (from the original)
    ea_5->byte_0 = u8(r1);
    ea_5->byte_1 = u8(*frame.at<u32>(0xc));  // (from the original)
    ea_5->byte_2 = u8(r3);
    ea_5->byte_3 = u8(r7_1);
    *gptr<u8>(r0_3 + 0x14u) = u8(r8_1);  // (from the original)
    ea_5->byte_7 = u8(u32(ea_5->byte_7) & ~1u | r9_1);
    if (r5_1 != 0) {
        u32 r1_2 = *gptr<u16>(r5_1);
        *frame.at<u16>(0) = u16(r1_2);
        ea_5->half_4 = u16(r1_2);
        r1_3 = u32(ea_5->byte_7) | 2u;
    } else {
        u32 r1_4 = *gptr<u16>(r0 + 0x2eu);  // (from the original)
        *frame.at<u16>(0) = u16(r1_4);
        ea_5->half_4 = u16(r1_4);
        r1_3 = u32(ea_5->byte_7) & ~2u;
    }
    ea_5->byte_7 = u8(r1_3 & 0xfbu | r10_1 << 2);  // (from the original)
    gptr<Local_006739b8_ea_6> ea_6 = gptr<Local_006739b8_ea_6>(frame.at(0x14).addr());  // (from the original)
    u32 r4_2 = ea_6->word_0;
    u32 r5_3 = ea_6->word_4;
    u32 r6_2 = ea_6->word_8;
    u32 r7_3 = ea_6->word_c;
    u32 r8_3 = ea_6->word_10;
    u32 r9_3 = ea_6->word_14;
    u32 r10_3 = ea_6->word_18;
    u32 r11_2 = ea_6->word_1c;
    r14 = ea_6->word_20;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_3;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_3;
    guest::cpu()->r[8] = r8_3;
    guest::cpu()->r[9] = r9_3;
    guest::cpu()->r[10] = r10_3;
    guest::cpu()->r[11] = r11_2;
    frame.release();
    return call_0064d0b8(r0, 0xafu, r0_3, 0u);  // (from the original)
}

}  // namespace d_006739b8
GUEST_EXPORT(0x006739b8, d_006739b8::f_006739b8);

// f_00673a94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00673a94 {

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_00673a94(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = call_00656c20(r0, r1, r2, r3);
    *gptr<u32>(r0_1 + 0xeu) = *gptr<u32>(r1);  // (from the original)
    frame.release();
    return call_0064d0b8(r0, 0x8eu, r0_1, 0u);  // (from the original)
}

}  // namespace d_00673a94
GUEST_EXPORT(0x00673a94, d_00673a94::f_00673a94);

// f_00673ac4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00673ac4 {

struct __attribute__((packed)) Local_00673ac4_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_00673ac4_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00673ac4_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00673ac4_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00673ac4_ea_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_00673ac4_ea_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_00673ac4_ea_1, word_14, 0x14);  // (from the original)

struct __attribute__((packed)) Local_00673ac4_ea_3 {
    u16 half_0;
    u8 unknown_2[0x5];  // (not used here)
    u8 byte_7;
};
GUEST_OFFSET(Local_00673ac4_ea_3, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00673ac4_ea_3, byte_7, 0x7);  // (from the original)

struct __attribute__((packed)) Local_00673ac4_ea_9 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Local_00673ac4_ea_9, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00673ac4_ea_9, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00673ac4_ea_9, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00673ac4_ea_9, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_00673ac4_ea_9, word_10, 0x10);  // (from the original)

inline guest::global<u32, 0x00673b58> global_00673b58;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

void f_00673ac4(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_00673ac4_ea_1> ea_1 = gptr<Local_00673ac4_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r3;
    ea_1->word_4 = r4;
    ea_1->word_8 = r5;
    ea_1->word_c = r6;
    ea_1->word_10 = r7;
    ea_1->word_14 = r14;
    u32 r0_1 = call_00656c20(r0, r1, r2, r3);
    float S0_1 = std::bit_cast<float>(*global_00673b58);
    u32 r1_1 = std::bit_cast<u32>(std::bit_cast<float>(vcvt_sz_f(std::bit_cast<float>(*gptr<u32>(r1)) * S0_1)));
    *frame.at<u16>(0) = u16(r1_1);
    gptr<Local_00673ac4_ea_3> ea_3 = gptr<Local_00673ac4_ea_3>(r0_1 + 0xeu);  // (from the original)
    ea_3->half_0 = u16(r1_1);
    u32 r3_1 = std::bit_cast<u32>(std::bit_cast<float>(vcvt_sz_f(std::bit_cast<float>(*gptr<u32>(r1 + 4u)) * S0_1)));
    *frame.at<u16>(0) = u16(r3_1);
    *gptr<u16>(ea_3.addr() + 2u) = u16(r3_1);
    float S1_1 = std::bit_cast<float>(*gptr<u32>(r1 + 8u));
    float S0_2 = std::bit_cast<float>(vcvt_sz_f(S1_1 * S0_1));
    u32 r3_2 = std::bit_cast<u32>(S0_2);
    *frame.at<u16>(0) = u16(r3_2);
    *gptr<u16>(ea_3.addr() + 4u) = u16(r3_2);
    u32 r1_2 = s32(u32(*gptr<u16>(r2))) >> 8;
    *gptr<u8>(r0_1 + 0x14u) = u8(r1_2);  // (from the original)
    ea_3->byte_7 = u8(r3);
    gptr<Local_00673ac4_ea_9> ea_9 = gptr<Local_00673ac4_ea_9>(frame.at(4).addr());
    u32 r4_1 = ea_9->word_0;
    u32 r5_1 = ea_9->word_4;
    u32 r6_1 = ea_9->word_8;
    u32 r7_1 = ea_9->word_c;
    r14 = ea_9->word_10;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    frame.release();
    call_0064d0b8(r0, 0x33u, r0_1, 0u);
    return;  // (from the original)
}

}  // namespace d_00673ac4
GUEST_EXPORT(0x00673ac4, d_00673ac4::f_00673ac4);

// f_00673b5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00673b5c {

struct __attribute__((packed)) Local_00673b5c_ea_1 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Local_00673b5c_ea_1, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00673b5c_ea_1, byte_1, 0x1);  // (from the original)
GUEST_OFFSET(Local_00673b5c_ea_1, byte_2, 0x2);  // (from the original)

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

void f_00673b5c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r0_1 = call_00656c20(r0, r1, r2, r3);
    gptr<Local_00673b5c_ea_1> ea_1 = gptr<Local_00673b5c_ea_1>(r0_1 + 0xeu);  // (from the original)
    ea_1->byte_0 = u8(r1);
    ea_1->byte_1 = u8(r2);
    ea_1->byte_2 = u8(r3);
    frame.release();
    call_0064d0b8(r0, 0x6au, r0_1, 0u);
    return;  // (from the original)
}

}  // namespace d_00673b5c
GUEST_EXPORT(0x00673b5c, d_00673b5c::f_00673b5c);

// f_006742c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006742c0 {

struct __attribute__((packed)) Local_006742c0_r4_1 {
    u8 unknown_0[0x6];  // (not used here)
    u8 byte_6;
    u8 byte_7;
};
GUEST_OFFSET(Local_006742c0_r4_1, byte_6, 0x6);  // (from the original)
GUEST_OFFSET(Local_006742c0_r4_1, byte_7, 0x7);  // (from the original)

inline constexpr guest::Function<0x0052c9fc, u32(u32)> call_0052c9fc;  // (from the original)
inline constexpr guest::Function<0x005c5318, u32(u32, u32, u32, u32)> call_005c5318;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x006651b4, u32(u32, u32, u32, u32)> call_006651b4;  // (from the original)

void f_006742c0(gptr<AcPlayer_rec> arg0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    gptr<Local_006742c0_r4_1> r4_1 = gptr<Local_006742c0_r4_1>(r0 + 0x171u);  // (from the original)
    if ((u32(arg0->byte_171) >> 5u & 1u) != 0) {
        u32 r0_1 = arg0->byte_177;
        if ((r0_1 & 1u) != 0) {
            if ((r0_1 >> 1u & 1u) == 0) {
                arg0->byte_177 = u8(r0_1 | 2u);
                call_0052c9fc(r0_1);
            }
        } else {
            u32 r1_1 = r0_1 | 1u;
            r4_1->byte_6 = u8(r1_1);
            call_005c5318(0u, r1_1, r2, r3);
            u32 r0_2 = r4_1->byte_7;
            if ((r0_2 & 1u) != 0) {
                call_006651b4(r0, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
            } else {
                if ((r0_2 >> 1u & 1u) == 0) {
                    goto L_674360;
                } else {
                    r4_1->byte_7 = u8(r0_2 & ~2u);
                }
                call_0064d0b8(r0, 0xe0u, 0u, 0u);  // (from the original)
            }
        }
L_674360:;
    }
}

}  // namespace d_006742c0
GUEST_EXPORT_FRAMED(0x006742c0, d_006742c0::f_006742c0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00677b70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00677b70 {

inline guest::global<u32, 0x0095c71c> global_0095c71c;  // (from the original)
inline constexpr guest::Function<0x001b7b90, u32(u32, u32)> call_001b7b90;  // (from the original)
inline constexpr guest::Function<0x0064f068, u32(u32, u32, u32, u32)> call_0064f068;  // (from the original)

u32 f_00677b70() {
    u32 r0_1 = call_0064f068(9u, 0x40u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        return 1u;
    }
    u32 r0_2 = *global_0095c71c;
    if (r0_2 != 0) {
        call_001b7b90(r0_2, r1_1);
        r1_1 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_00677b70
GUEST_EXPORT_FRAMED(0x00677b70, d_00677b70::f_00677b70, 0x4010);  // pushes {r4, lr} first, as the original

// f_00678300: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00678300 {

struct __attribute__((packed)) Local_00678300_r4_1 {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
};
GUEST_OFFSET(Local_00678300_r4_1, byte_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x005d41b8, u32(u32, u32, u32, u32)> call_005d41b8;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

void f_00678300(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x20);  // the original's stack frame
    u32 r0_1 = call_00656c20(r0, r1, r2, r3);
    gptr<Local_00678300_r4_1> r4_1 = gptr<Local_00678300_r4_1>(r0_1 + 0xeu);  // (from the original)
    *gptr<u8>(r0_1 + 0x13u) = u8(r3);  // (from the original)
    call_005d41b8(r4_1.addr(), r0 + 0x14u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r4_1->byte_4 = u8(u32(s32(u32(*gptr<u16>(r0 + 0x2eu))) >> 8));  // (from the original)
    if (r1 != 0) {
        call_005d41b8(r4_1.addr(), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    if (r2 != 0) {
        r4_1->byte_4 = u8(u32(s32(u32(*gptr<u16>(r2))) >> 8));
    }
    frame.release();
    call_0064d0b8(r0, 0xe2u, r0_1, 0u);
    return;  // (from the original)
}

}  // namespace d_00678300
GUEST_EXPORT(0x00678300, d_00678300::f_00678300);

// f_0067837c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0067837c {

struct __attribute__((packed)) Object_0067837c_0 {
    u8 unknown_0[0x1a9];  // (not used here)
    u8 byte_1a9;
};
GUEST_OFFSET(Object_0067837c_0, byte_1a9, 0x1a9);  // (from the original)

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

void f_0067837c(gptr<Object_0067837c_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    if (arg0->byte_1a9 != 0x88u) {  // (from the original)
        u32 r0_1 = call_00656c20(arg0.addr(), r1, r2, r3);
        *gptr<u8>(r0_1 + 0xeu) = u8(r1);  // (from the original)
        frame.release();
        call_0064d0b8(arg0.addr(), 0x88u, r0_1, 0u);
        return;  // (from the original)
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0067837c
GUEST_EXPORT(0x0067837c, d_0067837c::f_0067837c);

// f_006783c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006783c0 {

struct __attribute__((packed)) Local_006783c0_r4_1 {
    u8 unknown_0[0x5];  // (not used here)
    u8 byte_5;
};
GUEST_OFFSET(Local_006783c0_r4_1, byte_5, 0x5);  // (from the original)

inline constexpr guest::Function<0x005d41b8, u32(u32, u32, u32, u32)> call_005d41b8;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_006783c0(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x20);  // the original's stack frame
    u32 r0_1 = call_00656c20(r0, r1, r2, r3);
    u32 r2_1 = guest::cpu()->r[2];
    u32 r3_1 = guest::cpu()->r[3];
    gptr<Local_006783c0_r4_1> r4_1 = gptr<Local_006783c0_r4_1>(r0_1 + 0xeu);  // (from the original)
    *gptr<u8>(r0_1 + 0xeu) = u8(r1);  // (from the original)
    u32 r5_1 = r3 >> 8u & 0xffu;  // (from the original)
    if (r2 != 0) {
        call_005d41b8(r4_1.addr() + 1u, r2, r2_1, r3_1);
        r4_1->byte_5 = u8(r5_1);
    } else {
        call_005d41b8(r4_1.addr() + 1u, 0xae5658u, r2_1, r3_1);  // (from the original)
        r4_1->byte_5 = u8(r5_1);
    }
    frame.release();
    return call_0064d0b8(r0, 0x89u, r0_1, 0u);  // (from the original)
}

}  // namespace d_006783c0
GUEST_EXPORT(0x006783c0, d_006783c0::f_006783c0);

// f_00678434: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00678434 {

struct __attribute__((packed)) Local_00678434_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00678434_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00678434_ea_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_00678434_r0_2 {
    u8 byte_0;
    u8 byte_1;
    u32 word_2;
    u8 unknown_6[0x1];  // (not used here)
    u8 byte_7;
    u8 byte_8;
};
GUEST_OFFSET(Local_00678434_r0_2, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00678434_r0_2, byte_1, 0x1);  // (from the original)
GUEST_OFFSET(Local_00678434_r0_2, word_2, 0x2);  // (from the original)
GUEST_OFFSET(Local_00678434_r0_2, byte_7, 0x7);  // (from the original)
GUEST_OFFSET(Local_00678434_r0_2, byte_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x005d41b8, u32(u32, u32, u32, u32)> call_005d41b8;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

void f_00678434(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x20);  // the original's stack frame
    gptr<Local_00678434_ea_1> ea_1 = gptr<Local_00678434_ea_1>(frame.at(0x20).addr());  // (from the original)
    u32 r4_1 = ea_1->word_0;
    u32 r5_1 = ea_1->word_4;
    u32 r0_1 = call_00656c20(r0, r1, r2, r3);
    gptr<Local_00678434_r0_2> r0_2 = gptr<Local_00678434_r0_2>(r0_1 + 0xeu);  // (from the original)
    *gptr<u8>(r0_1 + 0x14u) = 0;  // (from the original)
    r0_2->byte_8 = u8(r5_1);
    r0_2->word_2 = *gptr<u32>(r4_1);
    r0_2->byte_0 = u8(r1);
    r0_2->byte_1 = u8(r2);
    r0_2->byte_7 = 0;
    call_005d41b8(r0_2.addr() + 9u, r3, 0u, guest::cpu()->r[3]);
    frame.release();
    call_0064d0b8(r0, 0x50u, r0_1, 0u);
    return;  // (from the original)
}

}  // namespace d_00678434
GUEST_EXPORT(0x00678434, d_00678434::f_00678434);

// f_006784dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006784dc {

struct __attribute__((packed)) Object_006784dc_0 {
    u8 unknown_0[0x2e];  // (not used here)
    u16 half_2e;
    u8 unknown_30[0x230];  // (not used here)
    u32 word_260;
    u32 word_264;
    u8 unknown_268[0x7f0];  // (not used here)
    u32 word_a58;
    u32 word_a5c;
    u8 unknown_a60[0x10];  // (not used here)
    u32 word_a70;
    u32 word_a74;
};
GUEST_OFFSET(Object_006784dc_0, half_2e, 0x2e);  // (from the original)
GUEST_OFFSET(Object_006784dc_0, word_260, 0x260);  // (from the original)
GUEST_OFFSET(Object_006784dc_0, word_264, 0x264);  // (from the original)
GUEST_OFFSET(Object_006784dc_0, word_a58, 0xa58);  // (from the original)
GUEST_OFFSET(Object_006784dc_0, word_a5c, 0xa5c);  // (from the original)
GUEST_OFFSET(Object_006784dc_0, word_a70, 0xa70);  // (from the original)
GUEST_OFFSET(Object_006784dc_0, word_a74, 0xa74);  // (from the original)

inline constexpr guest::Function<0x002073dc, u32(u32, u32, u32, u32)> call_002073dc;  // (from the original)
inline constexpr guest::Function<0x0070ac68, u32(u32, u32, u32, u32)> call_0070ac68;  // (from the original)

void f_006784dc(gptr<Object_006784dc_0> arg0) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r0_1 = arg0->half_2e;
    *frame.at<u16>(0xc) = 0;  // (from the original)
    *frame.at<u16>(0xe) = u16(r0_1);  // (from the original)
    *frame.at<u16>(0x10) = 0;  // (from the original)
    u32 r0_2 = arg0->word_a58;
    if (r0_2 != 0 && arg0->word_a5c == *gptr<u32>(r0_2 + 0xcu)) {  // (from the original)
        goto L_67855c;
    }
    r2_1 = arg0->word_260;
    r1_1 = r0 + 0x430u;  // (from the original)
    r0_3 = r0 + 0x1b4u;  // (from the original)
    call_0070ac68(r0_3, r1_1, r2_1, 1u);
    r2_2 = r0 + 0x430u;  // (from the original)
    r3_1 = frame.at(0xc).addr();  // (from the original)
    r0_4 = r0 + 0xa4cu;  // (from the original)
    *frame.at<u32>(8) = 0;
    *frame.at<u32>(4) = 1;
    *frame.at<u32>(0) = 0xae5664;  // (from the original)
    call_002073dc(r0_4, 0x148u, r2_2, r3_1);  // (from the original)
L_67855c:;
    u32 r0_5 = arg0->word_a70;
    if (r0_5 != 0) {
        r1_2 = arg0->word_a74;
        if (r1_2 == *gptr<u32>(r0_5 + 0xcu)) {  // (from the original)
            guest::cpu()->r[1] = r1_2;
            return;
        }
    }
    u32 r1_3 = r0 + 0x43cu;  // (from the original)
    call_0070ac68(r0 + 0x1b4u, r1_3, arg0->word_264, 1u);  // (from the original)
    *frame.at<u32>(8) = 0;
    *frame.at<u32>(4) = 1;
    *frame.at<u32>(0) = 0xae5664;  // (from the original)
    call_002073dc(r0 + 0xa64u, 0x148u, r1_3, frame.at(0xc).addr());  // (from the original)
    r1_2 = guest::cpu()->r[1];
}

}  // namespace d_006784dc
GUEST_EXPORT_FRAMED(0x006784dc, d_006784dc::f_006784dc, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0067bc50: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0067bc50 {

inline constexpr guest::Function<0x001d2e8c, u32(u32, u32, u32)> call_001d2e8c;  // (from the original)
inline constexpr guest::Function<0x001d32c8, u32(u32, u32)> call_001d32c8;  // (from the original)

u32 f_0067bc50(u32 r0) {
    call_001d32c8(r0 + 0x1b4u, r0 + 0x920u);  // (from the original)
    u32 r2_1 = *gptr<u32>(r0 + 0x944u);  // (from the original)
    u32 r1_2 = *gptr<u8>(r0 + 0x942u);  // (from the original)
    call_001d2e8c(r0 + 0x1b4u, r1_2, r2_1);  // (from the original)
    *gptr<u32>(r0 + 0x3e0u) = *gptr<u32>(r0 + 0x948u);  // (from the original)
    u32 r0_3 = *gptr<u8>(r0 + 0x94cu);  // (from the original)
    *gptr<u8>(r0 + 0x3e8u) = u8(r0_3);  // (from the original)
    u32 r1_3 = u32(*gptr<u8>(r0 + 0x173u)) | 8u | 0x20u;  // (from the original)
    *gptr<u8>(r0 + 0x173u) = u8(r1_3);  // (from the original)
    guest::cpu()->r[1] = r1_3;
    return r0_3;
}

}  // namespace d_0067bc50
GUEST_EXPORT_FRAMED(0x0067bc50, d_0067bc50::f_0067bc50, 0x4010);  // pushes {r4, lr} first, as the original

// f_0067bc98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0067bc98 {

struct __attribute__((packed)) Object_0067bc98_0 {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
    u8 unknown_172[0x758];  // (not used here)
    u8 byte_8ca;
    u8 byte_8cb;
};
GUEST_OFFSET(Object_0067bc98_0, byte_171, 0x171);  // (from the original)
GUEST_OFFSET(Object_0067bc98_0, byte_8ca, 0x8ca);  // (from the original)
GUEST_OFFSET(Object_0067bc98_0, byte_8cb, 0x8cb);  // (from the original)

inline constexpr guest::Function<0x00597784, u32(u32, u32, u32, u32)> call_00597784;  // (from the original)
inline constexpr guest::Function<0x00659630, u32(u32, u32, u32, u32)> call_00659630;  // (from the original)

void f_0067bc98(gptr<Object_0067bc98_0> arg0, u32 r1) {
    u32 r1_1 = arg0->byte_171;
    if ((r1_1 & 1u) == 0) {
        guest::cpu()->r[1] = r1_1;
        return;
    } else {
        arg0->byte_171 = u8(r1_1 & ~1u);
    }
    u32 r5_1 = sxtb(u32(arg0->byte_8cb));
    u32 r6_1 = sxtb(u32(arg0->byte_8ca));
    call_00659630(arg0.addr(), r6_1, r5_1, r1);
    call_00597784(arg0.addr(), r6_1, r5_1, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
}

}  // namespace d_0067bc98
GUEST_EXPORT_FRAMED(0x0067bc98, d_0067bc98::f_0067bc98, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0067bd70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0067bd70 {

inline guest::global<u32, 0x0095c71c> global_0095c71c;  // (from the original)
inline constexpr guest::Function<0x001b7b10, u32(u32, u32, u32, u32)> call_001b7b10;  // (from the original)
inline constexpr guest::Function<0x0064f068, u32(u32, u32, u32, u32)> call_0064f068;  // (from the original)

void f_0067bd70() {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = call_0064f068(9u, 0x40u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    if (r0_1 == 0) {
        return;
    }
    u32 r0_2 = *global_0095c71c;
    if (r0_2 == 0) {
        return;
    }
    frame.release();
    call_001b7b10(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
}

}  // namespace d_0067bd70
GUEST_EXPORT(0x0067bd70, d_0067bd70::f_0067bd70);

// f_0067bda8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0067bda8 {

struct __attribute__((packed)) Object_0067bda8_0 {
    u8 unknown_0[0x2e];  // (not used here)
    u16 half_2e;
    u8 unknown_30[0x230];  // (not used here)
    u32 word_260;
    u32 word_264;
    u8 unknown_268[0x7f0];  // (not used here)
    u32 word_a58;
    u32 word_a5c;
    u8 unknown_a60[0x10];  // (not used here)
    u32 word_a70;
    u32 word_a74;
};
GUEST_OFFSET(Object_0067bda8_0, half_2e, 0x2e);  // (from the original)
GUEST_OFFSET(Object_0067bda8_0, word_260, 0x260);  // (from the original)
GUEST_OFFSET(Object_0067bda8_0, word_264, 0x264);  // (from the original)
GUEST_OFFSET(Object_0067bda8_0, word_a58, 0xa58);  // (from the original)
GUEST_OFFSET(Object_0067bda8_0, word_a5c, 0xa5c);  // (from the original)
GUEST_OFFSET(Object_0067bda8_0, word_a70, 0xa70);  // (from the original)
GUEST_OFFSET(Object_0067bda8_0, word_a74, 0xa74);  // (from the original)

inline constexpr guest::Function<0x002e6500, u32(u32, u32, u32, u32)> call_002e6500;  // (from the original)
inline constexpr guest::Function<0x0070ac68, u32(u32, u32, u32, u32)> call_0070ac68;  // (from the original)

void f_0067bda8(gptr<Object_0067bda8_0> arg0) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r1_1 = arg0->half_2e;
    *frame.at<u16>(0) = 0;
    *frame.at<u16>(2) = u16(r1_1);
    *frame.at<u16>(4) = 0;
    u32 r0_1 = arg0->word_a58;
    if (r0_1 != 0) {
        r1_1 = arg0->word_a5c;
        if (r1_1 == *gptr<u32>(r0_1 + 0xcu)) {  // (from the original)
            call_0070ac68(arg0.addr() + 0x1b4u, arg0.addr() + 0x430u, arg0->word_260, 1u);  // (from the original)
            call_002e6500(arg0.addr() + 0xa4cu, arg0.addr() + 0x430u, frame.at(0).addr(), 1u);  // (from the original)
            r1_1 = guest::cpu()->r[1];
        }
    }
    u32 r0_4 = arg0->word_a70;
    if (r0_4 == 0) {
        guest::cpu()->r[1] = r1_1;
        return;
    }
    u32 r1_4 = arg0->word_a74;
    if (r1_4 != *gptr<u32>(r0_4 + 0xcu)) {  // (from the original)
        guest::cpu()->r[1] = r1_4;
        return;
    }
    u32 r1_5 = arg0.addr() + 0x43cu;  // (from the original)
    call_0070ac68(arg0.addr() + 0x1b4u, r1_5, arg0->word_264, 1u);  // (from the original)
    call_002e6500(arg0.addr() + 0xa64u, r1_5, frame.at(0).addr(), 1u);  // (from the original)
}

}  // namespace d_0067bda8
GUEST_EXPORT_FRAMED(0x0067bda8, d_0067bda8::f_0067bda8, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0067be68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0067be68 {

inline guest::global<u32, 0x00886c44> global_00886c44;  // (from the original)

u32 f_0067be68() {
    float S0_1 = float(std::bit_cast<u32>(std::bit_cast<float>(*global_00886c44)));
    guest::cpu()->s[0] = S0_1;
    return 0x886c44u;  // (from the original)
}

}  // namespace d_0067be68
GUEST_EXPORT(0x0067be68, d_0067be68::f_0067be68);

// f_0067be7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0067be7c {

inline guest::global<u32, 0x00886c48> global_00886c48;  // (from the original)

u32 f_0067be7c() {
    float S0_1 = float(std::bit_cast<u32>(std::bit_cast<float>(*global_00886c48)));
    guest::cpu()->s[0] = S0_1;
    return 0x886c48u;  // (from the original)
}

}  // namespace d_0067be7c
GUEST_EXPORT(0x0067be7c, d_0067be7c::f_0067be7c);

// f_0067be90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0067be90 {

inline guest::global<u32, 0x0067bea8> global_0067bea8;  // (from the original)
inline guest::global<u32, 0x00886954> global_00886954;  // (from the original)

u32 f_0067be90() {
    float S1_1 = std::bit_cast<float>(*global_0067bea8);
    float S0_1 = std::bit_cast<float>(*global_00886954) * S1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return 0x886954u;  // (from the original)
}

}  // namespace d_0067be90
GUEST_EXPORT(0x0067be90, d_0067be90::f_0067be90);

// f_0067beac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0067beac {

inline guest::global<u32, 0x00886c48> global_00886c48;  // (from the original)

u32 f_0067beac() {
    float S0_1 = float(std::bit_cast<u32>(std::bit_cast<float>(*global_00886c48)));
    guest::cpu()->s[0] = S0_1;
    return 0x886c48u;  // (from the original)
}

}  // namespace d_0067beac
GUEST_EXPORT(0x0067beac, d_0067beac::f_0067beac);

// f_0067e900: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0067e900 {

struct __attribute__((packed)) Object_0067e900_0 {
    u8 unknown_0[0x5de];  // (not used here)
    u16 half_5de;
    u8 unknown_5e0[0x3a4];  // (not used here)
    u8 byte_984;
    u8 unknown_985[0x3];  // (not used here)
    u32 word_988;
    u32 word_98c;
    u32 word_990;
};
GUEST_OFFSET(Object_0067e900_0, half_5de, 0x5de);  // (from the original)
GUEST_OFFSET(Object_0067e900_0, byte_984, 0x984);  // (from the original)
GUEST_OFFSET(Object_0067e900_0, word_988, 0x988);  // (from the original)
GUEST_OFFSET(Object_0067e900_0, word_98c, 0x98c);  // (from the original)
GUEST_OFFSET(Object_0067e900_0, word_990, 0x990);  // (from the original)

inline guest::global<u32, 0x00ae5658> global_00ae5658;  // (from the original)
inline guest::global<u32, 0x00ae565c> global_00ae565c;  // (from the original)
inline guest::global<u32, 0x00ae5660> global_00ae5660;  // (from the original)

void f_0067e900(gptr<Object_0067e900_0> arg0) {
    arg0->half_5de = 0xf;  // (from the original)
    arg0->byte_984 = 0;
    arg0->word_988 = *global_00ae5658;
    arg0->word_98c = *global_00ae565c;
    arg0->word_990 = *global_00ae5660;
}

}  // namespace d_0067e900
GUEST_EXPORT(0x0067e900, d_0067e900::f_0067e900);

// f_0067e9e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0067e9e8 {

inline guest::global<u8, 0x009506b0> global_009506b0;  // (from the original)
inline guest::global<u32, 0x009506b4> global_009506b4;  // (from the original)
inline constexpr guest::Function<0x0014fbac, u32(u32, u32)> call_0014fbac;  // (from the original)
inline constexpr guest::Function<0x006dfde8, u32(u32, u32, u32, u32)> call_006dfde8;  // (from the original)

u32 f_0067e9e8(u32 r0, u32 r1) {
    if (*global_009506b0 != 0xffu) {  // (from the original)
        return 0u;
    }
    u32 r0_1 = *global_009506b4;
    if (r0_1 == 0) {
        return 0u;
    }
    u32 r0_2 = call_006dfde8(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_2 == 0) {
        return r0_2;
    }
    call_0014fbac(r0_2, r0);
    return 1u;
}

}  // namespace d_0067e9e8
GUEST_EXPORT_FRAMED(0x0067e9e8, d_0067e9e8::f_0067e9e8, 0x4010);  // pushes {r4, lr} first, as the original

// f_0067eb40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0067eb40 {

struct __attribute__((packed)) Object_0067eb40_0 {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
    u8 unknown_172[0x7a2];  // (not used here)
    u32 word_914;
    u8 unknown_918[0x7];  // (not used here)
    u8 byte_91f;
};
GUEST_OFFSET(Object_0067eb40_0, byte_171, 0x171);  // (from the original)
GUEST_OFFSET(Object_0067eb40_0, word_914, 0x914);  // (from the original)
GUEST_OFFSET(Object_0067eb40_0, byte_91f, 0x91f);  // (from the original)

inline guest::global<u32, 0x0067ec3c> global_0067ec3c;  // (from the original)
inline constexpr guest::Function<0x00659c08, u32(u32, u32)> call_00659c08;  // (from the original)
inline constexpr guest::Function<0x00677d1c, u32(u32, u32, u32, u32)> call_00677d1c;  // (from the original)
inline constexpr guest::Function<0x0067a478, u32(u32, u32, u32, u32)> call_0067a478;  // (from the original)

u32 f_0067eb40(gptr<Object_0067eb40_0> arg0, u32 r1, float S0, float S1) {
    u32 r0 = arg0.addr();
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r0_6 = 0;
    u32 r4 = r0;
    u32 r6_1 = r1;
    u32 r5 = r0 + 0x171u;  // (from the original)
    u32 res_1 = u32(arg0->byte_171) >> 5u & 1u;
    u32 zf_1 = res_1 == 0;
    u32 r0_1 = res_1;
    if (!zf_1) {
        r0_1 = arg0->byte_91f;
        zf_1 = r0_1 == 0;
    }
    if (!zf_1) {
        S1 = std::bit_cast<float>(*global_0067ec3c);
        S0 = std::bit_cast<float>(arg0->word_914);
        if (!u32(S0 == S1)) {
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            call_0067a478(r4 + 0x800u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            u32 r1_1 = guest::cpu()->r[1];
            u32 r0_3 = call_00659c08(r4, r1_1);
            r1 = guest::cpu()->r[1];
            S0 = guest::cpu()->s[0];
            S1 = guest::cpu()->s[1];
            if (r0_3 != 0) {
                goto L_67ec2c;
            }
        }
        if (r6_1 != 0) {
            r0 = *gptr<u8>(r4 + 0x91au);  // (from the original)
            r1 = r0 >> 1u & 1u;
            if (r1 == 0) {
                goto L_67ebd4;
            }
L_67ebb0:;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            call_0067a478(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1_2 = guest::cpu()->r[1];
            r0_4 = call_00659c08(r4, r1_2);
            r1 = guest::cpu()->r[1];
            S0 = guest::cpu()->s[0];
            S1 = guest::cpu()->s[1];
            if (r0_4 == 0) {
                goto L_67ebec;
            }
            goto L_67ec2c;
L_67ebd4:;
            r1 = r0 >> 2u & 1u;
            if (r1 != 0) {
                guest::preempt();
                goto L_67ebb0;
            }
            r0 = r0 >> 3u & 1u;
            if (r0 != 0) {
                guest::preempt();
                goto L_67ebb0;
            }
        }
L_67ebec:;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        r0_5 = call_00677d1c(r4, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        if (r0_5 == 0) {
            return 0u;
        }
        call_0067a478(r0_5, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_3 = guest::cpu()->r[1];
        r0_6 = call_00659c08(r4, r1_3);
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        if (r0_6 == 0) {
            return 0u;
        }
        *gptr<u8>(r5 + 7u) = u8(u32(*gptr<u8>(r5 + 7u)) | 8u);
L_67ec2c:;
        r0_1 = 1u;
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0_1;
}

}  // namespace d_0067eb40
GUEST_EXPORT_FRAMED(0x0067eb40, d_0067eb40::f_0067eb40, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0067ee38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0067ee38 {

inline constexpr guest::Function<0x005d41b8, u32(u32, u32, u32, u32)> call_005d41b8;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

void f_0067ee38(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x20);  // the original's stack frame
    u32 r5_1 = *frame.at<u32>(0x20);  // (from the original)
    u32 r0_1 = call_00656c20(r0, r1, r2, r3);
    call_005d41b8(r0_1 + 0xfu, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *gptr<u8>(r0_1 + 0x13u) = u8(u32(s32(r2) >> 8));  // (from the original)
    *gptr<u8>(r0_1 + 0xeu) = u8(r3);  // (from the original)
    *gptr<u8>(r0_1 + 0x14u) = u8(r5_1);  // (from the original)
    frame.release();
    call_0064d0b8(r0, 0x79u, r0_1, 0u);
    return;  // (from the original)
}

}  // namespace d_0067ee38
GUEST_EXPORT(0x0067ee38, d_0067ee38::f_0067ee38);

// f_0067ee90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0067ee90 {

struct __attribute__((packed)) Local_0067ee90_ea_1 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(Local_0067ee90_ea_1, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0067ee90_ea_1, byte_1, 0x1);  // (from the original)

inline constexpr guest::Function<0x005d41b8, u32(u32, u32, u32, u32)> call_005d41b8;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_0067ee90(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x20);  // the original's stack frame
    u32 r4_1 = *frame.at<u32>(0x20);  // (from the original)
    u32 r0_1 = call_00656c20(r0, r1, r2, r3);
    gptr<Local_0067ee90_ea_1> ea_1 = gptr<Local_0067ee90_ea_1>(r0_1 + 0xeu);  // (from the original)
    ea_1->byte_0 = u8(r1);
    ea_1->byte_1 = u8(r2);
    call_005d41b8(ea_1.addr() + 2u, r3, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u8>(r0_1 + 0x14u) = u8(u32(s32(u32(*gptr<u16>(r4_1))) >> 8));  // (from the original)
    frame.release();
    return call_0064d0b8(r0, 0x69u, r0_1, 0u);  // (from the original)
}

}  // namespace d_0067ee90
GUEST_EXPORT(0x0067ee90, d_0067ee90::f_0067ee90);

// f_0067f020: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0067f020 {

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_0067f020(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = call_00656c20(r0, r1, r2, r3);
    u32 r4_1 = r0_1 + 0xeu;  // (from the original)
    *gptr<u32>(r4_1) = *gptr<u32>(r1);
    *gptr<u32>(r4_1 + 4u) = *gptr<u32>(r1 + 4u);
    *gptr<u32>(r4_1 + 8u) = *gptr<u32>(r1 + 8u);
    *gptr<u32>(r4_1 + 0xcu) = *gptr<u32>(r1 + 0xcu);  // (from the original)
    *gptr<u32>(r4_1 + 0x10u) = *gptr<u32>(r1 + 0x10u);  // (from the original)
    *gptr<u32>(r4_1 + 0x14u) = *gptr<u32>(r1 + 0x14u);  // (from the original)
    *gptr<u32>(0x146cu + r0) = r2;  // (from the original)
    u32 r0_2 = call_0064d0b8(r0, 0x2au, r0_1, 0u);  // (from the original)
    r1 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        return r0_2;
    }
    u32 r0_3 = *gptr<u8>(r4_1);
    if (r0_3 < 3u && r0_3 != 0) {
        return 1u;
    }
    if (*gptr<u8>(r4_1 + 2u) == 7u) {
        goto L_67f0b4;
    }
    return 1u;
L_67f0b4:;
    r1 = u32(*gptr<u8>(r0 + 0x17cu)) | 0x80u;  // (from the original)
    *gptr<u8>(r0 + 0x17cu) = u8(r1);  // (from the original)
    guest::cpu()->r[1] = r1;
    return 1u;
}

}  // namespace d_0067f020
GUEST_EXPORT_FRAMED(0x0067f020, d_0067f020::f_0067f020, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0067f0c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0067f0c8 {

struct __attribute__((packed)) Local_0067f0c8_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_0067f0c8_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0067f0c8_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0067f0c8_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0067f0c8_ea_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_0067f0c8_ea_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_0067f0c8_ea_1, word_14, 0x14);  // (from the original)

struct __attribute__((packed)) Local_0067f0c8_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Local_0067f0c8_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0067f0c8_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0067f0c8_ea_2, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0067f0c8_ea_2, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_0067f0c8_ea_2, word_10, 0x10);  // (from the original)

struct __attribute__((packed)) Local_0067f0c8_r0_2 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(Local_0067f0c8_r0_2, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0067f0c8_r0_2, byte_1, 0x1);  // (from the original)

struct __attribute__((packed)) Local_0067f0c8_r0_3 {
    u16 half_0;
    u16 half_2;
    u16 half_4;
};
GUEST_OFFSET(Local_0067f0c8_r0_3, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0067f0c8_r0_3, half_2, 0x2);  // (from the original)
GUEST_OFFSET(Local_0067f0c8_r0_3, half_4, 0x4);  // (from the original)

inline guest::global<u32, 0x0067f1ac> global_0067f1ac;  // (from the original)
inline guest::global<u32, 0x00ae5658> global_00ae5658;  // (from the original)
inline guest::global<u32, 0x00ae565c> global_00ae565c;  // (from the original)
inline guest::global<u32, 0x00ae5660> global_00ae5660;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

void f_0067f0c8(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r14 = guest::cpu()->r[14];
    float S1_1 = 0;
    float S0_2 = 0;
    gptr<Local_0067f0c8_ea_1> ea_1 = gptr<Local_0067f0c8_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r3;
    ea_1->word_4 = r4;
    ea_1->word_8 = r5;
    ea_1->word_c = r6;
    ea_1->word_10 = r7;
    ea_1->word_14 = r14;
    u32 r0_1 = call_00656c20(r0, r1, r2, r3);
    gptr<Local_0067f0c8_r0_2> r0_2 = gptr<Local_0067f0c8_r0_2>(r0_1 + 0xeu);  // (from the original)
    float S0_1 = std::bit_cast<float>(*global_0067f1ac);
    r0_2->byte_1 = u8(r1);
    r0_2->byte_0 = u8(r2);
    gptr<Local_0067f0c8_r0_3> r0_3 = gptr<Local_0067f0c8_r0_3>(r0_2.addr() + 2u);
    if (r3 != 0) {
        u32 r1_1 = std::bit_cast<u32>(std::bit_cast<float>(vcvt_sz_f(std::bit_cast<float>(*gptr<u32>(r3)) * S0_1)));
        *frame.at<u16>(0) = u16(r1_1);
        r0_3->half_0 = u16(r1_1);
        u32 r3_1 = std::bit_cast<u32>(std::bit_cast<float>(vcvt_sz_f(std::bit_cast<float>(*gptr<u32>(r3 + 4u)) * S0_1)));
        *frame.at<u16>(0) = u16(r3_1);
        r0_3->half_2 = u16(r3_1);
        S1_1 = std::bit_cast<float>(*gptr<u32>(r3 + 8u));
        S0_2 = std::bit_cast<float>(vcvt_sz_f(S1_1 * S0_1));
        u32 r1_2 = std::bit_cast<u32>(S0_2);
        *frame.at<u16>(0) = u16(r1_2);
        r0_3->half_4 = u16(r1_2);
    } else {
        u32 r1_3 = std::bit_cast<u32>(std::bit_cast<float>(vcvt_sz_f(std::bit_cast<float>(*global_00ae5658) * S0_1)));
        *frame.at<u16>(0) = u16(r1_3);
        r0_3->half_0 = u16(r1_3);
        u32 r12_1 = std::bit_cast<u32>(std::bit_cast<float>(vcvt_sz_f(std::bit_cast<float>(*global_00ae565c) * S0_1)));
        *frame.at<u16>(0) = u16(r12_1);
        r0_3->half_2 = u16(r12_1);
        S1_1 = std::bit_cast<float>(*global_00ae5660);
        S0_2 = std::bit_cast<float>(vcvt_sz_f(S1_1 * S0_1));
        u32 r1_4 = std::bit_cast<u32>(S0_2);
        *frame.at<u16>(0) = u16(r1_4);
        r0_3->half_4 = u16(r1_4);
    }
    gptr<Local_0067f0c8_ea_2> ea_2 = gptr<Local_0067f0c8_ea_2>(frame.at(4).addr());
    u32 r4_1 = ea_2->word_0;
    u32 r5_1 = ea_2->word_4;
    u32 r6_1 = ea_2->word_8;
    u32 r7_1 = ea_2->word_c;
    r14 = ea_2->word_10;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    frame.release();
    call_0064d0b8(r0, 0x29u, r0_1, 0u);
    return;  // (from the original)
}

}  // namespace d_0067f0c8
GUEST_EXPORT(0x0067f0c8, d_0067f0c8::f_0067f0c8);

// f_0067f1b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0067f1b4 {

struct __attribute__((packed)) Local_0067f1b4_ea_1 {
    u8 byte_0;
    u32 word_1;
};
GUEST_OFFSET(Local_0067f1b4_ea_1, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0067f1b4_ea_1, word_1, 0x1);  // (from the original)

inline constexpr guest::Function<0x005d41b8, u32(u32, u32, u32, u32)> call_005d41b8;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_0067f1b4(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x20);  // the original's stack frame
    u32 r4_1 = *frame.at<u32>(0x20);  // (from the original)
    u32 r0_1 = call_00656c20(r0, r1, r2, r3);
    gptr<Local_0067f1b4_ea_1> ea_1 = gptr<Local_0067f1b4_ea_1>(r0_1 + 0xeu);  // (from the original)
    ea_1->byte_0 = u8(r1);
    ea_1->word_1 = r2;
    call_005d41b8(ea_1.addr() + 5u, r3, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u8>(r0_1 + 0x17u) = u8(u32(s32(r4_1) >> 8));  // (from the original)
    frame.release();
    return call_0064d0b8(r0, 0x9cu, r0_1, 0u);  // (from the original)
}

}  // namespace d_0067f1b4
GUEST_EXPORT(0x0067f1b4, d_0067f1b4::f_0067f1b4);

// f_0067f208: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0067f208 {

struct __attribute__((packed)) Local_0067f208_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_0067f208_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0067f208_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0067f208_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0067f208_ea_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_0067f208_ea_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_0067f208_ea_1, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_0067f208_ea_1, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_0067f208_ea_1, word_1c, 0x1c);  // (from the original)

struct __attribute__((packed)) Local_0067f208_ea_7 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
};
GUEST_OFFSET(Local_0067f208_ea_7, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0067f208_ea_7, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0067f208_ea_7, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0067f208_ea_7, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_0067f208_ea_7, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_0067f208_ea_7, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_0067f208_ea_7, word_18, 0x18);  // (from the original)

inline guest::global<u32, 0x0067f298> global_0067f298;  // (from the original)
inline constexpr guest::Function<0x005d41b8, u32(u32, u32, u32, u32)> call_005d41b8;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_0067f208(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    guest::StackFrame frame(0x20);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_0067f208_ea_1> ea_1 = gptr<Local_0067f208_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r3;
    ea_1->word_4 = r4;
    ea_1->word_8 = r5;
    ea_1->word_c = r6;
    ea_1->word_10 = r7;
    ea_1->word_14 = r8;
    ea_1->word_18 = r9;
    ea_1->word_1c = r14;
    u32 r0_1 = call_00656c20(r0, r1, r2, r3);
    u32 r2_1 = guest::cpu()->r[2];
    u32 r3_1 = guest::cpu()->r[3];
    u32 r5_1 = r0_1 + 0xeu;  // (from the original)
    call_005d41b8(r0_1 + 0x14u, r1, r2_1, r3_1);  // (from the original)
    float S0_2 = std::bit_cast<float>(*global_0067f298);
    u32 r0_3 = std::bit_cast<u32>(std::bit_cast<float>(vcvt_sz_f(std::bit_cast<float>(*gptr<u32>(r2)) * S0_2)));
    *frame.at<u16>(0) = u16(r0_3);
    *gptr<u16>(r5_1) = u16(r0_3);
    u32 r1_1 = std::bit_cast<u32>(std::bit_cast<float>(vcvt_sz_f(std::bit_cast<float>(*gptr<u32>(r2 + 4u)) * S0_2)));
    *frame.at<u16>(0) = u16(r1_1);
    *gptr<u16>(r5_1 + 2u) = u16(r1_1);
    float S1_2 = std::bit_cast<float>(*gptr<u32>(r2 + 8u));
    float S0_3 = std::bit_cast<float>(vcvt_sz_f(S1_2 * S0_2));
    u32 r0_4 = std::bit_cast<u32>(S0_3);
    *frame.at<u16>(0) = u16(r0_4);
    *gptr<u16>(r5_1 + 4u) = u16(r0_4);
    gptr<Local_0067f208_ea_7> ea_7 = gptr<Local_0067f208_ea_7>(frame.at(4).addr());
    u32 r4_1 = ea_7->word_0;
    u32 r5_2 = ea_7->word_4;
    u32 r6_1 = ea_7->word_8;
    u32 r7_1 = ea_7->word_c;
    u32 r8_1 = ea_7->word_10;
    u32 r9_1 = ea_7->word_14;
    r14 = ea_7->word_18;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_2;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
    frame.release();
    return call_0064d0b8(r0, 0xb1u, r0_1, 0u);  // (from the original)
}

}  // namespace d_0067f208
GUEST_EXPORT(0x0067f208, d_0067f208::f_0067f208);

// f_0067f29c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0067f29c {

inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32, u32)> call_003171b4;  // (from the original)
inline constexpr guest::Function<0x0059b61c, u32(u32, u32, u32, u32)> call_0059b61c;  // (from the original)
inline constexpr guest::Function<0x005c132c, u32(u32, u32, u32, u32)> call_005c132c;  // (from the original)
inline constexpr guest::Function<0x005ce300, u32(u32, u32, u32, u32)> call_005ce300;  // (from the original)
inline constexpr guest::Function<0x005d41b8, u32(u32, u32, u32, u32)> call_005d41b8;  // (from the original)
inline constexpr guest::Function<0x006140b4, u32(u32, u32, u32, u32)> call_006140b4;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00650140, u32(u32, u32, u32, u32)> call_00650140;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)
inline constexpr guest::Function<0x0067f29c, u32(u32, u32, u32, u32)> call_0067f29c;  // (from the original)
inline constexpr guest::Function<0x006a5f0c, u32(u32, u32, u32, u32)> call_006a5f0c;  // (from the original)
inline constexpr guest::Function<0x006c6640, u32(u32, u32, u32, u32)> call_006c6640;  // (from the original)

u32 f_0067f29c(u32 r0, u32 r1, u32 r2_unused, u32 r3, float S0) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r4 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r2_4 = 0;
    u32 r3_1 = 0;
    u32 r0_10 = 0;
    u32 r1_4 = 0;
    u32 r2_5 = 0;
    u32 r3_2 = 0;
    float S0_2 = 0;
    u32 r6_1 = 0;
    u32 r0_11 = 0;
    u32 r2_6 = 0;
    u32 r3_3 = 0;
    u32 r0_12 = 0;
    u32 r5 = r0;
    u32 r10 = r1;
    call_003171b4(frame.at(0).addr(), frame.at(4).addr(), r0 + 0x14u, r3);  // (from the original)
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    u32 r9 = ~0u;
L_67f2c0:;
    u32 r6 = ~0u;
    do {
        u32 r7 = *frame.at<u32>(0) + r6;
        u32 r8 = *frame.at<u32>(4) + r9;
        guest::cpu()->s[0] = S0;
        u32 r0_2 = call_005ce300(r7, r8, 0u, r3);
        r1 = guest::cpu()->r[1];
        u32 r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        if (r0_2 == 0) {
            goto L_67f3f8;
        }
        r0_3 = call_00650140(r7, r8, 0u, r3);
        r1_2 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        if (r0_3 != 0) {
            u32 r0_4 = call_0059b61c(r0_3, r1_2, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            S0 = guest::cpu()->s[0];
            if (r0_4 != 0 && *gptr<u8>(r0_4 + 2u) != 0) {
                goto L_67f3f8;
            }
        }
        if (r10 == 0) {
            goto L_67f384;
        } else {
            r4 = 0u;
        }
        do {
            if (*gptr<u8>(r5 + 0x1acu) != r4) {  // (from the original)
                guest::cpu()->s[0] = S0;
                u32 r0_6 = call_005c132c(r4 & 0xffu, 0u, r2, r3);  // (from the original)
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                S0 = guest::cpu()->s[0];
                if (r0_6 != 0) {
                    call_003171b4(frame.at(8).addr(), frame.at(0xc).addr(), r0_6 + 0x14u, r3);  // (from the original)
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    S0 = guest::cpu()->s[0];
                    if (*frame.at<u32>(8) == r7 && *frame.at<u32>(0xc) == r8) {  // (from the original)
                        goto L_67f3f8;
                    }
                }
            }
            r4 += 1u;
            guest::preempt();
        } while (r4 < 4u);
L_67f384:;
        r2_3 = r5 + 0x14u;  // (from the original)
        guest::cpu()->s[0] = S0;
        r0_8 = call_006140b4(r7, r8, r2_3, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        if (r0_8 == 0) {
            goto L_67f3f8;
        }
        r0_9 = frame.at(8).addr();
        call_006a5f0c(r0_9, r7, r8, r3);
        r2_4 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
        r0_10 = frame.at(8).addr();
        call_006c6640(r0_10, 0u, r2_4, r3_1);
        r1_4 = guest::cpu()->r[1];
        r2_5 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        S0_2 = guest::cpu()->s[0];
        *frame.at<u32>(0xc) = std::bit_cast<u32>(S0_2);  // (from the original)
        r6_1 = frame.at(8).addr();
        guest::cpu()->s[0] = S0_2;
        r0_11 = call_00656c20(r5, r1_4, r2_5, r3_2);
        r2_6 = guest::cpu()->r[2];
        r3_3 = guest::cpu()->r[3];
        r0_12 = r0_11 + 0xeu;  // (from the original)
        call_005d41b8(r0_12, r6_1, r2_6, r3_3);
        r0 = call_0064d0b8(r5, 0xe5u, r0_11, 0u);  // (from the original)
        r1 = guest::cpu()->r[1];
        return r0;
L_67f3f8:;
        r6 += 1u;
        if (s32(r6) > 1) {
            r9 += 1u;
            if (s32(r9) <= 1) {
                guest::preempt();
                goto L_67f2c0;
            }
            if (r10 == 0) {
                guest::cpu()->r[1] = r1;
                return 0u;
            }
            guest::cpu()->s[0] = S0;
            u32 r0_13 = call_0067f29c(r5, 0u, r2, r3);
            return r0_13;
        }
        guest::preempt();
    } while (1);
}

}  // namespace d_0067f29c
GUEST_EXPORT_FRAMED(0x0067f29c, d_0067f29c::f_0067f29c, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original
