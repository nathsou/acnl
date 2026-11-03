// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "core/time_stamp.hpp"
#include "graphics/hemisphere_light.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_00610d2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00610d2c {

struct __attribute__((packed)) Local_00610d2c_r0_15 {
    u8 unknown_0[0x14c];  // (not used here)
    u32 word_14c;
    u32 word_150;
    u8 byte_154;
};
GUEST_OFFSET(Local_00610d2c_r0_15, word_14c, 0x14c);
GUEST_OFFSET(Local_00610d2c_r0_15, word_150, 0x150);
GUEST_OFFSET(Local_00610d2c_r0_15, byte_154, 0x154);

struct __attribute__((packed)) Local_00610d2c_r0_18 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Local_00610d2c_r0_18, word_0, 0x0);
GUEST_OFFSET(Local_00610d2c_r0_18, word_4, 0x4);
GUEST_OFFSET(Local_00610d2c_r0_18, word_8, 0x8);
GUEST_OFFSET(Local_00610d2c_r0_18, word_c, 0xc);
GUEST_OFFSET(Local_00610d2c_r0_18, word_10, 0x10);

struct __attribute__((packed)) Local_00610d2c_r0_23 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00610d2c_r0_23, word_0, 0x0);
GUEST_OFFSET(Local_00610d2c_r0_23, word_4, 0x4);
GUEST_OFFSET(Local_00610d2c_r0_23, word_8, 0x8);

inline constexpr u32 vtable_PickerMono = 0x008eb288u;
inline constexpr u32 vtable_Palette = 0x008f80dcu;
inline constexpr u32 vtable_sead__FixedSafeStringBase_wchar_t__6_ = 0x0090529cu;
inline constexpr u32 vtable_sead__BufferedSafeStringBase_wchar_t_ = 0x009055a0u;
inline guest::global<u32, 0x008490d0> global_008490d0;
inline guest::global<u32, 0x008490d4> global_008490d4;
inline guest::global<u16, 0x008c9f1e> global_008c9f1e;
inline constexpr guest::Function<0x00125aec, u32(u32)> construct_layout_animation;
inline constexpr guest::Function<0x00125e3c, u32(u32)> Layout__Layout;
inline constexpr guest::Function<0x002f7604, u32(u32)> construct_button_action_control;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x005673c8, u32(u32, u32, u32, u32)> construct_heap_allocator;
inline constexpr guest::Function<0x005e3128, u32(u32, u32, u32, u32)> script__RenderTrace__RenderTrace;

u32 Palette__Palette(gptr<Palette> arg0) {
    arg0->word_4 = 0;
    arg0->byte_8 = 0;
    u32 r2_1 = *global_008490d4;
    arg0->word_c = *global_008490d0;
    arg0->word_10 = r2_1;
    arg0->word_14 = 0;
    arg0->byte_18 = 0;
    arg0->word_1c = 0;
    arg0->word_0 = vtable_Palette;
    arg0->word_20 = 0;
    u32 r0_1 = arg0.addr() + 0x24u;  // (from the original)
    construct_heap_allocator(r0_1, 0x8f80dcu, r2_1, arg0.addr() + 0xcu);  // (from the original)
    u32 r0_3 = Layout__Layout(r0_1 + 8u);
    u32 r0_5 = Layout__Layout(r0_3 + 0x14cu);  // (from the original)
    u32 r0_6 = r0_5 + 0x14cu;  // (from the original)
    construct_layout_animation(r0_6);
    u32 r0_7 = r0_6 + 0x28u;  // (from the original)
    construct_layout_animation(r0_7);
    u32 r0_8 = r0_7 + 0x28u;  // (from the original)
    construct_layout_animation(r0_8);
    u32 r0_9 = r0_8 + 0x28u;  // (from the original)
    construct_layout_animation(r0_9);
    u32 r0_10 = r0_9 + 0x28u;  // (from the original)
    construct_layout_animation(r0_10);
    u32 r0_11 = r0_10 + 0x28u;  // (from the original)
    construct_layout_animation(r0_11);
    u32 r0_12 = r0_11 + 0x28u;  // (from the original)
    construct_layout_animation(r0_12);
    u32 r0_13 = r0_12 + 0x28u;  // (from the original)
    construct_layout_animation(r0_13);
    u32 ea_1 = r0_13 + 0x28u;  // (from the original)
    *gptr<u32>(ea_1) = 0;
    gptr<Local_00610d2c_r0_15> r0_15 = gptr<Local_00610d2c_r0_15>(Layout__Layout(ea_1 + 4u));
    r0_15->word_14c = 0;
    r0_15->word_150 = 0;
    r0_15->byte_154 = 0;
    u32 r0_17 = for_each_element(r0_15.addr() + 0x158u, 0x1ce394u, 0x34u, 0x10u);  // (from the original)
    gptr<Local_00610d2c_r0_18> r0_18 = gptr<Local_00610d2c_r0_18>(r0_17 + 0x340u);  // (from the original)
    r0_18->word_4 = 0;
    r0_18->word_8 = 0;
    r0_18->word_c = 0;
    r0_18->word_0 = vtable_PickerMono;
    r0_18->word_10 = 0;
    u32 r0_20 = for_each_element(r0_17 + 0x3b4u, 0x2b6de0u, 0xe0u, 0x15u);  // (from the original)
    u32 r0_21 = r0_20 + 0x1260u;  // (from the original)
    construct_button_action_control(r0_21);
    u32 r0_22 = r0_21 + 0xe4u;  // (from the original)
    construct_button_action_control(r0_22);
    *gptr<u32>(r0_22 + 0xe4u) = 0;  // (from the original)
    gptr<Local_00610d2c_r0_23> r0_23 = gptr<Local_00610d2c_r0_23>(r0_22 + 0x128u);  // (from the original)
    *gptr<u32>(r0_22 + 0x124u) = 0;  // (from the original)
    r0_23->word_4 = r0_23.addr() + 0xcu;  // (from the original)
    r0_23->word_8 = 6;
    r0_23->word_0 = vtable_sead__BufferedSafeStringBase_wchar_t_;
    *gptr<u16>(r0_23->word_4 + 0xau) = *global_008c9f1e;  // (from the original)
    r0_23->word_0 = vtable_sead__FixedSafeStringBase_wchar_t__6_;
    *gptr<u16>(r0_23->word_4) = *global_008c9f1e;
    u32 r0_25 = script__RenderTrace__RenderTrace(r0_22 + 0x140u, 0x10u, r0_22 - 0x1c58u, 0x8c9f1eu);  // (from the original)
    u32 r0_27 = script__RenderTrace__RenderTrace(r0_25 + 0xc4u, 0x10u, r0_22 - 0x1c58u, 0x8c9f1eu);  // (from the original)
    u32 r0_28 = r0_27 - 0x1e5cu;  // (from the original)
    *gptr<u32>(r0_28 + 0x1f20u) = 0;  // (from the original)
    *gptr<u32>(r0_28 + 0x1f24u) = 0;  // (from the original)
    *gptr<u32>(r0_28 + 0x1f28u) = 0;  // (from the original)
    *gptr<u32>(r0_28 + 0x1f2cu) = 0;  // (from the original)
    *gptr<u32>(r0_28 + 0x1f30u) = 0;  // (from the original)
    *gptr<u32>(r0_28 + 0x1f44u) = 0;  // (from the original)
    *gptr<u8>(r0_28 + 0x1f48u) = 0;  // (from the original)
    *gptr<u8>((0x1f48u | u32(s32(0x1f48u) >> 0xc)) + r0_28) = 0;  // (from the original)
    *gptr<u8>(r0_28 + 0x1f4au) = 0;  // (from the original)
    *gptr<u8>((0x1f48u | u32(s32(0x1f48u) >> 0xb)) + r0_28) = 0;  // (from the original)
    *gptr<u8>(r0_28 + 0x1f4cu) = 0;  // (from the original)
    return r0_28;
}

}  // namespace d_00610d2c
GUEST_EXPORT_FRAMED(0x00610d2c, d_00610d2c::Palette__Palette, 0x4010);  // pushes {r4, lr} first, as the original

// f_006124bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006124bc {

inline constexpr guest::Function<0x001b5d74, u32(u32)> call_001b5d74;
inline constexpr guest::Function<0x001b5d94, u32(u32, u32, u32, u32)> call_001b5d94;
inline constexpr guest::Function<0x00335328, u32(u32, u32, u32, u32)> sead__FixedSafeString_128___FixedSafeString_00335328;

u32 f_006124bc(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = call_001b5d94(r1, r1, r2, r3);
    if (r0_1 != 0 && r2 < 2u) {
        u32 r0_2 = call_001b5d74(r1);
        u32 r1_2 = r0_2;
        if (r0_2 == 0) {
            r1_2 = 0x88766cu;  // (from the original)
        }
        frame.release();
        return sead__FixedSafeString_128___FixedSafeString_00335328(r0 + ((r2 << 6) - r2 * 5u << 2) + 0x52cu, r1_2, 0u, 1u);  // (from the original)
    }
    return 1u;
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
GUEST_OFFSET(Local_00612738_r4_1, half_c, 0xc);
GUEST_OFFSET(Local_00612738_r4_1, half_e, 0xe);

inline guest::global<u32, 0x0095722c> global_0095722c;
inline guest::global<u32, 0x00a834a0> global_00a834a0;
inline constexpr guest::Function<0x001b545c, u32(u32)> call_001b545c;
inline constexpr guest::Function<0x001b5d94, u32(u32)> call_001b5d94;
inline constexpr guest::Function<0x002f74c8, u32(u32)> read_global_byte_2;
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32)> construct_empty_item;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> copy_item_002fc8e8;
inline constexpr guest::Function<0x002fcb34, u32(u32)> Item__category;
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32)> claim_flag;
inline constexpr guest::Function<0x005b3ec4, u32(u32, u32, u32, u32)> read_u32_0x00957328_;
inline constexpr guest::Function<0x0071f66c, u32(u32, u32)> call_0071f66c;

struct __attribute__((packed)) Frame_00612738 {
    u32 word_0;
};
GUEST_OFFSET(Frame_00612738, word_0, 0x0);
GUEST_SIZE(Frame_00612738, 0x4);

u32 f_00612738(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00612738> frame;  // the original's stack frame
    u32 r4_2 = 0;
    u32 r0_6 = 0;
    u32 r0_14 = 0;
    frame->word_0 = r3;
    u32 r0_1 = read_u32_0x00957328_(r0, r1, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    if (r0_1 != 0) {
        u32 r0_2 = *global_0095722c;
        if ((r0_2 & 1u) == 0) {
            r0_2 = claim_flag(0x95722cu, r1_1, r2_1);  // (from the original)
            r1_1 = guest::cpu()->r[1];
            r2_1 = guest::cpu()->r[2];
            if (r0_2 != 0) {
                construct_empty_item(0x957230u, r1_1, r2_1);  // (from the original)
                r2_1 = 0x100000u;  // (from the original)
                r1_1 = 0x2f777cu;  // (from the original)
                r0_2 = 0x95722cu;  // (from the original)
            }
        }
        u32 r0_3 = get_save_data(r0_2, r1_1, r2_1);
        u32 r0_4 = r0_3 + 0x62250u;  // (from the original)
        gptr<Local_00612738_r4_1> r4_1 = gptr<Local_00612738_r4_1>(r0_4 + 0x8c04u);  // (from the original)
        if (r4_1.addr() != 0) {
            u32 r0_5 = read_global_byte_2(r0_4);
            if (r0_5 != 0xa1u) {  // (from the original)
                if (r0_5 == 0xa2u) {  // (from the original)
                    goto L_6127e0;
                }
                goto L_6127f8;
            }
            r4_2 = r4_1->half_c;
            r0_6 = call_001b5d94(r4_2);
            if (r0_6 != 0) {
                goto L_6127fc;
            }
            goto L_6127f8;
L_6127e0:;
            r4_2 = r4_1->half_e;
            u32 r0_7 = call_001b5d94(r4_2);
            if (r0_7 != 0) {
                goto L_6127fc;
            }
        }
L_6127f8:;
        r4_2 = 0xffffu;  // (from the original)
L_6127fc:;
        u32 r0_8 = call_001b545c(r4_2);
        if (r0_8 != 0) {
            u32 r0_9 = *global_00a834a0;
            u32 zf_1 = r0_9 == 0;
            u32 cf_1 = r0_9 >= 0u;
            if (!zf_1) {
                zf_1 = 0x18fu == r4_2;  // (from the original)
                cf_1 = 0x18fu >= r4_2;  // (from the original)
            }
            if (cf_1 && !zf_1) {
                u32 r0_10 = r0_9 + (r4_2 * 3u + (r4_2 << 3) << 3);
                if (r0_10 != 0) {
                    u32 r4_3 = r0_10 + 4u;
                    u32 r0_11 = Item__category(r4_3);
                    if (r0_11 == 0x2fu) {  // (from the original)
                        return r4_3;
                    }
                }
            }
        } else {
            u32 r0_13 = read_global_byte_2(r0_8);
            if (r0_13 == 0xa1u) {  // (from the original)
                r0_14 = r0_1 + 0x52cu;  // (from the original)
            } else if (r0_13 == 0xa2u) {  // (from the original)
                r0_14 = r0_1 + 0x618u;  // (from the original)
            } else {
                return 0x95bfdcu;  // (from the original)
            }
            u32 r0_15 = *gptr<u32>(r0_14 + 0xd0u);  // (from the original)
            if (r0_15 != 0) {
                call_0071f66c(frame.at(0).addr(), r0_15);
                copy_item_002fc8e8(0x957230u, frame.at(0).addr());  // (from the original)
                u32 r0_17 = Item__category(0x957230u);  // (from the original)
                if (r0_17 == 0x2fu) {  // (from the original)
                    return 0x957230u;  // (from the original)
                }
            }
        }
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
GUEST_OFFSET(Local_0061290c_r5_1, half_c, 0xc);
GUEST_OFFSET(Local_0061290c_r5_1, half_e, 0xe);

inline constexpr u32 vtable_sead__SafeStringBase_char_ = 0x009047f8u;
inline guest::global<u32, 0x00952c3c> stage_heap;
inline constexpr guest::Function<0x002fb328, u32(u32)> get_save_data;
inline constexpr guest::Function<0x0056a94c, u32(u32, u32, u32, u32)> call_0056a94c;
inline constexpr guest::Function<0x006124bc, u32(u32, u32, u32)> call_006124bc;

struct __attribute__((packed)) Frame_0061290c {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0061290c, word_0, 0x0);
GUEST_OFFSET(Frame_0061290c, word_4, 0x4);
GUEST_SIZE(Frame_0061290c, 0xc);

u32 sead__SafeStringBase_char___SafeStringBase_0061290c(u32 r0) {
    guest::StackFrameOf<Frame_0061290c> frame;  // the original's stack frame
    u32 r0_10 = 0;
    u32 r7_1 = *stage_heap;
    frame->word_4 = 0x8876fc;  // (from the original)
    frame->word_0 = vtable_sead__SafeStringBase_char_;
    u32 r0_2 = call_0056a94c(r0 + 0x9ccu, frame.at(0).addr(), r7_1, guest::cpu()->r[3]);  // (from the original)
    frame->word_4 = 0x8876cc;  // (from the original)
    frame->word_0 = vtable_sead__SafeStringBase_char_;
    u32 r0_4 = call_0056a94c(r0 + 0xab8u, frame.at(0).addr(), r7_1, guest::cpu()->r[3]);  // (from the original)
    frame->word_4 = 0x8876a0;  // (from the original)
    frame->word_0 = vtable_sead__SafeStringBase_char_;
    u32 r0_6 = call_0056a94c(r0 + 0x7f4u, frame.at(0).addr(), r7_1, guest::cpu()->r[3]);  // (from the original)
    frame->word_4 = 0x887674;  // (from the original)
    frame->word_0 = vtable_sead__SafeStringBase_char_;
    u32 r0_8 = call_0056a94c(r0 + 0x8e0u, frame.at(0).addr(), r7_1, guest::cpu()->r[3]);  // (from the original)
    u32 r6_3 = ((r0_2 & r0_4) & r0_6) & r0_8;
    u32 r0_9 = get_save_data(r0_8);
    gptr<Local_0061290c_r5_1> r5_1 = gptr<Local_0061290c_r5_1>(r0_9 + 0x6ae54u);  // (from the original)
    if (r5_1.addr() == 0) {
        r0_10 = r6_3;
    } else {
        u32 r1_7 = r5_1->half_c;
        u32 r0_11 = call_006124bc(r0, r1_7, 0u);
        u32 r1_8 = r5_1->half_e;
        u32 r0_12 = call_006124bc(r0, r1_8, 1u);
        r0_10 = r0_12 & (r0_11 & r6_3);
    }
    return r0_10;
}

}  // namespace d_0061290c
GUEST_EXPORT_FRAMED(0x0061290c, d_0061290c::sead__SafeStringBase_char___SafeStringBase_0061290c, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00612cec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00612cec {

struct __attribute__((packed)) Object_00612cec_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_00612cec_0, half_0, 0x0);


void f_00612cec(gptr<Object_00612cec_0> arg0) {
    arg0->half_0 = 0x109;  // (from the original)
    guest::cpu()->r[1] = 0x109u;  // (from the original)
}

}  // namespace d_00612cec
GUEST_EXPORT(0x00612cec, d_00612cec::f_00612cec);

// f_00612d0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00612d0c {

struct __attribute__((packed)) Object_00612d0c_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_00612d0c_0, half_0, 0x0);


void f_00612d0c(gptr<Object_00612d0c_0> arg0) {
    arg0->half_0 = 0x7db;  // (from the original)
    guest::cpu()->r[1] = 0x7dbu;  // (from the original)
}

}  // namespace d_00612d0c
GUEST_EXPORT(0x00612d0c, d_00612d0c::f_00612d0c);

// f_00613658: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00613658 {

inline constexpr guest::Function<0x005cdf48, u32(u32, u32, u32, u32)> game_time_set;

u32 f_00613658(u32 r0) {
    game_time_set(r0, guest::cpu()->r[1], ~0u, ~0x80000000u);  // (from the original)
    game_time_set(r0 + 0xfu, guest::cpu()->r[1], ~0u, ~0x80000000u);  // (from the original)
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
    return r0 + r2 * 0x1400u + (r1 << 0xa) + 0x58u;  // (from the original)
}

}  // namespace d_00613684
GUEST_EXPORT(0x00613684, d_00613684::f_00613684);

// f_006136a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006136a8 {


u32 f_006136a8(u32 r0, u32 r1, u32 r2) {
    if (r1 >= 5u || r2 >= 4u) {
        return r0 + 0x5058u;  // (from the original)
    }
    return r0 + r2 * 0x500u + (r1 << 8) + 0x5058u;  // (from the original)
}

}  // namespace d_006136a8
GUEST_EXPORT(0x006136a8, d_006136a8::f_006136a8);

// f_006136d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006136d4 {


u32 f_006136d4(u32 r0, u32 r1) {
    return !(r0 >= 7u || r1 >= 6u);
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
    return !(r0 >= 5u || r1 >= 4u);
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
GUEST_OFFSET(Object_00613764_0, byte_0, 0x0);
GUEST_OFFSET(Object_00613764_0, byte_1, 0x1);
GUEST_OFFSET(Object_00613764_0, byte_2, 0x2);

inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;

u32 f_00613764(gptr<Object_00613764_0> arg0) {
    arg0->byte_0 = 2;
    arg0->byte_1 = 3;
    arg0->byte_2 = 3;
    u32 r0_2 = for_each_element(arg0.addr() + 4u, 0x612cfcu, 2u, 0x2au);  // (from the original)
    u32 r0_4 = for_each_element(r0_2 + 0x54u, 0x6efd9cu, 0x400u, 0x14u);  // (from the original)
    u32 r0_6 = for_each_element(r0_4 + 0x5000u, 0x1e036cu, 0x100u, 0x14u);  // (from the original)
    return r0_6 - 0x5058u;  // (from the original)
}

}  // namespace d_00613764
GUEST_EXPORT_FRAMED(0x00613764, d_00613764::f_00613764, 0x4010);  // pushes {r4, lr} first, as the original

// f_006138a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006138a4 {

inline constexpr guest::Function<0x00301444, u32(u32, u32)> clear;

u32 f_006138a4() {
    return clear(guest::cpu()->r[0], 0x4000u);  // (from the original)
}

}  // namespace d_006138a4
GUEST_EXPORT(0x006138a4, d_006138a4::f_006138a4);

// f_00613de4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00613de4 {

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> copy_bytes_at_any_alignment;

u32 f_00613de4() {
    return copy_bytes_at_any_alignment(guest::cpu()->r[0], guest::cpu()->r[1], 0x30u, guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_00613de4
GUEST_EXPORT(0x00613de4, d_00613de4::f_00613de4);

// f_00613dfc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00613dfc {

inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> copy_aligned_bytes;

void f_00613dfc() {
    copy_aligned_bytes(guest::cpu()->r[0], guest::cpu()->r[1], 0x1404u, guest::cpu()->r[3]);
    return;  // (from the original)
}

}  // namespace d_00613dfc
GUEST_EXPORT(0x00613dfc, d_00613dfc::f_00613dfc);

// f_00613e08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00613e08 {

struct __attribute__((packed)) Object_00613e08_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00613e08_0, word_0, 0x0);

inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;

void f_00613e08(gptr<Object_00613e08_0> arg0) {
    arg0->word_0 = 0;
    clear_aligned(arg0.addr() + 4u, 0x1400u);  // (from the original)
    return;  // (from the original)
}

}  // namespace d_00613e08
GUEST_EXPORT(0x00613e08, d_00613e08::f_00613e08);

// f_00613e18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00613e18 {

inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;

void f_00613e18(u32 r0) {
    clear_aligned(r0 + 4u, 0x1400u);  // (from the original)
    return;  // (from the original)
}

}  // namespace d_00613e18
GUEST_EXPORT(0x00613e18, d_00613e18::f_00613e18);

// f_00613e24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00613e24 {

struct __attribute__((packed)) Object_00613e24_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00613e24_0, word_0, 0x0);

inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;

u32 f_00613e24(gptr<Object_00613e24_0> arg0) {
    arg0->word_0 = 0;
    clear_aligned(arg0.addr() + 4u, 0x1400u);  // (from the original)
    return arg0.addr();
}

}  // namespace d_00613e24
GUEST_EXPORT_FRAMED(0x00613e24, d_00613e24::f_00613e24, 0x4010);  // pushes {r4, lr} first, as the original

// f_00613e80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00613e80 {

struct __attribute__((packed)) Local_00613e80_r0_13 {
    u8 byte_0;
};
GUEST_OFFSET(Local_00613e80_r0_13, byte_0, 0x0);

inline guest::global<u8, 0x0094d938> global_0094d938;
inline guest::global<u8, 0x0094d939> global_0094d939;
inline constexpr guest::Function<0x0013fac4, u32(u32, u32, u32)> set_bytes;
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32)> Item__category;
inline constexpr guest::Function<0x00313124, u32(u32)> item_has_flags_and_check_b;
inline constexpr guest::Function<0x007179a0, u32(u32, u32, u32)> call_007179a0;
inline constexpr guest::Function<0x007179ec, u32(u32, u32)> call_007179ec;
inline constexpr guest::Function<0x00717aac, u32(u32, u32, u32)> call_00717aac;
inline constexpr guest::Function<0x00718270, u32(u32, u32, u32)> copy_row8_item_cleared;
inline constexpr guest::Function<0x007182f0, u32(u32, u32, u32)> row8_item_is_category_7c;

struct __attribute__((packed)) Frame_00613e80 {
    u8 byte_0;
    u8 byte_1;
    u8 unknown_2[0x3];  // (not read or written by name)
    u8 byte_5;
    u8 unknown_6[0x3];  // (not read or written by name)
    u8 byte_9;
    u8 unknown_a[0x6];  // (not read or written by name)
    u8 byte_10;
    u8 unknown_11[0xb];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00613e80, byte_0, 0x0);
GUEST_OFFSET(Frame_00613e80, byte_1, 0x1);
GUEST_OFFSET(Frame_00613e80, byte_5, 0x5);
GUEST_OFFSET(Frame_00613e80, byte_9, 0x9);
GUEST_OFFSET(Frame_00613e80, byte_10, 0x10);
GUEST_SIZE(Frame_00613e80, 0x1c);

