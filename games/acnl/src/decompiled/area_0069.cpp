// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_006904b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006904b4 {

struct __attribute__((packed)) Object_006904b4_0 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
};
GUEST_OFFSET(Object_006904b4_0, byte_8, 0x8);

inline constexpr u32 global_0094f310_address = 0x0094f310u;
inline guest::global<u32, 0x0094f310> global_0094f310;
inline constexpr guest::Function<0x002f74c8, u32(u32)> read_global_byte_2;
inline constexpr guest::Function<0x004ea048, u32(u32)> return_constant_0x9c7a14_;
inline constexpr guest::Function<0x00536110, u32(u32)> call_00536110;
inline constexpr guest::Function<0x005361a8, u32(u32, u32, u32, u32)> Item__data;
inline constexpr guest::Function<0x0057b9dc, u32(u32, u32, u32, u32)> call_0057b9dc;
inline constexpr guest::Function<0x005b4678, u32(u32)> call_005b4678;
inline constexpr guest::Function<0x0074557c, u32(u32)> free_elements_in_list;
inline constexpr guest::Function<0x00748574, u32(u32, u32)> FurnitureRef__table_value;
inline constexpr guest::Function<0x007486dc, u32(u32)> ItemData__has_kind_11;

struct __attribute__((packed)) Frame_006904b4 {
    u32 word_0;
};
GUEST_OFFSET(Frame_006904b4, word_0, 0x0);
GUEST_SIZE(Frame_006904b4, 0x4);

u32 f_006904b4(gptr<Object_006904b4_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_006904b4> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r7_1 = *global_0094f310;
    u32 r0_1 = Item__data(arg0.addr(), r1, r2, r3);
    u32 r6_1 = arg0->byte_8 == 2u;
    if (r0_1 != 0) {
        u32 r0_2 = ItemData__has_kind_11(r0_1);
        u32 r0_3 = r0_2 | r6_1;
        if (r0_3 != 0) {
            u32 r0_4 = read_global_byte_2(r0_3);
            u32 r0_5 = call_005b4678(r0_4);
            if (r0_5 == 0) {
                u32 r0_6 = return_constant_0x9c7a14_(r0_5);
                u32 r0_7 = free_elements_in_list(r0_6);
                if (r0_7 != 0 || arg0->byte_8 == 2u) {
                    u32 r0_8 = call_00536110(1u);
                    u32 r1_4 = *gptr<u8>(r0_1 + 0x11u);  // (from the original)
                    if (r1_4 < 0x56u && r1_4 != 0) {  // (from the original)
                        r0_8 = FurnitureRef__table_value(r0_1, r1_4);
                    }
                    frame->word_0 = 0;
                    u32 r0_9 = call_0057b9dc(r0_8, r7_1, arg0.addr(), 0u);
                    return r0_9;
                }
            }
        }
    }
    return 0u;
}

}  // namespace d_006904b4
GUEST_EXPORT_FRAMED(0x006904b4, d_006904b4::f_006904b4, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00691210: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00691210 {

struct __attribute__((packed)) Local_00691210_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00691210_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00691210_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_00691210_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_00691210_ea_1, word_c, 0xc);

struct __attribute__((packed)) Local_00691210_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00691210_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_00691210_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_00691210_ea_2, word_8, 0x8);

struct __attribute__((packed)) Local_00691210_ea_3 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00691210_ea_3, word_4, 0x4);
GUEST_OFFSET(Local_00691210_ea_3, word_8, 0x8);
GUEST_OFFSET(Local_00691210_ea_3, word_c, 0xc);

inline constexpr guest::Function<0x005c33cc, u32(u32, u32, u32, u32)> call_005c33cc;
inline constexpr guest::Function<0x00690fb8, u32(u32, u32, u32, u32)> call_00690fb8;

u32 f_00691210(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r14 = guest::cpu()->r[14];
    u32 r0_2 = 0;
    gptr<Local_00691210_ea_1> ea_1 = gptr<Local_00691210_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r3;
    ea_1->word_4 = r4;
    ea_1->word_8 = r5;
    ea_1->word_c = r14;
    u32 r0_1 = call_005c33cc(4u, 0u, r2, r3);
    if (r0_1 == 0) {
        r0_2 = ~0u;
    } else {
        *frame.at<u16>(0) = *gptr<u16>(r0_1 + 0x2eu);  // (from the original)
        u32 r2_1 = *frame.at<u32>(0);
        gptr<Local_00691210_ea_2> ea_2 = gptr<Local_00691210_ea_2>(frame.at(4).addr());
        u32 r4_1 = ea_2->word_0;
        u32 r5_1 = ea_2->word_4;
        r14 = ea_2->word_8;
        guest::cpu()->r[4] = r4_1;
        guest::cpu()->r[5] = r5_1;
        frame.release();
        return call_00690fb8(r0, r0_1 + 0x14u, r2_1, r1);  // (from the original)
    }
    gptr<Local_00691210_ea_3> ea_3 = gptr<Local_00691210_ea_3>(frame.at(0).addr());
    u32 r4_2 = ea_3->word_4;
    u32 r5_2 = ea_3->word_8;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_2;
    return r0_2;
}

}  // namespace d_00691210
GUEST_EXPORT(0x00691210, d_00691210::f_00691210);

// f_0069125c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0069125c {

inline constexpr guest::Function<0x002f74c8, u32(u32)> read_global_byte_2;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> table_entry_has_all_bits;
inline constexpr guest::Function<0x002fcb84, u32(u32, u32)> Item__has_number;
inline constexpr guest::Function<0x004e0cb0, u32(u32, u32, u32, u32)> return_constant_0x9c7ad4_;
inline constexpr guest::Function<0x004e99f0, u32(u32, u32, u32)> call_004e99f0;
inline constexpr guest::Function<0x0056e6a8, u32(u32, u32)> call_0056e6a8;
inline constexpr guest::Function<0x00571ea4, u32(u32, u32, u32, u32)> call_00571ea4;
inline constexpr guest::Function<0x0057456c, u32(u32, u32)> call_0057456c;
inline constexpr guest::Function<0x00751058, u32(u32)> member_address_0x5e4_;
inline constexpr guest::Function<0x00751824, u32(u32)> furniture_value_08;
inline constexpr guest::Function<0x00751840, u32(u32)> id_is_88709c;
inline constexpr guest::Function<0x007519b4, u32(u32)> id_is_88709a;

void f_0069125c(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    for (;;) {
        u32 r0_2 = return_constant_0x9c7ad4_(r0, r1, r2, guest::cpu()->r[3]);
        u32 r0_3 = call_004e99f0(r0_2, r0, 0u);
        if (r0_3 == 0) {
            return;
        }
        u32 r0_4 = id_is_88709a(r0_3);
        if (r0_4 == 0) {
            u32 r0_5 = id_is_88709c(r0_3);
            if (r0_5 != 0) {
                u32 r0_6 = read_global_byte_2(r0_5);
                u32 r0_7 = table_entry_has_all_bits(4u, r0_6);
                if (r0_7 != 0) {
                    u32 r0_8 = member_address_0x5e4_(r0_3);
                    u32 r0_9 = Item__has_number(r0_8, 0x206cu);  // (from the original)
                    if (r0_9 == 0) {
                        goto L_691374;
                    }
                }
            }
        } else {
            u32 r0_10 = furniture_value_08(r0_3);
            if (r0_10 == 0xb6u || r0_10 == 0xb8u || r0_10 == 0xbdu || r0_10 == 0xbfu || r0_10 == 0xc0u || r0_10 == 0xc3u || r0_10 == 0xc4u || r0_10 == 0xc5u || r0_10 == 0xc6u) {  // (from the original)
                if (r1 != 0) {
                    call_0056e6a8(r0_3, 0xbau);  // (from the original)
                } else {
                    u32 r0_11 = furniture_value_08(r0_3);
                    call_0056e6a8(r0_3, r0_11);
                }
            }
        }
        call_0057456c(r0_3, r2);
        frame.release();
        call_00571ea4(r0_3, r2, guest::cpu()->r[2], guest::cpu()->r[3]);
        return;
L_691374:;
        call_0057456c(r0_3, r2);
        r0 = r0_3;
        if (!1) {
            break;
        }
        u32 r0_1 = *gptr<u32>(r0 + 0x300u);  // (from the original)
        if (r0_1 == 0) {
            return;
        }
        u32 r2_1 = *gptr<u32>(*gptr<u32>(r0_1) + 0x30u);  // (from the original)
        // virtual function 12 of r0_1
        frame.release();
        guest::call_address<u32>(r2_1, r0_1, 0x100095au, r2_1, guest::cpu()->r[3]);  // (from the original)
        return;
        guest::preempt();
    }
}

}  // namespace d_0069125c
GUEST_EXPORT(0x0069125c, d_0069125c::f_0069125c);

// f_00691544: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00691544 {

struct __attribute__((packed)) Object_00691544_0 {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
    u8 byte_5;
    u8 byte_6;
    u8 byte_7;
    u8 byte_8;
};
GUEST_OFFSET(Object_00691544_0, byte_4, 0x4);
GUEST_OFFSET(Object_00691544_0, byte_5, 0x5);
GUEST_OFFSET(Object_00691544_0, byte_6, 0x6);
GUEST_OFFSET(Object_00691544_0, byte_7, 0x7);
GUEST_OFFSET(Object_00691544_0, byte_8, 0x8);

struct __attribute__((packed)) Local_00691544_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00691544_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00691544_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_00691544_ea_1, word_8, 0x8);

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> copy_item_002fc8e8;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> copy_item_002fc934;
inline constexpr guest::Function<0x006b9df8, u32(u32)> clear_kind_11_flags_top;

struct __attribute__((packed)) Frame_00691544 {
    u32 word_0;
};
GUEST_OFFSET(Frame_00691544, word_0, 0x0);
GUEST_SIZE(Frame_00691544, 0x4);

