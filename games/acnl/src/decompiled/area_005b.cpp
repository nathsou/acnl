// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "graphics/hemisphere_light.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_005b0120: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b0120 {

struct __attribute__((packed)) Object_005b0120_0 {
    u8 unknown_0[0x28];  // (not used here)
    u32 word_28;
};
GUEST_OFFSET(Object_005b0120_0, word_28, 0x28);


void f_005b0120(gptr<Object_005b0120_0> arg0, u32 r1) {
    u32 r2_1 = arg0->word_28;
    u32 r1_1 = arg0.addr() + (r1 << 2);
    arg0->word_28 = r2_1 & ~0x1e00u | 0x1e00u & ((r2_1 & 0x1e00u) >> 9 & ~lsl_r(1u, r1 & 0xff)) << 9;  // (from the original)
    *gptr<u32>(r1_1 + 0x30u) = 0;  // (from the original)
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_005b0120
GUEST_EXPORT_FRAMED(0x005b0120, d_005b0120::f_005b0120, 0x10);  // pushes {r4} first, as the original

// f_005b0164: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b0164 {

struct __attribute__((packed)) Object_005b0164_1 {
    u8 unknown_0[0x2];  // (not used here)
    u16 half_2;
};
GUEST_OFFSET(Object_005b0164_1, half_2, 0x2);

inline constexpr u32 global_00981694_address = 0x00981694u;
inline guest::global<u32, 0x00981694> global_00981694;
inline constexpr guest::Function<0x00100ef9, u32(u32, u32, u32, u32)> sprintf;
inline constexpr guest::Function<0x005b01c0, u32(u32, u32, u32)> call_005b01c0;

void f_005b0164(u32 r0, gptr<Object_005b0164_1> arg1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    sprintf(frame.at(0).addr(), 0x5b01a8u, *global_00981694, u32(arg1->half_2) + 1u);  // (from the original)
    call_005b01c0(r0 + 4u, 8u, frame.at(0).addr());
}

}  // namespace d_005b0164
GUEST_EXPORT_FRAMED(0x005b0164, d_005b0164::f_005b0164, 0x4010);  // pushes {r4, lr} first, as the original

// f_005b01c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b01c0 {

inline constexpr guest::Function<0x002fa9d0, u32(u32, u32, u32, u32)> string_length;

u32 f_005b01c0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 nf_1 = 0;
    u32 zf_1 = 0;
    u32 vf_1 = 0;
    u32 r5 = r0;
    u32 r6 = r1;
    u32 r4 = r2;
    string_length(r2, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (s32(r6) <= 0) {
        r0 = 0u;
    } else {
        r0 = r6 & 1u;
        r1 = 0u;
        if (s32(r0) > 0) {
            do {
                u32 r2_1 = *gptr<s8>(r4 + r1);
                if (r2_1 - 0x61u <= 0x19u) {  // (from the original)
                    r2_1 -= 0x20u;  // (from the original)
                }
                u32 r2_2 = sxtb(r2_1);
                *gptr<u8>(r5 + r1) = u8(r2_2);
                if (r2_2 == 0) {
                    guest::cpu()->r[1] = r1;
                    return r0;
                }
                r1 += 1u;
                guest::preempt();
            } while (s32(r0) > s32(r1));
        }
    }
    if (s32(r0) < s32(r6)) {
        do {
            u32 r1_1 = *gptr<s8>(r4 + r0);
            if (r1_1 - 0x61u <= 0x19u) {  // (from the original)
                r1_1 -= 0x20u;  // (from the original)
            }
            r1 = sxtb(r1_1);
            *gptr<u8>(r5 + r0) = u8(r1);
            if (r1 == 0) {
                break;
            }
            u32 r1_2 = *gptr<s8>(r4 + r0 + 1u);
            if (r1_2 - 0x61u <= 0x19u) {  // (from the original)
                r1_2 -= 0x20u;  // (from the original)
            }
            u32 r2_3 = r5 + r0;
            r1 = sxtb(r1_2);
            nf_1 = r1 >> 0x1f;  // (from the original)
            zf_1 = r1 == 0;
            vf_1 = (r1 & (r1 ^ r1)) >> 0x1f;  // (from the original)
            if (!zf_1) {
                r0 += 2u;
                u32 res_1 = r6 - r0;
                nf_1 = res_1 >> 0x1f;  // (from the original)
                zf_1 = res_1 == 0;
                vf_1 = ((r6 ^ r0) & (r6 ^ res_1)) >> 0x1f;  // (from the original)
            }
            *gptr<u8>(r2_3 + 1u) = u8(r1);
            guest::preempt();
        } while (!zf_1 && nf_1 == vf_1);
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005b01c0
GUEST_EXPORT_FRAMED(0x005b01c0, d_005b01c0::f_005b01c0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005b027c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b027c {

inline constexpr guest::Function<0x005b028c, u32(u32, u32, u32, u32)> call_005b028c;

void f_005b027c(u32 r0, u32 r1) {
    call_005b028c(r0 + 4u, 8u, r1, guest::cpu()->r[3]);
}

}  // namespace d_005b027c
GUEST_EXPORT(0x005b027c, d_005b027c::f_005b027c);

// f_005b034c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b034c {

inline constexpr u32 global_00981698_address = 0x00981698u;
inline constexpr guest::Function<0x0010184d, u32(u32, u32, u32, u32)> compare_wide_strings;

u32 f_005b034c(u32 r0) {
    u32 r6 = r0;
    u32 r4 = 0u;
    u32 r7 = global_00981698_address;
    do {
        u32 r5_1 = r4 & 0xffu;  // (from the original)
        u32 r1_1 = gptr<u32>(r7)[r5_1];
        if (*gptr<u16>(r1_1) == 0x2eu) {  // (from the original)
            r1_1 += 2u;
        }
        u32 r0_1 = compare_wide_strings(r6, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        if (r0_1 == 0) {
            return r5_1;
        }
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 4);
    return 0u;
}

}  // namespace d_005b034c
GUEST_EXPORT_FRAMED(0x005b034c, d_005b034c::f_005b034c, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_005b03fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b03fc {

struct __attribute__((packed)) Object_005b03fc_0 {
    u8 unknown_0[0xc];  // (not used here)
    u8 byte_c;
    u8 byte_d;
    u8 byte_e;
};
GUEST_OFFSET(Object_005b03fc_0, byte_c, 0xc);
GUEST_OFFSET(Object_005b03fc_0, byte_d, 0xd);
GUEST_OFFSET(Object_005b03fc_0, byte_e, 0xe);

inline constexpr guest::Function<0x00100ef9, u32(u32, u32, u32, u32)> sprintf;

struct __attribute__((packed)) Frame_005b03fc {
    u8 unknown_0[0x1];  // (not read or written by name)
    u8 byte_1;
    u8 byte_2;
    u8 unknown_3[0x1];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005b03fc, byte_1, 0x1);
GUEST_OFFSET(Frame_005b03fc, byte_2, 0x2);
GUEST_SIZE(Frame_005b03fc, 0x4);

u32 f_005b03fc(gptr<Object_005b03fc_0> arg0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_005b03fc> frame;  // the original's stack frame
    *frame.at<u32>(0) = r3;
    sprintf(frame.at(0).addr(), 0x5b0430u, r1, r3);  // (from the original)
    arg0->byte_c = *frame.at<u8>(0);
    arg0->byte_d = frame->byte_1;
    u32 r0_2 = frame->byte_2;
    arg0->byte_e = u8(r0_2);
    return r0_2;
}

}  // namespace d_005b03fc
GUEST_EXPORT_FRAMED(0x005b03fc, d_005b03fc::f_005b03fc, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_005b0438: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b0438 {

struct __attribute__((packed)) Object_005b0438_0 {
    u8 unknown_0[0x2c];  // (not used here)
    u32 word_2c;
};
GUEST_OFFSET(Object_005b0438_0, word_2c, 0x2c);


void f_005b0438(gptr<Object_005b0438_0> arg0, u32 r1) {
    u32 r1_1 = r1 & 0x1fu | arg0->word_2c & ~0x1fu;  // (from the original)
    arg0->word_2c = r1_1;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_005b0438
GUEST_EXPORT(0x005b0438, d_005b0438::f_005b0438);

// f_005b0468: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b0468 {

inline constexpr guest::Function<0x005b028c, u32(u32, u32, u32, u32)> call_005b028c;

void f_005b0468(u32 r0, u32 r1) {
    call_005b028c(r0 + 0xcu, 8u, r1, guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_005b0468
GUEST_EXPORT(0x005b0468, d_005b0468::f_005b0468);

// f_005b0478: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b0478 {

struct __attribute__((packed)) Object_005b0478_1 {
    u16 half_0;
};
GUEST_OFFSET(Object_005b0478_1, half_0, 0x0);

inline constexpr u32 global_00981684_address = 0x00981684u;
inline constexpr u32 global_0098168c_address = 0x0098168cu;
inline constexpr guest::Function<0x00100ef9, u32(u32, u32, u32, u32)> sprintf;
inline constexpr guest::Function<0x005b01c0, u32(u32, u32, u32)> call_005b01c0;

u32 f_005b0478(u32 r0, gptr<Object_005b0478_1> arg1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r3_1 = *gptr<u32>(r2 == 0 ? global_00981684_address : global_0098168c_address);
    sprintf(frame.at(0).addr(), 0x5b04c8u, u32(arg1->half_0) + 0x64u, r3_1);  // (from the original)
    u32 r0_3 = call_005b01c0(r0 + 0xcu, 8u, frame.at(0).addr());  // (from the original)
    return r0_3;
}

}  // namespace d_005b0478
GUEST_EXPORT_FRAMED(0x005b0478, d_005b0478::f_005b0478, 0x4010);  // pushes {r4, lr} first, as the original

// f_005b04d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b04d0 {

struct __attribute__((packed)) Object_005b04d0_0 {
    u8 unknown_0[0x28];  // (not used here)
    u32 word_28;
};
GUEST_OFFSET(Object_005b04d0_0, word_28, 0x28);


void f_005b04d0(gptr<Object_005b04d0_0> arg0, u32 r1) {
    u32 r1_1 = arg0->word_28 & ~0x100u & ~0xfeu | r1 << 1;  // (from the original)
    arg0->word_28 = r1_1;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_005b04d0
GUEST_EXPORT(0x005b04d0, d_005b04d0::f_005b04d0);

// f_005b04e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b04e8 {

struct __attribute__((packed)) Object_005b04e8_0 {
    u8 unknown_0[0x2c];  // (not used here)
    u32 word_2c;
};
GUEST_OFFSET(Object_005b04e8_0, word_2c, 0x2c);


void f_005b04e8(gptr<Object_005b04e8_0> arg0, u32 r1) {
    arg0->word_2c = 0x1e00000u & r1 << 0x15 | arg0->word_2c & ~0x1e00000u;  // (from the original)
}

}  // namespace d_005b04e8
GUEST_EXPORT(0x005b04e8, d_005b04e8::f_005b04e8);

// f_005b0504: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b0504 {

struct __attribute__((packed)) Object_005b0504_0 {
    u8 unknown_0[0x2c];  // (not used here)
    u32 word_2c;
};
GUEST_OFFSET(Object_005b0504_0, word_2c, 0x2c);


void f_005b0504(gptr<Object_005b0504_0> arg0, u32 r1) {
    u32 r1_1 = arg0->word_2c & ~0x1fffe0u | r1 << 5;  // (from the original)
    arg0->word_2c = r1_1;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_005b0504
GUEST_EXPORT(0x005b0504, d_005b0504::f_005b0504);

// f_005b0588: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b0588 {

inline constexpr u32 global_00981698_address = 0x00981698u;
inline constexpr guest::Function<0x005b028c, u32(u32, u32, u32, u32)> call_005b028c;

u32 f_005b0588(u32 r0_unused, u32 r1) {
    u32 r2_1 = gptr<u32>(global_00981698_address)[r1];
    if (*gptr<u16>(r2_1) == 0x2eu) {  // (from the original)
        r2_1 += 2u;
    }
    return call_005b028c(guest::cpu()->r[0], 4u, r2_1, guest::cpu()->r[3]);
}

}  // namespace d_005b0588
GUEST_EXPORT(0x005b0588, d_005b0588::f_005b0588);

// f_005b05a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b05a8 {

inline constexpr guest::Function<0x005b01c0, u32(u32, u32, u32, u32)> call_005b01c0;

void f_005b05a8(u32 r0_unused, u32 r1) {
    call_005b01c0(guest::cpu()->r[0], 4u, r1, guest::cpu()->r[3]);
}

}  // namespace d_005b05a8
GUEST_EXPORT(0x005b05a8, d_005b05a8::f_005b05a8);

// f_005b05b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b05b4 {

inline constexpr guest::Function<0x005b028c, u32(u32, u32, u32, u32)> call_005b028c;

void f_005b05b4(u32 r0_unused, u32 r1) {
    call_005b028c(guest::cpu()->r[0], 4u, r1, guest::cpu()->r[3]);
}

}  // namespace d_005b05b4
GUEST_EXPORT(0x005b05b4, d_005b05b4::f_005b05b4);

// f_005b05c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b05c0 {

struct __attribute__((packed)) Object_005b05c0_0 {
    u8 unknown_0[0x28];  // (not used here)
    u32 word_28;
};
GUEST_OFFSET(Object_005b05c0_0, word_28, 0x28);


void f_005b05c0(gptr<Object_005b05c0_0> arg0, u32 r1, u32 r2) {
    u32 r3_1 = arg0->word_28;
    arg0->word_28 = r3_1 & ~0x1e00u | 0x1e00u & (((r3_1 & 0x1e00u) >> 9 | lsl_r(1u, r1 & 0xff)) & 0xffu) << 9;  // (from the original)
    *gptr<u32>(arg0.addr() + (r1 << 2) + 0x30u) = r2;  // (from the original)
}

}  // namespace d_005b05c0
GUEST_EXPORT_FRAMED(0x005b05c0, d_005b05c0::f_005b05c0, 0x10);  // pushes {r4} first, as the original

// f_005b0628: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b0628 {


u32 f_005b0628(u32 r0) {
    guest::cpu()->r[1] = 0x270eu;  // (from the original)
    return s32(r0) <= s32(0x270eu);  // (from the original)
}

}  // namespace d_005b0628
GUEST_EXPORT(0x005b0628, d_005b0628::f_005b0628);

// f_005b0654: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b0654 {


u32 f_005b0654(u32 r0) {
    return s32(r0) < 0x384;  // (from the original)
}

}  // namespace d_005b0654
GUEST_EXPORT(0x005b0654, d_005b0654::f_005b0654);

// f_005b0664: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b0664 {

struct __attribute__((packed)) Object_005b0664_0 {
    u16 half_0;
    u16 half_2;
};
GUEST_OFFSET(Object_005b0664_0, half_0, 0x0);
GUEST_OFFSET(Object_005b0664_0, half_2, 0x2);


void f_005b0664(gptr<Object_005b0664_0> arg0) {
    u32 r1_1 = uxth(u32(arg0->half_2) + 1u);
    arg0->half_2 = u16(r1_1);
    if (r1_1 <= 0x63u) {  // (from the original)
        return;
    }
    u32 r2_1 = arg0->half_0;
    arg0->half_2 = 0;
    u32 r2_2 = uxth(r2_1 + 1u);
    arg0->half_0 = u16(r2_2);
    if (r2_2 >= 0x384u) {  // (from the original)
        arg0->half_0 = 0;
    }
}

}  // namespace d_005b0664
GUEST_EXPORT(0x005b0664, d_005b0664::f_005b0664);

// f_005b06a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b06a0 {

struct __attribute__((packed)) Object_005b06a0_0 {
    u16 half_0;
    u16 half_2;
};
GUEST_OFFSET(Object_005b06a0_0, half_0, 0x0);
GUEST_OFFSET(Object_005b06a0_0, half_2, 0x2);


void f_005b06a0(gptr<Object_005b06a0_0> arg0) {
    u32 r2_1 = arg0->half_0;
    arg0->half_2 = 0;
    u32 r2_2 = uxth(r2_1 + 1u);
    arg0->half_0 = u16(r2_2);
    if (r2_2 >= 0x384u) {  // (from the original)
        arg0->half_0 = 0;
    }
}

}  // namespace d_005b06a0
GUEST_EXPORT(0x005b06a0, d_005b06a0::f_005b06a0);

// f_005b0a14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b0a14 {

struct __attribute__((packed)) Object_005b0a14_0 {
    u8 unknown_0[0x1c];  // (not used here)
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u8 byte_28;
};
GUEST_OFFSET(Object_005b0a14_0, word_1c, 0x1c);
GUEST_OFFSET(Object_005b0a14_0, word_20, 0x20);
GUEST_OFFSET(Object_005b0a14_0, word_24, 0x24);
GUEST_OFFSET(Object_005b0a14_0, byte_28, 0x28);


void f_005b0a14(gptr<Object_005b0a14_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r12_1 = *gptr<u32>(r13);
    arg0->word_1c = r1;
    arg0->word_20 = r2;
    arg0->word_24 = r3;
    arg0->byte_28 = u8(r12_1);
}

}  // namespace d_005b0a14
GUEST_EXPORT(0x005b0a14, d_005b0a14::f_005b0a14);

// f_005b0c94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b0c94 {

struct __attribute__((packed)) Object_005b0c94_0 {
    u8 unknown_0[0x1c];  // (not used here)
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(Object_005b0c94_0, word_1c, 0x1c);
GUEST_OFFSET(Object_005b0c94_0, word_20, 0x20);

struct __attribute__((packed)) Local_005b0c94_r3_5 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005b0c94_r3_5, word_0, 0x0);
GUEST_OFFSET(Local_005b0c94_r3_5, word_4, 0x4);

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> copy_bytes_at_any_alignment;
inline constexpr guest::Function<0x0046f8e8, u32(u32, u32, u32)> call_0046f8e8;
inline constexpr guest::Function<0x0046f9f8, u32(u32, u32, u32, u32)> call_0046f9f8;
inline constexpr guest::Function<0x0046fe08, u32(u32, u32, u32, u32)> call_0046fe08;

struct __attribute__((packed)) Frame_005b0c94 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
    u32 word_c;
    u8 unknown_10[0x22];  // (not read or written by name)
    u8 byte_32;
    u8 unknown_33[0x5];  // (not read or written by name)
    u32 word_38;
    u8 unknown_3c[0x14];  // (not read or written by name)
    u32 word_50;
    u32 word_54;
    u8 unknown_58[0x10];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005b0c94, word_0, 0x0);
GUEST_OFFSET(Frame_005b0c94, word_4, 0x4);
GUEST_OFFSET(Frame_005b0c94, word_c, 0xc);
GUEST_OFFSET(Frame_005b0c94, byte_32, 0x32);
GUEST_OFFSET(Frame_005b0c94, word_38, 0x38);
GUEST_OFFSET(Frame_005b0c94, word_50, 0x50);
GUEST_OFFSET(Frame_005b0c94, word_54, 0x54);
GUEST_SIZE(Frame_005b0c94, 0x68);

u32 f_005b0c94(gptr<Object_005b0c94_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005b0c94> frame;  // the original's stack frame
    u32 r0_4 = 0;
    u32 r5_1 = *frame.at<u32>(0x80);  // (from the original)
    u32 r0_2 = call_0046f9f8(arg0.addr() + 8u, frame.at(0x10).addr(), arg0->word_1c, arg0->word_20);  // (from the original)
    u32 r1_2 = guest::cpu()->r[1];
    if (r0_2 != 0 && frame->byte_32 != 0 && frame->word_38 >= 2u) {
        r0_4 = call_0046f8e8(frame.at(0x4c).addr(), frame.at(0x10).addr(), r1);  // (from the original)
        r1_2 = guest::cpu()->r[1];
        if (r0_4 == 0) {
            return r0_4;
        }
        u32 r0_5 = frame->word_54;
        u32 r3_3 = frame->word_50;
        u32 r2_2 = arg0->word_1c;
        r1_2 = frame.at(0).addr();
        if ((r0_5 + r3_3) <= arg0->word_20) {
            u32 r0_6 = call_0046fe08(arg0.addr() + 8u, r1_2, r2_2 + r0_5, r3_3);
            r1_2 = guest::cpu()->r[1];
            if (r0_6 != 0) {
                r1_2 = frame->word_c;
                u32 r0_7 = frame->word_4 + r1_2;
                *gptr<u32>(r5_1) = r0_7;
                if (r0_7 <= r3) {
                    copy_bytes_at_any_alignment(r2, frame->word_0, frame->word_4, guest::cpu()->r[3]);
                    gptr<Local_005b0c94_r3_5> r3_5 = gptr<Local_005b0c94_r3_5>(frame.at(8).addr());
                    copy_bytes_at_any_alignment(frame->word_4 + r2, r3_5->word_0, r3_5->word_4, r3_5.addr());
                    return 1u;
                }
            }
        }
    }
    guest::cpu()->r[1] = r1_2;
    return 0u;
}

}  // namespace d_005b0c94
GUEST_EXPORT_FRAMED(0x005b0c94, d_005b0c94::f_005b0c94, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_005b0d7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b0d7c {

struct __attribute__((packed)) Object_005b0d7c_0 {
    u8 unknown_0[0x1c];  // (not used here)
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(Object_005b0d7c_0, word_1c, 0x1c);
GUEST_OFFSET(Object_005b0d7c_0, word_20, 0x20);

inline constexpr guest::Function<0x0046f9f8, u32(u32, u32, u32, u32)> call_0046f9f8;
inline constexpr guest::Function<0x005b0c94, u32(u32, u32, u32, u32)> call_005b0c94;

struct __attribute__((packed)) Frame_005b0d7c {
    u32 word_0;
    u8 unknown_4[0x26];  // (not read or written by name)
    u8 byte_2a;
    u8 unknown_2b[0x5];  // (not read or written by name)
    u32 word_30;
    u8 unknown_34[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005b0d7c, word_0, 0x0);
GUEST_OFFSET(Frame_005b0d7c, byte_2a, 0x2a);
GUEST_OFFSET(Frame_005b0d7c, word_30, 0x30);
GUEST_SIZE(Frame_005b0d7c, 0x3c);

u32 f_005b0d7c(gptr<Object_005b0d7c_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005b0d7c> frame;  // the original's stack frame
    u32 r0_2 = call_0046f9f8(arg0.addr() + 8u, frame.at(8).addr(), arg0->word_1c, arg0->word_20);
    if (r0_2 != 0 && frame->byte_2a != 0 && frame->word_30 >= 2u) {
        frame->word_0 = r3;
        u32 r0_3 = call_005b0c94(arg0.addr(), 0u, r1, r2);
        return r0_3;
    }
    return 0u;
}

}  // namespace d_005b0d7c
GUEST_EXPORT_FRAMED(0x005b0d7c, d_005b0d7c::f_005b0d7c, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_005b0dec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b0dec {

struct __attribute__((packed)) Object_005b0dec_0 {
    u8 unknown_0[0x1c];  // (not used here)
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(Object_005b0dec_0, word_1c, 0x1c);
GUEST_OFFSET(Object_005b0dec_0, word_20, 0x20);

inline constexpr guest::Function<0x0046f8e8, u32(u32, u32, u32)> call_0046f8e8;
inline constexpr guest::Function<0x0046f9f8, u32(u32, u32, u32, u32)> call_0046f9f8;
inline constexpr guest::Function<0x0046fe08, u32(u32, u32, u32, u32)> call_0046fe08;

struct __attribute__((packed)) Frame_005b0dec {
    u8 unknown_0[0x22];  // (not read or written by name)
    u8 byte_22;
    u8 unknown_23[0x5];  // (not read or written by name)
    u32 word_28;
    u8 unknown_2c[0x8];  // (not read or written by name)
    u32 word_34;
    u8 unknown_38[0x4];  // (not read or written by name)
    u32 word_3c;
    u8 unknown_40[0x4];  // (not read or written by name)
    u32 word_44;
    u8 unknown_48[0x4];  // (not read or written by name)
    u32 word_4c;
    u8 unknown_50[0x4];  // (not read or written by name)
    u32 word_54;
    u32 word_58;
    u8 unknown_5c[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005b0dec, byte_22, 0x22);
GUEST_OFFSET(Frame_005b0dec, word_28, 0x28);
GUEST_OFFSET(Frame_005b0dec, word_34, 0x34);
GUEST_OFFSET(Frame_005b0dec, word_3c, 0x3c);
GUEST_OFFSET(Frame_005b0dec, word_44, 0x44);
GUEST_OFFSET(Frame_005b0dec, word_4c, 0x4c);
GUEST_OFFSET(Frame_005b0dec, word_54, 0x54);
GUEST_OFFSET(Frame_005b0dec, word_58, 0x58);
GUEST_SIZE(Frame_005b0dec, 0x64);

u32 f_005b0dec(gptr<Object_005b0dec_0> arg0) {
    guest::StackFrameOf<Frame_005b0dec> frame;  // the original's stack frame
    u32 r0_2 = call_0046f9f8(arg0.addr() + 8u, frame.at(0).addr(), arg0->word_1c, arg0->word_20);
    u32 r1_2 = guest::cpu()->r[1];
    if (r0_2 != 0 && frame->byte_22 != 0 && frame->word_28 >= 2u) {
        u32 r0_4 = call_0046f8e8(frame.at(0x50).addr(), frame.at(0).addr(), 0u);  // (from the original)
        u32 r1_4 = guest::cpu()->r[1];
        if (r0_4 != 0) {
            u32 r0_5 = frame->word_58;
            u32 r3_3 = frame->word_54;
            u32 r2_2 = arg0->word_1c;
            r1_2 = frame.at(0x30).addr();  // (from the original)
            if ((r0_5 + r3_3) > arg0->word_20) {
                guest::cpu()->r[1] = r1_2;
                return 0u;
            }
            u32 r0_6 = call_0046fe08(arg0.addr() + 8u, r1_2, r2_2 + r0_5, r3_3);
            r1_2 = guest::cpu()->r[1];
            if (r0_6 == 0) {
                return 0u;
            }
            r0_4 = call_0046f8e8(frame.at(0x50).addr(), frame.at(0).addr(), 1u);  // (from the original)
            r1_4 = guest::cpu()->r[1];
            if (r0_4 != 0) {
                u32 r0_8 = frame->word_58;
                u32 r3_5 = frame->word_54;
                u32 r2_4 = arg0->word_1c;
                r1_2 = frame.at(0x40).addr();  // (from the original)
                if ((r0_8 + r3_5) > arg0->word_20) {
                    guest::cpu()->r[1] = r1_2;
                    return 0u;
                }
                u32 r0_9 = call_0046fe08(arg0.addr() + 8u, r1_2, r2_4 + r0_8, r3_5);
                r1_2 = guest::cpu()->r[1];
                if (r0_9 == 0) {
                    return 0u;
                }
                r0_4 = frame->word_34 + frame->word_3c;
                r1_4 = frame->word_44 + frame->word_4c;
                if (r0_4 <= r1_4) {
                    r0_4 = r1_4;
                }
            }
        }
        guest::cpu()->r[1] = r1_4;
        return r0_4;
    }
    guest::cpu()->r[1] = r1_2;
    return 0u;
}

}  // namespace d_005b0dec
GUEST_EXPORT_FRAMED(0x005b0dec, d_005b0dec::f_005b0dec, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_005b1684: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b1684 {

struct __attribute__((packed)) Object_005b1684_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_005b1684_1, word_4, 0x4);

inline constexpr u32 vtable_libms__FlowNodeJump = 0x00907fe4u;
inline constexpr u32 vtable_libms__FlowNode = 0x00908034u;

void libms__FlowNode__FlowNode_005b1684(gptr<libms__FlowNodeJump> arg0, gptr<Object_005b1684_1> arg1) {
    arg0->word_0 = vtable_libms__FlowNode;
    arg0->word_4 = arg1->word_4;
    arg0->word_0 = vtable_libms__FlowNodeJump;
    guest::cpu()->r[1] = vtable_libms__FlowNodeJump;
}

}  // namespace d_005b1684
GUEST_EXPORT(0x005b1684, d_005b1684::libms__FlowNode__FlowNode_005b1684);

// f_005b16b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b16b0 {

struct __attribute__((packed)) Object_005b16b0_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_005b16b0_1, word_4, 0x4);

inline constexpr u32 vtable_libms__FlowNodeEntry = 0x00907ff4u;
inline constexpr u32 vtable_libms__FlowNode = 0x00908034u;

void libms__FlowNode__FlowNode_005b16b0(gptr<libms__FlowNodeEntry> arg0, gptr<Object_005b16b0_1> arg1) {
    arg0->word_0 = vtable_libms__FlowNode;
    arg0->word_4 = arg1->word_4;
    arg0->word_0 = vtable_libms__FlowNodeEntry;
    guest::cpu()->r[1] = vtable_libms__FlowNodeEntry;
}

}  // namespace d_005b16b0
GUEST_EXPORT(0x005b16b0, d_005b16b0::libms__FlowNode__FlowNode_005b16b0);

// f_005b16dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b16dc {

struct __attribute__((packed)) Object_005b16dc_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_005b16dc_1, word_4, 0x4);

inline constexpr u32 vtable_libms__FlowNodeEvent = 0x00908004u;
inline constexpr u32 vtable_libms__FlowNode = 0x00908034u;

void libms__FlowNode__FlowNode_005b16dc(gptr<libms__FlowNodeEvent> arg0, gptr<Object_005b16dc_1> arg1) {
    arg0->word_0 = vtable_libms__FlowNode;
    arg0->word_4 = arg1->word_4;
    arg0->word_0 = vtable_libms__FlowNodeEvent;
    guest::cpu()->r[1] = vtable_libms__FlowNodeEvent;
}

}  // namespace d_005b16dc
GUEST_EXPORT(0x005b16dc, d_005b16dc::libms__FlowNode__FlowNode_005b16dc);

// f_005b1928: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b1928 {

struct __attribute__((packed)) Object_005b1928_0 {
    u8 unknown_0[0x5c];  // (not used here)
    u8 byte_5c;
    u8 byte_5d;
    u8 byte_5e;
};
GUEST_OFFSET(Object_005b1928_0, byte_5c, 0x5c);
GUEST_OFFSET(Object_005b1928_0, byte_5d, 0x5d);
GUEST_OFFSET(Object_005b1928_0, byte_5e, 0x5e);


void f_005b1928(gptr<Object_005b1928_0> arg0, u32 r1) {
    if (r1 == 0) {
        arg0->byte_5c = 1;
        arg0->byte_5d = 0;
        arg0->byte_5e = 1;
        return;
    }
    if (r1 == 1u) {
        arg0->byte_5c = 1;
        arg0->byte_5d = 1;
        arg0->byte_5e = 1;
        return;
    }
    if (r1 == 2u) {
        arg0->byte_5c = 0;
    }
}

}  // namespace d_005b1928
GUEST_EXPORT(0x005b1928, d_005b1928::f_005b1928);

// f_005b1968: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b1968 {

struct __attribute__((packed)) Object_005b1968_0 {
    u8 unknown_0[0x82];  // (not used here)
    u8 byte_82;
    u8 byte_83;
    u8 byte_84;
};
GUEST_OFFSET(Object_005b1968_0, byte_82, 0x82);
GUEST_OFFSET(Object_005b1968_0, byte_83, 0x83);
GUEST_OFFSET(Object_005b1968_0, byte_84, 0x84);


void f_005b1968(gptr<Object_005b1968_0> arg0, u32 r1, u32 r2, u32 r3) {
    arg0->byte_82 = u8(r1);
    arg0->byte_83 = u8(r2);
    arg0->byte_84 = u8(r3);
}

}  // namespace d_005b1968
GUEST_EXPORT(0x005b1968, d_005b1968::f_005b1968);

