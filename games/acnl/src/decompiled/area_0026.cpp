// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_0026451c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0026451c {

inline guest::global<u8, 0x00854188> global_00854188;
inline guest::global<u8, 0x00854189> global_00854189;
inline guest::global<u8, 0x0085418a> global_0085418a;
inline guest::global<u8, 0x00995339> global_00995339;
inline guest::global<u8, 0x0099533b> global_0099533b;
inline guest::global<u8, 0x0099533d> global_0099533d;
inline guest::global<u8, 0x00995438> global_00995438;
inline guest::global<u8, 0x00995439> global_00995439;
inline guest::global<u8, 0x0099543c> global_0099543c;
inline guest::global<u8, 0x00995441> global_00995441;
inline guest::global<u8, 0x00995442> global_00995442;
inline guest::global<u8, 0x00995445> global_00995445;
inline guest::global<u8, 0x0099544a> global_0099544a;
inline guest::global<u8, 0x0099544b> global_0099544b;
inline guest::global<u8, 0x0099544c> global_0099544c;
inline guest::global<u8, 0x0099544d> global_0099544d;
inline guest::global<u8, 0x00995450> global_00995450;
inline guest::global<u8, 0x00995451> global_00995451;
inline guest::global<u8, 0x00995454> global_00995454;
inline guest::global<u8, 0x009954e2> global_009954e2;
inline guest::global<u8, 0x009954e3> global_009954e3;
inline guest::global<u8, 0x009954e4> global_009954e4;
inline guest::global<u8, 0x009954e5> global_009954e5;

void f_0026451c() {
    *global_009954e5 = 0xff;  // (from the original)
    *global_009954e4 = 0xff;  // (from the original)
    *global_009954e3 = 0xff;  // (from the original)
    *global_009954e2 = 0xff;  // (from the original)
    *global_00995438 = 0;
    *global_00995439 = 0;
    *global_0099543c = 0xe;  // (from the original)
    *global_00995450 = 0;
    *global_00995451 = 0;
    *global_00995454 = 0xf;  // (from the original)
    *global_00995441 = 0;
    *global_00995442 = 5;
    *global_00995445 = 3;
    *global_00995339 = 0;
    *global_0099533b = 6;
    *global_0099533d = 7;
    *global_0099544a = u8(u32(*global_00854188));
    *global_0099544b = u8(u32(*global_00854189));
    *global_0099544c = u8(u32(*global_0085418a));
    *global_0099544d = 0xff;  // (from the original)
}

}  // namespace d_0026451c
GUEST_EXPORT_FRAMED(0x0026451c, d_0026451c::f_0026451c, 0x10);  // pushes {r4} first, as the original

// f_00264668: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00264668 {

struct __attribute__((packed)) Object_00264668_1 {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
};
GUEST_OFFSET(Object_00264668_1, word_14, 0x14);

inline guest::global<u32, 0x00950470> global_00950470;
inline constexpr guest::Function<0x0011ef18, u32(u32)> call_0011ef18;
inline constexpr guest::Function<0x00495534, u32(u32, u32, u32, u32)> call_00495534;

