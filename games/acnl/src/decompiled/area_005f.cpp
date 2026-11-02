// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_005f0bc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005f0bc4 {

inline constexpr u32 vtable_script__Insert = 0x00909498u;
inline constexpr u32 vtable_script__WordFix_11u_ = 0x00909968u;
inline constexpr u32 vtable_script__WordFix_12u_ = 0x00909a10u;
inline constexpr u32 vtable_script__WordFix_13u_ = 0x00909a48u;
inline constexpr u32 vtable_script__WordFix_15u_ = 0x00909af0u;
inline constexpr u32 vtable_script__WordFix_19u_ = 0x00909c78u;
inline constexpr u32 vtable_script__WordFix_29u_ = 0x00909e38u;
inline constexpr u32 vtable_script__WordFix_2u_ = 0x00909e70u;
inline constexpr u32 vtable_script__WordFix_33u_ = 0x00909f18u;
inline constexpr u32 vtable_script__WordFix_45u_ = 0x0090a0d8u;
inline constexpr u32 vtable_script__WordFix_64u_ = 0x0090a228u;
inline constexpr u32 vtable_script__WordFix_65u_ = 0x0090a260u;
inline constexpr u32 vtable_script__WordFix_9u_ = 0x0090a3e8u;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;

u32 f_005f0bc4(gptr<script__Insert> arg0) {
    arg0->word_0 = vtable_script__Insert;
    arg0->word_11c38 = vtable_script__WordFix_64u_;
    call_002f76ac(arg0.addr() + 0x117b0u, 0x81dedcu, 0x74u, 0xau);  // (from the original)
    call_002f76ac(arg0.addr() + 0x11328u, 0x81dedcu, 0x74u, 0xau);  // (from the original)
    call_002f76ac(arg0.addr() + 0x10ea0u, 0x81dedcu, 0x74u, 0xau);  // (from the original)
    call_002f76ac(arg0.addr() + 0x10cc0u, 0x81c70cu, 0x30u, 0xau);  // (from the original)
    call_002f76ac(arg0.addr() + 0x10928u, 0x2fe884u, 0x5cu, 0xau);  // (from the original)
    *gptr<u32>(arg0.addr() + 0x1088cu) = vtable_script__WordFix_65u_;  // (from the original)
    *gptr<u32>(arg0.addr() + 0x10854u) = vtable_script__WordFix_15u_;  // (from the original)
    call_002f76ac(arg0.addr() + 0x1046cu, 0x3050f4u, 0x64u, 0xau);  // (from the original)
    arg0->word_10410 = vtable_script__WordFix_33u_;
    call_002f76ac(arg0.addr() + 0x10050u, 0x81dadcu, 0x60u, 0xau);  // (from the original)
    call_002f76ac(arg0.addr() + 0xfcb8u, 0x2fe884u, 0x5cu, 0xau);  // (from the original)
    call_002f76ac(arg0.addr() + 0xfb00u, 0x3009ccu, 0x2cu, 0xau);  // (from the original)
    call_002f76ac(arg0.addr() + 0xf948u, 0x3009ccu, 0x2cu, 0xau);  // (from the original)
    call_002f76ac(arg0.addr() + 0xf790u, 0x3009ccu, 0x2cu, 0xau);  // (from the original)
    call_002f76ac(arg0.addr() + 0x7220u, 0x81c4e8u, 0xf4u, 0x8cu);  // (from the original)
    call_002f76ac(arg0.addr() + 0x5c34u, 0x81c4e8u, 0xf4u, 0x17u);  // (from the original)
    *gptr<u32>(arg0.addr() + 0x5c18u) = vtable_script__WordFix_2u_;  // (from the original)
    *gptr<u32>(arg0.addr() + 0x5becu) = vtable_script__WordFix_9u_;  // (from the original)
    *gptr<u32>(arg0.addr() + 0x5b98u) = vtable_script__WordFix_29u_;  // (from the original)
    call_002f76ac(arg0.addr() + 0x5990u, 0x81ec90u, 0x34u, 0xau);  // (from the original)
    call_002f76ac(arg0.addr() + 0x54b8u, 0x81ea88u, 0x7cu, 0xau);  // (from the original)
    call_002f76ac(arg0.addr() + 0x5030u, 0x81dedcu, 0x74u, 0xau);  // (from the original)
    call_002f76ac(arg0.addr() + 0x4838u, 0x81ec20u, 0xccu, 0xau);  // (from the original)
    call_002f76ac(arg0.addr() + 0x4680u, 0x3009ccu, 0x2cu, 0xau);  // (from the original)
    call_002f76ac(arg0.addr() + 0x44c8u, 0x3009ccu, 0x2cu, 0xau);  // (from the original)
    call_002f76ac(arg0.addr() + 0x4040u, 0x81dedcu, 0x74u, 0xau);  // (from the original)
    *gptr<u32>(arg0.addr() + 0x400cu) = vtable_script__WordFix_13u_;  // (from the original)
    *gptr<u32>(arg0.addr() + 0x3fdcu) = vtable_script__WordFix_12u_;  // (from the original)
    call_002f76ac(arg0.addr() + 0x3c44u, 0x81ea18u, 0x5cu, 0xau);  // (from the original)
    call_002f76ac(arg0.addr() + 0x38acu, 0x81ea18u, 0x5cu, 0xau);  // (from the original)
    call_002f76ac(arg0.addr() + 0x3514u, 0x81ea18u, 0x5cu, 0xau);  // (from the original)
    call_002f76ac(arg0.addr() + 0x2f4cu, 0x81eb54u, 0x94u, 0xau);  // (from the original)
    call_002f76ac(arg0.addr() + 0x2bb4u, 0x81ea18u, 0x5cu, 0xau);  // (from the original)
    call_002f76ac(arg0.addr() + 0x281cu, 0x81ea18u, 0x5cu, 0xau);  // (from the original)
    call_002f76ac(arg0.addr() + 0x2484u, 0x81ea18u, 0x5cu, 0xau);  // (from the original)
    call_002f76ac(arg0.addr() + 0x20ecu, 0x81ea18u, 0x5cu, 0xau);  // (from the original)
    *gptr<u32>(arg0.addr() + 0x2078u) = vtable_script__WordFix_45u_;  // (from the original)
    *gptr<u32>(arg0.addr() + 0x2004u) = vtable_script__WordFix_45u_;  // (from the original)
    call_002f76ac(arg0.addr() + 0x1c44u, 0x81dadcu, 0x60u, 0xau);  // (from the original)
    *gptr<u32>(arg0.addr() + 0x1c18u) = vtable_script__WordFix_9u_;  // (from the original)
    *gptr<u32>(arg0.addr() + 0x1be8u) = vtable_script__WordFix_11u_;  // (from the original)
    *gptr<u32>(arg0.addr() + 0x1bbcu) = vtable_script__WordFix_9u_;  // (from the original)
    *gptr<u32>(arg0.addr() + 0x1b90u) = vtable_script__WordFix_9u_;  // (from the original)
    call_002f76ac(arg0.addr() + 0x1988u, 0x81ec90u, 0x34u, 0xau);  // (from the original)
    *gptr<u32>(arg0.addr() + 0x195cu) = vtable_script__WordFix_9u_;  // (from the original)
    *gptr<u32>(arg0.addr() + 0x1930u) = vtable_script__WordFix_9u_;  // (from the original)
    *gptr<u32>(arg0.addr() + 0x1904u) = vtable_script__WordFix_9u_;  // (from the original)
    call_002f76ac(arg0.addr() + 0x165cu, 0x312cb0u, 0x44u, 0xau);  // (from the original)
    call_002f76ac(arg0.addr() + 0x13b4u, 0x312cb0u, 0x44u, 0xau);  // (from the original)
    arg0->word_1370 = vtable_script__WordFix_19u_;
    call_002f76ac(arg0.addr() + 0x10c8u, 0x312cb0u, 0x44u, 0xau);  // (from the original)
    call_002f76ac(arg0.addr() + 0xe20u, 0x312cb0u, 0x44u, 0xau);  // (from the original)
    call_002f76ac(arg0.addr() + 0xa88u, 0x2fe884u, 0x5cu, 0xau);  // (from the original)
    call_002f76ac(arg0.addr() + 0x6f0u, 0x2fe884u, 0x5cu, 0xau);  // (from the original)
    call_002f76ac(arg0.addr() + 0x448u, 0x312cb0u, 0x44u, 0xau);  // (from the original)
    call_002f76ac(arg0.addr() + 8u, 0x312cb0u, 0x44u, 0x10u);  // (from the original)
    return arg0.addr();
}

}  // namespace d_005f0bc4
GUEST_EXPORT_FRAMED(0x005f0bc4, d_005f0bc4::f_005f0bc4, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005f10b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005f10b0 {

struct __attribute__((packed)) Object_005f10b0_0 {
    u8 byte_0;
    u8 byte_1;
    u8 unknown_2[0xf];  // (not used here)
    u8 byte_11;
};
GUEST_OFFSET(Object_005f10b0_0, byte_0, 0x0);
GUEST_OFFSET(Object_005f10b0_0, byte_1, 0x1);
GUEST_OFFSET(Object_005f10b0_0, byte_11, 0x11);

inline constexpr guest::Function<0x0056a974, u32(u32, u32, u32, u32)> call_0056a974;
inline constexpr guest::Function<0x0056acfc, u32(u32)> call_0056acfc;
inline constexpr guest::Function<0x005bf790, u32(u32, u32, u32, u32)> call_005bf790;

u32 f_005f10b0(gptr<Object_005f10b0_0> arg0) {
    u32 r5_1 = 0;
    u32 r0_6 = 0;
    if (arg0->byte_0 != 0) {
        u32 r0_2 = call_0056a974(arg0.addr() + 0x14u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r5_1 = r0_2;
        if (r0_2 != 0) {
            u32 r0_4 = call_0056acfc(arg0.addr() + 0x14u);  // (from the original)
            arg0->byte_1 = u8(r0_4);
        }
    } else {
        if (arg0->byte_11 == 0) {
            r0_6 = call_005bf790(arg0.addr() + 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        } else {
            r0_6 = 1u;
        }
        r5_1 = 1u;
        arg0->byte_1 = u8(r0_6);
    }
    return r5_1;
}

}  // namespace d_005f10b0
GUEST_EXPORT_FRAMED(0x005f10b0, d_005f10b0::f_005f10b0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005f1138: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005f1138 {

struct __attribute__((packed)) Object_005f1138_0 {
    u8 byte_0;
    u8 byte_1;
    u8 unknown_2[0xf];  // (not used here)
    u8 byte_11;
    u8 unknown_12[0x2];  // (not used here)
    u32 word_14;
    u8 unknown_18[0xe7];  // (not used here)
    u8 byte_ff;
};
GUEST_OFFSET(Object_005f1138_0, byte_0, 0x0);
GUEST_OFFSET(Object_005f1138_0, byte_1, 0x1);
GUEST_OFFSET(Object_005f1138_0, byte_11, 0x11);
GUEST_OFFSET(Object_005f1138_0, word_14, 0x14);
GUEST_OFFSET(Object_005f1138_0, byte_ff, 0xff);

inline constexpr u32 vtable_script__Loader__LoadSplit = 0x009097a0u;
inline constexpr guest::Function<0x0012ca50, u32(u32)> call_0012ca50;
inline constexpr guest::Function<0x0012ca7c, u32(u32)> call_0012ca7c;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> call_002f825c;

u32 f_005f1138(gptr<Object_005f1138_0> arg0, u32 r1) {
    arg0->byte_0 = u8(r1);
    arg0->byte_1 = 0;
    u32 r0_1 = arg0.addr() + 4u;
    call_0012ca50(r0_1);
    arg0->byte_11 = 0;
    call_002f825c(r0_1 + 0x10u, 0xebu);  // (from the original)
    call_0012ca7c(r0_1 + 0x10u);  // (from the original)
    arg0->word_14 = vtable_script__Loader__LoadSplit;
    arg0->byte_ff = 0;
    guest::cpu()->r[1] = 0x9097a0u;  // (from the original)
    return r0_1 - 4u;
}

}  // namespace d_005f1138
GUEST_EXPORT_FRAMED(0x005f1138, d_005f1138::f_005f1138, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005f11b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005f11b4 {

struct __attribute__((packed)) Object_005f11b4_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_005f11b4_0, word_4, 0x4);


u32 f_005f11b4(gptr<Object_005f11b4_0> arg0) {
    u32 r0_1 = arg0->word_4;
    // virtual function 33 of r0_1
    return guest::call_address<u32>(*gptr<u32>(*gptr<u32>(r0_1) + 0x84u), r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_005f11b4
GUEST_EXPORT(0x005f11b4, d_005f11b4::f_005f11b4);

// f_005f1344: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005f1344 {

struct __attribute__((packed)) Object_005f1344_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_005f1344_0, word_4, 0x4);


void f_005f1344(gptr<Object_005f1344_0> arg0) {
    u32 r0_1 = arg0->word_4;
    u32 r2_1 = *gptr<u32>(*gptr<u32>(r0_1) + 0x9cu);  // (from the original)
    // virtual function 39 of r0_1
    guest::call_address<u32>(r2_1, r0_1, guest::cpu()->r[1], r2_1, guest::cpu()->r[3]);
}

}  // namespace d_005f1344
GUEST_EXPORT(0x005f1344, d_005f1344::f_005f1344);

// f_005f4860: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005f4860 {

struct __attribute__((packed)) Object_005f4860_0 {
    u8 unknown_0[0x28];  // (not used here)
    u8 byte_28;
    u8 byte_29;
    u8 unknown_2a[0x156];  // (not used here)
    u32 word_180;
    u8 unknown_184[0x4];  // (not used here)
    u32 word_188;
    u8 unknown_18c[0x28];  // (not used here)
    u32 word_1b4;
    u8 unknown_1b8[0x24];  // (not used here)
    u32 word_1dc;
    u8 unknown_1e0[0x6];  // (not used here)
    u8 byte_1e6;
    u8 byte_1e7;
};
GUEST_OFFSET(Object_005f4860_0, byte_28, 0x28);
GUEST_OFFSET(Object_005f4860_0, byte_29, 0x29);
GUEST_OFFSET(Object_005f4860_0, word_180, 0x180);
GUEST_OFFSET(Object_005f4860_0, word_188, 0x188);
GUEST_OFFSET(Object_005f4860_0, word_1b4, 0x1b4);
GUEST_OFFSET(Object_005f4860_0, word_1dc, 0x1dc);
GUEST_OFFSET(Object_005f4860_0, byte_1e6, 0x1e6);
GUEST_OFFSET(Object_005f4860_0, byte_1e7, 0x1e7);

inline constexpr u32 vtable_sead__SafeStringBase_char_ = 0x009047f8u;
inline guest::global<u8, 0x008c9f1c> global_008c9f1c;
inline constexpr guest::Function<0x0013cd00, u32(u32, u32, u32, u32)> call_0013cd00;

struct __attribute__((packed)) Frame_005f4860 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Frame_005f4860, word_0, 0x0);
GUEST_OFFSET(Frame_005f4860, word_4, 0x4);
GUEST_SIZE(Frame_005f4860, 0x8);

u32 f_005f4860(gptr<Object_005f4860_0> arg0, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_005f4860> frame;  // the original's stack frame
    u32 r0_1 = arg0->byte_28;
    u32 r5_1 = r2;
    if (r0_1 == 0) {
        arg0->word_180 = ~0u;
        *gptr<u8>(arg0->word_188) = u8(u32(*global_008c9f1c));
        *gptr<u8>(arg0->word_1b4) = u8(u32(*global_008c9f1c));
        arg0->word_1dc = 0;
        frame->word_4 = r1;
        frame->word_0 = vtable_sead__SafeStringBase_char_;
        call_0013cd00(arg0.addr() + 0x1b0u, frame.at(0).addr(), ~0u, guest::cpu()->r[3]);  // (from the original)
        if (r5_1 == 0) {
            r5_1 = r1;
        }
        frame->word_4 = r5_1;
        frame->word_0 = vtable_sead__SafeStringBase_char_;
        call_0013cd00(arg0.addr() + 0x184u, frame.at(0).addr(), ~0u, guest::cpu()->r[3]);  // (from the original)
        r1 = guest::cpu()->r[1];
        arg0->byte_1e6 = 0;
        r0_1 = 1u;
        arg0->byte_1e7 = 0;
        arg0->byte_29 = u8(r0_1);
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_005f4860
GUEST_EXPORT_FRAMED(0x005f4860, d_005f4860::f_005f4860, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_005f6b44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005f6b44 {

inline constexpr guest::Function<0x005d46dc, u32(u32, u32, u32, u32)> call_005d46dc;
inline constexpr guest::Function<0x005f6eb0, u32(u32, u32, u32, u32)> call_005f6eb0;

struct __attribute__((packed)) Frame_005f6b44 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005f6b44, word_0, 0x0);
GUEST_OFFSET(Frame_005f6b44, word_4, 0x4);
GUEST_SIZE(Frame_005f6b44, 0xc);

void f_005f6b44(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005f6b44> frame;  // the original's stack frame
    u32 r0_1 = call_005d46dc(r0, r1, r2, r3);
    u32 zf_1 = r0_1 == 8u;
    u32 r0_2 = 4u;
    if (zf_1) {
        r0_2 = 1u;
    }
    frame->word_0 = 0xa;  // (from the original)
    frame->word_4 = r0_2;
    call_005f6eb0(r0, r1, r2, r3);
}

}  // namespace d_005f6b44
GUEST_EXPORT_FRAMED(0x005f6b44, d_005f6b44::f_005f6b44, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_005f6dcc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005f6dcc {


void f_005f6dcc(u32 r0, u32 r1) {
    u32 res_1 = 0;
    u32 res_2 = 0;
    u32 r6 = 0x12u;  // (from the original)
    u32 r3 = 0x8906ecu;  // (from the original)
    u32 r4 = 0xad59acu;  // (from the original)
    u32 r2 = 0u;
L_5f6de0:;
    if (gptr<u16>(r4)[r2] == *gptr<u16>(r3)) {
        r6 = r2;
    } else {
        r2 += 1u;
        if (s32(r2) < 0x13) {  // (from the original)
            guest::preempt();
            goto L_5f6de0;
        }
    }
    u32 r12 = r0 - r6;
    if (s32(r12) > 0) {
        u32 r0_1 = 0x12u - r12;  // (from the original)
        u32 r3_1 = r0_1 + 1u;
        if (s32(r3_1) > 0) {
            u32 zf_1 = (r0_1 & 1u) == 0;
            r0 = r4 + (r0_1 << 1) + 2u;
            r2 = (r4 + (r0_1 + r12 << 1)) + 2u;
            if (zf_1) {
                u32 ea_1 = r0 - 2u;
                r0 = ea_1;
                u32 r5_1 = *gptr<u16>(ea_1);
                u32 ea_2 = r2 - 2u;
                *gptr<u16>(ea_2) = u16(r5_1);
                r2 = ea_2;
            }
            r3 = s32(r3_1) >> 1;
            if (r3 != 0) {
                do {
                    u32 r5_2 = *gptr<u16>(r0 - 2u);
                    res_1 = r3 - 1u;
                    r3 = res_1;
                    *gptr<u16>(r2 - 2u) = u16(r5_2);
                    u32 ea_5 = r0 - 4u;
                    r0 = ea_5;
                    u32 r5_3 = *gptr<u16>(ea_5);
                    u32 ea_6 = r2 - 4u;
                    *gptr<u16>(ea_6) = u16(r5_3);
                    r2 = ea_6;
                    guest::preempt();
                } while (res_1 != 0);
            }
        }
        u32 r2_2 = r12 - 1u;
        if (s32(r12) > 0) {
            r0 = r4 + (r2_2 << 1) + 2u;
            if ((r2_2 & 1u) == 0) {
                u32 ea_7 = r0 - 2u;
                *gptr<u16>(ea_7) = u16(r1);
                r0 = ea_7;
            }
            r2 = s32(r2_2 + 1u) >> 1;
            if (r2 != 0) {
                do {
                    *gptr<u16>(r0 - 2u) = u16(r1);
                    res_2 = r2 - 1u;
                    r2 = res_2;
                    u32 ea_9 = r0 - 4u;
                    *gptr<u16>(ea_9) = u16(r1);
                    r0 = ea_9;
                    guest::preempt();
                } while (res_2 != 0);
            }
        }
    }
}

}  // namespace d_005f6dcc
GUEST_EXPORT_FRAMED(0x005f6dcc, d_005f6dcc::f_005f6dcc, 0x70);  // pushes {r4, r5, r6} first, as the original

// f_005f723c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005f723c {

inline constexpr u32 vtable_sead__BufferedSafeStringBase_wchar_t_ = 0x009055a0u;
inline constexpr u32 vtable_script__WordPtr = 0x0090a538u;
inline guest::global<u16, 0x008c9f1e> global_008c9f1e;

void f_005f723c(gptr<sead__BufferedSafeStringBase_wchar_t_> arg0) {
    arg0->word_4 = 0xad59ac;  // (from the original)
    arg0->word_8 = 0x13;  // (from the original)
    arg0->word_0 = vtable_sead__BufferedSafeStringBase_wchar_t_;
    *gptr<u16>(arg0->word_4 + 0x24u) = u16(u32(*global_008c9f1e));  // (from the original)
    arg0->word_c = vtable_script__WordPtr;
    arg0->word_10 = 0xad59ac;  // (from the original)
    arg0->word_14 = 0x13;  // (from the original)
    guest::cpu()->r[1] = arg0.addr() + 0xcu;  // (from the original)
}

}  // namespace d_005f723c
GUEST_EXPORT(0x005f723c, d_005f723c::f_005f723c);

// f_005fbc20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005fbc20 {

struct __attribute__((packed)) Object_005fbc20_0 {
    u8 unknown_0[0xa0];  // (not used here)
    u32 word_a0;
    u32 word_a4;
    u32 word_a8;
    float float_ac;
    u8 unknown_b0[0x1b];  // (not used here)
    u8 byte_cb;
    u8 byte_cc;
    u8 byte_cd;
    u8 unknown_ce[0xa];  // (not used here)
    u32 word_d8;
    u32 word_dc;
};
GUEST_OFFSET(Object_005fbc20_0, word_a0, 0xa0);
GUEST_OFFSET(Object_005fbc20_0, word_a4, 0xa4);
GUEST_OFFSET(Object_005fbc20_0, word_a8, 0xa8);
GUEST_OFFSET(Object_005fbc20_0, float_ac, 0xac);
GUEST_OFFSET(Object_005fbc20_0, byte_cb, 0xcb);
GUEST_OFFSET(Object_005fbc20_0, byte_cc, 0xcc);
GUEST_OFFSET(Object_005fbc20_0, byte_cd, 0xcd);
GUEST_OFFSET(Object_005fbc20_0, word_d8, 0xd8);
GUEST_OFFSET(Object_005fbc20_0, word_dc, 0xdc);

struct __attribute__((packed)) Local_005fbc20_r2_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005fbc20_r2_2, word_0, 0x0);
GUEST_OFFSET(Local_005fbc20_r2_2, word_4, 0x4);

inline constexpr guest::Function<0x005d60d4, u32(u32, u32)> call_005d60d4;
inline constexpr guest::Function<0x00601b44, u32(u32, u32, u32, u32)> call_00601b44;

u32 f_005fbc20(gptr<Object_005fbc20_0> arg0, u32 r1, u32 r2, u32 r3, float S0) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r4 = r0;
    call_00601b44(r0, r1, r2, r3);
    r1 = 0u;
    S0 = 0.0f;
    arg0->word_a0 = 3;
    arg0->word_a4 = r1;
    arg0->word_a8 = r1;
    u32 r14 = 0x95df14u;  // (from the original)
    arg0->float_ac = S0;
    u32 r12 = 1u;
    arg0->byte_cb = u8(r12);
    arg0->byte_cc = u8(r12);
    arg0->byte_cd = u8(r1);
    u32 r0_1 = *gptr<u32>(r14);
    r3 = r4 + 0xd4u;  // (from the original)
    arg0->word_d8 = r0_1;
    arg0->word_dc = r0_1;
    r0 = r4 + 0xe0u;  // (from the original)
    do {
        r2 = *gptr<u32>(r0 + 0x50u);  // (from the original)
        if (r2 == 0) {
            u32 r5 = 2u;
            *gptr<u32>(r3 + 0x68u) = r1;  // (from the original)
            *gptr<u8>(r3 + 0x6cu) = u8(r5);  // (from the original)
            *gptr<u8>(r3 + 0x6du) = u8(r12);  // (from the original)
            *gptr<u8>(r3 + 0x6eu) = u8(r1);  // (from the original)
            *gptr<u32>(r3 + 0x70u) = r1;  // (from the original)
            *gptr<u32>(r3 + 0x74u) = r1;  // (from the original)
            *gptr<u32>(r3 + 0x78u) = std::bit_cast<u32>(S0);  // (from the original)
            u32 r0_2 = *gptr<u32>(r14);
            r2 = r4 + 0x160u;  // (from the original)
            *gptr<u32>(r4 + 0x164u) = r0_2;  // (from the original)
            *gptr<u32>(r4 + 0x168u) = r0_2;  // (from the original)
            r0 = r4 + 0x16cu;  // (from the original)
            do {
                u32 r3_1 = *gptr<u32>(r0 + 0x50u);  // (from the original)
                if (r3_1 == 0) {
                    *gptr<u32>(r2 + 0x68u) = r1;  // (from the original)
                    *gptr<u8>(r2 + 0x6cu) = u8(r5);  // (from the original)
                    *gptr<u8>(r2 + 0x6du) = u8(r12);  // (from the original)
                    *gptr<u8>(r2 + 0x6eu) = u8(r1);  // (from the original)
                    *gptr<u32>(r2 + 0x70u) = r1;  // (from the original)
                    *gptr<u32>(r2 + 0x74u) = r1;  // (from the original)
                    *gptr<u32>(r2 + 0x78u) = std::bit_cast<u32>(S0);  // (from the original)
                    u32 r0_3 = *gptr<u32>(r4 + 0x90u);  // (from the original)
                    guest::cpu()->s[0] = S0;
                    call_005d60d4(r0_3, r1);
                    u32 r0_4 = *gptr<u32>(r4 + 0x94u);  // (from the original)
                    frame.release();
                    return call_005d60d4(r0_4, guest::cpu()->r[1]);
                }
                u32 r3_2 = r3_1 - 1u;
                *gptr<u32>(r0 + 0x50u) = r3_2;  // (from the original)
                r3 = r0 + (r3_2 << 3);
                *gptr<u32>(r3) = r1;
                *gptr<u32>(r3 + 4u) = r1;
                guest::preempt();
            } while (1);
        }
        u32 r2_1 = r2 - 1u;
        *gptr<u32>(r0 + 0x50u) = r2_1;  // (from the original)
        gptr<Local_005fbc20_r2_2> r2_2 = gptr<Local_005fbc20_r2_2>(r0 + (r2_1 << 3));
        r2_2->word_0 = r1;
        r2_2->word_4 = r1;
        guest::preempt();
    } while (1);
}

}  // namespace d_005fbc20
GUEST_EXPORT(0x005fbc20, d_005fbc20::f_005fbc20);

// f_005fbfbc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005fbfbc {

struct __attribute__((packed)) Object_005fbfbc_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 byte_10;
    u8 unknown_11[0x3];  // (not used here)
    float float_14;
    float float_18;
    float float_1c;
    float float_20;
};
GUEST_OFFSET(Object_005fbfbc_0, word_0, 0x0);
GUEST_OFFSET(Object_005fbfbc_0, word_4, 0x4);
GUEST_OFFSET(Object_005fbfbc_0, word_8, 0x8);
GUEST_OFFSET(Object_005fbfbc_0, word_c, 0xc);
GUEST_OFFSET(Object_005fbfbc_0, byte_10, 0x10);
GUEST_OFFSET(Object_005fbfbc_0, float_14, 0x14);
GUEST_OFFSET(Object_005fbfbc_0, float_18, 0x18);
GUEST_OFFSET(Object_005fbfbc_0, float_1c, 0x1c);
GUEST_OFFSET(Object_005fbfbc_0, float_20, 0x20);

struct __attribute__((packed)) Local_005fbfbc_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005fbfbc_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_005fbfbc_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_005fbfbc_r1_2 {
    u8 unknown_0[0x8];  // (not used here)
    float float_8;
    float float_c;
};
GUEST_OFFSET(Local_005fbfbc_r1_2, float_8, 0x8);
GUEST_OFFSET(Local_005fbfbc_r1_2, float_c, 0xc);

struct __attribute__((packed)) Local_005fbfbc_r1_3 {
    u8 unknown_0[0x28];  // (not used here)
    float float_28;
    float float_2c;
    float float_30;
    u8 unknown_34[0x83];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_005fbfbc_r1_3, float_28, 0x28);
GUEST_OFFSET(Local_005fbfbc_r1_3, float_2c, 0x2c);
GUEST_OFFSET(Local_005fbfbc_r1_3, float_30, 0x30);
GUEST_OFFSET(Local_005fbfbc_r1_3, byte_b7, 0xb7);

struct __attribute__((packed)) Local_005fbfbc_r1_6 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_005fbfbc_r1_6, byte_b7, 0xb7);

struct __attribute__((packed)) Local_005fbfbc_r2_1 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_005fbfbc_r2_1, float_0, 0x0);
GUEST_OFFSET(Local_005fbfbc_r2_1, float_4, 0x4);


