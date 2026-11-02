// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "core/time_stamp.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_00700238: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00700238 {

struct __attribute__((packed)) Local_00700238_ea_12 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00700238_ea_12, word_0, 0x0);
GUEST_OFFSET(Local_00700238_ea_12, word_4, 0x4);

struct __attribute__((packed)) Local_00700238_ea_13 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00700238_ea_13, word_0, 0x0);
GUEST_OFFSET(Local_00700238_ea_13, word_4, 0x4);
GUEST_OFFSET(Local_00700238_ea_13, word_8, 0x8);

struct __attribute__((packed)) Local_00700238_ea_17 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00700238_ea_17, word_0, 0x0);
GUEST_OFFSET(Local_00700238_ea_17, word_4, 0x4);
GUEST_OFFSET(Local_00700238_ea_17, word_8, 0x8);

struct __attribute__((packed)) Local_00700238_ea_20 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00700238_ea_20, word_0, 0x0);
GUEST_OFFSET(Local_00700238_ea_20, word_4, 0x4);
GUEST_OFFSET(Local_00700238_ea_20, word_8, 0x8);
GUEST_OFFSET(Local_00700238_ea_20, word_c, 0xc);

struct __attribute__((packed)) Local_00700238_ea_5 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00700238_ea_5, word_0, 0x0);
GUEST_OFFSET(Local_00700238_ea_5, word_4, 0x4);

struct __attribute__((packed)) Local_00700238_ea_8 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00700238_ea_8, word_0, 0x0);
GUEST_OFFSET(Local_00700238_ea_8, word_4, 0x4);
GUEST_OFFSET(Local_00700238_ea_8, word_8, 0x8);

struct __attribute__((packed)) Local_00700238_ea_9 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00700238_ea_9, word_0, 0x0);
GUEST_OFFSET(Local_00700238_ea_9, word_4, 0x4);

inline constexpr guest::Function<0x006ffea4, u32(u32, u32, u32, u32)> call_006ffea4;
inline constexpr guest::Function<0x007166a4, u32(u32, u32, u32, u32)> call_007166a4;

struct __attribute__((packed)) Frame_00700238 {
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
GUEST_OFFSET(Frame_00700238, word_0, 0x0);
GUEST_OFFSET(Frame_00700238, word_4, 0x4);
GUEST_OFFSET(Frame_00700238, word_8, 0x8);
GUEST_OFFSET(Frame_00700238, word_c, 0xc);
GUEST_OFFSET(Frame_00700238, word_10, 0x10);
GUEST_OFFSET(Frame_00700238, word_14, 0x14);
GUEST_OFFSET(Frame_00700238, word_18, 0x18);
GUEST_OFFSET(Frame_00700238, word_1c, 0x1c);
GUEST_OFFSET(Frame_00700238, word_20, 0x20);
GUEST_SIZE(Frame_00700238, 0x24);

u32 f_00700238(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00700238> frame;  // the original's stack frame
    u32 r1_1 = *frame.at<u32>(0x40);  // (from the original)
    frame->word_0 = frame.at(0x14).addr();  // (from the original)
    frame->word_4 = r1_1;
    call_007166a4(r3, frame.at(0x1c).addr(), frame.at(0x20).addr(), frame.at(0x18).addr());  // (from the original)
    u32 r0_1 = frame->word_1c;
    u32 r1_3 = frame->word_14;
    frame->word_4 = r0_1 + 2u;
    frame->word_10 = 1;
    gptr<Local_00700238_ea_5> ea_5 = gptr<Local_00700238_ea_5>(frame.at(8).addr());
    ea_5->word_0 = r1_3;
    ea_5->word_4 = 0;
    frame->word_0 = frame->word_20;
    call_006ffea4(r0, r1, r2, r0_1 - 1u);
    u32 r0_2 = frame->word_1c;
    u32 r2_2 = frame->word_14 - 1u;
    gptr<Local_00700238_ea_8> ea_8 = gptr<Local_00700238_ea_8>(frame.at(4).addr());
    ea_8->word_0 = r0_2 + 1u;
    ea_8->word_4 = r2_2;
    ea_8->word_8 = 1;
    frame->word_0 = frame->word_20 - 1u;
    frame->word_10 = 1;
    call_006ffea4(r0, r1, r2, r0_2 - 1u);
    gptr<Local_00700238_ea_9> ea_9 = gptr<Local_00700238_ea_9>(frame.at(0x14).addr());  // (from the original)
    u32 r0_3 = ea_9->word_0;
    u32 r1_4 = ea_9->word_4;
    frame->word_0 = r0_3 - 2u;
    frame->word_4 = r1_4;
    frame->word_8 = r0_3 + 1u;
    frame->word_c = 0;
    frame->word_10 = 4;
    call_006ffea4(r0 + 2u, r1, r2, frame->word_1c);
    u32 r0_5 = frame->word_14;
    u32 r2_3 = frame->word_18 - 1u;
    gptr<Local_00700238_ea_12> ea_12 = gptr<Local_00700238_ea_12>(frame.at(0).addr());
    ea_12->word_0 = r0_5 - 3u;
    ea_12->word_4 = r2_3;
    gptr<Local_00700238_ea_13> ea_13 = gptr<Local_00700238_ea_13>(frame.at(8).addr());
    ea_13->word_0 = r0_5 - 1u;
    ea_13->word_4 = 1;
    ea_13->word_8 = 4;
    call_006ffea4(r0 + 2u, r1, r2, frame->word_1c - 1u);
    u32 r0_7 = frame->word_18;
    u32 r1_5 = frame->word_14;
    frame->word_4 = r0_7 + 1u;
    gptr<Local_00700238_ea_17> ea_17 = gptr<Local_00700238_ea_17>(frame.at(8).addr());
    ea_17->word_0 = r1_5;
    ea_17->word_4 = 0;
    ea_17->word_8 = 2;
    frame->word_0 = frame->word_20;
    call_006ffea4(r0 + 4u, r1, r2, r0_7 - 2u);
    u32 r0_9 = frame->word_18;
    u32 r2_4 = frame->word_14 - 1u;
    gptr<Local_00700238_ea_20> ea_20 = gptr<Local_00700238_ea_20>(frame.at(4).addr());
    ea_20->word_0 = r0_9 - 1u;
    ea_20->word_4 = r2_4;
    ea_20->word_8 = 1;
    ea_20->word_c = 2;
    frame->word_0 = frame->word_20 - 1u;
    u32 r0_11 = call_006ffea4(r0 + 4u, r1, r2, r0_9 - 3u);
    return r0_11;
}

}  // namespace d_00700238
GUEST_EXPORT_FRAMED(0x00700238, d_00700238::f_00700238, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_00700558: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00700558 {

struct __attribute__((packed)) Local_00700558_r1_1 {
    u8 unknown_0[0x3c];  // (not used here)
    u16 half_3c;
    u8 unknown_3e[0x2];  // (not used here)
    float float_40;
};
GUEST_OFFSET(Local_00700558_r1_1, half_3c, 0x3c);
GUEST_OFFSET(Local_00700558_r1_1, float_40, 0x40);


u32 f_00700558(u32 r0, u32 r1, float S0_unused, float S1) {
    float S0_1 = 1.0f;
    if (r1 >= 0x53u) {  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0_1;
        return r0;
    }
    gptr<Local_00700558_r1_1> r1_1 = gptr<Local_00700558_r1_1>(r1 * 0x50u + 0x868888u);  // (from the original)
    float S1_1 = r1_1->float_40;
    float S2_1 = float(std::bit_cast<u32>(std::bit_cast<float>(u32(r1_1->half_3c))));
    if (u32(S1_1 == 0.0f)) {
        guest::cpu()->r[1] = r1_1.addr();
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return r0;
    }
    float S1_2 = S1_1 * 10.0f;
    float S0_2 = (float(std::bit_cast<u32>(std::bit_cast<float>(r0))) - S2_1) / S1_2 + S0_1;
    u32 r0_1 = std::bit_cast<u32>(S0_2);
    if (s32(0x3f333333u) > s32(r0_1)) {  // (from the original)
        float S0_3 = 0.7f;
        guest::cpu()->r[1] = 0x3f333333u;  // (from the original)
        guest::cpu()->s[0] = S0_3;
        guest::cpu()->s[1] = S1_2;
        return r0_1;
    }
    u32 r0_2 = std::bit_cast<u32>(S0_2);
    if (s32(0x3fa66666u) < s32(r0_2)) {  // (from the original)
        S0_2 = 1.3f;
    }
    guest::cpu()->r[1] = 0x3fa66666u;  // (from the original)
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    return r0_2;
}

}  // namespace d_00700558
GUEST_EXPORT(0x00700558, d_00700558::f_00700558);

// f_00700974: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00700974 {

struct __attribute__((packed)) Object_00700974_0 {
    u8 unknown_0[0x7];  // (not used here)
    u8 byte_7;
};
GUEST_OFFSET(Object_00700974_0, byte_7, 0x7);


u32 f_00700974(gptr<Object_00700974_0> arg0) {
    u32 r0_1 = s8(arg0->byte_7);
    if (r0_1 - 4u < 4u) {
        guest::cpu()->r[1] = r0_1 - 4u;
        return 1u;
    }
    if (r0_1 - 8u < 8u) {
        guest::cpu()->r[1] = r0_1 - 8u;
        return 2u;
    }
    if (r0_1 == 0x10u) {  // (from the original)
        guest::cpu()->r[1] = r0_1 - 8u;
        return 3u;
    }
    if (r0_1 - 0x11u < 2u) {  // (from the original)
        guest::cpu()->r[1] = r0_1 - 0x11u;  // (from the original)
        return 4u;
    }
    guest::cpu()->r[1] = r0_1 - 0x11u;  // (from the original)
    return r0_1 - 0x13u >= 4u ? 0u : 5u;  // (from the original)
}

}  // namespace d_00700974
GUEST_EXPORT(0x00700974, d_00700974::f_00700974);

// f_00700adc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00700adc {

inline constexpr guest::Function<0x006d9058, u32(u32, u32, u32, u32)> call_006d9058;

u32 f_00700adc(u32 r0) {
    u32 r0_1 = call_006d9058(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return r0_1 & 0xffu;  // (from the original)
}

}  // namespace d_00700adc
GUEST_EXPORT_FRAMED(0x00700adc, d_00700adc::f_00700adc, 0x4010);  // pushes {r4, lr} first, as the original

// f_00700cdc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00700cdc {

inline constexpr guest::Function<0x002fca6c, u32(u32, u32, u32)> call_002fca6c;
inline constexpr guest::Function<0x002fcb84, u32(u32, u32)> call_002fcb84;
inline constexpr guest::Function<0x002fccdc, u32(u32)> call_002fccdc;
inline constexpr guest::Function<0x002fe7a0, u32(u32)> call_002fe7a0;
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> call_002feb00;
inline constexpr guest::Function<0x006a5e34, u32(u32, u32)> call_006a5e34;
inline constexpr guest::Function<0x006c8560, u32(u32, u32, u32)> call_006c8560;
inline constexpr guest::Function<0x007529d8, u32(u32, u32, u32)> call_007529d8;
inline constexpr guest::Function<0x00768dc4, u32(u32, u32)> call_00768dc4;
inline constexpr guest::Function<0x007698a4, u32(u32)> call_007698a4;