void f_00264668(u32 r0, gptr<Object_00264668_1> arg1) {
    arg1->word_14 = 0;
    call_00495534(arg1.addr(), arg1.addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
    call_0011ef18(*global_00950470);
    *gptr<u8>(r0 + 0x58u) = 0;  // (from the original)
}

}  // namespace d_00264668
GUEST_EXPORT_FRAMED(0x00264668, d_00264668::f_00264668, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00264698: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00264698 {

struct __attribute__((packed)) Object_00264698_0 {
    u8 unknown_0[0x58];  // (not used here)
    u8 byte_58;
    u8 unknown_59[0x2f];  // (not used here)
    u32 word_88;
};
GUEST_OFFSET(Object_00264698_0, byte_58, 0x58);
GUEST_OFFSET(Object_00264698_0, word_88, 0x88);

inline guest::global<u32, 0x00950470> global_00950470;
inline guest::global<u32, 0x00975320> global_00975320;
inline constexpr guest::Function<0x0011ef18, u32(u32, u32)> call_0011ef18;
inline constexpr guest::Function<0x004957e4, u32(u32, u32)> call_004957e4;
inline constexpr guest::Function<0x004959d4, u32(u32, u32, u32)> call_004959d4;
inline constexpr guest::Function<0x0049b8f4, u32(u32, u32, u32, u32)> call_0049b8f4;
inline constexpr guest::Function<0x004f0734, u32(u32)> call_004f0734;
inline constexpr guest::Function<0x00561310, u32(u32, u32)> call_00561310;
inline constexpr guest::Function<0x0074f1c4, u32(u32)> call_0074f1c4;

void f_00264698(gptr<Object_00264698_0> arg0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    arg0->byte_58 = 1;
    u32 r0_2 = call_0049b8f4(r1 + 0x40u, r1, r2, guest::cpu()->r[3]);  // (from the original)
    call_004f0734(r0_2);
    call_004959d4(r1, *gptr<u32>(r1 + 0xa4u), 1u);  // (from the original)
    call_004957e4(r1, 0u);
    *gptr<u32>(r1 + 0x14u) = 1;  // (from the original)
    *global_00950470 = *global_00975320;
    call_0011ef18(arg0->word_88, 0x95043cu);  // (from the original)
    call_00561310(frame.at(0).addr(), arg0->word_88);
    call_0074f1c4(frame.at(0).addr());
}

}  // namespace d_00264698
GUEST_EXPORT_FRAMED(0x00264698, d_00264698::f_00264698, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00265d54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00265d54 {

inline guest::global<u32, 0x00952c48> global_00952c48;
inline constexpr guest::Function<0x00125b38, u32(u32, u32, u32, u32)> call_00125b38;

u32 f_00265d54() {
    return call_00125b38(0x9984acu, 0x265d70u, *global_00952c48, 0x80u);  // (from the original)
}

}  // namespace d_00265d54
GUEST_EXPORT(0x00265d54, d_00265d54::f_00265d54);

// f_00267188: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00267188 {

struct __attribute__((packed)) Local_00267188_r1_6 {
    u32 word_0;
};
GUEST_OFFSET(Local_00267188_r1_6, word_0, 0x0);

struct __attribute__((packed)) Local_00267188_r5_1 {
    u32 word_0;
};
GUEST_OFFSET(Local_00267188_r5_1, word_0, 0x0);

struct __attribute__((packed)) Local_00267188_r6_1 {
    u32 word_0;
};
GUEST_OFFSET(Local_00267188_r6_1, word_0, 0x0);

inline constexpr guest::Function<0x00312bd0, u32(u32, u32, u32, u32)> call_00312bd0;
inline constexpr guest::Function<0x00312c4c, u32(u32, u32, u32, u32)> call_00312c4c;
inline constexpr guest::Function<0x00312cb0, u32(u32, u32)> call_00312cb0;
inline constexpr guest::Function<0x005e2e50, u32(u32, u32)> call_005e2e50;
inline constexpr guest::Function<0x005e2f94, u32(u32, u32)> call_005e2f94;

struct __attribute__((packed)) Frame_00267188 {
    u32 word_0;
    u8 unknown_4[0x48];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00267188, word_0, 0x0);
GUEST_SIZE(Frame_00267188, 0x4c);

u32 f_00267188(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00267188> frame;  // the original's stack frame
    call_00312bd0(frame.at(4).addr(), r1, r2, r3);
    gptr<Local_00267188_r6_1> r6_1 = gptr<Local_00267188_r6_1>(r0 + 0x185cu);  // (from the original)
    frame->word_0 = 4;
    call_00312c4c(frame.at(4).addr(), *gptr<u32>(r0 + (r6_1->word_0 << 2) + 0x1860u), 0xau, 0xau);  // (from the original)
    u32 r0_3 = r0 + 0x1798u;  // (from the original)
    call_005e2e50(r0_3, frame.at(4).addr());
    call_005e2f94(r0_3, guest::cpu()->r[1]);
    gptr<Local_00267188_r5_1> r5_1 = gptr<Local_00267188_r5_1>(r0 + 0x1870u);  // (from the original)
    frame->word_0 = 4;
    call_00312c4c(frame.at(4).addr(), r5_1->word_0, 0xau, 0xau);  // (from the original)
    u32 r0_5 = r0 + 0x16d4u;  // (from the original)
    u32 r1_5 = frame.at(4).addr();
    call_005e2e50(r0_5, r1_5);
    call_005e2f94(r0_5, r1_5);
    gptr<Local_00267188_r1_6> r1_6 = gptr<Local_00267188_r1_6>(r0 + (r6_1->word_0 << 2) + 0x1860u);  // (from the original)
    u32 r0_6 = r1_6->word_0;
    *gptr<u16>(r0 + 0x12c8u) = u16((r0_6 == 1u ? r5_1->word_0 : r0_6 - 1u > r5_1->word_0 ? 1u : r0_6 - 1u) - 1u);  // (from the original)
    u32 r0_8 = r1_6->word_0;
    u32 r0_9 = r0_8 + 1u == 0 ? r5_1->word_0 : r0_8 + 1u > r5_1->word_0 ? 1u : r0_8 + 1u;
    *gptr<u16>(r0 + 0x13f8u) = u16(r0_9 - 1u);  // (from the original)
    u32 r0_11 = call_00312cb0(frame.at(4).addr(), 0x13f8u);  // (from the original)
    return r0_11;
}

}  // namespace d_00267188
GUEST_EXPORT_FRAMED(0x00267188, d_00267188::f_00267188, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00267758: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00267758 {

inline constexpr guest::Function<0x001323bc, u32(u32)> call_001323bc;
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32)> call_00569e6c;

u32 f_00267758(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    call_00568c10(r0 + 0xa70u, r1, r2, guest::cpu()->r[3]);  // (from the original)
    u32 r0_3 = call_00568c10(r0 + 0x270u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_4 = call_001323bc(r0_3);
    frame.release();
    return call_00569e6c(r0_4, r0 + 0x270u, 1u);  // (from the original)
}

}  // namespace d_00267758
GUEST_EXPORT(0x00267758, d_00267758::f_00267758);

// f_002677cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002677cc {

inline constexpr guest::Function<0x00132364, u32(u32)> call_00132364;
inline constexpr guest::Function<0x001323b4, u32(u32, u32, u32, u32)> call_001323b4;
inline constexpr guest::Function<0x002cd0e0, u32(u32)> call_002cd0e0;
inline constexpr guest::Function<0x004b6dc8, u32(u32, u32, u32, u32)> call_004b6dc8;

u32 f_002677cc(gptr<ChangeListBase> arg0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    call_004b6dc8(arg0->word_d30, arg0->word_a90, guest::cpu()->r[2], guest::cpu()->r[3]);
    call_001323b4(arg0.addr() + 0xa70u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_00132364(arg0.addr() + 0x28u);  // (from the original)
    call_002cd0e0(arg0.addr() + 0x40cu);  // (from the original)
    frame.release();
    return call_001323b4(arg0.addr() + 0x270u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_002677cc
GUEST_EXPORT(0x002677cc, d_002677cc::f_002677cc);

// f_00268270: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00268270 {


void f_00268270(u32 r0) {
    u32 r1 = 0u;
    u32 r2 = r0 + 0x185cu;  // (from the original)
    do {
        u32 r3_1 = !(*gptr<u32>(r2) == r1);
        u32 r12_1 = r0 + (r1 + (r1 << 1) + (r1 << 4) << 4);
        r1 += 1u;
        *gptr<u8>(r12_1 + 0xe0du) = u8(r3_1);  // (from the original)
        guest::preempt();
    } while (r1 < 4u);
    guest::cpu()->r[1] = r1;
}

}  // namespace d_00268270
GUEST_EXPORT(0x00268270, d_00268270::f_00268270);

// f_002682ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002682ac {

struct __attribute__((packed)) Local_002682ac_r0_10 {
    u32 word_0;
    u8 unknown_4[0xe0];  // (not used here)
    u32 word_e4;
};
GUEST_OFFSET(Local_002682ac_r0_10, word_0, 0x0);
GUEST_OFFSET(Local_002682ac_r0_10, word_e4, 0xe4);

struct __attribute__((packed)) Local_002682ac_r5_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_002682ac_r5_1, word_0, 0x0);
GUEST_OFFSET(Local_002682ac_r5_1, word_4, 0x4);
GUEST_OFFSET(Local_002682ac_r5_1, word_8, 0x8);

inline constexpr u32 vtable_ChangeListBase = 0x008ef1e0u;
inline constexpr u32 vtable_ChangeListBase_at_a40 = 0x008ef20cu;
inline constexpr u32 vtable_Control1Button = 0x008ef22cu;
inline constexpr u32 vtable_Control1Button_at_e4 = 0x008ef270u;
inline constexpr u32 vtable_ChangeRentalBase = 0x008f18d0u;
inline guest::global<u32, 0x0087a134> global_0087a134;
inline guest::global<u32, 0x0087a138> global_0087a138;
inline guest::global<u32, 0x0087a13c> global_0087a13c;
inline guest::global<u32, 0x0087a140> global_0087a140;
inline constexpr guest::Function<0x001207d8, u32(u32, u32, u32, u32)> call_001207d8;
inline constexpr guest::Function<0x00125aec, u32(u32)> call_00125aec;
inline constexpr guest::Function<0x00125e3c, u32(u32, u32, u32, u32)> call_00125e3c;
inline constexpr guest::Function<0x0022c53c, u32(u32)> call_0022c53c;
inline constexpr guest::Function<0x002cd444, u32(u32, u32, u32)> call_002cd444;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;
inline constexpr guest::Function<0x005e3128, u32(u32, u32)> call_005e3128;

u32 f_002682ac(gptr<ChangeRentalBase> arg0) {
    arg0->word_4 = 0;
    arg0->byte_8 = 0;
    u32 r2_1 = *global_0087a138;
    arg0->word_c = *global_0087a134;
    arg0->word_10 = r2_1;
    arg0->word_14 = 0;
    arg0->byte_18 = 0;
    arg0->word_1c = 0;
    arg0->word_0 = vtable_ChangeRentalBase;
    arg0->word_20 = 0;
    arg0->word_24 = 0;
    u32 r0_2 = call_001207d8((arg0.addr() + 0x24u) + 4u, 0x8f18d0u, r2_1, arg0.addr() + 0xcu);  // (from the original)
    u32 r0_4 = call_00125e3c(r0_2 + 0x248u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_6 = call_00125aec(r0_4 + 0x14cu);  // (from the original)
    u32 r0_8 = call_00125aec(r0_6 + 0x28u);  // (from the original)
    u32 r0_9 = r0_8 + 0x28u;  // (from the original)
    gptr<Local_002682ac_r0_10> r0_10 = gptr<Local_002682ac_r0_10>(call_002cd444(r0_9, r0_9 + 0x118u, 1u));  // (from the original)
    r0_10->word_0 = vtable_Control1Button;
    r0_10->word_e4 = vtable_Control1Button_at_e4;
    u32 r0_12 = call_00301d0c(r0_10.addr() + 0x118u, 0x2e0994u, 0x518u, 1u);  // (from the original)
    u32 r0_13 = r0_12 - 0x524u;  // (from the original)
    *gptr<u32>(r0_13 + 0xa3cu) = 0;  // (from the original)
    *gptr<u32>(r0_13 + 0xa44u) = 0;  // (from the original)
    *gptr<u8>(r0_13 + 0xa48u) = 0;  // (from the original)
    u32 r2_5 = *global_0087a13c;
    u32 r3_6 = *global_0087a140;
    gptr<Local_002682ac_r5_1> r5_1 = gptr<Local_002682ac_r5_1>(r0_13 + 0xa4cu);  // (from the original)
    r5_1->word_0 = r2_5;
    r5_1->word_4 = r3_6;
    r5_1->word_8 = 0;
    *gptr<u8>(r0_13 + 0xa58u) = 0;  // (from the original)
    *gptr<u32>(r0_13 + 0xa5cu) = 0;  // (from the original)
    *gptr<u32>(r0_13 + 0xa40u) = vtable_ChangeListBase_at_a40;  // (from the original)
    *gptr<u32>(r0_13) = vtable_ChangeListBase;
    *gptr<u32>(r0_13 + 0xa60u) = 0;  // (from the original)
    *gptr<u32>(r0_13 + 0xa64u) = 0;  // (from the original)
    *gptr<u32>(r0_13 + 0xa68u) = 0;  // (from the original)
    u32 ea_11 = r0_13 + 0xa6cu;  // (from the original)
    *gptr<u32>(ea_11) = 0;
    u32 r0_15 = call_00125e3c(ea_11 + 4u, 0x8ef20cu, 0x8ef1e0u, r3_6);  // (from the original)
    u32 r0_17 = call_00125aec(r0_15 + 0x14cu);  // (from the original)
    u32 r0_19 = call_00125aec(r0_17 + 0x28u);  // (from the original)
    u32 r0_21 = call_00125aec(r0_19 + 0x28u);  // (from the original)
    u32 r0_23 = call_00125aec(r0_21 + 0x28u);  // (from the original)
    u32 r0_25 = call_00125aec(r0_23 + 0x28u);  // (from the original)
    u32 r0_27 = call_00125aec(r0_25 + 0x28u);  // (from the original)
    u32 r0_29 = call_00125aec(r0_27 + 0x28u);  // (from the original)
    u32 r0_31 = call_00125aec(r0_29 + 0x28u);  // (from the original)
    u32 r0_33 = call_00125aec(r0_31 + 0x28u);  // (from the original)
    u32 r0_34 = r0_33 - 0xcfcu;  // (from the original)
    *gptr<u32>(r0_34 + 0xd24u) = 0;  // (from the original)
    *gptr<u32>(r0_34 + 0xd28u) = 0;  // (from the original)
    *gptr<u32>(r0_34 + 0xd2cu) = 0;  // (from the original)
    u32 ea_15 = r0_34 + 0xd30u;  // (from the original)
    *gptr<u32>(ea_15) = 0;
    u32 r0_36 = call_00301d0c(ea_15 + 4u, 0x2d00bcu, 0x130u, 6u);  // (from the original)
    u32 r0_38 = call_0022c53c(r0_36 + 0x720u);  // (from the original)
    u32 r0_40 = call_0022c53c(r0_38 + 0x140u);  // (from the original)
    u32 r0_42 = call_005e3128(r0_40 + 0x140u, 2u);  // (from the original)
    u32 r0_44 = call_005e3128(r0_42 + 0xc4u, 2u);  // (from the original)
    u32 r0_45 = r0_44 - 0x1798u;  // (from the original)
    *gptr<u32>(r0_45 + 0x185cu) = 0;  // (from the original)
    u32 r12_1 = 0x1870u | 1u << 2;  // (from the original)
    *gptr<u32>(r0_45 + 0x1870u) = 6;  // (from the original)
    u32 r6_1 = r12_1 + (1u << 2);
    *gptr<u32>(r12_1 + r0_45) = 0;
    *gptr<u32>(r6_1 + r0_45) = 0x1000466;  // (from the original)
    *gptr<u32>((r6_1 | 1u << 2) + r0_45) = 0;
    *gptr<u8>(r0_45 + 0x1880u) = 1;  // (from the original)
    *gptr<u32>((0x1880u | 1u << 2) + r0_45) = 0;  // (from the original)
    u32 r4_1 = 0x1880u - (1u << 5);  // (from the original)
    u32 r2_18 = r4_1 | 1u << 2;
    u32 r3_19 = r2_18 + (1u << 2);
    *gptr<u32>(r4_1 + r0_45) = 1;
    *gptr<u32>(r2_18 + r0_45) = 1;
    *gptr<u32>(r3_19 + r0_45) = 1;
    *gptr<u32>((r3_19 | 1u << 2) + r0_45) = 1;
    return r0_45;
}

}  // namespace d_002682ac
GUEST_EXPORT_FRAMED(0x002682ac, d_002682ac::f_002682ac, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_002684c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002684c0 {

struct __attribute__((packed)) Local_002684c0_ea_1 {
    u32 word_0;
    u8 unknown_4[0x408];  // (not used here)
    u32 word_40c;
    u8 unknown_410[0xe0];  // (not used here)
    u32 word_4f0;
};
GUEST_OFFSET(Local_002684c0_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_002684c0_ea_1, word_40c, 0x40c);
GUEST_OFFSET(Local_002684c0_ea_1, word_4f0, 0x4f0);

inline constexpr u32 vtable_DragIconGroup = 0x008ee248u;
inline constexpr u32 vtable_DragIconGroup_at_c = 0x008ee258u;
inline constexpr u32 vtable_ChangeListBase = 0x008ef1e0u;
inline constexpr u32 vtable_ChangeListBase_at_a40 = 0x008ef20cu;
inline constexpr u32 vtable_Control1Button = 0x008ef22cu;
inline constexpr u32 vtable_Control1Button_at_e4 = 0x008ef270u;
inline constexpr u32 vtable_ChangeRentalBase = 0x008f18d0u;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;
inline constexpr guest::Function<0x002f770c, u32(u32)> call_002f770c;
inline constexpr guest::Function<0x00567ef0, u32(u32)> call_00567ef0;
inline constexpr guest::Function<0x0056988c, u32(u32)> call_0056988c;
inline constexpr guest::Function<0x005bf744, u32(u32)> call_005bf744;
inline constexpr guest::Function<0x005e3194, u32(u32, u32, u32, u32)> call_005e3194;

u32 f_002684c0(gptr<ChangeListBase> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    arg0->word_0 = vtable_ChangeListBase;
    arg0->word_a40 = vtable_ChangeListBase_at_a40;
    u32 r0_2 = call_005e3194(arg0.addr() + 0x1798u, 0x8ef1e0u, 0x8ef20cu, r3);  // (from the original)
    u32 r0_4 = call_005e3194(r0_2 - 0xc4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *gptr<u32>(r0_4 - 0x134u) = vtable_DragIconGroup_at_c;  // (from the original)
    *gptr<u32>(r0_4 - 0x140u) = vtable_DragIconGroup;  // (from the original)
    u32 r0_6 = call_0056988c(r0_4 - 0x2cu);  // (from the original)
    u32 r0_8 = call_0056988c(r0_6 - 0x28u);  // (from the original)
    u32 r0_10 = call_0056988c(r0_8 - 0x28u);  // (from the original)
    u32 r0_12 = call_0056988c(r0_10 - 0x28u);  // (from the original)
    u32 r0_14 = call_0056988c(r0_12 - 0x28u);  // (from the original)
    u32 r0_16 = call_0056988c(r0_14 - 0x28u);  // (from the original)
    u32 r0_18 = call_0056988c(r0_16 - 0x2cu);  // (from the original)
    *gptr<u32>(r0_18 - 0x154u) = vtable_DragIconGroup_at_c;  // (from the original)
    *gptr<u32>(r0_18 - 0x160u) = vtable_DragIconGroup;  // (from the original)
    u32 r0_20 = call_0056988c(r0_18 - 0x4cu);  // (from the original)
    u32 r0_22 = call_0056988c(r0_20 - 0x28u);  // (from the original)
    u32 r0_24 = call_0056988c(r0_22 - 0x28u);  // (from the original)
    u32 r0_26 = call_0056988c(r0_24 - 0x28u);  // (from the original)
    u32 r0_28 = call_0056988c(r0_26 - 0x28u);  // (from the original)
    u32 r0_30 = call_0056988c(r0_28 - 0x28u);  // (from the original)
    u32 r0_32 = call_0056988c(r0_30 - 0x2cu);  // (from the original)
    call_002f76ac(r0_32 - 0x740u, 0x1ff9d4u, 0x130u, 6u);  // (from the original)
    u32 r0_35 = call_0056988c((r0_32 - 0x1474u) + 0xcfcu);  // (from the original)
    u32 r0_37 = call_0056988c(r0_35 - 0x28u);  // (from the original)
    u32 r0_39 = call_0056988c(r0_37 - 0x28u);  // (from the original)
    u32 r0_41 = call_0056988c(r0_39 - 0x28u);  // (from the original)
    u32 r0_43 = call_0056988c(r0_41 - 0x28u);  // (from the original)
    u32 r0_45 = call_0056988c(r0_43 - 0x28u);  // (from the original)
    u32 r0_47 = call_0056988c(r0_45 - 0x28u);  // (from the original)
    u32 r0_49 = call_0056988c(r0_47 - 0x28u);  // (from the original)
    u32 r0_51 = call_0056988c(r0_49 - 0x28u);  // (from the original)
    u32 r0_53 = call_005bf744(r0_51 - 0x14cu);  // (from the original)
    gptr<Local_002684c0_ea_1> ea_1 = gptr<Local_002684c0_ea_1>(r0_53 - 0xa70u);  // (from the original)
    ea_1->word_0 = vtable_ChangeRentalBase;
    ea_1->word_40c = vtable_Control1Button;
    ea_1->word_4f0 = vtable_Control1Button_at_e4;
    call_002f76ac(ea_1.addr() + 0x524u, 0x2e0b3cu, 0x518u, 1u);  // (from the original)
    u32 r0_55 = call_002f770c(ea_1.addr() + 0x40cu);  // (from the original)
    u32 r0_57 = call_0056988c(r0_55 - 0x28u);  // (from the original)
    u32 r0_59 = call_0056988c(r0_57 - 0x28u);  // (from the original)
    u32 r0_61 = call_005bf744(r0_59 - 0x14cu);  // (from the original)
    u32 r0_63 = call_00567ef0(r0_61 - 0x248u);  // (from the original)
    return r0_63 - 0x28u;  // (from the original)
}

}  // namespace d_002684c0
GUEST_EXPORT_FRAMED(0x002684c0, d_002684c0::f_002684c0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002686d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002686d4 {

struct __attribute__((packed)) Object_002686d4_0 {
    u8 unknown_0[0x108];  // (not used here)
    u32 word_108;
};
GUEST_OFFSET(Object_002686d4_0, word_108, 0x108);


u32 f_002686d4(gptr<Object_002686d4_0> arg0, u32 r1) {
    u32 r0_1 = arg0->word_108;
    *gptr<u32>(r0_1 + 0xc4u) = r1;  // (from the original)
    return r0_1;
}

}  // namespace d_002686d4
GUEST_EXPORT(0x002686d4, d_002686d4::f_002686d4);

// f_0026876c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0026876c {

struct __attribute__((packed)) Object_0026876c_0 {
    u8 unknown_0[0x108];  // (not used here)
    u32 word_108;
    u32 word_10c;
};
GUEST_OFFSET(Object_0026876c_0, word_108, 0x108);
GUEST_OFFSET(Object_0026876c_0, word_10c, 0x10c);

struct __attribute__((packed)) Local_0026876c_r2_2 {
    u8 unknown_0[0xcc];  // (not used here)
    u32 word_cc;
    u8 unknown_d0[0xa];  // (not used here)
    u8 byte_da;
};
GUEST_OFFSET(Local_0026876c_r2_2, word_cc, 0xcc);
GUEST_OFFSET(Local_0026876c_r2_2, byte_da, 0xda);


struct __attribute__((packed)) Frame_0026876c {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Frame_0026876c, word_0, 0x0);
GUEST_OFFSET(Frame_0026876c, word_4, 0x4);
GUEST_SIZE(Frame_0026876c, 0x8);

void f_0026876c(gptr<Object_0026876c_0> arg0, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_0026876c> frame;  // the original's stack frame
    u32 r4 = 0;
    u32 r3 = frame.at(0).addr();
    frame->word_0 = r1;
    frame->word_4 = r2;
    u32 r1_1 = arg0->word_10c;
    r1 = 0u;
    if (r1_1 != 0 && r1_1 >> 0x1f == ((r1_1 & (r1_1 ^ r1_1)) >> 0x1f)) {  // (from the original)
        r4 = 1u;
    } else {
        guest::cpu()->r[1] = r1;
        return;
    }
    do {
        u32 r2_1 = r1 * 0xa3u;  // (from the original)
        u32 r12_1 = *gptr<u32>(r3 + (r1 << 2));
        r1 += 1u;
        gptr<Local_0026876c_r2_2> r2_2 = gptr<Local_0026876c_r2_2>(arg0->word_108 + (r2_1 << 3));
        r2_2->word_cc = r12_1;
        r2_2->byte_da = u8(r4);
        guest::preempt();
    } while (s32(arg0->word_10c) > s32(r1));
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0026876c
GUEST_EXPORT_FRAMED(0x0026876c, d_0026876c::f_0026876c, 0x30);  // pushes {r4, r5} first, as the original

// f_00268818: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00268818 {

struct __attribute__((packed)) Object_00268818_0 {
    u8 unknown_0[0x108];  // (not used here)
    u32 word_108;
    u32 word_10c;
};
GUEST_OFFSET(Object_00268818_0, word_108, 0x108);
GUEST_OFFSET(Object_00268818_0, word_10c, 0x10c);

struct __attribute__((packed)) Local_00268818_r2_1 {
    u8 unknown_0[0xd0];  // (not used here)
    u32 word_d0;
    u8 unknown_d4[0x7];  // (not used here)
    u8 byte_db;
    u8 byte_dc;
};
GUEST_OFFSET(Local_00268818_r2_1, word_d0, 0xd0);
GUEST_OFFSET(Local_00268818_r2_1, byte_db, 0xdb);
GUEST_OFFSET(Local_00268818_r2_1, byte_dc, 0xdc);


struct __attribute__((packed)) Frame_00268818 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Frame_00268818, word_0, 0x0);
GUEST_OFFSET(Frame_00268818, word_4, 0x4);
GUEST_SIZE(Frame_00268818, 0x8);

void f_00268818(gptr<Object_00268818_0> arg0, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_00268818> frame;  // the original's stack frame
    u32 r3 = 0;
    u32 r12 = frame.at(0).addr();
    frame->word_0 = r1;
    frame->word_4 = r2;
    u32 r1_1 = arg0->word_10c;
    r1 = 0u;
    if (r1_1 != 0 && r1_1 >> 0x1f == ((r1_1 & (r1_1 ^ r1_1)) >> 0x1f)) {  // (from the original)
        r3 = 1u;
    } else {
        return;
    }
    do {
        u32 r5_1 = r1 * 0xa3u;  // (from the original)
        u32 r4_1 = *gptr<u32>(r12 + (r1 << 2));
        r1 += 1u;
        gptr<Local_00268818_r2_1> r2_1 = gptr<Local_00268818_r2_1>(arg0->word_108 + (r5_1 << 3));
        r2_1->word_d0 = r4_1;
        r2_1->byte_db = u8(r3);
        r2_1->byte_dc = u8(r3);
        guest::preempt();
    } while (s32(arg0->word_10c) > s32(r1));
}

}  // namespace d_00268818
GUEST_EXPORT_FRAMED(0x00268818, d_00268818::f_00268818, 0x30);  // pushes {r4, r5} first, as the original

// f_00268878: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00268878 {

struct __attribute__((packed)) Object_00268878_0 {
    u8 unknown_0[0x108];  // (not used here)
    u32 word_108;
    u32 word_10c;
};
GUEST_OFFSET(Object_00268878_0, word_108, 0x108);
GUEST_OFFSET(Object_00268878_0, word_10c, 0x10c);


struct __attribute__((packed)) Frame_00268878 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00268878, word_0, 0x0);
GUEST_OFFSET(Frame_00268878, word_4, 0x4);
GUEST_SIZE(Frame_00268878, 0xc);

void f_00268878(gptr<Object_00268878_0> arg0, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_00268878> frame;  // the original's stack frame
    u32 r3 = frame.at(0).addr();
    frame->word_0 = r1;
    frame->word_4 = r2;
    u32 r1_1 = arg0->word_10c;
    r1 = 0u;
    if (r1_1 == 0 || r1_1 >> 0x1f != ((r1_1 & (r1_1 ^ r1_1)) >> 0x1f)) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return;
    }
    do {
        u32 r4_1 = r1 * 0xa3u;  // (from the original)
        u32 r12_1 = *gptr<u32>(r3 + (r1 << 2));
        r1 += 1u;
        *gptr<u32>(arg0->word_108 + (r4_1 << 3) + 0xc4u) = r12_1;  // (from the original)
        guest::preempt();
    } while (s32(arg0->word_10c) > s32(r1));
    guest::cpu()->r[1] = r1;
}

}  // namespace d_00268878
GUEST_EXPORT_FRAMED(0x00268878, d_00268878::f_00268878, 0x10);  // pushes {r4} first, as the original

// f_00268a08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00268a08 {

struct __attribute__((packed)) Object_00268a08_0 {
    u8 unknown_0[0x108];  // (not used here)
    u32 word_108;
    u32 word_10c;
};
GUEST_OFFSET(Object_00268a08_0, word_108, 0x108);
GUEST_OFFSET(Object_00268a08_0, word_10c, 0x10c);

struct __attribute__((packed)) Local_00268a08_r2_3 {
    u8 unknown_0[0xcc];  // (not used here)
    u32 word_cc;
    u8 unknown_d0[0xa];  // (not used here)
    u8 byte_da;
};
GUEST_OFFSET(Local_00268a08_r2_3, word_cc, 0xcc);
GUEST_OFFSET(Local_00268a08_r2_3, byte_da, 0xda);


struct __attribute__((packed)) Frame_00268a08 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Frame_00268a08, word_0, 0x0);
GUEST_OFFSET(Frame_00268a08, word_4, 0x4);
GUEST_OFFSET(Frame_00268a08, word_8, 0x8);
GUEST_SIZE(Frame_00268a08, 0xc);

void f_00268a08(gptr<Object_00268a08_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00268a08> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    frame->word_0 = r1;
    frame->word_4 = r2;
    frame->word_8 = r3;
    r3 = frame.at(0).addr();
    u32 r2_1 = arg0->word_10c;
    r1 = 0u;
    if (r2_1 != 0 && s32(r2_1) >= 0) {
        r4 = 1u;
    }
    if (s32(r2_1) <= 0) {
        return;
    }
    do {
        u32 r2_2 = r1 * 0xa3u;  // (from the original)
        u32 r12_1 = *gptr<u32>(r3 + (r1 << 2));
        r1 += 1u;
        gptr<Local_00268a08_r2_3> r2_3 = gptr<Local_00268a08_r2_3>(arg0->word_108 + (r2_2 << 3));
        r2_3->word_cc = r12_1;
        r2_3->byte_da = u8(r4);
        guest::preempt();
    } while (s32(arg0->word_10c) > s32(r1));
}

}  // namespace d_00268a08
GUEST_EXPORT_FRAMED(0x00268a08, d_00268a08::f_00268a08, 0x30);  // pushes {r4, r5} first, as the original

