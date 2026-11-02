// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_00681214: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00681214 {

struct __attribute__((packed)) Local_00681214_r0_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00681214_r0_1, word_0, 0x0);
GUEST_OFFSET(Local_00681214_r0_1, word_4, 0x4);
GUEST_OFFSET(Local_00681214_r0_1, word_8, 0x8);

inline guest::global<u32, 0x0094df50> global_0094df50;
inline guest::global<u32, 0x0098570c> global_0098570c;
inline guest::global<u32, 0x00985710> global_00985710;
inline guest::global<u32, 0x00985714> global_00985714;
inline constexpr guest::Function<0x002fe7dd, u32(u32)> call_002fe7dc;

u32 f_00681214() {
    guest::StackFrame frame(0x10);  // the original's stack frame
    if ((*global_0094df50 & 1u) == 0) {
        call_002fe7dc(0x94df50u);  // (from the original)
    }
    float S0_1 = 0.0f;
    float S1_1 = -4.0f;
    gptr<Local_00681214_r0_1> r0_1 = gptr<Local_00681214_r0_1>(frame.at(0).addr());
    r0_1->word_0 = std::bit_cast<u32>(S0_1);
    r0_1->word_4 = std::bit_cast<u32>(S1_1);
    r0_1->word_8 = std::bit_cast<u32>(S0_1);
    *global_0098570c = r0_1->word_0;
    u32 r1_1 = r0_1->word_4;
    *global_00985710 = r1_1;
    *global_00985714 = r0_1->word_8;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return 0x98570cu;  // (from the original)
}

}  // namespace d_00681214
GUEST_EXPORT_FRAMED(0x00681214, d_00681214::f_00681214, 0x4010);  // pushes {r4, lr} first, as the original

// f_00681294: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00681294 {

struct __attribute__((packed)) Local_00681294_r0_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00681294_r0_1, word_0, 0x0);
GUEST_OFFSET(Local_00681294_r0_1, word_4, 0x4);
GUEST_OFFSET(Local_00681294_r0_1, word_8, 0x8);

inline guest::global<u32, 0x0094df54> global_0094df54;
inline guest::global<u32, 0x00985718> global_00985718;
inline guest::global<u32, 0x0098571c> global_0098571c;
inline guest::global<u32, 0x00985720> global_00985720;
inline constexpr guest::Function<0x002fe7dd, u32(u32)> call_002fe7dc;

u32 f_00681294() {
    guest::StackFrame frame(0x10);  // the original's stack frame
    if ((*global_0094df54 & 1u) == 0) {
        call_002fe7dc(0x94df54u);  // (from the original)
    }
    float S2_1 = 6.0f;
    float S1_1 = -2.0f;
    float S0_1 = 0.0f;
    gptr<Local_00681294_r0_1> r0_1 = gptr<Local_00681294_r0_1>(frame.at(0).addr());
    r0_1->word_0 = std::bit_cast<u32>(S0_1);
    r0_1->word_4 = std::bit_cast<u32>(S1_1);
    r0_1->word_8 = std::bit_cast<u32>(S2_1);
    *global_00985718 = r0_1->word_0;
    u32 r1_1 = r0_1->word_4;
    *global_0098571c = r1_1;
    *global_00985720 = r0_1->word_8;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return 0x985718u;  // (from the original)
}

}  // namespace d_00681294
GUEST_EXPORT_FRAMED(0x00681294, d_00681294::f_00681294, 0x4010);  // pushes {r4, lr} first, as the original

// f_00681c14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00681c14 {

struct __attribute__((packed)) Object_00681c14_0 {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
    u8 unknown_172[0x758];  // (not used here)
    u8 byte_8ca;
    u8 byte_8cb;
    u32 word_8cc;
    u8 byte_8d0;
};
GUEST_OFFSET(Object_00681c14_0, byte_171, 0x171);
GUEST_OFFSET(Object_00681c14_0, byte_8ca, 0x8ca);
GUEST_OFFSET(Object_00681c14_0, byte_8cb, 0x8cb);
GUEST_OFFSET(Object_00681c14_0, word_8cc, 0x8cc);
GUEST_OFFSET(Object_00681c14_0, byte_8d0, 0x8d0);

inline constexpr guest::Function<0x002fc20c, u32(u32)> call_002fc20c;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> call_002fc8e8;
inline constexpr guest::Function<0x00597784, u32(u32, u32, u32)> call_00597784;
inline constexpr guest::Function<0x006606e0, u32(u32, u32, u32, u32)> call_006606e0;
inline constexpr guest::Function<0x0067bc50, u32(u32)> call_0067bc50;

struct __attribute__((packed)) Frame_00681c14 {
    u32 word_0;
};
GUEST_OFFSET(Frame_00681c14, word_0, 0x0);
GUEST_SIZE(Frame_00681c14, 0x4);

