// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_00580fd0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00580fd0 {

inline constexpr u32 vtable_BsSkb = 0x008f799cu;
inline constexpr u32 vtable_BsSkb_at_28 = 0x008f7a08u;
inline constexpr u32 vtable_BsSkb_at_a4 = 0x008f7b0cu;
inline constexpr guest::Function<0x003170d0, u32(u32)> destroy_ITalkRecept;
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> ssys__ma__lyt__ArcResAccReader__destructor;
inline constexpr guest::Function<0x006aaa30, u32(u32, u32)> MenuBase__destructor;

u32 BsSkb__virtual_0_00580fd0(gptr<BsSkb> bs_skb) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    bs_skb->word_28 = vtable_BsSkb_at_28;
    bs_skb->word_0 = vtable_BsSkb;
    bs_skb->word_a4 = vtable_BsSkb_at_a4;
    u32 r0_2 = ssys__ma__lyt__ArcResAccReader__destructor(bs_skb.addr() + 0xebcu, vtable_BsSkb_at_28, vtable_BsSkb, vtable_BsSkb_at_a4);  // (from the original)
    u32 r0_4 = ssys__ma__lyt__ArcResAccReader__destructor(r0_2 - 0x248u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_6 = ssys__ma__lyt__ArcResAccReader__destructor(r0_4 - 0x248u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_8 = ssys__ma__lyt__ArcResAccReader__destructor(r0_6 - 0x248u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_10 = ssys__ma__lyt__ArcResAccReader__destructor(r0_8 - 0x248u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_12 = ssys__ma__lyt__ArcResAccReader__destructor(r0_10 - 0x288u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_14 = ssys__ma__lyt__ArcResAccReader__destructor(r0_12 - 0x248u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    destroy_ITalkRecept(r0_14 - 0xa4u);  // (from the original)
    frame.release();
    return MenuBase__destructor(r0_14 - 0xccu, guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_00580fd0
GUEST_EXPORT(0x00580fd0, d_00580fd0::BsSkb__virtual_0_00580fd0);

// f_00581050: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00581050 {

struct __attribute__((packed)) Object_00581050_0 {
    u8 unknown_0[0x28];  // (not used here)
    u32 word_28;
    u32 word_2c;
};
GUEST_OFFSET(Object_00581050_0, word_28, 0x28);
GUEST_OFFSET(Object_00581050_0, word_2c, 0x2c);

inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32)> allocate_from_heap_002fd108;
inline constexpr guest::Function<0x005814d0, u32(u32, u32, u32, u32)> call_005814d0;
inline constexpr guest::Function<0x005817f0, u32(u32)> call_005817f0;
inline constexpr guest::Function<0x006138a4, u32(u32)> call_006138a4;

u32 f_00581050(gptr<Object_00581050_0> arg0, u32 r1, u32 r2) {
    u32 r0_1 = call_005814d0(arg0.addr(), r1, r2, guest::cpu()->r[3]);
    if (r0_1 != 0) {
        u32 block = allocate_from_heap_002fd108(0x4000u, r1, 0x80u);  // (from the original)
        arg0->word_2c = block;
        if (block != 0) {
            call_006138a4(block);
            arg0->word_28 = arg0->word_2c;
            return 1u;
        }
    }
    call_005817f0(arg0.addr());
    return 0u;
}

}  // namespace d_00581050
GUEST_EXPORT_FRAMED(0x00581050, d_00581050::f_00581050, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005810ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005810ac {

struct __attribute__((packed)) Local_005810ac_ea_1 {
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
GUEST_OFFSET(Local_005810ac_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_005810ac_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_005810ac_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_005810ac_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_005810ac_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_005810ac_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_005810ac_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_005810ac_ea_1, word_1c, 0x1c);
GUEST_OFFSET(Local_005810ac_ea_1, word_20, 0x20);
GUEST_OFFSET(Local_005810ac_ea_1, word_24, 0x24);
GUEST_OFFSET(Local_005810ac_ea_1, word_28, 0x28);
GUEST_OFFSET(Local_005810ac_ea_1, word_2c, 0x2c);
GUEST_OFFSET(Local_005810ac_ea_1, word_30, 0x30);

struct __attribute__((packed)) Local_005810ac_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005810ac_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_005810ac_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_005810ac_ea_3 {
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
GUEST_OFFSET(Local_005810ac_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_005810ac_ea_3, word_4, 0x4);
GUEST_OFFSET(Local_005810ac_ea_3, word_8, 0x8);
GUEST_OFFSET(Local_005810ac_ea_3, word_c, 0xc);
GUEST_OFFSET(Local_005810ac_ea_3, word_10, 0x10);
GUEST_OFFSET(Local_005810ac_ea_3, word_14, 0x14);
GUEST_OFFSET(Local_005810ac_ea_3, word_18, 0x18);
GUEST_OFFSET(Local_005810ac_ea_3, word_1c, 0x1c);
GUEST_OFFSET(Local_005810ac_ea_3, word_20, 0x20);

struct __attribute__((packed)) Local_005810ac_ea_4 {
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
GUEST_OFFSET(Local_005810ac_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_005810ac_ea_4, word_4, 0x4);
GUEST_OFFSET(Local_005810ac_ea_4, word_8, 0x8);
GUEST_OFFSET(Local_005810ac_ea_4, word_c, 0xc);
GUEST_OFFSET(Local_005810ac_ea_4, word_10, 0x10);
GUEST_OFFSET(Local_005810ac_ea_4, word_14, 0x14);
GUEST_OFFSET(Local_005810ac_ea_4, word_18, 0x18);
GUEST_OFFSET(Local_005810ac_ea_4, word_1c, 0x1c);
GUEST_OFFSET(Local_005810ac_ea_4, word_20, 0x20);

inline constexpr guest::Function<0x00131280, u32(u32, u32, u32, u32)> allocate_from_heap_00131280;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x0052f144, u32(u32)> WrappingCursor__advance;
inline constexpr guest::Function<0x0057bc20, u32(u32, u32, u32)> store_two_words_at_4_57bc20;
inline constexpr guest::Function<0x005814d0, u32(u32, u32, u32, u32)> call_005814d0;
inline constexpr guest::Function<0x005817f0, u32(u32)> call_005817f0;
inline constexpr guest::Function<0x006efd40, u32(u32, u32)> call_006efd40;
inline constexpr guest::Function<0x007481ec, u32(u32, u32)> key_records_differ;
inline constexpr guest::Function<0x0074824c, u32(u32, u32)> make_end_grid_rect_iterator;
inline constexpr guest::Function<0x00748284, u32(u32, u32, u32, u32)> construct_grid_rect_iterator;
inline constexpr guest::Function<0x007482bc, u32(u32, u32, u32, u32)> GridRect__width;

struct __attribute__((packed)) Frame_005810ac {
    u8 unknown_0[0x18];  // (not read or written by name)
    u32 word_18;
    u8 unknown_1c[0xc];  // (not read or written by name)
    u32 word_28;
    u8 unknown_2c[0x2c];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005810ac, word_18, 0x18);
GUEST_OFFSET(Frame_005810ac, word_28, 0x28);
GUEST_SIZE(Frame_005810ac, 0x58);

u32 f_005810ac(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005810ac> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r14 = guest::cpu()->r[14];
    u32 r0_17 = 0;
    u32 r0_27 = 0;
    gptr<Local_005810ac_ea_1> ea_1 = gptr<Local_005810ac_ea_1>(frame.at(0x24).addr());  // (from the original)
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
    u32 r1_1 = frame->word_28;
    u32 r5_1 = *frame.at<u32>(0x58);  // (from the original)
    u32 r0_1 = call_005814d0(r0, r1_1, r2, r3);
    if (r0_1 != 0) {
        r9 = r2 * r3;
        make_end_grid_rect_iterator(frame.at(0).addr(), r4);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        u32 r0_3 = r5_1 + 1u;
        r7 = 0u;
        if (r0_3 >= 0u && r0_3 != 0) {
            r11 = r0_3;
            r10 = r9 << 0xa;  // (from the original)
            do {
                u32 block = allocate_from_heap_00131280(r10 + 8u, frame->word_28, 4u, r3);
                u32 r0_6 = block + 8u;
                gptr<Local_005810ac_ea_2> ea_2 = gptr<Local_005810ac_ea_2>(r0_6 - 8u);
                ea_2->word_0 = 0x400;  // (from the original)
                ea_2->word_4 = r9;
                u32 r5_2 = r4 + 0x30u;  // (from the original)
                if (r7 < 2u) {
                    r5_2 += (r7 << 2);
                }
                u32 r0_7 = for_each_element(r0_6, 0x6efd9cu, 0x400u, r9);  // (from the original)
                *gptr<u32>(r5_2) = r0_7;
                u32 r0_8 = r4 + 0x30u;  // (from the original)
                if (r7 < 2u) {
                    r0_8 += (r7 << 2);
                }
                if (*gptr<u32>(r0_8) == 0) {
                    goto L_5812d4;
                }
                construct_grid_rect_iterator(frame.at(0x10).addr(), r4, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                u32 r0_11 = key_records_differ(frame.at(0x10).addr(), frame.at(0).addr());  // (from the original)
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_11 != 0) {
                    r8 = r4 + 0x30u + (r7 << 2);  // (from the original)
                    do {
                        u32 r5_3 = frame->word_18;
                        u32 r1_6 = frame.at(0x18).addr();  // (from the original)
                        u32 r6_1 = *gptr<u32>(r1_6 + 4u);
                        u32 r0_12 = GridRect__width(r4, r1_6, r2, r3);
                        u32 r1_7 = r6_1 * r0_12 + r5_3;
                        u32 r0_13 = r4 + 0x30u;  // (from the original)
                        if (r7 < 2u) {
                            r0_13 = r8;
                        }
                        call_006efd40(*gptr<u32>(r0_13) + (r1_7 << 0xa), r1_7);  // (from the original)
                        WrappingCursor__advance(frame.at(0x10).addr());  // (from the original)
                        r0_17 = key_records_differ(frame.at(0x10).addr(), frame.at(0).addr());  // (from the original)
                        r2 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
                        guest::preempt();
                    } while (r0_17 != 0);
                }
                r7 += 1u;
                guest::preempt();
            } while (r7 < r11);
        }
        construct_grid_rect_iterator(frame.at(0x10).addr(), r4, r2, r3);  // (from the original)
        u32 r0_20 = key_records_differ(frame.at(0x10).addr(), frame.at(0).addr());  // (from the original)
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_20 != 0) {
            do {
                u32 r8_1 = 0u;
                u32 r7_1 = r8_1;
                u32 r5_4 = frame->word_18;
                u32 r1_12 = frame.at(0x18).addr();  // (from the original)
                u32 r6_2 = *gptr<u32>(r1_12 + 4u);
                u32 r0_21 = GridRect__width(r4, r1_12, r2, r3);
                u32 r1_13 = r6_2 * r0_21 + r5_4;
                u32 r0_22 = *gptr<u32>(r4 + 0x30u);  // (from the original)
                if (r0_22 != 0) {
                    r8_1 = r0_22 + (r1_13 << 0xa);  // (from the original)
                }
                u32 r0_23 = *gptr<u32>(r4 + 0x34u);  // (from the original)
                if (r0_23 != 0) {
                    r7_1 = r0_23 + (r1_13 << 0xa);  // (from the original)
                }
                store_two_words_at_4_57bc20(*gptr<u32>(r4 + 0x20u) + (r1_13 + (r1_13 << 1) << 2), r8_1, r7_1);  // (from the original)
                WrappingCursor__advance(frame.at(0x10).addr());  // (from the original)
                r0_27 = key_records_differ(frame.at(0x10).addr(), frame.at(0).addr());  // (from the original)
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                guest::preempt();
            } while (r0_27 != 0);
        }
        gptr<Local_005810ac_ea_3> ea_3 = gptr<Local_005810ac_ea_3>(frame.at(0x34).addr());  // (from the original)
        u32 r4_1 = ea_3->word_0;
        u32 r5_5 = ea_3->word_4;
        u32 r6_3 = ea_3->word_8;
        u32 r7_2 = ea_3->word_c;
        u32 r8_2 = ea_3->word_10;
        u32 r9_1 = ea_3->word_14;
        u32 r10_1 = ea_3->word_18;
        u32 r11_1 = ea_3->word_1c;
        guest::cpu()->r[4] = r4_1;
        guest::cpu()->r[5] = r5_5;
        guest::cpu()->r[6] = r6_3;
        guest::cpu()->r[7] = r7_2;
        guest::cpu()->r[8] = r8_2;
        guest::cpu()->r[9] = r9_1;
        guest::cpu()->r[10] = r10_1;
        guest::cpu()->r[11] = r11_1;
        return 1u;
    }
    call_005817f0(r4);
    goto L_5812dc;
L_5812d4:;
L_5812dc:;
    gptr<Local_005810ac_ea_4> ea_4 = gptr<Local_005810ac_ea_4>(frame.at(0x34).addr());  // (from the original)
    u32 r4_2 = ea_4->word_0;
    u32 r5_6 = ea_4->word_4;
    u32 r6_4 = ea_4->word_8;
    u32 r7_3 = ea_4->word_c;
    u32 r8_3 = ea_4->word_10;
    u32 r9_2 = ea_4->word_14;
    u32 r10_2 = ea_4->word_18;
    u32 r11_2 = ea_4->word_1c;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_6;
    guest::cpu()->r[6] = r6_4;
    guest::cpu()->r[7] = r7_3;
    guest::cpu()->r[8] = r8_3;
    guest::cpu()->r[9] = r9_2;
    guest::cpu()->r[10] = r10_2;
    guest::cpu()->r[11] = r11_2;
    return 0u;
}

}  // namespace d_005810ac
GUEST_EXPORT(0x005810ac, d_005810ac::f_005810ac);

// f_005812ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005812ec {

struct __attribute__((packed)) Object_005812ec_0 {
    u8 unknown_0[0x28];  // (not used here)
    u32 word_28;
    u32 word_2c;
};
GUEST_OFFSET(Object_005812ec_0, word_28, 0x28);
GUEST_OFFSET(Object_005812ec_0, word_2c, 0x2c);

inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32)> allocate_from_heap_002fd108;
inline constexpr guest::Function<0x005810ac, u32(u32, u32, u32, u32)> call_005810ac;
inline constexpr guest::Function<0x005817f0, u32(u32)> call_005817f0;
inline constexpr guest::Function<0x006138a4, u32(u32)> call_006138a4;

struct __attribute__((packed)) Frame_005812ec {
    u32 word_0;
};
GUEST_OFFSET(Frame_005812ec, word_0, 0x0);
GUEST_SIZE(Frame_005812ec, 0x4);

u32 f_005812ec(gptr<Object_005812ec_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005812ec> frame;  // the original's stack frame
    frame->word_0 = r3;
    frame->word_0 = *frame.at<u32>(0x10);  // (from the original)
    u32 r0_1 = call_005810ac(arg0.addr(), r1, r2, r3);
    if (r0_1 != 0) {
        u32 block = allocate_from_heap_002fd108(0x4000u, r1, 0x80u);  // (from the original)
        arg0->word_2c = block;
        if (block != 0) {
            call_006138a4(block);
            arg0->word_28 = arg0->word_2c;
            return 1u;
        }
    }
    call_005817f0(arg0.addr());
    return 0u;
}

}  // namespace d_005812ec
GUEST_EXPORT_FRAMED(0x005812ec, d_005812ec::f_005812ec, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00581354: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00581354 {

struct __attribute__((packed)) Object_00581354_0 {
    u8 unknown_0[0x20];  // (not used here)
    u32 word_20;
};
GUEST_OFFSET(Object_00581354_0, word_20, 0x20);

struct __attribute__((packed)) Local_00581354_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00581354_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00581354_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_00581354_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00581354_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_00581354_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_00581354_r0_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00581354_r0_3, word_0, 0x0);
GUEST_OFFSET(Local_00581354_r0_3, word_4, 0x4);

inline constexpr guest::Function<0x0057bce0, u32(u32, u32, u32, u32)> GridCellSmall__place_item;
inline constexpr guest::Function<0x006a69ec, u32(u32, u32, u32, u32)> cell_and_tile_of_position;
inline constexpr guest::Function<0x007482bc, u32(u32, u32)> GridRect__width;
inline constexpr guest::Function<0x007482d0, u32(u32, u32, u32)> GridRect__contains;

struct __attribute__((packed)) Frame_00581354 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u8 unknown_18[0xc];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00581354, word_0, 0x0);
GUEST_OFFSET(Frame_00581354, word_4, 0x4);
GUEST_OFFSET(Frame_00581354, word_8, 0x8);
GUEST_OFFSET(Frame_00581354, word_c, 0xc);
GUEST_OFFSET(Frame_00581354, word_10, 0x10);
GUEST_OFFSET(Frame_00581354, word_14, 0x14);
GUEST_SIZE(Frame_00581354, 0x24);

void f_00581354(gptr<Object_00581354_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00581354> frame;  // the original's stack frame
    frame->word_0 = r2;
    frame->word_4 = 0;
    frame->word_8 = 0;
    frame->word_c = 0;
    frame->word_10 = 0;
    cell_and_tile_of_position(frame.at(4).addr(), frame.at(8).addr(), frame.at(0xc).addr(), frame.at(0x10).addr());  // (from the original)
    gptr<Local_00581354_ea_1> ea_1 = gptr<Local_00581354_ea_1>(frame.at(0xc).addr());  // (from the original)
    u32 r0_2 = ea_1->word_0;
    u32 r11_1 = ea_1->word_4;
    gptr<Local_00581354_ea_2> ea_2 = gptr<Local_00581354_ea_2>(frame.at(4).addr());
    u32 r5_1 = ea_2->word_0;
    u32 r6_1 = ea_2->word_4;
    frame->word_14 = r0_2;
    gptr<Local_00581354_r0_3> r0_3 = gptr<Local_00581354_r0_3>(frame.at(0x18).addr());  // (from the original)
    r0_3->word_0 = r5_1;
    r0_3->word_4 = r6_1;
    u32 r0_4 = GridRect__contains(arg0.addr(), r0_3.addr(), r6_1);
    u32 r1_2 = guest::cpu()->r[1];
    if (r0_4 != 0 && arg0->word_20 != 0) {
        u32 r0_5 = GridRect__width(arg0.addr(), r1_2);
        r1_2 = arg0->word_20;
        u32 r0_6 = r1_2 + (r6_1 * r0_5 + r5_1) * 0xcu;  // (from the original)
        if (r0_6 != 0) {
            frame->word_0 = r3;
            GridCellSmall__place_item(r0_6, r1, frame->word_14, r11_1);
            return;
        }
    }
    guest::cpu()->r[1] = r1_2;
}

}  // namespace d_00581354
GUEST_EXPORT_FRAMED(0x00581354, d_00581354::f_00581354, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_005814d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005814d0 {

struct __attribute__((packed)) Local_005814d0_ea_3 {
    u32 word_0;
    u8 unknown_4[0xc];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Local_005814d0_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_005814d0_ea_3, word_10, 0x10);

struct __attribute__((packed)) Local_005814d0_r0_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005814d0_r0_1, word_0, 0x0);
GUEST_OFFSET(Local_005814d0_r0_1, word_4, 0x4);

struct __attribute__((packed)) Local_005814d0_r0_26 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005814d0_r0_26, word_0, 0x0);
GUEST_OFFSET(Local_005814d0_r0_26, word_4, 0x4);

struct __attribute__((packed)) Local_005814d0_r0_6 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005814d0_r0_6, word_0, 0x0);
GUEST_OFFSET(Local_005814d0_r0_6, word_4, 0x4);

struct __attribute__((packed)) Local_005814d0_r8_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005814d0_r8_1, word_0, 0x0);
GUEST_OFFSET(Local_005814d0_r8_1, word_4, 0x4);

inline constexpr guest::Function<0x00131280, u32(u32, u32, u32, u32)> allocate_from_heap_00131280;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x0052f074, u32(u32, u32, u32, u32)> zero_word_pair;
inline constexpr guest::Function<0x0052f144, u32(u32)> WrappingCursor__advance;
inline constexpr guest::Function<0x0052f200, u32(u32, u32, u32)> construct_word_quad_from_pairs;
inline constexpr guest::Function<0x0052f284, u32(u32, u32)> copy_word_quad_2;
inline constexpr guest::Function<0x0057bd78, u32(u32, u32, u32)> call_0057bd78;
inline constexpr guest::Function<0x005817f0, u32(u32)> call_005817f0;
inline constexpr guest::Function<0x006a97a0, u32(u32, u32, u32)> call_006a97a0;
inline constexpr guest::Function<0x007481ec, u32(u32, u32)> key_records_differ;
inline constexpr guest::Function<0x0074824c, u32(u32, u32)> make_end_grid_rect_iterator;
inline constexpr guest::Function<0x00748284, u32(u32, u32)> construct_grid_rect_iterator;
inline constexpr guest::Function<0x007482bc, u32(u32, u32, u32, u32)> GridRect__width;

struct __attribute__((packed)) Frame_005814d0 {
    u8 unknown_0[0x18];  // (not read or written by name)
    u32 word_18;
    u32 word_1c;
    u8 unknown_20[0x28];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005814d0, word_18, 0x18);
GUEST_OFFSET(Frame_005814d0, word_1c, 0x1c);
GUEST_SIZE(Frame_005814d0, 0x48);

u32 f_005814d0(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005814d0> frame;  // the original's stack frame
    u32 r0_24 = 0;
    u32 r0_37 = 0;
    u32 r4 = r0;
    u32 r10 = r1;
    u32 r2_1 = r3 - 1u;
    u32 r1_1 = r2 - 1u;
    gptr<Local_005814d0_r0_1> r0_1 = gptr<Local_005814d0_r0_1>(frame.at(0x40).addr());  // (from the original)
    r0_1->word_0 = r1_1;
    r0_1->word_4 = r2_1;
    u32 r0_2 = zero_word_pair(r0_1.addr(), r1_1, r2_1, r3);
    u32 r0_4 = construct_word_quad_from_pairs(frame.at(0x30).addr(), r0_2, r0_1.addr());  // (from the original)
    copy_word_quad_2(r4, r0_4);
    u32 r9 = 0u;
    u32 r0_5 = ~0u;
    u32 r2_3 = r0_5 + (r3 << 4);
    u32 r1_2 = r0_5 + (r2 << 4);
    gptr<Local_005814d0_r0_6> r0_6 = gptr<Local_005814d0_r0_6>(frame.at(0x40).addr());  // (from the original)
    r0_6->word_0 = r1_2;
    r0_6->word_4 = r2_3;
    u32 r0_7 = zero_word_pair(r0_6.addr(), r1_2, r2_3, guest::cpu()->r[3]);
    u32 r0_9 = construct_word_quad_from_pairs(frame.at(0x30).addr(), r0_7, r0_6.addr());  // (from the original)
    copy_word_quad_2(r4 + 0x10u, r0_9);  // (from the original)
    u32 r7 = r2 * r3;
    u32 block = allocate_from_heap_00131280((r7 + (r7 << 1) << 2) + 8u, r10, 4u, guest::cpu()->r[3]);
    u32 r0_13 = block + 8u;
    gptr<Local_005814d0_r8_1> r8_1 = gptr<Local_005814d0_r8_1>(r0_13 - 8u);
    r8_1->word_0 = 0xc;  // (from the original)
    r8_1->word_4 = r7;
    u32 r0_14 = for_each_element(r0_13, 0x57bdb0u, 0xcu, r7);  // (from the original)
    u32 r8 = r0_14;
    if (r0_14 != 0) {
        GridRect__width(r4, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        make_end_grid_rect_iterator(frame.at(0).addr(), r4);
        construct_grid_rect_iterator(frame.at(0x10).addr(), r4);  // (from the original)
        u32 r0_18 = key_records_differ(frame.at(0x10).addr(), frame.at(0).addr());  // (from the original)
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_18 != 0) {
            do {
                u32 r5_1 = frame->word_18;
                u32 r1_5 = frame.at(0x18).addr();  // (from the original)
                u32 r6_1 = *gptr<u32>(r1_5 + 4u);
                u32 r0_19 = GridRect__width(r4, r1_5, r2, r3);
                u32 r5_2 = r6_1 * r0_19 + r5_1;
                u32 r0_21 = call_0057bd78(r8 + (r5_2 + (r5_2 << 1) << 2), frame->word_18, frame->word_1c);
                if (r0_21 == 0) {
                    goto L_58177c;
                }
                WrappingCursor__advance(frame.at(0x10).addr());  // (from the original)
                r0_24 = key_records_differ(frame.at(0x10).addr(), frame.at(0).addr());  // (from the original)
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                guest::preempt();
            } while (r0_24 != 0);
        }
        gptr<Local_005814d0_r0_26> block_2 = gptr<Local_005814d0_r0_26>(allocate_from_heap_00131280(r7 * 0xa1cu + 8u, r10, 4u, r3));  // (from the original)
        block_2->word_0 = 0xa1c;  // (from the original)
        block_2->word_4 = r7;
        u32 r0_28 = for_each_element(block_2.addr() + 8, 0x6a9834u, 0xa1cu, r7);  // (from the original)
        r7 = r0_28;
        if (r0_28 == 0) {
            return 0u;
        }
        construct_grid_rect_iterator(frame.at(0x10).addr(), r4);  // (from the original)
        u32 r0_31 = key_records_differ(frame.at(0x10).addr(), frame.at(0).addr());  // (from the original)
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_31 != 0) {
            do {
                u32 r5_3 = frame->word_18;
                u32 r1_11 = frame.at(0x18).addr();  // (from the original)
                u32 r6_3 = *gptr<u32>(r1_11 + 4u);
                u32 r0_32 = GridRect__width(r4, r1_11, r2, r3);
                u32 r6_4 = frame->word_1c;
                u32 r0_34 = call_006a97a0(r7 + ((r6_3 * r0_32 + r5_3) * 0x287u << 2), frame->word_18, r6_4);  // (from the original)
                if (r0_34 == 0) {
                    goto L_58177c;
                }
                WrappingCursor__advance(frame.at(0x10).addr());  // (from the original)
                r0_37 = key_records_differ(frame.at(0x10).addr(), frame.at(0).addr());  // (from the original)
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                guest::preempt();
            } while (r0_37 != 0);
        }
        *gptr<u32>(r4 + 0x30u) = r9;  // (from the original)
        u32 ea_2 = r4 + 0x20u;  // (from the original)
        *gptr<u32>(ea_2) = r8;
        gptr<Local_005814d0_ea_3> ea_3 = gptr<Local_005814d0_ea_3>(ea_2 + 4u);
        ea_3->word_0 = r7;
        ea_3->word_10 = r9;
        r0_14 = 1u;
    }
    return r0_14;
L_58177c:;
    call_005817f0(r4);
    return 0u;
}

}  // namespace d_005814d0
GUEST_EXPORT_FRAMED(0x005814d0, d_005814d0::f_005814d0, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_005817f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005817f0 {

struct __attribute__((packed)) Object_005817f0_0 {
    u8 unknown_0[0x20];  // (not used here)
    u32 word_20;
};
GUEST_OFFSET(Object_005817f0_0, word_20, 0x20);

inline constexpr guest::Function<0x002ffb64, u32(u32, u32, u32)> free_memory;
inline constexpr guest::Function<0x00307889, u32(u32, u32, u32)> release_shared_string;
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32)> WrappingCursor__advance;
inline constexpr guest::Function<0x0057bd94, u32(u32, u32)> call_0057bd94;
inline constexpr guest::Function<0x007481ec, u32(u32, u32)> key_records_differ;
inline constexpr guest::Function<0x0074824c, u32(u32, u32)> make_end_grid_rect_iterator;
inline constexpr guest::Function<0x00748284, u32(u32, u32, u32)> construct_grid_rect_iterator;
inline constexpr guest::Function<0x007482bc, u32(u32, u32, u32, u32)> GridRect__width;

struct __attribute__((packed)) Frame_005817f0 {
    u8 unknown_0[0x18];  // (not read or written by name)
    u32 word_18;
    u8 unknown_1c[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005817f0, word_18, 0x18);
GUEST_SIZE(Frame_005817f0, 0x24);

void f_005817f0(gptr<Object_005817f0_0> arg0, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_005817f0> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r0_10 = 0;
    u32 r0_17 = 0;
    u32 r4 = r0;
    GridRect__width(r0, r1, r2, guest::cpu()->r[3]);
    make_end_grid_rect_iterator(frame.at(0).addr(), r4);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    u32 r7 = 0u;
    if (arg0->word_20 != 0) {
        construct_grid_rect_iterator(frame.at(0x10).addr(), r4, r2);  // (from the original)
        u32 r0_4 = key_records_differ(frame.at(0x10).addr(), frame.at(0).addr());  // (from the original)
        r2 = guest::cpu()->r[2];
        if (r0_4 != 0) {
            do {
                u32 r5_1 = frame->word_18;
                u32 r1_2 = frame.at(0x18).addr();  // (from the original)
                u32 r6_1 = *gptr<u32>(r1_2 + 4u);
                u32 r0_5 = GridRect__width(r4, r1_2, r2, guest::cpu()->r[3]);
                u32 r0_6 = r6_1 * r0_5 + r5_1;
                u32 r1_3 = *gptr<u32>(r4 + 0x20u);  // (from the original)
                call_0057bd94(r1_3 + (r0_6 + (r0_6 << 1) << 2), r1_3);
                WrappingCursor__advance(frame.at(0x10).addr(), guest::cpu()->r[1], guest::cpu()->r[2]);  // (from the original)
                r0_10 = key_records_differ(frame.at(0x10).addr(), frame.at(0).addr());  // (from the original)
                r2 = guest::cpu()->r[2];
                guest::preempt();
            } while (r0_10 != 0);
        }
        release_shared_string(*gptr<u32>(r4 + 0x20u), 0x57bdc0u, r2);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        *gptr<u32>(r4 + 0x20u) = r7;  // (from the original)
    }
    if (*gptr<u32>(r4 + 0x24u) != 0) {  // (from the original)
        construct_grid_rect_iterator(frame.at(0x10).addr(), r4, r2);  // (from the original)
        u32 r0_14 = key_records_differ(frame.at(0x10).addr(), frame.at(0).addr());  // (from the original)
        r2 = guest::cpu()->r[2];
        if (r0_14 != 0) {
            do {
                u32 r5_2 = frame->word_18;
                u32 r1_7 = frame.at(0x18).addr();  // (from the original)
                u32 r6_2 = *gptr<u32>(r1_7 + 4u);
                GridRect__width(r4, r1_7, r2, guest::cpu()->r[3]);
                WrappingCursor__advance(frame.at(0x10).addr(), 0x287u, *gptr<u32>(r4 + 0x24u));  // (from the original)
                r0_17 = key_records_differ(frame.at(0x10).addr(), frame.at(0).addr());  // (from the original)
                r2 = guest::cpu()->r[2];
                guest::preempt();
            } while (r0_17 != 0);
        }
        release_shared_string(*gptr<u32>(r4 + 0x24u), 0x6a987cu, r2);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        *gptr<u32>(r4 + 0x24u) = r7;  // (from the original)
    }
    u32 r5 = 0u;
    do {
        u32 r0_19 = r4 + 0x30u;  // (from the original)
        if (r5 < 2u) {
            r0_19 += (r5 << 2);
        }
        if (*gptr<u32>(r0_19) != 0) {
            u32 r0_20 = r4 + 0x30u;  // (from the original)
            if (r5 < 2u) {
                r0_20 += (r5 << 2);
            }
            release_shared_string(*gptr<u32>(r0_20), 0x138b98u, r2);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            u32 r0_22 = r4 + 0x30u;  // (from the original)
            if (r5 < 2u) {
                r0_22 += (r5 << 2);
            }
            *gptr<u32>(r0_22) = r7;
        }
        r5 += 1u;
        guest::preempt();
    } while (s32(r5) < 2);
    u32 r0_23 = *gptr<u32>(r4 + 0x2cu);  // (from the original)
    if (r0_23 != 0) {
        free_memory(r0_23, r1, r2);
        r1 = guest::cpu()->r[1];
        *gptr<u32>(r4 + 0x2cu) = r7;  // (from the original)
    }
    *gptr<u32>(r4 + 0x28u) = r7;  // (from the original)
    guest::cpu()->r[1] = r1;
}

}  // namespace d_005817f0
GUEST_EXPORT_FRAMED(0x005817f0, d_005817f0::f_005817f0, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00581a18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00581a18 {

inline constexpr guest::Function<0x0052f280, u32(u32, u32)> do_nothing_0052f280;

u32 f_00581a18(u32 r0) {
    return do_nothing_0052f280(r0, guest::cpu()->r[1]);
}

}  // namespace d_00581a18
GUEST_EXPORT(0x00581a18, d_00581a18::f_00581a18);

// f_005822c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005822c4 {

struct __attribute__((packed)) Object_005822c4_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_005822c4_0, word_8, 0x8);

struct __attribute__((packed)) Local_005822c4_r0_3 {
    u32 word_0;
    u8 unknown_4[0x10];  // (not used here)
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u8 byte_24;
};
GUEST_OFFSET(Local_005822c4_r0_3, word_0, 0x0);
GUEST_OFFSET(Local_005822c4_r0_3, word_14, 0x14);
GUEST_OFFSET(Local_005822c4_r0_3, word_18, 0x18);
GUEST_OFFSET(Local_005822c4_r0_3, word_1c, 0x1c);
GUEST_OFFSET(Local_005822c4_r0_3, word_20, 0x20);
GUEST_OFFSET(Local_005822c4_r0_3, byte_24, 0x24);

struct __attribute__((packed)) Local_005822c4_r0_4 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u8 byte_c;
    u8 byte_d;
    u8 byte_e;
};
GUEST_OFFSET(Local_005822c4_r0_4, word_4, 0x4);
GUEST_OFFSET(Local_005822c4_r0_4, word_8, 0x8);
GUEST_OFFSET(Local_005822c4_r0_4, byte_c, 0xc);
GUEST_OFFSET(Local_005822c4_r0_4, byte_d, 0xd);
GUEST_OFFSET(Local_005822c4_r0_4, byte_e, 0xe);

struct __attribute__((packed)) Local_005822c4_r5_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u8 byte_c;
    u8 byte_d;
    u8 byte_e;
};
GUEST_OFFSET(Local_005822c4_r5_1, word_4, 0x4);
GUEST_OFFSET(Local_005822c4_r5_1, word_8, 0x8);
GUEST_OFFSET(Local_005822c4_r5_1, byte_c, 0xc);
GUEST_OFFSET(Local_005822c4_r5_1, byte_d, 0xd);
GUEST_OFFSET(Local_005822c4_r5_1, byte_e, 0xe);