u32 f_00700cdc(u32 r0, u32 r1) {
    u32 r0_5 = 0;
    u32 r0_1 = call_006a5e34(r0, r1);
    if (r0_1 != 0) {
        u32 r0_2 = call_007529d8(r0_1, r0, r1);
        if (r0_2 != 0) {
            u32 r0_3 = call_006c8560(r0, r1, 0u);
            if (r0_3 == 0) {
                u32 r0_4 = call_002fca6c(r0, r1, 0u);
                if (r0_4 == 0) {
                    r0_5 = call_006a5e34(r0_4, guest::cpu()->r[1]);
                    if (r0_5 == 0) {
                        return r0_5;
                    }
                    u32 r0_6 = call_002feb00(r0_5, r0, r1, 0u);
                    if (r0_6 != 0) {
                        u32 r0_7 = call_002fe7a0(r0_6);
                        if (r0_7 == 0) {
                            u32 r0_8 = call_007698a4(r0_6);
                            if (r0_8 == 0) {
                                u32 r0_9 = call_00768dc4(r0_6, 0u);
                                if (r0_9 == 0) {
                                    u32 r0_10 = call_002fccdc(r0_6);
                                    if (r0_10 != 0xau) {  // (from the original)
                                        u32 r0_11 = call_002fcb84(r0_6, 0x9eu);  // (from the original)
                                        if (r0_11 == 0) {
                                            return 1u;
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
    return 0u;
}

}  // namespace d_00700cdc
GUEST_EXPORT_FRAMED(0x00700cdc, d_00700cdc::f_00700cdc, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00700f58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00700f58 {

inline guest::global<u32, 0x0095c6d0> global_0095c6d0;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> call_002f74e0;
inline constexpr guest::Function<0x0076eb60, u32(u32)> call_0076eb60;

u32 f_00700f58(gptr<TimeStamp> arg0, u32 r1, u32 r2) {
    u32 r0_4 = 0;
    u32 r0_1 = call_002f74c8(arg0.addr(), r1, r2, guest::cpu()->r[3]);
    u32 r0_2 = call_002f74e0(0x40000u, r0_1);  // (from the original)
    if (r0_2 != 0) {
        u32 r0_3 = s8(u8(arg0->hour));
        u32 r1_2 = r0_3 - 4u;
        if (r1_2 < 4u) {
            r0_4 = 1u;
        } else {
            r1_2 = r0_3 - 8u;
            if (r1_2 < 8u) {
                r0_4 = 2u;
            } else if (r0_3 == 0x10u) {  // (from the original)
                r0_4 = 3u;
            } else {
                r1_2 = r0_3 - 0x11u;  // (from the original)
                r0_4 = r1_2 < 2u ? 4u : r0_3 - 0x13u >= 4u ? 0u : 5u;  // (from the original)
            }
        }
        guest::cpu()->r[1] = r1_2;
        return r0_4 * 0x7cu + 0x86e81cu;  // (from the original)
    }
    u32 r0_6 = call_002f74c8(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_7 = call_002f74e0(0x20000u, r0_6);  // (from the original)
    if (r0_7 != 0) {
        u32 r0_9 = call_0076eb60(*global_0095c6d0 + 0x10u);  // (from the original)
        u32 r0_10 = s8(u8(arg0->hour));
        u32 r2_4 = r0_10 - 4u < 4u ? 1u : r0_10 - 8u < 8u ? 2u : r0_10 == 0x10u ? 3u : r0_10 - 0x11u < 2u ? 4u : r0_10 - 0x13u >= 4u ? 0u : 5u;  // (from the original)
        u32 r1_3 = r2_4 * 0x1fu;  // (from the original)
        guest::cpu()->r[1] = r1_3;
        return (r0_9 * 0x1fu) * 0x18u + 0x86e81cu + (r1_3 << 2);  // (from the original)
    }
    u32 r1_4 = (u32(u8(arg0->month)) - 1u & 0xffu) * 0x21u * 0x18u + 0x86c2fcu;  // (from the original)
    u32 r0_13 = s8(u8(arg0->hour));
    u32 r0_14 = r0_13 - 4u < 4u ? 1u : r0_13 - 8u < 8u ? 2u : r0_13 == 0x10u ? 3u : r0_13 - 0x11u < 2u ? 4u : r0_13 - 0x13u >= 4u ? 0u : 5u;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    return r1_4 + r0_14 * 0x84u;  // (from the original)
}

}  // namespace d_00700f58
GUEST_EXPORT_FRAMED(0x00700f58, d_00700f58::f_00700f58, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_007010f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007010f8 {

struct __attribute__((packed)) Object_007010f8_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_007010f8_0, word_0, 0x0);

struct __attribute__((packed)) Object_007010f8_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_007010f8_1, word_0, 0x0);

struct __attribute__((packed)) Local_007010f8_r0_3 {
    u8 unknown_0[0x4a];  // (not used here)
    u8 byte_4a;
    u8 byte_4b;
};
GUEST_OFFSET(Local_007010f8_r0_3, byte_4a, 0x4a);
GUEST_OFFSET(Local_007010f8_r0_3, byte_4b, 0x4b);

inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;
inline constexpr guest::Function<0x006d9058, u32(u32)> call_006d9058;

void f_007010f8(gptr<Object_007010f8_0> arg0, gptr<Object_007010f8_1> arg1, u32 r2) {
    u32 r0_1 = call_002fcb34(r2, arg1.addr(), r2, guest::cpu()->r[3]);
    if (r0_1 == 0x24u) {  // (from the original)
        u32 r0_2 = call_006d9058(r2);
        gptr<Local_007010f8_r0_3> r0_3 = gptr<Local_007010f8_r0_3>((r0_2 & 0xffu) * 0x50u + 0x868888u);  // (from the original)
        arg0->word_0 = u32(r0_3->byte_4a);
        arg1->word_0 = u32(r0_3->byte_4b);
    }
}

}  // namespace d_007010f8
GUEST_EXPORT_FRAMED(0x007010f8, d_007010f8::f_007010f8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_007011e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007011e8 {

inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> call_002fc934;
inline constexpr guest::Function<0x002fcb34, u32(u32)> call_002fcb34;
inline constexpr guest::Function<0x006bd2c8, u32(u32, u32)> call_006bd2c8;
inline constexpr guest::Function<0x007701b8, u32(u32, u32)> call_007701b8;

struct __attribute__((packed)) Frame_007011e8 {
    u32 word_0;
};
GUEST_OFFSET(Frame_007011e8, word_0, 0x0);
GUEST_SIZE(Frame_007011e8, 0x4);

u32 f_007011e8(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_007011e8> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r0_1 = call_002fb94c(r0, r1, guest::cpu()->r[2], r3);
    if (r0_1 != 0) {
        u32 r0_2 = call_002fcb34(r0);
        if (r0_2 == 0x24u) {  // (from the original)
            u32 r0_3 = frame.at(0).addr();
            call_002fc934(r0_3, r0);
            u32 r0_4 = call_007701b8(r0_1 + 0x6c20u, r0_3);  // (from the original)
            if ((r0_4 ^ 1u) == 0) {
                u32 r0_5 = call_006bd2c8(r0_1, r0);
                return r0_5;
            }
        }
    }
    return 0u;
}

}  // namespace d_007011e8
GUEST_EXPORT_FRAMED(0x007011e8, d_007011e8::f_007011e8, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_007017a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007017a8 {

inline guest::global<u32, 0x0095321c> global_0095321c;

u32 f_007017a8(u32 r0) {
    u32 r0_1 = r0 >= 3u ? *global_0095321c : *gptr<u32>((r0 << 2) + 0x95321cu);  // (from the original)
    guest::cpu()->r[1] = 0x95321cu;  // (from the original)
    return r0_1;
}

}  // namespace d_007017a8
GUEST_EXPORT(0x007017a8, d_007017a8::f_007017a8);

// f_007017c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007017c0 {

inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;
inline constexpr guest::Function<0x002fcb34, u32(u32)> call_002fcb34;
inline constexpr guest::Function<0x006bd56c, u32(u32, u32, u32, u32)> call_006bd56c;

u32 f_007017c0(u32 r0, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = call_002fb94c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r4_1 = r0_1;
    if (r0_1 != 0) {
        r0_1 = call_002fcb34(r0);
        if (r0_1 == 0x24u) {  // (from the original)
            frame.release();
            return call_006bd56c(r4_1, r0, guest::cpu()->r[2], guest::cpu()->r[3]);
        }
    }
    return r0_1;
}

}  // namespace d_007017c0
GUEST_EXPORT(0x007017c0, d_007017c0::f_007017c0);

// f_007017f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007017f8 {

struct __attribute__((packed)) Local_007017f8_r5_1 {
    u8 unknown_0[0x2];  // (not used here)
    u16 half_2;
    u8 byte_4;
    u8 unknown_5[0x1];  // (not used here)
    u16 half_6;
};
GUEST_OFFSET(Local_007017f8_r5_1, half_2, 0x2);
GUEST_OFFSET(Local_007017f8_r5_1, byte_4, 0x4);
GUEST_OFFSET(Local_007017f8_r5_1, half_6, 0x6);

inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> call_002ff6f8;
inline constexpr guest::Function<0x00700f58, u32(u32)> call_00700f58;
inline constexpr guest::Function<0x00701694, u32(u32, u32, u32)> call_00701694;

struct __attribute__((packed)) Frame_007017f8 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 unknown_3[0x3];  // (not read or written by name)
    u16 half_6;
    u8 unknown_8[0x2];  // (not read or written by name)
    u16 half_a;
    u8 unknown_c[0x2];  // (not read or written by name)
    u16 half_e;
};
GUEST_OFFSET(Frame_007017f8, byte_0, 0x0);
GUEST_OFFSET(Frame_007017f8, byte_1, 0x1);
GUEST_OFFSET(Frame_007017f8, byte_2, 0x2);
GUEST_OFFSET(Frame_007017f8, half_6, 0x6);
GUEST_OFFSET(Frame_007017f8, half_a, 0xa);
GUEST_OFFSET(Frame_007017f8, half_e, 0xe);
GUEST_SIZE(Frame_007017f8, 0x10);

void f_007017f8(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_007017f8> frame;  // the original's stack frame
    u32 r4 = r0;
    *frame.at<u32>(4) = 0;
    *frame.at<u32>(8) = 0;
    *frame.at<u32>(0xc) = 0;  // (from the original)
    *frame.at<u8>(4) = 0;
    *frame.at<u8>(8) = 0;
    *frame.at<u8>(0xc) = 0;  // (from the original)
    frame->half_6 = 0;
    frame->half_a = 0;
    frame->half_e = 0;
    u32 r0_1 = call_002fb378(0u, r1, r2, r3);
    u32 r0_2 = call_00700f58(r0_1);
    r3 = r0_2;
    r1 = 0u;
    r0 = frame.at(4).addr();
L_701840:;
    u32 r7 = *gptr<u16>(r3 + 2u);
    u32 r12 = r7 - r1;
    r1 = 2u;
L_70184c:;
    r2 = *gptr<u16>(r0 + (r1 << 2) + 2u);
    u32 cf_1 = r2 >= r12;
    if (!cf_1) {
        r2 = *gptr<u8>(r3);
        cf_1 = r2 >= 0x53u;  // (from the original)
    }
    if (cf_1) {
        r1 -= 1u;
        u32 res_1 = r1 + 1u;
        if (res_1 != 0 && res_1 >> 0x1f == ((r1 ^ res_1) & (1u ^ res_1)) >> 0x1f) {  // (from the original)
            guest::preempt();
            goto L_70184c;
        }
    } else {
        if (r1 != 0 && s32(r1) >= 0) {
            r2 = 0u;
        }
        if (s32(r1) > 0) {
            do {
                gptr<Local_007017f8_r5_1> r5_1 = gptr<Local_007017f8_r5_1>(r0 + (r2 << 2));
                u32 r6_1 = r5_1->half_6;
                u32 r8_1 = r5_1->byte_4;
                r5_1->half_2 = u16(r6_1);
                *gptr<u8>(r0 + (r2 << 2)) = u8(r8_1);
                r2 += 1u;
                guest::preempt();
            } while (s32(r1) > s32(r2));
        }
        *gptr<u16>(r0 + (r1 << 2) + 2u) = u16(r12);
        r2 = *gptr<u8>(r3);
        *gptr<u8>(r0 + (r1 << 2)) = u8(r2);
    }
    if (r7 != 0x3e8u) {  // (from the original)
        u32 ea_1 = r3 + 4u;
        r3 = ea_1;
        r2 = *gptr<u8>(ea_1);
        r1 = r7;
        if (r2 != 0x53u) {  // (from the original)
            guest::preempt();
            goto L_701840;
        }
    }
    frame->byte_0 = u8(u32(*frame.at<u8>(4)));
    frame->byte_1 = u8(u32(*frame.at<u8>(8)));
    frame->byte_2 = u8(u32(*frame.at<u8>(0xc)));  // (from the original)
    u32 r0_3 = call_002ff6f8(3u, r1, r2, r3);
    u32 r1_2 = *gptr<u8>(frame.at(0).addr() + r0_3);
    call_00701694(r4, r1_2, 0u);
}

}  // namespace d_007017f8
GUEST_EXPORT_FRAMED(0x007017f8, d_007017f8::f_007017f8, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00701900: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00701900 {

inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;
inline constexpr guest::Function<0x00700f58, u32(u32)> call_00700f58;

struct __attribute__((packed)) Frame_00701900 {
    u8 unknown_0[0x2];  // (not read or written by name)
    u16 half_2;
    u8 unknown_4[0x2];  // (not read or written by name)
    u16 half_6;
    u8 unknown_8[0x2];  // (not read or written by name)
    u16 half_a;
};
GUEST_OFFSET(Frame_00701900, half_2, 0x2);
GUEST_OFFSET(Frame_00701900, half_6, 0x6);
GUEST_OFFSET(Frame_00701900, half_a, 0xa);
GUEST_SIZE(Frame_00701900, 0xc);

void f_00701900(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00701900> frame;  // the original's stack frame
    u32 r4 = r0;
    *frame.at<u32>(0) = 0;
    *frame.at<u32>(4) = 0;
    *frame.at<u32>(8) = 0;
    *frame.at<u8>(0) = 0;
    *frame.at<u8>(4) = 0;
    *frame.at<u8>(8) = 0;
    frame->half_2 = 0;
    frame->half_6 = 0;
    frame->half_a = 0;
    u32 r0_1 = call_002fb378(0u, r1, r2, r3);
    u32 r0_2 = call_00700f58(r0_1);
    r3 = r0_2;
    r1 = 0u;
    r0 = frame.at(0).addr();
L_701948:;
    u32 r6 = *gptr<u16>(r3 + 2u);
    u32 r12 = r6 - r1;
    r1 = 2u;
L_701954:;
    r2 = *gptr<u16>(r0 + (r1 << 2) + 2u);
    u32 cf_1 = r2 >= r12;
    if (!cf_1) {
        r2 = *gptr<u8>(r3);
        cf_1 = r2 >= 0x53u;  // (from the original)
    }
    if (cf_1) {
        r1 -= 1u;
        u32 res_1 = r1 + 1u;
        if (res_1 != 0 && res_1 >> 0x1f == ((r1 ^ res_1) & (1u ^ res_1)) >> 0x1f) {  // (from the original)
            guest::preempt();
            goto L_701954;
        }
    } else {
        if (r1 != 0 && s32(r1) >= 0) {
            r2 = 0u;
        }
        if (s32(r1) > 0) {
            do {
                u32 r14 = r0 + (r2 << 2);
                u32 r5_1 = *gptr<u8>(r14 + 4u);
                *gptr<u16>(r14 + 2u) = u16(u32(*gptr<u16>(r14 + 6u)));
                *gptr<u8>(r0 + (r2 << 2)) = u8(r5_1);
                r2 += 1u;
                guest::preempt();
            } while (s32(r1) > s32(r2));
        }
        *gptr<u16>(r0 + (r1 << 2) + 2u) = u16(r12);
        *gptr<u8>(r0 + (r1 << 2)) = u8(u32(*gptr<u8>(r3)));
    }
    if (r6 != 0x3e8u) {  // (from the original)
        u32 ea_1 = r3 + 4u;
        r3 = ea_1;
        r1 = r6;
        if (*gptr<u8>(ea_1) != 0x53u) {  // (from the original)
            guest::preempt();
            goto L_701948;
        }
    }
    *gptr<u8>(r4) = u8(u32(*frame.at<u8>(0)));
    *gptr<u8>(r4 + 1u) = u8(u32(*frame.at<u8>(4)));
    *gptr<u8>(r4 + 2u) = u8(u32(*frame.at<u8>(8)));
    guest::cpu()->r[1] = r1;
}

}  // namespace d_00701900
GUEST_EXPORT_FRAMED(0x00701900, d_00701900::f_00701900, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_007019f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007019f0 {

struct __attribute__((packed)) Object_007019f0_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_007019f0_0, word_0, 0x0);

struct __attribute__((packed)) Object_007019f0_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_007019f0_1, word_0, 0x0);


void f_007019f0(gptr<Object_007019f0_0> arg0, gptr<Object_007019f0_1> arg1, u32 r2) {
    u32 r2_4 = 0;
    u32 r3_1 = 0x24u;  // (from the original)
    if (s32(r2) < 0x48) {  // (from the original)
        arg0->word_0 = r2;
        arg1->word_0 = r3_1;
        return;
    }
    if (s32(r2) < 0x49) {  // (from the original)
        arg0->word_0 = r2 - 0x48u;  // (from the original)
        arg1->word_0 = 0x26;  // (from the original)
        return;
    }
    if (s32(r2) < 0x51) {  // (from the original)
        arg0->word_0 = r2 - 0x49u;  // (from the original)
        arg1->word_0 = 0x25;  // (from the original)
        return;
    }
    if (s32(r2) < 0x52) {  // (from the original)
        arg0->word_0 = r2 - 0x51u;  // (from the original)
        arg1->word_0 = 0x98;  // (from the original)
        return;
    }
    if (s32(r2) < 0x53) {  // (from the original)
        r2_4 = r2 - 0x52u;  // (from the original)
        r3_1 = 0x9au;  // (from the original)
    } else {
        r2_4 = 0u;
    }
    arg0->word_0 = r2_4;
    arg1->word_0 = r3_1;
}

}  // namespace d_007019f0
GUEST_EXPORT(0x007019f0, d_007019f0::f_007019f0);

// f_00706368: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00706368 {

struct __attribute__((packed)) Local_00706368_r0_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00706368_r0_1, word_0, 0x0);
GUEST_OFFSET(Local_00706368_r0_1, word_4, 0x4);

struct __attribute__((packed)) Local_00706368_r0_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00706368_r0_2, word_0, 0x0);
GUEST_OFFSET(Local_00706368_r0_2, word_4, 0x4);

inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> call_0052f144;
inline constexpr guest::Function<0x0052f200, u32(u32, u32, u32, u32)> call_0052f200;
inline constexpr guest::Function<0x0055cb58, u32(u32, u32, u32, u32)> call_0055cb58;
inline constexpr guest::Function<0x007481ec, u32(u32, u32)> call_007481ec;
inline constexpr guest::Function<0x0074824c, u32(u32, u32)> call_0074824c;
inline constexpr guest::Function<0x00748284, u32(u32, u32)> call_00748284;

struct __attribute__((packed)) Frame_00706368 {
    u8 unknown_0[0x28];  // (not read or written by name)
    u32 word_28;
    u32 word_2c;
    u8 unknown_30[0x14];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00706368, word_28, 0x28);
GUEST_OFFSET(Frame_00706368, word_2c, 0x2c);
GUEST_SIZE(Frame_00706368, 0x44);

u32 f_00706368(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00706368> frame;  // the original's stack frame
    u32 r0_11 = 0;
    u32 r0_17 = 0;
    u32 r4 = r0;
    u32 r5 = r1;
    u32 r9 = r2;
    u32 r8 = r3;
    gptr<Local_00706368_r0_1> r0_1 = gptr<Local_00706368_r0_1>(frame.at(0x38).addr());  // (from the original)
    r0_1->word_0 = 4;
    r0_1->word_4 = 3;
    gptr<Local_00706368_r0_2> r0_2 = gptr<Local_00706368_r0_2>(frame.at(0x30).addr());  // (from the original)
    r0_2->word_0 = 2;
    r0_2->word_4 = 2;
    call_0052f200(frame.at(0x10).addr(), r0_2.addr(), r0_1.addr(), r3);  // (from the original)
    call_0074824c(frame.at(0).addr(), frame.at(0x10).addr());  // (from the original)
    u32 r6 = 0u;
    call_00748284(frame.at(0x20).addr(), frame.at(0x10).addr());  // (from the original)
    u32 r0_7 = call_007481ec(frame.at(0x20).addr(), frame.at(0).addr());  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_7 == 0) {
        return 0u;
    }
    do {
        u32 r7_1 = frame->word_28;
        u32 r0_8 = frame->word_2c;
        if (*gptr<u8>(r7_1 + ((r0_8 << 3) - r0_8 + r4)) == r5) {
            r6 += 1u;
        }
        call_0052f144(frame.at(0x20).addr(), r1, r2, r3);  // (from the original)
        r0_11 = call_007481ec(frame.at(0x20).addr(), frame.at(0).addr());  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        guest::preempt();
    } while (r0_11 != 0);
    if (r6 == 0) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    u32 r7 = 0u;
    u32 r0_12 = call_0055cb58(r8, r1, r2, r3);
    r6 = u64(r0_12) * r6 >> 0x20;  // (from the original)
    call_00748284(frame.at(0x20).addr(), frame.at(0x10).addr());  // (from the original)
    u32 r0_15 = call_007481ec(frame.at(0x20).addr(), frame.at(0).addr());  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_15 == 0) {
        return 1u;
    }
L_706488:;
    u32 r8_1 = frame->word_28;
    u32 r0_16 = frame->word_2c;
    if (*gptr<u8>(r8_1 + ((r0_16 << 3) - r0_16 + r4)) != r5) {
        goto L_706520;
    }
    if (r7 != r6) {
        r7 += 1u;
        goto L_706520;
    }
    r0_17 = frame->word_2c;
    *gptr<u8>(frame->word_28 + ((r0_17 << 3) - r0_17 + r4)) = u8(r9);
    guest::cpu()->r[1] = r1;
    return 1u;
L_706520:;
    call_0052f144(frame.at(0x20).addr(), r1, r2, r3);  // (from the original)
    u32 r0_20 = call_007481ec(frame.at(0x20).addr(), frame.at(0).addr());  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_20 != 0) {
        guest::preempt();
        goto L_706488;
    }
    return 1u;
}

}  // namespace d_00706368
GUEST_EXPORT_FRAMED(0x00706368, d_00706368::f_00706368, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_007075b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007075b4 {

struct __attribute__((packed)) Local_007075b4_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_007075b4_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_007075b4_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_007075b4_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_007075b4_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_007075b4_ea_4, word_4, 0x4);

struct __attribute__((packed)) Local_007075b4_ea_6 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_007075b4_ea_6, word_0, 0x0);
GUEST_OFFSET(Local_007075b4_ea_6, word_4, 0x4);

struct __attribute__((packed)) Local_007075b4_ea_8 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_007075b4_ea_8, word_0, 0x0);
GUEST_OFFSET(Local_007075b4_ea_8, word_4, 0x4);

struct __attribute__((packed)) Local_007075b4_r3_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_007075b4_r3_2, word_0, 0x0);
GUEST_OFFSET(Local_007075b4_r3_2, word_4, 0x4);

inline guest::global<u32, 0x0085f2e0> global_0085f2e0;
inline guest::global<u32, 0x0085f2e4> global_0085f2e4;
inline guest::global<u32, 0x0085f2e8> global_0085f2e8;
inline guest::global<u32, 0x0085f2ec> global_0085f2ec;
inline constexpr guest::Function<0x0052ed04, u32(u32, u32)> call_0052ed04;
inline constexpr guest::Function<0x0052edfc, u32(u32, u32, u32, u32)> call_0052edfc;
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32)> call_0075291c;
inline constexpr guest::Function<0x007667d0, u32(u32, u32, u32, u32)> call_007667d0;
inline constexpr guest::Function<0x0076689c, u32(u32, u32, u32, u32)> call_0076689c;
inline constexpr guest::Function<0x00766968, u32(u32, u32, u32, u32)> call_00766968;
inline constexpr guest::Function<0x00766a34, u32(u32, u32, u32, u32)> call_00766a34;

