// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "item/item.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_006b04f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Loads the passport window's and the keyboard's layout archives; true when both loaded.
namespace d_006b04f0 {

inline constexpr guest::Function<0x00567e24, u32(u32, u32, u32, u32)> load_layout_archive;

u32 PassportWindow__load_layouts(u32 passport_window) {
    u32 r0_2 = load_layout_archive(passport_window + 0x2cu, 0x6b0524u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    if (r0_2 == 0) {
        return r0_2;
    }
    u32 r0_4 = load_layout_archive(passport_window + 0x274u, 0x6b0540u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    if (r0_4 != 0) {
        r0_4 = 1u;
    }
    return r0_4;
}

}  // namespace d_006b04f0
GUEST_EXPORT_FRAMED(0x006b04f0, d_006b04f0::PassportWindow__load_layouts, 0x4010);  // pushes {r4, lr} first, as the original

// f_006b0824: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006b0824 {

struct __attribute__((packed)) Local_006b0824_r1_29 {
    u8 unknown_0[0x33c];  // (not used here)
    u32 word_33c;
    u32 word_340;
    u32 word_344;
    u32 word_348;
    u32 word_34c;
    u32 word_350;
    u32 word_354;
    u8 byte_358;
    u8 byte_359;
    u8 byte_35a;
    u8 byte_35b;
};
GUEST_OFFSET(Local_006b0824_r1_29, word_33c, 0x33c);
GUEST_OFFSET(Local_006b0824_r1_29, word_340, 0x340);
GUEST_OFFSET(Local_006b0824_r1_29, word_344, 0x344);
GUEST_OFFSET(Local_006b0824_r1_29, word_348, 0x348);
GUEST_OFFSET(Local_006b0824_r1_29, word_34c, 0x34c);
GUEST_OFFSET(Local_006b0824_r1_29, word_350, 0x350);
GUEST_OFFSET(Local_006b0824_r1_29, word_354, 0x354);
GUEST_OFFSET(Local_006b0824_r1_29, byte_358, 0x358);
GUEST_OFFSET(Local_006b0824_r1_29, byte_359, 0x359);
GUEST_OFFSET(Local_006b0824_r1_29, byte_35a, 0x35a);
GUEST_OFFSET(Local_006b0824_r1_29, byte_35b, 0x35b);

inline constexpr u32 vtable_BadgeExplainWindow = 0x008f2db4u;
inline constexpr u32 vtable_SimpleCommentWindow = 0x008f428cu;
inline constexpr u32 vtable_Passport = 0x008f8c84u;
inline constexpr u32 vtable_Passport_at_24 = 0x008f8cb8u;
inline constexpr u32 vtable_state__Mode_Passport_ = 0x009081ecu;
inline constexpr u32 vtable_script__WordFix_33u_ = 0x00909f18u;
inline guest::global<u32, 0x00881828> global_00881828;
inline guest::global<u32, 0x0088182c> global_0088182c;
inline constexpr guest::Function<0x001207d8, u32(u32, u32, u32)> ssys__ma__lyt__ArcResAcc__ArcResAcc_001207d8;
inline constexpr guest::Function<0x00125aec, u32(u32)> construct_layout_animation;
inline constexpr guest::Function<0x00125e3c, u32(u32)> Layout__Layout;
inline constexpr guest::Function<0x0022c7c8, u32(u32)> InOutWindow__InOutWindow_0022c7c8;
inline constexpr guest::Function<0x002b6de0, u32(u32, u32)> construct_button_node;
inline constexpr guest::Function<0x002b7c68, u32(u32, u32, u32)> construct_animation_pair;
inline constexpr guest::Function<0x002bc928, u32(u32, u32, u32, u32)> SoPaCaWindowBase__SoPaCaWindowBase;
inline constexpr guest::Function<0x002f7604, u32(u32)> construct_button_action_control;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32)> script__construct_word_ptr;
inline constexpr guest::Function<0x005245bc, u32(u32)> clear_fields_5245bc;
inline constexpr guest::Function<0x005d6fac, u32(u32, u32, u32)> script__RenderRuby__RenderRuby_005d6fac;
inline constexpr guest::Function<0x005e3128, u32(u32, u32)> script__RenderTrace__RenderTrace;
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32)> construct_script_word;

