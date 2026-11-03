// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_005d03f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d03f0 {

inline constexpr u32 global_009535e4_address = 0x009535e4u;
inline constexpr guest::Function<0x0050d698, u32(u32)> script__WordFix_64u___WordFix_0050d698;
inline constexpr guest::Function<0x0050d8f0, u32(u32, u32, u32, u32)> call_0050d8f0;
inline constexpr guest::Function<0x0050dd68, u32(u32, u32, u32)> call_0050dd68;
inline constexpr guest::Function<0x0071a084, u32(u32, u32, u32, u32)> call_0071a084;
inline constexpr guest::Function<0x00728128, u32(u32, u32, u32)> call_00728128;

void f_005d03f0(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = call_0071a084(r0, r1, r2, guest::cpu()->r[3]);
    if (r0_1 != 0) {
        u32 r0_2 = script__WordFix_64u___WordFix_0050d698(0u);
        if (r0_2 == 0) {
            u32 r5 = global_009535e4_address;
            u32 r4 = *gptr<u32>(*gptr<u32>(r5) + 0x210u);  // (from the original)
            if (r4 != 0) {
                do {
                    r4 -= 1u;
                    r0_2 = call_00728128(*gptr<u32>(r5), 0u, r4);
                    if (r0_2 == 1u) {
                        r0_2 = *gptr<u32>(r5);
                        call_0050dd68(r0_2, 0u, r4);
                    }
                    guest::preempt();
                } while (r4 != 0);
            }
        }
        frame.release();
        call_0050d8f0(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        return;
    }
}

}  // namespace d_005d03f0
GUEST_EXPORT(0x005d03f0, d_005d03f0::f_005d03f0);

// f_005d0470: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d0470 {

inline constexpr u32 global_009535e4_address = 0x009535e4u;
inline guest::global<u8, 0x009514c7> global_009514c7;
inline constexpr guest::Function<0x0017c448, u32(u32)> script__WordPtrSv__WordPtrSv_0017c448;
inline constexpr guest::Function<0x0023bc64, u32(u32, u32)> call_0023bc64;
inline constexpr guest::Function<0x0023c65c, u32(u32, u32)> call_0023c65c;
inline constexpr guest::Function<0x003505bc, u32(u32, u32)> call_003505bc;
inline constexpr guest::Function<0x0050d698, u32(u32, u32)> script__WordFix_64u___WordFix_0050d698;
inline constexpr guest::Function<0x0050d8f0, u32(u32)> call_0050d8f0;
inline constexpr guest::Function<0x0050dd68, u32(u32, u32, u32)> call_0050dd68;
inline constexpr guest::Function<0x005373a4, u32(u32)> town_identity;
inline constexpr guest::Function<0x0071a084, u32(u32, u32, u32, u32)> call_0071a084;
inline constexpr guest::Function<0x00728128, u32(u32, u32, u32)> call_00728128;
inline constexpr guest::Function<0x007283f4, u32(u32, u32, u32)> call_007283f4;