struct __attribute__((packed)) Frame_007075b4 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_007075b4, word_0, 0x0);
GUEST_OFFSET(Frame_007075b4, word_4, 0x4);
GUEST_SIZE(Frame_007075b4, 0x10);

void f_007075b4(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_007075b4> frame;  // the original's stack frame
    u32 r0_4 = 0;
    call_0052edfc(frame.at(8).addr(), r2, r2, r3);
    call_0052ed04(frame.at(0).addr(), r2);
    gptr<Local_007075b4_r3_2> r3_2 = gptr<Local_007075b4_r3_2>(frame.at(8).addr());
    u32 r0_3 = call_0075291c(r1, r3_2->word_0, r3_2->word_4);
    if (r0_3 != 0) {
        if (r3 != 0) {
            if (r3 == 1u) {
                call_00766968(r0_3, r0, frame->word_0, frame->word_4);
            } else if (r3 == 2u) {
                call_0076689c(r0_3, r0, frame->word_0, frame->word_4);
            } else if (r3 == 3u) {
                call_00766a34(r0_3, r0, frame->word_0, frame->word_4);
            }
        } else {
            call_007667d0(r0_3, r0, frame->word_0, frame->word_4);
        }
    } else {
        if (r3 != 0) {
            if (r3 == 1u) {
                *gptr<u32>(r0 + 4u) = 0;
                gptr<Local_007075b4_ea_2> ea_2 = gptr<Local_007075b4_ea_2>(r0 + 8u);
                ea_2->word_0 = 0x2710;  // (from the original)
                ea_2->word_4 = 0;
                u32 r6_1 = *global_0085f2e0;
                u32 r7_1 = *gptr<u32>(r2);
                u32 r8_1 = *global_0085f2e8;
                *gptr<u32>(r0 + 0x18u) = 0x2710;  // (from the original)
                *gptr<u32>(r0 + 0x14u) = r7_1 * r6_1 - r8_1;  // (from the original)
                *gptr<u32>(r0 + 0x1cu) = *gptr<u32>(r2 + 4u) * *global_0085f2e4 - *global_0085f2ec;  // (from the original)
                u32 r3_7 = *global_0085f2e0;
                u32 r6_2 = *gptr<u32>(r2);
                u32 r1_2 = *global_0085f2e8;
                *gptr<u32>(r0 + 0x28u) = 0x2710;  // (from the original)
                *gptr<u32>(r0 + 0x24u) = r6_2 * r3_7 - r1_2;  // (from the original)
                r0_4 = *global_0085f2e4 * *gptr<u32>(r2 + 4u) + *global_0085f2ec;
            } else if (r3 == 2u) {
                *gptr<u32>(r0 + 4u) = 0;
                gptr<Local_007075b4_ea_4> ea_4 = gptr<Local_007075b4_ea_4>(r0 + 8u);
                ea_4->word_0 = 0x2710;  // (from the original)
                ea_4->word_4 = 0;
                u32 r6_3 = *global_0085f2e0;
                u32 r8_2 = *gptr<u32>(r2);
                u32 r7_2 = *global_0085f2e8;
                *gptr<u32>(r0 + 0x18u) = 0x2710;  // (from the original)
                *gptr<u32>(r0 + 0x14u) = r8_2 * r6_3 - r7_2;  // (from the original)
                *gptr<u32>(r0 + 0x1cu) = *global_0085f2e4 * *gptr<u32>(r2 + 4u) + *global_0085f2ec;  // (from the original)
                u32 r3_8 = *global_0085f2e0;
                u32 r6_4 = *gptr<u32>(r2);
                u32 r1_3 = *global_0085f2e8;
                *gptr<u32>(r0 + 0x28u) = 0x2710;  // (from the original)
                *gptr<u32>(r0 + 0x24u) = r3_8 * r6_4 + r1_3;  // (from the original)
                r0_4 = *global_0085f2e4 * *gptr<u32>(r2 + 4u) + *global_0085f2ec;
            } else {
                if (r3 != 3u) {
                    return;
                }
                *gptr<u32>(r0 + 4u) = 0;
                gptr<Local_007075b4_ea_6> ea_6 = gptr<Local_007075b4_ea_6>(r0 + 8u);
                ea_6->word_0 = 0x2710;  // (from the original)
                ea_6->word_4 = 0;
                u32 r6_5 = *gptr<u32>(r2);
                u32 r8_3 = *global_0085f2e0;
                u32 r7_3 = *global_0085f2e8;
                *gptr<u32>(r0 + 0x18u) = 0x2710;  // (from the original)
                *gptr<u32>(r0 + 0x14u) = r8_3 * r6_5 + r7_3;  // (from the original)
                *gptr<u32>(r0 + 0x1cu) = *global_0085f2e4 * *gptr<u32>(r2 + 4u) + *global_0085f2ec;  // (from the original)
                u32 r3_9 = *global_0085f2e0;
                u32 r6_6 = *gptr<u32>(r2);
                u32 r1_4 = *global_0085f2e8;
                *gptr<u32>(r0 + 0x28u) = 0x2710;  // (from the original)
                *gptr<u32>(r0 + 0x24u) = r3_9 * r6_6 + r1_4;  // (from the original)
                r0_4 = *gptr<u32>(r2 + 4u) * *global_0085f2e4 - *global_0085f2ec;
            }
        } else {
            *gptr<u32>(r0 + 4u) = 0;
            gptr<Local_007075b4_ea_8> ea_8 = gptr<Local_007075b4_ea_8>(r0 + 8u);
            ea_8->word_0 = 0x2710;  // (from the original)
            ea_8->word_4 = 0;
            u32 r6_7 = *gptr<u32>(r2);
            u32 r8_4 = *global_0085f2e0;
            u32 r7_4 = *global_0085f2e8;
            *gptr<u32>(r0 + 0x18u) = 0x2710;  // (from the original)
            *gptr<u32>(r0 + 0x14u) = r8_4 * r6_7 + r7_4;  // (from the original)
            *gptr<u32>(r0 + 0x1cu) = *gptr<u32>(r2 + 4u) * *global_0085f2e4 - *global_0085f2ec;  // (from the original)
            u32 r3_10 = *global_0085f2e0;
            u32 r6_8 = *gptr<u32>(r2);
            u32 r1_5 = *global_0085f2e8;
            *gptr<u32>(r0 + 0x28u) = 0x2710;  // (from the original)
            *gptr<u32>(r0 + 0x24u) = r6_8 * r3_10 - r1_5;  // (from the original)
            r0_4 = *gptr<u32>(r2 + 4u) * *global_0085f2e4 - *global_0085f2ec;
        }
        *gptr<u32>(r0 + 0x2cu) = r0_4;  // (from the original)
    }
}

}  // namespace d_007075b4
GUEST_EXPORT_FRAMED(0x007075b4, d_007075b4::f_007075b4, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00707ebc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00707ebc {

struct __attribute__((packed)) Object_00707ebc_0 {
    u8 unknown_0[0x4];  // (not used here)
    float float_4;
    u32 word_8;
    float float_c;
};
GUEST_OFFSET(Object_00707ebc_0, float_4, 0x4);
GUEST_OFFSET(Object_00707ebc_0, word_8, 0x8);
GUEST_OFFSET(Object_00707ebc_0, float_c, 0xc);

struct __attribute__((packed)) Object_00707ebc_1 {
    u8 unknown_0[0x4];  // (not used here)
    float float_4;
    u32 word_8;
    float float_c;
};
GUEST_OFFSET(Object_00707ebc_1, float_4, 0x4);
GUEST_OFFSET(Object_00707ebc_1, word_8, 0x8);
GUEST_OFFSET(Object_00707ebc_1, float_c, 0xc);

struct __attribute__((packed)) Object_00707ebc_2 {
    u8 unknown_0[0x4];  // (not used here)
    float float_4;
    u32 word_8;
    float float_c;
};
GUEST_OFFSET(Object_00707ebc_2, float_4, 0x4);
GUEST_OFFSET(Object_00707ebc_2, word_8, 0x8);
GUEST_OFFSET(Object_00707ebc_2, float_c, 0xc);

struct __attribute__((packed)) Object_00707ebc_3 {
    u8 unknown_0[0x4];  // (not used here)
    float float_4;
    u32 word_8;
    float float_c;
};
GUEST_OFFSET(Object_00707ebc_3, float_4, 0x4);
GUEST_OFFSET(Object_00707ebc_3, word_8, 0x8);
GUEST_OFFSET(Object_00707ebc_3, float_c, 0xc);

struct __attribute__((packed)) Local_00707ebc_r0_1 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_00707ebc_r0_1, float_0, 0x0);
GUEST_OFFSET(Local_00707ebc_r0_1, float_4, 0x4);
GUEST_OFFSET(Local_00707ebc_r0_1, float_8, 0x8);

struct __attribute__((packed)) Local_00707ebc_r0_2 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_00707ebc_r0_2, float_0, 0x0);
GUEST_OFFSET(Local_00707ebc_r0_2, float_4, 0x4);
GUEST_OFFSET(Local_00707ebc_r0_2, float_8, 0x8);

struct __attribute__((packed)) Local_00707ebc_r0_3 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_00707ebc_r0_3, float_0, 0x0);
GUEST_OFFSET(Local_00707ebc_r0_3, float_4, 0x4);
GUEST_OFFSET(Local_00707ebc_r0_3, float_8, 0x8);

struct __attribute__((packed)) Local_00707ebc_r0_4 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_00707ebc_r0_4, float_0, 0x0);
GUEST_OFFSET(Local_00707ebc_r0_4, float_4, 0x4);
GUEST_OFFSET(Local_00707ebc_r0_4, float_8, 0x8);

inline constexpr guest::Function<0x0056a2c0, u32(u32, u32, u32, u32)> call_0056a2c0;
inline constexpr guest::Function<0x006f7e40, u32(u32, u32, u32, u32)> call_006f7e40;

