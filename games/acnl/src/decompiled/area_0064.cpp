// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "graphics/hemisphere_light.hpp"
#include "player/slot_object.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_006401f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006401f4 {

inline constexpr u32 vtable_sead__SafeStringBase_char_ = 0x009047f8u;
inline constexpr guest::Function<0x002fb94c, u32(u32, u32)> get_current_player;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> construct_item;
inline constexpr guest::Function<0x002fe574, u32(u32, u32)> Item__same_number_as;
inline constexpr guest::Function<0x00713aa8, u32(u32, u32, u32, u32)> TalkReceptHandleHolder__query_handle;
inline constexpr guest::Function<0x0071a7ec, u32(u32, u32)> item_if_first_item_or_class_1;
inline constexpr guest::Function<0x0076e014, u32(u32, u32)> call_0076e014;
inline constexpr guest::Function<0x008273c8, u32(u32, u32)> sead__SafeStringBase_char___SafeStringBase_008273c8;

struct __attribute__((packed)) Frame_006401f4 {
    u8 unknown_0[0x10];  // (not read or written by name)
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
};
GUEST_OFFSET(Frame_006401f4, word_10, 0x10);
GUEST_OFFSET(Frame_006401f4, word_14, 0x14);
GUEST_OFFSET(Frame_006401f4, word_18, 0x18);
GUEST_OFFSET(Frame_006401f4, word_1c, 0x1c);
GUEST_OFFSET(Frame_006401f4, word_20, 0x20);
GUEST_OFFSET(Frame_006401f4, word_24, 0x24);
GUEST_OFFSET(Frame_006401f4, word_28, 0x28);
GUEST_OFFSET(Frame_006401f4, word_2c, 0x2c);
GUEST_OFFSET(Frame_006401f4, word_30, 0x30);
GUEST_OFFSET(Frame_006401f4, word_34, 0x34);
GUEST_OFFSET(Frame_006401f4, word_38, 0x38);
GUEST_OFFSET(Frame_006401f4, word_3c, 0x3c);
GUEST_OFFSET(Frame_006401f4, word_40, 0x40);
GUEST_OFFSET(Frame_006401f4, word_44, 0x44);
GUEST_OFFSET(Frame_006401f4, word_48, 0x48);
GUEST_OFFSET(Frame_006401f4, word_4c, 0x4c);
GUEST_OFFSET(Frame_006401f4, word_50, 0x50);
GUEST_OFFSET(Frame_006401f4, word_54, 0x54);
GUEST_OFFSET(Frame_006401f4, word_58, 0x58);
GUEST_OFFSET(Frame_006401f4, word_5c, 0x5c);
GUEST_OFFSET(Frame_006401f4, word_60, 0x60);
GUEST_OFFSET(Frame_006401f4, word_64, 0x64);
GUEST_OFFSET(Frame_006401f4, word_68, 0x68);
GUEST_OFFSET(Frame_006401f4, word_6c, 0x6c);
GUEST_SIZE(Frame_006401f4, 0x70);

void sead__SafeStringBase_char___SafeStringBase_006401f4(u32 r0, u32 r1) {
    guest::StackFrameOf<Frame_006401f4> frame;  // the original's stack frame
    u32 r0_6 = 0;
    u32 r0_8 = 0;
    u32 r0_10 = 0;
    u32 r0_12 = 0;
    u32 r0_16 = 0;
    u32 r6_1 = 0;
    u32 r0_1 = TalkReceptHandleHolder__query_handle(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        return;
    }
    frame->word_2c = 0x640538;  // (from the original)
    frame->word_28 = vtable_sead__SafeStringBase_char_;
    u32 r0_2 = sead__SafeStringBase_char___SafeStringBase_008273c8(r0_1, frame.at(0x28).addr());  // (from the original)
    r1 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        frame->word_3c = 0x640548;  // (from the original)
        frame->word_38 = vtable_sead__SafeStringBase_char_;
        u32 r0_3 = sead__SafeStringBase_char___SafeStringBase_008273c8(r0_1, frame.at(0x38).addr());  // (from the original)
        r1 = guest::cpu()->r[1];
        if (r0_3 == 0) {
            frame->word_4c = 0x640554;  // (from the original)
            frame->word_48 = vtable_sead__SafeStringBase_char_;
            u32 r0_4 = sead__SafeStringBase_char___SafeStringBase_008273c8(r0_1, frame.at(0x48).addr());  // (from the original)
            r1 = guest::cpu()->r[1];
            if (r0_4 == 0) {
                frame->word_14 = 0x640560;  // (from the original)
                frame->word_10 = vtable_sead__SafeStringBase_char_;
                u32 r0_5 = sead__SafeStringBase_char___SafeStringBase_008273c8(r0_1, frame.at(0x10).addr());  // (from the original)
                r1 = guest::cpu()->r[1];
                if (r0_5 == 0) {
                    frame->word_1c = 0x640570;  // (from the original)
                    frame->word_18 = vtable_sead__SafeStringBase_char_;
                    r0_6 = sead__SafeStringBase_char___SafeStringBase_008273c8(r0_1, frame.at(0x18).addr());  // (from the original)
                    r1 = guest::cpu()->r[1];
                    if (r0_6 == 0) {
                        goto L_6402b4;
                    }
                }
            }
        }
    }
    r0_6 = 1u;
L_6402b4:;
    if (r0_6 != 0) {
        guest::cpu()->r[1] = r1;
        return;
    }
    *gptr<u8>(r0 + 0x2d1u) = u8(u32(*gptr<u8>(r0 + 0x2d1u)) | 0x20u);  // (from the original)
    frame->word_1c = 0x640580;  // (from the original)
    u32 r5 = r0 + 0x2d1u;  // (from the original)
    frame->word_18 = vtable_sead__SafeStringBase_char_;
    u32 r0_7 = sead__SafeStringBase_char___SafeStringBase_008273c8(r0_1, frame.at(0x18).addr());  // (from the original)
    r1 = guest::cpu()->r[1];
    if (r0_7 == 0) {
        frame->word_14 = 0x64058c;  // (from the original)
        frame->word_10 = vtable_sead__SafeStringBase_char_;
        r0_8 = sead__SafeStringBase_char___SafeStringBase_008273c8(r0_1, frame.at(0x10).addr());  // (from the original)
        r1 = guest::cpu()->r[1];
        if (r0_8 == 0) {
            goto L_64031c;
        }
    }
    r0_8 = 1u;
L_64031c:;
    if (r0_8 == 0) {
        goto L_640338;
    } else {
        r0 = u32(*gptr<u8>(r5)) & ~0x20u;  // (from the original)
    }
    *gptr<u8>(r5) = u8(r0);
    guest::cpu()->r[1] = r1;
    return;
L_640338:;
    frame->word_34 = 0x640594;  // (from the original)
    frame->word_30 = vtable_sead__SafeStringBase_char_;
    u32 r0_9 = sead__SafeStringBase_char___SafeStringBase_008273c8(r0_1, frame.at(0x30).addr());  // (from the original)
    r1 = guest::cpu()->r[1];
    if (r0_9 == 0) {
        frame->word_44 = 0x6405a0;  // (from the original)
        frame->word_40 = vtable_sead__SafeStringBase_char_;
        r0_10 = sead__SafeStringBase_char___SafeStringBase_008273c8(r0_1, frame.at(0x40).addr());  // (from the original)
        r1 = guest::cpu()->r[1];
        if (r0_10 == 0) {
            goto L_640384;
        }
    }
    r0_10 = 1u;
