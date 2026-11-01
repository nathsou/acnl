// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_00570544: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00570544 {

struct __attribute__((packed)) Local_00570544_r0_5 {
    u8 unknown_0[0x1b];  // (not used here)
    u8 byte_1b;
};
GUEST_OFFSET(Local_00570544_r0_5, byte_1b, 0x1b);

struct __attribute__((packed)) Local_00570544_r5_1 {
    u8 unknown_0[0xa3];  // (not used here)
    u8 byte_a3;
};
GUEST_OFFSET(Local_00570544_r5_1, byte_a3, 0xa3);

struct __attribute__((packed)) Local_00570544_r6_1 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u8 unknown_c[0x10];  // (not used here)
    u32 word_1c;
};
GUEST_OFFSET(Local_00570544_r6_1, word_8, 0x8);
GUEST_OFFSET(Local_00570544_r6_1, word_1c, 0x1c);

inline constexpr guest::Function<0x001e601c, u32(u32, u32, u32, u32)> call_001e601c;
inline constexpr guest::Function<0x001e6df4, u32(u32, u32, u32, u32)> call_001e6df4;
inline constexpr guest::Function<0x002f74c8, u32(u32)> call_002f74c8;
inline constexpr guest::Function<0x004f2c10, u32(u32, u32, u32)> call_004f2c10;
inline constexpr guest::Function<0x00693410, u32(u32, u32, u32, u32)> call_00693410;
inline constexpr guest::Function<0x006a98b0, u32(u32, u32, u32, u32)> call_006a98b0;
inline constexpr guest::Function<0x006a9a80, u32(u32, u32, u32, u32)> call_006a9a80;
inline constexpr guest::Function<0x00768524, u32(u32, u32, u32, u32)> call_00768524;

struct __attribute__((packed)) Frame_00570544 {
    u32 word_0;
    float float_4;
    float float_8;
    u32 word_c;
    u8 unknown_10[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00570544, word_0, 0x0);
GUEST_OFFSET(Frame_00570544, float_4, 0x4);
GUEST_OFFSET(Frame_00570544, float_8, 0x8);
GUEST_OFFSET(Frame_00570544, word_c, 0xc);
GUEST_SIZE(Frame_00570544, 0x14);

void f_00570544(gptr<AcFtr> arg0, u32 r1, u32 r2, u32 r3, float S0) {
    guest::StackFrameOf<Frame_00570544> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r0_3 = 0;
    u32 r3_1 = 0;
    u32 r0_12 = 0;
    u32 r0_1 = arg0->word_5f0;
    gptr<Local_00570544_r6_1> r6_1 = gptr<Local_00570544_r6_1>(r0 + 0x768u);  // (from the original)
    if (r0_1 != 0) {
        gptr<Local_00570544_r5_1> r5_1 = gptr<Local_00570544_r5_1>(r0 + 0x700u);  // (from the original)
        r1 = u32(*gptr<u8>(r0_1 + 0x1bu)) << 0x1a;  // (from the original)
        u32 r0_2 = r1 >> 0x1e;  // (from the original)
        if (r0_2 >= 4u) {
            r0_3 = 0u;
        } else {
            if (r0_2 == 0) {
                goto L_5706b0;
            }
            if ((u32(arg0->half_764) >> 9u & 1u) == 0 || arg0->byte_5ec == 2u) {
                goto L_5706b0;
            } else {
                r0_3 = 1u;
            }
        }
        if (r0_3 != 0) {
            u32 r0_4 = call_00693410(r0_3, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            S0 = guest::cpu()->s[0];
            if (r0_4 != 0) {
                gptr<Local_00570544_r0_5> r0_5 = gptr<Local_00570544_r0_5>(arg0->word_5f0);
                if (r0_5.addr() != 0) {
                    r1 = u32(r0_5->byte_1b) >> 4u & 3u;
                    if (r1 < 4u && r1 == 3u) {
                        goto L_5706b0;
                    }
                }
                u32 r1_1 = s8(r5_1->byte_a3);
                if (r0_5.addr() != 0) {
                    u32 r0_6 = u32(r0_5->byte_1b) >> 4u & 3u;
                    if (r0_6 < 4u && r0_6 == 1u) {
                        r3_1 = 1u;
                        goto L_570618;
                    }
                }
                r3_1 = 0u;
L_570618:;
                guest::cpu()->s[0] = S0;
                u32 r0_7 = call_006a98b0(r6_1.addr(), r1_1, 1u, r3_1);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                S0 = guest::cpu()->s[0];
                if (r0_7 != 0) {
                    u32 r0_9 = call_00768524(r0 + 0x5e4u, r1, r2, r3);  // (from the original)
                    u32 r7_1 = r0_9 & 0xffu;  // (from the original)
                    u32 r0_10 = call_002f74c8(r0_9);
                    if (r5_1->byte_a3 != 0) {
                        u32 r0_11 = arg0->word_5f0;
                        if (r0_11 != 0) {
                            r0_12 = u32(*gptr<u8>(r0_11 + 0x1bu)) >> 4u & 3u;  // (from the original)
                            if (r0_12 < 4u && r0_12 == 1u) {
                                goto L_570680;
                            }
                        }
                        r0_12 = 0u;
L_570680:;
                        frame->word_0 = r0_12;
                        call_001e601c(r7_1, 0u, r0_10, 1u);
                        r1 = guest::cpu()->r[1];
                        r2 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
                        S0 = guest::cpu()->s[0];
                    } else {
                        call_001e6df4(r7_1, 0u, r0_10, 1u);
                        r1 = guest::cpu()->r[1];
                        r2 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
                        S0 = guest::cpu()->s[0];
                    }
                }
            }
        }
    }
L_5706b0:;
    guest::cpu()->s[0] = S0;
    call_006a9a80(r6_1.addr(), r1, r2, r3);
    if (r6_1->word_1c != 0) {
        u32 r0_13 = r6_1->word_8;
        float S0_4 = 1.0f;
        frame->word_0 = std::bit_cast<u32>(S0_4);
        frame->float_4 = S0_4;
        frame->float_8 = S0_4;
        frame->word_c = r0_13;
        u32 r0_14 = r6_1->word_1c;
        guest::cpu()->s[0] = S0_4;
        call_004f2c10(r0_14, frame.at(0).addr(), 3u);
    }
}

}  // namespace d_00570544
GUEST_EXPORT_FRAMED(0x00570544, d_00570544::f_00570544, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00570adc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00570adc {


u32 f_00570adc(gptr<AcFtr> arg0, u32 r1, u32 r2) {
    u32 r0_1 = 1u;
    if ((r2 & 1u) != 0) {
        u32 r12_1 = *gptr<u32>(arg0->word_1c8 + 0x64u);  // (from the original)
        if (r12_1 != 0 && r12_1 != r1) {
            r0_1 = 0u;
        }
    }
    if ((r2 & 0xeu) != 0) {  // (from the original)
        u32 r12_2 = *gptr<u32>(arg0->word_1c8 + 0x6cu);  // (from the original)
        if (r12_2 != 0 && r12_2 != r1) {
            r0_1 = 0u;
        }
    }
    if ((r2 & 0x10u) == 0) {  // (from the original)
        return r0_1;
    }
    u32 r2_1 = *gptr<u32>(arg0->word_1c8 + 0x74u);  // (from the original)
    if (r2_1 == 0 || r2_1 == r1) {
        return r0_1;
    } else {
    }
    return 0u;
}

}  // namespace d_00570adc
GUEST_EXPORT(0x00570adc, d_00570adc::f_00570adc);

// f_00571d28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00571d28 {

struct __attribute__((packed)) Object_00571d28_0 {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u8 unknown_20[0xe];  // (not used here)
    u16 half_2e;
    u8 unknown_30[0x784];  // (not used here)
    u8 byte_7b4;
};
GUEST_OFFSET(Object_00571d28_0, word_14, 0x14);
GUEST_OFFSET(Object_00571d28_0, word_18, 0x18);
GUEST_OFFSET(Object_00571d28_0, word_1c, 0x1c);
GUEST_OFFSET(Object_00571d28_0, half_2e, 0x2e);
GUEST_OFFSET(Object_00571d28_0, byte_7b4, 0x7b4);

struct __attribute__((packed)) Local_00571d28_r0_5 {
    u8 unknown_0[0x18];  // (not used here)
    float float_18;
    u8 unknown_1c[0x12];  // (not used here)
    u16 half_2e;
    u8 unknown_30[0x5c4];  // (not used here)
    u32 word_5f4;
};
GUEST_OFFSET(Local_00571d28_r0_5, float_18, 0x18);
GUEST_OFFSET(Local_00571d28_r0_5, half_2e, 0x2e);
GUEST_OFFSET(Local_00571d28_r0_5, word_5f4, 0x5f4);

struct __attribute__((packed)) Local_00571d28_r4_1 {
    u16 half_0;
    u16 half_2;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00571d28_r4_1, half_0, 0x0);
GUEST_OFFSET(Local_00571d28_r4_1, half_2, 0x2);
GUEST_OFFSET(Local_00571d28_r4_1, word_4, 0x4);
GUEST_OFFSET(Local_00571d28_r4_1, word_8, 0x8);
GUEST_OFFSET(Local_00571d28_r4_1, word_c, 0xc);

inline constexpr guest::Function<0x0014ecb0, u32(u32, u32)> call_0014ecb0;
inline constexpr guest::Function<0x0014f3cc, u32(u32, u32, u32)> call_0014f3cc;
inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32, u32)> call_003171b4;
inline constexpr guest::Function<0x004e0cb0, u32(u32)> call_004e0cb0;
inline constexpr guest::Function<0x004e9a28, u32(u32, u32, u32, u32)> call_004e9a28;
inline constexpr guest::Function<0x004ea048, u32(u32)> call_004ea048;
inline constexpr guest::Function<0x007455cc, u32(u32, u32)> call_007455cc;
inline constexpr guest::Function<0x00751a64, u32(u32, u32, u32, u32)> call_00751a64;

struct __attribute__((packed)) Frame_00571d28 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not read or written by name)
    u16 half_8;
    u16 half_a;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u8 unknown_20[0x38];  // (not read or written by name)
    u32 word_58;
    u32 word_5c;
    u32 word_60;
    u8 unknown_64[0x4];  // (not read or written by name)
    u16 half_68;
    u8 unknown_6a[0x6];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00571d28, word_0, 0x0);
GUEST_OFFSET(Frame_00571d28, half_8, 0x8);
GUEST_OFFSET(Frame_00571d28, half_a, 0xa);
GUEST_OFFSET(Frame_00571d28, word_c, 0xc);
GUEST_OFFSET(Frame_00571d28, word_10, 0x10);
GUEST_OFFSET(Frame_00571d28, word_14, 0x14);
GUEST_OFFSET(Frame_00571d28, word_18, 0x18);
GUEST_OFFSET(Frame_00571d28, word_1c, 0x1c);
GUEST_OFFSET(Frame_00571d28, word_58, 0x58);
GUEST_OFFSET(Frame_00571d28, word_5c, 0x5c);
GUEST_OFFSET(Frame_00571d28, word_60, 0x60);
GUEST_OFFSET(Frame_00571d28, half_68, 0x68);
GUEST_SIZE(Frame_00571d28, 0x70);

u32 f_00571d28(gptr<Object_00571d28_0> arg0, u32 r1, u32 r2_unused, u32 r3, float S0, float S1) {
    guest::StackFrameOf<Frame_00571d28> frame;  // the original's stack frame
    float S0_5 = 0;
    u32 r0_1 = arg0->byte_7b4;
    if (r0_1 < 2u && r0_1 == 1u) {
        frame->half_a = 0;
        u32 r0_3 = call_003171b4(frame.at(0x1c).addr(), frame.at(0x18).addr(), arg0.addr() + 0x14u, r3);  // (from the original)
        u32 r0_4 = call_004e0cb0(r0_3);
        u32 r1_3 = frame->word_1c;
        u32 r2_3 = frame->word_18;
        gptr<Local_00571d28_r0_5> r0_5 = gptr<Local_00571d28_r0_5>(call_004e9a28(r0_4, r1_3, r2_3, 0u));
        u32 r0_6 = call_004ea048(r0_5.addr());
        u32 r0_7 = call_007455cc(r0_6, r0_5.addr());
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        if (r0_5.addr() != 0 && r0_7 + 1u != 0) {
            frame->word_58 = arg0->word_14;
            frame->word_5c = arg0->word_18;
            frame->word_60 = arg0->word_1c;
            u32 r0_8 = r0_5->word_5f4;
            if (r0_8 == 0) {
                S0_5 = 0.0f;
            } else {
                S1 = r0_5->float_18;
                S0_5 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(u32(*gptr<s8>(r0_8 + 3u)))))) + S1;
            }
            frame->word_5c = std::bit_cast<u32>(S0_5);
            frame->half_68 = 0;
            frame->word_0 = 0;
            guest::cpu()->s[0] = S0_5;
            guest::cpu()->s[1] = S1;
            call_00751a64(r0_5.addr(), frame.at(0x28).addr(), 0u, frame.at(0x68).addr());  // (from the original)
            u32 r0_9 = frame.at(0x28).addr();  // (from the original)
            call_0014ecb0(r0_9, r0_9);
            call_0014f3cc(frame.at(8).addr() + 4u, frame.at(0x28).addr(), frame.at(0x58).addr());  // (from the original)
            S0 = guest::cpu()->s[0];
            S1 = guest::cpu()->s[1];
            frame->half_a = u16(u32(arg0->half_2e) - u32(r0_5->half_2e));
            u32 r0_11 = sxth(r0_7);
            frame->half_8 = u16(r0_11);
            r1 = arg0->byte_7b4;
            if (r1 < 2u && r1 == 1u && s32(r0_11) >= 0) {
                u64 t_1 = u64(u32(s32(r0_11) >> 0x1f)) + ~0u + u32(r0_11 >= 0x30u);  // (from the original)
                r1 = t_1;
                if (!u32(t_1 >> 0x20)) {  // (from the original)
                    gptr<Local_00571d28_r4_1> r4_1 = gptr<Local_00571d28_r4_1>(arg0.addr() + 0x60cu);  // (from the original)
                    r4_1->half_0 = u16(r0_11);
                    r4_1->half_2 = u16(u32(frame->half_a));
                    r4_1->word_4 = frame->word_c;
                    r4_1->word_8 = frame->word_10;
                    r4_1->word_c = frame->word_14;
                    guest::cpu()->r[1] = r1;
                    return 1u;
                }
            }
        }
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return 0u;
}

}  // namespace d_00571d28
GUEST_EXPORT_FRAMED(0x00571d28, d_00571d28::f_00571d28, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00572624: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00572624 {

inline guest::global<u32, 0x0094d6dc> global_0094d6dc;
inline guest::global<u32, 0x0094d6e0> global_0094d6e0;
inline guest::global<u32, 0x009843cc> global_009843cc;
inline guest::global<u32, 0x009843d0> global_009843d0;
inline guest::global<u32, 0x009843d4> global_009843d4;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32)> call_002fcbb0;
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32)> call_002fe7dc;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;
inline constexpr guest::Function<0x004e58e8, u32(u32)> call_004e58e8;
inline constexpr guest::Function<0x0059aab0, u32(u32, u32, u32, u32)> call_0059aab0;