void f_005fbfbc(gptr<Object_005fbfbc_0> arg0, float S0, float S1) {
    u32 r1_1 = arg0->byte_10;
    if (r1_1 >= 3u) {
        guest::cpu()->r[1] = r1_1;
        return;
    }
    gptr<Local_005fbfbc_r1_2> r1_2 = gptr<Local_005fbfbc_r1_2>(r1_1 * 0x18u + 0x890c24u);  // (from the original)
    gptr<Local_005fbfbc_r2_1> r2_1 = gptr<Local_005fbfbc_r2_1>(r1_2.addr() + 0x10u);  // (from the original)
    float S2_1 = r2_1->float_0;
    float S3_1 = r2_1->float_4;
    float S0_1 = -arg0->float_18 * r1_2->float_c;
    arg0->float_1c = arg0->float_1c + -arg0->float_14 * r1_2->float_8;
    float S0_2 = arg0->float_20 + S0_1;
    arg0->float_20 = S0_2;
    float S1_1 = S0_2 * S3_1;
    float S0_3 = arg0->float_1c * S2_1;
    arg0->float_1c = S0_3;
    arg0->float_20 = S1_1;
    arg0->float_14 = arg0->float_14 + S0_3;
    float S0_4 = arg0->float_18 + arg0->float_20;
    arg0->float_18 = S0_4;
    gptr<Local_005fbfbc_r1_3> r1_3 = gptr<Local_005fbfbc_r1_3>(arg0->word_0);
    if (r1_3.addr() != 0) {
        float S3_2 = std::bit_cast<float>(arg0->word_c);
        float S0_5 = std::bit_cast<float>(arg0->word_8) + S0_4;
        r1_3->float_28 = std::bit_cast<float>(arg0->word_4) + arg0->float_14;
        r1_3->float_2c = S0_5;
        r1_3->float_30 = S3_2;
        r1_3->byte_b7 = u8(u32(r1_3->byte_b7) & 0xcfu);  // (from the original)
    }
    float S1_2 = arg0->float_1c;
    float S0_6 = arg0->float_20;
    float S1_3 = S1_2 * S1_2 + S0_6 * S0_6;
    u32 r1_4 = std::bit_cast<u32>(S1_3);
    if (s32(r1_4) >= s32(0x3da3d70au)) {  // (from the original)
        guest::cpu()->r[1] = r1_4;
        guest::cpu()->s[0] = S0_6;
        guest::cpu()->s[1] = S1_3;
        return;
    }
    float S1_4 = arg0->float_14;
    float S0_7 = arg0->float_18;
    float S1_5 = S1_4 * S1_4 + S0_7 * S0_7;
    u32 r1_5 = std::bit_cast<u32>(S1_5);
    if (s32(r1_5) >= 0x3f000000) {  // (from the original)
        guest::cpu()->r[1] = r1_5;
        guest::cpu()->s[0] = S0_7;
        guest::cpu()->s[1] = S1_5;
        return;
    }
    float S0_8 = 0.0f;
    arg0->byte_10 = 3;
    arg0->float_14 = S0_8;
    arg0->float_18 = S0_8;
    arg0->float_1c = S0_8;
    arg0->float_20 = S0_8;
    gptr<Local_005fbfbc_r1_6> r1_6 = gptr<Local_005fbfbc_r1_6>(arg0->word_0);
    if (r1_6.addr() == 0) {
        guest::cpu()->r[1] = r1_6.addr();
        guest::cpu()->s[0] = S0_8;
        guest::cpu()->s[1] = S1_5;
        return;
    }
    u32 r2_2 = arg0->word_4;
    u32 r3_1 = arg0->word_8;
    *gptr<u32>(r1_6.addr() + 0x30u) = arg0->word_c;  // (from the original)
    gptr<Local_005fbfbc_ea_2> ea_2 = gptr<Local_005fbfbc_ea_2>(r1_6.addr() + 0x28u);  // (from the original)
    ea_2->word_0 = r2_2;
    ea_2->word_4 = r3_1;
    r1_6->byte_b7 = u8(u32(r1_6->byte_b7) & 0xcfu);  // (from the original)
    guest::cpu()->r[1] = r1_6.addr();
    guest::cpu()->s[0] = S0_8;
    guest::cpu()->s[1] = S1_5;
}

}  // namespace d_005fbfbc
GUEST_EXPORT(0x005fbfbc, d_005fbfbc::f_005fbfbc);