inline constexpr u32 vtable_ExchangeBank_66384u__BankVramConfig_66000u__1u__0u__0u__false___ExchangeBankKeywordMyDesignFgNameEx__SvFgName__Name_32766___false_ = 0x008ed5e4u;
inline constexpr u32 vtable_ExchangeResBank_66000u__BankVramConfig_66000u__1u__0u__0u__false___ExchangeBankKeywordMyDesignFgNameEx__SvFgName__Name_32766___item__ResLoader__1u__false_ = 0x008f0a58u;
inline constexpr u32 vtable_Bank_66384u__2u__false__BankVramConfig_66000u__1u__0u__0u__false__ = 0x008f7434u;
inline constexpr u32 vtable_bg__ExchangeBank_BankVramConfig_66000u__1u__0u__0u__false___66000u_ = 0x008fab0cu;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> copy_item_002fc8e8;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> construct_item;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x004f147c, u32(u32, u32)> construct_model;
inline constexpr guest::Function<0x005673c8, u32(u32, u32, u32, u32)> construct_heap_allocator;
inline constexpr guest::Function<0x007e91bc, u32(u32)> call_007e91bc;

struct __attribute__((packed)) Frame_005822c4 {
    u32 word_0;
};
GUEST_OFFSET(Frame_005822c4, word_0, 0x0);
GUEST_SIZE(Frame_005822c4, 0x4);