// f_005b19e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b19e8 {

struct __attribute__((packed)) Object_005b19e8_0 {
    u32 word_0;
    u8 byte_4;
};
GUEST_OFFSET(Object_005b19e8_0, word_0, 0x0);
GUEST_OFFSET(Object_005b19e8_0, byte_4, 0x4);


void f_005b19e8(gptr<Object_005b19e8_0> arg0, u32 r1) {
    arg0->word_0 = r1;
    arg0->byte_4 = 0;
}

}  // namespace d_005b19e8
GUEST_EXPORT(0x005b19e8, d_005b19e8::f_005b19e8);

// f_005b2194: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b2194 {

struct __attribute__((packed)) Object_005b2194_0 {
    u8 unknown_0[0x584];  // (not used here)
    u32 word_584;
};
GUEST_OFFSET(Object_005b2194_0, word_584, 0x584);

inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> copy_aligned_bytes;
inline constexpr guest::Function<0x00726e94, u32(u32, u32, u32)> call_00726e94;
inline constexpr guest::Function<0x00726f34, u32(u32, u32, u32, u32)> call_00726f34;

u32 f_005b2194(gptr<Object_005b2194_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r0_3 = 0;
    u32 r4 = r0 + 0x584u;  // (from the original)
    if (arg0->word_584 == 0) {
        u32 r0_1 = call_00726f34(r4, r4 + 4u, r2, r3);
        r3 = guest::cpu()->r[3];
        arg0->word_584 = u32(s32(r0_1 - r4 - 4u) >> 2);
    }
    copy_aligned_bytes(r1, r4 + 4u, *gptr<u32>(r4) << 2, r3);
    r0 = call_00726e94(r4, r1 + (*gptr<u32>(r4) << 2), r0 + 0xd14u);  // (from the original)
    r3 = 0x803f0232u;  // (from the original)
    r1 = 0u;
    r2 = r1;
    do {
        u32 r12_1 = r1 * 3u;
        if (*gptr<u32>(r4 + r1 * 0x70u + 0x160u) != 0) {  // (from the original)
            *gptr<u32>(r0) = r2;
            *gptr<u32>(r0 + 4) = r12_1 + 0x203u | 0x80000000u | 0x2f0000u;  // (from the original)
            u32 r0_2 = r0 + 8;
            *gptr<u32>(r0_2) = r2;
            r0_3 = r0_2 + 4u;
            *gptr<u32>(r0_3) = r2;
        } else {
            *gptr<u32>(r0) = r2;
            *gptr<u32>(r0 + 4) = r12_1 + 0x205u | 0xf0000u;  // (from the original)
            r0_3 = r0 + 4u;
        }
        r0 = r0_3 + 4u;
        if (*gptr<u8>(r4 + r1 * 0x14u + 0x6a0u) != 0) {  // (from the original)
            *gptr<u32>(r0) = r1;
            *gptr<u32>(r0 + 4) = r3;
            u32 r0_4 = r0 + 8;
            *gptr<u32>(r0_4) = r2;
            u32 r0_5 = r0_4 + 4u;
            *gptr<u32>(r0_5) = r2;
            u32 r0_6 = r0_5 + 4u;
            *gptr<u32>(r0_6) = r2;
            u32 r0_7 = r0_6 + 4u;
            *gptr<u32>(r0_7) = r2;
            r0 = r0_7 + 4u;
        }
        r1 += 1u;
        guest::preempt();
    } while (s32(r1) < 0xc);  // (from the original)
    return r0;
}

}  // namespace d_005b2194
GUEST_EXPORT_FRAMED(0x005b2194, d_005b2194::f_005b2194, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005b22c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b22c8 {

struct __attribute__((packed)) Local_005b22c8_ea_1 {
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
GUEST_OFFSET(Local_005b22c8_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_005b22c8_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_005b22c8_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_005b22c8_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_005b22c8_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_005b22c8_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_005b22c8_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_005b22c8_ea_1, word_1c, 0x1c);
GUEST_OFFSET(Local_005b22c8_ea_1, word_20, 0x20);
GUEST_OFFSET(Local_005b22c8_ea_1, word_24, 0x24);

struct __attribute__((packed)) Local_005b22c8_ea_2 {
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
GUEST_OFFSET(Local_005b22c8_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_005b22c8_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_005b22c8_ea_2, word_c, 0xc);
GUEST_OFFSET(Local_005b22c8_ea_2, word_10, 0x10);
GUEST_OFFSET(Local_005b22c8_ea_2, word_14, 0x14);
GUEST_OFFSET(Local_005b22c8_ea_2, word_18, 0x18);
GUEST_OFFSET(Local_005b22c8_ea_2, word_1c, 0x1c);
GUEST_OFFSET(Local_005b22c8_ea_2, word_20, 0x20);
GUEST_OFFSET(Local_005b22c8_ea_2, word_24, 0x24);

struct __attribute__((packed)) Local_005b22c8_r0_5 {
    u8 byte_0;
    u8 byte_1;
    u32 word_2;
};
GUEST_OFFSET(Local_005b22c8_r0_5, byte_0, 0x0);
GUEST_OFFSET(Local_005b22c8_r0_5, byte_1, 0x1);
GUEST_OFFSET(Local_005b22c8_r0_5, word_2, 0x2);

struct __attribute__((packed)) Local_005b22c8_r0_8 {
    u32 word_0;
    u8 unknown_4[0x8];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Local_005b22c8_r0_8, word_0, 0x0);
GUEST_OFFSET(Local_005b22c8_r0_8, word_c, 0xc);

struct __attribute__((packed)) Local_005b22c8_r2_6 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005b22c8_r2_6, word_0, 0x0);
GUEST_OFFSET(Local_005b22c8_r2_6, word_4, 0x4);

struct __attribute__((packed)) Local_005b22c8_r4_6 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005b22c8_r4_6, word_0, 0x0);
GUEST_OFFSET(Local_005b22c8_r4_6, word_4, 0x4);

struct __attribute__((packed)) Local_005b22c8_r4_8 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005b22c8_r4_8, word_0, 0x0);
GUEST_OFFSET(Local_005b22c8_r4_8, word_4, 0x4);

inline constexpr guest::Function<0x001262dc, u32(u32, u32, u32, u32)> write_part_100;
inline constexpr guest::Function<0x001277dc, u32(u32, u32, u32, u32)> begin_command_write;
inline constexpr guest::Function<0x001279b4, u32(u32, u32)> advance_command_cursor;
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32)> clear_aligned;
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> copy_aligned_bytes;
inline constexpr guest::Function<0x0034943c, u32(u32, u32)> call_0034943c;
inline constexpr guest::Function<0x0034abd0, u32(u32, u32)> call_0034abd0;
inline constexpr guest::Function<0x005b2194, u32(u32, u32)> call_005b2194;
inline constexpr guest::Function<0x00727c84, u32(u32, u32, u32, u32)> write_part_6c;

struct __attribute__((packed)) Frame_005b22c8 {
    u32 word_0;
    u8 unknown_4[0x24];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005b22c8, word_0, 0x0);
GUEST_SIZE(Frame_005b22c8, 0x28);

u32 f_005b22c8(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005b22c8> frame;  // the original's stack frame
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
    u32 res_2 = 0;
    gptr<Local_005b22c8_ea_1> ea_1 = gptr<Local_005b22c8_ea_1>(frame.at(0).addr());
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
    r5 = r0;
    begin_command_write(0x208u, frame.at(0).addr(), r2, r3);  // (from the original)
    u32 r4_1 = frame->word_0;
    r7 = 0xf0201u;  // (from the original)
    r10 = 0u;
    r6 = r4_1;
    *gptr<u32>(r4_1) = r10;
    u32 r4_2 = r4_1 + 4u;
    r8 = r7 + 1u;
    *gptr<u32>(r4_2) = r7;
    u32 r4_3 = r4_2 + 4u;
    *gptr<u32>(r4_3) = r10;
    u32 r4_4 = r4_3 + 4u;
    *gptr<u32>(r4_4) = r8;
    u32 r4_5 = r4_4 + 4u;
    clear_aligned(r4_5, 0x98u, guest::cpu()->r[2]);  // (from the original)
    r11 = 0x823f0203u;  // (from the original)
    r9 = 0x803f0232u;  // (from the original)
    r3 = r4_5 + 0x98u;  // (from the original)
    u32 r1 = 0u;
    r2 = 0xcu;  // (from the original)
    r0 = r3;
    *gptr<u32>(r4_5 + 4u) = r11;
    do {
        gptr<Local_005b22c8_r4_6> r4_6 = gptr<Local_005b22c8_r4_6>(r0 + 4u);
        res_1 = r2 - 1u;
        r2 = res_1;
        r4_6->word_0 = r9;
        r4_6->word_4 = r10;
        *gptr<u32>(r0 + 0xcu) = r10;  // (from the original)
        *gptr<u32>(r0 + 0x10u) = r10;  // (from the original)
        *gptr<u32>(r0) = r1;
        u32 r0_1 = r0 + 0x14u;  // (from the original)
        r1 += 1u;
        *gptr<u32>(r0_1) = r10;
        r0 = r0_1 + 4u;
        guest::preempt();
    } while (res_1 != 0);
    u32 r1_2 = r3 + 0x120u;  // (from the original)
    frame->word_0 = r1_2;
    u32 r0_3 = write_part_6c(r5 + 0x4f0u, r1_2, r2, r3);  // (from the original)
    u32 r0_4 = call_0034943c(r0_3, 1u);
    u32 r2_3 = *gptr<u8>(r5 + 0x80u);  // (from the original)
    gptr<Local_005b22c8_r0_5> r0_5 = gptr<Local_005b22c8_r0_5>(r5 + 0x80u);  // (from the original)
    u32 r3_3 = r0_5->byte_1;
    if (r2_3 != 0) {
        r2_3 = 5u;
    }
    if (r3_3 != 0) {
        r3_3 = 1u;
    }
    *gptr<u32>(r0_4) = r2_3 | r3_3 << 0x10;  // (from the original)
    u32 r1_3 = r0_4 + 4u;
    *gptr<u32>(r1_3) = 0x500e0;  // (from the original)
    u32 r1_4 = r1_3 + 4u;
    u32 r3_4 = r0_5->word_2 & ~0xff000000u;  // (from the original)
    *gptr<u32>(r1_4) = r3_4;
    u32 r1_5 = r1_4 + 4u;
    *gptr<u32>(r1_5) = 0xf00e1;  // (from the original)
    u32 r1_6 = r1_5 + 4u;
    if (r0_5->byte_0 != 0) {
        copy_aligned_bytes(r1_6, r0_5.addr() + 8u, 0x210u, r3_4);  // (from the original)
        r3_4 = guest::cpu()->r[3];
        r1_6 += 0x210u;  // (from the original)
    }
    u32 r0_6 = write_part_100(r5, r1_6, 1u, r3_4);
    u32 r0_7 = call_0034abd0(r0_6, 1u);
    frame->word_0 = r0_7;
    gptr<Local_005b22c8_r0_8> r0_8 = gptr<Local_005b22c8_r0_8>(call_005b2194(r5, r0_7));
    frame->word_0 = r0_8.addr();
    r0_8->word_c = r8;
    gptr<Local_005b22c8_r2_6> r2_6 = gptr<Local_005b22c8_r2_6>(r0_8.addr() + 4u);
    r0_8->word_0 = r10;
    u32 r4_7 = r0_8.addr() + 0x10u;  // (from the original)
    r2_6->word_0 = r7;
    r2_6->word_4 = r10;
    clear_aligned(r4_7, 0x98u, r2_6.addr());  // (from the original)
    r3 = r4_7 + 0x98u;  // (from the original)
    r0 = r3;
    r1 = 0u;
    r2 = 0xcu;  // (from the original)
    *gptr<u32>(r4_7 + 4u) = r11;
    do {
        gptr<Local_005b22c8_r4_8> r4_8 = gptr<Local_005b22c8_r4_8>(r0 + 4u);
        res_2 = r2 - 1u;
        r2 = res_2;
        r4_8->word_0 = r9;
        r4_8->word_4 = r10;
        *gptr<u32>(r0 + 0xcu) = r10;  // (from the original)
        *gptr<u32>(r0 + 0x10u) = r10;  // (from the original)
        *gptr<u32>(r0) = r1;
        u32 r0_9 = r0 + 0x14u;  // (from the original)
        r1 += 1u;
        *gptr<u32>(r0_9) = r10;
        r0 = r0_9 + 4u;
        guest::preempt();
    } while (res_2 != 0);
    u32 r0_10 = r3 + 0x120u;  // (from the original)
    frame->word_0 = r0_10;
    u32 r0_12 = advance_command_cursor(r0_10 - r6 & ~3u, r1);
    gptr<Local_005b22c8_ea_2> ea_2 = gptr<Local_005b22c8_ea_2>(frame.at(0).addr());
    u32 r4_9 = ea_2->word_4;
    u32 r5_1 = ea_2->word_8;
    u32 r6_1 = ea_2->word_c;
    u32 r7_1 = ea_2->word_10;
    u32 r8_1 = ea_2->word_14;
    u32 r9_1 = ea_2->word_18;
    u32 r10_1 = ea_2->word_1c;
    u32 r11_1 = ea_2->word_20;
    guest::cpu()->r[4] = r4_9;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
    guest::cpu()->r[10] = r10_1;
    guest::cpu()->r[11] = r11_1;
    return r0_12;
}

}  // namespace d_005b22c8
GUEST_EXPORT(0x005b22c8, d_005b22c8::f_005b22c8);

// f_005b25d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b25d8 {

struct __attribute__((packed)) Local_005b25d8_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005b25d8_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_005b25d8_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_005b25d8_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005b25d8_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_005b25d8_ea_3, word_4, 0x4);

inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x0046fc50, u32(u32, u32, u32, u32)> call_0046fc50;

struct __attribute__((packed)) Frame_005b25d8 {
    u8 unknown_0[0x10];  // (not read or written by name)
    u32 word_10;
    u8 unknown_14[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005b25d8, word_10, 0x10);
GUEST_SIZE(Frame_005b25d8, 0x18);

u32 f_005b25d8(u32 r0, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_005b25d8> frame;  // the original's stack frame
    u32 r4_1 = 0;
    frame->word_10 = 0;
    gptr<Local_005b25d8_ea_2> ea_2 = gptr<Local_005b25d8_ea_2>(frame.at(0).addr());
    ea_2->word_0 = 0x1400;  // (from the original)
    ea_2->word_4 = 0x40;  // (from the original)
    gptr<Local_005b25d8_ea_3> ea_3 = gptr<Local_005b25d8_ea_3>(frame.at(8).addr());
    ea_3->word_0 = 0x68;  // (from the original)
    ea_3->word_4 = 4;
    u32 r0_2 = call_0046fc50(r0 + 4u, r1, 0x6000u, r2 + 4u);  // (from the original)
    if (r0_2 == 0) {
        r4_1 = 0u;
        clear_aligned(r1, 0x6000u);  // (from the original)
    } else {
        r4_1 = 1u;
    }
    return r4_1;
}

}  // namespace d_005b25d8
GUEST_EXPORT_FRAMED(0x005b25d8, d_005b25d8::f_005b25d8, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_005b2d10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b2d10 {

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> clear_aligned;
inline constexpr guest::Function<0x005b25d8, u32(u32, u32, u32)> call_005b25d8;
inline constexpr guest::Function<0x0075dbc4, u32(u32)> call_0075dbc4;

u32 f_005b2d10(u32 r0, u32 r1, u32 r2) {
    clear_aligned(r1, 0x6000u, r2, guest::cpu()->r[3]);  // (from the original)
    u32 r4_1 = 0u;
    u32 r0_1 = call_0075dbc4(r2);
    if (r0_1 != 0) {
        u32 r0_3 = call_005b25d8(r0 + 0x138u, r1, r2);  // (from the original)
        if (r0_3 != 0) {
            r4_1 = 1u;
        }
    }
    return r4_1;
}

}  // namespace d_005b2d10
GUEST_EXPORT_FRAMED(0x005b2d10, d_005b2d10::f_005b2d10, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_005b2e10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b2e10 {

inline constexpr u32 global_00953eec_address = 0x00953eecu;
inline constexpr u32 global_00953ef8_address = 0x00953ef8u;
inline constexpr u32 global_00953f00_address = 0x00953f00u;
inline guest::global<u8, 0x00953eec> global_00953eec;
inline guest::global<u32, 0x00953ef8> global_00953ef8;
inline guest::global<u32, 0x00953efc> global_00953efc;
inline guest::global<u32, 0x00953f00> global_00953f00;
inline constexpr guest::Function<0x002f74c8, u32(u32)> read_global_byte_2;
inline constexpr guest::Function<0x005a50e0, u32(u32, u32)> call_005a50e0;
inline constexpr guest::Function<0x005a90b0, u32(u32, u32)> call_005a90b0;
inline constexpr guest::Function<0x005a90c4, u32(u32, u32)> call_005a90c4;
inline constexpr guest::Function<0x005ab498, u32(u32, u32, u32, u32)> call_005ab498;
inline constexpr guest::Function<0x005ab4b0, u32(u32, u32, u32, u32)> call_005ab4b0;
inline constexpr guest::Function<0x005af9d0, u32(u32, u32)> call_005af9d0;
inline constexpr guest::Function<0x005afd20, u32(u32, u32, u32, u32)> call_005afd20;
inline constexpr guest::Function<0x005afd3c, u32(u32)> imgdb__MpSaver__MpSaver;
inline constexpr guest::Function<0x005afe38, u32(u32)> imgdb__MpSaver__virtual_0;
inline constexpr guest::Function<0x005b06c4, u32(u32, u32)> call_005b06c4;
inline constexpr guest::Function<0x005b0a14, u32(u32, u32, u32, u32)> call_005b0a14;
inline constexpr guest::Function<0x005b0a28, u32(u32)> imgdb__JpegSaver__JpegSaver;
inline constexpr guest::Function<0x005b0b14, u32(u32)> imgdb__JpegSaver__virtual_0;
inline constexpr guest::Function<0x007b0c08, u32(u32)> call_007b0c08;

struct __attribute__((packed)) Frame_005b2e10 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x14];  // (not read or written by name)
    u32 word_1c;
    u8 unknown_20[0x18];  // (not read or written by name)
    float float_38;
    u8 unknown_3c[0x2c];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005b2e10, word_0, 0x0);
GUEST_OFFSET(Frame_005b2e10, word_4, 0x4);
GUEST_OFFSET(Frame_005b2e10, word_1c, 0x1c);
GUEST_OFFSET(Frame_005b2e10, float_38, 0x38);
GUEST_SIZE(Frame_005b2e10, 0x68);

void f_005b2e10(u32 r0, u32 r1, u32 r2, u32 r3, float S0) {
    guest::StackFrameOf<Frame_005b2e10> frame;  // the original's stack frame
    u32 r0_13 = 0;
    u32 r4_1 = *frame.at<u32>(0x68);  // (from the original)
    u32 r0_1 = call_005ab4b0(r0, r1, r2, r3);
    u32 r0_2 = read_global_byte_2(r0_1);
    u32 r0_3 = call_007b0c08(r0_2);
    u32 r0_4 = frame.at(8).addr();
    if ((r0_3 & (r0_2 != 0xa4u)) == 0) {  // (from the original)
        imgdb__JpegSaver__JpegSaver(r0_4);
        u32 r0_5 = frame.at(8).addr();
        frame->word_0 = 1;
        call_005b0a14(r0_5, r1, r3, r4_1);
        u32 r0_6 = read_global_byte_2(r0_5);
        if (r0_6 == 0xa4u) {  // (from the original)
            call_005a90b0(frame.at(8).addr(), 0x198eu);  // (from the original)
        } else {
            call_005a90b0(frame.at(8).addr(), 0x863u);  // (from the original)
        }
        call_005a50e0(frame.at(8).addr(), 1u);
        u32 r1_5 = s8(*global_00953eec);
        call_005a90c4(frame.at(8).addr(), r1_5);
        u32 r1_6 = *global_00953f00;
        frame->word_1c = r1_6;
        u32 r0_12 = call_005b06c4(frame.at(8).addr(), r1_6);
        *gptr<u8>(r0 + 4u) = u8(r0_12);
        r0_13 = frame.at(8).addr();
        imgdb__JpegSaver__virtual_0(r0_13);
    } else {
        imgdb__MpSaver__MpSaver(r0_4);
        u32 r0_14 = frame.at(8).addr();
        frame->word_0 = r4_1;
        frame->word_4 = 1;
        call_005afd20(r0_14, r1, r2, r3);
        u32 r0_15 = read_global_byte_2(r0_14);
        if (r0_15 == 0xa4u) {  // (from the original)
            call_005a90b0(frame.at(8).addr(), 0x198eu);  // (from the original)
        } else {
            call_005a90b0(frame.at(8).addr(), 0x863u);  // (from the original)
        }
        call_005a50e0(frame.at(8).addr(), 1u);
        u32 r1_10 = s8(*global_00953eec);
        call_005a90c4(frame.at(8).addr(), r1_10);
        u32 r1_11 = *global_00953ef8;
        frame->word_1c = r1_11;
        float S0_17 = std::bit_cast<float>(*global_00953efc);
        frame->float_38 = S0_17;
        guest::cpu()->s[0] = S0_17;
        u32 r0_21 = call_005af9d0(frame.at(8).addr(), r1_11);
        *gptr<u8>(r0 + 4u) = u8(r0_21);
        r0_13 = frame.at(8).addr();
        imgdb__MpSaver__virtual_0(r0_13);
    }
    frame.release();
    call_005ab498(r0_13, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
}

}  // namespace d_005b2e10
GUEST_EXPORT(0x005b2e10, d_005b2e10::f_005b2e10);

// f_005b2fac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b2fac {

struct __attribute__((packed)) Object_005b2fac_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
};
GUEST_OFFSET(Object_005b2fac_0, word_0, 0x0);
GUEST_OFFSET(Object_005b2fac_0, word_4, 0x4);
GUEST_OFFSET(Object_005b2fac_0, word_8, 0x8);
GUEST_OFFSET(Object_005b2fac_0, word_c, 0xc);
GUEST_OFFSET(Object_005b2fac_0, word_10, 0x10);
GUEST_OFFSET(Object_005b2fac_0, word_14, 0x14);
GUEST_OFFSET(Object_005b2fac_0, word_18, 0x18);