u32 f_00691544(gptr<Object_00691544_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00691544> frame;  // the original's stack frame
    frame->word_0 = r3;
    gptr<Local_00691544_ea_1> ea_1 = gptr<Local_00691544_ea_1>(frame.at(0x20).addr());  // (from the original)
    u32 r5_1 = ea_1->word_0;
    u32 r6_1 = ea_1->word_4;
    u32 r7_1 = ea_1->word_8;
    copy_item_002fc934(frame.at(0).addr(), r1);
    clear_kind_11_flags_top(frame.at(0).addr());
    copy_item_002fc8e8(arg0.addr(), frame.at(0).addr());
    arg0->byte_4 = u8(r2);
    arg0->byte_6 = u8(r5_1);
    arg0->byte_5 = u8(r3);
    arg0->byte_7 = u8(r6_1);
    arg0->byte_8 = u8(r7_1);
    return frame.at(0).addr();
}

}  // namespace d_00691544
GUEST_EXPORT_FRAMED(0x00691544, d_00691544::f_00691544, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_006915b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006915b0 {

inline constexpr guest::Function<0x002f74c8, u32(u32)> read_global_byte_2;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> table_entry_has_all_bits;
inline constexpr guest::Function<0x002fcb84, u32(u32, u32)> Item__has_number;
inline constexpr guest::Function<0x004e0cb0, u32(u32, u32, u32, u32)> return_constant_0x9c7ad4_;
inline constexpr guest::Function<0x004e99f0, u32(u32, u32, u32)> call_004e99f0;
inline constexpr guest::Function<0x0056e6a8, u32(u32, u32)> call_0056e6a8;
inline constexpr guest::Function<0x005724ec, u32(u32, u32, u32, u32)> call_005724ec;
inline constexpr guest::Function<0x0057456c, u32(u32, u32)> call_0057456c;
inline constexpr guest::Function<0x00751058, u32(u32)> member_address_0x5e4_;
inline constexpr guest::Function<0x00751824, u32(u32)> furniture_value_08;
inline constexpr guest::Function<0x00751840, u32(u32)> id_is_88709c;
inline constexpr guest::Function<0x007519b4, u32(u32)> id_is_88709a;

u32 f_006915b0(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    for (;;) {
        u32 r0_2 = return_constant_0x9c7ad4_(r0, r1, r2, guest::cpu()->r[3]);
        u32 r0_3 = call_004e99f0(r0_2, r0, 0u);
        if (r0_3 == 0) {
            return r0_3;
        }
        u32 r0_4 = id_is_88709a(r0_3);
        if (r0_4 == 0) {
            u32 r0_5 = id_is_88709c(r0_3);
            if (r0_5 != 0) {
                u32 r0_6 = read_global_byte_2(r0_5);
                u32 r0_7 = table_entry_has_all_bits(4u, r0_6);
                if (r0_7 != 0) {
                    u32 r0_8 = member_address_0x5e4_(r0_3);
                    u32 r0_9 = Item__has_number(r0_8, 0x206cu);  // (from the original)
                    if (r0_9 == 0) {
                        goto L_6916c8;
                    }
                }
            }
        } else {
            u32 r0_10 = furniture_value_08(r0_3);
            if (r0_10 == 0xb6u || r0_10 == 0xb8u || r0_10 == 0xbdu || r0_10 == 0xbfu || r0_10 == 0xc0u || r0_10 == 0xc3u || r0_10 == 0xc4u || r0_10 == 0xc5u || r0_10 == 0xc6u) {  // (from the original)
                if (r1 != 0) {
                    call_0056e6a8(r0_3, 0xbau);  // (from the original)
                } else {
                    u32 r0_11 = furniture_value_08(r0_3);
                    call_0056e6a8(r0_3, r0_11);
                }
            }
        }
        call_0057456c(r0_3, r2);
        frame.release();
        return call_005724ec(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
L_6916c8:;
        call_0057456c(r0_3, r2);
        r1 = guest::cpu()->r[1];
        r0 = r0_3;
        if (!1) {
            break;
        }
        u32 r0_1 = *gptr<u32>(r0 + 0x300u);  // (from the original)
        if (r0_1 == 0) {
            return r0_1;
        }
        u32 r2_1 = *gptr<u32>(*gptr<u32>(r0_1) + 0x30u);  // (from the original)
        // virtual function 12 of r0_1
        frame.release();
        return guest::call_address<u32>(r2_1, r0_1, 0x100095bu, r2_1, guest::cpu()->r[3]);  // (from the original)
        guest::preempt();
    }
}

}  // namespace d_006915b0
GUEST_EXPORT(0x006915b0, d_006915b0::f_006915b0);

// f_00691754: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00691754 {

inline constexpr guest::Function<0x005c33cc, u32(u32, u32, u32, u32)> call_005c33cc;
inline constexpr guest::Function<0x00692504, u32(u32, u32, u32, u32)> call_00692504;

struct __attribute__((packed)) Frame_00691754 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00691754, word_0, 0x0);
GUEST_SIZE(Frame_00691754, 0x8);

u32 f_00691754(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00691754> frame;  // the original's stack frame
    u32 r0_2 = 0;
    u32 r0_1 = call_005c33cc(4u, 0u, r2, r3);
    if (r0_1 == 0) {
        r0_2 = 4u;
    } else {
        frame->word_0 = r2;
        u32 r1_2 = *gptr<u16>(r0_1 + 0x2eu);  // (from the original)
        *frame.at<u16>(4) = u16(r1_2);
        r0_2 = call_00692504(r0, r1, r0_1 + 0x14u, *frame.at<u32>(4));  // (from the original)
    }
    return r0_2;
}

}  // namespace d_00691754
GUEST_EXPORT_FRAMED(0x00691754, d_00691754::f_00691754, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00691ae8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00691ae8 {

struct __attribute__((packed)) Object_00691ae8_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00691ae8_0, word_0, 0x0);

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> copy_item_002fc8e8;
inline constexpr guest::Function<0x005204b0, u32(u32, u32, u32, u32)> call_005204b0;

u32 f_00691ae8(gptr<Object_00691ae8_0> arg0, u32 r1) {
    u32 r0_1 = arg0->word_0;
    if (r0_1 != 0) {
        call_005204b0(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        arg0->word_0 = 0;
    }
    copy_item_002fc8e8(arg0.addr() + 4u, empty_item_address);
    return 1u;
}

}  // namespace d_00691ae8
GUEST_EXPORT_FRAMED(0x00691ae8, d_00691ae8::f_00691ae8, 0x4010);  // pushes {r4, lr} first, as the original

// f_00691b7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00691b7c {

struct __attribute__((packed)) Local_00691b7c_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00691b7c_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_00691b7c_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_00691b7c_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00691b7c_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_00691b7c_ea_4, word_4, 0x4);

inline constexpr guest::Function<0x00614760, u32(u32)> return_constant_0x1d7c_;
inline constexpr guest::Function<0x006148e4, u32(u32)> call_006148e4;
inline constexpr guest::Function<0x00614a64, u32(u32, u32, u32, u32)> call_00614a64;
inline constexpr guest::Function<0x006a6dbc, u32(u32, u32, u32, u32)> cell_corner_with_height;
inline constexpr guest::Function<0x0075dc00, u32(u32, u32, u32, u32)> call_0075dc00;

struct __attribute__((packed)) Frame_00691b7c {
    u32 word_0;
    u8 unknown_4[0x6c];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00691b7c, word_0, 0x0);
GUEST_SIZE(Frame_00691b7c, 0x70);

u32 f_00691b7c(u32 r0, u32 r1, u32 r2, u32 r3, float S0) {
    guest::StackFrameOf<Frame_00691b7c> frame;  // the original's stack frame
    u32 r0_2 = 0;
    u32 r0_1 = r0 - r2;
    if (s32(r0_1) < 0) {
        r0_1 = 0u - r0_1;
    }
    u32 r1_1 = r1 - r3;
    if (s32(r1_1) < 0) {
        r1_1 = 0u - r1_1;
    }
    u32 res_1 = r0_1 + r1_1;
    u32 zf_1 = res_1 == 0;
    if (!zf_1) {
        zf_1 = res_1 == 1u;
    }
    if (zf_1) {
        r0_2 = 1u;
    } else {
        cell_corner_with_height(frame.at(0x58).addr(), r0, r1, r3);  // (from the original)
        cell_corner_with_height(frame.at(0x64).addr(), r2, r1, guest::cpu()->r[3]);  // (from the original)
        u32 r0_6 = call_006148e4(frame.at(0xc).addr());  // (from the original)
        u32 r0_7 = return_constant_0x1d7c_(r0_6);
        frame->word_0 = 1;
        gptr<Local_00691b7c_ea_2> ea_2 = gptr<Local_00691b7c_ea_2>(frame.at(4).addr());
        ea_2->word_0 = r0_7;
        ea_2->word_4 = 0;
        float S0_4 = 15.0f;
        guest::cpu()->s[0] = S0_4;
        call_00614a64(frame.at(0xc).addr(), frame.at(0x64).addr(), frame.at(0x58).addr(), 0u);  // (from the original)
        u32 r0_10 = call_0075dc00(frame.at(0xc).addr(), 0xfu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        if (r0_10 == 0) {
            return 1u;
        }
        cell_corner_with_height(frame.at(0x64).addr(), r0, r3, guest::cpu()->r[3]);  // (from the original)
        u32 r0_13 = call_006148e4(frame.at(0xc).addr());  // (from the original)
        u32 r0_14 = return_constant_0x1d7c_(r0_13);
        frame->word_0 = 1;
        gptr<Local_00691b7c_ea_4> ea_4 = gptr<Local_00691b7c_ea_4>(frame.at(4).addr());
        ea_4->word_0 = r0_14;
        ea_4->word_4 = 0;
        float S0_8 = 15.0f;
        u32 r2_7 = frame.at(0x58).addr();  // (from the original)
        guest::cpu()->s[0] = S0_8;
        call_00614a64(frame.at(0xc).addr(), frame.at(0x64).addr(), r2_7, 0u);  // (from the original)
        u32 r0_17 = call_0075dc00(frame.at(0xc).addr(), 0xfu, r2_7, 0u);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        if (r0_17 == 0) {
            return 1u;
        }
        r0_2 = 0u;
    }
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0;
    return r0_2;
}

}  // namespace d_00691b7c
GUEST_EXPORT_FRAMED(0x00691b7c, d_00691b7c::f_00691b7c, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00691cb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00691cb4 {

inline constexpr u32 global_0094f31c_address = 0x0094f31cu;
inline constexpr u32 global_0094f320_address = 0x0094f320u;
inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr u32 global_0095c6d0_address = 0x0095c6d0u;
inline guest::global<u32, 0x0095c6d0> global_0095c6d0;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> read_global_byte_2;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> table_entry_has_all_bits;
inline constexpr guest::Function<0x002fc20c, u32(u32)> construct_empty_item;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> copy_item_002fc8e8;
inline constexpr guest::Function<0x004e0cb0, u32(u32)> return_constant_0x9c7ad4_;
inline constexpr guest::Function<0x004e7344, u32(u32)> call_004e7344;
inline constexpr guest::Function<0x004e958c, u32(u32, u32)> value_from_list;
inline constexpr guest::Function<0x004e99f0, u32(u32, u32, u32)> call_004e99f0;
inline constexpr guest::Function<0x004ea048, u32(u32)> return_constant_0x9c7a14_;
inline constexpr guest::Function<0x00521d3c, u32(u32)> pad_has_bit_04;
inline constexpr guest::Function<0x0052c4d8, u32(u32)> call_0052c4d8;
inline constexpr guest::Function<0x005b4018, u32(u32)> mode_page_player_is_main_slot;
inline constexpr guest::Function<0x005c33cc, u32(u32, u32)> call_005c33cc;
inline constexpr guest::Function<0x00690fb8, u32(u32, u32, u32, u32)> call_00690fb8;
inline constexpr guest::Function<0x00751058, u32(u32)> member_address_0x5e4_;
inline constexpr guest::Function<0x00751a20, u32(u32)> mode_7b4_below_2;
inline constexpr guest::Function<0x0076e7c8, u32(u32)> slot_byte_09;

void f_00691cb4(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x20);  // the original's stack frame
    u32 r0_15 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    u32 r1_11 = 0;
    u32 r0_21 = 0;
    u32 r0_22 = 0;
    u32 r0_23 = 0;
    u32 r0_1 = read_global_byte_2(r0, r1, r2, r3);
    u32 r0_2 = table_entry_has_all_bits(0x4000u, r0_1);  // (from the original)
    if (r0_2 == 0) {
        u32 r0_3 = table_entry_has_all_bits(0x2000u, r0_1);  // (from the original)
        if (r0_3 != 0) {
            r0_3 = mode_page_player_is_main_slot(r0_1);
            if (r0_3 == 0) {
                goto L_691d40;
            }
        }
        u32 r0_4 = read_global_byte_2(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r0_5 = call_004e7344(r0_4);
        if (r0_5 == 0) {
            return;
        }
        u32 r0_6 = *global_0095c6d0;
        if (r0_6 != 0) {
            u32 r0_8 = slot_byte_09(r0_6 + 0x10u);  // (from the original)
            if (r0_8 == 2u) {
                return;
            }
        }
    }
L_691d40:;
    u32 r0_9 = pad_has_bit_04(1u);
    if (r0_9 != 0) {
        copy_item_002fc8e8(global_0094f320_address, empty_item_address);
        copy_item_002fc8e8(global_0094f31c_address, global_0094f320_address);
        u32 r0_10 = frame.at(0xc).addr();  // (from the original)
        construct_empty_item(r0_10);
        construct_empty_item(r0_10 + 4u);
        u32 r0_12 = call_005c33cc(4u, 0u);
        if (r0_12 != 0) {
            *frame.at<u16>(0x1c) = *gptr<u16>(r0_12 + 0x2eu);  // (from the original)
            u32 r0_13 = call_00690fb8(frame.at(0).addr(), r0_12 + 0x14u, *frame.at<u32>(0x1c), 1u);  // (from the original)
            if (r0_13 + 2u != 0) {
                if (s32(r0_13) < 0) {
                    goto L_691ebc;
                }
                u32 r0_14 = return_constant_0x9c7a14_(r0_13);
                r0_15 = value_from_list(r0_14, r0_13);
                if (r0_15 == 0) {
                    goto L_691ebc;
                }
                u32 r0_16 = mode_7b4_below_2(r0_15);
                if (r0_16 == 1u) {
                    u32 r0_17 = member_address_0x5e4_(r0_15);
                    copy_item_002fc8e8(global_0094f320_address, r0_17);
                    u32 r0_18 = return_constant_0x9c7ad4_(global_0094f320_address);
                    r0_19 = call_004e99f0(r0_18, frame.at(0).addr(), 0u);
                    if (r0_19 == 0) {
                        goto L_691eb4;
                    }
                    goto L_691ea0;
                }
                if (r0_16 == 0) {
                    r0_19 = r0_15;
                    goto L_691ea0;
                }
                goto L_691eb4;
            }
            copy_item_002fc8e8(global_0094f320_address, frame.at(0).addr() + 0x10u);  // (from the original)
            r0_20 = return_constant_0x9c7ad4_(global_0094f320_address);
            r1_11 = frame.at(0).addr();
            r0_21 = call_004e99f0(r0_20, r1_11, 0u);
            if (r0_21 == 0) {
                goto L_691ebc;
            }
            r0_22 = member_address_0x5e4_(r0_21);
            copy_item_002fc8e8(global_0094f31c_address, r0_22);
            call_0052c4d8(r0_21);
            goto L_691ebc;
L_691ea0:;
            r0_23 = member_address_0x5e4_(r0_19);
            copy_item_002fc8e8(global_0094f31c_address, r0_23);
L_691eb4:;
            call_0052c4d8(r0_15);
        }
L_691ebc:;
    }
}

}  // namespace d_00691cb4
GUEST_EXPORT_FRAMED(0x00691cb4, d_00691cb4::f_00691cb4, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0069335c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0069335c {

inline constexpr u32 global_0095c6d0_address = 0x0095c6d0u;
inline guest::global<u32, 0x0095c6d0> global_0095c6d0;
inline constexpr guest::Function<0x002f74c8, u32(u32)> read_global_byte_2;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> table_entry_has_all_bits;
inline constexpr guest::Function<0x004e7344, u32(u32)> call_004e7344;
inline constexpr guest::Function<0x005b4018, u32(u32)> mode_page_player_is_main_slot;
inline constexpr guest::Function<0x0076e7c8, u32(u32)> slot_byte_09;

u32 f_0069335c(u32 r0) {
    u32 r0_1 = table_entry_has_all_bits(0x4000u, r0);  // (from the original)
    if (r0_1 != 0) {
        return 1u;
    }
    u32 r0_2 = table_entry_has_all_bits(0x2000u, r0);  // (from the original)
    if (r0_2 != 0) {
        r0_2 = mode_page_player_is_main_slot(r0);
        if (r0_2 == 0) {
            return 1u;
        }
    }
    u32 r0_3 = read_global_byte_2(r0_2);
    u32 r0_4 = call_004e7344(r0_3);
    if (r0_4 == 0) {
        return r0_4;
    }
    u32 r0_5 = *global_0095c6d0;
    if (r0_5 == 0) {
        return 1u;
    }
    u32 r0_7 = slot_byte_09(r0_5 + 0x10u);  // (from the original)
    return r0_7 != 2u;
}

}  // namespace d_0069335c
GUEST_EXPORT_FRAMED(0x0069335c, d_0069335c::f_0069335c, 0x4010);  // pushes {r4, lr} first, as the original

// f_006934a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006934a0 {

inline constexpr guest::Function<0x002f74c8, u32(u32)> read_global_byte_2;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> table_entry_has_all_bits;
inline constexpr guest::Function<0x005b4954, u32(u32)> record_value_is_11;

u32 f_006934a0(u32 r0) {
    u32 r0_1 = read_global_byte_2(r0);
    u32 r0_2 = table_entry_has_all_bits(0x80u, r0_1);  // (from the original)
    if (r0_2 != 0) {
        return 1u;
    }
    u32 r0_3 = table_entry_has_all_bits(0x40u, r0_1);  // (from the original)
    if (r0_3 != 0) {
        return 1u;
    }
    u32 r0_4 = table_entry_has_all_bits(0x2000u, r0_1);  // (from the original)
    if (r0_4 != 0) {
        return 1u;
    }
    u32 r0_5 = table_entry_has_all_bits(0x4000u, r0_1);  // (from the original)
    if (r0_5 != 0) {
        return 1u;
    }
    u32 r0_6 = table_entry_has_all_bits(0x20000000u, r0_1);  // (from the original)
    if (r0_6 != 0) {
        return 1u;
    }
    u32 r0_7 = record_value_is_11(r0_1);
    return r0_7 == 0 ? r0_7 : 1u;
}

}  // namespace d_006934a0
GUEST_EXPORT_FRAMED(0x006934a0, d_006934a0::f_006934a0, 0x4010);  // pushes {r4, lr} first, as the original

// f_00693a64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00693a64 {

inline constexpr guest::Function<0x006935a8, u32(u32, u32, u32, u32)> call_006935a8;

struct __attribute__((packed)) Frame_00693a64 {
    u32 word_0;
};
GUEST_OFFSET(Frame_00693a64, word_0, 0x0);
GUEST_SIZE(Frame_00693a64, 0x4);

u32 f_00693a64(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00693a64> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 zf_1 = r2 == 0;
    frame->word_0 = 0;
    call_006935a8(guest::cpu()->r[0], zf_1 ? 0x33a8u : 0x33a9u, r1, 1u);  // (from the original)
    return guest::cpu()->r[0];
}

}  // namespace d_00693a64
GUEST_EXPORT_FRAMED(0x00693a64, d_00693a64::f_00693a64, 0x4000);  // pushes {lr} first, as the original

