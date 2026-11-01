// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "graphics/hemisphere_light.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_00610d2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00610d2c {

struct __attribute__((packed)) Local_00610d2c_r0_27 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Local_00610d2c_r0_27, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00610d2c_r0_27, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00610d2c_r0_27, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00610d2c_r0_27, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_00610d2c_r0_27, word_10, 0x10);  // (from the original)

struct __attribute__((packed)) Local_00610d2c_r0_34 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00610d2c_r0_34, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00610d2c_r0_34, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00610d2c_r0_34, word_8, 0x8);  // (from the original)

inline guest::global<u32, 0x008490d0> global_008490d0;  // (from the original)
inline guest::global<u32, 0x008490d4> global_008490d4;  // (from the original)
inline guest::global<u16, 0x008c9f1e> global_008c9f1e;  // (from the original)
inline constexpr guest::Function<0x00125aec, u32(u32, u32, u32, u32)> call_00125aec;  // (from the original)
inline constexpr guest::Function<0x00125e3c, u32(u32, u32, u32, u32)> call_00125e3c;  // (from the original)
inline constexpr guest::Function<0x002f7604, u32(u32, u32, u32, u32)> call_002f7604;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x005673c8, u32(u32, u32, u32, u32)> call_005673c8;  // (from the original)
inline constexpr guest::Function<0x005e3128, u32(u32, u32, u32, u32)> call_005e3128;  // (from the original)

u32 f_00610d2c(gptr<Palette> arg0) {
    u32 r0 = arg0.addr();
    arg0->word_4 = 0;
    arg0->byte_8 = 0;
    u32 r2_1 = *global_008490d4;
    arg0->word_c = *global_008490d0;
    arg0->word_10 = r2_1;
    arg0->word_14 = 0;
    arg0->byte_18 = 0;
    arg0->word_1c = 0;
    arg0->word_0 = 0x8f80dc;  // (from the original)
    arg0->word_20 = 0;
    u32 r0_2 = call_005673c8(r0 + 0x24u, 0x8f80dcu, r2_1, r0 + 0xcu);  // (from the original)
    u32 r0_4 = call_00125e3c(r0_2 + 8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_6 = call_00125e3c(r0_4 + 0x14cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_8 = call_00125aec(r0_6 + 0x14cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_10 = call_00125aec(r0_8 + 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_12 = call_00125aec(r0_10 + 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_14 = call_00125aec(r0_12 + 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_16 = call_00125aec(r0_14 + 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_18 = call_00125aec(r0_16 + 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_20 = call_00125aec(r0_18 + 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_22 = call_00125aec(r0_20 + 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 ea_1 = r0_22 + 0x28u;  // (from the original)
    *gptr<u32>(ea_1) = 0;
    u32 r0_24 = call_00125e3c(ea_1 + 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r0_24 + 0x14cu) = 0;  // (from the original)
    *gptr<u32>(r0_24 + 0x150u) = 0;  // (from the original)
    *gptr<u8>(r0_24 + 0x154u) = 0;  // (from the original)
    u32 r0_26 = call_00301d0c(r0_24 + 0x158u, 0x1ce394u, 0x34u, 0x10u);  // (from the original)
    gptr<Local_00610d2c_r0_27> r0_27 = gptr<Local_00610d2c_r0_27>(r0_26 + 0x340u);  // (from the original)
    r0_27->word_4 = 0;
    r0_27->word_8 = 0;
    r0_27->word_c = 0;
    r0_27->word_0 = 0x8eb288;  // (from the original)
    r0_27->word_10 = 0;
    u32 r0_29 = call_00301d0c((r0_26 - 0x560u) + 0x914u, 0x2b6de0u, 0xe0u, 0x15u);  // (from the original)
    u32 r0_31 = call_002f7604(r0_29 + 0x1260u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_33 = call_002f7604(r0_31 + 0xe4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r2_15 = r0_33 - 0x1c58u;  // (from the original)
    *gptr<u32>(r0_33 + 0xe4u) = 0;  // (from the original)
    gptr<Local_00610d2c_r0_34> r0_34 = gptr<Local_00610d2c_r0_34>(r0_33 + 0x128u);  // (from the original)
    *gptr<u32>(0x1d7cu + r2_15) = 0;  // (from the original)
    r0_34->word_4 = r0_34.addr() + 0xcu;  // (from the original)
    r0_34->word_8 = 6;
    r0_34->word_0 = 0x9055a0;  // (from the original)
    *gptr<u16>(r0_34->word_4 + 0xau) = u16(u32(*global_008c9f1e));  // (from the original)
    r0_34->word_0 = 0x90529c;  // (from the original)
    *gptr<u16>(r0_34->word_4) = u16(u32(*global_008c9f1e));
    u32 r0_36 = call_005e3128(r2_15 + 0x1d98u, 0x10u, r2_15, 0x8c9f1eu);  // (from the original)
    u32 r0_38 = call_005e3128(r0_36 + 0xc4u, 0x10u, r2_15, 0x8c9f1eu);  // (from the original)
    u32 r0_39 = r0_38 - 0x1e5cu;  // (from the original)
    u32 r1_14 = 0x1f24u;  // (from the original)
    *gptr<u32>(0x1f20u + r0_39) = 0;  // (from the original)
    *gptr<u32>(r1_14 + r0_39) = 0;
    u32 r1_15 = r1_14 + 8u;
    *gptr<u32>((r1_14 + 4u) + r0_39) = 0;
    *gptr<u32>(r1_15 + r0_39) = 0;
    u32 r1_16 = r1_15 + 0x1cu;  // (from the original)
    *gptr<u32>((r1_15 + 4u) + r0_39) = 0;
    *gptr<u32>((r1_15 + 0x18u) + r0_39) = 0;  // (from the original)
    *gptr<u8>(r1_16 + r0_39) = 0;
    *gptr<u8>((r1_16 | u32(s32(r1_16) >> 0xc)) + r0_39) = 0;  // (from the original)
    *gptr<u8>(r1_16 + 2u + r0_39) = 0;
    *gptr<u8>((r1_16 | u32(s32(r1_16) >> 0xb)) + r0_39) = 0;  // (from the original)
    *gptr<u8>(r1_16 + 4u + r0_39) = 0;
    return r0_39;
}

}  // namespace d_00610d2c
GUEST_EXPORT_FRAMED(0x00610d2c, d_00610d2c::f_00610d2c, 0x4010);  // pushes {r4, lr} first, as the original

// f_006124bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006124bc {

inline constexpr guest::Function<0x001b5d74, u32(u32, u32, u32, u32)> call_001b5d74;  // (from the original)
inline constexpr guest::Function<0x001b5d94, u32(u32, u32, u32, u32)> call_001b5d94;  // (from the original)
inline constexpr guest::Function<0x00335328, u32(u32, u32, u32, u32)> call_00335328;  // (from the original)

u32 f_006124bc(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    u32 r0_1 = call_001b5d94(r1, r1, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    u32 r3_1 = guest::cpu()->r[3];
    if (r0_1 != 0) {
        if (r2 < 2u) {
            goto L_6124ec;
        }
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return 1u;
L_6124ec:;
    u32 r0_2 = call_001b5d74(r1, r1_1, r2_1, r3_1);
    u32 zf_1 = r0_2 == 0;
    u32 r1_2 = r0_2;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    if (zf_1) {
        r1_2 = 0x88766cu;  // (from the original)
    }
    return call_00335328(r0 + ((r2 << 6) - (r2 + (r2 << 2)) << 2) + 0x52cu, r1_2, 0u, 1u);  // (from the original)
}

}  // namespace d_006124bc
GUEST_EXPORT(0x006124bc, d_006124bc::f_006124bc);

// f_00612738: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00612738 {

struct __attribute__((packed)) Local_00612738_r4_1 {
    u8 unknown_0[0xc];  // (not used here)
    u16 half_c;
    u16 half_e;
};
GUEST_OFFSET(Local_00612738_r4_1, half_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_00612738_r4_1, half_e, 0xe);  // (from the original)

inline guest::global<u32, 0x0095722c> global_0095722c;  // (from the original)
inline guest::global<u32, 0x00a834a0> global_00a834a0;  // (from the original)
inline constexpr guest::Function<0x001b545c, u32(u32, u32, u32, u32)> call_001b545c;  // (from the original)
inline constexpr guest::Function<0x001b5d94, u32(u32, u32, u32, u32)> call_001b5d94;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32, u32)> call_002fc20c;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fcb34, u32(u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;  // (from the original)
inline constexpr guest::Function<0x005b3ec4, u32(u32, u32, u32, u32)> call_005b3ec4;  // (from the original)
inline constexpr guest::Function<0x0071f66c, u32(u32, u32, u32, u32)> call_0071f66c;  // (from the original)

u32 f_00612738(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r0_5 = 0;
    u32 r4_2 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_14 = 0;
    *frame.at<u32>(0) = r3;
    u32 r0_1 = call_005b3ec4(r0, r1, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    u32 r3_1 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        return 0x95bfdcu;  // (from the original)
    }
    u32 r0_2 = *global_0095722c;
    if ((r0_2 & 1u) != 0) {
        goto L_612788;
    }
    r0_2 = call_002fe7dc(0x95722cu, r1_1, r2_1, r3_1);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        goto L_612788;
    }
    call_002fc20c(0x957230u, r1_1, r2_1, r3_1);  // (from the original)
    r3_1 = guest::cpu()->r[3];
    r2_1 = 0x100000u;  // (from the original)
    r1_1 = 0x2f777cu;  // (from the original)
    r0_2 = 0x95722cu;  // (from the original)
L_612788:;
    u32 r0_3 = call_002fb328(r0_2, r1_1, r2_1, r3_1);
    u32 r1_2 = guest::cpu()->r[1];
    u32 r2_2 = guest::cpu()->r[2];
    u32 r3_2 = guest::cpu()->r[3];
    u32 r0_4 = r0_3 + 0x62250u;  // (from the original)
    gptr<Local_00612738_r4_1> r4_1 = gptr<Local_00612738_r4_1>(r0_4 + 0x8c04u);  // (from the original)
    if (r4_1.addr() == 0) {
        goto L_6127f8;
    }
    r0_5 = call_002f74c8(r0_4, r1_2, r2_2, r3_2);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_5 != 0xa1u) {  // (from the original)
        if (r0_5 == 0xa2u) {  // (from the original)
            goto L_6127e0;
        }
        goto L_6127f8;
    }
    r4_2 = r4_1->half_c;
    r0_6 = call_001b5d94(r4_2, r1_2, r2_2, r3_2);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_6 != 0) {
        goto L_6127fc;
    }
    goto L_6127f8;
L_6127e0:;
    r4_2 = r4_1->half_e;
    r0_7 = call_001b5d94(r4_2, r1_2, r2_2, r3_2);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_7 != 0) {
        goto L_6127fc;
    }
L_6127f8:;
    r4_2 = 0xffffu;  // (from the original)
L_6127fc:;
    u32 r0_8 = call_001b545c(r4_2, r1_2, r2_2, r3_2);
    u32 r1_3 = guest::cpu()->r[1];
    u32 r2_3 = guest::cpu()->r[2];
    u32 r3_3 = guest::cpu()->r[3];
    if (r0_8 != 0) {
        u32 r0_9 = *global_00a834a0;
        u32 zf_1 = r0_9 == 0;
        u32 cf_1 = r0_9 >= 0u;
        if (!zf_1) {
            zf_1 = 0x18fu == r4_2;  // (from the original)
            cf_1 = 0x18fu >= r4_2;  // (from the original)
        }
        if (!cf_1 || zf_1) {
            return 0x95bfdcu;  // (from the original)
        }
        u32 r0_10 = r0_9 + (r4_2 + (r4_2 << 1) + (r4_2 << 3) << 3);
        if (r0_10 == 0) {
            return 0x95bfdcu;  // (from the original)
        }
        u32 r4_3 = r0_10 + 4u;
        u32 r0_11 = call_002fcb34(r4_3);
        if (r0_11 == 0x2fu) {  // (from the original)
            return r4_3;
        }
        return 0x95bfdcu;  // (from the original)
    }
    u32 r0_13 = call_002f74c8(r0_8, r1_3, r2_3, r3_3);
    u32 r3_4 = guest::cpu()->r[3];
    if (r0_13 == 0xa1u) {  // (from the original)
        r0_14 = r0_1 + 0x52cu;  // (from the original)
        goto L_61287c;
    }
    if (r0_13 == 0xa2u) {  // (from the original)
        r0_14 = r0_1 + 0x618u;  // (from the original)
    } else {
        return 0x95bfdcu;  // (from the original)
    }
L_61287c:;
    u32 r0_15 = *gptr<u32>(r0_14 + 0xd0u);  // (from the original)
    if (r0_15 == 0) {
        return 0x95bfdcu;  // (from the original)
    }
    call_0071f66c(frame.at(0).addr(), r0_15, r2_3, r3_4);
    call_002fc8e8(0x957230u, frame.at(0).addr());  // (from the original)
    u32 r0_17 = call_002fcb34(0x957230u);  // (from the original)
    if (r0_17 == 0x2fu) {  // (from the original)
        return 0x957230u;  // (from the original)
    }
    return 0x95bfdcu;  // (from the original)
}

}  // namespace d_00612738
GUEST_EXPORT_FRAMED(0x00612738, d_00612738::f_00612738, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0061290c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061290c {

struct __attribute__((packed)) Local_0061290c_r5_1 {
    u8 unknown_0[0xc];  // (not used here)
    u16 half_c;
    u16 half_e;
};
GUEST_OFFSET(Local_0061290c_r5_1, half_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_0061290c_r5_1, half_e, 0xe);  // (from the original)

inline guest::global<u32, 0x00952c3c> global_00952c3c;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x0056a94c, u32(u32, u32, u32, u32)> call_0056a94c;  // (from the original)
inline constexpr guest::Function<0x006124bc, u32(u32, u32, u32)> call_006124bc;  // (from the original)

u32 f_0061290c(u32 r0) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r7_1 = *global_00952c3c;
    *frame.at<u32>(4) = 0x8876fc;  // (from the original)
    *frame.at<u32>(0) = 0x9047f8;  // (from the original)
    u32 r0_2 = call_0056a94c(r0 + 0x9ccu, frame.at(0).addr(), r7_1, guest::cpu()->r[3]);  // (from the original)
    *frame.at<u32>(4) = 0x8876cc;  // (from the original)
    *frame.at<u32>(0) = 0x9047f8;  // (from the original)
    u32 r0_4 = call_0056a94c(r0 + 0xab8u, frame.at(0).addr(), r7_1, guest::cpu()->r[3]);  // (from the original)
    *frame.at<u32>(4) = 0x8876a0;  // (from the original)
    *frame.at<u32>(0) = 0x9047f8;  // (from the original)
    u32 r0_6 = call_0056a94c(r0 + 0x7f4u, frame.at(0).addr(), r7_1, guest::cpu()->r[3]);  // (from the original)
    *frame.at<u32>(4) = 0x887674;  // (from the original)
    *frame.at<u32>(0) = 0x9047f8;  // (from the original)
    u32 r0_8 = call_0056a94c(r0 + 0x8e0u, frame.at(0).addr(), r7_1, guest::cpu()->r[3]);  // (from the original)
    u32 r6_3 = ((r0_2 & r0_4) & r0_6) & r0_8;
    u32 r0_9 = call_002fb328(r0_8, guest::cpu()->r[1], guest::cpu()->r[2]);
    u32 r1_6 = guest::cpu()->r[1];
    gptr<Local_0061290c_r5_1> r5_1 = gptr<Local_0061290c_r5_1>(r0_9 + 0x6ae54u);  // (from the original)
    if (r5_1.addr() == 0) {
        return r6_3;
    }
    u32 r1_7 = r5_1->half_c;
    u32 r0_11 = call_006124bc(r0, r1_7, 0u);
    u32 r1_8 = r5_1->half_e;
    u32 r0_12 = call_006124bc(r0, r1_8, 1u);
    r1_6 = guest::cpu()->r[1];
    return r0_12 & (r0_11 & r6_3);
}

}  // namespace d_0061290c
GUEST_EXPORT_FRAMED(0x0061290c, d_0061290c::f_0061290c, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00612cec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00612cec {

struct __attribute__((packed)) Object_00612cec_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_00612cec_0, half_0, 0x0);  // (from the original)


void f_00612cec(gptr<Object_00612cec_0> arg0) {
    arg0->half_0 = 0x109;  // (from the original)
    guest::cpu()->r[1] = 0x109u;  // (from the original)
    return;
}

}  // namespace d_00612cec
GUEST_EXPORT(0x00612cec, d_00612cec::f_00612cec);

// f_00612d0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00612d0c {

struct __attribute__((packed)) Object_00612d0c_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_00612d0c_0, half_0, 0x0);  // (from the original)


void f_00612d0c(gptr<Object_00612d0c_0> arg0) {
    arg0->half_0 = 0x7db;  // (from the original)
    guest::cpu()->r[1] = 0x7dbu;  // (from the original)
    return;
}

}  // namespace d_00612d0c
GUEST_EXPORT(0x00612d0c, d_00612d0c::f_00612d0c);

// f_00613658: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00613658 {

inline constexpr guest::Function<0x005cdf48, u32(u32, u32, u32, u32)> call_005cdf48;  // (from the original)

u32 f_00613658(u32 r0) {
    call_005cdf48(r0, guest::cpu()->r[1], ~0u, ~0x80000000u);  // (from the original)
    call_005cdf48(r0 + 0xfu, guest::cpu()->r[1], ~0u, ~0x80000000u);  // (from the original)
    return r0;
}

}  // namespace d_00613658
GUEST_EXPORT_FRAMED(0x00613658, d_00613658::f_00613658, 0x4010);  // pushes {r4, lr} first, as the original

// f_00613684: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00613684 {


u32 f_00613684(u32 r0, u32 r1, u32 r2) {
    if (r1 >= 5u || r2 >= 4u) {
        return r0 + 0x58u;  // (from the original)
    }
    return r0 + (r2 + (r2 << 2) << 0xa) + (r1 << 0xa) + 0x58u;  // (from the original)
}

}  // namespace d_00613684
GUEST_EXPORT(0x00613684, d_00613684::f_00613684);

// f_006136a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006136a8 {


u32 f_006136a8(u32 r0, u32 r1, u32 r2) {
    if (r1 >= 5u || r2 >= 4u) {
        return r0 + 0x5058u;  // (from the original)
    }
    return r0 + (r2 + (r2 << 2) << 8) + (r1 << 8) + 0x5058u;  // (from the original)
}

}  // namespace d_006136a8
GUEST_EXPORT(0x006136a8, d_006136a8::f_006136a8);

// f_006136d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006136d4 {


u32 f_006136d4(u32 r0, u32 r1) {
    return (r0 >= 7u || r1 >= 6u) ? 0u : 1u;
}

}  // namespace d_006136d4
GUEST_EXPORT(0x006136d4, d_006136d4::f_006136d4);

// f_006136e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006136e8 {


u32 f_006136e8(u32 r0, u32 r1) {
    u32 r1_1 = r1 - 1u;
    guest::cpu()->r[1] = r1_1;
    return (r1_1 >= 4u || r0 - 1u >= 5u) ? 0u : 1u;
}

}  // namespace d_006136e8
GUEST_EXPORT(0x006136e8, d_006136e8::f_006136e8);

// f_00613704: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00613704 {


u32 f_00613704(u32 r0, u32 r1) {
    return (r0 >= 5u || r1 >= 4u) ? 0u : 1u;
}

}  // namespace d_00613704
GUEST_EXPORT(0x00613704, d_00613704::f_00613704);

// f_00613718: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00613718 {


u32 f_00613718(u32 r0, u32 r1) {
    u32 r1_1 = r1 - 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return (r1_1 >= 0x40u || r0 - 0x10u >= 0x50u) ? 0u : 1u;  // (from the original)
}

}  // namespace d_00613718
GUEST_EXPORT(0x00613718, d_00613718::f_00613718);

// f_00613764: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00613764 {

struct __attribute__((packed)) Object_00613764_0 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Object_00613764_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00613764_0, byte_1, 0x1);  // (from the original)
GUEST_OFFSET(Object_00613764_0, byte_2, 0x2);  // (from the original)

inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

u32 f_00613764(gptr<Object_00613764_0> arg0) {
    u32 r0 = arg0.addr();
    arg0->byte_0 = 2;
    arg0->byte_1 = 3;
    arg0->byte_2 = 3;
    u32 r0_2 = call_00301d0c(r0 + 4u, 0x612cfcu, 2u, 0x2au);  // (from the original)
    u32 r0_4 = call_00301d0c(r0_2 + 0x54u, 0x6efd9cu, 0x400u, 0x14u);  // (from the original)
    u32 r0_6 = call_00301d0c(r0_4 + 0x5000u, 0x1e036cu, 0x100u, 0x14u);  // (from the original)
    return r0_6 + 0xffffafa8u;  // (from the original)
}

}  // namespace d_00613764
GUEST_EXPORT_FRAMED(0x00613764, d_00613764::f_00613764, 0x4010);  // pushes {r4, lr} first, as the original

// f_006138a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006138a4 {

inline constexpr guest::Function<0x00301444, u32(u32, u32)> call_00301444;  // (from the original)

u32 f_006138a4() {
    return call_00301444(guest::cpu()->r[0], 0x4000u);  // (from the original)
}

}  // namespace d_006138a4
GUEST_EXPORT(0x006138a4, d_006138a4::f_006138a4);

// f_00613de4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00613de4 {

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)

u32 f_00613de4() {
    return call_002f8574(guest::cpu()->r[0], guest::cpu()->r[1], 0x30u, guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_00613de4
GUEST_EXPORT(0x00613de4, d_00613de4::f_00613de4);

// f_00613dfc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00613dfc {

inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)

void f_00613dfc() {
    call_002fbb30(guest::cpu()->r[0], guest::cpu()->r[1], 0x1404u, guest::cpu()->r[3]);
    return;  // (from the original)
}

}  // namespace d_00613dfc
GUEST_EXPORT(0x00613dfc, d_00613dfc::f_00613dfc);

// f_00613e08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00613e08 {

struct __attribute__((packed)) Object_00613e08_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00613e08_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x002f825c, u32(u32, u32)> call_002f825c;  // (from the original)

void f_00613e08(gptr<Object_00613e08_0> arg0) {
    u32 r0 = arg0.addr();
    arg0->word_0 = 0;
    call_002f825c(r0 + 4u, 0x1400u);  // (from the original)
    return;  // (from the original)
}

}  // namespace d_00613e08
GUEST_EXPORT(0x00613e08, d_00613e08::f_00613e08);

// f_00613e18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00613e18 {

inline constexpr guest::Function<0x002f825c, u32(u32, u32)> call_002f825c;  // (from the original)

void f_00613e18(u32 r0) {
    call_002f825c(r0 + 4u, 0x1400u);  // (from the original)
    return;  // (from the original)
}

}  // namespace d_00613e18
GUEST_EXPORT(0x00613e18, d_00613e18::f_00613e18);

// f_00613e24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00613e24 {

struct __attribute__((packed)) Object_00613e24_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00613e24_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x002f825c, u32(u32, u32)> call_002f825c;  // (from the original)

u32 f_00613e24(gptr<Object_00613e24_0> arg0) {
    u32 r0 = arg0.addr();
    arg0->word_0 = 0;
    call_002f825c(r0 + 4u, 0x1400u);  // (from the original)
    return r0;
}

}  // namespace d_00613e24
GUEST_EXPORT_FRAMED(0x00613e24, d_00613e24::f_00613e24, 0x4010);  // pushes {r4, lr} first, as the original

// f_00613e80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00613e80 {

struct __attribute__((packed)) Local_00613e80_r0_14 {
    u8 byte_0;
};
GUEST_OFFSET(Local_00613e80_r0_14, byte_0, 0x0);  // (from the original)

inline guest::global<u8, 0x0094d938> global_0094d938;  // (from the original)
inline constexpr guest::Function<0x0013fac4, u32(u32, u32, u32)> call_0013fac4;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x00313124, u32(u32, u32, u32)> call_00313124;  // (from the original)
inline constexpr guest::Function<0x007179a0, u32(u32, u32, u32)> call_007179a0;  // (from the original)
inline constexpr guest::Function<0x007179ec, u32(u32, u32, u32)> call_007179ec;  // (from the original)
inline constexpr guest::Function<0x00717aac, u32(u32, u32, u32)> call_00717aac;  // (from the original)
inline constexpr guest::Function<0x00718270, u32(u32, u32, u32)> call_00718270;  // (from the original)
inline constexpr guest::Function<0x007182f0, u32(u32, u32, u32)> call_007182f0;  // (from the original)

u32 f_00613e80(u32 r0, u32 r1_unused, u32 r2) {
    guest::StackFrame frame(0x1c);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r9 = guest::cpu()->r[9];
    u32 r5_1 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r2_2 = 0;
    u32 r1_4 = 0;
    u32 r0_13 = 0;
    gptr<Local_00613e80_r0_14> r0_14 = gptr<Local_00613e80_r0_14>(0u);
    u32 r7 = r0;
    u32 r8 = 1u;
    *global_0094d938 = u8(r8);
    u32 r0_1 = 0x94d939u;  // (from the original)
    *gptr<u8>(r0_1) = 0;
    u32 r0_2 = call_002fb328(r0_1, 0u, r2, guest::cpu()->r[3]);
    u32 r6 = r0_2 + 0x668a0u;  // (from the original)
    call_0013fac4(frame.at(0).addr(), 0x14u, 0xffu);  // (from the original)
    r2 = guest::cpu()->r[2];
    u32 r1_1 = *frame.at<u8>(0x10);  // (from the original)
    u32 zf_1 = r6 == 0;
    *frame.at<u8>(0) = u8(u32(*frame.at<u8>(0)) & ~0x80u);  // (from the original)
    if (!zf_1) {
        r9 = 0x984694u;  // (from the original)
    }
    u32 r1_2 = r1_1 & ~8u;
    *frame.at<u8>(1) = u8(u32(*frame.at<u8>(1)) & ~1u & ~2u & ~4u & ~8u & ~0x10u & ~0x20u);  // (from the original)
    u32 r0_4 = *frame.at<u8>(5);
    if (!zf_1) {
        r4 = 0u;
    }
    *frame.at<u8>(0x10) = u8(r1_2);  // (from the original)
    *frame.at<u8>(5) = u8(r0_4 & ~2u & ~4u & ~0x80u);  // (from the original)
    u32 r0_5 = u32(*frame.at<u8>(9)) & ~2u;
    *frame.at<u8>(9) = u8(r0_5);
    if (!zf_1) {
        do {
            r0_5 = call_007182f0(r6, r4, r2);
            r1_2 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            if (r0_5 == 0) {
                call_00718270(frame.at(0x14).addr(), r6, r4);  // (from the original)
                u32 r0_8 = call_00313124(frame.at(0x14).addr(), guest::cpu()->r[1], guest::cpu()->r[2]);  // (from the original)
                r1_2 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                if (r0_8 != 0) {
                    goto L_614004;
                }
                r5_1 = frame.at(0).addr();
                r0_9 = frame.at(0x14).addr();  // (from the original)
                r0_10 = call_002fcb34(r0_9, r1_2, r2);
                r1_2 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                if (r0_10 >= 0x9bu) {  // (from the original)
                    goto L_614004;
                }
                r1_2 = *gptr<u8>(r5_1 + (r0_10 >> 3));
                if ((r1_2 >> (r0_10 & 7u) & 1u) == 0) {
                    goto L_614004;
                }
                r0_11 = call_00717aac(r6, r4, r2);
                r2_2 = guest::cpu()->r[2];
                if (r0_11 == 2u) {
                    u32 r0_12 = call_007179ec(r6, r4, r2_2);
                    r1_2 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    if (r0_12 == r7) {
                        goto L_614004;
                    }
                }
                r1_4 = r9 + (r4 + (r4 << 1) << 2);
                r0_13 = call_007179a0(r6, r1_4, r4);
                r1_2 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                if (r0_13 == 0) {
                    goto L_614004;
                }
                r1_2 = 0x94d939u;  // (from the original)
                if (r4 >= 8u) {
                    goto L_614004;
                }
                r0_14 = gptr<Local_00613e80_r0_14>(r1_2 + (r4 >> 3));
                r2 = r4 & 7u;
                r1_2 = u32(r0_14->byte_0) | lsl_r(r8, r2 & 0xff);  // (from the original)
                r0_14->byte_0 = u8(r1_2);
L_614004:;
                r0_5 = frame.at(0x14).addr();  // (from the original)
            }
            r4 += 1u;
            guest::preempt();
        } while (s32(r4) < 8);
    }
    guest::cpu()->r[1] = r1_2;
    return r0_5;
}

}  // namespace d_00613e80
GUEST_EXPORT_FRAMED(0x00613e80, d_00613e80::f_00613e80, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_0061402c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061402c {

struct __attribute__((packed)) Local_0061402c_r1_1 {
    u8 unknown_0[0xeb54];  // (not used here)
    u32 word_eb54;
    u32 word_eb58;
};
GUEST_OFFSET(Local_0061402c_r1_1, word_eb54, 0xeb54);  // (from the original)
GUEST_OFFSET(Local_0061402c_r1_1, word_eb58, 0xeb58);  // (from the original)

inline guest::global<u32, 0x00950148> global_00950148;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x00613e80, u32(u32, u32, u32, u32)> call_00613e80;  // (from the original)

void f_0061402c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 8u;
    u32 r0_1 = call_002f74c8(r0, r1, r2, r3);
    if (r0_1 != 0x2bu) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        return;
    }
    gptr<Local_0061402c_r1_1> r1_1 = gptr<Local_0061402c_r1_1>(*global_00950148);
    if (r1_1.addr() == 0) {
        guest::cpu()->r[13] += 8u;
        return;
    }
    r2 = r1_1->word_eb54;
    r0 = 0u;
    r3 = r1_1->word_eb58 - r2;
    do {
        if (r0 >= u32(s32(r3) >> 2)) {
            goto L_61408c;
        }
        r1_2 = *gptr<u32>(r2 + (r0 << 2));
        if (r1_2 == 0) {
            goto L_61408c;
        }
        if (u32(*gptr<u8>(r1_2 + 0x9a8u)) == 0) {  // (from the original)
            u32 r0_2 = *gptr<u32>(0x1030u + r1_2);  // (from the original)
            guest::cpu()->r[13] += 8u;
            call_00613e80(r0_2, r1_2, r2, r3);
            return;
        }
L_61408c:;
        r0 += 1u;
        guest::preempt();
    } while (r0 < 0xau);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return;
}

}  // namespace d_0061402c
GUEST_EXPORT(0x0061402c, d_0061402c::f_0061402c);