struct __attribute__((packed)) Local_005b2fac_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005b2fac_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_005b2fac_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_005b2fac_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005b2fac_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_005b2fac_ea_3, word_4, 0x4);

inline constexpr guest::Function<0x00121110, u32(u32, u32, u32, u32)> call_00121110;
inline constexpr guest::Function<0x005b30c4, u32(u32, u32, u32, u32)> call_005b30c4;
inline constexpr guest::Function<0x007b0bb0, u32(u32, u32)> call_007b0bb0;
inline constexpr guest::Function<0x007b1034, u32(u32, u32)> call_007b1034;

struct __attribute__((packed)) Frame_005b2fac {
    u8 unknown_0[0x4];  // (not read or written by name)
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
    u32 word_c;
};
GUEST_OFFSET(Frame_005b2fac, word_4, 0x4);
GUEST_OFFSET(Frame_005b2fac, word_c, 0xc);
GUEST_SIZE(Frame_005b2fac, 0x10);

void f_005b2fac(gptr<Object_005b2fac_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005b2fac> frame;  // the original's stack frame
    u32 r5_1 = frame.at(0).addr();
    call_00121110(0x400u, r1, r2, r3);  // (from the original)
    call_007b0bb0(0x600u, r5_1 + 4u);  // (from the original)
    call_007b0bb0(0x602u, r5_1 + 8u);  // (from the original)
    u32 r7_1 = 0x602u | u32(s32(0x602u) >> 9);  // (from the original)
    call_007b0bb0(r7_1, r5_1 + 0xcu);  // (from the original)
    call_007b0bb0(0x601u, r5_1);  // (from the original)
    gptr<Local_005b2fac_ea_1> ea_1 = gptr<Local_005b2fac_ea_1>(frame.at(8).addr());
    call_007b1034(frame->word_4, ea_1->word_0 * ea_1->word_4 << 1);
    arg0->word_c = 0;
    u32 r1_5 = frame->word_c;
    arg0->word_14 = 0xf0;  // (from the original)
    arg0->word_18 = 0x190;  // (from the original)
    arg0->word_10 = r1_5 - 0x190u;  // (from the original)
    call_005b30c4(arg0->word_0, arg0->word_8, frame.at(0).addr(), arg0.addr() + 0xcu);  // (from the original)
    u32 r5_2 = frame.at(0).addr();
    call_00121110(0x410u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_007b0bb0(0x600u, r5_2 + 4u);  // (from the original)
    call_007b0bb0(0x602u, r5_2 + 8u);  // (from the original)
    call_007b0bb0(r7_1, r5_2 + 0xcu);  // (from the original)
    call_007b0bb0(0x601u, r5_2);  // (from the original)
    gptr<Local_005b2fac_ea_3> ea_3 = gptr<Local_005b2fac_ea_3>(frame.at(8).addr());
    call_007b1034(frame->word_4, ea_3->word_0 * ea_3->word_4 << 1);
    arg0->word_10 = frame->word_c - 0x190u;  // (from the original)
    call_005b30c4(arg0->word_4, arg0->word_8, frame.at(0).addr(), arg0.addr() + 0xcu);  // (from the original)
}

}  // namespace d_005b2fac
GUEST_EXPORT_FRAMED(0x005b2fac, d_005b2fac::f_005b2fac, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_005b30c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b30c4 {

struct __attribute__((packed)) Object_005b30c4_2 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_005b30c4_2, word_4, 0x4);
GUEST_OFFSET(Object_005b30c4_2, word_8, 0x8);

struct __attribute__((packed)) Object_005b30c4_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_005b30c4_3, word_0, 0x0);
GUEST_OFFSET(Object_005b30c4_3, word_4, 0x4);
GUEST_OFFSET(Object_005b30c4_3, word_8, 0x8);
GUEST_OFFSET(Object_005b30c4_3, word_c, 0xc);


void f_005b30c4(u32 r0, u32 r1_unused, gptr<Object_005b30c4_2> arg2, gptr<Object_005b30c4_3> arg3) {
    u32 res_1 = 0;
    u32 r8 = 0u;
    u32 r5_1 = arg3->word_c;
    u32 r1_1 = arg2->word_4;
    u32 r7 = r0 + (r5_1 * (arg3->word_8 - 1u) << 1);
    u32 r4 = r1_1 + (arg3->word_4 * arg2->word_8 + arg3->word_0 << 1);
    if (s32(r5_1) > 0) {
        do {
            u32 r12_1 = r4 + (arg3->word_8 << 1) - r4;
            if (s32(r12_1) >> 1 > 0) {
                u32 r5_2 = arg3->word_c;
                u32 r1 = r4 - 2u;
                r0 = r7 + (r5_2 << 1);
                if ((r12_1 & 0x2u) != 0) {  // (from the original)
                    r0 -= (r5_2 << 1);
                    u32 ea_1 = r1 + 2u;
                    r1 = ea_1;
                    *gptr<u16>(r0) = *gptr<u16>(ea_1);
                }
                u32 r12 = s32(r12_1) >> 2;
                if (r12 != 0) {
                    do {
                        u32 r5_3 = *gptr<u16>(r1 + 2u);
                        res_1 = r12 - 1u;
                        r12 = res_1;
                        *gptr<u16>(r0 - (arg3->word_c << 1)) = u16(r5_3);
                        u32 ea_4 = r1 + 4u;
                        r1 = ea_4;
                        *gptr<u16>(r0 + (0u - arg3->word_c << 2)) = *gptr<u16>(ea_4);
                        r0 -= (arg3->word_c << 2);
                        guest::preempt();
                    } while (res_1 != 0);
                }
            }
            r1_1 = arg2->word_8;
            r8 += 1u;
            r7 += 2u;
            r4 += (r1_1 << 1);
            guest::preempt();
        } while (s32(arg3->word_c) > s32(r8));
    }
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_005b30c4
GUEST_EXPORT_FRAMED(0x005b30c4, d_005b30c4::f_005b30c4, 0x1f0);  // pushes {r4, r5, r6, r7, r8} first, as the original

// f_005b3198: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b3198 {

struct __attribute__((packed)) Local_005b3198_r2_1 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_005b3198_r2_1, float_0, 0x0);
GUEST_OFFSET(Local_005b3198_r2_1, float_4, 0x4);
GUEST_OFFSET(Local_005b3198_r2_1, float_8, 0x8);

inline guest::global<u32, 0x00a84398> global_00a84398;
inline guest::global<u32, 0x00a8439c> global_00a8439c;
inline guest::global<u32, 0x00a843a0> global_00a843a0;

void f_005b3198(u32 r0, u32 r1) {
    float S0 = 0;
    float S1 = 0;
    float S2 = 0;
    u32 r1_3 = 0;
    gptr<Local_005b3198_r2_1> r2_1 = gptr<Local_005b3198_r2_1>(*gptr<u32>(guest::cpu()->r[13] + 8u));
    float S0_1 = std::bit_cast<float>(*global_00a84398);
    float S1_1 = std::bit_cast<float>(*global_00a8439c);
    float S2_1 = std::bit_cast<float>(*global_00a843a0);
    float S4_1 = S0_1 + S1_1 + S2_1;
    if (s32(std::bit_cast<u32>(fabsf(S0_1 * S0_1 + S1_1 * S1_1 + S2_1 * S2_1))) <= 0x34000000) {  // (from the original)
        S0 = 0.33333334f;
        S1 = S0;
        S2 = S0;
    } else {
        float S3_1 = 1.0f / S4_1;
        S0 = S0_1 * S3_1;
        S1 = S1_1 * S3_1;
        S2 = S2_1 * S3_1;
    }
    float S4_2 = r2_1->float_0;
    float S5_1 = r2_1->float_4;
    float S6_1 = r2_1->float_8;
    u32 r2_2 = (r0 + r1) - r0;
    u32 r12 = 1u;
    if (s32(u32(s32(r2_2) >> 1) + 1u) <= 1) {
        guest::cpu()->r[1] = 1u;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return;
    }
    u32 r4 = u32(s32(r2_2) >> 1) + 1u;
    float S3_2 = 31.0f;
    float S8 = 0.032258064f;
    float S4 = S4_2 * S3_2;
    float S9 = S5_1 * 63.0f;
    float S5 = S6_1 * S3_2;
    float S10 = 0.015873017f;
    do {
        u32 r1_1 = *gptr<u16>(r0);
        r12 += 1u;
        float S3_3 = S0 * (float(r1_1 >> 0xbu & 0x1fu) * S8) + float(r1_1 >> 5u & 0x3fu) * S10 * S1 + float(r1_1 & 0x1fu) * S8 * S2;  // (from the original)
        u32 r1_2 = vcvt_uz_f(S4 * S3_3);
        u32 r2_3 = vcvt_uz_f(S9 * S3_3);
        u32 r3_2 = vcvt_uz_f(S5 * S3_3);
        if (r1_2 > 0x1fu) {  // (from the original)
            r1_2 = 0x1fu;  // (from the original)
        }
        if (r2_3 > 0x3fu) {  // (from the original)
            r2_3 = 0x3fu;  // (from the original)
        }
        if (r3_2 > 0x1fu) {  // (from the original)
            r3_2 = 0x1fu;  // (from the original)
        }
        r1_3 = r3_2 & 0x1fu | r1_2 << 0xb | (r2_3 & 0x3fu) << 5;  // (from the original)
        *gptr<u16>(r0) = u16(r1_3);
        r0 += 2u;
        guest::preempt();
    } while (s32(r4) > s32(r12));
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
}

}  // namespace d_005b3198
GUEST_EXPORT_FRAMED(0x005b3198, d_005b3198::f_005b3198, 0x30);  // pushes {r4, r5} first, as the original

// f_005b3ed4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b3ed4 {

inline guest::global<u8, 0x00957321> global_00957321;
inline guest::global<u8, 0x00957322> global_00957322;
inline guest::global<u8, 0x00957323> global_00957323;

void f_005b3ed4() {
    *global_00957321 = *global_00957322;
    *global_00957322 = 0xa5;  // (from the original)
    *global_00957323 = 0xa5;  // (from the original)
    guest::cpu()->r[1] = 0xa5u;  // (from the original)
}

}  // namespace d_005b3ed4
GUEST_EXPORT(0x005b3ed4, d_005b3ed4::f_005b3ed4);

// f_005b4088: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b4088 {

inline constexpr u32 global_00957320_address = 0x00957320u;
inline guest::global<u8, 0x00957321> global_00957321;
inline guest::global<u8, 0x00957322> global_00957322;
inline guest::global<u8, 0x00957323> global_00957323;

u32 f_005b4088() {
    *global_00957321 = *global_00957322;
    *global_00957322 = *global_00957323;
    *global_00957323 = 0xa5;  // (from the original)
    guest::cpu()->r[1] = 0xa5u;  // (from the original)
    return global_00957320_address;
}

}  // namespace d_005b4088
GUEST_EXPORT(0x005b4088, d_005b4088::f_005b4088);

// f_005b4148: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b4148 {

inline constexpr u32 global_00957344_address = 0x00957344u;
inline constexpr u32 global_0095787c_address = 0x0095787cu;
inline guest::global<u8, 0x00957322> global_00957322;
inline guest::global<u32, 0x00957328> global_00957328;
inline guest::global<u32, 0x0095732c> global_0095732c;
inline guest::global<u32, 0x00957344> global_00957344;
inline constexpr guest::Function<0x005b3ef4, u32(u32, u32, u32)> call_005b3ef4;
inline constexpr guest::Function<0x006a6024, u32(u32, u32)> call_006a6024;
inline constexpr guest::Function<0x006e4490, u32(u32, u32, u32, u32)> call_006e4490;

u32 f_005b4148(u32 r0, u32 r1_unused, u32 r2) {
    *global_0095732c = r0;
    *global_00957328 = 0;
    call_006e4490(r0, 0u, r2, guest::cpu()->r[3]);
    u32 r0_1 = *global_00957322;
    u32 r4_1 = r0_1 >= 0xa5u ? *global_00957344 : gptr<u32>(global_00957344_address)[r0_1];  // (from the original)
    call_006a6024(r0_1, global_00957344_address);
    call_005b3ef4(r4_1, global_0095787c_address, 0u);
    return 1u;
}

}  // namespace d_005b4148
GUEST_EXPORT_FRAMED(0x005b4148, d_005b4148::f_005b4148, 0x4010);  // pushes {r4, lr} first, as the original

// f_005b4198: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b4198 {

inline constexpr u32 global_00957344_address = 0x00957344u;
inline constexpr u32 global_0095788c_address = 0x0095788cu;
inline guest::global<u8, 0x00957322> global_00957322;
inline guest::global<u32, 0x00957328> global_00957328;
inline guest::global<u32, 0x0095732c> global_0095732c;
inline guest::global<u32, 0x00957344> global_00957344;
inline constexpr guest::Function<0x005b3ef4, u32(u32, u32, u32)> call_005b3ef4;
inline constexpr guest::Function<0x006a6024, u32(u32, u32)> call_006a6024;
inline constexpr guest::Function<0x006e4490, u32(u32, u32, u32, u32)> call_006e4490;

u32 f_005b4198(u32 r0, u32 r1_unused, u32 r2) {
    *global_0095732c = r0;
    *global_00957328 = 0;
    call_006e4490(r0, 0u, r2, guest::cpu()->r[3]);
    u32 r0_1 = *global_00957322;
    u32 r4_1 = r0_1 >= 0xa5u ? *global_00957344 : gptr<u32>(global_00957344_address)[r0_1];  // (from the original)
    call_006a6024(r0_1, global_00957344_address);
    call_005b3ef4(r4_1, global_0095788c_address, 0u);
    return 1u;
}

}  // namespace d_005b4198
GUEST_EXPORT_FRAMED(0x005b4198, d_005b4198::f_005b4198, 0x4010);  // pushes {r4, lr} first, as the original

// f_005b41e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b41e8 {

inline constexpr u32 global_00957344_address = 0x00957344u;
inline guest::global<u8, 0x00957322> global_00957322;
inline guest::global<u32, 0x00957344> global_00957344;

u32 f_005b41e8(u32 r0) {
    u32 r1_1 = r0;
    if (r0 == 0xa5u) {  // (from the original)
        r1_1 = *global_00957322;
    }
    u32 r1_2 = *gptr<u32>((r1_1 >= 0xa5u ? *global_00957344 : gptr<u32>(global_00957344_address)[r1_1]) + 8u);  // (from the original)
    if (r1_2 != 0) {
        u32 r0_1 = *gptr<u8>(r1_2 + 0xcu);  // (from the original)
        guest::cpu()->r[1] = r1_2;
        return r0_1;
    }
    if (r0 == 0xa5u) {  // (from the original)
        guest::cpu()->r[1] = 0x20u;  // (from the original)
        return 2u;
    }
    u32 r0_2 = 0x20u & ~gptr<u32>(0x889074u)[r0];  // (from the original)
    if (r0_2 == 0) {
        guest::cpu()->r[1] = 0x20u;  // (from the original)
        return r0_2;
    }
    guest::cpu()->r[1] = 0x20u;  // (from the original)
    return 2u;
}

}  // namespace d_005b41e8
GUEST_EXPORT(0x005b41e8, d_005b41e8::f_005b41e8);

// f_005b43b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b43b0 {


u32 f_005b43b0(u32 r0) {
    if (r0 == 0x39u || r0 == 0x3au) {  // (from the original)
        return 1u;
    }
    if (r0 != 0x3bu && r0 != 0x3cu) {  // (from the original)
        return 0u;
    }
    return 1u;
}

}  // namespace d_005b43b0
GUEST_EXPORT(0x005b43b0, d_005b43b0::f_005b43b0);

// f_005b43d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b43d4 {

inline guest::global<u8, 0x00957322> global_00957322;
inline constexpr guest::Function<0x002fc900, u32(u32)> mode_above_1;
inline constexpr guest::Function<0x005b4018, u32(u32)> mode_page_player_is_main_slot;
inline constexpr guest::Function<0x005b4724, u32(u32, u32, u32, u32)> call_005b4724;
inline constexpr guest::Function<0x006dfe10, u32(u32)> BsNpcMgr__NpcPosGetCB__NpcPosGetCB_006dfe10;

u32 f_005b43d4(u32 r0) {
    u32 r0_1 = call_005b4724(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 == 0) {
        return 1u;
    }
    u32 r0_2 = *global_00957322;
    u32 r0_3 = mode_page_player_is_main_slot(r0_2);
    if (r0_3 != 0) {
        r0_3 = mode_above_1(r0_3);
        if (r0_3 != 0) {
            return 3u;
        }
    }
    u32 r0_4 = BsNpcMgr__NpcPosGetCB__NpcPosGetCB_006dfe10(r0_3);
    return r0_4 == 0 ? 2u : 0u;
}

}  // namespace d_005b43d4
GUEST_EXPORT_FRAMED(0x005b43d4, d_005b43d4::f_005b43d4, 0x4010);  // pushes {r4, lr} first, as the original

// f_005b4428: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b4428 {

inline guest::global<u16, 0x00886e2a> global_00886e2a;
inline guest::global<u8, 0x009503bf> global_009503bf;
inline guest::global<u8, 0x009503c1> global_009503c1;
inline guest::global<u8, 0x00957323> global_00957323;
inline guest::global<u8, 0x00ac196c> global_00ac196c;
inline guest::global<u32, 0x00ac1984> global_00ac1984;
inline guest::global<u8, 0x00ac1988> global_00ac1988;
inline constexpr guest::Function<0x00606a24, u32(u32, u32, u32, u32)> call_00606a24;

struct __attribute__((packed)) Frame_005b4428 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Frame_005b4428, word_0, 0x0);
GUEST_OFFSET(Frame_005b4428, word_4, 0x4);
GUEST_SIZE(Frame_005b4428, 0x8);

void f_005b4428(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_005b4428> frame;  // the original's stack frame
    u32 r12_1 = *frame.at<u32>(0x10);  // (from the original)
    *global_00957323 = u8(r0);
    if (r1 == 6u) {
        r1 = *global_009503bf;
    }
    if (r3 == 6u) {
        r3 = *global_009503c1;
    }
    frame->word_4 = 0;
    frame->word_0 = r12_1;
    u32 r0_1 = *global_00886e2a;
    call_00606a24(r0_1, r1, guest::cpu()->r[2], r3);
    *global_00ac196c = 0xa5;  // (from the original)
    *global_00ac1984 = 0;
    *global_00ac1988 = 0;
    guest::cpu()->r[1] = 0xa5u;  // (from the original)
}

}  // namespace d_005b4428
GUEST_EXPORT_FRAMED(0x005b4428, d_005b4428::f_005b4428, 0x4010);  // pushes {r4, lr} first, as the original

// f_005b449c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b449c {


u32 f_005b449c(u32 r0, u32 r1) {
    if (r1 != 0xa5u) {  // (from the original)
        u32 r4 = 0x889074u;  // (from the original)
        if ((r0 & ~gptr<u32>(r4)[r1]) == 0) {
            u32 r12 = 0u;
            u32 r3 = r12;
            do {
                u32 r2_1 = r3 & 0xffu;  // (from the original)
                if (r1 == r2_1) {
                    return r12;
                }
                if (r2_1 != 0xa5u && (r0 & ~gptr<u32>(r4)[r2_1]) == 0) {  // (from the original)
                    r12 += 1u;
                }
                r3 += 1u;
                guest::preempt();
            } while (s32(r3) < 0xa5);  // (from the original)
        }
    }
    return ~0u;
}

}  // namespace d_005b449c
GUEST_EXPORT_FRAMED(0x005b449c, d_005b449c::f_005b449c, 0x30);  // pushes {r4, r5} first, as the original

// f_005b4520: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b4520 {

inline constexpr u32 global_0095c6d0_address = 0x0095c6d0u;
inline guest::global<u8, 0x00957322> global_00957322;
inline guest::global<u32, 0x0095c6d0> global_0095c6d0;

u32 f_005b4520() {
    u32 r0_1 = *global_00957322;
    if (r0_1 != 0xa5u) {  // (from the original)
        if ((0x40000u & ~gptr<u32>(0x889074u)[r0_1]) == 0) {  // (from the original)
            return 1u;
        }
    }
    if (r0_1 == 0xa5u) {  // (from the original)
        return 0u;
    }
    if ((0x80000u & ~gptr<u32>(0x889074u)[r0_1]) != 0) {  // (from the original)
        return 0u;
    }
    u32 r0_2 = *global_0095c6d0;
    if (r0_2 == 0) {
        return 0u;
    }
    if (*gptr<u8>(r0_2 + 0x10cu) == 2u) {  // (from the original)
        return 1u;
    }
    return 0u;
}

}  // namespace d_005b4520
GUEST_EXPORT(0x005b4520, d_005b4520::f_005b4520);

// f_005b4594: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b4594 {

inline guest::global<u8, 0x00957322> global_00957322;
inline constexpr guest::Function<0x0027ab40, u32(u32)> is_local_slot;
inline constexpr guest::Function<0x002fb328, u32(u32)> get_save_data;
inline constexpr guest::Function<0x002ff8b0, u32(u32, u32)> slot_value;
inline constexpr guest::Function<0x0030fbb4, u32(u32, u32)> block_or_first;
inline constexpr guest::Function<0x005b4018, u32(u32, u32, u32, u32)> mode_page_player_is_main_slot;
inline constexpr guest::Function<0x006fa40c, u32(u32, u32, u32, u32)> owner_of_mode;

u32 f_005b4594(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r4 = *global_00957322;
    u32 r0_1 = mode_page_player_is_main_slot(r4, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        u32 r0_2 = slot_value(4u, r1);
        u32 r0_3 = is_local_slot(r0_2);
        r1 = guest::cpu()->r[1];
        if (r0_3 != 0) {
            u32 r0 = 0u;
            r1 = r0_2 * 6u + 0x889c80u;  // (from the original)
L_5b45e8:;
            u32 r2_3 = r4;
            u32 r3_3 = *gptr<u8>(r1 + r0);
            if (r3_3 != r4) {
                r3_3 = *gptr<u8>(r1 + r0 + 1u);
                r2_3 = r4;
                if (r3_3 != r4) {
                    r0 += 2u;
                    if (s32(r0) < 6) {
                        guest::preempt();
                        goto L_5b45e8;
                    }
                    guest::cpu()->r[1] = r1;
                    return 0u;
                }
            }
            u32 r0_4 = owner_of_mode(r2_3, r1, r2_3, r3_3);
            r1 = guest::cpu()->r[1];
            if (r0_4 < 4u) {
                u32 r0_5 = get_save_data(r0_4);
                u32 r0_7 = block_or_first(r0_5 + 0x5d900u, r0_4);  // (from the original)
                r1 = guest::cpu()->r[1];
                u32 r0_8 = *gptr<u8>(r0_7 + 4u);
                if (r0_8 != 0 && r0_8 != 8u) {
                    return 1u;
                }
            }
        }
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    guest::cpu()->r[1] = r1;
    return 1u;
}

}  // namespace d_005b4594
GUEST_EXPORT_FRAMED(0x005b4594, d_005b4594::f_005b4594, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005b4678: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b4678 {


u32 f_005b4678(u32 r0) {
    if (r0 == 0xa5u) {  // (from the original)
        guest::cpu()->r[1] = 0x10000u;  // (from the original)
        return 0u;
    }
    if ((0x10000u & ~gptr<u32>(0x889074u)[r0]) == 0) {  // (from the original)
        guest::cpu()->r[1] = 0x10000u;  // (from the original)
        return 1u;
    }
    guest::cpu()->r[1] = 0x10000u;  // (from the original)
    return 0u;
}

}  // namespace d_005b4678
GUEST_EXPORT(0x005b4678, d_005b4678::f_005b4678);

// f_005b46a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b46a4 {

inline guest::global<u32, 0x005b471c> global_005b471c;
inline guest::global<u32, 0x005b4720> global_005b4720;
inline constexpr guest::Function<0x006f8c24, u32(u32, u32, u32, u32)> call_006f8c24;

struct __attribute__((packed)) Frame_005b46a4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Frame_005b46a4, word_0, 0x0);
GUEST_OFFSET(Frame_005b46a4, word_4, 0x4);
GUEST_SIZE(Frame_005b46a4, 0x8);