u32 false____Bank_005822c4(gptr<Object_005822c4_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005822c4> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    frame->word_0 = r3;
    construct_heap_allocator(r0, r1, r2, r3);
    u32 r4 = r0 + 8u;
    arg0->word_8 = vtable_Bank_66384u__2u__false__BankVramConfig_66000u__1u__0u__0u__false__;
    u32 r0_2 = for_each_element(r4 + 4u, 0x5673c8u, 8u, 2u);  // (from the original)
    gptr<Local_005822c4_r0_3> r0_3 = gptr<Local_005822c4_r0_3>(r0_2 - 4u);
    u32 r8 = 0u;
    r0_3->word_14 = r8;
    r0_3->word_1c = r8;
    r0_3->word_18 = r8;
    u32 r9 = 0x7ffeu;  // (from the original)
    r0_3->word_20 = r8;
    r0_3->byte_24 = u8(r8);
    r0_3->word_0 = vtable_ExchangeBank_66384u__BankVramConfig_66000u__1u__0u__0u__false___ExchangeBankKeywordMyDesignFgNameEx__SvFgName__Name_32766___false_;
    gptr<Local_005822c4_r0_4> r0_4 = gptr<Local_005822c4_r0_4>(r0_3.addr() + 0x28u);  // (from the original)
    construct_item(r0_4.addr(), r9, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_4->word_4 = r8;
    r0_4->word_8 = r8;
    r0_4->byte_c = 0xc8;  // (from the original)
    r0_4->byte_d = 0xc8;  // (from the original)
    r0_4->byte_e = u8(r8);
    u32 r0_6 = for_each_element(r0_4.addr() + 0x14u, 0x7e9240u, 0x10u, 2u);  // (from the original)
    u32 r7 = r0_6 - 0x3cu;  // (from the original)
    *gptr<u8>(r0_6 + 0x20u) = u8(r8);  // (from the original)
    call_007e91bc(r7 + 0x28u);  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u8>(r7 + 0x3au) = 1;  // (from the original)
    *gptr<u8>(r7 + 0x38u) = u8(r8);  // (from the original)
    u32 r6 = 0u;
    *gptr<u8>(r7 + 0x39u) = u8(r8);  // (from the original)
    do {
        gptr<Local_005822c4_r5_1> r5_1 = gptr<Local_005822c4_r5_1>(r7 + (r6 << 4) + 0x3cu);  // (from the original)
        u32 r0_8 = frame.at(0).addr();
        construct_item(r0_8, r9, r2, r3);
        copy_item_002fc8e8(r5_1.addr(), r0_8);
        r3 = guest::cpu()->r[3];
        r4 = ((0xc8u | r4 & ~0xffu) & ~0xff00u | 0xc8u << 8 & 0xff00u) & ~0xff0000u | r8 << 0x10 & 0xff0000u;  // (from the original)
        r5_1->word_4 = r8;
        r5_1->word_8 = r8;
        r5_1->byte_c = u8(r4);
        r6 += 1u;
        r2 = r4 >> 0x10u & 0xffu;  // (from the original)
        r5_1->byte_d = u8(r4 >> 8u & 0xffu);  // (from the original)
        r5_1->byte_e = u8(r2);
        guest::preempt();
    } while (r6 < 2u);
    *gptr<u8>(r7 + 0x5cu) = u8(r8);  // (from the original)
    *gptr<u32>(r7) = vtable_ExchangeResBank_66000u__BankVramConfig_66000u__1u__0u__0u__false___ExchangeBankKeywordMyDesignFgNameEx__SvFgName__Name_32766___item__ResLoader__1u__false_;
    u32 r0_10 = for_each_element(r7 + 0x60u, 0x5371e0u, 0x114u, 2u);  // (from the original)
    *gptr<u32>(r0_10 - 0x60u) = vtable_bg__ExchangeBank_BankVramConfig_66000u__1u__0u__0u__false___66000u_;  // (from the original)
    u32 r0_11 = r0_10 + 0x22cu;  // (from the original)
    construct_model(r0_11, vtable_bg__ExchangeBank_BankVramConfig_66000u__1u__0u__0u__false___66000u_);
    u32 r0_12 = r0_11 - 0x294u;  // (from the original)
    *gptr<u8>(r0_12 + 0x2acu) = u8(r8);  // (from the original)
    return r0_12;
}

}  // namespace d_005822c4
GUEST_EXPORT_FRAMED(0x005822c4, d_005822c4::false____Bank_005822c4, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_00582464: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00582464 {

inline constexpr u32 global_00ad4df4_address = 0x00ad4df4u;
inline constexpr u32 global_00ad4e34_address = 0x00ad4e34u;
inline constexpr u32 global_00ad4fb4_address = 0x00ad4fb4u;
inline constexpr u32 global_00ad4ff4_address = 0x00ad4ff4u;
inline constexpr u32 global_00ad5034_address = 0x00ad5034u;
inline constexpr u32 global_00ad51f4_address = 0x00ad51f4u;
inline constexpr guest::Function<0x005826e8, u32(u32, u32, u32, u32)> call_005826e8;
inline constexpr guest::Function<0x005828cc, u32(u32, u32, u32, u32)> call_005828cc;

u32 f_00582464(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r0 = 0;
    u32 cf_3 = 0;
    u32 r4 = 0u;
    u32 r5 = 0xffffu;  // (from the original)
    do {
        if (r4 < 0xau) {  // (from the original)
            r0 = call_005826e8(r4 + 0x1bu & 0xffu, r1, r2, r3);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            u32 zf_1 = r0 == 0;
            u32 cf_1 = r0 >= 0u;
            if (!zf_1) {
                r3 = r0 + 0x40u;  // (from the original)
                zf_1 = r3 == r0;
                cf_1 = r3 >= r0;
            }
            if (cf_1 && !zf_1) {
                do {
                    r1 = r0;
                    r2 = r0 + 0x20u;  // (from the original)
                    if (r2 > r1) {
                        do {
                            *gptr<u16>(r1) = u16(r5);
                            r1 += 2u;
                            guest::preempt();
                        } while (r2 > r1);
                    }
                    r0 += 0x20u;  // (from the original)
                    guest::preempt();
                } while (r0 < r3);
            }
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0xau);  // (from the original)
    r4 = 0u;
    do {
        r0 = call_005826e8(r4 + 0xa1u & 0xffu, r1, r2, r3);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        u32 zf_2 = r0 == 0;
        u32 cf_2 = r0 >= 0u;
        if (!zf_2) {
            r3 = r0 + 0x40u;  // (from the original)
            zf_2 = r3 == r0;
            cf_2 = r3 >= r0;
        }
        if (cf_2 && !zf_2) {
            do {
                r2 = r0 + 0x20u;  // (from the original)
                r1 = r0;
                if (r2 > r0) {
                    do {
                        *gptr<u16>(r1) = u16(r5);
                        r1 += 2u;
                        guest::preempt();
                    } while (r2 > r1);
                }
                r0 += 0x20u;  // (from the original)
                guest::preempt();
            } while (r0 < r3);
        }
        do {
            r4 += 1u;
            cf_3 = r4 >= 2u;
            if (cf_3) {
                r1 = global_00ad4df4_address;
                r3 = r1 + 0x40u;  // (from the original)
                if (r1 < r3) {
                    do {
                        r2 = r1 + 0x20u;  // (from the original)
                        r0 = r1;
                        if (r1 < r2) {
                            do {
                                *gptr<u16>(r0) = u16(r5);
                                r0 += 2u;
                                guest::preempt();
                            } while (r0 < r2);
                        }
                        r1 += 0x20u;  // (from the original)
                        guest::preempt();
                    } while (r1 < r3);
                }
                u32 r12 = global_00ad4e34_address;
                r3 = 0u;
                do {
                    r1 = r12 + (r3 << 6);
                    r4 = r1 + 0x40u;  // (from the original)
                    if (r1 < r4) {
                        do {
                            r2 = r1 + 0x20u;  // (from the original)
                            r0 = r1;
                            if (r1 < r2) {
                                do {
                                    *gptr<u16>(r0) = u16(r5);
                                    r0 += 2u;
                                    guest::preempt();
                                } while (r0 < r2);
                            }
                            r1 += 0x20u;  // (from the original)
                            guest::preempt();
                        } while (r1 < r4);
                    }
                    do {
                        r3 += 1u;
                        cf_3 = r3 >= 6u;
                        if (cf_3) {
                            r1 = global_00ad4fb4_address;
                            r3 = r1 + 0x40u;  // (from the original)
                            if (r1 < r3) {
                                do {
                                    r2 = r1 + 0x20u;  // (from the original)
                                    r0 = r1;
                                    if (r1 < r2) {
                                        do {
                                            *gptr<u16>(r0) = u16(r5);
                                            r0 += 2u;
                                            guest::preempt();
                                        } while (r0 < r2);
                                    }
                                    r1 += 0x20u;  // (from the original)
                                    guest::preempt();
                                } while (r1 < r3);
                            }
                            r1 = global_00ad4ff4_address;
                            r3 = r1 + 0x40u;  // (from the original)
                            if (r1 < r3) {
                                do {
                                    r2 = r1 + 0x20u;  // (from the original)
                                    r0 = r1;
                                    if (r1 < r2) {
                                        do {
                                            *gptr<u16>(r0) = u16(r5);
                                            r0 += 2u;
                                            guest::preempt();
                                        } while (r0 < r2);
                                    }
                                    r1 += 0x20u;  // (from the original)
                                    guest::preempt();
                                } while (r1 < r3);
                            }
                            r12 = global_00ad51f4_address;
                            r3 = 0u;
                            do {
                                r0 = r12 + (r3 << 6);
                                r4 = r0 + 0x40u;  // (from the original)
                                if (r0 < r4) {
                                    do {
                                        r2 = r0 + 0x20u;  // (from the original)
                                        r1 = r0;
                                        if (r0 < r2) {
                                            do {
                                                *gptr<u16>(r1) = u16(r5);
                                                r1 += 2u;
                                                guest::preempt();
                                            } while (r1 < r2);
                                        }
                                        r0 += 0x20u;  // (from the original)
                                        guest::preempt();
                                    } while (r0 < r4);
                                }
                                r3 += 1u;
                                guest::preempt();
                            } while (r3 < 6u);
                            r0 = call_005828cc(r0, r1, r2, r3);
                            r1 = global_00ad5034_address;
                            r3 = r1 + 0x40u;  // (from the original)
                            if (r1 < r3) {
                                do {
                                    r2 = r1 + 0x20u;  // (from the original)
                                    r0 = r1;
                                    if (r1 < r2) {
                                        do {
                                            *gptr<u16>(r0) = u16(r5);
                                            r0 += 2u;
                                            guest::preempt();
                                        } while (r0 < r2);
                                    }
                                    r1 += 0x20u;  // (from the original)
                                    guest::preempt();
                                } while (r1 < r3);
                            }
                            guest::cpu()->r[1] = r1;
                            return r0;
                        }
                        guest::preempt();
                    } while (cf_3);
                    guest::preempt();
                } while (1);
            }
            guest::preempt();
        } while (cf_3);
        guest::preempt();
    } while (1);
}

}  // namespace d_00582464
GUEST_EXPORT_FRAMED(0x00582464, d_00582464::f_00582464, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005826d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies 32 bytes into row `index` (fewer than 2).
namespace d_005826d0 {

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32)> copy_bytes_at_any_alignment;

void set_row_of_2(u32 rows, u32 r1_unused, u32 index) {
    if (index >= 2u) {
        return;
    }
    copy_bytes_at_any_alignment(rows + (index << 5), guest::cpu()->r[1], 0x20u);  // (from the original)
    return;  // (from the original)
}

}  // namespace d_005826d0
GUEST_EXPORT(0x005826d0, d_005826d0::set_row_of_2);

// f_005826e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005826e8 {

inline constexpr u32 global_00ad4af4_address = 0x00ad4af4u;
inline constexpr u32 global_00ad4b74_address = 0x00ad4b74u;
inline constexpr u32 global_00ad4df4_address = 0x00ad4df4u;
inline constexpr u32 global_00ad4e34_address = 0x00ad4e34u;
inline constexpr u32 global_00ad4fb4_address = 0x00ad4fb4u;
inline constexpr u32 global_00ad4ff4_address = 0x00ad4ff4u;
inline constexpr u32 global_00ad5034_address = 0x00ad5034u;
inline constexpr u32 global_00ad5074_address = 0x00ad5074u;
inline constexpr u32 global_00ad50b4_address = 0x00ad50b4u;
inline constexpr u32 global_00ad50f4_address = 0x00ad50f4u;
inline constexpr u32 global_00ad5134_address = 0x00ad5134u;
inline constexpr u32 global_00ad5174_address = 0x00ad5174u;
inline constexpr u32 global_00ad51b4_address = 0x00ad51b4u;
inline constexpr u32 global_00ad51f4_address = 0x00ad51f4u;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> table_entry_has_all_bits;
inline constexpr guest::Function<0x005b4358, u32(u32, u32)> is_special_kind_005b4358;
inline constexpr guest::Function<0x005b449c, u32(u32, u32)> call_005b449c;
inline constexpr guest::Function<0x005b4954, u32(u32)> record_value_is_11;
inline constexpr guest::Function<0x006cb9fc, u32(u32)> is_snow_free_period;
inline constexpr guest::Function<0x006e0b2c, u32(u32)> kind_has_flag_80000_or_100000;
inline constexpr guest::Function<0x006f9c08, u32(u32)> call_006f9c08;
inline constexpr guest::Function<0x006fb030, u32(u32)> room_of_mode;

u32 f_005826e8(u32 r0) {
    u32 r0_1 = table_entry_has_all_bits(0x80u, r0, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    if (r0_1 == 0) {
        u32 r0_2 = table_entry_has_all_bits(0x2000u, r0, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        if (r0_2 == 0) {
            u32 r0_3 = is_special_kind_005b4358(r0, 0u);
            if (r0_3 != 0) {
                if (r0 - 0xa1u >= 2u) {  // (from the original)
                    return 0u;
                } else {
                }
                guest::cpu()->r[1] = global_00ad4af4_address;
                return (r0 - 0xa1u << 6) + global_00ad4af4_address;  // (from the original)
            }
            u32 r0_6 = table_entry_has_all_bits(0x40u, r0, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            if (r0_6 != 0) {
                u32 r0_7 = call_005b449c(0x40u, r0);  // (from the original)
                if (r0_7 < 0xau) {  // (from the original)
                    guest::cpu()->r[1] = global_00ad4b74_address;
                    return (r0_7 << 6) + global_00ad4b74_address;
                }
                return 0u;
            }
            u32 r0_9 = table_entry_has_all_bits(0x4000u, r0, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            if (r0_9 != 0) {
                u32 r0_10 = room_of_mode(r0);
                if (r0_10 < 6u) {
                    guest::cpu()->r[1] = global_00ad4e34_address;
                    return (r0_10 << 6) + global_00ad4e34_address;
                }
                return 0u;
            }
            if (r0 == 0x25u) {  // (from the original)
                return global_00ad4df4_address;
            }
            u32 r0_12 = table_entry_has_all_bits(0x400000u, r0, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            if (r0_12 != 0) {
                return global_00ad4fb4_address;
            }
            if (r0 == 0x55u) {  // (from the original)
                return global_00ad4ff4_address;
            }
            if (r0 != 0x46u) {  // (from the original)
                if (r0 == 0x2bu) {  // (from the original)
                    return global_00ad5074_address;
                }
                if (r0 == 0x3eu) {  // (from the original)
                    return global_00ad50b4_address;
                }
                if (r0 == 0x3fu) {  // (from the original)
                    return global_00ad50f4_address;
                }
                if (r0 == 0x40u) {  // (from the original)
                    return global_00ad5134_address;
                }
                if (r0 == 0x42u) {  // (from the original)
                    return global_00ad5174_address;
                }
                if (r0 == 0x67u) {  // (from the original)
                    return global_00ad51b4_address;
                }
            } else {
                r0_12 = is_snow_free_period(r0_12);
                if (r0_12 != 0) {
                    return global_00ad5034_address;
                }
            }
            u32 r0_13 = kind_has_flag_80000_or_100000(r0_12);
            if (r0_13 == 0) {
                return 0u;
            }
            u32 r0_14 = record_value_is_11(r0);
            if (r0_14 == 0) {
                return 0u;
            }
            if (r0 - 0x81u < 6u) {  // (from the original)
                guest::cpu()->r[1] = global_00ad51f4_address;
                return (r0 - 0x81u << 6) + global_00ad51f4_address;  // (from the original)
            }
            return 0u;
        }
    }
    u32 r0_17 = call_006f9c08(r0);
    if (r0_17 != 0) {
        return r0_17 + 0x22u;  // (from the original)
    }
    return 0u;
}

}  // namespace d_005826e8
GUEST_EXPORT_FRAMED(0x005826e8, d_005826e8::f_005826e8, 0x4010);  // pushes {r4, lr} first, as the original

// f_005828cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005828cc {

inline constexpr u32 global_00ad5074_address = 0x00ad5074u;
inline constexpr u32 global_00ad50b4_address = 0x00ad50b4u;
inline constexpr u32 global_00ad50f4_address = 0x00ad50f4u;
inline constexpr u32 global_00ad5134_address = 0x00ad5134u;
inline constexpr u32 global_00ad5174_address = 0x00ad5174u;
inline constexpr u32 global_00ad51b4_address = 0x00ad51b4u;

u32 f_005828cc() {
    u32 r1 = 0;
    u32 r3 = 0;
    u32 r2 = global_00ad5074_address;
    u32 r0 = 0xffffu;  // (from the original)
    u32 r12 = r2 + 0x40u;  // (from the original)
    if (r2 < r12) {
        do {
            r3 = r2 + 0x20u;  // (from the original)
            r1 = r2;
            if (r2 < r3) {
                do {
                    *gptr<u16>(r1) = u16(r0);
                    r1 += 2u;
                    guest::preempt();
                } while (r1 < r3);
            }
            r2 += 0x20u;  // (from the original)
            guest::preempt();
        } while (r2 < r12);
    }
    r1 = global_00ad50b4_address;
    r12 = r1 + 0x40u;  // (from the original)
    if (r1 < r12) {
        do {
            r3 = r1 + 0x20u;  // (from the original)
            r2 = r1;
            if (r1 < r3) {
                do {
                    *gptr<u16>(r2) = u16(r0);
                    r2 += 2u;
                    guest::preempt();
                } while (r2 < r3);
            }
            r1 += 0x20u;  // (from the original)
            guest::preempt();
        } while (r1 < r12);
    }
    r1 = global_00ad50f4_address;
    r12 = r1 + 0x40u;  // (from the original)
    if (r1 < r12) {
        do {
            r3 = r1 + 0x20u;  // (from the original)
            r2 = r1;
            if (r1 < r3) {
                do {
                    *gptr<u16>(r2) = u16(r0);
                    r2 += 2u;
                    guest::preempt();
                } while (r2 < r3);
            }
            r1 += 0x20u;  // (from the original)
            guest::preempt();
        } while (r1 < r12);
    }
    r1 = global_00ad5134_address;
    r12 = r1 + 0x40u;  // (from the original)
    if (r1 < r12) {
        do {
            r3 = r1 + 0x20u;  // (from the original)
            r2 = r1;
            if (r1 < r3) {
                do {
                    *gptr<u16>(r2) = u16(r0);
                    r2 += 2u;
                    guest::preempt();
                } while (r2 < r3);
            }
            r1 += 0x20u;  // (from the original)
            guest::preempt();
        } while (r1 < r12);
    }
    r1 = global_00ad5174_address;
    r12 = r1 + 0x40u;  // (from the original)
    if (r1 < r12) {
        do {
            r3 = r1 + 0x20u;  // (from the original)
            r2 = r1;
            if (r1 < r3) {
                do {
                    *gptr<u16>(r2) = u16(r0);
                    r2 += 2u;
                    guest::preempt();
                } while (r2 < r3);
            }
            r1 += 0x20u;  // (from the original)
            guest::preempt();
        } while (r1 < r12);
    }
    r2 = global_00ad51b4_address;
    r12 = r2 + 0x40u;  // (from the original)
    if (r2 >= r12) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    do {
        r3 = r2 + 0x20u;  // (from the original)
        r1 = r2;
        if (r2 < r3) {
            do {
                *gptr<u16>(r1) = u16(r0);
                r1 += 2u;
                guest::preempt();
            } while (r1 < r3);
        }
        r2 += 0x20u;  // (from the original)
        guest::preempt();
    } while (r2 < r12);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005828cc
GUEST_EXPORT(0x005828cc, d_005828cc::f_005828cc);

// f_00582aa4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Fills two rows of 16 16-bit values with 0xffff.
namespace d_00582aa4 {


void fill_two_rows_ffff(u32 r0, u32 r1) {
    u32 r3 = 0;
    u32 r12 = r0 + 0x40u;  // (from the original)
    if (r0 >= r12) {
        return;
    } else {
        r3 = 0xffffu;  // (from the original)
    }
    do {
        u32 r2 = r0 + 0x20u;  // (from the original)
        r1 = r0;
        if (r0 < r2) {
            do {
                *gptr<u16>(r1) = u16(r3);
                r1 += 2u;
                guest::preempt();
            } while (r1 < r2);
        }
        r0 += 0x20u;  // (from the original)
        guest::preempt();
    } while (r0 < r12);
    guest::cpu()->r[1] = r1;
}

}  // namespace d_00582aa4
GUEST_EXPORT(0x00582aa4, d_00582aa4::fill_two_rows_ffff);

// f_00582ae4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Fills a row of 16 16-bit values with 0xffff.
namespace d_00582ae4 {


void fill_row_ffff(u32 r0) {
    u32 r2 = 0;
    u32 r1 = r0 + 0x20u;  // (from the original)
    if (r0 >= r1) {
        guest::cpu()->r[1] = r1;
        return;
    } else {
        r2 = 0xffffu;  // (from the original)
    }
    do {
        *gptr<u16>(r0) = u16(r2);
        r0 += 2u;
        guest::preempt();
    } while (r0 < r1);
    guest::cpu()->r[1] = r1;
}

}  // namespace d_00582ae4
GUEST_EXPORT(0x00582ae4, d_00582ae4::fill_row_ffff);

// f_00582b1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00582b1c {

inline constexpr guest::Function<0x005826e8, u32(u32, u32, u32, u32)> call_005826e8;

u32 f_00582b1c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = call_005826e8(r3, r1, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        r1_1 = r1 & 0xfu;  // (from the original)
        r0_1 = u32(gptr<u16>(r0_1 + ((r2 & 1u) << 5))[r1_1]) >> (r0 & 0xfu) & 1u;  // (from the original)
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_00582b1c
GUEST_EXPORT_FRAMED(0x00582b1c, d_00582b1c::f_00582b1c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00582c9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00582c9c {

struct __attribute__((packed)) Object_00582c9c_0 {
    u8 unknown_0[0xa8];  // (not used here)
    u8 byte_a8;
};
GUEST_OFFSET(Object_00582c9c_0, byte_a8, 0xa8);

inline constexpr guest::Function<0x00152dc8, u32(u32, u32, u32, u32)> call_00152dc8;

void f_00582c9c(gptr<Object_00582c9c_0> arg0, u32 r1) {
    u32 r0_1 = call_00152dc8(arg0.addr(), 0u, r1, guest::cpu()->r[3]);
    if (r0_1 == 0) {
        arg0->byte_a8 = 1;
    }
    guest::cpu()->r[1] = r0_1;
}

}  // namespace d_00582c9c
GUEST_EXPORT_FRAMED(0x00582c9c, d_00582c9c::f_00582c9c, 0x4010);  // pushes {r4, lr} first, as the original

// f_00582d40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00582d40 {

struct __attribute__((packed)) Object_00582d40_0 {
    u8 unknown_0[0xa8];  // (not used here)
    u8 byte_a8;
};
GUEST_OFFSET(Object_00582d40_0, byte_a8, 0xa8);

inline constexpr guest::Function<0x00152770, u32(u32, u32)> call_00152770;
inline constexpr guest::Function<0x00153758, u32(u32, u32, u32, u32)> call_00153758;
inline constexpr guest::Function<0x00153a68, u32(u32, u32, u32)> call_00153a68;
inline constexpr guest::Function<0x004df800, u32(u32, u32, u32, u32)> return_constant_0x9ab040_;

u32 f_00582d40(gptr<Object_00582d40_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0_2 = 0;
    u32 r0_1 = arg0->byte_a8;
    if (r0_1 != 2u) {
        r0_2 = 1u;
    } else {
        u32 r0_3 = return_constant_0x9ab040_(r0_1, r1, r2, r3);
        u32 r0_4 = call_00153a68(r0_3, arg0.addr(), 0u);
        r1 = guest::cpu()->r[1];
        if (r0_4 == 0 || r0_4 == 5u) {
            u32 r0_5 = call_00153758(arg0.addr(), r0_3, 0u, 0u);
            call_00152770(r0_3, 0u);
            r1 = guest::cpu()->r[1];
            if (r0_5 == 0) {
                arg0->byte_a8 = 1;
                return 1u;
            }
        }
        r0_2 = 0u;
    }
    guest::cpu()->r[1] = r1;
    return r0_2;
}

}  // namespace d_00582d40
GUEST_EXPORT_FRAMED(0x00582d40, d_00582d40::f_00582d40, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00582e4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Plays sound `id` at the position given (r1, through the camera when there is one).
namespace d_00582e4c {

inline constexpr u32 sound_system_address = 0x0094d080u;
inline guest::global<u32, 0x0094d080> sound_system;
inline constexpr guest::Function<0x001e5894, u32(u32, u32, u32, u32)> call_001e5894;
inline constexpr guest::Function<0x002d31ec, u32(u32, u32, u32, u32)> call_002d31ec;

struct __attribute__((packed)) Frame_00582e4c {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0xc];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00582e4c, word_0, 0x0);
GUEST_OFFSET(Frame_00582e4c, word_4, 0x4);
GUEST_SIZE(Frame_00582e4c, 0x14);

u32 play_sound_at(u32 id, u32 position, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00582e4c> frame;  // the original's stack frame
    call_001e5894(frame.at(8).addr(), position, r2, r3);
    u32 r0_2 = *sound_system;
    frame->word_0 = r2;
    frame->word_4 = r3;
    u32 r0_4 = call_002d31ec(r0_2 + 0xbc8u, id, position, frame.at(8).addr());  // (from the original)
    return r0_4;
}

}  // namespace d_00582e4c
GUEST_EXPORT_FRAMED(0x00582e4c, d_00582e4c::play_sound_at, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00582f18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00582f18 {

inline guest::global<u32, 0x0094ccb8> global_0094ccb8;

u32 f_00582f18() {
    return *gptr<u8>(*global_0094ccb8 + 0x10u) == 2u;  // (from the original)
}

}  // namespace d_00582f18
GUEST_EXPORT(0x00582f18, d_00582f18::f_00582f18);

// f_00582f38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00582f38 {

inline guest::global<u32, 0x0094ccb8> global_0094ccb8;

u32 f_00582f38() {
    return *gptr<s8>(*global_0094ccb8 + 0x1ebfu);  // (from the original)
}

}  // namespace d_00582f38
GUEST_EXPORT(0x00582f38, d_00582f38::f_00582f38);

// f_00582f50: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00582f50 {

inline guest::global<u32, 0x0094ccb8> global_0094ccb8;

u32 f_00582f50() {
    return *gptr<s16>(*global_0094ccb8 + 0x12u);  // (from the original)
}

}  // namespace d_00582f50
GUEST_EXPORT(0x00582f50, d_00582f50::f_00582f50);

// f_00582f64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00582f64 {

inline guest::global<u32, 0x0094ccb8> global_0094ccb8;

u32 f_00582f64() {
    return *gptr<s16>(*global_0094ccb8 + 0x1eb6u);  // (from the original)
}

}  // namespace d_00582f64
GUEST_EXPORT(0x00582f64, d_00582f64::f_00582f64);

// f_00582fa4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00582fa4 {

inline constexpr u32 global_0094ccb8_address = 0x0094ccb8u;
inline guest::global<u32, 0x0094ccb8> global_0094ccb8;

u32 f_00582fa4() {
    return *gptr<u32>(*global_0094ccb8 + 0x18u);  // (from the original)
}

}  // namespace d_00582fa4
GUEST_EXPORT(0x00582fa4, d_00582fa4::f_00582fa4);

// f_00582ffc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00582ffc {

inline constexpr u32 global_0094e438_address = 0x0094e438u;
inline constexpr u32 stage_heap_address = 0x00952c3cu;
inline guest::global<u8, 0x0094e438> global_0094e438;
inline guest::global<u32, 0x00952c3c> stage_heap;
inline constexpr guest::Function<0x0032ae24, u32(u32, u32, u32, u32)> SoundBarcarollePlayer__SingletonDisposer___SingletonDisposer_;

u32 f_00582ffc() {
    u32 r1 = 0;
    SoundBarcarollePlayer__SingletonDisposer___SingletonDisposer_(*stage_heap, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *global_0094e438 = 1;
    guest::cpu()->r[1] = global_0094e438_address;
    return 1u;
}

}  // namespace d_00582ffc
GUEST_EXPORT_FRAMED(0x00582ffc, d_00582ffc::f_00582ffc, 0x4010);  // pushes {r4, lr} first, as the original

// f_00583024: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00583024 {

inline constexpr u32 global_0094e438_address = 0x0094e438u;
inline guest::global<u8, 0x0094e438> global_0094e438;
inline constexpr guest::Function<0x00123528, u32(u32, u32, u32, u32)> call_00123528;

u32 f_00583024() {
    u32 r0 = 0;
    u32 r1 = 0;
    call_00123528(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *global_0094e438 = 0;
    guest::cpu()->r[1] = global_0094e438_address;
    return 0u;
}

}  // namespace d_00583024
GUEST_EXPORT_FRAMED(0x00583024, d_00583024::f_00583024, 0x4010);  // pushes {r4, lr} first, as the original

// f_00583040: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00583040 {

inline constexpr u32 global_0094ccb8_address = 0x0094ccb8u;
inline guest::global<u32, 0x0094ccb8> global_0094ccb8;
inline constexpr guest::Function<0x0032ae8c, u32(u32, u32)> call_0032ae8c;

u32 f_00583040() {
    return call_0032ae8c(*global_0094ccb8, guest::cpu()->r[1]);
}

}  // namespace d_00583040
GUEST_EXPORT(0x00583040, d_00583040::f_00583040);

// f_00583050: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00583050 {

inline constexpr u32 global_0094ccb8_address = 0x0094ccb8u;
inline guest::global<u32, 0x0094ccb8> global_0094ccb8;
inline constexpr guest::Function<0x0032af5c, u32(u32, u32, u32, u32)> call_0032af5c;

u32 f_00583050() {
    return call_0032af5c(*global_0094ccb8, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00583050
GUEST_EXPORT(0x00583050, d_00583050::f_00583050);

// f_005830a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005830a0 {

inline guest::global<u32, 0x0094ccb8> global_0094ccb8;

u32 f_005830a0() {
    u32 r0_1 = *gptr<u8>(*global_0094ccb8 + 0x10u);  // (from the original)
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    return r0_1;
}

}  // namespace d_005830a0
GUEST_EXPORT(0x005830a0, d_005830a0::f_005830a0);

// f_005830d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005830d0 {

inline constexpr u32 global_0094ccb8_address = 0x0094ccb8u;
inline guest::global<u32, 0x0094ccb8> global_0094ccb8;
inline constexpr guest::Function<0x0032b774, u32(u32, u32, u32, u32)> call_0032b774;

u32 f_005830d0() {
    return call_0032b774(*global_0094ccb8, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005830d0
GUEST_EXPORT(0x005830d0, d_005830d0::f_005830d0);

// f_005830f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005830f8 {

struct __attribute__((packed)) Local_005830f8_r0_3 {
    u8 unknown_0[0x30];  // (not used here)
    u8 byte_30;
    u8 unknown_31[0x8f];  // (not used here)
    u32 word_c0;
};
GUEST_OFFSET(Local_005830f8_r0_3, byte_30, 0x30);
GUEST_OFFSET(Local_005830f8_r0_3, word_c0, 0xc0);

inline constexpr u32 sound_system_address = 0x0094d080u;
inline constexpr u32 global_00986a80_address = 0x00986a80u;
inline guest::global<u32, 0x0094d080> sound_system;
inline constexpr guest::Function<0x00134544, u32(u32, u32, u32)> copy_bytes_small_sizes_first;
inline constexpr guest::Function<0x0027680c, u32(u32, u32, u32)> call_0027680c;
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> get_data_base;
inline constexpr guest::Function<0x00767084, u32(u32)> flags_c60_ok;
inline constexpr guest::Function<0x0076c6e4, u32(u32, u32)> call_0076c6e4;

void f_005830f8(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 data_base = get_data_base(r0, r1, r2, guest::cpu()->r[3]);
    call_0076c6e4(data_base + 0x6e21au, frame.at(0).addr());  // (from the original)
    u32 r1_2 = frame.at(0).addr();
    gptr<Local_005830f8_r0_3> r0_3 = gptr<Local_005830f8_r0_3>(*sound_system + 0x68cu);  // (from the original)
    if (r0_3->byte_30 == 0 && s32(r0_3->word_c0) <= 0) {
        copy_bytes_small_sizes_first(global_00986a80_address, r1_2, 0x10u);  // (from the original)
        u32 r4_1 = *sound_system;
        u32 r0_4 = flags_c60_ok(r4_1);
        r1_2 = guest::cpu()->r[1];
        if (r0_4 == 0 && *gptr<u8>(r4_1 + 0xc5du) == 0) {  // (from the original)
            call_0027680c(r4_1 + 0x68cu, r0, global_00986a80_address);  // (from the original)
            r1_2 = guest::cpu()->r[1];
        }
    }
    guest::cpu()->r[1] = r1_2;
}

}  // namespace d_005830f8
GUEST_EXPORT_FRAMED(0x005830f8, d_005830f8::f_005830f8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005831a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005831a0 {

struct __attribute__((packed)) Local_005831a0_r0_1 {
    u8 unknown_0[0x30];  // (not used here)
    u8 byte_30;
    u8 unknown_31[0x8f];  // (not used here)
    u32 word_c0;
};
GUEST_OFFSET(Local_005831a0_r0_1, byte_30, 0x30);
GUEST_OFFSET(Local_005831a0_r0_1, word_c0, 0xc0);

inline constexpr u32 sound_system_address = 0x0094d080u;
inline constexpr u32 global_00986a80_address = 0x00986a80u;
inline guest::global<u32, 0x0094d080> sound_system;
inline constexpr guest::Function<0x00134544, u32(u32, u32, u32)> copy_bytes_small_sizes_first;
inline constexpr guest::Function<0x0027680c, u32(u32, u32, u32)> call_0027680c;
inline constexpr guest::Function<0x00767084, u32(u32)> flags_c60_ok;
inline constexpr guest::Function<0x0076c6e4, u32(u32, u32, u32, u32)> call_0076c6e4;

u32 f_005831a0(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    call_0076c6e4(r1, frame.at(0).addr(), r2, guest::cpu()->r[3]);
    u32 r1_2 = frame.at(0).addr();
    gptr<Local_005831a0_r0_1> r0_1 = gptr<Local_005831a0_r0_1>(*sound_system + 0x68cu);  // (from the original)
    if (r0_1->byte_30 == 0) {
        r0_1 = gptr<Local_005831a0_r0_1>(r0_1->word_c0);
        if (s32(r0_1.addr()) <= 0) {
            copy_bytes_small_sizes_first(global_00986a80_address, r1_2, 0x10u);  // (from the original)
            u32 r4_1 = *sound_system;
            r0_1 = gptr<Local_005831a0_r0_1>(flags_c60_ok(r4_1));
            r1_2 = guest::cpu()->r[1];
            if (r0_1.addr() == 0) {
                r0_1 = gptr<Local_005831a0_r0_1>(u32(*gptr<u8>(r4_1 + 0xc5du)));  // (from the original)
                if (r0_1.addr() == 0) {
                    r0_1 = gptr<Local_005831a0_r0_1>(call_0027680c(r4_1 + 0x68cu, r0, global_00986a80_address));  // (from the original)
                    r1_2 = guest::cpu()->r[1];
                }
            }
        }
    }
    guest::cpu()->r[1] = r1_2;
    return r0_1.addr();
}

}  // namespace d_005831a0
GUEST_EXPORT_FRAMED(0x005831a0, d_005831a0::f_005831a0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00583238: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00583238 {

struct __attribute__((packed)) Local_00583238_r0_1 {
    u8 unknown_0[0x30];  // (not used here)
    u8 byte_30;
    u8 unknown_31[0x8f];  // (not used here)
    u32 word_c0;
};
GUEST_OFFSET(Local_00583238_r0_1, byte_30, 0x30);
GUEST_OFFSET(Local_00583238_r0_1, word_c0, 0xc0);

inline constexpr u32 sound_system_address = 0x0094d080u;
inline constexpr u32 global_00986a80_address = 0x00986a80u;
inline guest::global<u32, 0x0094d080> sound_system;
inline constexpr guest::Function<0x00134544, u32(u32, u32, u32, u32)> copy_bytes_small_sizes_first;
inline constexpr guest::Function<0x0027680c, u32(u32, u32, u32)> call_0027680c;
inline constexpr guest::Function<0x00767084, u32(u32)> flags_c60_ok;

u32 f_00583238(u32 r0, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    gptr<Local_00583238_r0_1> r0_1 = gptr<Local_00583238_r0_1>(*sound_system + 0x68cu);  // (from the original)
    if (r0_1->byte_30 == 0) {
        r0_1 = gptr<Local_00583238_r0_1>(r0_1->word_c0);
        if (s32(r0_1.addr()) <= 0) {
            copy_bytes_small_sizes_first(global_00986a80_address, r1, 0x10u, guest::cpu()->r[3]);  // (from the original)
            u32 r4_1 = *sound_system;
            r0_1 = gptr<Local_00583238_r0_1>(flags_c60_ok(r4_1));
            r1 = guest::cpu()->r[1];
            if (r0_1.addr() == 0) {
                r0_1 = gptr<Local_00583238_r0_1>(u32(*gptr<u8>(r4_1 + 0xc5du)));  // (from the original)
                if (r0_1.addr() == 0) {
                    frame.release();
                    return call_0027680c((r4_1 + 0x400u) + 0x28cu, r0, global_00986a80_address);  // (from the original)
                }
            }
        }
    }
    guest::cpu()->r[1] = r1;
    return r0_1.addr();
}

}  // namespace d_00583238
GUEST_EXPORT(0x00583238, d_00583238::f_00583238);

// f_005832c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005832c0 {

inline constexpr u32 sound_system_address = 0x0094d080u;
inline guest::global<u32, 0x0094d080> sound_system;
inline constexpr guest::Function<0x001d5348, u32(u32, u32, u32, u32)> call_001d5348;

u32 f_005832c0(u32 r0) {
    u32 r2_1 = *sound_system;
    return call_001d5348(r2_1 + 0x754u, r0, r2_1, guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_005832c0
GUEST_EXPORT(0x005832c0, d_005832c0::f_005832c0);

// f_0058332c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058332c {

inline guest::global<u32, 0x0094d080> sound_system;

u32 f_0058332c() {
    u32 r0_1 = *gptr<u8>(*sound_system + 0x768u);  // (from the original)
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    return r0_1;
}

}  // namespace d_0058332c
GUEST_EXPORT(0x0058332c, d_0058332c::f_0058332c);

// f_00583348: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00583348 {

inline guest::global<u32, 0x0094d080> sound_system;

u32 f_00583348() {
    return *gptr<s8>(*sound_system + 0x600u);  // (from the original)
}

}  // namespace d_00583348
GUEST_EXPORT(0x00583348, d_00583348::f_00583348);

// f_005833b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005833b0 {

inline constexpr u32 sound_system_address = 0x0094d080u;
inline guest::global<u32, 0x0094d080> sound_system;
inline constexpr guest::Function<0x006b2104, u32(u32, u32, u32, u32)> call_006b2104;

u32 f_005833b0(u32 r0) {
    return call_006b2104(*sound_system, r0, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005833b0
GUEST_EXPORT(0x005833b0, d_005833b0::f_005833b0);

// f_005833e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005833e4 {

inline guest::global<u32, 0x0094d080> sound_system;
inline constexpr guest::Function<0x001d7610, u32(u32, u32)> call_001d7610;

u32 f_005833e4() {
    return call_001d7610(*sound_system + 0x754u, guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_005833e4
GUEST_EXPORT(0x005833e4, d_005833e4::f_005833e4);

// f_00583474: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00583474 {

inline guest::global<u32, 0x0094d080> sound_system;
inline constexpr guest::Function<0x001e5894, u32(u32, u32, u32, u32)> call_001e5894;
inline constexpr guest::Function<0x002d3404, u32(u32, u32, u32, u32)> call_002d3404;

u32 f_00583474(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    call_001e5894(frame.at(0).addr(), r0, r2, r3);
    u32 r0_3 = call_002d3404(*sound_system + 0xbc8u, r0, frame.at(0).addr(), r1);  // (from the original)
    return r0_3;
}

}  // namespace d_00583474
GUEST_EXPORT_FRAMED(0x00583474, d_00583474::f_00583474, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_005834e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005834e0 {

inline guest::global<u32, 0x0094d080> sound_system;

void f_005834e0(u32 r0) {
    for (;;) {
        u32 r1 = r0;
        r0 = *sound_system + 0x594u;  // (from the original)
        if (!1) {
            break;
        }
        if (r1 >= 6u) {
            return;
        }
        if (r1 != 0) {
            *gptr<u32>(r0 + 0x2cu) = r1;  // (from the original)
        }
        return;
        guest::preempt();
    }
}

}  // namespace d_005834e0
GUEST_EXPORT(0x005834e0, d_005834e0::f_005834e0);

// f_005834fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005834fc {

struct __attribute__((packed)) Local_005834fc_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005834fc_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_005834fc_ea_1, word_4, 0x4);

inline guest::global<u32, 0x0094d080> sound_system;

void f_005834fc(u32 r0, u32 r1) {
    gptr<Local_005834fc_ea_1> ea_1 = gptr<Local_005834fc_ea_1>((*sound_system + 0xb00u) + 0xc0u);  // (from the original)
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
}

}  // namespace d_005834fc
GUEST_EXPORT(0x005834fc, d_005834fc::f_005834fc);

// f_00583578: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00583578 {

inline constexpr u32 sound_system_address = 0x0094d080u;
inline guest::global<u32, 0x0094d080> sound_system;
inline constexpr guest::Function<0x004db540, u32(u32, u32, u32, u32)> call_004db540;
inline constexpr guest::Function<0x00767084, u32(u32, u32, u32, u32)> flags_c60_ok;

void f_00583578(u32 r0_unused, u32 r1, u32 r2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r4_1 = *sound_system;
    u32 r0_1 = flags_c60_ok(r4_1, r1, r2, guest::cpu()->r[3]);
    if (r0_1 != 0 || *gptr<u8>(r4_1 + 0xc5du) != 0) {  // (from the original)
        return;
    }
    frame.release();
    call_004db540(r4_1 + 0x6f8u, 0x1000f84u, 0u, guest::cpu()->r[3]);
    return;  // (from the original)
}

}  // namespace d_00583578
GUEST_EXPORT(0x00583578, d_00583578::f_00583578);

// f_00583640: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00583640 {

inline constexpr u32 global_0094e424_address = 0x0094e424u;
inline guest::global<u8, 0x0094e424> global_0094e424;
inline guest::global<u32, 0x0094e42c> global_0094e42c;

void f_00583640(u32 r0) {
    *global_0094e42c = r0;
    *global_0094e424 = 1;
    guest::cpu()->r[1] = global_0094e424_address;
}

}  // namespace d_00583640
GUEST_EXPORT(0x00583640, d_00583640::f_00583640);

// f_00583658: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00583658 {

inline guest::global<u32, 0x0094d080> sound_system;
inline constexpr guest::Function<0x001d5e0c, u32(u32, u32, u32, u32)> call_001d5e0c;

void f_00583658() {
    call_001d5e0c(*sound_system + 0x754u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_00583658
GUEST_EXPORT(0x00583658, d_00583658::f_00583658);

// f_00583670: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00583670 {

inline guest::global<u32, 0x0094d080> sound_system;

void f_00583670(u32 r0) {
    for (;;) {
        u32 r1 = r0;
        r0 = *sound_system + 0x754u;  // (from the original)
        if (!1) {
            break;
        }
        if (r1 < 3u) {
            *gptr<u8>(r0 + 0x58u) = u8(r1);  // (from the original)
        }
        guest::cpu()->r[1] = r1;
        return;
        guest::preempt();
    }
}

}  // namespace d_00583670
GUEST_EXPORT(0x00583670, d_00583670::f_00583670);

// f_00583704: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00583704 {

struct __attribute__((packed)) Local_00583704_r0_1 {
    u8 unknown_0[0x30];  // (not used here)
    u8 byte_30;
    u8 unknown_31[0x8f];  // (not used here)
    u32 word_c0;
};
GUEST_OFFSET(Local_00583704_r0_1, byte_30, 0x30);
GUEST_OFFSET(Local_00583704_r0_1, word_c0, 0xc0);

inline guest::global<u32, 0x0094d080> sound_system;

u32 f_00583704() {
    gptr<Local_00583704_r0_1> r0_1 = gptr<Local_00583704_r0_1>(*sound_system + 0x68cu);  // (from the original)
    u32 r1_1 = r0_1->byte_30;
    if (r1_1 != 0) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    if (s32(r0_1->word_c0) <= 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_00583704
GUEST_EXPORT(0x00583704, d_00583704::f_00583704);

// f_00583790: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00583790 {

inline constexpr u32 sound_system_address = 0x0094d080u;
inline guest::global<u32, 0x0094d080> sound_system;

u32 f_00583790() {
    return *gptr<u32>(*sound_system + 0x6c0u);  // (from the original)
}

}  // namespace d_00583790
GUEST_EXPORT(0x00583790, d_00583790::f_00583790);

// f_005837b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005837b8 {

inline constexpr u32 sound_system_address = 0x0094d080u;
inline guest::global<u32, 0x0094d080> sound_system;

u32 f_005837b8() {
    u32 r0_1 = *gptr<u32>(*sound_system + 0x788u);  // (from the original)
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    return r0_1;
}

}  // namespace d_005837b8
GUEST_EXPORT(0x005837b8, d_005837b8::f_005837b8);

// f_00583824: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00583824 {

inline guest::global<u32, 0x0094d080> sound_system;
inline constexpr guest::Function<0x001d6868, u32(u32, u32, u32, u32)> call_001d6868;

u32 f_00583824() {
    return call_001d6868(*sound_system + 0x754u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_00583824
GUEST_EXPORT(0x00583824, d_00583824::f_00583824);

// f_0058383c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058383c {

inline guest::global<u32, 0x0094d080> sound_system;

u32 f_0058383c() {
    u32 r0_1 = *gptr<u8>(*sound_system + 0x708u);  // (from the original)
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    return r0_1;
}

}  // namespace d_0058383c
GUEST_EXPORT(0x0058383c, d_0058383c::f_0058383c);

// f_00583890: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00583890 {

inline constexpr u32 global_0094e424_address = 0x0094e424u;
inline guest::global<u16, 0x0094e426> global_0094e426;

void f_00583890(u32 r0) {
    *global_0094e426 = u16(r0);
    guest::cpu()->r[1] = global_0094e424_address;
}

}  // namespace d_00583890
GUEST_EXPORT(0x00583890, d_00583890::f_00583890);

// f_005838d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005838d4 {

inline guest::global<u32, 0x0094d080> sound_system;

u32 f_005838d4() {
    return *gptr<s8>(*sound_system + 0x836u);  // (from the original)
}

}  // namespace d_005838d4
GUEST_EXPORT(0x005838d4, d_005838d4::f_005838d4);

// f_0058394c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058394c {

inline constexpr u32 sound_system_address = 0x0094d080u;
inline constexpr u32 current_player_data_address = 0x00aaf14cu;
inline guest::global<u32, 0x0094d080> sound_system;
inline guest::global<u32, 0x00aaf14c> current_player_data;
inline constexpr guest::Function<0x00305f2c, u32(u32, u32)> read_global_object_byte;
inline constexpr guest::Function<0x0058660c, u32(u32, u32)> return_constant_0x98a018_;
inline constexpr guest::Function<0x00766f1c, u32(u32, u32)> call_00766f1c;

u32 f_0058394c(u32 r0, u32 r1) {
    u32 r0_7 = 0;
    u32 zf_1 = r0 == 0x27u;  // (from the original)
    if (!zf_1) {
        zf_1 = r0 == 0x9du;  // (from the original)
    }
    if (!zf_1) {
        zf_1 = r0 == 0x9eu;  // (from the original)
    }
    if (!zf_1) {
        u32 r0_2 = call_00766f1c(*sound_system, r0);
        r1 = guest::cpu()->r[1];
        if (r0_2 == 0) {
            u32 r0_3 = return_constant_0x98a018_(r0_2, r1);
            r1 = guest::cpu()->r[1];
            u32 r0_4 = *gptr<u16>(r0_3 + 0xeu);  // (from the original)
            if ((r0_4 & 0x40u) != 0) {  // (from the original)
                return 0u;
            }
            u32 r0_5 = read_global_object_byte(r0_4, r1);
            r1 = guest::cpu()->r[1];
            if (r0_5 == 3u) {
                return 0u;
            }
            r0_7 = call_00766f1c(*sound_system, r0);
            r1 = guest::cpu()->r[1];
            return r0_7 == 0 ? r0_7 : 1u;
        }
        u32 r0_8 = *current_player_data;
        if (r0_8 == 0) {
            guest::cpu()->r[1] = r1;
            return 1u;
        }
        r1 = u32(*gptr<u8>(r0_8 + 0x5701u)) << 0x1e;  // (from the original)
        if (s32(r1) < 0) {
            if ((u32(*gptr<u8>(r0_8 + 0x572bu)) >> 7) == 0) {  // (from the original)
                guest::cpu()->r[1] = r1;
                return 1u;
            }
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_0058394c
GUEST_EXPORT_FRAMED(0x0058394c, d_0058394c::f_0058394c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00583a08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00583a08 {

inline constexpr u32 global_0094e424_address = 0x0094e424u;
inline guest::global<u16, 0x0094e428> global_0094e428;

void f_00583a08(u32 r0) {
    *global_0094e428 = u16(r0);
    guest::cpu()->r[1] = global_0094e424_address;
}

}  // namespace d_00583a08
GUEST_EXPORT(0x00583a08, d_00583a08::f_00583a08);

// f_00583a18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00583a18 {

struct __attribute__((packed)) Local_00583a18_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00583a18_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00583a18_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_00583a18_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_00583a18_ea_1, word_c, 0xc);

struct __attribute__((packed)) Local_00583a18_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00583a18_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_00583a18_ea_2, word_4, 0x4);

inline constexpr u32 sound_system_address = 0x0094d080u;
inline guest::global<u32, 0x0094d080> sound_system;
inline constexpr guest::Function<0x0027689c, u32(u32, u32, u32, u32)> call_0027689c;

void f_00583a18(u32 r0, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_00583a18_ea_1> ea_1 = gptr<Local_00583a18_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r4;
    ea_1->word_c = r14;
    u32 r3_1 = *sound_system;
    call_0027689c(r3_1 + 0x68cu, r0, frame.at(4).addr(), r3_1);  // (from the original)
    gptr<Local_00583a18_ea_2> ea_2 = gptr<Local_00583a18_ea_2>(frame.at(8).addr());
    guest::cpu()->r[4] = ea_2->word_0;
}

}  // namespace d_00583a18
GUEST_EXPORT(0x00583a18, d_00583a18::f_00583a18);

// f_00583b8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00583b8c {

inline guest::global<u32, 0x0094d080> sound_system;

u32 f_00583b8c() {
    return *gptr<s8>(*sound_system + 0x835u);  // (from the original)
}

}  // namespace d_00583b8c
GUEST_EXPORT(0x00583b8c, d_00583b8c::f_00583b8c);

// f_00583ca8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00583ca8 {

inline guest::global<u32, 0x0094cd08> global_0094cd08;

u32 f_00583ca8() {
    return *gptr<u8>(*global_0094cd08 + 0x90u);  // (from the original)
}

}  // namespace d_00583ca8
GUEST_EXPORT(0x00583ca8, d_00583ca8::f_00583ca8);

// f_00583dc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00583dc4 {

inline constexpr u32 global_0094cd08_address = 0x0094cd08u;
inline guest::global<u32, 0x0094cd08> global_0094cd08;

u32 f_00583dc4() {
    u32 r0_1 = *global_0094cd08;
    float S0_1 = std::bit_cast<float>(*gptr<u32>(r0_1 + 0x94u));  // (from the original)
    guest::cpu()->s[0] = S0_1;
    return r0_1;
}

}  // namespace d_00583dc4
GUEST_EXPORT(0x00583dc4, d_00583dc4::f_00583dc4);

// f_005840f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005840f8 {

inline constexpr u32 global_00989bd8_address = 0x00989bd8u;
inline constexpr u32 global_0098a018_address = 0x0098a018u;
inline guest::global<u8, 0x0094e484> global_0094e484;
inline guest::global<u8, 0x0094e486> global_0094e486;
inline guest::global<u8, 0x0094e487> global_0094e487;
inline constexpr guest::Function<0x0058440c, u32(u32, u32, u32, u32)> call_0058440c;
inline constexpr guest::Function<0x0058b060, u32(u32, u32, u32, u32)> BgmParamList__set_flag_43c;

u32 f_005840f8() {
    if (*global_0094e484 != 0) {
        BgmParamList__set_flag_43c(global_00989bd8_address, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    call_0058440c(global_0098a018_address, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *global_0094e486 = 0;
    *global_0094e487 = 0;
    return 0u;
}

}  // namespace d_005840f8
GUEST_EXPORT_FRAMED(0x005840f8, d_005840f8::f_005840f8, 0x4010);  // pushes {r4, lr} first, as the original

// f_00584150: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00584150 {

inline constexpr u32 vtable_sead__SafeStringBase_char_ = 0x009047f8u;
inline constexpr u32 global_00975338_address = 0x00975338u;
inline guest::global<u8, 0x0094e4a4> global_0094e4a4;
inline guest::global<u8, 0x0094e4a5> global_0094e4a5;
inline guest::global<u8, 0x0094e4a6> global_0094e4a6;
inline guest::global<u8, 0x0094e4a7> global_0094e4a7;
inline guest::global<u8, 0x0094e4a8> global_0094e4a8;
inline guest::global<u32, 0x00975338> global_00975338;
inline constexpr guest::Function<0x002fb378, u32(u32)> return_constant_0xad56b0_;
inline constexpr guest::Function<0x003045a8, u32(u32, u32)> call_3045a8;
inline constexpr guest::Function<0x00309bd4, u32(u32, u32)> call_00309bd4;
inline constexpr guest::Function<0x0031758c, u32(u32, u32, u32, u32)> call_0031758c;
inline constexpr guest::Function<0x003188f0, u32(u32)> first_registered_id_of_class_0;
inline constexpr guest::Function<0x00589480, u32(u32, u32, u32, u32)> clock_in_range;
inline constexpr guest::Function<0x00589678, u32(u32, u32, u32, u32)> clock_byte_07;
inline constexpr guest::Function<0x00589698, u32(u32)> clock_byte_09;

struct __attribute__((packed)) Frame_00584150 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Frame_00584150, word_0, 0x0);
GUEST_OFFSET(Frame_00584150, word_4, 0x4);
GUEST_OFFSET(Frame_00584150, word_8, 0x8);
GUEST_OFFSET(Frame_00584150, word_c, 0xc);
GUEST_SIZE(Frame_00584150, 0x10);

void sead__SafeStringBase_char___SafeStringBase_00584150(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00584150> frame;  // the original's stack frame
    u32 r0_1 = clock_byte_07(r0, r1, r2, r3);
    *global_0094e4a4 = u8(r0_1);
    u32 r0_2 = clock_byte_09(r0_1);
    *global_0094e4a5 = u8(r0_2);
    u32 r0_3 = clock_in_range(0x3bu, 0x2du, 0u, 0u);  // (from the original)
    if (r0_3 != 0) {
        u32 r0_4 = first_registered_id_of_class_0(r0_3);
        if (r0_4 == 7u) {
            u32 r0_5 = return_constant_0xad56b0_(r0_4);
            u32 r0_6 = call_00309bd4(7u, r0_5);
            if (r0_6 != 0) {
                r0_3 = 0u;
                goto L_5841b8;
            }
        }
        r0_3 = 1u;
    }
L_5841b8:;
    *global_0094e4a6 = u8(r0_3);
    *global_0094e4a7 = 0;
    *global_0094e4a8 = 0;
    frame->word_c = 0x584210;  // (from the original)
    frame->word_8 = vtable_sead__SafeStringBase_char_;
    u32 r0_8 = call_3045a8(*global_00975338, vtable_sead__SafeStringBase_char_);
    frame->word_0 = 1;
    frame->word_4 = 0;
    call_0031758c(r0, 0x400u, r0_8, frame.at(8).addr());  // (from the original)
}

}  // namespace d_00584150
GUEST_EXPORT_FRAMED(0x00584150, d_00584150::sead__SafeStringBase_char___SafeStringBase_00584150, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00584250: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00584250 {

inline guest::global<u8, 0x0098a088> global_0098a088;
inline guest::global<u8, 0x0098a08a> global_0098a08a;

void f_00584250() {
    *global_0098a088 = 0;
    *global_0098a08a = 0;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_00584250
GUEST_EXPORT(0x00584250, d_00584250::f_00584250);

// f_00584d78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00584d78 {

struct __attribute__((packed)) Object_00584d78_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u8 byte_c;
};
GUEST_OFFSET(Object_00584d78_0, word_8, 0x8);
GUEST_OFFSET(Object_00584d78_0, byte_c, 0xc);

struct __attribute__((packed)) Local_00584d78_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00584d78_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_00584d78_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_00584d78_r4_1 {
    u8 unknown_0[0x1e];  // (not used here)
    u8 byte_1e;
    u8 byte_1f;
    u8 byte_20;
    u8 unknown_21[0x1];  // (not used here)
    u8 byte_22;
};
GUEST_OFFSET(Local_00584d78_r4_1, byte_1e, 0x1e);
GUEST_OFFSET(Local_00584d78_r4_1, byte_1f, 0x1f);
GUEST_OFFSET(Local_00584d78_r4_1, byte_20, 0x20);
GUEST_OFFSET(Local_00584d78_r4_1, byte_22, 0x22);

inline constexpr guest::Function<0x00584074, u32(u32, u32, u32, u32)> return_constant_0x989bd8_;
inline constexpr guest::Function<0x0058bc7c, u32(u32, u32, u32, u32)> call_0058bc7c;

struct __attribute__((packed)) Frame_00584d78 {
    u32 word_0;
    u8 unknown_4[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00584d78, word_0, 0x0);
GUEST_SIZE(Frame_00584d78, 0xc);

u32 f_00584d78(gptr<Object_00584d78_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00584d78> frame;  // the original's stack frame
    u32 r1_1 = arg0->byte_c;
    if (r1_1 != 0x2cu) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return arg0.addr();
    }
    gptr<Local_00584d78_r4_1> r4_1 = gptr<Local_00584d78_r4_1>(arg0->word_8);
    u32 r0_1 = r4_1->byte_20;
    if (r0_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    u32 r0_2 = return_constant_0x989bd8_(r0_1, r1_1, r2, r3);
    u32 r1_2 = ~0u;
    frame->word_0 = 0xc;  // (from the original)
    gptr<Local_00584d78_ea_2> ea_2 = gptr<Local_00584d78_ea_2>(frame.at(4).addr());
    ea_2->word_0 = r1_2;
    ea_2->word_4 = 0;
    call_0058bc7c(r0_2, 3u, 0xcu - (r1_2 << 0x18), 5u);  // (from the original)
    r4_1->byte_1f = 0;
    r4_1->byte_1e = 1;
    r4_1->byte_22 = 1;
    return 1u;
}

}  // namespace d_00584d78
GUEST_EXPORT_FRAMED(0x00584d78, d_00584d78::f_00584d78, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00585410: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00585410 {

struct __attribute__((packed)) Object_00585410_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u8 byte_c;
    u8 unknown_d[0x1];  // (not used here)
    u16 half_e;
};
GUEST_OFFSET(Object_00585410_0, word_8, 0x8);
GUEST_OFFSET(Object_00585410_0, byte_c, 0xc);
GUEST_OFFSET(Object_00585410_0, half_e, 0xe);

inline constexpr guest::Function<0x005673c8, u32(u32)> construct_heap_allocator;

u32 f_00585410(gptr<Object_00585410_0> arg0) {
    construct_heap_allocator(arg0.addr());
    arg0->word_8 = 0;
    arg0->byte_c = 0x39;  // (from the original)
    arg0->half_e = 4;
    return arg0.addr();
}

}  // namespace d_00585410
GUEST_EXPORT_FRAMED(0x00585410, d_00585410::f_00585410, 0x4010);  // pushes {r4, lr} first, as the original

// f_00588d54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00588d54 {

inline guest::global<u8, 0x0094e491> global_0094e491;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> read_global_byte_2;
inline constexpr guest::Function<0x00584134, u32(u32, u32)> return_constant_0x98a030_;
inline constexpr guest::Function<0x0058c514, u32(u32, u32)> FlagManager__request;
inline constexpr guest::Function<0x0058c5f0, u32(u32, u32)> FlagManager__release;
inline constexpr guest::Function<0x005c2ce0, u32(u32, u32)> call_005c2ce0;
inline constexpr guest::Function<0x00753088, u32(u32, u32)> flag_bit_set;

u32 f_00588d54(u32 r0, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_7 = 0;
    r0 = read_global_byte_2(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 1u) {
        r0 = call_005c2ce0(4u, 0u);
        r1 = guest::cpu()->r[1];
        if (r0 != 0) {
            u32 r0_1 = return_constant_0x98a030_(r0, r1);
            r0_2 = flag_bit_set(r0_1, 0x2eu);  // (from the original)
            if (r0_2 == 0) {
                goto L_588dd0;
            }
            r0 = *gptr<u32>(r0);
            if (*global_0094e491 == 0) {
                goto L_588db0;
            }
            r1 = 0x44d40000u;  // (from the original)
            if (s32(r0) < s32(r1)) {
                goto L_588dbc;
            }
        }
    }
    guest::cpu()->r[1] = r1;
    return r0;
L_588db0:;
    r1 = 0x43e00000u;  // (from the original)
    if (s32(r0) <= s32(r1)) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
L_588dbc:;
    r0_3 = return_constant_0x98a030_(r0, r1);
    frame.release();
    return FlagManager__release(r0_3, 0x2eu);  // (from the original)
L_588dd0:;
    u32 r0_4 = return_constant_0x98a030_(r0_2, guest::cpu()->r[1]);
    u32 r0_5 = flag_bit_set(r0_4, 0x2fu);  // (from the original)
    r1 = 0x43d00000u;  // (from the original)
    u32 r0_6 = *global_0094e491;
    if (r0_5 == 0) {
        r0 = *gptr<u32>(r0);
        if (r0_6 != 0) {
            if (s32(r0) > s32(0x44d80000u)) {  // (from the original)
                goto L_588e50;
            }
            goto L_588e64;
        }
        if (s32(r0) >= s32(r1)) {
            goto L_588e74;
        }
L_588e50:;
        r0_7 = return_constant_0x98a030_(r0, r1);
        frame.release();
        return FlagManager__request(r0_7, 0x2eu);  // (from the original)
L_588e64:;
        r1 = 0x43b00000u;  // (from the original)
        if (s32(r1) > s32(r0)) {
            goto L_588e80;
        }
        guest::cpu()->r[1] = r1;
        return r0;
L_588e74:;
        r1 = 0x44d30000u;  // (from the original)
        if (s32(r1) >= s32(r0)) {
            guest::cpu()->r[1] = r1;
            return r0;
        }
L_588e80:;
        u32 r0_8 = return_constant_0x98a030_(r0, r1);
        frame.release();
        return FlagManager__request(r0_8, 0x2fu);  // (from the original)
    }
    r0 = *gptr<u32>(r0);
    if (r0_6 != 0) {
        if (s32(r0) > s32(r1)) {
            goto L_588e18;
        }
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = 0x44cb0000u;  // (from the original)
    if (s32(r0) >= s32(r1)) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
L_588e18:;
    u32 r0_9 = return_constant_0x98a030_(r0, r1);
    frame.release();
    return FlagManager__release(r0_9, 0x2fu);  // (from the original)
}

}  // namespace d_00588d54
GUEST_EXPORT(0x00588d54, d_00588d54::f_00588d54);

// f_005897b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005897b0 {

inline constexpr guest::Function<0x0058332c, u32(u32)> call_0058332c;

u32 f_005897b0(u32 r0) {
    u32 r0_1 = call_0058332c(r0);
    return r0_1 ^ 1u;
}

}  // namespace d_005897b0
GUEST_EXPORT_FRAMED(0x005897b0, d_005897b0::f_005897b0, 0x4010);  // pushes {r4, lr} first, as the original

// f_005897c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005897c0 {

struct __attribute__((packed)) Local_005897c0_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005897c0_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_005897c0_ea_2, word_4, 0x4);

inline constexpr u32 global_0094e4a9_address = 0x0094e4a9u;
inline guest::global<u32, 0x0084558c> global_0084558c;
inline guest::global<u8, 0x0094e4a9> global_0094e4a9;
inline guest::global<u8, 0x0094e4aa> global_0094e4aa;
inline constexpr guest::Function<0x00584074, u32(u32, u32, u32, u32)> return_constant_0x989bd8_;
inline constexpr guest::Function<0x00584134, u32(u32)> return_constant_0x98a030_;
inline constexpr guest::Function<0x0058aee8, u32(u32, u32, u32, u32)> BgmParamList__update_nodes;
inline constexpr guest::Function<0x0058bc7c, u32(u32, u32, u32, u32)> call_0058bc7c;
inline constexpr guest::Function<0x0058c514, u32(u32, u32)> FlagManager__request;
inline constexpr guest::Function<0x0058c5f0, u32(u32, u32)> FlagManager__release;
inline constexpr guest::Function<0x0058c90c, u32(u32, u32, u32, u32)> call_0058c90c;

struct __attribute__((packed)) Frame_005897c0 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x10];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005897c0, word_0, 0x0);
GUEST_OFFSET(Frame_005897c0, word_4, 0x4);
GUEST_SIZE(Frame_005897c0, 0x18);

void f_005897c0(u32 r0_unused, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005897c0> frame;  // the original's stack frame
    u32 r1_1 = *global_0094e4a9;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return;
    }
    *global_0094e4aa = 0;
    u32 r0_1 = return_constant_0x989bd8_(global_0094e4a9_address, r1_1, r2, r3);
    frame->word_0 = 0;
    frame->word_4 = 0;
    u32 r0_2 = BgmParamList__update_nodes(r0_1, 1u, 0u, *global_0084558c);
    u32 r0_3 = return_constant_0x989bd8_(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    frame->word_0 = 0;
    gptr<Local_005897c0_ea_2> ea_2 = gptr<Local_005897c0_ea_2>(frame.at(4).addr());
    ea_2->word_0 = ~0u;
    ea_2->word_4 = 0;
    u32 r0_4 = call_0058bc7c(r0_3, 0x11u, 0u, 0x14u);  // (from the original)
    u32 r0_5 = return_constant_0x98a030_(r0_4);
    u32 r0_6 = FlagManager__release(r0_5, 0x10u);  // (from the original)
    u32 r0_7 = return_constant_0x98a030_(r0_6);
    u32 r0_8 = FlagManager__request(r0_7, 0x11u);  // (from the original)
    u32 r0_9 = return_constant_0x98a030_(r0_8);
    frame.release();
    call_0058c90c(r0_9, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
}

}  // namespace d_005897c0
GUEST_EXPORT(0x005897c0, d_005897c0::f_005897c0);

// f_005899ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005899ac {

inline guest::global<u8, 0x0094e4a9> global_0094e4a9;
inline guest::global<u8, 0x0094e4aa> global_0094e4aa;
inline constexpr guest::Function<0x005838d4, u32(u32)> call_005838d4;

u32 f_005899ac() {
    u32 r1_1 = s8(*global_0094e4a9);
    u32 r0_1 = s8(*global_0094e4aa);
    if ((r0_1 & r1_1) == 0) {
        return 0u;
    }
    u32 r0_2 = call_005838d4(r0_1);
    return r0_2 != 0;
}

}  // namespace d_005899ac
GUEST_EXPORT_FRAMED(0x005899ac, d_005899ac::f_005899ac, 0x4010);  // pushes {r4, lr} first, as the original

// f_005899e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005899e0 {

struct __attribute__((packed)) Local_005899e0_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005899e0_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_005899e0_ea_2, word_4, 0x4);

inline constexpr u32 global_0094e4a9_address = 0x0094e4a9u;
inline guest::global<u32, 0x00845580> global_00845580;
inline guest::global<u32, 0x00845584> global_00845584;
inline guest::global<u8, 0x0094e4a9> global_0094e4a9;
inline guest::global<u8, 0x0094e4aa> global_0094e4aa;
inline constexpr guest::Function<0x00584074, u32(u32, u32, u32, u32)> return_constant_0x989bd8_;
inline constexpr guest::Function<0x0058aee8, u32(u32, u32, u32, u32)> BgmParamList__update_nodes;
inline constexpr guest::Function<0x0058bc7c, u32(u32, u32, u32, u32)> call_0058bc7c;

struct __attribute__((packed)) Frame_005899e0 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005899e0, word_0, 0x0);
GUEST_OFFSET(Frame_005899e0, word_4, 0x4);
GUEST_SIZE(Frame_005899e0, 0x10);

void f_005899e0(u32 r0_unused, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005899e0> frame;  // the original's stack frame
    u32 r1_1 = *global_0094e4a9;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return;
    }
    *global_0094e4aa = 0;
    u32 r0_1 = return_constant_0x989bd8_(global_0094e4a9_address, r1_1, r2, r3);
    frame->word_0 = *global_00845584;
    frame->word_4 = 0;
    u32 r0_2 = BgmParamList__update_nodes(r0_1, 1u, 0u, *global_00845580);
    u32 r0_3 = return_constant_0x989bd8_(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    frame->word_0 = 0;
    gptr<Local_005899e0_ea_2> ea_2 = gptr<Local_005899e0_ea_2>(frame.at(4).addr());
    ea_2->word_0 = ~0u;
    ea_2->word_4 = 0;
    call_0058bc7c(r0_3, 0x11u, 0u, 0x14u);  // (from the original)
}

}  // namespace d_005899e0
GUEST_EXPORT_FRAMED(0x005899e0, d_005899e0::f_005899e0, 0x4010);  // pushes {r4, lr} first, as the original

