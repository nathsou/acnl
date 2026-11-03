// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "core/word_pair.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_005a064c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a064c {

struct __attribute__((packed)) Object_005a064c_0 {
    u8 unknown_0[0xc];  // (not used here)
    u8 byte_c;
    u8 byte_d;
    u8 byte_e;
    u8 byte_f;
    u8 byte_10;
    u8 byte_11;
    u8 byte_12;
    u8 byte_13;
    u8 byte_14;
};
GUEST_OFFSET(Object_005a064c_0, byte_c, 0xc);
GUEST_OFFSET(Object_005a064c_0, byte_d, 0xd);
GUEST_OFFSET(Object_005a064c_0, byte_e, 0xe);
GUEST_OFFSET(Object_005a064c_0, byte_f, 0xf);
GUEST_OFFSET(Object_005a064c_0, byte_10, 0x10);
GUEST_OFFSET(Object_005a064c_0, byte_11, 0x11);
GUEST_OFFSET(Object_005a064c_0, byte_12, 0x12);
GUEST_OFFSET(Object_005a064c_0, byte_13, 0x13);
GUEST_OFFSET(Object_005a064c_0, byte_14, 0x14);

inline constexpr guest::Function<0x002fc20c, u32(u32)> construct_empty_item;

u32 f_005a064c(gptr<Object_005a064c_0> arg0) {
    construct_empty_item(arg0.addr());
    construct_empty_item(arg0.addr() + 4u);
    construct_empty_item(arg0.addr() + 8u);
    arg0->byte_12 = 0xa5;  // (from the original)
    arg0->byte_13 = 0;
    arg0->byte_14 = 0;
    arg0->byte_f = 0;
    arg0->byte_10 = 0;
    arg0->byte_11 = 0;
    arg0->byte_c = u8(u32(arg0->byte_c) & ~0xffu);  // (from the original)
    arg0->byte_d = u8(u32(arg0->byte_d) & ~0xffu | 0x28u);  // (from the original)
    arg0->byte_e = u8(u32(arg0->byte_e) & ~0xffu);  // (from the original)
    return arg0.addr();
}

}  // namespace d_005a064c
GUEST_EXPORT_FRAMED(0x005a064c, d_005a064c::f_005a064c, 0x4010);  // pushes {r4, lr} first, as the original

// f_005a06b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a06b4 {

inline constexpr guest::Function<0x002f777c, u32(u32, u32)> do_nothing_002f777c;

u32 f_005a06b4(u32 r0) {
    return do_nothing_002f777c(r0, guest::cpu()->r[1]);
}

}  // namespace d_005a06b4
GUEST_EXPORT(0x005a06b4, d_005a06b4::f_005a06b4);

// f_005a06d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a06d4 {

struct __attribute__((packed)) Local_005a06d4_r3_1 {
    u8 unknown_0[0x1];  // (not used here)
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Local_005a06d4_r3_1, byte_1, 0x1);
GUEST_OFFSET(Local_005a06d4_r3_1, byte_2, 0x2);

inline constexpr u32 global_009b41c4_address = 0x009b41c4u;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> read_global_byte_2;

u32 f_005a06d4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = r0;
    u32 r5 = r1;
    if (r2 == 0xa5u) {  // (from the original)
        u32 r0_1 = read_global_byte_2(r0, r1, r2, r3);
        r2 = r0_1;
    }
    r1 = global_009b41c4_address;
    r0 = 0u;
    do {
        u32 r6_1 = r0 * 5u;
        gptr<Local_005a06d4_r3_1> r3_1 = gptr<Local_005a06d4_r3_1>(r6_1 + r1);
        u32 r12_1 = r3_1->byte_2;
        if (r12_1 != 0xa5u && *gptr<u8>(r1 + r6_1) == r4 && r3_1->byte_1 == r5 && r12_1 == r2) {  // (from the original)
            guest::cpu()->r[1] = r1;
            return r0;
        }
        r0 += 1u;
        guest::preempt();
    } while (s32(r0) < 0x20);  // (from the original)
    guest::cpu()->r[1] = r1;
    return ~0u;
}

}  // namespace d_005a06d4
GUEST_EXPORT_FRAMED(0x005a06d4, d_005a06d4::f_005a06d4, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005a08dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a08dc {

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr u32 global_009b41c4_address = 0x009b41c4u;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> copy_item_002fc8e8;
inline constexpr guest::Function<0x002fc900, u32(u32, u32, u32, u32)> mode_above_1;
inline constexpr guest::Function<0x00305f44, u32(u32)> query_current_main_object;
inline constexpr guest::Function<0x0030b6c4, u32(u32, u32, u32, u32)> main_object_idle;
inline constexpr guest::Function<0x005a064c, u32(u32, u32, u32, u32)> call_005a064c;
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> send_message;
inline constexpr guest::Function<0x00624f00, u32(u32, u32, u32, u32)> station_is_waited_for;

struct __attribute__((packed)) Frame_005a08dc {
    u8 unknown_0[0xc];  // (not read or written by name)
    u8 byte_c;
    u8 byte_d;
    u8 byte_e;
    u8 unknown_f[0x3];  // (not read or written by name)
    u8 byte_12;
    u8 byte_13;
    u8 byte_14;
    u8 unknown_15[0x7];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005a08dc, byte_c, 0xc);
GUEST_OFFSET(Frame_005a08dc, byte_d, 0xd);
GUEST_OFFSET(Frame_005a08dc, byte_e, 0xe);
GUEST_OFFSET(Frame_005a08dc, byte_12, 0x12);
GUEST_OFFSET(Frame_005a08dc, byte_13, 0x13);
GUEST_OFFSET(Frame_005a08dc, byte_14, 0x14);
GUEST_SIZE(Frame_005a08dc, 0x1c);

u32 f_005a08dc(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005a08dc> frame;  // the original's stack frame
    u32 r7 = r1;
    u32 r8 = r2;
    r1 = global_009b41c4_address;
    r2 = *frame.at<u32>(0x38);  // (from the original)
    u32 r12 = r0;
    u32 r9 = r3;
    u32 r6 = 0u;
L_5a0900:;
    if (*gptr<u8>(r6 + (r6 << 2) + r1 + 2u) != 0xa5u) {  // (from the original)
        r6 += 1u;
        if (s32(r6) < 0x20) {  // (from the original)
            guest::preempt();
            goto L_5a0900;
        }
        r6 = ~0u;
    } else if (r6 + 1u != 0) {
        u32 r0_1 = r6 + (r6 << 2);
        u32 r5 = r0_1 + r1;
        *gptr<u8>(r5) = u8(r7);
        *gptr<u8>(r5 + 1u) = u8(r8);
        *gptr<u8>(r5 + 2u) = u8(r9);
        *gptr<u8>(r5 + 4u) = u8(r12);
        if (r2 != 0) {
            u32 r0_2 = mode_above_1(r0_1, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_2 != 0) {
                u32 r0_3 = main_object_idle(r0_2, r1, r2, r3);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_3 != 0) {
                    u32 r0_5 = call_005a064c(frame.at(0).addr(), r1, r2, r3);
                    u32 r4_1 = frame.at(0).addr();
                    u32 r0_6 = query_current_main_object(r0_5);
                    u32 r3_2 = frame->byte_d;
                    u32 r1_2 = frame->byte_e;
                    frame->byte_c = u8((r0_6 & 3u | u32(frame->byte_c) & ~3u) & ~0xfcu);  // (from the original)
                    u32 r2_2 = r3_2 & ~0x3fu;  // (from the original)
                    frame->byte_d = u8(r2_2 | 0x20u);  // (from the original)
                    frame->byte_e = u8(r1_2 & ~0x3fu & ~0xc0u);  // (from the original)
                    frame->byte_13 = u8(r7);
                    frame->byte_14 = u8(r8);
                    copy_item_002fc8e8(r4_1, empty_item_address, r2_2, r3_2);
                    copy_item_002fc8e8(r4_1 + 4u, empty_item_address, guest::cpu()->r[2], guest::cpu()->r[3]);
                    copy_item_002fc8e8(r4_1 + 8u, empty_item_address, guest::cpu()->r[2], guest::cpu()->r[3]);
                    frame->byte_12 = u8(r9);
                    send_message(0x3au, 4u, frame.at(0).addr(), 0x16u);  // (from the original)
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                }
            }
            r7 = 1u;
            u32 r4 = r7;
            *gptr<u8>(r5 + 3u) = u8(r7);
            do {
                u32 r0_10 = station_is_waited_for(r4 & 0xffu, r1, r2, r3);  // (from the original)
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_10 != 0) {
                    r2 = *gptr<u8>(r5 + 3u);
                    r1 = r2 | lsl_r(r7, r4 & 0xff);  // (from the original)
                    *gptr<u8>(r5 + 3u) = u8(r1);
                }
                r4 += 1u;
                guest::preempt();
            } while (r4 < 4u);
            u32 r0_11 = *gptr<u8>(r5 + 4u);
            u32 zf_1 = r0_11 - 0x17u == 0;  // (from the original)
            if (!zf_1) {
                if (zf_1 || s32(r0_11) < 0x17) {  // (from the original)
                    if (r0_11 == 2u || r0_11 == 4u || r0_11 == 5u || r0_11 == 0x15u) {  // (from the original)
                        goto L_5a0a98;
                    }
                    guest::cpu()->r[1] = r1;
                    return r6;
                }
                if (r0_11 != 0x18u && r0_11 != 0x19u && r0_11 != 0x1au) {  // (from the original)
                    guest::cpu()->r[1] = r1;
                    return r6;
                }
            }
L_5a0a98:;
            *gptr<u8>(r5 + 3u) = u8(u32(*gptr<u8>(r5 + 3u)) | 0x10u);  // (from the original)
        }
    }
    guest::cpu()->r[1] = r1;
    return r6;
}

}  // namespace d_005a08dc
GUEST_EXPORT_FRAMED(0x005a08dc, d_005a08dc::f_005a08dc, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_005a0ab8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a0ab8 {

struct __attribute__((packed)) Local_005a0ab8_r5_1 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 unknown_3[0x1];  // (not used here)
    u8 byte_4;
};
GUEST_OFFSET(Local_005a0ab8_r5_1, byte_0, 0x0);
GUEST_OFFSET(Local_005a0ab8_r5_1, byte_1, 0x1);
GUEST_OFFSET(Local_005a0ab8_r5_1, byte_2, 0x2);
GUEST_OFFSET(Local_005a0ab8_r5_1, byte_4, 0x4);

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr u32 global_009b41c4_address = 0x009b41c4u;
inline constexpr guest::Function<0x00168868, u32(u32, u32, u32, u32)> call_00168868;

struct __attribute__((packed)) Frame_005a0ab8 {
    u32 word_0;
};
GUEST_OFFSET(Frame_005a0ab8, word_0, 0x0);
GUEST_SIZE(Frame_005a0ab8, 0x4);

void f_005a0ab8(u32 r0_unused, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_005a0ab8> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r4 = 0u;
    u32 r6 = 0xa5u;  // (from the original)
    u32 r7 = global_009b41c4_address;
    u32 r8 = empty_item_address;
    do {
        gptr<Local_005a0ab8_r5_1> r5_1 = gptr<Local_005a0ab8_r5_1>(r4 * 5u + r7);
        u32 r3_1 = r5_1->byte_2;
        if (r3_1 != 0xa5u) {  // (from the original)
            u32 r0_1 = r5_1->byte_4;
            if (r0_1 == 0x23u) {  // (from the original)
                r5_1->byte_2 = u8(r6);
            } else if (r0_1 == 0x24u) {  // (from the original)
                frame->word_0 = r8;
                u32 r1_1 = r5_1->byte_1;
                u32 r0_2 = r5_1->byte_0;
                call_00168868(r0_2, r1_1, 0u, r3_1);
                r1 = guest::cpu()->r[1];
                r5_1->byte_2 = u8(r6);
            }
        }
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 0x20);  // (from the original)
    guest::cpu()->r[1] = r1;
}

}  // namespace d_005a0ab8
GUEST_EXPORT_FRAMED(0x005a0ab8, d_005a0ab8::f_005a0ab8, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_005a0d3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a0d3c {

struct __attribute__((packed)) Object_005a0d3c_0 {
    u8 unknown_0[0x18];  // (not used here)
    u32 word_18;
    u32 word_1c;
    u8 unknown_20[0x8];  // (not used here)
    u8 byte_28;
};
GUEST_OFFSET(Object_005a0d3c_0, word_18, 0x18);
GUEST_OFFSET(Object_005a0d3c_0, word_1c, 0x1c);
GUEST_OFFSET(Object_005a0d3c_0, byte_28, 0x28);

struct __attribute__((packed)) Object_005a0d3c_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_005a0d3c_1, word_4, 0x4);

struct __attribute__((packed)) Local_005a0d3c_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005a0d3c_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_005a0d3c_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_005a0d3c_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_005a0d3c_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_005a0d3c_ea_3, word_4, 0x4);
GUEST_OFFSET(Local_005a0d3c_ea_3, word_8, 0x8);

struct __attribute__((packed)) Local_005a0d3c_r3_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_005a0d3c_r3_3, word_0, 0x0);
GUEST_OFFSET(Local_005a0d3c_r3_3, word_4, 0x4);
GUEST_OFFSET(Local_005a0d3c_r3_3, word_8, 0x8);

inline constexpr u32 global_00975bee_address = 0x00975beeu;
inline constexpr u32 global_00ae5658_address = 0x00ae5658u;
inline constexpr u32 global_00ae5664_address = 0x00ae5664u;
inline constexpr guest::Function<0x002073dc, u32(u32, u32, u32, u32)> call_002073dc;
inline constexpr guest::Function<0x002e5ed8, u32(u32, u32)> call_002e5ed8;
inline constexpr guest::Function<0x002e627c, u32(u32, u32)> call_002e627c;
inline constexpr guest::Function<0x002e668c, u32(u32, u32)> call_002e668c;
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> random_below;
inline constexpr guest::Function<0x0052e294, u32(u32, u32, u32, u32)> Matrix34__from_position_and_angles;
inline constexpr guest::Function<0x005c08dc, u32(u32, u32, u32, u32)> slot_object_words_47c_480;

struct __attribute__((packed)) Frame_005a0d3c {
    u8 unknown_0[0x4];  // (not read or written by name)
    u32 word_4;
    u8 unknown_8[0x48];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005a0d3c, word_4, 0x4);
GUEST_SIZE(Frame_005a0d3c, 0x50);