u32 f_00707ebc(gptr<Object_00707ebc_0> arg0, gptr<Object_00707ebc_1> arg1, gptr<Object_00707ebc_2> arg2, gptr<Object_00707ebc_3> arg3) {
    guest::StackFrame frame(0x30);  // the original's stack frame
    float S2_1 = float(s32(std::bit_cast<u32>(arg0->float_c)));
    u32 r4_1 = *frame.at<u32>(0x4c);  // (from the original)
    u32 r8_1 = *frame.at<u32>(0x48);  // (from the original)
    float S1_1 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(arg0->word_8 - 0x10u))));  // (from the original)
    gptr<Local_00707ebc_r0_1> r0_1 = gptr<Local_00707ebc_r0_1>(frame.at(0).addr());
    r0_1->float_0 = float(s32(std::bit_cast<u32>(arg0->float_4)));
    r0_1->float_4 = S1_1;
    r0_1->float_8 = S2_1;
    float S2_2 = float(s32(std::bit_cast<u32>(arg1->float_c)));
    gptr<Local_00707ebc_r0_2> r0_2 = gptr<Local_00707ebc_r0_2>(frame.at(0x18).addr());  // (from the original)
    float S1_2 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(arg1->word_8 - 0x10u))));  // (from the original)
    r0_2->float_0 = float(s32(std::bit_cast<u32>(arg1->float_4)));
    r0_2->float_4 = S1_2;
    r0_2->float_8 = S2_2;
    u32 r5_1 = 0u;
    if (r8_1 == 0x20u) {  // (from the original)
        r5_1 = 0x10u;  // (from the original)
    }
    gptr<Local_00707ebc_r0_3> r0_3 = gptr<Local_00707ebc_r0_3>(frame.at(0xc).addr());  // (from the original)
    float S2_3 = float(s32(std::bit_cast<u32>(arg2->float_c)));
    float S1_3 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(arg2->word_8 + r5_1))));
    r0_3->float_0 = float(s32(std::bit_cast<u32>(arg2->float_4)));
    r0_3->float_4 = S1_3;
    r0_3->float_8 = S2_3;
    float S2_4 = float(s32(std::bit_cast<u32>(arg3->float_c)));
    float S0_1 = float(s32(std::bit_cast<u32>(arg3->float_4)));
    gptr<Local_00707ebc_r0_4> r0_4 = gptr<Local_00707ebc_r0_4>(frame.at(0x24).addr());  // (from the original)
    float S1_4 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(arg3->word_8 + r5_1))));
    r0_4->float_0 = S0_1;
    r0_4->float_4 = S1_4;
    r0_4->float_8 = S2_4;
    u32 r5_2 = r4_1 * 0x38u + 0x9877c0u;  // (from the original)
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_4;
    call_0056a2c0(r5_2, frame.at(0).addr(), frame.at(0x18).addr(), frame.at(0xc).addr());  // (from the original)
    call_006f7e40((r4_1 << 4) + 0x9893c0u, r5_2, r8_1, ~0x80000000u);  // (from the original)
    u32 r5_3 = (r4_1 + 1u) * 0x38u + 0x9877c0u;  // (from the original)
    call_0056a2c0(r5_3, frame.at(0xc).addr(), frame.at(0x24).addr(), frame.at(0).addr());  // (from the original)
    call_006f7e40((r4_1 + 1u << 4) + 0x9893c0u, r5_3, r8_1, ~0x80000000u);  // (from the original)
    return r4_1 + 2u;
}

}  // namespace d_00707ebc
GUEST_EXPORT_FRAMED(0x00707ebc, d_00707ebc::f_00707ebc, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0070a758: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070a758 {

struct __attribute__((packed)) Object_0070a758_0 {
    u8 unknown_0[0x318];  // (not used here)
    u32 word_318;
};
GUEST_OFFSET(Object_0070a758_0, word_318, 0x318);

inline constexpr guest::Function<0x002b7cd4, u32(u32, u32)> call_002b7cd4;

u32 f_0070a758(gptr<Object_0070a758_0> arg0) {
    u32 r0_1 = arg0->word_318;
    if (r0_1 == 0) {
        return 1u;
    }
    return call_002b7cd4(r0_1, guest::cpu()->r[1]);
}

}  // namespace d_0070a758
GUEST_EXPORT(0x0070a758, d_0070a758::f_0070a758);

// f_0070aa00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070aa00 {

struct __attribute__((packed)) Object_0070aa00_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_0070aa00_0, word_c, 0xc);
GUEST_OFFSET(Object_0070aa00_0, word_10, 0x10);

inline guest::global<u32, 0x00857a60> global_00857a60;
inline guest::global<u32, 0x00857a64> global_00857a64;
inline guest::global<u32, 0x00857a88> global_00857a88;
inline guest::global<u32, 0x00857a8c> global_00857a8c;

u32 f_0070aa00(gptr<Object_0070aa00_0> arg0) {
    u32 r3_1 = arg0->word_c;
    u32 r1_1 = *global_00857a64;
    if (r3_1 == *global_00857a60 && (r3_1 == 0 && ((arg0->word_10 | r1_1) & 1u) == 0 || arg0->word_10 == r1_1)) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r1_2 = *global_00857a8c;
    if (r3_1 != *global_00857a88) {
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    if (r3_1 == 0 && ((arg0->word_10 | r1_2) & 1u) == 0 || arg0->word_10 == r1_2) {
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    guest::cpu()->r[1] = r1_2;
    return 1u;
}

}  // namespace d_0070aa00
GUEST_EXPORT(0x0070aa00, d_0070aa00::f_0070aa00);

// f_0070aa84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070aa84 {

struct __attribute__((packed)) Object_0070aa84_0 {
    u8 unknown_0[0x184c];  // (not used here)
    u32 word_184c;
    u32 word_1850;
};
GUEST_OFFSET(Object_0070aa84_0, word_184c, 0x184c);
GUEST_OFFSET(Object_0070aa84_0, word_1850, 0x1850);

inline constexpr guest::Function<0x0071ef10, u32(u32, u32)> call_0071ef10;

u32 f_0070aa84(gptr<Object_0070aa84_0> arg0) {
    u32 r1_1 = arg0->word_184c;
    if (r1_1 != 0) {
        return call_0071ef10(r1_1, r1_1);
    }
    u32 r0_1 = arg0->word_1850;
    if (r0_1 == 0) {
        return r0_1;
    }
    return call_0071ef10(r0_1, r1_1);
}

}  // namespace d_0070aa84
GUEST_EXPORT(0x0070aa84, d_0070aa84::f_0070aa84);

// f_0070aabc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070aabc {

struct __attribute__((packed)) Object_0070aabc_0 {
    u8 unknown_0[0x184c];  // (not used here)
    u32 word_184c;
    u32 word_1850;
};
GUEST_OFFSET(Object_0070aabc_0, word_184c, 0x184c);
GUEST_OFFSET(Object_0070aabc_0, word_1850, 0x1850);

inline constexpr guest::Function<0x007237e0, u32(u32, u32)> call_007237e0;

u32 f_0070aabc(gptr<Object_0070aabc_0> arg0) {
    u32 r1_1 = arg0->word_184c;
    if (r1_1 != 0) {
        return call_007237e0(r1_1, r1_1);
    }
    u32 r0_1 = arg0->word_1850;
    if (r0_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    return call_007237e0(r0_1, r1_1);
}

}  // namespace d_0070aabc
GUEST_EXPORT(0x0070aabc, d_0070aabc::f_0070aabc);

// f_0070ab10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070ab10 {

struct __attribute__((packed)) Object_0070ab10_0 {
    u8 unknown_0[0x664];  // (not used here)
    u8 byte_664;
};
GUEST_OFFSET(Object_0070ab10_0, byte_664, 0x664);

inline constexpr guest::Function<0x0048a394, u32(u32, u32, u32, u32)> call_0048a394;

u32 f_0070ab10(gptr<Object_0070ab10_0> arg0) {
    u32 r0_1 = arg0->byte_664;
    if (r0_1 == 0) {
        return r0_1;
    }
    return call_0048a394(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0070ab10
GUEST_EXPORT(0x0070ab10, d_0070ab10::f_0070ab10);

// f_0070ab24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070ab24 {

inline constexpr guest::Function<0x007460e8, u32(u32, u32, u32, u32)> call_007460e8;

u32 f_0070ab24(u32 r0, u32 r1) {
    if (r1 >= 4u) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    u32 r1_1 = r1 * 3u;
    return call_007460e8(r0 + (r1_1 << 3) + 0xe0u, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0070ab24
GUEST_EXPORT(0x0070ab24, d_0070ab24::f_0070ab24);

// f_0070ac44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070ac44 {

inline constexpr guest::Function<0x0074619c, u32(u32, u32, u32, u32)> call_0074619c;

u32 f_0070ac44(u32 r0, u32 r1, float S0) {
    if (r1 >= 4u) {
        float S0_1 = 0.0f;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0_1;
        return r0;
    }
    u32 r1_1 = r1 * 3u;
    guest::cpu()->s[0] = S0;
    return call_0074619c(r0 + (r1_1 << 3) + 0xe0u, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0070ac44
GUEST_EXPORT(0x0070ac44, d_0070ac44::f_0070ac44);

// f_0070b140: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070b140 {

struct __attribute__((packed)) Object_0070b140_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_0070b140_0, word_0, 0x0);
GUEST_OFFSET(Object_0070b140_0, word_4, 0x4);

inline constexpr guest::Function<0x002fcb34, u32(u32)> call_002fcb34;
inline constexpr guest::Function<0x0070f034, u32(u32, u32)> call_0070f034;
inline constexpr guest::Function<0x0076ab28, u32(u32)> call_0076ab28;

u32 f_0070b140(gptr<Object_0070b140_0> arg0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r4_1 = arg0->word_0;
    if (r4_1 != 0) {
        u32 r0_2 = call_0076ab28(r4_1 + 8u);
        u32 r0_4 = call_002fcb34(r0_2 == 3u ? r4_1 + 8u : 0x95bfdcu);  // (from the original)
        if (r0_4 == 8u) {
            return 0x95bfdcu;  // (from the original)
        }
        u32 r0_6 = call_0076ab28(r4_1 + 0x14u);  // (from the original)
        if (r0_6 == 5u) {
            return r4_1 + 0x14u;  // (from the original)
        }
        return 0x95bfdcu;  // (from the original)
    }
    u32 r0_8 = arg0->word_4;
    if (r0_8 == 0) {
        return 0x95bfdcu;  // (from the original)
    }
    frame.release();
    return call_0070f034(r0_8, guest::cpu()->r[1]);
}

}  // namespace d_0070b140
GUEST_EXPORT(0x0070b140, d_0070b140::f_0070b140);

// f_0070b1a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070b1a4 {


u32 f_0070b1a4(u32 r0, u32 r1) {
    if (r1 >= 0xau) {  // (from the original)
        r1 = 0u;
    }
    return r0 + r1 * 0xcu;  // (from the original)
}

}  // namespace d_0070b1a4
GUEST_EXPORT(0x0070b1a4, d_0070b1a4::f_0070b1a4);

// f_0070b334: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070b334 {

struct __attribute__((packed)) Object_0070b334_0 {
    u8 unknown_0[0x2];  // (not used here)
    u8 byte_2;
    u8 unknown_3[0x1];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_0070b334_0, byte_2, 0x2);
GUEST_OFFSET(Object_0070b334_0, word_4, 0x4);
GUEST_OFFSET(Object_0070b334_0, word_8, 0x8);


u32 f_0070b334(gptr<Object_0070b334_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1_1 = arg0->byte_2;
    if (r1_1 != 2u && r1_1 != 1u) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r1_2 = arg0->word_4;
    u32 zf_1 = r1_2 == 0;
    if (!zf_1) {
        r0 = arg0->word_8;
        zf_1 = r0 == 0;
    }
    if (zf_1) {
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    if (r1_2 <= r0) {
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    guest::cpu()->r[1] = r1_2;
    return 0u;
}

}  // namespace d_0070b334
GUEST_EXPORT(0x0070b334, d_0070b334::f_0070b334);

// f_0070b3b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070b3b8 {

struct __attribute__((packed)) Object_0070b3b8_0 {
    u8 unknown_0[0x2];  // (not used here)
    u8 byte_2;
    u8 unknown_3[0x1];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_0070b3b8_0, byte_2, 0x2);
GUEST_OFFSET(Object_0070b3b8_0, word_4, 0x4);
GUEST_OFFSET(Object_0070b3b8_0, word_8, 0x8);

inline constexpr guest::Function<0x002fb328, u32(u32, u32)> call_002fb328;
inline constexpr guest::Function<0x003026e8, u32(u32, u32)> call_003026e8;
inline constexpr guest::Function<0x00718378, u32(u32, u32)> call_00718378;

u32 f_0070b3b8(gptr<Object_0070b3b8_0> arg0, u32 r1) {
    u32 r5_1 = 0u;
    call_002fb328(arg0.addr(), r1);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r0_1 = arg0->byte_2;
    if (r0_1 == 2u || r0_1 == 1u) {
        u32 r0_2 = arg0->word_4;
        u32 zf_1 = r0_2 == 0;
        if (!zf_1) {
            r1_1 = arg0->word_8;
            zf_1 = r1_1 == 0;
        }
        if (!zf_1 && r0_2 <= r1_1) {
            u32 r0_3 = call_00718378(arg0.addr() + 0xcu, r1_1);  // (from the original)
            r1_1 = guest::cpu()->r[1];
            if (r0_3 == 0) {
                u32 r0_4 = call_003026e8(arg0.addr() + 0xcu, r1_1);  // (from the original)
                r1_1 = guest::cpu()->r[1];
                if (r0_4 == 0x81u) {  // (from the original)
                    r5_1 = 1u;
                }
            }
        }
    }
    guest::cpu()->r[1] = r1_1;
    return r5_1;
}

}  // namespace d_0070b3b8
GUEST_EXPORT_FRAMED(0x0070b3b8, d_0070b3b8::f_0070b3b8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0070b49c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070b49c {

struct __attribute__((packed)) Object_0070b49c_0 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Object_0070b49c_0, byte_0, 0x0);
GUEST_OFFSET(Object_0070b49c_0, byte_1, 0x1);
GUEST_OFFSET(Object_0070b49c_0, byte_2, 0x2);


u32 f_0070b49c(gptr<Object_0070b49c_0> arg0, u32 r1) {
    u32 r0_1 = r1 == 3u ? u32(arg0->byte_0) : r1 == 4u ? u32(arg0->byte_1) : r1 == 5u ? u32(arg0->byte_2) : 0x1bu;  // (from the original)
    u32 r1_1 = r0_1 & 3u;
    if (r1_1 == 2u) {
        guest::cpu()->r[1] = r1_1;
        return 0x17u;  // (from the original)
    }
    u32 r0_2 = r0_1 >> 2;
    u32 r1_2 = r0_2 & 3u;
    if (r1_2 == 2u) {
        guest::cpu()->r[1] = r1_2;
        return 0x16u;  // (from the original)
    }
    u32 r0_3 = r0_2 >> 2;
    u32 r1_3 = r0_3 & 3u;
    if (r1_3 == 2u) {
        guest::cpu()->r[1] = r1_3;
        return 0x15u;  // (from the original)
    }
    guest::cpu()->r[1] = r1_3;
    return (r0_3 >> 2u & 3u) == 2u ? 0x14u : 0u;  // (from the original)
}

}  // namespace d_0070b49c
GUEST_EXPORT(0x0070b49c, d_0070b49c::f_0070b49c);

// f_0070b510: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070b510 {

struct __attribute__((packed)) Object_0070b510_0 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Object_0070b510_0, byte_0, 0x0);
GUEST_OFFSET(Object_0070b510_0, byte_1, 0x1);
GUEST_OFFSET(Object_0070b510_0, byte_2, 0x2);


u32 f_0070b510(gptr<Object_0070b510_0> arg0, u32 r1) {
    u32 r0_1 = r1 == 3u ? u32(arg0->byte_0) : r1 == 4u ? u32(arg0->byte_1) : r1 == 5u ? u32(arg0->byte_2) : 0x1bu;  // (from the original)
    if ((r0_1 & 3u) == 0) {
        return 0x17u;  // (from the original)
    }
    u32 r0_2 = r0_1 >> 2;
    if ((r0_2 & 3u) == 0) {
        return 0x16u;  // (from the original)
    }
    u32 r0_3 = r0_2 >> 2;
    if ((r0_3 & 3u) == 0) {
        return 0x15u;  // (from the original)
    }
    return (r0_3 >> 2u & 3u) == 0 ? 0x14u : 0u;  // (from the original)
}

}  // namespace d_0070b510
GUEST_EXPORT(0x0070b510, d_0070b510::f_0070b510);

// f_0070b574: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070b574 {

struct __attribute__((packed)) Object_0070b574_0 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Object_0070b574_0, byte_0, 0x0);
GUEST_OFFSET(Object_0070b574_0, byte_1, 0x1);
GUEST_OFFSET(Object_0070b574_0, byte_2, 0x2);