L_640384:;
    if (r0_10 == 0) {
        frame->word_54 = 0x6405ac;  // (from the original)
        frame->word_50 = vtable_sead__SafeStringBase_char_;
        u32 r0_11 = sead__SafeStringBase_char___SafeStringBase_008273c8(r0_1, frame.at(0x50).addr());  // (from the original)
        if (r0_11 == 0) {
            frame->word_5c = 0x6405bc;  // (from the original)
            frame->word_58 = vtable_sead__SafeStringBase_char_;
            r0_12 = sead__SafeStringBase_char___SafeStringBase_008273c8(r0_1, frame.at(0x58).addr());  // (from the original)
            if (r0_12 == 0) {
                goto L_6403e0;
            }
        }
        r0_12 = 1u;
L_6403e0:;
        if (r0_12 == 0) {
            goto L_6403fc;
        }
        r1 = u32(*gptr<u8>(r5)) & ~0x20u;  // (from the original)
        r0 = r1 | 0x40u;  // (from the original)
        *gptr<u8>(r5) = u8(r1);
        *gptr<u8>(r5) = u8(r0);
        guest::cpu()->r[1] = r1;
        return;
L_6403fc:;
        frame->word_24 = 0x6405c4;  // (from the original)
        frame->word_20 = vtable_sead__SafeStringBase_char_;
        u32 r0_13 = sead__SafeStringBase_char___SafeStringBase_008273c8(r0_1, frame.at(0x20).addr());  // (from the original)
        if (r0_13 == 0) {
            frame->word_64 = 0x6405dc;  // (from the original)
            frame->word_60 = vtable_sead__SafeStringBase_char_;
            u32 r0_14 = sead__SafeStringBase_char___SafeStringBase_008273c8(r0_1, frame.at(0x60).addr());  // (from the original)
            r1 = guest::cpu()->r[1];
            if (r0_14 != 0) {
                frame->word_6c = 0x6405e8;  // (from the original)
                frame->word_68 = vtable_sead__SafeStringBase_char_;
                u32 r0_15 = sead__SafeStringBase_char___SafeStringBase_008273c8(r0_1, frame.at(0x68).addr());  // (from the original)
                r1 = guest::cpu()->r[1];
                if (r0_15 == 0) {
                    r0_16 = 1u;
                    goto L_640508;
                }
            }
            r0_16 = 0u;
L_640508:;
            if (r0_16 == 0) {
                guest::cpu()->r[1] = r1;
                return;
            }
            u32 r0_17 = get_current_player(r0_16, r1);
            r1 = guest::cpu()->r[1];
            if (r0_17 == 0) {
                return;
            }
            u32 r0_18 = call_0076e014(r0_17, r1);
            if (r0_18 != 0) {
                r1 = u32(*gptr<u8>(r5)) & ~0x20u;  // (from the original)
                r0 = r1 | 0x40u;  // (from the original)
                *gptr<u8>(r5) = u8(r1);
                *gptr<u8>(r5) = u8(r0);
                guest::cpu()->r[1] = r1;
                return;
            }
            return;
        }
        u32 r0_19 = get_current_player(r0_13, guest::cpu()->r[1]);
        r1 = guest::cpu()->r[1];
        if (r0_19 == 0) {
            return;
        }
        u32 r0_21 = item_if_first_item_or_class_1(r0_19 + 0xau, r1);  // (from the original)
        u32 r0_22 = frame.at(0x60).addr();  // (from the original)
        construct_item(r0_22, 0x28b1u);  // (from the original)
        u32 r0_23 = Item__same_number_as(r0_21, r0_22);
        if (r0_23 == 0) {
            construct_item(frame.at(0xc).addr(), 0x28b2u);  // (from the original)
            u32 r0_25 = Item__same_number_as(r0_21, frame.at(0xc).addr());  // (from the original)
            if (r0_25 == 0) {
                r6_1 = 0u;
                goto L_640490;
            }
        }
        r6_1 = 1u;
L_640490:;
        if (r6_1 != 0) {
            r1 = u32(*gptr<u8>(r5)) & ~0x20u;  // (from the original)
            r0 = r1 | 0x40u;  // (from the original)
            *gptr<u8>(r5) = u8(r1);
            *gptr<u8>(r5) = u8(r0);
            guest::cpu()->r[1] = r1;
            return;
        }
        return;
    }
    r0 = u32(*gptr<u8>(r5)) | 0x40u;  // (from the original)
    *gptr<u8>(r5) = u8(r0);
    guest::cpu()->r[1] = r1;
}

}  // namespace d_006401f4
GUEST_EXPORT_FRAMED(0x006401f4, d_006401f4::sead__SafeStringBase_char___SafeStringBase_006401f4, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_006405f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006405f4 {

struct __attribute__((packed)) Local_006405f4_ea_1 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Local_006405f4_ea_1, byte_0, 0x0);
GUEST_OFFSET(Local_006405f4_ea_1, byte_1, 0x1);
GUEST_OFFSET(Local_006405f4_ea_1, byte_2, 0x2);

inline guest::global<u32, 0x00aaf14c> global_00aaf14c;
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32)> Item__is_empty;
inline constexpr guest::Function<0x0031917c, u32(u32, u32)> block_address_of_index_0031917c;
inline constexpr guest::Function<0x0071dcdc, u32(u32, u32)> small_record_address_0071dcdc;
inline constexpr guest::Function<0x00756120, u32(u32, u32)> call_00756120;
inline constexpr guest::Function<0x00758dd4, u32(u32, u32)> masked_byte_758dd4;

