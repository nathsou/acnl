// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "graphics/hemisphere_light.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_006c1678: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c1678 {

inline constexpr guest::Function<0x006c00b8, u32(u32, u32, u32, u32)> call_006c00b8;

void f_006c1678(u32 r0_unused, u32 r1, u32 r2) {
    call_006c00b8(guest::cpu()->r[0], 5u, r1, r2);
}

}  // namespace d_006c1678
GUEST_EXPORT(0x006c1678, d_006c1678::f_006c1678);

// f_006c1688: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c1688 {

struct __attribute__((packed)) Object_006c1688_0 {
    u8 unknown_0[0x6d0];  // (not used here)
    u16 half_6d0;
};
GUEST_OFFSET(Object_006c1688_0, half_6d0, 0x6d0);

inline constexpr guest::Function<0x006c00b8, u32(u32, u32, u32, u32)> call_006c00b8;

u32 f_006c1688(gptr<Object_006c1688_0> arg0, u32 r1, u32 r2, u32 r3) {
    arg0->half_6d0 = u16(r3);
    return call_006c00b8(arg0.addr(), 0u, r1, r2);
}

}  // namespace d_006c1688
GUEST_EXPORT(0x006c1688, d_006c1688::f_006c1688);

// f_006c1938: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c1938 {

struct __attribute__((packed)) Object_006c1938_1 {
    u8 unknown_0[0xa8];  // (not used here)
    u32 word_a8;
};
GUEST_OFFSET(Object_006c1938_1, word_a8, 0xa8);

struct __attribute__((packed)) Local_006c1938_r0_2 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_006c1938_r0_2, float_0, 0x0);
GUEST_OFFSET(Local_006c1938_r0_2, float_4, 0x4);
GUEST_OFFSET(Local_006c1938_r0_2, float_8, 0x8);

inline constexpr guest::Function<0x0014f3cc, u32(u32, u32, u32)> call_0014f3cc;
inline constexpr guest::Function<0x0052e3ec, u32(u32, u32)> call_0052e3ec;
inline constexpr guest::Function<0x0070ab44, u32(u32, u32, u32, u32)> call_0070ab44;

struct __attribute__((packed)) Frame_006c1938 {
    u8 unknown_0[0x30];  // (not read or written by name)
    u32 word_30;
    u32 word_34;
    u32 word_38;
    u8 unknown_3c[0x1c];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006c1938, word_30, 0x30);
GUEST_OFFSET(Frame_006c1938, word_34, 0x34);
GUEST_OFFSET(Frame_006c1938, word_38, 0x38);
GUEST_SIZE(Frame_006c1938, 0x58);

u32 f_006c1938(u32 r0, gptr<Object_006c1938_1> arg1, float S0, float S1, float S2) {
    guest::StackFrameOf<Frame_006c1938> frame;  // the original's stack frame
    u32 r2_1 = arg1->word_a8;
    u32 r0_1 = call_0070ab44(arg1.addr(), frame.at(0).addr(), r2_1, 0u);
    if (r0_1 == 0) {
        return r0_1;
    }
    gptr<Local_006c1938_r0_2> r0_2 = gptr<Local_006c1938_r0_2>(frame.at(0x48).addr());  // (from the original)
    float S2_1 = 32.0f * 1.15f;
    float S1_2 = 0.0f;
    float S0_2 = 9.0f;
    r0_2->float_0 = S0_2;
    r0_2->float_4 = S1_2;
    r0_2->float_8 = S2_1;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    call_0014f3cc(frame.at(0x3c).addr(), frame.at(0).addr(), frame.at(0x48).addr());  // (from the original)
    call_0052e3ec(frame.at(0x30).addr(), frame.at(0x3c).addr());  // (from the original)
    *gptr<u32>(r0) = frame->word_30;
    *gptr<u32>(r0 + 4u) = frame->word_34;
    *gptr<u32>(r0 + 8u) = frame->word_38;
    return 1u;
}

}  // namespace d_006c1938
GUEST_EXPORT_FRAMED(0x006c1938, d_006c1938::f_006c1938, 0x4010);  // pushes {r4, lr} first, as the original

// f_006c19d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c19d0 {

struct __attribute__((packed)) Object_006c19d0_0 {
    u8 unknown_0[0x24];  // (not used here)
    u8 byte_24;
};
GUEST_OFFSET(Object_006c19d0_0, byte_24, 0x24);

struct __attribute__((packed)) Local_006c19d0_r1_4 {
    u8 unknown_0[0x64];  // (not used here)
    u16 half_64;
    u8 unknown_66[0x4];  // (not used here)
    u8 byte_6a;
};
GUEST_OFFSET(Local_006c19d0_r1_4, half_64, 0x64);
GUEST_OFFSET(Local_006c19d0_r1_4, byte_6a, 0x6a);

inline constexpr guest::Function<0x002131d4, u32(u32, u32)> call_002131d4;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> call_002fc934;
inline constexpr guest::Function<0x003117bc, u32(u32)> call_003117bc;

u32 f_006c19d0(gptr<Object_006c19d0_0> arg0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    call_002fc934(frame.at(0).addr(), arg0.addr() + ((u32(arg0->byte_24) & 1u) << 4) + 0x3cu);  // (from the original)
    u32 r0_3 = call_003117bc(frame.at(0).addr());
    u32 r1_3 = guest::cpu()->r[1];
    if (r0_3 != 0xeu) {  // (from the original)
        return 0u;
    }
    u32 r0_4 = *gptr<u32>(arg0.addr() + ((u32(arg0->byte_24) & 1u) << 2) + 0x584u);  // (from the original)
    if (r0_4 != 0) {
        r1_3 = *gptr<s8>(r0_4 + 0x166au);  // (from the original)
        if (r1_3 != 0) {
            guest::cpu()->r[1] = r1_3;
            return 1u;
        }
    }
    if (r0_4 != 0) {
        gptr<Local_006c19d0_r1_4> r1_4 = gptr<Local_006c19d0_r1_4>(r0_4 + 0x1600u);  // (from the original)
        if (r1_4->byte_6a != 0) {
            r1_3 = r1_4->half_64;
            if (r1_3 == 0) {
                guest::cpu()->r[1] = r1_3;
                return 1u;
            }
        }
        *frame.at<u16>(0) = u16(u32(*gptr<u16>(r1)));
        call_002131d4(r0_4, *frame.at<u32>(0));
        return 1u;
    }
    guest::cpu()->r[1] = r1_3;
    return 1u;
}

}  // namespace d_006c19d0
GUEST_EXPORT_FRAMED(0x006c19d0, d_006c19d0::f_006c19d0, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_006c1a8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c1a8c {

struct __attribute__((packed)) Object_006c1a8c_0 {
    u8 unknown_0[0x644];  // (not used here)
    u32 word_644;
    u32 word_648;
    u32 word_64c;
    u32 word_650;
    u32 word_654;
    u32 word_658;
    u8 unknown_65c[0x70];  // (not used here)
    u8 byte_6cc;
};
GUEST_OFFSET(Object_006c1a8c_0, word_644, 0x644);
GUEST_OFFSET(Object_006c1a8c_0, word_648, 0x648);
GUEST_OFFSET(Object_006c1a8c_0, word_64c, 0x64c);
GUEST_OFFSET(Object_006c1a8c_0, word_650, 0x650);
GUEST_OFFSET(Object_006c1a8c_0, word_654, 0x654);
GUEST_OFFSET(Object_006c1a8c_0, word_658, 0x658);
GUEST_OFFSET(Object_006c1a8c_0, byte_6cc, 0x6cc);

struct __attribute__((packed)) Object_006c1a8c_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_006c1a8c_3, word_0, 0x0);
GUEST_OFFSET(Object_006c1a8c_3, word_4, 0x4);
GUEST_OFFSET(Object_006c1a8c_3, word_8, 0x8);

struct __attribute__((packed)) Local_006c1a8c_r1_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_006c1a8c_r1_1, word_0, 0x0);
GUEST_OFFSET(Local_006c1a8c_r1_1, word_4, 0x4);
GUEST_OFFSET(Local_006c1a8c_r1_1, word_8, 0x8);

inline constexpr guest::Function<0x006c00b8, u32(u32, u32, u32, u32)> call_006c00b8;
inline constexpr guest::Function<0x006c5ef8, u32(u32, u32, u32, u32)> call_006c5ef8;

void f_006c1a8c(gptr<Object_006c1a8c_0> arg0, u32 r1, u32 r2, gptr<Object_006c1a8c_3> arg3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    gptr<Local_006c1a8c_r1_1> r1_1 = gptr<Local_006c1a8c_r1_1>(*frame.at<u32>(0x18));  // (from the original)
    float S0_1 = fabsf(std::bit_cast<float>(arg0->word_644));
    if (s32(std::bit_cast<u32>(S0_1)) <= 0x34000000) {  // (from the original)
        S0_1 = fabsf(std::bit_cast<float>(arg0->word_64c));
        if (s32(std::bit_cast<u32>(S0_1)) <= 0x34000000) {  // (from the original)
            arg0->word_644 = arg3->word_0;
            arg0->word_648 = arg3->word_4;
            arg0->word_64c = arg3->word_8;
        }
    }
    arg0->word_650 = r1_1->word_0;
    u32 r2_1 = r1_1->word_4;
    arg0->word_654 = r2_1;
    arg0->word_658 = r1_1->word_8;
    guest::cpu()->s[0] = S0_1;
    call_006c5ef8(arg0.addr() + 0x650u, 0u, r2_1, arg3.addr());  // (from the original)
    float S0_2 = guest::cpu()->s[0];
    *gptr<u32>((arg0.addr() + 0x400u) + 0x254u) = std::bit_cast<u32>(S0_2);  // (from the original)
    arg0->byte_6cc = 1;
    guest::cpu()->s[0] = S0_2;
    frame.release();
    call_006c00b8(arg0.addr(), 1u, r1, r2);
    return;
}

}  // namespace d_006c1a8c
GUEST_EXPORT(0x006c1a8c, d_006c1a8c::f_006c1a8c);

// f_006c1ea8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c1ea8 {

struct __attribute__((packed)) Object_006c1ea8_0 {
    u8 unknown_0[0x644];  // (not used here)
    u32 word_644;
    u32 word_648;
    u32 word_64c;
    u32 word_650;
    u32 word_654;
    u32 word_658;
    u8 unknown_65c[0x70];  // (not used here)
    u8 byte_6cc;
};
GUEST_OFFSET(Object_006c1ea8_0, word_644, 0x644);
GUEST_OFFSET(Object_006c1ea8_0, word_648, 0x648);
GUEST_OFFSET(Object_006c1ea8_0, word_64c, 0x64c);
GUEST_OFFSET(Object_006c1ea8_0, word_650, 0x650);
GUEST_OFFSET(Object_006c1ea8_0, word_654, 0x654);
GUEST_OFFSET(Object_006c1ea8_0, word_658, 0x658);
GUEST_OFFSET(Object_006c1ea8_0, byte_6cc, 0x6cc);

struct __attribute__((packed)) Object_006c1ea8_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_006c1ea8_3, word_0, 0x0);
GUEST_OFFSET(Object_006c1ea8_3, word_4, 0x4);
GUEST_OFFSET(Object_006c1ea8_3, word_8, 0x8);

struct __attribute__((packed)) Local_006c1ea8_r1_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_006c1ea8_r1_1, word_0, 0x0);
GUEST_OFFSET(Local_006c1ea8_r1_1, word_4, 0x4);
GUEST_OFFSET(Local_006c1ea8_r1_1, word_8, 0x8);

inline constexpr guest::Function<0x006c00b8, u32(u32, u32, u32, u32)> call_006c00b8;
inline constexpr guest::Function<0x006c5ef8, u32(u32, u32, u32, u32)> call_006c5ef8;

void f_006c1ea8(gptr<Object_006c1ea8_0> arg0, u32 r1, u32 r2, gptr<Object_006c1ea8_3> arg3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    gptr<Local_006c1ea8_r1_1> r1_1 = gptr<Local_006c1ea8_r1_1>(*frame.at<u32>(0x18));  // (from the original)
    float S0_1 = fabsf(std::bit_cast<float>(arg0->word_644));
    if (s32(std::bit_cast<u32>(S0_1)) <= 0x34000000) {  // (from the original)
        S0_1 = fabsf(std::bit_cast<float>(arg0->word_64c));
        if (s32(std::bit_cast<u32>(S0_1)) <= 0x34000000) {  // (from the original)
            arg0->word_644 = arg3->word_0;
            arg0->word_648 = arg3->word_4;
            arg0->word_64c = arg3->word_8;
        }
    }
    arg0->word_650 = r1_1->word_0;
    u32 r2_1 = r1_1->word_4;
    arg0->word_654 = r2_1;
    arg0->word_658 = r1_1->word_8;
    guest::cpu()->s[0] = S0_1;
    call_006c5ef8(arg0.addr() + 0x650u, 0u, r2_1, arg3.addr());  // (from the original)
    float S0_2 = guest::cpu()->s[0];
    *gptr<u32>((arg0.addr() + 0x400u) + 0x254u) = std::bit_cast<u32>(S0_2);  // (from the original)
    arg0->byte_6cc = 0;
    guest::cpu()->s[0] = S0_2;
    frame.release();
    call_006c00b8(arg0.addr(), 1u, r1, r2);
    return;
}

}  // namespace d_006c1ea8
GUEST_EXPORT(0x006c1ea8, d_006c1ea8::f_006c1ea8);

// f_006c2234: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c2234 {

struct __attribute__((packed)) Object_006c2234_0 {
    u8 unknown_0[0x644];  // (not used here)
    float float_644;
    float float_648;
    float float_64c;
};
GUEST_OFFSET(Object_006c2234_0, float_644, 0x644);
GUEST_OFFSET(Object_006c2234_0, float_648, 0x648);
GUEST_OFFSET(Object_006c2234_0, float_64c, 0x64c);

inline constexpr guest::Function<0x006c00b8, u32(u32, u32, u32, u32)> call_006c00b8;

u32 f_006c2234(gptr<Object_006c2234_0> arg0, u32 r1, u32 r2, gptr<Float3> arg3) {
    arg0->float_644 = arg3->v[0];
    float S0_1 = arg3->v[1];
    arg0->float_648 = S0_1;
    arg0->float_64c = arg3->v[2];
    guest::cpu()->s[0] = S0_1;
    return call_006c00b8(arg0.addr(), 7u, r1, r2);
}

}  // namespace d_006c2234
GUEST_EXPORT(0x006c2234, d_006c2234::f_006c2234);

// f_006c2268: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c2268 {

struct __attribute__((packed)) Object_006c2268_0 {
    u8 unknown_0[0x644];  // (not used here)
    float float_644;
    float float_648;
    float float_64c;
};
GUEST_OFFSET(Object_006c2268_0, float_644, 0x644);
GUEST_OFFSET(Object_006c2268_0, float_648, 0x648);
GUEST_OFFSET(Object_006c2268_0, float_64c, 0x64c);

inline constexpr guest::Function<0x006c00b8, u32(u32, u32, u32, u32)> call_006c00b8;

void f_006c2268(gptr<Object_006c2268_0> arg0, u32 r1, u32 r2, gptr<Float3> arg3) {
    arg0->float_644 = arg3->v[0];
    float S0_1 = arg3->v[1];
    arg0->float_648 = S0_1;
    arg0->float_64c = arg3->v[2];
    guest::cpu()->s[0] = S0_1;
    call_006c00b8(arg0.addr(), 4u, r1, r2);
}

}  // namespace d_006c2268
GUEST_EXPORT(0x006c2268, d_006c2268::f_006c2268);

// f_006c229c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c229c {

struct __attribute__((packed)) Object_006c229c_0 {
    u8 unknown_0[0x710];  // (not used here)
    u16 half_710;
};
GUEST_OFFSET(Object_006c229c_0, half_710, 0x710);

inline constexpr guest::Function<0x0027dc80, u32(u32, u32)> call_0027dc80;
inline constexpr guest::Function<0x006c00b8, u32(u32, u32, u32, u32)> call_006c00b8;

u32 f_006c229c(gptr<Object_006c229c_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r5_1 = *frame.at<u32>(0x10);  // (from the original)
    arg0->half_710 = u16(r3);
    u32 r0_1 = call_006c00b8(arg0.addr(), 8u, r1, r2);
    if (r5_1 != 0) {
        frame.release();
        return call_0027dc80((arg0.addr() + 0x400u) + 0x268u, 0u);  // (from the original)
    }
    return r0_1;
}

}  // namespace d_006c229c
GUEST_EXPORT(0x006c229c, d_006c229c::f_006c229c);

// f_006c2be4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c2be4 {

struct __attribute__((packed)) Object_006c2be4_0 {
    u8 unknown_0[0x6d0];  // (not used here)
    u16 half_6d0;
};
GUEST_OFFSET(Object_006c2be4_0, half_6d0, 0x6d0);

struct __attribute__((packed)) Local_006c2be4_r0_2 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_006c2be4_r0_2, float_0, 0x0);
GUEST_OFFSET(Local_006c2be4_r0_2, float_4, 0x4);
GUEST_OFFSET(Local_006c2be4_r0_2, float_8, 0x8);

struct __attribute__((packed)) Local_006c2be4_r2_1 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_006c2be4_r2_1, float_0, 0x0);
GUEST_OFFSET(Local_006c2be4_r2_1, float_4, 0x4);

struct __attribute__((packed)) Local_006c2be4_r2_2 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_006c2be4_r2_2, float_0, 0x0);
GUEST_OFFSET(Local_006c2be4_r2_2, float_4, 0x4);

struct __attribute__((packed)) Local_006c2be4_r4_1 {
    u16 half_0;
};
GUEST_OFFSET(Local_006c2be4_r4_1, half_0, 0x0);

struct __attribute__((packed)) Local_006c2be4_r5_1 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_006c2be4_r5_1, float_0, 0x0);
GUEST_OFFSET(Local_006c2be4_r5_1, float_4, 0x4);
GUEST_OFFSET(Local_006c2be4_r5_1, float_8, 0x8);

inline constexpr guest::Function<0x006bffb4, u32(u32, u32, u32, u32)> call_006bffb4;

struct __attribute__((packed)) Frame_006c2be4 {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
    u8 unknown_10[0xc];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006c2be4, float_0, 0x0);
GUEST_OFFSET(Frame_006c2be4, float_4, 0x4);
GUEST_OFFSET(Frame_006c2be4, float_8, 0x8);
GUEST_OFFSET(Frame_006c2be4, float_c, 0xc);
GUEST_SIZE(Frame_006c2be4, 0x1c);

u32 f_006c2be4(gptr<Object_006c2be4_0> arg0, u32 r1_unused, u32 r2, float S0, float S1, float S2, float S3, float S4, float S5) {
    guest::StackFrameOf<Frame_006c2be4> frame;  // the original's stack frame
    float S0_1 = 0;
    float S1_1 = 0;
    gptr<Local_006c2be4_r5_1> r5_1 = gptr<Local_006c2be4_r5_1>(arg0.addr() + 0x644u);  // (from the original)
    if (arg0->half_6d0 == 0) {
        call_006bffb4(r5_1.addr(), r2, r2, guest::cpu()->r[3]);
        S0_1 = guest::cpu()->s[0];
        S1_1 = guest::cpu()->s[1];
    } else {
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        guest::cpu()->s[3] = S3;
        guest::cpu()->s[4] = S4;
        guest::cpu()->s[5] = S5;
        call_006bffb4(frame.at(0xc).addr(), r2, r2, guest::cpu()->r[3]);  // (from the original)
        gptr<Local_006c2be4_r2_1> r2_1 = gptr<Local_006c2be4_r2_1>(r5_1.addr() + 4u);
        gptr<Local_006c2be4_r0_2> r0_2 = gptr<Local_006c2be4_r0_2>(frame.at(0).addr());
        float S1_2 = r2_1->float_0;
        float S2_1 = r2_1->float_4;
        gptr<Local_006c2be4_r2_2> r2_2 = gptr<Local_006c2be4_r2_2>(frame.at(0x10).addr());  // (from the original)
        float S1_3 = r2_2->float_0 - S1_2;
        float S2_2 = r2_2->float_4 - S2_1;
        r0_2->float_0 = frame->float_c - r5_1->float_0;
        r0_2->float_4 = S1_3;
        r0_2->float_8 = S2_2;
        float S0_2 = 1.0f / float(std::bit_cast<u32>(std::bit_cast<float>(u32(*gptr<u16>(arg0.addr() + 0x6d0u)))));  // (from the original)
        float S1_4 = frame->float_0 * S0_2;
        frame->float_0 = S1_4;
        frame->float_4 = frame->float_4 * S0_2;
        frame->float_8 = frame->float_8 * S0_2;
        r5_1->float_0 = r5_1->float_0 + S1_4;
        r5_1->float_4 = r5_1->float_4 + frame->float_4;
        S1_1 = frame->float_8;
        S0_1 = r5_1->float_8 + S1_1;
        r5_1->float_8 = S0_1;
    }
    gptr<Local_006c2be4_r4_1> r4_1 = gptr<Local_006c2be4_r4_1>(arg0.addr() + 0x6d0u);  // (from the original)
    u32 r0_3 = r4_1->half_0;
    if (r0_3 == 0) {
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return r0_3;
    }
    u32 r0_4 = r0_3 >= 1u ? r0_3 - 1u : 0u;
    r4_1->half_0 = u16(r0_4);
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return r0_4;
}

}  // namespace d_006c2be4
GUEST_EXPORT_FRAMED(0x006c2be4, d_006c2be4::f_006c2be4, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_006c3118: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c3118 {

struct __attribute__((packed)) Object_006c3118_0 {
    u8 unknown_0[0x5dc];  // (not used here)
    float float_5dc;
};
GUEST_OFFSET(Object_006c3118_0, float_5dc, 0x5dc);


void f_006c3118(gptr<Object_006c3118_0> arg0, float S0) {
    arg0->float_5dc = S0;
}

}  // namespace d_006c3118
GUEST_EXPORT(0x006c3118, d_006c3118::f_006c3118);

// f_006c3858: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c3858 {

struct __attribute__((packed)) Local_006c3858_r4_1 {
    u32 word_0;
    u8 unknown_4[0x4ac];  // (not used here)
    u32 word_4b0;
};
GUEST_OFFSET(Local_006c3858_r4_1, word_0, 0x0);
GUEST_OFFSET(Local_006c3858_r4_1, word_4b0, 0x4b0);

inline constexpr u32 vtable_ExchangeResBank_24448u__BankVramConfig_736u__4u__3824u__4u__false___ExchangeBankKeywordMyDesignFgNameEx__SvFgName__Name_32766___item__ResLoader__2u__false_ = 0x008f09b8u;
inline constexpr u32 vtable_ExchangeModelBank_24448u__BankVramConfig_736u__4u__3824u__4u__false___ExchangeBankKeywordMyDesignFgNameEx__SvFgName__Name_32766___item__ResLoader__2u__false_ = 0x008f28a8u;
inline constexpr u32 vtable_ExchangeModelBank_24448u__BankVramConfig_736u__4u__3824u__4u__false___ExchangeBankKeywordMyDesignFgNameEx__SvFgName__Name_32766___item__ResLoader__2u__false__at_4b0 = 0x008f28dcu;
inline constexpr u32 vtable_ToolBank = 0x008f8e88u;
inline constexpr u32 vtable_ToolBank_at_4b0 = 0x008f8ebcu;
inline constexpr guest::Function<0x002e6944, u32(u32)> call_002e6944;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;
inline constexpr guest::Function<0x007c89b8, u32(u32)> call_007c89b8;

u32 f_006c3858(gptr<ToolBank> arg0) {
    arg0->word_4b0 = vtable_ToolBank_at_4b0;
    arg0->word_0 = vtable_ToolBank;
    call_002f76ac(arg0.addr() + 0x7e8u, 0x250560u, 0x60u, 2u);  // (from the original)
    call_002f76ac(arg0.addr() + 0x7b0u, 0x4efa0cu, 0x18u, 2u);  // (from the original)
    u32 r0_4 = call_002e6944(arg0.addr() + 0x790u);  // (from the original)
    u32 r0_6 = call_002e6944(r0_4 - 0x28u);  // (from the original)
    u32 r0_8 = call_002e6944(r0_6 - 0x18u);  // (from the original)
    u32 r0_10 = call_002e6944(r0_8 - 0x58u);  // (from the original)
    u32 r0_12 = call_002e6944(r0_10 - 0x1cu);  // (from the original)
    u32 r0_13 = r0_12 - 0x9cu;  // (from the original)
    *gptr<u32>(r0_13 + 0x28u) = 0;  // (from the original)
    gptr<Local_006c3858_r4_1> r4_1 = gptr<Local_006c3858_r4_1>(r0_13 - 0x640u);  // (from the original)
    call_002f76ac(r0_13 - 0x18u, 0x4f14acu, 0xcu, 2u);  // (from the original)
    call_002f76ac(r4_1.addr() + 0x594u, 0x6c1654u, 0x24u, 2u);  // (from the original)
    call_002f76ac(r4_1.addr() + 0x544u, 0x4ecbe0u, 0x20u, 2u);  // (from the original)
    call_002f76ac(r4_1.addr() + 0x504u, 0x4ecbe0u, 0x20u, 2u);  // (from the original)
    call_002f76ac(r4_1.addr() + 0x4d4u, 0x4ee8c0u, 0x18u, 2u);  // (from the original)
    r4_1->word_4b0 = vtable_ExchangeModelBank_24448u__BankVramConfig_736u__4u__3824u__4u__false___ExchangeBankKeywordMyDesignFgNameEx__SvFgName__Name_32766___item__ResLoader__2u__false__at_4b0;
    r4_1->word_0 = vtable_ExchangeModelBank_24448u__BankVramConfig_736u__4u__3824u__4u__false___ExchangeBankKeywordMyDesignFgNameEx__SvFgName__Name_32766___item__ResLoader__2u__false_;
    call_002f76ac(r4_1.addr() + 0x4b8u, 0x4edd84u, 0xcu, 2u);  // (from the original)
    r4_1->word_0 = vtable_ExchangeResBank_24448u__BankVramConfig_736u__4u__3824u__4u__false___ExchangeBankKeywordMyDesignFgNameEx__SvFgName__Name_32766___item__ResLoader__2u__false_;
    call_002f76ac(r4_1.addr() + 0x60u, 0x53721cu, 0x114u, 4u);  // (from the original)
    u32 r0_21 = call_007c89b8(r4_1.addr());
    return r0_21;
}

}  // namespace d_006c3858
GUEST_EXPORT_FRAMED(0x006c3858, d_006c3858::f_006c3858, 0x4010);  // pushes {r4, lr} first, as the original