// f_00589a5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00589a5c {

inline constexpr u32 global_0094e4a9_address = 0x0094e4a9u;
inline guest::global<u32, 0x0084557c> global_0084557c;
inline guest::global<u8, 0x0094e4a9> global_0094e4a9;
inline guest::global<u8, 0x0094e4aa> global_0094e4aa;
inline constexpr guest::Function<0x00584074, u32(u32)> return_constant_0x989bd8_;
inline constexpr guest::Function<0x0058bc3c, u32(u32, u32, u32, u32)> call_0058bc3c;

void f_00589a5c() {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r1_1 = *global_0094e4a9;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return;
    }
    *global_0094e4aa = 1;
    u32 r0_1 = return_constant_0x989bd8_(global_0094e4a9_address);
    u32 r3_1 = *global_0084557c;
    frame.release();
    call_0058bc3c(r0_1, 1u, 0u, r3_1);
    return;
}

}  // namespace d_00589a5c
GUEST_EXPORT(0x00589a5c, d_00589a5c::f_00589a5c);

// f_00589ad4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00589ad4 {

inline guest::global<u8, 0x0094e4a9> global_0094e4a9;
inline guest::global<u8, 0x0094e4aa> global_0094e4aa;
inline constexpr guest::Function<0x00583b8c, u32(u32, u32)> call_00583b8c;

u32 f_00589ad4() {
    u32 r1_1 = s8(*global_0094e4a9);
    u32 r0_1 = s8(*global_0094e4aa);
    if ((r0_1 & r1_1) == 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r0_2 = call_00583b8c(r0_1, r1_1);
    return r0_2 != 0;
}

}  // namespace d_00589ad4
GUEST_EXPORT_FRAMED(0x00589ad4, d_00589ad4::f_00589ad4, 0x4010);  // pushes {r4, lr} first, as the original

// f_00589da8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00589da8 {

inline guest::global<u32, 0x0094d080> sound_system;
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> return_constant_0xad56b0_;
inline constexpr guest::Function<0x00309bd4, u32(u32, u32)> call_00309bd4;
inline constexpr guest::Function<0x003188f0, u32(u32, u32, u32, u32)> first_registered_id_of_class_0;
inline constexpr guest::Function<0x00342cb8, u32(u32, u32, u32, u32)> call_00342cb8;
inline constexpr guest::Function<0x0058383c, u32(u32, u32, u32, u32)> call_0058383c;
inline constexpr guest::Function<0x00589480, u32(u32, u32, u32, u32)> clock_in_range;
inline constexpr guest::Function<0x00589678, u32(u32, u32, u32, u32)> clock_byte_07;
inline constexpr guest::Function<0x00589698, u32(u32)> clock_byte_09;

u32 f_00589da8(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r4 = r0;
    u32 r0_1 = *gptr<u8>(r0 + 3u);
    u32 r5 = r1;
    u32 r6 = r2;
    if (r0_1 != 0 || r5 == 0) {
        goto L_589e30;
    }
    r0_2 = clock_byte_07(r0_1, r1, r2, r3);
    *gptr<u8>(r4) = u8(r0_2);
    r0_3 = clock_byte_09(r0_2);
    *gptr<u8>(r4 + 1u) = u8(r0_3);
    r0_4 = clock_in_range(0x3bu, 0x2du, 0u, 0u);  // (from the original)
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0_4 != 0) {
        u32 r0_5 = first_registered_id_of_class_0(r0_4, r1, guest::cpu()->r[2], r3);
        r1 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
        if (r0_5 != 7u) {
            r2 = 1u;
            goto L_589e20;
        }
        u32 r0_6 = return_constant_0xad56b0_(r0_5, r1, guest::cpu()->r[2], r3);
        u32 r0_7 = call_00309bd4(7u, r0_6);
        r1 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
        if (r0_7 == 0) {
            r2 = 1u;
            goto L_589e20;
        }
    }
    r2 = 0u;
L_589e20:;
    *gptr<u8>(r4 + 2u) = u8(r2);
    *gptr<u8>(r4 + 3u) = 0;
    *gptr<u8>(r4 + 4u) = 0;
L_589e30:;
    u32 res_1 = r5 | r6;
    u32 r0_8 = res_1;
    *gptr<u8>(r4 + 3u) = u8(r5);
    if (res_1 != 0) {
        guest::cpu()->r[1] = r1;
        return r0_8;
    }
    r0_8 = call_0058383c(r0_8, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0_8 == 0) {
        return r0_8;
    }
    u32 r0_9 = *sound_system + 0x6f8u;  // (from the original)
    frame.release();
    return call_00342cb8(r0_9, 0x14u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_00589da8
GUEST_EXPORT(0x00589da8, d_00589da8::f_00589da8);

// f_00589f74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00589f74 {

struct __attribute__((packed)) Object_00589f74_0 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Object_00589f74_0, word_10, 0x10);

struct __attribute__((packed)) Local_00589f74_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00589f74_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_00589f74_ea_2, word_4, 0x4);

inline constexpr guest::Function<0x00584074, u32(u32, u32, u32, u32)> return_constant_0x989bd8_;
inline constexpr guest::Function<0x00584134, u32(u32)> return_constant_0x98a030_;
inline constexpr guest::Function<0x0058bc7c, u32(u32, u32, u32, u32)> call_0058bc7c;
inline constexpr guest::Function<0x0058c514, u32(u32, u32)> FlagManager__request;

struct __attribute__((packed)) Frame_00589f74 {
    u32 word_0;
    u8 unknown_4[0x14];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00589f74, word_0, 0x0);
GUEST_SIZE(Frame_00589f74, 0x18);

void f_00589f74(gptr<Object_00589f74_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00589f74> frame;  // the original's stack frame
    u32 r0_1 = r1 == 0 ? 0x10000beu : 0x10000bfu;  // (from the original)
    arg0->word_10 = r0_1;
    u32 r0_2 = return_constant_0x989bd8_(r0_1, r1, r2, r3);
    u32 r1_1 = ~0u;
    frame->word_0 = r1_1;
    gptr<Local_00589f74_ea_2> ea_2 = gptr<Local_00589f74_ea_2>(frame.at(4).addr());
    ea_2->word_0 = r1_1;
    ea_2->word_4 = 0;
    u32 r0_3 = call_0058bc7c(r0_2, 6u, arg0->word_10, 5u);
    u32 r0_4 = return_constant_0x98a030_(r0_3);
    frame.release();
    FlagManager__request(r0_4, 0x15u);
    return;
}

}  // namespace d_00589f74
GUEST_EXPORT(0x00589f74, d_00589f74::f_00589f74);

// f_0058a018: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058a018 {

struct __attribute__((packed)) Local_0058a018_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0058a018_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_0058a018_ea_2, word_4, 0x4);

inline constexpr guest::Function<0x00584074, u32(u32, u32, u32, u32)> return_constant_0x989bd8_;
inline constexpr guest::Function<0x0058bc7c, u32(u32, u32, u32, u32)> call_0058bc7c;

struct __attribute__((packed)) Frame_0058a018 {
    u32 word_0;
    u8 unknown_4[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0058a018, word_0, 0x0);
GUEST_SIZE(Frame_0058a018, 0xc);

void f_0058a018(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0058a018> frame;  // the original's stack frame
    return_constant_0x989bd8_(guest::cpu()->r[0], r1, r2, r3);
    u32 r1_1 = ~0u;
    frame->word_0 = r1_1;
    gptr<Local_0058a018_ea_2> ea_2 = gptr<Local_0058a018_ea_2>(frame.at(4).addr());
    ea_2->word_0 = r1_1;
    ea_2->word_4 = 0;
    call_0058bc7c(guest::cpu()->r[0], 3u, 0x100009cu, 5u);  // (from the original)
}

}  // namespace d_0058a018
GUEST_EXPORT_FRAMED(0x0058a018, d_0058a018::f_0058a018, 0x4000);  // pushes {lr} first, as the original

// f_0058a1d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058a1d8 {

struct __attribute__((packed)) Object_0058a1d8_0 {
    u8 unknown_0[0x14];  // (not used here)
    u8 byte_14;
};
GUEST_OFFSET(Object_0058a1d8_0, byte_14, 0x14);

struct __attribute__((packed)) Local_0058a1d8_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0058a1d8_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_0058a1d8_ea_2, word_4, 0x4);

inline constexpr guest::Function<0x00584074, u32(u32, u32, u32, u32)> return_constant_0x989bd8_;
inline constexpr guest::Function<0x0058bc7c, u32(u32, u32, u32, u32)> call_0058bc7c;

struct __attribute__((packed)) Frame_0058a1d8 {
    u32 word_0;
    u8 unknown_4[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0058a1d8, word_0, 0x0);
GUEST_SIZE(Frame_0058a1d8, 0xc);

u32 f_0058a1d8(gptr<Object_0058a1d8_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0058a1d8> frame;  // the original's stack frame
    u32 r0_1 = return_constant_0x989bd8_(arg0.addr(), r1, r2, r3);
    u32 r1_1 = ~0u;
    frame->word_0 = r1_1;
    gptr<Local_0058a1d8_ea_2> ea_2 = gptr<Local_0058a1d8_ea_2>(frame.at(4).addr());
    ea_2->word_0 = r1_1;
    ea_2->word_4 = 0;
    u32 r0_2 = call_0058bc7c(r0_1, 3u, 0x100026au, 5u);  // (from the original)
    arg0->byte_14 = 0;
    return r0_2;
}

}  // namespace d_0058a1d8
GUEST_EXPORT_FRAMED(0x0058a1d8, d_0058a1d8::f_0058a1d8, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0058a294: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058a294 {

struct __attribute__((packed)) Object_0058a294_0 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Object_0058a294_0, word_10, 0x10);

inline constexpr guest::Function<0x00584074, u32(u32, u32, u32, u32)> return_constant_0x989bd8_;
inline constexpr guest::Function<0x0058bb2c, u32(u32, u32, u32)> call_0058bb2c;
inline constexpr guest::Function<0x0058bc7c, u32(u32, u32, u32, u32)> call_0058bc7c;

struct __attribute__((packed)) Frame_0058a294 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0058a294, word_0, 0x0);
GUEST_OFFSET(Frame_0058a294, word_4, 0x4);
GUEST_OFFSET(Frame_0058a294, word_8, 0x8);
GUEST_SIZE(Frame_0058a294, 0x10);

void f_0058a294(gptr<Object_0058a294_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0058a294> frame;  // the original's stack frame
    u32 r0_1 = return_constant_0x989bd8_(arg0.addr(), r1, r2, r3);
    u32 r0_2 = call_0058bb2c(r0_1, 6u, arg0->word_10);
    u32 r0_3 = return_constant_0x989bd8_(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    frame->word_0 = 0;
    frame->word_4 = ~0u;
    frame->word_8 = 0;
    call_0058bc7c(r0_3, 6u, arg0->word_10, 5u);
}

}  // namespace d_0058a294
GUEST_EXPORT_FRAMED(0x0058a294, d_0058a294::f_0058a294, 0x4010);  // pushes {r4, lr} first, as the original

// f_0058a3c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058a3c4 {

struct __attribute__((packed)) Local_0058a3c4_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0058a3c4_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_0058a3c4_ea_2, word_4, 0x4);

inline constexpr guest::Function<0x00584074, u32(u32, u32, u32, u32)> return_constant_0x989bd8_;
inline constexpr guest::Function<0x0058bc7c, u32(u32, u32, u32, u32)> call_0058bc7c;

struct __attribute__((packed)) Frame_0058a3c4 {
    u32 word_0;
    u8 unknown_4[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0058a3c4, word_0, 0x0);
GUEST_SIZE(Frame_0058a3c4, 0xc);

u32 f_0058a3c4(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0058a3c4> frame;  // the original's stack frame
    return_constant_0x989bd8_(guest::cpu()->r[0], r1, r2, r3);
    u32 r1_1 = ~0u;
    frame->word_0 = r1_1;
    gptr<Local_0058a3c4_ea_2> ea_2 = gptr<Local_0058a3c4_ea_2>(frame.at(4).addr());
    ea_2->word_0 = r1_1;
    ea_2->word_4 = 0;
    call_0058bc7c(guest::cpu()->r[0], 2u, 0x100009eu, 5u);  // (from the original)
    return guest::cpu()->r[0];
}

}  // namespace d_0058a3c4
GUEST_EXPORT_FRAMED(0x0058a3c4, d_0058a3c4::f_0058a3c4, 0x4000);  // pushes {lr} first, as the original

// f_0058a400: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058a400 {

inline constexpr guest::Function<0x00584074, u32(u32)> return_constant_0x989bd8_;
inline constexpr guest::Function<0x0058bc3c, u32(u32, u32, u32, u32)> call_0058bc3c;

void f_0058a400(u32 r0_unused, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    return_constant_0x989bd8_(guest::cpu()->r[0]);
    frame.release();
    call_0058bc3c(guest::cpu()->r[0], 3u, 0x100009cu, r1);
    return;  // (from the original)
}

}  // namespace d_0058a400
GUEST_EXPORT(0x0058a400, d_0058a400::f_0058a400);

// f_0058a56c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058a56c {

struct __attribute__((packed)) Object_0058a56c_0 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Object_0058a56c_0, word_10, 0x10);

inline constexpr guest::Function<0x00584074, u32(u32)> return_constant_0x989bd8_;
inline constexpr guest::Function<0x00584134, u32(u32)> return_constant_0x98a030_;
inline constexpr guest::Function<0x0058aee8, u32(u32, u32, u32, u32)> BgmParamList__update_nodes;
inline constexpr guest::Function<0x0058c5f0, u32(u32, u32)> FlagManager__release;

struct __attribute__((packed)) Frame_0058a56c {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x10];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0058a56c, word_0, 0x0);
GUEST_OFFSET(Frame_0058a56c, word_4, 0x4);
GUEST_SIZE(Frame_0058a56c, 0x18);

void f_0058a56c(gptr<Object_0058a56c_0> arg0, u32 r1) {
    guest::StackFrameOf<Frame_0058a56c> frame;  // the original's stack frame
    u32 r0_1 = return_constant_0x989bd8_(arg0.addr());
    frame->word_4 = 0;
    frame->word_0 = r1;
    u32 r0_2 = BgmParamList__update_nodes(r0_1, 6u, arg0->word_10, 5u);
    u32 r0_3 = return_constant_0x98a030_(r0_2);
    frame.release();
    FlagManager__release(r0_3, 0x15u);
    return;
}

}  // namespace d_0058a56c
GUEST_EXPORT(0x0058a56c, d_0058a56c::f_0058a56c);

// f_0058a608: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058a608 {

struct __attribute__((packed)) Object_0058a608_0 {
    u8 unknown_0[0x14];  // (not used here)
    u8 byte_14;
};
GUEST_OFFSET(Object_0058a608_0, byte_14, 0x14);

inline constexpr guest::Function<0x00584074, u32(u32)> return_constant_0x989bd8_;
inline constexpr guest::Function<0x0058bc3c, u32(u32, u32, u32, u32)> call_0058bc3c;

void f_0058a608(gptr<Object_0058a608_0> arg0, u32 r1) {
    u32 r0_1 = return_constant_0x989bd8_(arg0.addr());
    call_0058bc3c(r0_1, 3u, 0x100026au, r1);  // (from the original)
    arg0->byte_14 = 1;
}

}  // namespace d_0058a608
GUEST_EXPORT_FRAMED(0x0058a608, d_0058a608::f_0058a608, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0058a72c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058a72c {

inline constexpr guest::Function<0x00584074, u32(u32)> return_constant_0x989bd8_;
inline constexpr guest::Function<0x0058bc3c, u32(u32, u32, u32, u32)> call_0058bc3c;

void f_0058a72c(u32 r0_unused, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    return_constant_0x989bd8_(guest::cpu()->r[0]);
    frame.release();
    call_0058bc3c(guest::cpu()->r[0], 2u, 0x100009eu, r1);
    return;  // (from the original)
}

}  // namespace d_0058a72c
GUEST_EXPORT(0x0058a72c, d_0058a72c::f_0058a72c);

// f_0058a7f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058a7f4 {

struct __attribute__((packed)) Object_0058a7f4_0 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Object_0058a7f4_0, word_10, 0x10);

inline constexpr guest::Function<0x00584074, u32(u32)> return_constant_0x989bd8_;
inline constexpr guest::Function<0x0058bc3c, u32(u32, u32, u32, u32)> call_0058bc3c;

void f_0058a7f4(gptr<Object_0058a7f4_0> arg0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = return_constant_0x989bd8_(arg0.addr());
    u32 r2_1 = arg0->word_10;
    frame.release();
    call_0058bc3c(r0_1, 6u, r2_1, 0u);
    return;
}

}  // namespace d_0058a7f4
GUEST_EXPORT(0x0058a7f4, d_0058a7f4::f_0058a7f4);

// f_0058a880: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058a880 {

struct __attribute__((packed)) Object_0058a880_0 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Object_0058a880_0, word_10, 0x10);

inline constexpr guest::Function<0x00584074, u32(u32, u32, u32, u32)> return_constant_0x989bd8_;
inline constexpr guest::Function<0x0058bb2c, u32(u32, u32, u32)> call_0058bb2c;

void f_0058a880(gptr<Object_0058a880_0> arg0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = return_constant_0x989bd8_(arg0.addr(), r1, r2, guest::cpu()->r[3]);
    u32 r2_1 = arg0->word_10;
    frame.release();
    call_0058bb2c(r0_1, 6u, r2_1);
    return;
}

}  // namespace d_0058a880
GUEST_EXPORT(0x0058a880, d_0058a880::f_0058a880);

// f_0058a96c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058a96c {

struct __attribute__((packed)) Object_0058a96c_0 {
    u8 unknown_0[0x1];  // (not used here)
    u8 byte_1;
    u8 unknown_2[0x2];  // (not used here)
    u32 word_4;
    u8 unknown_8[0x4];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_0058a96c_0, byte_1, 0x1);
GUEST_OFFSET(Object_0058a96c_0, word_4, 0x4);
GUEST_OFFSET(Object_0058a96c_0, word_c, 0xc);

struct __attribute__((packed)) Local_0058a96c_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0058a96c_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_0058a96c_ea_2, word_4, 0x4);

inline constexpr guest::Function<0x00584074, u32(u32, u32, u32, u32)> return_constant_0x989bd8_;
inline constexpr guest::Function<0x0058aee8, u32(u32, u32, u32, u32)> BgmParamList__update_nodes;
inline constexpr guest::Function<0x0058b618, u32(u32, u32, u32, u32)> call_0058b618;
inline constexpr guest::Function<0x0058d3b4, u32(u32)> call_0058d3b4;
inline constexpr guest::Function<0x0060be28, u32(u32)> notify_request;

struct __attribute__((packed)) Frame_0058a96c {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x8];  // (not read or written by name)
    u32 word_10;
    u8 unknown_14[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0058a96c, word_0, 0x0);
GUEST_OFFSET(Frame_0058a96c, word_4, 0x4);
GUEST_OFFSET(Frame_0058a96c, word_10, 0x10);
GUEST_SIZE(Frame_0058a96c, 0x18);