void f_005a0d3c(gptr<Object_005a0d3c_0> arg0, gptr<Object_005a0d3c_1> arg1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005a0d3c> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r5 = r0;
    u32 r2_1 = r2 + r5;
    arg0->byte_28 = 0xf;  // (from the original)
    u32 r6 = r3;
    *gptr<u8>(r2_1 + 0x20u) = 0x5a;  // (from the original)
    u32 random = random_below(r3 == 0 ? arg0->word_1c : arg0->word_18, 0x5au, r2_1, r3);  // (from the original)
    u32 r8 = random;
    u32 r4 = arg1->word_4;
    u32 r7 = 0u;
    u32 r0_4 = slot_object_words_47c_480(frame.at(0).addr(), frame.at(4).addr(), 4u, 1u);
    r1 = 0u;
    if (r0_4 == 0) {
        r6 = 0u;
        *frame.at<u32>(0) = r1;
        frame->word_4 = r1;
    }
    u32 r3_1 = *frame.at<u32>(0);
    u32 r0_5 = frame->word_4;
    r2 = r3_1 - 1u;
    u32 r12 = r0_5 - 1u;
    r3 = r3_1 + 1u;
    u32 r9 = r0_5 + 1u;
    if (r4 != 0) {
        do {
            u32 r0_6 = *gptr<u32>(r4 + 0x68u);  // (from the original)
            if ((r0_6 & 0x10u) != 0 && (r0_6 & 0x20u) == 0 && *gptr<u8>(r4 + 0x11bu) == 0) {  // (from the original)
                if (r6 != 0) {
                    u32 r0_7 = *gptr<u32>(r4 + 0x28u);  // (from the original)
                    u32 res_1 = r0_7 - r2;
                    u32 nf_1 = res_1 >> 0x1f;  // (from the original)
                    u32 vf_1 = ((r0_7 ^ r2) & (r0_7 ^ res_1)) >> 0x1f;  // (from the original)
                    if (nf_1 == vf_1) {
                        u32 res_2 = r3 - r0_7;
                        nf_1 = res_2 >> 0x1f;  // (from the original)
                        vf_1 = ((r3 ^ r0_7) & (r3 ^ res_2)) >> 0x1f;  // (from the original)
                    }
                    if (nf_1 != vf_1) {
                        goto L_5a0e28;
                    }
                    u32 r0_8 = *gptr<u32>(r4 + 0x2cu);  // (from the original)
                    u32 res_3 = r12 - r0_8;
                    u32 nf_2 = res_3 >> 0x1f;  // (from the original)
                    u32 zf_1 = res_3 == 0;
                    u32 vf_2 = ((r12 ^ r0_8) & (r12 ^ res_3)) >> 0x1f;  // (from the original)
                    if (zf_1 || nf_2 != vf_2) {
                        u32 res_4 = r0_8 - r9;
                        nf_2 = res_4 >> 0x1f;  // (from the original)
                        zf_1 = res_4 == 0;
                        vf_2 = ((r0_8 ^ r9) & (r0_8 ^ res_4)) >> 0x1f;  // (from the original)
                    }
                    if (!zf_1 && nf_2 == vf_2) {
                        goto L_5a0e28;
                    }
                    if (r7 == r8) {
                        goto L_5a0e3c;
                    }
                } else if (r7 == r8) {
                    goto L_5a0e3c;
                }
                r7 += 1u;
            }
L_5a0e28:;
            r4 = *gptr<u32>(r4 + 8u);
            guest::preempt();
        } while (r4 != 0);
    }
    guest::cpu()->r[1] = r1;
    return;
L_5a0e3c:;
    if (r4 != 0) {
        u32 r0_9 = *gptr<u32>(r5 + 0xcu);  // (from the original)
        if (r0_9 == 0 || *gptr<u32>(r5 + 0x10u) != *gptr<u32>(r0_9 + 0xcu)) {  // (from the original)
            *frame.at<u32>(0) = 0xae5664;  // (from the original)
            gptr<Local_005a0d3c_ea_2> ea_2 = gptr<Local_005a0d3c_ea_2>(frame.at(4).addr());
            ea_2->word_0 = 1;
            ea_2->word_4 = r1;
            call_002073dc(r5, 0xfau, global_00ae5658_address, global_00975bee_address);  // (from the original)
            call_002e627c(r5, 1u);
        }
        gptr<Local_005a0d3c_r3_3> r3_3 = gptr<Local_005a0d3c_r3_3>(frame.at(0x40).addr());  // (from the original)
        gptr<Local_005a0d3c_ea_3> ea_3 = gptr<Local_005a0d3c_ea_3>(r4 + 0x40u);  // (from the original)
        u32 r1_2 = ea_3->word_4;
        u32 r2_3 = ea_3->word_8;
        r3_3->word_0 = ea_3->word_0;
        r3_3->word_4 = r1_2;
        r3_3->word_8 = r2_3;
        *frame.at<u16>(0) = 0;
        Matrix34__from_position_and_angles(frame.at(0x10).addr(), frame.at(0x40).addr(), *frame.at<u32>(0), r3_3.addr());  // (from the original)
        call_002e668c(r5, frame.at(0x10).addr());  // (from the original)
        call_002e5ed8(r5, global_00ae5658_address);
        *gptr<u8>(r4 + 0x11bu) = 0x2d;  // (from the original)
        *gptr<u32>(r4 + 0x68u) = *gptr<u32>(r4 + 0x68u) | 0x20u;  // (from the original)
        return;
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_005a0d3c
GUEST_EXPORT_FRAMED(0x005a0d3c, d_005a0d3c::f_005a0d3c, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_005a0ef8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a0ef8 {

struct __attribute__((packed)) Local_005a0ef8_r3_1 {
    u8 unknown_0[0xe];  // (not used here)
    u8 byte_e;
    u8 byte_f;
    u8 unknown_10[0x1];  // (not used here)
    u8 byte_11;
    u8 unknown_12[0x3];  // (not used here)
    u8 byte_15;
};
GUEST_OFFSET(Local_005a0ef8_r3_1, byte_e, 0xe);
GUEST_OFFSET(Local_005a0ef8_r3_1, byte_f, 0xf);
GUEST_OFFSET(Local_005a0ef8_r3_1, byte_11, 0x11);
GUEST_OFFSET(Local_005a0ef8_r3_1, byte_15, 0x15);

inline constexpr u32 global_009b4264_address = 0x009b4264u;

u32 f_005a0ef8(u32 r0, u32 r1, u32 r2) {
    u32 r12 = global_009b4264_address;
    u32 r4 = r0;
    r0 = 0u;
    do {
        gptr<Local_005a0ef8_r3_1> r3_1 = gptr<Local_005a0ef8_r3_1>(r12 + (r0 * 3u + (r0 << 3) << 1));
        if (r3_1->byte_11 != 0 && r3_1->byte_e == r4 && r3_1->byte_f == r1 && r3_1->byte_15 == r2) {
            return r0;
        }
        r0 += 1u;
        guest::preempt();
    } while (s32(r0) < 0x20);  // (from the original)
    return ~0u;
}

}  // namespace d_005a0ef8
GUEST_EXPORT_FRAMED(0x005a0ef8, d_005a0ef8::f_005a0ef8, 0x30);  // pushes {r4, r5} first, as the original

// f_005a1174: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a1174 {

struct __attribute__((packed)) Object_005a1174_0 {
    u8 unknown_0[0xc];  // (not used here)
    u8 byte_c;
    u8 byte_d;
    u8 byte_e;
    u8 byte_f;
};
GUEST_OFFSET(Object_005a1174_0, byte_c, 0xc);
GUEST_OFFSET(Object_005a1174_0, byte_d, 0xd);
GUEST_OFFSET(Object_005a1174_0, byte_e, 0xe);
GUEST_OFFSET(Object_005a1174_0, byte_f, 0xf);

inline constexpr u32 global_0095c6d0_address = 0x0095c6d0u;
inline constexpr u32 global_0095c71c_address = 0x0095c71cu;
inline guest::global<u32, 0x0095c6d0> global_0095c6d0;
inline guest::global<u32, 0x0095c71c> global_0095c71c;
inline constexpr guest::Function<0x001b7ce8, u32(u32, u32, u32, u32)> call_001b7ce8;
inline constexpr guest::Function<0x0024b7b8, u32(u32, u32)> add_to_current_player_counter;
inline constexpr guest::Function<0x002a7de4, u32(u32, u32)> decrement_countdown;
inline constexpr guest::Function<0x002fcb34, u32(u32, u32)> Item__category;
inline constexpr guest::Function<0x002fcb84, u32(u32, u32)> Item__has_number;
inline constexpr guest::Function<0x002fccdc, u32(u32, u32)> indexed_item_type;
inline constexpr guest::Function<0x00305f2c, u32(u32, u32)> read_global_object_byte;
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> query_current_main_object;
inline constexpr guest::Function<0x00315788, u32(u32, u32, u32)> terrain_at_world;
inline constexpr guest::Function<0x006b9d78, u32(u32)> call_006b9d78;
inline constexpr guest::Function<0x006e0890, u32(u32)> read_u8_0x009507f0_;
inline constexpr guest::Function<0x006f0130, u32(u32, u32)> call_006f0130;
inline constexpr guest::Function<0x0076e6cc, u32(u32)> call_0076e6cc;

void f_005a1174(gptr<Object_005a1174_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = query_current_main_object(arg0.addr(), r1, r2, r3);
    u32 r1_1 = arg0->byte_d;
    if (r0_1 == r1_1) {
        u32 r0_2 = read_global_object_byte(r0_1, r1_1);
        r1_1 = guest::cpu()->r[1];
        if (r0_2 != 3u) {
            u32 r0_3 = indexed_item_type(r1, r1_1);
            u32 r0_4 = call_006b9d78(r0_3);
            if (r0_4 != 0) {
                call_006f0130(4u, 1u);
                u32 r0_5 = add_to_current_player_counter(9u, 1u);
                frame.release();
                decrement_countdown(r0_5, guest::cpu()->r[1]);
                return;
            }
            u32 r0_7 = call_0076e6cc(*global_0095c6d0);
            if (r0_7 == 1u) {
                u32 r1_6 = arg0->byte_f;
                u32 r0_8 = arg0->byte_e;
                u32 r0_9 = terrain_at_world(r0_8, r1_6, 0u);
                if (r0_9 == 0xacu) {  // (from the original)
                    u32 r0_10 = read_u8_0x009507f0_(r0_9);
                    if (r0_10 != 0) {
                        u32 r0_11 = *global_0095c71c;
                        if (r0_11 != 0) {
                            u32 r1_7 = arg0->byte_d;
                            call_001b7ce8(r0_11, r1_7, 1u, r1);
                        }
                    }
                }
            }
            u32 r0_13 = call_0076e6cc(*global_0095c6d0);
            r1_1 = guest::cpu()->r[1];
            if (r0_13 != 1u) {
                u32 category = Item__category(arg0.addr() + 8u, r1_1);
                if (category != 0x36u) {  // (from the original)
                    u32 r0_17 = Item__has_number(arg0.addr() + 8u, 0x3413u);  // (from the original)
                    r1_1 = guest::cpu()->r[1];
                    if (r0_17 == 0 || (u32(arg0->byte_c) & 2u) != 0) {
                        return;
                    }
                }
                call_006f0130(3u, 1u);
                u32 r0_18 = add_to_current_player_counter(9u, 1u);
                frame.release();
                decrement_countdown(r0_18, guest::cpu()->r[1]);
                return;
            }
        }
    }
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_005a1174
GUEST_EXPORT(0x005a1174, d_005a1174::f_005a1174);

// f_005a1ba0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a1ba0 {

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x00168868, u32(u32, u32, u32, u32)> call_00168868;
inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32, u32)> construct_empty_item;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> copy_item_002fc8e8;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> construct_item;
inline constexpr guest::Function<0x002fccc4, u32(u32)> item_number_is_indexed;
inline constexpr guest::Function<0x0059a2d8, u32(u32, u32, u32, u32)> fgobj__ObjectBury__ObjectBury;
inline constexpr guest::Function<0x0059e65c, u32(u32, u32, u32)> clear_field_tile;

struct __attribute__((packed)) Frame_005a1ba0 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005a1ba0, word_0, 0x0);
GUEST_SIZE(Frame_005a1ba0, 0x8);

u32 f_005a1ba0(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005a1ba0> frame;  // the original's stack frame
    construct_empty_item(frame.at(4).addr(), r1, r2, r3);
    u32 r0_2 = item_number_is_indexed(r0);
    if (r0_2 != 0) {
        copy_item_002fc8e8(frame.at(4).addr(), r0);
    } else {
        u32 r0_4 = frame.at(0).addr();
        construct_item(r0_4, 0x9eu);  // (from the original)
        copy_item_002fc8e8(frame.at(4).addr(), r0_4);
    }
    frame->word_0 = r2;
    u32 r2_4 = *gptr<u8>(r0 + 0xfu);  // (from the original)
    u32 r1_2 = *gptr<u8>(r0 + 0xeu);  // (from the original)
    u32 r0_7 = fgobj__ObjectBury__ObjectBury(frame.at(4).addr(), r1_2, r2_4, r1 == 0 ? 0u : 2u);
    if (r0_7 != 0) {
        frame->word_0 = 0x95bfdc;  // (from the original)
        u32 r3_4 = *gptr<u8>(r0 + 0x15u);  // (from the original)
        u32 r1_4 = *gptr<u8>(r0 + 0xfu);  // (from the original)
        u32 r0_8 = *gptr<u8>(r0 + 0xeu);  // (from the original)
        call_00168868(r0_8, r1_4, u32(*gptr<u8>(r0 + 0xcu)) & 1u, r3_4);  // (from the original)
        u32 r1_5 = *gptr<u8>(r0 + 0xfu);  // (from the original)
        u32 r0_9 = *gptr<u8>(r0 + 0xeu);  // (from the original)
        clear_field_tile(r0_9, r1_5, 0u);
        return 1u;
    }
    return 0u;
}

}  // namespace d_005a1ba0
GUEST_EXPORT_FRAMED(0x005a1ba0, d_005a1ba0::f_005a1ba0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005a213c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a213c {

struct __attribute__((packed)) Object_005a213c_0 {
    u8 unknown_0[0xc];  // (not used here)
    u8 byte_c;
    u8 unknown_d[0x1];  // (not used here)
    u8 byte_e;
    u8 byte_f;
    u8 unknown_10[0x5];  // (not used here)
    u8 byte_15;
};
GUEST_OFFSET(Object_005a213c_0, byte_c, 0xc);
GUEST_OFFSET(Object_005a213c_0, byte_e, 0xe);
GUEST_OFFSET(Object_005a213c_0, byte_f, 0xf);
GUEST_OFFSET(Object_005a213c_0, byte_15, 0x15);

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr u32 global_00975bee_address = 0x00975beeu;
inline constexpr u32 global_00ae5664_address = 0x00ae5664u;
inline constexpr guest::Function<0x00168868, u32(u32, u32, u32, u32)> call_00168868;
inline constexpr guest::Function<0x002075d4, u32(u32, u32, u32, u32)> call_002075d4;
inline constexpr guest::Function<0x00250354, u32(u32, u32)> call_00250354;
inline constexpr guest::Function<0x002504d4, u32(u32, u32)> call_002504d4;
inline constexpr guest::Function<0x00250510, u32(u32)> SoundObj_1___SoundObj_00250510;
inline constexpr guest::Function<0x00250560, u32(u32)> SoundObj_1___SoundObj_00250560;
inline constexpr guest::Function<0x0059a9ac, u32(u32, u32, u32, u32)> call_0059a9ac;
inline constexpr guest::Function<0x0059b080, u32(u32, u32, u32, u32)> fgobj__ObjectThrow__ObjectThrow;
inline constexpr guest::Function<0x0059e65c, u32(u32, u32, u32)> clear_field_tile;

struct __attribute__((packed)) Frame_005a213c {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x64];  // (not read or written by name)
    float float_6c;
    u8 unknown_70[0x10];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005a213c, word_0, 0x0);
GUEST_OFFSET(Frame_005a213c, word_4, 0x4);
GUEST_OFFSET(Frame_005a213c, float_6c, 0x6c);
GUEST_SIZE(Frame_005a213c, 0x80);

u32 f_005a213c(gptr<Object_005a213c_0> arg0, float S0, float S1) {
    guest::StackFrameOf<Frame_005a213c> frame;  // the original's stack frame
    frame->word_0 = 0;
    u32 r3_1 = arg0->byte_f;
    u32 r2_1 = arg0->byte_e;
    call_0059a9ac(frame.at(0x68).addr(), arg0.addr(), r2_1, r3_1);  // (from the original)
    frame->word_0 = 1;
    frame->word_4 = 0;
    call_002075d4(0x1f6u, frame.at(0x68).addr(), global_00975bee_address, global_00ae5664_address);  // (from the original)
    u32 r2_2 = arg0->byte_e;
    u32 r3_2 = arg0->byte_f;
    frame->word_0 = 0;
    call_0059a9ac(frame.at(0x74).addr(), arg0.addr(), r2_2, r3_2);  // (from the original)
    SoundObj_1___SoundObj_00250510(frame.at(8).addr());
    call_00250354(frame.at(8).addr(), frame.at(0x74).addr());  // (from the original)
    call_002504d4(frame.at(8).addr(), 0x100062du);  // (from the original)
    SoundObj_1___SoundObj_00250560(frame.at(8).addr());
    frame->word_0 = 0x95bfdc;  // (from the original)
    u32 r3_7 = arg0->byte_15;
    u32 r1_5 = arg0->byte_f;
    u32 r0_7 = arg0->byte_e;
    call_00168868(r0_7, r1_5, u32(arg0->byte_c) & 1u, r3_7);
    u32 r1_6 = arg0->byte_f;
    u32 r0_8 = arg0->byte_e;
    clear_field_tile(r0_8, r1_6, 0u);
    float S1_9 = 10.0f;
    frame->float_6c = frame->float_6c + S1_9;
    frame->word_0 = frame.at(0x68).addr();  // (from the original)
    u32 r2_8 = arg0->byte_f;
    u32 r1_7 = arg0->byte_e;
    float S0_9 = 0.0f;
    guest::cpu()->s[0] = S0_9;
    guest::cpu()->s[1] = S1_9;
    fgobj__ObjectThrow__ObjectThrow(arg0.addr() + 4u, r1_7, r2_8, 0u);
    return 1u;
}

}  // namespace d_005a213c
GUEST_EXPORT_FRAMED(0x005a213c, d_005a213c::f_005a213c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005a224c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a224c {

struct __attribute__((packed)) Local_005a224c_r4_1 {
    u8 unknown_0[0x10];  // (not used here)
    u8 byte_10;
    u8 byte_11;
};
GUEST_OFFSET(Local_005a224c_r4_1, byte_10, 0x10);
GUEST_OFFSET(Local_005a224c_r4_1, byte_11, 0x11);

inline constexpr u32 global_009b4264_address = 0x009b4264u;
inline constexpr guest::Function<0x005a0ef8, u32(u32, u32, u32, u32)> call_005a0ef8;
inline constexpr guest::Function<0x005a0f5c, u32(u32, u32)> call_005a0f5c;
inline constexpr guest::Function<0x005a2438, u32(u32)> call_005a2438;

void f_005a224c(u32 r0, u32 r1) {
    u32 r0_1 = call_005a0ef8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 + 1u == 0) {
        return;
    }
    gptr<Local_005a224c_r4_1> r4_1 = gptr<Local_005a224c_r4_1>((r0_1 * 3u + (r0_1 << 3) << 1) + global_009b4264_address);
    call_005a0f5c(r4_1.addr(), global_009b4264_address);
    call_005a2438(r4_1.addr());
    r4_1->byte_10 = 0;
    r4_1->byte_11 = 0;
}

}  // namespace d_005a224c
GUEST_EXPORT_FRAMED(0x005a224c, d_005a224c::f_005a224c, 0x4010);  // pushes {r4, lr} first, as the original

// f_005a2400: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a2400 {

inline constexpr u32 global_009b4264_address = 0x009b4264u;
inline constexpr guest::Function<0x005a180c, u32(u32, u32, u32, u32)> call_005a180c;

u32 f_005a2400() {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r4 = 0u;
    u32 r5 = global_009b4264_address;
    do {
        r0_1 = r5 + (r4 * 3u + (r4 << 3) << 1);
        r1_1 = *gptr<u8>(r0_1 + 0x11u);  // (from the original)
        if (r1_1 != 0) {
            r0_1 = call_005a180c(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1_1 = guest::cpu()->r[1];
        }
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 0x20);  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_005a2400
GUEST_EXPORT_FRAMED(0x005a2400, d_005a2400::f_005a2400, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005a2438: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a2438 {

struct __attribute__((packed)) Object_005a2438_0 {
    u8 unknown_0[0xe];  // (not used here)
    u8 byte_e;
    u8 byte_f;
    u8 unknown_10[0x5];  // (not used here)
    u8 byte_15;
};
GUEST_OFFSET(Object_005a2438_0, byte_e, 0xe);
GUEST_OFFSET(Object_005a2438_0, byte_f, 0xf);
GUEST_OFFSET(Object_005a2438_0, byte_15, 0x15);

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> copy_item_002fc8e8;
inline constexpr guest::Function<0x002fc900, u32(u32)> mode_above_1;
inline constexpr guest::Function<0x00305f44, u32(u32)> query_current_main_object;
inline constexpr guest::Function<0x0030b6c4, u32(u32)> main_object_idle;
inline constexpr guest::Function<0x0059f4d8, u32(u32)> call_0059f4d8;
inline constexpr guest::Function<0x005a064c, u32(u32, u32, u32, u32)> call_005a064c;
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> send_message;

struct __attribute__((packed)) Frame_005a2438 {
    u8 unknown_0[0xc];  // (not read or written by name)
    u8 byte_c;
    u8 byte_d;
    u8 byte_e;
    u8 unknown_f[0x3];  // (not read or written by name)
    u8 byte_12;
    u8 byte_13;
    u8 byte_14;
    u8 unknown_15[0x7];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005a2438, byte_c, 0xc);
GUEST_OFFSET(Frame_005a2438, byte_d, 0xd);
GUEST_OFFSET(Frame_005a2438, byte_e, 0xe);
GUEST_OFFSET(Frame_005a2438, byte_12, 0x12);
GUEST_OFFSET(Frame_005a2438, byte_13, 0x13);
GUEST_OFFSET(Frame_005a2438, byte_14, 0x14);
GUEST_SIZE(Frame_005a2438, 0x1c);

u32 f_005a2438(gptr<Object_005a2438_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005a2438> frame;  // the original's stack frame
    u32 r0_1 = frame.at(0).addr();
    call_005a064c(r0_1, r1, r2, r3);
    u32 r7_1 = arg0->byte_e;
    u32 r6_1 = arg0->byte_f;
    u32 r4_1 = arg0->byte_15;
    u32 r5_1 = frame.at(0).addr();
    u32 r0_2 = query_current_main_object(r0_1);
    u32 r3_2 = (r0_2 & 3u | u32(frame->byte_c) & ~3u) & ~0xfcu;  // (from the original)
    u32 r2_2 = u32(frame->byte_d) & ~0x3fu;  // (from the original)
    u32 r0_3 = u32(frame->byte_e) & ~0x3fu;  // (from the original)
    frame->byte_c = u8(r3_2);
    frame->byte_d = u8(r2_2 | 0x10u);  // (from the original)
    frame->byte_e = u8(r0_3 & ~0xc0u);  // (from the original)
    frame->byte_13 = u8(r7_1);
    frame->byte_14 = u8(r6_1);
    copy_item_002fc8e8(r5_1, empty_item_address, r2_2, r3_2);
    copy_item_002fc8e8(r5_1 + 4u, empty_item_address, guest::cpu()->r[2], guest::cpu()->r[3]);
    copy_item_002fc8e8(r5_1 + 8u, empty_item_address, guest::cpu()->r[2], guest::cpu()->r[3]);
    frame->byte_12 = u8(r4_1);
    u32 r0_6 = mode_above_1(r5_1 + 8u);
    if (r0_6 != 0) {
        u32 r0_7 = main_object_idle(r0_6);
        if (r0_7 == 0) {
            send_message(0x3au, 0u, frame.at(0).addr(), 0x16u);  // (from the original)
            return frame.at(0).addr();
        }
    }
    call_0059f4d8(frame.at(0).addr());
    return frame.at(0).addr();
}

}  // namespace d_005a2438
GUEST_EXPORT_FRAMED(0x005a2438, d_005a2438::f_005a2438, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_005a2534: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a2534 {

struct __attribute__((packed)) Local_005a2534_r5_1 {
    u8 unknown_0[0x10];  // (not used here)
    u8 byte_10;
    u8 byte_11;
};
GUEST_OFFSET(Local_005a2534_r5_1, byte_10, 0x10);
GUEST_OFFSET(Local_005a2534_r5_1, byte_11, 0x11);

inline constexpr u32 global_009b4264_address = 0x009b4264u;
inline constexpr guest::Function<0x005a0f5c, u32(u32, u32, u32, u32)> call_005a0f5c;
inline constexpr guest::Function<0x005a2438, u32(u32)> call_005a2438;

u32 f_005a2534() {
    u32 r0_1 = 0;
    u32 r4 = 0u;
    u32 r6 = r4;
    u32 r7 = global_009b4264_address;
    do {
        gptr<Local_005a2534_r5_1> r5_1 = gptr<Local_005a2534_r5_1>(r7 + (r4 * 3u + (r4 << 3) << 1));
        r0_1 = r5_1->byte_11;
        if (r0_1 != 0) {
            call_005a0f5c(r5_1.addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            r0_1 = call_005a2438(r5_1.addr());
            r5_1->byte_10 = u8(r6);
            r5_1->byte_11 = u8(r6);
        }
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 0x20);  // (from the original)
    return r0_1;
}

}  // namespace d_005a2534
GUEST_EXPORT_FRAMED(0x005a2534, d_005a2534::f_005a2534, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_005a2624: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a2624 {

struct __attribute__((packed)) Local_005a2624_r0_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Local_005a2624_r0_1, word_4, 0x4);


u32 f_005a2624(u32 r0, u32 r1, u32 r2) {
    u32 nf_1 = r1 >> 0x1f;  // (from the original)
    if (nf_1 == 0u) {
        nf_1 = r2 >> 0x1f;  // (from the original)
    }
    if (nf_1 != 0u || r1 >= 0x70u || r2 >= 0x60u) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    u32 r1_1 = r1 + r2 * 0x70u;  // (from the original)
    gptr<Local_005a2624_r0_1> r0_1 = gptr<Local_005a2624_r0_1>(r0 + (u32(s32(r1_1) >> 5) << 2));
    u32 r1_2 = r0_1->word_4 | 1u << (r1_1 & 0x1fu);  // (from the original)
    r0_1->word_4 = r1_2;
    guest::cpu()->r[1] = r1_2;
    return r0_1.addr();
}

}  // namespace d_005a2624
GUEST_EXPORT(0x005a2624, d_005a2624::f_005a2624);

// f_005a2664: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a2664 {

inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;

void f_005a2664(u32 r0) {
    clear_aligned(r0 + 4u, 0x540u);  // (from the original)
    return;  // (from the original)
}

}  // namespace d_005a2664
GUEST_EXPORT(0x005a2664, d_005a2664::f_005a2664);

// f_005a2804: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a2804 {

inline constexpr u32 global_0094ee58_address = 0x0094ee58u;
inline guest::global<u32, 0x0094ee58> global_0094ee58;

u32 f_005a2804(u32 r0, u32 r1) {
    u32 r2_1 = *global_0094ee58;
    if (r2_1 == 0) {
        return 0u;
    }
    u32 r0_1 = r1 + (r0 + (r0 << 2) << 1);
    u32 r1_1 = *gptr<u32>(r2_1 + (r0_1 + (r0_1 << 2) + (r0_1 << 6) << 2) + 0x10u);  // (from the original)
    u32 r0_2 = 0u;
    u32 ea_1 = r1_1 + 0x28u;  // (from the original)
    u32 r2_2 = *gptr<u32>(ea_1);
    u32 r1_2 = r2_2 == 0 ? r0_2 : ea_1 + r2_2;
    if (r1_2 == 0) {
        return 0u;
    }
    u32 ea_2 = r1_2 + 0x28u;  // (from the original)
    u32 r2_3 = *gptr<u32>(ea_2);
    if (r2_3 != 0) {
        r0_2 = r2_3 + ea_2;
    }
    return r0_2;
}

}  // namespace d_005a2804
GUEST_EXPORT(0x005a2804, d_005a2804::f_005a2804);

// f_005a2864: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a2864 {

inline constexpr u32 current_player_data_address = 0x00aaf14cu;
inline guest::global<u16, 0x009526b0> global_009526b0;
inline guest::global<u8, 0x009526b2> global_009526b2;
inline guest::global<u8, 0x009526b3> global_009526b3;
inline guest::global<u8, 0x009526b4> global_009526b4;
inline guest::global<u8, 0x009526b5> global_009526b5;
inline guest::global<u8, 0x009526b6> global_009526b6;
inline guest::global<u32, 0x00aaf14c> current_player_data;
inline constexpr guest::Function<0x002fcb84, u32(u32, u32)> Item__has_number;
inline constexpr guest::Function<0x00565c10, u32(u32)> random_up_to;
inline constexpr guest::Function<0x0071a844, u32(u32)> slot_7_if_class_7;

u32 f_005a2864(u32 r0, u32 r1, float S0) {
    u32 r5_1 = r1;
    if (*global_009526b5 != 0) {
        u32 r0_1 = *global_009526b0;
        if (r0_1 != 0) {
            u32 r0_2 = *global_009526b4;
            if (r0_2 < 8u) {
                r1 = *global_009526b2;
                u32 zf_1 = r1 == r0;
                if (zf_1) {
                    r1 = *global_009526b3;
                    zf_1 = r1 == r5_1;
                }
                if (zf_1) {
                    *global_009526b4 = u8(r0_2 + 1u);
                    guest::cpu()->r[1] = r1;
                    return 1u;
                }
            }
            r0_1 = 0u;
        }
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    *global_009526b5 = 1;
    u32 r0_3 = *current_player_data;
    if (r0_3 != 0) {
        u32 r0_5 = slot_7_if_class_7(r0_3 + 0xau);  // (from the original)
        u32 r0_6 = Item__has_number(r0_5, 0x335au);  // (from the original)
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        if (r0_6 != 0) {
            float S0_2 = 100.0f;
            guest::cpu()->s[0] = S0_2;
            random_up_to(r0_6);
            S0 = guest::cpu()->s[0];
            r1 = 0x41a00000u;  // (from the original)
            if (s32(std::bit_cast<u32>(S0)) <= s32(r1)) {
                *global_009526b6 = 1;
            } else {
                *global_009526b6 = 0;
            }
        } else {
            *global_009526b6 = 0;
        }
    } else {
        *global_009526b6 = 0;
    }
    *global_009526b0 = 0x10e;  // (from the original)
    *global_009526b2 = u8(r0);
    *global_009526b3 = u8(r5_1);
    *global_009526b4 = 1;
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return 1u;
}

}  // namespace d_005a2864
GUEST_EXPORT_FRAMED(0x005a2864, d_005a2864::f_005a2864, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_005a294c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a294c {

inline guest::global<u16, 0x009526b0> global_009526b0;
inline guest::global<u8, 0x009526b2> global_009526b2;
inline guest::global<u8, 0x009526b3> global_009526b3;
inline guest::global<u8, 0x009526b5> global_009526b5;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> copy_item_002fc934;
inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> GridMap__place_item_at_world;
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> GridMap__process_world_position;
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> get_object_009b4a24;
inline constexpr guest::Function<0x006b9904, u32(u32)> call_006b9904;

struct __attribute__((packed)) Frame_005a294c {
    u32 word_0;
    u8 unknown_4[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005a294c, word_0, 0x0);
GUEST_SIZE(Frame_005a294c, 0xc);

void f_005a294c(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005a294c> frame;  // the original's stack frame
    u32 r0_1 = *global_009526b5;
    u32 nf_1 = r0_1 >> 0x1f;  // (from the original)
    u32 zf_1 = r0_1 == 0;
    if (!zf_1) {
        r0_1 = s16(*global_009526b0);
        nf_1 = r0_1 >> 0x1f;  // (from the original)
        zf_1 = r0_1 == 0;
    }
    if (zf_1 || nf_1 != 0u) {
        return;
    }
    u32 r0_2 = sxth(r0_1 - 1u);
    *global_009526b0 = u16(r0_2);
    if (r0_2 != 0) {
        return;
    }
    u32 r0_3 = get_object_009b4a24(r0_2, r1, r2, r3);
    u32 r2_1 = *global_009526b3;
    u32 r1_1 = *global_009526b2;
    u32 r0_4 = GridMap__process_world_position(r0_3, r1_1, r2_1, 0u);
    copy_item_002fc934(frame.at(4).addr(), r0_4);
    call_006b9904(frame.at(4).addr());
    frame->word_0 = 0;
    u32 r3_3 = *global_009526b3;
    u32 r2_4 = *global_009526b2;
    GridMap__place_item_at_world(r0_3, frame.at(4).addr(), r2_4, r3_3);
}

}  // namespace d_005a294c
GUEST_EXPORT_FRAMED(0x005a294c, d_005a294c::f_005a294c, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_005a29dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a29dc {

inline guest::global<u16, 0x009526b0> global_009526b0;
inline guest::global<u8, 0x009526b2> global_009526b2;
inline guest::global<u8, 0x009526b3> global_009526b3;
inline guest::global<u8, 0x009526b5> global_009526b5;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> copy_item_002fc934;
inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> GridMap__place_item_at_world;
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> GridMap__process_world_position;
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> get_object_009b4a24;
inline constexpr guest::Function<0x006b9904, u32(u32)> call_006b9904;

struct __attribute__((packed)) Frame_005a29dc {
    u32 word_0;
    u8 unknown_4[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005a29dc, word_0, 0x0);
GUEST_SIZE(Frame_005a29dc, 0x8);

u32 f_005a29dc(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005a29dc> frame;  // the original's stack frame
    u32 r0_1 = *global_009526b5;
    u32 nf_1 = r0_1 >> 0x1f;  // (from the original)
    u32 zf_1 = r0_1 == 0;
    if (!zf_1) {
        r0_1 = s16(*global_009526b0);
        nf_1 = r0_1 >> 0x1f;  // (from the original)
        zf_1 = r0_1 == 0;
    }
    if (!zf_1 && nf_1 == 0u) {
        u32 r0_2 = get_object_009b4a24(r0_1, r1, r2, r3);
        u32 r2_1 = *global_009526b3;
        u32 r1_1 = *global_009526b2;
        u32 r0_3 = GridMap__process_world_position(r0_2, r1_1, r2_1, 0u);
        copy_item_002fc934(frame.at(4).addr(), r0_3);
        call_006b9904(frame.at(4).addr());
        frame->word_0 = 0;
        u32 r3_3 = *global_009526b3;
        u32 r2_4 = *global_009526b2;
        GridMap__place_item_at_world(r0_2, frame.at(4).addr(), r2_4, r3_3);
        r1 = guest::cpu()->r[1];
        r0_1 = frame.at(4).addr();
        *global_009526b0 = 0;
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_005a29dc
GUEST_EXPORT_FRAMED(0x005a29dc, d_005a29dc::f_005a29dc, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005a2fdc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a2fdc {

struct __attribute__((packed)) Object_005a2fdc_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_005a2fdc_0, word_0, 0x0);
GUEST_OFFSET(Object_005a2fdc_0, word_4, 0x4);

inline constexpr u32 global_00952898_address = 0x00952898u;
inline guest::global<u32, 0x00952898> global_00952898;
inline guest::global<u32, 0x0095289c> global_0095289c;

void f_005a2fdc(gptr<Object_005a2fdc_0> arg0) {
    u32 r2_1 = *global_0095289c;
    arg0->word_0 = *global_00952898;
    arg0->word_4 = r2_1;
}

}  // namespace d_005a2fdc
GUEST_EXPORT(0x005a2fdc, d_005a2fdc::f_005a2fdc);

// f_005a2ff0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a2ff0 {

struct __attribute__((packed)) Object_005a2ff0_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_005a2ff0_0, word_0, 0x0);
GUEST_OFFSET(Object_005a2ff0_0, word_4, 0x4);

inline constexpr u32 global_009528a0_address = 0x009528a0u;
inline guest::global<u32, 0x009528a0> global_009528a0;
inline guest::global<u32, 0x009528a4> global_009528a4;

void f_005a2ff0(gptr<Object_005a2ff0_0> arg0) {
    u32 r2_1 = *global_009528a4;
    arg0->word_0 = *global_009528a0;
    arg0->word_4 = r2_1;
}

}  // namespace d_005a2ff0
GUEST_EXPORT(0x005a2ff0, d_005a2ff0::f_005a2ff0);

// f_005a3004: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a3004 {

struct __attribute__((packed)) Object_005a3004_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_005a3004_0, word_0, 0x0);
GUEST_OFFSET(Object_005a3004_0, word_4, 0x4);

inline constexpr u32 global_009528a8_address = 0x009528a8u;
inline guest::global<u32, 0x009528a8> global_009528a8;
inline guest::global<u32, 0x009528ac> global_009528ac;

void f_005a3004(gptr<Object_005a3004_0> arg0) {
    u32 r2_1 = *global_009528ac;
    arg0->word_0 = *global_009528a8;
    arg0->word_4 = r2_1;
}

}  // namespace d_005a3004
GUEST_EXPORT(0x005a3004, d_005a3004::f_005a3004);

// f_005a3018: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a3018 {

struct __attribute__((packed)) Object_005a3018_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_005a3018_0, word_0, 0x0);
GUEST_OFFSET(Object_005a3018_0, word_4, 0x4);

inline constexpr u32 global_009528b0_address = 0x009528b0u;
inline guest::global<u32, 0x009528b0> global_009528b0;
inline guest::global<u32, 0x009528b4> global_009528b4;

void f_005a3018(gptr<Object_005a3018_0> arg0) {
    u32 r2_1 = *global_009528b4;
    arg0->word_0 = *global_009528b0;
    arg0->word_4 = r2_1;
}

}  // namespace d_005a3018
GUEST_EXPORT(0x005a3018, d_005a3018::f_005a3018);

// f_005a337c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a337c {

inline constexpr u32 global_00952894_address = 0x00952894u;
inline guest::global<u32, 0x00952894> global_00952894;

u32 f_005a337c() {
    u32 r0_1 = *global_00952894;
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    return r0_1;
}

}  // namespace d_005a337c
GUEST_EXPORT(0x005a337c, d_005a337c::f_005a337c);

// f_005a3394: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a3394 {

inline constexpr u32 global_0095288c_address = 0x0095288cu;
inline guest::global<u32, 0x00952894> global_00952894;

void f_005a3394() {
    *global_00952894 = 0xf;  // (from the original)
    guest::cpu()->r[1] = global_0095288c_address;
}

}  // namespace d_005a3394
GUEST_EXPORT(0x005a3394, d_005a3394::f_005a3394);

// f_005a3474: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a3474 {

inline constexpr u32 global_009c797c_address = 0x009c797cu;
inline guest::global<u8, 0x0095288c> global_0095288c;
inline guest::global<u32, 0x009c797c> global_009c797c;
inline guest::global<u32, 0x009c7980> global_009c7980;
inline constexpr guest::Function<0x001277dc, u32(u32, u32, u32, u32)> begin_command_write;
inline constexpr guest::Function<0x001279b4, u32(u32, u32)> advance_command_cursor;
inline constexpr guest::Function<0x001279cc, u32(u32)> close_command_segment;
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32)> copy_aligned_bytes;
inline constexpr guest::Function<0x0034ac5c, u32(u32)> call_0034ac5c;
inline constexpr guest::Function<0x005a2dc0, u32(u32)> call_005a2dc0;
inline constexpr guest::Function<0x00727528, u32(u32, u32, u32)> call_00727528;

struct __attribute__((packed)) Frame_005a3474 {
    u8 unknown_0[0xa8];  // (not read or written by name)
    u32 word_a8;
    u8 unknown_ac[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005a3474, word_a8, 0xa8);
GUEST_SIZE(Frame_005a3474, 0xb0);

u32 f_005a3474(u32 r0_unused, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_005a3474> frame;  // the original's stack frame
    u32 r0_1 = *global_0095288c;
    if (r0_1 == 0) {
        return r0_1;
    }
    begin_command_write(0x208u, frame.at(0xa8).addr(), r2, guest::cpu()->r[3]);  // (from the original)
    u32 r5_1 = frame->word_a8;
    u32 r0_2 = call_005a2dc0(r5_1);
    frame->word_a8 = r0_2;
    call_0034ac5c(frame.at(0).addr());
    u32 r0_5 = call_00727528(frame.at(0).addr(), frame->word_a8, 1u);
    frame->word_a8 = r0_5;
    copy_aligned_bytes(r0_5, *global_009c797c, *global_009c7980);
    u32 r1_6 = (*global_009c7980 & ~3u) + r0_5;
    frame->word_a8 = r1_6;
    u32 r0_7 = advance_command_cursor(r1_6 - r5_1 & ~3u, r1_6);
    u32 r0_8 = close_command_segment(r0_7);
    return r0_8;
}

}  // namespace d_005a3474
GUEST_EXPORT_FRAMED(0x005a3474, d_005a3474::f_005a3474, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005a3508: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a3508 {

inline constexpr u32 global_00952af0_address = 0x00952af0u;
inline constexpr u32 global_00952b20_address = 0x00952b20u;
inline constexpr u32 global_00952b58_address = 0x00952b58u;
inline constexpr u32 global_009c9fe0_address = 0x009c9fe0u;
inline constexpr u32 global_00a14380_address = 0x00a14380u;
inline constexpr u32 global_00a146c0_address = 0x00a146c0u;
inline constexpr guest::Function<0x00349878, u32(u32, u32, u32, u32)> call_00349878;
inline constexpr guest::Function<0x004f0568, u32(u32, u32, u32, u32)> call_004f0568;
inline constexpr guest::Function<0x00726d2c, u32(u32, u32, u32, u32)> call_00726d2c;

void f_005a3508(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r12 = guest::cpu()->r[12];
    *frame.at<u32>(0x20) = r12;  // (from the original)
    u32 r0_1 = call_004f0568(0u, r1, r2, r3);
    u32 r9 = global_00a14380_address;
    u32 r7 = r0_1;
    u32 r6 = 0u;
    u32 r10 = r9 + 0x180u;  // (from the original)
    do {
        u32 r8 = r6 * 0x128e8u + global_009c9fe0_address;  // (from the original)
        u32 r1_1 = *gptr<u32>(r7 + 0x1cu);  // (from the original)
        if (r1_1 != 0) {
            r1_1 += (r7 + 0x1cu);  // (from the original)
        }
        call_00349878(r8, r1_1, r6, ~0u);
        r3 = guest::cpu()->r[3];
        u32 r11 = global_00952af0_address;
        u32 r4 = 0u;
        u32 r5 = r9 + r6 * 0x60u;  // (from the original)
        do {
            call_00726d2c(r8, r5 + (r4 << 3), gptr<u32>(r11)[r4], r3);
            r3 = guest::cpu()->r[3];
            r4 += 1u;
            guest::preempt();
        } while (s32(r4) < 0xc);  // (from the original)
        r11 = global_00952b20_address;
        r4 = 0u;
        r5 = r10 + r6 * 0x70u;  // (from the original)
        do {
            call_00726d2c(r8, r5 + (r4 << 3), gptr<u32>(r11)[r4], r3);
            r3 = guest::cpu()->r[3];
            r4 += 1u;
            guest::preempt();
        } while (s32(r4) < 0xe);  // (from the original)
        r11 = global_00952b58_address;
        r4 = 0u;
        r5 = (r6 * 5u + (r6 << 3) << 3) + global_00a146c0_address;
        do {
            call_00726d2c(r8, r5 + (r4 << 3), gptr<u32>(r11)[r4], r3);
            r3 = guest::cpu()->r[3];
            r4 += 1u;
            guest::preempt();
        } while (s32(r4) < 0xd);  // (from the original)
        r6 += 1u;
        guest::preempt();
    } while (s32(r6) < 4);
}

}  // namespace d_005a3508
GUEST_EXPORT_FRAMED(0x005a3508, d_005a3508::f_005a3508, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_005a360c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a360c {

struct __attribute__((packed)) Object_005a360c_0 {
    u32 word_0;
    u8 unknown_4[0x68];  // (not used here)
    u32 word_6c;
};
GUEST_OFFSET(Object_005a360c_0, word_0, 0x0);
GUEST_OFFSET(Object_005a360c_0, word_6c, 0x6c);

inline constexpr u32 global_009c9fe0_address = 0x009c9fe0u;
inline constexpr u32 global_00a14380_address = 0x00a14380u;
inline constexpr u32 global_00a14500_address = 0x00a14500u;

u32 f_005a360c(gptr<Object_005a360c_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    arg0->word_6c = r1;
    u32 r12 = r0 + 4u;
    arg0->word_0 = r1 * 0x128e8u + global_009c9fe0_address;  // (from the original)
    u32 r2 = 0u;
    u32 r3 = r2;
    u32 r4 = r1 * 0x60u + global_00a14380_address;  // (from the original)
    do {
        *gptr<u32>(r12 + (r2 << 2)) = r4 + (r2 << 3);
        u32 r2_1 = r2 + 1u;
        r3 += 2u;
        *gptr<u32>(r12 + (r2_1 << 2)) = r4 + (r2_1 << 3);
        r2 = r2_1 + 1u;
        guest::preempt();
    } while (s32(r3) < 0xc);  // (from the original)
    r3 = r0 + 0x34u;  // (from the original)
    r0 = 0u;
    r2 = r0;
    r1 = r1 * 0x70u + global_00a14500_address;  // (from the original)
    do {
        *gptr<u32>(r3 + (r0 << 2)) = r1 + (r0 << 3);
        u32 r0_1 = r0 + 1u;
        r2 += 2u;
        *gptr<u32>(r3 + (r0_1 << 2)) = r1 + (r0_1 << 3);
        r0 = r0_1 + 1u;
        guest::preempt();
    } while (s32(r2) < 0xe);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005a360c
GUEST_EXPORT_FRAMED(0x005a360c, d_005a360c::f_005a360c, 0x30);  // pushes {r4, r5} first, as the original

// f_005a36b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a36b8 {

struct __attribute__((packed)) Object_005a36b8_0 {
    u32 word_0;
    u8 unknown_4[0x68];  // (not used here)
    u32 word_6c;
};
GUEST_OFFSET(Object_005a36b8_0, word_0, 0x0);
GUEST_OFFSET(Object_005a36b8_0, word_6c, 0x6c);

struct __attribute__((packed)) Local_005a36b8_r0_1 {
    u8 unknown_0[0x29c];  // (not used here)
    u32 word_29c;
};
GUEST_OFFSET(Local_005a36b8_r0_1, word_29c, 0x29c);

inline constexpr u32 global_00a146c0_address = 0x00a146c0u;

u32 f_005a36b8(gptr<Object_005a36b8_0> arg0, u32 r1, u32 r2) {
    u32 r12_1 = arg0->word_6c;
    gptr<Local_005a36b8_r0_1> r0_1 = gptr<Local_005a36b8_r0_1>(arg0->word_0);
    u32 r1_1 = *gptr<u8>((r12_1 * 5u + (r12_1 << 3) << 3) + global_00a146c0_address + (r1 << 3) + 2u);
    u32 r1_2 = lsl_r(r2, r1_1 & 0xff) | r0_1->word_29c & ~lsl_r(1u, r1_1 & 0xff);  // (from the original)
    r0_1->word_29c = r1_2;
    guest::cpu()->r[1] = r1_2;
    return r0_1.addr();
}

}  // namespace d_005a36b8
GUEST_EXPORT_FRAMED(0x005a36b8, d_005a36b8::f_005a36b8, 0x10);  // pushes {r4} first, as the original

// f_005a3720: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a3720 {

inline constexpr guest::Function<0x00150b94, u32(u32, u32, u32)> call_00150b94;

u32 f_005a3720(u32 r0) {
    call_00150b94(r0, 0u, 0x70u);  // (from the original)
    return r0;
}

}  // namespace d_005a3720
GUEST_EXPORT_FRAMED(0x005a3720, d_005a3720::f_005a3720, 0x4010);  // pushes {r4, lr} first, as the original

// f_005a3ad0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a3ad0 {

inline constexpr u32 vtable_imgdb__FileReader = 0x00907d70u;

void imgdb__FileReader__FileReader_005a3ad0(gptr<imgdb__FileReader> file_reader, u32 r1, u32 r2, u32 r3) {
    file_reader->word_8 = r1;
    file_reader->word_14 = r1;
    file_reader->word_c = r2;
    file_reader->byte_10 = u8(r3);
    file_reader->byte_28 = 1;
    file_reader->word_4 = 0;
    file_reader->word_0 = vtable_imgdb__FileReader;
    file_reader->word_18 = 0;
    file_reader->word_20 = 0;
    file_reader->word_24 = 0;
    file_reader->word_2c = 0;
}

}  // namespace d_005a3ad0
GUEST_EXPORT(0x005a3ad0, d_005a3ad0::imgdb__FileReader__FileReader_005a3ad0);

// f_005a3b10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a3b10 {

inline constexpr u32 vtable_imgdb__FileReader = 0x00907d70u;

void imgdb__FileReader__FileReader_005a3b10(gptr<imgdb__FileReader> file_reader, u32 r1, u32 r2, u32 r3) {
    file_reader->word_8 = 0;
    file_reader->word_14 = 0;
    file_reader->word_0 = vtable_imgdb__FileReader;
    file_reader->word_18 = 0;
    file_reader->word_20 = 0;
    file_reader->word_24 = 0;
    file_reader->byte_28 = 1;
    file_reader->word_4 = r1;
    file_reader->word_c = r2;
    file_reader->byte_10 = u8(r3);
    file_reader->word_2c = 0;
}

}  // namespace d_005a3b10
GUEST_EXPORT_FRAMED(0x005a3b10, d_005a3b10::imgdb__FileReader__FileReader_005a3b10, 0xf0);  // pushes {r4, r5, r6, r7} first, as the original

// f_005a3edc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a3edc {

inline constexpr u32 vtable_imgdb__FileWriter = 0x00907d88u;

void imgdb__FileWriter__FileWriter_005a3edc(gptr<imgdb__FileWriter> file_writer, u32 r1) {
    file_writer->word_4 = r1;
    file_writer->byte_8 = 1;
    file_writer->word_0 = vtable_imgdb__FileWriter;
    file_writer->word_c = 0;
}

}  // namespace d_005a3edc
GUEST_EXPORT(0x005a3edc, d_005a3edc::imgdb__FileWriter__FileWriter_005a3edc);

// f_005a3f08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a3f08 {

inline constexpr guest::Function<0x005a4cf4, u32(u32, u32, u32, u32)> call_005a4cf4;

struct __attribute__((packed)) Frame_005a3f08 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005a3f08, word_0, 0x0);
GUEST_OFFSET(Frame_005a3f08, word_4, 0x4);
GUEST_OFFSET(Frame_005a3f08, word_8, 0x8);
GUEST_SIZE(Frame_005a3f08, 0x14);

void f_005a3f08(u32 r0) {
    guest::StackFrameOf<Frame_005a3f08> frame;  // the original's stack frame
    frame->word_0 = 0x64000;  // (from the original)
    frame->word_4 = frame.at(0xc).addr();  // (from the original)
    frame->word_8 = frame.at(0x10).addr();  // (from the original)
    call_005a4cf4(r0, r0, 0u, 1u);
}

}  // namespace d_005a3f08
GUEST_EXPORT_FRAMED(0x005a3f08, d_005a3f08::f_005a3f08, 0x4000);  // pushes {lr} first, as the original

// f_005a4aec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a4aec {


u32 f_005a4aec(u32 r0, u32 r1) {
    return r1 + (r0 << 4) + 0x37u & ~0x1fu;  // (from the original)
}

}  // namespace d_005a4aec
GUEST_EXPORT(0x005a4aec, d_005a4aec::f_005a4aec);

// f_005a4bd0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a4bd0 {

struct __attribute__((packed)) Object_005a4bd0_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_005a4bd0_0, word_0, 0x0);
GUEST_OFFSET(Object_005a4bd0_0, word_4, 0x4);

struct __attribute__((packed)) Local_005a4bd0_r5_1 {
    u8 unknown_0[0x14];  // (not used here)
    u16 half_14;
};
GUEST_OFFSET(Local_005a4bd0_r5_1, half_14, 0x14);

inline constexpr guest::Function<0x005af8c8, u32(u32, u32, u32)> imgdb__Crc16Context__Crc16Context;
inline constexpr guest::Function<0x005af9c4, u32(u32)> store_byte_constant_pack_0x4_005af9c4;

struct __attribute__((packed)) Frame_005a4bd0 {
    u8 unknown_0[0x6];  // (not read or written by name)
    u16 half_6;
};
GUEST_OFFSET(Frame_005a4bd0, half_6, 0x6);
GUEST_SIZE(Frame_005a4bd0, 0x8);

void f_005a4bd0(gptr<Object_005a4bd0_0> arg0) {
    guest::StackFrameOf<Frame_005a4bd0> frame;  // the original's stack frame
    gptr<Local_005a4bd0_r5_1> r5_1 = gptr<Local_005a4bd0_r5_1>(arg0->word_0);
    u32 r6_1 = r5_1->half_14;
    r5_1->half_14 = 0;
    imgdb__Crc16Context__Crc16Context(frame.at(0).addr(), arg0->word_0, arg0->word_4);
    r5_1->half_14 = u16(r6_1);
    u32 r5_2 = frame->half_6;
    store_byte_constant_pack_0x4_005af9c4(frame.at(0).addr());
    u32 r1_2 = arg0->word_0;
    *gptr<u16>(r1_2 + 0x14u) = u16(r5_2);  // (from the original)
    guest::cpu()->r[1] = r1_2;
}

}  // namespace d_005a4bd0
GUEST_EXPORT_FRAMED(0x005a4bd0, d_005a4bd0::f_005a4bd0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005a4e5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a4e5c {


u32 f_005a4e5c(u32 r0, u32 r1) {
    return r1 + (r0 * 3u + (r0 << 4) << 3) + 0x18u;  // (from the original)
}

}  // namespace d_005a4e5c
GUEST_EXPORT(0x005a4e5c, d_005a4e5c::f_005a4e5c);

// f_005a4e70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a4e70 {

struct __attribute__((packed)) Object_005a4e70_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_005a4e70_0, word_0, 0x0);
GUEST_OFFSET(Object_005a4e70_0, word_4, 0x4);

inline constexpr guest::Function<0x00301444, u32(u32, u32, u32, u32)> clear;
inline constexpr guest::Function<0x005a8af0, u32(u32, u32, u32, u32)> call_005a8af0;
inline constexpr guest::Function<0x005afe90, u32(u32, u32, u32, u32)> call_005afe90;