struct __attribute__((packed)) Frame_00572624 {
    u32 word_0;
    u32 word_4;
    u16 half_8;
    u8 unknown_a[0x2];  // (not read or written by name)
    u32 word_c;
    u16 half_10;
    u8 unknown_12[0x2];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00572624, word_0, 0x0);
GUEST_OFFSET(Frame_00572624, word_4, 0x4);
GUEST_OFFSET(Frame_00572624, half_8, 0x8);
GUEST_OFFSET(Frame_00572624, word_c, 0xc);
GUEST_OFFSET(Frame_00572624, half_10, 0x10);
GUEST_SIZE(Frame_00572624, 0x14);

void f_00572624(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2) {
    guest::StackFrameOf<Frame_00572624> frame;  // the original's stack frame
    u32 r0_1 = call_002f74c8(r0, r1, r2, r3);
    u32 r0_2 = call_004e58e8(r0_1);
    u32 r1_2 = guest::cpu()->r[1];
    u32 r2_2 = guest::cpu()->r[2];
    float S1_2 = guest::cpu()->s[1];
    float S2_2 = guest::cpu()->s[2];
    if (r0_2 != 0) {
        if ((*global_0094d6e0 & 1u) == 0) {
            u32 r0_3 = call_002fe7dc(0x94d6e0u, r1_2, r2_2);  // (from the original)
            r1_2 = guest::cpu()->r[1];
            r2_2 = guest::cpu()->r[2];
            S1_2 = guest::cpu()->s[1];
            S2_2 = guest::cpu()->s[2];
            if (r0_3 != 0) {
                call_002fcbb0(0x9843b8u, 0x2079u, r2_2);  // (from the original)
                call_002fcbb0(0x9843bcu, 0x207au, guest::cpu()->r[2]);  // (from the original)
                call_002fcbb0(0x9843c0u, 0x207au, guest::cpu()->r[2]);  // (from the original)
                call_00301d0c(0x9843c4u, 0x2fc20cu, 4u, 2u);  // (from the original)
                S1_2 = guest::cpu()->s[1];
                S2_2 = guest::cpu()->s[2];
                r2_2 = 0x100000u;  // (from the original)
                r1_2 = 0x151540u;  // (from the original)
            }
        }
        if ((*global_0094d6dc & 1u) == 0) {
            guest::cpu()->s[1] = S1_2;
            guest::cpu()->s[2] = S2_2;
            u32 r0_4 = call_002fe7dc(0x94d6dcu, r1_2, r2_2);  // (from the original)
            S1_2 = guest::cpu()->s[1];
            S2_2 = guest::cpu()->s[2];
            if (r0_4 != 0) {
                float S0_6 = 1.0f;
                S2_2 = S0_6;
                S1_2 = S0_6;
                *global_009843cc = std::bit_cast<u32>(S0_6);
                *global_009843d0 = std::bit_cast<u32>(S1_2);
                *global_009843d4 = std::bit_cast<u32>(S2_2);
            }
        }
        u32 r0_5 = *gptr<u32>(r0 + 0x5f0u);  // (from the original)
        if (r0_5 != 0) {
            r0_5 = u32(*gptr<u8>(r0_5 + 0x17u)) & 0xfu;  // (from the original)
            if (r0_5 >= 5u) {
                r0_5 = 0u;
            }
        }
        frame->word_c = 0;
        frame->half_8 = 0;
        frame->word_0 = 0;
        frame->word_4 = 1;
        frame->half_10 = 0;
        float S0_7 = 16.0f;
        if (r0_5 == 1u) {
            S0_7 = 24.0f;
        }
        guest::cpu()->s[0] = S0_7;
        guest::cpu()->s[1] = S1_2;
        guest::cpu()->s[2] = S2_2;
        call_0059aab0((r0_5 << 2) + 0x9843b8u, r0 + 0x7a8u, 0x9843ccu, r0);  // (from the original)
        r1_2 = guest::cpu()->r[1];
        S1_2 = guest::cpu()->s[1];
    }
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->s[1] = S1_2;
}

}  // namespace d_00572624
GUEST_EXPORT_FRAMED(0x00572624, d_00572624::f_00572624, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00572fb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00572fb4 {

struct __attribute__((packed)) Object_00572fb4_0 {
    u8 unknown_0[0x78];  // (not used here)
    u8 byte_78;
    u8 unknown_79[0x267];  // (not used here)
    float float_2e0;
    u8 unknown_2e4[0x4];  // (not used here)
    float float_2e8;
    u8 unknown_2ec[0x300];  // (not used here)
    u8 byte_5ec;
    u8 unknown_5ed[0x3];  // (not used here)
    u32 word_5f0;
    u32 word_5f4;
};
GUEST_OFFSET(Object_00572fb4_0, byte_78, 0x78);
GUEST_OFFSET(Object_00572fb4_0, float_2e0, 0x2e0);
GUEST_OFFSET(Object_00572fb4_0, float_2e8, 0x2e8);
GUEST_OFFSET(Object_00572fb4_0, byte_5ec, 0x5ec);
GUEST_OFFSET(Object_00572fb4_0, word_5f0, 0x5f0);
GUEST_OFFSET(Object_00572fb4_0, word_5f4, 0x5f4);

struct __attribute__((packed)) Local_00572fb4_r0_2 {
    u8 unknown_0[0x24];  // (not used here)
    float float_24;
    u8 unknown_28[0x4];  // (not used here)
    float float_2c;
};
GUEST_OFFSET(Local_00572fb4_r0_2, float_24, 0x24);
GUEST_OFFSET(Local_00572fb4_r0_2, float_2c, 0x2c);

inline guest::global<u32, 0x0094edd8> global_0094edd8;
inline constexpr guest::Function<0x002f74b0, u32(u32, u32)> call_002f74b0;
inline constexpr guest::Function<0x005761c8, u32(u32, u32, u32, u32)> call_005761c8;
inline constexpr guest::Function<0x00748534, u32(u32)> call_00748534;

void f_00572fb4(gptr<Object_00572fb4_0> arg0, float S0, float S1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 fpsr = guest::cpu()->fpscr;
    u32 r0_1 = *global_0094edd8;
    if (r0_1 == 0) {
        return;
    }
    gptr<Local_00572fb4_r0_2> r0_2 = gptr<Local_00572fb4_r0_2>(*gptr<u32>(r0_1 + 0x1a4u));  // (from the original)
    float S2_1 = arg0->float_2e0;
    float S0_1 = r0_2->float_24;
    float S1_1 = r0_2->float_2c;
    float S4_1 = 256.0f;
    float S3_1 = 256.0f;
    float S4_2 = S1_1 - S4_1;
    float S3_2 = S0_1 - S3_1;
    float S1_2 = S1_1 + S4_1;
    float S0_2 = S0_1 + S3_1;
    u32 fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S2_1, S3_2);  // (from the original)
    if (fpsr_1 >> 0x1d & 1) {  // (from the original)
        u32 fpsr_2 = fpsr_1 & 0xfffffffu | vfp_cmpf(S2_1, S0_2);  // (from the original)
        if (!!(fpsr_2 >> 0x1e & 1) || fpsr_2 >> 0x1f != (fpsr_2 >> 0x1c & 1)) {  // (from the original)
            S0_2 = arg0->float_2e8;
            u32 fpsr_3 = fpsr_2 & 0xfffffffu | vfp_cmpf(S0_2, S4_2);  // (from the original)
            if (fpsr_3 >> 0x1d & 1) {  // (from the original)
                u32 fpsr_4 = fpsr_3 & 0xfffffffu | vfp_cmpf(S0_2, S1_2);  // (from the original)
                if (fpsr_4 >> 0x1e & 1 || fpsr_4 >> 0x1f != (fpsr_4 >> 0x1c & 1)) {  // (from the original)
                    if (u32(s8(arg0->byte_78)) != 0) {
                        guest::cpu()->s[0] = S0_2;
                        guest::cpu()->s[1] = S1_2;
                        return;
                    }
                    guest::cpu()->s[0] = S0_2;
                    guest::cpu()->s[1] = S1_2;
                    guest::cpu()->s[2] = S2_1;
                    guest::cpu()->s[3] = S3_2;
                    guest::cpu()->s[4] = S4_2;
                    guest::cpu()->s[5] = S4_1;
                    guest::cpu()->s[6] = S3_1;
                    frame.release();
                    call_005761c8(arg0.addr(), 0x85f2c0u, guest::cpu()->r[2], guest::cpu()->r[3]);
                    return;  // (from the original)
                }
            }
        }
    }
    if (u32(s8(arg0->byte_78)) == 0) {
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_2;
        return;
    }
    u32 r0_3 = arg0->word_5f0;
    if (r0_3 != 0) {
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_2;
        u32 r0_4 = call_00748534(r0_3);
        S0_2 = guest::cpu()->s[0];
        S1_2 = guest::cpu()->s[1];
        if (r0_4 != 0) {
            return;
        }
    }
    u32 r0_5 = arg0->word_5f4;
    if (r0_5 != 0) {
        if ((u32(*gptr<u8>(r0_5 + 4u)) >> 2u & 1u) != 0) {
            guest::cpu()->s[0] = S0_2;
            guest::cpu()->s[1] = S1_2;
            return;
        }
    }
    if (arg0->byte_5ec == 2u) {
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_2;
        return;
    }
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    frame.release();
    call_002f74b0(arg0.addr() + 0x68u, 0x85f2c0u);  // (from the original)
    return;  // (from the original)
}

}  // namespace d_00572fb4
GUEST_EXPORT(0x00572fb4, d_00572fb4::f_00572fb4);

// f_00573214: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00573214 {


u32 f_00573214(gptr<AcFtr> arg0, u32 r1_unused, u32 r2, u32 r3) {
    arg0->byte_7a4 = 0;
    arg0->word_2f8 = r2;
    arg0->word_2fc = r3;
    guest::cpu()->r[1] = 0u;
    return 0u;
}

}  // namespace d_00573214
GUEST_EXPORT(0x00573214, d_00573214::f_00573214);

// f_0057322c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0057322c {

struct __attribute__((packed)) Object_0057322c_0 {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u8 unknown_20[0x5d0];  // (not used here)
    u32 word_5f0;
    u8 unknown_5f4[0x1b4];  // (not used here)
    float float_7a8;
    float float_7ac;
    float float_7b0;
};
GUEST_OFFSET(Object_0057322c_0, word_14, 0x14);
GUEST_OFFSET(Object_0057322c_0, word_18, 0x18);
GUEST_OFFSET(Object_0057322c_0, word_1c, 0x1c);
GUEST_OFFSET(Object_0057322c_0, word_5f0, 0x5f0);
GUEST_OFFSET(Object_0057322c_0, float_7a8, 0x7a8);
GUEST_OFFSET(Object_0057322c_0, float_7ac, 0x7ac);
GUEST_OFFSET(Object_0057322c_0, float_7b0, 0x7b0);

struct __attribute__((packed)) Local_0057322c_r0_6 {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
    u8 byte_5;
    u8 byte_6;
    u8 byte_7;
    u8 byte_8;
};
GUEST_OFFSET(Local_0057322c_r0_6, byte_4, 0x4);
GUEST_OFFSET(Local_0057322c_r0_6, byte_5, 0x5);
GUEST_OFFSET(Local_0057322c_r0_6, byte_6, 0x6);
GUEST_OFFSET(Local_0057322c_r0_6, byte_7, 0x7);
GUEST_OFFSET(Local_0057322c_r0_6, byte_8, 0x8);

struct __attribute__((packed)) Local_0057322c_r5_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0057322c_r5_1, word_0, 0x0);
GUEST_OFFSET(Local_0057322c_r5_1, word_4, 0x4);
GUEST_OFFSET(Local_0057322c_r5_1, word_8, 0x8);

struct __attribute__((packed)) Local_0057322c_r5_2 {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
    u8 byte_5;
    u8 byte_6;
    u8 byte_7;
    u8 byte_8;
};
GUEST_OFFSET(Local_0057322c_r5_2, byte_4, 0x4);
GUEST_OFFSET(Local_0057322c_r5_2, byte_5, 0x5);
GUEST_OFFSET(Local_0057322c_r5_2, byte_6, 0x6);
GUEST_OFFSET(Local_0057322c_r5_2, byte_7, 0x7);
GUEST_OFFSET(Local_0057322c_r5_2, byte_8, 0x8);

struct __attribute__((packed)) Local_0057322c_r5_3 {
    u8 unknown_0[0x3a8];  // (not used here)
    float float_3a8;
    float float_3ac;
    float float_3b0;
};
GUEST_OFFSET(Local_0057322c_r5_3, float_3a8, 0x3a8);
GUEST_OFFSET(Local_0057322c_r5_3, float_3ac, 0x3ac);
GUEST_OFFSET(Local_0057322c_r5_3, float_3b0, 0x3b0);