// f_00614568: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00614568 {

inline constexpr guest::Function<0x006f7e64, u32(u32)> call_006f7e64;  // (from the original)
inline constexpr guest::Function<0x006f83f8, u32(u32, u32)> call_006f83f8;  // (from the original)

u32 f_00614568(u32 r0) {
    u32 r0_1 = call_006f7e64(r0);
    *gptr<u32>(r0_1) = 0x90ab60;  // (from the original)
    u32 r0_3 = call_006f83f8(r0_1 + 0x10u, 0x90ab60u);  // (from the original)
    return r0_3 - 0x10u;  // (from the original)
}

}  // namespace d_00614568
GUEST_EXPORT_FRAMED(0x00614568, d_00614568::f_00614568, 0x4010);  // pushes {r4, lr} first, as the original

// f_006145cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006145cc {

struct __attribute__((packed)) Local_006145cc_r0_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_006145cc_r0_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006145cc_r0_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_006145cc_r0_1, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_006145cc_r0_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_006145cc_r0_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006145cc_r0_3, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_006145cc_r0_3, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_006145cc_r0_4 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_006145cc_r0_4, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006145cc_r0_4, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_006145cc_r0_4, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_006145cc_r1_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_006145cc_r1_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006145cc_r1_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_006145cc_r1_2, word_8, 0x8);  // (from the original)

inline guest::global<u32, 0x0061472c> global_0061472c;  // (from the original)
inline constexpr guest::Function<0x0052ee54, u32(u32, u32, u32)> call_0052ee54;  // (from the original)
inline constexpr guest::Function<0x0052f200, u32(u32, u32, u32)> call_0052f200;  // (from the original)
inline constexpr guest::Function<0x0056a378, u32(u32, u32, u32, u32)> call_0056a378;  // (from the original)

void f_006145cc(u32 r0, gptr<Float3> arg1, gptr<Float3> arg2) {
    guest::StackFrame frame(0x38);  // the original's stack frame
    u32 r1 = arg1.addr();
    u32 r2 = arg2.addr();
    float S3_1 = arg1->v[0];
    float S0_1 = arg2->v[0] - S3_1;
    float S4_1 = arg1->v[1];
    float S5_1 = arg1->v[2];
    gptr<Local_006145cc_r0_1> r0_1 = gptr<Local_006145cc_r0_1>(frame.at(0x10).addr());  // (from the original)
    float S1_1 = arg2->v[1] - S4_1;
    float S2_1 = arg2->v[2] - S5_1;
    r0_1->word_0 = std::bit_cast<u32>(S0_1);
    r0_1->word_4 = std::bit_cast<u32>(S1_1);
    r0_1->word_8 = std::bit_cast<u32>(S2_1);
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    guest::cpu()->s[3] = S3_1;
    guest::cpu()->s[4] = S4_1;
    guest::cpu()->s[5] = S5_1;
    call_0056a378(frame.at(0x10).addr(), r1 + 4u, r2, guest::cpu()->r[3]);  // (from the original)
    u32 r2_1 = guest::cpu()->r[2];
    float S0_2 = std::bit_cast<float>(*global_0061472c);
    gptr<Local_006145cc_r0_3> r0_3 = gptr<Local_006145cc_r0_3>(frame.at(0x1c).addr());  // (from the original)
    float S3_2 = std::bit_cast<float>(*frame.at<u32>(0x10)) * S0_2;  // (from the original)
    *frame.at<u32>(0x10) = std::bit_cast<u32>(S3_2);  // (from the original)
    float S1_2 = std::bit_cast<float>(*frame.at<u32>(0x14)) * S0_2;  // (from the original)
    *frame.at<u32>(0x14) = std::bit_cast<u32>(S1_2);  // (from the original)
    float S0_3 = std::bit_cast<float>(*frame.at<u32>(0x18)) * S0_2;  // (from the original)
    *frame.at<u32>(0x18) = std::bit_cast<u32>(S0_3);  // (from the original)
    float S2_2 = arg1->v[2] - S0_3;
    float S1_3 = arg1->v[1] - S1_2;
    r0_3->word_0 = std::bit_cast<u32>(arg1->v[0] - S3_2);
    r0_3->word_4 = std::bit_cast<u32>(S1_3);
    r0_3->word_8 = std::bit_cast<u32>(S2_2);
    gptr<Local_006145cc_r1_2> r1_2 = gptr<Local_006145cc_r1_2>(frame.at(0x10).addr());  // (from the original)
    gptr<Local_006145cc_r0_4> r0_4 = gptr<Local_006145cc_r0_4>(frame.at(0x28).addr());  // (from the original)
    float S3_3 = std::bit_cast<float>(r1_2->word_0);
    float S4_2 = std::bit_cast<float>(r1_2->word_4);
    float S5_2 = std::bit_cast<float>(r1_2->word_8);
    float S0_4 = arg2->v[0] + S3_3;
    float S2_3 = arg2->v[2] + S5_2;
    float S1_4 = arg2->v[1] + S4_2;
    r0_4->word_0 = std::bit_cast<u32>(S0_4);
    r0_4->word_4 = std::bit_cast<u32>(S1_4);
    r0_4->word_8 = std::bit_cast<u32>(S2_3);
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_4;
    guest::cpu()->s[2] = S2_3;
    guest::cpu()->s[3] = S3_3;
    guest::cpu()->s[4] = S4_2;
    guest::cpu()->s[5] = S5_2;
    call_0052ee54(frame.at(0).addr(), frame.at(0x1c).addr(), r2_1);  // (from the original)
    u32 r2_2 = guest::cpu()->r[2];
    call_0052ee54(frame.at(8).addr(), frame.at(0x28).addr(), r2_2);  // (from the original)
    u32 r0_7 = *frame.at<u32>(8);
    if (s32(r0_7) < s32(*frame.at<u32>(0))) {
        u32 r0_8 = *frame.at<u32>(0);
        *frame.at<u32>(0) = r0_7;
        *frame.at<u32>(8) = r0_8;
    }
    u32 r0_9 = *frame.at<u32>(0xc);  // (from the original)
    u32 r1_5 = *frame.at<u32>(4);
    if (s32(r0_9) < s32(r1_5)) {
        r1_5 = r0_9;
        u32 r0_10 = *frame.at<u32>(4);
        *frame.at<u32>(4) = r1_5;
        *frame.at<u32>(0xc) = r0_10;  // (from the original)
    }
    *frame.at<u32>(0) = *frame.at<u32>(0) - 1u;
    *frame.at<u32>(4) = r1_5 - 1u;
    *frame.at<u32>(8) = *frame.at<u32>(8) + 1u;
    *frame.at<u32>(0xc) = *frame.at<u32>(0xc) + 1u;  // (from the original)
    call_0052f200(r0, frame.at(0).addr(), frame.at(8).addr());
    return;
}

}  // namespace d_006145cc
GUEST_EXPORT_FRAMED(0x006145cc, d_006145cc::f_006145cc, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0061476c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061476c {

inline constexpr guest::Function<0x00138bbc, u32(u32, u32)> call_00138bbc;  // (from the original)

u32 f_0061476c(u32 r0, u32 r1) {
    if (r0 == 0) {
        return r0;
    }
    return call_00138bbc(0x9870a8u, r0);  // (from the original)
}

}  // namespace d_0061476c
GUEST_EXPORT(0x0061476c, d_0061476c::f_0061476c);

// f_00614854: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00614854 {

struct __attribute__((packed)) Local_00614854_r0_4 {
    u8 unknown_0[0x40];  // (not used here)
    u16 half_40;
    u8 unknown_42[0x2];  // (not used here)
    u32 word_44;
};
GUEST_OFFSET(Local_00614854_r0_4, half_40, 0x40);  // (from the original)
GUEST_OFFSET(Local_00614854_r0_4, word_44, 0x44);  // (from the original)

inline constexpr guest::Function<0x006f7dc0, u32(u32, u32)> call_006f7dc0;  // (from the original)
inline constexpr guest::Function<0x006f7e64, u32(u32)> call_006f7e64;  // (from the original)

u32 f_00614854(u32 r0) {
    u32 r0_1 = call_006f7e64(r0);
    *gptr<u32>(r0_1) = 0x90ab70;  // (from the original)
    *gptr<u8>(r0_1 + 0x10u) = 0;  // (from the original)
    u32 r0_3 = call_006f7dc0(r0_1 + 0x14u, 0x90ab70u);  // (from the original)
    gptr<Local_00614854_r0_4> r0_4 = gptr<Local_00614854_r0_4>(r0_3 - 0x14u);  // (from the original)
    r0_4->half_40 = 0;
    r0_4->word_44 = 0;
    return r0_4.addr();
}

}  // namespace d_00614854
GUEST_EXPORT_FRAMED(0x00614854, d_00614854::f_00614854, 0x4010);  // pushes {r4, lr} first, as the original

// f_006148e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006148e4 {

struct __attribute__((packed)) Object_006148e4_0 {
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
    u32 word_38;
    u32 word_3c;
    u32 word_40;
    u32 word_44;
    u32 word_48;
};
GUEST_OFFSET(Object_006148e4_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_006148e4_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_006148e4_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_006148e4_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_006148e4_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_006148e4_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_006148e4_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_006148e4_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_006148e4_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_006148e4_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_006148e4_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_006148e4_0, word_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Object_006148e4_0, word_30, 0x30);  // (from the original)
GUEST_OFFSET(Object_006148e4_0, word_34, 0x34);  // (from the original)
GUEST_OFFSET(Object_006148e4_0, word_38, 0x38);  // (from the original)
GUEST_OFFSET(Object_006148e4_0, word_3c, 0x3c);  // (from the original)
GUEST_OFFSET(Object_006148e4_0, word_40, 0x40);  // (from the original)
GUEST_OFFSET(Object_006148e4_0, word_44, 0x44);  // (from the original)
GUEST_OFFSET(Object_006148e4_0, word_48, 0x48);  // (from the original)

inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

u32 f_006148e4(gptr<Object_006148e4_0> arg0) {
    u32 r0 = arg0.addr();
    arg0->word_0 = 0;
    arg0->word_c = 0;
    arg0->word_10 = 0;
    arg0->word_14 = 0;
    arg0->word_18 = 0;
    arg0->word_1c = 0;
    arg0->word_20 = 0;
    arg0->word_24 = 0;
    arg0->word_28 = 0;
    arg0->word_2c = 0;
    arg0->word_30 = 0;
    arg0->word_34 = 0;
    arg0->word_38 = 0;
    arg0->word_3c = 0;
    arg0->word_40 = 0;
    arg0->word_44 = 0;
    arg0->word_48 = 0;
    arg0->word_4 = 0;
    arg0->word_8 = 0;
    u32 r0_2 = call_00301d0c((r0 + 8u) + 4u, 0x6148e0u, 0x10u, 4u);  // (from the original)
    return r0_2 - 0xcu;  // (from the original)
}

}  // namespace d_006148e4
GUEST_EXPORT_FRAMED(0x006148e4, d_006148e4::f_006148e4, 0x4010);  // pushes {r4, lr} first, as the original

// f_006149e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006149e8 {

inline constexpr guest::Function<0x00614854, u32(u32)> call_00614854;  // (from the original)

u32 f_006149e8(u32 r0) {
    u32 r0_1 = call_00614854(r0);
    *gptr<u32>(r0_1 + 0x48u) = 0;  // (from the original)
    *gptr<u32>(r0_1) = 0x90ab88;  // (from the original)
    guest::cpu()->r[1] = 0u;
    return r0_1;
}

}  // namespace d_006149e8
GUEST_EXPORT_FRAMED(0x006149e8, d_006149e8::f_006149e8, 0x4010);  // pushes {r4, lr} first, as the original

// f_00615328: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00615328 {

inline constexpr guest::Function<0x00779548, u32(u32, u32)> call_00779548;  // (from the original)

void f_00615328() {
    call_00779548(guest::cpu()->r[0], guest::cpu()->r[1]);
    return;
}

}  // namespace d_00615328
GUEST_EXPORT(0x00615328, d_00615328::f_00615328);

// f_0061532c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061532c {

struct __attribute__((packed)) Object_0061532c_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u16 half_24;
    u8 byte_26;
    u8 byte_27;
    u16 half_28;
    u16 half_2a;
    u8 byte_2c;
    u8 byte_2d;
    u16 half_2e;
};
GUEST_OFFSET(Object_0061532c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0061532c_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0061532c_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0061532c_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0061532c_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0061532c_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0061532c_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0061532c_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_0061532c_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_0061532c_0, half_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_0061532c_0, byte_26, 0x26);  // (from the original)
GUEST_OFFSET(Object_0061532c_0, byte_27, 0x27);  // (from the original)
GUEST_OFFSET(Object_0061532c_0, half_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_0061532c_0, half_2a, 0x2a);  // (from the original)
GUEST_OFFSET(Object_0061532c_0, byte_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Object_0061532c_0, byte_2d, 0x2d);  // (from the original)
GUEST_OFFSET(Object_0061532c_0, half_2e, 0x2e);  // (from the original)


void f_0061532c(gptr<Object_0061532c_0> arg0) {
    arg0->word_0 = 0;
    arg0->word_4 = 0;
    arg0->word_8 = 0;
    arg0->word_c = 0;
    arg0->word_10 = 0;
    arg0->word_14 = 0;
    arg0->word_18 = 0;
    arg0->word_1c = 0;
    arg0->word_20 = 0;
    arg0->half_24 = 0;
    arg0->byte_26 = 0;
    arg0->half_28 = 0;
    arg0->half_2a = 0;
    arg0->byte_2c = 0;
    arg0->byte_2d = 0;
    arg0->byte_27 = 0;
    arg0->half_2e = 0;
    guest::cpu()->r[1] = 0u;
    return;
}

}  // namespace d_0061532c
GUEST_EXPORT(0x0061532c, d_0061532c::f_0061532c);

// f_006153d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006153d0 {

inline guest::global<u32, 0x00951668> global_00951668;  // (from the original)
inline guest::global<u32, 0x0095166c> global_0095166c;  // (from the original)
inline constexpr guest::Function<0x00131280, u32(u32, u32, u32, u32)> call_00131280;  // (from the original)
inline constexpr guest::Function<0x001320cc, u32(u32, u32, u32)> call_001320cc;  // (from the original)

void f_006153d0(u32 r0, u32 r1) {
    u32 r0_2 = 0;
    if (*global_00951668 == 0) {
        u32 r0_1 = call_00131280(0x10u, r0, 4u, guest::cpu()->r[3]);  // (from the original)
        r1 = guest::cpu()->r[1];
        u32 r4_1 = r0_1;
        if (r0_1 == 0) {
            *global_0095166c = r4_1;
            r4_1 = 0u;
            goto L_615420;
        }
        r0_2 = call_001320cc(r0_1, r0, 3u);
        r1 = 0x90aba0u;  // (from the original)
        *gptr<u32>(r0_2) = r1;
        *global_0095166c = r0_2;
L_615420:;
        *global_00951668 = r4_1;
    }
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_006153d0
GUEST_EXPORT_FRAMED(0x006153d0, d_006153d0::f_006153d0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006154b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006154b0 {


void f_006154b0(u32 r0, u32 r1) {
    u32 r2 = 0u;
    do {
        u32 r3_1 = s32(s8(*gptr<u8>(r1 + r2)));
        u32 r12_1 = r3_1 - 0x30u;  // (from the original)
        u32 zf_1 = r12_1 == 9u;
        u32 cf_1 = r12_1 >= 9u;
        if (cf_1 && !zf_1) {
            u32 r12_2 = r3_1 - 0x61u;  // (from the original)
            zf_1 = r12_2 == 0x19u;  // (from the original)
            cf_1 = r12_2 >= 0x19u;  // (from the original)
        }
        if (cf_1 && !zf_1) {
            u32 r12_3 = r3_1 - 0x41u;  // (from the original)
            zf_1 = r12_3 == 0x19u;  // (from the original)
            cf_1 = r12_3 >= 0x19u;  // (from the original)
        }
        if (!!cf_1 && !zf_1) {
            if (r2 >= 0x10u) {  // (from the original)
                return;
            } else {
                r1 = 0u;
            }
            do {
                *gptr<u8>(r0 + r2) = u8(r1);
                r2 += 1u;
                guest::preempt();
            } while (r2 < 0x10u);  // (from the original)
            return;
        }
        *gptr<u8>(r0 + r2) = u8(r3_1);
        r2 += 1u;
        guest::preempt();
    } while (r2 < 0x10u);  // (from the original)
    return;
}

}  // namespace d_006154b0
GUEST_EXPORT(0x006154b0, d_006154b0::f_006154b0);

// f_00615534: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00615534 {

struct __attribute__((packed)) Object_00615534_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u16 half_14;
};
GUEST_OFFSET(Object_00615534_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00615534_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00615534_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00615534_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00615534_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_00615534_0, half_14, 0x14);  // (from the original)


void f_00615534(gptr<Object_00615534_0> arg0) {
    arg0->word_0 = 0;
    arg0->word_4 = 0;
    arg0->word_8 = 0;
    arg0->word_c = 0;
    arg0->word_10 = 0;
    arg0->half_14 = 0;
    guest::cpu()->r[1] = 0u;
    return;
}

}  // namespace d_00615534
GUEST_EXPORT(0x00615534, d_00615534::f_00615534);

// f_00615b2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00615b2c {

struct __attribute__((packed)) Local_00615b2c_r2_1 {
    u8 unknown_0[0x24];  // (not used here)
    u32 word_24;
    u32 word_28;
};
GUEST_OFFSET(Local_00615b2c_r2_1, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Local_00615b2c_r2_1, word_28, 0x28);  // (from the original)

inline guest::global<u32, 0x00615bac> global_00615bac;  // (from the original)
inline guest::global<u32, 0x00615bb4> global_00615bb4;  // (from the original)
inline guest::global<u32, 0x00615bb8> global_00615bb8;  // (from the original)
inline guest::global<u32, 0x00615bc0> global_00615bc0;  // (from the original)
inline guest::global<u32, 0x00615bc8> global_00615bc8;  // (from the original)

void f_00615b2c(u32 r0, u32 r1, float S0_unused, float S1) {
    float S0_1 = std::bit_cast<float>(*global_00615bac);
    if (r1 >= 0x6bu) {  // (from the original)
        guest::cpu()->s[0] = S0_1;
        return;
    }
    gptr<Local_00615b2c_r2_1> r2_1 = gptr<Local_00615b2c_r2_1>(0x86a2c8u + (r1 + (r1 << 1) + (r1 << 4) << 2));  // (from the original)
    float S1_1 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r2_1->word_28))));
    u32 r1_1 = uxth(r2_1->word_24);
    if (u32(S1_1 == std::bit_cast<float>(*global_00615bb4))) {
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return;
    }
    float S2_1 = S1_1 * std::bit_cast<float>(*global_00615bb8);
    float S1_2 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r0 - r1_1))));
    float S0_2 = S1_2 / S2_1 + S0_1;
    if (s32(0x3f333333u) > s32(std::bit_cast<u32>(S0_2))) {  // (from the original)
        float S0_3 = std::bit_cast<float>(*global_00615bc0);
        guest::cpu()->s[0] = S0_3;
        guest::cpu()->s[1] = S1_2;
        return;
    }
    if (s32(0x3fa66666u) < s32(std::bit_cast<u32>(S0_2))) {  // (from the original)
        S0_2 = std::bit_cast<float>(*global_00615bc8);
    }
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    return;
}

}  // namespace d_00615b2c
GUEST_EXPORT(0x00615b2c, d_00615b2c::f_00615b2c);

// f_00615bcc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00615bcc {

inline guest::global<u32, 0x0095c6d0> global_0095c6d0;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x0076eb20, u32(u32)> call_0076eb20;  // (from the original)

