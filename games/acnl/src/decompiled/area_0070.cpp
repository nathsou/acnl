// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "core/time_stamp.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_00700238: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Picks the cells for the spawn from the candidates.
namespace d_00700238 {

struct __attribute__((packed)) Local_00700238_ea_12 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00700238_ea_12, word_0, 0x0);
GUEST_OFFSET(Local_00700238_ea_12, word_4, 0x4);

struct __attribute__((packed)) Local_00700238_ea_13 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00700238_ea_13, word_0, 0x0);
GUEST_OFFSET(Local_00700238_ea_13, word_4, 0x4);
GUEST_OFFSET(Local_00700238_ea_13, word_8, 0x8);

struct __attribute__((packed)) Local_00700238_ea_17 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00700238_ea_17, word_0, 0x0);
GUEST_OFFSET(Local_00700238_ea_17, word_4, 0x4);
GUEST_OFFSET(Local_00700238_ea_17, word_8, 0x8);

struct __attribute__((packed)) Local_00700238_ea_20 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00700238_ea_20, word_0, 0x0);
GUEST_OFFSET(Local_00700238_ea_20, word_4, 0x4);
GUEST_OFFSET(Local_00700238_ea_20, word_8, 0x8);
GUEST_OFFSET(Local_00700238_ea_20, word_c, 0xc);

struct __attribute__((packed)) Local_00700238_ea_5 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00700238_ea_5, word_0, 0x0);
GUEST_OFFSET(Local_00700238_ea_5, word_4, 0x4);

struct __attribute__((packed)) Local_00700238_ea_8 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00700238_ea_8, word_0, 0x0);
GUEST_OFFSET(Local_00700238_ea_8, word_4, 0x4);
GUEST_OFFSET(Local_00700238_ea_8, word_8, 0x8);

struct __attribute__((packed)) Local_00700238_ea_9 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00700238_ea_9, word_0, 0x0);
GUEST_OFFSET(Local_00700238_ea_9, word_4, 0x4);

inline constexpr guest::Function<0x006ffea4, u32(u32, u32, u32, u32)> Grid__fill_rect;
inline constexpr guest::Function<0x007166a4, u32(u32, u32, u32, u32)> Records6__get;