void f_005a4e70(gptr<Object_005a4e70_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 zf_1 = r1 == 0;
    u32 r7 = r3;
    u32 r4_1 = *gptr<u32>(guest::cpu()->r[13] + 0x18u);  // (from the original)
    arg0->word_0 = r1;
    u32 r3_1 = r1;
    u32 r8 = r0;
    r1 = r2;
    arg0->word_4 = r2;
    if (!zf_1 && r4_1 + (r7 * 3u + (r7 << 4) << 3) + 0x18u <= r2) {  // (from the original)
        clear(r3_1, r1, r2, r3_1);
        u32 r0_1 = arg0->word_0;
        *gptr<u32>(r0_1 + 8u) = 0;
        *gptr<u32>(r0_1 + 0xcu) = 0;  // (from the original)
        *gptr<u32>(r0_1 + 0x10u) = 0;  // (from the original)
        *gptr<u32>(r0_1 + 0x14u) = 0;  // (from the original)
        *gptr<u32>(r0_1 + 4u) = 0x315f3030;  // (from the original)
        *gptr<u32>(r0_1) = 0x514a5531;  // (from the original)
        r1 = r4_1 + 0x18u;  // (from the original)
        *gptr<u16>(r0_1 + 0xcu) = u16(r7);  // (from the original)
        u32 r6 = 0u;
        *gptr<u16>(r0_1 + 0x16u) = u16(r1);  // (from the original)
        if (s32(r7) > 0) {
            do {
                u32 r1_1 = *gptr<u32>(r8);
                u32 r2_1 = r6 * 3u + (r6 << 4);
                u32 r3_2 = *gptr<u16>(r1_1 + 0x16u);  // (from the original)
                u32 r5 = r1_1 + r3_2 + (r2_1 << 3);
                call_005a8af0(r5, r1_1, r2_1, r3_2);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                u32 r4 = 0u;
                do {
                    call_005afe90(r5 + r4 * 0x12u + 0x50u, r1, r2, r3);  // (from the original)
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    r4 += 1u;
                    guest::preempt();
                } while (s32(r4) < 4);
                r6 += 1u;
                guest::preempt();
            } while (s32(r6) < s32(r7));
        }
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_005a4e70
GUEST_EXPORT_FRAMED(0x005a4e70, d_005a4e70::f_005a4e70, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_005a4f70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a4f70 {

struct __attribute__((packed)) Object_005a4f70_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_005a4f70_0, word_0, 0x0);
GUEST_OFFSET(Object_005a4f70_0, word_4, 0x4);

struct __attribute__((packed)) Local_005a4f70_r5_1 {
    u8 unknown_0[0x14];  // (not used here)
    u16 half_14;
};
GUEST_OFFSET(Local_005a4f70_r5_1, half_14, 0x14);

inline constexpr guest::Function<0x005af8c8, u32(u32, u32, u32)> imgdb__Crc16Context__Crc16Context;
inline constexpr guest::Function<0x005af9c4, u32(u32)> store_byte_constant_pack_0x4_005af9c4;

struct __attribute__((packed)) Frame_005a4f70 {
    u8 unknown_0[0x6];  // (not read or written by name)
    u16 half_6;
};
GUEST_OFFSET(Frame_005a4f70, half_6, 0x6);
GUEST_SIZE(Frame_005a4f70, 0x8);

void f_005a4f70(gptr<Object_005a4f70_0> arg0) {
    guest::StackFrameOf<Frame_005a4f70> frame;  // the original's stack frame
    gptr<Local_005a4f70_r5_1> r5_1 = gptr<Local_005a4f70_r5_1>(arg0->word_0);
    u32 r6_1 = r5_1->half_14;
    r5_1->half_14 = 0;
    imgdb__Crc16Context__Crc16Context(frame.at(0).addr(), arg0->word_0, arg0->word_4);
    r5_1->half_14 = u16(r6_1);
    u32 r5_2 = frame->half_6;
    store_byte_constant_pack_0x4_005af9c4(frame.at(0).addr());
    u32 r1_2 = arg0->word_0;
    *gptr<u16>(r1_2 + 0x14u) = u16(r5_2);  // (from the original)
    guest::cpu()->r[1] = r1_2;
}

}  // namespace d_005a4f70
GUEST_EXPORT_FRAMED(0x005a4f70, d_005a4f70::f_005a4f70, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005a4fd0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a4fd0 {

inline guest::global<u32, 0x0097e098> global_0097e098;
inline guest::global<u32, 0x0097e09c> global_0097e09c;

void f_005a4fd0(u32 r0, u32 r1) {
    if (*global_0097e098 == 0) {
        *global_0097e098 = r0;
    }
    if (*global_0097e09c == 0) {
        *global_0097e09c = r1;
    }
}

}  // namespace d_005a4fd0
GUEST_EXPORT(0x005a4fd0, d_005a4fd0::f_005a4fd0);

// f_005a4ffc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a4ffc {

struct __attribute__((packed)) Object_005a4ffc_0 {
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
};
GUEST_OFFSET(Object_005a4ffc_0, word_0, 0x0);
GUEST_OFFSET(Object_005a4ffc_0, word_4, 0x4);
GUEST_OFFSET(Object_005a4ffc_0, word_8, 0x8);
GUEST_OFFSET(Object_005a4ffc_0, word_c, 0xc);
GUEST_OFFSET(Object_005a4ffc_0, word_10, 0x10);
GUEST_OFFSET(Object_005a4ffc_0, word_14, 0x14);
GUEST_OFFSET(Object_005a4ffc_0, word_18, 0x18);
GUEST_OFFSET(Object_005a4ffc_0, word_1c, 0x1c);
GUEST_OFFSET(Object_005a4ffc_0, word_20, 0x20);
GUEST_OFFSET(Object_005a4ffc_0, word_24, 0x24);
GUEST_OFFSET(Object_005a4ffc_0, word_28, 0x28);
GUEST_OFFSET(Object_005a4ffc_0, word_2c, 0x2c);
GUEST_OFFSET(Object_005a4ffc_0, word_30, 0x30);
GUEST_OFFSET(Object_005a4ffc_0, word_34, 0x34);
GUEST_OFFSET(Object_005a4ffc_0, word_38, 0x38);
GUEST_OFFSET(Object_005a4ffc_0, word_3c, 0x3c);

inline constexpr guest::Function<0x005a8e08, u32(u32, u32, u32, u32)> call_005a8e08;
inline constexpr guest::Function<0x005aa778, u32(u32, u32)> call_005aa778;

struct __attribute__((packed)) Frame_005a4ffc {
    u8 unknown_0[0xc];  // (not read or written by name)
    u8 byte_c;
    u8 byte_d;
    u8 byte_e;
    u8 unknown_f[0x11];  // (not read or written by name)
    u8 byte_20;
    u8 unknown_21[0x4b];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005a4ffc, byte_c, 0xc);
GUEST_OFFSET(Frame_005a4ffc, byte_d, 0xd);
GUEST_OFFSET(Frame_005a4ffc, byte_e, 0xe);
GUEST_OFFSET(Frame_005a4ffc, byte_20, 0x20);
GUEST_SIZE(Frame_005a4ffc, 0x6c);

void f_005a4ffc(gptr<Object_005a4ffc_0> arg0, u32 r1_unused, u32 r2) {
    guest::StackFrameOf<Frame_005a4ffc> frame;  // the original's stack frame
    arg0->word_4 = 0;
    arg0->word_8 = 0;
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
    arg0->word_0 = 0x31534433;  // (from the original)
    float S0_1 = 0.0f;
    arg0->word_3c = 0;
    arg0->word_28 = std::bit_cast<u32>(S0_1);
    guest::cpu()->s[0] = S0_1;
    call_005a8e08(arg0.addr() + 8u, 0x31534433u, r2, guest::cpu()->r[3]);  // (from the original)
    call_005aa778(frame.at(0).addr(), 0u);
    arg0->word_4 = u32(frame->byte_c);
    *gptr<u16>(arg0.addr() + 0x14u) = u16(u32(frame->byte_d));  // (from the original)
    u32 r0_3 = 0xf80u & u32(frame->byte_20) << 7 | arg0->word_30 & ~0xf80u;  // (from the original)
    arg0->word_30 = r0_3;
    u32 r1_1 = r0_3 & ~0xff00000u & ~0xff000u;  // (from the original)
    arg0->word_30 = r1_1 | u32(frame->byte_e) << 0xc;  // (from the original)
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_005a4ffc
GUEST_EXPORT_FRAMED(0x005a4ffc, d_005a4ffc::f_005a4ffc, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_005a50bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a50bc {

struct __attribute__((packed)) Object_005a50bc_0 {
    u8 unknown_0[0x68];  // (not used here)
    u32 word_68;
};
GUEST_OFFSET(Object_005a50bc_0, word_68, 0x68);


void f_005a50bc(gptr<Object_005a50bc_0> arg0, u32 r1) {
    arg0->word_68 = 0xf80u & r1 << 7 | arg0->word_68 & ~0xf80u;  // (from the original)
}

}  // namespace d_005a50bc
GUEST_EXPORT(0x005a50bc, d_005a50bc::f_005a50bc);

// f_005a5130: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a5130 {

struct __attribute__((packed)) Object_005a5130_0 {
    u8 unknown_0[0x30];  // (not used here)
    u32 word_30;
};
GUEST_OFFSET(Object_005a5130_0, word_30, 0x30);


void f_005a5130(gptr<Object_005a5130_0> arg0, u32 r1) {
    arg0->word_30 = arg0->word_30 & ~0xff00000u & ~0xff000u | r1 << 0xc;  // (from the original)
}

}  // namespace d_005a5130
GUEST_EXPORT(0x005a5130, d_005a5130::f_005a5130);

// f_005a5148: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a5148 {

struct __attribute__((packed)) Object_005a5148_0 {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
    u8 unknown_5[0x9b];  // (not used here)
    u32 word_a0;
    u32 word_a4;
};
GUEST_OFFSET(Object_005a5148_0, byte_4, 0x4);
GUEST_OFFSET(Object_005a5148_0, word_a0, 0xa0);
GUEST_OFFSET(Object_005a5148_0, word_a4, 0xa4);

inline constexpr guest::Function<0x0013fa10, u32(u32, u32, u32, u32)> container_update;
inline constexpr guest::Function<0x001416b0, u32(u32)> return_constant_0x97e098_;
inline constexpr guest::Function<0x00142450, u32(u32, u32, u32, u32)> call_00142450;
inline constexpr guest::Function<0x005a5240, u32(u32, u32)> call_005a5240;
inline constexpr guest::Function<0x005a92a4, u32(u32, u32, u32, u32)> imgdb__PictureDbRecord__PictureDbRecord;

void f_005a5148(gptr<Object_005a5148_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r7_1 = r2;
    if (arg0->byte_4 == 0) {
        u32 r1_1 = 0xdacu;  // (from the original)
        u32 r0_1 = arg0->word_a0;
        arg0->word_a4 = r1_1;
        if (r0_1 < r1_1) {
            call_00142450(arg0.addr() + 0x98u, r1_1, r2, r3);  // (from the original)
            r1_1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        u32 r0_2 = container_update(arg0.addr() + 0x98u, r1_1, r2, r3);  // (from the original)
        if (r1 != 0) {
            u32 r0_3 = return_constant_0x97e098_(r0_2);
            imgdb__PictureDbRecord__PictureDbRecord(arg0.addr() + 8u, r0_3, 0x1f4u, 0u);  // (from the original)
            r0_2 = call_005a5240(arg0.addr(), 0u);
        }
        if (r7_1 != 0) {
            u32 r0_5 = return_constant_0x97e098_(r0_2);
            imgdb__PictureDbRecord__PictureDbRecord(arg0.addr() + 0x50u, r0_5, 0xbb8u, 1u);  // (from the original)
            call_005a5240(arg0.addr(), 1u);
        }
        *gptr<u8>(arg0.addr() + 4u) = 1;
    }
}

}  // namespace d_005a5148
GUEST_EXPORT_FRAMED(0x005a5148, d_005a5148::f_005a5148, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_005a51f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a51f4 {

struct __attribute__((packed)) Local_005a51f4_r3_1 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_005a51f4_r3_1, float_0, 0x0);
GUEST_OFFSET(Local_005a51f4_r3_1, float_4, 0x4);

inline constexpr guest::Function<0x005a566c, u32(u32, u32, u32, u32)> call_005a566c;

struct __attribute__((packed)) Frame_005a51f4 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    float float_c;
    u32 word_10;
    u32 word_14;
    float float_18;
    u8 unknown_1c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005a51f4, word_0, 0x0);
GUEST_OFFSET(Frame_005a51f4, word_4, 0x4);
GUEST_OFFSET(Frame_005a51f4, word_8, 0x8);
GUEST_OFFSET(Frame_005a51f4, float_c, 0xc);
GUEST_OFFSET(Frame_005a51f4, word_10, 0x10);
GUEST_OFFSET(Frame_005a51f4, word_14, 0x14);
GUEST_OFFSET(Frame_005a51f4, float_18, 0x18);
GUEST_SIZE(Frame_005a51f4, 0x20);

u32 f_005a51f4(u32 r0_unused, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005a51f4> frame;  // the original's stack frame
    gptr<Local_005a51f4_r3_1> r3_1 = gptr<Local_005a51f4_r3_1>(frame.at(0x28).addr());  // (from the original)
    float S0_1 = r3_1->float_0;
    float S1_1 = r3_1->float_4;
    frame->float_c = S0_1;
    frame->word_14 = 0;
    frame->word_10 = 1;
    frame->float_18 = S1_1;
    frame->word_4 = 0;
    frame->word_8 = 0;
    frame->word_0 = r3;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    call_005a566c(guest::cpu()->r[0], guest::cpu()->r[1], 2u, r2);
    return guest::cpu()->r[0];
}

}  // namespace d_005a51f4
GUEST_EXPORT_FRAMED(0x005a51f4, d_005a51f4::f_005a51f4, 0x4010);  // pushes {r4, lr} first, as the original

// f_005a53c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a53c4 {

struct __attribute__((packed)) Object_005a53c4_0 {
    u8 unknown_0[0x5];  // (not used here)
    u8 byte_5;
};
GUEST_OFFSET(Object_005a53c4_0, byte_5, 0x5);

struct __attribute__((packed)) Local_005a53c4_r4_1 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
    u8 unknown_14[0x28];  // (not used here)
    u32 word_3c;
};
GUEST_OFFSET(Local_005a53c4_r4_1, word_10, 0x10);
GUEST_OFFSET(Local_005a53c4_r4_1, word_3c, 0x3c);

struct __attribute__((packed)) Local_005a53c4_r7_1 {
    u8 unknown_0[0x6];  // (not used here)
    u8 byte_6;
};
GUEST_OFFSET(Local_005a53c4_r7_1, byte_6, 0x6);

inline constexpr guest::Function<0x0013f274, u32(u32, u32, u32)> clear_word_pair_0013f274;
inline constexpr guest::Function<0x005a5240, u32(u32, u32)> call_005a5240;
inline constexpr guest::Function<0x005a6218, u32(u32, u32, u32)> call_005a6218;
inline constexpr guest::Function<0x005a992c, u32(u32, u32, u32)> call_005a992c;
inline constexpr guest::Function<0x005a9c48, u32(u32, u32, u32)> call_005a9c48;
inline constexpr guest::Function<0x005aa0b8, u32(u32)> call_005aa0b8;
inline constexpr guest::Function<0x005aa450, u32(u32)> clear_word_pair_005aa450;
inline constexpr guest::Function<0x005aa460, u32(u32, u32)> call_005aa460;
inline constexpr guest::Function<0x005aa47c, u32(u32, u32)> call_005aa47c;
inline constexpr guest::Function<0x005aa4bc, u32(u32, u32)> call_005aa4bc;
inline constexpr guest::Function<0x005aa4d4, u32(u32, u32)> call_005aa4d4;
inline constexpr guest::Function<0x005aa4ec, u32(u32, u32)> call_005aa4ec;
inline constexpr guest::Function<0x005acde8, u32(u32)> call_005acde8;
inline constexpr guest::Function<0x005adc90, u32(u32)> call_005adc90;
inline constexpr guest::Function<0x005ae46c, u32(u32, u32, u32)> call_005ae46c;
inline constexpr guest::Function<0x0075412c, u32(u32, u32, u32)> call_0075412c;
inline constexpr guest::Function<0x007546b4, u32(u32)> call_007546b4;
inline constexpr guest::Function<0x00754978, u32(u32, u32, u32, u32)> field_nonzero_754978;
inline constexpr guest::Function<0x00754a3c, u32(u32, u32, u32)> call_00754a3c;
inline constexpr guest::Function<0x00754a9c, u32(u32)> entry_of_table_owner_00754a9c;
inline constexpr guest::Function<0x007553d8, u32(u32)> extension_index;
inline constexpr guest::Function<0x00755484, u32(u32)> call_00755484;
inline constexpr guest::Function<0x007554e4, u32(u32)> call_007554e4;

struct __attribute__((packed)) Frame_005a53c4 {
    u8 unknown_0[0x8];  // (not read or written by name)
    u32 word_8;
    u8 unknown_c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005a53c4, word_8, 0x8);
GUEST_SIZE(Frame_005a53c4, 0x10);

u32 f_005a53c4(gptr<Object_005a53c4_0> arg0, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_005a53c4> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r0_5 = 0;
    arg0->byte_5 = 0;
    gptr<Local_005a53c4_r4_1> r4_1 = gptr<Local_005a53c4_r4_1>(r0 + (r1 + (r1 << 3) << 3));
    u32 r0_2 = field_nonzero_754978(r4_1.addr() + 8u, r1, r2, guest::cpu()->r[3]);
    if (r0_2 != 0) {
        u32 r0_4 = field_nonzero_754978(r4_1.addr() + 8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        gptr<Local_005a53c4_r7_1> r7_1 = gptr<Local_005a53c4_r7_1>(r0 + r1);
        if (r0_4 != 0 && r7_1->byte_6 != 0) {
            r0_5 = ~0u;
        } else {
            call_005a5240(r0, r1);
            u32 r0_6 = call_005acde8(r1);
            u32 r0_7 = call_005a9c48(r4_1.addr() + 8u, r1, r0_6);
            u32 r8_1 = r0_7;
            call_005aa0b8(r4_1.addr() + 8u);
            r2 = guest::cpu()->r[2];
            if (r4_1->word_3c != 0) {
                u32 r0_8 = call_005ae46c(r1, guest::cpu()->r[1], r2);
                u32 r0_9 = call_005a992c(r4_1.addr() + 8u, r1, r0_8);
                r2 = guest::cpu()->r[2];
                if (r0_9 != 0) {
                    r8_1 = r0_9;
                    goto L_5a5488;
                }
            }
            if (r8_1 == 0) {
                if (r4_1->word_3c != 0) {
                    u32 r0_10 = call_005a6218(r0, r1, r2);
                    r2 = guest::cpu()->r[2];
                    if (r0_10 != 0) {
                        if (r0_10 == 0xbu) {  // (from the original)
                            r7_1->byte_6 = 1;
                        }
                        return r0_10;
                    }
                }
                goto L_5a54dc;
            }
L_5a5488:;
            u32 r0_11 = call_005adc90(r1);
            if (r0_11 == 0) {
                r0_5 = r8_1;
            } else {
                r0_5 = ~0u;
                r7_1->byte_6 = 1;
            }
        }
        return r0_5;
L_5a54dc:;
        u32 r8 = r0;
        u32 r10 = r0 + 0x98u;  // (from the original)
        u32 r6 = r4_1->word_10;
        u32 r7 = r4_1.addr() + 8u;
        u32 r9 = r1;
        u32 r4 = 0u;
        if (s32(r6) > 0) {
            do {
                u32 r0_12 = call_00754a3c(r7, r4, r2);
                u32 r0_13 = entry_of_table_owner_00754a9c(r0_12);
                u32 r0_14 = call_007554e4(r0_13);
                r2 = guest::cpu()->r[2];
                if (r0_14 != 0) {
                    clear_word_pair_0013f274(frame.at(0).addr(), guest::cpu()->r[1], r2);
                    clear_word_pair_005aa450(frame.at(0).addr());
                    call_005aa4bc(frame.at(0).addr(), r9);
                    call_005aa4d4(frame.at(0).addr(), r4);
                    u32 r0_19 = extension_index(r0_13);
                    call_005aa460(frame.at(0).addr(), r0_19);
                    u32 r0_21 = call_00755484(r0_13);
                    frame->word_8 = r0_21;
                    call_005aa47c(frame.at(0).addr(), frame.at(8).addr());
                    u32 r0_24 = call_007546b4(r0_13 + 0x14u);  // (from the original)
                    call_005aa4ec(frame.at(0).addr(), r0_24);
                    call_0075412c(r8, r10, frame.at(0).addr());
                    r2 = guest::cpu()->r[2];
                }
                r4 += 1u;
                guest::preempt();
            } while (s32(r4) < s32(r6));
        }
    }
    return 0u;
}

}  // namespace d_005a53c4
GUEST_EXPORT_FRAMED(0x005a53c4, d_005a53c4::f_005a53c4, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_005a55cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a55cc {

struct __attribute__((packed)) Local_005a55cc_r3_1 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_005a55cc_r3_1, float_0, 0x0);
GUEST_OFFSET(Local_005a55cc_r3_1, float_4, 0x4);

inline constexpr guest::Function<0x005a566c, u32(u32, u32, u32, u32)> call_005a566c;

struct __attribute__((packed)) Frame_005a55cc {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    float float_c;
    u32 word_10;
    u32 word_14;
    float float_18;
    u8 unknown_1c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005a55cc, word_0, 0x0);
GUEST_OFFSET(Frame_005a55cc, word_4, 0x4);
GUEST_OFFSET(Frame_005a55cc, word_8, 0x8);
GUEST_OFFSET(Frame_005a55cc, float_c, 0xc);
GUEST_OFFSET(Frame_005a55cc, word_10, 0x10);
GUEST_OFFSET(Frame_005a55cc, word_14, 0x14);
GUEST_OFFSET(Frame_005a55cc, float_18, 0x18);
GUEST_SIZE(Frame_005a55cc, 0x20);

u32 f_005a55cc(u32 r0_unused, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005a55cc> frame;  // the original's stack frame
    gptr<Local_005a55cc_r3_1> r3_1 = gptr<Local_005a55cc_r3_1>(frame.at(0x28).addr());  // (from the original)
    float S0_1 = r3_1->float_0;
    float S1_1 = r3_1->float_4;
    frame->float_c = S0_1;
    frame->word_14 = 0;
    frame->word_10 = 1;
    frame->float_18 = S1_1;
    frame->word_4 = 0;
    frame->word_8 = 0;
    frame->word_0 = r3;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    call_005a566c(guest::cpu()->r[0], guest::cpu()->r[1], 1u, r2);
    return guest::cpu()->r[0];
}

}  // namespace d_005a55cc
GUEST_EXPORT_FRAMED(0x005a55cc, d_005a55cc::f_005a55cc, 0x4010);  // pushes {r4, lr} first, as the original

// f_005a5618: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a5618 {

inline constexpr guest::Function<0x005a9e1c, u32(u32, u32, u32, u32)> call_005a9e1c;

u32 f_005a5618(u32 r0, u32 r1) {
    u32 r0_1 = call_005a9e1c(r0, r1, 0u, 0u);
    u32 r4_1 = r0_1;
    if (*gptr<u32>(r0 + r1 * 0x48u + 0x3cu) != 0) {  // (from the original)
        u32 r0_2 = call_005a9e1c(r0, r1, 1u, 0u);
        if (r4_1 == 0) {
            r4_1 = r0_2;
        }
    }
    return r4_1;
}

}  // namespace d_005a5618
GUEST_EXPORT_FRAMED(0x005a5618, d_005a5618::f_005a5618, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005a58cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a58cc {

inline constexpr guest::Function<0x005a5240, u32(u32, u32)> call_005a5240;
inline constexpr guest::Function<0x005a5618, u32(u32, u32)> call_005a5618;
inline constexpr guest::Function<0x005ac67c, u32(u32)> call_005ac67c;
inline constexpr guest::Function<0x00754978, u32(u32, u32, u32, u32)> field_nonzero_754978;

u32 f_005a58cc(u32 r0, u32 r1) {
    u32 r0_4 = 0;
    u32 r6_1 = 0u;
    u32 r0_2 = field_nonzero_754978(r0 + (r1 + (r1 << 3) << 3) + 8u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        call_005a5240(r0, r1);
        u32 r0_3 = call_005ac67c(r1);
        r1_1 = guest::cpu()->r[1];
        if (r0_3 != 0) {
            return 0xdu;  // (from the original)
        }
        r0_4 = call_005a5618(r0, r1);
        r1_1 = guest::cpu()->r[1];
        r6_1 = r0_4;
        if (r0_4 != 0) {
            return r0_4;
        }
        r1_1 = r0 + r1;
        *gptr<u8>(r1_1 + 6u) = 0;
    }
    guest::cpu()->r[1] = r1_1;
    return r6_1;
}

}  // namespace d_005a58cc
GUEST_EXPORT_FRAMED(0x005a58cc, d_005a58cc::f_005a58cc, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005a593c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a593c {

struct __attribute__((packed)) Local_005a593c_r4_1 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
    u8 unknown_14[0x28];  // (not used here)
    u32 word_3c;
};
GUEST_OFFSET(Local_005a593c_r4_1, word_10, 0x10);
GUEST_OFFSET(Local_005a593c_r4_1, word_3c, 0x3c);

inline constexpr guest::Function<0x0013f274, u32(u32, u32, u32, u32)> clear_word_pair_0013f274;
inline constexpr guest::Function<0x005a5240, u32(u32, u32, u32, u32)> call_005a5240;
inline constexpr guest::Function<0x005a5618, u32(u32, u32)> call_005a5618;
inline constexpr guest::Function<0x005a7aa8, u32(u32, u32, u32, u32)> call_005a7aa8;
inline constexpr guest::Function<0x005a992c, u32(u32, u32, u32)> call_005a992c;
inline constexpr guest::Function<0x005a9c48, u32(u32, u32, u32)> call_005a9c48;
inline constexpr guest::Function<0x005a9e1c, u32(u32, u32, u32, u32)> call_005a9e1c;
inline constexpr guest::Function<0x005aa0b8, u32(u32)> call_005aa0b8;
inline constexpr guest::Function<0x005aa450, u32(u32)> clear_word_pair_005aa450;
inline constexpr guest::Function<0x005aa460, u32(u32, u32)> call_005aa460;
inline constexpr guest::Function<0x005aa47c, u32(u32, u32)> call_005aa47c;
inline constexpr guest::Function<0x005aa4bc, u32(u32, u32)> call_005aa4bc;
inline constexpr guest::Function<0x005aa4d4, u32(u32, u32)> call_005aa4d4;
inline constexpr guest::Function<0x005aa4ec, u32(u32, u32)> call_005aa4ec;
inline constexpr guest::Function<0x005acde8, u32(u32)> call_005acde8;
inline constexpr guest::Function<0x005ae46c, u32(u32)> call_005ae46c;
inline constexpr guest::Function<0x0075412c, u32(u32, u32, u32)> call_0075412c;
inline constexpr guest::Function<0x007546b4, u32(u32)> call_007546b4;
inline constexpr guest::Function<0x00754978, u32(u32, u32, u32, u32)> field_nonzero_754978;
inline constexpr guest::Function<0x00754a3c, u32(u32, u32, u32, u32)> call_00754a3c;
inline constexpr guest::Function<0x00754a9c, u32(u32)> entry_of_table_owner_00754a9c;
inline constexpr guest::Function<0x007553d8, u32(u32)> extension_index;
inline constexpr guest::Function<0x00755484, u32(u32)> call_00755484;
inline constexpr guest::Function<0x007554e4, u32(u32)> call_007554e4;

struct __attribute__((packed)) Frame_005a593c {
    u8 unknown_0[0x8];  // (not read or written by name)
    u32 word_8;
    u8 unknown_c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005a593c, word_8, 0x8);
GUEST_SIZE(Frame_005a593c, 0x10);

u32 f_005a593c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005a593c> frame;  // the original's stack frame
    u32 r9_1 = 0;
    u32 r0_9 = 0;
    u32 r7 = r1;
    u32 r8 = r0;
    u32 r5_1 = 0u;
    gptr<Local_005a593c_r4_1> r4_1 = gptr<Local_005a593c_r4_1>(r8 + (r1 + (r7 << 3) << 3));
    u32 r0_2 = field_nonzero_754978(r4_1.addr() + 8u, r1, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        call_005a5240(r8, r7, guest::cpu()->r[2], guest::cpu()->r[3]);
        if (r4_1->word_3c == 0) {
            r9_1 = 0u;
        } else {
            u32 r0_3 = call_005ae46c(r7);
            u32 r0_4 = call_005a992c(r4_1.addr() + 8u, r7, r0_3);
            r9_1 = r0_4;
        }
        u32 r0_5 = call_005acde8(r7);
        u32 r0_6 = call_005a9c48(r4_1.addr() + 8u, r7, r0_5);
        call_005aa0b8(r4_1.addr() + 8u);
        r1_1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if ((r9_1 | r0_6) != 0) {
            if (r9_1 != 0) {
                if (r0_6 != 0) {
                    call_005a5240(r8, r7, r2, r3);
                }
                u32 r0_7 = call_005a9e1c(r8, r7, 1u, 1u);
                r1_1 = guest::cpu()->r[1];
                if (r0_7 != 0) {
                    r5_1 = r0_7;
                }
            }
            if (r0_6 != 0) {
                u32 r0_8 = call_005a9e1c(r8, r7, 0u, 1u);
                r1_1 = guest::cpu()->r[1];
                if (r0_8 != 0) {
                    return r0_8;
                }
            }
            if (r5_1 != 0) {
                guest::cpu()->r[1] = r1_1;
                return r5_1;
            }
            u32 r1_4 = r9_1 == 0;
            u32 r2_4 = r0_6 == 0;
            r0_9 = call_005a7aa8(r7, r1_4, r2_4, r4_1.addr() + 8u);
            r1_1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_9 != 0) {
                return r0_9;
            }
        }
        u32 r6 = r4_1->word_10;
        u32 r9 = r4_1.addr() + 8u;
        u32 r10 = r8 + 0x98u;  // (from the original)
        u32 r4 = 0u;
        if (s32(r6) > 0) {
            do {
                u32 r0_10 = call_00754a3c(r9, r4, r2, r3);
                u32 r0_11 = entry_of_table_owner_00754a9c(r0_10);
                u32 r0_12 = call_007554e4(r0_11);
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_12 != 0) {
                    clear_word_pair_0013f274(frame.at(0).addr(), guest::cpu()->r[1], r2, r3);
                    clear_word_pair_005aa450(frame.at(0).addr());
                    call_005aa4bc(frame.at(0).addr(), r7);
                    call_005aa4d4(frame.at(0).addr(), r4);
                    u32 r0_17 = extension_index(r0_11);
                    call_005aa460(frame.at(0).addr(), r0_17);
                    u32 r0_19 = call_00755484(r0_11);
                    frame->word_8 = r0_19;
                    call_005aa47c(frame.at(0).addr(), frame.at(8).addr());
                    u32 r0_22 = call_007546b4(r0_11 + 0x14u);  // (from the original)
                    call_005aa4ec(frame.at(0).addr(), r0_22);
                    call_0075412c(r8, r10, frame.at(0).addr());
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                }
                r4 += 1u;
                guest::preempt();
            } while (s32(r4) < s32(r6));
        }
        r0_9 = call_005a5618(r8, r7);
        r1_1 = guest::cpu()->r[1];
        r5_1 = r0_9;
        if (r0_9 != 0) {
            return r0_9;
        }
        r1_1 = r8 + r7;
        *gptr<u8>(r1_1 + 6u) = 0;
    }
    guest::cpu()->r[1] = r1_1;
    return r5_1;
}

}  // namespace d_005a593c
GUEST_EXPORT_FRAMED(0x005a593c, d_005a593c::f_005a593c, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_005a6218: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a6218 {

inline constexpr guest::Function<0x005a5618, u32(u32, u32, u32, u32)> call_005a5618;
inline constexpr guest::Function<0x005a5e9c, u32(u32, u32, u32, u32)> call_005a5e9c;
inline constexpr guest::Function<0x005a6350, u32(u32, u32, u32, u32)> call_005a6350;
inline constexpr guest::Function<0x005a7910, u32(u32, u32, u32, u32)> call_005a7910;
inline constexpr guest::Function<0x005a7f70, u32(u32, u32, u32, u32)> call_005a7f70;
inline constexpr guest::Function<0x005a9e1c, u32(u32, u32, u32, u32)> call_005a9e1c;
inline constexpr guest::Function<0x00754a3c, u32(u32, u32, u32, u32)> call_00754a3c;

u32 f_005a6218(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r12 = guest::cpu()->r[12];
    u32 r11_1 = 0;
    *frame.at<u32>(0x20) = r12;  // (from the original)
    u32 r5 = r0;
    u32 r8 = r1;
    u32 r9 = r5 + (r1 + (r8 << 3) << 3);
    if (*gptr<u32>(r9 + 0x3cu) != 0) {  // (from the original)
        r0 = call_005a6350(r5, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 == 0) {
            u32 r6 = *gptr<u32>(r9 + 0x10u);  // (from the original)
            u32 r7 = 0u;
            u32 r10 = r9 + 8u;
            r11_1 = r7;
            u32 r4 = r7;
            if (s32(r6) <= 0) {
                goto L_5a6328;
            }
L_5a6264:;
            if (*gptr<u8>(r5 + 5u) == 0) {
                u32 r0_1 = call_00754a3c(r10, r4, r2, r3);
                u32 r0_2 = call_005a7910(r8, r0_1, 0u, 0u);
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_2 != 0) {
                    call_005a7f70(r8, r0_1, r2, r3);
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    r7 = 1u;
                }
                r4 += 1u;
                if (s32(r6) > s32(r4)) {
                    guest::preempt();
                    goto L_5a6264;
                }
                if (r7 == 0) {
                    goto L_5a6330;
                }
                u32 r0_3 = call_005a5618(r5, r8, r2, r3);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                r11_1 = r0_3;
                if (r0_3 == 0) {
                    goto L_5a6330;
                }
                goto L_5a6328;
            }
            u32 r0_4 = call_005a9e1c(r5, r8, 0u, 0u);
            r1 = guest::cpu()->r[1];
            if (*gptr<u32>(r9 + 0x3cu) != 0) {  // (from the original)
                call_005a9e1c(r5, r8, 1u, 0u);
                r1 = guest::cpu()->r[1];
            }
            r0 = 0xbu;  // (from the original)
        }
        guest::cpu()->r[1] = r1;
        return r0;
L_5a6328:;
        r0 = r11_1;
        if (r11_1 != 0) {
            guest::cpu()->r[1] = r1;
            return r0;
        }
L_5a6330:;
        r0 = call_005a5e9c(r5, r8, r2, r3);
        r1 = guest::cpu()->r[1];
        if (r0 != 0) {
            return r0;
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_005a6218
GUEST_EXPORT_FRAMED(0x005a6218, d_005a6218::f_005a6218, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_005a66d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a66d4 {

struct __attribute__((packed)) Local_005a66d4_r0_3 {
    u8 unknown_0[0x6];  // (not used here)
    u8 byte_6;
    u8 byte_7;
    u8 unknown_8[0x94];  // (not used here)
    u32 word_9c;
    u32 word_a0;
    u32 word_a4;
    u32 word_a8;
    u32 word_ac;
};
GUEST_OFFSET(Local_005a66d4_r0_3, byte_6, 0x6);
GUEST_OFFSET(Local_005a66d4_r0_3, byte_7, 0x7);
GUEST_OFFSET(Local_005a66d4_r0_3, word_9c, 0x9c);
GUEST_OFFSET(Local_005a66d4_r0_3, word_a0, 0xa0);
GUEST_OFFSET(Local_005a66d4_r0_3, word_a4, 0xa4);
GUEST_OFFSET(Local_005a66d4_r0_3, word_a8, 0xa8);
GUEST_OFFSET(Local_005a66d4_r0_3, word_ac, 0xac);

inline constexpr u32 vtable_imgdb__ImageDatabase = 0x00907de8u;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;

void imgdb__ImageDatabase__ImageDatabase(gptr<imgdb__ImageDatabase> image_database) {
    image_database->word_0 = vtable_imgdb__ImageDatabase;
    image_database->byte_4 = 0;
    image_database->byte_5 = 0;
    u32 r0_2 = for_each_element(image_database.addr() + 8u, 0x5aa120u, 0x48u, 2u);  // (from the original)
    gptr<Local_005a66d4_r0_3> r0_3 = gptr<Local_005a66d4_r0_3>(r0_2 - 8u);
    r0_3->word_9c = 0x20;  // (from the original)
    r0_3->word_a0 = 0;
    r0_3->word_a4 = 0;
    r0_3->word_a8 = 0;
    r0_3->word_ac = 0;
    r0_3->byte_6 = 0;
    r0_3->byte_7 = 0;
}

}  // namespace d_005a66d4
GUEST_EXPORT_FRAMED(0x005a66d4, d_005a66d4::imgdb__ImageDatabase__ImageDatabase, 0x4010);  // pushes {r4, lr} first, as the original

// f_005a68e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a68e8 {

struct __attribute__((packed)) Object_005a68e8_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_005a68e8_0, word_c, 0xc);

inline constexpr guest::Function<0x00100835, u32(u32)> string16_length;
inline constexpr guest::Function<0x0010181d, u32(u32, u32, u32)> wmemcpy;
inline constexpr guest::Function<0x005aed38, u32(u32)> call_005aed38;
inline constexpr guest::Function<0x005aff24, u32(u32, u32, u32, u32)> call_005aff24;
inline constexpr guest::Function<0x005b01b0, u32(u32, u32)> call_005b01b0;
inline constexpr guest::Function<0x005b027c, u32(u32, u32)> call_005b027c;
inline constexpr guest::Function<0x005b05a8, u32(u32, u32)> call_005b05a8;
inline constexpr guest::Function<0x005b05b4, u32(u32, u32)> call_005b05b4;
inline constexpr guest::Function<0x00755290, u32(u32, u32)> call_00755290;
inline constexpr guest::Function<0x007552e8, u32(u32, u32)> call_007552e8;
inline constexpr guest::Function<0x00755384, u32(u32)> call_00755384;
inline constexpr guest::Function<0x007553d8, u32(u32)> extension_index;

struct __attribute__((packed)) Frame_005a68e8 {
    u8 unknown_0[0x10];  // (not read or written by name)
    u16 half_10;
    u8 unknown_12[0x6];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005a68e8, half_10, 0x10);
GUEST_SIZE(Frame_005a68e8, 0x18);

u32 f_005a68e8(gptr<Object_005a68e8_0> arg0, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_005a68e8> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r4_1 = r0;
    r0 = arg0->word_c;
    if (r0 != 0) {
        r0 = call_005aff24(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0 != 0) {
            u32 r0_2 = call_00755290(arg0->word_c, r1);
            r1 = guest::cpu()->r[1];
            if (r0_2 != 0) {
                u32 r0_4 = call_007552e8(arg0->word_c, r1);
                u32 r0_5 = string16_length(r0_4);
                r1 = guest::cpu()->r[1];
                if (s32(r0_5) >= 8) {
                    call_005b01b0(r4_1 + 0x10u, 0x5a6a38u);  // (from the original)
                    call_005b05a8(r4_1 + 0x10u, 0x5a6a38u);  // (from the original)
                    r1 = guest::cpu()->r[1];
                    if (s32(r0_5) <= 8) {
                        call_005b027c(r4_1 + 0x10u, r0_4);  // (from the original)
                        call_005b05a8(r4_1 + 0x10u, 0x5a6a38u);  // (from the original)
                        goto L_5a69d8;
                    }
                    if (*gptr<u16>(r0_4 + 0x10u) == 0x2eu && s32(r0_5 - 9u) >= 1 && s32(r0_5 - 9u) <= 4) {  // (from the original)
                        wmemcpy(frame.at(0).addr(), r0_4, 8u);
                        frame->half_10 = 0;
                        call_005b027c(r4_1 + 0x10u, frame.at(0).addr());  // (from the original)
                        call_005b05b4(r4_1 + 0x10u, r0_4 + 0x12u);  // (from the original)
                        goto L_5a69d8;
                    }
                }
            }
            r0 = 2u;
        }
    }
    guest::cpu()->r[1] = r1;
    return r0;
L_5a69d8:;
    u32 r0_15 = call_005aed38(r4_1 + 0x10u);  // (from the original)
    if (r0_15 != 0) {
        u32 r0_17 = call_00755384(r4_1 + 0x10u);  // (from the original)
        if (r0_17 != 0) {
            u32 r0_19 = extension_index(r4_1 + 0x10u);  // (from the original)
            r1 = guest::cpu()->r[1];
            if (r0_19 != 0) {
                return 1u;
            }
        }
    }
    call_005b01b0(r4_1 + 0x10u, 0x5a6a38u);  // (from the original)
    call_005b05a8(r4_1 + 0x10u, 0x5a6a38u);  // (from the original)
    return 2u;
}

}  // namespace d_005a68e8
GUEST_EXPORT_FRAMED(0x005a68e8, d_005a68e8::f_005a68e8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005a6b8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a6b8c {

struct __attribute__((packed)) Object_005a6b8c_0 {
    u32 word_0;
    u8 byte_4;
    u8 unknown_5[0x3];  // (not used here)
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_005a6b8c_0, word_0, 0x0);
GUEST_OFFSET(Object_005a6b8c_0, byte_4, 0x4);
GUEST_OFFSET(Object_005a6b8c_0, word_8, 0x8);
GUEST_OFFSET(Object_005a6b8c_0, word_c, 0xc);

inline constexpr guest::Function<0x005a8af0, u32(u32)> call_005a8af0;

void f_005a6b8c(gptr<Object_005a6b8c_0> arg0) {
    arg0->word_0 = 0;
    arg0->byte_4 = 2;
    arg0->word_8 = 0;
    arg0->word_c = 0;
    call_005a8af0(arg0.addr() + 0x10u);  // (from the original)
}

}  // namespace d_005a6b8c
GUEST_EXPORT_FRAMED(0x005a6b8c, d_005a6b8c::f_005a6b8c, 0x4010);  // pushes {r4, lr} first, as the original

// f_005a6c4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a6c4c {


u32 f_005a6c4c(u32 r0, u32 r1) {
    u32 r1_1 = r1 * 9u;
    guest::cpu()->r[1] = r1_1;
    return r0 + (r1_1 << 1) + 8u;
}

}  // namespace d_005a6c4c
GUEST_EXPORT(0x005a6c4c, d_005a6c4c::f_005a6c4c);

// f_005a7910: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a7910 {

inline constexpr guest::Function<0x005a8af0, u32(u32, u32, u32)> call_005a8af0;
inline constexpr guest::Function<0x005aa720, u32(u32)> init_four_words;
inline constexpr guest::Function<0x005aa848, u32(u32)> call_005aa848;
inline constexpr guest::Function<0x005ab768, u32(u32, u32, u32)> call_005ab768;
inline constexpr guest::Function<0x005ac2b0, u32(u32, u32, u32)> call_005ac2b0;
inline constexpr guest::Function<0x005ac4f4, u32(u32, u32, u32, u32)> call_005ac4f4;
inline constexpr guest::Function<0x005ac5dc, u32(u32, u32, u32, u32)> call_005ac5dc;
inline constexpr guest::Function<0x005af3d4, u32(u32, u32, u32)> call_005af3d4;
inline constexpr guest::Function<0x005b0164, u32(u32, u32)> call_005b0164;
inline constexpr guest::Function<0x005b0450, u32(u32, u32)> set_flag_bit_0_at_28;
inline constexpr guest::Function<0x005b0478, u32(u32, u32, u32)> call_005b0478;
inline constexpr guest::Function<0x005b0588, u32(u32, u32)> call_005b0588;
inline constexpr guest::Function<0x00754a70, u32(u32)> entry_of_reference;
inline constexpr guest::Function<0x00754a9c, u32(u32, u32, u32, u32)> entry_of_table_owner_00754a9c;
inline constexpr guest::Function<0x00754c88, u32(u32, u32, u32)> call_00754c88;
inline constexpr guest::Function<0x007554e4, u32(u32, u32, u32)> call_007554e4;

struct __attribute__((packed)) Frame_005a7910 {
    u32 word_0;
    u8 unknown_4[0x4c];  // (not read or written by name)
    u32 word_50;
    u8 unknown_54[0xc];  // (not read or written by name)
    u8 byte_60;
    u8 unknown_61[0x3];  // (not read or written by name)
    u32 word_64;
    u8 unknown_68[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005a7910, word_0, 0x0);
GUEST_OFFSET(Frame_005a7910, word_50, 0x50);
GUEST_OFFSET(Frame_005a7910, byte_60, 0x60);
GUEST_OFFSET(Frame_005a7910, word_64, 0x64);
GUEST_SIZE(Frame_005a7910, 0x6c);

u32 f_005a7910(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005a7910> frame;  // the original's stack frame
    u32 r0_1 = entry_of_table_owner_00754a9c(r1, r1, r2, r3);
    u32 r0_2 = entry_of_reference(r1);
    u32 r1_2 = guest::cpu()->r[1];
    u32 r2_2 = guest::cpu()->r[2];
    u32 r4_1 = 0u;
    u32 r5_1 = r4_1;
    if ((*gptr<u32>(r0_2 + 0xcu) & 1u) != 0) {  // (from the original)
        u32 r0_3 = call_00754c88(r0_2, r1_2, r2_2);
        frame->word_64 = r0_3;
        frame->word_0 = frame.at(0x64).addr();  // (from the original)
        *frame.at<u32>(4) = 1;
        call_005ac4f4(frame.at(8).addr(), 0x2cu, r0, 1u);  // (from the original)
        u32 r0_5 = call_005ab768(r0, frame.at(8).addr(), frame.at(0x60).addr());  // (from the original)
        r1_2 = guest::cpu()->r[1];
        r2_2 = frame->byte_60;
        if (r2_2 != 0) {
            if ((r0_5 | r1_2) == 0) {
                call_005a8af0(frame.at(0).addr(), r1_2, r2_2);
                call_005b0588(frame.at(0).addr(), 1u);
                u32 r0_8 = call_00754c88(r0_2, guest::cpu()->r[1], guest::cpu()->r[2]);
                frame->word_50 = r0_8;
                call_005b0164(frame.at(0).addr(), frame.at(0x50).addr());  // (from the original)
                u32 r0_10 = call_00754c88(r0_2, guest::cpu()->r[1], guest::cpu()->r[2]);
                frame->word_50 = r0_10;
                call_005b0478(frame.at(0).addr(), frame.at(0x50).addr(), 1u);  // (from the original)
                set_flag_bit_0_at_28(frame.at(0).addr(), 1u);
                call_005ac2b0(r0, frame.at(0).addr(), 1u);
                init_four_words(r0_2);
                r1_2 = guest::cpu()->r[1];
                r2_2 = guest::cpu()->r[2];
                r5_1 = 1u;
            }
        }
    }
    u32 r0_13 = call_007554e4(r0_1, r1_2, r2_2);
    if (r0_13 != 0) {
        frame->word_0 = 0;
        call_005ac5dc(frame.at(8).addr(), 0x2cu, r0, r0_1);  // (from the original)
        u32 r0_15 = call_005ab768(r0, frame.at(8).addr(), frame.at(4).addr());
        if (*frame.at<u8>(4) != 0) {
            if ((r0_15 | guest::cpu()->r[1]) == 0) {
                call_005af3d4(r0, r0_1, 1u);
                call_005aa848(r0_1);
                r4_1 = 1u;
            }
        }
    }
    if (r2 != 0) {
        *gptr<u8>(r2) = u8(r4_1);
    }
    if (r3 != 0) {
        *gptr<u8>(r3) = u8(r5_1);
    }
    return r4_1 | r5_1;
}

}  // namespace d_005a7910
GUEST_EXPORT_FRAMED(0x005a7910, d_005a7910::f_005a7910, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_005a7aa8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a7aa8 {

inline guest::global<u8, 0x009816b8> global_009816b8;
inline constexpr guest::Function<0x005a7540, u32(u32, u32, u32, u32)> call_005a7540;
inline constexpr guest::Function<0x005a7b2c, u32(u32, u32, u32, u32)> call_005a7b2c;
inline constexpr guest::Function<0x005a7e10, u32(u32, u32, u32, u32)> call_005a7e10;
inline constexpr guest::Function<0x005a802c, u32(u32, u32, u32, u32)> call_005a802c;

u32 f_005a7aa8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4_1 = r2;
    u32 r0_1 = 0u;
    u32 r5_1 = r3;
    *global_009816b8 = u8(r0_1);
    if ((r1 & r4_1) == 0) {
        if (r1 == 0) {
            call_005a7e10(r0, r3, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        if (r4_1 == 0) {
            call_005a7b2c(r0, r5_1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        if (*gptr<u32>(r5_1 + 0x34u) != 0) {  // (from the original)
            call_005a7540(r0, r5_1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        call_005a802c(r0, r5_1, r2, r3);
        r1 = guest::cpu()->r[1];
        r0_1 = *global_009816b8;
        if (r0_1 != 0) {
            r0_1 = 0xbu;  // (from the original)
        }
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_005a7aa8
GUEST_EXPORT_FRAMED(0x005a7aa8, d_005a7aa8::f_005a7aa8, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_005a7f70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a7f70 {

struct __attribute__((packed)) Local_005a7f70_r0_2 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Local_005a7f70_r0_2, word_c, 0xc);

inline constexpr guest::Function<0x005a8728, u32(u32, u32, u32, u32)> call_005a8728;
inline constexpr guest::Function<0x005a8870, u32(u32, u32, u32, u32)> call_005a8870;
inline constexpr guest::Function<0x005a89b0, u32(u32, u32, u32, u32)> call_005a89b0;
inline constexpr guest::Function<0x00754a70, u32(u32)> entry_of_reference;
inline constexpr guest::Function<0x00754a9c, u32(u32, u32, u32, u32)> entry_of_table_owner_00754a9c;
inline constexpr guest::Function<0x007553d8, u32(u32)> extension_index;
inline constexpr guest::Function<0x007554e4, u32(u32)> call_007554e4;

void f_005a7f70(u32 r0, u32 r1) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r0_1 = entry_of_table_owner_00754a9c(r1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    gptr<Local_005a7f70_r0_2> r0_2 = gptr<Local_005a7f70_r0_2>(entry_of_reference(r1));
    if ((r0_2->word_c & 1u) != 0) {
        u32 r0_3 = call_007554e4(r0_1);
        if (r0_3 == 0) {
            frame.release();
            call_005a8728(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            return;
        }
        if ((r0_2->word_c & 1u) != 0) {
            return;
        }
    }
    u32 r0_4 = call_007554e4(r0_1);
    if (r0_4 != 0) {
        u32 r0_5 = entry_of_table_owner_00754a9c(r1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r0_6 = extension_index(r0_5);
        if (r0_6 != 1u) {
            if (r0_6 != 2u) {
                return;
            }
            frame.release();
            call_005a8870(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            return;
        }
        frame.release();
        call_005a89b0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        return;
    }
}

}  // namespace d_005a7f70
GUEST_EXPORT(0x005a7f70, d_005a7f70::f_005a7f70);

// f_005a802c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a802c {

struct __attribute__((packed)) Local_005a802c_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005a802c_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_005a802c_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_005a802c_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005a802c_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_005a802c_ea_4, word_4, 0x4);

struct __attribute__((packed)) Local_005a802c_r0_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005a802c_r0_3, word_0, 0x0);
GUEST_OFFSET(Local_005a802c_r0_3, word_4, 0x4);

inline constexpr u32 global_009816b8_address = 0x009816b8u;
inline constexpr guest::Function<0x005a4030, u32(u32)> call_005a4030;
inline constexpr guest::Function<0x005a4418, u32(u32, u32, u32)> imgdb__JpegDecoder__JpegDecoder;
inline constexpr guest::Function<0x005a455c, u32(u32, u32)> imgdb__JpegDecoder__destructor;
inline constexpr guest::Function<0x005a9250, u32(u32)> imgdb__PhotoFileReader__destructor;
inline constexpr guest::Function<0x005aa1b0, u32(u32)> return_constant_0x97e09c_;
inline constexpr guest::Function<0x005aa914, u32(u32)> call_005aa914;
inline constexpr guest::Function<0x005aa970, u32(u32, u32, u32, u32)> imgdb__PhotoFileReader__PhotoFileReader;
inline constexpr guest::Function<0x005ac5dc, u32(u32, u32, u32, u32)> call_005ac5dc;
inline constexpr guest::Function<0x005adf88, u32(u32, u32)> call_005adf88;
inline constexpr guest::Function<0x005b0b6c, u32(u32)> call_005b0b6c;
inline constexpr guest::Function<0x005b0efc, u32(u32, u32, u32)> imgdb__MpDecoder__MpDecoder;
inline constexpr guest::Function<0x005b106c, u32(u32, u32)> imgdb__MpDecoder__destructor;
inline constexpr guest::Function<0x00754a3c, u32(u32, u32, u32, u32)> call_00754a3c;
inline constexpr guest::Function<0x00754a70, u32(u32)> entry_of_reference;
inline constexpr guest::Function<0x00754a9c, u32(u32)> entry_of_table_owner_00754a9c;
inline constexpr guest::Function<0x007553d8, u32(u32, u32, u32, u32)> extension_index;
inline constexpr guest::Function<0x007554e4, u32(u32)> call_007554e4;

struct __attribute__((packed)) Frame_005a802c {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x14];  // (not read or written by name)
    u32 word_1c;
    u32 word_20;
    u8 unknown_24[0xf0];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005a802c, word_0, 0x0);
GUEST_OFFSET(Frame_005a802c, word_4, 0x4);
GUEST_OFFSET(Frame_005a802c, word_1c, 0x1c);
GUEST_OFFSET(Frame_005a802c, word_20, 0x20);
GUEST_SIZE(Frame_005a802c, 0x114);

void f_005a802c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005a802c> frame;  // the original's stack frame
    u32 r1_9 = 0;
    u32 r7_2 = 0;
    u32 r1_11 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    u32 r1_13 = 0;
    u32 r0_22 = 0;
    u32 r4 = 0u;
    u32 r6 = r0;
    u32 r5 = r1;
    u32 r10 = global_009816b8_address;
    u32 r8 = r4;
    u32 r9 = 0x2cu;  // (from the original)
    for (;;) {
        if (s32(*gptr<u32>(r5 + 8u)) <= s32(r4)) {
            break;
        }
        if (*gptr<u8>(r10) != 0) {
            break;
        }
        u32 r0_1 = call_00754a3c(r5, r4, r2, r3);
        u32 r0_2 = entry_of_table_owner_00754a9c(r0_1);
        frame->word_4 = r0_2;
        gptr<Local_005a802c_r0_3> r0_3 = gptr<Local_005a802c_r0_3>(entry_of_reference(r0_1));
        u32 r0_5 = call_007554e4(frame->word_4);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_5 != 0) {
            u32 r0_7 = extension_index(frame->word_4, r1, r2, r3);
            u32 r3_4 = frame->word_4;
            frame->word_0 = r8;
            u32 r0_9 = call_005ac5dc(frame.at(0xb8).addr(), r9, r6, r3_4);  // (from the original)
            u32 r0_10 = return_constant_0x97e09c_(r0_9);
            u32 r3_6 = frame->word_4;
            frame->word_0 = r8;
            imgdb__PhotoFileReader__PhotoFileReader(frame.at(8).addr(), r0_10, r6, r3_6);
            u32 r0_13 = call_005aa914(frame.at(8).addr());
            if (r0_13 == 0) {
                if (r0_7 != 1u) {
                    if (r0_7 == 2u) {
                        imgdb__MpDecoder__MpDecoder(frame.at(0x48).addr(), frame->word_1c, frame->word_20);  // (from the original)
                        u32 r0_16 = call_005b0b6c(frame.at(0x48).addr());  // (from the original)
                        r1_9 = guest::cpu()->r[1];
                        if (r0_16 != 0) {
                            call_005adf88(frame->word_4, frame.at(0x48).addr());  // (from the original)
                            r1_9 = guest::cpu()->r[1];
                            if (r0_3.addr() != 0) {
                                gptr<Local_005a802c_ea_2> ea_2 = gptr<Local_005a802c_ea_2>(frame->word_4 + 0x14u);  // (from the original)
                                r1_9 = ea_2->word_4;
                                r0_3->word_0 = ea_2->word_0;
                                r0_3->word_4 = r1_9;
                            }
                        }
                        goto L_5a81e0;
                    }
                    goto L_5a81e8;
                }
                r7_2 = frame->word_20;
                r1_11 = frame->word_1c;
                r0_18 = frame.at(0x48).addr();  // (from the original)
                imgdb__JpegDecoder__JpegDecoder(r0_18, r1_11, r7_2);
                r0_19 = frame.at(0x48).addr();  // (from the original)
                r0_20 = call_005a4030(r0_19);
                r1_13 = guest::cpu()->r[1];
                if (r0_20 != 0) {
                    call_005adf88(frame->word_4, frame.at(0x48).addr());  // (from the original)
                    r1_13 = guest::cpu()->r[1];
                    if (r0_3.addr() != 0) {
                        gptr<Local_005a802c_ea_4> ea_4 = gptr<Local_005a802c_ea_4>(frame->word_4 + 0x14u);  // (from the original)
                        r1_13 = ea_4->word_4;
                        r0_3->word_0 = ea_4->word_0;
                        r0_3->word_4 = r1_13;
                    }
                }
                r0_22 = frame.at(0x48).addr();  // (from the original)
                imgdb__JpegDecoder__destructor(r0_22, r1_13);
                goto L_5a81e8;
L_5a81e0:;
                imgdb__MpDecoder__destructor(frame.at(0x48).addr(), r1_9);  // (from the original)
            }
L_5a81e8:;
            imgdb__PhotoFileReader__destructor(frame.at(8).addr());
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        r4 += 1u;
        guest::preempt();
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_005a802c
GUEST_EXPORT_FRAMED(0x005a802c, d_005a802c::f_005a802c, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_005a8b24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a8b24 {

inline constexpr guest::Function<0x005a8b9c, u32(u32)> call_005a8b9c;
inline constexpr guest::Function<0x005a8c34, u32(u32)> call_005a8c34;

struct __attribute__((packed)) Frame_005a8b24 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Frame_005a8b24, word_0, 0x0);
GUEST_OFFSET(Frame_005a8b24, word_4, 0x4);
GUEST_SIZE(Frame_005a8b24, 0x8);

void f_005a8b24(gptr<WordPair> word_pair, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005a8b24> frame;  // the original's stack frame
    call_005a8c34(frame.at(0).addr());
    u32 r1_1 = frame->word_4;
    u32 res_1 = u64(r3) + ~r1_1 + u32(r2 >= frame->word_0);
    u32 r0_2 = frame.at(0).addr();
    if (res_1 >> 0x1f == ((r3 ^ r1_1) & (r3 ^ res_1)) >> 0x1f) {  // (from the original)
        call_005a8b9c(r0_2);
        u32 r1_2 = frame->word_4;
        u32 res_2 = u64(r1_2) + ~r3 + u32(frame->word_0 >= r2);
        if (res_2 >> 0x1f != ((r1_2 ^ r3) & (r1_2 ^ res_2)) >> 0x1f) {  // (from the original)
            call_005a8b9c(frame.at(0).addr());
            u32 r1_3 = frame->word_4;
            word_pair->first = frame->word_0;
            word_pair->second = r1_3;
            return;
        }
        word_pair->first = r2;
        word_pair->second = r3;
    } else {
        call_005a8c34(r0_2);
        u32 r1_4 = frame->word_4;
        word_pair->first = frame->word_0;
        word_pair->second = r1_4;
    }
}

}  // namespace d_005a8b24
GUEST_EXPORT_FRAMED(0x005a8b24, d_005a8b24::f_005a8b24, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005a8da4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a8da4 {

struct __attribute__((packed)) Local_005a8da4_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005a8da4_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_005a8da4_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_005a8da4_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005a8da4_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_005a8da4_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_005a8da4_r1_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005a8da4_r1_1, word_0, 0x0);
GUEST_OFFSET(Local_005a8da4_r1_1, word_4, 0x4);

inline constexpr guest::Function<0x00124130, u32(u32, u32, u32, u32)> call_00124130;
inline constexpr guest::Function<0x001264f0, u32(u32, u32, u32)> count_to_time_stamp;
inline constexpr guest::Function<0x005a8cc0, u32(u32, u32, u32, u32)> call_005a8cc0;

struct __attribute__((packed)) Frame_005a8da4 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x14];  // (not read or written by name)
    u32 word_20;
    u8 byte_24;
    u8 byte_25;
    u8 unknown_26[0x1];  // (not read or written by name)
    u8 byte_27;
    u8 byte_28;
    u8 byte_29;
    u8 unknown_2a[0x12];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005a8da4, word_0, 0x0);
GUEST_OFFSET(Frame_005a8da4, word_4, 0x4);
GUEST_OFFSET(Frame_005a8da4, word_8, 0x8);
GUEST_OFFSET(Frame_005a8da4, word_20, 0x20);
GUEST_OFFSET(Frame_005a8da4, byte_24, 0x24);
GUEST_OFFSET(Frame_005a8da4, byte_25, 0x25);
GUEST_OFFSET(Frame_005a8da4, byte_27, 0x27);
GUEST_OFFSET(Frame_005a8da4, byte_28, 0x28);
GUEST_OFFSET(Frame_005a8da4, byte_29, 0x29);
GUEST_SIZE(Frame_005a8da4, 0x3c);

void f_005a8da4(gptr<WordPair> word_pair, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005a8da4> frame;  // the original's stack frame
    call_00124130(frame.at(0x30).addr(), r1, r2, r3);  // (from the original)
    gptr<Local_005a8da4_ea_1> ea_1 = gptr<Local_005a8da4_ea_1>(frame.at(0x30).addr());  // (from the original)
    u32 r2_1 = ea_1->word_4;
    gptr<Local_005a8da4_r1_1> r1_1 = gptr<Local_005a8da4_r1_1>(frame.at(0x10).addr());  // (from the original)
    r1_1->word_0 = ea_1->word_0;
    r1_1->word_4 = r2_1;
    count_to_time_stamp(frame.at(0x20).addr(), r1_1.addr(), r2_1);  // (from the original)
    u32 r2_2 = s8(frame->byte_29);
    u32 r1_2 = s8(frame->byte_28);
    frame->word_0 = u32(s8(frame->byte_27));
    frame->word_4 = r1_2;
    frame->word_8 = r2_2;
    u32 r3_2 = s8(frame->byte_25);
    u32 r2_3 = s8(frame->byte_24);
    call_005a8cc0(frame.at(0x18).addr(), frame->word_20, r2_3, r3_2);  // (from the original)
    gptr<Local_005a8da4_ea_2> ea_2 = gptr<Local_005a8da4_ea_2>(frame.at(0x18).addr());  // (from the original)
    u32 r1_4 = ea_2->word_4;
    word_pair->first = ea_2->word_0;
    word_pair->second = r1_4;
}

}  // namespace d_005a8da4
GUEST_EXPORT_FRAMED(0x005a8da4, d_005a8da4::f_005a8da4, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_005a8e08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a8e08 {

struct __attribute__((packed)) Local_005a8e08_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005a8e08_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_005a8e08_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_005a8e08_r1_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005a8e08_r1_1, word_0, 0x0);
GUEST_OFFSET(Local_005a8e08_r1_1, word_4, 0x4);

inline constexpr guest::Function<0x00124130, u32(u32, u32, u32, u32)> call_00124130;
inline constexpr guest::Function<0x001264f0, u32(u32, u32, u32)> count_to_time_stamp;
inline constexpr guest::Function<0x005a8cc0, u32(u32, u32, u32, u32)> call_005a8cc0;

struct __attribute__((packed)) Frame_005a8e08 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0xc];  // (not read or written by name)
    u32 word_18;
    u8 byte_1c;
    u8 byte_1d;
    u8 unknown_1e[0x1];  // (not read or written by name)
    u8 byte_1f;
    u8 byte_20;
    u8 byte_21;
    u8 unknown_22[0xe];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005a8e08, word_0, 0x0);
GUEST_OFFSET(Frame_005a8e08, word_4, 0x4);
GUEST_OFFSET(Frame_005a8e08, word_8, 0x8);
GUEST_OFFSET(Frame_005a8e08, word_18, 0x18);
GUEST_OFFSET(Frame_005a8e08, byte_1c, 0x1c);
GUEST_OFFSET(Frame_005a8e08, byte_1d, 0x1d);
GUEST_OFFSET(Frame_005a8e08, byte_1f, 0x1f);
GUEST_OFFSET(Frame_005a8e08, byte_20, 0x20);
GUEST_OFFSET(Frame_005a8e08, byte_21, 0x21);
GUEST_SIZE(Frame_005a8e08, 0x30);

void f_005a8e08(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005a8e08> frame;  // the original's stack frame
    call_00124130(frame.at(0x28).addr(), r1, r2, r3);  // (from the original)
    gptr<Local_005a8e08_ea_1> ea_1 = gptr<Local_005a8e08_ea_1>(frame.at(0x28).addr());  // (from the original)
    u32 r2_1 = ea_1->word_4;
    gptr<Local_005a8e08_r1_1> r1_1 = gptr<Local_005a8e08_r1_1>(frame.at(0x10).addr());  // (from the original)
    r1_1->word_0 = ea_1->word_0;
    r1_1->word_4 = r2_1;
    count_to_time_stamp(frame.at(0x18).addr(), r1_1.addr(), r2_1);  // (from the original)
    u32 r2_2 = s8(frame->byte_21);
    u32 r1_2 = s8(frame->byte_20);
    frame->word_0 = u32(s8(frame->byte_1f));
    frame->word_4 = r1_2;
    frame->word_8 = r2_2;
    u32 r3_2 = s8(frame->byte_1d);
    u32 r2_3 = s8(frame->byte_1c);
    call_005a8cc0(r0, frame->word_18, r2_3, r3_2);
}

}  // namespace d_005a8e08
GUEST_EXPORT_FRAMED(0x005a8e08, d_005a8e08::f_005a8e08, 0x4010);  // pushes {r4, lr} first, as the original

// f_005a8e60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a8e60 {

inline constexpr guest::Function<0x001264f0, u32(u32, u32, u32, u32)> count_to_time_stamp;
inline constexpr guest::Function<0x005a8cc0, u32(u32, u32, u32, u32)> call_005a8cc0;

struct __attribute__((packed)) Frame_005a8e60 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 byte_10;
    u8 byte_11;
    u8 unknown_12[0x1];  // (not read or written by name)
    u8 byte_13;
    u8 byte_14;
    u8 byte_15;
    u8 unknown_16[0x2];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005a8e60, word_0, 0x0);
GUEST_OFFSET(Frame_005a8e60, word_4, 0x4);
GUEST_OFFSET(Frame_005a8e60, word_8, 0x8);
GUEST_OFFSET(Frame_005a8e60, word_c, 0xc);
GUEST_OFFSET(Frame_005a8e60, byte_10, 0x10);
GUEST_OFFSET(Frame_005a8e60, byte_11, 0x11);
GUEST_OFFSET(Frame_005a8e60, byte_13, 0x13);
GUEST_OFFSET(Frame_005a8e60, byte_14, 0x14);
GUEST_OFFSET(Frame_005a8e60, byte_15, 0x15);
GUEST_SIZE(Frame_005a8e60, 0x18);

void f_005a8e60(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005a8e60> frame;  // the original's stack frame
    count_to_time_stamp(frame.at(0xc).addr(), r1, r2, r3);  // (from the original)
    u32 r2_1 = s8(frame->byte_15);
    u32 r1_1 = s8(frame->byte_14);
    frame->word_0 = u32(s8(frame->byte_13));
    frame->word_4 = r1_1;
    frame->word_8 = r2_1;
    u32 r3_1 = s8(frame->byte_11);
    u32 r2_2 = s8(frame->byte_10);
    call_005a8cc0(r0, frame->word_c, r2_2, r3_1);
}

}  // namespace d_005a8e60
GUEST_EXPORT_FRAMED(0x005a8e60, d_005a8e60::f_005a8e60, 0x4010);  // pushes {r4, lr} first, as the original

// f_005a8ea0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a8ea0 {

struct __attribute__((packed)) Object_005a8ea0_1 {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
    u8 unknown_5[0x2];  // (not used here)
    u8 byte_7;
    u8 unknown_8[0x2];  // (not used here)
    u8 byte_a;
    u8 unknown_b[0x2];  // (not used here)
    u8 byte_d;
    u8 unknown_e[0x2];  // (not used here)
    u8 byte_10;
};
GUEST_OFFSET(Object_005a8ea0_1, byte_4, 0x4);
GUEST_OFFSET(Object_005a8ea0_1, byte_7, 0x7);
GUEST_OFFSET(Object_005a8ea0_1, byte_a, 0xa);
GUEST_OFFSET(Object_005a8ea0_1, byte_d, 0xd);
GUEST_OFFSET(Object_005a8ea0_1, byte_10, 0x10);

struct __attribute__((packed)) Local_005a8ea0_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_005a8ea0_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_005a8ea0_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_005a8ea0_ea_1, word_8, 0x8);

struct __attribute__((packed)) Local_005a8ea0_r4_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_005a8ea0_r4_1, word_0, 0x0);
GUEST_OFFSET(Local_005a8ea0_r4_1, word_4, 0x4);
GUEST_OFFSET(Local_005a8ea0_r4_1, word_8, 0x8);

inline constexpr guest::Function<0x002fa9d0, u32(u32, u32, u32, u32)> string_length;
inline constexpr guest::Function<0x005a8cc0, u32(u32, u32, u32, u32)> call_005a8cc0;
inline constexpr guest::Function<0x005af6dc, u32(u32, u32, u32)> call_005af6dc;

struct __attribute__((packed)) Frame_005a8ea0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x18];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005a8ea0, word_0, 0x0);
GUEST_OFFSET(Frame_005a8ea0, word_4, 0x4);
GUEST_OFFSET(Frame_005a8ea0, word_8, 0x8);
GUEST_SIZE(Frame_005a8ea0, 0x24);

u32 f_005a8ea0(u32 r0, gptr<Object_005a8ea0_1> arg1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005a8ea0> frame;  // the original's stack frame
    u32 length = string_length(arg1.addr(), arg1.addr(), r2, r3);
    if (length == 0x13u && arg1->byte_4 == 0x3au && arg1->byte_7 == 0x3au && arg1->byte_a == 0x20u && arg1->byte_d == 0x3au && arg1->byte_10 == 0x3au) {  // (from the original)
        u32 r0_3 = call_005af6dc(frame.at(0xc).addr(), arg1.addr(), 4u);  // (from the original)
        if (r0_3 == 0) {
            return r0_3;
        }
        u32 r0_5 = call_005af6dc(frame.at(0x10).addr(), arg1.addr() + 5u, 2u);  // (from the original)
        if (r0_5 == 0) {
            return r0_5;
        }
        u32 r0_7 = call_005af6dc(frame.at(0x14).addr(), arg1.addr() + 8u, 2u);  // (from the original)
        if (r0_7 == 0) {
            return r0_7;
        }
        u32 r0_9 = call_005af6dc(frame.at(0x18).addr(), arg1.addr() + 0xbu, 2u);  // (from the original)
        if (r0_9 == 0) {
            return r0_9;
        }
        u32 r0_11 = call_005af6dc(frame.at(0x1c).addr(), arg1.addr() + 0xeu, 2u);  // (from the original)
        if (r0_11 == 0) {
            return r0_11;
        }
        u32 r0_13 = call_005af6dc(frame.at(0x20).addr(), arg1.addr() + 0x11u, 2u);  // (from the original)
        if (r0_13 == 0) {
            return r0_13;
        }
        gptr<Local_005a8ea0_r4_1> r4_1 = gptr<Local_005a8ea0_r4_1>(frame.at(0xc).addr());  // (from the original)
        gptr<Local_005a8ea0_ea_1> ea_1 = gptr<Local_005a8ea0_ea_1>(frame.at(0x18).addr());  // (from the original)
        u32 r1_13 = ea_1->word_4;
        u32 r2_1 = ea_1->word_8;
        frame->word_0 = ea_1->word_0;
        frame->word_4 = r1_13;
        frame->word_8 = r2_1;
        u32 r0_14 = call_005a8cc0(r0, r4_1->word_0, r4_1->word_4, r4_1->word_8);
        if (r0_14 != 0) {
            r0_14 = 1u;
        }
        return r0_14;
    }
    return 0u;
}

}  // namespace d_005a8ea0
GUEST_EXPORT_FRAMED(0x005a8ea0, d_005a8ea0::f_005a8ea0, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_005a8fd0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a8fd0 {

struct __attribute__((packed)) Object_005a8fd0_0 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
    u8 unknown_9[0x7];  // (not used here)
    u8 byte_10;
    u8 unknown_11[0x3];  // (not used here)
    u32 word_14;
    u8 byte_18;
    u8 unknown_19[0x3];  // (not used here)
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(Object_005a8fd0_0, byte_8, 0x8);
GUEST_OFFSET(Object_005a8fd0_0, byte_10, 0x10);
GUEST_OFFSET(Object_005a8fd0_0, word_14, 0x14);
GUEST_OFFSET(Object_005a8fd0_0, byte_18, 0x18);
GUEST_OFFSET(Object_005a8fd0_0, word_1c, 0x1c);
GUEST_OFFSET(Object_005a8fd0_0, word_20, 0x20);

inline constexpr guest::Function<0x005a3c04, u32(u32, u32, u32, u32)> imgdb__FileWriter__virtual_2;
inline constexpr guest::Function<0x005ac2bc, u32(u32, u32, u32)> call_005ac2bc;
inline constexpr guest::Function<0x005ac5dc, u32(u32, u32, u32, u32)> call_005ac5dc;
inline constexpr guest::Function<0x005ad690, u32(u32, u32, u32, u32)> call_005ad690;

struct __attribute__((packed)) Frame_005a8fd0 {
    u32 word_0;
    u8 unknown_4[0x9c];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005a8fd0, word_0, 0x0);
GUEST_SIZE(Frame_005a8fd0, 0xa0);

u32 f_005a8fd0(gptr<Object_005a8fd0_0> arg0) {
    guest::StackFrameOf<Frame_005a8fd0> frame;  // the original's stack frame
    frame->word_0 = u32(s8(arg0->byte_18));
    u32 r3_1 = arg0->word_14;
    u32 r2_1 = arg0->byte_10;
    call_005ad690(frame.at(0x60).addr(), 0x1eu, r2_1, r3_1);  // (from the original)
    frame->word_0 = u32(s8(arg0->byte_18));
    u32 r3_2 = arg0->word_14;
    u32 r2_2 = arg0->byte_10;
    call_005ac5dc(frame.at(8).addr(), 0x2cu, r2_2, r3_2);  // (from the original)
    u32 r0_3 = arg0->byte_10;
    u32 r0_4 = call_005ac2bc(r0_3, frame.at(0x60).addr(), 0u);  // (from the original)
    if (r0_4 != 0) {
        return r0_4;
    }
    frame->word_0 = arg0->word_20;
    u32 r3_4 = arg0->word_1c;
    u32 r1_3 = arg0->byte_10;
    imgdb__FileWriter__virtual_2(arg0.addr(), r1_3, frame.at(8).addr(), r3_4);
    return s8(arg0->byte_8);
}

}  // namespace d_005a8fd0
GUEST_EXPORT_FRAMED(0x005a8fd0, d_005a8fd0::f_005a8fd0, 0x4010);  // pushes {r4, lr} first, as the original

// f_005a9054: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a9054 {

struct __attribute__((packed)) Local_005a9054_r4_1 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_005a9054_r4_1, float_0, 0x0);
GUEST_OFFSET(Local_005a9054_r4_1, float_4, 0x4);

inline constexpr u32 vtable_imgdb__ImageFileWriter = 0x00907df8u;

void imgdb__FileWriter__FileWriter_005a9054(gptr<imgdb__ImageFileWriter> image_file_writer, u32 r1, u32 r2, u32 r3) {
    gptr<Local_005a9054_r4_1> r4_1 = gptr<Local_005a9054_r4_1>(guest::cpu()->r[13] + 0xcu);  // (from the original)
    u32 r12_1 = *gptr<u32>(guest::cpu()->r[13] + 8u);
    float S0_1 = r4_1->float_0;
    float S1_1 = r4_1->float_4;
    image_file_writer->word_4 = r1;
    image_file_writer->byte_8 = 1;
    image_file_writer->word_c = 0;
    image_file_writer->word_0 = vtable_imgdb__ImageFileWriter;
    image_file_writer->byte_10 = u8(r2);
    image_file_writer->word_14 = r3;
    image_file_writer->byte_18 = u8(r12_1);
    image_file_writer->float_1c = S0_1;
    image_file_writer->float_20 = S1_1;
    guest::cpu()->r[1] = vtable_imgdb__ImageFileWriter;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_005a9054
GUEST_EXPORT_FRAMED(0x005a9054, d_005a9054::imgdb__FileWriter__FileWriter_005a9054, 0x30);  // pushes {r4, r5} first, as the original

// f_005a90b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a90b0 {

struct __attribute__((packed)) Object_005a90b0_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u8 byte_10;
};
GUEST_OFFSET(Object_005a90b0_0, word_c, 0xc);
GUEST_OFFSET(Object_005a90b0_0, byte_10, 0x10);


void f_005a90b0(gptr<Object_005a90b0_0> arg0, u32 r1) {
    *gptr<u32>(arg0->word_c + 0x10u) = r1;  // (from the original)
    arg0->byte_10 = 1;
}

}  // namespace d_005a90b0
GUEST_EXPORT(0x005a90b0, d_005a90b0::f_005a90b0);

// f_005a90c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a90c4 {

struct __attribute__((packed)) Object_005a90c4_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_005a90c4_0, word_c, 0xc);