u32 f_005b46a4(u32 r0) {
    guest::StackFrameOf<Frame_005b46a4> frame;  // the original's stack frame
    u32 r0_1 = 0;
    u32 r5 = r0;
    u32 r1 = *global_005b4720;
    u32 r4 = 0u;
    u32 r6 = frame.at(0).addr();
    frame->word_0 = *global_005b471c;
    frame->word_4 = r1;
    do {
        if (*gptr<u8>(r6 + r4) != r5) {
            goto L_5b470c;
        }
        r0_1 = call_006f8c24(r5, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0_1 == 0) {
            goto L_5b470c;
        }
        return *gptr<u8>(r0_1 + 4u) == 0;
L_5b470c:;
        r4 += 1u;
        if (r4 >= 5u) {
            guest::cpu()->r[1] = r1;
            return 0u;
        }
        guest::preempt();
    } while (1);
}

}  // namespace d_005b46a4
GUEST_EXPORT_FRAMED(0x005b46a4, d_005b46a4::f_005b46a4, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005b4724: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b4724 {

inline constexpr u32 global_0095c6d0_address = 0x0095c6d0u;
inline guest::global<u8, 0x00957322> global_00957322;
inline guest::global<u32, 0x0095c6d0> global_0095c6d0;
inline constexpr guest::Function<0x0027ab40, u32(u32)> is_local_slot;
inline constexpr guest::Function<0x002ff8b0, u32(u32, u32, u32, u32)> slot_value;
inline constexpr guest::Function<0x004e6e84, u32(u32, u32)> call_004e6e84;
inline constexpr guest::Function<0x005b4018, u32(u32, u32, u32, u32)> mode_page_player_is_main_slot;
inline constexpr guest::Function<0x006c4280, u32(u32, u32)> record_value;
inline constexpr guest::Function<0x006e0b2c, u32(u32, u32)> kind_has_flag_80000_or_100000;

u32 f_005b4724(u32 r0_unused, u32 r1_unused, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    u32 r1 = 0x10u;  // (from the original)
    u32 r6 = 0x889074u;  // (from the original)
    u32 r4 = *global_00957322;
    if (r4 != 0xa5u) {  // (from the original)
        r0_1 = r1 & ~gptr<u32>(r6)[r4];
        if (r0_1 == 0) {
            guest::cpu()->r[1] = r1;
            return r0_1;
        }
    }
    r1 = 8u;
    if (r4 != 0xa5u) {  // (from the original)
        if ((r1 & ~gptr<u32>(r6)[r4]) == 0) {
            u32 r0_2 = slot_value(4u, r1, r2, r3);
            u32 r0_3 = is_local_slot(r0_2);
            r1 = guest::cpu()->r[1];
            u32 r2_2 = guest::cpu()->r[2];
            u32 r3_2 = guest::cpu()->r[3];
            if (r0_3 != 0) {
                u32 r0 = 0u;
                r1 = r0_2 * 6u + 0x889c80u;  // (from the original)
                do {
                    if (*gptr<u8>(r1 + r0) == r4) {
                        guest::cpu()->r[1] = r1;
                        return 1u;
                    }
                    r2_2 = r1 + r0;
                    r3_2 = *gptr<u8>(r2_2 + 1u);
                    if (r3_2 == r4) {
                        guest::cpu()->r[1] = r1;
                        return 1u;
                    }
                    r0 += 2u;
                    guest::preempt();
                } while (s32(r0) < 6);
            }
            u32 r0_4 = mode_page_player_is_main_slot(r4, r1, r2_2, r3_2);
            r1 = guest::cpu()->r[1];
            if (r0_4 != 0 || r4 == 0xa3u) {  // (from the original)
                return 1u;
            }
            u32 r0_5 = call_004e6e84(r4, r1);
            r1 = guest::cpu()->r[1];
            if (r0_5 != 0) {
                return 1u;
            }
            u32 r0_6 = kind_has_flag_80000_or_100000(r0_5, r1);
            r1 = guest::cpu()->r[1];
            u32 r2_5 = guest::cpu()->r[2];
            if (r0_6 != 0) {
                u32 r0_7 = *global_0095c6d0;
                u32 zf_1 = r0_7 == 0;
                if (!zf_1) {
                    r2_5 = 0x100000u;  // (from the original)
                    zf_1 = r4 == 0xa5u;  // (from the original)
                }
                if (!zf_1) {
                    r1 = r2_5 & ~gptr<u32>(r6)[r4];
                    if (r1 == 0) {
                        u32 r0_8 = *gptr<s8>(r0_7 + 0x1cu);  // (from the original)
                        u32 r0_9 = record_value(r0_8, r1);
                        r1 = guest::cpu()->r[1];
                        if (r0_9 == 0xbu) {  // (from the original)
                            return 1u;
                        }
                    }
                }
            }
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_005b4724
GUEST_EXPORT_FRAMED(0x005b4724, d_005b4724::f_005b4724, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005b4854: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b4854 {

inline guest::global<u8, 0x00957322> global_00957322;
inline constexpr guest::Function<0x002fc900, u32(u32)> mode_above_1;
inline constexpr guest::Function<0x005b4018, u32(u32)> mode_page_player_is_main_slot;
inline constexpr guest::Function<0x005b4724, u32(u32, u32, u32, u32)> call_005b4724;
inline constexpr guest::Function<0x006dfe10, u32(u32)> BsNpcMgr__NpcPosGetCB__NpcPosGetCB_006dfe10;

u32 f_005b4854(u32 r0) {
    u32 r0_1 = call_005b4724(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 == 0) {
        return 0u;
    }
    u32 r0_2 = *global_00957322;
    u32 r0_3 = mode_page_player_is_main_slot(r0_2);
    if (r0_3 != 0) {
        r0_3 = mode_above_1(r0_3);
        if (r0_3 != 0) {
            return 0u;
        }
    }
    u32 r0_4 = BsNpcMgr__NpcPosGetCB__NpcPosGetCB_006dfe10(r0_3);
    return r0_4 != 0;
}

}  // namespace d_005b4854
GUEST_EXPORT_FRAMED(0x005b4854, d_005b4854::f_005b4854, 0x4010);  // pushes {r4, lr} first, as the original

// f_005b48b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b48b4 {

inline guest::global<u8, 0x00957322> global_00957322;

u32 f_005b48b4() {
    u32 r0_1 = *global_00957322;
    if (r0_1 != 0xa5u) {  // (from the original)
        if ((0x10u & ~gptr<u32>(0x889074u)[r0_1]) == 0) {  // (from the original)
            guest::cpu()->r[1] = 0x889074u;  // (from the original)
            return 0u;
        }
    }
    if (r0_1 == 0xa5u) {  // (from the original)
        guest::cpu()->r[1] = 0x889074u;  // (from the original)
        return 0u;
    }
    u32 r0_2 = gptr<u32>(0x889074u)[r0_1];  // (from the original)
    u32 r1_1 = 4u & ~r0_2;
    if (r1_1 != 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r1_2 = 0x20u & ~r0_2;  // (from the original)
    if (r1_2 == 0) {
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    u32 r1_3 = 0x40000u & ~r0_2;  // (from the original)
    if (r1_3 == 0) {
        guest::cpu()->r[1] = r1_3;
        return 1u;
    }
    if ((0x80000u & ~r0_2) != 0) {  // (from the original)
        guest::cpu()->r[1] = 0x80000u;  // (from the original)
        return 0u;
    }
    guest::cpu()->r[1] = 0x80000u;  // (from the original)
    return 1u;
}

}  // namespace d_005b48b4
GUEST_EXPORT(0x005b48b4, d_005b48b4::f_005b48b4);

// f_005b493c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b493c {


u32 f_005b493c(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    if (r0 >= 0xa5u) {  // (from the original)
        r0_1 = ~0u;
    } else {
        r1 = 0x88997cu;  // (from the original)
        r0_1 = gptr<u32>(r1)[r0];
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_005b493c
GUEST_EXPORT(0x005b493c, d_005b493c::f_005b493c);

// f_005b49b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b49b4 {


u32 f_005b49b4(u32 r0, u32 r1) {
    if (r0 == 0xa5u) {  // (from the original)
        return 0u;
    }
    u32 r1_1 = 0x100000u & ~gptr<u32>(0x889074u)[r0];  // (from the original)
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return r0 & 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_005b49b4
GUEST_EXPORT(0x005b49b4, d_005b49b4::f_005b49b4);

// f_005b49e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b49e0 {


u32 f_005b49e0(u32 r0, u32 r1) {
    if (r0 == 0xa5u) {  // (from the original)
        return 0u;
    }
    u32 r1_1 = 0x100000u & ~gptr<u32>(0x889074u)[r0];  // (from the original)
    if (r1_1 != 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r0_1 = r0 - 0x81u & 0x80000001u;  // (from the original)
    if (r0_1 == 1u) {
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_005b49e0
GUEST_EXPORT(0x005b49e0, d_005b49e0::f_005b49e0);

// f_005b4a28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b4a28 {

inline constexpr u32 global_00957320_address = 0x00957320u;
inline guest::global<u8, 0x00957324> global_00957324;
inline guest::global<u8, 0x00957325> global_00957325;

u32 f_005b4a28() {
    *global_00957324 = 0;
    *global_00957325 = 0;
    guest::cpu()->r[1] = 0u;
    return global_00957320_address;
}

}  // namespace d_005b4a28
GUEST_EXPORT(0x005b4a28, d_005b4a28::f_005b4a28);

// f_005b4a40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b4a40 {

inline guest::global<u8, 0x00957322> global_00957322;
inline constexpr guest::Function<0x0027ab40, u32(u32)> is_local_slot;
inline constexpr guest::Function<0x002ff8b0, u32(u32, u32, u32, u32)> slot_value;
inline constexpr guest::Function<0x005b4018, u32(u32, u32)> mode_page_player_is_main_slot;

u32 f_005b4a40(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r0_1 = 0;
    u32 r1 = 0x889074u;  // (from the original)
    u32 r4 = *global_00957322;
    if (r4 != 0xa5u) {  // (from the original)
        r0_1 = 0x10u & ~gptr<u32>(r1)[r4];  // (from the original)
        if (r0_1 == 0) {
            guest::cpu()->r[1] = r1;
            return r0_1;
        }
    }
    if (r4 == 0xa5u) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    if ((8u & ~gptr<u32>(r1)[r4]) != 0) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    u32 r0_2 = slot_value(4u, r1, 8u, r3);
    u32 r0_3 = is_local_slot(r0_2);
    r1 = guest::cpu()->r[1];
    if (r0_3 != 0) {
        u32 r0 = 0u;
        r1 = r0_2 * 6u + 0x889c80u;  // (from the original)
        do {
            if (*gptr<u8>(r1 + r0) == r4 || *gptr<u8>(r1 + r0 + 1u) == r4) {
                guest::cpu()->r[1] = r1;
                return 1u;
            }
            r0 += 2u;
            guest::preempt();
        } while (s32(r0) < 6);
    }
    u32 r0_4 = mode_page_player_is_main_slot(r4, r1);
    r1 = guest::cpu()->r[1];
    return r0_4 != 0;
}

}  // namespace d_005b4a40
GUEST_EXPORT_FRAMED(0x005b4a40, d_005b4a40::f_005b4a40, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005b4c78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b4c78 {

inline constexpr u32 global_00957320_address = 0x00957320u;
inline guest::global<u32, 0x00957328> global_00957328;
inline constexpr guest::Function<0x006a694c, u32(u32, u32, u32, u32)> call_006a694c;

void f_005b4c78(u32 r0, u32 r1) {
    call_006a694c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *global_00957328 = 0;
    guest::cpu()->r[1] = global_00957320_address;
}

}  // namespace d_005b4c78
GUEST_EXPORT_FRAMED(0x005b4c78, d_005b4c78::f_005b4c78, 0x4010);  // pushes {r4, lr} first, as the original

// f_005b4ce8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b4ce8 {

struct __attribute__((packed)) Object_005b4ce8_0 {
    u8 unknown_0[0x60];  // (not used here)
    u32 word_60;
};
GUEST_OFFSET(Object_005b4ce8_0, word_60, 0x60);


void f_005b4ce8(gptr<Object_005b4ce8_0> arg0, u32 r1) {
    *gptr<u32>(arg0.addr() + (arg0->word_60 << 2) + 0x64u) = r1;  // (from the original)
    u32 r1_1 = arg0->word_60 + 1u;
    arg0->word_60 = r1_1;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_005b4ce8
GUEST_EXPORT(0x005b4ce8, d_005b4ce8::f_005b4ce8);

// f_005b4d04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b4d04 {

struct __attribute__((packed)) Object_005b4d04_0 {
    u8 unknown_0[0x24];  // (not used here)
    u8 byte_24;
    u8 unknown_25[0x17];  // (not used here)
    u32 word_3c;
    u8 byte_40;
};
GUEST_OFFSET(Object_005b4d04_0, byte_24, 0x24);
GUEST_OFFSET(Object_005b4d04_0, word_3c, 0x3c);
GUEST_OFFSET(Object_005b4d04_0, byte_40, 0x40);

struct __attribute__((packed)) Local_005b4d04_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_005b4d04_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_005b4d04_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_005b4d04_ea_2, word_8, 0x8);

inline guest::global<u8, 0x00957323> global_00957323;
inline constexpr guest::Function<0x005b5b78, u32(u32, u32, u32, u32)> call_005b5b78;

struct __attribute__((packed)) Frame_005b4d04 {
    u32 word_0;
    u8 unknown_4[0xc];  // (not read or written by name)
    u32 word_10;
    u8 unknown_14[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005b4d04, word_0, 0x0);
GUEST_OFFSET(Frame_005b4d04, word_10, 0x10);
GUEST_SIZE(Frame_005b4d04, 0x18);

u32 f_005b4d04(gptr<Object_005b4d04_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005b4d04> frame;  // the original's stack frame
    u32 r0_1 = *frame.at<u32>(0x20);  // (from the original)
    if (*global_00957323 < 0xa5u) {  // (from the original)
        return 0u;
    }
    frame->word_10 = r0_1;
    gptr<Local_005b4d04_ea_2> ea_2 = gptr<Local_005b4d04_ea_2>(frame.at(4).addr());
    ea_2->word_0 = r1;
    ea_2->word_4 = r2;
    ea_2->word_8 = r3;
    frame->word_0 = arg0->word_3c;
    u32 r1_1 = arg0->byte_24;
    u32 r0_2 = call_005b5b78(arg0.addr(), r1_1, arg0.addr() + 0x28u, arg0.addr() + 0x34u);  // (from the original)
    if (r0_2 == 0) {
        return r0_2;
    }
    arg0->byte_24 = 0xa5;  // (from the original)
    arg0->word_3c = 0;
    arg0->byte_40 = 0;
    guest::cpu()->r[1] = 0xa5u;  // (from the original)
    return 1u;
}

}  // namespace d_005b4d04
GUEST_EXPORT_FRAMED(0x005b4d04, d_005b4d04::f_005b4d04, 0x4010);  // pushes {r4, lr} first, as the original

// f_005b4eb0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b4eb0 {

struct __attribute__((packed)) Object_005b4eb0_0 {
    u8 unknown_0[0x60];  // (not used here)
    u32 word_60;
    u32 word_64;
    u32 word_68;
    u32 word_6c;
    u32 word_70;
};
GUEST_OFFSET(Object_005b4eb0_0, word_60, 0x60);
GUEST_OFFSET(Object_005b4eb0_0, word_64, 0x64);
GUEST_OFFSET(Object_005b4eb0_0, word_68, 0x68);
GUEST_OFFSET(Object_005b4eb0_0, word_6c, 0x6c);
GUEST_OFFSET(Object_005b4eb0_0, word_70, 0x70);

struct __attribute__((packed)) Local_005b4eb0_r1_1 {
    u8 unknown_0[0x60];  // (not used here)
    u32 word_60;
};
GUEST_OFFSET(Local_005b4eb0_r1_1, word_60, 0x60);

struct __attribute__((packed)) Local_005b4eb0_r1_3 {
    u8 unknown_0[0x60];  // (not used here)
    u32 word_60;
};
GUEST_OFFSET(Local_005b4eb0_r1_3, word_60, 0x60);

struct __attribute__((packed)) Local_005b4eb0_r1_5 {
    u8 unknown_0[0x60];  // (not used here)
    u32 word_60;
};
GUEST_OFFSET(Local_005b4eb0_r1_5, word_60, 0x60);

struct __attribute__((packed)) Local_005b4eb0_r1_7 {
    u8 unknown_0[0x60];  // (not used here)
    u32 word_60;
};
GUEST_OFFSET(Local_005b4eb0_r1_7, word_60, 0x60);


void f_005b4eb0(gptr<Object_005b4eb0_0> arg0, u32 r1) {
    u32 r2_1 = ~0u;
    if (arg0->word_64 == r1) {
        gptr<Local_005b4eb0_r1_1> r1_1 = gptr<Local_005b4eb0_r1_1>(arg0.addr() + (arg0->word_60 << 2));
        arg0->word_64 = r1_1->word_60;
        r1_1->word_60 = r2_1;
        u32 r1_2 = arg0->word_60 - 1u;
        arg0->word_60 = r1_2;
        guest::cpu()->r[1] = r1_2;
        return;
    }
    if (arg0->word_68 == r1) {
        gptr<Local_005b4eb0_r1_3> r1_3 = gptr<Local_005b4eb0_r1_3>(arg0.addr() + (arg0->word_60 << 2));
        arg0->word_68 = r1_3->word_60;
        r1_3->word_60 = r2_1;
        u32 r1_4 = arg0->word_60 - 1u;
        arg0->word_60 = r1_4;
        guest::cpu()->r[1] = r1_4;
        return;
    }
    if (arg0->word_6c == r1) {
        gptr<Local_005b4eb0_r1_5> r1_5 = gptr<Local_005b4eb0_r1_5>(arg0.addr() + (arg0->word_60 << 2));
        arg0->word_6c = r1_5->word_60;
        r1_5->word_60 = r2_1;
        u32 r1_6 = arg0->word_60 - 1u;
        arg0->word_60 = r1_6;
        guest::cpu()->r[1] = r1_6;
        return;
    }
    if (arg0->word_70 != r1) {
        guest::cpu()->r[1] = r1;
        return;
    }
    gptr<Local_005b4eb0_r1_7> r1_7 = gptr<Local_005b4eb0_r1_7>(arg0.addr() + (arg0->word_60 << 2));
    arg0->word_70 = r1_7->word_60;
    r1_7->word_60 = r2_1;
    u32 r1_8 = arg0->word_60 - 1u;
    arg0->word_60 = r1_8;
    guest::cpu()->r[1] = r1_8;
}

}  // namespace d_005b4eb0
GUEST_EXPORT(0x005b4eb0, d_005b4eb0::f_005b4eb0);

// f_005b522c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b522c {

struct __attribute__((packed)) Local_005b522c_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005b522c_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_005b522c_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_005b522c_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005b522c_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_005b522c_ea_3, word_4, 0x4);

inline guest::global<u8, 0x00957322> global_00957322;
inline constexpr guest::Function<0x005b6378, u32(u32, u32, u32, u32)> call_005b6378;

struct __attribute__((packed)) Frame_005b522c {
    u32 word_0;
    u8 unknown_4[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005b522c, word_0, 0x0);
GUEST_SIZE(Frame_005b522c, 0xc);

u32 f_005b522c(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005b522c> frame;  // the original's stack frame
    gptr<Local_005b522c_ea_1> ea_1 = gptr<Local_005b522c_ea_1>(frame.at(0x18).addr());  // (from the original)
    u32 r2_1 = ea_1->word_0;
    u32 r12_1 = ea_1->word_4;
    u32 r1_1 = *global_00957322;
    frame->word_0 = r3;
    gptr<Local_005b522c_ea_3> ea_3 = gptr<Local_005b522c_ea_3>(frame.at(4).addr());
    ea_3->word_0 = r2_1;
    ea_3->word_4 = r12_1;
    call_005b6378(guest::cpu()->r[0], r1_1, r1, r2);
    return guest::cpu()->r[0];
}

}  // namespace d_005b522c
GUEST_EXPORT_FRAMED(0x005b522c, d_005b522c::f_005b522c, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_005b5b78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b5b78 {

struct __attribute__((packed)) Object_005b5b78_0 {
    u8 unknown_0[0x44];  // (not used here)
    u8 byte_44;
    u8 unknown_45[0x3];  // (not used here)
    float float_48;
    float float_4c;
    float float_50;
    u16 half_54;
    u16 half_56;
    u16 half_58;
    u8 unknown_5a[0x2];  // (not used here)
    float float_5c;
};
GUEST_OFFSET(Object_005b5b78_0, byte_44, 0x44);
GUEST_OFFSET(Object_005b5b78_0, float_48, 0x48);
GUEST_OFFSET(Object_005b5b78_0, float_4c, 0x4c);
GUEST_OFFSET(Object_005b5b78_0, float_50, 0x50);
GUEST_OFFSET(Object_005b5b78_0, half_54, 0x54);
GUEST_OFFSET(Object_005b5b78_0, half_56, 0x56);
GUEST_OFFSET(Object_005b5b78_0, half_58, 0x58);
GUEST_OFFSET(Object_005b5b78_0, float_5c, 0x5c);

struct __attribute__((packed)) Object_005b5b78_3 {
    u16 half_0;
    u16 half_2;
    u16 half_4;
};
GUEST_OFFSET(Object_005b5b78_3, half_0, 0x0);
GUEST_OFFSET(Object_005b5b78_3, half_2, 0x2);
GUEST_OFFSET(Object_005b5b78_3, half_4, 0x4);

struct __attribute__((packed)) Local_005b5b78_r0_1 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_005b5b78_r0_1, float_0, 0x0);
GUEST_OFFSET(Local_005b5b78_r0_1, float_4, 0x4);

inline guest::global<u8, 0x00957323> global_00957323;
inline constexpr guest::Function<0x005b4d7c, u32(u32, u32, u32, u32)> call_005b4d7c;

struct __attribute__((packed)) Frame_005b5b78 {
    float float_0;
    float float_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005b5b78, float_0, 0x0);
GUEST_OFFSET(Frame_005b5b78, float_4, 0x4);
GUEST_SIZE(Frame_005b5b78, 0xc);

u32 f_005b5b78(gptr<Object_005b5b78_0> arg0, u32 r1_unused, gptr<Float3> arg2, gptr<Object_005b5b78_3> arg3) {
    guest::StackFrameOf<Frame_005b5b78> frame;  // the original's stack frame
    gptr<Local_005b5b78_r0_1> r0_1 = gptr<Local_005b5b78_r0_1>(frame.at(0x24).addr());  // (from the original)
    u32 r5_1 = *frame.at<u32>(0x20);  // (from the original)
    u32 r12_1 = *frame.at<u32>(0x1c);  // (from the original)
    float S0_1 = std::bit_cast<float>(*frame.at<u32>(0x18));  // (from the original)
    float S1_1 = r0_1->float_0;
    float S2_1 = r0_1->float_4;
    if (*global_00957323 < 0xa5u) {  // (from the original)
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return 0u;
    }
    arg0->float_48 = arg2->v[0];
    arg0->float_4c = arg2->v[1];
    arg0->float_50 = arg2->v[2];
    arg0->half_54 = arg3->half_0;
    arg0->half_56 = arg3->half_2;
    arg0->half_58 = arg3->half_4;
    arg0->float_5c = S0_1;
    frame->float_0 = S1_1;
    frame->float_4 = S2_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    u32 r0_2 = call_005b4d7c(arg0.addr(), guest::cpu()->r[1], r12_1, r5_1);
    if (r0_2 == 0) {
        return r0_2;
    }
    arg0->byte_44 = 0;
    return 1u;
}

}  // namespace d_005b5b78
GUEST_EXPORT_FRAMED(0x005b5b78, d_005b5b78::f_005b5b78, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_005b5d38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b5d38 {

struct __attribute__((packed)) Local_005b5d38_ea_1 {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
    float float_10;
    float float_14;
    float float_18;
    float float_1c;
    float float_20;
    float float_24;
    float float_28;
    float float_2c;
};
GUEST_OFFSET(Local_005b5d38_ea_1, float_0, 0x0);
GUEST_OFFSET(Local_005b5d38_ea_1, float_4, 0x4);
GUEST_OFFSET(Local_005b5d38_ea_1, float_8, 0x8);
GUEST_OFFSET(Local_005b5d38_ea_1, float_c, 0xc);
GUEST_OFFSET(Local_005b5d38_ea_1, float_10, 0x10);
GUEST_OFFSET(Local_005b5d38_ea_1, float_14, 0x14);
GUEST_OFFSET(Local_005b5d38_ea_1, float_18, 0x18);
GUEST_OFFSET(Local_005b5d38_ea_1, float_1c, 0x1c);
GUEST_OFFSET(Local_005b5d38_ea_1, float_20, 0x20);
GUEST_OFFSET(Local_005b5d38_ea_1, float_24, 0x24);
GUEST_OFFSET(Local_005b5d38_ea_1, float_28, 0x28);
GUEST_OFFSET(Local_005b5d38_ea_1, float_2c, 0x2c);

struct __attribute__((packed)) Local_005b5d38_r12_1 {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
    float float_10;
    float float_14;
    float float_18;
    float float_1c;
    float float_20;
    float float_24;
    float float_28;
    float float_2c;
};
GUEST_OFFSET(Local_005b5d38_r12_1, float_0, 0x0);
GUEST_OFFSET(Local_005b5d38_r12_1, float_4, 0x4);
GUEST_OFFSET(Local_005b5d38_r12_1, float_8, 0x8);
GUEST_OFFSET(Local_005b5d38_r12_1, float_c, 0xc);
GUEST_OFFSET(Local_005b5d38_r12_1, float_10, 0x10);
GUEST_OFFSET(Local_005b5d38_r12_1, float_14, 0x14);
GUEST_OFFSET(Local_005b5d38_r12_1, float_18, 0x18);
GUEST_OFFSET(Local_005b5d38_r12_1, float_1c, 0x1c);
GUEST_OFFSET(Local_005b5d38_r12_1, float_20, 0x20);
GUEST_OFFSET(Local_005b5d38_r12_1, float_24, 0x24);
GUEST_OFFSET(Local_005b5d38_r12_1, float_28, 0x28);
GUEST_OFFSET(Local_005b5d38_r12_1, float_2c, 0x2c);

inline constexpr guest::Function<0x005b5d60, u32(u32, u32, u32, u32)> call_005b5d60;

struct __attribute__((packed)) Frame_005b5d38 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x34];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005b5d38, word_0, 0x0);
GUEST_OFFSET(Frame_005b5d38, word_4, 0x4);
GUEST_SIZE(Frame_005b5d38, 0x3c);

u32 f_005b5d38(u32 r0_unused, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005b5d38> frame;  // the original's stack frame
    gptr<Local_005b5d38_r12_1> r12_1 = gptr<Local_005b5d38_r12_1>(frame.at(0x40).addr());  // (from the original)
    float S0_1 = r12_1->float_0;
    float S1_1 = r12_1->float_4;
    float S2_1 = r12_1->float_8;
    float S3_1 = r12_1->float_c;
    float S4_1 = r12_1->float_10;
    float S5_1 = r12_1->float_14;
    float S6_1 = r12_1->float_18;
    float S7_1 = r12_1->float_1c;
    float S8_1 = r12_1->float_20;
    float S9_1 = r12_1->float_24;
    float S10_1 = r12_1->float_28;
    float S11_1 = r12_1->float_2c;
    gptr<Local_005b5d38_ea_1> ea_1 = gptr<Local_005b5d38_ea_1>(frame.at(8).addr());
    ea_1->float_0 = S0_1;
    ea_1->float_4 = S1_1;
    ea_1->float_8 = S2_1;
    ea_1->float_c = S3_1;
    ea_1->float_10 = S4_1;
    ea_1->float_14 = S5_1;
    ea_1->float_18 = S6_1;
    ea_1->float_1c = S7_1;
    ea_1->float_20 = S8_1;
    ea_1->float_24 = S9_1;
    ea_1->float_28 = S10_1;
    ea_1->float_2c = S11_1;
    frame->word_0 = r2;
    frame->word_4 = r3;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    call_005b5d60(guest::cpu()->r[0], guest::cpu()->r[1], r2, r3);
    return guest::cpu()->r[0];
}

}  // namespace d_005b5d38
GUEST_EXPORT_FRAMED(0x005b5d38, d_005b5d38::f_005b5d38, 0x4000);  // pushes {lr} first, as the original

// f_005b6a10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b6a10 {

inline constexpr guest::Function<0x0027ab40, u32(u32)> is_local_slot;
inline constexpr guest::Function<0x002ff8b0, u32(u32, u32, u32, u32)> slot_value;

u32 f_005b6a10(u32 r0, u32 r1, u32 r2) {
    u32 r4 = r0;
    u32 r0_1 = slot_value(4u, r1, r2, guest::cpu()->r[3]);
    u32 r0_2 = is_local_slot(r0_1);
    r1 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        r0 = 0u;
        r1 = r0_1 * 6u + 0x889c80u;  // (from the original)
        do {
            if (*gptr<u8>(r1 + r0) == r4 || *gptr<u8>(r1 + r0 + 1u) == r4) {
                guest::cpu()->r[1] = r1;
                return 1u;
            }
            r0 += 2u;
            guest::preempt();
        } while (s32(r0) < 6);
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_005b6a10
GUEST_EXPORT_FRAMED(0x005b6a10, d_005b6a10::f_005b6a10, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005b7418: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b7418 {

struct __attribute__((packed)) Object_005b7418_0 {
    u8 unknown_0[0x19764];  // (not used here)
    u8 byte_19764;
};
GUEST_OFFSET(Object_005b7418_0, byte_19764, 0x19764);


void f_005b7418(gptr<Object_005b7418_0> arg0, u32 r1) {
    arg0->byte_19764 = u8(r1);
}

}  // namespace d_005b7418
GUEST_EXPORT(0x005b7418, d_005b7418::f_005b7418);

// f_005b769c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b769c {

struct __attribute__((packed)) Object_005b769c_0 {
    u8 unknown_0[0x2510];  // (not used here)
    u32 word_2510;
};
GUEST_OFFSET(Object_005b769c_0, word_2510, 0x2510);


void f_005b769c(gptr<Object_005b769c_0> arg0, u32 r1) {
    u32 r2_1 = arg0->word_2510;
    if (s32(r1) < 0) {
        r1 = 1u;
    }
    arg0->word_2510 = s32(r1 + (r2_1 >> 0xbu & 7u)) < 7 ? ror32(ror32(r2_1, 0xe) + (r1 << 0x1d), 0x12) : r2_1 | 0x3800u;  // (from the original)
}

}  // namespace d_005b769c
GUEST_EXPORT(0x005b769c, d_005b769c::f_005b769c);

// f_005b8188: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b8188 {

struct __attribute__((packed)) Object_005b8188_0 {
    u8 unknown_0[0x2510];  // (not used here)
    u32 word_2510;
};
GUEST_OFFSET(Object_005b8188_0, word_2510, 0x2510);


void f_005b8188(gptr<Object_005b8188_0> arg0) {
    arg0->word_2510 = arg0->word_2510 & ~0x600u;  // (from the original)
}

}  // namespace d_005b8188
GUEST_EXPORT(0x005b8188, d_005b8188::f_005b8188);

// f_005b81b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b81b8 {

struct __attribute__((packed)) Object_005b81b8_0 {
    u8 unknown_0[0x2510];  // (not used here)
    u32 word_2510;
};
GUEST_OFFSET(Object_005b81b8_0, word_2510, 0x2510);


void f_005b81b8(gptr<Object_005b81b8_0> arg0, u32 r1) {
    u32 zf_1 = r1 == 0;
    u32 r1_1 = arg0->word_2510;
    arg0->word_2510 = zf_1 ? r1_1 & ~0x8000u : r1_1 | 0x8000u;  // (from the original)
}

}  // namespace d_005b81b8
GUEST_EXPORT(0x005b81b8, d_005b81b8::f_005b81b8);

// f_005b81fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b81fc {

struct __attribute__((packed)) Object_005b81fc_0 {
    u8 unknown_0[0x2510];  // (not used here)
    u32 word_2510;
};
GUEST_OFFSET(Object_005b81fc_0, word_2510, 0x2510);


void f_005b81fc(gptr<Object_005b81fc_0> arg0) {
    u32 r1_1 = arg0->word_2510 & ~0x78u;  // (from the original)
    arg0->word_2510 = r1_1;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_005b81fc
GUEST_EXPORT(0x005b81fc, d_005b81fc::f_005b81fc);

// f_005b96a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b96a8 {

struct __attribute__((packed)) Local_005b96a8_r0_4 {
    u8 unknown_0[0x2c];  // (not used here)
    u16 half_2c;
};
GUEST_OFFSET(Local_005b96a8_r0_4, half_2c, 0x2c);

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x00118c9d, u32(u32, u32)> index_of_villager_in_town;
inline constexpr guest::Function<0x002f77e8, u32(u32)> same_pointer;
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> get_data_base;
inline constexpr guest::Function<0x002fb310, u32(u32)> slot_records_of;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> copy_item_002fc934;
inline constexpr guest::Function<0x002ff368, u32(u32)> call_002ff368;
inline constexpr guest::Function<0x003058c9, u32(u32, u32)> valid_villager_at;
inline constexpr guest::Function<0x0030d1bc, u32(u32, u32, u32, u32)> sead__FixedSafeString_32___FixedSafeString_0030d1bc;
inline constexpr guest::Function<0x0030da05, u32(u32, u32, u32, u32)> call_0030da04;
inline constexpr guest::Function<0x0030dad8, u32(u32, u32, u32, u32)> call_0030dad8;
inline constexpr guest::Function<0x0030dc84, u32(u32, u32)> find_player_by_identity;

struct __attribute__((packed)) Frame_005b96a8 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x284];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005b96a8, word_0, 0x0);
GUEST_OFFSET(Frame_005b96a8, word_4, 0x4);
GUEST_SIZE(Frame_005b96a8, 0x28c);

void f_005b96a8(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005b96a8> frame;  // the original's stack frame
    u32 r0_1 = get_data_base(r0, r1, r2, r3);
    u32 r0_2 = slot_records_of(r0_1);
    u32 r4_1 = r0_2 + 4u;
    u32 r0_3 = index_of_villager_in_town(r4_1, r0 + 0xcu);  // (from the original)
    gptr<Local_005b96a8_r0_4> r0_4 = gptr<Local_005b96a8_r0_4>(valid_villager_at(r4_1, r0_3));
    if (r0_4.addr() != 0) {
        call_002ff368(frame.at(8).addr());
        frame->word_0 = copy_item_002fc934(frame.at(0x288).addr(), empty_item_address);  // (from the original)
        frame->word_4 = ~0u;
        u32 r1_4 = r0_4->half_2c;
        sead__FixedSafeString_32___FixedSafeString_0030d1bc(frame.at(8).addr(), r1_4, r1, 0u);
        frame->word_0 = 0;
        frame->word_4 = 0;
        u32 r0_8 = call_0030da04(r0_4.addr(), frame.at(8).addr(), r1, 6u);
        if (r0_8 == 0) {
            u32 r0_9 = get_data_base(r0_8, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            r0_8 = find_player_by_identity(r0_9 + 0x20u, r1);  // (from the original)
            if (r0_8 != 0) {
                frame->word_0 = 0;
                u32 r2_8 = r0_4->half_2c;
                r0_8 += 0x8ebeu;  // (from the original)
                call_0030dad8(r0_8, 0u, r2_8, 0u);
            }
        }
        same_pointer(r0_8);
    }
    *gptr<u8>(r0 + 9u) = 9;
}

}  // namespace d_005b96a8
GUEST_EXPORT_FRAMED(0x005b96a8, d_005b96a8::f_005b96a8, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_005b9ee0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005b9ee0 {

struct __attribute__((packed)) Local_005b9ee0_r0_12 {
    u8 unknown_0[0x272];  // (not used here)
    u8 byte_272;
};
GUEST_OFFSET(Local_005b9ee0_r0_12, byte_272, 0x272);

inline constexpr guest::Function<0x0010cadd, u32(u32, u32, u32, u32)> call_0010cadc;
inline constexpr guest::Function<0x00112f9d, u32(u32, u32, u32, u32)> call_00112f9c;
inline constexpr guest::Function<0x002c002c, u32(u32, u32, u32, u32)> small_record_address_002c002c;
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> get_data_base;
inline constexpr guest::Function<0x002fb310, u32(u32)> slot_records_of;
inline constexpr guest::Function<0x002fb328, u32(u32)> get_save_data;
inline constexpr guest::Function<0x002fb7e8, u32(u32, u32)> player_at;
inline constexpr guest::Function<0x005ba098, u32(u32, u32, u32, u32)> call_005ba098;
inline constexpr guest::Function<0x0071dcdc, u32(u32, u32, u32, u32)> small_record_address_0071dcdc;
inline constexpr guest::Function<0x00756758, u32(u32, u32)> call_00756758;

u32 f_005b9ee0(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r0_11 = 0;
    u32 r5 = r0;
    u32 r4 = ~0u;
    u32 r0_1 = get_data_base(r0, r1, r2, r3);
    u32 r0_2 = slot_records_of(r0_1);
    r3 = guest::cpu()->r[3];
    u32 r6 = r0_2 + 4u;
    r1 = r0_2 + 0x1744cu;  // (from the original)
    r0 = 0u;
L_5b9f04:;
    u32 r2_2 = r1 + (r0 << 7);
    u32 zf_1 = r2_2 == r5;
    if (!zf_1) {
        r3 = r2_2 + 0x40u;  // (from the original)
        zf_1 = r3 == r5;
    }
    if (zf_1) {
        r4 = r0;
    } else {
        r0 += 1u;
        if (s32(r0) < 4) {
            guest::preempt();
            goto L_5b9f04;
        }
    }
    u32 r0_3 = get_data_base(r0, r1, r2_2, r3);
    u32 r0_5 = player_at(r0_3 + 0x20u, r4 & 0xffu);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_5 == 0) {
        frame.release();
        return call_005ba098(r5, r1, r2, r3);
    }
    u32 r0_6 = call_0010cadc(r6, r5 + 0xcu, r2, r3);  // (from the original)
    if (r0_6 != 0) {
        r0_6 = call_00112f9c(r0_6, ~3u, r0_5, 1u);
    }
    u32 r0_7 = get_save_data(r0_6);
    u32 r0_9 = call_00756758(r0_7 + 0x406ecu, r5);  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 r7 = r0_9;
    r6 = r0_5 + 0x7008u;  // (from the original)
    r4 = 0u;
L_5b9fa4:;
    u32 r0_10 = small_record_address_0071dcdc(r6, r4, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_10 == 0) {
        goto L_5ba01c;
    }
    r0_11 = *gptr<u8>(r0_10 + 0x272u);  // (from the original)
    if ((r0_11 & 0x80u) == 0 || (r0_11 & 0x20u) != 0 || (r0_11 & 7u) != r7) {  // (from the original)
        goto L_5ba01c;
    }
    r1 = r4;
    if (r4 + 1u != 0) {
        gptr<Local_005b9ee0_r0_12> r0_12 = gptr<Local_005b9ee0_r0_12>(small_record_address_002c002c(r6, r1, r2, r3));
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_12.addr() != 0) {
            r1 = r0_12->byte_272;
            if ((r1 & 0x80u) != 0) {  // (from the original)
                r1 |= 0x28u;  // (from the original)
                r0_12->byte_272 = u8(r1);
            }
        }
    }
    frame.release();
    return call_005ba098(r5, r1, r2, r3);
L_5ba01c:;
    r4 += 1u;
    if (r4 >= 0xau) {  // (from the original)
        frame.release();
        return call_005ba098(r5, r1, r2, r3);
    }
    guest::preempt();
    goto L_5b9fa4;
}

}  // namespace d_005b9ee0
GUEST_EXPORT(0x005b9ee0, d_005b9ee0::f_005b9ee0);

// f_005ba234: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ba234 {

struct __attribute__((packed)) Object_005ba234_0 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
    u8 byte_9;
    u8 byte_a;
    u8 unknown_b[0x33];  // (not used here)
    u8 byte_3e;
};
GUEST_OFFSET(Object_005ba234_0, byte_8, 0x8);
GUEST_OFFSET(Object_005ba234_0, byte_9, 0x9);
GUEST_OFFSET(Object_005ba234_0, byte_a, 0xa);
GUEST_OFFSET(Object_005ba234_0, byte_3e, 0x3e);

struct __attribute__((packed)) Object_005ba234_1 {
    u8 unknown_0[0x1028];  // (not used here)
    u32 word_1028;
};
GUEST_OFFSET(Object_005ba234_1, word_1028, 0x1028);

struct __attribute__((packed)) Local_005ba234_r0_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_005ba234_r0_2, word_0, 0x0);
GUEST_OFFSET(Local_005ba234_r0_2, word_4, 0x4);
GUEST_OFFSET(Local_005ba234_r0_2, word_8, 0x8);

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32)> copy_bytes_at_any_alignment;
inline constexpr guest::Function<0x002fb378, u32(u32)> return_constant_0xad56b0_;
inline constexpr guest::Function<0x002ff6f4, u32(u32)> roll_2ff6f4;
inline constexpr guest::Function<0x00308efc, u32(u32, u32, u32)> TimeStamp__move_to_day_start;
inline constexpr guest::Function<0x005ba098, u32(u32, u32, u32, u32)> call_005ba098;
inline constexpr guest::Function<0x005cddb4, u32(u32, u32, u32)> GameTime__set_time_stamp;

struct __attribute__((packed)) Frame_005ba234 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005ba234, word_0, 0x0);
GUEST_OFFSET(Frame_005ba234, word_4, 0x4);
GUEST_OFFSET(Frame_005ba234, word_8, 0x8);
GUEST_SIZE(Frame_005ba234, 0x10);

void f_005ba234(gptr<Object_005ba234_0> arg0, gptr<Object_005ba234_1> arg1, u32 r2) {
    guest::StackFrameOf<Frame_005ba234> frame;  // the original's stack frame
    u32 r0_1 = call_005ba098(arg0.addr(), arg1.addr(), r2, guest::cpu()->r[3]);
    gptr<Local_005ba234_r0_2> r0_2 = gptr<Local_005ba234_r0_2>(return_constant_0xad56b0_(r0_1));
    u32 r1_2 = r0_2->word_0;
    u32 r2_2 = r0_2->word_4;
    frame->word_8 = r0_2->word_8;
    frame->word_0 = r1_2;
    frame->word_4 = r2_2;
    TimeStamp__move_to_day_start(frame.at(0).addr(), r1_2, r2_2);
    arg0->byte_8 = 3;
    arg0->byte_9 = 0;
    GameTime__set_time_stamp(arg0.addr(), frame.at(0).addr(), 3u);
    arg0->byte_a = 7;
    copy_bytes_at_any_alignment(arg0.addr() + 0xcu, arg1->word_1028, 0x2fu);  // (from the original)
    u32 r0_5 = roll_2ff6f4(3u);
    if (r0_5 == 0) {
        arg0->byte_3e = 0xe;  // (from the original)
    } else {
        arg0->byte_3e = u8(r0_5 == 1u ? 0x15u : 0x1eu);  // (from the original)
    }
}

}  // namespace d_005ba234
GUEST_EXPORT_FRAMED(0x005ba234, d_005ba234::f_005ba234, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005ba980: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ba980 {

struct __attribute__((packed)) Object_005ba980_0 {
    u8 unknown_0[0x9];  // (not used here)
    u8 byte_9;
};
GUEST_OFFSET(Object_005ba980_0, byte_9, 0x9);


void f_005ba980(gptr<Object_005ba980_0> arg0) {
    u32 r1_1 = arg0->byte_9;
    if (r1_1 == 4u) {
        r1_1 = 5u;
        arg0->byte_9 = u8(r1_1);
    }
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_005ba980
GUEST_EXPORT(0x005ba980, d_005ba980::f_005ba980);

// f_005bb220: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bb220 {

inline constexpr guest::Function<0x005ba098, u32(u32, u32, u32, u32)> call_005ba098;

void f_005bb220(u32 r0, u32 r1) {
    u32 r4 = 0u;
    u32 r5 = r0 + (r1 << 7);
    do {
        call_005ba098(r5 + (r4 << 6), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 2);
}

}  // namespace d_005bb220
GUEST_EXPORT_FRAMED(0x005bb220, d_005bb220::f_005bb220, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005bb244: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bb244 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x00309fbc, u32(u32, u32)> player_index_in;

u32 f_005bb244(u32 r0, u32 r1, u32 r2) {
    u32 r4_1 = r0;
    u32 r0_1 = get_save_data(r0, r1, r2, guest::cpu()->r[3]);
    u32 r0_3 = player_index_in(r0_1 + 0xa0u, r1);  // (from the original)
    if (!(r0_3 >= 4u)) {
        r0 = 0u;
        r1 = r4_1 + (r0_3 << 7);
        do {
            if (*gptr<u8>(r1 + (r0 << 6) + 8u) >= 0x21u) {  // (from the original)
                return r1 + (r0 << 6);
            }
            r0 += 1u;
            guest::preempt();
        } while (s32(r0) < 2);
    }
    return 0u;
}

}  // namespace d_005bb244
GUEST_EXPORT_FRAMED(0x005bb244, d_005bb244::f_005bb244, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005bb39c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bb39c {

struct __attribute__((packed)) Local_005bb39c_r0_2 {
    u8 unknown_0[0x272];  // (not used here)
    u8 byte_272;
};
GUEST_OFFSET(Local_005bb39c_r0_2, byte_272, 0x272);

struct __attribute__((packed)) Local_005bb39c_r0_6 {
    u8 unknown_0[0x3c];  // (not used here)
    u8 byte_3c;
    u8 byte_3d;
};
GUEST_OFFSET(Local_005bb39c_r0_6, byte_3c, 0x3c);
GUEST_OFFSET(Local_005bb39c_r0_6, byte_3d, 0x3d);

inline constexpr guest::Function<0x002c002c, u32(u32, u32)> small_record_address_002c002c;
inline constexpr guest::Function<0x002c003c, u32(u32, u32, u32, u32)> call_002c003c;
inline constexpr guest::Function<0x002fae84, u32(u32)> get_data_base;
inline constexpr guest::Function<0x002fb310, u32(u32)> slot_records_of;
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> get_current_player;

void f_005bb39c(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r0_1 = get_current_player(r0, r1, r2, guest::cpu()->r[3]);
    if (r0_1 != 0) {
        u32 r7_1 = r0_1 + 0x7008u;  // (from the original)
        gptr<Local_005bb39c_r0_2> r0_2 = gptr<Local_005bb39c_r0_2>(small_record_address_002c002c(r7_1, r0));
        if (r0_2.addr() != 0) {
            u32 r0_3 = r0_2->byte_272;
            if ((r0_3 & 0x80u) != 0) {  // (from the original)
                u32 r0_4 = get_data_base(r0_3);
                u32 r0_5 = slot_records_of(r0_4);
                u32 r2_4 = guest::cpu()->r[2];
                gptr<Local_005bb39c_r0_6> r0_6 = gptr<Local_005bb39c_r0_6>(r0_5 + 0x1744cu);  // (from the original)
                u32 r1_3 = u32(r0_2->byte_272) & 7u;
                if (r1_3 < 8u) {
                    r2_4 = r1_3 >> 1;
                    r0_6 = gptr<Local_005bb39c_r0_6>(r0_6.addr() + (r2_4 << 7) + ((r1_3 & 1u) << 6));
                }
                r0_6->byte_3c = u8(r1);
                r0_6->byte_3d = u8(r2);
                frame.release();
                call_002c003c(r7_1, r1_3, r2_4, guest::cpu()->r[3]);
                return;
            }
        }
    }
}

}  // namespace d_005bb39c
GUEST_EXPORT(0x005bb39c, d_005bb39c::f_005bb39c);

// f_005bb42c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bb42c {

struct __attribute__((packed)) Object_005bb42c_0 {
    u8 unknown_0[0x272];  // (not used here)
    u8 byte_272;
};
GUEST_OFFSET(Object_005bb42c_0, byte_272, 0x272);

struct __attribute__((packed)) Local_005bb42c_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_005bb42c_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_005bb42c_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_005bb42c_ea_1, word_8, 0x8);

struct __attribute__((packed)) Local_005bb42c_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005bb42c_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_005bb42c_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_005bb42c_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005bb42c_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_005bb42c_ea_3, word_4, 0x4);

struct __attribute__((packed)) Local_005bb42c_r0_8 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_005bb42c_r0_8, word_0, 0x0);
GUEST_OFFSET(Local_005bb42c_r0_8, word_4, 0x4);
GUEST_OFFSET(Local_005bb42c_r0_8, word_8, 0x8);

struct __attribute__((packed)) Local_005bb42c_r3_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_005bb42c_r3_2, word_0, 0x0);
GUEST_OFFSET(Local_005bb42c_r3_2, word_4, 0x4);
GUEST_OFFSET(Local_005bb42c_r3_2, word_8, 0x8);

inline constexpr u32 global_00aaef18_address = 0x00aaef18u;
inline constexpr u32 global_00aaf14c_address = 0x00aaf14cu;
inline guest::global<u32, 0x00aaf14c> global_00aaf14c;
inline constexpr guest::Function<0x0010cadd, u32(u32, u32)> call_0010cadc;
inline constexpr guest::Function<0x00112f9d, u32(u32, u32, u32, u32)> call_00112f9c;
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> get_data_base;
inline constexpr guest::Function<0x002fb310, u32(u32)> slot_records_of;
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x002fb378, u32(u32)> return_constant_0xad56b0_;
inline constexpr guest::Function<0x002fb430, u32(u32, u32, u32, u32)> make_adjusted_words;
inline constexpr guest::Function<0x002fd41c, u32(u32, u32, u32, u32)> call_002fd41c;
inline constexpr guest::Function<0x003014b4, u32(u32, u32, u32, u32)> TimeStamp__add_days;
inline constexpr guest::Function<0x00309fbc, u32(u32, u32)> player_index_in;
inline constexpr guest::Function<0x005ba098, u32(u32, u32, u32, u32)> call_005ba098;

struct __attribute__((packed)) Frame_005bb42c {
    u8 unknown_0[0x8];  // (not read or written by name)
    u32 word_8;
    u8 unknown_c[0x2c];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005bb42c, word_8, 0x8);
GUEST_SIZE(Frame_005bb42c, 0x38);

void f_005bb42c(gptr<Object_005bb42c_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005bb42c> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r0_1 = arg0->byte_272;
    if ((r0_1 & 0x20u) == 0) {  // (from the original)
        u32 r0_2 = get_data_base(r0_1, r1, r2, r3);
        u32 r0_3 = slot_records_of(r0_2);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = arg0->byte_272;
        u32 r7 = r0_3 + 4u;
        u32 r6 = r0_3 + 0x1744cu;  // (from the original)
        u32 r0_4 = r1 & 7u;
        u32 r4 = r6;
        if (r0_4 < 8u) {
            r2 = r6 + (r0_4 >> 1 << 7);
            r4 = r2 + ((r0_4 & 1u) << 6);
        }
        if ((r1 & 8u) == 0 || (r1 & 0x20u) == 0) {  // (from the original)
            u32 r0_5 = *gptr<u8>(r4 + 9u);
            if (s32(r0_5) < 3 || s32(r0_5) >= 9) {
                guest::cpu()->r[1] = r1;
                return;
            }
            if (s32(r0_5) < 4) {
                make_adjusted_words(frame.at(0x14).addr(), r4, r2, r3);  // (from the original)
                gptr<Local_005bb42c_ea_1> ea_1 = gptr<Local_005bb42c_ea_1>(frame.at(0x14).addr());  // (from the original)
                u32 r1_2 = ea_1->word_4;
                u32 r2_2 = ea_1->word_8;
                gptr<Local_005bb42c_r3_2> r3_2 = gptr<Local_005bb42c_r3_2>(frame.at(8).addr());
                r3_2->word_0 = ea_1->word_0;
                r3_2->word_4 = r1_2;
                r3_2->word_8 = r2_2;
                u32 r0_7 = frame.at(8).addr();
                u32 r1_3 = *gptr<s8>(r4 + 0x3eu);  // (from the original)
                TimeStamp__add_days(r0_7, r1_3, r2_2, r3_2.addr());
                gptr<Local_005bb42c_r0_8> r0_8 = gptr<Local_005bb42c_r0_8>(return_constant_0xad56b0_(r0_7));
                gptr<Local_005bb42c_ea_2> ea_2 = gptr<Local_005bb42c_ea_2>(frame.at(0xc).addr());  // (from the original)
                u32 r1_5 = ea_2->word_0;
                u32 r2_4 = ea_2->word_4;
                gptr<Local_005bb42c_ea_3> ea_3 = gptr<Local_005bb42c_ea_3>(frame.at(0).addr());
                ea_3->word_0 = r1_5;
                ea_3->word_4 = r2_4;
                u32 r0_10 = call_002fd41c(r0_8->word_0, r0_8->word_4, r0_8->word_8, frame->word_8);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_10 == 0) {
                    return;
                }
            }
        }
        u32 r5 = ~0u;
        r0 = 0u;
L_5bb504:;
        u32 r1_7 = r6 + (r0 << 7);
        u32 zf_1 = r1_7 == r4;
        if (!zf_1) {
            r2 = r1_7 + 0x40u;  // (from the original)
            zf_1 = r2 == r4;
        }
        if (zf_1) {
            r5 = r0;
        } else {
            r0 += 1u;
            if (s32(r0) < 4) {
                guest::preempt();
                goto L_5bb504;
            }
        }
        u32 r6_1 = *global_00aaf14c;
        u32 r0_11 = get_save_data(global_00aaef18_address, r1_7, r2, r3);
        u32 r0_13 = player_index_in(r0_11 + 0xa0u, r6_1);  // (from the original)
        if (r0_13 == r5) {
            u32 r0_14 = call_0010cadc(r7, r4 + 0xcu);  // (from the original)
            if (r0_14 != 0) {
                call_00112f9c(r0_14, ~3u, 0u, 1u);
            }
        }
        frame.release();
        call_005ba098(r4, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        return;
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_005bb42c
GUEST_EXPORT(0x005bb42c, d_005bb42c::f_005bb42c);

// f_005bb66c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bb66c {

struct __attribute__((packed)) Object_005bb66c_1 {
    u8 unknown_0[0x272];  // (not used here)
    u8 byte_272;
};
GUEST_OFFSET(Object_005bb66c_1, byte_272, 0x272);

inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> construct_item;
inline constexpr guest::Function<0x006bacd8, u32(u32, u32)> call_006bacd8;

void f_005bb66c(u32 r0_unused, gptr<Object_005bb66c_1> arg1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    construct_item(guest::cpu()->r[0], 0x341cu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r1_1 = u32(arg1->byte_272) & 7u;
    frame.release();
    call_006bacd8(guest::cpu()->r[0], r1_1);
    return;
}

}  // namespace d_005bb66c
GUEST_EXPORT(0x005bb66c, d_005bb66c::f_005bb66c);

// f_005bb690: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bb690 {

struct __attribute__((packed)) Local_005bb690_r4_1 {
    u8 unknown_0[0x9];  // (not used here)
    u8 byte_9;
    u8 unknown_a[0x32];  // (not used here)
    u8 byte_3c;
    u8 byte_3d;
};
GUEST_OFFSET(Local_005bb690_r4_1, byte_9, 0x9);
GUEST_OFFSET(Local_005bb690_r4_1, byte_3c, 0x3c);
GUEST_OFFSET(Local_005bb690_r4_1, byte_3d, 0x3d);

inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> get_data_base;
inline constexpr guest::Function<0x002fb310, u32(u32)> slot_records_of;
inline constexpr guest::Function<0x002fb94c, u32(u32)> get_current_player;
inline constexpr guest::Function<0x002fcb84, u32(u32, u32)> Item__has_number;
inline constexpr guest::Function<0x005b99b8, u32(u32, u32)> sead__FixedSafeString_32___FixedSafeString_005b99b8;
inline constexpr guest::Function<0x0071dc9c, u32(u32)> first_clear_entry_of_10;
inline constexpr guest::Function<0x0076ad64, u32(u32)> call_0076ad64;

void f_005bb690(u32 r0, u32 r1) {
    u32 r0_1 = get_data_base(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_2 = slot_records_of(r0_1);
    gptr<Local_005bb690_r4_1> r4_1 = gptr<Local_005bb690_r4_1>(r0_2 + 0x1744cu);  // (from the original)
    u32 r0_3 = Item__has_number(r0, 0x341cu);  // (from the original)
    if (r0_3 != 0) {
        u32 r0_4 = get_current_player(r0_3);
        if (r0_4 != 0) {
            u32 r0_6 = first_clear_entry_of_10(r0_4 + 0x7008u);  // (from the original)
            if (s32(r0_6) >= 0) {
                u32 r0_7 = call_0076ad64(r0);
                if (r0_7 < 8u) {
                    r4_1 = gptr<Local_005bb690_r4_1>(r4_1.addr() + (r0_7 >> 1 << 7) + ((r0_7 & 1u) << 6));
                }
                sead__FixedSafeString_32___FixedSafeString_005b99b8(r4_1.addr(), r0_4);
                u32 r0_8 = r4_1->byte_9;
                if (r0_8 == 6u) {
                    r4_1->byte_9 = 0xa;  // (from the original)
                } else {
                    u32 r0_9 = ~0u;
                    r4_1->byte_3c = u8(r0_9);
                    r4_1->byte_3d = u8(r0_9);
                }
                return;
            }
        }
    }
}

}  // namespace d_005bb690
GUEST_EXPORT_FRAMED(0x005bb690, d_005bb690::f_005bb690, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_005bb744: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bb744 {

inline constexpr guest::Function<0x005cddb4, u32(u32, u32)> GameTime__set_time_stamp;

u32 f_005bb744() {
    return GameTime__set_time_stamp(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_005bb744
GUEST_EXPORT(0x005bb744, d_005bb744::f_005bb744);

// f_005bb748: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bb748 {

struct __attribute__((packed)) Local_005bb748_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005bb748_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_005bb748_ea_1, word_4, 0x4);

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x002ff6f4, u32(u32, u32, u32, u32)> roll_2ff6f4;
inline constexpr guest::Function<0x003009a9, u32(u32, u32, u32, u32)> villager_record_at;
inline constexpr guest::Function<0x0030e80d, u32(u32, u32, u32, u32)> call_0030e80c;

struct __attribute__((packed)) Frame_005bb748 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x28];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005bb748, word_0, 0x0);
GUEST_OFFSET(Frame_005bb748, word_4, 0x4);
GUEST_OFFSET(Frame_005bb748, word_8, 0x8);
GUEST_SIZE(Frame_005bb748, 0x34);

u32 f_005bb748(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005bb748> frame;  // the original's stack frame
    u32 r6 = 0u;
    u32 r7 = ~0u;
    u32 r0_1 = get_save_data(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 r4 = 0u;
    u32 r8 = r0_1 + 0x292a4u;  // (from the original)
    u32 r9 = r4;
    u32 r10 = 1u;
    do {
        u32 r0_2 = villager_record_at(r8, r4, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        u32 r5 = r0_2;
        if (r0_2 != 0 && *gptr<u8>(r5 + 0x250eu) == 0) {  // (from the original)
            frame->word_4 = r9;
            frame->word_0 = r10;
            frame->word_8 = r9;
            call_0030e80c(frame.at(0x20).addr(), r8, r5, 2u);  // (from the original)
            r3 = 1u;
            gptr<Local_005bb748_ea_1> ea_1 = gptr<Local_005bb748_ea_1>(frame.at(0x20).addr());  // (from the original)
            u32 r2_1 = ea_1->word_4;
            r1 = frame.at(0x10).addr();  // (from the original)
            *gptr<u32>(r1) = ea_1->word_0;
            *gptr<u32>(r1 + 4) = r2_1;
            r2 = 0u;
            r0 = r2;
L_5bb7e0:;
            u32 r11_1 = *gptr<u8>(r1 + (r0 >> 3));
            if ((r11_1 >> (r0 & 7u) & 1u) == r3) {
                r2 += 1u;
            }
L_5bb7f8:;
            r0 += 1u;
            u32 cf_1 = r0 >= 0x21u;  // (from the original)
            if (!cf_1) {
                if (cf_1) {
                    guest::preempt();
                    goto L_5bb7f8;
                }
                guest::preempt();
                goto L_5bb7e0;
            }
            if (r2 == 0) {
                if (*gptr<u8>(r5 + 0x250fu) == 0) {  // (from the original)
                    r6 += 1u;
                    u32 r0_4 = roll_2ff6f4(r6, r1, r2, r3);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    if (r0_4 == 0) {
                        r7 = r4;
                    }
                }
            }
        }
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 0xa);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r7;
}

}  // namespace d_005bb748
GUEST_EXPORT_FRAMED(0x005bb748, d_005bb748::f_005bb748, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_005bb9f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bb9f0 {

struct __attribute__((packed)) Object_005bb9f0_0 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
    u8 byte_9;
    u8 byte_a;
    u8 byte_b;
    u8 byte_c;
};
GUEST_OFFSET(Object_005bb9f0_0, byte_8, 0x8);
GUEST_OFFSET(Object_005bb9f0_0, byte_9, 0x9);
GUEST_OFFSET(Object_005bb9f0_0, byte_a, 0xa);
GUEST_OFFSET(Object_005bb9f0_0, byte_b, 0xb);
GUEST_OFFSET(Object_005bb9f0_0, byte_c, 0xc);

inline constexpr guest::Function<0x00303cdc, u32(u32)> clear_inner;
inline constexpr guest::Function<0x005cdf48, u32(u32, u32, u32, u32)> game_time_set;

u32 f_005bb9f0(gptr<Object_005bb9f0_0> arg0) {
    game_time_set(arg0.addr(), guest::cpu()->r[1], ~0u, ~0x80000000u);  // (from the original)
    arg0->byte_8 = 0x21;  // (from the original)
    clear_inner(arg0.addr());
    arg0->byte_9 = 0xff;  // (from the original)
    arg0->byte_a = 9;
    arg0->byte_8 = 0x21;  // (from the original)
    clear_inner(arg0.addr());
    arg0->byte_9 = 0xff;  // (from the original)
    u32 r0_1 = ~0u;
    arg0->byte_a = 9;
    arg0->byte_b = u8(r0_1);
    arg0->byte_c = u8(r0_1);
    return arg0.addr();
}

}  // namespace d_005bb9f0
GUEST_EXPORT_FRAMED(0x005bb9f0, d_005bb9f0::f_005bb9f0, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_005bbd70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bbd70 {

struct __attribute__((packed)) Object_005bbd70_0 {
    u8 unknown_0[0x5b];  // (not used here)
    u8 byte_5b;
};
GUEST_OFFSET(Object_005bbd70_0, byte_5b, 0x5b);


void f_005bbd70(gptr<Object_005bbd70_0> arg0, u32 r1) {
    if (r1 >= 3u) {
        guest::cpu()->r[1] = r1;
        return;
    }
    u32 r1_1 = u32(arg0->byte_5b) | lsl_r(1u, r1 & 0xff);  // (from the original)
    arg0->byte_5b = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_005bbd70
GUEST_EXPORT(0x005bbd70, d_005bbd70::f_005bbd70);

// f_005bbdf8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bbdf8 {

struct __attribute__((packed)) Object_005bbdf8_0 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
    u8 byte_9;
    u8 byte_a;
    u8 byte_b;
};
GUEST_OFFSET(Object_005bbdf8_0, byte_8, 0x8);
GUEST_OFFSET(Object_005bbdf8_0, byte_9, 0x9);
GUEST_OFFSET(Object_005bbdf8_0, byte_a, 0xa);
GUEST_OFFSET(Object_005bbdf8_0, byte_b, 0xb);

inline constexpr guest::Function<0x002fb378, u32(u32)> return_constant_0xad56b0_;
inline constexpr guest::Function<0x00303cdc, u32(u32)> clear_inner;
inline constexpr guest::Function<0x005cddb4, u32(u32, u32)> GameTime__set_time_stamp;

void f_005bbdf8(gptr<Object_005bbdf8_0> arg0) {
    arg0->byte_8 = 0x21;  // (from the original)
    clear_inner(arg0.addr());
    arg0->byte_9 = 0xff;  // (from the original)
    arg0->byte_a = 9;
    u32 r0_1 = return_constant_0xad56b0_(9u);
    GameTime__set_time_stamp(arg0.addr(), r0_1);
    arg0->byte_8 = 0x21;  // (from the original)
    arg0->byte_b = 0xff;  // (from the original)
    arg0->byte_9 = 2;
}

}  // namespace d_005bbdf8
GUEST_EXPORT_FRAMED(0x005bbdf8, d_005bbdf8::f_005bbdf8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005bcaa8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bcaa8 {

struct __attribute__((packed)) Object_005bcaa8_0 {
    u8 unknown_0[0xa8];  // (not used here)
    u8 byte_a8;
};
GUEST_OFFSET(Object_005bcaa8_0, byte_a8, 0xa8);


void f_005bcaa8(gptr<Object_005bcaa8_0> arg0, u32 r1, u32 r2) {
    r1 += u32(s8(arg0->byte_a8));
    u32 res_1 = r1 + 4u;
    if (res_1 >> 0x1f != ((r1 ^ res_1) & (4u ^ res_1)) >> 0x1f) {  // (from the original)
        u32 r1_1 = ~3u;
        arg0->byte_a8 = u8(r1_1);
        guest::cpu()->r[1] = r1_1;
        return;
    }
    if (r2 == 3u || r2 == 6u) {
        r2 = 0x3cu;  // (from the original)
        goto L_5bcad8;
    }
    if (r2 == 9u || r2 == 0xbu) {  // (from the original)
        r2 = 0x3cu;  // (from the original)
    } else {
        r2 = 0x28u;  // (from the original)
    }
L_5bcad8:;
    if ((r1 - r2) != 0 && s32(r1) >= s32(r2)) {
        r1 = r2;
    }
    arg0->byte_a8 = u8(r1);
    guest::cpu()->r[1] = r1;
}

}  // namespace d_005bcaa8
GUEST_EXPORT(0x005bcaa8, d_005bcaa8::f_005bcaa8);

// f_005bcaf0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bcaf0 {

struct __attribute__((packed)) Object_005bcaf0_0 {
    u8 unknown_0[0xa7];  // (not used here)
    u8 byte_a7;
    u8 unknown_a8[0x1];  // (not used here)
    u8 byte_a9;
};
GUEST_OFFSET(Object_005bcaf0_0, byte_a7, 0xa7);
GUEST_OFFSET(Object_005bcaf0_0, byte_a9, 0xa9);


void f_005bcaf0(gptr<Object_005bcaf0_0> arg0) {
    u32 r1_1 = u32(arg0->byte_a9) + 1u & 0xffu;  // (from the original)
    arg0->byte_a9 = u8(r1_1);
    if (r1_1 < 3u) {
        guest::cpu()->r[1] = r1_1;
        return;
    }
    arg0->byte_a7 = 1;
    arg0->byte_a9 = 3;
    guest::cpu()->r[1] = 3u;
}

}  // namespace d_005bcaf0
GUEST_EXPORT(0x005bcaf0, d_005bcaf0::f_005bcaf0);

// f_005bcbfc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bcbfc {

struct __attribute__((packed)) Object_005bcbfc_0 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
    u8 byte_9;
    u8 byte_a;
};
GUEST_OFFSET(Object_005bcbfc_0, byte_8, 0x8);
GUEST_OFFSET(Object_005bcbfc_0, byte_9, 0x9);
GUEST_OFFSET(Object_005bcbfc_0, byte_a, 0xa);

inline constexpr guest::Function<0x002fb378, u32(u32, u32)> return_constant_0xad56b0_;
inline constexpr guest::Function<0x00303cdc, u32(u32, u32, u32, u32)> clear_inner;
inline constexpr guest::Function<0x005bce04, u32(u32, u32)> finish_event;
inline constexpr guest::Function<0x005cddb4, u32(u32, u32)> GameTime__set_time_stamp;

void f_005bcbfc(gptr<Object_005bcbfc_0> arg0, u32 r1) {
    arg0->byte_8 = 0x21;  // (from the original)
    clear_inner(arg0.addr(), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    arg0->byte_9 = 0xff;  // (from the original)
    arg0->byte_a = 9;
    u32 r0_1 = return_constant_0xad56b0_(9u, 0xffu);  // (from the original)
    GameTime__set_time_stamp(arg0.addr(), r0_1);
    finish_event(arg0.addr(), r1);
    arg0->byte_9 = 4;
}

}  // namespace d_005bcbfc
GUEST_EXPORT_FRAMED(0x005bcbfc, d_005bcbfc::f_005bcbfc, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005bcc50: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bcc50 {

struct __attribute__((packed)) Object_005bcc50_0 {
    u8 unknown_0[0x570c];  // (not used here)
    u8 byte_570c;
};
GUEST_OFFSET(Object_005bcc50_0, byte_570c, 0x570c);

struct __attribute__((packed)) Local_005bcc50_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_005bcc50_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_005bcc50_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_005bcc50_ea_1, word_8, 0x8);

struct __attribute__((packed)) Local_005bcc50_r5_1 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
    u8 byte_9;
};
GUEST_OFFSET(Local_005bcc50_r5_1, byte_8, 0x8);
GUEST_OFFSET(Local_005bcc50_r5_1, byte_9, 0x9);

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x002fb338, u32(u32, u32)> is_not_sentinel;
inline constexpr guest::Function<0x002fb378, u32(u32, u32)> return_constant_0xad56b0_;
inline constexpr guest::Function<0x002fb430, u32(u32, u32)> make_adjusted_words;
inline constexpr guest::Function<0x002fd4b4, u32(u32, u32, u32)> days_between;
inline constexpr guest::Function<0x007241b0, u32(u32, u32)> Pockets__find_empty_slot;

struct __attribute__((packed)) Frame_005bcc50 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x10];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005bcc50, word_0, 0x0);
GUEST_OFFSET(Frame_005bcc50, word_4, 0x4);
GUEST_OFFSET(Frame_005bcc50, word_8, 0x8);
GUEST_SIZE(Frame_005bcc50, 0x1c);

u32 f_005bcc50(gptr<Object_005bcc50_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005bcc50> frame;  // the original's stack frame
    u32 r0_1 = get_save_data(arg0.addr(), r1, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r0_2 = r0_1 + 0x6ad82u;  // (from the original)
    if (r0_2 != 0 && *gptr<u8>(r0_2) >= 2u && arg0.addr() != 0) {
        u32 r0_3 = arg0->byte_570c;
        r1_1 = r0_3 << 0x19;  // (from the original)
        if (s32(r1_1) >= 0) {
            if ((r0_3 >> 7) == 0) {
                guest::cpu()->r[1] = r1_1;
                return 0u;
            }
        }
        gptr<Local_005bcc50_r5_1> r5_1 = gptr<Local_005bcc50_r5_1>(arg0.addr() + 0x8e08u);  // (from the original)
        if (r5_1->byte_8 >= 0x21u || r5_1->byte_9 >= 3u) {  // (from the original)
            u32 r0_5 = Pockets__find_empty_slot(arg0.addr() + 0x6bd0u, r1_1);  // (from the original)
            r1_1 = guest::cpu()->r[1];
            if (s32(r0_5) >= 0) {
                u32 r0_6 = is_not_sentinel(r5_1.addr(), r1_1);
                r1_1 = guest::cpu()->r[1];
                u32 zf_1 = r0_6 == 0;
                if (!zf_1) {
                    r0_6 = r5_1->byte_9;
                    zf_1 = r0_6 == 4u;
                }
                if (!zf_1) {
                    u32 r0_7 = return_constant_0xad56b0_(r0_6, r1_1);
                    make_adjusted_words(frame.at(0xc).addr(), r5_1.addr());  // (from the original)
                    gptr<Local_005bcc50_ea_1> ea_1 = gptr<Local_005bcc50_ea_1>(frame.at(0xc).addr());  // (from the original)
                    u32 r1_2 = ea_1->word_4;
                    u32 r2_5 = ea_1->word_8;
                    frame->word_0 = ea_1->word_0;
                    frame->word_4 = r1_2;
                    frame->word_8 = r2_5;
                    u32 r0_10 = days_between(frame.at(0).addr(), r0_7, 1u);
                    r1_1 = guest::cpu()->r[1];
                    if (s32(r0_10) < 0) {
                        r0_10 = 0u - r0_10;
                    }
                    if (s32(r0_10) <= 3) {
                        return 0u;
                    }
                }
                guest::cpu()->r[1] = r1_1;
                return 1u;
            }
        }
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_005bcc50
GUEST_EXPORT_FRAMED(0x005bcc50, d_005bcc50::f_005bcc50, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_005bcf24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bcf24 {

struct __attribute__((packed)) Object_005bcf24_0 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
    u8 byte_9;
    u8 byte_a;
    u8 unknown_b[0xa9];  // (not used here)
    u8 byte_b4;
};
GUEST_OFFSET(Object_005bcf24_0, byte_8, 0x8);
GUEST_OFFSET(Object_005bcf24_0, byte_9, 0x9);
GUEST_OFFSET(Object_005bcf24_0, byte_a, 0xa);
GUEST_OFFSET(Object_005bcf24_0, byte_b4, 0xb4);

struct __attribute__((packed)) Object_005bcf24_2 {
    u8 unknown_0[0x1028];  // (not used here)
    u32 word_1028;
    u32 word_102c;
};
GUEST_OFFSET(Object_005bcf24_2, word_1028, 0x1028);
GUEST_OFFSET(Object_005bcf24_2, word_102c, 0x102c);

inline constexpr guest::Function<0x002fb378, u32(u32)> return_constant_0xad56b0_;
inline constexpr guest::Function<0x0030f52c, u32(u32, u32)> call_0030f52c;
inline constexpr guest::Function<0x0051d77c, u32(u32)> current_record_byte_or_global;
inline constexpr guest::Function<0x005bce04, u32(u32, u32, u32, u32)> finish_event;
inline constexpr guest::Function<0x005cddb4, u32(u32, u32)> GameTime__set_time_stamp;

void f_005bcf24(gptr<Object_005bcf24_0> arg0, u32 r1, gptr<Object_005bcf24_2> arg2) {
    u32 r0_1 = finish_event(arg0.addr(), r1, arg2.addr(), guest::cpu()->r[3]);
    u32 r0_2 = current_record_byte_or_global(r0_1);
    arg0->byte_b4 = u8(r0_2);
    u32 r1_1 = arg2.addr() + 0x1028u;  // (from the original)
    u32 r5_1 = arg2->word_1028;
    u32 r0_3 = arg2->word_102c;
    if (r0_3 != 0 && r5_1 != 0) {
        u32 r6_1 = *gptr<u8>(r0_3 + 0x24u);  // (from the original)
        u32 r0_4 = return_constant_0xad56b0_(r0_3);
        arg0->byte_8 = u8(r6_1);
        arg0->byte_9 = 0;
        if (r0_4 != 0) {
            GameTime__set_time_stamp(arg0.addr(), r0_4);
        }
        arg0->byte_a = 3;
        u32 r4_1 = arg0.addr() + 0xcu;  // (from the original)
        call_0030f52c(r4_1, r5_1);
        r1_1 = guest::cpu()->r[1];
        *gptr<u16>(r4_1 + 0x16u) = *gptr<u16>(r5_1 + 0x2cu);  // (from the original)
    }
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_005bcf24
GUEST_EXPORT_FRAMED(0x005bcf24, d_005bcf24::f_005bcf24, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_005bcfa0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bcfa0 {

struct __attribute__((packed)) Object_005bcfa0_1 {
    u8 unknown_0[0x1028];  // (not used here)
    u32 word_1028;
};
GUEST_OFFSET(Object_005bcfa0_1, word_1028, 0x1028);

inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> is_villager_record;
inline constexpr guest::Function<0x0030f52c, u32(u32, u32)> call_0030f52c;
inline constexpr guest::Function<0x0076c6d4, u32(u32, u32)> halfword_is_nonzero_0076c6d4;

void f_005bcfa0(u32 r0, gptr<Object_005bcfa0_1> arg1) {
    u32 r1 = arg1.addr();
    u32 r6 = r1 + 0x1000u;  // (from the original)
    u32 r5 = r0;
    u32 r0_1 = arg1->word_1028;
    if (r0_1 != 0) {
        u32 r0_2 = is_villager_record(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0_2 != 0) {
            u32 r4 = 0u;
            do {
                u32 r0_4 = halfword_is_nonzero_0076c6d4(r5 + r4 * 0x18u + 0x24u, r1);  // (from the original)
                r1 = guest::cpu()->r[1];
                if (r0_4 == 0) {
                    u32 r4_1 = *gptr<u32>(r6 + 0x28u);  // (from the original)
                    u32 r5_1 = r5 + ((r4 * 3u) << 3) + 0x24u;  // (from the original)
                    call_0030f52c(r5_1, r4_1);
                    *gptr<u16>(r5_1 + 0x16u) = *gptr<u16>(r4_1 + 0x2cu);  // (from the original)
                    return;
                }
                r4 += 1u;
                guest::preempt();
            } while (r4 < 6u);
        }
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_005bcfa0
GUEST_EXPORT_FRAMED(0x005bcfa0, d_005bcfa0::f_005bcfa0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005bd01c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bd01c {

struct __attribute__((packed)) Object_005bd01c_0 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
    u8 byte_9;
    u8 byte_a;
};
GUEST_OFFSET(Object_005bd01c_0, byte_8, 0x8);
GUEST_OFFSET(Object_005bd01c_0, byte_9, 0x9);
GUEST_OFFSET(Object_005bd01c_0, byte_a, 0xa);

inline constexpr guest::Function<0x00303cdc, u32(u32)> clear_inner;
inline constexpr guest::Function<0x005cdf48, u32(u32, u32, u32, u32)> game_time_set;

u32 f_005bd01c(gptr<Object_005bd01c_0> arg0, u32 r1) {
    game_time_set(arg0.addr(), r1, ~0u, ~0x80000000u);  // (from the original)
    arg0->byte_8 = 0x21;  // (from the original)
    clear_inner(arg0.addr());
    arg0->byte_9 = 0xff;  // (from the original)
    arg0->byte_a = 9;
    guest::cpu()->r[1] = 0xffu;  // (from the original)
    return arg0.addr();
}

}  // namespace d_005bd01c
GUEST_EXPORT_FRAMED(0x005bd01c, d_005bd01c::f_005bd01c, 0x4010);  // pushes {r4, lr} first, as the original

// f_005bd0a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bd0a0 {

struct __attribute__((packed)) Object_005bd0a0_0 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
    u8 byte_9;
    u8 byte_a;
    u8 unknown_b[0x1];  // (not used here)
    u16 half_c;
    u8 byte_e;
    u8 byte_f;
};
GUEST_OFFSET(Object_005bd0a0_0, byte_8, 0x8);
GUEST_OFFSET(Object_005bd0a0_0, byte_9, 0x9);
GUEST_OFFSET(Object_005bd0a0_0, byte_a, 0xa);
GUEST_OFFSET(Object_005bd0a0_0, half_c, 0xc);
GUEST_OFFSET(Object_005bd0a0_0, byte_e, 0xe);
GUEST_OFFSET(Object_005bd0a0_0, byte_f, 0xf);

struct __attribute__((packed)) Local_005bd0a0_ea_1 {
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
GUEST_OFFSET(Local_005bd0a0_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_005bd0a0_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_005bd0a0_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_005bd0a0_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_005bd0a0_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_005bd0a0_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_005bd0a0_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_005bd0a0_ea_1, word_1c, 0x1c);
GUEST_OFFSET(Local_005bd0a0_ea_1, word_20, 0x20);
GUEST_OFFSET(Local_005bd0a0_ea_1, word_24, 0x24);
GUEST_OFFSET(Local_005bd0a0_ea_1, word_28, 0x28);
GUEST_OFFSET(Local_005bd0a0_ea_1, word_2c, 0x2c);
GUEST_OFFSET(Local_005bd0a0_ea_1, word_30, 0x30);
GUEST_OFFSET(Local_005bd0a0_ea_1, word_34, 0x34);

struct __attribute__((packed)) Local_005bd0a0_ea_7 {
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
GUEST_OFFSET(Local_005bd0a0_ea_7, word_0, 0x0);
GUEST_OFFSET(Local_005bd0a0_ea_7, word_4, 0x4);
GUEST_OFFSET(Local_005bd0a0_ea_7, word_8, 0x8);
GUEST_OFFSET(Local_005bd0a0_ea_7, word_c, 0xc);
GUEST_OFFSET(Local_005bd0a0_ea_7, word_10, 0x10);
GUEST_OFFSET(Local_005bd0a0_ea_7, word_14, 0x14);
GUEST_OFFSET(Local_005bd0a0_ea_7, word_18, 0x18);
GUEST_OFFSET(Local_005bd0a0_ea_7, word_1c, 0x1c);
GUEST_OFFSET(Local_005bd0a0_ea_7, word_24, 0x24);

struct __attribute__((packed)) Local_005bd0a0_ea_9 {
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
GUEST_OFFSET(Local_005bd0a0_ea_9, word_0, 0x0);
GUEST_OFFSET(Local_005bd0a0_ea_9, word_4, 0x4);
GUEST_OFFSET(Local_005bd0a0_ea_9, word_8, 0x8);
GUEST_OFFSET(Local_005bd0a0_ea_9, word_c, 0xc);
GUEST_OFFSET(Local_005bd0a0_ea_9, word_10, 0x10);
GUEST_OFFSET(Local_005bd0a0_ea_9, word_14, 0x14);
GUEST_OFFSET(Local_005bd0a0_ea_9, word_18, 0x18);
GUEST_OFFSET(Local_005bd0a0_ea_9, word_1c, 0x1c);
GUEST_OFFSET(Local_005bd0a0_ea_9, word_24, 0x24);

inline constexpr guest::Function<0x002fb378, u32(u32, u32)> return_constant_0xad56b0_;
inline constexpr guest::Function<0x00303cdc, u32(u32)> clear_inner;
inline constexpr guest::Function<0x005cddb4, u32(u32, u32)> GameTime__set_time_stamp;

struct __attribute__((packed)) Frame_005bd0a0 {
    u8 unknown_0[0xc];  // (not read or written by name)
    u32 word_c;
    u8 unknown_10[0x28];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005bd0a0, word_c, 0xc);
GUEST_SIZE(Frame_005bd0a0, 0x38);

void f_005bd0a0(gptr<Object_005bd0a0_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005bd0a0> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
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
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    u32 ea_5 = 0;
    u32 ea_6 = 0;
    gptr<Local_005bd0a0_ea_7> ea_7 = gptr<Local_005bd0a0_ea_7>(0u);
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 r8_1 = 0;
    u32 r9_1 = 0;
    u32 r10_1 = 0;
    u32 r11_1 = 0;
    if (r1 >= 6u) {
        guest::cpu()->r[1] = r1;
        return;
    }
    gptr<Local_005bd0a0_ea_1> ea_1 = gptr<Local_005bd0a0_ea_1>(frame.at(0).addr());
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
    arg0->byte_8 = 0x21;  // (from the original)
    clear_inner(r0);
    arg0->byte_9 = 0xff;  // (from the original)
    arg0->byte_a = 9;
    arg0->half_c = 0;
    arg0->byte_e = 6;
    arg0->byte_f = 0xff;  // (from the original)
    u32 r0_1 = return_constant_0xad56b0_(0xffu, 0xffu);  // (from the original)
    arg0->byte_8 = 1;
    arg0->byte_9 = 0;
    if (r0_1 != 0) {
        GameTime__set_time_stamp(r0, r0_1);
    }
    arg0->byte_a = 3;
    u32 r0_2 = frame->word_c;
    arg0->byte_e = u8(r1);
    arg0->byte_f = u8(r0_2);
    u32 r0_3 = uxth(r2);
    if (r1 != 2u) {
        if (r1 != 5u || r2 < 2u) {
            goto L_5bd180;
        }
    } else if (r2 < 5u) {
        goto L_5bd180;
    }
    arg0->byte_8 = 0x21;  // (from the original)
    clear_inner(r0);
    ea_2 = r0 + 9u;
    *gptr<u8>(ea_2) = 0xff;  // (from the original)
    ea_3 = r0 + 0xau;  // (from the original)
    *gptr<u8>(ea_3) = 9;
    ea_4 = r0 + 0xcu;  // (from the original)
    *gptr<u16>(ea_4) = 0;
    ea_5 = r0 + 0xeu;  // (from the original)
    *gptr<u8>(ea_5) = 6;
    ea_6 = r0 + 0xfu;  // (from the original)
    *gptr<u8>(ea_6) = 0xff;  // (from the original)
    ea_7 = gptr<Local_005bd0a0_ea_7>(frame.at(0x10).addr());  // (from the original)
    r4_1 = ea_7->word_0;
    r5_1 = ea_7->word_4;
    r6_1 = ea_7->word_8;
    r7_1 = ea_7->word_c;
    r8_1 = ea_7->word_10;
    r9_1 = ea_7->word_14;
    r10_1 = ea_7->word_18;
    r11_1 = ea_7->word_1c;
    guest::cpu()->r[1] = 9u;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
    guest::cpu()->r[10] = r10_1;
    guest::cpu()->r[11] = r11_1;
    return;
L_5bd180:;
    *gptr<u16>(r0 + 0xcu) = u16(r0_3);  // (from the original)
    gptr<Local_005bd0a0_ea_9> ea_9 = gptr<Local_005bd0a0_ea_9>(frame.at(0x10).addr());  // (from the original)
    u32 r4_2 = ea_9->word_0;
    u32 r5_2 = ea_9->word_4;
    u32 r6_2 = ea_9->word_8;
    u32 r7_2 = ea_9->word_c;
    u32 r8_2 = ea_9->word_10;
    u32 r9_2 = ea_9->word_14;
    u32 r10_2 = ea_9->word_18;
    u32 r11_2 = ea_9->word_1c;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[8] = r8_2;
    guest::cpu()->r[9] = r9_2;
    guest::cpu()->r[10] = r10_2;
    guest::cpu()->r[11] = r11_2;
}

}  // namespace d_005bd0a0
GUEST_EXPORT(0x005bd0a0, d_005bd0a0::f_005bd0a0);

// f_005bd234: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bd234 {

struct __attribute__((packed)) Object_005bd234_0 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
    u8 byte_9;
    u8 byte_a;
    u8 unknown_b[0x1];  // (not used here)
    u16 half_c;
    u8 byte_e;
    u8 byte_f;
};
GUEST_OFFSET(Object_005bd234_0, byte_8, 0x8);
GUEST_OFFSET(Object_005bd234_0, byte_9, 0x9);
GUEST_OFFSET(Object_005bd234_0, byte_a, 0xa);
GUEST_OFFSET(Object_005bd234_0, half_c, 0xc);
GUEST_OFFSET(Object_005bd234_0, byte_e, 0xe);
GUEST_OFFSET(Object_005bd234_0, byte_f, 0xf);

inline constexpr guest::Function<0x00303cdc, u32(u32)> clear_inner;
inline constexpr guest::Function<0x005cdf48, u32(u32, u32, u32, u32)> game_time_set;

u32 f_005bd234(gptr<Object_005bd234_0> arg0, u32 r1) {
    game_time_set(arg0.addr(), r1, ~0u, ~0x80000000u);  // (from the original)
    arg0->byte_8 = 0x21;  // (from the original)
    clear_inner(arg0.addr());
    arg0->byte_9 = 0xff;  // (from the original)
    arg0->byte_a = 9;
    arg0->byte_8 = 0x21;  // (from the original)
    clear_inner(arg0.addr());
    arg0->byte_9 = 0xff;  // (from the original)
    arg0->byte_a = 9;
    arg0->half_c = 0;
    arg0->byte_e = 6;
    arg0->byte_f = 0xff;  // (from the original)
    guest::cpu()->r[1] = 6u;
    return arg0.addr();
}

}  // namespace d_005bd234
GUEST_EXPORT_FRAMED(0x005bd234, d_005bd234::f_005bd234, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_005bd2e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bd2e8 {

struct __attribute__((packed)) Object_005bd2e8_0 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
    u8 byte_9;
    u8 byte_a;
    u8 unknown_b[0x1];  // (not used here)
    u16 half_c;
    u8 byte_e;
    u8 byte_f;
};
GUEST_OFFSET(Object_005bd2e8_0, byte_8, 0x8);
GUEST_OFFSET(Object_005bd2e8_0, byte_9, 0x9);
GUEST_OFFSET(Object_005bd2e8_0, byte_a, 0xa);
GUEST_OFFSET(Object_005bd2e8_0, half_c, 0xc);
GUEST_OFFSET(Object_005bd2e8_0, byte_e, 0xe);
GUEST_OFFSET(Object_005bd2e8_0, byte_f, 0xf);

inline constexpr guest::Function<0x002fb378, u32(u32)> return_constant_0xad56b0_;
inline constexpr guest::Function<0x00303cdc, u32(u32)> clear_inner;
inline constexpr guest::Function<0x0030b6b8, u32(u32)> Item__number;
inline constexpr guest::Function<0x005cddb4, u32(u32, u32)> GameTime__set_time_stamp;

void f_005bd2e8(gptr<Object_005bd2e8_0> arg0, u32 r1, u32 r2, u32 r3) {
    if (r1 >= 4u) {
        return;
    }
    arg0->byte_8 = 0x21;  // (from the original)
    clear_inner(arg0.addr());
    arg0->byte_9 = 0xff;  // (from the original)
    arg0->byte_a = 9;
    arg0->half_c = 0x7ffe;  // (from the original)
    arg0->byte_e = 4;
    arg0->byte_f = 0xff;  // (from the original)
    u32 r0_1 = return_constant_0xad56b0_(0xffu);  // (from the original)
    arg0->byte_8 = 2;
    arg0->byte_9 = 0;
    if (r0_1 != 0) {
        GameTime__set_time_stamp(arg0.addr(), r0_1);
    }
    arg0->byte_a = 3;
    u32 r0_2 = Item__number(r2);
    arg0->half_c = u16(r0_2);
    arg0->byte_e = u8(r1);
    arg0->byte_f = u8(r3);
}

}  // namespace d_005bd2e8
GUEST_EXPORT_FRAMED(0x005bd2e8, d_005bd2e8::f_005bd2e8, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_005bd3fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bd3fc {

struct __attribute__((packed)) Object_005bd3fc_0 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
    u8 byte_9;
    u8 byte_a;
    u8 unknown_b[0x1];  // (not used here)
    u16 half_c;
    u8 byte_e;
    u8 byte_f;
};
GUEST_OFFSET(Object_005bd3fc_0, byte_8, 0x8);
GUEST_OFFSET(Object_005bd3fc_0, byte_9, 0x9);
GUEST_OFFSET(Object_005bd3fc_0, byte_a, 0xa);
GUEST_OFFSET(Object_005bd3fc_0, half_c, 0xc);
GUEST_OFFSET(Object_005bd3fc_0, byte_e, 0xe);
GUEST_OFFSET(Object_005bd3fc_0, byte_f, 0xf);

inline constexpr guest::Function<0x00303cdc, u32(u32)> clear_inner;
inline constexpr guest::Function<0x005cdf48, u32(u32, u32, u32, u32)> game_time_set;

u32 f_005bd3fc(gptr<Object_005bd3fc_0> arg0, u32 r1) {
    game_time_set(arg0.addr(), r1, ~0u, ~0x80000000u);  // (from the original)
    arg0->byte_8 = 0x21;  // (from the original)
    clear_inner(arg0.addr());
    arg0->byte_9 = 0xff;  // (from the original)
    arg0->byte_a = 9;
    arg0->byte_8 = 0x21;  // (from the original)
    clear_inner(arg0.addr());
    arg0->byte_9 = 0xff;  // (from the original)
    arg0->byte_a = 9;
    arg0->half_c = 0x7ffe;  // (from the original)
    arg0->byte_e = 4;
    arg0->byte_f = 0xff;  // (from the original)
    guest::cpu()->r[1] = 4u;
    return arg0.addr();
}

}  // namespace d_005bd3fc
GUEST_EXPORT_FRAMED(0x005bd3fc, d_005bd3fc::f_005bd3fc, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_005bd750: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bd750 {

struct __attribute__((packed)) Object_005bd750_0 {
    u8 unknown_0[0x9];  // (not used here)
    u8 byte_9;
};
GUEST_OFFSET(Object_005bd750_0, byte_9, 0x9);

inline constexpr guest::Function<0x0030b6b8, u32(u32, u32, u32, u32)> Item__number;
inline constexpr guest::Function<0x007d0fc8, u32(u32, u32)> call_007d0fc8;

struct __attribute__((packed)) Frame_005bd750 {
    u8 unknown_0[0x2];  // (not read or written by name)
    u8 byte_2;
    u8 unknown_3[0x1];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005bd750, byte_2, 0x2);
GUEST_SIZE(Frame_005bd750, 0x4);

void f_005bd750(gptr<Object_005bd750_0> arg0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_005bd750> frame;  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r0_2 = Item__number(arg0.addr() + 0xcu, r1, guest::cpu()->r[2], r3);  // (from the original)
    *frame.at<u16>(0) = u16(r0_2);
    frame->byte_2 = u8(r1);
    call_007d0fc8(4u, frame.at(0).addr());
    arg0->byte_9 = u8(r1 == 0 ? 2u : 1u);
}

}  // namespace d_005bd750
GUEST_EXPORT_FRAMED(0x005bd750, d_005bd750::f_005bd750, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_005bdaa0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bdaa0 {

struct __attribute__((packed)) Object_005bdaa0_0 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
    u8 byte_9;
    u8 byte_a;
    u8 unknown_b[0x9];  // (not used here)
    u8 byte_14;
    u8 byte_15;
    u8 byte_16;
};
GUEST_OFFSET(Object_005bdaa0_0, byte_8, 0x8);
GUEST_OFFSET(Object_005bdaa0_0, byte_9, 0x9);
GUEST_OFFSET(Object_005bdaa0_0, byte_a, 0xa);
GUEST_OFFSET(Object_005bdaa0_0, byte_14, 0x14);
GUEST_OFFSET(Object_005bdaa0_0, byte_15, 0x15);
GUEST_OFFSET(Object_005bdaa0_0, byte_16, 0x16);

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x002fc20c, u32(u32)> construct_empty_item;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> copy_item_002fc8e8;
inline constexpr guest::Function<0x00303cdc, u32(u32)> clear_inner;
inline constexpr guest::Function<0x005cdf48, u32(u32, u32, u32, u32)> game_time_set;

u32 f_005bdaa0(gptr<Object_005bdaa0_0> arg0, u32 r1) {
    game_time_set(arg0.addr(), r1, ~0u, ~0x80000000u);  // (from the original)
    arg0->byte_8 = 0x21;  // (from the original)
    clear_inner(arg0.addr());
    arg0->byte_9 = 0xff;  // (from the original)
    arg0->byte_a = 9;
    construct_empty_item(arg0.addr() + 0xcu);  // (from the original)
    construct_empty_item(arg0.addr() + 0x10u);  // (from the original)
    arg0->byte_8 = 0x21;  // (from the original)
    clear_inner(arg0.addr());
    arg0->byte_9 = 0xff;  // (from the original)
    arg0->byte_a = 9;
    copy_item_002fc8e8(arg0.addr() + 0x10u, empty_item_address);  // (from the original)
    copy_item_002fc8e8(arg0.addr() + 0xcu, arg0.addr() + 0x10u);  // (from the original)
    u32 r0_5 = ~0u;
    arg0->byte_14 = u8(r0_5);
    arg0->byte_15 = 7;
    arg0->byte_16 = u8(r0_5);
    guest::cpu()->r[1] = 7u;
    return arg0.addr();
}

}  // namespace d_005bdaa0
GUEST_EXPORT_FRAMED(0x005bdaa0, d_005bdaa0::f_005bdaa0, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_005bdb6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bdb6c {

struct __attribute__((packed)) Local_005bdb6c_r0_8 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_005bdb6c_r0_8, word_0, 0x0);
GUEST_OFFSET(Local_005bdb6c_r0_8, word_4, 0x4);
GUEST_OFFSET(Local_005bdb6c_r0_8, word_8, 0x8);

inline constexpr guest::Function<0x00116e4f, u32(u32, u32)> BitSet32__clear;
inline constexpr guest::Function<0x00116ea5, u32(u32, u32, u32)> init_bit_mask;
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x002fb378, u32(u32)> return_constant_0xad56b0_;
inline constexpr guest::Function<0x002fe419, u32(u32)> pick_random_set_bit;
inline constexpr guest::Function<0x003009a9, u32(u32, u32)> villager_record_at;
inline constexpr guest::Function<0x003015ec, u32(u32, u32, u32, u32)> any_day_handler_accepts;

struct __attribute__((packed)) Frame_005bdb6c {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0xc];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005bdb6c, word_0, 0x0);
GUEST_OFFSET(Frame_005bdb6c, word_4, 0x4);
GUEST_OFFSET(Frame_005bdb6c, word_8, 0x8);
GUEST_SIZE(Frame_005bdb6c, 0x18);

u32 f_005bdb6c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005bdb6c> frame;  // the original's stack frame
    u32 r0_1 = get_save_data(r0, r1, r2, r3);
    u32 r0_3 = villager_record_at(r0_1 + 0x292a4u, r0);  // (from the original)
    if (r0_3 == 0) {
        return 0x21u;  // (from the original)
    }
    init_bit_mask(frame.at(0xc).addr(), 7u, 1u);  // (from the original)
    BitSet32__clear(frame.at(0xc).addr(), 0u);  // (from the original)
    u32 r0_6 = *gptr<s8>(r0_3 + 0x2516u);  // (from the original)
    if (r0_6 + 1u == 0) {
        r0_6 = BitSet32__clear(frame.at(0xc).addr(), 2u);  // (from the original)
    }
    gptr<Local_005bdb6c_r0_8> r0_8 = gptr<Local_005bdb6c_r0_8>(return_constant_0xad56b0_(r0_6));
    frame->word_0 = ~0u;
    frame->word_4 = 0;
    frame->word_8 = 1;
    u32 r0_9 = any_day_handler_accepts(0x23u, r0_8->word_0, r0_8->word_4, r0_8->word_8);  // (from the original)
    if (r0_9 != 0) {
        BitSet32__clear(frame.at(0xc).addr(), 5u);  // (from the original)
        BitSet32__clear(frame.at(0xc).addr(), 6u);  // (from the original)
    }
    u32 r0_13 = pick_random_set_bit(frame.at(0xc).addr());  // (from the original)
    return r0_13 + 6u & 0xffu;  // (from the original)
}

}  // namespace d_005bdb6c
GUEST_EXPORT_FRAMED(0x005bdb6c, d_005bdb6c::f_005bdb6c, 0x4010);  // pushes {r4, lr} first, as the original

// f_005bdc34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bdc34 {

struct __attribute__((packed)) Local_005bdc34_r4_1 {
    u8 unknown_0[0x28];  // (not used here)
    u32 word_28;
    u8 unknown_2c[0x4];  // (not used here)
    u32 word_30;
};
GUEST_OFFSET(Local_005bdc34_r4_1, word_28, 0x28);
GUEST_OFFSET(Local_005bdc34_r4_1, word_30, 0x30);

inline constexpr guest::Function<0x00116e4f, u32(u32, u32, u32, u32)> BitSet32__clear;
inline constexpr guest::Function<0x00116ea5, u32(u32, u32, u32, u32)> init_bit_mask;
inline constexpr guest::Function<0x002fae84, u32(u32)> get_data_base;
inline constexpr guest::Function<0x002fb310, u32(u32)> slot_records_of;
inline constexpr guest::Function<0x002fe419, u32(u32, u32, u32, u32)> pick_random_set_bit;
inline constexpr guest::Function<0x00309865, u32(u32, u32)> villager_slot_index;
inline constexpr guest::Function<0x0051ce84, u32(u32, u32, u32, u32)> BsNpcMgr__SearchFunction__SearchFunction_0051ce84;

struct __attribute__((packed)) Frame_005bdc34 {
    u8 unknown_0[0x8];  // (not read or written by name)
    u32 word_8;
    u8 unknown_c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005bdc34, word_8, 0x8);
GUEST_SIZE(Frame_005bdc34, 0x10);

u32 f_005bdc34(u32 r0, u32 r1) {
    guest::StackFrameOf<Frame_005bdc34> frame;  // the original's stack frame
    u32 r12 = 0;
    u32 r0_2 = 0;
    u32 r3 = 0x88f364u;  // (from the original)
    u32 r2 = 0u;
    do {
        r12 = r0;
        if (s32(r0) < s32(gptr<u32>(r3)[r2])) {
            if ((r2 & 0xffu) == 5u) {  // (from the original)
                r2 = 0u;
            } else {
                return ~0u;
            }
            goto L_5bdc78;
        }
        r2 += 1u;
        guest::preempt();
    } while (s32(r2) < 0xc);  // (from the original)
    return ~0u;
L_5bdc78:;
    if (s32(r0) >= s32(gptr<u32>(r3)[r2])) {
        r2 += 1u;
        if (s32(r2) < 0xc) {  // (from the original)
            guest::preempt();
            goto L_5bdc78;
        }
    } else if ((r2 & 0xffu) < 0xcu) {  // (from the original)
        gptr<Local_005bdc34_r4_1> r4_1 = gptr<Local_005bdc34_r4_1>(r1 + 0x1000u);  // (from the original)
        if (r12 == 8u) {
            u32 r0_1 = r4_1->word_28;
            if (r0_1 == 0) {
                return ~0u;
            }
            r0_2 = *gptr<s8>(r0_1 + 0x2516u);  // (from the original)
            if (r0_2 < 0xau) {  // (from the original)
                return r0_2;
            }
            return ~0u;
        }
        u32 r0_3 = frame.at(0).addr();
        init_bit_mask(r0_3, 0xau, 1u, r3);  // (from the original)
        u32 r0_4 = get_data_base(r0_3);
        u32 r0_5 = slot_records_of(r0_4);
        u32 r0_7 = villager_slot_index(r0_5 + 4u, 0u);
        r3 = guest::cpu()->r[3];
        u32 r5 = r4_1->word_30;
        u32 r6 = r0_7;
        u32 r4 = 0u;
        do {
            u32 r0_8 = BsNpcMgr__SearchFunction__SearchFunction_0051ce84(r4, r6, r5, r3);
            r3 = guest::cpu()->r[3];
            if (r0_8 == 0) {
                BitSet32__clear(frame.at(0).addr(), r4, guest::cpu()->r[2], r3);
                r3 = guest::cpu()->r[3];
            }
            r4 += 1u;
            guest::preempt();
        } while (s32(r4) < 0xa);  // (from the original)
        if (frame->word_8 == 0) {
            return ~0u;
        }
        r0_2 = pick_random_set_bit(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], r3);
        return r0_2;
    }
    return ~0u;
}

}  // namespace d_005bdc34
GUEST_EXPORT_FRAMED(0x005bdc34, d_005bdc34::f_005bdc34, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005be0fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005be0fc {

struct __attribute__((packed)) Object_005be0fc_0 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
    u8 byte_9;
    u8 byte_a;
};
GUEST_OFFSET(Object_005be0fc_0, byte_8, 0x8);
GUEST_OFFSET(Object_005be0fc_0, byte_9, 0x9);
GUEST_OFFSET(Object_005be0fc_0, byte_a, 0xa);

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> copy_item_002fc8e8;
inline constexpr guest::Function<0x00303cdc, u32(u32, u32, u32, u32)> clear_inner;
inline constexpr guest::Function<0x003084d0, u32(u32, u32)> clear_identity_with_value;

u32 f_005be0fc(gptr<Object_005be0fc_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r5 = r0;
    arg0->byte_8 = 0x21;  // (from the original)
    clear_inner(r5, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0xffu;  // (from the original)
    arg0->byte_9 = u8(r1);
    u32 r4 = 0u;
    arg0->byte_a = 9;
    do {
        clear_identity_with_value(r5 + r4 * 0x30u + 0xcu, r1);  // (from the original)
        r1 = guest::cpu()->r[1];
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 2);
    copy_item_002fc8e8(r5 + 0x6cu, empty_item_address);  // (from the original)
    *gptr<u8>(r5 + 0x74u) = 0;  // (from the original)
    *gptr<u8>(r5 + 0x75u) = 0;  // (from the original)
    return 0u;
}

}  // namespace d_005be0fc
GUEST_EXPORT_FRAMED(0x005be0fc, d_005be0fc::f_005be0fc, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005be19c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005be19c {

struct __attribute__((packed)) Object_005be19c_0 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
    u8 byte_9;
    u8 byte_a;
};
GUEST_OFFSET(Object_005be19c_0, byte_8, 0x8);
GUEST_OFFSET(Object_005be19c_0, byte_9, 0x9);
GUEST_OFFSET(Object_005be19c_0, byte_a, 0xa);

inline constexpr guest::Function<0x002fc20c, u32(u32, u32)> construct_empty_item;
inline constexpr guest::Function<0x00303cdc, u32(u32)> clear_inner;
inline constexpr guest::Function<0x005be0fc, u32(u32)> call_005be0fc;
inline constexpr guest::Function<0x005cdf48, u32(u32, u32, u32, u32)> game_time_set;

u32 f_005be19c(gptr<Object_005be19c_0> arg0, u32 r1) {
    game_time_set(arg0.addr(), r1, ~0u, ~0x80000000u);  // (from the original)
    arg0->byte_8 = 0x21;  // (from the original)
    clear_inner(arg0.addr());
    arg0->byte_9 = 0xff;  // (from the original)
    arg0->byte_a = 9;
    construct_empty_item(arg0.addr() + 0x6cu, 0xffu);  // (from the original)
    construct_empty_item(arg0.addr() + 0x70u, guest::cpu()->r[1]);  // (from the original)
    call_005be0fc(arg0.addr());
    return arg0.addr();
}

}  // namespace d_005be19c
GUEST_EXPORT_FRAMED(0x005be19c, d_005be19c::f_005be19c, 0x4010);  // pushes {r4, lr} first, as the original

// f_005be844: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005be844 {

struct __attribute__((packed)) Local_005be844_r12_1 {
    u16 half_0;
};
GUEST_OFFSET(Local_005be844_r12_1, half_0, 0x0);


void f_005be844(u32 r0, u32 r1) {
    u32 r4 = 0xffffu;  // (from the original)
    u32 r2 = 0u;
    u32 r3 = 0xbu;  // (from the original)
    do {
        gptr<Local_005be844_r12_1> r12_1 = gptr<Local_005be844_r12_1>(r0 + (r2 << 1));
        r2 += 1u;
        if (r12_1->half_0 == r1) {
            r12_1->half_0 = u16(r4);
        }
        r3 -= 1u;
        guest::preempt();
    } while (r3 != 0);
}

}  // namespace d_005be844
GUEST_EXPORT_FRAMED(0x005be844, d_005be844::f_005be844, 0x30);  // pushes {r4, r5} first, as the original

// f_005be87c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005be87c {

struct __attribute__((packed)) Object_005be87c_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_005be87c_0, half_0, 0x0);


void f_005be87c(gptr<Object_005be87c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0xffffu;  // (from the original)
    u32 r3 = 1u;
    u32 r2 = r3;
    arg0->half_0 = u16(r1);
    do {
        u32 r3_1 = r3 + 1u;
        r2 += 2u;
        *gptr<u16>(r0 + (r3 << 1)) = u16(r1);
        r3 = r3_1 + 1u;
        *gptr<u16>(r0 + (r3_1 << 1)) = u16(r1);
        guest::preempt();
    } while (s32(r2) < 0xb);  // (from the original)
    guest::cpu()->r[1] = r1;
}

}  // namespace d_005be87c
GUEST_EXPORT_FRAMED(0x005be87c, d_005be87c::f_005be87c, 0x10);  // pushes {r4} first, as the original

// f_005be8c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005be8c0 {

struct __attribute__((packed)) Object_005be8c0_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_005be8c0_0, half_0, 0x0);


void f_005be8c0(gptr<Object_005be8c0_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0xffffu;  // (from the original)
    u32 r3 = 1u;
    u32 r2 = r3;
    arg0->half_0 = u16(r1);
    do {
        u32 r3_1 = r3 + 1u;
        r2 += 2u;
        *gptr<u16>(r0 + (r3 << 1)) = u16(r1);
        r3 = r3_1 + 1u;
        *gptr<u16>(r0 + (r3_1 << 1)) = u16(r1);
        guest::preempt();
    } while (s32(r2) < 0xb);  // (from the original)
    guest::cpu()->r[1] = r1;
}

}  // namespace d_005be8c0
GUEST_EXPORT_FRAMED(0x005be8c0, d_005be8c0::f_005be8c0, 0x10);  // pushes {r4} first, as the original

// f_005bf518: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bf518 {

struct __attribute__((packed)) Object_005bf518_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_005bf518_0, word_0, 0x0);
GUEST_OFFSET(Object_005bf518_0, word_4, 0x4);
GUEST_OFFSET(Object_005bf518_0, word_8, 0x8);

struct __attribute__((packed)) Object_005bf518_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_005bf518_1, word_0, 0x0);


void f_005bf518(gptr<Object_005bf518_0> arg0, gptr<Object_005bf518_1> arg1) {
    u32 r1 = arg1.addr();
    u32 r3_1 = 0u;
    arg0->word_0 = r3_1;
    arg0->word_4 = r3_1;
    arg0->word_8 = r3_1;
    if (r1 != 0) {
        if ((0x20000011u & ~arg1->word_0) != 0) {  // (from the original)
            r1 = 0u;
        }
    }
    u32 r12_1 = *gptr<u32>(r1 + 0x38u);  // (from the original)
    u32 ea_2 = (r12_1 == 0 ? r3_1 : r1 + 0x38u + r12_1) + 0xcu;  // (from the original)
    u32 r12_2 = *gptr<u32>(ea_2);
    if (r12_2 != 0) {
        r3_1 = r12_2 + ea_2;
    }
    arg0->word_0 = r3_1;
    arg0->word_4 = *gptr<u32>(r1 + 0x1cu);  // (from the original)
    u32 r1_1 = *gptr<u32>(r1 + 0x18u);  // (from the original)
    arg0->word_8 = r1_1;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_005bf518
GUEST_EXPORT(0x005bf518, d_005bf518::f_005bf518);

// f_005bf744: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bf744 {

inline constexpr guest::Function<0x00569480, u32(u32, u32, u32, u32)> ssys__ma__lyt__Layout__virtual_0;

u32 Layout__virtual_0() {
    return ssys__ma__lyt__Layout__virtual_0(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005bf744
GUEST_EXPORT(0x005bf744, d_005bf744::Layout__virtual_0);

// f_005bf748: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bf748 {

inline constexpr guest::Function<0x0013f134, u32(u32, u32)> queue_append;

void f_005bf748(u32 r0) {
    queue_append(r0, guest::cpu()->r[1]);
}

}  // namespace d_005bf748
GUEST_EXPORT_FRAMED(0x005bf748, d_005bf748::f_005bf748, 0x4010);  // pushes {r4, lr} first, as the original

// f_005bf758: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bf758 {

struct __attribute__((packed)) Object_005bf758_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_005bf758_0, word_4, 0x4);


u32 f_005bf758(gptr<Object_005bf758_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 zf_1 = r1 == 0;
    if (!zf_1) {
        r0 = arg0->word_4;
        zf_1 = r0 == 0;
    }
    if (zf_1) {
        return 0u;
    }
    do {
        if (*gptr<u32>(r0 + 0xcu) == r1) {  // (from the original)
            return r0;
        }
        r0 = *gptr<u32>(r0 + 8u);
        guest::preempt();
    } while (r0 != 0);
    return 0u;
}

}  // namespace d_005bf758
GUEST_EXPORT(0x005bf758, d_005bf758::f_005bf758);

// f_005bf7cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bf7cc {

struct __attribute__((packed)) Object_005bf7cc_0 {
    float float_0;
    float float_4;
    float float_8;
    u16 half_c;
    u8 unknown_e[0x2];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Object_005bf7cc_0, float_0, 0x0);
GUEST_OFFSET(Object_005bf7cc_0, float_4, 0x4);
GUEST_OFFSET(Object_005bf7cc_0, float_8, 0x8);
GUEST_OFFSET(Object_005bf7cc_0, half_c, 0xc);
GUEST_OFFSET(Object_005bf7cc_0, word_10, 0x10);

struct __attribute__((packed)) Object_005bf7cc_2 {
    u16 half_0;
};
GUEST_OFFSET(Object_005bf7cc_2, half_0, 0x0);


void f_005bf7cc(gptr<Object_005bf7cc_0> arg0, gptr<Float3> arg1, gptr<Object_005bf7cc_2> arg2) {
    arg0->half_c = 0;
    arg0->float_0 = arg1->v[0];
    arg0->float_4 = arg1->v[1];
    arg0->float_8 = arg1->v[2];
    arg0->half_c = arg2->half_0;
    arg0->word_10 = 0;
}

}  // namespace d_005bf7cc
GUEST_EXPORT(0x005bf7cc, d_005bf7cc::f_005bf7cc);

// f_005bf82c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bf82c {

struct __attribute__((packed)) Object_005bf82c_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u16 half_c;
    u8 unknown_e[0x2];  // (not used here)
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u16 half_20;
    u8 unknown_22[0x2];  // (not used here)
    u32 word_24;
    u32 word_28;
    u32 word_2c;
    u32 word_30;
    u16 half_34;
    u8 unknown_36[0x2];  // (not used here)
    u32 word_38;
    u32 word_3c;
    u32 word_40;
    u32 word_44;
    u16 half_48;
    u8 unknown_4a[0x2];  // (not used here)
    u32 word_4c;
    u8 byte_50;
    u8 unknown_51[0x3];  // (not used here)
    u32 word_54;
    u32 word_58;
};
GUEST_OFFSET(Object_005bf82c_0, word_0, 0x0);
GUEST_OFFSET(Object_005bf82c_0, word_4, 0x4);
GUEST_OFFSET(Object_005bf82c_0, word_8, 0x8);
GUEST_OFFSET(Object_005bf82c_0, half_c, 0xc);
GUEST_OFFSET(Object_005bf82c_0, word_10, 0x10);
GUEST_OFFSET(Object_005bf82c_0, word_14, 0x14);
GUEST_OFFSET(Object_005bf82c_0, word_18, 0x18);
GUEST_OFFSET(Object_005bf82c_0, word_1c, 0x1c);
GUEST_OFFSET(Object_005bf82c_0, half_20, 0x20);
GUEST_OFFSET(Object_005bf82c_0, word_24, 0x24);
GUEST_OFFSET(Object_005bf82c_0, word_28, 0x28);
GUEST_OFFSET(Object_005bf82c_0, word_2c, 0x2c);
GUEST_OFFSET(Object_005bf82c_0, word_30, 0x30);
GUEST_OFFSET(Object_005bf82c_0, half_34, 0x34);
GUEST_OFFSET(Object_005bf82c_0, word_38, 0x38);
GUEST_OFFSET(Object_005bf82c_0, word_3c, 0x3c);
GUEST_OFFSET(Object_005bf82c_0, word_40, 0x40);
GUEST_OFFSET(Object_005bf82c_0, word_44, 0x44);
GUEST_OFFSET(Object_005bf82c_0, half_48, 0x48);
GUEST_OFFSET(Object_005bf82c_0, word_4c, 0x4c);
GUEST_OFFSET(Object_005bf82c_0, byte_50, 0x50);
GUEST_OFFSET(Object_005bf82c_0, word_54, 0x54);
GUEST_OFFSET(Object_005bf82c_0, word_58, 0x58);

