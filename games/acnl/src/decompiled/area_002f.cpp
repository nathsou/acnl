// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_002f0c70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f0c70 {

struct __attribute__((packed)) Local_002f0c70_r0_10 {
    u8 unknown_0[0x18];  // (not used here)
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
};
GUEST_OFFSET(Local_002f0c70_r0_10, word_18, 0x18);
GUEST_OFFSET(Local_002f0c70_r0_10, word_1c, 0x1c);
GUEST_OFFSET(Local_002f0c70_r0_10, word_20, 0x20);
GUEST_OFFSET(Local_002f0c70_r0_10, word_24, 0x24);
GUEST_OFFSET(Local_002f0c70_r0_10, word_28, 0x28);
GUEST_OFFSET(Local_002f0c70_r0_10, word_2c, 0x2c);
GUEST_OFFSET(Local_002f0c70_r0_10, word_30, 0x30);
GUEST_OFFSET(Local_002f0c70_r0_10, word_34, 0x34);
GUEST_OFFSET(Local_002f0c70_r0_10, word_38, 0x38);
GUEST_OFFSET(Local_002f0c70_r0_10, word_3c, 0x3c);
GUEST_OFFSET(Local_002f0c70_r0_10, word_40, 0x40);
GUEST_OFFSET(Local_002f0c70_r0_10, word_44, 0x44);
GUEST_OFFSET(Local_002f0c70_r0_10, word_48, 0x48);
GUEST_OFFSET(Local_002f0c70_r0_10, word_4c, 0x4c);
GUEST_OFFSET(Local_002f0c70_r0_10, word_50, 0x50);
GUEST_OFFSET(Local_002f0c70_r0_10, word_54, 0x54);

struct __attribute__((packed)) Local_002f0c70_r6_1 {
    u8 unknown_0[0x1d8];  // (not used here)
    u32 word_1d8;
    u8 unknown_1dc[0x24];  // (not used here)
    u32 word_200;
};
GUEST_OFFSET(Local_002f0c70_r6_1, word_1d8, 0x1d8);
GUEST_OFFSET(Local_002f0c70_r6_1, word_200, 0x200);

struct __attribute__((packed)) Local_002f0c70_r7_1 {
    u8 unknown_0[0x808];  // (not used here)
    u32 word_808;
    u8 unknown_80c[0x24];  // (not used here)
    u32 word_830;
};
GUEST_OFFSET(Local_002f0c70_r7_1, word_808, 0x808);
GUEST_OFFSET(Local_002f0c70_r7_1, word_830, 0x830);

inline constexpr u32 vtable_script__WordFix_32u_ = 0x00909ee0u;
inline constexpr u32 global_0094f748_address = 0x0094f748u;
inline constexpr u32 global_0094f768_address = 0x0094f768u;
inline constexpr u32 global_0095decc_address = 0x0095deccu;
inline guest::global<u32, 0x0094fd58> global_0094fd58;
inline constexpr guest::Function<0x002efe0c, u32(u32, u32, u32, u32)> call_002efe0c;
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32)> script__construct_word_ptr;
inline constexpr guest::Function<0x00568a80, u32(u32, u32, u32, u32)> find_of_type_b;
inline constexpr guest::Function<0x005e2c98, u32(u32, u32, u32, u32)> call_005e2c98;
inline constexpr guest::Function<0x005e2e50, u32(u32, u32)> call_005e2e50;
inline constexpr guest::Function<0x005e2f94, u32(u32)> call_005e2f94;
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32)> LinkOwner__unlink;
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> call_005ea964;
inline constexpr guest::Function<0x005f4bfc, u32(u32)> construct_script_word;

struct __attribute__((packed)) Frame_002f0c70 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not read or written by name)
    u32 word_8;
    u8 unknown_c[0x58];  // (not read or written by name)
};
GUEST_OFFSET(Frame_002f0c70, word_0, 0x0);
GUEST_OFFSET(Frame_002f0c70, word_8, 0x8);
GUEST_SIZE(Frame_002f0c70, 0x64);