// f_005fc110: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005fc110 {

struct __attribute__((packed)) Object_005fc110_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_005fc110_0, word_4, 0x4);

struct __attribute__((packed)) Local_005fc110_r4_1 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_005fc110_r4_1, float_0, 0x0);
GUEST_OFFSET(Local_005fc110_r4_1, float_4, 0x4);


void f_005fc110(gptr<Object_005fc110_0> arg0, u32 r1, float S0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r2 = arg0->word_4;
    r0 = r1;
    u32 r3_1 = *gptr<u32>(r2 + 0x1cu);  // (from the original)
    u32 r1_1 = *gptr<s8>(*gptr<u32>(r2 + 0x24u) + (r3_1 - 1u));  // (from the original)
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return;
    }
    r1 = *gptr<u32>(r2 + 0x14u);  // (from the original)
    u32 r3_2 = s32(gptr<u32>(*gptr<u32>(r2 + 0x20u))[r3_1 - 1u] - r1) >> 1;  // (from the original)
    if (s32(r3_2) < 0) {
        r3_2 = 0u;
    } else {
        u32 r12_1 = *gptr<u32>(r2 + 0x18u);  // (from the original)
        if (r12_1 < r3_2) {
            r3_2 = r12_1;
        }
    }
    *gptr<u32>(r2 + 0x2cu) = 0;  // (from the original)
    u32 r12_2 = *gptr<u32>(r2 + 0x34u);  // (from the original)
    u32 r3 = uxth(r3_2);
    u32 zf_1 = r12_2 == 0;
    u32 cf_1 = r12_2 >= 0u;
    if (r12_2 >= 0u && r12_2 != 0) {
        S0 = 0.0f;
    }
    u32 r12 = 0u;
    if (!!cf_1 && !zf_1) {
        do {
            gptr<Local_005fc110_r4_1> r4_1 = gptr<Local_005fc110_r4_1>(*gptr<u32>(r2 + 0x30u) + (r12 << 3));  // (from the original)
            r12 += 1u;
            r4_1->float_0 = S0;
            r4_1->float_4 = S0;
            guest::preempt();
        } while (*gptr<u32>(r2 + 0x34u) > r12);  // (from the original)
    }
    if (r3 != 0) {
        // virtual function 31 of r0
        guest::cpu()->s[0] = S0;
        frame.release();
        guest::call_address<u32>(*gptr<u32>(*gptr<u32>(r0) + 0x7cu), r0, r1, 0u, r3);  // (from the original)
        return;
    }
    u32 r3_3 = *gptr<u32>(*gptr<u32>(r0) + 0x78u);  // (from the original)
    // virtual function 30 of r0
    guest::cpu()->s[0] = S0;
    frame.release();
    guest::call_address<u32>(r3_3, r0, 0x8c9f1eu, 0u, r3_3);  // (from the original)
    return;
}

}  // namespace d_005fc110
GUEST_EXPORT(0x005fc110, d_005fc110::f_005fc110);

