// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_001f4e30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001f4e30 {

inline constexpr guest::Function<0x0057ba2c, u32(u32)> call_0057ba2c;  // (from the original)

u32 f_001f4e30(u32 r0) {
    u32 r0_1 = call_0057ba2c(r0);
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    return r0_1;
}

}  // namespace d_001f4e30
GUEST_EXPORT_FRAMED(0x001f4e30, d_001f4e30::f_001f4e30, 0x4010);  // pushes {r4, lr} first, as the original

// f_001f4fec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001f4fec {

struct __attribute__((packed)) Local_001f4fec_r3_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001f4fec_r3_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001f4fec_r3_1, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x001f5090> global_001f5090;  // (from the original)
inline guest::global<u32, 0x001f5094> global_001f5094;  // (from the original)
inline constexpr guest::Function<0x0057ba68, u32(u32, u32, u32, u32)> call_0057ba68;  // (from the original)

u32 f_001f4fec(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    u32 r0_1 = call_0057ba68(r0, r1, r2, r3);
    u32 r1_1 = *gptr<u32>(r1);
    float S0_1 = std::bit_cast<float>(*global_001f5090);
    *gptr<u32>(r0_1) = r1_1;
    float S1_1 = std::bit_cast<float>(*global_001f5094);
    gptr<Local_001f4fec_r3_1> r3_1 = gptr<Local_001f4fec_r3_1>(r0_1 + 0x90u);  // (from the original)
    *gptr<u32>(r0_1 + *gptr<u32>(r1_1 - 0xcu)) = *gptr<u32>(r1 + 4u);  // (from the original)
    *gptr<u32>(r0_1 + 0x48u) = std::bit_cast<u32>(S0_1);  // (from the original)
    *gptr<u32>(r0_1 + 0x4cu) = std::bit_cast<u32>(S0_1);  // (from the original)
    *gptr<u32>(r0_1 + 0x50u) = std::bit_cast<u32>(S0_1);  // (from the original)
    *gptr<u32>(r0_1 + 0x60u) = std::bit_cast<u32>(S0_1);  // (from the original)
    *gptr<u32>(r0_1 + 0x64u) = std::bit_cast<u32>(S0_1);  // (from the original)
    *gptr<u32>(r0_1 + 0x68u) = std::bit_cast<u32>(S0_1);  // (from the original)
    *gptr<u32>(r0_1 + 0x78u) = std::bit_cast<u32>(S0_1);  // (from the original)
    *gptr<u32>(r0_1 + 0x7cu) = std::bit_cast<u32>(S0_1);  // (from the original)
    *gptr<u32>(r0_1 + 0x80u) = std::bit_cast<u32>(S0_1);  // (from the original)
    *gptr<u16>(r0_1 + 0x84u) = 0;  // (from the original)
    *gptr<u16>(r0_1 + 0x86u) = 0;  // (from the original)
    *gptr<u16>(r0_1 + 0x88u) = 0;  // (from the original)
    *gptr<u16>(r0_1 + 0x8au) = 0;  // (from the original)
    *gptr<u32>(r0_1 + 0x8cu) = std::bit_cast<u32>(S0_1);  // (from the original)
    r3_1->word_0 = std::bit_cast<u32>(S0_1);
    r3_1->word_4 = std::bit_cast<u32>(S1_1);
    *gptr<u16>(r0_1 + 0x98u) = 0;  // (from the original)
    *gptr<u32>(r0_1 + 0x9cu) = std::bit_cast<u32>(S0_1);  // (from the original)
    *gptr<u32>(r0_1 + 0xa0u) = std::bit_cast<u32>(S0_1);  // (from the original)
    *gptr<u32>(r0_1 + 0xa4u) = std::bit_cast<u32>(S0_1);  // (from the original)
    *gptr<u8>(r0_1 + 0xa8u) = 1;  // (from the original)
    *gptr<u32>(r0_1 + 0xbcu) = std::bit_cast<u32>(S0_1);  // (from the original)
    *gptr<u32>(r0_1 + 0xc0u) = std::bit_cast<u32>(S0_1);  // (from the original)
    *gptr<u16>(r0_1 + 0xc4u) = 0;  // (from the original)
    *gptr<u8>(r0_1 + 0xc6u) = 0;  // (from the original)
    *gptr<u8>(r0_1 + 0xc7u) = 1;  // (from the original)
    *gptr<u8>(r0_1 + 0xc8u) = 0;  // (from the original)
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return r0_1;
}

}  // namespace d_001f4fec
GUEST_EXPORT_FRAMED(0x001f4fec, d_001f4fec::f_001f4fec, 0x4010);  // pushes {r4, lr} first, as the original

// f_001f581c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001f581c {

inline constexpr guest::Function<0x002d58b0, u32(u32, u32, u32)> call_002d58b0;  // (from the original)
inline constexpr guest::Function<0x002d595c, u32(u32, u32, u32)> call_002d595c;  // (from the original)
inline constexpr guest::Function<0x002e8cc8, u32(u32, u32, u32, u32)> call_002e8cc8;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32)> call_00305f44;  // (from the original)
inline constexpr guest::Function<0x00615b2c, u32(u32, u32, u32)> call_00615b2c;  // (from the original)
inline constexpr guest::Function<0x00615e8c, u32(u32, u32, u32, u32)> call_00615e8c;  // (from the original)
inline constexpr guest::Function<0x00700558, u32(u32, u32, u32)> call_00700558;  // (from the original)
inline constexpr guest::Function<0x00701150, u32(u32, u32, u32, u32)> call_00701150;  // (from the original)

void f_001f581c(gptr<AcObjectShow> arg0, u32 r1_unused, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r1_1 = arg0->byte_200;
    u32 r0_1 = arg0->word_204;
    if (r1_1 != 0) {
        u32 r0_2 = call_00701150(r0_1, r1_1, r2, guest::cpu()->r[3]);
        call_00700558(r0_2, arg0->word_204, guest::cpu()->r[2]);
    } else {
        u32 r0_3 = call_00615e8c(r0_1, r1_1, r2, guest::cpu()->r[3]);
        call_00615b2c(r0_3, arg0->word_204, guest::cpu()->r[2]);
    }
    u32 r0_5 = call_002d58b0(arg0.addr() + 0x260u, arg0.addr() + 0x14u, uxth(*gptr<u8>(arg0.addr() + 0x200u) == 0 ? 0x53u : arg0->word_204));  // (from the original)
    u32 r0_6 = call_00305f44(r0_5, guest::cpu()->r[1], guest::cpu()->r[2]);
    call_002d595c(arg0.addr() + 0x260u, r0_6 == arg0->byte_255 ? 1u : 0u, guest::cpu()->r[2]);  // (from the original)
    call_002fc8e8(arg0.addr() + 0x20cu, arg0.addr() + 0x208u, guest::cpu()->r[2]);  // (from the original)
    u32 r1_8 = 0x350u;  // (from the original)
    *gptr<u16>(r1_8 + arg0.addr()) = 0;
    if (arg0->byte_248 == 4u) {
        u32 r0_10 = call_002fcb34(arg0.addr() + 0x20cu, r1_8, guest::cpu()->r[2]);  // (from the original)
        r1_8 = guest::cpu()->r[1];
        if (r0_10 == 0x27u || r0_10 == 0x28u) {  // (from the original)
            frame.release();
            call_002e8cc8(arg0.addr() + 0x260u, 0x1000613u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            return;  // (from the original)
        }
    }
    guest::cpu()->r[1] = r1_8;
}

}  // namespace d_001f581c
GUEST_EXPORT(0x001f581c, d_001f581c::f_001f581c);

// f_001f6cc8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001f6cc8 {

inline constexpr guest::Function<0x001f581c, u32(u32, u32, u32, u32)> call_001f581c;  // (from the original)
inline constexpr guest::Function<0x002d59a4, u32(u32, u32, u32, u32)> call_002d59a4;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x002fe574, u32(u32, u32, u32, u32)> call_002fe574;  // (from the original)

