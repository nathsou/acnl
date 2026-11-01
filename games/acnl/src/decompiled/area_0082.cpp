// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_00825aa4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00825aa4 {

struct __attribute__((packed)) Object_00825aa4_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00825aa4_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x00578018, u32(u32, u32)> call_00578018;  // (from the original)

u32 f_00825aa4(gptr<Object_00825aa4_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r0_1 = arg0->word_0;
    if (r0_1 == 0) {
        return r0_1;
    }
    call_00578018(r0_1, r0);
    arg0->word_0 = 0;
    return 0u;
}

}  // namespace d_00825aa4
GUEST_EXPORT_FRAMED(0x00825aa4, d_00825aa4::f_00825aa4, 0x4010);  // pushes {r4, lr} first, as the original

// f_00825acc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00825acc {

inline constexpr guest::Function<0x00578018, u32(u32, u32, u32, u32)> call_00578018;  // (from the original)

u32 f_00825acc(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    goto L_825acc;
L_577a2c:;
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    *gptr<u32>(r1 + 4u) = *gptr<u32>(r0 + 0x70u);  // (from the original)
    *gptr<u32>(r0 + 0x70u) = r1;  // (from the original)
    r0_1 = *gptr<u32>(r0 + 0x74u);  // (from the original)
    *gptr<u32>(r1) = r0_1;
    guest::cpu()->r[1] = r1;
    return r0_1;
L_825acc:;
    u32 r0_2 = *gptr<u32>(r0);
    u32 r5_1 = r1;
    if (r0_2 != 0) {
        r0_2 = call_00578018(r0_2, r0, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    if (r5_1 != 0) {
        r1 = r0;
        r0 = r5_1;
        guest::preempt();
        goto L_577a2c;
    }
    guest::cpu()->r[1] = r1;
    return r0_2;
}

}  // namespace d_00825acc
GUEST_EXPORT_FRAMED(0x00825acc, d_00825acc::f_00825acc, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00825b04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00825b04 {

struct __attribute__((packed)) Object_00825b04_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00825b04_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x00578018, u32(u32, u32)> call_00578018;  // (from the original)

u32 f_00825b04(gptr<Object_00825b04_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r0_1 = arg0->word_0;
    if (r0_1 == 0) {
        return r0;
    }
    call_00578018(r0_1, r0);
    arg0->word_0 = 0;
    return r0;
}

}  // namespace d_00825b04
GUEST_EXPORT_FRAMED(0x00825b04, d_00825b04::f_00825b04, 0x4010);  // pushes {r4, lr} first, as the original

// f_00825c64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00825c64 {


u32 f_00825c64(u32 r0, u32 r1) {
    u32 r2 = 0u;
    do {
        u32 r3_1 = *gptr<u32>(r2 >= 8u ? r0 : r0 + (r2 << 2));
        if ((r3_1 == 0 ? ~0u : *gptr<u32>(r3_1 + 0xb0u)) == r1) {  // (from the original)
            return 1u;
        }
        r2 += 1u;
        guest::preempt();
    } while (s32(r2) < 8);
    return 0u;
}

}  // namespace d_00825c64
GUEST_EXPORT(0x00825c64, d_00825c64::f_00825c64);

// f_00825d6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00825d6c {


u32 f_00825d6c(gptr<ExchangeModelBank_24448u__BankVramConfig_736u__4u__3824u__4u__false___ExchangeBankKeywordMyDesignFgNameEx__SvFgName__Name_32766___item__ResLoader__2u__false_> arg0) {
    u32 r0 = arg0.addr();
    u32 r1_1 = u32(arg0->byte_24) & 1u;
    if (r1_1 >= 2u) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r0_1 = r0 + (r1_1 + (r1_1 << 1) << 2);
    u32 r1_2 = *gptr<u32>(r0_1 + 0x4bcu);  // (from the original)
    if (r1_2 != 0) {
        guest::cpu()->r[1] = r1_2;
        return r0_1 + 0x4b8u;  // (from the original)
    }
    guest::cpu()->r[1] = r1_2;
    return 0u;
}

}  // namespace d_00825d6c
GUEST_EXPORT(0x00825d6c, d_00825d6c::f_00825d6c);

// f_00826038: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00826038 {

struct __attribute__((packed)) Object_00826038_0 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
    u32 word_14;
    u8 unknown_18[0x4];  // (not used here)
    u32 word_1c;
};
GUEST_OFFSET(Object_00826038_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_00826038_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_00826038_0, word_1c, 0x1c);  // (from the original)

struct __attribute__((packed)) Local_00826038_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00826038_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00826038_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00826038_ea_2, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x00346720, u32(u32, u32, u32, u32)> call_00346720;  // (from the original)

u32 f_00826038(gptr<Object_00826038_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x20);  // the original's stack frame
    u32 r0_3 = 0;
    u32 r2_1 = 0;
    u32 r0_4 = 0;
    u32 res_3 = 0;
    u32 r4_1 = arg0->word_10;
    u32 res_1 = r4_1 + *frame.at<u32>(0x44);  // (from the original)
    u32 cf_1 = res_1 < r4_1;
    u32 r10_1 = *frame.at<u32>(0x40);  // (from the original)
    u32 r1_1 = frame.at(8).addr();
    u32 r3_1 = u64(arg0->word_14) + cf_1;
    *frame.at<u32>(0) = r1_1;
    *frame.at<u32>(4) = 0x18;  // (from the original)
    u32 r0_2 = call_00346720(arg0->word_1c, r1_1, res_1, r3_1);
    if ((r0_2 & 0x80000000u) >> 0x1f) {  // (from the original)
        goto L_8260d0;
    }
    if (r3 == 0 || r10_1 == 0) {
        goto L_8260cc;
    }
    *gptr<u32>(r10_1) = *frame.at<u32>(0x1c);  // (from the original)
    r0_3 = *frame.at<u32>(0x1c);  // (from the original)
    if (r0_3 == 0) {
        goto L_8260cc;
    }
    r2_1 = res_1 + 0x18u;  // (from the original)
    *frame.at<u32>(4) = r0_3;
    *frame.at<u32>(0) = r3;
    r0_4 = arg0->word_1c;
    r0_2 = call_00346720(r0_4, r1_1, r2_1, r3_1);
    res_3 = r0_2 & 0x80000000u;  // (from the original)
    if (res_3 >> 0x1f) {  // (from the original)
        goto L_8260d0;
    }
L_8260cc:;
    r0_2 = 0u;