// f_006c3a58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c3a58 {

struct __attribute__((packed)) Local_006c3a58_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Local_006c3a58_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_006c3a58_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_006c3a58_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_006c3a58_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_006c3a58_ea_1, word_10, 0x10);

struct __attribute__((packed)) Local_006c3a58_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Local_006c3a58_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_006c3a58_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_006c3a58_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_006c3a58_ea_2, word_c, 0xc);
GUEST_OFFSET(Local_006c3a58_ea_2, word_10, 0x10);

struct __attribute__((packed)) Local_006c3a58_r4_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006c3a58_r4_2, word_0, 0x0);
GUEST_OFFSET(Local_006c3a58_r4_2, word_4, 0x4);

inline guest::global<u32, 0x0095c6d0> global_0095c6d0;
inline constexpr guest::Function<0x006158c4, u32(u32, u32, u32, u32)> call_006158c4;
inline constexpr guest::Function<0x006a6e1c, u32(u32, u32, u32, u32)> call_006a6e1c;
inline constexpr guest::Function<0x006fa1fc, u32(u32, u32, u32, u32)> call_006fa1fc;

struct __attribute__((packed)) Frame_006c3a58 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x14];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006c3a58, word_0, 0x0);
GUEST_OFFSET(Frame_006c3a58, word_4, 0x4);
GUEST_OFFSET(Frame_006c3a58, word_8, 0x8);
GUEST_SIZE(Frame_006c3a58, 0x20);

u32 f_006c3a58(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_006c3a58> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r14 = guest::cpu()->r[14];
    if (r0 == 0) {
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        return r0;
    }
    gptr<Local_006c3a58_ea_1> ea_1 = gptr<Local_006c3a58_ea_1>(frame.at(0xc).addr());  // (from the original)
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r6;
    ea_1->word_c = r7;
    ea_1->word_10 = r14;
    u32 r5_1 = 6u;
    u32 r0_1 = *global_0095c6d0;
    u32 r4_1 = *gptr<s8>(r0_1 + 0x1cu);  // (from the original)
    if (r4_1 + 1u != 0 && s32(r4_1) < 0x40) {  // (from the original)
        u32 r0_2 = call_006158c4(r0_1, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (sxtb(u32(*gptr<u16>(r0_2 + (r4_1 + (r4_1 << 2) << 2) + 0x14u))) == 1u) {  // (from the original)
            r5_1 = 1u;
        }
    }
    frame->word_4 = 0;
    frame->word_8 = 0;
    call_006fa1fc(frame.at(4).addr(), frame.at(8).addr(), r2, r3);
    gptr<Local_006c3a58_r4_2> r4_2 = gptr<Local_006c3a58_r4_2>(frame.at(4).addr());
    frame->word_0 = r5_1;
    u32 r0_4 = call_006a6e1c(r0, r4_2->word_0, r4_2->word_4, 9u);
    gptr<Local_006c3a58_ea_2> ea_2 = gptr<Local_006c3a58_ea_2>(frame.at(0xc).addr());  // (from the original)
    u32 r4_3 = ea_2->word_0;
    u32 r5_2 = ea_2->word_4;
    u32 r6_1 = ea_2->word_8;
    u32 r7_1 = ea_2->word_c;
    guest::cpu()->r[4] = r4_3;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    return r0_4;
}

}  // namespace d_006c3a58
GUEST_EXPORT(0x006c3a58, d_006c3a58::f_006c3a58);

// f_006c4200: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c4200 {

struct __attribute__((packed)) Object_006c4200_0 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
    u8 unknown_14[0x8];  // (not used here)
    u8 byte_1c;
    u8 byte_1d;
    u8 byte_1e;
};
GUEST_OFFSET(Object_006c4200_0, word_10, 0x10);
GUEST_OFFSET(Object_006c4200_0, byte_1c, 0x1c);
GUEST_OFFSET(Object_006c4200_0, byte_1d, 0x1d);
GUEST_OFFSET(Object_006c4200_0, byte_1e, 0x1e);

struct __attribute__((packed)) Local_006c4200_r4_1 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u8 unknown_c[0x3];  // (not used here)
    u8 byte_f;
    u8 byte_10;
    u8 byte_11;
    u8 byte_12;
};
GUEST_OFFSET(Local_006c4200_r4_1, word_8, 0x8);
GUEST_OFFSET(Local_006c4200_r4_1, byte_f, 0xf);
GUEST_OFFSET(Local_006c4200_r4_1, byte_10, 0x10);
GUEST_OFFSET(Local_006c4200_r4_1, byte_11, 0x11);
GUEST_OFFSET(Local_006c4200_r4_1, byte_12, 0x12);

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;

void f_006c4200(gptr<Object_006c4200_0> arg0, u32 r1_unused, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r5 = r0;
    gptr<Local_006c4200_r4_1> r4_1 = gptr<Local_006c4200_r4_1>(r5 + 0x10u);  // (from the original)
    arg0->word_10 = 0;
    arg0->byte_1c = 0xff;  // (from the original)
    arg0->byte_1d = 0;
    arg0->byte_1e = 0;
    call_002fc8e8(r5 + 0x14u, 0x95bfdcu, r2, guest::cpu()->r[3]);  // (from the original)
    r4_1->word_8 = 0;
    r2 = 1u;
    r4_1->byte_f = 0;
    r4_1->byte_10 = u8(r2);
    r4_1->byte_11 = 2;
    r4_1->byte_12 = 3;
    *gptr<u8>(r5 + 0x10cu) = 3;  // (from the original)
    u32 r4 = 0u;
    *gptr<u8>(r5 + 0x10du) = 2;  // (from the original)
    do {
        call_002fc8e8(r5 + (r4 << 2) + 0xecu, 0x95bfdcu, r2, guest::cpu()->r[3]);  // (from the original)
        r2 = guest::cpu()->r[2];
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 8);
}

}  // namespace d_006c4200
GUEST_EXPORT_FRAMED(0x006c4200, d_006c4200::f_006c4200, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006c48ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c48ac {

struct __attribute__((packed)) Object_006c48ac_0 {
    u8 unknown_0[0xc];  // (not used here)
    u8 byte_c;
};
GUEST_OFFSET(Object_006c48ac_0, byte_c, 0xc);

inline constexpr guest::Function<0x006158c4, u32(u32, u32)> call_006158c4;

void f_006c48ac(gptr<Object_006c48ac_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r5_1 = r0;
    u32 r4_1 = s8(arg0->byte_c);
    if (r4_1 + 1u != 0) {
        if (s32(r4_1) < 0x40) {  // (from the original)
            r0 = call_006158c4(r0, r1);
            r1 = r4_1 + (r4_1 << 2);
            if (sxtb(u32(*gptr<u16>(r0 + (r1 << 2) + 0x14u))) >= 0xcu) {  // (from the original)
                guest::cpu()->r[1] = r1;
                return;
            }
        }
        if (u32(*gptr<s8>(r5_1 + 0xcu)) < 0x40u) {  // (from the original)
            call_006158c4(r0, r1);
            r1 = guest::cpu()->r[1];
        }
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_006c48ac
GUEST_EXPORT_FRAMED(0x006c48ac, d_006c48ac::f_006c48ac, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006c4ed0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c4ed0 {

struct __attribute__((packed)) Local_006c4ed0_ea_1 {
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
};
GUEST_OFFSET(Local_006c4ed0_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_006c4ed0_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_006c4ed0_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_006c4ed0_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_006c4ed0_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_006c4ed0_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_006c4ed0_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_006c4ed0_ea_1, word_1c, 0x1c);
GUEST_OFFSET(Local_006c4ed0_ea_1, word_20, 0x20);
GUEST_OFFSET(Local_006c4ed0_ea_1, word_24, 0x24);
GUEST_OFFSET(Local_006c4ed0_ea_1, word_28, 0x28);

struct __attribute__((packed)) Local_006c4ed0_ea_2 {
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
GUEST_OFFSET(Local_006c4ed0_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_006c4ed0_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_006c4ed0_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_006c4ed0_ea_2, word_c, 0xc);
GUEST_OFFSET(Local_006c4ed0_ea_2, word_10, 0x10);
GUEST_OFFSET(Local_006c4ed0_ea_2, word_14, 0x14);
GUEST_OFFSET(Local_006c4ed0_ea_2, word_18, 0x18);
GUEST_OFFSET(Local_006c4ed0_ea_2, word_1c, 0x1c);
GUEST_OFFSET(Local_006c4ed0_ea_2, word_20, 0x20);

struct __attribute__((packed)) Local_006c4ed0_r1_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Local_006c4ed0_r1_2, word_0, 0x0);
GUEST_OFFSET(Local_006c4ed0_r1_2, word_4, 0x4);
GUEST_OFFSET(Local_006c4ed0_r1_2, word_8, 0x8);
GUEST_OFFSET(Local_006c4ed0_r1_2, word_c, 0xc);
GUEST_OFFSET(Local_006c4ed0_r1_2, word_10, 0x10);

struct __attribute__((packed)) Local_006c4ed0_r2_1 {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
};
GUEST_OFFSET(Local_006c4ed0_r2_1, word_14, 0x14);
GUEST_OFFSET(Local_006c4ed0_r2_1, word_18, 0x18);
GUEST_OFFSET(Local_006c4ed0_r2_1, word_1c, 0x1c);
GUEST_OFFSET(Local_006c4ed0_r2_1, word_20, 0x20);
GUEST_OFFSET(Local_006c4ed0_r2_1, word_24, 0x24);

inline constexpr guest::Function<0x0024a5ec, u32(u32, u32, u32, u32)> call_0024a5ec;
inline constexpr guest::Function<0x0024a5f4, u32(u32, u32, u32, u32)> call_0024a5f4;
inline constexpr guest::Function<0x002fcaf4, u32(u32)> call_002fcaf4;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32)> call_002fcbb0;
inline constexpr guest::Function<0x0055cabc, u32(u32, u32, u32, u32)> call_0055cabc;
inline constexpr guest::Function<0x0055cb58, u32(u32, u32, u32, u32)> call_0055cb58;
inline constexpr guest::Function<0x00624f00, u32(u32, u32, u32, u32)> call_00624f00;
inline constexpr guest::Function<0x00768b4c, u32(u32, u32, u32, u32)> call_00768b4c;
inline constexpr guest::Function<0x00768da0, u32(u32, u32, u32, u32)> call_00768da0;

void f_006c4ed0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_006c4ed0_r1_2> r1_2 = gptr<Local_006c4ed0_r1_2>(0u);
    u32 r3_1 = 0;
    u32 r2_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r2_3 = 0;
    u32 r0_11 = 0;
    u32 r1_3 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r1_7 = 0;
    u32 r0_23 = 0;
    u32 r0_24 = 0;
    gptr<Local_006c4ed0_ea_1> ea_1 = gptr<Local_006c4ed0_ea_1>(r13 - 0x2c);  // (from the original)
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r4;
    ea_1->word_c = r5;
    ea_1->word_10 = r6;
    ea_1->word_14 = r7;
    ea_1->word_18 = r8;
    ea_1->word_1c = r9;
    ea_1->word_20 = r10;
    ea_1->word_24 = r11;
    ea_1->word_28 = r14;
    r13 -= 0x3e0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0055cabc(r13 + 0x390u, r1, r2, r3);  // (from the original)
    r11 = 0u;
    r0 = r11;
    r4 = r13 + 0x2e8u;  // (from the original)
    do {
        u32 r1_1 = r0 + (r0 << 2);
        r0 += 1u;
        gptr<Local_006c4ed0_r2_1> r2_1 = gptr<Local_006c4ed0_r2_1>(*gptr<u32>(r13 + 0x3b4u) + (r1_1 << 2));  // (from the original)
        r1_2 = gptr<Local_006c4ed0_r1_2>(r4 + (r1_1 << 2));
        r1_2->word_0 = r2_1->word_14;
        r1_2->word_4 = r2_1->word_18;
        r1_2->word_8 = r2_1->word_1c;
        r3_1 = r2_1->word_20;
        r1_2->word_c = r3_1;
        r2_2 = r2_1->word_24;
        r1_2->word_10 = r2_2;
        guest::preempt();
    } while (s32(r0) < 6);
    guest::cpu()->r[13] = r13;
    call_0024a5ec(r13, r1_2.addr(), r2_2, r3_1);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 0x37cu) = 0;  // (from the original)
    *gptr<u32>(r13 + 0x384u) = *gptr<u32>(r13 + 0x3b4u) + 0x14u;  // (from the original)
    do {
        if ((*gptr<u32>(r13 + 0x37cu) & 0xffu) != 0) {  // (from the original)
            u32 r0_3 = *gptr<u32>(r13 + 0x37cu) & 0xffu;  // (from the original)
            guest::cpu()->r[13] = r13;
            u32 r0_4 = call_00624f00(r0_3, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_4 == 0) {
                goto L_6c5124;
            }
        }
        r10 = 0u;
        r6 = 0u;
        *gptr<u32>(r13 + 0x368u) = 0;  // (from the original)
        *gptr<u32>(r13 + 0x36cu) = 0;  // (from the original)
        r0_5 = *gptr<u32>(r13 + 0x37cu);  // (from the original)
        r0_6 = r0_5 + (r0_5 << 2);
        r7 = *gptr<u32>(r13 + 0x384u) + (r0_6 << 2);  // (from the original)
        r1 = *gptr<u32>(r13 + 0x3b4u);  // (from the original)
        *gptr<u32>(r13 + 0x374u) = r1 + (r0_6 << 2);  // (from the original)
        goto L_6c4fac;
L_6c4fa4:;
        if (s32(r6) >= 3) {
            goto L_6c5124;
        }
L_6c4fac:;
        r10 += 1u;
        if (r11 == 0 && s32(r10) >= 0x3e8) {  // (from the original)
            r11 = 1u;
        }
        r0_7 = r13 + 0x390u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_8 = call_0055cb58(r0_7, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r9 = u64(r0_8) * 5u >> 0x20;  // (from the original)
        if (*gptr<u8>(r13 + 0x368u + r9) != 0) {  // (from the original)
            guest::preempt();
            goto L_6c4fa4;
        }
        r0_9 = r13 + 0x390u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_10 = call_0055cb58(r0_9, r1, r2, r3);
        r2_3 = r9 + (r9 << 2);
        r0_11 = r13 + 0x2e8u + (r2_3 << 2) + (u32(u64(r0_10) * 0xau >> 0x20) << 1);  // (from the original)
        *gptr<u32>(r13 + 0x3a8u) = r0_11;  // (from the original)
        r1_3 = *gptr<u16>(r0_11);
        r0_12 = r13 + 0x388u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002fcbb0(r0_12, r1_3, r2_3);
        r0_13 = r13 + 0x388u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_14 = call_002fcaf4(r0_13);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_14 == 0) {
            r8 = 0u;
            guest::cpu()->r[13] = r13;
            u32 r0_16 = call_00768da0(r13 + 0x388u, r1, r2, r3);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (s32(r0_16) < 0) {
                goto L_6c5078;
            }
            r1 = s32(r0_16) >> 5;
            if (r1 >= 0xbau) {  // (from the original)
                goto L_6c5078;
            }
            r1 = *gptr<u32>(r13 + (r1 << 2));
            if (((r1 >> (r0_16 & 0x1fu)) & 1u) == 0) {  // (from the original)
                goto L_6c5078;
            }
        }
L_6c5064:;
        guest::preempt();
        goto L_6c4fa4;
L_6c5078:;
        if (r11 == 0) {
            r4 = 0u;
            if (s32(r6) > 0) {
                do {
                    guest::cpu()->r[13] = r13;
                    u32 r0_19 = call_00768b4c(r13 + 0x388u, r1, r2, r3);  // (from the original)
                    u32 r1_5 = *gptr<u16>(r7 + (r4 << 1) + 0x78u);  // (from the original)
                    guest::cpu()->r[13] = r13;
                    u32 r0_21 = call_002fcbb0(r13 + 0x378u, r1_5, guest::cpu()->r[2]);  // (from the original)
                    guest::cpu()->r[13] = r13;
                    u32 r0_22 = call_00768b4c(r0_21, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    u32 r5_1 = r0_19 == r0_22;
                    if (r5_1 != 0) {
                        r8 = 1u;
                    }
                    r4 += 1u;
                    guest::preempt();
                } while (s32(r6) > s32(r4));
                if (r8 != 0) {
                    guest::preempt();
                    goto L_6c5064;
                }
            }
        }
        *gptr<u16>(*gptr<u32>(r13 + 0x374u) + (r6 << 1) + 0x8cu) = u16(u32(*gptr<u16>(*gptr<u32>(r13 + 0x3a8u))));  // (from the original)
        r1_7 = r13 + 0x388u;  // (from the original)
        r0_23 = r13;
        guest::cpu()->r[13] = r13;
        call_0024a5f4(r0_23, r1_7, r2, r3);
        r3 = guest::cpu()->r[3];
        r2 = *gptr<u32>(r13 + 0x3a8u);  // (from the original)
        r6 += 1u;
        *gptr<u16>(r2) = 0x7ffe;  // (from the original)
        r1 = r13 + 0x368u;  // (from the original)
        *gptr<u8>(r1 + r9) = 1;
        guest::preempt();
        goto L_6c5064;
L_6c5124:;
        r0_24 = *gptr<u32>(r13 + 0x37cu) + 1u;  // (from the original)
        *gptr<u32>(r13 + 0x37cu) = r0_24;  // (from the original)
        guest::preempt();
    } while (s32(r0_24) < 4);
    r4 = 0u;
    do {
        if ((r4 & 0xffu) != 0) {  // (from the original)
            guest::cpu()->r[13] = r13;
            u32 r0_26 = call_00624f00(r4 & 0xffu, r1, r2, r3);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_26 == 0) {
                goto L_6c5168;
            }
        }
        r0 = 0u;
        do {
            r0 += 1u;
            guest::preempt();
        } while (s32(r0) < 3);
L_6c5168:;
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 4);
    r13 += 0x3bcu;  // (from the original)
    gptr<Local_006c4ed0_ea_2> ea_2 = gptr<Local_006c4ed0_ea_2>(r13);
    r13 += 0x24;  // (from the original)
    u32 r4_2 = ea_2->word_0;
    u32 r5_2 = ea_2->word_4;
    u32 r6_1 = ea_2->word_8;
    u32 r7_1 = ea_2->word_c;
    u32 r8_1 = ea_2->word_10;
    u32 r9_1 = ea_2->word_14;
    u32 r10_1 = ea_2->word_18;
    u32 r11_1 = ea_2->word_1c;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
    guest::cpu()->r[10] = r10_1;
    guest::cpu()->r[11] = r11_1;
    guest::cpu()->r[13] = r13;
}

}  // namespace d_006c4ed0
GUEST_EXPORT(0x006c4ed0, d_006c4ed0::f_006c4ed0);

// f_006c5c60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c5c60 {

struct __attribute__((packed)) Local_006c5c60_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006c5c60_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_006c5c60_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_006c5c60_r3_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006c5c60_r3_2, word_0, 0x0);
GUEST_OFFSET(Local_006c5c60_r3_2, word_4, 0x4);

struct __attribute__((packed)) Local_006c5c60_r3_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006c5c60_r3_3, word_0, 0x0);
GUEST_OFFSET(Local_006c5c60_r3_3, word_4, 0x4);

inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> call_002fe7cc;
inline constexpr guest::Function<0x006a69ec, u32(u32, u32, u32, u32)> call_006a69ec;
inline constexpr guest::Function<0x006a930c, u32(u32, u32, u32, u32)> call_006a930c;
inline constexpr guest::Function<0x006a96d8, u32(u32, u32, u32)> call_006a96d8;
inline constexpr guest::Function<0x006f6810, u32(u32, u32, u32, u32)> call_006f6810;
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32, u32)> call_0075291c;
inline constexpr guest::Function<0x0075d868, u32(u32, u32, u32, u32)> call_0075d868;

struct __attribute__((packed)) Frame_006c5c60 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u8 unknown_14[0x28];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006c5c60, word_0, 0x0);
GUEST_OFFSET(Frame_006c5c60, word_4, 0x4);
GUEST_OFFSET(Frame_006c5c60, word_8, 0x8);
GUEST_OFFSET(Frame_006c5c60, word_c, 0xc);
GUEST_OFFSET(Frame_006c5c60, word_10, 0x10);
GUEST_SIZE(Frame_006c5c60, 0x3c);

u32 f_006c5c60(u32 r0, u32 r1, u32 r2, u32 r3, float S0) {
    guest::StackFrameOf<Frame_006c5c60> frame;  // the original's stack frame
    u32 r0_1 = call_002fe7cc(r1, r1, r2, r3);
    if (r0_1 != 0) {
        frame->word_c = 0;
        frame->word_10 = 0;
        frame->word_4 = 0;
        frame->word_8 = 0;
        frame->word_0 = r0;
        call_006a69ec(frame.at(0xc).addr(), frame.at(0x10).addr(), frame.at(4).addr(), frame.at(8).addr());  // (from the original)
        gptr<Local_006c5c60_r3_2> r3_2 = gptr<Local_006c5c60_r3_2>(frame.at(0xc).addr());  // (from the original)
        r0_1 = call_0075291c(r0_1, r3_2->word_0, r3_2->word_4, r3_2.addr());
        if (r0_1 != 0) {
            gptr<Local_006c5c60_r3_3> r3_3 = gptr<Local_006c5c60_r3_3>(frame.at(4).addr());
            u32 r0_3 = call_0075d868(r0_1, r3_3->word_0, r3_3->word_4, r3_3.addr());
            if (r0_3 != 0) {
                gptr<Local_006c5c60_ea_1> ea_1 = gptr<Local_006c5c60_ea_1>(frame.at(4).addr());
                u32 r0_4 = call_006a96d8(r0_1, ea_1->word_0, ea_1->word_4);
                return r0_4;
            }
            frame->word_0 = r0;
            call_006a930c(r0_1, frame.at(0x14).addr(), frame.at(0x20).addr(), frame.at(0x2c).addr());  // (from the original)
            u32 r0_5 = call_006f6810(r0, frame.at(0x14).addr(), frame.at(0x20).addr(), frame.at(0x2c).addr());  // (from the original)
            return r0_5;
        }
    }
    float S0_8 = 0.0f;
    guest::cpu()->s[0] = S0_8;
    return r0_1;
}

}  // namespace d_006c5c60
GUEST_EXPORT_FRAMED(0x006c5c60, d_006c5c60::f_006c5c60, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_006c5d30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c5d30 {

struct __attribute__((packed)) Local_006c5d30_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_006c5d30_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_006c5d30_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_006c5d30_ea_1, word_8, 0x8);

struct __attribute__((packed)) Local_006c5d30_r1_5 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_006c5d30_r1_5, float_0, 0x0);
GUEST_OFFSET(Local_006c5d30_r1_5, float_4, 0x4);

struct __attribute__((packed)) Local_006c5d30_r1_6 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_006c5d30_r1_6, float_0, 0x0);
GUEST_OFFSET(Local_006c5d30_r1_6, float_4, 0x4);
GUEST_OFFSET(Local_006c5d30_r1_6, float_8, 0x8);