// f_005fc75c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005fc75c {

struct __attribute__((packed)) Local_005fc75c_r0_3 {
    u8 unknown_0[0xb08];  // (not used here)
    u32 word_b08;
    u8 unknown_b0c[0xc];  // (not used here)
    u8 byte_b18;
    u8 unknown_b19[0x13];  // (not used here)
    u8 byte_b2c;
};
GUEST_OFFSET(Local_005fc75c_r0_3, word_b08, 0xb08);
GUEST_OFFSET(Local_005fc75c_r0_3, byte_b18, 0xb18);
GUEST_OFFSET(Local_005fc75c_r0_3, byte_b2c, 0xb2c);

struct __attribute__((packed)) Local_005fc75c_r1_1 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_005fc75c_r1_1, float_0, 0x0);
GUEST_OFFSET(Local_005fc75c_r1_1, float_4, 0x4);

struct __attribute__((packed)) Local_005fc75c_r2_1 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_005fc75c_r2_1, float_0, 0x0);
GUEST_OFFSET(Local_005fc75c_r2_1, float_4, 0x4);
GUEST_OFFSET(Local_005fc75c_r2_1, float_8, 0x8);

struct __attribute__((packed)) Local_005fc75c_r2_2 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_005fc75c_r2_2, float_0, 0x0);
GUEST_OFFSET(Local_005fc75c_r2_2, float_4, 0x4);