u32 f_0058a96c(gptr<Object_0058a96c_0> arg0, u32 r1, u32 r2, u32 r3, float S0) {
    guest::StackFrameOf<Frame_0058a96c> frame;  // the original's stack frame
    u32 r0_1 = return_constant_0x989bd8_(arg0.addr(), r1, r2, r3);
    frame->word_0 = 0;
    frame->word_4 = 0;
    BgmParamList__update_nodes(r0_1, 0x13u, gptr<u32>((arg0->word_4 << 4) + 0x8458dcu)[arg0->word_c], 5u);  // (from the original)
    arg0->word_c = arg0->word_c + 2u;
    notify_request(0x1cu);  // (from the original)
    float S0_3 = 0.0f;
    guest::cpu()->s[0] = S0_3;
    u32 r0_2 = call_0058d3b4(0x10004b1u);  // (from the original)
    u32 r0_3 = return_constant_0x989bd8_(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    frame->word_4 = 0;
    gptr<Local_0058a96c_ea_2> ea_2 = gptr<Local_0058a96c_ea_2>(frame.at(8).addr());
    ea_2->word_0 = ~0u;
    ea_2->word_4 = 0;
    frame->word_0 = 5;
    frame->word_10 = 0;
    call_0058b618(r0_3, 0x14u, gptr<u32>((arg0->word_4 << 4) + 0x8458dcu)[arg0->word_c], 0x12u);  // (from the original)
    arg0->byte_1 = 1;
    return 1u;
}

}  // namespace d_0058a96c
GUEST_EXPORT_FRAMED(0x0058a96c, d_0058a96c::f_0058a96c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0058aa20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058aa20 {

inline constexpr guest::Function<0x00584074, u32(u32, u32, u32, u32)> return_constant_0x989bd8_;
inline constexpr guest::Function<0x0058bb2c, u32(u32, u32, u32)> call_0058bb2c;

u32 f_0058aa20(u32 r0_unused, u32 r1, u32 r2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    return_constant_0x989bd8_(guest::cpu()->r[0], r1, r2, guest::cpu()->r[3]);
    frame.release();
    return call_0058bb2c(guest::cpu()->r[0], 5u, 0u);
}

}  // namespace d_0058aa20
GUEST_EXPORT(0x0058aa20, d_0058aa20::f_0058aa20);

// f_0058ad84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058ad84 {

inline constexpr u32 global_00989bc0_address = 0x00989bc0u;
inline constexpr u32 global_00989bd8_address = 0x00989bd8u;
inline constexpr u32 global_0098a018_address = 0x0098a018u;
inline constexpr u32 global_0098a030_address = 0x0098a030u;
inline guest::global<u8, 0x0094e485> global_0094e485;
inline constexpr guest::Function<0x005852f4, u32(u32)> call_005852f4;
inline constexpr guest::Function<0x00589534, u32(u32, u32, u32, u32)> update_tick_flags;
inline constexpr guest::Function<0x0058b764, u32(u32)> call_0058b764;
inline constexpr guest::Function<0x0058c90c, u32(u32)> call_0058c90c;
inline constexpr guest::Function<0x005c5df8, u32(u32, u32, u32, u32)> call_005c5df8;

u32 f_0058ad84() {
    u32 r0_1 = *global_0094e485;
    if (r0_1 == 0) {
        r0_1 = call_005c5df8(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        *global_0094e485 = u8(r0_1);
    }
    update_tick_flags(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_0058b764(global_00989bd8_address);
    call_005852f4(global_0098a018_address);
    call_0058c90c(global_0098a030_address);
    return global_00989bc0_address;
}

}  // namespace d_0058ad84
GUEST_EXPORT_FRAMED(0x0058ad84, d_0058ad84::f_0058ad84, 0x4010);  // pushes {r4, lr} first, as the original

// f_0058aea0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058aea0 {

struct __attribute__((packed)) Object_0058aea0_0 {
    u8 unknown_0[0x414];  // (not used here)
    u32 word_414;
};
GUEST_OFFSET(Object_0058aea0_0, word_414, 0x414);


u32 f_0058aea0(gptr<Object_0058aea0_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    r0 = arg0->word_414;
    u32 r3 = 1u;
L_58aeac:;
    if (r0 == 0) {
        return r0;
    }
    u32 r4_1 = *gptr<u8>(r0 + 4u);
    u32 zf_1 = r4_1 == r1;
    if (r4_1 >= r1 && !zf_1) {
        return r0;
    }
    if (zf_1) {
        zf_1 = *gptr<u32>(r0 + 8u) == r2;
    }
    if (!zf_1) {
        r0 = *gptr<u32>(r0);
        guest::preempt();
        goto L_58aeac;
    }
    if (r0 != 0) {
        *gptr<u8>(r0 + 0x1fu) = u8(r3);  // (from the original)
        r0 = *gptr<u32>(r0);
        guest::preempt();
        goto L_58aeac;
    }
    return r0;
}

}  // namespace d_0058aea0
GUEST_EXPORT_FRAMED(0x0058aea0, d_0058aea0::f_0058aea0, 0x10);  // pushes {r4} first, as the original

// f_0058b06c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058b06c {

struct __attribute__((packed)) Local_0058b06c_r2_1 {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
    u8 unknown_5[0x23];  // (not used here)
    u8 byte_28;
};
GUEST_OFFSET(Local_0058b06c_r2_1, byte_4, 0x4);
GUEST_OFFSET(Local_0058b06c_r2_1, byte_28, 0x28);


u32 f_0058b06c(gptr<audio__bgm__OpusBase> opus_base) {
    u32 r0 = opus_base.addr();
    u32 r1 = 0;
    u32 r1_1 = opus_base->byte_4;
    if (r1_1 == 0x1du) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0;
    } else {
        r1 = 1u;
    }
    do {
        gptr<Local_0058b06c_r2_1> r2_1 = gptr<Local_0058b06c_r2_1>(r0 + r1 * 0x24u);  // (from the original)
        if (r2_1->byte_4 == 0x1du) {  // (from the original)
            u32 r1_2 = r1 * 9u;
            guest::cpu()->r[1] = r1_2;
            return r0 + (r1_2 << 2);
        }
        if (r2_1->byte_28 == 0x1du) {  // (from the original)
            u32 r1_3 = r1 * 9u;
            guest::cpu()->r[1] = r1_3;
            return r0 + (r1_3 << 2) + 0x24u;  // (from the original)
        }
        r1 += 2u;
        guest::preempt();
    } while (s32(r1) < 0x1d);  // (from the original)
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_0058b06c
GUEST_EXPORT(0x0058b06c, d_0058b06c::f_0058b06c);

// f_0058b27c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058b27c {

inline constexpr guest::Function<0x0058b280, u32(u32, u32, u32, u32)> call_0058b280;

void f_0058b27c(u32 r0) {
    call_0058b280(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0058b27c
GUEST_EXPORT(0x0058b27c, d_0058b27c::f_0058b27c);

// f_0058b618: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058b618 {

struct __attribute__((packed)) Local_0058b618_r1_1 {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
};
GUEST_OFFSET(Local_0058b618_r1_1, float_0, 0x0);
GUEST_OFFSET(Local_0058b618_r1_1, float_4, 0x4);
GUEST_OFFSET(Local_0058b618_r1_1, float_8, 0x8);
GUEST_OFFSET(Local_0058b618_r1_1, float_c, 0xc);

struct __attribute__((packed)) Local_0058b618_r1_2 {
    u32 word_0;
    u8 byte_4;
    u8 unknown_5[0x3];  // (not used here)
    u32 word_8;
    u8 unknown_c[0x8];  // (not used here)
    float float_14;
    float float_18;
    u8 byte_1c;
    u8 unknown_1d[0x1];  // (not used here)
    u8 byte_1e;
    u8 byte_1f;
    u8 byte_20;
    u8 byte_21;
    u8 byte_22;
    u8 byte_23;
};
GUEST_OFFSET(Local_0058b618_r1_2, word_0, 0x0);
GUEST_OFFSET(Local_0058b618_r1_2, byte_4, 0x4);
GUEST_OFFSET(Local_0058b618_r1_2, word_8, 0x8);
GUEST_OFFSET(Local_0058b618_r1_2, float_14, 0x14);
GUEST_OFFSET(Local_0058b618_r1_2, float_18, 0x18);
GUEST_OFFSET(Local_0058b618_r1_2, byte_1c, 0x1c);
GUEST_OFFSET(Local_0058b618_r1_2, byte_1e, 0x1e);
GUEST_OFFSET(Local_0058b618_r1_2, byte_1f, 0x1f);
GUEST_OFFSET(Local_0058b618_r1_2, byte_20, 0x20);
GUEST_OFFSET(Local_0058b618_r1_2, byte_21, 0x21);
GUEST_OFFSET(Local_0058b618_r1_2, byte_22, 0x22);
GUEST_OFFSET(Local_0058b618_r1_2, byte_23, 0x23);

struct __attribute__((packed)) Local_0058b618_r2_1 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_0058b618_r2_1, float_0, 0x0);
GUEST_OFFSET(Local_0058b618_r2_1, float_4, 0x4);

inline constexpr guest::Function<0x0058af50, u32(u32, u32)> BgmParamList__insert;
inline constexpr guest::Function<0x0058b06c, u32(u32, u32, u32, u32)> call_0058b06c;

u32 f_0058b618(u32 r0, u32 r1, u32 r2, u32 r3) {
    gptr<Local_0058b618_r1_1> r1_1 = gptr<Local_0058b618_r1_1>(guest::cpu()->r[13] + 0x18u);  // (from the original)
    u32 r7_1 = *gptr<u32>(guest::cpu()->r[13] + 0x28u);  // (from the original)
    float S0_1 = r1_1->float_0;
    float S1_1 = r1_1->float_4;
    float S2_1 = r1_1->float_8;
    float S3_1 = r1_1->float_c;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    guest::cpu()->s[3] = S3_1;
    u32 r0_1 = call_0058b06c(r0, r1_1.addr(), r2, r3);
    float S0_2 = guest::cpu()->s[0];
    float S1_2 = guest::cpu()->s[1];
    float S2_2 = guest::cpu()->s[2];
    float S3_2 = guest::cpu()->s[3];
    gptr<Local_0058b618_r1_2> r1_2 = gptr<Local_0058b618_r1_2>(r0_1);
    if (r0_1 != 0) {
        r1_2->word_0 = 0;
        r1_2->byte_1c = 0;
        r1_2->byte_1f = 0;
        r1_2->byte_22 = 0;
        r1_2->byte_4 = u8(r1);
        r1_2->word_8 = r2;
        r1_2->float_14 = S0_2;
        r1_2->float_18 = S3_2;
        gptr<Local_0058b618_r2_1> r2_1 = gptr<Local_0058b618_r2_1>(r1_2.addr() + 0xcu);  // (from the original)
        r2_1->float_0 = S1_2;
        r2_1->float_4 = S2_2;
        r1_2->byte_23 = u8(r3);
        r1_2->byte_21 = u8(r7_1);
        r1_2->byte_20 = 1;
        r1_2->byte_1e = 0;
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_2;
        BgmParamList__insert(r0, r1_2.addr());
        r1_2 = gptr<Local_0058b618_r1_2>(guest::cpu()->r[1]);
        S0_2 = guest::cpu()->s[0];
        S1_2 = guest::cpu()->s[1];
        r0_1 = 1u;
    }
    guest::cpu()->r[1] = r1_2.addr();
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    return r0_1;
}

}  // namespace d_0058b618
GUEST_EXPORT_FRAMED(0x0058b618, d_0058b618::f_0058b618, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0058b694: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058b694 {

struct __attribute__((packed)) Object_0058b694_0 {
    u8 unknown_0[0x414];  // (not used here)
    u32 word_414;
};
GUEST_OFFSET(Object_0058b694_0, word_414, 0x414);


u32 f_0058b694(gptr<Object_0058b694_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    r0 = arg0->word_414;
    u32 r4 = 1u;
L_58b6e0:;
    if (r0 == 0) {
        return r0;
    }
    u32 r3_1 = *gptr<u8>(r0 + 4u);
    if (r3_1 > r1) {
        return r0;
    }
    if (*gptr<u8>(r0 + 0x20u) != 0 && r3_1 == r1 && *gptr<u8>(r0 + 0x23u) == r2) {  // (from the original)
        if (r0 != 0) {
            *gptr<u8>(r0 + 0x1fu) = u8(r4);  // (from the original)
            r0 = *gptr<u32>(r0);
            guest::preempt();
            goto L_58b6e0;
        }
        return r0;
    }
    r0 = *gptr<u32>(r0);
    guest::preempt();
    goto L_58b6e0;
}

}  // namespace d_0058b694
GUEST_EXPORT_FRAMED(0x0058b694, d_0058b694::f_0058b694, 0x10);  // pushes {r4} first, as the original

// f_0058b6fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058b6fc {

struct __attribute__((packed)) Local_0058b6fc_r1_1 {
    u32 word_0;
    u8 byte_4;
    u8 unknown_5[0x3];  // (not used here)
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u8 unknown_14[0x8];  // (not used here)
    u8 byte_1c;
    u8 unknown_1d[0x2];  // (not used here)
    u8 byte_1f;
    u8 byte_20;
    u8 byte_21;
    u8 byte_22;
};
GUEST_OFFSET(Local_0058b6fc_r1_1, word_0, 0x0);
GUEST_OFFSET(Local_0058b6fc_r1_1, byte_4, 0x4);
GUEST_OFFSET(Local_0058b6fc_r1_1, word_8, 0x8);
GUEST_OFFSET(Local_0058b6fc_r1_1, word_c, 0xc);
GUEST_OFFSET(Local_0058b6fc_r1_1, word_10, 0x10);
GUEST_OFFSET(Local_0058b6fc_r1_1, byte_1c, 0x1c);
GUEST_OFFSET(Local_0058b6fc_r1_1, byte_1f, 0x1f);
GUEST_OFFSET(Local_0058b6fc_r1_1, byte_20, 0x20);
GUEST_OFFSET(Local_0058b6fc_r1_1, byte_21, 0x21);
GUEST_OFFSET(Local_0058b6fc_r1_1, byte_22, 0x22);

inline constexpr guest::Function<0x00583640, u32(u32)> call_00583640;
inline constexpr guest::Function<0x0058af50, u32(u32, u32)> BgmParamList__insert;
inline constexpr guest::Function<0x0058b06c, u32(u32)> call_0058b06c;

u32 f_0058b6fc(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = call_0058b06c(r0);
    gptr<Local_0058b6fc_r1_1> r1_1 = gptr<Local_0058b6fc_r1_1>(r0_1);
    if (r0_1 != 0) {
        r1_1->word_0 = 0;
        r1_1->byte_1c = 0;
        r1_1->byte_1f = 0;
        r1_1->byte_20 = 0;
        r1_1->byte_21 = 0;
        r1_1->byte_22 = 0;
        r1_1->word_c = r2;
        r1_1->byte_4 = 0x1b;  // (from the original)
        r1_1->word_10 = ~0u;
        r1_1->word_8 = r1;
        BgmParamList__insert(r0, r1_1.addr());
        call_00583640(r1);
        r1_1 = gptr<Local_0058b6fc_r1_1>(guest::cpu()->r[1]);
        r0_1 = 1u;
    }
    guest::cpu()->r[1] = r1_1.addr();
    return r0_1;
}

}  // namespace d_0058b6fc
GUEST_EXPORT_FRAMED(0x0058b6fc, d_0058b6fc::f_0058b6fc, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0058bb2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058bb2c {

struct __attribute__((packed)) Local_0058bb2c_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0058bb2c_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_0058bb2c_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_0058bb2c_r4_1 {
    u32 word_0;
    u8 byte_4;
    u8 unknown_5[0xb];  // (not used here)
    u32 word_10;
    u8 unknown_14[0x1];  // (not used here)
    u8 byte_15;
    u8 unknown_16[0x6];  // (not used here)
    u8 byte_1c;
    u8 byte_1d;
    u8 byte_1e;
};
GUEST_OFFSET(Local_0058bb2c_r4_1, word_0, 0x0);
GUEST_OFFSET(Local_0058bb2c_r4_1, byte_4, 0x4);
GUEST_OFFSET(Local_0058bb2c_r4_1, word_10, 0x10);
GUEST_OFFSET(Local_0058bb2c_r4_1, byte_15, 0x15);
GUEST_OFFSET(Local_0058bb2c_r4_1, byte_1c, 0x1c);
GUEST_OFFSET(Local_0058bb2c_r4_1, byte_1d, 0x1d);
GUEST_OFFSET(Local_0058bb2c_r4_1, byte_1e, 0x1e);

inline constexpr guest::Function<0x00584134, u32(u32)> return_constant_0x98a030_;
inline constexpr guest::Function<0x0058acfc, u32(u32, u32, u32, u32)> call_0058acfc;
inline constexpr guest::Function<0x0058c5f0, u32(u32, u32)> FlagManager__release;

u32 f_0058bb2c(gptr<audio__bgm__OpusBase> opus_base, u32 r1, u32 r2) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r0 = opus_base.addr();
    u32 r4 = 0u;
    u32 r5 = r4;
    u32 r3 = opus_base->word_414;
    u32 r6 = r4;
L_58bb40:;
    u32 r12 = r1;
L_58bb44:;
    if (r3 != 0) {
        u32 r7_1 = *gptr<u8>(r3 + 4u);
        u32 zf_1 = r7_1 == r12;
        if (r7_1 < r12 || zf_1) {
            if (zf_1) {
                zf_1 = *gptr<u32>(r3 + 8u) == r2;
            }
            if (!zf_1) {
                r3 = *gptr<u32>(r3);
                guest::preempt();
                goto L_58bb44;
            }
            if (r3 != 0) {
                *gptr<u32>(r3 + 0x10u) = r6;  // (from the original)
                gptr<Local_0058bb2c_ea_2> ea_2 = gptr<Local_0058bb2c_ea_2>(r3 + 0x14u);  // (from the original)
                ea_2->word_0 = r4;
                ea_2->word_4 = r5;
                *gptr<u8>(r3 + 0x1fu) = 1;  // (from the original)
                r3 = *gptr<u32>(r3);
                guest::preempt();
                goto L_58bb40;
            }
        }
    }
    gptr<Local_0058bb2c_r4_1> r4_1 = gptr<Local_0058bb2c_r4_1>(r0 + 0x41cu);  // (from the original)
    if (*gptr<u8>(r0 + 0x428u) == r12 && r4_1->byte_4 != 1u) {  // (from the original)
        call_0058acfc(r4_1.addr(), 0u, 0u, r3);
        r1 = guest::cpu()->r[1];
        r4_1->word_0 = 0;
        r4_1->byte_4 = 8;
    }
    if (r4_1->word_10 == r12) {
        r4_1->byte_15 = 0;
    }
    u32 r0_1 = r4_1->byte_1c;
    if (r0_1 == r12) {
        r0_1 = r4_1->byte_1d;
        if (r0_1 != 0) {
            u32 r0_2 = call_0058acfc(r4_1.addr(), 0u, 1u, r3);
            r4_1->byte_1d = 0;
            u32 r0_3 = return_constant_0x98a030_(r0_2);
            u32 r1_1 = r4_1->byte_1e;
            frame.release();
            return FlagManager__release(r0_3, r1_1);
        }
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_0058bb2c
GUEST_EXPORT(0x0058bb2c, d_0058bb2c::f_0058bb2c);

// f_0058bc3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058bc3c {


u32 f_0058bc3c(gptr<AcNpcSpResetsan> ac_npc_sp_resetsan, u32 r1, u32 r2, u32 r3) {
    u32 r0 = ac_npc_sp_resetsan.addr();
    r0 = ac_npc_sp_resetsan->word_414;
    if (r0 == 0) {
        return r0;
    }
    do {
        u32 r12_1 = *gptr<u8>(r0 + 4u);
        u32 zf_1 = r12_1 == r1;
        u32 cf_1 = r12_1 >= r1;
        if (zf_1) {
            u32 r4_1 = *gptr<u32>(r0 + 8u);
            zf_1 = r4_1 == r2;
            cf_1 = r4_1 >= r2;
        }
        if (zf_1) {
            *gptr<u32>(r0 + 0xcu) = r3;  // (from the original)
        } else {
            zf_1 = r12_1 == r1;
            cf_1 = r12_1 >= r1;
        }
        if (cf_1 && !zf_1) {
            return r0;
        }
        r0 = *gptr<u32>(r0);
        guest::preempt();
    } while (r0 != 0);
    return r0;
}

}  // namespace d_0058bc3c
GUEST_EXPORT_FRAMED(0x0058bc3c, d_0058bc3c::f_0058bc3c, 0x10);  // pushes {r4} first, as the original

// f_0058bc7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058bc7c {

struct __attribute__((packed)) Local_0058bc7c_r0_1 {
    u32 word_0;
    u8 byte_4;
    u8 unknown_5[0x3];  // (not used here)
    u32 word_8;
    u8 unknown_c[0x8];  // (not used here)
    u32 word_14;
    float float_18;
    u8 byte_1c;
    u8 unknown_1d[0x1];  // (not used here)
    u8 byte_1e;
    u8 byte_1f;
    u8 byte_20;
    u8 byte_21;
    u8 byte_22;
    u8 byte_23;
};
GUEST_OFFSET(Local_0058bc7c_r0_1, word_0, 0x0);
GUEST_OFFSET(Local_0058bc7c_r0_1, byte_4, 0x4);
GUEST_OFFSET(Local_0058bc7c_r0_1, word_8, 0x8);
GUEST_OFFSET(Local_0058bc7c_r0_1, word_14, 0x14);
GUEST_OFFSET(Local_0058bc7c_r0_1, float_18, 0x18);
GUEST_OFFSET(Local_0058bc7c_r0_1, byte_1c, 0x1c);
GUEST_OFFSET(Local_0058bc7c_r0_1, byte_1e, 0x1e);
GUEST_OFFSET(Local_0058bc7c_r0_1, byte_1f, 0x1f);
GUEST_OFFSET(Local_0058bc7c_r0_1, byte_20, 0x20);
GUEST_OFFSET(Local_0058bc7c_r0_1, byte_21, 0x21);
GUEST_OFFSET(Local_0058bc7c_r0_1, byte_22, 0x22);
GUEST_OFFSET(Local_0058bc7c_r0_1, byte_23, 0x23);

struct __attribute__((packed)) Local_0058bc7c_r1_1 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_0058bc7c_r1_1, float_0, 0x0);
GUEST_OFFSET(Local_0058bc7c_r1_1, float_4, 0x4);
GUEST_OFFSET(Local_0058bc7c_r1_1, float_8, 0x8);

struct __attribute__((packed)) Local_0058bc7c_r1_3 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_0058bc7c_r1_3, float_0, 0x0);
GUEST_OFFSET(Local_0058bc7c_r1_3, float_4, 0x4);

inline constexpr guest::Function<0x00582de4, u32(u32)> call_00582de4;
inline constexpr guest::Function<0x00583640, u32(u32)> call_00583640;
inline constexpr guest::Function<0x00583658, u32(u32)> call_00583658;
inline constexpr guest::Function<0x0058af50, u32(u32, u32)> BgmParamList__insert;
inline constexpr guest::Function<0x0058b06c, u32(u32, u32, u32, u32)> call_0058b06c;

u32 f_0058bc7c(u32 r0, u32 r1, u32 r2, u32 r3) {
    gptr<Local_0058bc7c_r1_1> r1_1 = gptr<Local_0058bc7c_r1_1>(guest::cpu()->r[13] + 0x20u);  // (from the original)
    float S0_1 = r1_1->float_0;
    float S1_1 = r1_1->float_4;
    float S2_1 = r1_1->float_8;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    gptr<Local_0058bc7c_r0_1> r0_1 = gptr<Local_0058bc7c_r0_1>(call_0058b06c(r0, r1_1.addr(), r2, r3));
    float S0_2 = guest::cpu()->s[0];
    float S1_2 = guest::cpu()->s[1];
    float S2_2 = guest::cpu()->s[2];
    if (r0_1.addr() != 0) {
        r0_1->word_0 = 0;
        r0_1->byte_1c = 0;
        r0_1->byte_1f = 0;
        r0_1->byte_20 = 0;
        r0_1->byte_21 = 0;
        r0_1->byte_22 = 0;
        r0_1->byte_4 = u8(r1);
        r0_1->word_8 = r2;
        r0_1->word_14 = r3;
        r0_1->float_18 = S2_2;
        gptr<Local_0058bc7c_r1_3> r1_3 = gptr<Local_0058bc7c_r1_3>(r0_1.addr() + 0xcu);  // (from the original)
        r1_3->float_0 = S0_2;
        r1_3->float_4 = S1_2;
        r0_1->byte_1e = 0;
        r0_1->byte_23 = 0x32;  // (from the original)
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_2;
        guest::cpu()->s[2] = S2_2;
        BgmParamList__insert(r0, r0_1.addr());
        S0_2 = guest::cpu()->s[0];
        S1_2 = guest::cpu()->s[1];
        u32 zf_1 = r1 == 3u || r1 == 2u;
        if (!zf_1) {
            zf_1 = r1 == 4u;
        }
        r0_1->byte_22 = 1;
        if (zf_1) {
            call_00583640(r2);
            S0_2 = guest::cpu()->s[0];
            S1_2 = guest::cpu()->s[1];
        } else if (r1 == 1u) {
            guest::cpu()->s[0] = S0_2;
            guest::cpu()->s[1] = S1_2;
            call_00583658(1u);
            S0_2 = guest::cpu()->s[0];
            S1_2 = guest::cpu()->s[1];
        } else if (r1 == 0x18u) {  // (from the original)
            guest::cpu()->s[0] = S0_2;
            guest::cpu()->s[1] = S1_2;
            call_00582de4(r2);
            S0_2 = guest::cpu()->s[0];
            S1_2 = guest::cpu()->s[1];
        } else {
            r0_1->byte_22 = 0;
        }
        r0_1 = gptr<Local_0058bc7c_r0_1>(1u);
    }
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    return r0_1.addr();
}

}  // namespace d_0058bc7c
GUEST_EXPORT_FRAMED(0x0058bc7c, d_0058bc7c::f_0058bc7c, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0058be00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058be00 {

struct __attribute__((packed)) Local_0058be00_ea_3 {
    u32 word_0;
    u8 byte_4;
    u8 unknown_5[0x10];  // (not used here)
    u8 byte_15;
    u8 unknown_16[0x7];  // (not used here)
    u8 byte_1d;
};
GUEST_OFFSET(Local_0058be00_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_0058be00_ea_3, byte_4, 0x4);
GUEST_OFFSET(Local_0058be00_ea_3, byte_15, 0x15);
GUEST_OFFSET(Local_0058be00_ea_3, byte_1d, 0x1d);

inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;

void f_0058be00(u32 r0) {
    u32 r0_1 = for_each_element(r0, 0x58c478u, 0x24u, 0x1du);  // (from the original)
    *gptr<u32>(r0_1 + 0x414u) = 0;  // (from the original)
    *gptr<u32>(r0_1 + 0x418u) = 0;  // (from the original)
    gptr<Local_0058be00_ea_3> ea_3 = gptr<Local_0058be00_ea_3>(r0_1 + 0x41cu);  // (from the original)
    ea_3->word_0 = 0;
    ea_3->byte_4 = 1;
    ea_3->byte_15 = 0;
    ea_3->byte_1d = 0;
    *gptr<u8>(r0_1 + 0x43cu) = 0;  // (from the original)
    guest::cpu()->r[1] = r0_1;
}

}  // namespace d_0058be00
GUEST_EXPORT_FRAMED(0x0058be00, d_0058be00::f_0058be00, 0x4010);  // pushes {r4, lr} first, as the original

// f_0058be48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058be48 {

struct __attribute__((packed)) Object_0058be48_0 {
    u8 unknown_0[0x13];  // (not used here)
    u8 byte_13;
    u8 byte_14;
    u8 byte_15;
    u8 unknown_16[0x46];  // (not used here)
    u8 byte_5c;
};
GUEST_OFFSET(Object_0058be48_0, byte_13, 0x13);
GUEST_OFFSET(Object_0058be48_0, byte_14, 0x14);
GUEST_OFFSET(Object_0058be48_0, byte_15, 0x15);
GUEST_OFFSET(Object_0058be48_0, byte_5c, 0x5c);

struct __attribute__((packed)) Local_0058be48_r0_2 {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
    u8 byte_5;
    u8 unknown_6[0x1];  // (not used here)
    u8 byte_7;
};
GUEST_OFFSET(Local_0058be48_r0_2, byte_4, 0x4);
GUEST_OFFSET(Local_0058be48_r0_2, byte_5, 0x5);
GUEST_OFFSET(Local_0058be48_r0_2, byte_7, 0x7);

inline guest::global<u8, 0x00950708> global_00950708;
inline guest::global<u8, 0x0095070d> global_0095070d;
inline constexpr guest::Function<0x00292d28, u32(u32)> call_00292d28;
inline constexpr guest::Function<0x002fb378, u32(u32)> return_constant_0xad56b0_;
inline constexpr guest::Function<0x00305f2c, u32(u32, u32, u32, u32)> read_global_object_byte;
inline constexpr guest::Function<0x00309bd4, u32(u32, u32)> call_00309bd4;
inline constexpr guest::Function<0x0030ba54, u32(u32)> first_registered_id_of_class_1;
inline constexpr guest::Function<0x003188f0, u32(u32)> first_registered_id_of_class_0;
inline constexpr guest::Function<0x0058e090, u32(u32, u32)> call_0058e090;

u32 f_0058be48(gptr<Object_0058be48_0> arg0, u32 r1) {
    u32 r0_5 = 0;
    u32 r0_1 = read_global_object_byte(arg0.addr(), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 != 3u) {
        gptr<Local_0058be48_r0_2> r0_2 = gptr<Local_0058be48_r0_2>(return_constant_0xad56b0_(r0_1));
        u32 r0_3 = first_registered_id_of_class_0(r0_2.addr());
        u32 r0_4 = call_00292d28(r0_3);
        if (r0_4 != 0) {
            r0_5 = arg0.addr();
        } else {
            if (arg0->byte_13 == 0 && (arg0->byte_14 == 0 || *global_00950708 != 1u || *global_0095070d != 0)) {
                u32 r0_6 = arg0->byte_15;
                if (r0_6 == 0) {
                    if (r0_3 == 7u) {
                        u32 r0_7 = return_constant_0xad56b0_(r0_6);
                        u32 r0_8 = call_00309bd4(7u, r0_7);
                        if (r0_8 != 0) {
                            return arg0.addr() + 0x20u;  // (from the original)
                        }
                    }
                    u32 r0_9 = r0_2->byte_4;
                    u32 zf_1 = r0_9 == 1u;
                    if (zf_1) {
                        r0_9 = r0_2->byte_5;
                        zf_1 = r0_9 == 1u;
                    }
                    if (zf_1) {
                        r0_9 = s8(r0_2->byte_7);
                        if (s32(r0_9) < 6) {
                            return arg0.addr() + 0x30u;  // (from the original)
                        }
                    }
                    u32 r0_10 = first_registered_id_of_class_1(r0_9);
                    if (r0_10 == 0xfu) {  // (from the original)
                        u32 r0_11 = return_constant_0xad56b0_(r0_10);
                        r0_10 = call_00309bd4(0xfu, r0_11);  // (from the original)
                        if (r0_10 != 0) {
                            return arg0.addr() + 0x40u;  // (from the original)
                        }
                    }
                    if (r0_3 != 8u) {
                        if (r0_3 == 2u) {
                            u32 r0_12 = return_constant_0xad56b0_(r0_10);
                            u32 r0_13 = call_00309bd4(2u, r0_12);
                            if (r0_13 != 0) {
                                return arg0.addr() + 0x48u;  // (from the original)
                            }
                            return 0u;
                        }
                        if (r0_3 == 5u) {
                            u32 r0_14 = arg0->byte_5c;
                            if (r0_14 == 0) {
                                u32 r0_15 = return_constant_0xad56b0_(r0_14);
                                u32 r0_16 = call_0058e090(5u, r0_15);
                                if (r0_16 == 0) {
                                    u32 r0_17 = return_constant_0xad56b0_(r0_16);
                                    u32 r0_18 = call_00309bd4(5u, r0_17);
                                    if (r0_18 == 0) {
                                        return 0u;
                                    }
                                }
                            }
                            return arg0.addr() + 0x50u;  // (from the original)
                        }
                        if (r0_3 == 4u) {
                            return arg0.addr() + 0x64u;  // (from the original)
                        }
                        if (r0_3 == 9u) {
                            return arg0.addr() + 0x6cu;  // (from the original)
                        }
                        if (r0_3 == 0xau) {  // (from the original)
                            return arg0.addr() + 0x78u;  // (from the original)
                        }
                        return 0u;
                    }
                    u32 r0_20 = return_constant_0xad56b0_(r0_10);
                    u32 r0_21 = call_00309bd4(8u, r0_20);
                    if (r0_21 != 0) {
                        return arg0.addr() + 0x18u;  // (from the original)
                    }
                    return 0u;
                }
            }
            r0_5 = arg0.addr() + 0xcu;  // (from the original)
        }
        return r0_5;
    }
    return 0u;
}

}  // namespace d_0058be48
GUEST_EXPORT_FRAMED(0x0058be48, d_0058be48::f_0058be48, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0058c08c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058c08c {

inline constexpr u32 vtable_audio__bgm__EvOpusHide = 0x009062f0u;
inline constexpr u32 vtable_audio__bgm__EvOpusEaster = 0x00906338u;
inline constexpr u32 vtable_audio__bgm__EvOpusHarvest = 0x00906380u;
inline constexpr u32 vtable_audio__bgm__EvOpusNewYear = 0x009063c8u;
inline constexpr u32 vtable_audio__bgm__EvOpusXmasEve = 0x00906410u;
inline constexpr u32 vtable_audio__bgm__EvOpusCarnival = 0x00906690u;
inline constexpr u32 vtable_audio__bgm__EvOpusCleaning = 0x009066d8u;
inline constexpr u32 vtable_audio__bgm__EvOpusCountdown = 0x009069b8u;
inline constexpr u32 vtable_audio__bgm__EvOpusFireworks = 0x00906a00u;
inline constexpr u32 vtable_audio__bgm__EvOpusHalloween = 0x00906a48u;
inline constexpr u32 vtable_audio__bgm__EvOpusNewYearNext = 0x00906ebcu;

void audio__bgm__EvOpusCleaning__EvOpusCleaning(gptr<audio__bgm__EvOpusCleaning> ev_opus_cleaning) {
    ev_opus_cleaning->byte_5 = 0;
    ev_opus_cleaning->byte_6 = 0;
    ev_opus_cleaning->word_0 = vtable_audio__bgm__EvOpusCleaning;
    ev_opus_cleaning->byte_7 = 0;
    ev_opus_cleaning->byte_8 = 0;
    ev_opus_cleaning->byte_11 = 0;
    ev_opus_cleaning->byte_12 = 0;
    ev_opus_cleaning->word_c = vtable_audio__bgm__EvOpusHide;
    ev_opus_cleaning->byte_13 = 0;
    ev_opus_cleaning->byte_14 = 0;
    ev_opus_cleaning->byte_15 = 0;
    ev_opus_cleaning->byte_17 = 0;
    ev_opus_cleaning->byte_1d = 0;
    ev_opus_cleaning->byte_1e = 0;
    ev_opus_cleaning->word_18 = vtable_audio__bgm__EvOpusFireworks;
    ev_opus_cleaning->byte_25 = 0;
    ev_opus_cleaning->byte_26 = 0;
    ev_opus_cleaning->word_20 = vtable_audio__bgm__EvOpusCountdown;
    ev_opus_cleaning->byte_35 = 0;
    ev_opus_cleaning->byte_36 = 0;
    ev_opus_cleaning->word_30 = vtable_audio__bgm__EvOpusNewYear;
    ev_opus_cleaning->byte_45 = 0;
    ev_opus_cleaning->byte_46 = 0;
    ev_opus_cleaning->word_40 = vtable_audio__bgm__EvOpusNewYearNext;
    ev_opus_cleaning->byte_4d = 0;
    ev_opus_cleaning->byte_4e = 0;
    ev_opus_cleaning->word_48 = vtable_audio__bgm__EvOpusHalloween;
    ev_opus_cleaning->byte_55 = 0;
    ev_opus_cleaning->byte_56 = 0;
    ev_opus_cleaning->word_58 = 0x100026d;  // (from the original)
    ev_opus_cleaning->word_50 = vtable_audio__bgm__EvOpusHarvest;
    ev_opus_cleaning->byte_5c = 0;
    ev_opus_cleaning->byte_69 = 0;
    ev_opus_cleaning->byte_6a = 0;
    ev_opus_cleaning->word_64 = vtable_audio__bgm__EvOpusXmasEve;
    ev_opus_cleaning->byte_71 = 0;
    ev_opus_cleaning->byte_72 = 0;
    ev_opus_cleaning->word_6c = vtable_audio__bgm__EvOpusCarnival;
    ev_opus_cleaning->byte_7d = 0;
    ev_opus_cleaning->byte_7e = 0;
    ev_opus_cleaning->word_78 = vtable_audio__bgm__EvOpusEaster;
}

}  // namespace d_0058c08c
GUEST_EXPORT(0x0058c08c, d_0058c08c::audio__bgm__EvOpusCleaning__EvOpusCleaning);

// f_0058c4cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058c4cc {

struct __attribute__((packed)) Object_0058c4cc_0 {
    u8 unknown_0[0x20];  // (not used here)
    u32 word_20;
    u32 word_24;
};
GUEST_OFFSET(Object_0058c4cc_0, word_20, 0x20);
GUEST_OFFSET(Object_0058c4cc_0, word_24, 0x24);

inline constexpr guest::Function<0x002faa30, u32(u32, u32, u32)> shift_left_64;

u32 f_0058c4cc(gptr<Object_0058c4cc_0> arg0, u32 r1) {
    u32 r5_1 = arg0->word_20;
    u32 r6_1 = arg0->word_24;
    u32 r0_1 = shift_left_64(1u, 0u, r1);
    u32 r0_2 = r0_1 | r5_1;
    u32 r1_2 = guest::cpu()->r[1] | r6_1;
    arg0->word_20 = r0_2;
    arg0->word_24 = r1_2;
    guest::cpu()->r[1] = r1_2;
    return r0_2;
}

}  // namespace d_0058c4cc
GUEST_EXPORT_FRAMED(0x0058c4cc, d_0058c4cc::f_0058c4cc, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0058c704: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058c704 {

struct __attribute__((packed)) Object_0058c704_0 {
    u8 unknown_0[0x18];  // (not used here)
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Object_0058c704_0, word_18, 0x18);
GUEST_OFFSET(Object_0058c704_0, word_1c, 0x1c);

inline guest::global<u32, 0x00845f30> global_00845f30;
inline guest::global<u32, 0x00845f34> global_00845f34;

u32 f_0058c704(gptr<Object_0058c704_0> arg0) {
    u32 r1_1 = *global_00845f30 & arg0->word_18;
    u32 r2_1 = *global_00845f34 & arg0->word_1c;
    arg0->word_18 = r1_1;
    arg0->word_1c = r2_1;
    guest::cpu()->r[1] = r1_1;
    return arg0.addr() + 0x18u;  // (from the original)
}

}  // namespace d_0058c704
GUEST_EXPORT(0x0058c704, d_0058c704::f_0058c704);

// f_0058c90c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058c90c {

inline constexpr u32 global_0094e4b0_address = 0x0094e4b0u;
inline guest::global<u32, 0x0094e4b0> global_0094e4b0;
inline constexpr guest::Function<0x0058c730, u32(u32, u32, u32, u32)> call_0058c730;

void f_0058c90c(u32 r0, u32 r1) {
    call_0058c730(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *global_0094e4b0 = 1;
    guest::cpu()->r[1] = global_0094e4b0_address;
}

}  // namespace d_0058c90c
GUEST_EXPORT_FRAMED(0x0058c90c, d_0058c90c::f_0058c90c, 0x4010);  // pushes {r4, lr} first, as the original

// f_0058c9e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058c9e0 {

struct __attribute__((packed)) Local_0058c9e0_r0_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0058c9e0_r0_2, word_0, 0x0);
GUEST_OFFSET(Local_0058c9e0_r0_2, word_4, 0x4);
GUEST_OFFSET(Local_0058c9e0_r0_2, word_8, 0x8);

inline guest::global<u8, 0x0094e488> global_0094e488;
inline guest::global<u8, 0x0094e489> global_0094e489;
inline guest::global<u8, 0x0094e48a> global_0094e48a;
inline guest::global<u32, 0x0098a068> global_0098a068;
inline guest::global<u32, 0x0098a06c> global_0098a06c;
inline guest::global<u32, 0x0098a070> global_0098a070;
inline constexpr guest::Function<0x002fb378, u32(u32)> return_constant_0xad56b0_;
inline constexpr guest::Function<0x00582e38, u32(u32, u32)> call_00582e38;
inline constexpr guest::Function<0x0062f03c, u32(u32, u32, u32, u32)> current_weather_type;

void f_0058c9e0(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    *global_0094e488 = 1;
    u32 weather = current_weather_type(1u, r1, r2, r3);
    u32 r1_1 = *global_0094e489;
    if (r1_1 == weather) {
        guest::cpu()->r[1] = r1_1;
        return;
    }
    *global_0094e489 = u8(weather);
    gptr<Local_0058c9e0_r0_2> r0_2 = gptr<Local_0058c9e0_r0_2>(return_constant_0xad56b0_(weather));
    u32 r2_1 = r0_2->word_4;
    u32 r3_1 = r0_2->word_8;
    *global_0098a068 = r0_2->word_0;
    *global_0098a06c = r2_1;
    *global_0098a070 = r3_1;
    u32 r1_2 = *global_0094e489;
    u32 r0_3 = *gptr<u8>(r1_2 + 0x84539bu);  // (from the original)
    *global_0094e48a = u8(r0_3);
    frame.release();
    call_00582e38(r0_3, r1_2);
    return;
}

}  // namespace d_0058c9e0
GUEST_EXPORT(0x0058c9e0, d_0058c9e0::f_0058c9e0);

// f_0058cb20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058cb20 {

inline guest::global<u32, 0x0094d090> global_0094d090;

u32 f_0058cb20() {
    return *gptr<s8>(*global_0094d090 + 0x63du);  // (from the original)
}

}  // namespace d_0058cb20
GUEST_EXPORT(0x0058cb20, d_0058cb20::f_0058cb20);

// f_0058cb38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058cb38 {

inline constexpr u32 global_0094d090_address = 0x0094d090u;
inline guest::global<u32, 0x0094d090> global_0094d090;
inline constexpr guest::Function<0x001d9578, u32(u32, u32, u32, u32)> call_001d9578;

u32 f_0058cb38(u32 r0) {
    return call_001d9578(*global_0094d090, r0, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0058cb38
GUEST_EXPORT(0x0058cb38, d_0058cb38::f_0058cb38);

// f_0058cb60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058cb60 {

inline constexpr u32 global_0094d090_address = 0x0094d090u;
inline guest::global<u32, 0x0094d090> global_0094d090;
inline constexpr guest::Function<0x001d960c, u32(u32, u32, u32, u32)> call_001d960c;

u32 f_0058cb60(u32 r0) {
    return call_001d960c(*global_0094d090, r0, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0058cb60
GUEST_EXPORT(0x0058cb60, d_0058cb60::f_0058cb60);

// f_0058cb74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058cb74 {

inline constexpr u32 global_0094d090_address = 0x0094d090u;
inline guest::global<u32, 0x0094d090> global_0094d090;
inline constexpr guest::Function<0x0033e248, u32(u32, u32)> call_0033e248;

void sead__SafeStringBase_char___SafeStringBase_0058cb74() {
    for (;;) {
        u32 r0 = *global_0094d090;
        if (!1) {
            break;
        }
        if (*gptr<u8>(r0 + 0x15u) != 2u) {  // (from the original)
            return;
        }
        u32 ea_1 = r0 + 0x10u;  // (from the original)
        call_0033e248(ea_1 + 0x24u, *gptr<u32>(ea_1));  // (from the original)
        return;
        guest::preempt();
    }
}

}  // namespace d_0058cb74
GUEST_EXPORT(0x0058cb74, d_0058cb74::sead__SafeStringBase_char___SafeStringBase_0058cb74);

// f_0058cb84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058cb84 {

inline constexpr u32 global_0094d090_address = 0x0094d090u;
inline guest::global<u32, 0x0094d090> global_0094d090;

u32 f_0058cb84(u32 r0, u32 r1) {
    for (;;) {
        u32 r2 = r1;
        r1 = r0;
        r0 = *global_0094d090;
        if (!1) {
            break;
        }
        u32 r0_1 = r0 + 0x34u;  // (from the original)
        if (*gptr<u8>(r0_1) != 5u) {
            r0_1 += 0x5e0u;  // (from the original)
            *gptr<u32>(r0_1) = r1;
            *gptr<u32>(r0_1 + 4) = r2;
        }
        guest::cpu()->r[1] = r1;
        return r0_1;
        guest::preempt();
    }
}

}  // namespace d_0058cb84
GUEST_EXPORT(0x0058cb84, d_0058cb84::f_0058cb84);

// f_0058cb9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058cb9c {


void f_0058cb9c() {
}

}  // namespace d_0058cb9c
GUEST_EXPORT(0x0058cb9c, d_0058cb9c::f_0058cb9c);

// f_0058cbbc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058cbbc {

inline guest::global<u32, 0x0094d090> global_0094d090;

u32 f_0058cbbc() {
    return *gptr<u32>(*global_0094d090 + 0x38u) & 0xffu;  // (from the original)
}

}  // namespace d_0058cbbc
GUEST_EXPORT(0x0058cbbc, d_0058cbbc::f_0058cbbc);