inline constexpr guest::Function<0x002f74c8, u32(u32)> call_002f74c8;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> call_002f74e0;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> call_002fc934;
inline constexpr guest::Function<0x004e58e8, u32(u32)> call_004e58e8;
inline constexpr guest::Function<0x006c602c, u32(u32, u32, u32)> call_006c602c;
inline constexpr guest::Function<0x00748534, u32(u32)> call_00748534;

struct __attribute__((packed)) Frame_0057322c {
    u8 unknown_0[0x4];  // (not read or written by name)
    u8 byte_4;
    u8 byte_5;
    u8 unknown_6[0x6];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0057322c, byte_4, 0x4);
GUEST_OFFSET(Frame_0057322c, byte_5, 0x5);
GUEST_SIZE(Frame_0057322c, 0xc);

void f_0057322c(gptr<Object_0057322c_0> arg0, float S0_unused, float S1) {
    guest::StackFrameOf<Frame_0057322c> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r4_1 = 0;
    gptr<Local_0057322c_r5_1> r5_1 = gptr<Local_0057322c_r5_1>(r0 + 0x7a8u);  // (from the original)
    float S0_1 = 0.0f;
    arg0->float_7a8 = S0_1;
    arg0->float_7ac = S0_1;
    arg0->float_7b0 = S0_1;
    guest::cpu()->s[0] = S0_1;
    u32 r0_1 = call_002f74c8(r0);
    float S1_1 = guest::cpu()->s[1];
    u32 r0_2 = arg0->word_5f0;
    if (r0_2 != 0) {
        u32 r0_3 = call_00748534(r0_2);
        S1_1 = guest::cpu()->s[1];
        if (r0_3 != 0) {
            u32 r0_4 = call_004e58e8(r0_1);
            S1_1 = guest::cpu()->s[1];
            if (r0_4 != 0) {
                r5_1->word_0 = arg0->word_14;
                r5_1->word_4 = arg0->word_18;
                r5_1->word_8 = arg0->word_1c;
                gptr<Local_0057322c_r5_2> r5_2 = gptr<Local_0057322c_r5_2>(r0 + 0x5e4u);  // (from the original)
                gptr<Local_0057322c_r0_6> r0_6 = gptr<Local_0057322c_r0_6>(call_002fc934(frame.at(0).addr(), r5_2.addr()));
                r0_6->byte_4 = u8(u32(r5_2->byte_4));
                r0_6->byte_5 = u8(u32(r5_2->byte_5));
                r0_6->byte_6 = u8(u32(r5_2->byte_6));
                r0_6->byte_7 = u8(u32(r5_2->byte_7));
                r0_6->byte_8 = u8(u32(r5_2->byte_8));
                u32 r1_1 = frame->byte_5;
                u32 r0_7 = frame->byte_4;
                call_006c602c(r0_7, r1_1, 0u);
                float S0_6 = guest::cpu()->s[0];
                gptr<Local_0057322c_r5_3> r5_3 = gptr<Local_0057322c_r5_3>(r0 + 0x400u);  // (from the original)
                r5_3->float_3ac = S0_6;
                if (r0_1 != 0x2bu) {  // (from the original)
                    u32 r0_8 = call_002f74e0(0x10000000u, r0_1);  // (from the original)
                    S1_1 = guest::cpu()->s[1];
                    if (r0_8 == 0) {
                        goto L_57331c;
                    }
                }
                S1_1 = 16.0f;
                r5_3->float_3b0 = r5_3->float_3b0 - S1_1;
L_57331c:;
                u32 r0_9 = arg0->word_5f0;
                if (r0_9 != 0) {
                    r4_1 = u32(*gptr<u8>(r0_9 + 0x17u)) & 0xfu;  // (from the original)
                    if (r4_1 < 5u) {
                        if (r4_1 != 1u) {
                            goto L_573360;
                        }
                        S1_1 = 16.0f;
                        r5_3->float_3a8 = r5_3->float_3a8 + S1_1;
                        goto L_573360;
                    }
                }
                r4_1 = 0u;
L_573360:;
                if (r0_1 != 0x2bu) {  // (from the original)
                    guest::cpu()->s[1] = S1_1;
                    u32 r0_10 = call_002f74e0(0x10000000u, r0_1);  // (from the original)
                    S1_1 = guest::cpu()->s[1];
                    if (r0_10 == 0) {
                        goto L_573398;
                    }
                }
                if (r4_1 == 0) {
                    S1_1 = 16.0f;
                    r5_3->float_3a8 = r5_3->float_3a8 + S1_1;
                }
L_573398:;
            }
        }
    }
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_0057322c
GUEST_EXPORT_FRAMED(0x0057322c, d_0057322c::f_0057322c, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_005739fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005739fc {


u32 f_005739fc(gptr<AcFtrAudio> arg0) {
    u32 r0_1 = arg0->word_300;
    if (r0_1 == 0) {
        guest::cpu()->r[1] = arg0.addr();
        return r0_1;
    }
    u32 r1_1 = arg0->byte_5ec;
    u32 r2_1 = *gptr<u32>(*gptr<u32>(r0_1) + 0x1cu);  // (from the original)
    u32 r1_2 = r1_1 == 1u || r1_1 == 4u;
    // virtual function 7 of r0_1
    return guest::call_address<u32>(r2_1, r0_1, r1_2, r2_1, guest::cpu()->r[3]);
}

}  // namespace d_005739fc
GUEST_EXPORT(0x005739fc, d_005739fc::f_005739fc);

// f_00573aac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00573aac {

struct __attribute__((packed)) Object_00573aac_0 {
    u8 unknown_0[0x7a3];  // (not used here)
    u8 byte_7a3;
    u8 byte_7a4;
    u8 byte_7a5;
};
GUEST_OFFSET(Object_00573aac_0, byte_7a3, 0x7a3);
GUEST_OFFSET(Object_00573aac_0, byte_7a4, 0x7a4);
GUEST_OFFSET(Object_00573aac_0, byte_7a5, 0x7a5);


u32 f_00573aac(gptr<Object_00573aac_0> arg0) {
    u32 r1_1 = arg0->byte_7a4;
    if (r1_1 != 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r1_2 = arg0.addr() + 0x700u;  // (from the original)
    if (arg0->byte_7a5 == 0) {
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    u32 r1_3 = 1u & ~u32(*gptr<s8>(r1_2 + 0xa3u));  // (from the original)
    arg0->byte_7a3 = u8(r1_3);
    guest::cpu()->r[1] = r1_3;
    return 1u;
}

}  // namespace d_00573aac
GUEST_EXPORT(0x00573aac, d_00573aac::f_00573aac);

// f_00573aec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00573aec {

struct __attribute__((packed)) Local_00573aec_r0_4 {
    u8 unknown_0[0x17];  // (not used here)
    u8 byte_17;
};
GUEST_OFFSET(Local_00573aec_r0_4, byte_17, 0x17);

inline constexpr guest::Function<0x002f74c8, u32(u32)> call_002f74c8;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> call_002f74e0;
inline constexpr guest::Function<0x006c5fa0, u32(u32, u32)> call_006c5fa0;
inline constexpr guest::Function<0x00751410, u32(u32, u32, u32, u32)> call_00751410;

u32 f_00573aec(u32 r0, u32 r1, u32 r2_unused, u32 r3, float S0, float S1) {
    gptr<Local_00573aec_r0_4> r0_4 = gptr<Local_00573aec_r0_4>(0u);
    u32 r0_1 = call_00751410(r0, r1, 0u, r3);
    u32 r0_2 = call_002f74c8(r0_1);
    u32 r0_3 = call_002f74e0(0x1000u, r0_2);  // (from the original)
    u32 r1_2 = guest::cpu()->r[1];
    float S0_3 = guest::cpu()->s[0];
    float S1_3 = guest::cpu()->s[1];
    if (r0_3 != 0) {
        call_006c5fa0(r1, 0u);
        r1_2 = guest::cpu()->r[1];
        S0_3 = guest::cpu()->s[0];
        S1_3 = guest::cpu()->s[1];
        *gptr<u32>(r1 + 4u) = std::bit_cast<u32>(S0_3);
    }
    if (r0_2 != 0x2bu) {  // (from the original)
        guest::cpu()->s[0] = S0_3;
        guest::cpu()->s[1] = S1_3;
        r0_4 = gptr<Local_00573aec_r0_4>(call_002f74e0(0x10000000u, r0_2));  // (from the original)
        r1_2 = guest::cpu()->r[1];
        S0_3 = guest::cpu()->s[0];
        S1_3 = guest::cpu()->s[1];
        if (r0_4.addr() == 0) {
            return r0_4.addr();
        }
    }
    r0_4 = gptr<Local_00573aec_r0_4>(*gptr<u32>(r0 + 0x5f0u));  // (from the original)
    if (r0_4.addr() != 0) {
        r0_4 = gptr<Local_00573aec_r0_4>(u32(r0_4->byte_17) & 0xfu);  // (from the original)
        if (r0_4.addr() < 5u && r0_4.addr() != 0) {
            goto L_573b84;
        }
    }
    S1_3 = 16.0f;
    S0_3 = std::bit_cast<float>(*gptr<u32>(r1)) + S1_3;
    *gptr<u32>(r1) = std::bit_cast<u32>(S0_3);
L_573b84:;
    if (r0_2 == 0x2bu) {  // (from the original)
        r0_4 = gptr<Local_00573aec_r0_4>(*gptr<u32>(r0 + 0x5f0u));  // (from the original)
        if (r0_4.addr() != 0) {
            r1_2 = u32(r0_4->byte_17) & 0xfu;  // (from the original)
            if (r1_2 < 5u && r1_2 == 3u) {
                *gptr<u32>(r1) = std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r1)) + 16.0f);
                float S1_4 = 32.0f;
                float S0_4 = std::bit_cast<float>(*gptr<u32>(r1 + 8u)) - S1_4;
                *gptr<u32>(r1 + 8u) = std::bit_cast<u32>(S0_4);
                guest::cpu()->r[1] = r1_2;
                guest::cpu()->s[0] = S0_4;
                guest::cpu()->s[1] = S1_4;
                return 0x85f2d0u;  // (from the original)
            }
        }
        if (r0_4.addr() != 0) {
            r0_4 = gptr<Local_00573aec_r0_4>(u32(r0_4->byte_17) & 0xfu);  // (from the original)
            if (r0_4.addr() < 5u && r0_4.addr() == 4u) {
                *gptr<u32>(r1) = std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r1)) + 16.0f);
                S1_3 = 16.0f;
                S0_3 = std::bit_cast<float>(*gptr<u32>(r1 + 8u)) - S1_3;
                *gptr<u32>(r1 + 8u) = std::bit_cast<u32>(S0_3);
            }
        }
    }
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_3;
    return r0_4.addr();
}

}  // namespace d_00573aec
GUEST_EXPORT_FRAMED(0x00573aec, d_00573aec::f_00573aec, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0057456c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0057456c {

struct __attribute__((packed)) Object_0057456c_0 {
    u8 unknown_0[0x300];  // (not used here)
    u32 word_300;
};
GUEST_OFFSET(Object_0057456c_0, word_300, 0x300);


u32 f_0057456c(gptr<Object_0057456c_0> arg0) {
    u32 r0_1 = arg0->word_300;
    if (r0_1 == 0) {
        return r0_1;
    }
    u32 r2_1 = *gptr<u32>(*gptr<u32>(r0_1) + 0x1cu);  // (from the original)
    // virtual function 7 of r0_1
    return guest::call_address<u32>(r2_1, r0_1, guest::cpu()->r[1], r2_1, guest::cpu()->r[3]);
}

}  // namespace d_0057456c
GUEST_EXPORT(0x0057456c, d_0057456c::f_0057456c);

// f_0057579c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0057579c {

struct __attribute__((packed)) Object_0057579c_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_0057579c_0, word_4, 0x4);


u32 f_0057579c(gptr<Object_0057579c_0> arg0) {
    u32 r0_1 = 0;
    u32 r1_1 = arg0->word_4;
    if (r1_1 == 0) {
        r0_1 = 1u;
    } else {
        r1_1 -= 1u;
        arg0->word_4 = r1_1;
        r0_1 = 0u;
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0057579c
GUEST_EXPORT(0x0057579c, d_0057579c::f_0057579c);

// f_005757b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005757b8 {

struct __attribute__((packed)) Object_005757b8_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_005757b8_0, word_0, 0x0);
GUEST_OFFSET(Object_005757b8_0, word_4, 0x4);


void f_005757b8(gptr<Object_005757b8_0> arg0, u32 r1) {
    arg0->word_0 = r1;
    arg0->word_4 = r1;
}

}  // namespace d_005757b8
GUEST_EXPORT(0x005757b8, d_005757b8::f_005757b8);

// f_005757d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005757d4 {

struct __attribute__((packed)) Object_005757d4_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    float float_c;
    u32 word_10;
};
GUEST_OFFSET(Object_005757d4_0, word_0, 0x0);
GUEST_OFFSET(Object_005757d4_0, word_4, 0x4);
GUEST_OFFSET(Object_005757d4_0, word_8, 0x8);
GUEST_OFFSET(Object_005757d4_0, float_c, 0xc);
GUEST_OFFSET(Object_005757d4_0, word_10, 0x10);

inline guest::global<u32, 0x00ae5658> global_00ae5658;
inline guest::global<u32, 0x00ae565c> global_00ae565c;
inline guest::global<u32, 0x00ae5660> global_00ae5660;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;

u32 f_005757d4(gptr<Object_005757d4_0> arg0) {
    arg0->word_0 = 0;
    u32 r12_1 = *global_00ae565c;
    float S0_1 = std::bit_cast<float>(*global_00ae5660);
    arg0->word_4 = *global_00ae5658;
    arg0->word_8 = r12_1;
    arg0->float_c = S0_1;
    arg0->word_10 = 0;
    guest::cpu()->s[0] = S0_1;
    u32 r0_2 = call_00301d0c(arg0.addr() + 0x6cu, 0x3040fcu, 0xcu, 9u);  // (from the original)
    return r0_2 - 0x6cu;  // (from the original)
}

}  // namespace d_005757d4
GUEST_EXPORT_FRAMED(0x005757d4, d_005757d4::f_005757d4, 0x4010);  // pushes {r4, lr} first, as the original