u32 f_00613e80(u32 r0, u32 r1_unused, u32 r2) {
    guest::StackFrameOf<Frame_00613e80> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r9 = guest::cpu()->r[9];
    u32 r7 = r0;
    u32 r8 = 1u;
    *global_0094d938 = u8(r8);
    *global_0094d939 = 0;
    u32 r0_1 = get_save_data(0x94d939u, 0u, r2, guest::cpu()->r[3]);  // (from the original)
    u32 r6 = r0_1 + 0x668a0u;  // (from the original)
    set_bytes(frame.at(0).addr(), 0x14u, 0xffu);  // (from the original)
    r2 = guest::cpu()->r[2];
    u32 r1_1 = frame->byte_10;
    frame->byte_0 = u8(u32(frame->byte_0) & ~0x80u);  // (from the original)
    if (r6 != 0) {
        r9 = 0x984694u;  // (from the original)
    }
    u32 r1_2 = r1_1 & ~8u;
    frame->byte_1 = u8(u32(frame->byte_1) & ~1u & ~2u & ~4u & ~8u & ~0x10u & ~0x20u);  // (from the original)
    u32 r0_3 = frame->byte_5;
    if (r6 != 0) {
        r4 = 0u;
    }
    frame->byte_10 = u8(r1_2);
    frame->byte_5 = u8(r0_3 & ~2u & ~4u & ~0x80u);  // (from the original)
    u32 r0_4 = u32(frame->byte_9) & ~2u;
    frame->byte_9 = u8(r0_4);
    if (r6 != 0) {
        do {
            r0_4 = row8_item_is_category_7c(r6, r4, r2);
            r1_2 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            if (r0_4 == 0) {
                copy_row8_item_cleared(frame.at(0x14).addr(), r6, r4);  // (from the original)
                u32 r0_7 = item_has_flags_and_check_b(frame.at(0x14).addr());  // (from the original)
                r1_2 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                if (r0_7 == 0) {
                    u32 r0_9 = Item__category(frame.at(0x14).addr(), r1_2, r2);  // (from the original)
                    r1_2 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    if (r0_9 < 0x9bu) {  // (from the original)
                        r1_2 = *gptr<u8>(frame.at(0).addr() + (r0_9 >> 3));
                        if ((r1_2 >> (r0_9 & 7u) & 1u) != 0) {
                            u32 r0_10 = call_00717aac(r6, r4, r2);
                            if (r0_10 == 2u) {
                                u32 r0_11 = call_007179ec(r6, r4);
                                r1_2 = guest::cpu()->r[1];
                                r2 = guest::cpu()->r[2];
                                if (r0_11 == r7) {
                                    goto L_614004;
                                }
                            }
                            u32 r0_12 = call_007179a0(r6, r9 + r4 * 0xcu, r4);  // (from the original)
                            r1_2 = guest::cpu()->r[1];
                            r2 = guest::cpu()->r[2];
                            if (r0_12 != 0) {
                                r1_2 = 0x94d939u;  // (from the original)
                                if (r4 < 8u) {
                                    gptr<Local_00613e80_r0_13> r0_13 = gptr<Local_00613e80_r0_13>(r1_2 + (r4 >> 3));
                                    r2 = r4 & 7u;
                                    r1_2 = u32(r0_13->byte_0) | lsl_r(r8, r2 & 0xff);  // (from the original)
                                    r0_13->byte_0 = u8(r1_2);
                                }
                            }
                        }
                    }
                }
L_614004:;
                r0_4 = frame.at(0x14).addr();  // (from the original)
            }
            r4 += 1u;
            guest::preempt();
        } while (s32(r4) < 8);
    }
    guest::cpu()->r[1] = r1_2;
    return r0_4;
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
GUEST_OFFSET(Local_0061402c_r1_1, word_eb54, 0xeb54);
GUEST_OFFSET(Local_0061402c_r1_1, word_eb58, 0xeb58);

inline guest::global<u32, 0x00950148> global_00950148;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> read_global_byte_2;
inline constexpr guest::Function<0x00613e80, u32(u32, u32, u32, u32)> call_00613e80;

void f_0061402c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = read_global_byte_2(r0, r1, r2, r3);
    if (r0_1 != 0x2bu) {  // (from the original)
        return;
    }
    gptr<Local_0061402c_r1_1> r1_1 = gptr<Local_0061402c_r1_1>(*global_00950148);
    if (r1_1.addr() == 0) {
        return;
    }
    r2 = r1_1->word_eb54;
    r0 = 0u;
    r3 = r1_1->word_eb58 - r2;
    do {
        if (r0 < u32(s32(r3) >> 2)) {
            u32 r1_2 = gptr<u32>(r2)[r0];
            if (r1_2 != 0 && *gptr<u8>(r1_2 + 0x9a8u) == 0) {  // (from the original)
                u32 r0_2 = *gptr<u32>(r1_2 + 0x1030u);  // (from the original)
                frame.release();
                call_00613e80(r0_2, r1_2, r2, r3);
                return;
            }
        }
        r0 += 1u;
        guest::preempt();
    } while (r0 < 0xau);  // (from the original)
}

}  // namespace d_0061402c
GUEST_EXPORT(0x0061402c, d_0061402c::f_0061402c);

// f_00614568: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00614568 {

inline constexpr u32 vtable_bgcheck__DynamicCylinder = 0x0090ab60u;
inline constexpr guest::Function<0x006f7e64, u32(u32)> collision__World__Body__Body_006f7e64;
inline constexpr guest::Function<0x006f83f8, u32(u32, u32)> collision__Cylinder__Cylinder_006f83f8;

u32 bgcheck__DynamicCylinder__DynamicCylinder(gptr<bgcheck__DynamicCylinder> arg0) {
    collision__World__Body__Body_006f7e64(arg0.addr());
    arg0->word_0 = vtable_bgcheck__DynamicCylinder;
    collision__Cylinder__Cylinder_006f83f8(arg0.addr() + 0x10u, 0x90ab60u);  // (from the original)
    return arg0.addr();
}

}  // namespace d_00614568
GUEST_EXPORT_FRAMED(0x00614568, d_00614568::bgcheck__DynamicCylinder__DynamicCylinder, 0x4010);  // pushes {r4, lr} first, as the original

// f_006145cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006145cc {

struct __attribute__((packed)) Local_006145cc_r0_1 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_006145cc_r0_1, float_0, 0x0);
GUEST_OFFSET(Local_006145cc_r0_1, float_4, 0x4);
GUEST_OFFSET(Local_006145cc_r0_1, float_8, 0x8);

struct __attribute__((packed)) Local_006145cc_r0_3 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_006145cc_r0_3, float_0, 0x0);
GUEST_OFFSET(Local_006145cc_r0_3, float_4, 0x4);
GUEST_OFFSET(Local_006145cc_r0_3, float_8, 0x8);

struct __attribute__((packed)) Local_006145cc_r0_4 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_006145cc_r0_4, float_0, 0x0);
GUEST_OFFSET(Local_006145cc_r0_4, float_4, 0x4);
GUEST_OFFSET(Local_006145cc_r0_4, float_8, 0x8);

struct __attribute__((packed)) Local_006145cc_r1_2 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_006145cc_r1_2, float_0, 0x0);
GUEST_OFFSET(Local_006145cc_r1_2, float_4, 0x4);
GUEST_OFFSET(Local_006145cc_r1_2, float_8, 0x8);

inline constexpr guest::Function<0x0052ee54, u32(u32, u32)> get_reported_point;
inline constexpr guest::Function<0x0052f200, u32(u32, u32, u32)> construct_word_quad_from_pairs;
inline constexpr guest::Function<0x0056a378, u32(u32, u32, u32, u32)> normalize;

struct __attribute__((packed)) Frame_006145cc {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    float float_10;
    float float_14;
    float float_18;
    u8 unknown_1c[0x1c];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006145cc, word_0, 0x0);
GUEST_OFFSET(Frame_006145cc, word_4, 0x4);
GUEST_OFFSET(Frame_006145cc, word_8, 0x8);
GUEST_OFFSET(Frame_006145cc, word_c, 0xc);
GUEST_OFFSET(Frame_006145cc, float_10, 0x10);
GUEST_OFFSET(Frame_006145cc, float_14, 0x14);
GUEST_OFFSET(Frame_006145cc, float_18, 0x18);
GUEST_SIZE(Frame_006145cc, 0x38);

void f_006145cc(u32 r0, gptr<Float3> arg1, gptr<Float3> arg2) {
    guest::StackFrameOf<Frame_006145cc> frame;  // the original's stack frame
    float S3_1 = arg1->v[0];
    float S0_1 = arg2->v[0] - S3_1;
    float S4_1 = arg1->v[1];
    float S5_1 = arg1->v[2];
    gptr<Local_006145cc_r0_1> r0_1 = gptr<Local_006145cc_r0_1>(frame.at(0x10).addr());  // (from the original)
    float S1_1 = arg2->v[1] - S4_1;
    float S2_1 = arg2->v[2] - S5_1;
    r0_1->float_0 = S0_1;
    r0_1->float_4 = S1_1;
    r0_1->float_8 = S2_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    guest::cpu()->s[3] = S3_1;
    guest::cpu()->s[4] = S4_1;
    guest::cpu()->s[5] = S5_1;
    normalize(frame.at(0x10).addr(), arg1.addr() + 4u, arg2.addr(), guest::cpu()->r[3]);  // (from the original)
    float S0_2 = 0.5f;
    gptr<Local_006145cc_r0_3> r0_3 = gptr<Local_006145cc_r0_3>(frame.at(0x1c).addr());  // (from the original)
    float S3_2 = frame->float_10 * S0_2;
    frame->float_10 = S3_2;
    float S1_2 = frame->float_14 * S0_2;
    frame->float_14 = S1_2;
    float S0_3 = frame->float_18 * S0_2;
    frame->float_18 = S0_3;
    float S2_2 = arg1->v[2] - S0_3;
    float S1_3 = arg1->v[1] - S1_2;
    r0_3->float_0 = arg1->v[0] - S3_2;
    r0_3->float_4 = S1_3;
    r0_3->float_8 = S2_2;
    gptr<Local_006145cc_r1_2> r1_2 = gptr<Local_006145cc_r1_2>(frame.at(0x10).addr());  // (from the original)
    gptr<Local_006145cc_r0_4> r0_4 = gptr<Local_006145cc_r0_4>(frame.at(0x28).addr());  // (from the original)
    float S3_3 = r1_2->float_0;
    float S4_2 = r1_2->float_4;
    float S5_2 = r1_2->float_8;
    float S0_4 = arg2->v[0] + S3_3;
    float S2_3 = arg2->v[2] + S5_2;
    float S1_4 = arg2->v[1] + S4_2;
    r0_4->float_0 = S0_4;
    r0_4->float_4 = S1_4;
    r0_4->float_8 = S2_3;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_4;
    guest::cpu()->s[2] = S2_3;
    guest::cpu()->s[3] = S3_3;
    guest::cpu()->s[4] = S4_2;
    guest::cpu()->s[5] = S5_2;
    get_reported_point(frame.at(0).addr(), frame.at(0x1c).addr());  // (from the original)
    get_reported_point(frame.at(8).addr(), frame.at(0x28).addr());  // (from the original)
    u32 r0_7 = frame->word_8;
    if (s32(r0_7) < s32(frame->word_0)) {
        u32 r0_8 = frame->word_0;
        frame->word_0 = r0_7;
        frame->word_8 = r0_8;
    }
    u32 r0_9 = frame->word_c;
    u32 r1_5 = frame->word_4;
    if (s32(r0_9) < s32(r1_5)) {
        r1_5 = r0_9;
        u32 r0_10 = frame->word_4;
        frame->word_4 = r1_5;
        frame->word_c = r0_10;
    }
    frame->word_0 = frame->word_0 - 1u;
    frame->word_4 = r1_5 - 1u;
    frame->word_8 = frame->word_8 + 1u;
    frame->word_c = frame->word_c + 1u;
    construct_word_quad_from_pairs(r0, frame.at(0).addr(), frame.at(8).addr());
}

}  // namespace d_006145cc
GUEST_EXPORT_FRAMED(0x006145cc, d_006145cc::f_006145cc, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0061476c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061476c {

inline constexpr guest::Function<0x00138bbc, u32(u32, u32)> call_00138bbc;

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

inline constexpr u32 vtable_bgcheck__MoveBg = 0x0090ab70u;
inline constexpr guest::Function<0x006f7dc0, u32(u32, u32)> collision__AABB__AABB;
inline constexpr guest::Function<0x006f7e64, u32(u32)> collision__World__Body__Body_006f7e64;

u32 bgcheck__MoveBg__MoveBg(gptr<bgcheck__MoveBg> arg0) {
    collision__World__Body__Body_006f7e64(arg0.addr());
    arg0->word_0 = vtable_bgcheck__MoveBg;
    arg0->byte_10 = 0;
    collision__AABB__AABB(arg0.addr() + 0x14u, 0x90ab70u);  // (from the original)
    arg0->half_40 = 0;
    arg0->word_44 = 0;
    return arg0.addr();
}

}  // namespace d_00614854
GUEST_EXPORT_FRAMED(0x00614854, d_00614854::bgcheck__MoveBg__MoveBg, 0x4010);  // pushes {r4, lr} first, as the original

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
GUEST_OFFSET(Object_006148e4_0, word_0, 0x0);
GUEST_OFFSET(Object_006148e4_0, word_4, 0x4);
GUEST_OFFSET(Object_006148e4_0, word_8, 0x8);
GUEST_OFFSET(Object_006148e4_0, word_c, 0xc);
GUEST_OFFSET(Object_006148e4_0, word_10, 0x10);
GUEST_OFFSET(Object_006148e4_0, word_14, 0x14);
GUEST_OFFSET(Object_006148e4_0, word_18, 0x18);
GUEST_OFFSET(Object_006148e4_0, word_1c, 0x1c);
GUEST_OFFSET(Object_006148e4_0, word_20, 0x20);
GUEST_OFFSET(Object_006148e4_0, word_24, 0x24);
GUEST_OFFSET(Object_006148e4_0, word_28, 0x28);
GUEST_OFFSET(Object_006148e4_0, word_2c, 0x2c);
GUEST_OFFSET(Object_006148e4_0, word_30, 0x30);
GUEST_OFFSET(Object_006148e4_0, word_34, 0x34);
GUEST_OFFSET(Object_006148e4_0, word_38, 0x38);
GUEST_OFFSET(Object_006148e4_0, word_3c, 0x3c);
GUEST_OFFSET(Object_006148e4_0, word_40, 0x40);
GUEST_OFFSET(Object_006148e4_0, word_44, 0x44);
GUEST_OFFSET(Object_006148e4_0, word_48, 0x48);

inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;

u32 f_006148e4(gptr<Object_006148e4_0> arg0) {
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
    u32 r0_2 = for_each_element((arg0.addr() + 8u) + 4u, 0x6148e0u, 0x10u, 4u);  // (from the original)
    return r0_2 - 0xcu;  // (from the original)
}

}  // namespace d_006148e4
GUEST_EXPORT_FRAMED(0x006148e4, d_006148e4::f_006148e4, 0x4010);  // pushes {r4, lr} first, as the original

// f_006149e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006149e8 {

inline constexpr u32 vtable_bgcheck__GuardBox = 0x0090ab88u;
inline constexpr guest::Function<0x00614854, u32(u32)> bgcheck__MoveBg__MoveBg;

u32 bgcheck__GuardBox__GuardBox(gptr<bgcheck__GuardBox> arg0) {
    bgcheck__MoveBg__MoveBg(arg0.addr());
    arg0->word_48 = 0;
    arg0->word_0 = vtable_bgcheck__GuardBox;
    guest::cpu()->r[1] = 0u;
    return arg0.addr();
}

}  // namespace d_006149e8
GUEST_EXPORT_FRAMED(0x006149e8, d_006149e8::bgcheck__GuardBox__GuardBox, 0x4010);  // pushes {r4, lr} first, as the original

// f_00615328: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00615328 {

inline constexpr guest::Function<0x00779548, u32(u32, u32)> store_constants_779548;

void f_00615328() {
    store_constants_779548(guest::cpu()->r[0], guest::cpu()->r[1]);
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
GUEST_OFFSET(Object_0061532c_0, word_0, 0x0);
GUEST_OFFSET(Object_0061532c_0, word_4, 0x4);
GUEST_OFFSET(Object_0061532c_0, word_8, 0x8);
GUEST_OFFSET(Object_0061532c_0, word_c, 0xc);
GUEST_OFFSET(Object_0061532c_0, word_10, 0x10);
GUEST_OFFSET(Object_0061532c_0, word_14, 0x14);
GUEST_OFFSET(Object_0061532c_0, word_18, 0x18);
GUEST_OFFSET(Object_0061532c_0, word_1c, 0x1c);
GUEST_OFFSET(Object_0061532c_0, word_20, 0x20);
GUEST_OFFSET(Object_0061532c_0, half_24, 0x24);
GUEST_OFFSET(Object_0061532c_0, byte_26, 0x26);
GUEST_OFFSET(Object_0061532c_0, byte_27, 0x27);
GUEST_OFFSET(Object_0061532c_0, half_28, 0x28);
GUEST_OFFSET(Object_0061532c_0, half_2a, 0x2a);
GUEST_OFFSET(Object_0061532c_0, byte_2c, 0x2c);
GUEST_OFFSET(Object_0061532c_0, byte_2d, 0x2d);
GUEST_OFFSET(Object_0061532c_0, half_2e, 0x2e);


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
}

}  // namespace d_0061532c
GUEST_EXPORT(0x0061532c, d_0061532c::f_0061532c);

// f_006153d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006153d0 {

inline constexpr u32 vtable_compass__Mgr__SingletonDisposer_ = 0x0090aba0u;
inline guest::global<u32, 0x00951668> global_00951668;
inline guest::global<u32, 0x0095166c> global_0095166c;
inline constexpr guest::Function<0x00131280, u32(u32, u32, u32, u32)> allocate_from_heap_00131280;
inline constexpr guest::Function<0x001320cc, u32(u32, u32, u32)> sead__IDisposer__IDisposer_001320cc;