u32 f_0070b574(gptr<Object_0070b574_0> arg0, u32 r1) {
    u32 r0_1 = r1 == 3u ? u32(arg0->byte_0) : r1 == 4u ? u32(arg0->byte_1) : r1 == 5u ? u32(arg0->byte_2) : 0x1bu;  // (from the original)
    u32 r1_1 = r0_1 & 3u;
    if (r1_1 == 3u) {
        guest::cpu()->r[1] = r1_1;
        return 0x17u;  // (from the original)
    }
    u32 r0_2 = r0_1 >> 2;
    u32 r1_2 = r0_2 & 3u;
    if (r1_2 == 3u) {
        guest::cpu()->r[1] = r1_2;
        return 0x16u;  // (from the original)
    }
    u32 r0_3 = r0_2 >> 2;
    u32 r1_3 = r0_3 & 3u;
    if (r1_3 == 3u) {
        guest::cpu()->r[1] = r1_3;
        return 0x15u;  // (from the original)
    }
    guest::cpu()->r[1] = r1_3;
    return (r0_3 >> 2u & 3u) == 3u ? 0x14u : 0u;  // (from the original)
}

}  // namespace d_0070b574
GUEST_EXPORT(0x0070b574, d_0070b574::f_0070b574);

// f_0070b5e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070b5e8 {

struct __attribute__((packed)) Object_0070b5e8_0 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Object_0070b5e8_0, byte_0, 0x0);
GUEST_OFFSET(Object_0070b5e8_0, byte_1, 0x1);
GUEST_OFFSET(Object_0070b5e8_0, byte_2, 0x2);


u32 f_0070b5e8(gptr<Object_0070b5e8_0> arg0, u32 r1) {
    u32 r0_1 = r1 == 3u ? u32(arg0->byte_0) : r1 == 4u ? u32(arg0->byte_1) : r1 == 5u ? u32(arg0->byte_2) : 0x1bu;  // (from the original)
    u32 r1_1 = r0_1 & 3u;
    if (r1_1 == 1u) {
        guest::cpu()->r[1] = r1_1;
        return 0x17u;  // (from the original)
    }
    u32 r0_2 = r0_1 >> 2;
    u32 r1_2 = r0_2 & 3u;
    if (r1_2 == 1u) {
        guest::cpu()->r[1] = r1_2;
        return 0x16u;  // (from the original)
    }
    u32 r0_3 = r0_2 >> 2;
    u32 r1_3 = r0_3 & 3u;
    if (r1_3 == 1u) {
        guest::cpu()->r[1] = r1_3;
        return 0x15u;  // (from the original)
    }
    guest::cpu()->r[1] = r1_3;
    return (r0_3 >> 2u & 3u) == 1u ? 0x14u : 0u;  // (from the original)
}

}  // namespace d_0070b5e8
GUEST_EXPORT(0x0070b5e8, d_0070b5e8::f_0070b5e8);

// f_0070b65c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070b65c {

struct __attribute__((packed)) Object_0070b65c_0 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Object_0070b65c_0, byte_0, 0x0);
GUEST_OFFSET(Object_0070b65c_0, byte_1, 0x1);
GUEST_OFFSET(Object_0070b65c_0, byte_2, 0x2);


u32 f_0070b65c(gptr<Object_0070b65c_0> arg0, u32 r1) {
    if (r1 == 3u) {
        u32 r0_1 = arg0->byte_0;
        return *gptr<u32>((r0_1 >> 6 << 2) + 0x88e79cu);  // (from the original)
    }
    if (r1 == 4u) {
        u32 r0_3 = arg0->byte_1;
        return *gptr<u32>((r0_3 >> 6 << 2) + 0x88e79cu);  // (from the original)
    }
    return *gptr<u32>(((r1 == 5u ? u32(arg0->byte_2) : 0x1bu) >> 6 << 2) + 0x88e79cu);  // (from the original)
}

}  // namespace d_0070b65c
GUEST_EXPORT(0x0070b65c, d_0070b65c::f_0070b65c);

// f_0070b694: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070b694 {

struct __attribute__((packed)) Object_0070b694_0 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Object_0070b694_0, byte_0, 0x0);
GUEST_OFFSET(Object_0070b694_0, byte_1, 0x1);
GUEST_OFFSET(Object_0070b694_0, byte_2, 0x2);


u32 f_0070b694(gptr<Object_0070b694_0> arg0, u32 r1) {
    if (r1 == 3u) {
        u32 r0_1 = arg0->byte_0;
        return *gptr<u32>(((r0_1 >> 4u & 3u) << 2) + 0x88e79cu);  // (from the original)
    }
    if (r1 == 4u) {
        u32 r0_3 = arg0->byte_1;
        return *gptr<u32>(((r0_3 >> 4u & 3u) << 2) + 0x88e79cu);  // (from the original)
    }
    return *gptr<u32>((((r1 == 5u ? u32(arg0->byte_2) : 0x1bu) >> 4u & 3u) << 2) + 0x88e79cu);  // (from the original)
}

}  // namespace d_0070b694
GUEST_EXPORT(0x0070b694, d_0070b694::f_0070b694);

// f_0070b6d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070b6d0 {

struct __attribute__((packed)) Object_0070b6d0_0 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Object_0070b6d0_0, byte_0, 0x0);
GUEST_OFFSET(Object_0070b6d0_0, byte_1, 0x1);
GUEST_OFFSET(Object_0070b6d0_0, byte_2, 0x2);


u32 f_0070b6d0(gptr<Object_0070b6d0_0> arg0, u32 r1) {
    if (r1 == 3u) {
        u32 r0_1 = arg0->byte_0;
        return *gptr<u32>(((r0_1 >> 2u & 3u) << 2) + 0x88e79cu);  // (from the original)
    }
    if (r1 == 4u) {
        u32 r0_3 = arg0->byte_1;
        return *gptr<u32>(((r0_3 >> 2u & 3u) << 2) + 0x88e79cu);  // (from the original)
    }
    return *gptr<u32>((((r1 == 5u ? u32(arg0->byte_2) : 0x1bu) >> 2u & 3u) << 2) + 0x88e79cu);  // (from the original)
}

}  // namespace d_0070b6d0
GUEST_EXPORT(0x0070b6d0, d_0070b6d0::f_0070b6d0);

// f_0070b70c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070b70c {

struct __attribute__((packed)) Object_0070b70c_0 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Object_0070b70c_0, byte_0, 0x0);
GUEST_OFFSET(Object_0070b70c_0, byte_1, 0x1);
GUEST_OFFSET(Object_0070b70c_0, byte_2, 0x2);


u32 f_0070b70c(gptr<Object_0070b70c_0> arg0, u32 r1) {
    if (r1 == 3u) {
        u32 r0_1 = arg0->byte_0;
        u32 r0_2 = *gptr<u32>(((r0_1 & 3u) << 2) + 0x88e79cu);  // (from the original)
        guest::cpu()->r[1] = 0x88e79cu;  // (from the original)
        return r0_2;
    }
    if (r1 == 4u) {
        u32 r0_3 = arg0->byte_1;
        u32 r0_4 = *gptr<u32>(((r0_3 & 3u) << 2) + 0x88e79cu);  // (from the original)
        guest::cpu()->r[1] = 0x88e79cu;  // (from the original)
        return r0_4;
    }
    u32 r0_6 = *gptr<u32>((((r1 == 5u ? u32(arg0->byte_2) : 0x1bu) & 3u) << 2) + 0x88e79cu);  // (from the original)
    guest::cpu()->r[1] = 0x88e79cu;  // (from the original)
    return r0_6;
}

}  // namespace d_0070b70c
GUEST_EXPORT(0x0070b70c, d_0070b70c::f_0070b70c);

// f_0070b744: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070b744 {


u32 f_0070b744(u32 r0, u32 r1) {
    return *gptr<u8>(r0 + r1 + 0x40u) == 0 ? r0 + (r1 << 2) : 0x95bfdcu;  // (from the original)
}

}  // namespace d_0070b744
GUEST_EXPORT(0x0070b744, d_0070b744::f_0070b744);

// f_0070b7a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070b7a8 {

inline constexpr guest::Function<0x005caef4, u32(u32, u32, u32, u32)> call_005caef4;

u32 f_0070b7a8(u32 r0) {
    return call_005caef4(r0, r0 + 8u, r0, 0xc8b8u);  // (from the original)
}

}  // namespace d_0070b7a8
GUEST_EXPORT(0x0070b7a8, d_0070b7a8::f_0070b7a8);

// f_0070b7bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070b7bc {

inline constexpr guest::Function<0x005ca5d8, u32(u32, u32, u32, u32)> call_005ca5d8;

struct __attribute__((packed)) Frame_0070b7bc {
    u32 word_0;
};
GUEST_OFFSET(Frame_0070b7bc, word_0, 0x0);
GUEST_SIZE(Frame_0070b7bc, 0x4);

u32 f_0070b7bc(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_0070b7bc> frame;  // the original's stack frame
    frame->word_0 = r3;
    frame->word_0 = r1;
    u32 r0_1 = call_005ca5d8(r0, r0 + 8u, r0, 0xc8b8u);  // (from the original)
    return r0_1;
}

}  // namespace d_0070b7bc
GUEST_EXPORT_FRAMED(0x0070b7bc, d_0070b7bc::f_0070b7bc, 0x4000);  // pushes {lr} first, as the original

// f_0070b7dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070b7dc {


u32 f_0070b7dc(u32 r0, u32 r1) {
    return *gptr<u8>(r0 + r1 + 0x58u);  // (from the original)
}

}  // namespace d_0070b7dc
GUEST_EXPORT(0x0070b7dc, d_0070b7dc::f_0070b7dc);

// f_0070b7e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070b7e8 {

struct __attribute__((packed)) Object_0070b7e8_0 {
    u8 unknown_0[0x69];  // (not used here)
    u8 byte_69;
};
GUEST_OFFSET(Object_0070b7e8_0, byte_69, 0x69);

struct __attribute__((packed)) Object_0070b7e8_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 byte_10;
    u8 byte_11;
    u8 unknown_12[0x2];  // (not used here)
    u32 word_14;
};
GUEST_OFFSET(Object_0070b7e8_1, word_0, 0x0);
GUEST_OFFSET(Object_0070b7e8_1, word_4, 0x4);
GUEST_OFFSET(Object_0070b7e8_1, word_8, 0x8);
GUEST_OFFSET(Object_0070b7e8_1, word_c, 0xc);
GUEST_OFFSET(Object_0070b7e8_1, byte_10, 0x10);
GUEST_OFFSET(Object_0070b7e8_1, byte_11, 0x11);
GUEST_OFFSET(Object_0070b7e8_1, word_14, 0x14);


u32 f_0070b7e8(gptr<Object_0070b7e8_0> arg0, gptr<Object_0070b7e8_1> arg1, u32 r2) {
    u32 r0_2 = 0;
    if (arg1.addr() != 0) {
        arg1->word_8 = 0x20;  // (from the original)
        u32 r4_1 = arg0->byte_69;
        if (r4_1 >= 6u) {
            arg1->word_0 = 0;
            arg1->word_4 = 0;
            arg1->word_c = 0x20;  // (from the original)
            arg1->byte_10 = 0;
            arg1->byte_11 = 0;
            return 1u;
        }
        if (r2 == 2u || r2 == 3u) {
            if (r4_1 != 2u && r4_1 != 5u) {
                arg1->word_c = 0x10;  // (from the original)
                arg1->byte_10 = 1;
                arg1->word_4 = 2;
                arg1->word_0 = r2 == 2u ? 0x10u : 0u;  // (from the original)
                arg1->byte_11 = 0;
                u32 r0_1 = arg0->byte_69;
                if (r0_1 == 1u || r0_1 == 4u) {
                    arg1->word_8 = 0x10;  // (from the original)
                }
                return 1u;
            }
        } else {
            arg1->byte_10 = 0;
            arg1->word_0 = 0;
            arg1->word_c = 0x20;  // (from the original)
            if (arg0->byte_69 > 2u) {
                arg1->byte_11 = 0;
                if (r2 != 0) {
                    r0_2 = 1u;
                    arg1->word_4 = r0_2;
                    return 1u;
                }
                r0_2 = 0u;
                arg1->word_4 = r0_2;
                return 1u;
            }
            arg1->byte_11 = 1;
            arg1->word_14 = r2 == 0 ? 0u : 0x10u;  // (from the original)
            if (r2 == 0) {
                r0_2 = 0u;
                arg1->word_4 = r0_2;
                return 1u;
            }
            r0_2 = 1u;
            arg1->word_4 = r0_2;
            return 1u;
        }
    }
    return 0u;
}

}  // namespace d_0070b7e8
GUEST_EXPORT_FRAMED(0x0070b7e8, d_0070b7e8::f_0070b7e8, 0x30);  // pushes {r4, r5} first, as the original

// f_0070b8fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070b8fc {

struct __attribute__((packed)) Object_0070b8fc_0 {
    u8 unknown_0[0x69];  // (not used here)
    u8 byte_69;
};
GUEST_OFFSET(Object_0070b8fc_0, byte_69, 0x69);

inline constexpr guest::Function<0x001c4bc8, u32(u32, u32, u32, u32)> call_001c4bc8;
inline constexpr guest::Function<0x001c4c14, u32(u32, u32, u32, u32)> call_001c4c14;

struct __attribute__((packed)) Frame_0070b8fc {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x10];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0070b8fc, word_0, 0x0);
GUEST_OFFSET(Frame_0070b8fc, word_4, 0x4);
GUEST_OFFSET(Frame_0070b8fc, word_8, 0x8);
GUEST_SIZE(Frame_0070b8fc, 0x1c);