struct __attribute__((packed)) Local_006c5d30_r3_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006c5d30_r3_2, word_0, 0x0);
GUEST_OFFSET(Local_006c5d30_r3_2, word_4, 0x4);

inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> call_002fe7cc;
inline constexpr guest::Function<0x0056a378, u32(u32)> call_0056a378;
inline constexpr guest::Function<0x006a69ec, u32(u32, u32, u32, u32)> call_006a69ec;
inline constexpr guest::Function<0x006a930c, u32(u32, u32, u32, u32)> call_006a930c;
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32, u32)> call_0075291c;

struct __attribute__((packed)) Frame_006c5d30 {
    u32 word_0;
    u8 unknown_4[0x10];  // (not read or written by name)
    float float_14;
    u8 unknown_18[0x8];  // (not read or written by name)
    float float_20;
    float float_24;
    float float_28;
    u8 unknown_2c[0x18];  // (not read or written by name)
    float float_44;
    float float_48;
    float float_4c;
    u8 unknown_50[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006c5d30, word_0, 0x0);
GUEST_OFFSET(Frame_006c5d30, float_14, 0x14);
GUEST_OFFSET(Frame_006c5d30, float_20, 0x20);
GUEST_OFFSET(Frame_006c5d30, float_24, 0x24);
GUEST_OFFSET(Frame_006c5d30, float_28, 0x28);
GUEST_OFFSET(Frame_006c5d30, float_44, 0x44);
GUEST_OFFSET(Frame_006c5d30, float_48, 0x48);
GUEST_OFFSET(Frame_006c5d30, float_4c, 0x4c);
GUEST_SIZE(Frame_006c5d30, 0x58);

u32 f_006c5d30(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2, float S3, float S4, float S5, float S6, float S7, float S8) {
    guest::StackFrameOf<Frame_006c5d30> frame;  // the original's stack frame
    u32 r0_1 = call_002fe7cc(r2, r1, r2, r3);
    if (r0_1 != 0) {
        frame->word_0 = r1;
        call_006a69ec(frame.at(0x34).addr(), frame.at(0x38).addr(), frame.at(0x50).addr(), frame.at(0x54).addr());  // (from the original)
        gptr<Local_006c5d30_r3_2> r3_2 = gptr<Local_006c5d30_r3_2>(frame.at(0x34).addr());  // (from the original)
        r0_1 = call_0075291c(r0_1, r3_2->word_0, r3_2->word_4, r3_2.addr());
        if (r0_1 != 0) {
            frame->word_0 = r1;
            call_006a930c(r0_1, frame.at(0x14).addr(), frame.at(0x20).addr(), frame.at(8).addr());  // (from the original)
            gptr<Local_006c5d30_r1_5> r1_5 = gptr<Local_006c5d30_r1_5>(frame.at(0x18).addr());  // (from the original)
            float S3_4 = frame->float_28;
            float S5_4 = frame->float_20;
            float S4_4 = frame->float_24;
            float S0_4 = r1_5->float_0;
            float S1_4 = r1_5->float_4;
            gptr<Local_006c5d30_r1_6> r1_6 = gptr<Local_006c5d30_r1_6>(frame.at(8).addr());
            float S2_4 = S5_4 - frame->float_14;
            float S0_5 = S4_4 - S0_4;
            float S1_5 = S3_4 - S1_4;
            float S5_5 = r1_6->float_0 - S5_4;
            float S3_5 = r1_6->float_8 - S3_4;
            float S4_5 = r1_6->float_4 - S4_4;
            frame->float_44 = S0_5 * S3_5 - S1_5 * S4_5;
            frame->float_48 = S1_5 * S5_5 - S2_4 * S3_5;
            frame->float_4c = S2_4 * S4_5 - S0_5 * S5_5;
            guest::cpu()->s[0] = S0_5;
            guest::cpu()->s[1] = S1_5;
            call_0056a378(frame.at(0x44).addr());  // (from the original)
            gptr<Local_006c5d30_ea_1> ea_1 = gptr<Local_006c5d30_ea_1>(frame.at(0x44).addr());  // (from the original)
            u32 r0_4 = ea_1->word_0;
            u32 r1_7 = ea_1->word_4;
            u32 r2_4 = ea_1->word_8;
            *gptr<u32>(r0) = r0_4;
            *gptr<u32>(r0 + 4) = r1_7;
            *gptr<u32>(r0 + 8) = r2_4;
            guest::cpu()->r[1] = r1_7;
            return r0_4;
        }
    }
    float S0_7 = 0.0f;
    float S1_7 = 1.0f;
    *gptr<u32>(r0) = std::bit_cast<u32>(S0_7);
    *gptr<u32>(r0 + 4) = std::bit_cast<u32>(S1_7);
    *gptr<u32>(r0 + 8u) = std::bit_cast<u32>(S0_7);
    guest::cpu()->s[0] = S0_7;
    guest::cpu()->s[1] = S1_7;
    return r0_1;
}

}  // namespace d_006c5d30
GUEST_EXPORT_FRAMED(0x006c5d30, d_006c5d30::f_006c5d30, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006c5e2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c5e2c {

inline constexpr guest::Function<0x00315788, u32(u32, u32, u32)> call_00315788;
inline constexpr guest::Function<0x005ce154, u32(u32, u32)> call_005ce154;
inline constexpr guest::Function<0x006a6e90, u32(u32, u32, u32, u32)> call_006a6e90;
inline constexpr guest::Function<0x006c5ad8, u32(u32, u32, u32, u32)> call_006c5ad8;

struct __attribute__((packed)) Frame_006c5e2c {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0x28];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006c5e2c, word_0, 0x0);
GUEST_OFFSET(Frame_006c5e2c, word_4, 0x4);
GUEST_OFFSET(Frame_006c5e2c, word_8, 0x8);
GUEST_OFFSET(Frame_006c5e2c, word_c, 0xc);
GUEST_SIZE(Frame_006c5e2c, 0x38);

u32 f_006c5e2c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_006c5e2c> frame;  // the original's stack frame
    frame->word_8 = 0;
    frame->word_c = 0;
    u32 r5_1 = *frame.at<u32>(0x38);  // (from the original)
    frame->word_0 = r2;
    frame->word_4 = r3;
    call_006a6e90(frame.at(8).addr(), frame.at(0xc).addr(), r0, r1);  // (from the original)
    u32 r4_1 = frame->word_c;
    u32 r11_1 = frame->word_8;
    u32 r0_2 = call_00315788(r11_1, r4_1 - 1u, r5_1);
    u32 r0_3 = call_00315788(r11_1, r4_1 - 2u, r5_1);
    if (r0_2 == 3u || r0_3 == 3u) {
    } else {
        frame->word_0 = r5_1;
        u32 r0_4 = call_006c5ad8(r0, r1, r2, r3);
        frame.release();
        return call_005ce154(r0_4, guest::cpu()->r[1]);
    }
    return 0u;
}

}  // namespace d_006c5e2c
GUEST_EXPORT(0x006c5e2c, d_006c5e2c::f_006c5e2c);

// f_006c6188: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c6188 {

struct __attribute__((packed)) Local_006c6188_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_006c6188_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_006c6188_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_006c6188_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_006c6188_ea_2, word_c, 0xc);

inline constexpr guest::Function<0x006a6ec0, u32(u32, u32, u32, u32)> call_006a6ec0;
inline constexpr guest::Function<0x006c61d8, u32(u32, u32, u32, u32)> call_006c61d8;

struct __attribute__((packed)) Frame_006c6188 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Frame_006c6188, word_0, 0x0);
GUEST_OFFSET(Frame_006c6188, word_4, 0x4);
GUEST_OFFSET(Frame_006c6188, word_8, 0x8);
GUEST_OFFSET(Frame_006c6188, word_c, 0xc);
GUEST_OFFSET(Frame_006c6188, word_10, 0x10);
GUEST_OFFSET(Frame_006c6188, word_14, 0x14);
GUEST_SIZE(Frame_006c6188, 0x18);

u32 f_006c6188(u32 r0, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_006c6188> frame;  // the original's stack frame
    frame->word_14 = 0;
    frame->word_0 = r0;
    frame->word_4 = r1;
    frame->word_8 = 0;
    frame->word_c = 0;
    frame->word_10 = 0;
    call_006a6ec0(frame.at(8).addr(), frame.at(0xc).addr(), frame.at(0x10).addr(), frame.at(0x14).addr());  // (from the original)
    frame->word_0 = r2;
    gptr<Local_006c6188_ea_2> ea_2 = gptr<Local_006c6188_ea_2>(frame.at(8).addr());
    u32 r0_3 = call_006c61d8(ea_2->word_0, ea_2->word_4, ea_2->word_8, ea_2->word_c);
    return r0_3;
}

}  // namespace d_006c6188
GUEST_EXPORT_FRAMED(0x006c6188, d_006c6188::f_006c6188, 0x4010);  // pushes {r4, lr} first, as the original

// f_006c6640: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c6640 {

struct __attribute__((packed)) Local_006c6640_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_006c6640_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_006c6640_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_006c6640_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_006c6640_ea_1, word_c, 0xc);

struct __attribute__((packed)) Local_006c6640_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_006c6640_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_006c6640_ea_3, word_4, 0x4);
GUEST_OFFSET(Local_006c6640_ea_3, word_8, 0x8);

inline constexpr guest::Function<0x006a69ec, u32(u32, u32, u32, u32)> call_006a69ec;
inline constexpr guest::Function<0x006c5ad8, u32(u32, u32, u32, u32)> call_006c5ad8;
inline constexpr guest::Function<0x006c5c60, u32(u32, u32)> call_006c5c60;
inline constexpr guest::Function<0x006c75e0, u32(u32, u32, u32, u32)> call_006c75e0;

struct __attribute__((packed)) Frame_006c6640 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u8 unknown_24[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006c6640, word_0, 0x0);
GUEST_OFFSET(Frame_006c6640, word_4, 0x4);
GUEST_OFFSET(Frame_006c6640, word_8, 0x8);
GUEST_OFFSET(Frame_006c6640, word_c, 0xc);
GUEST_OFFSET(Frame_006c6640, word_10, 0x10);
GUEST_OFFSET(Frame_006c6640, word_14, 0x14);
GUEST_OFFSET(Frame_006c6640, word_18, 0x18);
GUEST_OFFSET(Frame_006c6640, word_1c, 0x1c);
GUEST_OFFSET(Frame_006c6640, word_20, 0x20);
GUEST_SIZE(Frame_006c6640, 0x28);

u32 f_006c6640(u32 r0, u32 r1) {
    guest::StackFrameOf<Frame_006c6640> frame;  // the original's stack frame
    frame->word_0 = r0;
    frame->word_8 = 0;
    frame->word_c = 0;
    frame->word_10 = 0;
    frame->word_14 = 0;
    call_006a69ec(frame.at(8).addr(), frame.at(0xc).addr(), frame.at(0x10).addr(), frame.at(0x14).addr());  // (from the original)
    gptr<Local_006c6640_ea_1> ea_1 = gptr<Local_006c6640_ea_1>(frame.at(8).addr());
    u32 r0_2 = ea_1->word_0;
    u32 r1_2 = ea_1->word_4;
    u32 r2_2 = ea_1->word_8;
    u32 r3_2 = ea_1->word_c;
    frame->word_0 = r1;
    u32 r0_3 = call_006c5ad8(r0_2, r1_2, r2_2, r3_2);
    if (r0_3 != 2u && r0_3 != 0xf8u && r0_3 != 4u && r0_3 != 3u && r0_3 != 0xa2u && r0_3 != 0xa3u && r0_3 != 0xa4u && r0_3 != 0xa5u) {  // (from the original)
        u32 r0_4 = call_006c5c60(r0, r1);
        return r0_4;
    }
    frame->word_4 = 0;
    frame->word_18 = 0;
    frame->word_1c = 0;
    frame->word_0 = r0;
    frame->word_20 = 0;
    call_006a69ec(frame.at(4).addr(), frame.at(0x18).addr(), frame.at(0x1c).addr(), frame.at(0x20).addr());  // (from the original)
    frame->word_0 = r1;
    gptr<Local_006c6640_ea_3> ea_3 = gptr<Local_006c6640_ea_3>(frame.at(0x18).addr());  // (from the original)
    u32 r0_7 = call_006c75e0(frame->word_4, ea_3->word_0, ea_3->word_4, ea_3->word_8);
    return r0_7;
}

}  // namespace d_006c6640
GUEST_EXPORT_FRAMED(0x006c6640, d_006c6640::f_006c6640, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006c6714: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c6714 {

inline guest::global<u32, 0x0094eddc> global_0094eddc;
inline constexpr guest::Function<0x002f74c8, u32(u32)> call_002f74c8;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> call_002f74e0;
inline constexpr guest::Function<0x002fae84, u32(u32)> call_002fae84;
inline constexpr guest::Function<0x002fb310, u32(u32)> call_002fb310;
inline constexpr guest::Function<0x002fb328, u32(u32)> call_002fb328;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> call_002fc934;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> call_002fcbb0;
inline constexpr guest::Function<0x0030512c, u32(u32, u32)> call_0030512c;
inline constexpr guest::Function<0x003058c9, u32(u32, u32)> call_003058c8;
inline constexpr guest::Function<0x0030fbb4, u32(u32, u32)> call_0030fbb4;
inline constexpr guest::Function<0x00313440, u32(u32)> call_00313440;
inline constexpr guest::Function<0x005b3ec4, u32(u32)> call_005b3ec4;
inline constexpr guest::Function<0x005b4358, u32(u32, u32)> call_005b4358;
inline constexpr guest::Function<0x006c588c, u32(u32, u32, u32, u32)> call_006c588c;
inline constexpr guest::Function<0x006f9638, u32(u32)> call_006f9638;
inline constexpr guest::Function<0x006f9c08, u32(u32)> call_006f9c08;
inline constexpr guest::Function<0x006f9db4, u32(u32)> call_006f9db4;
inline constexpr guest::Function<0x006fa728, u32(u32)> call_006fa728;
inline constexpr guest::Function<0x006fb0cc, u32(u32)> call_006fb0cc;
inline constexpr guest::Function<0x0071f644, u32(u32, u32)> call_0071f644;
inline constexpr guest::Function<0x007203f0, u32(u32)> call_007203f0;
inline constexpr guest::Function<0x0075d990, u32(u32)> call_0075d990;
inline constexpr guest::Function<0x0076ab04, u32(u32)> call_0076ab04;
inline constexpr guest::Function<0x0076ce3c, u32(u32, u32)> call_0076ce3c;

u32 f_006c6714(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_33 = 0;
    for (;;) {
        u32 r0_2 = call_006c588c(r0, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r4_1 = r0_2;
        if (r0_2 == 0xeu) {  // (from the original)
            u32 r0_3 = call_002f74c8(r0_2);
            u32 r0_4 = call_002f74e0(0x40u, r0_3);  // (from the original)
            if (r0_4 != 0) {
                u32 r0_5 = call_002f74c8(r0_4);
                u32 r0_6 = call_00313440(r0_5);
                u32 r0_7 = call_002fae84(r0_6);
                u32 r0_8 = call_002fb310(r0_7);
                u32 r0_10 = call_003058c8(r0_8 + 4u, r0_6);
                if (r0_10 != 0) {
                    call_002fc934(frame.at(0).addr(), r0_10 + 0x24a6u);  // (from the original)
                    u32 r0_13 = call_0076ab04(frame.at(0).addr());
                    r4_1 = r0_13;
                }
            } else {
                u32 r0_14 = call_002f74c8(r0_4);
                u32 r0_15 = call_005b4358(r0_14, 1u);
                if (r0_15 != 0) {
                    u32 r0_17 = call_002fcbb0(frame.at(4).addr(), 0x23ebu);  // (from the original)
                    u32 r0_18 = call_0076ab04(r0_17);
                    r4_1 = r0_18;
                    u32 r0_20 = call_005b3ec4(frame.at(4).addr());
                    if (r0_20 != 0) {
                        u32 r0_21 = call_0075d990(r0_20);
                        if (r0_21 != 0) {
                            call_0071f644(frame.at(0).addr(), r0_21);
                            u32 r0_24 = call_0076ab04(frame.at(0).addr());
                            r4_1 = r0_24;
                        }
                    }
                } else {
                    u32 r0_25 = call_002f74c8(r0_15);
                    u32 r0_26 = call_002f74e0(0x80u, r0_25);  // (from the original)
                    if (r0_26 != 0) {
                        u32 r0_27 = call_002f74c8(r0_26);
                        u32 r0_28 = call_006f9638(r0_27);
                        u32 r0_29 = call_002fb328(r0_28);
                        u32 r0_30 = call_006fa728(r0_28);
                        u32 r0_31 = call_006fb0cc(r0_28);
                        u32 r0_32 = call_0030fbb4(r0_29 + 0x5d900u, r0_30);  // (from the original)
                        r0_33 = call_0030512c(r0_32, r0_31);
                    } else {
                        u32 r0_34 = call_002f74c8(r0_26);
                        u32 r0_35 = call_002f74e0(0x2000u, r0_34);  // (from the original)
                        if (r0_35 != 0) {
                            u32 r0_36 = call_002f74c8(r0_35);
                            u32 r0_37 = call_006f9638(r0_36);
                            u32 r0_38 = call_006f9db4(r0_37);
                            u32 r0_39 = call_002fb328(r0_38);
                            u32 r0_41 = call_0076ce3c(r0_39 + 0x6aeb8u, r0_38);  // (from the original)
                            r0_33 = r0_41 + 2u;
                        } else {
                            u32 r0_42 = call_002f74c8(r0_35);
                            u32 r0_43 = call_002f74e0(0x100000u, r0_42);  // (from the original)
                            if (r0_43 != 0) {
                                r4_1 = 0x13u;  // (from the original)
                                u32 r0_44 = *global_0094eddc;
                                if (r0_44 == 0) {
                                    goto L_6c69c8;
                                }
                                u32 r0_46 = call_0076ab04(r0_44 + 0x28u);  // (from the original)
                                r4_1 = r0_46;
                                goto L_6c69c8;
                            }
                            u32 r0_47 = call_002f74c8(r0_43);
                            u32 r0_48 = call_002f74e0(0x4000u, r0_47);  // (from the original)
                            if (r0_48 == 0) {
                                goto L_6c69c8;
                            }
                            u32 r0_49 = call_002f74c8(r0_48);
                            r0_33 = call_006f9c08(r0_49);
                            if (r0_33 == 0) {
                                goto L_6c69c8;
                            }
                        }
                    }
                    u32 r0_50 = call_007203f0(r0_33);
                    u32 r0_51 = call_0076ab04(r0_50);
                    r4_1 = r0_51;
                }
            }
        }
L_6c69c8:;
        r0 = r4_1;
        if (!(1)) {
            break;
        }
        if (r0 >= 0xffu) {  // (from the original)
            r0 = 0u;
        }
        return *gptr<u32>((r0 << 2) + 0x95d324u);  // (from the original)
        guest::preempt();
    }
}

}  // namespace d_006c6714
GUEST_EXPORT_FRAMED(0x006c6714, d_006c6714::f_006c6714, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006c69e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c69e4 {

struct __attribute__((packed)) Local_006c69e4_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_006c69e4_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_006c69e4_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_006c69e4_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_006c69e4_ea_2, word_c, 0xc);

inline constexpr guest::Function<0x006a69ec, u32(u32, u32, u32, u32)> call_006a69ec;
inline constexpr guest::Function<0x006c6a84, u32(u32, u32, u32, u32)> call_006c6a84;

struct __attribute__((packed)) Frame_006c69e4 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u8 unknown_14[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006c69e4, word_0, 0x0);
GUEST_OFFSET(Frame_006c69e4, word_4, 0x4);
GUEST_OFFSET(Frame_006c69e4, word_8, 0x8);
GUEST_OFFSET(Frame_006c69e4, word_c, 0xc);
GUEST_OFFSET(Frame_006c69e4, word_10, 0x10);
GUEST_SIZE(Frame_006c69e4, 0x18);

u32 f_006c69e4(u32 r0, u32 r1) {
    guest::StackFrameOf<Frame_006c69e4> frame;  // the original's stack frame
    frame->word_4 = 0;
    frame->word_8 = 0;
    frame->word_c = 0;
    frame->word_0 = r0;
    frame->word_10 = 0;
    call_006a69ec(frame.at(4).addr(), frame.at(8).addr(), frame.at(0xc).addr(), frame.at(0x10).addr());  // (from the original)
    frame->word_0 = r1;
    gptr<Local_006c69e4_ea_2> ea_2 = gptr<Local_006c69e4_ea_2>(frame.at(4).addr());
    u32 r0_3 = call_006c6a84(ea_2->word_0, ea_2->word_4, ea_2->word_8, ea_2->word_c);
    return r0_3;
}

}  // namespace d_006c69e4
GUEST_EXPORT_FRAMED(0x006c69e4, d_006c69e4::f_006c69e4, 0x4010);  // pushes {r4, lr} first, as the original

// f_006c6a34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c6a34 {

struct __attribute__((packed)) Local_006c6a34_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_006c6a34_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_006c6a34_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_006c6a34_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_006c6a34_ea_2, word_c, 0xc);

inline constexpr guest::Function<0x006a6ec0, u32(u32, u32, u32, u32)> call_006a6ec0;
inline constexpr guest::Function<0x006c6a84, u32(u32, u32, u32, u32)> call_006c6a84;

struct __attribute__((packed)) Frame_006c6a34 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Frame_006c6a34, word_0, 0x0);
GUEST_OFFSET(Frame_006c6a34, word_4, 0x4);
GUEST_OFFSET(Frame_006c6a34, word_8, 0x8);
GUEST_OFFSET(Frame_006c6a34, word_c, 0xc);
GUEST_OFFSET(Frame_006c6a34, word_10, 0x10);
GUEST_OFFSET(Frame_006c6a34, word_14, 0x14);
GUEST_SIZE(Frame_006c6a34, 0x18);

u32 f_006c6a34(u32 r0, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_006c6a34> frame;  // the original's stack frame
    frame->word_14 = 0;
    frame->word_0 = r0;
    frame->word_4 = r1;
    frame->word_8 = 0;
    frame->word_c = 0;
    frame->word_10 = 0;
    call_006a6ec0(frame.at(8).addr(), frame.at(0xc).addr(), frame.at(0x10).addr(), frame.at(0x14).addr());  // (from the original)
    frame->word_0 = r2;
    gptr<Local_006c6a34_ea_2> ea_2 = gptr<Local_006c6a34_ea_2>(frame.at(8).addr());
    u32 r0_3 = call_006c6a84(ea_2->word_0, ea_2->word_4, ea_2->word_8, ea_2->word_c);
    return r0_3;
}

}  // namespace d_006c6a34
GUEST_EXPORT_FRAMED(0x006c6a34, d_006c6a34::f_006c6a34, 0x4010);  // pushes {r4, lr} first, as the original

// f_006c6a84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c6a84 {

inline constexpr guest::Function<0x005cdfe8, u32(u32, u32)> call_005cdfe8;
inline constexpr guest::Function<0x006c5ad8, u32(u32, u32, u32, u32)> call_006c5ad8;

struct __attribute__((packed)) Frame_006c6a84 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not read or written by name)
    u8 byte_8;
    u8 byte_9;
    u8 byte_a;
    u8 byte_b;
    u8 unknown_c[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006c6a84, word_0, 0x0);
GUEST_OFFSET(Frame_006c6a84, byte_8, 0x8);
GUEST_OFFSET(Frame_006c6a84, byte_9, 0x9);
GUEST_OFFSET(Frame_006c6a84, byte_a, 0xa);
GUEST_OFFSET(Frame_006c6a84, byte_b, 0xb);
GUEST_SIZE(Frame_006c6a84, 0x14);