// f_005761c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005761c8 {

struct __attribute__((packed)) Object_005761c8_0 {
    u8 unknown_0[0x554];  // (not used here)
    u32 word_554;
    u8 unknown_558[0xc];  // (not used here)
    u32 word_564;
    u8 unknown_568[0xc];  // (not used here)
    u32 word_574;
    u8 unknown_578[0x3c];  // (not used here)
    float float_5b4;
    u8 unknown_5b8[0x34];  // (not used here)
    u8 byte_5ec;
    u8 unknown_5ed[0x3];  // (not used here)
    u32 word_5f0;
    u32 word_5f4;
};
GUEST_OFFSET(Object_005761c8_0, word_554, 0x554);
GUEST_OFFSET(Object_005761c8_0, word_564, 0x564);
GUEST_OFFSET(Object_005761c8_0, word_574, 0x574);
GUEST_OFFSET(Object_005761c8_0, float_5b4, 0x5b4);
GUEST_OFFSET(Object_005761c8_0, byte_5ec, 0x5ec);
GUEST_OFFSET(Object_005761c8_0, word_5f0, 0x5f0);
GUEST_OFFSET(Object_005761c8_0, word_5f4, 0x5f4);

struct __attribute__((packed)) Local_005761c8_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005761c8_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_005761c8_ea_2, word_4, 0x4);

inline constexpr guest::Function<0x004e10ac, u32(u32)> call_004e10ac;
inline constexpr guest::Function<0x0061479c, u32(u32, u32, u32, u32)> call_0061479c;
inline constexpr guest::Function<0x00748534, u32(u32, u32, u32, u32)> call_00748534;
inline constexpr guest::Function<0x00751578, u32(u32, u32, u32, u32)> call_00751578;

struct __attribute__((packed)) Frame_005761c8 {
    u32 word_0;
    u8 unknown_4[0x8];  // (not read or written by name)
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u8 unknown_18[0x4];  // (not read or written by name)
    float float_1c;
    u8 unknown_20[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005761c8, word_0, 0x0);
GUEST_OFFSET(Frame_005761c8, word_c, 0xc);
GUEST_OFFSET(Frame_005761c8, word_10, 0x10);
GUEST_OFFSET(Frame_005761c8, word_14, 0x14);
GUEST_OFFSET(Frame_005761c8, float_1c, 0x1c);
GUEST_SIZE(Frame_005761c8, 0x28);

void f_005761c8(gptr<Object_005761c8_0> arg0, u32 r1, u32 r2, u32 r3, float S0) {
    guest::StackFrameOf<Frame_005761c8> frame;  // the original's stack frame
    u32 r0_1 = arg0->word_5f0;
    if (r0_1 != 0) {
        u32 r0_2 = call_00748534(r0_1, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        if (r0_2 != 0) {
            return;
        }
    }
    u32 r0_3 = arg0->word_5f4;
    if (r0_3 != 0) {
        if ((u32(*gptr<u8>(r0_3 + 4u)) >> 2u & 1u) != 0) {
            guest::cpu()->s[0] = S0;
            return;
        }
    }
    if (arg0->byte_5ec == 2u) {
        guest::cpu()->s[0] = S0;
        return;
    }
    frame->word_c = arg0->word_554;
    frame->word_10 = arg0->word_564;
    frame->word_14 = arg0->word_574;
    guest::cpu()->s[0] = S0;
    call_00751578(arg0.addr(), frame.at(0x18).addr(), r2, r3);  // (from the original)
    call_004e10ac(arg0.addr());
    float S0_2 = guest::cpu()->s[0];
    frame->float_1c = S0_2;
    frame->word_0 = 8;
    gptr<Local_005761c8_ea_2> ea_2 = gptr<Local_005761c8_ea_2>(frame.at(4).addr());
    ea_2->word_0 = ~0x80000000u;  // (from the original)
    ea_2->word_4 = arg0.addr();
    float S0_3 = arg0->float_5b4;
    guest::cpu()->s[0] = S0_3;
    call_0061479c(arg0.addr() + 0x68u, frame.at(0xc).addr(), frame.at(0x18).addr(), arg0.addr() + 0x2eu);  // (from the original)
}

}  // namespace d_005761c8
GUEST_EXPORT_FRAMED(0x005761c8, d_005761c8::f_005761c8, 0x4010);  // pushes {r4, lr} first, as the original

// f_005776fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005776fc {

struct __attribute__((packed)) Local_005776fc_r1_5 {
    u8 unknown_0[0x310];  // (not used here)
    u32 word_310;
    u32 word_314;
};
GUEST_OFFSET(Local_005776fc_r1_5, word_310, 0x310);
GUEST_OFFSET(Local_005776fc_r1_5, word_314, 0x314);

inline constexpr u32 vtable_AcFtr = 0x008f7508u;
inline constexpr u32 vtable_AcFtr_at_68 = 0x008f761cu;
inline constexpr u32 vtable_AcFtr_at_b0 = 0x008f7634u;
inline constexpr u32 vtable_AcFtr_at_12c = 0x008f775cu;
inline constexpr guest::Function<0x0023bc4c, u32(u32)> call_0023bc4c;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;
inline constexpr guest::Function<0x00317e28, u32(u32)> call_00317e28;
inline constexpr guest::Function<0x004ecbe0, u32(u32)> call_004ecbe0;
inline constexpr guest::Function<0x004edd84, u32(u32)> call_004edd84;
inline constexpr guest::Function<0x004ee8c0, u32(u32)> call_004ee8c0;
inline constexpr guest::Function<0x004efa0c, u32(u32, u32, u32)> call_004efa0c;
inline constexpr guest::Function<0x00537218, u32(u32)> call_00537218;
inline constexpr guest::Function<0x006148ac, u32(u32)> call_006148ac;
inline constexpr guest::Function<0x006e480c, u32(u32, u32)> call_006e480c;

u32 f_005776fc(gptr<AcFtr> arg0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    arg0->word_0 = vtable_AcFtr;
    arg0->word_12c = vtable_AcFtr_at_12c;
    arg0->word_68 = vtable_AcFtr_at_68;
    arg0->word_b0 = vtable_AcFtr_at_b0;
    call_002f76ac(arg0.addr() + 0x630u, 0x5754ccu, 0x14u, 4u);  // (from the original)
    u32 r0_3 = call_004ee8c0(arg0.addr() + 0x59cu);  // (from the original)
    u32 r0_5 = call_004ecbe0(r0_3 - 0x20u);  // (from the original)
    u32 r0_7 = call_00537218(r0_5 - 0x148u);  // (from the original)
    u32 r0_9 = call_00537218(r0_7 - 0x114u);  // (from the original)
    gptr<Local_005776fc_r1_5> r1_5 = gptr<Local_005776fc_r1_5>(r0_9 - 0x320u);  // (from the original)
    u32 r2_5 = ~0u;
    u32 ea_1 = r0_9 - 4u;
    *gptr<u32>(ea_1) = r2_5;
    *gptr<u32>(ea_1 - 4u) = 0;
    r1_5->word_314 = r2_5;
    r1_5->word_310 = 0;
    u32 r0_11 = call_004efa0c(r1_5.addr() + 0x2c8u, r1_5.addr(), r2_5);  // (from the original)
    u32 r0_13 = call_00317e28(r0_11 - 0x108u);  // (from the original)
    u32 r0_15 = call_004edd84(r0_13 - 0xcu);  // (from the original)
    u32 r0_17 = call_0023bc4c(r0_15 - 0x104u);  // (from the original)
    u32 r0_19 = call_006148ac(r0_17 - 0x48u);  // (from the original)
    frame.release();
    return call_006e480c(r0_19 - 0x68u, guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_005776fc
GUEST_EXPORT(0x005776fc, d_005776fc::f_005776fc);

// f_00577810: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00577810 {

inline guest::global<u32, 0x0094f310> global_0094f310;
inline constexpr guest::Function<0x00301444, u32(u32, u32)> call_00301444;
inline constexpr guest::Function<0x00529ddc, u32(u32, u32)> call_00529ddc;
inline constexpr guest::Function<0x00691538, u32(u32, u32)> call_00691538;
inline constexpr guest::Function<0x00694178, u32(u32)> call_00694178;

u32 f_00577810(u32 r0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r1_1 = *global_0094f310;
    if (r1_1 != 0) {
        u32 r0_1 = call_00691538(r0, r1_1);
        u32 r5_1 = *gptr<u32>(r0_1);
        u32 r0_2 = call_00691538(r0_1, guest::cpu()->r[1]);
        u32 r0_3 = call_00694178(r0_2);
        if (r0_3 != 0) {
            call_00301444(r0_3, r5_1);
            r0_3 = r0_3;
        }
        return r0_3;
    }
    frame.release();
    return call_00529ddc(r0, r1_1);
}

}  // namespace d_00577810
GUEST_EXPORT(0x00577810, d_00577810::f_00577810);

// f_00578018: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00578018 {

struct __attribute__((packed)) Object_00578018_0 {
    u8 unknown_0[0x70];  // (not used here)
    u32 word_70;
};
GUEST_OFFSET(Object_00578018_0, word_70, 0x70);

struct __attribute__((packed)) Object_00578018_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_00578018_1, word_0, 0x0);
GUEST_OFFSET(Object_00578018_1, word_4, 0x4);


u32 f_00578018(gptr<Object_00578018_0> arg0, gptr<Object_00578018_1> arg1) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r0_1 = r0 + 0x70u;  // (from the original)
    u32 r2 = arg0->word_70;
    if (r2 != r1) {
        do {
            u32 r0_2 = r2;
            r2 = *gptr<u32>(r2 + 4u);
            r0_1 = r0_2 + 4u;
            guest::preempt();
        } while (r2 != r1);
    }
    *gptr<u32>(r0_1) = arg1->word_4;
    arg1->word_0 = 0;
    arg1->word_4 = 0;
    return 0u;
}

}  // namespace d_00578018
GUEST_EXPORT(0x00578018, d_00578018::f_00578018);

// f_00578158: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00578158 {

struct __attribute__((packed)) Object_00578158_0 {
    u8 unknown_0[0x5d8];  // (not used here)
    u32 word_5d8;
    u32 word_5dc;
    u32 word_5e0;
    u8 unknown_5e4[0x78];  // (not used here)
    u8 byte_65c;
    u8 unknown_65d[0x237];  // (not used here)
    u32 word_894;
    u8 unknown_898[0x90];  // (not used here)
    u32 word_928;
    u32 word_92c;
    u32 word_930;
    u8 unknown_934[0x18];  // (not used here)
    u8 byte_94c;
};
GUEST_OFFSET(Object_00578158_0, word_5d8, 0x5d8);
GUEST_OFFSET(Object_00578158_0, word_5dc, 0x5dc);
GUEST_OFFSET(Object_00578158_0, word_5e0, 0x5e0);
GUEST_OFFSET(Object_00578158_0, byte_65c, 0x65c);
GUEST_OFFSET(Object_00578158_0, word_894, 0x894);
GUEST_OFFSET(Object_00578158_0, word_928, 0x928);
GUEST_OFFSET(Object_00578158_0, word_92c, 0x92c);
GUEST_OFFSET(Object_00578158_0, word_930, 0x930);
GUEST_OFFSET(Object_00578158_0, byte_94c, 0x94c);

struct __attribute__((packed)) Local_00578158_r0_3 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 unknown_3[0x1];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u16 half_1c;
    u16 half_1e;
    u16 half_20;
    u16 half_22;
    u16 half_24;
};
GUEST_OFFSET(Local_00578158_r0_3, byte_0, 0x0);
GUEST_OFFSET(Local_00578158_r0_3, byte_1, 0x1);
GUEST_OFFSET(Local_00578158_r0_3, byte_2, 0x2);
GUEST_OFFSET(Local_00578158_r0_3, word_4, 0x4);
GUEST_OFFSET(Local_00578158_r0_3, word_8, 0x8);
GUEST_OFFSET(Local_00578158_r0_3, word_c, 0xc);
GUEST_OFFSET(Local_00578158_r0_3, word_10, 0x10);
GUEST_OFFSET(Local_00578158_r0_3, word_14, 0x14);
GUEST_OFFSET(Local_00578158_r0_3, word_18, 0x18);
GUEST_OFFSET(Local_00578158_r0_3, half_1c, 0x1c);
GUEST_OFFSET(Local_00578158_r0_3, half_1e, 0x1e);
GUEST_OFFSET(Local_00578158_r0_3, half_20, 0x20);
GUEST_OFFSET(Local_00578158_r0_3, half_22, 0x22);
GUEST_OFFSET(Local_00578158_r0_3, half_24, 0x24);

struct __attribute__((packed)) Local_00578158_r1_1 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 unknown_3[0x1];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u16 half_1c;
    u16 half_1e;
    u16 half_20;
    u16 half_22;
    u16 half_24;
};
GUEST_OFFSET(Local_00578158_r1_1, byte_0, 0x0);
GUEST_OFFSET(Local_00578158_r1_1, byte_1, 0x1);
GUEST_OFFSET(Local_00578158_r1_1, byte_2, 0x2);
GUEST_OFFSET(Local_00578158_r1_1, word_4, 0x4);
GUEST_OFFSET(Local_00578158_r1_1, word_8, 0x8);
GUEST_OFFSET(Local_00578158_r1_1, word_c, 0xc);
GUEST_OFFSET(Local_00578158_r1_1, word_10, 0x10);
GUEST_OFFSET(Local_00578158_r1_1, word_14, 0x14);
GUEST_OFFSET(Local_00578158_r1_1, word_18, 0x18);
GUEST_OFFSET(Local_00578158_r1_1, half_1c, 0x1c);
GUEST_OFFSET(Local_00578158_r1_1, half_1e, 0x1e);
GUEST_OFFSET(Local_00578158_r1_1, half_20, 0x20);
GUEST_OFFSET(Local_00578158_r1_1, half_22, 0x22);
GUEST_OFFSET(Local_00578158_r1_1, half_24, 0x24);