// f_0058cbd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058cbd4 {

inline constexpr u32 global_0094d090_address = 0x0094d090u;
inline guest::global<u32, 0x0094d090> global_0094d090;
inline constexpr guest::Function<0x001d982c, u32(u32, u32, u32, u32)> call_001d982c;

u32 f_0058cbd4() {
    return call_001d982c(*global_0094d090, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0058cbd4
GUEST_EXPORT(0x0058cbd4, d_0058cbd4::f_0058cbd4);

// f_0058cbe4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058cbe4 {

inline constexpr u32 global_0094d090_address = 0x0094d090u;
inline guest::global<u32, 0x0094d090> global_0094d090;
inline constexpr guest::Function<0x001d987c, u32(u32, u32, u32, u32)> call_001d987c;

u32 f_0058cbe4() {
    return call_001d987c(*global_0094d090, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0058cbe4
GUEST_EXPORT(0x0058cbe4, d_0058cbe4::f_0058cbe4);

// f_0058cbf4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058cbf4 {

inline constexpr u32 global_0094d090_address = 0x0094d090u;
inline guest::global<u32, 0x0094d090> global_0094d090;
inline constexpr guest::Function<0x001d9934, u32(u32, u32, u32, u32)> call_001d9934;

u32 f_0058cbf4() {
    return call_001d9934(*global_0094d090, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0058cbf4
GUEST_EXPORT(0x0058cbf4, d_0058cbf4::f_0058cbf4);

// f_0058cc04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058cc04 {

inline constexpr u32 global_0094d090_address = 0x0094d090u;
inline guest::global<u32, 0x0094d090> global_0094d090;
inline constexpr guest::Function<0x001d99ec, u32(u32, u32, u32, u32)> call_001d99ec;

u32 f_0058cc04() {
    return call_001d99ec(*global_0094d090, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0058cc04
GUEST_EXPORT(0x0058cc04, d_0058cc04::f_0058cc04);

// f_0058ce80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058ce80 {

inline constexpr u32 global_0094e446_address = 0x0094e446u;
inline guest::global<u8, 0x0094e446> global_0094e446;
inline constexpr guest::Function<0x00122f70, u32(u32, u32, u32, u32)> call_00122f70;
inline constexpr guest::Function<0x0058d2d4, u32(u32, u32, u32, u32)> call_0058d2d4;

void f_0058ce80(u32 r0, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    call_0058d2d4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = *global_0094e446;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return;
    }
    *global_0094e446 = 0;
    frame.release();
    call_00122f70(global_0094e446_address, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
}

}  // namespace d_0058ce80
GUEST_EXPORT(0x0058ce80, d_0058ce80::f_0058ce80);

// f_0058ceb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058ceb4 {

inline constexpr u32 global_0094d550_address = 0x0094d550u;
inline guest::global<u32, 0x0094d550> global_0094d550;
inline guest::global<u8, 0x0094e446> global_0094e446;
inline constexpr guest::Function<0x001dae5c, u32(u32, u32, u32, u32)> call_001dae5c;

u32 f_0058ceb4() {
    u32 r0_1 = *global_0094e446;
    if (r0_1 == 0) {
        return r0_1;
    }
    return call_001dae5c(*global_0094d550, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0058ceb4
GUEST_EXPORT(0x0058ceb4, d_0058ceb4::f_0058ceb4);

// f_0058cf80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058cf80 {

inline guest::global<u32, 0x0094d06c> global_0094d06c;

u32 f_0058cf80() {
    return *gptr<s8>(*global_0094d06c + 0x10u);  // (from the original)
}

}  // namespace d_0058cf80
GUEST_EXPORT(0x0058cf80, d_0058cf80::f_0058cf80);

// f_0058d090: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058d090 {

inline guest::global<u32, 0x0094d06c> global_0094d06c;

void f_0058d090() {
    float S0_1 = std::bit_cast<float>(*gptr<u32>(*global_0094d06c + 0x23bcu));  // (from the original)
    guest::cpu()->s[0] = S0_1;
}

}  // namespace d_0058d090
GUEST_EXPORT(0x0058d090, d_0058d090::f_0058d090);

// f_0058d0bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058d0bc {

inline guest::global<u32, 0x0094d06c> global_0094d06c;

void f_0058d0bc() {
    float S0_1 = std::bit_cast<float>(*gptr<u32>(*global_0094d06c + 0x23b8u));  // (from the original)
    guest::cpu()->s[0] = S0_1;
}

}  // namespace d_0058d0bc
GUEST_EXPORT(0x0058d0bc, d_0058d0bc::f_0058d0bc);

// f_0058d174: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058d174 {

inline guest::global<u32, 0x0094d06c> global_0094d06c;

u32 f_0058d174() {
    return *gptr<s16>(*global_0094d06c + 0x22b0u);  // (from the original)
}

}  // namespace d_0058d174
GUEST_EXPORT(0x0058d174, d_0058d174::f_0058d174);

// f_0058d220: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058d220 {

inline constexpr u32 global_0094d548_address = 0x0094d548u;
inline guest::global<u32, 0x0094d548> global_0094d548;
inline guest::global<u8, 0x0094e445> global_0094e445;
inline constexpr guest::Function<0x00321cd4, u32(u32, u32, u32, u32)> call_00321cd4;

void f_0058d220() {
    if (*global_0094e445 == 0) {
        return;
    }
    call_00321cd4(*global_0094d548, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0058d220
GUEST_EXPORT(0x0058d220, d_0058d220::f_0058d220);

// f_0058d248: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058d248 {

inline constexpr u32 global_0094e445_address = 0x0094e445u;
inline constexpr u32 stage_heap_address = 0x00952c3cu;
inline guest::global<u8, 0x0094e445> global_0094e445;
inline guest::global<u32, 0x00952c3c> stage_heap;
inline constexpr guest::Function<0x00321ff0, u32(u32, u32, u32, u32)> SoundRoomMusicPlayer__SingletonDisposer___SingletonDisposer_;

u32 f_0058d248() {
    u32 r1 = 0;
    SoundRoomMusicPlayer__SingletonDisposer___SingletonDisposer_(*stage_heap, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *global_0094e445 = 1;
    guest::cpu()->r[1] = global_0094e445_address;
    return 1u;
}

}  // namespace d_0058d248
GUEST_EXPORT_FRAMED(0x0058d248, d_0058d248::f_0058d248, 0x4010);  // pushes {r4, lr} first, as the original

// f_0058d270: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058d270 {

inline constexpr u32 global_0094e445_address = 0x0094e445u;
inline guest::global<u8, 0x0094e445> global_0094e445;
inline constexpr guest::Function<0x001234e0, u32(u32, u32, u32, u32)> call_001234e0;

void f_0058d270() {
    u32 r0 = 0;
    *global_0094e445 = 0;
    call_001234e0(r0, global_0094e445_address, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0058d270
GUEST_EXPORT(0x0058d270, d_0058d270::f_0058d270);

// f_0058d2ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058d2ac {

inline constexpr u32 stage_heap_address = 0x00952c3cu;
inline guest::global<u8, 0x0094e444> global_0094e444;
inline guest::global<u32, 0x00952c3c> stage_heap;
inline constexpr guest::Function<0x00246cb8, u32(u32, u32, u32, u32)> SoundRiverMgr__SingletonDisposer___SingletonDisposer_;

u32 f_0058d2ac() {
    u32 r1 = 0;
    SoundRiverMgr__SingletonDisposer___SingletonDisposer_(*stage_heap, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *global_0094e444 = 1;
    return 1u;
}

}  // namespace d_0058d2ac
GUEST_EXPORT_FRAMED(0x0058d2ac, d_0058d2ac::f_0058d2ac, 0x4010);  // pushes {r4, lr} first, as the original

// f_0058d2d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058d2d4 {

inline guest::global<u8, 0x0094e444> global_0094e444;
inline constexpr guest::Function<0x00123020, u32(u32, u32, u32, u32)> call_00123020;

u32 f_0058d2d4() {
    u32 r1 = 0;
    *global_0094e444 = 0;
    return call_00123020(0u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0058d2d4
GUEST_EXPORT(0x0058d2d4, d_0058d2d4::f_0058d2d4);

// f_0058d3b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058d3b4 {

inline constexpr u32 sound_system_address = 0x0094d080u;
inline guest::global<u32, 0x0094d080> sound_system;
inline guest::global<u16, 0x0094e428> global_0094e428;
inline constexpr guest::Function<0x006b4c38, u32(u32, u32, u32, u32)> call_006b4c38;

u32 f_0058d3b4(u32 r0) {
    u32 r2_1 = s16(*global_0094e428);
    call_006b4c38(*sound_system, r0, r2_1, guest::cpu()->r[3]);
    u32 r0_2 = ~0u;
    *global_0094e428 = u16(r0_2);
    return r0_2;
}

}  // namespace d_0058d3b4
GUEST_EXPORT_FRAMED(0x0058d3b4, d_0058d3b4::f_0058d3b4, 0x4010);  // pushes {r4, lr} first, as the original

// f_0058d3e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058d3e4 {

inline constexpr u32 sound_system_address = 0x0094d080u;
inline guest::global<u32, 0x0094d080> sound_system;
inline constexpr guest::Function<0x006b4c38, u32(u32, u32, u32, u32)> call_006b4c38;

u32 f_0058d3e4(u32 r0, u32 r1) {
    return call_006b4c38(*sound_system, r0, r1, guest::cpu()->r[3]);
}

}  // namespace d_0058d3e4
GUEST_EXPORT(0x0058d3e4, d_0058d3e4::f_0058d3e4);

// f_0058d3fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058d3fc {

inline constexpr u32 sound_system_address = 0x0094d080u;
inline guest::global<u32, 0x0094d080> sound_system;
inline constexpr guest::Function<0x001d7a10, u32(u32, u32, u32, u32)> call_001d7a10;

u32 f_0058d3fc(u32 r0) {
    u32 r2_1 = *sound_system;
    return call_001d7a10(r2_1 + 0x754u, r0, r2_1, guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0058d3fc
GUEST_EXPORT(0x0058d3fc, d_0058d3fc::f_0058d3fc);

// f_0058d440: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058d440 {

inline guest::global<u32, 0x0094d080> sound_system;
inline guest::global<u16, 0x0094e426> global_0094e426;
inline constexpr guest::Function<0x001d7b84, u32(u32, u32, u32)> call_001d7b84;

u32 f_0058d440(u32 r0) {
    u32 r2_1 = s16(*global_0094e426);
    call_001d7b84(*sound_system + 0x754u, r0, r2_1);  // (from the original)
    u32 r0_2 = ~0u;
    *global_0094e426 = u16(r0_2);
    return r0_2;
}

}  // namespace d_0058d440
GUEST_EXPORT_FRAMED(0x0058d440, d_0058d440::f_0058d440, 0x4010);  // pushes {r4, lr} first, as the original

// f_0058d498: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058d498 {

inline constexpr u32 sound_system_address = 0x0094d080u;
inline guest::global<u32, 0x0094d080> sound_system;
inline constexpr guest::Function<0x001e5894, u32(u32, u32, u32, u32)> call_001e5894;
inline constexpr guest::Function<0x002d3068, u32(u32, u32, u32, u32)> call_002d3068;

struct __attribute__((packed)) Frame_0058d498 {
    u32 word_0;
    u8 unknown_4[0xc];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0058d498, word_0, 0x0);
GUEST_SIZE(Frame_0058d498, 0x10);

u32 f_0058d498(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0058d498> frame;  // the original's stack frame
    call_001e5894(frame.at(4).addr(), r1, r2, r3);
    u32 r0_2 = *sound_system;
    frame->word_0 = r2;
    u32 r0_4 = call_002d3068(r0_2 + 0xbc8u, r0, r1, frame.at(4).addr());  // (from the original)
    return r0_4;
}

}  // namespace d_0058d498
GUEST_EXPORT_FRAMED(0x0058d498, d_0058d498::f_0058d498, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0058d52c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058d52c {

inline constexpr u32 global_00986a60_address = 0x00986a60u;
inline guest::global<u32, 0x0094d080> sound_system;
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x0076c6e4, u32(u32, u32, u32)> call_0076c6e4;

u32 f_0058d52c(u32 r0, u32 r1, u32 r2) {
    for (;;) {
        u32 save_data = get_save_data(r0, r1, r2, guest::cpu()->r[3]);
        call_0076c6e4(save_data + 0x6e29au, global_00986a60_address, 0x6e21au);  // (from the original)
        r1 = global_00986a60_address;
        r0 = *sound_system + 0x68cu;  // (from the original)
        if (!1) {
            break;
        }
        *gptr<u32>(r0 + 0xacu) = *gptr<u32>(r1);  // (from the original)
        *gptr<u32>(r0 + 0xb0u) = *gptr<u32>(r1 + 4u);  // (from the original)
        *gptr<u32>(r0 + 0xb4u) = *gptr<u32>(r1 + 8u);  // (from the original)
        u32 r1_1 = *gptr<u32>(r1 + 0xcu);  // (from the original)
        *gptr<u32>(r0 + 0xb8u) = r1_1;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0;
        guest::preempt();
    }
}

}  // namespace d_0058d52c
GUEST_EXPORT_FRAMED(0x0058d52c, d_0058d52c::f_0058d52c, 0x4010);  // pushes {r4, lr} first, as the original

// f_0058d654: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058d654 {

inline guest::global<u8, 0x0094e43b> global_0094e43b;
inline guest::global<u8, 0x0094e43c> global_0094e43c;
inline guest::global<u8, 0x0094e43f> global_0094e43f;
inline guest::global<u8, 0x0094e440> global_0094e440;
inline guest::global<u8, 0x0094e441> global_0094e441;
inline constexpr guest::Function<0x00582efc, u32(u32, u32, u32, u32)> call_00582efc;
inline constexpr guest::Function<0x005840f8, u32(u32, u32, u32, u32)> call_005840f8;

void f_0058d654() {
    if (*global_0094e43b != 0 && *global_0094e43f == 0 && *global_0094e43c != 0) {
        *global_0094e43c = 0;
        u32 r0_1 = *global_0094e441;
        if (r0_1 != 0) {
            r0_1 = call_00582efc(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        }
        call_005840f8(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        *global_0094e441 = 0;
        *global_0094e440 = 0;
    }
}

}  // namespace d_0058d654
GUEST_EXPORT_FRAMED(0x0058d654, d_0058d654::f_0058d654, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0058d6ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058d6ac {

inline constexpr guest::Function<0x005838c4, u32(u32)> call_005838c4;

u32 f_0058d6ac(u32 r0) {
    u32 r0_1 = call_005838c4(r0);
    return r0_1 ^ 1u;
}

}  // namespace d_0058d6ac
GUEST_EXPORT_FRAMED(0x0058d6ac, d_0058d6ac::f_0058d6ac, 0x4010);  // pushes {r4, lr} first, as the original

// f_0058d6bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058d6bc {

inline guest::global<u8, 0x0094e43b> global_0094e43b;
inline guest::global<u8, 0x0094e43c> global_0094e43c;
inline guest::global<u8, 0x0094e43d> global_0094e43d;
inline guest::global<u8, 0x0094e43f> global_0094e43f;
inline guest::global<u8, 0x0094e440> global_0094e440;
inline guest::global<u8, 0x0094e441> global_0094e441;
inline constexpr guest::Function<0x00582efc, u32(u32, u32, u32, u32)> call_00582efc;
inline constexpr guest::Function<0x005837e4, u32(u32)> call_005837e4;
inline constexpr guest::Function<0x005840f8, u32(u32, u32, u32, u32)> call_005840f8;
inline constexpr guest::Function<0x00585438, u32(u32, u32, u32, u32)> call_00585438;
inline constexpr guest::Function<0x005b4120, u32(u32, u32, u32, u32)> kind_state_byte_3;

void f_0058d6bc(u32 r0_unused, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    if (*global_0094e43b != 0 && *global_0094e43f == 0 && *global_0094e43d == 0) {
        *global_0094e43d = 1;
        u32 r0_1 = *global_0094e43c;
        if (r0_1 != 0) {
            *global_0094e43c = 0;
            u32 r0_2 = *global_0094e441;
            if (r0_2 != 0) {
                r0_2 = call_00582efc(r0_2, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
                r1 = guest::cpu()->r[1];
            }
            r0_1 = call_005840f8(r0_2, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            *global_0094e441 = 0;
            *global_0094e440 = 0;
        }
        u32 r0_3 = kind_state_byte_3(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        if (*global_0094e441 != 0) {
            call_005837e4(r0_3);
        }
        u32 r1_2 = s8(*global_0094e441);
        frame.release();
        call_00585438(r0_3, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
        return;
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0058d6bc
GUEST_EXPORT(0x0058d6bc, d_0058d6bc::f_0058d6bc);

// f_0058d750: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058d750 {

inline guest::global<u8, 0x0094e43b> global_0094e43b;
inline guest::global<u8, 0x0094e43d> global_0094e43d;
inline guest::global<u8, 0x0094e43e> global_0094e43e;
inline guest::global<u8, 0x0094e43f> global_0094e43f;
inline guest::global<u8, 0x0094e441> global_0094e441;
inline constexpr guest::Function<0x00585690, u32(u32)> call_00585690;
inline constexpr guest::Function<0x0058ca3c, u32(u32)> set_byte_94e488_to_0;
inline constexpr guest::Function<0x0058d488, u32(u32)> call_0058d488;
inline constexpr guest::Function<0x005b4120, u32(u32, u32, u32, u32)> kind_state_byte_3;

void f_0058d750() {
    if (*global_0094e43b != 0 && *global_0094e43f == 0) {
        u32 r0_1 = *global_0094e43d;
        if (r0_1 != 0) {
            *global_0094e43d = 0;
            u32 r0_2 = kind_state_byte_3(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            u32 r0_3 = *global_0094e441;
            if (r0_3 != 0) {
                call_0058d488(r0_3);
                set_byte_94e488_to_0(r0_2);
            }
            call_00585690(r0_2);
            *global_0094e43e = 0;
        }
    }
}

}  // namespace d_0058d750
GUEST_EXPORT_FRAMED(0x0058d750, d_0058d750::f_0058d750, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0058d7bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058d7bc {

inline guest::global<u8, 0x0094e43b> global_0094e43b;
inline constexpr guest::Function<0x00584080, u32(u32)> call_00584080;
inline constexpr guest::Function<0x0058d478, u32(u32, u32, u32, u32)> sead__RuntimeTypeInfo__Derive_sead__AudioPlayer___AudioPlayer__0058d478;

void f_0058d7bc() {
    u32 r0_1 = *global_0094e43b;
    if (r0_1 != 0) {
        return;
    }
    sead__RuntimeTypeInfo__Derive_sead__AudioPlayer___AudioPlayer__0058d478(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_00584080(r0_1);
    *global_0094e43b = 1;
}

}  // namespace d_0058d7bc
GUEST_EXPORT_FRAMED(0x0058d7bc, d_0058d7bc::f_0058d7bc, 0x4010);  // pushes {r4, lr} first, as the original

// f_0058d884: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058d884 {

inline guest::global<u32, 0x0094d080> sound_system;
inline guest::global<u8, 0x0094e43b> global_0094e43b;
inline guest::global<u8, 0x0094e43f> global_0094e43f;
inline constexpr guest::Function<0x002fe2e0, u32(u32, u32, u32, u32)> call_002fe2e0;
inline constexpr guest::Function<0x0058ad84, u32(u32)> call_0058ad84;
inline constexpr guest::Function<0x0058ca50, u32(u32, u32, u32, u32)> call_0058ca50;
inline constexpr guest::Function<0x0058ceb4, u32(u32)> call_0058ceb4;
inline constexpr guest::Function<0x0058cf04, u32(u32)> call_0058cf04;
inline constexpr guest::Function<0x0058d2e8, u32(u32)> call_0058d2e8;

void f_0058d884(u32 r0_unused, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    if (*sound_system == 0) {
        return;
    }
    u32 r1_1 = *global_0094e43b;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return;
    }
    u32 r0_1 = *global_0094e43f;
    if (r0_1 != 0) {
        guest::cpu()->r[1] = r1_1;
        return;
    }
    u32 r0_2 = call_002fe2e0(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_3 = call_0058cf04(r0_2);
    u32 r0_4 = call_0058d2e8(r0_3);
    u32 r0_5 = call_0058ceb4(r0_4);
    call_0058ad84(r0_5);
    frame.release();
    call_0058ca50(r0_5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
}

}  // namespace d_0058d884
GUEST_EXPORT(0x0058d884, d_0058d884::f_0058d884);

// f_0058d9c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058d9c4 {

struct __attribute__((packed)) Object_0058d9c4_0 {
    u8 unknown_0[0x48];  // (not used here)
    u32 word_48;
    u32 word_4c;
};
GUEST_OFFSET(Object_0058d9c4_0, word_48, 0x48);
GUEST_OFFSET(Object_0058d9c4_0, word_4c, 0x4c);


void f_0058d9c4(gptr<Object_0058d9c4_0> arg0) {
    u32 res_1 = arg0->word_48 - 1u;
    arg0->word_48 = res_1;
    if (res_1 == 0) {
        arg0->word_48 = 0x1e;  // (from the original)
        arg0->word_4c = 0xff;  // (from the original)
        return;
    }
    if (res_1 - 1u <= 0xbu) {  // (from the original)
        arg0->word_4c = 0;
        return;
    }
    arg0->word_4c = 0xff;  // (from the original)
}

}  // namespace d_0058d9c4
GUEST_EXPORT(0x0058d9c4, d_0058d9c4::f_0058d9c4);

// f_0058d9f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058d9f8 {

struct __attribute__((packed)) Object_0058d9f8_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x3c];  // (not used here)
    u32 word_48;
};
GUEST_OFFSET(Object_0058d9f8_0, word_0, 0x0);
GUEST_OFFSET(Object_0058d9f8_0, word_4, 0x4);
GUEST_OFFSET(Object_0058d9f8_0, word_8, 0x8);
GUEST_OFFSET(Object_0058d9f8_0, word_48, 0x48);

struct __attribute__((packed)) Local_0058d9f8_r0_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0058d9f8_r0_1, word_0, 0x0);
GUEST_OFFSET(Local_0058d9f8_r0_1, word_4, 0x4);
GUEST_OFFSET(Local_0058d9f8_r0_1, word_8, 0x8);

inline constexpr guest::Function<0x002fb378, u32(u32)> return_constant_0xad56b0_;

u32 f_0058d9f8(gptr<Object_0058d9f8_0> arg0) {
    arg0->word_48 = 0x1e;  // (from the original)
    gptr<Local_0058d9f8_r0_1> r0_1 = gptr<Local_0058d9f8_r0_1>(return_constant_0xad56b0_(0x1eu));  // (from the original)
    u32 r1_1 = r0_1->word_0;
    u32 r2_1 = r0_1->word_4;
    arg0->word_8 = r0_1->word_8;
    arg0->word_0 = r1_1;
    arg0->word_4 = r2_1;
    guest::cpu()->r[1] = r1_1;
    return arg0.addr();
}

}  // namespace d_0058d9f8
GUEST_EXPORT_FRAMED(0x0058d9f8, d_0058d9f8::f_0058d9f8, 0x4010);  // pushes {r4, lr} first, as the original

// f_0058dc54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058dc54 {

struct __attribute__((packed)) Object_0058dc54_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x60];  // (not used here)
    u8 byte_6c;
};
GUEST_OFFSET(Object_0058dc54_0, word_0, 0x0);
GUEST_OFFSET(Object_0058dc54_0, word_4, 0x4);
GUEST_OFFSET(Object_0058dc54_0, word_8, 0x8);
GUEST_OFFSET(Object_0058dc54_0, byte_6c, 0x6c);


void f_0058dc54(gptr<Object_0058dc54_0> arg0) {
    u32 r2_1 = ~0u;
    arg0->word_0 = r2_1;
    arg0->word_8 = 0;
    arg0->word_4 = r2_1;
    arg0->byte_6c = 0;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_0058dc54
GUEST_EXPORT(0x0058dc54, d_0058dc54::f_0058dc54);

// f_0058e1ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058e1ac {

struct __attribute__((packed)) event__EventBase {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u16 half_1c;
    u8 unknown_1e[0x6];  // (not used here)
    float float_24;
    float float_28;
    float float_2c;
    float float_30;
    float float_34;
    float float_38;
    u32 word_3c;
};
GUEST_OFFSET(event__EventBase, word_0, 0x0);
GUEST_OFFSET(event__EventBase, word_4, 0x4);
GUEST_OFFSET(event__EventBase, word_8, 0x8);
GUEST_OFFSET(event__EventBase, word_c, 0xc);
GUEST_OFFSET(event__EventBase, word_10, 0x10);
GUEST_OFFSET(event__EventBase, word_14, 0x14);
GUEST_OFFSET(event__EventBase, word_18, 0x18);
GUEST_OFFSET(event__EventBase, half_1c, 0x1c);
GUEST_OFFSET(event__EventBase, float_24, 0x24);
GUEST_OFFSET(event__EventBase, float_28, 0x28);
GUEST_OFFSET(event__EventBase, float_2c, 0x2c);
GUEST_OFFSET(event__EventBase, float_30, 0x30);
GUEST_OFFSET(event__EventBase, float_34, 0x34);
GUEST_OFFSET(event__EventBase, float_38, 0x38);
GUEST_OFFSET(event__EventBase, word_3c, 0x3c);

struct __attribute__((packed)) Object_0058e1ac_1 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u16 half_1c;
    u8 unknown_1e[0x6];  // (not used here)
    float float_24;
    float float_28;
    float float_2c;
    float float_30;
    float float_34;
    float float_38;
};
GUEST_OFFSET(Object_0058e1ac_1, word_8, 0x8);
GUEST_OFFSET(Object_0058e1ac_1, word_c, 0xc);
GUEST_OFFSET(Object_0058e1ac_1, word_10, 0x10);
GUEST_OFFSET(Object_0058e1ac_1, word_14, 0x14);
GUEST_OFFSET(Object_0058e1ac_1, word_18, 0x18);
GUEST_OFFSET(Object_0058e1ac_1, half_1c, 0x1c);
GUEST_OFFSET(Object_0058e1ac_1, float_24, 0x24);
GUEST_OFFSET(Object_0058e1ac_1, float_28, 0x28);
GUEST_OFFSET(Object_0058e1ac_1, float_2c, 0x2c);
GUEST_OFFSET(Object_0058e1ac_1, float_30, 0x30);
GUEST_OFFSET(Object_0058e1ac_1, float_34, 0x34);
GUEST_OFFSET(Object_0058e1ac_1, float_38, 0x38);

inline constexpr u32 vtable_event__EventEveryDate = 0x0090788cu;
inline constexpr u32 vtable_event__EventBase = 0x009078f0u;
inline constexpr guest::Function<0x007795ec, u32(u32, u32)> copy_record;

void event__EventBase__EventBase_0058e1ac(gptr<event__EventBase> event_base, gptr<Object_0058e1ac_1> arg1, u32 r2) {
    event_base->word_0 = vtable_event__EventBase;
    event_base->word_4 = 0;
    event_base->word_8 = arg1->word_8;
    event_base->word_c = arg1->word_c;
    u32 r3_1 = arg1->word_14;
    event_base->word_10 = arg1->word_10;
    event_base->word_14 = r3_1;
    event_base->word_18 = arg1->word_18;
    event_base->half_1c = arg1->half_1c;
    copy_record(event_base.addr() + 0x1eu, arg1.addr() + 0x1eu);  // (from the original)
    float S0_1 = arg1->float_24;
    float S1_1 = arg1->float_28;
    float S2_1 = arg1->float_2c;
    float S3_1 = arg1->float_30;
    float S4_1 = arg1->float_34;
    float S5_1 = arg1->float_38;
    event_base->float_24 = S0_1;
    event_base->float_28 = S1_1;
    event_base->float_2c = S2_1;
    event_base->float_30 = S3_1;
    event_base->float_34 = S4_1;
    event_base->float_38 = S5_1;
    event_base->word_0 = vtable_event__EventEveryDate;
    event_base->word_3c = r2;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_0058e1ac
GUEST_EXPORT_FRAMED(0x0058e1ac, d_0058e1ac::event__EventBase__EventBase_0058e1ac, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0058e2e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058e2e4 {

inline constexpr u32 global_009524dc_address = 0x009524dcu;
inline guest::global<u32, 0x0085e6ac> global_0085e6ac;
inline guest::global<u32, 0x0085e6b0> global_0085e6b0;
inline guest::global<u32, 0x009524dc> global_009524dc;

void f_0058e2e4(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r12 = *global_0085e6ac;
    u32 r4 = *global_0085e6b0;
    u32 r2 = *global_009524dc;
    if (r2 == 0) {
        return;
    }
    do {
        u32 r3_1 = *gptr<u8>(r2 + 0x1bu);  // (from the original)
        if (r3_1 == r0) {
            u32 r0_1 = r2 + u32(s32(r4) >> 1);
            if ((r4 & 1u) == 0) {
                frame.release();
                guest::call_address<u32>(r12, r0_1, guest::cpu()->r[1], r2, r3_1);
                return;
            }
            u32 r2_1 = *gptr<u32>(r0_1);
            u32 r12_1 = *gptr<u32>(r2_1 + r12);
            frame.release();
            guest::call_address<u32>(r12_1, r0_1, guest::cpu()->r[1], r2_1, r3_1);
            return;
        }
        r2 = *gptr<u32>(r2 + 4u);
        guest::preempt();
    } while (r2 != 0);
}

}  // namespace d_0058e2e4
GUEST_EXPORT(0x0058e2e4, d_0058e2e4::f_0058e2e4);

// f_0058e3cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058e3cc {

struct __attribute__((packed)) Local_0058e3cc_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0058e3cc_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_0058e3cc_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_0058e3cc_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0058e3cc_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_0058e3cc_ea_3, word_4, 0x4);

struct __attribute__((packed)) Local_0058e3cc_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0058e3cc_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_0058e3cc_ea_4, word_4, 0x4);

struct __attribute__((packed)) Local_0058e3cc_r0_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0058e3cc_r0_2, word_0, 0x0);
GUEST_OFFSET(Local_0058e3cc_r0_2, word_4, 0x4);
GUEST_OFFSET(Local_0058e3cc_r0_2, word_8, 0x8);

inline constexpr u32 global_009524d4_address = 0x009524d4u;
inline constexpr u32 global_009524e0_address = 0x009524e0u;
inline constexpr u32 global_009b39f8_address = 0x009b39f8u;
inline constexpr u32 global_009b39fc_address = 0x009b39fcu;
inline guest::global<u8, 0x009524d6> global_009524d6;
inline guest::global<u32, 0x009524e0> global_009524e0;
inline guest::global<u32, 0x009b39f8> global_009b39f8;
inline guest::global<u32, 0x009b39fc> global_009b39fc;
inline guest::global<u32, 0x009b3a00> global_009b3a00;
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> return_constant_0xad56b0_;
inline constexpr guest::Function<0x00308efc, u32(u32)> TimeStamp__move_to_day_start;
inline constexpr guest::Function<0x00314278, u32(u32, u32, u32, u32)> word_and_byte_pairs_equal;

struct __attribute__((packed)) Frame_0058e3cc {
    u8 unknown_0[0x10];  // (not read or written by name)
    u32 word_10;
    u8 unknown_14[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0058e3cc, word_10, 0x10);
GUEST_SIZE(Frame_0058e3cc, 0x18);

u32 f_0058e3cc(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0058e3cc> frame;  // the original's stack frame
    u32 r0_1 = *global_009524e0;
    u32 zf_1 = r0_1 == 0;
    if (!zf_1) {
        r0_1 = *global_009524d6;
        zf_1 = r0_1 == 0;
    }
    if (zf_1) {
        return 0u;
    }
    gptr<Local_0058e3cc_r0_2> r0_2 = gptr<Local_0058e3cc_r0_2>(return_constant_0xad56b0_(r0_1, r1, r2, r3));
    u32 r1_1 = r0_2->word_0;
    u32 r2_1 = r0_2->word_4;
    frame->word_10 = r0_2->word_8;
    gptr<Local_0058e3cc_ea_2> ea_2 = gptr<Local_0058e3cc_ea_2>(frame.at(8).addr());
    ea_2->word_0 = r1_1;
    ea_2->word_4 = r2_1;
    TimeStamp__move_to_day_start(frame.at(8).addr());
    u32 r0_4 = *global_009b39fc;
    u32 r1_2 = *global_009b3a00;
    gptr<Local_0058e3cc_ea_3> ea_3 = gptr<Local_0058e3cc_ea_3>(frame.at(0).addr());
    ea_3->word_0 = r0_4;
    ea_3->word_4 = r1_2;
    u32 r3_1 = *global_009b39f8;
    gptr<Local_0058e3cc_ea_4> ea_4 = gptr<Local_0058e3cc_ea_4>(frame.at(8).addr());
    u32 r0_6 = word_and_byte_pairs_equal(ea_4->word_0, ea_4->word_4, r2_1, r3_1);
    *global_009524d6 = u8(r0_6);
    return r0_6 != 0;
}

}  // namespace d_0058e3cc
GUEST_EXPORT_FRAMED(0x0058e3cc, d_0058e3cc::f_0058e3cc, 0x4010);  // pushes {r4, lr} first, as the original

// f_0058e508: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058e508 {

struct __attribute__((packed)) Object_0058e508_0 {
    u32 word_0;
    u8 byte_4;
    u8 byte_5;
    u8 unknown_6[0x2];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_0058e508_0, word_0, 0x0);
GUEST_OFFSET(Object_0058e508_0, byte_4, 0x4);
GUEST_OFFSET(Object_0058e508_0, byte_5, 0x5);
GUEST_OFFSET(Object_0058e508_0, word_8, 0x8);

struct __attribute__((packed)) Local_0058e508_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0058e508_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0058e508_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_0058e508_r5_1 {
    u16 half_0;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Local_0058e508_r5_1, half_0, 0x0);
GUEST_OFFSET(Local_0058e508_r5_1, byte_2, 0x2);
GUEST_OFFSET(Local_0058e508_r5_1, byte_3, 0x3);

struct __attribute__((packed)) Local_0058e508_r5_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0058e508_r5_2, word_0, 0x0);
GUEST_OFFSET(Local_0058e508_r5_2, word_4, 0x4);

inline constexpr guest::Function<0x002fae84, u32(u32, u32)> get_data_base;
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> get_current_player;
inline constexpr guest::Function<0x002fb96c, u32(u32)> player_for_slot;
inline constexpr guest::Function<0x002fd41c, u32(u32, u32, u32, u32)> word_and_byte_pairs_not_less;
inline constexpr guest::Function<0x002fd5c4, u32(u32, u32, u32, u32)> make_time_with_milliseconds;
inline constexpr guest::Function<0x00301400, u32(u32, u32, u32, u32)> Date__compare;
inline constexpr guest::Function<0x003014b4, u32(u32, u32)> TimeStamp__add_days;
inline constexpr guest::Function<0x00301da8, u32(u32, u32)> call_00301da8;
inline constexpr guest::Function<0x00302204, u32(u32)> first_player_index_with_flag;
inline constexpr guest::Function<0x0058e6e8, u32(u32, u32)> get_flagged_player_date;

struct __attribute__((packed)) Frame_0058e508 {
    u8 unknown_0[0x2];  // (not read or written by name)
    u8 byte_2;
    u8 byte_3;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0xc];  // (not read or written by name)
    u32 word_1c;
    u8 unknown_20[0x8];  // (not read or written by name)
    u16 half_28;
    u8 byte_2a;
    u8 byte_2b;
};
GUEST_OFFSET(Frame_0058e508, byte_2, 0x2);
GUEST_OFFSET(Frame_0058e508, byte_3, 0x3);
GUEST_OFFSET(Frame_0058e508, word_4, 0x4);
GUEST_OFFSET(Frame_0058e508, word_8, 0x8);
GUEST_OFFSET(Frame_0058e508, word_c, 0xc);
GUEST_OFFSET(Frame_0058e508, word_1c, 0x1c);
GUEST_OFFSET(Frame_0058e508, half_28, 0x28);
GUEST_OFFSET(Frame_0058e508, byte_2a, 0x2a);
GUEST_OFFSET(Frame_0058e508, byte_2b, 0x2b);
GUEST_SIZE(Frame_0058e508, 0x2c);

u32 f_0058e508(gptr<Object_0058e508_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0058e508> frame;  // the original's stack frame
    u32 player = get_current_player(arg0.addr(), r1, r2, r3);
    if (player == 0) {
        return player;
    }
    u32 r1_2 = u32(*gptr<u8>(player + 0x5701u)) << 0x1e;  // (from the original)
    if (s32(r1_2) < 0) {
        r1_2 = u32(*gptr<u8>(player + 0x570au)) >> 7;  // (from the original)
        if (r1_2 != 0) {
            u32 r0_2 = u32(*gptr<u8>(player + 0x5700u)) << 0x1b;  // (from the original)
            if (s32(r0_2) < 0) {
                u32 data_base = get_data_base(r0_2, r1_2);
                r1_2 = 0x717e8u;  // (from the original)
                gptr<Local_0058e508_r5_1> r5_1 = gptr<Local_0058e508_r5_1>(data_base + r1_2);
                if (r5_1->half_0 != 0 && r5_1->byte_2 != 0 && r5_1->byte_3 != 0) {
                    u32 r3_2 = arg0->byte_5;
                    u32 r2_2 = arg0->byte_4;
                    u32 r0_4 = Date__compare(r5_1.addr(), uxth(arg0->word_0), r2_2, r3_2);
                    r1_2 = guest::cpu()->r[1];
                    if (s32(r0_4) < 0) {
                        u32 r0_5 = arg0->word_0;
                        r1_2 = r5_1->half_0;
                        if (s32(r1_2) < s32(r0_5)) {
                            u32 data_base_2 = get_data_base(r0_5, r1_2);
                            u32 r0_8 = first_player_index_with_flag(data_base_2 + 0x20u);  // (from the original)
                            u32 player_2 = player_for_slot(r0_8);
                            r1_2 = guest::cpu()->r[1];
                            if (player_2 != 0) {
                                *frame.at<u16>(0) = 0;
                                frame->byte_2 = 0;
                                frame->byte_3 = 0;
                                u32 r0_11 = get_flagged_player_date(frame.at(0).addr(), 1u);
                                r1_2 = guest::cpu()->r[1];
                                if (r0_11 != 0) {
                                    u32 r3_7 = arg0->byte_5;
                                    u32 r2_7 = arg0->byte_4;
                                    u32 r0_13 = Date__compare(frame.at(0).addr(), uxth(arg0->word_0), r2_7, r3_7);
                                    r1_2 = guest::cpu()->r[1];
                                    if (s32(r0_13) < 0) {
                                        r1_2 = arg0->word_0;
                                        if ((r1_2 - u32(*frame.at<u16>(0))) != 0) {
                                            frame->half_28 = 0;
                                            frame->byte_2a = 0;
                                            frame->byte_2b = 0;
                                            u32 r0_15 = call_00301da8(arg0->word_0, r1_2);
                                            u32 r0_17 = get_flagged_player_date(frame.at(0x28).addr(), r0_15 ^ 1u);  // (from the original)
                                            if (r0_17 == 0) {
                                                return r0_17;
                                            }
                                            *frame.at<u32>(0) = 0;
                                            frame->word_4 = 0;
                                            frame->word_8 = 0;
                                            frame->word_c = 0;
                                            u32 r1_9 = arg0->word_0;
                                            u32 r3_10 = frame->byte_2b;
                                            u32 r2_10 = frame->byte_2a;
                                            make_time_with_milliseconds(frame.at(0x1c).addr(), r1_9, r2_10, r3_10);  // (from the original)
                                            *frame.at<u32>(0) = 0;
                                            frame->word_4 = 0;
                                            frame->word_8 = 0;
                                            frame->word_c = 0;
                                            u32 r1_10 = arg0->word_0;
                                            u32 r3_11 = frame->byte_2b;
                                            u32 r2_11 = frame->byte_2a;
                                            make_time_with_milliseconds(frame.at(0x10).addr(), r1_10, r2_11, r3_11);  // (from the original)
                                            TimeStamp__add_days(frame.at(0x10).addr(), 6u);  // (from the original)
                                            gptr<Local_0058e508_ea_1> ea_1 = gptr<Local_0058e508_ea_1>(frame.at(0x20).addr());  // (from the original)
                                            u32 r1_11 = ea_1->word_4;
                                            u32 r3_12 = frame->word_1c;
                                            *frame.at<u32>(0) = ea_1->word_0;
                                            frame->word_4 = r1_11;
                                            u32 r0_22 = word_and_byte_pairs_not_less(arg0->word_0, *gptr<u32>(arg0.addr() + 4u), r2_11, r3_12);
                                            r1_2 = guest::cpu()->r[1];
                                            if (r0_22 != 0) {
                                                u32 r1_13 = arg0->word_8;
                                                gptr<Local_0058e508_r5_2> r5_2 = gptr<Local_0058e508_r5_2>(frame.at(0x10).addr());  // (from the original)
                                                *frame.at<u32>(0) = *gptr<u32>(arg0.addr() + 4u);
                                                frame->word_4 = r1_13;
                                                u32 r0_24 = word_and_byte_pairs_not_less(r5_2->word_0, r5_2->word_4, r2_11, arg0->word_0);
                                                r1_2 = guest::cpu()->r[1];
                                                if (r0_24 != 0) {
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
        }
    }
    guest::cpu()->r[1] = r1_2;
    return 0u;
}

}  // namespace d_0058e508
GUEST_EXPORT_FRAMED(0x0058e508, d_0058e508::f_0058e508, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0058e854: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058e854 {

inline constexpr u32 vtable_event__EventAnniversary = 0x009078a0u;
inline constexpr u32 vtable_event__EventBase = 0x009078f0u;
inline constexpr guest::Function<0x003081b4, u32(u32, u32)> copy_8_bytes;
inline constexpr guest::Function<0x007795ec, u32(u32, u32)> copy_record;

struct __attribute__((packed)) Frame_0058e854 {
    u8 unknown_0[0x4];  // (not read or written by name)
    u16 half_4;
    u8 byte_6;
    u8 byte_7;
    u8 byte_8;
    u8 unknown_9[0x2b];  // (not read or written by name)
    u16 half_34;
    u16 half_36;
    u8 byte_38;
    u8 unknown_39[0x7];  // (not read or written by name)
    u16 half_40;
    u16 half_42;
    u16 half_44;
    u16 half_46;
};
GUEST_OFFSET(Frame_0058e854, half_4, 0x4);
GUEST_OFFSET(Frame_0058e854, byte_6, 0x6);
GUEST_OFFSET(Frame_0058e854, byte_7, 0x7);
GUEST_OFFSET(Frame_0058e854, byte_8, 0x8);
GUEST_OFFSET(Frame_0058e854, half_34, 0x34);
GUEST_OFFSET(Frame_0058e854, half_36, 0x36);
GUEST_OFFSET(Frame_0058e854, byte_38, 0x38);
GUEST_OFFSET(Frame_0058e854, half_40, 0x40);
GUEST_OFFSET(Frame_0058e854, half_42, 0x42);
GUEST_OFFSET(Frame_0058e854, half_44, 0x44);
GUEST_OFFSET(Frame_0058e854, half_46, 0x46);
GUEST_SIZE(Frame_0058e854, 0x48);

void event__EventBase__EventBase_0058e854(gptr<event__EventAnniversary> event_anniversary) {
    guest::StackFrameOf<Frame_0058e854> frame;  // the original's stack frame
    u32 r11 = guest::cpu()->r[11];
    frame->half_40 = 0x600;  // (from the original)
    frame->half_42 = 0;
    frame->half_4 = 0xffff;  // (from the original)
    frame->half_44 = 0xffff;  // (from the original)
    frame->half_46 = 0xffff;  // (from the original)
    frame->byte_8 = 2;
    frame->byte_6 = 3;
    frame->half_34 = 0x600;  // (from the original)
    frame->byte_38 = 1;
    frame->half_36 = 0;
    frame->byte_7 = 0x25;  // (from the original)
    event_anniversary->word_4 = 0;
    event_anniversary->word_0 = vtable_event__EventBase;
    event_anniversary->word_8 = 0x58e968;  // (from the original)
    event_anniversary->word_c = 0x58e97c;  // (from the original)
    copy_8_bytes(event_anniversary.addr() + 0x10u, frame.at(0x40).addr());  // (from the original)
    copy_record(event_anniversary.addr() + 0x18u, frame.at(4).addr());  // (from the original)
    copy_record(event_anniversary.addr() + 0x1eu, frame.at(0x34).addr());  // (from the original)
    event_anniversary->word_24 = 0;
    event_anniversary->word_0 = vtable_event__EventAnniversary;
    event_anniversary->word_28 = 0;
    event_anniversary->word_38 = r11 >> 0x10 << 0x10 & ~0xff0000u;  // (from the original)
    event_anniversary->word_34 = uxth(0u);
    event_anniversary->word_2c = 0;
    event_anniversary->word_30 = uxth(0u);
}

}  // namespace d_0058e854
GUEST_EXPORT_FRAMED(0x0058e854, d_0058e854::event__EventBase__EventBase_0058e854, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0058e98c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058e98c {

inline constexpr u32 vtable_event__EventNpcBirthday = 0x009078b4u;
inline constexpr u32 vtable_event__EventBase = 0x009078f0u;
inline constexpr guest::Function<0x003081b4, u32(u32, u32)> copy_8_bytes;
inline constexpr guest::Function<0x007795ec, u32(u32, u32)> copy_record;

struct __attribute__((packed)) Frame_0058e98c {
    u8 unknown_0[0x4];  // (not read or written by name)
    u16 half_4;
    u8 byte_6;
    u8 byte_7;
    u8 byte_8;
    u8 unknown_9[0x2b];  // (not read or written by name)
    u16 half_34;
    u16 half_36;
    u8 byte_38;
    u8 unknown_39[0x7];  // (not read or written by name)
    u16 half_40;
    u16 half_42;
    u16 half_44;
    u16 half_46;
};
GUEST_OFFSET(Frame_0058e98c, half_4, 0x4);
GUEST_OFFSET(Frame_0058e98c, byte_6, 0x6);
GUEST_OFFSET(Frame_0058e98c, byte_7, 0x7);
GUEST_OFFSET(Frame_0058e98c, byte_8, 0x8);
GUEST_OFFSET(Frame_0058e98c, half_34, 0x34);
GUEST_OFFSET(Frame_0058e98c, half_36, 0x36);
GUEST_OFFSET(Frame_0058e98c, byte_38, 0x38);
GUEST_OFFSET(Frame_0058e98c, half_40, 0x40);
GUEST_OFFSET(Frame_0058e98c, half_42, 0x42);
GUEST_OFFSET(Frame_0058e98c, half_44, 0x44);
GUEST_OFFSET(Frame_0058e98c, half_46, 0x46);
GUEST_SIZE(Frame_0058e98c, 0x48);

u32 event__EventBase__EventBase_0058e98c(gptr<event__EventNpcBirthday> event_npc_birthday) {
    guest::StackFrameOf<Frame_0058e98c> frame;  // the original's stack frame
    u32 r11 = guest::cpu()->r[11];
    frame->half_40 = 0x600;  // (from the original)
    frame->half_42 = 0;
    frame->half_4 = 0xffff;  // (from the original)
    frame->half_44 = 0xffff;  // (from the original)
    frame->half_46 = 0xffff;  // (from the original)
    frame->byte_6 = 2;
    frame->byte_8 = 2;
    frame->half_34 = 0x600;  // (from the original)
    frame->byte_38 = 1;
    frame->half_36 = 0;
    frame->byte_7 = 0x24;  // (from the original)
    event_npc_birthday->word_4 = 0;
    event_npc_birthday->word_0 = vtable_event__EventBase;
    event_npc_birthday->word_8 = 0x58ea9c;  // (from the original)
    event_npc_birthday->word_c = 0x58eaac;  // (from the original)
    copy_8_bytes(event_npc_birthday.addr() + 0x10u, frame.at(0x40).addr());  // (from the original)
    copy_record(event_npc_birthday.addr() + 0x18u, frame.at(4).addr());  // (from the original)
    copy_record(event_npc_birthday.addr() + 0x1eu, frame.at(0x34).addr());  // (from the original)
    event_npc_birthday->word_24 = 0;
    event_npc_birthday->word_0 = vtable_event__EventNpcBirthday;
    event_npc_birthday->word_28 = 0;
    event_npc_birthday->word_38 = r11 >> 0x10 << 0x10 & ~0xff0000u;  // (from the original)
    event_npc_birthday->word_34 = uxth(0u);
    event_npc_birthday->word_2c = 0;
    event_npc_birthday->word_30 = uxth(0u);
    return event_npc_birthday.addr();
}

}  // namespace d_0058e98c
GUEST_EXPORT_FRAMED(0x0058e98c, d_0058e98c::event__EventBase__EventBase_0058e98c, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0058ead4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058ead4 {

struct __attribute__((packed)) Local_0058ead4_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0058ead4_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_0058ead4_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_0058ead4_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0058ead4_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_0058ead4_ea_3, word_4, 0x4);

struct __attribute__((packed)) Local_0058ead4_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0058ead4_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_0058ead4_ea_4, word_4, 0x4);

struct __attribute__((packed)) Local_0058ead4_r0_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0058ead4_r0_2, word_0, 0x0);
GUEST_OFFSET(Local_0058ead4_r0_2, word_4, 0x4);
GUEST_OFFSET(Local_0058ead4_r0_2, word_8, 0x8);

inline constexpr u32 global_009b39f8_address = 0x009b39f8u;
inline constexpr u32 global_009b39fc_address = 0x009b39fcu;
inline guest::global<u8, 0x009524d4> global_009524d4;
inline guest::global<u8, 0x009524d6> global_009524d6;
inline guest::global<u32, 0x009b39f8> global_009b39f8;
inline guest::global<u32, 0x009b39fc> global_009b39fc;
inline guest::global<u32, 0x009b3a00> global_009b3a00;
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> return_constant_0xad56b0_;
inline constexpr guest::Function<0x00308efc, u32(u32)> TimeStamp__move_to_day_start;
inline constexpr guest::Function<0x00314278, u32(u32, u32, u32, u32)> word_and_byte_pairs_equal;

struct __attribute__((packed)) Frame_0058ead4 {
    u8 unknown_0[0x10];  // (not read or written by name)
    u32 word_10;
    u8 unknown_14[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0058ead4, word_10, 0x10);
GUEST_SIZE(Frame_0058ead4, 0x18);

u32 f_0058ead4(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0058ead4> frame;  // the original's stack frame
    if (*global_009524d4 != 0) {
        return 1u;
    }
    u32 r0_1 = *global_009524d6;
    if (r0_1 == 0) {
        return 1u;
    }
    gptr<Local_0058ead4_r0_2> r0_2 = gptr<Local_0058ead4_r0_2>(return_constant_0xad56b0_(r0_1, r1, r2, r3));
    u32 r1_1 = r0_2->word_0;
    u32 r2_1 = r0_2->word_4;
    frame->word_10 = r0_2->word_8;
    gptr<Local_0058ead4_ea_2> ea_2 = gptr<Local_0058ead4_ea_2>(frame.at(8).addr());
    ea_2->word_0 = r1_1;
    ea_2->word_4 = r2_1;
    TimeStamp__move_to_day_start(frame.at(8).addr());
    u32 r0_4 = *global_009b39fc;
    u32 r1_2 = *global_009b3a00;
    gptr<Local_0058ead4_ea_3> ea_3 = gptr<Local_0058ead4_ea_3>(frame.at(0).addr());
    ea_3->word_0 = r0_4;
    ea_3->word_4 = r1_2;
    u32 r3_1 = *global_009b39f8;
    gptr<Local_0058ead4_ea_4> ea_4 = gptr<Local_0058ead4_ea_4>(frame.at(8).addr());
    u32 r0_6 = word_and_byte_pairs_equal(ea_4->word_0, ea_4->word_4, r2_1, r3_1);
    *global_009524d6 = u8(r0_6);
    return r0_6 == 0;
}

}  // namespace d_0058ead4
GUEST_EXPORT_FRAMED(0x0058ead4, d_0058ead4::f_0058ead4, 0x4010);  // pushes {r4, lr} first, as the original

// f_0058eb60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058eb60 {

inline constexpr u32 global_009524e0_address = 0x009524e0u;
inline guest::global<u32, 0x009524e0> global_009524e0;

u32 f_0058eb60() {
    u32 r0_1 = *global_009524e0;
    if (r0_1 != 0) {
        r0_1 = *gptr<s8>(r0_1 + 0x3au);  // (from the original)
    }
    return r0_1;
}

}  // namespace d_0058eb60
GUEST_EXPORT(0x0058eb60, d_0058eb60::f_0058eb60);

// f_0058ebd8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058ebd8 {

inline constexpr u32 global_009524d4_address = 0x009524d4u;
inline constexpr u32 global_009524e0_address = 0x009524e0u;
inline guest::global<u32, 0x009524e0> global_009524e0;
inline constexpr guest::Function<0x002fb378, u32(u32)> return_constant_0xad56b0_;
inline constexpr guest::Function<0x00753a50, u32(u32, u32)> call_00753a50;

u32 f_0058ebd8(u32 r0_unused, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = *global_009524e0;
    if (r0_1 == 0) {
        return r0_1;
    }
    u32 r0_2 = return_constant_0xad56b0_(r0_1);
    u32 r0_3 = *global_009524e0;
    frame.release();
    return call_00753a50(r0_3, r0_2);
}

}  // namespace d_0058ebd8
GUEST_EXPORT(0x0058ebd8, d_0058ebd8::f_0058ebd8);

// f_0058ec08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058ec08 {

inline constexpr u32 global_009524dc_address = 0x009524dcu;
inline guest::global<u32, 0x0085e6a4> global_0085e6a4;
inline guest::global<u32, 0x0085e6a8> global_0085e6a8;
inline guest::global<u32, 0x009524dc> global_009524dc;

void f_0058ec08(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r12 = *global_0085e6a4;
    u32 r4 = *global_0085e6a8;
    u32 r2 = *global_009524dc;
    if (r2 == 0) {
        return;
    }
    do {
        u32 r3_1 = *gptr<u8>(r2 + 0x1bu);  // (from the original)
        if (r3_1 == r0) {
            u32 r0_1 = r2 + u32(s32(r4) >> 1);
            if ((r4 & 1u) == 0) {
                frame.release();
                guest::call_address<u32>(r12, r0_1, guest::cpu()->r[1], r2, r3_1);
                return;
            }
            u32 r2_1 = *gptr<u32>(r0_1);
            u32 r12_1 = *gptr<u32>(r2_1 + r12);
            frame.release();
            guest::call_address<u32>(r12_1, r0_1, guest::cpu()->r[1], r2_1, r3_1);
            return;
        }
        r2 = *gptr<u32>(r2 + 4u);
        guest::preempt();
    } while (r2 != 0);
}

}  // namespace d_0058ec08
GUEST_EXPORT(0x0058ec08, d_0058ec08::f_0058ec08);

// f_0058ed38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058ed38 {

struct __attribute__((packed)) event__EventBase {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u16 half_1c;
    u8 unknown_1e[0x6];  // (not used here)
    float float_24;
    float float_28;
    float float_2c;
    float float_30;
    float float_34;
    float float_38;
    u32 word_3c;
};
GUEST_OFFSET(event__EventBase, word_0, 0x0);
GUEST_OFFSET(event__EventBase, word_4, 0x4);
GUEST_OFFSET(event__EventBase, word_8, 0x8);
GUEST_OFFSET(event__EventBase, word_c, 0xc);
GUEST_OFFSET(event__EventBase, word_10, 0x10);
GUEST_OFFSET(event__EventBase, word_14, 0x14);
GUEST_OFFSET(event__EventBase, word_18, 0x18);
GUEST_OFFSET(event__EventBase, half_1c, 0x1c);
GUEST_OFFSET(event__EventBase, float_24, 0x24);
GUEST_OFFSET(event__EventBase, float_28, 0x28);
GUEST_OFFSET(event__EventBase, float_2c, 0x2c);
GUEST_OFFSET(event__EventBase, float_30, 0x30);
GUEST_OFFSET(event__EventBase, float_34, 0x34);
GUEST_OFFSET(event__EventBase, float_38, 0x38);
GUEST_OFFSET(event__EventBase, word_3c, 0x3c);

struct __attribute__((packed)) Object_0058ed38_1 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u16 half_1c;
    u8 unknown_1e[0x6];  // (not used here)
    float float_24;
    float float_28;
    float float_2c;
    float float_30;
    float float_34;
    float float_38;
};
GUEST_OFFSET(Object_0058ed38_1, word_8, 0x8);
GUEST_OFFSET(Object_0058ed38_1, word_c, 0xc);
GUEST_OFFSET(Object_0058ed38_1, word_10, 0x10);
GUEST_OFFSET(Object_0058ed38_1, word_14, 0x14);
GUEST_OFFSET(Object_0058ed38_1, word_18, 0x18);
GUEST_OFFSET(Object_0058ed38_1, half_1c, 0x1c);
GUEST_OFFSET(Object_0058ed38_1, float_24, 0x24);
GUEST_OFFSET(Object_0058ed38_1, float_28, 0x28);
GUEST_OFFSET(Object_0058ed38_1, float_2c, 0x2c);
GUEST_OFFSET(Object_0058ed38_1, float_30, 0x30);
GUEST_OFFSET(Object_0058ed38_1, float_34, 0x34);
GUEST_OFFSET(Object_0058ed38_1, float_38, 0x38);

struct __attribute__((packed)) Object_0058ed38_2 {
    u32 word_0;
};
GUEST_OFFSET(Object_0058ed38_2, word_0, 0x0);

inline constexpr u32 vtable_event__EventMonthlyWeekday = 0x009078c8u;
inline constexpr u32 vtable_event__EventBase = 0x009078f0u;
inline constexpr guest::Function<0x007795ec, u32(u32, u32)> copy_record;

void event__EventBase__EventBase_0058ed38(gptr<event__EventBase> event_base, gptr<Object_0058ed38_1> arg1, gptr<Object_0058ed38_2> arg2) {
    event_base->word_0 = vtable_event__EventBase;
    event_base->word_4 = 0;
    event_base->word_8 = arg1->word_8;
    event_base->word_c = arg1->word_c;
    u32 r3_1 = arg1->word_14;
    event_base->word_10 = arg1->word_10;
    event_base->word_14 = r3_1;
    event_base->word_18 = arg1->word_18;
    event_base->half_1c = arg1->half_1c;
    copy_record(event_base.addr() + 0x1eu, arg1.addr() + 0x1eu);  // (from the original)
    float S0_1 = arg1->float_24;
    float S1_1 = arg1->float_28;
    float S2_1 = arg1->float_2c;
    float S3_1 = arg1->float_30;
    float S4_1 = arg1->float_34;
    float S5_1 = arg1->float_38;
    event_base->float_24 = S0_1;
    event_base->float_28 = S1_1;
    event_base->float_2c = S2_1;
    event_base->float_30 = S3_1;
    event_base->float_34 = S4_1;
    event_base->float_38 = S5_1;
    event_base->word_0 = vtable_event__EventMonthlyWeekday;
    event_base->word_3c = arg2->word_0;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_0058ed38
GUEST_EXPORT_FRAMED(0x0058ed38, d_0058ed38::event__EventBase__EventBase_0058ed38, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0058edc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058edc4 {

inline constexpr u32 vtable_event__EventPlayerBirthday = 0x009078dcu;
inline constexpr u32 vtable_event__EventBase = 0x009078f0u;
inline constexpr guest::Function<0x003081b4, u32(u32, u32)> copy_8_bytes;
inline constexpr guest::Function<0x007795ec, u32(u32, u32)> copy_record;

struct __attribute__((packed)) Frame_0058edc4 {
    u8 unknown_0[0x4];  // (not read or written by name)
    u16 half_4;
    u8 byte_6;
    u8 byte_7;
    u8 byte_8;
    u8 unknown_9[0x2b];  // (not read or written by name)
    u16 half_34;
    u16 half_36;
    u8 byte_38;
    u8 unknown_39[0x7];  // (not read or written by name)
    u16 half_40;
    u16 half_42;
    u16 half_44;
    u16 half_46;
};
GUEST_OFFSET(Frame_0058edc4, half_4, 0x4);
GUEST_OFFSET(Frame_0058edc4, byte_6, 0x6);
GUEST_OFFSET(Frame_0058edc4, byte_7, 0x7);
GUEST_OFFSET(Frame_0058edc4, byte_8, 0x8);
GUEST_OFFSET(Frame_0058edc4, half_34, 0x34);
GUEST_OFFSET(Frame_0058edc4, half_36, 0x36);
GUEST_OFFSET(Frame_0058edc4, byte_38, 0x38);
GUEST_OFFSET(Frame_0058edc4, half_40, 0x40);
GUEST_OFFSET(Frame_0058edc4, half_42, 0x42);
GUEST_OFFSET(Frame_0058edc4, half_44, 0x44);
GUEST_OFFSET(Frame_0058edc4, half_46, 0x46);
GUEST_SIZE(Frame_0058edc4, 0x48);

void event__EventBase__EventBase_0058edc4(gptr<event__EventPlayerBirthday> event_player_birthday) {
    guest::StackFrameOf<Frame_0058edc4> frame;  // the original's stack frame
    u32 r11 = guest::cpu()->r[11];
    frame->half_40 = 0x600;  // (from the original)
    frame->half_42 = 0x600;  // (from the original)
    frame->half_4 = 0xffff;  // (from the original)
    frame->half_44 = 0xffff;  // (from the original)
    frame->half_46 = 0xffff;  // (from the original)
    frame->byte_6 = 2;
    frame->byte_8 = 2;
    frame->half_34 = 0x600;  // (from the original)
    frame->byte_38 = 1;
    frame->half_36 = 0;
    frame->byte_7 = 0x23;  // (from the original)
    event_player_birthday->word_4 = 0;
    event_player_birthday->word_0 = vtable_event__EventBase;
    event_player_birthday->word_8 = 0x58eed0;  // (from the original)
    event_player_birthday->word_c = 0x58eed0;  // (from the original)
    copy_8_bytes(event_player_birthday.addr() + 0x10u, frame.at(0x40).addr());  // (from the original)
    copy_record(event_player_birthday.addr() + 0x18u, frame.at(4).addr());  // (from the original)
    copy_record(event_player_birthday.addr() + 0x1eu, frame.at(0x34).addr());  // (from the original)
    event_player_birthday->word_24 = 0;
    event_player_birthday->word_0 = vtable_event__EventPlayerBirthday;
    event_player_birthday->word_28 = 0;
    event_player_birthday->word_38 = r11 >> 0x10 << 0x10 & ~0xff0000u;  // (from the original)
    event_player_birthday->word_34 = uxth(0u);
    event_player_birthday->word_2c = 0;
    event_player_birthday->word_30 = uxth(0u);
}

}  // namespace d_0058edc4
GUEST_EXPORT_FRAMED(0x0058edc4, d_0058edc4::event__EventBase__EventBase_0058edc4, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0058eef8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058eef8 {

inline constexpr u32 global_009524e0_address = 0x009524e0u;
inline guest::global<u32, 0x009524e0> global_009524e0;

u32 f_0058eef8() {
    return *gptr<u32>(*global_009524e0 + 0x2cu);  // (from the original)
}

}  // namespace d_0058eef8
GUEST_EXPORT(0x0058eef8, d_0058eef8::f_0058eef8);

// f_0058ef28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058ef28 {

inline constexpr u32 global_009524e0_address = 0x009524e0u;
inline guest::global<u32, 0x009524e0> global_009524e0;

u32 f_0058ef28() {
    return *gptr<u32>(*global_009524e0 + 0x28u);  // (from the original)
}

}  // namespace d_0058ef28
GUEST_EXPORT(0x0058ef28, d_0058ef28::f_0058ef28);

// f_0058efc8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058efc8 {

inline constexpr u32 global_009524e0_address = 0x009524e0u;
inline guest::global<u32, 0x009524e0> global_009524e0;

u32 f_0058efc8() {
    return *gptr<u32>(*global_009524e0 + 0x24u);  // (from the original)
}

}  // namespace d_0058efc8
GUEST_EXPORT(0x0058efc8, d_0058efc8::f_0058efc8);

// f_0058f388: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058f388 {

struct __attribute__((packed)) Object_0058f388_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u16 half_c;
    u16 half_e;
    u16 half_10;
    u16 half_12;
    u16 half_14;
    u8 byte_16;
};
GUEST_OFFSET(Object_0058f388_0, word_0, 0x0);
GUEST_OFFSET(Object_0058f388_0, word_4, 0x4);
GUEST_OFFSET(Object_0058f388_0, word_8, 0x8);
GUEST_OFFSET(Object_0058f388_0, half_c, 0xc);
GUEST_OFFSET(Object_0058f388_0, half_e, 0xe);
GUEST_OFFSET(Object_0058f388_0, half_10, 0x10);
GUEST_OFFSET(Object_0058f388_0, half_12, 0x12);
GUEST_OFFSET(Object_0058f388_0, half_14, 0x14);
GUEST_OFFSET(Object_0058f388_0, byte_16, 0x16);

struct __attribute__((packed)) Local_0058f388_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0058f388_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_0058f388_ea_3, word_4, 0x4);

struct __attribute__((packed)) Local_0058f388_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0058f388_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_0058f388_ea_4, word_4, 0x4);


void f_0058f388(gptr<Object_0058f388_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r8_1 = *gptr<u32>(guest::cpu()->r[13] + 0x24u);  // (from the original)
    u32 r12_1 = *gptr<u32>(guest::cpu()->r[13] + 0x28u);  // (from the original)
    gptr<Local_0058f388_ea_3> ea_3 = gptr<Local_0058f388_ea_3>(guest::cpu()->r[13] + 0x14u);  // (from the original)
    u32 r4_1 = ea_3->word_0;
    u32 r5_1 = ea_3->word_4;
    gptr<Local_0058f388_ea_4> ea_4 = gptr<Local_0058f388_ea_4>(guest::cpu()->r[13] + 0x1cu);  // (from the original)
    u32 r6_1 = ea_4->word_0;
    u32 r7_1 = ea_4->word_4;
    arg0->word_0 = r1;
    arg0->word_4 = r2;
    arg0->word_8 = r3;
    arg0->half_c = u16(r4_1);
    arg0->half_e = u16(r5_1);
    arg0->half_10 = u16(r6_1);
    arg0->half_12 = u16(r7_1);
    arg0->half_14 = u16(r8_1);
    arg0->byte_16 = u8(r12_1);
}

}  // namespace d_0058f388
GUEST_EXPORT_FRAMED(0x0058f388, d_0058f388::f_0058f388, 0x1f0);  // pushes {r4, r5, r6, r7, r8} first, as the original

// f_0058f3c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058f3c0 {

struct __attribute__((packed)) Object_0058f3c0_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u16 half_c;
    u16 half_e;
    u16 half_10;
    u16 half_12;
    u16 half_14;
    u8 byte_16;
};
GUEST_OFFSET(Object_0058f3c0_0, word_0, 0x0);
GUEST_OFFSET(Object_0058f3c0_0, word_4, 0x4);
GUEST_OFFSET(Object_0058f3c0_0, word_8, 0x8);
GUEST_OFFSET(Object_0058f3c0_0, half_c, 0xc);
GUEST_OFFSET(Object_0058f3c0_0, half_e, 0xe);
GUEST_OFFSET(Object_0058f3c0_0, half_10, 0x10);
GUEST_OFFSET(Object_0058f3c0_0, half_12, 0x12);
GUEST_OFFSET(Object_0058f3c0_0, half_14, 0x14);
GUEST_OFFSET(Object_0058f3c0_0, byte_16, 0x16);


void f_0058f3c0(gptr<Object_0058f3c0_0> arg0) {
    arg0->word_0 = 0;
    arg0->word_4 = 0;
    arg0->word_8 = 0;
    arg0->half_c = 0;
    arg0->half_e = 0;
    arg0->half_10 = 0;
    arg0->half_12 = 0;
    arg0->half_14 = 0;
    arg0->byte_16 = 0;
}

}  // namespace d_0058f3c0
GUEST_EXPORT(0x0058f3c0, d_0058f3c0::f_0058f3c0);

// f_0058f3ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058f3ec {

inline guest::global<u8, 0x0095bf80> global_0095bf80;
inline guest::global<u32, 0x009b3a28> global_009b3a28;
inline constexpr guest::Function<0x002fb328, u32(u32)> get_save_data;
inline constexpr guest::Function<0x00305f2c, u32(u32, u32, u32, u32)> read_global_object_byte;
inline constexpr guest::Function<0x005d46dc, u32(u32, u32)> value_for_mode;

u32 f_0058f3ec(u32 r0, u32 r1) {
    u32 r0_1 = read_global_object_byte(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 == 3u) {
        return 0u;
    }
    if (!u32(1)) {
        return uxth(*global_009b3a28);
    }
    u32 r0_3 = *global_0095bf80;
    if (r0_3 != 0) {
        u32 save_data = get_save_data(r0_3);
        return uxth(1u << (u32(*gptr<u8>(save_data + 0x621ceu)) & 0xfu));  // (from the original)
    }
    u32 r0_6 = value_for_mode(r0_3, r1);
    return uxth(lsl_r(1u, r0_6 & 0xff));  // (from the original)
}

}  // namespace d_0058f3ec
GUEST_EXPORT_FRAMED(0x0058f3ec, d_0058f3ec::f_0058f3ec, 0x4010);  // pushes {r4, lr} first, as the original

// f_0058f464: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058f464 {

struct __attribute__((packed)) Local_0058f464_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0058f464_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0058f464_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0058f464_ea_1, word_8, 0x8);

struct __attribute__((packed)) Local_0058f464_r7_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_0058f464_r7_1, word_0, 0x0);
GUEST_OFFSET(Local_0058f464_r7_1, word_4, 0x4);
GUEST_OFFSET(Local_0058f464_r7_1, word_8, 0x8);
GUEST_OFFSET(Local_0058f464_r7_1, word_c, 0xc);
GUEST_OFFSET(Local_0058f464_r7_1, word_10, 0x10);
GUEST_OFFSET(Local_0058f464_r7_1, word_14, 0x14);

inline constexpr u32 vtable_event__EventBase = 0x009078f0u;
inline constexpr guest::Function<0x003081b4, u32(u32, u32, u32, u32)> copy_8_bytes;
inline constexpr guest::Function<0x007795ec, u32(u32, u32)> copy_record;

u32 event__EventBase__EventBase_0058f464(gptr<event__EventBase> event_base, u32 r1, u32 r2, u32 r3) {
    gptr<Local_0058f464_ea_1> ea_1 = gptr<Local_0058f464_ea_1>(guest::cpu()->r[13] + 0x18u);  // (from the original)
    u32 r5_1 = ea_1->word_0;
    u32 r6_1 = ea_1->word_4;
    gptr<Local_0058f464_r7_1> r7_1 = gptr<Local_0058f464_r7_1>(ea_1->word_8);
    event_base->word_8 = r1;
    event_base->word_c = r2;
    event_base->word_0 = vtable_event__EventBase;
    event_base->word_4 = 0;
    copy_8_bytes(event_base.addr() + 0x10u, r3, r2, vtable_event__EventBase);  // (from the original)
    copy_record(event_base.addr() + 0x18u, r5_1);  // (from the original)
    copy_record(event_base.addr() + 0x1eu, r6_1);  // (from the original)
    u32 r1_1 = r7_1->word_4;
    u32 r2_2 = r7_1->word_8;
    u32 r3_2 = r7_1->word_c;
    u32 r5_2 = r7_1->word_10;
    u32 r12_1 = r7_1->word_14;
    event_base->word_24 = r7_1->word_0;
    event_base->word_28 = r1_1;
    event_base->word_2c = r2_2;
    event_base->word_30 = r3_2;
    event_base->word_34 = r5_2;
    event_base->word_38 = r12_1;
    return event_base.addr();
}

}  // namespace d_0058f464
GUEST_EXPORT_FRAMED(0x0058f464, d_0058f464::event__EventBase__EventBase_0058f464, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0058f4cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058f4cc {

struct __attribute__((packed)) event__EventBase {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u16 half_1c;
    u8 unknown_1e[0x6];  // (not used here)
    float float_24;
    float float_28;
    float float_2c;
    float float_30;
    float float_34;
    float float_38;
    u16 half_3c;
};
GUEST_OFFSET(event__EventBase, word_0, 0x0);
GUEST_OFFSET(event__EventBase, word_4, 0x4);
GUEST_OFFSET(event__EventBase, word_8, 0x8);
GUEST_OFFSET(event__EventBase, word_c, 0xc);
GUEST_OFFSET(event__EventBase, word_10, 0x10);
GUEST_OFFSET(event__EventBase, word_14, 0x14);
GUEST_OFFSET(event__EventBase, word_18, 0x18);
GUEST_OFFSET(event__EventBase, half_1c, 0x1c);
GUEST_OFFSET(event__EventBase, float_24, 0x24);
GUEST_OFFSET(event__EventBase, float_28, 0x28);
GUEST_OFFSET(event__EventBase, float_2c, 0x2c);
GUEST_OFFSET(event__EventBase, float_30, 0x30);
GUEST_OFFSET(event__EventBase, float_34, 0x34);
GUEST_OFFSET(event__EventBase, float_38, 0x38);
GUEST_OFFSET(event__EventBase, half_3c, 0x3c);

struct __attribute__((packed)) Object_0058f4cc_1 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u16 half_1c;
    u8 unknown_1e[0x6];  // (not used here)
    float float_24;
    float float_28;
    float float_2c;
    float float_30;
    float float_34;
    float float_38;
};
GUEST_OFFSET(Object_0058f4cc_1, word_8, 0x8);
GUEST_OFFSET(Object_0058f4cc_1, word_c, 0xc);
GUEST_OFFSET(Object_0058f4cc_1, word_10, 0x10);
GUEST_OFFSET(Object_0058f4cc_1, word_14, 0x14);
GUEST_OFFSET(Object_0058f4cc_1, word_18, 0x18);
GUEST_OFFSET(Object_0058f4cc_1, half_1c, 0x1c);
GUEST_OFFSET(Object_0058f4cc_1, float_24, 0x24);
GUEST_OFFSET(Object_0058f4cc_1, float_28, 0x28);
GUEST_OFFSET(Object_0058f4cc_1, float_2c, 0x2c);
GUEST_OFFSET(Object_0058f4cc_1, float_30, 0x30);
GUEST_OFFSET(Object_0058f4cc_1, float_34, 0x34);
GUEST_OFFSET(Object_0058f4cc_1, float_38, 0x38);

struct __attribute__((packed)) Object_0058f4cc_2 {
    u16 half_0;
};
GUEST_OFFSET(Object_0058f4cc_2, half_0, 0x0);

inline constexpr u32 vtable_event__EventBase = 0x009078f0u;
inline constexpr u32 vtable_event__EventDate = 0x00907904u;
inline constexpr guest::Function<0x007795ec, u32(u32, u32)> copy_record;

void event__EventBase__EventBase_0058f4cc(gptr<event__EventBase> event_base, gptr<Object_0058f4cc_1> arg1, gptr<Object_0058f4cc_2> arg2) {
    event_base->word_0 = vtable_event__EventBase;
    event_base->word_4 = 0;
    event_base->word_8 = arg1->word_8;
    event_base->word_c = arg1->word_c;
    u32 r3_1 = arg1->word_14;
    event_base->word_10 = arg1->word_10;
    event_base->word_14 = r3_1;
    event_base->word_18 = arg1->word_18;
    event_base->half_1c = arg1->half_1c;
    copy_record(event_base.addr() + 0x1eu, arg1.addr() + 0x1eu);  // (from the original)
    float S0_1 = arg1->float_24;
    float S1_1 = arg1->float_28;
    float S2_1 = arg1->float_2c;
    float S3_1 = arg1->float_30;
    float S4_1 = arg1->float_34;
    float S5_1 = arg1->float_38;
    event_base->float_24 = S0_1;
    event_base->float_28 = S1_1;
    event_base->float_2c = S2_1;
    event_base->float_30 = S3_1;
    event_base->float_34 = S4_1;
    event_base->float_38 = S5_1;
    event_base->word_0 = vtable_event__EventDate;
    event_base->half_3c = arg2->half_0;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_0058f4cc
GUEST_EXPORT_FRAMED(0x0058f4cc, d_0058f4cc::event__EventBase__EventBase_0058f4cc, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0058f718: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058f718 {

struct __attribute__((packed)) Object_0058f718_0 {
    u8 unknown_0[0x40];  // (not used here)
    u32 word_40;
    u32 word_44;
    u32 word_48;
    u8 unknown_4c[0x1c];  // (not used here)
    u32 word_68;
    u8 unknown_6c[0xaf];  // (not used here)
    u8 byte_11b;
};
GUEST_OFFSET(Object_0058f718_0, word_40, 0x40);
GUEST_OFFSET(Object_0058f718_0, word_44, 0x44);
GUEST_OFFSET(Object_0058f718_0, word_48, 0x48);
GUEST_OFFSET(Object_0058f718_0, word_68, 0x68);
GUEST_OFFSET(Object_0058f718_0, byte_11b, 0x11b);

struct __attribute__((packed)) Local_0058f718_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0058f718_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0058f718_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0058f718_ea_1, word_8, 0x8);

inline constexpr u32 global_0094ee4c_address = 0x0094ee4cu;
inline constexpr u32 global_00975bee_address = 0x00975beeu;
inline constexpr u32 global_00ae5664_address = 0x00ae5664u;
inline constexpr guest::Function<0x002073dc, u32(u32, u32, u32, u32)> call_002073dc;
inline constexpr guest::Function<0x007207d8, u32(u32, u32, u32, u32)> call_007207d8;

struct __attribute__((packed)) Frame_0058f718 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x10];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0058f718, word_0, 0x0);
GUEST_OFFSET(Frame_0058f718, word_4, 0x4);
GUEST_OFFSET(Frame_0058f718, word_8, 0x8);
GUEST_SIZE(Frame_0058f718, 0x1c);

void f_0058f718(gptr<Object_0058f718_0> arg0) {
    guest::StackFrameOf<Frame_0058f718> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r6 = r0;
    u32 r7 = global_0094ee4c_address;
    arg0->word_68 = arg0->word_68 | 0x50u;  // (from the original)
    arg0->byte_11b = 0xc8;  // (from the original)
    u32 r4 = 0u;
    u32 r1_1 = arg0->word_44;
    u32 r2_1 = arg0->word_48;
    gptr<Local_0058f718_ea_1> ea_1 = gptr<Local_0058f718_ea_1>(frame.at(0xc).addr());  // (from the original)
    ea_1->word_0 = arg0->word_40;
    ea_1->word_4 = r1_1;
    ea_1->word_8 = r2_1;
    u32 r5 = *gptr<u32>(r7 + 0x10u);  // (from the original)
L_58f754:;
    u32 r2_2 = r5 + r4 * 0x18u;  // (from the original)
    u32 r1_2 = *gptr<u32>(r2_2 + 0xcu);  // (from the original)
    if (r1_2 != 0) {
        u32 r3_1 = *gptr<u32>((r2_2 + 0xcu) + 4u);  // (from the original)
        if (r3_1 == *gptr<u32>(r1_2 + 0xcu)) {  // (from the original)
            u32 r0_2 = call_007207d8(r2_2, r1_2, r2_2, r3_1);
            if (r0_2 != 0) {
                r4 = sxtb(r4 + 1u);
                if (r4 < 0x14u) {  // (from the original)
                    guest::preempt();
                    goto L_58f754;
                }
                r4 = ~0u;
            }
        }
    }
    u32 r0_3 = *gptr<u32>(r6 + 0x68u);  // (from the original)
    u32 r1_3 = 0xf8u;  // (from the original)
    *gptr<u8>(r6 + 0x11fu) = u8(r4);  // (from the original)
    if ((r0_3 & 0x80u) != 0) {  // (from the original)
        r1_3 = 0xf9u;  // (from the original)
    }
    if (r4 + 1u != 0) {
        u32 r0_5 = s32(r4) >= 0 ? r4 < 0x14u ? *gptr<u32>(r7 + 0x10u) + r4 * 0x18u : 0u : 0u;  // (from the original)
        frame->word_0 = 0xae5664;  // (from the original)
        frame->word_4 = 1;
        frame->word_8 = 0;
        call_002073dc(r0_5, r1_3, frame.at(0xc).addr(), global_00975bee_address);  // (from the original)
        r1_3 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1_3;
}

}  // namespace d_0058f718
GUEST_EXPORT_FRAMED(0x0058f718, d_0058f718::f_0058f718, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0058f81c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058f81c {

struct __attribute__((packed)) Object_0058f81c_0 {
    u8 unknown_0[0x68];  // (not used here)
    u32 word_68;
    u8 unknown_6c[0xaf];  // (not used here)
    u8 byte_11b;
    u8 byte_11c;
};
GUEST_OFFSET(Object_0058f81c_0, word_68, 0x68);
GUEST_OFFSET(Object_0058f81c_0, byte_11b, 0x11b);
GUEST_OFFSET(Object_0058f81c_0, byte_11c, 0x11c);

inline constexpr guest::Function<0x002fccc4, u32(u32, u32)> item_number_is_indexed;
inline constexpr guest::Function<0x002fccdc, u32(u32)> indexed_item_type;
inline constexpr guest::Function<0x002fcd1c, u32(u32)> is_value_4_6_8_or_25;
inline constexpr guest::Function<0x002fcf7c, u32(u32)> value_in_set_2fcf7c;
inline constexpr guest::Function<0x002fd000, u32(u32)> item_flags_bit_14;
inline constexpr guest::Function<0x006b9d78, u32(u32)> call_006b9d78;
inline constexpr guest::Function<0x006b9de8, u32(u32)> call_006b9de8;
inline constexpr guest::Function<0x00768dc4, u32(u32, u32)> call_00768dc4;

void f_0058f81c(gptr<Object_0058f81c_0> arg0, u32 r1) {
    u32 r0_6 = 0;
    u32 r0_2 = item_number_is_indexed(arg0.addr() + 0x64u, r1);  // (from the original)
    if (r0_2 != 0) {
        u32 r0_4 = indexed_item_type(arg0.addr() + 0x64u);  // (from the original)
        u32 r0_5 = is_value_4_6_8_or_25(r0_4);
        if (r0_5 != 0) {
            r0_6 = arg0->word_68 | 0x600u | 2u;  // (from the original)
            arg0->word_68 = r0_6;
            return;
        }
        u32 r0_7 = call_006b9de8(r0_4);
        if (r0_7 == 0) {
            u32 r0_8 = value_in_set_2fcf7c(r0_4);
            if (r0_8 == 0 && r0_4 != 0x13u) {  // (from the original)
                if (r0_4 == 9u) {
                    arg0->byte_11c = 0;
                    r0_6 = arg0->word_68 | 8u;
                    arg0->word_68 = r0_6;
                    return;
                }
                u32 r0_9 = call_006b9d78(r0_4);
                if (r0_9 == 0) {
                    if (r0_4 != 0x12u && r0_4 != 1u) {  // (from the original)
                        u32 r0_11 = call_00768dc4(arg0.addr() + 0x64u, 1u);  // (from the original)
                        if (r0_11 == 0) {
                            return;
                        }
                        arg0->word_68 = arg0->word_68 | 0x400u;  // (from the original)
                        return;
                    }
                    arg0->byte_11c = 0;
                    r0_6 = arg0->word_68 | 8u;
                    arg0->word_68 = r0_6;
                    return;
                }
                arg0->byte_11c = 0;
                r0_6 = arg0->word_68 | 8u;
                arg0->word_68 = r0_6;
                return;
            }
            u32 r0_13 = item_flags_bit_14(arg0.addr() + 0x64u);  // (from the original)
            if (r0_13 != 0) {
                arg0->word_68 = arg0->word_68 | 0x10u;  // (from the original)
            }
            arg0->byte_11c = 0;
            arg0->word_68 = arg0->word_68 | 8u;
            arg0->byte_11b = 0;
            return;
        }
        arg0->word_68 = arg0->word_68 | 0x600u | 1u;  // (from the original)
    }
}

}  // namespace d_0058f81c
GUEST_EXPORT_FRAMED(0x0058f81c, d_0058f81c::f_0058f81c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0058f948: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058f948 {

inline constexpr guest::Function<0x002fcb10, u32(u32, u32, u32, u32)> Item__is_item;
inline constexpr guest::Function<0x002fcb34, u32(u32)> Item__category;
inline constexpr guest::Function<0x00582e4c, u32(u32, u32, u32, u32)> play_sound_at;
inline constexpr guest::Function<0x00768174, u32(u32, u32, u32, u32)> Item__is_kind_2;
inline constexpr guest::Function<0x0076c628, u32(u32)> Item__data_byte_0b;

u32 f_0058f948(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_4 = 0;
    u32 r0_1 = r0 + 0x64u;  // (from the original)
    if (r1 != 0) {
        u32 r0_2 = Item__is_kind_2(r0_1, r1, r2, r3);
        if (r0_2 == 0) {
            r0_4 = Item__is_item(r0 + 0x64u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            if (r0_4 == 0) {
                return r0_4;
            }
            u32 r0_6 = Item__data_byte_0b(r0 + 0x64u);  // (from the original)
            u32 category = Item__category(r0 + 0x64u);  // (from the original)
            if (r0_6 != 0x2du) {  // (from the original)
                if (r0_6 == 0x2cu) {  // (from the original)
                    frame.release();
                    return play_sound_at(0x1000561u, r0 + 0x40u, r0, 1u);  // (from the original)
                }
                if (category == 0x3du && r0_6 == 0x2fu) {  // (from the original)
                    frame.release();
                    return play_sound_at(0x100055fu, r0 + 0x40u, r0, 1u);  // (from the original)
                }
            } else {
                frame.release();
                return play_sound_at(0x1000560u, r0 + 0x40u, r0, 1u);  // (from the original)
            }
        }
    } else {
        u32 is_item = Item__is_item(r0_1, r1, r2, r3);
        if (is_item != 0) {
            r0_4 = Item__data_byte_0b(r0 + 0x64u);  // (from the original)
            if (r0_4 == 0x2du) {  // (from the original)
                return r0_4;
            }
            r0_4 = Item__data_byte_0b(r0 + 0x64u);  // (from the original)
            if (r0_4 == 0x2cu) {  // (from the original)
                return r0_4;
            }
            r0_4 = Item__data_byte_0b(r0 + 0x64u);  // (from the original)
            if (r0_4 == 0x2fu) {  // (from the original)
                return r0_4;
            }
        }
        frame.release();
        return play_sound_at(0x100055eu, r0 + 0x40u, r0, 1u);  // (from the original)
    }
    frame.release();
    return play_sound_at(0x100055du, r0 + 0x40u, r0, 1u);  // (from the original)
}

}  // namespace d_0058f948
GUEST_EXPORT(0x0058f948, d_0058f948::f_0058f948);

// f_0058fc38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058fc38 {

struct __attribute__((packed)) Object_0058fc38_0 {
    u8 unknown_0[0x28];  // (not used here)
    u32 word_28;
    u32 word_2c;
    u32 word_30;
    u8 unknown_34[0x34];  // (not used here)
    u32 word_68;
};
GUEST_OFFSET(Object_0058fc38_0, word_28, 0x28);
GUEST_OFFSET(Object_0058fc38_0, word_2c, 0x2c);
GUEST_OFFSET(Object_0058fc38_0, word_30, 0x30);
GUEST_OFFSET(Object_0058fc38_0, word_68, 0x68);

inline constexpr guest::Function<0x004e0cb0, u32(u32, u32, u32, u32)> return_constant_0x9c7ad4_;
inline constexpr guest::Function<0x004e958c, u32(u32, u32)> value_from_list;
inline constexpr guest::Function<0x004ea048, u32(u32)> return_constant_0x9c7a14_;
inline constexpr guest::Function<0x007457e8, u32(u32, u32, u32, u32)> call_007457e8;
inline constexpr guest::Function<0x007519b4, u32(u32)> id_is_88709a;

void f_0058fc38(gptr<Object_0058fc38_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = arg0->word_68;
    if (r1 != 0) {
        u32 r0_2 = r0_1 | 0x400000u;  // (from the original)
        arg0->word_68 = r0_2;
        u32 r0_3 = return_constant_0x9c7ad4_(r0_2, r1, r2, r3);
        u32 r0_4 = call_007457e8(r0_3, arg0->word_28, arg0->word_2c, 0u);
        arg0->word_30 = r0_4;
        u32 r0_5 = return_constant_0x9c7a14_(r0_4);
        u32 r0_6 = value_from_list(r0_5, arg0->word_30);
        if (r0_6 == 0) {
            return;
        }
        u32 r0_7 = id_is_88709a(r0_6);
        u32 zf_1 = r0_7 == 0;
        u32 r0_8 = arg0->word_68;
        arg0->word_68 = zf_1 ? r0_8 & ~0x8000000u : r0_8 | 0x8000000u;  // (from the original)
        return;
    }
    arg0->word_68 = r0_1 & ~0x8400000u;  // (from the original)
    arg0->word_30 = ~0u;
}

}  // namespace d_0058fc38
GUEST_EXPORT_FRAMED(0x0058fc38, d_0058fc38::f_0058fc38, 0x4010);  // pushes {r4, lr} first, as the original

// f_0058fcb0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058fcb0 {

struct __attribute__((packed)) Object_0058fcb0_0 {
    u8 unknown_0[0x68];  // (not used here)
    u32 word_68;
    u8 unknown_6c[0xb4];  // (not used here)
    u8 byte_120;
};
GUEST_OFFSET(Object_0058fcb0_0, word_68, 0x68);
GUEST_OFFSET(Object_0058fcb0_0, byte_120, 0x120);

inline constexpr guest::Function<0x00123678, u32(u32)> call_00123678;
inline constexpr guest::Function<0x001277dc, u32(u32, u32, u32)> begin_command_write;
inline constexpr guest::Function<0x001279b4, u32(u32)> advance_command_cursor;
inline constexpr guest::Function<0x0012d5bc, u32(u32, u32, u32)> call_0012d5bc;
inline constexpr guest::Function<0x0034adac, u32(u32, u32, u32, u32)> call_0034adac;
inline constexpr guest::Function<0x00726438, u32(u32, u32, u32)> call_00726438;
inline constexpr guest::Function<0x00726490, u32(u32, u32, u32)> call_00726490;
inline constexpr guest::Function<0x00727dc8, u32(u32, u32)> call_00727dc8;

struct __attribute__((packed)) Frame_0058fcb0 {
    u8 byte_0;
    u8 unknown_1[0x3];  // (not read or written by name)
    u8 byte_4;
    u8 unknown_5[0x1];  // (not read or written by name)
    u8 byte_6;
    u8 unknown_7[0x29];  // (not read or written by name)
    u8 byte_30;
    u8 byte_31;
    u8 byte_32;
    u8 unknown_33[0x22];  // (not read or written by name)
    u8 byte_55;
    u8 unknown_56[0x2a];  // (not read or written by name)
    u32 word_80;
    u8 unknown_84[0x4];  // (not read or written by name)
    u8 byte_88;
    u8 unknown_89[0x3];  // (not read or written by name)
    u8 byte_8c;
    u8 byte_8d;
    u8 byte_8e;
    u8 unknown_8f[0x2];  // (not read or written by name)
    u8 byte_91;
    u8 unknown_92[0x3];  // (not read or written by name)
    u8 byte_95;
    u8 byte_96;
    u8 unknown_97[0x6];  // (not read or written by name)
    u8 byte_9d;
    u8 unknown_9e[0x2];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0058fcb0, byte_0, 0x0);
GUEST_OFFSET(Frame_0058fcb0, byte_4, 0x4);
GUEST_OFFSET(Frame_0058fcb0, byte_6, 0x6);
GUEST_OFFSET(Frame_0058fcb0, byte_30, 0x30);
GUEST_OFFSET(Frame_0058fcb0, byte_31, 0x31);
GUEST_OFFSET(Frame_0058fcb0, byte_32, 0x32);
GUEST_OFFSET(Frame_0058fcb0, byte_55, 0x55);
GUEST_OFFSET(Frame_0058fcb0, word_80, 0x80);
GUEST_OFFSET(Frame_0058fcb0, byte_88, 0x88);
GUEST_OFFSET(Frame_0058fcb0, byte_8c, 0x8c);
GUEST_OFFSET(Frame_0058fcb0, byte_8d, 0x8d);
GUEST_OFFSET(Frame_0058fcb0, byte_8e, 0x8e);
GUEST_OFFSET(Frame_0058fcb0, byte_91, 0x91);
GUEST_OFFSET(Frame_0058fcb0, byte_95, 0x95);
GUEST_OFFSET(Frame_0058fcb0, byte_96, 0x96);
GUEST_OFFSET(Frame_0058fcb0, byte_9d, 0x9d);
GUEST_SIZE(Frame_0058fcb0, 0xa0);

void f_0058fcb0(gptr<Object_0058fcb0_0> arg0, u32 r1_unused, u32 r2) {
    guest::StackFrameOf<Frame_0058fcb0> frame;  // the original's stack frame
    call_0034adac(frame.at(0x88).addr(), 5u, r2, guest::cpu()->r[3]);  // (from the original)
    call_00123678(frame.at(0).addr());
    u32 r4_1 = arg0->byte_120;
    if ((arg0->word_68 & 0x80000u) != 0) {  // (from the original)
        frame->byte_88 = 8;
        frame->byte_8c = 3;
        frame->byte_8d = 0xd;  // (from the original)
        frame->byte_8e = 0xf;  // (from the original)
    }
    frame->byte_91 = 1;
    frame->byte_95 = 0xf;  // (from the original)
    frame->byte_96 = 0xe;  // (from the original)
    frame->byte_30 = 1;
    frame->byte_31 = 0x10;  // (from the original)
    frame->byte_32 = 6;
    frame->byte_4 = 1;
    frame->byte_0 = 1;
    frame->byte_6 = 0;
    frame->byte_9d = u8(r4_1);
    begin_command_write(0x208u, frame.at(0x80).addr(), 0x10u);  // (from the original)
    u32 r1_3 = frame->word_80;
    u32 r6_1 = frame.at(0).addr();
    if (r4_1 < 0x80u) {  // (from the original)
        frame->byte_55 = 0;
        u32 r0_4 = call_00726490(r6_1 + 0x54u, r1_3, 0u);  // (from the original)
        frame->word_80 = r0_4;
    }
    u32 r0_6 = call_00726438(r6_1 + 0x30u, frame->word_80, 0u);  // (from the original)
    frame->word_80 = r0_6;
    u32 r0_8 = call_0012d5bc(frame.at(0).addr(), r0_6, 1u);
    frame->word_80 = r0_8;
    u32 r0_10 = call_00727dc8(frame.at(0x88).addr(), r0_8);  // (from the original)
    frame->word_80 = r0_10;
    advance_command_cursor(r0_10 - r1_3 & ~3u);
}

}  // namespace d_0058fcb0
GUEST_EXPORT_FRAMED(0x0058fcb0, d_0058fcb0::f_0058fcb0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0058fde0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058fde0 {

struct __attribute__((packed)) Object_0058fde0_0 {
    u8 unknown_0[0x74];  // (not used here)
    u32 word_74;
};
GUEST_OFFSET(Object_0058fde0_0, word_74, 0x74);

struct __attribute__((packed)) Local_0058fde0_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0058fde0_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_0058fde0_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_0058fde0_ea_2, word_8, 0x8);


void f_0058fde0(gptr<Object_0058fde0_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r12_1 = *gptr<u32>(guest::cpu()->r[13] + 0x10u);  // (from the original)
    gptr<Local_0058fde0_ea_2> ea_2 = gptr<Local_0058fde0_ea_2>(guest::cpu()->r[13] + 0x14u);  // (from the original)
    u32 r4_1 = ea_2->word_0;
    u32 r5_1 = ea_2->word_4;
    u32 r6_1 = ea_2->word_8;
    u32 r1_1 = r1 & 0xffu | (r2 & 0xffu) << 8 | (r3 & 0xffu) << 0x10;  // (from the original)
    arg0->word_74 = r1_1;
    if (r12_1 != 0) {
        r1_1 |= 0x1000000u;  // (from the original)
        arg0->word_74 = r1_1;
    }
    if (r4_1 != 0) {
        r1_1 |= 0x2000000u;  // (from the original)
        arg0->word_74 = r1_1;
    }
    if (r5_1 == 0) {
        r1_1 |= 0x4000000u;  // (from the original)
        arg0->word_74 = r1_1;
    }
    if (r3 + 1u == 0) {
        r1_1 |= 0x8000000u;  // (from the original)
        arg0->word_74 = r1_1;
    }
    if (r6_1 != 0) {
        r1_1 |= 0x10000000u;  // (from the original)
        arg0->word_74 = r1_1;
    }
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_0058fde0
GUEST_EXPORT_FRAMED(0x0058fde0, d_0058fde0::f_0058fde0, 0xf0);  // pushes {r4, r5, r6, r7} first, as the original

// f_0058fe4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0058fe4c {

struct __attribute__((packed)) Local_0058fe4c_r0_12 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(Local_0058fe4c_r0_12, byte_0, 0x0);
GUEST_OFFSET(Local_0058fe4c_r0_12, byte_1, 0x1);

inline constexpr u32 global_0094ee4c_address = 0x0094ee4cu;
inline constexpr u32 global_0094ee60_address = 0x0094ee60u;
inline guest::global<u8, 0x0094ee4f> global_0094ee4f;
inline guest::global<u32, 0x0094ee60> global_0094ee60;
inline constexpr guest::Function<0x002fcb10, u32(u32)> Item__is_item;
inline constexpr guest::Function<0x002fcb9c, u32(u32, u32)> item_flags_bit_15;
inline constexpr guest::Function<0x002fccc4, u32(u32, u32)> item_number_is_indexed;
inline constexpr guest::Function<0x002fd010, u32(u32, u32)> map_object_entry;
inline constexpr guest::Function<0x00768174, u32(u32, u32)> Item__is_kind_2;

void f_0058fe4c(u32 r0, u32 r1, float S0) {
    gptr<Local_0058fe4c_r0_12> r0_12 = gptr<Local_0058fe4c_r0_12>(0u);
    u32 r0_14 = 0;
    u32 r0_2 = item_flags_bit_15(r0 + 0x64u, r1);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    float S0_1 = guest::cpu()->s[0];
    if (r0_2 == 0) {
        u32 r0_4 = item_number_is_indexed(r0 + 0x64u, r1_1);  // (from the original)
        S0_1 = guest::cpu()->s[0];
        if (r0_4 == 0) {
            u32 is_item = Item__is_item(r0 + 0x64u);  // (from the original)
            r1_1 = guest::cpu()->r[1];
            if (is_item == 0) {
                u32 r0_8 = Item__is_kind_2(r0 + 0x64u, r1_1);  // (from the original)
                r1_1 = guest::cpu()->r[1];
                S0_1 = guest::cpu()->s[0];
                if (r0_8 == 0) {
                    return;
                }
            }
            float S0_3 = 8.0f;
            *gptr<u32>(r0 + 0x68u) = *gptr<u32>(r0 + 0x68u) | 0x4000u;  // (from the original)
            *gptr<u32>(r0 + 0x1cu) = std::bit_cast<u32>(S0_3);  // (from the original)
            *gptr<u8>(r0 + 0x122u) = 0;  // (from the original)
            guest::cpu()->r[1] = r1_1;
            guest::cpu()->s[0] = S0_3;
            return;
        }
        u32 r6_1 = r0 + 0x64u;  // (from the original)
        r1_1 = s8(*global_0094ee4f);
        u32 r5_1 = *global_0094ee60;
        if ((0u - r1_1 & r5_1) != 0) {
            guest::cpu()->s[0] = S0_1;
            u32 r0_9 = item_number_is_indexed(r6_1, r1_1);
            r1_1 = guest::cpu()->r[1];
            S0_1 = guest::cpu()->s[0];
            if (r0_9 != 0) {
                u32 r0_10 = map_object_entry(r6_1, r1_1);
                r1_1 = guest::cpu()->r[1];
                S0_1 = guest::cpu()->s[0];
                u32 r0_11 = *gptr<u8>(r0_10 + 0xcu);  // (from the original)
                if (r0_11 >= 0x87u) {  // (from the original)
                    r0_12 = gptr<Local_0058fe4c_r0_12>(0u);
                } else {
                    if (r0_11 == 0) {
                        return;
                    }
                    r1_1 = *gptr<u32>(r5_1 + 0x414u);  // (from the original)
                    r0_12 = gptr<Local_0058fe4c_r0_12>(r1_1 == 0 ? 0u : r1_1 + (r0_11 * 3u + (r0_11 << 3) << 1));
                }
                u32 nf_1 = r0_12.addr() >> 0x1f;  // (from the original)
                u32 zf_1 = r0_12.addr() == 0;
                if (!zf_1) {
                    r1_1 = s8(r0_12->byte_0);
                    nf_1 = r1_1 >> 0x1f;  // (from the original)
                    zf_1 = r1_1 == 0;
                }
                if (!zf_1 && nf_1 == 0u) {
                    S0_1 = float(s32(r1_1));
                    *gptr<u32>(r0 + 0x1cu) = std::bit_cast<u32>(S0_1);  // (from the original)
                    r1_1 = *gptr<u32>(r0 + 0x68u) | 0x4000u;  // (from the original)
                    *gptr<u32>(r0 + 0x68u) = r1_1;  // (from the original)
                    u32 r0_13 = s8(r0_12->byte_1);
                    if (r0_13 != 0) {
                        if (r0_13 == 1u) {
                            r0_14 = 2u;
                            *gptr<u8>(r0 + 0x122u) = u8(r0_14);  // (from the original)
                            guest::cpu()->r[1] = r1_1;
                            guest::cpu()->s[0] = S0_1;
                            return;
                        }
                        if (r0_13 == 2u) {
                            r0_14 = 3u;
                            *gptr<u8>(r0 + 0x122u) = u8(r0_14);  // (from the original)
                            guest::cpu()->r[1] = r1_1;
                            guest::cpu()->s[0] = S0_1;
                            return;
                        }
                        if (r0_13 == 3u) {
                            *gptr<u8>(r0 + 0x122u) = 4;  // (from the original)
                            guest::cpu()->r[1] = r1_1;
                            guest::cpu()->s[0] = S0_1;
                            return;
                        }
                    }
                    *gptr<u8>(r0 + 0x122u) = 0;  // (from the original)
                }
            }
        }
    }
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_1;
}

}  // namespace d_0058fe4c
GUEST_EXPORT_FRAMED(0x0058fe4c, d_0058fe4c::f_0058fe4c, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original