struct __attribute__((packed)) Local_005bf82c_r12_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u16 half_c;
    u8 unknown_e[0x2];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Local_005bf82c_r12_1, word_0, 0x0);
GUEST_OFFSET(Local_005bf82c_r12_1, word_4, 0x4);
GUEST_OFFSET(Local_005bf82c_r12_1, word_8, 0x8);
GUEST_OFFSET(Local_005bf82c_r12_1, half_c, 0xc);
GUEST_OFFSET(Local_005bf82c_r12_1, word_10, 0x10);


void f_005bf82c(gptr<Object_005bf82c_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r6_1 = *gptr<u32>(guest::cpu()->r[13] + 0xcu);  // (from the original)
    u32 r4_1 = *gptr<u32>(guest::cpu()->r[13] + 0x14u);  // (from the original)
    gptr<Local_005bf82c_r12_1> r12_1 = gptr<Local_005bf82c_r12_1>(*gptr<u32>(guest::cpu()->r[13] + 0x18u));  // (from the original)
    u32 r5_1 = *gptr<u32>(guest::cpu()->r[13] + 0x10u);  // (from the original)
    arg0->byte_50 = u8(r1);
    arg0->word_54 = r2;
    arg0->word_58 = r3;
    arg0->word_0 = *gptr<u32>(r6_1);
    arg0->word_4 = *gptr<u32>(r6_1 + 4u);
    arg0->word_8 = *gptr<u32>(r6_1 + 8u);
    arg0->half_c = *gptr<u16>(r6_1 + 0xcu);  // (from the original)
    arg0->word_10 = *gptr<u32>(r6_1 + 0x10u);  // (from the original)
    arg0->word_14 = *gptr<u32>(r5_1);
    arg0->word_18 = *gptr<u32>(r5_1 + 4u);
    arg0->word_1c = *gptr<u32>(r5_1 + 8u);
    arg0->half_20 = *gptr<u16>(r5_1 + 0xcu);  // (from the original)
    arg0->word_24 = *gptr<u32>(r5_1 + 0x10u);  // (from the original)
    arg0->word_28 = *gptr<u32>(r4_1);
    arg0->word_2c = *gptr<u32>(r4_1 + 4u);
    arg0->word_30 = *gptr<u32>(r4_1 + 8u);
    arg0->half_34 = *gptr<u16>(r4_1 + 0xcu);  // (from the original)
    arg0->word_38 = *gptr<u32>(r4_1 + 0x10u);  // (from the original)
    arg0->word_3c = r12_1->word_0;
    arg0->word_40 = r12_1->word_4;
    arg0->word_44 = r12_1->word_8;
    arg0->half_48 = r12_1->half_c;
    u32 r1_1 = r12_1->word_10;
    arg0->word_4c = r1_1;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_005bf82c
GUEST_EXPORT_FRAMED(0x005bf82c, d_005bf82c::f_005bf82c, 0x70);  // pushes {r4, r5, r6} first, as the original

// f_005bf8f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bf8f0 {

struct __attribute__((packed)) Object_005bf8f0_0 {
    u8 unknown_0[0x50];  // (not used here)
    u8 byte_50;
    u8 unknown_51[0x3];  // (not used here)
    u32 word_54;
    u32 word_58;
};
GUEST_OFFSET(Object_005bf8f0_0, byte_50, 0x50);
GUEST_OFFSET(Object_005bf8f0_0, word_54, 0x54);
GUEST_OFFSET(Object_005bf8f0_0, word_58, 0x58);

struct __attribute__((packed)) Local_005bf8f0_r1_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u16 half_c;
    u8 unknown_e[0x2];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Local_005bf8f0_r1_1, word_0, 0x0);