void f_001f6cc8(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r1_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r3_1 = 0;
    u32 r0_7 = 0;
    u32 r3_2 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r3_3 = 0;
    u32 r0_10 = 0;
    u32 ea_1 = 0;
    u32 r3_4 = 0;
    *frame.at<u32>(0) = r3;
    u32 r4 = r0;
    u32 r5 = r1;
    u32 r0_2 = call_002fcaf4(r0 + 0x20cu, r1, guest::cpu()->r[2], r3);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        u32 r0_3 = *gptr<u8>(r4 + 0x24au);  // (from the original)
        u32 r7 = 0x7ffeu;  // (from the original)
        u32 r6 = 0u;
        u32 zf_1 = r0_3 == 1u || r0_3 == 2u;
        u32 r0_4 = *gptr<u8>(r4 + 0x249u);  // (from the original)
        if (zf_1) {
            goto L_1f6d6c;
        }
        if (r0_4 != 1u && r0_4 != 2u) {
            return;
        }
L_1f6d0c:;
        r1_2 = r4 + 0x208u;  // (from the original)
        r0_5 = r4 + 0x20cu;  // (from the original)
        r0_6 = call_002fe574(r0_5, r1_2, guest::cpu()->r[2], r3);
        r1_1 = guest::cpu()->r[1];
        r3_1 = guest::cpu()->r[3];
        if (r0_6 != 0) {
            return;
        }
        r0_7 = r4 + 0x260u;  // (from the original)
        *gptr<u8>(r4 + 0x254u) = u8(r6);  // (from the original)
        call_002d59a4(r0_7, r1_1, guest::cpu()->r[2], r3_1);
        r3_2 = guest::cpu()->r[3];
        r0_8 = frame.at(0).addr();
        r0_9 = call_002fcbb0(r0_8, r7, guest::cpu()->r[2], r3_2);
        r3_3 = guest::cpu()->r[3];
        r0_10 = r4 + 0x20cu;  // (from the original)
        call_002fc8e8(r0_10, r0_9, guest::cpu()->r[2], r3_3);
        r1_1 = guest::cpu()->r[1];
        if (r5 == 0) {
            return;
        }
        ea_1 = frame.at(0).addr();
        r3_4 = *gptr<u32>(ea_1);
        frame.release();
        call_001f581c(r4, r1_1, guest::cpu()->r[2], r3_4);
        return;
L_1f6d6c:;
        if (r0_4 == 1u || r0_4 == 2u) {
            guest::preempt();
            goto L_1f6d0c;
        }
        *gptr<u8>(r4 + 0x254u) = u8(r6);  // (from the original)
        call_002d59a4(r4 + 0x260u, r1_1, guest::cpu()->r[2], r3);  // (from the original)
        u32 r3_5 = guest::cpu()->r[3];
        u32 r0_13 = call_002fcbb0(frame.at(0).addr(), r7, guest::cpu()->r[2], r3_5);
        call_002fc8e8(r4 + 0x20cu, r0_13, guest::cpu()->r[2], r3_5);  // (from the original)
        r1_1 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_001f6cc8
GUEST_EXPORT(0x001f6cc8, d_001f6cc8::f_001f6cc8);

// f_001f815c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001f815c {

inline guest::global<u32, 0x00986a10> global_00986a10;  // (from the original)
inline guest::global<u32, 0x00986a14> global_00986a14;  // (from the original)
inline guest::global<u8, 0x00986a18> global_00986a18;  // (from the original)
inline guest::global<u32, 0x00986a1c> global_00986a1c;  // (from the original)
inline guest::global<u32, 0x00986a20> global_00986a20;  // (from the original)
inline guest::global<u32, 0x00986a24> global_00986a24;  // (from the original)
inline guest::global<u8, 0x00986a28> global_00986a28;  // (from the original)
inline guest::global<u32, 0x00986a2c> global_00986a2c;  // (from the original)
inline guest::global<u32, 0x00986a30> global_00986a30;  // (from the original)
inline guest::global<u32, 0x00986a34> global_00986a34;  // (from the original)
inline guest::global<u8, 0x00986a38> global_00986a38;  // (from the original)
inline guest::global<u32, 0x00986a3c> global_00986a3c;  // (from the original)
inline guest::global<u32, 0x00986a40> global_00986a40;  // (from the original)
inline guest::global<u32, 0x00986a44> global_00986a44;  // (from the original)
inline guest::global<u8, 0x00986a48> global_00986a48;  // (from the original)
inline guest::global<u32, 0x00986a4c> global_00986a4c;  // (from the original)
inline guest::global<u32, 0x00986a50> global_00986a50;  // (from the original)
inline guest::global<u32, 0x00986a54> global_00986a54;  // (from the original)
inline guest::global<u8, 0x00986a58> global_00986a58;  // (from the original)
inline guest::global<u32, 0x00986a5c> global_00986a5c;  // (from the original)

void f_001f815c(gptr<AutoCampBook> arg0) {
    arg0->word_0 = 0x8ecf74;  // (from the original)
    u32 r12_1 = ~0u;
    *global_00986a10 = 0;
    *global_00986a14 = 0;
    *global_00986a18 = 0xfc;  // (from the original)
    *global_00986a20 = 0;
    *global_00986a1c = r12_1;
    *global_00986a24 = 0;
    *global_00986a28 = 0xfc;  // (from the original)
    *global_00986a30 = 0;
    *global_00986a2c = r12_1;
    *global_00986a34 = 0;
    *global_00986a38 = 0xfc;  // (from the original)
    *global_00986a40 = 0;
    *global_00986a3c = r12_1;
    *global_00986a44 = 0;
    *global_00986a48 = 0xfc;  // (from the original)
    *global_00986a50 = 0;
    *global_00986a4c = r12_1;
    *global_00986a54 = 0;
    *global_00986a58 = 0xfc;  // (from the original)
    *global_00986a5c = r12_1;
}

}  // namespace d_001f815c
GUEST_EXPORT(0x001f815c, d_001f815c::f_001f815c);

// f_001f8798: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001f8798 {

struct __attribute__((packed)) Local_001f8798_r0_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001f8798_r0_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001f8798_r0_2, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_001f8798_r3_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_001f8798_r3_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001f8798_r3_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_001f8798_r3_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_001f8798_r3_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_001f8798_r3_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_001f8798_r3_1, word_14, 0x14);  // (from the original)

struct __attribute__((packed)) Local_001f8798_r3_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_001f8798_r3_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001f8798_r3_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_001f8798_r3_2, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_001f8798_r3_2, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_001f8798_r3_2, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_001f8798_r3_2, word_14, 0x14);  // (from the original)

inline guest::global<u32, 0x001f8888> global_001f8888;  // (from the original)
inline guest::global<u32, 0x001f888c> global_001f888c;  // (from the original)
inline guest::global<u32, 0x008484a4> global_008484a4;  // (from the original)
inline constexpr guest::Function<0x002b6a00, u32(u32, u32)> call_002b6a00;  // (from the original)
inline constexpr guest::Function<0x002f6a30, u32(u32, u32)> call_002f6a30;  // (from the original)
inline constexpr guest::Function<0x002f6e98, u32(u32, u32, u32, u32)> call_002f6e98;  // (from the original)
inline constexpr guest::Function<0x002f7508, u32(u32, u32, u32)> call_002f7508;  // (from the original)

void f_001f8798(u32 r0, u32 r1) {
    guest::StackFrame frame(0x44);  // the original's stack frame
    gptr<Local_001f8798_r3_1> r3_1 = gptr<Local_001f8798_r3_1>(0x84848cu);  // (from the original)
    float S0_1 = std::bit_cast<float>(r3_1->word_0);
    float S1_1 = std::bit_cast<float>(r3_1->word_4);
    float S2_1 = std::bit_cast<float>(r3_1->word_8);
    float S3_1 = std::bit_cast<float>(r3_1->word_c);
    float S4_1 = std::bit_cast<float>(r3_1->word_10);
    float S5_1 = std::bit_cast<float>(r3_1->word_14);
    gptr<Local_001f8798_r3_2> r3_2 = gptr<Local_001f8798_r3_2>(frame.at(0x24).addr());  // (from the original)
    r3_2->word_0 = std::bit_cast<u32>(S0_1);
    r3_2->word_4 = std::bit_cast<u32>(S1_1);
    r3_2->word_8 = std::bit_cast<u32>(S2_1);
    r3_2->word_c = std::bit_cast<u32>(S3_1);
    r3_2->word_10 = std::bit_cast<u32>(S4_1);
    r3_2->word_14 = std::bit_cast<u32>(S5_1);
    u32 r2_1 = *global_008484a4;
    *frame.at<u32>(0x20) = r0 + 0x24u;  // (from the original)
    *frame.at<u32>(0x1c) = r1;  // (from the original)
    *frame.at<u32>(0x3c) = r2_1;  // (from the original)
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    guest::cpu()->s[3] = S3_1;
    guest::cpu()->s[4] = S4_1;
    guest::cpu()->s[5] = S5_1;
    call_002f6e98(r0 + 0x2e4u, frame.at(0x1c).addr(), 0u, r3_2.addr());  // (from the original)
    float S0_2 = std::bit_cast<float>(*global_001f8888);
    float S1_2 = std::bit_cast<float>(*global_001f888c);
    *gptr<u32>(r0 + 0x3b8u) = *gptr<u32>(r0 + 0x3b8u) | 0x40u;  // (from the original)
    *frame.at<u32>(0) = 0;
    *frame.at<u32>(4) = 0;
    *frame.at<u32>(8) = 0;
    *frame.at<u32>(0xc) = 0;  // (from the original)
    *frame.at<u32>(0x10) = 0;  // (from the original)
    *frame.at<u32>(0x14) = 0;  // (from the original)
    *frame.at<u32>(0x18) = 0;  // (from the original)
    gptr<Local_001f8798_r0_2> r0_2 = gptr<Local_001f8798_r0_2>(frame.at(8).addr());
    r0_2->word_0 = std::bit_cast<u32>(S0_2);
    r0_2->word_4 = std::bit_cast<u32>(S1_2);
    *frame.at<u32>(0) = *gptr<u32>(r0 + 0x1c4u);  // (from the original)
    *frame.at<u32>(4) = *gptr<u32>(r0 + 0x200u);  // (from the original)
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    call_002b6a00(r0 + 0x204u, frame.at(0).addr());  // (from the original)
    call_002f7508(r0 + 0x2e4u, r0 + 0x204u, 1u);  // (from the original)
    *gptr<u32>(r0 + 0x2d0u) = 0x1000413;  // (from the original)
    *gptr<u8>(r0 + 0x2deu) = 1;  // (from the original)
    *gptr<u32>(r0 + 0x2d4u) = 0x1000399;  // (from the original)
    *gptr<u8>(r0 + 0x2dfu) = 1;  // (from the original)
    *gptr<u8>(r0 + 0x2e0u) = 1;  // (from the original)
    call_002f6a30(r0 + 0x2e4u, 0u);  // (from the original)
    *gptr<u16>(0x3b4u + r0) = 3;  // (from the original)
}

}  // namespace d_001f8798
GUEST_EXPORT_FRAMED(0x001f8798, d_001f8798::f_001f8798, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_001f891c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001f891c {

struct __attribute__((packed)) Local_001f891c_r1_1 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_001f891c_r1_1, byte_b7, 0xb7);  // (from the original)

struct __attribute__((packed)) Local_001f891c_r1_10 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_001f891c_r1_10, byte_b7, 0xb7);  // (from the original)

struct __attribute__((packed)) Local_001f891c_r1_2 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_001f891c_r1_2, byte_b7, 0xb7);  // (from the original)

struct __attribute__((packed)) Local_001f891c_r1_3 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_001f891c_r1_3, byte_b7, 0xb7);  // (from the original)

struct __attribute__((packed)) Local_001f891c_r1_5 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_001f891c_r1_5, byte_b7, 0xb7);  // (from the original)

struct __attribute__((packed)) Local_001f891c_r1_6 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_001f891c_r1_6, byte_b7, 0xb7);  // (from the original)

struct __attribute__((packed)) Local_001f891c_r1_7 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_001f891c_r1_7, byte_b7, 0xb7);  // (from the original)

struct __attribute__((packed)) Local_001f891c_r1_8 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_001f891c_r1_8, byte_b7, 0xb7);  // (from the original)