u32 f_0070b8fc(gptr<Object_0070b8fc_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0070b8fc> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r11 = guest::cpu()->r[11];
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    u32 r5 = r0;
    u32 r0_1 = arg0->byte_69;
    frame->word_8 = u32(!(r0_1 >= 0xcu || r0_1 >= 9u));  // (from the original)
    frame->word_4 = r2 == 0 ? 4u : 1u;
    call_001c4c14(frame.at(0xc).addr(), r1, r2, r3);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    u32 r0_3 = frame->word_4;
    u32 zf_1 = r0_3 == 0;
    u32 cf_1 = r0_3 >= 0u;
    if (r0_3 >= 0u && r0_3 != 0) {
        r11 = 0x95c010u;  // (from the original)
    }
    r0 = 0u;
    frame->word_0 = r0;
    if (!!cf_1 && !zf_1) {
        do {
            u32 r8 = r0 << 5;
            u32 r7 = 0u;
            u32 r9 = r0 * frame->word_8 << 0x1e >> 0x17;  // (from the original)
            do {
                u32 r4 = 0u;
                u32 r10 = r7 + r8;
                u32 r6 = r9 + ((r7 & 0x1fu) << 2);  // (from the original)
                do {
                    u32 r0_4 = r4 & 0x1fu;  // (from the original)
                    u32 r0_5 = lsr_r(*gptr<u32>(r5 + (r6 + (r0_4 >> 3) << 2) + 0x6cu), r0_4 << 0x1d >> 0x1b & 0xff) & 0xfu;  // (from the original)
                    if (r0_5 == 0xfu) {  // (from the original)
                        r0_5 = 0u;
                    }
                    u32 r3_1 = *gptr<u16>(r11 + (u32(*gptr<u8>(r0_5 + r5 + 0x58u)) << 1));  // (from the original)
                    call_001c4bc8(frame.at(0xc).addr(), r4, r10, r3_1);  // (from the original)
                    r4 += 1u;
                    guest::preempt();
                } while (r4 < 0x20u);  // (from the original)
                r7 += 1u;
                guest::preempt();
            } while (r7 < 0x20u);  // (from the original)
            r1_1 = frame->word_4;
            r0 = frame->word_0 + 1u;
            frame->word_0 = r0;
            guest::preempt();
        } while (r0 < r1_1);
    }
    guest::cpu()->r[1] = r1_1;
    return frame.at(0xc).addr();  // (from the original)
}

}  // namespace d_0070b8fc
GUEST_EXPORT_FRAMED(0x0070b8fc, d_0070b8fc::f_0070b8fc, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_0070ba0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070ba0c {

struct __attribute__((packed)) Object_0070ba0c_0 {
    u8 unknown_0[0x69];  // (not used here)
    u8 byte_69;
};
GUEST_OFFSET(Object_0070ba0c_0, byte_69, 0x69);

struct __attribute__((packed)) Local_0070ba0c_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0070ba0c_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0070ba0c_ea_1, word_4, 0x4);

inline constexpr guest::Function<0x001c4bf4, u32(u32, u32, u32, u32)> call_001c4bf4;
inline constexpr guest::Function<0x001c4c14, u32(u32, u32, u32, u32)> call_001c4c14;
inline constexpr guest::Function<0x0070b7e8, u32(u32, u32, u32)> call_0070b7e8;

struct __attribute__((packed)) Frame_0070ba0c {
    u32 word_0;
    u8 unknown_4[0x14];  // (not read or written by name)
    u32 word_18;
    u32 word_1c;
    u8 byte_20;
    u8 byte_21;
    u8 unknown_22[0x2];  // (not read or written by name)
    u32 word_24;
    u8 unknown_28[0xc];  // (not read or written by name)
    u32 word_34;
    u8 unknown_38[0xc];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0070ba0c, word_0, 0x0);
GUEST_OFFSET(Frame_0070ba0c, word_18, 0x18);
GUEST_OFFSET(Frame_0070ba0c, word_1c, 0x1c);
GUEST_OFFSET(Frame_0070ba0c, byte_20, 0x20);
GUEST_OFFSET(Frame_0070ba0c, byte_21, 0x21);
GUEST_OFFSET(Frame_0070ba0c, word_24, 0x24);
GUEST_OFFSET(Frame_0070ba0c, word_34, 0x34);
GUEST_SIZE(Frame_0070ba0c, 0x44);

void f_0070ba0c(gptr<Object_0070ba0c_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0070ba0c> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r4 = 0;
    u32 r5 = 0;
    u32 r6 = 0;
    u32 r9 = 0;
    u32 r0_6 = 0;
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        return;
    }
    u32 r7 = r0;
    call_001c4c14(frame.at(0x28).addr(), r1, r2, r3);  // (from the original)
    u32 r8 = 0x95c010u;  // (from the original)
    if (arg0->byte_69 == 8u) {
        u32 r10 = 0x88e9c8u;  // (from the original)
        u32 r11 = 1u;
        frame->word_0 = 0;
        do {
            u32 r1_1 = frame->word_0;
            r6 = 0u;
            r5 = (r1_1 << 1) + 0x88e8c0u;  // (from the original)
            frame->word_34 = r1_1 << 0x1e >> 0x17;  // (from the original)
            do {
                r4 = 0u;
                r9 = frame->word_34 + ((r6 & 0x1fu) << 2);  // (from the original)
                r8 = r6 + (frame->word_0 << 5);
                do {
                    r1 = u32(*gptr<u8>(r5)) + r4;
                    if (s32(r1) < 0x34) {  // (from the original)
                        if ((*gptr<u32>(r10 + (r8 << 2)) & lsl_r(r11, r4 & 0xff)) == 0) {  // (from the original)
                            u32 r0_2 = r4 & 0x1fu;  // (from the original)
                            u32 r0_3 = lsr_r(*gptr<u32>(r7 + (r9 + (r0_2 >> 3) << 2) + 0x6cu), r0_2 << 0x1d >> 0x1b & 0xff) & 0xfu;  // (from the original)
                            if (r0_3 == 0xfu) {  // (from the original)
                                r0_3 = 0u;
                            }
                            u32 r0_4 = r0_3 & 0xffu;  // (from the original)
                            u32 r3_2 = r0_4 == 0xfu ? 0xfu : u32(*gptr<u16>((u32(*gptr<u8>(r7 + r0_4 + 0x58u)) << 1) + 0x95c010u)) & ~0xfu | r0_4;  // (from the original)
                            call_001c4bf4(frame.at(0x28).addr(), r1, u32(*gptr<u8>(r5 + 1u)) + r6, r3_2);  // (from the original)
                            r1 = guest::cpu()->r[1];
                        }
                    }
                    r4 += 1u;
                    guest::preempt();
                } while (r4 < 0x20u);  // (from the original)
                r6 += 1u;
                guest::preempt();
            } while (r6 < 0x20u);  // (from the original)
            r0_6 = frame->word_0 + 1u;
            frame->word_0 = r0_6;
            guest::preempt();
        } while (r0_6 < 4u);
    } else {
        call_0070b7e8(r7, frame.at(0x10).addr(), r2);  // (from the original)
        r1 = guest::cpu()->r[1];
        u32 r0_7 = frame->word_18;
        r5 = 0u;
        if (r0_7 >= 0u && r0_7 != 0) {
            do {
                u32 r0_8 = frame->word_1c;
                r4 = 0u;
                if (r0_8 >= 0u && r0_8 != 0) {
                    r6 = r5 << 0x1d >> 0x1b;  // (from the original)
                    do {
                        gptr<Local_0070ba0c_ea_1> ea_1 = gptr<Local_0070ba0c_ea_1>(frame.at(0x10).addr());  // (from the original)
                        r1 = ea_1->word_4 << 0x1e >> 0x17;  // (from the original)
                        u32 r0_9 = lsr_r(*gptr<u32>(r7 + (r1 + ((ea_1->word_0 + r4 & 0x1fu) << 2) + ((r5 & 0x1fu) >> 3) << 2) + 0x6cu), r6 & 0xff) & 0xfu;  // (from the original)
                        if (r0_9 == 0xfu) {  // (from the original)
                            r0_9 = 0u;
                        }
                        u32 r0_10 = r0_9 & 0xffu;  // (from the original)
                        if (r0_10 != 0xfu) {  // (from the original)
                            u32 r3_3 = u32(*gptr<u16>(r8 + (u32(*gptr<u8>(r7 + r0_10 + 0x58u)) << 1))) & ~0xfu | r0_10;  // (from the original)
                            if (frame->byte_20 != 0) {
                                call_001c4bf4(frame.at(0x28).addr(), frame->word_1c - r4 - 1u, r5, r3_3);  // (from the original)
                                r1 = guest::cpu()->r[1];
                            } else {
                                call_001c4bf4(frame.at(0x28).addr(), r5, r4, r3_3);  // (from the original)
                                r1 = guest::cpu()->r[1];
                            }
                        }
                        r4 += 1u;
                        guest::preempt();
                    } while (frame->word_1c > r4);
                }
                r5 += 1u;
                guest::preempt();
            } while (frame->word_18 > r5);
        }
        if (!(frame->byte_21 == 0)) {
            r5 = 0u;
            r9 = 0x180u;  // (from the original)
            do {
                r4 = 0u;
                r6 = r5 << 0x1d >> 0x1b;  // (from the original)
                do {
                    r1 = r5 & 0x1fu;  // (from the original)
                    u32 r0_13 = lsr_r(*gptr<u32>(r7 + (r9 + ((frame->word_24 + r4 & 0x1fu) << 2) + (r1 >> 3) << 2) + 0x6cu), r6 & 0xff) & 0xfu;  // (from the original)
                    if (r0_13 == 0xfu) {  // (from the original)
                        r0_13 = 0u;
                    }
                    u32 r0_14 = r0_13 & 0xffu;  // (from the original)
                    if (r0_14 != 0xfu) {  // (from the original)
                        u32 r3_4 = u32(*gptr<u16>(r8 + (u32(*gptr<u8>(r7 + r0_14 + 0x58u)) << 1))) & ~0xfu | r0_14;  // (from the original)
                        call_001c4bf4(frame.at(0x28).addr(), r5, r4 + 0x20u, r3_4);  // (from the original)
                        r1 = guest::cpu()->r[1];
                    }
                    r4 += 1u;
                    guest::preempt();
                } while (s32(r4) < 0x10);  // (from the original)
                r5 += 1u;
                guest::preempt();
            } while (s32(r5) < 0x20);  // (from the original)
        }
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0070ba0c
GUEST_EXPORT_FRAMED(0x0070ba0c, d_0070ba0c::f_0070ba0c, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_0070bcdc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070bcdc {


u32 f_0070bcdc(u32 r0, u32 r1) {
    if (r1 == 0xfu) {  // (from the original)
        return 0xfu;  // (from the original)
    }
    return u32(*gptr<u16>((u32(*gptr<u8>(r0 + r1 + 0x58u)) << 1) + 0x95c010u)) & ~0xfu | r1;  // (from the original)
}

}  // namespace d_0070bcdc
GUEST_EXPORT(0x0070bcdc, d_0070bcdc::f_0070bcdc);

// f_0070bd0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070bd0c {

struct __attribute__((packed)) Object_0070bd0c_0 {
    u8 unknown_0[0x69];  // (not used here)
    u8 byte_69;
};
GUEST_OFFSET(Object_0070bd0c_0, byte_69, 0x69);


u32 f_0070bd0c(gptr<Object_0070bd0c_0> arg0) {
    u32 r0_1 = arg0->byte_69;
    u32 r1_1 = r0_1 - 6u;
    if (r1_1 >= 2u) {
        r0_1 = 0xbu;  // (from the original)
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0070bd0c
GUEST_EXPORT(0x0070bd0c, d_0070bd0c::f_0070bd0c);

// f_0070bd20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070bd20 {

struct __attribute__((packed)) Object_0070bd20_0 {
    u8 unknown_0[0x69];  // (not used here)
    u8 byte_69;
};
GUEST_OFFSET(Object_0070bd20_0, byte_69, 0x69);


u32 f_0070bd20(gptr<Object_0070bd20_0> arg0) {
    u32 r0_1 = arg0->byte_69;
    if (r0_1 >= 6u) {
        r0_1 = 0xau;  // (from the original)
    }
    return r0_1;
}

}  // namespace d_0070bd20
GUEST_EXPORT(0x0070bd20, d_0070bd20::f_0070bd20);

// f_0070bd48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070bd48 {

inline guest::global<u32, 0x00aaf14c> global_00aaf14c;
inline constexpr guest::Function<0x002fe940, u32(u32, u32, u32, u32)> call_002fe940;

u32 f_0070bd48(u32 r0) {
    u32 r2_1 = *global_00aaf14c;
    if (r2_1 == 0) {
        guest::cpu()->r[1] = 0xaaef18u;  // (from the original)
        return 0u;
    }
    return call_002fe940(r2_1 + 0x55a6u, r0 + 0x2au, r2_1, guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0070bd48
GUEST_EXPORT(0x0070bd48, d_0070bd48::f_0070bd48);

// f_0070bd74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070bd74 {

struct __attribute__((packed)) Object_0070bd74_0 {
    u8 unknown_0[0x69];  // (not used here)
    u8 byte_69;
};
GUEST_OFFSET(Object_0070bd74_0, byte_69, 0x69);

inline constexpr guest::Function<0x001c4bc8, u32(u32, u32, u32, u32)> call_001c4bc8;
inline constexpr guest::Function<0x001c4c14, u32(u32, u32, u32, u32)> call_001c4c14;

struct __attribute__((packed)) Frame_0070bd74 {
    u8 unknown_0[0x4];  // (not read or written by name)
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0xc];  // (not read or written by name)
    u32 word_18;
    u8 unknown_1c[0x8];  // (not read or written by name)
    u32 word_24;
    u8 unknown_28[0x14];  // (not read or written by name)
    u32 word_3c;
    u8 unknown_40[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0070bd74, word_4, 0x4);
GUEST_OFFSET(Frame_0070bd74, word_8, 0x8);
GUEST_OFFSET(Frame_0070bd74, word_18, 0x18);
GUEST_OFFSET(Frame_0070bd74, word_24, 0x24);
GUEST_OFFSET(Frame_0070bd74, word_3c, 0x3c);
GUEST_SIZE(Frame_0070bd74, 0x44);

void f_0070bd74(gptr<Object_0070bd74_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0070bd74> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r11 = guest::cpu()->r[11];
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        return;
    }
    u32 r5 = r0;
    u32 r8 = 0x10u;  // (from the original)
    u32 r0_1 = arg0->byte_69;
    frame->word_24 = u32(!(r0_1 >= 0xcu || r0_1 >= 9u));  // (from the original)
    frame->word_18 = r2 == 0 ? 4u : 1u;
    call_001c4c14(frame.at(0x30).addr(), r1, r2, r3);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    u32 r0_3 = frame->word_18;
    u32 zf_1 = r0_3 == 0;
    u32 cf_1 = r0_3 >= 0u;
    if (r0_3 >= 0u && r0_3 != 0) {
        r11 = 0x95c010u;  // (from the original)
    }
    r0 = 0u;
    frame->word_8 = r0;
    if (!!cf_1 && !zf_1) {
        do {
            u32 r10 = r0 << 5;
            u32 r9 = 0u;
            frame->word_3c = r0 * frame->word_24 << 0x1e >> 0x17;  // (from the original)
            do {
                u32 r4 = 0u;
                u32 r7 = frame->word_3c + ((r9 & 0x1fu) << 2);  // (from the original)
                frame->word_4 = r9 + r10;
                do {
                    u32 r2_1 = frame->word_4;
                    u32 r6_1 = r4 << 0x19 >> 0x18;  // (from the original)
                    u32 r0_4 = r6_1 & 0x1fu;  // (from the original)
                    u32 r0_5 = lsr_r(*gptr<u32>(r5 + (r7 + (r0_4 >> 3) << 2) + 0x6cu), r0_4 << 0x1d >> 0x1b & 0xff) & 0xfu;  // (from the original)
                    if (r0_5 == 0xfu) {  // (from the original)
                        r0_5 = 0u;
                    }
                    u32 r3_1 = *gptr<u16>(r11 + (u32(*gptr<u8>(r0_5 + r5 + 0x58u)) << 1));  // (from the original)
                    call_001c4bc8(frame.at(0x30).addr(), r6_1, r2_1, r3_1);  // (from the original)
                    u32 r0_7 = r6_1 + 1u & 0x1fu;  // (from the original)
                    u32 r2_2 = frame->word_4;
                    u32 r0_8 = lsr_r(*gptr<u32>(r5 + (r7 + (r0_7 >> 3) << 2) + 0x6cu), r0_7 << 0x1d >> 0x1b & 0xff) & 0xfu;  // (from the original)
                    if (r0_8 == 0xfu) {  // (from the original)
                        r0_8 = 0u;
                    }
                    u32 r3_2 = *gptr<u16>(r11 + (u32(*gptr<u8>(r0_8 + r5 + 0x58u)) << 1));  // (from the original)
                    call_001c4bc8(frame.at(0x30).addr(), r6_1 + 1u, r2_2, r3_2);  // (from the original)
                    r4 += 1u;
                    guest::preempt();
                } while (r4 < r8);
                r9 += 1u;
                guest::preempt();
            } while (r9 < 0x20u);  // (from the original)
            r1_1 = frame->word_18;
            r0 = frame->word_8 + 1u;
            frame->word_8 = r0;
            guest::preempt();
        } while (r0 < r1_1);
    }
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_0070bd74
GUEST_EXPORT_FRAMED(0x0070bd74, d_0070bd74::f_0070bd74, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_0070bf30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070bf30 {

struct __attribute__((packed)) Local_0070bf30_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0070bf30_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0070bf30_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0070bf30_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_0070bf30_ea_1, word_c, 0xc);

struct __attribute__((packed)) Local_0070bf30_ea_5 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0070bf30_ea_5, word_0, 0x0);
GUEST_OFFSET(Local_0070bf30_ea_5, word_4, 0x4);
GUEST_OFFSET(Local_0070bf30_ea_5, word_8, 0x8);
GUEST_OFFSET(Local_0070bf30_ea_5, word_c, 0xc);


u32 f_0070bf30(u32 r0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 res_1 = 0;
    for (;;) {
        u32 r1 = 0x2eu;  // (from the original)
        if (!(1)) {
            break;
        }
        gptr<Local_0070bf30_ea_1> ea_1 = gptr<Local_0070bf30_ea_1>(frame.at(0).addr());
        ea_1->word_0 = r4;
        ea_1->word_4 = r5;
        ea_1->word_8 = r6;
        ea_1->word_c = r7;
        r6 = 0x9752c1u;  // (from the original)
        if (*gptr<u8>(r6) == 0) {
            r5 = 0xedb88320u;  // (from the original)
            r7 = 0xae4e44u;  // (from the original)
            u32 r12 = 0u;
            do {
                r2 = r12;
                r4 = 4u;
                do {
                    u32 r3_1 = (r2 & 1u) == 0 ? r2 >> 1 : r5 ^ r2 >> 1;
                    r2 = (r3_1 & 1u) == 0 ? r3_1 >> 1 : r5 ^ r3_1 >> 1;
                    r4 -= 1u;
                    guest::preempt();
                } while (r4 != 0);
                *gptr<u32>(r7 + (r12 << 2)) = r2;
                r12 += 1u;
                guest::preempt();
            } while (r12 < 0x100u);  // (from the original)
            *gptr<u8>(r6) = 1;
        }
        u32 r3 = 0xae4e44u;  // (from the original)
        r2 = ~0u;
        if (r1 != 0) {
            r0 -= 1u;
            if ((r1 & 1u) != 0) {
                u32 ea_2 = r0 + 1u;
                r0 = ea_2;
                r2 = *gptr<u32>(r3 + (((u32(*gptr<u8>(ea_2)) ^ r2) & 0xffu) << 2)) ^ r2 >> 8;  // (from the original)
            }
            r1 >>= 1;
            if (r1 != 0) {
                do {
                    res_1 = r1 - 1u;
                    r1 = res_1;
                    u32 r4_1 = (u32(*gptr<u8>(r0 + 1u)) ^ r2) & 0xffu;  // (from the original)
                    u32 ea_4 = r0 + 2u;
                    r0 = ea_4;
                    u32 r2_1 = *gptr<u32>(r3 + (r4_1 << 2)) ^ r2 >> 8;
                    r2 = *gptr<u32>(r3 + (((u32(*gptr<u8>(ea_4)) ^ r2_1) & 0xffu) << 2)) ^ r2_1 >> 8;  // (from the original)
                    guest::preempt();
                } while (res_1 != 0);
            }
        }
        gptr<Local_0070bf30_ea_5> ea_5 = gptr<Local_0070bf30_ea_5>(frame.at(0).addr());
        u32 r4_2 = ea_5->word_0;
        u32 r5_1 = ea_5->word_4;
        u32 r6_1 = ea_5->word_8;
        u32 r7_1 = ea_5->word_c;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4_2;
        guest::cpu()->r[5] = r5_1;
        guest::cpu()->r[6] = r6_1;
        guest::cpu()->r[7] = r7_1;
        return ~r2;
        guest::preempt();
    }
}

}  // namespace d_0070bf30
GUEST_EXPORT(0x0070bf30, d_0070bf30::f_0070bf30);

// f_0070c188: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070c188 {

struct __attribute__((packed)) Object_0070c188_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_0070c188_0, byte_0, 0x0);


u32 f_0070c188(gptr<Object_0070c188_0> arg0) {
    return u32(s8(arg0->byte_0) >> 0x1f) + 1u;  // (from the original)
}

}  // namespace d_0070c188
GUEST_EXPORT(0x0070c188, d_0070c188::f_0070c188);

// f_0070c23c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070c23c {

inline constexpr u32 vtable_script__WordCPtrSv = 0x00908b9cu;
inline constexpr guest::Function<0x005fdf68, u32(u32, u32, u32)> call_005fdf68;

u32 f_0070c23c(gptr<script__WordCPtrSv> arg0, u32 r1) {
    call_005fdf68(arg0.addr(), r1, 0x11u);  // (from the original)
    arg0->word_0 = vtable_script__WordCPtrSv;
    guest::cpu()->r[1] = 0x908b9cu;  // (from the original)
    return arg0.addr();
}

}  // namespace d_0070c23c
GUEST_EXPORT_FRAMED(0x0070c23c, d_0070c23c::f_0070c23c, 0x4010);  // pushes {r4, lr} first, as the original

// f_0070c258: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070c258 {

struct __attribute__((packed)) Local_0070c258_r3_1 {
    u8 unknown_0[0x1];  // (not used here)
    u8 byte_1;
    u8 unknown_2[0x1];  // (not used here)
    u8 byte_3;
};
GUEST_OFFSET(Local_0070c258_r3_1, byte_1, 0x1);
GUEST_OFFSET(Local_0070c258_r3_1, byte_3, 0x3);


u32 f_0070c258(u32 r0_unused, u32 r1) {
    u32 r2 = 0x88f984u;  // (from the original)
    u32 r0 = 0u;
    do {
        gptr<Local_0070c258_r3_1> r3_1 = gptr<Local_0070c258_r3_1>(r2 + (r0 << 1));
        if (u32(s8(r3_1->byte_1)) == r1) {
            return *gptr<u8>(r2 + (r0 << 1));
        }
        if (u32(s8(r3_1->byte_3)) == r1) {
            return *gptr<u8>(r2 + (r0 << 1) + 2u);
        }
        r0 += 2u;
        guest::preempt();
    } while (s32(r0) < 0x12);  // (from the original)
    return 0xfcu;  // (from the original)
}

}  // namespace d_0070c258
GUEST_EXPORT(0x0070c258, d_0070c258::f_0070c258);

// f_0070c2a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070c2a8 {

struct __attribute__((packed)) Object_0070c2a8_0 {
    u8 unknown_0[0xd2];  // (not used here)
    u8 byte_d2;
};
GUEST_OFFSET(Object_0070c2a8_0, byte_d2, 0xd2);


u32 f_0070c2a8(gptr<Object_0070c2a8_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2_1 = arg0->byte_d2;
    u32 res_1 = r2_1 - r1;
    u32 vf_1 = ((r2_1 ^ r1) & (r2_1 ^ res_1)) >> 0x1f;  // (from the original)
    if (res_1 != 0 && s32(r2_1) >= s32(r1)) {
        r1 = r1 * 3u;
        r0 += (r1 << 1);
    }
    if (res_1 == 0 || res_1 >> 0x1f != vf_1) {  // (from the original)
        r0 = 0u;
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0070c2a8
GUEST_EXPORT(0x0070c2a8, d_0070c2a8::f_0070c2a8);

// f_0070d7e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070d7e4 {

struct __attribute__((packed)) Object_0070d7e4_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_0070d7e4_0, word_0, 0x0);
GUEST_OFFSET(Object_0070d7e4_0, word_4, 0x4);

struct __attribute__((packed)) Object_0070d7e4_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_0070d7e4_1, word_0, 0x0);
GUEST_OFFSET(Object_0070d7e4_1, word_4, 0x4);

inline constexpr guest::Function<0x006a6c78, u32(u32, u32, u32, u32)> call_006a6c78;

struct __attribute__((packed)) Frame_0070d7e4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Frame_0070d7e4, word_0, 0x0);
GUEST_OFFSET(Frame_0070d7e4, word_4, 0x4);
GUEST_SIZE(Frame_0070d7e4, 0x8);