u32 f_006c6a84(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_006c6a84> frame;  // the original's stack frame
    frame->word_0 = *frame.at<u32>(0x18);  // (from the original)
    u32 r0_1 = call_006c5ad8(r0, r1, r2, r3);
    call_005cdfe8(frame.at(8).addr(), r0_1);
    r2 = frame->byte_a;
    r0 = 0x89068fu;  // (from the original)
    r1 = 0u;
    do {
        if (*gptr<u8>(r0 + r1) == r2 || *gptr<u8>(r0 + r1 + 1u) == r2) {
            guest::cpu()->r[1] = r1;
            return 1u;
        }
        r1 += 2u;
        guest::preempt();
    } while (r1 < 0x5au);  // (from the original)
    r2 = frame->byte_8;
    r1 = 0u;
    do {
        if (*gptr<u8>(r0 + r1) == r2 || *gptr<u8>(r0 + r1 + 1u) == r2) {
            guest::cpu()->r[1] = r1;
            return 1u;
        }
        r1 += 2u;
        guest::preempt();
    } while (r1 < 0x5au);  // (from the original)
    r2 = frame->byte_9;
    r1 = 0u;
    do {
        if (*gptr<u8>(r0 + r1) == r2 || *gptr<u8>(r0 + r1 + 1u) == r2) {
            guest::cpu()->r[1] = r1;
            return 1u;
        }
        r1 += 2u;
        guest::preempt();
    } while (r1 < 0x5au);  // (from the original)
    r2 = frame->byte_b;
    r1 = 0u;
    do {
        if (*gptr<u8>(r0 + r1) == r2 || *gptr<u8>(r0 + r1 + 1u) == r2) {
            guest::cpu()->r[1] = r1;
            return 1u;
        }
        r1 += 2u;
        guest::preempt();
    } while (r1 < 0x5au);  // (from the original)
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_006c6a84
GUEST_EXPORT_FRAMED(0x006c6a84, d_006c6a84::f_006c6a84, 0x4000);  // pushes {lr} first, as the original

// f_006c7540: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c7540 {

struct __attribute__((packed)) Local_006c7540_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_006c7540_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_006c7540_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_006c7540_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_006c7540_ea_2, word_c, 0xc);

inline constexpr guest::Function<0x006a69ec, u32(u32, u32, u32, u32)> call_006a69ec;
inline constexpr guest::Function<0x006c75e0, u32(u32, u32, u32, u32)> call_006c75e0;

struct __attribute__((packed)) Frame_006c7540 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u8 unknown_14[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006c7540, word_0, 0x0);
GUEST_OFFSET(Frame_006c7540, word_4, 0x4);
GUEST_OFFSET(Frame_006c7540, word_8, 0x8);
GUEST_OFFSET(Frame_006c7540, word_c, 0xc);
GUEST_OFFSET(Frame_006c7540, word_10, 0x10);
GUEST_SIZE(Frame_006c7540, 0x18);

u32 f_006c7540(u32 r0, u32 r1) {
    guest::StackFrameOf<Frame_006c7540> frame;  // the original's stack frame
    frame->word_4 = 0;
    frame->word_8 = 0;
    frame->word_c = 0;
    frame->word_0 = r0;
    frame->word_10 = 0;
    call_006a69ec(frame.at(4).addr(), frame.at(8).addr(), frame.at(0xc).addr(), frame.at(0x10).addr());  // (from the original)
    frame->word_0 = r1;
    gptr<Local_006c7540_ea_2> ea_2 = gptr<Local_006c7540_ea_2>(frame.at(4).addr());
    u32 r0_3 = call_006c75e0(ea_2->word_0, ea_2->word_4, ea_2->word_8, ea_2->word_c);
    return r0_3;
}

}  // namespace d_006c7540
GUEST_EXPORT_FRAMED(0x006c7540, d_006c7540::f_006c7540, 0x4010);  // pushes {r4, lr} first, as the original

// f_006c7868: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c7868 {

struct __attribute__((packed)) Local_006c7868_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_006c7868_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_006c7868_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_006c7868_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_006c7868_ea_2, word_c, 0xc);

inline constexpr guest::Function<0x006a69ec, u32(u32, u32, u32, u32)> call_006a69ec;
inline constexpr guest::Function<0x006c7908, u32(u32, u32, u32, u32)> call_006c7908;

struct __attribute__((packed)) Frame_006c7868 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u8 unknown_14[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006c7868, word_0, 0x0);
GUEST_OFFSET(Frame_006c7868, word_4, 0x4);
GUEST_OFFSET(Frame_006c7868, word_8, 0x8);
GUEST_OFFSET(Frame_006c7868, word_c, 0xc);
GUEST_OFFSET(Frame_006c7868, word_10, 0x10);
GUEST_SIZE(Frame_006c7868, 0x18);

u32 f_006c7868(u32 r0, u32 r1) {
    guest::StackFrameOf<Frame_006c7868> frame;  // the original's stack frame
    frame->word_4 = 0;
    frame->word_8 = 0;
    frame->word_c = 0;
    frame->word_0 = r0;
    frame->word_10 = 0;
    call_006a69ec(frame.at(4).addr(), frame.at(8).addr(), frame.at(0xc).addr(), frame.at(0x10).addr());  // (from the original)
    frame->word_0 = r1;
    gptr<Local_006c7868_ea_2> ea_2 = gptr<Local_006c7868_ea_2>(frame.at(4).addr());
    u32 r0_3 = call_006c7908(ea_2->word_0, ea_2->word_4, ea_2->word_8, ea_2->word_c);
    return r0_3;
}

}  // namespace d_006c7868
GUEST_EXPORT_FRAMED(0x006c7868, d_006c7868::f_006c7868, 0x4010);  // pushes {r4, lr} first, as the original

// f_006c78b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c78b8 {

struct __attribute__((packed)) Local_006c78b8_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_006c78b8_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_006c78b8_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_006c78b8_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_006c78b8_ea_2, word_c, 0xc);

inline constexpr guest::Function<0x006a6ec0, u32(u32, u32, u32, u32)> call_006a6ec0;
inline constexpr guest::Function<0x006c7908, u32(u32, u32, u32, u32)> call_006c7908;

struct __attribute__((packed)) Frame_006c78b8 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Frame_006c78b8, word_0, 0x0);
GUEST_OFFSET(Frame_006c78b8, word_4, 0x4);
GUEST_OFFSET(Frame_006c78b8, word_8, 0x8);
GUEST_OFFSET(Frame_006c78b8, word_c, 0xc);
GUEST_OFFSET(Frame_006c78b8, word_10, 0x10);
GUEST_OFFSET(Frame_006c78b8, word_14, 0x14);
GUEST_SIZE(Frame_006c78b8, 0x18);

u32 f_006c78b8(u32 r0, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_006c78b8> frame;  // the original's stack frame
    frame->word_14 = 0;
    frame->word_0 = r0;
    frame->word_4 = r1;
    frame->word_8 = 0;
    frame->word_c = 0;
    frame->word_10 = 0;
    call_006a6ec0(frame.at(8).addr(), frame.at(0xc).addr(), frame.at(0x10).addr(), frame.at(0x14).addr());  // (from the original)
    frame->word_0 = r2;
    gptr<Local_006c78b8_ea_2> ea_2 = gptr<Local_006c78b8_ea_2>(frame.at(8).addr());
    u32 r0_3 = call_006c7908(ea_2->word_0, ea_2->word_4, ea_2->word_8, ea_2->word_c);
    return r0_3;
}

}  // namespace d_006c78b8
GUEST_EXPORT_FRAMED(0x006c78b8, d_006c78b8::f_006c78b8, 0x4010);  // pushes {r4, lr} first, as the original

// f_006c7908: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c7908 {

inline constexpr guest::Function<0x002fe7cc, u32(u32)> call_002fe7cc;
inline constexpr guest::Function<0x006a96d8, u32(u32, u32, u32)> call_006a96d8;
inline constexpr guest::Function<0x006c5ad8, u32(u32, u32, u32, u32)> call_006c5ad8;
inline constexpr guest::Function<0x006c6a84, u32(u32, u32, u32, u32)> call_006c6a84;
inline constexpr guest::Function<0x006c75e0, u32(u32, u32, u32, u32)> call_006c75e0;
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32)> call_0075291c;

struct __attribute__((packed)) Frame_006c7908 {
    u32 word_0;
    u8 unknown_4[0x1c];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006c7908, word_0, 0x0);
GUEST_SIZE(Frame_006c7908, 0x20);

u32 f_006c7908(u32 r0, u32 r1, u32 r2, u32 r3, float S0) {
    guest::StackFrameOf<Frame_006c7908> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r4_1 = *frame.at<u32>(0x20);  // (from the original)
    frame->word_0 = r4_1;
    u32 r0_1 = call_006c5ad8(r0, r1, r2, r3);
    if (r0_1 != 0xadu && r0_1 != 0xaeu && r0_1 != 0xafu && r0_1 != 0xb0u && r0_1 != 0xb1u) {  // (from the original)
        frame->word_0 = r4_1;
        u32 r0_2 = call_006c6a84(r0, r1, r2, r3);
        if (r0_2 == 0) {
            frame->word_0 = r4_1;
            u32 r0_3 = call_006c75e0(r0, r1, r2, r3);
            return r0_3;
        }
    }
    u32 r0_4 = call_002fe7cc(r4_1);
    if (r0_4 != 0) {
        r0_4 = call_0075291c(r0_4, r0, r1);
        if (r0_4 != 0) {
            frame.release();
            return call_006a96d8(r0_4, r2, r3);
        }
    }
    float S0_5 = 0.0f;
    guest::cpu()->s[0] = S0_5;
    return r0_4;
}

}  // namespace d_006c7908
GUEST_EXPORT(0x006c7908, d_006c7908::f_006c7908);

// f_006c7a14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c7a14 {

struct __attribute__((packed)) Local_006c7a14_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_006c7a14_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_006c7a14_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_006c7a14_ea_2, word_8, 0x8);

inline constexpr guest::Function<0x002fe7cc, u32(u32)> call_002fe7cc;
inline constexpr guest::Function<0x006a6ec0, u32(u32, u32, u32, u32)> call_006a6ec0;
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32)> call_0075291c;
inline constexpr guest::Function<0x0075d7fc, u32(u32, u32, u32)> call_0075d7fc;

struct __attribute__((packed)) Frame_006c7a14 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u8 unknown_18[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006c7a14, word_0, 0x0);
GUEST_OFFSET(Frame_006c7a14, word_4, 0x4);
GUEST_OFFSET(Frame_006c7a14, word_8, 0x8);
GUEST_OFFSET(Frame_006c7a14, word_c, 0xc);
GUEST_OFFSET(Frame_006c7a14, word_10, 0x10);
GUEST_OFFSET(Frame_006c7a14, word_14, 0x14);
GUEST_SIZE(Frame_006c7a14, 0x1c);

u32 f_006c7a14(u32 r0, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_006c7a14> frame;  // the original's stack frame
    frame->word_14 = 0;
    frame->word_0 = r0;
    frame->word_4 = r1;
    frame->word_8 = 0;
    frame->word_c = 0;
    frame->word_10 = 0;
    call_006a6ec0(frame.at(8).addr(), frame.at(0xc).addr(), frame.at(0x10).addr(), frame.at(0x14).addr());  // (from the original)
    u32 r7_1 = frame->word_14;
    gptr<Local_006c7a14_ea_2> ea_2 = gptr<Local_006c7a14_ea_2>(frame.at(8).addr());
    u32 r5_1 = ea_2->word_0;
    u32 r6_1 = ea_2->word_4;
    u32 r8_1 = ea_2->word_8;
    u32 r0_2 = call_002fe7cc(r2);
    if (r0_2 != 0) {
        u32 r0_3 = call_0075291c(r0_2, r5_1, r6_1);
        if (r0_3 != 0) {
            u32 r0_4 = call_0075d7fc(r0_3, r8_1, r7_1);
            return r0_4;
        }
    }
    return 0u;
}

}  // namespace d_006c7a14
GUEST_EXPORT_FRAMED(0x006c7a14, d_006c7a14::f_006c7a14, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_006c7a9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c7a9c {

inline constexpr guest::Function<0x002fe7cc, u32(u32)> call_002fe7cc;
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32)> call_0075291c;
inline constexpr guest::Function<0x0075d7fc, u32(u32, u32, u32)> call_0075d7fc;

u32 f_006c7a9c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r0_2 = call_002fe7cc(*frame.at<u32>(0x18));  // (from the original)
    if (r0_2 != 0) {
        u32 r0_3 = call_0075291c(r0_2, r0, r1);
        if (r0_3 != 0) {
            frame.release();
            return call_0075d7fc(r0_3, r2, r3);
        }
    }
    return 0u;
}

}  // namespace d_006c7a9c
GUEST_EXPORT(0x006c7a9c, d_006c7a9c::f_006c7a9c);

// f_006c7bd0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c7bd0 {

struct __attribute__((packed)) Local_006c7bd0_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006c7bd0_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_006c7bd0_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_006c7bd0_r3_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006c7bd0_r3_2, word_0, 0x0);
GUEST_OFFSET(Local_006c7bd0_r3_2, word_4, 0x4);

inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> call_002fe7cc;
inline constexpr guest::Function<0x0052ec20, u32(u32, u32)> call_0052ec20;
inline constexpr guest::Function<0x0052ed80, u32(u32, u32)> call_0052ed80;
inline constexpr guest::Function<0x0060d240, u32(u32)> call_0060d240;
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32, u32)> call_0075291c;
inline constexpr guest::Function<0x0075d828, u32(u32)> call_0075d828;
inline constexpr guest::Function<0x0075d838, u32(u32)> call_0075d838;
inline constexpr guest::Function<0x0075d848, u32(u32)> call_0075d848;
inline constexpr guest::Function<0x0075d858, u32(u32)> call_0075d858;
inline constexpr guest::Function<0x007667a8, u32(u32, u32, u32, u32)> call_007667a8;

u32 f_006c7bd0(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x20);  // the original's stack frame
    u32 r0_1 = call_002fe7cc(r1, r1, r2, r3);
    if (r0_1 != 0) {
        call_0052ed80(frame.at(0x10).addr(), r0);  // (from the original)
        gptr<Local_006c7bd0_r3_2> r3_2 = gptr<Local_006c7bd0_r3_2>(frame.at(0x10).addr());  // (from the original)
        u32 r0_3 = call_0075291c(r0_1, r3_2->word_0, r3_2->word_4, r3_2.addr());
        if (r0_3 != 0) {
            call_0052ec20(frame.at(0x18).addr(), r0);  // (from the original)
            call_0060d240(frame.at(0).addr());
            gptr<Local_006c7bd0_ea_1> ea_1 = gptr<Local_006c7bd0_ea_1>(frame.at(0x18).addr());  // (from the original)
            call_007667a8(r0_3, frame.at(0).addr(), ea_1->word_0, ea_1->word_4);
            u32 r0_7 = call_0075d828(frame.at(0).addr());
            u32 r0_9 = call_0075d848(frame.at(0).addr());
            u32 r0_11 = call_0075d838(frame.at(0).addr());
            u32 r0_13 = call_0075d858(frame.at(0).addr());
            if (r0_7 == r0_9 && r0_7 == r0_11 && r0_7 == r0_13) {
                return 1u;
            }
        }
    }
    return 0u;
}

}  // namespace d_006c7bd0
GUEST_EXPORT_FRAMED(0x006c7bd0, d_006c7bd0::f_006c7bd0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006c83f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c83f0 {

struct __attribute__((packed)) Local_006c83f0_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_006c83f0_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_006c83f0_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_006c83f0_ea_2, word_8, 0x8);

inline constexpr guest::Function<0x002fe7cc, u32(u32)> call_002fe7cc;
inline constexpr guest::Function<0x006a6ec0, u32(u32, u32, u32, u32)> call_006a6ec0;
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32)> call_0075291c;
inline constexpr guest::Function<0x0075d898, u32(u32, u32, u32)> call_0075d898;

struct __attribute__((packed)) Frame_006c83f0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u8 unknown_18[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006c83f0, word_0, 0x0);
GUEST_OFFSET(Frame_006c83f0, word_4, 0x4);
GUEST_OFFSET(Frame_006c83f0, word_8, 0x8);
GUEST_OFFSET(Frame_006c83f0, word_c, 0xc);
GUEST_OFFSET(Frame_006c83f0, word_10, 0x10);
GUEST_OFFSET(Frame_006c83f0, word_14, 0x14);
GUEST_SIZE(Frame_006c83f0, 0x1c);

u32 f_006c83f0(u32 r0, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_006c83f0> frame;  // the original's stack frame
    frame->word_14 = 0;
    frame->word_0 = r0;
    frame->word_4 = r1;
    frame->word_8 = 0;
    frame->word_c = 0;
    frame->word_10 = 0;
    call_006a6ec0(frame.at(8).addr(), frame.at(0xc).addr(), frame.at(0x10).addr(), frame.at(0x14).addr());  // (from the original)
    u32 r7_1 = frame->word_14;
    gptr<Local_006c83f0_ea_2> ea_2 = gptr<Local_006c83f0_ea_2>(frame.at(8).addr());
    u32 r5_1 = ea_2->word_0;
    u32 r6_1 = ea_2->word_4;
    u32 r8_1 = ea_2->word_8;
    u32 r0_2 = call_002fe7cc(r2);
    if (r0_2 != 0) {
        u32 r0_3 = call_0075291c(r0_2, r5_1, r6_1);
        if (r0_3 != 0) {
            u32 r0_4 = call_0075d898(r0_3, r8_1, r7_1);
            return r0_4;
        }
    }
    return 0u;
}

}  // namespace d_006c83f0
GUEST_EXPORT_FRAMED(0x006c83f0, d_006c83f0::f_006c83f0, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_006c8590: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c8590 {

inline constexpr guest::Function<0x005ce13c, u32(u32)> call_005ce13c;
inline constexpr guest::Function<0x006c588c, u32(u32, u32, u32, u32)> call_006c588c;

u32 f_006c8590(u32 r0) {
    u32 r0_1 = call_006c588c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_2 = call_005ce13c(r0_1);
    return r0_2 == 2u;
}

}  // namespace d_006c8590
GUEST_EXPORT_FRAMED(0x006c8590, d_006c8590::f_006c8590, 0x4010);  // pushes {r4, lr} first, as the original

// f_006c8760: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c8760 {

inline constexpr guest::Function<0x005ce13c, u32(u32)> call_005ce13c;
inline constexpr guest::Function<0x006c588c, u32(u32, u32, u32, u32)> call_006c588c;

u32 f_006c8760(u32 r0) {
    u32 r0_1 = call_006c588c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_2 = call_005ce13c(r0_1);
    if (r0_2 != 0) {
        r0_2 = 1u;
    }
    return r0_2;
}

}  // namespace d_006c8760
GUEST_EXPORT_FRAMED(0x006c8760, d_006c8760::f_006c8760, 0x4010);  // pushes {r4, lr} first, as the original

// f_006c8778: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c8778 {

inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32, u32)> call_003171b4;
inline constexpr guest::Function<0x006c87ac, u32(u32, u32)> call_006c87ac;

struct __attribute__((packed)) Frame_006c8778 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006c8778, word_0, 0x0);
GUEST_OFFSET(Frame_006c8778, word_4, 0x4);
GUEST_SIZE(Frame_006c8778, 0xc);

u32 f_006c8778(u32 r0) {
    guest::StackFrameOf<Frame_006c8778> frame;  // the original's stack frame
    frame->word_0 = 0;
    frame->word_4 = 0;
    call_003171b4(frame.at(0).addr(), frame.at(4).addr(), r0, guest::cpu()->r[3]);
    u32 r0_3 = call_006c87ac(frame->word_0, frame->word_4);
    return r0_3;
}

}  // namespace d_006c8778
GUEST_EXPORT_FRAMED(0x006c8778, d_006c8778::f_006c8778, 0x4000);  // pushes {lr} first, as the original

// f_006c87ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c87ac {

inline guest::global<u32, 0x0014fdc8> global_0014fdc8;
inline guest::global<u32, 0x00950800> global_00950800;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> call_002f74e0;
inline constexpr guest::Function<0x00315788, u32(u32, u32, u32)> call_00315788;
inline constexpr guest::Function<0x00317eac, u32(u32, u32, u32, u32)> call_00317eac;
inline constexpr guest::Function<0x006a5e34, u32(u32)> call_006a5e34;
inline constexpr guest::Function<0x007529d8, u32(u32, u32, u32)> call_007529d8;

struct __attribute__((packed)) Frame_006c87ac {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x14];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006c87ac, word_0, 0x0);
GUEST_OFFSET(Frame_006c87ac, word_4, 0x4);
GUEST_OFFSET(Frame_006c87ac, word_8, 0x8);
GUEST_SIZE(Frame_006c87ac, 0x20);

u32 f_006c87ac(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_006c87ac> frame;  // the original's stack frame
    u32 r0_10 = 0;
    u32 r0_1 = call_002f74c8(r0, r1, r2, r3);
    u32 r0_2 = call_002f74e0(0x200u, r0_1);  // (from the original)
    if (r0_2 == 0) {
        u32 r0_3 = call_002f74c8(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r0_4 = call_002f74e0(0x10000000u, r0_3);  // (from the original)
        if (r0_4 == 0) {
            u32 r0_5 = call_006a5e34(r0_4);
            if (r0_5 != 0) {
                u32 r0_6 = call_007529d8(r0_5, r0, r1);
                if (r0_6 != 0) {
                    u32 r0_7 = *gptr<u32>(r0_5 + 0x28u);  // (from the original)
                    if (r0_7 != 0) {
                        frame->word_0 = r0_7;
                        frame->word_4 = 0x80;  // (from the original)
                        frame->word_8 = 0x80;  // (from the original)
                        u32 r0_9 = call_00317eac(frame.at(0).addr(), r0, r1, 0x80u);  // (from the original)
                        return r0_9;
                    }
                }
            }
            return 0u;
        }
        r0_10 = *global_00950800;
        if (r0_10 != 0) {
            frame.release();
            return guest::call_address<u32>(*global_0014fdc8, r0_10, r0, r1, guest::cpu()->r[3]);
        }
    } else {
        u32 r4_1 = 0u;
        u32 r0_11 = call_00315788(r0, r1, r4_1);
        if (r0_11 == 0xfcu) {  // (from the original)
            r4_1 = 0xffu;  // (from the original)
        }
        r0_10 = r4_1;
    }
    return r0_10;
}

}  // namespace d_006c87ac
GUEST_EXPORT(0x006c87ac, d_006c87ac::f_006c87ac);

// f_006c8938: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c8938 {

struct __attribute__((packed)) Object_006c8938_0 {
    u8 unknown_0[0x44];  // (not used here)
    u32 word_44;
    u8 unknown_48[0x3e9];  // (not used here)
    u8 byte_431;
};
GUEST_OFFSET(Object_006c8938_0, word_44, 0x44);
GUEST_OFFSET(Object_006c8938_0, byte_431, 0x431);

inline constexpr guest::Function<0x004b6d74, u32(u32, u32)> call_004b6d74;
inline constexpr guest::Function<0x004b6dc8, u32(u32, u32)> call_004b6dc8;

void f_006c8938(gptr<Object_006c8938_0> arg0, u32 r1) {
    u32 r1_1 = arg0->word_44;
    u32 r0_1 = *gptr<u32>(r1_1 + 0xcu);  // (from the original)
    if (r0_1 != 0) {
        call_004b6dc8(r0_1, r1_1);
        arg0->byte_431 = 0;
    }
    if (r1 != 0) {
        call_004b6d74(r1, arg0->word_44);
        arg0->byte_431 = 1;
    }
}

}  // namespace d_006c8938
GUEST_EXPORT_FRAMED(0x006c8938, d_006c8938::f_006c8938, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006c8e30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c8e30 {

struct __attribute__((packed)) Object_006c8e30_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
    u8 unknown_14[0x3ac];  // (not used here)
    float float_3c0;
};
GUEST_OFFSET(Object_006c8e30_0, word_c, 0xc);
GUEST_OFFSET(Object_006c8e30_0, word_10, 0x10);
GUEST_OFFSET(Object_006c8e30_0, float_3c0, 0x3c0);

struct __attribute__((packed)) Local_006c8e30_r12 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0x8];  // (not used here)
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_006c8e30_r12, word_0, 0x0);
GUEST_OFFSET(Local_006c8e30_r12, word_4, 0x4);
GUEST_OFFSET(Local_006c8e30_r12, word_8, 0x8);
GUEST_OFFSET(Local_006c8e30_r12, word_c, 0xc);
GUEST_OFFSET(Local_006c8e30_r12, word_18, 0x18);
GUEST_OFFSET(Local_006c8e30_r12, word_1c, 0x1c);

inline constexpr guest::Function<0x0081b750, u32(u32, u32, u32)> call_0081b750;