u32 f_005d0470(u32 r0_unused, u32 r1, u32 r2) {
    u32 r0_11 = 0;
    u32 r0_1 = *global_009514c7;
    if (r0_1 == 0) {
        u32 r0_2 = call_0071a084(r0_1, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0_2 != 0) {
            u32 r0_3 = call_0023bc64(r0_2, r1);
            r1 = guest::cpu()->r[1];
            if (r0_3 != 0) {
                u32 r0_4 = call_003505bc(r0_3, r1);
                r1 = guest::cpu()->r[1];
                if (r0_4 != 0) {
                    u32 r0_5 = call_0023c65c(r0_4, r1);
                    r1 = guest::cpu()->r[1];
                    if (r0_5 != 0) {
                        u32 r0_6 = script__WordFix_64u___WordFix_0050d698(0u, r1);
                        if (r0_6 == 0) {
                            u32 r5 = global_009535e4_address;
                            u32 r0_7 = *gptr<u32>(r5);
                            u32 r4 = *gptr<u32>(r0_7 + 0x3c0u);  // (from the original)
                            if (r4 != 0) {
                                do {
                                    r4 -= 1u;
                                    u32 r0_9 = call_007283f4(*gptr<u32>(r5), 1u, r4);
                                    if (r0_9 != 0) {
                                        r0_7 = call_00728128(*gptr<u32>(r5), 1u, r4);
                                        if (r0_7 != 1u) {
                                            goto L_5d0530;
                                        }
                                    }
                                    r0_11 = *gptr<u32>(r5);
                                    r0_7 = call_0050dd68(r0_11, 1u, r4);
L_5d0530:;
                                    guest::preempt();
                                } while (r4 != 0);
                            }
                            u32 r0_12 = town_identity(r0_7);
                            script__WordPtrSv__WordPtrSv_0017c448(r0_12);
                            return 1u;
                        }
                        call_0050d8f0(r0_6);
                        r1 = guest::cpu()->r[1];
                    }
                }
            }
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_005d0470
GUEST_EXPORT_FRAMED(0x005d0470, d_005d0470::f_005d0470, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005d055c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d055c {

inline constexpr u32 global_009514c4_address = 0x009514c4u;
inline constexpr u32 global_009514c8_address = 0x009514c8u;
inline guest::global<u32, 0x009514c8> global_009514c8;
inline constexpr guest::Function<0x00113d15, u32(u32, u32)> Villager__Villager;
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32)> allocate_from_heap_002fd108;
inline constexpr guest::Function<0x0050d4dc, u32(u32)> read_u32_0x009535e8_;
inline constexpr guest::Function<0x0050d91c, u32(u32, u32, u32, u32)> sead__SafeStringBase_char___SafeStringBase_0050d91c;

u32 f_005d055c(u32 r0, u32 r1, u32 r2) {
    sead__SafeStringBase_char___SafeStringBase_0050d91c(r0, r1, r2, guest::cpu()->r[3]);
    u32 r0_1 = *global_009514c8;
    if (r0_1 != 0) {
        return r0_1;
    }
    u32 r0_2 = read_u32_0x009535e8_(r0_1);
    u32 block = allocate_from_heap_002fd108(0x2520u, r0_2, 4u);  // (from the original)
    *gptr<u32>(block) = 0;
    u32 ea_1 = block + 4u;
    *gptr<u32>(ea_1) = 0;
    u32 r0_5 = Villager__Villager(ea_1 + 4u, 0u);
    *global_009514c8 = r0_5 - 8u;
    return r0_5 - 8u;
}

}  // namespace d_005d055c
GUEST_EXPORT_FRAMED(0x005d055c, d_005d055c::f_005d055c, 0x4010);  // pushes {r4, lr} first, as the original

// f_005d05b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d05b0 {

inline guest::global<u8, 0x009514c4> global_009514c4;
inline constexpr guest::Function<0x0050d698, u32(u32, u32, u32, u32)> script__WordFix_64u___WordFix_0050d698;
inline constexpr guest::Function<0x0050d8f0, u32(u32, u32, u32, u32)> call_0050d8f0;

u32 f_005d05b0() {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = *global_009514c4;
    if (r0_1 == 1u) {
        return r0_1;
    }
    u32 r0_2 = script__WordFix_64u___WordFix_0050d698(0u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_3 = r0_2 == 0;
    *global_009514c4 = u8(r0_3);
    frame.release();
    return call_0050d8f0(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005d05b0
GUEST_EXPORT(0x005d05b0, d_005d05b0::f_005d05b0);

// f_005d05ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d05ec {

inline constexpr u32 global_009514c4_address = 0x009514c4u;
inline constexpr u32 global_009535e4_address = 0x009535e4u;
inline guest::global<u8, 0x009514c4> global_009514c4;
inline guest::global<u32, 0x009535e4> global_009535e4;
inline constexpr guest::Function<0x0050d698, u32(u32, u32, u32, u32)> script__WordFix_64u___WordFix_0050d698;
inline constexpr guest::Function<0x0050d8f0, u32(u32, u32, u32, u32)> call_0050d8f0;
inline constexpr guest::Function<0x0050ded0, u32(u32)> call_0050ded0;

void f_005d05ec(u32 r0_unused, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = script__WordFix_64u___WordFix_0050d698(0u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 != 0) {
        frame.release();
        call_0050d8f0(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        return;
    }
    u32 r0_2 = *global_009535e4;
    call_0050ded0(r0_2);
    *global_009514c4 = 0;
    frame.release();
    call_0050d8f0(r0_2, global_009514c4_address, guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
}

}  // namespace d_005d05ec
GUEST_EXPORT(0x005d05ec, d_005d05ec::f_005d05ec);

// f_005d0e38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d0e38 {


u32 f_005d0e38(u32 r0) {
    u32 r0_1 = *gptr<u8>(r0 + 0x8578dcu);  // (from the original)
    guest::cpu()->r[1] = 0x8578dcu;  // (from the original)
    return r0_1;
}

}  // namespace d_005d0e38
GUEST_EXPORT(0x005d0e38, d_005d0e38::f_005d0e38);

// f_005d1d08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d1d08 {

struct __attribute__((packed)) escape__BsEscapeEventBase {
    u32 word_0;
    u8 unknown_4[0xf];  // (not used here)
    u8 byte_13;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u8 unknown_24[0x4];  // (not used here)
    u8 byte_28;
    u8 byte_29;
    u8 byte_2a;
    u8 byte_2b;
    u8 byte_2c;
    u8 unknown_2d[0x3];  // (not used here)
    float float_30;
    float float_34;
    float float_38;
    float float_3c;
    u32 word_40;
    float float_44;
    u8 byte_48;
    u8 unknown_49[0x3];  // (not used here)
    u32 word_4c;
    u32 word_50;
    u32 word_54;
    float float_58;
    u32 word_5c;
    u32 word_60;
    u8 byte_64;
    u8 byte_65;
    u8 byte_66;
    u8 byte_67;
    u8 byte_68;
    u8 byte_69;
    u8 byte_6a;
    u8 byte_6b;
    u32 word_6c;
    u8 byte_70;
    u8 byte_71;
    u8 byte_72;
    u8 byte_73;
    u8 byte_74;
    u8 unknown_75[0x3];  // (not used here)
    u32 word_78;
    u32 word_7c;
    u32 word_80;
    u32 word_84;
    u32 word_88;
    u8 byte_8c;
    u8 unknown_8d[0x3];  // (not used here)
    u8 byte_90;
    u8 unknown_91[0x3];  // (not used here)
    u32 word_94;
    float float_98;
    u32 word_9c;
    u8 byte_a0;
    u8 byte_a1;
    u8 unknown_a2[0x2];  // (not used here)
    u32 word_a4;
};
GUEST_OFFSET(escape__BsEscapeEventBase, word_0, 0x0);
GUEST_OFFSET(escape__BsEscapeEventBase, byte_13, 0x13);
GUEST_OFFSET(escape__BsEscapeEventBase, word_14, 0x14);
GUEST_OFFSET(escape__BsEscapeEventBase, word_18, 0x18);
GUEST_OFFSET(escape__BsEscapeEventBase, word_1c, 0x1c);
GUEST_OFFSET(escape__BsEscapeEventBase, word_20, 0x20);
GUEST_OFFSET(escape__BsEscapeEventBase, byte_28, 0x28);
GUEST_OFFSET(escape__BsEscapeEventBase, byte_29, 0x29);
GUEST_OFFSET(escape__BsEscapeEventBase, byte_2a, 0x2a);
GUEST_OFFSET(escape__BsEscapeEventBase, byte_2b, 0x2b);
GUEST_OFFSET(escape__BsEscapeEventBase, byte_2c, 0x2c);
GUEST_OFFSET(escape__BsEscapeEventBase, float_30, 0x30);
GUEST_OFFSET(escape__BsEscapeEventBase, float_34, 0x34);
GUEST_OFFSET(escape__BsEscapeEventBase, float_38, 0x38);
GUEST_OFFSET(escape__BsEscapeEventBase, float_3c, 0x3c);
GUEST_OFFSET(escape__BsEscapeEventBase, word_40, 0x40);
GUEST_OFFSET(escape__BsEscapeEventBase, float_44, 0x44);
GUEST_OFFSET(escape__BsEscapeEventBase, byte_48, 0x48);
GUEST_OFFSET(escape__BsEscapeEventBase, word_4c, 0x4c);
GUEST_OFFSET(escape__BsEscapeEventBase, word_50, 0x50);
GUEST_OFFSET(escape__BsEscapeEventBase, word_54, 0x54);
GUEST_OFFSET(escape__BsEscapeEventBase, float_58, 0x58);
GUEST_OFFSET(escape__BsEscapeEventBase, word_5c, 0x5c);
GUEST_OFFSET(escape__BsEscapeEventBase, word_60, 0x60);
GUEST_OFFSET(escape__BsEscapeEventBase, byte_64, 0x64);
GUEST_OFFSET(escape__BsEscapeEventBase, byte_65, 0x65);
GUEST_OFFSET(escape__BsEscapeEventBase, byte_66, 0x66);
GUEST_OFFSET(escape__BsEscapeEventBase, byte_67, 0x67);
GUEST_OFFSET(escape__BsEscapeEventBase, byte_68, 0x68);
GUEST_OFFSET(escape__BsEscapeEventBase, byte_69, 0x69);
GUEST_OFFSET(escape__BsEscapeEventBase, byte_6a, 0x6a);
GUEST_OFFSET(escape__BsEscapeEventBase, byte_6b, 0x6b);
GUEST_OFFSET(escape__BsEscapeEventBase, word_6c, 0x6c);
GUEST_OFFSET(escape__BsEscapeEventBase, byte_70, 0x70);
GUEST_OFFSET(escape__BsEscapeEventBase, byte_71, 0x71);
GUEST_OFFSET(escape__BsEscapeEventBase, byte_72, 0x72);
GUEST_OFFSET(escape__BsEscapeEventBase, byte_73, 0x73);
GUEST_OFFSET(escape__BsEscapeEventBase, byte_74, 0x74);
GUEST_OFFSET(escape__BsEscapeEventBase, word_78, 0x78);
GUEST_OFFSET(escape__BsEscapeEventBase, word_7c, 0x7c);
GUEST_OFFSET(escape__BsEscapeEventBase, word_80, 0x80);
GUEST_OFFSET(escape__BsEscapeEventBase, word_84, 0x84);
GUEST_OFFSET(escape__BsEscapeEventBase, word_88, 0x88);
GUEST_OFFSET(escape__BsEscapeEventBase, byte_8c, 0x8c);
GUEST_OFFSET(escape__BsEscapeEventBase, byte_90, 0x90);
GUEST_OFFSET(escape__BsEscapeEventBase, word_94, 0x94);
GUEST_OFFSET(escape__BsEscapeEventBase, float_98, 0x98);
GUEST_OFFSET(escape__BsEscapeEventBase, word_9c, 0x9c);
GUEST_OFFSET(escape__BsEscapeEventBase, byte_a0, 0xa0);
GUEST_OFFSET(escape__BsEscapeEventBase, byte_a1, 0xa1);
GUEST_OFFSET(escape__BsEscapeEventBase, word_a4, 0xa4);

inline guest::global<u32, 0x005d1df8> global_005d1df8;
inline constexpr guest::Function<0x00521a8c, u32(u32)> construct_process;

u32 escape__BsEscapeEventBase__BsEscapeEventBase(gptr<escape__BsEscapeEventBase> bs_escape_event_base) {
    construct_process(bs_escape_event_base.addr());
    u32 r3_1 = *global_005d1df8;
    bs_escape_event_base->byte_13 = 0;
    bs_escape_event_base->word_14 = 0;
    bs_escape_event_base->word_0 = r3_1;
    bs_escape_event_base->word_18 = 0;
    bs_escape_event_base->word_1c = bs_escape_event_base.addr();
    bs_escape_event_base->word_20 = 0;
    u32 r3_2 = ~0u;
    bs_escape_event_base->byte_28 = 0;
    float S0_1 = 0.0f;
    bs_escape_event_base->byte_29 = 0;
    bs_escape_event_base->byte_2a = 0;
    bs_escape_event_base->byte_2b = 0;
    bs_escape_event_base->byte_2c = 0;
    bs_escape_event_base->float_30 = S0_1;
    bs_escape_event_base->float_34 = S0_1;
    bs_escape_event_base->float_38 = S0_1;
    bs_escape_event_base->float_3c = S0_1;
    bs_escape_event_base->word_40 = 0;
    bs_escape_event_base->float_44 = S0_1;
    bs_escape_event_base->byte_48 = 0;
    bs_escape_event_base->word_4c = 0;
    bs_escape_event_base->word_50 = 0;
    bs_escape_event_base->word_54 = 0;
    bs_escape_event_base->float_58 = S0_1;
    bs_escape_event_base->word_5c = 0;
    bs_escape_event_base->word_60 = 0;
    bs_escape_event_base->byte_64 = 0;
    bs_escape_event_base->byte_65 = 0;
    bs_escape_event_base->byte_66 = 0;
    bs_escape_event_base->byte_67 = 0;
    bs_escape_event_base->byte_68 = 0;
    bs_escape_event_base->byte_69 = 0;
    bs_escape_event_base->byte_6a = 0;
    bs_escape_event_base->byte_6b = 0;
    bs_escape_event_base->word_6c = r3_2;
    bs_escape_event_base->byte_70 = 0;
    bs_escape_event_base->byte_71 = 0;
    bs_escape_event_base->byte_72 = 0;
    bs_escape_event_base->byte_73 = 0;
    bs_escape_event_base->byte_74 = 0;
    bs_escape_event_base->word_78 = 0;
    bs_escape_event_base->word_7c = 0;
    bs_escape_event_base->word_80 = 0;
    bs_escape_event_base->word_84 = 0;
    bs_escape_event_base->word_88 = 0;
    bs_escape_event_base->byte_8c = 0;
    bs_escape_event_base->byte_90 = 0;
    bs_escape_event_base->word_94 = 0;
    bs_escape_event_base->float_98 = S0_1;
    bs_escape_event_base->word_9c = 0;
    bs_escape_event_base->byte_a0 = 0;
    bs_escape_event_base->byte_a1 = u8(r3_2);
    bs_escape_event_base->word_a4 = 0;
    guest::cpu()->s[0] = S0_1;
    return bs_escape_event_base.addr();
}

}  // namespace d_005d1d08
GUEST_EXPORT_FRAMED(0x005d1d08, d_005d1d08::escape__BsEscapeEventBase__BsEscapeEventBase, 0x4010);  // pushes {r4, lr} first, as the original

// f_005d1ee0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d1ee0 {

inline constexpr u32 global_00952bf0_address = 0x00952bf0u;
inline constexpr guest::Function<0x00105f55, u32(u32, u32, u32)> call_00105f54;
inline constexpr guest::Function<0x0013bb30, u32(u32, u32, u32, u32)> Random__next_float;
inline constexpr guest::Function<0x002eba64, u32(u32, u32, u32, u32)> call_002eba64;
inline constexpr guest::Function<0x006a6eb0, u32(u32)> read_u32_0x009526f8_;

struct __attribute__((packed)) Frame_005d1ee0 {
    u32 word_0;
};
GUEST_OFFSET(Frame_005d1ee0, word_0, 0x0);
GUEST_SIZE(Frame_005d1ee0, 0x4);

void f_005d1ee0(u32 r0, u32 r1_unused, u32 r2, u32 r3, float S0, float S1) {
    guest::StackFrameOf<Frame_005d1ee0> frame;  // the original's stack frame
    frame->word_0 = r3;
    frame->word_0 = r0;
    Random__next_float(frame.at(0).addr(), r0, r2, r3);
    float S0_1 = guest::cpu()->s[0];
    float S1_1 = 4.0f;
    float S0_2 = std::bit_cast<float>(vcvt_sz_f(S0_1 * S1_1));
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_1;
    Random__next_float(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    float S0_3 = guest::cpu()->s[0];
    u32 r0_3 = std::bit_cast<u32>(S0_3);
    u32 r8 = s32(r0_3) < 0x3f000000;  // (from the original)
    guest::cpu()->s[0] = S0_3;
    u32 r0_4 = read_u32_0x009526f8_(r0_3);
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    u32 r7 = r0_4;
    if (r0_4 != 0) {
        u32 r6 = 0u;
        u32 r5 = (std::bit_cast<u32>(S0_2) << 1) + global_00952bf0_address;
        do {
            u32 r4 = 0u;
            do {
                guest::cpu()->s[0] = S0;
                guest::cpu()->s[1] = S1;
                u32 r0_5 = call_002eba64(r7, r4, r6, r3);
                u32 r1_4 = *gptr<u16>(r5);
                call_00105f54(r0_5, r1_4, r8);
                r3 = guest::cpu()->r[3];
                S0 = guest::cpu()->s[0];
                S1 = guest::cpu()->s[1];
                r4 += 1u;
                guest::preempt();
            } while (s32(r4) < 2);
            r6 += 1u;
            guest::preempt();
        } while (s32(r6) < 2);
    }
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
}

}  // namespace d_005d1ee0
GUEST_EXPORT_FRAMED(0x005d1ee0, d_005d1ee0::f_005d1ee0, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_005d1f84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d1f84 {


void f_005d1f84(u32 r0) {
    float S0_1 = float(r0) * 0.05f;
    guest::cpu()->s[0] = S0_1;
}

}  // namespace d_005d1f84
GUEST_EXPORT(0x005d1f84, d_005d1f84::f_005d1f84);

// f_005d1f9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d1f9c {


void f_005d1f9c(u32 r0) {
    float S0_1 = float(r0) * 0.12699999f;
    guest::cpu()->s[0] = S0_1;
}

}  // namespace d_005d1f9c
GUEST_EXPORT(0x005d1f9c, d_005d1f9c::f_005d1f9c);

// f_005d205c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d205c {


void f_005d205c(u32 r0) {
    float S0_1 = float(r0) * 0.127f;
    guest::cpu()->s[0] = S0_1;
}

}  // namespace d_005d205c
GUEST_EXPORT(0x005d205c, d_005d205c::f_005d205c);

// f_005d2218: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d2218 {

struct __attribute__((packed)) Object_005d2218_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_005d2218_0, word_0, 0x0);
GUEST_OFFSET(Object_005d2218_0, word_4, 0x4);
GUEST_OFFSET(Object_005d2218_0, word_8, 0x8);


void f_005d2218(gptr<Object_005d2218_0> arg0, u32 r1) {
    arg0->word_0 = r1;
    arg0->word_4 = 0;
    arg0->word_8 = 0;
}

}  // namespace d_005d2218
GUEST_EXPORT(0x005d2218, d_005d2218::f_005d2218);

// f_005d23e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d23e4 {

struct __attribute__((packed)) Object_005d23e4_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_005d23e4_0, word_0, 0x0);
GUEST_OFFSET(Object_005d23e4_0, word_4, 0x4);
GUEST_OFFSET(Object_005d23e4_0, word_8, 0x8);


void f_005d23e4(gptr<Object_005d23e4_0> arg0, u32 r1) {
    arg0->word_0 = r1;
    arg0->word_4 = 0;
    arg0->word_8 = 0;
}

}  // namespace d_005d23e4
GUEST_EXPORT(0x005d23e4, d_005d23e4::f_005d23e4);