struct __attribute__((packed)) Frame_00700238 {
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
GUEST_OFFSET(Frame_00700238, word_0, 0x0);
GUEST_OFFSET(Frame_00700238, word_4, 0x4);
GUEST_OFFSET(Frame_00700238, word_8, 0x8);
GUEST_OFFSET(Frame_00700238, word_c, 0xc);
GUEST_OFFSET(Frame_00700238, word_10, 0x10);
GUEST_OFFSET(Frame_00700238, word_14, 0x14);
GUEST_OFFSET(Frame_00700238, word_18, 0x18);
GUEST_OFFSET(Frame_00700238, word_1c, 0x1c);
GUEST_OFFSET(Frame_00700238, word_20, 0x20);
GUEST_SIZE(Frame_00700238, 0x24);

u32 pick_spawn_cells(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00700238> frame;  // the original's stack frame
    u32 r1_1 = *frame.at<u32>(0x40);  // (from the original)
    frame->word_0 = frame.at(0x14).addr();  // (from the original)
    frame->word_4 = r1_1;
    Records6__get(r3, frame.at(0x1c).addr(), frame.at(0x20).addr(), frame.at(0x18).addr());  // (from the original)
    u32 r0_1 = frame->word_1c;
    u32 r1_3 = frame->word_14;
    frame->word_4 = r0_1 + 2u;
    frame->word_10 = 1;
    gptr<Local_00700238_ea_5> ea_5 = gptr<Local_00700238_ea_5>(frame.at(8).addr());
    ea_5->word_0 = r1_3;
    ea_5->word_4 = 0;
    frame->word_0 = frame->word_20;
    Grid__fill_rect(r0, r1, r2, r0_1 - 1u);
    u32 r0_2 = frame->word_1c;
    u32 r2_2 = frame->word_14 - 1u;
    gptr<Local_00700238_ea_8> ea_8 = gptr<Local_00700238_ea_8>(frame.at(4).addr());
    ea_8->word_0 = r0_2 + 1u;
    ea_8->word_4 = r2_2;
    ea_8->word_8 = 1;
    frame->word_0 = frame->word_20 - 1u;
    frame->word_10 = 1;
    Grid__fill_rect(r0, r1, r2, r0_2 - 1u);
    gptr<Local_00700238_ea_9> ea_9 = gptr<Local_00700238_ea_9>(frame.at(0x14).addr());  // (from the original)
    u32 r0_3 = ea_9->word_0;
    u32 r1_4 = ea_9->word_4;
    frame->word_0 = r0_3 - 2u;
    frame->word_4 = r1_4;
    frame->word_8 = r0_3 + 1u;
    frame->word_c = 0;
    frame->word_10 = 4;
    Grid__fill_rect(r0 + 2u, r1, r2, frame->word_1c);
    u32 r0_5 = frame->word_14;
    u32 r2_3 = frame->word_18 - 1u;
    gptr<Local_00700238_ea_12> ea_12 = gptr<Local_00700238_ea_12>(frame.at(0).addr());
    ea_12->word_0 = r0_5 - 3u;
    ea_12->word_4 = r2_3;
    gptr<Local_00700238_ea_13> ea_13 = gptr<Local_00700238_ea_13>(frame.at(8).addr());
    ea_13->word_0 = r0_5 - 1u;
    ea_13->word_4 = 1;
    ea_13->word_8 = 4;
    Grid__fill_rect(r0 + 2u, r1, r2, frame->word_1c - 1u);
    u32 r0_7 = frame->word_18;
    u32 r1_5 = frame->word_14;
    frame->word_4 = r0_7 + 1u;
    gptr<Local_00700238_ea_17> ea_17 = gptr<Local_00700238_ea_17>(frame.at(8).addr());
    ea_17->word_0 = r1_5;
    ea_17->word_4 = 0;
    ea_17->word_8 = 2;
    frame->word_0 = frame->word_20;
    Grid__fill_rect(r0 + 4u, r1, r2, r0_7 - 2u);
    u32 r0_9 = frame->word_18;
    u32 r2_4 = frame->word_14 - 1u;
    gptr<Local_00700238_ea_20> ea_20 = gptr<Local_00700238_ea_20>(frame.at(4).addr());
    ea_20->word_0 = r0_9 - 1u;
    ea_20->word_4 = r2_4;
    ea_20->word_8 = 1;
    ea_20->word_c = 2;
    frame->word_0 = frame->word_20 - 1u;
    u32 r0_11 = Grid__fill_rect(r0 + 4u, r1, r2, r0_9 - 3u);
    return r0_11;
}

}  // namespace d_00700238
GUEST_EXPORT_FRAMED(0x00700238, d_00700238::pick_spawn_cells, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_00700558: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The model scale of insect `index` (below 83) for the size value: 1 + (size - base) / (spread * 10), clamped to 0.7
// to 1.3.
namespace d_00700558 {

struct __attribute__((packed)) Local_00700558_r1_1 {
    u8 unknown_0[0x3c];  // (not used here)
    u16 half_3c;
    u8 unknown_3e[0x2];  // (not used here)
    float float_40;
};
GUEST_OFFSET(Local_00700558_r1_1, half_3c, 0x3c);
GUEST_OFFSET(Local_00700558_r1_1, float_40, 0x40);


u32 Insect__size_scale(u32 insect, u32 r1, float S0_unused, float S1) {
    float S0_1 = 1.0f;
    if (r1 >= 0x53u) {  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0_1;
        return insect;
    }
    gptr<Local_00700558_r1_1> r1_1 = gptr<Local_00700558_r1_1>(r1 * 0x50u + 0x868888u);  // (from the original)
    float S1_1 = r1_1->float_40;
    float S2_1 = float(u32(r1_1->half_3c));
    if (u32(S1_1 == 0.0f)) {
        guest::cpu()->r[1] = r1_1.addr();
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return insect;
    }
    float S1_2 = S1_1 * 10.0f;
    float S0_2 = (float(insect) - S2_1) / S1_2 + S0_1;
    u32 r0_1 = std::bit_cast<u32>(S0_2);
    if (s32(0x3f333333u) > s32(r0_1)) {  // (from the original)
        float S0_3 = 0.7f;
        guest::cpu()->r[1] = 0x3f333333u;  // (from the original)
        guest::cpu()->s[0] = S0_3;
        guest::cpu()->s[1] = S1_2;
        return r0_1;
    }
    u32 r0_2 = std::bit_cast<u32>(S0_2);
    if (s32(0x3fa66666u) < s32(r0_2)) {  // (from the original)
        S0_2 = 1.3f;
    }
    guest::cpu()->r[1] = 0x3fa66666u;  // (from the original)
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    return r0_2;
}

}  // namespace d_00700558
GUEST_EXPORT(0x00700558, d_00700558::Insect__size_scale);

// f_00700974: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The period of the day of the hour (+7): 1 (4 to 7), 2 (8 to 15), 3 (16), 4 (17 and 18), 5 (19 to 22), else 0.
namespace d_00700974 {

struct __attribute__((packed)) Now {
    u8 unknown_0[0x7];  // (not used here)
    u8 byte_7;
};
GUEST_OFFSET(Now, byte_7, 0x7);


u32 time_period_of_hour(gptr<Now> now) {
    u32 r0_1 = s8(now->byte_7);
    if (r0_1 - 4u < 4u) {
        guest::cpu()->r[1] = r0_1 - 4u;
        return 1u;
    }
    if (r0_1 - 8u < 8u) {
        guest::cpu()->r[1] = r0_1 - 8u;
        return 2u;
    }
    if (r0_1 == 0x10u) {  // (from the original)
        guest::cpu()->r[1] = r0_1 - 8u;
        return 3u;
    }
    if (r0_1 - 0x11u < 2u) {  // (from the original)
        guest::cpu()->r[1] = r0_1 - 0x11u;  // (from the original)
        return 4u;
    }
    guest::cpu()->r[1] = r0_1 - 0x11u;  // (from the original)
    return r0_1 - 0x13u >= 4u ? 0u : 5u;  // (from the original)
}

}  // namespace d_00700974
GUEST_EXPORT(0x00700974, d_00700974::time_period_of_hour);

// f_00700adc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The actor kind index of the item, as a byte.
namespace d_00700adc {

inline constexpr guest::Function<0x006d9058, u32(u32, u32, u32, u32)> item_actor_kind_index;

u32 item_actor_kind_byte(u32 r0) {
    u32 r0_1 = item_actor_kind_index(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return r0_1 & 0xffu;  // (from the original)
}

}  // namespace d_00700adc
GUEST_EXPORT_FRAMED(0x00700adc, d_00700adc::item_actor_kind_byte, 0x4010);  // pushes {r4, lr} first, as the original

// f_00700cdc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// True when the world position is inside the map on plain ground with no blocking item.
namespace d_00700cdc {

inline constexpr guest::Function<0x002fca6c, u32(u32, u32, u32)> is_special_terrain_at;
inline constexpr guest::Function<0x002fcb84, u32(u32, u32)> Item__has_number;
inline constexpr guest::Function<0x002fccdc, u32(u32)> indexed_item_type;
inline constexpr guest::Function<0x002fe7a0, u32(u32)> item_has_type_4_6_8_or_25;
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> GridMap__process_world_position;
inline constexpr guest::Function<0x006a5e34, u32(u32, u32)> get_map_table;
inline constexpr guest::Function<0x006c8560, u32(u32, u32, u32)> terrain_record_starts_with_f;
inline constexpr guest::Function<0x007529d8, u32(u32, u32, u32)> GridMap__rect_10_contains;
inline constexpr guest::Function<0x00768dc4, u32(u32, u32)> Item__is_low_ground_item;
inline constexpr guest::Function<0x007698a4, u32(u32)> item_type_is_17;

u32 can_spawn_on_ground_at(u32 r0, u32 r1) {
    u32 r0_5 = 0;
    u32 map_table_2 = get_map_table(r0, r1);
    if (map_table_2 != 0) {
        u32 r0_2 = GridMap__rect_10_contains(map_table_2, r0, r1);
        if (r0_2 != 0) {
            u32 r0_3 = terrain_record_starts_with_f(r0, r1, 0u);
            if (r0_3 == 0) {
                u32 r0_4 = is_special_terrain_at(r0, r1, 0u);
                if (r0_4 == 0) {
                    r0_5 = get_map_table(r0_4, guest::cpu()->r[1]);
                    if (r0_5 == 0) {
                        return r0_5;
                    }
                    u32 item_2 = GridMap__process_world_position(r0_5, r0, r1, 0u);
                    if (item_2 != 0) {
                        u32 r0_7 = item_has_type_4_6_8_or_25(item_2);
                        if (r0_7 == 0) {
                            u32 r0_8 = item_type_is_17(item_2);
                            if (r0_8 == 0) {
                                u32 r0_9 = Item__is_low_ground_item(item_2, 0u);
                                if (r0_9 == 0) {
                                    u32 r0_10 = indexed_item_type(item_2);
                                    if (r0_10 != 0xau) {  // (from the original)
                                        u32 r0_11 = Item__has_number(item_2, 0x9eu);  // (from the original)
                                        if (r0_11 == 0) {
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
    return 0u;
}

}  // namespace d_00700cdc
GUEST_EXPORT_FRAMED(0x00700cdc, d_00700cdc::can_spawn_on_ground_at, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00700f58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The insect spawn table for the time: the island's (by period), the tour's (by tour kind and period) or the month's
// (by period).
namespace d_00700f58 {

inline guest::global<u32, 0x0095c6d0> tour_instance;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x0076eb60, u32(u32)> slot_byte_0e;

u32 insect_spawn_table_for_time(gptr<TimeStamp> time_stamp, u32 r1, u32 r2) {
    u32 r0_4 = 0;
    u32 scene = current_scene_id(time_stamp.addr(), r1, r2, guest::cpu()->r[3]);
    u32 scene_flagged = scene_has_flags(0x40000u, scene);  // (from the original)
    if (scene_flagged != 0) {
        u32 r0_3 = s8(u8(time_stamp->hour));
        u32 r1_2 = r0_3 - 4u;
        if (r1_2 < 4u) {
            r0_4 = 1u;
        } else {
            r1_2 = r0_3 - 8u;
            if (r1_2 < 8u) {
                r0_4 = 2u;
            } else if (r0_3 == 0x10u) {  // (from the original)
                r0_4 = 3u;
            } else {
                r1_2 = r0_3 - 0x11u;  // (from the original)
                r0_4 = r1_2 < 2u ? 4u : r0_3 - 0x13u >= 4u ? 0u : 5u;  // (from the original)
            }
        }
        guest::cpu()->r[1] = r1_2;
        return r0_4 * 0x7cu + 0x86e81cu;  // (from the original)
    }
    u32 scene_2 = current_scene_id(scene_flagged, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 scene_flagged_2 = scene_has_flags(0x20000u, scene_2);  // (from the original)
    if (scene_flagged_2 != 0) {
        u32 r0_9 = slot_byte_0e(*tour_instance + 0x10u);  // (from the original)
        u32 r0_10 = s8(u8(time_stamp->hour));
        u32 r2_4 = r0_10 - 4u < 4u ? 1u : r0_10 - 8u < 8u ? 2u : r0_10 == 0x10u ? 3u : r0_10 - 0x11u < 2u ? 4u : r0_10 - 0x13u >= 4u ? 0u : 5u;  // (from the original)
        u32 r1_3 = r2_4 * 0x1fu;  // (from the original)
        guest::cpu()->r[1] = r1_3;
        return (r0_9 * 0x1fu) * 0x18u + 0x86e81cu + (r1_3 << 2);  // (from the original)
    }
    u32 r1_4 = (u32(u8(time_stamp->month)) - 1u & 0xffu) * 0x21u * 0x18u + 0x86c2fcu;  // (from the original)
    u32 r0_13 = s8(u8(time_stamp->hour));
    u32 r0_14 = r0_13 - 4u < 4u ? 1u : r0_13 - 8u < 8u ? 2u : r0_13 == 0x10u ? 3u : r0_13 - 0x11u < 2u ? 4u : r0_13 - 0x13u >= 4u ? 0u : 5u;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    return r1_4 + r0_14 * 0x84u;  // (from the original)
}

}  // namespace d_00700f58
GUEST_EXPORT_FRAMED(0x00700f58, d_00700f58::insect_spawn_table_for_time, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_007010f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The two spawn bytes (+0x4a, +0x4b) of the insect item's table entry.
namespace d_007010f8 {

struct __attribute__((packed)) Object_007010f8_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_007010f8_0, word_0, 0x0);

struct __attribute__((packed)) Object_007010f8_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_007010f8_1, word_0, 0x0);

struct __attribute__((packed)) Local_007010f8_r0_3 {
    u8 unknown_0[0x4a];  // (not used here)
    u8 byte_4a;
    u8 byte_4b;
};
GUEST_OFFSET(Local_007010f8_r0_3, byte_4a, 0x4a);
GUEST_OFFSET(Local_007010f8_r0_3, byte_4b, 0x4b);

inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> Item__category;
inline constexpr guest::Function<0x006d9058, u32(u32)> item_actor_kind_index;

void insect_spawn_params(gptr<Object_007010f8_0> arg0, gptr<Object_007010f8_1> arg1, u32 player) {
    u32 category_2 = Item__category(player, arg1.addr(), player, guest::cpu()->r[3]);
    if (category_2 == 0x24u) {  // (from the original)
        u32 r0_2 = item_actor_kind_index(player);
        gptr<Local_007010f8_r0_3> r0_3 = gptr<Local_007010f8_r0_3>((r0_2 & 0xffu) * 0x50u + 0x868888u);  // (from the original)
        arg0->word_0 = u32(r0_3->byte_4a);
        arg1->word_0 = u32(r0_3->byte_4b);
    }
}

}  // namespace d_007010f8
GUEST_EXPORT_FRAMED(0x007010f8, d_007010f8::insect_spawn_params, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_007011e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Records the insect in the current player's encyclopedia when it is not in the caught set (+0x6c20) yet.
namespace d_007011e8 {

inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> get_current_player;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> Item__copy_b;
inline constexpr guest::Function<0x002fcb34, u32(u32)> Item__category;
inline constexpr guest::Function<0x006bd2c8, u32(u32, u32)> Player__catch_record_of_item;
inline constexpr guest::Function<0x007701b8, u32(u32, u32)> ItemBitSet__contains;

struct __attribute__((packed)) Frame_007011e8 {
    u32 word_0;
};
GUEST_OFFSET(Frame_007011e8, word_0, 0x0);
GUEST_SIZE(Frame_007011e8, 0x4);

u32 Player__record_new_insect(u32 player, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_007011e8> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 player_2 = get_current_player(player, r1, guest::cpu()->r[2], r3);
    if (player_2 != 0) {
        u32 category_2 = Item__category(player);
        if (category_2 == 0x24u) {  // (from the original)
            u32 r0_3 = frame.at(0).addr();
            Item__copy_b(r0_3, player);
            u32 r0_4 = ItemBitSet__contains(player_2 + 0x6c20u, r0_3);  // (from the original)
            if ((r0_4 ^ 1u) == 0) {
                u32 catch_record_2 = Player__catch_record_of_item(player_2, player);
                return catch_record_2;
            }
        }
    }
    return 0u;
}

}  // namespace d_007011e8
GUEST_EXPORT_FRAMED(0x007011e8, d_007011e8::Player__record_new_insect, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_007017a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Word `index` (below 3) of the table at 0x95321c; the first otherwise.
namespace d_007017a8 {

inline constexpr u32 words_95321c_address = 0x0095321cu;
inline guest::global<u32, 0x0095321c> words_95321c;

u32 word_of_3_95321c(u32 r0) {
    u32 r0_1 = r0 >= 3u ? *words_95321c : gptr<u32>(words_95321c_address)[r0];
    guest::cpu()->r[1] = words_95321c_address;
    return r0_1;
}

}  // namespace d_007017a8
GUEST_EXPORT(0x007017a8, d_007017a8::word_of_3_95321c);

// f_007017c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Updates the current player's record of the insect item.
namespace d_007017c0 {

inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> get_current_player;
inline constexpr guest::Function<0x002fcb34, u32(u32)> Item__category;
inline constexpr guest::Function<0x006bd56c, u32(u32, u32, u32, u32)> ItemFlags__check;

u32 Player__update_insect_record(u32 player, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 player_2 = get_current_player(player, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r4_1 = player_2;
    if (player_2 != 0) {
        player_2 = Item__category(player);
        if (player_2 == 0x24u) {  // (from the original)
            frame.release();
            return ItemFlags__check(r4_1, player, guest::cpu()->r[2], guest::cpu()->r[3]);
        }
    }
    return player_2;
}

}  // namespace d_007017c0
GUEST_EXPORT(0x007017c0, d_007017c0::Player__update_insect_record);

// f_007017f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Picks a random insect from the spawn table for the time, weighted by its chances.
namespace d_007017f8 {

struct __attribute__((packed)) Local_007017f8_r5_1 {
    u8 unknown_0[0x2];  // (not used here)
    u16 half_2;
    u8 byte_4;
    u8 unknown_5[0x1];  // (not used here)
    u16 half_6;
};
GUEST_OFFSET(Local_007017f8_r5_1, half_2, 0x2);
GUEST_OFFSET(Local_007017f8_r5_1, byte_4, 0x4);
GUEST_OFFSET(Local_007017f8_r5_1, half_6, 0x6);

inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> game_time_now;
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> random_below;
inline constexpr guest::Function<0x00700f58, u32(u32)> insect_spawn_table_for_time;
inline constexpr guest::Function<0x00701694, u32(u32, u32, u32)> Item__from_insect_index;

struct __attribute__((packed)) Frame_007017f8 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 unknown_3[0x3];  // (not read or written by name)
    u16 half_6;
    u8 unknown_8[0x2];  // (not read or written by name)
    u16 half_a;
    u8 unknown_c[0x2];  // (not read or written by name)
    u16 half_e;
};
GUEST_OFFSET(Frame_007017f8, byte_0, 0x0);
GUEST_OFFSET(Frame_007017f8, byte_1, 0x1);
GUEST_OFFSET(Frame_007017f8, byte_2, 0x2);
GUEST_OFFSET(Frame_007017f8, half_6, 0x6);
GUEST_OFFSET(Frame_007017f8, half_a, 0xa);
GUEST_OFFSET(Frame_007017f8, half_e, 0xe);
GUEST_SIZE(Frame_007017f8, 0x10);

void pick_insect_to_spawn(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_007017f8> frame;  // the original's stack frame
    u32 r4 = r0;
    *frame.at<u32>(4) = 0;
    *frame.at<u32>(8) = 0;
    *frame.at<u32>(0xc) = 0;  // (from the original)
    *frame.at<u8>(4) = 0;
    *frame.at<u8>(8) = 0;
    *frame.at<u8>(0xc) = 0;  // (from the original)
    frame->half_6 = 0;
    frame->half_a = 0;
    frame->half_e = 0;
    u32 now = game_time_now(0u, r1, r2, r3);
    u32 r0_2 = insect_spawn_table_for_time(now);
    r3 = r0_2;
    r1 = 0u;
    r0 = frame.at(4).addr();
L_701840:;
    u32 r7 = *gptr<u16>(r3 + 2u);
    u32 r12 = r7 - r1;
    r1 = 2u;
L_70184c:;
    r2 = *gptr<u16>(r0 + (r1 << 2) + 2u);
    u32 cf_1 = r2 >= r12;
    if (!cf_1) {
        r2 = *gptr<u8>(r3);
        cf_1 = r2 >= 0x53u;  // (from the original)
    }
    if (cf_1) {
        r1 -= 1u;
        u32 res_1 = r1 + 1u;
        if (res_1 != 0 && res_1 >> 0x1f == ((r1 ^ res_1) & (1u ^ res_1)) >> 0x1f) {  // (from the original)
            guest::preempt();
            goto L_70184c;
        }
    } else {
        if (r1 != 0 && s32(r1) >= 0) {
            r2 = 0u;
        }
        if (s32(r1) > 0) {
            do {
                gptr<Local_007017f8_r5_1> r5_1 = gptr<Local_007017f8_r5_1>(r0 + (r2 << 2));
                u32 r6_1 = r5_1->half_6;
                u32 r8_1 = r5_1->byte_4;
                r5_1->half_2 = u16(r6_1);
                *gptr<u8>(r0 + (r2 << 2)) = u8(r8_1);
                r2 += 1u;
                guest::preempt();
            } while (s32(r1) > s32(r2));
        }
        *gptr<u16>(r0 + (r1 << 2) + 2u) = u16(r12);
        r2 = *gptr<u8>(r3);
        *gptr<u8>(r0 + (r1 << 2)) = u8(r2);
    }
    if (r7 != 0x3e8u) {  // (from the original)
        u32 ea_1 = r3 + 4u;
        r3 = ea_1;
        r2 = *gptr<u8>(ea_1);
        r1 = r7;
        if (r2 != 0x53u) {  // (from the original)
            guest::preempt();
            goto L_701840;
        }
    }
    frame->byte_0 = *frame.at<u8>(4);
    frame->byte_1 = *frame.at<u8>(8);
    frame->byte_2 = *frame.at<u8>(0xc);  // (from the original)
    u32 random_2 = random_below(3u, r1, r2, r3);
    u32 r1_2 = *gptr<u8>(frame.at(0).addr() + random_2);
    Item__from_insect_index(r4, r1_2, 0u);
}

}  // namespace d_007017f8
GUEST_EXPORT_FRAMED(0x007017f8, d_007017f8::pick_insect_to_spawn, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00701900: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds the list of insects that can spawn now from the spawn table for the time.
namespace d_00701900 {

inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> game_time_now;
inline constexpr guest::Function<0x00700f58, u32(u32)> insect_spawn_table_for_time;

struct __attribute__((packed)) Frame_00701900 {
    u8 unknown_0[0x2];  // (not read or written by name)
    u16 half_2;
    u8 unknown_4[0x2];  // (not read or written by name)
    u16 half_6;
    u8 unknown_8[0x2];  // (not read or written by name)
    u16 half_a;
};
GUEST_OFFSET(Frame_00701900, half_2, 0x2);
GUEST_OFFSET(Frame_00701900, half_6, 0x6);
GUEST_OFFSET(Frame_00701900, half_a, 0xa);
GUEST_SIZE(Frame_00701900, 0xc);

void build_insect_spawn_list(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00701900> frame;  // the original's stack frame
    u32 r4 = r0;
    *frame.at<u32>(0) = 0;
    *frame.at<u32>(4) = 0;
    *frame.at<u32>(8) = 0;
    *frame.at<u8>(0) = 0;
    *frame.at<u8>(4) = 0;
    *frame.at<u8>(8) = 0;
    frame->half_2 = 0;
    frame->half_6 = 0;
    frame->half_a = 0;
    u32 now = game_time_now(0u, r1, r2, r3);
    u32 r0_2 = insect_spawn_table_for_time(now);
    r3 = r0_2;
    r1 = 0u;
    r0 = frame.at(0).addr();
L_701948:;
    u32 r6 = *gptr<u16>(r3 + 2u);
    u32 r12 = r6 - r1;
    r1 = 2u;
L_701954:;
    r2 = *gptr<u16>(r0 + (r1 << 2) + 2u);
    u32 cf_1 = r2 >= r12;
    if (!cf_1) {
        r2 = *gptr<u8>(r3);
        cf_1 = r2 >= 0x53u;  // (from the original)
    }
    if (cf_1) {
        r1 -= 1u;
        u32 res_1 = r1 + 1u;
        if (res_1 != 0 && res_1 >> 0x1f == ((r1 ^ res_1) & (1u ^ res_1)) >> 0x1f) {  // (from the original)
            guest::preempt();
            goto L_701954;
        }
    } else {
        if (r1 != 0 && s32(r1) >= 0) {
            r2 = 0u;
        }
        if (s32(r1) > 0) {
            do {
                u32 r14 = r0 + (r2 << 2);
                u32 r5_1 = *gptr<u8>(r14 + 4u);
                *gptr<u16>(r14 + 2u) = *gptr<u16>(r14 + 6u);
                *gptr<u8>(r0 + (r2 << 2)) = u8(r5_1);
                r2 += 1u;
                guest::preempt();
            } while (s32(r1) > s32(r2));
        }
        *gptr<u16>(r0 + (r1 << 2) + 2u) = u16(r12);
        *gptr<u8>(r0 + (r1 << 2)) = *gptr<u8>(r3);
    }
    if (r6 != 0x3e8u) {  // (from the original)
        u32 ea_1 = r3 + 4u;
        r3 = ea_1;
        r1 = r6;
        if (*gptr<u8>(ea_1) != 0x53u) {  // (from the original)
            guest::preempt();
            goto L_701948;
        }
    }
    *gptr<u8>(r4) = *frame.at<u8>(0);
    *gptr<u8>(r4 + 1u) = *frame.at<u8>(4);
    *gptr<u8>(r4 + 2u) = *frame.at<u8>(8);
    guest::cpu()->r[1] = r1;
}

}  // namespace d_00701900
GUEST_EXPORT_FRAMED(0x00701900, d_00701900::build_insect_spawn_list, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_007019f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Splits the spawn index into an item index and category: 72 insects (0x24), then 0x26, 8 of 0x25, 0x98 and 0x9a.
namespace d_007019f0 {

struct __attribute__((packed)) Object_007019f0_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_007019f0_0, word_0, 0x0);

struct __attribute__((packed)) Object_007019f0_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_007019f0_1, word_0, 0x0);


void insect_index_to_item(gptr<Object_007019f0_0> arg0, gptr<Object_007019f0_1> arg1, u32 r2) {
    u32 r2_4 = 0;
    u32 r3_1 = 0x24u;  // (from the original)
    if (s32(r2) < 0x48) {  // (from the original)
        arg0->word_0 = r2;
        arg1->word_0 = r3_1;
        return;
    }
    if (s32(r2) < 0x49) {  // (from the original)
        arg0->word_0 = r2 - 0x48u;  // (from the original)
        arg1->word_0 = 0x26;  // (from the original)
        return;
    }
    if (s32(r2) < 0x51) {  // (from the original)
        arg0->word_0 = r2 - 0x49u;  // (from the original)
        arg1->word_0 = 0x25;  // (from the original)
        return;
    }
    if (s32(r2) < 0x52) {  // (from the original)
        arg0->word_0 = r2 - 0x51u;  // (from the original)
        arg1->word_0 = 0x98;  // (from the original)
        return;
    }
    if (s32(r2) < 0x53) {  // (from the original)
        r2_4 = r2 - 0x52u;  // (from the original)
        r3_1 = 0x9au;  // (from the original)
    } else {
        r2_4 = 0u;
    }
    arg0->word_0 = r2_4;
    arg1->word_0 = r3_1;
}

}  // namespace d_007019f0
GUEST_EXPORT(0x007019f0, d_007019f0::insect_index_to_item);

// f_00706368: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Visits the cells of the rectangle in random order, marking them.
namespace d_00706368 {

struct __attribute__((packed)) Local_00706368_r0_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00706368_r0_1, word_0, 0x0);
GUEST_OFFSET(Local_00706368_r0_1, word_4, 0x4);

struct __attribute__((packed)) Local_00706368_r0_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00706368_r0_2, word_0, 0x0);
GUEST_OFFSET(Local_00706368_r0_2, word_4, 0x4);

inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> WrappingCursor__advance;
inline constexpr guest::Function<0x0052f200, u32(u32, u32, u32, u32)> construct_word_quad_from_pairs;
inline constexpr guest::Function<0x0055cb58, u32(u32, u32, u32, u32)> Xorshift128__next_0055cb58;
inline constexpr guest::Function<0x007481ec, u32(u32, u32)> key_records_differ;
inline constexpr guest::Function<0x0074824c, u32(u32, u32)> make_end_grid_rect_iterator;
inline constexpr guest::Function<0x00748284, u32(u32, u32)> construct_grid_rect_iterator;

struct __attribute__((packed)) Frame_00706368 {
    u8 unknown_0[0x28];  // (not read or written by name)
    u32 word_28;
    u32 word_2c;
    u8 unknown_30[0x14];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00706368, word_28, 0x28);
GUEST_OFFSET(Frame_00706368, word_2c, 0x2c);
GUEST_SIZE(Frame_00706368, 0x44);

u32 scatter_random_cells(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00706368> frame;  // the original's stack frame
    u32 r0_11 = 0;
    u32 r0_17 = 0;
    u32 r4 = r0;
    u32 r5 = r1;
    u32 r9 = r2;
    u32 r8 = r3;
    gptr<Local_00706368_r0_1> r0_1 = gptr<Local_00706368_r0_1>(frame.at(0x38).addr());  // (from the original)
    r0_1->word_0 = 4;
    r0_1->word_4 = 3;
    gptr<Local_00706368_r0_2> r0_2 = gptr<Local_00706368_r0_2>(frame.at(0x30).addr());  // (from the original)
    r0_2->word_0 = 2;
    r0_2->word_4 = 2;
    construct_word_quad_from_pairs(frame.at(0x10).addr(), r0_2.addr(), r0_1.addr(), r3);  // (from the original)
    make_end_grid_rect_iterator(frame.at(0).addr(), frame.at(0x10).addr());  // (from the original)
    u32 r6 = 0u;
    construct_grid_rect_iterator(frame.at(0x20).addr(), frame.at(0x10).addr());  // (from the original)
    u32 r0_7 = key_records_differ(frame.at(0x20).addr(), frame.at(0).addr());  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_7 == 0) {
        return 0u;
    }
    do {
        u32 r7_1 = frame->word_28;
        u32 r0_8 = frame->word_2c;
        if (*gptr<u8>(r7_1 + ((r0_8 << 3) - r0_8 + r4)) == r5) {
            r6 += 1u;
        }
        WrappingCursor__advance(frame.at(0x20).addr(), r1, r2, r3);  // (from the original)
        r0_11 = key_records_differ(frame.at(0x20).addr(), frame.at(0).addr());  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        guest::preempt();
    } while (r0_11 != 0);
    if (r6 == 0) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    u32 r7 = 0u;
    u32 r0_12 = Xorshift128__next_0055cb58(r8, r1, r2, r3);
    r6 = u64(r0_12) * r6 >> 0x20;  // (from the original)
    construct_grid_rect_iterator(frame.at(0x20).addr(), frame.at(0x10).addr());  // (from the original)
    u32 r0_15 = key_records_differ(frame.at(0x20).addr(), frame.at(0).addr());  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_15 == 0) {
        return 1u;
    }
L_706488:;
    u32 r8_1 = frame->word_28;
    u32 r0_16 = frame->word_2c;
    if (*gptr<u8>(r8_1 + ((r0_16 << 3) - r0_16 + r4)) != r5) {
        goto L_706520;
    }
    if (r7 != r6) {
        r7 += 1u;
        goto L_706520;
    }
    r0_17 = frame->word_2c;
    *gptr<u8>(frame->word_28 + ((r0_17 << 3) - r0_17 + r4)) = u8(r9);
    guest::cpu()->r[1] = r1;
    return 1u;
L_706520:;
    WrappingCursor__advance(frame.at(0x20).addr(), r1, r2, r3);  // (from the original)
    u32 r0_20 = key_records_differ(frame.at(0x20).addr(), frame.at(0).addr());  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_20 != 0) {
        guest::preempt();
        goto L_706488;
    }
    return 1u;
}

}  // namespace d_00706368
GUEST_EXPORT_FRAMED(0x00706368, d_00706368::scatter_random_cells, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_007075b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the tile triangles of the large cell's blocks from its shape.
namespace d_007075b4 {

struct __attribute__((packed)) Local_007075b4_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_007075b4_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_007075b4_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_007075b4_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_007075b4_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_007075b4_ea_4, word_4, 0x4);

struct __attribute__((packed)) Local_007075b4_ea_6 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_007075b4_ea_6, word_0, 0x0);
GUEST_OFFSET(Local_007075b4_ea_6, word_4, 0x4);

struct __attribute__((packed)) Local_007075b4_ea_8 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_007075b4_ea_8, word_0, 0x0);
GUEST_OFFSET(Local_007075b4_ea_8, word_4, 0x4);

struct __attribute__((packed)) Local_007075b4_r3_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_007075b4_r3_2, word_0, 0x0);
GUEST_OFFSET(Local_007075b4_r3_2, word_4, 0x4);

inline guest::global<u32, 0x0085f2e0> cell_size_x;
inline guest::global<u32, 0x0085f2e4> cell_size_z;
inline guest::global<u32, 0x0085f2e8> half_cell_x;
inline guest::global<u32, 0x0085f2ec> half_cell_z;
inline constexpr guest::Function<0x0052ed04, u32(u32, u32)> GridPoint__set_tile_in_block;
inline constexpr guest::Function<0x0052edfc, u32(u32, u32, u32, u32)> block_of_cell;
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32)> GridMap__large_cell_at;
inline constexpr guest::Function<0x007667d0, u32(u32, u32, u32, u32)> Grid__tile_triangle_0;
inline constexpr guest::Function<0x0076689c, u32(u32, u32, u32, u32)> Grid__tile_triangle_2;
inline constexpr guest::Function<0x00766968, u32(u32, u32, u32, u32)> Grid__tile_triangle_1;
inline constexpr guest::Function<0x00766a34, u32(u32, u32, u32, u32)> Grid__tile_triangle_3;

struct __attribute__((packed)) Frame_007075b4 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_007075b4, word_0, 0x0);
GUEST_OFFSET(Frame_007075b4, word_4, 0x4);
GUEST_SIZE(Frame_007075b4, 0x10);

void set_cell_tile_triangles(u32 r0, u32 r1, u32 tile, u32 r3) {
    guest::StackFrameOf<Frame_007075b4> frame;  // the original's stack frame
    u32 r0_4 = 0;
    block_of_cell(frame.at(8).addr(), tile, tile, r3);
    GridPoint__set_tile_in_block(frame.at(0).addr(), tile);
    gptr<Local_007075b4_r3_2> r3_2 = gptr<Local_007075b4_r3_2>(frame.at(8).addr());
    u32 large_cell_2 = GridMap__large_cell_at(r1, r3_2->word_0, r3_2->word_4);
    if (large_cell_2 != 0) {
        if (r3 != 0) {
            if (r3 == 1u) {
                Grid__tile_triangle_1(large_cell_2, r0, frame->word_0, frame->word_4);
            } else if (r3 == 2u) {
                Grid__tile_triangle_2(large_cell_2, r0, frame->word_0, frame->word_4);
            } else if (r3 == 3u) {
                Grid__tile_triangle_3(large_cell_2, r0, frame->word_0, frame->word_4);
            }
        } else {
            Grid__tile_triangle_0(large_cell_2, r0, frame->word_0, frame->word_4);
        }
    } else {
        if (r3 != 0) {
            if (r3 == 1u) {
                *gptr<u32>(r0 + 4u) = 0;
                gptr<Local_007075b4_ea_2> ea_2 = gptr<Local_007075b4_ea_2>(r0 + 8u);
                ea_2->word_0 = 0x2710;  // (from the original)
                ea_2->word_4 = 0;
                u32 r6_1 = *cell_size_x;
                u32 r7_1 = *gptr<u32>(tile);
                u32 r8_1 = *half_cell_x;
                *gptr<u32>(r0 + 0x18u) = 0x2710;  // (from the original)
                *gptr<u32>(r0 + 0x14u) = r7_1 * r6_1 - r8_1;  // (from the original)
                *gptr<u32>(r0 + 0x1cu) = *gptr<u32>(tile + 4u) * *cell_size_z - *half_cell_z;  // (from the original)
                u32 r3_7 = *cell_size_x;
                u32 r6_2 = *gptr<u32>(tile);
                u32 r1_2 = *half_cell_x;
                *gptr<u32>(r0 + 0x28u) = 0x2710;  // (from the original)
                *gptr<u32>(r0 + 0x24u) = r6_2 * r3_7 - r1_2;  // (from the original)
                r0_4 = *cell_size_z * *gptr<u32>(tile + 4u) + *half_cell_z;
            } else if (r3 == 2u) {
                *gptr<u32>(r0 + 4u) = 0;
                gptr<Local_007075b4_ea_4> ea_4 = gptr<Local_007075b4_ea_4>(r0 + 8u);
                ea_4->word_0 = 0x2710;  // (from the original)
                ea_4->word_4 = 0;
                u32 r6_3 = *cell_size_x;
                u32 r8_2 = *gptr<u32>(tile);
                u32 r7_2 = *half_cell_x;
                *gptr<u32>(r0 + 0x18u) = 0x2710;  // (from the original)
                *gptr<u32>(r0 + 0x14u) = r8_2 * r6_3 - r7_2;  // (from the original)
                *gptr<u32>(r0 + 0x1cu) = *cell_size_z * *gptr<u32>(tile + 4u) + *half_cell_z;  // (from the original)
                u32 r3_8 = *cell_size_x;
                u32 r6_4 = *gptr<u32>(tile);
                u32 r1_3 = *half_cell_x;
                *gptr<u32>(r0 + 0x28u) = 0x2710;  // (from the original)
                *gptr<u32>(r0 + 0x24u) = r3_8 * r6_4 + r1_3;  // (from the original)
                r0_4 = *cell_size_z * *gptr<u32>(tile + 4u) + *half_cell_z;
            } else {
                if (r3 != 3u) {
                    return;
                }
                *gptr<u32>(r0 + 4u) = 0;
                gptr<Local_007075b4_ea_6> ea_6 = gptr<Local_007075b4_ea_6>(r0 + 8u);
                ea_6->word_0 = 0x2710;  // (from the original)
                ea_6->word_4 = 0;
                u32 r6_5 = *gptr<u32>(tile);
                u32 r8_3 = *cell_size_x;
                u32 r7_3 = *half_cell_x;
                *gptr<u32>(r0 + 0x18u) = 0x2710;  // (from the original)
                *gptr<u32>(r0 + 0x14u) = r8_3 * r6_5 + r7_3;  // (from the original)
                *gptr<u32>(r0 + 0x1cu) = *cell_size_z * *gptr<u32>(tile + 4u) + *half_cell_z;  // (from the original)
                u32 r3_9 = *cell_size_x;
                u32 r6_6 = *gptr<u32>(tile);
                u32 r1_4 = *half_cell_x;
                *gptr<u32>(r0 + 0x28u) = 0x2710;  // (from the original)
                *gptr<u32>(r0 + 0x24u) = r3_9 * r6_6 + r1_4;  // (from the original)
                r0_4 = *gptr<u32>(tile + 4u) * *cell_size_z - *half_cell_z;
            }
        } else {
            *gptr<u32>(r0 + 4u) = 0;
            gptr<Local_007075b4_ea_8> ea_8 = gptr<Local_007075b4_ea_8>(r0 + 8u);
            ea_8->word_0 = 0x2710;  // (from the original)
            ea_8->word_4 = 0;
            u32 r6_7 = *gptr<u32>(tile);
            u32 r8_4 = *cell_size_x;
            u32 r7_4 = *half_cell_x;
            *gptr<u32>(r0 + 0x18u) = 0x2710;  // (from the original)
            *gptr<u32>(r0 + 0x14u) = r8_4 * r6_7 + r7_4;  // (from the original)
            *gptr<u32>(r0 + 0x1cu) = *gptr<u32>(tile + 4u) * *cell_size_z - *half_cell_z;  // (from the original)
            u32 r3_10 = *cell_size_x;
            u32 r6_8 = *gptr<u32>(tile);
            u32 r1_5 = *half_cell_x;
            *gptr<u32>(r0 + 0x28u) = 0x2710;  // (from the original)
            *gptr<u32>(r0 + 0x24u) = r6_8 * r3_10 - r1_5;  // (from the original)
            r0_4 = *gptr<u32>(tile + 4u) * *cell_size_z - *half_cell_z;
        }
        *gptr<u32>(r0 + 0x2cu) = r0_4;  // (from the original)
    }
}

}  // namespace d_007075b4
GUEST_EXPORT_FRAMED(0x007075b4, d_007075b4::set_cell_tile_triangles, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00707ebc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Adds the quad of the four corners as two collision triangles (raised for height 0x20) at `index`; the next index.
namespace d_00707ebc {

struct __attribute__((packed)) Object_00707ebc_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_00707ebc_0, word_4, 0x4);
GUEST_OFFSET(Object_00707ebc_0, word_8, 0x8);
GUEST_OFFSET(Object_00707ebc_0, word_c, 0xc);

struct __attribute__((packed)) Object_00707ebc_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_00707ebc_1, word_4, 0x4);
GUEST_OFFSET(Object_00707ebc_1, word_8, 0x8);
GUEST_OFFSET(Object_00707ebc_1, word_c, 0xc);

struct __attribute__((packed)) Object_00707ebc_2 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_00707ebc_2, word_4, 0x4);
GUEST_OFFSET(Object_00707ebc_2, word_8, 0x8);
GUEST_OFFSET(Object_00707ebc_2, word_c, 0xc);

struct __attribute__((packed)) Object_00707ebc_3 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_00707ebc_3, word_4, 0x4);
GUEST_OFFSET(Object_00707ebc_3, word_8, 0x8);
GUEST_OFFSET(Object_00707ebc_3, word_c, 0xc);

struct __attribute__((packed)) Local_00707ebc_r0_1 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_00707ebc_r0_1, float_0, 0x0);
GUEST_OFFSET(Local_00707ebc_r0_1, float_4, 0x4);
GUEST_OFFSET(Local_00707ebc_r0_1, float_8, 0x8);

struct __attribute__((packed)) Local_00707ebc_r0_2 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_00707ebc_r0_2, float_0, 0x0);
GUEST_OFFSET(Local_00707ebc_r0_2, float_4, 0x4);
GUEST_OFFSET(Local_00707ebc_r0_2, float_8, 0x8);

struct __attribute__((packed)) Local_00707ebc_r0_3 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_00707ebc_r0_3, float_0, 0x0);
GUEST_OFFSET(Local_00707ebc_r0_3, float_4, 0x4);
GUEST_OFFSET(Local_00707ebc_r0_3, float_8, 0x8);