inline constexpr guest::Function<0x001ccf5c, u32(u32, u32, u32, u32)> call_001ccf5c;

u32 f_00578158(gptr<Object_00578158_0> arg0) {
    u32 r2_1 = arg0->word_5d8;
    gptr<Local_00578158_r1_1> r1_1 = gptr<Local_00578158_r1_1>(arg0->word_5dc);
    u32 r3_1 = arg0->word_5e0;
    u32 r0_1 = u64(s64(s32(0x66666667u)) * s32(r1_1.addr() - r2_1)) >> 0x20;  // (from the original)
    u32 r0_2 = u32(s32(r0_1) >> 4) - u32(s32(r0_1) >> 0x1f);  // (from the original)
    if (r0_2 != r3_1) {
        r3_1 = ~0x27u;  // (from the original)
        gptr<Local_00578158_r0_3> r0_3 = gptr<Local_00578158_r0_3>(r3_1 + (r0_2 + (r0_2 << 2) << 3) + r2_1);
        if (r1_1.addr() != 0) {
            r1_1->byte_0 = u8(u32(r0_3->byte_0));
            r1_1->byte_1 = u8(u32(r0_3->byte_1));
            r1_1->byte_2 = u8(u32(r0_3->byte_2));
            r1_1->word_4 = r0_3->word_4;
            r1_1->word_8 = r0_3->word_8;
            r1_1->word_c = r0_3->word_c;
            r1_1->word_10 = r0_3->word_10;
            r3_1 = r0_3->word_14;
            r1_1->word_14 = r3_1;
            r1_1->word_18 = r0_3->word_18;
            r1_1->half_1c = u16(u32(r0_3->half_1c));
            r1_1->half_1e = u16(u32(r0_3->half_1e));
            r1_1->half_20 = u16(u32(r0_3->half_20));
            r1_1->half_22 = u16(u32(r0_3->half_22));
            r1_1->half_24 = u16(u32(r0_3->half_24));
        }
        arg0->word_5dc = arg0->word_5dc + 0x28u;  // (from the original)
    }
    if (arg0->byte_65c == 0) {
        call_001ccf5c(arg0.addr() + 0x5d0u, 1u, r2_1, r3_1);  // (from the original)
    }
    arg0->word_92c = arg0->word_928;
    arg0->byte_94c = 0xa;  // (from the original)
    u32 r1_2 = arg0->word_894;
    arg0->word_930 = r1_2;
    guest::cpu()->r[1] = r1_2;
    return 0xau;  // (from the original)
}

}  // namespace d_00578158
GUEST_EXPORT_FRAMED(0x00578158, d_00578158::f_00578158, 0x4010);  // pushes {r4, lr} first, as the original

// f_005783f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005783f4 {

struct __attribute__((packed)) Local_005783f4_r0_1 {
    u8 unknown_0[0x20e];  // (not used here)
    u8 byte_20e;
};
GUEST_OFFSET(Local_005783f4_r0_1, byte_20e, 0x20e);

inline guest::global<u32, 0x0095385c> global_0095385c;
inline constexpr guest::Function<0x002f93bc, u32(u32, u32)> call_002f93bc;
inline constexpr guest::Function<0x00303fb4, u32(u32, u32, u32)> call_00303fb4;
inline constexpr guest::Function<0x00305f44, u32(u32)> call_00305f44;
inline constexpr guest::Function<0x0052c790, u32(u32, u32, u32, u32)> call_0052c790;
inline constexpr guest::Function<0x0052cd58, u32(u32, u32, u32, u32)> call_0052cd58;

u32 f_005783f4(gptr<AcNpc_rec> arg0, u32 r1_unused, u32 r2) {
    gptr<Local_005783f4_r0_1> r0_1 = gptr<Local_005783f4_r0_1>(arg0->word_660);
    u32 r1_1 = r0_1->byte_20e;
    if (r1_1 != 0) {
        r0_1->byte_20e = 0;
        call_0052cd58(arg0.addr(), 0u, r2, guest::cpu()->r[3]);
    } else {
        call_0052c790(arg0.addr(), r1_1, r2, guest::cpu()->r[3]);
    }
    if ((u32(arg0->byte_b08) >> 4u & 1u) != 0) {
        u32 r5_1 = *global_0095385c;
        if (r5_1 != 0) {
            u32 r0_2 = call_00305f44(0x95385cu);  // (from the original)
            u32 r1_3 = *gptr<u8>(r5_1 + 0x12u);  // (from the original)
            if (r0_2 == r1_3) {
                u32 r0_3 = arg0->byte_95e;
                call_002f93bc(r0_3, r1_3);
            }
        }
    }
    u32 r0_4 = call_00303fb4(arg0.addr() + 0xb06u, 0x17u, 0u);  // (from the original)
    return r0_4;
}

}  // namespace d_005783f4
GUEST_EXPORT_FRAMED(0x005783f4, d_005783f4::f_005783f4, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0057885c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0057885c {

struct __attribute__((packed)) Object_0057885c_0 {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u32 word_28;
    u8 unknown_2c[0x2];  // (not used here)
    u16 half_2e;
    u8 unknown_30[0xa];  // (not used here)
    u16 half_3a;
    u8 unknown_3c[0xa64];  // (not used here)
    u32 word_aa0;
    u8 unknown_aa4[0x62];  // (not used here)
    u8 byte_b06;
};
GUEST_OFFSET(Object_0057885c_0, word_14, 0x14);
GUEST_OFFSET(Object_0057885c_0, word_18, 0x18);
GUEST_OFFSET(Object_0057885c_0, word_1c, 0x1c);
GUEST_OFFSET(Object_0057885c_0, word_20, 0x20);
GUEST_OFFSET(Object_0057885c_0, word_24, 0x24);
GUEST_OFFSET(Object_0057885c_0, word_28, 0x28);
GUEST_OFFSET(Object_0057885c_0, half_2e, 0x2e);
GUEST_OFFSET(Object_0057885c_0, half_3a, 0x3a);
GUEST_OFFSET(Object_0057885c_0, word_aa0, 0xaa0);
GUEST_OFFSET(Object_0057885c_0, byte_b06, 0xb06);

struct __attribute__((packed)) Local_0057885c_r0_3 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_0057885c_r0_3, float_0, 0x0);
GUEST_OFFSET(Local_0057885c_r0_3, float_4, 0x4);
GUEST_OFFSET(Local_0057885c_r0_3, float_8, 0x8);

struct __attribute__((packed)) Local_0057885c_r5_1 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
    u8 byte_4;
};
GUEST_OFFSET(Local_0057885c_r5_1, byte_0, 0x0);
GUEST_OFFSET(Local_0057885c_r5_1, byte_1, 0x1);
GUEST_OFFSET(Local_0057885c_r5_1, byte_2, 0x2);
GUEST_OFFSET(Local_0057885c_r5_1, byte_3, 0x3);
GUEST_OFFSET(Local_0057885c_r5_1, byte_4, 0x4);

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;
inline constexpr guest::Function<0x006c6640, u32(u32, u32, u32)> call_006c6640;

struct __attribute__((packed)) Frame_0057885c {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Frame_0057885c, word_0, 0x0);
GUEST_OFFSET(Frame_0057885c, word_4, 0x4);
GUEST_OFFSET(Frame_0057885c, word_8, 0x8);
GUEST_SIZE(Frame_0057885c, 0xc);

u32 f_0057885c(gptr<Object_0057885c_0> arg0, u32 r1, u32 r2, float S0, float S1, float S2) {
    guest::StackFrameOf<Frame_0057885c> frame;  // the original's stack frame
    gptr<Local_0057885c_r5_1> r5_1 = gptr<Local_0057885c_r5_1>(arg0->word_aa0);
    if (r5_1.addr() != 0) {
        u32 r0_1 = call_002f74c8(arg0.addr(), r1, r2, guest::cpu()->r[3]);
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        r1 = r5_1->byte_4;
        if (r0_1 == r1) {
            u32 r0_2 = r5_1->byte_1;
            float S1_1 = 0.0f;
            u32 r2_1 = r0_2 >> 4;
            u32 r1_1 = r5_1->byte_0;
            float S2_1 = float(std::bit_cast<u32>(std::bit_cast<float>(r2_1 + (u32(r5_1->byte_2) << 4))));
            float S0_1 = std::bit_cast<float>(r1_1 + ((r0_2 & 0xfu) << 8));  // (from the original)
            gptr<Local_0057885c_r0_3> r0_3 = gptr<Local_0057885c_r0_3>(frame.at(0).addr());
            float S0_2 = float(std::bit_cast<u32>(S0_1));
            r0_3->float_0 = S0_2;
            r0_3->float_4 = S1_1;
            r0_3->float_8 = S2_1;
            if ((u32(arg0->byte_b06) >> 3u & 1u) == 0) {
                guest::cpu()->s[0] = S0_2;
                guest::cpu()->s[1] = S1_1;
                guest::cpu()->s[2] = S2_1;
                call_006c6640(frame.at(0).addr(), 0u, r2_1);
                r1_1 = guest::cpu()->r[1];
                S0_2 = guest::cpu()->s[0];
                S1_1 = guest::cpu()->s[1];
                frame->word_4 = std::bit_cast<u32>(S0_2);
            } else {
                frame->word_4 = arg0->word_18;
            }
            u32 r0_5 = r5_1->byte_3;
            arg0->word_14 = frame->word_0;
            u32 r0_6 = r0_5 << 8;
            arg0->word_18 = frame->word_4;
            arg0->word_1c = frame->word_8;
            arg0->word_20 = frame->word_0;
            arg0->word_24 = frame->word_4;
            arg0->word_28 = frame->word_8;
            arg0->half_2e = u16(r0_6);
            arg0->half_3a = u16(r0_6);
            guest::cpu()->r[1] = r1_1;
            guest::cpu()->s[0] = S0_2;
            guest::cpu()->s[1] = S1_1;
            return 1u;
        }
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return 0u;
}

}  // namespace d_0057885c
GUEST_EXPORT_FRAMED(0x0057885c, d_0057885c::f_0057885c, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00578948: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00578948 {


void f_00578948(gptr<AcNpc_rec> arg0) {
    u32 r1_1 = arg0->word_92c;
    arg0->byte_94c = 0xff;  // (from the original)
    arg0->word_928 = r1_1;
    u32 r1_2 = arg0->word_5dc;
    u32 r2_1 = u64(s64(s32(0x66666667u)) * s32(r1_2 - arg0->word_5d8)) >> 0x20;  // (from the original)
    if (u32(s32(r2_1) >> 4) - u32(s32(r2_1) >> 0x1f) > 1u) {  // (from the original)
        r1_2 -= 0x28u;  // (from the original)
        arg0->word_5dc = r1_2;
    }
    guest::cpu()->r[1] = r1_2;
}

}  // namespace d_00578948
GUEST_EXPORT(0x00578948, d_00578948::f_00578948);

// f_00578988: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00578988 {

struct __attribute__((packed)) Object_00578988_0 {
    u8 unknown_0[0x94b];  // (not used here)
    u8 byte_94b;
    u8 unknown_94c[0x154];  // (not used here)
    u32 word_aa0;
    u8 unknown_aa4[0x63];  // (not used here)
    u8 byte_b07;
};
GUEST_OFFSET(Object_00578988_0, byte_94b, 0x94b);
GUEST_OFFSET(Object_00578988_0, word_aa0, 0xaa0);
GUEST_OFFSET(Object_00578988_0, byte_b07, 0xb07);

inline constexpr guest::Function<0x00305f44, u32(u32)> call_00305f44;

u32 f_00578988(gptr<Object_00578988_0> arg0) {
    u32 res_1 = u32(arg0->byte_b07) >> 3u & 1u;
    u32 zf_1 = res_1 == 0;
    u32 r0_1 = res_1;
    if (!zf_1) {
        r0_1 = arg0->word_aa0;
        zf_1 = r0_1 == 0;
    }
    if (!zf_1) {
        u32 r0_2 = u32(*gptr<u8>(r0_1 + 5u)) << 0x1a;  // (from the original)
        u32 r5_1 = r0_2 >> 0x1d;  // (from the original)
        if (r5_1 != 4u) {
            u32 r0_3 = call_00305f44(r0_2);
            if (r0_3 != r5_1) {
                arg0->byte_94b = u8(r5_1);
                return 1u;
            }
        }
    }
    arg0->byte_94b = 4;
    return 0u;
}

}  // namespace d_00578988
GUEST_EXPORT_FRAMED(0x00578988, d_00578988::f_00578988, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00578af4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00578af4 {

struct __attribute__((packed)) Object_00578af4_0 {
    u8 unknown_0[0xafe];  // (not used here)
    u16 half_afe;
};
GUEST_OFFSET(Object_00578af4_0, half_afe, 0xafe);


u32 f_00578af4(gptr<Object_00578af4_0> arg0) {
    arg0->half_afe = 0x5f;  // (from the original)
    return 0x5fu;  // (from the original)
}

}  // namespace d_00578af4
GUEST_EXPORT(0x00578af4, d_00578af4::f_00578af4);

// f_00578b38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00578b38 {

inline constexpr guest::Function<0x0029cf30, u32(u32, u32, u32)> call_0029cf30;
inline constexpr guest::Function<0x00300904, u32(u32)> call_00300904;
inline constexpr guest::Function<0x007523a8, u32(u32, u32, u32, u32)> call_007523a8;

u32 f_00578b38(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = call_007523a8(r0, r1, r2, guest::cpu()->r[3]);
    if (r0_1 == 0) {
        return r0_1;
    }
    u32 r0_2 = call_00300904(r0_1);
    u32 zf_1 = r0_2 == 0;
    if (!zf_1) {
        r0_2 = *gptr<u32>(r0 + 0xaa0u);  // (from the original)
        zf_1 = r0_2 == 0;
    }
    if (zf_1) {
        return r0_2;
    }
    u32 r1_3 = *gptr<u8>(r0 + 0x95eu);  // (from the original)
    frame.release();
    return call_0029cf30(r0_2, r1_3, 0u);
}

}  // namespace d_00578b38
GUEST_EXPORT(0x00578b38, d_00578b38::f_00578b38);