// f_005d458c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d458c {


void map_value_in_range(float S0, float S1, float S2) {
    float S3_1 = 1.0f;
    if (S1 == S2) {
        guest::cpu()->s[0] = S3_1;
        guest::cpu()->s[1] = S1;
        return;
    }
    float S4_1 = 0.0f;
    if (S2 > S1) {
        if (S0 <= S1) {
            guest::cpu()->s[0] = S4_1;
            guest::cpu()->s[1] = S1;
            return;
        }
        if (S0 >= S2) {
            guest::cpu()->s[0] = S3_1;
            guest::cpu()->s[1] = S1;
            return;
        }
        float S3_2 = S0 - S1;
        float S1_1 = S2 - S1;
        float S0_1 = S3_2 / S1_1;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return;
    }
    if (S0 >= S1) {
        guest::cpu()->s[0] = S4_1;
        guest::cpu()->s[1] = S1;
        return;
    }
    if (!(S0 <= S2)) {
        float S3_3 = S0 - S1;
        float S1_2 = S2 - S1;
        float S0_2 = S3_3 / S1_2;
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_2;
        return;
    }
    guest::cpu()->s[0] = S3_1;
    guest::cpu()->s[1] = S1;
}

}  // namespace d_005d458c
GUEST_EXPORT(0x005d458c, d_005d458c::map_value_in_range);

// f_005d4608: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d4608 {


void f_005d4608(u32 r0, float S0, float S1, float S2) {
    u32 res_1 = 0;
    float S5 = 0.0f;
    float S3 = S5;
    float S4 = S3;
    if (r0 == 0) {
        float S3_1 = S1 - S3;
        float S1_1 = float(r0);
        float S0_1 = (S3_1 - S0) / S1_1;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return;
    }
    if ((r0 & 1u) != 0) {
        S4 = S4 + S2;
        S3 = S3 + S4;
    }
    u32 r1 = r0 >> 1;
    if (r1 != 0) {
        do {
            float S4_1 = S4 + S2;
            res_1 = r1 - 1u;
            r1 = res_1;
            S3 = S3 + S4_1;
            S4 = S4_1 + S2;
            S5 = S5 + S4;
            guest::preempt();
        } while (res_1 != 0);
    }
    float S3_2 = S3 + S5;
    float S3_3 = S1 - S3_2;
    float S1_2 = float(r0);
    float S0_2 = (S3_3 - S0) / S1_2;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
}

}  // namespace d_005d4608
GUEST_EXPORT(0x005d4608, d_005d4608::f_005d4608);

// f_005d4a68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d4a68 {

struct __attribute__((packed)) Object_005d4a68_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_005d4a68_0, word_0, 0x0);


void f_005d4a68(gptr<Object_005d4a68_0> arg0) {
    u32 r2_1 = *gptr<u32>(arg0->word_0 + 0x2cu);  // (from the original)
    // virtual function 11 of arg0.addr()
    guest::call_address<u32>(r2_1, arg0.addr(), 1u, r2_1, guest::cpu()->r[3]);
}

}  // namespace d_005d4a68
GUEST_EXPORT(0x005d4a68, d_005d4a68::f_005d4a68);

// f_005d4a78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d4a78 {

struct __attribute__((packed)) Object_005d4a78_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_005d4a78_0, word_0, 0x0);


u32 f_005d4a78(gptr<Object_005d4a78_0> arg0) {
    // virtual function 2 of arg0.addr()
    return guest::call_address<u32>(*gptr<u32>(arg0->word_0 + 8u), arg0.addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005d4a78
GUEST_EXPORT(0x005d4a78, d_005d4a78::f_005d4a78);

// f_005d4edc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d4edc {

struct __attribute__((packed)) script__WordFix_65u_ {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u8 byte_14;
    u8 unknown_15[0x3];  // (not used here)
    u32 word_18;
    u32 word_1c;
    u16 half_20;
};
GUEST_OFFSET(script__WordFix_65u_, word_0, 0x0);
GUEST_OFFSET(script__WordFix_65u_, word_4, 0x4);
GUEST_OFFSET(script__WordFix_65u_, word_8, 0x8);
GUEST_OFFSET(script__WordFix_65u_, word_c, 0xc);
GUEST_OFFSET(script__WordFix_65u_, word_10, 0x10);
GUEST_OFFSET(script__WordFix_65u_, byte_14, 0x14);
GUEST_OFFSET(script__WordFix_65u_, word_18, 0x18);
GUEST_OFFSET(script__WordFix_65u_, word_1c, 0x1c);
GUEST_OFFSET(script__WordFix_65u_, half_20, 0x20);

inline constexpr u32 vtable_script__WordFix_65u_ = 0x0090a260u;
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> clear_aligned;

u32 script__WordFix_65u___WordFix_005d4edc(gptr<script__WordFix_65u_> word_fix_65u) {
    u32 r0 = word_fix_65u.addr();
    u32 res_1 = 0;
    u32 r1_1 = ~0u;
    u32 r4 = r0 + 8u;
    word_fix_65u->word_0 = r1_1;
    word_fix_65u->word_4 = 0x2f;  // (from the original)
    word_fix_65u->word_c = r0 + 0x20u;  // (from the original)
    word_fix_65u->word_10 = 0x41;  // (from the original)
    word_fix_65u->word_8 = vtable_script__WordFix_65u_;
    word_fix_65u->byte_14 = 4;
    word_fix_65u->word_18 = r1_1;
    word_fix_65u->word_1c = r1_1;
    clear_aligned(r4 + 0x18u, 0x82u, 4u, r4 + 4u);  // (from the original)
    u32 r2 = 0u;
    r0 = r4 + 0x18u;  // (from the original)
    u32 r1 = 0x20u;  // (from the original)
    word_fix_65u->half_20 = u16(r2);
    do {
        *gptr<u16>(r0 + 2u) = u16(r2);
        res_1 = r1 - 1u;
        r1 = res_1;
        u32 ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r2);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    *gptr<u8>(r4 + 0x9cu) = u8(r2);  // (from the original)
    *gptr<u32>(r4 + 0xa0u) = r2;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r4 - 8u;
}

}  // namespace d_005d4edc
GUEST_EXPORT_FRAMED(0x005d4edc, d_005d4edc::script__WordFix_65u___WordFix_005d4edc, 0x4010);  // pushes {r4, lr} first, as the original

// f_005d5374: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d5374 {

struct __attribute__((packed)) Local_005d5374_ea_1 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_005d5374_ea_1, float_0, 0x0);
GUEST_OFFSET(Local_005d5374_ea_1, float_4, 0x4);

struct __attribute__((packed)) Local_005d5374_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_005d5374_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_005d5374_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_005d5374_ea_2, word_8, 0x8);

inline guest::global<u32, 0x008931ec> global_008931ec;
inline constexpr guest::Function<0x005d8a3c, u32(u32, u32, u32, u32)> script__DialogCompo__TextRecept__TextRecept;

struct __attribute__((packed)) Frame_005d5374 {
    u8 unknown_0[0x14];  // (not read or written by name)
    float float_14;
    u8 unknown_18[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005d5374, float_14, 0x14);
GUEST_SIZE(Frame_005d5374, 0x1c);

void f_005d5374(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005d5374> frame;  // the original's stack frame
    float S2_1 = 7e-45f;
    float S0_1 = 1.2608996e-38f;
    float S1_1 = std::bit_cast<float>(*global_008931ec);
    frame->float_14 = S2_1;
    gptr<Local_005d5374_ea_1> ea_1 = gptr<Local_005d5374_ea_1>(frame.at(0).addr());
    ea_1->float_0 = S0_1;
    ea_1->float_4 = S1_1;
    gptr<Local_005d5374_ea_2> ea_2 = gptr<Local_005d5374_ea_2>(frame.at(8).addr());
    ea_2->word_0 = r1;
    ea_2->word_4 = r2;
    ea_2->word_8 = r3;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    script__DialogCompo__TextRecept__TextRecept(guest::cpu()->r[0], frame.at(0).addr(), r2, r3);
}

}  // namespace d_005d5374
GUEST_EXPORT_FRAMED(0x005d5374, d_005d5374::f_005d5374, 0x4000);  // pushes {lr} first, as the original