u32 f_00681c14(gptr<Object_00681c14_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_00681c14> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r0_1 = arg0.addr() + 0x171u;  // (from the original)
    u32 r1_1 = arg0->byte_171;
    if ((r1_1 & 1u) != 0) {
        arg0->byte_171 = u8(r1_1 & ~1u);
        u32 r4_1 = arg0.addr() + 0x8cau;  // (from the original)
        u32 r6_1 = arg0->byte_8d0 == 0 ? 0u : 1u;
        u32 r8_1 = sxtb(u32(arg0->byte_8ca));
        u32 r7_1 = sxtb(u32(arg0->byte_8cb));
        call_006606e0(arg0.addr(), r8_1, r7_1, r3);
        r0_1 = call_00597784(arg0.addr(), r8_1, r7_1);
        r1_1 = guest::cpu()->r[1];
        if (r6_1 != 0) {
            u32 r0_2 = frame.at(0).addr();
            call_002fc20c(r0_2);
            *gptr<u32>(r0_2) = arg0->word_8cc;
            call_002fc8e8(arg0.addr() + 0x93cu, frame.at(0).addr());  // (from the original)
            call_0067bc50(arg0.addr());
            r1_1 = guest::cpu()->r[1];
            r0_1 = frame.at(0).addr();
        }
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_00681c14
GUEST_EXPORT_FRAMED(0x00681c14, d_00681c14::f_00681c14, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_00681cb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00681cb8 {

struct __attribute__((packed)) Object_00681cb8_0 {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
    u8 unknown_172[0x3a];  // (not used here)
    u8 byte_1ac;
    u8 unknown_1ad[0x71d];  // (not used here)
    u8 byte_8ca;
    u8 byte_8cb;
    u32 word_8cc;
    u8 unknown_8d0[0x8];  // (not used here)
    u8 byte_8d8;
};
GUEST_OFFSET(Object_00681cb8_0, byte_171, 0x171);
GUEST_OFFSET(Object_00681cb8_0, byte_1ac, 0x1ac);
GUEST_OFFSET(Object_00681cb8_0, byte_8ca, 0x8ca);
GUEST_OFFSET(Object_00681cb8_0, byte_8cb, 0x8cb);
GUEST_OFFSET(Object_00681cb8_0, word_8cc, 0x8cc);
GUEST_OFFSET(Object_00681cb8_0, byte_8d8, 0x8d8);

inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32, u32)> call_002fc20c;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> call_002fc8e8;
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32)> call_002fcaf4;
inline constexpr guest::Function<0x002fe8a8, u32(u32, u32)> call_002fe8a8;
inline constexpr guest::Function<0x00597784, u32(u32, u32, u32, u32)> call_00597784;
inline constexpr guest::Function<0x00660724, u32(u32, u32, u32, u32)> call_00660724;
inline constexpr guest::Function<0x0067bc50, u32(u32)> call_0067bc50;

struct __attribute__((packed)) Frame_00681cb8 {
    u32 word_0;
    u8 unknown_4[0x1c];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00681cb8, word_0, 0x0);
GUEST_SIZE(Frame_00681cb8, 0x20);

u32 f_00681cb8(gptr<Object_00681cb8_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00681cb8> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r0_1 = arg0.addr() + 0x171u;  // (from the original)
    u32 r1_1 = arg0->byte_171;
    if ((r1_1 & 1u) != 0) {
        arg0->byte_171 = u8(r1_1 & ~1u);
        u32 r0_2 = arg0->byte_8d8;
        u32 r9_1 = sxtb(u32(arg0->byte_8ca));
        u32 r1_2 = arg0->byte_8cb;
        u32 r8_1 = sxtb(r1_2);
        if (((r0_2 & 2u) >> 1) != 0) {
            u32 r0_3 = frame.at(0).addr();
            call_002fc20c(r0_3, r1_2, r2, r3);
            *gptr<u32>(r0_3) = arg0->word_8cc;
            call_002fc8e8(arg0.addr() + 0x93cu, frame.at(0).addr());  // (from the original)
            call_0067bc50(arg0.addr());
            r3 = guest::cpu()->r[3];
        }
        call_00660724(arg0.addr(), r9_1, r8_1, r3);
        u32 r7_1 = arg0->byte_1ac;
        u32 r0_5 = frame.at(0).addr();
        call_002fc20c(r0_5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r1_6 = *gptr<u32>((arg0.addr() + 0x8cau) + 2u);  // (from the original)
        *gptr<u32>(r0_5) = r1_6;
        u32 r0_7 = call_002fcaf4(frame.at(0).addr(), r1_6);
        r1_1 = guest::cpu()->r[1];
        if (r0_7 == 0) {
            u32 r0_8 = call_002fe8a8(r7_1, r1_1);
            r1_1 = guest::cpu()->r[1];
            if (r0_8 != 0) {
                call_002fc8e8(r0_8 + 0x26u, frame.at(0).addr());  // (from the original)
                r1_1 = guest::cpu()->r[1];
            }
        }
        r0_1 = frame.at(0).addr();
        if (((r0_2 & 8u) >> 3) != 0) {
            u32 r3_7 = frame->word_0;
            frame.release();
            return call_00597784(arg0.addr(), r9_1, r8_1, r3_7);
        }
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_00681cb8
GUEST_EXPORT(0x00681cb8, d_00681cb8::f_00681cb8);

// f_00681db8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00681db8 {

inline guest::global<u32, 0x00950618> global_00950618;
inline constexpr guest::Function<0x002c9868, u32(u32, u32, u32, u32)> call_002c9868;

u32 f_00681db8() {
    u32 r0_1 = *global_00950618;
    if (r0_1 == 0) {
        return r0_1;
    }
    return call_002c9868(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00681db8
GUEST_EXPORT(0x00681db8, d_00681db8::f_00681db8);

// f_00681f00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00681f00 {

struct __attribute__((packed)) Local_00681f00_r4_1 {
    u32 word_0;
    u32 word_4;
    float float_8;
    u8 unknown_c[0x8];  // (not used here)
    u32 word_14;
    u32 word_18;
    float float_1c;
};
GUEST_OFFSET(Local_00681f00_r4_1, word_0, 0x0);
GUEST_OFFSET(Local_00681f00_r4_1, word_4, 0x4);
GUEST_OFFSET(Local_00681f00_r4_1, float_8, 0x8);
GUEST_OFFSET(Local_00681f00_r4_1, word_14, 0x14);
GUEST_OFFSET(Local_00681f00_r4_1, word_18, 0x18);
GUEST_OFFSET(Local_00681f00_r4_1, float_1c, 0x1c);

inline guest::global<u32, 0x0094defc> global_0094defc;
inline guest::global<u32, 0x0094df00> global_0094df00;
inline guest::global<u8, 0x009506b0> global_009506b0;
inline guest::global<u32, 0x009506b4> global_009506b4;
inline guest::global<u32, 0x009856dc> global_009856dc;
inline guest::global<u32, 0x009856e0> global_009856e0;
inline guest::global<u32, 0x009856e8> global_009856e8;
inline guest::global<u32, 0x009856ec> global_009856ec;
inline guest::global<u32, 0x009856f0> global_009856f0;
inline constexpr guest::Function<0x0023ffb8, u32(u32, u32, u32, u32)> call_0023ffb8;
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32)> call_002fe7dc;
inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32)> call_003171b4;
inline constexpr guest::Function<0x006dabd8, u32(u32, u32, u32)> call_006dabd8;

struct __attribute__((packed)) Frame_00681f00 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x10];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00681f00, word_0, 0x0);
GUEST_OFFSET(Frame_00681f00, word_4, 0x4);
GUEST_SIZE(Frame_00681f00, 0x18);

u32 f_00681f00(u32 r0, u32 r1, u32 r2, float S0, float S1, float S2, float S3) {
    guest::StackFrameOf<Frame_00681f00> frame;  // the original's stack frame
    u32 r0_2 = call_0023ffb8(frame.at(8).addr(), r0, r2, guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    float S0_1 = guest::cpu()->s[0];
    float S1_1 = guest::cpu()->s[1];
    gptr<Local_00681f00_r4_1> r4_1 = gptr<Local_00681f00_r4_1>(0u);
    if (r0_2 != 0) {
        call_003171b4(frame.at(0).addr(), frame.at(4).addr(), frame.at(8).addr());
        S0_1 = guest::cpu()->s[0];
        S1_1 = guest::cpu()->s[1];
        r1_1 = frame->word_0;
        r2 = frame->word_4;
        if (*global_009506b0 == 0xffu) {  // (from the original)
            u32 r0_4 = *global_009506b4;
            if (r0_4 == 0) {
                goto L_681fcc;
            }
            u32 r0_5 = call_006dabd8(r0_4, r1_1, r2);
            r1_1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            S0_1 = guest::cpu()->s[0];
            S1_1 = guest::cpu()->s[1];
            r4_1 = gptr<Local_00681f00_r4_1>(r0_5);
        }
        if (r4_1.addr() == 0) {
            guest::cpu()->r[1] = r1_1;
            guest::cpu()->s[0] = S0_1;
            guest::cpu()->s[1] = S1_1;
            return 0u;
        }
        if ((*global_0094defc & 1u) == 0) {
            guest::cpu()->s[0] = S0_1;
            guest::cpu()->s[1] = S1_1;
            call_002fe7dc(0x94defcu, r1_1, r2);  // (from the original)
        }
        *global_009856dc = r4_1->word_14;
        r1_1 = r4_1->word_18;
        *global_009856e0 = r1_1;
        float S0_2 = r4_1->float_1c;
        r4_1 = gptr<Local_00681f00_r4_1>(0x9856dcu);  // (from the original)
        r4_1->word_0 = std::bit_cast<u32>(std::bit_cast<float>(r4_1->word_0) - 32.0f);
        S1_1 = 16.0f;
        S0_1 = S0_2 + S1_1;
        r4_1->float_8 = S0_1;
    }
L_681fcc:;
    if (r4_1.addr() != 0) {
        if ((*global_0094df00 & 1u) == 0) {
            guest::cpu()->s[0] = S0_1;
            guest::cpu()->s[1] = S1_1;
            call_002fe7dc(0x94df00u, r1_1, r2);  // (from the original)
            goto L_682004;
        }
        goto L_682004;
    }
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return 0u;
L_682004:;
    *global_009856e8 = r4_1->word_0;
    *global_009856ec = r4_1->word_4;
    float S1_2 = r4_1->float_8;
    float S0_3 = 32.0f;
    float S3_2 = std::bit_cast<float>(*global_009856e8) - S0_3;
    float S0_4 = S1_2 + S0_3;
    float S2_2 = 80.0f;
    *global_009856e8 = std::bit_cast<u32>(S3_2);
    *global_009856f0 = std::bit_cast<u32>(S0_4);
    if (r1 != 0) {
        *gptr<u32>(r1) = std::bit_cast<u32>(S2_2);
    }
    guest::cpu()->r[1] = 0x886864u;  // (from the original)
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_2;
    return 0x9856e8u;  // (from the original)
}

}  // namespace d_00681f00
GUEST_EXPORT_FRAMED(0x00681f00, d_00681f00::f_00681f00, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00682080: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00682080 {

struct __attribute__((packed)) Object_00682080_0 {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
    u8 byte_172;
    u8 unknown_173[0x7ac];  // (not used here)
    u8 byte_91f;
};
GUEST_OFFSET(Object_00682080_0, byte_171, 0x171);
GUEST_OFFSET(Object_00682080_0, byte_172, 0x172);
GUEST_OFFSET(Object_00682080_0, byte_91f, 0x91f);

inline guest::global<u32, 0x00886ad8> global_00886ad8;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> call_002fc934;
inline constexpr guest::Function<0x003117bc, u32(u32)> call_003117bc;
inline constexpr guest::Function<0x004de6f0, u32(u32)> call_004de6f0;
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;
inline constexpr guest::Function<0x00673a94, u32(u32, u32)> call_00673a94;
inline constexpr guest::Function<0x0068229c, u32(u32, u32, u32, u32)> call_0068229c;
inline constexpr guest::Function<0x00683784, u32(u32, u32)> call_00683784;
inline constexpr guest::Function<0x0070e594, u32(u32, u32)> call_0070e594;
inline constexpr guest::Function<0x007626c0, u32(u32, u32, u32, u32)> call_007626c0;

struct __attribute__((packed)) Frame_00682080 {
    u32 word_0;
};
GUEST_OFFSET(Frame_00682080, word_0, 0x0);
GUEST_SIZE(Frame_00682080, 0x4);

u32 f_00682080(gptr<Object_00682080_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00682080> frame;  // the original's stack frame
    u32 r0_4 = 0;
    u32 r0_12 = 0;
    frame->word_0 = r3;
    if ((u32(arg0->byte_171) >> 5u & 1u) != 0) {
        u32 r0_1 = arg0->byte_91f;
        if (r0_1 == 0) {
            return r0_1;
        }
        u32 r0_2 = call_007626c0(arg0.addr(), r1, r2, r3);
        if (r0_2 != 0) {
            if ((u32(arg0->byte_172) >> 1u & 1u) == 0) {
                r0_4 = call_0070e594(arg0.addr() + 0x1b4u, guest::cpu()->r[1]);  // (from the original)
            } else {
                r0_4 = 0x95bfdcu;  // (from the original)
            }
            u32 r0_5 = call_003117bc(r0_4);
            if (r0_5 == 6u) {
                u32 r0_6 = call_0064d0b8(arg0.addr(), 0x6cu, 0u, 0u);  // (from the original)
                r1 = guest::cpu()->r[1];
                if (r0_6 != 0) {
                    return 1u;
                }
            }
            u32 r0_7 = call_0068229c(arg0.addr(), 0xc3u, 0x10u, 0u);  // (from the original)
            r1 = guest::cpu()->r[1];
            if (r0_7 != 0) {
                return 1u;
            }
            u32 r0_8 = call_00683784(arg0.addr(), 0u);
            r1 = guest::cpu()->r[1];
            if (r0_8 != 0) {
                return 1u;
            }
            u32 r0_9 = call_0068229c(arg0.addr(), 0xceu, 0x12u, 0u);  // (from the original)
            r1 = guest::cpu()->r[1];
            if (r0_9 != 0) {
                return 1u;
            }
            u32 r0_10 = call_0068229c(arg0.addr(), 0xcfu, 0x13u, 0u);  // (from the original)
            r1 = guest::cpu()->r[1];
            if (r0_10 != 0) {
                return 1u;
            }
            if ((u32(*gptr<u8>((arg0.addr() + 0x171u) + 1u)) >> 1u & 1u) == 0) {  // (from the original)
                r0_12 = call_0070e594(arg0.addr() + 0x1b4u, r1);  // (from the original)
            } else {
                r0_12 = 0x95bfdcu;  // (from the original)
            }
            call_002fc934(frame.at(0).addr(), r0_12);
            u32 r0_15 = call_003117bc(frame.at(0).addr());
            if (r0_15 == 0xbu) {  // (from the original)
                u32 r0_16 = call_00673a94(arg0.addr(), frame.at(0).addr());
                r1 = guest::cpu()->r[1];
                if (r0_16 != 0) {
                    return 1u;
                }
            }
        } else {
            u32 r0_18 = call_004de6f0(*global_00886ad8);
            r1 = guest::cpu()->r[1];
            if (r0_18 == 0) {
                return 0u;
            }
        }
        u32 r0_19 = call_0068229c(arg0.addr(), 0x8fu, 0xdu, 0u);  // (from the original)
        r1 = guest::cpu()->r[1];
        if (r0_19 == 0) {
            u32 r0_20 = call_0068229c(arg0.addr(), 0x90u, 7u, 0u);  // (from the original)
            r1 = guest::cpu()->r[1];
            if (r0_20 == 0) {
                u32 r0_21 = call_0068229c(arg0.addr(), 0x91u, 0x11u, 0u);  // (from the original)
                r1 = guest::cpu()->r[1];
                if (r0_21 == 0) {
                    u32 r0_22 = call_0068229c(arg0.addr(), 0xd0u, 0x14u, 0u);  // (from the original)
                    r1 = guest::cpu()->r[1];
                    if (r0_22 == 0) {
                        return 0u;
                    }
                }
            }
        }
        guest::cpu()->r[1] = r1;
        return 1u;
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_00682080
GUEST_EXPORT_FRAMED(0x00682080, d_00682080::f_00682080, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0068229c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068229c {

struct __attribute__((packed)) Object_0068229c_0 {
    u8 unknown_0[0x172];  // (not used here)
    u8 byte_172;
};
GUEST_OFFSET(Object_0068229c_0, byte_172, 0x172);

inline constexpr guest::Function<0x003117bc, u32(u32, u32, u32, u32)> call_003117bc;
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;
inline constexpr guest::Function<0x0070e594, u32(u32, u32, u32, u32)> call_0070e594;

u32 f_0068229c(gptr<Object_0068229c_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r0_2 = 0;
    u32 r0_4 = 0;
    u32 r7_1 = r1;
    u32 r5_1 = r2;
    u32 r6_1 = r3;
    if ((u32(arg0->byte_172) >> 1u & 1u) == 0) {
        r0_2 = call_0070e594(arg0.addr() + 0x1b4u, r1, r2, r3);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    } else {
        r0_2 = 0x95bfdcu;  // (from the original)
    }
    u32 r0_3 = call_003117bc(r0_2, r1, r2, r3);
    if (r0_3 != r5_1) {
        r0_4 = 0u;
    } else if (r6_1 != 0) {
        r0_4 = 1u;
    } else {
        frame.release();
        return call_0064d0b8(arg0.addr(), r7_1, 0u, 0u);
    }
    return r0_4;
}

}  // namespace d_0068229c
GUEST_EXPORT(0x0068229c, d_0068229c::f_0068229c);

// f_00682330: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00682330 {

struct __attribute__((packed)) Local_00682330_r0_1 {
    u8 unknown_0[0x13];  // (not used here)
    u8 byte_13;
    u8 byte_14;
};
GUEST_OFFSET(Local_00682330_r0_1, byte_13, 0x13);
GUEST_OFFSET(Local_00682330_r0_1, byte_14, 0x14);

struct __attribute__((packed)) Local_00682330_r4_1 {
    u8 byte_0;
    u8 unknown_1[0x6];  // (not used here)
    u8 byte_7;
};
GUEST_OFFSET(Local_00682330_r4_1, byte_0, 0x0);
GUEST_OFFSET(Local_00682330_r4_1, byte_7, 0x7);

inline constexpr guest::Function<0x005d41fc, u32(u32, u32)> call_005d41fc;
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;

u32 f_00682330(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x20);  // the original's stack frame
    u32 r5_1 = *frame.at<u32>(0x20);  // (from the original)
    gptr<Local_00682330_r0_1> r0_1 = gptr<Local_00682330_r0_1>(call_00656c20(r0, r1, r2, r3));
    gptr<Local_00682330_r4_1> r4_1 = gptr<Local_00682330_r4_1>(r0_1.addr() + 0xeu);  // (from the original)
    r4_1->byte_0 = 3;
    call_005d41fc(r4_1.addr() + 1u, r1);
    r0_1->byte_13 = u8(u32(s32(r2) >> 8));
    r0_1->byte_14 = u8(r3);
    r4_1->byte_7 = u8(r5_1);
    frame.release();
    return call_0064d0b8(r0, 0x3au, r0_1.addr(), 0u);  // (from the original)
}

}  // namespace d_00682330
GUEST_EXPORT(0x00682330, d_00682330::f_00682330);

// f_006833ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006833ac {

struct __attribute__((packed)) Object_006833ac_0 {
    u8 unknown_0[0x176];  // (not used here)
    u8 byte_176;
};
GUEST_OFFSET(Object_006833ac_0, byte_176, 0x176);


u32 f_006833ac(gptr<Object_006833ac_0> arg0) {
    u32 r1_1 = u32(arg0->byte_176) & ~8u;
    arg0->byte_176 = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
    return arg0.addr() + 0x171u;  // (from the original)
}

}  // namespace d_006833ac
GUEST_EXPORT(0x006833ac, d_006833ac::f_006833ac);

// f_006833c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006833c4 {

struct __attribute__((packed)) Object_006833c4_0 {
    u8 unknown_0[0x172];  // (not used here)
    u8 byte_172;
    u8 unknown_173[0x1];  // (not used here)
    u8 byte_174;
    u8 unknown_175[0x77e];  // (not used here)
    u8 byte_8f3;
    u8 unknown_8f4[0x13];  // (not used here)
    u8 byte_907;
    u8 unknown_908[0x13];  // (not used here)
    u8 byte_91b;
    u8 unknown_91c[0x3];  // (not used here)
    u8 byte_91f;
};
GUEST_OFFSET(Object_006833c4_0, byte_172, 0x172);
GUEST_OFFSET(Object_006833c4_0, byte_174, 0x174);
GUEST_OFFSET(Object_006833c4_0, byte_8f3, 0x8f3);
GUEST_OFFSET(Object_006833c4_0, byte_907, 0x907);
GUEST_OFFSET(Object_006833c4_0, byte_91b, 0x91b);
GUEST_OFFSET(Object_006833c4_0, byte_91f, 0x91f);

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> call_002f74e0;
inline constexpr guest::Function<0x003117bc, u32(u32, u32, u32)> call_003117bc;
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;
inline constexpr guest::Function<0x0067c2e4, u32(u32, u32, u32, u32)> call_0067c2e4;
inline constexpr guest::Function<0x0070e594, u32(u32, u32, u32)> call_0070e594;

u32 f_006833c4(gptr<Object_006833c4_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r0_8 = 0;
    u32 r0_12 = 0;
    *frame.at<u32>(0) = r3;
    u32 r6_1 = r1;
    u32 r0_1 = arg0->byte_91f;
    if (r0_1 != 0) {
        u32 r0_2 = call_002f74c8(r0_1, r1, r2, r3);
        u32 r0_3 = call_002f74e0(0x10000000u, r0_2);  // (from the original)
        r1 = guest::cpu()->r[1];
        u32 r5_1 = arg0.addr() + 0x907u;  // (from the original)
        u32 r0_4 = (r0_3 == 0 ? u32(arg0->byte_907) : u32(arg0->byte_8f3)) >> 6u & 1u;
        if (r0_4 != 0) {
            u32 r0_5 = call_002f74c8(r0_4, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            u32 r0_6 = call_002f74e0(0x10000000u, r0_5);  // (from the original)
            r1 = guest::cpu()->r[1];
            if (((r0_6 == 0 ? u32(arg0->byte_91b) : u32(arg0->byte_907)) >> 6u & 1u) == 0) {
                u32 r5_2 = arg0.addr() + 0x171u;  // (from the original)
                r1 = 1u;
                u32 r2_4 = u32(arg0->byte_174) >> 1u & 1u;
                if (r2_4 != 0) {
                    *frame.at<u8>(0) = u8(r1);
                    if ((u32(arg0->byte_172) >> 1u & 1u) == 0) {
                        r0_8 = call_0070e594(arg0.addr() + 0x1b4u, r1, r2_4);  // (from the original)
                        r1 = guest::cpu()->r[1];
                        r2_4 = guest::cpu()->r[2];
                    } else {
                        r0_8 = 0x95bfdcu;  // (from the original)
                    }
                    u32 r0_9 = call_003117bc(r0_8, r1, r2_4);
                    u32 r0_10 = call_0067c2e4(arg0.addr(), frame.at(0).addr(), 0u, r6_1);
                    r1 = guest::cpu()->r[1];
                    if (r0_10 != 0) {
                        return 1u;
                    }
                    if (r0_9 == 4u) {
                        if ((u32(arg0->byte_172) >> 1u & 1u) == 0) {
                            r0_12 = call_0070e594(arg0.addr() + 0x1b4u, r1, guest::cpu()->r[2]);  // (from the original)
                            r1 = guest::cpu()->r[1];
                        } else {
                            r0_12 = 0x95bfdcu;  // (from the original)
                        }
                        u32 r0_13 = call_003117bc(r0_12, r1, guest::cpu()->r[2]);
                        r1 = guest::cpu()->r[1];
                        if (r0_13 == 4u) {
                            if (r6_1 != 0) {
                                return 1u;
                            }
                            u32 r0_14 = call_0064d0b8(arg0.addr(), 0x70u, 0u, 0u);  // (from the original)
                            r1 = guest::cpu()->r[1];
                            if (r0_14 != 0) {
                                return 1u;
                            }
                        }
                        if (*frame.at<u8>(0) == 0) {
                            if (r6_1 == 0) {
                                call_0064d0b8(arg0.addr(), 0x1eu, 0u, 0u);  // (from the original)
                                r1 = guest::cpu()->r[1];
                            }
                            guest::cpu()->r[1] = r1;
                            return 1u;
                        }
                    }
                }
            }
        }
        r0_1 = 0u;
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_006833c4
GUEST_EXPORT_FRAMED(0x006833c4, d_006833c4::f_006833c4, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_006839a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006839a8 {

struct __attribute__((packed)) Object_006839a8_0 {
    u8 unknown_0[0x1ac];  // (not used here)
    u8 byte_1ac;
};
GUEST_OFFSET(Object_006839a8_0, byte_1ac, 0x1ac);

struct __attribute__((packed)) Local_006839a8_ea_1 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u32 word_3;
    u8 byte_7;
};
GUEST_OFFSET(Local_006839a8_ea_1, byte_0, 0x0);
GUEST_OFFSET(Local_006839a8_ea_1, byte_1, 0x1);
GUEST_OFFSET(Local_006839a8_ea_1, byte_2, 0x2);
GUEST_OFFSET(Local_006839a8_ea_1, word_3, 0x3);
GUEST_OFFSET(Local_006839a8_ea_1, byte_7, 0x7);

struct __attribute__((packed)) Local_006839a8_r1_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006839a8_r1_1, word_0, 0x0);
GUEST_OFFSET(Local_006839a8_r1_1, word_4, 0x4);

inline constexpr guest::Function<0x00582c9c, u32(u32, u32)> call_00582c9c;
inline constexpr guest::Function<0x005c5794, u32(u32)> call_005c5794;
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;
inline constexpr guest::Function<0x006515ec, u32(u32)> call_006515ec;
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;
inline constexpr guest::Function<0x0076ae1c, u32(u32)> call_0076ae1c;
inline constexpr guest::Function<0x0076c440, u32(u32, u32)> call_0076c440;

u32 f_006839a8(gptr<Object_006839a8_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x20);  // the original's stack frame
    gptr<Local_006839a8_r1_1> r1_1 = gptr<Local_006839a8_r1_1>(frame.at(0x20).addr());  // (from the original)
    u32 r4_1 = r1_1->word_0;
    u32 r6_1 = r1_1->word_4;
    u32 r0_1 = call_00656c20(arg0.addr(), r1_1.addr(), r2, r3);
    gptr<Local_006839a8_ea_1> ea_1 = gptr<Local_006839a8_ea_1>(r0_1 + 0xeu);  // (from the original)
    ea_1->byte_0 = u8(r1);
    ea_1->byte_1 = u8(r2);
    ea_1->byte_2 = u8(r3);
    u32 r1_2 = *gptr<u32>(r4_1);
    ea_1->word_3 = r1_2;
    ea_1->byte_7 = u8(r6_1);
    u32 r0_2 = call_0076c440(r4_1, r1_2);
    if (r0_2 != 0) {
        u32 r0_3 = call_0076c440(r4_1, guest::cpu()->r[1]);
        if (r0_3 != 0) {
            u32 r0_4 = arg0->byte_1ac;
            u32 r0_5 = call_006515ec(r0_4);
            if (r0_5 != 0) {
                u32 r0_6 = call_0076ae1c(r4_1);
                if (r0_6 < 0x64u) {  // (from the original)
                    call_00582c9c(r0_5 + 0x5494u, uxth(r0_6));  // (from the original)
                }
            }
        }
        u32 r0_8 = arg0->byte_1ac;
        call_005c5794(r0_8);
    }
    frame.release();
    return call_0064d0b8(arg0.addr(), 0xb9u, r0_1, 0u);  // (from the original)
}

}  // namespace d_006839a8
GUEST_EXPORT(0x006839a8, d_006839a8::f_006839a8);

// f_006853fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006853fc {

struct __attribute__((packed)) Local_006853fc_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_006853fc_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_006853fc_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_006853fc_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_006853fc_ea_1, word_c, 0xc);

struct __attribute__((packed)) Local_006853fc_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_006853fc_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_006853fc_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_006853fc_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_006853fc_ea_2, word_c, 0xc);

struct __attribute__((packed)) Local_006853fc_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_006853fc_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_006853fc_ea_3, word_4, 0x4);
GUEST_OFFSET(Local_006853fc_ea_3, word_8, 0x8);
GUEST_OFFSET(Local_006853fc_ea_3, word_c, 0xc);

struct __attribute__((packed)) Local_006853fc_ea_4 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_006853fc_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_006853fc_ea_4, word_4, 0x4);
GUEST_OFFSET(Local_006853fc_ea_4, word_8, 0x8);
GUEST_OFFSET(Local_006853fc_ea_4, word_c, 0xc);

struct __attribute__((packed)) Local_006853fc_ea_5 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_006853fc_ea_5, word_0, 0x0);
GUEST_OFFSET(Local_006853fc_ea_5, word_4, 0x4);
GUEST_OFFSET(Local_006853fc_ea_5, word_8, 0x8);
GUEST_OFFSET(Local_006853fc_ea_5, word_c, 0xc);

struct __attribute__((packed)) Local_006853fc_ea_6 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_006853fc_ea_6, word_0, 0x0);
GUEST_OFFSET(Local_006853fc_ea_6, word_4, 0x4);
GUEST_OFFSET(Local_006853fc_ea_6, word_8, 0x8);
GUEST_OFFSET(Local_006853fc_ea_6, word_c, 0xc);