// f_00268ab8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00268ab8 {

struct __attribute__((packed)) Object_00268ab8_0 {
    u8 unknown_0[0x108];  // (not used here)
    u32 word_108;
    u32 word_10c;
};
GUEST_OFFSET(Object_00268ab8_0, word_108, 0x108);
GUEST_OFFSET(Object_00268ab8_0, word_10c, 0x10c);


struct __attribute__((packed)) Frame_00268ab8 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Frame_00268ab8, word_0, 0x0);
GUEST_OFFSET(Frame_00268ab8, word_4, 0x4);
GUEST_OFFSET(Frame_00268ab8, word_8, 0x8);
GUEST_SIZE(Frame_00268ab8, 0xc);

void f_00268ab8(gptr<Object_00268ab8_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00268ab8> frame;  // the original's stack frame
    frame->word_0 = r1;
    frame->word_4 = r2;
    frame->word_8 = r3;
    r3 = frame.at(0).addr();
    r1 = 0u;
    if (s32(arg0->word_10c) <= 0) {
        guest::cpu()->r[1] = r1;
        return;
    }
    do {
        u32 r4_1 = r1 * 0xa3u;  // (from the original)
        u32 r12_1 = *gptr<u32>(r3 + (r1 << 2));
        r1 += 1u;
        *gptr<u32>(arg0->word_108 + (r4_1 << 3) + 0xc4u) = r12_1;  // (from the original)
        guest::preempt();
    } while (s32(arg0->word_10c) > s32(r1));
    guest::cpu()->r[1] = r1;
}

}  // namespace d_00268ab8
GUEST_EXPORT_FRAMED(0x00268ab8, d_00268ab8::f_00268ab8, 0x10);  // pushes {r4} first, as the original