// f_005d53b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d53b0 {

struct __attribute__((packed)) Object_005d53b0_0 {
    u8 unknown_0[0x90];  // (not used here)
    u32 word_90;
    u32 word_94;
};
GUEST_OFFSET(Object_005d53b0_0, word_90, 0x90);
GUEST_OFFSET(Object_005d53b0_0, word_94, 0x94);

inline constexpr guest::Function<0x005d8740, u32(u32, u32, u32, u32)> script__DialogCompo__PagePut__PagePut;

void f_005d53b0(gptr<Object_005d53b0_0> arg0) {
    u32 r1_1 = arg0->word_94;
    u32 r2_1 = arg0->word_90 - 1u;
    if (s32(r1_1) >= s32(r2_1)) {
        guest::cpu()->r[1] = r1_1;
        return;
    }
    arg0->word_94 = r1_1 + 1u;
    script__DialogCompo__PagePut__PagePut(arg0.addr(), r1_1 + 1u, r2_1, guest::cpu()->r[3]);
}

}  // namespace d_005d53b0
GUEST_EXPORT(0x005d53b0, d_005d53b0::f_005d53b0);

// f_005d53d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d53d4 {

struct __attribute__((packed)) Local_005d53d4_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005d53d4_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_005d53d4_ea_2, word_4, 0x4);

inline guest::global<u32, 0x008931d8> global_008931d8;
inline constexpr guest::Function<0x005d8a3c, u32(u32, u32, u32, u32)> script__DialogCompo__TextRecept__TextRecept;

struct __attribute__((packed)) Frame_005d53d4 {
    float float_0;
    u32 word_4;
    float float_8;
    u8 unknown_c[0x8];  // (not read or written by name)
    float float_14;
    u8 unknown_18[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005d53d4, float_0, 0x0);
GUEST_OFFSET(Frame_005d53d4, word_4, 0x4);
GUEST_OFFSET(Frame_005d53d4, float_8, 0x8);
GUEST_OFFSET(Frame_005d53d4, float_14, 0x14);
GUEST_SIZE(Frame_005d53d4, 0x1c);

void f_005d53d4(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005d53d4> frame;  // the original's stack frame
    float S0_1 = 1.2608996e-38f;
    float S1_1 = std::bit_cast<float>(*global_008931d8);
    float S2_1 = 7e-45f;
    frame->float_0 = S0_1;
    frame->float_8 = S1_1;
    frame->float_14 = S2_1;
    frame->word_4 = r1;
    gptr<Local_005d53d4_ea_2> ea_2 = gptr<Local_005d53d4_ea_2>(frame.at(0xc).addr());  // (from the original)
    ea_2->word_0 = r2;
    ea_2->word_4 = r3;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    script__DialogCompo__TextRecept__TextRecept(guest::cpu()->r[0], frame.at(0).addr(), r2, r3);
}

}  // namespace d_005d53d4
GUEST_EXPORT_FRAMED(0x005d53d4, d_005d53d4::f_005d53d4, 0x4000);  // pushes {lr} first, as the original

// f_005d5414: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d5414 {

struct __attribute__((packed)) script__WordFix_400u_ {
    u8 unknown_0[0xb8];  // (not used here)
    u32 word_b8;
    u8 unknown_bc[0xc14];  // (not used here)
    u32 word_cd0;
};
GUEST_OFFSET(script__WordFix_400u_, word_b8, 0xb8);
GUEST_OFFSET(script__WordFix_400u_, word_cd0, 0xcd0);

inline constexpr u32 vtable_script__WordFix_1536u_ = 0x00909ab8u;
inline constexpr u32 vtable_script__WordFix_400u_ = 0x00909ff8u;

void script__WordFix_400u___WordFix(gptr<script__WordFix_400u_> word_fix_400u) {
    word_fix_400u->word_cd0 = vtable_script__WordFix_400u_;
    word_fix_400u->word_b8 = vtable_script__WordFix_1536u_;
}

}  // namespace d_005d5414
GUEST_EXPORT(0x005d5414, d_005d5414::script__WordFix_400u___WordFix);

// f_005d6000: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d6000 {

inline constexpr u32 vtable_script__MailInsert = 0x00908524u;
inline constexpr u32 vtable_script__WordFix_12u_ = 0x00909a10u;
inline constexpr u32 vtable_script__WordFix_13u_ = 0x00909a48u;
inline constexpr u32 vtable_script__WordFix_19u_ = 0x00909c78u;
inline constexpr u32 vtable_script__WordFix_33u_ = 0x00909f18u;
inline constexpr u32 vtable_script__WordFix_9u_ = 0x0090a3e8u;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;
inline constexpr guest::Function<0x005f0bc4, u32(u32, u32)> script__Insert__Insert_005f0bc4;

u32 script__MailInsert__destructor(gptr<script__MailInsert> mail_insert) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    mail_insert->word_0 = vtable_script__MailInsert;
    mail_insert->word_12234 = vtable_script__WordFix_9u_;
    destroy_array_elements(mail_insert.addr() + 0x11f8cu, 0x81d3fcu, 0x44u, 0xau);  // (from the original)
    *gptr<u32>(mail_insert.addr() + 0x11f58u) = vtable_script__WordFix_13u_;  // (from the original)
    *gptr<u32>(mail_insert.addr() + 0x11f28u) = vtable_script__WordFix_12u_;  // (from the original)
    *gptr<u32>(mail_insert.addr() + 0x11ef4u) = vtable_script__WordFix_13u_;  // (from the original)
    *gptr<u32>(mail_insert.addr() + 0x11ec8u) = vtable_script__WordFix_9u_;  // (from the original)
    *gptr<u32>(mail_insert.addr() + 0x11e9cu) = vtable_script__WordFix_9u_;  // (from the original)
    *gptr<u32>(mail_insert.addr() + 0x11e58u) = vtable_script__WordFix_19u_;  // (from the original)
    *gptr<u32>(mail_insert.addr() + 0x11e14u) = vtable_script__WordFix_19u_;  // (from the original)
    *gptr<u32>(mail_insert.addr() + 0x11dd0u) = vtable_script__WordFix_19u_;  // (from the original)
    *gptr<u32>(mail_insert.addr() + 0x11d74u) = vtable_script__WordFix_33u_;  // (from the original)
    *gptr<u32>(mail_insert.addr() + 0x11d18u) = vtable_script__WordFix_33u_;  // (from the original)
    *gptr<u32>(mail_insert.addr() + 0x11cd4u) = vtable_script__WordFix_19u_;  // (from the original)
    frame.release();
    return script__Insert__Insert_005f0bc4(mail_insert.addr(), vtable_script__WordFix_19u_);
}

}  // namespace d_005d6000
GUEST_EXPORT(0x005d6000, d_005d6000::script__MailInsert__destructor);

// f_005d60d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d60d4 {

struct __attribute__((packed)) Local_005d60d4_ea_4 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Local_005d60d4_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_005d60d4_ea_4, word_8, 0x8);


u32 f_005d60d4(gptr<script__RenderBase> render_base) {
    u32 r0 = render_base.addr();
    u32 r2 = 0;
    u32 res_1 = 0;
    u32 r2_1 = render_base->word_14;
    u32 r3_1 = r2_1 + (render_base->word_18 << 1) - r2_1;
    u32 r1 = 0u;
    if (s32(r3_1) >> 1 > 0) {
        r2 = r2_1 - 2u;
        if ((r3_1 & 2u) != 0u) {
            u32 ea_1 = r2 + 2u;
            *gptr<u16>(ea_1) = u16(r1);
            r2 = ea_1;
        }
        u32 r3 = s32(r3_1) >> 2;
        if (r3 != 0) {
            do {
                *gptr<u16>(r2 + 2u) = u16(r1);
                res_1 = r3 - 1u;
                r3 = res_1;
                u32 ea_3 = r2 + 4u;
                *gptr<u16>(ea_3) = u16(r1);
                r2 = ea_3;
                guest::preempt();
            } while (res_1 != 0);
        }
    }
    u32 r2_2 = *gptr<u32>(r0 + 0x1cu);  // (from the original)
    r2 = 0u;
    if ((r2_2 >= 0u) && r2_2 != 0) {
        do {
            *gptr<u32>(*gptr<u32>(r0 + 0x20u) + (r2 << 2)) = *gptr<u32>(r0 + 0x14u);  // (from the original)
            *gptr<u8>(*gptr<u32>(r0 + 0x24u) + r2) = u8(r1);  // (from the original)
            r2 += 1u;
            guest::preempt();
        } while (*gptr<u32>(r0 + 0x1cu) > r2);  // (from the original)
    }
    gptr<Local_005d60d4_ea_4> ea_4 = gptr<Local_005d60d4_ea_4>(r0 + 0x1cu);  // (from the original)
    u32 r0_1 = ea_4->word_0 - 1u;
    *gptr<u8>(ea_4->word_8 + r0_1) = 1;
    guest::cpu()->r[1] = 1u;
    return r0_1;
}

}  // namespace d_005d60d4
GUEST_EXPORT(0x005d60d4, d_005d60d4::f_005d60d4);

// f_005d6168: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d6168 {

struct __attribute__((packed)) Local_005d6168_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005d6168_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_005d6168_ea_1, word_4, 0x4);

inline constexpr u32 vtable_script__RenderBase = 0x0090883cu;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x005d60d4, u32(u32)> call_005d60d4;
inline constexpr guest::Function<0x00779500, u32(u32, u32, u32, u32)> allocate_default;