u32 f_006c8e30(gptr<Object_006c8e30_0> arg0, float S0_unused, float S1) {
    u32 r0 = arg0.addr();
    u32 fpsr = guest::cpu()->fpscr;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    gptr<Local_006c8e30_r12> r12 = gptr<Local_006c8e30_r12>(0x894fecu);  // (from the original)
    u32 r4_1 = arg0->word_c;
    float S0 = 0.0f;
    u32 r1_1 = r12->word_1c;
    u32 r3 = r0 + 0x400u;  // (from the original)
    if (r4_1 != r12->word_18) {
        goto L_6c8e88;
    }
    if (r4_1 == 0 && ((arg0->word_10 | r1_1) & 1u) == 0) {
        goto L_6c8e78;
    }
    if (arg0->word_10 != r1_1) {
        goto L_6c8e88;
    }
L_6c8e78:;
    *gptr<u32>(r3 + 0x38u) = std::bit_cast<u32>(S0);  // (from the original)
    r1_2 = r12->word_0;
    r2_1 = r12->word_4;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0_1 = call_0081b750(r0, r1_2, r2_1);
    return r0_1;
L_6c8e88:;
    u32 r1_4 = r12->word_c;
    if (r4_1 != r12->word_8) {
        guest::cpu()->r[1] = r1_4;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    if (r4_1 == 0 && ((arg0->word_10 | r1_4) & 1u) == 0) {
        goto L_6c8ebc;
    }
    if (arg0->word_10 != r1_4) {
        guest::cpu()->r[1] = r1_4;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
L_6c8ebc:;
    float S3_1 = 1.0f;
    float S2_1 = std::bit_cast<float>(*gptr<u32>(r3 + 0xcu)) - S3_1;  // (from the original)
    S1 = S2_1 - arg0->float_3c0;
    *gptr<u32>(r3 + 0x38u) = std::bit_cast<u32>(S1);  // (from the original)
    u32 fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S1, S0);  // (from the original)
    if (!(fpsr_1 >> 0x1e & 1) && fpsr_1 >> 0x1f == (fpsr_1 >> 0x1c & 1)) {  // (from the original)
        S0 = S1;
    }
    guest::preempt();
    goto L_6c8e78;
}

}  // namespace d_006c8e30
GUEST_EXPORT_FRAMED(0x006c8e30, d_006c8e30::f_006c8e30, 0x4010);  // pushes {r4, lr} first, as the original

// f_006c8ef0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c8ef0 {

struct __attribute__((packed)) Object_006c8ef0_0 {
    u8 unknown_0[0x44];  // (not used here)
    u32 word_44;
    u8 unknown_48[0x3e9];  // (not used here)
    u8 byte_431;
};
GUEST_OFFSET(Object_006c8ef0_0, word_44, 0x44);
GUEST_OFFSET(Object_006c8ef0_0, byte_431, 0x431);

inline guest::global<u8, 0x0095df7f> global_0095df7f;
inline constexpr guest::Function<0x001323b4, u32(u32, u32, u32, u32)> call_001323b4;
inline constexpr guest::Function<0x004b6dc8, u32(u32, u32, u32, u32)> call_004b6dc8;

void f_006c8ef0(gptr<Object_006c8ef0_0> arg0) {
    u32 r1_1 = arg0->word_44;
    u32 r0_1 = *gptr<u32>(r1_1 + 0xcu);  // (from the original)
    if (r0_1 != 0) {
        call_004b6dc8(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        arg0->byte_431 = 0;
    }
    call_001323b4(arg0.addr() + 0x24u, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *global_0095df7f = 0;
}

}  // namespace d_006c8ef0
GUEST_EXPORT_FRAMED(0x006c8ef0, d_006c8ef0::f_006c8ef0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006c9050: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c9050 {

struct __attribute__((packed)) Object_006c9050_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
    u8 unknown_14[0x3a8];  // (not used here)
    float float_3bc;
};
GUEST_OFFSET(Object_006c9050_0, word_c, 0xc);
GUEST_OFFSET(Object_006c9050_0, word_10, 0x10);
GUEST_OFFSET(Object_006c9050_0, float_3bc, 0x3bc);

struct __attribute__((packed)) Local_006c9050_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006c9050_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_006c9050_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_006c9050_r12 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x8];  // (not used here)
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_006c9050_r12, word_0, 0x0);
GUEST_OFFSET(Local_006c9050_r12, word_4, 0x4);
GUEST_OFFSET(Local_006c9050_r12, word_10, 0x10);
GUEST_OFFSET(Local_006c9050_r12, word_14, 0x14);

inline constexpr guest::Function<0x0081b750, u32(u32, u32, u32)> call_0081b750;

u32 f_006c9050(gptr<Object_006c9050_0> arg0, float S0_unused, float S1) {
    u32 r0 = arg0.addr();
    u32 fpsr = guest::cpu()->fpscr;
    gptr<Local_006c9050_ea_1> ea_1 = gptr<Local_006c9050_ea_1>(0u);
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    gptr<Local_006c9050_r12> r12 = gptr<Local_006c9050_r12>(0x894fecu);  // (from the original)
    u32 r4_1 = arg0->word_c;
    float S0 = 0.0f;
    u32 r1_1 = r12->word_14;
    u32 r3 = r0 + 0x400u;  // (from the original)
    if (r4_1 != r12->word_10) {
        goto L_6c90ac;
    }
    if (r4_1 == 0 && ((arg0->word_10 | r1_1) & 1u) == 0) {
        goto L_6c9098;
    }
    if (arg0->word_10 != r1_1) {
        goto L_6c90ac;
    }
L_6c9098:;
    *gptr<u32>(r3 + 0x38u) = std::bit_cast<u32>(S0);  // (from the original)
    ea_1 = gptr<Local_006c9050_ea_1>(r12.addr() + 8u);
    r1_2 = ea_1->word_0;
    r2_1 = ea_1->word_4;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0_1 = call_0081b750(r0, r1_2, r2_1);
    return r0_1;
L_6c90ac:;
    u32 r1_4 = r12->word_4;
    if (r4_1 != r12->word_0) {
        guest::cpu()->r[1] = r1_4;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    if (r4_1 == 0 && ((arg0->word_10 | r1_4) & 1u) == 0) {
        goto L_6c90e0;
    }
    if (arg0->word_10 != r1_4) {
        guest::cpu()->r[1] = r1_4;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
L_6c90e0:;
    float S3_1 = 1.0f;
    float S2_1 = arg0->float_3bc - S3_1;
    S1 = S2_1 - std::bit_cast<float>(*gptr<u32>(r3 + 0x10u));  // (from the original)
    *gptr<u32>(r3 + 0x38u) = std::bit_cast<u32>(S1);  // (from the original)
    u32 fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S1, S0);  // (from the original)
    if (!(fpsr_1 >> 0x1e & 1) && fpsr_1 >> 0x1f == (fpsr_1 >> 0x1c & 1)) {  // (from the original)
        S0 = S1;
    }
    guest::preempt();
    goto L_6c9098;
}

}  // namespace d_006c9050
GUEST_EXPORT_FRAMED(0x006c9050, d_006c9050::f_006c9050, 0x4010);  // pushes {r4, lr} first, as the original

// f_006c91d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c91d0 {

inline guest::global<u32, 0x0095261c> global_0095261c;

u32 f_006c91d0() {
    return ((*global_0095261c & 3u) << 5) + 0x9b3a2cu + 0x10u;  // (from the original)
}

}  // namespace d_006c91d0
GUEST_EXPORT(0x006c91d0, d_006c91d0::f_006c91d0);

// f_006c91f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c91f4 {

inline guest::global<u32, 0x0095261c> global_0095261c;

void f_006c91f4(u32 r0) {
    *global_0095261c = r0 & 3u;
    guest::cpu()->r[1] = 0x95261cu;  // (from the original)
}

}  // namespace d_006c91f4
GUEST_EXPORT(0x006c91f4, d_006c91f4::f_006c91f4);

// f_006c9218: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c9218 {

inline guest::global<u16, 0x00952ad8> global_00952ad8;
inline constexpr guest::Function<0x0011db9c, u32(u32, u32, u32, u32)> call_0011db9c;

u32 f_006c9218(u32 r0_unused, u32 r1) {
    u32 r0_1 = call_0011db9c(0x952ad8u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_2 = r0_1 & 0x80000000u;  // (from the original)
    if (!(r0_2 >> 0x1f)) {  // (from the original)
        return r0_2;
    }
    *global_00952ad8 = 0;
    guest::cpu()->r[1] = 0x952ad8u;  // (from the original)
    return 0u;
}

}  // namespace d_006c9218
GUEST_EXPORT_FRAMED(0x006c9218, d_006c9218::f_006c9218, 0x4010);  // pushes {r4, lr} first, as the original

// f_006c93e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c93e0 {

inline guest::global<u32, 0x009502fc> global_009502fc;
inline constexpr guest::Function<0x006f7e40, u32(u32, u32, u32, u32)> call_006f7e40;
inline constexpr guest::Function<0x006f7e90, u32(u32, u32)> call_006f7e90;
inline constexpr guest::Function<0x006f8114, u32(u32, u32)> call_006f8114;

void f_006c93e0(u32 r0, u32 r1) {
    u32 r0_1 = *global_009502fc;
    if (r0_1 < 0x14u) {  // (from the original)
        call_006f8114((r0_1 + (r0_1 << 1) << 3) + 0x994ebcu, r0);  // (from the original)
        u32 r0_3 = *global_009502fc;
        call_006f7e40((r0_3 + (r0_3 << 2) << 2) + 0x99509cu, (r0_3 + (r0_3 << 1) << 3) + 0x994ebcu, 4u, 8u);  // (from the original)
        u32 r0_5 = *global_009502fc;
        u32 r1_2 = (r0_5 + (r0_5 << 2) << 2) + 0x99509cu;  // (from the original)
        *gptr<u32>(r1_2 + 0x10u) = r1;  // (from the original)
        call_006f7e90(0x994d24u, r1_2);  // (from the original)
        *global_009502fc = *global_009502fc + 1u;
    }
}

}  // namespace d_006c93e0
GUEST_EXPORT_FRAMED(0x006c93e0, d_006c93e0::f_006c93e0, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_006c9464: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c9464 {

inline guest::global<u32, 0x009502fc> global_009502fc;
inline constexpr guest::Function<0x006f8054, u32(u32)> call_006f8054;

void f_006c9464() {
    call_006f8054(0x994d24u);  // (from the original)
    *global_009502fc = 0;
    guest::cpu()->r[1] = 0x9502f8u;  // (from the original)
}

}  // namespace d_006c9464
GUEST_EXPORT_FRAMED(0x006c9464, d_006c9464::f_006c9464, 0x4010);  // pushes {r4, lr} first, as the original

// f_006c967c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c967c {

inline guest::global<u8, 0x0095719c> global_0095719c;

u32 f_006c967c() {
    u32 r0_1 = *global_0095719c;
    if (r0_1 != 1u) {
        r0_1 = 0u;
    }
    return r0_1;
}

}  // namespace d_006c967c
GUEST_EXPORT(0x006c967c, d_006c967c::f_006c967c);

// f_006c9898: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c9898 {

inline guest::global<u8, 0x0095719c> global_0095719c;

u32 f_006c9898() {
    return *global_0095719c == 3u;
}

}  // namespace d_006c9898
GUEST_EXPORT(0x006c9898, d_006c9898::f_006c9898);

// f_006c98b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c98b4 {

inline guest::global<u8, 0x0095719c> global_0095719c;
inline guest::global<u8, 0x0095719d> global_0095719d;

u32 f_006c98b4() {
    *global_0095719c = 2;
    *global_0095719d = 0;
    guest::cpu()->r[1] = 0u;
    return 0x95719cu;  // (from the original)
}

}  // namespace d_006c98b4
GUEST_EXPORT(0x006c98b4, d_006c98b4::f_006c98b4);

// f_006c9b0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c9b0c {

inline guest::global<u8, 0x009571cc> global_009571cc;
inline guest::global<u8, 0x009571cd> global_009571cd;
inline constexpr guest::Function<0x00130690, u32(u32, u32, u32, u32)> call_00130690;

u32 f_006c9b0c() {
    u32 r0_1 = *global_009571cd;
    if (r0_1 != 0) {
        return r0_1;
    }
    if (*global_009571cc != 0) {
        call_00130690(0x974b90u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    }
    *global_009571cc = 0;
    return 0u;
}

}  // namespace d_006c9b0c
GUEST_EXPORT_FRAMED(0x006c9b0c, d_006c9b0c::f_006c9b0c, 0x4010);  // pushes {r4, lr} first, as the original

// f_006c9e74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006c9e74 {

struct __attribute__((packed)) Object_006c9e74_0 {
    u8 unknown_0[0xc8];  // (not used here)
    u32 word_c8;
    u32 word_cc;
};
GUEST_OFFSET(Object_006c9e74_0, word_c8, 0xc8);
GUEST_OFFSET(Object_006c9e74_0, word_cc, 0xcc);

inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;

u32 f_006c9e74(gptr<Object_006c9e74_0> arg0, u32 r1) {
    call_002fbb30(r1, arg0->word_c8, arg0->word_cc, guest::cpu()->r[3]);
    return (arg0->word_cc & ~3u) + r1;
}

}  // namespace d_006c9e74
GUEST_EXPORT_FRAMED(0x006c9e74, d_006c9e74::f_006c9e74, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006ca128: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ca128 {

struct __attribute__((packed)) Local_006ca128_r0_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0xa8];  // (not used here)
    u32 word_b8;
    u32 word_bc;
    u32 word_c0;
    u32 word_c4;
    u32 word_c8;
    u32 word_cc;
    u32 word_d0;
    u32 word_d4;
};
GUEST_OFFSET(Local_006ca128_r0_3, word_0, 0x0);
GUEST_OFFSET(Local_006ca128_r0_3, word_4, 0x4);
GUEST_OFFSET(Local_006ca128_r0_3, word_8, 0x8);
GUEST_OFFSET(Local_006ca128_r0_3, word_c, 0xc);
GUEST_OFFSET(Local_006ca128_r0_3, word_b8, 0xb8);
GUEST_OFFSET(Local_006ca128_r0_3, word_bc, 0xbc);
GUEST_OFFSET(Local_006ca128_r0_3, word_c0, 0xc0);
GUEST_OFFSET(Local_006ca128_r0_3, word_c4, 0xc4);
GUEST_OFFSET(Local_006ca128_r0_3, word_c8, 0xc8);
GUEST_OFFSET(Local_006ca128_r0_3, word_cc, 0xcc);
GUEST_OFFSET(Local_006ca128_r0_3, word_d0, 0xd0);
GUEST_OFFSET(Local_006ca128_r0_3, word_d4, 0xd4);

inline constexpr guest::Function<0x0034ac5c, u32(u32)> call_0034ac5c;

u32 f_006ca128(u32 r0) {
    u32 r0_2 = call_0034ac5c(r0 + 0x10u);  // (from the original)
    gptr<Local_006ca128_r0_3> r0_3 = gptr<Local_006ca128_r0_3>(r0_2 - 0x10u);  // (from the original)
    r0_3->word_b8 = 0;
    r0_3->word_bc = 0;
    r0_3->word_c0 = 0;
    r0_3->word_c4 = 0;
    r0_3->word_c8 = 0;
    r0_3->word_cc = 0;
    r0_3->word_d0 = 0;
    r0_3->word_d4 = 0;
    r0_3->word_0 = 0;
    r0_3->word_8 = 0;
    r0_3->word_4 = 0;
    r0_3->word_c = 0;
    return r0_3.addr();
}

}  // namespace d_006ca128
GUEST_EXPORT_FRAMED(0x006ca128, d_006ca128::f_006ca128, 0x4010);  // pushes {r4, lr} first, as the original

// f_006ca1c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ca1c0 {

struct __attribute__((packed)) Local_006ca1c0_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006ca1c0_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_006ca1c0_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_006ca1c0_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006ca1c0_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_006ca1c0_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_006ca1c0_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006ca1c0_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_006ca1c0_ea_3, word_4, 0x4);

struct __attribute__((packed)) Local_006ca1c0_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006ca1c0_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_006ca1c0_ea_4, word_4, 0x4);

inline guest::global<u8, 0x009571f4> global_009571f4;
inline constexpr guest::Function<0x005a3004, u32(u32, u32)> call_005a3004;
inline constexpr guest::Function<0x005a3018, u32(u32)> call_005a3018;
inline constexpr guest::Function<0x006c9c94, u32(u32, u32, u32, u32)> call_006c9c94;
inline constexpr guest::Function<0x006c9ea0, u32(u32, u32, u32, u32)> call_006c9ea0;

u32 f_006ca1c0(u32 r0) {
    guest::StackFrame frame(0x20);  // the original's stack frame
    call_006c9c94(0xab7d0cu, r0, 0x280u, 0x1e0u);  // (from the original)
    call_005a3018(frame.at(0x10).addr());  // (from the original)
    gptr<Local_006ca1c0_ea_1> ea_1 = gptr<Local_006ca1c0_ea_1>(frame.at(0x10).addr());  // (from the original)
    u32 r0_2 = ea_1->word_0;
    u32 r1_2 = ea_1->word_4;
    gptr<Local_006ca1c0_ea_2> ea_2 = gptr<Local_006ca1c0_ea_2>(frame.at(8).addr());
    ea_2->word_0 = r0_2;
    ea_2->word_4 = r1_2;
    call_005a3004(frame.at(0).addr(), r1_2);
    gptr<Local_006ca1c0_ea_3> ea_3 = gptr<Local_006ca1c0_ea_3>(frame.at(0).addr());
    u32 r0_4 = ea_3->word_0;
    u32 r1_3 = ea_3->word_4;
    gptr<Local_006ca1c0_ea_4> ea_4 = gptr<Local_006ca1c0_ea_4>(frame.at(0x18).addr());  // (from the original)
    ea_4->word_0 = r0_4;
    ea_4->word_4 = r1_3;
    call_006c9ea0(0xab7d0cu, r0, frame.at(0x18).addr(), frame.at(8).addr());  // (from the original)
    *global_009571f4 = 1;
    guest::cpu()->r[1] = 0x9571f4u;  // (from the original)
    return 1u;
}

}  // namespace d_006ca1c0
GUEST_EXPORT_FRAMED(0x006ca1c0, d_006ca1c0::f_006ca1c0, 0x4010);  // pushes {r4, lr} first, as the original

// f_006ca230: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ca230 {

inline guest::global<u32, 0x00ab7dc4> global_00ab7dc4;

void f_006ca230() {
    u32 r1_1 = *global_00ab7dc4 == 0;
    *global_00ab7dc4 = r1_1;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_006ca230
GUEST_EXPORT(0x006ca230, d_006ca230::f_006ca230);

// f_006ca23c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ca23c {

inline guest::global<u32, 0x00ab7dc4> global_00ab7dc4;

u32 f_006ca23c() {
    return *gptr<u32>((u32(*global_00ab7dc4 == 0) << 2) + 0xab7d0cu);  // (from the original)
}

}  // namespace d_006ca23c
GUEST_EXPORT(0x006ca23c, d_006ca23c::f_006ca23c);

// f_006cac84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006cac84 {


u32 f_006cac84(u32 r0) {
    u32 r2 = 0x88e4e4u;  // (from the original)
    u32 r1 = 0u;
    do {
        if (*gptr<u8>(r2 + r1) == r0 || *gptr<u8>(r2 + r1 + 1u) == r0) {
            return 1u;
        }
        r1 += 2u;
        guest::preempt();
    } while (r1 < 8u);
    return 0u;
}

}  // namespace d_006cac84
GUEST_EXPORT(0x006cac84, d_006cac84::f_006cac84);

// f_006cad04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006cad04 {

struct __attribute__((packed)) Object_006cad04_1 {
    u8 unknown_0[0x88e4d4];  // (not used here)
    u8 byte_88e4d4;
};
GUEST_OFFSET(Object_006cad04_1, byte_88e4d4, 0x88e4d4);


u32 f_006cad04(u32 r0, gptr<Object_006cad04_1> arg1) {
    u32 r1_1 = arg1->byte_88e4d4;
    guest::cpu()->r[1] = r1_1;
    return r1_1 == r0;
}

}  // namespace d_006cad04
GUEST_EXPORT(0x006cad04, d_006cad04::f_006cad04);

// f_006caed0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006caed0 {


u32 f_006caed0(u32 r0, u32 r1) {
    return uxth(r1 + (r0 << 8));
}

}  // namespace d_006caed0
GUEST_EXPORT(0x006caed0, d_006caed0::f_006caed0);

// f_006caf18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006caf18 {

inline constexpr guest::Function<0x005c98a8, u32(u32, u32, u32, u32)> call_005c98a8;

u32 f_006caf18(u32 r0) {
    u32 r5 = r0 >> 0x12;  // (from the original)
    u32 r4 = 0u;
    do {
        u32 r0_2 = call_005c98a8(r4 & 0xffu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        if (r0_2 == r5) {
            return 1u;
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0xfcu);  // (from the original)
    return 0u;
}

}  // namespace d_006caf18
GUEST_EXPORT_FRAMED(0x006caf18, d_006caf18::f_006caf18, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006cb790: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006cb790 {

inline constexpr guest::Function<0x005ca27c, u32(u32, u32)> call_005ca27c;

u32 f_006cb790(u32 r0, u32 r1) {
    if (r0 >= 0xfcu) {  // (from the original)
        return 4u;
    }
    u32 r0_1 = call_005ca27c(r0, r1);
    if (r0_1 != 0xfu) {  // (from the original)
        return 4u;
    }
    u32 r0_2 = r0 - 0x90u;  // (from the original)
    u32 r1_2 = r0_2 + (u32(s32(r0_2) >> 0x1f) >> 0x1e) & ~3u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return r0_2 - r1_2 & 0xffu;  // (from the original)
}

}  // namespace d_006cb790
GUEST_EXPORT_FRAMED(0x006cb790, d_006cb790::f_006cb790, 0x4010);  // pushes {r4, lr} first, as the original

// f_006cb7d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006cb7d0 {

struct __attribute__((packed)) Local_006cb7d0_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006cb7d0_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_006cb7d0_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_006cb7d0_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006cb7d0_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_006cb7d0_ea_4, word_4, 0x4);

struct __attribute__((packed)) Local_006cb7d0_r0_2 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(Local_006cb7d0_r0_2, byte_0, 0x0);
GUEST_OFFSET(Local_006cb7d0_r0_2, byte_1, 0x1);

inline constexpr guest::Function<0x0052f144, u32(u32)> call_0052f144;
inline constexpr guest::Function<0x0052f200, u32(u32, u32, u32)> call_0052f200;
inline constexpr guest::Function<0x005ca234, u32(u32)> call_005ca234;
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> call_006a5e34;
inline constexpr guest::Function<0x006fb604, u32(u32, u32, u32)> call_006fb604;
inline constexpr guest::Function<0x007481ec, u32(u32, u32)> call_007481ec;
inline constexpr guest::Function<0x0074824c, u32(u32, u32)> call_0074824c;
inline constexpr guest::Function<0x00748284, u32(u32, u32)> call_00748284;

struct __attribute__((packed)) Frame_006cb7d0 {
    u8 unknown_0[0x8];  // (not read or written by name)
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0x34];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006cb7d0, word_8, 0x8);
GUEST_OFFSET(Frame_006cb7d0, word_c, 0xc);
GUEST_SIZE(Frame_006cb7d0, 0x44);