// f_00268d94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00268d94 {

struct __attribute__((packed)) Object_00268d94_0 {
    u8 unknown_0[0x3f4];  // (not used here)
    u32 word_3f4;
    u8 unknown_3f8[0x4];  // (not used here)
    u32 word_3fc;
};
GUEST_OFFSET(Object_00268d94_0, word_3f4, 0x3f4);
GUEST_OFFSET(Object_00268d94_0, word_3fc, 0x3fc);

inline constexpr guest::Function<0x004f1328, u32(u32, u32, u32, u32)> call_004f1328;

void f_00268d94(gptr<Object_00268d94_0> arg0, u32 r1) {
    arg0->word_3fc = r1;
    u32 r0_2 = call_004f1328(r1 + 0x78u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    arg0->word_3f4 = *gptr<u32>(r0_2 + 8u);
}

}  // namespace d_00268d94
GUEST_EXPORT_FRAMED(0x00268d94, d_00268d94::f_00268d94, 0x4010);  // pushes {r4, lr} first, as the original

// f_00269478: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00269478 {

struct __attribute__((packed)) Local_00269478_r0_3 {
    u8 unknown_0[0x3fc];  // (not used here)
    u32 word_3fc;
    u8 byte_400;
    u8 byte_401;
    u8 unknown_402[0x4];  // (not used here)
    u8 byte_406;
    u8 byte_407;
};
GUEST_OFFSET(Local_00269478_r0_3, word_3fc, 0x3fc);
GUEST_OFFSET(Local_00269478_r0_3, byte_400, 0x400);
GUEST_OFFSET(Local_00269478_r0_3, byte_401, 0x401);
GUEST_OFFSET(Local_00269478_r0_3, byte_406, 0x406);
GUEST_OFFSET(Local_00269478_r0_3, byte_407, 0x407);

struct __attribute__((packed)) Local_00269478_r2_1 {
    u8 unknown_0[0x2];  // (not used here)
    u16 half_2;
    u16 half_4;
};
GUEST_OFFSET(Local_00269478_r2_1, half_2, 0x2);
GUEST_OFFSET(Local_00269478_r2_1, half_4, 0x4);

inline constexpr u32 vtable_EmoticonAction = 0x008ef334u;
inline constexpr guest::Function<0x0026a66c, u32(u32)> call_0026a66c;

u32 f_00269478(gptr<EmoticonAction> arg0) {
    arg0->word_0 = vtable_EmoticonAction;
    u32 r0_2 = call_0026a66c(arg0.addr() + 4u);
    gptr<Local_00269478_r0_3> r0_3 = gptr<Local_00269478_r0_3>(r0_2 - 4u);
    r0_3->word_3fc = 0;
    gptr<Local_00269478_r2_1> r2_1 = gptr<Local_00269478_r2_1>(r0_3.addr() + 0x400u);  // (from the original)
    r0_3->byte_400 = 0;
    r0_3->byte_401 = 0;
    r2_1->half_2 = 0;
    r2_1->half_4 = 0;
    r0_3->byte_406 = 0;
    r0_3->byte_407 = 0;
    return r0_3.addr();
}

}  // namespace d_00269478
GUEST_EXPORT_FRAMED(0x00269478, d_00269478::f_00269478, 0x4010);  // pushes {r4, lr} first, as the original

// f_002694b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002694b8 {

inline constexpr u32 vtable_EmoticonAction = 0x008ef334u;
inline constexpr guest::Function<0x0026a694, u32(u32, u32)> call_0026a694;

u32 f_002694b8(gptr<EmoticonAction> arg0) {
    arg0->word_0 = vtable_EmoticonAction;
    u32 r0_2 = call_0026a694(arg0.addr() + 4u, 0x8ef334u);  // (from the original)
    return r0_2 - 4u;
}

}  // namespace d_002694b8
GUEST_EXPORT_FRAMED(0x002694b8, d_002694b8::f_002694b8, 0x4010);  // pushes {r4, lr} first, as the original

// f_0026a5dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0026a5dc {

inline constexpr guest::Function<0x002e6368, u32(u32, u32, u32, u32)> call_002e6368;
inline constexpr guest::Function<0x004eb3e0, u32(u32, u32)> call_004eb3e0;
inline constexpr guest::Function<0x00745970, u32(u32, u32, u32, u32)> call_00745970;

u32 f_0026a5dc(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r6 = r0;
    u32 r7 = r0 + 0x3f0u;  // (from the original)
    u32 r8 = 3u;
    u32 r9 = 2u;
    do {
        r0_1 = *gptr<u32>(r6 + 0xecu);  // (from the original)
        if (r0_1 == 0) {
            *gptr<u32>(r6 + 0xecu) = r8;  // (from the original)
        } else if (r0_1 == 1u) {
            u32 r4 = r6 + 0x34u;  // (from the original)
            u32 r5 = r6 + 0xe4u;  // (from the original)
            if (r4 != r5) {
                do {
                    u32 r0_2 = *gptr<u32>(r4 + 0x18u);  // (from the original)
                    if (r0_2 != 0) {
                        r1 = *gptr<u32>(r4 + 0x1cu);  // (from the original)
                        if (r1 == *gptr<u32>(r0_2 + 0xcu)) {  // (from the original)
                            call_002e6368(r4 + 0xcu, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                            r1 = guest::cpu()->r[1];
                        }
                    }
                    r0_1 = call_00745970(r4, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
                    r1 = guest::cpu()->r[1];
                    if (r0_1 != 0) {
                        r0_1 = call_004eb3e0(r4, r1);
                        r1 = guest::cpu()->r[1];
                    }
                    r4 += 0x2cu;  // (from the original)
                    guest::preempt();
                } while (r4 != r5);
            }
            *gptr<u32>(r6 + 0xecu) = r9;  // (from the original)
        }
        r6 += 0xfcu;  // (from the original)
        guest::preempt();
    } while (r6 != r7);
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_0026a5dc
GUEST_EXPORT_FRAMED(0x0026a5dc, d_0026a5dc::f_0026a5dc, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0026a66c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0026a66c {

struct __attribute__((packed)) Local_0026a66c_r0_1 {
    u8 unknown_0[0x3f0];  // (not used here)
    u32 word_3f0;
    u8 byte_3f4;
};
GUEST_OFFSET(Local_0026a66c_r0_1, word_3f0, 0x3f0);
GUEST_OFFSET(Local_0026a66c_r0_1, byte_3f4, 0x3f4);

inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;

u32 f_0026a66c(u32 r0) {
    gptr<Local_0026a66c_r0_1> r0_1 = gptr<Local_0026a66c_r0_1>(call_00301d0c(r0, 0x2699ecu, 0xfcu, 4u));  // (from the original)
    r0_1->word_3f0 = 0;
    r0_1->byte_3f4 = 0;
    return r0_1.addr();
}

}  // namespace d_0026a66c
GUEST_EXPORT_FRAMED(0x0026a66c, d_0026a66c::f_0026a66c, 0x4010);  // pushes {r4, lr} first, as the original

// f_0026a694: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0026a694 {

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;

u32 f_0026a694(u32 r0) {
    call_002f76ac(r0, 0x269a48u, 0xfcu, 4u);  // (from the original)
    return r0;
}

}  // namespace d_0026a694
GUEST_EXPORT_FRAMED(0x0026a694, d_0026a694::f_0026a694, 0x4010);  // pushes {r4, lr} first, as the original

// f_0026adf8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0026adf8 {

struct __attribute__((packed)) Object_0026adf8_0 {
    u8 unknown_0[0x1250];  // (not used here)
    u32 word_1250;
    u32 word_1254;
    u32 word_1258;
};
GUEST_OFFSET(Object_0026adf8_0, word_1250, 0x1250);
GUEST_OFFSET(Object_0026adf8_0, word_1254, 0x1254);
GUEST_OFFSET(Object_0026adf8_0, word_1258, 0x1258);

struct __attribute__((packed)) Object_0026adf8_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_0026adf8_1, word_0, 0x0);
GUEST_OFFSET(Object_0026adf8_1, word_4, 0x4);
GUEST_OFFSET(Object_0026adf8_1, word_8, 0x8);

inline guest::global<u8, 0x009506b0> global_009506b0;
inline guest::global<u32, 0x009506b4> global_009506b4;
inline constexpr guest::Function<0x0026a824, u32(u32, u32, u32, u32)> call_0026a824;

u32 f_0026adf8(gptr<Object_0026adf8_0> arg0, gptr<Object_0026adf8_1> arg1) {
    u32 r2_1 = arg0.addr() + 0x1250u;  // (from the original)
    arg0->word_1250 = arg1->word_0;
    u32 r3_1 = arg1->word_4;
    arg0->word_1254 = r3_1;
    arg0->word_1258 = arg1->word_8;
    u32 r1_1 = *global_009506b0;
    if (r1_1 != 0xffu) {  // (from the original)
        return call_0026a824(arg0.addr(), r1_1, r2_1, r3_1);
    }
    u32 r1_2 = *global_009506b4;
    if (r1_2 == 0) {
        return call_0026a824(arg0.addr(), r1_2, r2_1, r3_1);
    }
    u32 r1_3 = r1_2 + 0x6aceu;  // (from the original)
    *gptr<u8>(r1_3) = 1;
    return call_0026a824(arg0.addr(), r1_3, 1u, r3_1);
}

}  // namespace d_0026adf8
GUEST_EXPORT(0x0026adf8, d_0026adf8::f_0026adf8);

// f_0026ae58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0026ae58 {

struct __attribute__((packed)) Object_0026ae58_0 {
    u8 unknown_0[0x121c];  // (not used here)
    u32 word_121c;
};
GUEST_OFFSET(Object_0026ae58_0, word_121c, 0x121c);

inline constexpr guest::Function<0x006e9c2c, u32(u32, u32)> call_006e9c2c;

u32 f_0026ae58(gptr<Object_0026ae58_0> arg0) {
    float S0_1 = 6.0f;
    u32 r0_1 = arg0->word_121c + 0x78u;  // (from the original)
    guest::cpu()->s[0] = S0_1;
    call_006e9c2c(r0_1, 0u);
    *gptr<u32>((arg0.addr() + 0x1000u) + 0x220u) = 0;  // (from the original)
    return 0u;
}

}  // namespace d_0026ae58
GUEST_EXPORT_FRAMED(0x0026ae58, d_0026ae58::f_0026ae58, 0x4010);  // pushes {r4, lr} first, as the original