u32 script__RenderBase__RenderBase(gptr<script__RenderBase> render_base, u32 r1, u32 r2, u32 r3) {
    u32 r7 = guest::cpu()->r[7];
    render_base->word_0 = vtable_script__RenderBase;
    render_base->word_4 = 0xff000000;  // (from the original)
    float S0_1 = -1.0f;
    render_base->word_8 = 0xff000000;  // (from the original)
    render_base->float_c = S0_1;
    render_base->float_10 = S0_1;
    guest::cpu()->s[0] = S0_1;
    u32 r0_2 = allocate_default(r1 << 1, r7, r2, r3);
    u32 r2_1 = guest::cpu()->r[2];
    u32 r3_1 = guest::cpu()->r[3];
    render_base->word_14 = r0_2;
    render_base->word_18 = r1;
    render_base->word_1c = r2 + 1u;
    u32 r1_1 = r7;
    u32 r0_4 = allocate_default((r2 + 1u << 2) + 8u, r1_1, r2_1, r3_1);
    if (r0_4 != 0) {
        gptr<Local_005d6168_ea_1> ea_1 = gptr<Local_005d6168_ea_1>(r0_4 + 0u);
        ea_1->word_0 = 4;
        ea_1->word_4 = r2 + 1u;
        r2_1 = 4u;
        r1_1 = 0x5e9d4cu;  // (from the original)
        r3_1 = r2 + 1u;
        r0_4 = for_each_element(r0_4 + 8u, r1_1, r2_1, r3_1);
    }
    render_base->word_20 = r0_4;
    u32 r0_7 = allocate_default(render_base->word_1c, r1_1, r2_1, r3_1);
    render_base->word_24 = r0_7;
    render_base->word_28 = render_base->word_14 + (r1 << 1);
    call_005d60d4(render_base.addr());
    return render_base.addr();
}

}  // namespace d_005d6168
GUEST_EXPORT_FRAMED(0x005d6168, d_005d6168::script__RenderBase__RenderBase, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005d6510: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d6510 {

struct __attribute__((packed)) Object_005d6510_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_005d6510_1, word_0, 0x0);
GUEST_OFFSET(Object_005d6510_1, word_4, 0x4);

struct __attribute__((packed)) Object_005d6510_2 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Object_005d6510_2, word_10, 0x10);
GUEST_OFFSET(Object_005d6510_2, word_14, 0x14);

struct __attribute__((packed)) Local_005d6510_r0_1 {
    u16 half_0;
    u16 half_2;
};
GUEST_OFFSET(Local_005d6510_r0_1, half_0, 0x0);
GUEST_OFFSET(Local_005d6510_r0_1, half_2, 0x2);

inline constexpr guest::Function<0x004d60b0, u32(u32)> call_004d60b0;

u32 f_005d6510(u32 r0_unused, gptr<Object_005d6510_1> arg1, gptr<Object_005d6510_2> arg2) {
    gptr<Local_005d6510_r0_1> r0_1 = gptr<Local_005d6510_r0_1>(arg2->word_10);
    u32 r0_2 = u32(r0_1->half_2) & 0xffffu | u32(r0_1->half_0) << 0x10 & 0xffff0000u;  // (from the original)
    u32 r1_1 = r0_2 << 0x18 | (r0_2 >> 8u & 0xffu) << 0x10 | (r0_2 >> 0x10u & 0xffu) << 8 | r0_2 >> 0x18;  // (from the original)
    u32 r0_3 = arg1->word_0;
    *gptr<u32>(r0_3 + 0x18u) = r1_1;  // (from the original)
    call_004d60b0(r0_3);
    u32 r1_2 = ~1u;
    arg1->word_4 = r1_2 + (arg2->word_14 >> 1 << 1) + arg1->word_4;
    guest::cpu()->r[1] = r1_2;
    return 0u;
}

}  // namespace d_005d6510
GUEST_EXPORT_FRAMED(0x005d6510, d_005d6510::f_005d6510, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005d6868: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d6868 {

struct __attribute__((packed)) Local_005d6868_r1_2 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_005d6868_r1_2, float_0, 0x0);
GUEST_OFFSET(Local_005d6868_r1_2, float_4, 0x4);

inline constexpr u32 vtable_script__RenderMain = 0x00908854u;
inline constexpr guest::Function<0x005d6168, u32(u32, u32, u32, u32)> script__RenderBase__RenderBase;
inline constexpr guest::Function<0x00779500, u32(u32, u32, u32)> allocate_default;

u32 script__RenderMain__RenderMain_005d6868(gptr<script__RenderMain> render_main, u32 r1, u32 r2, u32 r3, float S0) {
    u32 r0 = render_main.addr();
    script__RenderBase__RenderBase(r0, r1, r3, r3);
    u32 b_1 = r2 << 1;
    render_main->word_0 = vtable_script__RenderMain;
    render_main->word_2c = 0;
    render_main->word_34 = b_1;
    render_main->word_30 = 0;
    u32 r4 = r0;
    render_main->byte_38 = 0;
    S0 = -1.0f;
    render_main->word_3c = std::bit_cast<u32>(S0);
    render_main->word_40 = std::bit_cast<u32>(S0);
    if (b_1 != 0) {
        guest::cpu()->s[0] = S0;
        u32 r0_2 = allocate_default(b_1 << 3, vtable_script__RenderMain, b_1);
        S0 = guest::cpu()->s[0];
        render_main->word_30 = r0_2;
    }
    *gptr<u32>(r4 + 0x2cu) = 0;  // (from the original)
    u32 r1_1 = *gptr<u32>(r4 + 0x34u);  // (from the original)
    r0 = 0u;
    if (r1_1 >= 0u && r1_1 != 0) {
        S0 = 0.0f;
        do {
            gptr<Local_005d6868_r1_2> r1_2 = gptr<Local_005d6868_r1_2>(*gptr<u32>(r4 + 0x30u) + (r0 << 3));  // (from the original)
            r0 += 1u;
            r1_2->float_0 = S0;
            r1_2->float_4 = S0;
            r1_1 = *gptr<u32>(r4 + 0x34u);  // (from the original)
            guest::preempt();
        } while (r1_1 > r0);
    }
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0;
    return r4;
}

}  // namespace d_005d6868
GUEST_EXPORT_FRAMED(0x005d6868, d_005d6868::script__RenderMain__RenderMain_005d6868, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005d6fac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d6fac {

struct __attribute__((packed)) Local_005d6fac_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005d6fac_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_005d6fac_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_005d6fac_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005d6fac_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_005d6fac_ea_3, word_4, 0x4);

struct __attribute__((packed)) Local_005d6fac_r0_4 {
    u32 word_0;
    u8 unknown_4[0x68];  // (not used here)
    u32 word_6c;
    u32 word_70;
    u32 word_74;
    u32 word_78;
    u32 word_7c;
    u32 word_80;
    u8 byte_84;
};
GUEST_OFFSET(Local_005d6fac_r0_4, word_0, 0x0);
GUEST_OFFSET(Local_005d6fac_r0_4, word_6c, 0x6c);
GUEST_OFFSET(Local_005d6fac_r0_4, word_70, 0x70);
GUEST_OFFSET(Local_005d6fac_r0_4, word_74, 0x74);
GUEST_OFFSET(Local_005d6fac_r0_4, word_78, 0x78);
GUEST_OFFSET(Local_005d6fac_r0_4, word_7c, 0x7c);
GUEST_OFFSET(Local_005d6fac_r0_4, word_80, 0x80);
GUEST_OFFSET(Local_005d6fac_r0_4, byte_84, 0x84);

inline constexpr u32 vtable_script__RenderRuby = 0x0090886cu;
inline constexpr u32 vtable_script__RenderTrace = 0x00908f2cu;
inline constexpr guest::Function<0x005d6168, u32(u32, u32, u32)> script__RenderBase__RenderBase;
inline constexpr guest::Function<0x005d6868, u32(u32, u32, u32, u32)> script__RenderMain__RenderMain_005d6868;
inline constexpr guest::Function<0x00601a20, u32(u32)> construct_msg_engine;

u32 script__RenderRuby__RenderRuby_005d6fac(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = script__RenderMain__RenderMain_005d6868(r0, r1, r2, 0u);
    u32 r0_2 = r0_1 + 0x44u;  // (from the original)
    script__RenderBase__RenderBase(r0_2, r1, 0u);
    *gptr<u32>(r0_2) = vtable_script__RenderRuby;
    gptr<Local_005d6fac_ea_1> ea_1 = gptr<Local_005d6fac_ea_1>(r0_2 + 0x2cu);  // (from the original)
    ea_1->word_0 = r0_1;
    ea_1->word_4 = 0;
    gptr<Local_005d6fac_r0_4> r0_4 = gptr<Local_005d6fac_r0_4>(construct_msg_engine(r0_2 + 0x34u));  // (from the original)
    r0_4->word_0 = vtable_script__RenderTrace;
    *gptr<u32>(r0_4.addr() + 0x60u) = r0_2 - 0x44u;  // (from the original)
    gptr<Local_005d6fac_ea_3> ea_3 = gptr<Local_005d6fac_ea_3>(r0_4.addr() + 0x64u);  // (from the original)
    ea_3->word_0 = r0_2;
    ea_3->word_4 = 0;
    r0_4->word_6c = 0;
    r0_4->word_70 = 0;
    r0_4->word_74 = 0;
    r0_4->word_78 = 0;
    r0_4->word_7c = 0;
    r0_4->word_80 = 0;
    r0_4->byte_84 = 0;
    guest::cpu()->r[1] = r0_4.addr();
    return r0_4.addr() - 0x78u;  // (from the original)
}

}  // namespace d_005d6fac
GUEST_EXPORT_FRAMED(0x005d6fac, d_005d6fac::script__RenderRuby__RenderRuby_005d6fac, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005d79bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d79bc {

struct __attribute__((packed)) Object_005d79bc_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_005d79bc_0, word_0, 0x0);


void f_005d79bc(gptr<Object_005d79bc_0> arg0, u32 r1) {
    arg0->word_0 = r1 >= 7u ? 0x890eb0u : r1 * 0xcu + 0x890e5cu;  // (from the original)
}

}  // namespace d_005d79bc
GUEST_EXPORT(0x005d79bc, d_005d79bc::f_005d79bc);

// f_005d79e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d79e0 {

inline constexpr u32 global_0095def4_address = 0x0095def4u;
inline constexpr u32 global_0095df1c_address = 0x0095df1cu;
inline constexpr u32 global_00ad5718_address = 0x00ad5718u;
inline guest::global<u32, 0x0095def4> global_0095def4;
inline guest::global<u16, 0x0095df24> global_0095df24;
inline constexpr guest::Function<0x002fe7dd, u32(u32)> claim_flag;
inline constexpr guest::Function<0x005d7a8c, u32(u32, u32)> read_command;

struct __attribute__((packed)) Frame_005d79e0 {
    u32 word_0;
};
GUEST_OFFSET(Frame_005d79e0, word_0, 0x0);
GUEST_SIZE(Frame_005d79e0, 0x4);