void f_006cb7d0(u32 r0, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_006cb7d0> frame;  // the original's stack frame
    u32 r0_11 = 0;
    u32 r0_1 = call_006a5e34(r0, r1, r2, guest::cpu()->r[3]);
    u32 r7 = r0_1;
    if (r0_1 != 0) {
        gptr<Local_006cb7d0_r0_2> r0_2 = gptr<Local_006cb7d0_r0_2>(call_005ca234(r2));
        u32 r2_2 = u32(s8(r0_2->byte_1)) + r1;
        gptr<Local_006cb7d0_ea_1> ea_1 = gptr<Local_006cb7d0_ea_1>(frame.at(0x30).addr());  // (from the original)
        ea_1->word_0 = u32(s8(r0_2->byte_0)) + r0;
        ea_1->word_4 = r2_2;
        u32 r1_2 = *gptr<s8>(r0_2.addr() + 3u);
        u32 r1_3 = u32(*gptr<s8>(r0_2.addr() + 2u)) + r0;
        gptr<Local_006cb7d0_ea_4> ea_4 = gptr<Local_006cb7d0_ea_4>(frame.at(0x38).addr());  // (from the original)
        ea_4->word_0 = r1_3;
        ea_4->word_4 = r1_2 + r1;
        call_0052f200(frame.at(0x10).addr(), frame.at(0x30).addr(), frame.at(0x38).addr());  // (from the original)
        call_0074824c(frame.at(0x20).addr(), frame.at(0x10).addr());  // (from the original)
        call_00748284(frame.at(0).addr(), frame.at(0x10).addr());  // (from the original)
        u32 r0_7 = call_007481ec(frame.at(0).addr(), frame.at(0x20).addr());  // (from the original)
        if (r0_7 != 0) {
            do {
                call_006fb604(frame->word_8, frame->word_c, r7);
                call_0052f144(frame.at(0).addr());
                r0_11 = call_007481ec(frame.at(0).addr(), frame.at(0x20).addr());  // (from the original)
                guest::preempt();
            } while (r0_11 != 0);
        }
    }
}

}  // namespace d_006cb7d0
GUEST_EXPORT_FRAMED(0x006cb7d0, d_006cb7d0::f_006cb7d0, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_006cba30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006cba30 {

inline constexpr guest::Function<0x00314a04, u32(u32, u32, u32, u32)> call_00314a04;
inline constexpr guest::Function<0x00314a1c, u32(u32, u32)> call_00314a1c;
inline constexpr guest::Function<0x00314a9c, u32(u32, u32)> call_00314a9c;
inline constexpr guest::Function<0x00314b04, u32(u32, u32)> call_00314b04;
inline constexpr guest::Function<0x00314b58, u32(u32, u32)> call_00314b58;

struct __attribute__((packed)) Frame_006cba30 {
    u8 unknown_0[0x10];  // (not read or written by name)
    u8 byte_10;
    u8 unknown_11[0x1f];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006cba30, byte_10, 0x10);
GUEST_SIZE(Frame_006cba30, 0x30);

u32 f_006cba30(u32 r0_unused, u32 r1) {
    guest::StackFrameOf<Frame_006cba30> frame;  // the original's stack frame
    u32 r0_8 = 0;
    u32 r6 = 0xfcu;  // (from the original)
    u32 r0_1 = call_00314a04(0u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r8 = 0x88e4dcu;  // (from the original)
    u32 r7 = r0_1;
    u32 r5 = 0u;
    do {
        u32 r4 = *gptr<u8>(r8 + r5);
        call_00314a1c(frame.at(0x18).addr(), r7);  // (from the original)
        call_00314a9c(frame.at(0).addr(), r7);
        u32 r0_5 = call_00314b04(frame.at(0).addr(), frame.at(0x18).addr());  // (from the original)
        r1 = guest::cpu()->r[1];
        if (r0_5 != 0) {
            do {
                if (r4 == frame->byte_10) {
                    r6 = *gptr<u8>(r8 + r5);
                    guest::cpu()->r[1] = r1;
                    return r6;
                }
                call_00314b58(frame.at(0).addr(), r1);
                r0_8 = call_00314b04(frame.at(0).addr(), frame.at(0x18).addr());  // (from the original)
                r1 = guest::cpu()->r[1];
                guest::preempt();
            } while (r0_8 != 0);
        }
        r5 += 1u;
        guest::preempt();
    } while (r5 < 4u);
    guest::cpu()->r[1] = r1;
    return r6;
}

}  // namespace d_006cba30
GUEST_EXPORT_FRAMED(0x006cba30, d_006cba30::f_006cba30, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_006cbb08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006cbb08 {

inline constexpr guest::Function<0x002be920, u32(u32, u32)> call_002be920;
inline constexpr guest::Function<0x002bedd8, u32(u32, u32)> call_002bedd8;
inline constexpr guest::Function<0x005ca6f8, u32(u32, u32)> call_005ca6f8;

u32 f_006cbb08(u32 r0, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r5_1 = r0 - 0x12u;  // (from the original)
    if (r5_1 <= 0x2fu) {  // (from the original)
        u32 r0_1 = call_005ca6f8(r0, r1);
        r1 = guest::cpu()->r[1];
        if (r0_1 != 0) {
            u32 r1_1 = r0 - 0x22u;  // (from the original)
            u32 r2_1 = r0 - 0x32u;  // (from the original)
            u32 r4_1 = r5_1 <= 0xfu ? r0 - 0x12u : r1_1 <= 0xfu ? r0 - 0x22u : r2_1 <= 0xfu ? r0 - 0x32u : 3u;  // (from the original)
            u32 r0_2 = call_002bedd8(r0_1, r5_1 <= 0xfu ? 0u : r1_1 <= 0xfu ? 1u : r2_1 <= 0xfu ? 2u : 3u);  // (from the original)
            frame.release();
            return call_002be920(r0_2, r4_1);
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_006cbb08
GUEST_EXPORT(0x006cbb08, d_006cbb08::f_006cbb08);

// f_006cbbe4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006cbbe4 {

inline constexpr guest::Function<0x00314a04, u32(u32, u32, u32, u32)> call_00314a04;
inline constexpr guest::Function<0x00314a1c, u32(u32, u32)> call_00314a1c;
inline constexpr guest::Function<0x00314a9c, u32(u32, u32)> call_00314a9c;
inline constexpr guest::Function<0x00314b04, u32(u32, u32)> call_00314b04;
inline constexpr guest::Function<0x00314b58, u32(u32, u32)> call_00314b58;

struct __attribute__((packed)) Frame_006cbbe4 {
    u8 unknown_0[0x10];  // (not read or written by name)
    u8 byte_10;
    u8 unknown_11[0x1f];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006cbbe4, byte_10, 0x10);
GUEST_SIZE(Frame_006cbbe4, 0x30);

u32 f_006cbbe4(u32 r0_unused, u32 r1) {
    guest::StackFrameOf<Frame_006cbbe4> frame;  // the original's stack frame
    u32 r0_8 = 0;
    u32 r6 = 0xfcu;  // (from the original)
    u32 r0_1 = call_00314a04(0u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r8 = 0x88e4d8u;  // (from the original)
    u32 r7 = r0_1;
    u32 r5 = 0u;
    do {
        u32 r4 = *gptr<u8>(r8 + r5);
        call_00314a1c(frame.at(0x18).addr(), r7);  // (from the original)
        call_00314a9c(frame.at(0).addr(), r7);
        u32 r0_5 = call_00314b04(frame.at(0).addr(), frame.at(0x18).addr());  // (from the original)
        r1 = guest::cpu()->r[1];
        if (r0_5 != 0) {
            do {
                if (r4 == frame->byte_10) {
                    r6 = *gptr<u8>(r8 + r5);
                    guest::cpu()->r[1] = r1;
                    return r6;
                }
                call_00314b58(frame.at(0).addr(), r1);
                r0_8 = call_00314b04(frame.at(0).addr(), frame.at(0x18).addr());  // (from the original)
                r1 = guest::cpu()->r[1];
                guest::preempt();
            } while (r0_8 != 0);
        }
        r5 += 1u;
        guest::preempt();
    } while (r5 < 4u);
    guest::cpu()->r[1] = r1;
    return r6;
}

}  // namespace d_006cbbe4
GUEST_EXPORT_FRAMED(0x006cbbe4, d_006cbbe4::f_006cbbe4, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_006cbcf8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006cbcf8 {

inline constexpr guest::Function<0x003026cc, u32(u32, u32)> call_003026cc;
inline constexpr guest::Function<0x003026e8, u32(u32, u32)> call_003026e8;
inline constexpr guest::Function<0x0030ce60, u32(u32, u32)> call_0030ce60;
inline constexpr guest::Function<0x00314a04, u32(u32)> call_00314a04;
inline constexpr guest::Function<0x00314a1c, u32(u32, u32)> call_00314a1c;
inline constexpr guest::Function<0x00314a9c, u32(u32, u32)> call_00314a9c;
inline constexpr guest::Function<0x00314b04, u32(u32, u32)> call_00314b04;
inline constexpr guest::Function<0x00314b58, u32(u32, u32)> call_00314b58;
inline constexpr guest::Function<0x00314bc4, u32(u32, u32)> call_00314bc4;
inline constexpr guest::Function<0x005ca27c, u32(u32, u32)> call_005ca27c;
inline constexpr guest::Function<0x005ca5c0, u32(u32, u32)> call_005ca5c0;
inline constexpr guest::Function<0x0071831c, u32(u32, u32)> call_0071831c;
inline constexpr guest::Function<0x00718340, u32(u32, u32)> call_00718340;
inline constexpr guest::Function<0x00718378, u32(u32, u32, u32, u32)> call_00718378;

struct __attribute__((packed)) Frame_006cbcf8 {
    u8 unknown_0[0x10];  // (not read or written by name)
    u8 byte_10;
    u8 unknown_11[0x2f];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006cbcf8, byte_10, 0x10);
GUEST_SIZE(Frame_006cbcf8, 0x40);

u32 f_006cbcf8(u32 r0, u32 r1) {
    guest::StackFrameOf<Frame_006cbcf8> frame;  // the original's stack frame
    u32 r0_10 = 0;
    u32 r0_20 = 0;
    u32 r0_1 = call_00718378(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        u32 r0_2 = call_0030ce60(r0_1, r1);
        u32 r6 = r0_2;
        u32 r0_3 = call_00314bc4(r0_2, guest::cpu()->r[1]);
        r1 = guest::cpu()->r[1];
        if (r0_3 != 0) {
            u32 r0_4 = call_003026cc(r6, r1);
            u32 r0_5 = call_003026e8(r0, guest::cpu()->r[1]);
            r1 = guest::cpu()->r[1];
            if (r0_4 == r0_5) {
                u32 r0_6 = call_0071831c(r6, r1);
                r1 = guest::cpu()->r[1];
                if (r0_6 == *gptr<u8>(r0 + 2u)) {
                    u32 r0_7 = call_00718340(r6, r1);
                    r1 = guest::cpu()->r[1];
                    if (r0_7 == *gptr<u8>(r0 + 3u)) {
                        return 0u;
                    }
                }
            }
        }
        u32 r0_8 = call_003026e8(r0, r1);
        if (r0_8 < 0xfcu) {  // (from the original)
            u32 r0_9 = call_005ca27c(r0_8, guest::cpu()->r[1]);
            if (r0_9 == 0xfu) {  // (from the original)
                goto L_6cbdb0;
            }
        }
        r0_10 = call_003026e8(r0, guest::cpu()->r[1]);
        frame.release();
        return call_005ca5c0(r0_10, guest::cpu()->r[1]);
L_6cbdb0:;
        u32 r0_11 = call_00314a04(0u);
        u32 r4 = 0u;
        call_00314a1c(frame.at(0x18).addr(), r0_11);  // (from the original)
        call_00314a9c(frame.at(0).addr(), r0_11);
        u32 r0_15 = call_00314b04(frame.at(0).addr(), frame.at(0x18).addr());  // (from the original)
        r1 = guest::cpu()->r[1];
        if (r0_15 != 0) {
            do {
                u32 r0_16 = frame->byte_10;
                if (r0_16 < 0xfcu) {  // (from the original)
                    u32 r0_17 = call_005ca27c(r0_16, r1);
                    r1 = guest::cpu()->r[1];
                    if (r0_17 == 0xfu) {  // (from the original)
                        r4 += 1u;
                    }
                }
                call_00314b58(frame.at(0).addr(), r1);
                r0_20 = call_00314b04(frame.at(0).addr(), frame.at(0x18).addr());  // (from the original)
                r1 = guest::cpu()->r[1];
                guest::preempt();
            } while (r0_20 != 0);
        }
        if (r4 >= 2u) {
            if (r4 < 3u) {
                u32 r0_21 = call_00314bc4(r6, r1);
                r1 = guest::cpu()->r[1];
                if (r0_21 != 0) {
                    u32 r0_22 = call_003026cc(r6, r1);
                    r1 = guest::cpu()->r[1];
                    if (r0_22 < 0xfcu) {  // (from the original)
                        u32 r0_23 = call_005ca27c(r0_22, r1);
                        r1 = guest::cpu()->r[1];
                        if (r0_23 == 0xfu) {  // (from the original)
                            return 0u;
                        }
                    }
                }
            }
            guest::cpu()->r[1] = r1;
            return 1u;
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_006cbcf8
GUEST_EXPORT(0x006cbcf8, d_006cbcf8::f_006cbcf8);

// f_006cbea8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006cbea8 {


u32 f_006cbea8(u32 r0) {
    u32 r1_1 = r0 - 0x12u;  // (from the original)
    if (r1_1 > 0x2fu) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 3u;
    }
    if (r1_1 <= 0xfu) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r1_2 = r0 - 0x22u;  // (from the original)
    if (r1_2 <= 0xfu) {  // (from the original)
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    if (r0 - 0x32u <= 0xfu) {  // (from the original)
        guest::cpu()->r[1] = r1_2;
        return 2u;
    }
    guest::cpu()->r[1] = r1_2;
    return 3u;
}

}  // namespace d_006cbea8
GUEST_EXPORT(0x006cbea8, d_006cbea8::f_006cbea8);

// f_006cbee8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006cbee8 {


u32 f_006cbee8(u32 r0) {
    u32 r1_1 = r0 - 0x12u;  // (from the original)
    if (r1_1 > 0x2fu) {  // (from the original)
        return 3u;
    }
    if (r1_1 <= 0xfu) {  // (from the original)
        return r0 - 0x12u;  // (from the original)
    }
    if (r0 - 0x22u <= 0xfu) {  // (from the original)
        return r0 - 0x22u;  // (from the original)
    }
    if (r0 - 0x32u <= 0xfu) {  // (from the original)
        return r0 - 0x32u;  // (from the original)
    }
    return 3u;
}

}  // namespace d_006cbee8
GUEST_EXPORT(0x006cbee8, d_006cbee8::f_006cbee8);

// f_006cbfec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006cbfec {

inline guest::global<u32, 0x0014fdd0> global_0014fdd0;
inline guest::global<u8, 0x009506b0> global_009506b0;
inline guest::global<u32, 0x009506b4> global_009506b4;

void f_006cbfec() {
    float S0_1 = 1.0f;
    if (*global_009506b0 != 0xffu) {  // (from the original)
        guest::cpu()->s[0] = S0_1;
        return;
    }
    u32 r0_1 = *global_009506b4;
    if (r0_1 == 0) {
        guest::cpu()->s[0] = S0_1;
        return;
    }
    u32 r0_2 = *gptr<u32>(r0_1 + 0x6b94u);  // (from the original)
    if (r0_2 == 0) {
        guest::cpu()->s[0] = S0_1;
        return;
    }
    guest::cpu()->s[0] = S0_1;
    guest::call_address<u32>(*global_0014fdd0, r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_006cbfec
GUEST_EXPORT(0x006cbfec, d_006cbfec::f_006cbfec);

// f_006cc038: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006cc038 {

struct __attribute__((packed)) Local_006cc038_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006cc038_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_006cc038_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_006cc038_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006cc038_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_006cc038_ea_4, word_4, 0x4);

struct __attribute__((packed)) Local_006cc038_r0_2 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(Local_006cc038_r0_2, byte_0, 0x0);
GUEST_OFFSET(Local_006cc038_r0_2, byte_1, 0x1);

struct __attribute__((packed)) Local_006cc038_r0_4 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_006cc038_r0_4, word_0, 0x0);
GUEST_OFFSET(Local_006cc038_r0_4, word_4, 0x4);
GUEST_OFFSET(Local_006cc038_r0_4, word_8, 0x8);

struct __attribute__((packed)) Local_006cc038_r1_10 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006cc038_r1_10, word_0, 0x0);
GUEST_OFFSET(Local_006cc038_r1_10, word_4, 0x4);

struct __attribute__((packed)) Local_006cc038_r5_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006cc038_r5_1, word_0, 0x0);
GUEST_OFFSET(Local_006cc038_r5_1, word_4, 0x4);

inline constexpr guest::Function<0x001b1184, u32(u32, u32)> call_001b1184;
inline constexpr guest::Function<0x0023fc84, u32(u32, u32, u32, u32)> call_0023fc84;
inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> call_002fe7cc;
inline constexpr guest::Function<0x003026cc, u32(u32)> call_003026cc;
inline constexpr guest::Function<0x0030459c, u32(u32, u32, u32)> call_0030459c;
inline constexpr guest::Function<0x0030ce60, u32(u32)> call_0030ce60;
inline constexpr guest::Function<0x00314bc4, u32(u32)> call_00314bc4;
inline constexpr guest::Function<0x0052f0c0, u32(u32, u32)> call_0052f0c0;
inline constexpr guest::Function<0x0052f144, u32(u32)> call_0052f144;
inline constexpr guest::Function<0x0052f200, u32(u32, u32, u32)> call_0052f200;
inline constexpr guest::Function<0x005ca234, u32(u32)> call_005ca234;
inline constexpr guest::Function<0x005ca4b4, u32(u32, u32)> call_005ca4b4;
inline constexpr guest::Function<0x005ca5c0, u32(u32)> call_005ca5c0;
inline constexpr guest::Function<0x0060d20c, u32(u32, u32, u32)> call_0060d20c;
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> call_006a5e34;
inline constexpr guest::Function<0x006dd3a4, u32(u32, u32)> call_006dd3a4;
inline constexpr guest::Function<0x0071831c, u32(u32)> call_0071831c;
inline constexpr guest::Function<0x00718340, u32(u32)> call_00718340;
inline constexpr guest::Function<0x00748164, u32(u32, u32, u32)> call_00748164;
inline constexpr guest::Function<0x007481ec, u32(u32, u32)> call_007481ec;
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32)> call_0074824c;
inline constexpr guest::Function<0x00748284, u32(u32, u32)> call_00748284;

struct __attribute__((packed)) Frame_006cc038 {
    u8 unknown_0[0x8];  // (not read or written by name)
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0x10];  // (not read or written by name)
    u8 byte_20;
    u8 unknown_21[0x3];  // (not read or written by name)
    u32 word_24;
    u8 unknown_28[0x68];  // (not read or written by name)
    u8 byte_90;
    u8 unknown_91[0x3];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006cc038, word_8, 0x8);
GUEST_OFFSET(Frame_006cc038, word_c, 0xc);
GUEST_OFFSET(Frame_006cc038, byte_20, 0x20);
GUEST_OFFSET(Frame_006cc038, word_24, 0x24);
GUEST_OFFSET(Frame_006cc038, byte_90, 0x90);
GUEST_SIZE(Frame_006cc038, 0x94);

u32 f_006cc038(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_006cc038> frame;  // the original's stack frame
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_25 = 0;
    u32 r0_1 = call_006a5e34(r0, r1, r2, r3);
    if (r0_1 != 0) {
        gptr<Local_006cc038_r0_2> r0_2 = gptr<Local_006cc038_r0_2>(call_005ca234(r2));
        u32 r2_2 = u32(s8(r0_2->byte_1)) + r1;
        u32 r1_2 = u32(s8(r0_2->byte_0)) + r0;
        gptr<Local_006cc038_ea_1> ea_1 = gptr<Local_006cc038_ea_1>(frame.at(0x60).addr());  // (from the original)
        ea_1->word_0 = r1_2;
        ea_1->word_4 = r2_2;
        u32 r1_3 = *gptr<s8>(r0_2.addr() + 3u);
        u32 r1_4 = u32(*gptr<s8>(r0_2.addr() + 2u)) + r0;
        gptr<Local_006cc038_ea_4> ea_4 = gptr<Local_006cc038_ea_4>(frame.at(0x48).addr());  // (from the original)
        ea_4->word_0 = r1_4;
        ea_4->word_4 = r1_3 + r1;
        call_0052f200(frame.at(0x38).addr(), frame.at(0x60).addr(), frame.at(0x48).addr());  // (from the original)
        u32 r7 = frame.at(0x50).addr();  // (from the original)
        u32 r9_1 = frame.at(0x38).addr();  // (from the original)
        gptr<Local_006cc038_r0_4> r0_4 = gptr<Local_006cc038_r0_4>(frame.at(0x68).addr());  // (from the original)
        u32 r2_5 = r1 - 7u;
        r0_4->word_0 = r0 - 7u;
        r0_4->word_4 = r2_5;
        u32 zf_1 = r2 == 0;
        if (!zf_1) {
            zf_1 = r2 == 1u;
        }
        u32 r4 = r0_4.addr();
        r0_4->word_8 = 0;
        if (!zf_1 && r2 != 2u && r2 != 3u) {
            goto L_6cc100;
        }
        r0_5 = call_0030459c(r0_4.addr(), 0u, r2_5);
        r0_6 = call_001b1184(r0_5, r2);
        r2_5 = guest::cpu()->r[2];
        *gptr<u32>(r4 + 8u) = r0_6;
L_6cc100:;
        call_0074824c(frame.at(0x78).addr(), r9_1, r2_5);  // (from the original)
        call_00748284(frame.at(0x28).addr(), r9_1);  // (from the original)
        u32 r0_10 = call_007481ec(frame.at(0x28).addr(), frame.at(0x78).addr());  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_10 == 0) {
        } else {
            u32 r9 = 0x9506b0u;  // (from the original)
            u32 r10 = 0x9506b4u;  // (from the original)
            do {
                gptr<Local_006cc038_r5_1> r5_1 = gptr<Local_006cc038_r5_1>(frame.at(0x30).addr());  // (from the original)
                call_002fe7cc(1u, r1, r2, r3);
                if (*gptr<u32>(r4 + 8u) != 0) {
                    call_00748164(frame.at(8).addr(), r5_1.addr(), r4);
                    u32 r0_12 = frame->word_c;
                    u32 r2_10 = frame->word_8;
                    u32 r2_11 = r2_10 + (r2_10 << 2);
                    u32 r1_8 = *gptr<u32>(r4 + 8u) + ((r0_12 + (r0_12 << 2) << 5) + (r2_11 << 1));
                    call_0060d20c(frame.at(0x88).addr(), r1_8, r2_11);  // (from the original)
                    if (frame->byte_90 != 0) {
                        call_0023fc84(frame.at(0x18).addr(), r5_1->word_0, r5_1->word_4, 1u);  // (from the original)
                        u32 r5_2 = frame->byte_20;
                        if (r5_2 < 0xfcu) {  // (from the original)
                            gptr<Local_006cc038_r1_10> r1_10 = gptr<Local_006cc038_r1_10>(frame.at(0x18).addr());  // (from the original)
                            u32 r6_1 = r1_10->word_0;
                            u32 r8_1 = r1_10->word_4;
                            u32 r0_15 = call_005ca4b4(r5_2, r1_10.addr());
                            if (r0_15 != 0) {
                                u32 r0_16 = call_005ca5c0(r5_2);
                                if (r0_16 != 0) {
                                    u32 r0_17 = call_0030ce60(r0_16);
                                    u32 r0_18 = call_00314bc4(r0_17);
                                    if (r0_18 != 0) {
                                        u32 r0_19 = call_003026cc(r0_17);
                                        if (r0_19 == r5_2) {
                                            u32 r0_20 = call_0071831c(r0_17);
                                            if (r0_20 == r6_1) {
                                                u32 r0_21 = call_00718340(r0_17);
                                                if (r0_21 == r8_1) {
                                                    goto L_6cc260;
                                                }
                                            }
                                        }
                                    }
                                    call_006dd3a4(*gptr<u8>(r9) == 0xffu ? *gptr<u32>(r10) : 0u, frame->word_24);  // (from the original)
                                }
                            }
                        }
                    }
L_6cc260:;
                }
                call_0052f144(frame.at(0x28).addr());  // (from the original)
                r0_25 = call_007481ec(frame.at(0x28).addr(), frame.at(0x78).addr());  // (from the original)
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                guest::preempt();
            } while (r0_25 != 0);
        }
        u32 r0_26 = call_0052f0c0(r7, r4);
        *gptr<u32>(r0_26 + 8u) = *gptr<u32>(r4 + 8u);
        r0_1 = frame.at(0x60).addr();  // (from the original)
    }
    return r0_1;
}

}  // namespace d_006cc038
GUEST_EXPORT_FRAMED(0x006cc038, d_006cc038::f_006cc038, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_006cc304: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006cc304 {

inline constexpr guest::Function<0x003026cc, u32(u32)> call_003026cc;
inline constexpr guest::Function<0x0030ce60, u32(u32)> call_0030ce60;
inline constexpr guest::Function<0x00314bc4, u32(u32)> call_00314bc4;
inline constexpr guest::Function<0x005ca4b4, u32(u32, u32)> call_005ca4b4;
inline constexpr guest::Function<0x005ca5c0, u32(u32)> call_005ca5c0;
inline constexpr guest::Function<0x0071831c, u32(u32)> call_0071831c;
inline constexpr guest::Function<0x00718340, u32(u32)> call_00718340;

u32 f_006cc304(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = call_005ca4b4(r2, r1);
    if (r0_1 != 0) {
        u32 r0_2 = call_005ca5c0(r2);
        if (r0_2 != 0) {
            u32 r0_3 = call_0030ce60(r0_2);
            u32 r0_4 = call_00314bc4(r0_3);
            if (r0_4 != 0) {
                u32 r0_5 = call_003026cc(r0_3);
                if (r0_5 == r2) {
                    u32 r0_6 = call_0071831c(r0_3);
                    if (r0_6 == r0) {
                        u32 r0_7 = call_00718340(r0_3);
                        if (r0_7 == r1) {
                            return 0u;
                        }
                    }
                }
            }
            return 1u;
        }
    }
    return 0u;
}

}  // namespace d_006cc304
GUEST_EXPORT_FRAMED(0x006cc304, d_006cc304::f_006cc304, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_006cc388: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006cc388 {

struct __attribute__((packed)) Local_006cc388_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006cc388_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_006cc388_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_006cc388_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006cc388_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_006cc388_ea_4, word_4, 0x4);

struct __attribute__((packed)) Local_006cc388_r0_2 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(Local_006cc388_r0_2, byte_0, 0x0);
GUEST_OFFSET(Local_006cc388_r0_2, byte_1, 0x1);

struct __attribute__((packed)) Local_006cc388_r0_4 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_006cc388_r0_4, word_0, 0x0);
GUEST_OFFSET(Local_006cc388_r0_4, word_4, 0x4);
GUEST_OFFSET(Local_006cc388_r0_4, word_8, 0x8);

struct __attribute__((packed)) Local_006cc388_r1_10 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006cc388_r1_10, word_0, 0x0);
GUEST_OFFSET(Local_006cc388_r1_10, word_4, 0x4);

struct __attribute__((packed)) Local_006cc388_r5_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006cc388_r5_1, word_0, 0x0);
GUEST_OFFSET(Local_006cc388_r5_1, word_4, 0x4);

inline constexpr guest::Function<0x001b1184, u32(u32, u32)> call_001b1184;
inline constexpr guest::Function<0x0023fc84, u32(u32, u32, u32, u32)> call_0023fc84;
inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> call_002fe7cc;
inline constexpr guest::Function<0x003026cc, u32(u32)> call_003026cc;
inline constexpr guest::Function<0x0030459c, u32(u32, u32, u32)> call_0030459c;
inline constexpr guest::Function<0x0030ce60, u32(u32)> call_0030ce60;
inline constexpr guest::Function<0x00314bc4, u32(u32)> call_00314bc4;
inline constexpr guest::Function<0x0052f0c0, u32(u32, u32)> call_0052f0c0;
inline constexpr guest::Function<0x0052f144, u32(u32)> call_0052f144;
inline constexpr guest::Function<0x0052f200, u32(u32, u32, u32)> call_0052f200;
inline constexpr guest::Function<0x005ca234, u32(u32, u32)> call_005ca234;
inline constexpr guest::Function<0x005ca4b4, u32(u32, u32)> call_005ca4b4;
inline constexpr guest::Function<0x005ca5c0, u32(u32)> call_005ca5c0;
inline constexpr guest::Function<0x0060d20c, u32(u32, u32, u32)> call_0060d20c;
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> call_006a5e34;
inline constexpr guest::Function<0x006dd470, u32(u32, u32)> call_006dd470;
inline constexpr guest::Function<0x0071831c, u32(u32)> call_0071831c;
inline constexpr guest::Function<0x00718340, u32(u32)> call_00718340;
inline constexpr guest::Function<0x00748164, u32(u32, u32, u32)> call_00748164;
inline constexpr guest::Function<0x007481ec, u32(u32, u32)> call_007481ec;
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32)> call_0074824c;
inline constexpr guest::Function<0x00748284, u32(u32, u32)> call_00748284;

struct __attribute__((packed)) Frame_006cc388 {
    u8 unknown_0[0x8];  // (not read or written by name)
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0x10];  // (not read or written by name)
    u8 byte_20;
    u8 unknown_21[0x3];  // (not read or written by name)
    u32 word_24;
    u8 unknown_28[0x68];  // (not read or written by name)
    u8 byte_90;
    u8 unknown_91[0x3];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006cc388, word_8, 0x8);
GUEST_OFFSET(Frame_006cc388, word_c, 0xc);
GUEST_OFFSET(Frame_006cc388, byte_20, 0x20);
GUEST_OFFSET(Frame_006cc388, word_24, 0x24);
GUEST_OFFSET(Frame_006cc388, byte_90, 0x90);
GUEST_SIZE(Frame_006cc388, 0x94);

void f_006cc388(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_006cc388> frame;  // the original's stack frame
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_25 = 0;
    u32 r0_1 = call_006a5e34(r0, r1, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        gptr<Local_006cc388_r0_2> r0_2 = gptr<Local_006cc388_r0_2>(call_005ca234(r2, r1_1));
        u32 r2_2 = u32(s8(r0_2->byte_1)) + r1;
        u32 r1_2 = u32(s8(r0_2->byte_0)) + r0;
        gptr<Local_006cc388_ea_1> ea_1 = gptr<Local_006cc388_ea_1>(frame.at(0x60).addr());  // (from the original)
        ea_1->word_0 = r1_2;
        ea_1->word_4 = r2_2;
        u32 r1_3 = *gptr<s8>(r0_2.addr() + 3u);
        u32 r1_4 = u32(*gptr<s8>(r0_2.addr() + 2u)) + r0;
        gptr<Local_006cc388_ea_4> ea_4 = gptr<Local_006cc388_ea_4>(frame.at(0x48).addr());  // (from the original)
        ea_4->word_0 = r1_4;
        ea_4->word_4 = r1_3 + r1;
        call_0052f200(frame.at(0x38).addr(), frame.at(0x60).addr(), frame.at(0x48).addr());  // (from the original)
        u32 r7 = frame.at(0x50).addr();  // (from the original)
        u32 r9_1 = frame.at(0x38).addr();  // (from the original)
        gptr<Local_006cc388_r0_4> r0_4 = gptr<Local_006cc388_r0_4>(frame.at(0x68).addr());  // (from the original)
        u32 r2_5 = r1 - 7u;
        r0_4->word_0 = r0 - 7u;
        r0_4->word_4 = r2_5;
        u32 zf_1 = r2 == 0;
        if (!zf_1) {
            zf_1 = r2 == 1u;
        }
        u32 r4 = r0_4.addr();
        r0_4->word_8 = 0;
        if (!zf_1 && r2 != 2u && r2 != 3u) {
            goto L_6cc450;
        }
        r0_5 = call_0030459c(r0_4.addr(), 0u, r2_5);
        r0_6 = call_001b1184(r0_5, r2);
        r2_5 = guest::cpu()->r[2];
        *gptr<u32>(r4 + 8u) = r0_6;
L_6cc450:;
        call_0074824c(frame.at(0x78).addr(), r9_1, r2_5);  // (from the original)
        call_00748284(frame.at(0x28).addr(), r9_1);  // (from the original)
        u32 r0_10 = call_007481ec(frame.at(0x28).addr(), frame.at(0x78).addr());  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_10 == 0) {
        } else {
            u32 r9 = 0x9506b0u;  // (from the original)
            u32 r10 = 0x9506b4u;  // (from the original)
            do {
                gptr<Local_006cc388_r5_1> r5_1 = gptr<Local_006cc388_r5_1>(frame.at(0x30).addr());  // (from the original)
                call_002fe7cc(1u, r1, r2, r3);
                if (*gptr<u32>(r4 + 8u) != 0) {
                    call_00748164(frame.at(8).addr(), r5_1.addr(), r4);
                    u32 r0_12 = frame->word_c;
                    u32 r2_10 = frame->word_8;
                    u32 r2_11 = r2_10 + (r2_10 << 2);
                    u32 r1_8 = *gptr<u32>(r4 + 8u) + ((r0_12 + (r0_12 << 2) << 5) + (r2_11 << 1));
                    call_0060d20c(frame.at(0x88).addr(), r1_8, r2_11);  // (from the original)
                    if (frame->byte_90 != 0) {
                        call_0023fc84(frame.at(0x18).addr(), r5_1->word_0, r5_1->word_4, 1u);  // (from the original)
                        u32 r5_2 = frame->byte_20;
                        if (r5_2 < 0xfcu) {  // (from the original)
                            gptr<Local_006cc388_r1_10> r1_10 = gptr<Local_006cc388_r1_10>(frame.at(0x18).addr());  // (from the original)
                            u32 r6_1 = r1_10->word_0;
                            u32 r8_1 = r1_10->word_4;
                            u32 r0_15 = call_005ca4b4(r5_2, r1_10.addr());
                            if (r0_15 != 0) {
                                u32 r0_16 = call_005ca5c0(r5_2);
                                if (r0_16 != 0) {
                                    u32 r0_17 = call_0030ce60(r0_16);
                                    u32 r0_18 = call_00314bc4(r0_17);
                                    if (r0_18 != 0) {
                                        u32 r0_19 = call_003026cc(r0_17);
                                        if (r0_19 == r5_2) {
                                            u32 r0_20 = call_0071831c(r0_17);
                                            if (r0_20 == r6_1) {
                                                u32 r0_21 = call_00718340(r0_17);
                                                if (r0_21 == r8_1) {
                                                    goto L_6cc5b0;
                                                }
                                            }
                                        }
                                    }
                                    call_006dd470(*gptr<u8>(r9) == 0xffu ? *gptr<u32>(r10) : 0u, frame->word_24);  // (from the original)
                                }
                            }
                        }
                    }
L_6cc5b0:;
                }
                call_0052f144(frame.at(0x28).addr());  // (from the original)
                r0_25 = call_007481ec(frame.at(0x28).addr(), frame.at(0x78).addr());  // (from the original)
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                guest::preempt();
            } while (r0_25 != 0);
        }
        u32 r0_26 = call_0052f0c0(r7, r4);
        r1_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r0_26 + 8u) = r1_1;
    }
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_006cc388
GUEST_EXPORT_FRAMED(0x006cc388, d_006cc388::f_006cc388, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_006cc654: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006cc654 {

struct __attribute__((packed)) Local_006cc654_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006cc654_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_006cc654_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_006cc654_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006cc654_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_006cc654_ea_4, word_4, 0x4);

struct __attribute__((packed)) Local_006cc654_r0_2 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(Local_006cc654_r0_2, byte_0, 0x0);
GUEST_OFFSET(Local_006cc654_r0_2, byte_1, 0x1);

struct __attribute__((packed)) Local_006cc654_r0_4 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_006cc654_r0_4, word_0, 0x0);
GUEST_OFFSET(Local_006cc654_r0_4, word_4, 0x4);
GUEST_OFFSET(Local_006cc654_r0_4, word_8, 0x8);