void script__WordFix_32u___WordFix_002f0c70(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_002f0c70> frame;  // the original's stack frame
    u32 res_1 = 0;
    u32 r2_5 = 0;
    u32 r5 = r0;
    u32 r4 = 0u;
    u32 r8 = global_0094f768_address;
    u32 r9 = r8 + 0x28u;  // (from the original)
    do {
        u32 r0_2 = find_of_type_b(r5 + 0x2e4u, gptr<u32>(r8)[r4], r2, r3);  // (from the original)
        gptr<Local_002f0c70_r7_1> r7_1 = gptr<Local_002f0c70_r7_1>(r5 + (r4 << 2));
        gptr<Local_002f0c70_r6_1> r6_1 = gptr<Local_002f0c70_r6_1>(r7_1.addr() + 0x1000u);  // (from the original)
        r7_1->word_808 = r0_2;
        u32 r3_1 = r6_1->word_1d8;
        call_005e2c98(r3_1, r0_2, 0u, r3_1);
        *gptr<u8>(r6_1->word_1d8 + 0x38u) = 1;  // (from the original)
        u32 r0_4 = find_of_type_b(r5 + 0x2e4u, gptr<u32>(r9)[r4], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r7_1->word_830 = r0_4;
        u32 r3_3 = r6_1->word_200;
        call_005e2c98(r3_3, r0_4, 0u, r3_3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        *gptr<u8>(r6_1->word_200 + 0x38u) = 1;  // (from the original)
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 0xa);  // (from the original)
    u32 r11 = global_0094f748_address;
    r9 = 0x8906ecu;  // (from the original)
    r8 = global_0095decc_address;
    u32 r7 = vtable_script__WordFix_32u_;
    r4 = 0u;
    u32 r10 = r4;
    do {
        u32 r0_6 = find_of_type_b(r5 + 0x198u, gptr<u32>(r11)[r4], r2, r3);  // (from the original)
        u32 r2_2 = r5 + (r4 << 2);
        u32 r6 = r2_2 + 0x1000u;  // (from the original)
        *gptr<u32>(r2_2 + 0x858u) = r0_6;  // (from the original)
        call_005e2c98(*gptr<u32>(r6 + 0x228u), r0_6, 0u, guest::cpu()->r[3]);  // (from the original)
        *gptr<u8>(*gptr<u32>(r6 + 0x228u) + 0x38u) = 1;  // (from the original)
        u32 r0_8 = frame.at(8).addr();
        script__construct_word_ptr(r0_8, frame.at(0x20).addr(), 0x20u);  // (from the original)
        *gptr<u32>(r0_8) = r7;
        u32 r0_9 = r0_8 + 0xcu;  // (from the original)
        construct_script_word(r0_9);
        r3 = guest::cpu()->r[3];
        gptr<Local_002f0c70_r0_10> r0_10 = gptr<Local_002f0c70_r0_10>(r0_9 - 0xcu);  // (from the original)
        u32 r1 = 0x10u;  // (from the original)
        r0_10->word_18 = r10;
        r0_10->word_1c = r10;
        r0_10->word_20 = r10;
        r0_10->word_24 = r10;
        r0_10->word_28 = r10;
        r0_10->word_2c = r10;
        r0_10->word_30 = r10;
        r0_10->word_34 = r10;
        r0_10->word_38 = r10;
        r0_10->word_3c = r10;
        r0_10->word_40 = r10;
        r0_10->word_44 = r10;
        r0_10->word_48 = r10;
        r0_10->word_4c = r10;
        r0_10->word_50 = r10;
        r0_10->word_54 = r10;
        r0 = r0_10.addr() + 0x16u;  // (from the original)
        do {
            u32 r2_4 = *gptr<u16>(r9);
            res_1 = r1 - 1u;
            r1 = res_1;
            *gptr<u16>(r0 + 2u) = u16(r2_4);
            r2_5 = *gptr<u16>(r9);
            u32 ea_2 = r0 + 4u;
            *gptr<u16>(ea_2) = u16(r2_5);
            r0 = ea_2;
            guest::preempt();
        } while (res_1 != 0);
        call_005ea8f8(*gptr<u32>(r8), 0u, r2_5, r3);
        frame->word_0 = r10;
        u32 r3_7 = gptr<u16>(0x84884cu)[r4];  // (from the original)
        call_005ea964(*gptr<u32>(r8), frame.at(8).addr(), 0x2f0e74u, r3_7);  // (from the original)
        LinkOwner__unlink(*gptr<u32>(r8), 0u);
        call_005e2e50(*gptr<u32>(r6 + 0x228u), frame.at(8).addr());  // (from the original)
        call_005e2f94(*gptr<u32>(r6 + 0x228u));  // (from the original)
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        frame->word_8 = r7;
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 2);
    call_002efe0c(r5, guest::cpu()->r[1], r2, r3);
    u32 r1_10 = *global_0094fd58 & ~0x10u;  // (from the original)
    *global_0094fd58 = r1_10;
    guest::cpu()->r[1] = r1_10;
}

}  // namespace d_002f0c70
GUEST_EXPORT_FRAMED(0x002f0c70, d_002f0c70::script__WordFix_32u___WordFix_002f0c70, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_002f10b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f10b4 {

struct __attribute__((packed)) Local_002f10b4_r4_3 {
    u32 word_0;
    u8 unknown_4[0xe0];  // (not used here)
    u32 word_e4;
};
GUEST_OFFSET(Local_002f10b4_r4_3, word_0, 0x0);
GUEST_OFFSET(Local_002f10b4_r4_3, word_e4, 0xe4);

struct __attribute__((packed)) Local_002f10b4_r5_1 {
    u8 unknown_0[0x1d8];  // (not used here)
    u32 word_1d8;
    u8 unknown_1dc[0x24];  // (not used here)
    u32 word_200;
};
GUEST_OFFSET(Local_002f10b4_r5_1, word_1d8, 0x1d8);
GUEST_OFFSET(Local_002f10b4_r5_1, word_200, 0x200);

struct __attribute__((packed)) Local_002f10b4_r5_2 {
    u8 unknown_0[0x228];  // (not used here)
    u32 word_228;
};
GUEST_OFFSET(Local_002f10b4_r5_2, word_228, 0x228);

inline constexpr u32 vtable_Control1Button = 0x008ef22cu;
inline constexpr u32 vtable_Control1Button_at_e4 = 0x008ef270u;
inline constexpr u32 vtable_CommonScrollBar = 0x008f0888u;
inline constexpr u32 vtable_BsMenuBulletinBoard = 0x008f3ce8u;
inline constexpr u32 vtable_BsMenuBulletinBoard_at_28 = 0x008f3d54u;
inline constexpr guest::Function<0x001aebdc, u32(u32)> call_001aebdc;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;
inline constexpr guest::Function<0x002f770c, u32(u32)> ControlButtonBase__virtual_0_002f770c;
inline constexpr guest::Function<0x002f7710, u32(u32, u32)> destroy_button_action_control;
inline constexpr guest::Function<0x002ffb64, u32(u32)> free_memory;
inline constexpr guest::Function<0x00567ef0, u32(u32)> ssys__ma__lyt__ArcResAccReader__virtual_0;
inline constexpr guest::Function<0x0056988c, u32(u32)> destroy_animation;
inline constexpr guest::Function<0x005bf744, u32(u32)> Layout__virtual_0;
inline constexpr guest::Function<0x005e3194, u32(u32, u32, u32, u32)> script__RenderMain__RenderMain_005e3194;
inline constexpr guest::Function<0x006aaa30, u32(u32, u32)> MenuBase__virtual_0;

u32 BsMenuBulletinBoard__virtual_0_002f10b4(gptr<BsMenuBulletinBoard> arg0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r6 = r0;
    u32 r4 = 0u;
    u32 r7 = r4;
    u32 r1 = vtable_BsMenuBulletinBoard_at_28;
    arg0->word_0 = vtable_BsMenuBulletinBoard;
    arg0->word_28 = r1;
    do {
        gptr<Local_002f10b4_r5_1> r5_1 = gptr<Local_002f10b4_r5_1>(r6 + (r4 << 2) + 0x1000u);  // (from the original)
        u32 r0_1 = r5_1->word_1d8;
        if (r0_1 != 0) {
            script__RenderMain__RenderMain_005e3194(r0_1, r1, r2, r3);
            free_memory(r0_1);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        u32 r0_2 = r5_1->word_200;
        r5_1->word_1d8 = r7;
        if (r0_2 != 0) {
            script__RenderMain__RenderMain_005e3194(r0_2, r1, r2, r3);
            free_memory(r0_2);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        r4 += 1u;
        r5_1->word_200 = r7;
        guest::preempt();
    } while (s32(r4) < 0xa);  // (from the original)
    r4 = 0u;
    do {
        gptr<Local_002f10b4_r5_2> r5_2 = gptr<Local_002f10b4_r5_2>(r6 + (r4 << 2) + 0x1000u);  // (from the original)
        u32 r0_3 = r5_2->word_228;
        if (r0_3 != 0) {
            script__RenderMain__RenderMain_005e3194(r0_3, r1, r2, r3);
            free_memory(r0_3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        r4 += 1u;
        r5_2->word_228 = r7;
        guest::preempt();
    } while (s32(r4) < 2);
    destroy_array_elements(r6 + 0x229cu, 0x1c81ccu, 0x1cu, 2u);  // (from the original)
    u32 r0_5 = r6 + 0x1b04u;  // (from the original)
    *gptr<u32>(r0_5) = vtable_CommonScrollBar;
    u32 r0_6 = r0_5 + 0x608u;  // (from the original)
    destroy_button_action_control(r0_6, vtable_CommonScrollBar);
    destroy_array_elements(r0_6 - 0x1c0u, 0x2b6ef8u, 0xe0u, 2u);  // (from the original)
    u32 r0_8 = (r0_6 - 0x608u) + 0x410u;  // (from the original)
    destroy_animation(r0_8);
    u32 r0_9 = r0_8 - 0x28u;  // (from the original)
    destroy_animation(r0_9);
    u32 r0_10 = r0_9 - 0x28u;  // (from the original)
    destroy_animation(r0_10);
    u32 r0_11 = r0_10 - 0x28u;  // (from the original)
    destroy_animation(r0_11);
    u32 r0_13 = Layout__virtual_0(r0_11 - 0x14cu);  // (from the original)
    u32 r0_15 = ssys__ma__lyt__ArcResAccReader__virtual_0(r0_13 - 0x248u);  // (from the original)
    destroy_array_elements(r0_15 - 0x1c4u, 0x2b6ef8u, 0xe0u, 2u);  // (from the original)
    u32 r0_17 = (r0_15 - 0x1b08u) + 0x1860u;  // (from the original)
    destroy_button_action_control(r0_17, guest::cpu()->r[1]);
    gptr<Local_002f10b4_r4_3> r4_3 = gptr<Local_002f10b4_r4_3>(r0_17 - 0x630u);  // (from the original)
    r4_3->word_e4 = vtable_Control1Button_at_e4;
    r4_3->word_0 = vtable_Control1Button;
    destroy_array_elements(r4_3.addr() + 0x118u, 0x2e0b3cu, 0x518u, 1u);  // (from the original)
    ControlButtonBase__virtual_0_002f770c(r4_3.addr());
    u32 r0_19 = r4_3.addr() - 0x514u;  // (from the original)
    call_001aebdc(r0_19);
    u32 r0_20 = r0_19 - 0x4bcu;  // (from the original)
    call_001aebdc(r0_20);
    destroy_array_elements(r0_20 - 0x120u, 0x56988cu, 0x28u, 5u);  // (from the original)
    u32 r0_22 = (r0_20 - 0x860u) + 0x718u;  // (from the original)
    destroy_animation(r0_22);
    u32 r0_23 = r0_22 - 0x28u;  // (from the original)
    destroy_animation(r0_23);
    u32 r0_24 = r0_23 - 0x28u;  // (from the original)
    destroy_animation(r0_24);
    u32 r0_25 = r0_24 - 0x28u;  // (from the original)
    destroy_animation(r0_25);
    u32 r0_26 = r0_25 - 0x28u;  // (from the original)
    destroy_animation(r0_26);
    u32 r0_28 = ssys__ma__lyt__ArcResAccReader__virtual_0(r0_26 - 0x248u);  // (from the original)
    u32 r0_30 = Layout__virtual_0(r0_28 - 0x14cu);  // (from the original)
    u32 r0_32 = Layout__virtual_0(r0_30 - 0x14cu);  // (from the original)
    u32 r0_34 = Layout__virtual_0(r0_32 - 0x14cu);  // (from the original)
    frame.release();
    return MenuBase__virtual_0(r0_34 - 0x4cu, guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_002f10b4
GUEST_EXPORT(0x002f10b4, d_002f10b4::BsMenuBulletinBoard__virtual_0_002f10b4);

// f_002f29ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f29ac {

inline constexpr u32 vtable_ComButton1Lyt = 0x008ee218u;
inline constexpr u32 vtable_Control1Button = 0x008ef22cu;
inline constexpr u32 vtable_Control1Button_at_e4 = 0x008ef270u;
inline constexpr u32 vtable_CommonScrollBar = 0x008f0888u;
inline constexpr u32 vtable_ComButtonLytBase = 0x008f18f4u;
inline constexpr u32 vtable_BsMenuFriendChatLog = 0x008f3d68u;
inline constexpr u32 vtable_BsMenuFriendChatLog_at_28 = 0x008f3dd4u;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;
inline constexpr guest::Function<0x002f770c, u32(u32)> ControlButtonBase__virtual_0_002f770c;
inline constexpr guest::Function<0x002f7710, u32(u32, u32)> destroy_button_action_control;
inline constexpr guest::Function<0x00567ef0, u32(u32, u32)> ssys__ma__lyt__ArcResAccReader__virtual_0;
inline constexpr guest::Function<0x0056988c, u32(u32)> destroy_animation;
inline constexpr guest::Function<0x005bf744, u32(u32)> Layout__virtual_0;
inline constexpr guest::Function<0x006aaa30, u32(u32, u32)> MenuBase__virtual_0;

u32 BsMenuFriendChatLog__virtual_0_002f29ac(gptr<BsMenuFriendChatLog> arg0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    arg0->word_28 = vtable_BsMenuFriendChatLog_at_28;
    arg0->word_0 = vtable_BsMenuFriendChatLog;
    u32 r4_1 = arg0.addr() + 0x2128u;  // (from the original)
    arg0->word_1d90 = vtable_ComButton1Lyt;
    arg0->word_2128 = vtable_Control1Button;
    arg0->word_220c = vtable_Control1Button_at_e4;
    destroy_array_elements(arg0.addr() + 0x2240u, 0x2e0b3cu, 0x518u, 1u);  // (from the original)
    ControlButtonBase__virtual_0_002f770c(r4_1);
    arg0->word_1d90 = vtable_ComButtonLytBase;
    u32 r0_3 = ssys__ma__lyt__ArcResAccReader__virtual_0(r4_1 - 0x248u, vtable_ComButtonLytBase);  // (from the original)
    u32 r0_5 = Layout__virtual_0(r0_3 - 0x14cu);  // (from the original)
    u32 r4_2 = r0_5 - 0x1d94u;  // (from the original)
    destroy_array_elements(r0_5 - 0xf7cu, 0x2cd9f4u, 0x314u, 5u);  // (from the original)
    destroy_array_elements(r4_2 + 0xd8cu, 0x1c81ccu, 0x1cu, 5u);  // (from the original)
    *gptr<u32>(r4_2 + 0x5f4u) = vtable_CommonScrollBar;  // (from the original)
    destroy_button_action_control(r4_2 + 0xbfcu, vtable_CommonScrollBar);  // (from the original)
    u32 r4_3 = r4_2 + 0x5f4u;  // (from the original)
    destroy_array_elements(r4_2 + 0xa3cu, 0x2b6ef8u, 0xe0u, 2u);  // (from the original)
    destroy_animation(r4_3 + 0x410u);  // (from the original)
    destroy_animation(r4_3 + 0x3e8u);  // (from the original)
    destroy_animation(r4_3 + 0x3c0u);  // (from the original)
    destroy_animation(r4_3 + 0x398u);  // (from the original)
    u32 r0_15 = Layout__virtual_0(r4_3 + 0x24cu);  // (from the original)
    u32 r0_17 = ssys__ma__lyt__ArcResAccReader__virtual_0(r0_15 - 0x248u, guest::cpu()->r[1]);  // (from the original)
    destroy_animation(r0_17 - 0x2cu);  // (from the original)
    destroy_animation(r0_17 - 0x54u);  // (from the original)
    u32 r0_21 = Layout__virtual_0(r0_17 - 0x1a0u);  // (from the original)
    destroy_animation(r0_21 - 0x28u);  // (from the original)
    destroy_animation(r0_21 - 0x50u);  // (from the original)
    destroy_animation(r0_21 - 0x78u);  // (from the original)
    u32 r0_26 = Layout__virtual_0(r0_21 - 0x1c4u);  // (from the original)
    u32 r0_28 = ssys__ma__lyt__ArcResAccReader__virtual_0(r0_26 - 0x248u, guest::cpu()->r[1]);  // (from the original)
    frame.release();
    return MenuBase__virtual_0(r0_28 - 0x4cu, guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_002f29ac
GUEST_EXPORT(0x002f29ac, d_002f29ac::BsMenuFriendChatLog__virtual_0_002f29ac);

// f_002f2b28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f2b28 {

inline constexpr u32 vtable_script__WordFix_128u_ = 0x009099d8u;
inline constexpr u32 vtable_script__WordFix_450u_ = 0x0090a0a0u;
inline constexpr u32 global_0095decc_address = 0x0095deccu;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> script__construct_word_ptr;
inline constexpr guest::Function<0x005d6cc0, u32(u32, u32)> call_005d6cc0;
inline constexpr guest::Function<0x005d6d28, u32(u32)> call_005d6d28;
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32)> LinkOwner__unlink;
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> call_005ea964;
inline constexpr guest::Function<0x005f4bfc, u32(u32)> construct_script_word;

struct __attribute__((packed)) Frame_002f2b28 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x398];  // (not read or written by name)
    u32 word_3a0;
    u8 unknown_3a4[0x120];  // (not read or written by name)
};
GUEST_OFFSET(Frame_002f2b28, word_0, 0x0);
GUEST_OFFSET(Frame_002f2b28, word_4, 0x4);
GUEST_OFFSET(Frame_002f2b28, word_3a0, 0x3a0);
GUEST_SIZE(Frame_002f2b28, 0x4c4);

u32 script__WordFix_128u___WordFix_002f2b28(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_002f2b28> frame;  // the original's stack frame
    u32 r12 = guest::cpu()->r[12];
    u32 res_1 = 0;
    u32 r2_4 = 0;
    u32 res_2 = 0;
    u32 r2_11 = 0;
    *frame.at<u32>(0x4e0) = r12;  // (from the original)
    u32 r4 = r0;
    u32 r11 = frame.at(0x3a0).addr();  // (from the original)
    script__construct_word_ptr(r11, frame.at(0x3b8).addr(), 0x80u, r3);  // (from the original)
    u32 r7 = vtable_script__WordFix_128u_;
    *gptr<u32>(r11) = r7;
    u32 r0_1 = r11 + 0xcu;  // (from the original)
    construct_script_word(r0_1);
    clear_aligned(r0_1 + 0xcu, 0x100u);  // (from the original)
    r3 = guest::cpu()->r[3];
    u32 r8 = 0x8906ecu;  // (from the original)
    r0 = r0_1 + 0xau;  // (from the original)
    u32 r1 = 0x40u;  // (from the original)
    do {
        res_1 = r1 - 1u;
        r1 = res_1;
        u32 r2_3 = *gptr<u16>(r8);
        *gptr<u16>(r0 + 2u) = u16(r2_3);
        r2_4 = *gptr<u16>(r8);
        u32 ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r2_4);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    u32 r10 = global_0095decc_address;
    call_005ea8f8(*gptr<u32>(r10), 0u, r2_4, r3);
    frame->word_0 = 0;
    call_005ea964(*gptr<u32>(r10), r11, 0x2f2cccu, *gptr<u32>(r4 + 0x630u));  // (from the original)
    LinkOwner__unlink(*gptr<u32>(r10), 0u);
    u32 r0_6 = r4 + 0x41cu;  // (from the original)
    call_005d6cc0(r0_6, r11);
    call_005d6d28(r0_6);
    u32 r9 = frame.at(4).addr();
    script__construct_word_ptr(r9, frame.at(0x1c).addr(), 0x1c2u, guest::cpu()->r[3]);  // (from the original)
    u32 r6 = vtable_script__WordFix_450u_;
    *gptr<u32>(r9) = r6;
    u32 r0_7 = r9 + 0xcu;  // (from the original)
    construct_script_word(r0_7);
    clear_aligned(r0_7 + 0xcu, 0x384u);  // (from the original)
    r3 = guest::cpu()->r[3];
    u32 r5 = 0u;
    r0 = (r0_7 + 0xcu) - 2u;  // (from the original)
    r1 = 0xe1u;  // (from the original)
    do {
        u32 r2_10 = *gptr<u16>(r8);
        res_2 = r1 - 1u;
        r1 = res_2;
        *gptr<u16>(r0 + 2u) = u16(r2_10);
        r2_11 = *gptr<u16>(r8);
        u32 ea_4 = r0 + 4u;
        *gptr<u16>(ea_4) = u16(r2_11);
        r0 = ea_4;
        guest::preempt();
    } while (res_2 != 0);
    call_005ea8f8(*gptr<u32>(r10), 0u, r2_11, r3);
    frame->word_0 = r5;
    call_005ea964(*gptr<u32>(r10), r9, 0x2f2cecu, *gptr<u32>(r4 + 0x630u));  // (from the original)
    LinkOwner__unlink(*gptr<u32>(r10), 0u);
    u32 r0_13 = r4 + 0x51cu;  // (from the original)
    call_005d6cc0(r0_13, r9);
    call_005d6d28(r0_13);
    frame->word_4 = r6;
    frame->word_3a0 = r7;
    return r11;
}

}  // namespace d_002f2b28
GUEST_EXPORT_FRAMED(0x002f2b28, d_002f2b28::script__WordFix_128u___WordFix_002f2b28, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_002f3398: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f3398 {

inline constexpr u32 global_009500e0_address = 0x009500e0u;
inline constexpr u32 global_009500e4_address = 0x009500e4u;
inline constexpr u32 global_00981ff4_address = 0x00981ff4u;
inline guest::global<u8, 0x009500e0> global_009500e0;
inline guest::global<u8, 0x009500e1> global_009500e1;
inline guest::global<u32, 0x009500e4> global_009500e4;
inline guest::global<u32, 0x00981ff4> global_00981ff4;
inline constexpr guest::Function<0x001b95f8, u32(u32, u32, u32, u32)> sead__SafeStringBase_char___SafeStringBase_001b95f8;

u32 f_002f3398() {
    u32 r0_2 = sead__SafeStringBase_char___SafeStringBase_001b95f8(*global_00981ff4, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
    *global_009500e0 = u8(r0_2);
    if (r0_2 != 0) {
        return r0_2;
    }
    u32 r0_4 = sead__SafeStringBase_char___SafeStringBase_001b95f8(*global_009500e4, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_4 == 0) {
        return r0_4;
    }
    *global_009500e0 = 1;
    *global_009500e1 = 1;
    return 1u;
}

}  // namespace d_002f3398
GUEST_EXPORT_FRAMED(0x002f3398, d_002f3398::f_002f3398, 0x4010);  // pushes {r4, lr} first, as the original

// f_002f33e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f33e8 {

inline constexpr u32 global_009500e0_address = 0x009500e0u;
inline constexpr u32 global_009500e4_address = 0x009500e4u;
inline constexpr u32 global_00981ff4_address = 0x00981ff4u;
inline guest::global<u8, 0x009500e0> global_009500e0;
inline guest::global<u8, 0x009500e1> global_009500e1;
inline guest::global<u32, 0x009500e4> global_009500e4;
inline guest::global<u32, 0x00981ff4> global_00981ff4;
inline constexpr guest::Function<0x001b8008, u32(u32, u32, u32, u32)> sead__SafeStringBase_char___SafeStringBase_001b8008;

void f_002f33e8() {
    sead__SafeStringBase_char___SafeStringBase_001b8008(*global_00981ff4, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    sead__SafeStringBase_char___SafeStringBase_001b8008(*global_009500e4, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *global_009500e0 = 0;
    *global_009500e1 = 0;
}

}  // namespace d_002f33e8
GUEST_EXPORT_FRAMED(0x002f33e8, d_002f33e8::f_002f33e8, 0x4010);  // pushes {r4, lr} first, as the original

// f_002f341c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f341c {

inline constexpr u32 stage_heap_address = 0x00952c3cu;
inline constexpr u32 global_00af7618_address = 0x00af7618u;
inline guest::global<u32, 0x008c8ad8> global_008c8ad8;
inline guest::global<u8, 0x009500e1> global_009500e1;
inline guest::global<u32, 0x00952c3c> stage_heap;
inline guest::global<u32, 0x00981fe0> global_00981fe0;
inline guest::global<u8, 0x00981fec> global_00981fec;
inline guest::global<u32, 0x00981ff0> global_00981ff0;
inline guest::global<u32, 0x00af7620> global_00af7620;
inline guest::global<u32, 0x00af7624> global_00af7624;
inline guest::global<u32, 0x00af7644> global_00af7644;
inline constexpr guest::Function<0x001b26c8, u32(u32)> call_001b26c8;
inline constexpr guest::Function<0x0027ab40, u32(u32)> is_local_slot;
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32)> allocate_from_heap_002fd108;
inline constexpr guest::Function<0x002ff8b0, u32(u32)> slot_value;
inline constexpr guest::Function<0x005cd270, u32(u32, u32, u32, u32)> call_005cd270;

u32 f_002f341c(u32 r0, u32 r1, u32 r2) {
    if (*global_00af7644 != 1u && *global_00981fec == 0) {
        call_005cd270(global_00af7618_address, r1, r2, guest::cpu()->r[3]);
        *global_00af7620 = 0xc0000c;  // (from the original)
        *global_00af7624 = 0;
        r1 = r0;
        if (*global_00981ff0 == 0) {
            if (r1 == 0) {
                r1 = *stage_heap;
            }
            u32 r0_1 = allocate_from_heap_002fd108(0xc8b8u, r1, *global_008c8ad8);  // (from the original)
            u32 r0_2 = call_001b26c8(r0_1);
            *global_00981ff0 = r0_2;
            u32 r0_3 = slot_value(4u);
            *global_00981fe0 = r0_3;
            u32 r0_4 = is_local_slot(r0_3);
            r1 = guest::cpu()->r[1];
            if (r0_4 == 0) {
                *global_00981fe0 = 0;
            }
        }
    }
    u32 r0_5 = *global_009500e1;
    if (r0_5 != 0) {
        r0_5 = 0xe0000cu;  // (from the original)
        r1 = 0u;
        *global_00af7620 = r0_5;
        *global_00af7624 = r1;
    }
    guest::cpu()->r[1] = r1;
    return r0_5;
}

}  // namespace d_002f341c
GUEST_EXPORT_FRAMED(0x002f341c, d_002f341c::f_002f341c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002f4158: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f4158 {

struct __attribute__((packed)) Local_002f4158_r0_1 {
    u8 byte_0;
};
GUEST_OFFSET(Local_002f4158_r0_1, byte_0, 0x0);


u32 f_002f4158(u32 r0, u32 r1) {
    gptr<Local_002f4158_r0_1> r0_1 = gptr<Local_002f4158_r0_1>(r0 + 0x19d6u);  // (from the original)
    if (r1 == 0) {
        r0_1->byte_0 = 0xb;  // (from the original)
        guest::cpu()->r[1] = 0xbu;  // (from the original)
        return r0_1.addr();
    }
    if (r1 == 1u) {
        r0_1->byte_0 = 0xc;  // (from the original)
        guest::cpu()->r[1] = 0xcu;  // (from the original)
        return r0_1.addr();
    }
    if (r1 == 2u) {
        r0_1->byte_0 = 8;
        guest::cpu()->r[1] = 8u;
        return r0_1.addr();
    }
    if (r1 == 3u) {
    } else {
        guest::cpu()->r[1] = r1;
        return r0_1.addr();
    }
    r0_1->byte_0 = 9;
    guest::cpu()->r[1] = 9u;
    return r0_1.addr();
}

}  // namespace d_002f4158
GUEST_EXPORT(0x002f4158, d_002f4158::f_002f4158);

// f_002f4ab0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f4ab0 {

struct __attribute__((packed)) Object_002f4ab0_0 {
    u8 unknown_0[0x19d6];  // (not used here)
    u8 byte_19d6;
};
GUEST_OFFSET(Object_002f4ab0_0, byte_19d6, 0x19d6);

inline constexpr guest::Function<0x004ee9a8, u32(u32, u32, u32, u32)> node_call_004ee9a8;
inline constexpr guest::Function<0x004ee9cc, u32(u32, u32, u32, u32)> node_call_004ee9cc;

void f_002f4ab0(gptr<Object_002f4ab0_0> arg0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r5_1 = arg0.addr() + 0x19d6u;  // (from the original)
    float S0_1 = 0.0f;
    u32 r0_1 = arg0.addr() + (u32(arg0->byte_19d6) << 5) + 0x1094u;  // (from the original)
    guest::cpu()->s[0] = S0_1;
    node_call_004ee9cc(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    float S0_2 = 1.0f;
    u32 r0_2 = arg0.addr() + (u32(arg0->byte_19d6) << 5);
    guest::cpu()->s[0] = S0_2;
    frame.release();
    node_call_004ee9a8(r0_2 + 0x1094u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return;  // (from the original)
}

}  // namespace d_002f4ab0
GUEST_EXPORT(0x002f4ab0, d_002f4ab0::f_002f4ab0);

// f_002f4d2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f4d2c {

inline constexpr guest::Function<0x002fa9d0, u32(u32, u32)> string_length;
inline constexpr guest::Function<0x00317cc8, u32(u32, u32, u32, u32)> call_00317cc8;
inline constexpr guest::Function<0x004f2ef0, u32(u32, u32, u32, u32)> call_004f2ef0;
inline constexpr guest::Function<0x00736a1c, u32(u32, u32, u32)> call_00736a1c;

struct __attribute__((packed)) Frame_002f4d2c {
    u32 word_0;
    u8 unknown_4[0x14];  // (not read or written by name)
};
GUEST_OFFSET(Frame_002f4d2c, word_0, 0x0);
GUEST_SIZE(Frame_002f4d2c, 0x18);

u32 f_002f4d2c(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_002f4d2c> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r0_2 = call_00317cc8(r1 + 8u, 0u, r2, r3);
    u32 ea_1 = r0_2 + 0xc0u;  // (from the original)
    u32 r1_1 = *gptr<u32>(ea_1);
    u32 r7_1 = 0u;
    u32 r0_3 = r1_1 == 0 ? r7_1 : ea_1 + r1_1;
    frame->word_0 = r0_3;
    if (r0_3 != 0) {
        u32 r0_4 = string_length(0x2f4db4u, r1_1);  // (from the original)
        u32 r0_5 = call_00736a1c(frame.at(0).addr(), 0x2f4db4u, r0_4);  // (from the original)
        if (r0_5 != 0) {
            u32 ea_2 = r0_5 + 0xcu;  // (from the original)
            u32 r1_2 = *gptr<u32>(ea_2);
            if (r1_2 != 0) {
                r7_1 = r1_2 + ea_2;
            }
        } else {
            r7_1 = 0u;
        }
    } else {
        r7_1 = 0u;
    }
    u32 r3_3 = frame->word_0;
    frame.release();
    return call_004f2ef0(r7_1, 0x2f4dbcu, r2, r3_3);  // (from the original)
}

}  // namespace d_002f4d2c
GUEST_EXPORT(0x002f4d2c, d_002f4d2c::f_002f4d2c);

// f_002f4dcc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f4dcc {

inline constexpr guest::Function<0x002fa9d0, u32(u32, u32)> string_length;
inline constexpr guest::Function<0x00317cc8, u32(u32, u32, u32, u32)> call_00317cc8;
inline constexpr guest::Function<0x004f2ef0, u32(u32, u32, u32, u32)> call_004f2ef0;
inline constexpr guest::Function<0x00736a1c, u32(u32, u32, u32)> call_00736a1c;

struct __attribute__((packed)) Frame_002f4dcc {
    u32 word_0;
    u8 unknown_4[0x14];  // (not read or written by name)
};
GUEST_OFFSET(Frame_002f4dcc, word_0, 0x0);
GUEST_SIZE(Frame_002f4dcc, 0x18);

void f_002f4dcc(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_002f4dcc> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r0_2 = call_00317cc8(r1 + 8u, 0u, r2, r3);
    u32 ea_1 = r0_2 + 0xc0u;  // (from the original)
    u32 r1_1 = *gptr<u32>(ea_1);
    u32 r7_1 = 0u;
    u32 r0_3 = r1_1 == 0 ? r7_1 : ea_1 + r1_1;
    frame->word_0 = r0_3;
    if (r0_3 != 0) {
        u32 r0_4 = string_length(0x2f4e54u, r1_1);  // (from the original)
        u32 r0_5 = call_00736a1c(frame.at(0).addr(), 0x2f4e54u, r0_4);  // (from the original)
        if (r0_5 != 0) {
            u32 ea_2 = r0_5 + 0xcu;  // (from the original)
            u32 r1_2 = *gptr<u32>(ea_2);
            if (r1_2 != 0) {
                r7_1 = r1_2 + ea_2;
            }
        } else {
            r7_1 = 0u;
        }
    } else {
        r7_1 = 0u;
    }
    u32 r3_3 = frame->word_0;
    frame.release();
    call_004f2ef0(r7_1, 0x2f4e54u, r2, r3_3);
    return;
}

}  // namespace d_002f4dcc
GUEST_EXPORT(0x002f4dcc, d_002f4dcc::f_002f4dcc);

// f_002f6a30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f6a30 {

struct __attribute__((packed)) Object_002f6a30_0 {
    u8 unknown_0[0xc4];  // (not used here)
    u32 word_c4;
    u8 unknown_c8[0xc];  // (not used here)
    u32 word_d4;
};
GUEST_OFFSET(Object_002f6a30_0, word_c4, 0xc4);
GUEST_OFFSET(Object_002f6a30_0, word_d4, 0xd4);

inline constexpr u32 global_00950868_address = 0x00950868u;
inline constexpr u32 global_0095086c_address = 0x0095086cu;
inline constexpr u32 global_00950870_address = 0x00950870u;
inline guest::global<u32, 0x0095086c> global_0095086c;
inline guest::global<u32, 0x00950870> global_00950870;
inline constexpr guest::Function<0x002fe7dd, u32(u32)> claim_flag;

u32 f_002f6a30(gptr<Object_002f6a30_0> arg0, u32 r1) {
    u32 r0_1 = arg0->word_d4;
    arg0->word_d4 = r1 == 0 ? r0_1 & ~0x10u : r0_1 | 0x10u;  // (from the original)
    if ((*global_0095086c & 1u) == 0) {
        u32 r0_2 = claim_flag(global_0095086c_address);
        if (r0_2 != 0) {
            *global_00950870 = (arg0->word_c4 & 0x1000u) == 0 ? 0x14000u : 0x60000u;  // (from the original)
        }
    }
    u32 r1_1 = *global_00950870;
    u32 r0_3 = arg0->word_c4;
    u32 r0_4 = (arg0->word_d4 & 0x10u) == 0 ? r0_3 & ~r1_1 : r0_3 | r1_1;  // (from the original)
    arg0->word_c4 = r0_4;
    guest::cpu()->r[1] = r1_1;
    return r0_4;
}

}  // namespace d_002f6a30
GUEST_EXPORT_FRAMED(0x002f6a30, d_002f6a30::f_002f6a30, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002f6b8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f6b8c {

struct __attribute__((packed)) Object_002f6b8c_0 {
    u8 unknown_0[0xc4];  // (not used here)
    u32 word_c4;
    u8 unknown_c8[0xc];  // (not used here)
    u32 word_d4;
};
GUEST_OFFSET(Object_002f6b8c_0, word_c4, 0xc4);
GUEST_OFFSET(Object_002f6b8c_0, word_d4, 0xd4);

inline constexpr guest::Function<0x002f6a30, u32(u32, u32)> call_002f6a30;

u32 f_002f6b8c(gptr<Object_002f6b8c_0> arg0) {
    arg0->word_d4 = arg0->word_d4 & ~4u;
    arg0->word_c4 = 0xc04;  // (from the original)
    return call_002f6a30(arg0.addr(), guest::cpu()->r[1]);
}

}  // namespace d_002f6b8c
GUEST_EXPORT(0x002f6b8c, d_002f6b8c::f_002f6b8c);

// f_002f6d18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f6d18 {

inline constexpr guest::Function<0x001fa354, u32(u32, u32, u32, u32)> call_001fa354;
inline constexpr guest::Function<0x006d1e64, u32(u32, u32, u32, u32)> get_state_30;

u32 f_002f6d18(u32 r0, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = get_state_30(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u8>(r0_1 + 0x40u) = 0;  // (from the original)
    u32 r0_2 = get_state_30(r0_1, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_3 = *gptr<u32>(r0_2 + 0x1f4u);  // (from the original)
    frame.release();
    return call_001fa354(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_002f6d18
GUEST_EXPORT(0x002f6d18, d_002f6d18::f_002f6d18);

// f_002f6db4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f6db4 {

struct __attribute__((packed)) Object_002f6db4_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u8 unknown_8[0xac];  // (not used here)
    u32 word_b4;
};
GUEST_OFFSET(Object_002f6db4_0, word_4, 0x4);
GUEST_OFFSET(Object_002f6db4_0, word_b4, 0xb4);


void f_002f6db4(gptr<Object_002f6db4_0> arg0, u32 r1, u32 r2) {
    u32 r3 = 0u;
    do {
        r3 = r3 == 0 ? arg0->word_4 : *gptr<u32>(r3 + 8u);
        if (r3 == 0) {
            return;
        }
        if (r1 + 1u == 0 || *gptr<u32>(r3 + 0xc8u) == r1) {  // (from the original)
            *gptr<u8>(r3 + 0xd6u) = u8(r2);  // (from the original)
            arg0->word_b4 = r3;
        }
        guest::preempt();
    } while (1);
}

}  // namespace d_002f6db4
GUEST_EXPORT(0x002f6db4, d_002f6db4::f_002f6db4);

// f_002f7a2e: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f7a2e {

inline constexpr guest::Function<0x002f9235, u32(u32, u32, u32, u32)> call_002f9234;

struct __attribute__((packed)) Frame_002f7a2e {
    u8 unknown_0[0x4];  // (not read or written by name)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u8 unknown_18[0x24];  // (not read or written by name)
};
GUEST_OFFSET(Frame_002f7a2e, word_4, 0x4);
GUEST_OFFSET(Frame_002f7a2e, word_8, 0x8);
GUEST_OFFSET(Frame_002f7a2e, word_c, 0xc);
GUEST_OFFSET(Frame_002f7a2e, word_10, 0x10);
GUEST_OFFSET(Frame_002f7a2e, word_14, 0x14);
GUEST_SIZE(Frame_002f7a2e, 0x3c);

u32 format_with_sink(u32 format, u32 context, u32 args, u32 sink) {
    guest::StackFrameOf<Frame_002f7a2e> frame;  // the original's stack frame
    frame->word_8 = context;
    frame->word_14 = 0;
    frame->word_4 = sink;
    frame->word_c = 0x2f7a25;  // (from the original)
    frame->word_10 = format;
    u32 written = call_002f9234(frame.at(0).addr(), args, args, sink);
    return written;
}

}  // namespace d_002f7a2e
GUEST_EXPORT_FRAMED(0x002f7a2f, d_002f7a2e::format_with_sink, 0x4000);  // pushes {lr} first, as the original

// f_002f7c90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The formatter's sink for an unbounded buffer: stores the character and advances.
namespace d_002f7c90 {

struct __attribute__((packed)) BufferCursor {
    u32 at;
};
GUEST_OFFSET(BufferCursor, at, 0x0);


void put_char_to_buffer(u32 c, gptr<BufferCursor> cursor) {
    u32 position = cursor->at;
    *gptr<u8>(position) = u8(c);
    cursor->at = position + 1u;
}

}  // namespace d_002f7c90
GUEST_EXPORT(0x002f7c91, d_002f7c90::put_char_to_buffer);

// f_002f7ca6: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f7ca6 {

inline constexpr guest::Function<0x002f9235, u32(u32, u32, u32, u32)> call_002f9234;

struct __attribute__((packed)) Frame_002f7ca6 {
    u8 unknown_0[0x4];  // (not read or written by name)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u8 unknown_18[0x24];  // (not read or written by name)
};
GUEST_OFFSET(Frame_002f7ca6, word_4, 0x4);
GUEST_OFFSET(Frame_002f7ca6, word_8, 0x8);
GUEST_OFFSET(Frame_002f7ca6, word_c, 0xc);
GUEST_OFFSET(Frame_002f7ca6, word_10, 0x10);
GUEST_OFFSET(Frame_002f7ca6, word_14, 0x14);
GUEST_SIZE(Frame_002f7ca6, 0x3c);

u32 wide_format_with_sink_fn(u32 format, u32 context, u32 args, u32 sink) {
    guest::StackFrameOf<Frame_002f7ca6> frame;  // the original's stack frame
    frame->word_8 = context;
    frame->word_14 = 1;
    frame->word_4 = sink;
    frame->word_c = 0x2f7c9d;  // (from the original)
    frame->word_10 = format;
    u32 written = call_002f9234(frame.at(0).addr(), args, args, sink);
    return written;
}

}  // namespace d_002f7ca6
GUEST_EXPORT_FRAMED(0x002f7ca7, d_002f7ca6::wide_format_with_sink_fn, 0x4000);  // pushes {lr} first, as the original

// f_002f7ccc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The wide formatter's sink for a bounded buffer: stores the character while there is room.
namespace d_002f7ccc {

struct __attribute__((packed)) BoundedWideCursor {
    u32 at;
    u32 end;
};
GUEST_OFFSET(BoundedWideCursor, at, 0x0);
GUEST_OFFSET(BoundedWideCursor, end, 0x4);


void put_wide_char_bounded(u32 c, gptr<BoundedWideCursor> cursor) {
    u32 position = cursor->at;
    if (position >= cursor->end) {
        return;
    }
    cursor->at = position + 2u;
    *gptr<u16>(position) = u16(c);
}

}  // namespace d_002f7ccc
GUEST_EXPORT(0x002f7ccd, d_002f7ccc::put_wide_char_bounded);

// f_002f7cdc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Formats to a file; -1 when the file is in error.
namespace d_002f7cdc {

inline constexpr guest::Function<0x001032ef, u32(u32)> file_error_flag;
inline constexpr guest::Function<0x002f7a2f, u32(u32, u32, u32, u32)> format_with_sink;

u32 vfprintf(u32 format, u32 file) {
    u32 written = format_with_sink(format, file, guest::cpu()->r[2], 0x11c195u);  // (from the original)
    u32 error = file_error_flag(file);
    if (error != 0) {
        return ~0u;
    }
    return written;
}

}  // namespace d_002f7cdc
GUEST_EXPORT_FRAMED(0x002f7cdd, d_002f7cdc::vfprintf, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002f7d52: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f7d52 {

struct __attribute__((packed)) Object_002f7d52_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_002f7d52_1, word_0, 0x0);


u32 f_002f7d52(u32 r0, gptr<Object_002f7d52_1> arg1) {
    u32 r1_1 = arg1->word_0;
    if ((r1_1 & 0x400u) != 0) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return s32(r0 << 0x18) >> 0x18;  // (from the original)
    }
    u32 r1_2 = r1_1 << 0x17;  // (from the original)
    if (s32(r1_2) >= 0) {
        guest::cpu()->r[1] = r1_2;
        return r0;
    }
    guest::cpu()->r[1] = r1_2;
    return s32(r0 << 0x10) >> 0x10;  // (from the original)
}

}  // namespace d_002f7d52
GUEST_EXPORT(0x002f7d53, d_002f7d52::f_002f7d52);

// f_002f7d68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f7d68 {

struct __attribute__((packed)) Object_002f7d68_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_002f7d68_1, word_0, 0x0);


u32 f_002f7d68(u32 r0, gptr<Object_002f7d68_1> arg1) {
    u32 r1_1 = arg1->word_0;
    if ((r1_1 & 0x400u) != 0) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0 & 0xffu;  // (from the original)
    }
    u32 r1_2 = r1_1 << 0x17;  // (from the original)
    if (s32(r1_2) >= 0) {
        guest::cpu()->r[1] = r1_2;
        return r0;
    }
    guest::cpu()->r[1] = r1_2;
    return r0 & 0xffffu;  // (from the original)
}

}  // namespace d_002f7d68
GUEST_EXPORT(0x002f7d69, d_002f7d68::f_002f7d68);

// f_002f7d80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f7d80 {


u32 f_002f7d80(u32 r0) {
    u32 r0_1 = r0 - (r0 >> 2);
    u32 r0_2 = r0_1 + (r0_1 >> 4);
    u32 r0_3 = r0_2 + (r0_2 >> 8);
    u32 r0_4 = r0_3 + (r0_3 >> 0x10) >> 3;  // (from the original)
    u32 r1_2 = (r0 - 0xau) - (r0_4 + (r0_4 << 2) << 1);  // (from the original)
    if (s32(r1_2) < 0) {
        r1_2 += 0xau;  // (from the original)
    } else {
        r0_4 += 1u;
    }
    guest::cpu()->r[1] = r1_2;
    return r0_4;
}

}  // namespace d_002f7d80
GUEST_EXPORT(0x002f7d80, d_002f7d80::f_002f7d80);

// f_002f7e5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f7e5c {


u32 f_002f7e5c(u32 r0, u32 r1) {
    u32 r3_1 = u64(r1) + ~0u + u32(r0 >= 0xau);  // (from the original)
    u32 r14 = r0 >> 2 | r1 << 0x1e;  // (from the original)
    u32 cf_1 = r0 >= r14;
    u32 r0_1 = r0 - r14;
    u32 r1_1 = u64(r1) + ~(r1 >> 2) + cf_1;
    u32 res_1 = r0_1 + (r0_1 >> 4 | r1_1 << 0x1c);  // (from the original)
    u32 cf_2 = res_1 < r0_1;
    u32 r1_2 = u64(r1_1) + (r1_1 >> 4) + cf_2;
    u32 res_2 = res_1 + (res_1 >> 8 | r1_2 << 0x18);  // (from the original)
    u32 cf_3 = res_2 < res_1;
    u32 r1_3 = u64(r1_2) + (r1_2 >> 8) + cf_3;
    u32 res_3 = res_2 + (res_2 >> 0x10 | r1_3 << 0x10);  // (from the original)
    u32 cf_4 = res_3 < res_2;
    u32 r1_4 = u64(r1_3) + (r1_3 >> 0x10) + cf_4;  // (from the original)
    u32 res_4 = res_3 + r1_4;
    u32 r1_5 = u64(r1_4) + u32(res_4 < res_3);
    u32 r0_2 = res_4 >> 3 | r1_5 << 0x1d;  // (from the original)
    u32 r1_6 = r1_5 >> 3;
    u32 res_5 = r0_2 * 5u;
    u32 r4_1 = u64(r1_6 << 2 | r0_2 >> 0x1e) + r1_6 + u32(res_5 < r0_2);  // (from the original)
    u32 res_6 = res_5 + res_5;
    u32 res_7 = u64(r3_1) + ~u32(u64(r4_1) + r4_1 + u32(res_6 < res_5)) + u32((r0 - 0xau) >= res_6);  // (from the original)
    if (s32(res_7) < 0) {
        guest::cpu()->r[1] = r1_6;
        return r0_2;
    }
    u32 cf_5 = r0_2 + 1u < r0_2;
    u32 r1_7 = u64(r1_6) + cf_5;
    guest::cpu()->r[1] = r1_7;
    return r0_2 + 1u;
}

}  // namespace d_002f7e5c
GUEST_EXPORT_FRAMED(0x002f7e5c, d_002f7e5c::f_002f7e5c, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_002f7ef4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f7ef4 {

struct __attribute__((packed)) Object_002f7ef4_0 {
    u8 unknown_0[0x2434];  // (not used here)
    u32 word_2434;
};
GUEST_OFFSET(Object_002f7ef4_0, word_2434, 0x2434);


u32 f_002f7ef4(gptr<Object_002f7ef4_0> arg0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r2_1 = arg0->word_2434;
    if (s32(r2_1) <= s32(r1)) {
        r3 = r1;
        if (r2_1 + 4u > r1) {
            u32 r1_1 = r3 - r2_1;
            u32 r2_2 = r1_1 + (r1_1 << 3);
            u32 r0_1 = arg0.addr() + (r2_2 + (r1_1 << 5) << 4) + 0x18b4u;  // (from the original)
            u32 r1_2 = *gptr<u32>(*gptr<u32>(r0_1) + 0x60u);  // (from the original)
            // virtual function 24 of r0_1
            return guest::call_address<u32>(r1_2, r0_1, r1_2, r2_2, r3);
        }
    }
    u32 r1_3 = ~0u;
    u32 r2_3 = r1_3 + (r1_3 << 3);
    u32 r0_2 = arg0.addr() + (r2_3 + (r1_3 << 5) << 4) + 0x18b4u;  // (from the original)
    u32 r1_4 = *gptr<u32>(*gptr<u32>(r0_2) + 0x60u);  // (from the original)
    // virtual function 24 of r0_2
    return guest::call_address<u32>(r1_4, r0_2, r1_4, r2_3, r3);
}

}  // namespace d_002f7ef4
GUEST_EXPORT(0x002f7ef4, d_002f7ef4::f_002f7ef4);

// f_002f7f40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f7f40 {


u32 f_002f7f40(u32 r0) {
    if (r0 - 0x30u >= 0xau) {  // (from the original)
        return 0u;
    }
    return 1u;
}

}  // namespace d_002f7f40
GUEST_EXPORT(0x002f7f41, d_002f7f40::f_002f7f40);

// f_002f80c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f80c8 {

struct __attribute__((packed)) Object_002f80c8_2 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u8 unknown_18[0x8];  // (not used here)
    u32 word_20;
};
GUEST_OFFSET(Object_002f80c8_2, word_c, 0xc);
GUEST_OFFSET(Object_002f80c8_2, word_10, 0x10);
GUEST_OFFSET(Object_002f80c8_2, word_14, 0x14);
GUEST_OFFSET(Object_002f80c8_2, word_20, 0x20);

inline constexpr guest::Function<0x0010284d, u32(u32, u32, u32, u32)> call_0010284c;

u32 f_002f80c8(u32 r0_unused, u32 r1, gptr<Object_002f80c8_2> arg2) {
    arg2->word_c = r1;
    arg2->word_14 = 0x2f80bd;  // (from the original)
    arg2->word_20 = 0x1024ed;  // (from the original)
    arg2->word_10 = 0;
    call_0010284c(guest::cpu()->r[0], arg2.addr(), 0u, r1);
    return guest::cpu()->r[0];
}

}  // namespace d_002f80c8
GUEST_EXPORT_FRAMED(0x002f80c9, d_002f80c8::f_002f80c8, 0x4010);  // pushes {r4, lr} first, as the original