u32 f_005d79e0(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3, float S0) {
    guest::StackFrameOf<Frame_005d79e0> frame;  // the original's stack frame
    float S1_1 = 32.0f;
    frame->word_0 = r3;
    float S0_1 = std::bit_cast<float>(vcvt_sz_f(S0 * S1_1));
    *global_0095df24 = u16(std::bit_cast<u32>(S0_1));
    frame->word_0 = 0x95df1c;  // (from the original)
    if ((*global_0095def4 & 1u) != 0) {
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return global_00ad5718_address;
    }
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    u32 r0_1 = claim_flag(global_0095def4_address);
    if (r0_1 == 0) {
        return global_00ad5718_address;
    }
    read_command(global_00ad5718_address, frame.at(0).addr());
    return global_00ad5718_address;
}

}  // namespace d_005d79e0
GUEST_EXPORT_FRAMED(0x005d79e0, d_005d79e0::f_005d79e0, 0x4000);  // pushes {lr} first, as the original

// f_005d7a4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d7a4c {

struct __attribute__((packed)) Object_005d7a4c_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_005d7a4c_0, word_0, 0x0);

struct __attribute__((packed)) Object_005d7a4c_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_005d7a4c_1, word_0, 0x0);

inline constexpr u32 global_0095df34_address = 0x0095df34u;
inline guest::global<u16, 0x0095df3c> global_0095df3c;
inline guest::global<u16, 0x0095df3e> global_0095df3e;

void f_005d7a4c(gptr<Object_005d7a4c_0> arg0, gptr<Object_005d7a4c_1> arg1) {
    u32 r1_1 = arg1->word_0;
    u32 r1_2 = r1_1 << 0x18 | (r1_1 >> 8u & 0xffu) << 0x10 | (r1_1 >> 0x10u & 0xffu) << 8 | r1_1 >> 0x18;  // (from the original)
    *global_0095df3c = u16(r1_2 >> 0x10);  // (from the original)
    *global_0095df3e = u16(r1_2);
    arg0->word_0 = 0x95df34;  // (from the original)
}

}  // namespace d_005d7a4c
GUEST_EXPORT(0x005d7a4c, d_005d7a4c::f_005d7a4c);

// f_005d7a8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d7a8c {

struct __attribute__((packed)) Object_005d7a8c_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Object_005d7a8c_0, word_0, 0x0);
GUEST_OFFSET(Object_005d7a8c_0, word_4, 0x4);
GUEST_OFFSET(Object_005d7a8c_0, word_8, 0x8);
GUEST_OFFSET(Object_005d7a8c_0, word_c, 0xc);
GUEST_OFFSET(Object_005d7a8c_0, word_10, 0x10);
GUEST_OFFSET(Object_005d7a8c_0, word_14, 0x14);

struct __attribute__((packed)) Object_005d7a8c_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_005d7a8c_1, word_0, 0x0);

struct __attribute__((packed)) Local_005d7a8c_r2_1 {
    u8 unknown_0[0x2];  // (not used here)
    u16 half_2;
    u16 half_4;
    u16 half_6;
};
GUEST_OFFSET(Local_005d7a8c_r2_1, half_2, 0x2);
GUEST_OFFSET(Local_005d7a8c_r2_1, half_4, 0x4);
GUEST_OFFSET(Local_005d7a8c_r2_1, half_6, 0x6);


void read_command(gptr<Object_005d7a8c_0> arg0, gptr<Object_005d7a8c_1> arg1) {
    arg0->word_0 = 0;
    arg0->word_4 = ~0x80000000u;  // (from the original)
    arg0->word_8 = ~0u;
    arg0->word_c = 0;
    arg0->word_10 = 0;
    arg0->word_14 = 0;
    gptr<Local_005d7a8c_r2_1> r2_1 = gptr<Local_005d7a8c_r2_1>(arg1->word_0);
    if (r2_1.addr() == 0) {
        return;
    }
    arg0->word_0 = r2_1.addr();
    arg0->word_4 = u32(r2_1->half_2);
    arg0->word_8 = u32(r2_1->half_4);
    arg0->word_c = u32(r2_1->half_6);
    arg0->word_10 = arg1->word_0 + 8u;
    arg0->word_14 = arg0->word_c + 8u;
}

}  // namespace d_005d7a8c
GUEST_EXPORT(0x005d7a8c, d_005d7a8c::read_command);

// f_005d8274: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d8274 {

struct __attribute__((packed)) Object_005d8274_1 {
    u8 unknown_0[0x344];  // (not used here)
    u32 word_344;
};
GUEST_OFFSET(Object_005d8274_1, word_344, 0x344);

struct __attribute__((packed)) Local_005d8274_r0_25 {
    u8 byte_0;
    u8 unknown_1[0x3];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_005d8274_r0_25, byte_0, 0x0);
GUEST_OFFSET(Local_005d8274_r0_25, word_4, 0x4);
GUEST_OFFSET(Local_005d8274_r0_25, word_8, 0x8);

struct __attribute__((packed)) Local_005d8274_r3_11 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005d8274_r3_11, word_0, 0x0);
GUEST_OFFSET(Local_005d8274_r3_11, word_4, 0x4);

inline constexpr u32 vtable_script__TalkInsert = 0x00908884u;
inline constexpr u32 vtable_script__WordFix_17u_ = 0x00909b60u;
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> clear_aligned;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x00312bd0, u32(u32, u32, u32)> construct_word_fix_19;
inline constexpr guest::Function<0x005f05e4, u32(u32, u32, u32, u32)> script__Insert__Insert_005f05e4;
inline constexpr guest::Function<0x0081c8b8, u32(u32)> script__WordFix_12u___WordFix;
inline constexpr guest::Function<0x0081c9bc, u32(u32)> script__WordFix_13u___WordFix;
inline constexpr guest::Function<0x0081d8c0, u32(u32)> script__WordFix_33u___WordFix_0081d8c0;
inline constexpr guest::Function<0x0081e8d0, u32(u32)> script__construct_word_fix_9;

u32 script__TalkInsert__TalkInsert(u32 r0, gptr<Object_005d8274_1> arg1, u32 r2, u32 r3) {
    u32 r1 = arg1.addr();
    u32 res_1 = 0;
    u32 r1_1 = arg1->word_344;
    if (r1_1 != 0) {
        r1_1 += 0x8cu;  // (from the original)
    }
    u32 r0_1 = script__Insert__Insert_005f05e4(r0, r1_1, r2, r3);
    *gptr<u32>(r0_1) = vtable_script__TalkInsert;
    *gptr<u32>(r0_1 + 0x11cd0u) = r1;  // (from the original)
    u32 r0_3 = construct_word_fix_19(r0_1 + 0x11cd4u, 0x11cd0u, vtable_script__TalkInsert);  // (from the original)
    u32 r0_5 = script__WordFix_33u___WordFix_0081d8c0(r0_3 + 0x44u);  // (from the original)
    u32 r0_7 = script__WordFix_33u___WordFix_0081d8c0(r0_5 + 0x5cu);  // (from the original)
    u32 r0_9 = construct_word_fix_19(r0_7 + 0x5cu, guest::cpu()->r[1], guest::cpu()->r[2]);  // (from the original)
    u32 r0_11 = construct_word_fix_19(r0_9 + 0x44u, guest::cpu()->r[1], guest::cpu()->r[2]);  // (from the original)
    u32 r0_13 = construct_word_fix_19(r0_11 + 0x44u, guest::cpu()->r[1], guest::cpu()->r[2]);  // (from the original)
    u32 r0_15 = script__construct_word_fix_9(r0_13 + 0x44u);  // (from the original)
    u32 r0_17 = script__WordFix_13u___WordFix(r0_15 + 0x2cu);  // (from the original)
    u32 r0_19 = script__WordFix_12u___WordFix(r0_17 + 0x34u);  // (from the original)
    u32 r0_21 = script__WordFix_13u___WordFix(r0_19 + 0x30u);  // (from the original)
    u32 r0_23 = for_each_element(r0_21 + 0x34u, 0x81d370u, 0x44u, 0xau);  // (from the original)
    u32 r0_24 = r0_23 + 0x2a8u;  // (from the original)
    gptr<Local_005d8274_r3_11> r3_11 = gptr<Local_005d8274_r3_11>(r0_24 + 4u);
    r3_11->word_0 = r0_24 + 0x18u;  // (from the original)
    r3_11->word_4 = 0x11;  // (from the original)
    u32 r4 = r0_24;
    *gptr<u32>(r0_24) = vtable_script__WordFix_17u_;
    gptr<Local_005d8274_r0_25> r0_25 = gptr<Local_005d8274_r0_25>(r0_24 + 0xcu);  // (from the original)
    u32 r1_11 = ~0u;
    r0_25->byte_0 = 4;
    r0_25->word_4 = r1_11;
    r0_25->word_8 = r1_11;
    clear_aligned(r4 + 0x18u, 0x22u, 4u, r3_11.addr());  // (from the original)
    r1 = 0u;
    r0 = r4 + 0x18u;  // (from the original)
    r2 = 8u;
    *gptr<u16>(r4 + 0x18u) = u16(r1);  // (from the original)
    do {
        *gptr<u16>(r0 + 2u) = u16(r1);
        res_1 = r2 - 1u;
        r2 = res_1;
        u32 ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r1);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    return r4 - 0x12208u;  // (from the original)
}

}  // namespace d_005d8274
GUEST_EXPORT_FRAMED(0x005d8274, d_005d8274::script__TalkInsert__TalkInsert, 0x4010);  // pushes {r4, lr} first, as the original

// f_005d8ec8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d8ec8 {