// f_00578bc8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00578bc8 {

struct __attribute__((packed)) Object_00578bc8_0 {
    u8 unknown_0[0xb0a];  // (not used here)
    u8 byte_b0a;
};
GUEST_OFFSET(Object_00578bc8_0, byte_b0a, 0xb0a);

struct __attribute__((packed)) Local_00578bc8_r4_1 {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
};
GUEST_OFFSET(Local_00578bc8_r4_1, byte_4, 0x4);

inline guest::global<u32, 0x00950148> global_00950148;
inline constexpr guest::Function<0x00697e88, u32(u32, u32)> call_00697e88;

u32 f_00578bc8(gptr<Object_00578bc8_0> arg0) {
    gptr<Local_00578bc8_r4_1> r4_1 = gptr<Local_00578bc8_r4_1>(arg0.addr() + 0xb06u);  // (from the original)
    u32 r0_1 = u32(arg0->byte_b0a) >> 4u & 1u;
    if (r0_1 == 0) {
        guest::cpu()->r[1] = arg0.addr();
        return r0_1;
    }
    u32 r0_2 = *global_00950148;
    if (r0_2 == 0) {
        guest::cpu()->r[1] = arg0.addr();
        return r0_2;
    }
    u32 r0_3 = call_00697e88(r0_2, arg0.addr());
    if (r0_3 == 0) {
        return r0_3;
    }
    u32 r0_4 = u32(r4_1->byte_4) & ~0x10u;  // (from the original)
    r4_1->byte_4 = u8(r0_4);
    return r0_4;
}

}  // namespace d_00578bc8
GUEST_EXPORT_FRAMED(0x00578bc8, d_00578bc8::f_00578bc8, 0x4010);  // pushes {r4, lr} first, as the original

// f_00578c6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00578c6c {

inline constexpr guest::Function<0x006e8560, u32(u32, u32, u32, u32)> call_006e8560;