u32 f_0070d7e4(gptr<Object_0070d7e4_0> arg0, gptr<Object_0070d7e4_1> arg1) {
    guest::StackFrameOf<Frame_0070d7e4> frame;  // the original's stack frame
    frame->word_0 = 0;
    frame->word_4 = 0;
    call_006a6c78(frame.at(0).addr(), frame.at(4).addr(), arg1->word_0, arg1->word_4);
    u32 r1_2 = frame->word_0;
    if (arg0->word_0 != r1_2) {
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    u32 r1_3 = frame->word_4;
    if (arg0->word_4 == r1_3) {
        guest::cpu()->r[1] = r1_3;
        return 1u;
    }
    guest::cpu()->r[1] = r1_3;
    return 0u;
}

}  // namespace d_0070d7e4
GUEST_EXPORT_FRAMED(0x0070d7e4, d_0070d7e4::f_0070d7e4, 0x4010);  // pushes {r4, lr} first, as the original

// f_0070d904: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070d904 {

struct __attribute__((packed)) Object_0070d904_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0070d904_0, word_0, 0x0);

inline constexpr guest::Function<0x00757aa0, u32(u32, u32, u32, u32)> call_00757aa0;

u32 f_0070d904(gptr<Object_0070d904_0> arg0, u32 r1) {
    u32 r0_1 = call_00757aa0(arg0.addr(), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = arg0->word_0;
    u32 r0_2 = *gptr<u16>(r1_1 + (r0_1 << 1));
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_0070d904
GUEST_EXPORT_FRAMED(0x0070d904, d_0070d904::f_0070d904, 0x4010);  // pushes {r4, lr} first, as the original

// f_0070e484: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070e484 {

struct __attribute__((packed)) Object_0070e484_0 {
    u8 unknown_0[0xe];  // (not used here)
    u8 byte_e;
};
GUEST_OFFSET(Object_0070e484_0, byte_e, 0xe);


u32 f_0070e484(gptr<Object_0070e484_0> arg0) {
    return u32(arg0->byte_e) >> 4u & 3u;
}

}  // namespace d_0070e484
GUEST_EXPORT(0x0070e484, d_0070e484::f_0070e484);

// f_0070e494: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070e494 {

struct __attribute__((packed)) Object_0070e494_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_0070e494_0, word_8, 0x8);


u32 f_0070e494(gptr<Object_0070e494_0> arg0) {
    return arg0->word_8 >> 0x1e;  // (from the original)
}

}  // namespace d_0070e494
GUEST_EXPORT(0x0070e494, d_0070e494::f_0070e494);

// f_0070e4a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070e4a0 {

struct __attribute__((packed)) Object_0070e4a0_0 {
    u8 unknown_0[0xc];  // (not used here)
    u16 half_c;
};
GUEST_OFFSET(Object_0070e4a0_0, half_c, 0xc);


u32 f_0070e4a0(gptr<Object_0070e4a0_0> arg0) {
    return (u32(arg0->half_c) & 0x8000u) >> 0xf;  // (from the original)
}

}  // namespace d_0070e4a0
GUEST_EXPORT(0x0070e4a0, d_0070e4a0::f_0070e4a0);

// f_0070e4e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070e4e4 {

struct __attribute__((packed)) Object_0070e4e4_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_0070e4e4_0, word_8, 0x8);


u32 f_0070e4e4(gptr<Object_0070e4e4_0> arg0) {
    return arg0->word_8 >> 0x17u & 0xfu;  // (from the original)
}

}  // namespace d_0070e4e4
GUEST_EXPORT(0x0070e4e4, d_0070e4e4::f_0070e4e4);

// f_0070e6c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070e6c0 {

inline constexpr guest::Function<0x002fcb34, u32(u32)> call_002fcb34;
inline constexpr guest::Function<0x0071a844, u32(u32, u32)> call_0071a844;

u32 f_0070e6c0(u32 r0, u32 r1) {
    if (r1 != 0x123u) {  // (from the original)
        return 0u;
    }
    u32 r0_2 = call_0071a844(r0 + 0x200u, r1);  // (from the original)
    u32 r0_3 = call_002fcb34(r0_2);
    if (r0_3 == 0x14u) {  // (from the original)
        return 1u;
    }
    return 0u;
}

}  // namespace d_0070e6c0
GUEST_EXPORT_FRAMED(0x0070e6c0, d_0070e6c0::f_0070e6c0, 0x4010);  // pushes {r4, lr} first, as the original

// f_0070e6f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070e6f0 {

inline constexpr guest::Function<0x002fcb34, u32(u32)> call_002fcb34;
inline constexpr guest::Function<0x0030306c, u32(u32)> call_0030306c;
inline constexpr guest::Function<0x0071a3a8, u32(u32)> call_0071a3a8;
inline constexpr guest::Function<0x0071a868, u32(u32, u32, u32, u32)> call_0071a868;
inline constexpr guest::Function<0x0076a4bc, u32(u32)> call_0076a4bc;

u32 f_0070e6f0(u32 r0) {
    u32 r0_2 = call_0071a868(r0 + 0x200u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_3 = call_0076a4bc(r0_2);
    u32 zf_1 = r0_3 == 0;
    if (!zf_1) {
        u32 r0_5 = call_0071a868(r0 + 0x200u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        u32 r0_6 = call_0030306c(r0_5);
        return r0_6 == 0 ? r0_6 : 1u;
    }
    u32 r0_7 = call_0071a3a8(r0 + 0x200u);  // (from the original)
    u32 r0_8 = call_002fcb34(r0_7);
    if (r0_8 != 9u) {
        return 1u;
    }
    u32 r0_10 = call_0071a3a8(r0 + 0x200u);  // (from the original)
    u32 r0_11 = call_0030306c(r0_10);
    return r0_11 == 0 ? r0_11 : 1u;
}

}  // namespace d_0070e6f0
GUEST_EXPORT_FRAMED(0x0070e6f0, d_0070e6f0::f_0070e6f0, 0x4010);  // pushes {r4, lr} first, as the original

// f_0070ead8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070ead8 {

struct __attribute__((packed)) Object_0070ead8_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_0070ead8_0, word_c, 0xc);