inline guest::global<u32, 0x0095c71c> global_0095c71c;
inline guest::global<u32, 0x009853b0> global_009853b0;
inline guest::global<u32, 0x009853b4> global_009853b4;
inline constexpr guest::Function<0x0014f9ac, u32(u32, u32, u32, u32)> call_0014f9ac;
inline constexpr guest::Function<0x001b7ce8, u32(u32, u32, u32, u32)> call_001b7ce8;
inline constexpr guest::Function<0x00290108, u32(u32, u32, u32, u32)> call_00290108;
inline constexpr guest::Function<0x00305f44, u32(u32)> call_00305f44;
inline constexpr guest::Function<0x0064f068, u32(u32, u32)> call_0064f068;
inline constexpr guest::Function<0x0070cc5c, u32(u32, u32, u32, u32)> call_0070cc5c;
inline constexpr guest::Function<0x00768044, u32(u32)> call_00768044;

void f_006853fc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_006853fc_ea_6> ea_6 = gptr<Local_006853fc_ea_6>(0u);
    u32 r4_4 = 0;
    u32 r5_3 = 0;
    u32 r6_3 = 0;
    for (;;) {
        gptr<Local_006853fc_ea_3> ea_3 = gptr<Local_006853fc_ea_3>(r13 - 0x10);  // (from the original)
        ea_3->word_0 = r4;
        ea_3->word_4 = r5;
        ea_3->word_8 = r6;
        ea_3->word_c = r14;
        r13 -= 0x10;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_00290108(r0, r1, r2, r3);
        guest::cpu()->r[13] = r13;
        u32 r0_3 = call_0064f068(2u, 0x40u);  // (from the original)
        if (r0_3 != 0) {
            u32 r4_2 = *global_0095c71c;
            if (r4_2 == 0) {
                ea_6 = gptr<Local_006853fc_ea_6>(r13);
                r13 += 0x10;  // (from the original)
                r4_4 = ea_6->word_0;
                r5_3 = ea_6->word_4;
                r6_3 = ea_6->word_8;
                guest::cpu()->r[4] = r4_4;
                guest::cpu()->r[5] = r5_3;
                guest::cpu()->r[6] = r6_3;
                guest::cpu()->r[13] = r13;
                return;
            }
            guest::cpu()->r[13] = r13;
            u32 r0_4 = call_00305f44(0x95c71cu);  // (from the original)
            guest::cpu()->r[13] = r13;
            call_001b7ce8(r4_2, r0_4, 1u, r1);
            gptr<Local_006853fc_ea_4> ea_4 = gptr<Local_006853fc_ea_4>(r13);
            r13 += 0x10;  // (from the original)
            u32 r4_3 = ea_4->word_0;
            u32 r5_2 = ea_4->word_4;
            u32 r6_2 = ea_4->word_8;
            r14 = ea_4->word_c;
            guest::cpu()->r[13] = r13;
            guest::cpu()->r[4] = r4_3;
            guest::cpu()->r[5] = r5_2;
            guest::cpu()->r[6] = r6_2;
            call_0070cc5c(r4_2, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            return;
        }
        guest::cpu()->r[13] = r13;
        u32 r0_5 = call_00768044(r1);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_5 != 0) {
            ea_6 = gptr<Local_006853fc_ea_6>(r13);
            r13 += 0x10;  // (from the original)
            r4_4 = ea_6->word_0;
            r5_3 = ea_6->word_4;
            r6_3 = ea_6->word_8;
            guest::cpu()->r[4] = r4_4;
            guest::cpu()->r[5] = r5_3;
            guest::cpu()->r[6] = r6_3;
            guest::cpu()->r[13] = r13;
            return;
        }
        gptr<Local_006853fc_ea_5> ea_5 = gptr<Local_006853fc_ea_5>(r13);
        r13 += 0x10;  // (from the original)
        r4 = ea_5->word_0;
        r5 = ea_5->word_4;
        r6 = ea_5->word_8;
        r14 = ea_5->word_c;
        if (!(1)) {
            break;
        }
        gptr<Local_006853fc_ea_1> ea_1 = gptr<Local_006853fc_ea_1>(r13 - 0x10);  // (from the original)
        ea_1->word_0 = r4;
        ea_1->word_4 = r5;
        ea_1->word_8 = r6;
        ea_1->word_c = r14;
        r13 -= 0x10;  // (from the original)
        r4 = *global_009853b0;
        r5 = *global_009853b4;
        if (r4 != r5) {
            do {
                u32 r0_1 = *gptr<u32>(r4);
                if (r0_1 != 0) {
                    guest::cpu()->r[13] = r13;
                    call_0014f9ac(r0_1 + 0x1334u, r1, r2, r3);  // (from the original)
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                }
                r4 += 4u;
                guest::preempt();
            } while (r4 != r5);
        }
        gptr<Local_006853fc_ea_2> ea_2 = gptr<Local_006853fc_ea_2>(r13);
        r13 += 0x10;  // (from the original)
        u32 r4_1 = ea_2->word_0;
        u32 r5_1 = ea_2->word_4;
        u32 r6_1 = ea_2->word_8;
        guest::cpu()->r[4] = r4_1;
        guest::cpu()->r[5] = r5_1;
        guest::cpu()->r[6] = r6_1;
        guest::cpu()->r[13] = r13;
        return;
        guest::preempt();
    }
    ea_6 = gptr<Local_006853fc_ea_6>(r13);
    r13 += 0x10;  // (from the original)
    r4_4 = ea_6->word_0;
    r5_3 = ea_6->word_4;
    r6_3 = ea_6->word_8;
    guest::cpu()->r[4] = r4_4;
    guest::cpu()->r[5] = r5_3;
    guest::cpu()->r[6] = r6_3;
    guest::cpu()->r[13] = r13;
}

}  // namespace d_006853fc
GUEST_EXPORT(0x006853fc, d_006853fc::f_006853fc);

// f_00685c18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00685c18 {

struct __attribute__((packed)) Object_00685c18_0 {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
    u8 unknown_172[0x4];  // (not used here)
    u8 byte_176;
};
GUEST_OFFSET(Object_00685c18_0, byte_171, 0x171);
GUEST_OFFSET(Object_00685c18_0, byte_176, 0x176);

inline constexpr guest::Function<0x002f74c8, u32(u32)> call_002f74c8;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> call_002f74e0;
inline constexpr guest::Function<0x0068f290, u32(u32)> call_0068f290;

u32 f_00685c18(gptr<Object_00685c18_0> arg0, u32 r1) {
    u32 r4_1 = arg0.addr() + 0x171u;  // (from the original)
    u32 r0_1 = u32(arg0->byte_171) >> 5u & 1u;
    if (r0_1 == 0) {
        return r0_1;
    }
    u32 r0_2 = call_002f74c8(r0_1);
    u32 r0_3 = call_002f74e0(0x10000000u, r0_2);  // (from the original)
    if (r0_3 == 0) {
        return r0_3;
    }
    u32 r0_4 = u32(arg0->byte_176) >> 3u & 1u;
    if (r0_4 != 0) {
        return r0_4;
    }
    call_0068f290(r0_4);
    u32 r0_5 = u32(arg0->byte_176) | 8u;
    arg0->byte_176 = u8(r0_5);
    return r0_5;
}

}  // namespace d_00685c18
GUEST_EXPORT_FRAMED(0x00685c18, d_00685c18::f_00685c18, 0x4010);  // pushes {r4, lr} first, as the original

// f_00685d7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00685d7c {

struct __attribute__((packed)) Object_00685d7c_1 {
    u16 half_0;
};
GUEST_OFFSET(Object_00685d7c_1, half_0, 0x0);

struct __attribute__((packed)) Local_00685d7c_ea_1 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Local_00685d7c_ea_1, byte_0, 0x0);
GUEST_OFFSET(Local_00685d7c_ea_1, byte_1, 0x1);
GUEST_OFFSET(Local_00685d7c_ea_1, byte_2, 0x2);

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;

void f_00685d7c(u32 r0, gptr<Object_00685d7c_1> arg1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r0_1 = call_00656c20(r0, arg1.addr(), r2, r3);
    gptr<Local_00685d7c_ea_1> ea_1 = gptr<Local_00685d7c_ea_1>(r0_1 + 0xeu);  // (from the original)
    ea_1->byte_0 = u8(u32(s32(u32(arg1->half_0)) >> 8));
    ea_1->byte_1 = u8(r2);
    ea_1->byte_2 = u8(r3);
    frame.release();
    call_0064d0b8(r0, 0xb8u, r0_1, 0u);
    return;  // (from the original)
}

}  // namespace d_00685d7c
GUEST_EXPORT(0x00685d7c, d_00685d7c::f_00685d7c);

// f_00687394: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00687394 {

inline guest::global<u32, 0x0095c71c> global_0095c71c;
inline constexpr guest::Function<0x001b7ce8, u32(u32, u32, u32, u32)> call_001b7ce8;
inline constexpr guest::Function<0x00305f44, u32(u32)> call_00305f44;
inline constexpr guest::Function<0x0064f068, u32(u32, u32, u32, u32)> call_0064f068;
inline constexpr guest::Function<0x0070cc5c, u32(u32, u32, u32, u32)> call_0070cc5c;

void f_00687394(u32 r0_unused, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r5_1 = *frame.at<u32>(0x14);  // (from the original)
    u32 r0_1 = call_0064f068(5u, 0x40u, r2, r3);  // (from the original)
    if (r0_1 == 0) {
        u32 r0_2 = call_0064f068(9u, 0x40u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        if (r0_2 == 0) {
            return;
        }
    }
    u32 r4_1 = *global_0095c71c;
    if (r4_1 != 0) {
        if (r5_1 != 0) {
            u32 r0_3 = call_00305f44(0x95c71cu);  // (from the original)
            call_001b7ce8(r4_1, r0_3, 1u, r3);
        }
        frame.release();
        call_0070cc5c(r4_1, r3, guest::cpu()->r[2], guest::cpu()->r[3]);
        return;
    }
}

}  // namespace d_00687394
GUEST_EXPORT(0x00687394, d_00687394::f_00687394);

// f_0068752c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068752c {

inline guest::global<u8, 0x009506b0> global_009506b0;
inline guest::global<u32, 0x009506b4> global_009506b4;
inline guest::global<u32, 0x00ae5658> global_00ae5658;
inline guest::global<u32, 0x00ae565c> global_00ae565c;
inline guest::global<u32, 0x00ae5660> global_00ae5660;
inline constexpr guest::Function<0x0014fd24, u32(u32, u32, u32)> call_0014fd24;
inline constexpr guest::Function<0x006dfde8, u32(u32, u32, u32, u32)> call_006dfde8;

struct __attribute__((packed)) Frame_0068752c {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0068752c, word_0, 0x0);
GUEST_OFFSET(Frame_0068752c, word_4, 0x4);
GUEST_OFFSET(Frame_0068752c, word_8, 0x8);
GUEST_SIZE(Frame_0068752c, 0x10);