struct __attribute__((packed)) Local_001f891c_r1_9 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_001f891c_r1_9, byte_b7, 0xb7);  // (from the original)

struct __attribute__((packed)) Local_001f891c_r2_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001f891c_r2_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001f891c_r2_1, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x001f8a78> global_001f8a78;  // (from the original)
inline guest::global<u32, 0x001f8a7c> global_001f8a7c;  // (from the original)
inline constexpr guest::Function<0x002b6a00, u32(u32, u32)> call_002b6a00;  // (from the original)

void f_001f891c(u32 r0, u32 r1) {
    guest::StackFrame frame(0x1c);  // the original's stack frame
    gptr<Local_001f891c_r1_1> r1_1 = gptr<Local_001f891c_r1_1>(0u);
    gptr<Local_001f891c_r1_2> r1_2 = gptr<Local_001f891c_r1_2>(0u);
    gptr<Local_001f891c_r1_3> r1_3 = gptr<Local_001f891c_r1_3>(0u);
    u32 r1_4 = 0;
    gptr<Local_001f891c_r1_5> r1_5 = gptr<Local_001f891c_r1_5>(0u);
    gptr<Local_001f891c_r1_6> r1_6 = gptr<Local_001f891c_r1_6>(0u);
    gptr<Local_001f891c_r1_7> r1_7 = gptr<Local_001f891c_r1_7>(0u);
    gptr<Local_001f891c_r1_8> r1_8 = gptr<Local_001f891c_r1_8>(0u);
    gptr<Local_001f891c_r1_9> r1_9 = gptr<Local_001f891c_r1_9>(0u);
    gptr<Local_001f891c_r1_10> r1_10 = gptr<Local_001f891c_r1_10>(0u);
    if (r1 != 0) {
        if (r1 == 1u) {
            goto L_1f8990;
        }
        if (r1 != 2u) {
            goto L_1f8a2c;
        }
        goto L_1f89e0;
    }
    r1_1 = gptr<Local_001f891c_r1_1>(*gptr<u32>(r0 + 0x1c8u));  // (from the original)
    r1_1->byte_b7 = u8(u32(r1_1->byte_b7) & 0xfeu | 1u);  // (from the original)
    r1_2 = gptr<Local_001f891c_r1_2>(*gptr<u32>(r0 + 0x1ccu));  // (from the original)
    r1_2->byte_b7 = u8(u32(r1_2->byte_b7) & 0xfeu);  // (from the original)
    r1_3 = gptr<Local_001f891c_r1_3>(*gptr<u32>(r0 + 0x1d0u));  // (from the original)
    r1_3->byte_b7 = u8(u32(r1_3->byte_b7) & 0xfeu);  // (from the original)
    *gptr<u32>(r0 + 0x1f8u) = *gptr<u32>(r0 + 0x1e0u);  // (from the original)
    *gptr<u32>(r0 + 0x1fcu) = *gptr<u32>(r0 + 0x1e4u);  // (from the original)
    r1_4 = *gptr<u32>(r0 + 0x1d4u);  // (from the original)
    goto L_1f89d8;
L_1f8990:;
    r1_5 = gptr<Local_001f891c_r1_5>(*gptr<u32>(r0 + 0x1c8u));  // (from the original)
    r1_5->byte_b7 = u8(u32(r1_5->byte_b7) & 0xfeu);  // (from the original)
    r1_6 = gptr<Local_001f891c_r1_6>(*gptr<u32>(r0 + 0x1ccu));  // (from the original)
    r1_6->byte_b7 = u8(u32(r1_6->byte_b7) & 0xfeu | 1u);  // (from the original)
    r1_7 = gptr<Local_001f891c_r1_7>(*gptr<u32>(r0 + 0x1d0u));  // (from the original)
    r1_7->byte_b7 = u8(u32(r1_7->byte_b7) & 0xfeu);  // (from the original)
    *gptr<u32>(r0 + 0x1f8u) = *gptr<u32>(r0 + 0x1e8u);  // (from the original)
    *gptr<u32>(r0 + 0x1fcu) = *gptr<u32>(r0 + 0x1ecu);  // (from the original)
    r1_4 = *gptr<u32>(r0 + 0x1d8u);  // (from the original)
L_1f89d8:;
    *gptr<u32>(r0 + 0x200u) = r1_4;  // (from the original)
    goto L_1f8a2c;
L_1f89e0:;
    r1_8 = gptr<Local_001f891c_r1_8>(*gptr<u32>(r0 + 0x1c8u));  // (from the original)
    r1_8->byte_b7 = u8(u32(r1_8->byte_b7) & 0xfeu);  // (from the original)
    r1_9 = gptr<Local_001f891c_r1_9>(*gptr<u32>(r0 + 0x1ccu));  // (from the original)
    r1_9->byte_b7 = u8(u32(r1_9->byte_b7) & 0xfeu);  // (from the original)
    r1_10 = gptr<Local_001f891c_r1_10>(*gptr<u32>(r0 + 0x1d0u));  // (from the original)
    r1_10->byte_b7 = u8(u32(r1_10->byte_b7) & 0xfeu | 1u);  // (from the original)
    *gptr<u32>(r0 + 0x1f8u) = *gptr<u32>(r0 + 0x1f0u);  // (from the original)
    *gptr<u32>(r0 + 0x1fcu) = *gptr<u32>(r0 + 0x1f4u);  // (from the original)
    *gptr<u32>(r0 + 0x200u) = *gptr<u32>(r0 + 0x1dcu);  // (from the original)
L_1f8a2c:;
    *frame.at<u32>(4) = 0;
    *frame.at<u32>(8) = 0;
    *frame.at<u32>(0xc) = 0;  // (from the original)
    *frame.at<u32>(0x10) = 0;  // (from the original)
    *frame.at<u32>(0x14) = 0;  // (from the original)
    *frame.at<u32>(0x18) = 0;  // (from the original)
    float S0_1 = std::bit_cast<float>(*global_001f8a78);
    float S1_1 = std::bit_cast<float>(*global_001f8a7c);
    *frame.at<u32>(0) = *gptr<u32>(r0 + 0x1c4u);  // (from the original)
    u32 r1_11 = *gptr<u32>(r0 + 0x200u);  // (from the original)
    gptr<Local_001f891c_r2_1> r2_1 = gptr<Local_001f891c_r2_1>(frame.at(8).addr());
    *frame.at<u32>(4) = r1_11;
    r2_1->word_0 = std::bit_cast<u32>(S0_1);
    r2_1->word_4 = std::bit_cast<u32>(S1_1);
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    call_002b6a00(r0 + 0x204u, frame.at(0).addr());  // (from the original)
}

}  // namespace d_001f891c
GUEST_EXPORT_FRAMED(0x001f891c, d_001f891c::f_001f891c, 0x4000);  // pushes {lr} first, as the original

// f_001f8bac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001f8bac {

inline guest::global<u32, 0x0014f898> global_0014f898;  // (from the original)
inline guest::global<u32, 0x0094edc4> global_0094edc4;  // (from the original)
inline guest::global<u32, 0x0094edc8> global_0094edc8;  // (from the original)
inline constexpr guest::Function<0x0014f89c, u32(u32, u32, u32, u32)> call_0014f89c;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)