u32 f_0070ead8(gptr<Object_0070ead8_0> arg0) {
    u32 r0_1 = arg0->word_c;
    if (r0_1 == 3u || r0_1 == 2u) {
        return 1u;
    }
    return r0_1 == 4u;
}

}  // namespace d_0070ead8
GUEST_EXPORT(0x0070ead8, d_0070ead8::f_0070ead8);

// f_0070eafc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070eafc {


u32 f_0070eafc(u32 r0_unused, u32 r1) {
    return r1 >= 0x5eu ? 0x10002ccu : r1 + 0x10002ccu;  // (from the original)
}

}  // namespace d_0070eafc
GUEST_EXPORT(0x0070eafc, d_0070eafc::f_0070eafc);

// f_0070eb14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070eb14 {


u32 f_0070eb14(u32 r0_unused, u32 r1) {
    if (r1 >= 0x5eu) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return 0x1e5fu;  // (from the original)
    }
    u32 r0_2 = *gptr<u32>(((r1 * 5u) << 2) + 0x83a980u + 8u);  // (from the original)
    guest::cpu()->r[1] = 0x83a980u;  // (from the original)
    return r0_2;
}

}  // namespace d_0070eb14
GUEST_EXPORT(0x0070eb14, d_0070eb14::f_0070eb14);

// f_0070eb3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070eb3c {


u32 f_0070eb3c(u32 r0_unused, u32 r1) {
    if (r1 >= 0x5eu) {  // (from the original)
        return 2u;
    }
    return *gptr<u8>(r1 * 0x14u + 0x83a980u + 6u);  // (from the original)
}

}  // namespace d_0070eb3c
GUEST_EXPORT(0x0070eb3c, d_0070eb3c::f_0070eb3c);

// f_0070eb60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070eb60 {


u32 f_0070eb60(u32 r0, u32 r1) {
    u32 cf_1 = r1 >= 0x5eu;  // (from the original)
    if (r1 > 0x5eu) {  // (from the original)
        r0 = 0x28u;  // (from the original)
    }
    if (r1 == 0x5eu) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return 0x24u;  // (from the original)
    }
    if (cf_1) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    u32 r0_2 = *gptr<u8>(((r1 * 5u) << 2) + 0x83a980u + 0x11u);  // (from the original)
    guest::cpu()->r[1] = 0x83a980u;  // (from the original)
    return r0_2;
}

}  // namespace d_0070eb60
GUEST_EXPORT(0x0070eb60, d_0070eb60::f_0070eb60);

// f_0070eb8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070eb8c {


u32 f_0070eb8c(u32 r0, u32 r1) {
    u32 cf_1 = r1 >= 0x5eu;  // (from the original)
    if (r1 > 0x5eu) {  // (from the original)
        r0 = 0x20u;  // (from the original)
    }
    if (r1 == 0x5eu) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return 0x10u;  // (from the original)
    }
    if (cf_1) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    u32 r0_2 = *gptr<u8>(((r1 * 5u) << 2) + 0x83a980u + 0x10u);  // (from the original)
    guest::cpu()->r[1] = 0x83a980u;  // (from the original)
    return r0_2;
}

}  // namespace d_0070eb8c
GUEST_EXPORT(0x0070eb8c, d_0070eb8c::f_0070eb8c);

// f_0070ebb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070ebb8 {


u32 f_0070ebb8(u32 r0_unused, u32 r1) {
    if (r1 >= 0x5eu) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return 0x10u;  // (from the original)
    }
    u32 r0_2 = *gptr<u8>(((r1 * 5u) << 2) + 0x83a980u + 0x12u);  // (from the original)
    guest::cpu()->r[1] = 0x83a980u;  // (from the original)
    return r0_2;
}

}  // namespace d_0070ebb8
GUEST_EXPORT(0x0070ebb8, d_0070ebb8::f_0070ebb8);

// f_0070eca8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070eca8 {


u32 f_0070eca8(u32 r0, u32 r1) {
    u32 cf_1 = r1 >= 0x5eu;  // (from the original)
    if (r1 > 0x5eu) {  // (from the original)
        r0 = 3u;
    }
    if (r1 == 0x5eu) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return 2u;
    }
    if (cf_1) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    u32 r0_2 = *gptr<u8>(((r1 * 5u) << 2) + 0x83a980u + 5u);  // (from the original)
    guest::cpu()->r[1] = 0x83a980u;  // (from the original)
    return r0_2;
}

}  // namespace d_0070eca8
GUEST_EXPORT(0x0070eca8, d_0070eca8::f_0070eca8);

// f_0070ecd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070ecd4 {


u32 f_0070ecd4(u32 r0_unused, u32 r1) {
    if (r1 == 0x5au) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return 4u;
    }
    if (r1 < 0x5eu) {  // (from the original)
        u32 r0_2 = *gptr<u8>(((r1 * 5u) << 2) + 0x83a980u + 4u);  // (from the original)
        guest::cpu()->r[1] = 0x83a980u;  // (from the original)
        return r0_2;
    }
    guest::cpu()->r[1] = r1;
    return 4u;
}

}  // namespace d_0070ecd4
GUEST_EXPORT(0x0070ecd4, d_0070ecd4::f_0070ecd4);

// f_0070ed04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070ed04 {


u32 f_0070ed04(u32 r0_unused, u32 r1) {
    if (r1 >= 0x5bu) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    u32 r0_2 = *gptr<u32>(((r1 * 7u) << 2) + 0x83b4c0u + 8u);  // (from the original)
    guest::cpu()->r[1] = 0x83b4c0u;  // (from the original)
    return r0_2;
}

}  // namespace d_0070ed04
GUEST_EXPORT(0x0070ed04, d_0070ed04::f_0070ed04);

// f_0070ed28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070ed28 {


void f_0070ed28(u32 r0_unused, u32 r1) {
    if (r1 >= 0x5bu) {  // (from the original)
        float S0_1 = 1.0f;
        guest::cpu()->s[0] = S0_1;
        return;
    }
    float S0_2 = std::bit_cast<float>(*gptr<u32>(r1 * 0x1cu + 0x83b4c0u + 0xcu));  // (from the original)
    guest::cpu()->s[0] = S0_2;
}

}  // namespace d_0070ed28
GUEST_EXPORT(0x0070ed28, d_0070ed28::f_0070ed28);

// f_0070ed68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070ed68 {

struct __attribute__((packed)) Local_0070ed68_r2_1 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_0070ed68_r2_1, word_10, 0x10);
GUEST_OFFSET(Local_0070ed68_r2_1, word_14, 0x14);

inline constexpr guest::Function<0x002f86c0, u32(u32, u32)> call_002f86c0;

u32 f_0070ed68(u32 r0_unused, u32 r1, u32 r2) {
    if (r1 >= 0x5bu) {  // (from the original)
        return r2;
    }
    gptr<Local_0070ed68_r2_1> r2_1 = gptr<Local_0070ed68_r2_1>(r1 * 0x1cu + 0x83b4c0u);  // (from the original)
    u32 r1_1 = r2_1->word_14;
    if (r2 < r1_1) {
        return r2;
    }
    u32 r4_1 = r2_1->word_10;
    call_002f86c0(r2 - r4_1, r1_1 - r4_1);
    return guest::cpu()->r[1] + r4_1;
}

}  // namespace d_0070ed68
GUEST_EXPORT_FRAMED(0x0070ed68, d_0070ed68::f_0070ed68, 0x4010);  // pushes {r4, lr} first, as the original

// f_0070edac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070edac {


u32 f_0070edac(u32 r0_unused, u32 r1) {
    if (r1 >= 0x5bu) {  // (from the original)
        return 0x1020u;  // (from the original)
    }
    return *gptr<u32>(r1 * 0x1cu + 0x83b4c0u + 0x18u);  // (from the original)
}

}  // namespace d_0070edac
GUEST_EXPORT(0x0070edac, d_0070edac::f_0070edac);

// f_0070edd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070edd4 {


u32 f_0070edd4(u32 r0_unused, u32 r1) {
    if (r1 >= 0x5bu) {  // (from the original)
        return 0u;
    }
    return *gptr<u8>(r1 * 0x1cu + 0x83b4c0u + 4u);  // (from the original)
}

}  // namespace d_0070edd4
GUEST_EXPORT(0x0070edd4, d_0070edd4::f_0070edd4);

// f_0070edf8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070edf8 {


u32 f_0070edf8(u32 r0_unused, u32 r1) {
    u32 r0_1 = r1 + 0xfefffd8fu;  // (from the original)
    if (r0_1 >= 0x5bu) {  // (from the original)
        r0_1 = ~0u;
    }
    return r0_1;
}

}  // namespace d_0070edf8
GUEST_EXPORT(0x0070edf8, d_0070edf8::f_0070edf8);

// f_0070ee10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070ee10 {


u32 f_0070ee10(u32 r0_unused, u32 r1) {
    return r1 >= 0x5bu ? 0x83b4c0u : r1 * 0x1cu + 0x83b4c0u;  // (from the original)
}

}  // namespace d_0070ee10
GUEST_EXPORT(0x0070ee10, d_0070ee10::f_0070ee10);

// f_0070eed0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070eed0 {


u32 f_0070eed0(u32 r0, u32 r1) {
    u32 r1_1 = s16(r1) * s16(0x371u);  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0 + (r1_1 << 3) + 0x2058u;  // (from the original)
}

}  // namespace d_0070eed0
GUEST_EXPORT(0x0070eed0, d_0070eed0::f_0070eed0);

// f_0070eeec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070eeec {


u32 f_0070eeec(u32 r0, u32 r1) {
    u32 r1_1 = r1 * 0xfu * 3u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0 + (r1_1 << 5) + 0x8e78u;  // (from the original)
}

}  // namespace d_0070eeec
GUEST_EXPORT(0x0070eeec, d_0070eeec::f_0070eeec);

// f_0070ef54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070ef54 {

inline constexpr guest::Function<0x003193e8, u32(u32, u32, u32, u32)> call_003193e8;
inline constexpr guest::Function<0x0070f624, u32(u32, u32, u32, u32)> call_0070f624;
inline constexpr guest::Function<0x0071c0d0, u32(u32)> call_0071c0d0;
inline constexpr guest::Function<0x0071fbec, u32(u32)> call_0071fbec;

u32 f_0070ef54(u32 r0, u32 r1, u32 r2, u32 r3) {
    call_0070f624(r0, r1, r2, r3);
    call_0071fbec(r0 + 0x24u);  // (from the original)
    call_0071c0d0(r0 + 0xc0cu);  // (from the original)
    u32 r3_2 = ~0u;
    u32 r0_4 = call_003193e8(r0 + 0x2058u, 0x16188u, r3_2, r3_2);  // (from the original)
    *gptr<u32>(r0 + 0x2054u) = r0_4;  // (from the original)
    guest::cpu()->r[1] = 0x2054u;  // (from the original)
    return r0_4;
}

}  // namespace d_0070ef54
GUEST_EXPORT_FRAMED(0x0070ef54, d_0070ef54::f_0070ef54, 0x4010);  // pushes {r4, lr} first, as the original

// f_0070efa0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070efa0 {

struct __attribute__((packed)) Object_0070efa0_0 {
    u8 unknown_0[0x2054];  // (not used here)
    u32 word_2054;
};
GUEST_OFFSET(Object_0070efa0_0, word_2054, 0x2054);

inline constexpr guest::Function<0x003193e8, u32(u32, u32, u32, u32)> call_003193e8;
inline constexpr guest::Function<0x0070f648, u32(u32, u32, u32, u32)> call_0070f648;
inline constexpr guest::Function<0x0071c0f4, u32(u32)> call_0071c0f4;
inline constexpr guest::Function<0x0071fc14, u32(u32)> call_0071fc14;

u32 f_0070efa0(gptr<Object_0070efa0_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = call_0070f648(arg0.addr(), r1, r2, r3);
    if (r0_1 == 0) {
        return r0_1;
    }
    u32 r0_3 = call_0071fc14(arg0.addr() + 0x24u);  // (from the original)
    if (r0_3 == 0) {
        return r0_3;
    }
    u32 r0_5 = call_0071c0f4(arg0.addr() + 0xc0cu);  // (from the original)
    if (r0_5 == 0) {
        return r0_5;
    }
    u32 r3_2 = ~0u;
    u32 r0_7 = call_003193e8(arg0.addr() + 0x2058u, 0x16188u, r3_2, r3_2);  // (from the original)
    u32 r1_4 = arg0->word_2054;
    guest::cpu()->r[1] = r1_4;
    return r1_4 == r0_7;
}

}  // namespace d_0070efa0
GUEST_EXPORT_FRAMED(0x0070efa0, d_0070efa0::f_0070efa0, 0x4010);  // pushes {r4, lr} first, as the original

// f_0070f534: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070f534 {

struct __attribute__((packed)) Object_0070f534_0 {
    u8 unknown_0[0x22];  // (not used here)
    u16 half_22;
};
GUEST_OFFSET(Object_0070f534_0, half_22, 0x22);


u32 f_0070f534(gptr<Object_0070f534_0> arg0, u32 r1) {
    if (r1 >= 4u) {
        return 0u;
    }
    u32 r0_1 = u32(arg0->half_22) & lsl_r(0x1000u, r1 & 0xff);  // (from the original)
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    return r0_1;
}

}  // namespace d_0070f534
GUEST_EXPORT(0x0070f534, d_0070f534::f_0070f534);

// f_0070f56c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070f56c {

struct __attribute__((packed)) Object_0070f56c_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x16];  // (not used here)
    u16 half_22;
};
GUEST_OFFSET(Object_0070f56c_0, word_4, 0x4);
GUEST_OFFSET(Object_0070f56c_0, word_8, 0x8);
GUEST_OFFSET(Object_0070f56c_0, half_22, 0x22);

inline constexpr guest::Function<0x003506c8, u32(u32, u32, u32, u32)> call_003506c8;

u32 f_0070f56c(gptr<Object_0070f56c_0> arg0, u32 r1, u32 r2) {
    if ((u32(arg0->half_22) & 1u) == 0) {
        return 0u;
    }
    u32 r0_1 = call_003506c8(0x863u, r1, r2, guest::cpu()->r[3]);  // (from the original)
    if (arg0->word_8 != r0_1) {
        return 0u;
    }
    return arg0->word_4 == guest::cpu()->r[1];
}

}  // namespace d_0070f56c
GUEST_EXPORT_FRAMED(0x0070f56c, d_0070f56c::f_0070f56c, 0x4010);  // pushes {r4, lr} first, as the original

// f_0070f678: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070f678 {


u32 f_0070f678(u32 r0, u32 r1, u32 r2) {
    return *gptr<u8>(r0 + (r2 << 4) + r1);
}

}  // namespace d_0070f678
GUEST_EXPORT(0x0070f678, d_0070f678::f_0070f678);