void f_0068752c(u32 r0, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_0068752c> frame;  // the original's stack frame
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    if (*global_009506b0 == 0xffu) {  // (from the original)
        u32 r0_1 = *global_009506b4;
        if (r0_1 != 0) {
            u32 r0_2 = call_006dfde8(r0_1, r1, r2, guest::cpu()->r[3]);
            if (r0_2 == 0) {
                r0_3 = *global_00ae5658;
                r1_1 = *global_00ae565c;
                r2_1 = *global_00ae5660;
            } else {
                call_0014fd24(r0_2, frame.at(0).addr(), r1);
                r0_3 = frame->word_0;
                r1_1 = frame->word_4;
                r2_1 = frame->word_8;
            }
            *gptr<u32>(r0) = r0_3;
            *gptr<u32>(r0 + 4) = r1_1;
            *gptr<u32>(r0 + 8) = r2_1;
            return;
        }
    }
    u32 r1_3 = *global_00ae565c;
    u32 r2_2 = *global_00ae5660;
    *gptr<u32>(r0) = *global_00ae5658;
    *gptr<u32>(r0 + 4) = r1_3;
    *gptr<u32>(r0 + 8) = r2_2;
}

}  // namespace d_0068752c
GUEST_EXPORT_FRAMED(0x0068752c, d_0068752c::f_0068752c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00687bac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00687bac {

struct __attribute__((packed)) Object_00687bac_0 {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u32 word_28;
    u8 unknown_2c[0x2];  // (not used here)
    u16 half_2e;
    u8 unknown_30[0x4];  // (not used here)
    u16 half_34;
    u8 unknown_36[0x13b];  // (not used here)
    u8 byte_171;
    u8 unknown_172[0x5];  // (not used here)
    u8 byte_177;
    u8 unknown_178[0x31];  // (not used here)
    u8 byte_1a9;
    u8 unknown_1aa[0x772];  // (not used here)
    u8 byte_91c;
};
GUEST_OFFSET(Object_00687bac_0, word_14, 0x14);
GUEST_OFFSET(Object_00687bac_0, word_18, 0x18);
GUEST_OFFSET(Object_00687bac_0, word_1c, 0x1c);
GUEST_OFFSET(Object_00687bac_0, word_20, 0x20);
GUEST_OFFSET(Object_00687bac_0, word_24, 0x24);
GUEST_OFFSET(Object_00687bac_0, word_28, 0x28);
GUEST_OFFSET(Object_00687bac_0, half_2e, 0x2e);
GUEST_OFFSET(Object_00687bac_0, half_34, 0x34);
GUEST_OFFSET(Object_00687bac_0, byte_171, 0x171);
GUEST_OFFSET(Object_00687bac_0, byte_177, 0x177);
GUEST_OFFSET(Object_00687bac_0, byte_1a9, 0x1a9);
GUEST_OFFSET(Object_00687bac_0, byte_91c, 0x91c);

inline constexpr guest::Function<0x005d41b8, u32(u32, u32)> call_005d41b8;
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;
inline constexpr guest::Function<0x00656c20, u32(u32, u32)> call_00656c20;
inline constexpr guest::Function<0x0066a34c, u32(u32)> call_0066a34c;
inline constexpr guest::Function<0x007656b8, u32(u32, u32, u32, u32)> call_007656b8;

struct __attribute__((packed)) Frame_00687bac {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00687bac, word_0, 0x0);
GUEST_OFFSET(Frame_00687bac, word_4, 0x4);
GUEST_OFFSET(Frame_00687bac, word_8, 0x8);
GUEST_SIZE(Frame_00687bac, 0x14);

u32 f_00687bac(gptr<Object_00687bac_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00687bac> frame;  // the original's stack frame
    call_007656b8(frame.at(0).addr(), arg0.addr(), r2, r3);
    arg0->word_14 = frame->word_0;
    arg0->word_18 = frame->word_4;
    arg0->word_1c = frame->word_8;
    arg0->word_20 = frame->word_0;
    arg0->word_24 = frame->word_4;
    arg0->word_28 = frame->word_8;
    u32 r0_3 = call_005d41b8(arg0.addr() + 0x53cu, 0xae5658u);  // (from the original)
    u32 r0_4 = call_0066a34c(r0_3);
    *frame.at<u32>(0xc) = r0_4;  // (from the original)
    u32 r0_5 = *frame.at<u16>(0xc);  // (from the original)
    arg0->half_2e = u16(r0_5);
    arg0->half_34 = u16(r0_5);
    u32 r0_6 = arg0->byte_1a9;
    if (r0_6 == 3u) {
        return r0_6;
    }
    u32 r1_3 = u32(arg0->byte_171) >> 5u & 1u;
    if (r1_3 == 0) {
        guest::cpu()->r[1] = r1_3;
        return arg0.addr() + 0x171u;  // (from the original)
    }
    u32 r0_8 = u32(arg0->byte_177) >> 2u & 1u;
    if (r0_8 != 0) {
        guest::cpu()->r[1] = r1_3;
        return r0_8;
    }
    u32 r0_9 = arg0->byte_91c;
    if (r0_9 != 2u) {
        guest::cpu()->r[1] = r1_3;
        return r0_9;
    }
    u32 r0_10 = call_00656c20(arg0.addr(), r1_3);
    *gptr<u8>(r0_10 + 0xeu) = 0;  // (from the original)
    u32 r0_11 = call_0064d0b8(arg0.addr(), 0xbfu, r0_10, 0u);  // (from the original)
    return r0_11;
}

}  // namespace d_00687bac
GUEST_EXPORT_FRAMED(0x00687bac, d_00687bac::f_00687bac, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00687f04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00687f04 {

struct __attribute__((packed)) Object_00687f04_0 {
    u8 unknown_0[0x1ac];  // (not used here)
    u8 byte_1ac;
};
GUEST_OFFSET(Object_00687f04_0, byte_1ac, 0x1ac);

inline constexpr guest::Function<0x002fc934, u32(u32, u32)> call_002fc934;
inline constexpr guest::Function<0x002fe8a8, u32(u32, u32, u32, u32)> call_002fe8a8;
inline constexpr guest::Function<0x005359fc, u32(u32)> call_005359fc;
inline constexpr guest::Function<0x0076fd38, u32(u32, u32)> call_0076fd38;
inline constexpr guest::Function<0x0076fe68, u32(u32, u32, u32)> call_0076fe68;
inline constexpr guest::Function<0x007701b8, u32(u32, u32)> call_007701b8;

struct __attribute__((packed)) Frame_00687f04 {
    u32 word_0;
};
GUEST_OFFSET(Frame_00687f04, word_0, 0x0);
GUEST_SIZE(Frame_00687f04, 0x4);

u32 f_00687f04(gptr<Object_00687f04_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00687f04> frame;  // the original's stack frame
    u32 r0_11 = 0;
    frame->word_0 = r3;
    u32 r0_1 = arg0->byte_1ac;
    u32 r0_2 = call_002fe8a8(r0_1, r1, r2, r3);
    if (r0_2 != 0) {
        u32 r0_3 = arg0->byte_1ac;
        u32 r0_4 = call_002fe8a8(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        if (r0_4 != 0) {
            u32 r0_6 = call_0076fd38(r0_4 + 0x6c20u, r1);  // (from the original)
            if (r0_6 != 0) {
                return 0u;
            }
        }
        u32 r5_1 = r0_2 + 0x6c20u;  // (from the original)
        u32 r0_7 = frame.at(0).addr();
        call_002fc934(r0_7, r2);
        u32 r0_8 = call_007701b8(r5_1, r0_7);
        if (r0_8 == 0) {
            u32 r0_9 = call_005359fc(r1);
            u32 r4_1 = *gptr<u32>(r0_9 + 4u);
            u32 r0_10 = call_0076fe68(r5_1, r1, 1u);
            r0_11 = r4_1 - r0_10;
            if (r0_11 == 1u) {
                return r0_11;
            }
        }
    }
    return 0u;
}

}  // namespace d_00687f04
GUEST_EXPORT_FRAMED(0x00687f04, d_00687f04::f_00687f04, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00687fb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00687fb4 {

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;

u32 f_00687fb4(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = call_00656c20(r0, r1, r2, r3);
    *gptr<u8>(r0_1 + 0xeu) = u8(r1);  // (from the original)
    frame.release();
    return call_0064d0b8(r0, 0xa7u, r0_1, 0u);  // (from the original)
}

}  // namespace d_00687fb4
GUEST_EXPORT(0x00687fb4, d_00687fb4::f_00687fb4);

// f_00687fe0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00687fe0 {

struct __attribute__((packed)) Local_00687fe0_ea_1 {
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
GUEST_OFFSET(Local_00687fe0_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00687fe0_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_00687fe0_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_00687fe0_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_00687fe0_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_00687fe0_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_00687fe0_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_00687fe0_ea_1, word_1c, 0x1c);
GUEST_OFFSET(Local_00687fe0_ea_1, word_20, 0x20);
GUEST_OFFSET(Local_00687fe0_ea_1, word_24, 0x24);

struct __attribute__((packed)) Local_00687fe0_ea_2 {
    u16 half_0;
    u8 unknown_2[0x2];  // (not used here)
    u8 byte_4;
    u8 unknown_5[0x2];  // (not used here)
    u8 byte_7;
};
GUEST_OFFSET(Local_00687fe0_ea_2, half_0, 0x0);
GUEST_OFFSET(Local_00687fe0_ea_2, byte_4, 0x4);
GUEST_OFFSET(Local_00687fe0_ea_2, byte_7, 0x7);

struct __attribute__((packed)) Local_00687fe0_ea_7 {
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
GUEST_OFFSET(Local_00687fe0_ea_7, word_0, 0x0);
GUEST_OFFSET(Local_00687fe0_ea_7, word_4, 0x4);
GUEST_OFFSET(Local_00687fe0_ea_7, word_8, 0x8);
GUEST_OFFSET(Local_00687fe0_ea_7, word_c, 0xc);
GUEST_OFFSET(Local_00687fe0_ea_7, word_10, 0x10);
GUEST_OFFSET(Local_00687fe0_ea_7, word_14, 0x14);
GUEST_OFFSET(Local_00687fe0_ea_7, word_18, 0x18);
GUEST_OFFSET(Local_00687fe0_ea_7, word_1c, 0x1c);
GUEST_OFFSET(Local_00687fe0_ea_7, word_20, 0x20);

struct __attribute__((packed)) Local_00687fe0_r1_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00687fe0_r1_1, word_0, 0x0);
GUEST_OFFSET(Local_00687fe0_r1_1, word_4, 0x4);

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;

struct __attribute__((packed)) Frame_00687fe0 {
    u16 half_0;
    u8 unknown_2[0x26];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00687fe0, half_0, 0x0);
GUEST_SIZE(Frame_00687fe0, 0x28);

u32 f_00687fe0(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00687fe0> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_00687fe0_ea_1> ea_1 = gptr<Local_00687fe0_ea_1>(frame.at(0).addr());
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
    gptr<Local_00687fe0_r1_1> r1_1 = gptr<Local_00687fe0_r1_1>(frame.at(0x2c).addr());  // (from the original)
    u32 r5_1 = *frame.at<u32>(0x28);  // (from the original)
    u32 r4_1 = r1_1->word_0;
    u32 r6_1 = r1_1->word_4;
    u32 r0_1 = call_00656c20(r0, r1_1.addr(), r2, r3);
    gptr<Local_00687fe0_ea_2> ea_2 = gptr<Local_00687fe0_ea_2>(r0_1 + 0xeu);  // (from the original)
    ea_2->half_0 = u16(r1);
    frame->half_0 = u16(r2);
    *gptr<u16>(ea_2.addr() + 2u) = u16(r2);
    if (r4_1 == 0) {
        r4_1 = r0 + 0x2eu;  // (from the original)
    }
    *gptr<u8>(r0_1 + 0x14u) = u8(r3);  // (from the original)
    *gptr<u8>(r0_1 + 0x13u) = u8(r5_1);  // (from the original)
    ea_2->byte_4 = u8(u32(s32(u32(*gptr<u16>(r4_1))) >> 8));
    ea_2->byte_7 = u8(r6_1);
    gptr<Local_00687fe0_ea_7> ea_7 = gptr<Local_00687fe0_ea_7>(frame.at(4).addr());
    u32 r4_2 = ea_7->word_0;
    u32 r5_2 = ea_7->word_4;
    u32 r6_2 = ea_7->word_8;
    u32 r7_1 = ea_7->word_c;
    u32 r8_1 = ea_7->word_10;
    u32 r9_1 = ea_7->word_14;
    u32 r10_1 = ea_7->word_18;
    u32 r11_1 = ea_7->word_1c;
    r14 = ea_7->word_20;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
    guest::cpu()->r[10] = r10_1;
    guest::cpu()->r[11] = r11_1;
    frame.release();
    return call_0064d0b8(r0, 0xc5u, r0_1, 0u);  // (from the original)
}

}  // namespace d_00687fe0
GUEST_EXPORT(0x00687fe0, d_00687fe0::f_00687fe0);

// f_00688144: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00688144 {

struct __attribute__((packed)) Local_00688144_r0_1 {
    u8 unknown_0[0x13];  // (not used here)
    u8 byte_13;
    u8 byte_14;
};
GUEST_OFFSET(Local_00688144_r0_1, byte_13, 0x13);
GUEST_OFFSET(Local_00688144_r0_1, byte_14, 0x14);

struct __attribute__((packed)) Local_00688144_r4_1 {
    u8 byte_0;
    u8 unknown_1[0x6];  // (not used here)
    u8 byte_7;
};
GUEST_OFFSET(Local_00688144_r4_1, byte_0, 0x0);
GUEST_OFFSET(Local_00688144_r4_1, byte_7, 0x7);

inline constexpr guest::Function<0x005d41fc, u32(u32, u32)> call_005d41fc;
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;

u32 f_00688144(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x20);  // the original's stack frame
    u32 r5_1 = *frame.at<u32>(0x20);  // (from the original)
    gptr<Local_00688144_r0_1> r0_1 = gptr<Local_00688144_r0_1>(call_00656c20(r0, r1, r2, r3));
    gptr<Local_00688144_r4_1> r4_1 = gptr<Local_00688144_r4_1>(r0_1.addr() + 0xeu);  // (from the original)
    r4_1->byte_0 = 3;
    call_005d41fc(r4_1.addr() + 1u, r1);
    r0_1->byte_13 = u8(u32(s32(r2) >> 8));
    r0_1->byte_14 = u8(r3);
    r4_1->byte_7 = u8(r5_1);
    frame.release();
    return call_0064d0b8(r0, 0x89u, r0_1.addr(), 0u);  // (from the original)
}

}  // namespace d_00688144
GUEST_EXPORT(0x00688144, d_00688144::f_00688144);

// f_00689120: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00689120 {

struct __attribute__((packed)) Object_00689120_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_00689120_1, word_0, 0x0);

struct __attribute__((packed)) Local_00689120_ea_1 {
    u32 word_0;
    u8 byte_4;
};
GUEST_OFFSET(Local_00689120_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00689120_ea_1, byte_4, 0x4);

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;

u32 f_00689120(u32 r0, gptr<Object_00689120_1> arg1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r0_1 = call_00656c20(r0, arg1.addr(), r2, r3);
    gptr<Local_00689120_ea_1> ea_1 = gptr<Local_00689120_ea_1>(r0_1 + 0xeu);  // (from the original)
    ea_1->word_0 = arg1->word_0;
    ea_1->byte_4 = u8(r2);
    *gptr<u8>(r0_1 + 0x13u) = u8(r3);  // (from the original)
    frame.release();
    return call_0064d0b8(r0, 0xc0u, r0_1, 0u);  // (from the original)
}

}  // namespace d_00689120
GUEST_EXPORT(0x00689120, d_00689120::f_00689120);

// f_00689890: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00689890 {

struct __attribute__((packed)) Object_00689890_2 {
    u16 half_0;
};
GUEST_OFFSET(Object_00689890_2, half_0, 0x0);

inline constexpr guest::Function<0x005d41b8, u32(u32, u32)> call_005d41b8;
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;

void f_00689890(u32 r0, u32 r1, gptr<Object_00689890_2> arg2, u32 r3) {
    guest::StackFrame frame(0x20);  // the original's stack frame
    u32 r0_1 = call_00656c20(r0, r1, arg2.addr(), r3);
    u32 r4_1 = r0_1 + 0xeu;  // (from the original)
    call_005d41b8(r4_1, r1);
    *gptr<u8>(r4_1 + 8u) = u8(u32(s32(u32(arg2->half_0)) >> 8));
    *gptr<u8>(r0_1 + 0x17u) = u8(r3);  // (from the original)
    frame.release();
    call_0064d0b8(r0, 0x2du, r0_1, 0u);
    return;  // (from the original)
}

}  // namespace d_00689890
GUEST_EXPORT(0x00689890, d_00689890::f_00689890);

// f_0068a3fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068a3fc {

struct __attribute__((packed)) Object_0068a3fc_0 {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
    u8 unknown_172[0x37];  // (not used here)
    u8 byte_1a9;
};
GUEST_OFFSET(Object_0068a3fc_0, byte_171, 0x171);
GUEST_OFFSET(Object_0068a3fc_0, byte_1a9, 0x1a9);

inline guest::global<u8, 0x00aaef14> global_00aaef14;
inline constexpr guest::Function<0x002f74c8, u32(u32)> call_002f74c8;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> call_002f74e0;