u32 f_006405f4(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = get_save_data(r0, r1, r2, guest::cpu()->r[3]);
    u32 r0_3 = block_address_of_index_0031917c(r0_1 + 0x406ecu, r1);  // (from the original)
    u32 r6_1 = *global_00aaf14c;
    u32 r1_1 = r2;
    if (r2 + 1u == 0) {
        r0_3 = call_00756120(r0_3, r6_1);
        r1_1 = r0_3;
    }
    gptr<Local_006405f4_ea_1> ea_1 = gptr<Local_006405f4_ea_1>(r0 + 0x270u);  // (from the original)
    ea_1->byte_0 = u8(r1);
    u32 r5_1 = 0u;
    ea_1->byte_1 = u8(r1_1);
    if (r1_1 + 1u != 0) {
        r0_3 = small_record_address_0071dcdc(r6_1 + 0x7008u, r1_1);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        u32 r6_2 = r0_3;
        if (r0_3 != 0) {
            r0_3 = masked_byte_758dd4(r0_3, r1_1);
            r1_1 = guest::cpu()->r[1];
            if (r0_3 == 2u) {
                r5_1 = 1u;
                r0_3 = Item__is_empty(r6_2 + 0x274u, r1_1);  // (from the original)
                r1_1 = guest::cpu()->r[1];
                if (r0_3 != 0) {
                    r5_1 = 2u;
                }
            }
        }
    }
    ea_1->byte_2 = u8(r5_1);
    guest::cpu()->r[1] = r1_1;
    return r0_3;
}

}  // namespace d_006405f4
GUEST_EXPORT_FRAMED(0x006405f4, d_006405f4::f_006405f4, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00641f88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00641f88 {

struct __attribute__((packed)) Object_00641f88_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00641f88_0, word_4, 0x4);

struct __attribute__((packed)) Local_00641f88_res_1 {
    u8 unknown_0[0x3];  // (not used here)
    u8 byte_3;
    u8 unknown_4[0xf];  // (not used here)
    u8 byte_13;
    u8 unknown_14[0x3];  // (not used here)
    u8 byte_17;
    u8 unknown_18[0x3];  // (not used here)
    u8 byte_1b;
    u8 unknown_1c[0x1];  // (not used here)
    u8 byte_1d;
};
GUEST_OFFSET(Local_00641f88_res_1, byte_3, 0x3);
GUEST_OFFSET(Local_00641f88_res_1, byte_13, 0x13);
GUEST_OFFSET(Local_00641f88_res_1, byte_17, 0x17);
GUEST_OFFSET(Local_00641f88_res_1, byte_1b, 0x1b);
GUEST_OFFSET(Local_00641f88_res_1, byte_1d, 0x1d);

inline guest::global<u32, 0x0095debc> global_0095debc;
inline guest::global<u32, 0x00a83af0> global_00a83af0;
inline constexpr guest::Function<0x00300914, u32(u32, u32, u32)> forward_to_held_object_slot_21;
inline constexpr guest::Function<0x00300924, u32(u32, u32, u32)> forward_to_held_object_slot_22;
inline constexpr guest::Function<0x005f11b4, u32(u32, u32, u32, u32)> call_005f11b4;
inline constexpr guest::Function<0x005fcfd8, u32(u32, u32, u32, u32)> construct_word_res;
inline constexpr guest::Function<0x0075c348, u32(u32, u32, u32, u32)> call_0075c348;

u32 f_00641f88(gptr<Object_00641f88_0> arg0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r5_1 = *global_0095debc;
    u32 r0_1 = arg0->word_4;
    u32 r1_1 = *global_00a83af0;
    u32 zf_1 = r1_1 == 0;
    u32 cf_1 = r1_1 >= 0u;
    if (!zf_1) {
        zf_1 = 0x18fu == r1;  // (from the original)
        cf_1 = 0x18fu >= r1;  // (from the original)
    }
    if (cf_1 && !zf_1) {
        u32 r2_1 = r1 + (r1 << 4);
        gptr<Local_00641f88_res_1> res_1 = gptr<Local_00641f88_res_1>(r1_1 + (r2_1 << 1));
        u32 zf_2 = res_1.addr() == 0;
        if (!zf_2) {
            zf_2 = r5_1 == 0;
        }
        if (!zf_2 && r0_1 != 0) {
            r0_1 = *gptr<u32>(r0_1 + 0x354u);  // (from the original)
            if (r0_1 != 0) {
                construct_word_res(frame.at(0).addr(), r1_1, r2_1, r3);
                res_1->byte_13 = 0;
                call_0075c348(r5_1, frame.at(0).addr(), 0x6420b4u, res_1.addr() + 0x10u);  // (from the original)
                call_005f11b4(r0_1, frame.at(0).addr(), 0xcu, 0u);  // (from the original)
                res_1->byte_1b = 0;
                call_0075c348(r5_1, frame.at(0).addr(), 0x6420c4u, res_1.addr() + 0x18u);  // (from the original)
                call_005f11b4(r0_1, frame.at(0).addr(), 0xau, 0u);  // (from the original)
                res_1->byte_17 = 0;
                call_0075c348(r5_1, frame.at(0).addr(), 0x6420d4u, res_1.addr() + 0x14u);  // (from the original)
                call_005f11b4(r0_1, frame.at(0).addr(), 0xbu, 0u);  // (from the original)
                forward_to_held_object_slot_21(r0_1, u32(res_1->byte_1d) >> 4, 0u);
                u32 r1_9 = s8(res_1->byte_3);
                forward_to_held_object_slot_22(r0_1, r1_9, 0u);
                r1_1 = guest::cpu()->r[1];
                r0_1 = frame.at(0).addr();
            }
        }
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_00641f88
GUEST_EXPORT_FRAMED(0x00641f88, d_00641f88::f_00641f88, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0064664c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0064664c {

struct __attribute__((packed)) Object_0064664c_0 {
    u8 unknown_0[0xf0];  // (not used here)
    u32 word_f0;
};
GUEST_OFFSET(Object_0064664c_0, word_f0, 0xf0);

struct __attribute__((packed)) Local_0064664c_r4_2 {
    u8 unknown_0[0x30];  // (not used here)
    u32 word_30;
};
GUEST_OFFSET(Local_0064664c_r4_2, word_30, 0x30);

inline constexpr guest::Function<0x00239174, u32(u32, u32, u32)> script__WordFix_9u___WordFix_00239174;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> read_global_byte_2;
inline constexpr guest::Function<0x00313440, u32(u32)> flagged_mode_ordinal;
inline constexpr guest::Function<0x005b6a10, u32(u32)> call_005b6a10;
inline constexpr guest::Function<0x005c1d80, u32(u32)> count_active_slot_objects;
inline constexpr guest::Function<0x0069a764, u32(u32, u32, u32)> call_0069a764;

u32 f_0064664c(gptr<Object_0064664c_0> arg0, u32 r1_unused, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r0_5 = 0;
    u32 r6 = r0;
    u32 r0_1 = 3u;
    u32 r1_1 = ~0u;
    u32 r8 = 0x984718u;  // (from the original)
    *gptr<u32>(r8) = r0_1;
    *gptr<u32>(r8 + 4) = r1_1;
    *gptr<u8>(r8 + 8u) = 0;
    u32 r4_1 = arg0->word_f0;
    if (r4_1 != 0) {
        u32 r0_2 = read_global_byte_2(r0_1, r1_1, r2, guest::cpu()->r[3]);
        u32 r0_3 = flagged_mode_ordinal(r0_2);
        gptr<Local_0064664c_r4_2> r4_2 = gptr<Local_0064664c_r4_2>(r4_1 + 0x1000u);  // (from the original)
        u32 r1_3 = r4_2->word_30;
        if (r0_3 != r1_3) {
            u32 r0_4 = read_global_byte_2(r0_3, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
            r0_5 = call_005b6a10(r0_4);
            if (r0_5 == 0) {
                *gptr<u32>(r8) = 2;
                u32 r0_6 = read_global_byte_2(2u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                u32 r0_7 = flagged_mode_ordinal(r0_6);
                script__WordFix_9u___WordFix_00239174(r6, r0_7, 0u);
                r0_5 = script__WordFix_9u___WordFix_00239174(r6, r4_2->word_30, 1u);
            } else {
                *gptr<u32>(r8) = 0;
            }
        } else {
            u32 r9 = 1u;
            *gptr<u32>(r8) = r9;
            script__WordFix_9u___WordFix_00239174(r6, r1_3, 0u);
            r0_5 = 0x950148u;  // (from the original)
            u32 r7 = *gptr<u32>(r0_5);
            if (r7 != 0) {
                u32 r5 = r4_2->word_30;
                u32 r10 = 0x88722eu;  // (from the original)
                u32 r4 = 0u;
                do {
                    u32 r2_6 = *gptr<u16>(r10);
                    r0_5 = call_0069a764(r7, r4, r2_6);
                    if (r0_5 != 0 && r4 != r5) {
                        *gptr<u8>(r8 + 8u) = u8(r9);
                        r0_5 = script__WordFix_9u___WordFix_00239174(r6, r4, 1u);
                        break;
                    }
                    r4 += 1u;
                    guest::preempt();
                } while (s32(r4) < 0xa);  // (from the original)
            }
        }
        u32 r0_8 = count_active_slot_objects(r0_5);
        r1_1 = guest::cpu()->r[1];
        *gptr<u32>(r8 + 4u) = r0_8;
        r0_1 = 0x1717c0u;  // (from the original)
        *gptr<u32>(r6 + 0x164u) = r0_1;  // (from the original)
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0064664c
GUEST_EXPORT_FRAMED(0x0064664c, d_0064664c::f_0064664c, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_006483f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006483f4 {

struct __attribute__((packed)) Object_006483f4_0 {
    u8 unknown_0[0xf0];  // (not used here)
    u32 word_f0;
};
GUEST_OFFSET(Object_006483f4_0, word_f0, 0xf0);

struct __attribute__((packed)) Object_006483f4_1 {
    float float_0;
    float float_4;
    u32 word_8;
    u32 word_c;
    float float_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(Object_006483f4_1, float_0, 0x0);
GUEST_OFFSET(Object_006483f4_1, float_4, 0x4);
GUEST_OFFSET(Object_006483f4_1, word_8, 0x8);
GUEST_OFFSET(Object_006483f4_1, word_c, 0xc);
GUEST_OFFSET(Object_006483f4_1, float_10, 0x10);
GUEST_OFFSET(Object_006483f4_1, word_14, 0x14);
GUEST_OFFSET(Object_006483f4_1, word_18, 0x18);
GUEST_OFFSET(Object_006483f4_1, word_1c, 0x1c);
GUEST_OFFSET(Object_006483f4_1, word_20, 0x20);

struct __attribute__((packed)) Local_006483f4_r0_2 {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
    float float_10;
    float float_14;
    float float_18;
    float float_1c;
    u32 word_20;
};
GUEST_OFFSET(Local_006483f4_r0_2, float_0, 0x0);
GUEST_OFFSET(Local_006483f4_r0_2, float_4, 0x4);
GUEST_OFFSET(Local_006483f4_r0_2, float_8, 0x8);
GUEST_OFFSET(Local_006483f4_r0_2, float_c, 0xc);
GUEST_OFFSET(Local_006483f4_r0_2, float_10, 0x10);
GUEST_OFFSET(Local_006483f4_r0_2, float_14, 0x14);
GUEST_OFFSET(Local_006483f4_r0_2, float_18, 0x18);
GUEST_OFFSET(Local_006483f4_r0_2, float_1c, 0x1c);
GUEST_OFFSET(Local_006483f4_r0_2, word_20, 0x20);

inline constexpr u32 vtable_sead__SafeStringBase_char_ = 0x009047f8u;
inline constexpr guest::Function<0x002fb328, u32(u32, u32)> get_save_data;
inline constexpr guest::Function<0x002fc900, u32(u32, u32, u32, u32)> mode_above_1;
inline constexpr guest::Function<0x002fe4c0, u32(u32, u32)> indexed_object_index;
inline constexpr guest::Function<0x0030031c, u32(u32, u32)> Date__is_today;
inline constexpr guest::Function<0x00301df4, u32(u32, u32)> player_in_array;
inline constexpr guest::Function<0x0051ccc0, u32(u32)> call_0051ccc0;
inline constexpr guest::Function<0x00632acc, u32(u32)> check_partner_handle;
inline constexpr guest::Function<0x00761c48, u32(u32, u32, u32, u32)> call_00761c48;
inline constexpr guest::Function<0x008273c8, u32(u32, u32)> sead__SafeStringBase_char___SafeStringBase_008273c8;

struct __attribute__((packed)) Frame_006483f4 {
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
    u8 unknown_30[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006483f4, word_0, 0x0);
GUEST_OFFSET(Frame_006483f4, word_4, 0x4);
GUEST_OFFSET(Frame_006483f4, word_8, 0x8);
GUEST_OFFSET(Frame_006483f4, word_c, 0xc);
GUEST_OFFSET(Frame_006483f4, word_10, 0x10);
GUEST_OFFSET(Frame_006483f4, word_14, 0x14);
GUEST_OFFSET(Frame_006483f4, word_18, 0x18);
GUEST_OFFSET(Frame_006483f4, word_1c, 0x1c);
GUEST_OFFSET(Frame_006483f4, word_20, 0x20);
GUEST_OFFSET(Frame_006483f4, word_24, 0x24);
GUEST_OFFSET(Frame_006483f4, word_28, 0x28);
GUEST_OFFSET(Frame_006483f4, word_2c, 0x2c);
GUEST_SIZE(Frame_006483f4, 0x34);

u32 sead__SafeStringBase_char___SafeStringBase_006483f4(gptr<Object_006483f4_0> arg0, gptr<Object_006483f4_1> arg1, u32 r2, u32 r3, float S0, float S1, float S2, float S3, float S4, float S5, float S6, float S7) {
    guest::StackFrameOf<Frame_006483f4> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r6_1 = 0;
    u32 r0_4 = 0;
    u32 r0_12 = 0;
    u32 r0_1 = mode_above_1(r0, r1, r2, r3);
    gptr<Local_006483f4_r0_2> r0_2 = gptr<Local_006483f4_r0_2>(r0_1 == 0 ? 0x841be4u : 0x841c08u);  // (from the original)
    float S0_1 = r0_2->float_0;
    float S1_1 = r0_2->float_4;
    float S2_1 = r0_2->float_8;
    float S3_1 = r0_2->float_c;
    float S4_1 = r0_2->float_10;
    float S5_1 = r0_2->float_14;
    float S6_1 = r0_2->float_18;
    float S7_1 = r0_2->float_1c;
    arg1->float_0 = S0_1;
    arg1->float_4 = S1_1;
    arg1->word_8 = std::bit_cast<u32>(S2_1);
    arg1->word_c = std::bit_cast<u32>(S3_1);
    arg1->float_10 = S4_1;
    arg1->word_14 = std::bit_cast<u32>(S5_1);
    arg1->word_18 = std::bit_cast<u32>(S6_1);
    arg1->word_1c = std::bit_cast<u32>(S7_1);
    arg1->word_20 = r0_2->word_20;
    u32 r0_3 = arg0->word_f0;
    if (r0_3 != 0) {
        r6_1 = *gptr<u32>(r0_3 + 0x1028u);  // (from the original)
        if (r6_1 != 0) {
            guest::cpu()->s[0] = S0_1;
            guest::cpu()->s[1] = S1_1;
            guest::cpu()->s[2] = S2_1;
            guest::cpu()->s[3] = S3_1;
            guest::cpu()->s[4] = S4_1;
            guest::cpu()->s[5] = S5_1;
            guest::cpu()->s[6] = S6_1;
            guest::cpu()->s[7] = S7_1;
            r0_4 = check_partner_handle(r0);
            u32 r5_1 = r0_4;
            if (r0_4 == 0) {
                goto L_64849c;
            }
            r0_4 = Date__is_today(r5_1 + 0xeau, 1u);  // (from the original)
            if (r0_4 == 0) {
                r0_4 = call_00761c48(r0, r2, r6_1, r5_1);
                if (r0_4 != 0) {
                    goto L_6484a0;
                }
                goto L_64849c;
            }
            goto L_64849c;
        }
    }
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return 0u;
L_64849c:;
    arg1->word_8 = 0;
L_6484a0:;
    u32 r0_6 = get_save_data(r0_4, guest::cpu()->r[1]);
    u32 r0_8 = player_in_array(r0_6 + 0xa0u, 0u);  // (from the original)
    u32 r0_9 = get_save_data(r0_8, guest::cpu()->r[1]);
    u32 r0_10 = *gptr<u8>(r0_9 + 0x621cfu);  // (from the original)
    u32 r1_4 = r0_10 << 0x1e;  // (from the original)
    u32 nf_1 = r1_4 >> 0x1f;  // (from the original)
    if (nf_1 == 0u) {
        r1_4 = r0_10 << 0x1d;  // (from the original)
        nf_1 = r1_4 >> 0x1f;  // (from the original)
    }
    if (nf_1 == 0u) {
        r1_4 = r0_10 << 0x1c;  // (from the original)
        u32 nf_2 = r1_4 >> 0x1f;  // (from the original)
        if (nf_2 == 0u) {
            r0_10 <<= 0x1b;  // (from the original)
            nf_2 = r0_10 >> 0x1f;  // (from the original)
        }
        if (nf_2 == 0u) {
            u32 r0_11 = get_save_data(r0_10, r1_4);
            r1_4 = 4u;
            r0_12 = r1_4 != (u32(*gptr<u8>(r0_11 + 0x621d3u)) >> 4u & 7u);  // (from the original)
        } else {
            r0_12 = 0u;
        }
    } else {
        r0_12 = 0u;
    }
    if ((r0_12 - 1u & r0_8) != 0) {
        if ((u32(*gptr<u8>(r0_8 + 0x570eu)) & 1u) == 0) {  // (from the original)
            arg1->word_18 = 0;
        }
    } else {
        arg1->word_18 = 0;
    }
    u32 r0_13 = indexed_object_index(r6_1, r1_4);
    u32 r0_14 = call_0051ccc0(r0_13);
    frame->word_4 = 0x648648;  // (from the original)
    frame->word_0 = vtable_sead__SafeStringBase_char_;
    u32 r0_15 = sead__SafeStringBase_char___SafeStringBase_008273c8(r0_14, frame.at(0).addr());
    if (r0_15 != 0) {
        frame->word_c = 0x648654;  // (from the original)
        frame->word_8 = vtable_sead__SafeStringBase_char_;
        u32 r0_16 = sead__SafeStringBase_char___SafeStringBase_008273c8(r0_14, frame.at(8).addr());
        if (r0_16 != 0) {
            arg1->word_c = 0;
        } else {
            frame->word_14 = 0x64865c;  // (from the original)
            frame->word_10 = vtable_sead__SafeStringBase_char_;
            u32 r0_17 = sead__SafeStringBase_char___SafeStringBase_008273c8(r0_14, frame.at(0x10).addr());  // (from the original)
            if (r0_17 != 0) {
                arg1->word_14 = 0;
            } else {
                frame->word_1c = 0x648664;  // (from the original)
                frame->word_18 = vtable_sead__SafeStringBase_char_;
                u32 r0_18 = sead__SafeStringBase_char___SafeStringBase_008273c8(r0_14, frame.at(0x18).addr());  // (from the original)
                if (r0_18 != 0) {
                    arg1->word_18 = 0;
                } else {
                    frame->word_24 = 0x648670;  // (from the original)
                    frame->word_20 = vtable_sead__SafeStringBase_char_;
                    u32 r0_19 = sead__SafeStringBase_char___SafeStringBase_008273c8(r0_14, frame.at(0x20).addr());  // (from the original)
                    if (r0_19 != 0) {
                        arg1->word_20 = 0;
                    } else {
                        frame->word_2c = 0x648678;  // (from the original)
                        frame->word_28 = vtable_sead__SafeStringBase_char_;
                        u32 r0_20 = sead__SafeStringBase_char___SafeStringBase_008273c8(r0_14, frame.at(0x28).addr());  // (from the original)
                        if (r0_20 != 0) {
                            arg1->word_1c = 0;
                        }
                    }
                }
            }
        }
    }
    return 1u;
}

}  // namespace d_006483f4
GUEST_EXPORT_FRAMED(0x006483f4, d_006483f4::sead__SafeStringBase_char___SafeStringBase_006483f4, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_0064bed4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0064bed4 {

inline constexpr guest::Function<0x00112714, u32(u32, u32, u32, u32)> call_00112714;
inline constexpr guest::Function<0x00114375, u32(u32, u32)> ItemRow__push_front;
inline constexpr guest::Function<0x005dc9d4, u32(u32, u32, u32, u32)> call_005dc9d4;
inline constexpr guest::Function<0x00632acc, u32(u32)> check_partner_handle;

u32 f_0064bed4(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    call_005dc9d4(r0 + 0x7cu, r1, guest::cpu()->r[2], r3);  // (from the original)
    u32 r0_2 = check_partner_handle(r0);
    if (r0_2 != 0) {
        r0_2 = ItemRow__push_front(r0_2 + 0x62u, r1);  // (from the original)
    }
    u32 zf_1 = r3 == 0;
    if (!zf_1) {
        r0_2 = *gptr<u32>(r0 + 0xf0u);  // (from the original)
        zf_1 = r0_2 == 0;
    }
    if (!zf_1) {
        r0_2 = *gptr<u32>(r0_2 + 0x1028u);  // (from the original)
        if (r0_2 != 0) {
            frame.release();
            return call_00112714(r0_2, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        }
    }
    return r0_2;
}

}  // namespace d_0064bed4
GUEST_EXPORT(0x0064bed4, d_0064bed4::f_0064bed4);

// f_0064c130: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0064c130 {

struct __attribute__((packed)) Object_0064c130_0 {
    u8 unknown_0[0xf0];  // (not used here)
    u32 word_f0;
};
GUEST_OFFSET(Object_0064c130_0, word_f0, 0xf0);

struct __attribute__((packed)) Local_0064c130_r1_1 {
    u8 byte_0;
    u8 unknown_1[0x570d];  // (not used here)
    u8 byte_570e;
};
GUEST_OFFSET(Local_0064c130_r1_1, byte_0, 0x0);
GUEST_OFFSET(Local_0064c130_r1_1, byte_570e, 0x570e);

inline guest::global<u32, 0x00aaf14c> global_00aaf14c;
inline constexpr guest::Function<0x00318944, u32(u32, u32, u32, u32)> byte_08_unless_mode_above_1;
inline constexpr guest::Function<0x0051ddb8, u32(u32, u32, u32, u32)> Countdown__extend;

u32 f_0064c130(gptr<Object_0064c130_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    gptr<Local_0064c130_r1_1> r1_1 = gptr<Local_0064c130_r1_1>(*global_00aaf14c);
    if (r1_1.addr() != 0) {
        r1_1 = gptr<Local_0064c130_r1_1>(u32(r1_1->byte_570e) << 0x19);  // (from the original)
        if (s32(r1_1.addr()) < 0) {
            r1_1 = gptr<Local_0064c130_r1_1>(*gptr<u32>(arg0->word_f0 + 0x102cu));  // (from the original)
            if (r1_1.addr() != 0) {
                u32 ea_1 = r1_1.addr() + 0x1eu;  // (from the original)
                r1_1 = gptr<Local_0064c130_r1_1>(ea_1);
                r2 = u32(*gptr<u8>(ea_1)) | 0x10u;  // (from the original)
                r1_1->byte_0 = u8(r2);
            }
        }
    }
    u32 r0_1 = arg0->word_f0 + 0x1000u;  // (from the original)
    u32 r4_1 = *gptr<u32>(r0_1 + 0x2cu);  // (from the original)
    if (r4_1 == 0) {
        guest::cpu()->r[1] = r1_1.addr();
        return r0_1;
    }
    u32 r0_3 = byte_08_unless_mode_above_1(r4_1 + 0x28u, r1_1.addr(), r2, r3);  // (from the original)
    if (r0_3 < 2u) {
        return r0_3;
    }
    frame.release();
    return Countdown__extend(r4_1 + 0x28u, 0u, 0u, 0u);  // (from the original)
}

}  // namespace d_0064c130
GUEST_EXPORT(0x0064c130, d_0064c130::f_0064c130);

// f_0064c450: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0064c450 {

inline constexpr u32 vtable_HumanModel = 0x008eb174u;
inline constexpr u32 vtable_NpcModelBase = 0x008ed6acu;
inline constexpr u32 vtable_AcNpc_rec = 0x008f779cu;
inline constexpr u32 vtable_AcNpcNml = 0x008f8484u;
inline constexpr u32 vtable_NpcModel = 0x008f8c1cu;
inline constexpr guest::Function<0x001abcd4, u32(u32, u32)> call_001abcd4;
inline constexpr guest::Function<0x001da158, u32(u32)> call_001da158;
inline constexpr guest::Function<0x002e6944, u32(u32, u32)> SeadParticleHandle__virtual_0;
inline constexpr guest::Function<0x00317e2c, u32(u32)> g3d__ResourceLoader__virtual_0;
inline constexpr guest::Function<0x0031e204, u32(u32, u32)> HumanFaceAnimControl__virtual_0;
inline constexpr guest::Function<0x004edd6c, u32(u32, u32)> call_004edd6c;
inline constexpr guest::Function<0x004edd84, u32(u32)> set_base_vtable_004edd84;
inline constexpr guest::Function<0x004ef50c, u32(u32)> g3d__GroupSkeletalAnim__virtual_0;
inline constexpr guest::Function<0x0051e018, u32(u32, u32, u32, u32)> call_0051e018;
inline constexpr guest::Function<0x006a8954, u32(u32)> FootMark__virtual_0;
inline constexpr guest::Function<0x006acabc, u32(u32)> ObjcBody__virtual_0;
inline constexpr guest::Function<0x006e480c, u32(u32, u32)> DemoActor__virtual_0;
inline constexpr guest::Function<0x006ee4b8, u32(u32)> NpcAction__virtual_0;

u32 AcNpcNml__virtual_0(gptr<AcNpcNml> arg0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r5 = 0u;
    arg0->word_0 = vtable_AcNpcNml;
    u32 r1_1 = *gptr<u32>(r0 + 0x102cu);  // (from the original)
    if (r1_1 != 0) {
        *gptr<u8>(r1_1 + 0x34u) = u8(r5);  // (from the original)
    }
    u32 r0_1 = r0 + 0xfe0u;  // (from the original)
    call_0051e018(r0_1, r1_1, 0x102cu, guest::cpu()->r[3]);  // (from the original)
    arg0->word_b0c = vtable_NpcModel;
    u32 r0_2 = r0_1 - 0x150u;  // (from the original)
    call_004edd6c(r0_2, 0x8f8c1cu);  // (from the original)
    arg0->word_b0c = vtable_NpcModelBase;
    u32 r0_3 = r0_2 - 0xd4u;  // (from the original)
    HumanFaceAnimControl__virtual_0(r0_3, 0x8ed6acu);  // (from the original)
    u32 r4_1 = ~0u;
    arg0->word_d84 = r4_1;
    arg0->word_d80 = r5;
    arg0->word_d7c = r4_1;
    arg0->word_d78 = r5;
    arg0->word_d70 = r5;
    arg0->word_d74 = r4_1;
    u32 r0_4 = r0_3 - 0x154u;  // (from the original)
    g3d__ResourceLoader__virtual_0(r0_4);
    arg0->word_c64 = r4_1;
    arg0->word_c60 = r5;
    arg0->word_c5c = r4_1;
    arg0->word_c58 = r5;
    arg0->word_c54 = r4_1;
    arg0->word_c50 = r5;
    u32 r0_5 = r0_4 - 0x15cu;  // (from the original)
    arg0->word_b0c = vtable_HumanModel;
    call_001abcd4(r0_5, 0x8eb174u);  // (from the original)
    u32 r0_6 = r0_5 + 0xccu;  // (from the original)
    g3d__GroupSkeletalAnim__virtual_0(r0_6);
    u32 r0_7 = r0_6 - 0x54u;  // (from the original)
    set_base_vtable_004edd84(r0_7);
    arg0->word_0 = vtable_AcNpc_rec;
    u32 r0_8 = r0_7 - 0xc8u;  // (from the original)
    SeadParticleHandle__virtual_0(r0_8, 0x8f779cu);  // (from the original)
    u32 r0_9 = r0_8 - 0x18u;  // (from the original)
    SeadParticleHandle__virtual_0(r0_9, guest::cpu()->r[1]);
    u32 r0_11 = call_001da158(r0_9 - 0xf0u);  // (from the original)
    u32 r0_12 = r0_11 - 0xccu;  // (from the original)
    ObjcBody__virtual_0(r0_12);
    u32 r0_13 = r0_12 - 0x284u;  // (from the original)
    FootMark__virtual_0(r0_13);
    u32 r0_14 = r0_13 - 0x5ecu;  // (from the original)
    NpcAction__virtual_0(r0_14);
    u32 r1_10 = guest::cpu()->r[1];
    r0 = *gptr<u32>(r0_14 - 8u);
    u32 r2 = r0_14 - 8u;
    if (r0 != 0) {
        do {
            r1_10 = *gptr<u32>(r0 + 4u);
            *gptr<u32>(r0) = r5;
            *gptr<u32>(r0 + 4u) = r5;
            r0 = r1_10;
            guest::preempt();
        } while (r1_10 != 0);
    }
    frame.release();
    return DemoActor__virtual_0(r2 - 0x70u, r1_10);  // (from the original)
}

}  // namespace d_0064c450
GUEST_EXPORT(0x0064c450, d_0064c450::AcNpcNml__virtual_0);

// f_0064d78c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0064d78c {

struct __attribute__((packed)) Object_0064d78c_0 {
    u8 unknown_0[0x1a9];  // (not used here)
    u8 byte_1a9;
    u8 unknown_1aa[0x436];  // (not used here)
    u16 half_5e0;
};
GUEST_OFFSET(Object_0064d78c_0, byte_1a9, 0x1a9);
GUEST_OFFSET(Object_0064d78c_0, half_5e0, 0x5e0);

struct __attribute__((packed)) Local_0064d78c_r0_21 {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
    u8 byte_5;
    u8 unknown_6[0x1];  // (not used here)
    u8 byte_7;
};
GUEST_OFFSET(Local_0064d78c_r0_21, byte_4, 0x4);
GUEST_OFFSET(Local_0064d78c_r0_21, byte_5, 0x5);
GUEST_OFFSET(Local_0064d78c_r0_21, byte_7, 0x7);

struct __attribute__((packed)) Local_0064d78c_r1_5 {
    u8 unknown_0[0xb];  // (not used here)
    u8 byte_b;
};
GUEST_OFFSET(Local_0064d78c_r1_5, byte_b, 0xb);

inline guest::global<u16, 0x00aaef30> global_00aaef30;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32)> read_global_byte_2;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> table_entry_has_all_bits;
inline constexpr guest::Function<0x002fb378, u32(u32, u32)> return_constant_0xad56b0_;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> copy_item_002fc934;
inline constexpr guest::Function<0x002fe8a8, u32(u32, u32, u32, u32)> player_of_slot_index;
inline constexpr guest::Function<0x003117bc, u32(u32, u32)> item_data_byte_0f;
inline constexpr guest::Function<0x005361a8, u32(u32)> Item__data;
inline constexpr guest::Function<0x0062f03c, u32(u32, u32)> call_0062f03c;
inline constexpr guest::Function<0x0070e594, u32(u32, u32)> call_0070e594;
inline constexpr guest::Function<0x0071a7ec, u32(u32, u32)> item_if_first_item_or_class_1;
inline constexpr guest::Function<0x0071a820, u32(u32)> slot_1_if_class_2_0071a820;
inline constexpr guest::Function<0x0076c440, u32(u32)> Item__is_first_item;

void f_0064d78c(gptr<Object_0064d78c_0> arg0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r0_5 = 0;
    gptr<Local_0064d78c_r1_5> r1_5 = gptr<Local_0064d78c_r1_5>(0u);
    if (arg0->byte_1a9 != 0) {
        u32 r0_1 = arg0->half_5e0;
        if (r0_1 == 0) {
            goto L_64d7d4;
        }
        r1 = r0 + 0x5e0u;  // (from the original)
        if (r0_1 >= 1u) {
            arg0->half_5e0 = u16(r0_1 - 1u);
        } else {
            arg0->half_5e0 = 0;
        }
    }
    guest::cpu()->r[1] = r1;
    return;
L_64d7d4:;
    *gptr<u16>(r0 + 0x5e0u) = 0x384;  // (from the original)
    u32 r0_2 = *gptr<u8>(r0 + 0x1acu);  // (from the original)
    u32 r0_3 = player_of_slot_index(r0_2, 0x384u, r2, guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    if (r0_3 == 0) {
        return;
    }
    if (s32(u32(*gptr<u8>(r0_3 + 0x570bu)) << 0x1e) < 0) {  // (from the original)
        return;
    }
    if ((u32(*gptr<u8>(r0 + 0x172u)) >> 1u & 1u) == 0) {  // (from the original)
        r0_5 = call_0070e594(r0 + 0x1b4u, r1);  // (from the original)
        r1 = guest::cpu()->r[1];
    } else {
        r0_5 = 0x95bfdcu;  // (from the original)
    }
    u32 r0_6 = item_data_byte_0f(r0_5, r1);
    r1 = guest::cpu()->r[1];
    if (r0_6 == 8u) {
        return;
    }
    u32 r0_8 = item_if_first_item_or_class_1(r0 + 0x3b4u, r1);  // (from the original)
    copy_item_002fc934(frame.at(0).addr(), r0_8);
    u32 r0_11 = Item__data(frame.at(0).addr());
    if (r0_11 != 0) {
        if (s32(u32(*gptr<u8>(r0_11 + 0x1cu)) << 0x19) < 0) {  // (from the original)
            return;
        }
    }
    u32 r0_13 = Item__is_first_item(frame.at(0).addr());
    if (r0_13 == 0) {
        goto L_64d890;
    }
    return;
L_64d890:;
    u32 r0_15 = slot_1_if_class_2_0071a820(r0 + 0x3b4u);  // (from the original)
    copy_item_002fc934(frame.at(4).addr(), r0_15);
    u32 r0_18 = Item__data(frame.at(4).addr());
    r1 = guest::cpu()->r[1];
    if (r0_18 != 0) {
        r0_18 = u32(*gptr<u8>(r0_18 + 0x1cu)) << 0x19;  // (from the original)
        if (s32(r0_18) < 0) {
            return;
        }
    }
    u32 r0_19 = call_0062f03c(r0_18, r1);
    r1 = guest::cpu()->r[1];
    if (r0_19 != 3u && r0_19 != 4u) {
        u32 r0_20 = call_0062f03c(r0_19, r1);
        r1 = guest::cpu()->r[1];
        if (r0_20 != 5u && r0_20 != 6u) {
            gptr<Local_0064d78c_r0_21> r0_21 = gptr<Local_0064d78c_r0_21>(return_constant_0xad56b0_(r0_20, r1));
            r1 = guest::cpu()->r[1];
            u32 r0_22 = u32(s8(r0_21->byte_7)) - 0xau;  // (from the original)
            if (r0_22 < 7u) {
                u32 r0_23 = read_global_byte_2(r0_22, r1);
                u32 r0_24 = table_entry_has_all_bits(0x40000u, r0_23);  // (from the original)
                r1 = guest::cpu()->r[1];
                if (r0_24 == 0) {
                    u32 r0_25 = s8(r0_21->byte_4);
                    if (r0_25 != 7u) {
                        if (r0_25 != 8u && (r0_25 != 9u || s8(r0_21->byte_5) > 0xf)) {  // (from the original)
                            return;
                        }
                    } else if (s8(r0_21->byte_5) < 0x10) {  // (from the original)
                        return;
                    }
                }
                u32 r1_4 = *global_00aaef30;
                if (r1_4 == 0) {
                    r1_5 = gptr<Local_0064d78c_r1_5>(r0_3 + 0x5700u);  // (from the original)
                    r1_5->byte_b = u8(u32(r1_5->byte_b) | 2u);
                    r1 = 0x6978u;  // (from the original)
                    *global_00aaef30 = u16(r1);
                    guest::cpu()->r[1] = r1;
                    return;
                }
                if (r1_4 < 0x384u) {  // (from the original)
                    *global_00aaef30 = 0;
                    r1_5 = gptr<Local_0064d78c_r1_5>(r0_3 + 0x5700u);  // (from the original)
                    r1_5->byte_b = u8(u32(r1_5->byte_b) | 2u);
                    r1 = 0x6978u;  // (from the original)
                    *global_00aaef30 = u16(r1);
                    guest::cpu()->r[1] = r1;
                    return;
                }
                u32 res_4 = r1_4 - 0x384u & 0xffffu;  // (from the original)
                r1 = res_4;
                *global_00aaef30 = u16(r1);
                if (res_4 == 0) {
                    r1_5 = gptr<Local_0064d78c_r1_5>(r0_3 + 0x5700u);  // (from the original)
                    r1_5->byte_b = u8(u32(r1_5->byte_b) | 2u);
                    r1 = 0x6978u;  // (from the original)
                    *global_00aaef30 = u16(r1);
                    guest::cpu()->r[1] = r1;
                    return;
                }
            }
        }
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0064d78c
GUEST_EXPORT_FRAMED(0x0064d78c, d_0064d78c::f_0064d78c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0064dd60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0064dd60 {

inline guest::global<u32, 0x0095c6d0> global_0095c6d0;

u32 f_0064dd60() {
    u32 r0_1 = *global_0095c6d0;
    if (r0_1 != 0) {
        r0_1 = *gptr<u8>(r0_1 + 0x1du);  // (from the original)
    }
    return r0_1;
}

}  // namespace d_0064dd60
GUEST_EXPORT(0x0064dd60, d_0064dd60::f_0064dd60);

// f_0064dd78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0064dd78 {

struct __attribute__((packed)) Object_0064dd78_0 {
    u8 unknown_0[0x170];  // (not used here)
    u8 byte_170;
    u8 byte_171;
    u8 unknown_172[0x7];  // (not used here)
    u8 byte_179;
};
GUEST_OFFSET(Object_0064dd78_0, byte_170, 0x170);
GUEST_OFFSET(Object_0064dd78_0, byte_171, 0x171);
GUEST_OFFSET(Object_0064dd78_0, byte_179, 0x179);

struct __attribute__((packed)) Local_0064dd78_r4_1 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
};
GUEST_OFFSET(Local_0064dd78_r4_1, byte_8, 0x8);

inline constexpr guest::Function<0x0058a1d8, u32(u32)> call_0058a1d8;
inline constexpr guest::Function<0x0058a8e0, u32(u32, u32)> bgm_set_kind_6;
inline constexpr guest::Function<0x0058c19c, u32(u32, u32, u32, u32)> return_constant_0x989bc0_;

u32 f_0064dd78(gptr<Object_0064dd78_0> arg0, u32 r1) {
    gptr<Local_0064dd78_r4_1> r4_1 = gptr<Local_0064dd78_r4_1>(arg0.addr() + 0x171u);  // (from the original)
    u32 r0_1 = u32(arg0->byte_171) >> 5u & 1u;
    if (r0_1 != 0) {
        if (r1 != 0) {
            u32 r1_1 = u32(arg0->byte_179) | 4u;
            arg0->byte_179 = u8(r1_1);
            u32 r0_2 = return_constant_0x989bc0_(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
            bgm_set_kind_6(r0_2, 5u);
        }
        r0_1 = r4_1->byte_8;
        r1 = r0_1 >> 3u & 1u;
        if (r1 == 0) {
            u32 r0_3 = r0_1 | 8u;
            r4_1->byte_8 = u8(r0_3);
            u32 r0_4 = return_constant_0x989bc0_(r0_3, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r0_1 = call_0058a1d8(r0_4);
            r1 = guest::cpu()->r[1];
        }
        arg0->byte_170 = 1;
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_0064dd78
GUEST_EXPORT_FRAMED(0x0064dd78, d_0064dd78::f_0064dd78, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0064de10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0064de10 {

struct __attribute__((packed)) Object_0064de10_0 {
    u8 unknown_0[0x174];  // (not used here)
    u8 byte_174;
};
GUEST_OFFSET(Object_0064de10_0, byte_174, 0x174);

inline constexpr guest::Function<0x002fc934, u32(u32, u32)> copy_item_002fc934;
inline constexpr guest::Function<0x002fcb34, u32(u32)> Item__category;
inline constexpr guest::Function<0x002fcb84, u32(u32, u32)> Item__has_number;
inline constexpr guest::Function<0x00596ab0, u32(u32)> replace_number_c9;
inline constexpr guest::Function<0x00650140, u32(u32, u32, u32, u32)> forward_to_world_map;
inline constexpr guest::Function<0x0068dc14, u32(u32, u32, u32, u32)> call_0068dc14;
inline constexpr guest::Function<0x006ba118, u32(u32)> Item__sanitize;

void f_0064de10(gptr<Object_0064de10_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r4_1 = *frame.at<u32>(0x20);  // (from the original)
    if ((u32(arg0->byte_174) & 1u) == 0) {
        u32 r0_1 = forward_to_world_map(r1, r2, r3, r3);
        if (r0_1 != 0) {
            copy_item_002fc934(frame.at(0).addr(), r0_1);
            replace_number_c9(frame.at(0).addr());
            u32 r0_4 = Item__has_number(r0_1, 0xccu);  // (from the original)
            if (r0_4 == 0) {
                u32 r0_5 = Item__has_number(r0_1, 0xc9u);  // (from the original)
                if (r0_5 == 0) {
                    if (r4_1 != 0) {
                        call_0068dc14(arg0.addr(), 0x1000654u, 0u, guest::cpu()->r[3]);  // (from the original)
                        return;
                    }
                    copy_item_002fc934(frame.at(4).addr(), frame.at(0).addr());
                    Item__sanitize(frame.at(4).addr());
                    u32 r0_9 = Item__category(frame.at(0).addr());
                    u32 r0_11 = Item__category(frame.at(4).addr());
                    if (r0_9 == 0x3fu || r0_9 == 0x3eu || r0_11 == 0x40u) {  // (from the original)
                        call_0068dc14(arg0.addr(), 0x1000616u, 0u, guest::cpu()->r[3]);  // (from the original)
                        return;
                    }
                    call_0068dc14(arg0.addr(), 0x1000555u, 0u, guest::cpu()->r[3]);  // (from the original)
                    return;
                }
            }
            call_0068dc14(arg0.addr(), 0x1000616u, 0u, guest::cpu()->r[3]);  // (from the original)
            return;
        }
    } else {
        call_0068dc14(arg0.addr(), 0x1000555u, 0u, r3);  // (from the original)
    }
}

}  // namespace d_0064de10
GUEST_EXPORT_FRAMED(0x0064de10, d_0064de10::f_0064de10, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0064ee94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0064ee94 {

inline constexpr guest::Function<0x005d43f4, u32(u32, u32, u32, u32)> offset_on_circle;
inline constexpr guest::Function<0x006c5c60, u32(u32, u32)> ground_height_at;

u32 f_0064ee94(gptr<Float3> arg0, u32 r1, u32 r2_unused, u32 r3, float S0) {
    u32 r0_1 = offset_on_circle(arg0.addr(), r1, guest::cpu()->r[2], r3);
    if (r3 != 0) {
        r0_1 = ground_height_at(arg0.addr(), 0u);
        float S0_2 = guest::cpu()->s[0];
        arg0->v[1] = S0_2;
    }
    return r0_1;
}

}  // namespace d_0064ee94
GUEST_EXPORT_FRAMED(0x0064ee94, d_0064ee94::f_0064ee94, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0064f018: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0064f018 {

inline constexpr guest::Function<0x001b76ec, u32(u32)> call_001b76ec;
inline constexpr guest::Function<0x002bf814, u32(u32, u32, u32, u32)> Pockets__add;
inline constexpr guest::Function<0x002fe8a8, u32(u32, u32, u32, u32)> player_of_slot_index;
inline constexpr guest::Function<0x006e0b2c, u32(u32)> kind_has_flag_80000_or_100000;

void f_0064f018(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r0_1 = player_of_slot_index(r1, r1, r2, r3);
    u32 zf_1 = r0_1 == 0;
    if (!zf_1) {
        zf_1 = r0_1 + 0x6bd0u == 0;  // (from the original)
        r4 = r0_1 + 0x6bd0u;  // (from the original)
    }
    if (!zf_1) {
        u32 r0_2 = kind_has_flag_80000_or_100000(r0_1);
        if (r0_2 != 0) {
            r0_2 = call_001b76ec(r0);
        }
        frame.release();
        Pockets__add(r4, r0, 0u, r0_2 ^ 1u);
        return;
    }
}

}  // namespace d_0064f018
GUEST_EXPORT(0x0064f018, d_0064f018::f_0064f018);

// f_0064f068: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0064f068 {

inline guest::global<u32, 0x0095c6d0> global_0095c6d0;
inline constexpr guest::Function<0x0076e6cc, u32(u32, u32)> call_0076e6cc;

u32 f_0064f068(u32 r0, u32 r1) {
    u32 r4_1 = *global_0095c6d0;
    if (r4_1 != 0) {
        u32 r0_1 = call_0076e6cc(r4_1, r1);
        if (r0_1 == r0 && (r1 == 0x40u || u32(*gptr<s8>(r4_1 + 0x1cu)) == r1)) {  // (from the original)
            return 1u;
        }
    }
    return 0u;
}

}  // namespace d_0064f068
GUEST_EXPORT_FRAMED(0x0064f068, d_0064f068::f_0064f068, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0064f0bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0064f0bc {

inline constexpr guest::Function<0x0062f03c, u32(u32, u32, u32, u32)> call_0062f03c;

u32 f_0064f0bc(u32 r0) {
    u32 r0_1 = call_0062f03c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 == 1u) {
        return r0_1;
    }
    return r0_1 == 0;
}

}  // namespace d_0064f0bc
GUEST_EXPORT_FRAMED(0x0064f0bc, d_0064f0bc::f_0064f0bc, 0x4010);  // pushes {r4, lr} first, as the original

// f_0064f0dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0064f0dc {

inline constexpr guest::Function<0x0062f03c, u32(u32, u32, u32, u32)> call_0062f03c;

u32 f_0064f0dc(u32 r0) {
    u32 r0_1 = call_0062f03c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return r0_1 == 3u || r0_1 == 4u;
}

}  // namespace d_0064f0dc
GUEST_EXPORT_FRAMED(0x0064f0dc, d_0064f0dc::f_0064f0dc, 0x4010);  // pushes {r4, lr} first, as the original

// f_0064f298: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0064f298 {

inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> GridMap__process_world_position;
inline constexpr guest::Function<0x0059a9ac, u32(u32, u32, u32, u32)> call_0059a9ac;
inline constexpr guest::Function<0x006a5e34, u32(u32)> get_object_009b4a24;
inline constexpr guest::Function<0x006a5f0c, u32(u32, u32, u32)> cell_corner;
inline constexpr guest::Function<0x006c602c, u32(u32, u32, u32)> tile_height_at_world;

struct __attribute__((packed)) Frame_0064f298 {
    u32 word_0;
};
GUEST_OFFSET(Frame_0064f298, word_0, 0x0);
GUEST_SIZE(Frame_0064f298, 0x4);

void f_0064f298(u32 r0, u32 r1, u32 r2, u32 r3, float S0) {
    guest::StackFrameOf<Frame_0064f298> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r4_1 = *frame.at<u32>(0x18);  // (from the original)
    u32 r0_1 = get_object_009b4a24(r0);
    if (r0_1 != 0) {
        u32 r0_2 = GridMap__process_world_position(r0_1, r2, r3, r4_1);
        if (r0_2 != 0) {
            frame->word_0 = r4_1;
            call_0059a9ac(r1, r0_2, r2, r3);
            return;
        }
    }
    cell_corner(r1, r2, r3);
    tile_height_at_world(r2, r3, 0u);
    float S0_4 = guest::cpu()->s[0];
    *gptr<u32>(r1 + 4u) = std::bit_cast<u32>(S0_4);
}

}  // namespace d_0064f298
GUEST_EXPORT_FRAMED(0x0064f298, d_0064f298::f_0064f298, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0064f314: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0064f314 {

struct __attribute__((packed)) Object_0064f314_0 {
    u8 unknown_0[0x1ac];  // (not used here)
    u8 byte_1ac;
};
GUEST_OFFSET(Object_0064f314_0, byte_1ac, 0x1ac);

inline constexpr guest::Function<0x001b76ec, u32(u32)> call_001b76ec;
inline constexpr guest::Function<0x002bf814, u32(u32, u32, u32, u32)> Pockets__add;
inline constexpr guest::Function<0x002fe8a8, u32(u32, u32, u32, u32)> player_of_slot_index;
inline constexpr guest::Function<0x006e0b2c, u32(u32, u32)> kind_has_flag_80000_or_100000;

u32 f_0064f314(gptr<Object_0064f314_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r5 = guest::cpu()->r[5];
    u32 r0_1 = arg0->byte_1ac;
    u32 r0_2 = player_of_slot_index(r0_1, r1, r2, r3);
    u32 zf_1 = r0_2 == 0;
    if (!zf_1) {
        zf_1 = r0_2 + 0x6bd0u == 0;  // (from the original)
        r5 = r0_2 + 0x6bd0u;  // (from the original)
    }
    u32 r1_1 = 0u;
    if (!zf_1) {
        u32 r0_3 = kind_has_flag_80000_or_100000(r0_2, r1_1);
        if (r0_3 != 0) {
            r0_3 = call_001b76ec(r1);
        }
        u32 r0_4 = Pockets__add(r5, r1, 0u, r0_3 ^ 1u);
        r1_1 = r0_4;
    }
    guest::cpu()->r[1] = r1_1;
    return r1_1;
}

}  // namespace d_0064f314
GUEST_EXPORT_FRAMED(0x0064f314, d_0064f314::f_0064f314, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0064f3b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0064f3b4 {

inline constexpr guest::Function<0x00584134, u32(u32)> return_constant_0x98a030_;
inline constexpr guest::Function<0x0058c514, u32(u32, u32)> FlagManager__request;

u32 f_0064f3b4(gptr<SlotObject> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r1_1 = u32(arg0->flags_171) >> 5u & 1u;
    if (r1_1 != 0) {
        u32 r6_1 = r0 + 0x17du;  // (from the original)
        u32 r5_1 = r1 & 7u;
        if (r1 < 0x32u) {  // (from the original)
            r0 = lsr_r(u32(*gptr<u8>(r6_1 + (r1 >> 3))), r5_1 & 0xff);  // (from the original)
            if ((r0 & 1u) != 0) {
                guest::cpu()->r[1] = r1_1;
                return r0;
            }
        }
        u32 r0_1 = return_constant_0x98a030_(r0);
        r0 = FlagManager__request(r0_1, r1);
        r1_1 = guest::cpu()->r[1];
        if (r1 < 0x32u) {  // (from the original)
            r0 = r6_1 + (r1 >> 3);
            r1_1 = u32(*gptr<u8>(r0)) | lsl_r(1u, r5_1 & 0xff);  // (from the original)
            *gptr<u8>(r0) = u8(r1_1);
        }
    }
    guest::cpu()->r[1] = r1_1;
    return r0;
}

}  // namespace d_0064f3b4
GUEST_EXPORT_FRAMED(0x0064f3b4, d_0064f3b4::f_0064f3b4, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original