// f_002f81e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f81e4 {

struct __attribute__((packed)) Object_002f81e4_0 {
    u8 unknown_0[0x2434];  // (not used here)
    u32 word_2434;
};
GUEST_OFFSET(Object_002f81e4_0, word_2434, 0x2434);

inline constexpr guest::Function<0x001df368, u32(u32, u32, u32, u32)> call_001df368;
inline constexpr guest::Function<0x006cce5c, u32(u32, u32, u32, u32)> call_006cce5c;

struct __attribute__((packed)) Frame_002f81e4 {
    u32 word_0;
};
GUEST_OFFSET(Frame_002f81e4, word_0, 0x0);
GUEST_SIZE(Frame_002f81e4, 0x4);

void f_002f81e4(gptr<Object_002f81e4_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_002f81e4> frame;  // the original's stack frame
    u32 r6_1 = 0;
    frame->word_0 = r3;
    u32 r5_1 = r2;
    u32 r0_1 = arg0->word_2434;
    if (s32(r0_1) <= s32(r1)) {
        r3 = r0_1 + 4u;
        r2 = r1;
        r6_1 = r3 > r1 ? r2 - r0_1 : ~0u;
    } else {
        r6_1 = ~0u;
    }
    u32 r0_2 = call_001df368(r0_1, r1, r2, r3);
    frame->word_0 = r5_1;
    u32 r1_1 = *gptr<u32>(arg0.addr() + 0x185cu);  // (from the original)
    call_006cce5c(r0_2, r1_1, *gptr<u32>(arg0.addr() + (r1_1 << 2) + 0x1860u) - 1u, r6_1);  // (from the original)
}

}  // namespace d_002f81e4
GUEST_EXPORT_FRAMED(0x002f81e4, d_002f81e4::f_002f81e4, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_002f83b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f83b0 {

inline constexpr u32 global_00974f28_address = 0x00974f28u;
inline guest::global<u32, 0x00974f28> global_00974f28;
inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> RecursiveLock__lock;
inline constexpr guest::Function<0x001357ec, u32(u32, u32)> RecursiveLock__unlock;
inline constexpr guest::Function<0x0013e560, u32(u32, u32)> ExpHeap__free;

u32 free_plain(u32 r0, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    if (r0 == 0) {
        return r0;
    }
    u32 r6_1 = *global_00974f28;
    RecursiveLock__lock(r6_1 + 0x58u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    ExpHeap__free(r6_1, r0);
    frame.release();
    return RecursiveLock__unlock(r6_1 + 0x58u, guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_002f83b0
GUEST_EXPORT(0x002f83b0, d_002f83b0::free_plain);

// f_002f83f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f83f0 {

struct __attribute__((packed)) Local_002f83f0_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002f83f0_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_002f83f0_ea_3, word_4, 0x4);

struct __attribute__((packed)) Local_002f83f0_r0_1 {
    u32 word_0;
    u8 unknown_4[0xa3c];  // (not used here)
    u32 word_a40;
};
GUEST_OFFSET(Local_002f83f0_r0_1, word_0, 0x0);
GUEST_OFFSET(Local_002f83f0_r0_1, word_a40, 0xa40);

struct __attribute__((packed)) Local_002f83f0_r1_1 {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
    u8 unknown_9[0xf];  // (not used here)
    u8 byte_18;
    u8 unknown_19[0x3];  // (not used here)
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(Local_002f83f0_r1_1, word_0, 0x0);
GUEST_OFFSET(Local_002f83f0_r1_1, word_4, 0x4);
GUEST_OFFSET(Local_002f83f0_r1_1, byte_8, 0x8);
GUEST_OFFSET(Local_002f83f0_r1_1, byte_18, 0x18);
GUEST_OFFSET(Local_002f83f0_r1_1, word_1c, 0x1c);
GUEST_OFFSET(Local_002f83f0_r1_1, word_20, 0x20);

struct __attribute__((packed)) Local_002f83f0_r5_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_002f83f0_r5_1, word_0, 0x0);
GUEST_OFFSET(Local_002f83f0_r5_1, word_4, 0x4);
GUEST_OFFSET(Local_002f83f0_r5_1, word_8, 0x8);

inline constexpr u32 vtable_ChangeStockMyDesign = 0x008f3ef4u;
inline constexpr u32 vtable_ChangeStockMyDesign_at_a40 = 0x008f3f20u;
inline constexpr u32 vtable_ChangeStockMyDesign_at_1888 = 0x008f3f34u;
inline constexpr u32 global_009533c4_address = 0x009533c4u;
inline guest::global<u32, 0x0087a2d8> global_0087a2d8;
inline guest::global<u32, 0x0087a2dc> global_0087a2dc;
inline constexpr guest::Function<0x0022c53c, u32(u32)> DragIconGroup__DragIconGroup;
inline constexpr guest::Function<0x002682ac, u32(u32, u32, u32, u32)> ChangeRentalBase__ChangeRentalBase_002682ac;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x005673c8, u32(u32, u32, u32, u32)> construct_heap_allocator;

u32 ChangeStockMyDesign__ChangeStockMyDesign(u32 r0, u32 r1, u32 r2, u32 r3) {
    gptr<Local_002f83f0_r0_1> r0_1 = gptr<Local_002f83f0_r0_1>(ChangeRentalBase__ChangeRentalBase_002682ac(r0, r1, r2, r3));
    gptr<Local_002f83f0_r1_1> r1_1 = gptr<Local_002f83f0_r1_1>(r0_1.addr() + 0x1888u);  // (from the original)
    r1_1->word_4 = 0;
    r1_1->byte_8 = 0;
    u32 r3_1 = *global_0087a2dc;
    gptr<Local_002f83f0_r5_1> r5_1 = gptr<Local_002f83f0_r5_1>(r0_1.addr() + 0x1894u);  // (from the original)
    r5_1->word_0 = *global_0087a2d8;
    r5_1->word_4 = r3_1;
    r5_1->word_8 = 0;
    r1_1->byte_18 = 0;
    r1_1->word_1c = 0;
    r1_1->word_20 = 0;
    r0_1->word_0 = vtable_ChangeStockMyDesign;
    r0_1->word_a40 = vtable_ChangeStockMyDesign_at_a40;
    u32 r0_2 = r0_1.addr() + 0x18acu;  // (from the original)
    r1_1->word_0 = vtable_ChangeStockMyDesign_at_1888;
    construct_heap_allocator(r0_2, r1_1.addr(), vtable_ChangeStockMyDesign, vtable_ChangeStockMyDesign_at_a40);
    u32 r0_4 = for_each_element(r0_2 + 8u, 0x320a80u, 0x290u, 4u);  // (from the original)
    u32 r0_5 = r0_4 + 0xa40u;  // (from the original)
    DragIconGroup__DragIconGroup(r0_5);
    u32 r0_6 = r0_5 - 0x22f4u;  // (from the original)
    *gptr<u32>(r0_6 + 0x2434u) = 0;  // (from the original)
    *gptr<u8>(r0_6 + 0x2438u) = 0;  // (from the original)
    *gptr<u32>(r0_6 + 0x24u) = 0x2f84b8;  // (from the original)
    *gptr<u32>(r0_6 + 0xa64u) = 0x2f84c4;  // (from the original)
    gptr<Local_002f83f0_ea_3> ea_3 = gptr<Local_002f83f0_ea_3>(r0_6 + 0xa68u);  // (from the original)
    ea_3->word_0 = 0x9533c4;  // (from the original)
    ea_3->word_4 = 0x2f84d0;  // (from the original)
    guest::cpu()->r[1] = global_009533c4_address;
    return r0_6;
}

}  // namespace d_002f83f0
GUEST_EXPORT_FRAMED(0x002f83f0, d_002f83f0::ChangeStockMyDesign__ChangeStockMyDesign, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002f860c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f860c {

inline constexpr u32 vtable_DragIconGroup = 0x008ee248u;
inline constexpr u32 vtable_DragIconGroup_at_c = 0x008ee258u;
inline constexpr u32 vtable_ChangeStockMyDesign = 0x008f3ef4u;
inline constexpr u32 vtable_ChangeStockMyDesign_at_a40 = 0x008f3f20u;
inline constexpr u32 vtable_ChangeStockMyDesign_at_1888 = 0x008f3f34u;
inline constexpr guest::Function<0x002684c0, u32(u32, u32, u32, u32)> ChangeListBase__ChangeListBase;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;
inline constexpr guest::Function<0x00317dec, u32(u32)> ssys__ma__HeapAllocator__virtual_0;
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> destroy_animation;

u32 ChangeStockMyDesign__virtual_0_002f860c(gptr<ChangeStockMyDesign> arg0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    arg0->word_a40 = vtable_ChangeStockMyDesign_at_a40;
    arg0->word_0 = vtable_ChangeStockMyDesign;
    arg0->word_1888 = vtable_ChangeStockMyDesign_at_1888;
    arg0->word_22f4 = vtable_DragIconGroup;
    arg0->word_2300 = vtable_DragIconGroup_at_c;
    u32 r0_1 = arg0.addr() + 0x2408u;  // (from the original)
    destroy_animation(r0_1, vtable_DragIconGroup_at_c, vtable_DragIconGroup, vtable_ChangeStockMyDesign);
    destroy_animation(r0_1 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    destroy_animation(r0_1 - 0x50u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    destroy_animation(r0_1 - 0x78u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    destroy_animation(r0_1 - 0xa0u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    destroy_animation(r0_1 - 0xc8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    destroy_animation(r0_1 - 0xf4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    destroy_array_elements(r0_1 - 0xb54u, 0x320b0cu, 0x290u, 4u);  // (from the original)
    ssys__ma__HeapAllocator__virtual_0(r0_1 - 0xb5cu);  // (from the original)
    frame.release();
    return ChangeListBase__ChangeListBase(r0_1 - 0x2408u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_002f860c
GUEST_EXPORT(0x002f860c, d_002f860c::ChangeStockMyDesign__virtual_0_002f860c);

// f_002f86f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f86f0 {

struct __attribute__((packed)) Object_002f86f0_0 {
    u16 half_0;
    u8 byte_2;
};
GUEST_OFFSET(Object_002f86f0_0, half_0, 0x0);
GUEST_OFFSET(Object_002f86f0_0, byte_2, 0x2);

inline constexpr u32 global_0095386c_address = 0x0095386cu;
inline guest::global<u32, 0x0095386c> global_0095386c;

u32 f_002f86f0(gptr<Object_002f86f0_0> arg0) {
    u32 r1_1 = *global_0095386c;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return arg0.addr();
    }
    u32 r2_1 = arg0->byte_2;
    u32 r0_1 = arg0->half_0;
    if (r2_1 < 4u) {
        r1_1 += (r2_1 << 1);
        *gptr<u16>(r1_1 + 0xa0u) = u16(r0_1);  // (from the original)
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_002f86f0
GUEST_EXPORT(0x002f86f0, d_002f86f0::f_002f86f0);

// f_002f8720: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f8720 {

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> copy_bytes_at_any_alignment;

struct __attribute__((packed)) Frame_002f8720 {
    u32 word_0;
};
GUEST_OFFSET(Frame_002f8720, word_0, 0x0);
GUEST_SIZE(Frame_002f8720, 0x4);

u32 memcpy(u32 dst) {
    guest::StackFrameOf<Frame_002f8720> frame;  // the original's stack frame
    frame->word_0 = dst;
    copy_bytes_at_any_alignment(dst, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return frame->word_0;
}

}  // namespace d_002f8720
GUEST_EXPORT_FRAMED(0x002f8720, d_002f8720::memcpy, 0x4000);  // pushes {lr} first, as the original

// f_002f872c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f872c {

struct __attribute__((packed)) Object_002f872c_0 {
    u16 half_0;
    u16 half_2;
    u16 half_4;
};
GUEST_OFFSET(Object_002f872c_0, half_0, 0x0);
GUEST_OFFSET(Object_002f872c_0, half_2, 0x2);
GUEST_OFFSET(Object_002f872c_0, half_4, 0x4);

inline constexpr u32 global_0094d7b0_address = 0x0094d7b0u;
inline constexpr u32 global_0094d86c_address = 0x0094d86cu;
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> random_below;

struct __attribute__((packed)) Frame_002f872c {
    u8 unknown_0[0x1];  // (not read or written by name)
    u8 byte_1;
    u8 unknown_2[0x2];  // (not read or written by name)
};
GUEST_OFFSET(Frame_002f872c, byte_1, 0x1);
GUEST_SIZE(Frame_002f872c, 0x4);

u32 f_002f872c(gptr<Object_002f872c_0> arg0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_002f872c> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r12 = 0;
    u32 res_2 = 0;
    u32 r0_3 = 0;
    *frame.at<u32>(0) = r3;
    u32 r5 = r0;
    u32 r6 = 0u;
    u32 r8 = 1u;
    u32 r0_1 = arg0->half_0;
    arg0->half_2 = u16(r1);
    arg0->half_4 = u16(r8);
    u32 r4 = gptr<u32>((r0_1 & 0xffu) == 1u ? global_0094d86c_address : global_0094d7b0_address)[r1];  // (from the original)
    if (r1 >= 0x2fu || r4 == 0) {  // (from the original)
        *gptr<u16>(r5 + 4u) = u16(r6);
        return u32(*gptr<u16>(r5 + 4u)) & 0xffu;  // (from the original)
    }
    u32 r9 = *gptr<u8>(r4);
    r0 = 0u;
    u32 r2 = r9 - 1u;
    if (s32(r2) > 0) {
        r3 = 0u;
        r1 = *gptr<u32>(r4 + 4u) - 1u;
        if ((r9 & 1u) == 0) {
            u32 ea_2 = r1 + 2u;
            r1 = ea_2;
            r0 = *gptr<u8>(ea_2);
        }
        u32 res_1 = s32(r2) >> 1;
        r2 = res_1;
        r12 = *gptr<u8>(r1 + 2u);
        if (res_1 != 0) {
            do {
                u32 ea_3 = r1 + 4u;
                r1 = ea_3;
                u32 r7_1 = *gptr<u8>(ea_3);
                r0 += r12;
                r12 = *gptr<u8>(r1 + 2u);
                res_2 = r2 - 1u;
                r2 = res_2;
                r3 += r7_1;
                guest::preempt();
            } while (res_2 != 0);
        }
        r0 += r3;
    }
    u32 r1_1 = r9 - 1u;
    if (s32(r1_1) >= 0) {
        r2 = *gptr<u32>(r4 + 4u);
        r1_1 = *gptr<u8>(r2 + (r8 + (r1_1 << 1)));
        r0 += r1_1;
    }
    u32 r0_2 = random_below(r0, r1_1, r2, r3);
    r12 = guest::cpu()->r[12];
    r3 = *gptr<u8>(r4);
    r1 = r0_2;
    r0 = 0u;
    if (r3 != 0 && s32(r3) >= 0) {
        r12 = *gptr<u32>(r4 + 4u);
    }
    if (s32(r3) <= 0) {
        return u32(*gptr<u16>(r5 + 4u)) & 0xffu;  // (from the original)
    }
L_2f87f4:;
    *frame.at<u16>(0) = gptr<u16>(r12)[r0];
    u32 r2_1 = frame->byte_1;
    if (s32(r1) >= s32(r2_1)) {
        goto L_2f882c;
    }
    r0_3 = *frame.at<u8>(0);
    *gptr<u16>(r5 + 2u) = u16(r0_3);
    if (r0_3 != 0) {
        return u32(*gptr<u16>(r5 + 4u)) & 0xffu;  // (from the original)
    }
    *gptr<u16>(r5 + 4u) = u16(r6);
    return u32(*gptr<u16>(r5 + 4u)) & 0xffu;  // (from the original)
L_2f882c:;
    r0 += 1u;
    r1 -= r2_1;
    if (s32(r0) < s32(r3)) {
        guest::preempt();
        goto L_2f87f4;
    }
    return u32(*gptr<u16>(r5 + 4u)) & 0xffu;  // (from the original)
}

}  // namespace d_002f872c
GUEST_EXPORT_FRAMED(0x002f872c, d_002f872c::f_002f872c, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_002f8848: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f8848 {

inline constexpr guest::Function<0x00100dc5, u32(u32)> character_to_lower_100dc4;

u32 towlower(u32 c) {
    if (c > 0x7fu) {  // (from the original)
        return c;
    }
    u32 r0_1 = character_to_lower_100dc4(c);
    return r0_1;
}

}  // namespace d_002f8848
GUEST_EXPORT_FRAMED(0x002f8849, d_002f8848::towlower, 0x4010);  // pushes {r4, lr} first, as the original

// f_002f8b78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f8b78 {

struct __attribute__((packed)) Object_002f8b78_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_002f8b78_0, word_0, 0x0);
GUEST_OFFSET(Object_002f8b78_0, word_4, 0x4);
GUEST_OFFSET(Object_002f8b78_0, word_8, 0x8);

struct __attribute__((packed)) Object_002f8b78_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_002f8b78_1, word_0, 0x0);
GUEST_OFFSET(Object_002f8b78_1, word_4, 0x4);
GUEST_OFFSET(Object_002f8b78_1, word_8, 0x8);

struct __attribute__((packed)) Local_002f8b78_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_002f8b78_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_002f8b78_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_002f8b78_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_002f8b78_ea_1, word_c, 0xc);

struct __attribute__((packed)) Local_002f8b78_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002f8b78_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_002f8b78_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_002f8b78_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_002f8b78_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_002f8b78_ea_3, word_4, 0x4);
GUEST_OFFSET(Local_002f8b78_ea_3, word_8, 0x8);
GUEST_OFFSET(Local_002f8b78_ea_3, word_c, 0xc);

struct __attribute__((packed)) Local_002f8b78_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002f8b78_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_002f8b78_ea_4, word_4, 0x4);

inline constexpr guest::Function<0x00150d2c, u32(u32, u32, u32, u32)> call_00150d2c;
inline constexpr guest::Function<0x001510d0, u32(u32)> call_001510d0;

u32 f_002f8b78(gptr<Object_002f8b78_0> arg0, gptr<Object_002f8b78_1> arg1, u32 r2) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r11 = guest::cpu()->r[11];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_002f8b78_ea_1> ea_1 = gptr<Local_002f8b78_ea_1>(frame.at(8).addr());
    ea_1->word_0 = r6;
    ea_1->word_4 = r7;
    ea_1->word_8 = r11;
    ea_1->word_c = r14;
    gptr<Local_002f8b78_ea_2> ea_2 = gptr<Local_002f8b78_ea_2>(frame.at(0).addr());
    ea_2->word_0 = r4;
    ea_2->word_4 = r5;
    u32 r3_1 = arg1->word_0;
    u32 r4_1 = arg1->word_4;
    u32 r5_1 = arg1->word_8;
    u32 r0_1 = arg0->word_0;
    u32 r1_1 = arg0->word_4;
    u32 r2_1 = arg0->word_8;
    u32 nf_1 = (r1_1 & ~(r0_1 << 1)) >> 0x1f;  // (from the original)
    if (nf_1) {
        nf_1 = (r4_1 & ~(r3_1 << 1)) >> 0x1f;  // (from the original)
    }
    if (nf_1) {
        u32 r0_2 = call_00150d2c(r0_1, r1_1, r2_1, r3_1);
        r0_1 = call_001510d0(r0_2);
        r1_1 = guest::cpu()->r[1];
    }
    gptr<Local_002f8b78_ea_3> ea_3 = gptr<Local_002f8b78_ea_3>(frame.at(0).addr());
    u32 r4_2 = ea_3->word_0;
    u32 r5_2 = ea_3->word_4;
    u32 r6_1 = ea_3->word_8;
    u32 r7_1 = ea_3->word_c;
    gptr<Local_002f8b78_ea_4> ea_4 = gptr<Local_002f8b78_ea_4>(frame.at(0x10).addr());  // (from the original)
    u32 r11_1 = ea_4->word_0;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[11] = r11_1;
    return r0_1;
}

}  // namespace d_002f8b78
GUEST_EXPORT(0x002f8b78, d_002f8b78::f_002f8b78);

// f_002f8ba8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f8ba8 {

struct __attribute__((packed)) Object_002f8ba8_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_002f8ba8_0, word_0, 0x0);
GUEST_OFFSET(Object_002f8ba8_0, word_4, 0x4);
GUEST_OFFSET(Object_002f8ba8_0, word_8, 0x8);

struct __attribute__((packed)) Object_002f8ba8_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_002f8ba8_1, word_0, 0x0);
GUEST_OFFSET(Object_002f8ba8_1, word_4, 0x4);
GUEST_OFFSET(Object_002f8ba8_1, word_8, 0x8);

struct __attribute__((packed)) Local_002f8ba8_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_002f8ba8_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_002f8ba8_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_002f8ba8_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_002f8ba8_ea_1, word_c, 0xc);

struct __attribute__((packed)) Local_002f8ba8_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002f8ba8_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_002f8ba8_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_002f8ba8_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_002f8ba8_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_002f8ba8_ea_3, word_4, 0x4);
GUEST_OFFSET(Local_002f8ba8_ea_3, word_8, 0x8);
GUEST_OFFSET(Local_002f8ba8_ea_3, word_c, 0xc);

struct __attribute__((packed)) Local_002f8ba8_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002f8ba8_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_002f8ba8_ea_4, word_4, 0x4);

inline constexpr guest::Function<0x001510d0, u32(u32)> call_001510d0;
inline constexpr guest::Function<0x0015120c, u32(u32, u32, u32, u32)> call_0015120c;

u32 f_002f8ba8(gptr<Object_002f8ba8_0> arg0, gptr<Object_002f8ba8_1> arg1, u32 r2) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r11 = guest::cpu()->r[11];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_002f8ba8_ea_1> ea_1 = gptr<Local_002f8ba8_ea_1>(frame.at(8).addr());
    ea_1->word_0 = r6;
    ea_1->word_4 = r7;
    ea_1->word_8 = r11;
    ea_1->word_c = r14;
    gptr<Local_002f8ba8_ea_2> ea_2 = gptr<Local_002f8ba8_ea_2>(frame.at(0).addr());
    ea_2->word_0 = r4;
    ea_2->word_4 = r5;
    u32 r3_1 = arg1->word_0;
    u32 r4_1 = arg1->word_4;
    u32 r5_1 = arg1->word_8;
    u32 r0_1 = arg0->word_0;
    u32 r1_1 = arg0->word_4;
    u32 r2_1 = arg0->word_8;
    if ((r0_1 & 0x40000000u) == 0 && (r3_1 & 0x40000000u) == 0) {  // (from the original)
        u32 r0_2 = call_0015120c(r0_1, r1_1, r2_1, r3_1);
        r0_1 = call_001510d0(r0_2);
        r1_1 = guest::cpu()->r[1];
    }
    gptr<Local_002f8ba8_ea_3> ea_3 = gptr<Local_002f8ba8_ea_3>(frame.at(0).addr());
    u32 r4_2 = ea_3->word_0;
    u32 r5_2 = ea_3->word_4;
    u32 r6_1 = ea_3->word_8;
    u32 r7_1 = ea_3->word_c;
    gptr<Local_002f8ba8_ea_4> ea_4 = gptr<Local_002f8ba8_ea_4>(frame.at(0x10).addr());  // (from the original)
    u32 r11_1 = ea_4->word_0;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[11] = r11_1;
    return r0_1;
}

}  // namespace d_002f8ba8
GUEST_EXPORT(0x002f8ba8, d_002f8ba8::f_002f8ba8);

