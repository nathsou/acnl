// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_00220c28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Selects icon `index` of the second group (+0x2b1c): unselects the previous one and starts the new one's highlight
// (kind 2).
namespace d_00220c28 {

struct __attribute__((packed)) MapScreen {
    u8 unknown_0[0xb28c];  // (not used here)
    u32 word_b28c;
};
GUEST_OFFSET(MapScreen, word_b28c, 0xb28c);

struct __attribute__((packed)) Local_00220c28_r4_1 {
    u8 unknown_0[0x28c];  // (not used here)
    u32 layout_part;
    u8 unknown_290[0x118];  // (not used here)
    u8 byte_3a8;
    u8 unknown_3a9[0x17];  // (not used here)
    u32 word_3c0;
};
GUEST_OFFSET(Local_00220c28_r4_1, layout_part, 0x28c);
GUEST_OFFSET(Local_00220c28_r4_1, byte_3a8, 0x3a8);
GUEST_OFFSET(Local_00220c28_r4_1, word_3c0, 0x3c0);

inline constexpr guest::Function<0x0060e094, u32(u32, u32)> LayoutPart__restart_animation;
inline constexpr guest::Function<0x0060e0cc, u32(u32, u32, u32, u32)> LayoutPart__finish_animation;

u32 MapScreen__select_icon_b(gptr<MapScreen> map_screen, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    gptr<Local_00220c28_r4_1> r4_1 = gptr<Local_00220c28_r4_1>(map_screen.addr() + 0xb000u);  // (from the original)
    u32 r0_1 = map_screen->word_b28c;
    u32 layout_part = map_screen.addr() + r1 * 0x314u + 0x2b1cu;  // (from the original)
    if (r0_1 != layout_part && r0_1 != 0) {
        u32 r1_1 = *gptr<u8>(r0_1 + 0x26bu);  // (from the original)
        if (r1_1 == 1u) {
            LayoutPart__finish_animation(r0_1, r1_1, map_screen.addr(), guest::cpu()->r[3]);
        }
    }
    r4_1->layout_part = layout_part;
    r4_1->byte_3a8 = 2;
    r4_1->word_3c0 = r1;
    u32 r1_2 = *gptr<u8>(layout_part + 0x26bu);  // (from the original)
    if (r1_2 == 0) {
        frame.release();
        return LayoutPart__restart_animation(layout_part, r1_2);
    }
    guest::cpu()->r[1] = r1_2;
    return layout_part;
}

}  // namespace d_00220c28
GUEST_EXPORT(0x00220c28, d_00220c28::MapScreen__select_icon_b);

// f_0022105c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Selects icon `index` of the first group (+4): unselects the previous one and starts the new one's highlight (kind
// 1).
namespace d_0022105c {

struct __attribute__((packed)) MapScreen {
    u8 unknown_0[0xb28c];  // (not used here)
    u32 word_b28c;
};
GUEST_OFFSET(MapScreen, word_b28c, 0xb28c);

struct __attribute__((packed)) Local_0022105c_r4_1 {
    u8 unknown_0[0x28c];  // (not used here)
    u32 layout_part;
    u8 unknown_290[0x118];  // (not used here)
    u8 byte_3a8;
    u8 unknown_3a9[0x17];  // (not used here)
    u32 word_3c0;
};
GUEST_OFFSET(Local_0022105c_r4_1, layout_part, 0x28c);
GUEST_OFFSET(Local_0022105c_r4_1, byte_3a8, 0x3a8);
GUEST_OFFSET(Local_0022105c_r4_1, word_3c0, 0x3c0);

inline constexpr guest::Function<0x0060e094, u32(u32, u32)> LayoutPart__restart_animation;
inline constexpr guest::Function<0x0060e0cc, u32(u32, u32, u32, u32)> LayoutPart__finish_animation;

u32 MapScreen__select_icon_a(gptr<MapScreen> map_screen, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    gptr<Local_0022105c_r4_1> r4_1 = gptr<Local_0022105c_r4_1>(map_screen.addr() + 0xb000u);  // (from the original)
    u32 r0_1 = map_screen->word_b28c;
    u32 layout_part = map_screen.addr() + r1 * 0x314u + 4u;  // (from the original)
    if (r0_1 != layout_part && r0_1 != 0) {
        u32 r1_1 = *gptr<u8>(r0_1 + 0x26bu);  // (from the original)
        if (r1_1 == 1u) {
            LayoutPart__finish_animation(r0_1, r1_1, map_screen.addr(), guest::cpu()->r[3]);
        }
    }
    r4_1->layout_part = layout_part;
    r4_1->byte_3a8 = 1;
    r4_1->word_3c0 = r1;
    u32 r1_2 = *gptr<u8>(layout_part + 0x26bu);  // (from the original)
    if (r1_2 == 0) {
        frame.release();
        return LayoutPart__restart_animation(layout_part, r1_2);
    }
    guest::cpu()->r[1] = r1_2;
    return layout_part;
}

}  // namespace d_0022105c
GUEST_EXPORT(0x0022105c, d_0022105c::MapScreen__select_icon_a);

// f_002214e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// In room scenes, selects the player icon (+0xac64): unselects the previous one and starts its highlight (kind 5).
namespace d_002214e4 {

struct __attribute__((packed)) MapScreen {
    u8 unknown_0[0xb28c];  // (not used here)
    u32 word_b28c;
};
GUEST_OFFSET(MapScreen, word_b28c, 0xb28c);

struct __attribute__((packed)) Local_002214e4_r4_1 {
    u8 unknown_0[0x28c];  // (not used here)
    u32 layout_part;
    u8 unknown_290[0x118];  // (not used here)
    u8 byte_3a8;
    u8 unknown_3a9[0x17];  // (not used here)
    u32 word_3c0;
};
GUEST_OFFSET(Local_002214e4_r4_1, layout_part, 0x28c);
GUEST_OFFSET(Local_002214e4_r4_1, byte_3a8, 0x3a8);
GUEST_OFFSET(Local_002214e4_r4_1, word_3c0, 0x3c0);

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x0060e094, u32(u32, u32)> LayoutPart__restart_animation;
inline constexpr guest::Function<0x0060e0cc, u32(u32, u32)> LayoutPart__finish_animation;

void MapScreen__select_player_icon(gptr<MapScreen> map_screen, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 scene = current_scene_id(map_screen.addr(), r1, guest::cpu()->r[2], r3);
    u32 r1_1 = scene;
    u32 scene_flagged = scene_has_flags(0x20u, r1_1);  // (from the original)
    if (scene_flagged != 0) {
        gptr<Local_002214e4_r4_1> r4_1 = gptr<Local_002214e4_r4_1>(map_screen.addr() + 0xb000u);  // (from the original)
        u32 r0_3 = map_screen->word_b28c;
        u32 layout_part = map_screen.addr() + 0xac64u;  // (from the original)
        if (r0_3 != layout_part && r0_3 != 0) {
            r1_1 = *gptr<u8>(r0_3 + 0x26bu);  // (from the original)
            if (r1_1 == 1u) {
                LayoutPart__finish_animation(r0_3, r1_1);
            }
        }
        r4_1->layout_part = layout_part;
        r4_1->byte_3a8 = 5;
        r4_1->word_3c0 = 0;
        if (*gptr<u8>(layout_part + 0x26bu) == 0) {  // (from the original)
            frame.release();
            LayoutPart__restart_animation(layout_part, r1_1);
            return;
        }
    }
}

}  // namespace d_002214e4
GUEST_EXPORT(0x002214e4, d_002214e4::MapScreen__select_player_icon);