// f_0026b2e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0026b2e0 {

struct __attribute__((packed)) Local_0026b2e0_r1_1 {
    u8 unknown_0[0x21c];  // (not used here)
    u32 word_21c;
    u8 unknown_220[0x4];  // (not used here)
    float float_224;
    u8 unknown_228[0x24];  // (not used here)
    u32 word_24c;
};
GUEST_OFFSET(Local_0026b2e0_r1_1, word_21c, 0x21c);
GUEST_OFFSET(Local_0026b2e0_r1_1, float_224, 0x224);
GUEST_OFFSET(Local_0026b2e0_r1_1, word_24c, 0x24c);

struct __attribute__((packed)) Local_0026b2e0_r3_1 {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
    float float_10;
    float float_14;
    float float_18;
    float float_1c;
};
GUEST_OFFSET(Local_0026b2e0_r3_1, float_0, 0x0);
GUEST_OFFSET(Local_0026b2e0_r3_1, float_4, 0x4);
GUEST_OFFSET(Local_0026b2e0_r3_1, float_8, 0x8);
GUEST_OFFSET(Local_0026b2e0_r3_1, float_c, 0xc);
GUEST_OFFSET(Local_0026b2e0_r3_1, float_10, 0x10);
GUEST_OFFSET(Local_0026b2e0_r3_1, float_14, 0x14);
GUEST_OFFSET(Local_0026b2e0_r3_1, float_18, 0x18);
GUEST_OFFSET(Local_0026b2e0_r3_1, float_1c, 0x1c);

inline guest::global<u32, 0x009528e8> global_009528e8;
inline guest::global<u32, 0x009528ec> global_009528ec;
inline guest::global<u32, 0x009528f0> global_009528f0;
inline guest::global<u32, 0x009528f4> global_009528f4;
inline guest::global<u32, 0x009528f8> global_009528f8;
inline guest::global<u32, 0x009528fc> global_009528fc;
inline guest::global<u32, 0x00952900> global_00952900;
inline guest::global<u32, 0x00952904> global_00952904;
inline guest::global<u32, 0x00952908> global_00952908;
inline constexpr guest::Function<0x006a8280, u32(u32)> call_006a8280;

u32 f_0026b2e0(u32 r0, u32 r1, float S0, float S1, float S2, float S3, float S4, float S5, float S6, float S7) {
    u32 r0_1 = call_006a8280(r0);
    gptr<Local_0026b2e0_r1_1> r1_1 = gptr<Local_0026b2e0_r1_1>(r0_1 + 0x1000u);  // (from the original)
    float S0_1 = 1.0f;
    r1_1->word_21c = r1;
    r1_1->float_224 = S0_1;
    float S0_2 = std::bit_cast<float>(*global_009528e8);
    float S1_1 = std::bit_cast<float>(*global_009528ec);
    float S2_1 = std::bit_cast<float>(*global_009528f0);
    float S3_1 = std::bit_cast<float>(*global_009528f4);
    float S4_1 = std::bit_cast<float>(*global_009528f8);
    float S5_1 = std::bit_cast<float>(*global_009528fc);
    float S6_1 = std::bit_cast<float>(*global_00952900);
    float S7_1 = std::bit_cast<float>(*global_00952904);
    gptr<Local_0026b2e0_r3_1> r3_1 = gptr<Local_0026b2e0_r3_1>(r0_1 + 0x122cu);  // (from the original)
    r3_1->float_0 = S0_2;
    r3_1->float_4 = S1_1;
    r3_1->float_8 = S2_1;
    r3_1->float_c = S3_1;
    r3_1->float_10 = S4_1;
    r3_1->float_14 = S5_1;
    r3_1->float_18 = S6_1;
    r3_1->float_1c = S7_1;
    r1_1->word_24c = *global_00952908;
    guest::cpu()->r[1] = r1_1.addr();
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_1;
    return r0_1;
}

}  // namespace d_0026b2e0
GUEST_EXPORT_FRAMED(0x0026b2e0, d_0026b2e0::f_0026b2e0, 0x4010);  // pushes {r4, lr} first, as the original

// f_0026b3a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0026b3a0 {

struct __attribute__((packed)) Object_0026b3a0_0 {
    u8 unknown_0[0xd0];  // (not used here)
    u32 word_d0;
    u8 unknown_d4[0x7];  // (not used here)
    u8 byte_db;
    u8 byte_dc;
    u8 unknown_dd[0x1];  // (not used here)
    u8 byte_de;
    u8 unknown_df[0x161];  // (not used here)
    u32 word_240;
    u8 unknown_244[0xc8];  // (not used here)
    u32 word_30c;
};
GUEST_OFFSET(Object_0026b3a0_0, word_d0, 0xd0);
GUEST_OFFSET(Object_0026b3a0_0, byte_db, 0xdb);
GUEST_OFFSET(Object_0026b3a0_0, byte_dc, 0xdc);
GUEST_OFFSET(Object_0026b3a0_0, byte_de, 0xde);
GUEST_OFFSET(Object_0026b3a0_0, word_240, 0x240);
GUEST_OFFSET(Object_0026b3a0_0, word_30c, 0x30c);

struct __attribute__((packed)) Object_0026b3a0_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_0026b3a0_1, word_0, 0x0);
GUEST_OFFSET(Object_0026b3a0_1, word_4, 0x4);

inline guest::global<u32, 0x0084975c> global_0084975c;
inline guest::global<u32, 0x00849760> global_00849760;
inline guest::global<u32, 0x00849764> global_00849764;
inline guest::global<u32, 0x00849768> global_00849768;
inline guest::global<u32, 0x0084976c> global_0084976c;
inline guest::global<u32, 0x00849770> global_00849770;
inline constexpr guest::Function<0x0026b500, u32(u32)> call_0026b500;
inline constexpr guest::Function<0x002b6a00, u32(u32, u32)> call_002b6a00;
inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32)> call_004b4fc0;
inline constexpr guest::Function<0x004b6d74, u32(u32, u32)> call_004b6d74;
inline constexpr guest::Function<0x00568adc, u32(u32, u32)> call_00568adc;
inline constexpr guest::Function<0x00569184, u32(u32, u32, u32, u32)> call_00569184;
inline constexpr guest::Function<0x005695e4, u32(u32, u32, u32)> call_005695e4;

struct __attribute__((packed)) Frame_0026b3a0 {
    u32 word_0;
    u32 word_4;
    float float_8;
    float float_c;
    float float_10;
    float float_14;
    float float_18;
};
GUEST_OFFSET(Frame_0026b3a0, word_0, 0x0);
GUEST_OFFSET(Frame_0026b3a0, word_4, 0x4);
GUEST_OFFSET(Frame_0026b3a0, float_8, 0x8);
GUEST_OFFSET(Frame_0026b3a0, float_c, 0xc);
GUEST_OFFSET(Frame_0026b3a0, float_10, 0x10);
GUEST_OFFSET(Frame_0026b3a0, float_14, 0x14);
GUEST_OFFSET(Frame_0026b3a0, float_18, 0x18);
GUEST_SIZE(Frame_0026b3a0, 0x1c);