struct __attribute__((packed)) Local_005a90c4_r1_1 {
    u8 unknown_0[0x14];  // (not used here)
    u16 half_14;
};
GUEST_OFFSET(Local_005a90c4_r1_1, half_14, 0x14);


void f_005a90c4(gptr<Object_005a90c4_0> arg0, u32 r1) {
    u32 zf_1 = r1 == 0;
    gptr<Local_005a90c4_r1_1> r1_1 = gptr<Local_005a90c4_r1_1>(arg0->word_c);
    u32 r0_1 = r1_1->half_14;
    r1_1->half_14 = u16(zf_1 ? r0_1 & ~0x10u : r0_1 | 0x10u);  // (from the original)
}

}  // namespace d_005a90c4
GUEST_EXPORT(0x005a90c4, d_005a90c4::f_005a90c4);

// f_005a91e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a91e0 {

inline guest::global<u8, 0x009816a8> global_009816a8;
inline guest::global<u32, 0x009816ac> global_009816ac;

void f_005a91e0(u32 r0) {
    *global_009816ac = r0;
    *global_009816a8 = 1;
}

}  // namespace d_005a91e0
GUEST_EXPORT(0x005a91e0, d_005a91e0::f_005a91e0);

// f_005a9c14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a9c14 {

struct __attribute__((packed)) Object_005a9c14_0 {
    u8 unknown_0[0x20];  // (not used here)
    u32 word_20;
    u8 unknown_24[0x8];  // (not used here)
    u32 word_2c;
    u8 unknown_30[0x4];  // (not used here)
    u32 word_34;
    u8 unknown_38[0x8];  // (not used here)
    u32 word_40;
};
GUEST_OFFSET(Object_005a9c14_0, word_20, 0x20);
GUEST_OFFSET(Object_005a9c14_0, word_2c, 0x2c);
GUEST_OFFSET(Object_005a9c14_0, word_34, 0x34);
GUEST_OFFSET(Object_005a9c14_0, word_40, 0x40);