u32 f_00615bcc(u32 r0, u32 r1, u32 r2) {
    u32 r0_11 = 0;
    u32 r1_6 = 0;
    u32 zf_1 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r1_7 = 0;
    u32 r0_14 = 0;
    u32 zf_3 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r5_1 = r0;
    u32 r4 = r1;
    u32 r0_1 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
    u32 r0_2 = call_002f74e0(0x40000u, r0_1, guest::cpu()->r[2]);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_2 = guest::cpu()->r[2];
    u32 r6 = 0u;
    u32 r7 = 1u;
    u32 r8 = 2u;
    u32 r10_1 = 0x863748u;  // (from the original)
    if (r0_2 != 0) {
        u32 r0_3 = s32(s8(*gptr<u8>(r4 + 7u)));
        u32 r1_2 = r0_3 - 4u;
        if (r5_1 != 0) {
            u32 cf_1 = r1_2 >= 5u;
            if (cf_1) {
                r1_2 = r0_3 - 0x10u;  // (from the original)
                cf_1 = r1_2 >= 5u;
            }
            if (cf_1) {
                r6 = r0_3 - 9u >= 7u ? r8 : r7;
            }
            guest::cpu()->r[1] = r1_2;
            return 0x862de8u + (r6 + (r6 << 2) << 4);  // (from the original)
        }
        u32 cf_2 = r1_2 >= 5u;
        if (cf_2) {
            r1_2 = r0_3 - 0x10u;  // (from the original)
            cf_2 = r1_2 >= 5u;
        }
        if (cf_2) {
            r6 = r0_3 - 9u >= 7u ? r8 : r7;
        }
        guest::cpu()->r[1] = r1_2;
        return r10_1 + (r6 + (r6 << 1) << 5);
    }
    u32 r0_6 = call_002f74c8(r0_2, r1_1, r2_2, guest::cpu()->r[3]);
    u32 r0_7 = call_002f74e0(0x20000u, r0_6, guest::cpu()->r[2]);  // (from the original)
    if (r0_7 != 0) {
        u32 r0_9 = call_0076eb20(*global_0095c6d0 + 0x10u);  // (from the original)
        u32 r1_3 = s32(s8(*gptr<u8>(r4 + 7u)));
        u32 r2_4 = r1_3 - 4u;
        if (r5_1 != 0) {
            if (r2_4 >= 5u && r1_3 - 0x10u >= 5u) {  // (from the original)
                r6 = r1_3 - 9u >= 7u ? r8 : r7;
            }
            u32 r1_4 = r6 + (r6 << 2);
            guest::cpu()->r[1] = r1_4;
            return 0x862de8u + ((r0_9 << 4) - r0_9 << 4) + (r1_4 << 4);  // (from the original)
        }
        if (r2_4 >= 5u && r1_3 - 0x10u >= 5u) {  // (from the original)
            r6 = r1_3 - 9u >= 7u ? r8 : r7;
        }
        r0_11 = r6 + (r6 << 1);
        r1_6 = r10_1 + ((r0_9 + (r0_9 << 3)) << 5);
        guest::cpu()->r[1] = r1_6;
        return r1_6 + (r0_11 << 5);
    }
    r0 = u32(s32(s8(*gptr<u8>(r4 + 4u)))) - 1u;
    if (r5_1 != 0) {
        if (r0 == 7u) {
            goto L_615d80;
        }
        zf_1 = r0 == 8u;
        if (r0 >= 8u && !zf_1) {
            r0 += 2u;
        }
        if (zf_1) {
            goto L_615d90;
        }
L_615d34:;
        r0_12 = r0 & 0xffu;  // (from the original)
        r0_13 = (r0_12 << 4) - r0_12;
        r1_7 = 0x85ff50u + (r0_13 + (r0_13 << 2) << 2);  // (from the original)
        r0_14 = s32(s8(*gptr<u8>(r4 + 7u)));
        if (r0_14 - 4u >= 5u && r0_14 - 0x10u >= 5u) {  // (from the original)
            r6 = r0_14 - 9u >= 7u ? r8 : r7;
        }
        guest::cpu()->r[1] = r1_7;
        return r1_7 + (r6 + (r6 << 3) + (r6 << 4) << 2);
L_615d80:;
        if (s32(s8(*gptr<u8>(r4 + 5u))) > 0xf) {  // (from the original)
            r0 = 8u;
        }
        guest::preempt();
        goto L_615d34;
L_615d90:;
        r0 = s32(s8(*gptr<u8>(r4 + 5u)));
        u32 res_1 = r0 - 0xfu;  // (from the original)
        u32 nf_1 = res_1 >> 0x1f;  // (from the original)
        u32 zf_2 = res_1 == 0;
        u32 vf_1 = ((r0 ^ 0xfu) & (r0 ^ res_1)) >> 0x1f;  // (from the original)
        if (!zf_2 && nf_1 == vf_1) {
            r0 = 0xau;  // (from the original)
        }
        if (zf_2 || nf_1 != vf_1) {
            r0 = 9u;
        }
        guest::preempt();
        goto L_615d34;
    }
    if (r0 == 7u) {
        goto L_615dfc;
    }
    zf_3 = r0 == 8u;
    if (r0 >= 8u && !zf_3) {
        r0 += 2u;
    }
    if (zf_3) {
        goto L_615e0c;
    }
L_615db8:;
    r0_16 = r0 & 0xffu;  // (from the original)
    r1_6 = 0x860fb8u + (r0_16 + (r0_16 << 3) << 5);  // (from the original)
    r0_17 = s32(s8(*gptr<u8>(r4 + 7u)));
    if (r0_17 - 4u >= 5u && r0_17 - 0x10u >= 5u) {  // (from the original)
        r6 = r0_17 - 9u >= 7u ? r8 : r7;
    }
    r0_11 = r6 + (r6 << 1);
    guest::cpu()->r[1] = r1_6;
    return r1_6 + (r0_11 << 5);
L_615dfc:;
    if (s32(s8(*gptr<u8>(r4 + 5u))) > 0xf) {  // (from the original)
        r0 = 8u;
    }
    guest::preempt();
    goto L_615db8;
L_615e0c:;
    r0 = s32(s8(*gptr<u8>(r4 + 5u)));
    u32 res_2 = r0 - 0xfu;  // (from the original)
    u32 nf_2 = res_2 >> 0x1f;  // (from the original)
    u32 zf_4 = res_2 == 0;
    u32 vf_2 = ((r0 ^ 0xfu) & (r0 ^ res_2)) >> 0x1f;  // (from the original)
    if (!zf_4 && nf_2 == vf_2) {
        r0 = 0xau;  // (from the original)
    }
    if (zf_4 || nf_2 != vf_2) {
        r0 = 9u;
    }
    guest::preempt();
    goto L_615db8;
}

}  // namespace d_00615bcc
GUEST_EXPORT_FRAMED(0x00615bcc, d_00615bcc::f_00615bcc, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_00615ffc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00615ffc {

struct __attribute__((packed)) Local_00615ffc_r0_4 {
    u8 unknown_0[0x48];  // (not used here)
    u8 byte_48;
    u8 byte_49;
};
GUEST_OFFSET(Local_00615ffc_r0_4, byte_48, 0x48);  // (from the original)
GUEST_OFFSET(Local_00615ffc_r0_4, byte_49, 0x49);  // (from the original)

inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x006d9058, u32(u32, u32, u32)> call_006d9058;  // (from the original)

void f_00615ffc(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = call_002fcb34(r2, r1, r2, guest::cpu()->r[3]);
    if (r0_1 == 0x28u) {  // (from the original)
        u32 r0_2 = call_006d9058(r2, guest::cpu()->r[1], guest::cpu()->r[2]);
        u32 r0_3 = r0_2 & 0xffu;  // (from the original)
        gptr<Local_00615ffc_r0_4> r0_4 = gptr<Local_00615ffc_r0_4>(0x86a2c8u + (r0_3 + (r0_3 << 1) + (r0_3 << 4) << 2));  // (from the original)
        *gptr<u32>(r0) = u32(r0_4->byte_48);
        *gptr<u32>(r1) = u32(r0_4->byte_49);
    }
    return;
}

}  // namespace d_00615ffc
GUEST_EXPORT_FRAMED(0x00615ffc, d_00615ffc::f_00615ffc, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00616058: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00616058 {

inline guest::global<u32, 0x0095c6d0> global_0095c6d0;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x0076ebb8, u32(u32)> call_0076ebb8;  // (from the original)

u32 f_00616058(u32 r0, u32 r1, u32 r2) {
    u32 r0_10 = 0;
    u32 r1_4 = 0;
    u32 zf_1 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r4 = r0;
    u32 r0_1 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
    u32 r0_2 = call_002f74e0(0x40000u, r0_1, guest::cpu()->r[2]);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_2 = guest::cpu()->r[2];
    u32 r5 = 0u;
    u32 r6 = 1u;
    u32 r7 = 2u;
    if (r0_2 != 0) {
        u32 r0_3 = s32(s8(*gptr<u8>(r4 + 7u)));
        u32 r1_2 = r0_3 - 4u;
        u32 cf_1 = r1_2 >= 5u;
        if (cf_1) {
            r1_2 = r0_3 - 0x10u;  // (from the original)
            cf_1 = r1_2 >= 5u;
        }
        if (cf_1) {
            r5 = r0_3 - 9u >= 7u ? r7 : r6;
        }
        guest::cpu()->r[1] = r1_2;
        return 0x864288u + (r5 + (r5 << 3) << 3);  // (from the original)
    }
    u32 r0_5 = call_002f74c8(r0_2, r1_1, r2_2, guest::cpu()->r[3]);
    u32 r0_6 = call_002f74e0(0x20000u, r0_5, guest::cpu()->r[2]);  // (from the original)
    if (r0_6 != 0) {
        u32 r0_8 = call_0076ebb8(*global_0095c6d0 + 0x10u);  // (from the original)
        u32 r0_9 = s32(s8(*gptr<u8>(r4 + 7u)));
        if (r0_9 - 4u >= 5u && r0_9 - 0x10u >= 5u) {  // (from the original)
            r5 = r0_9 - 9u >= 7u ? r7 : r6;
        }
        u32 r1_3 = r0_8 + (r0_8 << 3);
        r0_10 = r5 + (r5 << 3);
        r1_4 = 0x864288u + (r1_3 + (r1_3 << 1) << 3);  // (from the original)
        guest::cpu()->r[1] = r1_4;
        return r1_4 + (r0_10 << 3);
    }
    r0 = u32(s32(s8(*gptr<u8>(r4 + 4u)))) - 1u;
    if (r0 == 7u) {
        goto L_616190;
    }
    zf_1 = r0 == 8u;
    if (r0 >= 8u && !zf_1) {
        r0 += 2u;
    }
    if (zf_1) {
        goto L_6161a0;
    }
L_616148:;
    r0_11 = r0 & 0xffu;  // (from the original)
    r1_4 = 0x861f78u + (r0_11 + (r0_11 << 5) << 3);  // (from the original)
    r0_12 = s32(s8(*gptr<u8>(r4 + 7u)));
    if (r0_12 - 4u >= 5u && r0_12 - 0x10u >= 5u) {  // (from the original)
        r5 = r0_12 - 9u >= 7u ? r7 : r6;
    }
    r0_10 = r5 + (r5 << 1) + (r5 << 3);
    guest::cpu()->r[1] = r1_4;
    return r1_4 + (r0_10 << 3);
L_616190:;
    if (s32(s8(*gptr<u8>(r4 + 5u))) > 0xf) {  // (from the original)
        r0 = 8u;
    }
    guest::preempt();
    goto L_616148;
L_6161a0:;
    r0 = s32(s8(*gptr<u8>(r4 + 5u)));
    u32 res_1 = r0 - 0xfu;  // (from the original)
    u32 nf_1 = res_1 >> 0x1f;  // (from the original)
    u32 zf_2 = res_1 == 0;
    u32 vf_1 = ((r0 ^ 0xfu) & (r0 ^ res_1)) >> 0x1f;  // (from the original)
    if (!zf_2 && nf_1 == vf_1) {
        r0 = 0xau;  // (from the original)
    }
    if (zf_2 || nf_1 != vf_1) {
        r0 = 9u;
    }
    guest::preempt();
    goto L_616148;
}

}  // namespace d_00616058
GUEST_EXPORT_FRAMED(0x00616058, d_00616058::f_00616058, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_006165c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006165c4 {

inline guest::global<u32, 0x00952880> global_00952880;  // (from the original)

u32 f_006165c4(u32 r0) {
    u32 r0_1 = r0 >= 3u ? *global_00952880 : *gptr<u32>(0x952880u + (r0 << 2));  // (from the original)
    guest::cpu()->r[1] = 0x952880u;  // (from the original)
    return r0_1;
}

}  // namespace d_006165c4
GUEST_EXPORT(0x006165c4, d_006165c4::f_006165c4);

// f_0061666c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061666c {

inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x006bd2c8, u32(u32, u32, u32, u32)> call_006bd2c8;  // (from the original)
inline constexpr guest::Function<0x007701b8, u32(u32, u32, u32, u32)> call_007701b8;  // (from the original)

u32 f_0061666c(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r0_1 = call_002fb94c(r0, r1, guest::cpu()->r[2], r3);
    if (r0_1 == 0) {
        return 0u;
    }
    u32 r0_2 = call_002fcb34(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_2 != 0x28u) {  // (from the original)
        return 0u;
    }
    u32 r0_4 = call_002fc934(frame.at(0).addr(), r0, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_5 = call_007701b8(r0_1 + 0x6c20u, r0_4, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r3_4 = guest::cpu()->r[3];
    if ((r0_5 ^ 1u) == 0) {
        goto L_6166cc;
    }
    return 0u;
L_6166cc:;
    u32 r0_6 = call_006bd2c8(r0_1, r0, guest::cpu()->r[2], r3_4);
    return r0_6;
}

}  // namespace d_0061666c
GUEST_EXPORT_FRAMED(0x0061666c, d_0061666c::f_0061666c, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00616e70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00616e70 {

struct __attribute__((packed)) Object_00616e70_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_00616e70_0, half_0, 0x0);  // (from the original)


u32 f_00616e70(gptr<Object_00616e70_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2_1 = s32(s16(arg0->half_0));
    u32 res_1 = r2_1 - r1;
    u32 nf_1 = res_1 >> 0x1f;  // (from the original)
    u32 zf_1 = res_1 == 0;
    u32 vf_1 = ((r2_1 ^ r1) & (r2_1 ^ res_1)) >> 0x1f;  // (from the original)
    if (zf_1 || nf_1 != vf_1) {
        r1 = 0u - r1;
        u32 res_2 = r1 - r2_1;
        nf_1 = res_2 >> 0x1f;  // (from the original)
        zf_1 = res_2 == 0;
        vf_1 = ((r1 ^ r2_1) & (r1 ^ res_2)) >> 0x1f;  // (from the original)
    }
    if (!zf_1 && nf_1 == vf_1) {
        arg0->half_0 = u16(r1);
        r0 = 0u;
    }
    if (zf_1 || nf_1 != vf_1) {
        r0 = 1u;
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00616e70
GUEST_EXPORT(0x00616e70, d_00616e70::f_00616e70);

// f_00616fb0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00616fb0 {

inline guest::global<u32, 0x00952b8c> global_00952b8c;  // (from the original)

u32 f_00616fb0() {
    return *gptr<u32>(*global_00952b8c + 0xcu);  // (from the original)
}

}  // namespace d_00616fb0
GUEST_EXPORT(0x00616fb0, d_00616fb0::f_00616fb0);

// f_00616fc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00616fc4 {

inline guest::global<u32, 0x00952b8c> global_00952b8c;  // (from the original)

u32 f_00616fc4() {
    return *gptr<u32>(*global_00952b8c + 0x10u);  // (from the original)
}

}  // namespace d_00616fc4
GUEST_EXPORT(0x00616fc4, d_00616fc4::f_00616fc4);

// f_00617088: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00617088 {


void f_00617088(u32 r0, u32 r1) {
    if (r1 < 4u) {
        *gptr<u8>(r0 + r1) = 0;
    }
    return;
}

}  // namespace d_00617088
GUEST_EXPORT(0x00617088, d_00617088::f_00617088);

// f_00617120: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00617120 {

struct __attribute__((packed)) Local_00617120_r6_1 {
    u8 unknown_0[0x272];  // (not used here)
    u8 byte_272;
    u8 unknown_273[0x1];  // (not used here)
    u8 byte_274;
    u8 unknown_275[0x1];  // (not used here)
    u8 byte_276;
    u8 unknown_277[0x1];  // (not used here)
    u8 byte_278;
};
GUEST_OFFSET(Local_00617120_r6_1, byte_272, 0x272);  // (from the original)
GUEST_OFFSET(Local_00617120_r6_1, byte_274, 0x274);  // (from the original)
GUEST_OFFSET(Local_00617120_r6_1, byte_276, 0x276);  // (from the original)
GUEST_OFFSET(Local_00617120_r6_1, byte_278, 0x278);  // (from the original)

inline constexpr guest::Function<0x00135740, u32(u32, u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32, u32)> call_00137e84;  // (from the original)
inline constexpr guest::Function<0x00624c78, u32(u32, u32)> call_00624c78;  // (from the original)

u32 f_00617120(u32 r0, u32 r1) {
    u32 r7_2 = 0;
    u32 r0_2 = 0;
    u32 r7_3 = 0;
    u32 r0_3 = 0;
    u32 r6_2 = 0;
    u32 r0_4 = 0;
    u32 r5_1 = r0 + 0x13280u;  // (from the original)
    call_00135740(r5_1, r1);
    gptr<Local_00617120_r6_1> r6_1 = gptr<Local_00617120_r6_1>(r0 + 0x13000u);  // (from the original)
    u32 r7_1 = r6_1->byte_276;
    u32 r0_1 = call_00624c78(r1, guest::cpu()->r[1]);
    u32 r1_2 = guest::cpu()->r[1];
    if ((r0_1 & r7_1) == 0) {
        goto L_617190;
    }
    r7_2 = r6_1->byte_278;
    r0_2 = call_00624c78(r1, r1_2);
    r1_2 = guest::cpu()->r[1];
    if ((r0_2 & r7_2) != 0) {
        goto L_617190;
    }
    r7_3 = r6_1->byte_272;
    r0_3 = call_00624c78(r1, r1_2);
    r1_2 = guest::cpu()->r[1];
    if ((r0_3 & r7_3) == 0) {
        goto L_617190;
    }
    r6_2 = r6_1->byte_274;
    r0_4 = call_00624c78(r1, r1_2);
    r1_2 = guest::cpu()->r[1];
    if ((r0_4 & r6_2) == 0) {
        goto L_6171a0;
    }
L_617190:;
    call_00137e84(r5_1, r1_2);
    return 0u;
L_6171a0:;
    call_00137e84(r5_1, r1_2);
    return 1u;
}

}  // namespace d_00617120
GUEST_EXPORT_FRAMED(0x00617120, d_00617120::f_00617120, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_006174fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006174fc {

struct __attribute__((packed)) Object_006174fc_0 {
    u8 unknown_0[0x132a0];  // (not used here)
    u32 word_132a0;
};
GUEST_OFFSET(Object_006174fc_0, word_132a0, 0x132a0);  // (from the original)

inline constexpr guest::Function<0x0050d478, u32(u32, u32, u32, u32)> call_0050d478;  // (from the original)
inline constexpr guest::Function<0x00622c5c, u32(u32, u32)> call_00622c5c;  // (from the original)
inline constexpr guest::Function<0x00623168, u32(u32, u32)> call_00623168;  // (from the original)

void f_006174fc(gptr<Object_006174fc_0> arg0) {
    u32 r0 = arg0.addr();
    guest::cpu()->r[13] -= 8u;
    u32 r1_1 = arg0->word_132a0;
    if (r1_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return;
    }
    u32 res_1 = r1_1 - 1u;
    arg0->word_132a0 = res_1;
    if (res_1 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = res_1;
        return;
    }
    call_0050d478(0xa22020u, res_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_00622c5c(r0 + 0x3594u, guest::cpu()->r[1]);  // (from the original)
    u32 r1_3 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    call_00623168((r0 + 0x4000u) + 0x3880u, r1_3);  // (from the original)
    return;
}

}  // namespace d_006174fc
GUEST_EXPORT(0x006174fc, d_006174fc::f_006174fc);

// f_0061754c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061754c {

struct __attribute__((packed)) Object_0061754c_0 {
    u8 unknown_0[0x1326b];  // (not used here)
    u8 byte_1326b;
};
GUEST_OFFSET(Object_0061754c_0, byte_1326b, 0x1326b);  // (from the original)

inline constexpr guest::Function<0x005ce6dc, u32(u32, u32, u32, u32)> call_005ce6dc;  // (from the original)
inline constexpr guest::Function<0x006193d0, u32(u32, u32, u32)> call_006193d0;  // (from the original)
inline constexpr guest::Function<0x0061a8b0, u32(u32, u32, u32)> call_0061a8b0;  // (from the original)
inline constexpr guest::Function<0x0061fe0c, u32(u32, u32, u32)> call_0061fe0c;  // (from the original)
inline constexpr guest::Function<0x006212f0, u32(u32, u32, u32)> call_006212f0;  // (from the original)
inline constexpr guest::Function<0x00622e70, u32(u32, u32, u32)> call_00622e70;  // (from the original)
inline constexpr guest::Function<0x00623194, u32(u32, u32, u32)> call_00623194;  // (from the original)
inline constexpr guest::Function<0x00624050, u32(u32, u32, u32)> call_00624050;  // (from the original)
inline constexpr guest::Function<0x00624c78, u32(u32, u32, u32)> call_00624c78;  // (from the original)
inline constexpr guest::Function<0x00627124, u32(u32, u32, u32)> call_00627124;  // (from the original)
inline constexpr guest::Function<0x00628d08, u32(u32, u32, u32)> call_00628d08;  // (from the original)
inline constexpr guest::Function<0x00629a58, u32(u32, u32, u32)> call_00629a58;  // (from the original)
inline constexpr guest::Function<0x0062add8, u32(u32, u32, u32, u32)> call_0062add8;  // (from the original)
inline constexpr guest::Function<0x0062b330, u32(u32, u32, u32)> call_0062b330;  // (from the original)
inline constexpr guest::Function<0x00746efc, u32(u32, u32, u32)> call_00746efc;  // (from the original)
inline constexpr guest::Function<0x00746f8c, u32(u32, u32, u32)> call_00746f8c;  // (from the original)
inline constexpr guest::Function<0x0075efdc, u32(u32, u32, u32)> call_0075efdc;  // (from the original)
inline constexpr guest::Function<0x0075f644, u32(u32, u32, u32)> call_0075f644;  // (from the original)

void f_0061754c(gptr<Object_0061754c_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r4 = 0;
    u32 r6 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r0_6 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r0_7 = 0;
    u32 r1_5 = 0;
    u32 r2_5 = 0;
    u32 r0_8 = 0;
    u32 r1_6 = 0;
    u32 r2_6 = 0;
    u32 r0_9 = 0;
    u32 r1_7 = 0;
    u32 r2_7 = 0;
    u32 r0_10 = 0;
    u32 r1_8 = 0;
    u32 r2_8 = 0;
    u32 r0_11 = 0;
    u32 r1_9 = 0;
    u32 r2_9 = 0;
    u32 r0_12 = 0;
    u32 r1_10 = 0;
    u32 r2_10 = 0;
    u32 r0_13 = 0;
    u32 r0_18 = 0;
    u32 r1_12 = 0;
    u32 r2_11 = 0;
    u32 r0_19 = 0;
    u32 r1_13 = 0;
    u32 r0_22 = 0;
    u32 r5 = r0;
    u32 r7 = r0 + 0x13000u;  // (from the original)
    u32 r0_1 = arg0->byte_1326b;
    if (r0_1 != 0) {
        goto L_6175e8;
    }
    r0_2 = call_005ce6dc(r0_1, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_2 != 0 || u32(*gptr<u8>(0x132b4u + r5)) != 0) {  // (from the original)
        goto L_6175e8;
    }
    r0_3 = r5 + 0x7874u;  // (from the original)
    call_00628d08(r0_3, r1, r2);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r0_4 = r5 + 0x7880u;  // (from the original)
    call_00622e70(r0_4, r1_1, r2_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r0_5 = r5 + 0x1c0u;  // (from the original)
    call_006212f0(r0_5, r1_2, r2_2);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r0_6 = r5 + 0x1e4u;  // (from the original)
    call_006193d0(r0_6, r1_3, r2_3);
    r1_4 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r0_7 = r5 + 0x214u;  // (from the original)
    call_0061fe0c(r0_7, r1_4, r2_4);
    r1_5 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r0_8 = r5 + 0x22cu;  // (from the original)
    call_00624050(r0_8, r1_5, r2_5);
    r1_6 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r0_9 = r5 + 0x23cu;  // (from the original)
    call_00623194(r0_9, r1_6, r2_6);
    r1_7 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r0_10 = r5 + 0x27a0u;  // (from the original)
    call_0061a8b0(r0_10, r1_7, r2_7);
    r1_8 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r0_11 = r5 + 0xb0u;  // (from the original)
    call_00629a58(r0_11, r1_8, r2_8);
    r1_9 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r0_12 = r5 + 0x10u;  // (from the original)
    call_00627124(r0_12, r1_9, r2_9);
    r1_10 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r0_13 = r5 + 0x28ecu;  // (from the original)
    call_0062b330(r0_13, r1_10, r2_10);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
L_6175e8:;
    call_0062add8(r5 + 0x2cdcu, r1, r2, guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if ((u32(*gptr<u8>(r7 + 0x26au)) & 2u) == 0) {  // (from the original)
        r6 = 0x708u;  // (from the original)
        r4 = 0u;
    } else {
        goto L_61763c;
    }
    do {
        u32 r0_16 = call_0075efdc(r5 + 0x10u, r4 & 0xffu, r2);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0_16 > r6) {
            *gptr<u8>(r7 + 0x26au) = u8(u32(*gptr<u8>(r7 + 0x26au)) | 2u);  // (from the original)
            goto L_61763c;
        }
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 4);
L_61763c:;
    if ((u32(*gptr<u8>(r7 + 0x26au)) & 0x10u) == 0) {  // (from the original)
        r4 = 0u;
    } else {
        goto L_6176c0;
    }
    do {
        u32 r6_1 = r4 & 0xffu;  // (from the original)
        u32 r8_1 = *gptr<u8>(r7 + 0x270u);  // (from the original)
        u32 r0_17 = call_00624c78(r6_1, r1, r2);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if ((r0_17 & r8_1) != 0) {
            if (r6_1 != 0) {
                goto L_617698;
            }
            r0_18 = call_00746f8c(0xa22020u, r1, r2);  // (from the original)
            r1_12 = guest::cpu()->r[1];
            r2_11 = guest::cpu()->r[2];
            if (r0_18 == 0) {
                goto L_617698;
            }
            r0_19 = call_00746efc(0xa22020u, r1_12, r2_11);  // (from the original)
            if (r0_19 >= 2u) {
                goto L_6176e0;
            }
L_617698:;
            u32 r0_21 = call_0075f644(r5 + 0xb0u, r6_1, 1u);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            if (r0_21 == 0) {
                goto L_6176e0;
            }
        }
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 4);
L_6176c0:;
    r1_13 = *gptr<u8>(r7 + 0x26au);  // (from the original)
    r0_22 = *gptr<u8>(r7 + 0x26bu);  // (from the original)
    if (r0_22 != r1_13) {
        r1_13 |= r0_22;
        *gptr<u8>(r7 + 0x26bu) = u8(r0_22 | r1_13);  // (from the original)
    }
    guest::cpu()->r[1] = r1_13;
    return;
L_6176e0:;
    *gptr<u8>(r7 + 0x26au) = u8(u32(*gptr<u8>(r7 + 0x26au)) | 0x10u);  // (from the original)
    guest::preempt();
    goto L_6176c0;
}

}  // namespace d_0061754c
GUEST_EXPORT_FRAMED(0x0061754c, d_0061754c::f_0061754c, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_006176fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006176fc {

struct __attribute__((packed)) Local_006176fc_r12_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006176fc_r12_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006176fc_r12_1, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x0062c790, u32(u32, u32, u32, u32)> call_0062c790;  // (from the original)

void f_006176fc(u32 r0) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    gptr<Local_006176fc_r12_1> r12_1 = gptr<Local_006176fc_r12_1>(frame.at(0x10).addr());  // (from the original)
    float S0_1 = std::bit_cast<float>(r12_1->word_0);
    float S1_1 = std::bit_cast<float>(r12_1->word_4);
    *frame.at<u32>(0) = std::bit_cast<u32>(S0_1);
    *frame.at<u32>(4) = std::bit_cast<u32>(S1_1);
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    call_0062c790(r0 + 0x28ecu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    return;
}

}  // namespace d_006176fc
GUEST_EXPORT_FRAMED(0x006176fc, d_006176fc::f_006176fc, 0x4000);  // pushes {lr} first, as the original

// f_00617724: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00617724 {

struct __attribute__((packed)) Object_00617724_0 {
    u8 unknown_0[0x132a0];  // (not used here)
    u32 word_132a0;
};
GUEST_OFFSET(Object_00617724_0, word_132a0, 0x132a0);  // (from the original)

inline constexpr guest::Function<0x0050cfb8, u32(u32, u32, u32, u32)> call_0050cfb8;  // (from the original)
inline constexpr guest::Function<0x0050cfcc, u32(u32, u32, u32, u32)> call_0050cfcc;  // (from the original)
inline constexpr guest::Function<0x0062217c, u32(u32, u32, u32, u32)> call_0062217c;  // (from the original)
inline constexpr guest::Function<0x006297a8, u32(u32, u32)> call_006297a8;  // (from the original)

u32 f_00617724(gptr<Object_00617724_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r6 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r5 = r0 + 0x13000u;  // (from the original)
    u32 r4 = r0;
    if (arg0->word_132a0 == 0) {
        goto L_617774;
    } else {
        r6 = 1u;
    }
L_617740:;
    if (*gptr<u32>(r5 + 0x2a0u) == 0) {  // (from the original)
        goto L_61778c;
    }
    if (r6 == 0) {
        guest::cpu()->r[1] = r1;
        return r6;
    }
L_617754:;
    r0_1 = *gptr<u32>(r5 + 0x2a0u);  // (from the original)
    if (r0_1 + 1u != 0) {
        *gptr<u32>(r5 + 0x2a0u) = r0_1 + 1u;  // (from the original)
    }
    call_0050cfb8(0xa22020u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    return r6;
L_617774:;
    r1_1 = r4 + 0xb0u;  // (from the original)
    r0_2 = call_0050cfcc(0xa22020u, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    r6 = r0_2;
    guest::preempt();
    goto L_617740;
L_61778c:;
    if (r6 == 0) {
        guest::cpu()->r[1] = r1;
        return r6;
    }
    call_0062217c(r4 + 0x3594u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_006297a8(r4 + 0x7874u, guest::cpu()->r[1]);  // (from the original)
    r1 = guest::cpu()->r[1];
    guest::preempt();
    goto L_617754;
}

}  // namespace d_00617724
GUEST_EXPORT_FRAMED(0x00617724, d_00617724::f_00617724, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00617824: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00617824 {

inline constexpr guest::Function<0x0062c2bc, u32(u32, u32, u32, u32)> call_0062c2bc;  // (from the original)

void f_00617824(u32 r0) {
    call_0062c2bc(r0 + 0x28ecu, guest::cpu()->r[1], 0x87bd90u, 0x88f298u);  // (from the original)
    return;  // (from the original)
}

}  // namespace d_00617824
GUEST_EXPORT(0x00617824, d_00617824::f_00617824);

// f_006179d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006179d0 {

inline constexpr guest::Function<0x0061d9e0, u32(u32)> call_0061d9e0;  // (from the original)
inline constexpr guest::Function<0x006235cc, u32(u32, u32, u32, u32)> call_006235cc;  // (from the original)

u32 f_006179d0(u32 r0) {
    u32 r4_1 = 1u;
    u32 r0_2 = call_006235cc(r0 + 0x23cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    if (r0_2 == 0) {
        r4_1 = 0u;
    }
    u32 r0_4 = call_0061d9e0(r0 + 0x27a0u);  // (from the original)
    if (r0_4 == 0) {
        r4_1 = 0u;
    }
    return r4_1;
}

}  // namespace d_006179d0
GUEST_EXPORT_FRAMED(0x006179d0, d_006179d0::f_006179d0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00617d08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00617d08 {

struct __attribute__((packed)) Object_00617d08_0 {
    u8 unknown_0[0x132af];  // (not used here)
    u8 byte_132af;
};
GUEST_OFFSET(Object_00617d08_0, byte_132af, 0x132af);  // (from the original)

struct __attribute__((packed)) Local_00617d08_r5_1 {
    u8 unknown_0[0x29d];  // (not used here)
    u8 byte_29d;
    u8 unknown_29e[0x11];  // (not used here)
    u8 byte_2af;
};
GUEST_OFFSET(Local_00617d08_r5_1, byte_29d, 0x29d);  // (from the original)
GUEST_OFFSET(Local_00617d08_r5_1, byte_2af, 0x2af);  // (from the original)

inline constexpr guest::Function<0x0056bd04, u32(u32, u32, u32, u32)> call_0056bd04;  // (from the original)
inline constexpr guest::Function<0x0061a41c, u32(u32, u32, u32, u32)> call_0061a41c;  // (from the original)
inline constexpr guest::Function<0x0061dae4, u32(u32, u32)> call_0061dae4;  // (from the original)
inline constexpr guest::Function<0x006214c4, u32(u32, u32)> call_006214c4;  // (from the original)
inline constexpr guest::Function<0x00623664, u32(u32, u32)> call_00623664;  // (from the original)
inline constexpr guest::Function<0x0075f1c4, u32(u32, u32)> call_0075f1c4;  // (from the original)

void f_00617d08(gptr<Object_00617d08_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    gptr<Local_00617d08_r5_1> r5_1 = gptr<Local_00617d08_r5_1>(r0 + 0x13000u);  // (from the original)
    u32 r0_1 = arg0->byte_132af;
    if (r0_1 != 0) {
        call_0056bd04(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r5_1->byte_2af = 0;
    }
    call_0061a41c(r0 + 0x1e4u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_006214c4(r0 + 0x1c0u, guest::cpu()->r[1]);  // (from the original)
    call_00623664(r0 + 0x23cu, guest::cpu()->r[1]);  // (from the original)
    call_0061dae4(r0 + 0x27a0u, guest::cpu()->r[1]);  // (from the original)
    if (u32(r5_1->byte_29d) != 2u && u32(*gptr<u8>((r0 + 0x13200u) + 0xb0u)) != 0) {  // (from the original)
        u32 r0_7 = call_0075f1c4(r0 + 0x7874u, 2u);  // (from the original)
        if (r0_7 != 0) {
            r5_1->byte_29d = 2;
        }
    }
    return;
}

}  // namespace d_00617d08
GUEST_EXPORT_FRAMED(0x00617d08, d_00617d08::f_00617d08, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00617f90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00617f90 {

struct __attribute__((packed)) Object_00617f90_0 {
    u8 unknown_0[0x1329c];  // (not used here)
    u8 byte_1329c;
};
GUEST_OFFSET(Object_00617f90_0, byte_1329c, 0x1329c);  // (from the original)

inline guest::global<u32, 0x00951670> global_00951670;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x002ff8b0, u32(u32, u32, u32, u32)> call_002ff8b0;  // (from the original)
inline constexpr guest::Function<0x003082b8, u32(u32, u32)> call_003082b8;  // (from the original)
inline constexpr guest::Function<0x0051d710, u32(u32, u32, u32)> call_0051d710;  // (from the original)
inline constexpr guest::Function<0x005c394c, u32(u32, u32, u32)> call_005c394c;  // (from the original)
inline constexpr guest::Function<0x005c4400, u32(u32, u32, u32)> call_005c4400;  // (from the original)
inline constexpr guest::Function<0x00621cf4, u32(u32, u32, u32)> call_00621cf4;  // (from the original)
inline constexpr guest::Function<0x00623d48, u32(u32, u32, u32)> call_00623d48;  // (from the original)
inline constexpr guest::Function<0x00624aa4, u32(u32, u32, u32)> call_00624aa4;  // (from the original)
inline constexpr guest::Function<0x00624f30, u32(u32, u32, u32)> call_00624f30;  // (from the original)
inline constexpr guest::Function<0x006282c0, u32(u32, u32, u32)> call_006282c0;  // (from the original)
inline constexpr guest::Function<0x006298cc, u32(u32, u32, u32)> call_006298cc;  // (from the original)
inline constexpr guest::Function<0x00746fb4, u32(u32, u32, u32, u32)> call_00746fb4;  // (from the original)

void f_00617f90(gptr<Object_00617f90_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r1_4 = 0;
    u32 r6 = r0 + 0x13000u;  // (from the original)
    u32 r5 = r0;
    u32 r7 = r1;
    u32 r4 = r2;
    if (u32(arg0->byte_1329c) >= 8u) {
        u32 r0_1 = call_002ff8b0(4u, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        *gptr<u8>(r6 + 0x29cu) = u8(r0_1);  // (from the original)
    }
    u32 r0_2 = call_00746fb4(0xa22020u, r1, r2, guest::cpu()->r[3]);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        call_00623d48(r5 + 0x78u, 0u, guest::cpu()->r[2]);  // (from the original)
        call_00624f30(r5 + 0x58u, 0u, guest::cpu()->r[2]);  // (from the original)
        u32 r9 = 7u;
        call_00624aa4(r5 + 0x1326cu, 0u, guest::cpu()->r[2]);  // (from the original)
        call_00624aa4(0x1326eu + r5, 0u, guest::cpu()->r[2]);  // (from the original)
        *gptr<u8>(r6 + 0x2acu) = 1;  // (from the original)
        *gptr<u8>(r6 + 0x2adu) = 1;  // (from the original)
        *gptr<u8>(r6 + 0x268u) = 0;  // (from the original)
        *gptr<u8>(r6 + 0x2aeu) = 1;  // (from the original)
        call_006298cc(r5 + 0xb0u, guest::cpu()->r[1], guest::cpu()->r[2]);  // (from the original)
        call_00621cf4(r5 + 0x1c0u, guest::cpu()->r[1], guest::cpu()->r[2]);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r4 == 0) {
            goto L_61806c;
        }
        r0_9 = r5 + 0x13234u;  // (from the original)
        call_0051d710(r0_9, 0u, r2);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
L_618050:;
        r0_10 = r5 + 0x10u;  // (from the original)
        call_006282c0(r0_10, r1, r2);
        r1_4 = guest::cpu()->r[1];
        call_003082b8(r0_10, r1_4);
        *gptr<u8>(r6 + 0x2b1u) = u8(r7);  // (from the original)
        return;
L_61806c:;
        u32 r0_11 = r4 & 0xffu;  // (from the original)
        if (r0_11 == 0) {
            goto L_618088;
        }
        call_005c4400(r0_11, r1, r2);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
L_618078:;
        r4 += 1u;
        if (s32(r4) < 4) {
            guest::preempt();
            goto L_61806c;
        }
        guest::preempt();
        goto L_618050;
L_618088:;
        u32 r0_12 = call_002fb94c(r0_11, r1, r2);
        call_005c394c(0u, r9, r0_12);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        guest::preempt();
        goto L_618078;
    }
    *gptr<u8>(r6 + 0x2acu) = 1;  // (from the original)
    *gptr<u32>(r5 + 0x50u) = *global_00951670;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_00617f90
GUEST_EXPORT_FRAMED(0x00617f90, d_00617f90::f_00617f90, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_00618164: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00618164 {

struct __attribute__((packed)) Local_00618164_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_00618164_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00618164_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00618164_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00618164_ea_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_00618164_ea_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_00618164_ea_1, word_14, 0x14);  // (from the original)

struct __attribute__((packed)) Local_00618164_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_00618164_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00618164_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00618164_ea_2, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00618164_ea_2, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_00618164_ea_2, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_00618164_ea_2, word_14, 0x14);  // (from the original)

struct __attribute__((packed)) Local_00618164_r7_1 {
    u8 unknown_0[0x2a4];  // (not used here)
    u8 byte_2a4;
    u8 unknown_2a5[0x3];  // (not used here)
    u8 byte_2a8;
};
GUEST_OFFSET(Local_00618164_r7_1, byte_2a4, 0x2a4);  // (from the original)
GUEST_OFFSET(Local_00618164_r7_1, byte_2a8, 0x2a8);  // (from the original)

inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32, u32)> call_00137e84;  // (from the original)
inline constexpr guest::Function<0x00617088, u32(u32, u32)> call_00617088;  // (from the original)
inline constexpr guest::Function<0x0061dd74, u32(u32, u32)> call_0061dd74;  // (from the original)
inline constexpr guest::Function<0x00620660, u32(u32, u32)> call_00620660;  // (from the original)
inline constexpr guest::Function<0x00621684, u32(u32, u32)> call_00621684;  // (from the original)
inline constexpr guest::Function<0x006237a4, u32(u32, u32)> call_006237a4;  // (from the original)
inline constexpr guest::Function<0x00623c3c, u32(u32, u32)> call_00623c3c;  // (from the original)
inline constexpr guest::Function<0x006245ec, u32(u32, u32)> call_006245ec;  // (from the original)
inline constexpr guest::Function<0x00624ae4, u32(u32, u32)> call_00624ae4;  // (from the original)
inline constexpr guest::Function<0x00624b24, u32(u32, u32)> call_00624b24;  // (from the original)
inline constexpr guest::Function<0x00624f14, u32(u32, u32)> call_00624f14;  // (from the original)
inline constexpr guest::Function<0x006251a0, u32(u32, u32)> call_006251a0;  // (from the original)
inline constexpr guest::Function<0x00628000, u32(u32, u32)> call_00628000;  // (from the original)
inline constexpr guest::Function<0x0062a04c, u32(u32, u32, u32, u32)> call_0062a04c;  // (from the original)

void f_00618164(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    if (r1 >= 4u) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        guest::cpu()->r[8] = r8;
        guest::cpu()->r[13] = r13;
        return;
    }
    gptr<Local_00618164_ea_1> ea_1 = gptr<Local_00618164_ea_1>(r13 - 0x18);  // (from the original)
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r6;
    ea_1->word_c = r7;
    ea_1->word_10 = r8;
    ea_1->word_14 = r14;
    r13 -= 0x18;  // (from the original)
    gptr<Local_00618164_r7_1> r7_1 = gptr<Local_00618164_r7_1>(r0 + r1 + 0x13000u);  // (from the original)
    u32 r5_1 = r0 + 0x13280u;  // (from the original)
    r7_1->byte_2a4 = 0;
    guest::cpu()->r[13] = r13;
    call_00135740(r5_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    r7_1->byte_2a8 = 0;
    guest::cpu()->r[13] = r13;
    call_00137e84(r5_1, r1_1);
    guest::cpu()->r[13] = r13;
    call_00621684(r0 + 0x1c0u, r1);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00624f14(r0 + 0x58u, r1);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00623c3c(r0 + 0x78u, r1);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00628000(r0 + 0x10u, r1);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0061dd74(r0 + 0x27a0u, r1);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_006251a0(r0 + 0x2784u, r1);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00617088(r0 + 0x277cu, r1);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_006237a4(r0 + 0x23cu, r1);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_006245ec(r0 + 0x22cu, r1);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00620660(r0 + 0x214u, r1);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00624ae4(r0 + 0x1e4u, r1);  // (from the original)
    u32 r1_2 = guest::cpu()->r[1];
    guest::cpu()->r[13] = r13;
    call_00135740(r5_1, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] = r13;
    call_00624b24(0x13272u + r0, r1);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00624b24(r0 + 0x13274u, r1);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00624b24(0x13276u + r0, r1);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00624b24(r0 + 0x13278u, r1);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00624b24(0x1327au + r0, r1);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00624b24(r0 + 0x1327cu, r1);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00624b24(r0 + 0x13270u, r1);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00624b24(0x1326eu + r0, r1);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00624b24(r0 + 0x1326cu, r1);  // (from the original)
    u32 r1_3 = guest::cpu()->r[1];
    guest::cpu()->r[13] = r13;
    call_00137e84(r5_1, r1_3);
    gptr<Local_00618164_ea_2> ea_2 = gptr<Local_00618164_ea_2>(r13);
    r13 += 0x18;  // (from the original)
    u32 r4_1 = ea_2->word_0;
    u32 r5_2 = ea_2->word_4;
    u32 r6_1 = ea_2->word_8;
    u32 r7_2 = ea_2->word_c;
    u32 r8_1 = ea_2->word_10;
    r14 = ea_2->word_14;
    guest::cpu()->r[13] = r13;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[8] = r8_1;
    call_0062a04c(r0 + 0xb0u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    return;
}

}  // namespace d_00618164
GUEST_EXPORT(0x00618164, d_00618164::f_00618164);

// f_006182f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006182f4 {

struct __attribute__((packed)) Local_006182f4_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_006182f4_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006182f4_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_006182f4_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_006182f4_ea_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_006182f4_ea_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_006182f4_ea_1, word_14, 0x14);  // (from the original)

struct __attribute__((packed)) Local_006182f4_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_006182f4_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006182f4_ea_3, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_006182f4_ea_3, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_006182f4_ea_3, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_006182f4_ea_3, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_006182f4_ea_3, word_14, 0x14);  // (from the original)

struct __attribute__((packed)) Local_006182f4_r0_3 {
    u8 unknown_0[0x26a];  // (not used here)
    u8 byte_26a;
};
GUEST_OFFSET(Local_006182f4_r0_3, byte_26a, 0x26a);  // (from the original)

inline constexpr guest::Function<0x00135740, u32(u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32, u32)> call_00137e84;  // (from the original)

void f_006182f4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 r0_1 = 0;
    u32 zf_1 = 0;
    u32 cf_1 = 0;
    u32 r0_2 = 0;
    gptr<Local_006182f4_r0_3> r0_3 = gptr<Local_006182f4_r0_3>(0u);
    if (r1 >= 4u) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        guest::cpu()->r[8] = r8;
        guest::cpu()->r[13] = r13;
        return;
    }
    gptr<Local_006182f4_ea_1> ea_1 = gptr<Local_006182f4_ea_1>(r13 - 0x18);  // (from the original)
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r6;
    ea_1->word_c = r7;
    ea_1->word_10 = r8;
    ea_1->word_14 = r14;
    r13 -= 0x18;  // (from the original)
    u32 r6_1 = r0 + 0x13280u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00135740(r6_1);
    u32 r1_1 = r0 + r1 + 0x13000u;  // (from the original)
    if (r3 == 0) {
        goto L_61835c;
    }
    r0_1 = *gptr<u8>(r1_1 + 0x2a8u);  // (from the original)
    zf_1 = r2 == r0_1;
    cf_1 = r2 >= r0_1;
    r0_2 = r2 - r0_1;
    if (!cf_1 || zf_1) {
        r0_2 += 0x100u;  // (from the original)
    }
    if ((r0_2 & 0xffu) == 1u) {  // (from the original)
        goto L_61835c;
    }
    r0_3 = gptr<Local_006182f4_r0_3>(r0 + 0x13000u);  // (from the original)
    r0_3->byte_26a = u8(u32(r0_3->byte_26a) | 8u);
L_61835c:;
    *gptr<u8>(r1_1 + 0x2a8u) = u8(r2);  // (from the original)
    gptr<Local_006182f4_ea_3> ea_3 = gptr<Local_006182f4_ea_3>(r13);
    r13 += 0x18;  // (from the original)
    u32 r4_1 = ea_3->word_0;
    u32 r5_1 = ea_3->word_4;
    u32 r6_2 = ea_3->word_8;
    u32 r7_1 = ea_3->word_c;
    u32 r8_1 = ea_3->word_10;
    r14 = ea_3->word_14;
    guest::cpu()->r[13] = r13;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_1;
    call_00137e84(r6_1, r1_1);
    return;
}

}  // namespace d_006182f4
GUEST_EXPORT(0x006182f4, d_006182f4::f_006182f4);

// f_00618384: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00618384 {

inline constexpr guest::Function<0x001add58, u32(u32, u32, u32, u32)> call_001add58;  // (from the original)
inline constexpr guest::Function<0x00308d4d, u32(u32)> call_00308d4c;  // (from the original)

void f_00618384(u32 r0) {
    u32 r0_1 = r0 + 0x7894u;  // (from the original)
    call_001add58(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_00308d4c(r0_1);
    *gptr<u8>(r0 + 0x9db0u) = 0;  // (from the original)
    return;
}

}  // namespace d_00618384
GUEST_EXPORT_FRAMED(0x00618384, d_00618384::f_00618384, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006184d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006184d8 {

struct __attribute__((packed)) Object_006184d8_0 {
    u8 unknown_0[0x1f0];  // (not used here)
    u8 byte_1f0;
    u8 byte_1f1;
};
GUEST_OFFSET(Object_006184d8_0, byte_1f0, 0x1f0);  // (from the original)
GUEST_OFFSET(Object_006184d8_0, byte_1f1, 0x1f1);  // (from the original)

inline constexpr guest::Function<0x0075f644, u32(u32, u32, u32)> call_0075f644;  // (from the original)

u32 f_006184d8(gptr<Object_006184d8_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r0_1 = arg0->byte_1f1;
    if (r0_1 == 0 || r0_1 == 5u) {
        u32 r0_3 = call_0075f644(r0 + 0xb0u, 0u, 1u);  // (from the original)
        r1 = guest::cpu()->r[1];
        if (r0_3 == 0) {
            arg0->byte_1f0 = 0;
            return ~0u;
        }
    }
    u32 r0_4 = arg0->byte_1f0;
    if (r0_4 == 1u) {
        guest::cpu()->r[1] = r1;
        return r0_4;
    }
    guest::cpu()->r[1] = r1;
    return r0_4 == 0 ? ~0u : 0u;
}

}  // namespace d_006184d8
GUEST_EXPORT_FRAMED(0x006184d8, d_006184d8::f_006184d8, 0x4010);  // pushes {r4, lr} first, as the original

// f_00618578: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00618578 {

struct __attribute__((packed)) Object_00618578_0 {
    u8 unknown_0[0x13268];  // (not used here)
    u8 byte_13268;
    u8 unknown_13269[0x45];  // (not used here)
    u8 byte_132ae;
};
GUEST_OFFSET(Object_00618578_0, byte_13268, 0x13268);  // (from the original)
GUEST_OFFSET(Object_00618578_0, byte_132ae, 0x132ae);  // (from the original)

struct __attribute__((packed)) Local_00618578_r6_1 {
    u8 unknown_0[0x268];  // (not used here)
    u8 byte_268;
    u8 unknown_269[0x45];  // (not used here)
    u8 byte_2ae;
};
GUEST_OFFSET(Local_00618578_r6_1, byte_268, 0x268);  // (from the original)
GUEST_OFFSET(Local_00618578_r6_1, byte_2ae, 0x2ae);  // (from the original)

inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x0051d710, u32(u32, u32, u32)> call_0051d710;  // (from the original)
inline constexpr guest::Function<0x005c394c, u32(u32, u32, u32)> call_005c394c;  // (from the original)
inline constexpr guest::Function<0x005c4400, u32(u32, u32, u32)> call_005c4400;  // (from the original)
inline constexpr guest::Function<0x00623d48, u32(u32, u32, u32)> call_00623d48;  // (from the original)
inline constexpr guest::Function<0x00624f30, u32(u32, u32, u32)> call_00624f30;  // (from the original)
inline constexpr guest::Function<0x0075f578, u32(u32, u32, u32, u32)> call_0075f578;  // (from the original)

void f_00618578(gptr<Object_00618578_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r4 = 0;
    gptr<Local_00618578_r6_1> r6_1 = gptr<Local_00618578_r6_1>(r0 + 0x13000u);  // (from the original)
    u32 r5 = arg0->byte_13268;
    u32 r7_1 = r1;
    if (r5 == 0) {
        return;
    }
    u32 r0_1 = arg0->byte_132ae;
    if (r0_1 != 0) {
        return;
    }
    if (r5 >= 4u) {
        r0_1 = call_0075f578(r0 + 0xb0u, r1, r2, guest::cpu()->r[3]);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r5 = r0_1;
        if (r0_1 >= 4u) {
            return;
        }
    }
    u32 r0_3 = call_002fb94c(r0_1, r1, r2, guest::cpu()->r[3]);
    u32 r8 = r0_3;
    r6_1->byte_268 = u8(r5);
    r6_1->byte_2ae = 1;
    call_00623d48(r0 + 0x78u, r5, guest::cpu()->r[2]);  // (from the original)
    call_00624f30(r0 + 0x58u, r5, guest::cpu()->r[2]);  // (from the original)
    call_0051d710(r0 + 0x13234u, r5, guest::cpu()->r[2]);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r7_1 == 0) {
        r4 = 0u;
    } else {
        return;
    }
    do {
        u32 r0_7 = r4 & 0xffu;  // (from the original)
        if (r0_7 == 0) {
            goto L_618640;
        }
        if (r0_7 == r5) {
            call_005c394c(r0_7, r4 + 3u & 0xffu, r8);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            goto L_618640;
        }
        call_005c4400(r0_7, r1, r2);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
L_618640:;
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 4);
    return;
}

}  // namespace d_00618578
GUEST_EXPORT_FRAMED(0x00618578, d_00618578::f_00618578, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00618684: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00618684 {

inline constexpr guest::Function<0x0050d24c, u32(u32, u32, u32, u32)> call_0050d24c;  // (from the original)
inline constexpr guest::Function<0x00617f90, u32(u32, u32, u32)> call_00617f90;  // (from the original)

u32 f_00618684(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = call_0050d24c(0xa22020u, r1, r2, guest::cpu()->r[3]);  // (from the original)
    if (r0_1 == 0) {
        return r0_1;
    }
    call_00617f90(r0, 1u, 0u);
    return 1u;
}

}  // namespace d_00618684
GUEST_EXPORT_FRAMED(0x00618684, d_00618684::f_00618684, 0x4010);  // pushes {r4, lr} first, as the original

// f_006186b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006186b8 {

struct __attribute__((packed)) Local_006186b8_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_006186b8_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006186b8_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_006186b8_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_006186b8_ea_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_006186b8_ea_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_006186b8_ea_1, word_14, 0x14);  // (from the original)

struct __attribute__((packed)) Local_006186b8_ea_4 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_006186b8_ea_4, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006186b8_ea_4, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_006186b8_ea_4, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_006186b8_ea_4, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Local_006186b8_r0_2 {
    u8 unknown_0[0xac];  // (not used here)
    u8 byte_ac;
    u8 unknown_ad[0x1];  // (not used here)
    u8 byte_ae;
};
GUEST_OFFSET(Local_006186b8_r0_2, byte_ac, 0xac);  // (from the original)
GUEST_OFFSET(Local_006186b8_r0_2, byte_ae, 0xae);  // (from the original)

inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> call_00300904;  // (from the original)
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;  // (from the original)

u32 f_006186b8(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_006186b8_r0_2> r0_2 = gptr<Local_006186b8_r0_2>(0u);
    u32 r2_1 = 0;
    gptr<Local_006186b8_ea_1> ea_1 = gptr<Local_006186b8_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r4;
    ea_1->word_c = r5;
    ea_1->word_10 = r6;
    ea_1->word_14 = r14;
    u32 r0_1 = call_00300904(r0, r1, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r4_1 = r0 + 0x13000u;  // (from the original)
    if (r0_1 == 0) {
        goto L_618718;
    }
    r0_2 = gptr<Local_006186b8_r0_2>(r0 + 0x13200u);  // (from the original)
    r2_1 = frame.at(4).addr();
    if (u32(r0_2->byte_ac) != 0 && u32(r0_2->byte_ae) != 0 && u32(*gptr<u8>(r4_1 + 0x268u)) != 0) {  // (from the original)
        call_006249b0(0x76u, 0u, r2_1, 1u);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        goto L_618718;
    }
    call_006249b0(0x76u, 4u, r2_1, 1u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
L_618718:;
    u32 r0_3 = *frame.at<u8>(4);
    *gptr<u8>(r4_1 + 0x2b1u) = u8(r0_3);  // (from the original)
    gptr<Local_006186b8_ea_4> ea_4 = gptr<Local_006186b8_ea_4>(frame.at(8).addr());
    u32 r4_2 = ea_4->word_0;
    u32 r5_1 = ea_4->word_4;
    u32 r6_1 = ea_4->word_8;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    return r0_3;
}

}  // namespace d_006186b8
GUEST_EXPORT(0x006186b8, d_006186b8::f_006186b8);

// f_00618aa4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00618aa4 {

inline constexpr guest::Function<0x0050d238, u32(u32, u32, u32, u32)> call_0050d238;  // (from the original)
inline constexpr guest::Function<0x00617f90, u32(u32, u32, u32)> call_00617f90;  // (from the original)

u32 f_00618aa4(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = call_0050d238(0xa22020u, r1, r2, guest::cpu()->r[3]);  // (from the original)
    if (r0_1 == 0) {
        return r0_1;
    }
    call_00617f90(r0, 1u, 1u);
    return 1u;
}

}  // namespace d_00618aa4
GUEST_EXPORT_FRAMED(0x00618aa4, d_00618aa4::f_00618aa4, 0x4010);  // pushes {r4, lr} first, as the original

// f_00618ad8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00618ad8 {

struct __attribute__((packed)) Object_00618ad8_0 {
    u8 unknown_0[0x1f0];  // (not used here)
    u8 byte_1f0;
    u8 byte_1f1;
};
GUEST_OFFSET(Object_00618ad8_0, byte_1f0, 0x1f0);  // (from the original)
GUEST_OFFSET(Object_00618ad8_0, byte_1f1, 0x1f1);  // (from the original)


u32 f_00618ad8(gptr<Object_00618ad8_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = arg0->byte_1f0;
    if (r0_1 != 0 && r0_1 != 1u) {
        guest::cpu()->r[1] = r0;
        return 0u;
    }
    arg0->byte_1f0 = 2;
    arg0->byte_1f1 = 7;
    guest::cpu()->r[1] = r0;
    return 1u;
}

}  // namespace d_00618ad8
GUEST_EXPORT(0x00618ad8, d_00618ad8::f_00618ad8);

// f_00618b08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00618b08 {

struct __attribute__((packed)) Object_00618b08_0 {
    u8 unknown_0[0x1f0];  // (not used here)
    u8 byte_1f0;
    u8 byte_1f1;
};
GUEST_OFFSET(Object_00618b08_0, byte_1f0, 0x1f0);  // (from the original)
GUEST_OFFSET(Object_00618b08_0, byte_1f1, 0x1f1);  // (from the original)


u32 f_00618b08(gptr<Object_00618b08_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = arg0->byte_1f0;
    if (r0_1 != 0 && r0_1 != 1u) {
        guest::cpu()->r[1] = r0;
        return 0u;
    }
    arg0->byte_1f0 = 2;
    arg0->byte_1f1 = 5;
    guest::cpu()->r[1] = r0;
    return 1u;
}

}  // namespace d_00618b08
GUEST_EXPORT(0x00618b08, d_00618b08::f_00618b08);

// f_00618b38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00618b38 {

inline guest::global<u32, 0x009529cc> global_009529cc;  // (from the original)
inline constexpr guest::Function<0x0050d260, u32(u32, u32, u32, u32)> call_0050d260;  // (from the original)
inline constexpr guest::Function<0x00617f90, u32(u32, u32, u32, u32)> call_00617f90;  // (from the original)
inline constexpr guest::Function<0x0061ee74, u32(u32, u32, u32, u32)> call_0061ee74;  // (from the original)
inline constexpr guest::Function<0x0070ab10, u32(u32, u32, u32, u32)> call_0070ab10;  // (from the original)

u32 f_00618b38(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r0_1 = call_0050d260(0xa22020u, r1, r2, r3);  // (from the original)
    u32 r3_1 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        return r0_1;
    }
    call_00617f90(r0, 0u, r2, r3_1);
    u32 r0_3 = call_0070ab10(*global_009529cc, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *frame.at<u32>(0) = r0_3;
    call_0061ee74(r0 + 0x27a0u, 0u, frame.at(0).addr(), 0u);  // (from the original)
    return 1u;
}

}  // namespace d_00618b38
GUEST_EXPORT_FRAMED(0x00618b38, d_00618b38::f_00618b38, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00618c00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00618c00 {

struct __attribute__((packed)) Object_00618c00_0 {
    u8 unknown_0[0x1326a];  // (not used here)
    u8 byte_1326a;
    u8 byte_1326b;
    u8 unknown_1326c[0x38];  // (not used here)
    u8 byte_132a4;
    u8 byte_132a5;
    u8 byte_132a6;
    u8 byte_132a7;
    u8 byte_132a8;
    u8 byte_132a9;
    u8 byte_132aa;
    u8 byte_132ab;
    u8 unknown_132ac[0x3];  // (not used here)
    u8 byte_132af;
};
GUEST_OFFSET(Object_00618c00_0, byte_1326a, 0x1326a);  // (from the original)
GUEST_OFFSET(Object_00618c00_0, byte_1326b, 0x1326b);  // (from the original)
GUEST_OFFSET(Object_00618c00_0, byte_132a4, 0x132a4);  // (from the original)
GUEST_OFFSET(Object_00618c00_0, byte_132a5, 0x132a5);  // (from the original)
GUEST_OFFSET(Object_00618c00_0, byte_132a6, 0x132a6);  // (from the original)
GUEST_OFFSET(Object_00618c00_0, byte_132a7, 0x132a7);  // (from the original)
GUEST_OFFSET(Object_00618c00_0, byte_132a8, 0x132a8);  // (from the original)
GUEST_OFFSET(Object_00618c00_0, byte_132a9, 0x132a9);  // (from the original)
GUEST_OFFSET(Object_00618c00_0, byte_132aa, 0x132aa);  // (from the original)
GUEST_OFFSET(Object_00618c00_0, byte_132ab, 0x132ab);  // (from the original)
GUEST_OFFSET(Object_00618c00_0, byte_132af, 0x132af);  // (from the original)

struct __attribute__((packed)) Local_00618c00_r5_1 {
    u8 unknown_0[0x266];  // (not used here)
    u8 byte_266;
    u8 byte_267;
    u8 byte_268;
    u8 unknown_269[0x33];  // (not used here)
    u8 byte_29c;
    u8 byte_29d;
    u8 unknown_29e[0xe];  // (not used here)
    u8 byte_2ac;
    u8 byte_2ad;
    u8 byte_2ae;
    u8 unknown_2af[0x2];  // (not used here)
    u8 byte_2b1;
    u8 byte_2b2;
    u8 byte_2b3;
    u8 byte_2b4;
    u8 byte_2b5;
    u8 byte_2b6;
    u8 byte_2b7;
};
GUEST_OFFSET(Local_00618c00_r5_1, byte_266, 0x266);  // (from the original)
GUEST_OFFSET(Local_00618c00_r5_1, byte_267, 0x267);  // (from the original)
GUEST_OFFSET(Local_00618c00_r5_1, byte_268, 0x268);  // (from the original)
GUEST_OFFSET(Local_00618c00_r5_1, byte_29c, 0x29c);  // (from the original)
GUEST_OFFSET(Local_00618c00_r5_1, byte_29d, 0x29d);  // (from the original)
GUEST_OFFSET(Local_00618c00_r5_1, byte_2ac, 0x2ac);  // (from the original)
GUEST_OFFSET(Local_00618c00_r5_1, byte_2ad, 0x2ad);  // (from the original)
GUEST_OFFSET(Local_00618c00_r5_1, byte_2ae, 0x2ae);  // (from the original)
GUEST_OFFSET(Local_00618c00_r5_1, byte_2b1, 0x2b1);  // (from the original)
GUEST_OFFSET(Local_00618c00_r5_1, byte_2b2, 0x2b2);  // (from the original)
GUEST_OFFSET(Local_00618c00_r5_1, byte_2b3, 0x2b3);  // (from the original)
GUEST_OFFSET(Local_00618c00_r5_1, byte_2b4, 0x2b4);  // (from the original)
GUEST_OFFSET(Local_00618c00_r5_1, byte_2b5, 0x2b5);  // (from the original)
GUEST_OFFSET(Local_00618c00_r5_1, byte_2b6, 0x2b6);  // (from the original)
GUEST_OFFSET(Local_00618c00_r5_1, byte_2b7, 0x2b7);  // (from the original)

inline constexpr guest::Function<0x00301444, u32(u32, u32)> call_00301444;  // (from the original)
inline constexpr guest::Function<0x006170f4, u32(u32, u32)> call_006170f4;  // (from the original)
inline constexpr guest::Function<0x0061a6a4, u32(u32, u32)> call_0061a6a4;  // (from the original)
inline constexpr guest::Function<0x0061f3f8, u32(u32)> call_0061f3f8;  // (from the original)
inline constexpr guest::Function<0x00620dcc, u32(u32, u32)> call_00620dcc;  // (from the original)
inline constexpr guest::Function<0x006239fc, u32(u32, u32)> call_006239fc;  // (from the original)
inline constexpr guest::Function<0x00623dcc, u32(u32, u32)> call_00623dcc;  // (from the original)
inline constexpr guest::Function<0x0062478c, u32(u32, u32)> call_0062478c;  // (from the original)
inline constexpr guest::Function<0x00624be4, u32(u32, u32, u32, u32)> call_00624be4;  // (from the original)
inline constexpr guest::Function<0x00624c68, u32(u32, u32)> call_00624c68;  // (from the original)
inline constexpr guest::Function<0x00624fd4, u32(u32, u32)> call_00624fd4;  // (from the original)
inline constexpr guest::Function<0x006255b8, u32(u32, u32)> call_006255b8;  // (from the original)
inline constexpr guest::Function<0x00625da4, u32(u32, u32)> call_00625da4;  // (from the original)
inline constexpr guest::Function<0x00625ed4, u32(u32, u32)> call_00625ed4;  // (from the original)
inline constexpr guest::Function<0x00626070, u32(u32, u32)> call_00626070;  // (from the original)
inline constexpr guest::Function<0x00626454, u32(u32, u32)> call_00626454;  // (from the original)
inline constexpr guest::Function<0x006265c4, u32(u32, u32)> call_006265c4;  // (from the original)
inline constexpr guest::Function<0x0062834c, u32(u32, u32)> call_0062834c;  // (from the original)
inline constexpr guest::Function<0x00629808, u32(u32, u32)> call_00629808;  // (from the original)
inline constexpr guest::Function<0x0062a724, u32(u32, u32)> call_0062a724;  // (from the original)

u32 f_00618c00(gptr<Object_00618c00_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    gptr<Local_00618c00_r5_1> r5_1 = gptr<Local_00618c00_r5_1>(r0 + 0x13000u);  // (from the original)
    arg0->byte_132a4 = 0;
    arg0->byte_132a8 = 0;
    arg0->byte_132a5 = 0;
    arg0->byte_132a9 = 0;
    arg0->byte_132a6 = 0;
    arg0->byte_132aa = 0;
    arg0->byte_132a7 = 0;
    arg0->byte_132ab = 0;
    arg0->byte_1326a = 0;
    arg0->byte_1326b = 0;
    arg0->byte_132af = 0;
    call_00624be4(r0 + 0x1c0u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_00625da4(r0 + 0x7840u, guest::cpu()->r[1]);  // (from the original)
    call_00626454(r0 + 0x7858u, guest::cpu()->r[1]);  // (from the original)
    call_006265c4(r0 + 0x786cu, guest::cpu()->r[1]);  // (from the original)
    call_00625ed4(r0 + 0x784cu, guest::cpu()->r[1]);  // (from the original)
    call_00626070(r0 + 0x7864u, guest::cpu()->r[1]);  // (from the original)
    call_006255b8(r0 + 0x2784u, guest::cpu()->r[1]);  // (from the original)
    call_006170f4(r0 + 0x277cu, guest::cpu()->r[1]);  // (from the original)
    call_006239fc(r0 + 0x23cu, guest::cpu()->r[1]);  // (from the original)
    call_0062478c(r0 + 0x22cu, guest::cpu()->r[1]);  // (from the original)
    call_00620dcc(r0 + 0x214u, guest::cpu()->r[1]);  // (from the original)
    call_0061a6a4(r0 + 0x1e4u, guest::cpu()->r[1]);  // (from the original)
    call_0062834c(r0 + 0x10u, guest::cpu()->r[1]);  // (from the original)
    call_00624fd4(r0 + 0x58u, guest::cpu()->r[1]);  // (from the original)
    call_00623dcc(r0 + 0x78u, guest::cpu()->r[1]);  // (from the original)
    call_00629808(r0 + 0xa4u, guest::cpu()->r[1]);  // (from the original)
    call_00624c68(r0 + 0x1326cu, guest::cpu()->r[1]);  // (from the original)
    call_00624c68(0x1326eu + r0, guest::cpu()->r[1]);  // (from the original)
    call_00624c68(r0 + 0x13270u, guest::cpu()->r[1]);  // (from the original)
    call_00624c68(0x13272u + r0, guest::cpu()->r[1]);  // (from the original)
    call_00624c68(r0 + 0x13274u, guest::cpu()->r[1]);  // (from the original)
    call_00624c68(0x13276u + r0, guest::cpu()->r[1]);  // (from the original)
    call_00624c68(r0 + 0x13278u, guest::cpu()->r[1]);  // (from the original)
    call_00624c68(0x1327au + r0, guest::cpu()->r[1]);  // (from the original)
    call_00624c68(r0 + 0x1327cu, guest::cpu()->r[1]);  // (from the original)
    call_0062a724(r0 + 0xb0u, guest::cpu()->r[1]);  // (from the original)
    u32 r1_26 = guest::cpu()->r[1];
    r5_1->byte_2b1 = 0;
    r5_1->byte_268 = 4;
    r5_1->byte_2ae = 0;
    r5_1->byte_2b2 = 0;
    r5_1->byte_2b3 = 0;
    r5_1->byte_2b4 = 0;
    r5_1->byte_2b5 = 0;
    r5_1->byte_2b6 = 0;
    r5_1->byte_2b7 = 0;
    if (r1 == 0) {
        r5_1->byte_2ac = 0;
        r5_1->byte_29c = 8;
        r5_1->byte_2ad = 0;
        call_0061f3f8(r0 + 0x27a0u);  // (from the original)
        r5_1->byte_266 = 6;
        r5_1->byte_29d = 0;
        r5_1->byte_267 = 6;
        guest::cpu()->r[13] += 0x18u;  // (from the original)
        return call_00301444((r0 + 0x13000u) + 0x234u, 0x32u);  // (from the original)
    }
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_26;
    return 4u;
}

}  // namespace d_00618c00
GUEST_EXPORT(0x00618c00, d_00618c00::f_00618c00);

// f_00618ecc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00618ecc {

struct __attribute__((packed)) Local_00618ecc_r6_1 {
    u8 unknown_0[0x272];  // (not used here)
    u8 byte_272;
    u8 unknown_273[0x1];  // (not used here)
    u8 byte_274;
    u8 unknown_275[0x1];  // (not used here)
    u8 byte_276;
    u8 unknown_277[0x1];  // (not used here)
    u8 byte_278;
};
GUEST_OFFSET(Local_00618ecc_r6_1, byte_272, 0x272);  // (from the original)
GUEST_OFFSET(Local_00618ecc_r6_1, byte_274, 0x274);  // (from the original)
GUEST_OFFSET(Local_00618ecc_r6_1, byte_276, 0x276);  // (from the original)
GUEST_OFFSET(Local_00618ecc_r6_1, byte_278, 0x278);  // (from the original)

inline constexpr guest::Function<0x00135740, u32(u32, u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32, u32)> call_00137e84;  // (from the original)
inline constexpr guest::Function<0x00624c78, u32(u32, u32)> call_00624c78;  // (from the original)
inline constexpr guest::Function<0x0075e7ac, u32(u32, u32)> call_0075e7ac;  // (from the original)
inline constexpr guest::Function<0x0075f448, u32(u32, u32)> call_0075f448;  // (from the original)

u32 f_00618ecc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r8_2 = 0;
    u32 r0_2 = 0;
    u32 r8_3 = 0;
    u32 r0_3 = 0;
    u32 r4_1 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    if (r3 != 0) {
        u32 r5_1 = r0 + 0x13280u;  // (from the original)
        call_00135740(r5_1, r1);
        gptr<Local_00618ecc_r6_1> r6_1 = gptr<Local_00618ecc_r6_1>(r0 + 0x13000u);  // (from the original)
        u32 r8_1 = r6_1->byte_276;
        u32 r0_1 = call_00624c78(r1, guest::cpu()->r[1]);
        u32 r1_2 = guest::cpu()->r[1];
        if ((r0_1 & r8_1) == 0) {
            goto L_618f4c;
        }
        r8_2 = r6_1->byte_278;
        r0_2 = call_00624c78(r1, r1_2);
        r1_2 = guest::cpu()->r[1];
        if ((r0_2 & r8_2) != 0) {
            goto L_618f4c;
        }
        r8_3 = r6_1->byte_272;
        r0_3 = call_00624c78(r1, r1_2);
        r1_2 = guest::cpu()->r[1];
        if ((r0_3 & r8_3) == 0) {
            goto L_618f4c;
        }
        r4_1 = r6_1->byte_274;
        r0_4 = call_00624c78(r1, r1_2);
        r1_2 = guest::cpu()->r[1];
        if ((r0_4 & r4_1) == 0) {
            goto L_618f60;
        }
L_618f4c:;
        call_00137e84(r5_1, r1_2);
        r1_3 = guest::cpu()->r[1];
        return 0u;
L_618f60:;
        call_00137e84(r5_1, r1_2);
    }
    u32 r0_6 = call_0075f448(r0 + 0xb0u, r1);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    if (r0_6 == 0) {
        return 0u;
    }
    if (r2 == 0) {
        return 1u;
    }
    u32 r0_8 = call_0075e7ac(r0 + 0x78u, r1);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    if (r0_8 == 0) {
        return 1u;
    }
    return 0u;
}

}  // namespace d_00618ecc
GUEST_EXPORT_FRAMED(0x00618ecc, d_00618ecc::f_00618ecc, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_00618fb0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00618fb0 {

inline constexpr guest::Function<0x0050d478, u32(u32, u32, u32)> call_0050d478;  // (from the original)
inline constexpr guest::Function<0x005c394c, u32(u32, u32, u32)> call_005c394c;  // (from the original)
inline constexpr guest::Function<0x005c4400, u32(u32, u32, u32)> call_005c4400;  // (from the original)
inline constexpr guest::Function<0x00618c00, u32(u32, u32, u32)> call_00618c00;  // (from the original)
inline constexpr guest::Function<0x00622c5c, u32(u32, u32)> call_00622c5c;  // (from the original)
inline constexpr guest::Function<0x00623168, u32(u32, u32)> call_00623168;  // (from the original)
inline constexpr guest::Function<0x006dcc94, u32(u32, u32, u32, u32)> call_006dcc94;  // (from the original)

u32 f_00618fb0(u32 r0, u32 r1, u32 r2) {
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    u32 r5 = r0;
    call_006dcc94(r0, r1, r2, guest::cpu()->r[3]);
    u32 r6 = r5 + 0x13000u;  // (from the original)
    u32 r4_1 = *gptr<u8>(r6 + 0x29cu);  // (from the original)
    call_00618c00(r5, 0u, guest::cpu()->r[2]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r4_1 < 8u) {
        call_005c394c(0u, r4_1, 0u);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
    }
    u32 r4 = 1u;
    do {
        call_005c4400(r4 & 0xffu, r1, r2);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 4);
    u32 r0_2 = *gptr<u32>(r6 + 0x2a0u);  // (from the original)
    if (r0_2 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_2;
    }
    u32 res_1 = r0_2 - 1u;
    r0_2 = res_1;
    *gptr<u32>(r6 + 0x2a0u) = r0_2;  // (from the original)
    if (res_1 != 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_2;
    }
    call_0050d478(0xa22020u, r1, r2);  // (from the original)
    call_00622c5c(r5 + 0x3594u, guest::cpu()->r[1]);  // (from the original)
    u32 r1_2 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_00623168((r5 + 0x4000u) + 0x3880u, r1_2);  // (from the original)
}

}  // namespace d_00618fb0
GUEST_EXPORT(0x00618fb0, d_00618fb0::f_00618fb0);

// f_00619044: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00619044 {

struct __attribute__((packed)) Local_00619044_r0_53 {
    u8 unknown_0[0x266];  // (not used here)
    u8 byte_266;
    u8 byte_267;
    u8 byte_268;
    u8 byte_269;
    u8 byte_26a;
    u8 byte_26b;
};
GUEST_OFFSET(Local_00619044_r0_53, byte_266, 0x266);  // (from the original)
GUEST_OFFSET(Local_00619044_r0_53, byte_267, 0x267);  // (from the original)
GUEST_OFFSET(Local_00619044_r0_53, byte_268, 0x268);  // (from the original)
GUEST_OFFSET(Local_00619044_r0_53, byte_269, 0x269);  // (from the original)
GUEST_OFFSET(Local_00619044_r0_53, byte_26a, 0x26a);  // (from the original)
GUEST_OFFSET(Local_00619044_r0_53, byte_26b, 0x26b);  // (from the original)

struct __attribute__((packed)) Local_00619044_r1_28 {
    u8 unknown_0[0x29c];  // (not used here)
    u8 byte_29c;
    u8 byte_29d;
    u8 unknown_29e[0x2];  // (not used here)
    u32 word_2a0;
    u8 unknown_2a4[0x8];  // (not used here)
    u8 byte_2ac;
    u8 byte_2ad;
    u8 byte_2ae;
    u8 byte_2af;
    u8 byte_2b0;
    u8 byte_2b1;
    u8 byte_2b2;
    u8 byte_2b3;
    u8 byte_2b4;
    u8 byte_2b5;
    u8 byte_2b6;
    u8 byte_2b7;
};
GUEST_OFFSET(Local_00619044_r1_28, byte_29c, 0x29c);  // (from the original)
GUEST_OFFSET(Local_00619044_r1_28, byte_29d, 0x29d);  // (from the original)
GUEST_OFFSET(Local_00619044_r1_28, word_2a0, 0x2a0);  // (from the original)
GUEST_OFFSET(Local_00619044_r1_28, byte_2ac, 0x2ac);  // (from the original)
GUEST_OFFSET(Local_00619044_r1_28, byte_2ad, 0x2ad);  // (from the original)
GUEST_OFFSET(Local_00619044_r1_28, byte_2ae, 0x2ae);  // (from the original)
GUEST_OFFSET(Local_00619044_r1_28, byte_2af, 0x2af);  // (from the original)
GUEST_OFFSET(Local_00619044_r1_28, byte_2b0, 0x2b0);  // (from the original)
GUEST_OFFSET(Local_00619044_r1_28, byte_2b1, 0x2b1);  // (from the original)
GUEST_OFFSET(Local_00619044_r1_28, byte_2b2, 0x2b2);  // (from the original)
GUEST_OFFSET(Local_00619044_r1_28, byte_2b3, 0x2b3);  // (from the original)
GUEST_OFFSET(Local_00619044_r1_28, byte_2b4, 0x2b4);  // (from the original)
GUEST_OFFSET(Local_00619044_r1_28, byte_2b5, 0x2b5);  // (from the original)
GUEST_OFFSET(Local_00619044_r1_28, byte_2b6, 0x2b6);  // (from the original)
GUEST_OFFSET(Local_00619044_r1_28, byte_2b7, 0x2b7);  // (from the original)

inline constexpr guest::Function<0x0012bfec, u32(u32, u32, u32, u32)> call_0012bfec;  // (from the original)
inline constexpr guest::Function<0x001ae1e4, u32(u32, u32, u32, u32)> call_001ae1e4;  // (from the original)
inline constexpr guest::Function<0x0029b870, u32(u32, u32, u32, u32)> call_0029b870;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x00617104, u32(u32, u32, u32, u32)> call_00617104;  // (from the original)
inline constexpr guest::Function<0x0061a71c, u32(u32, u32, u32, u32)> call_0061a71c;  // (from the original)
inline constexpr guest::Function<0x0061f4c0, u32(u32, u32, u32, u32)> call_0061f4c0;  // (from the original)
inline constexpr guest::Function<0x00620e68, u32(u32, u32, u32, u32)> call_00620e68;  // (from the original)
inline constexpr guest::Function<0x006220f8, u32(u32, u32, u32, u32)> call_006220f8;  // (from the original)
inline constexpr guest::Function<0x00622d04, u32(u32, u32, u32, u32)> call_00622d04;  // (from the original)
inline constexpr guest::Function<0x00623184, u32(u32, u32, u32, u32)> call_00623184;  // (from the original)
inline constexpr guest::Function<0x00623bb4, u32(u32, u32, u32, u32)> call_00623bb4;  // (from the original)
inline constexpr guest::Function<0x00623e3c, u32(u32, u32, u32, u32)> call_00623e3c;  // (from the original)
inline constexpr guest::Function<0x00624920, u32(u32, u32, u32, u32)> call_00624920;  // (from the original)
inline constexpr guest::Function<0x00624c90, u32(u32, u32, u32, u32)> call_00624c90;  // (from the original)
inline constexpr guest::Function<0x00625060, u32(u32, u32, u32, u32)> call_00625060;  // (from the original)
inline constexpr guest::Function<0x00625664, u32(u32, u32, u32, u32)> call_00625664;  // (from the original)
inline constexpr guest::Function<0x00625e2c, u32(u32, u32, u32, u32)> call_00625e2c;  // (from the original)
inline constexpr guest::Function<0x00625f58, u32(u32, u32, u32, u32)> call_00625f58;  // (from the original)
inline constexpr guest::Function<0x006260f0, u32(u32, u32, u32, u32)> call_006260f0;  // (from the original)
inline constexpr guest::Function<0x006264e0, u32(u32, u32, u32, u32)> call_006264e0;  // (from the original)
inline constexpr guest::Function<0x00626644, u32(u32, u32, u32, u32)> call_00626644;  // (from the original)
inline constexpr guest::Function<0x00628518, u32(u32, u32, u32, u32)> call_00628518;  // (from the original)
inline constexpr guest::Function<0x006297f0, u32(u32, u32, u32, u32)> call_006297f0;  // (from the original)
inline constexpr guest::Function<0x006298a8, u32(u32, u32, u32, u32)> call_006298a8;  // (from the original)
inline constexpr guest::Function<0x0062ac50, u32(u32, u32, u32, u32)> call_0062ac50;  // (from the original)
inline constexpr guest::Function<0x0062b014, u32(u32, u32, u32, u32)> call_0062b014;  // (from the original)
inline constexpr guest::Function<0x0062c868, u32(u32, u32, u32, u32)> call_0062c868;  // (from the original)

u32 f_00619044(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_2 = call_00628518(r0 + 0x10u, r1, r2, r3);  // (from the original)
    u32 r0_4 = call_00625060(r0_2 + 0x48u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_6 = call_00623e3c(r0_4 + 0x20u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_8 = call_006298a8(r0_6 + 0x2cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_10 = call_0062ac50(r0_8 + 0xcu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_12 = call_006220f8(r0_10 + 0x110u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_14 = call_0061a71c(r0_12 + 0x24u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_16 = call_00620e68(r0_14 + 0x30u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_18 = call_00624920(r0_16 + 0x18u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_20 = call_00623bb4(r0_18 + 0x10u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_22 = call_00617104(r0_20 + 0x2540u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_24 = call_00625664(r0_22 + 8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_26 = call_0061f4c0(r0_24 + 0x1cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_28 = call_0062c868(r0_26 + 0x14cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_30 = call_0062b014(r0_28 + 0x3f0u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_32 = call_00622d04(r0_30 + 0x8b8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_34 = call_00625e2c(r0_32 + 0x42acu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_36 = call_00625f58(r0_34 + 0xcu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_38 = call_006264e0(r0_36 + 0xcu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_40 = call_006260f0(r0_38 + 0xcu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_42 = call_00626644(r0_40 + 8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_44 = call_006297f0(r0_42 + 8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_46 = call_00623184(r0_44 + 0xcu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_48 = call_001ae1e4(r0_46 + 0x14u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_50 = call_00301d0c(r0_48 + 0x2520u, 0x1ae1e4u, 0x2520u, 4u);  // (from the original)
    u32 r0_52 = call_0029b870(r0_50 + 0x9480u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    gptr<Local_00619044_r0_53> r0_53 = gptr<Local_00619044_r0_53>(r0_52 - 0x234u);  // (from the original)
    r0_53->byte_266 = 6;
    r0_53->byte_267 = 6;
    r0_53->byte_268 = 4;
    r0_53->byte_269 = 4;
    r0_53->byte_26a = 0;
    u32 r1_26 = (r0_52 - 0x13000u) - 0x234u;  // (from the original)
    r0_53->byte_26b = 0;
    u32 r0_55 = call_00624c90(r1_26 + 0x1326cu, r1_26, 6u, 4u);  // (from the original)
    u32 r0_57 = call_00624c90(r0_55 - 0x1326cu + 0x1326eu, 0x1326eu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_58 = r0_57 + 0xfffecd92u + 0x13270u;  // (from the original)
    u32 r0_59 = call_00624c90(r0_58, 0xfffecd92u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_61 = call_00624c90(r0_59 - 0x13270u + 0x13272u, 0x13272u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_62 = r0_61 + 0xfffecd8eu + 0x13274u;  // (from the original)
    u32 r0_63 = call_00624c90(r0_62, 0xfffecd8eu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_65 = call_00624c90(r0_63 - 0x13274u + 0x13276u, 0x13276u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_66 = r0_65 + 0xfffecd8au + 0x13278u;  // (from the original)
    u32 r0_67 = call_00624c90(r0_66, 0xfffecd8au, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_69 = call_00624c90(r0_67 - 0x13278u + 0x1327au, 0x1327au, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_70 = r0_69 + 0xfffecd86u + 0x1327cu;  // (from the original)
    u32 r0_71 = call_00624c90(r0_70, 0xfffecd86u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_73 = call_0012bfec(r0_71 + 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_74 = r0_73 - 0x13280u;  // (from the original)
    gptr<Local_00619044_r1_28> r1_28 = gptr<Local_00619044_r1_28>(r0_74 + 0x13000u);  // (from the original)
    r1_28->byte_29c = 8;
    r1_28->byte_29d = 0;
    r1_28->word_2a0 = 0;
    r1_28->byte_2ac = 0;
    r1_28->byte_2ad = 0;
    r1_28->byte_2ae = 0;
    r1_28->byte_2af = 0;
    r1_28->byte_2b0 = 0;
    r1_28->byte_2b1 = 0;
    r1_28->byte_2b2 = 0;
    r1_28->byte_2b3 = 0;
    r1_28->byte_2b4 = 0;
    r1_28->byte_2b5 = 0;
    r1_28->byte_2b6 = 0;
    r1_28->byte_2b7 = 0;
    return r0_74;
}

}  // namespace d_00619044
GUEST_EXPORT_FRAMED(0x00619044, d_00619044::f_00619044, 0x4010);  // pushes {r4, lr} first, as the original

// f_00619298: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00619298 {

inline constexpr guest::Function<0x00100b80, u32(u32, u32, u32, u32)> call_00100b80;  // (from the original)
inline constexpr guest::Function<0x00137e8c, u32(u32, u32, u32, u32)> call_00137e8c;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x0061f5e0, u32(u32, u32, u32, u32)> call_0061f5e0;  // (from the original)
inline constexpr guest::Function<0x00622158, u32(u32, u32, u32, u32)> call_00622158;  // (from the original)
inline constexpr guest::Function<0x00623c28, u32(u32, u32, u32, u32)> call_00623c28;  // (from the original)
inline constexpr guest::Function<0x0062ad20, u32(u32, u32)> call_0062ad20;  // (from the original)
inline constexpr guest::Function<0x0062b064, u32(u32, u32, u32, u32)> call_0062b064;  // (from the original)
inline constexpr guest::Function<0x0062c8cc, u32(u32, u32, u32, u32)> call_0062c8cc;  // (from the original)

void f_00619298(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_2 = call_00137e8c(r0 + 0x13280u, r1, r2, r3);  // (from the original)
    u32 r0_3 = r0_2 - 0x4cu;  // (from the original)
    call_002f76ac(r0_3 - 0x9480u, 0x100b80u, 0x2520u, 4u);  // (from the original)
    u32 r0_5 = (r0_3 - 0x13234u) + 0x7894u;  // (from the original)
    u32 r0_6 = call_00100b80(r0_5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r4_2 = r0_6 - 0xaa0u;  // (from the original)
    call_002f76ac(r4_2, 0x62573cu, 4u, 0x20u);  // (from the original)
    u32 r0_8 = call_0062b064(r4_2 - 0x4118u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_10 = call_0062c8cc(r0_8 - 0x3f0u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_12 = call_0061f5e0(r0_10 - 0x14cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_14 = call_00623c28(r0_12 - 0x2564u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_16 = call_00622158(r0_14 - 0x7cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_0062ad20(r0_16 - 0x110u, guest::cpu()->r[1]);  // (from the original)
    return;
}

}  // namespace d_00619298
GUEST_EXPORT_FRAMED(0x00619298, d_00619298::f_00619298, 0x4010);  // pushes {r4, lr} first, as the original

// f_0061a41c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061a41c {

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)
inline constexpr guest::Function<0x005ce6dc, u32(u32, u32, u32, u32)> call_005ce6dc;  // (from the original)
inline constexpr guest::Function<0x0060b0b8, u32(u32, u32)> call_0060b0b8;  // (from the original)
inline constexpr guest::Function<0x00624b24, u32(u32, u32, u32)> call_00624b24;  // (from the original)
inline constexpr guest::Function<0x00627f74, u32(u32, u32, u32)> call_00627f74;  // (from the original)
inline constexpr guest::Function<0x0062801c, u32(u32, u32, u32)> call_0062801c;  // (from the original)
inline constexpr guest::Function<0x0075dfe8, u32(u32, u32, u32)> call_0075dfe8;  // (from the original)

void f_0061a41c(u32 r0, u32 r1, u32 r2) {
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r5_1 = 0;
    u32 r0_5 = 0;
    u32 r4 = r0;
    u32 r6 = 0u;
    u32 r0_1 = *gptr<u8>(*global_0095362c + 0x54u);  // (from the original)
    if (r0_1 != 0) {
        goto L_61a498;
    }
    r0_2 = call_005ce6dc(r0_1, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    if (r0_2 != 0) {
        goto L_61a498;
    }
    r0_3 = *global_0095362c;
    r1 = *gptr<u8>(0x132b4u + r0_3);  // (from the original)
    if (r1 != 0) {
        goto L_61a498;
    }
    r1 = *gptr<u8>(r4 + 0x27u);  // (from the original)
    if (r1 == 0) {
        goto L_61a498;
    }
    r0_4 = call_0075dfe8(r0_3, r1, r2_1);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    if (r0_4 == 0) {
        goto L_61a4b0;
    }
    r5_1 = *global_0095362c + 0x10u;  // (from the original)
    call_00627f74(r5_1, r1_1, r2_2);
    call_0062801c(r5_1, 0x1du, 0u);  // (from the original)
    r1 = guest::cpu()->r[1];
L_61a494:;
    *gptr<u8>(r4 + 0x27u) = u8(r6);  // (from the original)
L_61a498:;
    r0_5 = *gptr<u8>(r4 + 0x2au);  // (from the original)
    if (r0_5 != 0) {
        call_0060b0b8(r0_5, r1);
        r1 = guest::cpu()->r[1];
        *gptr<u8>(r4 + 0x2au) = u8(r6);  // (from the original)
    }
    guest::cpu()->r[1] = r1;
    return;
L_61a4b0:;
    call_00624b24(r4 + 0x24u, 0u, r2_2);  // (from the original)
    r1 = guest::cpu()->r[1];
    *gptr<u8>(*global_0095362c + 0x1b8u) = u8(r6);  // (from the original)
    guest::preempt();
    goto L_61a494;
}

}  // namespace d_0061a41c
GUEST_EXPORT_FRAMED(0x0061a41c, d_0061a41c::f_0061a41c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0061a684: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061a684 {


u32 f_0061a684(u32 r0, u32 r1, u32 r2) {
    if (r1 < 4u) {
        r0 += r1;
        *gptr<u8>(r0 + 8u) = u8(r2);
    }
    return r0;
}

}  // namespace d_0061a684
GUEST_EXPORT(0x0061a684, d_0061a684::f_0061a684);

// f_0061a6a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061a6a4 {

struct __attribute__((packed)) Object_0061a6a4_0 {
    u8 byte_0;
    u8 byte_1;
    u32 word_2;
    u8 unknown_6[0x6];  // (not used here)
    u8 byte_c;
    u8 byte_d;
    u32 word_e;
    u8 byte_12;
    u8 unknown_13[0x1];  // (not used here)
    u32 word_14;
    u8 byte_18;
    u8 byte_19;
    u8 unknown_1a[0x2];  // (not used here)
    u32 word_1c;
    u32 word_20;
    u8 unknown_24[0x2];  // (not used here)
    u8 byte_26;
    u8 byte_27;
    u8 byte_28;
    u8 unknown_29[0x1];  // (not used here)
    u8 byte_2a;
    u8 byte_2b;
    u8 byte_2c;
};
GUEST_OFFSET(Object_0061a6a4_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0061a6a4_0, byte_1, 0x1);  // (from the original)
GUEST_OFFSET(Object_0061a6a4_0, word_2, 0x2);  // (from the original)
GUEST_OFFSET(Object_0061a6a4_0, byte_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0061a6a4_0, byte_d, 0xd);  // (from the original)
GUEST_OFFSET(Object_0061a6a4_0, word_e, 0xe);  // (from the original)
GUEST_OFFSET(Object_0061a6a4_0, byte_12, 0x12);  // (from the original)
GUEST_OFFSET(Object_0061a6a4_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0061a6a4_0, byte_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0061a6a4_0, byte_19, 0x19);  // (from the original)
GUEST_OFFSET(Object_0061a6a4_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_0061a6a4_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_0061a6a4_0, byte_26, 0x26);  // (from the original)
GUEST_OFFSET(Object_0061a6a4_0, byte_27, 0x27);  // (from the original)
GUEST_OFFSET(Object_0061a6a4_0, byte_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_0061a6a4_0, byte_2a, 0x2a);  // (from the original)
GUEST_OFFSET(Object_0061a6a4_0, byte_2b, 0x2b);  // (from the original)
GUEST_OFFSET(Object_0061a6a4_0, byte_2c, 0x2c);  // (from the original)

inline constexpr guest::Function<0x00624c68, u32(u32)> call_00624c68;  // (from the original)

void f_0061a6a4(gptr<Object_0061a6a4_0> arg0) {
    u32 r0 = arg0.addr();
    arg0->word_2 = 0;
    arg0->word_e = 0;
    arg0->byte_c = 0;
    arg0->byte_d = 8;
    arg0->byte_12 = 0;
    arg0->word_14 = 0;
    arg0->byte_18 = 8;
    arg0->byte_19 = 4;
    call_00624c68(r0 + 6u);
    call_00624c68(r0 + 6u);
    arg0->byte_0 = 8;
    arg0->byte_1 = 4;
    arg0->byte_26 = 0;
    arg0->word_1c = 0;
    arg0->word_20 = 0;
    call_00624c68(r0 + 0x24u);  // (from the original)
    arg0->byte_27 = 0;
    arg0->byte_28 = 0;
    arg0->byte_2a = 0;
    arg0->byte_2b = 0;
    arg0->byte_2c = 0;
    return;
}

}  // namespace d_0061a6a4
GUEST_EXPORT_FRAMED(0x0061a6a4, d_0061a6a4::f_0061a6a4, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0061a71c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061a71c {

struct __attribute__((packed)) Object_0061a71c_0 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(Object_0061a71c_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0061a71c_0, byte_1, 0x1);  // (from the original)

struct __attribute__((packed)) Local_0061a71c_r0_6 {
    u8 unknown_0[0x26];  // (not used here)
    u8 byte_26;
    u8 byte_27;
    u8 byte_28;
    u8 byte_29;
    u8 byte_2a;
    u8 byte_2b;
    u8 byte_2c;
};
GUEST_OFFSET(Local_0061a71c_r0_6, byte_26, 0x26);  // (from the original)
GUEST_OFFSET(Local_0061a71c_r0_6, byte_27, 0x27);  // (from the original)
GUEST_OFFSET(Local_0061a71c_r0_6, byte_28, 0x28);  // (from the original)
GUEST_OFFSET(Local_0061a71c_r0_6, byte_29, 0x29);  // (from the original)
GUEST_OFFSET(Local_0061a71c_r0_6, byte_2a, 0x2a);  // (from the original)
GUEST_OFFSET(Local_0061a71c_r0_6, byte_2b, 0x2b);  // (from the original)
GUEST_OFFSET(Local_0061a71c_r0_6, byte_2c, 0x2c);  // (from the original)

inline constexpr guest::Function<0x00624c90, u32(u32)> call_00624c90;  // (from the original)

u32 f_0061a71c(gptr<Object_0061a71c_0> arg0) {
    u32 r0 = arg0.addr();
    arg0->byte_0 = 8;
    arg0->byte_1 = 4;
    u32 r0_2 = call_00624c90(r0 + 6u);
    u32 r0_3 = r0_2 - 6u;
    *gptr<u8>(r0_3 + 0xcu) = 0;  // (from the original)
    *gptr<u8>(r0_3 + 0x12u) = 0;  // (from the original)
    *gptr<u32>(r0_3 + 0x14u) = 0;  // (from the original)
    *gptr<u8>(r0_3 + 0x18u) = 8;  // (from the original)
    *gptr<u8>(r0_3 + 0x19u) = 4;  // (from the original)
    *gptr<u32>(r0_3 + 0x1cu) = 0;  // (from the original)
    u32 ea_7 = r0_3 + 0x20u;  // (from the original)
    *gptr<u32>(ea_7) = 0;
    u32 r0_5 = call_00624c90(ea_7 + 4u);
    gptr<Local_0061a71c_r0_6> r0_6 = gptr<Local_0061a71c_r0_6>(r0_5 - 0x24u);  // (from the original)
    r0_6->byte_26 = 0;
    r0_6->byte_27 = 0;
    r0_6->byte_28 = 0;
    r0_6->byte_29 = 0;
    r0_6->byte_2a = 0;
    r0_6->byte_2b = 0;
    r0_6->byte_2c = 0;
    return r0_6.addr();
}

}  // namespace d_0061a71c
GUEST_EXPORT_FRAMED(0x0061a71c, d_0061a71c::f_0061a71c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0061a7a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061a7a0 {

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)
inline constexpr guest::Function<0x0075de74, u32(u32, u32)> call_0075de74;  // (from the original)

u32 f_0061a7a0() {
    return call_0075de74(*global_0095362c, guest::cpu()->r[1]);
}

}  // namespace d_0061a7a0
GUEST_EXPORT(0x0061a7a0, d_0061a7a0::f_0061a7a0);

// f_0061a7b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061a7b0 {

struct __attribute__((packed)) Local_0061a7b0_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0061a7b0_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0061a7b0_ea_1, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x006256d0, u32(u32)> call_006256d0;  // (from the original)

u32 f_0061a7b0(u32 r0) {
    call_006256d0(r0);
    u32 r0_1 = ~2u;
    u32 r1_1 = ~0u;
    gptr<Local_0061a7b0_ea_1> ea_1 = gptr<Local_0061a7b0_ea_1>(r0 + 8u);
    ea_1->word_0 = r0_1;
    ea_1->word_4 = r1_1;
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0061a7b0
GUEST_EXPORT_FRAMED(0x0061a7b0, d_0061a7b0::f_0061a7b0, 0x4010);  // pushes {r4, lr} first, as the original

// f_0061a7cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061a7cc {

struct __attribute__((packed)) Object_0061a7cc_0 {
    u32 word_0;
    u16 half_4;
    u16 half_6;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_0061a7cc_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0061a7cc_0, half_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0061a7cc_0, half_6, 0x6);  // (from the original)
GUEST_OFFSET(Object_0061a7cc_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0061a7cc_0, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Object_0061a7cc_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_0061a7cc_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0061a7cc_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Object_0061a7cc_2 {
    u32 word_0;
    u16 half_4;
    u16 half_6;
};
GUEST_OFFSET(Object_0061a7cc_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0061a7cc_2, half_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0061a7cc_2, half_6, 0x6);  // (from the original)


void f_0061a7cc(gptr<Object_0061a7cc_0> arg0, gptr<Object_0061a7cc_1> arg1, gptr<Object_0061a7cc_2> arg2) {
    arg0->word_0 = arg2->word_0;
    arg0->half_4 = u16(u32(arg2->half_4));
    arg0->half_6 = u16(u32(arg2->half_6));
    u32 r1_1 = arg1->word_0;
    u32 r2_1 = arg1->word_4;
    arg0->word_8 = r1_1;
    arg0->word_c = r2_1;
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_0061a7cc
GUEST_EXPORT(0x0061a7cc, d_0061a7cc::f_0061a7cc);

// f_0061a810: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061a810 {

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)
inline constexpr guest::Function<0x00622fa0, u32(u32, u32)> call_00622fa0;  // (from the original)
inline constexpr guest::Function<0x00627d44, u32(u32, u32, u32, u32)> call_00627d44;  // (from the original)
inline constexpr guest::Function<0x00627f74, u32(u32, u32, u32, u32)> call_00627f74;  // (from the original)
inline constexpr guest::Function<0x0062801c, u32(u32, u32, u32, u32)> call_0062801c;  // (from the original)
inline constexpr guest::Function<0x0075dfe8, u32(u32, u32, u32, u32)> call_0075dfe8;  // (from the original)

void f_0061a810(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xffffffe0u) = r3;  // (from the original)
    r13 -= 0x20;  // (from the original)
    u32 r0_1 = *global_0095362c;
    guest::cpu()->r[13] = r13;
    u32 r0_2 = call_0075dfe8(r0_1, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    u32 r3_1 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        r13 += 0x20;  // (from the original)
        u32 r0_4 = *global_0095362c + 0x7880u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_00622fa0(r0_4, r0);
        return;
    }
    u32 r8_1 = r13;
    *gptr<u16>(r13) = u16(r0 << 8);
    if (0u == 0) {
        goto L_61a870;
    }
    r13 += 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return;
L_61a870:;
    u32 r7_1 = *global_0095362c + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00627f74(r7_1, r1, r2_1, r3_1);
    u32 r3_2 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_00627d44(r7_1, r8_1, 2u, r3_2);
    u32 r3_3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_0062801c(r7_1, 0x30u, 0u, r3_3);  // (from the original)
    r1 = guest::cpu()->r[1];
    r13 += 0x20;  // (from the original)
    guest::cpu()->r[13] = r13;
    return;
}

}  // namespace d_0061a810
GUEST_EXPORT(0x0061a810, d_0061a810::f_0061a810);

// f_0061d9bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061d9bc {

inline guest::global<u32, 0x0095c6d0> global_0095c6d0;  // (from the original)
inline constexpr guest::Function<0x006a69c0, u32(u32, u32, u32, u32)> call_006a69c0;  // (from the original)
inline constexpr guest::Function<0x006c3e4c, u32(u32, u32, u32, u32)> call_006c3e4c;  // (from the original)

void f_0061d9bc() {
    guest::cpu()->r[13] -= 8u;
    u32 r4_1 = *global_0095c6d0;
    call_006c3e4c(r4_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    call_006a69c0(r4_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
}

}  // namespace d_0061d9bc
GUEST_EXPORT(0x0061d9bc, d_0061d9bc::f_0061d9bc);

// f_0061d9e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061d9e0 {

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)
inline constexpr guest::Function<0x005ce6dc, u32(u32, u32, u32, u32)> call_005ce6dc;  // (from the original)
inline constexpr guest::Function<0x00623894, u32(u32, u32)> call_00623894;  // (from the original)
inline constexpr guest::Function<0x0062390c, u32(u32, u32)> call_0062390c;  // (from the original)
inline constexpr guest::Function<0x0062468c, u32(u32, u32)> call_0062468c;  // (from the original)

u32 f_0061d9e0(u32 r0, u32 r1) {
    u32 r0_1 = *gptr<u8>(*global_0095362c + 0x132b4u);  // (from the original)
    if (r0_1 == 0) {
        u32 r0_2 = call_005ce6dc(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0_2 == 0) {
            goto L_61da18;
        }
    }
    guest::cpu()->r[1] = r1;
    return 1u;
L_61da18:;
    u32 r0_3 = *gptr<u8>(r0);
    u32 r4_1 = 1u;
    if (r0_3 != 0x2bu) {  // (from the original)
        if (r0_3 != 0x37u) {  // (from the original)
            guest::cpu()->r[1] = r1;
            return r4_1;
        }
    } else {
        u32 r1_1 = *gptr<u8>(r0 + 3u);
        u32 r0_5 = call_00623894(*global_0095362c + 0x23cu, r1_1);  // (from the original)
        u32 r1_2 = *gptr<u8>(r0 + 3u);
        if (r0_5 == 0) {
            r4_1 = 0u;
        }
        u32 r0_7 = call_0062390c(*global_0095362c + 0x23cu, r1_2);  // (from the original)
        r1 = guest::cpu()->r[1];
        if (r0_7 != 0) {
            return r4_1;
        }
        return 0u;
    }
    u32 r0_8 = call_0062468c(r0_3, r1);
    r1 = guest::cpu()->r[1];
    if (r0_8 != 0) {
        return r4_1;
    }
    return 0u;
}

}  // namespace d_0061d9e0
GUEST_EXPORT_FRAMED(0x0061d9e0, d_0061d9e0::f_0061d9e0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0061dad0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061dad0 {

struct __attribute__((packed)) Object_0061dad0_0 {
    u8 unknown_0[0x4c];  // (not used here)
    u32 word_4c;
};
GUEST_OFFSET(Object_0061dad0_0, word_4c, 0x4c);  // (from the original)

inline guest::global<u32, 0x0087bd1c> global_0087bd1c;  // (from the original)

void f_0061dad0(gptr<Object_0061dad0_0> arg0) {
    u32 r1_1 = *global_0087bd1c;
    arg0->word_4c = r1_1;
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_0061dad0
GUEST_EXPORT(0x0061dad0, d_0061dad0::f_0061dad0);

// f_0061dae4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061dae4 {

struct __attribute__((packed)) Local_0061dae4_r0_8 {
    u8 unknown_0[0x3c];  // (not used here)
    u8 byte_3c;
    u8 unknown_3d[0x17];  // (not used here)
    u8 byte_54;
    u8 unknown_55[0x190];  // (not used here)
    u8 byte_1e5;
};
GUEST_OFFSET(Local_0061dae4_r0_8, byte_3c, 0x3c);  // (from the original)
GUEST_OFFSET(Local_0061dae4_r0_8, byte_54, 0x54);  // (from the original)
GUEST_OFFSET(Local_0061dae4_r0_8, byte_1e5, 0x1e5);  // (from the original)

struct __attribute__((packed)) Local_0061dae4_r5_1 {
    u8 unknown_0[0x46];  // (not used here)
    u8 byte_46;
};
GUEST_OFFSET(Local_0061dae4_r5_1, byte_46, 0x46);  // (from the original)

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)
inline constexpr guest::Function<0x0051d7f0, u32(u32, u32)> call_0051d7f0;  // (from the original)
inline constexpr guest::Function<0x005ce6dc, u32(u32, u32, u32, u32)> call_005ce6dc;  // (from the original)
inline constexpr guest::Function<0x0060b0b8, u32(u32)> call_0060b0b8;  // (from the original)
inline constexpr guest::Function<0x00618164, u32(u32, u32)> call_00618164;  // (from the original)
inline constexpr guest::Function<0x00618fb0, u32(u32, u32)> call_00618fb0;  // (from the original)
inline constexpr guest::Function<0x0061f3f8, u32(u32)> call_0061f3f8;  // (from the original)
inline constexpr guest::Function<0x006238d0, u32(u32, u32)> call_006238d0;  // (from the original)
inline constexpr guest::Function<0x00623948, u32(u32, u32)> call_00623948;  // (from the original)

void f_0061dae4(u32 r0, u32 r1) {
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 res_1 = 0;
    u32 nf_1 = 0;
    u32 zf_1 = 0;
    u32 vf_1 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r0_5 = 0;
    u32 r1_4 = 0;
    u32 r0_6 = 0;
    u32 r6_1 = 0;
    u32 r0_7 = 0;
    gptr<Local_0061dae4_r0_8> r0_8 = gptr<Local_0061dae4_r0_8>(0u);
    u32 r0_1 = call_005ce6dc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    gptr<Local_0061dae4_r5_1> r5_1 = gptr<Local_0061dae4_r5_1>(r0 + 0x100u);  // (from the original)
    if (r0_1 == 0) {
        r0_2 = *global_0095362c;
        if (u32(*gptr<u8>(0x132b4u + r0_2)) == 0) {  // (from the original)
            goto L_61db28;
        }
    }
    r0_3 = r5_1->byte_46;
    if (r0_3 == 0) {
        return;
    }
    goto L_61dc14;
L_61db28:;
    r1_1 = *gptr<u8>(r0);
    res_1 = r1_1 - 0x43u;  // (from the original)
    nf_1 = res_1 >> 0x1f;  // (from the original)
    zf_1 = res_1 == 0;
    vf_1 = ((r1_1 ^ 0x43u) & (r1_1 ^ res_1)) >> 0x1f;  // (from the original)
    if (zf_1) {
        goto L_61dbe8;
    }
    if (!!zf_1 || nf_1 != vf_1) {
        if (r1_1 == 0x2bu) {  // (from the original)
            goto L_61db6c;
        }
        if (r1_1 == 0x32u) {  // (from the original)
            goto L_61db90;
        }
        if (r1_1 == 0x37u) {  // (from the original)
            call_00618fb0(r0_2, r1_1);
        }
        goto L_61dc08;
    }
    if (r1_1 != 0x55u && r1_1 != 0x5eu) {  // (from the original)
        goto L_61dc08;
    }
    goto L_61dbe8;
L_61db6c:;
    r1_2 = *gptr<u8>(r0 + 3u);
    r0_4 = r0_2 + 0x23cu;  // (from the original)
    call_00623948(r0_4, r1_2);
    r1_3 = guest::cpu()->r[1];
    r0_5 = *global_0095362c;
    call_00618fb0(r0_5, r1_3);
    goto L_61dc08;
L_61db90:;
    r1_4 = *gptr<u8>(r0 + 3u);
    r0_6 = r0_2 + 0x23cu;  // (from the original)
    call_006238d0(r0_6, r1_4);
    r6_1 = *gptr<u8>(r0 + 3u);
    if (r6_1 >= 4u) {
        goto L_61dc08;
    }
    r0_7 = *global_0095362c;
    call_00618164(r0_7, r6_1);
    r0_8 = gptr<Local_0061dae4_r0_8>(*global_0095362c);
    r0_8->byte_1e5 = 4;
    r0_8->byte_3c = 4;
    r0_8->byte_54 = 0;
    call_0051d7f0(r6_1, 4u);
    call_0061f3f8(r0);
    goto L_61dc08;
L_61dbe8:;
    call_0061f3f8(r0);
    *gptr<u8>(r0 + 0x13eu) = 0;  // (from the original)
    *gptr<u8>(r0 + 0x13fu) = 0;  // (from the original)
    *gptr<u8>(*global_0095362c + 0x132b6u) = 0;  // (from the original)
    *gptr<u8>(r0) = 0;
L_61dc08:;
    r0_3 = r5_1->byte_46;
    if (r0_3 == 0) {
        return;
    }
L_61dc14:;
    call_0060b0b8(r0_3);
    *gptr<u8>(r0 + 0x146u) = 0;  // (from the original)
    *gptr<u32>(r0 + 0x4cu) = 0;  // (from the original)
    return;
}

}  // namespace d_0061dae4
GUEST_EXPORT_FRAMED(0x0061dae4, d_0061dae4::f_0061dae4, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0061dc30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061dc30 {

struct __attribute__((packed)) Local_0061dc30_ea_10 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0061dc30_ea_10, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0061dc30_ea_10, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_0061dc30_ea_9 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0061dc30_ea_9, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0061dc30_ea_9, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x00881b48> global_00881b48;  // (from the original)
inline guest::global<u32, 0x00881b84> global_00881b84;  // (from the original)
inline guest::global<u32, 0x0095c6d0> global_0095c6d0;  // (from the original)
inline constexpr guest::Function<0x00300904, u32(u32)> call_00300904;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> call_00305f44;  // (from the original)
inline constexpr guest::Function<0x00308340, u32(u32)> call_00308340;  // (from the original)
inline constexpr guest::Function<0x00565cc0, u32(u32, u32, u32, u32)> call_00565cc0;  // (from the original)
inline constexpr guest::Function<0x005b5d38, u32(u32, u32, u32, u32)> call_005b5d38;  // (from the original)
inline constexpr guest::Function<0x006c39c4, u32(u32)> call_006c39c4;  // (from the original)
inline constexpr guest::Function<0x006c3a58, u32(u32, u32, u32, u32)> call_006c3a58;  // (from the original)
inline constexpr guest::Function<0x006c3c00, u32(u32, u32, u32, u32)> call_006c3c00;  // (from the original)
inline constexpr guest::Function<0x006c4280, u32(u32)> call_006c4280;  // (from the original)

void f_0061dc30(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2, float S3) {
    guest::StackFrame frame(0x78);  // the original's stack frame
    u32 res_1 = 0;
    call_00305f44(r0, r1, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    u32 r3_1 = guest::cpu()->r[3];
    call_006c3a58(frame.at(0x68).addr(), r1_1, r2_1, r3_1);  // (from the original)
    call_00301d0c(frame.at(0x30).addr(), 0x3040fcu, 0xcu, 4u);  // (from the original)
    call_00301d0c(frame.at(0x60).addr(), 0x567470u, 2u, 4u);  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    u32 r4 = frame.at(0x30).addr();  // (from the original)
    u32 r6 = frame.at(0x60).addr();  // (from the original)
    u32 r5 = 0u;
    do {
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        guest::cpu()->s[3] = S3;
        u32 r0_4 = call_006c3c00(r4, r5 & 0xffu, r2, r3);  // (from the original)
        u32 r1_3 = guest::cpu()->r[1];
        u32 r2_2 = guest::cpu()->r[2];
        u32 r3_2 = guest::cpu()->r[3];
        float S3_4 = std::bit_cast<float>(*gptr<u32>(r4 + 8u));
        float S2_4 = std::bit_cast<float>(*gptr<u32>(r4));
        float S1_4 = std::bit_cast<float>(*frame.at<u32>(0x70)) - S3_4;  // (from the original)
        float S0_4 = std::bit_cast<float>(*frame.at<u32>(0x68)) - S2_4;  // (from the original)
        guest::cpu()->s[0] = S0_4;
        guest::cpu()->s[1] = S1_4;
        guest::cpu()->s[2] = S2_4;
        guest::cpu()->s[3] = S3_4;
        u32 r0_5 = call_00565cc0(r0_4, r1_3, r2_2, r3_2);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        S2 = guest::cpu()->s[2];
        S3 = guest::cpu()->s[3];
        r5 += 1u;
        res_1 = r5 - 4u;
        r4 += 0xcu;  // (from the original)
        *gptr<u16>(r6) = u16(r0_5);
        r6 += 2u;
        guest::preempt();
    } while (res_1 >> 0x1f != ((r5 ^ 4u) & (r5 ^ res_1)) >> 0x1f);  // (from the original)
    u32 r0_6 = s32(s8(*gptr<u8>(*global_0095c6d0 + 0x1cu)));  // (from the original)
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    u32 r0_7 = call_006c4280(r0_6);
    u32 r0_8 = call_006c39c4(r0_7);
    u32 r0_9 = call_00300904(r0_8);
    u32 r0_10 = call_00308340(r0_9);
    *frame.at<u32>(0x28) = 1;  // (from the original)
    *frame.at<u32>(0x2c) = 1;  // (from the original)
    *frame.at<u32>(0x24) = 0;  // (from the original)
    *frame.at<u32>(0x18) = frame.at(0x54).addr();  // (from the original)
    *frame.at<u32>(0x20) = r0_9 ^ 1u;  // (from the original)
    *frame.at<u32>(0x1c) = frame.at(0x66).addr();  // (from the original)
    *frame.at<u32>(0x14) = frame.at(0x64).addr();  // (from the original)
    *frame.at<u32>(0) = frame.at(0x30).addr();  // (from the original)
    gptr<Local_0061dc30_ea_9> ea_9 = gptr<Local_0061dc30_ea_9>(frame.at(4).addr());
    ea_9->word_0 = frame.at(0x60).addr();  // (from the original)
    ea_9->word_4 = frame.at(0x3c).addr();  // (from the original)
    gptr<Local_0061dc30_ea_10> ea_10 = gptr<Local_0061dc30_ea_10>(frame.at(0xc).addr());  // (from the original)
    ea_10->word_0 = frame.at(0x62).addr();  // (from the original)
    ea_10->word_4 = frame.at(0x48).addr();  // (from the original)
    u32 r3_3 = *global_00881b84;
    u32 r2_3 = *global_00881b48;
    call_005b5d38(r0_10, r0_8, r2_3, r3_3);
    return;
}

}  // namespace d_0061dc30
GUEST_EXPORT_FRAMED(0x0061dc30, d_0061dc30::f_0061dc30, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0061de7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061de7c {

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)
inline constexpr guest::Function<0x00305f2c, u32(u32, u32, u32, u32)> call_00305f2c;  // (from the original)
inline constexpr guest::Function<0x0061e11c, u32(u32, u32, u32)> call_0061e11c;  // (from the original)
inline constexpr guest::Function<0x00627f74, u32(u32, u32, u32)> call_00627f74;  // (from the original)
inline constexpr guest::Function<0x0062801c, u32(u32, u32, u32)> call_0062801c;  // (from the original)
inline constexpr guest::Function<0x0075dfe8, u32(u32, u32, u32)> call_0075dfe8;  // (from the original)

u32 f_0061de7c(u32 r0, u32 r1, u32 r2) {
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r4_1 = 0;
    u32 r0_1 = call_00305f2c(r0, r1, r2, guest::cpu()->r[3]);
    u32 r2_1 = guest::cpu()->r[2];
    if (r0_1 == 2u) {
        goto L_61ded4;
    }
    r0_2 = *global_0095362c;
    r0_3 = call_0075dfe8(r0_2, guest::cpu()->r[1], r2_1);
    r1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    if (r0_3 == 0) {
        *gptr<u8>(r0) = 6;
        return 1u;
    }
    r4_1 = *global_0095362c + 0x10u;  // (from the original)
    call_00627f74(r4_1, r1, r2_2);
    call_0062801c(r4_1, 0x6au, 0u);  // (from the original)
    r1 = guest::cpu()->r[1];
    return 1u;
L_61ded4:;
    call_0061e11c(r0, 0u, r2_1);
    r1 = guest::cpu()->r[1];
    return 1u;
}

}  // namespace d_0061de7c
GUEST_EXPORT_FRAMED(0x0061de7c, d_0061de7c::f_0061de7c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0061df58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061df58 {

struct __attribute__((packed)) Local_0061df58_r8_2 {
    u8 unknown_0[0x60];  // (not used here)
    u32 word_60;
};
GUEST_OFFSET(Local_0061df58_r8_2, word_60, 0x60);  // (from the original)

inline guest::global<u32, 0x009529cc> global_009529cc;  // (from the original)
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32)> call_00305f44;  // (from the original)
inline constexpr guest::Function<0x00623f34, u32(u32, u32, u32)> call_00623f34;  // (from the original)
inline constexpr guest::Function<0x00624008, u32(u32, u32, u32)> call_00624008;  // (from the original)
inline constexpr guest::Function<0x00624024, u32(u32, u32, u32)> call_00624024;  // (from the original)
inline constexpr guest::Function<0x00624b60, u32(u32, u32, u32, u32)> call_00624b60;  // (from the original)
inline constexpr guest::Function<0x00624c78, u32(u32, u32, u32)> call_00624c78;  // (from the original)
inline constexpr guest::Function<0x0070ab10, u32(u32, u32, u32)> call_0070ab10;  // (from the original)
inline constexpr guest::Function<0x0075f4d4, u32(u32, u32, u32)> call_0075f4d4;  // (from the original)

u32 f_0061df58(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r5 = r0;
    call_00624b60(r0 + 5u, r1, r2, guest::cpu()->r[3]);
    call_00624b60(r5 + 7u, r2, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r4_1 = *gptr<u8>(r5 + 5u);
    u32 r0_3 = call_00624c78(0u, guest::cpu()->r[1], guest::cpu()->r[2]);
    u32 r7 = (r0_3 & r4_1) == 0 ? r5 + 5u : r5 + 7u;
    u32 r1_2 = *gptr<u8>(r7);
    call_00624b60(r5 + 0x70u, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r1_3 = guest::cpu()->r[1];
    u32 r0_5 = *gptr<u8>(r5 + 0x71u);  // (from the original)
    u32 r11 = 0u;
    *gptr<u8>(r5 + 0x13cu) = u8(r0_5);  // (from the original)
    *gptr<u32>(r5 + 0x5cu) = r11;  // (from the original)
    if (r0_5 != 0) {
        u32 r0_6 = call_00305f44(r0_5, r1_3, guest::cpu()->r[2]);
        u32 r4_2 = *gptr<u8>(r5 + 5u);
        u32 r10 = r0_6;
        u32 r0_7 = call_00624c78(r0_6, guest::cpu()->r[1], guest::cpu()->r[2]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        u32 r0_8 = r0_7 & r4_2;
        if (r0_8 != 0) {
            r0_8 = 1u;
        }
        u32 r9 = 4u;
        u32 r4 = 0u;
        *gptr<u8>(r5 + 0x144u) = u8(r0_8);  // (from the original)
L_61dfdc:;
        u32 r8_1 = r4 & 0xffu;  // (from the original)
        u32 r6_1 = *gptr<u8>(r7);
        u32 r0_9 = call_00624c78(r8_1, r1, r2);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if ((r0_9 & r6_1) != 0) {
            r9 = r8_1;
        } else {
            r4 += 1u;
            if (s32(r4) < 4) {
                guest::preempt();
                goto L_61dfdc;
            }
        }
        r4 = 0x95362cu;  // (from the original)
        u32 r0_10 = r9 == r10 ? 1u : 0u;
        *gptr<u8>(r5 + 0x13du) = u8(r0_10);  // (from the original)
        if (r0_10 == 0) {
            goto L_61e058;
        }
        r0_11 = *global_009529cc;
        r0 = call_0070ab10(r0_11, r1, r2);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
L_61e034:;
        *gptr<u32>(r5 + 0x5cu) = r0;  // (from the original)
L_61e038:;
        r0_12 = *gptr<u32>(r4);
        r10 = r0_12 + 0xb0u;  // (from the original)
        r0_13 = call_00305f44(r0_12, r1, r2);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r9 = r0_13;
        if (r0_13 >= 4u) {
            return r0_13;
        } else {
            r4 = 0u;
        }
        goto L_61e078;
L_61e058:;
        r0_14 = *gptr<u32>(r4) + 0xb0u;  // (from the original)
        r0_15 = call_0075f4d4(r0_14, r9, r2);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0_15 != 0) {
            r0 = *gptr<u32>(r0_15);
            guest::preempt();
            goto L_61e034;
        }
        guest::preempt();
        goto L_61e038;
L_61e078:;
        gptr<Local_0061df58_r8_2> r8_2 = gptr<Local_0061df58_r8_2>(r5 + (r4 << 2));
        u32 r7_1 = r4 & 0xffu;  // (from the original)
        r8_2->word_60 = r11;
        u32 r6_2 = *gptr<u8>(r5 + 0x70u);  // (from the original)
        r0_13 = call_00624c78(r7_1, r1, r2);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if ((r0_13 & r6_2) == 0) {
            goto L_61e0ec;
        }
        if (r7_1 == r9) {
            call_00624008(frame.at(0).addr(), r1, r2);
            call_00623f34(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2]);
            r8_2->word_60 = *frame.at<u32>(0);
            r0_13 = call_00624024(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2]);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            goto L_61e0ec;
        }
        r0_13 = call_0075f4d4(r10, r7_1, r2);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0_13 != 0) {
            r0_13 = *gptr<u32>(r0_13);
            r8_2->word_60 = r0_13;
        }
L_61e0ec:;
        r4 += 1u;
        if (s32(r4) < 4) {
            guest::preempt();
            goto L_61e078;
        }
        guest::cpu()->r[1] = r1;
        return r0_13;
    }
    *gptr<u8>(r5 + 0x144u) = 1;  // (from the original)
    *gptr<u8>(r5 + 0x13du) = u8(r11);  // (from the original)
    guest::cpu()->r[1] = r1_3;
    return 1u;
}

}  // namespace d_0061df58
GUEST_EXPORT_FRAMED(0x0061df58, d_0061df58::f_0061df58, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_0061e488: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061e488 {

struct __attribute__((packed)) Object_0061e488_0 {
    u8 byte_0;
    u8 unknown_1[0x2];  // (not used here)
    u8 byte_3;
};
GUEST_OFFSET(Object_0061e488_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0061e488_0, byte_3, 0x3);  // (from the original)

struct __attribute__((packed)) Local_0061e488_r0_1 {
    u8 unknown_0[0x3c];  // (not used here)
    u8 byte_3c;
    u8 unknown_3d[0x17];  // (not used here)
    u8 byte_54;
};
GUEST_OFFSET(Local_0061e488_r0_1, byte_3c, 0x3c);  // (from the original)
GUEST_OFFSET(Local_0061e488_r0_1, byte_54, 0x54);  // (from the original)

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)
inline constexpr guest::Function<0x00621684, u32(u32, u32, u32, u32)> call_00621684;  // (from the original)
inline constexpr guest::Function<0x00623984, u32(u32, u32, u32)> call_00623984;  // (from the original)
inline constexpr guest::Function<0x00624b24, u32(u32, u32, u32)> call_00624b24;  // (from the original)

void f_0061e488(gptr<Object_0061e488_0> arg0, u32 r1_unused, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r5_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r0_4 = 0;
    u32 r4 = r0;
    u32 r1 = arg0->byte_0;
    gptr<Local_0061e488_r0_1> r0_1 = gptr<Local_0061e488_r0_1>(*global_0095362c);
    if (r1 == 0x2eu) {  // (from the original)
        goto L_61e4f8;
    }
    if (r1 == 0x39u) {  // (from the original)
        r0_1->byte_54 = 1;
        *gptr<u8>(r4) = 0x3a;  // (from the original)
        guest::cpu()->r[1] = 0x3au;  // (from the original)
        return;
    }
    if (r1 != 0x5au) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return;
    }
    r5_1 = arg0->byte_3;
    r0_1->byte_3c = u8(r5_1);
    r0_2 = r0_1.addr() + 0x1c0u;  // (from the original)
    call_00621684(r0_2, r5_1, r2, guest::cpu()->r[3]);
    r2_1 = guest::cpu()->r[2];
    r0_3 = *global_0095362c + 0x13270u;  // (from the original)
    call_00624b24(r0_3, r5_1, r2_1);
    r2_2 = guest::cpu()->r[2];
    r0_4 = *global_0095362c + 0x23cu;  // (from the original)
    call_00623984(r0_4, r5_1, r2_2);
    r1 = guest::cpu()->r[1];
    r0 = 0x5bu;  // (from the original)
    *gptr<u8>(r4) = u8(r0);
    return;
L_61e4f8:;
    u32 r5_2 = *gptr<u8>(r4 + 3u);
    r0_1->byte_3c = u8(r5_2);
    call_00621684(r0_1.addr() + 0x1c0u, r5_2, r2, guest::cpu()->r[3]);  // (from the original)
    call_00623984(*global_0095362c + 0x23cu, r5_2, guest::cpu()->r[2]);  // (from the original)
    r1 = guest::cpu()->r[1];
    r0 = 0x2fu;  // (from the original)
    *gptr<u8>(r4) = u8(r0);
    return;
}

}  // namespace d_0061e488
GUEST_EXPORT_FRAMED(0x0061e488, d_0061e488::f_0061e488, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0061e574: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061e574 {

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)
inline constexpr guest::Function<0x001148c5, u32(u32, u32, u32, u32)> call_001148c4;  // (from the original)
inline constexpr guest::Function<0x00282c78, u32(u32, u32, u32, u32)> call_00282c78;  // (from the original)
inline constexpr guest::Function<0x00282d6c, u32(u32, u32, u32, u32)> call_00282d6c;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x002fd068, u32(u32, u32, u32, u32)> call_002fd068;  // (from the original)
inline constexpr guest::Function<0x00303660, u32(u32, u32, u32, u32)> call_00303660;  // (from the original)
inline constexpr guest::Function<0x00305f2c, u32(u32, u32, u32, u32)> call_00305f2c;  // (from the original)
inline constexpr guest::Function<0x00308340, u32(u32)> call_00308340;  // (from the original)
inline constexpr guest::Function<0x0030b6c4, u32(u32)> call_0030b6c4;  // (from the original)
inline constexpr guest::Function<0x005b4d04, u32(u32, u32, u32, u32)> call_005b4d04;  // (from the original)
inline constexpr guest::Function<0x005c5bb8, u32(u32, u32, u32, u32)> call_005c5bb8;  // (from the original)
inline constexpr guest::Function<0x0061dc30, u32(u32, u32, u32, u32)> call_0061dc30;  // (from the original)
inline constexpr guest::Function<0x0061f3f8, u32(u32)> call_0061f3f8;  // (from the original)
inline constexpr guest::Function<0x006b7380, u32(u32, u32, u32, u32)> call_006b7380;  // (from the original)
inline constexpr guest::Function<0x006b8cb8, u32(u32, u32, u32, u32)> call_006b8cb8;  // (from the original)
inline constexpr guest::Function<0x006bced4, u32(u32, u32, u32, u32)> call_006bced4;  // (from the original)
inline constexpr guest::Function<0x006e08b4, u32(u32, u32, u32, u32)> call_006e08b4;  // (from the original)

void f_0061e574(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_3 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_10 = 0;
    u32 r1_8 = 0;
    u32 r2_10 = 0;
    u32 r3_10 = 0;
    u32 r0_11 = 0;
    u32 r1_9 = 0;
    u32 r2_11 = 0;
    u32 r3_11 = 0;
    *frame.at<u32>(0) = r3;
    u32 r0_1 = call_00305f2c(r0, r1, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    u32 r3_1 = guest::cpu()->r[3];
    if (r0_1 == 2u) {
        r0_1 = *gptr<u8>(r0 + 0x144u);  // (from the original)
        if (r0_1 == 0) {
            goto L_61e630;
        }
    }
    call_00282d6c(r0_1, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_2 = call_006e08b4(2u, r1_2, r2_2, r3_2);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_3 = call_002fb94c(r0_2, r1_3, r2_3, r3_3);
    r1_4 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    if (r0_3 != 0) {
        u32 r0_4 = call_006bced4(r0_3, r1_4, r2_4, r3_4);
        u32 r0_6 = call_00303660(r0_3 + 0x6b8cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        u32 r0_7 = call_002fd068(r0_6, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r0_8 = call_006b8cb8(r0_7, r0_6, guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r0_9 = call_002fd068(r0_8, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        r0_3 = call_006b7380(r0_9, r0_4, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_4 = guest::cpu()->r[1];
        r2_4 = guest::cpu()->r[2];
        r3_4 = guest::cpu()->r[3];
    }
    r0_10 = call_005c5bb8(r0_3, r1_4, r2_4, r3_4);
    r1_8 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r0_11 = call_001148c4(r0_10, r1_8, r2_10, r3_10);
    r1_9 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    call_0061dc30(r0_11, r1_9, r2_11, r3_11);
    *gptr<u8>(*global_0095362c + 0x132b6u) = 0;  // (from the original)
    guest::cpu()->r[1] = 0u;
    return;
L_61e630:;
    u32 r0_12 = call_00282c78(r0_1, r1_1, r2_1, r3_1);
    u32 r0_13 = call_00308340(r0_12);
    *frame.at<u32>(0) = 1;
    u32 r0_14 = call_005b4d04(r0_13, 0u, 0u, 1u);
    u32 r0_15 = call_0030b6c4(r0_14);
    if (r0_15 != 0) {
        call_0061f3f8(r0);
    }
    *gptr<u8>(*global_0095362c + 0x132b6u) = 0;  // (from the original)
    guest::cpu()->r[1] = 0u;
    return;
}

}  // namespace d_0061e574
GUEST_EXPORT_FRAMED(0x0061e574, d_0061e574::f_0061e574, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0061e690: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061e690 {

inline constexpr guest::Function<0x00617840, u32(u32, u32, u32, u32)> call_00617840;  // (from the original)
inline constexpr guest::Function<0x00624f00, u32(u32, u32, u32, u32)> call_00624f00;  // (from the original)
inline constexpr guest::Function<0x00626328, u32(u32, u32, u32, u32)> call_00626328;  // (from the original)

u32 f_0061e690(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x14);  // the original's stack frame
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r6 = r1;
    u32 r0_1 = call_00626328(r1, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_1 != 0) {
        u32 r9 = 0x95362cu;  // (from the original)
        *gptr<u8>(r0 + 0x141u) = 1;  // (from the original)
        u32 r4 = 0u;
        u32 r7 = r4;
        u32 r8 = 0x14u;  // (from the original)
        do {
            u32 r5_1 = r4 & 0xffu;  // (from the original)
            if (r5_1 == 0) {
                goto L_61e710;
            }
            r0_2 = call_00624f00(r5_1, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_2 == 0) {
                if (r6 != r5_1) {
                    goto L_61e710;
                }
            }
            *frame.at<u32>(8) = r7;
            *frame.at<u32>(0xc) = r7;  // (from the original)
            *frame.at<u32>(0x10) = r7;  // (from the original)
            *frame.at<u32>(0) = r7;
            *frame.at<u32>(4) = r8;
            r0_3 = *gptr<u32>(r9);
            call_00617840(r0_3, r5_1, 0u, 0u);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
L_61e710:;
            r4 += 1u;
            guest::preempt();
        } while (s32(r4) < 4);
        r0_1 = 1u;
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_0061e690
GUEST_EXPORT_FRAMED(0x0061e690, d_0061e690::f_0061e690, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_0061e72c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061e72c {

inline guest::global<u32, 0x0095c6d0> global_0095c6d0;  // (from the original)
inline constexpr guest::Function<0x00308340, u32(u32)> call_00308340;  // (from the original)
inline constexpr guest::Function<0x005b4d7c, u32(u32, u32, u32, u32)> call_005b4d7c;  // (from the original)
inline constexpr guest::Function<0x006c3be4, u32(u32)> call_006c3be4;  // (from the original)
inline constexpr guest::Function<0x006c4280, u32(u32)> call_006c4280;  // (from the original)

void f_0061e72c() {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = s32(s8(*gptr<u8>(*global_0095c6d0 + 0x1cu)));  // (from the original)
    u32 r0_2 = call_006c4280(r0_1);
    u32 r0_3 = call_006c3be4(r0_2);
    u32 r0_4 = call_00308340(r0_3);
    *frame.at<u32>(0) = 1;
    *frame.at<u32>(4) = 1;
    call_005b4d7c(r0_4, r0_3, 1u, 1u);
    return;
}

}  // namespace d_0061e72c
GUEST_EXPORT_FRAMED(0x0061e72c, d_0061e72c::f_0061e72c, 0x4010);  // pushes {r4, lr} first, as the original

// f_0061eb20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061eb20 {

struct __attribute__((packed)) Local_0061eb20_ea_10 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0061eb20_ea_10, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0061eb20_ea_10, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_0061eb20_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0061eb20_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0061eb20_ea_2, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_0061eb20_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0061eb20_ea_4, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0061eb20_ea_4, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_0061eb20_ea_7 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0061eb20_ea_7, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0061eb20_ea_7, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_0061eb20_ea_8 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0061eb20_ea_8, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0061eb20_ea_8, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_0061eb20_r0_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0061eb20_r0_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0061eb20_r0_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0061eb20_r0_1, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_0061eb20_r0_8 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0061eb20_r0_8, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0061eb20_r0_8, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0061eb20_r0_8, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_0061eb20_r0_9 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0061eb20_r0_9, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0061eb20_r0_9, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0061eb20_r0_9, word_8, 0x8);  // (from the original)

inline guest::global<u32, 0x0061ec60> global_0061ec60;  // (from the original)
inline guest::global<u32, 0x0061ec64> global_0061ec64;  // (from the original)
inline guest::global<u32, 0x0061ec68> global_0061ec68;  // (from the original)
inline guest::global<u32, 0x0061ec84> global_0061ec84;  // (from the original)
inline guest::global<u32, 0x00881b44> global_00881b44;  // (from the original)
inline guest::global<u32, 0x00881b48> global_00881b48;  // (from the original)
inline guest::global<u32, 0x00881b58> global_00881b58;  // (from the original)
inline guest::global<u32, 0x00881b84> global_00881b84;  // (from the original)
inline constexpr guest::Function<0x002d57f4, u32(u32, u32, u32, u32)> call_002d57f4;  // (from the original)
inline constexpr guest::Function<0x00305f2c, u32(u32, u32, u32, u32)> call_00305f2c;  // (from the original)
inline constexpr guest::Function<0x00308340, u32(u32, u32, u32, u32)> call_00308340;  // (from the original)
inline constexpr guest::Function<0x00565c34, u32(u32, u32, u32, u32)> call_00565c34;  // (from the original)
inline constexpr guest::Function<0x005b5068, u32(u32, u32, u32, u32)> call_005b5068;  // (from the original)
inline constexpr guest::Function<0x005b5b78, u32(u32, u32, u32, u32)> call_005b5b78;  // (from the original)
inline constexpr guest::Function<0x005b5d60, u32(u32, u32, u32, u32)> call_005b5d60;  // (from the original)
inline constexpr guest::Function<0x005c4234, u32(u32, u32, u32, u32)> call_005c4234;  // (from the original)
inline constexpr guest::Function<0x005c6580, u32(u32, u32, u32, u32)> call_005c6580;  // (from the original)

u32 f_0061eb20(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4c);  // the original's stack frame
    u32 r0 = 0;
    float S0 = 0;
    float S1 = 0;
    float S2 = 0;
    u32 r0_5 = 0;
    u32 ea_1 = 0;
    gptr<Local_0061eb20_ea_2> ea_2 = gptr<Local_0061eb20_ea_2>(0u);
    u32 r1_4 = 0;
    u32 ea_3 = 0;
    gptr<Local_0061eb20_ea_4> ea_4 = gptr<Local_0061eb20_ea_4>(0u);
    u32 r3_4 = 0;
    u32 ea_5 = 0;
    u32 ea_6 = 0;
    gptr<Local_0061eb20_ea_7> ea_7 = gptr<Local_0061eb20_ea_7>(0u);
    gptr<Local_0061eb20_ea_8> ea_8 = gptr<Local_0061eb20_ea_8>(0u);
    u32 r2_4 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r1_5 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_6 = 0;
    u32 r1_6 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r0_7 = 0;
    gptr<Local_0061eb20_r0_1> r0_1 = gptr<Local_0061eb20_r0_1>(frame.at(0x38).addr());  // (from the original)
    float S2_1 = std::bit_cast<float>(*global_0061ec60);
    float S1_1 = std::bit_cast<float>(*global_0061ec64);
    float S0_1 = std::bit_cast<float>(*global_0061ec68);
    r0_1->word_0 = std::bit_cast<u32>(S0_1);
    r0_1->word_4 = std::bit_cast<u32>(S1_1);
    r0_1->word_8 = std::bit_cast<u32>(S2_1);
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    u32 r0_2 = call_00308340(r0_1.addr(), r1, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    u32 r3_1 = guest::cpu()->r[3];
    u32 r0_3 = call_005b5068(r0_2, r1_1, r2_1, r3_1);
    u32 r1_2 = guest::cpu()->r[1];
    u32 r2_2 = guest::cpu()->r[2];
    u32 r3_2 = guest::cpu()->r[3];
    u32 r0_4 = call_00305f2c(r0_3, r1_2, r2_2, r3_2);
    u32 r1_3 = guest::cpu()->r[1];
    u32 r2_3 = guest::cpu()->r[2];
    u32 r3_3 = guest::cpu()->r[3];
    if (r0_4 == 2u) {
        goto L_61ebf0;
    }
    *frame.at<u16>(0x44) = 0;  // (from the original)
    r0_5 = call_00308340(0u, r1_3, r2_3, r3_3);
    ea_1 = frame.at(0x28).addr();  // (from the original)
    *gptr<u32>(ea_1) = 0;
    ea_2 = gptr<Local_0061eb20_ea_2>(frame.at(0x2c).addr());  // (from the original)
    ea_2->word_0 = 0;
    ea_2->word_4 = 1;
    r1_4 = frame.at(0x44).addr();  // (from the original)
    ea_3 = frame.at(0x34).addr();  // (from the original)
    *gptr<u32>(ea_3) = 1;
    ea_4 = gptr<Local_0061eb20_ea_4>(frame.at(0x1c).addr());  // (from the original)
    ea_4->word_0 = r1_4;
    ea_4->word_4 = 0xa22014;  // (from the original)
    r3_4 = 0xa22008u;  // (from the original)
    ea_5 = frame.at(0x24).addr();  // (from the original)
    *gptr<u32>(ea_5) = r1_4;
    ea_6 = frame.at(8).addr();
    *gptr<u32>(ea_6) = frame.at(0x38).addr();  // (from the original)
    ea_7 = gptr<Local_0061eb20_ea_7>(frame.at(0xc).addr());  // (from the original)
    ea_7->word_0 = r1_4;
    ea_7->word_4 = r3_4 - 0xcu;  // (from the original)
    ea_8 = gptr<Local_0061eb20_ea_8>(frame.at(0x14).addr());  // (from the original)
    ea_8->word_0 = r1_4;
    ea_8->word_4 = r3_4;
    r2_4 = *global_00881b84;
    *frame.at<u32>(0) = *global_00881b48;
    *frame.at<u32>(4) = r2_4;
    r2_5 = *global_00881b58;
    r3_5 = *global_00881b44;
    call_005b5d60(r0_5, 0x67u, r2_5, r3_5);  // (from the original)
    r1_5 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_6 = call_005c4234(0x95bfdcu, r1_5, r2_6, r3_6);  // (from the original)
    r1_6 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0 = call_005c6580(r0_6, r1_6, r2_7, r3_7);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
L_61ebe0:;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0_7 = call_002d57f4(r0, r1, r2, r3);
    return r0_7;
L_61ebf0:;
    gptr<Local_0061eb20_r0_8> r0_8 = gptr<Local_0061eb20_r0_8>(frame.at(0x38).addr());  // (from the original)
    float S0_9 = std::bit_cast<float>(r0_8->word_0);
    float S1_9 = std::bit_cast<float>(r0_8->word_4);
    float S2_8 = std::bit_cast<float>(r0_8->word_8);
    gptr<Local_0061eb20_r0_9> r0_9 = gptr<Local_0061eb20_r0_9>(frame.at(0x1c).addr());  // (from the original)
    r0_9->word_0 = std::bit_cast<u32>(S0_9);
    r0_9->word_4 = std::bit_cast<u32>(S1_9);
    r0_9->word_8 = std::bit_cast<u32>(S2_8);
    float S0_10 = std::bit_cast<float>(*global_0061ec84);
    guest::cpu()->s[0] = S0_10;
    guest::cpu()->s[1] = S1_9;
    guest::cpu()->s[2] = S2_8;
    u32 r0_10 = call_00565c34(r0_9.addr(), r1_3, r2_3, r3_3);
    u32 r1_8 = guest::cpu()->r[1];
    u32 r3_8 = guest::cpu()->r[3];
    float S0_11 = guest::cpu()->s[0];
    float S1_10 = std::bit_cast<float>(*frame.at<u32>(0x1c));  // (from the original)
    float S0_12 = S0_11 + S1_10;
    *frame.at<u32>(0x1c) = std::bit_cast<u32>(S0_12);  // (from the original)
    *frame.at<u16>(0x14) = 0;  // (from the original)
    *frame.at<u16>(0x16) = 0;  // (from the original)
    *frame.at<u16>(0x18) = 0;  // (from the original)
    guest::cpu()->s[0] = S0_12;
    guest::cpu()->s[1] = S1_10;
    u32 r0_11 = call_00308340(r0_10, r1_8, 0u, r3_8);
    *frame.at<u32>(4) = 0;
    gptr<Local_0061eb20_ea_10> ea_10 = gptr<Local_0061eb20_ea_10>(frame.at(8).addr());
    ea_10->word_0 = 0;
    ea_10->word_4 = 1;
    *frame.at<u32>(0x10) = 1;  // (from the original)
    *frame.at<u32>(0) = *global_00881b58;
    r0 = call_005b5b78(r0_11, 0x67u, frame.at(0x1c).addr(), frame.at(0x14).addr());  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    guest::preempt();
    goto L_61ebe0;
}

}  // namespace d_0061eb20
GUEST_EXPORT_FRAMED(0x0061eb20, d_0061eb20::f_0061eb20, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0061ec88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061ec88 {

inline guest::global<u32, 0x0061ed20> global_0061ed20;  // (from the original)
inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)
inline constexpr guest::Function<0x0030b6c4, u32(u32, u32, u32)> call_0030b6c4;  // (from the original)
inline constexpr guest::Function<0x0058d3b4, u32(u32, u32, u32, u32)> call_0058d3b4;  // (from the original)
inline constexpr guest::Function<0x00623e70, u32(u32, u32, u32)> call_00623e70;  // (from the original)
inline constexpr guest::Function<0x00624c68, u32(u32, u32, u32)> call_00624c68;  // (from the original)
inline constexpr guest::Function<0x00624c78, u32(u32, u32, u32)> call_00624c78;  // (from the original)
inline constexpr guest::Function<0x0075dfe8, u32(u32, u32, u32, u32)> call_0075dfe8;  // (from the original)

void f_0061ec88(u32 r0, u32 r1, u32 r2, float S0) {
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    u32 r0_1 = *global_0095362c;
    u32 r0_2 = call_0075dfe8(r0_1, r1, r2, guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    *gptr<u8>(r0 + 0x141u) = 0;  // (from the original)
    call_00624c68(r0 + 0x18u, r1_1, r2_1);  // (from the original)
    u32 r1_2 = guest::cpu()->r[1];
    u32 r2_2 = guest::cpu()->r[2];
    call_00624c68(r0 + 0x28u, r1_2, r2_2);  // (from the original)
    u32 r1_3 = guest::cpu()->r[1];
    u32 r2_3 = guest::cpu()->r[2];
    call_00624c68(r0 + 0x30u, r1_3, r2_3);  // (from the original)
    u32 r1_4 = guest::cpu()->r[1];
    u32 r2_4 = guest::cpu()->r[2];
    *gptr<u8>(r0 + 1u) = 2;
    u32 r0_6 = call_0030b6c4(2u, r1_4, r2_4);
    u32 r1_5 = guest::cpu()->r[1];
    u32 r2_5 = guest::cpu()->r[2];
    float S0_5 = guest::cpu()->s[0];
    if (r0_6 == 0) {
        r0_7 = 0x4au;  // (from the original)
        *gptr<u8>(r0 + 0x145u) = 0;  // (from the original)
        goto L_61ecf0;
    }
    r0_8 = r0 + 0x14u;  // (from the original)
    call_00623e70(r0_8, r0_2, 0u);
    r1_5 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    S0_5 = guest::cpu()->s[0];
    r0_7 = 0x45u;  // (from the original)
L_61ecf0:;
    *gptr<u8>(r0) = u8(r0_7);
    u32 r4_1 = *gptr<u8>(r0 + 5u);
    guest::cpu()->s[0] = S0_5;
    u32 r0_9 = call_00624c78(r0_2, r1_5, r2_5);
    u32 r1_6 = guest::cpu()->r[1];
    float S0_6 = guest::cpu()->s[0];
    if ((r0_9 & r4_1) != 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        float S0_7 = std::bit_cast<float>(*global_0061ed20);
        guest::cpu()->s[0] = S0_7;
        call_0058d3b4(0x10004afu, r1_6, r2_5, guest::cpu()->r[3]);
        return;  // (from the original)
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_6;
    guest::cpu()->s[0] = S0_6;
    return;
}

}  // namespace d_0061ec88
GUEST_EXPORT(0x0061ec88, d_0061ec88::f_0061ec88);

// f_0061ee60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061ee60 {

struct __attribute__((packed)) Object_0061ee60_0 {
    u8 unknown_0[0x50];  // (not used here)
    u32 word_50;
};
GUEST_OFFSET(Object_0061ee60_0, word_50, 0x50);  // (from the original)


void f_0061ee60(gptr<Object_0061ee60_0> arg0) {
    u32 r1_1 = arg0->word_50;
    if (r1_1 > 0x96u) {  // (from the original)
        r1_1 = 0x96u;  // (from the original)
    }
    arg0->word_50 = r1_1;
    return;
}

}  // namespace d_0061ee60
GUEST_EXPORT(0x0061ee60, d_0061ee60::f_0061ee60);

// f_0061f2a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061f2a0 {

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)
inline constexpr guest::Function<0x00300904, u32(u32)> call_00300904;  // (from the original)
inline constexpr guest::Function<0x00305f2c, u32(u32)> call_00305f2c;  // (from the original)
inline constexpr guest::Function<0x00618b9c, u32(u32, u32)> call_00618b9c;  // (from the original)

u32 f_0061f2a0(u32 r0) {
    guest::cpu()->r[13] -= 8u;
    u32 r0_1 = call_00300904(r0);
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        return 0u;
    }
    u32 r0_2 = call_00305f2c(r0_1);
    if (r0_2 != 2u) {
        guest::cpu()->r[13] += 8u;
        return 0u;
    }
    if (u32(*gptr<u8>(r0)) == 0) {
        u32 r0_3 = *global_0095362c;
        guest::cpu()->r[13] += 8u;
        return call_00618b9c(r0_3, guest::cpu()->r[1]);
    }
    guest::cpu()->r[13] += 8u;
    return 0u;
}

}  // namespace d_0061f2a0
GUEST_EXPORT(0x0061f2a0, d_0061f2a0::f_0061f2a0);

// f_0061f3f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061f3f8 {

struct __attribute__((packed)) Object_0061f3f8_0 {
    u8 byte_0;
    u8 unknown_1[0x1];  // (not used here)
    u8 byte_2;
    u8 byte_3;
    u8 byte_4;
    u8 unknown_5[0x3f];  // (not used here)
    u8 byte_44;
    u8 unknown_45[0x7];  // (not used here)
    u32 word_4c;
    u32 word_50;
    u8 unknown_54[0x4];  // (not used here)
    u32 word_58;
    u32 word_5c;
    u32 word_60;
    u32 word_64;
    u32 word_68;
    u32 word_6c;
    u8 unknown_70[0xcd];  // (not used here)
    u8 byte_13d;
    u8 byte_13e;
    u8 byte_13f;
    u8 byte_140;
    u8 byte_141;
    u8 byte_142;
    u8 unknown_143[0x3];  // (not used here)
    u8 byte_146;
    u8 byte_147;
};
GUEST_OFFSET(Object_0061f3f8_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0061f3f8_0, byte_2, 0x2);  // (from the original)
GUEST_OFFSET(Object_0061f3f8_0, byte_3, 0x3);  // (from the original)
GUEST_OFFSET(Object_0061f3f8_0, byte_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0061f3f8_0, byte_44, 0x44);  // (from the original)
GUEST_OFFSET(Object_0061f3f8_0, word_4c, 0x4c);  // (from the original)
GUEST_OFFSET(Object_0061f3f8_0, word_50, 0x50);  // (from the original)
GUEST_OFFSET(Object_0061f3f8_0, word_58, 0x58);  // (from the original)
GUEST_OFFSET(Object_0061f3f8_0, word_5c, 0x5c);  // (from the original)
GUEST_OFFSET(Object_0061f3f8_0, word_60, 0x60);  // (from the original)
GUEST_OFFSET(Object_0061f3f8_0, word_64, 0x64);  // (from the original)
GUEST_OFFSET(Object_0061f3f8_0, word_68, 0x68);  // (from the original)
GUEST_OFFSET(Object_0061f3f8_0, word_6c, 0x6c);  // (from the original)
GUEST_OFFSET(Object_0061f3f8_0, byte_13d, 0x13d);  // (from the original)
GUEST_OFFSET(Object_0061f3f8_0, byte_13e, 0x13e);  // (from the original)
GUEST_OFFSET(Object_0061f3f8_0, byte_13f, 0x13f);  // (from the original)
GUEST_OFFSET(Object_0061f3f8_0, byte_140, 0x140);  // (from the original)
GUEST_OFFSET(Object_0061f3f8_0, byte_141, 0x141);  // (from the original)
GUEST_OFFSET(Object_0061f3f8_0, byte_142, 0x142);  // (from the original)
GUEST_OFFSET(Object_0061f3f8_0, byte_146, 0x146);  // (from the original)
GUEST_OFFSET(Object_0061f3f8_0, byte_147, 0x147);  // (from the original)

inline constexpr guest::Function<0x00624c68, u32(u32)> call_00624c68;  // (from the original)

void f_0061f3f8(gptr<Object_0061f3f8_0> arg0) {
    u32 r0 = arg0.addr();
    arg0->byte_0 = 0;
    call_00624c68(r0 + 0x18u);  // (from the original)
    call_00624c68(r0 + 0x20u);  // (from the original)
    call_00624c68(r0 + 0x28u);  // (from the original)
    call_00624c68(r0 + 0x30u);  // (from the original)
    arg0->byte_2 = 0xff;  // (from the original)
    arg0->byte_3 = 4;
    arg0->byte_4 = 4;
    call_00624c68(r0 + 5u);
    call_00624c68(r0 + 7u);
    call_00624c68(r0 + 0x10u);  // (from the original)
    call_00624c68(r0 + 0x38u);  // (from the original)
    call_00624c68(r0 + 0x40u);  // (from the original)
    arg0->byte_44 = 3;
    arg0->byte_140 = 0;
    arg0->byte_141 = 0;
    arg0->byte_142 = 0;
    arg0->word_60 = 0;
    arg0->word_64 = 0;
    arg0->word_68 = 0;
    arg0->word_6c = 0;
    call_00624c68(r0 + 0x70u);  // (from the original)
    arg0->byte_146 = 0;
    arg0->word_4c = 0;
    arg0->word_50 = 0;
    arg0->word_58 = 0;
    arg0->word_5c = 0;
    *gptr<u16>(0x13au + r0) = 0;  // (from the original)
    arg0->byte_13d = 0;
    arg0->byte_13e = 0;
    arg0->byte_13f = 0;
    arg0->byte_147 = 0;
    return;
}

}  // namespace d_0061f3f8
GUEST_EXPORT_FRAMED(0x0061f3f8, d_0061f3f8::f_0061f3f8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0061f4c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061f4c0 {

struct __attribute__((packed)) Object_0061f4c0_0 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
    u8 byte_4;
};
GUEST_OFFSET(Object_0061f4c0_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0061f4c0_0, byte_1, 0x1);  // (from the original)
GUEST_OFFSET(Object_0061f4c0_0, byte_2, 0x2);  // (from the original)
GUEST_OFFSET(Object_0061f4c0_0, byte_3, 0x3);  // (from the original)
GUEST_OFFSET(Object_0061f4c0_0, byte_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_0061f4c0_r0_24 {
    u8 unknown_0[0x13c];  // (not used here)
    u8 byte_13c;
    u8 byte_13d;
    u8 byte_13e;
    u8 byte_13f;
    u8 byte_140;
    u8 byte_141;
    u8 byte_142;
    u8 byte_143;
    u8 byte_144;
    u8 byte_145;
    u8 byte_146;
    u8 byte_147;
    u8 byte_148;
};
GUEST_OFFSET(Local_0061f4c0_r0_24, byte_13c, 0x13c);  // (from the original)
GUEST_OFFSET(Local_0061f4c0_r0_24, byte_13d, 0x13d);  // (from the original)
GUEST_OFFSET(Local_0061f4c0_r0_24, byte_13e, 0x13e);  // (from the original)
GUEST_OFFSET(Local_0061f4c0_r0_24, byte_13f, 0x13f);  // (from the original)
GUEST_OFFSET(Local_0061f4c0_r0_24, byte_140, 0x140);  // (from the original)
GUEST_OFFSET(Local_0061f4c0_r0_24, byte_141, 0x141);  // (from the original)
GUEST_OFFSET(Local_0061f4c0_r0_24, byte_142, 0x142);  // (from the original)
GUEST_OFFSET(Local_0061f4c0_r0_24, byte_143, 0x143);  // (from the original)
GUEST_OFFSET(Local_0061f4c0_r0_24, byte_144, 0x144);  // (from the original)
GUEST_OFFSET(Local_0061f4c0_r0_24, byte_145, 0x145);  // (from the original)
GUEST_OFFSET(Local_0061f4c0_r0_24, byte_146, 0x146);  // (from the original)
GUEST_OFFSET(Local_0061f4c0_r0_24, byte_147, 0x147);  // (from the original)
GUEST_OFFSET(Local_0061f4c0_r0_24, byte_148, 0x148);  // (from the original)

inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x00624c90, u32(u32, u32, u32, u32)> call_00624c90;  // (from the original)

u32 f_0061f4c0(gptr<Object_0061f4c0_0> arg0) {
    u32 r0 = arg0.addr();
    arg0->byte_0 = 0;
    arg0->byte_1 = 2;
    arg0->byte_2 = 0xff;  // (from the original)
    arg0->byte_3 = 4;
    arg0->byte_4 = 4;
    u32 r0_2 = call_00624c90(r0 + 5u, 4u, 0xffu, 2u);  // (from the original)
    u32 r0_4 = call_00624c90(r0_2 + 2u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_6 = call_00624c90(r0_4 + 9u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r0_6 - 4u) = 0x90ac18;  // (from the original)
    u32 r0_8 = call_00624c90(r0_6 + 8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r0_8 - 4u) = 0x90ac18;  // (from the original)
    u32 r0_10 = call_00624c90(r0_8 + 8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r0_10 - 4u) = 0x90ac18;  // (from the original)
    u32 r0_12 = call_00624c90(r0_10 + 8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r0_12 - 4u) = 0x90ac18;  // (from the original)
    u32 r0_14 = call_00624c90(r0_12 + 8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r0_14 - 4u) = 0x90ac18;  // (from the original)
    u32 r0_16 = call_00624c90(r0_14 + 8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r0_16 - 4u) = 0x90ac18;  // (from the original)
    u32 r0_18 = call_00624c90(r0_16 + 8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 ea_1 = r0_18 - 4u;
    *gptr<u32>(ea_1) = 0x90ac18;  // (from the original)
    u32 r0_19 = ea_1 - 0x3cu;  // (from the original)
    *gptr<u8>(r0_19 + 0x44u) = 3;  // (from the original)
    *gptr<u32>(r0_19 + 0x48u) = 0;  // (from the original)
    *gptr<u32>(r0_19 + 0x4cu) = 0;  // (from the original)
    *gptr<u32>(r0_19 + 0x50u) = 0;  // (from the original)
    *gptr<u32>(r0_19 + 0x54u) = 0;  // (from the original)
    *gptr<u32>(r0_19 + 0x58u) = 0;  // (from the original)
    u32 ea_8 = r0_19 + 0x5cu;  // (from the original)
    *gptr<u32>(ea_8) = 0;
    u32 r0_21 = call_00624c90(ea_8 + 0x14u, 3u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_23 = call_00301d0c(r0_21 + 2u, 0x29b870u, 0x32u, 4u);  // (from the original)
    gptr<Local_0061f4c0_r0_24> r0_24 = gptr<Local_0061f4c0_r0_24>(r0_23 - 0x72u);  // (from the original)
    *gptr<u16>(0x13au + r0_24.addr()) = 0;  // (from the original)
    r0_24->byte_13c = 0;
    r0_24->byte_13d = 0;
    r0_24->byte_13e = 0;
    r0_24->byte_13f = 0;
    r0_24->byte_140 = 0;
    r0_24->byte_141 = 0;
    r0_24->byte_142 = 0;
    r0_24->byte_143 = 0;
    r0_24->byte_144 = 0;
    r0_24->byte_145 = 0;
    r0_24->byte_146 = 0;
    r0_24->byte_147 = 0;
    r0_24->byte_148 = 0;
    guest::cpu()->r[1] = 0x13au;  // (from the original)
    return r0_24.addr();
}

}  // namespace d_0061f4c0
GUEST_EXPORT_FRAMED(0x0061f4c0, d_0061f4c0::f_0061f4c0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0061f608: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061f608 {

struct __attribute__((packed)) Object_0061f608_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_0061f608_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0061f608_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0061f608_0, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Object_0061f608_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_0061f608_1, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x0050d1b4, u32(u32, u32, u32)> call_0050d1b4;  // (from the original)
inline constexpr guest::Function<0x0061f6a0, u32(u32, u32, u32)> call_0061f6a0;  // (from the original)
inline constexpr guest::Function<0x00746efc, u32(u32, u32, u32)> call_00746efc;  // (from the original)
inline constexpr guest::Function<0x00746f8c, u32(u32, u32, u32, u32)> call_00746f8c;  // (from the original)

u32 f_0061f608(gptr<Object_0061f608_0> arg0, gptr<Object_0061f608_1> arg1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 r0_1 = arg1->word_0;
    u32 r5_1 = r1;
    u32 zf_1 = r0_1 == 0;
    if (!zf_1) {
        r1 = arg0->word_0;
        zf_1 = r1 == r0_1;
    }
    if (zf_1) {
        guest::cpu()->r[1] = r1;
        return 1u;
    }
    r1 = arg0->word_4;
    u32 zf_2 = r1 == r0_1;
    if (!zf_2) {
        r1 = arg0->word_8;
        zf_2 = r1 == r0_1;
    }
    if (zf_2) {
        guest::cpu()->r[1] = r1;
        return 1u;
    }
    u32 r0_2 = call_00746f8c(0xa22020u, r1, r2, guest::cpu()->r[3]);  // (from the original)
    if (r0_2 != 0) {
        u32 r0_3 = call_00746efc(0xa22020u, guest::cpu()->r[1], guest::cpu()->r[2]);  // (from the original)
        r1_2 = guest::cpu()->r[1];
        if (r0_3 >= 2u) {
            return 0u;
        }
    }
    r0_4 = call_0050d1b4(0xa22020u, r5_1, r2);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    u32 r2_2 = guest::cpu()->r[2];
    if (r0_4 == 0) {
        return r0_4;
    }
    call_0061f6a0(r0, r5_1, r2_2);
    r1_2 = guest::cpu()->r[1];
    return 1u;
}

}  // namespace d_0061f608
GUEST_EXPORT_FRAMED(0x0061f608, d_0061f608::f_0061f608, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0061f6a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061f6a0 {

struct __attribute__((packed)) Object_0061f6a0_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_0061f6a0_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0061f6a0_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0061f6a0_0, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Object_0061f6a0_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_0061f6a0_1, word_0, 0x0);  // (from the original)

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> call_00305f44;  // (from the original)
inline constexpr guest::Function<0x0075f4d4, u32(u32, u32, u32, u32)> call_0075f4d4;  // (from the original)

void f_0061f6a0(gptr<Object_0061f6a0_0> arg0, gptr<Object_0061f6a0_1> arg1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r4 = 0;
    u32 r5 = 0;
    u32 r6 = 0;
    u32 r9 = 0;
    *frame.at<u32>(0) = r3;
    u32 r7 = r0;
    u32 r8 = r1;
    u32 r0_1 = arg1->word_0;
    if (r0_1 == 0) {
        guest::cpu()->r[1] = r1;
        return;
    }
    r1 = arg0->word_0;
    u32 r10 = 0u;
    u32 zf_1 = r1 == r0_1;
    if (!zf_1) {
        r2 = arg0->word_4;
        zf_1 = r2 == r0_1;
    }
    if (zf_1) {
        guest::cpu()->r[1] = r1;
        return;
    }
    u32 r3_1 = arg0->word_8;
    u32 r11 = 2u;
    if (r3_1 == r0_1) {
        guest::cpu()->r[1] = r1;
        return;
    }
    if (r1 == 0) {
        *gptr<u32>(r7 + (r10 << 2)) = *gptr<u32>(r8);
        guest::cpu()->r[1] = r1;
        return;
    }
    if (r2 == 0) {
        goto L_61f7bc;
    }
    if (r3_1 != 0) {
        u32 r0_2 = call_00305f44(r0_1, r1, r2, r3_1);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_2 >= 4u) {
            goto L_61f788;
        }
        r9 = 0x88f298u;  // (from the original)
        r6 = 0u;
        *frame.at<u32>(0) = *global_0095362c + 0xb0u;  // (from the original)
L_61f71c:;
        r5 = *gptr<u32>(r7 + (r6 << 2));
        if (r5 == 0) {
            goto L_61f788;
        } else {
            r4 = 0u;
        }
        do {
            u32 r0_4 = call_0075f4d4(*frame.at<u32>(0), r4 & 0xffu, r2, r3);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            u32 zf_2 = r0_4 == 0;
            if (!zf_2) {
                r1 = *gptr<u32>(r0_4);
                zf_2 = r1 == 0;
            }
            if (zf_2) {
                goto L_61f778;
            }
            r2 = *gptr<u16>(r0_4 + 4u);
            r3 = *gptr<u16>(r9);
            if (r2 == r3 || u32(*gptr<u16>(r0_4 + 6u)) == 0 || r1 != r5) {
                goto L_61f778;
            }
            r6 += 1u;
            if (r6 < 3u) {
                guest::preempt();
                goto L_61f71c;
            }
            goto L_61f788;
L_61f778:;
            r4 += 1u;
            guest::preempt();
        } while (s32(r4) < 4);
        *gptr<u32>(r7 + (r6 << 2)) = r10;
L_61f788:;
        if (*gptr<u32>(r7) == 0) {
            *gptr<u32>(r7 + (r10 << 2)) = *gptr<u32>(r8);
            guest::cpu()->r[1] = r1;
            return;
        }
        if (*gptr<u32>(r7 + 4u) == 0) {
            goto L_61f7bc;
        }
        if (*gptr<u32>(r7 + 8u) != 0) {
            guest::cpu()->r[1] = r1;
            return;
        }
    }
    r10 = r11;
    *gptr<u32>(r7 + (r10 << 2)) = *gptr<u32>(r8);
    guest::cpu()->r[1] = r1;
    return;
L_61f7bc:;
    r10 = 1u;
    *gptr<u32>(r7 + (r10 << 2)) = *gptr<u32>(r8);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_0061f6a0
GUEST_EXPORT_FRAMED(0x0061f6a0, d_0061f6a0::f_0061f6a0, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_0061fc98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061fc98 {

struct __attribute__((packed)) Object_0061fc98_0 {
    u8 unknown_0[0x11ae8];  // (not used here)
    u8 byte_11ae8;
};
GUEST_OFFSET(Object_0061fc98_0, byte_11ae8, 0x11ae8);  // (from the original)

inline constexpr guest::Function<0x0050d0c4, u32(u32, u32, u32, u32)> call_0050d0c4;  // (from the original)

u32 f_0061fc98(gptr<Object_0061fc98_0> arg0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0 = arg0.addr();
    arg0->byte_11ae8 = 1;
    *frame.at<u32>(0) = 1;
    *frame.at<u32>(4) = 0;
    u32 r0_1 = call_0050d0c4(0xa22020u, r0 + 0x11950u, 0x64u, r0 + 0x11ae4u);  // (from the original)
    u32 r1_2 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        *gptr<u8>(r0 + 0x11ae8u) = 0;  // (from the original)
        r1_2 = r0 - 0xfffee517u;  // (from the original)
        *gptr<u8>(r1_2) = 0;
    }
    guest::cpu()->r[1] = r1_2;
    return r0_1;
}

}  // namespace d_0061fc98
GUEST_EXPORT_FRAMED(0x0061fc98, d_0061fc98::f_0061fc98, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0061fd68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061fd68 {

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)
inline constexpr guest::Function<0x00622fe4, u32(u32, u32)> call_00622fe4;  // (from the original)
inline constexpr guest::Function<0x00627d44, u32(u32, u32, u32, u32)> call_00627d44;  // (from the original)
inline constexpr guest::Function<0x00627f74, u32(u32, u32, u32, u32)> call_00627f74;  // (from the original)
inline constexpr guest::Function<0x0062801c, u32(u32, u32, u32, u32)> call_0062801c;  // (from the original)
inline constexpr guest::Function<0x0075dfe8, u32(u32, u32, u32, u32)> call_0075dfe8;  // (from the original)

u32 f_0061fd68(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xffffffe0u) = r3;  // (from the original)
    r13 -= 0x20;  // (from the original)
    u32 r0_1 = *global_0095362c;
    guest::cpu()->r[13] = r13;
    u32 r0_2 = call_0075dfe8(r0_1, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    u32 r3_1 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        r13 += 0x20;  // (from the original)
        u32 r0_4 = *global_0095362c + 0x7880u;  // (from the original)
        guest::cpu()->r[13] = r13;
        return call_00622fe4(r0_4, r0);
    }
    u32 r8_1 = r13;
    *gptr<u16>(r13) = u16(1u | r0 << 8);
    if (0u == 0) {
        goto L_61fdcc;
    }
    r13 += 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 1u;
L_61fdcc:;
    u32 r7_1 = *global_0095362c + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00627f74(r7_1, r1, r2_1, r3_1);
    u32 r3_2 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_00627d44(r7_1, r8_1, 2u, r3_2);
    u32 r3_3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_0062801c(r7_1, 0x30u, 0u, r3_3);  // (from the original)
    r1 = guest::cpu()->r[1];
    r13 += 0x20;  // (from the original)
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_0061fd68
GUEST_EXPORT(0x0061fd68, d_0061fd68::f_0061fd68);