struct __attribute__((packed)) Local_006cc654_r1_10 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006cc654_r1_10, word_0, 0x0);
GUEST_OFFSET(Local_006cc654_r1_10, word_4, 0x4);

struct __attribute__((packed)) Local_006cc654_r5_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006cc654_r5_1, word_0, 0x0);
GUEST_OFFSET(Local_006cc654_r5_1, word_4, 0x4);

inline constexpr guest::Function<0x001b1184, u32(u32, u32)> call_001b1184;
inline constexpr guest::Function<0x0023fc84, u32(u32, u32, u32, u32)> call_0023fc84;
inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> call_002fe7cc;
inline constexpr guest::Function<0x003026cc, u32(u32)> call_003026cc;
inline constexpr guest::Function<0x0030459c, u32(u32, u32, u32)> call_0030459c;
inline constexpr guest::Function<0x0030ce60, u32(u32)> call_0030ce60;
inline constexpr guest::Function<0x00314bc4, u32(u32)> call_00314bc4;
inline constexpr guest::Function<0x0052f0c0, u32(u32, u32)> call_0052f0c0;
inline constexpr guest::Function<0x0052f144, u32(u32)> call_0052f144;
inline constexpr guest::Function<0x0052f200, u32(u32, u32, u32)> call_0052f200;
inline constexpr guest::Function<0x005ca234, u32(u32, u32)> call_005ca234;
inline constexpr guest::Function<0x005ca4b4, u32(u32, u32)> call_005ca4b4;
inline constexpr guest::Function<0x005ca5c0, u32(u32)> call_005ca5c0;
inline constexpr guest::Function<0x0060d20c, u32(u32, u32, u32)> call_0060d20c;
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> call_006a5e34;
inline constexpr guest::Function<0x006de930, u32(u32, u32)> call_006de930;
inline constexpr guest::Function<0x0071831c, u32(u32)> call_0071831c;
inline constexpr guest::Function<0x00718340, u32(u32)> call_00718340;
inline constexpr guest::Function<0x00748164, u32(u32, u32, u32)> call_00748164;
inline constexpr guest::Function<0x007481ec, u32(u32, u32)> call_007481ec;
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32)> call_0074824c;
inline constexpr guest::Function<0x00748284, u32(u32, u32)> call_00748284;

struct __attribute__((packed)) Frame_006cc654 {
    u8 unknown_0[0x8];  // (not read or written by name)
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0x10];  // (not read or written by name)
    u8 byte_20;
    u8 unknown_21[0x3];  // (not read or written by name)
    u32 word_24;
    u8 unknown_28[0x68];  // (not read or written by name)
    u8 byte_90;
    u8 unknown_91[0x3];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006cc654, word_8, 0x8);
GUEST_OFFSET(Frame_006cc654, word_c, 0xc);
GUEST_OFFSET(Frame_006cc654, byte_20, 0x20);
GUEST_OFFSET(Frame_006cc654, word_24, 0x24);
GUEST_OFFSET(Frame_006cc654, byte_90, 0x90);
GUEST_SIZE(Frame_006cc654, 0x94);

void f_006cc654(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_006cc654> frame;  // the original's stack frame
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_25 = 0;
    u32 r0_1 = call_006a5e34(r0, r1, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        gptr<Local_006cc654_r0_2> r0_2 = gptr<Local_006cc654_r0_2>(call_005ca234(r2, r1_1));
        u32 r2_2 = u32(s8(r0_2->byte_1)) + r1;
        u32 r1_2 = u32(s8(r0_2->byte_0)) + r0;
        gptr<Local_006cc654_ea_1> ea_1 = gptr<Local_006cc654_ea_1>(frame.at(0x60).addr());  // (from the original)
        ea_1->word_0 = r1_2;
        ea_1->word_4 = r2_2;
        u32 r1_3 = *gptr<s8>(r0_2.addr() + 3u);
        u32 r1_4 = u32(*gptr<s8>(r0_2.addr() + 2u)) + r0;
        gptr<Local_006cc654_ea_4> ea_4 = gptr<Local_006cc654_ea_4>(frame.at(0x48).addr());  // (from the original)
        ea_4->word_0 = r1_4;
        ea_4->word_4 = r1_3 + r1;
        call_0052f200(frame.at(0x38).addr(), frame.at(0x60).addr(), frame.at(0x48).addr());  // (from the original)
        u32 r7 = frame.at(0x50).addr();  // (from the original)
        u32 r9_1 = frame.at(0x38).addr();  // (from the original)
        gptr<Local_006cc654_r0_4> r0_4 = gptr<Local_006cc654_r0_4>(frame.at(0x68).addr());  // (from the original)
        u32 r2_5 = r1 - 7u;
        r0_4->word_0 = r0 - 7u;
        r0_4->word_4 = r2_5;
        u32 zf_1 = r2 == 0;
        if (!zf_1) {
            zf_1 = r2 == 1u;
        }
        u32 r4 = r0_4.addr();
        r0_4->word_8 = 0;
        if (!zf_1 && r2 != 2u && r2 != 3u) {
            goto L_6cc71c;
        }
        r0_5 = call_0030459c(r0_4.addr(), 0u, r2_5);
        r0_6 = call_001b1184(r0_5, r2);
        r2_5 = guest::cpu()->r[2];
        *gptr<u32>(r4 + 8u) = r0_6;
L_6cc71c:;
        call_0074824c(frame.at(0x78).addr(), r9_1, r2_5);  // (from the original)
        call_00748284(frame.at(0x28).addr(), r9_1);  // (from the original)
        u32 r0_10 = call_007481ec(frame.at(0x28).addr(), frame.at(0x78).addr());  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_10 == 0) {
        } else {
            u32 r9 = 0x9506b0u;  // (from the original)
            u32 r10 = 0x9506b4u;  // (from the original)
            do {
                gptr<Local_006cc654_r5_1> r5_1 = gptr<Local_006cc654_r5_1>(frame.at(0x30).addr());  // (from the original)
                call_002fe7cc(1u, r1, r2, r3);
                if (*gptr<u32>(r4 + 8u) != 0) {
                    call_00748164(frame.at(8).addr(), r5_1.addr(), r4);
                    u32 r0_12 = frame->word_c;
                    u32 r2_10 = frame->word_8;
                    u32 r2_11 = r2_10 + (r2_10 << 2);
                    u32 r1_8 = *gptr<u32>(r4 + 8u) + ((r0_12 + (r0_12 << 2) << 5) + (r2_11 << 1));
                    call_0060d20c(frame.at(0x88).addr(), r1_8, r2_11);  // (from the original)
                    if (frame->byte_90 != 0) {
                        call_0023fc84(frame.at(0x18).addr(), r5_1->word_0, r5_1->word_4, 1u);  // (from the original)
                        u32 r5_2 = frame->byte_20;
                        if (r5_2 < 0xfcu) {  // (from the original)
                            gptr<Local_006cc654_r1_10> r1_10 = gptr<Local_006cc654_r1_10>(frame.at(0x18).addr());  // (from the original)
                            u32 r6_1 = r1_10->word_0;
                            u32 r8_1 = r1_10->word_4;
                            u32 r0_15 = call_005ca4b4(r5_2, r1_10.addr());
                            if (r0_15 != 0) {
                                u32 r0_16 = call_005ca5c0(r5_2);
                                if (r0_16 != 0) {
                                    u32 r0_17 = call_0030ce60(r0_16);
                                    u32 r0_18 = call_00314bc4(r0_17);
                                    if (r0_18 != 0) {
                                        u32 r0_19 = call_003026cc(r0_17);
                                        if (r0_19 == r5_2) {
                                            u32 r0_20 = call_0071831c(r0_17);
                                            if (r0_20 == r6_1) {
                                                u32 r0_21 = call_00718340(r0_17);
                                                if (r0_21 == r8_1) {
                                                    goto L_6cc87c;
                                                }
                                            }
                                        }
                                    }
                                    call_006de930(*gptr<u8>(r9) == 0xffu ? *gptr<u32>(r10) : 0u, frame->word_24);  // (from the original)
                                }
                            }
                        }
                    }
L_6cc87c:;
                }
                call_0052f144(frame.at(0x28).addr());  // (from the original)
                r0_25 = call_007481ec(frame.at(0x28).addr(), frame.at(0x78).addr());  // (from the original)
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                guest::preempt();
            } while (r0_25 != 0);
        }
        u32 r0_26 = call_0052f0c0(r7, r4);
        r1_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r0_26 + 8u) = r1_1;
    }
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_006cc654
GUEST_EXPORT_FRAMED(0x006cc654, d_006cc654::f_006cc654, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_006cc920: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006cc920 {


u32 f_006cc920(u32 r0) {
    return r0 == 0x5cu || r0 == 0x68u;  // (from the original)
}

}  // namespace d_006cc920
GUEST_EXPORT(0x006cc920, d_006cc920::f_006cc920);

// f_006ccc1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ccc1c {

struct __attribute__((packed)) Object_006ccc1c_0 {
    u8 unknown_0[0x1c204];  // (not used here)
    u8 byte_1c204;
};
GUEST_OFFSET(Object_006ccc1c_0, byte_1c204, 0x1c204);


void f_006ccc1c(gptr<Object_006ccc1c_0> arg0) {
    arg0->byte_1c204 = 0xff;  // (from the original)
    guest::cpu()->r[1] = arg0.addr() + 0x1c000u;  // (from the original)
}

}  // namespace d_006ccc1c
GUEST_EXPORT(0x006ccc1c, d_006ccc1c::f_006ccc1c);

// f_006ccc2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ccc2c {

struct __attribute__((packed)) Object_006ccc2c_0 {
    u8 unknown_0[0x1c204];  // (not used here)
    u8 byte_1c204;
};
GUEST_OFFSET(Object_006ccc2c_0, byte_1c204, 0x1c204);


void f_006ccc2c(gptr<Object_006ccc2c_0> arg0) {
    arg0->byte_1c204 = 0;
}

}  // namespace d_006ccc2c
GUEST_EXPORT(0x006ccc2c, d_006ccc2c::f_006ccc2c);

// f_006ccc3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ccc3c {

inline constexpr guest::Function<0x002ff408, u32(u32, u32, u32, u32)> call_002ff408;

u32 f_006ccc3c(u32 r0, u32 r1) {
    u32 r5 = r0;
    u32 r4 = 0u;
    do {
        call_002ff408(r5 + (r4 + (r4 << 2) << 7) + 4u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0xb4u);  // (from the original)
    *gptr<u8>(r5 + 0x1c204u) = 0;  // (from the original)
    guest::cpu()->r[1] = 0x1c204u;  // (from the original)
    return 0u;
}

}  // namespace d_006ccc3c
GUEST_EXPORT_FRAMED(0x006ccc3c, d_006ccc3c::f_006ccc3c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006ccc78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ccc78 {


u32 f_006ccc78(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r1_1 = r2 + (r1 + (r1 << 1) << 1);
    u32 r1_2 = r3 + (r1_1 + (r1_1 << 2) << 1);
    return r0 + (r1_2 + (r1_2 << 2) << 7) + 4u;
}

}  // namespace d_006ccc78
GUEST_EXPORT(0x006ccc78, d_006ccc78::f_006ccc78);

// f_006ccd14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ccd14 {

struct __attribute__((packed)) Local_006ccd14_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006ccd14_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_006ccd14_ea_1, word_4, 0x4);

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> call_002fc8e8;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> call_002fc934;

void f_006ccd14(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r2_1 = r3 + (r2 + (r2 << 1) << 1);
    gptr<Local_006ccd14_ea_1> ea_1 = gptr<Local_006ccd14_ea_1>(frame.at(0x10).addr());  // (from the original)
    u32 r5_1 = ea_1->word_4;
    u32 r4_1 = r1 + (ea_1->word_0 + (r2_1 + (r2_1 << 2) << 1) << 2);
    call_002fc934(r0, r4_1);
    frame.release();
    call_002fc8e8(r4_1, r5_1);
    return;
}

}  // namespace d_006ccd14
GUEST_EXPORT(0x006ccd14, d_006ccd14::f_006ccd14);

// f_006ccd80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ccd80 {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> call_002fc8e8;
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;
inline constexpr guest::Function<0x0076aff4, u32(u32, u32, u32, u32)> call_0076aff4;

struct __attribute__((packed)) Frame_006ccd80 {
    u32 word_0;
};
GUEST_OFFSET(Frame_006ccd80, word_0, 0x0);
GUEST_SIZE(Frame_006ccd80, 0x4);

void f_006ccd80(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_006ccd80> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r5 = r0;
    u32 r7 = r1;
    u32 r4 = 0u;
    do {
        u32 r0_1 = r5 + (r4 << 2);
        u32 r0_2 = call_002fcaf4(r0_1, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_2 == 0) {
            call_0076aff4(frame.at(0).addr(), r0_1, r7, r3);
            call_002fc8e8(r0_1, frame.at(0).addr());
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0xb4u);  // (from the original)
}

}  // namespace d_006ccd80
GUEST_EXPORT_FRAMED(0x006ccd80, d_006ccd80::f_006ccd80, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_006ccde0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ccde0 {


u32 f_006ccde0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r1_1 = r2 + (r1 + (r1 << 1) << 1);
    u32 zf_1 = (r1_1 & 1u) == 0;
    if (!zf_1) {
        r2 = r3 + 4u;
    }
    u32 r12_3 = *gptr<u8>(((r0 + (r1_1 >> 1)) + 0x25c00u) + 0x384u);  // (from the original)
    if (zf_1) {
        r2 = r3;
    }
    if ((r12_3 & lsl_r(1u, r2 & 0xff)) == 0) {  // (from the original)
        return 0u;
    }
    u32 r1_2 = r3 + (r1_1 << 2);
    u32 r1_3 = (r1_2 << 4) - r1_2;
    return r0 + (r1_3 + (r1_3 << 3) << 4) + 4u;
}

}  // namespace d_006ccde0
GUEST_EXPORT_FRAMED(0x006ccde0, d_006ccde0::f_006ccde0, 0x10);  // pushes {r4} first, as the original

// f_006cce34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006cce34 {

struct __attribute__((packed)) Object_006cce34_0 {
    u8 unknown_0[0x25f8d];  // (not used here)
    u8 byte_25f8d;
};
GUEST_OFFSET(Object_006cce34_0, byte_25f8d, 0x25f8d);


void f_006cce34(gptr<Object_006cce34_0> arg0) {
    arg0->byte_25f8d = 0xff;  // (from the original)
    guest::cpu()->r[1] = 0xffu;  // (from the original)
}

}  // namespace d_006cce34
GUEST_EXPORT(0x006cce34, d_006cce34::f_006cce34);

// f_006cce48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006cce48 {

struct __attribute__((packed)) Object_006cce48_0 {
    u8 unknown_0[0x25f8d];  // (not used here)
    u8 byte_25f8d;
};
GUEST_OFFSET(Object_006cce48_0, byte_25f8d, 0x25f8d);


void f_006cce48(gptr<Object_006cce48_0> arg0) {
    arg0->byte_25f8d = 0;
}

}  // namespace d_006cce48
GUEST_EXPORT(0x006cce48, d_006cce48::f_006cce48);

// f_006cce5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006cce5c {

struct __attribute__((packed)) Local_006cce5c_r0_1 {
    u8 byte_0;
};
GUEST_OFFSET(Local_006cce5c_r0_1, byte_0, 0x0);

inline constexpr guest::Function<0x001b49b0, u32(u32, u32, u32, u32)> call_001b49b0;