struct __attribute__((packed)) Object_005a9c14_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_005a9c14_1, word_0, 0x0);


void f_005a9c14(gptr<Object_005a9c14_0> arg0, gptr<Object_005a9c14_1> arg1) {
    if (arg0->word_20 != 0) {
        *gptr<u32>(arg0->word_2c + 0x10u) = arg1->word_0;  // (from the original)
    }
    if (arg0->word_34 == 0) {
        return;
    }
    *gptr<u32>(arg0->word_40 + 0xcu) = arg1->word_0;  // (from the original)
}

}  // namespace d_005a9c14
GUEST_EXPORT(0x005a9c14, d_005a9c14::f_005a9c14);

// f_005aa410: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005aa410 {

inline constexpr u32 vtable_imgdb__SdArchiveMounter = 0x00907e4cu;
inline constexpr u32 vtable_imgdb__SdArchiveMounter_at_4 = 0x00907e6cu;

void imgdb__SdArchiveMounter__SdArchiveMounter(gptr<imgdb__SdArchiveMounter> sd_archive_mounter) {
    sd_archive_mounter->word_0 = vtable_imgdb__SdArchiveMounter;
    sd_archive_mounter->word_4 = vtable_imgdb__SdArchiveMounter_at_4;
    sd_archive_mounter->byte_8 = 0;
    sd_archive_mounter->byte_9 = 0;
}

}  // namespace d_005aa410
GUEST_EXPORT(0x005aa410, d_005aa410::imgdb__SdArchiveMounter__SdArchiveMounter);

// f_005aa460: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005aa460 {


void f_005aa460(gptr<WordPair> word_pair, u32 r1) {
    u32 r1_1 = 0x1cu & r1 << 2 | word_pair->second & ~0x1cu;  // (from the original)
    word_pair->second = r1_1;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_005aa460
GUEST_EXPORT(0x005aa460, d_005aa460::f_005aa460);

// f_005aa47c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005aa47c {

struct __attribute__((packed)) Object_005aa47c_1 {
    u16 half_0;
    u16 half_2;
};
GUEST_OFFSET(Object_005aa47c_1, half_0, 0x0);
GUEST_OFFSET(Object_005aa47c_1, half_2, 0x2);


void f_005aa47c(gptr<WordPair> word_pair, gptr<Object_005aa47c_1> arg1) {
    u32 r2_1 = word_pair->second & ~0x7000u & ~0xfe0u | ~0x1f8000u & u32(arg1->half_0) << 5;  // (from the original)
    word_pair->second = r2_1;
    u32 r1_1 = ~0x60000000u & u32(arg1->half_2) << 0xf | r2_1 & ~0x1fc00000u & ~0x3f8000u;  // (from the original)
    word_pair->second = r1_1;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_005aa47c
GUEST_EXPORT(0x005aa47c, d_005aa47c::f_005aa47c);

// f_005aa4bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005aa4bc {


void f_005aa4bc(gptr<WordPair> word_pair, u32 r1) {
    word_pair->second = r1 & 3u | word_pair->second & ~3u;
}

}  // namespace d_005aa4bc
GUEST_EXPORT(0x005aa4bc, d_005aa4bc::f_005aa4bc);

// f_005aa4d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005aa4d4 {


void f_005aa4d4(gptr<WordPair> word_pair, u32 r1) {
    u32 r1_1 = word_pair->first & 0x3ffffu | r1 << 0x12;  // (from the original)
    word_pair->first = r1_1;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_005aa4d4
GUEST_EXPORT(0x005aa4d4, d_005aa4d4::f_005aa4d4);

// f_005aa4ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005aa4ec {


void f_005aa4ec(gptr<WordPair> word_pair, u32 r1) {
    word_pair->first = r1 & 0x3ffffu | word_pair->first >> 0x12 << 0x12;  // (from the original)
}

}  // namespace d_005aa4ec
GUEST_EXPORT(0x005aa4ec, d_005aa4ec::f_005aa4ec);

// f_005aa50c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005aa50c {

struct __attribute__((packed)) Object_005aa50c_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_005aa50c_0, word_0, 0x0);

struct __attribute__((packed)) Object_005aa50c_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_005aa50c_1, word_0, 0x0);

struct __attribute__((packed)) Local_005aa50c_r12 {
    u32 word_0;
};
GUEST_OFFSET(Local_005aa50c_r12, word_0, 0x0);


u32 f_005aa50c(gptr<Object_005aa50c_0> arg0, gptr<Object_005aa50c_1> arg1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    gptr<Local_005aa50c_r12> r12 = gptr<Local_005aa50c_r12>(r0);
    r0 = 0u;
    u32 r4 = arg0->word_0;
    u32 r5 = arg1->word_0;
    u32 r7 = 1u;
    for (;;) {
        u32 r6_2 = r12->word_0;
        u32 res_1 = r6_2 - r2;
        u32 nf_1 = res_1 >> 0x1f;  // (from the original)
        u32 zf_1 = res_1 == 0;
        u32 vf_1 = ((r6_2 ^ r2) & (r6_2 ^ res_1)) >> 0x1f;  // (from the original)
        if (zf_1 || nf_1 != vf_1) {
            u32 r6_3 = arg1->word_0;
            u32 res_2 = r6_3 - r3;
            nf_1 = res_2 >> 0x1f;  // (from the original)
            zf_1 = res_2 == 0;
            vf_1 = ((r6_3 ^ r3) & (r6_3 ^ res_2)) >> 0x1f;  // (from the original)
        }
        if (zf_1 || nf_1 != vf_1) {
            break;
        }
        r0 += 1u;
        u32 r6_1 = lsl_r(r7, r0 & 0xff);  // (from the original)
        r12->word_0 = asr_r(r6_1 + r4 - 1u, r0 & 0xff);  // (from the original)
        arg1->word_0 = asr_r(r6_1 + r5 - 1u, r0 & 0xff);  // (from the original)
        guest::preempt();
    }
    return r0;
}

}  // namespace d_005aa50c
GUEST_EXPORT_FRAMED(0x005aa50c, d_005aa50c::f_005aa50c, 0x3f0);  // pushes {r4, r5, r6, r7, r8, r9} first, as the original

// f_005aa638: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005aa638 {

struct __attribute__((packed)) Object_005aa638_0 {
    u8 unknown_0[0x4e];  // (not used here)
    u16 half_4e;
};
GUEST_OFFSET(Object_005aa638_0, half_4e, 0x4e);


void f_005aa638(gptr<Object_005aa638_0> arg0, u32 r1, u32 r2) {
    *gptr<u32>(arg0.addr() + 0x38u + (r1 << 2) + 0x18u) = r2;  // (from the original)
    arg0->half_4e = u16(u32(arg0->half_4e) | lsl_r(1u, r1 & 0xff));  // (from the original)
}

}  // namespace d_005aa638
GUEST_EXPORT(0x005aa638, d_005aa638::f_005aa638);

// f_005aa65c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005aa65c {

struct __attribute__((packed)) Object_005aa65c_0 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
    u8 byte_4;
    u8 byte_5;
};
GUEST_OFFSET(Object_005aa65c_0, byte_0, 0x0);
GUEST_OFFSET(Object_005aa65c_0, byte_1, 0x1);
GUEST_OFFSET(Object_005aa65c_0, byte_2, 0x2);
GUEST_OFFSET(Object_005aa65c_0, byte_3, 0x3);
GUEST_OFFSET(Object_005aa65c_0, byte_4, 0x4);
GUEST_OFFSET(Object_005aa65c_0, byte_5, 0x5);


void f_005aa65c(gptr<Object_005aa65c_0> arg0, u32 r1_unused, u32 r2) {
    u32 r1_1 = r2 & 0xfu;  // (from the original)
    u32 zf_1 = r1_1 == 9u;
    u32 cf_1 = r1_1 >= 9u;
    if (r1_1 <= 9u) {
        r1_1 += 0x30u;  // (from the original)
    }
    if (cf_1 && !zf_1) {
        r1_1 += 0x57u;  // (from the original)
    }
    u32 r2_1 = r2 >> 4;
    u32 r1_2 = r2_1 & 0xfu;  // (from the original)
    u32 zf_2 = r1_2 == 9u;
    u32 cf_2 = r1_2 >= 9u;
    if (r1_2 <= 9u) {
        r1_2 += 0x30u;  // (from the original)
    }
    if (cf_2 && !zf_2) {
        r1_2 += 0x57u;  // (from the original)
    }
    arg0->byte_4 = u8(sxtb(r1_1));
    u32 r2_2 = r2_1 >> 4;
    u32 r1_3 = r2_2 & 0xfu;  // (from the original)
    u32 zf_3 = r1_3 == 9u;
    u32 cf_3 = r1_3 >= 9u;
    if (r1_3 <= 9u) {
        r1_3 += 0x30u;  // (from the original)
    }
    if (cf_3 && !zf_3) {
        r1_3 += 0x57u;  // (from the original)
    }
    arg0->byte_3 = u8(sxtb(r1_2));
    u32 r2_3 = r2_2 >> 4;
    u32 r1_4 = r2_3 & 0xfu;  // (from the original)
    u32 zf_4 = r1_4 == 9u;
    u32 cf_4 = r1_4 >= 9u;
    if (r1_4 <= 9u) {
        r1_4 += 0x30u;  // (from the original)
    }
    if (cf_4 && !zf_4) {
        r1_4 += 0x57u;  // (from the original)
    }
    arg0->byte_2 = u8(sxtb(r1_3));
    u32 r1_5 = (r2_3 >> 4) & 0xfu;  // (from the original)
    u32 zf_5 = r1_5 == 9u;
    u32 cf_5 = r1_5 >= 9u;
    if (r1_5 <= 9u) {
        r1_5 += 0x30u;  // (from the original)
    }
    if (cf_5 && !zf_5) {
        r1_5 += 0x57u;  // (from the original)
    }
    arg0->byte_1 = u8(sxtb(r1_4));
    arg0->byte_0 = u8(sxtb(r1_5));
    arg0->byte_5 = 0;
}

}  // namespace d_005aa65c
GUEST_EXPORT(0x005aa65c, d_005aa65c::f_005aa65c);

// f_005aa6f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005aa6f0 {

struct __attribute__((packed)) Object_005aa6f0_0 {
    u8 unknown_0[0x40];  // (not used here)
    u32 word_40;
    u32 word_44;
};
GUEST_OFFSET(Object_005aa6f0_0, word_40, 0x40);
GUEST_OFFSET(Object_005aa6f0_0, word_44, 0x44);

struct __attribute__((packed)) Object_005aa6f0_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_005aa6f0_1, word_0, 0x0);
GUEST_OFFSET(Object_005aa6f0_1, word_4, 0x4);


void f_005aa6f0(gptr<Object_005aa6f0_0> arg0, gptr<Object_005aa6f0_1> arg1) {
    u32 r1_1 = arg1->word_0;
    u32 r2_1 = arg1->word_4;
    arg0->word_40 = r1_1;
    arg0->word_44 = r2_1;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_005aa6f0
GUEST_EXPORT(0x005aa6f0, d_005aa6f0::f_005aa6f0);

// f_005aa700: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005aa700 {

struct __attribute__((packed)) Object_005aa700_0 {
    u8 unknown_0[0x48];  // (not used here)
    u32 word_48;
    u8 unknown_4c[0x2c];  // (not used here)
    u8 byte_78;
};
GUEST_OFFSET(Object_005aa700_0, word_48, 0x48);
GUEST_OFFSET(Object_005aa700_0, byte_78, 0x78);


void f_005aa700(gptr<Object_005aa700_0> arg0, u32 r1) {
    arg0->word_48 = r1;
    arg0->byte_78 = 1;
}

}  // namespace d_005aa700
GUEST_EXPORT(0x005aa700, d_005aa700::f_005aa700);

// f_005aa710: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005aa710 {

struct __attribute__((packed)) Object_005aa710_0 {
    u8 unknown_0[0xa];  // (not used here)
    u8 byte_a;
};
GUEST_OFFSET(Object_005aa710_0, byte_a, 0xa);


void f_005aa710(gptr<Object_005aa710_0> arg0, u32 r1) {
    if (r1 == 0 || r1 == 1u) {
        arg0->byte_a = u8(r1);
    }
}

}  // namespace d_005aa710
GUEST_EXPORT(0x005aa710, d_005aa710::f_005aa710);

// f_005aa73c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005aa73c {

struct __attribute__((packed)) Object_005aa73c_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_005aa73c_0, word_c, 0xc);

struct __attribute__((packed)) Object_005aa73c_1 {
    u16 half_0;
    u16 half_2;
};
GUEST_OFFSET(Object_005aa73c_1, half_0, 0x0);
GUEST_OFFSET(Object_005aa73c_1, half_2, 0x2);


void f_005aa73c(gptr<Object_005aa73c_0> arg0, gptr<Object_005aa73c_1> arg1) {
    u32 r2_1 = arg0->word_c & ~0x700u & ~0xfeu | ~0x1f800u & u32(arg1->half_0) << 1;  // (from the original)
    arg0->word_c = r2_1;
    u32 r1_1 = 0x3f800u & u32(arg1->half_2) << 0xb | r2_1 & ~0x3f800u;  // (from the original)
    arg0->word_c = r1_1;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_005aa73c
GUEST_EXPORT(0x005aa73c, d_005aa73c::f_005aa73c);

// f_005aa778: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005aa778 {

struct __attribute__((packed)) Object_005aa778_0 {
    u8 unknown_0[0xd];  // (not used here)
    u8 byte_d;
    u8 unknown_e[0x12];  // (not used here)
    u8 byte_20;
};
GUEST_OFFSET(Object_005aa778_0, byte_d, 0xd);
GUEST_OFFSET(Object_005aa778_0, byte_20, 0x20);

inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x005a8b14, u32(u32)> clear_word_pair_005a8b14;

void f_005aa778(gptr<Object_005aa778_0> arg0, u32 r1) {
    clear_aligned(arg0.addr(), 0x6cu);  // (from the original)
    clear_word_pair_005a8b14(arg0.addr());
    arg0->byte_d = 4;
    if (r1 == 1u || r1 == 2u) {
        arg0->byte_20 = 0;
    } else if (r1 == 3u) {
        arg0->byte_20 = 9;
    }
}

}  // namespace d_005aa778
GUEST_EXPORT_FRAMED(0x005aa778, d_005aa778::f_005aa778, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005aa7c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005aa7c0 {

struct __attribute__((packed)) Object_005aa7c0_0 {
    u8 unknown_0[0xd];  // (not used here)
    u8 byte_d;
    u8 unknown_e[0x12];  // (not used here)
    u8 byte_20;
};
GUEST_OFFSET(Object_005aa7c0_0, byte_d, 0xd);
GUEST_OFFSET(Object_005aa7c0_0, byte_20, 0x20);

inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x005a8b14, u32(u32)> clear_word_pair_005a8b14;

void f_005aa7c0(gptr<Object_005aa7c0_0> arg0) {
    clear_aligned(arg0.addr(), 0x6cu);  // (from the original)
    clear_word_pair_005a8b14(arg0.addr());
    arg0->byte_d = 4;
    arg0->byte_20 = 0;
}

}  // namespace d_005aa7c0
GUEST_EXPORT_FRAMED(0x005aa7c0, d_005aa7c0::f_005aa7c0, 0x4010);  // pushes {r4, lr} first, as the original

// f_005aa7ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005aa7ec {

struct __attribute__((packed)) Object_005aa7ec_0 {
    u8 unknown_0[0xf];  // (not used here)
    u8 byte_f;
};
GUEST_OFFSET(Object_005aa7ec_0, byte_f, 0xf);


void f_005aa7ec(gptr<Object_005aa7ec_0> arg0, u32 r1) {
    arg0->byte_f = u8(u32(arg0->byte_f) & ~lsl_r(1u, r1 & 0xff));  // (from the original)
    *gptr<u32>(arg0.addr() + (r1 << 2) + 0x10u) = 0;  // (from the original)
}

}  // namespace d_005aa7ec
GUEST_EXPORT_FRAMED(0x005aa7ec, d_005aa7ec::f_005aa7ec, 0x10);  // pushes {r4} first, as the original

// f_005aa814: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005aa814 {

struct __attribute__((packed)) Object_005aa814_0 {
    u8 unknown_0[0xf];  // (not used here)
    u8 byte_f;
};
GUEST_OFFSET(Object_005aa814_0, byte_f, 0xf);


void f_005aa814(gptr<Object_005aa814_0> arg0, u32 r1, u32 r2) {
    arg0->byte_f = u8(u32(arg0->byte_f) | lsl_r(1u, r1 & 0xff));  // (from the original)
    *gptr<u32>(arg0.addr() + (r1 << 2) + 0x10u) = r2;  // (from the original)
}

}  // namespace d_005aa814
GUEST_EXPORT_FRAMED(0x005aa814, d_005aa814::f_005aa814, 0x10);  // pushes {r4} first, as the original

// f_005aa838: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005aa838 {

struct __attribute__((packed)) Object_005aa838_0 {
    u8 unknown_0[0xe];  // (not used here)
    u8 byte_e;
};
GUEST_OFFSET(Object_005aa838_0, byte_e, 0xe);


void f_005aa838(gptr<Object_005aa838_0> arg0, u32 r1) {
    if (r1 == 0 || r1 == 1u) {
        arg0->byte_e = u8(r1);
    }
}

}  // namespace d_005aa838
GUEST_EXPORT(0x005aa838, d_005aa838::f_005aa838);

// f_005aa848: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005aa848 {

inline constexpr guest::Function<0x005a8af0, u32(u32, u32, u32, u32)> call_005a8af0;
inline constexpr guest::Function<0x005afe90, u32(u32)> call_005afe90;

void f_005aa848(u32 r0) {
    u32 r5 = r0;
    call_005a8af0(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r4 = 0u;
    do {
        call_005afe90(r5 + r4 * 0x12u + 0x50u);  // (from the original)
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 4);
}

}  // namespace d_005aa848
GUEST_EXPORT_FRAMED(0x005aa848, d_005aa848::f_005aa848, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005aa878: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005aa878 {


u32 f_005aa878(u32 r0) {
    return r0 + 7u & ~3u;
}

}  // namespace d_005aa878
GUEST_EXPORT(0x005aa878, d_005aa878::f_005aa878);

// f_005aa884: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005aa884 {

struct __attribute__((packed)) Object_005aa884_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_005aa884_0, word_0, 0x0);
GUEST_OFFSET(Object_005aa884_0, word_4, 0x4);

inline constexpr guest::Function<0x00301444, u32(u32, u32, u32, u32)> clear;

void f_005aa884(gptr<Object_005aa884_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 zf_1 = r1 == 0;
    u32 r4 = r3;
    arg0->word_0 = r1;
    if (!zf_1) {
        zf_1 = r2 == 0;
    }
    u32 r5 = r0;
    u32 r1_1 = r2;
    arg0->word_4 = r2;
    if (!zf_1 && (r4 + 7u & ~3u) <= r2) {
        clear(r1, r1_1, r2, r1);
        r1_1 = guest::cpu()->r[1];
        u32 r0_1 = arg0->word_0;
        r2 = 0u;
        *gptr<u32>(r0_1) = r2;
        *gptr<u16>(r0_1) = u16(r4);
        r0 = r2;
        if (s32(r4) > 0) {
            do {
                r1_1 = *gptr<u32>(r5) + 4u;
                *gptr<u8>(r1_1 + r0) = u8(r2);
                r0 += 1u;
                guest::preempt();
            } while (s32(r4) > s32(r0));
        }
    }
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_005aa884
GUEST_EXPORT_FRAMED(0x005aa884, d_005aa884::f_005aa884, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005aa970: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005aa970 {

struct __attribute__((packed)) imgdb__PhotoFileReader {
    u32 word_0;
    u8 unknown_4[0x2c];  // (not used here)
    u32 word_30;
    u8 byte_34;
    u8 unknown_35[0x3];  // (not used here)
    u32 word_38;
    u8 byte_3c;
};
GUEST_OFFSET(imgdb__PhotoFileReader, word_0, 0x0);
GUEST_OFFSET(imgdb__PhotoFileReader, word_30, 0x30);
GUEST_OFFSET(imgdb__PhotoFileReader, byte_34, 0x34);
GUEST_OFFSET(imgdb__PhotoFileReader, word_38, 0x38);
GUEST_OFFSET(imgdb__PhotoFileReader, byte_3c, 0x3c);

inline constexpr u32 vtable_imgdb__PhotoFileReader = 0x00907e1cu;
inline constexpr u32 vtable_imgdb__PhotoImageInfoReader = 0x00907e9cu;
inline constexpr u32 global_009816a8_address = 0x009816a8u;
inline constexpr u32 global_009816ac_address = 0x009816acu;
inline guest::global<u32, 0x009816ac> global_009816ac;
inline constexpr guest::Function<0x005a3b10, u32(u32, u32, u32, u32)> imgdb__FileReader__FileReader_005a3b10;

void imgdb__PhotoFileReader__PhotoFileReader(gptr<imgdb__PhotoFileReader> photo_file_reader, u32 r1, u32 r2, u32 r3) {
    u32 r6_1 = *gptr<u32>(guest::cpu()->r[13] + 0x14u);  // (from the original)
    imgdb__FileReader__FileReader_005a3b10(photo_file_reader.addr(), r1, *global_009816ac, 0u);
    photo_file_reader->word_0 = vtable_imgdb__PhotoFileReader;
    photo_file_reader->word_30 = *global_009816ac;
    photo_file_reader->word_0 = vtable_imgdb__PhotoImageInfoReader;
    photo_file_reader->byte_34 = u8(r2);
    photo_file_reader->word_38 = r3;
    photo_file_reader->byte_3c = u8(r6_1);
    guest::cpu()->r[1] = vtable_imgdb__PhotoImageInfoReader;
}

}  // namespace d_005aa970
GUEST_EXPORT_FRAMED(0x005aa970, d_005aa970::imgdb__PhotoFileReader__PhotoFileReader, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_005aab04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005aab04 {

inline constexpr u32 vtable_imgdb__CtrNandArchiveMounter = 0x00907eb4u;
inline constexpr u32 vtable_imgdb__CtrNandArchiveMounter_at_4 = 0x00907ed4u;

void imgdb__CtrNandArchiveMounter__CtrNandArchiveMounter(gptr<imgdb__CtrNandArchiveMounter> ctr_nand_archive_mounter) {
    ctr_nand_archive_mounter->byte_8 = 0;
    ctr_nand_archive_mounter->word_0 = vtable_imgdb__CtrNandArchiveMounter;
    ctr_nand_archive_mounter->word_4 = vtable_imgdb__CtrNandArchiveMounter_at_4;
}

}  // namespace d_005aab04
GUEST_EXPORT(0x005aab04, d_005aab04::imgdb__CtrNandArchiveMounter__CtrNandArchiveMounter);

// f_005aab40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005aab40 {

inline guest::global<u8, 0x009816aa> global_009816aa;
inline guest::global<u32, 0x009816b4> global_009816b4;

void f_005aab40(u32 r0) {
    *global_009816b4 = r0;
    *global_009816aa = 1;
}

}  // namespace d_005aab40
GUEST_EXPORT(0x005aab40, d_005aab40::f_005aab40);

// f_005aab58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005aab58 {

inline guest::global<u8, 0x009816a9> global_009816a9;
inline guest::global<u32, 0x009816b0> global_009816b0;

void f_005aab58(u32 r0) {
    *global_009816b0 = r0;
    *global_009816a9 = 1;
}

}  // namespace d_005aab58
GUEST_EXPORT(0x005aab58, d_005aab58::f_005aab58);

// f_005aad34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005aad34 {

inline constexpr u32 vtable_imgdb__TwlNandArchiveMounter = 0x00907f0cu;
inline constexpr u32 vtable_imgdb__TwlNandArchiveMounter_at_4 = 0x00907f2cu;

void imgdb__TwlNandArchiveMounter__TwlNandArchiveMounter(gptr<imgdb__TwlNandArchiveMounter> twl_nand_archive_mounter) {
    twl_nand_archive_mounter->byte_8 = 0;
    twl_nand_archive_mounter->word_0 = vtable_imgdb__TwlNandArchiveMounter;
    twl_nand_archive_mounter->word_4 = vtable_imgdb__TwlNandArchiveMounter_at_4;
}

}  // namespace d_005aad34
GUEST_EXPORT(0x005aad34, d_005aad34::imgdb__TwlNandArchiveMounter__TwlNandArchiveMounter);

// f_005aad7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005aad7c {

struct __attribute__((packed)) Local_005aad7c_r2_3 {
    u16 half_0;
    u16 half_2;
};
GUEST_OFFSET(Local_005aad7c_r2_3, half_0, 0x0);
GUEST_OFFSET(Local_005aad7c_r2_3, half_2, 0x2);

inline constexpr guest::Function<0x00100835, u32(u32, u32, u32, u32)> string16_length;