// f_002f8bd8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f8bd8 {

struct __attribute__((packed)) Local_002f8bd8_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002f8bd8_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_002f8bd8_ea_1, word_4, 0x4);


struct __attribute__((packed)) Frame_002f8bd8 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Frame_002f8bd8, word_0, 0x0);
GUEST_OFFSET(Frame_002f8bd8, word_4, 0x4);
GUEST_SIZE(Frame_002f8bd8, 0x8);

u32 f_002f8bd8(u32 r0, u32 r1) {
    guest::StackFrameOf<Frame_002f8bd8> frame;  // the original's stack frame
    gptr<Local_002f8bd8_ea_1> ea_1 = gptr<Local_002f8bd8_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    u32 r1_1 = frame->word_4 << 1;
    u32 r0_2 = frame->word_0 | r1_1 << 0xb;  // (from the original)
    if (r0_2 != 0) {
        r0_2 = 4u;
    }
    if (r1_1 >> 0x15 != 0) {  // (from the original)
        r0_2 |= 1u;
    }
    if (0x7ffu == r1_1 >> 0x15) {  // (from the original)
        r0_2 |= 2u;
    }
    if (r0_2 == 1u) {
        r0_2 = 5u;
    }
    return r0_2;
}

}  // namespace d_002f8bd8
GUEST_EXPORT(0x002f8bd8, d_002f8bd8::f_002f8bd8);

// f_002f915c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f915c {

inline constexpr u32 vtable_LetterDragIconGroup = 0x008f4008u;
inline constexpr u32 vtable_LetterDragIconGroup_at_c = 0x008f4018u;
inline constexpr guest::Function<0x0022c53c, u32(u32)> DragIconGroup__DragIconGroup;

u32 LetterDragIconGroup__LetterDragIconGroup(gptr<LetterDragIconGroup> arg0) {
    DragIconGroup__DragIconGroup(arg0.addr());
    arg0->word_0 = vtable_LetterDragIconGroup;
    arg0->word_c = vtable_LetterDragIconGroup_at_c;
    return arg0.addr();
}

}  // namespace d_002f915c
GUEST_EXPORT_FRAMED(0x002f915c, d_002f915c::LetterDragIconGroup__LetterDragIconGroup, 0x4010);  // pushes {r4, lr} first, as the original

// f_002f93bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f93bc {

struct __attribute__((packed)) Local_002f93bc_r4_1 {
    u8 unknown_0[0x10];  // (not used here)
    u8 byte_10;
    u8 byte_11;
    u8 byte_12;
    u8 byte_13;
    u32 word_14;
};
GUEST_OFFSET(Local_002f93bc_r4_1, byte_10, 0x10);
GUEST_OFFSET(Local_002f93bc_r4_1, byte_11, 0x11);
GUEST_OFFSET(Local_002f93bc_r4_1, byte_12, 0x12);
GUEST_OFFSET(Local_002f93bc_r4_1, byte_13, 0x13);
GUEST_OFFSET(Local_002f93bc_r4_1, word_14, 0x14);

inline constexpr u32 global_00950148_address = 0x00950148u;
inline constexpr u32 global_0095385c_address = 0x0095385cu;
inline guest::global<u32, 0x00950148> global_00950148;
inline guest::global<u32, 0x0095385c> global_0095385c;
inline constexpr guest::Function<0x00305f44, u32(u32, u32)> query_current_main_object;
inline constexpr guest::Function<0x005c6f7c, u32(u32, u32, u32, u32)> call_005c6f7c;
inline constexpr guest::Function<0x0069a91c, u32(u32, u32)> call_0069a91c;
inline constexpr guest::Function<0x007d0d5c, u32(u32, u32, u32)> call_007d0d5c;

struct __attribute__((packed)) Frame_002f93bc {
    u8 unknown_0[0x1];  // (not read or written by name)
    u8 byte_1;
    u8 byte_2;
    u8 unknown_3[0x1];  // (not read or written by name)
};
GUEST_OFFSET(Frame_002f93bc, byte_1, 0x1);
GUEST_OFFSET(Frame_002f93bc, byte_2, 0x2);
GUEST_SIZE(Frame_002f93bc, 0x4);

void f_002f93bc(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_002f93bc> frame;  // the original's stack frame
    *frame.at<u32>(0) = r3;
    gptr<Local_002f93bc_r4_1> r4_1 = gptr<Local_002f93bc_r4_1>(*global_0095385c);
    call_005c6f7c(global_0095385c_address, r1, r2, r3);
    *frame.at<u8>(0) = 0;
    frame->byte_1 = 0;
    frame->byte_2 = 0;
    u32 r0_1 = *global_00950148;
    if (r0_1 != 0) {
        call_0069a91c(r0_1, r0);
    }
    u32 r1_1 = r0 & 0xf0u;  // (from the original)
    *frame.at<u8>(0) = u8(u32(*frame.at<u8>(0)) & ~0xfu | 3u);  // (from the original)
    frame->byte_1 = u8(u32(frame->byte_1) & ~0xf0u | r0 << 4);  // (from the original)
    u32 r0_2 = u32(frame->byte_2) & ~0xfu | r1_1 >> 4;  // (from the original)
    frame->byte_2 = u8(r0_2);
    u32 r0_3 = query_current_main_object(r0_2, r1_1);
    u32 r2_2 = r0_3 & 7u;
    frame->byte_2 = u8(u32(frame->byte_2) & ~0x70u | r2_2 << 4);  // (from the original)
    r4_1->byte_10 = 0;
    r4_1->byte_11 = 0;
    r4_1->byte_12 = 4;
    r4_1->byte_13 = 0x3f;  // (from the original)
    r4_1->word_14 = 0;
    call_007d0d5c(4u, frame.at(0).addr(), r2_2);
}

}  // namespace d_002f93bc
GUEST_EXPORT_FRAMED(0x002f93bc, d_002f93bc::f_002f93bc, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_002f9888: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f9888 {


u32 f_002f9888(u32 r0, u32 r1) {
    if (r0 < 0x3au) {  // (from the original)
        r0 -= 0x30u;  // (from the original)
    }
    u32 r2_1 = r0 & ~0x20u;  // (from the original)
    if (r2_1 >= 0x41u) {  // (from the original)
        r0 = r2_1 - 0x37u;  // (from the original)
    }
    if (r0 < r1) {
        return r0;
    }
    return ~0u;
}

}  // namespace d_002f9888
GUEST_EXPORT(0x002f9889, d_002f9888::f_002f9888);

// f_002f98a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f98a8 {

struct __attribute__((packed)) Object_002f98a8_0 {
    u8 unknown_0[0x68];  // (not used here)
    u32 word_68;
};
GUEST_OFFSET(Object_002f98a8_0, word_68, 0x68);

struct __attribute__((packed)) Local_002f98a8_r0_5 {
    u8 unknown_0[0x4e];  // (not used here)
    u8 byte_4e;
    u8 byte_4f;
};
GUEST_OFFSET(Local_002f98a8_r0_5, byte_4e, 0x4e);
GUEST_OFFSET(Local_002f98a8_r0_5, byte_4f, 0x4f);

struct __attribute__((packed)) Local_002f98a8_r0_6 {
    u8 unknown_0[0x84];  // (not used here)
    u8 byte_84;
    u8 unknown_85[0x9];  // (not used here)
    u8 byte_8e;
};
GUEST_OFFSET(Local_002f98a8_r0_6, byte_84, 0x84);
GUEST_OFFSET(Local_002f98a8_r0_6, byte_8e, 0x8e);

inline guest::global<u16, 0x0088f298> global_0088f298;
inline constexpr guest::Function<0x002c2078, u32(u32, u32, u32, u32)> call_002c2078;
inline constexpr guest::Function<0x002fe450, u32(u32, u32, u32)> table_a82b90_entry;
inline constexpr guest::Function<0x0051d2e4, u32(u32, u32, u32)> indexed_value;
inline constexpr guest::Function<0x0051d90c, u32(u32, u32, u32)> selected_byte;

u32 f_002f98a8(gptr<Object_002f98a8_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r5 = r0;
    call_002c2078(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    u32 r6 = 0u;
    u32 r4 = r6;
    arg0->word_68 = r6;
    do {
        u32 r0_2 = indexed_value(r4 & 0xffu, 1u, r2);  // (from the original)
        r2 = guest::cpu()->r[2];
        u32 r1_1 = r5 + (r4 << 1);
        r4 += 1u;
        *gptr<u16>(r1_1 + 0x6cu) = u16(r0_2);  // (from the original)
        guest::preempt();
    } while (s32(r4) < 0xb);  // (from the original)
    u32 r0_3 = selected_byte(1u, 1u, r2);
    *gptr<u8>(r5 + 0x82u) = u8(r0_3);  // (from the original)
    u32 r0_4 = selected_byte(0u, 1u, guest::cpu()->r[2]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r4 = 0u;
    *gptr<u8>(r5 + 0x83u) = u8(r0_4);  // (from the original)
    do {
        gptr<Local_002f98a8_r0_5> r0_5 = gptr<Local_002f98a8_r0_5>(table_a82b90_entry(r4, r1, r2));
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0_5.addr() != 0) {
            r2 = r0_5->byte_4e;
            r1 = r5 + r4;
            *gptr<u8>(r1 + 0x84u) = u8(r2);  // (from the original)
            *gptr<u8>(r1 + 0x8eu) = r0_5->byte_4f;  // (from the original)
        } else {
            gptr<Local_002f98a8_r0_6> r0_6 = gptr<Local_002f98a8_r0_6>(r5 + r4);
            r0_6->byte_84 = u8(r6);
            r0_6->byte_8e = u8(r6);
        }
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 0xa);  // (from the original)
    *gptr<u16>(r5 + 0x98u) = u16(r6);  // (from the original)
    *gptr<u8>(r5 + 0x9bu) = 0xff;  // (from the original)
    *gptr<u8>(r5 + 0x9cu) = u8(r6);  // (from the original)
    *gptr<u8>(r5 + 0x9eu) = u8(r6);  // (from the original)
    *gptr<u8>(r5 + 0x9fu) = u8(r6);  // (from the original)
    *gptr<u16>(r5 + 0xa0u) = *global_0088f298;  // (from the original)
    *gptr<u16>(r5 + 0xa2u) = *global_0088f298;  // (from the original)
    u32 r1_2 = *global_0088f298;
    *gptr<u16>(r5 + 0xa4u) = u16(r1_2);  // (from the original)
    *gptr<u16>(r5 + 0xa6u) = *global_0088f298;  // (from the original)
    *gptr<u16>(r5 + 0xa8u) = 0x7ffe;  // (from the original)
    *gptr<u8>(r5 + 0x64u) = u8(r6);  // (from the original)
    *gptr<u8>(r5 + 0x65u) = u8(r6);  // (from the original)
    *gptr<u8>(r5 + 0xaau) = u8(r6);  // (from the original)
    *gptr<u8>(r5 + 0xacu) = u8(r6);  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return 0x7ffeu;  // (from the original)
}

}  // namespace d_002f98a8
GUEST_EXPORT_FRAMED(0x002f98a8, d_002f98a8::f_002f98a8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002f99b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f99b8 {

struct __attribute__((packed)) Object_002f99b8_0 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_002f99b8_0, word_0, 0x0);
GUEST_OFFSET(Object_002f99b8_0, word_8, 0x8);
GUEST_OFFSET(Object_002f99b8_0, word_c, 0xc);


void f_002f99b8(gptr<Object_002f99b8_0> arg0) {
    arg0->word_c = (arg0->word_c | 0x80u) & ~(0x80u << 0xe);  // (from the original)
    arg0->word_8 = 0;
    arg0->word_0 = 0;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_002f99b8
GUEST_EXPORT(0x002f99b9, d_002f99b8::f_002f99b8);

// f_002f99cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f99cc {

struct __attribute__((packed)) Object_002f99cc_2 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u8 unknown_10[0x4];  // (not used here)
    u32 word_14;
};
GUEST_OFFSET(Object_002f99cc_2, word_c, 0xc);
GUEST_OFFSET(Object_002f99cc_2, word_14, 0x14);

struct __attribute__((packed)) Local_002f99cc_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_002f99cc_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_002f99cc_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_002f99cc_ea_1, word_8, 0x8);

inline constexpr guest::Function<0x002f99b9, u32(u32)> call_002f99b8;
inline constexpr guest::Function<0x003fd604, u32(u32)> call_003fd604;
inline constexpr guest::Function<0x003fd608, u32(u32)> call_003fd608;

struct __attribute__((packed)) Frame_002f99cc {
    u32 word_0;
    u8 unknown_4[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_002f99cc, word_0, 0x0);
GUEST_SIZE(Frame_002f99cc, 0xc);

u32 f_002f99cc(u32 r0, u32 r1, gptr<Object_002f99cc_2> arg2) {
    guest::StackFrameOf<Frame_002f99cc> frame;  // the original's stack frame
    u32 r2 = arg2.addr();
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    gptr<Local_002f99cc_ea_1> ea_1 = gptr<Local_002f99cc_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    u32 r5_1 = arg2->word_c;
    u32 r7_1 = arg2->word_14;
    if ((r5_1 & 0x20010u) != 0) {  // (from the original)
        u32 r0_1 = call_003fd604(r7_1);
        if (s32(r0_1) < 0) {
            goto L_2f9a0c;
        }
        arg2->word_c = r5_1 & ~0x20010u;  // (from the original)
    }
    r0_2 = call_003fd608(r7_1);
    *gptr<u32>(r2 + 0x18u) = *gptr<u32>(r2 + 0x18u) + (r1 - (r0_2 & 0x7fffffffu));  // (from the original)
    if (r0_2 == 0) {
        r1_1 = frame->word_0;
        guest::cpu()->r[1] = r1_1;
        return r0_2;
    }
L_2f9a0c:;
    call_002f99b8(r2);
    r1_1 = frame->word_0;
    guest::cpu()->r[1] = r1_1;
    return ~0u;
}

}  // namespace d_002f99cc
GUEST_EXPORT_FRAMED(0x002f99cd, d_002f99cc::f_002f99cc, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_002f9a18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f9a18 {

struct __attribute__((packed)) Object_002f9a18_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u8 unknown_14[0x18];  // (not used here)
    u32 word_2c;
};
GUEST_OFFSET(Object_002f9a18_0, word_4, 0x4);
GUEST_OFFSET(Object_002f9a18_0, word_8, 0x8);
GUEST_OFFSET(Object_002f9a18_0, word_c, 0xc);
GUEST_OFFSET(Object_002f9a18_0, word_10, 0x10);
GUEST_OFFSET(Object_002f9a18_0, word_2c, 0x2c);

inline constexpr guest::Function<0x002f99cd, u32(u32, u32, u32)> call_002f99cc;

void f_002f9a18(gptr<Object_002f9a18_0> arg0) {
    u32 r5_1 = arg0->word_10;
    u32 r0_1 = arg0->word_2c;
    u32 r1_1 = arg0->word_4;
    if (r0_1 <= r1_1) {
        r0_1 = r1_1;
    }
    u32 r1_2 = arg0->word_c & ~(5u << 0x13);  // (from the original)
    arg0->word_c = r1_2;
    if ((r1_2 & 0x10000u) != 0) {  // (from the original)
        if (r0_1 != r5_1) {
            u32 r0_2 = call_002f99cc(r5_1, r0_1 - r5_1, arg0.addr());
            if (r0_2 != 0) {
                return;
            }
        }
        arg0->word_2c = r5_1;
        arg0->word_4 = r5_1;
        arg0->word_8 = 0;
        arg0->word_c = arg0->word_c & ~(1u << 0x10);  // (from the original)
    }
}

}  // namespace d_002f9a18
GUEST_EXPORT_FRAMED(0x002f9a19, d_002f9a18::f_002f9a18, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002f9a64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f9a64 {

struct __attribute__((packed)) Object_002f9a64_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u8 unknown_8[0x4];  // (not used here)
    u32 word_c;
    u32 word_10;
    u8 unknown_14[0x4];  // (not used here)
    u32 word_18;
    u8 unknown_1c[0xc];  // (not used here)
    u32 word_28;
    u32 word_2c;
};
GUEST_OFFSET(Object_002f9a64_0, word_4, 0x4);
GUEST_OFFSET(Object_002f9a64_0, word_c, 0xc);
GUEST_OFFSET(Object_002f9a64_0, word_10, 0x10);
GUEST_OFFSET(Object_002f9a64_0, word_18, 0x18);
GUEST_OFFSET(Object_002f9a64_0, word_28, 0x28);
GUEST_OFFSET(Object_002f9a64_0, word_2c, 0x2c);

inline constexpr guest::Function<0x002f9a19, u32(u32)> call_002f9a18;

void f_002f9a64(gptr<Object_002f9a64_0> arg0) {
    arg0->word_c = arg0->word_c & ~0x20u;  // (from the original)
    if (arg0->word_18 == arg0->word_28) {
        arg0->word_c = arg0->word_c & 0xffffbfbfu;  // (from the original)
        return;
    }
    call_002f9a18(arg0.addr());
    arg0->word_c = arg0->word_c & ~(3u << 0xc) | 0x10u;  // (from the original)
    arg0->word_18 = arg0->word_28;
    u32 r0_1 = arg0->word_10;
    arg0->word_2c = r0_1;
    arg0->word_4 = r0_1;
    arg0->word_c = arg0->word_c & 0xffffbfbfu;  // (from the original)
}

}  // namespace d_002f9a64
GUEST_EXPORT_FRAMED(0x002f9a65, d_002f9a64::f_002f9a64, 0x4010);  // pushes {r4, lr} first, as the original

// f_002f9aa8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002f9aa8 {

struct __attribute__((packed)) Object_002f9aa8_0 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
    u8 byte_4;
    u8 byte_5;
    u8 byte_6;
    u8 byte_7;
    u8 byte_8;
    u8 byte_9;
    u8 unknown_a[0x2a];  // (not used here)
    u8 byte_34;
    u8 byte_35;
    u8 byte_36;
    u8 byte_37;
    u8 byte_38;
    u8 byte_39;
    u8 byte_3a;
    u8 byte_3b;
    u8 unknown_3c[0x28];  // (not used here)
    u8 byte_64;
    u8 byte_65;
    u8 unknown_66[0x2];  // (not used here)
    u32 word_68;
    u8 unknown_6c[0x2c];  // (not used here)
    u16 half_98;
    u8 byte_9a;
    u8 byte_9b;
    u8 byte_9c;
    u8 byte_9d;
    u8 byte_9e;
    u8 byte_9f;
    u16 half_a0;
    u16 half_a2;
    u16 half_a4;
    u16 half_a6;
    u16 half_a8;
    u8 byte_aa;
    u8 byte_ab;
    u8 byte_ac;
    u8 unknown_ad[0x1];  // (not used here)
    u16 half_ae;
    u16 half_b0;
    u8 byte_b2;
};
GUEST_OFFSET(Object_002f9aa8_0, byte_0, 0x0);
GUEST_OFFSET(Object_002f9aa8_0, byte_1, 0x1);
GUEST_OFFSET(Object_002f9aa8_0, byte_2, 0x2);
GUEST_OFFSET(Object_002f9aa8_0, byte_3, 0x3);
GUEST_OFFSET(Object_002f9aa8_0, byte_4, 0x4);
GUEST_OFFSET(Object_002f9aa8_0, byte_5, 0x5);
GUEST_OFFSET(Object_002f9aa8_0, byte_6, 0x6);
GUEST_OFFSET(Object_002f9aa8_0, byte_7, 0x7);
GUEST_OFFSET(Object_002f9aa8_0, byte_8, 0x8);
GUEST_OFFSET(Object_002f9aa8_0, byte_9, 0x9);
GUEST_OFFSET(Object_002f9aa8_0, byte_34, 0x34);
GUEST_OFFSET(Object_002f9aa8_0, byte_35, 0x35);
GUEST_OFFSET(Object_002f9aa8_0, byte_36, 0x36);
GUEST_OFFSET(Object_002f9aa8_0, byte_37, 0x37);
GUEST_OFFSET(Object_002f9aa8_0, byte_38, 0x38);
GUEST_OFFSET(Object_002f9aa8_0, byte_39, 0x39);
GUEST_OFFSET(Object_002f9aa8_0, byte_3a, 0x3a);
GUEST_OFFSET(Object_002f9aa8_0, byte_3b, 0x3b);
GUEST_OFFSET(Object_002f9aa8_0, byte_64, 0x64);
GUEST_OFFSET(Object_002f9aa8_0, byte_65, 0x65);
GUEST_OFFSET(Object_002f9aa8_0, word_68, 0x68);
GUEST_OFFSET(Object_002f9aa8_0, half_98, 0x98);
GUEST_OFFSET(Object_002f9aa8_0, byte_9a, 0x9a);
GUEST_OFFSET(Object_002f9aa8_0, byte_9b, 0x9b);
GUEST_OFFSET(Object_002f9aa8_0, byte_9c, 0x9c);
GUEST_OFFSET(Object_002f9aa8_0, byte_9d, 0x9d);
GUEST_OFFSET(Object_002f9aa8_0, byte_9e, 0x9e);
GUEST_OFFSET(Object_002f9aa8_0, byte_9f, 0x9f);
GUEST_OFFSET(Object_002f9aa8_0, half_a0, 0xa0);
GUEST_OFFSET(Object_002f9aa8_0, half_a2, 0xa2);
GUEST_OFFSET(Object_002f9aa8_0, half_a4, 0xa4);
GUEST_OFFSET(Object_002f9aa8_0, half_a6, 0xa6);
GUEST_OFFSET(Object_002f9aa8_0, half_a8, 0xa8);
GUEST_OFFSET(Object_002f9aa8_0, byte_aa, 0xaa);
GUEST_OFFSET(Object_002f9aa8_0, byte_ab, 0xab);
GUEST_OFFSET(Object_002f9aa8_0, byte_ac, 0xac);
GUEST_OFFSET(Object_002f9aa8_0, half_ae, 0xae);
GUEST_OFFSET(Object_002f9aa8_0, half_b0, 0xb0);
GUEST_OFFSET(Object_002f9aa8_0, byte_b2, 0xb2);