void f_0026b3a0(gptr<Object_0026b3a0_0> arg0, gptr<Object_0026b3a0_1> arg1, float S0, float S1, float S2, float S3, float S4, float S5, float S6) {
    guest::StackFrameOf<Frame_0026b3a0> frame;  // the original's stack frame
    arg0->word_30c = arg1->word_0;
    call_00569184(arg0.addr() + 0x220u, 0x84a010u, 0u, 4u);  // (from the original)
    float S0_1 = 0.0f;
    float S1_1 = std::bit_cast<float>(*global_0084975c);
    float S2_1 = std::bit_cast<float>(*global_00849760);
    float S3_1 = std::bit_cast<float>(*global_00849764);
    float S4_1 = std::bit_cast<float>(*global_00849768);
    float S5_1 = std::bit_cast<float>(*global_0084976c);
    float S6_1 = std::bit_cast<float>(*global_00849770);
    frame->word_0 = std::bit_cast<u32>(S0_1);
    frame->word_4 = std::bit_cast<u32>(S1_1);
    frame->float_8 = S2_1;
    frame->float_c = S3_1;
    frame->float_10 = S4_1;
    frame->float_14 = S5_1;
    frame->float_18 = S6_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    guest::cpu()->s[3] = S3_1;
    guest::cpu()->s[4] = S4_1;
    guest::cpu()->s[5] = S5_1;
    guest::cpu()->s[6] = S6_1;
    u32 r0_3 = call_00568adc(arg0.addr() + 0x220u, 0x84a004u);  // (from the original)
    frame->word_0 = r0_3;
    u32 r0_5 = call_004b4fc0(arg0.addr() + 0x220u, 0x849ff8u, 1u);  // (from the original)
    float S0_3 = 0.0f;
    frame->word_4 = r0_5;
    frame->float_8 = S0_3;
    frame->float_c = S0_3;
    guest::cpu()->s[0] = S0_3;
    call_002b6a00(arg0.addr(), frame.at(0).addr());
    call_004b6d74(arg1->word_4, arg0->word_240);
    call_005695e4(arg0.addr() + 0xe0u, 0x849fdcu, arg1->word_0);  // (from the original)
    call_005695e4(arg0.addr() + 0x108u, 0x849fc0u, arg1->word_0);  // (from the original)
    call_005695e4(arg0.addr() + 0x130u, 0x849fa4u, arg1->word_0);  // (from the original)
    call_005695e4(arg0.addr() + 0x158u, 0x849f84u, arg1->word_0);  // (from the original)
    call_005695e4(arg0.addr() + 0x180u, 0x849f68u, arg1->word_0);  // (from the original)
    call_005695e4(arg0.addr() + 0x1a8u, 0x849f4cu, arg1->word_0);  // (from the original)
    call_005695e4(arg0.addr() + 0x1d0u, 0x849f30u, arg1->word_0);  // (from the original)
    call_005695e4(arg0.addr() + 0x1f8u, 0x849f10u, arg1->word_0);  // (from the original)
    arg0->byte_de = 1;
    call_0026b500(arg0.addr());
    arg0->word_d0 = 0x100043f;  // (from the original)
    arg0->byte_db = 1;
    arg0->byte_dc = 1;
}

}  // namespace d_0026b3a0
GUEST_EXPORT_FRAMED(0x0026b3a0, d_0026b3a0::f_0026b3a0, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0026b500: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0026b500 {

struct __attribute__((packed)) Object_0026b500_0 {
    u8 unknown_0[0xcc];  // (not used here)
    u32 word_cc;
    u8 unknown_d0[0xa];  // (not used here)
    u8 byte_da;
    u8 unknown_db[0x3];  // (not used here)
    u8 byte_de;
    u8 unknown_df[0x19];  // (not used here)
    u32 word_f8;
    u8 unknown_fc[0x24];  // (not used here)
    u32 word_120;
    u8 unknown_124[0x24];  // (not used here)
    u32 word_148;
    u8 unknown_14c[0x24];  // (not used here)
    u32 word_170;
    u8 unknown_174[0x24];  // (not used here)
    u32 word_198;
    u8 unknown_19c[0x24];  // (not used here)
    u32 word_1c0;
    u8 unknown_1c4[0x24];  // (not used here)
    u32 word_1e8;
    u8 unknown_1ec[0x24];  // (not used here)
    u32 word_210;
};
GUEST_OFFSET(Object_0026b500_0, word_cc, 0xcc);
GUEST_OFFSET(Object_0026b500_0, byte_da, 0xda);
GUEST_OFFSET(Object_0026b500_0, byte_de, 0xde);
GUEST_OFFSET(Object_0026b500_0, word_f8, 0xf8);
GUEST_OFFSET(Object_0026b500_0, word_120, 0x120);
GUEST_OFFSET(Object_0026b500_0, word_148, 0x148);
GUEST_OFFSET(Object_0026b500_0, word_170, 0x170);
GUEST_OFFSET(Object_0026b500_0, word_198, 0x198);
GUEST_OFFSET(Object_0026b500_0, word_1c0, 0x1c0);
GUEST_OFFSET(Object_0026b500_0, word_1e8, 0x1e8);
GUEST_OFFSET(Object_0026b500_0, word_210, 0x210);

inline constexpr guest::Function<0x00569774, u32(u32, u32)> call_00569774;

void f_0026b500(gptr<Object_0026b500_0> arg0) {
    u32 r0_1 = arg0->byte_de == 0;
    arg0->byte_de = u8(r0_1);
    if (r0_1 != 0) {
        call_00569774(arg0.addr() + 0x20u, arg0->word_f8);  // (from the original)
        call_00569774(arg0.addr() + 0x48u, arg0->word_120);  // (from the original)
        call_00569774(arg0.addr() + 0x70u, arg0->word_148);  // (from the original)
        call_00569774(arg0.addr() + 0x98u, arg0->word_170);  // (from the original)
        arg0->word_cc = 0x1000445;  // (from the original)
        arg0->byte_da = 1;
        return;
    }
    call_00569774(arg0.addr() + 0x20u, arg0->word_198);  // (from the original)
    call_00569774(arg0.addr() + 0x48u, arg0->word_1c0);  // (from the original)
    call_00569774(arg0.addr() + 0x70u, arg0->word_1e8);  // (from the original)
    call_00569774(arg0.addr() + 0x98u, arg0->word_210);  // (from the original)
    arg0->word_cc = 0x1000444;  // (from the original)
    arg0->byte_da = 1;
}

}  // namespace d_0026b500
GUEST_EXPORT_FRAMED(0x0026b500, d_0026b500::f_0026b500, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0026d328: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0026d328 {

inline constexpr guest::Function<0x002b8958, u32(u32, u32)> call_002b8958;
inline constexpr guest::Function<0x002b89ec, u32(u32, u32, u32)> call_002b89ec;
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;
inline constexpr guest::Function<0x002fcaf4, u32(u32)> call_002fcaf4;
inline constexpr guest::Function<0x00724424, u32(u32, u32, u32)> call_00724424;
inline constexpr guest::Function<0x00724578, u32(u32, u32)> call_00724578;

void f_0026d328(u32 r0, u32 r1_unused, u32 r2) {
    u32 r4 = 0u;
    u32 r6 = r0;
    u32 r10 = r4;
    u32 r7 = r0 + 0x8400u;  // (from the original)
    do {
        u32 r0_1 = *gptr<u8>(r7 + 0x31u);  // (from the original)
        u32 zf_1 = r0_1 == 0;
        u32 r1_1 = r4 * (r0_1 == 0 ? 0xdbu : 0xe5u);  // (from the original)
        u32 r0_2 = r6 + (r1_1 << 2);
        u32 r5_1 = zf_1 ? r0_2 + 0x890u : r0_2 + 0x4410u;  // (from the original)
        u32 r0_3 = call_002fb94c(r0_2, r1_1, r2, guest::cpu()->r[3]);
        u32 r0_5 = call_00724424(r0_3 + 0x6bd0u, r4, 0u);  // (from the original)
        u32 r0_6 = call_002fcaf4(r0_5);
        if (r0_6 != 0) {
            call_002b8958(r5_1, 0u);
            r2 = guest::cpu()->r[2];
            *gptr<u8>(r5_1 + 0xd9u) = u8(r10);  // (from the original)
        } else {
            u32 r0_7 = call_002fb94c(r0_6, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            u32 r0_9 = call_00724578(r0_7 + 0x6bd0u, r4);  // (from the original)
            call_002b89ec(r5_1, r0_5, r0_9);
            r2 = guest::cpu()->r[2];
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0x10u);  // (from the original)
}

}  // namespace d_0026d328
GUEST_EXPORT_FRAMED(0x0026d328, d_0026d328::f_0026d328, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0026d644: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0026d644 {

struct __attribute__((packed)) Object_0026d644_0 {
    u8 unknown_0[0x8431];  // (not used here)
    u8 byte_8431;
};
GUEST_OFFSET(Object_0026d644_0, byte_8431, 0x8431);

inline constexpr guest::Function<0x002b8958, u32(u32, u32)> call_002b8958;
inline constexpr guest::Function<0x002b89ec, u32(u32, u32, u32, u32)> call_002b89ec;
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;
inline constexpr guest::Function<0x002fcaf4, u32(u32)> call_002fcaf4;
inline constexpr guest::Function<0x00724424, u32(u32, u32, u32)> call_00724424;
inline constexpr guest::Function<0x00724578, u32(u32, u32)> call_00724578;

u32 f_0026d644(gptr<Object_0026d644_0> arg0, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r1_1 = arg0->byte_8431;
    u32 zf_1 = r1_1 == 0;
    u32 r2_1 = r1_1 == 0 ? 0xdbu : 0xe5u;  // (from the original)
    u32 r1_2 = r1 * r2_1;
    u32 r0_1 = arg0.addr() + (r1_2 << 2);
    u32 r5_1 = zf_1 ? r0_1 + 0x890u : r0_1 + 0x4410u;  // (from the original)
    u32 r0_2 = call_002fb94c(r0_1, r1_2, r2_1, guest::cpu()->r[3]);
    u32 r0_4 = call_00724424(r0_2 + 0x6bd0u, r1, 0u);  // (from the original)
    u32 r0_5 = call_002fcaf4(r0_4);
    if (r0_5 != 0) {
        call_002b8958(r5_1, 0u);
        *gptr<u8>(r5_1 + 0xd9u) = 0;  // (from the original)
        return 0u;
    }
    u32 r0_6 = call_002fb94c(r0_5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_8 = call_00724578(r0_6 + 0x6bd0u, r1);  // (from the original)
    frame.release();
    return call_002b89ec(r5_1, r0_4, r0_8, guest::cpu()->r[3]);
}

}  // namespace d_0026d644
GUEST_EXPORT(0x0026d644, d_0026d644::f_0026d644);

// f_0026e250: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0026e250 {

struct __attribute__((packed)) Object_0026e250_0 {
    u8 unknown_0[0x8431];  // (not used here)
    u8 byte_8431;
};
GUEST_OFFSET(Object_0026e250_0, byte_8431, 0x8431);


u32 f_0026e250(gptr<Object_0026e250_0> arg0, u32 r1) {
    if (arg0->byte_8431 != 0) {
        u32 r0_1 = arg0.addr() + (r1 * 0xe5u << 2) + 0x4410u;  // (from the original)
        u32 r1_1 = *gptr<u32>(*gptr<u32>(r0_1) + 0x60u);  // (from the original)
        // virtual function 24 of r0_1
        return guest::call_address<u32>(r1_1, r0_1, r1_1, 0xe5u, guest::cpu()->r[3]);  // (from the original)
    }
    u32 r1_2 = arg0.addr() + (r1 * 0xdbu << 2);  // (from the original)
    u32 r1_3 = *gptr<u32>(*gptr<u32>(r1_2 + 0x890u) + 0x60u);  // (from the original)
    // virtual function 24 of r1_2 + 0x890u
    return guest::call_address<u32>(r1_3, r1_2 + 0x890u, r1_3, 0xdbu, guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0026e250
GUEST_EXPORT(0x0026e250, d_0026e250::f_0026e250);

// f_0026e2d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0026e2d8 {

inline constexpr guest::Function<0x002f74c8, u32(u32)> call_002f74c8;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> call_002f74e0;
inline constexpr guest::Function<0x0030b654, u32(u32)> call_0030b654;
inline constexpr guest::Function<0x0076a280, u32(u32)> call_0076a280;

u32 f_0026e2d8(u32 r0, u32 r1) {
    u32 r4_1 = 0u;
    u32 r0_1 = call_002f74c8(r0);
    u32 r0_2 = call_002f74e0(8u, r0_1);
    if (r0_2 != 0) {
        u32 r0_3 = call_0030b654(r1);
        if (r0_3 != 0) {
            u32 r0_4 = call_0076a280(r1);
            r4_1 = r0_4;
        }
    }
    return r4_1;
}

}  // namespace d_0026e2d8
GUEST_EXPORT_FRAMED(0x0026e2d8, d_0026e2d8::f_0026e2d8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0026e410: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0026e410 {

struct __attribute__((packed)) Local_0026e410_r0_1 {
    u8 unknown_0[0x29];  // (not used here)
    u8 byte_29;
    u8 unknown_2a[0x53];  // (not used here)
    u8 byte_7d;
    u8 unknown_7e[0x12f];  // (not used here)
    u8 byte_1ad;
    u8 unknown_1ae[0xdb];  // (not used here)
    u8 byte_289;
    u8 unknown_28a[0x53];  // (not used here)
    u8 byte_2dd;
    u8 unknown_2de[0xdb];  // (not used here)
    u8 byte_3b9;
};
GUEST_OFFSET(Local_0026e410_r0_1, byte_29, 0x29);
GUEST_OFFSET(Local_0026e410_r0_1, byte_7d, 0x7d);
GUEST_OFFSET(Local_0026e410_r0_1, byte_1ad, 0x1ad);
GUEST_OFFSET(Local_0026e410_r0_1, byte_289, 0x289);
GUEST_OFFSET(Local_0026e410_r0_1, byte_2dd, 0x2dd);
GUEST_OFFSET(Local_0026e410_r0_1, byte_3b9, 0x3b9);

struct __attribute__((packed)) Local_0026e410_r0_2 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_0026e410_r0_2, byte_b7, 0xb7);

inline guest::global<u32, 0x008791b4> global_008791b4;
inline guest::global<u32, 0x008791b8> global_008791b8;
inline constexpr guest::Function<0x00817bd0, u32(u32, u32, u32)> call_00817bd0;

void f_0026e410(u32 r0) {
    call_00817bd0(r0, *global_008791b4, *global_008791b8);
    gptr<Local_0026e410_r0_1> r0_1 = gptr<Local_0026e410_r0_1>(r0 + 0x4000u);  // (from the original)
    r0_1->byte_7d = 0;
    r0_1->byte_29 = 0;
    r0_1->byte_1ad = 0;
    r0_1->byte_3b9 = 0;
    r0_1->byte_2dd = 0;
    r0_1->byte_289 = 0;
    *gptr<u8>(r0 + 0x8434u) = 1;  // (from the original)
    gptr<Local_0026e410_r0_2> r0_2 = gptr<Local_0026e410_r0_2>(*gptr<u32>(r0 + 0x840cu));  // (from the original)
    u32 r1_2 = u32(r0_2->byte_b7) & 0xfeu;  // (from the original)
    r0_2->byte_b7 = u8(r1_2);
    guest::cpu()->r[1] = r1_2;
}

}  // namespace d_0026e410
GUEST_EXPORT_FRAMED(0x0026e410, d_0026e410::f_0026e410, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0026eadc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0026eadc {

struct __attribute__((packed)) Object_0026eadc_0 {
    u8 unknown_0[0x83a8];  // (not used here)
    u32 word_83a8;
    u32 word_83ac;
};
GUEST_OFFSET(Object_0026eadc_0, word_83a8, 0x83a8);
GUEST_OFFSET(Object_0026eadc_0, word_83ac, 0x83ac);

struct __attribute__((packed)) Local_0026eadc_r4_1 {
    u8 unknown_0[0xbc];  // (not used here)
    u32 word_bc;
    u8 unknown_c0[0x14];  // (not used here)
    u32 word_d4;
    u8 unknown_d8[0x2c];  // (not used here)
    u32 word_104;
};
GUEST_OFFSET(Local_0026eadc_r4_1, word_bc, 0xbc);
GUEST_OFFSET(Local_0026eadc_r4_1, word_d4, 0xd4);
GUEST_OFFSET(Local_0026eadc_r4_1, word_104, 0x104);

inline constexpr guest::Function<0x0029aeac, u32(u32, u32, u32)> call_0029aeac;
inline constexpr guest::Function<0x0029b5fc, u32(u32)> call_0029b5fc;
inline constexpr guest::Function<0x007237e0, u32(u32, u32, u32, u32)> call_007237e0;

u32 f_0026eadc(gptr<Object_0026eadc_0> arg0, u32 r1_unused, u32 r2) {
    u32 r0_2 = 0;
    gptr<Local_0026eadc_r4_1> r4_1 = gptr<Local_0026eadc_r4_1>(arg0.addr() + 0x82f0u);  // (from the original)
    u32 r1_1 = arg0->word_83a8;
    if (r1_1 == 0x2f5bb0u) {  // (from the original)
        if (0x2f5bb0u == 0) {  // (from the original)
            if ((arg0->word_83ac & 1u) == 0) {
                r0_2 = r4_1->word_d4 & ~8u;
                r4_1->word_d4 = r0_2;
                guest::cpu()->r[1] = r1_1;
                return r0_2;
            }
        }
        if (r4_1->word_bc == 0) {
            r0_2 = r4_1->word_d4 & ~8u;
            r4_1->word_d4 = r0_2;
            guest::cpu()->r[1] = r1_1;
            return r0_2;
        }
    }
    u32 r0_1 = call_007237e0(r4_1.addr(), r1_1, r2, guest::cpu()->r[3]);
    if (r0_1 != 0 && r4_1->word_104 != 0) {
        call_0029aeac(r4_1.addr(), 1u, 0x1000402u);  // (from the original)
        r1_1 = guest::cpu()->r[1];
    } else {
        call_0029b5fc(r4_1.addr());
        r1_1 = guest::cpu()->r[1];
    }
    r0_2 = r4_1->word_d4 & ~8u;
    r4_1->word_d4 = r0_2;
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_0026eadc
GUEST_EXPORT_FRAMED(0x0026eadc, d_0026eadc::f_0026eadc, 0x4010);  // pushes {r4, lr} first, as the original

// f_0026eb6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0026eb6c {

struct __attribute__((packed)) Object_0026eb6c_0 {
    u8 unknown_0[0x8431];  // (not used here)
    u8 byte_8431;
};
GUEST_OFFSET(Object_0026eb6c_0, byte_8431, 0x8431);

inline constexpr guest::Function<0x002b8fb0, u32(u32, u32, u32, u32)> call_002b8fb0;
inline constexpr guest::Function<0x0071d090, u32(u32, u32, u32, u32)> call_0071d090;

u32 f_0026eb6c(gptr<Object_0026eb6c_0> arg0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r1_1 = r1 * 0xdbu;  // (from the original)
    u32 r2_2 = arg0.addr() + ((r1 * 0xe5u) << 2);  // (from the original)
    u32 r5_1 = arg0.addr() + (r1_1 << 2);
    u32 r4_1 = r2_2 + 0x4410u;  // (from the original)
    u32 r0_2 = call_0071d090(arg0->byte_8431 == 0 ? r5_1 + 0x890u : r4_1, r1_1, r2_2, 0xdbu);  // (from the original)
    if (r0_2 != 0) {
        u32 r0_3 = *gptr<u8>((arg0.addr() + 0x8400u) + 0x31u) == 0 ? r5_1 + 0x890u : r4_1;  // (from the original)
        frame.release();
        return call_002b8fb0(r0_3, r2, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    return r0_2;
}

}  // namespace d_0026eb6c
GUEST_EXPORT(0x0026eb6c, d_0026eb6c::f_0026eb6c);

// f_0026f6fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0026f6fc {

struct __attribute__((packed)) Object_0026f6fc_0 {
    u8 unknown_0[0x190];  // (not used here)
    u32 word_190;
    u8 unknown_194[0x8278];  // (not used here)
    u32 word_840c;
};
GUEST_OFFSET(Object_0026f6fc_0, word_190, 0x190);
GUEST_OFFSET(Object_0026f6fc_0, word_840c, 0x840c);

inline constexpr guest::Function<0x00132364, u32(u32, u32, u32, u32)> call_00132364;
inline constexpr guest::Function<0x001323b4, u32(u32)> call_001323b4;
inline constexpr guest::Function<0x002f6c78, u32(u32)> call_002f6c78;
inline constexpr guest::Function<0x004b6dc8, u32(u32, u32, u32, u32)> call_004b6dc8;

u32 f_0026f6fc(gptr<Object_0026f6fc_0> arg0, u32 r1) {
    u32 r0_1 = arg0->word_840c;
    if (r0_1 != 0) {
        call_004b6dc8(r0_1, arg0->word_190, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    call_00132364(arg0.addr() + 0x2bcu, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_00132364(arg0.addr() + 0x504u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_001323b4(arg0.addr() + 0x24u);  // (from the original)
    call_001323b4(arg0.addr() + 0x170u);  // (from the original)
    call_002f6c78(arg0.addr() + 0x82f0u);  // (from the original)
    return 1u;
}

}  // namespace d_0026f6fc
GUEST_EXPORT_FRAMED(0x0026f6fc, d_0026f6fc::f_0026f6fc, 0x4010);  // pushes {r4, lr} first, as the original

// f_0026f8a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0026f8a8 {

inline constexpr guest::Function<0x002fcaf4, u32(u32, u32)> call_002fcaf4;
inline constexpr guest::Function<0x005b48b4, u32(u32)> call_005b48b4;
inline constexpr guest::Function<0x0076c590, u32(u32)> call_0076c590;

u32 f_0026f8a8(u32 r0_unused, u32 r1) {
    u32 r0_1 = call_002fcaf4(r1, r1);
    if (r0_1 != 0) {
        return 0u;
    }
    u32 r0_2 = call_005b48b4(r0_1);
    if (r0_2 == 0) {
        return r0_2;
    }
    u32 r0_3 = call_0076c590(r1);
    if (r0_3 != 0) {
        r0_3 = 1u;
    }
    return r0_3;
}

}  // namespace d_0026f8a8
GUEST_EXPORT_FRAMED(0x0026f8a8, d_0026f8a8::f_0026f8a8, 0x4010);  // pushes {r4, lr} first, as the original

// f_0026f9c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0026f9c4 {

inline constexpr guest::Function<0x00567e24, u32(u32, u32, u32, u32)> call_00567e24;

u32 f_0026f9c4(u32 r0, u32 r1) {
    u32 r5_1 = 0;
    u32 zf_1 = r1 == 0;
    if (!zf_1) {
        zf_1 = r1 == 1u;
    }
    if (zf_1 || r1 == 6u || r1 == 7u || r1 == 9u) {
        u32 r0_2 = call_00567e24(r0 + 0x2bcu, 0x26fa6cu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r5_1 = r0_2;
    } else {
        u32 r0_4 = call_00567e24(r0 + 0x2bcu, 0x26fa28u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r5_1 = r0_4;
    }
    u32 r0_6 = call_00567e24(r0 + 0x504u, 0x26fa4cu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    return r0_6 & r5_1;
}

}  // namespace d_0026f9c4
GUEST_EXPORT_FRAMED(0x0026f9c4, d_0026f9c4::f_0026f9c4, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0026fa8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0026fa8c {

inline constexpr guest::Function<0x002bf9cc, u32(u32, u32, u32, u32)> call_002bf9cc;
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;

struct __attribute__((packed)) Frame_0026fa8c {
    u32 word_0;
};
GUEST_OFFSET(Frame_0026fa8c, word_0, 0x0);
GUEST_SIZE(Frame_0026fa8c, 0x4);

void f_0026fa8c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0026fa8c> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r0_1 = call_002fb94c(r0, r1, r2, r3);
    frame->word_0 = 1;
    call_002bf9cc(r0_1 + 0x6bd0u, r1, r2, r3);  // (from the original)
}

}  // namespace d_0026fa8c
GUEST_EXPORT_FRAMED(0x0026fa8c, d_0026fa8c::f_0026fa8c, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0026fc4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0026fc4c {

inline constexpr u32 vtable_ItemDragWindow = 0x008ef3acu;
inline guest::global<u32, 0x008791dc> global_008791dc;
inline guest::global<u32, 0x008791e0> global_008791e0;
inline constexpr guest::Function<0x001207d8, u32(u32)> call_001207d8;
inline constexpr guest::Function<0x00125aec, u32(u32)> call_00125aec;
inline constexpr guest::Function<0x00125e3c, u32(u32, u32, u32, u32)> call_00125e3c;
inline constexpr guest::Function<0x0022c53c, u32(u32)> call_0022c53c;
inline constexpr guest::Function<0x0029b7c0, u32(u32)> call_0029b7c0;
inline constexpr guest::Function<0x002cdcb0, u32(u32)> call_002cdcb0;
inline constexpr guest::Function<0x002d00bc, u32(u32)> call_002d00bc;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32)> call_003083bc;
inline constexpr guest::Function<0x0032fd1c, u32(u32)> call_0032fd1c;

u32 f_0026fc4c(gptr<ItemDragWindow> arg0) {
    arg0->word_4 = 0;
    arg0->byte_8 = 0;
    u32 r2_1 = *global_008791e0;
    arg0->word_c = *global_008791dc;
    arg0->word_10 = r2_1;
    arg0->word_14 = 0;
    arg0->byte_18 = 0;
    arg0->word_1c = 0;
    arg0->word_0 = vtable_ItemDragWindow;
    arg0->word_20 = 0;
    u32 r0_2 = call_00125e3c(arg0.addr() + 0x24u, 0x8ef3acu, r2_1, arg0.addr() + 0xcu);  // (from the original)
    u32 r0_4 = call_00125e3c(r0_2 + 0x14cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_6 = call_001207d8(r0_4 + 0x14cu);  // (from the original)
    u32 r0_8 = call_001207d8(r0_6 + 0x248u);  // (from the original)
    u32 r0_10 = call_00125aec(r0_8 + 0x248u);  // (from the original)
    u32 r0_12 = call_00125aec(r0_10 + 0x28u);  // (from the original)
    u32 r0_14 = call_00125aec(r0_12 + 0x28u);  // (from the original)
    u32 ea_1 = r0_14 + 0x28u;  // (from the original)
    *gptr<u32>(ea_1) = 0;
    u32 r0_16 = call_00125aec(ea_1 + 4u);
    u32 r0_18 = call_00125aec(r0_16 + 0x28u);  // (from the original)
    u32 r0_20 = call_00125aec(r0_18 + 0x28u);  // (from the original)
    u32 r0_22 = call_00125aec(r0_20 + 0x28u);  // (from the original)
    u32 r0_24 = call_00125aec(r0_22 + 0x28u);  // (from the original)
    u32 r0_26 = call_00301d0c(r0_24 + 0x28u, 0x2b9440u, 0x36cu, 0x10u);  // (from the original)
    u32 r0_28 = call_00301d0c(r0_26 + 0x36c0u, 0x2d00bcu, 0x130u, 3u);  // (from the original)
    u32 r0_30 = call_002d00bc(r0_28 + 0x390u);  // (from the original)
    u32 r0_32 = call_00301d0c(r0_30 + 0x130u, 0x3283e4u, 0x394u, 0x10u);  // (from the original)
    u32 r0_34 = call_002cdcb0(r0_32 + 0x3940u);  // (from the original)
    u32 r0_36 = call_0032fd1c(r0_34 + 0x1e0u);  // (from the original)
    u32 r0_38 = call_0022c53c(r0_36 + 0x140u);  // (from the original)
    u32 r0_40 = call_0022c53c(r0_38 + 0x140u);  // (from the original)
    u32 r0_42 = call_0029b7c0(r0_40 + 0x140u);  // (from the original)
    u32 r0_43 = r0_42 - 0x82f0u;  // (from the original)
    u32 r7_1 = 0x8408u | u32(s32(0x8408u) >> 0xd);  // (from the original)
    u32 r6_1 = r7_1 + 4u;
    *gptr<u32>(r0_43 + 0x8408u) = 0;  // (from the original)
    u32 r1_13 = r6_1 | u32(s32(r6_1) >> 0xd);  // (from the original)
    *gptr<u32>(r7_1 + r0_43) = 0;
    *gptr<u32>(r6_1 + r0_43) = 0;
    *gptr<u32>(r1_13 + r0_43) = 0;
    *gptr<u8>(r1_13 + 4u + r0_43) = 0xa;  // (from the original)
    *gptr<u8>(r1_13 + 5u + r0_43) = 0;
    *gptr<u32>((r1_13 | u32(s32(r1_13) >> 0xc)) + r0_43) = 0;  // (from the original)
    *gptr<u32>(r0_43 + 0x8420u) = ~0u;  // (from the original)
    u32 r1_14 = r1_13 + 0x1cu;  // (from the original)
    *gptr<u32>(r0_43 + 0x8424u) = 0;  // (from the original)
    *gptr<u32>((r1_13 + 0x14u) + r0_43) = 0;  // (from the original)
    *gptr<u32>((r1_13 + 0x18u) + r0_43) = 0;  // (from the original)
    *gptr<u8>(r1_14 + r0_43) = 0;
    *gptr<u8>((r1_14 | u32(s32(r1_14) >> 5)) + r0_43) = 0;
    *gptr<u8>((r1_14 | u32(s32(r1_14) >> 0xe)) + r0_43) = 0;  // (from the original)
    *gptr<u8>(r1_14 + 3u + r0_43) = 1;
    *gptr<u8>((r1_14 | u32(s32(r1_14) >> 0xd)) + r0_43) = 0;  // (from the original)
    u32 r0_45 = call_003083bc(r0_43 + 0x845cu, r0_43 + 0x8436u, 0x13u);  // (from the original)
    return r0_45 - 0x845cu;  // (from the original)
}

}  // namespace d_0026fc4c
GUEST_EXPORT_FRAMED(0x0026fc4c, d_0026fc4c::f_0026fc4c, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0026fe3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0026fe3c {

inline constexpr u32 vtable_ItemDragWindow = 0x008ef3acu;
inline constexpr u32 vtable_DragIconControl_rec = 0x008f08acu;
inline constexpr u32 vtable_ItemDragIconGroup = 0x008f2a0cu;
inline constexpr u32 vtable_ItemDragIconGroup_at_c = 0x008f2a1cu;
inline constexpr guest::Function<0x001ff9d8, u32(u32)> call_001ff9d8;
inline constexpr guest::Function<0x0022c5d8, u32(u32)> call_0022c5d8;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;
inline constexpr guest::Function<0x002f7710, u32(u32, u32, u32, u32)> call_002f7710;
inline constexpr guest::Function<0x00567ef0, u32(u32)> call_00567ef0;
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32)> call_0056988c;
inline constexpr guest::Function<0x005bf744, u32(u32)> call_005bf744;

u32 f_0026fe3c(gptr<ItemDragWindow> arg0, u32 r1_unused, u32 r2, u32 r3) {
    arg0->word_0 = vtable_ItemDragWindow;
    arg0->word_82f0 = vtable_DragIconControl_rec;
    u32 r0_1 = call_002f7710(arg0.addr() + 0x82f0u, 0x8f08acu, r2, r3);  // (from the original)
    u32 r0_3 = call_0022c5d8(r0_1 - 0x140u);  // (from the original)
    u32 r0_5 = call_0022c5d8(r0_3 - 0x140u);  // (from the original)
    u32 r0_7 = call_0022c5d8(r0_5 - 0x140u);  // (from the original)
    *gptr<u32>(r0_7 - 0x1d4u) = vtable_ItemDragIconGroup_at_c;  // (from the original)
    *gptr<u32>(r0_7 - 0x1e0u) = vtable_ItemDragIconGroup;  // (from the original)
    u32 r0_9 = call_0056988c(r0_7 - 0x28u, 0x8f2a0cu, 0x8f2a1cu);  // (from the original)
    u32 r0_11 = call_0056988c(r0_9 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2]);  // (from the original)
    u32 r0_13 = call_0056988c(r0_11 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2]);  // (from the original)
    u32 r0_15 = call_0056988c(r0_13 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2]);  // (from the original)
    u32 r0_17 = call_0022c5d8(r0_15 - 0x140u);  // (from the original)
    call_002f76ac(r0_17 - 0x3940u, 0x3284d8u, 0x394u, 0x10u);  // (from the original)
    u32 r0_20 = call_001ff9d8(r0_17 - 0x3a70u);  // (from the original)
    u32 r4_1 = r0_20 - 0x42e0u;  // (from the original)
    call_002f76ac(r0_20 - 0x390u, 0x1ff9d4u, 0x130u, 3u);  // (from the original)
    call_002f76ac(r4_1 + 0x890u, 0x2b950cu, 0x36cu, 0x10u);  // (from the original)
    u32 r0_24 = call_0056988c(r4_1 + 0x868u, guest::cpu()->r[1], guest::cpu()->r[2]);  // (from the original)
    u32 r0_26 = call_0056988c(r0_24 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2]);  // (from the original)
    u32 r0_28 = call_0056988c(r0_26 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2]);  // (from the original)
    u32 r0_30 = call_0056988c(r0_28 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2]);  // (from the original)
    u32 r0_32 = call_0056988c(r0_30 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2]);  // (from the original)
    u32 r0_34 = call_0056988c(r0_32 - 0x2cu, guest::cpu()->r[1], guest::cpu()->r[2]);  // (from the original)
    u32 r0_36 = call_0056988c(r0_34 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2]);  // (from the original)
    u32 r0_38 = call_0056988c(r0_36 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2]);  // (from the original)
    u32 r0_40 = call_00567ef0(r0_38 - 0x248u);  // (from the original)
    u32 r0_42 = call_00567ef0(r0_40 - 0x248u);  // (from the original)
    u32 r0_44 = call_005bf744(r0_42 - 0x14cu);  // (from the original)
    u32 r0_46 = call_005bf744(r0_44 - 0x14cu);  // (from the original)
    return r0_46 - 0x24u;  // (from the original)
}

}  // namespace d_0026fe3c
GUEST_EXPORT_FRAMED(0x0026fe3c, d_0026fe3c::f_0026fe3c, 0x4010);  // pushes {r4, lr} first, as the original