u32 f_001f8bac(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_3 = 0;
    u32 r0_1 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    if (r0_1 != 0) {
        u32 r0_2 = call_002f74c8(r0_1, r1_1, r2_1, guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        if (r0_2 == 0x71u) {  // (from the original)
            goto L_1f8bf8;
        }
        return 0u;
    }
    r0_3 = *global_0094edc4;
    if (r0_3 == 0 || s32(r0) >= 3) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    frame.release();
    return guest::call_address<u32>(*global_0014f898, r0_3, r0, r2_1, guest::cpu()->r[3]);
L_1f8bf8:;
    u32 r0_4 = *global_0094edc8;
    if (r0_4 != 0) {
        frame.release();
        return call_0014f89c(r0_4, r0, r1, guest::cpu()->r[3]);
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_001f8bac
GUEST_EXPORT(0x001f8bac, d_001f8bac::f_001f8bac);

// f_001f9290: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001f9290 {

struct __attribute__((packed)) Object_001f9290_1 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_001f9290_1, word_8, 0x8);  // (from the original)

inline guest::global<u16, 0x00887314> global_00887314;  // (from the original)
inline guest::global<u32, 0x0094f344> global_0094f344;  // (from the original)
inline guest::global<u32, 0x0094f348> global_0094f348;  // (from the original)
inline guest::global<u32, 0x0094f34c> global_0094f34c;  // (from the original)
inline constexpr guest::Function<0x002b7f74, u32(u32, u32)> call_002b7f74;  // (from the original)
inline constexpr guest::Function<0x00529c80, u32(u32, u32, u32, u32)> call_00529c80;  // (from the original)

u32 f_001f9290(u32 r0, gptr<Object_001f9290_1> arg1, u32 r2, u32 r3) {
    *global_0094f344 = r2;
    *global_0094f348 = r3;
    *global_0094f34c = arg1.addr();
    u32 r2_1 = arg1->word_8;
    u32 r0_1 = *global_00887314;
    u32 r0_2 = call_00529c80(r0_1, r0, r2_1, 0u);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        call_002b7f74(arg1->word_8, r1_1);
        r1_1 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_001f9290
GUEST_EXPORT_FRAMED(0x001f9290, d_001f9290::f_001f9290, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001f9660: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001f9660 {

struct __attribute__((packed)) Object_001f9660_0 {
    u8 unknown_0[0xf0];  // (not used here)
    u32 word_f0;
    u32 word_f4;
    u32 word_f8;
};
GUEST_OFFSET(Object_001f9660_0, word_f0, 0xf0);  // (from the original)
GUEST_OFFSET(Object_001f9660_0, word_f4, 0xf4);  // (from the original)
GUEST_OFFSET(Object_001f9660_0, word_f8, 0xf8);  // (from the original)


void f_001f9660(gptr<Object_001f9660_0> arg0, u32 r1) {
    u32 r2_1 = arg0->word_f0;
    if (s32(r2_1) >= s32(arg0->word_f4)) {
        return;
    }
    *gptr<u32>(arg0->word_f8 + (r2_1 << 2)) = r1;
    u32 r1_1 = arg0->word_f0 + 1u;
    arg0->word_f0 = r1_1;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_001f9660
GUEST_EXPORT(0x001f9660, d_001f9660::f_001f9660);

// f_001f9884: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001f9884 {

struct __attribute__((packed)) Object_001f9884_0 {
    u8 unknown_0[0x20];  // (not used here)
    u32 word_20;
    u32 word_24;
};
GUEST_OFFSET(Object_001f9884_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_001f9884_0, word_24, 0x24);  // (from the original)

struct __attribute__((packed)) Local_001f9884_r6_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001f9884_r6_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001f9884_r6_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_001f9884_r6_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001f9884_r6_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001f9884_r6_2, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x001f99a8> global_001f99a8;  // (from the original)
inline guest::global<u32, 0x00846f00> global_00846f00;  // (from the original)
inline guest::global<u32, 0x00846f04> global_00846f04;  // (from the original)
inline guest::global<u32, 0x00846f08> global_00846f08;  // (from the original)
inline guest::global<u32, 0x00846f0c> global_00846f0c;  // (from the original)
inline constexpr guest::Function<0x004b9b64, u32(u32, u32, u32, u32)> call_004b9b64;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)
inline constexpr guest::Function<0x00569420, u32(u32, u32)> call_00569420;  // (from the original)
inline constexpr guest::Function<0x00569508, u32(u32, u32, u32, u32)> call_00569508;  // (from the original)
inline constexpr guest::Function<0x005697e0, u32(u32, u32, u32, u32)> call_005697e0;  // (from the original)
inline constexpr guest::Function<0x00816c20, u32(u32, u32, u32)> call_00816c20;  // (from the original)

void f_001f9884(gptr<Object_001f9884_0> arg0, u32 r1, float S0) {
    u32 r0 = arg0.addr();
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r1_4 = 0;
    float S0_5 = 0;
    u32 r3_1 = arg0->word_20;
    u32 r0_1 = *global_00846f04;
    if (r3_1 == *global_00846f00) {
        if (r3_1 == 0) {
            r2_1 = arg0->word_24 | r0_1;
            if ((r2_1 & 1u) == 0) {
                goto L_1f98fc;
            }
        }
        r2_1 = arg0->word_24;
        if (r2_1 == r0_1) {
            goto L_1f98fc;
        }
    }
    r0_2 = *global_00846f0c;
    if (r3_1 != *global_00846f08) {
        return;
    }
    if (r3_1 == 0) {
        r2_1 = arg0->word_24 | r0_2;
        if ((r2_1 & 1u) == 0) {
            goto L_1f98fc;
        }
    }
    r2_1 = arg0->word_24;
    if (r2_1 != r0_2) {
        return;
    }
L_1f98fc:;
    u32 zf_1 = r1 == 0;
    u32 r5_1 = r0 + 0x494u;  // (from the original)
    u32 r0_3 = r0 + 0x38u;  // (from the original)
    if (zf_1) {
        guest::cpu()->s[0] = S0;
        call_004b9b64(r0_3, r5_1, r2_1, r3_1);
        u32 r1_1 = guest::cpu()->r[1];
        u32 r2_2 = guest::cpu()->r[2];
        u32 r3_2 = guest::cpu()->r[3];
        float S0_1 = std::bit_cast<float>(*global_001f99a8);
        guest::cpu()->s[0] = S0_1;
        call_005697e0(r5_1, r1_1, r2_2, r3_2);
        u32 r1_2 = guest::cpu()->r[1];
        u32 r2_3 = guest::cpu()->r[2];
        u32 r3_3 = guest::cpu()->r[3];
        call_00568c10(r0 + 0x38u, r1_2, r2_3, r3_3);  // (from the original)
        call_00569420(r0 + 0x38u, r5_1);  // (from the original)
        gptr<Local_001f9884_r6_1> r6_1 = gptr<Local_001f9884_r6_1>(0x846f00u);  // (from the original)
        u32 r1_3 = r6_1->word_0;
        u32 r2_4 = r6_1->word_4;
        call_00816c20(r0 + 0x14u, r1_3, r2_4);  // (from the original)
        r1_4 = guest::cpu()->r[1];
        S0_5 = guest::cpu()->s[0];
    } else {
        guest::cpu()->s[0] = S0;
        call_004b9b64(r0_3, r5_1, r2_1, r3_1);
        u32 r1_5 = guest::cpu()->r[1];
        u32 r2_5 = guest::cpu()->r[2];
        u32 r3_4 = guest::cpu()->r[3];
        call_00569508(r5_1, r1_5, r2_5, r3_4);
        u32 r1_6 = guest::cpu()->r[1];
        u32 r2_6 = guest::cpu()->r[2];
        u32 r3_5 = guest::cpu()->r[3];
        call_00568c10(r0 + 0x38u, r1_6, r2_6, r3_5);  // (from the original)
        call_00569420(r0 + 0x38u, r5_1);  // (from the original)
        gptr<Local_001f9884_r6_2> r6_2 = gptr<Local_001f9884_r6_2>(0x846f08u);  // (from the original)
        u32 r1_7 = r6_2->word_0;
        u32 r2_7 = r6_2->word_4;
        call_00816c20(r0 + 0x14u, r1_7, r2_7);  // (from the original)
        r1_4 = guest::cpu()->r[1];
        S0_5 = guest::cpu()->s[0];
    }
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->s[0] = S0_5;
}

}  // namespace d_001f9884
GUEST_EXPORT_FRAMED(0x001f9884, d_001f9884::f_001f9884, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001f99b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001f99b4 {

struct __attribute__((packed)) Object_001f99b4_0 {
    u8 unknown_0[0x4bc];  // (not used here)
    u32 word_4bc;
};
GUEST_OFFSET(Object_001f99b4_0, word_4bc, 0x4bc);  // (from the original)

struct __attribute__((packed)) Object_001f99b4_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_001f99b4_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_001f99b4_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_001f99b4_r2_1 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_001f99b4_r2_1, byte_b7, 0xb7);  // (from the original)

struct __attribute__((packed)) Local_001f99b4_r3_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_001f99b4_r3_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001f99b4_r3_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_001f99b4_r3_1, word_8, 0x8);  // (from the original)

inline guest::global<u32, 0x001f99e0> global_001f99e0;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)

void f_001f99b4(gptr<Object_001f99b4_0> arg0, gptr<Object_001f99b4_1> arg1) {
    gptr<Local_001f99b4_r2_1> r2_1 = gptr<Local_001f99b4_r2_1>(arg0->word_4bc);
    float S2_1 = std::bit_cast<float>(*global_001f99e0);
    float S0_1 = std::bit_cast<float>(arg1->word_0);
    float S1_1 = std::bit_cast<float>(arg1->word_4);
    gptr<Local_001f99b4_r3_1> r3_1 = gptr<Local_001f99b4_r3_1>(r2_1.addr() + 0x28u);  // (from the original)
    r3_1->word_0 = std::bit_cast<u32>(S0_1);
    r3_1->word_4 = std::bit_cast<u32>(S1_1);
    r3_1->word_8 = std::bit_cast<u32>(S2_1);
    u32 r1_1 = u32(r2_1->byte_b7) & 0xcfu;  // (from the original)
    r2_1->byte_b7 = u8(r1_1);
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    call_00568c10(arg0.addr() + 0x38u, r1_1, r2_1.addr(), r3_1.addr());  // (from the original)
}

}  // namespace d_001f99b4
GUEST_EXPORT(0x001f99b4, d_001f99b4::f_001f99b4);

// f_001f99e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001f99e4 {

struct __attribute__((packed)) Object_001f99e4_0 {
    u8 unknown_0[0x4bc];  // (not used here)
    u32 word_4bc;
};
GUEST_OFFSET(Object_001f99e4_0, word_4bc, 0x4bc);  // (from the original)

struct __attribute__((packed)) Object_001f99e4_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_001f99e4_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_001f99e4_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_001f99e4_1, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_001f99e4_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001f99e4_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001f99e4_ea_2, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_001f99e4_r1_1 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_001f99e4_r1_1, byte_b7, 0xb7);  // (from the original)

inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)

u32 f_001f99e4(gptr<Object_001f99e4_0> arg0, gptr<Object_001f99e4_1> arg1) {
    u32 r2_1 = arg1->word_0;
    u32 r3_1 = arg1->word_4;
    gptr<Local_001f99e4_r1_1> r1_1 = gptr<Local_001f99e4_r1_1>(arg0->word_4bc);
    *gptr<u32>(r1_1.addr() + 0x30u) = arg1->word_8;  // (from the original)
    gptr<Local_001f99e4_ea_2> ea_2 = gptr<Local_001f99e4_ea_2>(r1_1.addr() + 0x28u);  // (from the original)
    ea_2->word_0 = r2_1;
    ea_2->word_4 = r3_1;
    u32 r2_2 = u32(r1_1->byte_b7) & 0xcfu;  // (from the original)
    r1_1->byte_b7 = u8(r2_2);
    return call_00568c10(arg0.addr() + 0x38u, r1_1.addr(), r2_2, r3_1);  // (from the original)
}

}  // namespace d_001f99e4
GUEST_EXPORT(0x001f99e4, d_001f99e4::f_001f99e4);

// f_001f9a08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001f9a08 {

inline guest::global<u32, 0x00846f10> global_00846f10;  // (from the original)
inline guest::global<u32, 0x00846f14> global_00846f14;  // (from the original)
inline constexpr guest::Function<0x00569420, u32(u32, u32, u32, u32)> call_00569420;  // (from the original)
inline constexpr guest::Function<0x00816c20, u32(u32, u32, u32)> call_00816c20;  // (from the original)