inline guest::global<u16, 0x0088f298> global_0088f298;
inline constexpr guest::Function<0x002e6a3c, u32(u32)> call_002e6a3c;

u32 f_002f9aa8(gptr<Object_002f9aa8_0> arg0) {
    arg0->byte_0 = 0;
    arg0->byte_1 = 0;
    arg0->byte_2 = 0;
    arg0->byte_3 = 0;
    arg0->byte_4 = 0;
    arg0->byte_5 = 0;
    arg0->byte_6 = 0;
    arg0->byte_7 = 0;
    arg0->byte_8 = 0;
    arg0->byte_9 = 0;
    arg0->byte_34 = 0;
    arg0->byte_35 = 0;
    arg0->byte_36 = 0;
    arg0->byte_37 = 0;
    arg0->byte_38 = 0;
    arg0->byte_39 = 0;
    arg0->byte_3a = 0;
    arg0->byte_3b = 0;
    u32 r0_1 = arg0.addr() + 0x3cu;  // (from the original)
    call_002e6a3c(r0_1);
    arg0->word_68 = 0;
    arg0->half_98 = 0;
    arg0->byte_9a = 0xff;  // (from the original)
    arg0->byte_9b = 0xff;  // (from the original)
    arg0->byte_9c = 0;
    arg0->byte_9d = 0;
    arg0->byte_9e = 0;
    arg0->byte_9f = 0;
    arg0->byte_aa = 0;
    arg0->byte_ab = 0;
    arg0->byte_ac = 0;
    arg0->half_ae = 0;
    arg0->half_b0 = 0;
    arg0->byte_b2 = 0;
    arg0->half_a0 = *global_0088f298;
    arg0->half_a2 = *global_0088f298;
    arg0->half_a4 = *global_0088f298;
    arg0->half_a6 = *global_0088f298;
    arg0->half_a8 = 0x7ffe;  // (from the original)
    arg0->byte_64 = 0;
    arg0->byte_65 = 0;
    return r0_1 - 0x3cu;  // (from the original)
}

}  // namespace d_002f9aa8
GUEST_EXPORT_FRAMED(0x002f9aa8, d_002f9aa8::f_002f9aa8, 0x4010);  // pushes {r4, lr} first, as the original

// f_002fa47c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002fa47c {

struct __attribute__((packed)) Object_002fa47c_0 {
    u8 unknown_0[0x79];  // (not used here)
    u8 byte_79;
    u8 unknown_7a[0x6];  // (not used here)
    u32 word_80;
    u8 unknown_84[0x44];  // (not used here)
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
    u8 unknown_100[0x4];  // (not used here)
    u32 word_104;
};
GUEST_OFFSET(Object_002fa47c_0, byte_79, 0x79);
GUEST_OFFSET(Object_002fa47c_0, word_80, 0x80);
GUEST_OFFSET(Object_002fa47c_0, word_c8, 0xc8);
GUEST_OFFSET(Object_002fa47c_0, word_cc, 0xcc);
GUEST_OFFSET(Object_002fa47c_0, word_d0, 0xd0);
GUEST_OFFSET(Object_002fa47c_0, word_d4, 0xd4);
GUEST_OFFSET(Object_002fa47c_0, word_d8, 0xd8);
GUEST_OFFSET(Object_002fa47c_0, word_dc, 0xdc);
GUEST_OFFSET(Object_002fa47c_0, word_e0, 0xe0);
GUEST_OFFSET(Object_002fa47c_0, word_e4, 0xe4);
GUEST_OFFSET(Object_002fa47c_0, word_e8, 0xe8);
GUEST_OFFSET(Object_002fa47c_0, word_ec, 0xec);
GUEST_OFFSET(Object_002fa47c_0, word_f0, 0xf0);
GUEST_OFFSET(Object_002fa47c_0, word_f4, 0xf4);
GUEST_OFFSET(Object_002fa47c_0, word_f8, 0xf8);
GUEST_OFFSET(Object_002fa47c_0, word_fc, 0xfc);
GUEST_OFFSET(Object_002fa47c_0, word_104, 0x104);

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline guest::global<u8, 0x008c9f1c> global_008c9f1c;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> copy_item_002fc8e8;

void f_002fa47c(gptr<Object_002fa47c_0> arg0) {
    *gptr<u8>(arg0->word_80) = *global_008c9f1c;
    u32 r0_1 = ~0u;
    arg0->byte_79 = 0;
    arg0->word_c8 = r0_1;
    arg0->word_cc = r0_1;
    arg0->word_d0 = r0_1;
    arg0->word_e4 = r0_1;
    arg0->word_e0 = r0_1;
    arg0->word_dc = r0_1;
    arg0->word_d8 = r0_1;
    arg0->word_d4 = r0_1;
    arg0->word_e8 = 0;
    arg0->word_f0 = r0_1;
    arg0->word_f4 = r0_1;
    arg0->word_f8 = r0_1;
    arg0->word_fc = r0_1;
    arg0->word_ec = r0_1;
    copy_item_002fc8e8(arg0.addr() + 0x100u, empty_item_address);  // (from the original)
    arg0->word_104 = 0;
}

}  // namespace d_002fa47c
GUEST_EXPORT_FRAMED(0x002fa47c, d_002fa47c::f_002fa47c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002fa5b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002fa5b0 {


u32 f_002fa5b0(u32 r0, u32 r1, u32 r2, u32 r3) {
    for (;;) {
        u32 cf_1 = r1 >= 1u;
        r1 -= 1u;
        if (!cf_1) {
            break;
        }
        u32 r4_1 = *gptr<u16>(r0);
        r0 += 2u;
        if (r4_1 == r3) {
            return r2 == 0;
        }
        guest::preempt();
    }
    return r2;
}

}  // namespace d_002fa5b0
GUEST_EXPORT_FRAMED(0x002fa5b1, d_002fa5b0::f_002fa5b0, 0x4010);  // pushes {r4, lr} first, as the original

// f_002fac78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002fac78 {

struct __attribute__((packed)) Object_002fac78_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_002fac78_0, byte_0, 0x0);

inline constexpr guest::Function<0x002f91d4, u32(u32, u32, u32, u32)> return_constant_0xaf74c8_;

u32 f_002fac78(gptr<Object_002fac78_0> arg0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r4 = 0;
    u32 r5 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 res_1 = 0;
    u32 nf_1 = 0;
    u32 zf_1 = 0;
    u32 vf_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r6 = r0;
    u32 r2_1 = 0u - r1;
    u32 r0_1 = r1 & ~r2_1;
    if (r0_1 == 0) {
        goto L_2faca4;
    }
    r4 = r6 + 1u;
    r5 = 0u;
    arg0->byte_0 = 0x2a;  // (from the original)
    r0_2 = return_constant_0xaf74c8_(0x2au, r1, r2_1, r3);  // (from the original)
    r3 = r0_2;
L_2fac92:;
    r0 = 0u;
    r2 = gptr<u32>(r3)[r5];
L_2fac98:;
    r1_1 = r2 >> 0x1c;  // (from the original)
    r2 <<= 4;
    if (r1_1 <= 9u) {
        goto L_2facfc;
    }
    r1_2 = r1_1 + 0x57u;  // (from the original)
    goto L_2facfe;
L_2faca4:;
    res_1 = r1 - 4u;
    nf_1 = res_1 >> 0x1f;  // (from the original)
    zf_1 = res_1 == 0;
    vf_1 = ((r1 ^ 4u) & (r1 ^ res_1)) >> 0x1f;  // (from the original)
    if (!zf_1) {
        if (zf_1 || nf_1 != vf_1) {
            if (r1 == 1u) {
                goto L_2facc0;
            }
            if (r1 != 2u) {
                guest::cpu()->r[1] = r1;
                return 0u;
            }
            goto L_2facc8;
        }
        if (r1 == 8u) {
            goto L_2facd8;
        }
        if (r1 == 0x10u) {  // (from the original)
            goto L_2face0;
        }
        guest::cpu()->r[1] = r1;
        return 0u;
L_2facc0:;
        r0_3 = return_constant_0xaf74c8_(r0_1, r1, r2_1, r3);
        r0_4 = *gptr<u32>(r0_3);
        goto L_2face6;
L_2facc8:;
        u32 r0_5 = return_constant_0xaf74c8_(r0_1, r1, r2_1, r3);
        r0_4 = *gptr<u32>(r0_5 + 4u);
        goto L_2face6;
    }
    r0_6 = return_constant_0xaf74c8_(r0_1, r1, r2_1, r3);
    r0_4 = *gptr<u32>(r0_6 + 8u);
    goto L_2face6;
L_2facd8:;
    r0_7 = return_constant_0xaf74c8_(r0_1, r1, r2_1, r3);
    r0_4 = *gptr<u32>(r0_7 + 0xcu);  // (from the original)
    goto L_2face6;
L_2face0:;
    r0_8 = return_constant_0xaf74c8_(r0_1, r1, r2_1, r3);
    r0_4 = *gptr<u32>(r0_8 + 0x10u);  // (from the original)
L_2face6:;
    if (r0_4 != 0) {
        u32 r0_9 = r0_4 >> 2 << 2;
        u32 r1_4 = *gptr<u32>(r0_9 - 4u);
        guest::cpu()->r[1] = r1_4;
        return r1_4 + r0_9;
    }
    return 0x2fae10u;  // (from the original)
L_2facfc:;
    r1_2 = r1_1 + 0x30u;  // (from the original)
L_2facfe:;
    *gptr<u8>(r4) = u8(r1_2);
    r4 += 1u;
    r0 += 1u;
    if (s32(r0) >= 8) {
        r5 += 1u;
        if (s32(r5) < 5) {
            guest::preempt();
            goto L_2fac92;
        }
        *gptr<u8>(r4) = 0;
        guest::cpu()->r[1] = r1_2;
        return r6;
    }
    guest::preempt();
    goto L_2fac98;
}

}  // namespace d_002fac78
GUEST_EXPORT_FRAMED(0x002fac79, d_002fac78::f_002fac78, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002fae74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002fae74 {

struct __attribute__((packed)) Object_002fae74_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_002fae74_0, word_0, 0x0);

inline constexpr u32 global_00af7f3c_address = 0x00af7f3cu;

void f_002fae74(gptr<Object_002fae74_0> arg0) {
    arg0->word_0 = 0xaf7f3c;  // (from the original)
    guest::cpu()->r[1] = global_00af7f3c_address;
}

}  // namespace d_002fae74
GUEST_EXPORT_FRAMED(0x002fae75, d_002fae74::f_002fae74, 0x4010);  // pushes {r4, lr} first, as the original

// f_002fb4d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002fb4d8 {

inline constexpr guest::Function<0x001b21e0, u32(u32, u32, u32, u32)> call_001b21e0;
inline constexpr guest::Function<0x001df350, u32(u32, u32)> call_001df350;
inline constexpr guest::Function<0x002bf9cc, u32(u32, u32, u32, u32)> Pockets__set_slot;
inline constexpr guest::Function<0x002d49d8, u32(u32, u32, u32, u32)> store_sanitized_item;
inline constexpr guest::Function<0x002f777c, u32(u32, u32, u32, u32)> do_nothing_002f777c;
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> get_data_base;
inline constexpr guest::Function<0x002faedd, u32(u32, u32, u32, u32)> call_002faedc;
inline constexpr guest::Function<0x002fb7e8, u32(u32, u32, u32, u32)> player_at;
inline constexpr guest::Function<0x002fb918, u32(u32)> data_block_71900;
inline constexpr guest::Function<0x002fbd54, u32(u32)> PersonalId__is_set;
inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> GridMap__place_item_at_world;
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> Item__category;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> construct_item;
inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> read_table_9b4a24;
inline constexpr guest::Function<0x002fea95, u32(u32, u32)> call_002fea94;
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> GridMap__process_world_position;
inline constexpr guest::Function<0x003fe3d4, u32(u32, u32, u32, u32)> call_003fe3d4;
inline constexpr guest::Function<0x003fe3d8, u32(u32, u32, u32, u32)> call_003fe3d8;
inline constexpr guest::Function<0x003fe3dc, u32(u32, u32, u32, u32)> call_003fe3dc;
inline constexpr guest::Function<0x003fe3e0, u32(u32, u32, u32, u32)> call_003fe3e0;
inline constexpr guest::Function<0x003fe3e4, u32(u32, u32, u32, u32)> call_003fe3e4;
inline constexpr guest::Function<0x006ccd14, u32(u32, u32, u32, u32)> call_006ccd14;
inline constexpr guest::Function<0x006ccf70, u32(u32, u32, u32, u32)> call_006ccf70;

struct __attribute__((packed)) Frame_002fb4d8 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u8 unknown_1c[0x4];  // (not read or written by name)
    u32 word_20;
    u8 unknown_24[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_002fb4d8, word_0, 0x0);
GUEST_OFFSET(Frame_002fb4d8, word_4, 0x4);
GUEST_OFFSET(Frame_002fb4d8, word_c, 0xc);
GUEST_OFFSET(Frame_002fb4d8, word_10, 0x10);
GUEST_OFFSET(Frame_002fb4d8, word_14, 0x14);
GUEST_OFFSET(Frame_002fb4d8, word_18, 0x18);
GUEST_OFFSET(Frame_002fb4d8, word_20, 0x20);
GUEST_SIZE(Frame_002fb4d8, 0x2c);