void f_005aad7c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 nf_1 = 0;
    u32 zf_1 = 0;
    u32 vf_1 = 0;
    u32 r4 = r0;
    u32 r6 = r1;
    u32 r5 = r2;
    string16_length(r2, r1, r2, r3);
    if (s32(r6) <= 0) {
        r0 = 0u;
    } else {
        r0 = r6 & 1u;
        r1 = 0u;
        if (s32(r0) > 0) {
            do {
                u32 r2_1 = gptr<u16>(r5)[r1];
                if (r2_1 - 0x61u <= 0x19u) {  // (from the original)
                    r2_1 -= 0x20u;  // (from the original)
                }
                u32 r2_2 = sxtb(r2_1);
                *gptr<u8>(r4 + r1) = u8(r2_2);
                if (r2_2 == 0) {
                    return;
                }
                r1 += 1u;
                guest::preempt();
            } while (s32(r0) > s32(r1));
        }
    }
    if (s32(r0) < s32(r6)) {
        do {
            gptr<Local_005aad7c_r2_3> r2_3 = gptr<Local_005aad7c_r2_3>(r5 + (r0 << 1));
            u32 r1_1 = r2_3->half_0;
            if (r1_1 - 0x61u <= 0x19u) {  // (from the original)
                r1_1 -= 0x20u;  // (from the original)
            }
            u32 r1_2 = sxtb(r1_1);
            *gptr<u8>(r4 + r0) = u8(r1_2);
            if (r1_2 == 0) {
                break;
            }
            u32 r1_3 = r2_3->half_2;
            if (r1_3 - 0x61u <= 0x19u) {  // (from the original)
                r1_3 -= 0x20u;  // (from the original)
            }
            u32 r2_4 = r4 + r0;
            u32 r1_4 = sxtb(r1_3);
            nf_1 = r1_4 >> 0x1f;  // (from the original)
            zf_1 = r1_4 == 0;
            vf_1 = (r1_4 & (r1_4 ^ r1_4)) >> 0x1f;  // (from the original)
            if (!zf_1) {
                r0 += 2u;
                u32 res_1 = r6 - r0;
                nf_1 = res_1 >> 0x1f;  // (from the original)
                zf_1 = res_1 == 0;
                vf_1 = ((r6 ^ r0) & (r6 ^ res_1)) >> 0x1f;  // (from the original)
            }
            *gptr<u8>(r2_4 + 1u) = u8(r1_4);
            guest::preempt();
        } while (!zf_1 && nf_1 == vf_1);
    }
}

}  // namespace d_005aad7c
GUEST_EXPORT_FRAMED(0x005aad7c, d_005aad7c::f_005aad7c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005ab1fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ab1fc {

struct __attribute__((packed)) Object_005ab1fc_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_005ab1fc_0, byte_0, 0x0);

inline constexpr guest::Function<0x001416b0, u32(u32)> return_constant_0x97e098_;
inline constexpr guest::Function<0x005aac5c, u32(u32, u32, u32, u32)> imgdb__PhotoHeaderFileReader__destructor;
inline constexpr guest::Function<0x005aae3c, u32(u32, u32, u32, u32)> call_005aae3c;
inline constexpr guest::Function<0x005ab01c, u32(u32, u32, u32, u32)> call_005ab01c;
inline constexpr guest::Function<0x005ab334, u32(u32)> call_005ab334;
inline constexpr guest::Function<0x005ab388, u32(u32, u32, u32, u32)> imgdb__PhotoHeaderFileReader__PhotoHeaderFileReader;
inline constexpr guest::Function<0x00753cbc, u32(u32, u32, u32)> call_00753cbc;
inline constexpr guest::Function<0x007553d8, u32(u32, u32, u32, u32)> extension_index;

struct __attribute__((packed)) Frame_005ab1fc {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x14];  // (not read or written by name)
    u32 word_1c;
    u32 word_20;
    u8 unknown_24[0x24];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005ab1fc, word_0, 0x0);
GUEST_OFFSET(Frame_005ab1fc, word_4, 0x4);
GUEST_OFFSET(Frame_005ab1fc, word_1c, 0x1c);
GUEST_OFFSET(Frame_005ab1fc, word_20, 0x20);
GUEST_SIZE(Frame_005ab1fc, 0x48);