// f_00693cc8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00693cc8 {


struct __attribute__((packed)) Frame_00693cc8 {
    u16 half_0;
    u8 unknown_2[0x2];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00693cc8, half_0, 0x0);
GUEST_SIZE(Frame_00693cc8, 0x4);

u32 f_00693cc8(u32 r0) {
    guest::StackFrameOf<Frame_00693cc8> frame;  // the original's stack frame
    if (r0 == 0) {
        return 0u;
    }
    if (r0 != 1u) {
        if (r0 == 2u) {
            return uxth(0xffff8000u);  // (from the original)
        }
        if (r0 == 3u) {
            return uxth(0xffffc000u);  // (from the original)
        }
        return 0u;
    }
    frame->half_0 = 0x4000;  // (from the original)
    return 0x4000u;  // (from the original)
}

}  // namespace d_00693cc8
GUEST_EXPORT(0x00693cc8, d_00693cc8::f_00693cc8);

// f_00694178: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00694178 {

struct __attribute__((packed)) Object_00694178_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00694178_0, word_4, 0x4);

struct __attribute__((packed)) Local_00694178_r2_2 {
    u8 unknown_0[0xc];  // (not used here)
    u8 byte_c;
};
GUEST_OFFSET(Local_00694178_r2_2, byte_c, 0xc);


u32 f_00694178(gptr<Object_00694178_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r12 = arg0->word_4;
    u32 r1 = 0u;
    if (r12 < 0u || r12 == 0) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    do {
        u32 r2_1 = r1 >> 3;
        u32 r3_1 = r1 & 7u;
        if ((lsr_r(u32(*gptr<u8>(r0 + r2_1 + 0xcu)), r3_1 & 0xff) & 1u) == 0) {  // (from the original)
            gptr<Local_00694178_r2_2> r2_2 = gptr<Local_00694178_r2_2>(r2_1 + r0);
            r2_2->byte_c = u8(u32(r2_2->byte_c) | lsl_r(1u, r3_1 & 0xff));  // (from the original)
            u32 r0_1 = *gptr<u32>(r0) * r1 + *gptr<u32>(r0 + 8u);
            guest::cpu()->r[1] = r1;
            return r0_1;
        }
        r1 += 1u;
        guest::preempt();
    } while (r12 > r1);
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_00694178
GUEST_EXPORT_FRAMED(0x00694178, d_00694178::f_00694178, 0x10);  // pushes {r4} first, as the original

// f_0069438c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0069438c {

struct __attribute__((packed)) Object_0069438c_0 {
    u8 unknown_0[0x2c];  // (not used here)
    u32 word_2c;
};
GUEST_OFFSET(Object_0069438c_0, word_2c, 0x2c);

struct __attribute__((packed)) Object_0069438c_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_0069438c_1, word_0, 0x0);
GUEST_OFFSET(Object_0069438c_1, word_4, 0x4);
GUEST_OFFSET(Object_0069438c_1, word_8, 0x8);

inline constexpr guest::Function<0x004edd20, u32(u32)> escape__MapCloudModel__virtual_2;
inline constexpr guest::Function<0x004f1294, u32(u32, u32, u32, u32)> call_004f1294;
inline constexpr guest::Function<0x00745bd8, u32(u32, u32, u32)> call_00745bd8;
inline constexpr guest::Function<0x007460e8, u32(u32)> call_007460e8;

struct __attribute__((packed)) Frame_0069438c {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Frame_0069438c, word_0, 0x0);
GUEST_OFFSET(Frame_0069438c, word_4, 0x4);
GUEST_OFFSET(Frame_0069438c, word_8, 0x8);
GUEST_SIZE(Frame_0069438c, 0xc);