u32 f_002fb4d8(u32 r0_unused, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_002fb4d8> frame;  // the original's stack frame
    u32 r1 = 0;
    u32 r4 = 0;
    u32 r5 = 0;
    u32 r6 = 0;
    u32 r7 = 0;
    u32 r0_14 = 0;
    u32 r0_46 = 0;
    call_002faedc(0x106141u, 0u, r2, r3);  // (from the original)
    call_002fea94(0x106141u, 0u);  // (from the original)
    u32 r0_1 = frame.at(0x1c).addr();  // (from the original)
    construct_item(r0_1, 0x228du);  // (from the original)
    u32 r0_2 = get_data_base(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    frame->word_18 = r0_2 + 0x20u;  // (from the original)
    u32 r0 = 0u;
    frame->word_20 = r0;
    do {
        u32 r0_4 = player_at(frame->word_18, uxtb(r0), r2, r3);
        r5 = r0_4;
        u32 r0_6 = PersonalId__is_set(r5 + 0x55a6u);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_6 != 0) {
            r4 = 0u;
            r7 = r5 + 0x6bd0u;  // (from the original)
            r6 = 1u;
            do {
                u32 r0_7 = call_003fe3d4(r7, r4, 0u, r3);
                u32 r0_8 = Item__category(r0_7, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_8 == 0x39u) {  // (from the original)
                    frame->word_0 = r6;
                    Pockets__set_slot(r7, r4, frame.at(0x1c).addr(), 0u);  // (from the original)
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                }
                r4 += 1u;
                guest::preempt();
            } while (r4 < 0x10u);  // (from the original)
            r6 = r5 + 0x6f10u;  // (from the original)
            r4 = 0u;
            do {
                u32 r0_9 = call_003fe3d8(r6, r4, r2, r3);
                u32 r0_10 = Item__category(r0_9, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_10 == 0x39u) {  // (from the original)
                    store_sanitized_item(r6, r4, frame.at(0x1c).addr(), r3);  // (from the original)
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                }
                r4 += 1u;
                guest::preempt();
            } while (r4 < 0x28u);  // (from the original)
            u32 r0_11 = r5 + 0x92f0u;  // (from the original)
            r7 = 0u;
            r5 = frame.at(0x1c).addr();  // (from the original)
            frame->word_10 = r0_11;
            do {
                r6 = 0u;
                do {
                    r4 = 0u;
                    do {
                        u32 r0_13 = call_003fe3dc(frame->word_10, r7, r6, r4);
                        r0_14 = Item__category(r0_13, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                        if (r0_14 == 0x39u) {  // (from the original)
                            u32 r1_8 = frame->word_10;
                            frame->word_4 = r5;
                            frame->word_0 = r4;
                            call_006ccd14(frame.at(0x24).addr(), r1_8, r7, r6);  // (from the original)
                            r0_14 = do_nothing_002f777c(frame.at(0x24).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                        }
                        r4 += 1u;
                        guest::preempt();
                    } while (r4 < 0xau);  // (from the original)
                    r6 += 1u;
                    guest::preempt();
                } while (r6 < 6u);
                r7 += 1u;
                guest::preempt();
            } while (r7 < 3u);
            u32 r0_17 = data_block_71900(r0_14);
            u32 r0_18 = call_001df350(r0_17, uxtb(frame->word_20));
            r7 = 0u;
            frame->word_14 = r0_18;
            do {
                r6 = 0u;
                do {
                    r4 = 0u;
                    do {
                        u32 r0_20 = call_003fe3e0(frame->word_14, r7, r6, r4);
                        u32 r0_21 = Item__category(r0_20, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                        r1 = guest::cpu()->r[1];
                        r2 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
                        if (r0_21 == 0x39u) {  // (from the original)
                            frame->word_0 = r4;
                            u32 r1_12 = frame->word_14;
                            frame->word_4 = r5;
                            call_006ccf70(frame.at(0x24).addr(), r1_12, r7, r6);  // (from the original)
                            do_nothing_002f777c(frame.at(0x24).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                            r1 = guest::cpu()->r[1];
                            r2 = guest::cpu()->r[2];
                            r3 = guest::cpu()->r[3];
                        }
                        r4 += 1u;
                        guest::preempt();
                    } while (r4 < 0xau);  // (from the original)
                    r6 += 1u;
                    guest::preempt();
                } while (r6 < 9u);
                r7 += 1u;
                guest::preempt();
            } while (r7 < 4u);
        }
        r0 = frame->word_20 + 1u;
        frame->word_20 = r0;
        guest::preempt();
    } while (r0 < 4u);
    r0 = 2u;
    r5 = 0u;
    r6 = 1u;
    frame->word_10 = r0;
    do {
        u32 r0_25 = read_table_9b4a24(uxtb(r0), r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        frame->word_c = r0_25;
        if (r0_25 != 0) {
            r7 = 0u;
            do {
                r4 = 0u;
                do {
                    u32 r0_27 = GridMap__process_world_position(frame->word_c, r4, r7, 0u);
                    if (r0_27 != 0) {
                        u32 r0_28 = Item__category(r0_27, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                        if (r0_28 == 0x39u) {  // (from the original)
                            u32 r0_29 = frame->word_c;
                            frame->word_0 = r5;
                            GridMap__place_item_at_world(r0_29, frame.at(0x1c).addr(), r4, r7);  // (from the original)
                        }
                    }
                    u32 r0_31 = GridMap__process_world_position(frame->word_c, r4, r7, 1u);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    if (r0_31 != 0) {
                        u32 r0_32 = Item__category(r0_31, r1, r2, r3);
                        r1 = guest::cpu()->r[1];
                        r2 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
                        if (r0_32 == 0x39u) {  // (from the original)
                            u32 r0_33 = frame->word_c;
                            frame->word_0 = r6;
                            GridMap__place_item_at_world(r0_33, frame.at(0x1c).addr(), r4, r7);  // (from the original)
                            r1 = guest::cpu()->r[1];
                            r2 = guest::cpu()->r[2];
                            r3 = guest::cpu()->r[3];
                        }
                    }
                    r4 += 1u;
                    guest::preempt();
                } while (s32(r4) < 0x10);  // (from the original)
                r7 += 1u;
                guest::preempt();
            } while (s32(r7) < 0x10);  // (from the original)
        }
        r0 = frame->word_10 + 1u;
        frame->word_10 = r0;
        guest::preempt();
    } while (s32(r0) < 0x1a);  // (from the original)
    r0 = 0x1au;  // (from the original)
    frame->word_10 = r0;
    do {
        u32 r0_35 = read_table_9b4a24(uxtb(r0), r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        frame->word_c = r0_35;
        if (r0_35 != 0) {
            r7 = 0u;
            do {
                r4 = 0u;
                do {
                    u32 r0_37 = GridMap__process_world_position(frame->word_c, r4, r7, 0u);
                    if (r0_37 != 0) {
                        u32 r0_38 = Item__category(r0_37, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                        if (r0_38 == 0x39u) {  // (from the original)
                            u32 r0_39 = frame->word_c;
                            frame->word_0 = r5;
                            GridMap__place_item_at_world(r0_39, frame.at(0x1c).addr(), r4, r7);  // (from the original)
                        }
                    }
                    u32 r0_41 = GridMap__process_world_position(frame->word_c, r4, r7, 1u);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    if (r0_41 != 0) {
                        u32 r0_42 = Item__category(r0_41, r1, r2, r3);
                        r1 = guest::cpu()->r[1];
                        r2 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
                        if (r0_42 == 0x39u) {  // (from the original)
                            u32 r0_43 = frame->word_c;
                            frame->word_0 = r6;
                            GridMap__place_item_at_world(r0_43, frame.at(0x1c).addr(), r4, r7);  // (from the original)
                            r1 = guest::cpu()->r[1];
                            r2 = guest::cpu()->r[2];
                            r3 = guest::cpu()->r[3];
                        }
                    }
                    r4 += 1u;
                    guest::preempt();
                } while (s32(r4) < 0x10);  // (from the original)
                r7 += 1u;
                guest::preempt();
            } while (s32(r7) < 0x10);  // (from the original)
        }
        r0 = frame->word_10 + 1u;
        frame->word_10 = r0;
        guest::preempt();
    } while (s32(r0) < 0x1e);  // (from the original)
    u32 r0_44 = get_data_base(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0_44 + 0x62162u;  // (from the original)
    r4 = 0u;
    do {
        u32 r0_45 = call_003fe3e4(r5, r4, r2, r3);
        r0_46 = Item__category(r0_45, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_46 == 0x39u) {  // (from the original)
            r0_46 = r5;
            call_001b21e0(r0_46, r4, frame.at(0x1c).addr(), r3);  // (from the original)
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0x10u);  // (from the original)
    do_nothing_002f777c(r0_46, guest::cpu()->r[1], r2, r3);
    return frame.at(0x1c).addr();  // (from the original)
}

}  // namespace d_002fb4d8
GUEST_EXPORT_FRAMED(0x002fb4d9, d_002fb4d8::f_002fb4d8, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_002fb7b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002fb7b0 {

struct __attribute__((packed)) Object_002fb7b0_0 {
    u8 unknown_0[0x79];  // (not used here)
    u8 byte_79;
};
GUEST_OFFSET(Object_002fb7b0_0, byte_79, 0x79);

inline constexpr guest::Function<0x00584134, u32(u32)> return_constant_0x98a030_;
inline constexpr guest::Function<0x0058c5f0, u32(u32, u32)> FlagManager__release;

void f_002fb7b0(gptr<Object_002fb7b0_0> arg0, u32 r1) {
    u32 r0_1 = u32(arg0->byte_79) >> 2u & 1u;
    if (r0_1 == 0) {
        return;
    }
    u32 r0_2 = return_constant_0x98a030_(r0_1);
    FlagManager__release(r0_2, 0x24u);  // (from the original)
    u32 r1_1 = u32(arg0->byte_79) & ~4u & ~2u;
    arg0->byte_79 = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_002fb7b0
GUEST_EXPORT_FRAMED(0x002fb7b0, d_002fb7b0::f_002fb7b0, 0x4010);  // pushes {r4, lr} first, as the original

// f_002fbf60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002fbf60 {

inline constexpr guest::Function<0x001745f8, u32(u32, u32, u32, u32)> call_001745f8;

struct __attribute__((packed)) Frame_002fbf60 {
    u32 word_0;
};
GUEST_OFFSET(Frame_002fbf60, word_0, 0x0);
GUEST_SIZE(Frame_002fbf60, 0x4);

void f_002fbf60(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_002fbf60> frame;  // the original's stack frame
    frame->word_0 = r3;
    frame->word_0 = 1;
    call_001745f8(guest::cpu()->r[0], guest::cpu()->r[1], 0x2fbf7cu, 1u);  // (from the original)
}

}  // namespace d_002fbf60
GUEST_EXPORT_FRAMED(0x002fbf60, d_002fbf60::f_002fbf60, 0x4000);  // pushes {lr} first, as the original

// f_002fc194: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002fc194 {

struct __attribute__((packed)) Object_002fc194_0 {
    u8 unknown_0[0x1];  // (not used here)
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
    u8 byte_4;
    u8 byte_5;
    u8 byte_6;
    u8 byte_7;
    u8 byte_8;
    u8 unknown_9[0x1];  // (not used here)
    u16 half_a;
    u8 byte_c;
    u8 byte_d;
    u8 byte_e;
    u8 byte_f;
    u8 byte_10;
    u8 byte_11;
    u8 byte_12;
    u8 byte_13;
    u8 byte_14;
    u8 byte_15;
    u8 unknown_16[0x2e];  // (not used here)
    u8 byte_44;
    u8 unknown_45[0x3];  // (not used here)
    u32 word_48;
    u32 word_4c;
};
GUEST_OFFSET(Object_002fc194_0, byte_1, 0x1);
GUEST_OFFSET(Object_002fc194_0, byte_2, 0x2);
GUEST_OFFSET(Object_002fc194_0, byte_3, 0x3);
GUEST_OFFSET(Object_002fc194_0, byte_4, 0x4);
GUEST_OFFSET(Object_002fc194_0, byte_5, 0x5);
GUEST_OFFSET(Object_002fc194_0, byte_6, 0x6);
GUEST_OFFSET(Object_002fc194_0, byte_7, 0x7);
GUEST_OFFSET(Object_002fc194_0, byte_8, 0x8);
GUEST_OFFSET(Object_002fc194_0, half_a, 0xa);
GUEST_OFFSET(Object_002fc194_0, byte_c, 0xc);
GUEST_OFFSET(Object_002fc194_0, byte_d, 0xd);
GUEST_OFFSET(Object_002fc194_0, byte_e, 0xe);
GUEST_OFFSET(Object_002fc194_0, byte_f, 0xf);
GUEST_OFFSET(Object_002fc194_0, byte_10, 0x10);
GUEST_OFFSET(Object_002fc194_0, byte_11, 0x11);
GUEST_OFFSET(Object_002fc194_0, byte_12, 0x12);
GUEST_OFFSET(Object_002fc194_0, byte_13, 0x13);
GUEST_OFFSET(Object_002fc194_0, byte_14, 0x14);
GUEST_OFFSET(Object_002fc194_0, byte_15, 0x15);
GUEST_OFFSET(Object_002fc194_0, byte_44, 0x44);
GUEST_OFFSET(Object_002fc194_0, word_48, 0x48);
GUEST_OFFSET(Object_002fc194_0, word_4c, 0x4c);

inline constexpr guest::Function<0x003052f0, u32(u32)> clear_identity_with_flags;

u32 f_002fc194(gptr<Object_002fc194_0> arg0) {
    arg0->byte_1 = 0;
    arg0->byte_2 = 0;
    arg0->byte_3 = 0;
    arg0->byte_4 = 0;
    arg0->byte_5 = 0;
    arg0->byte_6 = 0;
    arg0->byte_7 = 0;
    arg0->byte_8 = 0;
    arg0->half_a = 0;
    arg0->byte_c = 0;
    arg0->byte_d = 0;
    arg0->byte_e = 0;
    arg0->byte_f = 0;
    arg0->byte_10 = 0;
    arg0->byte_11 = 0xff;  // (from the original)
    arg0->byte_12 = 0;
    arg0->byte_13 = 0;
    arg0->byte_14 = 0;
    arg0->byte_15 = 0;
    clear_identity_with_flags(arg0.addr() + 0x16u);  // (from the original)
    u32 r0_2 = ~0u;
    arg0->byte_44 = 0xff;  // (from the original)
    arg0->word_48 = r0_2;
    arg0->word_4c = r0_2;
    return r0_2;
}

}  // namespace d_002fc194
GUEST_EXPORT_FRAMED(0x002fc194, d_002fc194::f_002fc194, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002fc2a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002fc2a4 {

inline constexpr guest::Function<0x001b1b40, u32(u32, u32)> copy_3_bytes;
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> get_data_base;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> construct_item;
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> random_below;
inline constexpr guest::Function<0x005361a8, u32(u32)> Item__data;
inline constexpr guest::Function<0x006f2908, u32(u32, u32, u32, u32)> call_006f2908;
inline constexpr guest::Function<0x0070b49c, u32(u32, u32)> call_0070b49c;
inline constexpr guest::Function<0x0070b510, u32(u32, u32)> call_0070b510;
inline constexpr guest::Function<0x0070b574, u32(u32, u32)> call_0070b574;
inline constexpr guest::Function<0x0070b5e8, u32(u32, u32)> call_0070b5e8;

struct __attribute__((packed)) Frame_002fc2a4 {
    u32 word_0;
    u8 unknown_4[0xc];  // (not read or written by name)
};
GUEST_OFFSET(Frame_002fc2a4, word_0, 0x0);
GUEST_SIZE(Frame_002fc2a4, 0x10);

u32 f_002fc2a4(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_002fc2a4> frame;  // the original's stack frame
    u32 r0_1 = 0;
    u32 zf_12 = 0;
    u32 zf_13 = 0;
    u32 r5 = r0;
    u32 r6 = r1;
    if (r1 == 4u) {
        frame->word_0 = 0;
        call_006f2908(r0, 3u, 5u, 0u);
        frame->word_0 = 0;
        call_006f2908(r5, 3u, 6u, 0u);
        frame->word_0 = 0;
        call_006f2908(r5, 3u, 7u, 0u);
        frame->word_0 = 0;
        call_006f2908(r5, 4u, 5u, 0u);
        frame->word_0 = 0;
        call_006f2908(r5, 4u, 6u, 0u);
        frame->word_0 = 0;
        call_006f2908(r5, 4u, 7u, 0u);
        frame->word_0 = 0;
        call_006f2908(r5, 5u, 5u, 0u);
        frame->word_0 = 0;
        call_006f2908(r5, 5u, 6u, 0u);
        frame->word_0 = 0;
        r0_1 = call_006f2908(r5, 5u, 7u, 0u);
        return r0_1;
    }
    if (r6 == 3u) {
        r0_1 = random_below(3u, r1, r2, r3);
        if (r0_1 != 0) {
            if (r0_1 == 1u) {
                frame->word_0 = 0;
                call_006f2908(r5, 3u, 6u, 0u);
                frame->word_0 = 0;
                call_006f2908(r5, 4u, 6u, 0u);
                frame->word_0 = 0;
                u32 r0_2 = call_006f2908(r5, 5u, 6u, 0u);
                return r0_2;
            }
            if (r0_1 != 2u) {
                return r0_1;
            }
            frame->word_0 = 0;
            call_006f2908(r5, 3u, 7u, 0u);
            frame->word_0 = 0;
            call_006f2908(r5, 4u, 7u, 0u);
            frame->word_0 = 0;
            u32 r0_3 = call_006f2908(r5, 5u, 7u, 0u);
            return r0_3;
        }
        frame->word_0 = 0;
        call_006f2908(r5, 3u, 5u, 0u);
        frame->word_0 = 0;
        call_006f2908(r5, 4u, 5u, 0u);
        frame->word_0 = 0;
        u32 r0_4 = call_006f2908(r5, 5u, 5u, 0u);
        return r0_4;
    }
    if (r6 == 1u || r6 == 2u) {
        frame->word_0 = 0;
        call_006f2908(r0, 3u, r1, 0u);
        frame->word_0 = 0;
        call_006f2908(r5, 4u, r6, 0u);
        frame->word_0 = 0;
        u32 r0_5 = call_006f2908(r5, 5u, r6, 0u);
        return r0_5;
    }
    u32 r0_6 = get_data_base(r0, r1, r2, r3);
    copy_3_bytes(frame.at(4).addr(), r0_6 + 0x621ccu);  // (from the original)
    if (r6 == 5u) {
        u32 r0_9 = call_0070b510(frame.at(4).addr(), 3u);
        frame->word_0 = 0;
        call_006f2908(r5, 3u, r0_9, 0u);
        u32 r0_11 = call_0070b510(frame.at(4).addr(), 4u);
        frame->word_0 = 0;
        call_006f2908(r5, 4u, r0_11, 0u);
        u32 r0_13 = call_0070b510(frame.at(4).addr(), 5u);
        frame->word_0 = 0;
        call_006f2908(r5, 5u, r0_13, 0u);
        return frame.at(4).addr();
    }
    if (r6 == 6u) {
        u32 r0_16 = call_0070b5e8(frame.at(4).addr(), 3u);
        frame->word_0 = 0;
        call_006f2908(r5, 3u, r0_16, 0u);
        u32 r0_18 = call_0070b5e8(frame.at(4).addr(), 4u);
        frame->word_0 = 0;
        call_006f2908(r5, 4u, r0_18, 0u);
        u32 r0_20 = call_0070b5e8(frame.at(4).addr(), 5u);
        frame->word_0 = 0;
        call_006f2908(r5, 5u, r0_20, 0u);
        return frame.at(4).addr();
    }
    if (r6 == 7u) {
        u32 r0_23 = call_0070b49c(frame.at(4).addr(), 3u);
        frame->word_0 = 0;
        call_006f2908(r5, 3u, r0_23, 0u);
        u32 r0_25 = call_0070b49c(frame.at(4).addr(), 4u);
        frame->word_0 = 0;
        call_006f2908(r5, 4u, r0_25, 0u);
        u32 r0_27 = call_0070b49c(frame.at(4).addr(), 5u);
        frame->word_0 = 0;
        call_006f2908(r5, 5u, r0_27, 0u);
        return frame.at(4).addr();
    }
    if (r6 == 8u) {
        u32 r0_30 = call_0070b574(frame.at(4).addr(), 3u);
        frame->word_0 = 0;
        call_006f2908(r5, 3u, r0_30, 0u);
        u32 r0_32 = call_0070b574(frame.at(4).addr(), 4u);
        frame->word_0 = 0;
        call_006f2908(r5, 4u, r0_32, 0u);
        u32 r0_34 = call_0070b574(frame.at(4).addr(), 5u);
        frame->word_0 = 0;
        call_006f2908(r5, 5u, r0_34, 0u);
        return frame.at(4).addr();
    }
    construct_item(frame.at(8).addr(), 0x2000u);  // (from the original)
    u32 r0_38 = Item__data(frame.at(8).addr());
    u32 r4 = r0_38;
    u32 r0_39 = get_data_base(r0_38, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r3 = 0x172bu;  // (from the original)
    u32 r12 = 1u;
    u32 r0_40 = *gptr<u8>(r0_39 + 0x6214eu);  // (from the original)
    r2 = r0_40 >> 4 == 0;
    r0 = 0u;
L_2fc344:;
    u32 r1_14 = *gptr<u8>(r4 + 0xdu);  // (from the original)
    if (r1_14 >= 0xb9u) {  // (from the original)
        r1_14 = 0u;
    }
    if (r1_14 != r6) {
        goto L_2fc7e0;
    }
    zf_12 = r2 == 0;
    if (!zf_12) {
        goto L_2fc7c4;
    }
    r1_14 = *gptr<u8>(r4 + 0x1bu);  // (from the original)
    zf_13 = (r1_14 & 1u) == 0;
    if (!zf_13) {
        goto L_2fc7e0;
    }
    goto L_2fc7c4;
L_2fc7c4:;
    if (r0 <= r3) {
        r1_14 = r0 >> 5;
        *gptr<u32>(r5 + (r1_14 << 2)) = gptr<u32>(r5)[r1_14] | (r12 << (r0 & 0x1fu));  // (from the original)
    }
L_2fc7e0:;
    r0 += 1u;
    r4 += 0x1eu;  // (from the original)
    if (r0 >= r3) {
        guest::cpu()->r[1] = r1_14;
        return frame.at(4).addr();
    }
    guest::preempt();
    goto L_2fc344;
}

}  // namespace d_002fc2a4
GUEST_EXPORT_FRAMED(0x002fc2a4, d_002fc2a4::f_002fc2a4, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_002fc948: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002fc948 {

inline constexpr u32 global_00952ba8_address = 0x00952ba8u;
inline constexpr u32 global_00a14860_address = 0x00a14860u;
inline guest::global<u8, 0x00952b9d> global_00952b9d;
inline guest::global<u32, 0x00952ba8> global_00952ba8;
inline constexpr guest::Function<0x002fe7cc, u32(u32, u32)> read_table_9b4a24;
inline constexpr guest::Function<0x002fe7dd, u32(u32)> claim_flag;
inline constexpr guest::Function<0x002fe7f0, u32(u32, u32)> do_nothing_002fe7f0;
inline constexpr guest::Function<0x005819ec, u32(u32)> construct_quad_pair;

u32 f_002fc948(u32 r0_unused, u32 r1) {
    u32 r0_1 = *global_00952b9d;
    u32 r0_2 = read_table_9b4a24(r0_1, r1);
    if (r0_2 != 0) {
        return r0_2;
    }
    if ((*global_00952ba8 & 1u) != 0u) {
        return global_00a14860_address;
    }
    u32 r0_3 = claim_flag(global_00952ba8_address);
    if (r0_3 == 0) {
        return global_00a14860_address;
    }
    construct_quad_pair(global_00a14860_address);
    do_nothing_002fe7f0(global_00a14860_address, 0x581a18u);  // (from the original)
    return global_00a14860_address;
}

}  // namespace d_002fc948
GUEST_EXPORT_FRAMED(0x002fc949, d_002fc948::f_002fc948, 0x4010);  // pushes {r4, lr} first, as the original

// f_002fcc54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002fcc54 {

struct __attribute__((packed)) Object_002fcc54_0 {
    u32 word_0;
    u8 unknown_4[0x24];  // (not used here)
    u32 word_28;
    u8 byte_2c;
};
GUEST_OFFSET(Object_002fcc54_0, word_0, 0x0);
GUEST_OFFSET(Object_002fcc54_0, word_28, 0x28);
GUEST_OFFSET(Object_002fcc54_0, byte_2c, 0x2c);

inline constexpr u32 global_00953a94_address = 0x00953a94u;
inline constexpr guest::Function<0x004a669c, u32(u32, u32, u32, u32)> call_004a669c;
inline constexpr guest::Function<0x004ee904, u32(u32, u32, u32, u32)> ToggleObject__set_mode;
inline constexpr guest::Function<0x004f26a4, u32(u32, u32)> g3d__BaseAnim__virtual_4;

u32 f_002fcc54(gptr<Object_002fcc54_0> arg0, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    if (r1 >= 0x16u) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return arg0.addr();
    }
    u32 r0_1 = arg0->word_28;
    u32 r5_1 = r1;
    if (r0_1 != r5_1) {
        u32 r1_1 = gptr<u32>(global_00953a94_address)[r5_1];
        u32 r0_2 = *gptr<u32>(*gptr<u32>(arg0->word_0 - 0xcu) + (arg0.addr() + 0xcu)) + 8u;  // (from the original)
        r0_1 = call_004a669c(r0_2, r1_1, arg0.addr() + 0xcu, guest::cpu()->r[3]);  // (from the original)
        r1 = guest::cpu()->r[1];
        if (r0_1 != 0) {
            arg0->word_28 = r5_1;
            g3d__BaseAnim__virtual_4(arg0.addr() + 0x10u, r0_1);  // (from the original)
            u32 r1_2 = arg0->byte_2c;
            frame.release();
            return ToggleObject__set_mode(arg0.addr() + 0x10u, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        }
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_002fcc54
GUEST_EXPORT(0x002fcc54, d_002fcc54::f_002fcc54);

// f_002fd11c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002fd11c {

struct __attribute__((packed)) Object_002fd11c_0 {
    u8 unknown_0[0x5854];  // (not used here)
    u32 word_5854;
    u8 unknown_5858[0x24];  // (not used here)
    u32 word_587c;
    u8 byte_5880;
    u8 unknown_5881[0x29];  // (not used here)
    u8 byte_58aa;
};
GUEST_OFFSET(Object_002fd11c_0, word_5854, 0x5854);
GUEST_OFFSET(Object_002fd11c_0, word_587c, 0x587c);
GUEST_OFFSET(Object_002fd11c_0, byte_5880, 0x5880);
GUEST_OFFSET(Object_002fd11c_0, byte_58aa, 0x58aa);

struct __attribute__((packed)) Local_002fd11c_r1_2 {
    u8 unknown_0[0x1];  // (not used here)
    u8 byte_1;
    u8 unknown_2[0x13];  // (not used here)
    u8 byte_15;
};
GUEST_OFFSET(Local_002fd11c_r1_2, byte_1, 0x1);
GUEST_OFFSET(Local_002fd11c_r1_2, byte_15, 0x15);

inline guest::global<u8, 0x00952b9d> global_00952b9d;
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> clear_aligned;
inline constexpr guest::Function<0x002ffc18, u32(u32, u32, u32)> block_kind_is_in_list_b_or_category_24_28;

struct __attribute__((packed)) Frame_002fd11c {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_002fd11c, word_0, 0x0);
GUEST_OFFSET(Frame_002fd11c, word_4, 0x4);
GUEST_SIZE(Frame_002fd11c, 0xc);

void f_002fd11c(gptr<Object_002fd11c_0> arg0, u32 r1_unused, u32 r2) {
    guest::StackFrameOf<Frame_002fd11c> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r6_1 = 5u << 7;
    u32 r7_1 = r0 + 0x44u;  // (from the original)
    u32 r4 = r0;
    clear_aligned(r7_1, r6_1, r2, guest::cpu()->r[3]);
    u32 r5 = 0u;
    *gptr<u32>(r7_1 + r6_1) = r5;
    u32 r7_2 = r4 + (0x59u << 3);  // (from the original)
    clear_aligned(r7_2, r6_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r7_2 + r6_1) = r5;
    u32 r7_3 = r4 + 0x54cu;  // (from the original)
    clear_aligned(r7_3, r6_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r7_3 + r6_1) = r5;
    u32 r7_4 = r4 + (0x7du << 4);  // (from the original)
    clear_aligned(r7_4, r6_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r7_4 + r6_1) = r5;
    u32 r7_5 = r4 + 0xa54u;  // (from the original)
    clear_aligned(r7_5, r6_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r7_5 + r6_1) = r5;
    u32 r7_6 = r4 + 0xcd8u;  // (from the original)
    clear_aligned(r7_6, r6_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r7_6 + r6_1) = r5;
    u32 r7_7 = r4 + 0xf5cu;  // (from the original)
    clear_aligned(r7_7, r6_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r7_7 + r6_1) = r5;
    u32 r7_8 = r4 + (0x8fu << 5);  // (from the original)
    clear_aligned(r7_8, r6_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r7_8 + r6_1) = r5;
    u32 r7_9 = r4 + 0x1464u;  // (from the original)
    clear_aligned(r7_9, r6_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r7_9 + r6_1) = r5;
    u32 r7_10 = r4 + 0x16e8u;  // (from the original)
    clear_aligned(r7_10, r6_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r7_10 + r6_1) = r5;
    u32 r7_11 = r4 + 0x196cu;  // (from the original)
    clear_aligned(r7_11, r6_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r7_11 + r6_1) = r5;
    u32 r7_12 = r4 + 0x1bf0u;  // (from the original)
    clear_aligned(r7_12, r6_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r7_12 + r6_1) = r5;
    u32 r7_13 = r4 + 0x1e74u;  // (from the original)
    clear_aligned(r7_13, r6_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r7_13 + r6_1) = r5;
    u32 r7_14 = r4 + 0x20f8u;  // (from the original)
    clear_aligned(r7_14, r6_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r7_14 + r6_1) = r5;
    u32 r7_15 = r4 + 0x237cu;  // (from the original)
    clear_aligned(r7_15, r6_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r7_15 + r6_1) = r5;
    u32 r7_16 = r4 + (0x13u << 9);  // (from the original)
    clear_aligned(r7_16, r6_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r7_16 + r6_1) = r5;
    u32 r7_17 = r4 + 0x2884u;  // (from the original)
    clear_aligned(r7_17, r6_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r7_17 + r6_1) = r5;
    u32 r7_18 = r4 + 0x2b08u;  // (from the original)
    clear_aligned(r7_18, r6_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r7_18 + r6_1) = r5;
    u32 r7_19 = r4 + 0x2d8cu;  // (from the original)
    clear_aligned(r7_19, r6_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r7_19 + r6_1) = r5;
    u32 r7_20 = r4 + 0x3010u;  // (from the original)
    clear_aligned(r7_20, r6_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r7_20 + r6_1) = r5;
    u32 r7_21 = r4 + 0x3294u;  // (from the original)
    clear_aligned(r7_21, r6_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r7_21 + r6_1) = r5;
    u32 r7_22 = r4 + 0x3518u;  // (from the original)
    clear_aligned(r7_22, r6_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r7_22 + r6_1) = r5;
    u32 r7_23 = r4 + 0x379cu;  // (from the original)
    clear_aligned(r7_23, r6_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r7_23 + r6_1) = r5;
    u32 r7_24 = r4 + 0x3a20u;  // (from the original)
    clear_aligned(r7_24, r6_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r7_24 + r6_1) = r5;
    u32 r7_25 = r4 + 0x3ca4u;  // (from the original)
    clear_aligned(r7_25, r6_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r7_25 + r6_1) = r5;
    u32 r7_26 = r4 + 0x3f28u;  // (from the original)
    clear_aligned(r7_26, r6_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r7_26 + r6_1) = r5;
    u32 r7_27 = r4 + 0x41acu;  // (from the original)
    clear_aligned(r7_27, r6_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r7_27 + r6_1) = r5;
    u32 r7_28 = r4 + 0x4430u;  // (from the original)
    clear_aligned(r7_28, r6_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r7_28 + r6_1) = r5;
    u32 r7_29 = r4 + 0x46b4u;  // (from the original)
    clear_aligned(r7_29, r6_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r7_29 + r6_1) = r5;
    u32 r7_30 = r4 + 0x4938u;  // (from the original)
    clear_aligned(r7_30, r6_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r7_30 + r6_1) = r5;
    u32 r7_31 = r4 + 0x4bbcu;  // (from the original)
    clear_aligned(r7_31, r6_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r7_31 + r6_1) = r5;
    u32 r7_32 = r4 + 0x4e40u;  // (from the original)
    clear_aligned(r7_32, r6_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r7_32 + r6_1) = r5;
    frame->word_0 = r4 + 0x5840u;  // (from the original)
    arg0->word_5854 = r5;
    *gptr<u32>(frame->word_0 + 0x18u) = r5;  // (from the original)
    *gptr<u32>(frame->word_0 + 0x1cu) = r5;  // (from the original)
    *gptr<u32>(frame->word_0 + 0x20u) = r5;  // (from the original)
    *gptr<u32>(frame->word_0 + 0x24u) = r5;  // (from the original)
    *gptr<u32>(frame->word_0 + 0x28u) = r5;  // (from the original)
    frame->word_4 = r4 + 0x58a0u;  // (from the original)
    arg0->byte_58aa = u8(r5);
    u32 r6 = 0u;
    arg0->word_587c = r5;
    arg0->byte_5880 = u8(r5);
    do {
        u32 r7 = 0u;
        do {
            u32 r0_2 = block_kind_is_in_list_b_or_category_24_28(r7 + 1u, r6 + 1u, 1u);
            gptr<Local_002fd11c_r1_2> r1_2 = gptr<Local_002fd11c_r1_2>((r7 << 2) + r4 + r6 + (0xb1u << 7));  // (from the original)
            r7 += 1u;
            r1_2->byte_15 = u8(r5);
            r1_2->byte_1 = u8(r0_2);
            guest::preempt();
        } while (r7 < 5u);
        r6 += 1u;
        guest::preempt();
    } while (r6 < 4u);
    *gptr<u16>(frame->word_0 + 0x10u) = 0x7ffe;  // (from the original)
    *gptr<u8>(frame->word_4 + 0xbu) = u8(r5);  // (from the original)
    *global_00952b9d = 1;
}

}  // namespace d_002fd11c
GUEST_EXPORT_FRAMED(0x002fd11d, d_002fd11c::f_002fd11c, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_002fd41c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002fd41c {


u32 f_002fd41c(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r2_1 = *gptr<u32>(r13);
    u32 res_1 = r0 - r3;
    if (res_1 == 0) {
        u32 r0_1 = sxtb(r1);
        u32 r3_1 = sxtb(r2_1);
        u32 res_2 = r0_1 - r3_1;
        if (res_2 == 0) {
            u32 r0_2 = s32(r1 << 0x10) >> 0x18;  // (from the original)
            u32 r1_1 = s32(r2_1 << 0x10) >> 0x18;  // (from the original)
            if (s32(r0_2) >= s32(r1_1)) {
                guest::cpu()->r[1] = r1_1;
                return 1u;
            }
            guest::cpu()->r[1] = r1_1;
            return 0u;
        }
        if ((res_2 >> 0x1f) == (((r0_1 ^ r3_1) & (r0_1 ^ res_2)) >> 0x1f)) {  // (from the original)
            guest::cpu()->r[1] = r1;
            return 1u;
        }
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    if ((res_1 >> 0x1f) != (((r0 ^ r3) & (r0 ^ res_1)) >> 0x1f)) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    guest::cpu()->r[1] = r1;
    return 1u;
}

}  // namespace d_002fd41c
GUEST_EXPORT(0x002fd41c, d_002fd41c::f_002fd41c);

// f_002fdd50: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002fdd50 {

struct __attribute__((packed)) Object_002fdd50_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u16 half_10;
};
GUEST_OFFSET(Object_002fdd50_1, word_0, 0x0);
GUEST_OFFSET(Object_002fdd50_1, word_4, 0x4);
GUEST_OFFSET(Object_002fdd50_1, word_8, 0x8);
GUEST_OFFSET(Object_002fdd50_1, word_c, 0xc);
GUEST_OFFSET(Object_002fdd50_1, half_10, 0x10);


u32 f_002fdd50(u32 r0, gptr<Object_002fdd50_1> arg1, u32 r2) {
    u32 r7_1 = 0;
    u32 r4_1 = 0;
    u32 r4_2 = 0;
    u32 r4_4 = 0;
    u32 r3 = 0u;
    arg1->word_8 = 0x10;  // (from the original)
    arg1->word_c = 0x10;  // (from the original)
    u32 r6 = 0x140u;  // (from the original)
    arg1->word_0 = r3;
    do {
        if (*gptr<u16>(r0) != 0) {
            u32 r5 = 1u;
            arg1->half_10 = u16(r5);
            arg1->word_4 = 0;
            do {
                u32 r5_1 = uxth(r5);
                if ((u32(*gptr<u16>(r0)) & r5_1) != 0) {
                    if (r2 == r3) {
                        return 1u;
                    }
                    r3 += 1u;
                }
                r5 = r5_1 << 1;
                r7_1 = arg1->word_8 + 1u;
                r4_1 = arg1->word_4 + 1u;
                arg1->half_10 = u16(r5);
                arg1->word_8 = r7_1;
                arg1->word_4 = r4_1;
                guest::preempt();
            } while (s32(r4_1) < 0x10);  // (from the original)
            r4_2 = r7_1;
        } else {
            r4_2 = arg1->word_8 + 0x10u;  // (from the original)
            arg1->word_8 = r4_2;
        }
        if (r4_2 >= 0x60u) {  // (from the original)
            u32 r4_3 = arg1->word_c + 1u;
            arg1->word_8 = 0x10;  // (from the original)
            arg1->word_c = r4_3;
        }
        r0 += 2u;
        r4_4 = arg1->word_0 + 1u;
        arg1->word_0 = r4_4;
        guest::preempt();
    } while (r4_4 < r6);
    return 0u;
}

}  // namespace d_002fdd50
GUEST_EXPORT_FRAMED(0x002fdd51, d_002fdd50::f_002fdd50, 0xf0);  // pushes {r4, r5, r6, r7} first, as the original

// f_002fe7f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002fe7f4 {

struct __attribute__((packed)) Object_002fe7f4_0 {
    u32 word_0;
    u8 unknown_4[0x14];  // (not used here)
    u16 half_18;
};
GUEST_OFFSET(Object_002fe7f4_0, word_0, 0x0);
GUEST_OFFSET(Object_002fe7f4_0, half_18, 0x18);

inline constexpr u32 vtable_script__WordFix_33u_ = 0x00909f18u;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> script__construct_word_ptr;
inline constexpr guest::Function<0x0056de54, u32(u32, u32, u32, u32)> call_0056de54;
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32)> construct_script_word;

u32 script__WordFix_33u___WordFix_002fe7f4(gptr<Object_002fe7f4_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 res_1 = 0;
    u32 r3_4 = 0;
    u32 r5 = r1;
    u32 r6 = r2;
    script__construct_word_ptr(r0, r0 + 0x18u, 0x21u, r3);  // (from the original)
    arg0->word_0 = vtable_script__WordFix_33u_;
    construct_script_word(r0 + 0xcu, vtable_script__WordFix_33u_);  // (from the original)
    u32 r4 = r0 + 0u;
    clear_aligned(r0 + 0x18u, 0x42u);  // (from the original)
    r1 = 0x8906ecu;  // (from the original)
    r0 = r4 + 0x18u;  // (from the original)
    arg0->half_18 = *gptr<u16>(r1);
    r2 = 0x10u;  // (from the original)
    do {
        u32 r3_3 = *gptr<u16>(r1);
        res_1 = r2 - 1u;
        r2 = res_1;
        *gptr<u16>(r0 + 2u) = u16(r3_3);
        r3_4 = *gptr<u16>(r1);
        u32 ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r3_4);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    call_0056de54(r4, r5, r6, r3_4);
    return r4;
}

}  // namespace d_002fe7f4
GUEST_EXPORT_FRAMED(0x002fe7f4, d_002fe7f4::script__WordFix_33u___WordFix_002fe7f4, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002fe9c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002fe9c8 {

inline constexpr guest::Function<0x006f2908, u32(u32, u32, u32, u32)> call_006f2908;

struct __attribute__((packed)) Frame_002fe9c8 {
    u32 word_0;
};
GUEST_OFFSET(Frame_002fe9c8, word_0, 0x0);
GUEST_SIZE(Frame_002fe9c8, 0x4);

u32 f_002fe9c8(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_002fe9c8> frame;  // the original's stack frame
    frame->word_0 = r3;
    frame->word_0 = r3;
    call_006f2908(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], 0u);
    return guest::cpu()->r[0];
}

}  // namespace d_002fe9c8
GUEST_EXPORT_FRAMED(0x002fe9c8, d_002fe9c8::f_002fe9c8, 0x4000);  // pushes {lr} first, as the original

// f_002ff1cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ff1cc {

struct __attribute__((packed)) Object_002ff1cc_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_002ff1cc_0, byte_0, 0x0);

struct __attribute__((packed)) Local_002ff1cc_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002ff1cc_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_002ff1cc_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_002ff1cc_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_002ff1cc_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_002ff1cc_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_002ff1cc_ea_2, word_8, 0x8);

struct __attribute__((packed)) Local_002ff1cc_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_002ff1cc_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_002ff1cc_ea_3, word_4, 0x4);
GUEST_OFFSET(Local_002ff1cc_ea_3, word_8, 0x8);

struct __attribute__((packed)) Local_002ff1cc_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002ff1cc_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_002ff1cc_ea_4, word_4, 0x4);

struct __attribute__((packed)) Local_002ff1cc_ea_5 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002ff1cc_ea_5, word_0, 0x0);
GUEST_OFFSET(Local_002ff1cc_ea_5, word_4, 0x4);

struct __attribute__((packed)) Local_002ff1cc_r9_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_002ff1cc_r9_1, word_0, 0x0);
GUEST_OFFSET(Local_002ff1cc_r9_1, word_4, 0x4);
GUEST_OFFSET(Local_002ff1cc_r9_1, word_8, 0x8);

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x002fb338, u32(u32)> is_not_sentinel;
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> return_constant_0xad56b0_;
inline constexpr guest::Function<0x002fb430, u32(u32, u32)> make_adjusted_words;
inline constexpr guest::Function<0x002fb4a0, u32(u32, u32, u32, u32)> words_not_less;
inline constexpr guest::Function<0x00300ff8, u32(u32, u32, u32, u32)> call_00300ff8;
inline constexpr guest::Function<0x00302084, u32(u32, u32, u32, u32)> call_00302084;
inline constexpr guest::Function<0x003022e8, u32(u32)> call_003022e8;
inline constexpr guest::Function<0x00303274, u32(u32, u32)> call_00303274;
inline constexpr guest::Function<0x003037e8, u32(u32, u32, u32, u32)> call_003037e8;
inline constexpr guest::Function<0x0030a488, u32(u32, u32, u32, u32)> TimeStamp__advance;

struct __attribute__((packed)) Frame_002ff1cc {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0xc];  // (not read or written by name)
    u32 word_14;
    u8 unknown_18[0x14];  // (not read or written by name)
    u32 word_2c;
    u8 unknown_30[0x30];  // (not read or written by name)
};
GUEST_OFFSET(Frame_002ff1cc, word_0, 0x0);
GUEST_OFFSET(Frame_002ff1cc, word_4, 0x4);
GUEST_OFFSET(Frame_002ff1cc, word_14, 0x14);
GUEST_OFFSET(Frame_002ff1cc, word_2c, 0x2c);
GUEST_SIZE(Frame_002ff1cc, 0x60);

u32 f_002ff1cc(gptr<Object_002ff1cc_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_002ff1cc> frame;  // the original's stack frame
    u32 r0_15 = 0;
    u32 r5_1 = 0u;
    u32 r0_1 = arg0->byte_0;
    if ((r0_1 & 1u) != 0) {
        u32 r0_2 = return_constant_0xad56b0_(r0_1, r1, r2, r3);
        u32 r8_1 = *gptr<u32>(r0_2);
        gptr<Local_002ff1cc_ea_1> ea_1 = gptr<Local_002ff1cc_ea_1>(r0_2 + 4u);
        u32 r6_1 = ea_1->word_0;
        u32 r7_1 = ea_1->word_4;
        make_adjusted_words(frame.at(0x14).addr(), arg0.addr() + 0xeu);  // (from the original)
        make_adjusted_words(frame.at(0x2c).addr(), arg0.addr() + 0x16u);  // (from the original)
        gptr<Local_002ff1cc_ea_2> ea_2 = gptr<Local_002ff1cc_ea_2>(frame.at(0x14).addr());  // (from the original)
        u32 r0_5 = ea_2->word_0;
        u32 r1_3 = ea_2->word_4;
        u32 r2_3 = ea_2->word_8;
        gptr<Local_002ff1cc_r9_1> r9_1 = gptr<Local_002ff1cc_r9_1>(frame.at(8).addr());
        frame->word_0 = 0;
        r9_1->word_0 = r0_5;
        r9_1->word_4 = r1_3;
        r9_1->word_8 = r2_3;
        TimeStamp__advance(frame.at(8).addr(), 0u, 0x15u, 0u);  // (from the original)
        frame->word_0 = r6_1;
        frame->word_4 = r7_1;
        u32 r0_8 = words_not_less(r9_1->word_0, r9_1->word_4, r9_1->word_8, r8_1);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_8 != 0) {
            u32 r0_9 = get_save_data(r0_8, guest::cpu()->r[1], r2, r3);
            u32 r0_11 = is_not_sentinel(r0_9 + 0x6e292u);  // (from the original)
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_11 != 0) {
                u32 r0_12 = get_save_data(r0_11, guest::cpu()->r[1], r2, r3);
                make_adjusted_words(frame.at(0x38).addr(), r0_12 + 0x6e292u);  // (from the original)
                gptr<Local_002ff1cc_ea_3> ea_3 = gptr<Local_002ff1cc_ea_3>(frame.at(0x38).addr());  // (from the original)
                u32 r0_14 = ea_3->word_0;
                u32 r1_9 = ea_3->word_4;
                u32 r2_7 = ea_3->word_8;
                frame->word_0 = r6_1;
                frame->word_4 = r7_1;
                r0_15 = words_not_less(r0_14, r1_9, r2_7, r8_1);
                if (r0_15 == 0) {
                    return r0_15;
                }
                gptr<Local_002ff1cc_ea_4> ea_4 = gptr<Local_002ff1cc_ea_4>(frame.at(0x18).addr());  // (from the original)
                u32 r1_11 = ea_4->word_4;
                frame->word_0 = ea_4->word_0;
                frame->word_4 = r1_11;
                u32 r0_16 = words_not_less(r8_1, r6_1, r7_1, frame->word_14);
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_16 != 0) {
                    gptr<Local_002ff1cc_ea_5> ea_5 = gptr<Local_002ff1cc_ea_5>(frame.at(0x30).addr());  // (from the original)
                    u32 r1_12 = ea_5->word_4;
                    frame->word_0 = ea_5->word_0;
                    frame->word_4 = r1_12;
                    r0_15 = words_not_less(r8_1, r6_1, r7_1, frame->word_2c);
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    if (r0_15 != 0) {
                        return r0_15;
                    }
                }
                r5_1 = 1u;
            }
        }
    }
    call_00302084(arg0.addr(), r5_1, r2, r3);
    call_003022e8(arg0.addr());
    call_00300ff8(arg0.addr(), 1u, 0u, 1u);
    call_00303274(arg0.addr(), 0u);
    r0_15 = arg0->byte_0;
    if ((r0_15 & 1u) != 0 && (r0_15 & 0x80u) == 0) {  // (from the original)
        frame.release();
        return call_003037e8(arg0.addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    return r0_15;
}

}  // namespace d_002ff1cc
GUEST_EXPORT(0x002ff1cc, d_002ff1cc::f_002ff1cc);

// f_002ff368: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ff368 {

struct __attribute__((packed)) Object_002ff368_0 {
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
    u8 byte_30;
    u8 unknown_31[0x3];  // (not used here)
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
    u8 byte_64;
};
GUEST_OFFSET(Object_002ff368_0, word_0, 0x0);
GUEST_OFFSET(Object_002ff368_0, word_4, 0x4);
GUEST_OFFSET(Object_002ff368_0, word_8, 0x8);
GUEST_OFFSET(Object_002ff368_0, word_c, 0xc);
GUEST_OFFSET(Object_002ff368_0, word_10, 0x10);
GUEST_OFFSET(Object_002ff368_0, word_14, 0x14);
GUEST_OFFSET(Object_002ff368_0, word_18, 0x18);
GUEST_OFFSET(Object_002ff368_0, word_1c, 0x1c);
GUEST_OFFSET(Object_002ff368_0, word_20, 0x20);
GUEST_OFFSET(Object_002ff368_0, word_24, 0x24);
GUEST_OFFSET(Object_002ff368_0, word_28, 0x28);
GUEST_OFFSET(Object_002ff368_0, word_2c, 0x2c);
GUEST_OFFSET(Object_002ff368_0, byte_30, 0x30);
GUEST_OFFSET(Object_002ff368_0, word_34, 0x34);
GUEST_OFFSET(Object_002ff368_0, word_38, 0x38);
GUEST_OFFSET(Object_002ff368_0, word_3c, 0x3c);
GUEST_OFFSET(Object_002ff368_0, word_40, 0x40);
GUEST_OFFSET(Object_002ff368_0, word_44, 0x44);
GUEST_OFFSET(Object_002ff368_0, word_48, 0x48);
GUEST_OFFSET(Object_002ff368_0, word_4c, 0x4c);
GUEST_OFFSET(Object_002ff368_0, word_50, 0x50);
GUEST_OFFSET(Object_002ff368_0, word_54, 0x54);
GUEST_OFFSET(Object_002ff368_0, word_58, 0x58);
GUEST_OFFSET(Object_002ff368_0, word_5c, 0x5c);
GUEST_OFFSET(Object_002ff368_0, word_60, 0x60);
GUEST_OFFSET(Object_002ff368_0, byte_64, 0x64);

inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32, u32)> construct_empty_item;
inline constexpr guest::Function<0x002ff408, u32(u32)> call_002ff408;

u32 f_002ff368(gptr<Object_002ff368_0> arg0) {
    arg0->word_0 = 0;
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
    arg0->byte_30 = 0;
    arg0->word_34 = 0;
    arg0->word_38 = 0;
    arg0->word_3c = 0;
    arg0->word_40 = 0;
    arg0->word_44 = 0;
    arg0->word_48 = 0;
    arg0->word_4c = 0;
    arg0->word_50 = 0;
    arg0->word_54 = 0;
    arg0->word_58 = 0;
    arg0->word_5c = 0;
    arg0->word_60 = 0;
    arg0->byte_64 = 0;
    u32 r0_1 = arg0.addr() + 0x274u;  // (from the original)
    construct_empty_item(r0_1, guest::cpu()->r[1], 0u, guest::cpu()->r[3]);
    call_002ff408(r0_1 - 0x274u);  // (from the original)
    return r0_1 - 0x274u;  // (from the original)
}

}  // namespace d_002ff368
GUEST_EXPORT_FRAMED(0x002ff368, d_002ff368::f_002ff368, 0x4010);  // pushes {r4, lr} first, as the original

// f_002ff408: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ff408 {

struct __attribute__((packed)) Object_002ff408_0 {
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
    u8 byte_30;
    u8 unknown_31[0x3];  // (not used here)
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
    u8 byte_64;
    u8 unknown_65[0x209];  // (not used here)
    u8 byte_26e;
    u8 byte_26f;
    u8 byte_270;
    u8 byte_271;
    u8 byte_272;
};
GUEST_OFFSET(Object_002ff408_0, word_0, 0x0);
GUEST_OFFSET(Object_002ff408_0, word_4, 0x4);
GUEST_OFFSET(Object_002ff408_0, word_8, 0x8);
GUEST_OFFSET(Object_002ff408_0, word_c, 0xc);
GUEST_OFFSET(Object_002ff408_0, word_10, 0x10);
GUEST_OFFSET(Object_002ff408_0, word_14, 0x14);
GUEST_OFFSET(Object_002ff408_0, word_18, 0x18);
GUEST_OFFSET(Object_002ff408_0, word_1c, 0x1c);
GUEST_OFFSET(Object_002ff408_0, word_20, 0x20);
GUEST_OFFSET(Object_002ff408_0, word_24, 0x24);
GUEST_OFFSET(Object_002ff408_0, word_28, 0x28);
GUEST_OFFSET(Object_002ff408_0, word_2c, 0x2c);
GUEST_OFFSET(Object_002ff408_0, byte_30, 0x30);
GUEST_OFFSET(Object_002ff408_0, word_34, 0x34);
GUEST_OFFSET(Object_002ff408_0, word_38, 0x38);
GUEST_OFFSET(Object_002ff408_0, word_3c, 0x3c);
GUEST_OFFSET(Object_002ff408_0, word_40, 0x40);
GUEST_OFFSET(Object_002ff408_0, word_44, 0x44);
GUEST_OFFSET(Object_002ff408_0, word_48, 0x48);
GUEST_OFFSET(Object_002ff408_0, word_4c, 0x4c);
GUEST_OFFSET(Object_002ff408_0, word_50, 0x50);
GUEST_OFFSET(Object_002ff408_0, word_54, 0x54);
GUEST_OFFSET(Object_002ff408_0, word_58, 0x58);
GUEST_OFFSET(Object_002ff408_0, word_5c, 0x5c);
GUEST_OFFSET(Object_002ff408_0, word_60, 0x60);
GUEST_OFFSET(Object_002ff408_0, byte_64, 0x64);
GUEST_OFFSET(Object_002ff408_0, byte_26e, 0x26e);
GUEST_OFFSET(Object_002ff408_0, byte_26f, 0x26f);
GUEST_OFFSET(Object_002ff408_0, byte_270, 0x270);
GUEST_OFFSET(Object_002ff408_0, byte_271, 0x271);
GUEST_OFFSET(Object_002ff408_0, byte_272, 0x272);

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> clear_aligned;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> copy_item_002fc8e8;
inline constexpr guest::Function<0x00301444, u32(u32, u32)> clear;
inline constexpr guest::Function<0x006bc04c, u32(u32, u32, u32, u32)> call_006bc04c;

u32 f_002ff408(gptr<Object_002ff408_0> arg0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    arg0->word_0 = 0;
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
    arg0->byte_30 = 0;
    arg0->word_34 = 0;
    arg0->word_38 = 0;
    arg0->word_3c = 0;
    arg0->word_40 = 0;
    arg0->word_44 = 0;
    arg0->word_48 = 0;
    arg0->word_4c = 0;
    arg0->word_50 = 0;
    arg0->word_54 = 0;
    arg0->word_58 = 0;
    arg0->word_5c = 0;
    arg0->word_60 = 0;
    arg0->byte_64 = 0;
    clear_aligned(arg0.addr() + 0x68u, 0x42u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    clear(arg0.addr() + 0xaau, 0x182u);  // (from the original)
    clear_aligned(arg0.addr() + 0x22cu, 0x42u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    arg0->byte_26e = 0;
    arg0->byte_26f = 0;
    arg0->byte_270 = 0;
    arg0->byte_271 = 0;
    arg0->byte_272 = 0;
    copy_item_002fc8e8(arg0.addr() + 0x274u, empty_item_address);  // (from the original)
    frame.release();
    return call_006bc04c(arg0.addr() + 0x278u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_002ff408
GUEST_EXPORT(0x002ff408, d_002ff408::f_002ff408);

// f_002ff724: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ff724 {

struct __attribute__((packed)) Local_002ff724_r5_1 {
    u8 unknown_0[0x38];  // (not used here)
    u16 half_38;
    u16 half_3a;
    u16 half_3c;
};
GUEST_OFFSET(Local_002ff724_r5_1, half_38, 0x38);
GUEST_OFFSET(Local_002ff724_r5_1, half_3a, 0x3a);
GUEST_OFFSET(Local_002ff724_r5_1, half_3c, 0x3c);

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x001b4a8c, u32(u32, u32, u32, u32)> call_001b4a8c;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> copy_item_002fc8e8;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> copy_item_002fc934;
inline constexpr guest::Function<0x003052f0, u32(u32)> clear_identity_with_flags;
inline constexpr guest::Function<0x003084d0, u32(u32)> clear_identity_with_value;
inline constexpr guest::Function<0x00613de4, u32(u32, u32, u32, u32)> call_00613de4;

struct __attribute__((packed)) Frame_002ff724 {
    u32 word_0;
};
GUEST_OFFSET(Frame_002ff724, word_0, 0x0);
GUEST_SIZE(Frame_002ff724, 0x4);

u32 f_002ff724(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_002ff724> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r6_1 = r0 + 0x142u;  // (from the original)
    u32 r7_1 = r0 + 0x146u;  // (from the original)
    gptr<Local_002ff724_r5_1> r5_1 = gptr<Local_002ff724_r5_1>(r0 + 0x100u);  // (from the original)
    if (r1 != 0) {
        if (r1 == 1u) {
            goto L_2ff78c;
        }
        if (r1 != 2u) {
            guest::cpu()->r[1] = r1;
            return r0;
        }
        goto L_2ff7b8;
    }
    call_001b4a8c(r0 + 0x1eu, r0 + 0x4cu, guest::cpu()->r[2], r3);  // (from the original)
    call_00613de4(r0 + 0xa8u, r0 + 0xd8u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r5_1->half_38 = r5_1->half_3a;
    copy_item_002fc8e8(r0 + 0x13eu, r6_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r3 = guest::cpu()->r[3];
L_2ff78c:;
    call_001b4a8c(r0 + 0x4cu, r0 + 0x7au, guest::cpu()->r[2], r3);  // (from the original)
    r3 = guest::cpu()->r[3];
    call_00613de4(r0 + 0xd8u, r0 + 0x108u, guest::cpu()->r[2], r3);  // (from the original)
    r5_1->half_3a = r5_1->half_3c;
    copy_item_002fc8e8(r6_1, r7_1, guest::cpu()->r[2], r3);
L_2ff7b8:;
    clear_identity_with_flags(r0 + 0x7au);  // (from the original)
    clear_identity_with_value(r0 + 0x108u);  // (from the original)
    r5_1->half_3c = 0;
    u32 r0_8 = frame.at(0).addr();
    copy_item_002fc934(r0_8, empty_item_address);
    copy_item_002fc8e8(r7_1, r0_8, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    return frame.at(0).addr();
}

}  // namespace d_002ff724
GUEST_EXPORT_FRAMED(0x002ff724, d_002ff724::f_002ff724, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_002ff864: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ff864 {

struct __attribute__((packed)) Object_002ff864_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_002ff864_0, byte_0, 0x0);

inline constexpr guest::Function<0x00300ff8, u32(u32, u32, u32, u32)> call_00300ff8;
inline constexpr guest::Function<0x00303274, u32(u32, u32)> call_00303274;
inline constexpr guest::Function<0x003037e8, u32(u32, u32, u32, u32)> call_003037e8;

u32 f_002ff864(gptr<Object_002ff864_0> arg0, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    call_00300ff8(arg0.addr(), 1u, 0u, 0u);
    call_00303274(arg0.addr(), r1);
    u32 r0_1 = arg0->byte_0;
    if ((r0_1 & 1u) != 0 && (r0_1 & 0x80u) == 0) {  // (from the original)
        frame.release();
        return call_003037e8(arg0.addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    return r0_1;
}

}  // namespace d_002ff864
GUEST_EXPORT(0x002ff864, d_002ff864::f_002ff864);

// f_002ff950: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ff950 {

struct __attribute__((packed)) Object_002ff950_0 {
    u8 unknown_0[0x138];  // (not used here)
    u16 half_138;
    u16 half_13a;
    u16 half_13c;
};
GUEST_OFFSET(Object_002ff950_0, half_138, 0x138);
GUEST_OFFSET(Object_002ff950_0, half_13a, 0x13a);
GUEST_OFFSET(Object_002ff950_0, half_13c, 0x13c);

struct __attribute__((packed)) Local_002ff950_r5_1 {
    u8 unknown_0[0x3a];  // (not used here)
    u16 half_3a;
    u16 half_3c;
};
GUEST_OFFSET(Local_002ff950_r5_1, half_3a, 0x3a);
GUEST_OFFSET(Local_002ff950_r5_1, half_3c, 0x3c);

inline constexpr guest::Function<0x001b4a8c, u32(u32, u32, u32)> call_001b4a8c;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> copy_item_002fc8e8;
inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> is_villager_record;
inline constexpr guest::Function<0x003052f0, u32(u32, u32, u32)> clear_identity_with_flags;
inline constexpr guest::Function<0x00613de4, u32(u32, u32, u32)> call_00613de4;

u32 f_002ff950(gptr<Object_002ff950_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r12 = guest::cpu()->r[12];
    u32 r1_12 = 0;
    u32 r0_14 = 0;
    *frame.at<u32>(0x20) = r12;  // (from the original)
    u32 r0_1 = is_villager_record(r1, r1, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        if (r3 >= 0x4000u) {  // (from the original)
            r0_1 = 0u;
        } else {
            gptr<Local_002ff950_r5_1> r5_1 = gptr<Local_002ff950_r5_1>(r0 + 0x100u);  // (from the original)
            u32 r7_1 = 1u;
            u32 r2_1 = arg0->half_138;
            u32 zf_1 = r2_1 == r3;
            if (!zf_1) {
                r0_1 = arg0->half_13a;
                zf_1 = r0_1 == r3;
            }
            if (!zf_1) {
                r1_1 = arg0->half_13c;
                zf_1 = r1_1 == r3;
            }
            if (zf_1) {
                r7_1 = 0u;
            } else {
                if (r3 > r2_1) {
                    call_001b4a8c(r0 + 0x7au, r0 + 0x4cu, r2_1);  // (from the original)
                    call_001b4a8c(r0 + 0x4cu, r0 + 0x1eu, guest::cpu()->r[2]);  // (from the original)
                    clear_identity_with_flags(r0 + 0x1eu, guest::cpu()->r[1], guest::cpu()->r[2]);  // (from the original)
                    call_00613de4(r0 + 0x108u, r0 + 0xd8u, guest::cpu()->r[2]);  // (from the original)
                    call_00613de4(r0 + 0xd8u, r0 + 0xa8u, guest::cpu()->r[2]);  // (from the original)
                    call_00613de4(r0 + 0xa8u, r1, guest::cpu()->r[2]);  // (from the original)
                    u32 r0_8 = arg0->half_13a;
                    u32 r1_7 = arg0->half_138;
                    arg0->half_138 = u16(r3);
                    arg0->half_13c = u16(r0_8);
                    arg0->half_13a = u16(r1_7);
                    copy_item_002fc8e8(r0 + 0x146u, r0 + 0x142u);  // (from the original)
                    copy_item_002fc8e8(r0 + 0x142u, r0 + 0x13eu);  // (from the original)
                    copy_item_002fc8e8(r0 + 0x13eu, r2);  // (from the original)
                    r1_1 = guest::cpu()->r[1];
                } else {
                    if (r0_1 < r3) {
                        call_001b4a8c(r0 + 0x7au, r0 + 0x4cu, r2_1);  // (from the original)
                        clear_identity_with_flags(r0 + 0x4cu, guest::cpu()->r[1], guest::cpu()->r[2]);  // (from the original)
                        call_00613de4(r0 + 0x108u, r0 + 0xd8u, guest::cpu()->r[2]);  // (from the original)
                        call_00613de4(r0 + 0xd8u, r1, guest::cpu()->r[2]);  // (from the original)
                        u32 r0_13 = r5_1->half_3a;
                        r5_1->half_3a = u16(r3);
                        r5_1->half_3c = u16(r0_13);
                        copy_item_002fc8e8(r0 + 0x146u, r0 + 0x142u);  // (from the original)
                        r1_12 = r2;
                        r0_14 = r0 + 0x142u;  // (from the original)
                    } else {
                        if (r1_1 >= r3) {
                            goto L_2ffad0;
                        }
                        clear_identity_with_flags(r0 + 0x7au, r1_1, r2_1);  // (from the original)
                        call_00613de4(r0 + 0x108u, r1, r2_1);  // (from the original)
                        r1_12 = r2;
                        r0_14 = r0 + 0x146u;  // (from the original)
                        r5_1->half_3c = u16(r3);
                    }
                    copy_item_002fc8e8(r0_14, r1_12);
                    r1_1 = guest::cpu()->r[1];
                }
            }
L_2ffad0:;
            r0_1 = r7_1;
        }
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_002ff950
GUEST_EXPORT_FRAMED(0x002ff950, d_002ff950::f_002ff950, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_002ffc08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ffc08 {

struct __attribute__((packed)) Object_002ffc08_0 {
    u8 unknown_0[0x18];  // (not used here)
    u8 byte_18;
};
GUEST_OFFSET(Object_002ffc08_0, byte_18, 0x18);


void f_002ffc08(gptr<Object_002ffc08_0> arg0, u32 r1) {
    arg0->byte_18 = u8(u32(arg0->byte_18) & ~r1);
}

}  // namespace d_002ffc08
GUEST_EXPORT(0x002ffc08, d_002ffc08::f_002ffc08);

// f_002ffde0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ffde0 {


u32 f_002ffde0(u32 r0, u32 r1) {
    if (s32(r1) < 3) {
        r1 = r1 * 3u;
        r0 += (r1 << 4);
    }
    guest::cpu()->r[1] = r1;
    return r0 + 0xa8u;  // (from the original)
}

}  // namespace d_002ffde0
GUEST_EXPORT(0x002ffde0, d_002ffde0::f_002ffde0);

// f_002ffdf4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ffdf4 {

struct __attribute__((packed)) Object_002ffdf4_0 {
    u8 unknown_0[0x138];  // (not used here)
    u16 half_138;
    u16 half_13a;
    u16 half_13c;
};
GUEST_OFFSET(Object_002ffdf4_0, half_138, 0x138);
GUEST_OFFSET(Object_002ffdf4_0, half_13a, 0x13a);
GUEST_OFFSET(Object_002ffdf4_0, half_13c, 0x13c);

struct __attribute__((packed)) Local_002ffdf4_r5_1 {
    u8 unknown_0[0x3a];  // (not used here)
    u16 half_3a;
    u16 half_3c;
};
GUEST_OFFSET(Local_002ffdf4_r5_1, half_3a, 0x3a);
GUEST_OFFSET(Local_002ffdf4_r5_1, half_3c, 0x3c);

inline constexpr guest::Function<0x001b4a8c, u32(u32, u32)> call_001b4a8c;
inline constexpr guest::Function<0x002fbd54, u32(u32, u32, u32, u32)> PersonalId__is_set;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> copy_item_002fc8e8;
inline constexpr guest::Function<0x003084d0, u32(u32)> clear_identity_with_value;
inline constexpr guest::Function<0x00613de4, u32(u32, u32)> call_00613de4;

u32 f_002ffdf4(gptr<Object_002ffdf4_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x20);  // the original's stack frame
    u32 r0_1 = PersonalId__is_set(r1, r1, r2, r3);
    if (r0_1 != 0 && r3 < 0x4000u) {  // (from the original)
        gptr<Local_002ffdf4_r5_1> r5_1 = gptr<Local_002ffdf4_r5_1>(arg0.addr() + 0x100u);  // (from the original)
        if (arg0->half_138 < r3) {
            call_001b4a8c(arg0.addr() + 0x7au, arg0.addr() + 0x4cu);  // (from the original)
            call_001b4a8c(arg0.addr() + 0x4cu, arg0.addr() + 0x1eu);  // (from the original)
            call_001b4a8c(arg0.addr() + 0x1eu, r1);  // (from the original)
            call_00613de4(arg0.addr() + 0x108u, arg0.addr() + 0xd8u);  // (from the original)
            call_00613de4(arg0.addr() + 0xd8u, arg0.addr() + 0xa8u);  // (from the original)
            clear_identity_with_value(arg0.addr() + 0xa8u);  // (from the original)
            u32 r0_8 = arg0->half_13a;
            u32 r1_6 = arg0->half_138;
            arg0->half_138 = u16(r3);
            arg0->half_13c = u16(r0_8);
            arg0->half_13a = u16(r1_6);
            copy_item_002fc8e8(arg0.addr() + 0x146u, arg0.addr() + 0x142u);  // (from the original)
            copy_item_002fc8e8(arg0.addr() + 0x142u, arg0.addr() + 0x13eu);  // (from the original)
            frame.release();
            return copy_item_002fc8e8(arg0.addr() + 0x13eu, r2);  // (from the original)
        }
        if (r5_1->half_3a < r3) {
            call_001b4a8c(arg0.addr() + 0x7au, arg0.addr() + 0x4cu);  // (from the original)
            call_001b4a8c(arg0.addr() + 0x4cu, r1);  // (from the original)
            call_00613de4(arg0.addr() + 0x108u, arg0.addr() + 0xd8u);  // (from the original)
            clear_identity_with_value(arg0.addr() + 0xd8u);  // (from the original)
            u32 r0_13 = r5_1->half_3a;
            r5_1->half_3a = u16(r3);
            r5_1->half_3c = u16(r0_13);
            copy_item_002fc8e8(arg0.addr() + 0x146u, arg0.addr() + 0x142u);  // (from the original)
            frame.release();
            return copy_item_002fc8e8(arg0.addr() + 0x142u, r2);  // (from the original)
        }
        r0_1 = r5_1->half_3c;
        if (r0_1 < r3) {
            call_001b4a8c(arg0.addr() + 0x7au, r1);  // (from the original)
            clear_identity_with_value(arg0.addr() + 0x108u);  // (from the original)
            r5_1->half_3c = u16(r3);
            frame.release();
            return copy_item_002fc8e8(arg0.addr() + 0x146u, r2);  // (from the original)
        }
    }
    return r0_1;
}

}  // namespace d_002ffdf4
GUEST_EXPORT(0x002ffdf4, d_002ffdf4::f_002ffdf4);

// f_002fff68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002fff68 {


u32 f_002fff68(u32 r0, u32 r1) {
    if (s32(r1) >= 3) {
        guest::cpu()->r[1] = r1;
        return r0 + 0x1eu;  // (from the original)
    }
    u32 r1_1 = r1 * 7u + (r1 << 4);
    guest::cpu()->r[1] = r1_1;
    return r0 + (r1_1 << 1) + 0x1eu;  // (from the original)
}

}  // namespace d_002fff68
GUEST_EXPORT(0x002fff68, d_002fff68::f_002fff68);
