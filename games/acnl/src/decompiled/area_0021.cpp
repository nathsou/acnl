// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_00210c2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00210c2c {

struct __attribute__((packed)) Object_00210c2c_0 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
    u8 byte_9;
    u8 byte_a;
    u8 byte_b;
    u8 byte_c;
    u8 byte_d;
    u8 byte_e;
    u8 unknown_f[0x29];  // (not used here)
    u8 byte_38;
    u8 byte_39;
    u8 byte_3a;
    u8 unknown_3b[0x21];  // (not used here)
    u8 byte_5c;
    u8 byte_5d;
    u8 byte_5e;
    u8 unknown_5f[0x5];  // (not used here)
    u8 byte_64;
    u8 unknown_65[0xb];  // (not used here)
    u8 byte_70;
    u8 unknown_71[0x3];  // (not used here)
    u32 word_74;
    u8 unknown_78[0x10];  // (not used here)
    u8 byte_88;
    u8 unknown_89[0x1383];  // (not used here)
    u8 byte_140c;
};
GUEST_OFFSET(Object_00210c2c_0, byte_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00210c2c_0, byte_9, 0x9);  // (from the original)
GUEST_OFFSET(Object_00210c2c_0, byte_a, 0xa);  // (from the original)
GUEST_OFFSET(Object_00210c2c_0, byte_b, 0xb);  // (from the original)
GUEST_OFFSET(Object_00210c2c_0, byte_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00210c2c_0, byte_d, 0xd);  // (from the original)
GUEST_OFFSET(Object_00210c2c_0, byte_e, 0xe);  // (from the original)
GUEST_OFFSET(Object_00210c2c_0, byte_38, 0x38);  // (from the original)
GUEST_OFFSET(Object_00210c2c_0, byte_39, 0x39);  // (from the original)
GUEST_OFFSET(Object_00210c2c_0, byte_3a, 0x3a);  // (from the original)
GUEST_OFFSET(Object_00210c2c_0, byte_5c, 0x5c);  // (from the original)
GUEST_OFFSET(Object_00210c2c_0, byte_5d, 0x5d);  // (from the original)
GUEST_OFFSET(Object_00210c2c_0, byte_5e, 0x5e);  // (from the original)
GUEST_OFFSET(Object_00210c2c_0, byte_64, 0x64);  // (from the original)
GUEST_OFFSET(Object_00210c2c_0, byte_70, 0x70);  // (from the original)
GUEST_OFFSET(Object_00210c2c_0, word_74, 0x74);  // (from the original)
GUEST_OFFSET(Object_00210c2c_0, byte_88, 0x88);  // (from the original)
GUEST_OFFSET(Object_00210c2c_0, byte_140c, 0x140c);  // (from the original)

struct __attribute__((packed)) Local_00210c2c_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00210c2c_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00210c2c_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00210c2c_ea_1, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_00210c2c_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00210c2c_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00210c2c_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00210c2c_ea_2, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_00210c2c_r0_2 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Local_00210c2c_r0_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00210c2c_r0_2, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00210c2c_r0_2, word_10, 0x10);  // (from the original)

inline guest::global<u32, 0x00210e54> global_00210e54;  // (from the original)
inline guest::global<u32, 0x00845378> global_00845378;  // (from the original)
inline guest::global<u32, 0x0084537c> global_0084537c;  // (from the original)
inline guest::global<u32, 0x00845380> global_00845380;  // (from the original)
inline guest::global<u32, 0x00845390> global_00845390;  // (from the original)
inline constexpr guest::Function<0x001435b4, u32(u32, u32, u32, u32)> call_001435b4;  // (from the original)
inline constexpr guest::Function<0x001f9684, u32(u32, u32, u32, u32)> call_001f9684;  // (from the original)
inline constexpr guest::Function<0x0034a784, u32(u32, u32, u32, u32)> call_0034a784;  // (from the original)
inline constexpr guest::Function<0x0034a8b4, u32(u32, u32, u32, u32)> call_0034a8b4;  // (from the original)
inline constexpr guest::Function<0x0052652c, u32(u32, u32, u32, u32)> call_0052652c;  // (from the original)