inline constexpr u32 vtable_script__TalkWin = 0x00909878u;
inline constexpr guest::Function<0x006e69cc, u32(u32, u32, u32, u32)> call_006e69cc;

u32 f_005fc75c(gptr<script__TalkWin> arg0, u32 r1, u32 r2, float S0) {
    u32 r6_1 = arg0.addr() + 4u;
    arg0->word_0 = vtable_script__TalkWin;
    arg0->word_4 = r1;
    arg0->word_8 = r2;
    arg0->byte_c = 0;
    arg0->byte_d = 0;
    arg0->byte_e = 5;
    arg0->byte_f = 3;
    arg0->byte_10 = 0;
    arg0->byte_11 = 0;
    u32 r0_2 = call_006e69cc(arg0.addr() + 0x14u, r1, r2, 5u);  // (from the original)
    gptr<Local_005fc75c_r0_3> r0_3 = gptr<Local_005fc75c_r0_3>(r0_2 - 0x14u);  // (from the original)
    float S0_1 = 0.0f;
    gptr<Local_005fc75c_r2_1> r2_1 = gptr<Local_005fc75c_r2_1>(r0_3.addr() + 0xb0cu);  // (from the original)
    r0_3->word_b08 = 0;
    r2_1->float_0 = S0_1;
    r2_1->float_4 = S0_1;
    r2_1->float_8 = S0_1;
    gptr<Local_005fc75c_r2_2> r2_2 = gptr<Local_005fc75c_r2_2>(r0_3.addr() + 0xb1cu);  // (from the original)
    r0_3->byte_b18 = 3;
    r2_2->float_0 = S0_1;
    gptr<Local_005fc75c_r1_1> r1_1 = gptr<Local_005fc75c_r1_1>(r0_3.addr() + 0xb24u);  // (from the original)
    r2_2->float_4 = S0_1;
    r1_1->float_0 = S0_1;
    r1_1->float_4 = S0_1;
    r0_3->byte_b2c = 0xb;  // (from the original)
    guest::cpu()->s[0] = S0_1;
    return r0_3.addr();
}

}  // namespace d_005fc75c
GUEST_EXPORT_FRAMED(0x005fc75c, d_005fc75c::f_005fc75c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005ffd94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ffd94 {

struct __attribute__((packed)) Object_005ffd94_0 {
    u8 unknown_0[0x1c];  // (not used here)
    u32 word_1c;
};
GUEST_OFFSET(Object_005ffd94_0, word_1c, 0x1c);

struct __attribute__((packed)) Object_005ffd94_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_005ffd94_1, word_4, 0x4);
GUEST_OFFSET(Object_005ffd94_1, word_8, 0x8);

struct __attribute__((packed)) Object_005ffd94_2 {
    u8 unknown_0[0x364];  // (not used here)
    u32 word_364;
};
GUEST_OFFSET(Object_005ffd94_2, word_364, 0x364);

struct __attribute__((packed)) Local_005ffd94_r0_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u8 unknown_8[0xc];  // (not used here)
    u8 byte_14;
};
GUEST_OFFSET(Local_005ffd94_r0_1, word_4, 0x4);
GUEST_OFFSET(Local_005ffd94_r0_1, byte_14, 0x14);