void f_0068a3fc(gptr<Object_0068a3fc_0> arg0, u32 r1) {
    u32 r0_1 = u32(arg0->byte_171) >> 5u & 1u;
    if (r0_1 != 0) {
        u32 r0_2 = call_002f74c8(r0_1);
        u32 r0_3 = call_002f74e0(4u, r0_2);
        r1 = guest::cpu()->r[1];
        if (r0_3 != 0) {
            u32 r0_4 = call_002f74c8(r0_3);
            u32 r0_5 = call_002f74e0(0x20u, r0_4);  // (from the original)
            r1 = guest::cpu()->r[1];
            if (r0_5 == 0) {
                u32 r0_6 = call_002f74c8(r0_5);
                u32 r0_7 = call_002f74e0(0x10u, r0_6);  // (from the original)
                r1 = guest::cpu()->r[1];
                if (r0_7 != 0) {
                    return;
                }
            } else if (arg0->byte_1a9 == 0x46u) {  // (from the original)
                guest::cpu()->r[1] = r1;
                return;
            }
            *global_00aaef14 = u8(u32(*global_00aaef14) | 4u);
        }
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0068a3fc
GUEST_EXPORT_FRAMED(0x0068a3fc, d_0068a3fc::f_0068a3fc, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0068a80c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068a80c {

struct __attribute__((packed)) Object_0068a80c_0 {
    u8 unknown_0[0x173];  // (not used here)
    u8 byte_173;
    u8 unknown_174[0x38];  // (not used here)
    u8 byte_1ac;
    u8 unknown_1ad[0x233];  // (not used here)
    u32 word_3e0;
    u8 unknown_3e4[0x4];  // (not used here)
    u8 byte_3e8;
    u8 unknown_3e9[0x559];  // (not used here)
    u8 byte_942;
    u8 unknown_943[0x1];  // (not used here)
    u32 word_944;
    u32 word_948;
    u8 byte_94c;
};
GUEST_OFFSET(Object_0068a80c_0, byte_173, 0x173);
GUEST_OFFSET(Object_0068a80c_0, byte_1ac, 0x1ac);
GUEST_OFFSET(Object_0068a80c_0, word_3e0, 0x3e0);
GUEST_OFFSET(Object_0068a80c_0, byte_3e8, 0x3e8);
GUEST_OFFSET(Object_0068a80c_0, byte_942, 0x942);
GUEST_OFFSET(Object_0068a80c_0, word_944, 0x944);
GUEST_OFFSET(Object_0068a80c_0, word_948, 0x948);
GUEST_OFFSET(Object_0068a80c_0, byte_94c, 0x94c);

inline constexpr guest::Function<0x0010ac51, u32(u32, u32)> call_0010ac50;
inline constexpr guest::Function<0x001d2e8c, u32(u32, u32, u32)> call_001d2e8c;
inline constexpr guest::Function<0x001d32c8, u32(u32, u32)> call_001d32c8;
inline constexpr guest::Function<0x002fe8a8, u32(u32, u32)> call_002fe8a8;
inline constexpr guest::Function<0x00712c18, u32(u32)> call_00712c18;
inline constexpr guest::Function<0x00712c28, u32(u32)> call_00712c28;
inline constexpr guest::Function<0x00712c38, u32(u32)> call_00712c38;

void f_0068a80c(gptr<Object_0068a80c_0> arg0, u32 r1) {
    u32 r0_1 = arg0->byte_1ac;
    u32 r0_2 = call_002fe8a8(r0_1, r1);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        u32 r0_3 = call_00712c18(r0_2 + 4u);
        arg0->byte_942 = u8(r0_3);
        u32 r0_4 = call_00712c38(r0_2 + 4u);
        arg0->word_944 = r0_4;
        u32 r0_5 = call_00712c28(r0_2 + 4u);
        arg0->word_948 = r0_5;
        arg0->byte_94c = u8(u32(*gptr<u8>(r0_2 + 0x570eu)) >> 6u & 1u);  // (from the original)
        call_0010ac50(arg0.addr() + 0x920u, r0_2 + 0xau);  // (from the original)
        call_001d32c8(arg0.addr() + 0x1b4u, arg0.addr() + 0x920u);  // (from the original)
        u32 r2_1 = arg0->word_944;
        u32 r1_4 = arg0->byte_942;
        call_001d2e8c(arg0.addr() + 0x1b4u, r1_4, r2_1);  // (from the original)
        arg0->word_3e0 = arg0->word_948;
        arg0->byte_3e8 = u8(u32(arg0->byte_94c));
        r1_1 = u32(arg0->byte_173) | 8u | 0x20u;  // (from the original)
        arg0->byte_173 = u8(r1_1);
    }
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_0068a80c
GUEST_EXPORT_FRAMED(0x0068a80c, d_0068a80c::f_0068a80c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0068aa1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068aa1c {

struct __attribute__((packed)) Object_0068aa1c_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_0068aa1c_1, word_0, 0x0);

struct __attribute__((packed)) Local_0068aa1c_ea_1 {
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
GUEST_OFFSET(Local_0068aa1c_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0068aa1c_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0068aa1c_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_0068aa1c_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_0068aa1c_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_0068aa1c_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_0068aa1c_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_0068aa1c_ea_1, word_1c, 0x1c);
GUEST_OFFSET(Local_0068aa1c_ea_1, word_20, 0x20);
GUEST_OFFSET(Local_0068aa1c_ea_1, word_24, 0x24);

struct __attribute__((packed)) Local_0068aa1c_ea_10 {
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
GUEST_OFFSET(Local_0068aa1c_ea_10, word_0, 0x0);
GUEST_OFFSET(Local_0068aa1c_ea_10, word_4, 0x4);
GUEST_OFFSET(Local_0068aa1c_ea_10, word_8, 0x8);
GUEST_OFFSET(Local_0068aa1c_ea_10, word_c, 0xc);
GUEST_OFFSET(Local_0068aa1c_ea_10, word_10, 0x10);
GUEST_OFFSET(Local_0068aa1c_ea_10, word_14, 0x14);
GUEST_OFFSET(Local_0068aa1c_ea_10, word_18, 0x18);
GUEST_OFFSET(Local_0068aa1c_ea_10, word_1c, 0x1c);
GUEST_OFFSET(Local_0068aa1c_ea_10, word_20, 0x20);

struct __attribute__((packed)) Local_0068aa1c_ea_2 {
    u32 word_0;
    u8 unknown_4[0x3];  // (not used here)
    u8 byte_7;
    u8 byte_8;
};
GUEST_OFFSET(Local_0068aa1c_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_0068aa1c_ea_2, byte_7, 0x7);
GUEST_OFFSET(Local_0068aa1c_ea_2, byte_8, 0x8);

struct __attribute__((packed)) Local_0068aa1c_r1_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0068aa1c_r1_1, word_0, 0x0);
GUEST_OFFSET(Local_0068aa1c_r1_1, word_4, 0x4);
GUEST_OFFSET(Local_0068aa1c_r1_1, word_8, 0x8);

struct __attribute__((packed)) Local_0068aa1c_r6_1 {
    float float_0;
    u8 unknown_4[0x4];  // (not used here)
    float float_8;
};
GUEST_OFFSET(Local_0068aa1c_r6_1, float_0, 0x0);
GUEST_OFFSET(Local_0068aa1c_r6_1, float_8, 0x8);

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;

struct __attribute__((packed)) Frame_0068aa1c {
    u16 half_0;
    u8 unknown_2[0x26];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0068aa1c, half_0, 0x0);
GUEST_SIZE(Frame_0068aa1c, 0x28);

void f_0068aa1c(u32 r0, gptr<Object_0068aa1c_1> arg1, u32 r2, u32 r3, float S0, float S1) {
    guest::StackFrameOf<Frame_0068aa1c> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_0068aa1c_ea_1> ea_1 = gptr<Local_0068aa1c_ea_1>(frame.at(0).addr());
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
    gptr<Local_0068aa1c_r1_1> r1_1 = gptr<Local_0068aa1c_r1_1>(frame.at(0x28).addr());  // (from the original)
    u32 r4_1 = r1_1->word_0;
    u32 r5_1 = r1_1->word_4;
    gptr<Local_0068aa1c_r6_1> r6_1 = gptr<Local_0068aa1c_r6_1>(r1_1->word_8);
    u32 r0_1 = call_00656c20(r0, r1_1.addr(), r2, r3);
    float S1_1 = 4.0f;
    gptr<Local_0068aa1c_ea_2> ea_2 = gptr<Local_0068aa1c_ea_2>(r0_1 + 0xeu);  // (from the original)
    ea_2->word_0 = arg1->word_0;
    frame->half_0 = u16(r4_1);
    *gptr<u16>(ea_2.addr() + 4u) = u16(r4_1);
    *gptr<u8>(r0_1 + 0x14u) = u8(r3);  // (from the original)
    ea_2->byte_7 = u8(r2);
    ea_2->byte_8 = u8(r5_1);
    u32 r0_2 = vcvt_sz_f(r6_1->float_0 * S1_1);
    frame->half_0 = u16(r0_2);
    *gptr<u16>(r0_1 + 0x17u) = u16(r0_2);  // (from the original)
    float S0_1 = std::bit_cast<float>(vcvt_sz_f(r6_1->float_8 * S1_1));
    u32 r0_3 = std::bit_cast<u32>(S0_1);
    frame->half_0 = u16(r0_3);
    *gptr<u16>(r0_1 + 0x19u) = u16(r0_3);  // (from the original)
    gptr<Local_0068aa1c_ea_10> ea_10 = gptr<Local_0068aa1c_ea_10>(frame.at(4).addr());
    u32 r4_2 = ea_10->word_0;
    u32 r5_2 = ea_10->word_4;
    u32 r6_2 = ea_10->word_8;
    u32 r7_1 = ea_10->word_c;
    u32 r8_1 = ea_10->word_10;
    u32 r9_1 = ea_10->word_14;
    u32 r10_1 = ea_10->word_18;
    u32 r11_1 = ea_10->word_1c;
    r14 = ea_10->word_20;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
    guest::cpu()->r[10] = r10_1;
    guest::cpu()->r[11] = r11_1;
    frame.release();
    call_0064d0b8(r0, 0x3eu, r0_1, 0u);
    return;
}

}  // namespace d_0068aa1c
GUEST_EXPORT(0x0068aa1c, d_0068aa1c::f_0068aa1c);

// f_0068b404: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068b404 {

inline guest::global<u32, 0x0014fd48> global_0014fd48;
inline guest::global<u32, 0x0095c71c> global_0095c71c;
inline constexpr guest::Function<0x001b7ce8, u32(u32, u32, u32, u32)> call_001b7ce8;
inline constexpr guest::Function<0x00292ccc, u32(u32, u32, u32, u32)> call_00292ccc;
inline constexpr guest::Function<0x00305f44, u32(u32)> call_00305f44;
inline constexpr guest::Function<0x0064f068, u32(u32, u32)> call_0064f068;
inline constexpr guest::Function<0x0070cc5c, u32(u32, u32, u32, u32)> call_0070cc5c;

void f_0068b404(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    call_00292ccc(r0, r1, r2, r3);
    u32 r0_1 = call_0064f068(0xau, 0x40u);  // (from the original)
    if (r0_1 != 0) {
        u32 r4_1 = *global_0095c71c;
        if (r4_1 == 0) {
            return;
        }
        u32 r0_2 = call_00305f44(0x95c71cu);  // (from the original)
        call_001b7ce8(r4_1, r0_2, 1u, r1);
        frame.release();
        call_0070cc5c(r4_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        return;
    }
    u32 r0_3 = u32(*gptr<u8>(r0 + 0x177u)) >> 5u & 1u;  // (from the original)
    if (r0_3 != 0) {
        frame.release();
        guest::call_address<u32>(*global_0014fd48, r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        return;
    }
}

}  // namespace d_0068b404
GUEST_EXPORT(0x0068b404, d_0068b404::f_0068b404);

// f_0068b4d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068b4d0 {

struct __attribute__((packed)) Object_0068b4d0_0 {
    u8 unknown_0[0x91a];  // (not used here)
    u8 byte_91a;
};
GUEST_OFFSET(Object_0068b4d0_0, byte_91a, 0x91a);

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;
inline constexpr guest::Function<0x00651928, u32(u32, u32, u32, u32)> call_00651928;

u32 f_0068b4d0(gptr<Object_0068b4d0_0> arg0, u32 r1) {
    u32 r2_1 = arg0->byte_91a;
    u32 r3_1 = r2_1 >> 6u & 1u;
    if (r3_1 != 0) {
        call_00651928(arg0.addr(), r1 ^ 1u, 1u, r3_1);
        return 1u;
    }
    u32 r1_3 = r2_1 >> 5u & 1u;
    if (r1_3 == 0) {
        guest::cpu()->r[1] = r1_3;
        return 0u;
    }
    call_0064d0b8(arg0.addr(), 0x21u, 0u, 0u);  // (from the original)
    return 1u;
}

}  // namespace d_0068b4d0
GUEST_EXPORT_FRAMED(0x0068b4d0, d_0068b4d0::f_0068b4d0, 0x4010);  // pushes {r4, lr} first, as the original

// f_0068c4e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068c4e4 {

struct __attribute__((packed)) Object_0068c4e4_1 {
    u8 unknown_0[0xe];  // (not used here)
    u8 byte_e;
};
GUEST_OFFSET(Object_0068c4e4_1, byte_e, 0xe);

inline constexpr guest::Function<0x002bf814, u32(u32, u32, u32, u32)> call_002bf814;
inline constexpr guest::Function<0x002bf9cc, u32(u32, u32, u32, u32)> call_002bf9cc;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> call_002fc934;
inline constexpr guest::Function<0x002fcb10, u32(u32)> call_002fcb10;
inline constexpr guest::Function<0x002fcb84, u32(u32, u32)> call_002fcb84;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> call_002fcbb0;
inline constexpr guest::Function<0x002fe8a4, u32(u32, u32, u32, u32)> call_002fe8a4;
inline constexpr guest::Function<0x0071a844, u32(u32)> call_0071a844;
inline constexpr guest::Function<0x00724424, u32(u32, u32, u32, u32)> call_00724424;

struct __attribute__((packed)) Frame_0068c4e4 {
    u32 word_0;
    u8 unknown_4[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0068c4e4, word_0, 0x0);
GUEST_SIZE(Frame_0068c4e4, 0xc);

u32 f_0068c4e4(u32 r0, gptr<Object_0068c4e4_1> arg1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0068c4e4> frame;  // the original's stack frame
    u32 r0_7 = 0;
    u32 r1_1 = arg1->byte_e;
    u32 r5_1 = !(r1_1 == 0);
    u32 r0_1 = call_002fe8a4(r0, r1_1, r2, r3);
    if (r0_1 != 0) {
        u32 r6 = 0x33a1u;  // (from the original)
        if (r5_1 == 0) {
            u32 r0_3 = call_0071a844(r0_1 + 0xau);  // (from the original)
            u32 r0_4 = call_002fcb84(r0_3, r6);
            r3 = guest::cpu()->r[3];
            if (r0_4 != 0) {
                call_002fc8e8(r0_1 + 0x26u, 0x95bfdcu, guest::cpu()->r[2], r3);  // (from the original)
                r3 = guest::cpu()->r[3];
            }
            u32 r5 = r0_1 + 0x6bd0u;  // (from the original)
            u32 r4 = 0u;
            u32 r7 = 1u;
            do {
                u32 r0_6 = call_00724424(r5, r4, 0u, r3);
                r0_7 = call_002fcb84(r0_6, r6);
                r3 = guest::cpu()->r[3];
                if (r0_7 != 0) {
                    frame->word_0 = r7;
                    r0_7 = call_002bf9cc(r5, r4, 0x95bfdcu, 0u);  // (from the original)
                    r3 = guest::cpu()->r[3];
                }
                r4 += 1u;
                guest::preempt();
            } while (r4 < 0x10u);  // (from the original)
            return r0_7;
        }
        u32 r0_8 = call_0071a844(r0_1 + 0xau);  // (from the original)
        call_002fc934(frame.at(0).addr(), r0_8);
        u32 r0_10 = frame.at(4).addr();
        call_002fcbb0(r0_10, r6);
        call_002fc8e8(r0_1 + 0x26u, r0_10, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        u32 r0_13 = call_002fcb10(frame.at(0).addr());
        if (r0_13 != 0) {
            call_002bf814(r0_1 + 0x6bd0u, frame.at(0).addr(), 0u, 1u);  // (from the original)
        }
        r0_1 = frame.at(0).addr();
    }
    return r0_1;
}

}  // namespace d_0068c4e4
GUEST_EXPORT_FRAMED(0x0068c4e4, d_0068c4e4::f_0068c4e4, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0068c644: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068c644 {

struct __attribute__((packed)) Local_0068c644_r6_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0068c644_r6_1, word_0, 0x0);
GUEST_OFFSET(Local_0068c644_r6_1, word_4, 0x4);

struct __attribute__((packed)) Local_0068c644_r6_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0068c644_r6_3, word_0, 0x0);
GUEST_OFFSET(Local_0068c644_r6_3, word_4, 0x4);

inline constexpr guest::Function<0x002fb7b0, u32(u32)> call_002fb7b0;
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;
inline constexpr guest::Function<0x006579a8, u32(u32, u32, u32, u32)> call_006579a8;
inline constexpr guest::Function<0x0068aa1c, u32(u32, u32, u32, u32)> call_0068aa1c;
inline constexpr guest::Function<0x006d96fc, u32(u32)> call_006d96fc;
inline constexpr guest::Function<0x006d9abc, u32(u32, u32)> call_006d9abc;
inline constexpr guest::Function<0x00723ad4, u32(u32)> call_00723ad4;

struct __attribute__((packed)) Frame_0068c644 {
    u32 word_0;
    u8 unknown_4[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0068c644, word_0, 0x0);
GUEST_SIZE(Frame_0068c644, 0xc);

void f_0068c644(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0068c644> frame;  // the original's stack frame
    u32 r7_1 = *frame.at<u32>(0x28);  // (from the original)
    u32 r0_1 = call_002fcb34(r1, r1, r2, r3);
    u32 r5_1 = 0x69u;  // (from the original)
    if (r0_1 - 0x26u != 0) {  // (from the original)
        if ((r0_1 - 0x26u >> 0x1f) == (((r0_1 ^ 0x26u) & (r0_1 ^ r0_1 - 0x26u)) >> 0x1f)) {  // (from the original)
            if (r0_1 == 0x28u || r0_1 == 0x66u) {  // (from the original)
                r5_1 = 0xd1u;  // (from the original)
                goto L_68c688;
            }
        } else if (r0_1 == 0x24u || r0_1 == 0x25u) {  // (from the original)
            goto L_68c688;
        }
        r5_1 = 0x8fu;  // (from the original)
    }
L_68c688:;
    if (r2 == 0) {
        u32 r0_3 = call_00723ad4(r0 + 0x68u);  // (from the original)
        if (r0_3 != 0) {
            u32 r1_3 = *gptr<u8>(r0 + 0x1acu);  // (from the original)
            call_006d9abc(r1, r1_3);
            u32 r0_4 = *gptr<u8>(r0 + 0x8c5u);  // (from the original)
            gptr<Local_0068c644_r6_1> r6_1 = gptr<Local_0068c644_r6_1>(frame.at(4).addr());
            frame->word_0 = r5_1;
            r6_1->word_0 = r5_1 == 0x69u ? 2u : 3u;  // (from the original)
            r6_1->word_4 = r7_1;
            call_0068aa1c(r0, r1, 1u, (r0_4 >> 5u & 1u) == 0 ? 1u : 2u);
            return;
        }
    } else {
        if (r3 == 0) {
            u32 r6_2 = *gptr<u32>(r0 + 0x154u);  // (from the original)
            u32 r0_6 = call_00723ad4(r0 + 0x68u);  // (from the original)
            if (r0_6 == 0 || r6_2 + 1u == 0) {
                return;
            }
            if (r6_2 == 0) {
                u32 r1_5 = *gptr<u8>(r0 + 0x1acu);  // (from the original)
                call_006d9abc(r1, r1_5);
                gptr<Local_0068c644_r6_3> r6_3 = gptr<Local_0068c644_r6_3>(frame.at(4).addr());
                frame->word_0 = r5_1;
                r6_3->word_0 = r5_1 == 0x69u ? 2u : 3u;  // (from the original)
                r6_3->word_4 = r7_1;
                call_0068aa1c(r0, r1, 0u, 0u);
                goto L_68c728;
            }
            u32 r0_7 = call_006d96fc(r0_6);
            frame->word_0 = r0_7;
            call_006579a8(r0, r1, r7_1, 0u);
            goto L_68c728;
        }
        u32 r0_9 = call_00723ad4(r0 + 0x68u);  // (from the original)
        if (r0_9 != 0) {
            u32 r0_10 = call_006d96fc(r0_9);
            frame->word_0 = r0_10;
            call_006579a8(r0, r1, r7_1, 0u);
        }
    }
    return;
L_68c728:;
    call_002fb7b0(r0 + 0x68u);  // (from the original)
    *gptr<u32>(r0 + 0x154u) = ~0u;  // (from the original)
}

}  // namespace d_0068c644
GUEST_EXPORT_FRAMED(0x0068c644, d_0068c644::f_0068c644, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_0068cbb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068cbb8 {

struct __attribute__((packed)) Object_0068cbb8_0 {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
    u8 unknown_172[0x5];  // (not used here)
    u8 byte_177;
    u8 unknown_178[0xf4];  // (not used here)
    u32 word_26c;
};
GUEST_OFFSET(Object_0068cbb8_0, byte_171, 0x171);
GUEST_OFFSET(Object_0068cbb8_0, byte_177, 0x177);
GUEST_OFFSET(Object_0068cbb8_0, word_26c, 0x26c);

struct __attribute__((packed)) Local_0068cbb8_r0_3 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_0068cbb8_r0_3, float_0, 0x0);
GUEST_OFFSET(Local_0068cbb8_r0_3, float_4, 0x4);
GUEST_OFFSET(Local_0068cbb8_r0_3, float_8, 0x8);

inline guest::global<u32, 0x0094f268> global_0094f268;
inline constexpr guest::Function<0x0014f3cc, u32(u32, u32, u32)> call_0014f3cc;
inline constexpr guest::Function<0x00252034, u32(u32, u32)> call_00252034;
inline constexpr guest::Function<0x00252850, u32(u32, u32)> call_00252850;
inline constexpr guest::Function<0x0052e3ec, u32(u32, u32)> call_0052e3ec;
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;
inline constexpr guest::Function<0x006c5c60, u32(u32, u32)> call_006c5c60;
inline constexpr guest::Function<0x0070ab44, u32(u32, u32, u32, u32)> call_0070ab44;

struct __attribute__((packed)) Frame_0068cbb8 {
    u8 unknown_0[0x34];  // (not read or written by name)
    float float_34;
    u8 unknown_38[0x1c];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0068cbb8, float_34, 0x34);
GUEST_SIZE(Frame_0068cbb8, 0x54);

u32 f_0068cbb8(gptr<Object_0068cbb8_0> arg0, float S0, float S1, float S2) {
    guest::StackFrameOf<Frame_0068cbb8> frame;  // the original's stack frame
    u32 r1_1 = u32(arg0->byte_171) >> 5u & 1u;
    if (r1_1 != 0) {
        if ((u32(arg0->byte_177) >> 5u & 1u) == 0) {
            u32 r2_1 = arg0->word_26c;
            u32 r0_2 = call_0070ab44(arg0.addr() + 0x1b4u, frame.at(0).addr(), r2_1, 0u);  // (from the original)
            r1_1 = guest::cpu()->r[1];
            S0 = guest::cpu()->s[0];
            S1 = guest::cpu()->s[1];
            if (r0_2 != 0) {
                float S2_1 = 0.0f;
                float S1_1 = 0.0f;
                float S0_1 = 10.0f;
                gptr<Local_0068cbb8_r0_3> r0_3 = gptr<Local_0068cbb8_r0_3>(frame.at(0x48).addr());  // (from the original)
                r0_3->float_0 = S0_1;
                r0_3->float_4 = S1_1;
                r0_3->float_8 = S2_1;
                guest::cpu()->s[0] = S0_1;
                guest::cpu()->s[1] = S1_1;
                guest::cpu()->s[2] = S2_1;
                call_0014f3cc(frame.at(0x3c).addr(), frame.at(0).addr(), frame.at(0x48).addr());  // (from the original)
                call_0052e3ec(frame.at(0x30).addr(), frame.at(0x3c).addr());  // (from the original)
                call_006c5c60(frame.at(0x30).addr(), 0u);  // (from the original)
                r1_1 = guest::cpu()->r[1];
                S0 = guest::cpu()->s[0];
                S1 = guest::cpu()->s[1];
                frame->float_34 = S0;
                u32 r5_1 = *global_0094f268;
                if (r5_1 != 0) {
                    float S0_4 = 22.0f;
                    guest::cpu()->s[0] = S0_4;
                    u32 r0_7 = call_00252034(r5_1, frame.at(0x30).addr());  // (from the original)
                    r1_1 = guest::cpu()->r[1];
                    S0 = guest::cpu()->s[0];
                    S1 = guest::cpu()->s[1];
                    if (r0_7 != 0) {
                        call_00252850(r5_1, r1_1);
                        call_0064d0b8(arg0.addr(), 0x26u, 0u, 0u);  // (from the original)
                        return 1u;
                    }
                }
            }
        }
    }
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return 0u;
}

}  // namespace d_0068cbb8
GUEST_EXPORT_FRAMED(0x0068cbb8, d_0068cbb8::f_0068cbb8, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0068ce74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068ce74 {

struct __attribute__((packed)) Object_0068ce74_0 {
    u8 unknown_0[0x175];  // (not used here)
    u8 byte_175;
    u8 unknown_176[0x7a7];  // (not used here)
    u8 byte_91d;
};
GUEST_OFFSET(Object_0068ce74_0, byte_175, 0x175);
GUEST_OFFSET(Object_0068ce74_0, byte_91d, 0x91d);

inline guest::global<u8, 0x0094fd20> global_0094fd20;
inline constexpr guest::Function<0x004e54a4, u32(u32, u32, u32, u32)> call_004e54a4;
inline constexpr guest::Function<0x005897c0, u32(u32, u32, u32, u32)> call_005897c0;
inline constexpr guest::Function<0x00765aac, u32(u32, u32, u32, u32)> call_00765aac;
inline constexpr guest::Function<0x00765cec, u32(u32, u32, u32, u32)> call_00765cec;

void f_0068ce74(gptr<Object_0068ce74_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r0_2 = 0;
    u32 r2_3 = 0;
    u32 r0_3 = 0;
    *frame.at<u32>(0) = r3;
    u32 r4 = r0;
    u32 r2 = arg0->byte_91d;
    u32 r5 = 1u;
    u32 r1_1 = arg0->byte_175;
    r3 = r1_1 >> 3u & 1u;
    if (r3 != 0) {
        if (r2 == 0) {
            r1_1 &= ~8u;
            arg0->byte_175 = u8(r1_1);
        }
        guest::cpu()->r[1] = r1_1;
        return;
    }
    if (r2 == 0) {
        guest::cpu()->r[1] = r1_1;
        return;
    }
    u32 r1 = r4 + 0x14u;  // (from the original)
    *frame.at<u16>(0) = u16(u32(*gptr<u16>(r4 + 0x2eu)));  // (from the original)
    if (r2 != 1u) {
        if (r2 == 2u) {
            u32 r0_1 = call_00765aac(r4, r1, *frame.at<u32>(0), r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_1 == 0) {
                *gptr<u8>(r4 + 0xca0u) = u8(r5);  // (from the original)
            } else {
                goto L_68cf2c;
            }
            goto L_68cf38;
        }
        if (r2 != 4u) {
            goto L_68cf2c;
        }
    } else {
        r0_2 = call_004e54a4(r4, r1, *frame.at<u32>(0), r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_2 != 0) {
            goto L_68cf2c;
        }
        *gptr<u8>(r4 + 0xca0u) = u8(r0_2);  // (from the original)
        goto L_68cf38;
    }
    r2_3 = *frame.at<u32>(0);
    r0_3 = call_00765cec(r4, r1, r2_3, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_3 == 0) {
        r0_2 = 2u;
        *gptr<u8>(r4 + 0xca0u) = u8(r0_2);  // (from the original)
        goto L_68cf38;
    }
L_68cf2c:;
    if (*gptr<u8>(r4 + 0xca0u) == 3u) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return;
    }
L_68cf38:;
    *gptr<u8>(r4 + 0x1520u) = 5;  // (from the original)
    call_005897c0(5u, r1, r2, r3);
    *global_0094fd20 = u8(r5);
}

}  // namespace d_0068ce74
GUEST_EXPORT_FRAMED(0x0068ce74, d_0068ce74::f_0068ce74, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0068d170: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068d170 {

struct __attribute__((packed)) Object_0068d170_0 {
    u8 unknown_0[0x66];  // (not used here)
    u8 byte_66;
    u8 unknown_67[0x10c];  // (not used here)
    u8 byte_173;
};
GUEST_OFFSET(Object_0068d170_0, byte_66, 0x66);
GUEST_OFFSET(Object_0068d170_0, byte_173, 0x173);

inline constexpr guest::Function<0x0024fc50, u32(u32, u32, u32, u32)> call_0024fc50;

u32 f_0068d170(gptr<Object_0068d170_0> arg0, u32 r1, u32 r2) {
    u32 r0_1 = u32(arg0->byte_66) >> 5u & 1u;
    if (r0_1 == 0) {
        r0_1 = call_0024fc50(arg0.addr() + 0x5ecu, r1, r2, guest::cpu()->r[3]);  // (from the original)
        r1 = guest::cpu()->r[1];
        if (r2 != 0) {
            r1 = u32(arg0->byte_173) | 2u | 4u;
            arg0->byte_173 = u8(r1);
        }
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_0068d170
GUEST_EXPORT_FRAMED(0x0068d170, d_0068d170::f_0068d170, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0068dc14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068dc14 {

struct __attribute__((packed)) Object_0068dc14_0 {
    u8 unknown_0[0x66];  // (not used here)
    u8 byte_66;
    u8 unknown_67[0x10c];  // (not used here)
    u8 byte_173;
};
GUEST_OFFSET(Object_0068dc14_0, byte_66, 0x66);
GUEST_OFFSET(Object_0068dc14_0, byte_173, 0x173);

inline constexpr guest::Function<0x00250024, u32(u32, u32, u32, u32)> call_00250024;

u32 f_0068dc14(gptr<Object_0068dc14_0> arg0, u32 r1, u32 r2) {
    u32 r0_1 = u32(arg0->byte_66) >> 5u & 1u;
    if (r0_1 == 0) {
        r0_1 = call_00250024(arg0.addr() + 0x5ecu, r1, r2, guest::cpu()->r[3]);  // (from the original)
        r1 = guest::cpu()->r[1];
        if (r2 != 0) {
            r1 = u32(arg0->byte_173) | 2u | 4u;
            arg0->byte_173 = u8(r1);
        }
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_0068dc14
GUEST_EXPORT_FRAMED(0x0068dc14, d_0068dc14::f_0068dc14, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0068e738: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068e738 {

struct __attribute__((packed)) Local_0068e738_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0068e738_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0068e738_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_0068e738_ea_10 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0068e738_ea_10, word_0, 0x0);
GUEST_OFFSET(Local_0068e738_ea_10, word_4, 0x4);

struct __attribute__((packed)) Local_0068e738_ea_11 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0068e738_ea_11, word_0, 0x0);
GUEST_OFFSET(Local_0068e738_ea_11, word_4, 0x4);

struct __attribute__((packed)) Local_0068e738_ea_12 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0068e738_ea_12, word_0, 0x0);
GUEST_OFFSET(Local_0068e738_ea_12, word_4, 0x4);

struct __attribute__((packed)) Local_0068e738_ea_13 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0068e738_ea_13, word_0, 0x0);
GUEST_OFFSET(Local_0068e738_ea_13, word_4, 0x4);

struct __attribute__((packed)) Local_0068e738_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0068e738_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_0068e738_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_0068e738_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0068e738_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_0068e738_ea_3, word_4, 0x4);

struct __attribute__((packed)) Local_0068e738_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0068e738_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_0068e738_ea_4, word_4, 0x4);

struct __attribute__((packed)) Local_0068e738_ea_5 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0068e738_ea_5, word_0, 0x0);
GUEST_OFFSET(Local_0068e738_ea_5, word_4, 0x4);

struct __attribute__((packed)) Local_0068e738_ea_6 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0068e738_ea_6, word_0, 0x0);
GUEST_OFFSET(Local_0068e738_ea_6, word_4, 0x4);

struct __attribute__((packed)) Local_0068e738_ea_7 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0068e738_ea_7, word_0, 0x0);
GUEST_OFFSET(Local_0068e738_ea_7, word_4, 0x4);

struct __attribute__((packed)) Local_0068e738_ea_8 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0068e738_ea_8, word_0, 0x0);
GUEST_OFFSET(Local_0068e738_ea_8, word_4, 0x4);

struct __attribute__((packed)) Local_0068e738_ea_9 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0068e738_ea_9, word_0, 0x0);
GUEST_OFFSET(Local_0068e738_ea_9, word_4, 0x4);

struct __attribute__((packed)) Local_0068e738_r0_52 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0068e738_r0_52, word_0, 0x0);
GUEST_OFFSET(Local_0068e738_r0_52, word_4, 0x4);

struct __attribute__((packed)) Local_0068e738_r3_49 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0068e738_r3_49, word_0, 0x0);
GUEST_OFFSET(Local_0068e738_r3_49, word_4, 0x4);

inline constexpr u32 vtable_HumanModel = 0x008eb174u;
inline constexpr u32 vtable_PlayerModel = 0x008ebc68u;
inline constexpr u32 vtable_PlayerSimpleMessage_rec = 0x008f4068u;
inline constexpr u32 vtable_AcPlayer_rec = 0x008f8630u;
inline constexpr u32 vtable_AcPlayer_rec_at_68 = 0x008f86c8u;
inline constexpr guest::Function<0x001abcd4, u32(u32, u32, u32, u32)> call_001abcd4;
inline constexpr guest::Function<0x00250560, u32(u32)> call_00250560;
inline constexpr guest::Function<0x002694b8, u32(u32)> call_002694b8;
inline constexpr guest::Function<0x00278140, u32(u32)> call_00278140;
inline constexpr guest::Function<0x002e6944, u32(u32, u32, u32, u32)> call_002e6944;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;
inline constexpr guest::Function<0x003170d0, u32(u32, u32)> call_003170d0;
inline constexpr guest::Function<0x004eb5b4, u32(u32)> call_004eb5b4;
inline constexpr guest::Function<0x004edd84, u32(u32)> call_004edd84;
inline constexpr guest::Function<0x004ef50c, u32(u32)> call_004ef50c;
inline constexpr guest::Function<0x006a8954, u32(u32)> call_006a8954;
inline constexpr guest::Function<0x006acabc, u32(u32)> call_006acabc;
inline constexpr guest::Function<0x006e480c, u32(u32, u32)> call_006e480c;

u32 f_0068e738(gptr<AcPlayer_rec> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    arg0->word_0 = vtable_AcPlayer_rec;
    arg0->word_68 = vtable_AcPlayer_rec_at_68;
    u32 r0_1 = arg0.addr() + 0x14fcu;  // (from the original)
    call_002e6944(r0_1, 0x8f8630u, 0x8f86c8u, r3);  // (from the original)
    u32 r0_2 = r0_1 - 0x40u;  // (from the original)
    call_002e6944(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_3 = r0_2 - 0x18u;  // (from the original)
    call_002e6944(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_4 = r0_3 - 0x18u;  // (from the original)
    call_002e6944(r0_4, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_5 = r0_4 - 0x18u;  // (from the original)
    call_002e6944(r0_5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_6 = r0_5 - 0x20u;  // (from the original)
    call_002e6944(r0_6, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_7 = r0_6 - 0x18u;  // (from the original)
    call_002e6944(r0_7, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_8 = r0_7 - 0x18u;  // (from the original)
    call_002e6944(r0_8, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_9 = r0_8 - 0x4cu;  // (from the original)
    call_002e6944(r0_9, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_10 = r0_9 - 0x18u;  // (from the original)
    call_002e6944(r0_10, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_11 = r0_10 - 0x18u;  // (from the original)
    call_002e6944(r0_11, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_12 = r0_11 - 0x18u;  // (from the original)
    call_002e6944(r0_12, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_13 = r0_12 - 0x24u;  // (from the original)
    call_002e6944(r0_13, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_14 = r0_13 - 0x24u;  // (from the original)
    call_002e6944(r0_14, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_15 = r0_14 - 0x6cu;  // (from the original)
    call_00250560(r0_15);
    u32 r4_1 = r0_15 - 0x1b8u;  // (from the original)
    call_002f76ac(r4_1, 0x6f8424u, 0x8cu, 3u);  // (from the original)
    u32 r0_16 = r4_1 - 0x18u;  // (from the original)
    call_002e6944(r0_16, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_17 = r0_16 - 0x410u;  // (from the original)
    call_002694b8(r0_17);
    u32 r0_18 = r0_17 - 0x18u;  // (from the original)
    call_002e6944(r0_18, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_19 = r0_18 - 0x20u;  // (from the original)
    call_002e6944(r0_19, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_20 = r0_19 - 0x20u;  // (from the original)
    call_002e6944(r0_20, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_21 = r0_20 - 0x20u;  // (from the original)
    call_002e6944(r0_21, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_22 = r0_21 - 0x18u;  // (from the original)
    call_002e6944(r0_22, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_23 = r0_22 - 0x20u;  // (from the original)
    call_002e6944(r0_23, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_24 = r0_23 - 0x18u;  // (from the original)
    call_002e6944(r0_24, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_25 = r0_24 - 0x1cu;  // (from the original)
    call_002e6944(r0_25, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_26 = r0_25 - 0x18u;  // (from the original)
    call_002e6944(r0_26, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_27 = r0_26 - 0x84u;  // (from the original)
    call_002e6944(r0_27, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_28 = r0_27 - 0x24u;  // (from the original)
    call_002e6944(r0_28, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_29 = r0_28 - 0x24u;  // (from the original)
    call_002e6944(r0_29, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_30 = r0_29 - 0x24u;  // (from the original)
    call_002e6944(r0_30, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_31 = r0_30 - 0x18u;  // (from the original)
    call_002e6944(r0_31, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_32 = r0_31 - 0x18u;  // (from the original)
    call_002e6944(r0_32, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_33 = r0_32 - 0x18u;  // (from the original)
    call_002e6944(r0_33, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_34 = r0_33 - 0x18u;  // (from the original)
    call_002e6944(r0_34, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_35 = r0_34 - 0x18u;  // (from the original)
    call_002e6944(r0_35, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_36 = r0_35 - 0x1cu;  // (from the original)
    call_004eb5b4(r0_36);
    u32 r0_37 = r0_36 - 0x18u;  // (from the original)
    call_002e6944(r0_37, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_38 = r0_37 - 0x18u;  // (from the original)
    call_002e6944(r0_38, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_39 = r0_38 - 0x18u;  // (from the original)
    call_002e6944(r0_39, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_40 = r0_39 - 0x18u;  // (from the original)
    call_002e6944(r0_40, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_41 = r0_40 - 0x18u;  // (from the original)
    call_002e6944(r0_41, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_42 = r0_41 - 0x1cu;  // (from the original)
    call_002e6944(r0_42, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_43 = r0_42 - 0x14u;  // (from the original)
    call_004eb5b4(r0_43);
    u32 r0_44 = r0_43 - 0x18u;  // (from the original)
    call_002e6944(r0_44, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_45 = r0_44 - 0x5cu;  // (from the original)
    call_002e6944(r0_45, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_46 = r0_45 - 0x2acu;  // (from the original)
    call_006a8954(r0_46);
    u32 r0_48 = call_00278140(r0_46 - 0xc8u);  // (from the original)
    u32 r0_49 = r0_48 - 0x90u;  // (from the original)
    call_006acabc(r0_49);
    u32 r0_50 = r0_49 - 0x60u;  // (from the original)
    call_006acabc(r0_50);
    u32 r0_51 = r0_50 - 0x68u;  // (from the original)
    *gptr<u32>(r0_51 - 0x2e0u) = vtable_PlayerModel;  // (from the original)
    gptr<Local_0068e738_r0_52> r0_52 = gptr<Local_0068e738_r0_52>(r0_51 - 0x19cu);  // (from the original)
    u32 r2_49 = ~0u;
    gptr<Local_0068e738_ea_1> ea_1 = gptr<Local_0068e738_ea_1>(r0_52.addr() + 0x70u);  // (from the original)
    ea_1->word_0 = 0;
    ea_1->word_4 = r2_49;
    gptr<Local_0068e738_ea_2> ea_2 = gptr<Local_0068e738_ea_2>(r0_52.addr() + 0x68u);  // (from the original)
    ea_2->word_0 = 0;
    ea_2->word_4 = r2_49;
    gptr<Local_0068e738_ea_3> ea_3 = gptr<Local_0068e738_ea_3>(r0_52.addr() + 0x60u);  // (from the original)
    ea_3->word_0 = 0;
    ea_3->word_4 = r2_49;
    gptr<Local_0068e738_ea_4> ea_4 = gptr<Local_0068e738_ea_4>(r0_52.addr() + 0x58u);  // (from the original)
    ea_4->word_0 = 0;
    ea_4->word_4 = r2_49;
    gptr<Local_0068e738_ea_5> ea_5 = gptr<Local_0068e738_ea_5>(r0_52.addr() + 0x50u);  // (from the original)
    ea_5->word_0 = 0;
    ea_5->word_4 = r2_49;
    gptr<Local_0068e738_ea_6> ea_6 = gptr<Local_0068e738_ea_6>(r0_52.addr() + 0x48u);  // (from the original)
    ea_6->word_0 = 0;
    ea_6->word_4 = r2_49;
    gptr<Local_0068e738_ea_7> ea_7 = gptr<Local_0068e738_ea_7>(r0_52.addr() + 0x40u);  // (from the original)
    ea_7->word_0 = 0;
    ea_7->word_4 = r2_49;
    gptr<Local_0068e738_ea_8> ea_8 = gptr<Local_0068e738_ea_8>(r0_52.addr() + 0x38u);  // (from the original)
    ea_8->word_0 = 0;
    ea_8->word_4 = r2_49;
    gptr<Local_0068e738_ea_9> ea_9 = gptr<Local_0068e738_ea_9>(r0_52.addr() + 0x30u);  // (from the original)
    ea_9->word_0 = 0;
    ea_9->word_4 = r2_49;
    gptr<Local_0068e738_ea_10> ea_10 = gptr<Local_0068e738_ea_10>(r0_52.addr() + 0x28u);  // (from the original)
    ea_10->word_0 = 0;
    ea_10->word_4 = r2_49;
    gptr<Local_0068e738_ea_11> ea_11 = gptr<Local_0068e738_ea_11>(r0_52.addr() + 0x20u);  // (from the original)
    ea_11->word_0 = 0;
    ea_11->word_4 = r2_49;
    gptr<Local_0068e738_ea_12> ea_12 = gptr<Local_0068e738_ea_12>(r0_52.addr() + 0x18u);  // (from the original)
    ea_12->word_0 = 0;
    ea_12->word_4 = r2_49;
    gptr<Local_0068e738_ea_13> ea_13 = gptr<Local_0068e738_ea_13>(r0_52.addr() + 0x10u);  // (from the original)
    ea_13->word_0 = 0;
    ea_13->word_4 = r2_49;
    gptr<Local_0068e738_r3_49> r3_49 = gptr<Local_0068e738_r3_49>(r0_52.addr() + 8u);
    r3_49->word_0 = 0;
    r3_49->word_4 = r2_49;
    r0_52->word_0 = 0;
    r0_52->word_4 = r2_49;
    u32 r0_53 = r0_52.addr() - 0x144u;  // (from the original)
    *gptr<u32>(r0_53) = vtable_HumanModel;
    call_001abcd4(r0_53, 0x8eb174u, r2_49, r3_49.addr());  // (from the original)
    u32 r0_54 = r0_53 + 0xccu;  // (from the original)
    call_004ef50c(r0_54);
    u32 r0_55 = r0_54 - 0x54u;  // (from the original)
    call_004edd84(r0_55);
    u32 r0_56 = r0_55 - 0x90u;  // (from the original)
    call_004eb5b4(r0_56);
    u32 r0_57 = r0_56 - 0xcu;  // (from the original)
    call_004eb5b4(r0_57);
    *gptr<u32>(r0_57 - 0x128u) = vtable_PlayerSimpleMessage_rec;  // (from the original)
    u32 r0_58 = r0_57 - 0x128u;  // (from the original)
    call_003170d0(r0_58, 0x8f4068u);  // (from the original)
    frame.release();
    return call_006e480c(r0_58 - 0x68u, guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_0068e738
GUEST_EXPORT(0x0068e738, d_0068e738::f_0068e738);

// f_0068eb30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068eb30 {

inline guest::global<u32, 0x00950874> global_00950874;

u32 f_0068eb30() {
    u32 r0_1 = *global_00950874;
    if (r0_1 == 0) {
        return r0_1;
    }
    return *gptr<u8>(r0_1 + 0xf2u) == 5u;  // (from the original)
}

}  // namespace d_0068eb30
GUEST_EXPORT(0x0068eb30, d_0068eb30::f_0068eb30);

// f_0068eba8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068eba8 {

inline guest::global<u32, 0x00950874> global_00950874;
inline constexpr guest::Function<0x001a5144, u32(u32, u32, u32, u32)> call_001a5144;

u32 f_0068eba8(u32 r0_unused, u32 r1) {
    u32 r0 = 0;
    for (;;) {
        r0 = *global_00950874;
        if (r0 == 0) {
            guest::cpu()->r[1] = r1;
            return r0;
        }
        if (!(1)) {
            break;
        }
        u32 r1_1 = *gptr<u8>(r0 + 0xf2u);  // (from the original)
        if (r1_1 != 5u) {
            guest::cpu()->r[1] = r1_1;
            return r0;
        }
        return call_001a5144(r0, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        guest::preempt();
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0068eba8
GUEST_EXPORT(0x0068eba8, d_0068eba8::f_0068eba8);

// f_0068ebc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068ebc4 {

inline guest::global<u32, 0x00950874> global_00950874;
inline constexpr guest::Function<0x001a20f4, u32(u32, u32, u32, u32)> call_001a20f4;

u32 f_0068ebc4() {
    u32 r0_1 = *global_00950874;
    if (r0_1 == 0) {
        return r0_1;
    }
    return call_001a20f4(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0068ebc4
GUEST_EXPORT(0x0068ebc4, d_0068ebc4::f_0068ebc4);

// f_0068ec10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068ec10 {

inline guest::global<u32, 0x00950874> global_00950874;

u32 f_0068ec10() {
    u32 r0_1 = *global_00950874;
    if (r0_1 == 0) {
        return r0_1;
    }
    return !(u32(*gptr<s8>(r0_1 + 0x135u)) + 1u == 0);  // (from the original)
}

}  // namespace d_0068ec10
GUEST_EXPORT(0x0068ec10, d_0068ec10::f_0068ec10);

// f_0068ec64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068ec64 {

inline guest::global<u32, 0x00950874> global_00950874;
inline constexpr guest::Function<0x001a360c, u32(u32, u32, u32, u32)> call_001a360c;

struct __attribute__((packed)) Frame_0068ec64 {
    u32 word_0;
};
GUEST_OFFSET(Frame_0068ec64, word_0, 0x0);
GUEST_SIZE(Frame_0068ec64, 0x4);

u32 f_0068ec64(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0068ec64> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r0_1 = *global_00950874;
    if (r0_1 == 0) {
        return r0_1;
    }
    frame->word_0 = r3;
    u32 r0_2 = call_001a360c(r0_1, r0, r1, r2);
    return r0_2;
}

}  // namespace d_0068ec64
GUEST_EXPORT_FRAMED(0x0068ec64, d_0068ec64::f_0068ec64, 0x4000);  // pushes {lr} first, as the original

// f_0068ec98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068ec98 {

struct __attribute__((packed)) Local_0068ec98_r0_1 {
    u8 unknown_0[0xf3];  // (not used here)
    u8 byte_f3;
    u8 unknown_f4[0x42];  // (not used here)
    u8 byte_136;
};
GUEST_OFFSET(Local_0068ec98_r0_1, byte_f3, 0xf3);
GUEST_OFFSET(Local_0068ec98_r0_1, byte_136, 0x136);

inline guest::global<u32, 0x00950874> global_00950874;

u32 f_0068ec98(u32 r0_unused, u32 r1) {
    gptr<Local_0068ec98_r0_1> r0_1 = gptr<Local_0068ec98_r0_1>(*global_00950874);
    if (r0_1.addr() == 0) {
        return r0_1.addr();
    }
    r0_1->byte_f3 = 3;
    r0_1->byte_136 = 0;
    guest::cpu()->r[1] = 3u;
    return r0_1.addr();
}

}  // namespace d_0068ec98
GUEST_EXPORT(0x0068ec98, d_0068ec98::f_0068ec98);

// f_0068ecbc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068ecbc {

inline guest::global<u32, 0x00950874> global_00950874;
inline constexpr guest::Function<0x001a36ac, u32(u32, u32)> call_001a36ac;

u32 f_0068ecbc() {
    u32 r0_1 = *global_00950874;
    if (r0_1 == 0) {
        return r0_1;
    }
    return call_001a36ac(r0_1, guest::cpu()->r[1]);
}

}  // namespace d_0068ecbc
GUEST_EXPORT(0x0068ecbc, d_0068ecbc::f_0068ecbc);

// f_0068eec8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068eec8 {

inline guest::global<u32, 0x00950874> global_00950874;
inline constexpr guest::Function<0x001a4600, u32(u32, u32, u32, u32)> call_001a4600;

void f_0068eec8(u32 r0) {
    u32 r0_1 = *global_00950874;
    if (r0_1 == 0) {
        guest::cpu()->r[1] = r0;
        return;
    }
    call_001a4600(r0_1, r0, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0068eec8
GUEST_EXPORT(0x0068eec8, d_0068eec8::f_0068eec8);

// f_0068ef60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068ef60 {

struct __attribute__((packed)) Local_0068ef60_r0_1 {
    u8 unknown_0[0xf3];  // (not used here)
    u8 byte_f3;
    u8 unknown_f4[0x42];  // (not used here)
    u8 byte_136;
};
GUEST_OFFSET(Local_0068ef60_r0_1, byte_f3, 0xf3);
GUEST_OFFSET(Local_0068ef60_r0_1, byte_136, 0x136);

inline guest::global<u32, 0x00950874> global_00950874;

void f_0068ef60() {
    gptr<Local_0068ef60_r0_1> r0_1 = gptr<Local_0068ef60_r0_1>(*global_00950874);
    if (r0_1.addr() == 0) {
        return;
    }
    r0_1->byte_f3 = 0x12;  // (from the original)
    r0_1->byte_136 = 0;
}

}  // namespace d_0068ef60
GUEST_EXPORT(0x0068ef60, d_0068ef60::f_0068ef60);

// f_0068ef84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068ef84 {

struct __attribute__((packed)) Local_0068ef84_r0_1 {
    u8 unknown_0[0xf3];  // (not used here)
    u8 byte_f3;
    u8 unknown_f4[0x42];  // (not used here)
    u8 byte_136;
};
GUEST_OFFSET(Local_0068ef84_r0_1, byte_f3, 0xf3);
GUEST_OFFSET(Local_0068ef84_r0_1, byte_136, 0x136);

inline guest::global<u32, 0x00950874> global_00950874;

void f_0068ef84(u32 r0_unused, u32 r1) {
    gptr<Local_0068ef84_r0_1> r0_1 = gptr<Local_0068ef84_r0_1>(*global_00950874);
    if (r0_1.addr() == 0) {
        return;
    }
    r0_1->byte_f3 = 2;
    r0_1->byte_136 = 0;
    guest::cpu()->r[1] = 2u;
}

}  // namespace d_0068ef84
GUEST_EXPORT(0x0068ef84, d_0068ef84::f_0068ef84);

// f_0068efa8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068efa8 {

inline guest::global<u32, 0x00950874> global_00950874;
inline constexpr guest::Function<0x001a3a28, u32(u32, u32, u32, u32)> call_001a3a28;

u32 f_0068efa8(u32 r0) {
    u32 r0_1 = *global_00950874;
    if (r0_1 == 0) {
        guest::cpu()->r[1] = r0;
        return r0_1;
    }
    return call_001a3a28(r0_1, r0, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0068efa8
GUEST_EXPORT(0x0068efa8, d_0068efa8::f_0068efa8);

// f_0068efc8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068efc8 {

inline guest::global<u32, 0x00950874> global_00950874;
inline constexpr guest::Function<0x001a5ffc, u32(u32, u32, u32, u32)> call_001a5ffc;

u32 f_0068efc8(u32 r0, u32 r1) {
    u32 r0_1 = *global_00950874;
    if (r0_1 == 0) {
        return r0_1;
    }
    return call_001a5ffc(r0_1, r0, r1, r0);
}

}  // namespace d_0068efc8
GUEST_EXPORT(0x0068efc8, d_0068efc8::f_0068efc8);

// f_0068eff0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068eff0 {

inline guest::global<u32, 0x00950874> global_00950874;
inline constexpr guest::Function<0x001a5144, u32(u32, u32, u32, u32)> call_001a5144;

void f_0068eff0() {
    for (;;) {
        u32 r0 = *global_00950874;
        if (r0 == 0) {
            return;
        }
        if (!(1)) {
            break;
        }
        u32 r1_1 = *gptr<u8>(r0 + 0xf2u);  // (from the original)
        if (r1_1 != 0xcu) {  // (from the original)
            return;
        }
        call_001a5144(r0, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        return;
        guest::preempt();
    }
}

}  // namespace d_0068eff0
GUEST_EXPORT(0x0068eff0, d_0068eff0::f_0068eff0);

// f_0068f00c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068f00c {

inline guest::global<u32, 0x00950874> global_00950874;
inline constexpr guest::Function<0x001a5144, u32(u32, u32, u32, u32)> call_001a5144;

void f_0068f00c() {
    for (;;) {
        u32 r0 = *global_00950874;
        if (r0 == 0) {
            return;
        }
        if (!(1)) {
            break;
        }
        if (*gptr<u8>(r0 + 0xf2u) != 0x19u) {  // (from the original)
            return;
        }
        *gptr<u32>(r0 + 0x13cu) = 0x8572cc;  // (from the original)
        *gptr<u8>(r0 + 0x1a9u) = 1;  // (from the original)
        call_001a5144(r0, 1u, 0x8572ccu, guest::cpu()->r[3]);
        return;  // (from the original)
        guest::preempt();
    }
}

}  // namespace d_0068f00c
GUEST_EXPORT(0x0068f00c, d_0068f00c::f_0068f00c);

// f_0068f088: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068f088 {

struct __attribute__((packed)) Local_0068f088_r0_1 {
    u8 unknown_0[0xf3];  // (not used here)
    u8 byte_f3;
    u8 unknown_f4[0x42];  // (not used here)
    u8 byte_136;
};
GUEST_OFFSET(Local_0068f088_r0_1, byte_f3, 0xf3);
GUEST_OFFSET(Local_0068f088_r0_1, byte_136, 0x136);

inline guest::global<u32, 0x00950874> global_00950874;

void f_0068f088(u32 r0_unused, u32 r1) {
    gptr<Local_0068f088_r0_1> r0_1 = gptr<Local_0068f088_r0_1>(*global_00950874);
    if (r0_1.addr() == 0) {
        return;
    }
    r0_1->byte_f3 = 2;
    r0_1->byte_136 = 0;
    guest::cpu()->r[1] = 2u;
}

}  // namespace d_0068f088
GUEST_EXPORT(0x0068f088, d_0068f088::f_0068f088);

// f_0068f0d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068f0d8 {

inline guest::global<u32, 0x00950874> global_00950874;

u32 f_0068f0d8() {
    u32 r0_1 = *global_00950874;
    if (r0_1 != 0) {
        r0_1 = *gptr<s8>(r0_1 + 0x1bau);  // (from the original)
    }
    return r0_1;
}

}  // namespace d_0068f0d8
GUEST_EXPORT(0x0068f0d8, d_0068f0d8::f_0068f0d8);

// f_0068f114: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068f114 {

inline guest::global<u32, 0x00950874> global_00950874;
inline constexpr guest::Function<0x001a5144, u32(u32, u32, u32, u32)> call_001a5144;

u32 f_0068f114() {
    u32 r0_1 = *global_00950874;
    if (r0_1 == 0) {
        return r0_1;
    }
    return call_001a5144(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0068f114
GUEST_EXPORT(0x0068f114, d_0068f114::f_0068f114);

// f_0068f130: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068f130 {

struct __attribute__((packed)) Local_0068f130_r0_1 {
    u8 unknown_0[0xf3];  // (not used here)
    u8 byte_f3;
    u8 unknown_f4[0x42];  // (not used here)
    u8 byte_136;
};
GUEST_OFFSET(Local_0068f130_r0_1, byte_f3, 0xf3);
GUEST_OFFSET(Local_0068f130_r0_1, byte_136, 0x136);

inline guest::global<u32, 0x00950874> global_00950874;

void f_0068f130() {
    gptr<Local_0068f130_r0_1> r0_1 = gptr<Local_0068f130_r0_1>(*global_00950874);
    if (r0_1.addr() == 0) {
        return;
    }
    r0_1->byte_f3 = 0xc;  // (from the original)
    r0_1->byte_136 = 0;
}

}  // namespace d_0068f130
GUEST_EXPORT(0x0068f130, d_0068f130::f_0068f130);

// f_0068f14c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068f14c {

inline guest::global<u32, 0x00950874> global_00950874;
inline constexpr guest::Function<0x001a51d0, u32(u32, u32)> call_001a51d0;

u32 f_0068f14c() {
    u32 r0_1 = *global_00950874;
    if (r0_1 == 0) {
        return r0_1;
    }
    return call_001a51d0(r0_1, guest::cpu()->r[1]);
}

}  // namespace d_0068f14c
GUEST_EXPORT(0x0068f14c, d_0068f14c::f_0068f14c);

// f_0068f168: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068f168 {

struct __attribute__((packed)) Local_0068f168_r0_1 {
    u8 unknown_0[0xf3];  // (not used here)
    u8 byte_f3;
    u8 unknown_f4[0x42];  // (not used here)
    u8 byte_136;
};
GUEST_OFFSET(Local_0068f168_r0_1, byte_f3, 0xf3);
GUEST_OFFSET(Local_0068f168_r0_1, byte_136, 0x136);

inline guest::global<u32, 0x00950874> global_00950874;

void f_0068f168(u32 r0_unused, u32 r1) {
    gptr<Local_0068f168_r0_1> r0_1 = gptr<Local_0068f168_r0_1>(*global_00950874);
    if (r0_1.addr() == 0) {
        return;
    }
    r0_1->byte_f3 = 6;
    r0_1->byte_136 = 0;
    guest::cpu()->r[1] = 6u;
}

}  // namespace d_0068f168
GUEST_EXPORT(0x0068f168, d_0068f168::f_0068f168);

// f_0068f1c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068f1c8 {

struct __attribute__((packed)) Local_0068f1c8_r0_1 {
    u8 unknown_0[0xf3];  // (not used here)
    u8 byte_f3;
    u8 unknown_f4[0x42];  // (not used here)
    u8 byte_136;
};
GUEST_OFFSET(Local_0068f1c8_r0_1, byte_f3, 0xf3);
GUEST_OFFSET(Local_0068f1c8_r0_1, byte_136, 0x136);

inline guest::global<u32, 0x00950874> global_00950874;

void f_0068f1c8(u32 r0_unused, u32 r1) {
    gptr<Local_0068f1c8_r0_1> r0_1 = gptr<Local_0068f1c8_r0_1>(*global_00950874);
    if (r0_1.addr() == 0) {
        return;
    }
    r0_1->byte_f3 = 0xf;  // (from the original)
    r0_1->byte_136 = 5;
    guest::cpu()->r[1] = 0xfu;  // (from the original)
}

}  // namespace d_0068f1c8
GUEST_EXPORT(0x0068f1c8, d_0068f1c8::f_0068f1c8);

// f_0068f1ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068f1ec {

inline guest::global<u32, 0x00950874> global_00950874;
inline constexpr guest::Function<0x001a5f58, u32(u32, u32)> call_001a5f58;

void f_0068f1ec() {
    u32 r0_1 = *global_00950874;
    if (r0_1 == 0) {
        return;
    }
    call_001a5f58(r0_1, guest::cpu()->r[1]);
}

}  // namespace d_0068f1ec
GUEST_EXPORT(0x0068f1ec, d_0068f1ec::f_0068f1ec);

// f_0068f208: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068f208 {

inline guest::global<u32, 0x00950874> global_00950874;
inline constexpr guest::Function<0x001a5f98, u32(u32, u32)> call_001a5f98;

void f_0068f208() {
    u32 r0_1 = *global_00950874;
    if (r0_1 == 0) {
        return;
    }
    call_001a5f98(r0_1, guest::cpu()->r[1]);
}

}  // namespace d_0068f208
GUEST_EXPORT(0x0068f208, d_0068f208::f_0068f208);

// f_0068f290: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068f290 {

inline guest::global<u32, 0x00950874> global_00950874;

void f_0068f290(u32 r0_unused, u32 r1) {
    for (;;) {
        u32 r0 = *global_00950874;
        if (r0 == 0) {
            guest::cpu()->r[1] = r1;
            return;
        }
        if (!(1)) {
            break;
        }
        u32 r1_1 = *gptr<u8>(r0 + 0xf2u);  // (from the original)
        if (r1_1 != 0x1au) {  // (from the original)
            guest::cpu()->r[1] = r1_1;
            return;
        }
        *gptr<u8>(r0 + 0xf3u) = 0;  // (from the original)
        *gptr<u8>(r0 + 0x136u) = 0x17;  // (from the original)
        guest::cpu()->r[1] = 0x17u;  // (from the original)
        return;
        guest::preempt();
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0068f290
GUEST_EXPORT(0x0068f290, d_0068f290::f_0068f290);

// f_0068f2ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068f2ac {

inline guest::global<u32, 0x00950874> global_00950874;
inline constexpr guest::Function<0x001a5144, u32(u32, u32, u32, u32)> call_001a5144;

void f_0068f2ac() {
    u32 r0_1 = *global_00950874;
    if (r0_1 == 0) {
        return;
    }
    call_001a5144(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0068f2ac
GUEST_EXPORT(0x0068f2ac, d_0068f2ac::f_0068f2ac);

// f_0068f2c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068f2c8 {

struct __attribute__((packed)) Object_0068f2c8_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_0068f2c8_0, word_0, 0x0);
GUEST_OFFSET(Object_0068f2c8_0, word_4, 0x4);
GUEST_OFFSET(Object_0068f2c8_0, word_8, 0x8);

struct __attribute__((packed)) Local_0068f2c8_r3_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0068f2c8_r3_1, word_0, 0x0);
GUEST_OFFSET(Local_0068f2c8_r3_1, word_4, 0x4);
GUEST_OFFSET(Local_0068f2c8_r3_1, word_8, 0x8);

inline guest::global<u32, 0x00950874> global_00950874;
inline constexpr guest::Function<0x001a360c, u32(u32, u32, u32, u32)> call_001a360c;
inline constexpr guest::Function<0x001a4f78, u32(u32, u32, u32, u32)> call_001a4f78;

struct __attribute__((packed)) Frame_0068f2c8 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not read or written by name)
    float float_8;
    u8 unknown_c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0068f2c8, word_0, 0x0);
GUEST_OFFSET(Frame_0068f2c8, float_8, 0x8);
GUEST_SIZE(Frame_0068f2c8, 0x10);

void f_0068f2c8(gptr<Object_0068f2c8_0> arg0, float S0, float S1) {
    guest::StackFrameOf<Frame_0068f2c8> frame;  // the original's stack frame
    u32 r4_1 = *global_00950874;
    if (r4_1 == 0) {
        return;
    }
    u32 r1_1 = arg0->word_4;
    u32 r2_1 = arg0->word_8;
    gptr<Local_0068f2c8_r3_1> r3_1 = gptr<Local_0068f2c8_r3_1>(frame.at(4).addr());
    r3_1->word_0 = arg0->word_0;
    r3_1->word_4 = r1_1;
    r3_1->word_8 = r2_1;
    call_001a4f78(r4_1, r1_1, r2_1, r3_1.addr());
    float S0_1 = guest::cpu()->s[0];
    float S1_1 = frame->float_8;
    float S0_2 = S0_1 + S1_1;
    frame->float_8 = S0_2;
    frame->word_0 = 0;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_1;
    call_001a360c(r4_1, frame.at(4).addr(), 0x1bu, 0x14u);  // (from the original)
}

}  // namespace d_0068f2c8
GUEST_EXPORT_FRAMED(0x0068f2c8, d_0068f2c8::f_0068f2c8, 0x4010);  // pushes {r4, lr} first, as the original

// f_0068f398: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068f398 {

inline guest::global<u32, 0x00950874> global_00950874;
inline constexpr guest::Function<0x001a360c, u32(u32, u32, u32, u32)> call_001a360c;
inline constexpr guest::Function<0x0023ffb8, u32(u32, u32, u32, u32)> call_0023ffb8;
inline constexpr guest::Function<0x005c2ce0, u32(u32, u32)> call_005c2ce0;

struct __attribute__((packed)) Frame_0068f398 {
    u32 word_0;
    u8 unknown_4[0x8];  // (not read or written by name)
    u32 word_c;
};
GUEST_OFFSET(Frame_0068f398, word_0, 0x0);
GUEST_OFFSET(Frame_0068f398, word_c, 0xc);
GUEST_SIZE(Frame_0068f398, 0x10);

u32 f_0068f398(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0068f398> frame;  // the original's stack frame
    u32 r4_1 = *global_00950874;
    if (r4_1 == 0) {
        return 0x950874u;  // (from the original)
    }
    call_0023ffb8(frame.at(4).addr(), 0x59u, r2, r3);  // (from the original)
    u32 r0_2 = call_005c2ce0(4u, 1u);
    u32 zf_1 = r0_2 == 0;
    if (r0_2 != 0) {
        r0_2 = *gptr<u32>(r0_2 + 8u);
    }
    if (!zf_1) {
        frame->word_c = r0_2;
    }
    frame->word_0 = 0;
    u32 r0_3 = call_001a360c(r4_1, frame.at(4).addr(), 0x4du, 0x13u);  // (from the original)
    return r0_3;
}

}  // namespace d_0068f398
GUEST_EXPORT_FRAMED(0x0068f398, d_0068f398::f_0068f398, 0x4010);  // pushes {r4, lr} first, as the original

// f_0068f3fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068f3fc {


u32 f_0068f3fc() {
    return 0x64u;  // (from the original)
}

}  // namespace d_0068f3fc
GUEST_EXPORT(0x0068f3fc, d_0068f3fc::f_0068f3fc);

// f_0068f460: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068f460 {

struct __attribute__((packed)) Local_0068f460_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0068f460_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0068f460_ea_1, word_4, 0x4);

inline guest::global<u32, 0x00950874> global_00950874;
inline constexpr guest::Function<0x001a360c, u32(u32, u32, u32, u32)> call_001a360c;

struct __attribute__((packed)) Frame_0068f460 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0068f460, word_0, 0x0);
GUEST_SIZE(Frame_0068f460, 0x8);

void f_0068f460(u32 r0_unused, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_0068f460> frame;  // the original's stack frame
    u32 r14 = guest::cpu()->r[14];
    u32 r0_1 = *global_00950874;
    if (r0_1 == 0) {
        return;
    }
    gptr<Local_0068f460_ea_1> ea_1 = gptr<Local_0068f460_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r3;
    ea_1->word_4 = r14;
    frame->word_0 = 0;
    call_001a360c(r0_1, r0_1 + 0x24u, 0x69u, 0x18u);  // (from the original)
    u32 ea_2 = frame.at(0).addr();
}

}  // namespace d_0068f460
GUEST_EXPORT(0x0068f460, d_0068f460::f_0068f460);