void f_00210c2c(gptr<Object_00210c2c_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x1c);  // the original's stack frame
    u32 r0 = arg0.addr();
    arg0->byte_8 = 0;
    arg0->byte_88 = 0;
    arg0->byte_38 = 0;
    arg0->byte_3a = 1;
    arg0->byte_39 = 0;
    arg0->byte_9 = 0;
    arg0->byte_d = 1;
    arg0->byte_b = 1;
    arg0->byte_a = 0;
    arg0->byte_e = 1;
    float S0_1 = std::bit_cast<float>(*global_00210e54);
    arg0->byte_c = 1;
    arg0->byte_70 = 1;
    arg0->word_74 = std::bit_cast<u32>(S0_1);
    arg0->byte_5c = 1;
    arg0->byte_5d = 1;
    arg0->byte_5e = 4;
    arg0->byte_64 = 0;
    guest::cpu()->s[0] = S0_1;
    u32 r0_1 = call_001f9684(4u, r1, r2, r3);
    u32 r3_1 = guest::cpu()->r[3];
    gptr<Local_00210c2c_r0_2> r0_2 = gptr<Local_00210c2c_r0_2>(r0_1 + 0x24u);  // (from the original)
    call_0052652c(r0 + 0x1450u, r0_2.addr(), r0 + 0x1458u, r3_1);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_2 = guest::cpu()->r[2];
    u32 r3_2 = guest::cpu()->r[3];
    u32 r0_5 = call_001435b4(r0 + 0x1590u, r1_1, r2_2, r3_2);  // (from the original)
    u32 r0_6 = r0 + 0x4e4u;  // (from the original)
    u32 r1_2 = r0_2->word_4;
    call_0034a784(r0_6, r1_2, r0_5, 0xbu);  // (from the original)
    u32 r1_3 = guest::cpu()->r[1];
    u32 r2_3 = guest::cpu()->r[2];
    u32 r3_3 = guest::cpu()->r[3];
    u32 r0_8 = call_001435b4(r0 + 0x15f0u, r1_3, r2_3, r3_3);  // (from the original)
    u32 r0_9 = r0 + 0xc74u;  // (from the original)
    u32 r1_4 = r0_2->word_4;
    call_0034a784(r0_9, r1_4, r0_8, 0xbu);  // (from the original)
    u32 r1_5 = *global_00845378;
    u32 r2_4 = *global_0084537c;
    u32 r3_4 = *global_00845380;
    gptr<Local_00210c2c_ea_1> ea_1 = gptr<Local_00210c2c_ea_1>(frame.at(0x10).addr());  // (from the original)
    ea_1->word_0 = r1_5;
    ea_1->word_4 = r2_4;
    ea_1->word_8 = r3_4;
    gptr<Local_00210c2c_ea_2> ea_2 = gptr<Local_00210c2c_ea_2>(0x845384u);  // (from the original)
    u32 r1_6 = ea_2->word_0;
    u32 r2_5 = ea_2->word_4;
    u32 r3_5 = ea_2->word_8;
    *frame.at<u32>(0xc) = *global_00845390;  // (from the original)
    *frame.at<u32>(0) = r1_6;
    *frame.at<u32>(4) = r2_5;
    *frame.at<u32>(8) = r3_5;
    u32 r1_7 = r0_2->word_8;
    call_0034a8b4(r0_6, r1_7, 3u, frame.at(0x10).addr());  // (from the original)
    u32 r1_8 = r0_2->word_8;
    call_0034a8b4(r0_9, r1_8, 3u, frame.at(0x10).addr());  // (from the original)
    u32 r1_9 = r0_2->word_10;
    call_0034a8b4(r0_6, r1_9, 4u, frame.at(0).addr());
    u32 r1_10 = r0_2->word_10;
    call_0034a8b4(r0_9, r1_10, 4u, frame.at(0).addr());
    u32 r3_10 = r0 + 0x1650u;  // (from the original)
    *gptr<u8>(r3_10) = 0;
    *gptr<u8>(0x1651u + r0) = 1;  // (from the original)
    u32 r0_10 = 0x1652u;  // (from the original)
    *gptr<u8>(r0_10 + r0) = 2;
    u32 r0_11 = r0_10 | u32(s32(r0_10) >> 0xc);  // (from the original)
    *gptr<u8>(r0_11 + r0) = 2;
    u32 r0_12 = r0_11 + 1u;
    u32 r2_6 = r0_12 | u32(s32(r0_12) >> 0xa);  // (from the original)
    *gptr<u8>(r0_12 + r0) = 1;
    *gptr<u8>(r2_6 + r0) = 3;
    u32 r2_7 = r2_6 ^ 3u;
    *gptr<u8>(r2_7 + r0) = 2;
    u32 r1_11 = r2_7 | 3u;
    u32 r2_8 = r1_11 + u32(s32(3u) >> 1);
    *gptr<u8>(r1_11 + r0) = 3;
    *gptr<u8>(r2_8 + r0) = 4;
    u32 r2_9 = r2_8 | u32(s32(3u) >> 1);
    *gptr<u8>(r2_9 + r0) = 4;
    u32 r2_10 = r2_9 ^ 3u;
    *gptr<u8>(r2_10 + r0) = 3;
    u32 r0_13 = r2_10 | 3u;
    *gptr<u8>(r0_13 + r0) = 5;
    u32 r0_14 = r0_13 + 1u;
    *gptr<u8>(r0_14 + r0) = 4;
    u32 r0_15 = r0_14 | u32(s32(r0_14) >> 6);
    u32 r1_12 = r0_15 + 1u;
    *gptr<u8>(r0_15 + r0) = 5;
    *gptr<u8>(r1_12 + r0) = 6;
    u32 r1_13 = r1_12 | u32(s32(6u) >> 1);
    *gptr<u8>(r1_13 + r0) = 6;
    u32 r0_16 = r1_13 + u32(s32(6u) >> 2);
    *gptr<u8>(r0_16 + r0) = 5;
    *gptr<u8>((r0_16 | u32(s32(r0_16) >> 0xc)) + r0) = 7;  // (from the original)
    u32 r0_17 = call_001435b4(r3_10, r1_13, 5u, r3_10);
    *gptr<u32>(0x1404u + r0) = r0_17;  // (from the original)
    *gptr<u32>(0x1408u + r0) = 0x12;  // (from the original)
    arg0->byte_140c = 1;
    guest::cpu()->r[1] = 0x12u;  // (from the original)
    return;
}

}  // namespace d_00210c2c
GUEST_EXPORT_FRAMED(0x00210c2c, d_00210c2c::f_00210c2c, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_002127f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002127f4 {

struct __attribute__((packed)) Local_002127f4_ea_1 {
    u32 word_0;
};
GUEST_OFFSET(Local_002127f4_ea_1, word_0, 0x0);  // (from the original)

struct __attribute__((packed)) Local_002127f4_r6_1 {
    u8 byte_0;
};
GUEST_OFFSET(Local_002127f4_r6_1, byte_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x00210e64, u32(u32, u32, u32, u32)> call_00210e64;  // (from the original)
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)
inline constexpr guest::Function<0x00726e94, u32(u32, u32, u32, u32)> call_00726e94;  // (from the original)
inline constexpr guest::Function<0x00726f34, u32(u32, u32, u32, u32)> call_00726f34;  // (from the original)

u32 f_002127f4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_7 = 0;
    u32 r5_1 = r0;
    call_00210e64(r0, r1, r2, r3);
    u32 r3_1 = guest::cpu()->r[3];
    gptr<Local_002127f4_r6_1> r6_1 = gptr<Local_002127f4_r6_1>(r5_1 + 0x1662u);  // (from the original)
    u32 r0_1 = r6_1->byte_0;
    gptr<Local_002127f4_ea_1> ea_1 = gptr<Local_002127f4_ea_1>(r5_1 + ((r0_1 << 7) - ((r0_1 << 3) - r0_1) << 4) + 0x4e4u);  // (from the original)
    u32 r0_2 = ea_1->word_0;
    if (r0_2 == 0) {
        u32 r0_3 = call_00726f34(ea_1.addr(), ea_1.addr() + 4u, guest::cpu()->r[2], r3_1);
        r3_1 = guest::cpu()->r[3];
        r0_2 = s32(r0_3 - ea_1.addr() - 4u) >> 2;
        ea_1->word_0 = r0_2;
    }
    call_002fbb30(r1, ea_1.addr() + 4u, r0_2 << 2, r3_1);
    u32 r1_3 = r1 + (ea_1->word_0 << 2);
    u32 r0_4 = r6_1->byte_0;
    u32 r2_3 = r5_1 + 0x1404u;  // (from the original)
    r0 = call_00726e94(r5_1 + ((r0_4 << 7) - ((r0_4 << 3) - r0_4) << 4) + 0x4e4u, r1_3, r2_3, guest::cpu()->r[3]);  // (from the original)
    u32 r1_4 = r6_1->byte_0;
    u32 r12 = 0x803f0232u;  // (from the original)
    r1 = 0u;
    r3 = (r5_1 + ((r1_4 << 7) - ((r1_4 << 3) - r1_4) << 4) + 0x400u) + 0xe4u;  // (from the original)
    r2 = r1;
    do {
        u32 r4_1 = r1 + (r1 << 1);
        if (*gptr<u32>(r3 + ((r1 << 3) - r1 << 4) + 0x160u) != 0) {  // (from the original)
            *gptr<u32>(r0) = r2;
            *gptr<u32>(r0 + 4) = r4_1 + 0x203u | 0x80000000u | 0x2f0000u;  // (from the original)
            u32 r0_6 = r0 + 8;
            *gptr<u32>(r0_6) = r2;
            r0_7 = r0_6 + 4u;
            *gptr<u32>(r0_7) = r2;
        } else {
            *gptr<u32>(r0) = r2;
            *gptr<u32>(r0 + 4) = r4_1 + 0x205u | 0xf0000u;  // (from the original)
            r0_7 = r0 + 4u;
        }
        r0 = r0_7 + 4u;
        if (u32(*gptr<u8>(r3 + (r1 + (r1 << 2) << 2) + 0x6a0u)) != 0) {  // (from the original)
            *gptr<u32>(r0) = r1;
            *gptr<u32>(r0 + 4) = r12;
            u32 r0_8 = r0 + 8;
            *gptr<u32>(r0_8) = r2;
            u32 r0_9 = r0_8 + 4u;
            *gptr<u32>(r0_9) = r2;
            u32 r0_10 = r0_9 + 4u;
            *gptr<u32>(r0_10) = r2;
            u32 r0_11 = r0_10 + 4u;
            *gptr<u32>(r0_11) = r2;
            r0 = r0_11 + 4u;
        }
        r1 += 1u;
        guest::preempt();
    } while (s32(r1) < 0xc);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002127f4
GUEST_EXPORT_FRAMED(0x002127f4, d_002127f4::f_002127f4, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00212ba4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00212ba4 {

struct __attribute__((packed)) Local_00212ba4_ea_1 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
    u8 byte_4;
};
GUEST_OFFSET(Local_00212ba4_ea_1, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00212ba4_ea_1, byte_1, 0x1);  // (from the original)
GUEST_OFFSET(Local_00212ba4_ea_1, byte_2, 0x2);  // (from the original)
GUEST_OFFSET(Local_00212ba4_ea_1, byte_3, 0x3);  // (from the original)
GUEST_OFFSET(Local_00212ba4_ea_1, byte_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_00212ba4_ea_2 {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
};
GUEST_OFFSET(Local_00212ba4_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00212ba4_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00212ba4_ea_2, byte_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x00123678, u32(u32, u32, u32, u32)> call_00123678;  // (from the original)
inline constexpr guest::Function<0x00210c2c, u32(u32, u32, u32, u32)> call_00210c2c;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> call_002fd108;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x0031758c, u32(u32, u32, u32, u32)> call_0031758c;  // (from the original)
inline constexpr guest::Function<0x003494fc, u32(u32, u32, u32, u32)> call_003494fc;  // (from the original)
inline constexpr guest::Function<0x0034af5c, u32(u32, u32, u32, u32)> call_0034af5c;  // (from the original)
inline constexpr guest::Function<0x005673c8, u32(u32, u32, u32, u32)> call_005673c8;  // (from the original)

u32 f_00212ba4(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r3_5 = 0;
    u32 r5 = r0;
    u32 r0_1 = call_002fd108(0x166cu, r0, 4u, r3);  // (from the original)
    *gptr<u32>(r0_1 + 4u) = ~0u;
    *gptr<u32>(r0_1) = 0x8edc28;  // (from the original)
    u32 r0_3 = call_00123678(r0_1 + 8u, 0x8edc28u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r6 = 0u;
    gptr<Local_00212ba4_ea_1> ea_1 = gptr<Local_00212ba4_ea_1>(r0_3 + 0x80u);  // (from the original)
    ea_1->byte_0 = u8(r6);
    ea_1->byte_1 = u8(r6);
    ea_1->byte_2 = u8(r6);
    ea_1->byte_3 = u8(r6);
    ea_1->byte_4 = u8(r6);
    call_002f825c(ea_1.addr() + 8u, 0x210u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_6 = call_0034af5c((r0_3 - 8u) + 0x2a0u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_8 = call_003494fc(r0_6 + 0x94u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_10 = call_00301d0c(r0_8 + 0x1b0u, 0x34ab24u, 0x790u, 2u);  // (from the original)
    gptr<Local_00212ba4_ea_2> ea_2 = gptr<Local_00212ba4_ea_2>(r0_10 + 0xf20u);  // (from the original)
    ea_2->word_0 = r6;
    ea_2->word_4 = r6;
    ea_2->byte_8 = u8(r6);
    u32 r0_13 = call_00301d0c(((r0_10 - 0x400u) + 0x132cu) + 4u, 0x7e4470u, 1u, 0xcu);  // (from the original)
    u32 r1 = 0u;
    u32 ea_3 = r0_13 - 4u;
    *gptr<u8>(ea_3) = u8(r6);
    r0 = ea_3;
    do {
        u32 r2_5 = r0 + r1;
        r1 += 1u;
        *gptr<u8>(r2_5 + 4u) = u8(r6);
        guest::preempt();
    } while (r1 < 0xcu);  // (from the original)
    u32 r2 = 0u;
    r1 = r2;
    do {
        r3_5 = r0 + (r2 << 2);
        u32 r2_6 = r2 + 1u;
        r1 += 2u;
        *gptr<u32>(r3_5 + 0x10u) = r6;  // (from the original)
        r2 = r2_6 + 1u;
        *gptr<u32>((r0 + (r2_6 << 2)) + 0x10u) = r6;  // (from the original)
        guest::preempt();
    } while (r1 < 0xcu);  // (from the original)
    u32 ea_4 = r0 + 0x40u;  // (from the original)
    *gptr<u32>(ea_4) = r6;
    u32 ea_5 = ea_4 + 4u;
    *gptr<u32>(ea_5) = r6;
    u32 r0_15 = call_005673c8(ea_5 + 4u, r1, r2, r3_5);
    u32 r0_17 = call_00301d0c(r0_15 + 0x78u, 0x3040fcu, 0xcu, 5u);  // (from the original)
    u32 r0_19 = call_00301d0c(r0_17 + 0x3cu, 0x3040fcu, 0xcu, 5u);  // (from the original)
    u32 r0_21 = call_00301d0c(r0_19 + 0x3cu, 0x3040fcu, 0xcu, 5u);  // (from the original)
    u32 r0_23 = call_00301d0c(r0_21 + 0x48u, 0x3040fcu, 0xcu, 0x10u);  // (from the original)
    u32 r4_2 = r0_23 - 0x1590u;  // (from the original)
    *gptr<u8>(r0_23 + 0xd2u) = u8(r6);  // (from the original)
    *gptr<u16>(0x1664u + r4_2) = u16(r6);  // (from the original)
    *gptr<u16>(r0_23 + 0xd6u) = u16(r6);  // (from the original)
    *gptr<u8>(r0_23 + 0xd8u) = 0xff;  // (from the original)
    u32 r1_4 = 0x1669u;  // (from the original)
    *gptr<u8>(r1_4 + r4_2) = u8(r6);
    *gptr<u8>(r1_4 + 1u + r4_2) = u8(r6);
    *frame.at<u32>(0xc) = 0x212d88;  // (from the original)
    *frame.at<u32>(8) = 0x9047f8;  // (from the original)
    *frame.at<u32>(0) = 1;
    *frame.at<u32>(4) = r6;
    call_0031758c(r4_2 + 0x1458u, 0x1000u, r5, frame.at(8).addr());  // (from the original)
    call_00210c2c(r4_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return r4_2;
}

}  // namespace d_00212ba4
GUEST_EXPORT_FRAMED(0x00212ba4, d_00212ba4::f_00212ba4, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00212ed0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00212ed0 {

struct __attribute__((packed)) Object_00212ed0_0 {
    u8 unknown_0[0x1669];  // (not used here)
    u8 byte_1669;
};
GUEST_OFFSET(Object_00212ed0_0, byte_1669, 0x1669);  // (from the original)

inline constexpr guest::Function<0x001f963c, u32(u32, u32)> call_001f963c;  // (from the original)
inline constexpr guest::Function<0x001f9684, u32(u32, u32)> call_001f9684;  // (from the original)

void f_00212ed0(gptr<Object_00212ed0_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r0_1 = arg0->byte_1669;
    if (r0_1 == 0) {
        return;
    }
    u32 r0_2 = call_001f9684(r0_1, r1);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        return;
    }
    u32 r0_3 = call_001f9684(r0_2, r1_1);
    call_001f963c(r0_3, r0);
    return;
}

}  // namespace d_00212ed0
GUEST_EXPORT_FRAMED(0x00212ed0, d_00212ed0::f_00212ed0, 0x4010);  // pushes {r4, lr} first, as the original

// f_00213868: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00213868 {

struct __attribute__((packed)) Object_00213868_0 {
    u8 unknown_0[0x31c];  // (not used here)
    u32 word_31c;
    u8 unknown_320[0x68];  // (not used here)
    u32 word_388;
    u8 unknown_38c[0x4];  // (not used here)
    u32 word_390;
    u8 unknown_394[0x4];  // (not used here)
    u32 word_398;
    u8 unknown_39c[0x28];  // (not used here)
    u32 word_3c4;
    u32 word_3c8;
};
GUEST_OFFSET(Object_00213868_0, word_31c, 0x31c);  // (from the original)
GUEST_OFFSET(Object_00213868_0, word_388, 0x388);  // (from the original)
GUEST_OFFSET(Object_00213868_0, word_390, 0x390);  // (from the original)
GUEST_OFFSET(Object_00213868_0, word_398, 0x398);  // (from the original)
GUEST_OFFSET(Object_00213868_0, word_3c4, 0x3c4);  // (from the original)
GUEST_OFFSET(Object_00213868_0, word_3c8, 0x3c8);  // (from the original)

struct __attribute__((packed)) Object_00213868_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00213868_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00213868_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00213868_1, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_00213868_r0_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00213868_r0_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00213868_r0_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00213868_r0_1, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_00213868_r1_1 {
    u8 unknown_0[0x40];  // (not used here)
    u32 word_40;
    u32 word_44;
    u8 unknown_48[0x6f];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_00213868_r1_1, word_40, 0x40);  // (from the original)
GUEST_OFFSET(Local_00213868_r1_1, word_44, 0x44);  // (from the original)
GUEST_OFFSET(Local_00213868_r1_1, byte_b7, 0xb7);  // (from the original)

inline guest::global<u32, 0x00213918> global_00213918;  // (from the original)
inline guest::global<u32, 0x0021391c> global_0021391c;  // (from the original)
inline guest::global<u32, 0x00213924> global_00213924;  // (from the original)
inline guest::global<u32, 0x0021392c> global_0021392c;  // (from the original)

void f_00213868(gptr<Object_00213868_0> arg0, gptr<Object_00213868_1> arg1) {
    u32 r0 = arg0.addr();
    gptr<Local_00213868_r0_1> r0_1 = gptr<Local_00213868_r0_1>(0u);
    float S4_1 = std::bit_cast<float>(arg0->word_3c8);
    float S0_1 = std::bit_cast<float>(arg1->word_0);
    float S1_1 = std::bit_cast<float>(arg1->word_4);
    float S2_1 = std::bit_cast<float>(arg1->word_8);
    float S3_1 = (std::bit_cast<float>(arg0->word_388) + std::bit_cast<float>(arg0->word_390) - std::bit_cast<float>(arg0->word_3c4)) * S4_1;
    if (s32(std::bit_cast<u32>(S3_1)) > s32(0x43c80000u)) {  // (from the original)
        float S0_2 = std::bit_cast<float>(*global_00213918) / S3_1 * S4_1;
        arg0->word_3c8 = std::bit_cast<u32>(S0_2);
        gptr<Local_00213868_r1_1> r1_1 = gptr<Local_00213868_r1_1>(arg0->word_31c);
        r1_1->word_40 = std::bit_cast<u32>(S0_2);
        r1_1->word_44 = std::bit_cast<u32>(S0_2);
        S0_1 = std::bit_cast<float>(*global_0021391c);
        r1_1->byte_b7 = u8(u32(r1_1->byte_b7) & 0xcfu);  // (from the original)
    }
    float S3_2 = std::bit_cast<float>(arg0->word_398) * std::bit_cast<float>(arg0->word_3c8);
    u32 r1_2 = std::bit_cast<u32>(S0_1 + S3_2);
    if (s32(r1_2) > s32(0x43480000u)) {  // (from the original)
        S0_1 = std::bit_cast<float>(*global_00213924) - S3_2;
        r0_1 = gptr<Local_00213868_r0_1>(r0 + 0x3ccu);  // (from the original)
        r0_1->word_0 = std::bit_cast<u32>(S0_1);
        r0_1->word_4 = std::bit_cast<u32>(S1_1);
        r0_1->word_8 = std::bit_cast<u32>(S2_1);
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return;
    }
    r1_2 = std::bit_cast<u32>(S0_1 - S3_2);
    if (r1_2 > 0xc3480000u) {  // (from the original)
        S0_1 = S3_2 + std::bit_cast<float>(*global_0021392c);
    }
    r0_1 = gptr<Local_00213868_r0_1>(r0 + 0x3ccu);  // (from the original)
    r0_1->word_0 = std::bit_cast<u32>(S0_1);
    r0_1->word_4 = std::bit_cast<u32>(S1_1);
    r0_1->word_8 = std::bit_cast<u32>(S2_1);
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return;
}

}  // namespace d_00213868
GUEST_EXPORT(0x00213868, d_00213868::f_00213868);

// f_00213930: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00213930 {

struct __attribute__((packed)) Object_00213930_0 {
    u8 unknown_0[0x31c];  // (not used here)
    u32 word_31c;
    u8 unknown_320[0x98];  // (not used here)
    u32 word_3b8;
    u32 word_3bc;
    u32 word_3c0;
    u8 unknown_3c4[0x4];  // (not used here)
    u32 word_3c8;
    u32 word_3cc;
    u32 word_3d0;
    u32 word_3d4;
    u32 word_3d8;
    u32 word_3dc;
    u32 word_3e0;
    u8 unknown_3e4[0x13];  // (not used here)
    u8 byte_3f7;
};
GUEST_OFFSET(Object_00213930_0, word_31c, 0x31c);  // (from the original)
GUEST_OFFSET(Object_00213930_0, word_3b8, 0x3b8);  // (from the original)
GUEST_OFFSET(Object_00213930_0, word_3bc, 0x3bc);  // (from the original)
GUEST_OFFSET(Object_00213930_0, word_3c0, 0x3c0);  // (from the original)
GUEST_OFFSET(Object_00213930_0, word_3c8, 0x3c8);  // (from the original)
GUEST_OFFSET(Object_00213930_0, word_3cc, 0x3cc);  // (from the original)
GUEST_OFFSET(Object_00213930_0, word_3d0, 0x3d0);  // (from the original)
GUEST_OFFSET(Object_00213930_0, word_3d4, 0x3d4);  // (from the original)
GUEST_OFFSET(Object_00213930_0, word_3d8, 0x3d8);  // (from the original)
GUEST_OFFSET(Object_00213930_0, word_3dc, 0x3dc);  // (from the original)
GUEST_OFFSET(Object_00213930_0, word_3e0, 0x3e0);  // (from the original)
GUEST_OFFSET(Object_00213930_0, byte_3f7, 0x3f7);  // (from the original)

struct __attribute__((packed)) Local_00213930_r1_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00213930_r1_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00213930_r1_1, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_00213930_r1_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00213930_r1_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00213930_r1_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00213930_r1_2, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_00213930_r1_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00213930_r1_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00213930_r1_3, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x00213a80> global_00213a80;  // (from the original)
inline constexpr guest::Function<0x004b71c8, u32(u32, u32)> call_004b71c8;  // (from the original)

void f_00213930(gptr<Object_00213930_0> arg0) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r0 = arg0.addr();
    float S2_1 = 0;
    float S0_2 = 0;
    float S3_2 = 0;
    gptr<Local_00213930_r1_1> r1_1 = gptr<Local_00213930_r1_1>(0u);
    float S1_2 = 0;
    float S2_2 = 0;
    if (u32(arg0->byte_3f7) != 0) {
        float S3_1 = std::bit_cast<float>(arg0->word_3cc);
        S2_1 = std::bit_cast<float>(arg0->word_3d0);
        float S1_1 = std::bit_cast<float>(arg0->word_3d8) - S3_1;
        float S0_1 = std::bit_cast<float>(arg0->word_3dc) - S2_1;
        S0_2 = sqrtf(S1_1 * S1_1 + S0_1 * S0_1);
        if (s32(0x40c00000u) <= s32(std::bit_cast<u32>(S0_2))) {  // (from the original)
            goto L_2139b4;
        }
        arg0->word_3d8 = std::bit_cast<u32>(S3_1);
        arg0->word_3dc = arg0->word_3d0;
        arg0->word_3e0 = arg0->word_3d4;
        goto L_213a14;
    }
    arg0->word_3d8 = arg0->word_3cc;
    arg0->word_3dc = arg0->word_3d0;
    arg0->word_3e0 = arg0->word_3d4;
    arg0->byte_3f7 = 1;
    goto L_213a14;
L_2139b4:;
    S3_2 = std::bit_cast<float>(*global_00213a80) / S0_2;
    r1_1 = gptr<Local_00213930_r1_1>(r0 + 0x3d8u);  // (from the original)
    S1_2 = (S2_1 - std::bit_cast<float>(arg0->word_3dc)) * S3_2;
    S2_2 = (std::bit_cast<float>(arg0->word_3d4) - std::bit_cast<float>(arg0->word_3e0)) * S3_2;
    arg0->word_3d8 = std::bit_cast<u32>(std::bit_cast<float>(arg0->word_3d8) + (std::bit_cast<float>(arg0->word_3cc) - std::bit_cast<float>(arg0->word_3d8)) * S3_2);
    r1_1->word_4 = std::bit_cast<u32>(std::bit_cast<float>(arg0->word_3dc) + S1_2);
    r1_1->word_8 = std::bit_cast<u32>(std::bit_cast<float>(r1_1->word_8) + S2_2);
L_213a14:;
    float S0_3 = std::bit_cast<float>(arg0->word_3c8);
    gptr<Local_00213930_r1_2> r1_2 = gptr<Local_00213930_r1_2>(r0 + 0x3d8u);  // (from the original)
    float S3_3 = std::bit_cast<float>(r1_2->word_0);
    float S4_1 = std::bit_cast<float>(r1_2->word_4);
    float S5_1 = std::bit_cast<float>(r1_2->word_8);
    gptr<Local_00213930_r1_3> r1_3 = gptr<Local_00213930_r1_3>(frame.at(4).addr());
    float S2_3 = S3_3 - float(s32(std::bit_cast<u32>(std::bit_cast<float>(vcvt_sz_f(std::bit_cast<float>(arg0->word_3b8) * S0_3)))));
    float S1_3 = S5_1 - float(s32(std::bit_cast<u32>(std::bit_cast<float>(vcvt_sz_f(std::bit_cast<float>(arg0->word_3c0) * S0_3)))));
    float S0_4 = S4_1 - float(s32(std::bit_cast<u32>(std::bit_cast<float>(vcvt_sz_f(std::bit_cast<float>(arg0->word_3bc) * S0_3)))));
    *frame.at<u32>(0) = std::bit_cast<u32>(S2_3);
    r1_3->word_0 = std::bit_cast<u32>(S0_4);
    r1_3->word_4 = std::bit_cast<u32>(S1_3);
    u32 r0_1 = arg0->word_31c;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_3;
    call_004b71c8(r0_1, frame.at(0).addr());
    return;
}

}  // namespace d_00213930
GUEST_EXPORT_FRAMED(0x00213930, d_00213930::f_00213930, 0x4000);  // pushes {lr} first, as the original

// f_00213b54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00213b54 {

struct __attribute__((packed)) Object_00213b54_0 {
    u8 unknown_0[0x3d0];  // (not used here)
    u32 word_3d0;
    u8 unknown_3d4[0x154];  // (not used here)
    u32 word_528;
    u32 word_52c;
};
GUEST_OFFSET(Object_00213b54_0, word_3d0, 0x3d0);  // (from the original)
GUEST_OFFSET(Object_00213b54_0, word_528, 0x528);  // (from the original)
GUEST_OFFSET(Object_00213b54_0, word_52c, 0x52c);  // (from the original)

struct __attribute__((packed)) Object_00213b54_1 {
    u8 unknown_0[0x3d0];  // (not used here)
    u32 word_3d0;
    u8 unknown_3d4[0x154];  // (not used here)
    u32 word_528;
    u32 word_52c;
};
GUEST_OFFSET(Object_00213b54_1, word_3d0, 0x3d0);  // (from the original)
GUEST_OFFSET(Object_00213b54_1, word_528, 0x528);  // (from the original)
GUEST_OFFSET(Object_00213b54_1, word_52c, 0x52c);  // (from the original)

inline constexpr guest::Function<0x00213b54, u32(u32, u32, u32, u32)> call_00213b54;  // (from the original)

u32 f_00213b54(gptr<Object_00213b54_0> arg0, gptr<Object_00213b54_1> arg1) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 fpsr = guest::cpu()->fpscr;
    float S1_1 = std::bit_cast<float>(arg1->word_3d0);
    float S0_1 = std::bit_cast<float>(arg0->word_3d0);
    u32 r0_1 = r1;
    u32 fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S1_1, S0_1);  // (from the original)
    if (!(fpsr_1 >> 0x1e & 1) && fpsr_1 >> 0x1f == (fpsr_1 >> 0x1c & 1)) {  // (from the original)
        arg1->word_52c = r0;
        u32 r2_1 = arg0->word_528;
        if (r2_1 != 0) {
            *gptr<u32>(r2_1 + 0x52cu) = r0_1;  // (from the original)
            arg1->word_528 = arg0->word_528;
        }
        arg0->word_528 = r0_1;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return r0_1;
    }
    u32 r2_2 = arg0->word_52c;
    if (r2_2 == 0) {
        arg0->word_52c = r0_1;
        *gptr<u32>(r0_1 + 0x528u) = r0;  // (from the original)
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return r0;
    }
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    r0_1 = call_00213b54(r2_2, r1, r2_2, guest::cpu()->r[3]);
    S0_1 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    *gptr<u32>(r0 + 0x52cu) = r0_1;  // (from the original)
    *gptr<u32>(r0_1 + 0x528u) = r0;  // (from the original)
    return r0;
}

}  // namespace d_00213b54
GUEST_EXPORT_FRAMED(0x00213b54, d_00213b54::f_00213b54, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00214e88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00214e88 {

inline guest::global<u8, 0x0094f7e1> global_0094f7e1;  // (from the original)
inline guest::global<u8, 0x0094fd80> global_0094fd80;  // (from the original)
inline guest::global<u32, 0x00950058> global_00950058;  // (from the original)
inline constexpr guest::Function<0x00281cc8, u32(u32, u32)> call_00281cc8;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x004ee524, u32(u32, u32)> call_004ee524;  // (from the original)
inline constexpr guest::Function<0x005896c4, u32(u32, u32)> call_005896c4;  // (from the original)
inline constexpr guest::Function<0x006d1f38, u32(u32, u32)> call_006d1f38;  // (from the original)
inline constexpr guest::Function<0x0071e9e8, u32(u32, u32)> call_0071e9e8;  // (from the original)

u32 f_00214e88(u32 r0) {
    u32 r1 = 0;
    u32 r0_1 = call_002f74c8(r0, r1);
    u32 r0_2 = call_002f74e0(0x10u, r0_1);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_2 != 0 || *global_00950058 != 0) {
        return 1u;
    }
    u32 r0_3 = call_006d1f38(0x80u, r1_1);  // (from the original)
    u32 r1_2 = guest::cpu()->r[1];
    if (r0_3 != 0) {
        return 1u;
    }
    u32 r0_4 = call_005896c4(r0_3, r1_2);
    u32 r1_3 = guest::cpu()->r[1];
    if (r0_4 != 0) {
        return 1u;
    }
    u32 r0_5 = call_00281cc8(r0_4, r1_3);
    u32 r0_6 = call_0071e9e8(r0_5, guest::cpu()->r[1]);
    u32 r1_5 = guest::cpu()->r[1];
    if (r0_6 != 0) {
        return 1u;
    }
    u32 r0_7 = call_004ee524(r0_6, r1_5);
    u32 r1_6 = guest::cpu()->r[1];
    if (r0_7 == 1u) {
        return r0_7;
    }
    u32 r0_8 = call_006d1f38(0x63u, r1_6);  // (from the original)
    u32 r1_7 = guest::cpu()->r[1];
    if (r0_8 != 0) {
        return 1u;
    }
    u32 r0_9 = call_006d1f38(0x7bu, r1_7);  // (from the original)
    u32 r1_8 = guest::cpu()->r[1];
    if (r0_9 != 0) {
        return 1u;
    }
    u32 r0_10 = *global_0094f7e1;
    if (r0_10 != 0) {
        return 1u;
    }
    u32 r0_11 = call_002f74c8(r0_10, r1_8);
    if (r0_11 == 0x5cu) {  // (from the original)
        return 1u;
    }
    u32 r0_12 = *global_0094fd80;
    if (r0_12 == 0) {
        return r0_12;
    }
    return 1u;
}

}  // namespace d_00214e88
GUEST_EXPORT_FRAMED(0x00214e88, d_00214e88::f_00214e88, 0x4010);  // pushes {r4, lr} first, as the original

// f_002161a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002161a4 {

struct __attribute__((packed)) Local_002161a4_ea_2 {
    u8 byte_0;
};
GUEST_OFFSET(Local_002161a4_ea_2, byte_0, 0x0);  // (from the original)

inline guest::global<u8, 0x0094ed72> global_0094ed72;  // (from the original)
inline constexpr guest::Function<0x00305f2c, u32(u32, u32, u32, u32)> call_00305f2c;  // (from the original)
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> call_00305f44;  // (from the original)
inline constexpr guest::Function<0x0062512c, u32(u32, u32, u32, u32)> call_0062512c;  // (from the original)

void f_002161a4(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r1_2 = 0;
    u32 r4_1 = r0;
    u32 r0_1 = call_00305f2c(r0, r1, r2, r3);
    if (r0_1 != 2u) {
        return;
    }
    *frame.at<u32>(0) = 0;
    *frame.at<u8>(4) = 0xa;  // (from the original)
    u32 r0_2 = call_00305f44(0u, 0xau, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_3 = *gptr<u8>(0x8461b4u + r0_2);  // (from the original)
    call_0062512c(r0_3, frame.at(0).addr(), 1u, guest::cpu()->r[3]);
    if (*gptr<u32>(0x2088u + r4_1) == 0) {  // (from the original)
        return;
    }
    r0 = 0u;
    u32 r12 = 1u;
    r2 = r4_1 + 0x2084u;  // (from the original)
    do {
        u32 r3_3 = r0 & 0xffu;  // (from the original)
        if (*gptr<u32>(r2) <= r0) {
            r1_2 = *gptr<u32>(r2 + 4u);
            goto L_216228;
        }
        r1_2 = *gptr<u32>(r2 + 4u) + (r0 * 0xa7u << 2);  // (from the original)
L_216228:;
        u32 r4_2 = *global_0094ed72;
        *gptr<u8>(r1_2 + 0x298u) = u8(r0);  // (from the original)
        gptr<Local_002161a4_ea_2> ea_2 = gptr<Local_002161a4_ea_2>(r1_2 + 0x29bu);  // (from the original)
        u32 r3_4 = ea_2->byte_0;
        r0 += 1u;
        ea_2->byte_0 = u8(((r4_2 & lsl_r(r12, r3_3 & 0xff)) == 0 ? 1u : 0u) == 0 ? r3_4 & ~1u : r3_4 | 1u);  // (from the original)
        guest::preempt();
    } while (r0 < 4u);
    return;
}

}  // namespace d_002161a4
GUEST_EXPORT_FRAMED(0x002161a4, d_002161a4::f_002161a4, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_002170bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002170bc {

inline constexpr guest::Function<0x00569dc4, u32(u32, u32, u32, u32)> call_00569dc4;  // (from the original)
inline constexpr guest::Function<0x0056a974, u32(u32, u32, u32, u32)> call_0056a974;  // (from the original)

u32 f_002170bc(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r0_1 = call_00569dc4(r0, r1, r2, r3);
    *frame.at<u32>(4) = 0x2170f4;  // (from the original)
    *frame.at<u32>(0) = 0x9047f8;  // (from the original)
    u32 r0_2 = call_0056a974(0x98a30cu, frame.at(0).addr(), *gptr<u32>(r0_1 + 4u), 0x80u);  // (from the original)
    return r0_2;
}

}  // namespace d_002170bc
GUEST_EXPORT_FRAMED(0x002170bc, d_002170bc::f_002170bc, 0x4000);  // pushes {lr} first, as the original

// f_002194d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002194d8 {

struct __attribute__((packed)) Local_002194d8_r0_2 {
    u8 unknown_0[0x59c];  // (not used here)
    u32 word_59c;
    u32 word_5a0;
    u32 word_5a4;
};
GUEST_OFFSET(Local_002194d8_r0_2, word_59c, 0x59c);  // (from the original)
GUEST_OFFSET(Local_002194d8_r0_2, word_5a0, 0x5a0);  // (from the original)
GUEST_OFFSET(Local_002194d8_r0_2, word_5a4, 0x5a4);  // (from the original)

struct __attribute__((packed)) Local_002194d8_r0_3 {
    u8 unknown_0[0x59c];  // (not used here)
    u32 word_59c;
    u32 word_5a0;
    u32 word_5a4;
};
GUEST_OFFSET(Local_002194d8_r0_3, word_59c, 0x59c);  // (from the original)
GUEST_OFFSET(Local_002194d8_r0_3, word_5a0, 0x5a0);  // (from the original)
GUEST_OFFSET(Local_002194d8_r0_3, word_5a4, 0x5a4);  // (from the original)

struct __attribute__((packed)) Local_002194d8_r0_4 {
    u8 unknown_0[0x59c];  // (not used here)
    u32 word_59c;
    u32 word_5a0;
    u32 word_5a4;
};
GUEST_OFFSET(Local_002194d8_r0_4, word_59c, 0x59c);  // (from the original)
GUEST_OFFSET(Local_002194d8_r0_4, word_5a0, 0x5a0);  // (from the original)
GUEST_OFFSET(Local_002194d8_r0_4, word_5a4, 0x5a4);  // (from the original)

inline guest::global<u32, 0x0098ad64> global_0098ad64;  // (from the original)
inline guest::global<u32, 0x0098ad68> global_0098ad68;  // (from the original)
inline guest::global<u32, 0x0098ad6c> global_0098ad6c;  // (from the original)
inline guest::global<u32, 0x0098ad70> global_0098ad70;  // (from the original)
inline guest::global<u32, 0x0098ad74> global_0098ad74;  // (from the original)
inline guest::global<u32, 0x0098ad78> global_0098ad78;  // (from the original)
inline guest::global<u32, 0x0098ad7c> global_0098ad7c;  // (from the original)
inline guest::global<u32, 0x0098ad80> global_0098ad80;  // (from the original)
inline guest::global<u32, 0x0098ad84> global_0098ad84;  // (from the original)
inline constexpr guest::Function<0x001e62dc, u32(u32, u32, u32, u32)> call_001e62dc;  // (from the original)
inline constexpr guest::Function<0x00218220, u32(u32, u32, u32, u32)> call_00218220;  // (from the original)
inline constexpr guest::Function<0x002198b4, u32(u32, u32, u32, u32)> call_002198b4;  // (from the original)
inline constexpr guest::Function<0x007207d8, u32(u32, u32, u32, u32)> call_007207d8;  // (from the original)

u32 f_002194d8(u32 r0, u32 r1, u32 r2, u32 r3) {
    gptr<Local_002194d8_r0_2> r0_2 = gptr<Local_002194d8_r0_2>(0u);
    gptr<Local_002194d8_r0_3> r0_3 = gptr<Local_002194d8_r0_3>(0u);
    gptr<Local_002194d8_r0_4> r0_4 = gptr<Local_002194d8_r0_4>(0u);
    u32 r3_2 = 0;
    u32 r2_1 = 0;
    u32 r3_3 = 0;
    u32 r3_4 = 0;
    u32 r3_5 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    u32 r5 = r0;
    u32 r6 = r1;
    u32 r7 = r2;
    u32 r4 = 0u;
    do {
        r0 = *gptr<u32>(r5 + (r4 << 2) + 0x578u);  // (from the original)
        if (s32(r0) <= 0) {
            u32 r1_1 = r4 + (r4 << 1);
            r0 = call_007207d8(r5 + (r1_1 << 3) + 0x500u, r1_1, r2, r3);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0 == 0) {
                goto L_219528;
            }
        }
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 5);
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_219528:;
    if (s32(r4) < 0) {
        guest::cpu()->r[13] += 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (r7 != 1u) {
        if (r7 == 2u) {
            goto L_219574;
        }
        if (r7 != 3u) {
            goto L_2195c0;
        }
        goto L_21959c;
    }
    r0_2 = gptr<Local_002194d8_r0_2>(r5 + (r4 + (r4 << 1) << 2));
    r0_2->word_59c = *global_0098ad64;
    r0_2->word_5a0 = *global_0098ad68;
    r0_2->word_5a4 = *global_0098ad6c;
    goto L_2195c0;
L_219574:;
    r0_3 = gptr<Local_002194d8_r0_3>(r5 + (r4 + (r4 << 1) << 2));
    r0_3->word_59c = *global_0098ad70;
    r0_3->word_5a0 = *global_0098ad74;
    r0_3->word_5a4 = *global_0098ad78;
    goto L_2195c0;
L_21959c:;
    r0_4 = gptr<Local_002194d8_r0_4>(r5 + (r4 + (r4 << 1) << 2));
    r0_4->word_59c = *global_0098ad7c;
    r0_4->word_5a0 = *global_0098ad80;
    r0_4->word_5a4 = *global_0098ad84;
L_2195c0:;
    *gptr<u32>(r5 + (r4 << 2) + 0x578u) = 0x78;  // (from the original)
    u32 r0_5 = r4 + (r4 << 1);
    call_00218220(r5, r5 + (r0_5 << 3) + 0x500u, r6, r5 + (r0_5 << 2) + 0x59cu);  // (from the original)
    if (r6 != 0x23u) {  // (from the original)
        if (r6 == 0x24u) {  // (from the original)
            goto L_219660;
        }
        if (r6 == 0x25u) {  // (from the original)
            goto L_219688;
        }
        if (r6 == 0x26u) {  // (from the original)
            goto L_2196b0;
        }
        u32 zf_1 = r6 == 0x28u;  // (from the original)
        guest::cpu()->r[13] += 0x18u;  // (from the original)
        if (zf_1) {
            r3_2 = 0x82u;  // (from the original)
            r2_1 = 0x50u;  // (from the original)
        } else {
            r3_2 = 0x5au;  // (from the original)
            r2_1 = 0x28u;  // (from the original)
        }
        return call_001e62dc(0u, 0x1eu, r2_1, r3_2);  // (from the original)
    }
    call_001e62dc(4u, 0x1eu, 0x28u, 0x5au);  // (from the original)
    r3_3 = guest::cpu()->r[3];
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    return call_002198b4(r5, 0x1000796u, r4, r3_3);  // (from the original)
L_219660:;
    call_001e62dc(8u, 0x1eu, 0x50u, 0x82u);  // (from the original)
    r3_4 = guest::cpu()->r[3];
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    return call_002198b4(r5, 0x1000797u, r4, r3_4);  // (from the original)
L_219688:;
    call_001e62dc(1u, 0x1eu, 0x28u, 0x5au);  // (from the original)
    r3_5 = guest::cpu()->r[3];
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    return call_002198b4(r5, 0x1000795u, r4, r3_5);  // (from the original)
L_2196b0:;
    call_001e62dc(8u, 0x1eu, 0x28u, 0x5au);  // (from the original)
    u32 r3_6 = guest::cpu()->r[3];
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    return call_002198b4(r5, 0x1000796u, r4, r3_6);  // (from the original)
}

}  // namespace d_002194d8
GUEST_EXPORT(0x002194d8, d_002194d8::f_002194d8);

// f_002198b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002198b4 {

struct __attribute__((packed)) Local_002198b4_ea_2 {
    u32 word_0;
    u8 unknown_4[0x10];  // (not used here)
    u32 word_14;
};
GUEST_OFFSET(Local_002198b4_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002198b4_ea_2, word_14, 0x14);  // (from the original)

struct __attribute__((packed)) Local_002198b4_r0_5 {
    u8 unknown_0[0x24];  // (not used here)
    u32 word_24;
    u32 word_28;
    u32 word_2c;
};
GUEST_OFFSET(Local_002198b4_r0_5, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Local_002198b4_r0_5, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Local_002198b4_r0_5, word_2c, 0x2c);  // (from the original)

struct __attribute__((packed)) Local_002198b4_r1_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002198b4_r1_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002198b4_r1_2, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_002198b4_r2_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002198b4_r2_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002198b4_r2_3, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_002198b4_r4_1 {
    u8 unknown_0[0x7c4];  // (not used here)
    u32 word_7c4;
    u8 unknown_7c8[0x10];  // (not used here)
    u32 word_7d8;
};
GUEST_OFFSET(Local_002198b4_r4_1, word_7c4, 0x7c4);  // (from the original)
GUEST_OFFSET(Local_002198b4_r4_1, word_7d8, 0x7d8);  // (from the original)

inline guest::global<u32, 0x0094edd8> global_0094edd8;  // (from the original)
inline guest::global<u32, 0x0094f250> global_0094f250;  // (from the original)
inline constexpr guest::Function<0x00250438, u32(u32, u32, u32)> call_00250438;  // (from the original)
inline constexpr guest::Function<0x002504d4, u32(u32, u32, u32)> call_002504d4;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x00583be8, u32(u32, u32, u32)> call_00583be8;  // (from the original)

u32 f_002198b4(u32 r0, u32 r1, u32 r2, float S0, float S1, float S2, float S3) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 ea_1 = 0;
    u32 r0_8 = 0;
    gptr<Local_002198b4_ea_2> ea_2 = gptr<Local_002198b4_ea_2>(0u);
    u32 r0_10 = 0;
    u32 r0_1 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
    u32 r2_1 = guest::cpu()->r[2];
    u32 r0_2 = call_002f74e0(4u, r0_1, r2_1);
    u32 r2_2 = guest::cpu()->r[2];
    float S0_2 = guest::cpu()->s[0];
    float S1_2 = guest::cpu()->s[1];
    float S2_2 = guest::cpu()->s[2];
    float S3_2 = guest::cpu()->s[3];
    u32 zf_1 = r0_2 == 0;
    u32 r0_3 = r2 + (r2 << 1);
    gptr<Local_002198b4_r4_1> r4_1 = gptr<Local_002198b4_r4_1>(r0 + (r2 << 2));
    u32 r1_1 = r0 + (r0_3 << 2) + 0x59cu;  // (from the original)
    u32 r5_1 = r0 + (r0_3 << 5) + 0x5e4u;  // (from the original)
    if (!zf_1) {
        u32 r0_4 = *global_0094edd8;
        if (r0_4 == 0) {
            ea_1 = 0x94f250u;  // (from the original)
            r0_8 = *gptr<u32>(ea_1);
            ea_2 = gptr<Local_002198b4_ea_2>(r4_1.addr() + 0x7c4u);  // (from the original)
            ea_2->word_0 = r0_8;
            ea_2->word_14 = r1;
            guest::cpu()->r[1] = r1_1;
            return r0_8;
        }
        float S2_3 = std::bit_cast<float>(*gptr<u32>(r1_1));
        gptr<Local_002198b4_r1_2> r1_2 = gptr<Local_002198b4_r1_2>(r1_1 + 4u);
        gptr<Local_002198b4_r2_3> r2_3 = gptr<Local_002198b4_r2_3>(frame.at(4).addr());
        float S0_3 = std::bit_cast<float>(r1_2->word_0);
        float S1_3 = std::bit_cast<float>(r1_2->word_4);
        *frame.at<u32>(0) = std::bit_cast<u32>(S2_3);
        r2_3->word_0 = std::bit_cast<u32>(S0_3);
        r2_3->word_4 = std::bit_cast<u32>(S1_3);
        gptr<Local_002198b4_r0_5> r0_5 = gptr<Local_002198b4_r0_5>(*gptr<u32>(r0_4 + 0x1a4u));  // (from the original)
        float S3_3 = std::bit_cast<float>(r0_5->word_24);
        *frame.at<u32>(0) = std::bit_cast<u32>(S2_3 + S3_3);
        float S2_4 = std::bit_cast<float>(r0_5->word_28);
        *frame.at<u32>(4) = std::bit_cast<u32>(S0_3 + S2_4);
        float S0_4 = std::bit_cast<float>(r0_5->word_2c);
        float S0_5 = S1_3 + S0_4;
        *frame.at<u32>(8) = std::bit_cast<u32>(S0_5);
        guest::cpu()->s[0] = S0_5;
        guest::cpu()->s[1] = S1_3;
        guest::cpu()->s[2] = S2_4;
        guest::cpu()->s[3] = S3_3;
        u32 r0_6 = call_00250438(r5_1, frame.at(0).addr(), r2_3.addr());
        u32 r1_4 = guest::cpu()->r[1];
        u32 r2_4 = guest::cpu()->r[2];
        u32 r0_7 = call_00583be8(r0_6, r1_4, r2_4);
        r1_1 = guest::cpu()->r[1];
        u32 r2_5 = guest::cpu()->r[2];
        S0_2 = guest::cpu()->s[0];
        S1_2 = guest::cpu()->s[1];
        if (r0_7 == 0) {
            ea_1 = 0x94f250u;  // (from the original)
            r0_8 = *gptr<u32>(ea_1);
            ea_2 = gptr<Local_002198b4_ea_2>(r4_1.addr() + 0x7c4u);  // (from the original)
            ea_2->word_0 = r0_8;
            ea_2->word_14 = r1;
            return r0_8;
        }
        call_002504d4(r5_1, 0x1000794u, r2_5);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        S0_2 = guest::cpu()->s[0];
        S1_2 = guest::cpu()->s[1];
        ea_1 = 0x94f250u;  // (from the original)
        r0_8 = *gptr<u32>(ea_1);
        ea_2 = gptr<Local_002198b4_ea_2>(r4_1.addr() + 0x7c4u);  // (from the original)
        ea_2->word_0 = r0_8;
        ea_2->word_14 = r1;
        return r0_8;
    }
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    guest::cpu()->s[2] = S2_2;
    guest::cpu()->s[3] = S3_2;
    call_00250438(r5_1, r1_1, r2_2);
    u32 r0_9 = *global_0094f250;
    r4_1->word_7c4 = r0_9;
    u32 r1_5 = 0xfefff86bu + r1;  // (from the original)
    if (r1_5 == 0) {
        r0_10 = 0x1000799u;  // (from the original)
        r4_1->word_7d8 = r0_10;
        guest::cpu()->r[1] = r1_5;
        return r0_10;
    }
    if (r1_5 == 1u) {
        r0_10 = 0x100079au;  // (from the original)
        r4_1->word_7d8 = r0_10;
        guest::cpu()->r[1] = r1_5;
        return r0_10;
    }
    if (r1_5 == 2u) {
        r0_9 = 0x100079bu;  // (from the original)
        r4_1->word_7d8 = r0_9;
    }
    guest::cpu()->r[1] = r1_5;
    return r0_9;
}

}  // namespace d_002198b4
GUEST_EXPORT_FRAMED(0x002198b4, d_002198b4::f_002198b4, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0021cdc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0021cdc4 {

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f770c, u32(u32, u32, u32, u32)> call_002f770c;  // (from the original)
inline constexpr guest::Function<0x002f7710, u32(u32, u32, u32, u32)> call_002f7710;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)
inline constexpr guest::Function<0x005e3194, u32(u32, u32, u32, u32)> call_005e3194;  // (from the original)
inline constexpr guest::Function<0x006aaa30, u32(u32, u32)> call_006aaa30;  // (from the original)

u32 f_0021cdc4(gptr<BsMenuCatalog> arg0) {
    u32 r0 = arg0.addr();
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = 0x8edd1c;  // (from the original)
    arg0->word_28 = 0x8edd88;  // (from the original)
    arg0->word_10fc = 0x8ee228;  // (from the original)
    u32 r4_1 = r0 + 0x1494u;  // (from the original)
    arg0->word_1578 = 0x8ef2c8;  // (from the original)
    arg0->word_1494 = 0x8ef284;  // (from the original)
    call_002f76ac(r4_1 + 0x118u, 0x2e0b3cu, 0x518u, 2u);  // (from the original)
    u32 r0_2 = call_002f770c(r4_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r0_2 - 0x398u) = 0x8f18f4;  // (from the original)
    u32 r0_4 = call_00567ef0(r0_2 - 0x248u, 0x8f18f4u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_6 = call_005bf744(r0_4 - 0x14cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_8 = call_002f7710(r0_6 - 0xe8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_002f76ac(r0_8 - 0x540u, 0x2b6ef8u, 0xe0u, 6u);  // (from the original)
    u32 r0_10 = (r0_8 - 0x1018u) + 0xa08u;  // (from the original)
    u32 r0_11 = call_005e3194(r0_10, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_13 = call_005e3194(r0_11 - 0xc4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_15 = call_005e3194(r0_13 - 0xc4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_17 = call_005e3194(r0_15 - 0xc4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_19 = call_0056988c(r0_17 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_21 = call_0056988c(r0_19 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_23 = call_0056988c(r0_21 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_25 = call_0056988c(r0_23 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_27 = call_0056988c(r0_25 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_29 = call_0056988c(r0_27 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_31 = call_0056988c(r0_29 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_33 = call_0056988c(r0_31 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_35 = call_005bf744(r0_33 - 0x14cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_37 = call_005bf744(r0_35 - 0x14cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_39 = call_005bf744(r0_37 - 0x14cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_41 = call_00567ef0(r0_39 - 0x248u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r1_20 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    return call_006aaa30(r0_41 - 0x50u, r1_20);  // (from the original)
}

}  // namespace d_0021cdc4
GUEST_EXPORT(0x0021cdc4, d_0021cdc4::f_0021cdc4);

// f_0021d000: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0021d000 {

struct __attribute__((packed)) Object_0021d000_0 {
    u8 unknown_0[0xc833];  // (not used here)
    u8 byte_c833;
};
GUEST_OFFSET(Object_0021d000_0, byte_c833, 0xc833);  // (from the original)

struct __attribute__((packed)) Local_0021d000_r0_7 {
    u8 unknown_0[0x4d4];  // (not used here)
    u32 word_4d4;
    u32 word_4d8;
    u32 word_4dc;
};
GUEST_OFFSET(Local_0021d000_r0_7, word_4d4, 0x4d4);  // (from the original)
GUEST_OFFSET(Local_0021d000_r0_7, word_4d8, 0x4d8);  // (from the original)
GUEST_OFFSET(Local_0021d000_r0_7, word_4dc, 0x4dc);  // (from the original)

struct __attribute__((packed)) Local_0021d000_r6_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0021d000_r6_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0021d000_r6_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0021d000_r6_1, word_8, 0x8);  // (from the original)

inline guest::global<u32, 0x00848f44> global_00848f44;  // (from the original)
inline guest::global<u32, 0x00848f48> global_00848f48;  // (from the original)
inline guest::global<u32, 0x00848f4c> global_00848f4c;  // (from the original)
inline constexpr guest::Function<0x0026e250, u32(u32, u32, u32, u32)> call_0026e250;  // (from the original)
inline constexpr guest::Function<0x002cbccc, u32(u32, u32, u32, u32)> call_002cbccc;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002fe7f4, u32(u32, u32, u32, u32)> call_002fe7f4;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x0030b6b8, u32(u32, u32, u32, u32)> call_0030b6b8;  // (from the original)
inline constexpr guest::Function<0x004de5d4, u32(u32, u32, u32, u32)> call_004de5d4;  // (from the original)
inline constexpr guest::Function<0x005d4a78, u32(u32, u32, u32, u32)> call_005d4a78;  // (from the original)
inline constexpr guest::Function<0x005e34c4, u32(u32, u32, u32, u32)> call_005e34c4;  // (from the original)
inline constexpr guest::Function<0x005e4988, u32(u32, u32, u32, u32)> call_005e4988;  // (from the original)
inline constexpr guest::Function<0x005e4994, u32(u32, u32, u32, u32)> call_005e4994;  // (from the original)
inline constexpr guest::Function<0x005e49c0, u32(u32, u32, u32, u32)> call_005e49c0;  // (from the original)
inline constexpr guest::Function<0x005e8498, u32(u32, u32, u32, u32)> call_005e8498;  // (from the original)
inline constexpr guest::Function<0x0071348c, u32(u32, u32, u32, u32)> call_0071348c;  // (from the original)
inline constexpr guest::Function<0x00718c0c, u32(u32, u32, u32, u32)> call_00718c0c;  // (from the original)
inline constexpr guest::Function<0x0071af4c, u32(u32, u32, u32, u32)> call_0071af4c;  // (from the original)
inline constexpr guest::Function<0x0071ecc4, u32(u32, u32, u32, u32)> call_0071ecc4;  // (from the original)

void f_0021d000(gptr<Object_0021d000_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x148);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r0_4 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_5 = 0;
    u32 r1_7 = 0;
    u32 r2_10 = 0;
    u32 r7 = r0 + 0xc274u;  // (from the original)
    arg0->byte_c833 = 1;
    u32 r0_2 = call_0071ecc4(r0 + 0x4cu, r1, r2, r3);  // (from the original)
    u32 r2_1 = guest::cpu()->r[2];
    u32 r3_1 = guest::cpu()->r[3];
    if (r0_2 != 0) {
        r0_4 = call_002cbccc(r0 + 0x4cu, r1, r2_1, r3_1);  // (from the original)
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        goto L_21d074;
    }
    r0_5 = r0 + 0x3cf4u;  // (from the original)
    r0_4 = call_00718c0c(r0_5, r1, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_4 == 0) {
        goto L_21d074;
    }
    r0_4 = call_0026e250(r0_5, r1, r2_2, r3_2);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
L_21d074:;
    *gptr<u32>(r7 + 0x590u) = r0_4;  // (from the original)
    call_0071af4c(r0 + 0xc15cu, frame.at(0x12c).addr(), r2_2, r3_2);  // (from the original)
    gptr<Local_0021d000_r0_7> r0_7 = gptr<Local_0021d000_r0_7>(r7 + 0xdcu);  // (from the original)
    r0_7->word_4d4 = *frame.at<u32>(0x12c);  // (from the original)
    r0_7->word_4d8 = *frame.at<u32>(0x130);  // (from the original)
    r0_7->word_4dc = *frame.at<u32>(0x134);  // (from the original)
    u32 r0_8 = call_0071348c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u8>(r7 + 0x5beu) = 1;  // (from the original)
    u32 r0_10 = call_002fe7f4(frame.at(0xd0).addr(), r0_8, 0u, guest::cpu()->r[3]);  // (from the original)
    call_005e8498(r7, r0_10, guest::cpu()->r[2], guest::cpu()->r[3]);
    *frame.at<u32>(0xd0) = 0x909f18;  // (from the original)
    gptr<Local_0021d000_r6_1> r6_1 = gptr<Local_0021d000_r6_1>(frame.at(0x138).addr());  // (from the original)
    u32 r1_2 = *global_00848f48;
    u32 r2_5 = *global_00848f4c;
    r6_1->word_0 = *global_00848f44;
    r6_1->word_4 = r1_2;
    r6_1->word_8 = r2_5;
    call_00301d0c(frame.at(0x10).addr(), 0x5e35dcu, 0x20u, 6u);  // (from the original)
    call_0030b6b8(r0_8, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_12 = call_004de5d4(r0_8, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *frame.at<u32>(8) = 7;
    *frame.at<u32>(0) = 0;
    *frame.at<u32>(4) = 0;
    call_005e34c4(frame.at(0x10).addr(), frame.at(0x138).addr(), r0_12 == 0 ? 0x32u : 0x19u, 0u);  // (from the original)
    *frame.at<u32>(0) = 0;
    *frame.at<u32>(4) = 1;
    u32 r6 = frame.at(0x10).addr();  // (from the original)
    *frame.at<u32>(8) = 1;
    call_005e34c4(frame.at(0x30).addr(), frame.at(0x138).addr(), 0xbu, 0u);  // (from the original)
    u32 r5 = 2u;
    call_005e49c0(r7, r5, 1u, guest::cpu()->r[3]);
    r3 = guest::cpu()->r[3];
    u32 r4 = 0u;
    do {
        call_005e4994(r7, r4, r6 + (r4 << 5), r3);
        r1_7 = guest::cpu()->r[1];
        r2_10 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < s32(r5));
    call_005e4988(r7, r1_7, r2_10, r3);
    call_005d4a78(r7, 0u, 0u, 0u);
    call_002f76ac(frame.at(0x10).addr(), 0x5e3618u, 0x20u, 6u);  // (from the original)
    return;
}

}  // namespace d_0021d000
GUEST_EXPORT_FRAMED(0x0021d000, d_0021d000::f_0021d000, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0021e664: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0021e664 {

struct __attribute__((packed)) Local_0021e664_r0_16 {
    u32 word_0;
    u8 unknown_4[0xa3c];  // (not used here)
    u32 word_a40;
};
GUEST_OFFSET(Local_0021e664_r0_16, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0021e664_r0_16, word_a40, 0xa40);  // (from the original)

inline constexpr guest::Function<0x0022c5d8, u32(u32, u32, u32, u32)> call_0022c5d8;  // (from the original)
inline constexpr guest::Function<0x002684c0, u32(u32, u32, u32, u32)> call_002684c0;  // (from the original)
inline constexpr guest::Function<0x0026fe3c, u32(u32, u32, u32, u32)> call_0026fe3c;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f7710, u32(u32, u32, u32, u32)> call_002f7710;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)
inline constexpr guest::Function<0x005e3194, u32(u32, u32, u32, u32)> call_005e3194;  // (from the original)
inline constexpr guest::Function<0x005e8a7c, u32(u32, u32, u32, u32)> call_005e8a7c;  // (from the original)
inline constexpr guest::Function<0x006aaa30, u32(u32, u32)> call_006aaa30;  // (from the original)

u32 f_0021e664(gptr<BsMenuCoolbox> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    r13 -= 8;
    u32 r2_1 = 0x8ede08u;  // (from the original)
    arg0->word_0 = 0x8edd9c;  // (from the original)
    arg0->word_28 = r2_1;
    arg0->word_ced8 = 0x8f47a0;  // (from the original)
    guest::cpu()->r[13] = r13;
    u32 r0_2 = call_005e3194(r0 + 0xd2f4u, 0x8f47a0u, r2_1, r3);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_2 = guest::cpu()->r[2];
    u32 r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_4 = call_0056988c(r0_2 - 0x28u, r1_1, r2_2, r3_1);  // (from the original)
    u32 r1_2 = guest::cpu()->r[1];
    u32 r2_3 = guest::cpu()->r[2];
    u32 r3_2 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_6 = call_0056988c(r0_4 - 0x28u, r1_2, r2_3, r3_2);  // (from the original)
    u32 r1_3 = guest::cpu()->r[1];
    u32 r2_4 = guest::cpu()->r[2];
    u32 r3_3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_8 = call_005bf744(r0_6 - 0x15cu, r1_3, r2_4, r3_3);  // (from the original)
    u32 r1_4 = guest::cpu()->r[1];
    u32 r2_5 = guest::cpu()->r[2];
    u32 r3_4 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_10 = call_00567ef0(r0_8 - 0x24cu, r1_4, r2_5, r3_4);  // (from the original)
    u32 r1_5 = guest::cpu()->r[1];
    u32 r2_6 = guest::cpu()->r[2];
    u32 r3_5 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_12 = call_005e8a7c(r0_10 - 0xc88u, r1_5, r2_6, r3_5);  // (from the original)
    u32 r2_7 = guest::cpu()->r[2];
    u32 r3_6 = guest::cpu()->r[3];
    u32 ea_1 = r0_12 - 0x118u;  // (from the original)
    *gptr<u32>(ea_1) = 0x8f08ac;  // (from the original)
    guest::cpu()->r[13] = r13;
    u32 r0_13 = call_002f7710(ea_1, 0x8f08acu, r2_7, r3_6);  // (from the original)
    u32 r1_6 = guest::cpu()->r[1];
    u32 r2_8 = guest::cpu()->r[2];
    u32 r3_7 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_15 = call_0026fe3c(r0_13 - 0x8468u, r1_6, r2_8, r3_7);  // (from the original)
    u32 r3_8 = guest::cpu()->r[3];
    gptr<Local_0021e664_r0_16> r0_16 = gptr<Local_0021e664_r0_16>(r0_15 - 0x3ca8u);  // (from the original)
    r0_16->word_a40 = 0x8f26a4;  // (from the original)
    r0_16->word_0 = 0x8f2674;  // (from the original)
    u32 r0_17 = r0_16.addr() + 0x3ac0u;  // (from the original)
    u32 r2_9 = 0x8f2a1cu;  // (from the original)
    *gptr<u32>(r0_17) = 0x8f2a0c;  // (from the original)
    u32 r0_18 = r0_17 + 0xcu;  // (from the original)
    *gptr<u32>(r0_18) = r2_9;
    guest::cpu()->r[13] = r13;
    u32 r0_20 = call_0056988c(r0_18 + 0x1acu, 0x8f2a0cu, r2_9, r3_8);  // (from the original)
    u32 r1_7 = guest::cpu()->r[1];
    u32 r2_10 = guest::cpu()->r[2];
    u32 r3_9 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_22 = call_0056988c(r0_20 - 0x28u, r1_7, r2_10, r3_9);  // (from the original)
    u32 r1_8 = guest::cpu()->r[1];
    u32 r2_11 = guest::cpu()->r[2];
    u32 r3_10 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_24 = call_0056988c(r0_22 - 0x28u, r1_8, r2_11, r3_10);  // (from the original)
    u32 r1_9 = guest::cpu()->r[1];
    u32 r2_12 = guest::cpu()->r[2];
    u32 r3_11 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_26 = call_0056988c(r0_24 - 0x28u, r1_9, r2_12, r3_11);  // (from the original)
    u32 r1_10 = guest::cpu()->r[1];
    u32 r2_13 = guest::cpu()->r[2];
    u32 r3_12 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_28 = call_0022c5d8(r0_26 - 0x140u, r1_10, r2_13, r3_12);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f76ac(r0_28 - 0x2238u, 0x2b950cu, 0x36cu, 0xau);  // (from the original)
    u32 r1_11 = guest::cpu()->r[1];
    u32 r2_14 = guest::cpu()->r[2];
    u32 r3_13 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_30 = call_002684c0(r0_28 - 0x3ac0u, r1_11, r2_14, r3_13);  // (from the original)
    u32 r1_12 = guest::cpu()->r[1];
    r13 += 8;
    guest::cpu()->r[13] = r13;
    return call_006aaa30(r0_30 - 0x4cu, r1_12);  // (from the original)
}

}  // namespace d_0021e664
GUEST_EXPORT(0x0021e664, d_0021e664::f_0021e664);

// f_0021fa30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0021fa30 {

inline constexpr guest::Function<0x00274394, u32(u32, u32)> call_00274394;  // (from the original)
inline constexpr guest::Function<0x00320548, u32(u32, u32)> call_00320548;  // (from the original)
inline constexpr guest::Function<0x00718d98, u32(u32, u32)> call_00718d98;  // (from the original)
inline constexpr guest::Function<0x00723f84, u32(u32, u32)> call_00723f84;  // (from the original)

u32 f_0021fa30(u32 r0, u32 r1) {
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    u32 r0_2 = call_00718d98(r0 + 0xc8u, r1);  // (from the original)
    if (r0_2 != 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return call_00274394(r0 + 0xc8u, r1);  // (from the original)
    }
    u32 r0_4 = r0 + 0x2cbcu;  // (from the original)
    u32 r0_5 = call_00723f84(r0_4, r1);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_5 != 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return call_00320548(r0_4, r1);
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_5;
}

}  // namespace d_0021fa30
GUEST_EXPORT(0x0021fa30, d_0021fa30::f_0021fa30);

// f_0021fb60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0021fb60 {

inline constexpr guest::Function<0x0027460c, u32(u32, u32, u32, u32)> call_0027460c;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f7710, u32(u32, u32, u32, u32)> call_002f7710;  // (from the original)
inline constexpr guest::Function<0x003170d0, u32(u32, u32)> call_003170d0;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)
inline constexpr guest::Function<0x005e3194, u32(u32, u32, u32, u32)> call_005e3194;  // (from the original)
inline constexpr guest::Function<0x005e8a7c, u32(u32, u32, u32, u32)> call_005e8a7c;  // (from the original)
inline constexpr guest::Function<0x006aaa30, u32(u32, u32)> call_006aaa30;  // (from the original)

u32 f_0021fb60(gptr<BsMenuMailbox> arg0) {
    u32 r0 = arg0.addr();
    guest::cpu()->r[13] -= 8u;
    u32 r1_1 = 0x8edf8cu;  // (from the original)
    u32 r2_1 = 0x8ede88u;  // (from the original)
    arg0->word_a4 = r1_1;
    arg0->word_28 = r2_1;
    arg0->word_0 = 0x8ede1c;  // (from the original)
    arg0->word_5fe8 = 0x8f08ac;  // (from the original)
    u32 r0_2 = call_002f7710(r0 + 0x5fe8u, r1_1, r2_1, 0x8ede1cu);  // (from the original)
    u32 r0_4 = call_005e8a7c(r0_2 - 0xc64u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *gptr<u32>(r0_4 - 0x4f0u) = 0x8f47a0;  // (from the original)
    u32 r0_6 = call_005e3194(r0_4 - 0xd4u, 0x8f47a0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_8 = call_0056988c(r0_6 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_10 = call_0056988c(r0_8 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_12 = call_005bf744(r0_10 - 0x15cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_14 = call_00567ef0(r0_12 - 0x24cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_15 = r0_14 - 0x21fcu;  // (from the original)
    u32 r2_8 = 0x8f4814u;  // (from the original)
    *gptr<u32>(r0_15) = 0x8f47ec;  // (from the original)
    *gptr<u32>(0x213cu + r0_15) = r2_8;  // (from the original)
    u32 r0_17 = call_0056988c(r0_15 + 0x21b0u, 0x8f47ecu, r2_8, 0x213cu);  // (from the original)
    u32 r0_19 = call_0056988c(r0_17 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_21 = call_0056988c(r0_19 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_22 = r0_21 - 0x2160u;  // (from the original)
    *gptr<u32>(r0_22) = 0x8f4828;  // (from the original)
    u32 r0_23 = r0_22 + 0x201cu;  // (from the original)
    *gptr<u32>(r0_23) = 0x8f08ac;  // (from the original)
    u32 r0_24 = call_002f7710(r0_23, 0x8f4828u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r2_12 = 0x8ee258u;  // (from the original)
    *gptr<u32>(r0_24 - 0x134u) = r2_12;  // (from the original)
    *gptr<u32>(r0_24 - 0x140u) = 0x8ee248;  // (from the original)
    u32 r0_26 = call_0056988c(r0_24 - 0x2cu, 0x8ee248u, r2_12, guest::cpu()->r[3]);  // (from the original)
    u32 r0_28 = call_0056988c(r0_26 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_30 = call_0056988c(r0_28 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_32 = call_0056988c(r0_30 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_34 = call_0056988c(r0_32 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_36 = call_0056988c(r0_34 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_38 = call_0056988c(r0_36 - 0x2cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_002f76ac(r0_38 - 0x1b28u, 0x2e3854u, 0x2b4u, 0xau);  // (from the original)
    u32 r0_40 = (r0_38 - 0x1efcu) + 0x3a8u;  // (from the original)
    u32 r0_41 = call_0056988c(r0_40, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_43 = call_005bf744(r0_41 - 0x150u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_45 = call_00567ef0(r0_43 - 0x248u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_47 = call_0027460c(r0_45 - 0x2c04u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_49 = call_003170d0(r0_47 - 0xa0u, guest::cpu()->r[1]);  // (from the original)
    u32 r1_20 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    return call_006aaa30(r0_49 - 0x28u, r1_20);  // (from the original)
}

}  // namespace d_0021fb60
GUEST_EXPORT(0x0021fb60, d_0021fb60::f_0021fb60);

// f_0021fe04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0021fe04 {

struct __attribute__((packed)) Object_0021fe04_0 {
    u8 unknown_0[0xb2f4];  // (not used here)
    u32 word_b2f4;
};
GUEST_OFFSET(Object_0021fe04_0, word_b2f4, 0xb2f4);  // (from the original)

inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> call_004b4fc0;  // (from the original)
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> call_00568984;  // (from the original)

u32 f_0021fe04(gptr<Object_0021fe04_0> arg0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r0 = arg0.addr();
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    u32 r0_2 = call_004b4fc0(arg0->word_b2f4, *gptr<u32>(0x94fc50u + (r1 << 2)), 1u, r3);  // (from the original)
    u32 r12_1 = *gptr<u32>((r0 + 0xb000u) + 0x2f4u);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_00568984(r12_1, (r0 + (r1 + (r1 << 2) << 3)) + 0xb2fcu, r0_2, 0u);  // (from the original)
}

}  // namespace d_0021fe04
GUEST_EXPORT(0x0021fe04, d_0021fe04::f_0021fe04);