struct __attribute__((packed)) script__WordFix_1536u_ {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 byte_c;
    u8 unknown_d[0x3];  // (not used here)
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
    u32 word_4c;
    u32 word_50;
    u32 word_54;
    u32 word_58;
    u32 word_5c;
    u32 word_60;
    u32 word_64;
    u32 word_68;
    u32 word_6c;
    u32 word_70;
    u32 word_74;
    u32 word_78;
    u32 word_7c;
    u32 word_80;
    u32 word_84;
    u32 word_88;
    u32 word_8c;
    u32 word_90;
    u32 word_94;
    u32 word_98;
    u32 word_9c;
    u32 word_a0;
    u32 word_a4;
    u32 word_a8;
    u8 byte_ac;
    u8 unknown_ad[0x3];  // (not used here)
    u32 word_b0;
    u8 byte_b4;
    u8 unknown_b5[0x3];  // (not used here)
    u32 word_b8;
    u32 word_bc;
    u32 word_c0;
    u8 byte_c4;
    u8 unknown_c5[0x3];  // (not used here)
    u32 word_c8;
    u32 word_cc;
};
GUEST_OFFSET(script__WordFix_1536u_, word_0, 0x0);
GUEST_OFFSET(script__WordFix_1536u_, word_4, 0x4);
GUEST_OFFSET(script__WordFix_1536u_, word_8, 0x8);
GUEST_OFFSET(script__WordFix_1536u_, byte_c, 0xc);
GUEST_OFFSET(script__WordFix_1536u_, word_10, 0x10);
GUEST_OFFSET(script__WordFix_1536u_, word_14, 0x14);
GUEST_OFFSET(script__WordFix_1536u_, word_18, 0x18);
GUEST_OFFSET(script__WordFix_1536u_, word_1c, 0x1c);
GUEST_OFFSET(script__WordFix_1536u_, word_20, 0x20);
GUEST_OFFSET(script__WordFix_1536u_, word_24, 0x24);
GUEST_OFFSET(script__WordFix_1536u_, word_28, 0x28);
GUEST_OFFSET(script__WordFix_1536u_, word_2c, 0x2c);
GUEST_OFFSET(script__WordFix_1536u_, word_30, 0x30);
GUEST_OFFSET(script__WordFix_1536u_, word_34, 0x34);
GUEST_OFFSET(script__WordFix_1536u_, word_38, 0x38);
GUEST_OFFSET(script__WordFix_1536u_, word_3c, 0x3c);
GUEST_OFFSET(script__WordFix_1536u_, word_40, 0x40);
GUEST_OFFSET(script__WordFix_1536u_, word_44, 0x44);
GUEST_OFFSET(script__WordFix_1536u_, word_48, 0x48);
GUEST_OFFSET(script__WordFix_1536u_, word_4c, 0x4c);
GUEST_OFFSET(script__WordFix_1536u_, word_50, 0x50);
GUEST_OFFSET(script__WordFix_1536u_, word_54, 0x54);
GUEST_OFFSET(script__WordFix_1536u_, word_58, 0x58);
GUEST_OFFSET(script__WordFix_1536u_, word_5c, 0x5c);
GUEST_OFFSET(script__WordFix_1536u_, word_60, 0x60);
GUEST_OFFSET(script__WordFix_1536u_, word_64, 0x64);
GUEST_OFFSET(script__WordFix_1536u_, word_68, 0x68);
GUEST_OFFSET(script__WordFix_1536u_, word_6c, 0x6c);
GUEST_OFFSET(script__WordFix_1536u_, word_70, 0x70);
GUEST_OFFSET(script__WordFix_1536u_, word_74, 0x74);
GUEST_OFFSET(script__WordFix_1536u_, word_78, 0x78);
GUEST_OFFSET(script__WordFix_1536u_, word_7c, 0x7c);
GUEST_OFFSET(script__WordFix_1536u_, word_80, 0x80);
GUEST_OFFSET(script__WordFix_1536u_, word_84, 0x84);
GUEST_OFFSET(script__WordFix_1536u_, word_88, 0x88);
GUEST_OFFSET(script__WordFix_1536u_, word_8c, 0x8c);
GUEST_OFFSET(script__WordFix_1536u_, word_90, 0x90);
GUEST_OFFSET(script__WordFix_1536u_, word_94, 0x94);
GUEST_OFFSET(script__WordFix_1536u_, word_98, 0x98);
GUEST_OFFSET(script__WordFix_1536u_, word_9c, 0x9c);
GUEST_OFFSET(script__WordFix_1536u_, word_a0, 0xa0);
GUEST_OFFSET(script__WordFix_1536u_, word_a4, 0xa4);
GUEST_OFFSET(script__WordFix_1536u_, word_a8, 0xa8);
GUEST_OFFSET(script__WordFix_1536u_, byte_ac, 0xac);
GUEST_OFFSET(script__WordFix_1536u_, word_b0, 0xb0);
GUEST_OFFSET(script__WordFix_1536u_, byte_b4, 0xb4);
GUEST_OFFSET(script__WordFix_1536u_, word_b8, 0xb8);
GUEST_OFFSET(script__WordFix_1536u_, word_bc, 0xbc);
GUEST_OFFSET(script__WordFix_1536u_, word_c0, 0xc0);
GUEST_OFFSET(script__WordFix_1536u_, byte_c4, 0xc4);
GUEST_OFFSET(script__WordFix_1536u_, word_c8, 0xc8);
GUEST_OFFSET(script__WordFix_1536u_, word_cc, 0xcc);

struct __attribute__((packed)) Local_005d8ec8_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005d8ec8_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_005d8ec8_ea_3, word_4, 0x4);

struct __attribute__((packed)) Local_005d8ec8_r2_1 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
    u32 word_14;
    u8 unknown_18[0x38];  // (not used here)
    u32 word_50;
    u32 word_54;
};
GUEST_OFFSET(Local_005d8ec8_r2_1, word_10, 0x10);
GUEST_OFFSET(Local_005d8ec8_r2_1, word_14, 0x14);
GUEST_OFFSET(Local_005d8ec8_r2_1, word_50, 0x50);
GUEST_OFFSET(Local_005d8ec8_r2_1, word_54, 0x54);

inline constexpr u32 vtable_script__WordFix_1536u_ = 0x00909ab8u;
inline constexpr u32 vtable_script__WordFix_400u_ = 0x00909ff8u;
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> clear_aligned;

u32 script__WordFix_1536u___WordFix(gptr<script__WordFix_1536u_> word_fix_1536u) {
    u32 r0 = word_fix_1536u.addr();
    u32 res_1 = 0;
    u32 res_2 = 0;
    u32 r6 = 0u;
    word_fix_1536u->word_0 = r6;
    word_fix_1536u->word_4 = r6;
    word_fix_1536u->word_8 = r6;
    word_fix_1536u->byte_c = 1;
    word_fix_1536u->word_10 = r6;
    word_fix_1536u->word_14 = r6;
    word_fix_1536u->word_18 = r6;
    word_fix_1536u->word_1c = r6;
    word_fix_1536u->word_20 = r6;
    word_fix_1536u->word_24 = r6;
    word_fix_1536u->word_28 = r6;
    word_fix_1536u->word_2c = r6;
    word_fix_1536u->word_30 = r6;
    word_fix_1536u->word_34 = r6;
    word_fix_1536u->word_38 = r6;
    word_fix_1536u->word_3c = r6;
    word_fix_1536u->word_40 = r6;
    word_fix_1536u->word_44 = r6;
    word_fix_1536u->word_48 = r6;
    word_fix_1536u->word_4c = r6;
    word_fix_1536u->word_50 = r6;
    word_fix_1536u->word_54 = r6;
    word_fix_1536u->word_58 = r6;
    word_fix_1536u->word_5c = r6;
    word_fix_1536u->word_60 = r6;
    word_fix_1536u->word_64 = r6;
    word_fix_1536u->word_68 = r6;
    word_fix_1536u->word_6c = r6;
    word_fix_1536u->word_70 = r6;
    word_fix_1536u->word_74 = r6;
    word_fix_1536u->word_78 = r6;
    word_fix_1536u->word_7c = r6;
    word_fix_1536u->word_80 = r6;
    word_fix_1536u->word_84 = r6;
    word_fix_1536u->word_88 = r6;
    word_fix_1536u->word_8c = r6;
    word_fix_1536u->word_90 = r6;
    word_fix_1536u->word_94 = r6;
    word_fix_1536u->word_98 = r6;
    u32 r7 = ~0u;
    word_fix_1536u->word_9c = r6;
    word_fix_1536u->word_a0 = r6;
    word_fix_1536u->word_a4 = r7;
    word_fix_1536u->word_a8 = r7;
    word_fix_1536u->byte_ac = 5;
    word_fix_1536u->word_b0 = r6;
    u32 r4_1 = r0 + 0xb8u;  // (from the original)
    word_fix_1536u->byte_b4 = 0x27;  // (from the original)
    word_fix_1536u->word_bc = r0 + 0xd0u;  // (from the original)
    word_fix_1536u->word_c0 = 0x600;  // (from the original)
    u32 r8 = 4u;
    word_fix_1536u->word_b8 = vtable_script__WordFix_1536u_;
    word_fix_1536u->byte_c4 = u8(r8);
    word_fix_1536u->word_c8 = r7;
    word_fix_1536u->word_cc = r7;
    clear_aligned(r4_1 + 0x18u, 0xc00u, 0x27u, guest::cpu()->r[3]);  // (from the original)
    u32 r2 = guest::cpu()->r[2];
    u32 r5 = r4_1 + 0xc18u;  // (from the original)
    r0 = r4_1 + 0x16u;  // (from the original)
    u32 r1 = 0x300u;  // (from the original)
    do {
        *gptr<u16>(r0 + 2u) = u16(r6);
        res_1 = r1 - 1u;
        r1 = res_1;
        u32 ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r6);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    gptr<Local_005d8ec8_ea_3> ea_3 = gptr<Local_005d8ec8_ea_3>(r5 + 4u);
    ea_3->word_0 = r5 + 0x18u;  // (from the original)
    ea_3->word_4 = 0x190;  // (from the original)
    *gptr<u32>(r5) = vtable_script__WordFix_400u_;
    *gptr<u8>(r5 + 0xcu) = u8(r8);  // (from the original)
    *gptr<u32>(r5 + 0x10u) = r7;  // (from the original)
    *gptr<u32>(r5 + 0x14u) = r7;  // (from the original)
    clear_aligned(r5 + 0x18u, 0x320u, r2, guest::cpu()->r[3]);  // (from the original)
    r0 = r5 + 0x16u;  // (from the original)
    r1 = 0xc8u;  // (from the original)
    do {
        *gptr<u16>(r0 + 2u) = u16(r6);
        res_2 = r1 - 1u;
        r1 = res_2;
        u32 ea_5 = r0 + 4u;
        *gptr<u16>(ea_5) = u16(r6);
        r0 = ea_5;
        guest::preempt();
    } while (res_2 != 0);
    r0 = r5 - 0xcd0u;  // (from the original)
    r1 = 0u;
    do {
        gptr<Local_005d8ec8_r2_1> r2_1 = gptr<Local_005d8ec8_r2_1>(r0 + (r1 << 2));
        r1 += 2u;
        r2_1->word_10 = r6;
        r2_1->word_50 = r6;
        r2_1->word_14 = r6;
        r2_1->word_54 = r6;
        guest::preempt();
    } while (r1 < 0x10u);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005d8ec8
GUEST_EXPORT_FRAMED(0x005d8ec8, d_005d8ec8::script__WordFix_1536u___WordFix, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_005daf1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005daf1c {

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline guest::global<u8, 0x0094fd25> global_0094fd25;
inline constexpr guest::Function<0x002bf9cc, u32(u32, u32, u32, u32)> Pockets__set_slot;
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> get_current_player;

struct __attribute__((packed)) Frame_005daf1c {
    u32 word_0;
};
GUEST_OFFSET(Frame_005daf1c, word_0, 0x0);
GUEST_SIZE(Frame_005daf1c, 0x4);

u32 f_005daf1c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005daf1c> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 player = get_current_player(r0, r1, r2, r3);
    u32 r1_1 = *global_0094fd25;
    if (r1_1 >= 0x10u || player == 0) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return player;
    }
    frame->word_0 = 1;
    u32 r0_3 = Pockets__set_slot(player + 0x6bd0u, r1_1, empty_item_address, 0u);  // (from the original)
    return r0_3;
}

}  // namespace d_005daf1c
GUEST_EXPORT_FRAMED(0x005daf1c, d_005daf1c::f_005daf1c, 0x4000);  // pushes {lr} first, as the original

