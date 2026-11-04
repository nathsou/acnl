// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen. Hexadecimal constants are the original's
// (addresses, offsets, sizes and ids as the game has them).
#include "guest/guest.hpp"
#include "core/date.hpp"
#include "core/grid_map.hpp"
#include "core/word_pair.hpp"
#include "graphics/hemisphere_light.hpp"
#include "recovered/structs.hpp"
#include "save/saved_record.hpp"

#include <bit>

using guest::gptr;

// f_007508b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The furniture's item (+0x5e4) with the direction its angle (with its parent's, when it sits on one) gives, in a
// shared item.
namespace d_007508b0 {

struct __attribute__((packed)) Local_007508b0_r5_1 {
    u8 unknown_0[0xc];  // (not used here)
    u16 half_c;
    u16 half_e;
};
GUEST_OFFSET(Local_007508b0_r5_1, half_c, 0xc);
GUEST_OFFSET(Local_007508b0_r5_1, half_e, 0xe);

inline constexpr u32 furniture_direction_items_address = 0x0094d6b8u;
inline constexpr u32 furniture_direction_state_address = 0x0094d6bcu;
inline guest::global<u32, 0x0094d6b8> furniture_direction_items;
inline constexpr guest::Function<0x002fc20c, u32(u32)> construct_empty_item;
inline constexpr guest::Function<0x002fe7dd, u32(u32)> static_guard_acquire;
inline constexpr guest::Function<0x003117dc, u32(u32, u32, u32)> copy_item_with_top_bits;
inline constexpr guest::Function<0x004e958c, u32(u32, u32)> value_from_list;
inline constexpr guest::Function<0x004ea048, u32(u32)> room_furniture_address;
inline constexpr guest::Function<0x00691598, u32(u32)> direction_of_angle;

struct __attribute__((packed)) AcFtrItemWithDirectionFrame {
    u16 half_0;
    u8 unknown_2[0x2];  // (not read or written by name)
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(AcFtrItemWithDirectionFrame, half_0, 0x0);
GUEST_OFFSET(AcFtrItemWithDirectionFrame, word_4, 0x4);
GUEST_SIZE(AcFtrItemWithDirectionFrame, 0xc);

u32 AcFtr__item_with_direction(u32 ac_ftr) {
    guest::StackFrameOf<AcFtrItemWithDirectionFrame> frame;  // the original's stack frame
    u32 r0_4 = 0;
    u32 r0_1 = *furniture_direction_items;
    if ((r0_1 & 1u) == 0) {
        r0_1 = static_guard_acquire(furniture_direction_items_address);
        if (r0_1 != 0) {
            construct_empty_item(furniture_direction_state_address);
            r0_1 = furniture_direction_items_address;
        }
    }
    u32 r0_2 = room_furniture_address(r0_1);
    gptr<Local_007508b0_r5_1> r5_1 = gptr<Local_007508b0_r5_1>(ac_ftr + 0x600u);
    u32 r1_1 = s16(r5_1->half_c);
    u32 r0_3 = value_from_list(r0_2, r1_1);
    if (r0_3 == 0) {
        r0_4 = *gptr<u16>(ac_ftr + 0x2eu);
        frame->half_0 = u16(r0_4);
    } else {
        u32 r0_5 = u32(*gptr<u16>(r0_3 + 0x2eu)) + u32(r5_1->half_e);
        frame->half_0 = u16(r0_5);
        r0_4 = uxth(r0_5);
    }
    frame->word_4 = r0_4;
    u32 direction = direction_of_angle(frame.at(4).addr());
    copy_item_with_top_bits(furniture_direction_state_address, ac_ftr + 0x5e4u, direction);
    return furniture_direction_state_address;
}

}  // namespace d_007508b0
GUEST_EXPORT_FRAMED(0x007508b0, d_007508b0::AcFtr__item_with_direction, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00750994: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The furniture's state byte (from its data at +0x5f4; 0 when it reads 0xff), or 0xff without data.
namespace d_00750994 {

struct __attribute__((packed)) Furniture {
    u8 unknown_0[0x5f4];  // (not used here)
    u32 word_5f4;
};
GUEST_OFFSET(Furniture, word_5f4, 0x5f4);


u32 AcFtr__state(gptr<Furniture> furniture) {
    u32 r0_1 = furniture->word_5f4;
    if (r0_1 == 0) {
        return 0xffu;
    }
    u32 r0_2 = *gptr<s8>(r0_1);
    if (r0_2 >= 0xffu) {
        r0_2 = 0u;
    }
    return r0_2 & 0xffu;
}

}  // namespace d_00750994
GUEST_EXPORT(0x00750994, d_00750994::AcFtr__state);

// f_00750d40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the furniture's position (the translation column of its matrix at +0x548) to `out`.
namespace d_00750d40 {

struct __attribute__((packed)) Furniture {
    u8 unknown_0[0x554];  // (not used here)
    u32 word_554;
    u8 unknown_558[0xc];  // (not used here)
    u32 word_564;
    u8 unknown_568[0xc];  // (not used here)
    u32 word_574;
};
GUEST_OFFSET(Furniture, word_554, 0x554);
GUEST_OFFSET(Furniture, word_564, 0x564);
GUEST_OFFSET(Furniture, word_574, 0x574);

struct __attribute__((packed)) Out {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Out, word_0, 0x0);
GUEST_OFFSET(Out, word_4, 0x4);
GUEST_OFFSET(Out, word_8, 0x8);


void AcFtr__position(gptr<Furniture> furniture, gptr<Out> out) {
    if (out.addr() == 0) {
        return;
    }
    out->word_0 = furniture->word_554;
    out->word_4 = furniture->word_564;
    out->word_8 = furniture->word_574;
}

}  // namespace d_00750d40
GUEST_EXPORT(0x00750d40, d_00750d40::AcFtr__position);

// f_00750da8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Transforms a point by the furniture's matrix (+0x548).
namespace d_00750da8 {

inline constexpr guest::Function<0x0014f3cc, u32(u32, u32, u32)> apply_matrix;

void AcFtr__transform_point(u32 ac_ftr, u32 r1) {
    apply_matrix(r1, ac_ftr + 0x548u, guest::cpu()->r[2]);
    return;
}

}  // namespace d_00750da8
GUEST_EXPORT(0x00750da8, d_00750da8::AcFtr__transform_point);

// f_00750e1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The furniture's extents turned to its direction (absolute values) into `out`.
namespace d_00750e1c {

inline constexpr guest::Function<0x004e958c, u32(u32, u32)> value_from_list;
inline constexpr guest::Function<0x004ea048, u32(u32)> room_furniture_address;
inline constexpr guest::Function<0x0056a224, u32(u32, u32)> rotate_xz;
inline constexpr guest::Function<0x00691598, u32(u32)> direction_of_angle;
inline constexpr guest::Function<0x00751578, u32(u32, u32, u32, u32)> AcFtr__sound_position;

struct __attribute__((packed)) AcFtrRotatedExtentsFrame {
    u8 unknown_0[0x4];  // (not read or written by name)
    float float_4;
    float float_8;
    float float_c;
    u32 word_10;
    u8 unknown_14[0x4];  // (not read or written by name)
};
GUEST_OFFSET(AcFtrRotatedExtentsFrame, float_4, 0x4);
GUEST_OFFSET(AcFtrRotatedExtentsFrame, float_8, 0x8);
GUEST_OFFSET(AcFtrRotatedExtentsFrame, float_c, 0xc);
GUEST_OFFSET(AcFtrRotatedExtentsFrame, word_10, 0x10);
GUEST_SIZE(AcFtrRotatedExtentsFrame, 0x18);

u32 AcFtr__rotated_extents(gptr<AcFtr> ac_ftr, u32 out, float S0) {
    guest::StackFrameOf<AcFtrRotatedExtentsFrame> frame;  // the original's stack frame
    u32 r0_4 = 0;
    u32 r0_2 = room_furniture_address(AcFtr__sound_position(ac_ftr.addr(), frame.at(4).addr(), guest::cpu()->r[2], guest::cpu()->r[3]));
    u32 r6_1 = ac_ftr.addr() + 0x600u;
    u32 r1_2 = s16(ac_ftr->half_60c);
    u32 r0_3 = value_from_list(r0_2, r1_2);
    if (r0_3 == 0) {
        r0_4 = ac_ftr->rotation_y;
        *frame.at<u16>(0) = u16(r0_4);
    } else {
        u32 r0_5 = u32(*gptr<u16>(r0_3 + 0x2eu)) + u32(ac_ftr->half_60e);
        *frame.at<u16>(0) = u16(r0_5);
        r0_4 = uxth(r0_5);
    }
    frame->word_10 = r0_4;
    u32 direction = direction_of_angle(frame.at(0x10).addr());
    *frame.at<u16>(0) = u16(direction << 0xe);
    u32 r0_9 = rotate_xz(frame.at(4).addr(), *frame.at<u32>(0));
    *gptr<u32>(out) = std::bit_cast<u32>(fabsf(frame->float_4));
    *gptr<u32>(out + 4u) = std::bit_cast<u32>(fabsf(frame->float_8));
    float S0_5 = fabsf(frame->float_c);
    *gptr<u32>(out + 8u) = std::bit_cast<u32>(S0_5);
    guest::cpu()->s[0] = S0_5;
    return r0_9;
}

}  // namespace d_00750e1c
GUEST_EXPORT_FRAMED(0x00750e1c, d_00750e1c::AcFtr__rotated_extents, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00750eb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Bit 3 of byte +4 of the furniture's data (+0x5f4), or 0 without data.
namespace d_00750eb4 {

struct __attribute__((packed)) Furniture {
    u8 unknown_0[0x5f4];  // (not used here)
    u32 word_5f4;
};
GUEST_OFFSET(Furniture, word_5f4, 0x5f4);


u32 AcFtr__data_flag_3(gptr<Furniture> furniture) {
    u32 r0_1 = furniture->word_5f4;
    if (r0_1 == 0) {
        return r0_1;
    }
    return u32(*gptr<u8>(r0_1 + 4u)) >> 3u & 1u;
}

}  // namespace d_00750eb4
GUEST_EXPORT(0x00750eb4, d_00750eb4::AcFtr__data_flag_3);

// f_00750ed0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether one of the cells the furniture covers holds an item (furniture of class 1 placed on the field only).
namespace d_00750ed0 {

struct __attribute__((packed)) AcFtr {
    u8 unknown_0[0x5f0];  // (not used here)
    u32 word_5f0;
};
GUEST_OFFSET(AcFtr, word_5f0, 0x5f0);

struct __attribute__((packed)) Local_00750ed0_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00750ed0_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00750ed0_ea_1, word_4, 0x4);

inline constexpr guest::Function<0x002fcaf4, u32(u32)> Item__is_empty;
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> GridMap__process_world_position;
inline constexpr guest::Function<0x005757d4, u32(u32)> PlacementQuery__init;
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> get_map_table;
inline constexpr guest::Function<0x007500c8, u32(u32, u32, u32, u32)> TimeStamp__split;
inline constexpr guest::Function<0x00751240, u32(u32)> furniture_is_class_1;

struct __attribute__((packed)) AcFtrCoversAnItemFrame {
    u32 word_0;
    u16 half_4;
    u8 unknown_6[0x2];  // (not read or written by name)
    u32 word_8;
    u8 unknown_c[0xd4];  // (not read or written by name)
};
GUEST_OFFSET(AcFtrCoversAnItemFrame, word_0, 0x0);
GUEST_OFFSET(AcFtrCoversAnItemFrame, half_4, 0x4);
GUEST_OFFSET(AcFtrCoversAnItemFrame, word_8, 0x8);
GUEST_SIZE(AcFtrCoversAnItemFrame, 0xe0);

u32 AcFtr__covers_an_item(gptr<AcFtr> furniture, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<AcFtrCoversAnItemFrame> frame;  // the original's stack frame
    u32 r0 = furniture.addr();
    u32 map_table = get_map_table(r0, r1, r2, r3);
    u32 map = map_table;
    if (map_table != 0) {
        if (furniture->word_5f0 != 0) {
            if (furniture_is_class_1(r0) != 0) {
                PlacementQuery__init(frame.at(8).addr());
                frame->half_4 = 0;
                frame->word_0 = 0;
                TimeStamp__split(r0, frame.at(8).addr(), 0u, frame.at(4).addr());
                u32 r0_4 = frame->word_8;
                u32 index = 0u;
                if (r0_4 >= 0u && r0_4 != 0) {
                    u32 r6 = frame.at(8).addr();
                    do {
                        gptr<Local_00750ed0_ea_1> ea_1 = gptr<Local_00750ed0_ea_1>(r6 + (index << 3) + 0x14u);
                        u32 item = GridMap__process_world_position(map, ea_1->word_0, ea_1->word_4, 1u);
                        if (item != 0) {
                            u32 is_empty = Item__is_empty(item);
                            if (is_empty == 0) {
                                return 1u;
                            }
                        }
                        index += 1u;
                        guest::preempt();
                    } while (frame->word_8 > index);
                }
            }
        }
        map_table = 0u;
    }
    return map_table;
}

}  // namespace d_00750ed0
GUEST_EXPORT_FRAMED(0x00750ed0, d_00750ed0::AcFtr__covers_an_item, 0x4070);  // pushes {index, map, r6, lr} first, as the original

// f_00751410: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The height of the furniture's surface at the position.
namespace d_00751410 {

struct __attribute__((packed)) Local_00751410_r0_1 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_00751410_r0_1, float_0, 0x0);
GUEST_OFFSET(Local_00751410_r0_1, float_4, 0x4);
GUEST_OFFSET(Local_00751410_r0_1, float_8, 0x8);

struct __attribute__((packed)) Local_00751410_r5_1 {
    u8 unknown_0[0x554];  // (not used here)
    u32 word_554;
    u8 unknown_558[0xc];  // (not used here)
    u32 word_564;
    u8 unknown_568[0xc];  // (not used here)
    u32 word_574;
};
GUEST_OFFSET(Local_00751410_r5_1, word_554, 0x554);
GUEST_OFFSET(Local_00751410_r5_1, word_564, 0x564);
GUEST_OFFSET(Local_00751410_r5_1, word_574, 0x574);

inline constexpr guest::Function<0x0014f3cc, u32(u32, u32, u32)> apply_matrix;
inline constexpr guest::Function<0x00748534, u32(u32, u32, u32, u32)> FurnitureRef__has_byte_19_class_4_or_5;
inline constexpr guest::Function<0x00750a48, u32(u32, u32, u32, u32)> AcFtr__surface_at;

struct __attribute__((packed)) AcFtrSurfaceHeightFrame {
    u8 unknown_0[0xc];  // (not read or written by name)
    u32 word_c;
    u8 unknown_10[0xc];  // (not read or written by name)
    u32 word_1c;
    u8 unknown_20[0xc];  // (not read or written by name)
    u32 word_2c;
    u32 word_30;
    u32 word_34;
    u32 word_38;
    u16 half_3c;
    u8 unknown_3e[0x2];  // (not read or written by name)
};
GUEST_OFFSET(AcFtrSurfaceHeightFrame, word_c, 0xc);
GUEST_OFFSET(AcFtrSurfaceHeightFrame, word_1c, 0x1c);
GUEST_OFFSET(AcFtrSurfaceHeightFrame, word_2c, 0x2c);
GUEST_OFFSET(AcFtrSurfaceHeightFrame, word_30, 0x30);
GUEST_OFFSET(AcFtrSurfaceHeightFrame, word_34, 0x34);
GUEST_OFFSET(AcFtrSurfaceHeightFrame, word_38, 0x38);
GUEST_OFFSET(AcFtrSurfaceHeightFrame, half_3c, 0x3c);
GUEST_SIZE(AcFtrSurfaceHeightFrame, 0x40);

u32 AcFtr__surface_height(gptr<AcFtr> ac_ftr, gptr<Float3> arg1, u32 r2, u32 r3, float S0, float S1, float S2) {
    guest::StackFrameOf<AcFtrSurfaceHeightFrame> frame;  // the original's stack frame
    u32 r0 = ac_ftr.addr();
    u32 r1 = arg1.addr();
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    gptr<Local_00751410_r5_1> r5_1 = gptr<Local_00751410_r5_1>(r0);
    r0 = ac_ftr->word_5f0;
    u32 r4 = r1;
    if (r0 == 0) {
        goto L_751484;
    }
    r0 = FurnitureRef__has_byte_19_class_4_or_5(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (r0 == 0 || r2 == 1u) {
        goto L_751484;
    }
    frame->half_3c = 0;
    r3_1 = frame.at(0x3c).addr();
    r1_1 = frame.at(0).addr();
    AcFtr__surface_at(r5_1.addr(), r1_1, 0u, r3_1);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (r2 == 2u) {
        gptr<Local_00751410_r0_1> r0_1 = gptr<Local_00751410_r0_1>(frame.at(0x30).addr());
        float S2_2 = 16.0f * -0.5f;
        float S0_1 = 0.0f;
        r0_1->float_0 = S0_1;
        r0_1->float_4 = S0_1;
        r0_1->float_8 = S2_2;
        u32 r0_2 = frame.at(0x30).addr();
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S0_1;
        apply_matrix(r0_2, frame.at(0).addr(), r0_2);
        *gptr<u32>(r4) = frame->word_30;
        *gptr<u32>(r4 + 4u) = frame->word_34;
        u32 r0_3 = frame->word_38;
        *gptr<u32>(r4 + 8u) = r0_3;
        return r0_3;
    }
    arg1->v[0] = std::bit_cast<float>(u32(frame->word_c));
    arg1->v[1] = std::bit_cast<float>(u32(frame->word_1c));
    r0 = frame->word_2c;
    *gptr<u32>(r4 + 8u) = r0;
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
L_751484:;
    if (r4 != 0) {
        *gptr<u32>(r4) = r5_1->word_554;
        r1 = r5_1->word_564;
        *gptr<u32>(r4 + 4u) = r1;
        r0 = r5_1->word_574;
        *gptr<u32>(r4 + 8u) = r0;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_00751410
GUEST_EXPORT_FRAMED(0x00751410, d_00751410::AcFtr__surface_height, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_007516f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the item under the furniture (facing its direction) is the same on the current and the previous map.
namespace d_007516f8 {

struct __attribute__((packed)) Local_007516f8_r4_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_007516f8_r4_1, word_0, 0x0);
GUEST_OFFSET(Local_007516f8_r4_1, word_4, 0x4);

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> current_scene_id;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> Item__copy_b;
inline constexpr guest::Function<0x002fe574, u32(u32, u32)> Item__same_number_as;
inline constexpr guest::Function<0x002fe7cc, u32(u32)> read_map_table;
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> GridMap__process_world_position;
inline constexpr guest::Function<0x00691598, u32(u32)> direction_of_angle;
inline constexpr guest::Function<0x006b9da4, u32(u32, u32)> set_item_flags_top_value;
inline constexpr guest::Function<0x006f9638, u32(u32)> list_position_of_mode;
inline constexpr guest::Function<0x0075127c, u32(u32, u32, u32, u32)> AcFtr__seat_slots;
inline constexpr guest::Function<0x0076936c, u32(u32)> item_kind_11_top_bits;

struct __attribute__((packed)) AcFtrMatchesPreviousMapFrame {
    u32 word_0;
    u8 unknown_4[0xc];  // (not read or written by name)
    u16 half_10;
    u8 unknown_12[0x2];  // (not read or written by name)
};
GUEST_OFFSET(AcFtrMatchesPreviousMapFrame, word_0, 0x0);
GUEST_OFFSET(AcFtrMatchesPreviousMapFrame, half_10, 0x10);
GUEST_SIZE(AcFtrMatchesPreviousMapFrame, 0x14);

u32 AcFtr__matches_previous_map(u32 ac_ftr, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<AcFtrMatchesPreviousMapFrame> frame;  // the original's stack frame
    u32 scene_2 = current_scene_id(ac_ftr, r1, r2, r3);
    u32 position = list_position_of_mode(scene_2);
    u32 map_3 = read_map_table(position);
    u32 position_2 = list_position_of_mode(scene_2 - 1u & 0xffu);
    u32 map_4 = read_map_table(position_2);
    u32 direction = direction_of_angle(ac_ftr + 0x2eu);
    Item__copy_b(frame.at(0xc).addr(), ac_ftr + 0x5e4u);
    set_item_flags_top_value(frame.at(0xc).addr(), direction);
    frame->half_10 = 0;
    frame->word_0 = frame.at(0x10).addr();
    AcFtr__seat_slots(ac_ftr, frame.at(4).addr(), frame.at(8).addr(), 0u);
    if (map_3 != 0 && map_4 != 0) {
        gptr<Local_007516f8_r4_1> r4_1 = gptr<Local_007516f8_r4_1>(frame.at(4).addr());
        u32 item = GridMap__process_world_position(map_3, r4_1->word_0, r4_1->word_4, 0u);
        u32 item_2 = GridMap__process_world_position(map_4, r4_1->word_0, r4_1->word_4, 0u);
        u32 zf_1 = item == 0;
        if (!zf_1) {
            zf_1 = item_2 == 0;
        }
        if (!zf_1) {
            if (Item__same_number_as(item, item_2) != 0) {
                if (item_kind_11_top_bits(item_2) == direction) {
                    return 1u;
                }
            }
        }
    }
    return 0u;
}

}  // namespace d_007516f8
GUEST_EXPORT_FRAMED(0x007516f8, d_007516f8::AcFtr__matches_previous_map, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00751864: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The address of 8-byte entry `index` from +0x14.
namespace d_00751864 {


u32 entry_address_8(u32 r0, u32 r1) {
    return r0 + (r1 << 3) + 0x14u;
}

}  // namespace d_00751864
GUEST_EXPORT(0x00751864, d_00751864::entry_address_8);

// f_00751d9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// An NPC's part at offset 0x14, when its parameters' flag bit 1 is set; else null.
namespace d_00751d9c {

inline constexpr guest::Function<0x0076f550, u32(u32, u32)> member_address_0x14_;

u32 AcNpc__part_14_if_flag_1(gptr<AcNpc_rec> ac_npc_rec) {
    u32 r1_1 = u32(*gptr<u8>(ac_npc_rec->word_660 + 0x224u)) >> 1u & 1u;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    return member_address_0x14_(ac_npc_rec.addr(), r1_1);
}

}  // namespace d_00751d9c
GUEST_EXPORT(0x00751d9c, d_00751d9c::AcNpc__part_14_if_flag_1);

// f_00751f40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The offset from object `id` to the position (the object's own when none is given), with its horizontal distance in
// s0; a far default without the object.
namespace d_00751f40 {

struct __attribute__((packed)) ObjectData {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(ObjectData, float_0, 0x0);
GUEST_OFFSET(ObjectData, float_4, 0x4);
GUEST_OFFSET(ObjectData, float_8, 0x8);

struct __attribute__((packed)) Local_00751f40_r0_2 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_00751f40_r0_2, float_0, 0x0);
GUEST_OFFSET(Local_00751f40_r0_2, float_4, 0x4);
GUEST_OFFSET(Local_00751f40_r0_2, float_8, 0x8);

struct __attribute__((packed)) Local_00751f40_r4_1 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_00751f40_r4_1, float_0, 0x0);
GUEST_OFFSET(Local_00751f40_r4_1, float_4, 0x4);
GUEST_OFFSET(Local_00751f40_r4_1, float_8, 0x8);

inline constexpr guest::Function<0x005c2ce0, u32(u32, u32, u32, u32)> object_data_of_id;

struct __attribute__((packed)) OffsetToObjectXzFrame {
    float float_0;
    u8 unknown_4[0x4];  // (not read or written by name)
    float float_8;
};
GUEST_OFFSET(OffsetToObjectXzFrame, float_0, 0x0);
GUEST_OFFSET(OffsetToObjectXzFrame, float_8, 0x8);
GUEST_SIZE(OffsetToObjectXzFrame, 0xc);

u32 offset_to_object_xz(u32 self, u32 r1, u32 position, u32 r3, float S0, float S1, float S2, float S3, float S4, float S5) {
    guest::StackFrameOf<OffsetToObjectXzFrame> frame;  // the original's stack frame
    gptr<Local_00751f40_r4_1> r4_1 = gptr<Local_00751f40_r4_1>(position);
    gptr<ObjectData> object_data = gptr<ObjectData>(object_data_of_id(r1, r3, position, r3));
    if (r4_1.addr() == 0) {
        r4_1 = gptr<Local_00751f40_r4_1>(self + 0x14u);
    }
    if (object_data.addr() != 0) {
        float S3_1 = object_data->float_0;
        float S4_1 = object_data->float_4;
        float S2_1 = r4_1->float_8 - object_data->float_8;
        gptr<Local_00751f40_r0_2> r0_2 = gptr<Local_00751f40_r0_2>(frame.at(0).addr());
        float S1_1 = r4_1->float_4 - S4_1;
        r0_2->float_0 = r4_1->float_0 - S3_1;
        r0_2->float_4 = S1_1;
        r0_2->float_8 = S2_1;
        float S1_2 = frame->float_0;
        float S0_1 = frame->float_8;
        float S1_3 = S1_2 * S1_2 + S0_1 * S0_1;
        float S0_2 = sqrtf(S1_3);
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_3;
        return r0_2.addr();
    }
    float S1_4 = 32.0f * 16.0f;
    float S0_3 = S1_4 * 10.0f;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_4;
    return 0x85f2ccu;
}

}  // namespace d_00751f40
GUEST_EXPORT_FRAMED(0x00751f40, d_00751f40::offset_to_object_xz, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0075221c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When its parameters' flag bit 2 is set: an NPC's part at 0x80c when its flag 0xb07 bit 7 is set, else
// virtual 23's; else null.
namespace d_0075221c {


u32 AcNpc__part_80c_if_flag_2(gptr<AcNpc_rec> ac_npc_rec) {
    u32 r1_1 = u32(*gptr<u8>(ac_npc_rec->word_660 + 0x224u)) >> 2u & 1u;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r1_2 = u32(ac_npc_rec->byte_b07) >> 7;
    if (r1_2 != 0) {
        guest::cpu()->r[1] = r1_2;
        return ac_npc_rec.addr() + 0x80cu;
    }
    u32 r1_3 = *gptr<u32>(ac_npc_rec->word_0 + 0x5cu);
    // virtual function 23 of ac_npc_rec.addr() (AcNpc_rec)
    return guest::call_address<u32>(r1_3, ac_npc_rec.addr(), r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0075221c
GUEST_EXPORT(0x0075221c, d_0075221c::AcNpc__part_80c_if_flag_2);

// f_007523a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When there is a main object: checks bit 3 of +0xb07 and the pointer at +0xaa0.
namespace d_007523a8 {

inline constexpr guest::Function<0x00300904, u32(u32)> current_net_signed_value;
inline constexpr guest::Function<0x0071262c, u32(u32)> entry_owned_here;

u32 AcNpc_rec__check_b07(gptr<AcNpc_rec> ac_npc_rec) {
    if (current_net_signed_value(ac_npc_rec.addr()) != 0) {
        u32 r5_1 = ac_npc_rec.addr() + 0xb06u;
        u32 res_1 = u32(ac_npc_rec->byte_b07) >> 3u & 1u;
        u32 zf_1 = res_1 == 0;
        u32 r0_2 = res_1;
        if (!zf_1) {
            r0_2 = ac_npc_rec->word_aa0;
            zf_1 = r0_2 == 0;
        }
        if (!zf_1) {
            if (entry_owned_here(r0_2) != 0) {
                if ((u32(ac_npc_rec->byte_b08) >> 4u & 1u) == 0) {
                    return 1u;
                }
            }
            return 0u;
        }
    }
    return 1u;
}

}  // namespace d_007523a8
GUEST_EXPORT_FRAMED(0x007523a8, d_007523a8::AcNpc_rec__check_b07, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0075256c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the object's position lies outside the box (offsets from the camera's position); false without a camera.
namespace d_0075256c {

struct __attribute__((packed)) Box {
    float float_0;
    u8 unknown_4[0x4];  // (not used here)
    float float_8;
    float float_c;
    u8 unknown_10[0x4];  // (not used here)
    float float_14;
};
GUEST_OFFSET(Box, float_0, 0x0);
GUEST_OFFSET(Box, float_8, 0x8);
GUEST_OFFSET(Box, float_c, 0xc);
GUEST_OFFSET(Box, float_14, 0x14);

struct __attribute__((packed)) ObjectOutsideCameraBoxArg1 {
    u8 unknown_0[0x14];  // (not used here)
    float float_14;
    u8 unknown_18[0x4];  // (not used here)
    float float_1c;
};
GUEST_OFFSET(ObjectOutsideCameraBoxArg1, float_14, 0x14);
GUEST_OFFSET(ObjectOutsideCameraBoxArg1, float_1c, 0x1c);

struct __attribute__((packed)) Local_0075256c_r1_2 {
    float float_0;
    u8 unknown_4[0x4];  // (not used here)
    float float_8;
};
GUEST_OFFSET(Local_0075256c_r1_2, float_0, 0x0);
GUEST_OFFSET(Local_0075256c_r1_2, float_8, 0x8);

inline constexpr u32 camera_manager_address = 0x0094edd8u;
inline guest::global<u32, 0x0094edd8> camera_manager;

u32 object_outside_camera_box(gptr<Box> box, gptr<ObjectOutsideCameraBoxArg1> object, float S0, float S1) {
    u32 r1_1 = *camera_manager;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    float S1_1 = object->float_14;
    gptr<Local_0075256c_r1_2> r1_2 = gptr<Local_0075256c_r1_2>(*gptr<u32>(r1_1 + 0x1a4u) + 0x24u);
    float S0_1 = r1_2->float_0;
    if (!(S1_1 > S0_1 + box->float_0)) {
        guest::cpu()->r[1] = r1_2.addr();
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return 1u;
    }
    float S0_2 = S0_1 + box->float_c;
    if (!(S0_2 > S1_1)) {
        guest::cpu()->r[1] = r1_2.addr();
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_1;
        return 1u;
    }
    float S0_3 = r1_2->float_8;
    float S1_2 = object->float_1c;
    if (!(S0_3 + box->float_8 < S1_2)) {
        guest::cpu()->r[1] = r1_2.addr();
        guest::cpu()->s[0] = S0_3;
        guest::cpu()->s[1] = S1_2;
        return 1u;
    }
    float S0_4 = S0_3 + box->float_14;
    if (!(S0_4 > S1_2)) {
        guest::cpu()->r[1] = r1_2.addr();
        guest::cpu()->s[0] = S0_4;
        guest::cpu()->s[1] = S1_2;
        return 1u;
    }
    guest::cpu()->r[1] = r1_2.addr();
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_2;
    return 0u;
}

}  // namespace d_0075256c
GUEST_EXPORT(0x0075256c, d_0075256c::object_outside_camera_box);

// f_007525fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the position lies outside the box (offsets from the camera's position); false without a camera.
namespace d_007525fc {

struct __attribute__((packed)) Box {
    float float_0;
    u8 unknown_4[0x4];  // (not used here)
    float float_8;
    float float_c;
    u8 unknown_10[0x4];  // (not used here)
    float float_14;
};
GUEST_OFFSET(Box, float_0, 0x0);
GUEST_OFFSET(Box, float_8, 0x8);
GUEST_OFFSET(Box, float_c, 0xc);
GUEST_OFFSET(Box, float_14, 0x14);

struct __attribute__((packed)) Local_007525fc_r2_2 {
    float float_0;
    u8 unknown_4[0x4];  // (not used here)
    float float_8;
};
GUEST_OFFSET(Local_007525fc_r2_2, float_0, 0x0);
GUEST_OFFSET(Local_007525fc_r2_2, float_8, 0x8);

inline constexpr u32 camera_manager_address = 0x0094edd8u;
inline guest::global<u32, 0x0094edd8> camera_manager;

u32 position_outside_camera_box(gptr<Box> box, gptr<Float3> position, float S0, float S1) {
    u32 r2_1 = *camera_manager;
    if (r2_1 == 0) {
        return 0u;
    }
    float S1_1 = position->v[0];
    gptr<Local_007525fc_r2_2> r2_2 = gptr<Local_007525fc_r2_2>(*gptr<u32>(r2_1 + 0x1a4u) + 0x24u);
    float S0_1 = r2_2->float_0;
    if (!(S1_1 > S0_1 + box->float_0)) {
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return 1u;
    }
    float S0_2 = S0_1 + box->float_c;
    if (!(S0_2 > S1_1)) {
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_1;
        return 1u;
    }
    float S0_3 = r2_2->float_8;
    float S1_2 = position->v[2];
    if (!(S0_3 + box->float_8 < S1_2)) {
        guest::cpu()->s[0] = S0_3;
        guest::cpu()->s[1] = S1_2;
        return 1u;
    }
    float S0_4 = S0_3 + box->float_14;
    if (!(S0_4 > S1_2)) {
        guest::cpu()->s[0] = S0_4;
        guest::cpu()->s[1] = S1_2;
        return 1u;
    }
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_2;
    return 0u;
}

}  // namespace d_007525fc
GUEST_EXPORT(0x007525fc, d_007525fc::position_outside_camera_box);

// f_007526bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether a point above the NPC's head is inside the camera's view (and, for an NPC flagged for it, near enough in
// depth); true without a camera.
namespace d_007526bc {

struct __attribute__((packed)) Local_007526bc_r0_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_007526bc_r0_1, word_0, 0x0);
GUEST_OFFSET(Local_007526bc_r0_1, word_4, 0x4);
GUEST_OFFSET(Local_007526bc_r0_1, word_8, 0x8);

inline constexpr u32 camera_manager_address = 0x0094edd8u;
inline guest::global<u32, 0x0094edd8> camera_manager;
inline guest::global<u32, 0x00aaf198> screen_scale;
inline constexpr guest::Function<0x0014f3cc, u32(u32, u32, u32)> apply_matrix;
inline constexpr guest::Function<0x0056afe8, u32(u32)> between_floats;
inline constexpr guest::Function<0x00744ce4, u32(u32, u32)> Frustum__intersects_sphere;
inline constexpr guest::Function<0x00745f80, u32(u32, u32, u32, u32)> model_matrix;

struct __attribute__((packed)) AcNpcRecIsOnScreenFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    float float_c;
    u8 unknown_10[0x10];  // (not read or written by name)
};
GUEST_OFFSET(AcNpcRecIsOnScreenFrame, word_0, 0x0);
GUEST_OFFSET(AcNpcRecIsOnScreenFrame, word_4, 0x4);
GUEST_OFFSET(AcNpcRecIsOnScreenFrame, word_8, 0x8);
GUEST_OFFSET(AcNpcRecIsOnScreenFrame, float_c, 0xc);
GUEST_SIZE(AcNpcRecIsOnScreenFrame, 0x20);

u32 AcNpc_rec__is_on_screen(gptr<AcNpc_rec> ac_npc_rec, float S0, float S1, float S2_unused, float S3) {
    guest::StackFrameOf<AcNpcRecIsOnScreenFrame> frame;  // the original's stack frame
    u32 r0_5 = 0;
    u32 camera = *camera_manager;
    if (camera != 0) {
        gptr<Local_007526bc_r0_1> r0_1 = gptr<Local_007526bc_r0_1>(frame.at(0x10).addr());
        float S0_1 = 0.0f;
        float S1_1 = 28.0f;
        r0_1->word_0 = std::bit_cast<u32>(S0_1);
        r0_1->word_4 = std::bit_cast<u32>(S1_1);
        r0_1->word_8 = std::bit_cast<u32>(S0_1);
        u32 r1_1 = r0_1->word_0;
        u32 r2_1 = r0_1->word_4;
        u32 r6_1 = frame.at(0).addr();
        float S0_2 = 30.0f;
        frame->word_8 = r0_1->word_8;
        frame->word_0 = r1_1;
        frame->word_4 = r2_1;
        frame->float_c = S0_2;
        u32 r0_2 = ac_npc_rec->word_68 + 0x78u;
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_1;
        guest::cpu()->s[2] = S0_1;
        apply_matrix(r6_1, model_matrix(r0_2, r1_1, r2_1, guest::cpu()->r[3]), r6_1);
        r0_5 = Frustum__intersects_sphere(camera + 0x1acu, frame.at(0).addr());
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        if (r0_5 != 0) {
            u32 r0_6 = s32(*screen_scale) <= s32(0x3f7d70a4u) ? !(s32(0x3f7d70a4u) <= s32(ac_npc_rec->word_ae4)) : 1u;
            float S2_2 = -616.0f;
            S1 = -496.0f;
            S0 = std::bit_cast<float>(ac_npc_rec->position_z) - std::bit_cast<float>(*gptr<u32>(*gptr<u32>(camera + 0x1a4u) + 0x2cu));
            if (r0_6 != 0) {
                S1 = S2_2;
            }
            float S2_3 = 160.0f;
            u32 r0_7 = u32(ac_npc_rec->byte_b08) >> 6u & 1u;
            if (r0_7 != 0) {
                guest::cpu()->s[0] = S0;
                guest::cpu()->s[1] = S1;
                guest::cpu()->s[2] = S2_3;
                r0_5 = between_floats(r0_7);
                S0 = guest::cpu()->s[0];
                S1 = guest::cpu()->s[1];
                if (r0_5 != 0) {
                    r0_5 = 1u;
                }
            } else {
                r0_5 = 1u;
            }
        }
    } else {
        r0_5 = 1u;
    }
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0_5;
}

}  // namespace d_007526bc
GUEST_EXPORT_FRAMED(0x007526bc, d_007526bc::AcNpc_rec__is_on_screen, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00752990: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The width of the grid rectangle at +0x10.
namespace d_00752990 {

inline constexpr guest::Function<0x007482bc, u32(u32, u32)> GridRect__width;

u32 rect_at_10_width(u32 map) {
    return GridRect__width(map + 0x10u, guest::cpu()->r[1]);
}

}  // namespace d_00752990
GUEST_EXPORT(0x00752990, d_00752990::rect_at_10_width);

// f_00752998: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The height of the grid rectangle at +0x10.
namespace d_00752998 {

inline constexpr guest::Function<0x00748310, u32(u32, u32)> GridRect__height_2;

u32 rect_at_10_height(u32 r0) {
    return GridRect__height_2(r0 + 0x10u, guest::cpu()->r[1]);
}

}  // namespace d_00752998
GUEST_EXPORT(0x00752998, d_00752998::rect_at_10_height);

// f_00752bf4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When the task is ready (+0xa8 = 1): reads its 24-bit value into an opaque RGBA colour (alpha 0xff); true when it
// did.
namespace d_00752bf4 {

struct __attribute__((packed)) ReadTaskColorArg0 {
    u8 unknown_0[0xa8];  // (not used here)
    u8 byte_a8;
};
GUEST_OFFSET(ReadTaskColorArg0, byte_a8, 0xa8);

inline constexpr guest::Function<0x00152a10, u32(u32, u32, u32, u32)> Cfl__load;

struct __attribute__((packed)) ReadTaskColorFrame {
    u32 word_0;
    u8 unknown_4[0x40];  // (not read or written by name)
    u32 word_44;
};
GUEST_OFFSET(ReadTaskColorFrame, word_0, 0x0);
GUEST_OFFSET(ReadTaskColorFrame, word_44, 0x44);
GUEST_SIZE(ReadTaskColorFrame, 0x48);

u32 read_task_color(gptr<ReadTaskColorArg0> arg0, u32 r1) {
    guest::StackFrameOf<ReadTaskColorFrame> frame;  // the original's stack frame
    u32 r1_1 = arg0->byte_a8;
    if (r1_1 != 1u) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    frame->word_0 = 0;
    if (Cfl__load(frame.at(4).addr(), 4u, arg0.addr(), 0u) != 0) {
        return 0u;
    }
    u32 r0_3 = frame->word_44;
    *gptr<u8>(r1) = 0xff;
    *gptr<u8>(r1 + 3u) = u8(r0_3);
    u32 r1_3 = r0_3 >> 8;
    *gptr<u8>(r1 + 2u) = u8(r1_3);
    *gptr<u8>(r1 + 1u) = u8(r0_3 >> 0x10);
    guest::cpu()->r[1] = r1_3;
    return 1u;
}

}  // namespace d_00752bf4
GUEST_EXPORT_FRAMED(0x00752bf4, d_00752bf4::read_task_color, 0x4010);  // pushes {r4, lr} first, as the original

// f_007537c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether +0x24 or +0x28 is set.
namespace d_007537c4 {

struct __attribute__((packed)) HasWord24Or28Arg0 {
    u8 unknown_0[0x24];  // (not used here)
    u32 word_24;
    u32 word_28;
};
GUEST_OFFSET(HasWord24Or28Arg0, word_24, 0x24);
GUEST_OFFSET(HasWord24Or28Arg0, word_28, 0x28);


u32 has_word_24_or_28(gptr<HasWord24Or28Arg0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1_1 = arg0->word_24;
    u32 zf_1 = r1_1 == 0;
    if (zf_1) {
        r0 = arg0->word_28;
        zf_1 = r0 == 0;
    }
    if (!zf_1) {
        r0 = 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return r0;
}

}  // namespace d_007537c4
GUEST_EXPORT(0x007537c4, d_007537c4::has_word_24_or_28);

// f_00753c94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The bit of cell (x, z) in a bit map of the town's 112 x 96 cells (after a 4-byte header).
namespace d_00753c94 {


u32 TownBits__test(u32 town_bits, u32 x, u32 z) {
    u32 r1_1 = x + z * 0x70u;
    u32 r2_1 = s32(r1_1) >> 5;
    u32 r1_2 = r1_1 & 0x1fu;
    u32 r0_1 = *gptr<u32>(town_bits + (r2_1 << 2) + 4u) & lsl_r(1u, r1_2 & 0xff);
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    guest::cpu()->r[1] = r1_2;
    return r0_1;
}

}  // namespace d_00753c94
GUEST_EXPORT(0x00753c94, d_00753c94::TownBits__test);

// f_00753cbc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The 64-bit value at +0x20.
namespace d_00753cbc {

struct __attribute__((packed)) Word20And24Arg0 {
    u8 unknown_0[0x20];  // (not used here)
    u32 word_20;
    u32 word_24;
};
GUEST_OFFSET(Word20And24Arg0, word_20, 0x20);
GUEST_OFFSET(Word20And24Arg0, word_24, 0x24);


u32 word_20_and_24(gptr<Word20And24Arg0> arg0) {
    u32 r1_1 = arg0->word_24;
    u32 r0_1 = arg0->word_20;
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_00753cbc
GUEST_EXPORT(0x00753cbc, d_00753cbc::word_20_and_24);

// f_00753ccc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The count (0073663c on +8) divided by 2^shift (+0x64), rounded up.
namespace d_00753ccc {

struct __attribute__((packed)) CountRoundedUpByShiftArg0 {
    u8 unknown_0[0x64];  // (not used here)
    u32 word_64;
};
GUEST_OFFSET(CountRoundedUpByShiftArg0, word_64, 0x64);

inline constexpr guest::Function<0x0073663c, u32(u32, u32)> ResolutionRef__width;

u32 count_rounded_up_by_shift(gptr<CountRoundedUpByShiftArg0> arg0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r1 = 0;
    if (arg0->word_64 == 0) {
        frame.release();
        return ResolutionRef__width(arg0.addr() + 8u, r1);
    }
    u32 r0_2 = ResolutionRef__width(arg0.addr() + 8u, r1);
    u32 r0_3 = arg0->word_64;
    return lsr_r(r0_2 + lsl_r(1u, r0_3 & 0xff) - 1u, r0_3 & 0xff);
}

}  // namespace d_00753ccc
GUEST_EXPORT(0x00753ccc, d_00753ccc::count_rounded_up_by_shift);

// f_00753d0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The count for `index` (0073666c on +8) divided by 2^shift (+0x64), rounded up.
namespace d_00753d0c {

struct __attribute__((packed)) CountOfRoundedUpByShiftArg0 {
    u8 unknown_0[0x64];  // (not used here)
    u32 word_64;
};
GUEST_OFFSET(CountOfRoundedUpByShiftArg0, word_64, 0x64);

inline constexpr guest::Function<0x0073666c, u32(u32, u32)> ResolutionRef__height;

u32 count_of_rounded_up_by_shift(gptr<CountOfRoundedUpByShiftArg0> arg0, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    if (arg0->word_64 == 0) {
        frame.release();
        return ResolutionRef__height(arg0.addr() + 8u, r1);
    }
    u32 r0_2 = ResolutionRef__height(arg0.addr() + 8u, r1);
    u32 r0_3 = arg0->word_64;
    u32 r1_1 = r0_2 + lsl_r(1u, r0_3 & 0xff) - 1u;
    guest::cpu()->r[1] = r1_1;
    return lsr_r(r1_1, r0_3 & 0xff);
}

}  // namespace d_00753d0c
GUEST_EXPORT(0x00753d0c, d_00753d0c::count_of_rounded_up_by_shift);

// f_00754080: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Bits 7-11 of +0x30.
namespace d_00754080 {

struct __attribute__((packed)) Bits7To11Of30Arg0 {
    u8 unknown_0[0x30];  // (not used here)
    u32 word_30;
};
GUEST_OFFSET(Bits7To11Of30Arg0, word_30, 0x30);


u32 bits_7_to_11_of_30(gptr<Bits7To11Of30Arg0> arg0) {
    return (arg0->word_30 & 0xf80u) >> 7;
}

}  // namespace d_00754080
GUEST_EXPORT(0x00754080, d_00754080::bits_7_to_11_of_30);

// f_00754090: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Bits 12-19 of +0x30.
namespace d_00754090 {

struct __attribute__((packed)) Bits12To19Of30Arg0 {
    u8 unknown_0[0x30];  // (not used here)
    u32 word_30;
};
GUEST_OFFSET(Bits12To19Of30Arg0, word_30, 0x30);


u32 bits_12_to_19_of_30(gptr<Bits12To19Of30Arg0> arg0) {
    return arg0->word_30 >> 0xcu & 0xffu;
}

}  // namespace d_00754090
GUEST_EXPORT(0x00754090, d_00754090::bits_12_to_19_of_30);

// f_00754100: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// For entry `index` (0x48 bytes from +8): calls 00754988 when its field is set.
namespace d_00754100 {

inline constexpr guest::Function<0x00754978, u32(u32, u32, u32, u32)> field_nonzero_754978;
inline constexpr guest::Function<0x00754988, u32(u32, u32, u32, u32)> PhotoView__update;

u32 entry_72_call_754988(u32 r0, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r1_1 = r1 * 9u;
    u32 r4_1 = r0 + (r1_1 << 3);
    u32 r0_2 = field_nonzero_754978(r4_1 + 8u, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_2 == 0) {
        return r0_2;
    }
    frame.release();
    return PhotoView__update(r4_1 + 8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00754100
GUEST_EXPORT(0x00754100, d_00754100::entry_72_call_754988);

// f_0075412c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Inserts an 8-byte value at the position found by 007541e8, growing the vector when needed and moving the rest up.
namespace d_0075412c {

struct __attribute__((packed)) Vector8InsertArg1 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u8 unknown_c[0x4];  // (not used here)
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Vector8InsertArg1, word_8, 0x8);
GUEST_OFFSET(Vector8InsertArg1, word_10, 0x10);
GUEST_OFFSET(Vector8InsertArg1, word_14, 0x14);

struct __attribute__((packed)) Local_0075412c_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0075412c_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0075412c_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_0075412c_ea_5 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0075412c_ea_5, word_0, 0x0);
GUEST_OFFSET(Local_0075412c_ea_5, word_4, 0x4);

struct __attribute__((packed)) Local_0075412c_r2_2 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_0075412c_r2_2, float_0, 0x0);
GUEST_OFFSET(Local_0075412c_r2_2, float_4, 0x4);

struct __attribute__((packed)) Local_0075412c_r3_3 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_0075412c_r3_3, float_0, 0x0);
GUEST_OFFSET(Local_0075412c_r3_3, float_4, 0x4);

inline constexpr guest::Function<0x00142450, u32(u32, u32, u32, u32)> ByteBuffer__reserve;
inline constexpr guest::Function<0x007541e8, u32(u32, u32, u32, u32)> PhotoList__find_free;

void Vector8__insert(u32 vector8, gptr<Vector8InsertArg1> arg1, u32 r2, u32 r3, float S0, float S1) {
    u32 r1 = arg1.addr();
    u32 r4 = r1;
    u32 r6 = r2;
    u32 free = PhotoList__find_free(vector8, r1, r2, r3);
    float S0_1 = guest::cpu()->s[0];
    float S1_1 = guest::cpu()->s[1];
    u32 r0_2 = arg1->word_10;
    u32 r3_1 = arg1->word_8;
    u32 r0_3 = arg1->word_14 - r0_2;
    u32 r5 = s32(r0_2 + (free << 3) - r0_2) >> 3;
    if (u32(s32(r0_3) >> 3) + 1u > r3_1) {
        ByteBuffer__reserve(r4, u32(s32(r0_3) >> 3) + 1u, 1u, r3_1);
        S0_1 = guest::cpu()->s[0];
        S1_1 = guest::cpu()->s[1];
    }
    r1 = u32(s32(*gptr<u32>(r4 + 0x14u) - *gptr<u32>(r4 + 0x10u)) >> 3) - r5;
    vector8 = 0u;
    if (r1 >= 0u && r1 != 0) {
        u32 r12 = ~7u;
        do {
            gptr<Local_0075412c_ea_1> ea_1 = gptr<Local_0075412c_ea_1>(r4 + 0x10u);
            u32 r2_1 = ea_1->word_0;
            u32 r3_2 = u32(s32(ea_1->word_4 - r2_1) >> 3) - vector8;
            vector8 += 1u;
            gptr<Local_0075412c_r3_3> r3_3 = gptr<Local_0075412c_r3_3>(r2_1 + (r3_2 << 3));
            gptr<Local_0075412c_r2_2> r2_2 = gptr<Local_0075412c_r2_2>(r2_1 + (r12 + (r3_2 << 3)));
            S0_1 = r2_2->float_0;
            S1_1 = r2_2->float_4;
            r3_3->float_0 = S0_1;
            r3_3->float_4 = S1_1;
            guest::preempt();
        } while (r1 > vector8);
    }
    *gptr<u32>(r4 + 0x14u) = *gptr<u32>(r4 + 0x14u) + 8u;
    u32 r0_5 = *gptr<u32>(r4 + 0x10u);
    u32 r1_3 = *gptr<u32>(r6);
    u32 r2_3 = *gptr<u32>(r6 + 4);
    gptr<Local_0075412c_ea_5> ea_5 = gptr<Local_0075412c_ea_5>(r0_5 + (r5 << 3));
    ea_5->word_0 = r1_3;
    ea_5->word_4 = r2_3;
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_0075412c
GUEST_EXPORT_FRAMED(0x0075412c, d_0075412c::Vector8__insert, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_007544a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the photo's folder name (8 characters) has the current date digits (0x98167c) and a valid number; gives the
// number when asked.
namespace d_007544a4 {

struct __attribute__((packed)) Local_007544a4_r0_4 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Local_007544a4_r0_4, byte_0, 0x0);
GUEST_OFFSET(Local_007544a4_r0_4, byte_1, 0x1);
GUEST_OFFSET(Local_007544a4_r0_4, byte_2, 0x2);

inline constexpr u32 photo_current_folder_address = 0x0098167cu;
inline guest::global<u32, 0x0098167c> photo_current_folder;
inline constexpr guest::Function<0x00100835, u32(u32)> string16_length;
inline constexpr guest::Function<0x005af748, u32(u32, u32, u32)> parse_decimal_wide;
inline constexpr guest::Function<0x00755504, u32(u32, u32)> PhotoPath__folder_name_wide;

struct __attribute__((packed)) PhotoPathFolderIsCurrentFrame {
    u8 unknown_0[0x6];  // (not read or written by name)
    u16 half_6;
    u16 half_8;
    u16 half_a;
    u8 unknown_c[0x8];  // (not read or written by name)
    u32 word_14;
};
GUEST_OFFSET(PhotoPathFolderIsCurrentFrame, half_6, 0x6);
GUEST_OFFSET(PhotoPathFolderIsCurrentFrame, half_8, 0x8);
GUEST_OFFSET(PhotoPathFolderIsCurrentFrame, half_a, 0xa);
GUEST_OFFSET(PhotoPathFolderIsCurrentFrame, word_14, 0x14);
GUEST_SIZE(PhotoPathFolderIsCurrentFrame, 0x18);

u32 PhotoPath__folder_is_current(u32 photo_path, u32 r1) {
    guest::StackFrameOf<PhotoPathFolderIsCurrentFrame> frame;  // the original's stack frame
    PhotoPath__folder_name_wide(photo_path + 0x10u, frame.at(0).addr());
    if (string16_length(frame.at(0).addr()) != 8u) {
        return 0u;
    }
    u32 r1_4 = frame->half_6;
    gptr<Local_007544a4_r0_4> r0_4 = gptr<Local_007544a4_r0_4>(*photo_current_folder);
    if (u32(s8(r0_4->byte_0)) != r1_4) {
        guest::cpu()->r[1] = r1_4;
        return 0u;
    }
    u32 r1_5 = s8(r0_4->byte_1);
    if (r1_5 != frame->half_8) {
        guest::cpu()->r[1] = r1_5;
        return 0u;
    }
    u32 r1_6 = frame->half_a;
    if (u32(s8(r0_4->byte_2)) != r1_6) {
        guest::cpu()->r[1] = r1_6;
        return 0u;
    }
    u32 r0_6 = parse_decimal_wide(frame.at(0x14).addr(), frame.at(0xc).addr(), 2u);
    if (r0_6 == 0) {
        return r0_6;
    }
    if (r1 != 0) {
        *gptr<u32>(r1) = frame->word_14;
    }
    return 1u;
}

}  // namespace d_007544a4
GUEST_EXPORT_FRAMED(0x007544a4, d_007544a4::PhotoPath__folder_is_current, 0x4010);  // pushes {r4, lr} first, as the original

// f_0075454c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Finds the photo file by its folder and file names.
namespace d_0075454c {

inline constexpr guest::Function<0x0010184d, u32(u32, u32, u32, u32)> compare_wide_strings;
inline constexpr guest::Function<0x00755330, u32(u32, u32, u32)> PhotoPath__file_name_wide;
inline constexpr guest::Function<0x00755504, u32(u32, u32, u32, u32)> PhotoPath__folder_name_wide;

u32 PhotoPath__find_file(u32 photo_path, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x54);  // the original's stack frame
    u32 r4 = photo_path;
    PhotoPath__folder_name_wide(r1, frame.at(0).addr(), 9u, r3);
    PhotoPath__file_name_wide(r1, frame.at(0x14).addr(), 9u);
    u32 r5 = ~0u;
    u32 r7 = 1u;
    u32 r6 = 0u;
L_75458c:;
    r1 = 6u;
L_754590:;
    r5 += 1u;
    u32 nf_1 = r5 >> 0x1f;
    u32 zf_1 = r5 == 0;
    u32 vf_1 = (r5 & (r5 ^ r5)) >> 0x1f;
    if (nf_1 == vf_1) {
        u32 r0_1 = *gptr<u32>(r4 + 0x10u);
        u32 res_1 = r0_1 - r5;
        nf_1 = res_1 >> 0x1f;
        zf_1 = res_1 == 0;
        vf_1 = ((r0_1 ^ r5) & (r0_1 ^ res_1)) >> 0x1f;
    }
    if (!zf_1 && nf_1 == vf_1) {
        if ((r1 & (r7 << (*gptr<u32>(*gptr<u32>(r4 + 0xcu) + (r5 + (r5 << 3) << 2) + 0x1cu) & 7u))) == 0) {
            guest::preempt();
            goto L_754590;
        }
        if (s32(r5) >= 0) {
            u32 r8 = frame.at(0x28).addr();
            u32 r12 = *gptr<u32>(r4 + 0xcu) + r5 * 0x24u;
            r3 = 8u;
            u32 r2 = r12 + 0x14u;
            photo_path = 0u;
L_7545e4:;
            u32 r1_3 = *gptr<s8>(r2 + photo_path);
            if (r1_3 != 0) {
                if (r1_3 - 0x61u <= 0x19u) {
                    r1_3 -= 0x20u;
                }
                u32 r9_1 = r8 + (photo_path << 1);
                photo_path += 1u;
                *gptr<u16>(r9_1) = u16(sxtb(r1_3));
                if (s32(photo_path) < s32(r3)) {
                    guest::preempt();
                    goto L_7545e4;
                }
            }
            r2 = frame.at(0x3c).addr();
            *gptr<u16>(r8 + (photo_path << 1)) = u16(r6);
            r3 = 8u;
            r12 += 0xcu;
            photo_path = 0u;
L_75462c:;
            u32 r1_4 = *gptr<s8>(r12 + photo_path);
            if (r1_4 != 0) {
                if (r1_4 - 0x61u <= 0x19u) {
                    r1_4 -= 0x20u;
                }
                u32 r8_1 = r2 + (photo_path << 1);
                photo_path += 1u;
                *gptr<u16>(r8_1) = u16(sxtb(r1_4));
                if (s32(photo_path) < s32(r3)) {
                    guest::preempt();
                    goto L_75462c;
                }
            }
            *gptr<u16>(r2 + (photo_path << 1)) = u16(r6);
            if (compare_wide_strings(frame.at(0).addr(), frame.at(0x28).addr(), r2, r3) == 0) {
                u32 r0_5 = frame.at(0x14).addr();
                if (compare_wide_strings(r0_5, frame.at(0x3c).addr(), guest::cpu()->r[2], guest::cpu()->r[3]) == 0) {
                    return r5;
                }
            }
            if (s32(r5) >= 0) {
                guest::preempt();
                goto L_75458c;
            }
        }
    }
    return ~0u;
}

}  // namespace d_0075454c
GUEST_EXPORT_FRAMED(0x0075454c, d_0075454c::PhotoPath__find_file, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_007546b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The number of whole days (86,400 seconds) in the 64-bit second count (rounded toward minus infinity for a negative
// one).
namespace d_007546b4 {

struct __attribute__((packed)) Seconds {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Seconds, word_0, 0x0);
GUEST_OFFSET(Seconds, word_4, 0x4);

inline constexpr guest::Function<0x0012e640, u32(u32, u32, u32, u32)> int64_divide;

u32 seconds_to_days(gptr<Seconds> seconds) {
    u32 r1_1 = seconds->word_4;
    u32 r0_1 = seconds->word_0;
    if (s32(r1_1) >= 0) {
        return int64_divide(r0_1, r1_1, 0x15180u, 0u);
    }
    u32 cf_1 = r0_1 + 0xfffeae81u < r0_1;
    u32 r1_2 = u64(r1_1) + ~0u + cf_1;
    return int64_divide(r0_1 + 0xfffeae81u, r1_2, 0x15180u, 0u);
}

}  // namespace d_007546b4
GUEST_EXPORT(0x007546b4, d_007546b4::seconds_to_days);

// f_00754830: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Converts the date fields read by 007546f0 into a count.
namespace d_00754830 {

struct __attribute__((packed)) Local_00754830_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00754830_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00754830_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_00754830_ea_1, word_8, 0x8);

struct __attribute__((packed)) Local_00754830_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00754830_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_00754830_ea_3, word_4, 0x4);
GUEST_OFFSET(Local_00754830_ea_3, word_8, 0x8);

struct __attribute__((packed)) Local_00754830_ea_4 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00754830_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_00754830_ea_4, word_4, 0x4);
GUEST_OFFSET(Local_00754830_ea_4, word_8, 0x8);

inline constexpr guest::Function<0x00129698, u32(u32, u32, u32, u32)> fields_to_count;
inline constexpr guest::Function<0x007546f0, u32(u32, u32, u32, u32)> Time__split_days_seconds;

struct __attribute__((packed)) DateFieldsToCountFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0x18];  // (not read or written by name)
};
GUEST_OFFSET(DateFieldsToCountFrame, word_0, 0x0);
GUEST_OFFSET(DateFieldsToCountFrame, word_4, 0x4);
GUEST_OFFSET(DateFieldsToCountFrame, word_8, 0x8);
GUEST_OFFSET(DateFieldsToCountFrame, word_c, 0xc);
GUEST_SIZE(DateFieldsToCountFrame, 0x28);

void date_fields_to_count(u32 r0, u32 r1) {
    guest::StackFrameOf<DateFieldsToCountFrame> frame;  // the original's stack frame
    frame->word_0 = frame.at(0x1c).addr();
    frame->word_4 = frame.at(0x20).addr();
    frame->word_8 = frame.at(0x24).addr();
    Time__split_days_seconds(r1, frame.at(0x10).addr(), frame.at(0x14).addr(), frame.at(0x18).addr());
    gptr<Local_00754830_ea_1> ea_1 = gptr<Local_00754830_ea_1>(frame.at(0x1c).addr());
    u32 r1_2 = ea_1->word_0;
    u32 r2_2 = ea_1->word_4;
    u32 r3_2 = ea_1->word_8;
    frame->word_c = 0;
    gptr<Local_00754830_ea_3> ea_3 = gptr<Local_00754830_ea_3>(frame.at(0).addr());
    ea_3->word_0 = r1_2;
    ea_3->word_4 = r2_2;
    ea_3->word_8 = r3_2;
    gptr<Local_00754830_ea_4> ea_4 = gptr<Local_00754830_ea_4>(frame.at(0x10).addr());
    fields_to_count(r0, ea_4->word_0, ea_4->word_4, ea_4->word_8);
}

}  // namespace d_00754830
GUEST_EXPORT_FRAMED(0x00754830, d_00754830::date_fields_to_count, 0x4010);  // pushes {r4, lr} first, as the original

// f_00754890: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Writes the time as an EXIF date and time (year:month:day hour:minute:second) into `out`.
namespace d_00754890 {

struct __attribute__((packed)) Local_00754890_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00754890_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00754890_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_00754890_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_00754890_ea_1, word_c, 0xc);

struct __attribute__((packed)) Local_00754890_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00754890_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_00754890_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_00754890_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_00754890_ea_2, word_c, 0xc);

struct __attribute__((packed)) Local_00754890_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00754890_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_00754890_ea_3, word_4, 0x4);

inline constexpr guest::Function<0x00100ef9, u32(u32, u32, u32, u32)> sprintf;
inline constexpr guest::Function<0x007546f0, u32(u32, u32, u32, u32)> Time__split_days_seconds;

struct __attribute__((packed)) FormatExifDateTimeFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x1c];  // (not read or written by name)
};
GUEST_OFFSET(FormatExifDateTimeFrame, word_0, 0x0);
GUEST_OFFSET(FormatExifDateTimeFrame, word_4, 0x4);
GUEST_OFFSET(FormatExifDateTimeFrame, word_8, 0x8);
GUEST_SIZE(FormatExifDateTimeFrame, 0x28);

void format_exif_date_time(u32 time, u32 out) {
    guest::StackFrameOf<FormatExifDateTimeFrame> frame;  // the original's stack frame
    frame->word_0 = frame.at(0x1c).addr();
    frame->word_4 = frame.at(0x20).addr();
    frame->word_8 = frame.at(0x24).addr();
    Time__split_days_seconds(time, frame.at(0x10).addr(), frame.at(0x14).addr(), frame.at(0x18).addr());
    gptr<Local_00754890_ea_1> ea_1 = gptr<Local_00754890_ea_1>(frame.at(0x18).addr());
    u32 r0_1 = ea_1->word_0;
    u32 r1_2 = ea_1->word_4;
    u32 r2_2 = ea_1->word_8;
    u32 r3_2 = ea_1->word_c;
    gptr<Local_00754890_ea_2> ea_2 = gptr<Local_00754890_ea_2>(frame.at(0).addr());
    ea_2->word_0 = r0_1;
    ea_2->word_4 = r1_2;
    ea_2->word_8 = r2_2;
    ea_2->word_c = r3_2;
    gptr<Local_00754890_ea_3> ea_3 = gptr<Local_00754890_ea_3>(frame.at(0x10).addr());
    sprintf(out, 0x7548e8u, ea_3->word_0, ea_3->word_4);
}

}  // namespace d_00754890
GUEST_EXPORT_FRAMED(0x00754890, d_00754890::format_exif_date_time, 0x4010);  // pushes {r4, lr} first, as the original

// f_00754908: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the 64-bit time is before the earliest time (005a8c34) or after the latest (005a8b9c).
namespace d_00754908 {

struct __attribute__((packed)) Stamp {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Stamp, word_0, 0x0);
GUEST_OFFSET(Stamp, word_4, 0x4);

inline constexpr guest::Function<0x005a8b9c, u32(u32)> PhotoFolder__last;
inline constexpr guest::Function<0x005a8c34, u32(u32, u32, u32, u32)> PhotoFolder__first;

struct __attribute__((packed)) StampIsOutOfRangeFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(StampIsOutOfRangeFrame, word_0, 0x0);
GUEST_OFFSET(StampIsOutOfRangeFrame, word_4, 0x4);
GUEST_OFFSET(StampIsOutOfRangeFrame, word_8, 0x8);
GUEST_OFFSET(StampIsOutOfRangeFrame, word_c, 0xc);
GUEST_SIZE(StampIsOutOfRangeFrame, 0x10);

u32 Stamp__is_out_of_range(gptr<Stamp> stamp, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<StampIsOutOfRangeFrame> frame;  // the original's stack frame
    PhotoFolder__first(frame.at(0).addr(), r1, r2, r3);
    u32 r2_1 = stamp->word_0;
    u32 r3_1 = stamp->word_4;
    u32 r1_1 = frame->word_0;
    u32 r0_2 = frame->word_4;
    u32 cf_1 = r2_1 >= r1_1;
    u32 res_1 = u64(r3_1) + ~r0_2 + cf_1;
    if (res_1 >> 0x1f != ((r3_1 ^ r0_2) & (r3_1 ^ res_1)) >> 0x1f) {
        guest::cpu()->r[1] = r2_1 - r1_1;
        return 1u;
    }
    PhotoFolder__last(frame.at(8).addr());
    u32 r2_2 = stamp->word_0;
    u32 r3_2 = stamp->word_4;
    u32 r1_3 = frame->word_8;
    u32 r0_4 = frame->word_c;
    u32 cf_2 = r1_3 >= r2_2;
    u32 r1_4 = r1_3 - r2_2;
    u32 res_2 = u64(r0_4) + ~r3_2 + cf_2;
    if (res_2 >> 0x1f == ((r0_4 ^ r3_2) & (r0_4 ^ res_2)) >> 0x1f) {
        guest::cpu()->r[1] = r1_4;
        return 0u;
    }
    guest::cpu()->r[1] = r1_4;
    return 1u;
}

}  // namespace d_00754908
GUEST_EXPORT_FRAMED(0x00754908, d_00754908::Stamp__is_out_of_range, 0x4010);  // pushes {r4, lr} first, as the original

// f_00754964: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether bit 4 of the 16-bit flags (+0x14) of the entry (+0xc) is set.
namespace d_00754964 {

struct __attribute__((packed)) EntryFlag10Arg0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(EntryFlag10Arg0, word_c, 0xc);


u32 entry_flag_10(gptr<EntryFlag10Arg0> arg0) {
    u32 r0_1 = u32(*gptr<u16>(arg0->word_c + 0x14u)) & 0x10u;
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    return r0_1;
}

}  // namespace d_00754964
GUEST_EXPORT(0x00754964, d_00754964::entry_flag_10);

// f_00754a3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The address of 12-byte entry `index` of the table at +0xc.
namespace d_00754a3c {

struct __attribute__((packed)) Entry12At2Arg0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Entry12At2Arg0, word_c, 0xc);


u32 entry_12_at_2(gptr<Entry12At2Arg0> arg0, u32 r1) {
    u32 r1_1 = r1 * 3u;
    u32 r0_1 = arg0->word_c + (r1_1 << 2);
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_00754a3c
GUEST_EXPORT(0x00754a3c, d_00754a3c::entry_12_at_2);

// f_00754b40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Bits 2-4 of +4.
namespace d_00754b40 {

struct __attribute__((packed)) Bits2To4OfWord4Arg0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Bits2To4OfWord4Arg0, word_4, 0x4);


u32 bits_2_to_4_of_word_4(gptr<Bits2To4OfWord4Arg0> arg0) {
    return (arg0->word_4 & 0x1cu) >> 2;
}

}  // namespace d_00754b40
GUEST_EXPORT(0x00754b40, d_00754b40::bits_2_to_4_of_word_4);

// f_00754b50: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Bits 0-1 of +4.
namespace d_00754b50 {

struct __attribute__((packed)) Bits0To1OfWord4Arg0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Bits0To1OfWord4Arg0, word_4, 0x4);


u32 bits_0_to_1_of_word_4(gptr<Bits0To1OfWord4Arg0> arg0) {
    return arg0->word_4 & 3u;
}

}  // namespace d_00754b50
GUEST_EXPORT(0x00754b50, d_00754b50::bits_0_to_1_of_word_4);

// f_00754b5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Bits 18-31 of +0.
namespace d_00754b5c {

struct __attribute__((packed)) Bits18UpOfWord0Arg0 {
    u32 word_0;
};
GUEST_OFFSET(Bits18UpOfWord0Arg0, word_0, 0x0);


u32 bits_18_up_of_word_0(gptr<Bits18UpOfWord0Arg0> arg0) {
    return arg0->word_0 >> 0x12;
}

}  // namespace d_00754b5c
GUEST_EXPORT(0x00754b5c, d_00754b5c::bits_18_up_of_word_0);

// f_00754b68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Bits 0-17 of +0, sign-extended.
namespace d_00754b68 {

struct __attribute__((packed)) SignedBits0To17OfWord0Arg0 {
    u32 word_0;
};
GUEST_OFFSET(SignedBits0To17OfWord0Arg0, word_0, 0x0);


u32 signed_bits_0_to_17_of_word_0(gptr<SignedBits0To17OfWord0Arg0> arg0) {
    return s32(arg0->word_0 << 0xe) >> 0xe;
}

}  // namespace d_00754b68
GUEST_EXPORT(0x00754b68, d_00754b68::signed_bits_0_to_17_of_word_0);

// f_00754b78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Reads the 20-byte date record of a file and converts it to a 64-bit time; true when it could.
namespace d_00754b78 {

struct __attribute__((packed)) ReadFileDateArg0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(ReadFileDateArg0, word_4, 0x4);

struct __attribute__((packed)) Local_00754b78_ea_1 {
    u32 word_0;
    u32 second;
};
GUEST_OFFSET(Local_00754b78_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00754b78_ea_1, second, 0x4);

inline constexpr guest::Function<0x00472b38, u32(u32, u32, u32, u32)> ResolutionRef__get;
inline constexpr guest::Function<0x005a8ea0, u32(u32, u32)> Stamp__parse_exif_date;
inline constexpr guest::Function<0x00754830, u32(u32, u32)> date_fields_to_count;

u32 read_file_date(gptr<ReadFileDateArg0> arg0, gptr<WordPair> word_pair) {
    guest::StackFrame frame(0x28);  // the original's stack frame
    if (ResolutionRef__get(arg0->word_4, frame.at(0).addr(), guest::cpu()->r[2], guest::cpu()->r[3]) != 0x14u) {
        return 0u;
    }
    u32 r0_4 = Stamp__parse_exif_date(frame.at(0x20).addr(), frame.at(0).addr());
    if (r0_4 == 0) {
        return r0_4;
    }
    date_fields_to_count(frame.at(0x18).addr(), frame.at(0x20).addr());
    gptr<Local_00754b78_ea_1> ea_1 = gptr<Local_00754b78_ea_1>(frame.at(0x18).addr());
    u32 second = ea_1->second;
    word_pair->first = ea_1->word_0;
    word_pair->second = second;
    guest::cpu()->r[1] = second;
    return 1u;
}

}  // namespace d_00754b78
GUEST_EXPORT_FRAMED(0x00754b78, d_00754b78::read_file_date, 0x4010);  // pushes {r4, lr} first, as the original

// f_00754bd0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the file's first part (at most 0x40 bytes) into `header`; true when it starts with the 3DS1 magic.
namespace d_00754bd0 {

struct __attribute__((packed)) File {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(File, word_4, 0x4);

struct __attribute__((packed)) Header {
    u32 word_0;
};
GUEST_OFFSET(Header, word_0, 0x0);

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32)> copy_bytes_at_any_alignment;
inline constexpr guest::Function<0x00736694, u32(u32, u32)> ResolutionRef__value;
inline constexpr guest::Function<0x00736728, u32(u32, u32, u32, u32)> ResolutionRef__read;

u32 read_3ds1_header(gptr<File> file, gptr<Header> header, u32 r2) {
    u32 r0_7 = 0;
    u32 r0_2 = ResolutionRef__read(file->word_4, 1u, r2, guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        u32 r0_4 = ResolutionRef__value(file->word_4, 1u);
        r1_1 = guest::cpu()->r[1];
        if (r0_4 <= 0x40u) {
            copy_bytes_at_any_alignment(header.addr(), ResolutionRef__read(file->word_4, 1u, guest::cpu()->r[2], guest::cpu()->r[3]), 0x40u);
            r1_1 = 0x31534433u;
            r0_7 = header->word_0 == r1_1;
        } else {
            r0_7 = 0u;
        }
    } else {
        r0_7 = 0u;
    }
    guest::cpu()->r[1] = r1_1;
    return r0_7;
}

}  // namespace d_00754bd0
GUEST_EXPORT_FRAMED(0x00754bd0, d_00754bd0::read_3ds1_header, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00754c40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the file has a valid 3DS1 header and passes the check at 00736728.
namespace d_00754c40 {

struct __attribute__((packed)) File {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(File, word_4, 0x4);

inline constexpr guest::Function<0x00736728, u32(u32, u32)> ResolutionRef__read;
inline constexpr guest::Function<0x00754bd0, u32(u32, u32, u32, u32)> read_3ds1_header;

u32 check_3ds1_file(gptr<File> file) {
    guest::StackFrame frame(0x40);  // the original's stack frame
    u32 r0_1 = read_3ds1_header(file.addr(), frame.at(0).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 == 0) {
        return r0_1;
    }
    return ResolutionRef__read(file->word_4, 1u);
}

}  // namespace d_00754c40
GUEST_EXPORT_FRAMED(0x00754c40, d_00754c40::check_3ds1_file, 0x4010);  // pushes {r4, lr} first, as the original

// f_00754c70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Byte +0xa, or 2 when above 1.
namespace d_00754c70 {

struct __attribute__((packed)) KindAClampedTo2Arg0 {
    u8 unknown_0[0xa];  // (not used here)
    u8 byte_a;
};
GUEST_OFFSET(KindAClampedTo2Arg0, byte_a, 0xa);


u32 kind_a_clamped_to_2(gptr<KindAClampedTo2Arg0> arg0) {
    u32 r0_1 = arg0->byte_a;
    if (r0_1 == 0 || r0_1 == 1u) {
        return r0_1;
    } else {
    }
    return 2u;
}

}  // namespace d_00754c70
GUEST_EXPORT(0x00754c70, d_00754c70::kind_a_clamped_to_2);

// f_00754c88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Unpacks a 10-bit id (bits 1-10, below 0x384) and a 7-bit value (bits 11-17) of +0xc.
namespace d_00754c88 {

struct __attribute__((packed)) Entry {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Entry, word_c, 0xc);

inline constexpr guest::Function<0x005b060c, u32(u32, u32)> store_half_at_2_up_to_270e;
inline constexpr guest::Function<0x005b0640, u32(u32, u32)> store_half_below_384;

struct __attribute__((packed)) UnpackItemIdAndCountFrame {
    u32 word_0;
};
GUEST_OFFSET(UnpackItemIdAndCountFrame, word_0, 0x0);
GUEST_SIZE(UnpackItemIdAndCountFrame, 0x4);

u32 unpack_item_id_and_count(gptr<Entry> entry_3, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<UnpackItemIdAndCountFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    store_half_below_384(frame.at(0).addr(), entry_3->word_c >> 1u & 0x3ffu);
    store_half_at_2_up_to_270e(frame.at(0).addr(), entry_3->word_c >> 0xbu & 0x7fu);
    return frame->word_0;
}

}  // namespace d_00754c88
GUEST_EXPORT_FRAMED(0x00754c88, d_00754c88::unpack_item_id_and_count, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00754cc0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether bit `index` of +0xf is set.
namespace d_00754cc0 {

struct __attribute__((packed)) FlagBitOfByteFArg0 {
    u8 unknown_0[0xf];  // (not used here)
    u8 byte_f;
};
GUEST_OFFSET(FlagBitOfByteFArg0, byte_f, 0xf);


u32 flag_bit_of_byte_f(gptr<FlagBitOfByteFArg0> arg0, u32 r1) {
    u32 r0_1 = u32(arg0->byte_f) & lsl_r(1u, r1 & 0xff);
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    return r0_1;
}

}  // namespace d_00754cc0
GUEST_EXPORT(0x00754cc0, d_00754cc0::flag_bit_of_byte_f);

// f_00754cd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Word `index` of the table at +0x10.
namespace d_00754cd4 {


u32 word_10_at(u32 r0, u32 r1) {
    return *gptr<u32>(r0 + (r1 << 2) + 0x10u);
}

}  // namespace d_00754cd4
GUEST_EXPORT(0x00754cd4, d_00754cd4::word_10_at);

// f_00754ce0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Byte +0xe, or 2 when above 1.
namespace d_00754ce0 {

struct __attribute__((packed)) KindEClampedTo2Arg0 {
    u8 unknown_0[0xe];  // (not used here)
    u8 byte_e;
};
GUEST_OFFSET(KindEClampedTo2Arg0, byte_e, 0xe);


u32 kind_e_clamped_to_2(gptr<KindEClampedTo2Arg0> arg0) {
    u32 r0_1 = arg0->byte_e;
    if (r0_1 == 0 || r0_1 == 1u) {
        return r0_1;
    } else {
    }
    return 2u;
}

}  // namespace d_00754ce0
GUEST_EXPORT(0x00754ce0, d_00754ce0::kind_e_clamped_to_2);

// f_00754cf8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The index after `start` of the first entry (0x24 bytes from +4) whose kind (+0x1c & 7) is in the mask 1 << `bit`, or
// -1.
namespace d_00754cf8 {


u32 next_entry_with_kind_bit(u32 r0, u32 r1, u32 r2) {
    u32 r3 = r0;
    u32 r12 = 1u;
    r1 = lsl_r(r12, r1 & 0xff) & 0xffu;
    r0 = r2 + 1u;
    do {
        u32 nf_1 = r0 >> 0x1f;
        u32 zf_1 = r0 == 0;
        u32 vf_1 = (r0 & (r0 ^ r0)) >> 0x1f;
        if (nf_1 == vf_1) {
            u32 r2_1 = *gptr<u32>(r3 + 8u);
            u32 res_1 = r2_1 - r0;
            nf_1 = res_1 >> 0x1f;
            zf_1 = res_1 == 0;
            vf_1 = ((r2_1 ^ r0) & (r2_1 ^ res_1)) >> 0x1f;
        }
        if (zf_1 || nf_1 != vf_1) {
            guest::cpu()->r[1] = r1;
            return ~0u;
        }
        if ((r1 & (r12 << (*gptr<u32>(*gptr<u32>(r3 + 4u) + (r0 + (r0 << 3) << 2) + 0x1cu) & 7u))) != 0) {
            guest::cpu()->r[1] = r1;
            return r0;
        }
        r0 += 1u;
        guest::preempt();
    } while (1);
}

}  // namespace d_00754cf8
GUEST_EXPORT_FRAMED(0x00754cf8, d_00754cf8::next_entry_with_kind_bit, 0x10);  // pushes {r4} first, as the original

// f_00754eb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds the photo's path from its folder and file names.
namespace d_00754eb8 {

inline constexpr guest::Function<0x001017e5, u32(u32, u32, u32, u32)> copy_wide_string;
inline constexpr guest::Function<0x005ae51c, u32(u32, u32, u32, u32)> copy_table_wide_string;

void PhotoPath__build(u32 photo_path, u32 r1, u32 r2, u32 r3) {
    u32 r4 = r1;
    u32 r5 = photo_path;
    u32 r0_1 = copy_table_wide_string(r4, r2, r3, *gptr<u32>(guest::cpu()->r[13] + 0x18u));
    copy_wide_string(r4 + (r0_1 << 1), 0x8c14e4u, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r6 = r0_1 + 1u;
    u32 r12 = 8u;
    r1 = r4 + (r6 << 1);
    r3 = r5 + 0x14u;
    photo_path = 0u;
L_754efc:;
    u32 r2_2 = *gptr<s8>(r3 + photo_path);
    if (r2_2 != 0) {
        if (r2_2 - 0x61u <= 0x19u) {
            r2_2 -= 0x20u;
        }
        u32 r7_1 = r1 + (photo_path << 1);
        photo_path += 1u;
        r2_2 = sxtb(r2_2);
        *gptr<u16>(r7_1) = u16(r2_2);
        if (s32(photo_path) < s32(r12)) {
            guest::preempt();
            goto L_754efc;
        }
    }
    u32 r7 = 0u;
    u32 r6_1 = r6 + photo_path;
    *gptr<u16>(r1 + (photo_path << 1)) = u16(r7);
    copy_wide_string(r4 + (r6_1 << 1), 0x8c14e4u, r2_2, r3);
    r3 = r6_1 + 1u;
    r6 = 8u;
    r1 = r4 + (r3 << 1);
    r12 = r5 + 0xcu;
    photo_path = 0u;
L_754f5c:;
    u32 r2_3 = *gptr<s8>(r12 + photo_path);
    if (r2_3 != 0) {
        if (r2_3 - 0x61u <= 0x19u) {
            r2_3 -= 0x20u;
        }
        u32 r8_1 = r1 + (photo_path << 1);
        photo_path += 1u;
        r2_3 = sxtb(r2_3);
        *gptr<u16>(r8_1) = u16(r2_3);
        if (s32(photo_path) < s32(r6)) {
            guest::preempt();
            goto L_754f5c;
        }
    }
    u32 r6_2 = photo_path + r3;
    *gptr<u16>(r1 + (photo_path << 1)) = u16(r7);
    copy_wide_string(r4 + (r6_2 << 1), 0x8c14e8u, r2_3, r3);
    r3 = r5 + 8u;
    r1 = r4 + (r6_2 + 1u << 1);
    r4 = 4u;
    photo_path = 0u;
L_754fb8:;
    u32 r2_4 = *gptr<s8>(r3 + photo_path);
    if (r2_4 != 0) {
        if (r2_4 - 0x61u <= 0x19u) {
            r2_4 -= 0x20u;
        }
        u32 r5_1 = r1 + (photo_path << 1);
        photo_path += 1u;
        *gptr<u16>(r5_1) = u16(sxtb(r2_4));
        if (s32(photo_path) < s32(r4)) {
            guest::preempt();
            goto L_754fb8;
        }
    }
    *gptr<u16>(r1 + (photo_path << 1)) = u16(r7);
}

}  // namespace d_00754eb8
GUEST_EXPORT_FRAMED(0x00754eb8, d_00754eb8::PhotoPath__build, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00755000: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Writes the photo's full path into `out`: the base, '/', its folder (in capitals), '/', its file name (in capitals)
// and the extension `extension` names.
namespace d_00755000 {

inline constexpr u32 photo_extensions_address = 0x00981698u;
inline constexpr guest::Function<0x001017e5, u32(u32, u32, u32, u32)> copy_wide_string;
inline constexpr guest::Function<0x005ae51c, u32(u32, u32, u32, u32)> copy_table_wide_string;

void build_photo_path(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 out = r1;
    u32 path = r0;
    u32 r3_1 = *gptr<u32>(guest::cpu()->r[13] + 0x1cu);
    u32 extension = *gptr<u32>(guest::cpu()->r[13] + 0x18u);
    u32 r0_1 = copy_table_wide_string(out, r2, r3, r3_1);
    copy_wide_string(out + (r0_1 << 1), 0x8c14e4u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r3 = r0_1 + 1u;
    u32 r5 = 8u;
    r1 = out + (r3 << 1);
    u32 r12 = path + 0x14u;
    r0 = 0u;
L_755048:;
    u32 r2_2 = *gptr<s8>(r12 + r0);
    if (r2_2 != 0) {
        if (r2_2 - 0x61u <= 0x19u) {
            r2_2 -= 0x20u;
        }
        u32 r8_1 = r1 + (r0 << 1);
        r0 += 1u;
        r2_2 = sxtb(r2_2);
        *gptr<u16>(r8_1) = u16(r2_2);
        if (s32(r0) < s32(r5)) {
            guest::preempt();
            goto L_755048;
        }
    }
    u32 r8 = 0u;
    u32 r5_1 = r0 + r3;
    *gptr<u16>(r1 + (r0 << 1)) = u16(r8);
    copy_wide_string(out + (r5_1 << 1), 0x8c14e4u, r2_2, r3);
    r3 = r5_1 + 1u;
    r12 = 8u;
    r1 = out + (r3 << 1);
    r5 = path + 0xcu;
    r0 = 0u;
L_7550a8:;
    u32 r2_3 = *gptr<s8>(r5 + r0);
    if (r2_3 != 0) {
        if (r2_3 - 0x61u <= 0x19u) {
            r2_3 -= 0x20u;
        }
        u32 r7_1 = r1 + (r0 << 1);
        r0 += 1u;
        *gptr<u16>(r7_1) = u16(sxtb(r2_3));
        if (s32(r0) < s32(r12)) {
            guest::preempt();
            goto L_7550a8;
        }
    }
    *gptr<u16>(r1 + (r0 << 1)) = u16(r8);
    u32 r7_2 = gptr<u32>(0x8c1474u)[extension];
    copy_wide_string(out + ((r0 + r3) << 1), gptr<u32>(photo_extensions_address)[extension], r2_3, r3);
}

}  // namespace d_00755000
GUEST_EXPORT_FRAMED(0x00755000, d_00755000::build_photo_path, 0x41f0);  // pushes {out, r5, extension, path, r8, lr} first, as the original

// f_00755110: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Halves the photo's size until it fits.
namespace d_00755110 {

struct __attribute__((packed)) PhotoImage {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u8 byte_10;
    u8 unknown_11[0x3];  // (not used here)
    u32 word_14;
    u8 unknown_18[0x4];  // (not used here)
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u32 word_28;
};
GUEST_OFFSET(PhotoImage, word_c, 0xc);
GUEST_OFFSET(PhotoImage, byte_10, 0x10);
GUEST_OFFSET(PhotoImage, word_14, 0x14);
GUEST_OFFSET(PhotoImage, word_1c, 0x1c);
GUEST_OFFSET(PhotoImage, word_20, 0x20);
GUEST_OFFSET(PhotoImage, word_24, 0x24);
GUEST_OFFSET(PhotoImage, word_28, 0x28);

struct __attribute__((packed)) Local_00755110_r2_2 {
    u8 unknown_0[0x14];  // (not used here)
    u16 half_14;
    u16 half_16;
};
GUEST_OFFSET(Local_00755110_r2_2, half_14, 0x14);
GUEST_OFFSET(Local_00755110_r2_2, half_16, 0x16);

inline constexpr guest::Function<0x005aa50c, u32(u32, u32, u32, u32)> halve_size_to_fit;

struct __attribute__((packed)) PhotoImageFitAFrame {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(PhotoImageFitAFrame, word_0, 0x0);
GUEST_OFFSET(PhotoImageFitAFrame, word_4, 0x4);
GUEST_SIZE(PhotoImageFitAFrame, 0x8);

u32 PhotoImage__fit_a(gptr<PhotoImage> photo_image, u32 r1) {
    guest::StackFrameOf<PhotoImageFitAFrame> frame;  // the original's stack frame
    if (photo_image->word_1c == 0 || photo_image->word_20 == 0) {
        return 2u;
    }
    frame->word_0 = photo_image->word_24;
    frame->word_4 = photo_image->word_28;
    u32 r0_2 = halve_size_to_fit(frame.at(0).addr(), frame.at(4).addr(), 0x400u, 0x300u);
    u32 r2_1 = guest::cpu()->r[2];
    u32 r1_2 = frame->word_0;
    u32 nf_1 = r1_2 - 0xa0u >> 0x1f;
    u32 vf_1 = ((r1_2 ^ 0xa0u) & (r1_2 ^ r1_2 - 0xa0u)) >> 0x1f;
    if (nf_1 == vf_1) {
        r2_1 = frame->word_4;
        nf_1 = r2_1 - 0x78u >> 0x1f;
        vf_1 = ((r2_1 ^ 0x78u) & (r2_1 ^ r2_1 - 0x78u)) >> 0x1f;
    }
    if (nf_1 != vf_1) {
        guest::cpu()->r[1] = r1_2;
        return 2u;
    }
    u32 nf_2 = r1_2 - 0x400u >> 0x1f;
    u32 zf_1 = r1_2 - 0x400u == 0;
    u32 vf_2 = ((r1_2 ^ 0x400u) & (r1_2 ^ r1_2 - 0x400u)) >> 0x1f;
    if (zf_1 || nf_2 != vf_2) {
        u32 res_4 = r2_1 - 0x300u;
        nf_2 = res_4 >> 0x1f;
        zf_1 = res_4 == 0;
        vf_2 = ((r2_1 ^ 0x300u) & (r2_1 ^ res_4)) >> 0x1f;
    }
    if (!zf_1 && nf_2 == vf_2 || s32(r0_2) > 2) {
        guest::cpu()->r[1] = r1_2;
        return 2u;
    }
    u32 r0_3 = photo_image->word_24;
    if ((r0_3 & 7u) != 0) {
        guest::cpu()->r[1] = r1_2;
        return 2u;
    }
    u32 r1_3 = photo_image->word_28;
    if ((r1_3 & 7u) != 0) {
        guest::cpu()->r[1] = r1_3;
        return 2u;
    }
    gptr<Local_00755110_r2_2> r2_2 = gptr<Local_00755110_r2_2>(photo_image->word_c);
    if ((u32(r2_2->half_14) & 0x10u) != 0) {
        u32 nf_3 = r0_3 - 0x190u >> 0x1f;
        u32 vf_3 = ((r0_3 ^ 0x190u) & (r0_3 ^ r0_3 - 0x190u)) >> 0x1f;
        if (nf_3 == vf_3) {
            nf_3 = r1_3 - 0xf0u >> 0x1f;
            vf_3 = ((r1_3 ^ 0xf0u) & (r1_3 ^ r1_3 - 0xf0u)) >> 0x1f;
        }
        if (nf_3 != vf_3) {
            guest::cpu()->r[1] = r1_3;
            return 2u;
        }
        u32 nf_4 = r0_3 - 0x400u >> 0x1f;
        u32 zf_2 = r0_3 - 0x400u == 0;
        u32 vf_4 = ((r0_3 ^ 0x400u) & (r0_3 ^ r0_3 - 0x400u)) >> 0x1f;
        if (zf_2 || nf_4 != vf_4) {
            nf_4 = r1_3 - 0x300u >> 0x1f;
            zf_2 = r1_3 - 0x300u == 0;
            vf_4 = ((r1_3 ^ 0x300u) & (r1_3 ^ r1_3 - 0x300u)) >> 0x1f;
        }
        if (!zf_2 && nf_4 == vf_4) {
            guest::cpu()->r[1] = r1_3;
            return 2u;
        }
    }
    u32 r0_4 = photo_image->word_14;
    if (s32(r0_4) < 1 || s32(r0_4) > 0x64) {
        guest::cpu()->r[1] = r1_3;
        return 2u;
    }
    if ((u32(r2_2->half_16) & 1u) != 0 && photo_image->byte_10 != 0) {
        guest::cpu()->r[1] = r1_3;
        return 0u;
    }
    guest::cpu()->r[1] = r1_3;
    return 2u;
}

}  // namespace d_00755110
GUEST_EXPORT_FRAMED(0x00755110, d_00755110::PhotoImage__fit_a, 0x4010);  // pushes {r4, lr} first, as the original

// f_007551f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether a photo range is valid: empty, or a count up to 1000 with its first and last numbers in order.
namespace d_007551f4 {

struct __attribute__((packed)) PhotoRange {
    u16 half_0;
    u16 half_2;
    u16 half_4;
    u16 half_6;
    u16 half_8;
};
GUEST_OFFSET(PhotoRange, half_0, 0x0);
GUEST_OFFSET(PhotoRange, half_2, 0x2);
GUEST_OFFSET(PhotoRange, half_4, 0x4);
GUEST_OFFSET(PhotoRange, half_6, 0x6);
GUEST_OFFSET(PhotoRange, half_8, 0x8);


u32 PhotoRange__is_valid(gptr<PhotoRange> range) {
    u32 r1_1 = u32(range->half_0) & ~0xfc00u;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    if (r1_1 - 1u >= 0x3e8u) {
        guest::cpu()->r[1] = r1_1 - 1u;
        return 0u;
    }
    u32 r1_3 = range->half_2;
    if (range->half_6 < r1_3) {
        guest::cpu()->r[1] = r1_3;
        return 0u;
    }
    u32 r1_4 = range->half_4;
    if (r1_4 <= range->half_8) {
        guest::cpu()->r[1] = r1_4;
        return 1u;
    }
    guest::cpu()->r[1] = r1_4;
    return 0u;
}

}  // namespace d_007551f4
GUEST_EXPORT(0x007551f4, d_007551f4::PhotoRange__is_valid);

// f_0075523c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the cursor is valid (+4, start +0x24 <= end +0x20, index +0x1c below the count +0x18) and its 0x228-byte
// entry has +0x21c set.
namespace d_0075523c {

struct __attribute__((packed)) Cursor {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
    u8 unknown_5[0xf];  // (not used here)
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
};
GUEST_OFFSET(Cursor, byte_4, 0x4);
GUEST_OFFSET(Cursor, word_14, 0x14);
GUEST_OFFSET(Cursor, word_18, 0x18);
GUEST_OFFSET(Cursor, word_1c, 0x1c);
GUEST_OFFSET(Cursor, word_20, 0x20);
GUEST_OFFSET(Cursor, word_24, 0x24);


u32 Cursor__current_is_marked(gptr<Cursor> cursor) {
    u32 r1_1 = cursor->byte_4;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r1_2 = cursor->word_20;
    if (s32(cursor->word_24) > s32(r1_2)) {
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    u32 r1_3 = cursor->word_1c;
    if (s32(r1_3) >= s32(cursor->word_18)) {
        guest::cpu()->r[1] = r1_3;
        return 0u;
    }
    u32 r1_4 = r1_3 * 5u + (r1_3 << 6);
    u32 res_1 = cursor->word_14 + (r1_4 << 3);
    u32 zf_1 = res_1 == 0;
    if (!zf_1) {
        zf_1 = *gptr<u8>(res_1 + 0x21cu) == 0;
    }
    if (!zf_1) {
        guest::cpu()->r[1] = r1_4;
        return 1u;
    }
    guest::cpu()->r[1] = r1_4;
    return 0u;
}

}  // namespace d_0075523c
GUEST_EXPORT(0x0075523c, d_0075523c::Cursor__current_is_marked);

// f_00755290: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the cursor is valid and its 0x228-byte entry has +0x21c clear.
namespace d_00755290 {

struct __attribute__((packed)) Cursor {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
    u8 unknown_5[0xf];  // (not used here)
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
};
GUEST_OFFSET(Cursor, byte_4, 0x4);
GUEST_OFFSET(Cursor, word_14, 0x14);
GUEST_OFFSET(Cursor, word_18, 0x18);
GUEST_OFFSET(Cursor, word_1c, 0x1c);
GUEST_OFFSET(Cursor, word_20, 0x20);
GUEST_OFFSET(Cursor, word_24, 0x24);


u32 Cursor__current_is_unmarked(gptr<Cursor> cursor) {
    u32 r1_1 = cursor->byte_4;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r1_2 = cursor->word_20;
    if (s32(cursor->word_24) > s32(r1_2)) {
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    u32 r1_3 = cursor->word_1c;
    if (s32(r1_3) >= s32(cursor->word_18)) {
        guest::cpu()->r[1] = r1_3;
        return 0u;
    }
    u32 r1_4 = r1_3 * 5u + (r1_3 << 6);
    u32 r0_1 = cursor->word_14 + (r1_4 << 3);
    if (r0_1 == 0) {
        guest::cpu()->r[1] = r1_4;
        return 0u;
    }
    if (*gptr<u8>(r0_1 + 0x21cu) == 0) {
        guest::cpu()->r[1] = r1_4;
        return 1u;
    }
    guest::cpu()->r[1] = r1_4;
    return 0u;
}

}  // namespace d_00755290
GUEST_EXPORT(0x00755290, d_00755290::Cursor__current_is_unmarked);

// f_007552e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The cursor's current 0x228-byte entry (+0x14), or 0 when it is not valid.
namespace d_007552e8 {

struct __attribute__((packed)) Cursor {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
    u8 unknown_5[0xf];  // (not used here)
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
};
GUEST_OFFSET(Cursor, byte_4, 0x4);
GUEST_OFFSET(Cursor, word_14, 0x14);
GUEST_OFFSET(Cursor, word_18, 0x18);
GUEST_OFFSET(Cursor, word_1c, 0x1c);
GUEST_OFFSET(Cursor, word_20, 0x20);
GUEST_OFFSET(Cursor, word_24, 0x24);


u32 Cursor__current(gptr<Cursor> cursor) {
    u32 r1_1 = cursor->byte_4;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r1_2 = cursor->word_20;
    if (s32(cursor->word_24) > s32(r1_2)) {
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    u32 r1_3 = cursor->word_1c;
    if (s32(r1_3) >= s32(cursor->word_18)) {
        guest::cpu()->r[1] = r1_3;
        return 0u;
    }
    u32 r1_4 = r1_3 * 5u + (r1_3 << 6);
    u32 r0_1 = cursor->word_14 + (r1_4 << 3);
    guest::cpu()->r[1] = r1_4;
    return r0_1;
}

}  // namespace d_007552e8
GUEST_EXPORT(0x007552e8, d_007552e8::Cursor__current);

// f_00755330: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The path's file name (8 characters at +4) in capitals, as a wide string in `out`; its length.
namespace d_00755330 {


u32 PhotoPath__file_name_wide(u32 photo_path, u32 out) {
    u32 r12 = photo_path + 4u;
    u32 r3 = 8u;
    photo_path = 0u;
    do {
        u32 r2_1 = *gptr<s8>(r12 + photo_path);
        if (r2_1 == 0) {
            *gptr<u16>(out + (photo_path << 1)) = 0;
            return photo_path;
        }
        if (r2_1 - 0x61u <= 0x19u) {
            r2_1 -= 0x20u;
        }
        u32 r4_1 = out + (photo_path << 1);
        photo_path += 1u;
        *gptr<u16>(r4_1) = u16(sxtb(r2_1));
        guest::preempt();
    } while (s32(photo_path) < s32(r3));
    *gptr<u16>(out + (photo_path << 1)) = 0;
    return photo_path;
}

}  // namespace d_00755330
GUEST_EXPORT_FRAMED(0x00755330, d_00755330::PhotoPath__file_name_wide, 0x10);  // pushes {r4} first, as the original

// f_00755384: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the first 4 characters (or fewer, up to its end) of the name are letters, digits or '_'.
namespace d_00755384 {


u32 is_name_of_4_word_chars(u32 name) {
    u32 r1_1 = 0;
    u32 index = 0u;
    do {
        r1_1 = *gptr<s8>(name);
        if (r1_1 == 0) {
            guest::cpu()->r[1] = r1_1;
            return 1u;
        }
        u32 zf_1 = r1_1 - 0x30u == 9u;
        u32 cf_1 = r1_1 - 0x30u >= 9u;
        if (cf_1 && !zf_1) {
            zf_1 = r1_1 - 0x41u == 0x19u;
            cf_1 = r1_1 - 0x41u >= 0x19u;
        }
        if (cf_1 && !zf_1) {
            zf_1 = r1_1 - 0x61u == 0x19u;
            cf_1 = r1_1 - 0x61u >= 0x19u;
        }
        if (cf_1 && !zf_1 && r1_1 != 0x5fu) {
            guest::cpu()->r[1] = r1_1;
            return 0u;
        }
        index += 1u;
        name += 1u;
        guest::preempt();
    } while (s32(index) < 4);
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_00755384
GUEST_EXPORT(0x00755384, d_00755384::is_name_of_4_word_chars);

// f_007553d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The index (0-3) of the file extension `text` (up to 4 characters, compared in capitals, a leading '.' ignored) in
// the table of known extensions; 0 when unknown.
namespace d_007553d8 {

inline constexpr u32 photo_extensions_address = 0x00981698u;
inline constexpr guest::Function<0x0010184d, u32(u32, u32, u32, u32)> compare_wide_strings;

u32 extension_index(u32 text) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 upper = frame.at(0).addr();
    u32 r12 = 4u;
    u32 r1 = 0u;
L_7553ec:;
    u32 r3 = *gptr<s8>(text + r1);
    if (r3 != 0) {
        if (r3 - 0x61u <= 0x19u) {
            r3 -= 0x20u;
        }
        u32 r4_1 = upper + (r1 << 1);
        r1 += 1u;
        r3 = sxtb(r3);
        *gptr<u16>(r4_1) = u16(r3);
        if (s32(r1) < s32(r12)) {
            guest::preempt();
            goto L_7553ec;
        }
    }
    u32 r7 = photo_extensions_address;
    u32 r6 = upper;
    u32 i = 0u;
    *gptr<u16>(upper + (r1 << 1)) = 0;
    do {
        u32 r5_1 = i & 0xffu;
        u32 r1_1 = gptr<u32>(r7)[r5_1];
        if (*gptr<u16>(r1_1) == 0x2eu) {
            r1_1 += 2u;
        }
        u32 r0_1 = compare_wide_strings(r6, r1_1, upper, r3);
        upper = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_1 == 0) {
            return r5_1;
        }
        i += 1u;
        guest::preempt();
    } while (s32(i) < 4);
    return 0u;
}

}  // namespace d_007553d8
GUEST_EXPORT_FRAMED(0x007553d8, d_007553d8::extension_index, 0x40f0);  // pushes {i, r5, r6, r7, lr} first, as the original

// f_00755484: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Packs the value from +4 (minus 1) and the one from +0xc (minus 100) as a 16-bit pair.
namespace d_00755484 {

inline constexpr guest::Function<0x005ad9a0, u32(u32)> PhotoName__number;
inline constexpr guest::Function<0x005aeff0, u32(u32)> PhotoName__folder_number;
inline constexpr guest::Function<0x005b060c, u32(u32, u32)> store_half_at_2_up_to_270e;
inline constexpr guest::Function<0x005b0640, u32(u32, u32)> store_half_below_384;

struct __attribute__((packed)) PackCountAndIdFrame {
    u32 word_0;
};
GUEST_OFFSET(PackCountAndIdFrame, word_0, 0x0);
GUEST_SIZE(PackCountAndIdFrame, 0x4);

u32 pack_count_and_id(u32 text, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<PackCountAndIdFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r0_2 = PhotoName__number(text + 4u);
    store_half_at_2_up_to_270e(frame.at(0).addr(), r0_2 - 1u);
    u32 r0_5 = PhotoName__folder_number(text + 0xcu);
    store_half_below_384(frame.at(0).addr(), r0_5 - 0x64u);
    return frame->word_0;
}

}  // namespace d_00755484
GUEST_EXPORT_FRAMED(0x00755484, d_00755484::pack_count_and_id, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_007554bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether bit `index` of bits 9-12 of +0x28 is set.
namespace d_007554bc {

struct __attribute__((packed)) FlagBitOfBits9To12Arg0 {
    u8 unknown_0[0x28];  // (not used here)
    u32 word_28;
};
GUEST_OFFSET(FlagBitOfBits9To12Arg0, word_28, 0x28);


u32 flag_bit_of_bits_9_to_12(gptr<FlagBitOfBits9To12Arg0> arg0, u32 r1) {
    u32 r0_1 = (arg0->word_28 & 0x1e00u) >> 9 & lsl_r(1u, r1 & 0xff);
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    return r0_1;
}

}  // namespace d_007554bc
GUEST_EXPORT(0x007554bc, d_007554bc::flag_bit_of_bits_9_to_12);

// f_007554d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Bits 0-4 of +0x2c.
namespace d_007554d8 {

struct __attribute__((packed)) Bits0To4Of2cArg0 {
    u8 unknown_0[0x2c];  // (not used here)
    u32 word_2c;
};
GUEST_OFFSET(Bits0To4Of2cArg0, word_2c, 0x2c);


u32 bits_0_to_4_of_2c(gptr<Bits0To4Of2cArg0> arg0) {
    return arg0->word_2c & 0x1fu;
}

}  // namespace d_007554d8
GUEST_EXPORT(0x007554d8, d_007554d8::bits_0_to_4_of_2c);

// f_007554e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Bit 0 of +0x28.
namespace d_007554e4 {

struct __attribute__((packed)) Bit0Of28Arg0 {
    u8 unknown_0[0x28];  // (not used here)
    u32 word_28;
};
GUEST_OFFSET(Bit0Of28Arg0, word_28, 0x28);


u32 bit_0_of_28(gptr<Bit0Of28Arg0> arg0) {
    return arg0->word_28 & 1u;
}

}  // namespace d_007554e4
GUEST_EXPORT(0x007554e4, d_007554e4::bit_0_of_28);

// f_00755504: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The path's folder name (8 characters at +0xc) in capitals, as a wide string in `out`; its length.
namespace d_00755504 {


u32 PhotoPath__folder_name_wide(u32 photo_path, u32 out) {
    u32 r12 = photo_path + 0xcu;
    u32 r3 = 8u;
    photo_path = 0u;
L_755514:;
    u32 r2_1 = *gptr<s8>(r12 + photo_path);
    if (r2_1 != 0) {
        if (r2_1 - 0x61u <= 0x19u) {
            r2_1 -= 0x20u;
        }
        u32 r4_1 = out + (photo_path << 1);
        photo_path += 1u;
        *gptr<u16>(r4_1) = u16(sxtb(r2_1));
        if (s32(photo_path) < s32(r3)) {
            guest::preempt();
            goto L_755514;
        }
    }
    u32 r1_1 = out + (photo_path << 1);
    *gptr<u16>(r1_1) = 0;
    guest::cpu()->r[1] = r1_1;
    return photo_path;
}

}  // namespace d_00755504
GUEST_EXPORT_FRAMED(0x00755504, d_00755504::PhotoPath__folder_name_wide, 0x10);  // pushes {r4} first, as the original

// f_00755558: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Bits 1-8 of +0x28.
namespace d_00755558 {

struct __attribute__((packed)) Bits1To8Of28Arg0 {
    u8 unknown_0[0x28];  // (not used here)
    u32 word_28;
};
GUEST_OFFSET(Bits1To8Of28Arg0, word_28, 0x28);


u32 bits_1_to_8_of_28(gptr<Bits1To8Of28Arg0> arg0) {
    return arg0->word_28 >> 1u & 0xffu;
}

}  // namespace d_00755558
GUEST_EXPORT(0x00755558, d_00755558::bits_1_to_8_of_28);

// f_00755568: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Bits 21-24 of +0x2c.
namespace d_00755568 {

struct __attribute__((packed)) Bits21To24Of2cArg0 {
    u8 unknown_0[0x2c];  // (not used here)
    u32 word_2c;
};
GUEST_OFFSET(Bits21To24Of2cArg0, word_2c, 0x2c);


u32 bits_21_to_24_of_2c(gptr<Bits21To24Of2cArg0> arg0) {
    return (arg0->word_2c & 0x1e00000u) >> 0x15;
}

}  // namespace d_00755568
GUEST_EXPORT(0x00755568, d_00755568::bits_21_to_24_of_2c);

// f_00755578: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the record has no time range (bit 0 of +0x28 clear) or both its times (+0x14, +0x1c) are within range.
namespace d_00755578 {

struct __attribute__((packed)) TimeRangeIsValidArg0 {
    u8 unknown_0[0x28];  // (not used here)
    u32 word_28;
};
GUEST_OFFSET(TimeRangeIsValidArg0, word_28, 0x28);

inline constexpr guest::Function<0x00754908, u32(u32)> Stamp__is_out_of_range;

u32 time_range_is_valid(gptr<TimeRangeIsValidArg0> arg0) {
    if ((arg0->word_28 & 1u) == 0) {
        return 1u;
    }
    u32 is_out = Stamp__is_out_of_range(arg0.addr() + 0x14u);
    if (is_out != 0) {
        return 0u;
    }
    u32 is_out_2 = Stamp__is_out_of_range(arg0.addr() + 0x1cu);
    return is_out_2 == 0;
}

}  // namespace d_00755578
GUEST_EXPORT_FRAMED(0x00755578, d_00755578::time_range_is_valid, 0x4010);  // pushes {r4, lr} first, as the original

// f_007555bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Bits 5-12 of +0x2c.
namespace d_007555bc {

struct __attribute__((packed)) Bits5To12Of2cArg0 {
    u8 unknown_0[0x2c];  // (not used here)
    u32 word_2c;
};
GUEST_OFFSET(Bits5To12Of2cArg0, word_2c, 0x2c);


u32 bits_5_to_12_of_2c(gptr<Bits5To12Of2cArg0> arg0) {
    return arg0->word_2c >> 5u & 0xffu;
}

}  // namespace d_007555bc
GUEST_EXPORT(0x007555bc, d_007555bc::bits_5_to_12_of_2c);

// f_007555cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The extension (up to 4 characters) in capitals, as a wide string in `out`; its length.
namespace d_007555cc {


u32 PhotoPath__extension_wide(u32 photo_path, u32 out) {
    u32 r3 = photo_path;
    u32 r12 = 4u;
    photo_path = 0u;
    do {
        u32 r2_1 = *gptr<s8>(r3 + photo_path);
        if (r2_1 == 0) {
            *gptr<u16>(out + (photo_path << 1)) = 0;
            return photo_path;
        }
        if (r2_1 - 0x61u <= 0x19u) {
            r2_1 -= 0x20u;
        }
        u32 r4_1 = out + (photo_path << 1);
        photo_path += 1u;
        *gptr<u16>(r4_1) = u16(sxtb(r2_1));
        guest::preempt();
    } while (s32(photo_path) < s32(r12));
    *gptr<u16>(out + (photo_path << 1)) = 0;
    return photo_path;
}

}  // namespace d_007555cc
GUEST_EXPORT_FRAMED(0x007555cc, d_007555cc::PhotoPath__extension_wide, 0x10);  // pushes {r4} first, as the original

// f_00755620: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Parses the photo's record from its folder and file names.
namespace d_00755620 {

struct __attribute__((packed)) PhotoRecord {
    u8 unknown_0[0x28];  // (not used here)
    u32 word_28;
};
GUEST_OFFSET(PhotoRecord, word_28, 0x28);

struct __attribute__((packed)) Local_00755620_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00755620_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00755620_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_00755620_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00755620_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_00755620_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_00755620_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00755620_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_00755620_ea_3, word_4, 0x4);

struct __attribute__((packed)) Local_00755620_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00755620_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_00755620_ea_4, word_4, 0x4);

struct __attribute__((packed)) Local_00755620_ea_5 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00755620_ea_5, word_0, 0x0);
GUEST_OFFSET(Local_00755620_ea_5, word_4, 0x4);

inline constexpr guest::Function<0x005aed44, u32(u32, u32)> PhotoRecord__from_name;
inline constexpr guest::Function<0x005af13c, u32(u32, u32)> PhotoRecord__from_folder_name;
inline constexpr guest::Function<0x00754908, u32(u32, u32)> Stamp__is_out_of_range;

u32 PhotoRecord__parse_name(gptr<PhotoRecord> photo_record, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0 = photo_record.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_00755620_ea_4> ea_4 = gptr<Local_00755620_ea_4>(0u);
    u32 r4_3 = 0;
    gptr<Local_00755620_ea_5> ea_5 = gptr<Local_00755620_ea_5>(0u);
    u32 r4_4 = 0;
    gptr<Local_00755620_ea_1> ea_1 = gptr<Local_00755620_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r4;
    ea_1->word_4 = r14;
    r4 = r0;
    if ((photo_record->word_28 & 1u) != 0) {
        r0 = r4;
        u32 r2 = 0u;
L_75563c:;
        r1 = *gptr<s8>(r0);
        if (r1 != 0) {
            u32 r3_1 = r1 - 0x30u;
            u32 zf_1 = r3_1 == 9u;
            u32 cf_1 = r3_1 >= 9u;
            if (cf_1 && !zf_1) {
                u32 r3_2 = r1 - 0x41u;
                zf_1 = r3_2 == 0x19u;
                cf_1 = r3_2 >= 0x19u;
            }
            if (cf_1 && !zf_1) {
                u32 r3_3 = r1 - 0x61u;
                zf_1 = r3_3 == 0x19u;
                cf_1 = r3_3 >= 0x19u;
            }
            if (cf_1 && !zf_1 && r1 != 0x5fu) {
                ea_4 = gptr<Local_00755620_ea_4>(frame.at(0).addr());
                r4_3 = ea_4->word_0;
                guest::cpu()->r[1] = r1;
                guest::cpu()->r[4] = r4_3;
                return 0u;
            }
            r2 += 1u;
            r0 += 1u;
            if (s32(r2) < 4) {
                guest::preempt();
                goto L_75563c;
            }
        }
        u32 r0_2 = PhotoRecord__from_name(r4 + 4u, 0u);
        if (r0_2 == 0) {
            gptr<Local_00755620_ea_2> ea_2 = gptr<Local_00755620_ea_2>(frame.at(0).addr());
            guest::cpu()->r[4] = ea_2->word_0;
            return r0_2;
        }
        u32 r0_4 = PhotoRecord__from_folder_name(r4 + 0xcu, 0u);
        r1 = guest::cpu()->r[1];
        if (r0_4 == 0) {
            gptr<Local_00755620_ea_3> ea_3 = gptr<Local_00755620_ea_3>(frame.at(0).addr());
            u32 r4_2 = ea_3->word_0;
            guest::cpu()->r[4] = r4_2;
            return r0_4;
        }
    }
    if ((*gptr<u32>(r4 + 0x28u) & 1u) == 0) {
        ea_5 = gptr<Local_00755620_ea_5>(frame.at(0).addr());
        r4_4 = ea_5->word_0;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4_4;
        return 1u;
    }
    u32 is_out = Stamp__is_out_of_range(r4 + 0x14u, r1);
    r1 = guest::cpu()->r[1];
    if (is_out == 0) {
        u32 is_out_2 = Stamp__is_out_of_range(r4 + 0x1cu, r1);
        r1 = guest::cpu()->r[1];
        if (is_out_2 == 0) {
            ea_5 = gptr<Local_00755620_ea_5>(frame.at(0).addr());
            r4_4 = ea_5->word_0;
            guest::cpu()->r[4] = r4_4;
            return 1u;
        }
    }
    ea_4 = gptr<Local_00755620_ea_4>(frame.at(0).addr());
    r4_3 = ea_4->word_0;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_3;
    return 0u;
}

}  // namespace d_00755620
GUEST_EXPORT(0x00755620, d_00755620::PhotoRecord__parse_name);

// f_007556f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Word `index` of the table at +0x30.
namespace d_007556f0 {


u32 word_30_at(u32 r0, u32 r1) {
    return *gptr<u32>(r0 + (r1 << 2) + 0x30u);
}

}  // namespace d_007556f0
GUEST_EXPORT(0x007556f0, d_007556f0::word_30_at);

// f_007556fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the 16-bit value at +2 is at most 0x270e.
namespace d_007556fc {

struct __attribute__((packed)) Half2IsAtMost270eArg0 {
    u8 unknown_0[0x2];  // (not used here)
    u16 half_2;
};
GUEST_OFFSET(Half2IsAtMost270eArg0, half_2, 0x2);


u32 half_2_is_at_most_270e(gptr<Half2IsAtMost270eArg0> arg0) {
    u32 r0_1 = arg0->half_2;
    u32 zf_1 = r0_1 == 0x270eu;
    u32 cf_1 = r0_1 >= 0x270eu;
    if (r0_1 <= 0x270eu) {
        r0_1 = 1u;
    }
    if (cf_1 && !zf_1) {
        r0_1 = 0u;
    }
    guest::cpu()->r[1] = 0x270eu;
    return r0_1;
}

}  // namespace d_007556fc
GUEST_EXPORT(0x007556fc, d_007556fc::half_2_is_at_most_270e);

// f_00755718: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether a photo number's folder is below 900.
namespace d_00755718 {

struct __attribute__((packed)) PhotoNumber {
    u16 half_0;
};
GUEST_OFFSET(PhotoNumber, half_0, 0x0);


u32 PhotoNumber__folder_valid(gptr<PhotoNumber> number) {
    return !(number->half_0 >= 0x384u);
}

}  // namespace d_00755718
GUEST_EXPORT(0x00755718, d_00755718::PhotoNumber__folder_valid);

// f_0075572c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether two photo numbers are the same (folder and file).
namespace d_0075572c {

struct __attribute__((packed)) PhotoNumber {
    u16 half_0;
    u16 half_2;
};
GUEST_OFFSET(PhotoNumber, half_0, 0x0);
GUEST_OFFSET(PhotoNumber, half_2, 0x2);

struct __attribute__((packed)) PhotoNumberEqualsArg1 {
    u16 half_0;
    u16 half_2;
};
GUEST_OFFSET(PhotoNumberEqualsArg1, half_0, 0x0);
GUEST_OFFSET(PhotoNumberEqualsArg1, half_2, 0x2);


u32 PhotoNumber__equals(gptr<PhotoNumber> number, gptr<PhotoNumberEqualsArg1> other) {
    if (number->half_0 != other->half_0) {
        guest::cpu()->r[1] = other.addr();
        return 0u;
    }
    u32 r1_1 = other->half_2;
    if (number->half_2 == r1_1) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_0075572c
GUEST_EXPORT(0x0075572c, d_0075572c::PhotoNumber__equals);

// f_00755758: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether two photo numbers differ (folder or file).
namespace d_00755758 {

struct __attribute__((packed)) PhotoNumber {
    u16 half_0;
    u16 half_2;
};
GUEST_OFFSET(PhotoNumber, half_0, 0x0);
GUEST_OFFSET(PhotoNumber, half_2, 0x2);

struct __attribute__((packed)) PhotoNumberDiffersArg1 {
    u16 half_0;
    u16 half_2;
};
GUEST_OFFSET(PhotoNumberDiffersArg1, half_0, 0x0);
GUEST_OFFSET(PhotoNumberDiffersArg1, half_2, 0x2);


u32 PhotoNumber__differs(gptr<PhotoNumber> number, gptr<PhotoNumberDiffersArg1> other) {
    if (number->half_0 != other->half_0) {
        guest::cpu()->r[1] = other.addr();
        return 1u;
    }
    u32 r1_1 = other->half_2;
    if (number->half_2 == r1_1) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_00755758
GUEST_EXPORT(0x00755758, d_00755758::PhotoNumber__differs);

// f_00755788: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Halves the photo's size until it fits (the second variant).
namespace d_00755788 {

struct __attribute__((packed)) PhotoImage {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u8 byte_10;
    u8 unknown_11[0x3];  // (not used here)
    u32 word_14;
    u8 unknown_18[0x4];  // (not used here)
    u32 word_1c;
    u32 word_20;
    u32 word_24;
};
GUEST_OFFSET(PhotoImage, word_c, 0xc);
GUEST_OFFSET(PhotoImage, byte_10, 0x10);
GUEST_OFFSET(PhotoImage, word_14, 0x14);
GUEST_OFFSET(PhotoImage, word_1c, 0x1c);
GUEST_OFFSET(PhotoImage, word_20, 0x20);
GUEST_OFFSET(PhotoImage, word_24, 0x24);

struct __attribute__((packed)) Local_00755788_r2_2 {
    u8 unknown_0[0x14];  // (not used here)
    u16 half_14;
    u16 half_16;
};
GUEST_OFFSET(Local_00755788_r2_2, half_14, 0x14);
GUEST_OFFSET(Local_00755788_r2_2, half_16, 0x16);

inline constexpr guest::Function<0x005aa50c, u32(u32, u32, u32, u32)> halve_size_to_fit;

struct __attribute__((packed)) PhotoImageFitBFrame {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(PhotoImageFitBFrame, word_0, 0x0);
GUEST_OFFSET(PhotoImageFitBFrame, word_4, 0x4);
GUEST_SIZE(PhotoImageFitBFrame, 0x8);

u32 PhotoImage__fit_b(gptr<PhotoImage> photo_image, u32 r1) {
    guest::StackFrameOf<PhotoImageFitBFrame> frame;  // the original's stack frame
    if (photo_image->word_1c == 0) {
        return 2u;
    }
    frame->word_0 = photo_image->word_20;
    frame->word_4 = photo_image->word_24;
    u32 r0_2 = halve_size_to_fit(frame.at(0).addr(), frame.at(4).addr(), 0x400u, 0x300u);
    u32 r2_1 = guest::cpu()->r[2];
    u32 r1_2 = frame->word_0;
    u32 nf_1 = r1_2 - 0xa0u >> 0x1f;
    u32 vf_1 = ((r1_2 ^ 0xa0u) & (r1_2 ^ r1_2 - 0xa0u)) >> 0x1f;
    if (nf_1 == vf_1) {
        r2_1 = frame->word_4;
        nf_1 = r2_1 - 0x78u >> 0x1f;
        vf_1 = ((r2_1 ^ 0x78u) & (r2_1 ^ r2_1 - 0x78u)) >> 0x1f;
    }
    if (nf_1 != vf_1) {
        guest::cpu()->r[1] = r1_2;
        return 2u;
    }
    u32 nf_2 = r1_2 - 0x400u >> 0x1f;
    u32 zf_1 = r1_2 - 0x400u == 0;
    u32 vf_2 = ((r1_2 ^ 0x400u) & (r1_2 ^ r1_2 - 0x400u)) >> 0x1f;
    if (zf_1 || nf_2 != vf_2) {
        u32 res_4 = r2_1 - 0x300u;
        nf_2 = res_4 >> 0x1f;
        zf_1 = res_4 == 0;
        vf_2 = ((r2_1 ^ 0x300u) & (r2_1 ^ res_4)) >> 0x1f;
    }
    if (!zf_1 && nf_2 == vf_2 || s32(r0_2) > 2) {
        guest::cpu()->r[1] = r1_2;
        return 2u;
    }
    u32 r0_3 = photo_image->word_20;
    if ((r0_3 & 7u) != 0) {
        guest::cpu()->r[1] = r1_2;
        return 2u;
    }
    u32 r1_3 = photo_image->word_24;
    if ((r1_3 & 7u) != 0) {
        guest::cpu()->r[1] = r1_3;
        return 2u;
    }
    gptr<Local_00755788_r2_2> r2_2 = gptr<Local_00755788_r2_2>(photo_image->word_c);
    if ((u32(r2_2->half_14) & 0x10u) != 0) {
        u32 nf_3 = r0_3 - 0x190u >> 0x1f;
        u32 vf_3 = ((r0_3 ^ 0x190u) & (r0_3 ^ r0_3 - 0x190u)) >> 0x1f;
        if (nf_3 == vf_3) {
            nf_3 = r1_3 - 0xf0u >> 0x1f;
            vf_3 = ((r1_3 ^ 0xf0u) & (r1_3 ^ r1_3 - 0xf0u)) >> 0x1f;
        }
        if (nf_3 != vf_3) {
            guest::cpu()->r[1] = r1_3;
            return 2u;
        }
        u32 nf_4 = r0_3 - 0x400u >> 0x1f;
        u32 zf_2 = r0_3 - 0x400u == 0;
        u32 vf_4 = ((r0_3 ^ 0x400u) & (r0_3 ^ r0_3 - 0x400u)) >> 0x1f;
        if (zf_2 || nf_4 != vf_4) {
            nf_4 = r1_3 - 0x300u >> 0x1f;
            zf_2 = r1_3 - 0x300u == 0;
            vf_4 = ((r1_3 ^ 0x300u) & (r1_3 ^ r1_3 - 0x300u)) >> 0x1f;
        }
        if (!zf_2 && nf_4 == vf_4) {
            guest::cpu()->r[1] = r1_3;
            return 2u;
        }
    }
    u32 r0_4 = photo_image->word_14;
    if (s32(r0_4) < 1 || s32(r0_4) > 0x64) {
        guest::cpu()->r[1] = r1_3;
        return 2u;
    }
    if ((u32(r2_2->half_16) & 1u) != 0 && photo_image->byte_10 != 0) {
        guest::cpu()->r[1] = r1_3;
        return 0u;
    }
    guest::cpu()->r[1] = r1_3;
    return 2u;
}

}  // namespace d_00755788
GUEST_EXPORT_FRAMED(0x00755788, d_00755788::PhotoImage__fit_b, 0x4010);  // pushes {r4, lr} first, as the original

// f_00755864: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The count of the table at +8 (0073663c).
namespace d_00755864 {

inline constexpr guest::Function<0x0073663c, u32(u32, u32)> ResolutionRef__width;

u32 count_at_8(u32 r0) {
    return ResolutionRef__width(r0 + 8u, guest::cpu()->r[1]);
}

}  // namespace d_00755864
GUEST_EXPORT(0x00755864, d_00755864::count_at_8);

// f_0075586c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The count for `index` of the table at +8 (0073666c).
namespace d_0075586c {

inline constexpr guest::Function<0x0073666c, u32(u32, u32)> ResolutionRef__height;

u32 count_of_at_8(u32 r0) {
    return ResolutionRef__height(r0 + 8u, guest::cpu()->r[1]);
}

}  // namespace d_0075586c
GUEST_EXPORT(0x0075586c, d_0075586c::count_of_at_8);

// f_00755874: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The count of the table at +8 divided by 2^shift (+0x68), rounded up.
namespace d_00755874 {

struct __attribute__((packed)) CountRoundedUpByShift68Arg0 {
    u8 unknown_0[0x68];  // (not used here)
    u32 word_68;
};
GUEST_OFFSET(CountRoundedUpByShift68Arg0, word_68, 0x68);

inline constexpr guest::Function<0x0073663c, u32(u32, u32)> ResolutionRef__width;

u32 count_rounded_up_by_shift_68(gptr<CountRoundedUpByShift68Arg0> arg0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r1 = 0;
    if (arg0->word_68 == 0) {
        frame.release();
        return ResolutionRef__width(arg0.addr() + 8u, r1);
    }
    u32 r0_2 = ResolutionRef__width(arg0.addr() + 8u, r1);
    u32 r0_3 = arg0->word_68;
    return lsr_r(r0_2 + lsl_r(1u, r0_3 & 0xff) - 1u, r0_3 & 0xff);
}

}  // namespace d_00755874
GUEST_EXPORT(0x00755874, d_00755874::count_rounded_up_by_shift_68);

// f_007558b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The count for `index` of the table at +8 divided by 2^shift (+0x68), rounded up.
namespace d_007558b4 {

struct __attribute__((packed)) CountOfRoundedUpByShift68Arg0 {
    u8 unknown_0[0x68];  // (not used here)
    u32 word_68;
};
GUEST_OFFSET(CountOfRoundedUpByShift68Arg0, word_68, 0x68);

inline constexpr guest::Function<0x0073666c, u32(u32, u32)> ResolutionRef__height;

u32 count_of_rounded_up_by_shift_68(gptr<CountOfRoundedUpByShift68Arg0> arg0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r1 = 0;
    if (arg0->word_68 == 0) {
        frame.release();
        return ResolutionRef__height(arg0.addr() + 8u, r1);
    }
    u32 r0_2 = ResolutionRef__height(arg0.addr() + 8u, r1);
    u32 r0_3 = arg0->word_68;
    return lsr_r(r0_2 + lsl_r(1u, r0_3 & 0xff) - 1u, r0_3 & 0xff);
}

}  // namespace d_007558b4
GUEST_EXPORT(0x007558b4, d_007558b4::count_of_rounded_up_by_shift_68);

// f_00755a40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether 00159550 on the handle (+0) with the two arguments returns 0.
namespace d_00755a40 {

struct __attribute__((packed)) Call00159550FailedArg0 {
    u32 word_0;
};
GUEST_OFFSET(Call00159550FailedArg0, word_0, 0x0);

inline constexpr guest::Function<0x00159550, u32(u32, u32, u32)> ItemOffsetTable__find;

u32 call_00159550_failed(gptr<Call00159550FailedArg0> arg0, u32 r1, u32 r2) {
    u32 r0_3 = ItemOffsetTable__find(arg0->word_0, r2, r1) == 0;
    return r0_3;
}

}  // namespace d_00755a40
GUEST_EXPORT_FRAMED(0x00755a40, d_00755a40::call_00159550_failed, 0x4010);  // pushes {r4, lr} first, as the original

// f_00755cd0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether `id` is among the shop's ids (count +0x60, from +0x64).
namespace d_00755cd0 {

struct __attribute__((packed)) Local_00755cd0_r3_1 {
    u8 unknown_0[0x64];  // (not used here)
    u32 word_64;
    u32 word_68;
};
GUEST_OFFSET(Local_00755cd0_r3_1, word_64, 0x64);
GUEST_OFFSET(Local_00755cd0_r3_1, word_68, 0x68);


u32 AcNpcSpShop__has_id(gptr<AcNpcSpShop> ac_npc_sp_shop, u32 id) {
    u32 r0 = ac_npc_sp_shop.addr();
    u32 count = ac_npc_sp_shop->word_60;
    if (count == 0) {
        return 0u;
    }
    u32 r2 = count & 1u;
    u32 i = 0u;
    if (r2 >= 0u && r2 != 0) {
        do {
            if (*gptr<u32>(r0 + (i << 2) + 0x64u) == id) {
                return 1u;
            }
            i += 1u;
            guest::preempt();
        } while (r2 > i);
    }
    if (count <= r2) {
        return 0u;
    }
    do {
        gptr<Local_00755cd0_r3_1> r3_1 = gptr<Local_00755cd0_r3_1>(r0 + (r2 << 2));
        if (r3_1->word_64 == id || r3_1->word_68 == id) {
            return 1u;
        }
        r2 += 2u;
        guest::preempt();
    } while (count > r2);
    return 0u;
}

}  // namespace d_00755cd0
GUEST_EXPORT_FRAMED(0x00755cd0, d_00755cd0::AcNpcSpShop__has_id, 0x10);  // pushes {r4} first, as the original

// f_00756120: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The first of the player's ten letters (+0x7008) that is in use, unread (bit 5 clear) and addressed to the entry's
// index in the save table at +0x406ec; -1 when none.
namespace d_00756120 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x0071dcdc, u32(u32, u32)> small_record_address_0071dcdc;
inline constexpr guest::Function<0x00756758, u32(u32, u32)> index_of_entry_40;

u32 letter_slot_for_entry(u32 r0, u32 r1) {
    u32 save_data = get_save_data(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r6 = index_of_entry_40(save_data + 0x406ecu, r0);
    u32 r5 = r1 + 0x7008u;
    u32 i = 0u;
    do {
        u32 r0_4 = small_record_address_0071dcdc(r5, i);
        if (r0_4 != 0) {
            u32 r0_5 = *gptr<u8>(r0_4 + 0x272u);
            if ((r0_5 & 0x80u) != 0 && (r0_5 & 0x20u) == 0 && (r0_5 & 7u) == r6) {
                return i;
            }
        }
        i += 1u;
        guest::preempt();
    } while (i < 0xau);
    return ~0u;
}

}  // namespace d_00756120
GUEST_EXPORT_FRAMED(0x00756120, d_00756120::letter_slot_for_entry, 0x4070);  // pushes {i, r5, r6, lr} first, as the original

// f_007561ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether a record in states 3-8 is due: states 4-8 always, state 3 once its days (+0x3e) after its date have passed.
namespace d_007561ac {

struct __attribute__((packed)) RecordIsDueArg0 {
    u8 unknown_0[0x9];  // (not used here)
    u8 byte_9;
    u8 unknown_a[0x34];  // (not used here)
    u8 byte_3e;
};
GUEST_OFFSET(RecordIsDueArg0, byte_9, 0x9);
GUEST_OFFSET(RecordIsDueArg0, byte_3e, 0x3e);

struct __attribute__((packed)) Local_007561ac_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_007561ac_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_007561ac_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_007561ac_ea_1, word_8, 0x8);

struct __attribute__((packed)) Local_007561ac_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_007561ac_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_007561ac_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_007561ac_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_007561ac_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_007561ac_ea_3, word_4, 0x4);

struct __attribute__((packed)) Now {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Now, word_0, 0x0);
GUEST_OFFSET(Now, word_4, 0x4);

struct __attribute__((packed)) Local_007561ac_r3_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_007561ac_r3_1, word_0, 0x0);
GUEST_OFFSET(Local_007561ac_r3_1, word_4, 0x4);
GUEST_OFFSET(Local_007561ac_r3_1, word_8, 0x8);

inline constexpr guest::Function<0x002fb378, u32(u32)> game_time_now;
inline constexpr guest::Function<0x002fb430, u32(u32, u32, u32, u32)> make_adjusted_words;
inline constexpr guest::Function<0x002fd41c, u32(u32, u32, u32, u32)> word_and_byte_pairs_not_less;
inline constexpr guest::Function<0x003014b4, u32(u32, u32, u32, u32)> TimeStamp__add_days;

struct __attribute__((packed)) RecordIsDueFrame {
    u8 unknown_0[0x8];  // (not read or written by name)
    u32 word_8;
    u8 unknown_c[0x14];  // (not read or written by name)
};
GUEST_OFFSET(RecordIsDueFrame, word_8, 0x8);
GUEST_SIZE(RecordIsDueFrame, 0x20);

u32 record_is_due(gptr<RecordIsDueArg0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<RecordIsDueFrame> frame;  // the original's stack frame
    u32 r0_1 = arg0->byte_9;
    if (s32(r0_1) < 3 || s32(r0_1) >= 9) {
        return 0u;
    }
    if (s32(r0_1) >= 4) {
        return 1u;
    }
    make_adjusted_words(frame.at(0x14).addr(), arg0.addr(), r2, r3);
    gptr<Local_007561ac_ea_1> ea_1 = gptr<Local_007561ac_ea_1>(frame.at(0x14).addr());
    u32 r1_1 = ea_1->word_4;
    u32 r2_1 = ea_1->word_8;
    gptr<Local_007561ac_r3_1> r3_1 = gptr<Local_007561ac_r3_1>(frame.at(8).addr());
    r3_1->word_0 = ea_1->word_0;
    r3_1->word_4 = r1_1;
    r3_1->word_8 = r2_1;
    u32 r0_3 = frame.at(8).addr();
    u32 r1_2 = s8(arg0->byte_3e);
    TimeStamp__add_days(r0_3, r1_2, r2_1, r3_1.addr());
    gptr<Now> now_2 = gptr<Now>(game_time_now(r0_3));
    gptr<Local_007561ac_ea_2> ea_2 = gptr<Local_007561ac_ea_2>(frame.at(0xc).addr());
    u32 r1_3 = ea_2->word_0;
    u32 r2_2 = ea_2->word_4;
    gptr<Local_007561ac_ea_3> ea_3 = gptr<Local_007561ac_ea_3>(frame.at(0).addr());
    ea_3->word_0 = r1_3;
    ea_3->word_4 = r2_2;
    return word_and_byte_pairs_not_less(now_2->word_0, now_2->word_4, r2_2, frame->word_8);
}

}  // namespace d_007561ac
GUEST_EXPORT_FRAMED(0x007561ac, d_007561ac::record_is_due, 0x4010);  // pushes {r4, lr} first, as the original

// f_00756238: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether 00318e38 accepts the argument with the word at +0x1028.
namespace d_00756238 {

struct __attribute__((packed)) Call00318e38On1028Arg1 {
    u8 unknown_0[0x1028];  // (not used here)
    u32 word_1028;
};
GUEST_OFFSET(Call00318e38On1028Arg1, word_1028, 0x1028);

inline constexpr guest::Function<0x00318e38, u32(u32, u32, u32, u32)> PlayerPairRecords__find;

u32 call_00318e38_on_1028(u32 player_pair_records, gptr<Call00318e38On1028Arg1> arg1) {
    u32 r0_1 = PlayerPairRecords__find(player_pair_records, arg1->word_1028, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    return r0_1;
}

}  // namespace d_00756238
GUEST_EXPORT_FRAMED(0x00756238, d_00756238::call_00318e38_on_1028, 0x4010);  // pushes {r4, lr} first, as the original

// f_00756380: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether one of the player's two 0x40-byte entries (0x80 per player) has a kind of 0x21 or more; with no player,
// whether any of the four players' has.
namespace d_00756380 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x00309fbc, u32(u32, u32)> player_index_in;

u32 player_has_entry_kind_21_or_more(u32 i, u32 player, u32 r2, u32 r3) {
    u32 table = i;
    if (player == 0) {
        r2 = 0u;
    } else {
        u32 save_data = get_save_data(i, player, r2, r3);
        u32 r0_3 = player_index_in(save_data + 0xa0u, player);
        player = r0_3;
        if (r0_3 >= 4u) {
            guest::cpu()->r[1] = player;
            return 0u;
        } else {
            i = 0u;
            player = table + (player << 7);
        }
        do {
            if (*gptr<u8>(player + (i << 6) + 8u) >= 0x21u) {
                guest::cpu()->r[1] = player;
                return 1u;
            }
            i += 1u;
            guest::preempt();
        } while (s32(i) < 2);
        guest::cpu()->r[1] = player;
        return 0u;
    }
L_7563d8:;
    i = 0u;
    player = table + (r2 << 7);
L_7563e0:;
    if (*gptr<u8>(player + (i << 6) + 8u) < 0x21u) {
        i += 1u;
        if (s32(i) < 2) {
            guest::preempt();
            goto L_7563e0;
        }
        r2 += 1u;
        if (s32(r2) < 4) {
            guest::preempt();
            goto L_7563d8;
        }
        guest::cpu()->r[1] = player;
        return 0u;
    }
    guest::cpu()->r[1] = player;
    return 1u;
}

}  // namespace d_00756380
GUEST_EXPORT_FRAMED(0x00756380, d_00756380::player_has_entry_kind_21_or_more, 0x4070);  // pushes {table, r5, r6, lr} first, as the original

// f_00756758: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The index (0-7) of `entry` among eight 0x40-byte entries from `base`; -1 when it is none of them.
namespace d_00756758 {


u32 index_of_entry_40(u32 base, u32 entry) {
    if (entry == base) {
        return 0u;
    }
    if (entry == base + 0x40u) {
        return 1u;
    }
    if (entry == base + 0x80u) {
        return 2u;
    }
    if (entry == base + 0xc0u) {
        return 3u;
    }
    if (entry == base + 0x100u) {
        return 4u;
    }
    if (entry == base + 0x140u) {
        return 5u;
    }
    if (entry == base + 0x180u) {
        return 6u;
    }
    return entry == base + 0x1c0u ? 7u : ~0u;
}

}  // namespace d_00756758
GUEST_EXPORT(0x00756758, d_00756758::index_of_entry_40);

// f_007567d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The index (player * 2 + entry) of the two 0x40-byte entries of the player whose id and two names match `record`; -1
// when none.
namespace d_007567d8 {

struct __attribute__((packed)) Local_007567d8_ea_1 {
    u16 half_0;
    u8 unknown_2[0x12];  // (not used here)
    u8 byte_14;
};
GUEST_OFFSET(Local_007567d8_ea_1, half_0, 0x0);
GUEST_OFFSET(Local_007567d8_ea_1, byte_14, 0x14);

struct __attribute__((packed)) Local_007567d8_r5_1 {
    u16 half_0;
    u8 unknown_2[0x12];  // (not used here)
    u8 byte_14;
};
GUEST_OFFSET(Local_007567d8_r5_1, half_0, 0x0);
GUEST_OFFSET(Local_007567d8_r5_1, byte_14, 0x14);

inline constexpr guest::Function<0x00100d2d, u32(u32, u32, u32)> memory_compare_100d2c;
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x00309fbc, u32(u32, u32)> player_index_in;

u32 find_matching_name_pair(u32 r0, u32 r1, u32 r2) {
    u32 r6 = r1;
    u32 save_data = get_save_data(r0, r1, r2, guest::cpu()->r[3]);
    u32 r0_3 = player_index_in(save_data + 0xa0u, r2);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r8 = r0_3;
    if (!(r0_3 >= 4u)) {
        u32 i = 0u;
        u32 r7 = r0 + (r8 << 7);
        do {
            u32 r1_2 = r7 + (i << 6);
            gptr<Local_007567d8_r5_1> r5_1 = gptr<Local_007567d8_r5_1>(r1_2 + 0xcu);
            r1_1 = *gptr<u16>(r1_2 + 0x38u);
            if (r1_1 == *gptr<u16>(r6 + 0x2cu)) {
                r1_1 = *gptr<u16>(r6);
                if (r5_1->half_0 == r1_1) {
                    r1_1 = r5_1->byte_14;
                    if (r1_1 == *gptr<u8>(r6 + 0x14u)) {
                        u32 r0_5 = memory_compare_100d2c(r5_1.addr() + 2u, r6 + 2u, 0x12u);
                        r1_1 = guest::cpu()->r[1];
                        if (r0_5 == 0) {
                            gptr<Local_007567d8_ea_1> ea_1 = gptr<Local_007567d8_ea_1>(r5_1.addr() + 0x16u);
                            r1_1 = ea_1->half_0;
                            u32 r0_6 = r6 + 0x16u;
                            if (r1_1 == *gptr<u16>(r6 + 0x16u)) {
                                r1_1 = ea_1->byte_14;
                                if (r1_1 == *gptr<u8>(r0_6 + 0x14u)) {
                                    u32 r0_8 = memory_compare_100d2c(ea_1.addr() + 2u, r0_6 + 2u, 0x12u);
                                    r1_1 = guest::cpu()->r[1];
                                    if (r0_8 == 0) {
                                        return i + (r8 << 1);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            i += 1u;
            guest::preempt();
        } while (s32(i) < 2);
    }
    guest::cpu()->r[1] = r1_1;
    return ~0u;
}

}  // namespace d_007567d8
GUEST_EXPORT_FRAMED(0x007567d8, d_007567d8::find_matching_name_pair, 0x41f0);  // pushes {i, r5, r6, r7, r8, lr} first, as the original

// f_00756968: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Converts the day of the year (+8) into the day of its month (with the tables of month starts at 0x88f364 and
// 0x88f334).
namespace d_00756968 {

struct __attribute__((packed)) DayOfMonthFromDayOfYearArg0 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
};
GUEST_OFFSET(DayOfMonthFromDayOfYearArg0, byte_8, 0x8);

struct __attribute__((packed)) DayOfMonthFromDayOfYearArg1 {
    u32 word_0;
};
GUEST_OFFSET(DayOfMonthFromDayOfYearArg1, word_0, 0x0);


void day_of_month_from_day_of_year(gptr<DayOfMonthFromDayOfYearArg0> arg0, gptr<DayOfMonthFromDayOfYearArg1> arg1) {
    u32 i = arg0.addr();
    u32 r12 = arg0->byte_8;
    u32 r3 = 0x88f364u;
    i = 0u;
    u32 r2 = r12;
    do {
        if (s32(r2) < s32(gptr<u32>(r3)[i])) {
            u32 r0_1 = i & 0xffu;
            if (r0_1 >= 0xcu) {
                return;
            }
            arg1->word_0 = r12 - gptr<u32>(0x88f334u)[r0_1];
            return;
        }
        i += 1u;
        guest::preempt();
    } while (s32(i) < 0xc);
}

}  // namespace d_00756968
GUEST_EXPORT_FRAMED(0x00756968, d_00756968::day_of_month_from_day_of_year, 0x10);  // pushes {r4} first, as the original

// f_007569d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether at least one hour has passed since the stamp.
namespace d_007569d4 {

struct __attribute__((packed)) Local_007569d4_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_007569d4_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_007569d4_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_007569d4_ea_1, word_8, 0x8);

struct __attribute__((packed)) Local_007569d4_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_007569d4_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_007569d4_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_007569d4_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_007569d4_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_007569d4_ea_3, word_4, 0x4);

struct __attribute__((packed)) Now {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Now, word_0, 0x0);
GUEST_OFFSET(Now, word_4, 0x4);
GUEST_OFFSET(Now, word_8, 0x8);

struct __attribute__((packed)) Local_007569d4_r3_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_007569d4_r3_1, word_0, 0x0);
GUEST_OFFSET(Local_007569d4_r3_1, word_4, 0x4);
GUEST_OFFSET(Local_007569d4_r3_1, word_8, 0x8);

inline constexpr guest::Function<0x002fb378, u32(u32)> game_time_now;
inline constexpr guest::Function<0x002fb430, u32(u32, u32, u32, u32)> make_adjusted_words;
inline constexpr guest::Function<0x002fb4a0, u32(u32, u32, u32, u32)> words_not_less;
inline constexpr guest::Function<0x0056cc38, u32(u32, u32, u32, u32)> TimeStamp__add_hours;

struct __attribute__((packed)) HourHasPassedSinceFrame {
    u8 unknown_0[0x8];  // (not read or written by name)
    u32 word_8;
    u8 unknown_c[0x18];  // (not read or written by name)
};
GUEST_OFFSET(HourHasPassedSinceFrame, word_8, 0x8);
GUEST_SIZE(HourHasPassedSinceFrame, 0x24);

u32 hour_has_passed_since(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<HourHasPassedSinceFrame> frame;  // the original's stack frame
    u32 r2_1 = frame.at(0x14).addr();
    make_adjusted_words(r2_1, r0, r2_1, r3);
    gptr<Local_007569d4_ea_1> ea_1 = gptr<Local_007569d4_ea_1>(frame.at(0x14).addr());
    u32 r1_1 = ea_1->word_4;
    u32 r2_2 = ea_1->word_8;
    gptr<Local_007569d4_r3_1> r3_1 = gptr<Local_007569d4_r3_1>(frame.at(8).addr());
    r3_1->word_0 = ea_1->word_0;
    r3_1->word_4 = r1_1;
    r3_1->word_8 = r2_2;
    u32 r0_1 = frame.at(8).addr();
    TimeStamp__add_hours(r0_1, 1u, r2_2, r3_1.addr());
    gptr<Now> now_2 = gptr<Now>(game_time_now(r0_1));
    gptr<Local_007569d4_ea_2> ea_2 = gptr<Local_007569d4_ea_2>(frame.at(0xc).addr());
    u32 r1_2 = ea_2->word_0;
    u32 r2_3 = ea_2->word_4;
    gptr<Local_007569d4_ea_3> ea_3 = gptr<Local_007569d4_ea_3>(frame.at(0).addr());
    ea_3->word_0 = r1_2;
    ea_3->word_4 = r2_3;
    return words_not_less(now_2->word_0, now_2->word_4, now_2->word_8, frame->word_8);
}

}  // namespace d_007569d4
GUEST_EXPORT_FRAMED(0x007569d4, d_007569d4::hour_has_passed_since, 0x4000);  // pushes {lr} first, as the original

// f_00756a7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The index (0-2) of the byte (+0x56) equal to `value` (below 10), else -1.
namespace d_00756a7c {


u32 index_of_value_in_3(u32 r0, u32 r1) {
    u32 i = 0;
    if (r1 >= 0xau) {
        return 3u;
    } else {
        i = 0u;
    }
    do {
        u32 r3_1 = i & 0xffu;
        if ((r3_1 >= 3u ? ~0u : u32(*gptr<s8>(r3_1 + r0 + 0x56u))) == r1) {
            return i & 0xffu;
        }
        i += 1u;
        guest::preempt();
    } while (s32(i) < 3);
    return 3u;
}

}  // namespace d_00756a7c
GUEST_EXPORT(0x00756a7c, d_00756a7c::index_of_value_in_3);

// f_00756ad8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The stamp at +0x46 advanced by the duration +0x5a (doubled unless `single`).
namespace d_00756ad8 {

struct __attribute__((packed)) StampAfterDurationArg0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(StampAfterDurationArg0, word_0, 0x0);
GUEST_OFFSET(StampAfterDurationArg0, word_4, 0x4);
GUEST_OFFSET(StampAfterDurationArg0, word_8, 0x8);

struct __attribute__((packed)) StampAfterDurationArg1 {
    u8 unknown_0[0x5a];  // (not used here)
    u8 byte_5a;
};
GUEST_OFFSET(StampAfterDurationArg1, byte_5a, 0x5a);

struct __attribute__((packed)) Local_00756ad8_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00756ad8_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00756ad8_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_00756ad8_ea_1, word_8, 0x8);

struct __attribute__((packed)) Local_00756ad8_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00756ad8_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_00756ad8_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_00756ad8_ea_2, word_8, 0x8);

struct __attribute__((packed)) Local_00756ad8_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00756ad8_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_00756ad8_ea_3, word_4, 0x4);
GUEST_OFFSET(Local_00756ad8_ea_3, word_8, 0x8);

inline constexpr guest::Function<0x002fb430, u32(u32, u32, u32, u32)> make_adjusted_words;
inline constexpr guest::Function<0x0030a488, u32(u32, u32, u32, u32)> TimeStamp__advance;

struct __attribute__((packed)) StampAfterDurationFrame {
    u32 word_0;
    u8 unknown_4[0x1c];  // (not read or written by name)
};
GUEST_OFFSET(StampAfterDurationFrame, word_0, 0x0);
GUEST_SIZE(StampAfterDurationFrame, 0x20);

u32 stamp_after_duration(gptr<StampAfterDurationArg0> arg0, gptr<StampAfterDurationArg1> arg1, u32 r2, u32 r3) {
    guest::StackFrameOf<StampAfterDurationFrame> frame;  // the original's stack frame
    make_adjusted_words(frame.at(0x10).addr(), arg1.addr() + 0x46u, r2, r3);
    gptr<Local_00756ad8_ea_1> ea_1 = gptr<Local_00756ad8_ea_1>(frame.at(0x10).addr());
    u32 r0_2 = ea_1->word_0;
    u32 r1_2 = ea_1->word_4;
    u32 r2_1 = ea_1->word_8;
    gptr<Local_00756ad8_ea_2> ea_2 = gptr<Local_00756ad8_ea_2>(frame.at(4).addr());
    ea_2->word_0 = r0_2;
    ea_2->word_4 = r1_2;
    ea_2->word_8 = r2_1;
    u32 r3_1 = r2 == 0 ? u32(arg1->byte_5a) << 1 : u32(arg1->byte_5a);
    frame->word_0 = 0;
    TimeStamp__advance(frame.at(4).addr(), 0u, 0u, r3_1);
    gptr<Local_00756ad8_ea_3> ea_3 = gptr<Local_00756ad8_ea_3>(frame.at(4).addr());
    u32 r0_4 = ea_3->word_0;
    u32 r1_3 = ea_3->word_4;
    u32 r2_2 = ea_3->word_8;
    arg0->word_0 = r0_4;
    arg0->word_4 = r1_3;
    arg0->word_8 = r2_2;
    guest::cpu()->r[1] = r1_3;
    return r0_4;
}

}  // namespace d_00756ad8
GUEST_EXPORT_FRAMED(0x00756ad8, d_00756ad8::stamp_after_duration, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00756bd0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// How many of the three bytes at +0x56 are below 10.
namespace d_00756bd0 {


u32 count_values_below_10(u32 r0) {
    u32 r3 = r0;
    r0 = 0u;
    u32 i = r0;
    do {
        u32 r2_1 = i & 0xffu;
        if (r2_1 < 3u && u32(*gptr<s8>(r2_1 + r3 + 0x56u)) < 0xau) {
            r0 += 1u;
        }
        i += 1u;
        guest::preempt();
    } while (s32(i) < 3);
    guest::cpu()->r[1] = i;
    return r0;
}

}  // namespace d_00756bd0
GUEST_EXPORT(0x00756bd0, d_00756bd0::count_values_below_10);

// f_00756d94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The address of 22-byte entry `index` (below 3) from +8, or 0.
namespace d_00756d94 {


u32 entry_22_at(u32 r0, u32 r1) {
    if (r1 >= 3u) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    u32 r1_1 = r1 * 3u + (r1 << 3);
    guest::cpu()->r[1] = r1_1;
    return r0 + (r1_1 << 1) + 8u;
}

}  // namespace d_00756d94
GUEST_EXPORT(0x00756d94, d_00756d94::entry_22_at);

// f_00756db4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Picks one of the three 22-byte entries (from +8) that are in use and do not match `key`, at random (reservoir
// choice).
namespace d_00756db4 {

inline constexpr guest::Function<0x002ff6f4, u32(u32, u32)> random_below_entry;
inline constexpr guest::Function<0x00311a34, u32(u32, u32)> match_entry;
inline constexpr guest::Function<0x0071a0a0, u32(u32, u32, u32, u32)> halfword_is_nonzero_0071a0a0;

u32 pick_random_unmatched_entry(u32 r0, u32 r1) {
    u32 r6 = r0;
    u32 r7 = 0u;
    u32 r9 = r1;
    u32 r8 = ~0u;
    u32 i = r7;
    do {
        u32 r5_1 = r6 + (i * 3u + (i << 3) << 1);
        u32 r0_2 = halfword_is_nonzero_0071a0a0(r5_1 + 8u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0_2 != 0) {
            u32 r0_4 = match_entry(r5_1 + 8u, r9);
            r1 = guest::cpu()->r[1];
            if (r0_4 == 0) {
                r7 += 1u;
                u32 r0_5 = random_below_entry(r7, r1);
                r1 = guest::cpu()->r[1];
                if (r0_5 == 0) {
                    r8 = i;
                }
            }
        }
        i += 1u;
        guest::preempt();
    } while (s32(i) < 3);
    return r6 + (r8 * 3u + (r8 << 3) << 1) + 8u;
}

}  // namespace d_00756db4
GUEST_EXPORT_FRAMED(0x00756db4, d_00756db4::pick_random_unmatched_entry, 0x47f0);  // pushes {i, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_00756e38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether one of the three 22-byte entries (from +8) is in use and does not match `key`.
namespace d_00756e38 {

inline constexpr guest::Function<0x00311a34, u32(u32, u32)> match_entry;
inline constexpr guest::Function<0x0071a0a0, u32(u32, u32, u32, u32)> halfword_is_nonzero_0071a0a0;

u32 has_unmatched_entry(u32 r0, u32 r1) {
    u32 r6 = r0;
    u32 r7 = r1;
    u32 i = 0u;
    do {
        u32 r5_1 = r6 + (i * 3u + (i << 3) << 1);
        u32 r0_2 = halfword_is_nonzero_0071a0a0(r5_1 + 8u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0_2 != 0) {
            u32 r0_4 = match_entry(r5_1 + 8u, r7);
            r1 = guest::cpu()->r[1];
            if (r0_4 == 0) {
                return 1u;
            }
        }
        i += 1u;
        guest::preempt();
    } while (s32(i) < 3);
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_00756e38
GUEST_EXPORT_FRAMED(0x00756e38, d_00756e38::has_unmatched_entry, 0x41f0);  // pushes {i, r5, r6, r7, r8, lr} first, as the original

// f_00757084: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// 0, 1 or 2 for kinds 0x14, 0x15, 0x16 (+8); 3 for any other.
namespace d_00757084 {

struct __attribute__((packed)) Kind14To16IndexArg0 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
};
GUEST_OFFSET(Kind14To16IndexArg0, byte_8, 0x8);


u32 kind_14_to_16_index(gptr<Kind14To16IndexArg0> arg0) {
    u32 r0_1 = arg0->byte_8;
    if (r0_1 == 0x14u) {
        return 0u;
    }
    if (r0_1 == 0x15u) {
        return 1u;
    }
    return r0_1 == 0x16u ? 2u : 3u;
}

}  // namespace d_00757084
GUEST_EXPORT(0x00757084, d_00757084::kind_14_to_16_index);

// f_00757160: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The personality (0-7) of the villager whose id is at +0x22; 8 when there is none.
namespace d_00757160 {

struct __attribute__((packed)) VillagerPersonalityOfRecordArg0 {
    u8 unknown_0[0x22];  // (not used here)
    u16 half_22;
};
GUEST_OFFSET(VillagerPersonalityOfRecordArg0, half_22, 0x22);

inline constexpr u32 item_list_400_address = 0x00a83af0u;
inline guest::global<u32, 0x00a83af0> item_list_400;

u32 villager_personality_of_record(gptr<VillagerPersonalityOfRecordArg0> record) {
    u32 id = record->half_22;
    u32 r1_1 = *item_list_400;
    u32 zf_1 = r1_1 == 0;
    u32 cf_1 = r1_1 >= 0u;
    if (!zf_1) {
        zf_1 = 0x18fu == id;
        cf_1 = 0x18fu >= id;
    }
    if (!cf_1 || zf_1) {
        guest::cpu()->r[1] = r1_1;
        return 8u;
    }
    u32 r0_2 = r1_1 + id * 0x22u;
    if (r0_2 != 0) {
        u32 r0_3 = u32(*gptr<u8>(r0_2 + 0x1cu)) >> 4;
        guest::cpu()->r[1] = r1_1;
        return r0_3;
    }
    guest::cpu()->r[1] = r1_1;
    return 8u;
}

}  // namespace d_00757160
GUEST_EXPORT(0x00757160, d_00757160::villager_personality_of_record);

// f_007571a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies entry `index` (name and id) of the record when it is in use (6 entries for kinds 0x14-0x16, else 4); true
// when it did.
namespace d_007571a0 {

struct __attribute__((packed)) Local_007571a0_r4_1 {
    u8 unknown_0[0x3a];  // (not used here)
    u16 half_3a;
};
GUEST_OFFSET(Local_007571a0_r4_1, half_3a, 0x3a);

inline constexpr guest::Function<0x0030f52c, u32(u32, u32)> copy_22_bytes;

u32 SavedRecordInner__entry(gptr<SavedRecordInner> saved_record_inner, u32 r1, u32 r2, u32 r3) {
    u32 r0 = saved_record_inner.addr();
    u32 r12 = r1;
    u32 value = saved_record_inner->value;
    u32 r5 = r2;
    if (value == 0x14u || value == 0x15u) {
        r1 = 6u;
        goto L_7571c8;
    }
    if (value == 0x16u) {
        r1 = 6u;
    } else {
        r1 = 4u;
    }
L_7571c8:;
    if (s32(r1) > s32(r3)) {
        gptr<Local_007571a0_r4_1> r4_1 = gptr<Local_007571a0_r4_1>(r0 + r3 * 0x18u);
        if ((u32(r4_1->half_3a) - 0xffffu) != 0) {
            copy_22_bytes(r12, r4_1.addr() + 0x24u);
            *gptr<u16>(r5) = r4_1->half_3a;
            return 1u;
        }
    }
    return 0u;
}

}  // namespace d_007571a0
GUEST_EXPORT_FRAMED(0x007571a0, d_007571a0::SavedRecordInner__entry, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_007573c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether one of the six entries matches the villager (+0x1028): same id, name and value.
namespace d_007573c0 {

struct __attribute__((packed)) HasEntryForVillagerArg1 {
    u8 unknown_0[0x1028];  // (not used here)
    u32 word_1028;
};
GUEST_OFFSET(HasEntryForVillagerArg1, word_1028, 0x1028);

struct __attribute__((packed)) Local_007573c0_ea_2 {
    u16 half_0;
    u8 unknown_2[0x12];  // (not used here)
    u8 byte_14;
    u8 unknown_15[0x1];  // (not used here)
    u16 half_16;
};
GUEST_OFFSET(Local_007573c0_ea_2, half_0, 0x0);
GUEST_OFFSET(Local_007573c0_ea_2, byte_14, 0x14);
GUEST_OFFSET(Local_007573c0_ea_2, half_16, 0x16);

struct __attribute__((packed)) Local_007573c0_r5_1 {
    u16 half_0;
    u8 unknown_2[0x12];  // (not used here)
    u8 byte_14;
    u8 unknown_15[0x17];  // (not used here)
    u16 half_2c;
};
GUEST_OFFSET(Local_007573c0_r5_1, half_0, 0x0);
GUEST_OFFSET(Local_007573c0_r5_1, byte_14, 0x14);
GUEST_OFFSET(Local_007573c0_r5_1, half_2c, 0x2c);

inline constexpr guest::Function<0x00100d2d, u32(u32, u32, u32)> memory_compare_100d2c;
inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> is_villager_record;

u32 has_entry_for_villager(u32 r0, gptr<HasEntryForVillagerArg1> arg1, u32 r2) {
    u32 r1 = arg1.addr();
    u32 r7 = r1 + 0x1000u;
    u32 r8 = r0;
    u32 r0_1 = arg1->word_1028;
    if (r0_1 != 0) {
        u32 is_villager = is_villager_record(r0_1, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (is_villager != 0) {
            u32 i = 0u;
            do {
                gptr<Local_007573c0_r5_1> r5_1 = gptr<Local_007573c0_r5_1>(*gptr<u32>(r7 + 0x28u));
                u32 r0_3 = r5_1->half_0;
                gptr<Local_007573c0_ea_2> ea_2 = gptr<Local_007573c0_ea_2>(r8 + i * 0x18u + 0x24u);
                r1 = ea_2->half_0;
                if (r0_3 == r1) {
                    r1 = r5_1->byte_14;
                    if (r1 == ea_2->byte_14) {
                        u32 r0_5 = memory_compare_100d2c(r5_1.addr() + 2u, ea_2.addr() + 2u, 0x12u);
                        r1 = guest::cpu()->r[1];
                        if (r0_5 == 0) {
                            r1 = ea_2->half_16;
                            if (r5_1->half_2c == r1) {
                                guest::cpu()->r[1] = r1;
                                return 1u;
                            }
                        }
                    }
                }
                i += 1u;
                guest::preempt();
            } while (s32(i) < 6);
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_007573c0
GUEST_EXPORT_FRAMED(0x007573c0, d_007573c0::has_entry_for_villager, 0x41f0);  // pushes {i, r5, r6, r7, r8, lr} first, as the original

// f_00757948: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// 0 when bit 2 of +0x75 is set, else 1 or 2 by bit 0.
namespace d_00757948 {

struct __attribute__((packed)) Flags75KindArg0 {
    u8 unknown_0[0x75];  // (not used here)
    u8 byte_75;
};
GUEST_OFFSET(Flags75KindArg0, byte_75, 0x75);


u32 flags_75_kind(gptr<Flags75KindArg0> arg0) {
    u32 r0_1 = arg0->byte_75;
    if ((r0_1 & 4u) != 0) {
        return 0u;
    }
    return (r0_1 & 1u) == 0 ? 1u : 2u;
}

}  // namespace d_00757948
GUEST_EXPORT(0x00757948, d_00757948::flags_75_kind);

// f_00757968: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// 0 when bit 2 of +0x75 is set, 1 with bit 5, 2 with bit 3, else 0.
namespace d_00757968 {

struct __attribute__((packed)) Flags75Kind2Arg0 {
    u8 unknown_0[0x75];  // (not used here)
    u8 byte_75;
};
GUEST_OFFSET(Flags75Kind2Arg0, byte_75, 0x75);


u32 flags_75_kind_2(gptr<Flags75Kind2Arg0> arg0) {
    u32 r0_1 = arg0->byte_75;
    if ((r0_1 & 4u) != 0) {
        return 0u;
    }
    if ((r0_1 & 0x20u) != 0) {
        return 1u;
    }
    u32 r0_2 = r0_1 & 8u;
    if (r0_2 != 0) {
        r0_2 = 2u;
    }
    return r0_2;
}

}  // namespace d_00757968
GUEST_EXPORT(0x00757968, d_00757968::flags_75_kind_2);

// f_00757b34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The position (x, z) of the record (+0xc, +0x10) put on the surface below it.
namespace d_00757b34 {

struct __attribute__((packed)) PositionOnSurfaceArg1 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(PositionOnSurfaceArg1, word_c, 0xc);
GUEST_OFFSET(PositionOnSurfaceArg1, word_10, 0x10);

inline constexpr guest::Function<0x006c6640, u32(u32, u32)> surface_height_at_2;

u32 position_on_surface(gptr<Float3> position, gptr<PositionOnSurfaceArg1> record) {
    u32 r2_1 = record->word_10;
    float S0_1 = 0.0f;
    position->v[0] = std::bit_cast<float>(u32(record->word_c));
    position->v[1] = S0_1;
    position->v[2] = std::bit_cast<float>(u32(r2_1));
    guest::cpu()->s[0] = S0_1;
    u32 surface_height_2 = surface_height_at_2(position.addr(), 0u);
    float S0_2 = guest::cpu()->s[0];
    position->v[1] = S0_2;
    guest::cpu()->s[0] = S0_2;
    return surface_height_2;
}

}  // namespace d_00757b34
GUEST_EXPORT_FRAMED(0x00757b34, d_00757b34::position_on_surface, 0x4010);  // pushes {r4, lr} first, as the original

// f_00757b6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The cell (x, z) under the object's position (+0xc, +0x10) at the surface height.
namespace d_00757b6c {

struct __attribute__((packed)) CellUnderObjectArg0 {
    u8 unknown_0[0xc];  // (not used here)
    float float_c;
    float float_10;
};
GUEST_OFFSET(CellUnderObjectArg0, float_c, 0xc);
GUEST_OFFSET(CellUnderObjectArg0, float_10, 0x10);

inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32)> position_to_cell;
inline constexpr guest::Function<0x006c6640, u32(u32, u32, u32, u32)> surface_height_at_2;

struct __attribute__((packed)) CellUnderObjectFrame {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(CellUnderObjectFrame, float_0, 0x0);
GUEST_OFFSET(CellUnderObjectFrame, float_4, 0x4);
GUEST_OFFSET(CellUnderObjectFrame, float_8, 0x8);
GUEST_SIZE(CellUnderObjectFrame, 0xc);

u32 cell_under_object(gptr<CellUnderObjectArg0> arg0, u32 r1, u32 r2) {
    guest::StackFrameOf<CellUnderObjectFrame> frame;  // the original's stack frame
    float S0_1 = arg0->float_c;
    float S2_1 = arg0->float_10;
    float S1_1 = 0.0f;
    frame->float_0 = S0_1;
    frame->float_4 = S1_1;
    frame->float_8 = S2_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    surface_height_at_2(frame.at(0).addr(), 0u, r2, arg0.addr());
    float S0_2 = guest::cpu()->s[0];
    frame->float_4 = S0_2;
    guest::cpu()->s[0] = S0_2;
    return position_to_cell(r1, r2, frame.at(0).addr());
}

}  // namespace d_00757b6c
GUEST_EXPORT_FRAMED(0x00757b6c, d_00757b6c::cell_under_object, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00757bc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the town part (+0x80) passes both checks.
namespace d_00757bc4 {

inline constexpr guest::Function<0x00757cc0, u32(u32)> TownPart__has_version_2;
inline constexpr guest::Function<0x00757cd8, u32(u32)> ItemRecord__is_kind_9e;

u32 SaveData__town_part_is_valid(u32 save_data) {
    u32 r0_2 = TownPart__has_version_2(save_data + 0x80u);
    if (r0_2 == 0) {
        return r0_2;
    }
    u32 r0_4 = ItemRecord__is_kind_9e(save_data + 0x80u);
    if (r0_4 != 0) {
        r0_4 = 1u;
    }
    return r0_4;
}

}  // namespace d_00757bc4
GUEST_EXPORT_FRAMED(0x00757bc4, d_00757bc4::SaveData__town_part_is_valid, 0x4010);  // pushes {r4, lr} first, as the original

// f_00757c1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Recomputes the checksums of the town part (+0x80) and of the part at +0x71900.
namespace d_00757c1c {

inline constexpr guest::Function<0x0070ef54, u32(u32, u32)> MailData__seal;
inline constexpr guest::Function<0x00757f08, u32(u32, u32, u32, u32)> TownPart__seal;

u32 SaveData__update_checksums(u32 save_data) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    TownPart__seal(save_data + 0x80u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    frame.release();
    return MailData__seal(save_data + 0x71900u, guest::cpu()->r[1]);
}

}  // namespace d_00757c1c
GUEST_EXPORT(0x00757c1c, d_00757c1c::SaveData__update_checksums);

// f_00757c3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the checksums of the town part (+0x80) and of the part at +0x71900 are valid.
namespace d_00757c3c {

inline constexpr guest::Function<0x0070efa0, u32(u32, u32)> MailData__is_sealed;
inline constexpr guest::Function<0x00757f78, u32(u32, u32, u32, u32)> TownPart__is_sealed;

u32 SaveData__checksums_are_valid(u32 save_data, u32 r1) {
    u32 r0_2 = TownPart__is_sealed(save_data + 0x80u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_2 != 0) {
        r0_2 = MailData__is_sealed(save_data + 0x71900u, r1);
        if (r0_2 != 0) {
            r0_2 = 1u;
        }
    }
    return r0_2;
}

}  // namespace d_00757c3c
GUEST_EXPORT_FRAMED(0x00757c3c, d_00757c3c::SaveData__checksums_are_valid, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00757c74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The number of days between a date (at midnight) and a time.
namespace d_00757c74 {

inline constexpr guest::Function<0x002fd4b4, u32(u32, u32, u32)> days_between;
inline constexpr guest::Function<0x0056ca68, u32(u32, u32, u32, u32)> make_time;

struct __attribute__((packed)) DaysSinceDateFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x10];  // (not read or written by name)
};
GUEST_OFFSET(DaysSinceDateFrame, word_0, 0x0);
GUEST_OFFSET(DaysSinceDateFrame, word_4, 0x4);
GUEST_OFFSET(DaysSinceDateFrame, word_8, 0x8);
GUEST_SIZE(DaysSinceDateFrame, 0x1c);

u32 days_since_date(gptr<Date> date, u32 time, u32 r2) {
    guest::StackFrameOf<DaysSinceDateFrame> frame;  // the original's stack frame
    frame->word_0 = 0;
    frame->word_4 = 0;
    frame->word_8 = 0;
    u32 day = date->day;
    u32 month = date->month;
    u32 year = date->year;
    make_time(frame.at(0xc).addr(), year, month, day);
    return days_between(time, frame.at(0xc).addr(), r2);
}

}  // namespace d_00757c74
GUEST_EXPORT_FRAMED(0x00757c74, d_00757c74::days_since_date, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00757cc0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether byte +6 of the town part is 2.
namespace d_00757cc0 {

struct __attribute__((packed)) TownPart {
    u8 unknown_0[0x6];  // (not used here)
    u8 byte_6;
};
GUEST_OFFSET(TownPart, byte_6, 0x6);


u32 TownPart__has_version_2(gptr<TownPart> town_part) {
    return town_part->byte_6 == 2u;
}

}  // namespace d_00757cc0
GUEST_EXPORT(0x00757cc0, d_00757cc0::TownPart__has_version_2);

// f_00757f08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Recomputes every checksum of the town part: header, players, villagers, map section and the rest, and the CRC-32 at
// +0x533a4.
namespace d_00757f08 {

inline constexpr guest::Function<0x00119859, u32(u32)> refresh_crc;
inline constexpr guest::Function<0x003193e8, u32(u32, u32, u32, u32)> crc32;
inline constexpr guest::Function<0x0071a2b0, u32(u32)> seal_players;
inline constexpr guest::Function<0x0071d9c4, u32(u32)> Block28f4__seal;
inline constexpr guest::Function<0x0071fe48, u32(u32)> Block7f4__seal;
inline constexpr guest::Function<0x00757cfc, u32(u32, u32, u32, u32)> seal_tiny_block;
inline constexpr guest::Function<0x00759298, u32(u32)> SaveSection__update_checksum;

u32 TownPart__seal(u32 town_part, u32 r1, u32 r2, u32 r3) {
    seal_tiny_block(town_part, r1, r2, r3);
    seal_players(town_part + 0x20u);
    refresh_crc(town_part + 0x29220u);
    SaveSection__update_checksum(town_part + 0x4be00u);
    Block28f4__seal(town_part + 0x502bcu);
    Block7f4__seal(town_part + 0x52bb0u);
    u32 r3_5 = ~0u;
    u32 crc = crc32(town_part + 0x533a8u, 0x1e4d8u, r3_5, r3_5);
    *gptr<u32>(town_part + 0x533a4u) = crc;
    guest::cpu()->r[1] = 0x533a4u;
    return crc;
}

}  // namespace d_00757f08
GUEST_EXPORT_FRAMED(0x00757f08, d_00757f08::TownPart__seal, 0x4010);  // pushes {r4, lr} first, as the original

// f_00757f78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether every checksum of the town part is valid and its mode and speed nibbles (+0x6214e) agree.
namespace d_00757f78 {

struct __attribute__((packed)) TownPart {
    u8 unknown_0[0x533a4];  // (not used here)
    u32 word_533a4;
    u8 unknown_533a8[0xeda6];  // (not used here)
    u8 byte_6214e;
};
GUEST_OFFSET(TownPart, word_533a4, 0x533a4);
GUEST_OFFSET(TownPart, byte_6214e, 0x6214e);

inline constexpr guest::Function<0x00119875, u32(u32, u32)> crc_matches;
inline constexpr guest::Function<0x00301484, u32(u32, u32)> mode_95721c_index;
inline constexpr guest::Function<0x003193e8, u32(u32, u32, u32, u32)> crc32;
inline constexpr guest::Function<0x005d4788, u32(u32)> speed_for_index;
inline constexpr guest::Function<0x0071a310, u32(u32, u32)> Players__are_sealed;
inline constexpr guest::Function<0x0071d9e8, u32(u32, u32)> Block28f4__is_sealed;
inline constexpr guest::Function<0x0071fe68, u32(u32, u32)> Block7f4__is_sealed;
inline constexpr guest::Function<0x00757d20, u32(u32, u32, u32, u32)> tiny_block_is_sealed;
inline constexpr guest::Function<0x007592c0, u32(u32, u32)> SaveSection__checksum_is_valid;

u32 TownPart__is_sealed(gptr<TownPart> town_part, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = tiny_block_is_sealed(town_part.addr(), r1, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        r0_1 = Players__are_sealed(town_part.addr() + 0x20u, r1);
        r1_1 = guest::cpu()->r[1];
        if (r0_1 != 0) {
            r0_1 = crc_matches(town_part.addr() + 0x29220u, r1);
            r1_1 = guest::cpu()->r[1];
            if (r0_1 != 0) {
                r0_1 = SaveSection__checksum_is_valid(town_part.addr() + 0x4be00u, r1);
                r1_1 = guest::cpu()->r[1];
                if (r0_1 != 0) {
                    r0_1 = Block28f4__is_sealed(town_part.addr() + 0x502bcu, r1_1);
                    r1_1 = guest::cpu()->r[1];
                    if (r0_1 != 0) {
                        r0_1 = Block7f4__is_sealed(town_part.addr() + 0x52bb0u, r1_1);
                        r1_1 = guest::cpu()->r[1];
                        if (r0_1 != 0) {
                            u32 r0_7 = town_part->byte_6214e;
                            u32 r0_8 = mode_95721c_index(r0_7, r1_1);
                            r1_1 = guest::cpu()->r[1];
                            if ((r0_7 >> 4) == r0_8) {
                                u32 r5_2 = town_part.addr() + 0x62000u;
                                u32 speed = speed_for_index(u32(town_part->byte_6214e) & 0xfu);
                                r1_1 = town_part->byte_6214e;
                                if (speed == r1_1 >> 4) {
                                    u32 r3_7 = ~0u;
                                    u32 crc = crc32(town_part.addr() + 0x533a8u, 0x1e4d8u, r3_7, r3_7);
                                    r1_1 = town_part->word_533a4;
                                    if (r1_1 == crc) {
                                        guest::cpu()->r[1] = r1_1;
                                        return 1u;
                                    }
                                }
                            }
                            r0_1 = 0u;
                        }
                    }
                }
            }
        }
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_00757f78
GUEST_EXPORT_FRAMED(0x00757f78, d_00757f78::TownPart__is_sealed, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00758070: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The letter when its sender kind (+0x30) is 2 or 4 (a villager), else 0.
namespace d_00758070 {

struct __attribute__((packed)) Letter {
    u8 unknown_0[0x30];  // (not used here)
    u8 byte_30;
};
GUEST_OFFSET(Letter, byte_30, 0x30);


u32 Letter__if_from_villager(gptr<Letter> letter) {
    u32 r2_1 = letter->byte_30;
    u32 r1_1 = 0u;
    if (r2_1 == 2u || r2_1 == 4u) {
        r1_1 = letter.addr();
    }
    guest::cpu()->r[1] = r1_1;
    return r1_1;
}

}  // namespace d_00758070
GUEST_EXPORT(0x00758070, d_00758070::Letter__if_from_villager);

// f_0075808c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the sender kind (+0x30) is 2 or 4 (a villager).
namespace d_0075808c {

struct __attribute__((packed)) Letter {
    u8 unknown_0[0x30];  // (not used here)
    u8 byte_30;
};
GUEST_OFFSET(Letter, byte_30, 0x30);


u32 Letter__is_from_villager(gptr<Letter> letter) {
    u32 r0_1 = letter->byte_30;
    return r0_1 == 2u || r0_1 == 4u;
}

}  // namespace d_0075808c
GUEST_EXPORT(0x0075808c, d_0075808c::Letter__is_from_villager);

// f_007580b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the kind bits (+0x270) are 3.
namespace d_007580b8 {

struct __attribute__((packed)) Letter {
    u8 unknown_0[0x270];  // (not used here)
    u8 byte_270;
};
GUEST_OFFSET(Letter, byte_270, 0x270);


u32 Letter__kind_is_3(gptr<Letter> letter) {
    return (u32(letter->byte_270) & 7u) == 3u;
}

}  // namespace d_007580b8
GUEST_EXPORT(0x007580b8, d_007580b8::Letter__kind_is_3);

// f_007580d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The letter when its sender kind (+0x30) is 1, 3 or 6 (a player), else 0.
namespace d_007580d0 {

struct __attribute__((packed)) Letter {
    u8 unknown_0[0x30];  // (not used here)
    u8 byte_30;
};
GUEST_OFFSET(Letter, byte_30, 0x30);


u32 Letter__if_from_player(gptr<Letter> letter) {
    u32 r2_1 = letter->byte_30;
    u32 r1_1 = 0u;
    if (r2_1 == 1u || r2_1 == 3u || r2_1 == 6u) {
        r1_1 = letter.addr();
    }
    guest::cpu()->r[1] = r1_1;
    return r1_1;
}

}  // namespace d_007580d0
GUEST_EXPORT(0x007580d0, d_007580d0::Letter__if_from_player);

// f_00758118: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Bits 3-4 of +0x270.
namespace d_00758118 {

struct __attribute__((packed)) Letter {
    u8 unknown_0[0x270];  // (not used here)
    u8 byte_270;
};
GUEST_OFFSET(Letter, byte_270, 0x270);


u32 Letter__bits_3_to_4(gptr<Letter> letter) {
    return u32(letter->byte_270) >> 3u & 3u;
}

}  // namespace d_00758118
GUEST_EXPORT(0x00758118, d_00758118::Letter__bits_3_to_4);

// f_00758128: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the letter's town (the villager's or the player's) differs from this town (save +0x621b8).
namespace d_00758128 {

struct __attribute__((packed)) Letter {
    u16 half_0;
    u8 unknown_2[0x12];  // (not used here)
    u8 byte_14;
    u8 unknown_15[0x1b];  // (not used here)
    u8 byte_30;
};
GUEST_OFFSET(Letter, half_0, 0x0);
GUEST_OFFSET(Letter, byte_14, 0x14);
GUEST_OFFSET(Letter, byte_30, 0x30);

struct __attribute__((packed)) Local_00758128_r0_2 {
    u16 half_0;
    u8 unknown_2[0x12];  // (not used here)
    u8 byte_14;
};
GUEST_OFFSET(Local_00758128_r0_2, half_0, 0x0);
GUEST_OFFSET(Local_00758128_r0_2, byte_14, 0x14);

struct __attribute__((packed)) Local_00758128_r4_1 {
    u16 half_0;
    u8 unknown_2[0x12];  // (not used here)
    u8 byte_14;
};
GUEST_OFFSET(Local_00758128_r4_1, half_0, 0x0);
GUEST_OFFSET(Local_00758128_r4_1, byte_14, 0x14);

inline constexpr guest::Function<0x00100d2d, u32(u32, u32, u32)> memory_compare_100d2c;
inline constexpr guest::Function<0x002fb328, u32(u32)> get_save_data;

u32 Letter__is_from_another_town(gptr<Letter> letter) {
    u32 r1_2 = 0;
    u32 save_data = get_save_data(letter.addr());
    u32 r1_1 = letter->byte_30;
    gptr<Local_00758128_r0_2> r0_2 = gptr<Local_00758128_r0_2>(save_data + 0x621b8u);
    if (r1_1 != 1u && r1_1 != 3u && r1_1 != 6u) {
        if (r1_1 != 2u && r1_1 != 4u) {
            guest::cpu()->r[1] = r1_1;
            return 0u;
        }
        r1_2 = r0_2->half_0;
        if (r1_2 != letter->half_0) {
            guest::cpu()->r[1] = r1_2;
            return 1u;
        }
        r1_2 = r0_2->byte_14;
        if (r1_2 != letter->byte_14) {
            guest::cpu()->r[1] = r1_2;
            return 1u;
        }
        u32 r0_4 = memory_compare_100d2c(r0_2.addr() + 2u, letter.addr() + 2u, 0x12u);
        r1_2 = guest::cpu()->r[1];
        return r0_4 != 0;
    }
    r1_2 = r0_2->half_0;
    gptr<Local_00758128_r4_1> r4_1 = gptr<Local_00758128_r4_1>(letter.addr() + 0x16u);
    if (r1_2 == r4_1->half_0) {
        r1_2 = r0_2->byte_14;
        if (r1_2 == r4_1->byte_14) {
            u32 r0_6 = memory_compare_100d2c(r0_2.addr() + 2u, r4_1.addr() + 2u, 0x12u);
            r1_2 = guest::cpu()->r[1];
            if (r0_6 == 0) {
                return 0u;
            }
        }
    }
    guest::cpu()->r[1] = r1_2;
    return 1u;
}

}  // namespace d_00758128
GUEST_EXPORT_FRAMED(0x00758128, d_00758128::Letter__is_from_another_town, 0x4010);  // pushes {r4, lr} first, as the original

// f_007581ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the sender kind (+0x30) is 1 or 3.
namespace d_007581ec {

struct __attribute__((packed)) Letter {
    u8 unknown_0[0x30];  // (not used here)
    u8 byte_30;
};
GUEST_OFFSET(Letter, byte_30, 0x30);


u32 Letter__is_from_player_1_or_3(gptr<Letter> letter) {
    u32 r0_1 = letter->byte_30;
    return r0_1 == 1u || r0_1 == 3u;
}

}  // namespace d_007581ec
GUEST_EXPORT(0x007581ec, d_007581ec::Letter__is_from_player_1_or_3);

// f_007586b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the talk's words for the villager's items.
namespace d_007586b4 {

struct __attribute__((packed)) Villager {
    u8 unknown_0[0x62];  // (not used here)
    u16 half_62;
    u8 byte_64;
};
GUEST_OFFSET(Villager, half_62, 0x62);
GUEST_OFFSET(Villager, byte_64, 0x64);

inline constexpr guest::Function<0x007588ec, u32(u32, u32, u32, u32)> script__WordFix_24u___WordFix;
inline constexpr guest::Function<0x00758bac, u32(u32, u32, u32, u32)> Villager__first_named_item;

struct __attribute__((packed)) VillagerDescribeItemsFrame {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(VillagerDescribeItemsFrame, word_0, 0x0);
GUEST_OFFSET(VillagerDescribeItemsFrame, word_4, 0x4);
GUEST_SIZE(VillagerDescribeItemsFrame, 0xc);

u32 Villager__describe_items(gptr<Villager> villager, u32 r1_unused, u32 i, u32 r3) {
    guest::StackFrameOf<VillagerDescribeItemsFrame> frame;  // the original's stack frame
    u32 r0 = villager.addr();
    u32 r8 = 0;
    u32 r4 = r0;
    frame->word_0 = Villager__first_named_item(r0, 0u, i, r3);
    u32 r5 = 1u;
    u32 r7 = villager->byte_64 == 7u ? 1u : 0u;
    r0 = r4 + 0x34u;
    u32 r6 = villager->half_62 == 0 ? 1u : 0u;
    i = r5;
    r3 = r5 + u32(s32(r4 + 0x64u - r0) >> 1);
    do {
        u32 r1_1 = *gptr<u16>(r0);
        if (r1_1 == 0) {
            break;
        }
        if (r1_1 == 0xau) {
            r5 = 0u;
            break;
        }
        i += 1u;
        r0 += 2u;
        guest::preempt();
    } while (s32(r3) > s32(i));
    frame->word_4 = script__WordFix_24u___WordFix(r4 + 0x34u, frame.at(8).addr(), i, r3);
    u32 r0_4 = *gptr<u8>(r4 + 0x270u);
    if ((r0_4 & 7u) == 1u) {
        r8 = (r0_4 >> 6u & 1u) == 0;
    } else {
        r8 = 0u;
    }
    r3 = 0xff20u;
    u32 r9 = *gptr<u8>(r4 + 0x271u) == 0x1bu ? 1u : 0u;
    r0 = r4 + 0x68u;
    i = 1u;
    u32 r10 = *gptr<u8>(r4 + 0x272u) == 0 ? 1u : 0u;
    u32 r12 = i;
    u32 r11 = i + u32(s32(r4 + 0xaau - r0) >> 1);
L_7587a4:;
    u32 r1_3 = *gptr<u16>(r0);
    if (r1_3 != 0) {
        if (r1_3 == 0x40u || r1_3 == r3) {
            i = 0u;
        } else {
            r12 += 1u;
            r0 += 2u;
            if (s32(r11) > s32(r12)) {
                guest::preempt();
                goto L_7587a4;
            }
        }
    }
    r0 = r4 + 0xaau;
    r12 = 1u;
    u32 r14 = 1u;
    r11 = u32(s32(r4 + 0x22cu - r0) >> 1) + 1u;
L_7587f0:;
    u32 r1_4 = *gptr<u16>(r0);
    if (r1_4 != 0) {
        if (r1_4 == 0x40u || r1_4 == r3) {
            i = 0u;
        } else {
            r12 += 1u;
            r0 += 2u;
            if (s32(r11) > s32(r12)) {
                guest::preempt();
                goto L_7587f0;
            }
        }
    }
    r0 = r4 + 0x22cu;
    r12 = r14;
    r11 = 1u;
    r14 += u32(s32(r4 + 0x26eu - r0) >> 1);
L_75883c:;
    u32 r1_5 = *gptr<u16>(r0);
    if (r1_5 != 0) {
        if (r1_5 == 0x40u || r1_5 == r3) {
            i = 0u;
        } else {
            r11 += 1u;
            r0 += 2u;
            if (s32(r14) > s32(r11)) {
                guest::preempt();
                goto L_75883c;
            }
        }
    }
    r0 = r4 + 0x22cu;
    r3 = 1u;
    u32 j = r3;
    r4 = r12 + u32(s32(r4 + 0x26eu - r0) >> 1);
    do {
        u32 r12_1 = *gptr<u16>(r0);
        if (r12_1 == 0) {
            break;
        }
        if (r12_1 == 0xau) {
            r3 = 0u;
            break;
        }
        j += 1u;
        r0 += 2u;
        guest::preempt();
    } while (s32(r4) > s32(j));
    u32 r1_6 = frame->word_0 & r7 & r6 & r5;
    u32 r0_5 = frame->word_4 & r1_6 & r8 & r9 & r10 & i & r3;
    guest::cpu()->r[1] = r1_6;
    return r0_5;
}

}  // namespace d_007586b4
GUEST_EXPORT_FRAMED(0x007586b4, d_007586b4::Villager__describe_items, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_007588ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007588ec {

struct __attribute__((packed)) Local_007588ec_r0_3 {
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
};
GUEST_OFFSET(Local_007588ec_r0_3, word_18, 0x18);
GUEST_OFFSET(Local_007588ec_r0_3, word_1c, 0x1c);
GUEST_OFFSET(Local_007588ec_r0_3, word_20, 0x20);
GUEST_OFFSET(Local_007588ec_r0_3, word_24, 0x24);
GUEST_OFFSET(Local_007588ec_r0_3, word_28, 0x28);
GUEST_OFFSET(Local_007588ec_r0_3, word_2c, 0x2c);
GUEST_OFFSET(Local_007588ec_r0_3, word_30, 0x30);
GUEST_OFFSET(Local_007588ec_r0_3, word_34, 0x34);
GUEST_OFFSET(Local_007588ec_r0_3, word_38, 0x38);
GUEST_OFFSET(Local_007588ec_r0_3, word_3c, 0x3c);
GUEST_OFFSET(Local_007588ec_r0_3, word_40, 0x40);
GUEST_OFFSET(Local_007588ec_r0_3, word_44, 0x44);

inline constexpr u32 vtable_script__WordFix_24u_ = 0x00909d90u;
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> script__construct_word_ptr;
inline constexpr guest::Function<0x005e9fdc, u32(u32)> TextBox__measure;
inline constexpr guest::Function<0x005f4bfc, u32(u32)> construct_script_word;
inline constexpr guest::Function<0x007589dc, u32(u32, u32, u32, u32)> script__WordFix_9u___WordFix_007589dc;

struct __attribute__((packed)) ScriptWordFix24uWordFixFrame {
    u32 word_0;
    u8 unknown_4[0x44];  // (not read or written by name)
};
GUEST_OFFSET(ScriptWordFix24uWordFixFrame, word_0, 0x0);
GUEST_SIZE(ScriptWordFix24uWordFixFrame, 0x48);

u32 script__WordFix_24u___WordFix(u32 r0, u32 r1, u32 r2_unused, u32 r3, float S0) {
    guest::StackFrameOf<ScriptWordFix24uWordFixFrame> frame;  // the original's stack frame
    u32 res_1 = 0;
    u32 r3_3 = 0;
    u32 r6 = r0;
    u32 r5 = r1;
    u32 r0_1 = frame.at(0).addr();
    script__construct_word_ptr(r0_1, frame.at(0x18).addr(), 0x18u, r3);
    u32 r4 = vtable_script__WordFix_24u_;
    *gptr<u32>(r0_1) = r4;
    u32 r0_2 = r0_1 + 0xcu;
    construct_script_word(r0_2);
    S0 = guest::cpu()->s[0];
    gptr<Local_007588ec_r0_3> r0_3 = gptr<Local_007588ec_r0_3>(r0_2 - 0xcu);
    r0_3->word_18 = 0;
    r0_3->word_1c = 0;
    r0_3->word_20 = 0;
    r0_3->word_24 = 0;
    r0_3->word_28 = 0;
    r0_3->word_2c = 0;
    r0_3->word_30 = 0;
    r0_3->word_34 = 0;
    r0_3->word_38 = 0;
    r0_3->word_3c = 0;
    r0_3->word_40 = 0;
    u32 r2 = 0x8906ecu;
    r0_3->word_44 = 0;
    r0 = r0_3.addr() + 0x16u;
    r1 = 0xcu;
    do {
        u32 r3_2 = *gptr<u16>(r2);
        res_1 = r1 - 1u;
        r1 = res_1;
        *gptr<u16>(r0 + 2u) = u16(r3_2);
        r3_3 = *gptr<u16>(r2);
        u32 ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r3_3);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    guest::cpu()->s[0] = S0;
    script__WordFix_9u___WordFix_007589dc(r6, frame.at(0).addr(), r2, r3_3);
    TextBox__measure(frame.at(0).addr());
    float S0_3 = guest::cpu()->s[0];
    *gptr<u32>(r5) = std::bit_cast<u32>(S0_3);
    frame->word_0 = r4;
    return s32(std::bit_cast<u32>(S0_3)) <= s32(0x42c00000u);
}

}  // namespace d_007588ec
GUEST_EXPORT_FRAMED(0x007588ec, d_007588ec::script__WordFix_24u___WordFix, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00758bac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The villager's first item with a name, demoted to its plain kind.
namespace d_00758bac {

struct __attribute__((packed)) Villager {
    u8 unknown_0[0xa8];  // (not used here)
    u16 half_a8;
    u8 unknown_aa[0x180];  // (not used here)
    u16 half_22a;
    u8 unknown_22c[0x40];  // (not used here)
    u16 half_26c;
    u8 byte_26e;
    u8 unknown_26f[0x2];  // (not used here)
    u8 byte_271;
};
GUEST_OFFSET(Villager, half_a8, 0xa8);
GUEST_OFFSET(Villager, half_22a, 0x22a);
GUEST_OFFSET(Villager, half_26c, 0x26c);
GUEST_OFFSET(Villager, byte_26e, 0x26e);
GUEST_OFFSET(Villager, byte_271, 0x271);

inline constexpr guest::Function<0x002fc934, u32(u32, u32)> Item__copy_b;
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32)> Item__is_empty;
inline constexpr guest::Function<0x0030b6b8, u32(u32)> Item__number;
inline constexpr guest::Function<0x006b9b30, u32(u32, u32)> item_number_in_category;
inline constexpr guest::Function<0x006baa64, u32(u32)> demote_kind_2_item;

struct __attribute__((packed)) VillagerFirstNamedItemFrame {
    u32 word_0;
};
GUEST_OFFSET(VillagerFirstNamedItemFrame, word_0, 0x0);
GUEST_SIZE(VillagerFirstNamedItemFrame, 0x4);

u32 Villager__first_named_item(gptr<Villager> villager, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<VillagerFirstNamedItemFrame> frame;  // the original's stack frame
    u32 r0 = villager.addr();
    u32 r4_1 = 0;
    frame->word_0 = r3;
    u32 r4 = r0;
    u32 r0_1 = villager->byte_26e;
    u32 r8 = !(r0_1 >= 0x20u) || r0_1 == 0x20u;
    u32 r9 = villager->byte_271 >= 0x23u ? 0u : 1u;
    u32 r6 = villager->half_a8 == 0 ? villager->half_22a == 0 && villager->half_26c == 0 : 0u;
    u32 r5 = 1u;
    r0 = r4 + 0x68u;
    r3 = r5;
    u32 i = r5;
    u32 r12 = r5 + u32(s32(r4 + 0xaau - r0) >> 1);
    do {
        u32 r2_1 = *gptr<u16>(r0);
        if (r2_1 == 0xeu || r2_1 == 0xfu) {
            r5 = 0u;
            break;
        }
        i += 1u;
        r0 += 2u;
        guest::preempt();
    } while (s32(r12) > s32(i));
    r0 = r4 + 0xaau;
    i = 1u;
    r12 = r3 + u32(s32(r4 + 0x22cu - r0) >> 1);
    do {
        u32 r2_2 = *gptr<u16>(r0);
        if (r2_2 == 0xeu || r2_2 == 0xfu) {
            r5 = 0u;
            break;
        }
        i += 1u;
        r0 += 2u;
        guest::preempt();
    } while (s32(r12) > s32(i));
    r0 = r4 + 0x22cu;
    i = 1u;
    r3 += u32(s32(r4 + 0x26eu - r0) >> 1);
    do {
        u32 r2_3 = *gptr<u16>(r0);
        if (r2_3 == 0xeu || r2_3 == 0xfu) {
            r5 = 0u;
            break;
        }
        i += 1u;
        r0 += 2u;
        guest::preempt();
    } while (s32(r3) > s32(i));
    u32 r1_1 = *gptr<u8>(r4 + 0x26fu);
    u32 r0_3 = item_number_in_category((u32(*gptr<u8>(r4 + 0x270u)) >> 5u & 1u) == 0 ? 0x29u : 0x2au, r1_1);
    u32 r7_1 = !(r0_3 - 0x7ffeu == 0);
    u32 is_empty = Item__is_empty(r4 + 0x274u, r0_3 - 0x7ffeu);
    u32 r1_3 = guest::cpu()->r[1];
    if (is_empty != 0) {
        r4_1 = 1u;
    } else {
        Item__copy_b(frame.at(0).addr(), r4 + 0x274u);
        demote_kind_2_item(frame.at(0).addr());
        u32 number = Item__number(frame.at(0).addr());
        r1_3 = 0x172au;
        u32 r0_10 = number - 0x2000u;
        r4_1 = !(r0_10 >= r1_3) || r0_10 == r1_3;
    }
    guest::cpu()->r[1] = r1_3;
    return r8 & r9 & r6 & r5 & r7_1 & r4_1;
}

}  // namespace d_00758bac
GUEST_EXPORT_FRAMED(0x00758bac, d_00758bac::Villager__first_named_item, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_00758d74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a script word pointing at the object's 193-character text at 0xaa (arg 1).
namespace d_00758d74 {

inline constexpr u32 vtable_script__WordCPtrSv = 0x00908b9cu;
inline constexpr guest::Function<0x005fdf68, u32(u32, u32, u32)> script__WordCPtr__WordCPtr_005fdf68;

void script__WordCPtrSv__WordCPtrSv_00758d74(gptr<script__WordCPtrSv> word_c_ptr_sv, u32 r1) {
    script__WordCPtr__WordCPtr_005fdf68(word_c_ptr_sv.addr(), r1 + 0xaau, 0xc1u);
    word_c_ptr_sv->vtable = vtable_script__WordCPtrSv;
    guest::cpu()->r[1] = vtable_script__WordCPtrSv;
}

}  // namespace d_00758d74
GUEST_EXPORT_FRAMED(0x00758d74, d_00758d74::script__WordCPtrSv__WordCPtrSv_00758d74, 0x4010);  // pushes {r4, lr} first, as the original

// f_00758d94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a script word pointing at the object's 33-character text at 0x22c (arg 1).
namespace d_00758d94 {

inline constexpr u32 vtable_script__WordCPtrSv = 0x00908b9cu;
inline constexpr guest::Function<0x005fdf68, u32(u32, u32, u32)> script__WordCPtr__WordCPtr_005fdf68;

void script__WordCPtrSv__WordCPtrSv_00758d94(gptr<script__WordCPtrSv> word_c_ptr_sv, u32 r1) {
    script__WordCPtr__WordCPtr_005fdf68(word_c_ptr_sv.addr(), r1 + 0x22cu, 0x21u);
    word_c_ptr_sv->vtable = vtable_script__WordCPtrSv;
    guest::cpu()->r[1] = vtable_script__WordCPtrSv;
}

}  // namespace d_00758d94
GUEST_EXPORT_FRAMED(0x00758d94, d_00758d94::script__WordCPtrSv__WordCPtrSv_00758d94, 0x4010);  // pushes {r4, lr} first, as the original

// f_00758db4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a script word pointing at the object's 33-character text at 0x68 (arg 1).
namespace d_00758db4 {

inline constexpr u32 vtable_script__WordCPtrSv = 0x00908b9cu;
inline constexpr guest::Function<0x005fdf68, u32(u32, u32, u32)> script__WordCPtr__WordCPtr_005fdf68;

void script__WordCPtrSv__WordCPtrSv_00758db4(gptr<script__WordCPtrSv> word_c_ptr_sv, u32 r1) {
    script__WordCPtr__WordCPtr_005fdf68(word_c_ptr_sv.addr(), r1 + 0x68u, 0x21u);
    word_c_ptr_sv->vtable = vtable_script__WordCPtrSv;
    guest::cpu()->r[1] = vtable_script__WordCPtrSv;
}

}  // namespace d_00758db4
GUEST_EXPORT_FRAMED(0x00758db4, d_00758db4::script__WordCPtrSv__WordCPtrSv_00758db4, 0x4010);  // pushes {r4, lr} first, as the original

// f_00758de0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Jumps to script__WordFix_9u___WordFix_007589dc.
namespace d_00758de0 {

inline constexpr guest::Function<0x007589dc, u32(u32, u32, u32, u32)> script__WordFix_9u___WordFix_007589dc;

void script__WordFix_9u___WordFix_007589dc_veneer() {
    script__WordFix_9u___WordFix_007589dc(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00758de0
GUEST_EXPORT(0x00758de0, d_00758de0::script__WordFix_9u___WordFix_007589dc_veneer);

// f_00759190: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether every entry of the 56 and 2 slots (save +0x4be00) is valid (no unknown structure kinds).
namespace d_00759190 {

inline constexpr guest::Function<0x003026e8, u32(u32)> low_byte_of_id;
inline constexpr guest::Function<0x005ca398, u32(u32)> byte_88b84a;
inline constexpr guest::Function<0x00718364, u32(u32, u32, u32, u32)> halfword_at_most_fc;
inline constexpr guest::Function<0x00718378, u32(u32)> halfword_is_fc_or_more;

u32 SlotList56__all_entries_valid(u32 slot_list56) {
    u32 r5 = slot_list56 + 0x4be00u;
    u32 i = 0u;
    do {
        u32 r6_1 = r5 + (i << 2);
        slot_list56 = halfword_at_most_fc(r6_1 + 8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        if (slot_list56 != 0) {
            if (halfword_is_fc_or_more(r6_1 + 8u) != 0) {
                goto L_759204;
            }
            u32 low_byte = low_byte_of_id(i >= 0x38u ? r5 + 8u : r6_1 + 8u);
            u32 r0_6 = byte_88b84a(low_byte);
            if (r0_6 == 0 || r0_6 == 0xa5u) {
                goto L_759204;
            }
            slot_list56 = 0u;
        }
        return slot_list56;
L_759204:;
        i += 1u;
        if (i >= 0x38u) {
            i = 0u;
            do {
                slot_list56 = halfword_at_most_fc(r5 + (i << 2) + 0xe8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                if (slot_list56 == 0) {
                    return slot_list56;
                }
                i += 1u;
                guest::preempt();
            } while (i < 2u);
            return 1u;
        }
        guest::preempt();
    } while (1);
}

}  // namespace d_00759190
GUEST_EXPORT_FRAMED(0x00759190, d_00759190::SlotList56__all_entries_valid, 0x4070);  // pushes {i, r5, r6, lr} first, as the original

// f_00759328: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Computes the time (from now, or from the day start when `from_day_start`) and passes it to 007593ec.
namespace d_00759328 {

struct __attribute__((packed)) Local_00759328_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00759328_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00759328_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_00759328_ea_1, word_8, 0x8);

struct __attribute__((packed)) Now {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Now, word_0, 0x0);
GUEST_OFFSET(Now, word_4, 0x4);
GUEST_OFFSET(Now, word_8, 0x8);

struct __attribute__((packed)) Local_00759328_r3_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00759328_r3_1, word_0, 0x0);
GUEST_OFFSET(Local_00759328_r3_1, word_4, 0x4);

struct __attribute__((packed)) Local_00759328_r3_5 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00759328_r3_5, word_0, 0x0);
GUEST_OFFSET(Local_00759328_r3_5, word_4, 0x4);
GUEST_OFFSET(Local_00759328_r3_5, word_8, 0x8);

inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> game_time_now;
inline constexpr guest::Function<0x002fb430, u32(u32, u32)> make_adjusted_words;
inline constexpr guest::Function<0x003081b4, u32(u32, u32)> copy_8_bytes;
inline constexpr guest::Function<0x00308efc, u32(u32, u32, u32, u32)> TimeStamp__move_to_day_start;
inline constexpr guest::Function<0x0056be20, u32(u32, u32, u32, u32)> TimeStamp__nanoseconds_since_origin;
inline constexpr guest::Function<0x007593ec, u32(u32, u32, u32, u32)> schedule_at_time;
inline constexpr guest::Function<0x00759664, u32(u32)> GameTime__nanoseconds_or_earliest;
inline constexpr guest::Function<0x007795ac, u32(u32, u32)> store_constants_7795ac;

struct __attribute__((packed)) ScheduleAfterTimeFrame {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x8];  // (not read or written by name)
    u32 word_10;
    u8 unknown_14[0x28];  // (not read or written by name)
};
GUEST_OFFSET(ScheduleAfterTimeFrame, word_0, 0x0);
GUEST_OFFSET(ScheduleAfterTimeFrame, word_4, 0x4);
GUEST_OFFSET(ScheduleAfterTimeFrame, word_10, 0x10);
GUEST_SIZE(ScheduleAfterTimeFrame, 0x3c);

u32 schedule_after_time(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<ScheduleAfterTimeFrame> frame;  // the original's stack frame
    gptr<Now> now_2 = gptr<Now>(game_time_now(r0, r1, r2, r3));
    u32 r1_1 = now_2->word_0;
    u32 r2_1 = now_2->word_4;
    gptr<Local_00759328_r3_1> r3_1 = gptr<Local_00759328_r3_1>(frame.at(8).addr());
    u32 r4_1 = frame.at(0x18).addr();
    frame->word_10 = now_2->word_8;
    r3_1->word_0 = r1_1;
    r3_1->word_4 = r2_1;
    u32 r0_3 = TimeStamp__nanoseconds_since_origin(frame.at(8).addr(), r1_1, r2_1, r3_1.addr());
    u32 r1_2 = guest::cpu()->r[1];
    frame->word_0 = r0_3;
    frame->word_4 = r1_2;
    store_constants_7795ac(r4_1, r1_2);
    copy_8_bytes(r4_1, frame.at(0).addr());
    if (r1 != 0) {
        u32 r4_2 = frame.at(0x18).addr();
        make_adjusted_words(frame.at(0x2c).addr(), r4_2);
        gptr<Local_00759328_ea_1> ea_1 = gptr<Local_00759328_ea_1>(frame.at(0x2c).addr());
        u32 r1_5 = ea_1->word_4;
        u32 r2_5 = ea_1->word_8;
        gptr<Local_00759328_r3_5> r3_5 = gptr<Local_00759328_r3_5>(frame.at(0x20).addr());
        r3_5->word_0 = ea_1->word_0;
        r3_5->word_4 = r1_5;
        r3_5->word_8 = r2_5;
        TimeStamp__move_to_day_start(frame.at(0x20).addr(), r1_5, r2_5, r3_5.addr());
        u32 r0_7 = TimeStamp__nanoseconds_since_origin(frame.at(0x20).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r1_7 = guest::cpu()->r[1];
        frame->word_0 = r0_7;
        frame->word_4 = r1_7;
        store_constants_7795ac(r4_2, r1_7);
        copy_8_bytes(r4_2, frame.at(0).addr());
    }
    u32 r0_9 = GameTime__nanoseconds_or_earliest(frame.at(0x18).addr());
    u32 r1_9 = guest::cpu()->r[1];
    frame->word_0 = r1;
    frame->word_4 = r2;
    return schedule_at_time(r0, r1_9, r0_9, r1_9);
}

}  // namespace d_00759328
GUEST_EXPORT_FRAMED(0x00759328, d_00759328::schedule_after_time, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_007593ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Schedules at a 64-bit time measured from the day start (with the day count since then).
namespace d_007593ec {

struct __attribute__((packed)) Local_007593ec_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_007593ec_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_007593ec_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_007593ec_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_007593ec_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_007593ec_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_007593ec_ea_2, word_8, 0x8);

struct __attribute__((packed)) Local_007593ec_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_007593ec_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_007593ec_ea_3, word_4, 0x4);

struct __attribute__((packed)) Local_007593ec_ea_4 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_007593ec_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_007593ec_ea_4, word_4, 0x4);
GUEST_OFFSET(Local_007593ec_ea_4, word_8, 0x8);

struct __attribute__((packed)) Local_007593ec_ea_5 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_007593ec_ea_5, word_0, 0x0);
GUEST_OFFSET(Local_007593ec_ea_5, word_4, 0x4);

struct __attribute__((packed)) Local_007593ec_ea_6 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_007593ec_ea_6, word_0, 0x0);
GUEST_OFFSET(Local_007593ec_ea_6, word_4, 0x4);
GUEST_OFFSET(Local_007593ec_ea_6, word_8, 0x8);

struct __attribute__((packed)) Local_007593ec_ea_7 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_007593ec_ea_7, word_0, 0x0);
GUEST_OFFSET(Local_007593ec_ea_7, word_4, 0x4);
GUEST_OFFSET(Local_007593ec_ea_7, word_8, 0x8);

struct __attribute__((packed)) Local_007593ec_ea_8 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_007593ec_ea_8, word_0, 0x0);
GUEST_OFFSET(Local_007593ec_ea_8, word_4, 0x4);
GUEST_OFFSET(Local_007593ec_ea_8, word_8, 0x8);

struct __attribute__((packed)) Local_007593ec_r1_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_007593ec_r1_1, word_0, 0x0);
GUEST_OFFSET(Local_007593ec_r1_1, word_4, 0x4);

struct __attribute__((packed)) Local_007593ec_r1_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_007593ec_r1_4, word_0, 0x0);
GUEST_OFFSET(Local_007593ec_r1_4, word_4, 0x4);

struct __attribute__((packed)) Local_007593ec_r3_11 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_007593ec_r3_11, word_0, 0x0);
GUEST_OFFSET(Local_007593ec_r3_11, word_4, 0x4);
GUEST_OFFSET(Local_007593ec_r3_11, word_8, 0x8);

struct __attribute__((packed)) Local_007593ec_r3_16 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_007593ec_r3_16, word_0, 0x0);
GUEST_OFFSET(Local_007593ec_r3_16, word_4, 0x4);
GUEST_OFFSET(Local_007593ec_r3_16, word_8, 0x8);

struct __attribute__((packed)) Local_007593ec_r3_6 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_007593ec_r3_6, word_0, 0x0);
GUEST_OFFSET(Local_007593ec_r3_6, word_4, 0x4);
GUEST_OFFSET(Local_007593ec_r3_6, word_8, 0x8);

struct __attribute__((packed)) Local_007593ec_r4_5 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_007593ec_r4_5, word_0, 0x0);
GUEST_OFFSET(Local_007593ec_r4_5, word_4, 0x4);
GUEST_OFFSET(Local_007593ec_r4_5, word_8, 0x8);

inline constexpr guest::Function<0x002fb430, u32(u32, u32, u32, u32)> make_adjusted_words;
inline constexpr guest::Function<0x002fd4b4, u32(u32, u32, u32)> days_between;
inline constexpr guest::Function<0x003081b4, u32(u32, u32)> copy_8_bytes;
inline constexpr guest::Function<0x00308efc, u32(u32, u32, u32, u32)> TimeStamp__move_to_day_start;
inline constexpr guest::Function<0x0056be20, u32(u32)> TimeStamp__nanoseconds_since_origin;
inline constexpr guest::Function<0x0056c258, u32(u32, u32, u32, u32)> time_stamp_from_nanoseconds;
inline constexpr guest::Function<0x00759664, u32(u32, u32, u32, u32)> GameTime__nanoseconds_or_earliest;
inline constexpr guest::Function<0x007795ac, u32(u32, u32)> store_constants_7795ac;

struct __attribute__((packed)) ScheduleAtTimeFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x3c];  // (not read or written by name)
};
GUEST_OFFSET(ScheduleAtTimeFrame, word_0, 0x0);
GUEST_OFFSET(ScheduleAtTimeFrame, word_4, 0x4);
GUEST_OFFSET(ScheduleAtTimeFrame, word_8, 0x8);
GUEST_SIZE(ScheduleAtTimeFrame, 0x48);

u32 schedule_at_time(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<ScheduleAtTimeFrame> frame;  // the original's stack frame
    u32 r2_18 = 0;
    u32 r1_18 = 0;
    u32 r0_13 = 0;
    gptr<Local_007593ec_r1_1> r1_1 = gptr<Local_007593ec_r1_1>(frame.at(0x60).addr());
    u32 r7_1 = r1_1->word_4;
    if (r1_1->word_0 != 0) {
        u32 r4_1 = frame.at(0x28).addr();
        u32 r0_1 = GameTime__nanoseconds_or_earliest(r0, r1_1.addr(), r2, r3);
        u32 r1_2 = guest::cpu()->r[1];
        gptr<Local_007593ec_ea_1> ea_1 = gptr<Local_007593ec_ea_1>(frame.at(0x10).addr());
        ea_1->word_0 = r0_1;
        ea_1->word_4 = r1_2;
        store_constants_7795ac(r4_1, r1_2);
        copy_8_bytes(r4_1, frame.at(0x10).addr());
        gptr<Local_007593ec_r1_4> r1_4 = gptr<Local_007593ec_r1_4>(frame.at(0x10).addr());
        u32 r4_2 = frame.at(0x30).addr();
        r1_4->word_0 = r2;
        r1_4->word_4 = r3;
        store_constants_7795ac(r4_2, r1_4.addr());
        copy_8_bytes(r4_2, frame.at(0x10).addr());
        u32 r4_3 = frame.at(0x28).addr();
        make_adjusted_words(frame.at(0x38).addr(), r4_3, guest::cpu()->r[2], guest::cpu()->r[3]);
        gptr<Local_007593ec_ea_2> ea_2 = gptr<Local_007593ec_ea_2>(frame.at(0x38).addr());
        u32 r1_6 = ea_2->word_4;
        u32 r2_6 = ea_2->word_8;
        gptr<Local_007593ec_r3_6> r3_6 = gptr<Local_007593ec_r3_6>(frame.at(0x10).addr());
        r3_6->word_0 = ea_2->word_0;
        r3_6->word_4 = r1_6;
        r3_6->word_8 = r2_6;
        TimeStamp__move_to_day_start(frame.at(0x10).addr(), r1_6, r2_6, r3_6.addr());
        u32 r0_5 = TimeStamp__nanoseconds_since_origin(frame.at(0x10).addr());
        u32 r1_8 = guest::cpu()->r[1];
        gptr<Local_007593ec_ea_3> ea_3 = gptr<Local_007593ec_ea_3>(frame.at(0x38).addr());
        ea_3->word_0 = r0_5;
        ea_3->word_4 = r1_8;
        store_constants_7795ac(r4_3, r1_8);
        copy_8_bytes(r4_3, frame.at(0x38).addr());
        u32 r4_4 = frame.at(0x30).addr();
        make_adjusted_words(frame.at(0x38).addr(), r4_4, guest::cpu()->r[2], guest::cpu()->r[3]);
        gptr<Local_007593ec_ea_4> ea_4 = gptr<Local_007593ec_ea_4>(frame.at(0x38).addr());
        u32 r1_10 = ea_4->word_4;
        u32 r2_11 = ea_4->word_8;
        gptr<Local_007593ec_r3_11> r3_11 = gptr<Local_007593ec_r3_11>(frame.at(0x10).addr());
        r3_11->word_0 = ea_4->word_0;
        r3_11->word_4 = r1_10;
        r3_11->word_8 = r2_11;
        TimeStamp__move_to_day_start(frame.at(0x10).addr(), r1_10, r2_11, r3_11.addr());
        u32 r0_9 = TimeStamp__nanoseconds_since_origin(frame.at(0x10).addr());
        u32 r1_12 = guest::cpu()->r[1];
        gptr<Local_007593ec_ea_5> ea_5 = gptr<Local_007593ec_ea_5>(frame.at(0x38).addr());
        ea_5->word_0 = r0_9;
        ea_5->word_4 = r1_12;
        store_constants_7795ac(r4_4, r1_12);
        copy_8_bytes(r4_4, frame.at(0x38).addr());
        make_adjusted_words(frame.at(0x38).addr(), frame.at(0x28).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
        gptr<Local_007593ec_ea_6> ea_6 = gptr<Local_007593ec_ea_6>(frame.at(0x38).addr());
        u32 r1_15 = ea_6->word_4;
        u32 r2_16 = ea_6->word_8;
        gptr<Local_007593ec_r3_16> r3_16 = gptr<Local_007593ec_r3_16>(frame.at(4).addr());
        r3_16->word_0 = ea_6->word_0;
        r3_16->word_4 = r1_15;
        r3_16->word_8 = r2_16;
        make_adjusted_words(frame.at(0x10).addr(), frame.at(0x30).addr(), r2_16, r3_16.addr());
        gptr<Local_007593ec_ea_7> ea_7 = gptr<Local_007593ec_ea_7>(frame.at(0x10).addr());
        u32 r0_12 = ea_7->word_0;
        u32 r1_17 = ea_7->word_4;
        u32 r2_17 = ea_7->word_8;
        gptr<Local_007593ec_ea_8> ea_8 = gptr<Local_007593ec_ea_8>(frame.at(0x1c).addr());
        ea_8->word_0 = r0_12;
        ea_8->word_4 = r1_17;
        ea_8->word_8 = r2_17;
        r2_18 = r7_1;
        r1_18 = frame.at(4).addr();
        r0_13 = frame.at(0x1c).addr();
    } else {
        time_stamp_from_nanoseconds(frame.at(0x18).addr(), r1_1.addr(), r2, r3);
        make_adjusted_words(frame.at(0xc).addr(), r0, guest::cpu()->r[2], guest::cpu()->r[3]);
        gptr<Local_007593ec_r4_5> r4_5 = gptr<Local_007593ec_r4_5>(frame.at(0xc).addr());
        u32 r1_19 = r4_5->word_4;
        u32 r2_20 = r4_5->word_8;
        frame->word_0 = r4_5->word_0;
        frame->word_4 = r1_19;
        frame->word_8 = r2_20;
        r2_18 = r7_1;
        r1_18 = frame.at(0).addr();
        r0_13 = frame.at(0x18).addr();
    }
    return days_between(r0_13, r1_18, r2_18);
}

}  // namespace d_007593ec
GUEST_EXPORT_FRAMED(0x007593ec, d_007593ec::schedule_at_time, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_007596ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Checks the stamp (as adjusted words) through 0074fff8 with an option.
namespace d_007596ac {

struct __attribute__((packed)) Local_007596ac_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_007596ac_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_007596ac_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_007596ac_ea_1, word_8, 0x8);

inline constexpr guest::Function<0x002fb430, u32(u32, u32, u32, u32)> make_adjusted_words;
inline constexpr guest::Function<0x0074fff8, u32(u32, u32)> TimeStamp__is_after_now;

struct __attribute__((packed)) CheckStampTimeFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0xc];  // (not read or written by name)
};
GUEST_OFFSET(CheckStampTimeFrame, word_0, 0x0);
GUEST_OFFSET(CheckStampTimeFrame, word_4, 0x4);
GUEST_OFFSET(CheckStampTimeFrame, word_8, 0x8);
GUEST_SIZE(CheckStampTimeFrame, 0x18);

u32 check_stamp_time(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<CheckStampTimeFrame> frame;  // the original's stack frame
    make_adjusted_words(frame.at(0xc).addr(), r0, r2, r3);
    gptr<Local_007596ac_ea_1> ea_1 = gptr<Local_007596ac_ea_1>(frame.at(0xc).addr());
    u32 r1_1 = ea_1->word_4;
    u32 r2_1 = ea_1->word_8;
    frame->word_0 = ea_1->word_0;
    frame->word_4 = r1_1;
    frame->word_8 = r2_1;
    return TimeStamp__is_after_now(frame.at(0).addr(), r1);
}

}  // namespace d_007596ac
GUEST_EXPORT_FRAMED(0x007596ac, d_007596ac::check_stamp_time, 0x4010);  // pushes {r4, lr} first, as the original

// f_007598fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether +0x10 is at least 2.
namespace d_007598fc {

struct __attribute__((packed)) Byte10AtLeast2Arg0 {
    u8 unknown_0[0x10];  // (not used here)
    u8 byte_10;
};
GUEST_OFFSET(Byte10AtLeast2Arg0, byte_10, 0x10);


u32 byte_10_at_least_2(gptr<Byte10AtLeast2Arg0> arg0) {
    return arg0->byte_10 >= 2u;
}

}  // namespace d_007598fc
GUEST_EXPORT(0x007598fc, d_007598fc::byte_10_at_least_2);

// f_00759910: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the four flag bytes at +0xc are all clear.
namespace d_00759910 {

struct __attribute__((packed)) FourFlagsAllClearArg0 {
    u8 unknown_0[0xc];  // (not used here)
    u8 byte_c;
    u8 byte_d;
    u8 byte_e;
    u8 byte_f;
};
GUEST_OFFSET(FourFlagsAllClearArg0, byte_c, 0xc);
GUEST_OFFSET(FourFlagsAllClearArg0, byte_d, 0xd);
GUEST_OFFSET(FourFlagsAllClearArg0, byte_e, 0xe);
GUEST_OFFSET(FourFlagsAllClearArg0, byte_f, 0xf);


u32 four_flags_all_clear(gptr<FourFlagsAllClearArg0> arg0) {
    u32 r1_1 = 0u;
    if (arg0->byte_c != 0) {
        r1_1 = 1u;
    }
    if (arg0->byte_d != 0) {
        r1_1 += 1u;
    }
    if (arg0->byte_e != 0) {
        r1_1 += 1u;
    }
    if (arg0->byte_f != 0) {
        r1_1 += 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return r1_1 == 0;
}

}  // namespace d_00759910
GUEST_EXPORT(0x00759910, d_00759910::four_flags_all_clear);

// f_00759a20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the flag bytes +0xc, +0xe, +0x10 and +0x12 are all clear.
namespace d_00759a20 {

struct __attribute__((packed)) FlagsCE1012AllClearArg0 {
    u8 unknown_0[0xc];  // (not used here)
    u8 byte_c;
    u8 unknown_d[0x1];  // (not used here)
    u8 byte_e;
    u8 unknown_f[0x1];  // (not used here)
    u8 byte_10;
    u8 unknown_11[0x1];  // (not used here)
    u8 byte_12;
};
GUEST_OFFSET(FlagsCE1012AllClearArg0, byte_c, 0xc);
GUEST_OFFSET(FlagsCE1012AllClearArg0, byte_e, 0xe);
GUEST_OFFSET(FlagsCE1012AllClearArg0, byte_10, 0x10);
GUEST_OFFSET(FlagsCE1012AllClearArg0, byte_12, 0x12);


u32 flags_c_e_10_12_all_clear(gptr<FlagsCE1012AllClearArg0> arg0) {
    u32 r1_1 = arg0->byte_c;
    u32 zf_1 = r1_1 == 0;
    if (zf_1) {
        r1_1 = arg0->byte_e;
        zf_1 = r1_1 == 0;
    }
    if (!zf_1) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r1_2 = arg0->byte_10;
    if (r1_2 == 0 && arg0->byte_12 == 0) {
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    guest::cpu()->r[1] = r1_2;
    return 0u;
}

}  // namespace d_00759a20
GUEST_EXPORT(0x00759a20, d_00759a20::flags_c_e_10_12_all_clear);

// f_00759a54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// A position from x and z packed as 16-bit quarter units, at the ground's height there.
namespace d_00759a54 {

struct __attribute__((packed)) PackedXz {
    u16 half_0;
    u16 half_2;
};
GUEST_OFFSET(PackedXz, half_0, 0x0);
GUEST_OFFSET(PackedXz, half_2, 0x2);

inline constexpr guest::Function<0x006c5c60, u32(u32, u32, u32, u32)> ground_height_at;

u32 position_from_packed_xz(gptr<Float3> position, gptr<PackedXz> packed_xz, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r2_1 = packed_xz->half_2;
    float S0_1 = 0.25f;
    *frame.at<u16>(0) = u16(r2_1);
    u32 r2_2 = sxth(r2_1);
    u32 r1_1 = packed_xz->half_0;
    *frame.at<u16>(0) = u16(r1_1);
    float z = float(s32(r2_2)) * S0_1;
    float x = float(s32(sxth(r1_1))) * S0_1;
    float S1_1 = 0.0f;
    position->v[0] = x;
    position->v[1] = S1_1;
    position->v[2] = z;
    guest::cpu()->s[0] = x;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = z;
    u32 ground_height = ground_height_at(position.addr(), 0u, r2_2, r3);
    float y = guest::cpu()->s[0];
    position->v[1] = y;
    guest::cpu()->s[0] = y;
    return ground_height;
}

}  // namespace d_00759a54
GUEST_EXPORT_FRAMED(0x00759a54, d_00759a54::position_from_packed_xz, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00759ab0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The world position of a pair of 16-bit coordinates in quarter units (x, z), on the ground.
namespace d_00759ab0 {

struct __attribute__((packed)) Coordinates {
    u16 half_0;
    u16 half_2;
};
GUEST_OFFSET(Coordinates, half_0, 0x0);
GUEST_OFFSET(Coordinates, half_2, 0x2);

inline constexpr guest::Function<0x006c7868, u32(u32, u32)> ground_height_at_position_by_tile;

u32 position_of_quarter_cell(gptr<Float3> position, gptr<Coordinates> coordinates, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r2_1 = coordinates->half_2;
    float S0_1 = 0.25f;
    *frame.at<u16>(0) = u16(r2_1);
    u32 r1_1 = coordinates->half_0;
    *frame.at<u16>(0) = u16(r1_1);
    float S2_1 = float(s32(sxth(r2_1))) * S0_1;
    float S0_2 = float(s32(sxth(r1_1))) * S0_1;
    float S1_1 = 0.0f;
    position->v[0] = S0_2;
    position->v[1] = S1_1;
    position->v[2] = S2_1;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    u32 r0_1 = ground_height_at_position_by_tile(position.addr(), 0u);
    float S0_3 = guest::cpu()->s[0];
    position->v[1] = S0_3;
    guest::cpu()->s[0] = S0_3;
    return r0_1;
}

}  // namespace d_00759ab0
GUEST_EXPORT_FRAMED(0x00759ab0, d_00759ab0::position_of_quarter_cell, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00759ba8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the cursor (+0x94) is at the last entry (count +0x90) or past it.
namespace d_00759ba8 {

struct __attribute__((packed)) ListObject {
    u8 unknown_0[0x90];  // (not used here)
    u32 word_90;
    u32 word_94;
};
GUEST_OFFSET(ListObject, word_90, 0x90);
GUEST_OFFSET(ListObject, word_94, 0x94);


u32 List__at_last(gptr<ListObject> list_object) {
    u32 r1_1 = list_object->word_90;
    u32 r0_1 = s32(list_object->word_94) >= s32(r1_1 - 1u);
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_00759ba8
GUEST_EXPORT(0x00759ba8, d_00759ba8::List__at_last);

// f_00759bc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the cursor (+0x94) is at the first entry or before it.
namespace d_00759bc4 {

struct __attribute__((packed)) ListObject {
    u8 unknown_0[0x94];  // (not used here)
    u32 word_94;
};
GUEST_OFFSET(ListObject, word_94, 0x94);


u32 List__at_first(gptr<ListObject> list_object) {
    return s32(list_object->word_94) <= 0;
}

}  // namespace d_00759bc4
GUEST_EXPORT(0x00759bc4, d_00759bc4::List__at_first);

// f_00759bd8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The word resource 2 of the dialog-button group (-1 when none).
namespace d_00759bd8 {

inline constexpr u32 word_resources_address = 0x0095debcu;
inline guest::global<u32, 0x0095debc> word_resources;
inline constexpr guest::Function<0x0075c158, u32(u32, u32, u32, u32)> MessageArchive__message_with_count;

struct __attribute__((packed)) DialogButtonWord2Frame {
    u32 word_0;
};
GUEST_OFFSET(DialogButtonWord2Frame, word_0, 0x0);
GUEST_SIZE(DialogButtonWord2Frame, 0x4);

u32 dialog_button_word_2(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<DialogButtonWord2Frame> frame;  // the original's stack frame
    frame->word_0 = r3;
    frame->word_0 = ~0u;
    MessageArchive__message_with_count(*word_resources, frame.at(0).addr(), 0x890c6cu, 2u);
    return frame->word_0;
}

}  // namespace d_00759bd8
GUEST_EXPORT_FRAMED(0x00759bd8, d_00759bd8::dialog_button_word_2, 0x4000);  // pushes {lr} first, as the original

// f_00759c0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The word resource 1 of the dialog-button group (-1 when none).
namespace d_00759c0c {

inline constexpr u32 word_resources_address = 0x0095debcu;
inline guest::global<u32, 0x0095debc> word_resources;
inline constexpr guest::Function<0x0075c158, u32(u32, u32, u32, u32)> MessageArchive__message_with_count;

struct __attribute__((packed)) DialogButtonWord1Frame {
    u32 word_0;
};
GUEST_OFFSET(DialogButtonWord1Frame, word_0, 0x0);
GUEST_SIZE(DialogButtonWord1Frame, 0x4);

u32 dialog_button_word_1(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<DialogButtonWord1Frame> frame;  // the original's stack frame
    frame->word_0 = r3;
    frame->word_0 = ~0u;
    MessageArchive__message_with_count(*word_resources, frame.at(0).addr(), 0x890c6cu, 1u);
    return frame->word_0;
}

}  // namespace d_00759c0c
GUEST_EXPORT_FRAMED(0x00759c0c, d_00759c0c::dialog_button_word_1, 0x4000);  // pushes {lr} first, as the original

// f_00759c40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The word resource of dialog button `index` (below 3; ids at +0x98) of the dialog-button group, -1 when none.
namespace d_00759c40 {

inline constexpr u32 word_resources_address = 0x0095debcu;
inline guest::global<u32, 0x0095debc> word_resources;
inline constexpr guest::Function<0x0075c158, u32(u32, u32, u32, u32)> MessageArchive__message_with_count;

struct __attribute__((packed)) DialogButtonWordFrame {
    u32 word_0;
};
GUEST_OFFSET(DialogButtonWordFrame, word_0, 0x0);
GUEST_SIZE(DialogButtonWordFrame, 0x4);

u32 dialog_button_word(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<DialogButtonWordFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    if (r1 >= 3u) {
        return ~0u;
    }
    u32 r3_1 = *gptr<u32>((r0 + (r1 << 2)) + 0x98u);
    frame->word_0 = ~0u;
    MessageArchive__message_with_count(*word_resources, frame.at(0).addr(), 0x890c6cu, r3_1);
    return frame->word_0;
}

}  // namespace d_00759c40
GUEST_EXPORT_FRAMED(0x00759c40, d_00759c40::dialog_button_word, 0x4000);  // pushes {lr} first, as the original

// f_00759c88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Word `index` (below 2) of the layout (+0xac, below 5) from the table at 0x893200; 0 when out of range.
namespace d_00759c88 {

struct __attribute__((packed)) DialogLayoutValueArg0 {
    u8 unknown_0[0xac];  // (not used here)
    u8 byte_ac;
};
GUEST_OFFSET(DialogLayoutValueArg0, byte_ac, 0xac);


u32 dialog_layout_value(gptr<DialogLayoutValueArg0> arg0, u32 r1) {
    u32 r2_1 = arg0->byte_ac;
    if (r2_1 >= 5u || r1 >= 2u) {
        return 0u;
    }
    return gptr<u32>((r2_1 << 3) + 0x893200u)[r1];
}

}  // namespace d_00759c88
GUEST_EXPORT(0x00759c88, d_00759c88::dialog_layout_value);

// f_0075a29c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Runs the message engine over `count` lines from the cursor (+0x14) and returns how many characters they take.
namespace d_0075a29c {

struct __attribute__((packed)) MessageText {
    u32 word_0;
    u8 unknown_4[0x10];  // (not used here)
    u32 word_14;
};
GUEST_OFFSET(MessageText, word_0, 0x0);
GUEST_OFFSET(MessageText, word_14, 0x14);

struct __attribute__((packed)) Local_0075a29c_ea_6 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0075a29c_ea_6, word_0, 0x0);
GUEST_OFFSET(Local_0075a29c_ea_6, word_4, 0x4);

inline constexpr u32 message_engine_options_address = 0x0095df14u;
inline constexpr guest::Function<0x005ec990, u32(u32, u32, u32)> Utf16Reader__init;
inline constexpr guest::Function<0x005fd310, u32(u32, u32, u32, u32)> construct_searcher;
inline constexpr guest::Function<0x0060184c, u32(u32, u32)> MsgEngine__run;
inline constexpr guest::Function<0x006019b0, u32(u32, u32, u32)> MsgEngine__restart;

struct __attribute__((packed)) MessageTextSkipLinesFrame {
    u8 unknown_0[0x60];  // (not read or written by name)
    u8 byte_60;
    u8 unknown_61[0x3];  // (not read or written by name)
    u32 word_64;
    u16 half_68;
    u8 unknown_6a[0xa];  // (not read or written by name)
    u8 byte_74;
    u8 unknown_75[0x3];  // (not read or written by name)
    u32 word_78;
    u32 word_7c;
    u32 word_80;
    u8 unknown_84[0x18];  // (not read or written by name)
};
GUEST_OFFSET(MessageTextSkipLinesFrame, byte_60, 0x60);
GUEST_OFFSET(MessageTextSkipLinesFrame, word_64, 0x64);
GUEST_OFFSET(MessageTextSkipLinesFrame, half_68, 0x68);
GUEST_OFFSET(MessageTextSkipLinesFrame, byte_74, 0x74);
GUEST_OFFSET(MessageTextSkipLinesFrame, word_78, 0x78);
GUEST_OFFSET(MessageTextSkipLinesFrame, word_7c, 0x7c);
GUEST_OFFSET(MessageTextSkipLinesFrame, word_80, 0x80);
GUEST_SIZE(MessageTextSkipLinesFrame, 0x9c);

u32 MessageText__skip_lines(gptr<MessageText> message_text, u32 r1, u32 r2) {
    guest::StackFrameOf<MessageTextSkipLinesFrame> frame;  // the original's stack frame
    u32 r0 = message_text.addr();
    u32 r5 = r1;
    construct_searcher(frame.at(0).addr(), r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    u32 i = 0u;
    r0 = message_text->word_0 + (message_text->word_14 >> 1 << 1);
    frame->word_80 = r0;
    frame->word_7c = r0;
    if (s32(r5) > 0) {
        u32 r7 = 0u;
        u32 r8 = 1u;
        u32 r9 = 4u;
        u32 r10 = ~0x80000000u;
        u32 r11 = ~0u;
        do {
            Utf16Reader__init(frame.at(0x88).addr(), r0, r2);
            u32 r0_3 = frame->word_7c;
            frame->byte_60 = u8(r9);
            frame->word_64 = r7;
            frame->word_7c = r0_3 + 2u;
            frame->half_68 = u16(r7);
            gptr<Local_0075a29c_ea_6> ea_6 = gptr<Local_0075a29c_ea_6>(frame.at(0x6c).addr());
            ea_6->word_0 = r10;
            ea_6->word_4 = r11;
            u32 r6_1 = frame.at(0).addr();
            frame->byte_74 = u8(r7);
            frame->word_78 = r7;
            MsgEngine__restart(r6_1, frame.at(0x7c).addr(), message_engine_options_address);
            u32 r0_4 = frame->word_7c;
            frame->byte_60 = u8(r8);
            frame->word_64 = r0_4;
            MsgEngine__run(r6_1, message_engine_options_address);
            r2 = guest::cpu()->r[2];
            u32 r0_5 = 0u;
            if (frame->byte_74 != 0) {
                r0_5 = s32(frame->word_78 - frame->word_64) >> 1;
            }
            i += 1u;
            r0 = frame->word_7c + (r0_5 << 1);
            frame->word_7c = r0;
            guest::preempt();
        } while (s32(i) < s32(r5));
    }
    return s32(r0 - frame->word_80) >> 1;
}

}  // namespace d_0075a29c
GUEST_EXPORT_FRAMED(0x0075a29c, d_0075a29c::MessageText__skip_lines, 0x4ff0);  // pushes {i, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_0075a818: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Runs the message engine over two lines from the cursor (+0x14) and returns how many characters they take.
namespace d_0075a818 {

struct __attribute__((packed)) MessageText {
    u32 word_0;
    u8 unknown_4[0x10];  // (not used here)
    u32 word_14;
};
GUEST_OFFSET(MessageText, word_0, 0x0);
GUEST_OFFSET(MessageText, word_14, 0x14);

struct __attribute__((packed)) Local_0075a818_ea_6 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0075a818_ea_6, word_0, 0x0);
GUEST_OFFSET(Local_0075a818_ea_6, word_4, 0x4);

inline constexpr u32 message_engine_options_address = 0x0095df14u;
inline constexpr guest::Function<0x005ec990, u32(u32, u32, u32)> Utf16Reader__init;
inline constexpr guest::Function<0x005fd310, u32(u32, u32, u32, u32)> construct_searcher;
inline constexpr guest::Function<0x0060184c, u32(u32, u32)> MsgEngine__run;
inline constexpr guest::Function<0x006019b0, u32(u32, u32, u32)> MsgEngine__restart;

struct __attribute__((packed)) MessageTextSkipTwoLinesFrame {
    u8 unknown_0[0x60];  // (not read or written by name)
    u8 byte_60;
    u8 unknown_61[0x3];  // (not read or written by name)
    u32 word_64;
    u16 half_68;
    u8 unknown_6a[0xa];  // (not read or written by name)
    u8 byte_74;
    u8 unknown_75[0x3];  // (not read or written by name)
    u32 word_78;
    u32 word_7c;
    u8 unknown_80[0x14];  // (not read or written by name)
};
GUEST_OFFSET(MessageTextSkipTwoLinesFrame, byte_60, 0x60);
GUEST_OFFSET(MessageTextSkipTwoLinesFrame, word_64, 0x64);
GUEST_OFFSET(MessageTextSkipTwoLinesFrame, half_68, 0x68);
GUEST_OFFSET(MessageTextSkipTwoLinesFrame, byte_74, 0x74);
GUEST_OFFSET(MessageTextSkipTwoLinesFrame, word_78, 0x78);
GUEST_OFFSET(MessageTextSkipTwoLinesFrame, word_7c, 0x7c);
GUEST_SIZE(MessageTextSkipTwoLinesFrame, 0x94);

u32 MessageText__skip_two_lines(gptr<MessageText> message_text, u32 r1, u32 r2) {
    guest::StackFrameOf<MessageTextSkipTwoLinesFrame> frame;  // the original's stack frame
    u32 r0_6 = 0;
    construct_searcher(frame.at(0).addr(), r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    u32 i = 0u;
    u32 r7 = i;
    u32 r8 = 1u;
    u32 r6 = message_text->word_0 + (message_text->word_14 >> 1 << 1);
    u32 r9 = 4u;
    u32 r10 = ~0x80000000u;
    u32 r11 = ~0u;
    frame->word_7c = r6;
    do {
        Utf16Reader__init(frame.at(0x80).addr(), frame->word_7c, r2);
        u32 r0_3 = frame->word_7c;
        frame->byte_60 = u8(r9);
        frame->word_64 = r7;
        frame->word_7c = r0_3 + 2u;
        frame->half_68 = u16(r7);
        gptr<Local_0075a818_ea_6> ea_6 = gptr<Local_0075a818_ea_6>(frame.at(0x6c).addr());
        ea_6->word_0 = r10;
        ea_6->word_4 = r11;
        u32 r5_1 = frame.at(0).addr();
        frame->byte_74 = u8(r7);
        frame->word_78 = r7;
        MsgEngine__restart(r5_1, frame.at(0x7c).addr(), message_engine_options_address);
        u32 r0_4 = frame->word_7c;
        frame->byte_60 = u8(r8);
        frame->word_64 = r0_4;
        MsgEngine__run(r5_1, message_engine_options_address);
        r2 = guest::cpu()->r[2];
        u32 r0_5 = 0u;
        if (frame->byte_74 != 0) {
            r0_5 = s32(frame->word_78 - frame->word_64) >> 1;
        }
        i += 1u;
        r0_6 = frame->word_7c + (r0_5 << 1);
        frame->word_7c = r0_6;
        guest::preempt();
    } while (s32(i) < 2);
    return s32(r0_6 - r6) >> 1;
}

}  // namespace d_0075a818
GUEST_EXPORT_FRAMED(0x0075a818, d_0075a818::MessageText__skip_two_lines, 0x4ff0);  // pushes {i, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_0075a90c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the first byte of the source text (+0x10) to `out`.
namespace d_0075a90c {

struct __attribute__((packed)) CopyFirstByteOfSourceArg0 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(CopyFirstByteOfSourceArg0, word_10, 0x10);

struct __attribute__((packed)) CopyFirstByteOfSourceArg1 {
    u8 byte_0;
};
GUEST_OFFSET(CopyFirstByteOfSourceArg1, byte_0, 0x0);


void copy_first_byte_of_source(gptr<CopyFirstByteOfSourceArg0> arg0, gptr<CopyFirstByteOfSourceArg1> arg1) {
    arg1->byte_0 = *gptr<u8>(arg0->word_10);
}

}  // namespace d_0075a90c
GUEST_EXPORT(0x0075a90c, d_0075a90c::copy_first_byte_of_source);

// f_0075a91c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the first byte of the source text (+0x10) to `out`.
namespace d_0075a91c {

struct __attribute__((packed)) CopyFirstByteOfSource2Arg0 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(CopyFirstByteOfSource2Arg0, word_10, 0x10);

struct __attribute__((packed)) CopyFirstByteOfSource2Arg1 {
    u8 byte_0;
};
GUEST_OFFSET(CopyFirstByteOfSource2Arg1, byte_0, 0x0);


void copy_first_byte_of_source_2(gptr<CopyFirstByteOfSource2Arg0> arg0, gptr<CopyFirstByteOfSource2Arg1> arg1) {
    arg1->byte_0 = *gptr<u8>(arg0->word_10);
}

}  // namespace d_0075a91c
GUEST_EXPORT(0x0075a91c, d_0075a91c::copy_first_byte_of_source_2);

// f_0075ac90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the filter has an id (flag 1, +4), a second id (flag 2, +8) or a non-empty string (flag 4, +0x10).
namespace d_0075ac90 {

struct __attribute__((packed)) TextFilter {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(TextFilter, word_0, 0x0);
GUEST_OFFSET(TextFilter, word_4, 0x4);
GUEST_OFFSET(TextFilter, word_8, 0x8);
GUEST_OFFSET(TextFilter, word_10, 0x10);

inline guest::global<u8, 0x008c9f1c> empty_string;

u32 TextFilter__is_set(gptr<TextFilter> text_filter) {
    u32 r1_1 = text_filter->word_0;
    if ((r1_1 & 1u) != 0 && text_filter->word_4 + 1u != 0 || (r1_1 & 2u) != 0 && text_filter->word_8 + 1u != 0) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    if ((r1_1 & 4u) == 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r1_2 = s8(*empty_string);
    if (u32(*gptr<s8>(text_filter->word_10)) == r1_2) {
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    guest::cpu()->r[1] = r1_2;
    return 1u;
}

}  // namespace d_0075ac90
GUEST_EXPORT(0x0075ac90, d_0075ac90::TextFilter__is_set);

// f_0075ad18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether a list entry matches (by its flags and iterator).
namespace d_0075ad18 {

struct __attribute__((packed)) Check75ad18Arg0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Check75ad18Arg0, word_0, 0x0);
GUEST_OFFSET(Check75ad18Arg0, word_4, 0x4);
GUEST_OFFSET(Check75ad18Arg0, word_8, 0x8);
GUEST_OFFSET(Check75ad18Arg0, word_10, 0x10);

inline constexpr u32 global_00ad5b7c_address = 0x00ad5b7cu;
inline guest::global<u8, 0x008c9f1c> empty_string;
inline constexpr guest::Function<0x00300768, u32(u32, u32, u32, u32)> Iterator__equals;

u32 check_75ad18(gptr<Check75ad18Arg0> arg0, u32 r1_unused, u32 r2) {
    u32 r1_1 = arg0->word_0;
    u32 zf_1 = (r1_1 & 2u) == 0;
    if (!zf_1) {
        r2 = arg0->word_8;
        zf_1 = r2 + 1u == 0;
    }
    if (!zf_1) {
        if (r2 == 0) {
            guest::cpu()->r[1] = r1_1;
            return 1u;
        }
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    if ((r1_1 & 4u) != 0) {
        u32 r2_1 = *gptr<s8>(arg0->word_10);
        u32 r3_1 = s8(*empty_string);
        if (r2_1 != r3_1) {
            return Iterator__equals(arg0.addr() + 0xcu, global_00ad5b7c_address, r2_1, r3_1);
        }
    }
    if ((r1_1 & 1u) != 0 && arg0->word_4 + 1u != 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_0075ad18
GUEST_EXPORT_FRAMED(0x0075ad18, d_0075ad18::check_75ad18, 0x4010);  // pushes {r4, lr} first, as the original

// f_0075ad90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Measures the text from +0x14 to the start of the last line (table +0x20) with the chip measure processor (+0xb8).
namespace d_0075ad90 {

struct __attribute__((packed)) MeasureCurrentLineArg0 {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
    u8 unknown_18[0x4];  // (not used here)
    u32 word_1c;
    u32 word_20;
    u8 unknown_24[0x94];  // (not used here)
    u32 word_b8;
};
GUEST_OFFSET(MeasureCurrentLineArg0, word_14, 0x14);
GUEST_OFFSET(MeasureCurrentLineArg0, word_1c, 0x1c);
GUEST_OFFSET(MeasureCurrentLineArg0, word_20, 0x20);
GUEST_OFFSET(MeasureCurrentLineArg0, word_b8, 0xb8);

inline constexpr guest::Function<0x005ea0a8, u32(u32, u32, u32, u32)> script__Chip__MeasureProcessor__MeasureProcessor;

struct __attribute__((packed)) MeasureCurrentLineFrame {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(MeasureCurrentLineFrame, word_0, 0x0);
GUEST_OFFSET(MeasureCurrentLineFrame, word_4, 0x4);
GUEST_SIZE(MeasureCurrentLineFrame, 0xc);

u32 measure_current_line(gptr<MeasureCurrentLineArg0> arg0) {
    guest::StackFrameOf<MeasureCurrentLineFrame> frame;  // the original's stack frame
    frame->word_0 = arg0->word_14;
    frame->word_4 = gptr<u32>(arg0->word_20)[arg0->word_1c - 1u];
    return script__Chip__MeasureProcessor__MeasureProcessor(arg0->word_b8, frame.at(0).addr(), frame.at(4).addr(), guest::cpu()->r[3]);
}

}  // namespace d_0075ad90
GUEST_EXPORT_FRAMED(0x0075ad90, d_0075ad90::measure_current_line, 0x4000);  // pushes {lr} first, as the original

// f_0075b208: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the condition kind (byte +8 of its data) holds at a time: a month (1-12), a season (13-16), snow, or one of
// four event periods; true for 0 and unknown kinds.
namespace d_0075b208 {

struct __attribute__((packed)) ConditionMatchesTimeArg0 {
    u32 word_0;
};
GUEST_OFFSET(ConditionMatchesTimeArg0, word_0, 0x0);

struct __attribute__((packed)) ConditionMatchesTimeArg1 {
    u32 word_0;
};
GUEST_OFFSET(ConditionMatchesTimeArg1, word_0, 0x0);

inline constexpr guest::Function<0x0056d060, u32(u32)> TimeStamp__season;
inline constexpr guest::Function<0x0062fac8, u32(u32, u32, u32, u32)> is_period_value_5_to_7_0062fac8;
inline constexpr guest::Function<0x0062fb44, u32(u32, u32, u32, u32)> is_snow_period;
inline constexpr guest::Function<0x0063001c, u32(u32, u32, u32, u32)> scene_is_night_area;

u32 condition_matches_time(gptr<ConditionMatchesTimeArg0> arg0, gptr<ConditionMatchesTimeArg1> arg1) {
    u32 r0_1 = *gptr<u8>(arg0->word_0 + 8u);
    if (r0_1 < 0x16u) {
        u32 res_1 = r0_1 & 0xffu;
        if (res_1 != 0) {
            u32 r1_1 = arg1->word_0;
            if (res_1 - 1u > 0xbu) {
                if (res_1 != 0xdu) {
                    if (res_1 == 0xeu) {
                        return TimeStamp__season(r1_1) == 1u;
                    }
                    if (res_1 == 0xfu) {
                        return TimeStamp__season(r1_1) == 2u;
                    }
                    if (res_1 == 0x10u) {
                        return TimeStamp__season(r1_1) == 3u;
                    }
                    if (res_1 == 0x11u) {
                        return is_snow_period(res_1, r1_1, res_1 - 1u, guest::cpu()->r[3]) != 0;
                    }
                    if (res_1 == 0x12u) {
                        return scene_is_night_area(res_1, r1_1, res_1 - 1u, guest::cpu()->r[3]) != 0;
                    }
                    if (res_1 == 0x13u) {
                        return scene_is_night_area(res_1, r1_1, res_1 - 1u, guest::cpu()->r[3]) != 0;
                    }
                    if (res_1 == 0x14u) {
                        return scene_is_night_area(res_1, r1_1, res_1 - 1u, guest::cpu()->r[3]) != 0;
                    }
                    if (res_1 == 0x15u) {
                        return is_period_value_5_to_7_0062fac8(res_1, r1_1, res_1 - 1u, guest::cpu()->r[3]) != 0;
                    }
                    return 0u;
                }
                if (TimeStamp__season(r1_1) != 0) {
                    return 0u;
                }
            } else if (u32(*gptr<s8>(r1_1 + 4u)) != res_1) {
                return 0u;
            }
        }
    }
    return 1u;
}

}  // namespace d_0075b208
GUEST_EXPORT_FRAMED(0x0075b208, d_0075b208::condition_matches_time, 0x4010);  // pushes {r4, lr} first, as the original

// f_0075b438: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Byte +7 of the condition data when it is below 3, else 0.
namespace d_0075b438 {

struct __attribute__((packed)) ConditionByte7Below3Arg0 {
    u32 word_0;
};
GUEST_OFFSET(ConditionByte7Below3Arg0, word_0, 0x0);


u32 condition_byte_7_below_3(gptr<ConditionByte7Below3Arg0> arg0) {
    u32 r1_1 = *gptr<u8>(arg0->word_0 + 7u);
    u32 r0_1 = 0u;
    if (r1_1 < 3u) {
        r0_1 = r1_1 & 0xffu;
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0075b438
GUEST_EXPORT(0x0075b438, d_0075b438::condition_byte_7_below_3);

// f_0075b450: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether byte +1 of the condition data is 1.
namespace d_0075b450 {

struct __attribute__((packed)) ConditionByte1Is1Arg0 {
    u32 word_0;
};
GUEST_OFFSET(ConditionByte1Is1Arg0, word_0, 0x0);


u32 condition_byte_1_is_1(gptr<ConditionByte1Is1Arg0> arg0) {
    u32 r0_1 = *gptr<u8>(arg0->word_0 + 1u);
    if (r0_1 != 1u) {
        r0_1 = 0u;
    }
    return r0_1;
}

}  // namespace d_0075b450
GUEST_EXPORT(0x0075b450, d_0075b450::condition_byte_1_is_1);

// f_0075b558: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The value (table 0x890f12) of the kind (+4, or the first byte of +0 when +4 is out of range); 0 when out of range.
namespace d_0075b558 {

struct __attribute__((packed)) KindTable890f12ValueArg0 {
    u32 word_0;
    u8 byte_4;
};
GUEST_OFFSET(KindTable890f12ValueArg0, word_0, 0x0);
GUEST_OFFSET(KindTable890f12ValueArg0, byte_4, 0x4);

inline guest::global<u8, 0x00890f12> global_00890f12;

u32 kind_table_890f12_value(gptr<KindTable890f12ValueArg0> arg0) {
    u32 r1_1 = arg0->byte_4;
    if (r1_1 >= 0x27u) {
        u32 r0_1 = arg0->word_0;
        if (r0_1 == 0) {
            u32 r0_2 = *global_00890f12;
            guest::cpu()->r[1] = 0u;
            return r0_2;
        } else {
            r1_1 = *gptr<u8>(r0_1);
        }
    }
    if (r1_1 >= 0x27u) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r0_3 = *gptr<u8>(r1_1 + 0x890f12u);
    guest::cpu()->r[1] = r1_1;
    return r0_3;
}

}  // namespace d_0075b558
GUEST_EXPORT(0x0075b558, d_0075b558::kind_table_890f12_value);

// f_0075b8b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Finds a talk script's label (arg 1) in a message (arg 0) with a temporary comparing message engine.
namespace d_0075b8b0 {

inline constexpr u32 vtable_script__CmpEngine = 0x0090a998u;
inline constexpr guest::Function<0x005ffc14, u32(u32, u32, u32)> TalkScript__find_label;
inline constexpr guest::Function<0x00601a20, u32(u32, u32, u32, u32)> construct_msg_engine;

u32 find_talk_label(u32 cmp_engine, u32 r1, u32 r2) {
    guest::StackFrame frame(0x64);  // the original's stack frame
    u32 r0_2 = construct_msg_engine(frame.at(0).addr(), r1, r2, guest::cpu()->r[3]);
    *gptr<u32>(r0_2) = vtable_script__CmpEngine;
    u32 label = TalkScript__find_label(frame.at(0).addr(), cmp_engine, r1);
    return label;
}

}  // namespace d_0075b8b0
GUEST_EXPORT_FRAMED(0x0075b8b0, d_0075b8b0::find_talk_label, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0075bdac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The number of messages of the archive called `name` (under its lock), 0 when there is none.
namespace d_0075bdac {

inline constexpr guest::Function<0x00135740, u32(u32)> lock_member_lock;
inline constexpr guest::Function<0x00137e84, u32(u32)> unlock_member_lock;
inline constexpr guest::Function<0x00138998, u32(u32)> release_and_clear_pair_2;
inline constexpr guest::Function<0x00159960, u32(u32)> ItemOffsetTable__current_value;
inline constexpr guest::Function<0x005b1760, u32(u32, u32)> acquire_argument_handle_kind_b;
inline constexpr guest::Function<0x005b177c, u32(u32)> clear_argument_handle_005b177c;
inline constexpr guest::Function<0x0075adcc, u32(u32, u32, u32, u32)> sead__SafeStringBase_char___SafeStringBase_0075adcc;

u32 MessageArchive__message_count(u32 message_archive, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r5 = guest::cpu()->r[5];
    u32 r4_1 = message_archive + 0x14u;
    u32 r0_1 = sead__SafeStringBase_char___SafeStringBase_0075adcc(r4_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 zf_1 = r0_1 == 0;
    u32 r6_1 = 0u;
    if (!zf_1) {
        r5 = *gptr<u32>(r0_1 + 0x17cu);
        zf_1 = r5 == 0;
    }
    if (!zf_1) {
        lock_member_lock(r4_1);
        clear_argument_handle_005b177c(frame.at(0).addr());
        acquire_argument_handle_kind_b(frame.at(0).addr(), r5);
        u32 value = ItemOffsetTable__current_value(frame.at(0).addr());
        r6_1 = value;
        release_and_clear_pair_2(frame.at(0).addr());
        unlock_member_lock(r4_1);
    }
    return r6_1;
}

}  // namespace d_0075bdac
GUEST_EXPORT_FRAMED(0x0075bdac, d_0075bdac::MessageArchive__message_count, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0075be20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Gives the message `index` of the archive called `name` as a reference (the empty text when there is none); true when
// found.
namespace d_0075be20 {

struct __attribute__((packed)) MessageArchiveMessageArg1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(MessageArchiveMessageArg1, word_4, 0x4);
GUEST_OFFSET(MessageArchiveMessageArg1, word_8, 0x8);

inline constexpr guest::Function<0x00135740, u32(u32, u32)> lock_member_lock;
inline constexpr guest::Function<0x00137e84, u32(u32)> unlock_member_lock;
inline constexpr guest::Function<0x00138998, u32(u32)> release_and_clear_pair_2;
inline constexpr guest::Function<0x001597e0, u32(u32, u32)> ItemOffsetTable__is_after;
inline constexpr guest::Function<0x005b1760, u32(u32, u32)> acquire_argument_handle_kind_b;
inline constexpr guest::Function<0x005b177c, u32(u32)> clear_argument_handle_005b177c;
inline constexpr guest::Function<0x0075adcc, u32(u32, u32, u32, u32)> sead__SafeStringBase_char___SafeStringBase_0075adcc;

u32 MessageArchive__message(u32 message_archive, gptr<MessageArchiveMessageArg1> arg1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r1 = arg1.addr();
    u32 r6 = guest::cpu()->r[6];
    u32 r7_1 = 0u;
    if (s32(r3) >= 0) {
        u32 r5_1 = message_archive + 0x14u;
        u32 r0_1 = sead__SafeStringBase_char___SafeStringBase_0075adcc(r5_1, r2, r2, r3);
        r1 = guest::cpu()->r[1];
        u32 zf_1 = r0_1 == 0;
        if (!zf_1) {
            r6 = *gptr<u32>(r0_1 + 0x17cu);
            zf_1 = r6 == 0;
        }
        if (zf_1) {
            arg1->word_4 = 0x8906ec;
            arg1->word_8 = ~0xc0000000u;
        } else {
            lock_member_lock(r5_1, r1);
            clear_argument_handle_005b177c(frame.at(0).addr());
            acquire_argument_handle_kind_b(frame.at(0).addr(), r6);
            u32 r0_5 = ItemOffsetTable__is_after(frame.at(0).addr(), r3);
            release_and_clear_pair_2(frame.at(0).addr());
            unlock_member_lock(r5_1);
            r1 = guest::cpu()->r[1];
            if (r0_5 != 0) {
                arg1->word_4 = r0_5;
                r7_1 = 1u;
                arg1->word_8 = ~0xc0000000u;
            } else {
                arg1->word_4 = 0x8906ec;
                arg1->word_8 = ~0xc0000000u;
            }
        }
    } else {
        arg1->word_4 = 0x8906ec;
        arg1->word_8 = ~0xc0000000u;
    }
    guest::cpu()->r[1] = r1;
    return r7_1;
}

}  // namespace d_0075be20
GUEST_EXPORT_FRAMED(0x0075be20, d_0075be20::MessageArchive__message, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0075bedc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Loads a nickname message: finds its label and starts it in a message engine.
namespace d_0075bedc {

struct __attribute__((packed)) Local_0075bedc_r0_3 {
    u32 vtable;
    u8 unknown_4[0x88];  // (not used here)
    u32 word_8c;
    u32 word_90;
    u32 word_94;
    u8 byte_98;
    u8 byte_99;
};
GUEST_OFFSET(Local_0075bedc_r0_3, vtable, 0x0);
GUEST_OFFSET(Local_0075bedc_r0_3, word_8c, 0x8c);
GUEST_OFFSET(Local_0075bedc_r0_3, word_90, 0x90);
GUEST_OFFSET(Local_0075bedc_r0_3, word_94, 0x94);
GUEST_OFFSET(Local_0075bedc_r0_3, byte_98, 0x98);
GUEST_OFFSET(Local_0075bedc_r0_3, byte_99, 0x99);

inline constexpr u32 vtable_script__StrNicknameEngine = 0x00909294u;
inline constexpr u32 vtable_script__WordRes = 0x0090a570u;
inline constexpr u32 vtable_script__CmpEngine = 0x0090a998u;
inline constexpr u32 vtable_script__MsgEngine = 0x0090aa8cu;
inline constexpr guest::Function<0x005e8348, u32(u32, u32, u32)> MsgEngine__start;
inline constexpr guest::Function<0x005ffc14, u32(u32, u32, u32)> TalkScript__find_label;
inline constexpr guest::Function<0x00601a20, u32(u32)> construct_msg_engine;
inline constexpr guest::Function<0x00601bc0, u32(u32)> construct_seq_engine;
inline constexpr guest::Function<0x0075be20, u32(u32, u32, u32, u32)> MessageArchive__message;

struct __attribute__((packed)) LoadNicknameMessageFrame {
    u32 object_0_vtable;
    u8 unknown_4[0x98];  // (not read or written by name)
    u32 object_9c_vtable;
    u32 word_a0;
    u32 word_a4;
    u8 unknown_a8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(LoadNicknameMessageFrame, object_0_vtable, 0x0);
GUEST_OFFSET(LoadNicknameMessageFrame, object_9c_vtable, 0x9c);
GUEST_OFFSET(LoadNicknameMessageFrame, word_a0, 0xa0);
GUEST_OFFSET(LoadNicknameMessageFrame, word_a4, 0xa4);
GUEST_SIZE(LoadNicknameMessageFrame, 0xac);

u32 load_nickname_message(u32 word_res, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<LoadNicknameMessageFrame> frame;  // the original's stack frame
    frame->object_9c_vtable = vtable_script__WordRes;
    frame->word_a0 = 0;
    frame->word_a4 = 0;
    u32 r0_1 = MessageArchive__message(word_res, frame.at(0x9c).addr(), 0x75bfa0u, r2);
    u32 r4_1 = r0_1;
    if (r0_1 != 0) {
        gptr<Local_0075bedc_r0_3> r0_3 = gptr<Local_0075bedc_r0_3>(construct_seq_engine(frame.at(0).addr()));
        r0_3->vtable = vtable_script__StrNicknameEngine;
        r0_3->word_8c = r3;
        r0_3->word_90 = 0;
        r0_3->word_94 = 0;
        r0_3->byte_98 = 0;
        r0_3->byte_99 = 0;
        if (MsgEngine__start(frame.at(0).addr(), r1, frame.at(0x9c).addr()) == 0) {
            r4_1 = 0u;
        }
        frame->object_0_vtable = vtable_script__MsgEngine;
        if (r4_1 != 0) {
            u32 r0_7 = construct_msg_engine(frame.at(0).addr());
            *gptr<u32>(r0_7) = vtable_script__CmpEngine;
            u32 label = TalkScript__find_label(frame.at(0).addr(), r1, r3);
            if (label != 0) {
                r4_1 = 0u;
            }
            frame->object_0_vtable = vtable_script__MsgEngine;
        }
    }
    return r4_1;
}

}  // namespace d_0075bedc
GUEST_EXPORT_FRAMED(0x0075bedc, d_0075bedc::load_nickname_message, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0075bfc0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The data of message `index` of the archive called `name` (under its lock), or 0.
namespace d_0075bfc0 {

inline constexpr guest::Function<0x00135740, u32(u32)> lock_member_lock;
inline constexpr guest::Function<0x00137e84, u32(u32)> unlock_member_lock;
inline constexpr guest::Function<0x00138998, u32(u32)> release_and_clear_pair_2;
inline constexpr guest::Function<0x001597e0, u32(u32, u32)> ItemOffsetTable__is_after;
inline constexpr guest::Function<0x005b1760, u32(u32, u32)> acquire_argument_handle_kind_b;
inline constexpr guest::Function<0x005b177c, u32(u32)> clear_argument_handle_005b177c;
inline constexpr guest::Function<0x0075adcc, u32(u32, u32, u32, u32)> sead__SafeStringBase_char___SafeStringBase_0075adcc;

u32 MessageArchive__message_data(u32 message_archive, u32 r1, u32 r2) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r5 = guest::cpu()->r[5];
    u32 r4_1 = message_archive + 0x14u;
    u32 r0_1 = sead__SafeStringBase_char___SafeStringBase_0075adcc(r4_1, r1, r2, guest::cpu()->r[3]);
    u32 zf_1 = r0_1 == 0;
    u32 r6_1 = 0u;
    if (!zf_1) {
        r5 = *gptr<u32>(r0_1 + 0x17cu);
        zf_1 = r5 == 0;
    }
    if (!zf_1) {
        lock_member_lock(r4_1);
        clear_argument_handle_005b177c(frame.at(0).addr());
        acquire_argument_handle_kind_b(frame.at(0).addr(), r5);
        r6_1 = ItemOffsetTable__is_after(frame.at(0).addr(), r2);
        release_and_clear_pair_2(frame.at(0).addr());
        unlock_member_lock(r4_1);
    }
    return r6_1;
}

}  // namespace d_0075bfc0
GUEST_EXPORT_FRAMED(0x0075bfc0, d_0075bfc0::MessageArchive__message_data, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0075c348: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Gives the message labelled `label` of the archive called `name` as a reference (the empty text when there is none);
// true when found.
namespace d_0075c348 {

struct __attribute__((packed)) Local_0075c348_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0075c348_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0075c348_ea_1, word_4, 0x4);

inline constexpr guest::Function<0x00135740, u32(u32)> lock_member_lock;
inline constexpr guest::Function<0x00137e84, u32(u32)> unlock_member_lock;
inline constexpr guest::Function<0x00138998, u32(u32)> release_and_clear_pair_2;
inline constexpr guest::Function<0x00159824, u32(u32, u32)> ItemOffsetTable__value_at;
inline constexpr guest::Function<0x005b1760, u32(u32, u32)> acquire_argument_handle_kind_b;
inline constexpr guest::Function<0x005b177c, u32(u32)> clear_argument_handle_005b177c;
inline constexpr guest::Function<0x0075adcc, u32(u32, u32, u32, u32)> sead__SafeStringBase_char___SafeStringBase_0075adcc;

u32 MessageArchive__message_by_label(u32 message_archive, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r7 = guest::cpu()->r[7];
    u32 r5_1 = message_archive + 0x14u;
    u32 r0_1 = sead__SafeStringBase_char___SafeStringBase_0075adcc(r5_1, r2, r2, r3);
    u32 zf_1 = r0_1 == 0;
    u32 r6_1 = 0u;
    if (!zf_1) {
        r7 = *gptr<u32>(r0_1 + 0x17cu);
        zf_1 = r7 == 0;
    }
    if (!zf_1) {
        lock_member_lock(r5_1);
        clear_argument_handle_005b177c(frame.at(0).addr());
        acquire_argument_handle_kind_b(frame.at(0).addr(), r7);
        u32 value_2 = ItemOffsetTable__value_at(frame.at(0).addr(), r3);
        r6_1 = value_2;
        release_and_clear_pair_2(frame.at(0).addr());
        unlock_member_lock(r5_1);
    }
    if (r6_1 != 0) {
        gptr<Local_0075c348_ea_1> ea_1 = gptr<Local_0075c348_ea_1>(r1 + 4u);
        ea_1->word_0 = r6_1;
        u32 r1_4 = ~0xc0000000u;
        ea_1->word_4 = r1_4;
        guest::cpu()->r[1] = r1_4;
        return 1u;
    }
    *gptr<u32>(r1 + 4u) = 0x8906ec;
    u32 r1_5 = ~0xc0000000u;
    *gptr<u32>(r1 + 8u) = r1_5;
    guest::cpu()->r[1] = r1_5;
    return 0u;
}

}  // namespace d_0075c348
GUEST_EXPORT_FRAMED(0x0075c348, d_0075c348::MessageArchive__message_by_label, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0075c4f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The data of the message labelled `label` of the archive called `name` (under its lock), or 0.
namespace d_0075c4f8 {

inline constexpr guest::Function<0x00135740, u32(u32)> lock_member_lock;
inline constexpr guest::Function<0x00137e84, u32(u32)> unlock_member_lock;
inline constexpr guest::Function<0x00138998, u32(u32)> release_and_clear_pair_2;
inline constexpr guest::Function<0x00159824, u32(u32, u32)> ItemOffsetTable__value_at;
inline constexpr guest::Function<0x005b1760, u32(u32, u32)> acquire_argument_handle_kind_b;
inline constexpr guest::Function<0x005b177c, u32(u32)> clear_argument_handle_005b177c;
inline constexpr guest::Function<0x0075adcc, u32(u32, u32, u32, u32)> sead__SafeStringBase_char___SafeStringBase_0075adcc;

u32 MessageArchive__message_data_by_label(u32 message_archive, u32 r1, u32 r2) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r5 = guest::cpu()->r[5];
    u32 r4_1 = message_archive + 0x14u;
    u32 r0_1 = sead__SafeStringBase_char___SafeStringBase_0075adcc(r4_1, r1, r2, guest::cpu()->r[3]);
    u32 zf_1 = r0_1 == 0;
    u32 r6_1 = 0u;
    if (!zf_1) {
        r5 = *gptr<u32>(r0_1 + 0x17cu);
        zf_1 = r5 == 0;
    }
    if (!zf_1) {
        lock_member_lock(r4_1);
        clear_argument_handle_005b177c(frame.at(0).addr());
        acquire_argument_handle_kind_b(frame.at(0).addr(), r5);
        u32 value_2 = ItemOffsetTable__value_at(frame.at(0).addr(), r2);
        r6_1 = value_2;
        release_and_clear_pair_2(frame.at(0).addr());
        unlock_member_lock(r4_1);
    }
    return r6_1;
}

}  // namespace d_0075c4f8
GUEST_EXPORT_FRAMED(0x0075c4f8, d_0075c4f8::MessageArchive__message_data_by_label, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0075cd40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies +4 of the source to +0 of the target.
namespace d_0075cd40 {

struct __attribute__((packed)) CopyWord4Arg0 {
    u32 word_0;
};
GUEST_OFFSET(CopyWord4Arg0, word_0, 0x0);


void copy_word_4(gptr<CopyWord4Arg0> arg0, gptr<MailWork__BodyLineEngine> body_line_engine) {
    u32 r1_1 = body_line_engine->word_4;
    arg0->word_0 = r1_1;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_0075cd40
GUEST_EXPORT(0x0075cd40, d_0075cd40::copy_word_4);

// f_0075cdbc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The address 0x20 into the object's part at 0x35c.
namespace d_0075cdbc {

struct __attribute__((packed)) QueryHandle0075cdbcArg0 {
    u8 unknown_0[0x35c];  // (not used here)
    u32 word_35c;
};
GUEST_OFFSET(QueryHandle0075cdbcArg0, word_35c, 0x35c);


u32 query_handle_0075cdbc(gptr<QueryHandle0075cdbcArg0> arg0) {
    return arg0->word_35c + 0x20u;
}

}  // namespace d_0075cdbc
GUEST_EXPORT(0x0075cdbc, d_0075cdbc::query_handle_0075cdbc);

// f_0075ce78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The word at 4 in the object's part at 0x35c.
namespace d_0075ce78 {

struct __attribute__((packed)) Convert0075ce78Arg0 {
    u8 unknown_0[0x35c];  // (not used here)
    u32 word_35c;
};
GUEST_OFFSET(Convert0075ce78Arg0, word_35c, 0x35c);


u32 convert_0075ce78(gptr<Convert0075ce78Arg0> arg0) {
    return *gptr<u32>(arg0->word_35c + 4u);
}

}  // namespace d_0075ce78
GUEST_EXPORT(0x0075ce78, d_0075ce78::convert_0075ce78);

// f_0075cf18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the state (+4) is 0 or 7, or 8 with sub-state (+6) 5.
namespace d_0075cf18 {

struct __attribute__((packed)) StateIsIdleArg0 {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
    u8 unknown_5[0x1];  // (not used here)
    u8 byte_6;
};
GUEST_OFFSET(StateIsIdleArg0, byte_4, 0x4);
GUEST_OFFSET(StateIsIdleArg0, byte_6, 0x6);


u32 state_is_idle(gptr<StateIsIdleArg0> arg0) {
    u32 r1_1 = arg0->byte_4;
    u32 r0_1 = (r1_1 == 8u && arg0->byte_6 == 5u ? 1u : 0u) | u32(r1_1 == 0 || r1_1 == 7u);
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0075cf18
GUEST_EXPORT(0x0075cf18, d_0075cf18::state_is_idle);

// f_0075cf7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Word +8 of the child at +0x35c.
namespace d_0075cf7c {

struct __attribute__((packed)) ChildWord8Arg0 {
    u8 unknown_0[0x35c];  // (not used here)
    u32 word_35c;
};
GUEST_OFFSET(ChildWord8Arg0, word_35c, 0x35c);


u32 child_word_8(gptr<ChildWord8Arg0> arg0) {
    return *gptr<u32>(arg0->word_35c + 8u);
}

}  // namespace d_0075cf7c
GUEST_EXPORT(0x0075cf7c, d_0075cf7c::child_word_8);

// f_0075d11c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The message count of the archive handle at +0x32c.
namespace d_0075d11c {

inline constexpr guest::Function<0x00159960, u32(u32, u32)> ItemOffsetTable__current_value;

u32 message_count_at_32c(u32 r0) {
    return ItemOffsetTable__current_value(r0 + 0x32cu, guest::cpu()->r[1]);
}

}  // namespace d_0075d11c
GUEST_EXPORT(0x0075d11c, d_0075d11c::message_count_at_32c);

// f_0075d2e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// 0.0 (the first float of the static zero vector, in s0).
namespace d_0075d2e0 {

inline constexpr guest::Function<0x0060c5c4, u32(u32)> static_zero_vector;

void zero_float(u32 r0) {
    u32 zero = static_zero_vector(r0);
    float S0_1 = std::bit_cast<float>(*gptr<u32>(zero));
    guest::cpu()->s[0] = S0_1;
}

}  // namespace d_0075d2e0
GUEST_EXPORT_FRAMED(0x0075d2e0, d_0075d2e0::zero_float, 0x4010);  // pushes {r4, lr} first, as the original

// f_0075d4b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The angle (in 1/182.04 degrees) of +4 times the z of a vector, as 16 bits.
namespace d_0075d4b0 {

struct __attribute__((packed)) Zero {
    u8 unknown_0[0x4];  // (not used here)
    float float_4;
};
GUEST_OFFSET(Zero, float_4, 0x4);


struct __attribute__((packed)) AngleUnitsOfScaledZFrame {
    u16 half_0;
    u8 unknown_2[0x2];  // (not read or written by name)
};
GUEST_OFFSET(AngleUnitsOfScaledZFrame, half_0, 0x0);
GUEST_SIZE(AngleUnitsOfScaledZFrame, 0x4);

u32 angle_units_of_scaled_z(gptr<Zero> zero, gptr<Float3> arg1) {
    guest::StackFrameOf<AngleUnitsOfScaledZFrame> frame;  // the original's stack frame
    float S1_1 = 182.04445f;
    float S0_1 = std::bit_cast<float>(vcvt_sz_f(zero->float_4 * arg1->v[2] * S1_1));
    u32 r0_1 = std::bit_cast<u32>(S0_1);
    frame->half_0 = u16(r0_1);
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return uxth(r0_1);
}

}  // namespace d_0075d4b0
GUEST_EXPORT(0x0075d4b0, d_0075d4b0::angle_units_of_scaled_z);

// f_0075d4e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// 0.0 (the second float of the static zero vector, in s0).
namespace d_0075d4e8 {

inline constexpr guest::Function<0x0060c5c4, u32(u32)> static_zero_vector;

u32 zero_float_2(u32 r0) {
    u32 zero = static_zero_vector(r0);
    float S0_1 = std::bit_cast<float>(*gptr<u32>(zero + 4u));
    guest::cpu()->s[0] = S0_1;
    return zero;
}

}  // namespace d_0075d4e8
GUEST_EXPORT_FRAMED(0x0075d4e8, d_0075d4e8::zero_float_2, 0x4010);  // pushes {r4, lr} first, as the original

// f_0075d630: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The three vertices (heights from corner 0's three 5-bit fields) of the tile's first triangle, on the half cell
// sizes.
namespace d_0075d630 {

struct __attribute__((packed)) GridTileCorner0TriangleArg1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0x4];  // (not used here)
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u8 unknown_20[0x4];  // (not used here)
    u32 word_24;
    u32 word_28;
    u32 word_2c;
};
GUEST_OFFSET(GridTileCorner0TriangleArg1, word_4, 0x4);
GUEST_OFFSET(GridTileCorner0TriangleArg1, word_8, 0x8);
GUEST_OFFSET(GridTileCorner0TriangleArg1, word_c, 0xc);
GUEST_OFFSET(GridTileCorner0TriangleArg1, word_14, 0x14);
GUEST_OFFSET(GridTileCorner0TriangleArg1, word_18, 0x18);
GUEST_OFFSET(GridTileCorner0TriangleArg1, word_1c, 0x1c);
GUEST_OFFSET(GridTileCorner0TriangleArg1, word_24, 0x24);
GUEST_OFFSET(GridTileCorner0TriangleArg1, word_28, 0x28);
GUEST_OFFSET(GridTileCorner0TriangleArg1, word_2c, 0x2c);

inline guest::global<u32, 0x0085f2e8> half_cell_x;
inline guest::global<u32, 0x0085f2ec> half_cell_z;

void GridTile__corner_0_triangle(gptr<GridTile> grid_tile, gptr<GridTileCorner0TriangleArg1> arg1) {
    arg1->word_4 = 0;
    arg1->word_8 = u32(grid_tile->corners[0]) << 0x1b >> 0x18;
    arg1->word_c = 0;
    arg1->word_14 = *half_cell_x;
    arg1->word_18 = (u32(grid_tile->corners[0]) & 0x3e0u) >> 2;
    u32 r3_1 = 0u - *half_cell_z;
    arg1->word_1c = r3_1;
    arg1->word_24 = 0u - *half_cell_x;
    arg1->word_28 = (u32(grid_tile->corners[0]) & 0x7c00u) >> 7;
    arg1->word_2c = r3_1;
}

}  // namespace d_0075d630
GUEST_EXPORT(0x0075d630, d_0075d630::GridTile__corner_0_triangle);

// f_0075d6a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The three vertices (heights from corner 2's three 5-bit fields) of the tile's third triangle.
namespace d_0075d6a4 {

struct __attribute__((packed)) GridTileCorner2TriangleArg1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0x4];  // (not used here)
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u8 unknown_20[0x4];  // (not used here)
    u32 word_24;
    u32 word_28;
    u32 word_2c;
};
GUEST_OFFSET(GridTileCorner2TriangleArg1, word_4, 0x4);
GUEST_OFFSET(GridTileCorner2TriangleArg1, word_8, 0x8);
GUEST_OFFSET(GridTileCorner2TriangleArg1, word_c, 0xc);
GUEST_OFFSET(GridTileCorner2TriangleArg1, word_14, 0x14);
GUEST_OFFSET(GridTileCorner2TriangleArg1, word_18, 0x18);
GUEST_OFFSET(GridTileCorner2TriangleArg1, word_1c, 0x1c);
GUEST_OFFSET(GridTileCorner2TriangleArg1, word_24, 0x24);
GUEST_OFFSET(GridTileCorner2TriangleArg1, word_28, 0x28);
GUEST_OFFSET(GridTileCorner2TriangleArg1, word_2c, 0x2c);

inline guest::global<u32, 0x0085f2e8> half_cell_x;
inline guest::global<u32, 0x0085f2ec> half_cell_z;

void GridTile__corner_2_triangle(gptr<GridTile> grid_tile, gptr<GridTileCorner2TriangleArg1> arg1) {
    arg1->word_4 = 0;
    arg1->word_8 = u32(grid_tile->corners[2]) << 0x1b >> 0x18;
    arg1->word_c = 0;
    arg1->word_14 = 0u - *half_cell_x;
    arg1->word_18 = (u32(grid_tile->corners[2]) & 0x3e0u) >> 2;
    arg1->word_1c = *half_cell_z;
    arg1->word_24 = *half_cell_x;
    arg1->word_28 = (u32(grid_tile->corners[2]) & 0x7c00u) >> 7;
    arg1->word_2c = *half_cell_z;
}

}  // namespace d_0075d6a4
GUEST_EXPORT(0x0075d6a4, d_0075d6a4::GridTile__corner_2_triangle);

// f_0075d718: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The three vertices (heights from corner 1's three 5-bit fields) of the tile's second triangle.
namespace d_0075d718 {

struct __attribute__((packed)) GridTileCorner1TriangleArg1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0x4];  // (not used here)
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u8 unknown_20[0x4];  // (not used here)
    u32 word_24;
    u32 word_28;
    u32 word_2c;
};
GUEST_OFFSET(GridTileCorner1TriangleArg1, word_4, 0x4);
GUEST_OFFSET(GridTileCorner1TriangleArg1, word_8, 0x8);
GUEST_OFFSET(GridTileCorner1TriangleArg1, word_c, 0xc);
GUEST_OFFSET(GridTileCorner1TriangleArg1, word_14, 0x14);
GUEST_OFFSET(GridTileCorner1TriangleArg1, word_18, 0x18);
GUEST_OFFSET(GridTileCorner1TriangleArg1, word_1c, 0x1c);
GUEST_OFFSET(GridTileCorner1TriangleArg1, word_24, 0x24);
GUEST_OFFSET(GridTileCorner1TriangleArg1, word_28, 0x28);
GUEST_OFFSET(GridTileCorner1TriangleArg1, word_2c, 0x2c);

inline guest::global<u32, 0x0085f2e8> half_cell_x;
inline guest::global<u32, 0x0085f2ec> half_cell_z;

void GridTile__corner_1_triangle(gptr<GridTile> grid_tile, gptr<GridTileCorner1TriangleArg1> arg1) {
    arg1->word_4 = 0;
    arg1->word_8 = u32(grid_tile->corners[1]) << 0x1b >> 0x18;
    arg1->word_c = 0;
    u32 r2_1 = 0u - *half_cell_x;
    arg1->word_14 = r2_1;
    arg1->word_18 = (u32(grid_tile->corners[1]) & 0x3e0u) >> 2;
    u32 r12_1 = *half_cell_z;
    arg1->word_24 = r2_1;
    arg1->word_1c = 0u - r12_1;
    arg1->word_28 = (u32(grid_tile->corners[1]) & 0x7c00u) >> 7;
    arg1->word_2c = *half_cell_z;
}

}  // namespace d_0075d718
GUEST_EXPORT(0x0075d718, d_0075d718::GridTile__corner_1_triangle);

// f_0075d788: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The three vertices (heights from corner 3's three 5-bit fields) of the tile's fourth triangle.
namespace d_0075d788 {

struct __attribute__((packed)) GridTileCorner3TriangleArg1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0x4];  // (not used here)
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u8 unknown_20[0x4];  // (not used here)
    u32 word_24;
    u32 word_28;
    u32 word_2c;
};
GUEST_OFFSET(GridTileCorner3TriangleArg1, word_4, 0x4);
GUEST_OFFSET(GridTileCorner3TriangleArg1, word_8, 0x8);
GUEST_OFFSET(GridTileCorner3TriangleArg1, word_c, 0xc);
GUEST_OFFSET(GridTileCorner3TriangleArg1, word_14, 0x14);
GUEST_OFFSET(GridTileCorner3TriangleArg1, word_18, 0x18);
GUEST_OFFSET(GridTileCorner3TriangleArg1, word_1c, 0x1c);
GUEST_OFFSET(GridTileCorner3TriangleArg1, word_24, 0x24);
GUEST_OFFSET(GridTileCorner3TriangleArg1, word_28, 0x28);
GUEST_OFFSET(GridTileCorner3TriangleArg1, word_2c, 0x2c);

inline guest::global<u32, 0x0085f2e8> half_cell_x;
inline guest::global<u32, 0x0085f2ec> half_cell_z;

void GridTile__corner_3_triangle(gptr<GridTile> grid_tile, gptr<GridTileCorner3TriangleArg1> arg1) {
    arg1->word_4 = 0;
    arg1->word_8 = u32(grid_tile->corners[3]) << 0x1b >> 0x18;
    arg1->word_c = 0;
    arg1->word_14 = *half_cell_x;
    arg1->word_18 = (u32(grid_tile->corners[3]) & 0x3e0u) >> 2;
    arg1->word_1c = *half_cell_z;
    arg1->word_24 = *half_cell_x;
    arg1->word_28 = (u32(grid_tile->corners[3]) & 0x7c00u) >> 7;
    arg1->word_2c = 0u - *half_cell_z;
}

}  // namespace d_0075d788
GUEST_EXPORT(0x0075d788, d_0075d788::GridTile__corner_3_triangle);

// f_0075d898: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Bit 7 of byte +9 of tile (x & 15, z & 15) of a 16x16 grid of 10-byte tiles.
namespace d_0075d898 {


u32 Grid__tile_flag_7(u32 grid, u32 r1, u32 r2) {
    u32 r1_1 = (r2 & 0xfu) * 5u;
    u32 r0_1 = (u32(*gptr<u8>(grid + (r1_1 << 5) + (r1 & 0xfu) * 0xau + 0x25u)) & 0x80u) >> 7;
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0075d898
GUEST_EXPORT(0x0075d898, d_0075d898::Grid__tile_flag_7);

// f_0075d968: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The word at +0xd0 of entry `index` (below 2; 0xf4 bytes from +0x52c), or 0.
namespace d_0075d968 {


u32 entry_244_word(u32 r0, u32 r1) {
    if (r1 >= 2u) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    u32 r1_1 = (r1 << 6) - r1 * 5u;
    u32 r0_2 = *gptr<u32>((r0 + (r1_1 << 2) + 0x52cu) + 0xd0u);
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_0075d968
GUEST_EXPORT(0x0075d968, d_0075d968::entry_244_word);

// f_0075d990: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// In scene 0xa1 or 0xa2: the word at +0xd0 of that scene's part (+0x52c or +0x618); else 0.
namespace d_0075d990 {

inline constexpr guest::Function<0x002f74c8, u32(u32)> current_scene_id;

u32 scene_a1_a2_word(u32 r0) {
    u32 scene_2 = current_scene_id(r0);
    if (scene_2 != 0xa1u) {
        if (scene_2 != 0xa2u) {
            return 0u;
        }
        return *gptr<u32>(((r0 + 0x400u) + 0x218u) + 0xd0u);
    }
    return *gptr<u32>(((r0 + 0x400u) + 0x12cu) + 0xd0u);
}

}  // namespace d_0075d990
GUEST_EXPORT_FRAMED(0x0075d990, d_0075d990::scene_a1_a2_word, 0x4010);  // pushes {r4, lr} first, as the original

// f_0075db6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The address of block (column below 5, row below 4) of 0x100 bytes from +0x5058 (the first one when out of range).
namespace d_0075db6c {


u32 grid_block_address(u32 r0, u32 r1, u32 r2) {
    if (r1 >= 5u || r2 >= 4u) {
        return r0 + 0x5058u;
    }
    return r0 + r2 * 0x500u + (r1 << 8) + 0x5058u;
}

}  // namespace d_0075db6c
GUEST_EXPORT(0x0075db6c, d_0075db6c::grid_block_address);

// f_0075dbc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Bit 0 of +0.
namespace d_0075dbc4 {

struct __attribute__((packed)) Bit0OfWord0Arg0 {
    u32 word_0;
};
GUEST_OFFSET(Bit0OfWord0Arg0, word_0, 0x0);


u32 bit_0_of_word_0(gptr<Bit0OfWord0Arg0> arg0) {
    return arg0->word_0 & 1u;
}

}  // namespace d_0075dbc4
GUEST_EXPORT(0x0075dbc4, d_0075dbc4::bit_0_of_word_0);

// f_0075dc00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether +0 has any of the bits of `mask`.
namespace d_0075dc00 {

struct __attribute__((packed)) HasAnyBitsArg0 {
    u32 word_0;
};
GUEST_OFFSET(HasAnyBitsArg0, word_0, 0x0);


u32 has_any_bits(gptr<HasAnyBitsArg0> arg0, u32 r1) {
    u32 r0_1 = arg0->word_0 & r1;
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    return r0_1;
}

}  // namespace d_0075dc00
GUEST_EXPORT(0x0075dc00, d_0075dc00::has_any_bits);

// f_0075dc40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the 16 characters are all ASCII letters or digits.
namespace d_0075dc40 {


u32 is_alphanumeric_16(u32 r0) {
    u32 i = 0u;
    do {
        u32 r2_1 = *gptr<s8>(r0 + i);
        u32 zf_1 = r2_1 - 0x30u == 9u;
        u32 cf_1 = r2_1 - 0x30u >= 9u;
        if (cf_1 && !zf_1) {
            zf_1 = r2_1 - 0x61u == 0x19u;
            cf_1 = r2_1 - 0x61u >= 0x19u;
        }
        if (cf_1 && !zf_1) {
            zf_1 = r2_1 - 0x41u == 0x19u;
            cf_1 = r2_1 - 0x41u >= 0x19u;
        }
        if (cf_1 && !zf_1) {
            guest::cpu()->r[1] = i;
            return 0u;
        }
        i += 1u;
        guest::preempt();
    } while (i < 0x10u);
    guest::cpu()->r[1] = i;
    return 1u;
}

}  // namespace d_0075dc40
GUEST_EXPORT(0x0075dc40, d_0075dc40::is_alphanumeric_16);

// f_0075de74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the session's guest entry (index at +0x13268, below 4) has a valid id and its flag; true when there is no
// guest (+0x132ad clear).
namespace d_0075de74 {

struct __attribute__((packed)) NetSession {
    u8 unknown_0[0x132ad];  // (not used here)
    u8 byte_132ad;
};
GUEST_OFFSET(NetSession, byte_132ad, 0x132ad);

inline constexpr guest::Function<0x0075e830, u32(u32, u32)> entry_id;
inline constexpr guest::Function<0x0075e840, u32(u32, u32)> entry_flag;

u32 NetSession__guest_entry_is_ready(gptr<NetSession> net_session) {
    u32 r0_3 = 0;
    u32 r1_1 = s8(net_session->byte_132ad);
    if (r1_1 != 0) {
        r1_1 = 0x13268u;
        u32 r4_1 = *gptr<u8>(r1_1 + net_session.addr());
        if (r4_1 < 4u) {
            u32 r0_1 = net_session.addr() + 0x1c1u;
            u32 r0_2 = entry_id(r0_1, r4_1);
            r1_1 = guest::cpu()->r[1];
            if (r0_2 >= 0xa5u) {
                return 0u;
            }
            r0_3 = entry_flag(r0_1, r4_1);
            r1_1 = guest::cpu()->r[1];
            if (r0_3 == 0) {
                return r0_3;
            }
        }
    }
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_0075de74
GUEST_EXPORT_FRAMED(0x0075de74, d_0075de74::NetSession__guest_entry_is_ready, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0075dedc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The address of player block `index` (below 4; 0x2520 bytes from +0x9db4), or 0.
namespace d_0075dedc {


u32 NetSession__player_block(u32 net_session, u32 r1) {
    if (r1 >= 4u) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    u32 r1_1 = r1 * 0x21u * 9u;
    guest::cpu()->r[1] = r1_1;
    return net_session + 0x9db4u + (r1_1 << 5);
}

}  // namespace d_0075dedc
GUEST_EXPORT(0x0075dedc, d_0075dedc::NetSession__player_block);

// f_0075df00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Appends a 16-bit packed entry (value bits, flag, count up to 0x1b, and the player's byte) for player `index` to a
// write cursor; the value.
namespace d_0075df00 {

struct __attribute__((packed)) NetSessionWritePlayerBitsArg1 {
    u32 word_0;
};
GUEST_OFFSET(NetSessionWritePlayerBitsArg1, word_0, 0x0);

inline constexpr guest::Function<0x0075e9f8, u32(u32, u32)> entry_signed_value;

struct __attribute__((packed)) NetSessionWritePlayerBitsFrame {
    u8 unknown_0[0x1];  // (not read or written by name)
    u8 byte_1;
    u8 unknown_2[0x2];  // (not read or written by name)
};
GUEST_OFFSET(NetSessionWritePlayerBitsFrame, byte_1, 0x1);
GUEST_SIZE(NetSessionWritePlayerBitsFrame, 0x4);

u32 NetSession__write_player_bits(u32 net_session, gptr<NetSessionWritePlayerBitsArg1> arg1, u32 r2, u32 r3) {
    guest::StackFrameOf<NetSessionWritePlayerBitsFrame> frame;  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r5_1 = *frame.at<u32>(0x20);
    if (r2 < 4u && arg1.addr() != 0 && arg1->word_0 != 0) {
        u32 r0_2 = entry_signed_value(net_session + 0x58u, r2);
        *frame.at<u32>(0) = 0;
        if (r5_1 >= 0x1bu) {
            r5_1 = 0x1bu;
        }
        *frame.at<u8>(0) = u8(((r0_2 & 3u | u32(*frame.at<u8>(0)) & ~3u) & ~4u | 4u & r3 << 2) & ~0xf8u | 0xf8u & r5_1 << 3);
        frame->byte_1 = *gptr<u8>(net_session + r2 + 0x132a4u);
        u32 r1_1 = arg1->word_0;
        *gptr<u16>(r1_1) = *frame.at<u16>(0);
        arg1->word_0 = r1_1 + 2u;
        return r0_2;
    }
    return 0u;
}

}  // namespace d_0075df00
GUEST_EXPORT_FRAMED(0x0075df00, d_0075df00::NetSession__write_player_bits, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_0075e124: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the network part is ready for the current mode: always below mode 2; else by the session's part state and
// mode, or byte 0x27 when the main object is busy.
namespace d_0075e124 {

inline constexpr u32 net_session_address = 0x0095362cu;
inline guest::global<u32, 0x0095362c> net_session;
inline constexpr guest::Function<0x0030b6c4, u32(u32, u32)> main_object_idle;
inline constexpr guest::Function<0x00625690, u32(u32, u32, u32, u32)> current_mode;
inline constexpr guest::Function<0x0075dfdc, u32(u32)> NetSession__mode;
inline constexpr guest::Function<0x0075e2fc, u32(u32, u32)> free_station_slot;
inline constexpr guest::Function<0x0075e858, u32(u32, u32)> NetSession__first_station_with_bit;

u32 net_ready_for_mode(u32 r0, u32 r1) {
    u32 mode = current_mode(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    if (mode > 1u) {
        u32 r0_2 = main_object_idle(mode, r1_1);
        r1_1 = guest::cpu()->r[1];
        if (r0_2 != 0) {
            u32 r4_1 = *net_session + 0x1c0u;
            u32 r0_3 = free_station_slot(r4_1, r1_1);
            r1_1 = guest::cpu()->r[1];
            if (r0_3 < 4u) {
                return 0u;
            }
            u32 r0_5 = NetSession__first_station_with_bit(r4_1 + 1u, 0x8cu);
            r1_1 = NetSession__mode(*net_session) - 1u;
            if (r0_5 != r1_1) {
                guest::cpu()->r[1] = r1_1;
                return 0u;
            }
            guest::cpu()->r[1] = r1_1;
            return 1u;
        }
        if (*gptr<u8>(r0) == 0x27u) {
            guest::cpu()->r[1] = r1_1;
            return 1u;
        }
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_0075e124
GUEST_EXPORT_FRAMED(0x0075e124, d_0075e124::net_ready_for_mode, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0075e1e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The value (0062624c) of the entry found by 00624038, or -1.
namespace d_0075e1e0 {

inline constexpr guest::Function<0x00624038, u32(u32, u32, u32, u32)> net_session_call_75f63c;
inline constexpr guest::Function<0x0062624c, u32(u32, u32, u32, u32)> net_session_call_6184d8;

u32 value_of_first_entry_624038() {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = net_session_call_75f63c(0u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 == 0) {
        return ~0u;
    }
    frame.release();
    return net_session_call_6184d8(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0075e1e0
GUEST_EXPORT(0x0075e1e0, d_0075e1e0::value_of_first_entry_624038);

// f_0075e208: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the id is 0 or one of the three words at +0.
namespace d_0075e208 {

struct __attribute__((packed)) MatchesOneOfThreeArg0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(MatchesOneOfThreeArg0, word_0, 0x0);
GUEST_OFFSET(MatchesOneOfThreeArg0, word_4, 0x4);
GUEST_OFFSET(MatchesOneOfThreeArg0, word_8, 0x8);

struct __attribute__((packed)) MatchesOneOfThreeArg1 {
    u32 word_0;
};
GUEST_OFFSET(MatchesOneOfThreeArg1, word_0, 0x0);


u32 matches_one_of_three(gptr<MatchesOneOfThreeArg0> arg0, gptr<MatchesOneOfThreeArg1> arg1) {
    u32 r1_1 = arg1->word_0;
    if (r1_1 == 0 || arg0->word_0 == r1_1) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    if (arg0->word_4 != r1_1 && arg0->word_8 != r1_1) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_0075e208
GUEST_EXPORT(0x0075e208, d_0075e208::matches_one_of_three);

// f_0075e23c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Word +0x11ae0.
namespace d_0075e23c {

struct __attribute__((packed)) Word11ae0Arg0 {
    u8 unknown_0[0x11ae0];  // (not used here)
    u32 word_11ae0;
};
GUEST_OFFSET(Word11ae0Arg0, word_11ae0, 0x11ae0);


u32 word_11ae0(gptr<Word11ae0Arg0> arg0) {
    return arg0->word_11ae0;
}

}  // namespace d_0075e23c
GUEST_EXPORT(0x0075e23c, d_0075e23c::word_11ae0);

// f_0075e260: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The address of 0xbc-byte entry `index` from +0x10.
namespace d_0075e260 {


u32 entry_188_at(u32 r0, u32 r1) {
    u32 r1_1 = r1 * 0xfu + (r1 << 5);
    guest::cpu()->r[1] = r1_1;
    return r0 + (r1_1 << 2) + 0x10u;
}

}  // namespace d_0075e260
GUEST_EXPORT(0x0075e260, d_0075e260::entry_188_at);

// f_0075e2fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The first of four station slots the table leaves free (4 when none), offline; online, the object's slot.
namespace d_0075e2fc {

struct __attribute__((packed)) FreeStationSlotArg0 {
    u8 unknown_0[0xf];  // (not used here)
    u8 byte_f;
};
GUEST_OFFSET(FreeStationSlotArg0, byte_f, 0xf);

inline constexpr u32 net_session_address = 0x0095362cu;
inline guest::global<u32, 0x0095362c> net_session;
inline constexpr guest::Function<0x0075dfe8, u32(u32, u32, u32, u32)> NetSession__station;
inline constexpr guest::Function<0x0075ea7c, u32(u32, u32)> table_byte_without_session_station;

u32 free_station_slot(gptr<FreeStationSlotArg0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r0_5 = 0;
    u32 r5 = r0;
    if (NetSession__station(*net_session, r1, guest::cpu()->r[2], guest::cpu()->r[3]) == 0) {
        u32 i = 0u;
        do {
            u32 r6_1 = i & 0xffu;
            if (table_byte_without_session_station(r5 + 6u, r6_1) == 0) {
                return r6_1;
            }
            i += 1u;
            guest::preempt();
        } while (s32(i) < 4);
        r0_5 = 4u;
    } else {
        r0_5 = arg0->byte_f;
    }
    return r0_5;
}

}  // namespace d_0075e2fc
GUEST_EXPORT_FRAMED(0x0075e2fc, d_0075e2fc::free_station_slot, 0x4070);  // pushes {i, r5, r6, lr} first, as the original

// f_0075e35c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the first station with a bit (arg 0 + 1) is the net session's mode.
namespace d_0075e35c {

inline constexpr u32 net_session_address = 0x0095362cu;
inline guest::global<u32, 0x0095362c> net_session;
inline constexpr guest::Function<0x0075dfdc, u32(u32)> NetSession__mode;
inline constexpr guest::Function<0x0075e858, u32(u32, u32, u32, u32)> NetSession__first_station_with_bit;

u32 station_bit_matches_mode(u32 r0) {
    u32 r0_2 = NetSession__first_station_with_bit(r0 + 1u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_5 = r0_2 == NetSession__mode(*net_session);
    return r0_5;
}

}  // namespace d_0075e35c
GUEST_EXPORT_FRAMED(0x0075e35c, d_0075e35c::station_bit_matches_mode, 0x4010);  // pushes {r4, lr} first, as the original

// f_0075e38c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The entry id of the visitor's station (or of the first station without an entry when there is no session station);
// 0xa5 when none.
namespace d_0075e38c {

struct __attribute__((packed)) StationEntryIdArg0 {
    u8 unknown_0[0xf];  // (not used here)
    u8 byte_f;
};
GUEST_OFFSET(StationEntryIdArg0, byte_f, 0xf);

inline constexpr u32 net_session_address = 0x0095362cu;
inline constexpr guest::Function<0x0075dfe8, u32(u32, u32, u32, u32)> NetSession__station;
inline constexpr guest::Function<0x0075ea44, u32(u32, u32)> entry_id_for_station_0;
inline constexpr guest::Function<0x0075ea7c, u32(u32, u32)> table_byte_without_session_station;

u32 station_entry_id(gptr<StationEntryIdArg0> arg0, u32 r1) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r4 = 0;
    u32 r6 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_6 = 0;
    u32 r5 = r0;
    u32 r7 = net_session_address;
    u32 r0_2 = NetSession__station(*gptr<u32>(r7), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        r4 = 0u;
        goto L_75e3dc;
    } else {
        r6 = arg0->byte_f;
    }
L_75e3b0:;
    if (r6 >= 4u) {
        guest::cpu()->r[1] = r1;
        return 0xa5u;
    }
    r0_3 = *gptr<u32>(r7);
    r0_4 = NetSession__station(r0_3, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_4 != 0) {
        return *gptr<u8>(r5 + 0xeu);
    }
    r0_6 = r5 + 6u;
    frame.release();
    return entry_id_for_station_0(r0_6, r6);
L_75e3dc:;
    r6 = r4 & 0xffu;
    u32 r0_8 = table_byte_without_session_station(r5 + 6u, r6);
    r1 = guest::cpu()->r[1];
    if (r0_8 == 0) {
        guest::preempt();
        goto L_75e3b0;
    }
    r4 += 1u;
    if (s32(r4) < 4) {
        guest::preempt();
        goto L_75e3dc;
    }
    return 0xa5u;
}

}  // namespace d_0075e38c
GUEST_EXPORT(0x0075e38c, d_0075e38c::station_entry_id);

// f_0075e448: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether, without a session station, one of the four stations has a free entry.
namespace d_0075e448 {

inline constexpr u32 net_session_address = 0x0095362cu;
inline guest::global<u32, 0x0095362c> net_session;
inline constexpr guest::Function<0x0075dfe8, u32(u32, u32, u32, u32)> NetSession__station;
inline constexpr guest::Function<0x0075ea7c, u32(u32, u32)> table_byte_without_session_station;

u32 has_free_station(u32 r0, u32 r1) {
    u32 r5 = r0;
    if (NetSession__station(*net_session, r1, guest::cpu()->r[2], guest::cpu()->r[3]) == 0) {
        u32 i = 0u;
        do {
            if (table_byte_without_session_station(r5 + 6u, i & 0xffu) < 4u) {
                return 1u;
            }
            i += 1u;
            guest::preempt();
        } while (s32(i) < 4);
    }
    return 0u;
}

}  // namespace d_0075e448
GUEST_EXPORT_FRAMED(0x0075e448, d_0075e448::has_free_station, 0x4070);  // pushes {i, r5, r6, lr} first, as the original

// f_0075e4a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the peer found for `id` has a recorded address (+0x3860 table, under the lock) that matches; true when
// found.
namespace d_0075e4a0 {

struct __attribute__((packed)) NetPeer {
    u8 unknown_0[0x42aa];  // (not used here)
    u8 byte_42aa;
};
GUEST_OFFSET(NetPeer, byte_42aa, 0x42aa);

struct __attribute__((packed)) Local_0075e4a0_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0075e4a0_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0075e4a0_ea_1, word_4, 0x4);

inline guest::global<u32, 0x0095362c> net_session;
inline constexpr guest::Function<0x00135748, u32(u32, u32)> RecursiveLock__lock;
inline constexpr guest::Function<0x001357ec, u32(u32)> RecursiveLock__unlock;
inline constexpr guest::Function<0x00625678, u32(u32, u32, u32, u32)> net_peer_in_use;
inline constexpr guest::Function<0x00747660, u32(u32, u32)> NetAddress__differs;
inline constexpr guest::Function<0x0075e978, u32(u32, u32)> PeerTable__find;
inline constexpr guest::Function<0x0075f1f8, u32(u32, u32, u32)> NetPlayers__slot_identity_is_set;

struct __attribute__((packed)) NetPeerIsKnownFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(NetPeerIsKnownFrame, word_0, 0x0);
GUEST_OFFSET(NetPeerIsKnownFrame, word_4, 0x4);
GUEST_OFFSET(NetPeerIsKnownFrame, word_8, 0x8);
GUEST_SIZE(NetPeerIsKnownFrame, 0xc);

u32 NetPeer__is_known(gptr<NetPeer> net_peer, u32 r1, u32 r2) {
    guest::StackFrameOf<NetPeerIsKnownFrame> frame;  // the original's stack frame
    u32 lock = net_peer.addr();
    u32 r0_1 = net_peer_in_use(r1, r1, r2, guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        frame->word_4 = 0;
        frame->word_8 = 0;
        NetPlayers__slot_identity_is_set(*net_session + 0xb0u, frame.at(0).addr(), r1);
        r1_1 = guest::cpu()->r[1];
        u32 r5_1 = ~0u;
        if (net_peer->byte_42aa != 0) {
            if (frame->word_0 == 0) {
                gptr<Local_0075e4a0_ea_1> ea_1 = gptr<Local_0075e4a0_ea_1>(frame.at(4).addr());
                r1_1 = ea_1->word_4;
                if ((ea_1->word_0 | r1_1) == 0) {
                    goto L_75e564;
                }
            }
            RecursiveLock__lock(lock, r1_1);
            u32 r0_4 = PeerTable__find(lock + 0x3860u, r0_1 + 4u);
            r5_1 = r0_4;
            if (s32(r0_4) >= 0) {
                if (NetAddress__differs(lock + r5_1 * 0xcu + 0x38e4u, frame.at(0).addr()) != 0) {
                    r5_1 = ~0u;
                }
            }
            RecursiveLock__unlock(lock);
            r1_1 = guest::cpu()->r[1];
        }
L_75e564:;
        r0_1 = u32(s32(r5_1) >> 0x1f) + 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0075e4a0
GUEST_EXPORT_FRAMED(0x0075e4a0, d_0075e4a0::NetPeer__is_known, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0075e57c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The index of the recorded peer (+0x3860 table, under the lock) for a friend's key, -1 when it is unknown or does not
// match.
namespace d_0075e57c {

struct __attribute__((packed)) NetPeer {
    u8 unknown_0[0x42aa];  // (not used here)
    u8 byte_42aa;
};
GUEST_OFFSET(NetPeer, byte_42aa, 0x42aa);

struct __attribute__((packed)) NetPeerIndexOfFriendArg1 {
    u32 word_0;
};
GUEST_OFFSET(NetPeerIndexOfFriendArg1, word_0, 0x0);

struct __attribute__((packed)) Local_0075e57c_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0075e57c_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0075e57c_ea_1, word_4, 0x4);

inline constexpr u32 friend_list_instance_address = 0x009529ccu;
inline guest::global<u32, 0x009529cc> friend_list_instance;
inline constexpr guest::Function<0x00135748, u32(u32, u32)> RecursiveLock__lock;
inline constexpr guest::Function<0x001357ec, u32(u32)> RecursiveLock__unlock;
inline constexpr guest::Function<0x001aa4a0, u32(u32, u32, u32, u32)> FriendList__key_of;
inline constexpr guest::Function<0x00747660, u32(u32, u32)> NetAddress__differs;
inline constexpr guest::Function<0x0075e978, u32(u32, u32)> PeerTable__find;

struct __attribute__((packed)) NetPeerIndexOfFriendFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(NetPeerIndexOfFriendFrame, word_0, 0x0);
GUEST_OFFSET(NetPeerIndexOfFriendFrame, word_4, 0x4);
GUEST_OFFSET(NetPeerIndexOfFriendFrame, word_8, 0x8);
GUEST_SIZE(NetPeerIndexOfFriendFrame, 0xc);

u32 NetPeer__index_of_friend(gptr<NetPeer> net_peer, gptr<NetPeerIndexOfFriendArg1> arg1, u32 r2) {
    guest::StackFrameOf<NetPeerIndexOfFriendFrame> frame;  // the original's stack frame
    frame->word_4 = 0;
    frame->word_8 = 0;
    frame->word_0 = arg1->word_0;
    FriendList__key_of(*friend_list_instance, arg1.addr(), frame.at(4).addr(), guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r5_1 = ~0u;
    if (net_peer->byte_42aa != 0) {
        if (frame->word_0 == 0) {
            gptr<Local_0075e57c_ea_1> ea_1 = gptr<Local_0075e57c_ea_1>(frame.at(4).addr());
            r1_1 = ea_1->word_4;
            if ((ea_1->word_0 | r1_1) == 0) {
                guest::cpu()->r[1] = r1_1;
                return r5_1;
            }
        }
        RecursiveLock__lock(net_peer.addr(), r1_1);
        u32 r0_3 = PeerTable__find(net_peer.addr() + 0x3860u, r2);
        r5_1 = r0_3;
        if (s32(r0_3) >= 0) {
            if (NetAddress__differs(net_peer.addr() + r5_1 * 0xcu + 0x38e4u, frame.at(0).addr()) != 0) {
                r5_1 = ~0u;
            }
        }
        RecursiveLock__unlock(net_peer.addr());
        r1_1 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1_1;
    return r5_1;
}

}  // namespace d_0075e57c
GUEST_EXPORT_FRAMED(0x0075e57c, d_0075e57c::NetPeer__index_of_friend, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0075e7ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Byte +0x24 of player `index` (below 4), read under the session lock.
namespace d_0075e7ac {

inline guest::global<u32, 0x0095362c> net_session;
inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> lock_member_lock;
inline constexpr guest::Function<0x00137e84, u32(u32)> unlock_member_lock;

u32 NetSession__player_byte_24(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    if (r1 >= 4u) {
        r0_1 = 0u;
    } else {
        u32 r0_2 = *net_session + 0x13280u;
        lock_member_lock(r0_2, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r5_1 = *gptr<u8>(r0 + r1 + 0x24u);
        unlock_member_lock(r0_2);
        r0_1 = r5_1;
    }
    return r0_1;
}

}  // namespace d_0075e7ac
GUEST_EXPORT_FRAMED(0x0075e7ac, d_0075e7ac::NetSession__player_byte_24, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0075e978: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The index of the entry (of 32 four-byte entries) with this id pair, or -1 (the empty id never matches).
namespace d_0075e978 {

struct __attribute__((packed)) PeerTableFindArg1 {
    u16 half_0;
    u16 half_2;
};
GUEST_OFFSET(PeerTableFindArg1, half_0, 0x0);
GUEST_OFFSET(PeerTableFindArg1, half_2, 0x2);

struct __attribute__((packed)) Local_0075e978_r12 {
    u16 half_0;
};
GUEST_OFFSET(Local_0075e978_r12, half_0, 0x0);


u32 PeerTable__find(u32 peer_table, gptr<PeerTableFindArg1> arg1) {
    u32 r1 = arg1.addr();
    u32 r5 = guest::cpu()->r[5];
    gptr<Local_0075e978_r12> r12 = gptr<Local_0075e978_r12>(0x88f298u);
    u32 r2 = peer_table;
    u32 r4 = arg1->half_0;
    u32 zf_1 = r4 == r12->half_0;
    if (!zf_1) {
        r5 = arg1->half_2;
        zf_1 = r5 == 0;
    }
    if (!zf_1) {
        peer_table = 0u;
        do {
            r1 = r2 + (peer_table << 2);
            u32 r3_1 = *gptr<u16>(r1);
            u32 zf_2 = r3_1 == r12->half_0;
            if (!zf_2) {
                r1 = *gptr<u16>(r1 + 2u);
                zf_2 = r1 == 0;
            }
            if (!zf_2 && r3_1 == r4 && r1 == r5) {
                guest::cpu()->r[1] = r1;
                return peer_table;
            }
            peer_table += 1u;
            guest::preempt();
        } while (peer_table < 0x20u);
    }
    guest::cpu()->r[1] = r1;
    return ~0u;
}

}  // namespace d_0075e978
GUEST_EXPORT_FRAMED(0x0075e978, d_0075e978::PeerTable__find, 0x70);  // pushes {r4, r5, r6} first, as the original

// f_0075ef68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the address is set (not the empty pair -3, -1) and its host accepts it (or has none).
namespace d_0075ef68 {

struct __attribute__((packed)) NetAddress {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
    u32 link_sub;
};
GUEST_OFFSET(NetAddress, word_8, 0x8);
GUEST_OFFSET(NetAddress, word_c, 0xc);
GUEST_OFFSET(NetAddress, link_sub, 0x10);

inline constexpr guest::Function<0x007475e0, u32(u32, u32, u32, u32)> LinkSub__state_locked;

u32 NetAddress__is_usable(gptr<NetAddress> net_address) {
    u32 r3_1 = ~0u;
    u32 r2_1 = net_address->word_8 ^ ~2u;
    u32 r1_1 = net_address->word_c ^ r3_1 | r2_1;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 link_sub = net_address->link_sub;
    if (link_sub == 0) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    return LinkSub__state_locked(link_sub, r1_1, r2_1, r3_1);
}

}  // namespace d_0075ef68
GUEST_EXPORT(0x0075ef68, d_0075ef68::NetAddress__is_usable);

// f_0075efdc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Word `index` (below 4) of the table at +0x1c, or 0.
namespace d_0075efdc {


u32 word_1c_at(u32 r0, u32 r1) {
    return r1 >= 4u ? 0u : *gptr<u32>(r0 + (r1 << 2) + 0x1cu);
}

}  // namespace d_0075efdc
GUEST_EXPORT(0x0075efdc, d_0075efdc::word_1c_at);

// f_0075f020: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the network part allows `kind` (below 6): when its check passes, or its mask (+8) has the kind's bit.
namespace d_0075f020 {

struct __attribute__((packed)) NetPart {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
};
GUEST_OFFSET(NetPart, byte_8, 0x8);

inline constexpr guest::Function<0x0075f0b0, u32(u32, u32)> PartMask__allows;

u32 NetPart__allows(gptr<NetPart> net_part, u32 r1) {
    u32 r0_1 = PartMask__allows(net_part.addr(), r1);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        u32 r0_2 = net_part->byte_8;
        r1_1 = lsl_r(1u, r1 & 0xff);
        if (r0_2 != 0 && r1 < 6u) {
            u32 r2_1 = r1_1 & 0xffu;
            if ((r2_1 & 0x3fu) != 0 && (r2_1 & r0_2) != 0 && (r0_2 & 0x80u) >> 7 == 1u) {
                guest::cpu()->r[1] = r1_1;
                return 1u;
            }
        }
        if (r0_2 != 0 && r1 < 6u) {
            r1_1 &= 0xffu;
            if ((r1_1 & 0x3fu) != 0 && (r1_1 & r0_2) != 0) {
                if (((r0_2 & 0x80u) >> 7) == 0) {
                    guest::cpu()->r[1] = r1_1;
                    return 1u;
                }
            }
        }
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_0075f020
GUEST_EXPORT_FRAMED(0x0075f020, d_0075f020::NetPart__allows, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0075f0b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether a part (arg 1, below 6) is allowed: by the first of eight entries that names it (its high bit
// clear), else by the ninth entry, else by the mask at offset 9.
namespace d_0075f0b0 {


u32 PartMask__allows(u32 r0, u32 r1) {
    if (r1 < 6u) {
        u32 r5 = 1u;
        u32 r6 = lsl_r(r5, r1 & 0xff);
        u32 r12 = r6 & 0xffu;
        if ((r12 & 0x3fu) != 0) {
            u32 r2 = r0;
            u32 r3 = 0u;
            do {
                if (r12 == (u32(*gptr<u8>(r2)) & 0x7fu)) {
                    u32 r0_1 = (u32(*gptr<u8>(r2)) & 0x80u) >> 7 ^ 1u;
                    guest::cpu()->r[1] = r1;
                    return r0_1;
                }
                r3 += 1u;
                r2 += 1u;
                if (s32(r3) >= 8) {
                    u32 r2_1 = *gptr<u8>(r0 + 8u);
                    if (r2_1 != 0 && (r2_1 & 0x7fu) == r12) {
                        guest::cpu()->r[1] = r1;
                        return (r2_1 & 0x80u) >> 7 ^ 1u;
                    }
                    if (r1 < 6u) {
                        r1 = r6 & 0xffu;
                        if ((r1 & 0x3fu) != 0 && (u32(*gptr<u8>(r0 + 9u)) & r1) != 0) {
                            guest::cpu()->r[1] = r1;
                            return r5;
                        }
                    }
                    guest::cpu()->r[1] = r1;
                    return 0u;
                }
                guest::preempt();
            } while (1);
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_0075f0b0
GUEST_EXPORT_FRAMED(0x0075f0b0, d_0075f0b0::PartMask__allows, 0x70);  // pushes {r4, r5, r6} first, as the original

// f_0075f17c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the mask entry (byte 8) has the part (arg 1, below 6) with its high bit equal to arg 2.
namespace d_0075f17c {

struct __attribute__((packed)) PartCheckF17cArg0 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
};
GUEST_OFFSET(PartCheckF17cArg0, byte_8, 0x8);


u32 PartMask__entry_matches(gptr<PartCheckF17cArg0> arg0, u32 r1, u32 r2) {
    u32 r0_1 = arg0->byte_8;
    if (r0_1 == 0) {
        return r0_1;
    }
    if (r1 >= 6u) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    u32 r1_1 = lsl_r(1u, r1 & 0xff) & 0xffu;
    if ((r1_1 & 0x3fu) == 0 || (r1_1 & r0_1) == 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    if ((r0_1 & 0x80u) >> 7 == r2) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_0075f17c
GUEST_EXPORT(0x0075f17c, d_0075f17c::PartMask__entry_matches);

// f_0075f34c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the four 8-byte ids match the ids (+0x10) of the four 0x18-byte entries.
namespace d_0075f34c {

struct __attribute__((packed)) Local_0075f34c_r2_1 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_0075f34c_r2_1, word_10, 0x10);
GUEST_OFFSET(Local_0075f34c_r2_1, word_14, 0x14);

inline constexpr guest::Function<0x003081b4, u32(u32, u32, u32, u32)> copy_8_bytes;

struct __attribute__((packed)) FourIdsMatchFrame {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(FourIdsMatchFrame, word_0, 0x0);
GUEST_OFFSET(FourIdsMatchFrame, word_4, 0x4);
GUEST_SIZE(FourIdsMatchFrame, 0xc);

u32 four_ids_match(u32 r0, u32 r1) {
    guest::StackFrameOf<FourIdsMatchFrame> frame;  // the original's stack frame
    u32 r1_1 = 0;
    u32 r5 = r0;
    u32 r6 = r1;
    u32 i = 0u;
    u32 r7 = frame.at(0).addr();
    do {
        u32 r3_1 = r6 + (i << 3);
        frame->word_0 = 0;
        frame->word_4 = 0;
        copy_8_bytes(r7, r3_1, 0u, r3_1);
        gptr<Local_0075f34c_r2_1> r2_1 = gptr<Local_0075f34c_r2_1>(r5 + i * 0x18u);
        r1_1 = frame->word_0 ^ r2_1->word_10;
        if ((frame->word_4 ^ r2_1->word_14 | r1_1) != 0) {
            guest::cpu()->r[1] = r1_1;
            return 0u;
        }
        i += 1u;
        guest::preempt();
    } while (s32(i) < 4);
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_0075f34c
GUEST_EXPORT_FRAMED(0x0075f34c, d_0075f34c::four_ids_match, 0x40f0);  // pushes {i, r5, r6, r7, lr} first, as the original

// f_0075f448: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the address of peer `index` (below 4) is usable, read under the session lock.
namespace d_0075f448 {

inline guest::global<u32, 0x0095362c> net_session;
inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> lock_member_lock;
inline constexpr guest::Function<0x00137e84, u32(u32)> unlock_member_lock;
inline constexpr guest::Function<0x0075ef68, u32(u32)> NetAddress__is_usable;

u32 NetSession__peer_address_is_usable(u32 r0, u32 r1) {
    u32 r0_1 = *net_session + 0x13280u;
    lock_member_lock(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r1 < 4u) {
        u32 net_address = r0 + r1 * 0x18u + 8u;
        if (net_address != 0) {
            u32 r0_3 = NetAddress__is_usable(net_address);
            unlock_member_lock(r0_1);
            return r0_3;
        }
    }
    unlock_member_lock(r0_1);
    return 0u;
}

}  // namespace d_0075f448
GUEST_EXPORT_FRAMED(0x0075f448, d_0075f448::NetSession__peer_address_is_usable, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0075f578: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The peer index of this console's address, or 4 when it has none.
namespace d_0075f578 {

struct __attribute__((packed)) Local_0075f578_r0_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0075f578_r0_1, word_0, 0x0);
GUEST_OFFSET(Local_0075f578_r0_1, word_4, 0x4);

inline constexpr u32 request_pool_address = 0x00a22020u;
inline constexpr guest::Function<0x00746e74, u32(u32)> RequestPool__local_identity;
inline constexpr guest::Function<0x0075f3cc, u32(u32, u32)> NetStation__identity_differs;

u32 own_peer_index(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    gptr<Local_0075f578_r0_1> r0_1 = gptr<Local_0075f578_r0_1>(RequestPool__local_identity(request_pool_address));
    if ((r0_1->word_0 ^ ~2u | r0_1->word_4 ^ ~0u) == 0) {
        guest::cpu()->r[1] = r0_1.addr();
        return 4u;
    }
    frame.release();
    return NetStation__identity_differs(r0, r0_1.addr());
}

}  // namespace d_0075f578
GUEST_EXPORT(0x0075f578, d_0075f578::own_peer_index);

// f_0075f644: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The identity of the slot's player (below 4) when present, under the lock.
namespace d_0075f644 {

struct __attribute__((packed)) Local_0075f644_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0075f644_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0075f644_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_0075f644_r0_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0075f644_r0_2, word_0, 0x0);
GUEST_OFFSET(Local_0075f644_r0_2, word_4, 0x4);

struct __attribute__((packed)) Local_0075f644_r5_1 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0075f644_r5_1, word_8, 0x8);
GUEST_OFFSET(Local_0075f644_r5_1, word_c, 0xc);

struct __attribute__((packed)) Local_0075f644_r5_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0075f644_r5_2, word_0, 0x0);
GUEST_OFFSET(Local_0075f644_r5_2, word_4, 0x4);

inline constexpr u32 request_pool_address = 0x00a22020u;
inline guest::global<u32, 0x0095362c> net_session;
inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> lock_member_lock;
inline constexpr guest::Function<0x00137e84, u32(u32, u32)> unlock_member_lock;
inline constexpr guest::Function<0x00746e74, u32(u32)> RequestPool__local_identity;
inline constexpr guest::Function<0x00746e90, u32(u32, u32)> RequestPool__is_local_identity;

struct __attribute__((packed)) NetPlayersIdentityOfSlotFrame {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(NetPlayersIdentityOfSlotFrame, word_0, 0x0);
GUEST_OFFSET(NetPlayersIdentityOfSlotFrame, word_4, 0x4);
GUEST_SIZE(NetPlayersIdentityOfSlotFrame, 0xc);

u32 NetPlayers__identity_of_slot(u32 net_players, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<NetPlayersIdentityOfSlotFrame> frame;  // the original's stack frame
    gptr<Local_0075f644_r5_1> r5_1 = gptr<Local_0075f644_r5_1>(0u);
    u32 r0_1 = *net_session + 0x13280u;
    lock_member_lock(r0_1, r1, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    if (r1 < 4u) {
        r5_1 = gptr<Local_0075f644_r5_1>(net_players + r1 * 0x18u + 8u);
        if (r5_1.addr() != 0) {
            r1_1 = r5_1->word_8 ^ ~2u;
            if ((r5_1->word_c ^ ~0u | r1_1) != 0) {
                if (r2 == 0) {
                    goto L_75f6f0;
                }
                gptr<Local_0075f644_ea_1> ea_1 = gptr<Local_0075f644_ea_1>(r5_1.addr() + 8u);
                u32 r1_2 = ea_1->word_4;
                frame->word_0 = ea_1->word_0;
                frame->word_4 = r1_2;
                gptr<Local_0075f644_r0_2> r0_2 = gptr<Local_0075f644_r0_2>(RequestPool__local_identity(request_pool_address));
                r1_1 = frame->word_0;
                if ((r0_2->word_4 ^ frame->word_4 | r0_2->word_0 ^ r1_1) != 0) {
                    goto L_75f6f0;
                }
            }
        }
    }
    unlock_member_lock(r0_1, r1_1);
    return 0u;
L_75f6f0:;
    gptr<Local_0075f644_r5_2> r5_2 = gptr<Local_0075f644_r5_2>(r5_1.addr() + 8u);
    u32 r2_1 = r5_2->word_4;
    frame->word_0 = r5_2->word_0;
    frame->word_4 = r2_1;
    u32 r0_3 = RequestPool__is_local_identity(request_pool_address, frame.at(0).addr());
    unlock_member_lock(r0_1, guest::cpu()->r[1]);
    return r0_3;
}

}  // namespace d_0075f644
GUEST_EXPORT_FRAMED(0x0075f644, d_0075f644::NetPlayers__identity_of_slot, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0075f728: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the player may leave: not the main object, and the session does not forbid it.
namespace d_0075f728 {

struct __attribute__((packed)) NetPart {
    u8 unknown_0[0x3eb];  // (not used here)
    u8 byte_3eb;
    u8 byte_3ec;
};
GUEST_OFFSET(NetPart, byte_3eb, 0x3eb);
GUEST_OFFSET(NetPart, byte_3ec, 0x3ec);

inline guest::global<u32, 0x0095362c> net_session;
inline constexpr guest::Function<0x00300904, u32(u32, u32)> current_net_signed_value;
inline constexpr guest::Function<0x0075f020, u32(u32, u32)> NetPart__allows;

u32 NetPart__can_leave(gptr<NetPart> net_part) {
    u32 r0_1 = net_part.addr() + 0x300u;
    u32 r1_1 = net_part->byte_3ec;
    u32 zf_1 = r1_1 == 0;
    if (zf_1) {
        r0_1 = net_part->byte_3eb;
        zf_1 = r0_1 == 0;
    }
    if (zf_1) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    if (current_net_signed_value(r0_1, r1_1) != 0) {
        return 0u;
    }
    if (NetPart__allows(*net_session + 0x7874u, 0u) == 0) {
        return 1u;
    }
    return 0u;
}

}  // namespace d_0075f728
GUEST_EXPORT_FRAMED(0x0075f728, d_0075f728::NetPart__can_leave, 0x4010);  // pushes {r4, lr} first, as the original

// f_0075f780: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The value, read under the lock.
namespace d_0075f780 {

struct __attribute__((packed)) LockedValue {
    u8 unknown_0[0x24];  // (not used here)
    u32 word_24;
};
GUEST_OFFSET(LockedValue, word_24, 0x24);

inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> RecursiveLock__lock;
inline constexpr guest::Function<0x001357ec, u32(u32)> RecursiveLock__unlock;

u32 LockedValue__get(gptr<LockedValue> locked_value) {
    u32 lock = locked_value.addr() + 0x28u;
    RecursiveLock__lock(lock, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r4_1 = locked_value->word_24;
    RecursiveLock__unlock(lock);
    return r4_1;
}

}  // namespace d_0075f780
GUEST_EXPORT_FRAMED(0x0075f780, d_0075f780::LockedValue__get, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original