L_8260d0:;
    if (!((r0_2 & 0x80000000u) >> 0x1f)) {  // (from the original)
        *gptr<u32>(r1) = *frame.at<u32>(8);
        gptr<Local_00826038_ea_2> ea_2 = gptr<Local_00826038_ea_2>(frame.at(0xc).addr());  // (from the original)
        u32 r1_2 = ea_2->word_4;
        u32 r2_2 = ea_2->word_8;
        *gptr<u32>(r2) = ea_2->word_0;
        *gptr<u32>(r2 + 4) = r1_2;
        *gptr<u32>(r2 + 8) = r2_2;
        r0_2 = 0u;
    }
    return r0_2;
}

}  // namespace d_00826038
GUEST_EXPORT_FRAMED(0x00826038, d_00826038::f_00826038, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_00826270: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00826270 {

inline constexpr guest::Function<0x00350b88, u32(u32, u32, u32, u32)> call_00350b88;  // (from the original)
inline constexpr guest::Function<0x00826038, u32(u32, u32, u32, u32)> call_00826038;  // (from the original)
inline constexpr guest::Function<0x008266bc, u32(u32, u32, u32, u32)> call_008266bc;  // (from the original)

u32 f_00826270(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r1_1 = *frame.at<u32>(0x30);  // (from the original)
    u32 r8_1 = *frame.at<u32>(0x3c);  // (from the original)
    *frame.at<u32>(0) = 0;
    *frame.at<u32>(4) = r1_1;
    u32 r0_1 = call_00826038(r0, frame.at(8).addr(), frame.at(0xc).addr(), 0u);  // (from the original)
    if ((r0_1 & 0x80000000u) >> 0x1f) {  // (from the original)
        return r0_1;
    }
    *gptr<u32>(r2) = *frame.at<u32>(8);
    r0_1 = call_00350b88(r2 + 4u, frame.at(0x34).addr(), r8_1, guest::cpu()->r[3]);  // (from the original)
    if ((r0_1 & 0x80000000u) >> 0x1f) {  // (from the original)
        return r0_1;
    }
    r0_1 = call_008266bc(r0, r1, r3, r2);
    if (s32(r0_1) >= 0) {
        r0_1 = 0u;
    }
    return r0_1;
}

}  // namespace d_00826270
GUEST_EXPORT_FRAMED(0x00826270, d_00826270::f_00826270, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_008266bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_008266bc {

struct __attribute__((packed)) Object_008266bc_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_008266bc_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_008266bc_3, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_008266bc_3, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x00825ecc, u32(u32, u32, u32, u32)> call_00825ecc;  // (from the original)
inline constexpr guest::Function<0x008260f8, u32(u32, u32, u32, u32)> call_008260f8;  // (from the original)

u32 f_008266bc(u32 r0, u32 r1, u32 r2, gptr<Object_008266bc_3> arg3) {
    guest::StackFrame frame(0x24);  // the original's stack frame
    u32 r3 = arg3.addr();
    u32 r4 = 0;
    u32 r5 = 0;
    u32 b_1 = 0;
    u32 res_1 = 0;
    u32 res_2 = 0;
    u32 b_2 = 0;
    u32 res_4 = 0;
    u32 r7 = r3;
    u32 r10 = r0;
    u32 r8 = ~0u;
    u32 r6 = arg3->word_8;
    u32 r14 = arg3->word_4;
    u32 r9 = 0x75bcd15u;  // (from the original)
    u32 r11 = r6 + (r14 << 1) - r6;
    u32 r12 = arg3->word_0 ^ r9;
    u32 r0_1 = r8 + u32(s32(r11) >> 1);
    if (s32(r0_1) <= 0) {
        goto L_82672c;
    }
    b_1 = r11 << 0x1e;  // (from the original)
    r4 = r6 - 2u;
    if (!(b_1 >> 0x1f)) {  // (from the original)
        u32 ea_1 = r4 + 2u;
        r4 = ea_1;
        r12 = u32(*gptr<u16>(ea_1)) ^ ror32(r12, 5);
    }
    res_1 = s32(r0_1) >> 1;
    r5 = res_1;
    r0 = *gptr<u16>(r4 + 2u);
    if (res_1 == 0) {
        goto L_82672c;
    }
    do {
        u32 ea_2 = r4 + 4u;
        r4 = ea_2;
        u32 r12_1 = r0 ^ ror32(r12, 5);
        r0 = *gptr<u16>(r4 + 2u);
        res_2 = r5 - 1u;
        r5 = res_2;
        r12 = u32(*gptr<u16>(ea_2)) ^ ror32(r12_1, 5);
        guest::preempt();
    } while (res_2 != 0);
L_82672c:;
    u32 r0_2 = r8 + u32(s32(r11) >> 1);
    if (!(r0_2 >> 0x1f)) {  // (from the original)
        r12 = u32(*gptr<u16>(r6 + (r0_2 << 1))) ^ ror32(r12, 5);
    }
    *frame.at<u32>(8) = r14 << 1;
    *frame.at<u32>(4) = r6;
    *frame.at<u32>(0) = r12;
    u32 r0_3 = call_00825ecc(r10, r1, r2, r7);
    if (!((r0_3 & 0x80000000u) >> 0x1f) || (r0_3 & 0x3fc00u) >> 0xa != 0x11u || (r0_3 & 0x3ffu) != 0x6fu) {  // (from the original)
        return r0_3;
    }
    r5 = *gptr<u32>(r7 + 4);
    r3 = *gptr<u32>(r7 + 8u);
    r0 = *gptr<u32>(r7) ^ r9;
    r6 = r3 + (r5 << 1) - r3;
    u32 r2_1 = r8 + u32(s32(r6) >> 1);
    if (s32(r2_1) <= 0) {
        goto L_8267dc;
    }
    b_2 = r6 << 0x1e;  // (from the original)
    r1 = r3 - 2u;
    if (!(b_2 >> 0x1f)) {  // (from the original)
        u32 ea_3 = r1 + 2u;
        r1 = ea_3;
        r0 = u32(*gptr<u16>(ea_3)) ^ ror32(r0, 5);
    }
    r12 = *gptr<u16>(r1 + 2u);
    r2 = s32(r2_1) >> 1;
    if (r2 == 0) {
        goto L_8267dc;
    }
    do {
        u32 ea_4 = r1 + 4u;
        r1 = ea_4;
        u32 r4_1 = *gptr<u16>(ea_4);
        u32 r0_4 = r12 ^ ror32(r0, 5);
        r12 = *gptr<u16>(r1 + 2u);
        res_4 = r2 - 1u;
        r2 = res_4;
        r0 = r4_1 ^ ror32(r0_4, 5);
        guest::preempt();
    } while (res_4 != 0);
L_8267dc:;
    u32 r1_1 = r8 + u32(s32(r6) >> 1);
    if (!(r1_1 >> 0x1f)) {  // (from the original)
        r0 = u32(*gptr<u16>(r3 + (r1_1 << 1))) ^ ror32(r0, 5);
    }
    *frame.at<u32>(8) = r5 << 1;
    *frame.at<u32>(0) = r0;
    *frame.at<u32>(4) = r3;
    r0_3 = call_008260f8(r10 + 0x28u, frame.at(0x20).addr(), frame.at(0xc).addr(), r7);  // (from the original)
    if (s32(r0_3) >= 0) {
        return 0xe0c04702u;  // (from the original)
    }
    if ((r0_3 & 0x3fc00u) >> 0xa == 0x11u && (r0_3 & 0x3ffu) == 0x6fu) {  // (from the original)
        r0_3 = 0xc8804471u;  // (from the original)
    } else {
        return r0_3;
    }
    return r0_3;
}

}  // namespace d_008266bc
GUEST_EXPORT_FRAMED(0x008266bc, d_008266bc::f_008266bc, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_00826c34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00826c34 {

struct __attribute__((packed)) Object_00826c34_0 {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
};
GUEST_OFFSET(Object_00826c34_0, byte_4, 0x4);  // (from the original)


u32 f_00826c34(gptr<Object_00826c34_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2_1 = arg0->byte_4;
    if (r2_1 != 2u) {
        if (r2_1 != 3u) {
            return 0u;
        }
    } else {
        if (u32(*gptr<u16>(r0 + 6u)) != r1) {
            return 0u;
        }
        return 1u;
    }
    u32 r2 = r0 + 8u;
    r0 = *gptr<u32>(r0 + 0xcu);  // (from the original)
    if (r0 == r2) {
        return 0u;
    }
    do {
        u32 r12_1 = *gptr<u16>(r0 + 8u);
        u32 zf_1 = r12_1 == r1;
        u32 cf_1 = r12_1 >= r1;
        if (!cf_1 || zf_1) {
            u32 r12_2 = *gptr<u16>((r0 + 8u) + 2u);
            zf_1 = r1 == r12_2;
            cf_1 = r1 >= r12_2;
        }
        if (!cf_1 || zf_1) {
            return 1u;
        }
        r0 = *gptr<u32>(r0 + 4u);
        guest::preempt();
    } while (r0 != r2);
    return 0u;
}

}  // namespace d_00826c34
GUEST_EXPORT(0x00826c34, d_00826c34::f_00826c34);

// f_00827060: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00827060 {

inline guest::global<u32, 0x008270c8> global_008270c8;  // (from the original)
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)
inline constexpr guest::Function<0x007e85c0, u32(u32, u32, u32, u32)> call_007e85c0;  // (from the original)

void f_00827060(u32 r0, u32 r1, u32 r2, u32 r3, float S0_unused, float S1) {
    guest::StackFrame frame(0x78);  // the original's stack frame
    float S0_1 = std::bit_cast<float>(*global_008270c8);
    *frame.at<u32>(0x68) = std::bit_cast<u32>(S0_1);  // (from the original)
    *frame.at<u32>(0x6c) = std::bit_cast<u32>(S0_1);  // (from the original)
    *frame.at<u32>(0x70) = std::bit_cast<u32>(S0_1);  // (from the original)
    *frame.at<u32>(0x74) = std::bit_cast<u32>(S0_1);  // (from the original)
    guest::cpu()->s[0] = S0_1;
    call_002fbb30(frame.at(0).addr(), r0, 0x64u, r3);  // (from the original)
    call_007e85c0(frame.at(0).addr(), frame.at(0x68).addr(), r1, r2);  // (from the original)
    float S1_2 = std::bit_cast<float>(*frame.at<u32>(0x68));  // (from the original)
    float S0_3 = std::bit_cast<float>(*frame.at<u32>(0x70)) - S1_2;  // (from the original)
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_2;
    return;
}

}  // namespace d_00827060
GUEST_EXPORT_FRAMED(0x00827060, d_00827060::f_00827060, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_008270cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_008270cc {

inline guest::global<u32, 0x00827134> global_00827134;  // (from the original)
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)
inline constexpr guest::Function<0x007e85c0, u32(u32, u32, u32, u32)> call_007e85c0;  // (from the original)

void f_008270cc(u32 r0, u32 r1, u32 r2, u32 r3, float S0_unused, float S1) {
    guest::StackFrame frame(0x78);  // the original's stack frame
    float S0_1 = std::bit_cast<float>(*global_00827134);
    *frame.at<u32>(0x68) = std::bit_cast<u32>(S0_1);  // (from the original)
    *frame.at<u32>(0x6c) = std::bit_cast<u32>(S0_1);  // (from the original)
    *frame.at<u32>(0x70) = std::bit_cast<u32>(S0_1);  // (from the original)
    *frame.at<u32>(0x74) = std::bit_cast<u32>(S0_1);  // (from the original)
    guest::cpu()->s[0] = S0_1;
    call_002fbb30(frame.at(0).addr(), r0, 0x64u, r3);  // (from the original)
    call_007e85c0(frame.at(0).addr(), frame.at(0x68).addr(), r1, r2);  // (from the original)
    float S1_2 = std::bit_cast<float>(*frame.at<u32>(0x6c));  // (from the original)
    float S0_3 = std::bit_cast<float>(*frame.at<u32>(0x74)) - S1_2;  // (from the original)
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_2;
    return;
}

}  // namespace d_008270cc
GUEST_EXPORT_FRAMED(0x008270cc, d_008270cc::f_008270cc, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0082d508: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0082d508 {

inline constexpr guest::Function<0x003548f0, u32(u32, u32, u32, u32)> call_003548f0;  // (from the original)
inline constexpr guest::Function<0x003d0d6c, u32(u32, u32, u32, u32)> call_003d0d6c;  // (from the original)
inline constexpr guest::Function<0x0072d6bc, u32(u32, u32, u32, u32)> call_0072d6bc;  // (from the original)
inline constexpr guest::Function<0x007fe104, u32(u32, u32, u32, u32)> call_007fe104;  // (from the original)

u32 f_0082d508(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x44);  // the original's stack frame
    u32 r1_4 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_6 = 0;
    u32 r0_9 = 0;
    u32 r9 = r0;
    u32 r7 = frame.at(0x30).addr();  // (from the original)
    u32 r8 = frame.at(0x20).addr();  // (from the original)
    *frame.at<u32>(0x10) = 0x8fe9d0;  // (from the original)
    call_003548f0(frame.at(0x14).addr(), 0x89a14cu, r2, r3);  // (from the original)
    *frame.at<u32>(0x20) = 0x8fe9d0;  // (from the original)
    call_003548f0(r8 + 4u, *gptr<u32>(r1 + 4u), guest::cpu()->r[2], guest::cpu()->r[3]);
    *frame.at<u32>(0x28) = 0x8fe9d0;  // (from the original)
    call_003548f0(r8 + 0xcu, *frame.at<u32>(0x14), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 r5 = *gptr<u32>(r9 + 0x10u);  // (from the original)
    u32 r0_4 = 1u;
    u32 r4 = *gptr<u32>(r5 + 4u);
    if (r4 != 0) {
        do {
            r5 = r4;
            r0_4 = call_0072d6bc(r8, r4 + 0x10u, r2, r3);  // (from the original)
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r4 = r0_4 == 0 ? *gptr<u32>(r4 + 0xcu) : *gptr<u32>(r4 + 8u);  // (from the original)
            guest::preempt();
        } while (r4 != 0);
    }
    u32 r10 = 1u;
    u32 r11 = 0u;
    if (u32(*gptr<u8>(r9 + 0x18u)) == 0) {  // (from the original)
        u32 r6 = r5;
        if (r0_4 == 0) {
            goto L_82d65c;
        }
        if (r5 == *gptr<u32>(*gptr<u32>(r9 + 0x10u) + 8u)) {  // (from the original)
            *frame.at<u32>(0) = r8;
            call_007fe104(frame.at(0x1c).addr(), r9, r4, r6);  // (from the original)
            r1_4 = guest::cpu()->r[1];
            r2_3 = guest::cpu()->r[2];
            r3_3 = guest::cpu()->r[3];
            *frame.at<u32>(0x30) = *frame.at<u32>(0x1c);  // (from the original)
            *gptr<u8>(r7 + 4u) = u8(r10);
            goto L_82d69c;
        }
        if (u32(*gptr<u8>(r6)) == 0) {
            if (*gptr<u32>(*gptr<u32>(r5 + 4u) + 4u) == r5) {
                r6 = *gptr<u32>(r5 + 0xcu);  // (from the original)
                goto L_82d65c;
            }
        }
        r6 = *gptr<u32>(r5 + 8u);
        if (r6 != 0) {
            r0 = *gptr<u32>(r6 + 0xcu);  // (from the original)
            if (r0 == 0) {
                goto L_82d65c;
            }
            do {
                r6 = r0;
                r0 = *gptr<u32>(r0 + 0xcu);  // (from the original)
                guest::preempt();
            } while (r0 != 0);
            goto L_82d65c;
        }
        r6 = *gptr<u32>(r5 + 4u);
        if (r5 != *gptr<u32>(r6 + 8u)) {
            goto L_82d65c;
        }
        do {
            r0_6 = r6;
            r6 = *gptr<u32>(r6 + 4u);
            guest::preempt();
        } while (r0_6 == *gptr<u32>(r6 + 8u));
L_82d65c:;
        u32 r0_8 = call_0072d6bc(r6 + 0x10u, r8, r2, r3);  // (from the original)
        r1_4 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
        r3_3 = guest::cpu()->r[3];
        if (r0_8 == 0) {
            *frame.at<u32>(0x30) = r6;  // (from the original)
            *gptr<u8>(r7 + 4u) = u8(r11);
            goto L_82d69c;
        }
    }
    r0_9 = frame.at(0x1c).addr();  // (from the original)
    *frame.at<u32>(0) = r8;
    call_007fe104(r0_9, r9, r4, r5);
    r1_4 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    *frame.at<u32>(0x30) = *frame.at<u32>(0x1c);  // (from the original)
    *gptr<u8>(r7 + 4u) = u8(r10);
L_82d69c:;
    u32 r4_1 = *frame.at<u32>(0x30);  // (from the original)
    u32 r0_11 = call_003d0d6c(frame.at(0x28).addr(), r1_4, r2_3, r3_3);  // (from the original)
    call_003d0d6c(r0_11 - 8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_003d0d6c(frame.at(0x10).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    return r4_1 + 0x18u;  // (from the original)
}

}  // namespace d_0082d508
GUEST_EXPORT_FRAMED(0x0082d508, d_0082d508::f_0082d508, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_0082d6d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0082d6d4 {

struct __attribute__((packed)) Local_0082d6d4_r12 {
    u32 word_0;
};
GUEST_OFFSET(Local_0082d6d4_r12, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x003619b0, u32(u32, u32, u32, u32)> call_003619b0;  // (from the original)
inline constexpr guest::Function<0x003cef28, u32(u32, u32, u32, u32)> call_003cef28;  // (from the original)
inline constexpr guest::Function<0x003cf0b8, u32(u32, u32, u32, u32)> call_003cf0b8;  // (from the original)
inline constexpr guest::Function<0x008048c4, u32(u32, u32, u32, u32)> call_008048c4;  // (from the original)

u32 f_0082d6d4(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x48);  // the original's stack frame
    u32 r6_2 = 0;
    u32 r7_1 = 0;
    u32 r6_3 = 0;
    u32 r0_8 = 0;
    u32 r10 = 0u;
    *frame.at<u32>(8) = r10;
    u32 r5 = frame.at(0x40).addr();  // (from the original)
    *frame.at<u32>(0xc) = r10;  // (from the original)
    *frame.at<u32>(0x10) = r10;  // (from the original)
    *frame.at<u32>(0x14) = r10;  // (from the original)
    *frame.at<u32>(0x18) = r10;  // (from the original)
    *frame.at<u32>(0x1c) = r10;  // (from the original)
    u32 r0_1 = call_003619b0(0xcu, r1, r2, r3);  // (from the original)
    u32 r0_2 = call_003619b0(0x18u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *gptr<u32>(r0_1 + 8u) = r0_2;
    *gptr<u32>(r0_1) = *frame.at<u32>(8);
    *gptr<u32>(r0_1 + 4) = 1;
    *frame.at<u32>(8) = r0_1;
    u32 r0_3 = *gptr<u32>(r0_1 + 8u);
    *frame.at<u32>(0x10) = r0_3;  // (from the original)
    u32 r1_2 = *frame.at<u32>(0x10);  // (from the original)
    u32 r0_4 = r0_3 + 0x18u;  // (from the original)
    *frame.at<u32>(0x14) = r0_4;  // (from the original)
    *frame.at<u32>(0x10) = r0_4;  // (from the original)
    *frame.at<u32>(0x18) = r1_2;  // (from the original)
    *gptr<u32>(r1_2) = r1_2;
    u32 r0_5 = *frame.at<u32>(0x18);  // (from the original)
    *gptr<u32>(r0_5 + 4u) = r0_5;
    *frame.at<u32>(0x20) = *gptr<u32>(r1);  // (from the original)
    u32 r0_6 = frame.at(0x20).addr() + 4u;  // (from the original)
    u32 r0_7 = call_003cef28(r0_6, frame.at(8).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
    r3 = *gptr<u32>(r0 + 0x10u);  // (from the original)
    gptr<Local_0082d6d4_r12> r12 = gptr<Local_0082d6d4_r12>(r0_7 - 4u);
    r1 = r0;
    u32 r7 = r3;
    r2 = *gptr<u32>(r3 + 4u);
    u32 r6_1 = 1u;
    if (r2 == 0) {
        goto L_82d7b4;
    } else {
        r0 = r12->word_0;
    }
    do {
        r3 = r2;
        if (r0 >= *gptr<u32>(r2 + 0x10u)) {  // (from the original)
            r2 = *gptr<u32>(r3 + 0xcu);  // (from the original)
            r6_1 = 0u;
        } else {
            r2 = *gptr<u32>(r3 + 8u);
            r6_1 = 1u;
        }
        guest::preempt();
    } while (r2 != 0);
L_82d7b4:;
    u32 r4 = 1u;
    if (u32(*gptr<u8>(r1 + 0x18u)) != 0) {  // (from the original)
        goto L_82d864;
    }
    r0 = r3;
    if (r6_1 == 0) {
        goto L_82d84c;
    }
    if (r3 == *gptr<u32>(r7 + 8u)) {
        goto L_82d864;
    }
    if (u32(*gptr<u8>(r3)) == 0) {
        if (*gptr<u32>(*gptr<u32>(r3 + 4u) + 4u) == r3) {
            r0 = *gptr<u32>(r3 + 0xcu);  // (from the original)
            goto L_82d84c;
        }
    }
    r0 = *gptr<u32>(r3 + 8u);
    if (r0 != 0) {
        u32 r6 = *gptr<u32>(r0 + 0xcu);  // (from the original)
        if (r6 == 0) {
            goto L_82d84c;
        }
        do {
            r0 = r6;
            r6 = *gptr<u32>(r6 + 0xcu);  // (from the original)
            guest::preempt();
        } while (r6 != 0);
        goto L_82d84c;
    }
    r0 = *gptr<u32>(r3 + 4u);
    if (r3 != *gptr<u32>(r0 + 8u)) {
        goto L_82d84c;
    }
    do {
        r6_2 = r0;
        r0 = *gptr<u32>(r0 + 4u);
        guest::preempt();
    } while (r6_2 == *gptr<u32>(r0 + 8u));
L_82d84c:;
    r7_1 = r12->word_0;
    r6_3 = *gptr<u32>(r0 + 0x10u);  // (from the original)
    if (r6_3 >= r7_1) {
        *frame.at<u32>(0x40) = r0;  // (from the original)
        *gptr<u8>(r5 + 4u) = u8(r10);
        goto L_82d87c;
    }
L_82d864:;
    r0_8 = frame.at(4).addr();
    *frame.at<u32>(0) = r12.addr();
    call_008048c4(r0_8, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *frame.at<u32>(0x40) = *frame.at<u32>(4);  // (from the original)
    *gptr<u8>(r5 + 4u) = u8(r4);
L_82d87c:;
    u32 r4_1 = *frame.at<u32>(0x40);  // (from the original)
    call_003cf0b8(frame.at(0x24).addr(), r1, r2, r3);  // (from the original)
    call_003cf0b8(frame.at(8).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return r4_1 + 0x14u;  // (from the original)
}

}  // namespace d_0082d6d4
GUEST_EXPORT_FRAMED(0x0082d6d4, d_0082d6d4::f_0082d6d4, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0082d8a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0082d8a0 {

struct __attribute__((packed)) Object_0082d8a0_0 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Object_0082d8a0_0, word_10, 0x10);  // (from the original)

struct __attribute__((packed)) Object_0082d8a0_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_0082d8a0_1, word_0, 0x0);  // (from the original)

struct __attribute__((packed)) Local_0082d8a0_r12 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Local_0082d8a0_r12, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0082d8a0_r12, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0082d8a0_r12, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_0082d8a0_r12, word_10, 0x10);  // (from the original)

inline constexpr guest::Function<0x0080606c, u32(u32, u32, u32, u32)> call_0080606c;  // (from the original)

u32 f_0082d8a0(gptr<Object_0082d8a0_0> arg0, gptr<Object_0082d8a0_1> arg1) {
    guest::StackFrame frame(0x1c);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    gptr<Local_0082d8a0_r12> r12 = gptr<Local_0082d8a0_r12>(0u);
    u32 r0_2 = 0;
    u32 r7_1 = 0;
    u32 r0_4 = 0;
    u32 r4 = frame.at(8).addr();
    u32 r2_1 = arg1->word_0;
    *frame.at<u32>(0x14) = 0;  // (from the original)
    *frame.at<u32>(0x10) = r2_1;  // (from the original)
    u32 r3 = arg0->word_10;
    r1 = r0;
    u32 r6 = frame.at(0x10).addr();  // (from the original)
    u32 r7 = r3;
    u32 r2 = *gptr<u32>(r3 + 4u);
    u32 r0_1 = 1u;
    if (r2 == 0) {
        goto L_82d904;
    } else {
        r12 = gptr<Local_0082d8a0_r12>(*frame.at<u32>(0x10));  // (from the original)
    }
    do {
        r3 = r2;
        if (r12.addr() >= *gptr<u32>(r2 + 0x10u)) {  // (from the original)
            r2 = *gptr<u32>(r3 + 0xcu);  // (from the original)
            r0_1 = 0u;
        } else {
            r2 = *gptr<u32>(r3 + 8u);
            r0_1 = 1u;
        }
        guest::preempt();
    } while (r2 != 0);
L_82d904:;
    u32 r5 = 1u;
    if (u32(*gptr<u8>(r1 + 0x18u)) != 0) {  // (from the original)
        goto L_82d9b0;
    }
    r12 = gptr<Local_0082d8a0_r12>(r3);
    if (r0_1 == 0) {
        goto L_82d9a0;
    }
    if (r3 == *gptr<u32>(r7 + 8u)) {
        goto L_82d9b0;
    }
    if (u32(*gptr<u8>(r3)) == 0) {
        if (*gptr<u32>(*gptr<u32>(r3 + 4u) + 4u) == r3) {
            r12 = gptr<Local_0082d8a0_r12>(*gptr<u32>(r3 + 0xcu));  // (from the original)
            goto L_82d9a0;
        }
    }
    r12 = gptr<Local_0082d8a0_r12>(*gptr<u32>(r3 + 8u));
    if (r12.addr() != 0) {
        r0 = r12->word_c;
        if (r0 == 0) {
            goto L_82d9a0;
        }
        do {
            r12 = gptr<Local_0082d8a0_r12>(r0);
            r0 = *gptr<u32>(r0 + 0xcu);  // (from the original)
            guest::preempt();
        } while (r0 != 0);
        goto L_82d9a0;
    }
    r12 = gptr<Local_0082d8a0_r12>(*gptr<u32>(r3 + 4u));
    if (r3 != r12->word_8) {
        goto L_82d9a0;
    }
    do {
        r0_2 = r12.addr();
        r12 = gptr<Local_0082d8a0_r12>(r12->word_4);
        guest::preempt();
    } while (r0_2 == r12->word_8);
L_82d9a0:;
    r7_1 = *frame.at<u32>(0x10);  // (from the original)
    if (r12->word_10 >= r7_1) {
        *frame.at<u32>(8) = r12.addr();
        *gptr<u8>(r4 + 4u) = 0;
        r0_4 = *frame.at<u32>(8) + 0x14u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_4;
    }
L_82d9b0:;
    *frame.at<u32>(0) = r6;
    call_0080606c(frame.at(4).addr(), r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *frame.at<u32>(8) = *frame.at<u32>(4);
    *gptr<u8>(r4 + 4u) = u8(r5);
    return *frame.at<u32>(8) + 0x14u;  // (from the original)
}

}  // namespace d_0082d8a0
GUEST_EXPORT_FRAMED(0x0082d8a0, d_0082d8a0::f_0082d8a0, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0082d9e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0082d9e8 {

struct __attribute__((packed)) Object_0082d9e8_0 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Object_0082d9e8_0, word_10, 0x10);  // (from the original)

struct __attribute__((packed)) Object_0082d9e8_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_0082d9e8_1, word_0, 0x0);  // (from the original)

struct __attribute__((packed)) Local_0082d9e8_r12 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Local_0082d9e8_r12, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0082d9e8_r12, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0082d9e8_r12, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_0082d9e8_r12, word_10, 0x10);  // (from the original)

inline constexpr guest::Function<0x008098d4, u32(u32, u32, u32, u32)> call_008098d4;  // (from the original)

u32 f_0082d9e8(gptr<Object_0082d9e8_0> arg0, gptr<Object_0082d9e8_1> arg1) {
    guest::StackFrame frame(0x1c);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    gptr<Local_0082d9e8_r12> r12 = gptr<Local_0082d9e8_r12>(0u);
    u32 r0_2 = 0;
    u32 r7_1 = 0;
    u32 r4 = frame.at(8).addr();
    u32 r2_1 = arg1->word_0;
    *frame.at<u32>(0x14) = 0;  // (from the original)
    *frame.at<u32>(0x10) = r2_1;  // (from the original)
    u32 r3 = arg0->word_10;
    r1 = r0;
    u32 r6 = frame.at(0x10).addr();  // (from the original)
    u32 r7 = r3;
    u32 r2 = *gptr<u32>(r3 + 4u);
    u32 r0_1 = 1u;
    if (r2 == 0) {
        goto L_82da4c;
    } else {
        r12 = gptr<Local_0082d9e8_r12>(*frame.at<u32>(0x10));  // (from the original)
    }
    do {
        r3 = r2;
        if (r12.addr() >= *gptr<u32>(r2 + 0x10u)) {  // (from the original)
            r2 = *gptr<u32>(r3 + 0xcu);  // (from the original)
            r0_1 = 0u;
        } else {
            r2 = *gptr<u32>(r3 + 8u);
            r0_1 = 1u;
        }
        guest::preempt();
    } while (r2 != 0);
L_82da4c:;
    u32 r5 = 1u;
    if (u32(*gptr<u8>(r1 + 0x18u)) != 0) {  // (from the original)
        goto L_82daf8;
    }
    r12 = gptr<Local_0082d9e8_r12>(r3);
    if (r0_1 == 0) {
        goto L_82dae8;
    }
    if (r3 == *gptr<u32>(r7 + 8u)) {
        goto L_82daf8;
    }
    if (u32(*gptr<u8>(r3)) == 0) {
        if (*gptr<u32>(*gptr<u32>(r3 + 4u) + 4u) == r3) {
            r12 = gptr<Local_0082d9e8_r12>(*gptr<u32>(r3 + 0xcu));  // (from the original)
            goto L_82dae8;
        }
    }
    r12 = gptr<Local_0082d9e8_r12>(*gptr<u32>(r3 + 8u));
    if (r12.addr() != 0) {
        r0 = r12->word_c;
        if (r0 == 0) {
            goto L_82dae8;
        }
        do {
            r12 = gptr<Local_0082d9e8_r12>(r0);
            r0 = *gptr<u32>(r0 + 0xcu);  // (from the original)
            guest::preempt();
        } while (r0 != 0);
        goto L_82dae8;
    }
    r12 = gptr<Local_0082d9e8_r12>(*gptr<u32>(r3 + 4u));
    if (r3 != r12->word_8) {
        goto L_82dae8;
    }
    do {
        r0_2 = r12.addr();
        r12 = gptr<Local_0082d9e8_r12>(r12->word_4);
        guest::preempt();
    } while (r0_2 == r12->word_8);
L_82dae8:;
    r7_1 = *frame.at<u32>(0x10);  // (from the original)
    if (r12->word_10 >= r7_1) {
        *frame.at<u32>(8) = r12.addr();
        *gptr<u8>(r4 + 4u) = 0;
        return *frame.at<u32>(8) + 0x14u;  // (from the original)
    }
L_82daf8:;
    *frame.at<u32>(0) = r6;
    call_008098d4(frame.at(4).addr(), r1, r2, r3);
    *frame.at<u32>(8) = *frame.at<u32>(4);
    *gptr<u8>(r4 + 4u) = u8(r5);
    return *frame.at<u32>(8) + 0x14u;  // (from the original)
}

}  // namespace d_0082d9e8
GUEST_EXPORT_FRAMED(0x0082d9e8, d_0082d9e8::f_0082d9e8, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0082db30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0082db30 {

struct __attribute__((packed)) Object_0082db30_0 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Object_0082db30_0, word_10, 0x10);  // (from the original)

struct __attribute__((packed)) Object_0082db30_1 {
    u16 half_0;
};
GUEST_OFFSET(Object_0082db30_1, half_0, 0x0);  // (from the original)

struct __attribute__((packed)) Local_0082db30_r12 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u16 half_10;
};
GUEST_OFFSET(Local_0082db30_r12, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0082db30_r12, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0082db30_r12, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_0082db30_r12, half_10, 0x10);  // (from the original)

inline constexpr guest::Function<0x0080aac4, u32(u32, u32, u32, u32)> call_0080aac4;  // (from the original)

u32 f_0082db30(gptr<Object_0082db30_0> arg0, gptr<Object_0082db30_1> arg1) {
    guest::StackFrame frame(0x1c);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    gptr<Local_0082db30_r12> r12 = gptr<Local_0082db30_r12>(0u);
    u32 r0_2 = 0;
    u32 r7_1 = 0;
    u32 r6 = frame.at(0x10).addr();  // (from the original)
    u32 r2_1 = arg1->half_0;
    *frame.at<u32>(0x14) = 0;  // (from the original)
    *frame.at<u16>(0x10) = u16(r2_1);  // (from the original)
    u32 r3 = arg0->word_10;
    r1 = r0;
    u32 r4 = frame.at(8).addr();
    u32 r7 = r3;
    u32 r2 = *gptr<u32>(r3 + 4u);
    u32 r0_1 = 1u;
    if (r2 == 0) {
        goto L_82db94;
    } else {
        r12 = gptr<Local_0082db30_r12>(u32(*gptr<u16>(r6)));
    }
    do {
        r3 = r2;
        if (r12.addr() >= u32(*gptr<u16>(r2 + 0x10u))) {  // (from the original)
            r2 = *gptr<u32>(r3 + 0xcu);  // (from the original)
            r0_1 = 0u;
        } else {
            r2 = *gptr<u32>(r3 + 8u);
            r0_1 = 1u;
        }
        guest::preempt();
    } while (r2 != 0);
L_82db94:;
    u32 r5 = 1u;
    if (u32(*gptr<u8>(r1 + 0x18u)) != 0) {  // (from the original)
        goto L_82dc40;
    }
    r12 = gptr<Local_0082db30_r12>(r3);
    if (r0_1 == 0) {
        goto L_82dc30;
    }
    if (r3 == *gptr<u32>(r7 + 8u)) {
        goto L_82dc40;
    }
    if (u32(*gptr<u8>(r3)) == 0) {
        if (*gptr<u32>(*gptr<u32>(r3 + 4u) + 4u) == r3) {
            r12 = gptr<Local_0082db30_r12>(*gptr<u32>(r3 + 0xcu));  // (from the original)
            goto L_82dc30;
        }
    }
    r12 = gptr<Local_0082db30_r12>(*gptr<u32>(r3 + 8u));
    if (r12.addr() != 0) {
        r0 = r12->word_c;
        if (r0 == 0) {
            goto L_82dc30;
        }
        do {
            r12 = gptr<Local_0082db30_r12>(r0);
            r0 = *gptr<u32>(r0 + 0xcu);  // (from the original)
            guest::preempt();
        } while (r0 != 0);
        goto L_82dc30;
    }
    r12 = gptr<Local_0082db30_r12>(*gptr<u32>(r3 + 4u));
    if (r3 != r12->word_8) {
        goto L_82dc30;
    }
    do {
        r0_2 = r12.addr();
        r12 = gptr<Local_0082db30_r12>(r12->word_4);
        guest::preempt();
    } while (r0_2 == r12->word_8);
L_82dc30:;
    r7_1 = *gptr<u16>(r6);
    if (u32(r12->half_10) >= r7_1) {
        *frame.at<u32>(8) = r12.addr();
        *gptr<u8>(r4 + 4u) = 0;
        return *frame.at<u32>(8) + 0x14u;  // (from the original)
    }
L_82dc40:;
    *frame.at<u32>(0) = r6;
    call_0080aac4(frame.at(4).addr(), r1, r2, r3);
    *frame.at<u32>(8) = *frame.at<u32>(4);
    *gptr<u8>(r4 + 4u) = u8(r5);
    return *frame.at<u32>(8) + 0x14u;  // (from the original)
}

}  // namespace d_0082db30
GUEST_EXPORT_FRAMED(0x0082db30, d_0082db30::f_0082db30, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0082dc78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0082dc78 {

struct __attribute__((packed)) Object_0082dc78_0 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Object_0082dc78_0, word_10, 0x10);  // (from the original)

struct __attribute__((packed)) Object_0082dc78_1 {
    u16 half_0;
};
GUEST_OFFSET(Object_0082dc78_1, half_0, 0x0);  // (from the original)

struct __attribute__((packed)) Local_0082dc78_r12 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u16 half_10;
};
GUEST_OFFSET(Local_0082dc78_r12, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0082dc78_r12, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0082dc78_r12, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_0082dc78_r12, half_10, 0x10);  // (from the original)

inline constexpr guest::Function<0x0080c000, u32(u32, u32, u32, u32)> call_0080c000;  // (from the original)

u32 f_0082dc78(gptr<Object_0082dc78_0> arg0, gptr<Object_0082dc78_1> arg1) {
    guest::StackFrame frame(0x1c);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    gptr<Local_0082dc78_r12> r12 = gptr<Local_0082dc78_r12>(0u);
    u32 r0_2 = 0;
    u32 r7_1 = 0;
    u32 r0_4 = 0;
    u32 r6 = frame.at(0x10).addr();  // (from the original)
    u32 r2_1 = arg1->half_0;
    *frame.at<u32>(0x14) = 0;  // (from the original)
    *frame.at<u16>(0x10) = u16(r2_1);  // (from the original)
    u32 r3 = arg0->word_10;
    r1 = r0;
    u32 r4 = frame.at(8).addr();
    u32 r7 = r3;
    u32 r2 = *gptr<u32>(r3 + 4u);
    u32 r0_1 = 1u;
    if (r2 == 0) {
        goto L_82dcdc;
    } else {
        r12 = gptr<Local_0082dc78_r12>(u32(*gptr<u16>(r6)));
    }
    do {
        r3 = r2;
        if (r12.addr() >= u32(*gptr<u16>(r2 + 0x10u))) {  // (from the original)
            r2 = *gptr<u32>(r3 + 0xcu);  // (from the original)
            r0_1 = 0u;
        } else {
            r2 = *gptr<u32>(r3 + 8u);
            r0_1 = 1u;
        }
        guest::preempt();
    } while (r2 != 0);
L_82dcdc:;
    u32 r5 = 1u;
    if (u32(*gptr<u8>(r1 + 0x18u)) != 0) {  // (from the original)
        goto L_82dd88;
    }
    r12 = gptr<Local_0082dc78_r12>(r3);
    if (r0_1 == 0) {
        goto L_82dd78;
    }
    if (r3 == *gptr<u32>(r7 + 8u)) {
        goto L_82dd88;
    }
    if (u32(*gptr<u8>(r3)) == 0) {
        if (*gptr<u32>(*gptr<u32>(r3 + 4u) + 4u) == r3) {
            r12 = gptr<Local_0082dc78_r12>(*gptr<u32>(r3 + 0xcu));  // (from the original)
            goto L_82dd78;
        }
    }
    r12 = gptr<Local_0082dc78_r12>(*gptr<u32>(r3 + 8u));
    if (r12.addr() != 0) {
        r0 = r12->word_c;
        if (r0 == 0) {
            goto L_82dd78;
        }
        do {
            r12 = gptr<Local_0082dc78_r12>(r0);
            r0 = *gptr<u32>(r0 + 0xcu);  // (from the original)
            guest::preempt();
        } while (r0 != 0);
        goto L_82dd78;
    }
    r12 = gptr<Local_0082dc78_r12>(*gptr<u32>(r3 + 4u));
    if (r3 != r12->word_8) {
        goto L_82dd78;
    }
    do {
        r0_2 = r12.addr();
        r12 = gptr<Local_0082dc78_r12>(r12->word_4);
        guest::preempt();
    } while (r0_2 == r12->word_8);
L_82dd78:;
    r7_1 = *gptr<u16>(r6);
    if (u32(r12->half_10) >= r7_1) {
        *frame.at<u32>(8) = r12.addr();
        *gptr<u8>(r4 + 4u) = 0;
        r0_4 = *frame.at<u32>(8) + 0x14u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_4;
    }
L_82dd88:;
    *frame.at<u32>(0) = r6;
    call_0080c000(frame.at(4).addr(), r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *frame.at<u32>(8) = *frame.at<u32>(4);
    *gptr<u8>(r4 + 4u) = u8(r5);
    return *frame.at<u32>(8) + 0x14u;  // (from the original)
}

}  // namespace d_0082dc78
GUEST_EXPORT_FRAMED(0x0082dc78, d_0082dc78::f_0082dc78, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0082ddc0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0082ddc0 {

struct __attribute__((packed)) Object_0082ddc0_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0082ddc0_0, word_0, 0x0);  // (from the original)

struct __attribute__((packed)) Local_0082ddc0_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0082ddc0_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0082ddc0_ea_3, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x003619b0, u32(u32, u32, u32, u32)> call_003619b0;  // (from the original)

void f_0082ddc0(gptr<Object_0082ddc0_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_1 = arg0->word_0;
    u32 r4_1 = 1u;
    if (r1 != 0) {
        goto L_82ddfc;
    }
    if (r0_1 == 0) {
        r4_1 = 0x20u;  // (from the original)
        goto L_82ddfc;
    }
    r0_2 = *gptr<u32>(r0_1 + 4u);
    r1 = r0_2 + (r0_2 >> 1);
    r4_1 = r1 + (r0_2 >> 3);
    r0_3 = r0_2 + 0x20u;  // (from the original)
    if (r0_3 > r4_1) {
        r4_1 = r0_3;
    }
L_82ddfc:;
    u32 r0_4 = call_003619b0(0xcu, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_6 = call_003619b0((r4_1 << 3) - r4_1 << 4, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r0_4 + 8u) = r0_6;
    *gptr<u32>(r0_4) = *gptr<u32>(r0);
    *gptr<u32>(r0_4 + 4) = r4_1;
    *gptr<u32>(r0) = r0_4;
    u32 r0_8 = *gptr<u32>(r0_4 + 8u);
    u32 r1_1 = r0_8 + ((r4_1 << 3) - r4_1 << 4);
    gptr<Local_0082ddc0_ea_3> ea_3 = gptr<Local_0082ddc0_ea_3>(r0 + 8u);
    ea_3->word_0 = r0_8;
    ea_3->word_4 = r1_1;
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_0082ddc0
GUEST_EXPORT_FRAMED(0x0082ddc0, d_0082ddc0::f_0082ddc0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0082e454: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0082e454 {

struct __attribute__((packed)) Object_0082e454_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0082e454_0, word_0, 0x0);  // (from the original)

struct __attribute__((packed)) Local_0082e454_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0082e454_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0082e454_ea_3, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x003619b0, u32(u32, u32, u32, u32)> call_003619b0;  // (from the original)

void f_0082e454(gptr<Object_0082e454_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_1 = arg0->word_0;
    u32 r4_1 = 1u;
    if (r1 != 0) {
        goto L_82e490;
    }
    if (r0_1 == 0) {
        r4_1 = 0x20u;  // (from the original)
        goto L_82e490;
    }
    r0_2 = *gptr<u32>(r0_1 + 4u);
    r1 = r0_2 + (r0_2 >> 1);
    r4_1 = r1 + (r0_2 >> 3);
    r0_3 = r0_2 + 0x20u;  // (from the original)
    if (r0_3 > r4_1) {
        r4_1 = r0_3;
    }
L_82e490:;
    u32 r0_4 = call_003619b0(0xcu, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_6 = call_003619b0(r4_1 << 4, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r0_4 + 8u) = r0_6;
    *gptr<u32>(r0_4) = *gptr<u32>(r0);
    *gptr<u32>(r0_4 + 4) = r4_1;
    *gptr<u32>(r0) = r0_4;
    u32 r0_8 = *gptr<u32>(r0_4 + 8u);
    u32 r1_1 = r0_8 + (r4_1 << 4);
    gptr<Local_0082e454_ea_3> ea_3 = gptr<Local_0082e454_ea_3>(r0 + 8u);
    ea_3->word_0 = r0_8;
    ea_3->word_4 = r1_1;
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_0082e454
GUEST_EXPORT_FRAMED(0x0082e454, d_0082e454::f_0082e454, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0082f1e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0082f1e0 {

struct __attribute__((packed)) Object_0082f1e0_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0082f1e0_0, word_0, 0x0);  // (from the original)

struct __attribute__((packed)) Local_0082f1e0_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0082f1e0_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0082f1e0_ea_3, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x003619b0, u32(u32, u32, u32, u32)> call_003619b0;  // (from the original)

void f_0082f1e0(gptr<Object_0082f1e0_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_1 = arg0->word_0;
    u32 r4_1 = 1u;
    if (r1 != 0) {
        goto L_82f21c;
    }
    if (r0_1 == 0) {
        r4_1 = 0x20u;  // (from the original)
        goto L_82f21c;
    }
    r0_2 = *gptr<u32>(r0_1 + 4u);
    r1 = r0_2 + (r0_2 >> 1);
    r4_1 = r1 + (r0_2 >> 3);
    r0_3 = r0_2 + 0x20u;  // (from the original)
    if (r0_3 > r4_1) {
        r4_1 = r0_3;
    }
L_82f21c:;
    u32 r0_4 = call_003619b0(0xcu, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_6 = call_003619b0(r4_1 + (r4_1 << 2) << 5, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r0_4 + 8u) = r0_6;
    *gptr<u32>(r0_4) = *gptr<u32>(r0);
    *gptr<u32>(r0_4 + 4) = r4_1;
    *gptr<u32>(r0) = r0_4;
    u32 r0_8 = *gptr<u32>(r0_4 + 8u);
    gptr<Local_0082f1e0_ea_3> ea_3 = gptr<Local_0082f1e0_ea_3>(r0 + 8u);
    ea_3->word_0 = r0_8;
    ea_3->word_4 = r0_8 + (r4_1 + (r4_1 << 2) << 5);
    return;
}

}  // namespace d_0082f1e0
GUEST_EXPORT_FRAMED(0x0082f1e0, d_0082f1e0::f_0082f1e0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0082f424: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0082f424 {

struct __attribute__((packed)) Object_0082f424_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0082f424_0, word_0, 0x0);  // (from the original)

struct __attribute__((packed)) Local_0082f424_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0082f424_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0082f424_ea_3, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x003619b0, u32(u32, u32, u32, u32)> call_003619b0;  // (from the original)

void f_0082f424(gptr<Object_0082f424_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_1 = arg0->word_0;
    u32 r4_1 = 1u;
    if (r1 != 0) {
        goto L_82f460;
    }
    if (r0_1 == 0) {
        r4_1 = 0x20u;  // (from the original)
        goto L_82f460;
    }
    r0_2 = *gptr<u32>(r0_1 + 4u);
    r1 = r0_2 + (r0_2 >> 1);
    r4_1 = r1 + (r0_2 >> 3);
    r0_3 = r0_2 + 0x20u;  // (from the original)
    if (r0_3 > r4_1) {
        r4_1 = r0_3;
    }
L_82f460:;
    u32 r0_4 = call_003619b0(0xcu, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_6 = call_003619b0(r4_1 + (r4_1 << 1) << 2, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r0_4 + 8u) = r0_6;
    *gptr<u32>(r0_4) = *gptr<u32>(r0);
    *gptr<u32>(r0_4 + 4) = r4_1;
    *gptr<u32>(r0) = r0_4;
    u32 r0_8 = *gptr<u32>(r0_4 + 8u);
    u32 r1_1 = r0_8 + (r4_1 + (r4_1 << 1) << 2);
    gptr<Local_0082f424_ea_3> ea_3 = gptr<Local_0082f424_ea_3>(r0 + 8u);
    ea_3->word_0 = r0_8;
    ea_3->word_4 = r1_1;
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_0082f424
GUEST_EXPORT_FRAMED(0x0082f424, d_0082f424::f_0082f424, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0082f49c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0082f49c {

struct __attribute__((packed)) Object_0082f49c_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u8 unknown_8[0x8];  // (not used here)
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Object_0082f49c_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0082f49c_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0082f49c_0, word_14, 0x14);  // (from the original)

struct __attribute__((packed)) Local_0082f49c_r2_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0082f49c_r2_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0082f49c_r2_1, word_4, 0x4);  // (from the original)


void f_0082f49c(gptr<Object_0082f49c_0> arg0, float S0) {
    u32 r3 = arg0->word_10;
    u32 r1 = *gptr<u32>(r3);
    if (r1 == r3) {
        guest::cpu()->r[1] = r1;
        return;
    }
    do {
        u32 r12_1 = arg0->word_10;
        gptr<Local_0082f49c_r2_1> r2_1 = gptr<Local_0082f49c_r2_1>(r1);
        if (r1 == r12_1) {
            r1 = r12_1;
            goto L_82f4f4;
        }
        S0 = std::bit_cast<float>(r2_1->word_0);
        r1 = r2_1->word_0;
        *gptr<u32>(r2_1->word_4) = std::bit_cast<u32>(S0);
        *gptr<u32>(r2_1->word_0 + 4u) = r2_1->word_4;
        arg0->word_14 = arg0->word_14 - 1u;
        r2_1->word_0 = arg0->word_4;
        arg0->word_4 = r2_1.addr();
L_82f4f4:;
        guest::preempt();
    } while (r1 != r3);
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return;
}

}  // namespace d_0082f49c
GUEST_EXPORT_FRAMED(0x0082f49c, d_0082f49c::f_0082f49c, 0x10);  // pushes {r4} first, as the original

// f_0082f504: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0082f504 {

struct __attribute__((packed)) Object_0082f504_0 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Object_0082f504_0, word_10, 0x10);  // (from the original)

inline constexpr guest::Function<0x00361988, u32(u32, u32)> call_00361988;  // (from the original)
inline constexpr guest::Function<0x0082f49c, u32(u32, u32, u32, u32)> call_0082f49c;  // (from the original)

u32 f_0082f504(gptr<Object_0082f504_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r4 = r0;
    if (arg0->word_10 != 0) {
        call_0082f49c(r4, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r0_1 = *gptr<u32>(r4 + 0x10u);  // (from the original)
        r1 = *gptr<u32>(r4 + 4u);
        *gptr<u32>(r0_1) = r1;
        *gptr<u32>(r4 + 4u) = r0_1;
        r0 = *gptr<u32>(r4);
        if (r0 != 0) {
            do {
                *gptr<u32>(r4) = *gptr<u32>(r0);
                call_00361988(*gptr<u32>(r0 + 8u), r1);
                call_00361988(r0, guest::cpu()->r[1]);
                r1 = guest::cpu()->r[1];
                r0 = *gptr<u32>(r4);
                guest::preempt();
            } while (r0 != 0);
        }
        *gptr<u32>(r4 + 4u) = 0;
        *gptr<u32>(r4 + 8u) = 0;
        *gptr<u32>(r4 + 0xcu) = 0;  // (from the original)
    }
    guest::cpu()->r[1] = r1;
    return r4;
}

}  // namespace d_0082f504
GUEST_EXPORT_FRAMED(0x0082f504, d_0082f504::f_0082f504, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original