void compass__Mgr__SingletonDisposer___SingletonDisposer_(u32 r0, u32 r1) {
    if (*global_00951668 == 0) {
        u32 r0_1 = allocate_from_heap_00131280(0x10u, r0, 4u, guest::cpu()->r[3]);  // (from the original)
        r1 = guest::cpu()->r[1];
        u32 r4_1 = r0_1;
        if (r0_1 == 0) {
            *global_0095166c = r4_1;
            r4_1 = 0u;
        } else {
            sead__IDisposer__IDisposer_001320cc(r0_1, r0, 3u);
            r1 = vtable_compass__Mgr__SingletonDisposer_;
            *gptr<u32>(r0_1) = r1;
            *global_0095166c = r0_1;
        }
        *global_00951668 = r4_1;
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_006153d0
GUEST_EXPORT_FRAMED(0x006153d0, d_006153d0::compass__Mgr__SingletonDisposer___SingletonDisposer_, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006154b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006154b0 {


void f_006154b0(u32 r0, u32 r1) {
    u32 r2 = 0u;
    do {
        u32 r3_1 = *gptr<s8>(r1 + r2);
        u32 zf_1 = r3_1 - 0x30u == 9u;  // (from the original)
        u32 cf_1 = r3_1 - 0x30u >= 9u;  // (from the original)
        if (cf_1 && !zf_1) {
            zf_1 = r3_1 - 0x61u == 0x19u;  // (from the original)
            cf_1 = r3_1 - 0x61u >= 0x19u;  // (from the original)
        }
        if (cf_1 && !zf_1) {
            zf_1 = r3_1 - 0x41u == 0x19u;  // (from the original)
            cf_1 = r3_1 - 0x41u >= 0x19u;  // (from the original)
        }
        if (cf_1 && !zf_1) {
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
GUEST_OFFSET(Object_00615534_0, word_0, 0x0);
GUEST_OFFSET(Object_00615534_0, word_4, 0x4);
GUEST_OFFSET(Object_00615534_0, word_8, 0x8);
GUEST_OFFSET(Object_00615534_0, word_c, 0xc);
GUEST_OFFSET(Object_00615534_0, word_10, 0x10);
GUEST_OFFSET(Object_00615534_0, half_14, 0x14);


void f_00615534(gptr<Object_00615534_0> arg0) {
    arg0->word_0 = 0;
    arg0->word_4 = 0;
    arg0->word_8 = 0;
    arg0->word_c = 0;
    arg0->word_10 = 0;
    arg0->half_14 = 0;
    guest::cpu()->r[1] = 0u;
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
GUEST_OFFSET(Local_00615b2c_r2_1, word_24, 0x24);
GUEST_OFFSET(Local_00615b2c_r2_1, word_28, 0x28);


void f_00615b2c(u32 r0, u32 r1, float S0_unused, float S1) {
    float S0_1 = 1.0f;
    if (r1 >= 0x6bu) {  // (from the original)
        guest::cpu()->s[0] = S0_1;
        return;
    }
    gptr<Local_00615b2c_r2_1> r2_1 = gptr<Local_00615b2c_r2_1>((r1 * 3u + (r1 << 4) << 2) + 0x86a2c8u);  // (from the original)
    float S1_1 = float(s32(r2_1->word_28));
    u32 r1_1 = uxth(r2_1->word_24);
    if (u32(S1_1 == 0.0f)) {
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return;
    }
    float S2_1 = S1_1 * 10.0f;
    float S1_2 = float(s32(r0 - r1_1));
    float S0_2 = S1_2 / S2_1 + S0_1;
    if (s32(0x3f333333u) > s32(std::bit_cast<u32>(S0_2))) {  // (from the original)
        float S0_3 = 0.7f;
        guest::cpu()->s[0] = S0_3;
        guest::cpu()->s[1] = S1_2;
        return;
    }
    if (s32(0x3fa66666u) < s32(std::bit_cast<u32>(S0_2))) {  // (from the original)
        S0_2 = 1.3f;
    }
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
}

}  // namespace d_00615b2c
GUEST_EXPORT(0x00615b2c, d_00615b2c::f_00615b2c);

// f_00615bcc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00615bcc {

inline guest::global<u32, 0x0095c6d0> global_0095c6d0;
inline constexpr guest::Function<0x002f74c8, u32(u32)> read_global_byte_2;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> table_entry_has_all_bits;
inline constexpr guest::Function<0x0076eb20, u32(u32)> slot_byte_0d;

u32 f_00615bcc(u32 r0, gptr<TimeStamp> arg1) {
    u32 r0_11 = 0;
    u32 r1_5 = 0;
    u32 r0_1 = read_global_byte_2(r0);
    u32 r0_2 = table_entry_has_all_bits(0x40000u, r0_1);  // (from the original)
    u32 r6_1 = 0u;
    if (r0_2 != 0) {
        u32 r0_3 = s8(u8(arg1->hour));
        u32 r1_1 = r0_3 - 4u;
        if (r0 != 0) {
            u32 cf_1 = r1_1 >= 5u;
            if (cf_1) {
                r1_1 = r0_3 - 0x10u;  // (from the original)
                cf_1 = r1_1 >= 5u;
            }
            if (cf_1) {
                r6_1 = r0_3 - 9u >= 7u ? 2u : 1u;
            }
            guest::cpu()->r[1] = r1_1;
            return r6_1 * 0x50u + 0x862de8u;  // (from the original)
        }
        u32 cf_2 = r1_1 >= 5u;
        if (cf_2) {
            r1_1 = r0_3 - 0x10u;  // (from the original)
            cf_2 = r1_1 >= 5u;
        }
        if (cf_2) {
            r6_1 = r0_3 - 9u >= 7u ? 2u : 1u;
        }
        guest::cpu()->r[1] = r1_1;
        return r6_1 * 0x60u + 0x863748u;  // (from the original)
    }
    u32 r0_6 = read_global_byte_2(r0_2);
    u32 r0_7 = table_entry_has_all_bits(0x20000u, r0_6);  // (from the original)
    if (r0_7 != 0) {
        u32 r0_9 = slot_byte_0d(*global_0095c6d0 + 0x10u);  // (from the original)
        u32 r1_2 = s8(u8(arg1->hour));
        if (r0 != 0) {
            if (r1_2 - 4u >= 5u && r1_2 - 0x10u >= 5u) {  // (from the original)
                r6_1 = r1_2 - 9u >= 7u ? 2u : 1u;
            }
            u32 r1_3 = r6_1 * 5u;
            guest::cpu()->r[1] = r1_3;
            return r0_9 * 0xf0u + 0x862de8u + (r1_3 << 4);  // (from the original)
        }
        if (r1_2 - 4u >= 5u && r1_2 - 0x10u >= 5u) {  // (from the original)
            r6_1 = r1_2 - 9u >= 7u ? 2u : 1u;
        }
        r0_11 = r6_1 * 3u;
        r1_5 = ((r0_9 * 9u) << 5) + 0x863748u;  // (from the original)
    } else {
        u32 r0_12 = u32(s8(u8(arg1->month))) - 1u;
        if (r0 != 0) {
            if (r0_12 == 7u) {
                u32 r1_6 = s8(u8(arg1->day));
                if (r1_6 != 0xfu && s32(r1_6) >= 0xf) {  // (from the original)
                    r0_12 = 8u;
                }
            } else {
                u32 zf_1 = r0_12 == 8u;
                if (r0_12 > 8u) {
                    r0_12 += 2u;
                }
                if (zf_1) {
                    r0_12 = s8(u8(arg1->day));
                    u32 res_1 = r0_12 - 0xfu;  // (from the original)
                    u32 vf_1 = ((r0_12 ^ 0xfu) & (r0_12 ^ res_1)) >> 0x1f;  // (from the original)
                    if (res_1 != 0 && s32(r0_12) >= 0xf) {  // (from the original)
                        r0_12 = 0xau;  // (from the original)
                    }
                    if (res_1 == 0 || res_1 >> 0x1f != vf_1) {  // (from the original)
                        r0_12 = 9u;
                    }
                }
            }
            u32 r1_7 = (r0_12 & 0xffu) * 0xfu * 0x14u + 0x85ff50u;  // (from the original)
            u32 r0_13 = s8(u8(arg1->hour));
            if (r0_13 - 4u >= 5u && r0_13 - 0x10u >= 5u) {  // (from the original)
                r6_1 = r0_13 - 9u >= 7u ? 2u : 1u;
            }
            guest::cpu()->r[1] = r1_7;
            return r1_7 + (r6_1 * 9u + (r6_1 << 4) << 2);
        }
        if (r0_12 == 7u) {
            u32 r1_8 = s8(u8(arg1->day));
            if (r1_8 != 0xfu && s32(r1_8) >= 0xf) {  // (from the original)
                r0_12 = 8u;
            }
        } else {
            u32 zf_2 = r0_12 == 8u;
            if (r0_12 > 8u) {
                r0_12 += 2u;
            }
            if (zf_2) {
                r0_12 = s8(u8(arg1->day));
                u32 res_2 = r0_12 - 0xfu;  // (from the original)
                u32 vf_2 = ((r0_12 ^ 0xfu) & (r0_12 ^ res_2)) >> 0x1f;  // (from the original)
                if (res_2 != 0 && s32(r0_12) >= 0xf) {  // (from the original)
                    r0_12 = 0xau;  // (from the original)
                }
                if (res_2 == 0 || res_2 >> 0x1f != vf_2) {  // (from the original)
                    r0_12 = 9u;
                }
            }
        }
        r1_5 = (r0_12 & 0xffu) * 0x120u + 0x860fb8u;  // (from the original)
        u32 r0_15 = s8(u8(arg1->hour));
        if (r0_15 - 4u >= 5u && r0_15 - 0x10u >= 5u) {  // (from the original)
            r6_1 = r0_15 - 9u >= 7u ? 2u : 1u;
        }
        r0_11 = r6_1 * 3u;
    }
    guest::cpu()->r[1] = r1_5;
    return r1_5 + (r0_11 << 5);
}

}  // namespace d_00615bcc
GUEST_EXPORT_FRAMED(0x00615bcc, d_00615bcc::f_00615bcc, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_00615ffc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00615ffc {

struct __attribute__((packed)) Object_00615ffc_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00615ffc_0, word_0, 0x0);

struct __attribute__((packed)) Object_00615ffc_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_00615ffc_1, word_0, 0x0);

struct __attribute__((packed)) Local_00615ffc_r0_4 {
    u8 unknown_0[0x48];  // (not used here)
    u8 byte_48;
    u8 byte_49;
};
GUEST_OFFSET(Local_00615ffc_r0_4, byte_48, 0x48);
GUEST_OFFSET(Local_00615ffc_r0_4, byte_49, 0x49);

inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> Item__category;
inline constexpr guest::Function<0x006d9058, u32(u32)> item_actor_kind_index;

void f_00615ffc(gptr<Object_00615ffc_0> arg0, gptr<Object_00615ffc_1> arg1, u32 r2) {
    u32 r0_1 = Item__category(r2, arg1.addr(), r2, guest::cpu()->r[3]);
    if (r0_1 == 0x28u) {  // (from the original)
        u32 r0_2 = item_actor_kind_index(r2);
        u32 r0_3 = r0_2 & 0xffu;  // (from the original)
        gptr<Local_00615ffc_r0_4> r0_4 = gptr<Local_00615ffc_r0_4>((r0_3 * 3u + (r0_3 << 4) << 2) + 0x86a2c8u);  // (from the original)
        arg0->word_0 = u32(r0_4->byte_48);
        arg1->word_0 = u32(r0_4->byte_49);
    }
}

}  // namespace d_00615ffc
GUEST_EXPORT_FRAMED(0x00615ffc, d_00615ffc::f_00615ffc, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00616058: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00616058 {

inline guest::global<u32, 0x0095c6d0> global_0095c6d0;
inline constexpr guest::Function<0x002f74c8, u32(u32)> read_global_byte_2;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> table_entry_has_all_bits;
inline constexpr guest::Function<0x0076ebb8, u32(u32)> slot_byte_0f;

u32 f_00616058(gptr<TimeStamp> arg0) {
    u32 r0_10 = 0;
    u32 r1_2 = 0;
    u32 r0_1 = read_global_byte_2(arg0.addr());
    u32 r0_2 = table_entry_has_all_bits(0x40000u, r0_1);  // (from the original)
    u32 r5_1 = 0u;
    if (r0_2 != 0) {
        u32 r0_3 = s8(u8(arg0->hour));
        u32 r1_1 = r0_3 - 4u;
        u32 cf_1 = r1_1 >= 5u;
        if (cf_1) {
            r1_1 = r0_3 - 0x10u;  // (from the original)
            cf_1 = r1_1 >= 5u;
        }
        if (cf_1) {
            r5_1 = r0_3 - 9u >= 7u ? 2u : 1u;
        }
        guest::cpu()->r[1] = r1_1;
        return r5_1 * 0x48u + 0x864288u;  // (from the original)
    }
    u32 r0_5 = read_global_byte_2(r0_2);
    u32 r0_6 = table_entry_has_all_bits(0x20000u, r0_5);  // (from the original)
    if (r0_6 != 0) {
        u32 r0_8 = slot_byte_0f(*global_0095c6d0 + 0x10u);  // (from the original)
        u32 r0_9 = s8(u8(arg0->hour));
        if (r0_9 - 4u >= 5u && r0_9 - 0x10u >= 5u) {  // (from the original)
            r5_1 = r0_9 - 9u >= 7u ? 2u : 1u;
        }
        r0_10 = r5_1 * 9u;
        r1_2 = r0_8 * 9u * 0x18u + 0x864288u;  // (from the original)
    } else {
        u32 r0_11 = u32(s8(u8(arg0->month))) - 1u;
        if (r0_11 == 7u) {
            u32 r1_3 = s8(u8(arg0->day));
            if (r1_3 != 0xfu && s32(r1_3) >= 0xf) {  // (from the original)
                r0_11 = 8u;
            }
        } else {
            u32 zf_1 = r0_11 == 8u;
            if (r0_11 > 8u) {
                r0_11 += 2u;
            }
            if (zf_1) {
                r0_11 = s8(u8(arg0->day));
                u32 res_1 = r0_11 - 0xfu;  // (from the original)
                u32 vf_1 = ((r0_11 ^ 0xfu) & (r0_11 ^ res_1)) >> 0x1f;  // (from the original)
                if (res_1 != 0 && s32(r0_11) >= 0xf) {  // (from the original)
                    r0_11 = 0xau;  // (from the original)
                }
                if (res_1 == 0 || res_1 >> 0x1f != vf_1) {  // (from the original)
                    r0_11 = 9u;
                }
            }
        }
        r1_2 = (r0_11 & 0xffu) * 0x108u + 0x861f78u;  // (from the original)
        u32 r0_12 = s8(u8(arg0->hour));
        if (r0_12 - 4u >= 5u && r0_12 - 0x10u >= 5u) {  // (from the original)
            r5_1 = r0_12 - 9u >= 7u ? 2u : 1u;
        }
        r0_10 = r5_1 * 3u + (r5_1 << 3);
    }
    guest::cpu()->r[1] = r1_2;
    return r1_2 + (r0_10 << 3);
}

}  // namespace d_00616058
GUEST_EXPORT_FRAMED(0x00616058, d_00616058::f_00616058, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_006165c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006165c4 {

inline guest::global<u32, 0x00952880> global_00952880;

u32 f_006165c4(u32 r0) {
    u32 r0_1 = r0 >= 3u ? *global_00952880 : gptr<u32>(0x952880u)[r0];  // (from the original)
    guest::cpu()->r[1] = 0x952880u;  // (from the original)
    return r0_1;
}

}  // namespace d_006165c4
GUEST_EXPORT(0x006165c4, d_006165c4::f_006165c4);

// f_0061666c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061666c {

inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> get_current_player;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> copy_item_002fc934;
inline constexpr guest::Function<0x002fcb34, u32(u32)> Item__category;
inline constexpr guest::Function<0x006bd2c8, u32(u32, u32)> call_006bd2c8;
inline constexpr guest::Function<0x007701b8, u32(u32, u32)> ItemBitSet__contains;

struct __attribute__((packed)) Frame_0061666c {
    u32 word_0;
};
GUEST_OFFSET(Frame_0061666c, word_0, 0x0);
GUEST_SIZE(Frame_0061666c, 0x4);

u32 f_0061666c(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_0061666c> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r0_1 = get_current_player(r0, r1, guest::cpu()->r[2], r3);
    if (r0_1 != 0) {
        u32 r0_2 = Item__category(r0);
        if (r0_2 == 0x28u) {  // (from the original)
            u32 r0_3 = frame.at(0).addr();
            copy_item_002fc934(r0_3, r0);
            u32 r0_4 = ItemBitSet__contains(r0_1 + 0x6c20u, r0_3);  // (from the original)
            if ((r0_4 ^ 1u) == 0) {
                u32 r0_5 = call_006bd2c8(r0_1, r0);
                return r0_5;
            }
        }
    }
    return 0u;
}

}  // namespace d_0061666c
GUEST_EXPORT_FRAMED(0x0061666c, d_0061666c::f_0061666c, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00616e70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00616e70 {

struct __attribute__((packed)) Object_00616e70_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_00616e70_0, half_0, 0x0);


u32 f_00616e70(gptr<Object_00616e70_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2_1 = s16(arg0->half_0);
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

inline guest::global<u32, 0x00952b8c> global_00952b8c;

u32 f_00616fb0() {
    return *gptr<u32>(*global_00952b8c + 0xcu);  // (from the original)
}

}  // namespace d_00616fb0
GUEST_EXPORT(0x00616fb0, d_00616fb0::f_00616fb0);

// f_00616fc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00616fc4 {

inline guest::global<u32, 0x00952b8c> global_00952b8c;

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
}

}  // namespace d_00617088
GUEST_EXPORT(0x00617088, d_00617088::f_00617088);

// f_00617120: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00617120 {

struct __attribute__((packed)) Object_00617120_0 {
    u8 unknown_0[0x13272];  // (not used here)
    u8 byte_13272;
    u8 unknown_13273[0x1];  // (not used here)
    u8 byte_13274;
    u8 unknown_13275[0x1];  // (not used here)
    u8 byte_13276;
    u8 unknown_13277[0x1];  // (not used here)
    u8 byte_13278;
};
GUEST_OFFSET(Object_00617120_0, byte_13272, 0x13272);
GUEST_OFFSET(Object_00617120_0, byte_13274, 0x13274);
GUEST_OFFSET(Object_00617120_0, byte_13276, 0x13276);
GUEST_OFFSET(Object_00617120_0, byte_13278, 0x13278);

inline constexpr guest::Function<0x00135740, u32(u32, u32)> lock_member_lock;
inline constexpr guest::Function<0x00137e84, u32(u32)> unlock_member_lock;
inline constexpr guest::Function<0x00624c78, u32(u32)> bit_for_index;

u32 f_00617120(gptr<Object_00617120_0> arg0, u32 r1) {
    u32 r5_1 = arg0.addr() + 0x13280u;  // (from the original)
    lock_member_lock(r5_1, r1);
    u32 r6_1 = arg0.addr() + 0x13000u;  // (from the original)
    u32 r7_1 = arg0->byte_13276;
    u32 r0_1 = bit_for_index(r1);
    if ((r0_1 & r7_1) != 0) {
        u32 r7_2 = arg0->byte_13278;
        u32 r0_2 = bit_for_index(r1);
        if ((r0_2 & r7_2) == 0) {
            u32 r7_3 = arg0->byte_13272;
            u32 r0_3 = bit_for_index(r1);
            if ((r0_3 & r7_3) != 0) {
                u32 r6_2 = arg0->byte_13274;
                u32 r0_4 = bit_for_index(r1);
                if ((r0_4 & r6_2) == 0) {
                    unlock_member_lock(r5_1);
                    return 1u;
                }
            }
        }
    }
    unlock_member_lock(r5_1);
    return 0u;
}

}  // namespace d_00617120
GUEST_EXPORT_FRAMED(0x00617120, d_00617120::f_00617120, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_006174fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006174fc {

struct __attribute__((packed)) Object_006174fc_0 {
    u8 unknown_0[0x132a0];  // (not used here)
    u32 word_132a0;
};
GUEST_OFFSET(Object_006174fc_0, word_132a0, 0x132a0);

inline constexpr guest::Function<0x0050d478, u32(u32, u32, u32, u32)> call_0050d478;
inline constexpr guest::Function<0x00622c5c, u32(u32)> call_00622c5c;
inline constexpr guest::Function<0x00623168, u32(u32, u32)> call_00623168;

void f_006174fc(gptr<Object_006174fc_0> arg0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r1_1 = arg0->word_132a0;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return;
    }
    arg0->word_132a0 = r1_1 - 1u;
    if (r1_1 - 1u != 0) {
        guest::cpu()->r[1] = r1_1 - 1u;
        return;
    }
    call_0050d478(0xa22020u, r1_1 - 1u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_00622c5c(arg0.addr() + 0x3594u);  // (from the original)
    frame.release();
    call_00623168(arg0.addr() + 0x7880u, guest::cpu()->r[1]);
    return;  // (from the original)
}

}  // namespace d_006174fc
GUEST_EXPORT(0x006174fc, d_006174fc::f_006174fc);

// f_0061754c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061754c {

struct __attribute__((packed)) Object_0061754c_0 {
    u8 unknown_0[0x1326b];  // (not used here)
    u8 byte_1326b;
    u8 unknown_1326c[0x48];  // (not used here)
    u8 byte_132b4;
};
GUEST_OFFSET(Object_0061754c_0, byte_1326b, 0x1326b);
GUEST_OFFSET(Object_0061754c_0, byte_132b4, 0x132b4);

inline constexpr guest::Function<0x005ce6dc, u32(u32, u32, u32, u32)> err_eula_is_idle_with_byte_fac;
inline constexpr guest::Function<0x006193d0, u32(u32)> call_006193d0;
inline constexpr guest::Function<0x0061a8b0, u32(u32)> call_0061a8b0;
inline constexpr guest::Function<0x0061fe0c, u32(u32)> call_0061fe0c;
inline constexpr guest::Function<0x006212f0, u32(u32)> call_006212f0;
inline constexpr guest::Function<0x00622e70, u32(u32)> call_00622e70;
inline constexpr guest::Function<0x00623194, u32(u32)> call_00623194;
inline constexpr guest::Function<0x00624050, u32(u32)> call_00624050;
inline constexpr guest::Function<0x00624c78, u32(u32, u32, u32)> bit_for_index;
inline constexpr guest::Function<0x00627124, u32(u32)> call_00627124;
inline constexpr guest::Function<0x00628d08, u32(u32, u32, u32)> call_00628d08;
inline constexpr guest::Function<0x00629a58, u32(u32)> call_00629a58;
inline constexpr guest::Function<0x0062add8, u32(u32, u32, u32, u32)> call_0062add8;
inline constexpr guest::Function<0x0062b330, u32(u32)> call_0062b330;
inline constexpr guest::Function<0x00746efc, u32(u32)> call_00746efc;
inline constexpr guest::Function<0x00746f8c, u32(u32, u32, u32)> UnknownStateA22020__flag_144_without_flag_30;
inline constexpr guest::Function<0x0075efdc, u32(u32, u32, u32)> call_0075efdc;
inline constexpr guest::Function<0x0075f644, u32(u32, u32, u32)> call_0075f644;

void f_0061754c(gptr<Object_0061754c_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r4 = 0;
    u32 r5 = r0;
    u32 r7 = r0 + 0x13000u;  // (from the original)
    u32 r0_1 = arg0->byte_1326b;
    if (r0_1 == 0) {
        u32 r0_2 = err_eula_is_idle_with_byte_fac(r0_1, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0_2 == 0 && arg0->byte_132b4 == 0) {
            call_00628d08(r5 + 0x7874u, r1, r2);  // (from the original)
            call_00622e70(r5 + 0x7880u);  // (from the original)
            call_006212f0(r5 + 0x1c0u);  // (from the original)
            call_006193d0(r5 + 0x1e4u);  // (from the original)
            call_0061fe0c(r5 + 0x214u);  // (from the original)
            call_00624050(r5 + 0x22cu);  // (from the original)
            call_00623194(r5 + 0x23cu);  // (from the original)
            call_0061a8b0(r5 + 0x27a0u);  // (from the original)
            call_00629a58(r5 + 0xb0u);  // (from the original)
            call_00627124(r5 + 0x10u);  // (from the original)
            call_0062b330(r5 + 0x28ecu);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
        }
    }
    call_0062add8(r5 + 0x2cdcu, r1, r2, guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if ((u32(*gptr<u8>(r7 + 0x26au)) & 2u) == 0) {  // (from the original)
        u32 r6 = 0x708u;  // (from the original)
        r4 = 0u;
        do {
            u32 r0_16 = call_0075efdc(r5 + 0x10u, r4 & 0xffu, r2);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            if (r0_16 > r6) {
                *gptr<u8>(r7 + 0x26au) = u8(u32(*gptr<u8>(r7 + 0x26au)) | 2u);  // (from the original)
                break;
            }
            r4 += 1u;
            guest::preempt();
        } while (s32(r4) < 4);
    }
    if ((u32(*gptr<u8>(r7 + 0x26au)) & 0x10u) == 0) {  // (from the original)
        r4 = 0u;
        do {
            u32 r6_1 = r4 & 0xffu;  // (from the original)
            u32 r8_1 = *gptr<u8>(r7 + 0x270u);  // (from the original)
            u32 r0_17 = bit_for_index(r6_1, r1, r2);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            if ((r0_17 & r8_1) != 0) {
                if (r6_1 == 0) {
                    u32 r0_18 = UnknownStateA22020__flag_144_without_flag_30(0xa22020u, r1, r2);  // (from the original)
                    if (r0_18 != 0) {
                        u32 r0_19 = call_00746efc(0xa22020u);  // (from the original)
                        if (r0_19 >= 2u) {
                            *gptr<u8>(r7 + 0x26au) = u8(u32(*gptr<u8>(r7 + 0x26au)) | 0x10u);  // (from the original)
                            goto L_6176c0;
                        }
                    }
                }
                u32 r0_21 = call_0075f644(r5 + 0xb0u, r6_1, 1u);  // (from the original)
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                if (r0_21 == 0) {
                    *gptr<u8>(r7 + 0x26au) = u8(u32(*gptr<u8>(r7 + 0x26au)) | 0x10u);  // (from the original)
                    goto L_6176c0;
                }
            }
            r4 += 1u;
            guest::preempt();
        } while (s32(r4) < 4);
    }
L_6176c0:;
    u32 r1_13 = *gptr<u8>(r7 + 0x26au);  // (from the original)
    u32 r0_22 = *gptr<u8>(r7 + 0x26bu);  // (from the original)
    if (r0_22 != r1_13) {
        r1_13 |= r0_22;
        *gptr<u8>(r7 + 0x26bu) = u8(r0_22 | r1_13);  // (from the original)
    }
    guest::cpu()->r[1] = r1_13;
}

}  // namespace d_0061754c
GUEST_EXPORT_FRAMED(0x0061754c, d_0061754c::f_0061754c, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_006176fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006176fc {

struct __attribute__((packed)) Local_006176fc_r12_1 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_006176fc_r12_1, float_0, 0x0);
GUEST_OFFSET(Local_006176fc_r12_1, float_4, 0x4);

inline constexpr guest::Function<0x0062c790, u32(u32, u32, u32, u32)> call_0062c790;

struct __attribute__((packed)) Frame_006176fc {
    float float_0;
    float float_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006176fc, float_0, 0x0);
GUEST_OFFSET(Frame_006176fc, float_4, 0x4);
GUEST_SIZE(Frame_006176fc, 0xc);

void f_006176fc(u32 r0) {
    guest::StackFrameOf<Frame_006176fc> frame;  // the original's stack frame
    gptr<Local_006176fc_r12_1> r12_1 = gptr<Local_006176fc_r12_1>(frame.at(0x10).addr());  // (from the original)
    float S0_1 = r12_1->float_0;
    float S1_1 = r12_1->float_4;
    frame->float_0 = S0_1;
    frame->float_4 = S1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    call_0062c790(r0 + 0x28ecu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_006176fc
GUEST_EXPORT_FRAMED(0x006176fc, d_006176fc::f_006176fc, 0x4000);  // pushes {lr} first, as the original

// f_00617724: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00617724 {

struct __attribute__((packed)) Object_00617724_0 {
    u8 unknown_0[0x132a0];  // (not used here)
    u32 word_132a0;
};
GUEST_OFFSET(Object_00617724_0, word_132a0, 0x132a0);

inline constexpr guest::Function<0x0050cfb8, u32(u32, u32, u32, u32)> call_0050cfb8;
inline constexpr guest::Function<0x0050cfcc, u32(u32, u32, u32, u32)> call_0050cfcc;
inline constexpr guest::Function<0x0062217c, u32(u32, u32, u32, u32)> call_0062217c;
inline constexpr guest::Function<0x006297a8, u32(u32)> call_006297a8;

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
    call_006297a8(r4 + 0x7874u);  // (from the original)
    r1 = guest::cpu()->r[1];
    guest::preempt();
    goto L_617754;
}

}  // namespace d_00617724
GUEST_EXPORT_FRAMED(0x00617724, d_00617724::f_00617724, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00617824: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00617824 {

inline constexpr guest::Function<0x0062c2bc, u32(u32, u32, u32, u32)> sead__BufferedSafeStringBase_wchar_t___BufferedSafeStringBase_0062c2bc;

void f_00617824(u32 r0) {
    sead__BufferedSafeStringBase_wchar_t___BufferedSafeStringBase_0062c2bc(r0 + 0x28ecu, guest::cpu()->r[1], 0x87bd90u, 0x88f298u);  // (from the original)
    return;  // (from the original)
}

}  // namespace d_00617824
GUEST_EXPORT(0x00617824, d_00617824::f_00617824);

// f_006179d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006179d0 {

inline constexpr guest::Function<0x0061d9e0, u32(u32)> call_0061d9e0;
inline constexpr guest::Function<0x006235cc, u32(u32, u32, u32, u32)> call_006235cc;

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
GUEST_OFFSET(Object_00617d08_0, byte_132af, 0x132af);

struct __attribute__((packed)) Local_00617d08_r5_1 {
    u8 unknown_0[0x29d];  // (not used here)
    u8 byte_29d;
};
GUEST_OFFSET(Local_00617d08_r5_1, byte_29d, 0x29d);

inline constexpr guest::Function<0x0056bd04, u32(u32, u32, u32, u32)> call_0056bd04;
inline constexpr guest::Function<0x0061a41c, u32(u32, u32, u32, u32)> call_0061a41c;
inline constexpr guest::Function<0x0061dae4, u32(u32)> call_0061dae4;
inline constexpr guest::Function<0x006214c4, u32(u32)> call_006214c4;
inline constexpr guest::Function<0x00623664, u32(u32)> call_00623664;
inline constexpr guest::Function<0x0075f1c4, u32(u32, u32)> flags_09_bit_is_set;

void f_00617d08(gptr<Object_00617d08_0> arg0, u32 r1) {
    gptr<Local_00617d08_r5_1> r5_1 = gptr<Local_00617d08_r5_1>(arg0.addr() + 0x13000u);  // (from the original)
    u32 r0_1 = arg0->byte_132af;
    if (r0_1 != 0) {
        call_0056bd04(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        arg0->byte_132af = 0;
    }
    call_0061a41c(arg0.addr() + 0x1e4u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_006214c4(arg0.addr() + 0x1c0u);  // (from the original)
    call_00623664(arg0.addr() + 0x23cu);  // (from the original)
    call_0061dae4(arg0.addr() + 0x27a0u);  // (from the original)
    if (r5_1->byte_29d != 2u && *gptr<u8>((arg0.addr() + 0x13200u) + 0xb0u) != 0) {  // (from the original)
        u32 r0_7 = flags_09_bit_is_set(arg0.addr() + 0x7874u, 2u);  // (from the original)
        if (r0_7 != 0) {
            r5_1->byte_29d = 2;
        }
    }
}

}  // namespace d_00617d08
GUEST_EXPORT_FRAMED(0x00617d08, d_00617d08::f_00617d08, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00617f90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00617f90 {

struct __attribute__((packed)) Object_00617f90_0 {
    u8 unknown_0[0x1329c];  // (not used here)
    u8 byte_1329c;
};
GUEST_OFFSET(Object_00617f90_0, byte_1329c, 0x1329c);

inline guest::global<u32, 0x00951670> global_00951670;
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32)> get_current_player;
inline constexpr guest::Function<0x002ff8b0, u32(u32, u32, u32, u32)> slot_value;
inline constexpr guest::Function<0x003082b8, u32(u32)> call_003082b8;
inline constexpr guest::Function<0x0051d710, u32(u32, u32, u32)> call_0051d710;
inline constexpr guest::Function<0x005c394c, u32(u32, u32, u32)> call_005c394c;
inline constexpr guest::Function<0x005c4400, u32(u32, u32, u32)> call_005c4400;
inline constexpr guest::Function<0x00621cf4, u32(u32)> call_00621cf4;
inline constexpr guest::Function<0x00623d48, u32(u32, u32)> call_00623d48;
inline constexpr guest::Function<0x00624aa4, u32(u32, u32)> StationMask__add;
inline constexpr guest::Function<0x00624f30, u32(u32, u32)> call_00624f30;
inline constexpr guest::Function<0x006282c0, u32(u32, u32, u32)> call_006282c0;
inline constexpr guest::Function<0x006298cc, u32(u32)> call_006298cc;
inline constexpr guest::Function<0x00746fb4, u32(u32, u32, u32, u32)> UnknownStateA22020__mode_3_or_matching_values;

void f_00617f90(gptr<Object_00617f90_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r6 = r0 + 0x13000u;  // (from the original)
    u32 r5 = r0;
    u32 r7 = r1;
    u32 r4 = r2;
    if (arg0->byte_1329c >= 8u) {
        u32 r0_1 = slot_value(4u, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        arg0->byte_1329c = u8(r0_1);
    }
    u32 r0_2 = UnknownStateA22020__mode_3_or_matching_values(0xa22020u, r1, r2, guest::cpu()->r[3]);  // (from the original)
    if (r0_2 != 0) {
        call_00623d48(r5 + 0x78u, 0u);  // (from the original)
        call_00624f30(r5 + 0x58u, 0u);  // (from the original)
        u32 r9 = 7u;
        StationMask__add(r5 + 0x1326cu, 0u);  // (from the original)
        StationMask__add(r5 + 0x1326eu, 0u);  // (from the original)
        *gptr<u8>(r6 + 0x2acu) = 1;  // (from the original)
        *gptr<u8>(r6 + 0x2adu) = 1;  // (from the original)
        *gptr<u8>(r6 + 0x268u) = 0;  // (from the original)
        *gptr<u8>(r6 + 0x2aeu) = 1;  // (from the original)
        call_006298cc(r5 + 0xb0u);  // (from the original)
        call_00621cf4(r5 + 0x1c0u);  // (from the original)
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
        call_003082b8(r0_10);
        *gptr<u8>(r6 + 0x2b1u) = u8(r7);  // (from the original)
        return;
L_61806c:;
        u32 r0_11 = r4 & 0xffu;  // (from the original)
        if (r0_11 == 0) {
            u32 r0_12 = get_current_player(r0_11, r1, r2);
            call_005c394c(0u, r9, r0_12);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
        } else {
            call_005c4400(r0_11, r1, r2);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
        }
        r4 += 1u;
        if (s32(r4) < 4) {
            guest::preempt();
            goto L_61806c;
        }
        guest::preempt();
        goto L_618050;
    }
    *gptr<u8>(r6 + 0x2acu) = 1;  // (from the original)
    *gptr<u32>(r5 + 0x50u) = *global_00951670;  // (from the original)
}

}  // namespace d_00617f90
GUEST_EXPORT_FRAMED(0x00617f90, d_00617f90::f_00617f90, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_00618164: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00618164 {

struct __attribute__((packed)) Local_00618164_r7_1 {
    u8 unknown_0[0x2a4];  // (not used here)
    u8 byte_2a4;
    u8 unknown_2a5[0x3];  // (not used here)
    u8 byte_2a8;
};
GUEST_OFFSET(Local_00618164_r7_1, byte_2a4, 0x2a4);
GUEST_OFFSET(Local_00618164_r7_1, byte_2a8, 0x2a8);

inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> lock_member_lock;
inline constexpr guest::Function<0x00137e84, u32(u32)> unlock_member_lock;
inline constexpr guest::Function<0x00617088, u32(u32, u32)> call_00617088;
inline constexpr guest::Function<0x0061dd74, u32(u32, u32)> remove_station_from_masks;
inline constexpr guest::Function<0x00620660, u32(u32, u32)> call_00620660;
inline constexpr guest::Function<0x00621684, u32(u32, u32)> call_00621684;
inline constexpr guest::Function<0x006237a4, u32(u32, u32)> remove_station_from_three_masks;
inline constexpr guest::Function<0x00623c3c, u32(u32, u32)> call_00623c3c;
inline constexpr guest::Function<0x006245ec, u32(u32, u32)> remove_station_from_first_mask;
inline constexpr guest::Function<0x00624ae4, u32(u32, u32)> SlotBlocks__clear_slot;
inline constexpr guest::Function<0x00624b24, u32(u32, u32)> StationMask__remove;
inline constexpr guest::Function<0x00624f14, u32(u32, u32)> call_00624f14;
inline constexpr guest::Function<0x006251a0, u32(u32, u32)> EntryLengths__clear;
inline constexpr guest::Function<0x00628000, u32(u32, u32)> PacketBuffer__clear_counter_and_value;
inline constexpr guest::Function<0x0062a04c, u32(u32, u32, u32, u32)> call_0062a04c;

void f_00618164(u32 r0, u32 r1) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    if (r1 >= 4u) {
        guest::cpu()->r[1] = r1;
        return;
    }
    gptr<Local_00618164_r7_1> r7_1 = gptr<Local_00618164_r7_1>(r0 + r1 + 0x13000u);  // (from the original)
    r7_1->byte_2a4 = 0;
    lock_member_lock(r0 + 0x13280u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r7_1->byte_2a8 = 0;
    unlock_member_lock(r0 + 0x13280u);  // (from the original)
    call_00621684(r0 + 0x1c0u, r1);  // (from the original)
    call_00624f14(r0 + 0x58u, r1);  // (from the original)
    call_00623c3c(r0 + 0x78u, r1);  // (from the original)
    PacketBuffer__clear_counter_and_value(r0 + 0x10u, r1);  // (from the original)
    remove_station_from_masks(r0 + 0x27a0u, r1);  // (from the original)
    EntryLengths__clear(r0 + 0x2784u, r1);  // (from the original)
    call_00617088(r0 + 0x277cu, r1);  // (from the original)
    remove_station_from_three_masks(r0 + 0x23cu, r1);  // (from the original)
    remove_station_from_first_mask(r0 + 0x22cu, r1);  // (from the original)
    call_00620660(r0 + 0x214u, r1);  // (from the original)
    SlotBlocks__clear_slot(r0 + 0x1e4u, r1);  // (from the original)
    lock_member_lock(r0 + 0x13280u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    StationMask__remove(r0 + 0x13272u, r1);  // (from the original)
    StationMask__remove(r0 + 0x13274u, r1);  // (from the original)
    StationMask__remove(r0 + 0x13276u, r1);  // (from the original)
    StationMask__remove(r0 + 0x13278u, r1);  // (from the original)
    StationMask__remove(r0 + 0x1327au, r1);  // (from the original)
    StationMask__remove(r0 + 0x1327cu, r1);  // (from the original)
    StationMask__remove(r0 + 0x13270u, r1);  // (from the original)
    StationMask__remove(r0 + 0x1326eu, r1);  // (from the original)
    StationMask__remove(r0 + 0x1326cu, r1);  // (from the original)
    unlock_member_lock(r0 + 0x13280u);  // (from the original)
    frame.release();
    call_0062a04c(r0 + 0xb0u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    return;  // (from the original)
}

}  // namespace d_00618164
GUEST_EXPORT(0x00618164, d_00618164::f_00618164);

// f_006182f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006182f4 {

struct __attribute__((packed)) Object_006182f4_0 {
    u8 unknown_0[0x1326a];  // (not used here)
    u8 byte_1326a;
};
GUEST_OFFSET(Object_006182f4_0, byte_1326a, 0x1326a);

struct __attribute__((packed)) Local_006182f4_r1_1 {
    u8 unknown_0[0x2a8];  // (not used here)
    u8 byte_2a8;
};
GUEST_OFFSET(Local_006182f4_r1_1, byte_2a8, 0x2a8);

inline constexpr guest::Function<0x00135740, u32(u32)> lock_member_lock;
inline constexpr guest::Function<0x00137e84, u32(u32, u32)> unlock_member_lock;

void f_006182f4(gptr<Object_006182f4_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    if (r1 >= 4u) {
        guest::cpu()->r[1] = r1;
        return;
    }
    u32 r6_1 = arg0.addr() + 0x13280u;  // (from the original)
    lock_member_lock(r6_1);
    gptr<Local_006182f4_r1_1> r1_1 = gptr<Local_006182f4_r1_1>(arg0.addr() + r1 + 0x13000u);  // (from the original)
    if (r3 != 0) {
        u32 r0_1 = r1_1->byte_2a8;
        u32 r0_2 = r2 - r0_1;
        if (!(r2 >= r0_1) || (r2 == r0_1)) {
            r0_2 += 0x100u;  // (from the original)
        }
        if ((r0_2 & 0xffu) != 1u) {  // (from the original)
            arg0->byte_1326a = u8(u32(arg0->byte_1326a) | 8u);
        }
    }
    r1_1->byte_2a8 = u8(r2);
    frame.release();
    unlock_member_lock(r6_1, r1_1.addr());
    return;
}

}  // namespace d_006182f4
GUEST_EXPORT(0x006182f4, d_006182f4::f_006182f4);

// f_00618384: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00618384 {

struct __attribute__((packed)) Object_00618384_0 {
    u8 unknown_0[0x9db0];  // (not used here)
    u8 byte_9db0;
};
GUEST_OFFSET(Object_00618384_0, byte_9db0, 0x9db0);

inline constexpr guest::Function<0x001add58, u32(u32, u32, u32, u32)> call_001add58;
inline constexpr guest::Function<0x00308d4d, u32(u32)> call_00308d4c;

void f_00618384(gptr<Object_00618384_0> arg0) {
    u32 r0_1 = arg0.addr() + 0x7894u;  // (from the original)
    call_001add58(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_00308d4c(r0_1);
    arg0->byte_9db0 = 0;
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
GUEST_OFFSET(Object_006184d8_0, byte_1f0, 0x1f0);
GUEST_OFFSET(Object_006184d8_0, byte_1f1, 0x1f1);

inline constexpr guest::Function<0x0075f644, u32(u32, u32, u32)> call_0075f644;

u32 f_006184d8(gptr<Object_006184d8_0> arg0, u32 r1) {
    u32 r0_1 = arg0->byte_1f1;
    if (r0_1 == 0 || r0_1 == 5u) {
        u32 r0_3 = call_0075f644(arg0.addr() + 0xb0u, 0u, 1u);  // (from the original)
        r1 = guest::cpu()->r[1];
        if (r0_3 == 0) {
            arg0->byte_1f0 = 0;
            return ~0u;
        }
    }
    u32 r0_5 = arg0->byte_1f0;
    if (r0_5 == 1u) {
        guest::cpu()->r[1] = r1;
        return r0_5;
    }
    guest::cpu()->r[1] = r1;
    return r0_5 == 0 ? ~0u : 0u;
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
GUEST_OFFSET(Object_00618578_0, byte_13268, 0x13268);
GUEST_OFFSET(Object_00618578_0, byte_132ae, 0x132ae);

struct __attribute__((packed)) Local_00618578_r6_1 {
    u8 unknown_0[0x268];  // (not used here)
    u8 byte_268;
    u8 unknown_269[0x45];  // (not used here)
    u8 byte_2ae;
};
GUEST_OFFSET(Local_00618578_r6_1, byte_268, 0x268);
GUEST_OFFSET(Local_00618578_r6_1, byte_2ae, 0x2ae);

inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> get_current_player;
inline constexpr guest::Function<0x0051d710, u32(u32, u32)> call_0051d710;
inline constexpr guest::Function<0x005c394c, u32(u32, u32, u32)> call_005c394c;
inline constexpr guest::Function<0x005c4400, u32(u32, u32, u32)> call_005c4400;
inline constexpr guest::Function<0x00623d48, u32(u32, u32)> call_00623d48;
inline constexpr guest::Function<0x00624f30, u32(u32, u32)> call_00624f30;
inline constexpr guest::Function<0x0075f578, u32(u32, u32, u32, u32)> call_0075f578;

void f_00618578(gptr<Object_00618578_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    gptr<Local_00618578_r6_1> r6_1 = gptr<Local_00618578_r6_1>(r0 + 0x13000u);  // (from the original)
    u32 r5 = arg0->byte_13268;
    u32 r7_1 = r1;
    if (r5 != 0) {
        u32 r0_1 = arg0->byte_132ae;
        if (r0_1 == 0) {
            if (r5 >= 4u) {
                r0_1 = call_0075f578(r0 + 0xb0u, r1, r2, guest::cpu()->r[3]);  // (from the original)
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r5 = r0_1;
                if (r0_1 >= 4u) {
                    return;
                }
            }
            u32 r0_3 = get_current_player(r0_1, r1, r2, guest::cpu()->r[3]);
            u32 r8 = r0_3;
            r6_1->byte_268 = u8(r5);
            r6_1->byte_2ae = 1;
            call_00623d48(r0 + 0x78u, r5);  // (from the original)
            call_00624f30(r0 + 0x58u, r5);  // (from the original)
            call_0051d710(r0 + 0x13234u, r5);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            if (r7_1 == 0) {
                u32 r4 = 0u;
                do {
                    u32 r0_7 = r4 & 0xffu;  // (from the original)
                    if (r0_7 != 0) {
                        if (r0_7 == r5) {
                            call_005c394c(r0_7, r4 + 3u & 0xffu, r8);  // (from the original)
                            r1 = guest::cpu()->r[1];
                            r2 = guest::cpu()->r[2];
                        } else {
                            call_005c4400(r0_7, r1, r2);
                            r1 = guest::cpu()->r[1];
                            r2 = guest::cpu()->r[2];
                        }
                    }
                    r4 += 1u;
                    guest::preempt();
                } while (s32(r4) < 4);
            }
        }
    }
}

}  // namespace d_00618578
GUEST_EXPORT_FRAMED(0x00618578, d_00618578::f_00618578, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00618684: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00618684 {

inline constexpr guest::Function<0x0050d24c, u32(u32, u32, u32, u32)> call_0050d24c;
inline constexpr guest::Function<0x00617f90, u32(u32, u32, u32)> call_00617f90;

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

struct __attribute__((packed)) Object_006186b8_0 {
    u8 unknown_0[0x13268];  // (not used here)
    u8 byte_13268;
    u8 unknown_13269[0x43];  // (not used here)
    u8 byte_132ac;
    u8 unknown_132ad[0x1];  // (not used here)
    u8 byte_132ae;
};
GUEST_OFFSET(Object_006186b8_0, byte_13268, 0x13268);
GUEST_OFFSET(Object_006186b8_0, byte_132ac, 0x132ac);
GUEST_OFFSET(Object_006186b8_0, byte_132ae, 0x132ae);

struct __attribute__((packed)) Local_006186b8_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_006186b8_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_006186b8_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_006186b8_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_006186b8_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_006186b8_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_006186b8_ea_1, word_14, 0x14);

struct __attribute__((packed)) Local_006186b8_ea_4 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_006186b8_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_006186b8_ea_4, word_4, 0x4);
GUEST_OFFSET(Local_006186b8_ea_4, word_8, 0x8);
GUEST_OFFSET(Local_006186b8_ea_4, word_c, 0xc);

inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> main_object_value;
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> send_message;

struct __attribute__((packed)) Frame_006186b8 {
    u8 unknown_0[0x4];  // (not read or written by name)
    u8 byte_4;
    u8 unknown_5[0x13];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006186b8, byte_4, 0x4);
GUEST_SIZE(Frame_006186b8, 0x18);

u32 f_006186b8(gptr<Object_006186b8_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_006186b8> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_006186b8_ea_1> ea_1 = gptr<Local_006186b8_ea_1>(frame.at(0).addr());
    ea_1->word_0 = arg0.addr();
    ea_1->word_4 = r1;
    ea_1->word_8 = r4;
    ea_1->word_c = r5;
    ea_1->word_10 = r6;
    ea_1->word_14 = r14;
    u32 r0_1 = main_object_value(arg0.addr(), r1, r2, r3);
    if (r0_1 != 0) {
        u32 r2_1 = frame.at(4).addr();
        if (arg0->byte_132ac != 0 && arg0->byte_132ae != 0 && arg0->byte_13268 != 0) {
            send_message(0x76u, 0u, r2_1, 1u);  // (from the original)
        } else {
            send_message(0x76u, 4u, r2_1, 1u);  // (from the original)
        }
    }
    u32 r0_2 = frame->byte_4;
    *gptr<u8>(arg0.addr() + 0x132b1u) = u8(r0_2);  // (from the original)
    gptr<Local_006186b8_ea_4> ea_4 = gptr<Local_006186b8_ea_4>(frame.at(8).addr());
    u32 r4_2 = ea_4->word_0;
    u32 r5_1 = ea_4->word_4;
    u32 r6_1 = ea_4->word_8;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    return r0_2;
}

}  // namespace d_006186b8
GUEST_EXPORT(0x006186b8, d_006186b8::f_006186b8);

// f_00618aa4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00618aa4 {

inline constexpr guest::Function<0x0050d238, u32(u32, u32, u32, u32)> call_0050d238;
inline constexpr guest::Function<0x00617f90, u32(u32, u32, u32)> call_00617f90;

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
GUEST_OFFSET(Object_00618ad8_0, byte_1f0, 0x1f0);
GUEST_OFFSET(Object_00618ad8_0, byte_1f1, 0x1f1);


u32 f_00618ad8(gptr<Object_00618ad8_0> arg0) {
    u32 r0_1 = arg0->byte_1f0;
    if (r0_1 != 0 && r0_1 != 1u) {
        guest::cpu()->r[1] = arg0.addr();
        return 0u;
    }
    arg0->byte_1f0 = 2;
    arg0->byte_1f1 = 7;
    guest::cpu()->r[1] = arg0.addr();
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
GUEST_OFFSET(Object_00618b08_0, byte_1f0, 0x1f0);
GUEST_OFFSET(Object_00618b08_0, byte_1f1, 0x1f1);


u32 f_00618b08(gptr<Object_00618b08_0> arg0) {
    u32 r0_1 = arg0->byte_1f0;
    if (r0_1 != 0 && r0_1 != 1u) {
        guest::cpu()->r[1] = arg0.addr();
        return 0u;
    }
    arg0->byte_1f0 = 2;
    arg0->byte_1f1 = 5;
    guest::cpu()->r[1] = arg0.addr();
    return 1u;
}

}  // namespace d_00618b08
GUEST_EXPORT(0x00618b08, d_00618b08::f_00618b08);

// f_00618b38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00618b38 {

inline guest::global<u32, 0x009529cc> global_009529cc;
inline constexpr guest::Function<0x0050d260, u32(u32, u32, u32, u32)> call_0050d260;
inline constexpr guest::Function<0x00617f90, u32(u32, u32, u32)> call_00617f90;
inline constexpr guest::Function<0x0061ee74, u32(u32, u32, u32, u32)> call_0061ee74;
inline constexpr guest::Function<0x0070ab10, u32(u32)> query_70ab10;

struct __attribute__((packed)) Frame_00618b38 {
    u32 word_0;
};
GUEST_OFFSET(Frame_00618b38, word_0, 0x0);
GUEST_SIZE(Frame_00618b38, 0x4);

u32 f_00618b38(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00618b38> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r0_1 = call_0050d260(0xa22020u, r1, r2, r3);  // (from the original)
    if (r0_1 == 0) {
        return r0_1;
    }
    call_00617f90(r0, 0u, r2);
    u32 r0_3 = query_70ab10(*global_009529cc);
    frame->word_0 = r0_3;
    call_0061ee74(r0 + 0x27a0u, 0u, frame.at(0).addr(), 0u);  // (from the original)
    return 1u;
}

}  // namespace d_00618b38
GUEST_EXPORT_FRAMED(0x00618b38, d_00618b38::f_00618b38, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00618c00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00618c00 {

struct __attribute__((packed)) Object_00618c00_0 {
    u8 unknown_0[0x13266];  // (not used here)
    u8 byte_13266;
    u8 byte_13267;
    u8 byte_13268;
    u8 unknown_13269[0x1];  // (not used here)
    u8 byte_1326a;
    u8 byte_1326b;
    u8 unknown_1326c[0x30];  // (not used here)
    u8 byte_1329c;
    u8 byte_1329d;
    u8 unknown_1329e[0x6];  // (not used here)
    u8 byte_132a4;
    u8 byte_132a5;
    u8 byte_132a6;
    u8 byte_132a7;
    u8 byte_132a8;
    u8 byte_132a9;
    u8 byte_132aa;
    u8 byte_132ab;
    u8 byte_132ac;
    u8 byte_132ad;
    u8 byte_132ae;
    u8 byte_132af;
    u8 unknown_132b0[0x1];  // (not used here)
    u8 byte_132b1;
    u8 byte_132b2;
    u8 byte_132b3;
    u8 byte_132b4;
    u8 byte_132b5;
    u8 byte_132b6;
    u8 byte_132b7;
};
GUEST_OFFSET(Object_00618c00_0, byte_13266, 0x13266);
GUEST_OFFSET(Object_00618c00_0, byte_13267, 0x13267);
GUEST_OFFSET(Object_00618c00_0, byte_13268, 0x13268);
GUEST_OFFSET(Object_00618c00_0, byte_1326a, 0x1326a);
GUEST_OFFSET(Object_00618c00_0, byte_1326b, 0x1326b);
GUEST_OFFSET(Object_00618c00_0, byte_1329c, 0x1329c);
GUEST_OFFSET(Object_00618c00_0, byte_1329d, 0x1329d);
GUEST_OFFSET(Object_00618c00_0, byte_132a4, 0x132a4);
GUEST_OFFSET(Object_00618c00_0, byte_132a5, 0x132a5);
GUEST_OFFSET(Object_00618c00_0, byte_132a6, 0x132a6);
GUEST_OFFSET(Object_00618c00_0, byte_132a7, 0x132a7);
GUEST_OFFSET(Object_00618c00_0, byte_132a8, 0x132a8);
GUEST_OFFSET(Object_00618c00_0, byte_132a9, 0x132a9);
GUEST_OFFSET(Object_00618c00_0, byte_132aa, 0x132aa);
GUEST_OFFSET(Object_00618c00_0, byte_132ab, 0x132ab);
GUEST_OFFSET(Object_00618c00_0, byte_132ac, 0x132ac);
GUEST_OFFSET(Object_00618c00_0, byte_132ad, 0x132ad);
GUEST_OFFSET(Object_00618c00_0, byte_132ae, 0x132ae);
GUEST_OFFSET(Object_00618c00_0, byte_132af, 0x132af);
GUEST_OFFSET(Object_00618c00_0, byte_132b1, 0x132b1);
GUEST_OFFSET(Object_00618c00_0, byte_132b2, 0x132b2);
GUEST_OFFSET(Object_00618c00_0, byte_132b3, 0x132b3);
GUEST_OFFSET(Object_00618c00_0, byte_132b4, 0x132b4);
GUEST_OFFSET(Object_00618c00_0, byte_132b5, 0x132b5);
GUEST_OFFSET(Object_00618c00_0, byte_132b6, 0x132b6);
GUEST_OFFSET(Object_00618c00_0, byte_132b7, 0x132b7);

inline constexpr guest::Function<0x00301444, u32(u32, u32)> clear;
inline constexpr guest::Function<0x006170f4, u32(u32)> store_constants_6170f4_006170f4;
inline constexpr guest::Function<0x0061a6a4, u32(u32)> call_0061a6a4;
inline constexpr guest::Function<0x0061f3f8, u32(u32)> call_0061f3f8;
inline constexpr guest::Function<0x00620dcc, u32(u32)> call_00620dcc;
inline constexpr guest::Function<0x006239fc, u32(u32)> call_006239fc;
inline constexpr guest::Function<0x00623dcc, u32(u32)> call_00623dcc;
inline constexpr guest::Function<0x0062478c, u32(u32)> reset_pair_holder;
inline constexpr guest::Function<0x00624be4, u32(u32, u32, u32, u32)> construct_slot_object;
inline constexpr guest::Function<0x00624c68, u32(u32)> clear_flag_pair;
inline constexpr guest::Function<0x00624fd4, u32(u32)> call_00624fd4;
inline constexpr guest::Function<0x006255b8, u32(u32)> store_constants_6255b8;
inline constexpr guest::Function<0x00625da4, u32(u32)> call_00625da4;
inline constexpr guest::Function<0x00625ed4, u32(u32)> store_constants_625ed4;
inline constexpr guest::Function<0x00626070, u32(u32)> store_word_constant_pack_0x4_00626070;
inline constexpr guest::Function<0x00626454, u32(u32)> call_00626454;
inline constexpr guest::Function<0x006265c4, u32(u32)> store_word_constant_pack_0x4_006265c4;
inline constexpr guest::Function<0x0062834c, u32(u32)> call_0062834c;
inline constexpr guest::Function<0x00629808, u32(u32)> reset_record_00629808;
inline constexpr guest::Function<0x0062a724, u32(u32)> part_finish_a724;

u32 f_00618c00(gptr<Object_00618c00_0> arg0, u32 r1) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r5_1 = arg0.addr() + 0x13000u;  // (from the original)
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
    construct_slot_object(arg0.addr() + 0x1c0u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_00625da4(arg0.addr() + 0x7840u);  // (from the original)
    call_00626454(arg0.addr() + 0x7858u);  // (from the original)
    store_word_constant_pack_0x4_006265c4(arg0.addr() + 0x786cu);  // (from the original)
    store_constants_625ed4(arg0.addr() + 0x784cu);  // (from the original)
    store_word_constant_pack_0x4_00626070(arg0.addr() + 0x7864u);  // (from the original)
    store_constants_6255b8(arg0.addr() + 0x2784u);  // (from the original)
    store_constants_6170f4_006170f4(arg0.addr() + 0x277cu);  // (from the original)
    call_006239fc(arg0.addr() + 0x23cu);  // (from the original)
    reset_pair_holder(arg0.addr() + 0x22cu);  // (from the original)
    call_00620dcc(arg0.addr() + 0x214u);  // (from the original)
    call_0061a6a4(arg0.addr() + 0x1e4u);  // (from the original)
    call_0062834c(arg0.addr() + 0x10u);  // (from the original)
    call_00624fd4(arg0.addr() + 0x58u);  // (from the original)
    call_00623dcc(arg0.addr() + 0x78u);  // (from the original)
    reset_record_00629808(arg0.addr() + 0xa4u);  // (from the original)
    clear_flag_pair(arg0.addr() + 0x1326cu);  // (from the original)
    clear_flag_pair(arg0.addr() + 0x1326eu);  // (from the original)
    clear_flag_pair(arg0.addr() + 0x13270u);  // (from the original)
    clear_flag_pair(arg0.addr() + 0x13272u);  // (from the original)
    clear_flag_pair(arg0.addr() + 0x13274u);  // (from the original)
    clear_flag_pair(arg0.addr() + 0x13276u);  // (from the original)
    clear_flag_pair(arg0.addr() + 0x13278u);  // (from the original)
    clear_flag_pair(arg0.addr() + 0x1327au);  // (from the original)
    clear_flag_pair(arg0.addr() + 0x1327cu);  // (from the original)
    part_finish_a724(arg0.addr() + 0xb0u);  // (from the original)
    arg0->byte_132b1 = 0;
    arg0->byte_13268 = 4;
    arg0->byte_132ae = 0;
    arg0->byte_132b2 = 0;
    arg0->byte_132b3 = 0;
    arg0->byte_132b4 = 0;
    arg0->byte_132b5 = 0;
    arg0->byte_132b6 = 0;
    arg0->byte_132b7 = 0;
    if (r1 == 0) {
        arg0->byte_132ac = 0;
        arg0->byte_1329c = 8;
        arg0->byte_132ad = 0;
        call_0061f3f8(arg0.addr() + 0x27a0u);  // (from the original)
        arg0->byte_13266 = 6;
        arg0->byte_1329d = 0;
        arg0->byte_13267 = 6;
        frame.release();
        return clear(arg0.addr() + 0x13234u, 0x32u);  // (from the original)
    }
    return 4u;
}

}  // namespace d_00618c00
GUEST_EXPORT(0x00618c00, d_00618c00::f_00618c00);

// f_00618ecc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00618ecc {

struct __attribute__((packed)) Object_00618ecc_0 {
    u8 unknown_0[0x13272];  // (not used here)
    u8 byte_13272;
    u8 unknown_13273[0x1];  // (not used here)
    u8 byte_13274;
    u8 unknown_13275[0x1];  // (not used here)
    u8 byte_13276;
    u8 unknown_13277[0x1];  // (not used here)
    u8 byte_13278;
};
GUEST_OFFSET(Object_00618ecc_0, byte_13272, 0x13272);
GUEST_OFFSET(Object_00618ecc_0, byte_13274, 0x13274);
GUEST_OFFSET(Object_00618ecc_0, byte_13276, 0x13276);
GUEST_OFFSET(Object_00618ecc_0, byte_13278, 0x13278);

inline constexpr guest::Function<0x00135740, u32(u32, u32)> lock_member_lock;
inline constexpr guest::Function<0x00137e84, u32(u32)> unlock_member_lock;
inline constexpr guest::Function<0x00624c78, u32(u32)> bit_for_index;
inline constexpr guest::Function<0x0075e7ac, u32(u32, u32)> call_0075e7ac;
inline constexpr guest::Function<0x0075f448, u32(u32, u32)> call_0075f448;

u32 f_00618ecc(gptr<Object_00618ecc_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    if (r3 != 0) {
        lock_member_lock(r0 + 0x13280u, r1);  // (from the original)
        u32 r6_1 = r0 + 0x13000u;  // (from the original)
        u32 r8_1 = arg0->byte_13276;
        u32 r0_1 = bit_for_index(r1);
        if ((r0_1 & r8_1) != 0) {
            u32 r8_2 = arg0->byte_13278;
            u32 r0_2 = bit_for_index(r1);
            if ((r0_2 & r8_2) == 0) {
                u32 r8_3 = arg0->byte_13272;
                u32 r0_3 = bit_for_index(r1);
                if ((r0_3 & r8_3) != 0) {
                    u32 r4_1 = arg0->byte_13274;
                    u32 r0_4 = bit_for_index(r1);
                    if ((r0_4 & r4_1) == 0) {
                        goto L_618f60;
                    }
                }
            }
        }
        unlock_member_lock(r0 + 0x13280u);  // (from the original)
        return 0u;
L_618f60:;
        unlock_member_lock(r0 + 0x13280u);  // (from the original)
    }
    u32 r0_6 = call_0075f448(r0 + 0xb0u, r1);  // (from the original)
    if (r0_6 != 0) {
        if (r2 == 0) {
            return 1u;
        }
        u32 r0_8 = call_0075e7ac(r0 + 0x78u, r1);  // (from the original)
        if (r0_8 == 0) {
            return 1u;
        }
    }
    return 0u;
}

}  // namespace d_00618ecc
GUEST_EXPORT_FRAMED(0x00618ecc, d_00618ecc::f_00618ecc, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_00618fb0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00618fb0 {

struct __attribute__((packed)) Object_00618fb0_0 {
    u8 unknown_0[0x1329c];  // (not used here)
    u8 byte_1329c;
};
GUEST_OFFSET(Object_00618fb0_0, byte_1329c, 0x1329c);

inline constexpr guest::Function<0x0050d478, u32(u32, u32, u32)> call_0050d478;
inline constexpr guest::Function<0x005c394c, u32(u32, u32, u32)> call_005c394c;
inline constexpr guest::Function<0x005c4400, u32(u32, u32, u32)> call_005c4400;
inline constexpr guest::Function<0x00618c00, u32(u32, u32)> call_00618c00;
inline constexpr guest::Function<0x00622c5c, u32(u32)> call_00622c5c;
inline constexpr guest::Function<0x00623168, u32(u32, u32)> call_00623168;
inline constexpr guest::Function<0x006dcc94, u32(u32, u32, u32, u32)> call_006dcc94;

u32 f_00618fb0(gptr<Object_00618fb0_0> arg0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r5 = r0;
    call_006dcc94(r0, r1, r2, guest::cpu()->r[3]);
    u32 r6 = r5 + 0x13000u;  // (from the original)
    u32 r4_1 = arg0->byte_1329c;
    call_00618c00(r5, 0u);
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
    if (r0_2 != 0) {
        u32 res_1 = r0_2 - 1u;
        r0_2 = res_1;
        *gptr<u32>(r6 + 0x2a0u) = r0_2;  // (from the original)
        if (res_1 == 0) {
            call_0050d478(0xa22020u, r1, r2);  // (from the original)
            call_00622c5c(r5 + 0x3594u);  // (from the original)
            frame.release();
            return call_00623168((r5 + 0x4000u) + 0x3880u, guest::cpu()->r[1]);  // (from the original)
        }
    }
    guest::cpu()->r[1] = r1;
    return r0_2;
}

}  // namespace d_00618fb0
GUEST_EXPORT(0x00618fb0, d_00618fb0::f_00618fb0);

// f_00619044: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00619044 {

struct __attribute__((packed)) Local_00619044_r0_36 {
    u8 unknown_0[0x266];  // (not used here)
    u8 byte_266;
    u8 byte_267;
    u8 byte_268;
    u8 byte_269;
    u8 byte_26a;
    u8 byte_26b;
};
GUEST_OFFSET(Local_00619044_r0_36, byte_266, 0x266);
GUEST_OFFSET(Local_00619044_r0_36, byte_267, 0x267);
GUEST_OFFSET(Local_00619044_r0_36, byte_268, 0x268);
GUEST_OFFSET(Local_00619044_r0_36, byte_269, 0x269);
GUEST_OFFSET(Local_00619044_r0_36, byte_26a, 0x26a);
GUEST_OFFSET(Local_00619044_r0_36, byte_26b, 0x26b);

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
GUEST_OFFSET(Local_00619044_r1_28, byte_29c, 0x29c);
GUEST_OFFSET(Local_00619044_r1_28, byte_29d, 0x29d);
GUEST_OFFSET(Local_00619044_r1_28, word_2a0, 0x2a0);
GUEST_OFFSET(Local_00619044_r1_28, byte_2ac, 0x2ac);
GUEST_OFFSET(Local_00619044_r1_28, byte_2ad, 0x2ad);
GUEST_OFFSET(Local_00619044_r1_28, byte_2ae, 0x2ae);
GUEST_OFFSET(Local_00619044_r1_28, byte_2af, 0x2af);
GUEST_OFFSET(Local_00619044_r1_28, byte_2b0, 0x2b0);
GUEST_OFFSET(Local_00619044_r1_28, byte_2b1, 0x2b1);
GUEST_OFFSET(Local_00619044_r1_28, byte_2b2, 0x2b2);
GUEST_OFFSET(Local_00619044_r1_28, byte_2b3, 0x2b3);
GUEST_OFFSET(Local_00619044_r1_28, byte_2b4, 0x2b4);
GUEST_OFFSET(Local_00619044_r1_28, byte_2b5, 0x2b5);
GUEST_OFFSET(Local_00619044_r1_28, byte_2b6, 0x2b6);
GUEST_OFFSET(Local_00619044_r1_28, byte_2b7, 0x2b7);

inline constexpr guest::Function<0x0012bfec, u32(u32)> sead__CriticalSection__CriticalSection_0012bfec;
inline constexpr guest::Function<0x001ae1e4, u32(u32)> call_001ae1e4;
inline constexpr guest::Function<0x0029b870, u32(u32)> clear_32_bytes;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x00617104, u32(u32)> store_byte_constant_pack_0x4_00617104;
inline constexpr guest::Function<0x0061a71c, u32(u32)> call_0061a71c;
inline constexpr guest::Function<0x0061f4c0, u32(u32)> netgame__ConfirmMachine__ConfirmMachine_0061f4c0;
inline constexpr guest::Function<0x00620e68, u32(u32)> call_00620e68;
inline constexpr guest::Function<0x006220f8, u32(u32)> netgame__ConfirmMachine__ConfirmMachine_006220f8;
inline constexpr guest::Function<0x00622d04, u32(u32)> call_00622d04;
inline constexpr guest::Function<0x00623184, u32(u32)> store_constants_623184;
inline constexpr guest::Function<0x00623bb4, u32(u32)> netgame__ConfirmMachine__ConfirmMachine_00623bb4;
inline constexpr guest::Function<0x00623e3c, u32(u32)> call_00623e3c;
inline constexpr guest::Function<0x00624920, u32(u32)> construct_confirm_machine;
inline constexpr guest::Function<0x00624c90, u32(u32, u32, u32, u32)> clear_flag_pair_b;
inline constexpr guest::Function<0x00625060, u32(u32)> call_00625060;
inline constexpr guest::Function<0x00625664, u32(u32)> store_constants_625664;
inline constexpr guest::Function<0x00625e2c, u32(u32)> call_00625e2c;
inline constexpr guest::Function<0x00625f58, u32(u32)> store_constants_625f58;
inline constexpr guest::Function<0x006260f0, u32(u32)> store_constants_6260f0;
inline constexpr guest::Function<0x006264e0, u32(u32)> call_006264e0;
inline constexpr guest::Function<0x00626644, u32(u32)> store_constants_626644;
inline constexpr guest::Function<0x00628518, u32(u32, u32, u32, u32)> call_00628518;
inline constexpr guest::Function<0x006297f0, u32(u32)> store_constants_6297f0;
inline constexpr guest::Function<0x006298a8, u32(u32)> call_006298a8;
inline constexpr guest::Function<0x0062ac50, u32(u32)> netgame__AvatarMgr__AvatarMgr;
inline constexpr guest::Function<0x0062b014, u32(u32)> call_0062b014;
inline constexpr guest::Function<0x0062c868, u32(u32)> call_0062c868;

u32 f_00619044(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = r0 + 0x10u;  // (from the original)
    call_00628518(r0_1, r1, r2, r3);
    u32 r0_3 = call_00625060(r0_1 + 0x48u);  // (from the original)
    u32 r0_4 = r0_3 + 0x20u;  // (from the original)
    call_00623e3c(r0_4);
    u32 r0_5 = r0_4 + 0x2cu;  // (from the original)
    call_006298a8(r0_5);
    u32 r0_7 = netgame__AvatarMgr__AvatarMgr(r0_5 + 0xcu);  // (from the original)
    u32 r0_9 = netgame__ConfirmMachine__ConfirmMachine_006220f8(r0_7 + 0x110u);  // (from the original)
    u32 r0_10 = r0_9 + 0x24u;  // (from the original)
    call_0061a71c(r0_10);
    u32 r0_11 = r0_10 + 0x30u;  // (from the original)
    call_00620e68(r0_11);
    u32 r0_12 = r0_11 + 0x18u;  // (from the original)
    construct_confirm_machine(r0_12);
    u32 r0_14 = netgame__ConfirmMachine__ConfirmMachine_00623bb4(r0_12 + 0x10u);  // (from the original)
    u32 r0_15 = r0_14 + 0x2540u;  // (from the original)
    store_byte_constant_pack_0x4_00617104(r0_15);
    u32 r0_16 = r0_15 + 8u;
    store_constants_625664(r0_16);
    u32 r0_18 = netgame__ConfirmMachine__ConfirmMachine_0061f4c0(r0_16 + 0x1cu);  // (from the original)
    u32 r0_19 = r0_18 + 0x14cu;  // (from the original)
    call_0062c868(r0_19);
    u32 r0_21 = call_0062b014(r0_19 + 0x3f0u);  // (from the original)
    u32 r0_23 = call_00622d04(r0_21 + 0x8b8u);  // (from the original)
    u32 r0_24 = r0_23 + 0x42acu;  // (from the original)
    call_00625e2c(r0_24);
    u32 r0_25 = r0_24 + 0xcu;  // (from the original)
    store_constants_625f58(r0_25);
    u32 r0_26 = r0_25 + 0xcu;  // (from the original)
    call_006264e0(r0_26);
    u32 r0_27 = r0_26 + 0xcu;  // (from the original)
    store_constants_6260f0(r0_27);
    u32 r0_28 = r0_27 + 8u;
    store_constants_626644(r0_28);
    u32 r0_29 = r0_28 + 8u;
    store_constants_6297f0(r0_29);
    u32 r0_30 = r0_29 + 0xcu;  // (from the original)
    store_constants_623184(r0_30);
    u32 r0_32 = call_001ae1e4(r0_30 + 0x14u);  // (from the original)
    u32 r0_34 = for_each_element(r0_32 + 0x2520u, 0x1ae1e4u, 0x2520u, 4u);  // (from the original)
    u32 r0_35 = r0_34 + 0x9480u;  // (from the original)
    clear_32_bytes(r0_35);
    gptr<Local_00619044_r0_36> r0_36 = gptr<Local_00619044_r0_36>(r0_35 - 0x234u);  // (from the original)
    r0_36->byte_266 = 6;
    r0_36->byte_267 = 6;
    r0_36->byte_268 = 4;
    r0_36->byte_269 = 4;
    r0_36->byte_26a = 0;
    u32 r1_26 = (r0_35 - 0x13000u) - 0x234u;  // (from the original)
    r0_36->byte_26b = 0;
    u32 r0_37 = r1_26 + 0x1326cu;  // (from the original)
    clear_flag_pair_b(r0_37, r1_26, 6u, 4u);
    u32 r0_38 = r0_37 + 2u;
    clear_flag_pair_b(r0_38, 0x1326eu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_39 = r0_38 + 2u;
    clear_flag_pair_b(r0_39, 0xfffecd92u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_40 = r0_39 + 2u;
    clear_flag_pair_b(r0_40, 0x13272u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_41 = r0_40 + 2u;
    clear_flag_pair_b(r0_41, 0xfffecd8eu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_42 = r0_41 + 2u;
    clear_flag_pair_b(r0_42, 0x13276u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_43 = r0_42 + 2u;
    clear_flag_pair_b(r0_43, 0xfffecd8au, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_44 = r0_43 + 2u;
    clear_flag_pair_b(r0_44, 0x1327au, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_45 = r0_44 + 2u;
    clear_flag_pair_b(r0_45, 0xfffecd86u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_46 = r0_45 + 4u;
    sead__CriticalSection__CriticalSection_0012bfec(r0_46);
    u32 r0_47 = r0_46 - 0x13280u;  // (from the original)
    gptr<Local_00619044_r1_28> r1_28 = gptr<Local_00619044_r1_28>(r0_47 + 0x13000u);  // (from the original)
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
    return r0_47;
}

}  // namespace d_00619044
GUEST_EXPORT_FRAMED(0x00619044, d_00619044::f_00619044, 0x4010);  // pushes {r4, lr} first, as the original

// f_00619298: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00619298 {

inline constexpr guest::Function<0x00100b80, u32(u32)> call_00100b80;
inline constexpr guest::Function<0x00137e8c, u32(u32, u32, u32, u32)> destroy_critical_section;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;
inline constexpr guest::Function<0x0061f5e0, u32(u32)> destroy_flag_array_owner;
inline constexpr guest::Function<0x00622158, u32(u32)> call_00622158;
inline constexpr guest::Function<0x00623c28, u32(u32)> call_00623c28;
inline constexpr guest::Function<0x0062ad20, u32(u32)> netgame__AvatarMgr__virtual_0;
inline constexpr guest::Function<0x0062b064, u32(u32)> call_0062b064;
inline constexpr guest::Function<0x0062c8cc, u32(u32)> call_0062c8cc;

void f_00619298(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = r0 + 0x13280u;  // (from the original)
    destroy_critical_section(r0_1, r1, r2, r3);
    destroy_array_elements(r0_1 - 0x94ccu, 0x100b80u, 0x2520u, 4u);  // (from the original)
    u32 r0_5 = call_00100b80(r0_1 - 0xb9ecu);  // (from the original)
    destroy_array_elements(r0_5 - 0xaa0u, 0x62573cu, 4u, 0x20u);  // (from the original)
    call_0062b064(r0_5 - 0x4bb8u);  // (from the original)
    call_0062c8cc(r0_5 - 0x4fa8u);  // (from the original)
    destroy_flag_array_owner(r0_5 - 0x50f4u);  // (from the original)
    u32 r0_10 = call_00623c28(r0_5 - 0x7658u);  // (from the original)
    call_00622158(r0_10 - 0x7cu);  // (from the original)
    netgame__AvatarMgr__virtual_0(r0_10 - 0x18cu);  // (from the original)
}

}  // namespace d_00619298
GUEST_EXPORT_FRAMED(0x00619298, d_00619298::f_00619298, 0x4010);  // pushes {r4, lr} first, as the original

// f_0061a41c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061a41c {

struct __attribute__((packed)) Object_0061a41c_0 {
    u8 unknown_0[0x27];  // (not used here)
    u8 byte_27;
    u8 unknown_28[0x2];  // (not used here)
    u8 byte_2a;
};
GUEST_OFFSET(Object_0061a41c_0, byte_27, 0x27);
GUEST_OFFSET(Object_0061a41c_0, byte_2a, 0x2a);

inline guest::global<u32, 0x0095362c> global_0095362c;
inline constexpr guest::Function<0x005ce6dc, u32(u32, u32)> err_eula_is_idle_with_byte_fac;
inline constexpr guest::Function<0x0060b0b8, u32(u32, u32)> copy_reference_clock;
inline constexpr guest::Function<0x00624b24, u32(u32, u32)> StationMask__remove;
inline constexpr guest::Function<0x00627f74, u32(u32)> PacketBuffer__reserve_record;
inline constexpr guest::Function<0x0062801c, u32(u32, u32, u32)> PacketBuffer__flush_record;
inline constexpr guest::Function<0x0075dfe8, u32(u32)> NetSession__station;

void f_0061a41c(gptr<Object_0061a41c_0> arg0, u32 r1) {
    u32 r0_1 = *gptr<u8>(*global_0095362c + 0x54u);  // (from the original)
    if (r0_1 == 0) {
        u32 r0_2 = err_eula_is_idle_with_byte_fac(r0_1, r1);
        r1 = guest::cpu()->r[1];
        if (r0_2 == 0) {
            u32 r0_3 = *global_0095362c;
            r1 = *gptr<u8>(r0_3 + 0x132b4u);  // (from the original)
            if (r1 == 0) {
                r1 = arg0->byte_27;
                if (r1 != 0) {
                    u32 r0_4 = NetSession__station(r0_3);
                    if (r0_4 == 0) {
                        StationMask__remove(arg0.addr() + 0x24u, 0u);  // (from the original)
                        r1 = guest::cpu()->r[1];
                        *gptr<u8>(*global_0095362c + 0x1b8u) = 0;  // (from the original)
                    } else {
                        u32 r5_1 = *global_0095362c + 0x10u;  // (from the original)
                        PacketBuffer__reserve_record(r5_1);
                        PacketBuffer__flush_record(r5_1, 0x1du, 0u);  // (from the original)
                        r1 = guest::cpu()->r[1];
                    }
                    arg0->byte_27 = 0;
                }
            }
        }
    }
    u32 r0_6 = arg0->byte_2a;
    if (r0_6 != 0) {
        copy_reference_clock(r0_6, r1);
        r1 = guest::cpu()->r[1];
        arg0->byte_2a = 0;
    }
    guest::cpu()->r[1] = r1;
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
GUEST_OFFSET(Object_0061a6a4_0, byte_0, 0x0);
GUEST_OFFSET(Object_0061a6a4_0, byte_1, 0x1);
GUEST_OFFSET(Object_0061a6a4_0, word_2, 0x2);
GUEST_OFFSET(Object_0061a6a4_0, byte_c, 0xc);
GUEST_OFFSET(Object_0061a6a4_0, byte_d, 0xd);
GUEST_OFFSET(Object_0061a6a4_0, word_e, 0xe);
GUEST_OFFSET(Object_0061a6a4_0, byte_12, 0x12);
GUEST_OFFSET(Object_0061a6a4_0, word_14, 0x14);
GUEST_OFFSET(Object_0061a6a4_0, byte_18, 0x18);
GUEST_OFFSET(Object_0061a6a4_0, byte_19, 0x19);
GUEST_OFFSET(Object_0061a6a4_0, word_1c, 0x1c);
GUEST_OFFSET(Object_0061a6a4_0, word_20, 0x20);
GUEST_OFFSET(Object_0061a6a4_0, byte_26, 0x26);
GUEST_OFFSET(Object_0061a6a4_0, byte_27, 0x27);
GUEST_OFFSET(Object_0061a6a4_0, byte_28, 0x28);
GUEST_OFFSET(Object_0061a6a4_0, byte_2a, 0x2a);
GUEST_OFFSET(Object_0061a6a4_0, byte_2b, 0x2b);
GUEST_OFFSET(Object_0061a6a4_0, byte_2c, 0x2c);

inline constexpr guest::Function<0x00624c68, u32(u32)> clear_flag_pair;

void f_0061a6a4(gptr<Object_0061a6a4_0> arg0) {
    arg0->word_2 = 0;
    arg0->word_e = 0;
    arg0->byte_c = 0;
    arg0->byte_d = 8;
    arg0->byte_12 = 0;
    arg0->word_14 = 0;
    arg0->byte_18 = 8;
    arg0->byte_19 = 4;
    clear_flag_pair(arg0.addr() + 6u);
    clear_flag_pair(arg0.addr() + 6u);
    arg0->byte_0 = 8;
    arg0->byte_1 = 4;
    arg0->byte_26 = 0;
    arg0->word_1c = 0;
    arg0->word_20 = 0;
    clear_flag_pair(arg0.addr() + 0x24u);  // (from the original)
    arg0->byte_27 = 0;
    arg0->byte_28 = 0;
    arg0->byte_2a = 0;
    arg0->byte_2b = 0;
    arg0->byte_2c = 0;
}

}  // namespace d_0061a6a4
GUEST_EXPORT_FRAMED(0x0061a6a4, d_0061a6a4::f_0061a6a4, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0061a71c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061a71c {

struct __attribute__((packed)) Object_0061a71c_0 {
    u8 byte_0;
    u8 byte_1;
    u8 unknown_2[0xa];  // (not used here)
    u8 byte_c;
    u8 unknown_d[0x5];  // (not used here)
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
    u8 byte_29;
    u8 byte_2a;
    u8 byte_2b;
    u8 byte_2c;
};
GUEST_OFFSET(Object_0061a71c_0, byte_0, 0x0);
GUEST_OFFSET(Object_0061a71c_0, byte_1, 0x1);
GUEST_OFFSET(Object_0061a71c_0, byte_c, 0xc);
GUEST_OFFSET(Object_0061a71c_0, byte_12, 0x12);
GUEST_OFFSET(Object_0061a71c_0, word_14, 0x14);
GUEST_OFFSET(Object_0061a71c_0, byte_18, 0x18);
GUEST_OFFSET(Object_0061a71c_0, byte_19, 0x19);
GUEST_OFFSET(Object_0061a71c_0, word_1c, 0x1c);
GUEST_OFFSET(Object_0061a71c_0, word_20, 0x20);
GUEST_OFFSET(Object_0061a71c_0, byte_26, 0x26);
GUEST_OFFSET(Object_0061a71c_0, byte_27, 0x27);
GUEST_OFFSET(Object_0061a71c_0, byte_28, 0x28);
GUEST_OFFSET(Object_0061a71c_0, byte_29, 0x29);
GUEST_OFFSET(Object_0061a71c_0, byte_2a, 0x2a);
GUEST_OFFSET(Object_0061a71c_0, byte_2b, 0x2b);
GUEST_OFFSET(Object_0061a71c_0, byte_2c, 0x2c);

inline constexpr guest::Function<0x00624c90, u32(u32)> clear_flag_pair_b;

u32 f_0061a71c(gptr<Object_0061a71c_0> arg0) {
    arg0->byte_0 = 8;
    arg0->byte_1 = 4;
    u32 r0_1 = arg0.addr() + 6u;
    clear_flag_pair_b(r0_1);
    arg0->byte_c = 0;
    arg0->byte_12 = 0;
    arg0->word_14 = 0;
    arg0->byte_18 = 8;
    arg0->byte_19 = 4;
    arg0->word_1c = 0;
    arg0->word_20 = 0;
    clear_flag_pair_b(r0_1 + 0x1eu);  // (from the original)
    arg0->byte_26 = 0;
    arg0->byte_27 = 0;
    arg0->byte_28 = 0;
    arg0->byte_29 = 0;
    arg0->byte_2a = 0;
    arg0->byte_2b = 0;
    arg0->byte_2c = 0;
    return r0_1 - 6u;
}

}  // namespace d_0061a71c
GUEST_EXPORT_FRAMED(0x0061a71c, d_0061a71c::f_0061a71c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0061a7a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061a7a0 {

inline guest::global<u32, 0x0095362c> global_0095362c;
inline constexpr guest::Function<0x0075de74, u32(u32, u32)> call_0075de74;

u32 f_0061a7a0() {
    return call_0075de74(*global_0095362c, guest::cpu()->r[1]);
}

}  // namespace d_0061a7a0
GUEST_EXPORT(0x0061a7a0, d_0061a7a0::f_0061a7a0);

// f_0061a7b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061a7b0 {

struct __attribute__((packed)) Object_0061a7b0_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_0061a7b0_0, word_8, 0x8);
GUEST_OFFSET(Object_0061a7b0_0, word_c, 0xc);

inline constexpr guest::Function<0x006256d0, u32(u32)> call_006256d0;

u32 f_0061a7b0(gptr<Object_0061a7b0_0> arg0) {
    call_006256d0(arg0.addr());
    u32 r0_1 = ~2u;
    u32 r1_1 = ~0u;
    arg0->word_8 = r0_1;
    arg0->word_c = r1_1;
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
GUEST_OFFSET(Object_0061a7cc_0, word_0, 0x0);
GUEST_OFFSET(Object_0061a7cc_0, half_4, 0x4);
GUEST_OFFSET(Object_0061a7cc_0, half_6, 0x6);
GUEST_OFFSET(Object_0061a7cc_0, word_8, 0x8);
GUEST_OFFSET(Object_0061a7cc_0, word_c, 0xc);

struct __attribute__((packed)) Object_0061a7cc_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_0061a7cc_1, word_0, 0x0);
GUEST_OFFSET(Object_0061a7cc_1, word_4, 0x4);

struct __attribute__((packed)) Object_0061a7cc_2 {
    u32 word_0;
    u16 half_4;
    u16 half_6;
};
GUEST_OFFSET(Object_0061a7cc_2, word_0, 0x0);
GUEST_OFFSET(Object_0061a7cc_2, half_4, 0x4);
GUEST_OFFSET(Object_0061a7cc_2, half_6, 0x6);


void f_0061a7cc(gptr<Object_0061a7cc_0> arg0, gptr<Object_0061a7cc_1> arg1, gptr<Object_0061a7cc_2> arg2) {
    arg0->word_0 = arg2->word_0;
    arg0->half_4 = arg2->half_4;
    arg0->half_6 = arg2->half_6;
    u32 r1_1 = arg1->word_0;
    u32 r2_1 = arg1->word_4;
    arg0->word_8 = r1_1;
    arg0->word_c = r2_1;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_0061a7cc
GUEST_EXPORT(0x0061a7cc, d_0061a7cc::f_0061a7cc);

// f_0061a810: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061a810 {

inline guest::global<u32, 0x0095362c> global_0095362c;
inline constexpr guest::Function<0x00622fa0, u32(u32, u32)> call_00622fa0;
inline constexpr guest::Function<0x00627d44, u32(u32, u32, u32)> PacketBuffer__append;
inline constexpr guest::Function<0x00627f74, u32(u32)> PacketBuffer__reserve_record;
inline constexpr guest::Function<0x0062801c, u32(u32, u32, u32)> PacketBuffer__flush_record;
inline constexpr guest::Function<0x0075dfe8, u32(u32, u32, u32, u32)> NetSession__station;

void f_0061a810(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x20);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r0_2 = NetSession__station(*global_0095362c, r1, r2, r3);
    if (r0_2 == 0) {
        u32 r0_3 = *global_0095362c + 0x7880u;  // (from the original)
        frame.release();
        call_00622fa0(r0_3, r0);
        return;
    }
    *frame.at<u16>(0) = u16(r0 << 8);
    if (u32(1)) {
        u32 r7_1 = *global_0095362c + 0x10u;  // (from the original)
        PacketBuffer__reserve_record(r7_1);
        PacketBuffer__append(r7_1, frame.at(0).addr(), 2u);
        PacketBuffer__flush_record(r7_1, 0x30u, 0u);  // (from the original)
    }
}

}  // namespace d_0061a810
GUEST_EXPORT(0x0061a810, d_0061a810::f_0061a810);

// f_0061d9bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061d9bc {

inline guest::global<u32, 0x0095c6d0> global_0095c6d0;
inline constexpr guest::Function<0x006a69c0, u32(u32, u32, u32, u32)> call_006a69c0;
inline constexpr guest::Function<0x006c3e4c, u32(u32, u32, u32, u32)> call_006c3e4c;

void f_0061d9bc() {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r4_1 = *global_0095c6d0;
    call_006c3e4c(r4_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    frame.release();
    call_006a69c0(r4_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
}

}  // namespace d_0061d9bc
GUEST_EXPORT(0x0061d9bc, d_0061d9bc::f_0061d9bc);

// f_0061d9e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061d9e0 {

inline guest::global<u32, 0x0095362c> global_0095362c;
inline constexpr guest::Function<0x005ce6dc, u32(u32, u32, u32, u32)> err_eula_is_idle_with_byte_fac;
inline constexpr guest::Function<0x00623894, u32(u32, u32)> drop_session_mask_copy_b;
inline constexpr guest::Function<0x0062390c, u32(u32, u32)> drop_session_mask_copy_c;
inline constexpr guest::Function<0x0062468c, u32(u32, u32)> call_0062468c;

u32 f_0061d9e0(u32 r0, u32 r1) {
    u32 r0_1 = *gptr<u8>(*global_0095362c + 0x132b4u);  // (from the original)
    if (r0_1 == 0) {
        u32 r0_2 = err_eula_is_idle_with_byte_fac(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0_2 == 0) {
            u32 r0_3 = *gptr<u8>(r0);
            u32 r4_1 = 1u;
            if (r0_3 != 0x2bu) {  // (from the original)
                if (r0_3 != 0x37u) {  // (from the original)
                    return r4_1;
                }
                u32 r0_4 = call_0062468c(r0_3, r1);
                r1 = guest::cpu()->r[1];
                if (r0_4 != 0) {
                    return r4_1;
                }
            } else {
                u32 r1_1 = *gptr<u8>(r0 + 3u);
                u32 r0_6 = drop_session_mask_copy_b(*global_0095362c + 0x23cu, r1_1);  // (from the original)
                u32 r1_2 = *gptr<u8>(r0 + 3u);
                if (r0_6 == 0) {
                    r4_1 = 0u;
                }
                u32 r0_8 = drop_session_mask_copy_c(*global_0095362c + 0x23cu, r1_2);  // (from the original)
                r1 = guest::cpu()->r[1];
                if (r0_8 != 0) {
                    return r4_1;
                }
            }
            guest::cpu()->r[1] = r1;
            return 0u;
        }
    }
    guest::cpu()->r[1] = r1;
    return 1u;
}

}  // namespace d_0061d9e0
GUEST_EXPORT_FRAMED(0x0061d9e0, d_0061d9e0::f_0061d9e0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0061dad0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061dad0 {

struct __attribute__((packed)) Object_0061dad0_0 {
    u8 unknown_0[0x4c];  // (not used here)
    u32 word_4c;
};
GUEST_OFFSET(Object_0061dad0_0, word_4c, 0x4c);

inline guest::global<u32, 0x0087bd1c> global_0087bd1c;

void f_0061dad0(gptr<Object_0061dad0_0> arg0) {
    u32 r1_1 = *global_0087bd1c;
    arg0->word_4c = r1_1;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_0061dad0
GUEST_EXPORT(0x0061dad0, d_0061dad0::f_0061dad0);

// f_0061dae4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061dae4 {

struct __attribute__((packed)) Local_0061dae4_r0_7 {
    u8 unknown_0[0x3c];  // (not used here)
    u8 byte_3c;
    u8 unknown_3d[0x17];  // (not used here)
    u8 byte_54;
    u8 unknown_55[0x190];  // (not used here)
    u8 byte_1e5;
};
GUEST_OFFSET(Local_0061dae4_r0_7, byte_3c, 0x3c);
GUEST_OFFSET(Local_0061dae4_r0_7, byte_54, 0x54);
GUEST_OFFSET(Local_0061dae4_r0_7, byte_1e5, 0x1e5);

struct __attribute__((packed)) Local_0061dae4_r5_1 {
    u8 unknown_0[0x46];  // (not used here)
    u8 byte_46;
};
GUEST_OFFSET(Local_0061dae4_r5_1, byte_46, 0x46);

inline guest::global<u32, 0x0095362c> global_0095362c;
inline constexpr guest::Function<0x0051d7f0, u32(u32, u32)> call_0051d7f0;
inline constexpr guest::Function<0x005ce6dc, u32(u32, u32, u32, u32)> err_eula_is_idle_with_byte_fac;
inline constexpr guest::Function<0x0060b0b8, u32(u32)> copy_reference_clock;
inline constexpr guest::Function<0x00618164, u32(u32, u32)> call_00618164;
inline constexpr guest::Function<0x00618fb0, u32(u32, u32)> call_00618fb0;
inline constexpr guest::Function<0x0061f3f8, u32(u32)> call_0061f3f8;
inline constexpr guest::Function<0x006238d0, u32(u32, u32)> call_006238d0;
inline constexpr guest::Function<0x00623948, u32(u32, u32)> call_00623948;

void f_0061dae4(u32 r0, u32 r1) {
    u32 r0_8 = 0;
    u32 r0_1 = err_eula_is_idle_with_byte_fac(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    gptr<Local_0061dae4_r5_1> r5_1 = gptr<Local_0061dae4_r5_1>(r0 + 0x100u);  // (from the original)
    if (r0_1 == 0) {
        u32 r0_2 = *global_0095362c;
        if (*gptr<u8>(r0_2 + 0x132b4u) == 0) {  // (from the original)
            u32 r1_1 = *gptr<u8>(r0);
            u32 zf_1 = r1_1 - 0x43u == 0;  // (from the original)
            if (!zf_1) {
                if (zf_1 || s32(r1_1) < 0x43) {  // (from the original)
                    if (r1_1 == 0x2bu) {  // (from the original)
                        u32 r1_2 = *gptr<u8>(r0 + 3u);
                        call_00623948(r0_2 + 0x23cu, r1_2);  // (from the original)
                        call_00618fb0(*global_0095362c, guest::cpu()->r[1]);
                        goto L_61dc08;
                    }
                    if (r1_1 == 0x32u) {  // (from the original)
                        u32 r1_4 = *gptr<u8>(r0 + 3u);
                        call_006238d0(r0_2 + 0x23cu, r1_4);  // (from the original)
                        u32 r6_1 = *gptr<u8>(r0 + 3u);
                        if (r6_1 >= 4u) {
                            goto L_61dc08;
                        }
                        call_00618164(*global_0095362c, r6_1);
                        gptr<Local_0061dae4_r0_7> r0_7 = gptr<Local_0061dae4_r0_7>(*global_0095362c);
                        r0_7->byte_1e5 = 4;
                        r0_7->byte_3c = 4;
                        r0_7->byte_54 = 0;
                        call_0051d7f0(r6_1, 4u);
                        call_0061f3f8(r0);
                        goto L_61dc08;
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
            }
            goto L_61dbe8;
        }
    }
    r0_8 = r5_1->byte_46;
    if (r0_8 == 0) {
        return;
    }
    goto L_61dc14;
L_61dbe8:;
    call_0061f3f8(r0);
    *gptr<u8>(r0 + 0x13eu) = 0;  // (from the original)
    *gptr<u8>(r0 + 0x13fu) = 0;  // (from the original)
    *gptr<u8>(*global_0095362c + 0x132b6u) = 0;  // (from the original)
    *gptr<u8>(r0) = 0;
L_61dc08:;
    r0_8 = r5_1->byte_46;
    if (r0_8 == 0) {
        return;
    }
L_61dc14:;
    copy_reference_clock(r0_8);
    *gptr<u8>(r0 + 0x146u) = 0;  // (from the original)
    *gptr<u32>(r0 + 0x4cu) = 0;  // (from the original)
}

}  // namespace d_0061dae4
GUEST_EXPORT_FRAMED(0x0061dae4, d_0061dae4::f_0061dae4, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0061dc30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061dc30 {

struct __attribute__((packed)) Local_0061dc30_ea_10 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0061dc30_ea_10, word_0, 0x0);
GUEST_OFFSET(Local_0061dc30_ea_10, word_4, 0x4);

struct __attribute__((packed)) Local_0061dc30_ea_9 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0061dc30_ea_9, word_0, 0x0);
GUEST_OFFSET(Local_0061dc30_ea_9, word_4, 0x4);

inline guest::global<u32, 0x00881b48> global_00881b48;
inline guest::global<u32, 0x00881b84> global_00881b84;
inline guest::global<u32, 0x0095c6d0> global_0095c6d0;
inline constexpr guest::Function<0x00300904, u32(u32)> main_object_value;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> query_current_main_object;
inline constexpr guest::Function<0x00308340, u32(u32)> return_constant_0xac1948_;
inline constexpr guest::Function<0x00565cc0, u32(u32)> atan2_angle;
inline constexpr guest::Function<0x005b5d38, u32(u32, u32, u32, u32)> call_005b5d38;
inline constexpr guest::Function<0x006c39c4, u32(u32)> entry_byte_14;
inline constexpr guest::Function<0x006c3a58, u32(u32)> call_006c3a58;
inline constexpr guest::Function<0x006c3c00, u32(u32, u32, u32, u32)> call_006c3c00;
inline constexpr guest::Function<0x006c4280, u32(u32)> record_value;

struct __attribute__((packed)) Frame_0061dc30 {
    u32 word_0;
    u8 unknown_4[0x10];  // (not read or written by name)
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u32 word_28;
    u32 word_2c;
    u8 unknown_30[0x38];  // (not read or written by name)
    float float_68;
    u8 unknown_6c[0x4];  // (not read or written by name)
    float float_70;
    u8 unknown_74[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0061dc30, word_0, 0x0);
GUEST_OFFSET(Frame_0061dc30, word_14, 0x14);
GUEST_OFFSET(Frame_0061dc30, word_18, 0x18);
GUEST_OFFSET(Frame_0061dc30, word_1c, 0x1c);
GUEST_OFFSET(Frame_0061dc30, word_20, 0x20);
GUEST_OFFSET(Frame_0061dc30, word_24, 0x24);
GUEST_OFFSET(Frame_0061dc30, word_28, 0x28);
GUEST_OFFSET(Frame_0061dc30, word_2c, 0x2c);
GUEST_OFFSET(Frame_0061dc30, float_68, 0x68);
GUEST_OFFSET(Frame_0061dc30, float_70, 0x70);
GUEST_SIZE(Frame_0061dc30, 0x78);

void f_0061dc30(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2, float S3) {
    guest::StackFrameOf<Frame_0061dc30> frame;  // the original's stack frame
    query_current_main_object(r0, r1, r2, r3);
    call_006c3a58(frame.at(0x68).addr());  // (from the original)
    for_each_element(frame.at(0x30).addr(), 0x3040fcu, 0xcu, 4u);  // (from the original)
    for_each_element(frame.at(0x60).addr(), 0x567470u, 2u, 4u);  // (from the original)
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
        call_006c3c00(r4, r5 & 0xffu, r2, r3);  // (from the original)
        float S3_4 = std::bit_cast<float>(*gptr<u32>(r4 + 8u));
        float S2_4 = std::bit_cast<float>(*gptr<u32>(r4));
        float S1_4 = frame->float_70 - S3_4;
        float S0_4 = frame->float_68 - S2_4;
        guest::cpu()->s[0] = S0_4;
        guest::cpu()->s[1] = S1_4;
        guest::cpu()->s[2] = S2_4;
        guest::cpu()->s[3] = S3_4;
        u32 r0_4 = atan2_angle(r4);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        S2 = guest::cpu()->s[2];
        S3 = guest::cpu()->s[3];
        r5 += 1u;
        r4 += 0xcu;  // (from the original)
        *gptr<u16>(r6) = u16(r0_4);
        r6 += 2u;
        guest::preempt();
    } while (s32(r5) < 4);
    u32 r0_5 = *gptr<s8>(*global_0095c6d0 + 0x1cu);  // (from the original)
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    u32 r0_6 = record_value(r0_5);
    u32 r0_7 = entry_byte_14(r0_6);
    u32 r0_8 = main_object_value(r0_7);
    u32 r0_9 = return_constant_0xac1948_(r0_8);
    frame->word_28 = 1;
    frame->word_2c = 1;
    frame->word_24 = 0;
    frame->word_18 = frame.at(0x54).addr();  // (from the original)
    frame->word_20 = r0_8 ^ 1u;
    frame->word_1c = frame.at(0x66).addr();  // (from the original)
    frame->word_14 = frame.at(0x64).addr();  // (from the original)
    frame->word_0 = frame.at(0x30).addr();  // (from the original)
    gptr<Local_0061dc30_ea_9> ea_9 = gptr<Local_0061dc30_ea_9>(frame.at(4).addr());
    ea_9->word_0 = frame.at(0x60).addr();  // (from the original)
    ea_9->word_4 = frame.at(0x3c).addr();  // (from the original)
    gptr<Local_0061dc30_ea_10> ea_10 = gptr<Local_0061dc30_ea_10>(frame.at(0xc).addr());  // (from the original)
    ea_10->word_0 = frame.at(0x62).addr();  // (from the original)
    ea_10->word_4 = frame.at(0x48).addr();  // (from the original)
    call_005b5d38(r0_9, r0_7, *global_00881b48, *global_00881b84);
}

}  // namespace d_0061dc30
GUEST_EXPORT_FRAMED(0x0061dc30, d_0061dc30::f_0061dc30, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0061de7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061de7c {

struct __attribute__((packed)) Object_0061de7c_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_0061de7c_0, byte_0, 0x0);

inline guest::global<u32, 0x0095362c> global_0095362c;
inline constexpr guest::Function<0x00305f2c, u32(u32, u32, u32, u32)> read_global_object_byte;
inline constexpr guest::Function<0x0061e11c, u32(u32, u32)> call_0061e11c;
inline constexpr guest::Function<0x00627f74, u32(u32)> PacketBuffer__reserve_record;
inline constexpr guest::Function<0x0062801c, u32(u32, u32, u32)> PacketBuffer__flush_record;
inline constexpr guest::Function<0x0075dfe8, u32(u32)> NetSession__station;

u32 f_0061de7c(gptr<Object_0061de7c_0> arg0, u32 r1, u32 r2) {
    u32 r0_1 = read_global_object_byte(arg0.addr(), r1, r2, guest::cpu()->r[3]);
    if (r0_1 == 2u) {
        call_0061e11c(arg0.addr(), 0u);
    } else {
        u32 r0_3 = NetSession__station(*global_0095362c);
        if (r0_3 == 0) {
            arg0->byte_0 = 6;
        } else {
            u32 r4_1 = *global_0095362c + 0x10u;  // (from the original)
            PacketBuffer__reserve_record(r4_1);
            PacketBuffer__flush_record(r4_1, 0x6au, 0u);  // (from the original)
        }
    }
    return 1u;
}

}  // namespace d_0061de7c
GUEST_EXPORT_FRAMED(0x0061de7c, d_0061de7c::f_0061de7c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0061df58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061df58 {

struct __attribute__((packed)) Object_0061df58_0 {
    u8 unknown_0[0x5];  // (not used here)
    u8 byte_5;
    u8 unknown_6[0x56];  // (not used here)
    u32 word_5c;
    u8 unknown_60[0x11];  // (not used here)
    u8 byte_71;
    u8 unknown_72[0xca];  // (not used here)
    u8 byte_13c;
    u8 unknown_13d[0x7];  // (not used here)
    u8 byte_144;
};
GUEST_OFFSET(Object_0061df58_0, byte_5, 0x5);
GUEST_OFFSET(Object_0061df58_0, word_5c, 0x5c);
GUEST_OFFSET(Object_0061df58_0, byte_71, 0x71);
GUEST_OFFSET(Object_0061df58_0, byte_13c, 0x13c);
GUEST_OFFSET(Object_0061df58_0, byte_144, 0x144);

struct __attribute__((packed)) Local_0061df58_r8_2 {
    u8 unknown_0[0x60];  // (not used here)
    u32 word_60;
};
GUEST_OFFSET(Local_0061df58_r8_2, word_60, 0x60);

inline guest::global<u32, 0x009529cc> global_009529cc;
inline guest::global<u32, 0x0095362c> global_0095362c;
inline constexpr guest::Function<0x00305f44, u32(u32)> query_current_main_object;
inline constexpr guest::Function<0x00623f34, u32(u32)> PlayerStamp__stamp_current_player;
inline constexpr guest::Function<0x00624008, u32(u32, u32, u32)> construct_empty_player_stamp;
inline constexpr guest::Function<0x00624024, u32(u32)> construct_nothing_00624024;
inline constexpr guest::Function<0x00624b60, u32(u32, u32, u32, u32)> StationMask__set_from_mask;
inline constexpr guest::Function<0x00624c78, u32(u32, u32, u32)> bit_for_index;
inline constexpr guest::Function<0x0070ab10, u32(u32, u32, u32)> query_70ab10;
inline constexpr guest::Function<0x0075f4d4, u32(u32, u32, u32)> entry_in_use;

struct __attribute__((packed)) Frame_0061df58 {
    u32 word_0;
    u8 unknown_4[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0061df58, word_0, 0x0);
GUEST_SIZE(Frame_0061df58, 0xc);

u32 f_0061df58(gptr<Object_0061df58_0> arg0, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_0061df58> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r5 = r0;
    StationMask__set_from_mask(r0 + 5u, r1, r2, guest::cpu()->r[3]);
    StationMask__set_from_mask(r5 + 7u, r2, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r4_1 = arg0->byte_5;
    u32 r0_3 = bit_for_index(0u, guest::cpu()->r[1], guest::cpu()->r[2]);
    u32 r7 = (r0_3 & r4_1) == 0 ? r5 + 5u : r5 + 7u;
    u32 r1_2 = *gptr<u8>(r7);
    StationMask__set_from_mask(r5 + 0x70u, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_5 = arg0->byte_71;
    u32 r11 = 0u;
    arg0->byte_13c = u8(r0_5);
    arg0->word_5c = r11;
    if (r0_5 != 0) {
        u32 r0_6 = query_current_main_object(r0_5);
        u32 r4_2 = arg0->byte_5;
        u32 r10 = r0_6;
        u32 r0_7 = bit_for_index(r0_6, guest::cpu()->r[1], guest::cpu()->r[2]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        u32 r0_8 = r0_7 & r4_2;
        if (r0_8 != 0) {
            r0_8 = 1u;
        }
        u32 r9 = 4u;
        u32 r4 = 0u;
        arg0->byte_144 = u8(r0_8);
L_61dfdc:;
        u32 r8_1 = r4 & 0xffu;  // (from the original)
        u32 r6_1 = *gptr<u8>(r7);
        u32 r0_9 = bit_for_index(r8_1, r1, r2);
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
        u32 r0_10 = r9 == r10;
        *gptr<u8>(r5 + 0x13du) = u8(r0_10);  // (from the original)
        if (r0_10 == 0) {
            u32 r0_12 = entry_in_use(*global_0095362c + 0xb0u, r9, r2);  // (from the original)
            if (r0_12 != 0) {
                r0_13 = *gptr<u32>(r0_12);
                goto L_61e034;
            }
            goto L_61e038;
        }
        r0_14 = *global_009529cc;
        r0_13 = query_70ab10(r0_14, r1, r2);
L_61e034:;
        *gptr<u32>(r5 + 0x5cu) = r0_13;  // (from the original)
L_61e038:;
        u32 r0_15 = *global_0095362c;
        r10 = r0_15 + 0xb0u;  // (from the original)
        u32 r0_16 = query_current_main_object(r0_15);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r9 = r0_16;
        if (!(r0_16 >= 4u)) {
            r4 = 0u;
            do {
                gptr<Local_0061df58_r8_2> r8_2 = gptr<Local_0061df58_r8_2>(r5 + (r4 << 2));
                u32 r7_1 = r4 & 0xffu;  // (from the original)
                r8_2->word_60 = r11;
                u32 r6_2 = *gptr<u8>(r5 + 0x70u);  // (from the original)
                r0_16 = bit_for_index(r7_1, r1, r2);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                if ((r0_16 & r6_2) != 0) {
                    if (r7_1 == r9) {
                        construct_empty_player_stamp(frame.at(0).addr(), r1, r2);
                        PlayerStamp__stamp_current_player(frame.at(0).addr());
                        r8_2->word_60 = frame->word_0;
                        r0_16 = construct_nothing_00624024(frame.at(0).addr());
                        r1 = guest::cpu()->r[1];
                        r2 = guest::cpu()->r[2];
                    } else {
                        r0_16 = entry_in_use(r10, r7_1, r2);
                        r1 = guest::cpu()->r[1];
                        r2 = guest::cpu()->r[2];
                        if (r0_16 != 0) {
                            r0_16 = *gptr<u32>(r0_16);
                            r8_2->word_60 = r0_16;
                        }
                    }
                }
                r4 += 1u;
                guest::preempt();
            } while (s32(r4) < 4);
        }
        guest::cpu()->r[1] = r1;
        return r0_16;
    }
    *gptr<u8>(r5 + 0x144u) = 1;  // (from the original)
    *gptr<u8>(r5 + 0x13du) = u8(r11);  // (from the original)
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
GUEST_OFFSET(Object_0061e488_0, byte_0, 0x0);
GUEST_OFFSET(Object_0061e488_0, byte_3, 0x3);

struct __attribute__((packed)) Local_0061e488_r0_1 {
    u8 unknown_0[0x3c];  // (not used here)
    u8 byte_3c;
    u8 unknown_3d[0x17];  // (not used here)
    u8 byte_54;
};
GUEST_OFFSET(Local_0061e488_r0_1, byte_3c, 0x3c);
GUEST_OFFSET(Local_0061e488_r0_1, byte_54, 0x54);

inline guest::global<u32, 0x0095362c> global_0095362c;
inline constexpr guest::Function<0x00621684, u32(u32, u32, u32, u32)> call_00621684;
inline constexpr guest::Function<0x00623984, u32(u32, u32, u32)> drop_session_mask_copy_station_a;
inline constexpr guest::Function<0x00624b24, u32(u32, u32)> StationMask__remove;

void f_0061e488(gptr<Object_0061e488_0> arg0, u32 r1_unused, u32 r2) {
    u32 r1_1 = arg0->byte_0;
    gptr<Local_0061e488_r0_1> r0_1 = gptr<Local_0061e488_r0_1>(*global_0095362c);
    if (r1_1 == 0x2eu) {  // (from the original)
        u32 r5_1 = arg0->byte_3;
        r0_1->byte_3c = u8(r5_1);
        u32 r0_2 = r0_1.addr() + 0x1c0u;  // (from the original)
        call_00621684(r0_2, r5_1, r2, guest::cpu()->r[3]);
        drop_session_mask_copy_station_a(r0_2, r5_1, r2);
        r1_1 = guest::cpu()->r[1];
        arg0->byte_0 = 0x2f;  // (from the original)
    } else {
        if (r1_1 == 0x39u) {  // (from the original)
            r0_1->byte_54 = 1;
            arg0->byte_0 = 0x3a;  // (from the original)
            guest::cpu()->r[1] = 0x3au;  // (from the original)
            return;
        }
        if (r1_1 == 0x5au) {  // (from the original)
            u32 r5_2 = arg0->byte_3;
            r0_1->byte_3c = u8(r5_2);
            call_00621684(r0_1.addr() + 0x1c0u, r5_2, r2, guest::cpu()->r[3]);  // (from the original)
            u32 r0_4 = *global_0095362c + 0x13270u;  // (from the original)
            StationMask__remove(r0_4, r5_2);
            drop_session_mask_copy_station_a(r0_4, r5_2, guest::cpu()->r[2]);
            r1_1 = guest::cpu()->r[1];
            arg0->byte_0 = 0x5b;  // (from the original)
        }
    }
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_0061e488
GUEST_EXPORT_FRAMED(0x0061e488, d_0061e488::f_0061e488, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0061e574: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061e574 {

struct __attribute__((packed)) Object_0061e574_0 {
    u8 unknown_0[0x144];  // (not used here)
    u8 byte_144;
};
GUEST_OFFSET(Object_0061e574_0, byte_144, 0x144);

inline guest::global<u32, 0x0095362c> global_0095362c;
inline constexpr guest::Function<0x001148c5, u32(u32)> call_001148c4;
inline constexpr guest::Function<0x00282c78, u32(u32)> call_00282c78;
inline constexpr guest::Function<0x00282d6c, u32(u32)> call_00282d6c;
inline constexpr guest::Function<0x002fb94c, u32(u32)> get_current_player;
inline constexpr guest::Function<0x002fd068, u32(u32)> get_counter_block;
inline constexpr guest::Function<0x00303660, u32(u32)> EncryptedInt__get;
inline constexpr guest::Function<0x00305f2c, u32(u32, u32, u32, u32)> read_global_object_byte;
inline constexpr guest::Function<0x00308340, u32(u32)> return_constant_0xac1948_;
inline constexpr guest::Function<0x0030b6c4, u32(u32)> main_object_idle;
inline constexpr guest::Function<0x005b4d04, u32(u32, u32, u32, u32)> call_005b4d04;
inline constexpr guest::Function<0x005c5bb8, u32(u32)> call_005c5bb8;
inline constexpr guest::Function<0x0061dc30, u32(u32)> call_0061dc30;
inline constexpr guest::Function<0x0061f3f8, u32(u32)> call_0061f3f8;
inline constexpr guest::Function<0x006b7380, u32(u32, u32)> ClampedCounters__add_to_current_split_0_;
inline constexpr guest::Function<0x006b8cb8, u32(u32, u32)> ClampedCounters__set_current_count;
inline constexpr guest::Function<0x006bced4, u32(u32)> sell_shoes_and_pockets_to_bank;
inline constexpr guest::Function<0x006e08b4, u32(u32)> call_006e08b4;

struct __attribute__((packed)) Frame_0061e574 {
    u32 word_0;
};
GUEST_OFFSET(Frame_0061e574, word_0, 0x0);
GUEST_SIZE(Frame_0061e574, 0x4);

void f_0061e574(gptr<Object_0061e574_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0061e574> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r0_1 = read_global_object_byte(arg0.addr(), r1, r2, r3);
    if (r0_1 == 2u) {
        r0_1 = arg0->byte_144;
        if (r0_1 == 0) {
            u32 r0_2 = call_00282c78(r0_1);
            u32 r0_3 = return_constant_0xac1948_(r0_2);
            frame->word_0 = 1;
            u32 r0_4 = call_005b4d04(r0_3, 0u, 0u, 1u);
            u32 r0_5 = main_object_idle(r0_4);
            if (r0_5 != 0) {
                call_0061f3f8(arg0.addr());
            }
            *gptr<u8>(*global_0095362c + 0x132b6u) = 0;  // (from the original)
            guest::cpu()->r[1] = 0u;
            return;
        }
    }
    call_00282d6c(r0_1);
    u32 r0_6 = call_006e08b4(2u);
    u32 r0_7 = get_current_player(r0_6);
    if (r0_7 != 0) {
        u32 r0_8 = sell_shoes_and_pockets_to_bank(r0_7);
        u32 r0_10 = EncryptedInt__get(r0_7 + 0x6b8cu);  // (from the original)
        u32 r0_11 = get_counter_block(r0_10);
        u32 r0_12 = ClampedCounters__set_current_count(r0_11, r0_10);
        u32 r0_13 = get_counter_block(r0_12);
        r0_7 = ClampedCounters__add_to_current_split_0_(r0_13, r0_8);
    }
    u32 r0_14 = call_005c5bb8(r0_7);
    u32 r0_15 = call_001148c4(r0_14);
    call_0061dc30(r0_15);
    *gptr<u8>(*global_0095362c + 0x132b6u) = 0;  // (from the original)
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_0061e574
GUEST_EXPORT_FRAMED(0x0061e574, d_0061e574::f_0061e574, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0061e690: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061e690 {

struct __attribute__((packed)) Object_0061e690_0 {
    u8 unknown_0[0x141];  // (not used here)
    u8 byte_141;
};
GUEST_OFFSET(Object_0061e690_0, byte_141, 0x141);

inline constexpr guest::Function<0x00617840, u32(u32, u32, u32, u32)> call_00617840;
inline constexpr guest::Function<0x00624f00, u32(u32, u32, u32, u32)> station_is_waited_for;
inline constexpr guest::Function<0x00626328, u32(u32, u32, u32, u32)> call_00626328;

struct __attribute__((packed)) Frame_0061e690 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Frame_0061e690, word_0, 0x0);
GUEST_OFFSET(Frame_0061e690, word_4, 0x4);
GUEST_OFFSET(Frame_0061e690, word_8, 0x8);
GUEST_OFFSET(Frame_0061e690, word_c, 0xc);
GUEST_OFFSET(Frame_0061e690, word_10, 0x10);
GUEST_SIZE(Frame_0061e690, 0x14);

u32 f_0061e690(gptr<Object_0061e690_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0061e690> frame;  // the original's stack frame
    u32 r6 = r1;
    u32 r0_1 = call_00626328(r1, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_1 != 0) {
        u32 r9 = 0x95362cu;  // (from the original)
        arg0->byte_141 = 1;
        u32 r4 = 0u;
        u32 r7 = r4;
        u32 r8 = 0x14u;  // (from the original)
        do {
            u32 r5_1 = r4 & 0xffu;  // (from the original)
            if (r5_1 != 0) {
                u32 r0_2 = station_is_waited_for(r5_1, r1, r2, r3);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_2 != 0 || r6 == r5_1) {
                    frame->word_8 = r7;
                    frame->word_c = r7;
                    frame->word_10 = r7;
                    frame->word_0 = r7;
                    frame->word_4 = r8;
                    call_00617840(*gptr<u32>(r9), r5_1, 0u, 0u);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                }
            }
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

inline guest::global<u32, 0x0095c6d0> global_0095c6d0;
inline constexpr guest::Function<0x00308340, u32(u32)> return_constant_0xac1948_;
inline constexpr guest::Function<0x005b4d7c, u32(u32, u32, u32, u32)> call_005b4d7c;
inline constexpr guest::Function<0x006c3be4, u32(u32)> entry_byte_15;
inline constexpr guest::Function<0x006c4280, u32(u32)> record_value;

struct __attribute__((packed)) Frame_0061e72c {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Frame_0061e72c, word_0, 0x0);
GUEST_OFFSET(Frame_0061e72c, word_4, 0x4);
GUEST_SIZE(Frame_0061e72c, 0x8);

void f_0061e72c() {
    guest::StackFrameOf<Frame_0061e72c> frame;  // the original's stack frame
    u32 r0_1 = *gptr<s8>(*global_0095c6d0 + 0x1cu);  // (from the original)
    u32 r0_2 = record_value(r0_1);
    u32 r0_3 = entry_byte_15(r0_2);
    u32 r0_4 = return_constant_0xac1948_(r0_3);
    frame->word_0 = 1;
    frame->word_4 = 1;
    call_005b4d7c(r0_4, r0_3, 1u, 1u);
}

}  // namespace d_0061e72c
GUEST_EXPORT_FRAMED(0x0061e72c, d_0061e72c::f_0061e72c, 0x4010);  // pushes {r4, lr} first, as the original

// f_0061eb20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061eb20 {

struct __attribute__((packed)) Local_0061eb20_ea_10 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0061eb20_ea_10, word_0, 0x0);
GUEST_OFFSET(Local_0061eb20_ea_10, word_4, 0x4);

struct __attribute__((packed)) Local_0061eb20_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0061eb20_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_0061eb20_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_0061eb20_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0061eb20_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_0061eb20_ea_4, word_4, 0x4);

struct __attribute__((packed)) Local_0061eb20_ea_6 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0061eb20_ea_6, word_0, 0x0);
GUEST_OFFSET(Local_0061eb20_ea_6, word_4, 0x4);

struct __attribute__((packed)) Local_0061eb20_ea_9 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0061eb20_ea_9, word_0, 0x0);
GUEST_OFFSET(Local_0061eb20_ea_9, word_4, 0x4);

struct __attribute__((packed)) Local_0061eb20_r0_1 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_0061eb20_r0_1, float_0, 0x0);
GUEST_OFFSET(Local_0061eb20_r0_1, float_4, 0x4);
GUEST_OFFSET(Local_0061eb20_r0_1, float_8, 0x8);

struct __attribute__((packed)) Local_0061eb20_r0_4 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_0061eb20_r0_4, float_0, 0x0);
GUEST_OFFSET(Local_0061eb20_r0_4, float_4, 0x4);
GUEST_OFFSET(Local_0061eb20_r0_4, float_8, 0x8);

struct __attribute__((packed)) Local_0061eb20_r0_5 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_0061eb20_r0_5, float_0, 0x0);
GUEST_OFFSET(Local_0061eb20_r0_5, float_4, 0x4);
GUEST_OFFSET(Local_0061eb20_r0_5, float_8, 0x8);

inline guest::global<u32, 0x00881b44> global_00881b44;
inline guest::global<u32, 0x00881b48> global_00881b48;
inline guest::global<u32, 0x00881b58> global_00881b58;
inline guest::global<u32, 0x00881b84> global_00881b84;
inline constexpr guest::Function<0x002d57f4, u32(u32)> build_item_row;
inline constexpr guest::Function<0x00305f2c, u32(u32)> read_global_object_byte;
inline constexpr guest::Function<0x00308340, u32(u32, u32, u32, u32)> return_constant_0xac1948_;
inline constexpr guest::Function<0x00565c34, u32(u32)> random_around_zero;
inline constexpr guest::Function<0x005b5068, u32(u32)> reset_entry_24;
inline constexpr guest::Function<0x005b5b78, u32(u32, u32, u32, u32)> call_005b5b78;
inline constexpr guest::Function<0x005b5d60, u32(u32, u32, u32, u32)> call_005b5d60;
inline constexpr guest::Function<0x005c4234, u32(u32)> call_005c4234;
inline constexpr guest::Function<0x005c6580, u32(u32)> call_005c6580;

struct __attribute__((packed)) Frame_0061eb20 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not read or written by name)
    u32 word_10;
    u16 half_14;
    u16 half_16;
    u16 half_18;
    u8 unknown_1a[0x2];  // (not read or written by name)
    float float_1c;
    u8 unknown_20[0x4];  // (not read or written by name)
    u32 word_24;
    u32 word_28;
    u8 unknown_2c[0x8];  // (not read or written by name)
    u32 word_34;
    u8 unknown_38[0xc];  // (not read or written by name)
    u16 half_44;
    u8 unknown_46[0x6];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0061eb20, word_0, 0x0);
GUEST_OFFSET(Frame_0061eb20, word_4, 0x4);
GUEST_OFFSET(Frame_0061eb20, word_8, 0x8);
GUEST_OFFSET(Frame_0061eb20, word_10, 0x10);
GUEST_OFFSET(Frame_0061eb20, half_14, 0x14);
GUEST_OFFSET(Frame_0061eb20, half_16, 0x16);
GUEST_OFFSET(Frame_0061eb20, half_18, 0x18);
GUEST_OFFSET(Frame_0061eb20, float_1c, 0x1c);
GUEST_OFFSET(Frame_0061eb20, word_24, 0x24);
GUEST_OFFSET(Frame_0061eb20, word_28, 0x28);
GUEST_OFFSET(Frame_0061eb20, word_34, 0x34);
GUEST_OFFSET(Frame_0061eb20, half_44, 0x44);
GUEST_SIZE(Frame_0061eb20, 0x4c);

u32 f_0061eb20(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0061eb20> frame;  // the original's stack frame
    u32 r0_8 = 0;
    gptr<Local_0061eb20_r0_1> r0_1 = gptr<Local_0061eb20_r0_1>(frame.at(0x38).addr());  // (from the original)
    float S2_1 = 176.0f;
    float S1_1 = 0.0f;
    float S0_1 = 256.0f;
    r0_1->float_0 = S0_1;
    r0_1->float_4 = S1_1;
    r0_1->float_8 = S2_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    u32 r0_2 = return_constant_0xac1948_(r0_1.addr(), r1, r2, r3);
    reset_entry_24(r0_2);
    u32 r0_3 = read_global_object_byte(r0_2);
    if (r0_3 == 2u) {
        gptr<Local_0061eb20_r0_4> r0_4 = gptr<Local_0061eb20_r0_4>(frame.at(0x38).addr());  // (from the original)
        float S0_5 = r0_4->float_0;
        float S1_5 = r0_4->float_4;
        float S2_5 = r0_4->float_8;
        gptr<Local_0061eb20_r0_5> r0_5 = gptr<Local_0061eb20_r0_5>(frame.at(0x1c).addr());  // (from the original)
        r0_5->float_0 = S0_5;
        r0_5->float_4 = S1_5;
        r0_5->float_8 = S2_5;
        float S0_6 = 8.0f;
        guest::cpu()->s[0] = S0_6;
        guest::cpu()->s[1] = S1_5;
        guest::cpu()->s[2] = S2_5;
        u32 r0_6 = random_around_zero(r0_5.addr());
        float S0_7 = guest::cpu()->s[0];
        float S1_6 = frame->float_1c;
        float S0_8 = S0_7 + S1_6;
        frame->float_1c = S0_8;
        frame->half_14 = 0;
        frame->half_16 = 0;
        frame->half_18 = 0;
        guest::cpu()->s[0] = S0_8;
        guest::cpu()->s[1] = S1_6;
        u32 r0_7 = return_constant_0xac1948_(r0_6, guest::cpu()->r[1], 0u, guest::cpu()->r[3]);
        frame->word_4 = 0;
        gptr<Local_0061eb20_ea_2> ea_2 = gptr<Local_0061eb20_ea_2>(frame.at(8).addr());
        ea_2->word_0 = 0;
        ea_2->word_4 = 1;
        frame->word_10 = 1;
        frame->word_0 = *global_00881b58;
        r0_8 = call_005b5b78(r0_7, 0x67u, frame.at(0x1c).addr(), frame.at(0x14).addr());  // (from the original)
    } else {
        frame->half_44 = 0;
        u32 r0_9 = return_constant_0xac1948_(0u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        frame->word_28 = 0;
        gptr<Local_0061eb20_ea_4> ea_4 = gptr<Local_0061eb20_ea_4>(frame.at(0x2c).addr());  // (from the original)
        ea_4->word_0 = 0;
        ea_4->word_4 = 1;
        u32 r1_6 = frame.at(0x44).addr();  // (from the original)
        frame->word_34 = 1;
        gptr<Local_0061eb20_ea_6> ea_6 = gptr<Local_0061eb20_ea_6>(frame.at(0x1c).addr());  // (from the original)
        ea_6->word_0 = r1_6;
        ea_6->word_4 = 0xa22014;  // (from the original)
        frame->word_24 = r1_6;
        frame->word_8 = frame.at(0x38).addr();  // (from the original)
        gptr<Local_0061eb20_ea_9> ea_9 = gptr<Local_0061eb20_ea_9>(frame.at(0xc).addr());  // (from the original)
        ea_9->word_0 = r1_6;
        ea_9->word_4 = 0xa21ffc;  // (from the original)
        gptr<Local_0061eb20_ea_10> ea_10 = gptr<Local_0061eb20_ea_10>(frame.at(0x14).addr());  // (from the original)
        ea_10->word_0 = r1_6;
        ea_10->word_4 = 0xa22008;  // (from the original)
        u32 r2_6 = *global_00881b84;
        frame->word_0 = *global_00881b48;
        frame->word_4 = r2_6;
        call_005b5d60(r0_9, 0x67u, *global_00881b58, *global_00881b44);  // (from the original)
        u32 r0_10 = call_005c4234(0x95bfdcu);  // (from the original)
        r0_8 = call_005c6580(r0_10);
    }
    u32 r0_11 = build_item_row(r0_8);
    return r0_11;
}

}  // namespace d_0061eb20
GUEST_EXPORT_FRAMED(0x0061eb20, d_0061eb20::f_0061eb20, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0061ec88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061ec88 {

struct __attribute__((packed)) Object_0061ec88_0 {
    u8 byte_0;
    u8 byte_1;
    u8 unknown_2[0x3];  // (not used here)
    u8 byte_5;
    u8 unknown_6[0x13b];  // (not used here)
    u8 byte_141;
    u8 unknown_142[0x3];  // (not used here)
    u8 byte_145;
};
GUEST_OFFSET(Object_0061ec88_0, byte_0, 0x0);
GUEST_OFFSET(Object_0061ec88_0, byte_1, 0x1);
GUEST_OFFSET(Object_0061ec88_0, byte_5, 0x5);
GUEST_OFFSET(Object_0061ec88_0, byte_141, 0x141);
GUEST_OFFSET(Object_0061ec88_0, byte_145, 0x145);

inline guest::global<u32, 0x0095362c> global_0095362c;
inline constexpr guest::Function<0x0030b6c4, u32(u32)> main_object_idle;
inline constexpr guest::Function<0x0058d3b4, u32(u32, u32, u32, u32)> call_0058d3b4;
inline constexpr guest::Function<0x00623e70, u32(u32, u32, u32)> StationSet__refresh;
inline constexpr guest::Function<0x00624c68, u32(u32)> clear_flag_pair;
inline constexpr guest::Function<0x00624c78, u32(u32)> bit_for_index;
inline constexpr guest::Function<0x0075dfe8, u32(u32, u32, u32, u32)> NetSession__station;

void f_0061ec88(gptr<Object_0061ec88_0> arg0, u32 r1, u32 r2, float S0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_7 = 0;
    u32 r0_1 = *global_0095362c;
    u32 r0_2 = NetSession__station(r0_1, r1, r2, guest::cpu()->r[3]);
    arg0->byte_141 = 0;
    clear_flag_pair(arg0.addr() + 0x18u);  // (from the original)
    clear_flag_pair(arg0.addr() + 0x28u);  // (from the original)
    clear_flag_pair(arg0.addr() + 0x30u);  // (from the original)
    arg0->byte_1 = 2;
    u32 r0_6 = main_object_idle(2u);
    if (r0_6 == 0) {
        r0_7 = 0x4au;  // (from the original)
        arg0->byte_145 = 0;
    } else {
        StationSet__refresh(arg0.addr() + 0x14u, r0_2, 0u);  // (from the original)
        r0_7 = 0x45u;  // (from the original)
    }
    arg0->byte_0 = u8(r0_7);
    u32 r4_1 = arg0->byte_5;
    u32 r0_9 = bit_for_index(r0_2);
    if ((r0_9 & r4_1) != 0) {
        float S0_7 = 0.0f;
        guest::cpu()->s[0] = S0_7;
        frame.release();
        call_0058d3b4(0x10004afu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        return;  // (from the original)
    }
}

}  // namespace d_0061ec88
GUEST_EXPORT(0x0061ec88, d_0061ec88::f_0061ec88);

// f_0061ee60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061ee60 {

struct __attribute__((packed)) Object_0061ee60_0 {
    u8 unknown_0[0x50];  // (not used here)
    u32 word_50;
};
GUEST_OFFSET(Object_0061ee60_0, word_50, 0x50);


void f_0061ee60(gptr<Object_0061ee60_0> arg0) {
    u32 r1_1 = arg0->word_50;
    if (r1_1 > 0x96u) {  // (from the original)
        r1_1 = 0x96u;  // (from the original)
    }
    arg0->word_50 = r1_1;
}

}  // namespace d_0061ee60
GUEST_EXPORT(0x0061ee60, d_0061ee60::f_0061ee60);

// f_0061f2a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061f2a0 {

struct __attribute__((packed)) Object_0061f2a0_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_0061f2a0_0, byte_0, 0x0);

inline guest::global<u32, 0x0095362c> global_0095362c;
inline constexpr guest::Function<0x00300904, u32(u32)> main_object_value;
inline constexpr guest::Function<0x00305f2c, u32(u32)> read_global_object_byte;
inline constexpr guest::Function<0x00618b9c, u32(u32, u32)> call_00618b9c;

u32 f_0061f2a0(gptr<Object_0061f2a0_0> arg0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = main_object_value(arg0.addr());
    if (r0_1 == 0) {
        return 0u;
    }
    u32 r0_2 = read_global_object_byte(r0_1);
    if (r0_2 != 2u) {
        return 0u;
    }
    if (arg0->byte_0 == 0) {
        u32 r0_3 = *global_0095362c;
        frame.release();
        return call_00618b9c(r0_3, guest::cpu()->r[1]);
    }
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
    u8 unknown_70[0xca];  // (not used here)
    u16 half_13a;
    u8 unknown_13c[0x1];  // (not used here)
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
GUEST_OFFSET(Object_0061f3f8_0, byte_0, 0x0);
GUEST_OFFSET(Object_0061f3f8_0, byte_2, 0x2);
GUEST_OFFSET(Object_0061f3f8_0, byte_3, 0x3);
GUEST_OFFSET(Object_0061f3f8_0, byte_4, 0x4);
GUEST_OFFSET(Object_0061f3f8_0, byte_44, 0x44);
GUEST_OFFSET(Object_0061f3f8_0, word_4c, 0x4c);
GUEST_OFFSET(Object_0061f3f8_0, word_50, 0x50);
GUEST_OFFSET(Object_0061f3f8_0, word_58, 0x58);
GUEST_OFFSET(Object_0061f3f8_0, word_5c, 0x5c);
GUEST_OFFSET(Object_0061f3f8_0, word_60, 0x60);
GUEST_OFFSET(Object_0061f3f8_0, word_64, 0x64);
GUEST_OFFSET(Object_0061f3f8_0, word_68, 0x68);
GUEST_OFFSET(Object_0061f3f8_0, word_6c, 0x6c);
GUEST_OFFSET(Object_0061f3f8_0, half_13a, 0x13a);
GUEST_OFFSET(Object_0061f3f8_0, byte_13d, 0x13d);
GUEST_OFFSET(Object_0061f3f8_0, byte_13e, 0x13e);
GUEST_OFFSET(Object_0061f3f8_0, byte_13f, 0x13f);
GUEST_OFFSET(Object_0061f3f8_0, byte_140, 0x140);
GUEST_OFFSET(Object_0061f3f8_0, byte_141, 0x141);
GUEST_OFFSET(Object_0061f3f8_0, byte_142, 0x142);
GUEST_OFFSET(Object_0061f3f8_0, byte_146, 0x146);
GUEST_OFFSET(Object_0061f3f8_0, byte_147, 0x147);

inline constexpr guest::Function<0x00624c68, u32(u32)> clear_flag_pair;

void f_0061f3f8(gptr<Object_0061f3f8_0> arg0) {
    arg0->byte_0 = 0;
    clear_flag_pair(arg0.addr() + 0x18u);  // (from the original)
    clear_flag_pair(arg0.addr() + 0x20u);  // (from the original)
    clear_flag_pair(arg0.addr() + 0x28u);  // (from the original)
    clear_flag_pair(arg0.addr() + 0x30u);  // (from the original)
    arg0->byte_2 = 0xff;  // (from the original)
    arg0->byte_3 = 4;
    arg0->byte_4 = 4;
    clear_flag_pair(arg0.addr() + 5u);
    clear_flag_pair(arg0.addr() + 7u);
    clear_flag_pair(arg0.addr() + 0x10u);  // (from the original)
    clear_flag_pair(arg0.addr() + 0x38u);  // (from the original)
    clear_flag_pair(arg0.addr() + 0x40u);  // (from the original)
    arg0->byte_44 = 3;
    arg0->byte_140 = 0;
    arg0->byte_141 = 0;
    arg0->byte_142 = 0;
    arg0->word_60 = 0;
    arg0->word_64 = 0;
    arg0->word_68 = 0;
    arg0->word_6c = 0;
    clear_flag_pair(arg0.addr() + 0x70u);  // (from the original)
    arg0->byte_146 = 0;
    arg0->word_4c = 0;
    arg0->word_50 = 0;
    arg0->word_58 = 0;
    arg0->word_5c = 0;
    arg0->half_13a = 0;
    arg0->byte_13d = 0;
    arg0->byte_13e = 0;
    arg0->byte_13f = 0;
    arg0->byte_147 = 0;
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
    u8 unknown_5[0x7];  // (not used here)
    u32 word_c;
    u8 unknown_10[0x4];  // (not used here)
    u32 word_14;
    u8 unknown_18[0x4];  // (not used here)
    u32 word_1c;
    u8 unknown_20[0x4];  // (not used here)
    u32 word_24;
    u8 unknown_28[0x4];  // (not used here)
    u32 word_2c;
    u8 unknown_30[0x4];  // (not used here)
    u32 word_34;
    u8 unknown_38[0x4];  // (not used here)
    u32 word_3c;
    u8 unknown_40[0x4];  // (not used here)
    u8 byte_44;
    u8 unknown_45[0x3];  // (not used here)
    u32 word_48;
    u32 word_4c;
    u32 word_50;
    u32 word_54;
    u32 word_58;
    u32 word_5c;
};
GUEST_OFFSET(Object_0061f4c0_0, byte_0, 0x0);
GUEST_OFFSET(Object_0061f4c0_0, byte_1, 0x1);
GUEST_OFFSET(Object_0061f4c0_0, byte_2, 0x2);
GUEST_OFFSET(Object_0061f4c0_0, byte_3, 0x3);
GUEST_OFFSET(Object_0061f4c0_0, byte_4, 0x4);
GUEST_OFFSET(Object_0061f4c0_0, word_c, 0xc);
GUEST_OFFSET(Object_0061f4c0_0, word_14, 0x14);
GUEST_OFFSET(Object_0061f4c0_0, word_1c, 0x1c);
GUEST_OFFSET(Object_0061f4c0_0, word_24, 0x24);
GUEST_OFFSET(Object_0061f4c0_0, word_2c, 0x2c);
GUEST_OFFSET(Object_0061f4c0_0, word_34, 0x34);
GUEST_OFFSET(Object_0061f4c0_0, word_3c, 0x3c);
GUEST_OFFSET(Object_0061f4c0_0, byte_44, 0x44);
GUEST_OFFSET(Object_0061f4c0_0, word_48, 0x48);
GUEST_OFFSET(Object_0061f4c0_0, word_4c, 0x4c);
GUEST_OFFSET(Object_0061f4c0_0, word_50, 0x50);
GUEST_OFFSET(Object_0061f4c0_0, word_54, 0x54);
GUEST_OFFSET(Object_0061f4c0_0, word_58, 0x58);
GUEST_OFFSET(Object_0061f4c0_0, word_5c, 0x5c);

struct __attribute__((packed)) Local_0061f4c0_r0_13 {
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
GUEST_OFFSET(Local_0061f4c0_r0_13, byte_13c, 0x13c);
GUEST_OFFSET(Local_0061f4c0_r0_13, byte_13d, 0x13d);
GUEST_OFFSET(Local_0061f4c0_r0_13, byte_13e, 0x13e);
GUEST_OFFSET(Local_0061f4c0_r0_13, byte_13f, 0x13f);
GUEST_OFFSET(Local_0061f4c0_r0_13, byte_140, 0x140);
GUEST_OFFSET(Local_0061f4c0_r0_13, byte_141, 0x141);
GUEST_OFFSET(Local_0061f4c0_r0_13, byte_142, 0x142);
GUEST_OFFSET(Local_0061f4c0_r0_13, byte_143, 0x143);
GUEST_OFFSET(Local_0061f4c0_r0_13, byte_144, 0x144);
GUEST_OFFSET(Local_0061f4c0_r0_13, byte_145, 0x145);
GUEST_OFFSET(Local_0061f4c0_r0_13, byte_146, 0x146);
GUEST_OFFSET(Local_0061f4c0_r0_13, byte_147, 0x147);
GUEST_OFFSET(Local_0061f4c0_r0_13, byte_148, 0x148);

inline constexpr u32 vtable_netgame__ConfirmMachine = 0x0090ac18u;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x00624c90, u32(u32, u32, u32, u32)> clear_flag_pair_b;

u32 netgame__ConfirmMachine__ConfirmMachine_0061f4c0(gptr<Object_0061f4c0_0> arg0) {
    arg0->byte_0 = 0;
    arg0->byte_1 = 2;
    arg0->byte_2 = 0xff;  // (from the original)
    arg0->byte_3 = 4;
    arg0->byte_4 = 4;
    u32 r0_1 = arg0.addr() + 5u;
    clear_flag_pair_b(r0_1, 4u, 0xffu, 2u);  // (from the original)
    u32 r0_2 = r0_1 + 2u;
    clear_flag_pair_b(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_3 = r0_2 + 9u;
    clear_flag_pair_b(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    arg0->word_c = vtable_netgame__ConfirmMachine;
    u32 r0_4 = r0_3 + 8u;
    clear_flag_pair_b(r0_4, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    arg0->word_14 = vtable_netgame__ConfirmMachine;
    u32 r0_5 = r0_4 + 8u;
    clear_flag_pair_b(r0_5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    arg0->word_1c = vtable_netgame__ConfirmMachine;
    u32 r0_6 = r0_5 + 8u;
    clear_flag_pair_b(r0_6, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    arg0->word_24 = vtable_netgame__ConfirmMachine;
    u32 r0_7 = r0_6 + 8u;
    clear_flag_pair_b(r0_7, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    arg0->word_2c = vtable_netgame__ConfirmMachine;
    u32 r0_8 = r0_7 + 8u;
    clear_flag_pair_b(r0_8, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    arg0->word_34 = vtable_netgame__ConfirmMachine;
    u32 r0_9 = r0_8 + 8u;
    clear_flag_pair_b(r0_9, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    arg0->word_3c = vtable_netgame__ConfirmMachine;
    arg0->byte_44 = 3;
    arg0->word_48 = 0;
    arg0->word_4c = 0;
    arg0->word_50 = 0;
    arg0->word_54 = 0;
    arg0->word_58 = 0;
    arg0->word_5c = 0;
    u32 r0_10 = r0_9 + 0x30u;  // (from the original)
    clear_flag_pair_b(r0_10, 3u, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_12 = for_each_element(r0_10 + 2u, 0x29b870u, 0x32u, 4u);  // (from the original)
    gptr<Local_0061f4c0_r0_13> r0_13 = gptr<Local_0061f4c0_r0_13>(r0_12 - 0x72u);  // (from the original)
    *gptr<u16>(r0_13.addr() + 0x13au) = 0;  // (from the original)
    r0_13->byte_13c = 0;
    r0_13->byte_13d = 0;
    r0_13->byte_13e = 0;
    r0_13->byte_13f = 0;
    r0_13->byte_140 = 0;
    r0_13->byte_141 = 0;
    r0_13->byte_142 = 0;
    r0_13->byte_143 = 0;
    r0_13->byte_144 = 0;
    r0_13->byte_145 = 0;
    r0_13->byte_146 = 0;
    r0_13->byte_147 = 0;
    r0_13->byte_148 = 0;
    guest::cpu()->r[1] = 0x13au;  // (from the original)
    return r0_13.addr();
}

}  // namespace d_0061f4c0
GUEST_EXPORT_FRAMED(0x0061f4c0, d_0061f4c0::netgame__ConfirmMachine__ConfirmMachine_0061f4c0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0061f608: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061f608 {

struct __attribute__((packed)) Object_0061f608_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_0061f608_0, word_0, 0x0);
GUEST_OFFSET(Object_0061f608_0, word_4, 0x4);
GUEST_OFFSET(Object_0061f608_0, word_8, 0x8);

struct __attribute__((packed)) Object_0061f608_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_0061f608_1, word_0, 0x0);

inline constexpr guest::Function<0x0050d1b4, u32(u32, u32, u32)> call_0050d1b4;
inline constexpr guest::Function<0x0061f6a0, u32(u32, u32)> call_0061f6a0;
inline constexpr guest::Function<0x00746efc, u32(u32)> call_00746efc;
inline constexpr guest::Function<0x00746f8c, u32(u32, u32, u32, u32)> UnknownStateA22020__flag_144_without_flag_30;

u32 f_0061f608(gptr<Object_0061f608_0> arg0, gptr<Object_0061f608_1> arg1, u32 r2) {
    u32 r1 = arg1.addr();
    u32 r0_4 = 0;
    u32 r0_1 = arg1->word_0;
    u32 r5_1 = r1;
    u32 zf_1 = r0_1 == 0;
    if (!zf_1) {
        r1 = arg0->word_0;
        zf_1 = r1 == r0_1;
    }
    if (!zf_1) {
        r1 = arg0->word_4;
        u32 zf_2 = r1 == r0_1;
        if (!zf_2) {
            r1 = arg0->word_8;
            zf_2 = r1 == r0_1;
        }
        if (!zf_2) {
            u32 r0_2 = UnknownStateA22020__flag_144_without_flag_30(0xa22020u, r1, r2, guest::cpu()->r[3]);  // (from the original)
            if (r0_2 != 0) {
                u32 r0_3 = call_00746efc(0xa22020u);  // (from the original)
                if (r0_3 >= 2u) {
                    return 0u;
                }
            }
            r0_4 = call_0050d1b4(0xa22020u, r5_1, r2);  // (from the original)
            if (r0_4 != 0) {
                call_0061f6a0(arg0.addr(), r5_1);
                r0_4 = 1u;
            }
            return r0_4;
        }
    }
    guest::cpu()->r[1] = r1;
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
GUEST_OFFSET(Object_0061f6a0_0, word_0, 0x0);
GUEST_OFFSET(Object_0061f6a0_0, word_4, 0x4);
GUEST_OFFSET(Object_0061f6a0_0, word_8, 0x8);

struct __attribute__((packed)) Object_0061f6a0_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_0061f6a0_1, word_0, 0x0);

struct __attribute__((packed)) Local_0061f6a0_r0_4 {
    u32 word_0;
    u16 half_4;
    u16 half_6;
};
GUEST_OFFSET(Local_0061f6a0_r0_4, word_0, 0x0);
GUEST_OFFSET(Local_0061f6a0_r0_4, half_4, 0x4);
GUEST_OFFSET(Local_0061f6a0_r0_4, half_6, 0x6);

inline guest::global<u32, 0x0095362c> global_0095362c;
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> query_current_main_object;
inline constexpr guest::Function<0x0075f4d4, u32(u32, u32, u32, u32)> entry_in_use;

struct __attribute__((packed)) Frame_0061f6a0 {
    u32 word_0;
};
GUEST_OFFSET(Frame_0061f6a0, word_0, 0x0);
GUEST_SIZE(Frame_0061f6a0, 0x4);

void f_0061f6a0(gptr<Object_0061f6a0_0> arg0, gptr<Object_0061f6a0_1> arg1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0061f6a0> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    frame->word_0 = r3;
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
    if (r1 != 0) {
        if (r2 == 0) {
            r10 = 1u;
            *gptr<u32>(r7 + (r10 << 2)) = *gptr<u32>(r8);
            guest::cpu()->r[1] = r1;
            return;
        }
        if (r3_1 != 0) {
            u32 r0_2 = query_current_main_object(r0_1, r1, r2, r3_1);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_2 < 4u) {
                u32 r9 = 0x88f298u;  // (from the original)
                u32 r6 = 0u;
                frame->word_0 = *global_0095362c + 0xb0u;  // (from the original)
L_61f71c:;
                u32 r5 = gptr<u32>(r7)[r6];
                if (r5 != 0) {
                    u32 r4 = 0u;
                    do {
                        u32 r0_3 = frame->word_0;
                        gptr<Local_0061f6a0_r0_4> r0_4 = gptr<Local_0061f6a0_r0_4>(entry_in_use(r0_3, r4 & 0xffu, r2, r3));  // (from the original)
                        r1 = guest::cpu()->r[1];
                        r2 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
                        u32 zf_2 = r0_4.addr() == 0;
                        if (!zf_2) {
                            r1 = r0_4->word_0;
                            zf_2 = r1 == 0;
                        }
                        if (!zf_2) {
                            r2 = r0_4->half_4;
                            r3 = *gptr<u16>(r9);
                            if (r2 != r3 && r0_4->half_6 != 0 && r1 == r5) {
                                r6 += 1u;
                                if (r6 < 3u) {
                                    guest::preempt();
                                    goto L_61f71c;
                                }
                                goto L_61f788;
                            }
                        }
                        r4 += 1u;
                        guest::preempt();
                    } while (s32(r4) < 4);
                    *gptr<u32>(r7 + (r6 << 2)) = r10;
                }
            }
L_61f788:;
            if (*gptr<u32>(r7) == 0) {
                *gptr<u32>(r7 + (r10 << 2)) = *gptr<u32>(r8);
                guest::cpu()->r[1] = r1;
                return;
            }
            if (*gptr<u32>(r7 + 4u) == 0) {
                r10 = 1u;
                *gptr<u32>(r7 + (r10 << 2)) = *gptr<u32>(r8);
                guest::cpu()->r[1] = r1;
                return;
            }
            if (*gptr<u32>(r7 + 8u) != 0) {
                guest::cpu()->r[1] = r1;
                return;
            }
        }
        r10 = r11;
    }
    *gptr<u32>(r7 + (r10 << 2)) = *gptr<u32>(r8);
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0061f6a0
GUEST_EXPORT_FRAMED(0x0061f6a0, d_0061f6a0::f_0061f6a0, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_0061fc98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061fc98 {

struct __attribute__((packed)) Object_0061fc98_0 {
    u8 unknown_0[0x11ae8];  // (not used here)
    u8 byte_11ae8;
    u8 byte_11ae9;
};
GUEST_OFFSET(Object_0061fc98_0, byte_11ae8, 0x11ae8);
GUEST_OFFSET(Object_0061fc98_0, byte_11ae9, 0x11ae9);

inline constexpr guest::Function<0x0050d0c4, u32(u32, u32, u32, u32)> call_0050d0c4;

struct __attribute__((packed)) Frame_0061fc98 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Frame_0061fc98, word_0, 0x0);
GUEST_OFFSET(Frame_0061fc98, word_4, 0x4);
GUEST_SIZE(Frame_0061fc98, 0x8);

u32 f_0061fc98(gptr<Object_0061fc98_0> arg0) {
    guest::StackFrameOf<Frame_0061fc98> frame;  // the original's stack frame
    u32 r5_1 = arg0.addr() + 0x11ae8u;  // (from the original)
    arg0->byte_11ae8 = 1;
    frame->word_0 = 1;
    frame->word_4 = 0;
    u32 r0_1 = call_0050d0c4(0xa22020u, arg0.addr() + 0x11950u, 0x64u, arg0.addr() + 0x11ae4u);  // (from the original)
    u32 r1_2 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        arg0->byte_11ae8 = 0;
        r1_2 = arg0.addr() - 0xfffee517u;  // (from the original)
        arg0->byte_11ae9 = 0;
    }
    guest::cpu()->r[1] = r1_2;
    return r0_1;
}

}  // namespace d_0061fc98
GUEST_EXPORT_FRAMED(0x0061fc98, d_0061fc98::f_0061fc98, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0061fd68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0061fd68 {

inline guest::global<u32, 0x0095362c> global_0095362c;
inline constexpr guest::Function<0x00622fe4, u32(u32, u32)> call_00622fe4;
inline constexpr guest::Function<0x00627d44, u32(u32, u32, u32)> PacketBuffer__append;
inline constexpr guest::Function<0x00627f74, u32(u32)> PacketBuffer__reserve_record;
inline constexpr guest::Function<0x0062801c, u32(u32, u32, u32)> PacketBuffer__flush_record;
inline constexpr guest::Function<0x0075dfe8, u32(u32, u32, u32, u32)> NetSession__station;

u32 f_0061fd68(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x20);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r0_2 = NetSession__station(*global_0095362c, r1, r2, r3);
    if (r0_2 == 0) {
        u32 r0_3 = *global_0095362c + 0x7880u;  // (from the original)
        frame.release();
        return call_00622fe4(r0_3, r0);
    }
    *frame.at<u16>(0) = u16(1u | r0 << 8);
    if (u32(1)) {
        u32 r7_1 = *global_0095362c + 0x10u;  // (from the original)
        PacketBuffer__reserve_record(r7_1);
        PacketBuffer__append(r7_1, frame.at(0).addr(), 2u);
        PacketBuffer__flush_record(r7_1, 0x30u, 0u);  // (from the original)
    }
    return 1u;
}

}  // namespace d_0061fd68
GUEST_EXPORT(0x0061fd68, d_0061fd68::f_0061fd68);