GUEST_OFFSET(Local_005bf8f0_r1_1, word_4, 0x4);
GUEST_OFFSET(Local_005bf8f0_r1_1, word_8, 0x8);
GUEST_OFFSET(Local_005bf8f0_r1_1, half_c, 0xc);
GUEST_OFFSET(Local_005bf8f0_r1_1, word_10, 0x10);

inline constexpr u32 global_00ae5658_address = 0x00ae5658u;

void f_005bf8f0(gptr<Object_005bf8f0_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r3 = global_00ae5658_address;
    u32 r2 = 0u;
    u32 r12 = r2;
    do {
        gptr<Local_005bf8f0_r1_1> r1_1 = gptr<Local_005bf8f0_r1_1>(r0 + r2 * 0x14u);  // (from the original)
        r2 += 1u;
        r1_1->word_0 = *gptr<u32>(r3);
        r1_1->word_4 = *gptr<u32>(r3 + 4u);
        r1_1->word_8 = *gptr<u32>(r3 + 8u);
        r1_1->half_c = u16(r12);
        r1_1->word_10 = r12;
        guest::preempt();
    } while (r2 < 4u);
    arg0->byte_50 = 0xa5;  // (from the original)
    arg0->word_58 = 6;
    arg0->word_54 = 6;
    guest::cpu()->r[1] = 6u;
}

}  // namespace d_005bf8f0
GUEST_EXPORT_FRAMED(0x005bf8f0, d_005bf8f0::f_005bf8f0, 0x10);  // pushes {r4} first, as the original