u32 f_00578c6c(gptr<AcNpcSp_rec> arg0) {
    u32 r1_1 = arg0->word_aa0;
    if (r1_1 != 0) {
        call_006e8560(arg0.addr() + 0x78u, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1_1 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_00578c6c
GUEST_EXPORT_FRAMED(0x00578c6c, d_00578c6c::f_00578c6c, 0x4010);  // pushes {r4, lr} first, as the original

// f_00579024: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00579024 {

inline constexpr guest::Function<0x0057ba08, u32(u32, u32)> call_0057ba08;
inline constexpr guest::Function<0x005c33cc, u32(u32, u32, u32, u32)> call_005c33cc;

u32 f_00579024(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r0_1 = call_005c33cc(r1, 0u, guest::cpu()->r[2], r3);
    if (r0_1 == 0) {
        return *gptr<u16>(r0 + 0x2eu);  // (from the original)
    } else {
        *frame.at<u16>(0) = 0;
    }
    u32 r0_4 = call_0057ba08(r0 + 0x14u, r0_1 + 0x14u);  // (from the original)
    *frame.at<u16>(0) = u16(r0_4);
    *frame.at<u32>(0) = uxth(r0_4);
    return *frame.at<u16>(0);
}

}  // namespace d_00579024
GUEST_EXPORT_FRAMED(0x00579024, d_00579024::f_00579024, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_005791c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005791c4 {

inline constexpr guest::Function<0x0029d228, u32(u32, u32, u32, u32)> call_0029d228;
inline constexpr guest::Function<0x002fc900, u32(u32, u32, u32, u32)> call_002fc900;

u32 f_005791c4(u32 r0, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = call_002fc900(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 == 0) {
        return r0_1;
    }
    *gptr<u32>(r0 + 0x938u) = ~0u;  // (from the original)
    u32 r1_2 = u32(*gptr<u8>(r0 + 0xb09u)) | 1u;  // (from the original)
    *gptr<u8>(r0 + 0xb09u) = u8(r1_2);  // (from the original)
    u32 r0_2 = *gptr<u8>(r0 + 0x95eu);  // (from the original)
    frame.release();
    return call_0029d228(r0_2, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005791c4
GUEST_EXPORT(0x005791c4, d_005791c4::f_005791c4);

// f_005792fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005792fc {

inline constexpr guest::Function<0x00303fb4, u32(u32, u32, u32, u32)> call_00303fb4;
inline constexpr guest::Function<0x005bff78, u32(u32)> call_005bff78;
inline constexpr guest::Function<0x006ea834, u32(u32, u32, u32, u32)> call_006ea834;

struct __attribute__((packed)) Frame_005792fc {
    u32 word_0;
};
GUEST_OFFSET(Frame_005792fc, word_0, 0x0);
GUEST_SIZE(Frame_005792fc, 0x4);

void f_005792fc(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    guest::StackFrameOf<Frame_005792fc> frame;  // the original's stack frame
    frame->word_0 = r3;
    call_00303fb4(r0 + 0xb06u, 0xfu, 1u, r3);  // (from the original)
    u32 r5_1 = 2u;
    if (r1 == 0) {
        r5_1 = 0u;
    } else {
        u32 zf_1 = r1 == 1u;
        if (zf_1) {
            r5_1 = 1u;
        } else {
            zf_1 = r1 == 2u;
        }
        if (!zf_1 && r1 == 3u) {
            r5_1 = 3u;
        }
    }
    call_005bff78(r5_1);
    u32 r4_1 = 0x135u;  // (from the original)
    if (r2 == 0) {
        r4_1 |= u32(s32(r4_1) >> 3);
    } else if (r2 == 1u) {
        r4_1 = 0x136u;  // (from the original)
    } else if (r2 == 2u) {
        r4_1 = 0x138u;  // (from the original)
    } else if (r2 == 3u) {
        r4_1 = 0x139u;  // (from the original)
    }
    call_005bff78(r5_1);
    frame->word_0 = 0;
    float S0_3 = 0.0f;
    float S1_3 = 6.0f;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_3;
    call_006ea834(r0 + 0x78u, 0u, r4_1, 2u);  // (from the original)
}

}  // namespace d_005792fc
GUEST_EXPORT_FRAMED(0x005792fc, d_005792fc::f_005792fc, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00579514: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00579514 {

inline constexpr guest::Function<0x00303fb4, u32(u32, u32, u32)> call_00303fb4;
inline constexpr guest::Function<0x005c1c7c, u32(u32)> call_005c1c7c;
inline constexpr guest::Function<0x006e9c2c, u32(u32, u32, u32, u32)> call_006e9c2c;

void f_00579514(u32 r0, u32 r1_unused, u32 r2) {
    float S0_1 = 6.0f;
    guest::cpu()->s[0] = S0_1;
    call_006e9c2c(r0 + 0x78u, 0u, r2, guest::cpu()->r[3]);  // (from the original)
    call_005c1c7c(1u);
    call_00303fb4(r0 + 0xb06u, 0xfu, 0u);  // (from the original)
}

}  // namespace d_00579514
GUEST_EXPORT_FRAMED(0x00579514, d_00579514::f_00579514, 0x4010);  // pushes {r4, lr} first, as the original

// f_00579b98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00579b98 {

struct __attribute__((packed)) Object_00579b98_0 {
    u8 unknown_0[0x68];  // (not used here)
    u32 word_68;
    u8 unknown_6c[0x8f8];  // (not used here)
    u32 word_964;
    u8 unknown_968[0x19f];  // (not used here)
    u8 byte_b07;
    u8 unknown_b08[0x1];  // (not used here)
    u8 byte_b09;
};
GUEST_OFFSET(Object_00579b98_0, word_68, 0x68);
GUEST_OFFSET(Object_00579b98_0, word_964, 0x964);
GUEST_OFFSET(Object_00579b98_0, byte_b07, 0xb07);
GUEST_OFFSET(Object_00579b98_0, byte_b09, 0xb09);

struct __attribute__((packed)) Local_00579b98_r0_1 {
    u8 unknown_0[0xfa];  // (not used here)
    u16 half_fa;
};
GUEST_OFFSET(Local_00579b98_r0_1, half_fa, 0xfa);

struct __attribute__((packed)) Local_00579b98_r2_3 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00579b98_r2_3, word_4, 0x4);
GUEST_OFFSET(Local_00579b98_r2_3, word_8, 0x8);
GUEST_OFFSET(Local_00579b98_r2_3, word_c, 0xc);

inline guest::global<u32, 0x0083fa0c> global_0083fa0c;
inline guest::global<u32, 0x0083fa10> global_0083fa10;
inline constexpr guest::Function<0x002f872c, u32(u32, u32)> call_002f872c;
inline constexpr guest::Function<0x005c2ce0, u32(u32, u32, u32, u32)> call_005c2ce0;
inline constexpr guest::Function<0x0070ae88, u32(u32, u32, u32, u32)> call_0070ae88;

struct __attribute__((packed)) Frame_00579b98 {
    u32 word_0;
};
GUEST_OFFSET(Frame_00579b98, word_0, 0x0);
GUEST_SIZE(Frame_00579b98, 0x4);

u32 f_00579b98(gptr<Object_00579b98_0> arg0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2) {
    guest::StackFrameOf<Frame_00579b98> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r6_1 = r1;
    u32 r5_1 = arg0.addr() + 0xb06u;  // (from the original)
    gptr<Local_00579b98_r0_1> r0_1 = gptr<Local_00579b98_r0_1>(u32(arg0->byte_b09) >> 6u & 1u);
    if (r0_1.addr() != 0) {
        r0_1 = gptr<Local_00579b98_r0_1>(u32(arg0->byte_b07));
        if ((r0_1.addr() & 1u) != 0) {
            u32 r0_2 = call_005c2ce0(4u, 0u, r2, r3);
            S0 = guest::cpu()->s[0];
            S1 = guest::cpu()->s[1];
            r1 = arg0->word_68;
            u32 zf_1 = r0_2 == 0;
            r0_1 = gptr<Local_00579b98_r0_1>(r1 + 4u);
            if (!zf_1) {
                frame->word_0 = 0x4000;  // (from the original)
                float S0_1 = 32.0f * 3.0f;
                float S2_1 = 128.0f;
                float S1_1 = -32.0f;
                guest::cpu()->s[0] = S0_1;
                guest::cpu()->s[1] = S1_1;
                guest::cpu()->s[2] = S2_1;
                r0_1 = gptr<Local_00579b98_r0_1>(call_0070ae88(r0_1.addr(), arg0.addr() + 0x14u, arg0.addr() + 0x2cu, r0_2));  // (from the original)
                r1 = guest::cpu()->r[1];
                S0 = guest::cpu()->s[0];
                S1 = guest::cpu()->s[1];
                if (r0_1.addr() != 0) {
                    u32 r0_4 = call_002f872c(arg0.addr() + 0xb00u, r6_1);  // (from the original)
                    S0 = guest::cpu()->s[0];
                    S1 = guest::cpu()->s[1];
                    u32 zf_2 = r0_4 == 0;
                    r1 = r0_4;
                    r0_1 = gptr<Local_00579b98_r0_1>(arg0.addr() + 0xa00u);  // (from the original)
                    gptr<Local_00579b98_r2_3> r2_3 = gptr<Local_00579b98_r2_3>(arg0.addr() + 0x980u);  // (from the original)
                    if (zf_2) {
                        r0_1->half_fa = 1;
                    } else if (r1 == 1u) {
                        r0_1->half_fa = 4;
                    } else {
                        guest::cpu()->r[1] = r1;
                        return r0_1.addr();
                    }
                    *gptr<u16>(r0_1.addr() + 0xfcu) = 0;  // (from the original)
                    r0_1 = gptr<Local_00579b98_r0_1>(u32(*gptr<u8>(r5_1 + 3u)) | 0x80u);  // (from the original)
                    *gptr<u8>(r5_1 + 3u) = u8(r0_1.addr());
                    r1 = *global_0083fa0c;
                    u32 r3_2 = *global_0083fa10;
                    r2_3->word_8 = r1;
                    r2_3->word_c = r3_2;
                    r2_3->word_4 = arg0.addr();
                    arg0->word_964 = r2_3.addr();
                }
            }
        }
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0_1.addr();
}

}  // namespace d_00579b98
GUEST_EXPORT_FRAMED(0x00579b98, d_00579b98::f_00579b98, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00579e44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00579e44 {

struct __attribute__((packed)) Object_00579e44_0 {
    u8 unknown_0[0x6];  // (not used here)
    u16 half_6;
    u8 unknown_8[0xa];  // (not used here)
    u8 byte_12;
    u8 unknown_13[0xd];  // (not used here)
    u16 half_20;
    u8 unknown_22[0x2];  // (not used here)
    u32 word_24;
    u16 half_28;
    u8 byte_2a;
};
GUEST_OFFSET(Object_00579e44_0, half_6, 0x6);
GUEST_OFFSET(Object_00579e44_0, byte_12, 0x12);
GUEST_OFFSET(Object_00579e44_0, half_20, 0x20);
GUEST_OFFSET(Object_00579e44_0, word_24, 0x24);
GUEST_OFFSET(Object_00579e44_0, half_28, 0x28);
GUEST_OFFSET(Object_00579e44_0, byte_2a, 0x2a);

inline guest::global<u16, 0x00984634> global_00984634;
inline guest::global<u32, 0x00984638> global_00984638;
inline guest::global<u16, 0x0098463c> global_0098463c;
inline guest::global<u8, 0x0098463e> global_0098463e;
inline guest::global<u16, 0x00984640> global_00984640;
inline guest::global<u32, 0x00984644> global_00984644;
inline guest::global<u16, 0x00984648> global_00984648;
inline guest::global<u8, 0x0098464a> global_0098464a;

void f_00579e44(gptr<Object_00579e44_0> arg0, u32 r1) {
    arg0->half_6 = u16(r1);
    if (r1 != 0xfu) {  // (from the original)
        if (r1 == 0) {
            arg0->byte_12 = u8(r1);
            guest::cpu()->r[1] = r1;
            return;
        }
        arg0->half_20 = u16(u32(*global_00984640));
        arg0->word_24 = *global_00984644;
        arg0->half_28 = u16(u32(*global_00984648));
        u32 r1_1 = *global_0098464a;
        arg0->byte_2a = u8(r1_1);
        guest::cpu()->r[1] = r1_1;
        return;
    }
    arg0->half_20 = u16(u32(*global_00984634));
    arg0->word_24 = *global_00984638;
    arg0->half_28 = u16(u32(*global_0098463c));
    u32 r1_2 = *global_0098463e;
    arg0->byte_2a = u8(r1_2);
    guest::cpu()->r[1] = r1_2;
}

}  // namespace d_00579e44
GUEST_EXPORT(0x00579e44, d_00579e44::f_00579e44);

// f_00579eb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00579eb4 {

struct __attribute__((packed)) Object_00579eb4_0 {
    u8 unknown_0[0x2];  // (not used here)
    u16 half_2;
    u8 unknown_4[0x4];  // (not used here)
    u16 half_8;
    u8 unknown_a[0x2];  // (not used here)
    u32 word_c;
    u16 half_10;
    u8 byte_12;
};
GUEST_OFFSET(Object_00579eb4_0, half_2, 0x2);
GUEST_OFFSET(Object_00579eb4_0, half_8, 0x8);
GUEST_OFFSET(Object_00579eb4_0, word_c, 0xc);
GUEST_OFFSET(Object_00579eb4_0, half_10, 0x10);
GUEST_OFFSET(Object_00579eb4_0, byte_12, 0x12);

inline guest::global<u16, 0x0098461c> global_0098461c;
inline guest::global<u32, 0x00984620> global_00984620;
inline guest::global<u16, 0x00984624> global_00984624;
inline guest::global<u8, 0x00984626> global_00984626;
inline guest::global<u16, 0x0098464c> global_0098464c;
inline guest::global<u32, 0x00984650> global_00984650;
inline guest::global<u16, 0x00984654> global_00984654;
inline guest::global<u8, 0x00984656> global_00984656;
inline guest::global<u16, 0x00984658> global_00984658;
inline guest::global<u32, 0x0098465c> global_0098465c;
inline guest::global<u16, 0x00984660> global_00984660;
inline guest::global<u8, 0x00984662> global_00984662;
inline guest::global<u16, 0x00984664> global_00984664;
inline guest::global<u32, 0x00984668> global_00984668;
inline guest::global<u16, 0x0098466c> global_0098466c;
inline guest::global<u8, 0x0098466e> global_0098466e;
inline guest::global<u16, 0x00984670> global_00984670;
inline guest::global<u32, 0x00984674> global_00984674;
inline guest::global<u16, 0x00984678> global_00984678;
inline guest::global<u8, 0x0098467a> global_0098467a;

void f_00579eb4(gptr<Object_00579eb4_0> arg0, u32 r1) {
    arg0->half_2 = u16(r1);
    if (r1 != 0xdu) {  // (from the original)
        if (r1 != 0x19fu) {  // (from the original)
            if (r1 == 0x1a1u) {  // (from the original)
                arg0->half_8 = u16(u32(*global_00984658));
                arg0->word_c = *global_0098465c;
                arg0->half_10 = u16(u32(*global_00984660));
                u32 r1_1 = *global_00984662;
                arg0->byte_12 = u8(r1_1);
                guest::cpu()->r[1] = r1_1;
                return;
            }
            if (r1 == 0x1a3u) {  // (from the original)
                arg0->half_8 = u16(u32(*global_00984664));
                arg0->word_c = *global_00984668;
                arg0->half_10 = u16(u32(*global_0098466c));
                u32 r1_2 = *global_0098466e;
                arg0->byte_12 = u8(r1_2);
                guest::cpu()->r[1] = r1_2;
                return;
            }
            if (r1 != 0x1a5u) {  // (from the original)
                arg0->byte_12 = 0;
                guest::cpu()->r[1] = 0u;
                return;
            }
            arg0->half_8 = u16(u32(*global_00984670));
            arg0->word_c = *global_00984674;
            arg0->half_10 = u16(u32(*global_00984678));
            u32 r1_3 = *global_0098467a;
            arg0->byte_12 = u8(r1_3);
            guest::cpu()->r[1] = r1_3;
            return;
        }
        arg0->half_8 = u16(u32(*global_0098464c));
        arg0->word_c = *global_00984650;
        arg0->half_10 = u16(u32(*global_00984654));
        u32 r1_4 = *global_00984656;
        arg0->byte_12 = u8(r1_4);
        guest::cpu()->r[1] = r1_4;
        return;
    }
    arg0->half_8 = u16(u32(*global_0098461c));
    arg0->word_c = *global_00984620;
    arg0->half_10 = u16(u32(*global_00984624));
    u32 r1_5 = *global_00984626;
    arg0->byte_12 = u8(r1_5);
    guest::cpu()->r[1] = r1_5;
}

}  // namespace d_00579eb4
GUEST_EXPORT(0x00579eb4, d_00579eb4::f_00579eb4);

// f_00579fd0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00579fd0 {

struct __attribute__((packed)) Object_00579fd0_0 {
    u16 half_0;
    u8 unknown_2[0x2];  // (not used here)
    u16 half_4;
    u16 half_6;
    u8 unknown_8[0xa];  // (not used here)
    u8 byte_12;
    u8 unknown_13[0x1];  // (not used here)
    u16 half_14;
    u8 unknown_16[0x2];  // (not used here)
    u32 word_18;
    u16 half_1c;
    u8 byte_1e;
    u8 unknown_1f[0x1];  // (not used here)
    u16 half_20;
    u8 unknown_22[0x2];  // (not used here)
    u32 word_24;
    u16 half_28;
    u8 byte_2a;
};
GUEST_OFFSET(Object_00579fd0_0, half_0, 0x0);
GUEST_OFFSET(Object_00579fd0_0, half_4, 0x4);
GUEST_OFFSET(Object_00579fd0_0, half_6, 0x6);
GUEST_OFFSET(Object_00579fd0_0, byte_12, 0x12);
GUEST_OFFSET(Object_00579fd0_0, half_14, 0x14);
GUEST_OFFSET(Object_00579fd0_0, word_18, 0x18);
GUEST_OFFSET(Object_00579fd0_0, half_1c, 0x1c);
GUEST_OFFSET(Object_00579fd0_0, byte_1e, 0x1e);
GUEST_OFFSET(Object_00579fd0_0, half_20, 0x20);
GUEST_OFFSET(Object_00579fd0_0, word_24, 0x24);
GUEST_OFFSET(Object_00579fd0_0, half_28, 0x28);
GUEST_OFFSET(Object_00579fd0_0, byte_2a, 0x2a);

inline guest::global<u16, 0x00984628> global_00984628;
inline guest::global<u32, 0x0098462c> global_0098462c;
inline guest::global<u16, 0x00984630> global_00984630;
inline guest::global<u8, 0x00984632> global_00984632;
inline guest::global<u16, 0x00984634> global_00984634;
inline guest::global<u32, 0x00984638> global_00984638;
inline guest::global<u16, 0x0098463c> global_0098463c;
inline guest::global<u8, 0x0098463e> global_0098463e;
inline guest::global<u16, 0x00984640> global_00984640;
inline guest::global<u32, 0x00984644> global_00984644;
inline guest::global<u16, 0x00984648> global_00984648;
inline guest::global<u8, 0x0098464a> global_0098464a;
inline constexpr guest::Function<0x00579eb4, u32(u32, u32, u32, u32)> call_00579eb4;

u32 f_00579fd0(gptr<Object_00579fd0_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    u32 r5_1 = *gptr<u32>(guest::cpu()->r[13] + 0xcu);  // (from the original)
    arg0->half_0 = u16(r1);
    call_00579eb4(arg0.addr(), r2, r2, r3);
    u32 r3_1 = guest::cpu()->r[3];
    arg0->half_4 = u16(r3_1);
    if (r3_1 == 0xeu) {  // (from the original)
        arg0->half_14 = u16(u32(*global_00984628));
        arg0->word_18 = *global_0098462c;
        arg0->half_1c = u16(u32(*global_00984630));
        u32 r2_1 = *global_00984632;
        r0_1 = arg0.addr();
        arg0->byte_1e = u8(r2_1);
    } else {
        r0_1 = arg0.addr();
        arg0->byte_12 = 0;
    }
    arg0->half_6 = u16(r5_1);
    if (r5_1 != 0xfu) {  // (from the original)
        if (r5_1 == 0) {
            *gptr<u8>(r0_1 + 0x12u) = 0;  // (from the original)
            guest::cpu()->r[1] = 0u;
            return r0_1;
        }
        arg0->half_20 = u16(u32(*global_00984640));
        arg0->word_24 = *global_00984644;
        u32 r1_1 = *global_00984648;
        arg0->half_28 = u16(r1_1);
        u32 r0_2 = *global_0098464a;
        arg0->byte_2a = u8(r0_2);
        guest::cpu()->r[1] = r1_1;
        return r0_2;
    }
    arg0->half_20 = u16(u32(*global_00984634));
    arg0->word_24 = *global_00984638;
    u32 r1_2 = *global_0098463c;
    arg0->half_28 = u16(r1_2);
    u32 r0_3 = *global_0098463e;
    arg0->byte_2a = u8(r0_3);
    guest::cpu()->r[1] = r1_2;
    return r0_3;
}

}  // namespace d_00579fd0
GUEST_EXPORT_FRAMED(0x00579fd0, d_00579fd0::f_00579fd0, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0057a0a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0057a0a0 {

struct __attribute__((packed)) Object_0057a0a0_0 {
    u8 unknown_0[0x4];  // (not used here)
    u16 half_4;
    u8 unknown_6[0xc];  // (not used here)
    u8 byte_12;
    u8 unknown_13[0x1];  // (not used here)
    u16 half_14;
    u8 unknown_16[0x2];  // (not used here)
    u32 word_18;
    u16 half_1c;
    u8 byte_1e;
};
GUEST_OFFSET(Object_0057a0a0_0, half_4, 0x4);
GUEST_OFFSET(Object_0057a0a0_0, byte_12, 0x12);
GUEST_OFFSET(Object_0057a0a0_0, half_14, 0x14);
GUEST_OFFSET(Object_0057a0a0_0, word_18, 0x18);
GUEST_OFFSET(Object_0057a0a0_0, half_1c, 0x1c);
GUEST_OFFSET(Object_0057a0a0_0, byte_1e, 0x1e);

inline guest::global<u16, 0x00984628> global_00984628;
inline guest::global<u32, 0x0098462c> global_0098462c;
inline guest::global<u16, 0x00984630> global_00984630;
inline guest::global<u8, 0x00984632> global_00984632;

void f_0057a0a0(gptr<Object_0057a0a0_0> arg0, u32 r1) {
    arg0->half_4 = u16(r1);
    if (r1 != 0xeu) {  // (from the original)
        arg0->byte_12 = 0;
        guest::cpu()->r[1] = 0u;
        return;
    }
    arg0->half_14 = u16(u32(*global_00984628));
    arg0->word_18 = *global_0098462c;
    arg0->half_1c = u16(u32(*global_00984630));
    u32 r1_1 = *global_00984632;
    arg0->byte_1e = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_0057a0a0
GUEST_EXPORT(0x0057a0a0, d_0057a0a0::f_0057a0a0);

// f_0057a3f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0057a3f8 {

struct __attribute__((packed)) Object_0057a3f8_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Object_0057a3f8_0, word_0, 0x0);
GUEST_OFFSET(Object_0057a3f8_0, word_4, 0x4);
GUEST_OFFSET(Object_0057a3f8_0, word_8, 0x8);
GUEST_OFFSET(Object_0057a3f8_0, word_c, 0xc);
GUEST_OFFSET(Object_0057a3f8_0, word_10, 0x10);
GUEST_OFFSET(Object_0057a3f8_0, word_14, 0x14);

struct __attribute__((packed)) Object_0057a3f8_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_0057a3f8_1, word_0, 0x0);
GUEST_OFFSET(Object_0057a3f8_1, word_4, 0x4);
GUEST_OFFSET(Object_0057a3f8_1, word_8, 0x8);

struct __attribute__((packed)) Object_0057a3f8_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_0057a3f8_2, word_0, 0x0);
GUEST_OFFSET(Object_0057a3f8_2, word_4, 0x4);
GUEST_OFFSET(Object_0057a3f8_2, word_8, 0x8);


void f_0057a3f8(gptr<Object_0057a3f8_0> arg0, gptr<Object_0057a3f8_1> arg1, gptr<Object_0057a3f8_2> arg2) {
    arg0->word_0 = arg1->word_0;
    arg0->word_4 = arg1->word_4;
    arg0->word_8 = arg1->word_8;
    arg0->word_c = arg2->word_0;
    arg0->word_10 = arg2->word_4;
    u32 r1_1 = arg2->word_8;
    arg0->word_14 = r1_1;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_0057a3f8
GUEST_EXPORT(0x0057a3f8, d_0057a3f8::f_0057a3f8);

// f_0057a42c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0057a42c {

struct __attribute__((packed)) Object_0057a42c_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Object_0057a42c_0, word_0, 0x0);
GUEST_OFFSET(Object_0057a42c_0, word_4, 0x4);
GUEST_OFFSET(Object_0057a42c_0, word_8, 0x8);
GUEST_OFFSET(Object_0057a42c_0, word_c, 0xc);
GUEST_OFFSET(Object_0057a42c_0, word_10, 0x10);
GUEST_OFFSET(Object_0057a42c_0, word_14, 0x14);

inline guest::global<u32, 0x0098467c> global_0098467c;
inline guest::global<u32, 0x00984680> global_00984680;
inline guest::global<u32, 0x00984684> global_00984684;
inline guest::global<u32, 0x00984688> global_00984688;
inline guest::global<u32, 0x0098468c> global_0098468c;
inline guest::global<u32, 0x00984690> global_00984690;

void f_0057a42c(gptr<Object_0057a42c_0> arg0) {
    arg0->word_0 = *global_0098467c;
    arg0->word_4 = *global_00984680;
    u32 r1_1 = *global_00984684;
    arg0->word_8 = r1_1;
    arg0->word_c = *global_00984688;
    arg0->word_10 = *global_0098468c;
    arg0->word_14 = *global_00984690;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_0057a42c
GUEST_EXPORT(0x0057a42c, d_0057a42c::f_0057a42c);

// f_0057afd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0057afd4 {

struct __attribute__((packed)) Local_0057afd4_r0_2 {
    u8 unknown_0[0x3];  // (not used here)
    u8 byte_3;
};
GUEST_OFFSET(Local_0057afd4_r0_2, byte_3, 0x3);

inline constexpr guest::Function<0x00746f24, u32(u32)> call_00746f24;

u32 f_0057afd4(u32 r0) {
    u32 r0_1 = call_00746f24(0xa22020u);  // (from the original)
    gptr<Local_0057afd4_r0_2> r0_2 = gptr<Local_0057afd4_r0_2>(r0 + 0xb06u);  // (from the original)
    if (*gptr<u32>(r0 + 0x938u) > r0_1) {  // (from the original)
        u32 r0_3 = u32(r0_2->byte_3) & 1u ^ 1u;
        guest::cpu()->r[1] = r0_1;
        return r0_3;
    }
    r0_2->byte_3 = u8(u32(r0_2->byte_3) & ~1u);
    u32 r0_4 = u32(r0_2->byte_3) & 1u ^ 1u;
    guest::cpu()->r[1] = r0_1;
    return r0_4;
}

}  // namespace d_0057afd4
GUEST_EXPORT_FRAMED(0x0057afd4, d_0057afd4::f_0057afd4, 0x4010);  // pushes {r4, lr} first, as the original

// f_0057b988: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0057b988 {

inline constexpr guest::Function<0x00520f64, u32(u32, u32)> call_00520f64;

u32 f_0057b988() {
    return call_00520f64(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_0057b988
GUEST_EXPORT(0x0057b988, d_0057b988::f_0057b988);

// f_0057b990: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0057b990 {

inline constexpr guest::Function<0x00529cf4, u32(u32, u32)> call_00529cf4;

u32 f_0057b990(u32 r0, u32 r1) {
    u32 r0_1 = call_00529cf4(r0, r1);
    if (r0_1 == 0) {
        return r0_1;
    }
    *gptr<u32>(r0 + 0x20u) = *gptr<u32>(r0 + 0x14u);  // (from the original)
    *gptr<u32>(r0 + 0x24u) = *gptr<u32>(r0 + 0x18u);  // (from the original)
    *gptr<u32>(r0 + 0x28u) = *gptr<u32>(r0 + 0x1cu);  // (from the original)
    *gptr<u16>(r0 + 0x32u) = u16(u32(*gptr<u16>(r0 + 0x2cu)));  // (from the original)
    *gptr<u16>(r0 + 0x34u) = u16(u32(*gptr<u16>(r0 + 0x2eu)));  // (from the original)
    u32 r1_2 = *gptr<u16>(r0 + 0x30u);  // (from the original)
    *gptr<u16>(r0 + 0x36u) = u16(r1_2);  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return 1u;
}

}  // namespace d_0057b990
GUEST_EXPORT_FRAMED(0x0057b990, d_0057b990::f_0057b990, 0x4010);  // pushes {r4, lr} first, as the original

// f_0057b9dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0057b9dc {

struct __attribute__((packed)) Local_0057b9dc_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0057b9dc_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0057b9dc_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_0057b9dc_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0057b9dc_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_0057b9dc_ea_3, word_4, 0x4);

inline guest::global<u32, 0x0094dfd8> global_0094dfd8;
inline guest::global<u32, 0x0094dfdc> global_0094dfdc;
inline constexpr guest::Function<0x00529c80, u32(u32, u32, u32, u32)> call_00529c80;

u32 f_0057b9dc(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    if (r1 == 0) {
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        return 0u;
    }
    gptr<Local_0057b9dc_ea_1> ea_1 = gptr<Local_0057b9dc_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    u32 r12_1 = *frame.at<u32>(8);
    *global_0094dfd8 = r3;
    *global_0094dfdc = r12_1;
    gptr<Local_0057b9dc_ea_3> ea_3 = gptr<Local_0057b9dc_ea_3>(frame.at(0).addr());
    u32 r4_1 = ea_3->word_0;
    u32 r5_1 = ea_3->word_4;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    frame.release();
    return call_00529c80(r0, r1, guest::cpu()->r[2], 2u);
}

}  // namespace d_0057b9dc
GUEST_EXPORT(0x0057b9dc, d_0057b9dc::f_0057b9dc);

// f_0057ba24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0057ba24 {

inline constexpr guest::Function<0x00521068, u32(u32, u32)> call_00521068;

u32 f_0057ba24() {
    return call_00521068(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_0057ba24
GUEST_EXPORT(0x0057ba24, d_0057ba24::f_0057ba24);

// f_0057bb6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0057bb6c {

inline constexpr guest::Function<0x00521ae0, u32(u32, u32)> call_00521ae0;

u32 f_0057bb6c() {
    return call_00521ae0(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_0057bb6c
GUEST_EXPORT(0x0057bb6c, d_0057bb6c::f_0057bb6c);

// f_0057bb70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0057bb70 {


u32 f_0057bb70(u32 r0) {
    return r0 == 0 || r0 == 2u;
}

}  // namespace d_0057bb70
GUEST_EXPORT(0x0057bb70, d_0057bb70::f_0057bb70);

// f_0057bb84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0057bb84 {


u32 f_0057bb84(u32 r0) {
    return r0 == 0 || r0 == 1u;
}

}  // namespace d_0057bb84
GUEST_EXPORT(0x0057bb84, d_0057bb84::f_0057bb84);

// f_0057bd78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0057bd78 {

struct __attribute__((packed)) Object_0057bd78_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_0057bd78_0, word_4, 0x4);
GUEST_OFFSET(Object_0057bd78_0, word_8, 0x8);


u32 f_0057bd78(gptr<Object_0057bd78_0> arg0) {
    arg0->word_4 = 0;
    arg0->word_8 = 0;
    guest::cpu()->r[1] = 0u;
    return 1u;
}

}  // namespace d_0057bd78
GUEST_EXPORT(0x0057bd78, d_0057bd78::f_0057bd78);

// f_0057bd94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0057bd94 {

struct __attribute__((packed)) Object_0057bd94_0 {
    u16 half_0;
    u8 unknown_2[0x2];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_0057bd94_0, half_0, 0x0);
GUEST_OFFSET(Object_0057bd94_0, word_4, 0x4);
GUEST_OFFSET(Object_0057bd94_0, word_8, 0x8);


void f_0057bd94(gptr<Object_0057bd94_0> arg0) {
    arg0->half_0 = 0x169;  // (from the original)
    arg0->word_4 = 0;
    arg0->word_8 = 0;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_0057bd94
GUEST_EXPORT(0x0057bd94, d_0057bd94::f_0057bd94);

// f_0057d55c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0057d55c {

inline guest::global<u32, 0x00854288> global_00854288;
inline guest::global<u32, 0x0085428c> global_0085428c;
inline guest::global<u32, 0x0094fd58> global_0094fd58;
inline constexpr guest::Function<0x005204b0, u32(u32, u32, u32, u32)> call_005204b0;
inline constexpr guest::Function<0x00580490, u32(u32, u32, u32, u32)> call_00580490;

u32 f_0057d55c(u32 r0, u32 r1_unused, u32 r2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    call_00580490(r0, 1u, r2, guest::cpu()->r[3]);
    *global_0094fd58 = *global_0094fd58 & ~0x40u;  // (from the original)
    *gptr<u8>(r0 + 0x11c5u) = 1;  // (from the original)
    u32 r1_1 = *global_0085428c;
    u32 r2_1 = *global_00854288;
    u32 r0_1 = *gptr<u32>(r0 + 0xb0u);  // (from the original)
    if (r0_1 != r2_1) {
        frame.release();
        return call_005204b0(r0, r1_1, r2_1, guest::cpu()->r[3]);
    }
    if (r0_1 == 0) {
        u32 r0_2 = *gptr<u32>(r0 + 0xb4u) | r1_1;  // (from the original)
        if ((r0_2 & 1u) == 0) {
            guest::cpu()->r[1] = r1_1;
            return r0_2;
        }
    }
    u32 r0_3 = *gptr<u32>(r0 + 0xb4u);  // (from the original)
    if (r0_3 == r1_1) {
        guest::cpu()->r[1] = r1_1;
        return r0_3;
    }
    frame.release();
    return call_005204b0(r0, r1_1, r2_1, guest::cpu()->r[3]);
}

}  // namespace d_0057d55c
GUEST_EXPORT(0x0057d55c, d_0057d55c::f_0057d55c);

// f_0057ddf4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0057ddf4 {

inline guest::global<u32, 0x00ad6554> global_00ad6554;
inline guest::global<u32, 0x00ad6558> global_00ad6558;
inline constexpr guest::Function<0x00301484, u32(u32, u32, u32, u32)> call_00301484;
inline constexpr guest::Function<0x005244c0, u32(u32, u32, u32)> call_005244c0;

void f_0057ddf4(u32 r0, u32 r1, u32 r2) {
    u32 r8 = guest::cpu()->r[8];
    u32 r7 = r0;
    u32 r0_1 = call_00301484(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    u32 r5 = r0_1 == 0 ? 9u : 3u;
    u32 r10 = 0x950654u;  // (from the original)
    if (s32(r5) >= 0) {
        r8 = 0x1150u;  // (from the original)
    }
    u32 r9 = 0u;
    u32 r6 = r7 + 0x1000u;  // (from the original)
    u32 r4 = r9;
    *gptr<u32>(r6 + 0x14cu) = r9;  // (from the original)
    if (s32(r5) >= 0) {
        do {
            u32 r0_3 = call_005244c0(*gptr<u32>(r10 + (r4 << 2)), r1, r2);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r0_1 = *gptr<u16>(r0_3);
            if (r0_1 != 0) {
                u32 r0_4 = *gptr<u32>(r6 + 0x14cu);  // (from the original)
                r1 = r0_4 + 1u;
                *gptr<u32>(r6 + 0x14cu) = r1;  // (from the original)
                *gptr<u32>(r7 + (r0_4 << 2) + r8) = r4;
                r0_1 = *gptr<u32>(r6 + 0x14cu);  // (from the original)
                if (r0_1 == 0xau) {  // (from the original)
                    goto L_57de6c;
                }
            }
            r4 += 1u;
            guest::preempt();
        } while (s32(r4) <= s32(r5));
    }
L_57de6c:;
    u32 r0_5 = call_00301484(r0_1, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_5 == 0) {
        *gptr<u32>(r6 + 0x178u) = r9;  // (from the original)
    } else {
        r4 = 0x117cu;  // (from the original)
        r5 = 4u;
        r8 = 9u;
        *gptr<u32>(r6 + 0x178u) = r9;  // (from the original)
        do {
            u32 r0_7 = call_005244c0(*gptr<u32>(r10 + (r5 << 2)), r1, r2);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            if (*gptr<u16>(r0_7) != 0) {
                u32 r0_8 = *gptr<u32>(r6 + 0x178u);  // (from the original)
                r1 = r0_8 + 1u;
                *gptr<u32>(r6 + 0x178u) = r1;  // (from the original)
                *gptr<u32>(r7 + (r0_8 << 2) + r4) = r5;
                if (*gptr<u32>(r6 + 0x178u) == 0xau) {  // (from the original)
                    goto L_57ded0;
                }
            }
            r5 += 1u;
            guest::preempt();
        } while (s32(r5) <= s32(r8));
    }
L_57ded0:;
    u32 r0_9 = *global_00ad6558;
    if (s32(r0_9) >= 0 && s32(r0_9) < s32(*gptr<u32>(r6 + 0x14cu))) {  // (from the original)
        goto L_57def0;
    }
    *global_00ad6558 = r9;
L_57def0:;
    u32 r0_10 = *global_00ad6554;
    if (s32(r0_10) >= 0 && s32(r0_10) < s32(*gptr<u32>(r6 + 0x178u))) {  // (from the original)
        return;
    }
    *global_00ad6554 = r9;
}

}  // namespace d_0057ddf4
GUEST_EXPORT_FRAMED(0x0057ddf4, d_0057ddf4::f_0057ddf4, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0057f2a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0057f2a0 {

struct __attribute__((packed)) Object_0057f2a0_0 {
    u8 unknown_0[0x570];  // (not used here)
    u32 word_570;
};
GUEST_OFFSET(Object_0057f2a0_0, word_570, 0x570);


u32 f_0057f2a0(gptr<Object_0057f2a0_0> arg0) {
    return *gptr<u32>(arg0->word_570 + 0x14u) == 2u;  // (from the original)
}

}  // namespace d_0057f2a0
GUEST_EXPORT(0x0057f2a0, d_0057f2a0::f_0057f2a0);

// f_0057f2b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0057f2b8 {

struct __attribute__((packed)) Object_0057f2b8_0 {
    u8 unknown_0[0x574];  // (not used here)
    u32 word_574;
};
GUEST_OFFSET(Object_0057f2b8_0, word_574, 0x574);


u32 f_0057f2b8(gptr<Object_0057f2b8_0> arg0) {
    return *gptr<u32>(arg0->word_574 + 0x14u) == 2u;  // (from the original)
}

}  // namespace d_0057f2b8
GUEST_EXPORT(0x0057f2b8, d_0057f2b8::f_0057f2b8);