u32 f_005ab1fc(gptr<Object_005ab1fc_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005ab1fc> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r4 = 0;
    u32 r0_9 = 0;
    arg0->byte_0 = 0;
    u32 r0_1 = extension_index(r2, r1, r2, r3);
    if (r0_1 == 3u) {
    } else {
        u32 r0_2 = return_constant_0x97e098_(r0_1);
        frame->word_0 = r3;
        imgdb__PhotoHeaderFileReader__PhotoHeaderFileReader(frame.at(8).addr(), r0_2, r1, r2);
        u32 r0_5 = call_005ab334(frame.at(8).addr());
        if (r0_5 == 0) {
            u32 r0_6 = extension_index(r2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            r2 = guest::cpu()->r[2];
            u32 r7_1 = frame->word_1c;
            u32 r6_1 = frame->word_20;
            u32 r0_8 = call_00753cbc(frame.at(8).addr(), guest::cpu()->r[1], r2);
            r1 = guest::cpu()->r[1];
            r3 = guest::cpu()->r[3];
            arg0->byte_0 = 0;
            if (r0_6 == 1u) {
                frame->word_0 = r0_8;
                frame->word_4 = r1;
                r2 = r6_1;
                r0_9 = call_005ab01c(r0, r7_1, r2, r3);
                r1 = guest::cpu()->r[1];
                r3 = guest::cpu()->r[3];
                r4 = r0_9;
                goto L_5ab2b4;
            }
            if (r0_6 == 2u) {
                frame->word_0 = r0_8;
                frame->word_4 = r1;
                r2 = r6_1;
                r0_9 = call_005aae3c(r0, r7_1, r2, r3);
                r1 = guest::cpu()->r[1];
                r3 = guest::cpu()->r[3];
                r4 = r0_9;
                goto L_5ab2b4;
            } else {
                r4 = 0u;
            }
            goto L_5ab2b4;
        }
        imgdb__PhotoHeaderFileReader__destructor(frame.at(8).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    return 0u;
L_5ab2b4:;
    imgdb__PhotoHeaderFileReader__destructor(frame.at(8).addr(), r1, r2, r3);
    return r4;
}

}  // namespace d_005ab1fc
GUEST_EXPORT_FRAMED(0x005ab1fc, d_005ab1fc::f_005ab1fc, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_005ab304: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ab304 {

struct __attribute__((packed)) Object_005ab304_0 {
    u8 byte_0;
    u8 unknown_1[0xf];  // (not used here)
    u32 word_10;
    u32 word_14;
    u8 byte_18;
};
GUEST_OFFSET(Object_005ab304_0, byte_0, 0x0);
GUEST_OFFSET(Object_005ab304_0, word_10, 0x10);
GUEST_OFFSET(Object_005ab304_0, word_14, 0x14);
GUEST_OFFSET(Object_005ab304_0, byte_18, 0x18);

inline constexpr guest::Function<0x005a8b14, u32(u32)> clear_word_pair_005a8b14;

void f_005ab304(gptr<Object_005ab304_0> arg0) {
    arg0->byte_0 = 0;
    arg0->byte_18 = 0;
    arg0->word_10 = 0;
    arg0->word_14 = 0;
    clear_word_pair_005a8b14(arg0.addr() + 8u);
}

}  // namespace d_005ab304
GUEST_EXPORT_FRAMED(0x005ab304, d_005ab304::f_005ab304, 0x4010);  // pushes {r4, lr} first, as the original

// f_005ab334: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ab334 {

struct __attribute__((packed)) Object_005ab334_0 {
    u8 unknown_0[0x28];  // (not used here)
    u8 byte_28;
    u8 unknown_29[0xb];  // (not used here)
    u8 byte_34;
    u8 unknown_35[0x3];  // (not used here)
    u32 word_38;
    u8 byte_3c;
};
GUEST_OFFSET(Object_005ab334_0, byte_28, 0x28);
GUEST_OFFSET(Object_005ab334_0, byte_34, 0x34);
GUEST_OFFSET(Object_005ab334_0, word_38, 0x38);
GUEST_OFFSET(Object_005ab334_0, byte_3c, 0x3c);

inline constexpr guest::Function<0x005a37c4, u32(u32, u32, u32, u32)> imgdb__FileReader__virtual_3;
inline constexpr guest::Function<0x005ac5dc, u32(u32, u32, u32, u32)> call_005ac5dc;

struct __attribute__((packed)) Frame_005ab334 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x60];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005ab334, word_0, 0x0);
GUEST_OFFSET(Frame_005ab334, word_4, 0x4);
GUEST_OFFSET(Frame_005ab334, word_8, 0x8);
GUEST_SIZE(Frame_005ab334, 0x6c);

u32 f_005ab334(gptr<Object_005ab334_0> arg0) {
    guest::StackFrameOf<Frame_005ab334> frame;  // the original's stack frame
    frame->word_0 = u32(s8(arg0->byte_3c));
    u32 r3_1 = arg0->word_38;
    u32 r2_1 = arg0->byte_34;
    call_005ac5dc(frame.at(0x10).addr(), 0x2cu, r2_1, r3_1);  // (from the original)
    u32 r1_1 = arg0->byte_34;
    frame->word_0 = 0;
    frame->word_4 = 0;
    frame->word_8 = 0;
    imgdb__FileReader__virtual_3(arg0.addr(), r1_1, frame.at(0x10).addr(), 0u);  // (from the original)
    return s8(arg0->byte_28);
}

}  // namespace d_005ab334
GUEST_EXPORT_FRAMED(0x005ab334, d_005ab334::f_005ab334, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_005ab388: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ab388 {

inline constexpr u32 vtable_imgdb__PhotoHeaderFileReader = 0x00907ef4u;
inline constexpr u32 vtable_imgdb__PhotoHeaderImageInfoReader = 0x00907f4cu;
inline guest::global<u32, 0x009816b0> global_009816b0;
inline constexpr guest::Function<0x005a3b10, u32(u32, u32, u32, u32)> imgdb__FileReader__FileReader_005a3b10;

void imgdb__PhotoHeaderFileReader__PhotoHeaderFileReader(gptr<imgdb__PhotoHeaderImageInfoReader> photo_header_image_info_reader, u32 r1, u32 r2, u32 r3) {
    u32 r6_1 = *gptr<u32>(guest::cpu()->r[13] + 0x10u);  // (from the original)
    imgdb__FileReader__FileReader_005a3b10(photo_header_image_info_reader.addr(), r1, 0x20000u, 1u);  // (from the original)
    photo_header_image_info_reader->word_0 = vtable_imgdb__PhotoHeaderFileReader;
    photo_header_image_info_reader->word_30 = *global_009816b0;
    photo_header_image_info_reader->word_0 = vtable_imgdb__PhotoHeaderImageInfoReader;
    photo_header_image_info_reader->byte_34 = u8(r2);
    photo_header_image_info_reader->word_38 = r3;
    photo_header_image_info_reader->byte_3c = u8(r6_1);
    guest::cpu()->r[1] = vtable_imgdb__PhotoHeaderImageInfoReader;
}

}  // namespace d_005ab388
GUEST_EXPORT_FRAMED(0x005ab388, d_005ab388::imgdb__PhotoHeaderFileReader__PhotoHeaderFileReader, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005ab498: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ab498 {

inline constexpr u32 global_00982128_address = 0x00982128u;
inline guest::global<u32, 0x00982128> global_00982128;

void f_005ab498() {
    u32 r0_1 = *global_00982128;
    u32 r1_1 = *gptr<u32>(*gptr<u32>(r0_1) + 0xcu);  // (from the original)
    // virtual function 3 of r0_1
    guest::call_address<u32>(r1_1, r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005ab498
GUEST_EXPORT(0x005ab498, d_005ab498::f_005ab498);

// f_005ab4b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ab4b0 {

inline constexpr u32 global_00982128_address = 0x00982128u;
inline guest::global<u32, 0x00982128> global_00982128;

u32 f_005ab4b0() {
    u32 r0_1 = *global_00982128;
    u32 r1_1 = *gptr<u32>(*gptr<u32>(r0_1) + 8u);
    // virtual function 2 of r0_1
    return guest::call_address<u32>(r1_1, r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005ab4b0
GUEST_EXPORT(0x005ab4b0, d_005ab4b0::f_005ab4b0);

// f_005ab4c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ab4c8 {

inline constexpr guest::Function<0x001289c4, u32(u32)> call_001289c4;
inline constexpr guest::Function<0x0012ee90, u32(u32, u32, u32, u32)> call_0012ee90;
inline constexpr guest::Function<0x005aead8, u32(u32, u32)> call_005aead8;

u32 f_005ab4c8(u32 r0, u32 r1, u32 r2) {
    call_0012ee90(r0, r1, r2, guest::cpu()->r[3]);
    u32 r0_1 = call_001289c4(r1);
    u32 r1_2 = guest::cpu()->r[1];
    if (s32(r0_1) < 0) {
        if (r0 == 0) {
            call_005aead8(r0_1, r1_2);
            r1_2 = guest::cpu()->r[1];
        }
        u32 r0_2 = (r0_1 & 0x3fc00u) >> 0xa;  // (from the original)
        if (r0_2 == 0x11u) {  // (from the original)
            r1_2 = r0_1 & 0x3ffu;  // (from the original)
            if (s32(r1_2) >= 0x104 && s32(r1_2) < 0x118) {  // (from the original)
                guest::cpu()->r[1] = r1_2;
                return 9u;
            }
        }
        if (r0_2 == 0x11u) {  // (from the original)
            r1_2 = r0_1 & 0x3ffu;  // (from the original)
            if (s32(r1_2) >= 0x82 && s32(r1_2) <= 0xb3) {  // (from the original)
                guest::cpu()->r[1] = r1_2;
                return 8u;
            }
        }
        if (r0_2 == 0x11u) {  // (from the original)
            r1_2 = r0_1 & 0x3ffu;  // (from the original)
            if (s32(r1_2) >= 0x118 && s32(r1_2) <= s32(0x14eu)) {  // (from the original)
                guest::cpu()->r[1] = r1_2;
                return 0xeu;  // (from the original)
            }
        }
        if (r0_2 == 0x11u) {  // (from the original)
            u32 r0_4 = r0_1 & 0x3ffu;  // (from the original)
            if (s32(r0_4) >= 0x64 && s32(r0_4) <= 0xb3) {  // (from the original)
                guest::cpu()->r[1] = r1_2;
                return 0u;
            }
        }
        guest::cpu()->r[1] = r1_2;
        return 5u;
    }
    guest::cpu()->r[1] = r1_2;
    return 0u;
}

}  // namespace d_005ab4c8
GUEST_EXPORT_FRAMED(0x005ab4c8, d_005ab4c8::f_005ab4c8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005ab5a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ab5a4 {

inline constexpr u32 vtable_nn__fs__Directory = 0x008faf20u;
inline constexpr guest::Function<0x00347454, u32(u32)> call_virtual_1_if_present_00347454;
inline constexpr guest::Function<0x0034748c, u32(u32, u32, u32, u32)> call_0034748c;
inline constexpr guest::Function<0x005aead8, u32(u32)> call_005aead8;

struct __attribute__((packed)) Frame_005ab5a4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Frame_005ab5a4, word_0, 0x0);
GUEST_OFFSET(Frame_005ab5a4, word_4, 0x4);
GUEST_SIZE(Frame_005ab5a4, 0x8);

u32 nn__fs__Directory__Directory_005ab5a4(u32 r0) {
    guest::StackFrameOf<Frame_005ab5a4> frame;  // the original's stack frame
    frame->word_0 = vtable_nn__fs__Directory;
    frame->word_4 = 0;
    u32 r0_2 = call_0034748c(frame.at(4).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (s32(r0_2) >= 0) {
        call_virtual_1_if_present_00347454(frame->word_4);
        frame->word_4 = 0;
    } else if (r0 == 0) {
        call_005aead8(r0_2);
    }
    call_virtual_1_if_present_00347454(frame->word_4);
    return u32(s32(r0_2) >> 0x1f) + 1u;  // (from the original)
}

}  // namespace d_005ab5a4
GUEST_EXPORT_FRAMED(0x005ab5a4, d_005ab5a4::nn__fs__Directory__Directory_005ab5a4, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005abb6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005abb6c {

inline constexpr u32 global_0097e0dc_address = 0x0097e0dcu;
inline constexpr u32 global_0097e0e0_address = 0x0097e0e0u;
inline guest::global<u8, 0x0097e0dc> global_0097e0dc;
inline guest::global<u32, 0x0097e0e0> global_0097e0e0;
inline constexpr guest::Function<0x003506c8, u32(u32, u32, u32, u32)> call_003506c8;

u32 f_005abb6c() {
    u32 r1 = 0;
    if (*global_0097e0dc != 0) {
        return *global_0097e0e0;
    }
    u32 r0_2 = call_003506c8(0x204u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *global_0097e0e0 = r0_2;
    *global_0097e0dc = 1;
    return *global_0097e0e0;
}

}  // namespace d_005abb6c
GUEST_EXPORT_FRAMED(0x005abb6c, d_005abb6c::f_005abb6c, 0x4010);  // pushes {r4, lr} first, as the original

// f_005ac04c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ac04c {

inline constexpr guest::Function<0x005abba0, u32(u32, u32, u32, u32)> call_005abba0;

struct __attribute__((packed)) Frame_005ac04c {
    u32 word_0;
};
GUEST_OFFSET(Frame_005ac04c, word_0, 0x0);
GUEST_SIZE(Frame_005ac04c, 0x4);

void f_005ac04c(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_005ac04c> frame;  // the original's stack frame
    frame->word_0 = r3;
    frame->word_0 = *frame.at<u32>(8);
    call_005abba0(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], lsl_r(1u, r3 & 0xff) & 0xffu);  // (from the original)
}

}  // namespace d_005ac04c
GUEST_EXPORT_FRAMED(0x005ac04c, d_005ac04c::f_005ac04c, 0x4000);  // pushes {lr} first, as the original

// f_005ac2b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ac2b0 {

inline constexpr guest::Function<0x005af3e0, u32(u32, u32, u32, u32)> call_005af3e0;

void f_005ac2b0(u32 r0_unused, u32 r1_unused, u32 r2) {
    call_005af3e0(guest::cpu()->r[0], guest::cpu()->r[1], 1u, r2);
}

}  // namespace d_005ac2b0
GUEST_EXPORT(0x005ac2b0, d_005ac2b0::f_005ac2b0);

// f_005ac4f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ac4f4 {

struct __attribute__((packed)) Local_005ac4f4_r8_1 {
    u16 half_0;
    u16 half_2;
};
GUEST_OFFSET(Local_005ac4f4_r8_1, half_0, 0x0);
GUEST_OFFSET(Local_005ac4f4_r8_1, half_2, 0x2);

inline constexpr u32 global_00981680_address = 0x00981680u;
inline constexpr u32 global_00981688_address = 0x00981688u;
inline constexpr u32 global_00981690_address = 0x00981690u;
inline constexpr u32 global_00981698_address = 0x00981698u;
inline guest::global<u32, 0x00981690> global_00981690;
inline constexpr guest::Function<0x00100f69, u32(u32, u32, u32, u32)> swprintf;
inline constexpr guest::Function<0x001017e5, u32(u32, u32, u32, u32)> copy_wide_string;
inline constexpr guest::Function<0x005ae51c, u32(u32, u32, u32, u32)> call_005ae51c;

struct __attribute__((packed)) Frame_005ac4f4 {
    u32 word_0;
};
GUEST_OFFSET(Frame_005ac4f4, word_0, 0x0);
GUEST_SIZE(Frame_005ac4f4, 0x4);

void f_005ac4f4(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005ac4f4> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r6_1 = *frame.at<u32>(0x24);  // (from the original)
    gptr<Local_005ac4f4_r8_1> r8_1 = gptr<Local_005ac4f4_r8_1>(*frame.at<u32>(0x20));  // (from the original)
    u32 r0_1 = call_005ae51c(r0, r1, r2, r6_1);
    copy_wide_string(r0 + (r0_1 << 1), 0x8b3710u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r3_2 = u32(r8_1->half_0) + 0x64u;  // (from the original)
    frame->word_0 = *gptr<u32>(r6_1 == 0 ? global_00981680_address : global_00981688_address);
    u32 r0_4 = swprintf(r0 + (r0_1 + 1u << 1), r1 - (r0_1 + 1u), 0x8b3700u, r3_2);  // (from the original)
    u32 r4_2 = r0_1 + 1u + r0_4;
    copy_wide_string(r0 + (r4_2 << 1), 0x5ac5c8u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    frame->word_0 = u32(r8_1->half_2) + 1u;
    u32 r6_2 = r0 + (r4_2 + 1u << 1);
    u32 r3_4 = *global_00981690;
    u32 r0_6 = swprintf(r6_2, r1 - (r4_2 + 1u), 0x8b36f0u, r3_4);  // (from the original)
    copy_wide_string(r6_2 + (r0_6 << 1), gptr<u32>(global_00981698_address)[r3], 0x8b36f0u, r3_4);  // (from the original)
}

}  // namespace d_005ac4f4
GUEST_EXPORT_FRAMED(0x005ac4f4, d_005ac4f4::f_005ac4f4, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_005ac5dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ac5dc {

inline constexpr guest::Function<0x001017e5, u32(u32, u32)> copy_wide_string;
inline constexpr guest::Function<0x005ae51c, u32(u32, u32, u32, u32)> call_005ae51c;
inline constexpr guest::Function<0x00755330, u32(u32, u32)> call_00755330;
inline constexpr guest::Function<0x00755504, u32(u32, u32)> call_00755504;
inline constexpr guest::Function<0x007555cc, u32(u32, u32)> call_007555cc;

u32 f_005ac5dc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = call_005ae51c(r0, r1, r2, *gptr<u32>(guest::cpu()->r[13] + 0x20u));  // (from the original)
    copy_wide_string(r0 + (r0_1 << 1), 0x8b3710u);  // (from the original)
    u32 r0_3 = call_00755504(r3, r0 + (r0_1 + 1u << 1));
    u32 r4_2 = r0_1 + 1u + r0_3;
    copy_wide_string(r0 + (r4_2 << 1), 0x5ac678u);  // (from the original)
    u32 r6_1 = r0 + (r4_2 + 1u << 1);
    u32 r7_1 = r1 - (r4_2 + 1u);
    u32 r0_5 = call_00755330(r3, r6_1);
    *gptr<u16>(r6_1 + (r0_5 << 1)) = 0x2e;  // (from the original)
    u32 r0_6 = call_007555cc(r3, r6_1 + (r0_5 + 1u << 1));
    return r0_6 + (r0_5 + 1u) + (r4_2 + 1u);
}

}  // namespace d_005ac5dc
GUEST_EXPORT_FRAMED(0x005ac5dc, d_005ac5dc::f_005ac5dc, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_005acca4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005acca4 {

struct __attribute__((packed)) Object_005acca4_2 {
    u8 unknown_0[0x2];  // (not used here)
    u16 half_2;
};
GUEST_OFFSET(Object_005acca4_2, half_2, 0x2);

inline constexpr u32 global_00981690_address = 0x00981690u;
inline guest::global<u32, 0x00981690> global_00981690;
inline constexpr guest::Function<0x00100f69, u32(u32, u32, u32, u32)> swprintf;

struct __attribute__((packed)) Frame_005acca4 {
    u32 word_0;
};
GUEST_OFFSET(Frame_005acca4, word_0, 0x0);
GUEST_SIZE(Frame_005acca4, 0x4);

void f_005acca4(u32 r0_unused, u32 r1_unused, gptr<Object_005acca4_2> arg2, u32 r3) {
    guest::StackFrameOf<Frame_005acca4> frame;  // the original's stack frame
    frame->word_0 = r3;
    frame->word_0 = u32(arg2->half_2) + 1u;
    swprintf(guest::cpu()->r[0], guest::cpu()->r[1], 0x8b36f0u, *global_00981690);  // (from the original)
}

}  // namespace d_005acca4
GUEST_EXPORT_FRAMED(0x005acca4, d_005acca4::f_005acca4, 0x4000);  // pushes {lr} first, as the original

// f_005accd0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005accd0 {

inline constexpr u32 global_0097e0a0_address = 0x0097e0a0u;
inline constexpr u32 global_0097e0b8_address = 0x0097e0b8u;
inline constexpr u32 global_00981620_address = 0x00981620u;
inline constexpr u32 global_00981628_address = 0x00981628u;
inline constexpr u32 global_00aedff2_address = 0x00aedff2u;
inline constexpr u32 global_00aee008_address = 0x00aee008u;
inline constexpr u32 global_00aee296_address = 0x00aee296u;
inline constexpr u32 global_00aee2f2_address = 0x00aee2f2u;
inline guest::global<u32, 0x0097e0a0> global_0097e0a0;
inline guest::global<u32, 0x0097e0b8> global_0097e0b8;
inline guest::global<u8, 0x0097e0e5> global_0097e0e5;
inline guest::global<u8, 0x0097e0e6> global_0097e0e6;
inline guest::global<u8, 0x0097e0ed> global_0097e0ed;
inline guest::global<u32, 0x00981620> global_00981620;
inline guest::global<u32, 0x00981628> global_00981628;
inline constexpr guest::Function<0x001017e5, u32(u32, u32)> copy_wide_string;
inline constexpr guest::Function<0x00101831, u32(u32, u32)> append_wide_string;
inline constexpr guest::Function<0x005ace98, u32(u32)> call_005ace98;
inline constexpr guest::Function<0x005add7c, u32(u32)> call_005add7c;

u32 f_005accd0(u32 r0) {
    if (*global_0097e0ed == 0) {
        if (*global_0097e0e5 == 0) {
            copy_wide_string(global_00aedff2_address, *global_0097e0b8);
            append_wide_string(global_00aedff2_address, 0x8b36e8u);  // (from the original)
            *global_0097e0e5 = 1;
        }
        u32 r0_1 = copy_wide_string(global_00aee296_address, global_00aedff2_address);
        u32 r0_2 = call_005add7c(r0_1);
        copy_wide_string((r0_2 << 1) + global_00aee296_address, *global_00981620);
        if (*global_0097e0e6 == 0) {
            copy_wide_string(global_00aee008_address, *global_0097e0a0);
            append_wide_string(global_00aee008_address, 0x8b36e8u);  // (from the original)
            *global_0097e0e6 = 1;
        }
        u32 r0_4 = copy_wide_string(global_00aee2f2_address, global_00aee008_address);
        u32 r0_5 = call_005ace98(r0_4);
        copy_wide_string((r0_5 << 1) + global_00aee2f2_address, *global_00981628);
        *global_0097e0ed = 1;
    }
    return r0 == 0 ? global_00aee296_address : r0 == 1u ? global_00aee2f2_address : 0x8b3714u;  // (from the original)
}

}  // namespace d_005accd0
GUEST_EXPORT_FRAMED(0x005accd0, d_005accd0::f_005accd0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005acde8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005acde8 {

inline constexpr u32 global_00981678_address = 0x00981678u;
inline constexpr u32 global_00aee10a_address = 0x00aee10au;
inline constexpr u32 global_00aee180_address = 0x00aee180u;
inline guest::global<u8, 0x0097e0eb> global_0097e0eb;
inline guest::global<u32, 0x00981678> global_00981678;
inline constexpr guest::Function<0x001017e5, u32(u32, u32)> copy_wide_string;
inline constexpr guest::Function<0x00101831, u32(u32, u32)> append_wide_string;
inline constexpr guest::Function<0x005accd0, u32(u32)> call_005accd0;

u32 f_005acde8(u32 r0, u32 r1) {
    if (*global_0097e0eb == 0) {
        u32 r0_1 = call_005accd0(0u);
        copy_wide_string(global_00aee10a_address, r0_1);
        append_wide_string(global_00aee10a_address, 0x5ace88u);  // (from the original)
        append_wide_string(global_00aee10a_address, *global_00981678);
        u32 r0_2 = call_005accd0(1u);
        copy_wide_string(global_00aee180_address, r0_2);
        append_wide_string(global_00aee180_address, 0x5ace88u);  // (from the original)
        append_wide_string(global_00aee180_address, *global_00981678);
        r1 = guest::cpu()->r[1];
        *global_0097e0eb = 1;
    }
    guest::cpu()->r[1] = r1;
    return r0 == 0 ? global_00aee10a_address : r0 == 1u ? global_00aee180_address : 0x5ace94u;  // (from the original)
}

}  // namespace d_005acde8
GUEST_EXPORT_FRAMED(0x005acde8, d_005acde8::f_005acde8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005ace98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ace98 {

inline constexpr u32 global_0097e0a0_address = 0x0097e0a0u;
inline constexpr u32 global_0097e0e4_address = 0x0097e0e4u;
inline constexpr u32 global_0097e0f8_address = 0x0097e0f8u;
inline constexpr u32 global_00aee008_address = 0x00aee008u;
inline guest::global<u32, 0x0097e0a0> global_0097e0a0;
inline guest::global<u8, 0x0097e0e6> global_0097e0e6;
inline guest::global<u8, 0x0097e0e9> global_0097e0e9;
inline guest::global<u32, 0x0097e0f8> global_0097e0f8;
inline constexpr guest::Function<0x00100835, u32(u32, u32)> string16_length;
inline constexpr guest::Function<0x001017e5, u32(u32, u32)> copy_wide_string;
inline constexpr guest::Function<0x00101831, u32(u32, u32)> append_wide_string;

u32 f_005ace98(u32 r0_unused, u32 r1) {
    if (*global_0097e0e9 == 0) {
        if (*global_0097e0e6 == 0) {
            copy_wide_string(global_00aee008_address, *global_0097e0a0);
            append_wide_string(global_00aee008_address, 0x8b36e8u);  // (from the original)
            r1 = guest::cpu()->r[1];
            *global_0097e0e6 = 1;
        }
        u32 r0_1 = string16_length(global_00aee008_address, r1);
        r1 = guest::cpu()->r[1];
        *global_0097e0f8 = r0_1;
        *global_0097e0e9 = 1;
    }
    u32 r0_2 = *global_0097e0f8;
    guest::cpu()->r[1] = r1;
    return r0_2;
}

}  // namespace d_005ace98
GUEST_EXPORT_FRAMED(0x005ace98, d_005ace98::f_005ace98, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005acf04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005acf04 {

inline constexpr guest::Function<0x001416b0, u32(u32)> return_constant_0x97e098_;
inline constexpr guest::Function<0x005ab5a4, u32(u32, u32)> nn__fs__Directory__Directory_005ab5a4;
inline constexpr guest::Function<0x005ad6d8, u32(u32, u32, u32, u32)> call_005ad6d8;
inline constexpr guest::Function<0x005adb08, u32(u32, u32, u32)> call_005adb08;
inline constexpr guest::Function<0x005add4c, u32(u32, u32)> call_005add4c;
inline constexpr guest::Function<0x005ae51c, u32(u32, u32, u32, u32)> call_005ae51c;
inline constexpr guest::Function<0x005aff24, u32(u32, u32, u32, u32)> call_005aff24;
inline constexpr guest::Function<0x005affd8, u32(u32, u32, u32, u32)> nn__fs__Directory__Directory_005affd8;
inline constexpr guest::Function<0x005b00a8, u32(u32, u32, u32, u32)> call_005b00a8;
inline constexpr guest::Function<0x0075523c, u32(u32, u32, u32, u32)> call_0075523c;
inline constexpr guest::Function<0x007552e8, u32(u32, u32)> call_007552e8;

struct __attribute__((packed)) Frame_005acf04 {
    u32 word_0;
    u8 unknown_4[0x8];  // (not read or written by name)
    u8 byte_c;
    u8 unknown_d[0x4f];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005acf04, word_0, 0x0);
GUEST_OFFSET(Frame_005acf04, byte_c, 0xc);
GUEST_SIZE(Frame_005acf04, 0x5c);

u32 f_005acf04(u32 r0, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_005acf04> frame;  // the original's stack frame
    u32 r3 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r3_3 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r1_3 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r1_4 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r4 = r1;
    u32 r5 = r2;
    frame->word_0 = r2;
    u32 r6 = r0;
    u32 r7 = 0x1eu;  // (from the original)
    call_005ad6d8(frame.at(4).addr(), r7, r0, r4);
    u32 r0_2 = nn__fs__Directory__Directory_005ab5a4(r6, frame.at(4).addr());
    if (r0_2 != 0) {
        goto L_5ad010;
    }
    r0_3 = frame.at(0x30).addr();  // (from the original)
    r0_4 = call_005ae51c(r0_3, 0x15u, r6, r5);  // (from the original)
    r0_5 = return_constant_0x97e098_(r0_4);
    frame->word_0 = 0x3e8;  // (from the original)
    r3_3 = frame.at(0x30).addr();  // (from the original)
    r0_6 = frame.at(8).addr();
    nn__fs__Directory__Directory_005affd8(r0_6, r0_5, r6, r3_3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (frame->byte_c == 0) {
        goto L_5ad008;
    }
    r0_7 = frame.at(8).addr();
    r0_8 = call_005aff24(r0_7, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_8 == 0) {
        goto L_5ad008;
    }
L_5acf98:;
    r0_9 = frame.at(8).addr();
    r0_10 = call_0075523c(r0_9, r1, r2, r3);
    r1_3 = guest::cpu()->r[1];
    if (r0_10 == 0) {
        goto L_5acff4;
    }
    r0_11 = frame.at(8).addr();
    r0_12 = call_007552e8(r0_11, r1_3);
    r1_4 = frame.at(0).addr();
    r0_13 = call_005add4c(r0_12, r1_4);
    r1_3 = guest::cpu()->r[1];
    if (r0_13 == 0) {
        goto L_5acff4;
    }
    r1_3 = frame->word_0;
    if (u32(*gptr<u16>(r4)) + 0x64u != r1_3) {  // (from the original)
        goto L_5acff4;
    }
    r0_14 = frame.at(8).addr();
    call_005b00a8(r0_14, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    return 0u;
L_5acff4:;
    r0_15 = frame.at(8).addr();
    r0_16 = call_005aff24(r0_15, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_16 != 0) {
        guest::preempt();
        goto L_5acf98;
    }
L_5ad008:;
    r0_17 = frame.at(8).addr();
    call_005b00a8(r0_17, r1, r2, r3);
L_5ad010:;
    frame->word_0 = r5;
    call_005ad6d8(frame.at(4).addr(), r7, r6, r4);
    u32 r0_19 = nn__fs__Directory__Directory_005ab5a4(r6, frame.at(4).addr());
    if (r0_19 != 0) {
        r0 = call_005adb08(r6, r4, r5);
        if (r0 == 0) {
            return r0;
        }
    }
    return 1u;
}

}  // namespace d_005acf04
GUEST_EXPORT_FRAMED(0x005acf04, d_005acf04::f_005acf04, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_005ad068: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ad068 {

struct __attribute__((packed)) Local_005ad068_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005ad068_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_005ad068_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_005ad068_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005ad068_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_005ad068_ea_3, word_4, 0x4);

inline constexpr guest::Function<0x005a8da4, u32(u32, u32, u32, u32)> call_005a8da4;
inline constexpr guest::Function<0x005ad0b4, u32(u32, u32, u32, u32)> call_005ad0b4;

struct __attribute__((packed)) Frame_005ad068 {
    u32 word_0;
    u8 unknown_4[0x18];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005ad068, word_0, 0x0);
GUEST_SIZE(Frame_005ad068, 0x1c);

u32 f_005ad068(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005ad068> frame;  // the original's stack frame
    call_005a8da4(frame.at(0x10).addr(), r1, r2, r3);  // (from the original)
    gptr<Local_005ad068_ea_1> ea_1 = gptr<Local_005ad068_ea_1>(frame.at(0x10).addr());  // (from the original)
    u32 r0_2 = ea_1->word_0;
    u32 r1_1 = ea_1->word_4;
    frame->word_0 = frame.at(8).addr();
    gptr<Local_005ad068_ea_3> ea_3 = gptr<Local_005ad068_ea_3>(frame.at(8).addr());
    ea_3->word_0 = r0_2;
    ea_3->word_4 = r1_1;
    u32 r0_3 = call_005ad0b4(r0, r1, r2, r3);
    return r0_3;
}

}  // namespace d_005ad068
GUEST_EXPORT_FRAMED(0x005ad068, d_005ad068::f_005ad068, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_005ad658: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ad658 {

struct __attribute__((packed)) Object_005ad658_2 {
    u16 half_0;
};
GUEST_OFFSET(Object_005ad658_2, half_0, 0x0);

inline constexpr u32 global_00981680_address = 0x00981680u;
inline constexpr u32 global_00981688_address = 0x00981688u;
inline constexpr guest::Function<0x00100f69, u32(u32, u32, u32, u32)> swprintf;

struct __attribute__((packed)) Frame_005ad658 {
    u32 word_0;
};
GUEST_OFFSET(Frame_005ad658, word_0, 0x0);
GUEST_SIZE(Frame_005ad658, 0x4);

void f_005ad658(u32 r0_unused, u32 r1_unused, gptr<Object_005ad658_2> arg2, u32 r3) {
    guest::StackFrameOf<Frame_005ad658> frame;  // the original's stack frame
    frame->word_0 = r3;
    float S0_1 = std::bit_cast<float>(*gptr<u32>(r3 == 0 ? global_00981680_address : global_00981688_address));
    u32 r3_1 = u32(arg2->half_0) + 0x64u;  // (from the original)
    frame->word_0 = std::bit_cast<u32>(S0_1);
    guest::cpu()->s[0] = S0_1;
    swprintf(guest::cpu()->r[0], guest::cpu()->r[1], 0x8b3700u, r3_1);  // (from the original)
}

}  // namespace d_005ad658
GUEST_EXPORT_FRAMED(0x005ad658, d_005ad658::f_005ad658, 0x4000);  // pushes {lr} first, as the original

// f_005ad690: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ad690 {

inline constexpr guest::Function<0x001017e5, u32(u32, u32)> copy_wide_string;
inline constexpr guest::Function<0x005ae51c, u32(u32, u32, u32, u32)> call_005ae51c;
inline constexpr guest::Function<0x00755504, u32(u32, u32)> call_00755504;

u32 f_005ad690(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = call_005ae51c(r0, r1, r2, *gptr<u32>(guest::cpu()->r[13] + 0x18u));  // (from the original)
    copy_wide_string(r0 + (r0_1 << 1), 0x8b3710u);  // (from the original)
    u32 r0_3 = call_00755504(r3, r0 + (r0_1 + 1u << 1));
    return r0_3 + (r0_1 + 1u);
}

}  // namespace d_005ad690
GUEST_EXPORT_FRAMED(0x005ad690, d_005ad690::f_005ad690, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_005ad6d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ad6d8 {

struct __attribute__((packed)) Object_005ad6d8_3 {
    u16 half_0;
};
GUEST_OFFSET(Object_005ad6d8_3, half_0, 0x0);

inline constexpr u32 global_00981680_address = 0x00981680u;
inline constexpr u32 global_00981688_address = 0x00981688u;
inline constexpr guest::Function<0x00100f69, u32(u32, u32, u32, u32)> swprintf;
inline constexpr guest::Function<0x001017e5, u32(u32, u32)> copy_wide_string;
inline constexpr guest::Function<0x005ae51c, u32(u32, u32, u32, u32)> call_005ae51c;

struct __attribute__((packed)) Frame_005ad6d8 {
    u32 word_0;
};
GUEST_OFFSET(Frame_005ad6d8, word_0, 0x0);
GUEST_SIZE(Frame_005ad6d8, 0x4);

u32 f_005ad6d8(u32 r0, u32 r1, u32 r2, gptr<Object_005ad6d8_3> arg3) {
    guest::StackFrameOf<Frame_005ad6d8> frame;  // the original's stack frame
    frame->word_0 = arg3.addr();
    u32 r6_1 = *frame.at<u32>(0x20);  // (from the original)
    u32 r0_1 = call_005ae51c(r0, r1, r2, r6_1);
    copy_wide_string(r0 + (r0_1 << 1), 0x8b3710u);  // (from the original)
    u32 r3_2 = u32(arg3->half_0) + 0x64u;  // (from the original)
    frame->word_0 = *gptr<u32>(r6_1 == 0 ? global_00981680_address : global_00981688_address);
    u32 r0_4 = swprintf(r0 + (r0_1 + 1u << 1), r1 - (r0_1 + 1u), 0x8b3700u, r3_2);  // (from the original)
    return r0_4 + (r0_1 + 1u);
}

}  // namespace d_005ad6d8
GUEST_EXPORT_FRAMED(0x005ad6d8, d_005ad6d8::f_005ad6d8, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_005ad968: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ad968 {

inline constexpr guest::Function<0x005acb9c, u32(u32, u32, u32, u32)> call_005acb9c;
inline constexpr guest::Function<0x005af04c, u32(u32, u32, u32, u32)> call_005af04c;

struct __attribute__((packed)) Frame_005ad968 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Frame_005ad968, word_0, 0x0);
GUEST_OFFSET(Frame_005ad968, word_4, 0x4);
GUEST_SIZE(Frame_005ad968, 0x8);

u32 f_005ad968(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005ad968> frame;  // the original's stack frame
    u32 r0_1 = call_005acb9c(r0, r2, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    frame->word_0 = r1;
    frame->word_4 = r2;
    u32 r0_2 = call_005af04c(r0, r1_1, r0_1, r1_1);
    return r0_2;
}

}  // namespace d_005ad968
GUEST_EXPORT_FRAMED(0x005ad968, d_005ad968::f_005ad968, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005ad9a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ad9a0 {

struct __attribute__((packed)) Object_005ad9a0_0 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
    u8 byte_4;
    u8 byte_5;
    u8 byte_6;
    u8 byte_7;
};
GUEST_OFFSET(Object_005ad9a0_0, byte_0, 0x0);
GUEST_OFFSET(Object_005ad9a0_0, byte_1, 0x1);
GUEST_OFFSET(Object_005ad9a0_0, byte_2, 0x2);
GUEST_OFFSET(Object_005ad9a0_0, byte_3, 0x3);
GUEST_OFFSET(Object_005ad9a0_0, byte_4, 0x4);
GUEST_OFFSET(Object_005ad9a0_0, byte_5, 0x5);
GUEST_OFFSET(Object_005ad9a0_0, byte_6, 0x6);
GUEST_OFFSET(Object_005ad9a0_0, byte_7, 0x7);


u32 f_005ad9a0(gptr<Object_005ad9a0_0> arg0) {
    u32 v_1 = arg0->byte_0;
    if (v_1 == 0) {
        return ~0u;
    }
    u32 v_2 = arg0->byte_1;
    if (v_2 == 0) {
        return ~0u;
    }
    u32 v_3 = arg0->byte_2;
    if (v_3 == 0) {
        return ~0u;
    }
    u32 v_4 = arg0->byte_3;
    if (v_4 == 0) {
        return ~0u;
    }
    u32 r2_1 = s8(arg0->byte_4);
    if (r2_1 - 0x30u >= 0xau) {  // (from the original)
        return ~0u;
    }
    u32 r3_1 = s8(arg0->byte_5);
    u32 r1_1 = ~0x2fu;  // (from the original)
    if (r3_1 - 0x30u >= 0xau) {  // (from the original)
        return ~0u;
    }
    u32 r2_2 = s8(arg0->byte_6);
    if (r2_2 - 0x30u >= 0xau) {  // (from the original)
        return ~0u;
    }
    u32 r0_8 = s8(arg0->byte_7);
    if (r0_8 - 0x30u < 0xau) {  // (from the original)
        return r0_8 + (r1_1 + (r2_2 + (r1_1 + (r3_1 + (r1_1 + (r2_1 - 0x30u) * 0xau)) * 0xau)) * 0xau);  // (from the original)
    }
    return ~0u;
}

}  // namespace d_005ad9a0
GUEST_EXPORT_FRAMED(0x005ad9a0, d_005ad9a0::f_005ad9a0, 0x10);  // pushes {r4} first, as the original

// f_005ada54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ada54 {

struct __attribute__((packed)) Object_005ada54_0 {
    u16 half_0;
    u16 half_2;
    u16 half_4;
    u16 half_6;
    u16 half_8;
    u16 half_a;
    u16 half_c;
    u16 half_e;
};
GUEST_OFFSET(Object_005ada54_0, half_0, 0x0);
GUEST_OFFSET(Object_005ada54_0, half_2, 0x2);
GUEST_OFFSET(Object_005ada54_0, half_4, 0x4);
GUEST_OFFSET(Object_005ada54_0, half_6, 0x6);
GUEST_OFFSET(Object_005ada54_0, half_8, 0x8);
GUEST_OFFSET(Object_005ada54_0, half_a, 0xa);
GUEST_OFFSET(Object_005ada54_0, half_c, 0xc);
GUEST_OFFSET(Object_005ada54_0, half_e, 0xe);


u32 f_005ada54(gptr<Object_005ada54_0> arg0) {
    u32 v_1 = arg0->half_0;
    if (v_1 == 0) {
        return ~0u;
    }
    u32 v_2 = arg0->half_2;
    if (v_2 == 0) {
        return ~0u;
    }
    u32 v_3 = arg0->half_4;
    if (v_3 == 0) {
        return ~0u;
    }
    u32 v_4 = arg0->half_6;
    if (v_4 == 0) {
        return ~0u;
    }
    u32 r2_1 = arg0->half_8;
    if (r2_1 - 0x30u >= 0xau) {  // (from the original)
        return ~0u;
    }
    u32 r3_1 = arg0->half_a;
    u32 r1_1 = ~0x2fu;  // (from the original)
    if (r3_1 - 0x30u >= 0xau) {  // (from the original)
        return ~0u;
    }
    u32 r2_2 = arg0->half_c;
    if (r2_2 - 0x30u >= 0xau) {  // (from the original)
        return ~0u;
    }
    u32 r0_8 = arg0->half_e;
    if (r0_8 - 0x30u < 0xau) {  // (from the original)
        return r0_8 + (r1_1 + (r2_2 + (r1_1 + (r3_1 + (r1_1 + (r2_1 - 0x30u) * 0xau)) * 0xau)) * 0xau);  // (from the original)
    }
    return ~0u;
}

}  // namespace d_005ada54
GUEST_EXPORT_FRAMED(0x005ada54, d_005ada54::f_005ada54, 0x10);  // pushes {r4} first, as the original

// f_005add7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005add7c {

inline constexpr u32 global_0097e0b8_address = 0x0097e0b8u;
inline constexpr u32 global_0097e0e4_address = 0x0097e0e4u;
inline constexpr u32 global_0097e0f4_address = 0x0097e0f4u;
inline constexpr u32 global_00aedff2_address = 0x00aedff2u;
inline guest::global<u32, 0x0097e0b8> global_0097e0b8;
inline guest::global<u8, 0x0097e0e5> global_0097e0e5;
inline guest::global<u8, 0x0097e0e8> global_0097e0e8;
inline guest::global<u32, 0x0097e0f4> global_0097e0f4;
inline constexpr guest::Function<0x00100835, u32(u32, u32)> string16_length;
inline constexpr guest::Function<0x001017e5, u32(u32, u32)> copy_wide_string;
inline constexpr guest::Function<0x00101831, u32(u32, u32)> append_wide_string;

u32 f_005add7c(u32 r0_unused, u32 r1) {
    if (*global_0097e0e8 == 0) {
        if (*global_0097e0e5 == 0) {
            copy_wide_string(global_00aedff2_address, *global_0097e0b8);
            append_wide_string(global_00aedff2_address, 0x8b36e8u);  // (from the original)
            r1 = guest::cpu()->r[1];
            *global_0097e0e5 = 1;
        }
        u32 r0_1 = string16_length(global_00aedff2_address, r1);
        r1 = guest::cpu()->r[1];
        *global_0097e0f4 = r0_1;
        *global_0097e0e8 = 1;
    }
    u32 r0_2 = *global_0097e0f4;
    guest::cpu()->r[1] = r1;
    return r0_2;
}

}  // namespace d_005add7c
GUEST_EXPORT_FRAMED(0x005add7c, d_005add7c::f_005add7c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005adf1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005adf1c {

inline constexpr u32 global_0097e0bc_address = 0x0097e0bcu;
inline constexpr u32 global_0097e0e4_address = 0x0097e0e4u;
inline constexpr u32 global_0097e0f0_address = 0x0097e0f0u;
inline constexpr u32 global_00aedfdc_address = 0x00aedfdcu;
inline guest::global<u32, 0x0097e0bc> global_0097e0bc;
inline guest::global<u8, 0x0097e0e4> global_0097e0e4;
inline guest::global<u8, 0x0097e0e7> global_0097e0e7;
inline guest::global<u32, 0x0097e0f0> global_0097e0f0;
inline constexpr guest::Function<0x00100835, u32(u32, u32)> string16_length;
inline constexpr guest::Function<0x001017e5, u32(u32, u32)> copy_wide_string;
inline constexpr guest::Function<0x00101831, u32(u32, u32)> append_wide_string;

u32 f_005adf1c(u32 r0_unused, u32 r1) {
    if (*global_0097e0e7 == 0) {
        if (*global_0097e0e4 == 0) {
            copy_wide_string(global_00aedfdc_address, *global_0097e0bc);
            append_wide_string(global_00aedfdc_address, 0x8b36e8u);  // (from the original)
            r1 = guest::cpu()->r[1];
            *global_0097e0e4 = 1;
        }
        u32 r0_1 = string16_length(global_00aedfdc_address, r1);
        r1 = guest::cpu()->r[1];
        *global_0097e0f0 = r0_1;
        *global_0097e0e7 = 1;
    }
    u32 r0_2 = *global_0097e0f0;
    guest::cpu()->r[1] = r1;
    return r0_2;
}

}  // namespace d_005adf1c
GUEST_EXPORT_FRAMED(0x005adf1c, d_005adf1c::f_005adf1c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005ae46c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ae46c {

inline constexpr u32 global_00981674_address = 0x00981674u;
inline constexpr u32 global_00aee01e_address = 0x00aee01eu;
inline constexpr u32 global_00aee094_address = 0x00aee094u;
inline guest::global<u8, 0x0097e0ea> global_0097e0ea;
inline guest::global<u32, 0x00981674> global_00981674;
inline constexpr guest::Function<0x001017e5, u32(u32, u32)> copy_wide_string;
inline constexpr guest::Function<0x00101831, u32(u32, u32)> append_wide_string;
inline constexpr guest::Function<0x005adde8, u32(u32, u32, u32, u32)> call_005adde8;

u32 f_005ae46c(u32 r0, u32 r1) {
    if (*global_0097e0ea == 0) {
        u32 r0_1 = call_005adde8(0u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        copy_wide_string(global_00aee01e_address, r0_1);
        append_wide_string(global_00aee01e_address, 0x5ae50cu);  // (from the original)
        u32 r1_1 = *global_00981674;
        append_wide_string(global_00aee01e_address, r1_1);
        u32 r0_2 = call_005adde8(1u, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        copy_wide_string(global_00aee094_address, r0_2);
        append_wide_string(global_00aee094_address, 0x5ae50cu);  // (from the original)
        append_wide_string(global_00aee094_address, *global_00981674);
        *global_0097e0ea = 1;
    }
    return r0 == 0 ? global_00aee01e_address : r0 == 1u ? global_00aee094_address : 0x5ae518u;  // (from the original)
}

}  // namespace d_005ae46c
GUEST_EXPORT_FRAMED(0x005ae46c, d_005ae46c::f_005ae46c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005aead8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005aead8 {

inline constexpr guest::Function<0x0012f598, u32(u32, u32)> report_fatal_result_with_info;

void f_005aead8(u32 r0) {
    u32 res_1 = r0 & 0x80000000u;  // (from the original)
    if (s32(res_1) >= 0) {
        guest::cpu()->r[1] = res_1;
        return;
    }
    u32 r1_1 = (r0 & 0x3fc00u) >> 0xa;  // (from the original)
    u32 r0_1 = r0 & 0x3ffu;  // (from the original)
    if (r1_1 == 0x11u && s32(r0_1) >= 0x64 && s32(r0_1) <= 0xb3 || r1_1 == 0x11u && s32(r0_1) >= 0xb4 && s32(r0_1) <= 0xc7 || r1_1 == 0x11u && s32(r0_1) >= 0xc8 && s32(r0_1) <= 0xdb) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return;
    }
    u32 r1_2 = 0x5aeb4cu;  // (from the original)
    if ((r0 >> 0x1f) != 0) {  // (from the original)
        report_fatal_result_with_info(r0, r1_2);
        r1_2 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1_2;
}

}  // namespace d_005aead8
GUEST_EXPORT_FRAMED(0x005aead8, d_005aead8::f_005aead8, 0x4010);  // pushes {r4, lr} first, as the original

// f_005aeb58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005aeb58 {

inline constexpr guest::Function<0x00100835, u32(u32, u32, u32, u32)> string16_length;
inline constexpr guest::Function<0x0010181d, u32(u32, u32, u32)> wmemcpy;

void f_005aeb58(u32 r0, u32 r1, u32 r2) {
    u32 r6 = r0;
    u32 r5 = r2;
    u32 r0_1 = string16_length(r2, r1, r2, guest::cpu()->r[3]);
    r1 = r0_1 + 1u;
    u32 r4 = r0_1 - 1u;
    r0 = 1u;
    if (s32(r1) > 1) {
        do {
            if (gptr<u16>(r5)[r4] == 0x2fu) {  // (from the original)
                break;
            }
            r0 += 1u;
            r4 -= 1u;
            guest::preempt();
        } while (s32(r1) > s32(r0));
    }
    if (s32(r4) >= 0) {
        wmemcpy(r6, r5, r4);
        r1 = r6 + (r4 << 1);
        *gptr<u16>(r1) = 0;
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_005aeb58
GUEST_EXPORT_FRAMED(0x005aeb58, d_005aeb58::f_005aeb58, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005aebc8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005aebc8 {

struct __attribute__((packed)) Local_005aebc8_r0_16 {
    u8 unknown_0[0x71];  // (not used here)
    u8 byte_71;
};
GUEST_OFFSET(Local_005aebc8_r0_16, byte_71, 0x71);

struct __attribute__((packed)) Local_005aebc8_r0_17 {
    u8 unknown_0[0x71];  // (not used here)
    u8 byte_71;
};
GUEST_OFFSET(Local_005aebc8_r0_17, byte_71, 0x71);

inline constexpr u32 global_00981680_address = 0x00981680u;
inline constexpr u32 global_00981688_address = 0x00981688u;
inline constexpr guest::Function<0x0010184d, u32(u32, u32, u32, u32)> compare_wide_strings;
inline constexpr guest::Function<0x001416b0, u32(u32)> return_constant_0x97e098_;
inline constexpr guest::Function<0x005add4c, u32(u32, u32)> call_005add4c;
inline constexpr guest::Function<0x005ae51c, u32(u32, u32, u32, u32)> call_005ae51c;
inline constexpr guest::Function<0x005aff24, u32(u32, u32, u32, u32)> call_005aff24;
inline constexpr guest::Function<0x005affd8, u32(u32, u32, u32, u32)> nn__fs__Directory__Directory_005affd8;
inline constexpr guest::Function<0x005b00a8, u32(u32, u32, u32, u32)> call_005b00a8;
inline constexpr guest::Function<0x0075523c, u32(u32, u32, u32, u32)> call_0075523c;
inline constexpr guest::Function<0x007552e8, u32(u32, u32, u32, u32)> call_007552e8;

struct __attribute__((packed)) Frame_005aebc8 {
    u32 word_0;
    u8 unknown_4[0x8];  // (not read or written by name)
    u8 byte_c;
    u8 unknown_d[0x4f];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005aebc8, word_0, 0x0);
GUEST_OFFSET(Frame_005aebc8, byte_c, 0xc);
GUEST_SIZE(Frame_005aebc8, 0x5c);

void f_005aebc8(u32 r0, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_005aebc8> frame;  // the original's stack frame
    u32 r5_1 = r1;
    u32 r4 = r0;
    u32 r6_1 = r2;
    u32 r0_2 = call_005ae51c(frame.at(0x30).addr(), 0x15u, r5_1, r2);  // (from the original)
    u32 r0_3 = return_constant_0x97e098_(r0_2);
    frame->word_0 = 0x3e8;  // (from the original)
    nn__fs__Directory__Directory_005affd8(frame.at(8).addr(), r0_3, r5_1, frame.at(0x30).addr());  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    u32 r3 = guest::cpu()->r[3];
    if (frame->byte_c != 0) {
        u32 r0_5 = r5_1 == 0 ? r6_1 != 0 ? global_00981688_address : global_00981680_address : global_00981680_address;
        u32 r7 = 1u;
        u32 r6 = *gptr<u32>(r0_5);
L_5aec3c:;
        u32 r0_7 = call_005aff24(frame.at(8).addr(), r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_7 != 0) {
            u32 r0_9 = call_0075523c(frame.at(8).addr(), r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_9 == 0) {
                guest::preempt();
                goto L_5aec3c;
            }
            u32 r0_11 = call_007552e8(frame.at(8).addr(), r1, r2, r3);
            u32 r0_12 = call_005add4c(r0_11, frame.at(0).addr());
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_12 == 0) {
                guest::preempt();
                goto L_5aec3c;
            }
            u32 r0_14 = compare_wide_strings(r0_11 + 6u, r6, r2, r3);
            u32 r12_1 = guest::cpu()->r[12];
            r2 = frame->word_0;
            if (r0_14 == 0u) {
                r12_1 = 1u;
            }
            u32 r0_15 = r2 - 0x64u;  // (from the original)
            if (r0_14 != 0u) {
                r12_1 = 0u;
            }
            u32 b_1 = s32(r0_15) >> 0x1f;  // (from the original)
            r1 = r0_15 + (b_1 >> 0x1d);  // (from the original)
            r3 = r1 & ~7u;
            u32 r5_2 = *gptr<u8>(r4 + u32(s32(r1) >> 3));
            if ((r5_2 & lsl_r(r7, r0_15 - r3 & 0xff)) != 0) {  // (from the original)
                if (r12_1 == 0) {
                    guest::preempt();
                    goto L_5aec3c;
                }
                r2 = r2 - 0x64u - r3;  // (from the original)
                gptr<Local_005aebc8_r0_16> r0_16 = gptr<Local_005aebc8_r0_16>(r4 + u32(s32(r1) >> 3));
                r1 = u32(r0_16->byte_71) | lsl_r(r7, r2 & 0xff);  // (from the original)
                r0_16->byte_71 = u8(r1);
                guest::preempt();
                goto L_5aec3c;
            }
            u32 r5_3 = *gptr<u8>(r4 + u32(s32(r1) >> 3));
            *gptr<u8>(r4 + u32(s32(r1) >> 3)) = u8(r5_3 | lsl_r(r7, r2 - 0x64u - r3 & 0xff));  // (from the original)
            gptr<Local_005aebc8_r0_17> r0_17 = gptr<Local_005aebc8_r0_17>(r4 + u32(s32(r1) >> 3));
            u32 r1_3 = r0_17->byte_71;
            r2 = lsl_r(r7, r2 - 0x64u - r3 & 0xff);  // (from the original)
            r1 = r12_1 == 0 ? r1_3 & ~r2 : r1_3 | r2;
            r0_17->byte_71 = u8(r1);
            guest::preempt();
            goto L_5aec3c;
        }
    }
    call_005b00a8(frame.at(8).addr(), r1, r2, r3);
}

}  // namespace d_005aebc8
GUEST_EXPORT_FRAMED(0x005aebc8, d_005aebc8::f_005aebc8, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_005aed44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005aed44 {

struct __attribute__((packed)) Object_005aed44_0 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Object_005aed44_0, byte_0, 0x0);
GUEST_OFFSET(Object_005aed44_0, byte_1, 0x1);
GUEST_OFFSET(Object_005aed44_0, byte_2, 0x2);
GUEST_OFFSET(Object_005aed44_0, byte_3, 0x3);

inline constexpr guest::Function<0x005ad9a0, u32(u32)> call_005ad9a0;

u32 f_005aed44(gptr<Object_005aed44_0> arg0, u32 r1) {
    u32 r2_1 = s8(arg0->byte_0);
    u32 r1_1 = r2_1 - 0x30u;  // (from the original)
    u32 zf_1 = r1_1 == 9u;
    u32 cf_1 = r1_1 >= 9u;
    if (cf_1 && !zf_1) {
        r1_1 = r2_1 - 0x41u;  // (from the original)
        zf_1 = r1_1 == 0x19u;  // (from the original)
        cf_1 = r1_1 >= 0x19u;  // (from the original)
    }
    if (cf_1 && !zf_1) {
        r1_1 = r2_1 - 0x61u;  // (from the original)
        zf_1 = r1_1 == 0x19u;  // (from the original)
        cf_1 = r1_1 >= 0x19u;  // (from the original)
    }
    if (cf_1 && !zf_1 && r2_1 != 0x5fu) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r2_2 = s8(arg0->byte_1);
    u32 r1_2 = r2_2 - 0x30u;  // (from the original)
    u32 zf_2 = r1_2 == 9u;
    u32 cf_2 = r1_2 >= 9u;
    if (cf_2 && !zf_2) {
        r1_2 = r2_2 - 0x41u;  // (from the original)
        zf_2 = r1_2 == 0x19u;  // (from the original)
        cf_2 = r1_2 >= 0x19u;  // (from the original)
    }
    if (cf_2 && !zf_2) {
        r1_2 = r2_2 - 0x61u;  // (from the original)
        zf_2 = r1_2 == 0x19u;  // (from the original)
        cf_2 = r1_2 >= 0x19u;  // (from the original)
    }
    if (cf_2 && !zf_2 && r2_2 != 0x5fu) {  // (from the original)
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    u32 r2_3 = s8(arg0->byte_2);
    u32 r1_3 = r2_3 - 0x30u;  // (from the original)
    u32 zf_3 = r1_3 == 9u;
    u32 cf_3 = r1_3 >= 9u;
    if (cf_3 && !zf_3) {
        r1_3 = r2_3 - 0x41u;  // (from the original)
        zf_3 = r1_3 == 0x19u;  // (from the original)
        cf_3 = r1_3 >= 0x19u;  // (from the original)
    }
    if (cf_3 && !zf_3) {
        r1_3 = r2_3 - 0x61u;  // (from the original)
        zf_3 = r1_3 == 0x19u;  // (from the original)
        cf_3 = r1_3 >= 0x19u;  // (from the original)
    }
    if (cf_3 && !zf_3 && r2_3 != 0x5fu) {  // (from the original)
        guest::cpu()->r[1] = r1_3;
        return 0u;
    }
    u32 r2_4 = s8(arg0->byte_3);
    u32 r1_4 = r2_4 - 0x30u;  // (from the original)
    u32 zf_4 = r1_4 == 9u;
    u32 cf_4 = r1_4 >= 9u;
    if (cf_4 && !zf_4) {
        r1_4 = r2_4 - 0x41u;  // (from the original)
        zf_4 = r1_4 == 0x19u;  // (from the original)
        cf_4 = r1_4 >= 0x19u;  // (from the original)
    }
    if (cf_4 && !zf_4) {
        r1_4 = r2_4 - 0x61u;  // (from the original)
        zf_4 = r1_4 == 0x19u;  // (from the original)
        cf_4 = r1_4 >= 0x19u;  // (from the original)
    }
    if (cf_4 && !zf_4 && r2_4 != 0x5fu) {  // (from the original)
        guest::cpu()->r[1] = r1_4;
        return 0u;
    }
    u32 r0_1 = call_005ad9a0(arg0.addr());
    if (r0_1 - 1u >= 0x270fu) {  // (from the original)
        guest::cpu()->r[1] = 0x270fu;  // (from the original)
        return 0u;
    }
    if (r1 != 0) {
        *gptr<u32>(r1) = r0_1;
    }
    guest::cpu()->r[1] = 0x270fu;  // (from the original)
    return 1u;
}

}  // namespace d_005aed44
GUEST_EXPORT_FRAMED(0x005aed44, d_005aed44::f_005aed44, 0x4010);  // pushes {r4, lr} first, as the original

// f_005aee20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005aee20 {

struct __attribute__((packed)) Object_005aee20_0 {
    u16 half_0;
    u16 half_2;
    u16 half_4;
    u16 half_6;
    u8 unknown_8[0x8];  // (not used here)
    u16 half_10;
};
GUEST_OFFSET(Object_005aee20_0, half_0, 0x0);
GUEST_OFFSET(Object_005aee20_0, half_2, 0x2);
GUEST_OFFSET(Object_005aee20_0, half_4, 0x4);
GUEST_OFFSET(Object_005aee20_0, half_6, 0x6);
GUEST_OFFSET(Object_005aee20_0, half_10, 0x10);

struct __attribute__((packed)) Local_005aee20_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_005aee20_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_005aee20_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_005aee20_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_005aee20_ea_1, word_c, 0xc);

struct __attribute__((packed)) Local_005aee20_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_005aee20_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_005aee20_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_005aee20_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_005aee20_ea_2, word_c, 0xc);

struct __attribute__((packed)) Local_005aee20_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005aee20_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_005aee20_ea_3, word_4, 0x4);

struct __attribute__((packed)) Local_005aee20_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005aee20_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_005aee20_ea_4, word_4, 0x4);

struct __attribute__((packed)) Local_005aee20_ea_5 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_005aee20_ea_5, word_0, 0x0);
GUEST_OFFSET(Local_005aee20_ea_5, word_4, 0x4);
GUEST_OFFSET(Local_005aee20_ea_5, word_8, 0x8);
GUEST_OFFSET(Local_005aee20_ea_5, word_c, 0xc);

struct __attribute__((packed)) Local_005aee20_ea_6 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005aee20_ea_6, word_0, 0x0);
GUEST_OFFSET(Local_005aee20_ea_6, word_4, 0x4);

inline constexpr guest::Function<0x00100835, u32(u32, u32)> string16_length;
inline constexpr guest::Function<0x005ada54, u32(u32)> call_005ada54;

u32 f_005aee20(gptr<Object_005aee20_0> arg0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r1_2 = 0;
    gptr<Local_005aee20_ea_1> ea_1 = gptr<Local_005aee20_ea_1>(r13 - 0x10);  // (from the original)
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r6;
    ea_1->word_c = r14;
    r13 -= 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    u32 r0_1 = string16_length(arg0.addr(), r1);
    if (s32(r0_1) >= 8 && (s32(r0_1) < 9 || arg0->half_10 == 0x2eu)) {  // (from the original)
        gptr<Local_005aee20_ea_2> ea_2 = gptr<Local_005aee20_ea_2>(r13);
        r13 += 0x10;  // (from the original)
        u32 r4_1 = ea_2->word_0;
        r5_1 = ea_2->word_4;
        r6_1 = ea_2->word_8;
        r14 = ea_2->word_c;
        gptr<Local_005aee20_ea_3> ea_3 = gptr<Local_005aee20_ea_3>(r13 - 8);
        ea_3->word_0 = r4_1;
        ea_3->word_4 = r14;
        r13 -= 8;
        u32 r2_1 = arg0->half_0;
        r1_2 = r2_1 - 0x30u;  // (from the original)
        u32 zf_1 = r1_2 == 9u;
        u32 cf_1 = r1_2 >= 9u;
        if (cf_1 && !zf_1) {
            r1_2 = r2_1 - 0x41u;  // (from the original)
            zf_1 = r1_2 == 0x19u;  // (from the original)
            cf_1 = r1_2 >= 0x19u;  // (from the original)
        }
        if (cf_1 && !zf_1) {
            r1_2 = r2_1 - 0x61u;  // (from the original)
            zf_1 = r1_2 == 0x19u;  // (from the original)
            cf_1 = r1_2 >= 0x19u;  // (from the original)
        }
        if (!cf_1 || zf_1 || r2_1 == 0x5fu) {  // (from the original)
            u32 r2_2 = arg0->half_2;
            r1_2 = r2_2 - 0x30u;  // (from the original)
            u32 zf_2 = r1_2 == 9u;
            u32 cf_2 = r1_2 >= 9u;
            if (cf_2 && !zf_2) {
                r1_2 = r2_2 - 0x41u;  // (from the original)
                zf_2 = r1_2 == 0x19u;  // (from the original)
                cf_2 = r1_2 >= 0x19u;  // (from the original)
            }
            if (cf_2 && !zf_2) {
                r1_2 = r2_2 - 0x61u;  // (from the original)
                zf_2 = r1_2 == 0x19u;  // (from the original)
                cf_2 = r1_2 >= 0x19u;  // (from the original)
            }
            if (!cf_2 || zf_2 || r2_2 == 0x5fu) {  // (from the original)
                u32 r2_3 = arg0->half_4;
                r1_2 = r2_3 - 0x30u;  // (from the original)
                u32 zf_3 = r1_2 == 9u;
                u32 cf_3 = r1_2 >= 9u;
                if (cf_3 && !zf_3) {
                    r1_2 = r2_3 - 0x41u;  // (from the original)
                    zf_3 = r1_2 == 0x19u;  // (from the original)
                    cf_3 = r1_2 >= 0x19u;  // (from the original)
                }
                if (cf_3 && !zf_3) {
                    r1_2 = r2_3 - 0x61u;  // (from the original)
                    zf_3 = r1_2 == 0x19u;  // (from the original)
                    cf_3 = r1_2 >= 0x19u;  // (from the original)
                }
                if (!cf_3 || zf_3 || r2_3 == 0x5fu) {  // (from the original)
                    u32 r2_4 = arg0->half_6;
                    r1_2 = r2_4 - 0x30u;  // (from the original)
                    u32 zf_4 = r1_2 == 9u;
                    u32 cf_4 = r1_2 >= 9u;
                    if (cf_4 && !zf_4) {
                        r1_2 = r2_4 - 0x41u;  // (from the original)
                        zf_4 = r1_2 == 0x19u;  // (from the original)
                        cf_4 = r1_2 >= 0x19u;  // (from the original)
                    }
                    if (cf_4 && !zf_4) {
                        r1_2 = r2_4 - 0x61u;  // (from the original)
                        zf_4 = r1_2 == 0x19u;  // (from the original)
                        cf_4 = r1_2 >= 0x19u;  // (from the original)
                    }
                    if (!cf_4 || zf_4 || r2_4 == 0x5fu) {  // (from the original)
                        guest::cpu()->r[13] = r13;
                        u32 r0_2 = call_005ada54(arg0.addr());
                        r1_2 = 0x270fu;  // (from the original)
                        if (r0_2 - 1u < r1_2) {
                            if (r1 != 0) {
                                *gptr<u32>(r1) = r0_2;
                            }
                            gptr<Local_005aee20_ea_4> ea_4 = gptr<Local_005aee20_ea_4>(r13);
                            r13 += 8;
                            u32 r4_2 = ea_4->word_0;
                            guest::cpu()->r[1] = r1_2;
                            guest::cpu()->r[4] = r4_2;
                            guest::cpu()->r[5] = r5_1;
                            guest::cpu()->r[6] = r6_1;
                            guest::cpu()->r[13] = r13;
                            return 1u;
                        }
                    }
                }
            }
        }
    } else {
        gptr<Local_005aee20_ea_5> ea_5 = gptr<Local_005aee20_ea_5>(r13);
        r13 += 0x10;  // (from the original)
        u32 r4_3 = ea_5->word_0;
        u32 r5_2 = ea_5->word_4;
        u32 r6_2 = ea_5->word_8;
        guest::cpu()->r[4] = r4_3;
        guest::cpu()->r[5] = r5_2;
        guest::cpu()->r[6] = r6_2;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    gptr<Local_005aee20_ea_6> ea_6 = gptr<Local_005aee20_ea_6>(r13);
    r13 += 8;
    u32 r4_4 = ea_6->word_0;
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[4] = r4_4;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[13] = r13;
    return 0u;
}

}  // namespace d_005aee20
GUEST_EXPORT(0x005aee20, d_005aee20::f_005aee20);

// f_005aef40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005aef40 {

struct __attribute__((packed)) Object_005aef40_0 {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
    u32 word_18;
    u8 unknown_1c[0x8];  // (not used here)
    u32 word_24;
};
GUEST_OFFSET(Object_005aef40_0, word_14, 0x14);
GUEST_OFFSET(Object_005aef40_0, word_18, 0x18);
GUEST_OFFSET(Object_005aef40_0, word_24, 0x24);

struct __attribute__((packed)) Object_005aef40_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 byte_c;
    u8 byte_d;
    u8 byte_e;
    u8 unknown_f[0x11];  // (not used here)
    u8 byte_20;
};
GUEST_OFFSET(Object_005aef40_1, word_0, 0x0);
GUEST_OFFSET(Object_005aef40_1, word_4, 0x4);
GUEST_OFFSET(Object_005aef40_1, word_8, 0x8);
GUEST_OFFSET(Object_005aef40_1, byte_c, 0xc);
GUEST_OFFSET(Object_005aef40_1, byte_d, 0xd);
GUEST_OFFSET(Object_005aef40_1, byte_e, 0xe);
GUEST_OFFSET(Object_005aef40_1, byte_20, 0x20);

inline constexpr guest::Function<0x005b0120, u32(u32, u32)> call_005b0120;
inline constexpr guest::Function<0x005b0438, u32(u32, u32)> call_005b0438;
inline constexpr guest::Function<0x005b04d0, u32(u32, u32, u32, u32)> call_005b04d0;
inline constexpr guest::Function<0x005b04e8, u32(u32, u32)> call_005b04e8;
inline constexpr guest::Function<0x005b0504, u32(u32, u32)> call_005b0504;
inline constexpr guest::Function<0x005b05c0, u32(u32, u32, u32)> call_005b05c0;
inline constexpr guest::Function<0x00754cc0, u32(u32, u32, u32)> call_00754cc0;
inline constexpr guest::Function<0x00754cd4, u32(u32, u32)> call_00754cd4;

void f_005aef40(gptr<Object_005aef40_0> arg0, gptr<Object_005aef40_1> arg1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r6 = r1;
    u32 r7 = r0;
    u32 r1_1 = arg1->word_4;
    arg0->word_14 = arg1->word_0;
    arg0->word_18 = r1_1;
    arg0->word_24 = arg1->word_8;
    u32 r1_2 = arg1->byte_d;
    call_005b04d0(r7, r1_2, r2, guest::cpu()->r[3]);
    u32 r1_3 = arg1->byte_20;
    call_005b0438(r7, r1_3);
    u32 r1_4 = arg1->byte_e;
    call_005b0504(r7, r1_4);
    u32 r1_5 = arg1->byte_c;
    call_005b04e8(r7, r1_5);
    r2 = guest::cpu()->r[2];
    u32 r4 = 0u;
    do {
        u32 r5_1 = r4 & 0xffu;  // (from the original)
        u32 r0_1 = call_00754cc0(r6, r5_1, r2);
        if (r0_1 != 0) {
            u32 r0_2 = call_00754cd4(r6, r5_1);
            call_005b05c0(r7, r5_1, r0_2);
            r2 = guest::cpu()->r[2];
        } else {
            call_005b0120(r7, r5_1);
            r2 = guest::cpu()->r[2];
        }
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 4);
}

}  // namespace d_005aef40
GUEST_EXPORT_FRAMED(0x005aef40, d_005aef40::f_005aef40, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_005aeff0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005aeff0 {

struct __attribute__((packed)) Object_005aeff0_0 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Object_005aeff0_0, byte_0, 0x0);
GUEST_OFFSET(Object_005aeff0_0, byte_1, 0x1);
GUEST_OFFSET(Object_005aeff0_0, byte_2, 0x2);


u32 f_005aeff0(gptr<Object_005aeff0_0> arg0) {
    u32 r3_1 = s8(arg0->byte_0);
    if (r3_1 - 0x30u >= 0xau) {  // (from the original)
        return ~0u;
    }
    u32 r2_1 = s8(arg0->byte_1);
    u32 r1_1 = ~0x2fu;  // (from the original)
    if (r2_1 - 0x30u >= 0xau) {  // (from the original)
        return ~0u;
    }
    u32 r0_3 = s8(arg0->byte_2);
    if (r0_3 - 0x30u < 0xau) {  // (from the original)
        return r0_3 + (r1_1 + (r2_1 + (r1_1 + (r3_1 - 0x30u) * 0xau)) * 0xau);  // (from the original)
    }
    return ~0u;
}

}  // namespace d_005aeff0
GUEST_EXPORT(0x005aeff0, d_005aeff0::f_005aeff0);

// f_005af13c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005af13c {

struct __attribute__((packed)) Object_005af13c_0 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Object_005af13c_0, byte_0, 0x0);
GUEST_OFFSET(Object_005af13c_0, byte_1, 0x1);
GUEST_OFFSET(Object_005af13c_0, byte_2, 0x2);
GUEST_OFFSET(Object_005af13c_0, byte_3, 0x3);

struct __attribute__((packed)) Object_005af13c_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_005af13c_1, word_0, 0x0);

struct __attribute__((packed)) Local_005af13c_ea_4 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(Local_005af13c_ea_4, byte_0, 0x0);
GUEST_OFFSET(Local_005af13c_ea_4, byte_1, 0x1);


u32 f_005af13c(gptr<Object_005af13c_0> arg0, gptr<Object_005af13c_1> arg1) {
    u32 r1 = arg1.addr();
    u32 r4_1 = s8(arg0->byte_0);
    if (r4_1 - 0x30u < 0xau) {  // (from the original)
        u32 r12_1 = s8(arg0->byte_1);
        u32 r3_1 = ~0x2fu;  // (from the original)
        if (r12_1 - 0x30u < 0xau) {  // (from the original)
            u32 r2_1 = s8(arg0->byte_2);
            if (r2_1 - 0x30u < 0xau) {  // (from the original)
                u32 r2_2 = r2_1 + (r3_1 + (r12_1 + (r3_1 + (r4_1 - 0x30u) * 0xau)) * 0xau);  // (from the original)
                if (r2_2 - 0x64u < 0x384u) {  // (from the original)
                    if (r1 != 0) {
                        arg1->word_0 = r2_2;
                    }
                    r1 = s8(arg0->byte_3);
                    u32 r2_3 = r1 - 0x30u;  // (from the original)
                    u32 zf_1 = r2_3 == 9u;
                    u32 cf_1 = r2_3 >= 9u;
                    if (cf_1 && !zf_1) {
                        u32 r2_4 = r1 - 0x41u;  // (from the original)
                        zf_1 = r2_4 == 0x19u;  // (from the original)
                        cf_1 = r2_4 >= 0x19u;  // (from the original)
                    }
                    if (cf_1 && !zf_1) {
                        u32 r2_5 = r1 - 0x61u;  // (from the original)
                        zf_1 = r2_5 == 0x19u;  // (from the original)
                        cf_1 = r2_5 >= 0x19u;  // (from the original)
                    }
                    if (!cf_1 || zf_1 || r1 == 0x5fu) {  // (from the original)
                        u32 ea_2 = (arg0.addr() + 3u) + 1u;
                        r1 = *gptr<s8>(ea_2);
                        u32 r2_6 = r1 - 0x30u;  // (from the original)
                        u32 zf_2 = r2_6 == 9u;
                        u32 cf_2 = r2_6 >= 9u;
                        if (cf_2 && !zf_2) {
                            u32 r2_7 = r1 - 0x41u;  // (from the original)
                            zf_2 = r2_7 == 0x19u;  // (from the original)
                            cf_2 = r2_7 >= 0x19u;  // (from the original)
                        }
                        if (cf_2 && !zf_2) {
                            u32 r2_8 = r1 - 0x61u;  // (from the original)
                            zf_2 = r2_8 == 0x19u;  // (from the original)
                            cf_2 = r2_8 >= 0x19u;  // (from the original)
                        }
                        if (!cf_2 || zf_2 || r1 == 0x5fu) {  // (from the original)
                            u32 ea_3 = ea_2 + 1u;
                            r1 = *gptr<s8>(ea_3);
                            u32 r2_9 = r1 - 0x30u;  // (from the original)
                            u32 zf_3 = r2_9 == 9u;
                            u32 cf_3 = r2_9 >= 9u;
                            if (cf_3 && !zf_3) {
                                u32 r2_10 = r1 - 0x41u;  // (from the original)
                                zf_3 = r2_10 == 0x19u;  // (from the original)
                                cf_3 = r2_10 >= 0x19u;  // (from the original)
                            }
                            if (cf_3 && !zf_3) {
                                u32 r2_11 = r1 - 0x61u;  // (from the original)
                                zf_3 = r2_11 == 0x19u;  // (from the original)
                                cf_3 = r2_11 >= 0x19u;  // (from the original)
                            }
                            if (!cf_3 || zf_3 || r1 == 0x5fu) {  // (from the original)
                                gptr<Local_005af13c_ea_4> ea_4 = gptr<Local_005af13c_ea_4>(ea_3 + 1u);
                                r1 = s8(ea_4->byte_0);
                                u32 r2_12 = r1 - 0x30u;  // (from the original)
                                u32 zf_4 = r2_12 == 9u;
                                u32 cf_4 = r2_12 >= 9u;
                                if (cf_4 && !zf_4) {
                                    u32 r2_13 = r1 - 0x41u;  // (from the original)
                                    zf_4 = r2_13 == 0x19u;  // (from the original)
                                    cf_4 = r2_13 >= 0x19u;  // (from the original)
                                }
                                if (cf_4 && !zf_4) {
                                    u32 r2_14 = r1 - 0x61u;  // (from the original)
                                    zf_4 = r2_14 == 0x19u;  // (from the original)
                                    cf_4 = r2_14 >= 0x19u;  // (from the original)
                                }
                                if (!cf_4 || zf_4 || r1 == 0x5fu) {  // (from the original)
                                    u32 r0_1 = s8(ea_4->byte_1);
                                    r1 = r0_1 - 0x30u;  // (from the original)
                                    u32 zf_5 = r1 == 9u;
                                    u32 cf_5 = r1 >= 9u;
                                    if (cf_5 && !zf_5) {
                                        r1 = r0_1 - 0x41u;  // (from the original)
                                        zf_5 = r1 == 0x19u;  // (from the original)
                                        cf_5 = r1 >= 0x19u;  // (from the original)
                                    }
                                    if (cf_5 && !zf_5) {
                                        r1 = r0_1 - 0x61u;  // (from the original)
                                        zf_5 = r1 == 0x19u;  // (from the original)
                                        cf_5 = r1 >= 0x19u;  // (from the original)
                                    }
                                    if (!cf_5 || zf_5 || r0_1 == 0x5fu) {  // (from the original)
                                        guest::cpu()->r[1] = r1;
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
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_005af13c
GUEST_EXPORT_FRAMED(0x005af13c, d_005af13c::f_005af13c, 0x30);  // pushes {r4, r5} first, as the original

// f_005af3e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005af3e0 {

struct __attribute__((packed)) Local_005af3e0_ea_1 {
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
};
GUEST_OFFSET(Local_005af3e0_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_005af3e0_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_005af3e0_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_005af3e0_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_005af3e0_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_005af3e0_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_005af3e0_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_005af3e0_ea_1, word_1c, 0x1c);
GUEST_OFFSET(Local_005af3e0_ea_1, word_20, 0x20);
GUEST_OFFSET(Local_005af3e0_ea_1, word_24, 0x24);
GUEST_OFFSET(Local_005af3e0_ea_1, word_28, 0x28);
GUEST_OFFSET(Local_005af3e0_ea_1, word_2c, 0x2c);
GUEST_OFFSET(Local_005af3e0_ea_1, word_30, 0x30);

struct __attribute__((packed)) Local_005af3e0_ea_2 {
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
GUEST_OFFSET(Local_005af3e0_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_005af3e0_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_005af3e0_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_005af3e0_ea_2, word_c, 0xc);
GUEST_OFFSET(Local_005af3e0_ea_2, word_10, 0x10);
GUEST_OFFSET(Local_005af3e0_ea_2, word_14, 0x14);
GUEST_OFFSET(Local_005af3e0_ea_2, word_18, 0x18);
GUEST_OFFSET(Local_005af3e0_ea_2, word_1c, 0x1c);
GUEST_OFFSET(Local_005af3e0_ea_2, word_20, 0x20);

inline constexpr guest::Function<0x001416b0, u32(u32)> return_constant_0x97e098_;
inline constexpr guest::Function<0x005ab4c8, u32(u32, u32)> call_005ab4c8;
inline constexpr guest::Function<0x005ac5dc, u32(u32, u32, u32, u32)> call_005ac5dc;
inline constexpr guest::Function<0x005ad690, u32(u32, u32, u32, u32)> call_005ad690;
inline constexpr guest::Function<0x005ad74c, u32(u32, u32)> call_005ad74c;
inline constexpr guest::Function<0x005ae51c, u32(u32, u32, u32, u32)> call_005ae51c;
inline constexpr guest::Function<0x005aff24, u32(u32, u32, u32, u32)> call_005aff24;
inline constexpr guest::Function<0x005affd8, u32(u32, u32, u32, u32)> nn__fs__Directory__Directory_005affd8;
inline constexpr guest::Function<0x005b00a8, u32(u32, u32, u32, u32)> call_005b00a8;
inline constexpr guest::Function<0x005b0520, u32(u32, u32, u32, u32)> call_005b0520;
inline constexpr guest::Function<0x007553d8, u32(u32, u32, u32, u32)> extension_index;

struct __attribute__((packed)) Frame_005af3e0 {
    u32 word_0;
    u8 unknown_4[0x8];  // (not read or written by name)
    u8 byte_c;
    u8 unknown_d[0xab];  // (not read or written by name)
    u32 word_b8;
    u8 unknown_bc[0x2c];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005af3e0, word_0, 0x0);
GUEST_OFFSET(Frame_005af3e0, byte_c, 0xc);
GUEST_OFFSET(Frame_005af3e0, word_b8, 0xb8);
GUEST_SIZE(Frame_005af3e0, 0xe8);

u32 f_005af3e0(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005af3e0> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r14 = guest::cpu()->r[14];
    u32 r3_10 = 0;
    u32 r0_18 = 0;
    u32 r1_9 = 0;
    u32 r0_19 = 0;
    u32 r3_12 = 0;
    u32 r0_20 = 0;
    u32 r0_21 = 0;
    u32 r7_2 = 0;
    u32 r0_22 = 0;
    u32 r0_23 = 0;
    u32 r0_24 = 0;
    u32 r0_25 = 0;
    u32 r0_26 = 0;
    u32 r0_27 = 0;
    u32 r0_28 = 0;
    u32 r5_1 = 0;
    u32 r0_29 = 0;
    u32 r0_30 = 0;
    u32 r0_31 = 0;
    u32 r0_32 = 0;
    u32 r0_33 = 0;
    u32 r1_13 = 0;
    u32 r0_34 = 0;
    u32 r1_14 = 0;
    u32 r0_35 = 0;
    u32 r0_36 = 0;
    u32 r5_2 = 0;
    u32 r0_37 = 0;
    u32 r0_38 = 0;
    u32 r0_39 = 0;
    u32 r0_40 = 0;
    u32 r0_41 = 0;
    gptr<Local_005af3e0_ea_2> ea_2 = gptr<Local_005af3e0_ea_2>(0u);
    u32 r4_1 = 0;
    u32 r5_3 = 0;
    u32 r6_1 = 0;
    u32 r7_3 = 0;
    u32 r8_1 = 0;
    u32 r9_1 = 0;
    u32 r10_1 = 0;
    u32 r11_1 = 0;
    gptr<Local_005af3e0_ea_1> ea_1 = gptr<Local_005af3e0_ea_1>(frame.at(0xb4).addr());  // (from the original)
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r3;
    ea_1->word_10 = r4;
    ea_1->word_14 = r5;
    ea_1->word_18 = r6;
    ea_1->word_1c = r7;
    ea_1->word_20 = r8;
    ea_1->word_24 = r9;
    ea_1->word_28 = r10;
    ea_1->word_2c = r11;
    ea_1->word_30 = r14;
    r4 = r0;
    r5 = r2;
    r6 = 1u;
    u32 r0_2 = extension_index(frame->word_b8, r1, r2, r3);
    r9 = 0x15u;  // (from the original)
    r8 = 0x3e8u;  // (from the original)
    if (r0_2 != 1u) {
        u32 r0_4 = extension_index(frame->word_b8, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        if (r0_4 != 3u) {
            u32 r0_6 = extension_index(frame->word_b8, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            if (r0_6 == 2u) {
                u32 r3_3 = frame->word_b8;
                frame->word_0 = r5;
                call_005ac5dc(frame.at(8).addr(), 0x2cu, r4, r3_3);  // (from the original)
                u32 r0_8 = call_005ab4c8(r4, frame.at(8).addr());
                r6 = r0_8;
                if (r4 == 1u) {
                    call_005b0520(frame.at(0x60).addr(), frame->word_b8, 1u, r5);  // (from the original)
                    frame->word_0 = r5;
                    call_005ac5dc(frame.at(8).addr(), 0x2cu, r4, frame.at(0x60).addr());  // (from the original)
                    call_005ab4c8(r4, frame.at(8).addr());
                }
                if (r6 != 0 || r3 == 0) {
                    goto L_5af6b0;
                }
                u32 r3_7 = frame->word_b8;
                frame->word_0 = r5;
                u32 r0_12 = call_005ad690(frame.at(0x30).addr(), 0x1eu, r4, r3_7);  // (from the original)
                u32 r0_13 = return_constant_0x97e098_(r0_12);
                frame->word_0 = r8;
                nn__fs__Directory__Directory_005affd8(frame.at(8).addr(), r0_13, r4, frame.at(0x30).addr());  // (from the original)
                if (frame->byte_c == 0) {
                    goto L_5af6bc;
                }
                u32 r0_16 = call_005aff24(frame.at(8).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                if (r0_16 == 0) {
                    goto L_5af6bc;
                }
                call_005b00a8(frame.at(8).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                goto L_5af650;
            }
            goto L_5af6b0;
        }
    }
    r3_10 = frame->word_b8;
    r0_18 = frame.at(8).addr();
    frame->word_0 = r5;
    call_005ac5dc(r0_18, 0x2cu, r4, r3_10);  // (from the original)
    r1_9 = frame.at(8).addr();
    r0_19 = call_005ab4c8(r4, r1_9);
    r6 = r0_19;
    if (r0_19 != 0 || r3 == 0) {
        goto L_5af6b0;
    }
    r3_12 = frame->word_b8;
    r0_20 = frame.at(0x30).addr();  // (from the original)
    frame->word_0 = r5;
    r0_21 = call_005ad690(r0_20, 0x1eu, r4, r3_12);  // (from the original)
    r7_2 = frame.at(0x30).addr();  // (from the original)
    r0_22 = return_constant_0x97e098_(r0_21);
    r0_23 = frame.at(8).addr();
    frame->word_0 = r8;
    nn__fs__Directory__Directory_005affd8(r0_23, r0_22, r4, r7_2);
    if (frame->byte_c == 0) {
        goto L_5af534;
    }
    r0_24 = frame.at(8).addr();
    r0_25 = call_005aff24(r0_24, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_25 == 0) {
        goto L_5af534;
    }
    r0_26 = frame.at(8).addr();
    call_005b00a8(r0_26, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
L_5af4d8:;
    r0_27 = frame.at(0x30).addr();  // (from the original)
    r0_28 = call_005ae51c(r0_27, r9, r4, r5);
    r5_1 = frame.at(0x30).addr();  // (from the original)
    r0_29 = return_constant_0x97e098_(r0_28);
    r0_30 = frame.at(8).addr();
    frame->word_0 = r8;
    nn__fs__Directory__Directory_005affd8(r0_30, r0_29, r4, r5_1);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (frame->byte_c == 0) {
        goto L_5af554;
    }
    r0_31 = frame.at(8).addr();
    r0_32 = call_005aff24(r0_31, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_32 == 0) {
        goto L_5af554;
    }
    goto L_5af6a8;
L_5af534:;
    r0_33 = frame.at(8).addr();
    call_005b00a8(r0_33, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_13 = frame.at(0x30).addr();  // (from the original)
    call_005ad74c(r4, r1_13);
    guest::preempt();
    goto L_5af4d8;
L_5af554:;
    r0_34 = frame.at(8).addr();
    call_005b00a8(r0_34, r1, r2, r3);
    r1_14 = frame.at(0x30).addr();  // (from the original)
    call_005ad74c(r4, r1_14);
    goto L_5af6b0;
L_5af650:;
    r0_35 = frame.at(0x30).addr();  // (from the original)
    r0_36 = call_005ae51c(r0_35, r9, r4, r5);
    r5_2 = frame.at(0x30).addr();  // (from the original)
    r0_37 = return_constant_0x97e098_(r0_36);
    r0_38 = frame.at(8).addr();
    frame->word_0 = r8;
    nn__fs__Directory__Directory_005affd8(r0_38, r0_37, r4, r5_2);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (frame->byte_c == 0) {
        guest::preempt();
        goto L_5af554;
    }
    r0_39 = frame.at(8).addr();
    r0_40 = call_005aff24(r0_39, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_40 == 0) {
        guest::preempt();
        goto L_5af554;
    }
L_5af6a8:;
    r0_41 = frame.at(8).addr();
    call_005b00a8(r0_41, r1, r2, r3);
L_5af6b0:;
    ea_2 = gptr<Local_005af3e0_ea_2>(frame.at(0xc4).addr());  // (from the original)
    r4_1 = ea_2->word_0;
    r5_3 = ea_2->word_4;
    r6_1 = ea_2->word_8;
    r7_3 = ea_2->word_c;
    r8_1 = ea_2->word_10;
    r9_1 = ea_2->word_14;
    r10_1 = ea_2->word_18;
    r11_1 = ea_2->word_1c;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_3;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_3;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
    guest::cpu()->r[10] = r10_1;
    guest::cpu()->r[11] = r11_1;
    return r6;
L_5af6bc:;
    call_005b00a8(frame.at(8).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_005ad74c(r4, frame.at(0x30).addr());  // (from the original)
    guest::preempt();
    goto L_5af650;
}

}  // namespace d_005af3e0
GUEST_EXPORT(0x005af3e0, d_005af3e0::f_005af3e0);

// f_005af6dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005af6dc {

struct __attribute__((packed)) Object_005af6dc_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_005af6dc_0, word_0, 0x0);


u32 f_005af6dc(gptr<Object_005af6dc_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    if (s32(r2) <= 0) {
        return 0u;
    }
    u32 r12 = ~0x2fu;  // (from the original)
    arg0->word_0 = 0;
    for (;;) {
        r2 -= 1u;
        if (s32(r2) < 0) {
            guest::cpu()->r[1] = r1;
            return 1u;
        }
        u32 r3 = *gptr<s8>(r1);
        if (r3 == 0) {
            break;
        }
        if (r3 - 0x30u >= 0xau) {  // (from the original)
            guest::cpu()->r[1] = r1;
            return 0u;
        }
        r1 += 1u;
        *gptr<u32>(r0) = r3 + (r12 + *gptr<u32>(r0) * 0xau);  // (from the original)
        guest::preempt();
    }
    guest::cpu()->r[1] = r1;
    return 1u;
}

}  // namespace d_005af6dc
GUEST_EXPORT_FRAMED(0x005af6dc, d_005af6dc::f_005af6dc, 0x10);  // pushes {r4} first, as the original

// f_005af748: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005af748 {

struct __attribute__((packed)) Object_005af748_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_005af748_0, word_0, 0x0);


u32 f_005af748(gptr<Object_005af748_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    if (s32(r2) <= 0) {
        return 0u;
    }
    u32 r12 = ~0x2fu;  // (from the original)
    arg0->word_0 = 0;
    for (;;) {
        r2 -= 1u;
        if (s32(r2) < 0) {
            guest::cpu()->r[1] = r1;
            return 1u;
        }
        u32 r3 = *gptr<u16>(r1);
        if (r3 == 0) {
            break;
        }
        if (r3 - 0x30u >= 0xau) {  // (from the original)
            guest::cpu()->r[1] = r1;
            return 0u;
        }
        r1 += 2u;
        *gptr<u32>(r0) = r3 + (r12 + *gptr<u32>(r0) * 0xau);  // (from the original)
        guest::preempt();
    }
    guest::cpu()->r[1] = r1;
    return 1u;
}

}  // namespace d_005af748
GUEST_EXPORT_FRAMED(0x005af748, d_005af748::f_005af748, 0x10);  // pushes {r4} first, as the original

// f_005af7b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005af7b4 {


u32 f_005af7b4(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
L_5af7b4:;
    u32 r2_1 = *gptr<u16>(r0);
    u32 zf_1 = r2_1 == 0;
    if (!zf_1) {
        r3 = *gptr<u16>(r1);
        zf_1 = r3 == 0;
    }
    if (!zf_1) {
        if (r2_1 - 0x41u <= 0x19u) {  // (from the original)
            r2_1 += 0x20u;  // (from the original)
        }
        if (r3 - 0x41u <= 0x19u) {  // (from the original)
            r3 += 0x20u;  // (from the original)
        }
        r3 = uxth(r3);
        if (uxth(r2_1) == r3) {
            r0 += 2u;
            r1 += 2u;
            guest::preempt();
            goto L_5af7b4;
        }
    }
    u32 r0_1 = *gptr<u16>(r0);
    if (r0_1 - 0x41u <= 0x19u) {  // (from the original)
        r0_1 += 0x20u;  // (from the original)
    }
    u32 r0_2 = *gptr<u16>(r1);
    u32 r1_1 = r0_2 - 0x41u;  // (from the original)
    if (r1_1 <= 0x19u) {  // (from the original)
        r0_2 += 0x20u;  // (from the original)
    }
    guest::cpu()->r[1] = r1_1;
    return uxth(r0_1) - uxth(r0_2);
}

}  // namespace d_005af7b4
GUEST_EXPORT(0x005af7b4, d_005af7b4::f_005af7b4);

// f_005af8c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005af8c8 {

inline constexpr u32 vtable_imgdb__Crc16Context = 0x00907dbcu;
inline constexpr u32 global_00981eb1_address = 0x00981eb1u;
inline constexpr u32 global_00af6e08_address = 0x00af6e08u;

void imgdb__Crc16Context__Crc16Context(gptr<imgdb__Crc16Context> crc16_context, u32 r1, u32 r2) {
    u32 r3 = 0;
    u32 res_1 = 0;
    u32 r7 = 0u;
    u32 r9 = 1u;
    u32 r8 = global_00981eb1_address;
    crc16_context->word_0 = vtable_imgdb__Crc16Context;
    crc16_context->byte_4 = u8(r7);
    crc16_context->half_6 = u16(r7);
    if (*gptr<u8>(r8) == 0) {
        u32 r10 = global_00af6e08_address;
        u32 r5 = 0u;
        u32 r6 = r9 + 0xa000u;  // (from the original)
        do {
            r3 = r5;
            u32 r4 = 4u;
            do {
                u32 r12_1 = (r3 & 1u) == 0 ? r3 >> 1 : r6 ^ r3 >> 1;
                r3 = (r12_1 & 1u) == 0 ? r12_1 >> 1 : r6 ^ r12_1 >> 1;
                r4 -= 1u;
                guest::preempt();
            } while (r4 != 0);
            u32 r12_2 = r10 + (r5 << 1);
            r5 += 1u;
            *gptr<u16>(r12_2) = u16(r3);
            guest::preempt();
        } while (r5 < 0x100u);  // (from the original)
        *gptr<u8>(r8) = u8(r9);
    }
    r3 = global_00af6e08_address;
    crc16_context->half_6 = u16(r7);
    crc16_context->byte_4 = u8(r9);
    if (r2 != 0) {
        r1 -= 1u;
        if ((r2 & 1u) != 0) {
            u32 ea_1 = r1 + 1u;
            r1 = ea_1;
            r7 = gptr<u16>(r3)[u32(*gptr<u8>(ea_1))];
        }
        r2 >>= 1;
        if (r2 != 0) {
            do {
                u32 r12_3 = *gptr<u8>(r1 + 1u);
                u32 ea_3 = r1 + 2u;
                r1 = ea_3;
                res_1 = r2 - 1u;
                r2 = res_1;
                u32 r12_4 = u32(gptr<u16>(r3)[(r12_3 ^ r7) & 0xffu]) ^ r7 >> 8;  // (from the original)
                r7 = u32(gptr<u16>(r3)[(u32(*gptr<u8>(ea_3)) ^ r12_4) & 0xffu]) ^ r12_4 >> 8;  // (from the original)
                guest::preempt();
            } while (res_1 != 0);
        }
    }
    crc16_context->half_6 = u16(r7);
    guest::cpu()->r[1] = r1;
}

}  // namespace d_005af8c8
GUEST_EXPORT_FRAMED(0x005af8c8, d_005af8c8::imgdb__Crc16Context__Crc16Context, 0x7f0);  // pushes {r4, r5, r6, r7, r8, r9, r10} first, as the original

// f_005afd20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005afd20 {

struct __attribute__((packed)) Object_005afd20_0 {
    u8 unknown_0[0x1c];  // (not used here)
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    float float_28;
    u8 byte_2c;
};
GUEST_OFFSET(Object_005afd20_0, word_1c, 0x1c);
GUEST_OFFSET(Object_005afd20_0, word_20, 0x20);
GUEST_OFFSET(Object_005afd20_0, word_24, 0x24);
GUEST_OFFSET(Object_005afd20_0, float_28, 0x28);
GUEST_OFFSET(Object_005afd20_0, byte_2c, 0x2c);


void f_005afd20(gptr<Object_005afd20_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r12_1 = *gptr<u32>(r13 + 4u);
    float S0_1 = std::bit_cast<float>(*gptr<u32>(r13));
    arg0->word_1c = r1;
    arg0->word_20 = r2;
    arg0->word_24 = r3;
    arg0->float_28 = S0_1;
    arg0->byte_2c = u8(r12_1);
    guest::cpu()->s[0] = S0_1;
}

}  // namespace d_005afd20
GUEST_EXPORT(0x005afd20, d_005afd20::f_005afd20);

// f_005afe90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005afe90 {

struct __attribute__((packed)) Object_005afe90_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u16 half_10;
};
GUEST_OFFSET(Object_005afe90_0, word_0, 0x0);
GUEST_OFFSET(Object_005afe90_0, word_4, 0x4);
GUEST_OFFSET(Object_005afe90_0, word_8, 0x8);
GUEST_OFFSET(Object_005afe90_0, word_c, 0xc);
GUEST_OFFSET(Object_005afe90_0, half_10, 0x10);


void f_005afe90(gptr<Object_005afe90_0> arg0) {
    arg0->word_0 = 0;
    arg0->word_4 = 0;
    arg0->word_8 = 0;
    arg0->word_c = 0;
    arg0->half_10 = 0;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_005afe90
GUEST_EXPORT(0x005afe90, d_005afe90::f_005afe90);

// f_005aff24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005aff24 {

struct __attribute__((packed)) Object_005aff24_0 {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
    u8 unknown_5[0x3];  // (not used here)
    u8 byte_8;
    u8 unknown_9[0x7];  // (not used here)
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
};
GUEST_OFFSET(Object_005aff24_0, byte_4, 0x4);
GUEST_OFFSET(Object_005aff24_0, byte_8, 0x8);
GUEST_OFFSET(Object_005aff24_0, word_10, 0x10);
GUEST_OFFSET(Object_005aff24_0, word_14, 0x14);
GUEST_OFFSET(Object_005aff24_0, word_18, 0x18);
GUEST_OFFSET(Object_005aff24_0, word_1c, 0x1c);
GUEST_OFFSET(Object_005aff24_0, word_20, 0x20);
GUEST_OFFSET(Object_005aff24_0, word_24, 0x24);

struct __attribute__((packed)) Local_005aff24_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005aff24_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_005aff24_ea_1, word_4, 0x4);

inline constexpr guest::Function<0x00347454, u32(u32)> call_virtual_1_if_present_00347454;
inline constexpr guest::Function<0x00347518, u32(u32, u32, u32, u32)> call_00347518;
inline constexpr guest::Function<0x005aead8, u32(u32, u32)> call_005aead8;

struct __attribute__((packed)) Frame_005aff24 {
    u32 word_0;
};
GUEST_OFFSET(Frame_005aff24, word_0, 0x0);
GUEST_SIZE(Frame_005aff24, 0x4);

u32 f_005aff24(gptr<Object_005aff24_0> arg0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_005aff24> frame;  // the original's stack frame
    frame->word_0 = r3;
    if (arg0->byte_4 != 0) {
        u32 r0_1 = arg0->word_24;
        r1 = arg0->word_20;
        if (s32(r1) > s32(r0_1)) {
            u32 r1_1 = arg0->word_18;
            u32 r0_2 = arg0->word_1c + 1u;
            arg0->word_1c = r0_2;
            arg0->word_24 = r0_1 + 1u;
            if (s32(r1_1) <= s32(r0_2)) {
                arg0->word_1c = 0;
                u32 r0_4 = call_00347518(frame.at(0).addr(), arg0->word_10, arg0->word_14, 0x40u);  // (from the original)
                if (s32(r0_4) >= 0) {
                    arg0->word_18 = frame->word_0;
                } else {
                    call_virtual_1_if_present_00347454(arg0->word_10);
                    r1 = guest::cpu()->r[1];
                    arg0->word_10 = 0;
                    u32 r0_6 = arg0->byte_8;
                    arg0->byte_4 = 0;
                    if (r0_6 == 0) {
                        call_005aead8(r0_4, r1);
                        r1 = guest::cpu()->r[1];
                    }
                    guest::cpu()->r[1] = r1;
                    return 0u;
                }
            }
            gptr<Local_005aff24_ea_1> ea_1 = gptr<Local_005aff24_ea_1>(arg0.addr() + 0x18u);  // (from the original)
            r1 = ea_1->word_4;
            if (s32(r1) < s32(ea_1->word_0)) {
                guest::cpu()->r[1] = r1;
                return 1u;
            }
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_005aff24
GUEST_EXPORT_FRAMED(0x005aff24, d_005aff24::f_005aff24, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original