// f_005bfbd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bfbd4 {

inline constexpr u32 global_00a84790_address = 0x00a84790u;
inline constexpr u32 global_00aad990_address = 0x00aad990u;
inline constexpr u32 global_00aaef18_address = 0x00aaef18u;
inline guest::global<u32, 0x00aad994> global_00aad994;
inline guest::global<u32, 0x00aad998> global_00aad998;
inline guest::global<u32, 0x00aad99c> global_00aad99c;
inline guest::global<u32, 0x00aad9a0> global_00aad9a0;
inline guest::global<u16, 0x00aaef14> global_00aaef14;
inline constexpr guest::Function<0x0013fac4, u32(u32, u32, u32, u32)> set_bytes;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32)> copy_bytes_at_any_alignment;
inline constexpr guest::Function<0x00301444, u32(u32, u32, u32)> clear;
inline constexpr guest::Function<0x005bf954, u32(u32, u32, u32)> call_005bf954;
inline constexpr guest::Function<0x005bfb94, u32(u32, u32, u32, u32)> call_005bfb94;

u32 f_005bfbd4() {
    guest::StackFrame frame(0x18);  // the original's stack frame
    set_bytes(global_00aad990_address, 4u, 8u, guest::cpu()->r[3]);
    u32 r7 = 0u;
    *global_00aad994 = r7;
    *global_00aad998 = r7;
    *global_00aad99c = r7;
    *global_00aad9a0 = r7;
    clear_aligned(global_00a84790_address, 0x29200u);  // (from the original)
    u32 r2 = guest::cpu()->r[2];
    u32 r8 = global_00a84790_address;
    u32 r4 = 0u;
    do {
        u32 r6_1 = r8 + (r4 * 3u + (r4 << 4) << 1);
        u32 r5_1 = r6_1 + 0x29214u;  // (from the original)
        clear(r5_1, 0x26u, r2);  // (from the original)
        *gptr<u8>(r5_1) = 0xa5;  // (from the original)
        copy_bytes_at_any_alignment(r6_1 + 0x292acu, r5_1, 0x26u);  // (from the original)
        r2 = guest::cpu()->r[2];
        r4 += 1u;
        guest::preempt();
    } while (r4 < 4u);
    *global_00aaef14 = u16(r7);
    u32 r0_2 = call_005bf954(global_00aaef18_address, guest::cpu()->r[1], r2);
    frame.release();
    return call_005bfb94(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005bfbd4
GUEST_EXPORT(0x005bfbd4, d_005bfbd4::f_005bfbd4);

// f_005bfc8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bfc8c {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x0070ab24, u32(u32, u32)> call_0070ab24;

u32 f_005bfc8c() {
    u32 r0_1 = look_up_object(4u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 == 0) {
        return r0_1;
    }
    u32 r1_2 = *gptr<u16>(r0_1 + 0x224u);  // (from the original)
    if (r1_2 != 0x29u && r1_2 != 0x2au) {  // (from the original)
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    u32 r0_3 = call_0070ab24(r0_1 + 0x1b4u, 0u);  // (from the original)
    if (r0_3 != 0) {
        r0_3 = 1u;
    }
    return r0_3;
}

}  // namespace d_005bfc8c
GUEST_EXPORT_FRAMED(0x005bfc8c, d_005bfc8c::f_005bfc8c, 0x4010);  // pushes {r4, lr} first, as the original

// f_005bff24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bff24 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x006503b0, u32(u32, u32, u32, u32)> call_006503b0;

u32 f_005bff24(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = look_up_object(4u, 0u, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        r1_1 = u32(*gptr<u8>(r0_1 + 0x8c5u)) >> 5u & 1u;  // (from the original)
        if (r1_1 != 0) {
            r0_1 = 0u;
        } else {
            r0_1 = call_006503b0(r0_1, r0, r1, r2);
            r1_1 = guest::cpu()->r[1];
            if (r0_1 != 0) {
                r0_1 = 1u;
            }
        }
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_005bff24
GUEST_EXPORT_FRAMED(0x005bff24, d_005bff24::f_005bff24, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005bff78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005bff78 {

inline constexpr guest::Function<0x005c33d0, u32(u32, u32, u32, u32)> look_up_object;
inline constexpr guest::Function<0x00678278, u32(u32, u32, u32, u32)> call_00678278;

struct __attribute__((packed)) Frame_005bff78 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005bff78, word_0, 0x0);
GUEST_OFFSET(Frame_005bff78, word_4, 0x4);
GUEST_OFFSET(Frame_005bff78, word_8, 0x8);
GUEST_SIZE(Frame_005bff78, 0x10);

void f_005bff78(u32 r0, u32 r1_unused, u32 r2, u32 r3, float S0) {
    guest::StackFrameOf<Frame_005bff78> frame;  // the original's stack frame
    u32 r0_1 = look_up_object(4u, 0u, r2, r3);
    if (r0_1 == 0) {
        return;
    }
    u32 r1_2 = u32(*gptr<u8>(r0_1 + 0x8c5u)) >> 5u & 1u;  // (from the original)
    if (r1_2 != 0) {
        guest::cpu()->r[1] = r1_2;
        return;
    }
    frame->word_0 = 0;
    frame->word_4 = ~0u;
    frame->word_8 = 0x100056d;  // (from the original)
    float S0_2 = 0.0f;
    u32 r1_3 = gptr<u16>(0x881b98u)[r0 & 3u];  // (from the original)
    guest::cpu()->s[0] = S0_2;
    call_00678278(r0_1, r1_3, 0u, 0u);
}

}  // namespace d_005bff78
GUEST_EXPORT_FRAMED(0x005bff78, d_005bff78::f_005bff78, 0x4010);  // pushes {r4, lr} first, as the original