struct __attribute__((packed)) Local_005ffd94_r0_2 {
    u8 unknown_0[0xc];  // (not used here)
    u16 half_c;
};
GUEST_OFFSET(Local_005ffd94_r0_2, half_c, 0xc);

inline guest::global<u16, 0x00887254> global_00887254;
inline guest::global<u16, 0x008872d0> global_008872d0;
inline guest::global<u32, 0x0094ee44> global_0094ee44;
inline constexpr guest::Function<0x003170f8, u32(u32, u32)> call_003170f8;
inline constexpr guest::Function<0x0052c878, u32(u32)> call_0052c878;

u32 f_005ffd94(gptr<Object_005ffd94_0> arg0, gptr<Object_005ffd94_1> arg1, gptr<Object_005ffd94_2> arg2) {
    u32 r1 = arg1.addr();
    arg0->word_1c = r1;
    arg1->word_8 = arg0.addr();
    gptr<Local_005ffd94_r0_1> r0_1 = gptr<Local_005ffd94_r0_1>(arg1->word_4);
    if (r0_1.addr() != 0) {
        arg2->word_364 = r0_1.addr();
        r0_1->word_4 = arg2.addr();
        r0_1 = gptr<Local_005ffd94_r0_1>(*global_0094ee44);
        if (r0_1.addr() != 0) {
            r0_1 = gptr<Local_005ffd94_r0_1>(call_003170f8(0xeu, 0u));  // (from the original)
            r1 = guest::cpu()->r[1];
            if (r0_1.addr() != 0) {
                gptr<Local_005ffd94_r0_2> r0_2 = gptr<Local_005ffd94_r0_2>(call_0052c878(r0_1.addr()));
                if (r0_2.addr() != 0) {
                    r0_1 = gptr<Local_005ffd94_r0_1>(u32(r0_2->half_c));
                    r1 = *global_008872d0;
                    if (r0_1.addr() == r1) {
                        guest::cpu()->r[1] = r1;
                        return r0_1.addr();
                    }
                    r0_1 = gptr<Local_005ffd94_r0_1>(u32(r0_2->half_c));
                    r1 = *global_00887254;
                    if (r0_1.addr() == r1) {
                        guest::cpu()->r[1] = r1;
                        return r0_1.addr();
                    }
                }
                r0_1 = gptr<Local_005ffd94_r0_1>(*global_0094ee44);
                r1 = r0_1->byte_14;
                if (r1 == 0) {
                    r1 = 1u;
                    r0_1->byte_14 = u8(r1);
                }
            }
        }
    }
    guest::cpu()->r[1] = r1;
    return r0_1.addr();
}

}  // namespace d_005ffd94
GUEST_EXPORT_FRAMED(0x005ffd94, d_005ffd94::f_005ffd94, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original