u32 f_001f9a08(u32 r0) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r5 = r0;
    u32 r2 = r5 + 0x41cu;  // (from the original)
    u32 r3 = r5 + 0x444u;  // (from the original)
    *frame.at<u32>(0) = r0 + 0x3ccu;  // (from the original)
    *frame.at<u32>(4) = r5 + 0x3f4u;  // (from the original)
    *frame.at<u32>(8) = r2;
    *frame.at<u32>(0xc) = r3;  // (from the original)
    *frame.at<u32>(0x10) = r5 + 0x46cu;  // (from the original)
    *frame.at<u32>(0x14) = r5 + 0x494u;  // (from the original)
    u32 r6 = frame.at(0).addr();
    u32 r4 = 0u;
    do {
        u32 r1_1 = *gptr<u32>(r6 + (r4 << 2));
        if (*gptr<u8>(r1_1 + 0x1cu) != 0) {  // (from the original)
            call_00569420(r5 + 0x38u, r1_1, r2, r3);  // (from the original)
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 6u);
    u32 r0_3 = call_00816c20(r5 + 0x14u, *global_00846f10, *global_00846f14);  // (from the original)
    return r0_3;
}

}  // namespace d_001f9a08
GUEST_EXPORT_FRAMED(0x001f9a08, d_001f9a08::f_001f9a08, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001f9a84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001f9a84 {

struct __attribute__((packed)) Object_001f9a84_0 {
    u8 unknown_0[0x20];  // (not used here)
    u32 word_20;
    u32 word_24;
};
GUEST_OFFSET(Object_001f9a84_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_001f9a84_0, word_24, 0x24);  // (from the original)

struct __attribute__((packed)) Local_001f9a84_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001f9a84_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001f9a84_ea_1, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x00846f00> global_00846f00;  // (from the original)
inline guest::global<u32, 0x00846f04> global_00846f04;  // (from the original)

u32 f_001f9a84(gptr<Object_001f9a84_0> arg0) {
    u32 r3_1 = arg0->word_20;
    u32 r1_1 = *global_00846f04;
    if (r3_1 == *global_00846f00) {
        if (r3_1 == 0 && ((arg0->word_24 | r1_1) & 1u) == 0) {
            guest::cpu()->r[1] = r1_1;
            return 1u;
        }
        if (arg0->word_24 == r1_1) {
            guest::cpu()->r[1] = r1_1;
            return 1u;
        }
    }
    gptr<Local_001f9a84_ea_1> ea_1 = gptr<Local_001f9a84_ea_1>(0x846f08u);  // (from the original)
    u32 r1_2 = ea_1->word_4;
    if (r3_1 != ea_1->word_0) {
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    if (r3_1 == 0 && ((arg0->word_24 | r1_2) & 1u) == 0) {
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    if (arg0->word_24 != r1_2) {
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    guest::cpu()->r[1] = r1_2;
    return 1u;
}

}  // namespace d_001f9a84
GUEST_EXPORT(0x001f9a84, d_001f9a84::f_001f9a84);

// f_001f9b08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001f9b08 {

inline guest::global<u32, 0x00846f18> global_00846f18;  // (from the original)
inline guest::global<u32, 0x00846f1c> global_00846f1c;  // (from the original)
inline constexpr guest::Function<0x00569420, u32(u32, u32, u32, u32)> call_00569420;  // (from the original)
inline constexpr guest::Function<0x00816c20, u32(u32, u32, u32)> call_00816c20;  // (from the original)

u32 f_001f9b08(u32 r0, u32 r1) {
    guest::StackFrame frame(0x1c);  // the original's stack frame
    u32 r5 = r0;
    u32 r6 = r1;
    u32 r2 = r5 + 0x41cu;  // (from the original)
    u32 r3 = r5 + 0x444u;  // (from the original)
    *frame.at<u32>(0) = r0 + 0x3ccu;  // (from the original)
    *frame.at<u32>(4) = r5 + 0x3f4u;  // (from the original)
    *frame.at<u32>(8) = r2;
    *frame.at<u32>(0xc) = r3;  // (from the original)
    *frame.at<u32>(0x10) = r5 + 0x46cu;  // (from the original)
    *frame.at<u32>(0x14) = r5 + 0x494u;  // (from the original)
    u32 r7 = frame.at(0).addr();
    u32 r4 = 0u;
    do {
        u32 r1_1 = *gptr<u32>(r7 + (r4 << 2));
        if (*gptr<u8>(r1_1 + 0x1cu) != 0) {  // (from the original)
            call_00569420(r5 + 0x38u, r1_1, r2, r3);  // (from the original)
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 6u);
    *gptr<u8>(r5 + 0x4d3u) = u8(r6);  // (from the original)
    u32 r0_3 = call_00816c20(r5 + 0x14u, *global_00846f18, *global_00846f1c);  // (from the original)
    return r0_3;
}

}  // namespace d_001f9b08
GUEST_EXPORT_FRAMED(0x001f9b08, d_001f9b08::f_001f9b08, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_001fa354: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001fa354 {

struct __attribute__((packed)) Object_001fa354_0 {
    u8 unknown_0[0x4d0];  // (not used here)
    u8 byte_4d0;
    u8 byte_4d1;
};
GUEST_OFFSET(Object_001fa354_0, byte_4d0, 0x4d0);  // (from the original)
GUEST_OFFSET(Object_001fa354_0, byte_4d1, 0x4d1);  // (from the original)

struct __attribute__((packed)) Local_001fa354_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_001fa354_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001fa354_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_001fa354_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_001fa354_ea_1, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Local_001fa354_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001fa354_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001fa354_ea_2, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x00846f08> global_00846f08;  // (from the original)
inline guest::global<u32, 0x00846f0c> global_00846f0c;  // (from the original)
inline constexpr guest::Function<0x004b9b64, u32(u32, u32, u32, u32)> call_004b9b64;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)
inline constexpr guest::Function<0x00569420, u32(u32, u32, u32, u32)> call_00569420;  // (from the original)
inline constexpr guest::Function<0x00569508, u32(u32, u32, u32, u32)> call_00569508;  // (from the original)
inline constexpr guest::Function<0x006d1e64, u32(u32, u32, u32, u32)> call_006d1e64;  // (from the original)
inline constexpr guest::Function<0x00816c20, u32(u32, u32, u32)> call_00816c20;  // (from the original)

u32 f_001fa354(gptr<Object_001fa354_0> arg0) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r5 = r0;
    u32 r7 = 0u;
    arg0->byte_4d1 = u8(r7);
    arg0->byte_4d0 = u8(r7);
    u32 r2 = r5 + 0x41cu;  // (from the original)
    u32 r6 = r5 + 0x444u;  // (from the original)
    gptr<Local_001fa354_ea_1> ea_1 = gptr<Local_001fa354_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r0 + 0x3ccu;  // (from the original)
    ea_1->word_4 = r5 + 0x3f4u;  // (from the original)
    ea_1->word_8 = r2;
    ea_1->word_c = r6;
    u32 r3 = r5 + 0x46cu;  // (from the original)
    gptr<Local_001fa354_ea_2> ea_2 = gptr<Local_001fa354_ea_2>(frame.at(0x10).addr());  // (from the original)
    ea_2->word_0 = r3;
    ea_2->word_4 = r5 + 0x494u;  // (from the original)
    u32 r4 = r7;
    u32 r8 = frame.at(0).addr();
    do {
        r1_1 = *gptr<u32>(r8 + (r4 << 2));
        r0_1 = *gptr<u8>(r1_1 + 0x1cu);  // (from the original)
        if (r0_1 != 0) {
            r0_1 = call_00569420(r5 + 0x38u, r1_1, r2, r3);  // (from the original)
            r1_1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 6u);
    u32 r0_3 = call_006d1e64(r0_1, r1_1, r2, r3);
    *gptr<u8>(r0_3 + 0x40u) = u8(r7);  // (from the original)
    call_004b9b64(r5 + 0x38u, r6, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_00569508(r6, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r2_3 = guest::cpu()->r[2];
    u32 r3_3 = guest::cpu()->r[3];
    call_00568c10(r5 + 0x38u, guest::cpu()->r[1], r2_3, r3_3);  // (from the original)
    call_00569420(r5 + 0x38u, r6, r2_3, r3_3);  // (from the original)
    u32 r0_8 = call_00816c20(r5 + 0x14u, *global_00846f08, *global_00846f0c);  // (from the original)
    return r0_8;
}

}  // namespace d_001fa354
GUEST_EXPORT_FRAMED(0x001fa354, d_001fa354::f_001fa354, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_001fa744: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001fa744 {

struct __attribute__((packed)) Local_001fa744_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_001fa744_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001fa744_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_001fa744_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_001fa744_ea_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_001fa744_ea_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_001fa744_ea_1, word_14, 0x14);  // (from the original)

struct __attribute__((packed)) Local_001fa744_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_001fa744_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001fa744_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_001fa744_ea_2, word_8, 0x8);  // (from the original)

inline guest::global<u32, 0x0095362c> global_0095362c;  // (from the original)
inline constexpr guest::Function<0x00108421, u32(u32, u32, u32, u32)> call_00108420;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> call_00300904;  // (from the original)
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;  // (from the original)
inline constexpr guest::Function<0x0075dfe8, u32(u32, u32, u32, u32)> call_0075dfe8;  // (from the original)

void f_001fa744(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r14 = guest::cpu()->r[14];
    u32 r3_4 = 0;
    u32 r2_4 = 0;
    u32 r1_4 = 0;
    u32 r0_7 = 0;
    gptr<Local_001fa744_ea_1> ea_1 = gptr<Local_001fa744_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r4;
    ea_1->word_10 = r5;
    ea_1->word_14 = r14;
    u32 r0_1 = call_00300904(r0, r1, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    u32 r3_1 = guest::cpu()->r[3];
    if (r0_1 != 0) {
        if (r1 != 0) {
            u32 r0_2 = call_002fae84(r0_1, r1_1, r2_1, r3_1);
            u32 r0_4 = call_00108420(r0_2 + 0x6e238u, *frame.at<u32>(8), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            u32 r0_6 = call_0075dfe8(*global_0095362c, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            r3_4 = 0x1acu;  // (from the original)
            r2_4 = r0_4;
            r1_4 = r0_6 == 0 ? 4u : 0u;
            r0_7 = 0x81u;  // (from the original)
        } else {
            u32 r0_9 = call_0075dfe8(*global_0095362c, r1_1, r2_1, r3_1);
            u32 zf_1 = r0_9 == 0;
            r3_4 = zf_1 ? 4u : 0x1acu;  // (from the original)
            r2_4 = frame.at(8).addr();
            r1_4 = zf_1 ? 4u : 0u;
            r0_7 = 0x82u;  // (from the original)
        }
        call_006249b0(r0_7, r1_4, r2_4, r3_4);
        r1_1 = guest::cpu()->r[1];
    }
    gptr<Local_001fa744_ea_2> ea_2 = gptr<Local_001fa744_ea_2>(frame.at(0xc).addr());  // (from the original)
    u32 r4_1 = ea_2->word_0;
    u32 r5_1 = ea_2->word_4;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
}

}  // namespace d_001fa744
GUEST_EXPORT(0x001fa744, d_001fa744::f_001fa744);

// f_001fad34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001fad34 {

struct __attribute__((packed)) Object_001fad34_0 {
    u8 unknown_0[0x60];  // (not used here)
    u32 word_60;
};
GUEST_OFFSET(Object_001fad34_0, word_60, 0x60);  // (from the original)

inline guest::global<u16, 0x008c9f1e> global_008c9f1e;  // (from the original)

void f_001fad34(gptr<Object_001fad34_0> arg0) {
    *gptr<u16>(arg0->word_60) = u16(u32(*global_008c9f1e));
}

}  // namespace d_001fad34
GUEST_EXPORT(0x001fad34, d_001fad34::f_001fad34);

// f_001fbec8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001fbec8 {

inline guest::global<u32, 0x0094fd3c> global_0094fd3c;  // (from the original)
inline guest::global<u32, 0x0094fd58> global_0094fd58;  // (from the original)
inline constexpr guest::Function<0x001fc044, u32(u32, u32, u32)> call_001fc044;  // (from the original)
inline constexpr guest::Function<0x00568a80, u32(u32, u32, u32, u32)> call_00568a80;  // (from the original)
inline constexpr guest::Function<0x005e2c98, u32(u32, u32, u32)> call_005e2c98;  // (from the original)

void f_001fbec8(u32 r0, u32 r1_unused, u32 r2) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r12 = guest::cpu()->r[12];
    u32 res_1 = 0;
    *frame.at<u32>(0x20) = r12;  // (from the original)
    u32 r5 = r0;
    u32 r4 = 0u;
    u32 r6 = 0x94fba0u;  // (from the original)
    do {
        u32 r0_2 = call_00568a80(r5 + 0x4cu, *gptr<u32>(r6 + (r4 << 2)), r2, guest::cpu()->r[3]);  // (from the original)
        r2 = guest::cpu()->r[2];
        u32 r1_2 = r5 + (r4 << 2);
        r4 += 1u;
        res_1 = r4 - 8u;
        *gptr<u32>(r1_2 + 0x61cu) = r0_2;  // (from the original)
        guest::preempt();
    } while (res_1 >> 0x1f != ((r4 ^ 8u) & (r4 ^ res_1)) >> 0x1f);  // (from the original)
    u32 r0_3 = r5 + 0xbd4u;  // (from the original)
    call_005e2c98(r0_3, *gptr<u32>(r5 + 0x61cu), 0u);  // (from the original)
    u32 r0_4 = r5 + 0xc98u;  // (from the original)
    call_005e2c98(r0_4, *gptr<u32>(r5 + 0x620u), 0u);  // (from the original)
    u32 r0_5 = r5 + 0xd5cu;  // (from the original)
    call_005e2c98(r0_5, *gptr<u32>(r5 + 0x624u), 0u);  // (from the original)
    call_005e2c98(r5 + 0xe20u, *gptr<u32>(r5 + 0x628u), 0u);  // (from the original)
    u32 r0_7 = r5 + 0xee4u;  // (from the original)
    call_005e2c98(r0_7, *gptr<u32>(r5 + 0x62cu), 0u);  // (from the original)
    u32 r0_8 = r5 + 0xfa8u;  // (from the original)
    call_005e2c98(r0_8, *gptr<u32>(r5 + 0x630u), 0u);  // (from the original)
    u32 r0_9 = r5 + 0x106cu;  // (from the original)
    call_005e2c98(r0_9, *gptr<u32>(r5 + 0x634u), 0u);  // (from the original)
    u32 r0_10 = r5 + 0x1130u;  // (from the original)
    call_005e2c98(r0_10, *gptr<u32>(r5 + 0x638u), 0u);  // (from the original)
    *gptr<u8>(r0_3 + 0x38u) = 1;  // (from the original)
    *gptr<u8>(r0_4 + 0x38u) = 1;  // (from the original)
    *gptr<u8>(r0_5 + 0x38u) = 1;  // (from the original)
    *gptr<u8>(r5 + 0xe58u) = 1;  // (from the original)
    *gptr<u8>(r0_7 + 0x38u) = 1;  // (from the original)
    *gptr<u8>(r0_8 + 0x38u) = 1;  // (from the original)
    *gptr<u8>(r0_9 + 0x38u) = 1;  // (from the original)
    *gptr<u8>(r0_10 + 0x38u) = 1;  // (from the original)
    call_001fc044(r5, *gptr<u32>(*global_0094fd3c + 0x200u), guest::cpu()->r[2]);  // (from the original)
    *global_0094fd58 = *global_0094fd58 & ~0x10u;  // (from the original)
}

}  // namespace d_001fbec8
GUEST_EXPORT_FRAMED(0x001fbec8, d_001fbec8::f_001fbec8, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_001fc5a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001fc5a8 {

struct __attribute__((packed)) Local_001fc5a8_r4_2 {
    u32 word_0;
    u8 unknown_4[0xe0];  // (not used here)
    u32 word_e4;
};
GUEST_OFFSET(Local_001fc5a8_r4_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001fc5a8_r4_2, word_e4, 0xe4);  // (from the original)

inline constexpr guest::Function<0x002b6ef8, u32(u32, u32, u32, u32)> call_002b6ef8;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f770c, u32(u32, u32, u32, u32)> call_002f770c;  // (from the original)
inline constexpr guest::Function<0x002f7710, u32(u32, u32, u32, u32)> call_002f7710;  // (from the original)
inline constexpr guest::Function<0x0053721c, u32(u32, u32, u32, u32)> call_0053721c;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)
inline constexpr guest::Function<0x005e3194, u32(u32, u32, u32, u32)> call_005e3194;  // (from the original)
inline constexpr guest::Function<0x006aa8a0, u32(u32, u32, u32, u32)> call_006aa8a0;  // (from the original)
inline constexpr guest::Function<0x006aaa30, u32(u32, u32)> call_006aaa30;  // (from the original)

u32 f_001fc5a8(gptr<BsMenuLetter> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r2_1 = 0x8ed1c4u;  // (from the original)
    arg0->word_0 = 0x8ed158;  // (from the original)
    arg0->word_28 = r2_1;
    u32 r0_2 = call_0053721c(arg0.addr() + 0x1bbcu, 0x8ed158u, r2_1, r3);  // (from the original)
    u32 r4_1 = r0_2 + 0xfffff638u;  // (from the original)
    *gptr<u32>(r4_1) = 0x8ee218;  // (from the original)
    gptr<Local_001fc5a8_r4_2> r4_2 = gptr<Local_001fc5a8_r4_2>(r4_1 + 0x398u);  // (from the original)
    r4_2->word_e4 = 0x8ef270;  // (from the original)
    r4_2->word_0 = 0x8ef22c;  // (from the original)
    call_002f76ac(r4_2.addr() + 0x118u, 0x2e0b3cu, 0x518u, 1u);  // (from the original)
    u32 r0_4 = call_002f770c(r4_2.addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r0_4 - 0x398u) = 0x8f18f4;  // (from the original)
    u32 r0_6 = call_00567ef0(r0_4 - 0x248u, 0x8f18f4u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_8 = call_005bf744(r0_6 - 0x14cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_10 = call_005e3194(r0_8 - 0xc8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_12 = call_005e3194(r0_10 - 0xc4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_14 = call_005e3194(r0_12 - 0xc4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_16 = call_005e3194(r0_14 - 0xc4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_18 = call_005e3194(r0_16 - 0xc4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_20 = call_005e3194(r0_18 - 0xc4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_22 = call_005e3194(r0_20 - 0xc4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_24 = call_005e3194(r0_22 - 0xc4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_26 = call_002b6ef8(r0_24 - 0xe0u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_28 = call_002f7710(r0_26 - 0xe4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_30 = call_006aa8a0(r0_28 - 0x3d4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_32 = call_0056988c(r0_30 - 0x48u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_34 = call_0056988c(r0_32 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_36 = call_0056988c(r0_34 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_38 = call_0056988c(r0_36 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_40 = call_0056988c(r0_38 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_42 = call_0056988c(r0_40 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_44 = call_00567ef0(r0_42 - 0x248u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_46 = call_005bf744(r0_44 - 0x14cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_48 = call_005bf744(r0_46 - 0x14cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    frame.release();
    return call_006aaa30(r0_48 - 0x4cu, guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_001fc5a8
GUEST_EXPORT(0x001fc5a8, d_001fc5a8::f_001fc5a8);

// f_001fdc84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001fdc84 {

struct __attribute__((packed)) Local_001fdc84_r4_1 {
    u32 word_0;
    u8 unknown_4[0xe0];  // (not used here)
    u32 word_e4;
};
GUEST_OFFSET(Local_001fdc84_r4_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001fdc84_r4_1, word_e4, 0xe4);  // (from the original)

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f770c, u32(u32, u32, u32, u32)> call_002f770c;  // (from the original)
inline constexpr guest::Function<0x0031c92c, u32(u32, u32, u32, u32)> call_0031c92c;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)
inline constexpr guest::Function<0x006aaa30, u32(u32, u32)> call_006aaa30;  // (from the original)

u32 f_001fdc84(gptr<BsMenuMelody> arg0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    arg0->word_0 = 0x8ed1d8;  // (from the original)
    arg0->word_28 = 0x8ed244;  // (from the original)
    call_002f76ac(arg0.addr() + 0x5400u, 0x81dfb4u, 0x20u, 0x10u);  // (from the original)
    *gptr<u32>(0x4510u + arg0.addr()) = 0x8ee228;  // (from the original)
    gptr<Local_001fdc84_r4_1> r4_1 = gptr<Local_001fdc84_r4_1>(arg0.addr() + 0x48a8u);  // (from the original)
    r4_1->word_e4 = 0x8ef2c8;  // (from the original)
    r4_1->word_0 = 0x8ef284;  // (from the original)
    call_002f76ac(r4_1.addr() + 0x118u, 0x2e0b3cu, 0x518u, 2u);  // (from the original)
    u32 r0_3 = call_002f770c(r4_1.addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r0_3 - 0x398u) = 0x8f18f4;  // (from the original)
    u32 r0_5 = call_00567ef0(r0_3 - 0x248u, 0x8f18f4u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_7 = call_005bf744(r0_5 - 0x14cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_9 = call_0031c92c(r0_7 - 0xe4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_11 = call_0056988c(r0_9 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_13 = call_0056988c(r0_11 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_15 = call_0056988c(r0_13 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_17 = call_0056988c(r0_15 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_19 = call_0056988c(r0_17 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_21 = call_0056988c(r0_19 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_23 = call_0056988c(r0_21 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_25 = call_0056988c(r0_23 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_002f76ac(r0_25 - 0x3dc4u, 0x1ad16cu, 0x3dcu, 0x10u);  // (from the original)
    u32 r0_27 = (r0_25 - 0x42f0u) + 0x3e0u;  // (from the original)
    u32 r0_28 = call_005bf744(r0_27, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_30 = call_005bf744(r0_28 - 0x14cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_32 = call_00567ef0(r0_30 - 0x248u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    frame.release();
    return call_006aaa30(r0_32 - 0x4cu, guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_001fdc84
GUEST_EXPORT(0x001fdc84, d_001fdc84::f_001fdc84);

// f_001fde44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001fde44 {

inline guest::global<u16, 0x00887330> global_00887330;  // (from the original)
inline guest::global<u32, 0x00950128> global_00950128;  // (from the original)
inline constexpr guest::Function<0x00529d08, u32(u32, u32, u32, u32)> call_00529d08;  // (from the original)

void f_001fde44(u32 r0) {
    u32 r0_1 = *global_00887330;
    u32 r0_2 = call_00529d08(r0_1, r0, 0u, guest::cpu()->r[3]);
    *global_00950128 = r0_2;
    guest::cpu()->r[1] = 0x950124u;  // (from the original)
}

}  // namespace d_001fde44
GUEST_EXPORT_FRAMED(0x001fde44, d_001fde44::f_001fde44, 0x4010);  // pushes {r4, lr} first, as the original

// f_001fde7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001fde7c {

inline guest::global<u16, 0x008c9f1e> global_008c9f1e;  // (from the original)
inline guest::global<u32, 0x00993068> global_00993068;  // (from the original)

u32 f_001fde7c() {
    u32 r1_1 = *global_00993068;
    u32 r0_1 = *global_008c9f1e;
    *gptr<u16>(r1_1) = u16(r0_1);
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_001fde7c
GUEST_EXPORT(0x001fde7c, d_001fde7c::f_001fde7c);

// f_001fde9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001fde9c {

inline guest::global<u32, 0x00950128> global_00950128;  // (from the original)
inline constexpr guest::Function<0x005204b0, u32(u32, u32, u32, u32)> call_005204b0;  // (from the original)

u32 f_001fde9c() {
    call_005204b0(*global_00950128, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *global_00950128 = 0;
    return 0u;
}

}  // namespace d_001fde9c
GUEST_EXPORT_FRAMED(0x001fde9c, d_001fde9c::f_001fde9c, 0x4010);  // pushes {r4, lr} first, as the original

// f_001fdf44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001fdf44 {

inline guest::global<u32, 0x00950128> global_00950128;  // (from the original)
inline guest::global<u32, 0x0095012c> global_0095012c;  // (from the original)
inline constexpr guest::Function<0x005204b0, u32(u32, u32, u32, u32)> call_005204b0;  // (from the original)

u32 f_001fdf44(u32 r0_unused, u32 r1) {
    u32 r0_2 = 0;
    u32 r0_1 = *global_00950128;
    if (r0_1 == 0) {
        r0_2 = 1u;
    } else {
        r1 = *global_0095012c;
        if (r1 == 0) {
            call_005204b0(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            *global_0095012c = *global_0095012c + 1u;
        }
        r0_2 = 0u;
    }
    guest::cpu()->r[1] = r1;
    return r0_2;
}

}  // namespace d_001fdf44
GUEST_EXPORT_FRAMED(0x001fdf44, d_001fdf44::f_001fdf44, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001fefa4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001fefa4 {

struct __attribute__((packed)) Local_001fefa4_r1_5 {
    u8 unknown_0[0x244];  // (not used here)
    u32 word_244;
    u32 word_248;
};
GUEST_OFFSET(Local_001fefa4_r1_5, word_244, 0x244);  // (from the original)
GUEST_OFFSET(Local_001fefa4_r1_5, word_248, 0x248);  // (from the original)

inline guest::global<u32, 0x001ff0c8> global_001ff0c8;  // (from the original)
inline guest::global<u32, 0x00879db8> global_00879db8;  // (from the original)
inline guest::global<u32, 0x00879dbc> global_00879dbc;  // (from the original)
inline constexpr guest::Function<0x001207d8, u32(u32, u32, u32, u32)> call_001207d8;  // (from the original)
inline constexpr guest::Function<0x00125aec, u32(u32, u32, u32, u32)> call_00125aec;  // (from the original)
inline constexpr guest::Function<0x001cb884, u32(u32, u32, u32, u32)> call_001cb884;  // (from the original)
inline constexpr guest::Function<0x00299b30, u32(u32, u32, u32, u32)> call_00299b30;  // (from the original)
inline constexpr guest::Function<0x002b7c68, u32(u32, u32, u32, u32)> call_002b7c68;  // (from the original)
inline constexpr guest::Function<0x002bc928, u32(u32, u32, u32, u32)> call_002bc928;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x005e3128, u32(u32, u32, u32, u32)> call_005e3128;  // (from the original)

u32 f_001fefa4(gptr<state__Mode_CensusWindow_> arg0, float S0) {
    arg0->word_4 = 0;
    arg0->byte_8 = 0;
    u32 r2_1 = *global_00879dbc;
    arg0->word_c = *global_00879db8;
    arg0->word_10 = r2_1;
    arg0->word_14 = 0;
    arg0->word_0 = 0x9081c4;  // (from the original)
    arg0->byte_18 = 0;
    arg0->word_1c = 0;
    arg0->word_20 = 0;
    u32 r0_2 = call_002bc928((arg0.addr() + 0x20u) + 4u, 0x9081c4u, r2_1, arg0.addr() + 0xcu);  // (from the original)
    u32 r3_2 = guest::cpu()->r[3];
    u32 r2_2 = 0x8ed31cu;  // (from the original)
    *gptr<u32>(r0_2 - 0x24u) = 0x8ed2e8;  // (from the original)
    *gptr<u32>(r0_2) = r2_2;
    u32 r0_4 = call_001207d8(r0_2 + 8u, 0x8ed2e8u, r2_2, r3_2);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_3 = guest::cpu()->r[2];
    u32 r3_3 = guest::cpu()->r[3];
    u32 r0_6 = call_001cb884(r0_4 + 0x248u, r1_1, r2_3, r3_3);  // (from the original)
    u32 r2_4 = guest::cpu()->r[2];
    u32 r3_4 = guest::cpu()->r[3];
    *gptr<u32>(r0_6) = 0x8f8b10;  // (from the original)
    u32 r0_8 = call_002b7c68(r0_6 + 0x1b0u, 0x8f8b10u, r2_4, r3_4);  // (from the original)
    u32 r1_2 = guest::cpu()->r[1];
    u32 r2_5 = guest::cpu()->r[2];
    u32 r3_5 = guest::cpu()->r[3];
    u32 r0_10 = call_001cb884(r0_8 + 0x5cu, r1_2, r2_5, r3_5);  // (from the original)
    *gptr<u32>(r0_10) = 0x8f2638;  // (from the original)
    u32 r0_12 = call_00301d0c(r0_10 + 0x1b0u, 0x2caec8u, 0x198u, 7u);  // (from the original)
    u32 r1_3 = guest::cpu()->r[1];
    u32 r2_6 = guest::cpu()->r[2];
    u32 r3_6 = guest::cpu()->r[3];
    u32 r0_14 = call_00125aec(r0_12 + 0xb28u, r1_3, r2_6, r3_6);  // (from the original)
    u32 r2_7 = guest::cpu()->r[2];
    u32 r3_7 = guest::cpu()->r[3];
    u32 r0_15 = r0_14 - 0xcd8u;  // (from the original)
    *gptr<u32>(r0_15 + 0xd00u) = 0;  // (from the original)
    u32 ea_3 = r0_15 + 0xd04u;  // (from the original)
    *gptr<u32>(ea_3) = 0;
    u32 r0_17 = call_005e3128(ea_3 + 0x20u, 0x40u, r2_7, r3_7);  // (from the original)
    u32 r2_8 = guest::cpu()->r[2];
    u32 r3_8 = guest::cpu()->r[3];
    u32 r0_19 = call_00299b30(r0_17 + 0xc4u, r0_17 - 0xd24u, r2_8, r3_8);  // (from the original)
    u32 r0_21 = call_00301d0c(r0_19 + 0x798u, 0x1c81a8u, 0x1cu, 7u);  // (from the original)
    u32 r0_22 = r0_21 - 0x1580u;  // (from the original)
    float S0_10 = std::bit_cast<float>(*global_001ff0c8);
    gptr<Local_001fefa4_r1_5> r1_5 = gptr<Local_001fefa4_r1_5>(r0_22 + 0x1400u);  // (from the original)
    r1_5->word_244 = std::bit_cast<u32>(S0_10);
    r1_5->word_248 = std::bit_cast<u32>(S0_10);
    *gptr<u32>(0x164cu + r0_22) = 0;  // (from the original)
    guest::cpu()->s[0] = S0_10;
    u32 r0_24 = call_002b7c68(r0_22 + 0x1650u, r1_5.addr(), 0x1cu, 7u);  // (from the original)
    return r0_24 - 0x1ad0u;  // (from the original)
}

}  // namespace d_001fefa4
GUEST_EXPORT_FRAMED(0x001fefa4, d_001fefa4::f_001fefa4, 0x4010);  // pushes {r4, lr} first, as the original

// f_001ff124: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001ff124 {

inline constexpr guest::Function<0x001cb8fc, u32(u32, u32, u32)> call_001cb8fc;  // (from the original)
inline constexpr guest::Function<0x002b7c94, u32(u32, u32, u32)> call_002b7c94;  // (from the original)
inline constexpr guest::Function<0x002cbad8, u32(u32, u32, u32, u32)> call_002cbad8;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32)> call_00567ef0;  // (from the original)

u32 f_001ff124(gptr<CensusWindow> arg0) {
    arg0->word_0 = 0x8ed2e8;  // (from the original)
    u32 r2_1 = 0x8ed31cu;  // (from the original)
    arg0->word_24 = r2_1;
    u32 r0_2 = call_002cbad8(arg0.addr() + 0x480u, 0x8ed2e8u, r2_1, guest::cpu()->r[3]);  // (from the original)
    *gptr<u32>(r0_2 - 0x20cu) = 0x8f8b10;  // (from the original)
    u32 r0_4 = call_002b7c94(r0_2 - 0x5cu, 0x8f8b10u, guest::cpu()->r[2]);  // (from the original)
    u32 r0_6 = call_001cb8fc(r0_4 - 0x1b0u, guest::cpu()->r[1], guest::cpu()->r[2]);  // (from the original)
    u32 r0_8 = call_00567ef0(r0_6 - 0x248u, guest::cpu()->r[1], guest::cpu()->r[2]);  // (from the original)
    return r0_8 - 0x2cu;  // (from the original)
}

}  // namespace d_001ff124
GUEST_EXPORT_FRAMED(0x001ff124, d_001ff124::f_001ff124, 0x4010);  // pushes {r4, lr} first, as the original

// f_001ff5c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001ff5c0 {

struct __attribute__((packed)) Object_001ff5c0_0 {
    u8 unknown_0[0x108];  // (not used here)
    u32 word_108;
    u32 word_10c;
    u32 word_110;
    u32 word_114;
    u32 word_118;
    u32 word_11c;
    u32 word_120;
};
GUEST_OFFSET(Object_001ff5c0_0, word_108, 0x108);  // (from the original)
GUEST_OFFSET(Object_001ff5c0_0, word_10c, 0x10c);  // (from the original)
GUEST_OFFSET(Object_001ff5c0_0, word_110, 0x110);  // (from the original)
GUEST_OFFSET(Object_001ff5c0_0, word_114, 0x114);  // (from the original)
GUEST_OFFSET(Object_001ff5c0_0, word_118, 0x118);  // (from the original)
GUEST_OFFSET(Object_001ff5c0_0, word_11c, 0x11c);  // (from the original)
GUEST_OFFSET(Object_001ff5c0_0, word_120, 0x120);  // (from the original)

struct __attribute__((packed)) Local_001ff5c0_r1_1 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u8 unknown_10[0xc];  // (not used here)
    u32 word_1c;
    u8 unknown_20[0xc];  // (not used here)
    u32 word_2c;
};
GUEST_OFFSET(Local_001ff5c0_r1_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_001ff5c0_r1_1, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Local_001ff5c0_r1_1, word_2c, 0x2c);  // (from the original)


void f_001ff5c0(gptr<Object_001ff5c0_0> arg0) {
    gptr<Local_001ff5c0_r1_1> r1_1 = gptr<Local_001ff5c0_r1_1>(arg0->word_108 + 0x80u);  // (from the original)
    float S1_1 = std::bit_cast<float>(r1_1->word_c);
    float S0_1 = std::bit_cast<float>(r1_1->word_1c);
    float S2_1 = std::bit_cast<float>(r1_1->word_2c);
    float S3_1 = std::bit_cast<float>(arg0->word_11c) - S0_1;
    float S4_1 = std::bit_cast<float>(arg0->word_120) - S2_1;
    arg0->word_10c = std::bit_cast<u32>(std::bit_cast<float>(arg0->word_10c) + (std::bit_cast<float>(arg0->word_118) - S1_1));
    arg0->word_110 = std::bit_cast<u32>(std::bit_cast<float>(arg0->word_110) + S3_1);
    arg0->word_114 = std::bit_cast<u32>(std::bit_cast<float>(arg0->word_114) + S4_1);
    arg0->word_118 = std::bit_cast<u32>(S1_1);
    arg0->word_11c = std::bit_cast<u32>(S0_1);
    arg0->word_120 = std::bit_cast<u32>(S2_1);
}

}  // namespace d_001ff5c0
GUEST_EXPORT(0x001ff5c0, d_001ff5c0::f_001ff5c0);

// f_001ff92c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001ff92c {

struct __attribute__((packed)) Local_001ff92c_r0_4 {
    u8 unknown_0[0xcc];  // (not used here)
    u32 word_cc;
    u8 unknown_d0[0xa];  // (not used here)
    u8 byte_da;
    u8 unknown_db[0x2d];  // (not used here)
    u32 word_108;
    u32 word_10c;
    u32 word_110;
    u32 word_114;
    u32 word_118;
    u32 word_11c;
    u32 word_120;
    u32 word_124;
    u8 unknown_128[0x4];  // (not used here)
    u8 byte_12c;
    u8 byte_12d;
};
GUEST_OFFSET(Local_001ff92c_r0_4, word_cc, 0xcc);  // (from the original)
GUEST_OFFSET(Local_001ff92c_r0_4, byte_da, 0xda);  // (from the original)
GUEST_OFFSET(Local_001ff92c_r0_4, word_108, 0x108);  // (from the original)
GUEST_OFFSET(Local_001ff92c_r0_4, word_10c, 0x10c);  // (from the original)
GUEST_OFFSET(Local_001ff92c_r0_4, word_110, 0x110);  // (from the original)
GUEST_OFFSET(Local_001ff92c_r0_4, word_114, 0x114);  // (from the original)
GUEST_OFFSET(Local_001ff92c_r0_4, word_118, 0x118);  // (from the original)
GUEST_OFFSET(Local_001ff92c_r0_4, word_11c, 0x11c);  // (from the original)
GUEST_OFFSET(Local_001ff92c_r0_4, word_120, 0x120);  // (from the original)
GUEST_OFFSET(Local_001ff92c_r0_4, word_124, 0x124);  // (from the original)
GUEST_OFFSET(Local_001ff92c_r0_4, byte_12c, 0x12c);  // (from the original)
GUEST_OFFSET(Local_001ff92c_r0_4, byte_12d, 0x12d);  // (from the original)

struct __attribute__((packed)) Local_001ff92c_r3_1 {
    u8 unknown_0[0x28];  // (not used here)
    u16 half_28;
    u16 half_2a;
};
GUEST_OFFSET(Local_001ff92c_r3_1, half_28, 0x28);  // (from the original)
GUEST_OFFSET(Local_001ff92c_r3_1, half_2a, 0x2a);  // (from the original)

inline guest::global<u32, 0x001ff998> global_001ff998;  // (from the original)
inline constexpr guest::Function<0x00125aec, u32(u32)> call_00125aec;  // (from the original)
inline constexpr guest::Function<0x002b6de0, u32(u32, u32, u32, u32)> call_002b6de0;  // (from the original)

u32 f_001ff92c(u32 r0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 r0_1 = call_002b6de0(r0, r1, r2, r3);
    *gptr<u32>(r0_1) = 0x8ed374;  // (from the original)
    u32 r0_3 = call_00125aec(r0_1 + 0xe0u);  // (from the original)
    gptr<Local_001ff92c_r0_4> r0_4 = gptr<Local_001ff92c_r0_4>(r0_3 - 0xe0u);  // (from the original)
    gptr<Local_001ff92c_r3_1> r3_1 = gptr<Local_001ff92c_r3_1>(r0_4.addr() + 0x100u);  // (from the original)
    r0_4->word_108 = 0;
    r0_4->word_124 = 0;
    r3_1->half_28 = 0;
    r3_1->half_2a = 0;
    r0_4->byte_12c = 0;
    float S0_1 = std::bit_cast<float>(*global_001ff998);
    r0_4->byte_12d = 1;
    r0_4->word_10c = std::bit_cast<u32>(S0_1);
    r0_4->word_110 = std::bit_cast<u32>(S0_1);
    r0_4->word_114 = std::bit_cast<u32>(S0_1);
    r0_4->word_118 = std::bit_cast<u32>(S0_1);
    r0_4->word_11c = std::bit_cast<u32>(S0_1);
    r0_4->word_120 = std::bit_cast<u32>(S0_1);
    r0_4->word_cc = 0x100038e;  // (from the original)
    r0_4->byte_da = 1;
    guest::cpu()->s[0] = S0_1;
    return r0_4.addr();
}

}  // namespace d_001ff92c
GUEST_EXPORT_FRAMED(0x001ff92c, d_001ff92c::f_001ff92c, 0x4010);  // pushes {r4, lr} first, as the original

// f_001ff9d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001ff9d8 {

inline constexpr guest::Function<0x002b6ef8, u32(u32, u32, u32, u32)> call_002b6ef8;  // (from the original)
inline constexpr guest::Function<0x00569774, u32(u32, u32, u32, u32)> call_00569774;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32)> call_0056988c;  // (from the original)

u32 f_001ff9d8(gptr<DragIconNode> arg0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    arg0->word_0 = 0x8ed374;  // (from the original)
    call_00569774(arg0.addr() + 0xe0u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_3 = call_0056988c(arg0.addr() + 0xe0u, guest::cpu()->r[1]);  // (from the original)
    frame.release();
    return call_002b6ef8(r0_3 - 0xe0u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_001ff9d8
GUEST_EXPORT(0x001ff9d8, d_001ff9d8::f_001ff9d8);