struct __attribute__((packed)) Local_00707ebc_r0_4 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_00707ebc_r0_4, float_0, 0x0);
GUEST_OFFSET(Local_00707ebc_r0_4, float_4, 0x4);
GUEST_OFFSET(Local_00707ebc_r0_4, float_8, 0x8);

inline constexpr u32 wall_quads_a_address = 0x009877c0u;
inline constexpr u32 wall_quads_b_address = 0x009893c0u;
inline constexpr guest::Function<0x0056a2c0, u32(u32, u32, u32, u32)> Transform__set;
inline constexpr guest::Function<0x006f7e40, u32(u32, u32, u32, u32)> CollisionTriangleRef__set;

u32 add_wall_quad(gptr<Object_00707ebc_0> arg0, gptr<Object_00707ebc_1> arg1, gptr<Object_00707ebc_2> arg2, gptr<Object_00707ebc_3> arg3) {
    guest::StackFrame frame(0x30);  // the original's stack frame
    float S2_1 = float(s32(arg0->word_c));
    u32 r4_1 = *frame.at<u32>(0x4c);  // (from the original)
    u32 r8_1 = *frame.at<u32>(0x48);  // (from the original)
    float S1_1 = float(s32(arg0->word_8 - 0x10u));  // (from the original)
    gptr<Local_00707ebc_r0_1> r0_1 = gptr<Local_00707ebc_r0_1>(frame.at(0).addr());
    r0_1->float_0 = float(s32(arg0->word_4));
    r0_1->float_4 = S1_1;
    r0_1->float_8 = S2_1;
    float S2_2 = float(s32(arg1->word_c));
    gptr<Local_00707ebc_r0_2> r0_2 = gptr<Local_00707ebc_r0_2>(frame.at(0x18).addr());  // (from the original)
    float S1_2 = float(s32(arg1->word_8 - 0x10u));  // (from the original)
    r0_2->float_0 = float(s32(arg1->word_4));
    r0_2->float_4 = S1_2;
    r0_2->float_8 = S2_2;
    u32 r5_1 = 0u;
    if (r8_1 == 0x20u) {  // (from the original)
        r5_1 = 0x10u;  // (from the original)
    }
    gptr<Local_00707ebc_r0_3> r0_3 = gptr<Local_00707ebc_r0_3>(frame.at(0xc).addr());  // (from the original)
    float S2_3 = float(s32(arg2->word_c));
    float S1_3 = float(s32(arg2->word_8 + r5_1));
    r0_3->float_0 = float(s32(arg2->word_4));
    r0_3->float_4 = S1_3;
    r0_3->float_8 = S2_3;
    float S2_4 = float(s32(arg3->word_c));
    float S0_1 = float(s32(arg3->word_4));
    gptr<Local_00707ebc_r0_4> r0_4 = gptr<Local_00707ebc_r0_4>(frame.at(0x24).addr());  // (from the original)
    float S1_4 = float(s32(arg3->word_8 + r5_1));
    r0_4->float_0 = S0_1;
    r0_4->float_4 = S1_4;
    r0_4->float_8 = S2_4;
    u32 r5_2 = r4_1 * 0x38u + wall_quads_a_address;  // (from the original)
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_4;
    Transform__set(r5_2, frame.at(0).addr(), frame.at(0x18).addr(), frame.at(0xc).addr());  // (from the original)
    CollisionTriangleRef__set((r4_1 << 4) + wall_quads_b_address, r5_2, r8_1, ~0x80000000u);  // (from the original)
    u32 r5_3 = (r4_1 + 1u) * 0x38u + wall_quads_a_address;  // (from the original)
    Transform__set(r5_3, frame.at(0xc).addr(), frame.at(0x24).addr(), frame.at(0).addr());  // (from the original)
    CollisionTriangleRef__set((r4_1 + 1u << 4) + wall_quads_b_address, r5_3, r8_1, ~0x80000000u);  // (from the original)
    return r4_1 + 2u;
}

}  // namespace d_00707ebc
GUEST_EXPORT_FRAMED(0x00707ebc, d_00707ebc::add_wall_quad, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0070a758: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Loads the button position layout of the object at +0x318; true when there is none.
namespace d_0070a758 {

struct __attribute__((packed)) Object_0070a758_0 {
    u8 unknown_0[0x318];  // (not used here)
    u32 word_318;
};
GUEST_OFFSET(Object_0070a758_0, word_318, 0x318);

inline constexpr guest::Function<0x002b7cd4, u32(u32, u32)> load_button_position_layout;

u32 load_button_layout_318(gptr<Object_0070a758_0> arg0) {
    u32 r0_1 = arg0->word_318;
    if (r0_1 == 0) {
        return 1u;
    }
    return load_button_position_layout(r0_1, guest::cpu()->r[1]);
}

}  // namespace d_0070a758
GUEST_EXPORT(0x0070a758, d_0070a758::load_button_layout_318);

// f_0070aa00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// False when the state pair (+0xc) is either of the two idle handler pairs (0x857a60, 0x857a88), else true.
namespace d_0070aa00 {

struct __attribute__((packed)) Object_0070aa00_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_0070aa00_0, word_c, 0xc);
GUEST_OFFSET(Object_0070aa00_0, word_10, 0x10);

inline guest::global<u32, 0x00857a60> menu_idle_handler;
inline guest::global<u32, 0x00857a64> menu_idle_handler_adjust;
inline guest::global<u32, 0x00857a88> menu_resume_handler_b;
inline guest::global<u32, 0x00857a8c> menu_resume_handler_b_adjust;

u32 state_is_not_idle_857a60(gptr<Object_0070aa00_0> arg0) {
    u32 r3_1 = arg0->word_c;
    u32 r1_1 = *menu_idle_handler_adjust;
    if (r3_1 == *menu_idle_handler && (r3_1 == 0 && ((arg0->word_10 | r1_1) & 1u) == 0 || arg0->word_10 == r1_1)) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r1_2 = *menu_resume_handler_b_adjust;
    if (r3_1 != *menu_resume_handler_b) {
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    if (r3_1 == 0 && ((arg0->word_10 | r1_2) & 1u) == 0 || arg0->word_10 == r1_2) {
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    guest::cpu()->r[1] = r1_2;
    return 1u;
}

}  // namespace d_0070aa00
GUEST_EXPORT(0x0070aa00, d_0070aa00::state_is_not_idle_857a60);

// f_0070aa84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The value of the first sub object (+0x184c, else +0x1850).
namespace d_0070aa84 {

struct __attribute__((packed)) Object_0070aa84_0 {
    u8 unknown_0[0x184c];  // (not used here)
    u32 word_184c;
    u32 word_1850;
};
GUEST_OFFSET(Object_0070aa84_0, word_184c, 0x184c);
GUEST_OFFSET(Object_0070aa84_0, word_1850, 0x1850);

inline constexpr guest::Function<0x0071ef10, u32(u32, u32)> SubValueOwner__query_value;

u32 query_first_sub_value(gptr<Object_0070aa84_0> arg0) {
    u32 r1_1 = arg0->word_184c;
    if (r1_1 != 0) {
        return SubValueOwner__query_value(r1_1, r1_1);
    }
    u32 r0_1 = arg0->word_1850;
    if (r0_1 == 0) {
        return r0_1;
    }
    return SubValueOwner__query_value(r0_1, r1_1);
}

}  // namespace d_0070aa84
GUEST_EXPORT(0x0070aa84, d_0070aa84::query_first_sub_value);

// f_0070aabc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// True when the first sub object (+0x184c, else +0x1850) is ready.
namespace d_0070aabc {

struct __attribute__((packed)) Object_0070aabc_0 {
    u8 unknown_0[0x184c];  // (not used here)
    u32 word_184c;
    u32 word_1850;
};
GUEST_OFFSET(Object_0070aabc_0, word_184c, 0x184c);
GUEST_OFFSET(Object_0070aabc_0, word_1850, 0x1850);

inline constexpr guest::Function<0x007237e0, u32(u32, u32)> sub_is_ready;

u32 first_sub_is_ready(gptr<Object_0070aabc_0> arg0) {
    u32 r1_1 = arg0->word_184c;
    if (r1_1 != 0) {
        return sub_is_ready(r1_1, r1_1);
    }
    u32 r0_1 = arg0->word_1850;
    if (r0_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    return sub_is_ready(r0_1, r1_1);
}

}  // namespace d_0070aabc
GUEST_EXPORT(0x0070aabc, d_0070aabc::first_sub_is_ready);

// f_0070ab10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070ab10 {

struct __attribute__((packed)) Object_0070ab10_0 {
    u8 unknown_0[0x664];  // (not used here)
    u8 byte_664;
};
GUEST_OFFSET(Object_0070ab10_0, byte_664, 0x664);

inline constexpr guest::Function<0x0048a394, u32(u32, u32, u32, u32)> Friends__my_key;

u32 query_70ab10(gptr<Object_0070ab10_0> arg0) {
    u32 r0_1 = arg0->byte_664;
    if (r0_1 == 0) {
        return r0_1;
    }
    return Friends__my_key(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0070ab10
GUEST_EXPORT(0x0070ab10, d_0070ab10::query_70ab10);

// f_0070ab24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Slot `index` (fewer than 4; 0x18 bytes each, from +0xe0) passed on to call_007460e8; 0 for a larger index.
namespace d_0070ab24 {

inline constexpr guest::Function<0x007460e8, u32(u32, u32, u32, u32)> Mover__is_done;

u32 slot_of_4_at_e0(u32 r0, u32 index) {
    if (index >= 4u) {
        guest::cpu()->r[1] = index;
        return 0u;
    }
    u32 r1_1 = index * 3u;
    return Mover__is_done(r0 + (r1_1 << 3) + 0xe0u, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0070ab24
GUEST_EXPORT(0x0070ab24, d_0070ab24::slot_of_4_at_e0);

// f_0070ac44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The animation value of slot `index` (below 4, 0x18 bytes each, +0xe0); 0 otherwise.
namespace d_0070ac44 {

inline constexpr guest::Function<0x0074619c, u32(u32, u32, u32, u32)> AnimatedObject__animation_value_40;

u32 animation_value_of_slot(u32 r0, u32 r1, float S0) {
    if (r1 >= 4u) {
        float S0_1 = 0.0f;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0_1;
        return r0;
    }
    u32 r1_1 = r1 * 3u;
    guest::cpu()->s[0] = S0;
    return AnimatedObject__animation_value_40(r0 + (r1_1 << 3) + 0xe0u, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0070ac44
GUEST_EXPORT(0x0070ac44, d_0070ac44::animation_value_of_slot);

// f_0070b140: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The worn accessory item (slot +0x14 of class 5, unless the hat slot holds a category 8 item), or empty.
namespace d_0070b140 {

struct __attribute__((packed)) Object_0070b140_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_0070b140_0, word_0, 0x0);
GUEST_OFFSET(Object_0070b140_0, word_4, 0x4);

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x002fcb34, u32(u32)> Item__category;
inline constexpr guest::Function<0x0070f034, u32(u32, u32)> slots_slot_4_if_class_5;
inline constexpr guest::Function<0x0076ab28, u32(u32)> Item__wear_class;

u32 worn_accessory_item(gptr<Object_0070b140_0> arg0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r4_1 = arg0->word_0;
    if (r4_1 != 0) {
        u32 r0_2 = Item__wear_class(r4_1 + 8u);
        u32 category_2 = Item__category(r0_2 == 3u ? r4_1 + 8u : empty_item_address);
        if (category_2 == 8u) {
            return empty_item_address;
        }
        u32 r0_6 = Item__wear_class(r4_1 + 0x14u);  // (from the original)
        if (r0_6 == 5u) {
            return r4_1 + 0x14u;  // (from the original)
        }
        return empty_item_address;
    }
    u32 r0_8 = arg0->word_4;
    if (r0_8 == 0) {
        return empty_item_address;
    }
    frame.release();
    return slots_slot_4_if_class_5(r0_8, guest::cpu()->r[1]);
}

}  // namespace d_0070b140
GUEST_EXPORT(0x0070b140, d_0070b140::worn_accessory_item);

// f_0070b1a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Entry `index` of an array of 12-byte entries (entry 0 when index is 10 or more).
namespace d_0070b1a4 {


u32 entry_12_at(u32 entries, u32 index) {
    if (index >= 0xau) {  // (from the original)
        index = 0u;
    }
    return entries + index * 0xcu;  // (from the original)
}

}  // namespace d_0070b1a4
GUEST_EXPORT(0x0070b1a4, d_0070b1a4::entry_12_at);

// f_0070b334: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether a range of kind 1 or 2 has a start and an end, start <= end.
namespace d_0070b334 {

struct __attribute__((packed)) Range {
    u8 unknown_0[0x2];  // (not used here)
    u8 byte_2;
    u8 unknown_3[0x1];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Range, byte_2, 0x2);
GUEST_OFFSET(Range, word_4, 0x4);
GUEST_OFFSET(Range, word_8, 0x8);


u32 Range__is_valid(gptr<Range> range) {
    u32 r0 = range.addr();
    u32 r1_1 = range->byte_2;
    if (r1_1 != 2u && r1_1 != 1u) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r1_2 = range->word_4;
    u32 zf_1 = r1_2 == 0;
    if (!zf_1) {
        r0 = range->word_8;
        zf_1 = r0 == 0;
    }
    if (zf_1) {
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    if (r1_2 <= r0) {
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    guest::cpu()->r[1] = r1_2;
    return 0u;
}

}  // namespace d_0070b334
GUEST_EXPORT(0x0070b334, d_0070b334::Range__is_valid);

// f_0070b3b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// True when the progress is reached (states 1 and 2) and its id is a valid one of kind 0x81.
namespace d_0070b3b8 {

struct __attribute__((packed)) Progress {
    u8 unknown_0[0x2];  // (not used here)
    u8 byte_2;
    u8 unknown_3[0x1];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Progress, byte_2, 0x2);
GUEST_OFFSET(Progress, word_4, 0x4);
GUEST_OFFSET(Progress, word_8, 0x8);

inline constexpr guest::Function<0x002fb328, u32(u32, u32)> get_save_data;
inline constexpr guest::Function<0x003026e8, u32(u32, u32)> low_byte_of_id;
inline constexpr guest::Function<0x00718378, u32(u32, u32)> halfword_is_fc_or_more;

u32 Progress__is_done_for_81(gptr<Progress> progress, u32 r1) {
    u32 r5_1 = 0u;
    get_save_data(progress.addr(), r1);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r0_1 = progress->byte_2;
    if (r0_1 == 2u || r0_1 == 1u) {
        u32 r0_2 = progress->word_4;
        u32 zf_1 = r0_2 == 0;
        if (!zf_1) {
            r1_1 = progress->word_8;
            zf_1 = r1_1 == 0;
        }
        if (!zf_1 && r0_2 <= r1_1) {
            u32 r0_3 = halfword_is_fc_or_more(progress.addr() + 0xcu, r1_1);  // (from the original)
            r1_1 = guest::cpu()->r[1];
            if (r0_3 == 0) {
                u32 low_byte_2 = low_byte_of_id(progress.addr() + 0xcu, r1_1);  // (from the original)
                r1_1 = guest::cpu()->r[1];
                if (low_byte_2 == 0x81u) {  // (from the original)
                    r5_1 = 1u;
                }
            }
        }
    }
    guest::cpu()->r[1] = r1_1;
    return r5_1;
}

}  // namespace d_0070b3b8
GUEST_EXPORT_FRAMED(0x0070b3b8, d_0070b3b8::Progress__is_done_for_81, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0070b49c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// For the slot's byte (slots 3 to 5), 0x17 to 0x14 for the first of its four 2-bit fields that is 2; 0 when none.
namespace d_0070b49c {

struct __attribute__((packed)) TraitBytes {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(TraitBytes, byte_0, 0x0);
GUEST_OFFSET(TraitBytes, byte_1, 0x1);
GUEST_OFFSET(TraitBytes, byte_2, 0x2);


u32 TraitBytes__first_field_2(gptr<TraitBytes> trait_bytes, u32 r1) {
    u32 r0_1 = r1 == 3u ? u32(trait_bytes->byte_0) : r1 == 4u ? u32(trait_bytes->byte_1) : r1 == 5u ? u32(trait_bytes->byte_2) : 0x1bu;  // (from the original)
    u32 r1_1 = r0_1 & 3u;
    if (r1_1 == 2u) {
        guest::cpu()->r[1] = r1_1;
        return 0x17u;  // (from the original)
    }
    u32 r0_2 = r0_1 >> 2;
    u32 r1_2 = r0_2 & 3u;
    if (r1_2 == 2u) {
        guest::cpu()->r[1] = r1_2;
        return 0x16u;  // (from the original)
    }
    u32 r0_3 = r0_2 >> 2;
    u32 r1_3 = r0_3 & 3u;
    if (r1_3 == 2u) {
        guest::cpu()->r[1] = r1_3;
        return 0x15u;  // (from the original)
    }
    guest::cpu()->r[1] = r1_3;
    return (r0_3 >> 2u & 3u) == 2u ? 0x14u : 0u;  // (from the original)
}

}  // namespace d_0070b49c
GUEST_EXPORT(0x0070b49c, d_0070b49c::TraitBytes__first_field_2);

// f_0070b510: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// For the slot's byte (slots 3 to 5), 0x17 to 0x14 for the first of its four 2-bit fields that is 0; 0 when none.
namespace d_0070b510 {

struct __attribute__((packed)) TraitBytes {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(TraitBytes, byte_0, 0x0);
GUEST_OFFSET(TraitBytes, byte_1, 0x1);
GUEST_OFFSET(TraitBytes, byte_2, 0x2);


u32 TraitBytes__first_field_0(gptr<TraitBytes> trait_bytes, u32 r1) {
    u32 r0_1 = r1 == 3u ? u32(trait_bytes->byte_0) : r1 == 4u ? u32(trait_bytes->byte_1) : r1 == 5u ? u32(trait_bytes->byte_2) : 0x1bu;  // (from the original)
    if ((r0_1 & 3u) == 0) {
        return 0x17u;  // (from the original)
    }
    u32 r0_2 = r0_1 >> 2;
    if ((r0_2 & 3u) == 0) {
        return 0x16u;  // (from the original)
    }
    u32 r0_3 = r0_2 >> 2;
    if ((r0_3 & 3u) == 0) {
        return 0x15u;  // (from the original)
    }
    return (r0_3 >> 2u & 3u) == 0 ? 0x14u : 0u;  // (from the original)
}

}  // namespace d_0070b510
GUEST_EXPORT(0x0070b510, d_0070b510::TraitBytes__first_field_0);

// f_0070b574: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// For the slot's byte (slots 3 to 5), 0x17 to 0x14 for the first of its four 2-bit fields that is 3; 0 when none.
namespace d_0070b574 {

struct __attribute__((packed)) TraitBytes {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(TraitBytes, byte_0, 0x0);
GUEST_OFFSET(TraitBytes, byte_1, 0x1);
GUEST_OFFSET(TraitBytes, byte_2, 0x2);


u32 TraitBytes__first_field_3(gptr<TraitBytes> trait_bytes, u32 r1) {
    u32 r0_1 = r1 == 3u ? u32(trait_bytes->byte_0) : r1 == 4u ? u32(trait_bytes->byte_1) : r1 == 5u ? u32(trait_bytes->byte_2) : 0x1bu;  // (from the original)
    u32 r1_1 = r0_1 & 3u;
    if (r1_1 == 3u) {
        guest::cpu()->r[1] = r1_1;
        return 0x17u;  // (from the original)
    }
    u32 r0_2 = r0_1 >> 2;
    u32 r1_2 = r0_2 & 3u;
    if (r1_2 == 3u) {
        guest::cpu()->r[1] = r1_2;
        return 0x16u;  // (from the original)
    }
    u32 r0_3 = r0_2 >> 2;
    u32 r1_3 = r0_3 & 3u;
    if (r1_3 == 3u) {
        guest::cpu()->r[1] = r1_3;
        return 0x15u;  // (from the original)
    }
    guest::cpu()->r[1] = r1_3;
    return (r0_3 >> 2u & 3u) == 3u ? 0x14u : 0u;  // (from the original)
}

}  // namespace d_0070b574
GUEST_EXPORT(0x0070b574, d_0070b574::TraitBytes__first_field_3);

// f_0070b5e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// For the slot's byte (slots 3 to 5), 0x17 to 0x14 for the first of its four 2-bit fields that is 1; 0 when none.
namespace d_0070b5e8 {

struct __attribute__((packed)) TraitBytes {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(TraitBytes, byte_0, 0x0);
GUEST_OFFSET(TraitBytes, byte_1, 0x1);
GUEST_OFFSET(TraitBytes, byte_2, 0x2);


u32 TraitBytes__first_field_1(gptr<TraitBytes> trait_bytes, u32 r1) {
    u32 r0_1 = r1 == 3u ? u32(trait_bytes->byte_0) : r1 == 4u ? u32(trait_bytes->byte_1) : r1 == 5u ? u32(trait_bytes->byte_2) : 0x1bu;  // (from the original)
    u32 r1_1 = r0_1 & 3u;
    if (r1_1 == 1u) {
        guest::cpu()->r[1] = r1_1;
        return 0x17u;  // (from the original)
    }
    u32 r0_2 = r0_1 >> 2;
    u32 r1_2 = r0_2 & 3u;
    if (r1_2 == 1u) {
        guest::cpu()->r[1] = r1_2;
        return 0x16u;  // (from the original)
    }
    u32 r0_3 = r0_2 >> 2;
    u32 r1_3 = r0_3 & 3u;
    if (r1_3 == 1u) {
        guest::cpu()->r[1] = r1_3;
        return 0x15u;  // (from the original)
    }
    guest::cpu()->r[1] = r1_3;
    return (r0_3 >> 2u & 3u) == 1u ? 0x14u : 0u;  // (from the original)
}

}  // namespace d_0070b5e8
GUEST_EXPORT(0x0070b5e8, d_0070b5e8::TraitBytes__first_field_1);

// f_0070b65c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The value (table 0x88e79c) of the top 2-bit field of the slot's byte.
namespace d_0070b65c {

struct __attribute__((packed)) TraitBytes {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(TraitBytes, byte_0, 0x0);
GUEST_OFFSET(TraitBytes, byte_1, 0x1);
GUEST_OFFSET(TraitBytes, byte_2, 0x2);


u32 TraitBytes__field_3_value(gptr<TraitBytes> trait_bytes, u32 r1) {
    if (r1 == 3u) {
        u32 r0_1 = trait_bytes->byte_0;
        return gptr<u32>(0x88e79cu)[r0_1 >> 6];  // (from the original)
    }
    if (r1 == 4u) {
        u32 r0_3 = trait_bytes->byte_1;
        return gptr<u32>(0x88e79cu)[r0_3 >> 6];  // (from the original)
    }
    return gptr<u32>(0x88e79cu)[(r1 == 5u ? u32(trait_bytes->byte_2) : 0x1bu) >> 6];  // (from the original)
}

}  // namespace d_0070b65c
GUEST_EXPORT(0x0070b65c, d_0070b65c::TraitBytes__field_3_value);

// f_0070b694: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The value (table 0x88e79c) of 2-bit field 2 of the slot's byte.
namespace d_0070b694 {

struct __attribute__((packed)) TraitBytes {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(TraitBytes, byte_0, 0x0);
GUEST_OFFSET(TraitBytes, byte_1, 0x1);
GUEST_OFFSET(TraitBytes, byte_2, 0x2);


u32 TraitBytes__field_2_value(gptr<TraitBytes> trait_bytes, u32 r1) {
    if (r1 == 3u) {
        u32 r0_1 = trait_bytes->byte_0;
        return gptr<u32>(0x88e79cu)[r0_1 >> 4u & 3u];  // (from the original)
    }
    if (r1 == 4u) {
        u32 r0_3 = trait_bytes->byte_1;
        return gptr<u32>(0x88e79cu)[r0_3 >> 4u & 3u];  // (from the original)
    }
    return gptr<u32>(0x88e79cu)[(r1 == 5u ? u32(trait_bytes->byte_2) : 0x1bu) >> 4u & 3u];  // (from the original)
}

}  // namespace d_0070b694
GUEST_EXPORT(0x0070b694, d_0070b694::TraitBytes__field_2_value);

// f_0070b6d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The value (table 0x88e79c) of 2-bit field 1 of the slot's byte.
namespace d_0070b6d0 {

struct __attribute__((packed)) TraitBytes {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(TraitBytes, byte_0, 0x0);
GUEST_OFFSET(TraitBytes, byte_1, 0x1);
GUEST_OFFSET(TraitBytes, byte_2, 0x2);


u32 TraitBytes__field_1_value(gptr<TraitBytes> trait_bytes, u32 r1) {
    if (r1 == 3u) {
        u32 r0_1 = trait_bytes->byte_0;
        return gptr<u32>(0x88e79cu)[r0_1 >> 2u & 3u];  // (from the original)
    }
    if (r1 == 4u) {
        u32 r0_3 = trait_bytes->byte_1;
        return gptr<u32>(0x88e79cu)[r0_3 >> 2u & 3u];  // (from the original)
    }
    return gptr<u32>(0x88e79cu)[(r1 == 5u ? u32(trait_bytes->byte_2) : 0x1bu) >> 2u & 3u];  // (from the original)
}

}  // namespace d_0070b6d0
GUEST_EXPORT(0x0070b6d0, d_0070b6d0::TraitBytes__field_1_value);

// f_0070b70c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The value (table 0x88e79c) of the low 2-bit field of the slot's byte.
namespace d_0070b70c {

struct __attribute__((packed)) TraitBytes {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(TraitBytes, byte_0, 0x0);
GUEST_OFFSET(TraitBytes, byte_1, 0x1);
GUEST_OFFSET(TraitBytes, byte_2, 0x2);


u32 TraitBytes__field_0_value(gptr<TraitBytes> trait_bytes, u32 r1) {
    if (r1 == 3u) {
        u32 r0_1 = trait_bytes->byte_0;
        guest::cpu()->r[1] = 0x88e79cu;  // (from the original)
        return gptr<u32>(0x88e79cu)[r0_1 & 3u];  // (from the original)
    }
    if (r1 == 4u) {
        u32 r0_3 = trait_bytes->byte_1;
        guest::cpu()->r[1] = 0x88e79cu;  // (from the original)
        return gptr<u32>(0x88e79cu)[r0_3 & 3u];  // (from the original)
    }
    u32 r0_6 = gptr<u32>(0x88e79cu)[(r1 == 5u ? u32(trait_bytes->byte_2) : 0x1bu) & 3u];  // (from the original)
    guest::cpu()->r[1] = 0x88e79cu;  // (from the original)
    return r0_6;
}

}  // namespace d_0070b70c
GUEST_EXPORT(0x0070b70c, d_0070b70c::TraitBytes__field_0_value);

// f_0070b744: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Item slot `index` unless its lock byte (+0x40 + index) is set; the empty item otherwise.
namespace d_0070b744 {

inline constexpr u32 empty_item_address = 0x0095bfdcu;

u32 item_slot_unless_locked(u32 r0, u32 r1) {
    return *gptr<u8>(r0 + r1 + 0x40u) == 0 ? r0 + (r1 << 2) : empty_item_address;  // (from the original)
}

}  // namespace d_0070b744
GUEST_EXPORT(0x0070b744, d_0070b744::item_slot_unless_locked);

// f_0070b7a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the 0xc8b8-byte work data block.
namespace d_0070b7a8 {

inline constexpr guest::Function<0x005caef4, u32(u32, u32, u32, u32)> SaveFile__checksum_range;

u32 WorkData__copy_block(u32 work_data) {
    return SaveFile__checksum_range(work_data, work_data + 8u, work_data, 0xc8b8u);  // (from the original)
}

}  // namespace d_0070b7a8
GUEST_EXPORT(0x0070b7a8, d_0070b7a8::WorkData__copy_block);

// f_0070b7bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// True when the work data block's checksum (over 0xc8b8 bytes from +8) matches.
namespace d_0070b7bc {

inline constexpr guest::Function<0x005ca5d8, u32(u32, u32, u32, u32)> checksum_matches;

struct __attribute__((packed)) Frame_0070b7bc {
    u32 word_0;
};
GUEST_OFFSET(Frame_0070b7bc, word_0, 0x0);
GUEST_SIZE(Frame_0070b7bc, 0x4);

u32 WorkData__checksum_ok(u32 work_data, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_0070b7bc> frame;  // the original's stack frame
    frame->word_0 = r3;
    frame->word_0 = r1;
    u32 r0_1 = checksum_matches(work_data, work_data + 8u, work_data, 0xc8b8u);  // (from the original)
    return r0_1;
}

}  // namespace d_0070b7bc
GUEST_EXPORT_FRAMED(0x0070b7bc, d_0070b7bc::WorkData__checksum_ok, 0x4000);  // pushes {lr} first, as the original

// f_0070b7dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The picker index of palette slot `slot` (+0x58).
namespace d_0070b7dc {


u32 Pattern__palette_index(u32 pattern, u32 r1) {
    return *gptr<u8>(pattern + r1 + 0x58u);  // (from the original)
}

}  // namespace d_0070b7dc
GUEST_EXPORT(0x0070b7dc, d_0070b7dc::Pattern__palette_index);

// f_0070b7e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Fills the region (offsets, size, mirroring) of the pattern's image part for its type (+0x69); false without a
// region.
namespace d_0070b7e8 {

struct __attribute__((packed)) Pattern {
    u8 unknown_0[0x69];  // (not used here)
    u8 byte_69;
};
GUEST_OFFSET(Pattern, byte_69, 0x69);

struct __attribute__((packed)) Object_0070b7e8_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 byte_10;
    u8 byte_11;
    u8 unknown_12[0x2];  // (not used here)
    u32 word_14;
};
GUEST_OFFSET(Object_0070b7e8_1, word_0, 0x0);
GUEST_OFFSET(Object_0070b7e8_1, word_4, 0x4);
GUEST_OFFSET(Object_0070b7e8_1, word_8, 0x8);
GUEST_OFFSET(Object_0070b7e8_1, word_c, 0xc);
GUEST_OFFSET(Object_0070b7e8_1, byte_10, 0x10);
GUEST_OFFSET(Object_0070b7e8_1, byte_11, 0x11);
GUEST_OFFSET(Object_0070b7e8_1, word_14, 0x14);


u32 Pattern__image_region(gptr<Pattern> pattern, gptr<Object_0070b7e8_1> arg1, u32 r2) {
    u32 r0_2 = 0;
    if (arg1.addr() != 0) {
        arg1->word_8 = 0x20;  // (from the original)
        u32 r4_1 = pattern->byte_69;
        if (r4_1 >= 6u) {
            arg1->word_0 = 0;
            arg1->word_4 = 0;
            arg1->word_c = 0x20;  // (from the original)
            arg1->byte_10 = 0;
            arg1->byte_11 = 0;
            return 1u;
        }
        if (r2 == 2u || r2 == 3u) {
            if (r4_1 != 2u && r4_1 != 5u) {
                arg1->word_c = 0x10;  // (from the original)
                arg1->byte_10 = 1;
                arg1->word_4 = 2;
                arg1->word_0 = r2 == 2u ? 0x10u : 0u;  // (from the original)
                arg1->byte_11 = 0;
                u32 r0_1 = pattern->byte_69;
                if (r0_1 == 1u || r0_1 == 4u) {
                    arg1->word_8 = 0x10;  // (from the original)
                }
                return 1u;
            }
        } else {
            arg1->byte_10 = 0;
            arg1->word_0 = 0;
            arg1->word_c = 0x20;  // (from the original)
            if (pattern->byte_69 > 2u) {
                arg1->byte_11 = 0;
                if (r2 != 0) {
                    r0_2 = 1u;
                    arg1->word_4 = r0_2;
                    return 1u;
                }
                r0_2 = 0u;
                arg1->word_4 = r0_2;
                return 1u;
            }
            arg1->byte_11 = 1;
            arg1->word_14 = r2 == 0 ? 0u : 0x10u;  // (from the original)
            if (r2 == 0) {
                r0_2 = 0u;
                arg1->word_4 = r0_2;
                return 1u;
            }
            r0_2 = 1u;
            arg1->word_4 = r0_2;
            return 1u;
        }
    }
    return 0u;
}

}  // namespace d_0070b7e8
GUEST_EXPORT_FRAMED(0x0070b7e8, d_0070b7e8::Pattern__image_region, 0x30);  // pushes {r4, r5} first, as the original

// f_0070b8fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Writes the pattern's pixels (4 pages for clothing, else 1) as colors into the image.
namespace d_0070b8fc {

struct __attribute__((packed)) Pattern {
    u8 unknown_0[0x69];  // (not used here)
    u8 byte_69;
};
GUEST_OFFSET(Pattern, byte_69, 0x69);

inline constexpr u32 design_palette_colors_address = 0x0095c010u;
inline constexpr guest::Function<0x001c4bc8, u32(u32, u32, u32, u32)> set_cell_high_bits;
inline constexpr guest::Function<0x001c4c14, u32(u32, u32, u32, u32)> TextureView__from_resource_wrapper;

struct __attribute__((packed)) Frame_0070b8fc {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x10];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0070b8fc, word_0, 0x0);
GUEST_OFFSET(Frame_0070b8fc, word_4, 0x4);
GUEST_OFFSET(Frame_0070b8fc, word_8, 0x8);
GUEST_SIZE(Frame_0070b8fc, 0x1c);

u32 Pattern__export_image(gptr<Pattern> pattern, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0070b8fc> frame;  // the original's stack frame
    u32 r0 = pattern.addr();
    u32 r11 = guest::cpu()->r[11];
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    u32 r5 = r0;
    u32 r0_1 = pattern->byte_69;
    frame->word_8 = u32(!(r0_1 >= 0xcu || r0_1 >= 9u));  // (from the original)
    frame->word_4 = r2 == 0 ? 4u : 1u;
    TextureView__from_resource_wrapper(frame.at(0xc).addr(), r1, r2, r3);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    u32 r0_3 = frame->word_4;
    if (r0_3 >= 0u && r0_3 != 0) {
        r11 = design_palette_colors_address;
    }
    r0 = 0u;
    frame->word_0 = r0;
    if ((r0_3 >= 0u) && r0_3 != 0) {
        do {
            u32 r8 = r0 << 5;
            u32 r7 = 0u;
            u32 r9 = r0 * frame->word_8 << 0x1e >> 0x17;  // (from the original)
            do {
                u32 r4 = 0u;
                u32 r10 = r7 + r8;
                u32 r6 = r9 + ((r7 & 0x1fu) << 2);  // (from the original)
                do {
                    u32 r0_4 = r4 & 0x1fu;  // (from the original)
                    u32 r0_5 = lsr_r(*gptr<u32>(r5 + (r6 + (r0_4 >> 3) << 2) + 0x6cu), r0_4 << 0x1d >> 0x1b & 0xff) & 0xfu;  // (from the original)
                    if (r0_5 == 0xfu) {  // (from the original)
                        r0_5 = 0u;
                    }
                    u32 bits = gptr<u16>(r11)[u32(*gptr<u8>(r0_5 + r5 + 0x58u))];  // (from the original)
                    set_cell_high_bits(frame.at(0xc).addr(), r4, r10, bits);  // (from the original)
                    r4 += 1u;
                    guest::preempt();
                } while (r4 < 0x20u);  // (from the original)
                r7 += 1u;
                guest::preempt();
            } while (r7 < 0x20u);  // (from the original)
            r1_1 = frame->word_4;
            r0 = frame->word_0 + 1u;
            frame->word_0 = r0;
            guest::preempt();
        } while (r0 < r1_1);
    }
    guest::cpu()->r[1] = r1_1;
    return frame.at(0xc).addr();  // (from the original)
}

}  // namespace d_0070b8fc
GUEST_EXPORT_FRAMED(0x0070b8fc, d_0070b8fc::Pattern__export_image, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_0070ba0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Writes the pixels of the pattern's part (by its region) as colors into the image.
namespace d_0070ba0c {

struct __attribute__((packed)) Pattern {
    u8 unknown_0[0x69];  // (not used here)
    u8 byte_69;
};
GUEST_OFFSET(Pattern, byte_69, 0x69);

struct __attribute__((packed)) Local_0070ba0c_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0070ba0c_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0070ba0c_ea_1, word_4, 0x4);

inline constexpr u32 design_palette_colors_address = 0x0095c010u;
inline constexpr guest::Function<0x001c4bf4, u32(u32, u32, u32, u32)> set_u16_cell;
inline constexpr guest::Function<0x001c4c14, u32(u32, u32, u32, u32)> TextureView__from_resource_wrapper;
inline constexpr guest::Function<0x0070b7e8, u32(u32, u32, u32)> Pattern__image_region;

struct __attribute__((packed)) Frame_0070ba0c {
    u32 word_0;
    u8 unknown_4[0x14];  // (not read or written by name)
    u32 word_18;
    u32 word_1c;
    u8 byte_20;
    u8 byte_21;
    u8 unknown_22[0x2];  // (not read or written by name)
    u32 word_24;
    u8 unknown_28[0xc];  // (not read or written by name)
    u32 word_34;
    u8 unknown_38[0xc];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0070ba0c, word_0, 0x0);
GUEST_OFFSET(Frame_0070ba0c, word_18, 0x18);
GUEST_OFFSET(Frame_0070ba0c, word_1c, 0x1c);
GUEST_OFFSET(Frame_0070ba0c, byte_20, 0x20);
GUEST_OFFSET(Frame_0070ba0c, byte_21, 0x21);
GUEST_OFFSET(Frame_0070ba0c, word_24, 0x24);
GUEST_OFFSET(Frame_0070ba0c, word_34, 0x34);
GUEST_SIZE(Frame_0070ba0c, 0x44);

void Pattern__export_image_part(gptr<Pattern> pattern, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0070ba0c> frame;  // the original's stack frame
    u32 r0 = pattern.addr();
    u32 r4 = 0;
    u32 r5 = 0;
    u32 r6 = 0;
    u32 r9 = 0;
    u32 r0_6 = 0;
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        return;
    }
    u32 r7 = r0;
    TextureView__from_resource_wrapper(frame.at(0x28).addr(), r1, r2, r3);  // (from the original)
    u32 r8 = design_palette_colors_address;
    if (pattern->byte_69 == 8u) {
        u32 r10 = 0x88e9c8u;  // (from the original)
        u32 r11 = 1u;
        frame->word_0 = 0;
        do {
            u32 r1_1 = frame->word_0;
            r6 = 0u;
            r5 = (r1_1 << 1) + 0x88e8c0u;  // (from the original)
            frame->word_34 = r1_1 << 0x1e >> 0x17;  // (from the original)
            do {
                r4 = 0u;
                r9 = frame->word_34 + ((r6 & 0x1fu) << 2);  // (from the original)
                r8 = r6 + (frame->word_0 << 5);
                do {
                    r1 = u32(*gptr<u8>(r5)) + r4;
                    if (s32(r1) < 0x34) {  // (from the original)
                        if ((gptr<u32>(r10)[r8] & lsl_r(r11, r4 & 0xff)) == 0) {  // (from the original)
                            u32 r0_2 = r4 & 0x1fu;  // (from the original)
                            u32 r0_3 = lsr_r(*gptr<u32>(r7 + (r9 + (r0_2 >> 3) << 2) + 0x6cu), r0_2 << 0x1d >> 0x1b & 0xff) & 0xfu;  // (from the original)
                            if (r0_3 == 0xfu) {  // (from the original)
                                r0_3 = 0u;
                            }
                            u32 r0_4 = r0_3 & 0xffu;  // (from the original)
                            u32 r3_2 = r0_4 == 0xfu ? 0xfu : u32(gptr<u16>(design_palette_colors_address)[u32(*gptr<u8>(r7 + r0_4 + 0x58u))]) & ~0xfu | r0_4;  // (from the original)
                            set_u16_cell(frame.at(0x28).addr(), r1, u32(*gptr<u8>(r5 + 1u)) + r6, r3_2);  // (from the original)
                            r1 = guest::cpu()->r[1];
                        }
                    }
                    r4 += 1u;
                    guest::preempt();
                } while (r4 < 0x20u);  // (from the original)
                r6 += 1u;
                guest::preempt();
            } while (r6 < 0x20u);  // (from the original)
            r0_6 = frame->word_0 + 1u;
            frame->word_0 = r0_6;
            guest::preempt();
        } while (r0_6 < 4u);
    } else {
        Pattern__image_region(r7, frame.at(0x10).addr(), r2);  // (from the original)
        r1 = guest::cpu()->r[1];
        u32 r0_7 = frame->word_18;
        r5 = 0u;
        if (r0_7 >= 0u && r0_7 != 0) {
            do {
                u32 r0_8 = frame->word_1c;
                r4 = 0u;
                if (r0_8 >= 0u && r0_8 != 0) {
                    r6 = r5 << 0x1d >> 0x1b;  // (from the original)
                    do {
                        gptr<Local_0070ba0c_ea_1> ea_1 = gptr<Local_0070ba0c_ea_1>(frame.at(0x10).addr());  // (from the original)
                        r1 = ea_1->word_4 << 0x1e >> 0x17;  // (from the original)
                        u32 r0_9 = lsr_r(*gptr<u32>(r7 + (r1 + ((ea_1->word_0 + r4 & 0x1fu) << 2) + ((r5 & 0x1fu) >> 3) << 2) + 0x6cu), r6 & 0xff) & 0xfu;  // (from the original)
                        if (r0_9 == 0xfu) {  // (from the original)
                            r0_9 = 0u;
                        }
                        u32 r0_10 = r0_9 & 0xffu;  // (from the original)
                        if (r0_10 != 0xfu) {  // (from the original)
                            u32 r3_3 = u32(gptr<u16>(r8)[u32(*gptr<u8>(r7 + r0_10 + 0x58u))]) & ~0xfu | r0_10;  // (from the original)
                            if (frame->byte_20 != 0) {
                                set_u16_cell(frame.at(0x28).addr(), frame->word_1c - r4 - 1u, r5, r3_3);  // (from the original)
                                r1 = guest::cpu()->r[1];
                            } else {
                                set_u16_cell(frame.at(0x28).addr(), r5, r4, r3_3);  // (from the original)
                                r1 = guest::cpu()->r[1];
                            }
                        }
                        r4 += 1u;
                        guest::preempt();
                    } while (frame->word_1c > r4);
                }
                r5 += 1u;
                guest::preempt();
            } while (frame->word_18 > r5);
        }
        if (frame->byte_21 != 0) {
            r5 = 0u;
            r9 = 0x180u;  // (from the original)
            do {
                r4 = 0u;
                r6 = r5 << 0x1d >> 0x1b;  // (from the original)
                do {
                    r1 = r5 & 0x1fu;  // (from the original)
                    u32 r0_13 = lsr_r(*gptr<u32>(r7 + (r9 + ((frame->word_24 + r4 & 0x1fu) << 2) + (r1 >> 3) << 2) + 0x6cu), r6 & 0xff) & 0xfu;  // (from the original)
                    if (r0_13 == 0xfu) {  // (from the original)
                        r0_13 = 0u;
                    }
                    u32 r0_14 = r0_13 & 0xffu;  // (from the original)
                    if (r0_14 != 0xfu) {  // (from the original)
                        u32 r3_4 = u32(gptr<u16>(r8)[u32(*gptr<u8>(r7 + r0_14 + 0x58u))]) & ~0xfu | r0_14;  // (from the original)
                        set_u16_cell(frame.at(0x28).addr(), r5, r4 + 0x20u, r3_4);  // (from the original)
                        r1 = guest::cpu()->r[1];
                    }
                    r4 += 1u;
                    guest::preempt();
                } while (s32(r4) < 0x10);  // (from the original)
                r5 += 1u;
                guest::preempt();
            } while (s32(r5) < 0x20);  // (from the original)
        }
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0070ba0c
GUEST_EXPORT_FRAMED(0x0070ba0c, d_0070ba0c::Pattern__export_image_part, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_0070bcdc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The color value of palette slot `slot` with the slot in its low 4 bits; 0xf (transparent) stays 0xf.
namespace d_0070bcdc {

inline constexpr u32 design_palette_colors_address = 0x0095c010u;

u32 Pattern__color_value(u32 pattern, u32 r1) {
    if (r1 == 0xfu) {  // (from the original)
        return 0xfu;  // (from the original)
    }
    return u32(gptr<u16>(design_palette_colors_address)[u32(*gptr<u8>(pattern + r1 + 0x58u))]) & ~0xfu | r1;  // (from the original)
}

}  // namespace d_0070bcdc
GUEST_EXPORT(0x0070bcdc, d_0070bcdc::Pattern__color_value);

// f_0070bd0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The pattern's type when it is 6 or 7, else 0xb.
namespace d_0070bd0c {

struct __attribute__((packed)) Pattern {
    u8 unknown_0[0x69];  // (not used here)
    u8 byte_69;
};
GUEST_OFFSET(Pattern, byte_69, 0x69);


u32 Pattern__type_6_7_or_b(gptr<Pattern> pattern) {
    u32 r0_1 = pattern->byte_69;
    u32 r1_1 = r0_1 - 6u;
    if (r1_1 >= 2u) {
        r0_1 = 0xbu;  // (from the original)
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0070bd0c
GUEST_EXPORT(0x0070bd0c, d_0070bd0c::Pattern__type_6_7_or_b);

// f_0070bd20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The pattern's type when it is a clothing type (below 6), else 0xa.
namespace d_0070bd20 {

struct __attribute__((packed)) Pattern {
    u8 unknown_0[0x69];  // (not used here)
    u8 byte_69;
};
GUEST_OFFSET(Pattern, byte_69, 0x69);


u32 Pattern__clothing_type_or_a(gptr<Pattern> pattern) {
    u32 r0_1 = pattern->byte_69;
    if (r0_1 >= 6u) {
        r0_1 = 0xau;  // (from the original)
    }
    return r0_1;
}

}  // namespace d_0070bd20
GUEST_EXPORT(0x0070bd20, d_0070bd20::Pattern__clothing_type_or_a);

// f_0070bd48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// True when the pattern's creator (+0x2a) is the current player.
namespace d_0070bd48 {

inline constexpr u32 player_state_block_address = 0x00aaef18u;
inline constexpr u32 current_player_data_address = 0x00aaf14cu;
inline guest::global<u32, 0x00aaf14c> current_player_data;
inline constexpr guest::Function<0x002fe940, u32(u32, u32, u32, u32)> PersonalId__equals;

u32 Pattern__made_by_current_player(u32 pattern) {
    u32 r2_1 = *current_player_data;
    if (r2_1 == 0) {
        guest::cpu()->r[1] = player_state_block_address;
        return 0u;
    }
    return PersonalId__equals(r2_1 + 0x55a6u, pattern + 0x2au, r2_1, guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0070bd48
GUEST_EXPORT(0x0070bd48, d_0070bd48::Pattern__made_by_current_player);

// f_0070bd74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Writes the pattern's pixels as colors into the texture (its high bits only).
namespace d_0070bd74 {

struct __attribute__((packed)) Pattern {
    u8 unknown_0[0x69];  // (not used here)
    u8 byte_69;
};
GUEST_OFFSET(Pattern, byte_69, 0x69);

inline constexpr u32 design_palette_colors_address = 0x0095c010u;
inline constexpr guest::Function<0x001c4bc8, u32(u32, u32, u32, u32)> set_cell_high_bits;
inline constexpr guest::Function<0x001c4c14, u32(u32, u32, u32, u32)> TextureView__from_resource_wrapper;

struct __attribute__((packed)) Frame_0070bd74 {
    u8 unknown_0[0x4];  // (not read or written by name)
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0xc];  // (not read or written by name)
    u32 word_18;
    u8 unknown_1c[0x8];  // (not read or written by name)
    u32 word_24;
    u8 unknown_28[0x14];  // (not read or written by name)
    u32 word_3c;
    u8 unknown_40[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0070bd74, word_4, 0x4);
GUEST_OFFSET(Frame_0070bd74, word_8, 0x8);
GUEST_OFFSET(Frame_0070bd74, word_18, 0x18);
GUEST_OFFSET(Frame_0070bd74, word_24, 0x24);
GUEST_OFFSET(Frame_0070bd74, word_3c, 0x3c);
GUEST_SIZE(Frame_0070bd74, 0x44);

void Pattern__render_to_texture(gptr<Pattern> pattern, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0070bd74> frame;  // the original's stack frame
    u32 r0 = pattern.addr();
    u32 r11 = guest::cpu()->r[11];
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        return;
    }
    u32 r5 = r0;
    u32 r8 = 0x10u;  // (from the original)
    u32 r0_1 = pattern->byte_69;
    frame->word_24 = u32(!(r0_1 >= 0xcu || r0_1 >= 9u));  // (from the original)
    frame->word_18 = r2 == 0 ? 4u : 1u;
    TextureView__from_resource_wrapper(frame.at(0x30).addr(), r1, r2, r3);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    u32 r0_3 = frame->word_18;
    if (r0_3 >= 0u && r0_3 != 0) {
        r11 = design_palette_colors_address;
    }
    r0 = 0u;
    frame->word_8 = r0;
    if ((r0_3 >= 0u) && r0_3 != 0) {
        do {
            u32 r10 = r0 << 5;
            u32 r9 = 0u;
            frame->word_3c = r0 * frame->word_24 << 0x1e >> 0x17;  // (from the original)
            do {
                u32 r4 = 0u;
                u32 r7 = frame->word_3c + ((r9 & 0x1fu) << 2);  // (from the original)
                frame->word_4 = r9 + r10;
                do {
                    u32 r2_1 = frame->word_4;
                    u32 r6_1 = r4 << 0x19 >> 0x18;  // (from the original)
                    u32 r0_4 = r6_1 & 0x1fu;  // (from the original)
                    u32 r0_5 = lsr_r(*gptr<u32>(r5 + (r7 + (r0_4 >> 3) << 2) + 0x6cu), r0_4 << 0x1d >> 0x1b & 0xff) & 0xfu;  // (from the original)
                    if (r0_5 == 0xfu) {  // (from the original)
                        r0_5 = 0u;
                    }
                    u32 bits = gptr<u16>(r11)[u32(*gptr<u8>(r0_5 + r5 + 0x58u))];  // (from the original)
                    set_cell_high_bits(frame.at(0x30).addr(), r6_1, r2_1, bits);  // (from the original)
                    u32 r0_7 = r6_1 + 1u & 0x1fu;  // (from the original)
                    u32 r2_2 = frame->word_4;
                    u32 r0_8 = lsr_r(*gptr<u32>(r5 + (r7 + (r0_7 >> 3) << 2) + 0x6cu), r0_7 << 0x1d >> 0x1b & 0xff) & 0xfu;  // (from the original)
                    if (r0_8 == 0xfu) {  // (from the original)
                        r0_8 = 0u;
                    }
                    u32 r3_2 = gptr<u16>(r11)[u32(*gptr<u8>(r0_8 + r5 + 0x58u))];  // (from the original)
                    set_cell_high_bits(frame.at(0x30).addr(), r6_1 + 1u, r2_2, r3_2);  // (from the original)
                    r4 += 1u;
                    guest::preempt();
                } while (r4 < r8);
                r9 += 1u;
                guest::preempt();
            } while (r9 < 0x20u);  // (from the original)
            r1_1 = frame->word_18;
            r0 = frame->word_8 + 1u;
            frame->word_8 = r0;
            guest::preempt();
        } while (r0 < r1_1);
    }
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_0070bd74
GUEST_EXPORT_FRAMED(0x0070bd74, d_0070bd74::Pattern__render_to_texture, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_0070bf30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Decodes the entries of the table at 0x9752c1.
namespace d_0070bf30 {

struct __attribute__((packed)) Local_0070bf30_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0070bf30_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0070bf30_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0070bf30_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_0070bf30_ea_1, word_c, 0xc);

struct __attribute__((packed)) Local_0070bf30_ea_5 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0070bf30_ea_5, word_0, 0x0);
GUEST_OFFSET(Local_0070bf30_ea_5, word_4, 0x4);
GUEST_OFFSET(Local_0070bf30_ea_5, word_8, 0x8);
GUEST_OFFSET(Local_0070bf30_ea_5, word_c, 0xc);

inline constexpr u32 global_009752c1_address = 0x009752c1u;
inline constexpr u32 decode_table_address = 0x00ae4e44u;

u32 decode_table_9752c1(u32 r0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 res_1 = 0;
    for (;;) {
        u32 r1 = 0x2eu;  // (from the original)
        if (!1) {
            break;
        }
        gptr<Local_0070bf30_ea_1> ea_1 = gptr<Local_0070bf30_ea_1>(frame.at(0).addr());
        ea_1->word_0 = r4;
        ea_1->word_4 = r5;
        ea_1->word_8 = r6;
        ea_1->word_c = r7;
        r6 = global_009752c1_address;
        if (*gptr<u8>(r6) == 0) {
            r5 = 0xedb88320u;  // (from the original)
            r7 = decode_table_address;
            u32 r12 = 0u;
            do {
                r2 = r12;
                r4 = 4u;
                do {
                    u32 r3_1 = (r2 & 1u) == 0 ? r2 >> 1 : r5 ^ r2 >> 1;
                    r2 = (r3_1 & 1u) == 0 ? r3_1 >> 1 : r5 ^ r3_1 >> 1;
                    r4 -= 1u;
                    guest::preempt();
                } while (r4 != 0);
                *gptr<u32>(r7 + (r12 << 2)) = r2;
                r12 += 1u;
                guest::preempt();
            } while (r12 < 0x100u);  // (from the original)
            *gptr<u8>(r6) = 1;
        }
        u32 r3 = decode_table_address;
        r2 = ~0u;
        if (r1 != 0) {
            r0 -= 1u;
            if ((r1 & 1u) != 0) {
                u32 ea_2 = r0 + 1u;
                r0 = ea_2;
                r2 = gptr<u32>(r3)[(u32(*gptr<u8>(ea_2)) ^ r2) & 0xffu] ^ r2 >> 8;  // (from the original)
            }
            r1 >>= 1;
            if (r1 != 0) {
                do {
                    res_1 = r1 - 1u;
                    r1 = res_1;
                    u32 r4_1 = (u32(*gptr<u8>(r0 + 1u)) ^ r2) & 0xffu;  // (from the original)
                    u32 ea_4 = r0 + 2u;
                    r0 = ea_4;
                    u32 r2_1 = gptr<u32>(r3)[r4_1] ^ r2 >> 8;
                    r2 = gptr<u32>(r3)[(u32(*gptr<u8>(ea_4)) ^ r2_1) & 0xffu] ^ r2_1 >> 8;  // (from the original)
                    guest::preempt();
                } while (res_1 != 0);
            }
        }
        gptr<Local_0070bf30_ea_5> ea_5 = gptr<Local_0070bf30_ea_5>(frame.at(0).addr());
        u32 r4_2 = ea_5->word_0;
        u32 r5_1 = ea_5->word_4;
        u32 r6_1 = ea_5->word_8;
        u32 r7_1 = ea_5->word_c;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4_2;
        guest::cpu()->r[5] = r5_1;
        guest::cpu()->r[6] = r6_1;
        guest::cpu()->r[7] = r7_1;
        return ~r2;
        guest::preempt();
    }
}

}  // namespace d_0070bf30
GUEST_EXPORT(0x0070bf30, d_0070bf30::decode_table_9752c1);

// f_0070c188: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// 0 when the first byte is negative, else 1.
namespace d_0070c188 {

struct __attribute__((packed)) Object_0070c188_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_0070c188_0, byte_0, 0x0);


u32 byte_sign_to_count(gptr<Object_0070c188_0> arg0) {
    return u32(s8(arg0->byte_0) >> 0x1f) + 1u;  // (from the original)
}

}  // namespace d_0070c188
GUEST_EXPORT(0x0070c188, d_0070c188::byte_sign_to_count);

// f_0070c23c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070c23c {

inline constexpr u32 vtable_script__WordCPtrSv = 0x00908b9cu;
inline constexpr guest::Function<0x005fdf68, u32(u32, u32, u32)> script__WordCPtr__WordCPtr_005fdf68;

u32 script__WordCPtrSv__WordCPtrSv_0070c23c(gptr<script__WordCPtrSv> word_c_ptr_sv, u32 r1) {
    script__WordCPtr__WordCPtr_005fdf68(word_c_ptr_sv.addr(), r1, 0x11u);  // (from the original)
    word_c_ptr_sv->vtable = vtable_script__WordCPtrSv;
    guest::cpu()->r[1] = vtable_script__WordCPtrSv;
    return word_c_ptr_sv.addr();
}

}  // namespace d_0070c23c
GUEST_EXPORT_FRAMED(0x0070c23c, d_0070c23c::script__WordCPtrSv__WordCPtrSv_0070c23c, 0x4010);  // pushes {r4, lr} first, as the original

// f_0070c258: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The kind paired with the value in the 18 pairs at 0x88f984; 0xfc when none.
namespace d_0070c258 {

struct __attribute__((packed)) Local_0070c258_r3_1 {
    u8 unknown_0[0x1];  // (not used here)
    u8 byte_1;
    u8 unknown_2[0x1];  // (not used here)
    u8 byte_3;
};
GUEST_OFFSET(Local_0070c258_r3_1, byte_1, 0x1);
GUEST_OFFSET(Local_0070c258_r3_1, byte_3, 0x3);


u32 kind_for_value_88f984(u32 r0_unused, u32 r1) {
    u32 r2 = 0x88f984u;  // (from the original)
    u32 r0 = 0u;
    do {
        gptr<Local_0070c258_r3_1> r3_1 = gptr<Local_0070c258_r3_1>(r2 + (r0 << 1));
        if (u32(s8(r3_1->byte_1)) == r1) {
            return *gptr<u8>(r2 + (r0 << 1));
        }
        if (u32(s8(r3_1->byte_3)) == r1) {
            return *gptr<u8>(r2 + (r0 << 1) + 2u);
        }
        r0 += 2u;
        guest::preempt();
    } while (s32(r0) < 0x12);  // (from the original)
    return 0xfcu;  // (from the original)
}

}  // namespace d_0070c258
GUEST_EXPORT(0x0070c258, d_0070c258::kind_for_value_88f984);

// f_0070c2a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Entry `index` (6 bytes each) when it is below the count (+0xd2); null otherwise.
namespace d_0070c2a8 {

struct __attribute__((packed)) Object_0070c2a8_0 {
    u8 unknown_0[0xd2];  // (not used here)
    u8 byte_d2;
};
GUEST_OFFSET(Object_0070c2a8_0, byte_d2, 0xd2);


u32 entry_6_below_count_d2(gptr<Object_0070c2a8_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2_1 = arg0->byte_d2;
    u32 res_1 = r2_1 - r1;
    u32 vf_1 = ((r2_1 ^ r1) & (r2_1 ^ res_1)) >> 0x1f;  // (from the original)
    if (res_1 != 0 && s32(r2_1) >= s32(r1)) {
        r1 = r1 * 3u;
        r0 += (r1 << 1);
    }
    if (res_1 == 0 || res_1 >> 0x1f != vf_1) {  // (from the original)
        r0 = 0u;
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0070c2a8
GUEST_EXPORT(0x0070c2a8, d_0070c2a8::entry_6_below_count_d2);

// f_0070d7e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// True when the world position lies in the block (x, y).
namespace d_0070d7e4 {

struct __attribute__((packed)) Object_0070d7e4_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_0070d7e4_0, word_0, 0x0);
GUEST_OFFSET(Object_0070d7e4_0, word_4, 0x4);

struct __attribute__((packed)) Object_0070d7e4_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_0070d7e4_1, word_0, 0x0);
GUEST_OFFSET(Object_0070d7e4_1, word_4, 0x4);

inline constexpr guest::Function<0x006a6c78, u32(u32, u32, u32, u32)> blocks_of_position;

struct __attribute__((packed)) Frame_0070d7e4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Frame_0070d7e4, word_0, 0x0);
GUEST_OFFSET(Frame_0070d7e4, word_4, 0x4);
GUEST_SIZE(Frame_0070d7e4, 0x8);

u32 position_is_in_block(gptr<Object_0070d7e4_0> arg0, gptr<Object_0070d7e4_1> arg1) {
    guest::StackFrameOf<Frame_0070d7e4> frame;  // the original's stack frame
    frame->word_0 = 0;
    frame->word_4 = 0;
    blocks_of_position(frame.at(0).addr(), frame.at(4).addr(), arg1->word_0, arg1->word_4);
    u32 r1_2 = frame->word_0;
    if (arg0->word_0 != r1_2) {
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    u32 r1_3 = frame->word_4;
    if (arg0->word_4 == r1_3) {
        guest::cpu()->r[1] = r1_3;
        return 1u;
    }
    guest::cpu()->r[1] = r1_3;
    return 0u;
}

}  // namespace d_0070d7e4
GUEST_EXPORT_FRAMED(0x0070d7e4, d_0070d7e4::position_is_in_block, 0x4010);  // pushes {r4, lr} first, as the original

// f_0070d904: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The 16-bit cell (x, y) of the array.
namespace d_0070d904 {

struct __attribute__((packed)) Array {
    u32 word_0;
};
GUEST_OFFSET(Array, word_0, 0x0);

inline constexpr guest::Function<0x00757aa0, u32(u32, u32, u32, u32)> Buffer__read_bytes;

u32 get_u16_cell(gptr<Array> array, u32 x) {
    u32 index = Buffer__read_bytes(array.addr(), x, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = array->word_0;
    guest::cpu()->r[1] = r1_1;
    return gptr<u16>(r1_1)[index];
}

}  // namespace d_0070d904
GUEST_EXPORT_FRAMED(0x0070d904, d_0070d904::get_u16_cell, 0x4010);  // pushes {r4, lr} first, as the original

// f_0070e484: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Bits 4 and 5 of the byte at +0xe.
namespace d_0070e484 {

struct __attribute__((packed)) Object_0070e484_0 {
    u8 unknown_0[0xe];  // (not used here)
    u8 byte_e;
};
GUEST_OFFSET(Object_0070e484_0, byte_e, 0xe);


u32 bits_e_4_5(gptr<Object_0070e484_0> arg0) {
    return u32(arg0->byte_e) >> 4u & 3u;
}

}  // namespace d_0070e484
GUEST_EXPORT(0x0070e484, d_0070e484::bits_e_4_5);

// f_0070e494: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The top two bits of the word at +8.
namespace d_0070e494 {

struct __attribute__((packed)) Object_0070e494_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_0070e494_0, word_8, 0x8);


u32 word_8_top_2_bits(gptr<Object_0070e494_0> arg0) {
    return arg0->word_8 >> 0x1e;  // (from the original)
}

}  // namespace d_0070e494
GUEST_EXPORT(0x0070e494, d_0070e494::word_8_top_2_bits);

// f_0070e4a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The top bit of the half at +0xc.
namespace d_0070e4a0 {

struct __attribute__((packed)) Object_0070e4a0_0 {
    u8 unknown_0[0xc];  // (not used here)
    u16 half_c;
};
GUEST_OFFSET(Object_0070e4a0_0, half_c, 0xc);


u32 half_c_top_bit(gptr<Object_0070e4a0_0> arg0) {
    return (u32(arg0->half_c) & 0x8000u) >> 0xf;  // (from the original)
}

}  // namespace d_0070e4a0
GUEST_EXPORT(0x0070e4a0, d_0070e4a0::half_c_top_bit);

// f_0070e4e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Bits 23 to 26 of the word at +8.
namespace d_0070e4e4 {

struct __attribute__((packed)) Object_0070e4e4_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_0070e4e4_0, word_8, 0x8);


u32 word_8_bits_23_26(gptr<Object_0070e4e4_0> arg0) {
    return arg0->word_8 >> 0x17u & 0xfu;  // (from the original)
}

}  // namespace d_0070e4e4
GUEST_EXPORT(0x0070e4e4, d_0070e4e4::word_8_bits_23_26);

// f_0070e6c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// True for action 0x123 when the player's held tool (slot 7 of class 7) is of category 0x14.
namespace d_0070e6c0 {

inline constexpr guest::Function<0x002fcb34, u32(u32)> Item__category;
inline constexpr guest::Function<0x0071a844, u32(u32, u32)> slot_7_if_class_7;

u32 Player__holds_category_14_for_123(u32 player, u32 r1) {
    if (r1 != 0x123u) {  // (from the original)
        return 0u;
    }
    u32 r0_2 = slot_7_if_class_7(player + 0x200u, r1);  // (from the original)
    u32 category_2 = Item__category(r0_2);
    if (category_2 == 0x14u) {  // (from the original)
        return 1u;
    }
    return 0u;
}

}  // namespace d_0070e6c0
GUEST_EXPORT_FRAMED(0x0070e6c0, d_0070e6c0::Player__holds_category_14_for_123, 0x4010);  // pushes {r4, lr} first, as the original

// f_0070e6f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// True when the player's outfit (top, or the dress slot) allows the action.
namespace d_0070e6f0 {

inline constexpr guest::Function<0x002fcb34, u32(u32)> Item__category;
inline constexpr guest::Function<0x0030306c, u32(u32)> Item__placement_kind;
inline constexpr guest::Function<0x0071a3a8, u32(u32)> slots_slot_4_if_slot_2_allows;
inline constexpr guest::Function<0x0071a868, u32(u32, u32, u32, u32)> slot_2_if_class_3_0071a868;
inline constexpr guest::Function<0x0076a4bc, u32(u32)> Item__is_wear_class_3_outside_groups;

u32 Player__outfit_allows_action(u32 player) {
    u32 r0_2 = slot_2_if_class_3_0071a868(player + 0x200u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_3 = Item__is_wear_class_3_outside_groups(r0_2);
    if (r0_3 != 0) {
        u32 r0_5 = slot_2_if_class_3_0071a868(player + 0x200u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        u32 placement_kind = Item__placement_kind(r0_5);
        return placement_kind == 0 ? placement_kind : 1u;
    }
    u32 r0_7 = slots_slot_4_if_slot_2_allows(player + 0x200u);  // (from the original)
    u32 category_2 = Item__category(r0_7);
    if (category_2 != 9u) {
        return 1u;
    }
    u32 r0_10 = slots_slot_4_if_slot_2_allows(player + 0x200u);  // (from the original)
    u32 placement_kind_2 = Item__placement_kind(r0_10);
    return placement_kind_2 == 0 ? placement_kind_2 : 1u;
}

}  // namespace d_0070e6f0
GUEST_EXPORT_FRAMED(0x0070e6f0, d_0070e6f0::Player__outfit_allows_action, 0x4010);  // pushes {r4, lr} first, as the original

// f_0070ead8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// True when the mode word (+0xc) is 2, 3 or 4.
namespace d_0070ead8 {

struct __attribute__((packed)) Object_0070ead8_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_0070ead8_0, word_c, 0xc);


u32 mode_c_is_2_to_4(gptr<Object_0070ead8_0> arg0) {
    u32 r0_1 = arg0->word_c;
    if (r0_1 == 3u || r0_1 == 2u) {
        return 1u;
    }
    return r0_1 == 4u;
}

}  // namespace d_0070ead8
GUEST_EXPORT(0x0070ead8, d_0070ead8::mode_c_is_2_to_4);

// f_0070eafc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The sound id of entry `index` (below 94): 0x10002cc + index; the first otherwise.
namespace d_0070eafc {


u32 table_83a980_sound_id(u32 r0_unused, u32 r1) {
    return r1 >= 0x5eu ? 0x10002ccu : r1 + 0x10002ccu;  // (from the original)
}

}  // namespace d_0070eafc
GUEST_EXPORT(0x0070eafc, d_0070eafc::table_83a980_sound_id);

// f_0070eb14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The word at +8 of entry `index` (below 94, 0x14 bytes each) of the table at 0x83a980; 0x1e5f otherwise.
namespace d_0070eb14 {


u32 table_83a980_word_8(u32 r0_unused, u32 r1) {
    if (r1 >= 0x5eu) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return 0x1e5fu;  // (from the original)
    }
    u32 r0_2 = *gptr<u32>(((r1 * 5u) << 2) + 0x83a980u + 8u);  // (from the original)
    guest::cpu()->r[1] = 0x83a980u;  // (from the original)
    return r0_2;
}

}  // namespace d_0070eb14
GUEST_EXPORT(0x0070eb14, d_0070eb14::table_83a980_word_8);

// f_0070eb3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Byte +6 of entry `index` of the table at 0x83a980; 2 otherwise.
namespace d_0070eb3c {


u32 table_83a980_byte_6(u32 r0_unused, u32 r1) {
    if (r1 >= 0x5eu) {  // (from the original)
        return 2u;
    }
    return *gptr<u8>(r1 * 0x14u + 0x83a980u + 6u);  // (from the original)
}

}  // namespace d_0070eb3c
GUEST_EXPORT(0x0070eb3c, d_0070eb3c::table_83a980_byte_6);

// f_0070eb60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Byte +0x11 of entry `index` of the table at 0x83a980; 0x24 for index 94, 0x28 beyond.
namespace d_0070eb60 {


u32 table_83a980_byte_11(u32 r0, u32 r1) {
    if (r1 > 0x5eu) {  // (from the original)
        r0 = 0x28u;  // (from the original)
    }
    if (r1 == 0x5eu) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return 0x24u;  // (from the original)
    }
    if (r1 >= 0x5eu) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    u32 r0_2 = *gptr<u8>(((r1 * 5u) << 2) + 0x83a980u + 0x11u);  // (from the original)
    guest::cpu()->r[1] = 0x83a980u;  // (from the original)
    return r0_2;
}

}  // namespace d_0070eb60
GUEST_EXPORT(0x0070eb60, d_0070eb60::table_83a980_byte_11);

// f_0070eb8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Byte +0x10 of entry `index` of the table at 0x83a980; 0x10 for index 94, 0x20 beyond.
namespace d_0070eb8c {


u32 table_83a980_byte_10(u32 r0, u32 r1) {
    if (r1 > 0x5eu) {  // (from the original)
        r0 = 0x20u;  // (from the original)
    }
    if (r1 == 0x5eu) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return 0x10u;  // (from the original)
    }
    if (r1 >= 0x5eu) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    u32 r0_2 = *gptr<u8>(((r1 * 5u) << 2) + 0x83a980u + 0x10u);  // (from the original)
    guest::cpu()->r[1] = 0x83a980u;  // (from the original)
    return r0_2;
}

}  // namespace d_0070eb8c
GUEST_EXPORT(0x0070eb8c, d_0070eb8c::table_83a980_byte_10);

// f_0070ebb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Byte +0x12 of entry `index` of the table at 0x83a980; 0x10 otherwise.
namespace d_0070ebb8 {


u32 table_83a980_byte_12(u32 r0_unused, u32 r1) {
    if (r1 >= 0x5eu) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return 0x10u;  // (from the original)
    }
    u32 r0_2 = *gptr<u8>(((r1 * 5u) << 2) + 0x83a980u + 0x12u);  // (from the original)
    guest::cpu()->r[1] = 0x83a980u;  // (from the original)
    return r0_2;
}

}  // namespace d_0070ebb8
GUEST_EXPORT(0x0070ebb8, d_0070ebb8::table_83a980_byte_12);

// f_0070eca8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Byte +5 of entry `index` of the table at 0x83a980; 2 for index 94, 3 beyond.
namespace d_0070eca8 {


u32 table_83a980_byte_5(u32 r0, u32 r1) {
    if (r1 > 0x5eu) {  // (from the original)
        r0 = 3u;
    }
    if (r1 == 0x5eu) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return 2u;
    }
    if (r1 >= 0x5eu) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    u32 r0_2 = *gptr<u8>(((r1 * 5u) << 2) + 0x83a980u + 5u);  // (from the original)
    guest::cpu()->r[1] = 0x83a980u;  // (from the original)
    return r0_2;
}

}  // namespace d_0070eca8
GUEST_EXPORT(0x0070eca8, d_0070eca8::table_83a980_byte_5);

// f_0070ecd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Byte +4 of entry `index` of the table at 0x83a980; 4 for index 0x5a and out of range.
namespace d_0070ecd4 {


u32 table_83a980_byte_4(u32 r0_unused, u32 r1) {
    if (r1 == 0x5au) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return 4u;
    }
    if (r1 < 0x5eu) {  // (from the original)
        u32 r0_2 = *gptr<u8>(((r1 * 5u) << 2) + 0x83a980u + 4u);  // (from the original)
        guest::cpu()->r[1] = 0x83a980u;  // (from the original)
        return r0_2;
    }
    guest::cpu()->r[1] = r1;
    return 4u;
}

}  // namespace d_0070ecd4
GUEST_EXPORT(0x0070ecd4, d_0070ecd4::table_83a980_byte_4);

// f_0070ed04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070ed04 {


u32 manager_entry_length(u32 r0_unused, u32 r1) {
    if (r1 >= 0x5bu) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    u32 r0_2 = *gptr<u32>(((r1 * 7u) << 2) + 0x83b4c0u + 8u);  // (from the original)
    guest::cpu()->r[1] = 0x83b4c0u;  // (from the original)
    return r0_2;
}

}  // namespace d_0070ed04
GUEST_EXPORT(0x0070ed04, d_0070ed04::manager_entry_length);

// f_0070ed28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The float at +0xc of entry `index` (below 91, 0x1c bytes each) of the table at 0x83b4c0; 1 otherwise.
namespace d_0070ed28 {


void table_83b4c0_float_c(u32 r0_unused, u32 r1) {
    if (r1 >= 0x5bu) {  // (from the original)
        float S0_1 = 1.0f;
        guest::cpu()->s[0] = S0_1;
        return;
    }
    float S0_2 = std::bit_cast<float>(*gptr<u32>(r1 * 0x1cu + 0x83b4c0u + 0xcu));  // (from the original)
    guest::cpu()->s[0] = S0_2;
}

}  // namespace d_0070ed28
GUEST_EXPORT(0x0070ed28, d_0070ed28::table_83b4c0_float_c);

// f_0070ed68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Wraps the value into the range (+0x10 to +0x14) of entry `index` of the table at 0x83b4c0 once it reaches the end.
namespace d_0070ed68 {

struct __attribute__((packed)) Local_0070ed68_r2_1 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_0070ed68_r2_1, word_10, 0x10);
GUEST_OFFSET(Local_0070ed68_r2_1, word_14, 0x14);

inline constexpr guest::Function<0x002f86c0, u32(u32, u32)> udiv;

u32 table_83b4c0_wrap_value(u32 r0_unused, u32 r1, u32 r2) {
    if (r1 >= 0x5bu) {  // (from the original)
        return r2;
    }
    gptr<Local_0070ed68_r2_1> r2_1 = gptr<Local_0070ed68_r2_1>(r1 * 0x1cu + 0x83b4c0u);  // (from the original)
    u32 r1_1 = r2_1->word_14;
    if (r2 < r1_1) {
        return r2;
    }
    u32 r4_1 = r2_1->word_10;
    udiv(r2 - r4_1, r1_1 - r4_1);
    return guest::cpu()->r[1] + r4_1;
}

}  // namespace d_0070ed68
GUEST_EXPORT_FRAMED(0x0070ed68, d_0070ed68::table_83b4c0_wrap_value, 0x4010);  // pushes {r4, lr} first, as the original

// f_0070edac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The word at +0x18 of entry `index` of the table at 0x83b4c0; 0x1020 otherwise.
namespace d_0070edac {


u32 table_83b4c0_word_18(u32 r0_unused, u32 r1) {
    if (r1 >= 0x5bu) {  // (from the original)
        return 0x1020u;  // (from the original)
    }
    return *gptr<u32>(r1 * 0x1cu + 0x83b4c0u + 0x18u);  // (from the original)
}

}  // namespace d_0070edac
GUEST_EXPORT(0x0070edac, d_0070edac::table_83b4c0_word_18);

// f_0070edd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070edd4 {


u32 manager_entry_kind(u32 r0_unused, u32 r1) {
    if (r1 >= 0x5bu) {  // (from the original)
        return 0u;
    }
    return *gptr<u8>(r1 * 0x1cu + 0x83b4c0u + 4u);  // (from the original)
}

}  // namespace d_0070edd4
GUEST_EXPORT(0x0070edd4, d_0070edd4::manager_entry_kind);

// f_0070edf8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070edf8 {


u32 manager_next_entry(u32 r0_unused, u32 r1) {
    u32 r0_1 = r1 + 0xfefffd8fu;  // (from the original)
    if (r0_1 >= 0x5bu) {  // (from the original)
        r0_1 = ~0u;
    }
    return r0_1;
}

}  // namespace d_0070edf8
GUEST_EXPORT(0x0070edf8, d_0070edf8::manager_next_entry);

// f_0070ee10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Entry `index` of the table at 0x83b4c0; the first otherwise.
namespace d_0070ee10 {


u32 table_83b4c0_entry(u32 r0_unused, u32 r1) {
    return r1 >= 0x5bu ? 0x83b4c0u : r1 * 0x1cu + 0x83b4c0u;  // (from the original)
}

}  // namespace d_0070ee10
GUEST_EXPORT(0x0070ee10, d_0070ee10::table_83b4c0_entry);

// f_0070eed0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The mailbox of player `index` (0x1b88 bytes each, from +0x2058).
namespace d_0070eed0 {


u32 MailData__mailbox_of_player(u32 mail_data, u32 r1) {
    u32 r1_1 = s16(r1) * s16(0x371u);  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return mail_data + (r1_1 << 3) + 0x2058u;  // (from the original)
}

}  // namespace d_0070eed0
GUEST_EXPORT(0x0070eed0, d_0070eed0::MailData__mailbox_of_player);

// f_0070eeec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The letter block of player `index` (0x5a0 bytes each, from +0x8e78).
namespace d_0070eeec {


u32 MailData__letters_of_player(u32 mail_data, u32 r1) {
    u32 r1_1 = r1 * 0xfu * 3u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return mail_data + (r1_1 << 5) + 0x8e78u;  // (from the original)
}

}  // namespace d_0070eeec
GUEST_EXPORT(0x0070eeec, d_0070eeec::MailData__letters_of_player);

// f_0070ef54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Seals the mail data's blocks and writes the checksum of its mailboxes (0x16188 bytes from +0x2058) at +0x2054.
namespace d_0070ef54 {

inline constexpr guest::Function<0x003193e8, u32(u32, u32, u32, u32)> crc32;
inline constexpr guest::Function<0x0070f624, u32(u32, u32, u32, u32)> seal_small_block;
inline constexpr guest::Function<0x0071c0d0, u32(u32)> Block1448__seal;
inline constexpr guest::Function<0x0071fbec, u32(u32)> seal_small_with_crc;

u32 MailData__seal(u32 mail_data, u32 r1, u32 r2, u32 r3) {
    seal_small_block(mail_data, r1, r2, r3);
    seal_small_with_crc(mail_data + 0x24u);  // (from the original)
    Block1448__seal(mail_data + 0xc0cu);  // (from the original)
    u32 r3_2 = ~0u;
    u32 crc_2 = crc32(mail_data + 0x2058u, 0x16188u, r3_2, r3_2);  // (from the original)
    *gptr<u32>(mail_data + 0x2054u) = crc_2;  // (from the original)
    guest::cpu()->r[1] = 0x2054u;  // (from the original)
    return crc_2;
}

}  // namespace d_0070ef54
GUEST_EXPORT_FRAMED(0x0070ef54, d_0070ef54::MailData__seal, 0x4010);  // pushes {r4, lr} first, as the original

// f_0070efa0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// True when every block of the mail data and its mailboxes' checksum are intact.
namespace d_0070efa0 {

struct __attribute__((packed)) MailData {
    u8 unknown_0[0x2054];  // (not used here)
    u32 word_2054;
};
GUEST_OFFSET(MailData, word_2054, 0x2054);

inline constexpr guest::Function<0x003193e8, u32(u32, u32, u32, u32)> crc32;
inline constexpr guest::Function<0x0070f648, u32(u32, u32, u32, u32)> small_block_is_sealed;
inline constexpr guest::Function<0x0071c0f4, u32(u32)> Block1448__is_sealed;
inline constexpr guest::Function<0x0071fc14, u32(u32)> small_with_crc_matches;

u32 MailData__is_sealed(gptr<MailData> mail_data, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = small_block_is_sealed(mail_data.addr(), r1, r2, r3);
    if (r0_1 == 0) {
        return r0_1;
    }
    u32 r0_3 = small_with_crc_matches(mail_data.addr() + 0x24u);  // (from the original)
    if (r0_3 == 0) {
        return r0_3;
    }
    u32 r0_5 = Block1448__is_sealed(mail_data.addr() + 0xc0cu);  // (from the original)
    if (r0_5 == 0) {
        return r0_5;
    }
    u32 r3_2 = ~0u;
    u32 crc_2 = crc32(mail_data.addr() + 0x2058u, 0x16188u, r3_2, r3_2);  // (from the original)
    u32 r1_4 = mail_data->word_2054;
    guest::cpu()->r[1] = r1_4;
    return r1_4 == crc_2;
}

}  // namespace d_0070efa0
GUEST_EXPORT_FRAMED(0x0070efa0, d_0070efa0::MailData__is_sealed, 0x4010);  // pushes {r4, lr} first, as the original

// f_0070f534: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Bit 12 + `player` (below 4) of the half at +0x22.
namespace d_0070f534 {

struct __attribute__((packed)) Object_0070f534_0 {
    u8 unknown_0[0x22];  // (not used here)
    u16 half_22;
};
GUEST_OFFSET(Object_0070f534_0, half_22, 0x22);


u32 half_22_player_bit(gptr<Object_0070f534_0> arg0, u32 r1) {
    if (r1 >= 4u) {
        return 0u;
    }
    u32 r0_1 = u32(arg0->half_22) & lsl_r(0x1000u, r1 & 0xff);  // (from the original)
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    return r0_1;
}

}  // namespace d_0070f534
GUEST_EXPORT(0x0070f534, d_0070f534::half_22_player_bit);

// f_0070f56c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0070f56c {

struct __attribute__((packed)) Object_0070f56c_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x16];  // (not used here)
    u16 half_22;
};
GUEST_OFFSET(Object_0070f56c_0, word_4, 0x4);
GUEST_OFFSET(Object_0070f56c_0, word_8, 0x8);
GUEST_OFFSET(Object_0070f56c_0, half_22, 0x22);

inline constexpr guest::Function<0x003506c8, u32(u32, u32, u32, u32)> Boss__get_value;

u32 check_block_0070f56c(gptr<Object_0070f56c_0> arg0, u32 r1, u32 r2) {
    if ((u32(arg0->half_22) & 1u) == 0) {
        return 0u;
    }
    u32 value_2 = Boss__get_value(0x863u, r1, r2, guest::cpu()->r[3]);  // (from the original)
    if (arg0->word_8 != value_2) {
        return 0u;
    }
    return arg0->word_4 == guest::cpu()->r[1];
}

}  // namespace d_0070f56c
GUEST_EXPORT_FRAMED(0x0070f56c, d_0070f56c::check_block_0070f56c, 0x4010);  // pushes {r4, lr} first, as the original

// f_0070f678: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The byte at (x, y) of a grid 16 bytes wide.
namespace d_0070f678 {


u32 ByteGrid16__get(u32 byte_grid16, u32 r1, u32 r2) {
    return *gptr<u8>(byte_grid16 + (r2 << 4) + r1);
}

}  // namespace d_0070f678
GUEST_EXPORT(0x0070f678, d_0070f678::ByteGrid16__get);