// f_005dc374: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005dc374 {

inline constexpr u32 vtable_sead__SafeStringBase_char_ = 0x009047f8u;
inline constexpr guest::Function<0x0013cd00, u32(u32, u32, u32, u32)> SafeString__copy;

struct __attribute__((packed)) Frame_005dc374 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Frame_005dc374, word_0, 0x0);
GUEST_OFFSET(Frame_005dc374, word_4, 0x4);
GUEST_SIZE(Frame_005dc374, 0x8);

u32 sead__SafeStringBase_char___SafeStringBase_005dc374(u32 r0, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_005dc374> frame;  // the original's stack frame
    frame->word_4 = r1;
    frame->word_0 = vtable_sead__SafeStringBase_char_;
    SafeString__copy(r0 + 0xcu, frame.at(0).addr(), ~0u, guest::cpu()->r[3]);  // (from the original)
    frame->word_0 = vtable_sead__SafeStringBase_char_;
    frame->word_4 = r2;
    u32 r0_3 = SafeString__copy(r0 + 0x38u, frame.at(0).addr(), ~0u, guest::cpu()->r[3]);  // (from the original)
    return r0_3;
}

}  // namespace d_005dc374
GUEST_EXPORT_FRAMED(0x005dc374, d_005dc374::sead__SafeStringBase_char___SafeStringBase_005dc374, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005dc9d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005dc9d4 {

inline constexpr guest::Function<0x002bf814, u32(u32, u32, u32, u32)> Pockets__add;
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> get_current_player;
inline constexpr guest::Function<0x005c81f4, u32(u32, u32, u32, u32)> call_005c81f4;

u32 f_005dc9d4(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 player = get_current_player(r0, r1, r2, r3);
    if (player != 0) {
        u32 r0_3 = Pockets__add(player + 0x6bd0u, r1, r2, 1u);  // (from the original)
        frame.release();
        return call_005c81f4(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    return player;
}

}  // namespace d_005dc9d4
GUEST_EXPORT(0x005dc9d4, d_005dc9d4::f_005dc9d4);

// f_005dd400: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005dd400 {

struct __attribute__((packed)) sead__SafeStringBase_char_ {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u8 unknown_14[0x4];  // (not used here)
    u32 word_18;
    u8 unknown_1c[0x54];  // (not used here)
    u32 word_70;
    u8 unknown_74[0x24];  // (not used here)
    u32 word_98;
    u32 word_9c;
    u32 word_a0;
    u32 word_a4;
    u32 word_a8;
    u8 byte_ac;
    u8 byte_ad;
};
GUEST_OFFSET(sead__SafeStringBase_char_, word_4, 0x4);
GUEST_OFFSET(sead__SafeStringBase_char_, word_8, 0x8);
GUEST_OFFSET(sead__SafeStringBase_char_, word_c, 0xc);
GUEST_OFFSET(sead__SafeStringBase_char_, word_10, 0x10);
GUEST_OFFSET(sead__SafeStringBase_char_, word_18, 0x18);
GUEST_OFFSET(sead__SafeStringBase_char_, word_70, 0x70);
GUEST_OFFSET(sead__SafeStringBase_char_, word_98, 0x98);
GUEST_OFFSET(sead__SafeStringBase_char_, word_9c, 0x9c);
GUEST_OFFSET(sead__SafeStringBase_char_, word_a0, 0xa0);
GUEST_OFFSET(sead__SafeStringBase_char_, word_a4, 0xa4);
GUEST_OFFSET(sead__SafeStringBase_char_, word_a8, 0xa8);
GUEST_OFFSET(sead__SafeStringBase_char_, byte_ac, 0xac);
GUEST_OFFSET(sead__SafeStringBase_char_, byte_ad, 0xad);

inline constexpr u32 vtable_sead__SafeStringBase_char_ = 0x009047f8u;
inline guest::global<u8, 0x008c9f1c> empty_string;
inline constexpr guest::Function<0x0013cd00, u32(u32, u32, u32, u32)> SafeString__copy;

struct __attribute__((packed)) Frame_005dd400 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005dd400, word_0, 0x0);
GUEST_OFFSET(Frame_005dd400, word_4, 0x4);
GUEST_SIZE(Frame_005dd400, 0xc);

void sead__SafeStringBase_char___SafeStringBase_005dd400(gptr<sead__SafeStringBase_char_> safe_string_base_char, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005dd400> frame;  // the original's stack frame
    safe_string_base_char->word_4 = 0;
    safe_string_base_char->word_8 = r1;
    safe_string_base_char->word_c = 0;
    safe_string_base_char->word_10 = 0;
    *gptr<u8>(safe_string_base_char->word_18) = *empty_string;
    frame->word_4 = r2;
    frame->word_0 = vtable_sead__SafeStringBase_char_;
    SafeString__copy(safe_string_base_char.addr() + 0x40u, frame.at(0).addr(), ~0u, vtable_sead__SafeStringBase_char_);  // (from the original)
    *gptr<u8>(safe_string_base_char->word_70) = *empty_string;
    u32 r0_2 = ~0u;
    safe_string_base_char->word_98 = r0_2;
    safe_string_base_char->word_9c = r3;
    safe_string_base_char->word_a0 = r0_2;
    safe_string_base_char->word_a4 = r0_2;
    safe_string_base_char->word_a8 = r0_2;
    safe_string_base_char->byte_ac = 2;
    safe_string_base_char->byte_ad = 0;
    guest::cpu()->r[1] = 2u;
}

}  // namespace d_005dd400
GUEST_EXPORT_FRAMED(0x005dd400, d_005dd400::sead__SafeStringBase_char___SafeStringBase_005dd400, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_005dd51c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005dd51c {

inline constexpr u32 vtable_sead__SafeStringBase_char_ = 0x009047f8u;
inline constexpr guest::Function<0x0013cd00, u32(u32, u32, u32, u32)> SafeString__copy;

struct __attribute__((packed)) Frame_005dd51c {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005dd51c, word_0, 0x0);
GUEST_OFFSET(Frame_005dd51c, word_4, 0x4);
GUEST_SIZE(Frame_005dd51c, 0xc);

u32 sead__SafeStringBase_char___SafeStringBase_005dd51c(u32 r0, u32 r1) {
    guest::StackFrameOf<Frame_005dd51c> frame;  // the original's stack frame
    frame->word_4 = r1;
    frame->word_0 = vtable_sead__SafeStringBase_char_;
    u32 r0_2 = SafeString__copy(r0 + 8u, frame.at(0).addr(), ~0u, vtable_sead__SafeStringBase_char_);
    return r0_2;
}

}  // namespace d_005dd51c
GUEST_EXPORT_FRAMED(0x005dd51c, d_005dd51c::sead__SafeStringBase_char___SafeStringBase_005dd51c, 0x4000);  // pushes {lr} first, as the original

// f_005dd5b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005dd5b8 {

inline constexpr guest::Function<0x00544a20, u32(u32, u32, u32)> call_00544a20;
inline constexpr guest::Function<0x00544d08, u32(u32, u32, u32)> call_00544d08;
inline constexpr guest::Function<0x00544f18, u32(u32, u32, u32)> print_finish;
inline constexpr guest::Function<0x00544fec, u32(u32, u32)> print_append;
inline constexpr guest::Function<0x0054a644, u32(u32, u32, u32, u32)> construct_print_output;

struct __attribute__((packed)) Frame_005dd5b8 {
    u8 unknown_0[0x28];  // (not read or written by name)
    u8 byte_28;
    u8 unknown_29[0x1f];  // (not read or written by name)
    u32 word_48;
};
GUEST_OFFSET(Frame_005dd5b8, byte_28, 0x28);
GUEST_OFFSET(Frame_005dd5b8, word_48, 0x48);
GUEST_SIZE(Frame_005dd5b8, 0x4c);

u32 f_005dd5b8(u32 r0, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_005dd5b8> frame;  // the original's stack frame
    u32 r0_1 = frame.at(8).addr();
    construct_print_output(r0_1, r0 + 0x34u, r2, guest::cpu()->r[3]);  // (from the original)
    print_append(r0_1, 0x894b7cu);  // (from the original)
    u32 r2_2 = guest::cpu()->r[2];
    frame->word_48 = r1;
    u32 r0_2 = call_00544a20(r0_1, frame.at(0x28).addr(), r2_2);  // (from the original)
    if (r0_2 != 0) {
        r2_2 = *gptr<u32>(r0_1 + 4u);
        call_00544d08(frame.at(0x48).addr(), frame->byte_28 == 0 ? 0u : frame.at(0x28).addr(), r2_2);  // (from the original)
    }
    print_finish(r0_1, guest::cpu()->r[1], r2_2);
    return frame.at(0x1c).addr();  // (from the original)
}

}  // namespace d_005dd5b8
GUEST_EXPORT_FRAMED(0x005dd5b8, d_005dd5b8::f_005dd5b8, 0x4030);  // pushes {r4, r5, lr} first, as the original