void f_006cce5c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r6_1 = r2 + (r1 + (r1 << 1) << 1);
    u32 r1_1 = r3 + (r6_1 << 2);
    u32 r1_2 = (r1_1 << 4) - r1_1;
    u32 r4_1 = r3;
    u32 r2_1 = r0 + (r1_2 + (r1_2 << 3) << 4) + 4u;
    call_001b49b0(r2_1, *gptr<u32>(guest::cpu()->r[13] + 0x10u), r2_1, r3);  // (from the original)
    gptr<Local_006cce5c_r0_1> r0_1 = gptr<Local_006cce5c_r0_1>(r0 + (r6_1 >> 1) + 0x25f84u);  // (from the original)
    if ((r6_1 & 1u) != 0) {
        r4_1 += 4u;
    }
    u32 r1_4 = u32(r0_1->byte_0) | lsl_r(1u, r4_1 & 0xff);  // (from the original)
    r0_1->byte_0 = u8(r1_4);
    guest::cpu()->r[1] = r1_4;
}

}  // namespace d_006cce5c
GUEST_EXPORT_FRAMED(0x006cce5c, d_006cce5c::f_006cce5c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006ccf10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ccf10 {

inline constexpr guest::Function<0x003059f8, u32(u32, u32, u32, u32)> call_003059f8;
inline constexpr guest::Function<0x007795bc, u32(u32)> call_007795bc;

u32 f_006ccf10(u32 r0, u32 r1) {
    u32 r5 = r0;
    u32 r4 = 0u;
    do {
        u32 r0_1 = (r4 << 4) - r4;
        call_003059f8(r5 + (r0_1 + (r0_1 << 3) << 4) + 4u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0x48u);  // (from the original)
    call_007795bc(r5 + 0x25f84u);  // (from the original)
    *gptr<u8>(r5 + 0x25f8du) = 0;  // (from the original)
    guest::cpu()->r[1] = 0u;
    return 0x25f8du;  // (from the original)
}

}  // namespace d_006ccf10
GUEST_EXPORT_FRAMED(0x006ccf10, d_006ccf10::f_006ccf10, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006ccf68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ccf68 {

inline constexpr guest::Function<0x00134544, u32(u32, u32, u32, u32)> call_00134544;

u32 f_006ccf68() {
    return call_00134544(guest::cpu()->r[0], guest::cpu()->r[1], 0x5a0u, guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_006ccf68
GUEST_EXPORT(0x006ccf68, d_006ccf68::f_006ccf68);

// f_006ccf70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ccf70 {

struct __attribute__((packed)) Local_006ccf70_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006ccf70_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_006ccf70_ea_1, word_4, 0x4);

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> call_002fc8e8;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> call_002fc934;

void f_006ccf70(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r2_1 = r2 + (r2 << 3) + r3;
    gptr<Local_006ccf70_ea_1> ea_1 = gptr<Local_006ccf70_ea_1>(frame.at(0x10).addr());  // (from the original)
    u32 r5_1 = ea_1->word_4;
    u32 r4_1 = r1 + (ea_1->word_0 + (r2_1 + (r2_1 << 2) << 1) << 2);
    call_002fc934(r0, r4_1);
    frame.release();
    call_002fc8e8(r4_1, r5_1);
    return;
}

}  // namespace d_006ccf70
GUEST_EXPORT(0x006ccf70, d_006ccf70::f_006ccf70);

// f_006ccfdc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ccfdc {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> call_002fc8e8;
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;
inline constexpr guest::Function<0x0076aff4, u32(u32, u32, u32, u32)> call_0076aff4;

struct __attribute__((packed)) Frame_006ccfdc {
    u32 word_0;
};
GUEST_OFFSET(Frame_006ccfdc, word_0, 0x0);
GUEST_SIZE(Frame_006ccfdc, 0x4);

void f_006ccfdc(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_006ccfdc> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r5 = r0;
    u32 r7 = r1;
    u32 r4 = 0u;
    do {
        u32 r0_1 = r5 + (r4 << 2);
        u32 r0_2 = call_002fcaf4(r0_1, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_2 == 0) {
            call_0076aff4(frame.at(0).addr(), r0_1, r7, r3);
            call_002fc8e8(r0_1, frame.at(0).addr());
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0x168u);  // (from the original)
}

}  // namespace d_006ccfdc
GUEST_EXPORT_FRAMED(0x006ccfdc, d_006ccfdc::f_006ccfdc, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_006cd79c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006cd79c {

inline constexpr guest::Function<0x001323bc, u32(u32)> call_001323bc;
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32)> call_00569e6c;

void f_006cd79c(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = call_001323bc(r0);
    frame.release();
    call_00569e6c(r0_1, r0 + 0x26cu, 1u);  // (from the original)
    return;
}

}  // namespace d_006cd79c
GUEST_EXPORT(0x006cd79c, d_006cd79c::f_006cd79c);

// f_006cd970: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006cd970 {

inline constexpr guest::Function<0x00132364, u32(u32, u32, u32, u32)> call_00132364;
inline constexpr guest::Function<0x001323b4, u32(u32)> call_001323b4;

void f_006cd970(u32 r0) {
    call_00132364(r0 + 0x24u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_001323b4(r0 + 0x26cu);  // (from the original)
}

}  // namespace d_006cd970
GUEST_EXPORT_FRAMED(0x006cd970, d_006cd970::f_006cd970, 0x4010);  // pushes {r4, lr} first, as the original

// f_006cda18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006cda18 {

inline constexpr guest::Function<0x00567e24, u32(u32, u32)> call_00567e24;

u32 f_006cda18(u32 r0) {
    return call_00567e24(r0 + 0x24u, 0x6cda24u);  // (from the original)
}

}  // namespace d_006cda18
GUEST_EXPORT(0x006cda18, d_006cda18::f_006cda18);

// f_006ce44c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ce44c {

struct __attribute__((packed)) Object_006ce44c_0 {
    u8 unknown_0[0x154];  // (not used here)
    u32 word_154;
    u32 word_158;
    u32 word_15c;
    u32 word_160;
    u8 unknown_164[0x4];  // (not used here)
    u8 byte_168;
    u8 byte_169;
    u8 unknown_16a[0xce];  // (not used here)
    u32 word_238;
    u32 word_23c;
    u8 unknown_240[0x6];  // (not used here)
    u8 byte_246;
    u8 byte_247;
    u8 byte_248;
};
GUEST_OFFSET(Object_006ce44c_0, word_154, 0x154);
GUEST_OFFSET(Object_006ce44c_0, word_158, 0x158);
GUEST_OFFSET(Object_006ce44c_0, word_15c, 0x15c);
GUEST_OFFSET(Object_006ce44c_0, word_160, 0x160);
GUEST_OFFSET(Object_006ce44c_0, byte_168, 0x168);
GUEST_OFFSET(Object_006ce44c_0, byte_169, 0x169);
GUEST_OFFSET(Object_006ce44c_0, word_238, 0x238);
GUEST_OFFSET(Object_006ce44c_0, word_23c, 0x23c);
GUEST_OFFSET(Object_006ce44c_0, byte_246, 0x246);
GUEST_OFFSET(Object_006ce44c_0, byte_247, 0x247);
GUEST_OFFSET(Object_006ce44c_0, byte_248, 0x248);

struct __attribute__((packed)) Object_006ce44c_1 {
    u8 byte_0;
};
GUEST_OFFSET(Object_006ce44c_1, byte_0, 0x0);

struct __attribute__((packed)) Object_006ce44c_2 {
    u8 byte_0;
};
GUEST_OFFSET(Object_006ce44c_2, byte_0, 0x0);

struct __attribute__((packed)) Local_006ce44c_r0_10 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_006ce44c_r0_10, byte_b7, 0xb7);

struct __attribute__((packed)) Local_006ce44c_r0_2 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_006ce44c_r0_2, byte_b7, 0xb7);

struct __attribute__((packed)) Local_006ce44c_r0_3 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_006ce44c_r0_3, byte_b7, 0xb7);

struct __attribute__((packed)) Local_006ce44c_r0_4 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_006ce44c_r0_4, byte_b7, 0xb7);

struct __attribute__((packed)) Local_006ce44c_r0_5 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_006ce44c_r0_5, byte_b7, 0xb7);

struct __attribute__((packed)) Local_006ce44c_r0_6 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_006ce44c_r0_6, byte_b7, 0xb7);

struct __attribute__((packed)) Local_006ce44c_r0_7 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_006ce44c_r0_7, byte_b7, 0xb7);

struct __attribute__((packed)) Local_006ce44c_r0_8 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_006ce44c_r0_8, byte_b7, 0xb7);

struct __attribute__((packed)) Local_006ce44c_r0_9 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_006ce44c_r0_9, byte_b7, 0xb7);

struct __attribute__((packed)) Local_006ce44c_r1_2 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_006ce44c_r1_2, float_0, 0x0);
GUEST_OFFSET(Local_006ce44c_r1_2, float_4, 0x4);

inline constexpr guest::Function<0x002b6a00, u32(u32, u32)> call_002b6a00;
inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> call_004b4fc0;

struct __attribute__((packed)) Frame_006ce44c {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u8 unknown_1c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006ce44c, word_0, 0x0);
GUEST_OFFSET(Frame_006ce44c, word_4, 0x4);
GUEST_OFFSET(Frame_006ce44c, word_8, 0x8);
GUEST_OFFSET(Frame_006ce44c, word_c, 0xc);
GUEST_OFFSET(Frame_006ce44c, word_10, 0x10);
GUEST_OFFSET(Frame_006ce44c, word_14, 0x14);
GUEST_OFFSET(Frame_006ce44c, word_18, 0x18);
GUEST_SIZE(Frame_006ce44c, 0x20);

void f_006ce44c(gptr<Object_006ce44c_0> arg0, gptr<Object_006ce44c_1> arg1, gptr<Object_006ce44c_2> arg2, float S0, float S1) {
    guest::StackFrameOf<Frame_006ce44c> frame;  // the original's stack frame
    arg0->byte_168 = u8(u32(arg1->byte_0));
    u32 r1_1 = arg2->byte_0;
    u32 r0_1 = 0u;
    arg0->byte_169 = u8(r1_1);
    if (r1_1 != 1u) {
        if (r1_1 == 2u) {
            gptr<Local_006ce44c_r0_2> r0_2 = gptr<Local_006ce44c_r0_2>(arg0->word_15c);
            r0_2->byte_b7 = u8(u32(r0_2->byte_b7) & 0xfeu);  // (from the original)
            gptr<Local_006ce44c_r0_3> r0_3 = gptr<Local_006ce44c_r0_3>(arg0->word_158);
            r0_3->byte_b7 = u8(u32(r0_3->byte_b7) & 0xfeu | 1u);  // (from the original)
            gptr<Local_006ce44c_r0_4> r0_4 = gptr<Local_006ce44c_r0_4>(arg0->word_154);
            r0_4->byte_b7 = u8(u32(r0_4->byte_b7) & 0xfeu);  // (from the original)
            r0_1 = call_004b4fc0(arg0.addr(), 0x6ce5e8u, 1u, guest::cpu()->r[3]);  // (from the original)
        } else if (r1_1 == 3u) {
            gptr<Local_006ce44c_r0_5> r0_5 = gptr<Local_006ce44c_r0_5>(arg0->word_15c);
            r0_5->byte_b7 = u8(u32(r0_5->byte_b7) & 0xfeu | 1u);  // (from the original)
            gptr<Local_006ce44c_r0_6> r0_6 = gptr<Local_006ce44c_r0_6>(arg0->word_158);
            r0_6->byte_b7 = u8(u32(r0_6->byte_b7) & 0xfeu);  // (from the original)
            gptr<Local_006ce44c_r0_7> r0_7 = gptr<Local_006ce44c_r0_7>(arg0->word_154);
            r0_7->byte_b7 = u8(u32(r0_7->byte_b7) & 0xfeu);  // (from the original)
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            r0_1 = call_004b4fc0(arg0.addr(), 0x6ce5f4u, 1u, guest::cpu()->r[3]);  // (from the original)
        }
    } else {
        gptr<Local_006ce44c_r0_8> r0_8 = gptr<Local_006ce44c_r0_8>(arg0->word_15c);
        r0_8->byte_b7 = u8(u32(r0_8->byte_b7) & 0xfeu);  // (from the original)
        gptr<Local_006ce44c_r0_9> r0_9 = gptr<Local_006ce44c_r0_9>(arg0->word_158);
        r0_9->byte_b7 = u8(u32(r0_9->byte_b7) & 0xfeu);  // (from the original)
        gptr<Local_006ce44c_r0_10> r0_10 = gptr<Local_006ce44c_r0_10>(arg0->word_154);
        r0_10->byte_b7 = u8(u32(r0_10->byte_b7) & 0xfeu | 1u);  // (from the original)
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        r0_1 = call_004b4fc0(arg0.addr(), 0x6ce5dcu, 1u, guest::cpu()->r[3]);  // (from the original)
    }
    frame->word_0 = 0;
    frame->word_4 = 0;
    float S0_1 = 0.0f;
    float S1_1 = -60.0f;
    gptr<Local_006ce44c_r1_2> r1_2 = gptr<Local_006ce44c_r1_2>(frame.at(8).addr());
    frame->word_8 = 0;
    frame->word_c = 0;
    frame->word_10 = 0;
    frame->word_14 = 0;
    frame->word_18 = 0;
    r1_2->float_0 = S0_1;
    r1_2->float_4 = S1_1;
    u32 r2_1 = arg0->word_160;
    frame->word_4 = r0_1;
    frame->word_0 = r2_1;
    arg0->word_238 = 0x1000422;  // (from the original)
    arg0->byte_246 = 1;
    arg0->word_23c = 0x1000421;  // (from the original)
    arg0->byte_247 = 1;
    arg0->byte_248 = 1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    call_002b6a00(arg0.addr() + 0x16cu, frame.at(0).addr());  // (from the original)
}

}  // namespace d_006ce44c
GUEST_EXPORT_FRAMED(0x006ce44c, d_006ce44c::f_006ce44c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006ce67c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ce67c {

inline guest::global<u8, 0x0094e4b4> global_0094e4b4;
inline guest::global<u8, 0x0094e4b5> global_0094e4b5;
inline guest::global<u8, 0x00957320> global_00957320;
inline constexpr guest::Function<0x002f74c8, u32(u32)> call_002f74c8;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> call_002f74e0;
inline constexpr guest::Function<0x003041c8, u32(u32)> call_003041c8;
inline constexpr guest::Function<0x005b4120, u32(u32)> call_005b4120;

void f_006ce67c(u32 r0) {
    u32 r0_1 = call_005b4120(r0);
    if (r0_1 != 0xa5u) {  // (from the original)
        u32 r0_2 = call_002f74c8(r0_1);
        if (r0_2 != *global_0094e4b4 && r0_2 != 0xa5u) {  // (from the original)
            *global_0094e4b4 = u8(r0_2);
        }
        if (r0_1 != *global_0094e4b5) {
            *global_0094e4b5 = u8(r0_1);
        }
        u32 r0_3 = call_002f74e0(0x20000u, r0_1);  // (from the original)
        u32 r0_4 = call_002f74e0(0x200000u, r0_1);  // (from the original)
        u32 r0_5 = call_002f74e0(0x20000u, r0_2);  // (from the original)
        u32 r0_6 = call_002f74e0(0x200000u, r0_2);  // (from the original)
        u32 r0_7 = 1u;
        if ((r0_5 | r0_6 | (r0_3 | r0_4)) == 0) {
            if (r0_2 != 0x9du) {  // (from the original)
                call_003041c8(r0_7);
                if (r0_2 == 0x9eu) {  // (from the original)
                    *gptr<u8>(r0 + 0xa12u) = 4;  // (from the original)
                    return;
                }
                if (r0_1 == 0x9du) {  // (from the original)
                    r0_7 = 2u;
                    goto L_6ce708;
                }
                if (r0_1 == 0x9eu) {  // (from the original)
                    r0_7 = 3u;
                    goto L_6ce708;
                } else {
                    *gptr<u8>(r0 + 0xa12u) = 0;  // (from the original)
                }
                return;
            }
            if (*global_00957320 == 0) {
                call_003041c8(r0_7);
            }
            *gptr<u8>(r0 + 0xa12u) = 4;  // (from the original)
            return;
        }
L_6ce708:;
        *gptr<u8>(r0 + 0xa12u) = u8(r0_7);  // (from the original)
    }
}

}  // namespace d_006ce67c
GUEST_EXPORT_FRAMED(0x006ce67c, d_006ce67c::f_006ce67c, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_006ce770: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ce770 {

inline guest::global<u32, 0x0094e4b8> global_0094e4b8;

u32 f_006ce770() {
    u32 r0_1 = *global_0094e4b8;
    if (r0_1 != 0) {
        r0_1 = *gptr<s8>(r0_1 + 0xa10u);  // (from the original)
    }
    return r0_1;
}

}  // namespace d_006ce770
GUEST_EXPORT(0x006ce770, d_006ce770::f_006ce770);

// f_006ceedc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ceedc {

struct __attribute__((packed)) Local_006ceedc_r0_1 {
    u8 unknown_0[0xa13];  // (not used here)
    u8 byte_a13;
};
GUEST_OFFSET(Local_006ceedc_r0_1, byte_a13, 0xa13);

struct __attribute__((packed)) Local_006ceedc_r1_1 {
    u8 unknown_0[0x10];  // (not used here)
    u8 byte_10;
    u8 unknown_11[0x3];  // (not used here)
    u8 byte_14;
};
GUEST_OFFSET(Local_006ceedc_r1_1, byte_10, 0x10);
GUEST_OFFSET(Local_006ceedc_r1_1, byte_14, 0x14);

inline guest::global<u32, 0x0094e4b8> global_0094e4b8;

u32 f_006ceedc(u32 r0_unused, u32 r1) {
    u32 r0_2 = 0;
    gptr<Local_006ceedc_r0_1> r0_1 = gptr<Local_006ceedc_r0_1>(*global_0094e4b8);
    if (r0_1.addr() == 0) {
        return r0_1.addr();
    }
    gptr<Local_006ceedc_r1_1> r1_1 = gptr<Local_006ceedc_r1_1>(r0_1.addr() + 0xa00u);  // (from the original)
    if (r0_1->byte_a13 != 0) {
        guest::cpu()->r[1] = r1_1.addr();
        return 1u;
    }
    u32 zf_1 = r1_1->byte_14 == 0;
    if (zf_1) {
        r1_1 = gptr<Local_006ceedc_r1_1>(u32(r1_1->byte_10));
        zf_1 = r1_1.addr() == 0;
    }
    if (zf_1) {
        r0_2 = 0u;
    } else {
        r1_1 = gptr<Local_006ceedc_r1_1>(1u);
        r0_1->byte_a13 = u8(r1_1.addr());
        r0_2 = r1_1.addr();
    }
    guest::cpu()->r[1] = r1_1.addr();
    return r0_2;
}

}  // namespace d_006ceedc
GUEST_EXPORT(0x006ceedc, d_006ceedc::f_006ceedc);

// f_006cef28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006cef28 {

struct __attribute__((packed)) Local_006cef28_r2_1 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Local_006cef28_r2_1, word_c, 0xc);
GUEST_OFFSET(Local_006cef28_r2_1, word_10, 0x10);

inline guest::global<u32, 0x00845fc8> global_00845fc8;
inline guest::global<u32, 0x00845fcc> global_00845fcc;
inline guest::global<u32, 0x0094e4b8> global_0094e4b8;

u32 f_006cef28(u32 r0_unused, u32 r1) {
    gptr<Local_006cef28_r2_1> r2_1 = gptr<Local_006cef28_r2_1>(*global_0094e4b8);
    if (r2_1.addr() == 0) {
        return 0u;
    }
    u32 r3_1 = r2_1->word_c;
    u32 r1_1 = *global_00845fc8;
    u32 r0_1 = *global_00845fcc;
    if (r3_1 != r1_1) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    if (r3_1 == 0) {
        u32 r1_2 = r2_1->word_10 | r0_1;
        if ((r1_2 & 1u) == 0) {
            guest::cpu()->r[1] = r1_2;
            return 1u;
        }
    }
    u32 r1_3 = r2_1->word_10;
    if (r1_3 != r0_1) {
        guest::cpu()->r[1] = r1_3;
        return 0u;
    }
    guest::cpu()->r[1] = r1_3;
    return 1u;
}

}  // namespace d_006cef28
GUEST_EXPORT(0x006cef28, d_006cef28::f_006cef28);

// f_006cf2c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006cf2c0 {

inline guest::global<u32, 0x0090bc34> global_0090bc34;
inline guest::global<u32, 0x0090bc38> global_0090bc38;
inline guest::global<u32, 0x0090bc3c> global_0090bc3c;
inline guest::global<u32, 0x0090bc40> global_0090bc40;
inline constexpr guest::Function<0x005cf3bc, u32(u32, u32, u32, u32)> call_005cf3bc;

struct __attribute__((packed)) Frame_006cf2c0 {
    u8 unknown_0[0x4];  // (not read or written by name)
    u32 word_4;
    u8 unknown_8[0x6];  // (not read or written by name)
    u8 byte_e;
    u8 byte_f;
};
GUEST_OFFSET(Frame_006cf2c0, word_4, 0x4);
GUEST_OFFSET(Frame_006cf2c0, byte_e, 0xe);
GUEST_OFFSET(Frame_006cf2c0, byte_f, 0xf);
GUEST_SIZE(Frame_006cf2c0, 0x10);

u32 f_006cf2c0(u32 r0, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_006cf2c0> frame;  // the original's stack frame
    call_005cf3bc(frame.at(8).addr(), r0, r1, r2);
    u32 r2_1 = frame->byte_f;
    r0 = 0u;
    u32 r3_1 = *global_0090bc34;
    u32 r12_1 = *global_0090bc38;
    r1 = r0;
    if ((r3_1 & 0xffu) == r2_1) {  // (from the original)
        u32 r4_1 = frame->byte_e;
        if (r4_1 != 0x60u && r4_1 != 0x61u) {  // (from the original)
            r0 = 1u;
        }
    }
    if ((r3_1 >> 8u & 0xffu) == r2_1) {  // (from the original)
        u32 r4_2 = frame->byte_e;
        if (r4_2 != 0x60u && r4_2 != 0x61u) {  // (from the original)
            r0 = 1u;
        }
    }
    if ((r3_1 >> 0x10u & 0xffu) == r2_1) {  // (from the original)
        u32 r4_3 = frame->byte_e;
        if (r4_3 != 0x60u && r4_3 != 0x61u) {  // (from the original)
            r0 = 1u;
        }
    }
    if (r3_1 >> 0x18 == r2_1) {  // (from the original)
        u32 r3_2 = frame->byte_e;
        if (r3_2 != 0x60u && r3_2 != 0x61u) {  // (from the original)
            r0 = 1u;
        }
    }
    if ((r12_1 & 0xffu) == r2_1) {  // (from the original)
        u32 r2_2 = frame->byte_e;
        if (r2_2 != 0x60u && r2_2 != 0x61u) {  // (from the original)
            r0 = 1u;
        }
    }
    u32 r3_3 = *global_0090bc40;
    u32 r12 = frame->byte_e;
    *frame.at<u32>(0) = *global_0090bc3c;
    frame->word_4 = r3_3;
    r2 = frame.at(0).addr();
    if (*frame.at<u8>(0) == r12) {
        r1 = 1u;
    }
    u32 r3 = 3u;
    do {
        u32 zf_1 = *gptr<u8>(r2 + 1u) == r12;
        u32 ea_2 = r2 + 2u;
        r2 = ea_2;
        if (zf_1) {
            r1 = 1u;
        }
        if (*gptr<u8>(ea_2) == r12) {
            r1 = 1u;
        }
        r3 -= 1u;
        guest::preempt();
    } while (r3 != 0);
    guest::cpu()->r[1] = r1;
    return r0 | r1;
}

}  // namespace d_006cf2c0
GUEST_EXPORT_FRAMED(0x006cf2c0, d_006cf2c0::f_006cf2c0, 0x4010);  // pushes {r4, lr} first, as the original

// f_006cf534: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006cf534 {

inline guest::global<u32, 0x0090bc50> global_0090bc50;
inline constexpr guest::Function<0x005cf3bc, u32(u32, u32, u32, u32)> call_005cf3bc;

struct __attribute__((packed)) Frame_006cf534 {
    u8 unknown_0[0x7];  // (not read or written by name)
    u8 byte_7;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006cf534, byte_7, 0x7);
GUEST_SIZE(Frame_006cf534, 0xc);

u32 f_006cf534(u32 r0, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_006cf534> frame;  // the original's stack frame
    call_005cf3bc(frame.at(0).addr(), r0, r1, r2);
    u32 r0_2 = 0u;
    u32 r1_1 = *global_0090bc50 & 0xffu;  // (from the original)
    if (r1_1 == frame->byte_7) {
        r0_2 = 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_006cf534
GUEST_EXPORT_FRAMED(0x006cf534, d_006cf534::f_006cf534, 0x4000);  // pushes {lr} first, as the original