u32 f_0069438c(gptr<Object_0069438c_0> arg0, gptr<Object_0069438c_1> arg1, u32 r2) {
    guest::StackFrameOf<Frame_0069438c> frame;  // the original's stack frame
    u32 r0_1 = arg0->word_2c;
    if (r0_1 != 0 && r0_1 == r2) {
        call_004f1294(arg0.addr(), arg1.addr(), r2, guest::cpu()->r[3]);
        escape__MapCloudModel__virtual_2(arg0.addr());
        call_00745bd8(arg0.addr(), frame.at(0).addr(), 0u);
        arg1->word_0 = frame->word_0;
        arg1->word_4 = frame->word_4;
        arg1->word_8 = frame->word_8;
        u32 r0_3 = call_007460e8(arg0.addr() + 0xcu);  // (from the original)
        if (r0_3 == 0) {
            return r0_3;
        }
        arg0->word_2c = 0;
        return 1u;
    }
    guest::cpu()->r[1] = arg1.addr();
    return 0u;
}

}  // namespace d_0069438c
GUEST_EXPORT_FRAMED(0x0069438c, d_0069438c::f_0069438c, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00694918: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00694918 {

struct __attribute__((packed)) Object_00694918_0 {
    u8 unknown_0[0x614];  // (not used here)
    u32 word_614;
};
GUEST_OFFSET(Object_00694918_0, word_614, 0x614);

inline guest::global<u32, 0x00848130> global_00848130;
inline guest::global<u32, 0x00848134> global_00848134;
inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> call_004b4fc0;
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> notify_list_objects;
inline constexpr guest::Function<0x0081b218, u32(u32, u32, u32)> call_0081b218;

u32 f_00694918(gptr<Object_00694918_0> arg0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r0_2 = call_004b4fc0(arg0.addr() + 0x280u, 0x84817cu, 1u, r3);  // (from the original)
    notify_list_objects(arg0.addr() + 0x280u, arg0.addr() + 0x540u, r0_2, 0u);  // (from the original)
    u32 r0_5 = call_004b4fc0(arg0.addr() + 0x280u, 0x84817cu, 1u, guest::cpu()->r[3]);  // (from the original)
    notify_list_objects(r0_5, arg0.addr() + 0x568u, r0_5, 0u);  // (from the original)
    arg0->word_614 = r1;
    u32 r0_7 = call_0081b218(arg0.addr() + 0x14u, *global_00848130, *global_00848134);  // (from the original)
    return r0_7;
}

}  // namespace d_00694918
GUEST_EXPORT_FRAMED(0x00694918, d_00694918::f_00694918, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00694b54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00694b54 {

struct __attribute__((packed)) Object_00694b54_0 {
    u8 unknown_0[0x611];  // (not used here)
    u8 byte_611;
    u8 byte_612;
    u8 unknown_613[0x1];  // (not used here)
    u32 word_614;
};
GUEST_OFFSET(Object_00694b54_0, byte_611, 0x611);
GUEST_OFFSET(Object_00694b54_0, byte_612, 0x612);
GUEST_OFFSET(Object_00694b54_0, word_614, 0x614);

inline guest::global<u32, 0x00848130> global_00848130;
inline guest::global<u32, 0x00848134> global_00848134;
inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> call_004b4fc0;
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> notify_list_objects;
inline constexpr guest::Function<0x0081b218, u32(u32, u32, u32)> call_0081b218;

u32 f_00694b54(gptr<Object_00694b54_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    arg0->byte_612 = 0;
    arg0->byte_611 = 0;
    u32 r5_1 = ~0u;
    arg0->word_614 = r5_1;
    u32 r0_2 = call_004b4fc0(arg0.addr() + 0x280u, 0x84817cu, 1u, r3);  // (from the original)
    notify_list_objects(arg0.addr() + 0x280u, arg0.addr() + 0x540u, r0_2, 0u);  // (from the original)
    u32 r0_5 = call_004b4fc0(arg0.addr() + 0x280u, 0x84817cu, 1u, guest::cpu()->r[3]);  // (from the original)
    notify_list_objects(r0_5, arg0.addr() + 0x568u, r0_5, 0u);  // (from the original)
    arg0->word_614 = r5_1;
    u32 r0_7 = call_0081b218(arg0.addr() + 0x14u, *global_00848130, *global_00848134);  // (from the original)
    return r0_7;
}

}  // namespace d_00694b54
GUEST_EXPORT_FRAMED(0x00694b54, d_00694b54::f_00694b54, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006953b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006953b8 {

struct __attribute__((packed)) Object_006953b8_0 {
    u8 unknown_0[0x611];  // (not used here)
    u8 byte_611;
    u8 unknown_612[0x6];  // (not used here)
    u8 byte_618;
};
GUEST_OFFSET(Object_006953b8_0, byte_611, 0x611);
GUEST_OFFSET(Object_006953b8_0, byte_618, 0x618);

inline guest::global<u32, 0x00848128> global_00848128;
inline guest::global<u32, 0x0084812c> global_0084812c;
inline constexpr guest::Function<0x0081b218, u32(u32, u32, u32)> call_0081b218;

u32 f_006953b8(gptr<Object_006953b8_0> arg0, u32 r1, u32 r2) {
    if (u32(s8(arg0->byte_611)) == r1) {
        guest::cpu()->r[1] = r1;
        return arg0.addr();
    }
    arg0->byte_611 = u8(r1);
    arg0->byte_618 = u8(r2);
    u32 r0_2 = call_0081b218(arg0.addr() + 0x14u, *global_00848128, *global_0084812c);  // (from the original)
    return r0_2;
}

}  // namespace d_006953b8
GUEST_EXPORT_FRAMED(0x006953b8, d_006953b8::f_006953b8, 0x4010);  // pushes {r4, lr} first, as the original

// f_00695584: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00695584 {

struct __attribute__((packed)) Object_00695584_0 {
    u8 unknown_0[0xeb58];  // (not used here)
    u32 word_eb58;
};
GUEST_OFFSET(Object_00695584_0, word_eb58, 0xeb58);

inline constexpr guest::Function<0x0057b9dc, u32(u32, u32, u32, u32)> call_0057b9dc;

struct __attribute__((packed)) Frame_00695584 {
    u32 word_0;
};
GUEST_OFFSET(Frame_00695584, word_0, 0x0);
GUEST_SIZE(Frame_00695584, 0x4);

u32 f_00695584(gptr<Object_00695584_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00695584> frame;  // the original's stack frame
    frame->word_0 = r3;
    frame->word_0 = *frame.at<u32>(0x10);  // (from the original)
    u32 r0_1 = call_0057b9dc(r1, arg0.addr(), r2, r3);
    if (r0_1 == 0) {
        return r0_1;
    }
    u32 r2_1 = arg0->word_eb58;
    if (r2_1 != 0) {
        *gptr<u32>(r2_1) = r0_1;
    }
    arg0->word_eb58 = arg0->word_eb58 + 4u;
    guest::cpu()->r[1] = arg0.addr() + 0xeb54u;  // (from the original)
    return r0_1;
}

}  // namespace d_00695584
GUEST_EXPORT_FRAMED(0x00695584, d_00695584::f_00695584, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00695ce4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00695ce4 {

struct __attribute__((packed)) Object_00695ce4_1 {
    u8 unknown_0[0x2];  // (not used here)
    u16 half_2;
    u32 word_4;
};
GUEST_OFFSET(Object_00695ce4_1, half_2, 0x2);
GUEST_OFFSET(Object_00695ce4_1, word_4, 0x4);

struct __attribute__((packed)) Local_00695ce4_r2_5 {
    u16 half_0;
    u8 unknown_2[0x2];  // (not used here)
    u32 word_4;
    float float_8;
    u32 word_c;
    u16 half_10;
    u16 half_12;
    u16 half_14;
};
GUEST_OFFSET(Local_00695ce4_r2_5, half_0, 0x0);
GUEST_OFFSET(Local_00695ce4_r2_5, word_4, 0x4);
GUEST_OFFSET(Local_00695ce4_r2_5, float_8, 0x8);
GUEST_OFFSET(Local_00695ce4_r2_5, word_c, 0xc);
GUEST_OFFSET(Local_00695ce4_r2_5, half_10, 0x10);
GUEST_OFFSET(Local_00695ce4_r2_5, half_12, 0x12);
GUEST_OFFSET(Local_00695ce4_r2_5, half_14, 0x14);

inline constexpr u32 stage_heap_address = 0x00952c3cu;
inline guest::global<u32, 0x00952c3c> stage_heap;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> read_global_byte_2;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> table_entry_has_all_bits;
inline constexpr guest::Function<0x0057b9dc, u32(u32, u32, u32, u32)> call_0057b9dc;
inline constexpr guest::Function<0x0060e77c, u32(u32, u32, u32)> sead__SafeStringBase_char___SafeStringBase_0060e77c;
inline constexpr guest::Function<0x006ee628, u32(u32, u32, u32)> sead__SafeStringBase_char___SafeStringBase_006ee628;

struct __attribute__((packed)) Frame_00695ce4 {
    u32 word_0;
    u32 word_4;
    float float_8;
    u32 word_c;
    u16 half_10;
    u16 half_12;
    u16 half_14;
    u8 unknown_16[0x6];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00695ce4, word_0, 0x0);
GUEST_OFFSET(Frame_00695ce4, word_4, 0x4);
GUEST_OFFSET(Frame_00695ce4, float_8, 0x8);
GUEST_OFFSET(Frame_00695ce4, word_c, 0xc);
GUEST_OFFSET(Frame_00695ce4, half_10, 0x10);
GUEST_OFFSET(Frame_00695ce4, half_12, 0x12);
GUEST_OFFSET(Frame_00695ce4, half_14, 0x14);
GUEST_SIZE(Frame_00695ce4, 0x1c);

u32 f_00695ce4(u32 r0, gptr<Object_00695ce4_1> arg1, float S0) {
    guest::StackFrameOf<Frame_00695ce4> frame;  // the original's stack frame
    u32 r1 = arg1.addr();
    u32 r9 = guest::cpu()->r[9];
    u32 r0_12 = 0;
    u32 r6 = r1;
    u32 r8 = r0;
    if (r1 != 0) {
        u32 r3 = arg1->half_2;
        u32 r2 = arg1->word_4;
        u32 r4 = 0u;
        u32 r5 = r4;
        r0 = r4;
        if (s32(r3) > 0) {
            do {
                r1 = *gptr<u8>(r2 + (r0 << 5) + 0x18u);  // (from the original)
                if (r1 == 0) {
                    r4 += 1u;
                } else if (r1 == 1u) {
                    r5 += 1u;
                }
                r0 += 1u;
                guest::preempt();
            } while (s32(r3) > s32(r0));
        }
        guest::cpu()->s[0] = S0;
        u32 r0_1 = read_global_byte_2(r0, r1, r2, r3);
        u32 r0_2 = read_global_byte_2(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r0_3 = table_entry_has_all_bits(0x400000u, r0_2);  // (from the original)
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        if (r0_3 != 0) {
            u32 r0_4 = read_global_byte_2(r0_3, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            u32 r0_5 = table_entry_has_all_bits(0x10u, r0_4);  // (from the original)
            r1 = guest::cpu()->r[1];
            S0 = guest::cpu()->s[0];
            if (r0_5 == 0) {
                r5 += 1u;
            }
        }
        if (r0_1 == 0x9eu) {  // (from the original)
            r5 += 2u;
            r4 += 1u;
        }
        if (*gptr<u32>(r8 + 0x710cu) < r4) {  // (from the original)
            u32 r1_2 = *stage_heap;
            guest::cpu()->s[0] = S0;
            u32 r0_7 = sead__SafeStringBase_char___SafeStringBase_0060e77c(r8 + 0x14u, r1_2, r4);  // (from the original)
            r1 = guest::cpu()->r[1];
            S0 = guest::cpu()->s[0];
            if (r0_7 == 0) {
                return 0u;
            }
        }
        if (*gptr<u32>(r8 + 0xe3e8u) < r5) {  // (from the original)
            u32 r1_3 = *stage_heap;
            guest::cpu()->s[0] = S0;
            u32 r0_9 = sead__SafeStringBase_char___SafeStringBase_006ee628(r8 + 0x72f0u, r1_3, r5);  // (from the original)
            r1 = guest::cpu()->r[1];
            S0 = guest::cpu()->s[0];
            if (r0_9 == 0) {
                return 0u;
            }
        }
        u32 r0_10 = *gptr<u16>(r6 + 2u);
        u32 r7 = *gptr<u32>(r6 + 4u);
        r4 = 0u;
        if (r0_10 != 0 && s32(r0_10) >= 0) {
            r9 = 0x887402u;  // (from the original)
            r5 = r8 + 0xeb54u;  // (from the original)
        }
        if (s32(r0_10) > 0) {
            do {
                gptr<Local_00695ce4_r2_5> r2_5 = gptr<Local_00695ce4_r2_5>(r7 + (r4 << 5));
                if (r2_5->half_0 == *gptr<u16>(r9)) {
                    u32 r0_11 = *gptr<u32>(r5 + 4u);
                    if (r0_11 != 0) {
                        *gptr<u32>(r0_11) = 0;
                    }
                } else {
                    u32 r1_4 = r2_5->word_c;
                    float S0_4 = r2_5->float_8;
                    frame->word_4 = r2_5->word_4;
                    frame->float_8 = S0_4;
                    frame->word_c = r1_4;
                    frame->half_10 = r2_5->half_10;
                    frame->half_12 = r2_5->half_12;
                    frame->half_14 = r2_5->half_14;
                    u32 v_1 = r2_5->half_0;
                    frame->word_0 = frame.at(0x10).addr();  // (from the original)
                    guest::cpu()->s[0] = S0_4;
                    r0_12 = call_0057b9dc(v_1, r8, r2_5.addr() + 0x18u, frame.at(4).addr());  // (from the original)
                    r1 = guest::cpu()->r[1];
                    S0 = guest::cpu()->s[0];
                    if (r0_12 == 0) {
                        return r0_12;
                    }
                    u32 r1_5 = *gptr<u32>(r5 + 4u);
                    if (r1_5 != 0) {
                        *gptr<u32>(r1_5) = r0_12;
                    }
                }
                r4 += 1u;
                r1 = *gptr<u32>(r5 + 4u) + 4u;
                *gptr<u32>(r5 + 4u) = r1;
                guest::preempt();
            } while (s32(u32(*gptr<u16>(r6 + 2u))) > s32(r4));
        }
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        return 1u;
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return 0u;
}

}  // namespace d_00695ce4
GUEST_EXPORT_FRAMED(0x00695ce4, d_00695ce4::f_00695ce4, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_0069697c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0069697c {

inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> get_data_base;
inline constexpr guest::Function<0x002faea4, u32(u32, u32, u32, u32)> block_at;
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> get_current_player;
inline constexpr guest::Function<0x002fbd54, u32(u32)> PersonalId__is_set;
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> Item__category;
inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> read_table_9b4a24;
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> GridMap__process_world_position;
inline constexpr guest::Function<0x002ff8b0, u32(u32, u32)> slot_value;
inline constexpr guest::Function<0x006fa728, u32(u32, u32, u32, u32)> call_006fa728;
inline constexpr guest::Function<0x0070eeec, u32(u32, u32)> call_0070eeec;
inline constexpr guest::Function<0x007201d0, u32(u32, u32, u32, u32)> call_007201d0;
inline constexpr guest::Function<0x00724424, u32(u32, u32, u32, u32)> Pockets__item_with_lock;
inline constexpr guest::Function<0x0076ce3c, u32(u32, u32)> record_173_address;
inline constexpr guest::Function<0x0076eec4, u32(u32, u32, u32, u32)> call_0076eec4;
inline constexpr guest::Function<0x0076f018, u32(u32, u32, u32, u32)> call_0076f018;
inline constexpr guest::Function<0x00770364, u32(u32, u32, u32, u32)> cell_at_00770364;

u32 f_0069697c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0;
    u32 r5 = 0;
    u32 r6 = 0;
    u32 r7 = 0;
    u32 r0_2 = 0;
    u32 r0_1 = get_data_base(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    u32 r9 = r0_1 + 0x53400u;  // (from the original)
    u32 r8 = 0u;
    do {
        r6 = 0u;
        do {
            r0_2 = block_at(r9, r6, r8, r3);
            r1 = guest::cpu()->r[1];
            r3 = guest::cpu()->r[3];
            r7 = r0_2;
            if (r0_2 != 0) {
                r5 = 0u;
                do {
                    r4 = 0u;
                    do {
                        u32 r0_3 = cell_at_00770364(r7, r4, r5, r3);
                        r0_2 = Item__category(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                        r1 = guest::cpu()->r[1];
                        r3 = guest::cpu()->r[3];
                        if (r0_2 == 0x95u) {  // (from the original)
                            return 1u;
                        }
                        r4 += 1u;
                        guest::preempt();
                    } while (r4 < 0x10u);  // (from the original)
                    r5 += 1u;
                    guest::preempt();
                } while (r5 < 0x10u);  // (from the original)
            }
            r6 += 1u;
            guest::preempt();
        } while (r6 < 5u);
        r8 += 1u;
        guest::preempt();
    } while (r8 < 4u);
    u32 r0_4 = get_current_player(r0_2, r1, guest::cpu()->r[2], r3);
    r5 = r0_4;
    u32 r0_6 = PersonalId__is_set(r0_4 + 0x55a6u);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_6 != 0) {
        r6 = r5 + 0x6bd0u;  // (from the original)
        r4 = 0u;
        do {
            u32 r0_7 = Pockets__item_with_lock(r6, r4, 0u, r3);
            u32 r0_8 = Item__category(r0_7, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_8 == 0x95u) {  // (from the original)
                return 1u;
            }
            r4 += 1u;
            guest::preempt();
        } while (r4 < 0x10u);  // (from the original)
        r6 = r5 + 0x6f10u;  // (from the original)
        r4 = 0u;
        do {
            u32 r0_9 = call_007201d0(r6, r4, r2, r3);
            u32 r0_10 = Item__category(r0_9, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_10 == 0x95u) {  // (from the original)
                return 1u;
            }
            r4 += 1u;
            guest::preempt();
        } while (r4 < 0x28u);  // (from the original)
        r7 = r5 + 0x92f0u;  // (from the original)
        r6 = 0u;
        do {
            r5 = 0u;
            do {
                r4 = 0u;
                do {
                    u32 r0_11 = call_0076eec4(r7, r6, r5, r4);
                    u32 r0_12 = Item__category(r0_11, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                    r1 = guest::cpu()->r[1];
                    if (r0_12 == 0x95u) {  // (from the original)
                        return 1u;
                    }
                    r4 += 1u;
                    guest::preempt();
                } while (r4 < 0xau);  // (from the original)
                r5 += 1u;
                guest::preempt();
            } while (r5 < 6u);
            r6 += 1u;
            guest::preempt();
        } while (r6 < 3u);
        u32 r0_13 = slot_value(4u, r1);
        u32 r0_14 = get_save_data(r0_13, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r0_16 = call_0070eeec(r0_14 + 0x71900u, r0_13);  // (from the original)
        r7 = r0_16;
        r6 = 0u;
        do {
            r5 = 0u;
            do {
                r4 = 0u;
                do {
                    u32 r0_17 = call_0076f018(r7, r6, r5, r4);
                    u32 r0_18 = Item__category(r0_17, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    if (r0_18 == 0x95u) {  // (from the original)
                        return 1u;
                    }
                    r4 += 1u;
                    guest::preempt();
                } while (r4 < 0xau);  // (from the original)
                r5 += 1u;
                guest::preempt();
            } while (r5 < 9u);
            r6 += 1u;
            guest::preempt();
        } while (r6 < 4u);
    }
    r6 = 2u;
    do {
        u32 r5_1 = r6 & 0xffu;  // (from the original)
        u32 r0_19 = call_006fa728(r5_1, r1, r2, r3);
        r0 = slot_value(4u, guest::cpu()->r[1]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 == r0_19) {
            r0 = read_table_9b4a24(r5_1, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r7 = r0;
            if (r0 != 0) {
                r5 = 0u;
                do {
                    r4 = 0u;
                    do {
                        u32 r0_20 = GridMap__process_world_position(r7, r4, r5, 0u);
                        if (r0_20 != 0) {
                            u32 r0_21 = Item__category(r0_20, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                            r1 = guest::cpu()->r[1];
                            if (r0_21 == 0x95u) {  // (from the original)
                                return 1u;
                            }
                        }
                        r0 = GridMap__process_world_position(r7, r4, r5, 1u);
                        r1 = guest::cpu()->r[1];
                        r2 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
                        if (r0 != 0) {
                            r0 = Item__category(r0, r1, r2, r3);
                            r1 = guest::cpu()->r[1];
                            r2 = guest::cpu()->r[2];
                            r3 = guest::cpu()->r[3];
                            if (r0 == 0x95u) {  // (from the original)
                                return 1u;
                            }
                        }
                        r4 += 1u;
                        guest::preempt();
                    } while (s32(r4) < 0x10);  // (from the original)
                    r5 += 1u;
                    guest::preempt();
                } while (s32(r5) < 0x10);  // (from the original)
            }
        }
        r6 += 1u;
        guest::preempt();
    } while (s32(r6) < 0x1a);  // (from the original)
    r8 = 0xfff951c8u;  // (from the original)
    r6 = 0u;
    do {
        u32 r0_22 = get_save_data(r0, r1, r2, r3);
        u32 r0_24 = record_173_address(r0_22 + 0x80u - r8, r6 & 0xffu);  // (from the original)
        u32 r4_1 = *gptr<s8>(r0_24);
        r0 = slot_value(4u, guest::cpu()->r[1]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r4_1 == r0) {
            r0 = read_table_9b4a24(r6 + 0x1au & 0xffu, r1, r2, r3);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r7 = r0;
            if (r0 != 0) {
                r5 = 0u;
                do {
                    r4 = 0u;
                    do {
                        u32 r0_26 = GridMap__process_world_position(r7, r4, r5, 0u);
                        if (r0_26 != 0) {
                            u32 r0_27 = Item__category(r0_26, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                            r1 = guest::cpu()->r[1];
                            if (r0_27 == 0x95u) {  // (from the original)
                                return 1u;
                            }
                        }
                        r0 = GridMap__process_world_position(r7, r4, r5, 1u);
                        r1 = guest::cpu()->r[1];
                        r2 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
                        if (r0 != 0) {
                            r0 = Item__category(r0, r1, r2, r3);
                            r1 = guest::cpu()->r[1];
                            r2 = guest::cpu()->r[2];
                            r3 = guest::cpu()->r[3];
                            if (r0 == 0x95u) {  // (from the original)
                                return 1u;
                            }
                        }
                        r4 += 1u;
                        guest::preempt();
                    } while (s32(r4) < 0x10);  // (from the original)
                    r5 += 1u;
                    guest::preempt();
                } while (s32(r5) < 0x10);  // (from the original)
            }
        }
        r6 += 1u;
        guest::preempt();
    } while (s32(r6) < 4);
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_0069697c
GUEST_EXPORT_FRAMED(0x0069697c, d_0069697c::f_0069697c, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_00697e88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00697e88 {

struct __attribute__((packed)) Object_00697e88_0 {
    u8 unknown_0[0xecac];  // (not used here)
    u32 word_ecac;
    u32 word_ecb0;
};
GUEST_OFFSET(Object_00697e88_0, word_ecac, 0xecac);
GUEST_OFFSET(Object_00697e88_0, word_ecb0, 0xecb0);

struct __attribute__((packed)) Local_00697e88_r1_2 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_00697e88_r1_2, float_0, 0x0);
GUEST_OFFSET(Local_00697e88_r1_2, float_4, 0x4);
GUEST_OFFSET(Local_00697e88_r1_2, float_8, 0x8);

struct __attribute__((packed)) Local_00697e88_r1_3 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_00697e88_r1_3, float_0, 0x0);
GUEST_OFFSET(Local_00697e88_r1_3, float_4, 0x4);
GUEST_OFFSET(Local_00697e88_r1_3, float_8, 0x8);


u32 f_00697e88(gptr<Object_00697e88_0> arg0, u32 r1, float S0, float S1) {
    u32 r0 = arg0.addr();
    float S0_1 = 0;
    float S1_1 = 0;
    u32 r1_4 = 0;
    r0 += 0xecacu;  // (from the original)
    u32 r3 = arg0->word_ecb0;
    u32 r2 = arg0->word_ecac;
    if (r2 == r3) {
        return 0u;
    }
    do {
        if (*gptr<u32>(r2) == r1) {
            u32 r1_1 = r3 - 0xcu;  // (from the original)
            *gptr<u32>(r0 + 4u) = r1_1;
            if (r1_1 == r2) {
                guest::cpu()->r[1] = r1_1;
                guest::cpu()->s[0] = S0;
                guest::cpu()->s[1] = S1;
                return 1u;
            }
            do {
                gptr<Local_00697e88_r1_2> r1_2 = gptr<Local_00697e88_r1_2>(r2 + 0xcu);  // (from the original)
                S0_1 = r1_2->float_0;
                S1_1 = r1_2->float_4;
                float S2_1 = r1_2->float_8;
                gptr<Local_00697e88_r1_3> r1_3 = gptr<Local_00697e88_r1_3>(r2);
                r2 += 0xcu;  // (from the original)
                r1_3->float_0 = S0_1;
                r1_3->float_4 = S1_1;
                r1_3->float_8 = S2_1;
                r1_4 = *gptr<u32>(r0 + 4u);
                guest::preempt();
            } while (r1_4 != r2);
            guest::cpu()->r[1] = r1_4;
            guest::cpu()->s[0] = S0_1;
            guest::cpu()->s[1] = S1_1;
            return 1u;
        }
        r2 += 0xcu;  // (from the original)
        guest::preempt();
    } while (r2 != r3);
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return 0u;
}

}  // namespace d_00697e88
GUEST_EXPORT(0x00697e88, d_00697e88::f_00697e88);

// f_00697f60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00697f60 {

inline constexpr u32 global_009506b4_address = 0x009506b4u;
inline guest::global<u8, 0x009506b0> global_009506b0;
inline guest::global<u32, 0x009506b4> global_009506b4;
inline constexpr guest::Function<0x0014fd9c, u32(u32, u32)> call_0014fd9c;
inline constexpr guest::Function<0x0014fda4, u32(u32, u32, u32, u32)> call_0014fda4;
inline constexpr guest::Function<0x006dccb4, u32(u32, u32, u32, u32)> call_006dccb4;

u32 f_00697f60(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r4_1 = r1;
    u32 r0_1 = *global_009506b0;
    if (r0_1 == 0xffu) {  // (from the original)
        r0_1 = *global_009506b4;
        if (r0_1 != 0) {
            r0_1 = call_006dccb4(r0_1, r0, r2, r0);
            r1 = guest::cpu()->r[1];
            u32 r6_1 = r0_1;
            if (r0_1 != 0) {
                r0_1 = call_0014fd9c(r0_1, r4_1);
                r1 = guest::cpu()->r[1];
                if (r2 == 0) {
                    frame.release();
                    return call_0014fda4(r6_1, r4_1 ^ 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
                }
            }
        }
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_00697f60
GUEST_EXPORT(0x00697f60, d_00697f60::f_00697f60);

// f_0069858c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0069858c {

struct __attribute__((packed)) Object_0069858c_0 {
    u8 unknown_0[0xeb54];  // (not used here)
    u32 word_eb54;
    u32 word_eb58;
};
GUEST_OFFSET(Object_0069858c_0, word_eb54, 0xeb54);
GUEST_OFFSET(Object_0069858c_0, word_eb58, 0xeb58);

struct __attribute__((packed)) Local_0069858c_r0_1 {
    u8 unknown_0[0x938];  // (not used here)
    u32 word_938;
    u8 unknown_93c[0x22];  // (not used here)
    u8 byte_95e;
};
GUEST_OFFSET(Local_0069858c_r0_1, word_938, 0x938);
GUEST_OFFSET(Local_0069858c_r0_1, byte_95e, 0x95e);


u32 f_0069858c(gptr<Object_0069858c_0> arg0, u32 r1, u32 r2) {
    u32 r12 = r1;
    r1 = arg0->word_eb54;
    u32 r3 = arg0->word_eb58;
    if (r1 == r3) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    do {
        gptr<Local_0069858c_r0_1> r0_1 = gptr<Local_0069858c_r0_1>(*gptr<u32>(r1));
        if (r0_1.addr() != 0 && r0_1->byte_95e == r12) {
            r0_1->word_938 = r2;
            guest::cpu()->r[1] = r2;
            return 1u;
        }
        r1 += 4u;
        guest::preempt();
    } while (r1 != r3);
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_0069858c
GUEST_EXPORT_FRAMED(0x0069858c, d_0069858c::f_0069858c, 0x4010);  // pushes {r4, lr} first, as the original

// f_006985f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006985f0 {

struct __attribute__((packed)) Local_006985f0_r4_1 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(Local_006985f0_r4_1, byte_0, 0x0);
GUEST_OFFSET(Local_006985f0_r4_1, byte_1, 0x1);

struct __attribute__((packed)) Local_006985f0_r5_2 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Local_006985f0_r5_2, byte_0, 0x0);
GUEST_OFFSET(Local_006985f0_r5_2, byte_1, 0x1);
GUEST_OFFSET(Local_006985f0_r5_2, byte_2, 0x2);
GUEST_OFFSET(Local_006985f0_r5_2, byte_3, 0x3);


u32 f_006985f0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r12 = 0;
    if (r1 == 0) {
        r12 = 0u;
    } else {
        r12 = r1 & 1u;
        u32 r6 = 0u;
        if (s32(r12) > 0) {
            do {
                gptr<Local_006985f0_r4_1> r4_1 = gptr<Local_006985f0_r4_1>(r0 + (r6 << 1));
                u32 r5_1 = r3 - u32(s8(r4_1->byte_1));
                u32 r4_2 = r2 - u32(s8(r4_1->byte_0));
                if (s32(r4_2) < 0) {
                    r4_2 = 0u - r4_2;
                }
                if (s32(r5_1) < 0) {
                    r5_1 = 0u - r5_1;
                }
                if (s32(r4_2 + r5_1) < 0x19) {  // (from the original)
                    return 0u;
                }
                r6 += 1u;
                guest::preempt();
            } while (s32(r6) < s32(r12));
        }
    }
    if (r12 >= r1) {
        return 1u;
    }
L_698654:;
    gptr<Local_006985f0_r5_2> r5_2 = gptr<Local_006985f0_r5_2>(r0 + (r12 << 1));
    u32 r4_3 = r2 - u32(s8(r5_2->byte_0));
    u32 r6_1 = r3 - u32(s8(r5_2->byte_1));
    if (s32(r4_3) < 0) {
        r4_3 = 0u - r4_3;
    }
    if (s32(r6_1) < 0) {
        r6_1 = 0u - r6_1;
    }
    if (s32(r4_3 + r6_1) >= 0x19) {  // (from the original)
        u32 r4_4 = s8(r5_2->byte_3);
        u32 r5_3 = r2 - u32(s8(r5_2->byte_2));
        u32 r4_5 = r3 - r4_4;
        if (s32(r5_3) < 0) {
            r5_3 = 0u - r5_3;
        }
        if (s32(r4_5) < 0) {
            r4_5 = 0u - r4_5;
        }
        if (s32(r4_5 + r5_3) >= 0x19) {  // (from the original)
            r12 += 2u;
            if (r12 < r1) {
                guest::preempt();
                goto L_698654;
            }
            return 1u;
        }
    }
    return 0u;
}

}  // namespace d_006985f0
GUEST_EXPORT_FRAMED(0x006985f0, d_006985f0::f_006985f0, 0x70);  // pushes {r4, r5, r6} first, as the original

// f_00698ac0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00698ac0 {

struct __attribute__((packed)) Local_00698ac0_r0_3 {
    u8 unknown_0[0x9];  // (not used here)
    u8 byte_9;
};
GUEST_OFFSET(Local_00698ac0_r0_3, byte_9, 0x9);

inline constexpr guest::Function<0x002fae84, u32(u32)> get_data_base;
inline constexpr guest::Function<0x002fb328, u32(u32)> get_save_data;
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> get_current_player;
inline constexpr guest::Function<0x002fdf10, u32(u32, u32)> is_in_registered_list;
inline constexpr guest::Function<0x00300904, u32(u32)> main_object_value;

u32 f_00698ac0(u32 r0, u32 r1) {
    u32 r0_1 = get_current_player(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        r1_1 = *gptr<u8>(r0_1 + 0x8aa3u);  // (from the original)
        if ((r1_1 & 8u) != 0) {
            u32 r0_2 = get_data_base(r0_1);
            gptr<Local_00698ac0_r0_3> r0_3 = gptr<Local_00698ac0_r0_3>(r0_2 + 0x70e62u);  // (from the original)
            u32 r1_2 = u32(r0_3->byte_9) | 2u;
            r0_3->byte_9 = u8(r1_2);
            guest::cpu()->r[1] = r1_2;
            return 0u;
        }
        if (s32(u32(*gptr<u8>(r0_1 + 0x5701u)) << 0x1e) >= 0) {  // (from the original)
            guest::cpu()->r[1] = r1_1;
            return 0u;
        }
    }
    u32 r0_4 = is_in_registered_list(0xdu, r1_1);  // (from the original)
    if (r0_4 != 0) {
        return 0u;
    }
    u32 r0_5 = get_save_data(r0_4);
    u32 r0_6 = *gptr<u8>(r0_5 + 0x70eebu);  // (from the original)
    if ((r0_6 & 1u) == 0) {
        return 0u;
    }
    u32 r0_7 = get_save_data(r0_6);
    u32 r0_8 = *gptr<u8>(r0_7 + 0x70eebu);  // (from the original)
    if ((r0_8 & 2u) != 0) {
        return 0u;
    }
    u32 r0_9 = main_object_value(r0_8);
    return r0_9 == 0;
}

}  // namespace d_00698ac0
GUEST_EXPORT_FRAMED(0x00698ac0, d_00698ac0::f_00698ac0, 0x4010);  // pushes {r4, lr} first, as the original

// f_0069a214: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0069a214 {

struct __attribute__((packed)) Local_0069a214_r4_1 {
    u8 unknown_0[0x120];  // (not used here)
    u32 word_120;
};
GUEST_OFFSET(Local_0069a214_r4_1, word_120, 0x120);

inline constexpr u32 global_009506b4_address = 0x009506b4u;
inline guest::global<u8, 0x009506b0> global_009506b0;
inline guest::global<u32, 0x009506b4> global_009506b4;
inline constexpr guest::Function<0x001139fd, u32(u32, u32)> SaveVillager__set_state_250f;
inline constexpr guest::Function<0x00119715, u32(u32, u32, u32)> call_00119714;
inline constexpr guest::Function<0x0014fd9c, u32(u32, u32)> call_0014fd9c;
inline constexpr guest::Function<0x0014fda4, u32(u32, u32)> call_0014fda4;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> read_global_byte_2;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> table_entry_has_all_bits;
inline constexpr guest::Function<0x002fae84, u32(u32)> get_data_base;
inline constexpr guest::Function<0x002fb310, u32(u32)> slot_records_of;
inline constexpr guest::Function<0x003058c9, u32(u32, u32)> valid_villager_at;
inline constexpr guest::Function<0x00309ac9, u32(u32, u32)> villager_check_309ac8;
inline constexpr guest::Function<0x003170f8, u32(u32, u32)> talk_state_matches;
inline constexpr guest::Function<0x0052c878, u32(u32)> call_0052c878;
inline constexpr guest::Function<0x006dccb4, u32(u32, u32)> call_006dccb4;
inline constexpr guest::Function<0x007d1090, u32(u32, u32)> call_007d1090;

struct __attribute__((packed)) Frame_0069a214 {
    u8 unknown_0[0x1];  // (not read or written by name)
    u8 byte_1;
    u8 unknown_2[0x2];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0069a214, byte_1, 0x1);
GUEST_SIZE(Frame_0069a214, 0x4);

void f_0069a214(gptr<BsNpcMgr> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0069a214> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    gptr<Local_0069a214_r4_1> r4_1 = gptr<Local_0069a214_r4_1>(0u);
    *frame.at<u32>(0) = r3;
    u32 r0_1 = read_global_byte_2(r0, r1, r2, r3);
    u32 r0_2 = table_entry_has_all_bits(0x20u, r0_1);  // (from the original)
    if (r0_2 != 0) {
        u32 r0_3 = talk_state_matches(3u, 0u);
        if (r0_3 == 0) {
            u32 r0_4 = get_data_base(r0_3);
            u32 r0_5 = slot_records_of(r0_4);
            r4_1 = gptr<Local_0069a214_r4_1>(r0 + 0xf000u);  // (from the original)
            u32 r0_6 = valid_villager_at(r0_5 + 4u, arg0->word_f120);
            if (r0_6 != 0) {
                if (*global_009506b0 == 0xffu) {  // (from the original)
                    u32 r0_7 = *global_009506b4;
                    if (r0_7 != 0) {
                        u32 r0_8 = call_006dccb4(r0_7, arg0->word_f120);
                        u32 r0_9 = call_0052c878(r0_8);
                        if (r0_9 != r0_8) {
                            u32 r0_10 = *gptr<u8>(r0_6 + 0x250fu);  // (from the original)
                            if (r0_10 != 2u) {
                                if (r0_10 != 0x17u) {  // (from the original)
                                    return;
                                }
                                u32 r0_11 = villager_check_309ac8(r0_6, 0u);
                                if (r0_11 != 0) {
                                    return;
                                }
                                SaveVillager__set_state_250f(r0_6, 2u);
                                u32 r1_6 = arg0->word_f120;
                                if (*global_009506b0 != 0xffu) {  // (from the original)
                                    goto L_69a3c8;
                                }
                                u32 r0_12 = *global_009506b4;
                                if (r0_12 != 0) {
                                    u32 r0_13 = call_006dccb4(r0_12, r1_6);
                                    if (r0_13 != 0) {
                                        call_0014fd9c(r0_13, 0u);
                                        call_0014fda4(r0_13, 1u);
                                    }
                                }
                                goto L_69a3c8;
                            }
                            u32 r0_14 = villager_check_309ac8(r0_6, 0u);
                            if (r0_14 != 0) {
                                u32 r0_15 = call_00119714(r0_5 + 4u, r4_1->word_120, 0u);
                                if (r0_15 == 0) {
                                    SaveVillager__set_state_250f(r0_6, 0x17u);  // (from the original)
                                    u32 r1_8 = r4_1->word_120;
                                    if (*global_009506b0 == 0xffu) {  // (from the original)
                                        u32 r0_16 = *global_009506b4;
                                        if (r0_16 != 0) {
                                            u32 r0_17 = call_006dccb4(r0_16, r1_8);
                                            if (r0_17 != 0) {
                                                call_0014fd9c(r0_17, 1u);
                                                call_0014fda4(r0_17, 0u);
                                            }
                                        }
                                    }
                                    *frame.at<u8>(0) = u8(r4_1->word_120);
                                    frame->byte_1 = 0;
                                    call_007d1090(4u, frame.at(0).addr());
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return;
L_69a3c8:;
    *frame.at<u8>(0) = u8(r4_1->word_120);
    frame->byte_1 = 1;
    call_007d1090(4u, frame.at(0).addr());
}

}  // namespace d_0069a214
GUEST_EXPORT_FRAMED(0x0069a214, d_0069a214::f_0069a214, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_0069a764: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0069a764 {


u32 f_0069a764(u32 r0, u32 r1, u32 r2) {
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r8 = r1;
    u32 r7 = r2;
    u32 r4 = 0u;
    u32 r5 = r0 + 0xeb54u;  // (from the original)
    do {
        u32 r0_1 = *gptr<u32>(r5);
        r1_1 = s32(*gptr<u32>(r5 + 4) - r0_1) >> 2;
        if (r4 < r1_1) {
            u32 r6_1 = gptr<u32>(r0_1)[r4];
            if (r6_1 != 0 && *gptr<u16>(r6_1 + 0xcu) == r7) {  // (from the original)
                r0_2 = r6_1;
                r1_1 = *gptr<u32>(r6_1 + 0x1030u);  // (from the original)
                if (r1_1 == r8) {
                    guest::cpu()->r[1] = r1_1;
                    return r0_2;
                }
            }
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0xau);  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_0069a764
GUEST_EXPORT_FRAMED(0x0069a764, d_0069a764::f_0069a764, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0069a91c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0069a91c {

struct __attribute__((packed)) Object_0069a91c_0 {
    u8 unknown_0[0xeb54];  // (not used here)
    u32 word_eb54;
    u32 word_eb58;
};
GUEST_OFFSET(Object_0069a91c_0, word_eb54, 0xeb54);
GUEST_OFFSET(Object_0069a91c_0, word_eb58, 0xeb58);

struct __attribute__((packed)) Local_0069a91c_r0_1 {
    u32 word_0;
    u8 unknown_4[0x95a];  // (not used here)
    u8 byte_95e;
};
GUEST_OFFSET(Local_0069a91c_r0_1, word_0, 0x0);
GUEST_OFFSET(Local_0069a91c_r0_1, byte_95e, 0x95e);


void f_0069a91c(gptr<Object_0069a91c_0> arg0, u32 r1) {
    u32 r2 = arg0->word_eb54;
    u32 r3 = arg0->word_eb58;
    if (r2 == r3) {
        return;
    }
    do {
        gptr<Local_0069a91c_r0_1> r0_1 = gptr<Local_0069a91c_r0_1>(*gptr<u32>(r2));
        if (r0_1.addr() != 0 && r0_1->byte_95e == r1) {
            u32 r1_1 = *gptr<u32>(r0_1->word_0 + 0xf0u);  // (from the original)
            // virtual function 60 of r0_1.addr()
            guest::call_address<u32>(r1_1, r0_1.addr(), r1_1, r2, r3);
            return;
        }
        r2 += 4u;
        guest::preempt();
    } while (r2 != r3);
}

}  // namespace d_0069a91c
GUEST_EXPORT(0x0069a91c, d_0069a91c::f_0069a91c);

// f_0069aec4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0069aec4 {

struct __attribute__((packed)) Local_0069aec4_r3_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0069aec4_r3_2, word_0, 0x0);
GUEST_OFFSET(Local_0069aec4_r3_2, word_4, 0x4);
GUEST_OFFSET(Local_0069aec4_r3_2, word_8, 0x8);

inline constexpr guest::Function<0x002fb378, u32(u32)> return_constant_0xad56b0_;
inline constexpr guest::Function<0x002fb94c, u32(u32)> get_current_player;
inline constexpr guest::Function<0x00300650, u32(u32)> day_start_by_clock_mode;
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> main_object_value;
inline constexpr guest::Function<0x0062f950, u32(u32)> weather_class_of_today;
inline constexpr guest::Function<0x00716128, u32(u32, u32)> call_00716128;
inline constexpr guest::Function<0x0074fff8, u32(u32, u32, u32, u32)> call_0074fff8;

struct __attribute__((packed)) Frame_0069aec4 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x10];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0069aec4, word_0, 0x0);
GUEST_OFFSET(Frame_0069aec4, word_4, 0x4);
GUEST_OFFSET(Frame_0069aec4, word_8, 0x8);
GUEST_SIZE(Frame_0069aec4, 0x1c);

u32 f_0069aec4(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0069aec4> frame;  // the original's stack frame
    u32 r0_1 = main_object_value(r0, r1, r2, r3);
    if (r0_1 != 0) {
        return 0u;
    }
    day_start_by_clock_mode(frame.at(0xc).addr());  // (from the original)
    gptr<Local_0069aec4_r3_2> r3_2 = gptr<Local_0069aec4_r3_2>(frame.at(0xc).addr());  // (from the original)
    u32 r1_2 = r3_2->word_4;
    u32 r2_2 = r3_2->word_8;
    frame->word_0 = r3_2->word_0;
    frame->word_4 = r1_2;
    frame->word_8 = r2_2;
    u32 r0_4 = call_0074fff8(frame.at(0).addr(), 0u, r2_2, r3_2.addr());
    if (r0_4 == 0) {
        return 0u;
    }
    u32 r0_5 = return_constant_0xad56b0_(r0_4);
    u32 r0_6 = *gptr<s8>(r0_5 + 7u);
    if (s32(r0_6) < 6) {
        return 0u;
    }
    u32 r0_7 = return_constant_0xad56b0_(r0_6);
    u32 r0_8 = *gptr<u8>(r0_7 + 6u);
    if (r0_8 == 0) {
        u32 r0_9 = return_constant_0xad56b0_(r0_8);
        r0_8 = *gptr<s8>(r0_9 + 7u);
        if (s32(r0_8) < 0xc) {  // (from the original)
            return 0u;
        }
    }
    u32 r0_10 = weather_class_of_today(r0_8);
    if (r0_10 != 0) {
        return 0u;
    }
    u32 r0_11 = get_current_player(r0_10);
    if (r0_11 == 0) {
        return 1u;
    }
    u32 r1_8 = u32(*gptr<u8>(r0_11 + 0x5701u)) << 0x1e;  // (from the original)
    if (s32(r1_8) >= 0) {
        guest::cpu()->r[1] = r1_8;
        return 0u;
    }
    u32 r0_13 = call_00716128(r0_11 + 0x55dcu, r1_8);  // (from the original)
    return r0_13 == 0 ? r0_13 : 1u;
}

}  // namespace d_0069aec4
GUEST_EXPORT_FRAMED(0x0069aec4, d_0069aec4::f_0069aec4, 0x4000);  // pushes {lr} first, as the original

// f_0069b0ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0069b0ac {

struct __attribute__((packed)) Object_0069b0ac_0 {
    u8 unknown_0[0xeb58];  // (not used here)
    u32 word_eb58;
};
GUEST_OFFSET(Object_0069b0ac_0, word_eb58, 0xeb58);

struct __attribute__((packed)) Local_0069b0ac_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0069b0ac_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_0069b0ac_ea_4, word_4, 0x4);

inline guest::global<u16, 0x00887292> global_00887292;
inline guest::global<u16, 0x0088729a> global_0088729a;
inline guest::global<u16, 0x0088729c> global_0088729c;
inline guest::global<u8, 0x008c9f1c> global_008c9f1c;
inline guest::global<u8, 0x0095013e> global_0095013e;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> read_global_byte_2;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> table_entry_has_all_bits;
inline constexpr guest::Function<0x002fb94c, u32(u32, u32)> get_current_player;
inline constexpr guest::Function<0x00307220, u32(u32, u32)> call_00307220;
inline constexpr guest::Function<0x0057b9dc, u32(u32, u32, u32, u32)> call_0057b9dc;
inline constexpr guest::Function<0x005c886c, u32(u32, u32)> call_005c886c;
inline constexpr guest::Function<0x006a5f0c, u32(u32, u32, u32)> cell_corner;
inline constexpr guest::Function<0x006a6dbc, u32(u32, u32, u32)> cell_corner_with_height;
inline constexpr guest::Function<0x006cbbe4, u32(u32, u32, u32)> call_006cbbe4;
inline constexpr guest::Function<0x006fa76c, u32(u32, u32, u32)> call_006fa76c;

struct __attribute__((packed)) Frame_0069b0ac {
    u32 word_0;
    u16 half_4;
    u16 half_6;
    u16 half_8;
    u8 unknown_a[0x7];  // (not read or written by name)
    u8 byte_11;
    u8 unknown_12[0x2];  // (not read or written by name)
    u32 word_14;
    float float_18;
    u8 unknown_1c[0x4];  // (not read or written by name)
    u8 byte_20;
    u8 byte_21;
    u8 unknown_22[0x2];  // (not read or written by name)
    u32 word_24;
    u32 word_28;
    float float_2c;
    u8 byte_30;
    u8 byte_31;
    u8 unknown_32[0x2];  // (not read or written by name)
    u32 word_34;
    u8 unknown_38[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0069b0ac, word_0, 0x0);
GUEST_OFFSET(Frame_0069b0ac, half_4, 0x4);
GUEST_OFFSET(Frame_0069b0ac, half_6, 0x6);
GUEST_OFFSET(Frame_0069b0ac, half_8, 0x8);
GUEST_OFFSET(Frame_0069b0ac, byte_11, 0x11);
GUEST_OFFSET(Frame_0069b0ac, word_14, 0x14);
GUEST_OFFSET(Frame_0069b0ac, float_18, 0x18);
GUEST_OFFSET(Frame_0069b0ac, byte_20, 0x20);
GUEST_OFFSET(Frame_0069b0ac, byte_21, 0x21);
GUEST_OFFSET(Frame_0069b0ac, word_24, 0x24);
GUEST_OFFSET(Frame_0069b0ac, word_28, 0x28);
GUEST_OFFSET(Frame_0069b0ac, float_2c, 0x2c);
GUEST_OFFSET(Frame_0069b0ac, byte_30, 0x30);
GUEST_OFFSET(Frame_0069b0ac, byte_31, 0x31);
GUEST_OFFSET(Frame_0069b0ac, word_34, 0x34);
GUEST_SIZE(Frame_0069b0ac, 0x3c);

void f_0069b0ac(gptr<Object_0069b0ac_0> arg0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2, float S3) {
    guest::StackFrameOf<Frame_0069b0ac> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r6 = guest::cpu()->r[6];
    u32 r1_1 = 0;
    u32 r0_4 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    gptr<Local_0069b0ac_ea_4> ea_4 = gptr<Local_0069b0ac_ea_4>(0u);
    u32 r1_2 = 0;
    u32 r2_4 = 0;
    u32 r0_5 = 0;
    float S0_3 = 0;
    float S1_3 = 0;
    float S2_5 = 0;
    float S0_4 = 0;
    u32 r3_5 = 0;
    u32 r1_3 = 0;
    u32 r2_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_4 = 0;
    u32 r2_7 = 0;
    u32 r0_9 = 0;
    u32 r3_6 = 0;
    u32 r0_1 = read_global_byte_2(r0, r1, r2, r3);
    u32 r0_2 = table_entry_has_all_bits(0x10u, r0_1);  // (from the original)
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (r0_2 != 0) {
        return;
    }
    u32 r0_3 = get_current_player(r0_2, r1);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (r0_3 == 0) {
        return;
    }
    r1 = *gptr<u8>(r0_3 + 0x5704u);  // (from the original)
    u32 r5 = r0 + 0xeb54u;  // (from the original)
    u32 r2_3 = r1 >> 7;
    if (r2_3 == 0) {
        goto L_69b204;
    }
    if (*global_0095013e == 0) {
        guest::cpu()->r[1] = r1;
        return;
    }
    r1_1 = frame.at(8).addr();
    r0_4 = frame.at(4).addr();
    call_006fa76c(r0_4, r1_1, r2_3);
    ea_1 = frame.at(0x1c).addr();  // (from the original)
    *gptr<u16>(ea_1) = 0;
    ea_2 = frame.at(0x1e).addr();  // (from the original)
    *gptr<u16>(ea_2) = u16(0xffffc000u);  // (from the original)
    ea_3 = frame.at(0x20).addr();  // (from the original)
    *gptr<u16>(ea_3) = 0;
    ea_4 = gptr<Local_0069b0ac_ea_4>(frame.at(4).addr());
    r1_2 = ea_4->word_0;
    r2_4 = ea_4->word_4;
    r0_5 = frame.at(0x10).addr();  // (from the original)
    cell_corner(r0_5, r1_2, r2_4);
    S0_3 = std::bit_cast<float>(*frame.at<u32>(0x10));  // (from the original)
    frame->word_28 = frame->word_14;
    S1_3 = frame->float_18;
    S2_5 = 20.0f;
    frame->word_24 = std::bit_cast<u32>(S0_3 + S2_5);
    S0_4 = S1_3 - 20.0f;
    r3_5 = frame.at(0x24).addr();  // (from the original)
    frame->float_2c = S0_4;
    r1_3 = *global_008c9f1c;
    frame->byte_30 = 1;
    r2_5 = frame.at(0x30).addr();  // (from the original)
    frame->byte_31 = 0;
    frame->word_34 = (((r6 & ~0xffu | 0x73u) & ~0xff00u | 0x7au << 8 & 0xff00u) & ~0xff0000u | 0x61u << 0x10 & 0xff0000u) & ~0xff000000u | r1_3 << 0x18;  // (from the original)
    r0_6 = *global_0088729c;
    frame->word_0 = frame.at(0x1c).addr();  // (from the original)
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_3;
    guest::cpu()->s[2] = S2_5;
    r0_7 = call_0057b9dc(r0_6, r0, r2_5, r3_5);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (r0_7 == 0) {
        return;
    }
    r1 = arg0->word_eb58;
    if (r1 != 0) {
        *gptr<u32>(r1) = r0_7;
    }
    *gptr<u32>(r5 + 4u) = *gptr<u32>(r5 + 4u) + 4u;
    guest::cpu()->r[1] = r1;
    return;
L_69b204:;
    u32 r2_6 = r1 << 0x1a;  // (from the original)
    if (s32(r2_6) >= 0) {
        goto L_69b2bc;
    }
    r0_8 = frame.at(0x18).addr();  // (from the original)
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    cell_corner_with_height(r0_8, 0x3bu, 6u);  // (from the original)
    frame->half_4 = 0;
    frame->half_6 = 0;
    frame->half_8 = 0;
    r1_4 = ((r6 >> 0x10 << 0x10 | 0x72u | 0x63u << 8 & 0xff00u) & ~0xff0000u | 0x6fu << 0x10 & 0xff0000u) & ~0xff000000u | u32(*global_008c9f1c) << 0x18;  // (from the original)
    *frame.at<u8>(0x10) = 1;  // (from the original)
    frame->byte_11 = 0;
    frame->word_14 = r1_4;
    r2_7 = frame.at(0x10).addr();  // (from the original)
    r0_9 = *global_00887292;
    r3_6 = frame.at(0x18).addr();  // (from the original)
    frame->word_0 = frame.at(4).addr();
    r0_7 = call_0057b9dc(r0_9, r0, r2_7, r3_6);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (r0_7 == 0) {
        return;
    }
    r1 = *gptr<u32>(r5 + 4u);
    if (r1 == 0) {
        *gptr<u32>(r5 + 4u) = *gptr<u32>(r5 + 4u) + 4u;
        guest::cpu()->r[1] = r1;
        return;
    }
    *gptr<u32>(r1) = r0_7;
    *gptr<u32>(r5 + 4u) = *gptr<u32>(r5 + 4u) + 4u;
    guest::cpu()->r[1] = r1;
    return;
L_69b2bc:;
    r1 <<= 0x19;  // (from the original)
    if (s32(r1) >= 0) {
        u32 r0_10 = u32(*gptr<u8>(r0_3 + 0x5700u)) << 0x1b;  // (from the original)
        if (s32(r0_10) >= 0) {
            guest::cpu()->r[1] = r1;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            return;
        }
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        u32 r0_11 = call_006cbbe4(r0_10, r1, r2_6);
        call_00307220(frame.at(0x10).addr(), r0_11);  // (from the original)
        float S3_8 = 2.5f;
        float S1_6 = 2.0f;
        float S2_8 = 32.0f;
        frame->float_18 = frame->float_18 + S2_8 * S3_8;
        float S0_7 = std::bit_cast<float>(*frame.at<u32>(0x10)) + S2_8 * S1_6;  // (from the original)
        *frame.at<u32>(0x10) = std::bit_cast<u32>(S0_7);  // (from the original)
        frame->half_4 = 0;
        frame->half_8 = 0;
        frame->half_6 = u16(0xffff8000u);  // (from the original)
        u32 r1_5 = (((r6 & ~0xffu | 0x73u) & ~0xff00u | 0x7au << 8 & 0xff00u) & ~0xff0000u | 0x61u << 0x10 & 0xff0000u) & ~0xff000000u | u32(*global_008c9f1c) << 0x18;  // (from the original)
        frame->byte_20 = 1;
        frame->byte_21 = 0;
        frame->word_24 = r1_5;
        u32 r0_13 = *global_0088729a;
        frame->word_0 = frame.at(4).addr();
        guest::cpu()->s[0] = S0_7;
        guest::cpu()->s[1] = S1_6;
        guest::cpu()->s[2] = S2_8;
        guest::cpu()->s[3] = S3_8;
        u32 r0_14 = call_0057b9dc(r0_13, r0, frame.at(0x20).addr(), frame.at(0x10).addr());  // (from the original)
        u32 r1_6 = guest::cpu()->r[1];
        if (r0_14 != 0) {
            r1_6 = *gptr<u32>(r5 + 4u);
            if (r1_6 != 0) {
                *gptr<u32>(r1_6) = r0_14;
            }
            *gptr<u32>(r5 + 4u) = *gptr<u32>(r5 + 4u) + 4u;
        }
        call_005c886c(r0_14, r1_6);
        return;
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
}

}  // namespace d_0069b0ac
GUEST_EXPORT_FRAMED(0x0069b0ac, d_0069b0ac::f_0069b0ac, 0x47b0);  // pushes {r4, r5, r7, r8, r9, r10, lr} first, as the original

// f_0069b3f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0069b3f0 {

struct __attribute__((packed)) Object_0069b3f0_0 {
    u8 unknown_0[0xeb58];  // (not used here)
    u32 word_eb58;
};
GUEST_OFFSET(Object_0069b3f0_0, word_eb58, 0xeb58);

struct __attribute__((packed)) Local_0069b3f0_r5_2 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Local_0069b3f0_r5_2, word_4, 0x4);

inline constexpr u32 global_00aaef18_address = 0x00aaef18u;
inline constexpr u32 global_00aaf14c_address = 0x00aaf14cu;
inline guest::global<u16, 0x0088725e> global_0088725e;
inline guest::global<u8, 0x008c9f1c> global_008c9f1c;
inline guest::global<u32, 0x00aaf14c> global_00aaf14c;
inline constexpr guest::Function<0x00106319, u32(u32, u32, u32, u32)> call_00106318;
inline constexpr guest::Function<0x00307220, u32(u32, u32)> call_00307220;
inline constexpr guest::Function<0x0057b9dc, u32(u32, u32, u32, u32)> call_0057b9dc;

struct __attribute__((packed)) Frame_0069b3f0 {
    u32 word_0;
    float float_4;
    u8 unknown_8[0x4];  // (not read or written by name)
    float float_c;
    u16 half_10;
    u16 half_12;
    u16 half_14;
    u8 unknown_16[0x2];  // (not read or written by name)
    u8 byte_18;
    u8 byte_19;
    u8 unknown_1a[0x2];  // (not read or written by name)
    u32 word_1c;
};
GUEST_OFFSET(Frame_0069b3f0, word_0, 0x0);
GUEST_OFFSET(Frame_0069b3f0, float_4, 0x4);
GUEST_OFFSET(Frame_0069b3f0, float_c, 0xc);
GUEST_OFFSET(Frame_0069b3f0, half_10, 0x10);
GUEST_OFFSET(Frame_0069b3f0, half_12, 0x12);
GUEST_OFFSET(Frame_0069b3f0, half_14, 0x14);
GUEST_OFFSET(Frame_0069b3f0, byte_18, 0x18);
GUEST_OFFSET(Frame_0069b3f0, byte_19, 0x19);
GUEST_OFFSET(Frame_0069b3f0, word_1c, 0x1c);
GUEST_SIZE(Frame_0069b3f0, 0x20);

void f_0069b3f0(gptr<Object_0069b3f0_0> arg0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2) {
    guest::StackFrameOf<Frame_0069b3f0> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r5_1 = *global_00aaf14c;
    if (r5_1 != 0) {
        u32 r0_1 = call_00106318(global_00aaef18_address, r1, r2, r3);
        call_00307220(frame.at(4).addr(), r0_1);
        float S1_2 = 64.0f;
        float S2_2 = 48.0f;
        frame->float_4 = frame->float_4 + S1_2;
        float S0_2 = frame->float_c + S2_2;
        frame->float_c = S0_2;
        frame->half_10 = 0;
        frame->half_12 = 0x4000;  // (from the original)
        frame->half_14 = 0;
        u32 r12_1 = u32(*gptr<u8>(r5_1 + 0x5700u)) & 0xfu;  // (from the original)
        u32 r6_1 = r12_1 & ~0xffu;  // (from the original)
        gptr<Local_0069b3f0_r5_2> r5_2 = gptr<Local_0069b3f0_r5_2>(r0 + 0xeb54u);  // (from the original)
        u32 r12_2 = 0x6fu << 8;  // (from the original)
        if (r12_1 == 3u) {
            u32 r2_2 = *global_008c9f1c;
            frame->byte_18 = 1;
            frame->word_1c = (((0x6du | r6_1) & ~0xff00u | r12_2 & 0xff00u) & ~0xff0000u | 0x62u << 0x10 & 0xff0000u) & ~0xff000000u | r2_2 << 0x18;  // (from the original)
            frame->byte_19 = 0;
            u32 r0_3 = *global_0088725e;
            frame->word_0 = frame.at(0x10).addr();  // (from the original)
            guest::cpu()->s[0] = S0_2;
            guest::cpu()->s[1] = S1_2;
            guest::cpu()->s[2] = S2_2;
            r0_4 = call_0057b9dc(r0_3, r0, frame.at(0x18).addr(), frame.at(4).addr());  // (from the original)
            S0 = guest::cpu()->s[0];
            S1 = guest::cpu()->s[1];
            if (r0_4 == 0) {
                return;
            }
            r1_1 = r5_2->word_4;
            if (r1_1 != 0) {
                goto L_69b4f8;
            }
            goto L_69b578;
        }
        r3_3 = (((0x6du | r6_1) & ~0xff00u | r12_2 & 0xff00u) & ~0xff0000u | 0x6cu << 0x10 & 0xff0000u) & ~0xff000000u | u32(*global_008c9f1c) << 0x18;  // (from the original)
        frame->byte_18 = 1;
        frame->word_1c = r3_3;
        frame->byte_19 = 0;
        r0_5 = *global_0088725e;
        r2_4 = frame.at(0x18).addr();  // (from the original)
        r3_4 = frame.at(4).addr();
        frame->word_0 = frame.at(0x10).addr();  // (from the original)
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_2;
        guest::cpu()->s[2] = S2_2;
        r0_4 = call_0057b9dc(r0_5, r0, r2_4, r3_4);
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        if (r0_4 == 0) {
            return;
        }
        r1_1 = arg0->word_eb58;
        if (r1_1 == 0) {
            goto L_69b578;
        }
L_69b4f8:;
        *gptr<u32>(r1_1) = r0_4;
L_69b578:;
        r5_2->word_4 = r5_2->word_4 + 4u;
    }
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
}

}  // namespace d_0069b3f0
GUEST_EXPORT_FRAMED(0x0069b3f0, d_0069b3f0::f_0069b3f0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0069c838: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0069c838 {

inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> get_current_player;
inline constexpr guest::Function<0x003188f0, u32(u32)> first_registered_id_of_class_0;

u32 f_0069c838(u32 r0) {
    u32 r0_1 = get_current_player(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_2 = first_registered_id_of_class_0(r0_1);
    if (r0_2 != 0xeu) {  // (from the original)
        return 0u;
    }
    if (r0_1 != 0 && (u32(*gptr<u8>(r0_1 + 0x8a6bu)) & 1u) == 0) {  // (from the original)
        return 1u;
    }
    if (s32(u32(*gptr<u8>(r0_1 + 0x8f7du)) << 0x1d) >= 0) {  // (from the original)
        return 0u;
    }
    return 1u;
}

}  // namespace d_0069c838
GUEST_EXPORT_FRAMED(0x0069c838, d_0069c838::f_0069c838, 0x4010);  // pushes {r4, lr} first, as the original

// f_0069f26c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0069f26c {

struct __attribute__((packed)) Local_0069f26c_r0_1 {
    u8 unknown_0[0x5701];  // (not used here)
    u8 byte_5701;
    u8 unknown_5702[0x17];  // (not used here)
    u8 byte_5719;
};
GUEST_OFFSET(Local_0069f26c_r0_1, byte_5701, 0x5701);
GUEST_OFFSET(Local_0069f26c_r0_1, byte_5719, 0x5719);

struct __attribute__((packed)) Local_0069f26c_r0_3 {
    u8 unknown_0[0xa];  // (not used here)
    u8 byte_a;
};
GUEST_OFFSET(Local_0069f26c_r0_3, byte_a, 0xa);

struct __attribute__((packed)) Local_0069f26c_r0_6 {
    u8 unknown_0[0xa];  // (not used here)
    u8 byte_a;
};
GUEST_OFFSET(Local_0069f26c_r0_6, byte_a, 0xa);

struct __attribute__((packed)) Local_0069f26c_r0_8 {
    u8 byte_0;
};
GUEST_OFFSET(Local_0069f26c_r0_8, byte_0, 0x0);

inline constexpr guest::Function<0x002fae84, u32(u32)> get_data_base;
inline constexpr guest::Function<0x002fb328, u32(u32, u32)> get_save_data;
inline constexpr guest::Function<0x002fdf10, u32(u32)> is_in_registered_list;
inline constexpr guest::Function<0x002fe8a8, u32(u32, u32, u32, u32)> player_of_slot_index;

u32 f_0069f26c(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r1_2 = 0;
    gptr<Local_0069f26c_r0_1> r0_1 = gptr<Local_0069f26c_r0_1>(player_of_slot_index(0u, r1, r2, r3));
    if (r0_1.addr() == 0) {
        u32 r0_2 = get_data_base(r0_1.addr());
        gptr<Local_0069f26c_r0_3> r0_3 = gptr<Local_0069f26c_r0_3>(r0_2 + 0x6214fu);  // (from the original)
        r1_2 = u32(r0_3->byte_a) & ~0x40u;  // (from the original)
        r0_3->byte_a = u8(r1_2);
    } else {
        u32 r0_4 = is_in_registered_list(0xbu);  // (from the original)
        r1_2 = guest::cpu()->r[1];
        if (r0_4 == 0) {
            u32 r0_5 = r0_1->byte_5719;
            u32 r2_2 = r0_1->byte_5701;
            u32 r1_3 = r0_5 >> 1u & 1u;
            gptr<Local_0069f26c_r0_6> r0_6 = gptr<Local_0069f26c_r0_6>(r1_3 | r0_5 >> 2u & 1u | r0_5 >> 3u & 1u);
            if ((r0_6.addr() & r2_2 >> 1) == 0) {
                u32 r0_7 = get_data_base(r0_6.addr());
                gptr<Local_0069f26c_r0_8> r0_8 = gptr<Local_0069f26c_r0_8>(r0_7 - 0xfff901ccu);  // (from the original)
                r0_8->byte_0 = u8(u32(r0_8->byte_0) & ~0x80u);  // (from the original)
                u32 r0_9 = get_data_base(r0_8.addr());
                r0_6 = gptr<Local_0069f26c_r0_6>(r0_9 + 0x6214fu);  // (from the original)
                r1_3 = u32(r0_6->byte_a) & ~0x40u;  // (from the original)
                r0_6->byte_a = u8(r1_3);
            }
            u32 r0_10 = get_save_data(r0_6.addr(), r1_3);
            u32 r0_11 = u32(*gptr<u8>(r0_10 + 0x6feb4u)) & 0x80u;  // (from the original)
            if (r0_11 != 0) {
                r0_11 = 1u;
            }
            return r0_11;
        }
    }
    guest::cpu()->r[1] = r1_2;
    return 0u;
}

}  // namespace d_0069f26c
GUEST_EXPORT_FRAMED(0x0069f26c, d_0069f26c::f_0069f26c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original