u32 state__Mode_Passport___Mode(gptr<Passport> passport) {
    u32 r0 = passport.addr();
    u32 res_1 = 0;
    u32 r5 = 0u;
    passport->word_4 = r5;
    passport->byte_8 = u8(r5);
    u32 r2_1 = *global_0088182c;
    passport->word_c = *global_00881828;
    passport->word_10 = r2_1;
    passport->word_14 = r5;
    passport->vtable = vtable_state__Mode_Passport_;
    passport->byte_18 = u8(r5);
    passport->word_1c = r5;
    passport->word_20 = r5;
    u32 so_pa_ca_window_base = (r0 + 0x20u) + 4u;  // (from the original)
    SoPaCaWindowBase__SoPaCaWindowBase(so_pa_ca_window_base, vtable_state__Mode_Passport_, r2_1, r0 + 0xcu);  // (from the original)
    passport->vtable = vtable_Passport;
    passport->passport_vtable = vtable_Passport_at_24;
    u32 r0_3 = ssys__ma__lyt__ArcResAcc__ArcResAcc_001207d8(so_pa_ca_window_base + 8u, vtable_Passport, vtable_Passport_at_24);
    u32 r0_5 = ssys__ma__lyt__ArcResAcc__ArcResAcc_001207d8(r0_3 + 0x248u, guest::cpu()->r[1], guest::cpu()->r[2]);  // (from the original)
    u32 r0_7 = Layout__Layout(r0_5 + 0x248u);  // (from the original)
    u32 r0_8 = r0_7 + 0x14cu;  // (from the original)
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
    u32 r0_14 = r0_13 + 0x28u;  // (from the original)
    construct_layout_animation(r0_14);
    u32 r0_15 = r0_14 + 0x28u;  // (from the original)
    construct_layout_animation(r0_15);
    u32 r0_16 = r0_15 + 0x28u;  // (from the original)
    construct_layout_animation(r0_16);
    u32 r0_17 = r0_16 + 0x28u;  // (from the original)
    construct_layout_animation(r0_17);
    u32 r0_19 = Layout__Layout(r0_17 + 0x28u);  // (from the original)
    u32 r0_20 = r0_19 + 0x14cu;  // (from the original)
    construct_layout_animation(r0_20);
    u32 r0_21 = r0_20 + 0x28u;  // (from the original)
    construct_layout_animation(r0_21);
    u32 r0_22 = r0_21 + 0x28u;  // (from the original)
    construct_layout_animation(r0_22);
    u32 r0_23 = r0_22 + 0x28u;  // (from the original)
    construct_layout_animation(r0_23);
    u32 r0_24 = r0_23 + 0x28u;  // (from the original)
    construct_layout_animation(r0_24);
    u32 r0_25 = r0_24 + 0x28u;  // (from the original)
    construct_layout_animation(r0_25);
    u32 r0_26 = r0_25 + 0x28u;  // (from the original)
    construct_layout_animation(r0_26);
    u32 r0_28 = InOutWindow__InOutWindow_0022c7c8(r0_26 + 0x28u);  // (from the original)
    *gptr<u32>(r0_28) = vtable_BadgeExplainWindow;
    *gptr<u32>(r0_28 + 0x204u) = r5;  // (from the original)
    *gptr<u32>(r0_28 + 0x208u) = r5;  // (from the original)
    *gptr<u32>(r0_28 + 0x20cu) = r5;  // (from the original)
    u32 ea_5 = r0_28 + 0x210u;  // (from the original)
    *gptr<u32>(ea_5) = r5;
    u32 r0_30 = script__RenderTrace__RenderTrace(ea_5 + 4u, 0x1eu);  // (from the original)
    u32 r0_32 = script__RenderRuby__RenderRuby_005d6fac(r0_30 + 0xc4u, 0x6fu, 0xau);  // (from the original)
    u32 r0_33 = r0_32 + 0x100u;  // (from the original)
    construct_animation_pair(r0_33, guest::cpu()->r[1], guest::cpu()->r[2]);
    u32 r0_35 = InOutWindow__InOutWindow_0022c7c8(r0_33 + 0x5cu);  // (from the original)
    *gptr<u32>(r0_35) = vtable_SimpleCommentWindow;
    u32 r0_36 = r0_35 + 0x204u;  // (from the original)
    construct_button_node(r0_36, vtable_SimpleCommentWindow);
    u32 r0_37 = r0_36 + 0xe0u;  // (from the original)
    construct_button_action_control(r0_37);
    u32 r0_39 = script__RenderTrace__RenderTrace(r0_37 + 0xe4u, 0x21u);  // (from the original)
    u32 r0_40 = r0_39 + 0xc4u;  // (from the original)
    clear_fields_5245bc(r0_40);
    u32 r0_41 = r0_40 + 0x10u;  // (from the original)
    script__construct_word_ptr(r0_41, r0_41 + 0x18u, 0x21u);  // (from the original)
    *gptr<u32>(r0_41) = vtable_script__WordFix_33u_;
    u32 r0_42 = r0_41 + 0xcu;  // (from the original)
    construct_script_word(r0_42, vtable_script__WordFix_33u_);
    u32 r4 = r0_42 - 0xcu;  // (from the original)
    clear_aligned(r0_42 + 0xcu, 0x42u);  // (from the original)
    u32 r2 = 0x8906ecu;  // (from the original)
    r0 = r4 + 0x18u;  // (from the original)
    *gptr<u16>(r4 + 0x18u) = *gptr<u16>(r2);  // (from the original)
    u32 r1 = 0x10u;  // (from the original)
    do {
        u32 r3_35 = *gptr<u16>(r2);
        res_1 = r1 - 1u;
        r1 = res_1;
        *gptr<u16>(r0 + 2u) = u16(r3_35);
        u32 r3_36 = *gptr<u16>(r2);
        u32 ea_7 = r0 + 4u;
        *gptr<u16>(ea_7) = u16(r3_36);
        r0 = ea_7;
        guest::preempt();
    } while (res_1 != 0);
    *gptr<u8>(r4 + 0x5cu) = 1;  // (from the original)
    u32 r0_45 = for_each_element(r4 + 0x60u, 0x2b6de0u, 0xe0u, 1u);  // (from the original)
    u32 r0_46 = r0_45 + 0xe0u;  // (from the original)
    construct_button_action_control(r0_46);
    u32 r0_48 = for_each_element(r0_46 + 0xe4u, 0x2b6de0u, 0xe0u, 1u);  // (from the original)
    u32 r0_49 = r0_48 + 0xe0u;  // (from the original)
    construct_button_action_control(r0_49);
    u32 r0_50 = r0_49 - 0x15d0u;  // (from the original)
    *gptr<u32>(r0_50 + 0x16b4u) = 0x19;  // (from the original)
    *gptr<u32>((0x16b4u ^ u32(s32(0x19u) >> 1)) + r0_50) = 0x19;  // (from the original)
    u32 r0_52 = for_each_element(r0_50 + 0x16bcu, 0x6ce60cu, 0x330u, 0x18u);  // (from the original)
    u32 r0_53 = r0_52 - 0x16bcu;  // (from the original)
    gptr<Local_006b0824_r1_29> r1_29 = gptr<Local_006b0824_r1_29>(r0_53 + 0x6000u);  // (from the original)
    r1_29->word_33c = r5;
    r1_29->word_340 = r5;
    r1_29->word_344 = r5;
    r1_29->word_348 = r5;
    r1_29->word_34c = r5;
    r1_29->word_350 = r5;
    r1_29->word_354 = r5;
    r1_29->byte_358 = u8(r5);
    r1_29->byte_359 = u8(r5);
    r1_29->byte_35a = u8(r5);
    r1_29->byte_35b = u8(r5);
    *gptr<u32>(r0_53 + 0x635cu) = r5;  // (from the original)
    u32 r0_54 = r0_53 + 0x6360u;  // (from the original)
    construct_animation_pair(r0_54, r1_29.addr(), r0_53);
    u32 r0_55 = r0_54 + 0x5cu;  // (from the original)
    construct_animation_pair(r0_55, guest::cpu()->r[1], guest::cpu()->r[2]);
    u32 r0_57 = script__RenderTrace__RenderTrace(r0_55 + 0x5cu, 0x3cu);  // (from the original)
    u32 r0_59 = script__RenderTrace__RenderTrace(r0_57 + 0xc4u, 0x28u);  // (from the original)
    u32 r0_61 = script__RenderTrace__RenderTrace(r0_59 + 0xc4u, 0x19u);  // (from the original)
    u32 r0_63 = script__RenderTrace__RenderTrace(r0_61 + 0xc4u, 0x28u);  // (from the original)
    u32 r0_65 = script__RenderTrace__RenderTrace(r0_63 + 0xc4u, 0x14u);  // (from the original)
    u32 r0_67 = script__RenderTrace__RenderTrace(r0_65 + 0xc4u, 0x14u);  // (from the original)
    u32 r0_69 = script__RenderTrace__RenderTrace(r0_67 + 0xc4u, 0x28u);  // (from the original)
    u32 r0_71 = script__RenderTrace__RenderTrace(r0_69 + 0xc4u, 0x1eu);  // (from the original)
    u32 r0_73 = script__RenderTrace__RenderTrace(r0_71 + 0xc4u, 0x1eu);  // (from the original)
    return r0_73 - 0x6a38u;  // (from the original)
}

}  // namespace d_006b0824
GUEST_EXPORT_FRAMED(0x006b0824, d_006b0824::state__Mode_Passport___Mode, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006b0b74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006b0b74 {

inline constexpr u32 vtable_BadgeExplainWindow = 0x008f2db4u;
inline constexpr u32 vtable_SimpleCommentWindow = 0x008f428cu;
inline constexpr u32 vtable_Passport = 0x008f8c84u;
inline constexpr u32 vtable_Passport_at_24 = 0x008f8cb8u;
inline constexpr u32 vtable_script__WordFix_33u_ = 0x00909f18u;
inline constexpr guest::Function<0x0022c87c, u32(u32)> ExplainWindow__destructor;
inline constexpr guest::Function<0x002b6ef8, u32(u32)> ButtonActionNode__destructor;
inline constexpr guest::Function<0x002b7c94, u32(u32, u32)> destroy_animation_pair;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;
inline constexpr guest::Function<0x002f7710, u32(u32)> destroy_button_action_control;
inline constexpr guest::Function<0x00567ef0, u32(u32)> ssys__ma__lyt__ArcResAccReader__destructor;
inline constexpr guest::Function<0x0056988c, u32(u32)> destroy_animation;
inline constexpr guest::Function<0x005bf744, u32(u32)> Layout__destructor;
inline constexpr guest::Function<0x005d703c, u32(u32)> script__MsgEngine__MsgEngine_005d703c;
inline constexpr guest::Function<0x005e3194, u32(u32, u32, u32, u32)> script__RenderMain__RenderMain_005e3194;

u32 Passport__virtual_0_006b0b74(gptr<Passport> passport, u32 r1_unused, u32 r2_unused, u32 r3) {
    passport->vtable = vtable_Passport;
    passport->passport_vtable = vtable_Passport_at_24;
    u32 r0_1 = passport.addr() + 0x6a38u;  // (from the original)
    script__RenderMain__RenderMain_005e3194(r0_1, vtable_Passport, vtable_Passport_at_24, r3);
    u32 r0_2 = r0_1 - 0xc4u;  // (from the original)
    script__RenderMain__RenderMain_005e3194(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_3 = r0_2 - 0xc4u;  // (from the original)
    script__RenderMain__RenderMain_005e3194(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_4 = r0_3 - 0xc4u;  // (from the original)
    script__RenderMain__RenderMain_005e3194(r0_4, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_5 = r0_4 - 0xc4u;  // (from the original)
    script__RenderMain__RenderMain_005e3194(r0_5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_6 = r0_5 - 0xc4u;  // (from the original)
    script__RenderMain__RenderMain_005e3194(r0_6, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_7 = r0_6 - 0xc4u;  // (from the original)
    script__RenderMain__RenderMain_005e3194(r0_7, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_8 = r0_7 - 0xc4u;  // (from the original)
    script__RenderMain__RenderMain_005e3194(r0_8, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_9 = r0_8 - 0xc4u;  // (from the original)
    script__RenderMain__RenderMain_005e3194(r0_9, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_10 = r0_9 - 0x5cu;  // (from the original)
    destroy_animation_pair(r0_10, guest::cpu()->r[1]);
    u32 r0_11 = r0_10 - 0x5cu;  // (from the original)
    destroy_animation_pair(r0_11, guest::cpu()->r[1]);
    destroy_array_elements(r0_11 - 0x4ca4u, 0x6ce65cu, 0x330u, 0x18u);  // (from the original)
    u32 r0_13 = r0_11 - 0x4d90u;  // (from the original)
    destroy_button_action_control(r0_13);
    destroy_array_elements(r0_13 - 0xe0u, 0x2b6ef8u, 0xe0u, 1u);  // (from the original)
    u32 r0_15 = r0_13 - 0x1c4u;  // (from the original)
    destroy_button_action_control(r0_15);
    destroy_array_elements(r0_15 - 0xe0u, 0x2b6ef8u, 0xe0u, 1u);  // (from the original)
    passport->simple_comment_window_vtable = vtable_SimpleCommentWindow;
    passport->word_fix_33u_vtable = vtable_script__WordFix_33u_;
    u32 r0_17 = r0_15 - 0x214u;  // (from the original)
    script__RenderMain__RenderMain_005e3194(r0_17, vtable_script__WordFix_33u_, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_18 = r0_17 - 0xe4u;  // (from the original)
    destroy_button_action_control(r0_18);
    u32 button_action_node_rec = r0_18 - 0xe0u;  // (from the original)
    ButtonActionNode__destructor(button_action_node_rec);
    u32 r0_21 = ExplainWindow__destructor(button_action_node_rec - 0x204u);  // (from the original)
    *gptr<u32>(r0_21 - 0x434u) = vtable_BadgeExplainWindow;  // (from the original)
    u32 r0_22 = r0_21 - 0x5cu;  // (from the original)
    destroy_animation_pair(r0_22, vtable_BadgeExplainWindow);
    u32 r0_23 = r0_22 - 0x100u;  // (from the original)
    script__MsgEngine__MsgEngine_005d703c(r0_23);
    u32 r0_24 = r0_23 - 0xc4u;  // (from the original)
    script__RenderMain__RenderMain_005e3194(r0_24, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_26 = ExplainWindow__destructor(r0_24 - 0x214u);  // (from the original)
    u32 r0_27 = r0_26 - 0x28u;  // (from the original)
    destroy_animation(r0_27);
    u32 r0_28 = r0_27 - 0x28u;  // (from the original)
    destroy_animation(r0_28);
    u32 r0_29 = r0_28 - 0x28u;  // (from the original)
    destroy_animation(r0_29);
    u32 r0_30 = r0_29 - 0x28u;  // (from the original)
    destroy_animation(r0_30);
    u32 r0_31 = r0_30 - 0x28u;  // (from the original)
    destroy_animation(r0_31);
    u32 r0_32 = r0_31 - 0x28u;  // (from the original)
    destroy_animation(r0_32);
    u32 r0_33 = r0_32 - 0x28u;  // (from the original)
    destroy_animation(r0_33);
    u32 r0_35 = Layout__destructor(r0_33 - 0x14cu);  // (from the original)
    u32 r0_36 = r0_35 - 0x28u;  // (from the original)
    destroy_animation(r0_36);
    u32 r0_37 = r0_36 - 0x28u;  // (from the original)
    destroy_animation(r0_37);
    u32 r0_38 = r0_37 - 0x28u;  // (from the original)
    destroy_animation(r0_38);
    u32 r0_39 = r0_38 - 0x28u;  // (from the original)
    destroy_animation(r0_39);
    u32 r0_40 = r0_39 - 0x28u;  // (from the original)
    destroy_animation(r0_40);
    u32 r0_41 = r0_40 - 0x28u;  // (from the original)
    destroy_animation(r0_41);
    u32 r0_42 = r0_41 - 0x28u;  // (from the original)
    destroy_animation(r0_42);
    u32 r0_43 = r0_42 - 0x28u;  // (from the original)
    destroy_animation(r0_43);
    u32 r0_44 = r0_43 - 0x28u;  // (from the original)
    destroy_animation(r0_44);
    u32 r0_45 = r0_44 - 0x28u;  // (from the original)
    destroy_animation(r0_45);
    u32 r0_47 = Layout__destructor(r0_45 - 0x14cu);  // (from the original)
    u32 r0_49 = ssys__ma__lyt__ArcResAccReader__destructor(r0_47 - 0x248u);  // (from the original)
    u32 r0_51 = ssys__ma__lyt__ArcResAccReader__destructor(r0_49 - 0x248u);  // (from the original)
    return r0_51 - 0x2cu;  // (from the original)
}

}  // namespace d_006b0b74
GUEST_EXPORT_FRAMED(0x006b0b74, d_006b0b74::Passport__virtual_0_006b0b74, 0x4010);  // pushes {r4, lr} first, as the original

// f_006b127c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the area's id, squared radius and range (the larger end kept).
namespace d_006b127c {

struct __attribute__((packed)) Area {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not used here)
    float float_c;
    u8 unknown_10[0x4];  // (not used here)
    u32 word_14;
};
GUEST_OFFSET(Area, word_0, 0x0);
GUEST_OFFSET(Area, word_4, 0x4);
GUEST_OFFSET(Area, float_c, 0xc);
GUEST_OFFSET(Area, word_14, 0x14);


void Area__set(gptr<Area> area, u32 r1, u32 r2, u32 r3, float S0) {
    float S0_1 = S0 * S0;
    area->word_14 = r1;
    area->float_c = S0_1;
    area->word_0 = r2;
    if (s32(r3) >= s32(r2)) {
        r2 = r3;
    }
    area->word_4 = r2;
    guest::cpu()->s[0] = S0_1;
}

}  // namespace d_006b127c
GUEST_EXPORT(0x006b127c, d_006b127c::Area__set);

// f_006b1468: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs the listener: no ids, zero positions, a huge distance and cleared flags.
namespace d_006b1468 {

struct __attribute__((packed)) SoundListener {
    u32 word_0;
    u32 word_4;
    float float_8;
    float float_c;
    u8 byte_10;
    u8 byte_11;
    u8 unknown_12[0x2];  // (not used here)
    u32 word_14;
    u8 byte_18;
    u8 unknown_19[0x1b];  // (not used here)
    float float_34;
    u8 byte_38;
    u8 byte_39;
    u8 unknown_3a[0x2];  // (not used here)
    u32 word_3c;
    u32 word_40;
};
GUEST_OFFSET(SoundListener, word_0, 0x0);
GUEST_OFFSET(SoundListener, word_4, 0x4);
GUEST_OFFSET(SoundListener, float_8, 0x8);
GUEST_OFFSET(SoundListener, float_c, 0xc);
GUEST_OFFSET(SoundListener, byte_10, 0x10);
GUEST_OFFSET(SoundListener, byte_11, 0x11);
GUEST_OFFSET(SoundListener, word_14, 0x14);
GUEST_OFFSET(SoundListener, byte_18, 0x18);
GUEST_OFFSET(SoundListener, float_34, 0x34);
GUEST_OFFSET(SoundListener, byte_38, 0x38);
GUEST_OFFSET(SoundListener, byte_39, 0x39);
GUEST_OFFSET(SoundListener, word_3c, 0x3c);
GUEST_OFFSET(SoundListener, word_40, 0x40);


void SoundListener__construct(gptr<SoundListener> sound_listener) {
    u32 r2_1 = ~0u;
    float S0_1 = 0.0f;
    sound_listener->word_0 = r2_1;
    sound_listener->word_4 = r2_1;
    sound_listener->float_8 = S0_1;
    sound_listener->float_c = S0_1;
    sound_listener->byte_10 = 0;
    sound_listener->byte_11 = 0;
    float S0_2 = 100000000.0f;
    sound_listener->word_14 = 0;
    sound_listener->byte_18 = 0;
    sound_listener->float_34 = S0_2;
    sound_listener->byte_38 = 0;
    sound_listener->byte_39 = 0;
    sound_listener->word_3c = 0;
    sound_listener->word_40 = 0;
}

}  // namespace d_006b1468
GUEST_EXPORT(0x006b1468, d_006b1468::SoundListener__construct);

// f_006b14b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys the listener's part at +0x3c.
namespace d_006b14b8 {

inline constexpr guest::Function<0x00825b04, u32(u32)> ListLink__destroy;

u32 SoundListener__destroy(u32 sound_listener) {
    u32 list_link = sound_listener + 0x3cu;  // (from the original)
    ListLink__destroy(list_link);
    return list_link - 0x3cu;  // (from the original)
}

}  // namespace d_006b14b8
GUEST_EXPORT_FRAMED(0x006b14b8, d_006b14b8::SoundListener__destroy, 0x4010);  // pushes {r4, lr} first, as the original

// f_006b17c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the text of label 0 (+0x198) or 1 (+0x25c).
namespace d_006b17c4 {

inline constexpr guest::Function<0x005e2c98, u32(u32, u32, u32)> TextBox__bind_pane;

u32 LabelPair__set_text(u32 label_pair, u32 r1, u32 r2, u32 r3) {
    if (r1 == 0) {
        return TextBox__bind_pane(label_pair + 0x198u, r2, r3);  // (from the original)
    }
    if (r1 != 1u) {
        guest::cpu()->r[1] = r1;
        return label_pair;
    }
    return TextBox__bind_pane(label_pair + 0x25cu, r2, r3);  // (from the original)
}

}  // namespace d_006b17c4
GUEST_EXPORT(0x006b17c4, d_006b17c4::LabelPair__set_text);

// f_006b19c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Detaches the layout at +0x24 from the layout system.
namespace d_006b19c0 {

inline constexpr guest::Function<0x001323bc, u32(u32)> read_global_975c20;
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32)> LayoutRenderer__draw_on_screen;

u32 detach_layout_24_b(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = read_global_975c20(r0);
    frame.release();
    return LayoutRenderer__draw_on_screen(r0_1, r0 + 0x24u, 0u);  // (from the original)
}

}  // namespace d_006b19c0
GUEST_EXPORT(0x006b19c0, d_006b19c0::detach_layout_24_b);

// f_006b1a64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts the message on both labels.
namespace d_006b1a64 {

inline constexpr guest::Function<0x005e2e50, u32(u32, u32, u32, u32)> start_message;
inline constexpr guest::Function<0x005e2f94, u32(u32, u32, u32, u32)> TextBox__layout_lines;

u32 LabelPair__start_both(u32 label_pair, u32 source) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    start_message(label_pair + 0x198u, source, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    TextBox__layout_lines(label_pair + 0x198u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    start_message(label_pair + 0x25cu, source, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    frame.release();
    return TextBox__layout_lines(label_pair + 0x25cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_006b1a64
GUEST_EXPORT(0x006b1a64, d_006b1a64::LabelPair__start_both);

// f_006b1a98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Releases the layout at +0x24.
namespace d_006b1a98 {

inline constexpr guest::Function<0x001323b4, u32(u32, u32, u32, u32)> layout_at_10_virtual_8;

u32 release_layout_24_b(u32 r0) {
    return layout_at_10_virtual_8(r0 + 0x24u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_006b1a98
GUEST_EXPORT(0x006b1a98, d_006b1a98::release_layout_24_b);

// f_006b1aa0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the pane's position (+0x2c), shows it and updates the layout.
namespace d_006b1aa0 {

struct __attribute__((packed)) LabelPair {
    u8 unknown_0[0x44];  // (not used here)
    u32 word_44;
};
GUEST_OFFSET(LabelPair, word_44, 0x44);

struct __attribute__((packed)) Local_006b1aa0_r1_1 {
    u8 unknown_0[0x2c];  // (not used here)
    float float_2c;
    u8 unknown_30[0x87];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_006b1aa0_r1_1, float_2c, 0x2c);
GUEST_OFFSET(Local_006b1aa0_r1_1, byte_b7, 0xb7);

inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> Layout__virtual_3;

void LabelPair__set_position(gptr<LabelPair> label_pair, float S0) {
    gptr<Local_006b1aa0_r1_1> r1_1 = gptr<Local_006b1aa0_r1_1>(label_pair->word_44);
    r1_1->float_2c = S0;
    u32 r2_1 = u32(r1_1->byte_b7) & 0xcfu;  // (from the original)
    r1_1->byte_b7 = u8(r2_1);
    guest::cpu()->s[0] = S0;
    Layout__virtual_3(label_pair.addr() + 0x24u, r1_1.addr(), r2_1, guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_006b1aa0
GUEST_EXPORT(0x006b1aa0, d_006b1aa0::LabelPair__set_position);

// f_006b1d88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Plays the sound on the handle through the sound player (+0xc0c) when it exists.
namespace d_006b1d88 {

struct __attribute__((packed)) SoundSystem {
    u8 unknown_0[0xc0c];  // (not used here)
    u32 word_c0c;
};
GUEST_OFFSET(SoundSystem, word_c0c, 0xc0c);

inline constexpr guest::Function<0x004bfd70, u32(u32, u32, u32, u32)> Resource__find_and_bind;

u32 SoundSystem__play_handle(gptr<SoundSystem> sound_system) {
    u32 r0_1 = sound_system->word_c0c;
    if (r0_1 == 0) {
        return r0_1;
    }
    return Resource__find_and_bind(r0_1 + 4u, guest::cpu()->r[1], guest::cpu()->r[2], 0u);
}

}  // namespace d_006b1d88
GUEST_EXPORT(0x006b1d88, d_006b1d88::SoundSystem__play_handle);

// f_006b1da4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Plays the sound on the handle through the sound player when it exists.
namespace d_006b1da4 {

struct __attribute__((packed)) SoundSystem {
    u8 unknown_0[0xc0c];  // (not used here)
    u32 word_c0c;
};
GUEST_OFFSET(SoundSystem, word_c0c, 0xc0c);

inline constexpr guest::Function<0x004bfd70, u32(u32, u32, u32, u32)> Resource__find_and_bind;

void SoundSystem__play_handle_b(gptr<SoundSystem> sound_system) {
    u32 r0_1 = sound_system->word_c0c;
    if (r0_1 == 0) {
        return;
    }
    Resource__find_and_bind(r0_1 + 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_006b1da4
GUEST_EXPORT(0x006b1da4, d_006b1da4::SoundSystem__play_handle_b);

// f_006b1df0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Plays the sound in the slot already playing it, or a new one of the 8 slots.
namespace d_006b1df0 {

inline constexpr guest::Function<0x004bfe1c, u32(u32, u32, u32, u32)> Resource__bind_if_kind;
inline constexpr guest::Function<0x007cff90, u32(u32, u32, u32, u32)> PathGrid__best_neighbor;

u32 SoundSlots8__play(u32 sound_slots8, u32 r1, u32 r2_unused, u32 r3) {
    u32 r0_1 = 0;
    u32 r5 = sound_slots8;
    u32 r4 = sound_slots8 + 0x1cu;  // (from the original)
    u32 r6 = r1;
    sound_slots8 = 0u;
L_6b1e04:;
    u32 r1_1 = r4;
    if (sound_slots8 < 8u) {
        r1_1 = r4 + (sound_slots8 << 2);
    }
    u32 r1_2 = *gptr<u32>(r1_1);
    r1 = r1_2 == 0 ? ~0u : *gptr<u32>(r1_2 + 0xb0u);  // (from the original)
    if (r1 != r6) {
        goto L_6b1e60;
    }
    if (sound_slots8 < 8u) {
        r4 += (sound_slots8 << 2);
    }
    if (r4 == 0) {
        goto L_6b1e6c;
    }
    r0_1 = *gptr<u32>(r5 + 0xc0cu);  // (from the original)
    if (r0_1 != 0) {
        Resource__bind_if_kind(r0_1 + 4u, r4, r6, 0u);
        r1 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1;
    return r4;
L_6b1e60:;
    sound_slots8 += 1u;
    if (s32(sound_slots8) < 8) {
        guest::preempt();
        goto L_6b1e04;
    }
L_6b1e6c:;
    u32 r0_4 = PathGrid__best_neighbor(r5 + 0x1cu, ~0u, r6, r3);  // (from the original)
    r1 = guest::cpu()->r[1];
    u32 zf_1 = r0_4 == 0;
    r4 = r0_4;
    if (!zf_1) {
        r0_4 = *gptr<u32>(r5 + 0xc0cu);  // (from the original)
        zf_1 = r0_4 == 0;
    }
    if (!zf_1) {
        Resource__bind_if_kind(r0_4 + 4u, r4, r6, 0u);
        r1 = guest::cpu()->r[1];
        return r4;
    }
    guest::cpu()->r[1] = r1;
    return r4;
}

}  // namespace d_006b1df0
GUEST_EXPORT_FRAMED(0x006b1df0, d_006b1df0::SoundSlots8__play, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006b1ec0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stops every one of the 8 slots playing the sound.
namespace d_006b1ec0 {

inline constexpr guest::Function<0x00136e58, u32(u32, u32, u32, u32)> BasicSound__stop;

u32 SoundSlots8__stop(u32 sound_slots8, u32 r1) {
    u32 r1_2 = 0;
    u32 r5 = sound_slots8;
    u32 r4 = r1;
    sound_slots8 += 0x1cu;  // (from the original)
    u32 r2 = 0u;
    do {
        u32 r1_1 = *gptr<u32>(r2 >= 8u ? sound_slots8 : sound_slots8 + (r2 << 2));
        r1_2 = r1_1 == 0 ? ~0u : *gptr<u32>(r1_1 + 0xb0u);  // (from the original)
        if (r1_2 == r4) {
            if (r2 < 8u) {
                sound_slots8 += (r2 << 2);
            }
            if (sound_slots8 != 0) {
                goto L_6b1f1c;
            }
            guest::cpu()->r[1] = r1_2;
            return sound_slots8;
        }
        r2 += 1u;
        guest::preempt();
    } while (s32(r2) < 8);
    guest::cpu()->r[1] = r1_2;
    return sound_slots8;
L_6b1f1c:;
    u32 r0_1 = *gptr<u32>(sound_slots8);
    if (r0_1 != 0) {
        BasicSound__stop(r0_1, 0u, r2, guest::cpu()->r[3]);
    }
    r1 = 0u;
    sound_slots8 = r5 + 0x1cu;  // (from the original)
    do {
        u32 r2_1 = *gptr<u32>(r1 >= 8u ? sound_slots8 : sound_slots8 + (r1 << 2));
        r2 = r2_1 == 0 ? ~0u : *gptr<u32>(r2_1 + 0xb0u);  // (from the original)
        if (r2 == r4) {
            if (r1 < 8u) {
                sound_slots8 += (r1 << 2);
            }
            if (sound_slots8 != 0) {
                guest::preempt();
                goto L_6b1f1c;
            }
            guest::cpu()->r[1] = r1;
            return sound_slots8;
        }
        r1 += 1u;
        guest::preempt();
    } while (s32(r1) < 8);
    guest::cpu()->r[1] = r1;
    return sound_slots8;
}

}  // namespace d_006b1ec0
GUEST_EXPORT_FRAMED(0x006b1ec0, d_006b1ec0::SoundSlots8__stop, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006b2c68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Notifies the sound listeners (+0xc14, +0xc28) of the event by its kind.
namespace d_006b2c68 {

struct __attribute__((packed)) Local_006b2c68_r4_1 {
    u32 word_0;
    u8 unknown_4[0x28];  // (not used here)
    u32 word_2c;
};
GUEST_OFFSET(Local_006b2c68_r4_1, word_0, 0x0);
GUEST_OFFSET(Local_006b2c68_r4_1, word_2c, 0x2c);

struct __attribute__((packed)) Local_006b2c68_r5_1 {
    u32 word_0;
};
GUEST_OFFSET(Local_006b2c68_r5_1, word_0, 0x0);

inline constexpr guest::Function<0x007e666c, u32(u32, u32, u32, u32)> CallbackList__remove;

void SoundSystem__notify_listeners(u32 sound_system, u32 r1) {
    u32 res_1 = r1 - 4u;
    u32 vf_1 = ((r1 ^ 4u) & (r1 ^ res_1)) >> 0x1f;  // (from the original)
    gptr<Local_006b2c68_r4_1> r4_1 = gptr<Local_006b2c68_r4_1>(sound_system + 0xc14u);  // (from the original)
    gptr<Local_006b2c68_r5_1> r5_1 = gptr<Local_006b2c68_r5_1>(sound_system + 0xc28u);  // (from the original)
    if (res_1 == 0) {
        u32 r0_1 = r4_1->word_0;
        if (r0_1 != 0) {
            CallbackList__remove(r0_1, 0x6b3a9cu, 0u, guest::cpu()->r[3]);  // (from the original)
            r1 = guest::cpu()->r[1];
        }
        goto L_6b2cdc;
    }
    if ((res_1 >> 0x1f) == vf_1) {  // (from the original)
        if (r1 == 0x10u) {  // (from the original)
            goto L_6b2cdc;
        }
        if (r1 != 0x20u) {  // (from the original)
            guest::cpu()->r[1] = r1;
            return;
        }
        sound_system = r5_1->word_0;
        if (sound_system == 0) {
            guest::cpu()->r[1] = r1;
            return;
        }
        goto L_6b2cb4;
    }
    if (r1 == 1u || r1 == 2u) {
        goto L_6b2cdc;
    }
    guest::cpu()->r[1] = r1;
    return;
L_6b2cb4:;
    CallbackList__remove(sound_system, 0x6b3a9cu, 0u, guest::cpu()->r[3]);  // (from the original)
    return;
L_6b2cdc:;
    u32 r0_2 = r5_1->word_0;
    if (r0_2 != 0) {
        CallbackList__remove(r0_2, 0x6b3a9cu, 0u, guest::cpu()->r[3]);  // (from the original)
        r1 = guest::cpu()->r[1];
    }
    sound_system = r4_1->word_2c;
    if (sound_system == 0) {
        guest::cpu()->r[1] = r1;
        return;
    }
    guest::preempt();
    goto L_6b2cb4;
}

}  // namespace d_006b2c68
GUEST_EXPORT_FRAMED(0x006b2c68, d_006b2c68::SoundSystem__notify_listeners, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006b2f08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Fills the sound's info (id, bank, size, play mode and its three flags) from the sound archive.
namespace d_006b2f08 {

struct __attribute__((packed)) SoundSystem {
    u8 unknown_0[0xc10];  // (not used here)
    u32 word_c10;
    u8 unknown_c14[0xc0];  // (not used here)
    u32 word_cd4;
    u8 unknown_cd8[0x4];  // (not used here)
    u32 word_cdc;
    u8 unknown_ce0[0x8];  // (not used here)
    u32 word_ce8;
};
GUEST_OFFSET(SoundSystem, word_c10, 0xc10);
GUEST_OFFSET(SoundSystem, word_cd4, 0xcd4);
GUEST_OFFSET(SoundSystem, word_cdc, 0xcdc);
GUEST_OFFSET(SoundSystem, word_ce8, 0xce8);

struct __attribute__((packed)) Object_006b2f08_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 byte_c;
    u8 byte_d;
    u8 byte_e;
    u8 byte_f;
    u8 byte_10;
};
GUEST_OFFSET(Object_006b2f08_1, word_0, 0x0);
GUEST_OFFSET(Object_006b2f08_1, word_4, 0x4);
GUEST_OFFSET(Object_006b2f08_1, word_8, 0x8);
GUEST_OFFSET(Object_006b2f08_1, byte_c, 0xc);
GUEST_OFFSET(Object_006b2f08_1, byte_d, 0xd);
GUEST_OFFSET(Object_006b2f08_1, byte_e, 0xe);
GUEST_OFFSET(Object_006b2f08_1, byte_f, 0xf);
GUEST_OFFSET(Object_006b2f08_1, byte_10, 0x10);

inline constexpr guest::Function<0x0013c1e8, u32(u32, u32, u32, u32)> SoundArchive__player_info;
inline constexpr guest::Function<0x0073df34, u32(u32, u32, u32)> ResFile__entry_info;
inline constexpr guest::Function<0x0073df8c, u32(u32, u32, u32, u32)> SoundArchive__find_sound;

struct __attribute__((packed)) Frame_006b2f08 {
    u32 word_0;
};
GUEST_OFFSET(Frame_006b2f08, word_0, 0x0);
GUEST_SIZE(Frame_006b2f08, 0x4);

void SoundSystem__sound_info(gptr<SoundSystem> sound_system, gptr<Object_006b2f08_1> arg1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_006b2f08> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r0_2 = SoundArchive__player_info(sound_system->word_c10, r2, sound_system.addr() + 0xcd0u, r3);  // (from the original)
    if (r0_2 != 0) {
        arg1->word_0 = r2;
        arg1->word_4 = sound_system->word_cd4 & ~0xff000000u;  // (from the original)
        arg1->word_8 = sound_system->word_cdc;
        frame->word_0 = 0;
        u32 sound = SoundArchive__find_sound(sound_system->word_c10, r2, 0u, frame.at(0).addr());
        u32 r0_5 = sound == 0 ? 0u : frame->word_0;
        arg1->byte_d = 0;
        arg1->byte_c = u8(r0_5 & 3u);
        u32 r0_6 = sound_system->word_c10;
        u32 r6_1 = 0u;
        u32 r0_7 = ResFile__entry_info(r0_6, r2, sound_system.addr() + 0xce8u);  // (from the original)
        if (r0_7 != 0) {
            r6_1 = sound_system->word_ce8;
        }
        arg1->byte_e = u8((r6_1 & 4u) >> 2);
        arg1->byte_f = u8((r6_1 & 8u) >> 3);
        arg1->byte_10 = u8((r6_1 & 2u) >> 1);
    }
}

}  // namespace d_006b2f08
GUEST_EXPORT_FRAMED(0x006b2f08, d_006b2f08::SoundSystem__sound_info, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_006b3104: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Updates the 3D sound parameters from the listener.
namespace d_006b3104 {


void SoundSystem__update_3d(u32 r0_unused, u32 r1, float S0, float S1) {
    u32 res_2 = 0;
    u32 nf_2 = 0;
    u32 zf_2 = 0;
    u32 vf_2 = 0;
    u32 r0_2 = 0;
    u32 res_3 = 0;
    u32 zf_3 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    float S1_3 = 0;
    float S0_5 = 0;
    u32 res_1 = r1 - 0x10003e9u;  // (from the original)
    u32 zf_1 = res_1 == 0;
    u32 r0_1 = r1 - 0x10003e9u;  // (from the original)
    if (zf_1) {
        float S0_1 = 0.0f;
        guest::cpu()->s[0] = S0_1;
        return;
    }
    if (!zf_1 && (res_1 >> 0x1f) == (((r1 ^ 0x10003e9u) & (r1 ^ res_1)) >> 0x1f)) {  // (from the original)
        goto L_6b3194;
    }
    res_2 = r1 - 0x1000393u;  // (from the original)
    nf_2 = res_2 >> 0x1f;  // (from the original)
    zf_2 = res_2 == 0;
    vf_2 = ((r1 ^ 0x1000393u) & (r1 ^ res_2)) >> 0x1f;  // (from the original)
    r0_2 = r1 - 0x1000393u;  // (from the original)
    if (zf_2) {
        float S0_2 = 0.0f;
        guest::cpu()->s[0] = S0_2;
        return;
    }
    if (!zf_2 && nf_2 == vf_2) {
        goto L_6b3178;
    }
    res_3 = r1 + 0xfefffc72u;  // (from the original)
    zf_3 = res_3 == 0;
    if (!zf_3) {
        zf_3 = res_3 == 1u;
    }
    if (zf_3 || res_3 == 3u || res_3 == 4u) {
        float S0_3 = 0.0f;
        guest::cpu()->s[0] = S0_3;
        return;
    }
L_6b3148:;
    S1_1 = -1.0f;
    S2_1 = 1.0f;
    if (S0 < S1_1) {
        float S1_2 = 0.8f;
        float S0_4 = S1_1 * S1_2;
        guest::cpu()->s[0] = S0_4;
        guest::cpu()->s[1] = S1_2;
        return;
    }
    if (S0 > S2_1) {
        S0 = S2_1;
    }
    S1_3 = 0.8f;
    S0_5 = S0 * S1_3;
    guest::cpu()->s[0] = S0_5;
    guest::cpu()->s[1] = S1_3;
    return;
L_6b3178:;
    if (r0_2 == 1u || r0_2 == 2u || r0_2 == 0x33u || r0_2 == 0x55u) {  // (from the original)
        float S0_6 = 0.0f;
        guest::cpu()->s[0] = S0_6;
        guest::cpu()->s[1] = S1;
        return;
    }
    guest::preempt();
    goto L_6b3148;
L_6b3194:;
    u32 zf_4 = r0_1 - 0x52u == 0;  // (from the original)
    if (zf_4) {
        float S0_7 = 0.0f;
        guest::cpu()->s[0] = S0_7;
        guest::cpu()->s[1] = S1;
        return;
    }
    if (!zf_4 && s32(r0_1) >= 0x52) {  // (from the original)
        if (r0_1 == 0x53u || r0_1 == 0x83u) {  // (from the original)
            float S0_8 = 0.0f;
            guest::cpu()->s[0] = S0_8;
            guest::cpu()->s[1] = S1;
            return;
        }
        if (r0_1 != 0xa4u && r0_1 != 0xa6u) {  // (from the original)
            guest::preempt();
            goto L_6b3148;
        }
        float S0_9 = 0.0f;
        guest::cpu()->s[0] = S0_9;
        guest::cpu()->s[1] = S1;
        return;
    }
    if (r0_1 == 6u || r0_1 == 7u || r0_1 == 0x40u || r0_1 == 0x42u) {  // (from the original)
        float S0_10 = 0.0f;
        guest::cpu()->s[0] = S0_10;
        guest::cpu()->s[1] = S1;
        return;
    }
    guest::preempt();
    goto L_6b3148;
}

}  // namespace d_006b3104
GUEST_EXPORT(0x006b3104, d_006b3104::SoundSystem__update_3d);

// f_006b3384: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Notifies the sound listeners of the event by its kind (second handler).
namespace d_006b3384 {

struct __attribute__((packed)) Local_006b3384_r4_1 {
    u32 word_0;
    u8 unknown_4[0x28];  // (not used here)
    u32 word_2c;
};
GUEST_OFFSET(Local_006b3384_r4_1, word_0, 0x0);
GUEST_OFFSET(Local_006b3384_r4_1, word_2c, 0x2c);

struct __attribute__((packed)) Local_006b3384_r5_1 {
    u32 word_0;
};
GUEST_OFFSET(Local_006b3384_r5_1, word_0, 0x0);

inline constexpr guest::Function<0x007e666c, u32(u32, u32, u32, u32)> CallbackList__remove;

void SoundSystem__notify_listeners_b(u32 sound_system, u32 r1) {
    u32 res_1 = r1 - 4u;
    u32 vf_1 = ((r1 ^ 4u) & (r1 ^ res_1)) >> 0x1f;  // (from the original)
    gptr<Local_006b3384_r4_1> r4_1 = gptr<Local_006b3384_r4_1>(sound_system + 0xc14u);  // (from the original)
    gptr<Local_006b3384_r5_1> r5_1 = gptr<Local_006b3384_r5_1>(sound_system + 0xc28u);  // (from the original)
    if (res_1 == 0) {
        u32 r0_1 = r4_1->word_0;
        if (r0_1 != 0) {
            CallbackList__remove(r0_1, 0x6b3f8cu, 0u, guest::cpu()->r[3]);  // (from the original)
            r1 = guest::cpu()->r[1];
        }
        goto L_6b33f8;
    }
    if ((res_1 >> 0x1f) == vf_1) {  // (from the original)
        if (r1 == 0x10u) {  // (from the original)
            goto L_6b33f8;
        }
        if (r1 != 0x20u) {  // (from the original)
            guest::cpu()->r[1] = r1;
            return;
        }
        sound_system = r5_1->word_0;
        if (sound_system == 0) {
            guest::cpu()->r[1] = r1;
            return;
        }
        goto L_6b33d0;
    }
    if (r1 == 1u || r1 == 2u) {
        goto L_6b33f8;
    }
    guest::cpu()->r[1] = r1;
    return;
L_6b33d0:;
    CallbackList__remove(sound_system, 0x6b3f8cu, 0u, guest::cpu()->r[3]);  // (from the original)
    return;
L_6b33f8:;
    u32 r0_2 = r5_1->word_0;
    if (r0_2 != 0) {
        CallbackList__remove(r0_2, 0x6b3f8cu, 0u, guest::cpu()->r[3]);  // (from the original)
        r1 = guest::cpu()->r[1];
    }
    sound_system = r4_1->word_2c;
    if (sound_system == 0) {
        guest::cpu()->r[1] = r1;
        return;
    }
    guest::preempt();
    goto L_6b33d0;
}

}  // namespace d_006b3384
GUEST_EXPORT_FRAMED(0x006b3384, d_006b3384::SoundSystem__notify_listeners_b, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006b3d50: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Checks the sound history and slots for the id before playing.
namespace d_006b3d50 {

struct __attribute__((packed)) SoundHistory {
    u8 unknown_0[0xb18];  // (not used here)
    u32 word_b18;
    u8 unknown_b1c[0x1e3];  // (not used here)
    u8 byte_cff;
};
GUEST_OFFSET(SoundHistory, word_b18, 0xb18);
GUEST_OFFSET(SoundHistory, byte_cff, 0xcff);

inline constexpr u32 sound_history_mgr_instance_address = 0x0094cffcu;
inline guest::global<u32, 0x0094cffc> sound_history_mgr_instance;
inline constexpr guest::Function<0x0071bfa0, u32(u32, u32)> history_has_id;
inline constexpr guest::Function<0x00825c64, u32(u32, u32, u32, u32)> slots_hold_id;

u32 SoundHistory__can_play(gptr<SoundHistory> sound_history, u32 r1) {
    u32 r0 = sound_history.addr();
    u32 r0_27 = 0;
    u32 r5_1 = r1;
    if (sound_history->byte_cff != 0) {
        u32 res_1 = r5_1 + 0xfefffc4au;  // (from the original)
        u32 zf_1 = res_1 == 0;
        if (!zf_1) {
            zf_1 = res_1 == 1u;
        }
        if (!zf_1 && res_1 != 0x1eu && res_1 != 0x1fu) {  // (from the original)
            guest::cpu()->r[1] = r1;
            return 0u;
        }
    }
    r1 = 0x10004b5u;  // (from the original)
    u32 res_2 = r5_1 - r1;
    u32 r0_1 = r5_1 - r1;
    if (res_2 != 0) {
        if ((res_2 >> 0x1f) != (((r5_1 ^ r1) & (r5_1 ^ res_2)) >> 0x1f)) {  // (from the original)
            u32 r6_1 = r1 - u32(s32(0xfefffc43u) >> 0x15);  // (from the original)
            u32 r0_2 = r5_1 + 0xfefffc43u;  // (from the original)
            if (r0_2 == 0) {
                u32 r0_4 = slots_hold_id(r0 + 0x1cu, 0x100038cu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                r1 = guest::cpu()->r[1];
                if (r0_4 != 0) {
                    return 0u;
                }
                u32 r0_6 = slots_hold_id(r0 + 0x1cu, 0x100038fu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                r1 = guest::cpu()->r[1];
                if (r0_6 != 0) {
                    return 0u;
                }
                u32 r0_8 = slots_hold_id(r0 + 0x1cu, r6_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                r1 = guest::cpu()->r[1];
                if (r0_8 != 0) {
                    return 0u;
                }
                u32 r0_10 = slots_hold_id(r0 + 0x1cu, 0x10004bdu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                r1 = guest::cpu()->r[1];
                if (r0_10 != 0) {
                    return 0u;
                }
                u32 r0_12 = slots_hold_id(r0 + 0x1cu, 0x100038du, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                r1 = guest::cpu()->r[1];
                if (r0_12 != 0) {
                    return 0u;
                }
                goto L_6b3f30;
            }
            if (r0_2 == 1u) {
                u32 r0_14 = slots_hold_id(r0 + 0x1cu, r6_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                r1 = guest::cpu()->r[1];
                if (r0_14 != 0) {
                    return 0u;
                }
                u32 r0_16 = slots_hold_id(r0 + 0x1cu, 0x10004bfu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                r1 = guest::cpu()->r[1];
                if (r0_16 != 0) {
                    return 0u;
                }
                u32 r0_18 = slots_hold_id(r0 + 0x1cu, 0x10004c0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                r1 = guest::cpu()->r[1];
                if (r0_18 != 0) {
                    return 0u;
                }
                goto L_6b3f30;
            }
            if (r0_2 == 3u) {
                u32 r0_20 = slots_hold_id(r0 + 0x1cu, 0x10003b3u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                r1 = guest::cpu()->r[1];
                if (r0_20 != 0) {
                    return 0u;
                }
                goto L_6b3f30;
            }
            if (r0_2 != 0xf7u) {  // (from the original)
                goto L_6b3f30;
            }
        } else if (r0_1 != 5u) {
            if (r0_1 - 0x2cau != 0) {  // (from the original)
                if (r0_1 - 0x2cau != 1u) {  // (from the original)
                    goto L_6b3f30;
                }
            } else {
                if (sound_history->word_b18 != 1u) {
                    guest::cpu()->r[1] = r1;
                    return 0u;
                }
                u32 r0_23 = slots_hold_id(r0 + 0x1cu, 0x100077fu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                r1 = guest::cpu()->r[1];
                if (r0_23 != 0) {
                    return 0u;
                }
                goto L_6b3f30;
            }
            if (sound_history->word_b18 != 2u) {
                guest::cpu()->r[1] = r1;
                return 0u;
            }
            u32 r0_25 = slots_hold_id(r0 + 0x1cu, 0x1000780u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            r1 = guest::cpu()->r[1];
            if (r0_25 != 0) {
                return 0u;
            }
            goto L_6b3f30;
        }
    }
    r0_27 = slots_hold_id(r0 + 0x1cu, 0x10004bbu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    if (r0_27 != 0) {
        return 0u;
    }
L_6b3f30:;
    u32 r0_29 = history_has_id(*sound_history_mgr_instance, r5_1);
    r1 = guest::cpu()->r[1];
    return r0_29 == 0;
}

}  // namespace d_006b3d50
GUEST_EXPORT_FRAMED(0x006b3d50, d_006b3d50::SoundHistory__can_play, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006b4170: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts the object's sound through the sound player and remembers the result; true when it started.
namespace d_006b4170 {

struct __attribute__((packed)) SoundSystem {
    u8 unknown_0[0xc0c];  // (not used here)
    u32 word_c0c;
    u8 unknown_c10[0xe4];  // (not used here)
    u8 res;
};
GUEST_OFFSET(SoundSystem, word_c0c, 0xc0c);
GUEST_OFFSET(SoundSystem, res, 0xcf4);

inline constexpr guest::Function<0x004bfd70, u32(u32, u32, u32, u32)> Resource__find_and_bind;

u32 SoundSystem__start_object_sound(gptr<SoundSystem> sound_system) {
    u32 r0_1 = sound_system->word_c0c;
    if (r0_1 == 0) {
        return r0_1;
    }
    u32 and_bind_2 = Resource__find_and_bind(r0_1 + 4u, guest::cpu()->r[1], guest::cpu()->r[2], 0u);
    u32 res_1 = and_bind_2 & 0xffu;  // (from the original)
    sound_system->res = u8(res_1);
    return res_1 == 0;
}

}  // namespace d_006b4170
GUEST_EXPORT_FRAMED(0x006b4170, d_006b4170::SoundSystem__start_object_sound, 0x4010);  // pushes {r4, lr} first, as the original

// f_006b41a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts the object's sound with its parameters through the sound player and remembers the result; true when it
// started.
namespace d_006b41a4 {

struct __attribute__((packed)) SoundSystem {
    u8 unknown_0[0xc0c];  // (not used here)
    u32 word_c0c;
    u8 unknown_c10[0xe4];  // (not used here)
    u8 res;
};
GUEST_OFFSET(SoundSystem, word_c0c, 0xc0c);
GUEST_OFFSET(SoundSystem, res, 0xcf4);

inline constexpr guest::Function<0x004bfd70, u32(u32, u32, u32, u32)> Resource__find_and_bind;

u32 SoundSystem__start_object_sound_with(gptr<SoundSystem> sound_system) {
    u32 r0_1 = sound_system->word_c0c;
    if (r0_1 == 0) {
        return r0_1;
    }
    u32 and_bind_2 = Resource__find_and_bind(r0_1 + 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 res_1 = and_bind_2 & 0xffu;  // (from the original)
    sound_system->res = u8(res_1);
    return res_1 == 0;
}

}  // namespace d_006b41a4
GUEST_EXPORT_FRAMED(0x006b41a4, d_006b41a4::SoundSystem__start_object_sound_with, 0x4010);  // pushes {r4, lr} first, as the original

// f_006b4aa8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Interpolates between the two floats by where the value sits in the range.
namespace d_006b4aa8 {


void lerp_by_range(u32 r0, u32 r1, u32 r2, float S0, float S1) {
    if (r1 == r2) {
        guest::cpu()->r[1] = r1;
        return;
    }
    float S2_1 = S1 - S0;
    float S1_1 = std::bit_cast<float>(r0 - r1);
    u32 r1_1 = r2 - r1;
    float S1_2 = float(s32(std::bit_cast<u32>(S1_1))) * S2_1 / float(s32(r1_1));
    float S0_1 = S1_2 + S0;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_2;
}

}  // namespace d_006b4aa8
GUEST_EXPORT(0x006b4aa8, d_006b4aa8::lerp_by_range);

// f_006b4adc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Interpolates between the two integers by where the float sits in the range.
namespace d_006b4adc {


u32 lerp_int_by_float_range(u32 r0, u32 r1, float S0, float S1, float S2) {
    if (u32(S1 == S2)) {
        guest::cpu()->s[1] = S1;
        return r0;
    }
    u32 r1_1 = r1 - r0;
    float S2_1 = S2 - S1;
    float S1_1 = (S0 - S1) * float(s32(r1_1));
    float S0_1 = std::bit_cast<float>(vcvt_sz_f(S1_1 / S2_1 + float(s32(r0))));
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return std::bit_cast<u32>(S0_1);
}

}  // namespace d_006b4adc
GUEST_EXPORT(0x006b4adc, d_006b4adc::lerp_int_by_float_range);

// f_006b4e18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stops the object's sound through the sound player when it exists.
namespace d_006b4e18 {

struct __attribute__((packed)) SoundSystem {
    u8 unknown_0[0xc0c];  // (not used here)
    u32 word_c0c;
};
GUEST_OFFSET(SoundSystem, word_c0c, 0xc0c);

inline constexpr guest::Function<0x004bfe1c, u32(u32, u32, u32, u32)> Resource__bind_if_kind;

u32 SoundSystem__stop_object_sound(gptr<SoundSystem> sound_system) {
    u32 r0_1 = sound_system->word_c0c;
    if (r0_1 == 0) {
        return r0_1;
    }
    return Resource__bind_if_kind(r0_1 + 4u, guest::cpu()->r[1], guest::cpu()->r[2], 0u);
}

}  // namespace d_006b4e18
GUEST_EXPORT(0x006b4e18, d_006b4e18::SoundSystem__stop_object_sound);

// f_006b9038: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs the daily counters' base part.
namespace d_006b9038 {

struct __attribute__((packed)) DailyCountersBase {
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
    u32 word_ac;
    u32 word_b0;
    u32 word_b4;
    u32 word_b8;
    u32 word_bc;
    u32 word_c0;
    u32 word_c4;
    u32 word_c8;
    u32 word_cc;
    u32 word_d0;
    u32 word_d4;
    u32 word_d8;
    u32 word_dc;
    u32 word_e0;
    u32 word_e4;
    u32 word_e8;
    u32 word_ec;
    u32 word_f0;
    u32 word_f4;
    u32 word_f8;
    u32 word_fc;
    u32 word_100;
    u32 word_104;
    u32 word_108;
    u32 word_10c;
    u32 word_110;
    u32 word_114;
    u32 word_118;
    u32 word_11c;
    u32 word_120;
    u32 word_124;
    u32 word_128;
    u32 word_12c;
    u32 word_130;
    u32 word_134;
    u32 word_138;
    u32 word_13c;
    u32 word_140;
    u32 word_144;
    u32 word_148;
    u32 word_14c;
    u32 word_150;
    u32 word_154;
    u32 word_158;
    u32 word_15c;
    u32 word_160;
    u32 word_164;
    u32 word_168;
    u32 word_16c;
    u32 word_170;
    u32 word_174;
    u32 word_178;
    u32 word_17c;
    u32 word_180;
    u32 word_184;
    u32 word_188;
    u32 word_18c;
    u32 word_190;
    u32 word_194;
    u32 word_198;
    u32 word_19c;
    u32 word_1a0;
    u32 word_1a4;
    u32 word_1a8;
    u32 word_1ac;
    u32 word_1b0;
    u32 word_1b4;
    u32 word_1b8;
    u32 word_1bc;
    u32 word_1c0;
    u32 word_1c4;
    u32 word_1c8;
    u32 word_1cc;
    u32 word_1d0;
    u32 word_1d4;
    u32 word_1d8;
    u32 word_1dc;
    u32 word_1e0;
    u32 word_1e4;
    u32 word_1e8;
    u32 word_1ec;
    u32 word_1f0;
    u32 word_1f4;
    u32 word_1f8;
    u32 word_1fc;
    u32 word_200;
    u32 word_204;
    u32 word_208;
    u32 word_20c;
    u32 word_210;
    u32 word_214;
    u32 word_218;
    u32 word_21c;
    u32 word_220;
    u32 word_224;
    u32 word_228;
    u32 word_22c;
    u32 word_230;
    u32 word_234;
    u32 word_238;
    u32 word_23c;
    u32 word_240;
    u32 word_244;
    u32 word_248;
    u32 word_24c;
    u32 word_250;
    u32 word_254;
    u32 word_258;
    u32 word_25c;
    u32 word_260;
    u32 word_264;
    u32 word_268;
    u32 word_26c;
    u32 word_270;
    u32 word_274;
    u32 word_278;
    u32 word_27c;
    u32 word_280;
    u32 word_284;
    u32 word_288;
    u32 word_28c;
    u32 word_290;
    u32 word_294;
    u32 word_298;
    u32 word_29c;
    u32 word_2a0;
    u32 word_2a4;
    u32 word_2a8;
    u32 word_2ac;
    u32 word_2b0;
    u32 word_2b4;
    u32 word_2b8;
    u32 word_2bc;
    u32 word_2c0;
    u32 word_2c4;
    u32 word_2c8;
    u32 word_2cc;
    u32 word_2d0;
    u32 word_2d4;
    u32 word_2d8;
    u32 word_2dc;
    u32 word_2e0;
    u32 word_2e4;
    u32 word_2e8;
    u32 word_2ec;
    u32 word_2f0;
    u32 word_2f4;
    u32 word_2f8;
    u32 word_2fc;
    u32 word_300;
    u32 word_304;
    u32 word_308;
    u32 word_30c;
    u32 word_310;
    u32 word_314;
    u32 word_318;
    u32 word_31c;
    u32 word_320;
    u32 word_324;
    u32 word_328;
    u32 word_32c;
    u32 word_330;
    u32 word_334;
    u32 word_338;
    u32 word_33c;
    u32 word_340;
    u32 word_344;
    u32 word_348;
    u32 word_34c;
    u32 word_350;
    u32 word_354;
    u32 word_358;
    u32 word_35c;
    u32 word_360;
    u32 word_364;
    u32 word_368;
    u32 word_36c;
    u32 word_370;
    u32 word_374;
    u32 word_378;
    u32 word_37c;
    u32 word_380;
    u32 word_384;
    u32 word_388;
    u32 word_38c;
    u32 word_390;
    u32 word_394;
    u32 word_398;
    u32 word_39c;
    u32 word_3a0;
    u32 word_3a4;
    u32 word_3a8;
    u32 word_3ac;
    u32 word_3b0;
    u32 word_3b4;
    u32 word_3b8;
    u32 word_3bc;
    u32 word_3c0;
    u32 word_3c4;
    u32 word_3c8;
    u32 word_3cc;
    u32 word_3d0;
    u32 word_3d4;
    u32 word_3d8;
    u32 word_3dc;
    u32 word_3e0;
    u32 word_3e4;
    u32 word_3e8;
    u32 word_3ec;
    u32 word_3f0;
    u32 word_3f4;
    u32 word_3f8;
    u32 word_3fc;
    u32 word_400;
    u32 word_404;
    u32 word_408;
    u32 word_40c;
    u32 word_410;
    u32 word_414;
    u32 word_418;
    u32 word_41c;
    u32 word_420;
    u32 word_424;
    u32 word_428;
    u32 word_42c;
    u32 word_430;
    u32 word_434;
    u32 word_438;
    u32 word_43c;
    u32 word_440;
    u32 word_444;
    u32 word_448;
    u32 word_44c;
    u32 word_450;
    u32 word_454;
    u32 word_458;
    u32 word_45c;
    u32 word_460;
    u32 word_464;
    u32 word_468;
    u32 word_46c;
    u32 word_470;
    u32 word_474;
    u32 word_478;
    u32 word_47c;
    u32 word_480;
    u32 word_484;
    u32 word_488;
    u32 word_48c;
    u32 word_490;
    u32 word_494;
    u32 word_498;
    u32 word_49c;
    u32 word_4a0;
    u32 word_4a4;
    u32 word_4a8;
    u32 word_4ac;
    u32 word_4b0;
    u32 word_4b4;
    u32 word_4b8;
    u32 word_4bc;
    u32 word_4c0;
    u32 word_4c4;
    u32 word_4c8;
    u32 word_4cc;
    u32 word_4d0;
    u32 word_4d4;
    u32 word_4d8;
    u32 word_4dc;
    u32 word_4e0;
    u32 word_4e4;
    u32 word_4e8;
    u32 word_4ec;
    u32 word_4f0;
    u32 word_4f4;
    u32 word_4f8;
    u32 word_4fc;
    u32 word_500;
    u32 word_504;
    u32 word_508;
    u32 word_50c;
    u32 word_510;
    u32 word_514;
    u32 word_518;
    u32 word_51c;
    u32 word_520;
    u32 word_524;
    u32 word_528;
    u32 word_52c;
    u32 word_530;
    u32 word_534;
    u32 word_538;
    u32 word_53c;
    u32 word_540;
    u32 word_544;
    u32 word_548;
    u32 word_54c;
    u32 word_550;
    u32 word_554;
    u32 word_558;
    u32 word_55c;
    u32 word_560;
    u32 word_564;
    u32 word_568;
    u32 word_56c;
    u32 word_570;
    u32 word_574;
    u32 word_578;
    u32 word_57c;
    u32 word_580;
    u32 word_584;
    u32 word_588;
    u32 word_58c;
    u32 word_590;
    u32 word_594;
    u32 word_598;
    u32 word_59c;
    u32 word_5a0;
    u32 word_5a4;
    u32 word_5a8;
    u32 word_5ac;
    u32 word_5b0;
    u32 word_5b4;
    u32 word_5b8;
    u32 word_5bc;
    u32 word_5c0;
    u32 word_5c4;
    u32 word_5c8;
    u32 word_5cc;
    u32 word_5d0;
    u32 word_5d4;
    u32 word_5d8;
    u32 word_5dc;
    u32 word_5e0;
    u32 word_5e4;
    u32 word_5e8;
    u32 word_5ec;
    u32 word_5f0;
    u32 word_5f4;
    u32 word_5f8;
    u32 word_5fc;
    u32 word_600;
    u32 word_604;
    u32 word_608;
    u32 word_60c;
    u32 word_610;
    u32 word_614;
    u32 word_618;
    u32 word_61c;
    u32 word_620;
    u32 word_624;
    u32 word_628;
    u32 word_62c;
    u32 word_630;
    u32 word_634;
    u32 word_638;
    u32 word_63c;
};
GUEST_OFFSET(DailyCountersBase, word_0, 0x0);
GUEST_OFFSET(DailyCountersBase, word_4, 0x4);
GUEST_OFFSET(DailyCountersBase, word_8, 0x8);
GUEST_OFFSET(DailyCountersBase, word_c, 0xc);
GUEST_OFFSET(DailyCountersBase, word_10, 0x10);
GUEST_OFFSET(DailyCountersBase, word_14, 0x14);
GUEST_OFFSET(DailyCountersBase, word_18, 0x18);
GUEST_OFFSET(DailyCountersBase, word_1c, 0x1c);
GUEST_OFFSET(DailyCountersBase, word_20, 0x20);
GUEST_OFFSET(DailyCountersBase, word_24, 0x24);
GUEST_OFFSET(DailyCountersBase, word_28, 0x28);
GUEST_OFFSET(DailyCountersBase, word_2c, 0x2c);
GUEST_OFFSET(DailyCountersBase, word_30, 0x30);
GUEST_OFFSET(DailyCountersBase, word_34, 0x34);
GUEST_OFFSET(DailyCountersBase, word_38, 0x38);
GUEST_OFFSET(DailyCountersBase, word_3c, 0x3c);
GUEST_OFFSET(DailyCountersBase, word_40, 0x40);
GUEST_OFFSET(DailyCountersBase, word_44, 0x44);
GUEST_OFFSET(DailyCountersBase, word_48, 0x48);
GUEST_OFFSET(DailyCountersBase, word_4c, 0x4c);
GUEST_OFFSET(DailyCountersBase, word_50, 0x50);
GUEST_OFFSET(DailyCountersBase, word_54, 0x54);
GUEST_OFFSET(DailyCountersBase, word_58, 0x58);
GUEST_OFFSET(DailyCountersBase, word_5c, 0x5c);
GUEST_OFFSET(DailyCountersBase, word_60, 0x60);
GUEST_OFFSET(DailyCountersBase, word_64, 0x64);
GUEST_OFFSET(DailyCountersBase, word_68, 0x68);
GUEST_OFFSET(DailyCountersBase, word_6c, 0x6c);
GUEST_OFFSET(DailyCountersBase, word_70, 0x70);
GUEST_OFFSET(DailyCountersBase, word_74, 0x74);
GUEST_OFFSET(DailyCountersBase, word_78, 0x78);
GUEST_OFFSET(DailyCountersBase, word_7c, 0x7c);
GUEST_OFFSET(DailyCountersBase, word_80, 0x80);
GUEST_OFFSET(DailyCountersBase, word_84, 0x84);
GUEST_OFFSET(DailyCountersBase, word_88, 0x88);
GUEST_OFFSET(DailyCountersBase, word_8c, 0x8c);
GUEST_OFFSET(DailyCountersBase, word_90, 0x90);
GUEST_OFFSET(DailyCountersBase, word_94, 0x94);
GUEST_OFFSET(DailyCountersBase, word_98, 0x98);
GUEST_OFFSET(DailyCountersBase, word_9c, 0x9c);
GUEST_OFFSET(DailyCountersBase, word_a0, 0xa0);
GUEST_OFFSET(DailyCountersBase, word_a4, 0xa4);
GUEST_OFFSET(DailyCountersBase, word_a8, 0xa8);
GUEST_OFFSET(DailyCountersBase, word_ac, 0xac);
GUEST_OFFSET(DailyCountersBase, word_b0, 0xb0);
GUEST_OFFSET(DailyCountersBase, word_b4, 0xb4);
GUEST_OFFSET(DailyCountersBase, word_b8, 0xb8);
GUEST_OFFSET(DailyCountersBase, word_bc, 0xbc);
GUEST_OFFSET(DailyCountersBase, word_c0, 0xc0);
GUEST_OFFSET(DailyCountersBase, word_c4, 0xc4);
GUEST_OFFSET(DailyCountersBase, word_c8, 0xc8);
GUEST_OFFSET(DailyCountersBase, word_cc, 0xcc);
GUEST_OFFSET(DailyCountersBase, word_d0, 0xd0);
GUEST_OFFSET(DailyCountersBase, word_d4, 0xd4);
GUEST_OFFSET(DailyCountersBase, word_d8, 0xd8);
GUEST_OFFSET(DailyCountersBase, word_dc, 0xdc);
GUEST_OFFSET(DailyCountersBase, word_e0, 0xe0);
GUEST_OFFSET(DailyCountersBase, word_e4, 0xe4);
GUEST_OFFSET(DailyCountersBase, word_e8, 0xe8);
GUEST_OFFSET(DailyCountersBase, word_ec, 0xec);
GUEST_OFFSET(DailyCountersBase, word_f0, 0xf0);
GUEST_OFFSET(DailyCountersBase, word_f4, 0xf4);
GUEST_OFFSET(DailyCountersBase, word_f8, 0xf8);
GUEST_OFFSET(DailyCountersBase, word_fc, 0xfc);
GUEST_OFFSET(DailyCountersBase, word_100, 0x100);
GUEST_OFFSET(DailyCountersBase, word_104, 0x104);
GUEST_OFFSET(DailyCountersBase, word_108, 0x108);
GUEST_OFFSET(DailyCountersBase, word_10c, 0x10c);
GUEST_OFFSET(DailyCountersBase, word_110, 0x110);
GUEST_OFFSET(DailyCountersBase, word_114, 0x114);
GUEST_OFFSET(DailyCountersBase, word_118, 0x118);
GUEST_OFFSET(DailyCountersBase, word_11c, 0x11c);
GUEST_OFFSET(DailyCountersBase, word_120, 0x120);
GUEST_OFFSET(DailyCountersBase, word_124, 0x124);
GUEST_OFFSET(DailyCountersBase, word_128, 0x128);
GUEST_OFFSET(DailyCountersBase, word_12c, 0x12c);
GUEST_OFFSET(DailyCountersBase, word_130, 0x130);
GUEST_OFFSET(DailyCountersBase, word_134, 0x134);
GUEST_OFFSET(DailyCountersBase, word_138, 0x138);
GUEST_OFFSET(DailyCountersBase, word_13c, 0x13c);
GUEST_OFFSET(DailyCountersBase, word_140, 0x140);
GUEST_OFFSET(DailyCountersBase, word_144, 0x144);
GUEST_OFFSET(DailyCountersBase, word_148, 0x148);
GUEST_OFFSET(DailyCountersBase, word_14c, 0x14c);
GUEST_OFFSET(DailyCountersBase, word_150, 0x150);
GUEST_OFFSET(DailyCountersBase, word_154, 0x154);
GUEST_OFFSET(DailyCountersBase, word_158, 0x158);
GUEST_OFFSET(DailyCountersBase, word_15c, 0x15c);
GUEST_OFFSET(DailyCountersBase, word_160, 0x160);
GUEST_OFFSET(DailyCountersBase, word_164, 0x164);
GUEST_OFFSET(DailyCountersBase, word_168, 0x168);
GUEST_OFFSET(DailyCountersBase, word_16c, 0x16c);
GUEST_OFFSET(DailyCountersBase, word_170, 0x170);
GUEST_OFFSET(DailyCountersBase, word_174, 0x174);
GUEST_OFFSET(DailyCountersBase, word_178, 0x178);
GUEST_OFFSET(DailyCountersBase, word_17c, 0x17c);
GUEST_OFFSET(DailyCountersBase, word_180, 0x180);
GUEST_OFFSET(DailyCountersBase, word_184, 0x184);
GUEST_OFFSET(DailyCountersBase, word_188, 0x188);
GUEST_OFFSET(DailyCountersBase, word_18c, 0x18c);
GUEST_OFFSET(DailyCountersBase, word_190, 0x190);
GUEST_OFFSET(DailyCountersBase, word_194, 0x194);
GUEST_OFFSET(DailyCountersBase, word_198, 0x198);
GUEST_OFFSET(DailyCountersBase, word_19c, 0x19c);
GUEST_OFFSET(DailyCountersBase, word_1a0, 0x1a0);
GUEST_OFFSET(DailyCountersBase, word_1a4, 0x1a4);
GUEST_OFFSET(DailyCountersBase, word_1a8, 0x1a8);
GUEST_OFFSET(DailyCountersBase, word_1ac, 0x1ac);
GUEST_OFFSET(DailyCountersBase, word_1b0, 0x1b0);
GUEST_OFFSET(DailyCountersBase, word_1b4, 0x1b4);
GUEST_OFFSET(DailyCountersBase, word_1b8, 0x1b8);
GUEST_OFFSET(DailyCountersBase, word_1bc, 0x1bc);
GUEST_OFFSET(DailyCountersBase, word_1c0, 0x1c0);
GUEST_OFFSET(DailyCountersBase, word_1c4, 0x1c4);
GUEST_OFFSET(DailyCountersBase, word_1c8, 0x1c8);
GUEST_OFFSET(DailyCountersBase, word_1cc, 0x1cc);
GUEST_OFFSET(DailyCountersBase, word_1d0, 0x1d0);
GUEST_OFFSET(DailyCountersBase, word_1d4, 0x1d4);
GUEST_OFFSET(DailyCountersBase, word_1d8, 0x1d8);
GUEST_OFFSET(DailyCountersBase, word_1dc, 0x1dc);
GUEST_OFFSET(DailyCountersBase, word_1e0, 0x1e0);
GUEST_OFFSET(DailyCountersBase, word_1e4, 0x1e4);
GUEST_OFFSET(DailyCountersBase, word_1e8, 0x1e8);
GUEST_OFFSET(DailyCountersBase, word_1ec, 0x1ec);
GUEST_OFFSET(DailyCountersBase, word_1f0, 0x1f0);
GUEST_OFFSET(DailyCountersBase, word_1f4, 0x1f4);
GUEST_OFFSET(DailyCountersBase, word_1f8, 0x1f8);
GUEST_OFFSET(DailyCountersBase, word_1fc, 0x1fc);
GUEST_OFFSET(DailyCountersBase, word_200, 0x200);
GUEST_OFFSET(DailyCountersBase, word_204, 0x204);
GUEST_OFFSET(DailyCountersBase, word_208, 0x208);
GUEST_OFFSET(DailyCountersBase, word_20c, 0x20c);
GUEST_OFFSET(DailyCountersBase, word_210, 0x210);
GUEST_OFFSET(DailyCountersBase, word_214, 0x214);
GUEST_OFFSET(DailyCountersBase, word_218, 0x218);
GUEST_OFFSET(DailyCountersBase, word_21c, 0x21c);
GUEST_OFFSET(DailyCountersBase, word_220, 0x220);
GUEST_OFFSET(DailyCountersBase, word_224, 0x224);
GUEST_OFFSET(DailyCountersBase, word_228, 0x228);
GUEST_OFFSET(DailyCountersBase, word_22c, 0x22c);
GUEST_OFFSET(DailyCountersBase, word_230, 0x230);
GUEST_OFFSET(DailyCountersBase, word_234, 0x234);
GUEST_OFFSET(DailyCountersBase, word_238, 0x238);
GUEST_OFFSET(DailyCountersBase, word_23c, 0x23c);
GUEST_OFFSET(DailyCountersBase, word_240, 0x240);
GUEST_OFFSET(DailyCountersBase, word_244, 0x244);
GUEST_OFFSET(DailyCountersBase, word_248, 0x248);
GUEST_OFFSET(DailyCountersBase, word_24c, 0x24c);
GUEST_OFFSET(DailyCountersBase, word_250, 0x250);
GUEST_OFFSET(DailyCountersBase, word_254, 0x254);
GUEST_OFFSET(DailyCountersBase, word_258, 0x258);
GUEST_OFFSET(DailyCountersBase, word_25c, 0x25c);
GUEST_OFFSET(DailyCountersBase, word_260, 0x260);
GUEST_OFFSET(DailyCountersBase, word_264, 0x264);
GUEST_OFFSET(DailyCountersBase, word_268, 0x268);
GUEST_OFFSET(DailyCountersBase, word_26c, 0x26c);
GUEST_OFFSET(DailyCountersBase, word_270, 0x270);
GUEST_OFFSET(DailyCountersBase, word_274, 0x274);
GUEST_OFFSET(DailyCountersBase, word_278, 0x278);
GUEST_OFFSET(DailyCountersBase, word_27c, 0x27c);
GUEST_OFFSET(DailyCountersBase, word_280, 0x280);
GUEST_OFFSET(DailyCountersBase, word_284, 0x284);
GUEST_OFFSET(DailyCountersBase, word_288, 0x288);
GUEST_OFFSET(DailyCountersBase, word_28c, 0x28c);
GUEST_OFFSET(DailyCountersBase, word_290, 0x290);
GUEST_OFFSET(DailyCountersBase, word_294, 0x294);
GUEST_OFFSET(DailyCountersBase, word_298, 0x298);
GUEST_OFFSET(DailyCountersBase, word_29c, 0x29c);
GUEST_OFFSET(DailyCountersBase, word_2a0, 0x2a0);
GUEST_OFFSET(DailyCountersBase, word_2a4, 0x2a4);
GUEST_OFFSET(DailyCountersBase, word_2a8, 0x2a8);
GUEST_OFFSET(DailyCountersBase, word_2ac, 0x2ac);
GUEST_OFFSET(DailyCountersBase, word_2b0, 0x2b0);
GUEST_OFFSET(DailyCountersBase, word_2b4, 0x2b4);
GUEST_OFFSET(DailyCountersBase, word_2b8, 0x2b8);
GUEST_OFFSET(DailyCountersBase, word_2bc, 0x2bc);
GUEST_OFFSET(DailyCountersBase, word_2c0, 0x2c0);
GUEST_OFFSET(DailyCountersBase, word_2c4, 0x2c4);
GUEST_OFFSET(DailyCountersBase, word_2c8, 0x2c8);
GUEST_OFFSET(DailyCountersBase, word_2cc, 0x2cc);
GUEST_OFFSET(DailyCountersBase, word_2d0, 0x2d0);
GUEST_OFFSET(DailyCountersBase, word_2d4, 0x2d4);
GUEST_OFFSET(DailyCountersBase, word_2d8, 0x2d8);
GUEST_OFFSET(DailyCountersBase, word_2dc, 0x2dc);
GUEST_OFFSET(DailyCountersBase, word_2e0, 0x2e0);
GUEST_OFFSET(DailyCountersBase, word_2e4, 0x2e4);
GUEST_OFFSET(DailyCountersBase, word_2e8, 0x2e8);
GUEST_OFFSET(DailyCountersBase, word_2ec, 0x2ec);
GUEST_OFFSET(DailyCountersBase, word_2f0, 0x2f0);
GUEST_OFFSET(DailyCountersBase, word_2f4, 0x2f4);
GUEST_OFFSET(DailyCountersBase, word_2f8, 0x2f8);
GUEST_OFFSET(DailyCountersBase, word_2fc, 0x2fc);
GUEST_OFFSET(DailyCountersBase, word_300, 0x300);
GUEST_OFFSET(DailyCountersBase, word_304, 0x304);
GUEST_OFFSET(DailyCountersBase, word_308, 0x308);
GUEST_OFFSET(DailyCountersBase, word_30c, 0x30c);
GUEST_OFFSET(DailyCountersBase, word_310, 0x310);
GUEST_OFFSET(DailyCountersBase, word_314, 0x314);
GUEST_OFFSET(DailyCountersBase, word_318, 0x318);
GUEST_OFFSET(DailyCountersBase, word_31c, 0x31c);
GUEST_OFFSET(DailyCountersBase, word_320, 0x320);
GUEST_OFFSET(DailyCountersBase, word_324, 0x324);
GUEST_OFFSET(DailyCountersBase, word_328, 0x328);
GUEST_OFFSET(DailyCountersBase, word_32c, 0x32c);
GUEST_OFFSET(DailyCountersBase, word_330, 0x330);
GUEST_OFFSET(DailyCountersBase, word_334, 0x334);
GUEST_OFFSET(DailyCountersBase, word_338, 0x338);
GUEST_OFFSET(DailyCountersBase, word_33c, 0x33c);
GUEST_OFFSET(DailyCountersBase, word_340, 0x340);
GUEST_OFFSET(DailyCountersBase, word_344, 0x344);
GUEST_OFFSET(DailyCountersBase, word_348, 0x348);
GUEST_OFFSET(DailyCountersBase, word_34c, 0x34c);
GUEST_OFFSET(DailyCountersBase, word_350, 0x350);
GUEST_OFFSET(DailyCountersBase, word_354, 0x354);
GUEST_OFFSET(DailyCountersBase, word_358, 0x358);
GUEST_OFFSET(DailyCountersBase, word_35c, 0x35c);
GUEST_OFFSET(DailyCountersBase, word_360, 0x360);
GUEST_OFFSET(DailyCountersBase, word_364, 0x364);
GUEST_OFFSET(DailyCountersBase, word_368, 0x368);
GUEST_OFFSET(DailyCountersBase, word_36c, 0x36c);
GUEST_OFFSET(DailyCountersBase, word_370, 0x370);
GUEST_OFFSET(DailyCountersBase, word_374, 0x374);
GUEST_OFFSET(DailyCountersBase, word_378, 0x378);
GUEST_OFFSET(DailyCountersBase, word_37c, 0x37c);
GUEST_OFFSET(DailyCountersBase, word_380, 0x380);
GUEST_OFFSET(DailyCountersBase, word_384, 0x384);
GUEST_OFFSET(DailyCountersBase, word_388, 0x388);
GUEST_OFFSET(DailyCountersBase, word_38c, 0x38c);
GUEST_OFFSET(DailyCountersBase, word_390, 0x390);
GUEST_OFFSET(DailyCountersBase, word_394, 0x394);
GUEST_OFFSET(DailyCountersBase, word_398, 0x398);
GUEST_OFFSET(DailyCountersBase, word_39c, 0x39c);
GUEST_OFFSET(DailyCountersBase, word_3a0, 0x3a0);
GUEST_OFFSET(DailyCountersBase, word_3a4, 0x3a4);
GUEST_OFFSET(DailyCountersBase, word_3a8, 0x3a8);
GUEST_OFFSET(DailyCountersBase, word_3ac, 0x3ac);
GUEST_OFFSET(DailyCountersBase, word_3b0, 0x3b0);
GUEST_OFFSET(DailyCountersBase, word_3b4, 0x3b4);
GUEST_OFFSET(DailyCountersBase, word_3b8, 0x3b8);
GUEST_OFFSET(DailyCountersBase, word_3bc, 0x3bc);
GUEST_OFFSET(DailyCountersBase, word_3c0, 0x3c0);
GUEST_OFFSET(DailyCountersBase, word_3c4, 0x3c4);
GUEST_OFFSET(DailyCountersBase, word_3c8, 0x3c8);
GUEST_OFFSET(DailyCountersBase, word_3cc, 0x3cc);
GUEST_OFFSET(DailyCountersBase, word_3d0, 0x3d0);
GUEST_OFFSET(DailyCountersBase, word_3d4, 0x3d4);
GUEST_OFFSET(DailyCountersBase, word_3d8, 0x3d8);
GUEST_OFFSET(DailyCountersBase, word_3dc, 0x3dc);
GUEST_OFFSET(DailyCountersBase, word_3e0, 0x3e0);
GUEST_OFFSET(DailyCountersBase, word_3e4, 0x3e4);
GUEST_OFFSET(DailyCountersBase, word_3e8, 0x3e8);
GUEST_OFFSET(DailyCountersBase, word_3ec, 0x3ec);
GUEST_OFFSET(DailyCountersBase, word_3f0, 0x3f0);
GUEST_OFFSET(DailyCountersBase, word_3f4, 0x3f4);
GUEST_OFFSET(DailyCountersBase, word_3f8, 0x3f8);
GUEST_OFFSET(DailyCountersBase, word_3fc, 0x3fc);
GUEST_OFFSET(DailyCountersBase, word_400, 0x400);
GUEST_OFFSET(DailyCountersBase, word_404, 0x404);
GUEST_OFFSET(DailyCountersBase, word_408, 0x408);
GUEST_OFFSET(DailyCountersBase, word_40c, 0x40c);
GUEST_OFFSET(DailyCountersBase, word_410, 0x410);
GUEST_OFFSET(DailyCountersBase, word_414, 0x414);
GUEST_OFFSET(DailyCountersBase, word_418, 0x418);
GUEST_OFFSET(DailyCountersBase, word_41c, 0x41c);
GUEST_OFFSET(DailyCountersBase, word_420, 0x420);
GUEST_OFFSET(DailyCountersBase, word_424, 0x424);
GUEST_OFFSET(DailyCountersBase, word_428, 0x428);
GUEST_OFFSET(DailyCountersBase, word_42c, 0x42c);
GUEST_OFFSET(DailyCountersBase, word_430, 0x430);
GUEST_OFFSET(DailyCountersBase, word_434, 0x434);
GUEST_OFFSET(DailyCountersBase, word_438, 0x438);
GUEST_OFFSET(DailyCountersBase, word_43c, 0x43c);
GUEST_OFFSET(DailyCountersBase, word_440, 0x440);
GUEST_OFFSET(DailyCountersBase, word_444, 0x444);
GUEST_OFFSET(DailyCountersBase, word_448, 0x448);
GUEST_OFFSET(DailyCountersBase, word_44c, 0x44c);
GUEST_OFFSET(DailyCountersBase, word_450, 0x450);
GUEST_OFFSET(DailyCountersBase, word_454, 0x454);
GUEST_OFFSET(DailyCountersBase, word_458, 0x458);
GUEST_OFFSET(DailyCountersBase, word_45c, 0x45c);
GUEST_OFFSET(DailyCountersBase, word_460, 0x460);
GUEST_OFFSET(DailyCountersBase, word_464, 0x464);
GUEST_OFFSET(DailyCountersBase, word_468, 0x468);
GUEST_OFFSET(DailyCountersBase, word_46c, 0x46c);
GUEST_OFFSET(DailyCountersBase, word_470, 0x470);
GUEST_OFFSET(DailyCountersBase, word_474, 0x474);
GUEST_OFFSET(DailyCountersBase, word_478, 0x478);
GUEST_OFFSET(DailyCountersBase, word_47c, 0x47c);
GUEST_OFFSET(DailyCountersBase, word_480, 0x480);
GUEST_OFFSET(DailyCountersBase, word_484, 0x484);
GUEST_OFFSET(DailyCountersBase, word_488, 0x488);
GUEST_OFFSET(DailyCountersBase, word_48c, 0x48c);
GUEST_OFFSET(DailyCountersBase, word_490, 0x490);
GUEST_OFFSET(DailyCountersBase, word_494, 0x494);
GUEST_OFFSET(DailyCountersBase, word_498, 0x498);
GUEST_OFFSET(DailyCountersBase, word_49c, 0x49c);
GUEST_OFFSET(DailyCountersBase, word_4a0, 0x4a0);
GUEST_OFFSET(DailyCountersBase, word_4a4, 0x4a4);
GUEST_OFFSET(DailyCountersBase, word_4a8, 0x4a8);
GUEST_OFFSET(DailyCountersBase, word_4ac, 0x4ac);
GUEST_OFFSET(DailyCountersBase, word_4b0, 0x4b0);
GUEST_OFFSET(DailyCountersBase, word_4b4, 0x4b4);
GUEST_OFFSET(DailyCountersBase, word_4b8, 0x4b8);
GUEST_OFFSET(DailyCountersBase, word_4bc, 0x4bc);
GUEST_OFFSET(DailyCountersBase, word_4c0, 0x4c0);
GUEST_OFFSET(DailyCountersBase, word_4c4, 0x4c4);
GUEST_OFFSET(DailyCountersBase, word_4c8, 0x4c8);
GUEST_OFFSET(DailyCountersBase, word_4cc, 0x4cc);
GUEST_OFFSET(DailyCountersBase, word_4d0, 0x4d0);
GUEST_OFFSET(DailyCountersBase, word_4d4, 0x4d4);
GUEST_OFFSET(DailyCountersBase, word_4d8, 0x4d8);
GUEST_OFFSET(DailyCountersBase, word_4dc, 0x4dc);
GUEST_OFFSET(DailyCountersBase, word_4e0, 0x4e0);
GUEST_OFFSET(DailyCountersBase, word_4e4, 0x4e4);
GUEST_OFFSET(DailyCountersBase, word_4e8, 0x4e8);
GUEST_OFFSET(DailyCountersBase, word_4ec, 0x4ec);
GUEST_OFFSET(DailyCountersBase, word_4f0, 0x4f0);
GUEST_OFFSET(DailyCountersBase, word_4f4, 0x4f4);
GUEST_OFFSET(DailyCountersBase, word_4f8, 0x4f8);
GUEST_OFFSET(DailyCountersBase, word_4fc, 0x4fc);
GUEST_OFFSET(DailyCountersBase, word_500, 0x500);
GUEST_OFFSET(DailyCountersBase, word_504, 0x504);
GUEST_OFFSET(DailyCountersBase, word_508, 0x508);
GUEST_OFFSET(DailyCountersBase, word_50c, 0x50c);
GUEST_OFFSET(DailyCountersBase, word_510, 0x510);
GUEST_OFFSET(DailyCountersBase, word_514, 0x514);
GUEST_OFFSET(DailyCountersBase, word_518, 0x518);
GUEST_OFFSET(DailyCountersBase, word_51c, 0x51c);
GUEST_OFFSET(DailyCountersBase, word_520, 0x520);
GUEST_OFFSET(DailyCountersBase, word_524, 0x524);
GUEST_OFFSET(DailyCountersBase, word_528, 0x528);
GUEST_OFFSET(DailyCountersBase, word_52c, 0x52c);
GUEST_OFFSET(DailyCountersBase, word_530, 0x530);
GUEST_OFFSET(DailyCountersBase, word_534, 0x534);
GUEST_OFFSET(DailyCountersBase, word_538, 0x538);
GUEST_OFFSET(DailyCountersBase, word_53c, 0x53c);
GUEST_OFFSET(DailyCountersBase, word_540, 0x540);
GUEST_OFFSET(DailyCountersBase, word_544, 0x544);
GUEST_OFFSET(DailyCountersBase, word_548, 0x548);
GUEST_OFFSET(DailyCountersBase, word_54c, 0x54c);
GUEST_OFFSET(DailyCountersBase, word_550, 0x550);
GUEST_OFFSET(DailyCountersBase, word_554, 0x554);
GUEST_OFFSET(DailyCountersBase, word_558, 0x558);
GUEST_OFFSET(DailyCountersBase, word_55c, 0x55c);
GUEST_OFFSET(DailyCountersBase, word_560, 0x560);
GUEST_OFFSET(DailyCountersBase, word_564, 0x564);
GUEST_OFFSET(DailyCountersBase, word_568, 0x568);
GUEST_OFFSET(DailyCountersBase, word_56c, 0x56c);
GUEST_OFFSET(DailyCountersBase, word_570, 0x570);
GUEST_OFFSET(DailyCountersBase, word_574, 0x574);
GUEST_OFFSET(DailyCountersBase, word_578, 0x578);
GUEST_OFFSET(DailyCountersBase, word_57c, 0x57c);
GUEST_OFFSET(DailyCountersBase, word_580, 0x580);
GUEST_OFFSET(DailyCountersBase, word_584, 0x584);
GUEST_OFFSET(DailyCountersBase, word_588, 0x588);
GUEST_OFFSET(DailyCountersBase, word_58c, 0x58c);
GUEST_OFFSET(DailyCountersBase, word_590, 0x590);
GUEST_OFFSET(DailyCountersBase, word_594, 0x594);
GUEST_OFFSET(DailyCountersBase, word_598, 0x598);
GUEST_OFFSET(DailyCountersBase, word_59c, 0x59c);
GUEST_OFFSET(DailyCountersBase, word_5a0, 0x5a0);
GUEST_OFFSET(DailyCountersBase, word_5a4, 0x5a4);
GUEST_OFFSET(DailyCountersBase, word_5a8, 0x5a8);
GUEST_OFFSET(DailyCountersBase, word_5ac, 0x5ac);
GUEST_OFFSET(DailyCountersBase, word_5b0, 0x5b0);
GUEST_OFFSET(DailyCountersBase, word_5b4, 0x5b4);
GUEST_OFFSET(DailyCountersBase, word_5b8, 0x5b8);
GUEST_OFFSET(DailyCountersBase, word_5bc, 0x5bc);
GUEST_OFFSET(DailyCountersBase, word_5c0, 0x5c0);
GUEST_OFFSET(DailyCountersBase, word_5c4, 0x5c4);
GUEST_OFFSET(DailyCountersBase, word_5c8, 0x5c8);
GUEST_OFFSET(DailyCountersBase, word_5cc, 0x5cc);
GUEST_OFFSET(DailyCountersBase, word_5d0, 0x5d0);
GUEST_OFFSET(DailyCountersBase, word_5d4, 0x5d4);
GUEST_OFFSET(DailyCountersBase, word_5d8, 0x5d8);
GUEST_OFFSET(DailyCountersBase, word_5dc, 0x5dc);
GUEST_OFFSET(DailyCountersBase, word_5e0, 0x5e0);
GUEST_OFFSET(DailyCountersBase, word_5e4, 0x5e4);
GUEST_OFFSET(DailyCountersBase, word_5e8, 0x5e8);
GUEST_OFFSET(DailyCountersBase, word_5ec, 0x5ec);
GUEST_OFFSET(DailyCountersBase, word_5f0, 0x5f0);
GUEST_OFFSET(DailyCountersBase, word_5f4, 0x5f4);
GUEST_OFFSET(DailyCountersBase, word_5f8, 0x5f8);
GUEST_OFFSET(DailyCountersBase, word_5fc, 0x5fc);
GUEST_OFFSET(DailyCountersBase, word_600, 0x600);
GUEST_OFFSET(DailyCountersBase, word_604, 0x604);
GUEST_OFFSET(DailyCountersBase, word_608, 0x608);
GUEST_OFFSET(DailyCountersBase, word_60c, 0x60c);
GUEST_OFFSET(DailyCountersBase, word_610, 0x610);
GUEST_OFFSET(DailyCountersBase, word_614, 0x614);
GUEST_OFFSET(DailyCountersBase, word_618, 0x618);
GUEST_OFFSET(DailyCountersBase, word_61c, 0x61c);
GUEST_OFFSET(DailyCountersBase, word_620, 0x620);
GUEST_OFFSET(DailyCountersBase, word_624, 0x624);
GUEST_OFFSET(DailyCountersBase, word_628, 0x628);
GUEST_OFFSET(DailyCountersBase, word_62c, 0x62c);
GUEST_OFFSET(DailyCountersBase, word_630, 0x630);
GUEST_OFFSET(DailyCountersBase, word_634, 0x634);
GUEST_OFFSET(DailyCountersBase, word_638, 0x638);
GUEST_OFFSET(DailyCountersBase, word_63c, 0x63c);

struct __attribute__((packed)) Local_006b9038_r0_3 {
    u8 unknown_0[0x180];  // (not used here)
    u32 word_180;
    u32 word_184;
    u32 word_188;
};
GUEST_OFFSET(Local_006b9038_r0_3, word_180, 0x180);
GUEST_OFFSET(Local_006b9038_r0_3, word_184, 0x184);
GUEST_OFFSET(Local_006b9038_r0_3, word_188, 0x188);

struct __attribute__((packed)) Local_006b9038_r1_1 {
    u8 unknown_0[0x760];  // (not used here)
    u32 word_760;
    u32 word_764;
    u32 word_768;
    u32 word_76c;
};
GUEST_OFFSET(Local_006b9038_r1_1, word_760, 0x760);
GUEST_OFFSET(Local_006b9038_r1_1, word_764, 0x764);
GUEST_OFFSET(Local_006b9038_r1_1, word_768, 0x768);
GUEST_OFFSET(Local_006b9038_r1_1, word_76c, 0x76c);

struct __attribute__((packed)) Local_006b9038_r1_2 {
    u8 unknown_0[0xd00];  // (not used here)
    u32 word_d00;
    u32 word_d04;
    u32 word_d08;
    u32 word_d0c;
};
GUEST_OFFSET(Local_006b9038_r1_2, word_d00, 0xd00);
GUEST_OFFSET(Local_006b9038_r1_2, word_d04, 0xd04);
GUEST_OFFSET(Local_006b9038_r1_2, word_d08, 0xd08);
GUEST_OFFSET(Local_006b9038_r1_2, word_d0c, 0xd0c);

struct __attribute__((packed)) Local_006b9038_r1_3 {
    u8 unknown_0[0x18c];  // (not used here)
    u32 word_18c;
    u32 word_190;
    u32 word_194;
    u32 word_198;
};
GUEST_OFFSET(Local_006b9038_r1_3, word_18c, 0x18c);
GUEST_OFFSET(Local_006b9038_r1_3, word_190, 0x190);
GUEST_OFFSET(Local_006b9038_r1_3, word_194, 0x194);
GUEST_OFFSET(Local_006b9038_r1_3, word_198, 0x198);

struct __attribute__((packed)) Local_006b9038_r1_4 {
    u8 unknown_0[0x234];  // (not used here)
    u32 word_234;
    u32 word_238;
    u32 word_23c;
    u32 word_240;
};
GUEST_OFFSET(Local_006b9038_r1_4, word_234, 0x234);
GUEST_OFFSET(Local_006b9038_r1_4, word_238, 0x238);
GUEST_OFFSET(Local_006b9038_r1_4, word_23c, 0x23c);
GUEST_OFFSET(Local_006b9038_r1_4, word_240, 0x240);

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> clear_aligned;

void DailyCountersBase__construct(gptr<DailyCountersBase> daily_counters_base) {
    u32 r0 = daily_counters_base.addr();
    gptr<Local_006b9038_r1_4> r1_4 = gptr<Local_006b9038_r1_4>(0u);
    u32 r5 = 0u;
    daily_counters_base->word_0 = r5;
    daily_counters_base->word_4 = r5;
    daily_counters_base->word_8 = r5;
    daily_counters_base->word_c = r5;
    daily_counters_base->word_10 = r5;
    daily_counters_base->word_14 = r5;
    daily_counters_base->word_18 = r5;
    daily_counters_base->word_1c = r5;
    daily_counters_base->word_20 = r5;
    daily_counters_base->word_24 = r5;
    daily_counters_base->word_28 = r5;
    daily_counters_base->word_2c = r5;
    daily_counters_base->word_30 = r5;
    u32 r4 = r0;
    daily_counters_base->word_34 = r5;
    daily_counters_base->word_38 = r5;
    daily_counters_base->word_3c = r5;
    daily_counters_base->word_40 = r5;
    daily_counters_base->word_44 = r5;
    daily_counters_base->word_48 = r5;
    daily_counters_base->word_4c = r5;
    daily_counters_base->word_50 = r5;
    daily_counters_base->word_54 = r5;
    daily_counters_base->word_58 = r5;
    daily_counters_base->word_5c = r5;
    daily_counters_base->word_60 = r5;
    daily_counters_base->word_64 = r5;
    daily_counters_base->word_68 = r5;
    daily_counters_base->word_6c = r5;
    daily_counters_base->word_70 = r5;
    daily_counters_base->word_74 = r5;
    daily_counters_base->word_78 = r5;
    daily_counters_base->word_7c = r5;
    daily_counters_base->word_80 = r5;
    daily_counters_base->word_84 = r5;
    daily_counters_base->word_88 = r5;
    daily_counters_base->word_8c = r5;
    daily_counters_base->word_90 = r5;
    daily_counters_base->word_94 = r5;
    daily_counters_base->word_98 = r5;
    daily_counters_base->word_9c = r5;
    daily_counters_base->word_a0 = r5;
    daily_counters_base->word_a4 = r5;
    daily_counters_base->word_a8 = r5;
    daily_counters_base->word_ac = r5;
    daily_counters_base->word_b0 = r5;
    daily_counters_base->word_b4 = r5;
    daily_counters_base->word_b8 = r5;
    daily_counters_base->word_bc = r5;
    daily_counters_base->word_c0 = r5;
    daily_counters_base->word_c4 = r5;
    daily_counters_base->word_c8 = r5;
    daily_counters_base->word_cc = r5;
    daily_counters_base->word_d0 = r5;
    daily_counters_base->word_d4 = r5;
    daily_counters_base->word_d8 = r5;
    daily_counters_base->word_dc = r5;
    daily_counters_base->word_e0 = r5;
    daily_counters_base->word_e4 = r5;
    daily_counters_base->word_e8 = r5;
    daily_counters_base->word_ec = r5;
    daily_counters_base->word_f0 = r5;
    daily_counters_base->word_f4 = r5;
    daily_counters_base->word_f8 = r5;
    daily_counters_base->word_fc = r5;
    daily_counters_base->word_100 = r5;
    daily_counters_base->word_104 = r5;
    daily_counters_base->word_108 = r5;
    daily_counters_base->word_10c = r5;
    daily_counters_base->word_110 = r5;
    daily_counters_base->word_114 = r5;
    daily_counters_base->word_118 = r5;
    daily_counters_base->word_11c = r5;
    daily_counters_base->word_120 = r5;
    daily_counters_base->word_124 = r5;
    daily_counters_base->word_128 = r5;
    daily_counters_base->word_12c = r5;
    daily_counters_base->word_130 = r5;
    daily_counters_base->word_134 = r5;
    daily_counters_base->word_138 = r5;
    daily_counters_base->word_13c = r5;
    daily_counters_base->word_140 = r5;
    daily_counters_base->word_144 = r5;
    daily_counters_base->word_148 = r5;
    daily_counters_base->word_14c = r5;
    daily_counters_base->word_150 = r5;
    daily_counters_base->word_154 = r5;
    daily_counters_base->word_158 = r5;
    daily_counters_base->word_15c = r5;
    daily_counters_base->word_160 = r5;
    daily_counters_base->word_164 = r5;
    daily_counters_base->word_168 = r5;
    daily_counters_base->word_16c = r5;
    daily_counters_base->word_170 = r5;
    daily_counters_base->word_174 = r5;
    daily_counters_base->word_178 = r5;
    daily_counters_base->word_17c = r5;
    daily_counters_base->word_180 = r5;
    daily_counters_base->word_184 = r5;
    daily_counters_base->word_188 = r5;
    daily_counters_base->word_18c = r5;
    daily_counters_base->word_190 = r5;
    daily_counters_base->word_194 = r5;
    daily_counters_base->word_198 = r5;
    daily_counters_base->word_19c = r5;
    daily_counters_base->word_1a0 = r5;
    daily_counters_base->word_1a4 = r5;
    daily_counters_base->word_1a8 = r5;
    daily_counters_base->word_1ac = r5;
    daily_counters_base->word_1b0 = r5;
    daily_counters_base->word_1b4 = r5;
    daily_counters_base->word_1b8 = r5;
    daily_counters_base->word_1bc = r5;
    daily_counters_base->word_1c0 = r5;
    daily_counters_base->word_1c4 = r5;
    daily_counters_base->word_1c8 = r5;
    daily_counters_base->word_1cc = r5;
    daily_counters_base->word_1d0 = r5;
    daily_counters_base->word_1d4 = r5;
    daily_counters_base->word_1d8 = r5;
    daily_counters_base->word_1dc = r5;
    daily_counters_base->word_1e0 = r5;
    daily_counters_base->word_1e4 = r5;
    daily_counters_base->word_1e8 = r5;
    daily_counters_base->word_1ec = r5;
    daily_counters_base->word_1f0 = r5;
    daily_counters_base->word_1f4 = r5;
    daily_counters_base->word_1f8 = r5;
    daily_counters_base->word_1fc = r5;
    daily_counters_base->word_200 = r5;
    daily_counters_base->word_204 = r5;
    daily_counters_base->word_208 = r5;
    daily_counters_base->word_20c = r5;
    daily_counters_base->word_210 = r5;
    daily_counters_base->word_214 = r5;
    daily_counters_base->word_218 = r5;
    daily_counters_base->word_21c = r5;
    daily_counters_base->word_220 = r5;
    daily_counters_base->word_224 = r5;
    daily_counters_base->word_228 = r5;
    daily_counters_base->word_22c = r5;
    daily_counters_base->word_230 = r5;
    daily_counters_base->word_234 = r5;
    daily_counters_base->word_238 = r5;
    daily_counters_base->word_23c = r5;
    daily_counters_base->word_240 = r5;
    daily_counters_base->word_244 = r5;
    daily_counters_base->word_248 = r5;
    daily_counters_base->word_24c = r5;
    daily_counters_base->word_250 = r5;
    daily_counters_base->word_254 = r5;
    daily_counters_base->word_258 = r5;
    daily_counters_base->word_25c = r5;
    daily_counters_base->word_260 = r5;
    daily_counters_base->word_264 = r5;
    daily_counters_base->word_268 = r5;
    daily_counters_base->word_26c = r5;
    daily_counters_base->word_270 = r5;
    daily_counters_base->word_274 = r5;
    daily_counters_base->word_278 = r5;
    daily_counters_base->word_27c = r5;
    daily_counters_base->word_280 = r5;
    daily_counters_base->word_284 = r5;
    daily_counters_base->word_288 = r5;
    daily_counters_base->word_28c = r5;
    daily_counters_base->word_290 = r5;
    daily_counters_base->word_294 = r5;
    daily_counters_base->word_298 = r5;
    daily_counters_base->word_29c = r5;
    daily_counters_base->word_2a0 = r5;
    daily_counters_base->word_2a4 = r5;
    daily_counters_base->word_2a8 = r5;
    daily_counters_base->word_2ac = r5;
    daily_counters_base->word_2b0 = r5;
    daily_counters_base->word_2b4 = r5;
    daily_counters_base->word_2b8 = r5;
    daily_counters_base->word_2bc = r5;
    daily_counters_base->word_2c0 = r5;
    daily_counters_base->word_2c4 = r5;
    daily_counters_base->word_2c8 = r5;
    daily_counters_base->word_2cc = r5;
    daily_counters_base->word_2d0 = r5;
    daily_counters_base->word_2d4 = r5;
    daily_counters_base->word_2d8 = r5;
    daily_counters_base->word_2dc = r5;
    daily_counters_base->word_2e0 = r5;
    daily_counters_base->word_2e4 = r5;
    daily_counters_base->word_2e8 = r5;
    daily_counters_base->word_2ec = r5;
    daily_counters_base->word_2f0 = r5;
    daily_counters_base->word_2f4 = r5;
    daily_counters_base->word_2f8 = r5;
    daily_counters_base->word_2fc = r5;
    daily_counters_base->word_300 = r5;
    daily_counters_base->word_304 = r5;
    daily_counters_base->word_308 = r5;
    daily_counters_base->word_30c = r5;
    daily_counters_base->word_310 = r5;
    daily_counters_base->word_314 = r5;
    daily_counters_base->word_318 = r5;
    daily_counters_base->word_31c = r5;
    daily_counters_base->word_320 = r5;
    daily_counters_base->word_324 = r5;
    daily_counters_base->word_328 = r5;
    daily_counters_base->word_32c = r5;
    daily_counters_base->word_330 = r5;
    daily_counters_base->word_334 = r5;
    daily_counters_base->word_338 = r5;
    daily_counters_base->word_33c = r5;
    daily_counters_base->word_340 = r5;
    daily_counters_base->word_344 = r5;
    daily_counters_base->word_348 = r5;
    daily_counters_base->word_34c = r5;
    daily_counters_base->word_350 = r5;
    daily_counters_base->word_354 = r5;
    daily_counters_base->word_358 = r5;
    daily_counters_base->word_35c = r5;
    daily_counters_base->word_360 = r5;
    daily_counters_base->word_364 = r5;
    daily_counters_base->word_368 = r5;
    daily_counters_base->word_36c = r5;
    daily_counters_base->word_370 = r5;
    daily_counters_base->word_374 = r5;
    daily_counters_base->word_378 = r5;
    daily_counters_base->word_37c = r5;
    daily_counters_base->word_380 = r5;
    daily_counters_base->word_384 = r5;
    daily_counters_base->word_388 = r5;
    daily_counters_base->word_38c = r5;
    daily_counters_base->word_390 = r5;
    daily_counters_base->word_394 = r5;
    daily_counters_base->word_398 = r5;
    daily_counters_base->word_39c = r5;
    daily_counters_base->word_3a0 = r5;
    daily_counters_base->word_3a4 = r5;
    daily_counters_base->word_3a8 = r5;
    daily_counters_base->word_3ac = r5;
    daily_counters_base->word_3b0 = r5;
    daily_counters_base->word_3b4 = r5;
    daily_counters_base->word_3b8 = r5;
    daily_counters_base->word_3bc = r5;
    daily_counters_base->word_3c0 = r5;
    daily_counters_base->word_3c4 = r5;
    daily_counters_base->word_3c8 = r5;
    daily_counters_base->word_3cc = r5;
    daily_counters_base->word_3d0 = r5;
    daily_counters_base->word_3d4 = r5;
    daily_counters_base->word_3d8 = r5;
    daily_counters_base->word_3dc = r5;
    daily_counters_base->word_3e0 = r5;
    daily_counters_base->word_3e4 = r5;
    daily_counters_base->word_3e8 = r5;
    daily_counters_base->word_3ec = r5;
    daily_counters_base->word_3f0 = r5;
    daily_counters_base->word_3f4 = r5;
    daily_counters_base->word_3f8 = r5;
    daily_counters_base->word_3fc = r5;
    daily_counters_base->word_400 = r5;
    daily_counters_base->word_404 = r5;
    daily_counters_base->word_408 = r5;
    daily_counters_base->word_40c = r5;
    daily_counters_base->word_410 = r5;
    daily_counters_base->word_414 = r5;
    daily_counters_base->word_418 = r5;
    daily_counters_base->word_41c = r5;
    daily_counters_base->word_420 = r5;
    daily_counters_base->word_424 = r5;
    daily_counters_base->word_428 = r5;
    daily_counters_base->word_42c = r5;
    daily_counters_base->word_430 = r5;
    daily_counters_base->word_434 = r5;
    daily_counters_base->word_438 = r5;
    daily_counters_base->word_43c = r5;
    daily_counters_base->word_440 = r5;
    daily_counters_base->word_444 = r5;
    daily_counters_base->word_448 = r5;
    daily_counters_base->word_44c = r5;
    daily_counters_base->word_450 = r5;
    daily_counters_base->word_454 = r5;
    daily_counters_base->word_458 = r5;
    daily_counters_base->word_45c = r5;
    daily_counters_base->word_460 = r5;
    daily_counters_base->word_464 = r5;
    daily_counters_base->word_468 = r5;
    daily_counters_base->word_46c = r5;
    daily_counters_base->word_470 = r5;
    daily_counters_base->word_474 = r5;
    daily_counters_base->word_478 = r5;
    daily_counters_base->word_47c = r5;
    daily_counters_base->word_480 = r5;
    daily_counters_base->word_484 = r5;
    daily_counters_base->word_488 = r5;
    daily_counters_base->word_48c = r5;
    daily_counters_base->word_490 = r5;
    daily_counters_base->word_494 = r5;
    daily_counters_base->word_498 = r5;
    daily_counters_base->word_49c = r5;
    daily_counters_base->word_4a0 = r5;
    daily_counters_base->word_4a4 = r5;
    daily_counters_base->word_4a8 = r5;
    daily_counters_base->word_4ac = r5;
    daily_counters_base->word_4b0 = r5;
    daily_counters_base->word_4b4 = r5;
    daily_counters_base->word_4b8 = r5;
    daily_counters_base->word_4bc = r5;
    daily_counters_base->word_4c0 = r5;
    daily_counters_base->word_4c4 = r5;
    daily_counters_base->word_4c8 = r5;
    daily_counters_base->word_4cc = r5;
    daily_counters_base->word_4d0 = r5;
    daily_counters_base->word_4d4 = r5;
    daily_counters_base->word_4d8 = r5;
    daily_counters_base->word_4dc = r5;
    daily_counters_base->word_4e0 = r5;
    daily_counters_base->word_4e4 = r5;
    daily_counters_base->word_4e8 = r5;
    daily_counters_base->word_4ec = r5;
    daily_counters_base->word_4f0 = r5;
    daily_counters_base->word_4f4 = r5;
    daily_counters_base->word_4f8 = r5;
    daily_counters_base->word_4fc = r5;
    daily_counters_base->word_500 = r5;
    daily_counters_base->word_504 = r5;
    daily_counters_base->word_508 = r5;
    daily_counters_base->word_50c = r5;
    daily_counters_base->word_510 = r5;
    daily_counters_base->word_514 = r5;
    daily_counters_base->word_518 = r5;
    daily_counters_base->word_51c = r5;
    daily_counters_base->word_520 = r5;
    daily_counters_base->word_524 = r5;
    daily_counters_base->word_528 = r5;
    daily_counters_base->word_52c = r5;
    daily_counters_base->word_530 = r5;
    daily_counters_base->word_534 = r5;
    daily_counters_base->word_538 = r5;
    daily_counters_base->word_53c = r5;
    daily_counters_base->word_540 = r5;
    daily_counters_base->word_544 = r5;
    daily_counters_base->word_548 = r5;
    daily_counters_base->word_54c = r5;
    daily_counters_base->word_550 = r5;
    daily_counters_base->word_554 = r5;
    daily_counters_base->word_558 = r5;
    daily_counters_base->word_55c = r5;
    daily_counters_base->word_560 = r5;
    daily_counters_base->word_564 = r5;
    daily_counters_base->word_568 = r5;
    daily_counters_base->word_56c = r5;
    daily_counters_base->word_570 = r5;
    daily_counters_base->word_574 = r5;
    daily_counters_base->word_578 = r5;
    daily_counters_base->word_57c = r5;
    daily_counters_base->word_580 = r5;
    daily_counters_base->word_584 = r5;
    daily_counters_base->word_588 = r5;
    daily_counters_base->word_58c = r5;
    daily_counters_base->word_590 = r5;
    daily_counters_base->word_594 = r5;
    daily_counters_base->word_598 = r5;
    daily_counters_base->word_59c = r5;
    daily_counters_base->word_5a0 = r5;
    daily_counters_base->word_5a4 = r5;
    daily_counters_base->word_5a8 = r5;
    daily_counters_base->word_5ac = r5;
    daily_counters_base->word_5b0 = r5;
    daily_counters_base->word_5b4 = r5;
    daily_counters_base->word_5b8 = r5;
    daily_counters_base->word_5bc = r5;
    daily_counters_base->word_5c0 = r5;
    daily_counters_base->word_5c4 = r5;
    daily_counters_base->word_5c8 = r5;
    daily_counters_base->word_5cc = r5;
    daily_counters_base->word_5d0 = r5;
    daily_counters_base->word_5d4 = r5;
    daily_counters_base->word_5d8 = r5;
    daily_counters_base->word_5dc = r5;
    daily_counters_base->word_5e0 = r5;
    daily_counters_base->word_5e4 = r5;
    daily_counters_base->word_5e8 = r5;
    daily_counters_base->word_5ec = r5;
    daily_counters_base->word_5f0 = r5;
    daily_counters_base->word_5f4 = r5;
    daily_counters_base->word_5f8 = r5;
    daily_counters_base->word_5fc = r5;
    daily_counters_base->word_600 = r5;
    daily_counters_base->word_604 = r5;
    daily_counters_base->word_608 = r5;
    daily_counters_base->word_60c = r5;
    daily_counters_base->word_610 = r5;
    daily_counters_base->word_614 = r5;
    daily_counters_base->word_618 = r5;
    daily_counters_base->word_61c = r5;
    daily_counters_base->word_620 = r5;
    daily_counters_base->word_624 = r5;
    daily_counters_base->word_628 = r5;
    daily_counters_base->word_62c = r5;
    daily_counters_base->word_630 = r5;
    daily_counters_base->word_634 = r5;
    daily_counters_base->word_638 = r5;
    daily_counters_base->word_63c = r5;
    clear_aligned(r4 + 0x640u, 0x120u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r0 = 0u;
    do {
        gptr<Local_006b9038_r1_1> r1_1 = gptr<Local_006b9038_r1_1>(r4 + (r0 << 4));
        r0 += 1u;
        r1_1->word_760 = r5;
        r1_1->word_764 = r5;
        r1_1->word_768 = r5;
        r1_1->word_76c = r5;
        guest::preempt();
    } while (r0 < 0x48u);  // (from the original)
    clear_aligned(r4 + 0xbe0u, 0x120u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r0 = 0u;
    do {
        gptr<Local_006b9038_r1_2> r1_2 = gptr<Local_006b9038_r1_2>(r4 + (r0 << 4));
        r0 += 1u;
        r1_2->word_d00 = r5;
        r1_2->word_d04 = r5;
        r1_2->word_d08 = r5;
        r1_2->word_d0c = r5;
        guest::preempt();
    } while (r0 < 0x48u);  // (from the original)
    gptr<Local_006b9038_r0_3> r0_3 = gptr<Local_006b9038_r0_3>(r4 + 0x1000u);  // (from the original)
    r0_3->word_180 = r5;
    r0_3->word_184 = r5;
    r0_3->word_188 = r5;
    r0 = 0u;
    do {
        gptr<Local_006b9038_r1_3> r1_3 = gptr<Local_006b9038_r1_3>(r4 + (r0 << 4) + 0x1000u);  // (from the original)
        r0 += 1u;
        r1_3->word_18c = r5;
        r1_3->word_190 = r5;
        r1_3->word_194 = r5;
        r1_3->word_198 = r5;
        guest::preempt();
    } while (r0 < 3u);
    clear_aligned(r4 + 0x11bcu, 0x78u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r0 = 0u;
    do {
        r1_4 = gptr<Local_006b9038_r1_4>(r4 + (r0 << 4) + 0x1000u);  // (from the original)
        r0 += 1u;
        r1_4->word_234 = r5;
        r1_4->word_238 = r5;
        r1_4->word_23c = r5;
        r1_4->word_240 = r5;
        guest::preempt();
    } while (r0 < 0x1eu);  // (from the original)
    guest::cpu()->r[1] = r1_4.addr();
}

}  // namespace d_006b9038
GUEST_EXPORT_FRAMED(0x006b9038, d_006b9038::DailyCountersBase__construct, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006b9904: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the item's flags except their top two bits.
namespace d_006b9904 {


void Item__clear_flags_keep_top(gptr<Item> item) {
    item->flags = u16(u32(item->flags) & 0xc000u);  // (from the original)
}

}  // namespace d_006b9904
GUEST_EXPORT(0x006b9904, d_006b9904::Item__clear_flags_keep_top);

// f_006b9934: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// For items of id set d, resets their variant (id 0x70 becomes 0x26, else the flags reset to variant 3).
namespace d_006b9934 {

struct __attribute__((packed)) Local_006b9934_r1_1 {
    u16 half_0;
    u16 half_2;
};
GUEST_OFFSET(Local_006b9934_r1_1, half_0, 0x0);
GUEST_OFFSET(Local_006b9934_r1_1, half_2, 0x2);

inline constexpr guest::Function<0x0076a36c, u32(u32, u32)> Item__is_in_id_set_d;

u32 Item__reset_set_d_variant(u32 item) {
    u32 r0_1 = Item__is_in_id_set_d(item, item);
    gptr<Local_006b9934_r1_1> r1_1 = gptr<Local_006b9934_r1_1>(guest::cpu()->r[1]);
    if (r0_1 == 0) {
        guest::cpu()->r[1] = r1_1.addr();
        return r0_1;
    }
    u32 r0_2 = r1_1->half_0;
    if ((r0_2 & ~0x8000u) == 0x70u) {  // (from the original)
        u32 r0_3 = r0_2 & 0x8000u | 0x26u;  // (from the original)
        r1_1->half_0 = u16(r0_3);
        guest::cpu()->r[1] = r1_1.addr();
        return r0_3;
    }
    u32 r2_1 = r1_1->half_2;
    u32 r0_4 = r2_1 & ~0xc300u & ~0x87u | 3u | r2_1 & 0xc000u;  // (from the original)
    r1_1->half_2 = u16(r0_4);
    guest::cpu()->r[1] = r1_1.addr();
    return r0_4;
}

}  // namespace d_006b9934
GUEST_EXPORT_FRAMED(0x006b9934, d_006b9934::Item__reset_set_d_variant, 0x4000);  // pushes {lr} first, as the original

// f_006b9b5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears bit 15 of the item's flags.
namespace d_006b9b5c {


void Item__clear_flag_bit_15(gptr<Item> item) {
    u32 r2_1 = item->flags;
    u32 r1_1 = r2_1 & ~0xc000u | (r2_1 >> 0xe & ~2u) << 0xe;  // (from the original)
    item->flags = u16(r1_1);
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_006b9b5c
GUEST_EXPORT(0x006b9b5c, d_006b9b5c::Item__clear_flag_bit_15);

// f_006b9c98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Picks the item of group 0xe at the same offset as the item has in its category.
namespace d_006b9c98 {

inline constexpr guest::Function<0x001acdc4, u32(u32, u32, u32)> pick_nth_item;
inline constexpr guest::Function<0x002fc288, u32(u32)> ItemBitSet__clear_and_return;
inline constexpr guest::Function<0x005359fc, u32(u32, u32)> category_info;
inline constexpr guest::Function<0x005361a8, u32(u32, u32, u32, u32)> Item__data;
inline constexpr guest::Function<0x006f34b4, u32(u32, u32)> mark_items_with_group;

void pick_matching_item_of_group_e(u32 r0, gptr<Item> item, u32 r2) {
    guest::StackFrame frame(0x2ec);  // the original's stack frame
    u32 r4_1 = 0;
    u32 item_data_2 = Item__data(item.addr(), item.addr(), r2, guest::cpu()->r[3]);
    if (item_data_2 == 0) {
        r4_1 = ~0u;
    } else {
        u32 r0_2 = *gptr<u8>(item_data_2 + 0xau);  // (from the original)
        u32 r1_2 = item->id;
        if (r0_2 >= 0x9bu) {  // (from the original)
            r0_2 = 0u;
        }
        u32 info_2 = category_info(r0_2, r1_2);
        r4_1 = (r1_2 & ~0x8000u) - u32(*gptr<u16>(info_2));  // (from the original)
    }
    ItemBitSet__clear_and_return(frame.at(0).addr());
    mark_items_with_group(frame.at(0).addr(), 0xeu);  // (from the original)
    pick_nth_item(r0, r4_1, frame.at(0).addr());
}

}  // namespace d_006b9c98
GUEST_EXPORT_FRAMED(0x006b9c98, d_006b9c98::pick_matching_item_of_group_e, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_006b9d30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the item's flags (keeping their top two bits) with bit 10 set.
namespace d_006b9d30 {


void Item__set_flags_with_400(gptr<Item> item, u32 r1) {
    u32 r1_1 = r1 & ~0xc000u | 0x400u | u32(item->flags) & 0xc000u;  // (from the original)
    item->flags = u16(r1_1);
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_006b9d30
GUEST_EXPORT(0x006b9d30, d_006b9d30::Item__set_flags_with_400);

// f_006b9d78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// True for kinds 3, 5, 7, 0x16 and 0x1a.
namespace d_006b9d78 {


u32 kind_is_3_5_7_16_or_1a(u32 r0) {
    if (r0 == 3u || r0 == 7u || r0 == 5u || r0 == 0x16u) {  // (from the original)
        return 1u;
    }
    if (r0 != 0x1au) {  // (from the original)
        return 0u;
    }
    return 1u;
}

}  // namespace d_006b9d78
GUEST_EXPORT(0x006b9d78, d_006b9d78::kind_is_3_5_7_16_or_1a);

// f_006b9de8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// True for kind 0x17.
namespace d_006b9de8 {


u32 kind_is_17(u32 r0) {
    return r0 == 0x17u;  // (from the original)
}

}  // namespace d_006b9de8
GUEST_EXPORT(0x006b9de8, d_006b9de8::kind_is_17);

// f_006bacd8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the item's flags, keeping their top two bits.
namespace d_006bacd8 {


void Item__set_flags_keep_top(gptr<Item> item, u32 r1) {
    u32 r1_1 = r1 & ~0xc000u | u32(item->flags) & 0xc000u;  // (from the original)
    item->flags = u16(r1_1);
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_006bacd8
GUEST_EXPORT(0x006bacd8, d_006bacd8::Item__set_flags_keep_top);

// f_006bb1a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Moves the items 0x3057, 0x305a, 0x3064 and 0x3067 to their next ids.
namespace d_006bb1a0 {


void Item__next_stage_30xx(gptr<Item> item) {
    u32 r1_1 = item->id;
    u32 r2_1 = (r1_1 & ~0x8000u) - 0x3057u;  // (from the original)
    if (r2_1 == 0) {
        u32 r1_2 = r1_1 & 0x8000u | 0x3000u | 0x58u;  // (from the original)
        item->id = u16(r1_2);
        guest::cpu()->r[1] = r1_2;
        return;
    }
    if (r2_1 == 3u) {
        u32 r1_3 = r1_1 & 0x8000u | 0x3000u | 0x5bu;  // (from the original)
        item->id = u16(r1_3);
        guest::cpu()->r[1] = r1_3;
        return;
    }
    if (r2_1 == 0xdu) {  // (from the original)
        u32 r1_4 = r1_1 & 0x8000u | 0x3000u | 0x65u;  // (from the original)
        item->id = u16(r1_4);
        guest::cpu()->r[1] = r1_4;
        return;
    }
    if (r2_1 != 0x10u) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return;
    }
    u32 r1_5 = r1_1 & 0x8000u | 0x3000u | 0x68u;  // (from the original)
    item->id = u16(r1_5);
    guest::cpu()->r[1] = r1_5;
}

}  // namespace d_006bb1a0
GUEST_EXPORT(0x006bb1a0, d_006bb1a0::Item__next_stage_30xx);

// f_006bb3bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the item's room index (in its flags, keeping its variant) when it has a valid value; true when it did.
namespace d_006bb3bc {

inline constexpr guest::Function<0x006ba294, u32(u32, u32, u32, u32)> Item__group_info;
inline constexpr guest::Function<0x007684a4, u32(u32, u32)> Item__has_valid_value_06;

u32 Item__set_room_index(gptr<Item> item, u32 r1) {
    u32 r0_2 = 0;
    u32 r6_1 = 0;
    u32 r0_1 = Item__group_info(r1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 + 1u == 0) {
        r0_2 = 0u;
    } else {
        u32 r0_3 = Item__has_valid_value_06(item.addr(), r1_1);
        if (r0_3 != 0) {
            r6_1 = u32(item->flags) >> 0xau & 0xfu;  // (from the original)
            if (!(r6_1 <= 0xdu)) {  // (from the original)
                r6_1 = 0u;
            }
        } else {
            r6_1 = 0u;
        }
        r0_2 = Item__has_valid_value_06(item.addr(), guest::cpu()->r[1]);
        r1_1 = guest::cpu()->r[1];
        if (r0_2 != 0) {
            r1_1 = u32(item->flags) & 0xc000u;  // (from the original)
            item->flags = u16(r0_1 + (r6_1 << 0xa) & ~0xc000u | r1_1);  // (from the original)
            r0_2 = 1u;
        }
    }
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_006bb3bc
GUEST_EXPORT_FRAMED(0x006bb3bc, d_006bb3bc::Item__set_room_index, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006bb5c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Moves the items 0x33a9, 0x33b5 to 0x33b7 and 0x33b8 to 0x33bb to their next ids.
namespace d_006bb5c4 {

struct __attribute__((packed)) Object_006bb5c4_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_006bb5c4_0, half_0, 0x0);


void Item__next_stage_33xx(gptr<Object_006bb5c4_0> item) {
    u32 r1_1 = item->half_0;
    u32 r2_1 = r1_1 & ~0x8000u;  // (from the original)
    u32 res_1 = r2_1 - 0x33b8u;  // (from the original)
    u32 zf_1 = res_1 == 0;
    u32 r12_1 = r2_1 - 0x33b8u;  // (from the original)
    if (zf_1) {
        item->half_0 = u16(r1_1 & 0x8000u | 0x3300u | 0xb1u);  // (from the original)
        return;
    }
    if (zf_1 || (res_1 >> 0x1f) != (((r2_1 ^ 0x33b8u) & (r2_1 ^ res_1)) >> 0x1f)) {  // (from the original)
        if (r2_1 - 0x33a9u == 0) {  // (from the original)
            item->half_0 = u16(r1_1 & 0x8000u | 0x3000u | 0x3a8u);  // (from the original)
            return;
        }
        if (r2_1 - 0x33a9u == 0xcu) {  // (from the original)
            item->half_0 = u16(r1_1 & 0x8000u | 0x3300u | 0xaeu);  // (from the original)
            return;
        }
        if (r2_1 - 0x33a9u == 0xdu) {  // (from the original)
            item->half_0 = u16(r1_1 & 0x8000u | 0x3300u | 0xafu);  // (from the original)
            return;
        }
        if (r2_1 - 0x33a9u != 0xeu) {  // (from the original)
            return;
        }
        item->half_0 = u16(r1_1 & 0x8000u | 0x3000u | 0x3b0u);  // (from the original)
        return;
    }
    if (r12_1 == 1u) {
        item->half_0 = u16(r1_1 & 0x8000u | 0x3300u | 0xb2u);  // (from the original)
        return;
    }
    if (r12_1 == 2u) {
        item->half_0 = u16(r1_1 & 0x8000u | 0x3300u | 0xb3u);  // (from the original)
        return;
    }
    if (r12_1 == 3u) {
        item->half_0 = u16(r1_1 & 0x8000u | 0x3000u | 0x3b4u);  // (from the original)
        return;
    }
}

}  // namespace d_006bb5c4
GUEST_EXPORT(0x006bb5c4, d_006bb5c4::Item__next_stage_33xx);

// f_006bb91c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Registers the item for the current slot (below 8, else slot 0).
namespace d_006bb91c {

inline constexpr guest::Function<0x002ff8b0, u32(u32, u32, u32, u32)> player_slot_byte;
inline constexpr guest::Function<0x00304f30, u32(u32, u32, u32, u32)> SpecialItem__variant;

void register_item_for_current_slot(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = player_slot_byte(4u, r1, r2, r3);
    if (r0_1 < 8u) {
        frame.release();
        SpecialItem__variant(r0, 0u, r0_1, r1);
        return;
    }
    frame.release();
    SpecialItem__variant(r0, 0u, 0u, r1);
    return;
}

}  // namespace d_006bb91c
GUEST_EXPORT(0x006bb91c, d_006bb91c::register_item_for_current_slot);

// f_006bbbd8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Turns the item into id 0x2000 with the flags (keeping their top two bits).
namespace d_006bbbd8 {


void Item__make_2000_with_flags(gptr<Item> item, u32 r1) {
    u32 r3_1 = u32(item->id) & 0x8000u | 0x2000u;  // (from the original)
    item->id = u16(r3_1);
    u32 r2_1 = u32(item->flags) & ~0xc000u;  // (from the original)
    item->flags = u16(r2_1);
    if ((r3_1 & ~0x8000u) != 0x2000u) {  // (from the original)
        return;
    }
    item->flags = u16(r1 & ~0xc000u | r2_1 & 0xc000u);  // (from the original)
}

}  // namespace d_006bbbd8
GUEST_EXPORT(0x006bbbd8, d_006bbbd8::Item__make_2000_with_flags);

// f_006bc04c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Packs the town tune (save +0x6e29a, or the default tune when there is no save) as 16 nibbles into 8 bytes.
namespace d_006bc04c {

inline constexpr u32 town_tune_address = 0x00ad5394u;
inline guest::global<u8, 0x0095bf80> current_mode_bits;
inline constexpr guest::Function<0x00134544, u32(u32, u32, u32)> copy_bytes_small_sizes_first;
inline constexpr guest::Function<0x002fb328, u32(u32)> get_save_data;
inline constexpr guest::Function<0x003081b4, u32(u32, u32)> copy_8_bytes;
inline constexpr guest::Function<0x00583778, u32(u32, u32, u32, u32)> SoundSystem__part_veneer;

u32 TownTune__get_packed(u32 town_tune, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 res_1 = 0;
    u32 r4 = town_tune;
    u32 r0_1 = *current_mode_bits;
    if (r0_1 != 0) {
        u32 save_data_2 = get_save_data(r0_1);
        frame.release();
        return copy_8_bytes(r4, save_data_2 + 0x80u + 0x6e21au);  // (from the original)
    }
    u32 r0_3 = SoundSystem__part_veneer(r0_1, r1, r2, r3);
    copy_bytes_small_sizes_first(town_tune_address, r0_3, 0x10u);  // (from the original)
    r1 = 0u;
    town_tune = town_tune_address;
    r2 = r1;
    u32 r12 = 8u;
    u32 r7 = 0x10u;  // (from the original)
    u32 r6 = 1u;
    do {
        u32 r3_2 = *gptr<u8>(r6 + (r1 << 1) >= 0x10u ? town_tune : town_tune + r2 + 1u);  // (from the original)
        res_1 = r12 - 1u;
        r12 = res_1;
        u32 r5_1 = u32(*gptr<u8>(r7 > r1 << 1 ? town_tune + r2 : town_tune)) & 0xfu;  // (from the original)
        r2 += 2u;
        r1 += 1u;
        *gptr<u8>(r4) = u8(r5_1 | r3_2 << 4);
        r4 += 1u;
        guest::preempt();
    } while (res_1 != 0);
    guest::cpu()->r[1] = r1;
    return town_tune;
}

}  // namespace d_006bc04c
GUEST_EXPORT(0x006bc04c, d_006bc04c::TownTune__get_packed);

// f_006bc104: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Packs the 16 nibble bytes into 8 bytes.
namespace d_006bc104 {


u32 pack_16_nibbles(u32 r0, u32 r1) {
    u32 res_1 = 0;
    u32 r2 = 0u;
    u32 r3 = r2;
    u32 r4 = 8u;
    u32 r6 = 0x10u;  // (from the original)
    u32 r7 = 1u;
    do {
        u32 r12_1 = *gptr<u8>(r7 + (r2 << 1) >= 0x10u ? r1 : r1 + r3 + 1u);  // (from the original)
        res_1 = r4 - 1u;
        r4 = res_1;
        u32 r5_1 = u32(*gptr<u8>(r6 > r2 << 1 ? r1 + r3 : r1)) & 0xfu;  // (from the original)
        r3 += 2u;
        r2 += 1u;
        *gptr<u8>(r0) = u8(r5_1 | r12_1 << 4);
        r0 += 1u;
        guest::preempt();
    } while (res_1 != 0);
    return r0;
}

}  // namespace d_006bc104
GUEST_EXPORT_FRAMED(0x006bc104, d_006bc104::pack_16_nibbles, 0x1f0);  // pushes {r4, r5, r6, r7, r8} first, as the original

// f_006bc16c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Updates the states of the clothing records' items.
namespace d_006bc16c {

inline constexpr guest::Function<0x001b5e20, u32(u32, u32, u32, u32)> script__WordPtrSv__WordPtrSv_001b5e20;
inline constexpr guest::Function<0x006bbd54, u32(u32, u32, u32, u32)> Item__from_category_index;
inline constexpr guest::Function<0x006bc4fc, u32(u32, u32, u32, u32)> set_record_state_5;
inline constexpr guest::Function<0x0076d668, u32(u32, u32)> record_state_of_item;

struct __attribute__((packed)) Frame_006bc16c {
    u32 word_0;
};
GUEST_OFFSET(Frame_006bc16c, word_0, 0x0);
GUEST_SIZE(Frame_006bc16c, 0x4);

u32 ClothingRecords__update_states(u32 clothing_records, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_006bc16c> frame;  // the original's stack frame
    u32 r2 = 0;
    u32 r0_14 = 0;
    frame->word_0 = r3;
    u32 r5 = 0u;
    u32 r7 = clothing_records;
    u32 r6 = r1;
    u32 r4 = (r1 & 3u) + 1u;
    do {
        Item__from_category_index(frame.at(0).addr(), 0x2cu, r5, r3);  // (from the original)
        u32 record_state_7 = record_state_of_item(r7, frame.at(0).addr());
        r3 = guest::cpu()->r[3];
        if (record_state_7 == r4) {
            set_record_state_5(r7, frame.at(0).addr(), guest::cpu()->r[2], r3);
            r3 = guest::cpu()->r[3];
        }
        r5 += 1u;
        guest::preempt();
    } while (r5 < 0x43u);  // (from the original)
    r5 = 0u;
    do {
        Item__from_category_index(frame.at(0).addr(), 0x27u, r5, r3);  // (from the original)
        u32 record_state_8 = record_state_of_item(r7, frame.at(0).addr());
        r3 = guest::cpu()->r[3];
        if (record_state_8 == r4) {
            set_record_state_5(r7, frame.at(0).addr(), guest::cpu()->r[2], r3);
            r3 = guest::cpu()->r[3];
        }
        r5 += 1u;
        guest::preempt();
    } while (r5 < 0x48u);  // (from the original)
    r5 = 0u;
    do {
        Item__from_category_index(frame.at(0).addr(), 0x28u, r5, r3);  // (from the original)
        u32 record_state_9 = record_state_of_item(r7, frame.at(0).addr());
        r3 = guest::cpu()->r[3];
        if (record_state_9 == r4) {
            set_record_state_5(r7, frame.at(0).addr(), guest::cpu()->r[2], r3);
            r3 = guest::cpu()->r[3];
        }
        r5 += 1u;
        guest::preempt();
    } while (r5 < 0x1eu);  // (from the original)
    r5 = 0u;
    do {
        Item__from_category_index(frame.at(0).addr(), 0x24u, r5, r3);  // (from the original)
        u32 record_state_10 = record_state_of_item(r7, frame.at(0).addr());
        r3 = guest::cpu()->r[3];
        if (record_state_10 == r4) {
            set_record_state_5(r7, frame.at(0).addr(), guest::cpu()->r[2], r3);
            r3 = guest::cpu()->r[3];
        }
        r5 += 1u;
        guest::preempt();
    } while (r5 < 0x48u);  // (from the original)
    r5 = 0u;
    do {
        Item__from_category_index(frame.at(0).addr(), 0x54u, r5, r3);  // (from the original)
        u32 record_state_11 = record_state_of_item(r7, frame.at(0).addr());
        r3 = guest::cpu()->r[3];
        if (record_state_11 == r4) {
            set_record_state_5(r7, frame.at(0).addr(), guest::cpu()->r[2], r3);
            r3 = guest::cpu()->r[3];
        }
        r5 += 1u;
        guest::preempt();
    } while (r5 < 0x19u);  // (from the original)
    r5 = 0u;
    do {
        Item__from_category_index(frame.at(0).addr(), 0x58u, r5, r3);  // (from the original)
        u32 record_state_12 = record_state_of_item(r7, frame.at(0).addr());
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (record_state_12 == r4) {
            set_record_state_5(r7, frame.at(0).addr(), r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        r5 += 1u;
        guest::preempt();
    } while (r5 < 8u);
    r4 = 0u;
    do {
        u32 r0_13 = r7 + r4 * 0xb98u + 0x55cu;  // (from the original)
        r0_14 = *gptr<s8>(r0_13);
        if (r0_14 == r6) {
            r0_14 = script__WordPtrSv__WordPtrSv_001b5e20(r0_13, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 4u);
    guest::cpu()->r[1] = r1;
    return r0_14;
}

}  // namespace d_006bc16c
GUEST_EXPORT_FRAMED(0x006bc16c, d_006bc16c::ClothingRecords__update_states, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_006bc3b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the records' header.
namespace d_006bc3b4 {

struct __attribute__((packed)) Local_006bc3b4_r2_1 {
    u16 half_0;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Local_006bc3b4_r2_1, half_0, 0x0);
GUEST_OFFSET(Local_006bc3b4_r2_1, byte_2, 0x2);
GUEST_OFFSET(Local_006bc3b4_r2_1, byte_3, 0x3);

struct __attribute__((packed)) Local_006bc3b4_r3_1 {
    u16 half_0;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Local_006bc3b4_r3_1, half_0, 0x0);
GUEST_OFFSET(Local_006bc3b4_r3_1, byte_2, 0x2);
GUEST_OFFSET(Local_006bc3b4_r3_1, byte_3, 0x3);

struct __attribute__((packed)) Local_006bc3b4_r3_2 {
    u16 half_0;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Local_006bc3b4_r3_2, half_0, 0x0);
GUEST_OFFSET(Local_006bc3b4_r3_2, byte_2, 0x2);
GUEST_OFFSET(Local_006bc3b4_r3_2, byte_3, 0x3);

struct __attribute__((packed)) Local_006bc3b4_r3_3 {
    u16 half_0;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Local_006bc3b4_r3_3, half_0, 0x0);
GUEST_OFFSET(Local_006bc3b4_r3_3, byte_2, 0x2);
GUEST_OFFSET(Local_006bc3b4_r3_3, byte_3, 0x3);

struct __attribute__((packed)) Local_006bc3b4_r3_4 {
    u16 half_0;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Local_006bc3b4_r3_4, half_0, 0x0);
GUEST_OFFSET(Local_006bc3b4_r3_4, byte_2, 0x2);
GUEST_OFFSET(Local_006bc3b4_r3_4, byte_3, 0x3);

struct __attribute__((packed)) Local_006bc3b4_r3_5 {
    u16 half_0;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Local_006bc3b4_r3_5, half_0, 0x0);
GUEST_OFFSET(Local_006bc3b4_r3_5, byte_2, 0x2);
GUEST_OFFSET(Local_006bc3b4_r3_5, byte_3, 0x3);


void ClothingRecords__clear_header(u32 clothing_records) {
    u32 r2 = 0u;
    u32 r1 = r2;
    do {
        gptr<Local_006bc3b4_r3_1> r3_1 = gptr<Local_006bc3b4_r3_1>(clothing_records + (r2 << 2));
        u32 r12_1 = clothing_records + r2;
        r3_1->half_0 = u16(r1);
        r3_1->byte_2 = u8(r1);
        r2 += 1u;
        r3_1->byte_3 = u8(r1);
        *gptr<u8>(r12_1 + 0x448u) = u8(r1);  // (from the original)
        guest::preempt();
    } while (s32(r2) < 0x43);  // (from the original)
    r2 = 0u;
    do {
        u32 r12_2 = clothing_records + r2;
        gptr<Local_006bc3b4_r3_2> r3_2 = gptr<Local_006bc3b4_r3_2>(clothing_records + (r2 << 2) + 0x10cu);  // (from the original)
        r2 += 1u;
        r3_2->half_0 = u16(r1);
        r3_2->byte_2 = u8(r1);
        r3_2->byte_3 = u8(r1);
        *gptr<u8>(r12_2 + 0x48bu) = u8(r1);  // (from the original)
        guest::preempt();
    } while (s32(r2) < 0x48);  // (from the original)
    r2 = 0u;
    do {
        u32 r12_3 = clothing_records + r2;
        gptr<Local_006bc3b4_r3_3> r3_3 = gptr<Local_006bc3b4_r3_3>(clothing_records + (r2 << 2) + 0x22cu);  // (from the original)
        r2 += 1u;
        r3_3->half_0 = u16(r1);
        r3_3->byte_2 = u8(r1);
        r3_3->byte_3 = u8(r1);
        *gptr<u8>(r12_3 + 0x4d3u) = u8(r1);  // (from the original)
        guest::preempt();
    } while (s32(r2) < 0x1e);  // (from the original)
    u32 r3 = 0u;
    do {
        u32 r12_4 = clothing_records + r3;
        gptr<Local_006bc3b4_r2_1> r2_1 = gptr<Local_006bc3b4_r2_1>(clothing_records + (r3 << 2) + 0x2a4u);  // (from the original)
        r3 += 1u;
        r2_1->half_0 = u16(r1);
        r2_1->byte_2 = u8(r1);
        r2_1->byte_3 = u8(r1);
        *gptr<u8>(r12_4 + 0x4f1u) = u8(r1);  // (from the original)
        guest::preempt();
    } while (s32(r3) < 0x48);  // (from the original)
    r2 = 0u;
    do {
        u32 r12_5 = clothing_records + r2;
        gptr<Local_006bc3b4_r3_4> r3_4 = gptr<Local_006bc3b4_r3_4>(clothing_records + (r2 << 2) + 0x3c4u);  // (from the original)
        r2 += 1u;
        r3_4->half_0 = u16(r1);
        r3_4->byte_2 = u8(r1);
        r3_4->byte_3 = u8(r1);
        *gptr<u8>(r12_5 + 0x539u) = u8(r1);  // (from the original)
        guest::preempt();
    } while (s32(r2) < 0x19);  // (from the original)
    r2 = 0u;
    do {
        u32 r12_6 = clothing_records + r2;
        gptr<Local_006bc3b4_r3_5> r3_5 = gptr<Local_006bc3b4_r3_5>(clothing_records + (r2 << 2) + 0x428u);  // (from the original)
        r2 += 1u;
        r3_5->half_0 = u16(r1);
        r3_5->byte_2 = u8(r1);
        r3_5->byte_3 = u8(r1);
        *gptr<u8>(r12_6 + 0x552u) = u8(r1);  // (from the original)
        guest::preempt();
    } while (s32(r2) < 8);
    guest::cpu()->r[1] = r1;
}

}  // namespace d_006bc3b4
GUEST_EXPORT(0x006bc3b4, d_006bc3b4::ClothingRecords__clear_header);

// f_006bc4fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the record state byte of an item of a recorded category to 5.
namespace d_006bc4fc {

struct __attribute__((packed)) Local_006bc4fc_r1_2 {
    u8 unknown_0[0x448];  // (not used here)
    u8 byte_448;
    u8 unknown_449[0x42];  // (not used here)
    u8 byte_48b;
    u8 unknown_48c[0x47];  // (not used here)
    u8 byte_4d3;
    u8 unknown_4d4[0x1d];  // (not used here)
    u8 byte_4f1;
    u8 unknown_4f2[0x47];  // (not used here)
    u8 byte_539;
    u8 unknown_53a[0x18];  // (not used here)
    u8 byte_552;
};
GUEST_OFFSET(Local_006bc4fc_r1_2, byte_448, 0x448);
GUEST_OFFSET(Local_006bc4fc_r1_2, byte_48b, 0x48b);
GUEST_OFFSET(Local_006bc4fc_r1_2, byte_4d3, 0x4d3);
GUEST_OFFSET(Local_006bc4fc_r1_2, byte_4f1, 0x4f1);
GUEST_OFFSET(Local_006bc4fc_r1_2, byte_539, 0x539);
GUEST_OFFSET(Local_006bc4fc_r1_2, byte_552, 0x552);

inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> Item__category;
inline constexpr guest::Function<0x002ffad8, u32(u32)> item_offset_in_category;
inline constexpr guest::Function<0x0076d714, u32(u32, u32, u32, u32)> Museum__index_is_valid;

void set_record_state_5(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 category_2 = Item__category(r1, r1, r2, r3);
    u32 offset_2 = item_offset_in_category(r1);
    u32 r0_3 = Museum__index_is_valid(r0, category_2, offset_2, offset_2);
    gptr<Local_006bc4fc_r1_2> r1_2 = gptr<Local_006bc4fc_r1_2>(guest::cpu()->r[1]);
    u32 r3_2 = guest::cpu()->r[3];
    if (r0_3 != 0) {
        u32 nf_1 = category_2 - 0x2cu >> 0x1f;  // (from the original)
        u32 zf_1 = category_2 - 0x2cu == 0;  // (from the original)
        u32 vf_1 = ((category_2 ^ 0x2cu) & (category_2 ^ category_2 - 0x2cu)) >> 0x1f;  // (from the original)
        if (zf_1) {
            r1_2 = gptr<Local_006bc4fc_r1_2>(r0 + r3_2);
            r1_2->byte_448 = 5;
        } else if (!zf_1 && nf_1 == vf_1) {
            if (category_2 != 0x54u) {  // (from the original)
                if (category_2 == 0x58u) {  // (from the original)
                    r1_2 = gptr<Local_006bc4fc_r1_2>(r0 + r3_2);
                    r1_2->byte_552 = 5;
                }
                guest::cpu()->r[1] = r1_2.addr();
                return;
            }
            r1_2 = gptr<Local_006bc4fc_r1_2>(r0 + r3_2);
            r1_2->byte_539 = 5;
        } else if (category_2 == 0x24u) {  // (from the original)
            r1_2 = gptr<Local_006bc4fc_r1_2>(r0 + r3_2);
            r1_2->byte_4f1 = 5;
        } else if (category_2 == 0x27u) {  // (from the original)
            r1_2 = gptr<Local_006bc4fc_r1_2>(r0 + r3_2);
            r1_2->byte_48b = 5;
        } else if (category_2 == 0x28u) {  // (from the original)
            r1_2 = gptr<Local_006bc4fc_r1_2>(r0 + r3_2);
            r1_2->byte_4d3 = 5;
        }
    }
    guest::cpu()->r[1] = r1_2.addr();
}

}  // namespace d_006bc4fc
GUEST_EXPORT_FRAMED(0x006bc4fc, d_006bc4fc::set_record_state_5, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006bc5a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs the 4 clothing records (0xb98 bytes each, +0x55c).
namespace d_006bc5a0 {

inline constexpr guest::Function<0x001b5e20, u32(u32, u32, u32, u32)> script__WordPtrSv__WordPtrSv_001b5e20;

void ClothingRecords__construct(u32 clothing_records) {
    u32 r5 = clothing_records;
    u32 r4 = 0u;
    do {
        script__WordPtrSv__WordPtrSv_001b5e20(r5 + r4 * 0xb98u + 0x55cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 4);
}

}  // namespace d_006bc5a0
GUEST_EXPORT_FRAMED(0x006bc5a0, d_006bc5a0::ClothingRecords__construct, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006bc5d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the header and the 4 clothing records.
namespace d_006bc5d8 {

inline constexpr guest::Function<0x001b5f7c, u32(u32)> ClothingRecord__clear;
inline constexpr guest::Function<0x006bc3b4, u32(u32, u32, u32, u32)> ClothingRecords__clear_header;

void ClothingRecords__clear(u32 clothing_records) {
    u32 r5 = clothing_records;
    ClothingRecords__clear_header(clothing_records, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r4 = 0u;
    do {
        ClothingRecord__clear(r5 + r4 * 0xb98u + 0x55cu);  // (from the original)
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 4);
}

}  // namespace d_006bc5d8
GUEST_EXPORT_FRAMED(0x006bc5d8, d_006bc5d8::ClothingRecords__clear, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006bc9b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006bc9b0 {

inline constexpr guest::Function<0x00582bc0, u32(u32, u32, u32, u32)> player_operation_a;

void player_operation_a_veneer() {
    player_operation_a(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_006bc9b0
GUEST_EXPORT(0x006bc9b0, d_006bc9b0::player_operation_a_veneer);

// f_006bc9b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Adds the frames to the play time (saturating) and counts the minutes in event 0x10.
namespace d_006bc9b4 {

struct __attribute__((packed)) PlayTime {
    u8 unknown_0[0x6bb0];  // (not used here)
    u32 res;
    u32 word_6bb4;
};
GUEST_OFFSET(PlayTime, res, 0x6bb0);
GUEST_OFFSET(PlayTime, word_6bb4, 0x6bb4);

inline guest::global<u32, 0x0095c2c0> play_time_total;
inline constexpr guest::Function<0x0012e640, u32(u32, u32, u32, u32)> int64_divide;
inline constexpr guest::Function<0x006f0130, u32(u32, u32, u32)> Player__counter;

u32 PlayTime__add(gptr<PlayTime> play_time, u32 r1_unused, u32 r2, u32 r3) {
    u32 r0_1 = play_time->res;
    u32 res_1 = r0_1 + r2;
    u32 cf_1 = res_1 < r0_1;
    u32 r2_1 = u64(play_time->word_6bb4) + r3 + cf_1;
    u64 t_1 = u64(~0x80000000u) + ~r2_1 + u32(~0u >= res_1);  // (from the original)
    u32 r4_1 = t_1;
    if (u32(t_1 >> 0x20)) {  // (from the original)
        play_time->res = res_1;
        play_time->word_6bb4 = r2_1;
    } else {
        play_time->res = ~0u;
        play_time->word_6bb4 = ~0x80000000u;  // (from the original)
    }
    u32 r0_2 = int64_divide(r2, r3, 0x3cu, 0u);  // (from the original)
    u32 r2_2 = guest::cpu()->r[2];
    Player__counter(0x10u, r0_2, r2_2);  // (from the original)
    u32 r0_3 = *play_time_total + r2_2;
    *play_time_total = r0_3;
    if (r0_3 >= 0x3cu) {  // (from the original)
        Player__counter(0x10u, 1u, r2_2);  // (from the original)
        r0_3 = *play_time_total - 0x3cu;  // (from the original)
        *play_time_total = r0_3;
    }
    return r0_3;
}

}  // namespace d_006bc9b4
GUEST_EXPORT_FRAMED(0x006bc9b4, d_006bc9b4::PlayTime__add, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006bcdf0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006bcdf0 {

inline constexpr guest::Function<0x00582d34, u32(u32, u32, u32, u32)> player_operation_b;

u32 player_operation_b_veneer() {
    return player_operation_b(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_006bcdf0
GUEST_EXPORT(0x006bcdf0, d_006bcdf0::player_operation_b_veneer);

// f_006bd2c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The player's record (the size, by kind) of the insect, fish or sea creature item; 0 for other items.
namespace d_006bd2c8 {

inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> Item__category;
inline constexpr guest::Function<0x00615964, u32(u32, u32)> item_actor_kind;
inline constexpr guest::Function<0x00616c68, u32(u32, u32, u32)> catalog_index_to_category;
inline constexpr guest::Function<0x00700adc, u32(u32, u32)> item_actor_kind_byte;

struct __attribute__((packed)) Frame_006bd2c8 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Frame_006bd2c8, word_0, 0x0);
GUEST_OFFSET(Frame_006bd2c8, word_4, 0x4);
GUEST_SIZE(Frame_006bd2c8, 0x8);

u32 Player__catch_record_of_item(u32 player, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_006bd2c8> frame;  // the original's stack frame
    u32 r0_4 = 0;
    u32 r4_1 = 0u;
    u32 category_2 = Item__category(r1, r1, r2, guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    if (category_2 != 0x24u) {  // (from the original)
        if (category_2 == 0x27u || category_2 == 0x28u) {  // (from the original)
            frame->word_0 = 0;
            frame->word_4 = 0x27;  // (from the original)
            u32 r0_2 = item_actor_kind(r1, r1_1);
            catalog_index_to_category(frame.at(0).addr(), frame.at(4).addr(), r0_2);
            r0_4 = frame->word_0;
            r1_1 = frame->word_4 & 0xffu;  // (from the original)
            if (r1_1 != 0x24u) {  // (from the original)
                if (r1_1 == 0x27u) {  // (from the original)
                    if (r0_4 >= 0x48u) {  // (from the original)
                        guest::cpu()->r[1] = r1_1;
                        return 0u;
                    }
                    r4_1 = *gptr<u16>(player + (r0_4 << 1) + 0xa318u);  // (from the original)
                    guest::cpu()->r[1] = r1_1;
                    return r4_1;
                }
                if (r1_1 != 0x28u) {  // (from the original)
                    guest::cpu()->r[1] = r1_1;
                    return 0u;
                }
                if (r0_4 < 0x1eu) {  // (from the original)
                    r4_1 = *gptr<u16>(player + (r0_4 << 1) + 0xa3a8u);  // (from the original)
                    guest::cpu()->r[1] = r1_1;
                    return r4_1;
                }
                guest::cpu()->r[1] = r1_1;
                return 0u;
            }
            if (r0_4 >= 0x48u) {  // (from the original)
                guest::cpu()->r[1] = r1_1;
                return 0u;
            }
            r4_1 = *gptr<u16>(player + (r0_4 << 1) + 0xa288u);  // (from the original)
            guest::cpu()->r[1] = r1_1;
            return r4_1;
        }
        guest::cpu()->r[1] = r1_1;
        return r4_1;
    }
    r0_4 = item_actor_kind_byte(r1, r1_1);
    r1_1 = guest::cpu()->r[1];
    if (r0_4 >= 0x48u) {  // (from the original)
        return 0u;
    }
    return *gptr<u16>(player + (r0_4 << 1) + 0xa288u);  // (from the original)
}

}  // namespace d_006bd2c8
GUEST_EXPORT_FRAMED(0x006bd2c8, d_006bd2c8::Player__catch_record_of_item, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006bd550: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The player's name pair record (+0x8d84) when they have one; null otherwise.
namespace d_006bd550 {

inline constexpr guest::Function<0x0076de78, u32(u32, u32, u32, u32)> Player__has_name_pair_record;

u32 Player__name_pair_record(u32 player) {
    u32 r0_1 = Player__has_name_pair_record(player, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 != 0) {
        r0_1 = player + 0x8d84u;  // (from the original)
    }
    return r0_1;
}

}  // namespace d_006bd550
GUEST_EXPORT_FRAMED(0x006bd550, d_006bd550::Player__name_pair_record, 0x4010);  // pushes {r4, lr} first, as the original

// f_006bd910: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006bd910 {

struct __attribute__((packed)) Object_006bd910_0 {
    u8 unknown_0[0x8f2c];  // (not used here)
    u16 half_8f2c;
};
GUEST_OFFSET(Object_006bd910_0, half_8f2c, 0x8f2c);

struct __attribute__((packed)) Local_006bd910_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 player;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u32 word_28;
};
GUEST_OFFSET(Local_006bd910_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_006bd910_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_006bd910_ea_1, player, 0x8);
GUEST_OFFSET(Local_006bd910_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_006bd910_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_006bd910_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_006bd910_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_006bd910_ea_1, word_1c, 0x1c);
GUEST_OFFSET(Local_006bd910_ea_1, word_20, 0x20);
GUEST_OFFSET(Local_006bd910_ea_1, word_24, 0x24);
GUEST_OFFSET(Local_006bd910_ea_1, word_28, 0x28);

struct __attribute__((packed)) Local_006bd910_ea_2 {
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
GUEST_OFFSET(Local_006bd910_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_006bd910_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_006bd910_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_006bd910_ea_2, word_c, 0xc);
GUEST_OFFSET(Local_006bd910_ea_2, word_10, 0x10);
GUEST_OFFSET(Local_006bd910_ea_2, word_14, 0x14);
GUEST_OFFSET(Local_006bd910_ea_2, word_18, 0x18);
GUEST_OFFSET(Local_006bd910_ea_2, word_1c, 0x1c);
GUEST_OFFSET(Local_006bd910_ea_2, word_20, 0x20);

struct __attribute__((packed)) Local_006bd910_r0_29 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_006bd910_r0_29, word_0, 0x0);
GUEST_OFFSET(Local_006bd910_r0_29, word_4, 0x4);
GUEST_OFFSET(Local_006bd910_r0_29, word_8, 0x8);

struct __attribute__((packed)) Local_006bd910_r0_34 {
    u8 unknown_0[0x3a8];  // (not used here)
    u32 word_3a8;
    u32 word_3ac;
    u32 word_3b0;
    u32 word_3b4;
    u32 word_3b8;
    u32 word_3bc;
    u32 word_3c0;
    u32 word_3c4;
    u32 word_3c8;
    u32 word_3cc;
    u32 word_3d0;
    u32 word_3d4;
    u32 word_3d8;
    u32 word_3dc;
    u32 word_3e0;
};
GUEST_OFFSET(Local_006bd910_r0_34, word_3a8, 0x3a8);
GUEST_OFFSET(Local_006bd910_r0_34, word_3ac, 0x3ac);
GUEST_OFFSET(Local_006bd910_r0_34, word_3b0, 0x3b0);
GUEST_OFFSET(Local_006bd910_r0_34, word_3b4, 0x3b4);
GUEST_OFFSET(Local_006bd910_r0_34, word_3b8, 0x3b8);
GUEST_OFFSET(Local_006bd910_r0_34, word_3bc, 0x3bc);
GUEST_OFFSET(Local_006bd910_r0_34, word_3c0, 0x3c0);
GUEST_OFFSET(Local_006bd910_r0_34, word_3c4, 0x3c4);
GUEST_OFFSET(Local_006bd910_r0_34, word_3c8, 0x3c8);
GUEST_OFFSET(Local_006bd910_r0_34, word_3cc, 0x3cc);
GUEST_OFFSET(Local_006bd910_r0_34, word_3d0, 0x3d0);
GUEST_OFFSET(Local_006bd910_r0_34, word_3d4, 0x3d4);
GUEST_OFFSET(Local_006bd910_r0_34, word_3d8, 0x3d8);
GUEST_OFFSET(Local_006bd910_r0_34, word_3dc, 0x3dc);
GUEST_OFFSET(Local_006bd910_r0_34, word_3e0, 0x3e0);

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr u32 current_player_data_address = 0x00aaf14cu;
inline guest::global<u32, 0x00aaf14c> current_player_data;
inline constexpr guest::Function<0x001b264c, u32(u32, u32, u32, u32)> Record200__clear;
inline constexpr guest::Function<0x001b4bc8, u32(u32)> clear_first_ten_items;
inline constexpr guest::Function<0x0020be1c, u32(u32)> Record29__clear;
inline constexpr guest::Function<0x0020c500, u32(u32)> Player__clear_main_part;
inline constexpr guest::Function<0x0024a848, u32(u32, u32)> BadgeCounters__construct;
inline constexpr guest::Function<0x0024c8d4, u32(u32, u32, u32, u32)> PlayerRecord8a3c__clear;
inline constexpr guest::Function<0x0024dd14, u32(u32)> Record29b__construct;
inline constexpr guest::Function<0x002beff0, u32(u32)> clear_counter_set;
inline constexpr guest::Function<0x002c0048, u32(u32, u32)> FlagBlockBc__reset;
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> clear_aligned;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> Item__copy;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> construct_item;
inline constexpr guest::Function<0x002ff408, u32(u32, u32, u32, u32)> Letter__clear;
inline constexpr guest::Function<0x00301444, u32(u32, u32)> clear;
inline constexpr guest::Function<0x00303534, u32(u32, u32, u32, u32)> EncryptedInt__set;
inline constexpr guest::Function<0x0030589c, u32(u32)> PlayerRef__clear;
inline constexpr guest::Function<0x0030a7e0, u32(u32)> reset_saved_record;
inline constexpr guest::Function<0x005bcbfc, u32(u32, u32)> TimedRecord__init_state_4;
inline constexpr guest::Function<0x005bd05c, u32(u32)> construct_record_with_half_a;
inline constexpr guest::Function<0x005bd2a0, u32(u32)> construct_record_with_half_b;
inline constexpr guest::Function<0x005bd864, u32(u32)> construct_record_with_items;
inline constexpr guest::Function<0x005be0fc, u32(u32)> NamePairRecord__clear;
inline constexpr guest::Function<0x005be87c, u32(u32)> IdList11__clear;
inline constexpr guest::Function<0x005c6760, u32(u32)> update_current_player_position;
inline constexpr guest::Function<0x006ccd54, u32(u32)> clear_items_b4;
inline constexpr guest::Function<0x006f0030, u32(u32)> BadgeRecord__clear;

struct __attribute__((packed)) Frame_006bd910 {
    u8 unknown_0[0x8];  // (not read or written by name)
    u32 word_8;
    u8 unknown_c[0x24];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006bd910, word_8, 0x8);
GUEST_SIZE(Frame_006bd910, 0x30);

u32 player_operation_c(gptr<Object_006bd910_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_006bd910> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 player = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_006bd910_ea_1> ea_1 = gptr<Local_006bd910_ea_1>(frame.at(4).addr());
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->player = player;
    ea_1->word_c = r5;
    ea_1->word_10 = r6;
    ea_1->word_14 = r7;
    ea_1->word_18 = r8;
    ea_1->word_1c = r9;
    ea_1->word_20 = r10;
    ea_1->word_24 = r11;
    ea_1->word_28 = r14;
    player = r0;
    r9 = r0 + 0x8f00u;  // (from the original)
    r10 = arg0->half_8f2c;
    clear_aligned(r0, 0xa480u, r2, r3);  // (from the original)
    Player__clear_main_part(player);
    BadgeRecord__clear(player + 0x8ac4u);  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r8 = player + 0x6bd0u;  // (from the original)
    r6 = player + 0x6c10u;  // (from the original)
    r7 = r6;
    r5 = r8;
    r11 = 0u;
    if (r8 < r7) {
        do {
            Item__copy(r5, empty_item_address, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r5 += 4u;
            *gptr<u8>(r6) = u8(r11);
            r6 += 1u;
            guest::preempt();
        } while (r5 < r7);
    }
    EncryptedInt__set(r8 + 0x338u, 0u, r2, r3);  // (from the original)
    u32 r0_3 = *current_player_data;
    if (r0_3 != 0) {
        u32 r0_4 = r0_3 + 0x6bd0u;  // (from the original)
        if (r0_4 == r8) {
            update_current_player_position(r0_4);
        }
    }
    EncryptedInt__set(player + 0x6b8cu, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    EncryptedInt__set(player + 0x6b94u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    EncryptedInt__set(player + 0x6b9cu, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    clear_counter_set(player + 0x8d1cu);  // (from the original)
    EncryptedInt__set(player + 0x6ba4u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r3 = guest::cpu()->r[3];
    r2 = player + 0x6bb0u;  // (from the original)
    *gptr<u32>(r2) = 0;
    *gptr<u32>(r2 + 4) = 0;
    r5 = player + 0x6f10u;  // (from the original)
    r8 = r5;
    if (!(r5 >= player + 0x6fb0u)) {  // (from the original)
        r6 = r8 + 0xa0u;  // (from the original)
        do {
            Item__copy(r5, empty_item_address, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r5 += 4u;
            guest::preempt();
        } while (r5 < r6);
    }
    r5 = r8 + 0xa0u;  // (from the original)
    r6 = r8 + 0xe0u;  // (from the original)
    if (!(r5 >= r6)) {
        r7 = r5 + 0x40u;  // (from the original)
        do {
            Item__copy(r5, empty_item_address, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r5 += 4u;
            *gptr<u8>(r6) = u8(r11);
            r6 += 1u;
            guest::preempt();
        } while (r5 < r7);
    }
    Item__copy(r8 + 0xf0u, empty_item_address, r2, r3);  // (from the original)
    Item__copy(r8 + 0xf4u, empty_item_address, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = player + 0x7008u;  // (from the original)
    r5 = 0u;
    do {
        Letter__clear(r6 + r5 * 0x280u, r1, r2, r3);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r5 += 1u;
        guest::preempt();
    } while (r5 < 0xau);  // (from the original)
    Record200__clear(r6 + 0x1900u, r1, r2, r3);  // (from the original)
    Record29b__construct(player + 0x89d0u);  // (from the original)
    r3 = 0xffffu;  // (from the original)
    r1 = 0u;
    r2 = player + 0x89fau;  // (from the original)
    r0 = r1;
    do {
        u32 r1_6 = r1 + 1u;
        r0 += 2u;
        *gptr<u16>(r2 + (r1 << 1)) = u16(r3);
        r1 = r1_6 + 1u;
        *gptr<u16>(r2 + (r1_6 << 1)) = u16(r3);
        guest::preempt();
    } while (s32(r0) < 0x20);  // (from the original)
    PlayerRecord8a3c__clear(player + 0x8a3cu, r1, r2, r3);  // (from the original)
    Item__copy(player + 0x8f0au, empty_item_address, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    Item__copy(player + 0x8f0eu, empty_item_address, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    PlayerRef__clear(player + 0x8f12u);  // (from the original)
    *gptr<u16>(r9 + 0x28u) = u16(r11);  // (from the original)
    construct_record_with_half_a(player + 0x8d4cu);  // (from the original)
    construct_record_with_half_b(player + 0x8d5cu);  // (from the original)
    construct_record_with_items(player + 0x8d6cu);  // (from the original)
    NamePairRecord__clear(player + 0x8d84u);  // (from the original)
    reset_saved_record(player + 0x8dfau);  // (from the original)
    TimedRecord__init_state_4(player + 0x8e08u, player);  // (from the original)
    IdList11__clear(player + 0x8ebeu);  // (from the original)
    Record29__clear(player + 0x8ee0u);  // (from the original)
    u32 r1_15 = frame->word_8;
    *gptr<u16>(r9 + 0x2au) = 0x7db;  // (from the original)
    if (r1_15 == 0) {
        *gptr<u16>(r9 + 0x2cu) = 0x7db;  // (from the original)
    } else {
        *gptr<u16>(r9 + 0x2cu) = u16(r10);  // (from the original)
    }
    clear_aligned(player + 0x8f3cu, 0x32u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *gptr<u32>(r9 + 0x6eu) = r11;  // (from the original)
    *gptr<u32>(r9 + 0x72u) = r11;  // (from the original)
    *gptr<u8>(r9 + 0x76u) = u8(r11);  // (from the original)
    *gptr<u32>(player + 0x8f34u) = r11;  // (from the original)
    *gptr<u32>(player + 0x8f38u) = r11;  // (from the original)
    FlagBlockBc__reset(player + 0x8f77u, 0x8f38u);  // (from the original)
    gptr<Local_006bd910_r0_29> r0_29 = gptr<Local_006bd910_r0_29>(player + 0x8f9cu);  // (from the original)
    r0_29->word_0 = r11;
    r0_29->word_4 = r11;
    r0_29->word_8 = r11;
    clear_items_b4(player + 0x92f0u);  // (from the original)
    clear(player + 0x95c0u, 0x42u);  // (from the original)
    clear_aligned(player + 0xa288u, 0x90u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    clear_aligned(player + 0xa318u, 0x90u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    gptr<Local_006bd910_r0_34> r0_34 = gptr<Local_006bd910_r0_34>(player + 0xa000u);  // (from the original)
    r0_34->word_3a8 = r11;
    r0_34->word_3ac = r11;
    r0_34->word_3b0 = r11;
    r0_34->word_3b4 = r11;
    r0_34->word_3b8 = r11;
    r0_34->word_3bc = r11;
    r0_34->word_3c0 = r11;
    r0_34->word_3c4 = r11;
    r0_34->word_3c8 = r11;
    r0_34->word_3cc = r11;
    r0_34->word_3d0 = r11;
    r0_34->word_3d4 = r11;
    r0_34->word_3d8 = r11;
    r0_34->word_3dc = r11;
    r0_34->word_3e0 = r11;
    clear_first_ten_items(player + 0x8fa8u);  // (from the original)
    clear(player + 0xa3e4u, 0x40u);  // (from the original)
    clear(player + 0xa424u, 0x40u);  // (from the original)
    u32 r1_18 = ~0u;
    *gptr<u32>(player + 0xa464u) = r1_18;  // (from the original)
    BadgeCounters__construct(player + 0x8ae0u, r1_18);  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = 0x7ffeu;  // (from the original)
    r5 = 0u;
    do {
        u32 r6_1 = player + r5 * 6u + 0xa468u;  // (from the original)
        u32 r0_39 = frame.at(0).addr();
        construct_item(r0_39, r7, r2, r3);
        Item__copy(r6_1, r0_39, guest::cpu()->r[2], guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r5 += 1u;
        *gptr<u16>(r6_1 + 4u) = u16(r11);
        guest::preempt();
    } while (s32(r5) < 3);
    gptr<Local_006bd910_ea_2> ea_2 = gptr<Local_006bd910_ea_2>(frame.at(0xc).addr());  // (from the original)
    u32 r4_1 = ea_2->word_0;
    u32 r5_2 = ea_2->word_4;
    u32 r6_2 = ea_2->word_8;
    u32 r7_1 = ea_2->word_c;
    u32 r8_1 = ea_2->word_10;
    u32 r9_1 = ea_2->word_14;
    u32 r10_1 = ea_2->word_18;
    u32 r11_1 = ea_2->word_1c;
    r14 = ea_2->word_20;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
    guest::cpu()->r[10] = r10_1;
    guest::cpu()->r[11] = r11_1;
    frame.release();
    return Item__copy((player + 0xa400u) + 0x7au, empty_item_address, r2, r3);  // (from the original)
}

}  // namespace d_006bd910
GUEST_EXPORT(0x006bd910, d_006bd910::player_operation_c);

// f_006bddec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sends the player's pending star and secretary letters, clearing their flags once sent.
namespace d_006bddec {

struct __attribute__((packed)) Player {
    u8 unknown_0[0x570e];  // (not used here)
    u8 byte_570e;
    u8 unknown_570f[0x9];  // (not used here)
    u8 byte_5718;
    u8 unknown_5719[0x7];  // (not used here)
    u8 byte_5720;
};
GUEST_OFFSET(Player, byte_570e, 0x570e);
GUEST_OFFSET(Player, byte_5718, 0x5718);
GUEST_OFFSET(Player, byte_5720, 0x5720);

struct __attribute__((packed)) Local_006bddec_r0_2 {
    u8 unknown_0[0x20];  // (not used here)
    u8 byte_20;
};
GUEST_OFFSET(Local_006bddec_r0_2, byte_20, 0x20);

struct __attribute__((packed)) Local_006bddec_r0_5 {
    u8 unknown_0[0x26];  // (not used here)
    u8 byte_26;
};
GUEST_OFFSET(Local_006bddec_r0_5, byte_26, 0x26);

inline constexpr guest::Function<0x005c257c, u32(u32, u32, u32, u32)> send_star_letter;
inline constexpr guest::Function<0x005c6024, u32(u32, u32, u32, u32)> send_secretary_letter;

u32 Player__send_pending_letters(gptr<Player> player) {
    u32 r0 = player.addr();
    u32 r1_1 = u32(player->byte_570e) & ~0x40u;  // (from the original)
    player->byte_570e = u8(r1_1);
    if (s32(u32(player->byte_5720) << 0x1c) < 0) {  // (from the original)
        if (s32(u32(player->byte_5718) << 0x1c) < 0) {  // (from the original)
            u32 r0_1 = send_star_letter(r0, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1_1 = guest::cpu()->r[1];
            if (r0_1 == 0) {
                goto L_6bde54;
            }
            player->byte_5718 = u8(u32(player->byte_5718) & ~8u);
        }
        gptr<Local_006bddec_r0_2> r0_2 = gptr<Local_006bddec_r0_2>(r0 + 0x5700u);  // (from the original)
        r1_1 = u32(r0_2->byte_20) & ~8u;
        r0_2->byte_20 = u8(r1_1);
    }
L_6bde54:;
    u32 r0_3 = u32(*gptr<u8>(r0 + 0x5726u)) >> 7;  // (from the original)
    if (r0_3 == 0) {
        guest::cpu()->r[1] = r1_1;
        return r0_3;
    }
    u32 r0_4 = send_secretary_letter(r0, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_4 == 0) {
        return r0_4;
    }
    gptr<Local_006bddec_r0_5> r0_5 = gptr<Local_006bddec_r0_5>(r0 + 0x5700u);  // (from the original)
    u32 r1_3 = u32(r0_5->byte_26) & ~0x80u;  // (from the original)
    r0_5->byte_26 = u8(r1_3);
    guest::cpu()->r[1] = r1_3;
    return r0_5.addr();
}

}  // namespace d_006bddec
GUEST_EXPORT_FRAMED(0x006bddec, d_006bddec::Player__send_pending_letters, 0x4010);  // pushes {r4, lr} first, as the original

// f_006bead8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores the position at +0x73c.
namespace d_006bead8 {

struct __attribute__((packed)) HeldObject {
    u8 unknown_0[0x73c];  // (not used here)
    u32 word_73c;
    u32 word_740;
    u32 word_744;
};
GUEST_OFFSET(HeldObject, word_73c, 0x73c);
GUEST_OFFSET(HeldObject, word_740, 0x740);
GUEST_OFFSET(HeldObject, word_744, 0x744);

struct __attribute__((packed)) Object_006bead8_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_006bead8_1, word_0, 0x0);
GUEST_OFFSET(Object_006bead8_1, word_4, 0x4);
GUEST_OFFSET(Object_006bead8_1, word_8, 0x8);


void set_position_73c(gptr<HeldObject> held_object_2, gptr<Object_006bead8_1> arg1) {
    held_object_2->word_73c = arg1->word_0;
    held_object_2->word_740 = arg1->word_4;
    u32 r1_1 = arg1->word_8;
    held_object_2->word_744 = r1_1;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_006bead8
GUEST_EXPORT(0x006bead8, d_006bead8::set_position_73c);

// f_006beaf4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The side kind of the structure at the position: 1 for kinds 0 and 2, 2 for kinds 1 and 3 to 5, 0 otherwise.
namespace d_006beaf4 {

inline constexpr guest::Function<0x0023fc84, u32(u32, u32, u32, u32)> GridLayer__query_cell;
inline constexpr guest::Function<0x002400b0, u32(u32)> structure_terrain_kind;
inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32, u32)> position_to_cell;

struct __attribute__((packed)) Frame_006beaf4 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x8];  // (not read or written by name)
    u32 word_10;
    u8 unknown_14[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006beaf4, word_0, 0x0);
GUEST_OFFSET(Frame_006beaf4, word_4, 0x4);
GUEST_OFFSET(Frame_006beaf4, word_10, 0x10);
GUEST_SIZE(Frame_006beaf4, 0x1c);

u32 structure_side_at_position(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_006beaf4> frame;  // the original's stack frame
    position_to_cell(frame.at(0).addr(), frame.at(4).addr(), r0, r3);
    GridLayer__query_cell(frame.at(8).addr(), frame->word_0, frame->word_4, 1u);
    u32 r0_3 = frame->word_10 & 0xffu;  // (from the original)
    if (r0_3 >= 0xfcu) {  // (from the original)
        return 0u;
    }
    u32 r0_4 = structure_terrain_kind(r0_3);
    if (r0_4 >= 6u) {
        return 0u;
    }
    return (r0_4 == 0 || r0_4 == 2u) ? 1u : 2u;
}

}  // namespace d_006beaf4
GUEST_EXPORT_FRAMED(0x006beaf4, d_006beaf4::structure_side_at_position, 0x4000);  // pushes {lr} first, as the original

// f_006bf18c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The model scale of a category 0xe item by its growth level (from the table; 2 at the top); 0 for other items.
namespace d_006bf18c {

inline constexpr guest::Function<0x002fcb34, u32(u32, u32)> Item__category;
inline constexpr guest::Function<0x0076adf4, u32(u32)> Item__level_of_334d;

void Item__growth_scale(u32 item, u32 r1) {
    u32 category_2 = Item__category(item, r1);
    if (category_2 != 0xeu) {  // (from the original)
        float S0_1 = 0.0f;
        guest::cpu()->s[0] = S0_1;
        return;
    }
    u32 r0_2 = Item__level_of_334d(item);
    float S0_2 = 2.0f;
    if (r0_2 >= 8u) {
        guest::cpu()->s[0] = S0_2;
        return;
    }
    float S0_3 = std::bit_cast<float>(gptr<u32>(0x890300u)[r0_2]);  // (from the original)
    guest::cpu()->r[1] = 0x890300u;  // (from the original)
    guest::cpu()->s[0] = S0_3;
}

}  // namespace d_006bf18c
GUEST_EXPORT_FRAMED(0x006bf18c, d_006bf18c::Item__growth_scale, 0x4010);  // pushes {r4, lr} first, as the original