// f_00221790: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Updates the visible map icons.
namespace d_00221790 {

struct __attribute__((packed)) MapScreen {
    u8 unknown_0[0xb290];  // (not used here)
    u32 word_b290;
};
GUEST_OFFSET(MapScreen, word_b290, 0xb290);

inline constexpr guest::Function<0x002213bc, u32(u32, u32, u32, u32)> Mailbox__place_icons;
inline constexpr guest::Function<0x006a923c, u32(u32, u32, u32, u32)> holder_flagged_has_flag_b7_bit_0;

void MapScreen__update_icons(gptr<MapScreen> map_screen) {
    u32 r0 = map_screen.addr();
    u32 r3_2 = 0;
    u32 r5 = r0;
    u32 r4 = r5 + 0xb000u;  // (from the original)
    r0 = 0u;
    u32 r2 = 1u;
    u32 r1 = r2;
    map_screen->word_b290 = r0;
    do {
        u32 r2_1 = r2 + 1u;
        r3_2 = r5 + (r2_1 << 2) + 0xb000u;  // (from the original)
        r1 += 2u;
        *gptr<u32>(((r5 + (r2 << 2)) + 0xb000u) + 0x290u) = r0;  // (from the original)
        r2 = r2_1 + 1u;
        *gptr<u32>(r3_2 + 0x290u) = r0;  // (from the original)
        guest::preempt();
    } while (s32(r1) < 0x19);  // (from the original)
    *gptr<u32>(r4 + 0x3c4u) = r0;  // (from the original)
    u32 r0_1 = r5 + 0xac64u;  // (from the original)
    u32 r0_2 = holder_flagged_has_flag_b7_bit_0(r0_1, r1, r2, r3_2);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    u32 r3 = guest::cpu()->r[3];
    if (r0_2 != 0) {
        *gptr<u32>(r5 + (*gptr<u32>(r4 + 0x3c4u) << 2) + 0xb290u) = r0_1;  // (from the original)
        *gptr<u32>(r4 + 0x3c4u) = *gptr<u32>(r4 + 0x3c4u) + 1u;  // (from the original)
    }
    r4 = 0u;
    do {
        u32 r6_1 = r5 + r4 * 0x314u;  // (from the original)
        u32 r0_4 = holder_flagged_has_flag_b7_bit_0(r6_1 + 4u, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_4 != 0) {
            Mailbox__place_icons(r5, r6_1 + 4u, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 0xe);  // (from the original)
    r4 = 0u;
    do {
        u32 r6_2 = r5 + r4 * 0x314u;  // (from the original)
        u32 r0_5 = holder_flagged_has_flag_b7_bit_0(r6_2 + 0x2b1cu, r1, r2, r3);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_5 != 0) {
            if (*gptr<u8>(r6_2 + 0x2d84u) != 8u) {  // (from the original)
                Mailbox__place_icons(r5, r6_2 + 0x2b1cu, r2, r3);  // (from the original)
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
            }
        }
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 0xa);  // (from the original)
    r4 = 0u;
    do {
        u32 r6_4 = r5 + r4 * 0x314u;  // (from the original)
        u32 r0_6 = holder_flagged_has_flag_b7_bit_0(r6_4 + 0x2b1cu, r1, r2, r3);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_6 != 0) {
            if (*gptr<u8>(r6_4 + 0x2d84u) == 8u) {  // (from the original)
                Mailbox__place_icons(r5, r6_4 + 0x2b1cu, r2, r3);  // (from the original)
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
            }
        }
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 0xa);  // (from the original)
    guest::cpu()->r[1] = r1;
}

}  // namespace d_00221790
GUEST_EXPORT_FRAMED(0x00221790, d_00221790::MapScreen__update_icons, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00222ebc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Releases the map screen's layouts: its icons of every group, the player icon and the frame.
namespace d_00222ebc {

struct __attribute__((packed)) MapScreen {
    u8 unknown_0[0xb2f4];  // (not used here)
    u32 word_b2f4;
};
GUEST_OFFSET(MapScreen, word_b2f4, 0xb2f4);

inline constexpr guest::Function<0x001323b4, u32(u32, u32, u32, u32)> layout_at_10_virtual_8;
inline constexpr guest::Function<0x006a923c, u32(u32)> holder_flagged_has_flag_b7_bit_0;

u32 MapScreen__release_layouts(gptr<MapScreen> map_screen) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0 = map_screen.addr();
    u32 r4 = r0;
    u32 r0_1 = map_screen->word_b2f4;
    if (r0_1 != 0) {
        layout_at_10_virtual_8(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    u32 r5 = 0u;
    do {
        layout_at_10_virtual_8(r4 + r5 * 0x314u + 0x10cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r5 += 1u;
        guest::preempt();
    } while (s32(r5) < 0xe);  // (from the original)
    r5 = 0u;
    do {
        layout_at_10_virtual_8(r4 + r5 * 0x314u + 0x2c24u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r5 += 1u;
        guest::preempt();
    } while (s32(r5) < 0xa);  // (from the original)
    r5 = 0u;
    do {
        layout_at_10_virtual_8(r4 + r5 * 0x314u + 0x4aecu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r5 += 1u;
        guest::preempt();
    } while (s32(r5) < 8);
    r5 = 0u;
    do {
        layout_at_10_virtual_8(r4 + r5 * 0x314u + 0x7c2cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r5 += 1u;
        guest::preempt();
    } while (s32(r5) < 0x10);  // (from the original)
    r5 = 0u;
    do {
        layout_at_10_virtual_8(r4 + r5 * 0x314u + 0x638cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r5 += 1u;
        guest::preempt();
    } while (s32(r5) < 8);
    u32 r0_8 = holder_flagged_has_flag_b7_bit_0(r4 + 0xac64u);  // (from the original)
    if (r0_8 != 0) {
        layout_at_10_virtual_8(r4 + 0xad6cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    }
    frame.release();
    return layout_at_10_virtual_8((r4 + 0x8000u) + 0x3080u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_00222ebc
GUEST_EXPORT(0x00222ebc, d_00222ebc::MapScreen__release_layouts);

// f_002230d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002230d8 {

struct __attribute__((packed)) Local_002230d8_r1_3 {
    u8 unknown_0[0x28c];  // (not used here)
    u32 word_28c;
    u8 unknown_290[0x64];  // (not used here)
    u32 word_2f4;
    u32 word_2f8;
};
GUEST_OFFSET(Local_002230d8_r1_3, word_28c, 0x28c);
GUEST_OFFSET(Local_002230d8_r1_3, word_2f4, 0x2f4);
GUEST_OFFSET(Local_002230d8_r1_3, word_2f8, 0x2f8);

struct __attribute__((packed)) Local_002230d8_r1_4 {
    u8 unknown_0[0x290];  // (not used here)
    u32 word_290;
    u8 unknown_294[0x110];  // (not used here)
    u8 byte_3a4;
    u8 byte_3a5;
    u8 byte_3a6;
    u8 byte_3a7;
    u8 byte_3a8;
    u8 unknown_3a9[0x3];  // (not used here)
    u32 word_3ac;
    u32 word_3b0;
    u32 word_3b4;
    u32 word_3b8;
    u32 word_3bc;
    u32 word_3c0;
    u32 word_3c4;
    u32 word_3c8;
    u32 word_3cc;
    u8 unknown_3d0[0x8];  // (not used here)
    float float_3d8;
};
GUEST_OFFSET(Local_002230d8_r1_4, word_290, 0x290);
GUEST_OFFSET(Local_002230d8_r1_4, byte_3a4, 0x3a4);
GUEST_OFFSET(Local_002230d8_r1_4, byte_3a5, 0x3a5);
GUEST_OFFSET(Local_002230d8_r1_4, byte_3a6, 0x3a6);
GUEST_OFFSET(Local_002230d8_r1_4, byte_3a7, 0x3a7);
GUEST_OFFSET(Local_002230d8_r1_4, byte_3a8, 0x3a8);
GUEST_OFFSET(Local_002230d8_r1_4, word_3ac, 0x3ac);
GUEST_OFFSET(Local_002230d8_r1_4, word_3b0, 0x3b0);
GUEST_OFFSET(Local_002230d8_r1_4, word_3b4, 0x3b4);
GUEST_OFFSET(Local_002230d8_r1_4, word_3b8, 0x3b8);
GUEST_OFFSET(Local_002230d8_r1_4, word_3bc, 0x3bc);
GUEST_OFFSET(Local_002230d8_r1_4, word_3c0, 0x3c0);
GUEST_OFFSET(Local_002230d8_r1_4, word_3c4, 0x3c4);
GUEST_OFFSET(Local_002230d8_r1_4, word_3c8, 0x3c8);
GUEST_OFFSET(Local_002230d8_r1_4, word_3cc, 0x3cc);
GUEST_OFFSET(Local_002230d8_r1_4, float_3d8, 0x3d8);

struct __attribute__((packed)) Local_002230d8_r2_4 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_002230d8_r2_4, float_0, 0x0);
GUEST_OFFSET(Local_002230d8_r2_4, float_4, 0x4);

struct __attribute__((packed)) Local_002230d8_r2_5 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_002230d8_r2_5, float_0, 0x0);
GUEST_OFFSET(Local_002230d8_r2_5, float_4, 0x4);

struct __attribute__((packed)) Local_002230d8_r2_6 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_002230d8_r2_6, float_0, 0x0);
GUEST_OFFSET(Local_002230d8_r2_6, float_4, 0x4);

inline constexpr u32 vtable_BsMenuMapBase = 0x008edfa0u;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x0060e5c0, u32(u32)> IconBase__IconBase;
inline constexpr guest::Function<0x0081d248, u32(u32, u32)> script__WordFix_21u___WordFix_0081d248;

u32 BsMenuMapBase__BsMenuMapBase(gptr<BsMenuMapBase> bs_menu_map_base, float S0, float S1) {
    u32 r0 = bs_menu_map_base.addr();
    bs_menu_map_base->vtable = vtable_BsMenuMapBase;
    u32 r0_2 = for_each_element(r0 + 4u, 0x60e5c0u, 0x314u, 0xeu);  // (from the original)
    u32 r0_4 = for_each_element(r0_2 + 0x2b18u, 0x60e5c0u, 0x314u, 0xau);  // (from the original)
    u32 r0_6 = for_each_element(r0_4 + 0x1ec8u, 0x60e5c0u, 0x314u, 8u);  // (from the original)
    u32 r0_8 = for_each_element(r0_6 + (0x314u << 3), 0x60e5c0u, 0x314u, 8u);  // (from the original)
    u32 r0_10 = for_each_element(r0_8 + (0x314u << 3), 0x60e5c0u, 0x314u, 0x10u);  // (from the original)
    u32 r0_12 = IconBase__IconBase(r0_10 + 0x3140u);  // (from the original)
    u32 r0_14 = IconBase__IconBase(r0_12 + 0x314u);  // (from the original)
    gptr<Local_002230d8_r1_3> r1_3 = gptr<Local_002230d8_r1_3>(r0_14 + 0x88u);  // (from the original)
    u32 r4 = 0u;
    r1_3->word_28c = r4;
    r1_3->word_2f4 = r4;
    r1_3->word_2f8 = r4;
    u32 r0_17 = for_each_element(r0_14 + 0x384u, 0x125aecu, 0x28u, 2u);  // (from the original)
    *gptr<u32>(r0_17 + 0x50u) = r4;  // (from the original)
    u32 r0_20 = script__WordFix_21u___WordFix_0081d248(r0_17 + 0x54u, 0xb34cu);  // (from the original)
    r0 = r0_20 - 0xb350u;  // (from the original)
    gptr<Local_002230d8_r1_4> r1_4 = gptr<Local_002230d8_r1_4>(r0 + 0xb000u);  // (from the original)
    r1_4->byte_3a4 = u8(r4);
    r1_4->byte_3a5 = u8(r4);
    r1_4->byte_3a6 = u8(r4);
    r1_4->byte_3a7 = u8(r4);
    r1_4->byte_3a8 = u8(r4);
    r1_4->word_3ac = r4;
    r1_4->word_3b0 = r4;
    r1_4->word_3b4 = r4;
    r1_4->word_3b8 = r4;
    r1_4->word_3bc = r4;
    r1_4->word_3c0 = r4;
    r1_4->word_3c4 = r4;
    r1_4->word_3c8 = r4;
    S1 = 0.0f;
    S0 = 1.0f;
    gptr<Local_002230d8_r2_4> r2_4 = gptr<Local_002230d8_r2_4>(r0 + 0xb3d0u);  // (from the original)
    r1_4->word_3cc = r4;
    r2_4->float_0 = S0;
    r2_4->float_4 = S1;
    gptr<Local_002230d8_r2_5> r2_5 = gptr<Local_002230d8_r2_5>(r0 + 0xb3dcu);  // (from the original)
    r1_4->float_3d8 = S1;
    r2_5->float_0 = S0;
    r2_5->float_4 = S0;
    gptr<Local_002230d8_r2_6> r2_6 = gptr<Local_002230d8_r2_6>(r0 + 0xb3e4u);  // (from the original)
    r2_6->float_0 = S0;
    r2_6->float_4 = S0;
    u32 r2 = 1u;
    r1_4->word_290 = r4;
    u32 r1 = r2;
    do {
        u32 r2_7 = r2 + 1u;
        r1 += 2u;
        *gptr<u32>(((r0 + (r2 << 2)) + 0xb000u) + 0x290u) = r4;  // (from the original)
        r2 = r2_7 + 1u;
        *gptr<u32>((r0 + (r2_7 << 2) + 0xb000u) + 0x290u) = r4;  // (from the original)
        guest::preempt();
    } while (s32(r1) < 0x19);  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_002230d8
GUEST_EXPORT_FRAMED(0x002230d8, d_002230d8::BsMenuMapBase__BsMenuMapBase, 0x4010);  // pushes {r4, lr} first, as the original

// f_0022328c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022328c {

inline constexpr u32 vtable_BsMenuMapBase = 0x008edfa0u;
inline constexpr u32 vtable_MapIcon = 0x008f80b8u;
inline constexpr u32 vtable_IconBase = 0x008f8b80u;
inline constexpr u32 vtable_script__WordFix_21u_ = 0x00909d20u;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;
inline constexpr guest::Function<0x0056988c, u32(u32)> destroy_animation;
inline constexpr guest::Function<0x005bf744, u32(u32)> Layout__destructor;

u32 BsMenuMapBase__destructor(gptr<BsMenuMapBase> bs_menu_map_base) {
    bs_menu_map_base->vtable = vtable_BsMenuMapBase;
    bs_menu_map_base->word_fix_21u_vtable = vtable_script__WordFix_21u_;
    u32 r0_1 = bs_menu_map_base.addr() + 0xb350u;  // (from the original)
    destroy_array_elements(r0_1 - 0x54u, 0x56988cu, 0x28u, 2u);  // (from the original)
    bs_menu_map_base->vtable_af78 = vtable_MapIcon;
    u32 r0_3 = r0_1 - 0xf0u;  // (from the original)
    destroy_animation(r0_3);
    u32 r0_4 = r0_3 - 0x28u;  // (from the original)
    destroy_animation(r0_4);
    u32 r0_5 = r0_4 - 0x28u;  // (from the original)
    destroy_animation(r0_5);
    u32 r0_6 = r0_5 - 0x28u;  // (from the original)
    destroy_animation(r0_6);
    bs_menu_map_base->vtable_af78 = vtable_IconBase;
    u32 r0_8 = Layout__destructor(r0_6 - 0x168u);  // (from the original)
    u32 r0_9 = r0_8 - 0x3cu;  // (from the original)
    destroy_animation(r0_9);
    u32 r0_10 = r0_9 - 0x28u;  // (from the original)
    destroy_animation(r0_10);
    u32 r0_11 = r0_10 - 0x28u;  // (from the original)
    destroy_animation(r0_11);
    u32 r0_12 = r0_11 - 0x28u;  // (from the original)
    destroy_animation(r0_12);
    u32 r0_13 = r0_12 - 0x28u;  // (from the original)
    destroy_animation(r0_13);
    u32 r0_14 = r0_13 - 0x28u;  // (from the original)
    destroy_animation(r0_14);
    *gptr<u32>(r0_14 - 0x318u) = vtable_MapIcon;  // (from the original)
    u32 r0_15 = r0_14 - 0x30u;  // (from the original)
    destroy_animation(r0_15);
    u32 r0_16 = r0_15 - 0x28u;  // (from the original)
    destroy_animation(r0_16);
    u32 r0_17 = r0_16 - 0x28u;  // (from the original)
    destroy_animation(r0_17);
    u32 r0_18 = r0_17 - 0x28u;  // (from the original)
    destroy_animation(r0_18);
    *gptr<u32>(r0_18 - 0x270u) = vtable_IconBase;  // (from the original)
    u32 r0_20 = Layout__destructor(r0_18 - 0x168u);  // (from the original)
    u32 r0_21 = r0_20 - 0x3cu;  // (from the original)
    destroy_animation(r0_21);
    u32 r0_22 = r0_21 - 0x28u;  // (from the original)
    destroy_animation(r0_22);
    u32 r0_23 = r0_22 - 0x28u;  // (from the original)
    destroy_animation(r0_23);
    u32 r0_24 = r0_23 - 0x28u;  // (from the original)
    destroy_animation(r0_24);
    u32 r0_25 = r0_24 - 0x28u;  // (from the original)
    destroy_animation(r0_25);
    u32 r0_26 = r0_25 - 0x28u;  // (from the original)
    destroy_animation(r0_26);
    u32 r4_1 = r0_26 - 0xac68u;  // (from the original)
    destroy_array_elements(r0_26 - 0x3144u, 0x60e704u, 0x314u, 0x10u);  // (from the original)
    destroy_array_elements(r4_1 + 0x6284u, 0x60e704u, 0x314u, 8u);  // (from the original)
    destroy_array_elements(r4_1 + 0x49e4u, 0x60e704u, 0x314u, 8u);  // (from the original)
    destroy_array_elements(r4_1 + 0x2b1cu, 0x60e704u, 0x314u, 0xau);  // (from the original)
    destroy_array_elements(r4_1 + 4u, 0x60e704u, 0x314u, 0xeu);  // (from the original)
    return r4_1;
}

}  // namespace d_0022328c
GUEST_EXPORT_FRAMED(0x0022328c, d_0022328c::BsMenuMapBase__destructor, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002236c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The index of the visible label (of 7) of the kind near the height; -1 when none.
namespace d_002236c0 {

struct __attribute__((packed)) MapScreen {
    u8 unknown_0[0x176c];  // (not used here)
    float float_176c;
    u8 unknown_1770[0x554];  // (not used here)
    float float_1cc4;
};
GUEST_OFFSET(MapScreen, float_176c, 0x176c);
GUEST_OFFSET(MapScreen, float_1cc4, 0x1cc4);

struct __attribute__((packed)) Local_002236c0_r3_1 {
    u8 unknown_0[0x1778];  // (not used here)
    float float_1778;
    u8 byte_177c;
};
GUEST_OFFSET(Local_002236c0_r3_1, float_1778, 0x1778);
GUEST_OFFSET(Local_002236c0_r3_1, byte_177c, 0x177c);


u32 MapScreen__find_label_at(gptr<MapScreen> map_screen, u32 r1) {
    u32 r0 = map_screen.addr();
    u32 fpsr = guest::cpu()->fpscr;
    u32 r2 = r0;
    float S0 = map_screen->float_176c;
    float S1 = map_screen->float_1cc4;
    r0 = 0u;
    float S2 = S1 + 9.0f;
    u32 r4 = r2 + 0x2934u;  // (from the original)
    do {
        gptr<Local_002236c0_r3_1> r3_1 = gptr<Local_002236c0_r3_1>(r2 + ((r0 << 6) - r0 * 7u << 2));
        if ((u32(*gptr<u8>(*gptr<u32>(r3_1.addr() + 0x1764u) + 0xb7u)) & 1u) != 0) {  // (from the original)
            S1 = r3_1->float_1778;
            fpsr = fpsr & 0xfffffffu | vfp_cmpf(S0, S1);  // (from the original)
            u32 r3_2 = r3_1->byte_177c;
            if ((fpsr >> 0x1d & 1) && !(fpsr >> 0x1e & 1) || *gptr<u32>(r4) - 1u != r3_2) {  // (from the original)
                fpsr = fpsr & 0xfffffffu | vfp_cmpf(S1, S2);  // (from the original)
                u32 zf_1 = fpsr >> 0x1e & 1;  // (from the original)
                if (!(fpsr >> 0x1d & 1) || zf_1) {  // (from the original)
                    zf_1 = r3_2 == 0;
                }
                if (!zf_1 && r3_2 == r1) {
                    guest::cpu()->s[0] = S0;
                    guest::cpu()->s[1] = S1;
                    return r0;
                }
            }
        }
        r0 += 1u;
        guest::preempt();
    } while (s32(r0) < 7);
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return ~0u;
}

}  // namespace d_002236c0
GUEST_EXPORT_FRAMED(0x002236c0, d_002236c0::MapScreen__find_label_at, 0x10);  // pushes {r4} first, as the original

// f_00223778: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Plays animation `index` (0x28 bytes each, +0xc) on its pane.
namespace d_00223778 {

struct __attribute__((packed)) MapScreen {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(MapScreen, word_4, 0x4);

inline constexpr u32 global_0094fcc4_address = 0x0094fcc4u;
inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> Layout__find_pane;
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> notify_list_objects;

u32 MapScreen__play_pane_animation(gptr<MapScreen> map_screen, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 pane_2 = Layout__find_pane(map_screen->word_4, gptr<u32>(global_0094fcc4_address)[r1], 1u, r3);
    u32 r0_3 = map_screen->word_4;
    frame.release();
    return notify_list_objects(r0_3, (map_screen.addr() + r1 * 0x28u) + 0xcu, pane_2, 0u);  // (from the original)
}

}  // namespace d_00223778
GUEST_EXPORT(0x00223778, d_00223778::MapScreen__play_pane_animation);

// f_0022384c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Hides the 7 labels.
namespace d_0022384c {

inline constexpr guest::Function<0x006a8c1c, u32(u32, u32, u32, u32)> set_flagged_bits_b7;

u32 MapScreen__hide_labels(u32 map_screen) {
    u32 r0_2 = 0;
    u32 r5 = map_screen;
    u32 r4 = 0u;
    do {
        r0_2 = set_flagged_bits_b7(r5 + r4 * 0x314u + 0x110u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 7);
    return r0_2;
}

}  // namespace d_0022384c
GUEST_EXPORT_FRAMED(0x0022384c, d_0022384c::MapScreen__hide_labels, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00223c68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets the 7 labels to their home positions and clears their kinds, then releases the button.
namespace d_00223c68 {

struct __attribute__((packed)) Local_00223c68_r0_3 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_00223c68_r0_3, float_0, 0x0);
GUEST_OFFSET(Local_00223c68_r0_3, float_4, 0x4);
GUEST_OFFSET(Local_00223c68_r0_3, float_8, 0x8);

struct __attribute__((packed)) Local_00223c68_r0_4 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_00223c68_r0_4, byte_b7, 0xb7);

struct __attribute__((packed)) Local_00223c68_r1_2 {
    u8 unknown_0[0x1764];  // (not used here)
    u32 word_1764;
    u8 unknown_1768[0x10];  // (not used here)
    float float_1778;
};
GUEST_OFFSET(Local_00223c68_r1_2, word_1764, 0x1764);
GUEST_OFFSET(Local_00223c68_r1_2, float_1778, 0x1778);

struct __attribute__((packed)) Local_00223c68_r3_2 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_00223c68_r3_2, float_0, 0x0);
GUEST_OFFSET(Local_00223c68_r3_2, float_4, 0x4);
GUEST_OFFSET(Local_00223c68_r3_2, float_8, 0x8);

inline constexpr guest::Function<0x002f6b14, u32(u32, u32, u32, u32)> NodeTree__update_all;
inline constexpr guest::Function<0x002f6e14, u32(u32)> ButtonActionControl__virtual_3;

u32 MapScreen__reset_labels(u32 map_screen, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2) {
    float S0_2 = 0;
    float S1_2 = 0;
    gptr<Local_00223c68_r0_4> r0_4 = gptr<Local_00223c68_r0_4>(0u);
    u32 r1_3 = 0;
    u32 r4 = map_screen;
    u32 r0_1 = map_screen + 0x2220u;  // (from the original)
    NodeTree__update_all(r0_1, r1, r2, r3);
    ButtonActionControl__virtual_3(r0_1);
    r2 = 0u;
    u32 r12 = 0xffu;  // (from the original)
    do {
        u32 r0_2 = (r2 << 6) - ((r2 << 3) - r2);
        r2 += 1u;
        gptr<Local_00223c68_r1_2> r1_2 = gptr<Local_00223c68_r1_2>(r4 + (r0_2 << 2));
        gptr<Local_00223c68_r0_3> r0_3 = gptr<Local_00223c68_r0_3>(r1_2.addr() + 0x1768u);  // (from the original)
        S0_2 = r0_3->float_0;
        S1_2 = r0_3->float_4;
        float S2_2 = r0_3->float_8;
        r1_2->float_1778 = S1_2;
        r0_4 = gptr<Local_00223c68_r0_4>(r1_2->word_1764);
        r1_3 = r1_2.addr() + 0x177cu;  // (from the original)
        gptr<Local_00223c68_r3_2> r3_2 = gptr<Local_00223c68_r3_2>(r0_4.addr() + 0x28u);  // (from the original)
        r3_2->float_0 = S0_2;
        r3_2->float_4 = S1_2;
        r3_2->float_8 = S2_2;
        r0_4->byte_b7 = u8(u32(r0_4->byte_b7) & 0xcfu);  // (from the original)
        *gptr<u8>(r1_3) = u8(r12);
        guest::preempt();
    } while (s32(r2) < 7);
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    return r0_4.addr();
}

}  // namespace d_00223c68
GUEST_EXPORT_FRAMED(0x00223c68, d_00223c68::MapScreen__reset_labels, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00224204: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Adds a marker (id and two bytes) when fewer than 28 exist.
namespace d_00224204 {

struct __attribute__((packed)) MapScreen {
    u8 unknown_0[0x2934];  // (not used here)
    u32 word_2934;
};
GUEST_OFFSET(MapScreen, word_2934, 0x2934);


u32 MapScreen__add_marker(gptr<MapScreen> map_screen, u32 r1_unused, u32 r2, u32 r3) {
    u32 r1_1 = map_screen.addr() + 0x2934u;  // (from the original)
    u32 r12_1 = map_screen->word_2934;
    u32 r4_1 = *gptr<u32>(guest::cpu()->r[13] + 4u);
    if (s32(r12_1) >= 0x1c) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return map_screen.addr();
    }
    *gptr<u32>(map_screen.addr() + (r12_1 << 3) + 0x1cd8u) = r2;  // (from the original)
    *gptr<u8>(map_screen.addr() + (map_screen->word_2934 << 3) + 0x1cdcu) = u8(r4_1);  // (from the original)
    *gptr<u8>(map_screen.addr() + (map_screen->word_2934 << 3) + 0x1cddu) = u8(r3);  // (from the original)
    u32 r0_1 = map_screen->word_2934 + 1u;
    map_screen->word_2934 = r0_1;
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_00224204
GUEST_EXPORT_FRAMED(0x00224204, d_00224204::MapScreen__add_marker, 0x10);  // pushes {r4} first, as the original

// f_0022426c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Attaches the layout and updates the 7 visible icons.
namespace d_0022426c {

struct __attribute__((packed)) MapScreen {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(MapScreen, word_4, 0x4);

inline constexpr guest::Function<0x001323bc, u32(u32, u32, u32, u32)> read_global_975c20;
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32)> LayoutRenderer__draw_on_screen;
inline constexpr guest::Function<0x0060e47c, u32(u32, u32, u32)> MapIcon__virtual_4;
inline constexpr guest::Function<0x006a923c, u32(u32, u32, u32)> holder_flagged_has_flag_b7_bit_0;

u32 MapScreen__attach_icons(gptr<MapScreen> map_screen, u32 r1, u32 r2) {
    u32 r0 = map_screen.addr();
    u32 r0_3 = 0;
    u32 r6 = r0;
    u32 r0_1 = read_global_975c20(r0, r1, r2, guest::cpu()->r[3]);
    LayoutRenderer__draw_on_screen(r0_1, map_screen->word_4, 1u);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    u32 r4 = 0u;
    do {
        u32 r5_1 = r6 + r4 * 0x314u;  // (from the original)
        r0_3 = holder_flagged_has_flag_b7_bit_0(r5_1 + 0x110u, r1, r2);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0_3 != 0) {
            r0_3 = MapIcon__virtual_4(r5_1 + 0x110u, r1, r2);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
        }
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 7);
    guest::cpu()->r[1] = r1;
    return r0_3;
}

}  // namespace d_0022426c
GUEST_EXPORT_FRAMED(0x0022426c, d_0022426c::MapScreen__attach_icons, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002248ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Releases the layout, the 7 labels' layouts and their texts.
namespace d_002248ec {

struct __attribute__((packed)) MapScreen {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(MapScreen, word_4, 0x4);

inline constexpr guest::Function<0x001323b4, u32(u32, u32, u32, u32)> layout_at_10_virtual_8;
inline constexpr guest::Function<0x005e2e04, u32(u32)> TextBox__unlock;

u32 MapScreen__release_labels(gptr<MapScreen> map_screen) {
    u32 r0 = map_screen.addr();
    u32 r0_4 = 0;
    u32 r5 = r0;
    u32 r0_1 = map_screen->word_4;
    if (r0_1 != 0) {
        layout_at_10_virtual_8(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    u32 r4 = 0u;
    do {
        layout_at_10_virtual_8(r5 + r4 * 0x314u + 0x218u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 7);
    r4 = 0u;
    do {
        r0_4 = TextBox__unlock(r5 + ((r4 << 6) - r4 * 7u << 2) + 0x16a0u);  // (from the original)
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 7);
    return r0_4;
}

}  // namespace d_002248ec
GUEST_EXPORT_FRAMED(0x002248ec, d_002248ec::MapScreen__release_labels, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00224950: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Scrolls the list up one step and hides its arrow.
namespace d_00224950 {

struct __attribute__((packed)) ScrollList {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u8 unknown_8[0x80];  // (not used here)
    float float_88;
};
GUEST_OFFSET(ScrollList, word_4, 0x4);
GUEST_OFFSET(ScrollList, float_88, 0x88);

struct __attribute__((packed)) Child {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Child, byte_b7, 0xb7);

inline constexpr guest::Function<0x00224a7c, u32(u32, u32, u32, u32)> MapScreen__set_mode;
inline constexpr guest::Function<0x0056878c, u32(u32, u32)> LayoutObjectWithChild__forward_to_child;

void ScrollList__scroll_up(gptr<ScrollList> scroll_list) {
    float S1_1 = 1.0f;
    float S0_1 = scroll_list->float_88 - S1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    MapScreen__set_mode(scroll_list.addr(), 3u, guest::cpu()->r[2], guest::cpu()->r[3]);
    gptr<Child> child_2 = gptr<Child>(LayoutObjectWithChild__forward_to_child(scroll_list->word_4, 0x22498cu));  // (from the original)
    u32 r1_1 = u32(child_2->byte_b7) & 0xfeu;  // (from the original)
    child_2->byte_b7 = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_00224950
GUEST_EXPORT_FRAMED(0x00224950, d_00224950::ScrollList__scroll_up, 0x4010);  // pushes {r4, lr} first, as the original

// f_00224b10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00224b10 {

struct __attribute__((packed)) Local_00224b10_r0_3 {
    u8 unknown_0[0xfc];  // (not used here)
    u32 word_fc;
    u32 word_100;
    float float_104;
    float float_108;
    float float_10c;
};
GUEST_OFFSET(Local_00224b10_r0_3, word_fc, 0xfc);
GUEST_OFFSET(Local_00224b10_r0_3, word_100, 0x100);
GUEST_OFFSET(Local_00224b10_r0_3, float_104, 0x104);
GUEST_OFFSET(Local_00224b10_r0_3, float_108, 0x108);
GUEST_OFFSET(Local_00224b10_r0_3, float_10c, 0x10c);

struct __attribute__((packed)) Local_00224b10_r1_5 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_00224b10_r1_5, float_0, 0x0);
GUEST_OFFSET(Local_00224b10_r1_5, float_4, 0x4);

inline constexpr u32 vtable_BsMenuMapList = 0x008edfb0u;
inline constexpr guest::Function<0x002b6de0, u32(u32)> construct_button_node;
inline constexpr guest::Function<0x002f7604, u32(u32)> construct_button_action_control;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;

u32 BsMenuMapList__BsMenuMapList(gptr<BsMenuMapList> bs_menu_map_list, float S0) {
    bs_menu_map_list->vtable = vtable_BsMenuMapList;
    bs_menu_map_list->word_4 = 0;
    bs_menu_map_list->word_8 = 0;
    u32 r0_2 = for_each_element((bs_menu_map_list.addr() + 8u) + 4u, 0x125aecu, 0x28u, 6u);  // (from the original)
    gptr<Local_00224b10_r0_3> r0_3 = gptr<Local_00224b10_r0_3>(r0_2 - 0xcu);  // (from the original)
    float S0_1 = 0.0f;
    r0_3->word_fc = 0;
    r0_3->word_100 = 0;
    r0_3->float_104 = S0_1;
    r0_3->float_108 = S0_1;
    r0_3->float_10c = S0_1;
    guest::cpu()->s[0] = S0_1;
    u32 r0_5 = for_each_element(r0_3.addr() + 0x110u, 0x60e5c0u, 0x314u, 7u);  // (from the original)
    u32 r0_7 = for_each_element(r0_5 + 0x158cu, 0x6ab2a0u, 0xe4u, 7u);  // (from the original)
    u32 r0_8 = r0_7 + 0x71cu;  // (from the original)
    construct_button_action_control(r0_8);
    u32 r0_9 = r0_8 + 0xe4u;  // (from the original)
    construct_button_node(r0_9);
    u32 r0_10 = r0_9 + 0xe0u;  // (from the original)
    construct_button_action_control(r0_10);
    u32 r0_12 = for_each_element(r0_10 + 0xe4u, 0x2b6de0u, 0xe0u, 2u);  // (from the original)
    u32 r0_13 = r0_12 + 0x1c0u;  // (from the original)
    construct_button_action_control(r0_13);
    u32 r0_15 = for_each_element(r0_13 + 0xe4u, 0x2b6de0u, 0xe0u, 7u);  // (from the original)
    u32 r0_16 = r0_15 - 0x2304u;  // (from the original)
    float S0_9 = 1.0f;
    gptr<Local_00224b10_r1_5> r1_5 = gptr<Local_00224b10_r1_5>(r0_16 + 0x2924u);  // (from the original)
    r1_5->float_0 = S0_9;
    r1_5->float_4 = S0_9;
    u32 r1_6 = ~0u;
    *gptr<u8>(r0_16 + 0x292cu) = 0;  // (from the original)
    u32 r3_5 = 0x292cu - (r1_6 << 2);  // (from the original)
    u32 r12_1 = r3_5 - (r1_6 << 2);
    u32 r5_1 = r12_1 - (r1_6 << 2);
    *gptr<u32>(r3_5 + r0_16) = 0;
    *gptr<u32>(r12_1 + r0_16) = 0;
    *gptr<u32>(r5_1 + r0_16) = r1_6;
    *gptr<u32>(r5_1 - (r1_6 << 2) + r0_16) = 0;
    *gptr<u32>(r0_16 + 0x2940u) = r1_6;  // (from the original)
    guest::cpu()->r[1] = r1_6;
    guest::cpu()->s[0] = S0_9;
    return r0_16;
}

}  // namespace d_00224b10
GUEST_EXPORT_FRAMED(0x00224b10, d_00224b10::BsMenuMapList__BsMenuMapList, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0022526c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the flag at +0xabc of the child (+0x38) when it exists.
namespace d_0022526c {

struct __attribute__((packed)) Object_0022526c_0 {
    u8 unknown_0[0x38];  // (not used here)
    u32 word_38;
};
GUEST_OFFSET(Object_0022526c_0, word_38, 0x38);


u32 set_child_flag_abc(gptr<Object_0022526c_0> arg0, u32 r1) {
    u32 r0_1 = arg0->word_38;
    if (r0_1 != 0) {
        *gptr<u8>(r0_1 + 0xabcu) = u8(r1);  // (from the original)
    }
    return r0_1;
}

}  // namespace d_0022526c
GUEST_EXPORT(0x0022526c, d_0022526c::set_child_flag_abc);

// f_00225948: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts the effect of field item effect slot `index` (of the table at 0x997c30) when the manager exists.
namespace d_00225948 {

inline constexpr u32 field_item_fx_cells_address = 0x00950694u;
inline constexpr u32 field_item_fx_address = 0x00997c30u;
inline guest::global<u32, 0x00950694> field_item_fx_cells;
inline constexpr guest::Function<0x0014f8ec, u32(u32, u32, u32, u32)> import_thunk_14f8ec;

u32 FieldItemFx__start(u32 field_item_fx) {
    u32 r1_1 = *field_item_fx_cells;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return field_item_fx;
    }
    u32 r0_1 = gptr<u32>(field_item_fx_address)[field_item_fx];
    if (r0_1 == 0) {
        guest::cpu()->r[1] = field_item_fx_address;
        return r0_1;
    }
    return import_thunk_14f8ec(r0_1, 1u, 0u, guest::cpu()->r[3]);
}

}  // namespace d_00225948
GUEST_EXPORT(0x00225948, d_00225948::FieldItemFx__start);

// f_00225984: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Scans the map's cells for the items that show effects.
namespace d_00225984 {

struct __attribute__((packed)) Local_00225984_r1_1 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Local_00225984_r1_1, word_8, 0x8);

inline constexpr u32 field_item_fx_cells_address = 0x00950694u;
inline constexpr u32 field_item_fx_address = 0x00997c30u;
inline guest::global<u16, 0x00887312> global_00887312;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> current_scene_id;
inline constexpr guest::Function<0x002fb328, u32(u32, u32)> get_save_data;
inline constexpr guest::Function<0x002fcb84, u32(u32, u32, u32, u32)> Item__has_number;
inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> read_map_table;
inline constexpr guest::Function<0x00317148, u32(u32, u32, u32, u32)> CellGrid__cell_at;
inline constexpr guest::Function<0x0057b9dc, u32(u32, u32, u32, u32)> StringPool__find_message_mode_2;
inline constexpr guest::Function<0x006a6e1c, u32(u32, u32, u32, u32)> tile_corner_with_height;
inline constexpr guest::Function<0x007482b8, u32(u32, u32)> GridRect__width_2;
inline constexpr guest::Function<0x0074830c, u32(u32)> GridRect__height;
inline constexpr guest::Function<0x0075281c, u32(u32, u32, u32, u32)> GridCellSmall__cell_at_0075281c;

struct __attribute__((packed)) Frame_00225984 {
    u32 word_0;
    u32 word_4;
    u32 map;
    u32 word_c;
    u8 unknown_10[0xc];  // (not read or written by name)
    u32 field_item_fx;
    u8 unknown_20[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00225984, word_0, 0x0);
GUEST_OFFSET(Frame_00225984, word_4, 0x4);
GUEST_OFFSET(Frame_00225984, map, 0x8);
GUEST_OFFSET(Frame_00225984, word_c, 0xc);
GUEST_OFFSET(Frame_00225984, field_item_fx, 0x1c);
GUEST_SIZE(Frame_00225984, 0x24);

void FieldItemFx__scan_cells(u32 field_item_fx, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00225984> frame;  // the original's stack frame
    u32 r4 = 0;
    u32 r5 = 0;
    u32 r0_7 = 0;
    u32 r1_4 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r7_1 = 0;
    u32 scene = current_scene_id(field_item_fx, r1, r2, r3);
    gptr<Local_00225984_r1_1> r1_1 = gptr<Local_00225984_r1_1>(guest::cpu()->r[1]);
    if (scene != 0) {
        guest::cpu()->r[1] = r1_1.addr();
        return;
    }
    u32 save_data_2 = get_save_data(scene, r1_1.addr());
    u32 r8 = 0u;
    r2 = save_data_2 + 0x6fe78u;  // (from the original)
    field_item_fx = r8;
    r3 = field_item_fx_address;
    r1 = field_item_fx;
    u32 r10 = r8;
    for (;;) {
        r1_1 = gptr<Local_00225984_r1_1>(u32(*gptr<u8>(r2 + r1 * 0xcu + 0xau)));  // (from the original)
        if ((r1_1.addr() & 1u) != 0) {
            r8 += 1u;
        } else {
            r1_1 = gptr<Local_00225984_r1_1>(r3 + (field_item_fx << 2));
            if (r1_1->word_8 != 0) {
                r1_1->word_8 = r10;
            }
        }
        field_item_fx += 1u;
        u32 res_1 = field_item_fx - 4u;
        u32 nf = res_1 >> 0x1f;  // (from the original)
        u32 vf = ((field_item_fx ^ 4u) & (field_item_fx ^ res_1)) >> 0x1f;  // (from the original)
        if (nf == vf) {
            break;
        }
        r1 = field_item_fx;
        if (nf == vf) {
            r1 = 0u;
        }
        guest::preempt();
    }
    if (r8 == 0) {
        guest::cpu()->r[1] = r1_1.addr();
        return;
    }
    u32 map_2 = read_map_table(1u, r1_1.addr(), r2, r3);
    r1_1 = gptr<Local_00225984_r1_1>(guest::cpu()->r[1]);
    frame->map = map_2;
    if (map_2 == 0) {
        guest::cpu()->r[1] = r1_1.addr();
        return;
    }
    u32 r0_4 = GridRect__width_2(map_2, r1_1.addr());
    u32 r0_6 = GridRect__height(frame->map);
    r3 = guest::cpu()->r[3];
    u32 r1_3 = r0_4 - 1u;
    u32 r6 = 0u;
    frame->word_c = r1_3;
    frame->word_4 = 1;
    if (r1_3 <= 1u) {
        guest::cpu()->r[1] = r1_3;
        return;
    }
    u32 r11 = field_item_fx_cells_address;
    field_item_fx = r0_6 - 1u;
    frame->field_item_fx = field_item_fx;
L_225a50:;
    u32 r9 = 1u;
    if (field_item_fx <= 1u) {
        goto L_225b60;
    }
L_225a5c:;
    r0_7 = frame->map;
    r1_4 = frame->word_4;
    r0_8 = CellGrid__cell_at(r0_7, r1_4, r9, r3);
    r0_9 = GridCellSmall__cell_at_0075281c(r0_8, 0u, 0u, 0u);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0_9;
    r5 = 0u;
L_225a84:;
    if (r4 == 0) {
        goto L_225b40;
    }
    r0_10 = Item__has_number(r4, 0x7ff8u, r2, r3);  // (from the original)
    r1_1 = gptr<Local_00225984_r1_1>(guest::cpu()->r[1]);
    if (r0_10 == 0) {
        u32 r0_11 = Item__has_number(r4, 0x7ff9u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1_1 = gptr<Local_00225984_r1_1>(guest::cpu()->r[1]);
        if (r0_11 != 0) {
            r7_1 = 1u;
        } else {
            u32 r0_12 = Item__has_number(r4, 0x7ffau, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            r1_1 = gptr<Local_00225984_r1_1>(guest::cpu()->r[1]);
            if (r0_12 != 0) {
                r7_1 = 2u;
            } else {
                u32 r0_13 = Item__has_number(r4, 0x7ffbu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                r1_1 = gptr<Local_00225984_r1_1>(guest::cpu()->r[1]);
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_13 != 0) {
                    r7_1 = 3u;
                } else {
                    goto L_225b40;
                }
            }
        }
    } else {
        r7_1 = 0u;
    }
    r6 += 1u;
    if (r6 <= r8) {
        frame->word_0 = r5 >> 4;
        tile_corner_with_height(frame.at(0x10).addr(), frame->word_4, r9, r5 & 0xfu);  // (from the original)
        frame->word_0 = r10;
        u32 talk = *gptr<u32>(r11);
        u32 string_pool = *global_00887312;
        StringPool__find_message_mode_2(string_pool, talk, r7_1 + 2u, frame.at(0x10).addr());  // (from the original)
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        goto L_225b40;
    }
    guest::cpu()->r[1] = r1_1.addr();
    return;
L_225b40:;
    r5 += 1u;
    r4 += 4u;
    if (r5 < 0x100u) {  // (from the original)
        guest::preempt();
        goto L_225a84;
    }
    r9 += 1u;
    if (r9 < frame->field_item_fx) {
        guest::preempt();
        goto L_225a5c;
    }
L_225b60:;
    r1_3 = frame->word_c;
    u32 r0_16 = frame->word_4 + 1u;
    frame->word_4 = r0_16;
    if (r0_16 < r1_3) {
        field_item_fx = frame->field_item_fx;
        guest::preempt();
        goto L_225a50;
    }
    guest::cpu()->r[1] = r1_3;
}

}  // namespace d_00225984
GUEST_EXPORT_FRAMED(0x00225984, d_00225984::FieldItemFx__scan_cells, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_00226750: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears bit 4 of each of the 6 effect slots' flags.
namespace d_00226750 {

struct __attribute__((packed)) Local_00226750_r1_1 {
    u8 unknown_0[0x2];  // (not used here)
    u8 byte_2;
};
GUEST_OFFSET(Local_00226750_r1_1, byte_2, 0x2);

inline constexpr u32 field_item_fx_address = 0x00997c30u;

u32 FieldItemFx__clear_flags() {
    gptr<Local_00226750_r1_1> r1_1 = gptr<Local_00226750_r1_1>(0u);
    u32 r2 = field_item_fx_address;
    u32 r0 = 0u;
    do {
        r1_1 = gptr<Local_00226750_r1_1>(gptr<u32>(r2)[r0]);
        if (r1_1.addr() != 0) {
            r1_1 = gptr<Local_00226750_r1_1>(r1_1.addr() + 0x5adu);  // (from the original)
            r1_1->byte_2 = u8(u32(r1_1->byte_2) & ~0x10u);  // (from the original)
        }
        r0 += 1u;
        guest::preempt();
    } while (s32(r0) < 6);
    guest::cpu()->r[1] = r1_1.addr();
    return r0;
}

}  // namespace d_00226750
GUEST_EXPORT(0x00226750, d_00226750::FieldItemFx__clear_flags);

// f_002267e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets the 2 special slots and the 6 effect slots.
namespace d_002267e4 {

inline constexpr u32 global_00997c48_address = 0x00997c48u;

u32 FieldItemFx__reset() {
    u32 r1_2 = 0;
    u32 r3 = global_00997c48_address;
    u32 r0 = 0u;
    u32 r2 = r0;
    u32 r12 = r3 - 0x18u;  // (from the original)
    do {
        u32 r1_1 = r0;
        if (r0 >= 2u) {
            r1_1 = 0u;
        }
        r1_2 = r3 + r1_1 * 0x14u;  // (from the original)
        *gptr<u8>(r1_2 + 0x10u) = u8(r2);  // (from the original)
        if (r0 < 6u) {
            *gptr<u32>(r12 + (r0 << 2)) = r2;
        }
        r0 += 1u;
        guest::preempt();
    } while (r0 < 2u);
    guest::cpu()->r[1] = r1_2;
    return r0;
}

}  // namespace d_002267e4
GUEST_EXPORT(0x002267e4, d_002267e4::FieldItemFx__reset);

// f_00226828: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Picks up the effect items in the block.
namespace d_00226828 {

struct __attribute__((packed)) Local_00226828_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00226828_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_00226828_ea_2, word_4, 0x4);

inline constexpr guest::Function<0x002fcb84, u32(u32, u32, u32, u32)> Item__has_number;
inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> read_map_table;
inline constexpr guest::Function<0x00317148, u32(u32, u32, u32, u32)> CellGrid__cell_at;
inline constexpr guest::Function<0x006a6e90, u32(u32, u32, u32, u32)> position_of_block;
inline constexpr guest::Function<0x006fb50c, u32(u32, u32, u32)> pick_up_item_into_slots;
inline constexpr guest::Function<0x007482b8, u32(u32, u32)> GridRect__width_2;
inline constexpr guest::Function<0x0074830c, u32(u32)> GridRect__height;
inline constexpr guest::Function<0x0075281c, u32(u32, u32, u32, u32)> GridCellSmall__cell_at_0075281c;

struct __attribute__((packed)) Frame_00226828 {
    u32 word_0;
    u32 word_4;
    u32 map;
    u8 unknown_c[0x4];  // (not read or written by name)
    u32 map_10;
    u32 word_14;
    u32 word_18;
    u8 unknown_1c[0x4];  // (not read or written by name)
    u32 word_20;
    u8 unknown_24[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00226828, word_0, 0x0);
GUEST_OFFSET(Frame_00226828, word_4, 0x4);
GUEST_OFFSET(Frame_00226828, map, 0x8);
GUEST_OFFSET(Frame_00226828, map_10, 0x10);
GUEST_OFFSET(Frame_00226828, word_14, 0x14);
GUEST_OFFSET(Frame_00226828, word_18, 0x18);
GUEST_OFFSET(Frame_00226828, word_20, 0x20);
GUEST_SIZE(Frame_00226828, 0x2c);

u32 FieldItemFx__pick_up_in_block(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00226828> frame;  // the original's stack frame
    u32 map_2 = read_map_table(1u, r1, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    frame->map_10 = map_2;
    if (map_2 != 0) {
        u32 r0_2 = GridRect__width_2(map_2, r1_1);
        map_2 = GridRect__height(frame->map_10);
        r3 = guest::cpu()->r[3];
        r1_1 = r0_2 - 1u;
        frame->word_20 = r1_1;
        frame->map = 1;
        if (r1_1 > 1u) {
            u32 r9 = 0x7ff8u;  // (from the original)
            u32 r8 = ~0u;
            u32 r7 = map_2 - 1u;
            u32 r10 = r9 | 1u;
            u32 r11 = r10 + 1u;
            do {
                u32 r6 = 1u;
                if (r7 > 1u) {
                    do {
                        u32 cell_2 = CellGrid__cell_at(frame->map_10, frame->map, r6, r3);
                        u32 r0_6 = GridCellSmall__cell_at_0075281c(cell_2, 0u, 0u, 0u);
                        r2 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
                        u32 r5 = r0_6;
                        u32 r4 = 0u;
                        do {
                            if (r5 != 0) {
                                u32 r0_7 = Item__has_number(r5, r9, r2, r3);
                                if (r0_7 == 0) {
                                    u32 r0_8 = Item__has_number(r5, r10, guest::cpu()->r[2], guest::cpu()->r[3]);
                                    if (r0_8 == 0) {
                                        u32 r0_9 = Item__has_number(r5, r11, guest::cpu()->r[2], guest::cpu()->r[3]);
                                        if (r0_9 == 0) {
                                            u32 r0_10 = Item__has_number(r5, 0x7ffbu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                                            r2 = guest::cpu()->r[2];
                                            r3 = guest::cpu()->r[3];
                                            if (r0_10 == 0) {
                                                goto L_226954;
                                            }
                                        }
                                    }
                                }
                                frame->word_14 = r8;
                                frame->word_4 = r4 >> 4;
                                frame->word_0 = r4 & 0xfu;  // (from the original)
                                u32 map = frame->map;
                                frame->word_18 = r8;
                                position_of_block(frame.at(0x14).addr(), frame.at(0x18).addr(), map, r6);  // (from the original)
                                u32 map_10 = frame->map_10;
                                gptr<Local_00226828_ea_2> ea_2 = gptr<Local_00226828_ea_2>(frame.at(0x14).addr());  // (from the original)
                                pick_up_item_into_slots(ea_2->word_0, ea_2->word_4, map_10);
                                r2 = guest::cpu()->r[2];
                                r3 = guest::cpu()->r[3];
                            }
L_226954:;
                            r4 += 1u;
                            r5 += 4u;
                            guest::preempt();
                        } while (r4 < 0x100u);  // (from the original)
                        r6 += 1u;
                        guest::preempt();
                    } while (r6 < r7);
                }
                r1_1 = frame->word_20;
                map_2 = frame->map + 1u;
                frame->map = map_2;
                guest::preempt();
            } while (map_2 < r1_1);
        }
    }
    guest::cpu()->r[1] = r1_1;
    return map_2;
}

}  // namespace d_00226828
GUEST_EXPORT_FRAMED(0x00226828, d_00226828::FieldItemFx__pick_up_in_block, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_00226ee8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Releases the two models: their animations, models, loads and menu parts, resetting their states.
namespace d_00226ee8 {

struct __attribute__((packed)) Local_00226ee8_r6_2 {
    u8 unknown_0[0x23c];  // (not used here)
    u32 word_23c;
    u8 unknown_240[0x14];  // (not used here)
    u32 word_254;
};
GUEST_OFFSET(Local_00226ee8_r6_2, word_23c, 0x23c);
GUEST_OFFSET(Local_00226ee8_r6_2, word_254, 0x254);

inline constexpr guest::Function<0x002f73b8, u32(u32, u32, u32, u32)> unload_split_part;
inline constexpr guest::Function<0x004ecb2c, u32(u32, u32, u32, u32)> material_anim_virtual_5;
inline constexpr guest::Function<0x004ecec8, u32(u32, u32, u32, u32)> g3d__MorphSkeletalAnim__virtual_5;
inline constexpr guest::Function<0x004f1270, u32(u32, u32, u32, u32)> model_virtual_3;
inline constexpr guest::Function<0x00537028, u32(u32)> unload_menu_part;

u32 ModelPair__release(u32 model_pair) {
    u32 r5 = model_pair;
    u32 r4 = 0u;
    do {
        u32 r0_1 = r5 + (r4 << 5);
        u32 r1_1 = *gptr<u32>(r0_1 + 0x270u);  // (from the original)
        if (r1_1 != 0) {
            material_anim_virtual_5(r0_1 + 0x268u, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        }
        u32 r6_1 = r4 + (r4 << 1);
        u32 r0_3 = r5 + (r6_1 << 3);
        u32 r1_2 = *gptr<u32>(r0_3 + 0x2b0u);  // (from the original)
        if (r1_2 != 0) {
            g3d__MorphSkeletalAnim__virtual_5(r0_3 + 0x2a8u, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            r1_2 = guest::cpu()->r[1];
        }
        gptr<Local_00226ee8_r6_2> r6_2 = gptr<Local_00226ee8_r6_2>(r5 + (r6_1 << 2));
        if (r6_2->word_23c != 0) {
            model_virtual_3(r6_2.addr() + 0x238u, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            r1_2 = guest::cpu()->r[1];
        }
        if (r6_2->word_254 != 0) {
            model_virtual_3(r6_2.addr() + 0x250u, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            r1_2 = guest::cpu()->r[1];
        }
        u32 r6_3 = r5 + (r4 + (r4 << 5) << 3);
        unload_split_part(r6_3 + 0x2d8u, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        unload_split_part(r6_3 + 0x4e8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        unload_split_part(r6_3 + 0x6f8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        unload_menu_part(r5 + (r4 + (r4 << 2) + (r4 << 6) << 2) + 0x9f4u);  // (from the original)
        r4 += 1u;
        guest::preempt();
    } while (r4 < 2u);
    *gptr<u8>(r5 + 0xcdeu) = 0;  // (from the original)
    *gptr<u8>(r5 + 0x235u) = 2;  // (from the original)
    *gptr<u8>(r5 + 0x234u) = 2;  // (from the original)
    guest::cpu()->r[1] = 0u;
    return 2u;
}

}  // namespace d_00226ee8
GUEST_EXPORT_FRAMED(0x00226ee8, d_00226ee8::ModelPair__release, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00228dec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00228dec {

inline constexpr u32 vtable_BsStrcCatalog = 0x008ee0c4u;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;
inline constexpr guest::Function<0x00317dec, u32(u32)> ssys__ma__HeapAllocator__destructor;
inline constexpr guest::Function<0x00317e2c, u32(u32)> g3d__ResourceLoader__destructor;
inline constexpr guest::Function<0x004ecbe0, u32(u32)> g3d__MaterialAnim__destructor;
inline constexpr guest::Function<0x004ecf70, u32(u32, u32, u32, u32)> g3d__SkeletalAnim__destructor;
inline constexpr guest::Function<0x004edd84, u32(u32)> set_base_vtable_004edd84;
inline constexpr guest::Function<0x004f14ac, u32(u32)> g3d__Model__destructor;
inline constexpr guest::Function<0x00521ae0, u32(u32, u32)> do_nothing_00521ae0;

u32 BsStrcCatalog__destructor(gptr<BsStrcCatalog> bs_strc_catalog, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    bs_strc_catalog->vtable = vtable_BsStrcCatalog;
    u32 r0_1 = bs_strc_catalog.addr() + 0x1150u;  // (from the original)
    g3d__SkeletalAnim__destructor(r0_1, vtable_BsStrcCatalog, r2, r3);
    g3d__MaterialAnim__destructor(r0_1 - 0x20u);  // (from the original)
    set_base_vtable_004edd84(r0_1 - 0x2cu);  // (from the original)
    g3d__ResourceLoader__destructor(r0_1 - 0x134u);  // (from the original)
    set_base_vtable_004edd84(r0_1 - 0x140u);  // (from the original)
    g3d__ResourceLoader__destructor(r0_1 - 0x248u);  // (from the original)
    g3d__Model__destructor(r0_1 - 0x254u);  // (from the original)
    g3d__ResourceLoader__destructor(r0_1 - 0x35cu);  // (from the original)
    g3d__Model__destructor(r0_1 - 0x368u);  // (from the original)
    g3d__ResourceLoader__destructor(r0_1 - 0x470u);  // (from the original)
    destroy_array_elements(r0_1 - 0x534u, 0x250560u, 0x60u, 2u);  // (from the original)
    destroy_array_elements(r0_1 - 0x75cu, 0x53721cu, 0x114u, 2u);  // (from the original)
    destroy_array_elements(r0_1 - 0x848u, 0x58dc70u, 0x70u, 2u);  // (from the original)
    destroy_array_elements(r0_1 - 0xa58u, 0x317e2cu, 0x108u, 2u);  // (from the original)
    destroy_array_elements(r0_1 - 0xc68u, 0x317e2cu, 0x108u, 2u);  // (from the original)
    destroy_array_elements(r0_1 - 0xe78u, 0x317e2cu, 0x108u, 2u);  // (from the original)
    destroy_array_elements(r0_1 - 0xea8u, 0x4ecf70u, 0x18u, 2u);  // (from the original)
    destroy_array_elements(r0_1 - 0xee8u, 0x4ecbe0u, 0x20u, 2u);  // (from the original)
    destroy_array_elements(r0_1 - 0xf00u, 0x4edd84u, 0xcu, 2u);  // (from the original)
    destroy_array_elements(r0_1 - 0xf18u, 0x4edd84u, 0xcu, 2u);  // (from the original)
    g3d__ResourceLoader__destructor(r0_1 - 0x1024u);  // (from the original)
    g3d__ResourceLoader__destructor(r0_1 - 0x112cu);  // (from the original)
    ssys__ma__HeapAllocator__destructor(r0_1 - 0x1134u);  // (from the original)
    ssys__ma__HeapAllocator__destructor(r0_1 - 0x113cu);  // (from the original)
    frame.release();
    return do_nothing_00521ae0(r0_1 - 0x1150u, guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_00228dec
GUEST_EXPORT(0x00228dec, d_00228dec::BsStrcCatalog__destructor);

// f_00228f74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Loads the rain shader (on the weather heap).
namespace d_00228f74 {

inline constexpr u32 weather_heap_address = 0x00952c48u;
inline constexpr u32 global_009984bc_address = 0x009984bcu;
inline guest::global<u32, 0x00952c48> weather_heap;
inline constexpr guest::Function<0x00125b38, u32(u32, u32, u32, u32)> FileLoader__load;

u32 load_rain_shader() {
    return FileLoader__load(global_009984bc_address, 0x228f90u, *weather_heap, 0x80u);  // (from the original)
}

}  // namespace d_00228f74
GUEST_EXPORT(0x00228f74, d_00228f74::load_rain_shader);

// f_00229c50: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The weather particle kind: the override (+0x48a0) in mode 1, else 0x20 for rain and 0x80 for snow.
namespace d_00229c50 {

struct __attribute__((packed)) Local_00229c50_r4_1 {
    u8 unknown_0[0xe];  // (not used here)
    u8 byte_e;
    u8 unknown_f[0x4891];  // (not used here)
    u32 word_48a0;
};
GUEST_OFFSET(Local_00229c50_r4_1, byte_e, 0xe);
GUEST_OFFSET(Local_00229c50_r4_1, word_48a0, 0x48a0);

inline constexpr u32 global_00950834_address = 0x00950834u;
inline constexpr guest::Function<0x0062f03c, u32(u32, u32, u32, u32)> current_weather_type;

u32 weather_particle_kind() {
    u32 r0_1 = global_00950834_address;
    gptr<Local_00229c50_r4_1> r4_1 = gptr<Local_00229c50_r4_1>(*gptr<u32>(r0_1 + 4u));
    if (r4_1.addr() != 0) {
        r0_1 = r4_1->byte_e;
        if (r0_1 == 1u) {
            return r4_1->word_48a0;
        }
    }
    u32 weather_2 = current_weather_type(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (weather_2 == 3u) {
        return 0x20u;  // (from the original)
    }
    return weather_2 == 4u ? 0x80u : 0u;  // (from the original)
}

}  // namespace d_00229c50
GUEST_EXPORT_FRAMED(0x00229c50, d_00229c50::weather_particle_kind, 0x4010);  // pushes {r4, lr} first, as the original

// f_0022a250: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Loads the snow shader (on the weather heap).
namespace d_0022a250 {

inline constexpr u32 weather_heap_address = 0x00952c48u;
inline constexpr u32 global_009984dc_address = 0x009984dcu;
inline guest::global<u32, 0x00952c48> weather_heap;
inline constexpr guest::Function<0x00125b38, u32(u32, u32, u32, u32)> FileLoader__load;

u32 load_snow_shader() {
    return FileLoader__load(global_009984dc_address, 0x22a26cu, *weather_heap, 0x80u);  // (from the original)
}

}  // namespace d_0022a250
GUEST_EXPORT(0x0022a250, d_0022a250::load_snow_shader);

// f_0022ba54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022ba54 {

inline constexpr u32 vtable_CameraCatalog = 0x008ee1e4u;
inline constexpr guest::Function<0x001a113c, u32(u32, u32)> CameraCatalog__set;

u32 CameraCatalog__CameraCatalog(gptr<CameraCatalog> camera_catalog) {
    float S0_1 = 0.0f;
    camera_catalog->float_4 = S0_1;
    camera_catalog->float_8 = S0_1;
    camera_catalog->float_c = S0_1;
    camera_catalog->float_10 = S0_1;
    camera_catalog->word_14 = std::bit_cast<u32>(S0_1);
    camera_catalog->word_18 = std::bit_cast<u32>(S0_1);
    float S0_2 = 1.0f;
    camera_catalog->half_1c = 0;
    camera_catalog->half_1e = 0;
    camera_catalog->float_20 = S0_2;
    camera_catalog->vtable = vtable_CameraCatalog;
    guest::cpu()->s[0] = S0_2;
    CameraCatalog__set(camera_catalog.addr(), 0x8572a8u);  // (from the original)
    return camera_catalog.addr();
}

}  // namespace d_0022ba54
GUEST_EXPORT_FRAMED(0x0022ba54, d_0022ba54::CameraCatalog__CameraCatalog, 0x4010);  // pushes {r4, lr} first, as the original

// f_0022bac4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Plays the shutter animation on its pane.
namespace d_0022bac4 {

inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> Layout__find_pane;
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> notify_list_objects;

void CameraShutter__play(u32 camera_shutter, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 pane_2 = Layout__find_pane(camera_shutter + 0x24u, 0x22baf4u, 1u, r3);  // (from the original)
    frame.release();
    notify_list_objects(pane_2, camera_shutter + 0x3b8u, pane_2, 0u);
    return;  // (from the original)
}

}  // namespace d_0022bac4
GUEST_EXPORT(0x0022bac4, d_0022bac4::CameraShutter__play);

// f_0022bb00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Detaches the shutter layout from the layout system.
namespace d_0022bb00 {

inline constexpr guest::Function<0x001323bc, u32(u32)> read_global_975c20;
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32)> LayoutRenderer__draw_on_screen;

void CameraShutter__detach(u32 camera_shutter) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = read_global_975c20(camera_shutter);
    frame.release();
    LayoutRenderer__draw_on_screen(r0_1, camera_shutter + 0x24u, 0u);
    return;  // (from the original)
}

}  // namespace d_0022bb00
GUEST_EXPORT(0x0022bb00, d_0022bb00::CameraShutter__detach);

// f_0022bb1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Loads the shutter layout and its animation.
namespace d_0022bb1c {

struct __attribute__((packed)) Object_0022bb1c_0 {
    u8 unknown_0[0x30];  // (not used here)
    u8 byte_30;
    u8 unknown_31[0xdf];  // (not used here)
    u32 word_110;
};
GUEST_OFFSET(Object_0022bb1c_0, byte_30, 0x30);
GUEST_OFFSET(Object_0022bb1c_0, word_110, 0x110);

inline guest::global<u32, 0x00952cc0> home_btn_prohibition_instance;
inline constexpr guest::Function<0x00567d60, u32(u32, u32, u32, u32)> bind_resource_once;
inline constexpr guest::Function<0x00569184, u32(u32, u32, u32, u32)> Layout__virtual_4;
inline constexpr guest::Function<0x005695e4, u32(u32, u32, u32, u32)> construct_dummy_layout;

void CameraShutter__load(gptr<Object_0022bb1c_0> camera_shutter, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    bind_resource_once(camera_shutter.addr() + 0x170u, *home_btn_prohibition_instance + 0x27cu, r2, r3);  // (from the original)
    camera_shutter->word_110 = camera_shutter.addr() + 0x170u;  // (from the original)
    Layout__virtual_4(camera_shutter.addr() + 0x24u, 0x22bb74u, 0u, 0x500u);  // (from the original)
    camera_shutter->byte_30 = 0x8c;  // (from the original)
    frame.release();
    construct_dummy_layout(camera_shutter.addr() + 0x3b8u, 0x22bb88u, camera_shutter.addr() + 0x170u, guest::cpu()->r[3]);
    return;  // (from the original)
}

}  // namespace d_0022bb1c
GUEST_EXPORT(0x0022bb1c, d_0022bb1c::CameraShutter__load);

// f_0022bba4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Releases the shutter layout.
namespace d_0022bba4 {

inline constexpr guest::Function<0x001323b4, u32(u32, u32, u32, u32)> layout_at_10_virtual_8;

void CameraShutter__release(u32 camera_shutter) {
    layout_at_10_virtual_8(camera_shutter + 0x24u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0022bba4
GUEST_EXPORT(0x0022bba4, d_0022bba4::CameraShutter__release);

// f_0022bbac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Unless busy, starts the shutter animation from 0.
namespace d_0022bbac {

struct __attribute__((packed)) Object_0022bbac_0 {
    u8 unknown_0[0x3d4];  // (not used here)
    u8 byte_3d4;
};
GUEST_OFFSET(Object_0022bbac_0, byte_3d4, 0x3d4);

inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> Layout__find_pane;
inline constexpr guest::Function<0x00568630, u32(u32, u32, u32, u32)> notify_objects_of_list;
inline constexpr guest::Function<0x005697e0, u32(u32, u32)> Animation__set_value;

void CameraShutter__start(gptr<Object_0022bbac_0> camera_shutter, u32 r1, u32 r2_unused, u32 r3, float S0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    if (camera_shutter->byte_3d4 != 0) {
        return;
    }
    u32 pane_2 = Layout__find_pane(camera_shutter.addr() + 0x24u, 0x22bbf8u, 1u, r3);  // (from the original)
    notify_objects_of_list(pane_2, camera_shutter.addr() + 0x3b8u, pane_2, 0u);  // (from the original)
    float S0_2 = 0.0f;
    guest::cpu()->s[0] = S0_2;
    frame.release();
    Animation__set_value(camera_shutter.addr() + 0x3b8u, guest::cpu()->r[1]);
    return;  // (from the original)
}

}  // namespace d_0022bbac
GUEST_EXPORT(0x0022bbac, d_0022bbac::CameraShutter__start);

// f_0022bc08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Advances the shutter animation and updates the layout.
namespace d_0022bc08 {

inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> Layout__virtual_3;
inline constexpr guest::Function<0x00569544, u32(u32, u32, u32, u32)> FrameControl__advance;

void CameraShutter__update(u32 camera_shutter) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    FrameControl__advance(camera_shutter + 0x3b8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    frame.release();
    Layout__virtual_3(camera_shutter + 0x24u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return;  // (from the original)
}

}  // namespace d_0022bc08
GUEST_EXPORT(0x0022bc08, d_0022bc08::CameraShutter__update);

// f_0022bc80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Loads the button position layout and binds the button to its pane.
namespace d_0022bc80 {

struct __attribute__((packed)) ButtonPos {
    u8 unknown_0[0x10];  // (not used here)
    u8 byte_10;
    u8 unknown_11[0xdf];  // (not used here)
    u32 word_f0;
    u8 unknown_f4[0x2b0];  // (not used here)
    u32 word_3a4;
};
GUEST_OFFSET(ButtonPos, byte_10, 0x10);
GUEST_OFFSET(ButtonPos, word_f0, 0xf0);
GUEST_OFFSET(ButtonPos, word_3a4, 0x3a4);

inline constexpr u32 button_positions_address = 0x00951658u;
inline constexpr guest::Function<0x002ccfd4, u32(u32)> TextLabel__bind_font;
inline constexpr guest::Function<0x002e0374, u32(u32, u32)> ButtonList__set_child;
inline constexpr guest::Function<0x0056878c, u32(u32, u32)> LayoutObjectWithChild__forward_to_child;
inline constexpr guest::Function<0x00569184, u32(u32, u32, u32, u32)> Layout__virtual_4;

u32 ButtonPos__load(gptr<ButtonPos> button_pos, u32 r1) {
    button_pos->word_f0 = button_pos.addr() + 0x150u;  // (from the original)
    Layout__virtual_4(button_pos.addr() + 4u, 0x857a40u, 0u, 0x2500u);  // (from the original)
    button_pos->byte_10 = 0x9b;  // (from the original)
    TextLabel__bind_font(button_pos.addr() + 0x398u);  // (from the original)
    button_pos->word_3a4 = button_pos.addr() + 4u;
    u32 child_2 = LayoutObjectWithChild__forward_to_child(button_pos.addr() + 4u, gptr<u32>(button_positions_address)[r1]);
    ButtonList__set_child(button_pos.addr() + 0x398u, child_2);  // (from the original)
    return 1u;
}

}  // namespace d_0022bc80
GUEST_EXPORT_FRAMED(0x0022bc80, d_0022bc80::ButtonPos__load, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0022bcec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Releases the button and its layout parts; true.
namespace d_0022bcec {

inline constexpr guest::Function<0x00132364, u32(u32)> release_layout_parts;
inline constexpr guest::Function<0x002cd0e0, u32(u32, u32, u32, u32)> ButtonList__update_all;

u32 ButtonPos__release(u32 button_pos) {
    ButtonList__update_all(button_pos + 0x398u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    release_layout_parts(button_pos + 0x150u);  // (from the original)
    return 1u;
}

}  // namespace d_0022bcec
GUEST_EXPORT_FRAMED(0x0022bcec, d_0022bcec::ButtonPos__release, 0x4010);  // pushes {r4, lr} first, as the original

// f_0022bdf0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Shows the button pair on the right and left panes.
namespace d_0022bdf0 {

inline constexpr guest::Function<0x00268928, u32(u32, u32, u32)> ButtonList__set_children;
inline constexpr guest::Function<0x002cd3d0, u32(u32, u32)> ButtonList__set_first_visible;
inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> LayoutObjectWithChild__forward_to_child;
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> Layout__virtual_3;

u32 ButtonPos__show_both(u32 button_pos, u32 r1_unused, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 child_3 = LayoutObjectWithChild__forward_to_child(button_pos + 4u, 0x22be3cu, r2, guest::cpu()->r[3]);  // (from the original)
    u32 child_4 = LayoutObjectWithChild__forward_to_child(button_pos + 4u, 0x22be4cu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    ButtonList__set_children(button_pos + 0x398u, child_4, child_3);  // (from the original)
    ButtonList__set_first_visible(button_pos + 0x398u, 2u);  // (from the original)
    frame.release();
    return Layout__virtual_3(button_pos + 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0022bdf0
GUEST_EXPORT(0x0022bdf0, d_0022bdf0::ButtonPos__show_both);

// f_0022be5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Shows the single button on its pane.
namespace d_0022be5c {

inline constexpr u32 button_positions_address = 0x00951658u;
inline constexpr guest::Function<0x00268928, u32(u32, u32, u32)> ButtonList__set_children;
inline constexpr guest::Function<0x002cd3d0, u32(u32, u32)> ButtonList__set_first_visible;
inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> LayoutObjectWithChild__forward_to_child;
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> Layout__virtual_3;

u32 ButtonPos__show_one(u32 button_pos, u32 r1, u32 r2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 child_2 = LayoutObjectWithChild__forward_to_child(button_pos + 4u, gptr<u32>(button_positions_address)[r1], r2, guest::cpu()->r[3]);
    ButtonList__set_children(button_pos + 0x398u, 0u, child_2);  // (from the original)
    ButtonList__set_first_visible(button_pos + 0x398u, 1u);  // (from the original)
    frame.release();
    return Layout__virtual_3(button_pos + 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0022be5c
GUEST_EXPORT(0x0022be5c, d_0022be5c::ButtonPos__show_one);

// f_0022bea0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Loads the button position layout and binds the button pair to the right and left panes.
namespace d_0022bea0 {

struct __attribute__((packed)) ButtonPos {
    u8 unknown_0[0x10];  // (not used here)
    u8 byte_10;
    u8 unknown_11[0xdf];  // (not used here)
    u32 word_f0;
    u8 unknown_f4[0x2b0];  // (not used here)
    u32 word_3a4;
};
GUEST_OFFSET(ButtonPos, byte_10, 0x10);
GUEST_OFFSET(ButtonPos, word_f0, 0xf0);
GUEST_OFFSET(ButtonPos, word_3a4, 0x3a4);

inline constexpr guest::Function<0x00268928, u32(u32, u32, u32)> ButtonList__set_children;
inline constexpr guest::Function<0x002ccfd4, u32(u32)> TextLabel__bind_font;
inline constexpr guest::Function<0x0056878c, u32(u32, u32)> LayoutObjectWithChild__forward_to_child;
inline constexpr guest::Function<0x00569184, u32(u32, u32, u32, u32)> Layout__virtual_4;

u32 ButtonPos__load_pair(gptr<ButtonPos> button_pos) {
    button_pos->word_f0 = button_pos.addr() + 0x150u;  // (from the original)
    Layout__virtual_4(button_pos.addr() + 4u, 0x857a40u, 0u, 0x2500u);  // (from the original)
    button_pos->byte_10 = 0x9b;  // (from the original)
    TextLabel__bind_font(button_pos.addr() + 0x398u);  // (from the original)
    button_pos->word_3a4 = button_pos.addr() + 4u;
    u32 child_3 = LayoutObjectWithChild__forward_to_child(button_pos.addr() + 4u, 0x22bf14u);  // (from the original)
    u32 child_4 = LayoutObjectWithChild__forward_to_child(button_pos.addr() + 4u, 0x22bf24u);  // (from the original)
    ButtonList__set_children(button_pos.addr() + 0x398u, child_4, child_3);  // (from the original)
    return 1u;
}

}  // namespace d_0022bea0
GUEST_EXPORT_FRAMED(0x0022bea0, d_0022bea0::ButtonPos__load_pair, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0022bf34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Releases the button pair and its layout parts; true.
namespace d_0022bf34 {

inline constexpr guest::Function<0x00132364, u32(u32)> release_layout_parts;
inline constexpr guest::Function<0x002cd0e0, u32(u32, u32, u32, u32)> ButtonList__update_all;

u32 ButtonPos__release_pair(u32 button_pos) {
    ButtonList__update_all(button_pos + 0x398u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    release_layout_parts(button_pos + 0x150u);  // (from the original)
    return 1u;
}

}  // namespace d_0022bf34
GUEST_EXPORT_FRAMED(0x0022bf34, d_0022bf34::ButtonPos__release_pair, 0x4010);  // pushes {r4, lr} first, as the original

// f_0022bf54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Updates the position button.
namespace d_0022bf54 {

inline constexpr guest::Function<0x002cd17c, u32(u32, u32, u32, u32)> Control1Button__virtual_2_002cd17c;

u32 ButtonPos__update(u32 button_pos) {
    return Control1Button__virtual_2_002cd17c(button_pos + 0x398u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0022bf54
GUEST_EXPORT(0x0022bf54, d_0022bf54::ButtonPos__update);

// f_0022c040: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Loads the button position layout and binds the three buttons to the left, center and right panes.
namespace d_0022c040 {

struct __attribute__((packed)) ButtonPos {
    u8 unknown_0[0x10];  // (not used here)
    u8 byte_10;
    u8 unknown_11[0xdf];  // (not used here)
    u32 word_f0;
    u8 unknown_f4[0x2b0];  // (not used here)
    u32 word_3a4;
};
GUEST_OFFSET(ButtonPos, byte_10, 0x10);
GUEST_OFFSET(ButtonPos, word_f0, 0xf0);
GUEST_OFFSET(ButtonPos, word_3a4, 0x3a4);

inline constexpr guest::Function<0x00268b68, u32(u32, u32, u32, u32)> ButtonList__set_children_3;
inline constexpr guest::Function<0x002ccfd4, u32(u32)> TextLabel__bind_font;
inline constexpr guest::Function<0x0056878c, u32(u32, u32)> LayoutObjectWithChild__forward_to_child;
inline constexpr guest::Function<0x00569184, u32(u32, u32, u32, u32)> Layout__virtual_4;

void ButtonPos__load_three(gptr<ButtonPos> button_pos) {
    button_pos->word_f0 = button_pos.addr() + 0x150u;  // (from the original)
    Layout__virtual_4(button_pos.addr() + 4u, 0x857a40u, 0u, 0x2500u);  // (from the original)
    button_pos->byte_10 = 0x9b;  // (from the original)
    TextLabel__bind_font(button_pos.addr() + 0x398u);  // (from the original)
    button_pos->word_3a4 = button_pos.addr() + 4u;
    u32 child_4 = LayoutObjectWithChild__forward_to_child(button_pos.addr() + 4u, 0x22c0c8u);  // (from the original)
    u32 child_5 = LayoutObjectWithChild__forward_to_child(button_pos.addr() + 4u, 0x22c0d8u);  // (from the original)
    u32 child_6 = LayoutObjectWithChild__forward_to_child(button_pos.addr() + 4u, 0x22c0e8u);  // (from the original)
    ButtonList__set_children_3(button_pos.addr() + 0x398u, child_6, child_5, child_4);  // (from the original)
}

}  // namespace d_0022c040
GUEST_EXPORT_FRAMED(0x0022c040, d_0022c040::ButtonPos__load_three, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0022c0f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Releases the three buttons and their layout parts.
namespace d_0022c0f8 {

inline constexpr guest::Function<0x00132364, u32(u32)> release_layout_parts;
inline constexpr guest::Function<0x002cd0e0, u32(u32, u32, u32, u32)> ButtonList__update_all;

void ButtonPos__release_three(u32 button_pos) {
    ButtonList__update_all(button_pos + 0x398u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    release_layout_parts(button_pos + 0x150u);  // (from the original)
}

}  // namespace d_0022c0f8
GUEST_EXPORT_FRAMED(0x0022c0f8, d_0022c0f8::ButtonPos__release_three, 0x4010);  // pushes {r4, lr} first, as the original

// f_0022c118: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Updates the position button.
namespace d_0022c118 {

inline constexpr guest::Function<0x002cd17c, u32(u32, u32, u32, u32)> Control1Button__virtual_2_002cd17c;

void ButtonPos__update_b(u32 button_pos) {
    Control1Button__virtual_2_002cd17c(button_pos + 0x398u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0022c118
GUEST_EXPORT(0x0022c118, d_0022c118::ButtonPos__update_b);

// f_0022c368: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Hides the pane (+0x1c) and sets the flag at +0x122 of the owner (+0x18).
namespace d_0022c368 {

struct __attribute__((packed)) Object_0022c368_0 {
    u8 unknown_0[0x18];  // (not used here)
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Object_0022c368_0, word_18, 0x18);
GUEST_OFFSET(Object_0022c368_0, word_1c, 0x1c);

struct __attribute__((packed)) Local_0022c368_r1_1 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_0022c368_r1_1, byte_b7, 0xb7);


u32 hide_pane_and_mark_122(gptr<Object_0022c368_0> arg0) {
    gptr<Local_0022c368_r1_1> r1_1 = gptr<Local_0022c368_r1_1>(arg0->word_1c);
    if (r1_1.addr() == 0) {
        guest::cpu()->r[1] = r1_1.addr();
        return arg0.addr();
    }
    r1_1->byte_b7 = u8(u32(r1_1->byte_b7) & 0xfeu);  // (from the original)
    u32 r0_1 = arg0->word_18;
    *gptr<u8>(r0_1 + 0x122u) = 1;  // (from the original)
    guest::cpu()->r[1] = r1_1.addr();
    return r0_1;
}

}  // namespace d_0022c368
GUEST_EXPORT(0x0022c368, d_0022c368::hide_pane_and_mark_122);

// f_0022c53c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022c53c {

inline constexpr u32 vtable_DragIconGroup = 0x008ee248u;
inline constexpr u32 vtable_DragIconGroup_at_c = 0x008ee258u;
inline constexpr guest::Function<0x00125aec, u32(u32)> construct_layout_animation;
inline constexpr guest::Function<0x00125e08, u32(u32)> construct_layout_list;
inline constexpr guest::Function<0x001324a8, u32(u32)> construct_list_node;

u32 DragIconGroup__DragIconGroup(gptr<DragIconGroup> drag_icon_group) {
    construct_layout_list(drag_icon_group.addr());
    construct_list_node(drag_icon_group.addr() + 0xcu);  // (from the original)
    drag_icon_group->word_18 = 0;
    drag_icon_group->drag_icon_group_vtable = vtable_DragIconGroup_at_c;
    drag_icon_group->vtable = vtable_DragIconGroup;
    drag_icon_group->word_1c = 0;
    construct_layout_animation(drag_icon_group.addr() + 0x20u);  // (from the original)
    drag_icon_group->word_48 = 0;
    construct_layout_animation(drag_icon_group.addr() + 0x4cu);  // (from the original)
    construct_layout_animation(drag_icon_group.addr() + 0x74u);  // (from the original)
    construct_layout_animation(drag_icon_group.addr() + 0x9cu);  // (from the original)
    construct_layout_animation(drag_icon_group.addr() + 0xc4u);  // (from the original)
    construct_layout_animation(drag_icon_group.addr() + 0xecu);  // (from the original)
    construct_layout_animation(drag_icon_group.addr() + 0x114u);  // (from the original)
    drag_icon_group->byte_13c = 1;
    drag_icon_group->byte_13d = 1;
    drag_icon_group->byte_13e = 1;
    drag_icon_group->byte_13f = 1;
    guest::cpu()->r[1] = 1u;
    return drag_icon_group.addr();
}

}  // namespace d_0022c53c
GUEST_EXPORT_FRAMED(0x0022c53c, d_0022c53c::DragIconGroup__DragIconGroup, 0x4010);  // pushes {r4, lr} first, as the original

// f_0022c5d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022c5d8 {

inline constexpr u32 vtable_DragIconGroup = 0x008ee248u;
inline constexpr u32 vtable_DragIconGroup_at_c = 0x008ee258u;
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> destroy_animation;

u32 DragIconGroup__virtual_0_0022c5d8(gptr<DragIconGroup> drag_icon_group) {
    drag_icon_group->vtable = vtable_DragIconGroup;
    drag_icon_group->drag_icon_group_vtable = vtable_DragIconGroup_at_c;
    u32 r0_1 = drag_icon_group.addr() + 0x114u;  // (from the original)
    destroy_animation(r0_1, vtable_DragIconGroup, vtable_DragIconGroup_at_c, guest::cpu()->r[3]);
    destroy_animation(r0_1 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    destroy_animation(r0_1 - 0x50u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    destroy_animation(r0_1 - 0x78u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    destroy_animation(r0_1 - 0xa0u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    destroy_animation(r0_1 - 0xc8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    destroy_animation(r0_1 - 0xf4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    return r0_1 - 0x114u;  // (from the original)
}

}  // namespace d_0022c5d8
GUEST_EXPORT_FRAMED(0x0022c5d8, d_0022c5d8::DragIconGroup__virtual_0_0022c5d8, 0x4010);  // pushes {r4, lr} first, as the original

// f_0022c720: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stops the current animation and starts animation 0 to 3 from zero.
namespace d_0022c720 {

inline constexpr guest::Function<0x00568630, u32(u32, u32, u32, u32)> notify_objects_of_list;

u32 ButtonAnim4__start(u32 button_anim4, u32 r1, float S0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    if (r1 != 0) {
        if (r1 == 1u) {
            *gptr<u32>(button_anim4 + 0x1a8u) = *gptr<u32>(button_anim4 + 0x1a4u);  // (from the original)
            *gptr<u32>(button_anim4 + 0x1a0u) = button_anim4 + 0x178u;  // (from the original)
        } else if (r1 == 2u) {
            *gptr<u32>(button_anim4 + 0x1a8u) = *gptr<u32>(button_anim4 + 0x200u);  // (from the original)
            *gptr<u32>(button_anim4 + 0x1a0u) = button_anim4 + 0x1b0u;  // (from the original)
        } else if (r1 == 3u) {
            *gptr<u32>(button_anim4 + 0x1a8u) = *gptr<u32>(button_anim4 + 0x200u);  // (from the original)
            *gptr<u32>(button_anim4 + 0x1a0u) = button_anim4 + 0x1d8u;  // (from the original)
        }
    } else {
        *gptr<u32>(button_anim4 + 0x1a8u) = *gptr<u32>(button_anim4 + 0x1a4u);  // (from the original)
        *gptr<u32>(button_anim4 + 0x1a0u) = button_anim4 + 0x150u;  // (from the original)
    }
    u32 r1_1 = *gptr<u32>(button_anim4 + 0x1a0u);  // (from the original)
    u32 r2_1 = *gptr<u32>(button_anim4 + 0x1a8u);  // (from the original)
    notify_objects_of_list(button_anim4 + 4u, r1_1, r2_1, 0u);
    u32 r0_2 = *gptr<u32>(button_anim4 + 0x1a0u);  // (from the original)
    float S0_1 = 0.0f;
    u32 r1_2 = *gptr<u32>(*gptr<u32>(r0_2) + 8u);
    // virtual function 2 of r0_2
    guest::cpu()->s[0] = S0_1;
    frame.release();
    return guest::call_address<u32>(r1_2, r0_2, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0022c720
GUEST_EXPORT(0x0022c720, d_0022c720::ButtonAnim4__start);

// f_0022c7c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022c7c8 {

struct __attribute__((packed)) Local_0022c7c8_r0_5 {
    u32 vtable;
    u8 unknown_4[0x19c];  // (not used here)
    u32 word_1a0;
    u32 word_1a4;
    u32 word_1a8;
    u8 byte_1ac;
    u8 byte_1ad;
};
GUEST_OFFSET(Local_0022c7c8_r0_5, vtable, 0x0);
GUEST_OFFSET(Local_0022c7c8_r0_5, word_1a0, 0x1a0);
GUEST_OFFSET(Local_0022c7c8_r0_5, word_1a4, 0x1a4);
GUEST_OFFSET(Local_0022c7c8_r0_5, word_1a8, 0x1a8);
GUEST_OFFSET(Local_0022c7c8_r0_5, byte_1ac, 0x1ac);
GUEST_OFFSET(Local_0022c7c8_r0_5, byte_1ad, 0x1ad);

inline constexpr u32 vtable_InOutWindow = 0x008ebb64u;
inline constexpr u32 vtable_ExplainWindow = 0x008ee268u;
inline constexpr guest::Function<0x00125aec, u32(u32)> construct_layout_animation;
inline constexpr guest::Function<0x00125e3c, u32(u32, u32, u32, u32)> Layout__Layout;

u32 InOutWindow__InOutWindow_0022c7c8(gptr<InOutWindow> in_out_window) {
    in_out_window->vtable = vtable_InOutWindow;
    u32 r0_2 = Layout__Layout(in_out_window.addr() + 4u, vtable_InOutWindow, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_3 = r0_2 + 0x14cu;  // (from the original)
    construct_layout_animation(r0_3);
    u32 r0_4 = r0_3 + 0x28u;  // (from the original)
    construct_layout_animation(r0_4);
    gptr<Local_0022c7c8_r0_5> r0_5 = gptr<Local_0022c7c8_r0_5>(r0_4 - 0x178u);  // (from the original)
    r0_5->word_1a0 = 0;
    r0_5->word_1a4 = 0;
    r0_5->word_1a8 = 0;
    r0_5->byte_1ac = 0;
    r0_5->byte_1ad = 1;
    r0_5->vtable = vtable_ExplainWindow;
    u32 r0_6 = r0_5.addr() + 0x1b0u;  // (from the original)
    construct_layout_animation(r0_6);
    u32 r0_7 = r0_6 + 0x28u;  // (from the original)
    construct_layout_animation(r0_7);
    u32 r0_8 = r0_7 - 0x1d8u;  // (from the original)
    *gptr<u32>(r0_8 + 0x200u) = 0;  // (from the original)
    return r0_8;
}

}  // namespace d_0022c7c8
GUEST_EXPORT_FRAMED(0x0022c7c8, d_0022c7c8::InOutWindow__InOutWindow_0022c7c8, 0x4010);  // pushes {r4, lr} first, as the original

// f_0022c87c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022c87c {

inline constexpr u32 vtable_InOutWindow = 0x008ebb64u;
inline constexpr u32 vtable_ExplainWindow = 0x008ee268u;
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> destroy_animation;
inline constexpr guest::Function<0x005bf744, u32(u32)> Layout__destructor;

u32 ExplainWindow__destructor(gptr<InOutWindow> in_out_window) {
    in_out_window->vtable = vtable_ExplainWindow;
    u32 r0_1 = in_out_window.addr() + 0x1d8u;  // (from the original)
    destroy_animation(r0_1, vtable_ExplainWindow, guest::cpu()->r[2], guest::cpu()->r[3]);
    destroy_animation(r0_1 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    in_out_window->vtable = vtable_InOutWindow;
    destroy_animation(r0_1 - 0x60u, vtable_InOutWindow, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    destroy_animation(r0_1 - 0x88u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_6 = Layout__destructor(r0_1 - 0x1d4u);  // (from the original)
    return r0_6 - 4u;
}

}  // namespace d_0022c87c
GUEST_EXPORT_FRAMED(0x0022c87c, d_0022c87c::ExplainWindow__destructor, 0x4010);  // pushes {r4, lr} first, as the original

// f_0022d734: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the counter (0xa182f8) and reseeds the random state at 0xa182fc.
namespace d_0022d734 {

inline constexpr u32 global_00a182fc_address = 0x00a182fcu;
inline guest::global<u8, 0x00a182f8> global_00a182f8;
inline constexpr guest::Function<0x0055cabc, u32(u32, u32)> Random__seed;

u32 reset_random_a182fc() {
    *global_00a182f8 = 0;
    return Random__seed(global_00a182fc_address, 0u);
}

}  // namespace d_0022d734
GUEST_EXPORT(0x0022d734, d_0022d734::reset_random_a182fc);

// f_0022d74c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Writes the letter (header, body, footer) from the message and the sender, numbering its paper when asked; clears it
// when it failed.
namespace d_0022d74c {

struct __attribute__((packed)) Local_0022d74c_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0022d74c_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0022d74c_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_0022d74c_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0022d74c_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_0022d74c_ea_2, word_4, 0x4);

inline constexpr u32 letter_writer_task_address = 0x0095dec4u;
inline guest::global<u32, 0x0095dec4> letter_writer_task;
inline constexpr guest::Function<0x001b4a8c, u32(u32, u32)> copy_46_bytes;
inline constexpr guest::Function<0x002ff408, u32(u32)> Letter__clear;
inline constexpr guest::Function<0x00303c84, u32(u32)> byte_ad_is_2;
inline constexpr guest::Function<0x003052f0, u32(u32)> clear_identity_with_flags;
inline constexpr guest::Function<0x003084d0, u32(u32)> clear_identity_with_value;
inline constexpr guest::Function<0x005cc070, u32(u32)> store_byte_constant_pack_0x30_005cc070;
inline constexpr guest::Function<0x005cc4b4, u32(u32, u32)> construct_word_ptr_sv_aa;
inline constexpr guest::Function<0x005cc4e4, u32(u32, u32)> construct_word_ptr_sv_22c;
inline constexpr guest::Function<0x005cc504, u32(u32, u32, u32, u32)> construct_word_ptr_sv_68;
inline constexpr guest::Function<0x005dd348, u32(u32, u32, u32, u32)> sead__SafeStringBase_char___SafeStringBase_005dd348;
inline constexpr guest::Function<0x005f4cf8, u32(u32)> StateTask__run;
inline constexpr guest::Function<0x005fcf88, u32(u32, u32)> copy_word_buffer;

struct __attribute__((packed)) Frame_0022d74c {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x20];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0022d74c, word_0, 0x0);
GUEST_OFFSET(Frame_0022d74c, word_4, 0x4);
GUEST_OFFSET(Frame_0022d74c, word_8, 0x8);
GUEST_SIZE(Frame_0022d74c, 0x2c);

void LetterWriter__write_from_template(u32 letter_writer, u32 letter, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0022d74c> frame;  // the original's stack frame
    u32 r7_1 = *frame.at<u32>(0x4c);  // (from the original)
    u32 r8_1 = *frame.at<u32>(0x48);  // (from the original)
    construct_word_ptr_sv_68(frame.at(0x1c).addr(), letter, r2, r3);  // (from the original)
    copy_word_buffer(letter_writer + 0xb0u, frame.at(0x1c).addr());  // (from the original)
    construct_word_ptr_sv_aa(frame.at(0x1c).addr(), letter);  // (from the original)
    copy_word_buffer(letter_writer + 0xbcu, frame.at(0x1c).addr());  // (from the original)
    construct_word_ptr_sv_22c(frame.at(0x1c).addr(), letter);  // (from the original)
    copy_word_buffer(letter_writer + 0xc8u, frame.at(0x1c).addr());  // (from the original)
    clear_identity_with_value(letter_writer + 0xd8u);  // (from the original)
    if (r7_1 != 0) {
        copy_46_bytes(letter_writer + 0x108u, r7_1);  // (from the original)
    } else {
        clear_identity_with_flags(letter_writer + 0x108u);  // (from the original)
    }
    Letter__clear(letter);
    gptr<Local_0022d74c_ea_1> ea_1 = gptr<Local_0022d74c_ea_1>(frame.at(0xc).addr());  // (from the original)
    ea_1->word_0 = r2;
    ea_1->word_4 = r3;
    gptr<Local_0022d74c_ea_2> ea_2 = gptr<Local_0022d74c_ea_2>(frame.at(0x14).addr());  // (from the original)
    ea_2->word_0 = r2;
    ea_2->word_4 = r3;
    frame->word_0 = letter_writer + 0xd4u;  // (from the original)
    frame->word_4 = r2;
    frame->word_8 = r3;
    sead__SafeStringBase_char___SafeStringBase_005dd348(letter_writer, letter_writer + 0xb0u, letter_writer + 0xbcu, letter_writer + 0xc8u);  // (from the original)
    StateTask__run(*letter_writer_task);
    u32 r0_11 = byte_ad_is_2(letter_writer);
    if (r0_11 != 0) {
        if (r8_1 != 0) {
            store_byte_constant_pack_0x30_005cc070(letter);
        }
        u32 r0_12 = *gptr<u32>(letter_writer + 0xd4u);  // (from the original)
        if (s32(r0_12) >= 0) {
            *gptr<u8>(letter + 0x26eu) = u8(r0_12 & 0xffu);  // (from the original)
            return;
        }
        *gptr<u8>(letter + 0x26eu) = 0;  // (from the original)
        return;
    }
    Letter__clear(letter);
}

}  // namespace d_0022d74c
GUEST_EXPORT_FRAMED(0x0022d74c, d_0022d74c::LetterWriter__write_from_template, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_0022d958: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Writes the villager's letter (header, body, footer) from the message, with its item, sender and paper; clears it
// when it failed.
namespace d_0022d958 {

struct __attribute__((packed)) LetterWriter {
    u8 unknown_0[0xd4];  // (not used here)
    u32 word_d4;
};
GUEST_OFFSET(LetterWriter, word_d4, 0xd4);

struct __attribute__((packed)) Letter {
    u8 unknown_0[0x26e];  // (not used here)
    u8 byte_26e;
    u8 unknown_26f[0x2];  // (not used here)
    u8 byte_271;
};
GUEST_OFFSET(Letter, byte_26e, 0x26e);
GUEST_OFFSET(Letter, byte_271, 0x271);

struct __attribute__((packed)) Local_0022d958_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0022d958_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0022d958_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0022d958_ea_1, word_8, 0x8);

struct __attribute__((packed)) Local_0022d958_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0022d958_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_0022d958_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_0022d958_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0022d958_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_0022d958_ea_3, word_4, 0x4);

inline constexpr u32 letter_writer_task_address = 0x0095dec4u;
inline guest::global<u32, 0x0095dec4> letter_writer_task;
inline constexpr guest::Function<0x001b4a80, u32(u32, u32)> Identity__copy_marked;
inline constexpr guest::Function<0x001b4a8c, u32(u32, u32)> copy_46_bytes;
inline constexpr guest::Function<0x002ff408, u32(u32)> Letter__clear;
inline constexpr guest::Function<0x00303c84, u32(u32)> byte_ad_is_2;
inline constexpr guest::Function<0x005cbc3c, u32(u32, u32)> Letter__set_kind_bits;
inline constexpr guest::Function<0x005cbe34, u32(u32, u32)> Letter__set_sender_villager;
inline constexpr guest::Function<0x005cbea4, u32(u32, u32)> note_item_offset;
inline constexpr guest::Function<0x005cc454, u32(u32, u32)> Letter__mark_recipient_read;
inline constexpr guest::Function<0x005cc4b4, u32(u32, u32)> construct_word_ptr_sv_aa;
inline constexpr guest::Function<0x005cc4e4, u32(u32, u32)> construct_word_ptr_sv_22c;
inline constexpr guest::Function<0x005cc504, u32(u32, u32, u32, u32)> construct_word_ptr_sv_68;
inline constexpr guest::Function<0x005dd348, u32(u32, u32, u32, u32)> sead__SafeStringBase_char___SafeStringBase_005dd348;
inline constexpr guest::Function<0x005f4cf8, u32(u32)> StateTask__run;
inline constexpr guest::Function<0x005fcf88, u32(u32, u32)> copy_word_buffer;
inline constexpr guest::Function<0x00613de4, u32(u32, u32)> copy_48_bytes;

struct __attribute__((packed)) Frame_0022d958 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x1c];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0022d958, word_0, 0x0);
GUEST_OFFSET(Frame_0022d958, word_4, 0x4);
GUEST_OFFSET(Frame_0022d958, word_8, 0x8);
GUEST_SIZE(Frame_0022d958, 0x28);

void LetterWriter__write_villager_letter(gptr<LetterWriter> letter_writer, gptr<Letter> letter, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0022d958> frame;  // the original's stack frame
    gptr<Local_0022d958_ea_1> ea_1 = gptr<Local_0022d958_ea_1>(frame.at(0x48).addr());  // (from the original)
    u32 r7_1 = ea_1->word_0;
    u32 r8_1 = ea_1->word_4;
    u32 r9_1 = ea_1->word_8;
    construct_word_ptr_sv_68(frame.at(0x1c).addr(), letter.addr(), r2, r3);  // (from the original)
    copy_word_buffer(letter_writer.addr() + 0xb0u, frame.at(0x1c).addr());  // (from the original)
    construct_word_ptr_sv_aa(frame.at(0x1c).addr(), letter.addr());  // (from the original)
    copy_word_buffer(letter_writer.addr() + 0xbcu, frame.at(0x1c).addr());  // (from the original)
    construct_word_ptr_sv_22c(frame.at(0x1c).addr(), letter.addr());  // (from the original)
    copy_word_buffer(letter_writer.addr() + 0xc8u, frame.at(0x1c).addr());  // (from the original)
    copy_48_bytes(letter_writer.addr() + 0xd8u, r7_1);  // (from the original)
    copy_46_bytes(letter_writer.addr() + 0x108u, r8_1);  // (from the original)
    Letter__clear(letter.addr());
    gptr<Local_0022d958_ea_2> ea_2 = gptr<Local_0022d958_ea_2>(frame.at(0xc).addr());  // (from the original)
    ea_2->word_0 = r2;
    ea_2->word_4 = r3;
    gptr<Local_0022d958_ea_3> ea_3 = gptr<Local_0022d958_ea_3>(frame.at(0x14).addr());  // (from the original)
    ea_3->word_0 = r2;
    ea_3->word_4 = r3;
    frame->word_0 = letter_writer.addr() + 0xd4u;  // (from the original)
    frame->word_4 = r2;
    frame->word_8 = r3;
    sead__SafeStringBase_char___SafeStringBase_005dd348(letter_writer.addr(), letter_writer.addr() + 0xb0u, letter_writer.addr() + 0xbcu, letter_writer.addr() + 0xc8u);  // (from the original)
    StateTask__run(*letter_writer_task);
    u32 r0_10 = byte_ad_is_2(letter_writer.addr());
    if (r0_10 != 0) {
        note_item_offset(letter.addr(), r9_1);
        letter->byte_271 = 0;
        Identity__copy_marked(letter.addr(), r8_1);
        Letter__set_sender_villager(letter.addr(), r7_1);
        Letter__set_kind_bits(letter.addr(), 1u);
        u32 r0_11 = letter_writer->word_d4;
        if (s32(r0_11) >= 0) {
            u32 r1_9 = r0_11 & 0xffu;  // (from the original)
            letter->byte_26e = u8(r1_9);
            guest::cpu()->r[1] = r1_9;
            return;
        }
        letter->byte_26e = 0;
        Letter__mark_recipient_read(letter.addr(), 0u);
        return;
    }
    Letter__clear(letter.addr());
}

}  // namespace d_0022d958
GUEST_EXPORT_FRAMED(0x0022d958, d_0022d958::LetterWriter__write_villager_letter, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0022dacc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls the function at 0x22dd30 with the stacked vector.
namespace d_0022dacc {

struct __attribute__((packed)) Local_0022dacc_r12_1 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_0022dacc_r12_1, float_0, 0x0);
GUEST_OFFSET(Local_0022dacc_r12_1, float_4, 0x4);
GUEST_OFFSET(Local_0022dacc_r12_1, float_8, 0x8);

struct __attribute__((packed)) Local_0022dacc_r12_2 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_0022dacc_r12_2, float_0, 0x0);
GUEST_OFFSET(Local_0022dacc_r12_2, float_4, 0x4);
GUEST_OFFSET(Local_0022dacc_r12_2, float_8, 0x8);

inline constexpr guest::Function<0x0022dd30, u32(u32, u32, u32, u32)> MapMarker__place;

struct __attribute__((packed)) Frame_0022dacc {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0xc];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0022dacc, word_0, 0x0);
GUEST_OFFSET(Frame_0022dacc, word_4, 0x4);
GUEST_SIZE(Frame_0022dacc, 0x14);

void call_22dd30_with_vector(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_0022dacc> frame;  // the original's stack frame
    gptr<Local_0022dacc_r12_1> r12_1 = gptr<Local_0022dacc_r12_1>(frame.at(0x18).addr());  // (from the original)
    float S0_1 = r12_1->float_0;
    float S1_1 = r12_1->float_4;
    float S2_1 = r12_1->float_8;
    gptr<Local_0022dacc_r12_2> r12_2 = gptr<Local_0022dacc_r12_2>(frame.at(8).addr());
    frame->word_4 = r3;
    r12_2->float_0 = S0_1;
    r12_2->float_4 = S1_1;
    r12_2->float_8 = S2_1;
    frame->word_0 = r3;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    MapMarker__place(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], r3);
}

}  // namespace d_0022dacc
GUEST_EXPORT_FRAMED(0x0022dacc, d_0022dacc::call_22dd30_with_vector, 0x4000);  // pushes {lr} first, as the original

// f_0022e08c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022e08c {

inline constexpr u32 vtable_MailLoadAdapt = 0x008ee2a4u;
inline constexpr guest::Function<0x005dd490, u32(u32)> construct_mail_recept;
inline constexpr guest::Function<0x005fcf9c, u32(u32)> construct_empty_word_ptr;

void MailLoadAdapt__MailLoadAdapt(gptr<MailLoadAdapt> mail_load_adapt) {
    construct_mail_recept(mail_load_adapt.addr());
    mail_load_adapt->vtable = vtable_MailLoadAdapt;
    construct_empty_word_ptr(mail_load_adapt.addr() + 0xb0u);  // (from the original)
    construct_empty_word_ptr(mail_load_adapt.addr() + 0xbcu);  // (from the original)
    construct_empty_word_ptr(mail_load_adapt.addr() + 0xc8u);  // (from the original)
    mail_load_adapt->word_d8 = 0;
    mail_load_adapt->word_d4 = ~0u;
    mail_load_adapt->word_dc = 0;
    mail_load_adapt->word_e0 = 0;
    mail_load_adapt->word_e4 = 0;
    mail_load_adapt->word_e8 = 0;
    mail_load_adapt->word_ec = 0;
    mail_load_adapt->word_f0 = 0;
    mail_load_adapt->word_f4 = 0;
    mail_load_adapt->word_f8 = 0;
    mail_load_adapt->word_fc = 0;
    mail_load_adapt->word_100 = 0;
    mail_load_adapt->word_104 = 0;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_0022e08c
GUEST_EXPORT_FRAMED(0x0022e08c, d_0022e08c::MailLoadAdapt__MailLoadAdapt, 0x4010);  // pushes {r4, lr} first, as the original

// f_0022e138: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022e138 {

inline constexpr u32 vtable_MailLoadAdapt = 0x008ee2a4u;
inline constexpr guest::Function<0x005dd50c, u32(u32, u32)> store_word_0x00908d30_;

u32 MailLoadAdapt__destructor(gptr<MailLoadAdapt> mail_load_adapt) {
    mail_load_adapt->vtable = vtable_MailLoadAdapt;
    return store_word_0x00908d30_(mail_load_adapt.addr(), vtable_MailLoadAdapt);
}

}  // namespace d_0022e138
GUEST_EXPORT(0x0022e138, d_0022e138::MailLoadAdapt__destructor);

// f_0022e168: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies a 0x26c-byte pattern header.
namespace d_0022e168 {

inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> copy_aligned_bytes;

void copy_26c_bytes(u32 r0, u32 r1) {
    copy_aligned_bytes(r0, r1, 0x26cu, guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0022e168
GUEST_EXPORT_FRAMED(0x0022e168, d_0022e168::copy_26c_bytes, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0022e194: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets the pattern's flags (type 4, shareable).
namespace d_0022e194 {

struct __attribute__((packed)) Pattern {
    u8 unknown_0[0x67];  // (not used here)
    u8 byte_67;
    u8 byte_68;
    u8 byte_69;
};
GUEST_OFFSET(Pattern, byte_67, 0x67);
GUEST_OFFSET(Pattern, byte_68, 0x68);
GUEST_OFFSET(Pattern, byte_69, 0x69);


void Pattern__reset_flags_b(gptr<Pattern> pattern) {
    pattern->byte_67 = 1;
    pattern->byte_68 = 0;
    pattern->byte_69 = 4;
}

}  // namespace d_0022e194
GUEST_EXPORT_FRAMED(0x0022e194, d_0022e194::Pattern__reset_flags_b, 0x4010);  // pushes {r4, lr} first, as the original

// f_0022e1c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Takes the online state's mode and value (when connected), keeping the mode below 3 and marking it, and copies the
// pending word.
namespace d_0022e1c0 {

struct __attribute__((packed)) OnlineState {
    u8 unknown_0[0x3c];  // (not used here)
    u8 byte_3c;
    u8 byte_3d;
    u8 unknown_3e[0x2];  // (not used here)
    u32 word_40;
    u32 word_44;
    u32 word_48;
    u8 unknown_4c[0x11];  // (not used here)
    u8 byte_5d;
};
GUEST_OFFSET(OnlineState, byte_3c, 0x3c);
GUEST_OFFSET(OnlineState, byte_3d, 0x3d);
GUEST_OFFSET(OnlineState, word_40, 0x40);
GUEST_OFFSET(OnlineState, word_44, 0x44);
GUEST_OFFSET(OnlineState, word_48, 0x48);
GUEST_OFFSET(OnlineState, byte_5d, 0x5d);

inline constexpr u32 request_pool_address = 0x00a22020u;
inline constexpr guest::Function<0x00746ed0, u32(u32)> RequestPool__is_online;
inline constexpr guest::Function<0x00746ee4, u32(u32, u32, u32)> RequestPool__connection_state;
inline constexpr guest::Function<0x00746efc, u32(u32)> RequestPool__component_state;
inline constexpr guest::Function<0x00746f8c, u32(u32, u32, u32, u32)> UnknownStateA22020__flag_144_without_flag_30;

u32 OnlineState__snapshot(gptr<OnlineState> online_state, u32 r1, u32 r2) {
    u32 r0_2 = 0;
    u32 r0_1 = UnknownStateA22020__flag_144_without_flag_30(request_pool_address, r1, r2, guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        r0_2 = 1u;
    } else {
        u32 r0_3 = RequestPool__connection_state(request_pool_address, r1_1, r2);
        online_state->byte_3d = u8(r0_3);
        u32 r0_4 = RequestPool__is_online(request_pool_address);
        online_state->word_40 = r0_4;
        r0_2 = RequestPool__component_state(request_pool_address);
        r1_1 = guest::cpu()->r[1];
    }
    if (r2 != 0 || r0_2 >= 2u) {
        r1_1 = online_state->byte_3d;
        if (r1_1 >= 3u) {
            online_state->byte_3d = 1;
        }
        online_state->byte_3c = u8(r1);
        online_state->byte_5d = 1;
    }
    u32 r0_5 = online_state->word_48;
    online_state->word_44 = r0_5;
    guest::cpu()->r[1] = r1_1;
    return r0_5;
}

}  // namespace d_0022e1c0
GUEST_EXPORT_FRAMED(0x0022e1c0, d_0022e1c0::OnlineState__snapshot, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0022fcb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Finds the named animation in the model's resources and binds it; marks it bound (+0x4f9).
namespace d_0022fcb8 {

struct __attribute__((packed)) Model {
    u8 unknown_0[0x164];  // (not used here)
    u32 word_164;
    u8 unknown_168[0x391];  // (not used here)
    u8 byte_4f9;
};
GUEST_OFFSET(Model, word_164, 0x164);
GUEST_OFFSET(Model, byte_4f9, 0x4f9);

struct __attribute__((packed)) Local_0022fcb8_r0_1 {
    u8 unknown_0[0x1c];  // (not used here)
    u32 word_1c;
    u8 unknown_20[0x44];  // (not used here)
    u32 word_64;
};
GUEST_OFFSET(Local_0022fcb8_r0_1, word_1c, 0x1c);
GUEST_OFFSET(Local_0022fcb8_r0_1, word_64, 0x64);

inline constexpr guest::Function<0x002fa9d0, u32(u32, u32, u32, u32)> string_length;
inline constexpr guest::Function<0x004f26a4, u32(u32, u32, u32, u32)> g3d__BaseAnim__virtual_4;
inline constexpr guest::Function<0x00736a1c, u32(u32, u32, u32)> ResDic__find;

struct __attribute__((packed)) Frame_0022fcb8 {
    u32 word_0;
};
GUEST_OFFSET(Frame_0022fcb8, word_0, 0x0);
GUEST_SIZE(Frame_0022fcb8, 0x4);

u32 Model__bind_animation_by_name(gptr<Model> model, u32 name, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_0022fcb8> frame;  // the original's stack frame
    u32 r0 = model.addr();
    frame->word_0 = r3;
    gptr<Local_0022fcb8_r0_1> r0_1 = gptr<Local_0022fcb8_r0_1>(model->word_164);
    if (r0_1->word_64 != 0 && r0_1->word_1c != 0) {
        u32 ea_1 = r0_1.addr() + 0x68u;  // (from the original)
        u32 r2_1 = *gptr<u32>(ea_1);
        u32 r7_1 = 0u;
        r0_1 = gptr<Local_0022fcb8_r0_1>(r2_1 == 0 ? r7_1 : ea_1 + r2_1);
        frame->word_0 = r0_1.addr();
        if (r0_1.addr() != 0 && name != 0) {
            u32 length_2 = string_length(name, name, r2_1, r3);
            r0_1 = gptr<Local_0022fcb8_r0_1>(ResDic__find(frame.at(0).addr(), name, length_2));
            r2_1 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_1.addr() != 0) {
                u32 ea_2 = r0_1.addr() + 0xcu;  // (from the original)
                r0_1 = gptr<Local_0022fcb8_r0_1>(ea_2);
                u32 r1_1 = *gptr<u32>(ea_2);
                if (r1_1 != 0) {
                    r7_1 = r1_1 + r0_1.addr();
                }
                goto L_22fd38;
            }
        }
        r7_1 = 0u;
L_22fd38:;
        name = r7_1;
        if (r7_1 != 0) {
            g3d__BaseAnim__virtual_4(r0 + 0x4e0u, name, r2_1, r3);  // (from the original)
            name = guest::cpu()->r[1];
            r0_1 = gptr<Local_0022fcb8_r0_1>(1u);
            model->byte_4f9 = u8(r0_1.addr());
        }
    }
    guest::cpu()->r[1] = name;
    return r0_1.addr();
}

}  // namespace d_0022fcb8
GUEST_EXPORT_FRAMED(0x0022fcb8, d_0022fcb8::Model__bind_animation_by_name, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original
