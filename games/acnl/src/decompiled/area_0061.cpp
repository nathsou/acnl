// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen. Hexadecimal constants are the original's
// (addresses, offsets, sizes and ids as the game has them).
#include "guest/guest.hpp"
#include "core/time_stamp.hpp"
#include "graphics/hemisphere_light.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_00610d2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs the palette: its layout, buttons, heap, renderer and color names.
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
    u32 vtable;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Local_00610d2c_r0_18, vtable, 0x0);
GUEST_OFFSET(Local_00610d2c_r0_18, word_4, 0x4);
GUEST_OFFSET(Local_00610d2c_r0_18, word_8, 0x8);
GUEST_OFFSET(Local_00610d2c_r0_18, word_c, 0xc);
GUEST_OFFSET(Local_00610d2c_r0_18, word_10, 0x10);

struct __attribute__((packed)) Local_00610d2c_r0_23 {
    u32 vtable;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00610d2c_r0_23, vtable, 0x0);
GUEST_OFFSET(Local_00610d2c_r0_23, word_4, 0x4);
GUEST_OFFSET(Local_00610d2c_r0_23, word_8, 0x8);

inline constexpr u32 vtable_PickerMono = 0x008eb288u;
inline constexpr u32 vtable_Palette = 0x008f80dcu;
inline constexpr u32 vtable_sead__FixedSafeStringBase_wchar_t__6_ = 0x0090529cu;
inline constexpr u32 vtable_sead__BufferedSafeStringBase_wchar_t_ = 0x009055a0u;
inline guest::global<u32, 0x008490d0> global_008490d0;
inline guest::global<u32, 0x008490d4> global_008490d4;
inline guest::global<u16, 0x008c9f1e> default_object_id;
inline constexpr guest::Function<0x00125aec, u32(u32)> construct_layout_animation;
inline constexpr guest::Function<0x00125e3c, u32(u32)> Layout__Layout;
inline constexpr guest::Function<0x002f7604, u32(u32)> construct_button_action_control;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x005673c8, u32(u32, u32, u32, u32)> construct_heap_allocator;
inline constexpr guest::Function<0x005e3128, u32(u32, u32, u32, u32)> script__RenderTrace__RenderTrace;

u32 Palette__Palette(gptr<Palette> palette) {
    palette->word_4 = 0;
    palette->byte_8 = 0;
    u32 r2_1 = *global_008490d4;
    palette->word_c = *global_008490d0;
    palette->word_10 = r2_1;
    palette->word_14 = 0;
    palette->byte_18 = 0;
    palette->word_1c = 0;
    palette->vtable = vtable_Palette;
    palette->word_20 = 0;
    u32 r0_1 = palette.addr() + 0x24u;
    construct_heap_allocator(r0_1, vtable_Palette, r2_1, palette.addr() + 0xcu);
    u32 r0_6 = Layout__Layout(Layout__Layout(r0_1 + 8u) + 0x14cu) + 0x14cu;
    construct_layout_animation(r0_6);
    u32 r0_7 = r0_6 + 0x28u;
    construct_layout_animation(r0_7);
    u32 r0_8 = r0_7 + 0x28u;
    construct_layout_animation(r0_8);
    u32 r0_9 = r0_8 + 0x28u;
    construct_layout_animation(r0_9);
    u32 r0_10 = r0_9 + 0x28u;
    construct_layout_animation(r0_10);
    u32 r0_11 = r0_10 + 0x28u;
    construct_layout_animation(r0_11);
    u32 r0_12 = r0_11 + 0x28u;
    construct_layout_animation(r0_12);
    u32 r0_13 = r0_12 + 0x28u;
    construct_layout_animation(r0_13);
    u32 ea_1 = r0_13 + 0x28u;
    *gptr<u32>(ea_1) = 0;
    gptr<Local_00610d2c_r0_15> r0_15 = gptr<Local_00610d2c_r0_15>(Layout__Layout(ea_1 + 4u));
    r0_15->word_14c = 0;
    r0_15->word_150 = 0;
    r0_15->byte_154 = 0;
    u32 r0_17 = for_each_element(r0_15.addr() + 0x158u, 0x1ce394u, 0x34u, 0x10u);
    gptr<Local_00610d2c_r0_18> r0_18 = gptr<Local_00610d2c_r0_18>(r0_17 + 0x340u);
    r0_18->word_4 = 0;
    r0_18->word_8 = 0;
    r0_18->word_c = 0;
    r0_18->vtable = vtable_PickerMono;
    r0_18->word_10 = 0;
    u32 r0_21 = for_each_element(r0_17 + 0x3b4u, 0x2b6de0u, 0xe0u, 0x15u) + 0x1260u;
    construct_button_action_control(r0_21);
    u32 r0_22 = r0_21 + 0xe4u;
    construct_button_action_control(r0_22);
    *gptr<u32>(r0_22 + 0xe4u) = 0;
    gptr<Local_00610d2c_r0_23> r0_23 = gptr<Local_00610d2c_r0_23>(r0_22 + 0x128u);
    *gptr<u32>(r0_22 + 0x124u) = 0;
    r0_23->word_4 = r0_23.addr() + 0xcu;
    r0_23->word_8 = 6;
    r0_23->vtable = vtable_sead__BufferedSafeStringBase_wchar_t_;
    *gptr<u16>(r0_23->word_4 + 0xau) = *default_object_id;
    r0_23->vtable = vtable_sead__FixedSafeStringBase_wchar_t__6_;
    *gptr<u16>(r0_23->word_4) = *default_object_id;
    u32 r0_26 = script__RenderTrace__RenderTrace(r0_22 + 0x140u, 0x10u, r0_22 - 0x1c58u, 0x8c9f1eu) + 0xc4u;
    u32 r0_28 = script__RenderTrace__RenderTrace(r0_26, 0x10u, r0_22 - 0x1c58u, 0x8c9f1eu) - 0x1e5cu;
    *gptr<u32>(r0_28 + 0x1f20u) = 0;
    *gptr<u32>(r0_28 + 0x1f24u) = 0;
    *gptr<u32>(r0_28 + 0x1f28u) = 0;
    *gptr<u32>(r0_28 + 0x1f2cu) = 0;
    *gptr<u32>(r0_28 + 0x1f30u) = 0;
    *gptr<u32>(r0_28 + 0x1f44u) = 0;
    *gptr<u8>(r0_28 + 0x1f48u) = 0;
    *gptr<u8>((0x1f48u | u32(s32(0x1f48u) >> 0xc)) + r0_28) = 0;
    *gptr<u8>(r0_28 + 0x1f4au) = 0;
    *gptr<u8>((0x1f48u | u32(s32(0x1f48u) >> 0xb)) + r0_28) = 0;
    *gptr<u8>(r0_28 + 0x1f4cu) = 0;
    return r0_28;
}

}  // namespace d_00610d2c
GUEST_EXPORT_FRAMED(0x00610d2c, d_00610d2c::Palette__Palette, 0x4010);  // pushes {r4, lr} first, as the original

// f_006124bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// For a valid weather kind and `slot` (below 2): stores its layout name (or the default) in the slot's name field
// (+0x52c, 0xf4 bytes each); true otherwise.
namespace d_006124bc {

inline constexpr guest::Function<0x001b5d74, u32(u32)> model_name_of_id;
inline constexpr guest::Function<0x001b5d94, u32(u32, u32, u32, u32)> model_id_is_valid;
inline constexpr guest::Function<0x00335328, u32(u32, u32, u32)> load_camping_car_info;

u32 set_weather_layout_name(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = model_id_is_valid(r1, r1, r2, r3);
    if (r0_1 != 0 && r2 < 2u) {
        u32 model_name = model_name_of_id(r1);
        u32 r1_2 = model_name;
        if (model_name == 0) {
            r1_2 = 0x88766cu;
        }
        frame.release();
        return load_camping_car_info(r0 + ((r2 << 6) - r2 * 5u << 2) + 0x52cu, r1_2, 0u);
    }
    return 1u;
}

}  // namespace d_006124bc
GUEST_EXPORT(0x006124bc, d_006124bc::set_weather_layout_name);

// f_00612738: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Updates the weather's items for the day.
namespace d_00612738 {

struct __attribute__((packed)) Local_00612738_r4_1 {
    u8 unknown_0[0xc];  // (not used here)
    u16 half_c;
    u16 half_e;
};
GUEST_OFFSET(Local_00612738_r4_1, half_c, 0xc);
GUEST_OFFSET(Local_00612738_r4_1, half_e, 0xe);

inline constexpr u32 weather_items_a_address = 0x0095722cu;
inline constexpr u32 weather_items_b_address = 0x00957230u;
inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr u32 weather_item_state_address = 0x00a834a0u;
inline guest::global<u32, 0x0095722c> weather_items_a;
inline guest::global<u32, 0x00a834a0> weather_item_state;
inline constexpr guest::Function<0x001b545c, u32(u32)> id_below_399;
inline constexpr guest::Function<0x001b5d94, u32(u32)> model_id_is_valid;
inline constexpr guest::Function<0x002f74c8, u32(u32)> current_scene_id;
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32)> construct_empty_item;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;
inline constexpr guest::Function<0x002fcb34, u32(u32)> Item__category;
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32)> static_guard_acquire;
inline constexpr guest::Function<0x005b3ec4, u32(u32, u32, u32, u32)> read_scene_change_step;
inline constexpr guest::Function<0x0071f66c, u32(u32, u32)> construct_item_from_half_86;

struct __attribute__((packed)) UpdateWeatherItemsFrame {
    u32 word_0;
};
GUEST_OFFSET(UpdateWeatherItemsFrame, word_0, 0x0);
GUEST_SIZE(UpdateWeatherItemsFrame, 0x4);

u32 update_weather_items(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<UpdateWeatherItemsFrame> frame;  // the original's stack frame
    u32 r4_2 = 0;
    u32 r0_6 = 0;
    u32 r0_14 = 0;
    frame->word_0 = r3;
    u32 r0_1 = read_scene_change_step(r0, r1, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    if (r0_1 != 0) {
        u32 r0_2 = *weather_items_a;
        if ((r0_2 & 1u) == 0) {
            r0_2 = static_guard_acquire(weather_items_a_address, r1_1, r2_1);
            r1_1 = guest::cpu()->r[1];
            r2_1 = guest::cpu()->r[2];
            if (r0_2 != 0) {
                construct_empty_item(weather_items_b_address, r1_1, r2_1);
                r2_1 = 0x100000u;
                r1_1 = 0x2f777cu;
                r0_2 = weather_items_a_address;
            }
        }
        u32 save_data = get_save_data(r0_2, r1_1, r2_1);
        u32 r0_4 = save_data + 0x62250u;
        gptr<Local_00612738_r4_1> r4_1 = gptr<Local_00612738_r4_1>(r0_4 + 0x8c04u);
        if (r4_1.addr() != 0) {
            u32 scene_3 = current_scene_id(r0_4);
            if (scene_3 != 0xa1u) {
                if (scene_3 == 0xa2u) {
                    goto L_6127e0;
                }
                goto L_6127f8;
            }
            r4_2 = r4_1->half_c;
            r0_6 = model_id_is_valid(r4_2);
            if (r0_6 != 0) {
                goto L_6127fc;
            }
            goto L_6127f8;
L_6127e0:;
            r4_2 = r4_1->half_e;
            if (model_id_is_valid(r4_2) != 0) {
                goto L_6127fc;
            }
        }
L_6127f8:;
        r4_2 = 0xffffu;
L_6127fc:;
        u32 r0_8 = id_below_399(r4_2);
        if (r0_8 != 0) {
            u32 r0_9 = *weather_item_state;
            u32 zf_1 = r0_9 == 0;
            u32 cf_1 = r0_9 >= 0u;
            if (!zf_1) {
                zf_1 = 0x18fu == r4_2;
                cf_1 = 0x18fu >= r4_2;
            }
            if (cf_1 && !zf_1) {
                u32 r0_10 = r0_9 + (r4_2 * 3u + (r4_2 << 3) << 3);
                if (r0_10 != 0) {
                    u32 r4_3 = r0_10 + 4u;
                    u32 category = Item__category(r4_3);
                    if (category == 0x2fu) {
                        return r4_3;
                    }
                }
            }
        } else {
            u32 scene_4 = current_scene_id(r0_8);
            if (scene_4 == 0xa1u) {
                r0_14 = r0_1 + 0x52cu;
            } else if (scene_4 == 0xa2u) {
                r0_14 = r0_1 + 0x618u;
            } else {
                return empty_item_address;
            }
            u32 r0_15 = *gptr<u32>(r0_14 + 0xd0u);
            if (r0_15 != 0) {
                construct_item_from_half_86(frame.at(0).addr(), r0_15);
                Item__copy(weather_items_b_address, frame.at(0).addr());
                u32 category_2 = Item__category(weather_items_b_address);
                if (category_2 == 0x2fu) {
                    return weather_items_b_address;
                }
            }
        }
    }
    return empty_item_address;
}

}  // namespace d_00612738
GUEST_EXPORT_FRAMED(0x00612738, d_00612738::update_weather_items, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0061290c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts loading the camping car's four info files on the stage heap, and sets the weather layout names from
// the saved record; 1 once all have started.
namespace d_0061290c {

struct __attribute__((packed)) Local_0061290c_r5_1 {
    u8 unknown_0[0xc];  // (not used here)
    u16 half_c;
    u16 half_e;
};
GUEST_OFFSET(Local_0061290c_r5_1, half_c, 0xc);
GUEST_OFFSET(Local_0061290c_r5_1, half_e, 0xe);

inline constexpr u32 vtable_sead__SafeStringBase_char__rec = 0x009047f8u;
inline constexpr u32 stage_heap_address = 0x00952c3cu;
inline guest::global<u32, 0x00952c3c> stage_heap;
inline constexpr guest::Function<0x002fb328, u32(u32)> get_save_data;
inline constexpr guest::Function<0x0056a94c, u32(u32, u32, u32, u32)> LoadSplit__start_compressed;
inline constexpr guest::Function<0x006124bc, u32(u32, u32, u32)> set_weather_layout_name;

struct __attribute__((packed)) LoadCampingCarStringsFrame {
    u32 object_0_vtable;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(LoadCampingCarStringsFrame, object_0_vtable, 0x0);
GUEST_OFFSET(LoadCampingCarStringsFrame, word_4, 0x4);
GUEST_SIZE(LoadCampingCarStringsFrame, 0xc);

u32 load_camping_car_strings(u32 r0) {
    guest::StackFrameOf<LoadCampingCarStringsFrame> frame;  // the original's stack frame
    u32 r0_10 = 0;
    u32 r7_1 = *stage_heap;
    frame->word_4 = 0x8876fc;
    frame->object_0_vtable = vtable_sead__SafeStringBase_char__rec;
    u32 r0_2 = LoadSplit__start_compressed(r0 + 0x9ccu, frame.at(0).addr(), r7_1, guest::cpu()->r[3]);
    frame->word_4 = 0x8876cc;
    frame->object_0_vtable = vtable_sead__SafeStringBase_char__rec;
    u32 r6_1 = r0_2 & LoadSplit__start_compressed(r0 + 0xab8u, frame.at(0).addr(), r7_1, guest::cpu()->r[3]);
    frame->word_4 = 0x8876a0;
    frame->object_0_vtable = vtable_sead__SafeStringBase_char__rec;
    u32 r6_2 = r6_1 & LoadSplit__start_compressed(r0 + 0x7f4u, frame.at(0).addr(), r7_1, guest::cpu()->r[3]);
    frame->word_4 = 0x887674;
    frame->object_0_vtable = vtable_sead__SafeStringBase_char__rec;
    u32 r0_8 = LoadSplit__start_compressed(r0 + 0x8e0u, frame.at(0).addr(), r7_1, guest::cpu()->r[3]);
    u32 r6_3 = r6_2 & r0_8;
    u32 save_data = get_save_data(r0_8);
    gptr<Local_0061290c_r5_1> r5_1 = gptr<Local_0061290c_r5_1>(save_data + 0x6ae54u);
    if (r5_1.addr() == 0) {
        r0_10 = r6_3;
    } else {
        u32 r1_7 = r5_1->half_c;
        u32 r0_11 = set_weather_layout_name(r0, r1_7, 0u);
        u32 r1_8 = r5_1->half_e;
        r0_10 = set_weather_layout_name(r0, r1_8, 1u) & (r0_11 & r6_3);
    }
    return r0_10;
}

}  // namespace d_0061290c
GUEST_EXPORT_FRAMED(0x0061290c, d_0061290c::load_camping_car_strings, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00612cec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores 0x109 in a 16-bit field.
namespace d_00612cec {

struct __attribute__((packed)) SetHalf109Arg0 {
    u16 half_0;
};
GUEST_OFFSET(SetHalf109Arg0, half_0, 0x0);


void set_half_109(gptr<SetHalf109Arg0> arg0) {
    arg0->half_0 = 0x109;
    guest::cpu()->r[1] = 0x109u;
}

}  // namespace d_00612cec
GUEST_EXPORT(0x00612cec, d_00612cec::set_half_109);

// f_00612d0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores 0x7db in a 16-bit field.
namespace d_00612d0c {

struct __attribute__((packed)) SetHalf7dbArg0 {
    u16 half_0;
};
GUEST_OFFSET(SetHalf7dbArg0, half_0, 0x0);


void set_half_7db(gptr<SetHalf7dbArg0> arg0) {
    arg0->half_0 = 0x7db;
    guest::cpu()->r[1] = 0x7dbu;
}

}  // namespace d_00612d0c
GUEST_EXPORT(0x00612d0c, d_00612d0c::set_half_7db);

// f_00613658: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Unsets the two time records (+0, +0xf).
namespace d_00613658 {

inline constexpr guest::Function<0x005cdf48, u32(u32, u32, u32, u32)> game_time_set;

u32 TimePair__clear(u32 time_pair) {
    game_time_set(time_pair, guest::cpu()->r[1], ~0u, ~0x80000000u);
    game_time_set(time_pair + 0xfu, guest::cpu()->r[1], ~0u, ~0x80000000u);
    return time_pair;
}

}  // namespace d_00613658
GUEST_EXPORT_FRAMED(0x00613658, d_00613658::TimePair__clear, 0x4010);  // pushes {r4, lr} first, as the original

// f_00613684: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The address of the 0x400-byte block of acre (column below 5, row below 4) from +0x58 (the first one when out of
// range).
namespace d_00613684 {


u32 Town__acre_block(u32 town, u32 r1, u32 r2) {
    if (r1 >= 5u || r2 >= 4u) {
        return town + 0x58u;
    }
    return town + r2 * 0x1400u + (r1 << 0xa) + 0x58u;
}

}  // namespace d_00613684
GUEST_EXPORT(0x00613684, d_00613684::Town__acre_block);

// f_006136a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The address of the 0x100-byte block of acre (column below 5, row below 4) from +0x5058 (the first one when out of
// range).
namespace d_006136a8 {


u32 Town__acre_small_block(u32 town, u32 r1, u32 r2) {
    if (r1 >= 5u || r2 >= 4u) {
        return town + 0x5058u;
    }
    return town + r2 * 0x500u + (r1 << 8) + 0x5058u;
}

}  // namespace d_006136a8
GUEST_EXPORT(0x006136a8, d_006136a8::Town__acre_small_block);

// f_006136d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether (x, z) is within the 7 x 6 acres.
namespace d_006136d4 {


u32 is_acre_in_7x6(u32 r0, u32 r1) {
    return !(r0 >= 7u || r1 >= 6u);
}

}  // namespace d_006136d4
GUEST_EXPORT(0x006136d4, d_006136d4::is_acre_in_7x6);

// f_006136e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether (x, z) is an inner acre (x 1-5, z 1-4).
namespace d_006136e8 {


u32 is_inner_acre(u32 r0, u32 r1) {
    u32 r1_1 = r1 - 1u;
    guest::cpu()->r[1] = r1_1;
    return (r1_1 >= 4u || r0 - 1u >= 5u) ? 0u : 1u;
}

}  // namespace d_006136e8
GUEST_EXPORT(0x006136e8, d_006136e8::is_inner_acre);

// f_00613704: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether (x, z) is within the 5 x 4 acres.
namespace d_00613704 {


u32 is_acre_in_5x4(u32 r0, u32 r1) {
    return !(r0 >= 5u || r1 >= 4u);
}

}  // namespace d_00613704
GUEST_EXPORT(0x00613704, d_00613704::is_acre_in_5x4);

// f_00613718: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether cell (x, z) is inside the town (x 0x10-0x5f, z 0x10-0x4f).
namespace d_00613718 {


u32 is_town_cell(u32 r0, u32 r1) {
    u32 r1_1 = r1 - 0x10u;
    guest::cpu()->r[1] = r1_1;
    return (r1_1 >= 0x40u || r0 - 0x10u >= 0x50u) ? 0u : 1u;
}

}  // namespace d_00613718
GUEST_EXPORT(0x00613718, d_00613718::is_town_cell);

// f_00613764: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds the town map: its sizes (2, 3, 3), the 42 terrain ids, the 20 acre blocks and their small blocks.
namespace d_00613764 {

struct __attribute__((packed)) Town {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Town, byte_0, 0x0);
GUEST_OFFSET(Town, byte_1, 0x1);
GUEST_OFFSET(Town, byte_2, 0x2);

inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;

u32 Town__construct_map(gptr<Town> town) {
    town->byte_0 = 2;
    town->byte_1 = 3;
    town->byte_2 = 3;
    u32 r0_4 = for_each_element(for_each_element(town.addr() + 4u, 0x612cfcu, 2u, 0x2au) + 0x54u, 0x6efd9cu, 0x400u, 0x14u);
    return for_each_element(r0_4 + 0x5000u, 0x1e036cu, 0x100u, 0x14u) - 0x5058u;
}

}  // namespace d_00613764
GUEST_EXPORT_FRAMED(0x00613764, d_00613764::Town__construct_map, 0x4010);  // pushes {r4, lr} first, as the original

// f_006138a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears 0x4000 bytes.
namespace d_006138a4 {

inline constexpr guest::Function<0x00301444, u32(u32, u32)> clear;

u32 clear_4000_bytes() {
    return clear(guest::cpu()->r[0], 0x4000u);
}

}  // namespace d_006138a4
GUEST_EXPORT(0x006138a4, d_006138a4::clear_4000_bytes);

// f_00613de4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies 48 bytes.
namespace d_00613de4 {

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32)> copy_bytes_at_any_alignment;

u32 copy_48_bytes() {
    return copy_bytes_at_any_alignment(guest::cpu()->r[0], guest::cpu()->r[1], 0x30u);
}

}  // namespace d_00613de4
GUEST_EXPORT(0x00613de4, d_00613de4::copy_48_bytes);

// f_00613dfc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies 0x1404 bytes.
namespace d_00613dfc {

inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> copy_aligned_bytes;

void copy_1404_bytes() {
    copy_aligned_bytes(guest::cpu()->r[0], guest::cpu()->r[1], 0x1404u, guest::cpu()->r[3]);
    return;
}

}  // namespace d_00613dfc
GUEST_EXPORT(0x00613dfc, d_00613dfc::copy_1404_bytes);

// f_00613e08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears a 0x1404-byte block (its word and data).
namespace d_00613e08 {

struct __attribute__((packed)) Block1404 {
    u32 word_0;
};
GUEST_OFFSET(Block1404, word_0, 0x0);

inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;

void Block1404__clear(gptr<Block1404> block1404) {
    block1404->word_0 = 0;
    clear_aligned(block1404.addr() + 4u, 0x1400u);
    return;
}

}  // namespace d_00613e08
GUEST_EXPORT(0x00613e08, d_00613e08::Block1404__clear);

// f_00613e18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the 0x1400 bytes of data of a block.
namespace d_00613e18 {

inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;

void Block1404__clear_data(u32 block1404) {
    clear_aligned(block1404 + 4u, 0x1400u);
    return;
}

}  // namespace d_00613e18
GUEST_EXPORT(0x00613e18, d_00613e18::Block1404__clear_data);

// f_00613e24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears a 0x1404-byte block and returns it.
namespace d_00613e24 {

struct __attribute__((packed)) Block1404 {
    u32 word_0;
};
GUEST_OFFSET(Block1404, word_0, 0x0);

inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;

u32 Block1404__construct(gptr<Block1404> block1404) {
    block1404->word_0 = 0;
    clear_aligned(block1404.addr() + 4u, 0x1400u);
    return block1404.addr();
}

}  // namespace d_00613e24
GUEST_EXPORT_FRAMED(0x00613e24, d_00613e24::Block1404__construct, 0x4010);  // pushes {r4, lr} first, as the original

// f_00613e80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Places a villager's items on the scene's free cells.
namespace d_00613e80 {

struct __attribute__((packed)) Local_00613e80_r0_13 {
    u8 byte_0;
};
GUEST_OFFSET(Local_00613e80_r0_13, byte_0, 0x0);

inline constexpr u32 scene_villager_items_address = 0x0094d939u;
inline constexpr u32 scene_villager_item_state_address = 0x00984694u;
inline guest::global<u8, 0x0094d938> global_0094d938;
inline guest::global<u8, 0x0094d939> scene_villager_items;
inline constexpr guest::Function<0x0013fac4, u32(u32, u32, u32)> set_bytes;
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32)> Item__category;
inline constexpr guest::Function<0x00313124, u32(u32)> item_has_flags_and_check_b;
inline constexpr guest::Function<0x007179a0, u32(u32, u32, u32)> place_on_nth_cell_with_value_28;
inline constexpr guest::Function<0x007179ec, u32(u32, u32)> slot_value_minus_4;
inline constexpr guest::Function<0x00717aac, u32(u32, u32, u32)> slot_value_kind;
inline constexpr guest::Function<0x00718270, u32(u32, u32, u32)> copy_row8_item_cleared;
inline constexpr guest::Function<0x007182f0, u32(u32, u32, u32)> row8_item_is_category_7c;

struct __attribute__((packed)) PlaceVillagerItemsInScene2bFrame {
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
GUEST_OFFSET(PlaceVillagerItemsInScene2bFrame, byte_0, 0x0);
GUEST_OFFSET(PlaceVillagerItemsInScene2bFrame, byte_1, 0x1);
GUEST_OFFSET(PlaceVillagerItemsInScene2bFrame, byte_5, 0x5);
GUEST_OFFSET(PlaceVillagerItemsInScene2bFrame, byte_9, 0x9);
GUEST_OFFSET(PlaceVillagerItemsInScene2bFrame, byte_10, 0x10);
GUEST_SIZE(PlaceVillagerItemsInScene2bFrame, 0x1c);

u32 place_villager_items_in_scene_2b(u32 r0, u32 r1_unused, u32 r2) {
    guest::StackFrameOf<PlaceVillagerItemsInScene2bFrame> frame;  // the original's stack frame
    u32 i = guest::cpu()->r[4];
    u32 r9 = guest::cpu()->r[9];
    u32 r7 = r0;
    u32 r8 = 1u;
    *global_0094d938 = u8(r8);
    *scene_villager_items = 0;
    u32 save_data = get_save_data(scene_villager_items_address, 0u, r2, guest::cpu()->r[3]);
    u32 r6 = save_data + 0x668a0u;
    set_bytes(frame.at(0).addr(), 0x14u, 0xffu);
    r2 = guest::cpu()->r[2];
    u32 r1_1 = frame->byte_10;
    frame->byte_0 = u8(u32(frame->byte_0) & ~0x80u);
    if (r6 != 0) {
        r9 = scene_villager_item_state_address;
    }
    u32 r1_2 = r1_1 & ~8u;
    frame->byte_1 = u8(u32(frame->byte_1) & ~1u & ~2u & ~4u & ~8u & ~0x10u & ~0x20u);
    u32 r0_3 = frame->byte_5;
    if (r6 != 0) {
        i = 0u;
    }
    frame->byte_10 = u8(r1_2);
    frame->byte_5 = u8(r0_3 & ~2u & ~4u & ~0x80u);
    u32 r0_4 = u32(frame->byte_9) & ~2u;
    frame->byte_9 = u8(r0_4);
    if (r6 != 0) {
        do {
            r0_4 = row8_item_is_category_7c(r6, i, r2);
            r1_2 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            if (r0_4 == 0) {
                copy_row8_item_cleared(frame.at(0x14).addr(), r6, i);
                u32 r0_7 = item_has_flags_and_check_b(frame.at(0x14).addr());
                r1_2 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                if (r0_7 == 0) {
                    u32 category = Item__category(frame.at(0x14).addr(), r1_2, r2);
                    r1_2 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    if (category < 0x9bu) {
                        r1_2 = *gptr<u8>(frame.at(0).addr() + (category >> 3));
                        if ((r1_2 >> (category & 7u) & 1u) != 0) {
                            if (slot_value_kind(r6, i, r2) == 2u) {
                                u32 r0_11 = slot_value_minus_4(r6, i);
                                r1_2 = guest::cpu()->r[1];
                                r2 = guest::cpu()->r[2];
                                if (r0_11 == r7) {
                                    goto L_614004;
                                }
                            }
                            u32 r0_12 = place_on_nth_cell_with_value_28(r6, r9 + i * 0xcu, i);
                            r1_2 = guest::cpu()->r[1];
                            r2 = guest::cpu()->r[2];
                            if (r0_12 != 0) {
                                r1_2 = scene_villager_items_address;
                                if (i < 8u) {
                                    gptr<Local_00613e80_r0_13> r0_13 = gptr<Local_00613e80_r0_13>(r1_2 + (i >> 3));
                                    r2 = i & 7u;
                                    r1_2 = u32(r0_13->byte_0) | lsl_r(r8, r2 & 0xff);
                                    r0_13->byte_0 = u8(r1_2);
                                }
                            }
                        }
                    }
                }
L_614004:;
                r0_4 = frame.at(0x14).addr();
            }
            i += 1u;
            guest::preempt();
        } while (s32(i) < 8);
    }
    guest::cpu()->r[1] = r1_2;
    return r0_4;
}

}  // namespace d_00613e80
GUEST_EXPORT_FRAMED(0x00613e80, d_00613e80::place_villager_items_in_scene_2b, 0x43f0);  // pushes {i, r5, r6, r7, r8, r9, lr} first, as the original

// f_0061402c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// In scene 0x2b: places the items of the first listed villager that is not leaving.
namespace d_0061402c {

struct __attribute__((packed)) Local_0061402c_r1_1 {
    u8 unknown_0[0xeb54];  // (not used here)
    u32 word_eb54;
    u32 word_eb58;
};
GUEST_OFFSET(Local_0061402c_r1_1, word_eb54, 0xeb54);
GUEST_OFFSET(Local_0061402c_r1_1, word_eb58, 0xeb58);

inline constexpr u32 npc_manager_address = 0x00950148u;
inline guest::global<u32, 0x00950148> npc_manager;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> current_scene_id;
inline constexpr guest::Function<0x00613e80, u32(u32, u32, u32, u32)> place_villager_items_in_scene_2b;

void place_first_villager_items_2b(u32 scene_3, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 scene_2 = current_scene_id(scene_3, r1, r2, r3);
    if (scene_2 != 0x2bu) {
        return;
    }
    gptr<Local_0061402c_r1_1> r1_1 = gptr<Local_0061402c_r1_1>(*npc_manager);
    if (r1_1.addr() == 0) {
        return;
    }
    r2 = r1_1->word_eb54;
    scene_3 = 0u;
    r3 = r1_1->word_eb58 - r2;
    do {
        if (scene_3 < u32(s32(r3) >> 2)) {
            u32 r1_2 = gptr<u32>(r2)[scene_3];
            if (r1_2 != 0 && *gptr<u8>(r1_2 + 0x9a8u) == 0) {
                u32 r0_2 = *gptr<u32>(r1_2 + 0x1030u);
                frame.release();
                place_villager_items_in_scene_2b(r0_2, r1_2, r2, r3);
                return;
            }
        }
        scene_3 += 1u;
        guest::preempt();
    } while (scene_3 < 0xau);
}

}  // namespace d_0061402c
GUEST_EXPORT(0x0061402c, d_0061402c::place_first_villager_items_2b);

// f_00614568: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a dynamic collision cylinder: a world body with a cylinder shape.
namespace d_00614568 {

inline constexpr u32 vtable_bgcheck__DynamicCylinder = 0x0090ab60u;
inline constexpr guest::Function<0x006f7e64, u32(u32)> collision__World__Body__Body_006f7e64;
inline constexpr guest::Function<0x006f83f8, u32(u32, u32)> collision__Cylinder__Cylinder_006f83f8;

u32 bgcheck__DynamicCylinder__DynamicCylinder(gptr<bgcheck__DynamicCylinder> dynamic_cylinder) {
    collision__World__Body__Body_006f7e64(dynamic_cylinder.addr());
    dynamic_cylinder->vtable = vtable_bgcheck__DynamicCylinder;
    collision__Cylinder__Cylinder_006f83f8(dynamic_cylinder.addr() + 0x10u, vtable_bgcheck__DynamicCylinder);
    return dynamic_cylinder.addr();
}

}  // namespace d_00614568
GUEST_EXPORT_FRAMED(0x00614568, d_00614568::bgcheck__DynamicCylinder__DynamicCylinder, 0x4010);  // pushes {r4, lr} first, as the original

// f_006145cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The normalized direction between two reported points.
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

struct __attribute__((packed)) DirectionBetweenPointsFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    float float_10;
    float float_14;
    float float_18;
    u8 unknown_1c[0x1c];  // (not read or written by name)
};
GUEST_OFFSET(DirectionBetweenPointsFrame, word_0, 0x0);
GUEST_OFFSET(DirectionBetweenPointsFrame, word_4, 0x4);
GUEST_OFFSET(DirectionBetweenPointsFrame, word_8, 0x8);
GUEST_OFFSET(DirectionBetweenPointsFrame, word_c, 0xc);
GUEST_OFFSET(DirectionBetweenPointsFrame, float_10, 0x10);
GUEST_OFFSET(DirectionBetweenPointsFrame, float_14, 0x14);
GUEST_OFFSET(DirectionBetweenPointsFrame, float_18, 0x18);
GUEST_SIZE(DirectionBetweenPointsFrame, 0x38);

void direction_between_points(u32 r0, gptr<Float3> arg1, gptr<Float3> arg2) {
    guest::StackFrameOf<DirectionBetweenPointsFrame> frame;  // the original's stack frame
    float S3_1 = arg1->v[0];
    float S0_1 = arg2->v[0] - S3_1;
    float S4_1 = arg1->v[1];
    float S5_1 = arg1->v[2];
    gptr<Local_006145cc_r0_1> r0_1 = gptr<Local_006145cc_r0_1>(frame.at(0x10).addr());
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
    normalize(frame.at(0x10).addr(), arg1.addr() + 4u, arg2.addr(), guest::cpu()->r[3]);
    float S0_2 = 0.5f;
    gptr<Local_006145cc_r0_3> r0_3 = gptr<Local_006145cc_r0_3>(frame.at(0x1c).addr());
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
    gptr<Local_006145cc_r1_2> r1_2 = gptr<Local_006145cc_r1_2>(frame.at(0x10).addr());
    gptr<Local_006145cc_r0_4> r0_4 = gptr<Local_006145cc_r0_4>(frame.at(0x28).addr());
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
    get_reported_point(frame.at(0).addr(), frame.at(0x1c).addr());
    get_reported_point(frame.at(8).addr(), frame.at(0x28).addr());
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
GUEST_EXPORT_FRAMED(0x006145cc, d_006145cc::direction_between_points, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0061476c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Releases a resource from the list at 0x9870a8 (when there is one).
namespace d_0061476c {

inline constexpr u32 resource_987a8_address = 0x009870a8u;
inline constexpr guest::Function<0x00138bbc, u32(u32, u32)> PtrList__remove;

u32 release_resource_987a8(u32 r0, u32 r1) {
    if (r0 == 0) {
        return r0;
    }
    return PtrList__remove(resource_987a8_address, r0);
}

}  // namespace d_0061476c
GUEST_EXPORT(0x0061476c, d_0061476c::release_resource_987a8);

// f_00614854: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a moving background: a world body with a box shape, not moving.
namespace d_00614854 {

inline constexpr u32 vtable_bgcheck__MoveBg = 0x0090ab70u;
inline constexpr guest::Function<0x006f7dc0, u32(u32, u32)> collision__AABB__AABB;
inline constexpr guest::Function<0x006f7e64, u32(u32)> collision__World__Body__Body_006f7e64;

u32 bgcheck__MoveBg__MoveBg(gptr<bgcheck__MoveBg> move_bg) {
    collision__World__Body__Body_006f7e64(move_bg.addr());
    move_bg->vtable = vtable_bgcheck__MoveBg;
    move_bg->byte_10 = 0;
    collision__AABB__AABB(move_bg.addr() + 0x14u, vtable_bgcheck__MoveBg);
    move_bg->half_40 = 0;
    move_bg->word_44 = 0;
    return move_bg.addr();
}

}  // namespace d_00614854
GUEST_EXPORT_FRAMED(0x00614854, d_00614854::bgcheck__MoveBg__MoveBg, 0x4010);  // pushes {r4, lr} first, as the original

// f_006148e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears a notice record and its four 16-byte entries.
namespace d_006148e4 {

struct __attribute__((packed)) Notice {
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
GUEST_OFFSET(Notice, word_0, 0x0);
GUEST_OFFSET(Notice, word_4, 0x4);
GUEST_OFFSET(Notice, word_8, 0x8);
GUEST_OFFSET(Notice, word_c, 0xc);
GUEST_OFFSET(Notice, word_10, 0x10);
GUEST_OFFSET(Notice, word_14, 0x14);
GUEST_OFFSET(Notice, word_18, 0x18);
GUEST_OFFSET(Notice, word_1c, 0x1c);
GUEST_OFFSET(Notice, word_20, 0x20);
GUEST_OFFSET(Notice, word_24, 0x24);
GUEST_OFFSET(Notice, word_28, 0x28);
GUEST_OFFSET(Notice, word_2c, 0x2c);
GUEST_OFFSET(Notice, word_30, 0x30);
GUEST_OFFSET(Notice, word_34, 0x34);
GUEST_OFFSET(Notice, word_38, 0x38);
GUEST_OFFSET(Notice, word_3c, 0x3c);
GUEST_OFFSET(Notice, word_40, 0x40);
GUEST_OFFSET(Notice, word_44, 0x44);
GUEST_OFFSET(Notice, word_48, 0x48);

inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;

u32 Notice__construct(gptr<Notice> notice) {
    notice->word_0 = 0;
    notice->word_c = 0;
    notice->word_10 = 0;
    notice->word_14 = 0;
    notice->word_18 = 0;
    notice->word_1c = 0;
    notice->word_20 = 0;
    notice->word_24 = 0;
    notice->word_28 = 0;
    notice->word_2c = 0;
    notice->word_30 = 0;
    notice->word_34 = 0;
    notice->word_38 = 0;
    notice->word_3c = 0;
    notice->word_40 = 0;
    notice->word_44 = 0;
    notice->word_48 = 0;
    notice->word_4 = 0;
    notice->word_8 = 0;
    return for_each_element((notice.addr() + 8u) + 4u, 0x6148e0u, 0x10u, 4u) - 0xcu;
}

}  // namespace d_006148e4
GUEST_EXPORT_FRAMED(0x006148e4, d_006148e4::Notice__construct, 0x4010);  // pushes {r4, lr} first, as the original

// f_006149e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a background guard box: a moving background, unowned.
namespace d_006149e8 {

inline constexpr u32 vtable_bgcheck__GuardBox = 0x0090ab88u;
inline constexpr guest::Function<0x00614854, u32(u32)> bgcheck__MoveBg__MoveBg;

u32 bgcheck__GuardBox__GuardBox(gptr<bgcheck__GuardBox> guard_box) {
    bgcheck__MoveBg__MoveBg(guard_box.addr());
    guard_box->word_48 = 0;
    guard_box->vtable = vtable_bgcheck__GuardBox;
    guest::cpu()->r[1] = 0u;
    return guard_box.addr();
}

}  // namespace d_006149e8
GUEST_EXPORT_FRAMED(0x006149e8, d_006149e8::bgcheck__GuardBox__GuardBox, 0x4010);  // pushes {r4, lr} first, as the original

// f_00615328: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Jumps to store_constants_779548.
namespace d_00615328 {

inline constexpr guest::Function<0x00779548, u32(u32, u32)> store_constants_779548;

void store_constants_779548_veneer() {
    store_constants_779548(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_00615328
GUEST_EXPORT(0x00615328, d_00615328::store_constants_779548_veneer);

// f_0061532c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears a 0x30-byte record.
namespace d_0061532c {

struct __attribute__((packed)) Record30 {
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
GUEST_OFFSET(Record30, word_0, 0x0);
GUEST_OFFSET(Record30, word_4, 0x4);
GUEST_OFFSET(Record30, word_8, 0x8);
GUEST_OFFSET(Record30, word_c, 0xc);
GUEST_OFFSET(Record30, word_10, 0x10);
GUEST_OFFSET(Record30, word_14, 0x14);
GUEST_OFFSET(Record30, word_18, 0x18);
GUEST_OFFSET(Record30, word_1c, 0x1c);
GUEST_OFFSET(Record30, word_20, 0x20);
GUEST_OFFSET(Record30, half_24, 0x24);
GUEST_OFFSET(Record30, byte_26, 0x26);
GUEST_OFFSET(Record30, byte_27, 0x27);
GUEST_OFFSET(Record30, half_28, 0x28);
GUEST_OFFSET(Record30, half_2a, 0x2a);
GUEST_OFFSET(Record30, byte_2c, 0x2c);
GUEST_OFFSET(Record30, byte_2d, 0x2d);
GUEST_OFFSET(Record30, half_2e, 0x2e);


void Record30__clear(gptr<Record30> record30) {
    record30->word_0 = 0;
    record30->word_4 = 0;
    record30->word_8 = 0;
    record30->word_c = 0;
    record30->word_10 = 0;
    record30->word_14 = 0;
    record30->word_18 = 0;
    record30->word_1c = 0;
    record30->word_20 = 0;
    record30->half_24 = 0;
    record30->byte_26 = 0;
    record30->half_28 = 0;
    record30->half_2a = 0;
    record30->byte_2c = 0;
    record30->byte_2d = 0;
    record30->byte_27 = 0;
    record30->half_2e = 0;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_0061532c
GUEST_EXPORT(0x0061532c, d_0061532c::Record30__clear);

// f_006153d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Creates the singleton on a heap (arg 0), with its disposer, unless it exists.
namespace d_006153d0 {

inline constexpr u32 vtable_compass__Mgr__SingletonDisposer_ = 0x0090aba0u;
inline guest::global<u32, 0x00951668> compass_mgr_instance;
inline guest::global<u32, 0x0095166c> compass_mgr_disposer;
inline constexpr guest::Function<0x00131280, u32(u32, u32, u32, u32)> allocate_on_heap_entry;
inline constexpr guest::Function<0x001320cc, u32(u32, u32, u32)> IDisposer__construct_in_heap;

void compass__Mgr__create_instance(u32 singleton_disposer, u32 r1) {
    if (*compass_mgr_instance == 0) {
        u32 block_2 = allocate_on_heap_entry(0x10u, singleton_disposer, 4u, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        u32 r4_1 = block_2;
        if (block_2 == 0) {
            *compass_mgr_disposer = r4_1;
            r4_1 = 0u;
        } else {
            IDisposer__construct_in_heap(block_2, singleton_disposer, 3u);
            r1 = vtable_compass__Mgr__SingletonDisposer_;
            *gptr<u32>(block_2) = r1;
            *compass_mgr_disposer = block_2;
        }
        *compass_mgr_instance = r4_1;
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_006153d0
GUEST_EXPORT_FRAMED(0x006153d0, d_006153d0::compass__Mgr__create_instance, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006154b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies up to 16 letters and digits, clearing the rest from the first other character.
namespace d_006154b0 {


void copy_alphanumeric_16(u32 r0, u32 r1) {
    u32 i = 0u;
    do {
        u32 r3_1 = *gptr<s8>(r1 + i);
        u32 zf_1 = r3_1 - 0x30u == 9u;
        u32 cf_1 = r3_1 - 0x30u >= 9u;
        if (cf_1 && !zf_1) {
            zf_1 = r3_1 - 0x61u == 0x19u;
            cf_1 = r3_1 - 0x61u >= 0x19u;
        }
        if (cf_1 && !zf_1) {
            zf_1 = r3_1 - 0x41u == 0x19u;
            cf_1 = r3_1 - 0x41u >= 0x19u;
        }
        if (cf_1 && !zf_1) {
            if (i >= 0x10u) {
                return;
            } else {
                r1 = 0u;
            }
            do {
                *gptr<u8>(r0 + i) = u8(r1);
                i += 1u;
                guest::preempt();
            } while (i < 0x10u);
            return;
        }
        *gptr<u8>(r0 + i) = u8(r3_1);
        i += 1u;
        guest::preempt();
    } while (i < 0x10u);
}

}  // namespace d_006154b0
GUEST_EXPORT(0x006154b0, d_006154b0::copy_alphanumeric_16);

// f_00615534: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears five words and a 16-bit value.
namespace d_00615534 {

struct __attribute__((packed)) Record16 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u16 half_14;
};
GUEST_OFFSET(Record16, word_0, 0x0);
GUEST_OFFSET(Record16, word_4, 0x4);
GUEST_OFFSET(Record16, word_8, 0x8);
GUEST_OFFSET(Record16, word_c, 0xc);
GUEST_OFFSET(Record16, word_10, 0x10);
GUEST_OFFSET(Record16, half_14, 0x14);


void Record16__clear(gptr<Record16> record16) {
    record16->word_0 = 0;
    record16->word_4 = 0;
    record16->word_8 = 0;
    record16->word_c = 0;
    record16->word_10 = 0;
    record16->half_14 = 0;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_00615534
GUEST_EXPORT(0x00615534, d_00615534::Record16__clear);

// f_00615b2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The model scale of a caught creature (kind below 0x6b, table 0x86a2c8) from its length: 1 + (length - base) / (range
// * 10), clamped to 0.7-1.3; 1.0 without a range.
namespace d_00615b2c {

struct __attribute__((packed)) Local_00615b2c_r2_1 {
    u8 unknown_0[0x24];  // (not used here)
    u32 word_24;
    u32 word_28;
};
GUEST_OFFSET(Local_00615b2c_r2_1, word_24, 0x24);
GUEST_OFFSET(Local_00615b2c_r2_1, word_28, 0x28);


void creature_size_scale(u32 fish_info, u32 r1, float S0_unused, float S1) {
    float S0_1 = 1.0f;
    if (r1 >= 0x6bu) {
        guest::cpu()->s[0] = S0_1;
        return;
    }
    gptr<Local_00615b2c_r2_1> r2_1 = gptr<Local_00615b2c_r2_1>((r1 * 3u + (r1 << 4) << 2) + 0x86a2c8u);
    float S1_1 = float(s32(r2_1->word_28));
    u32 r1_1 = uxth(r2_1->word_24);
    if (u32(S1_1 == 0.0f)) {
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return;
    }
    float S2_1 = S1_1 * 10.0f;
    float S1_2 = float(s32(fish_info - r1_1));
    float S0_2 = S1_2 / S2_1 + S0_1;
    if (s32(0x3f333333u) > s32(std::bit_cast<u32>(S0_2))) {
        float S0_3 = 0.7f;
        guest::cpu()->s[0] = S0_3;
        guest::cpu()->s[1] = S1_2;
        return;
    }
    if (s32(0x3fa66666u) < s32(std::bit_cast<u32>(S0_2))) {
        S0_2 = 1.3f;
    }
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
}

}  // namespace d_00615b2c
GUEST_EXPORT(0x00615b2c, d_00615b2c::creature_size_scale);

// f_00615bcc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether a creature appears at a time (its hours and months, by the scene's kind).
namespace d_00615bcc {

inline guest::global<u32, 0x0095c6d0> tour_instance;
inline constexpr guest::Function<0x002f74c8, u32(u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x0076eb20, u32(u32)> slot_byte_0d;

u32 creature_appears_at_time(u32 r0, gptr<TimeStamp> time_stamp) {
    u32 r0_11 = 0;
    u32 r1_5 = 0;
    u32 scene_3 = current_scene_id(r0);
    u32 scene_flagged_3 = scene_has_flags(0x40000u, scene_3);
    u32 r6_1 = 0u;
    if (scene_flagged_3 != 0) {
        u32 r0_3 = s8(u8(time_stamp->hour));
        u32 r1_1 = r0_3 - 4u;
        if (r0 != 0) {
            u32 cf_1 = r1_1 >= 5u;
            if (cf_1) {
                r1_1 = r0_3 - 0x10u;
                cf_1 = r1_1 >= 5u;
            }
            if (cf_1) {
                r6_1 = r0_3 - 9u >= 7u ? 2u : 1u;
            }
            guest::cpu()->r[1] = r1_1;
            return r6_1 * 0x50u + 0x862de8u;
        }
        u32 cf_2 = r1_1 >= 5u;
        if (cf_2) {
            r1_1 = r0_3 - 0x10u;
            cf_2 = r1_1 >= 5u;
        }
        if (cf_2) {
            r6_1 = r0_3 - 9u >= 7u ? 2u : 1u;
        }
        guest::cpu()->r[1] = r1_1;
        return r6_1 * 0x60u + 0x863748u;
    }
    u32 scene_4 = current_scene_id(scene_flagged_3);
    u32 scene_flagged_4 = scene_has_flags(0x20000u, scene_4);
    if (scene_flagged_4 != 0) {
        u32 r0_9 = slot_byte_0d(*tour_instance + 0x10u);
        u32 r1_2 = s8(u8(time_stamp->hour));
        if (r0 != 0) {
            if (r1_2 - 4u >= 5u && r1_2 - 0x10u >= 5u) {
                r6_1 = r1_2 - 9u >= 7u ? 2u : 1u;
            }
            u32 r1_3 = r6_1 * 5u;
            guest::cpu()->r[1] = r1_3;
            return r0_9 * 0xf0u + 0x862de8u + (r1_3 << 4);
        }
        if (r1_2 - 4u >= 5u && r1_2 - 0x10u >= 5u) {
            r6_1 = r1_2 - 9u >= 7u ? 2u : 1u;
        }
        r0_11 = r6_1 * 3u;
        r1_5 = ((r0_9 * 9u) << 5) + 0x863748u;
    } else {
        u32 r0_12 = u32(s8(u8(time_stamp->month))) - 1u;
        if (r0 != 0) {
            if (r0_12 == 7u) {
                u32 r1_6 = s8(u8(time_stamp->day));
                if (r1_6 != 0xfu && s32(r1_6) >= 0xf) {
                    r0_12 = 8u;
                }
            } else {
                u32 zf_1 = r0_12 == 8u;
                if (r0_12 > 8u) {
                    r0_12 += 2u;
                }
                if (zf_1) {
                    r0_12 = s8(u8(time_stamp->day));
                    u32 res_1 = r0_12 - 0xfu;
                    u32 vf_1 = ((r0_12 ^ 0xfu) & (r0_12 ^ res_1)) >> 0x1f;
                    if (res_1 != 0 && s32(r0_12) >= 0xf) {
                        r0_12 = 0xau;
                    }
                    if (res_1 == 0 || res_1 >> 0x1f != vf_1) {
                        r0_12 = 9u;
                    }
                }
            }
            u32 r1_7 = (r0_12 & 0xffu) * 0xfu * 0x14u + 0x85ff50u;
            u32 r0_13 = s8(u8(time_stamp->hour));
            if (r0_13 - 4u >= 5u && r0_13 - 0x10u >= 5u) {
                r6_1 = r0_13 - 9u >= 7u ? 2u : 1u;
            }
            guest::cpu()->r[1] = r1_7;
            return r1_7 + (r6_1 * 9u + (r6_1 << 4) << 2);
        }
        if (r0_12 == 7u) {
            u32 r1_8 = s8(u8(time_stamp->day));
            if (r1_8 != 0xfu && s32(r1_8) >= 0xf) {
                r0_12 = 8u;
            }
        } else {
            u32 zf_2 = r0_12 == 8u;
            if (r0_12 > 8u) {
                r0_12 += 2u;
            }
            if (zf_2) {
                r0_12 = s8(u8(time_stamp->day));
                u32 res_2 = r0_12 - 0xfu;
                u32 vf_2 = ((r0_12 ^ 0xfu) & (r0_12 ^ res_2)) >> 0x1f;
                if (res_2 != 0 && s32(r0_12) >= 0xf) {
                    r0_12 = 0xau;
                }
                if (res_2 == 0 || res_2 >> 0x1f != vf_2) {
                    r0_12 = 9u;
                }
            }
        }
        r1_5 = (r0_12 & 0xffu) * 0x120u + 0x860fb8u;
        u32 r0_15 = s8(u8(time_stamp->hour));
        if (r0_15 - 4u >= 5u && r0_15 - 0x10u >= 5u) {
            r6_1 = r0_15 - 9u >= 7u ? 2u : 1u;
        }
        r0_11 = r6_1 * 3u;
    }
    guest::cpu()->r[1] = r1_5;
    return r1_5 + (r0_11 << 5);
}

}  // namespace d_00615bcc
GUEST_EXPORT_FRAMED(0x00615bcc, d_00615bcc::creature_appears_at_time, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_00615ffc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// For a sea creature (category 0x28): its two spawn bytes (+0x48, +0x49) from the creature table.
namespace d_00615ffc {

struct __attribute__((packed)) SeaCreatureSpawnRangeArg0 {
    u32 word_0;
};
GUEST_OFFSET(SeaCreatureSpawnRangeArg0, word_0, 0x0);

struct __attribute__((packed)) SeaCreatureSpawnRangeArg1 {
    u32 word_0;
};
GUEST_OFFSET(SeaCreatureSpawnRangeArg1, word_0, 0x0);

struct __attribute__((packed)) Local_00615ffc_r0_4 {
    u8 unknown_0[0x48];  // (not used here)
    u8 byte_48;
    u8 byte_49;
};
GUEST_OFFSET(Local_00615ffc_r0_4, byte_48, 0x48);
GUEST_OFFSET(Local_00615ffc_r0_4, byte_49, 0x49);

inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> Item__category;
inline constexpr guest::Function<0x006d9058, u32(u32)> item_actor_kind_index;

void sea_creature_spawn_range(gptr<SeaCreatureSpawnRangeArg0> arg0, gptr<SeaCreatureSpawnRangeArg1> arg1, u32 player) {
    u32 category = Item__category(player, arg1.addr(), player, guest::cpu()->r[3]);
    if (category == 0x28u) {
        u32 r0_3 = item_actor_kind_index(player) & 0xffu;
        gptr<Local_00615ffc_r0_4> r0_4 = gptr<Local_00615ffc_r0_4>((r0_3 * 3u + (r0_3 << 4) << 2) + 0x86a2c8u);
        arg0->word_0 = u32(r0_4->byte_48);
        arg1->word_0 = u32(r0_4->byte_49);
    }
}

}  // namespace d_00615ffc
GUEST_EXPORT_FRAMED(0x00615ffc, d_00615ffc::sea_creature_spawn_range, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00616058: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether a creature is in season at a time (by the scene's kind).
namespace d_00616058 {

inline guest::global<u32, 0x0095c6d0> tour_instance;
inline constexpr guest::Function<0x002f74c8, u32(u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x0076ebb8, u32(u32)> slot_byte_0f;

u32 creature_season_check(gptr<TimeStamp> time_stamp) {
    u32 r0_10 = 0;
    u32 r1_2 = 0;
    u32 scene_3 = current_scene_id(time_stamp.addr());
    u32 scene_flagged_3 = scene_has_flags(0x40000u, scene_3);
    u32 r5_1 = 0u;
    if (scene_flagged_3 != 0) {
        u32 r0_3 = s8(u8(time_stamp->hour));
        u32 r1_1 = r0_3 - 4u;
        u32 cf_1 = r1_1 >= 5u;
        if (cf_1) {
            r1_1 = r0_3 - 0x10u;
            cf_1 = r1_1 >= 5u;
        }
        if (cf_1) {
            r5_1 = r0_3 - 9u >= 7u ? 2u : 1u;
        }
        guest::cpu()->r[1] = r1_1;
        return r5_1 * 0x48u + 0x864288u;
    }
    u32 scene_4 = current_scene_id(scene_flagged_3);
    u32 scene_flagged_4 = scene_has_flags(0x20000u, scene_4);
    if (scene_flagged_4 != 0) {
        u32 r0_8 = slot_byte_0f(*tour_instance + 0x10u);
        u32 r0_9 = s8(u8(time_stamp->hour));
        if (r0_9 - 4u >= 5u && r0_9 - 0x10u >= 5u) {
            r5_1 = r0_9 - 9u >= 7u ? 2u : 1u;
        }
        r0_10 = r5_1 * 9u;
        r1_2 = r0_8 * 9u * 0x18u + 0x864288u;
    } else {
        u32 r0_11 = u32(s8(u8(time_stamp->month))) - 1u;
        if (r0_11 == 7u) {
            u32 r1_3 = s8(u8(time_stamp->day));
            if (r1_3 != 0xfu && s32(r1_3) >= 0xf) {
                r0_11 = 8u;
            }
        } else {
            u32 zf_1 = r0_11 == 8u;
            if (r0_11 > 8u) {
                r0_11 += 2u;
            }
            if (zf_1) {
                r0_11 = s8(u8(time_stamp->day));
                u32 res_1 = r0_11 - 0xfu;
                u32 vf_1 = ((r0_11 ^ 0xfu) & (r0_11 ^ res_1)) >> 0x1f;
                if (res_1 != 0 && s32(r0_11) >= 0xf) {
                    r0_11 = 0xau;
                }
                if (res_1 == 0 || res_1 >> 0x1f != vf_1) {
                    r0_11 = 9u;
                }
            }
        }
        r1_2 = (r0_11 & 0xffu) * 0x108u + 0x861f78u;
        u32 r0_12 = s8(u8(time_stamp->hour));
        if (r0_12 - 4u >= 5u && r0_12 - 0x10u >= 5u) {
            r5_1 = r0_12 - 9u >= 7u ? 2u : 1u;
        }
        r0_10 = r5_1 * 3u + (r5_1 << 3);
    }
    guest::cpu()->r[1] = r1_2;
    return r1_2 + (r0_10 << 3);
}

}  // namespace d_00616058
GUEST_EXPORT_FRAMED(0x00616058, d_00616058::creature_season_check, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_006165c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Word `index` (below 3; else the first) of the table at 0x952880.
namespace d_006165c4 {

inline constexpr u32 table_952880_address = 0x00952880u;
inline guest::global<u32, 0x00952880> table_952880;

u32 table_952880_at(u32 r0) {
    u32 r0_1 = r0 >= 3u ? *table_952880 : gptr<u32>(table_952880_address)[r0];
    guest::cpu()->r[1] = table_952880_address;
    return r0_1;
}

}  // namespace d_006165c4
GUEST_EXPORT(0x006165c4, d_006165c4::table_952880_at);

// f_0061666c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// For a sea creature the current player's encyclopedia (+0x6c20) lacks: records it (006bd2c8).
namespace d_0061666c {

inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> get_current_player;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> Item__copy_b;
inline constexpr guest::Function<0x002fcb34, u32(u32)> Item__category;
inline constexpr guest::Function<0x006bd2c8, u32(u32, u32)> Player__catch_record_of_item;
inline constexpr guest::Function<0x007701b8, u32(u32, u32)> ItemBitSet__contains;

struct __attribute__((packed)) PlayerRecordNewSeaCreatureFrame {
    u32 word_0;
};
GUEST_OFFSET(PlayerRecordNewSeaCreatureFrame, word_0, 0x0);
GUEST_SIZE(PlayerRecordNewSeaCreatureFrame, 0x4);

u32 Player__record_new_sea_creature(u32 player, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<PlayerRecordNewSeaCreatureFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 player_3 = get_current_player(player, r1, guest::cpu()->r[2], r3);
    if (player_3 != 0) {
        u32 category = Item__category(player);
        if (category == 0x28u) {
            u32 r0_3 = frame.at(0).addr();
            Item__copy_b(r0_3, player);
            if ((ItemBitSet__contains(player_3 + 0x6c20u, r0_3) ^ 1u) == 0) {
                u32 catch_record = Player__catch_record_of_item(player_3, player);
                return catch_record;
            }
        }
    }
    return 0u;
}

}  // namespace d_0061666c
GUEST_EXPORT_FRAMED(0x0061666c, d_0061666c::Player__record_new_sea_creature, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00616e70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clamps the signed 16-bit value to -limit..limit; whether it was already inside.
namespace d_00616e70 {

struct __attribute__((packed)) ClampHalfToRangeArg0 {
    u16 half_0;
};
GUEST_OFFSET(ClampHalfToRangeArg0, half_0, 0x0);


u32 clamp_half_to_range(gptr<ClampHalfToRangeArg0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2_1 = s16(arg0->half_0);
    u32 res_1 = r2_1 - r1;
    u32 nf_1 = res_1 >> 0x1f;
    u32 zf_1 = res_1 == 0;
    u32 vf_1 = ((r2_1 ^ r1) & (r2_1 ^ res_1)) >> 0x1f;
    if (zf_1 || nf_1 != vf_1) {
        r1 = 0u - r1;
        u32 res_2 = r1 - r2_1;
        nf_1 = res_2 >> 0x1f;
        zf_1 = res_2 == 0;
        vf_1 = ((r1 ^ r2_1) & (r1 ^ res_2)) >> 0x1f;
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
GUEST_EXPORT(0x00616e70, d_00616e70::clamp_half_to_range);

// f_00616fb0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Word +0xc of the object at 0x952b8c.
namespace d_00616fb0 {

inline constexpr u32 boot_object_address = 0x00952b8cu;
inline guest::global<u32, 0x00952b8c> boot_object;

u32 boot_object_word_c() {
    return *gptr<u32>(*boot_object + 0xcu);
}

}  // namespace d_00616fb0
GUEST_EXPORT(0x00616fb0, d_00616fb0::boot_object_word_c);

// f_00616fc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Word +0x10 of the object at 0x952b8c.
namespace d_00616fc4 {

inline constexpr u32 boot_object_address = 0x00952b8cu;
inline guest::global<u32, 0x00952b8c> boot_object;

u32 boot_object_word_10() {
    return *gptr<u32>(*boot_object + 0x10u);
}

}  // namespace d_00616fc4
GUEST_EXPORT(0x00616fc4, d_00616fc4::boot_object_word_10);

// f_00617088: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears byte `index` (below 4).
namespace d_00617088 {


void clear_station_byte(u32 r0, u32 villager_table) {
    if (villager_table < 4u) {
        *gptr<u8>(r0 + villager_table) = 0;
    }
}

}  // namespace d_00617088
GUEST_EXPORT(0x00617088, d_00617088::clear_station_byte);

// f_00617120: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether station `index` is connected, not leaving, joined and not dropped (the four station masks, under the session
// lock).
namespace d_00617120 {

struct __attribute__((packed)) NetSession {
    u8 unknown_0[0x13272];  // (not used here)
    u8 byte_13272;
    u8 unknown_13273[0x1];  // (not used here)
    u8 byte_13274;
    u8 unknown_13275[0x1];  // (not used here)
    u8 byte_13276;
    u8 unknown_13277[0x1];  // (not used here)
    u8 byte_13278;
};
GUEST_OFFSET(NetSession, byte_13272, 0x13272);
GUEST_OFFSET(NetSession, byte_13274, 0x13274);
GUEST_OFFSET(NetSession, byte_13276, 0x13276);
GUEST_OFFSET(NetSession, byte_13278, 0x13278);

inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> lock_member_lock;
inline constexpr guest::Function<0x00137e84, u32(u32)> unlock_member_lock;
inline constexpr guest::Function<0x00624c78, u32(u32)> bit_for_index;

u32 NetSession__station_ready(gptr<NetSession> net_session, u32 r1) {
    u32 r5_1 = net_session.addr() + 0x13280u;
    lock_member_lock(r5_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r6_1 = net_session.addr() + 0x13000u;
    u32 r7_1 = net_session->byte_13276;
    u32 bit = bit_for_index(r1);
    if ((bit & r7_1) != 0) {
        u32 r7_2 = net_session->byte_13278;
        u32 bit_2 = bit_for_index(r1);
        if ((bit_2 & r7_2) == 0) {
            u32 r7_3 = net_session->byte_13272;
            u32 bit_3 = bit_for_index(r1);
            if ((bit_3 & r7_3) != 0) {
                u32 r6_2 = net_session->byte_13274;
                u32 bit_4 = bit_for_index(r1);
                if ((bit_4 & r6_2) == 0) {
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
GUEST_EXPORT_FRAMED(0x00617120, d_00617120::NetSession__station_ready, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_006174fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Counts the close timer (+0x132a0) down; when it ends, resets the link, the peer table and the link state.
namespace d_006174fc {

struct __attribute__((packed)) NetSession {
    u8 unknown_0[0x132a0];  // (not used here)
    u32 word_132a0;
};
GUEST_OFFSET(NetSession, word_132a0, 0x132a0);

inline constexpr u32 request_pool_address = 0x00a22020u;
inline constexpr guest::Function<0x0050d478, u32(u32, u32, u32, u32)> RequestPool__release_component;
inline constexpr guest::Function<0x00622c5c, u32(u32)> NetPeerTable__clear;
inline constexpr guest::Function<0x00623168, u32(u32, u32)> NetLink__reset;

void NetSession__tick_close_timer(gptr<NetSession> net_session) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r1_1 = net_session->word_132a0;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return;
    }
    net_session->word_132a0 = r1_1 - 1u;
    if (r1_1 - 1u != 0) {
        guest::cpu()->r[1] = r1_1 - 1u;
        return;
    }
    RequestPool__release_component(request_pool_address, r1_1 - 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
    NetPeerTable__clear(net_session.addr() + 0x3594u);
    frame.release();
    NetLink__reset(net_session.addr() + 0x7880u, guest::cpu()->r[1]);
    return;
}

}  // namespace d_006174fc
GUEST_EXPORT(0x006174fc, d_006174fc::NetSession__tick_close_timer);

// f_0061754c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Updates the network session: the link, the visit state, the stations and the peers.
namespace d_0061754c {

struct __attribute__((packed)) NetSession {
    u8 unknown_0[0x1326b];  // (not used here)
    u8 byte_1326b;
    u8 unknown_1326c[0x48];  // (not used here)
    u8 byte_132b4;
};
GUEST_OFFSET(NetSession, byte_1326b, 0x1326b);
GUEST_OFFSET(NetSession, byte_132b4, 0x132b4);

inline constexpr u32 request_pool_address = 0x00a22020u;
inline constexpr guest::Function<0x005ce6dc, u32(u32, u32, u32, u32)> err_eula_is_idle_with_byte_fac;
inline constexpr guest::Function<0x006193d0, u32(u32)> NetSession__update_all;
inline constexpr guest::Function<0x0061a8b0, u32(u32)> NetMessage__dispatch;
inline constexpr guest::Function<0x0061fe0c, u32(u32)> NetChat__update_session;
inline constexpr guest::Function<0x006212f0, u32(u32)> NetVisit__send_station_state;
inline constexpr guest::Function<0x00622e70, u32(u32)> NetLink__update;
inline constexpr guest::Function<0x00623194, u32(u32)> NetLink__update_state;
inline constexpr guest::Function<0x00624050, u32(u32)> NetLink__update_by_state;
inline constexpr guest::Function<0x00624c78, u32(u32, u32, u32)> bit_for_index;
inline constexpr guest::Function<0x00627124, u32(u32)> NetPart__update_session;
inline constexpr guest::Function<0x00628d08, u32(u32, u32, u32)> NetPart__update;
inline constexpr guest::Function<0x00629a58, u32(u32)> NetPlayers__update;
inline constexpr guest::Function<0x0062add8, u32(u32, u32, u32, u32)> NetSession__update_friends;
inline constexpr guest::Function<0x0062b330, u32(u32)> NetSession__update_players;
inline constexpr guest::Function<0x00746efc, u32(u32)> RequestPool__component_state;
inline constexpr guest::Function<0x00746f8c, u32(u32, u32, u32)> UnknownStateA22020__flag_144_without_flag_30;
inline constexpr guest::Function<0x0075efdc, u32(u32, u32, u32)> word_1c_at;
inline constexpr guest::Function<0x0075f644, u32(u32, u32, u32)> NetPlayers__identity_of_slot;

void NetSession__update(gptr<NetSession> net_session, u32 r1, u32 r2) {
    u32 r0 = net_session.addr();
    u32 i = 0;
    u32 r5 = r0;
    u32 r7 = r0 + 0x13000u;
    u32 r0_1 = net_session->byte_1326b;
    if (r0_1 == 0) {
        u32 r0_2 = err_eula_is_idle_with_byte_fac(r0_1, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0_2 == 0 && net_session->byte_132b4 == 0) {
            NetPart__update(r5 + 0x7874u, r1, r2);
            NetLink__update(r5 + 0x7880u);
            NetVisit__send_station_state(r5 + 0x1c0u);
            NetSession__update_all(r5 + 0x1e4u);
            NetChat__update_session(r5 + 0x214u);
            NetLink__update_by_state(r5 + 0x22cu);
            NetLink__update_state(r5 + 0x23cu);
            NetMessage__dispatch(r5 + 0x27a0u);
            NetPlayers__update(r5 + 0xb0u);
            NetPart__update_session(r5 + 0x10u);
            NetSession__update_players(r5 + 0x28ecu);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
        }
    }
    NetSession__update_friends(r5 + 0x2cdcu, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if ((u32(*gptr<u8>(r7 + 0x26au)) & 2u) == 0) {
        u32 r6 = 0x708u;
        i = 0u;
        do {
            u32 r0_16 = word_1c_at(r5 + 0x10u, i & 0xffu, r2);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            if (r0_16 > r6) {
                *gptr<u8>(r7 + 0x26au) = u8(u32(*gptr<u8>(r7 + 0x26au)) | 2u);
                break;
            }
            i += 1u;
            guest::preempt();
        } while (s32(i) < 4);
    }
    if ((u32(*gptr<u8>(r7 + 0x26au)) & 0x10u) == 0) {
        i = 0u;
        do {
            u32 r6_1 = i & 0xffu;
            u32 r8_1 = *gptr<u8>(r7 + 0x270u);
            u32 bit = bit_for_index(r6_1, r1, r2);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            if ((bit & r8_1) != 0) {
                if (r6_1 == 0) {
                    if (UnknownStateA22020__flag_144_without_flag_30(request_pool_address, r1, r2) != 0) {
                        if (RequestPool__component_state(request_pool_address) >= 2u) {
                            *gptr<u8>(r7 + 0x26au) = u8(u32(*gptr<u8>(r7 + 0x26au)) | 0x10u);
                            goto L_6176c0;
                        }
                    }
                }
                u32 identity = NetPlayers__identity_of_slot(r5 + 0xb0u, r6_1, 1u);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                if (identity == 0) {
                    *gptr<u8>(r7 + 0x26au) = u8(u32(*gptr<u8>(r7 + 0x26au)) | 0x10u);
                    goto L_6176c0;
                }
            }
            i += 1u;
            guest::preempt();
        } while (s32(i) < 4);
    }
L_6176c0:;
    u32 r1_13 = *gptr<u8>(r7 + 0x26au);
    u32 r0_22 = *gptr<u8>(r7 + 0x26bu);
    if (r0_22 != r1_13) {
        r1_13 |= r0_22;
        *gptr<u8>(r7 + 0x26bu) = u8(r0_22 | r1_13);
    }
    guest::cpu()->r[1] = r1_13;
}

}  // namespace d_0061754c
GUEST_EXPORT_FRAMED(0x0061754c, d_0061754c::NetSession__update, 0x41f0);  // pushes {i, r5, r6, r7, r8, lr} first, as the original

// f_006176fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies entries of the session's visitor log (+0x28ec).
namespace d_006176fc {

struct __attribute__((packed)) Local_006176fc_r12_1 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_006176fc_r12_1, float_0, 0x0);
GUEST_OFFSET(Local_006176fc_r12_1, float_4, 0x4);

inline constexpr guest::Function<0x0062c790, u32(u32, u32, u32, u32)> VisitorLog__copy_entries;

struct __attribute__((packed)) NetSessionCopyVisitorLogFrame {
    float float_0;
    float float_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(NetSessionCopyVisitorLogFrame, float_0, 0x0);
GUEST_OFFSET(NetSessionCopyVisitorLogFrame, float_4, 0x4);
GUEST_SIZE(NetSessionCopyVisitorLogFrame, 0xc);

void NetSession__copy_visitor_log(u32 net_session) {
    guest::StackFrameOf<NetSessionCopyVisitorLogFrame> frame;  // the original's stack frame
    gptr<Local_006176fc_r12_1> r12_1 = gptr<Local_006176fc_r12_1>(frame.at(0x10).addr());
    float S0_1 = r12_1->float_0;
    float S1_1 = r12_1->float_4;
    frame->float_0 = S0_1;
    frame->float_4 = S1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    VisitorLog__copy_entries(net_session + 0x28ecu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_006176fc
GUEST_EXPORT_FRAMED(0x006176fc, d_006176fc::NetSession__copy_visitor_log, 0x4000);  // pushes {lr} first, as the original

// f_00617724: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Opens the link when needed (initializing the peer table and sending this player's stamp on the first open) and
// counts it; whether it is open.
namespace d_00617724 {

struct __attribute__((packed)) NetSession {
    u8 unknown_0[0x132a0];  // (not used here)
    u32 word_132a0;
};
GUEST_OFFSET(NetSession, word_132a0, 0x132a0);

inline constexpr u32 request_pool_address = 0x00a22020u;
inline constexpr guest::Function<0x0050cfb8, u32(u32, u32, u32, u32)> RequestPool__cancel;
inline constexpr guest::Function<0x0050cfcc, u32(u32, u32, u32, u32)> RequestPool__is_idle;
inline constexpr guest::Function<0x0062217c, u32(u32, u32, u32, u32)> NetPeerTable__init_own_id;
inline constexpr guest::Function<0x006297a8, u32(u32)> send_own_player_stamp;

u32 NetSession__open_link(gptr<NetSession> net_session, u32 r1) {
    u32 r0 = net_session.addr();
    u32 r6 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r5 = r0 + 0x13000u;
    u32 r4 = r0;
    if (net_session->word_132a0 == 0) {
        goto L_617774;
    } else {
        r6 = 1u;
    }
L_617740:;
    if (*gptr<u32>(r5 + 0x2a0u) == 0) {
        goto L_61778c;
    }
    if (r6 == 0) {
        guest::cpu()->r[1] = r1;
        return r6;
    }
L_617754:;
    r0_1 = *gptr<u32>(r5 + 0x2a0u);
    if (r0_1 + 1u != 0) {
        *gptr<u32>(r5 + 0x2a0u) = r0_1 + 1u;
    }
    RequestPool__cancel(request_pool_address, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    return r6;
L_617774:;
    r1_1 = r4 + 0xb0u;
    r0_2 = RequestPool__is_idle(request_pool_address, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r6 = r0_2;
    guest::preempt();
    goto L_617740;
L_61778c:;
    if (r6 == 0) {
        guest::cpu()->r[1] = r1;
        return r6;
    }
    NetPeerTable__init_own_id(r4 + 0x3594u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    send_own_player_stamp(r4 + 0x7874u);
    r1 = guest::cpu()->r[1];
    guest::preempt();
    goto L_617754;
}

}  // namespace d_00617724
GUEST_EXPORT_FRAMED(0x00617724, d_00617724::NetSession__open_link, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00617824: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Adds an empty entry (the default address and id) to the session's visitor log.
namespace d_00617824 {

inline constexpr guest::Function<0x0062c2bc, u32(u32, u32, u32, u32)> sead__BufferedSafeStringBase_wchar_t___BufferedSafeStringBase_0062c2bc;

void NetSession__add_empty_visitor(u32 net_session) {
    sead__BufferedSafeStringBase_wchar_t___BufferedSafeStringBase_0062c2bc(net_session + 0x28ecu, guest::cpu()->r[1], 0x87bd90u, 0x88f298u);
    return;
}

}  // namespace d_00617824
GUEST_EXPORT(0x00617824, d_00617824::NetSession__add_empty_visitor);

// f_006179d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Removes the leaving station and processes the guest leave; whether both were done.
namespace d_006179d0 {

inline constexpr guest::Function<0x0061d9e0, u32(u32)> NetGuest__leave_done;
inline constexpr guest::Function<0x006235cc, u32(u32, u32, u32, u32)> NetVisit__remove_leaving_station;

u32 NetSession__process_leaving_stations(u32 net_session) {
    u32 r4_1 = 1u;
    if (NetVisit__remove_leaving_station(net_session + 0x23cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]) == 0) {
        r4_1 = 0u;
    }
    if (NetGuest__leave_done(net_session + 0x27a0u) == 0) {
        r4_1 = 0u;
    }
    return r4_1;
}

}  // namespace d_006179d0
GUEST_EXPORT_FRAMED(0x006179d0, d_006179d0::NetSession__process_leaving_stations, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00617d08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Updates the visit: ends a pending notice, refreshes the slot blocks, the roles and the guest records, and moves to
// visit kind 2 when the link part asks.
namespace d_00617d08 {

struct __attribute__((packed)) NetSession {
    u8 unknown_0[0x132af];  // (not used here)
    u8 byte_132af;
};
GUEST_OFFSET(NetSession, byte_132af, 0x132af);

struct __attribute__((packed)) Local_00617d08_r5_1 {
    u8 unknown_0[0x29d];  // (not used here)
    u8 byte_29d;
};
GUEST_OFFSET(Local_00617d08_r5_1, byte_29d, 0x29d);

inline constexpr guest::Function<0x0056bd04, u32(u32, u32, u32, u32)> GameClock__restore_offset;
inline constexpr guest::Function<0x0061a41c, u32(u32, u32, u32, u32)> SlotBlocks__update;
inline constexpr guest::Function<0x0061dae4, u32(u32)> NetGuest__update;
inline constexpr guest::Function<0x006214c4, u32(u32)> NetVisit__update_role_2;
inline constexpr guest::Function<0x00623664, u32(u32)> NetLink__update_transfer;
inline constexpr guest::Function<0x0075f1c4, u32(u32, u32)> flags_09_bit_is_set;

void NetSession__update_visit_state(gptr<NetSession> net_session, u32 r1) {
    gptr<Local_00617d08_r5_1> r5_1 = gptr<Local_00617d08_r5_1>(net_session.addr() + 0x13000u);
    u32 r0_1 = net_session->byte_132af;
    if (r0_1 != 0) {
        GameClock__restore_offset(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        net_session->byte_132af = 0;
    }
    SlotBlocks__update(net_session.addr() + 0x1e4u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    NetVisit__update_role_2(net_session.addr() + 0x1c0u);
    NetLink__update_transfer(net_session.addr() + 0x23cu);
    NetGuest__update(net_session.addr() + 0x27a0u);
    if (r5_1->byte_29d != 2u && *gptr<u8>((net_session.addr() + 0x13200u) + 0xb0u) != 0) {
        if (flags_09_bit_is_set(net_session.addr() + 0x7874u, 2u) != 0) {
            r5_1->byte_29d = 2;
        }
    }
}

}  // namespace d_00617d08
GUEST_EXPORT_FRAMED(0x00617d08, d_00617d08::NetSession__update_visit_state, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00617f90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts a visit: lays out and assigns the station buffers, sets this console's address and the station masks.
namespace d_00617f90 {

struct __attribute__((packed)) NetSession {
    u8 unknown_0[0x1329c];  // (not used here)
    u8 byte_1329c;
};
GUEST_OFFSET(NetSession, byte_1329c, 0x1329c);

inline constexpr u32 request_pool_address = 0x00a22020u;
inline guest::global<u32, 0x00951670> visit_session_value;
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32)> get_current_player;
inline constexpr guest::Function<0x002ff8b0, u32(u32, u32, u32, u32)> player_slot_byte;
inline constexpr guest::Function<0x003082b8, u32(u32)> SceneTable__reset;
inline constexpr guest::Function<0x0051d710, u32(u32, u32, u32)> set_villager_runtime_entry;
inline constexpr guest::Function<0x005c394c, u32(u32, u32, u32)> PlayerRecords__set_slot_value;
inline constexpr guest::Function<0x005c4400, u32(u32, u32, u32)> release_player_slot;
inline constexpr guest::Function<0x00621cf4, u32(u32)> NetStation__init_parts;
inline constexpr guest::Function<0x00623d48, u32(u32, u32)> StationBuffers__layout;
inline constexpr guest::Function<0x00624aa4, u32(u32, u32)> StationMask__add;
inline constexpr guest::Function<0x00624f30, u32(u32, u32)> StationBuffers__assign;
inline constexpr guest::Function<0x006282c0, u32(u32, u32, u32)> NetSharedTable__init;
inline constexpr guest::Function<0x006298cc, u32(u32)> NetPeerList__set_own_address;
inline constexpr guest::Function<0x00746fb4, u32(u32, u32, u32, u32)> UnknownStateA22020__mode_3_or_matching_values;

void NetSession__start_visit(gptr<NetSession> net_session, u32 r1, u32 r2) {
    u32 r0 = net_session.addr();
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r6 = r0 + 0x13000u;
    u32 r5 = r0;
    u32 r7 = r1;
    u32 r4 = r2;
    if (net_session->byte_1329c >= 8u) {
        u32 slot_byte = player_slot_byte(4u, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        net_session->byte_1329c = u8(slot_byte);
    }
    if (UnknownStateA22020__mode_3_or_matching_values(request_pool_address, r1, r2, guest::cpu()->r[3]) != 0) {
        StationBuffers__layout(r5 + 0x78u, 0u);
        StationBuffers__assign(r5 + 0x58u, 0u);
        u32 r9 = 7u;
        StationMask__add(r5 + 0x1326cu, 0u);
        StationMask__add(r5 + 0x1326eu, 0u);
        *gptr<u8>(r6 + 0x2acu) = 1;
        *gptr<u8>(r6 + 0x2adu) = 1;
        *gptr<u8>(r6 + 0x268u) = 0;
        *gptr<u8>(r6 + 0x2aeu) = 1;
        NetPeerList__set_own_address(r5 + 0xb0u);
        NetStation__init_parts(r5 + 0x1c0u);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r4 == 0) {
            goto L_61806c;
        }
        r0_9 = r5 + 0x13234u;
        set_villager_runtime_entry(r0_9, 0u, r2);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
L_618050:;
        r0_10 = r5 + 0x10u;
        NetSharedTable__init(r0_10, r1, r2);
        SceneTable__reset(r0_10);
        *gptr<u8>(r6 + 0x2b1u) = u8(r7);
        return;
L_61806c:;
        u32 r0_11 = r4 & 0xffu;
        if (r0_11 == 0) {
            u32 player = get_current_player(r0_11, r1, r2);
            PlayerRecords__set_slot_value(0u, r9, player);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
        } else {
            release_player_slot(r0_11, r1, r2);
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
    *gptr<u8>(r6 + 0x2acu) = 1;
    *gptr<u32>(r5 + 0x50u) = *visit_session_value;
}

}  // namespace d_00617f90
GUEST_EXPORT_FRAMED(0x00617f90, d_00617f90::NetSession__start_visit, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_00618164: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Drops station `index` (below 4): clears its counters, slots, buffers, packets, records and masks (under the session
// lock) and drops its peer.
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
inline constexpr guest::Function<0x00617088, u32(u32, u32)> clear_station_byte;
inline constexpr guest::Function<0x0061dd74, u32(u32, u32)> remove_station_from_masks;
inline constexpr guest::Function<0x00620660, u32(u32, u32)> clear_slot_byte_9;
inline constexpr guest::Function<0x00621684, u32(u32, u32)> reset_station_slot;
inline constexpr guest::Function<0x006237a4, u32(u32, u32)> remove_station_from_three_masks;
inline constexpr guest::Function<0x00623c3c, u32(u32, u32)> StationBuffers__reset;
inline constexpr guest::Function<0x006245ec, u32(u32, u32)> remove_station_from_first_mask;
inline constexpr guest::Function<0x00624ae4, u32(u32, u32)> SlotBlocks__clear_slot;
inline constexpr guest::Function<0x00624b24, u32(u32, u32)> StationMask__remove;
inline constexpr guest::Function<0x00624f14, u32(u32, u32)> clear_station_flags;
inline constexpr guest::Function<0x006251a0, u32(u32, u32)> EntryLengths__clear;
inline constexpr guest::Function<0x00628000, u32(u32, u32)> PacketBuffer__clear_counter_and_value;
inline constexpr guest::Function<0x0062a04c, u32(u32, u32, u32, u32)> NetPeerList__drop_peer;

void NetSession__drop_station(u32 net_session, u32 villager_table) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    if (villager_table >= 4u) {
        guest::cpu()->r[1] = villager_table;
        return;
    }
    gptr<Local_00618164_r7_1> r7_1 = gptr<Local_00618164_r7_1>(net_session + villager_table + 0x13000u);
    r7_1->byte_2a4 = 0;
    lock_member_lock(net_session + 0x13280u, villager_table, guest::cpu()->r[2], guest::cpu()->r[3]);
    r7_1->byte_2a8 = 0;
    unlock_member_lock(net_session + 0x13280u);
    reset_station_slot(net_session + 0x1c0u, villager_table);
    clear_station_flags(net_session + 0x58u, villager_table);
    StationBuffers__reset(net_session + 0x78u, villager_table);
    PacketBuffer__clear_counter_and_value(net_session + 0x10u, villager_table);
    remove_station_from_masks(net_session + 0x27a0u, villager_table);
    EntryLengths__clear(net_session + 0x2784u, villager_table);
    clear_station_byte(net_session + 0x277cu, villager_table);
    remove_station_from_three_masks(net_session + 0x23cu, villager_table);
    remove_station_from_first_mask(net_session + 0x22cu, villager_table);
    clear_slot_byte_9(net_session + 0x214u, villager_table);
    SlotBlocks__clear_slot(net_session + 0x1e4u, villager_table);
    lock_member_lock(net_session + 0x13280u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    StationMask__remove(net_session + 0x13272u, villager_table);
    StationMask__remove(net_session + 0x13274u, villager_table);
    StationMask__remove(net_session + 0x13276u, villager_table);
    StationMask__remove(net_session + 0x13278u, villager_table);
    StationMask__remove(net_session + 0x1327au, villager_table);
    StationMask__remove(net_session + 0x1327cu, villager_table);
    StationMask__remove(net_session + 0x13270u, villager_table);
    StationMask__remove(net_session + 0x1326eu, villager_table);
    StationMask__remove(net_session + 0x1326cu, villager_table);
    unlock_member_lock(net_session + 0x13280u);
    frame.release();
    NetPeerList__drop_peer(net_session + 0xb0u, villager_table, guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
}

}  // namespace d_00618164
GUEST_EXPORT(0x00618164, d_00618164::NetSession__drop_station);

// f_006182f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores the station's packet sequence (under the lock); when checking, flags a gap (bit 3 of +0x1326a) unless it is
// the next one.
namespace d_006182f4 {

struct __attribute__((packed)) NetSession {
    u8 unknown_0[0x1326a];  // (not used here)
    u8 byte_1326a;
};
GUEST_OFFSET(NetSession, byte_1326a, 0x1326a);

struct __attribute__((packed)) Local_006182f4_r1_1 {
    u8 unknown_0[0x2a8];  // (not used here)
    u8 byte_2a8;
};
GUEST_OFFSET(Local_006182f4_r1_1, byte_2a8, 0x2a8);

inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> lock_member_lock;
inline constexpr guest::Function<0x00137e84, u32(u32, u32)> unlock_member_lock;

void NetSession__set_station_sequence(gptr<NetSession> net_session, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    if (r1 >= 4u) {
        guest::cpu()->r[1] = r1;
        return;
    }
    u32 r6_1 = net_session.addr() + 0x13280u;
    lock_member_lock(r6_1, r1, r2, r3);
    gptr<Local_006182f4_r1_1> r1_1 = gptr<Local_006182f4_r1_1>(net_session.addr() + r1 + 0x13000u);
    if (r3 != 0) {
        u32 r0_1 = r1_1->byte_2a8;
        u32 r0_2 = r2 - r0_1;
        if (!(r2 >= r0_1) || (r2 == r0_1)) {
            r0_2 += 0x100u;
        }
        if ((r0_2 & 0xffu) != 1u) {
            net_session->byte_1326a = u8(u32(net_session->byte_1326a) | 8u);
        }
    }
    r1_1->byte_2a8 = u8(r2);
    frame.release();
    unlock_member_lock(r6_1, r1_1.addr());
    return;
}

}  // namespace d_006182f4
GUEST_EXPORT(0x006182f4, d_006182f4::NetSession__set_station_sequence);

// f_00618384: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the guest villager record (+0x7894) and its flag.
namespace d_00618384 {

struct __attribute__((packed)) NetSession {
    u8 unknown_0[0x9db0];  // (not used here)
    u8 byte_9db0;
};
GUEST_OFFSET(NetSession, byte_9db0, 0x9db0);

inline constexpr guest::Function<0x001add58, u32(u32, u32, u32, u32)> VisitingVillagers__receive;
inline constexpr guest::Function<0x00308d4d, u32(u32)> Villager__clear;

void NetSession__clear_guest_villager(gptr<NetSession> net_session) {
    u32 r0_1 = net_session.addr() + 0x7894u;
    VisitingVillagers__receive(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    Villager__clear(r0_1);
    net_session->byte_9db0 = 0;
}

}  // namespace d_00618384
GUEST_EXPORT_FRAMED(0x00618384, d_00618384::NetSession__clear_guest_villager, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006184d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The close result: -1 when the peer list is gone (state reset), 1 when closed, 0 when still closing.
namespace d_006184d8 {

struct __attribute__((packed)) NetSession {
    u8 unknown_0[0x1f0];  // (not used here)
    u8 byte_1f0;
    u8 byte_1f1;
};
GUEST_OFFSET(NetSession, byte_1f0, 0x1f0);
GUEST_OFFSET(NetSession, byte_1f1, 0x1f1);

inline constexpr guest::Function<0x0075f644, u32(u32, u32, u32, u32)> NetPlayers__identity_of_slot;

u32 NetSession__close_result(gptr<NetSession> net_session, u32 r1) {
    u32 r0_1 = net_session->byte_1f1;
    if (r0_1 == 0 || r0_1 == 5u) {
        u32 identity = NetPlayers__identity_of_slot(net_session.addr() + 0xb0u, 0u, 1u, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (identity == 0) {
            net_session->byte_1f0 = 0;
            return ~0u;
        }
    }
    u32 r0_5 = net_session->byte_1f0;
    if (r0_5 == 1u) {
        guest::cpu()->r[1] = r1;
        return r0_5;
    }
    guest::cpu()->r[1] = r1;
    return r0_5 == 0 ? ~0u : 0u;
}

}  // namespace d_006184d8
GUEST_EXPORT_FRAMED(0x006184d8, d_006184d8::NetSession__close_result, 0x4010);  // pushes {r4, lr} first, as the original

// f_00618578: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Once a guest station is known: assigns the guest's slot and buffers and, unless keeping them, sets the slots of the
// other stations.
namespace d_00618578 {

struct __attribute__((packed)) NetSession {
    u8 unknown_0[0x13268];  // (not used here)
    u8 own;
    u8 unknown_13269[0x45];  // (not used here)
    u8 byte_132ae;
};
GUEST_OFFSET(NetSession, own, 0x13268);
GUEST_OFFSET(NetSession, byte_132ae, 0x132ae);

struct __attribute__((packed)) Local_00618578_r6_1 {
    u8 unknown_0[0x268];  // (not used here)
    u8 own;
    u8 unknown_269[0x45];  // (not used here)
    u8 byte_2ae;
};
GUEST_OFFSET(Local_00618578_r6_1, own, 0x268);
GUEST_OFFSET(Local_00618578_r6_1, byte_2ae, 0x2ae);

inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> get_current_player;
inline constexpr guest::Function<0x0051d710, u32(u32, u32)> set_villager_runtime_entry;
inline constexpr guest::Function<0x005c394c, u32(u32, u32, u32)> PlayerRecords__set_slot_value;
inline constexpr guest::Function<0x005c4400, u32(u32, u32, u32)> release_player_slot;
inline constexpr guest::Function<0x00623d48, u32(u32, u32)> StationBuffers__layout;
inline constexpr guest::Function<0x00624f30, u32(u32, u32)> StationBuffers__assign;
inline constexpr guest::Function<0x0075f578, u32(u32, u32, u32, u32)> own_peer_index;

void NetSession__assign_guest_slot(gptr<NetSession> net_session, u32 r1, u32 r2) {
    u32 r0 = net_session.addr();
    gptr<Local_00618578_r6_1> r6_1 = gptr<Local_00618578_r6_1>(r0 + 0x13000u);
    u32 own = net_session->own;
    u32 r7_1 = r1;
    if (own != 0) {
        u32 r0_1 = net_session->byte_132ae;
        if (r0_1 == 0) {
            if (own >= 4u) {
                r0_1 = own_peer_index(r0 + 0xb0u, r1, r2, guest::cpu()->r[3]);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                own = r0_1;
                if (r0_1 >= 4u) {
                    return;
                }
            }
            u32 player = get_current_player(r0_1, r1, r2, guest::cpu()->r[3]);
            u32 r8 = player;
            r6_1->own = u8(own);
            r6_1->byte_2ae = 1;
            StationBuffers__layout(r0 + 0x78u, own);
            StationBuffers__assign(r0 + 0x58u, own);
            set_villager_runtime_entry(r0 + 0x13234u, own);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            if (r7_1 == 0) {
                u32 i = 0u;
                do {
                    u32 r0_7 = i & 0xffu;
                    if (r0_7 != 0) {
                        if (r0_7 == own) {
                            PlayerRecords__set_slot_value(r0_7, i + 3u & 0xffu, r8);
                            r1 = guest::cpu()->r[1];
                            r2 = guest::cpu()->r[2];
                        } else {
                            release_player_slot(r0_7, r1, r2);
                            r1 = guest::cpu()->r[1];
                            r2 = guest::cpu()->r[2];
                        }
                    }
                    i += 1u;
                    guest::preempt();
                } while (s32(i) < 4);
            }
        }
    }
}

}  // namespace d_00618578
GUEST_EXPORT_FRAMED(0x00618578, d_00618578::NetSession__assign_guest_slot, 0x41f0);  // pushes {i, own, r6, r7, r8, lr} first, as the original

// f_00618684: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When the link object accepts (0050d24c): starts the visit as the host; true when it did.
namespace d_00618684 {

inline constexpr u32 request_pool_address = 0x00a22020u;
inline constexpr guest::Function<0x0050d24c, u32(u32, u32, u32, u32)> RequestPool__request_search;
inline constexpr guest::Function<0x00617f90, u32(u32, u32, u32)> NetSession__start_visit;

u32 NetSession__try_start_visit_as_host(u32 net_session, u32 r1, u32 r2) {
    u32 r0_1 = RequestPool__request_search(request_pool_address, r1, r2, guest::cpu()->r[3]);
    if (r0_1 == 0) {
        return r0_1;
    }
    NetSession__start_visit(net_session, 1u, 0u);
    return 1u;
}

}  // namespace d_00618684
GUEST_EXPORT_FRAMED(0x00618684, d_00618684::NetSession__try_start_visit_as_host, 0x4010);  // pushes {r4, lr} first, as the original

// f_006186b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sends the join answer (message 0x76: accepted when a guest is connected and assigned, else refused) and keeps it
// (+0x132b1).
namespace d_006186b8 {

struct __attribute__((packed)) NetSession {
    u8 unknown_0[0x13268];  // (not used here)
    u8 byte_13268;
    u8 unknown_13269[0x43];  // (not used here)
    u8 byte_132ac;
    u8 unknown_132ad[0x1];  // (not used here)
    u8 byte_132ae;
};
GUEST_OFFSET(NetSession, byte_13268, 0x13268);
GUEST_OFFSET(NetSession, byte_132ac, 0x132ac);
GUEST_OFFSET(NetSession, byte_132ae, 0x132ae);

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

inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> current_net_signed_value;
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> send_message;

struct __attribute__((packed)) NetSessionSendJoinAnswerFrame {
    u8 unknown_0[0x4];  // (not read or written by name)
    u8 byte_4;
    u8 unknown_5[0x13];  // (not read or written by name)
};
GUEST_OFFSET(NetSessionSendJoinAnswerFrame, byte_4, 0x4);
GUEST_SIZE(NetSessionSendJoinAnswerFrame, 0x18);

u32 NetSession__send_join_answer(gptr<NetSession> net_session, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<NetSessionSendJoinAnswerFrame> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_006186b8_ea_1> ea_1 = gptr<Local_006186b8_ea_1>(frame.at(0).addr());
    ea_1->word_0 = net_session.addr();
    ea_1->word_4 = r1;
    ea_1->word_8 = r4;
    ea_1->word_c = r5;
    ea_1->word_10 = r6;
    ea_1->word_14 = r14;
    if (current_net_signed_value(net_session.addr(), r1, r2, r3) != 0) {
        u32 r2_1 = frame.at(4).addr();
        if (net_session->byte_132ac != 0 && net_session->byte_132ae != 0 && net_session->byte_13268 != 0) {
            send_message(0x76u, 0u, r2_1, 1u);
        } else {
            send_message(0x76u, 4u, r2_1, 1u);
        }
    }
    u32 r0_2 = frame->byte_4;
    *gptr<u8>(net_session.addr() + 0x132b1u) = u8(r0_2);
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
GUEST_EXPORT(0x006186b8, d_006186b8::NetSession__send_join_answer);

// f_00618aa4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When the link object accepts (0050d238): starts the visit as a guest with option 1; true when it did.
namespace d_00618aa4 {

inline constexpr u32 request_pool_address = 0x00a22020u;
inline constexpr guest::Function<0x0050d238, u32(u32, u32, u32, u32)> RequestPool__request_rate;
inline constexpr guest::Function<0x00617f90, u32(u32, u32, u32)> NetSession__start_visit;

u32 NetSession__try_start_visit_as_guest(u32 net_session, u32 r1, u32 r2) {
    u32 r0_1 = RequestPool__request_rate(request_pool_address, r1, r2, guest::cpu()->r[3]);
    if (r0_1 == 0) {
        return r0_1;
    }
    NetSession__start_visit(net_session, 1u, 1u);
    return 1u;
}

}  // namespace d_00618aa4
GUEST_EXPORT_FRAMED(0x00618aa4, d_00618aa4::NetSession__try_start_visit_as_guest, 0x4010);  // pushes {r4, lr} first, as the original

// f_00618ad8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Moves the session's close state (+0x1f0) from 0 or 1 to 2 with reason 7; true when it did.
namespace d_00618ad8 {

struct __attribute__((packed)) NetSession {
    u8 unknown_0[0x1f0];  // (not used here)
    u8 byte_1f0;
    u8 byte_1f1;
};
GUEST_OFFSET(NetSession, byte_1f0, 0x1f0);
GUEST_OFFSET(NetSession, byte_1f1, 0x1f1);


u32 NetSession__try_begin_close_7(gptr<NetSession> net_session) {
    u32 r0_1 = net_session->byte_1f0;
    if (r0_1 != 0 && r0_1 != 1u) {
        guest::cpu()->r[1] = net_session.addr();
        return 0u;
    }
    net_session->byte_1f0 = 2;
    net_session->byte_1f1 = 7;
    guest::cpu()->r[1] = net_session.addr();
    return 1u;
}

}  // namespace d_00618ad8
GUEST_EXPORT(0x00618ad8, d_00618ad8::NetSession__try_begin_close_7);

// f_00618b08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Moves the session's close state (+0x1f0) from 0 or 1 to 2 with reason 5; true when it did.
namespace d_00618b08 {

struct __attribute__((packed)) NetSession {
    u8 unknown_0[0x1f0];  // (not used here)
    u8 byte_1f0;
    u8 byte_1f1;
};
GUEST_OFFSET(NetSession, byte_1f0, 0x1f0);
GUEST_OFFSET(NetSession, byte_1f1, 0x1f1);


u32 NetSession__try_begin_close_5(gptr<NetSession> net_session) {
    u32 r0_1 = net_session->byte_1f0;
    if (r0_1 != 0 && r0_1 != 1u) {
        guest::cpu()->r[1] = net_session.addr();
        return 0u;
    }
    net_session->byte_1f0 = 2;
    net_session->byte_1f1 = 5;
    guest::cpu()->r[1] = net_session.addr();
    return 1u;
}

}  // namespace d_00618b08
GUEST_EXPORT(0x00618b08, d_00618b08::NetSession__try_begin_close_5);

// f_00618b38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When the link object accepts (0050d260): starts the visit with the friend list's value; true when it did.
namespace d_00618b38 {

inline constexpr u32 friend_list_instance_address = 0x009529ccu;
inline constexpr u32 request_pool_address = 0x00a22020u;
inline guest::global<u32, 0x009529cc> friend_list_instance;
inline constexpr guest::Function<0x0050d260, u32(u32, u32, u32, u32)> RequestPool__request_delete;
inline constexpr guest::Function<0x00617f90, u32(u32, u32, u32)> NetSession__start_visit;
inline constexpr guest::Function<0x0061ee74, u32(u32, u32, u32, u32)> NetGuest__receive;
inline constexpr guest::Function<0x0070ab10, u32(u32)> friend_key_if_set;

struct __attribute__((packed)) NetSessionTryStartVisitWithFriendsFrame {
    u32 friend_key;
};
GUEST_OFFSET(NetSessionTryStartVisitWithFriendsFrame, friend_key, 0x0);
GUEST_SIZE(NetSessionTryStartVisitWithFriendsFrame, 0x4);

u32 NetSession__try_start_visit_with_friends(u32 net_session, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<NetSessionTryStartVisitWithFriendsFrame> frame;  // the original's stack frame
    frame->friend_key = r3;
    u32 r0_1 = RequestPool__request_delete(request_pool_address, r1, r2, r3);
    if (r0_1 == 0) {
        return r0_1;
    }
    NetSession__start_visit(net_session, 0u, r2);
    u32 friend_key = friend_key_if_set(*friend_list_instance);
    frame->friend_key = friend_key;
    NetGuest__receive(net_session + 0x27a0u, 0u, frame.at(0).addr(), 0u);
    return 1u;
}

}  // namespace d_00618b38
GUEST_EXPORT_FRAMED(0x00618b38, d_00618b38::NetSession__try_start_visit_with_friends, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00618c00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets every part of the network session (stations, visit, peers, packets, records).
namespace d_00618c00 {

struct __attribute__((packed)) NetSessionReset2Arg0 {
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
GUEST_OFFSET(NetSessionReset2Arg0, byte_13266, 0x13266);
GUEST_OFFSET(NetSessionReset2Arg0, byte_13267, 0x13267);
GUEST_OFFSET(NetSessionReset2Arg0, byte_13268, 0x13268);
GUEST_OFFSET(NetSessionReset2Arg0, byte_1326a, 0x1326a);
GUEST_OFFSET(NetSessionReset2Arg0, byte_1326b, 0x1326b);
GUEST_OFFSET(NetSessionReset2Arg0, byte_1329c, 0x1329c);
GUEST_OFFSET(NetSessionReset2Arg0, byte_1329d, 0x1329d);
GUEST_OFFSET(NetSessionReset2Arg0, byte_132a4, 0x132a4);
GUEST_OFFSET(NetSessionReset2Arg0, byte_132a5, 0x132a5);
GUEST_OFFSET(NetSessionReset2Arg0, byte_132a6, 0x132a6);
GUEST_OFFSET(NetSessionReset2Arg0, byte_132a7, 0x132a7);
GUEST_OFFSET(NetSessionReset2Arg0, byte_132a8, 0x132a8);
GUEST_OFFSET(NetSessionReset2Arg0, byte_132a9, 0x132a9);
GUEST_OFFSET(NetSessionReset2Arg0, byte_132aa, 0x132aa);
GUEST_OFFSET(NetSessionReset2Arg0, byte_132ab, 0x132ab);
GUEST_OFFSET(NetSessionReset2Arg0, byte_132ac, 0x132ac);
GUEST_OFFSET(NetSessionReset2Arg0, byte_132ad, 0x132ad);
GUEST_OFFSET(NetSessionReset2Arg0, byte_132ae, 0x132ae);
GUEST_OFFSET(NetSessionReset2Arg0, byte_132af, 0x132af);
GUEST_OFFSET(NetSessionReset2Arg0, byte_132b1, 0x132b1);
GUEST_OFFSET(NetSessionReset2Arg0, byte_132b2, 0x132b2);
GUEST_OFFSET(NetSessionReset2Arg0, byte_132b3, 0x132b3);
GUEST_OFFSET(NetSessionReset2Arg0, byte_132b4, 0x132b4);
GUEST_OFFSET(NetSessionReset2Arg0, byte_132b5, 0x132b5);
GUEST_OFFSET(NetSessionReset2Arg0, byte_132b6, 0x132b6);
GUEST_OFFSET(NetSessionReset2Arg0, byte_132b7, 0x132b7);

inline constexpr guest::Function<0x00301444, u32(u32, u32)> clear;
inline constexpr guest::Function<0x006170f4, u32(u32)> store_constants_6170f4_006170f4;
inline constexpr guest::Function<0x0061a6a4, u32(u32)> SlotBlocks__clear;
inline constexpr guest::Function<0x0061f3f8, u32(u32)> NetGuest__clear;
inline constexpr guest::Function<0x00620dcc, u32(u32)> StationEntry__clear;
inline constexpr guest::Function<0x006239fc, u32(u32)> NetVisit__reset;
inline constexpr guest::Function<0x00623dcc, u32(u32)> StationBuffers__clear;
inline constexpr guest::Function<0x0062478c, u32(u32)> reset_pair_holder;
inline constexpr guest::Function<0x00624be4, u32(u32, u32, u32, u32)> construct_slot_object;
inline constexpr guest::Function<0x00624c68, u32(u32)> clear_flag_pair;
inline constexpr guest::Function<0x00624fd4, u32(u32)> StationBuffers__clear_2;
inline constexpr guest::Function<0x006255b8, u32(u32)> store_constants_6255b8;
inline constexpr guest::Function<0x00625da4, u32(u32)> SmallPacket__reset;
inline constexpr guest::Function<0x00625ed4, u32(u32)> store_constants_625ed4;
inline constexpr guest::Function<0x00626070, u32(u32)> store_word_constant_pack_0x4_00626070;
inline constexpr guest::Function<0x00626454, u32(u32)> SmallPacket2__reset;
inline constexpr guest::Function<0x006265c4, u32(u32)> store_word_constant_pack_0x4_006265c4;
inline constexpr guest::Function<0x0062834c, u32(u32)> NetSharedTable__reset;
inline constexpr guest::Function<0x00629808, u32(u32)> reset_record_00629808;
inline constexpr guest::Function<0x0062a724, u32(u32)> NetPeerList__reset;

u32 NetSession__reset_2(gptr<NetSessionReset2Arg0> arg0, u32 r1) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r5_1 = arg0.addr() + 0x13000u;
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
    construct_slot_object(arg0.addr() + 0x1c0u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    SmallPacket__reset(arg0.addr() + 0x7840u);
    SmallPacket2__reset(arg0.addr() + 0x7858u);
    store_word_constant_pack_0x4_006265c4(arg0.addr() + 0x786cu);
    store_constants_625ed4(arg0.addr() + 0x784cu);
    store_word_constant_pack_0x4_00626070(arg0.addr() + 0x7864u);
    store_constants_6255b8(arg0.addr() + 0x2784u);
    store_constants_6170f4_006170f4(arg0.addr() + 0x277cu);
    NetVisit__reset(arg0.addr() + 0x23cu);
    reset_pair_holder(arg0.addr() + 0x22cu);
    StationEntry__clear(arg0.addr() + 0x214u);
    SlotBlocks__clear(arg0.addr() + 0x1e4u);
    NetSharedTable__reset(arg0.addr() + 0x10u);
    StationBuffers__clear_2(arg0.addr() + 0x58u);
    StationBuffers__clear(arg0.addr() + 0x78u);
    reset_record_00629808(arg0.addr() + 0xa4u);
    clear_flag_pair(arg0.addr() + 0x1326cu);
    clear_flag_pair(arg0.addr() + 0x1326eu);
    clear_flag_pair(arg0.addr() + 0x13270u);
    clear_flag_pair(arg0.addr() + 0x13272u);
    clear_flag_pair(arg0.addr() + 0x13274u);
    clear_flag_pair(arg0.addr() + 0x13276u);
    clear_flag_pair(arg0.addr() + 0x13278u);
    clear_flag_pair(arg0.addr() + 0x1327au);
    clear_flag_pair(arg0.addr() + 0x1327cu);
    NetPeerList__reset(arg0.addr() + 0xb0u);
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
        NetGuest__clear(arg0.addr() + 0x27a0u);
        arg0->byte_13266 = 6;
        arg0->byte_1329d = 0;
        arg0->byte_13267 = 6;
        frame.release();
        return clear(arg0.addr() + 0x13234u, 0x32u);
    }
    return 4u;
}

}  // namespace d_00618c00
GUEST_EXPORT(0x00618c00, d_00618c00::NetSession__reset_2);

// f_00618ecc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether station `index` is ready (when `check_masks`), its peer address is usable and, when asked, its player byte
// +0x24 is clear.
namespace d_00618ecc {

struct __attribute__((packed)) NetSession {
    u8 unknown_0[0x13272];  // (not used here)
    u8 byte_13272;
    u8 unknown_13273[0x1];  // (not used here)
    u8 byte_13274;
    u8 unknown_13275[0x1];  // (not used here)
    u8 byte_13276;
    u8 unknown_13277[0x1];  // (not used here)
    u8 byte_13278;
};
GUEST_OFFSET(NetSession, byte_13272, 0x13272);
GUEST_OFFSET(NetSession, byte_13274, 0x13274);
GUEST_OFFSET(NetSession, byte_13276, 0x13276);
GUEST_OFFSET(NetSession, byte_13278, 0x13278);

inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> lock_member_lock;
inline constexpr guest::Function<0x00137e84, u32(u32)> unlock_member_lock;
inline constexpr guest::Function<0x00624c78, u32(u32)> bit_for_index;
inline constexpr guest::Function<0x0075e7ac, u32(u32, u32)> NetSession__player_byte_24;
inline constexpr guest::Function<0x0075f448, u32(u32, u32, u32, u32)> NetSession__peer_address_is_usable;

u32 NetSession__station_link_ok(gptr<NetSession> net_session, u32 r1, u32 r2, u32 r3) {
    u32 r0 = net_session.addr();
    u32 r10_1 = r2;
    if (r3 != 0) {
        lock_member_lock(r0 + 0x13280u, r1, r2, r3);
        u32 r6_1 = r0 + 0x13000u;
        u32 r8_1 = net_session->byte_13276;
        u32 bit = bit_for_index(r1);
        if ((bit & r8_1) != 0) {
            u32 r8_2 = net_session->byte_13278;
            u32 bit_2 = bit_for_index(r1);
            if ((bit_2 & r8_2) == 0) {
                u32 r8_3 = net_session->byte_13272;
                u32 bit_3 = bit_for_index(r1);
                if ((bit_3 & r8_3) != 0) {
                    u32 r4_1 = net_session->byte_13274;
                    u32 bit_4 = bit_for_index(r1);
                    if ((bit_4 & r4_1) == 0) {
                        goto L_618f60;
                    }
                }
            }
        }
        unlock_member_lock(r0 + 0x13280u);
        return 0u;
L_618f60:;
        unlock_member_lock(r0 + 0x13280u);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    if (NetSession__peer_address_is_usable(r0 + 0xb0u, r1, r2, r3) != 0) {
        if (r10_1 == 0) {
            return 1u;
        }
        if (NetSession__player_byte_24(r0 + 0x78u, r1) == 0) {
            return 1u;
        }
    }
    return 0u;
}

}  // namespace d_00618ecc
GUEST_EXPORT_FRAMED(0x00618ecc, d_00618ecc::NetSession__station_link_ok, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_00618fb0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Ends the session: resets it, restores this console's slot, releases the other three slots and counts the link down
// (closing it at 0).
namespace d_00618fb0 {

struct __attribute__((packed)) NetSession {
    u8 unknown_0[0x1329c];  // (not used here)
    u8 byte_1329c;
};
GUEST_OFFSET(NetSession, byte_1329c, 0x1329c);

inline constexpr u32 request_pool_address = 0x00a22020u;
inline constexpr guest::Function<0x0050d478, u32(u32, u32, u32)> RequestPool__release_component;
inline constexpr guest::Function<0x005c394c, u32(u32, u32, u32)> PlayerRecords__set_slot_value;
inline constexpr guest::Function<0x005c4400, u32(u32, u32, u32)> release_player_slot;
inline constexpr guest::Function<0x00618c00, u32(u32, u32)> NetSession__reset_2;
inline constexpr guest::Function<0x00622c5c, u32(u32)> NetPeerTable__clear;
inline constexpr guest::Function<0x00623168, u32(u32, u32)> NetLink__reset;
inline constexpr guest::Function<0x006dcc94, u32(u32, u32, u32, u32)> reset_tables_997c70;

u32 NetSession__end(gptr<NetSession> net_session, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0 = net_session.addr();
    u32 r5 = r0;
    reset_tables_997c70(r0, r1, r2, guest::cpu()->r[3]);
    u32 r6 = r5 + 0x13000u;
    u32 r4_1 = net_session->byte_1329c;
    NetSession__reset_2(r5, 0u);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r4_1 < 8u) {
        PlayerRecords__set_slot_value(0u, r4_1, 0u);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
    }
    u32 i = 1u;
    do {
        release_player_slot(i & 0xffu, r1, r2);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        i += 1u;
        guest::preempt();
    } while (s32(i) < 4);
    u32 r0_2 = *gptr<u32>(r6 + 0x2a0u);
    if (r0_2 != 0) {
        u32 res_1 = r0_2 - 1u;
        r0_2 = res_1;
        *gptr<u32>(r6 + 0x2a0u) = r0_2;
        if (res_1 == 0) {
            RequestPool__release_component(request_pool_address, r1, r2);
            NetPeerTable__clear(r5 + 0x3594u);
            frame.release();
            return NetLink__reset((r5 + 0x4000u) + 0x3880u, guest::cpu()->r[1]);
        }
    }
    guest::cpu()->r[1] = r1;
    return r0_2;
}

}  // namespace d_00618fb0
GUEST_EXPORT(0x00618fb0, d_00618fb0::NetSession__end);

// f_00619044: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds the network session's parts (peers, records, buffers, friend check, visitor log).
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

struct __attribute__((packed)) Local_00619044_r1_27 {
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
GUEST_OFFSET(Local_00619044_r1_27, byte_29c, 0x29c);
GUEST_OFFSET(Local_00619044_r1_27, byte_29d, 0x29d);
GUEST_OFFSET(Local_00619044_r1_27, word_2a0, 0x2a0);
GUEST_OFFSET(Local_00619044_r1_27, byte_2ac, 0x2ac);
GUEST_OFFSET(Local_00619044_r1_27, byte_2ad, 0x2ad);
GUEST_OFFSET(Local_00619044_r1_27, byte_2ae, 0x2ae);
GUEST_OFFSET(Local_00619044_r1_27, byte_2af, 0x2af);
GUEST_OFFSET(Local_00619044_r1_27, byte_2b0, 0x2b0);
GUEST_OFFSET(Local_00619044_r1_27, byte_2b1, 0x2b1);
GUEST_OFFSET(Local_00619044_r1_27, byte_2b2, 0x2b2);
GUEST_OFFSET(Local_00619044_r1_27, byte_2b3, 0x2b3);
GUEST_OFFSET(Local_00619044_r1_27, byte_2b4, 0x2b4);
GUEST_OFFSET(Local_00619044_r1_27, byte_2b5, 0x2b5);
GUEST_OFFSET(Local_00619044_r1_27, byte_2b6, 0x2b6);
GUEST_OFFSET(Local_00619044_r1_27, byte_2b7, 0x2b7);

inline constexpr guest::Function<0x0012bfec, u32(u32, u32)> CriticalSection__construct;
inline constexpr guest::Function<0x001ae1e4, u32(u32)> VisitingVillager__construct;
inline constexpr guest::Function<0x0029b870, u32(u32)> clear_32_bytes;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x00617104, u32(u32)> store_byte_constant_pack_0x4_00617104;
inline constexpr guest::Function<0x0061a71c, u32(u32)> SlotBlocks__construct;
inline constexpr guest::Function<0x0061f4c0, u32(u32)> netgame__ConfirmMachine__ConfirmMachine_0061f4c0;
inline constexpr guest::Function<0x00620e68, u32(u32)> StationEntry__clear_2;
inline constexpr guest::Function<0x006220f8, u32(u32)> netgame__ConfirmMachine__ConfirmMachine_006220f8;
inline constexpr guest::Function<0x00622d04, u32(u32)> NetPeerTable__construct;
inline constexpr guest::Function<0x00623184, u32(u32)> store_constants_623184;
inline constexpr guest::Function<0x00623bb4, u32(u32)> netgame__ConfirmMachine__ConfirmMachine_00623bb4;
inline constexpr guest::Function<0x00623e3c, u32(u32)> StationBuffers__init;
inline constexpr guest::Function<0x00624920, u32(u32)> construct_confirm_machine;
inline constexpr guest::Function<0x00624c90, u32(u32, u32, u32, u32)> clear_flag_pair_b;
inline constexpr guest::Function<0x00625060, u32(u32)> StationBuffers__clear_all;
inline constexpr guest::Function<0x00625664, u32(u32)> store_constants_625664;
inline constexpr guest::Function<0x00625e2c, u32(u32)> SmallPacket__clear;
inline constexpr guest::Function<0x00625f58, u32(u32)> store_constants_625f58;
inline constexpr guest::Function<0x006260f0, u32(u32)> store_constants_6260f0;
inline constexpr guest::Function<0x006264e0, u32(u32)> SmallPacket2__clear;
inline constexpr guest::Function<0x00626644, u32(u32)> store_constants_626644;
inline constexpr guest::Function<0x00628518, u32(u32, u32, u32, u32)> NetRecord__clear;
inline constexpr guest::Function<0x006297f0, u32(u32)> store_constants_6297f0;
inline constexpr guest::Function<0x006298a8, u32(u32)> NetPeerList__clear_header;
inline constexpr guest::Function<0x0062ac50, u32(u32)> netgame__AvatarMgr__AvatarMgr;
inline constexpr guest::Function<0x0062b014, u32(u32)> FriendCheck__construct;
inline constexpr guest::Function<0x0062c868, u32(u32)> VisitorLog__construct_2;

u32 NetSession__construct(u32 net_session, u32 r1, u32 r2, u32 r3) {
    u32 net_record = net_session + 0x10u;
    NetRecord__clear(net_record, r1, r2, r3);
    u32 buffers = StationBuffers__clear_all(net_record + 0x48u) + 0x20u;
    StationBuffers__init(buffers);
    u32 net_peer_list = buffers + 0x2cu;
    NetPeerList__clear_header(net_peer_list);
    u32 slot_blocks = netgame__ConfirmMachine__ConfirmMachine_006220f8(netgame__AvatarMgr__AvatarMgr(net_peer_list + 0xcu) + 0x110u) + 0x24u;
    SlotBlocks__construct(slot_blocks);
    u32 r0_11 = slot_blocks + 0x30u;
    StationEntry__clear_2(r0_11);
    u32 r0_12 = r0_11 + 0x18u;
    construct_confirm_machine(r0_12);
    u32 r0_15 = netgame__ConfirmMachine__ConfirmMachine_00623bb4(r0_12 + 0x10u) + 0x2540u;
    store_byte_constant_pack_0x4_00617104(r0_15);
    u32 r0_16 = r0_15 + 8u;
    store_constants_625664(r0_16);
    u32 visitor_log = netgame__ConfirmMachine__ConfirmMachine_0061f4c0(r0_16 + 0x1cu) + 0x14cu;
    VisitorLog__construct_2(visitor_log);
    u32 small_packet = NetPeerTable__construct(FriendCheck__construct(visitor_log + 0x3f0u) + 0x8b8u) + 0x42acu;
    SmallPacket__clear(small_packet);
    u32 r0_25 = small_packet + 0xcu;
    store_constants_625f58(r0_25);
    u32 small_packet2 = r0_25 + 0xcu;
    SmallPacket2__clear(small_packet2);
    u32 r0_27 = small_packet2 + 0xcu;
    store_constants_6260f0(r0_27);
    u32 r0_28 = r0_27 + 8u;
    store_constants_626644(r0_28);
    u32 r0_29 = r0_28 + 8u;
    store_constants_6297f0(r0_29);
    u32 r0_30 = r0_29 + 0xcu;
    store_constants_623184(r0_30);
    u32 r0_35 = for_each_element(VisitingVillager__construct(r0_30 + 0x14u) + 0x2520u, 0x1ae1e4u, 0x2520u, 4u) + 0x9480u;
    clear_32_bytes(r0_35);
    gptr<Local_00619044_r0_36> r0_36 = gptr<Local_00619044_r0_36>(r0_35 - 0x234u);
    r0_36->byte_266 = 6;
    r0_36->byte_267 = 6;
    r0_36->byte_268 = 4;
    r0_36->byte_269 = 4;
    r0_36->byte_26a = 0;
    u32 r1_26 = (r0_35 - 0x13000u) - 0x234u;
    r0_36->byte_26b = 0;
    u32 r0_37 = r1_26 + 0x1326cu;
    clear_flag_pair_b(r0_37, r1_26, 6u, 4u);
    u32 r0_38 = r0_37 + 2u;
    clear_flag_pair_b(r0_38, 0x1326eu, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_39 = r0_38 + 2u;
    clear_flag_pair_b(r0_39, 0xfffecd92u, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_40 = r0_39 + 2u;
    clear_flag_pair_b(r0_40, 0x13272u, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_41 = r0_40 + 2u;
    clear_flag_pair_b(r0_41, 0xfffecd8eu, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_42 = r0_41 + 2u;
    clear_flag_pair_b(r0_42, 0x13276u, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_43 = r0_42 + 2u;
    clear_flag_pair_b(r0_43, 0xfffecd8au, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_44 = r0_43 + 2u;
    clear_flag_pair_b(r0_44, 0x1327au, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_45 = r0_44 + 2u;
    clear_flag_pair_b(r0_45, 0xfffecd86u, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 critical_section = r0_45 + 4u;
    CriticalSection__construct(critical_section, 0xfffecd86u);
    u32 r0_47 = critical_section - 0x13280u;
    gptr<Local_00619044_r1_27> r1_27 = gptr<Local_00619044_r1_27>(r0_47 + 0x13000u);
    r1_27->byte_29c = 8;
    r1_27->byte_29d = 0;
    r1_27->word_2a0 = 0;
    r1_27->byte_2ac = 0;
    r1_27->byte_2ad = 0;
    r1_27->byte_2ae = 0;
    r1_27->byte_2af = 0;
    r1_27->byte_2b0 = 0;
    r1_27->byte_2b1 = 0;
    r1_27->byte_2b2 = 0;
    r1_27->byte_2b3 = 0;
    r1_27->byte_2b4 = 0;
    r1_27->byte_2b5 = 0;
    r1_27->byte_2b6 = 0;
    r1_27->byte_2b7 = 0;
    return r0_47;
}

}  // namespace d_00619044
GUEST_EXPORT_FRAMED(0x00619044, d_00619044::NetSession__construct, 0x4010);  // pushes {r4, lr} first, as the original

// f_00619298: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys the network session's parts (lock, player blocks, guest record, peers, friend check, visitor log, avatars).
namespace d_00619298 {

inline constexpr guest::Function<0x00100b80, u32(u32)> Player__destruct_veneer;
inline constexpr guest::Function<0x00137e8c, u32(u32, u32, u32, u32)> destroy_critical_section;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;
inline constexpr guest::Function<0x0061f5e0, u32(u32)> destroy_flag_array_owner;
inline constexpr guest::Function<0x00622158, u32(u32)> do_nothing_00622158;
inline constexpr guest::Function<0x00623c28, u32(u32)> call_00100b80_at_1c;
inline constexpr guest::Function<0x0062ad20, u32(u32)> netgame__AvatarMgr__destructor;
inline constexpr guest::Function<0x0062b064, u32(u32)> FriendCheck__destruct;
inline constexpr guest::Function<0x0062c8cc, u32(u32)> VisitorLog__destruct;

void NetSession__destruct(u32 net_session, u32 r1, u32 r2, u32 r3) {
    u32 critical_section = net_session + 0x13280u;
    destroy_critical_section(critical_section, r1, r2, r3);
    destroy_array_elements(critical_section - 0x94ccu, 0x100b80u, 0x2520u, 4u);
    u32 r0_5 = Player__destruct_veneer(critical_section - 0xb9ecu);
    destroy_array_elements(r0_5 - 0xaa0u, 0x62573cu, 4u, 0x20u);
    FriendCheck__destruct(r0_5 - 0x4bb8u);
    VisitorLog__destruct(r0_5 - 0x4fa8u);
    destroy_flag_array_owner(r0_5 - 0x50f4u);
    u32 r0_10 = call_00100b80_at_1c(r0_5 - 0x7658u);
    do_nothing_00622158(r0_10 - 0x7cu);
    netgame__AvatarMgr__destructor(r0_10 - 0x18cu);
}

}  // namespace d_00619298
GUEST_EXPORT_FRAMED(0x00619298, d_00619298::NetSession__destruct, 0x4010);  // pushes {r4, lr} first, as the original

// f_0061a41c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sends the pending slot record (0x1d) when the session allows it (or clears station 0's wait as a guest), and copies
// the reference clock when asked.
namespace d_0061a41c {

struct __attribute__((packed)) SlotBlocks {
    u8 unknown_0[0x27];  // (not used here)
    u8 byte_27;
    u8 unknown_28[0x2];  // (not used here)
    u8 byte_2a;
};
GUEST_OFFSET(SlotBlocks, byte_27, 0x27);
GUEST_OFFSET(SlotBlocks, byte_2a, 0x2a);

inline constexpr u32 net_session_address = 0x0095362cu;
inline guest::global<u32, 0x0095362c> net_session;
inline constexpr guest::Function<0x005ce6dc, u32(u32, u32)> err_eula_is_idle_with_byte_fac;
inline constexpr guest::Function<0x0060b0b8, u32(u32, u32)> copy_reference_clock;
inline constexpr guest::Function<0x00624b24, u32(u32, u32)> StationMask__remove;
inline constexpr guest::Function<0x00627f74, u32(u32)> PacketBuffer__reserve_record;
inline constexpr guest::Function<0x0062801c, u32(u32, u32, u32)> PacketBuffer__flush_record;
inline constexpr guest::Function<0x0075dfe8, u32(u32)> NetSession__station;

void SlotBlocks__update(gptr<SlotBlocks> slot_blocks, u32 r1) {
    u32 r0_1 = *gptr<u8>(*net_session + 0x54u);
    if (r0_1 == 0) {
        u32 r0_2 = err_eula_is_idle_with_byte_fac(r0_1, r1);
        r1 = guest::cpu()->r[1];
        if (r0_2 == 0) {
            u32 r0_3 = *net_session;
            r1 = *gptr<u8>(r0_3 + 0x132b4u);
            if (r1 == 0) {
                r1 = slot_blocks->byte_27;
                if (r1 != 0) {
                    if (NetSession__station(r0_3) == 0) {
                        StationMask__remove(slot_blocks.addr() + 0x24u, 0u);
                        r1 = guest::cpu()->r[1];
                        *gptr<u8>(*net_session + 0x1b8u) = 0;
                    } else {
                        u32 r5_1 = *net_session + 0x10u;
                        PacketBuffer__reserve_record(r5_1);
                        PacketBuffer__flush_record(r5_1, 0x1du, 0u);
                        r1 = guest::cpu()->r[1];
                    }
                    slot_blocks->byte_27 = 0;
                }
            }
        }
    }
    u32 r0_6 = slot_blocks->byte_2a;
    if (r0_6 != 0) {
        copy_reference_clock(r0_6, r1);
        r1 = guest::cpu()->r[1];
        slot_blocks->byte_2a = 0;
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0061a41c
GUEST_EXPORT_FRAMED(0x0061a41c, d_0061a41c::SlotBlocks__update, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0061a684: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores a byte for station `index` (below 4) at +8.
namespace d_0061a684 {


u32 set_station_byte_8(u32 r0, u32 r1, u32 r2) {
    if (r1 < 4u) {
        r0 += r1;
        *gptr<u8>(r0 + 8u) = u8(r2);
    }
    return r0;
}

}  // namespace d_0061a684
GUEST_EXPORT(0x0061a684, d_0061a684::set_station_byte_8);

// f_0061a6a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the slot blocks' state (stations 4 and 8, three flag pairs and the counters).
namespace d_0061a6a4 {

struct __attribute__((packed)) SlotBlocks {
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
GUEST_OFFSET(SlotBlocks, byte_0, 0x0);
GUEST_OFFSET(SlotBlocks, byte_1, 0x1);
GUEST_OFFSET(SlotBlocks, word_2, 0x2);
GUEST_OFFSET(SlotBlocks, byte_c, 0xc);
GUEST_OFFSET(SlotBlocks, byte_d, 0xd);
GUEST_OFFSET(SlotBlocks, word_e, 0xe);
GUEST_OFFSET(SlotBlocks, byte_12, 0x12);
GUEST_OFFSET(SlotBlocks, word_14, 0x14);
GUEST_OFFSET(SlotBlocks, byte_18, 0x18);
GUEST_OFFSET(SlotBlocks, byte_19, 0x19);
GUEST_OFFSET(SlotBlocks, word_1c, 0x1c);
GUEST_OFFSET(SlotBlocks, word_20, 0x20);
GUEST_OFFSET(SlotBlocks, byte_26, 0x26);
GUEST_OFFSET(SlotBlocks, byte_27, 0x27);
GUEST_OFFSET(SlotBlocks, byte_28, 0x28);
GUEST_OFFSET(SlotBlocks, byte_2a, 0x2a);
GUEST_OFFSET(SlotBlocks, byte_2b, 0x2b);
GUEST_OFFSET(SlotBlocks, byte_2c, 0x2c);

inline constexpr guest::Function<0x00624c68, u32(u32)> clear_flag_pair;

void SlotBlocks__clear(gptr<SlotBlocks> slot_blocks) {
    slot_blocks->word_2 = 0;
    slot_blocks->word_e = 0;
    slot_blocks->byte_c = 0;
    slot_blocks->byte_d = 8;
    slot_blocks->byte_12 = 0;
    slot_blocks->word_14 = 0;
    slot_blocks->byte_18 = 8;
    slot_blocks->byte_19 = 4;
    clear_flag_pair(slot_blocks.addr() + 6u);
    clear_flag_pair(slot_blocks.addr() + 6u);
    slot_blocks->byte_0 = 8;
    slot_blocks->byte_1 = 4;
    slot_blocks->byte_26 = 0;
    slot_blocks->word_1c = 0;
    slot_blocks->word_20 = 0;
    clear_flag_pair(slot_blocks.addr() + 0x24u);
    slot_blocks->byte_27 = 0;
    slot_blocks->byte_28 = 0;
    slot_blocks->byte_2a = 0;
    slot_blocks->byte_2b = 0;
    slot_blocks->byte_2c = 0;
}

}  // namespace d_0061a6a4
GUEST_EXPORT_FRAMED(0x0061a6a4, d_0061a6a4::SlotBlocks__clear, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0061a71c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds the slot blocks' state (stations 8 and 4, two flag pairs and the counters).
namespace d_0061a71c {

struct __attribute__((packed)) SlotBlocks {
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
GUEST_OFFSET(SlotBlocks, byte_0, 0x0);
GUEST_OFFSET(SlotBlocks, byte_1, 0x1);
GUEST_OFFSET(SlotBlocks, byte_c, 0xc);
GUEST_OFFSET(SlotBlocks, byte_12, 0x12);
GUEST_OFFSET(SlotBlocks, word_14, 0x14);
GUEST_OFFSET(SlotBlocks, byte_18, 0x18);
GUEST_OFFSET(SlotBlocks, byte_19, 0x19);
GUEST_OFFSET(SlotBlocks, word_1c, 0x1c);
GUEST_OFFSET(SlotBlocks, word_20, 0x20);
GUEST_OFFSET(SlotBlocks, byte_26, 0x26);
GUEST_OFFSET(SlotBlocks, byte_27, 0x27);
GUEST_OFFSET(SlotBlocks, byte_28, 0x28);
GUEST_OFFSET(SlotBlocks, byte_29, 0x29);
GUEST_OFFSET(SlotBlocks, byte_2a, 0x2a);
GUEST_OFFSET(SlotBlocks, byte_2b, 0x2b);
GUEST_OFFSET(SlotBlocks, byte_2c, 0x2c);

inline constexpr guest::Function<0x00624c90, u32(u32)> clear_flag_pair_b;

u32 SlotBlocks__construct(gptr<SlotBlocks> slot_blocks) {
    slot_blocks->byte_0 = 8;
    slot_blocks->byte_1 = 4;
    u32 r0_1 = slot_blocks.addr() + 6u;
    clear_flag_pair_b(r0_1);
    slot_blocks->byte_c = 0;
    slot_blocks->byte_12 = 0;
    slot_blocks->word_14 = 0;
    slot_blocks->byte_18 = 8;
    slot_blocks->byte_19 = 4;
    slot_blocks->word_1c = 0;
    slot_blocks->word_20 = 0;
    clear_flag_pair_b(r0_1 + 0x1eu);
    slot_blocks->byte_26 = 0;
    slot_blocks->byte_27 = 0;
    slot_blocks->byte_28 = 0;
    slot_blocks->byte_29 = 0;
    slot_blocks->byte_2a = 0;
    slot_blocks->byte_2b = 0;
    slot_blocks->byte_2c = 0;
    return r0_1 - 6u;
}

}  // namespace d_0061a71c
GUEST_EXPORT_FRAMED(0x0061a71c, d_0061a71c::SlotBlocks__construct, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0061a7a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// NetSession__guest_entry_is_ready on the network session.
namespace d_0061a7a0 {

inline constexpr u32 net_session_address = 0x0095362cu;
inline guest::global<u32, 0x0095362c> net_session;
inline constexpr guest::Function<0x0075de74, u32(u32, u32)> NetSession__guest_entry_is_ready;

u32 net_guest_entry_is_ready() {
    return NetSession__guest_entry_is_ready(*net_session, guest::cpu()->r[1]);
}

}  // namespace d_0061a7a0
GUEST_EXPORT(0x0061a7a0, d_0061a7a0::net_guest_entry_is_ready);

// f_0061a7b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the peer's id and sets its address to the empty pair (-3, -1).
namespace d_0061a7b0 {

struct __attribute__((packed)) NetPeer {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(NetPeer, word_8, 0x8);
GUEST_OFFSET(NetPeer, word_c, 0xc);

inline constexpr guest::Function<0x006256d0, u32(u32)> NpcEntryRef__clear;

u32 NetPeer__reset(gptr<NetPeer> net_peer) {
    NpcEntryRef__clear(net_peer.addr());
    u32 r0_1 = ~2u;
    u32 r1_1 = ~0u;
    net_peer->word_8 = r0_1;
    net_peer->word_c = r1_1;
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0061a7b0
GUEST_EXPORT_FRAMED(0x0061a7b0, d_0061a7b0::NetPeer__reset, 0x4010);  // pushes {r4, lr} first, as the original

// f_0061a7cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores a peer's id, two halves and its address pair.
namespace d_0061a7cc {

struct __attribute__((packed)) NetPeer {
    u32 word_0;
    u16 half_4;
    u16 half_6;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(NetPeer, word_0, 0x0);
GUEST_OFFSET(NetPeer, half_4, 0x4);
GUEST_OFFSET(NetPeer, half_6, 0x6);
GUEST_OFFSET(NetPeer, word_8, 0x8);
GUEST_OFFSET(NetPeer, word_c, 0xc);

struct __attribute__((packed)) NetPeerSetArg1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(NetPeerSetArg1, word_0, 0x0);
GUEST_OFFSET(NetPeerSetArg1, word_4, 0x4);

struct __attribute__((packed)) NetPeerSetArg2 {
    u32 word_0;
    u16 half_4;
    u16 half_6;
};
GUEST_OFFSET(NetPeerSetArg2, word_0, 0x0);
GUEST_OFFSET(NetPeerSetArg2, half_4, 0x4);
GUEST_OFFSET(NetPeerSetArg2, half_6, 0x6);


void NetPeer__set(gptr<NetPeer> net_peer, gptr<NetPeerSetArg1> arg1, gptr<NetPeerSetArg2> arg2) {
    net_peer->word_0 = arg2->word_0;
    net_peer->half_4 = arg2->half_4;
    net_peer->half_6 = arg2->half_6;
    u32 r1_1 = arg1->word_0;
    u32 r2_1 = arg1->word_4;
    net_peer->word_8 = r1_1;
    net_peer->word_c = r2_1;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_0061a7cc
GUEST_EXPORT(0x0061a7cc, d_0061a7cc::NetPeer__set);

// f_0061a810: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Asks for station `index`'s bit: through the link as the host, else sends record 0x30 with it.
namespace d_0061a810 {

inline constexpr u32 net_session_address = 0x0095362cu;
inline guest::global<u32, 0x0095362c> net_session;
inline constexpr guest::Function<0x00622fa0, u32(u32, u32)> NetLink__request_station_bit_with_flag;
inline constexpr guest::Function<0x00627d44, u32(u32, u32, u32)> PacketBuffer__append;
inline constexpr guest::Function<0x00627f74, u32(u32)> PacketBuffer__reserve_record;
inline constexpr guest::Function<0x0062801c, u32(u32, u32, u32)> PacketBuffer__flush_record;
inline constexpr guest::Function<0x0075dfe8, u32(u32, u32, u32, u32)> NetSession__station;

void NetSession__request_station_bit(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x20);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    if (NetSession__station(*net_session, r1, r2, r3) == 0) {
        u32 net_link = *net_session + 0x7880u;
        frame.release();
        NetLink__request_station_bit_with_flag(net_link, r0);
        return;
    }
    *frame.at<u16>(0) = u16(r0 << 8);
    if (u32(1)) {
        u32 r7_1 = *net_session + 0x10u;
        PacketBuffer__reserve_record(r7_1);
        PacketBuffer__append(r7_1, frame.at(0).addr(), 2u);
        PacketBuffer__flush_record(r7_1, 0x30u, 0u);
    }
}

}  // namespace d_0061a810
GUEST_EXPORT(0x0061a810, d_0061a810::NetSession__request_station_bit);

// f_0061d9bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Refreshes the object at 0x95c6d0 (006c3e4c, then 006a69c0).
namespace d_0061d9bc {

inline constexpr u32 tour_instance_address = 0x0095c6d0u;
inline guest::global<u32, 0x0095c6d0> tour_instance;
inline constexpr guest::Function<0x006a69c0, u32(u32, u32, u32, u32)> build_map_with_builder;
inline constexpr guest::Function<0x006c3e4c, u32(u32, u32, u32, u32)> Tour__update_goal;

void refresh_group_object() {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r4_1 = *tour_instance;
    Tour__update_goal(r4_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    frame.release();
    build_map_with_builder(r4_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
}

}  // namespace d_0061d9bc
GUEST_EXPORT(0x0061d9bc, d_0061d9bc::refresh_group_object);

// f_0061d9e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the guest's leave (record kind 0x2b or 0x37) is done: the station dropped from the session masks, or every
// station ready.
namespace d_0061d9e0 {

inline guest::global<u32, 0x0095362c> net_session;
inline constexpr guest::Function<0x005ce6dc, u32(u32, u32, u32, u32)> err_eula_is_idle_with_byte_fac;
inline constexpr guest::Function<0x00623894, u32(u32, u32)> drop_session_mask_copy_b;
inline constexpr guest::Function<0x0062390c, u32(u32, u32)> drop_session_mask_copy_c;
inline constexpr guest::Function<0x0062468c, u32(u32, u32)> all_stations_ready;

u32 NetGuest__leave_done(u32 net_guest, u32 r1) {
    u32 r0_1 = *gptr<u8>(*net_session + 0x132b4u);
    if (r0_1 == 0) {
        u32 r0_2 = err_eula_is_idle_with_byte_fac(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0_2 == 0) {
            u32 r0_3 = *gptr<u8>(net_guest);
            u32 r4_1 = 1u;
            if (r0_3 != 0x2bu) {
                if (r0_3 != 0x37u) {
                    return r4_1;
                }
                u32 r0_4 = all_stations_ready(r0_3, r1);
                r1 = guest::cpu()->r[1];
                if (r0_4 != 0) {
                    return r4_1;
                }
            } else {
                u32 r1_1 = *gptr<u8>(net_guest + 3u);
                u32 r0_6 = drop_session_mask_copy_b(*net_session + 0x23cu, r1_1);
                u32 r1_2 = *gptr<u8>(net_guest + 3u);
                if (r0_6 == 0) {
                    r4_1 = 0u;
                }
                u32 r0_8 = drop_session_mask_copy_c(*net_session + 0x23cu, r1_2);
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
GUEST_EXPORT_FRAMED(0x0061d9e0, d_0061d9e0::NetGuest__leave_done, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0061dad0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores the word at 0x87bd1c at +0x4c.
namespace d_0061dad0 {

struct __attribute__((packed)) CopyWord87bd1cTo4cArg0 {
    u8 unknown_0[0x4c];  // (not used here)
    u32 word_4c;
};
GUEST_OFFSET(CopyWord87bd1cTo4cArg0, word_4c, 0x4c);

inline guest::global<u32, 0x0087bd1c> global_0087bd1c;

void copy_word_87bd1c_to_4c(gptr<CopyWord87bd1cTo4cArg0> arg0) {
    u32 r1_1 = *global_0087bd1c;
    arg0->word_4c = r1_1;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_0061dad0
GUEST_EXPORT(0x0061dad0, d_0061dad0::copy_word_87bd1c_to_4c);

// f_0061dae4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Updates the guest records: handles leaving and dropped stations, ending the session when needed.
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

inline constexpr u32 net_session_address = 0x0095362cu;
inline guest::global<u32, 0x0095362c> net_session;
inline constexpr guest::Function<0x0051d7f0, u32(u32, u32)> VillagerTable__clear_entry;
inline constexpr guest::Function<0x005ce6dc, u32(u32, u32, u32, u32)> err_eula_is_idle_with_byte_fac;
inline constexpr guest::Function<0x0060b0b8, u32(u32)> copy_reference_clock;
inline constexpr guest::Function<0x00618164, u32(u32, u32)> NetSession__drop_station;
inline constexpr guest::Function<0x00618fb0, u32(u32, u32)> NetSession__end;
inline constexpr guest::Function<0x0061f3f8, u32(u32)> NetGuest__clear;
inline constexpr guest::Function<0x006238d0, u32(u32, u32)> NetVisit__station_left;
inline constexpr guest::Function<0x00623948, u32(u32, u32)> NetVisit__station_dropped;

void NetGuest__update(u32 net_guest, u32 r1) {
    u32 r0_8 = 0;
    u32 r0_1 = err_eula_is_idle_with_byte_fac(net_guest, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    gptr<Local_0061dae4_r5_1> r5_1 = gptr<Local_0061dae4_r5_1>(net_guest + 0x100u);
    if (r0_1 == 0) {
        u32 r0_2 = *net_session;
        if (*gptr<u8>(r0_2 + 0x132b4u) == 0) {
            u32 r1_1 = *gptr<u8>(net_guest);
            u32 zf_1 = r1_1 - 0x43u == 0;
            if (!zf_1) {
                if (zf_1 || s32(r1_1) < 0x43) {
                    if (r1_1 == 0x2bu) {
                        u32 r1_2 = *gptr<u8>(net_guest + 3u);
                        NetVisit__station_dropped(r0_2 + 0x23cu, r1_2);
                        NetSession__end(*net_session, guest::cpu()->r[1]);
                        goto L_61dc08;
                    }
                    if (r1_1 == 0x32u) {
                        u32 room_timers = *gptr<u8>(net_guest + 3u);
                        NetVisit__station_left(r0_2 + 0x23cu, room_timers);
                        u32 villager_table = *gptr<u8>(net_guest + 3u);
                        if (villager_table >= 4u) {
                            goto L_61dc08;
                        }
                        NetSession__drop_station(*net_session, villager_table);
                        gptr<Local_0061dae4_r0_7> r0_7 = gptr<Local_0061dae4_r0_7>(*net_session);
                        r0_7->byte_1e5 = 4;
                        r0_7->byte_3c = 4;
                        r0_7->byte_54 = 0;
                        VillagerTable__clear_entry(villager_table, 4u);
                        NetGuest__clear(net_guest);
                        goto L_61dc08;
                    }
                    if (r1_1 == 0x37u) {
                        NetSession__end(r0_2, r1_1);
                    }
                    goto L_61dc08;
                }
                if (r1_1 != 0x55u && r1_1 != 0x5eu) {
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
    NetGuest__clear(net_guest);
    *gptr<u8>(net_guest + 0x13eu) = 0;
    *gptr<u8>(net_guest + 0x13fu) = 0;
    *gptr<u8>(*net_session + 0x132b6u) = 0;
    *gptr<u8>(net_guest) = 0;
L_61dc08:;
    r0_8 = r5_1->byte_46;
    if (r0_8 == 0) {
        return;
    }
L_61dc14:;
    copy_reference_clock(r0_8);
    *gptr<u8>(net_guest + 0x146u) = 0;
    *gptr<u32>(net_guest + 0x4cu) = 0;
}

}  // namespace d_0061dae4
GUEST_EXPORT_FRAMED(0x0061dae4, d_0061dae4::NetGuest__update, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0061dc30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sends the visiting player home: requests the scene change to the home spawn point (by the group's spawn tile).
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

inline guest::global<u32, 0x00881b48> net_guest_handler_a;
inline guest::global<u32, 0x00881b84> net_guest_handler_b;
inline guest::global<u32, 0x0095c6d0> tour_instance;
inline constexpr guest::Function<0x00300904, u32(u32)> current_net_signed_value;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> current_net_station;
inline constexpr guest::Function<0x00308340, u32(u32)> return_constant_0xac1948_;
inline constexpr guest::Function<0x00565cc0, u32(u32)> atan2_angle;
inline constexpr guest::Function<0x005b5d38, u32(u32, u32, u32, u32)> SceneChange__request_with_matrix;
inline constexpr guest::Function<0x006c39c4, u32(u32)> entry_byte_14;
inline constexpr guest::Function<0x006c3a58, u32(u32)> group_spawn_tile_position;
inline constexpr guest::Function<0x006c3c00, u32(u32, u32, u32, u32)> Tour__start_kind;
inline constexpr guest::Function<0x006c4280, u32(u32)> record_value;

struct __attribute__((packed)) NetGuestReturnHomeFrame {
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
GUEST_OFFSET(NetGuestReturnHomeFrame, word_0, 0x0);
GUEST_OFFSET(NetGuestReturnHomeFrame, word_14, 0x14);
GUEST_OFFSET(NetGuestReturnHomeFrame, word_18, 0x18);
GUEST_OFFSET(NetGuestReturnHomeFrame, word_1c, 0x1c);
GUEST_OFFSET(NetGuestReturnHomeFrame, word_20, 0x20);
GUEST_OFFSET(NetGuestReturnHomeFrame, word_24, 0x24);
GUEST_OFFSET(NetGuestReturnHomeFrame, word_28, 0x28);
GUEST_OFFSET(NetGuestReturnHomeFrame, word_2c, 0x2c);
GUEST_OFFSET(NetGuestReturnHomeFrame, float_68, 0x68);
GUEST_OFFSET(NetGuestReturnHomeFrame, float_70, 0x70);
GUEST_SIZE(NetGuestReturnHomeFrame, 0x78);

void NetGuest__return_home(u32 net_guest, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2, float S3) {
    guest::StackFrameOf<NetGuestReturnHomeFrame> frame;  // the original's stack frame
    current_net_station(net_guest, r1, r2, r3);
    group_spawn_tile_position(frame.at(0x68).addr());
    for_each_element(frame.at(0x30).addr(), 0x3040fcu, 0xcu, 4u);
    for_each_element(frame.at(0x60).addr(), 0x567470u, 2u, 4u);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    u32 r4 = frame.at(0x30).addr();
    u32 r6 = frame.at(0x60).addr();
    u32 i = 0u;
    do {
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        guest::cpu()->s[3] = S3;
        Tour__start_kind(r4, i & 0xffu, r2, r3);
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
        i += 1u;
        r4 += 0xcu;
        *gptr<u16>(r6) = u16(r0_4);
        r6 += 2u;
        guest::preempt();
    } while (s32(i) < 4);
    u32 r0_5 = *gptr<s8>(*tour_instance + 0x1cu);
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    u32 r0_7 = entry_byte_14(record_value(r0_5));
    u32 r0_8 = current_net_signed_value(r0_7);
    u32 r0_9 = return_constant_0xac1948_(r0_8);
    frame->word_28 = 1;
    frame->word_2c = 1;
    frame->word_24 = 0;
    frame->word_18 = frame.at(0x54).addr();
    frame->word_20 = r0_8 ^ 1u;
    frame->word_1c = frame.at(0x66).addr();
    frame->word_14 = frame.at(0x64).addr();
    frame->word_0 = frame.at(0x30).addr();
    gptr<Local_0061dc30_ea_9> ea_9 = gptr<Local_0061dc30_ea_9>(frame.at(4).addr());
    ea_9->word_0 = frame.at(0x60).addr();
    ea_9->word_4 = frame.at(0x3c).addr();
    gptr<Local_0061dc30_ea_10> ea_10 = gptr<Local_0061dc30_ea_10>(frame.at(0xc).addr());
    ea_10->word_0 = frame.at(0x62).addr();
    ea_10->word_4 = frame.at(0x48).addr();
    SceneChange__request_with_matrix(r0_9, r0_7, *net_guest_handler_a, *net_guest_handler_b);
}

}  // namespace d_0061dc30
GUEST_EXPORT_FRAMED(0x0061dc30, d_0061dc30::NetGuest__return_home, 0x41f0);  // pushes {r4, i, r6, r7, r8, lr} first, as the original

// f_0061de7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Asks to leave: directly in mode 2, else sends record 0x6a as the host or marks state 6 as a guest; true.
namespace d_0061de7c {

struct __attribute__((packed)) NetGuest {
    u8 byte_0;
};
GUEST_OFFSET(NetGuest, byte_0, 0x0);

inline constexpr u32 net_session_address = 0x0095362cu;
inline guest::global<u32, 0x0095362c> net_session;
inline constexpr guest::Function<0x00305f2c, u32(u32, u32, u32, u32)> read_global_object_byte;
inline constexpr guest::Function<0x0061e11c, u32(u32, u32)> NetGuest__update_2;
inline constexpr guest::Function<0x00627f74, u32(u32)> PacketBuffer__reserve_record;
inline constexpr guest::Function<0x0062801c, u32(u32, u32, u32)> PacketBuffer__flush_record;
inline constexpr guest::Function<0x0075dfe8, u32(u32)> NetSession__station;

u32 NetGuest__request_leave(gptr<NetGuest> net_guest, u32 r1, u32 r2) {
    if (read_global_object_byte(net_guest.addr(), r1, r2, guest::cpu()->r[3]) == 2u) {
        NetGuest__update_2(net_guest.addr(), 0u);
    } else {
        if (NetSession__station(*net_session) == 0) {
            net_guest->byte_0 = 6;
        } else {
            u32 r4_1 = *net_session + 0x10u;
            PacketBuffer__reserve_record(r4_1);
            PacketBuffer__flush_record(r4_1, 0x6au, 0u);
        }
    }
    return 1u;
}

}  // namespace d_0061de7c
GUEST_EXPORT_FRAMED(0x0061de7c, d_0061de7c::NetGuest__request_leave, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0061df58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts joining a town: stamps the current player, sets the station masks and the friend checks.
namespace d_0061df58 {

struct __attribute__((packed)) NetGuest {
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
GUEST_OFFSET(NetGuest, byte_5, 0x5);
GUEST_OFFSET(NetGuest, word_5c, 0x5c);
GUEST_OFFSET(NetGuest, byte_71, 0x71);
GUEST_OFFSET(NetGuest, byte_13c, 0x13c);
GUEST_OFFSET(NetGuest, byte_144, 0x144);

struct __attribute__((packed)) Local_0061df58_r8_2 {
    u8 unknown_0[0x60];  // (not used here)
    u32 station;
};
GUEST_OFFSET(Local_0061df58_r8_2, station, 0x60);

inline constexpr u32 friend_list_instance_address = 0x009529ccu;
inline constexpr u32 net_session_address = 0x0095362cu;
inline guest::global<u32, 0x009529cc> friend_list_instance;
inline guest::global<u32, 0x0095362c> net_session;
inline constexpr guest::Function<0x00305f44, u32(u32)> current_net_station;
inline constexpr guest::Function<0x00623f34, u32(u32)> PlayerStamp__stamp_current_player;
inline constexpr guest::Function<0x00624008, u32(u32, u32, u32)> construct_empty_player_stamp;
inline constexpr guest::Function<0x00624024, u32(u32)> construct_nothing_00624024;
inline constexpr guest::Function<0x00624b60, u32(u32, u32, u32, u32)> StationMask__set_from_mask;
inline constexpr guest::Function<0x00624c78, u32(u32, u32, u32)> bit_for_index;
inline constexpr guest::Function<0x0070ab10, u32(u32, u32, u32)> friend_key_if_set;
inline constexpr guest::Function<0x0075f4d4, u32(u32, u32, u32)> entry_in_use;

struct __attribute__((packed)) NetGuestStartJoinFrame {
    u32 word_0;
    u8 unknown_4[0x8];  // (not read or written by name)
};
GUEST_OFFSET(NetGuestStartJoinFrame, word_0, 0x0);
GUEST_SIZE(NetGuestStartJoinFrame, 0xc);

u32 NetGuest__start_join(gptr<NetGuest> net_guest, u32 r1, u32 r2) {
    guest::StackFrameOf<NetGuestStartJoinFrame> frame;  // the original's stack frame
    u32 r0 = net_guest.addr();
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r5 = r0;
    StationMask__set_from_mask(r0 + 5u, r1, r2, guest::cpu()->r[3]);
    StationMask__set_from_mask(r5 + 7u, r2, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r4_1 = net_guest->byte_5;
    u32 bit = bit_for_index(0u, guest::cpu()->r[1], guest::cpu()->r[2]);
    u32 r7 = (bit & r4_1) == 0 ? r5 + 5u : r5 + 7u;
    u32 r1_2 = *gptr<u8>(r7);
    StationMask__set_from_mask(r5 + 0x70u, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_5 = net_guest->byte_71;
    u32 r11 = 0u;
    net_guest->byte_13c = u8(r0_5);
    net_guest->word_5c = r11;
    if (r0_5 != 0) {
        u32 station = current_net_station(r0_5);
        u32 r4_2 = net_guest->byte_5;
        u32 r10 = station;
        u32 bit_2 = bit_for_index(station, guest::cpu()->r[1], guest::cpu()->r[2]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        u32 r0_8 = bit_2 & r4_2;
        if (r0_8 != 0) {
            r0_8 = 1u;
        }
        u32 r9 = 4u;
        u32 i = 0u;
        net_guest->byte_144 = u8(r0_8);
L_61dfdc:;
        u32 r8_1 = i & 0xffu;
        u32 r6_1 = *gptr<u8>(r7);
        u32 bit_3 = bit_for_index(r8_1, r1, r2);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if ((bit_3 & r6_1) != 0) {
            r9 = r8_1;
        } else {
            i += 1u;
            if (s32(i) < 4) {
                guest::preempt();
                goto L_61dfdc;
            }
        }
        u32 r0_10 = r9 == r10;
        *gptr<u8>(r5 + 0x13du) = u8(r0_10);
        if (r0_10 == 0) {
            u32 r0_12 = entry_in_use(*net_session + 0xb0u, r9, r2);
            if (r0_12 != 0) {
                r0_13 = *gptr<u32>(r0_12);
                goto L_61e034;
            }
            goto L_61e038;
        }
        r0_14 = *friend_list_instance;
        r0_13 = friend_key_if_set(r0_14, r1, r2);
L_61e034:;
        *gptr<u32>(r5 + 0x5cu) = r0_13;
L_61e038:;
        u32 r0_15 = *net_session;
        r10 = r0_15 + 0xb0u;
        u32 station_2 = current_net_station(r0_15);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r9 = station_2;
        if (!(station_2 >= 4u)) {
            i = 0u;
            do {
                gptr<Local_0061df58_r8_2> r8_2 = gptr<Local_0061df58_r8_2>(r5 + (i << 2));
                u32 r7_1 = i & 0xffu;
                r8_2->station = r11;
                u32 r6_2 = *gptr<u8>(r5 + 0x70u);
                station_2 = bit_for_index(r7_1, r1, r2);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                if ((station_2 & r6_2) != 0) {
                    if (r7_1 == r9) {
                        construct_empty_player_stamp(frame.at(0).addr(), r1, r2);
                        PlayerStamp__stamp_current_player(frame.at(0).addr());
                        r8_2->station = frame->word_0;
                        station_2 = construct_nothing_00624024(frame.at(0).addr());
                        r1 = guest::cpu()->r[1];
                        r2 = guest::cpu()->r[2];
                    } else {
                        station_2 = entry_in_use(r10, r7_1, r2);
                        r1 = guest::cpu()->r[1];
                        r2 = guest::cpu()->r[2];
                        if (station_2 != 0) {
                            station_2 = *gptr<u32>(station_2);
                            r8_2->station = station_2;
                        }
                    }
                }
                i += 1u;
                guest::preempt();
            } while (s32(i) < 4);
        }
        guest::cpu()->r[1] = r1;
        return station_2;
    }
    *gptr<u8>(r5 + 0x144u) = 1;
    *gptr<u8>(r5 + 0x13du) = u8(r11);
    return 1u;
}

}  // namespace d_0061df58
GUEST_EXPORT_FRAMED(0x0061df58, d_0061df58::NetGuest__start_join, 0x4ff0);  // pushes {i, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_0061e488: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Advances the leave states: 0x2e -> 0x2f and 0x5a -> 0x5b (resetting the leaving station), 0x39 -> 0x3a (ending the
// session).
namespace d_0061e488 {

struct __attribute__((packed)) NetGuest {
    u8 byte_0;
    u8 unknown_1[0x2];  // (not used here)
    u8 slot;
};
GUEST_OFFSET(NetGuest, byte_0, 0x0);
GUEST_OFFSET(NetGuest, slot, 0x3);

struct __attribute__((packed)) Local_0061e488_r0_1 {
    u8 unknown_0[0x3c];  // (not used here)
    u8 slot;
    u8 unknown_3d[0x17];  // (not used here)
    u8 byte_54;
};
GUEST_OFFSET(Local_0061e488_r0_1, slot, 0x3c);
GUEST_OFFSET(Local_0061e488_r0_1, byte_54, 0x54);

inline constexpr u32 net_session_address = 0x0095362cu;
inline guest::global<u32, 0x0095362c> net_session;
inline constexpr guest::Function<0x00621684, u32(u32, u32, u32, u32)> reset_station_slot;
inline constexpr guest::Function<0x00623984, u32(u32, u32, u32)> drop_session_mask_copy_station_a;
inline constexpr guest::Function<0x00624b24, u32(u32, u32)> StationMask__remove;

void NetGuest__advance_leave_state(gptr<NetGuest> net_guest, u32 r1_unused, u32 r2) {
    u32 r1_1 = net_guest->byte_0;
    gptr<Local_0061e488_r0_1> r0_1 = gptr<Local_0061e488_r0_1>(*net_session);
    if (r1_1 == 0x2eu) {
        u32 slot = net_guest->slot;
        r0_1->slot = u8(slot);
        u32 table = r0_1.addr() + 0x1c0u;
        reset_station_slot(table, slot, r2, guest::cpu()->r[3]);
        drop_session_mask_copy_station_a(table, slot, r2);
        r1_1 = guest::cpu()->r[1];
        net_guest->byte_0 = 0x2f;
    } else {
        if (r1_1 == 0x39u) {
            r0_1->byte_54 = 1;
            net_guest->byte_0 = 0x3a;
            guest::cpu()->r[1] = 0x3au;
            return;
        }
        if (r1_1 == 0x5au) {
            u32 r5_2 = net_guest->slot;
            r0_1->slot = u8(r5_2);
            reset_station_slot(r0_1.addr() + 0x1c0u, r5_2, r2, guest::cpu()->r[3]);
            u32 r0_4 = *net_session + 0x13270u;
            StationMask__remove(r0_4, r5_2);
            drop_session_mask_copy_station_a(r0_4, r5_2, guest::cpu()->r[2]);
            r1_1 = guest::cpu()->r[1];
            net_guest->byte_0 = 0x5b;
        }
    }
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_0061e488
GUEST_EXPORT_FRAMED(0x0061e488, d_0061e488::NetGuest__advance_leave_state, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0061e574: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Finishes the visit: in mode 2 requests the pending scene change; otherwise sells the visitor's shoes and pockets
// into the bank, takes off the set-A items and sends them home.
namespace d_0061e574 {

struct __attribute__((packed)) NetGuest {
    u8 unknown_0[0x144];  // (not used here)
    u8 byte_144;
};
GUEST_OFFSET(NetGuest, byte_144, 0x144);

inline guest::global<u32, 0x0095362c> net_session;
inline constexpr guest::Function<0x001148c5, u32(u32)> Town__scatter_items;
inline constexpr guest::Function<0x00282c78, u32(u32)> NetPresence__reset_state;
inline constexpr guest::Function<0x00282d6c, u32(u32)> NetPresence__reset;
inline constexpr guest::Function<0x002fb94c, u32(u32)> get_current_player;
inline constexpr guest::Function<0x002fd068, u32(u32)> get_counter_block;
inline constexpr guest::Function<0x00303660, u32(u32)> EncryptedInt__get;
inline constexpr guest::Function<0x00305f2c, u32(u32, u32, u32, u32)> read_global_object_byte;
inline constexpr guest::Function<0x00308340, u32(u32)> return_constant_0xac1948_;
inline constexpr guest::Function<0x0030b6c4, u32(u32)> main_object_idle;
inline constexpr guest::Function<0x005b4d04, u32(u32, u32, u32, u32)> SceneChange__request_pending;
inline constexpr guest::Function<0x005c5bb8, u32(u32)> remove_set_a_worn_items;
inline constexpr guest::Function<0x0061dc30, u32(u32)> NetGuest__return_home;
inline constexpr guest::Function<0x0061f3f8, u32(u32)> NetGuest__clear;
inline constexpr guest::Function<0x006b7380, u32(u32, u32)> ClampedCounters__add_to_current_split_0_;
inline constexpr guest::Function<0x006b8cb8, u32(u32, u32)> ClampedCounters__set_current_count;
inline constexpr guest::Function<0x006bced4, u32(u32)> sell_shoes_and_pockets_to_bank;
inline constexpr guest::Function<0x006e08b4, u32(u32)> set_mode_9507f0;

struct __attribute__((packed)) NetGuestFinishVisitFrame {
    u32 word_0;
};
GUEST_OFFSET(NetGuestFinishVisitFrame, word_0, 0x0);
GUEST_SIZE(NetGuestFinishVisitFrame, 0x4);

void NetGuest__finish_visit(gptr<NetGuest> net_guest, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<NetGuestFinishVisitFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r0_1 = read_global_object_byte(net_guest.addr(), r1, r2, r3);
    if (r0_1 == 2u) {
        r0_1 = net_guest->byte_144;
        if (r0_1 == 0) {
            u32 scene_change = return_constant_0xac1948_(NetPresence__reset_state(r0_1));
            frame->word_0 = 1;
            if (main_object_idle(SceneChange__request_pending(scene_change, 0u, 0u, 1u)) != 0) {
                NetGuest__clear(net_guest.addr());
            }
            *gptr<u8>(*net_session + 0x132b6u) = 0;
            guest::cpu()->r[1] = 0u;
            return;
        }
    }
    NetPresence__reset(r0_1);
    u32 player = get_current_player(set_mode_9507f0(2u));
    if (player != 0) {
        u32 r0_8 = sell_shoes_and_pockets_to_bank(player);
        u32 r0_10 = EncryptedInt__get(player + 0x6b8cu);
        u32 counter_block = get_counter_block(r0_10);
        u32 counter_block_2 = get_counter_block(ClampedCounters__set_current_count(counter_block, r0_10));
        player = ClampedCounters__add_to_current_split_0_(counter_block_2, r0_8);
    }
    NetGuest__return_home(Town__scatter_items(remove_set_a_worn_items(player)));
    *gptr<u8>(*net_session + 0x132b6u) = 0;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_0061e574
GUEST_EXPORT_FRAMED(0x0061e574, d_0061e574::NetGuest__finish_visit, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0061e690: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When the guests are ready: marks the announcement (+0x141) and sends record 0x14 to each waited station (and the
// given one); true when sent.
namespace d_0061e690 {

struct __attribute__((packed)) NetGuest {
    u8 unknown_0[0x141];  // (not used here)
    u8 byte_141;
};
GUEST_OFFSET(NetGuest, byte_141, 0x141);

inline constexpr u32 net_session_address = 0x0095362cu;
inline constexpr guest::Function<0x00617840, u32(u32, u32, u32, u32)> NetMessage__send;
inline constexpr guest::Function<0x00624f00, u32(u32, u32, u32, u32)> station_is_waited_for;
inline constexpr guest::Function<0x00626328, u32(u32, u32, u32, u32)> NetSession__guests_ready;

struct __attribute__((packed)) NetGuestAnnounceToGuestsFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(NetGuestAnnounceToGuestsFrame, word_0, 0x0);
GUEST_OFFSET(NetGuestAnnounceToGuestsFrame, word_4, 0x4);
GUEST_OFFSET(NetGuestAnnounceToGuestsFrame, word_8, 0x8);
GUEST_OFFSET(NetGuestAnnounceToGuestsFrame, word_c, 0xc);
GUEST_OFFSET(NetGuestAnnounceToGuestsFrame, word_10, 0x10);
GUEST_SIZE(NetGuestAnnounceToGuestsFrame, 0x14);

u32 NetGuest__announce_to_guests(gptr<NetGuest> net_guest, u32 net_session, u32 r2, u32 r3) {
    guest::StackFrameOf<NetGuestAnnounceToGuestsFrame> frame;  // the original's stack frame
    u32 r6 = net_session;
    u32 r0_1 = NetSession__guests_ready(net_session, net_session, r2, r3);
    net_session = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_1 != 0) {
        u32 r9 = net_session_address;
        net_guest->byte_141 = 1;
        u32 i = 0u;
        u32 r7 = i;
        u32 r8 = 0x14u;
        do {
            u32 r5_1 = i & 0xffu;
            if (r5_1 != 0) {
                u32 r0_2 = station_is_waited_for(r5_1, net_session, r2, r3);
                net_session = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_2 != 0 || r6 == r5_1) {
                    frame->word_8 = r7;
                    frame->word_c = r7;
                    frame->word_10 = r7;
                    frame->word_0 = r7;
                    frame->word_4 = r8;
                    NetMessage__send(*gptr<u32>(r9), r5_1, 0u, 0u);
                    net_session = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                }
            }
            i += 1u;
            guest::preempt();
        } while (s32(i) < 4);
        r0_1 = 1u;
    }
    guest::cpu()->r[1] = net_session;
    return r0_1;
}

}  // namespace d_0061e690
GUEST_EXPORT_FRAMED(0x0061e690, d_0061e690::NetGuest__announce_to_guests, 0x43f0);  // pushes {i, r5, r6, r7, r8, r9, lr} first, as the original

// f_0061e72c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts the scene of the group's entry (its byte +0x15) through 005b4d7c.
namespace d_0061e72c {

inline guest::global<u32, 0x0095c6d0> tour_instance;
inline constexpr guest::Function<0x00308340, u32(u32)> return_constant_0xac1948_;
inline constexpr guest::Function<0x005b4d7c, u32(u32, u32, u32, u32)> Scene__request_change;
inline constexpr guest::Function<0x006c3be4, u32(u32)> entry_byte_15;
inline constexpr guest::Function<0x006c4280, u32(u32)> record_value;

struct __attribute__((packed)) NetGuestStartSceneForGroupFrame {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(NetGuestStartSceneForGroupFrame, word_0, 0x0);
GUEST_OFFSET(NetGuestStartSceneForGroupFrame, word_4, 0x4);
GUEST_SIZE(NetGuestStartSceneForGroupFrame, 0x8);

void NetGuest__start_scene_for_group() {
    guest::StackFrameOf<NetGuestStartSceneForGroupFrame> frame;  // the original's stack frame
    u32 r0_1 = *gptr<s8>(*tour_instance + 0x1cu);
    u32 r0_3 = entry_byte_15(record_value(r0_1));
    u32 r0_4 = return_constant_0xac1948_(r0_3);
    frame->word_0 = 1;
    frame->word_4 = 1;
    Scene__request_change(r0_4, r0_3, 1u, 1u);
}

}  // namespace d_0061e72c
GUEST_EXPORT_FRAMED(0x0061e72c, d_0061e72c::NetGuest__start_scene_for_group, 0x4010);  // pushes {r4, lr} first, as the original

// f_0061eb20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Puts the arriving visitor in the town: builds their items and requests the scene change to a random spot near the
// entrance.
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

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr u32 global_00a21ffc_address = 0x00a21ffcu;
inline constexpr u32 global_00a22008_address = 0x00a22008u;
inline constexpr u32 global_00a22014_address = 0x00a22014u;
inline guest::global<u32, 0x00881b44> global_00881b44;
inline guest::global<u32, 0x00881b48> net_guest_handler_a;
inline guest::global<u32, 0x00881b58> net_guest_arrive_handler;
inline guest::global<u32, 0x00881b84> net_guest_handler_b;
inline constexpr guest::Function<0x002d57f4, u32(u32)> build_item_row;
inline constexpr guest::Function<0x00305f2c, u32(u32)> read_global_object_byte;
inline constexpr guest::Function<0x00308340, u32(u32, u32, u32, u32)> return_constant_0xac1948_;
inline constexpr guest::Function<0x00565c34, u32(u32)> random_around_zero;
inline constexpr guest::Function<0x005b5068, u32(u32)> reset_entry_24;
inline constexpr guest::Function<0x005b5b78, u32(u32, u32, u32, u32)> SceneChange__request;
inline constexpr guest::Function<0x005b5d60, u32(u32, u32, u32, u32)> Scene__request_change_at;
inline constexpr guest::Function<0x005c4234, u32(u32)> Player__give_item;
inline constexpr guest::Function<0x005c6580, u32(u32)> Player__can_use_tool_0;

struct __attribute__((packed)) NetGuestArriveFrame {
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
GUEST_OFFSET(NetGuestArriveFrame, word_0, 0x0);
GUEST_OFFSET(NetGuestArriveFrame, word_4, 0x4);
GUEST_OFFSET(NetGuestArriveFrame, word_8, 0x8);
GUEST_OFFSET(NetGuestArriveFrame, word_10, 0x10);
GUEST_OFFSET(NetGuestArriveFrame, half_14, 0x14);
GUEST_OFFSET(NetGuestArriveFrame, half_16, 0x16);
GUEST_OFFSET(NetGuestArriveFrame, half_18, 0x18);
GUEST_OFFSET(NetGuestArriveFrame, float_1c, 0x1c);
GUEST_OFFSET(NetGuestArriveFrame, word_24, 0x24);
GUEST_OFFSET(NetGuestArriveFrame, word_28, 0x28);
GUEST_OFFSET(NetGuestArriveFrame, word_34, 0x34);
GUEST_OFFSET(NetGuestArriveFrame, half_44, 0x44);
GUEST_SIZE(NetGuestArriveFrame, 0x4c);

u32 NetGuest__arrive(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<NetGuestArriveFrame> frame;  // the original's stack frame
    u32 r0_8 = 0;
    gptr<Local_0061eb20_r0_1> r0_1 = gptr<Local_0061eb20_r0_1>(frame.at(0x38).addr());
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
    if (read_global_object_byte(r0_2) == 2u) {
        gptr<Local_0061eb20_r0_4> r0_4 = gptr<Local_0061eb20_r0_4>(frame.at(0x38).addr());
        float S0_5 = r0_4->float_0;
        float S1_5 = r0_4->float_4;
        float S2_5 = r0_4->float_8;
        gptr<Local_0061eb20_r0_5> r0_5 = gptr<Local_0061eb20_r0_5>(frame.at(0x1c).addr());
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
        u32 scene_change = return_constant_0xac1948_(r0_6, guest::cpu()->r[1], 0u, guest::cpu()->r[3]);
        frame->word_4 = 0;
        gptr<Local_0061eb20_ea_2> ea_2 = gptr<Local_0061eb20_ea_2>(frame.at(8).addr());
        ea_2->word_0 = 0;
        ea_2->word_4 = 1;
        frame->word_10 = 1;
        frame->word_0 = *net_guest_arrive_handler;
        r0_8 = SceneChange__request(scene_change, 0x67u, frame.at(0x1c).addr(), frame.at(0x14).addr());
    } else {
        frame->half_44 = 0;
        u32 r0_9 = return_constant_0xac1948_(0u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        frame->word_28 = 0;
        gptr<Local_0061eb20_ea_4> ea_4 = gptr<Local_0061eb20_ea_4>(frame.at(0x2c).addr());
        ea_4->word_0 = 0;
        ea_4->word_4 = 1;
        u32 r1_6 = frame.at(0x44).addr();
        frame->word_34 = 1;
        gptr<Local_0061eb20_ea_6> ea_6 = gptr<Local_0061eb20_ea_6>(frame.at(0x1c).addr());
        ea_6->word_0 = r1_6;
        ea_6->word_4 = 0xa22014;
        frame->word_24 = r1_6;
        frame->word_8 = frame.at(0x38).addr();
        gptr<Local_0061eb20_ea_9> ea_9 = gptr<Local_0061eb20_ea_9>(frame.at(0xc).addr());
        ea_9->word_0 = r1_6;
        ea_9->word_4 = 0xa21ffc;
        gptr<Local_0061eb20_ea_10> ea_10 = gptr<Local_0061eb20_ea_10>(frame.at(0x14).addr());
        ea_10->word_0 = r1_6;
        ea_10->word_4 = 0xa22008;
        u32 r2_6 = *net_guest_handler_b;
        frame->word_0 = *net_guest_handler_a;
        frame->word_4 = r2_6;
        Scene__request_change_at(r0_9, 0x67u, *net_guest_arrive_handler, *global_00881b44);
        r0_8 = Player__can_use_tool_0(Player__give_item(empty_item_address));
    }
    return build_item_row(r0_8);
}

}  // namespace d_0061eb20
GUEST_EXPORT_FRAMED(0x0061eb20, d_0061eb20::NetGuest__arrive, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0061ec88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts the leave: clears the flags, state 0x45 (or 0x4a when the main object is busy) and stops the leaving sound
// for this station.
namespace d_0061ec88 {

struct __attribute__((packed)) NetGuest {
    u8 byte_0;
    u8 byte_1;
    u8 unknown_2[0x3];  // (not used here)
    u8 byte_5;
    u8 unknown_6[0x13b];  // (not used here)
    u8 byte_141;
    u8 unknown_142[0x3];  // (not used here)
    u8 byte_145;
};
GUEST_OFFSET(NetGuest, byte_0, 0x0);
GUEST_OFFSET(NetGuest, byte_1, 0x1);
GUEST_OFFSET(NetGuest, byte_5, 0x5);
GUEST_OFFSET(NetGuest, byte_141, 0x141);
GUEST_OFFSET(NetGuest, byte_145, 0x145);

inline constexpr u32 net_session_address = 0x0095362cu;
inline guest::global<u32, 0x0095362c> net_session;
inline constexpr guest::Function<0x0030b6c4, u32(u32)> main_object_idle;
inline constexpr guest::Function<0x0058d3b4, u32(u32, u32, u32, u32)> stop_current_sound_effect;
inline constexpr guest::Function<0x00623e70, u32(u32, u32, u32)> StationSet__refresh;
inline constexpr guest::Function<0x00624c68, u32(u32)> clear_flag_pair;
inline constexpr guest::Function<0x00624c78, u32(u32)> bit_for_index;
inline constexpr guest::Function<0x0075dfe8, u32(u32, u32, u32, u32)> NetSession__station;

void NetGuest__begin_leave(gptr<NetGuest> net_guest, u32 r1, u32 r2, float S0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_7 = 0;
    u32 r0_1 = *net_session;
    u32 r0_2 = NetSession__station(r0_1, r1, r2, guest::cpu()->r[3]);
    net_guest->byte_141 = 0;
    clear_flag_pair(net_guest.addr() + 0x18u);
    clear_flag_pair(net_guest.addr() + 0x28u);
    clear_flag_pair(net_guest.addr() + 0x30u);
    net_guest->byte_1 = 2;
    if (main_object_idle(2u) == 0) {
        r0_7 = 0x4au;
        net_guest->byte_145 = 0;
    } else {
        StationSet__refresh(net_guest.addr() + 0x14u, r0_2, 0u);
        r0_7 = 0x45u;
    }
    net_guest->byte_0 = u8(r0_7);
    u32 r4_1 = net_guest->byte_5;
    u32 bit = bit_for_index(r0_2);
    if ((bit & r4_1) != 0) {
        float S0_7 = 0.0f;
        guest::cpu()->s[0] = S0_7;
        frame.release();
        stop_current_sound_effect(0x10004afu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        return;
    }
}

}  // namespace d_0061ec88
GUEST_EXPORT(0x0061ec88, d_0061ec88::NetGuest__begin_leave);

// f_0061ee60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Caps +0x50 at 0x96.
namespace d_0061ee60 {

struct __attribute__((packed)) ClampWord50To96Arg0 {
    u8 unknown_0[0x50];  // (not used here)
    u32 word_50;
};
GUEST_OFFSET(ClampWord50To96Arg0, word_50, 0x50);


void clamp_word_50_to_96(gptr<ClampWord50To96Arg0> arg0) {
    u32 r1_1 = arg0->word_50;
    if (r1_1 > 0x96u) {
        r1_1 = 0x96u;
    }
    arg0->word_50 = r1_1;
}

}  // namespace d_0061ee60
GUEST_EXPORT(0x0061ee60, d_0061ee60::clamp_word_50_to_96);

// f_0061f2a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// In mode 2 with a main-object value and state 0: whether the session may end (00618b9c).
namespace d_0061f2a0 {

struct __attribute__((packed)) NetGuest {
    u8 byte_0;
};
GUEST_OFFSET(NetGuest, byte_0, 0x0);

inline constexpr u32 net_session_address = 0x0095362cu;
inline guest::global<u32, 0x0095362c> net_session;
inline constexpr guest::Function<0x00300904, u32(u32)> current_net_signed_value;
inline constexpr guest::Function<0x00305f2c, u32(u32)> read_global_object_byte;
inline constexpr guest::Function<0x00618b9c, u32(u32, u32)> NetSession__request_leave;

u32 NetGuest__can_end_in_mode_2(gptr<NetGuest> net_guest) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = current_net_signed_value(net_guest.addr());
    if (r0_1 == 0) {
        return 0u;
    }
    if (read_global_object_byte(r0_1) != 2u) {
        return 0u;
    }
    if (net_guest->byte_0 == 0) {
        u32 r0_3 = *net_session;
        frame.release();
        return NetSession__request_leave(r0_3, guest::cpu()->r[1]);
    }
    return 0u;
}

}  // namespace d_0061f2a0
GUEST_EXPORT(0x0061f2a0, d_0061f2a0::NetGuest__can_end_in_mode_2);

// f_0061f3f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the guest records (states, flag pairs, stations 4, counters).
namespace d_0061f3f8 {

struct __attribute__((packed)) NetGuest {
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
GUEST_OFFSET(NetGuest, byte_0, 0x0);
GUEST_OFFSET(NetGuest, byte_2, 0x2);
GUEST_OFFSET(NetGuest, byte_3, 0x3);
GUEST_OFFSET(NetGuest, byte_4, 0x4);
GUEST_OFFSET(NetGuest, byte_44, 0x44);
GUEST_OFFSET(NetGuest, word_4c, 0x4c);
GUEST_OFFSET(NetGuest, word_50, 0x50);
GUEST_OFFSET(NetGuest, word_58, 0x58);
GUEST_OFFSET(NetGuest, word_5c, 0x5c);
GUEST_OFFSET(NetGuest, word_60, 0x60);
GUEST_OFFSET(NetGuest, word_64, 0x64);
GUEST_OFFSET(NetGuest, word_68, 0x68);
GUEST_OFFSET(NetGuest, word_6c, 0x6c);
GUEST_OFFSET(NetGuest, half_13a, 0x13a);
GUEST_OFFSET(NetGuest, byte_13d, 0x13d);
GUEST_OFFSET(NetGuest, byte_13e, 0x13e);
GUEST_OFFSET(NetGuest, byte_13f, 0x13f);
GUEST_OFFSET(NetGuest, byte_140, 0x140);
GUEST_OFFSET(NetGuest, byte_141, 0x141);
GUEST_OFFSET(NetGuest, byte_142, 0x142);
GUEST_OFFSET(NetGuest, byte_146, 0x146);
GUEST_OFFSET(NetGuest, byte_147, 0x147);

inline constexpr guest::Function<0x00624c68, u32(u32)> clear_flag_pair;

void NetGuest__clear(gptr<NetGuest> net_guest) {
    net_guest->byte_0 = 0;
    clear_flag_pair(net_guest.addr() + 0x18u);
    clear_flag_pair(net_guest.addr() + 0x20u);
    clear_flag_pair(net_guest.addr() + 0x28u);
    clear_flag_pair(net_guest.addr() + 0x30u);
    net_guest->byte_2 = 0xff;
    net_guest->byte_3 = 4;
    net_guest->byte_4 = 4;
    clear_flag_pair(net_guest.addr() + 5u);
    clear_flag_pair(net_guest.addr() + 7u);
    clear_flag_pair(net_guest.addr() + 0x10u);
    clear_flag_pair(net_guest.addr() + 0x38u);
    clear_flag_pair(net_guest.addr() + 0x40u);
    net_guest->byte_44 = 3;
    net_guest->byte_140 = 0;
    net_guest->byte_141 = 0;
    net_guest->byte_142 = 0;
    net_guest->word_60 = 0;
    net_guest->word_64 = 0;
    net_guest->word_68 = 0;
    net_guest->word_6c = 0;
    clear_flag_pair(net_guest.addr() + 0x70u);
    net_guest->byte_146 = 0;
    net_guest->word_4c = 0;
    net_guest->word_50 = 0;
    net_guest->word_58 = 0;
    net_guest->word_5c = 0;
    net_guest->half_13a = 0;
    net_guest->byte_13d = 0;
    net_guest->byte_13e = 0;
    net_guest->byte_13f = 0;
    net_guest->byte_147 = 0;
}

}  // namespace d_0061f3f8
GUEST_EXPORT_FRAMED(0x0061f3f8, d_0061f3f8::NetGuest__clear, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0061f4c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a net confirmation state machine: its six flag pairs cleared.
namespace d_0061f4c0 {

struct __attribute__((packed)) netgame__ConfirmMachine {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
    u8 byte_4;
    u8 unknown_5[0x7];  // (not used here)
    u32 confirm_machine_vtable;
    u8 unknown_10[0x4];  // (not used here)
    u32 confirm_machine_vtable_14;
    u8 unknown_18[0x4];  // (not used here)
    u32 confirm_machine_vtable_1c;
    u8 unknown_20[0x4];  // (not used here)
    u32 confirm_machine_vtable_24;
    u8 unknown_28[0x4];  // (not used here)
    u32 confirm_machine_vtable_2c;
    u8 unknown_30[0x4];  // (not used here)
    u32 confirm_machine_vtable_34;
    u8 unknown_38[0x4];  // (not used here)
    u32 confirm_machine_vtable_3c;
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
GUEST_OFFSET(netgame__ConfirmMachine, byte_0, 0x0);
GUEST_OFFSET(netgame__ConfirmMachine, byte_1, 0x1);
GUEST_OFFSET(netgame__ConfirmMachine, byte_2, 0x2);
GUEST_OFFSET(netgame__ConfirmMachine, byte_3, 0x3);
GUEST_OFFSET(netgame__ConfirmMachine, byte_4, 0x4);
GUEST_OFFSET(netgame__ConfirmMachine, confirm_machine_vtable, 0xc);
GUEST_OFFSET(netgame__ConfirmMachine, confirm_machine_vtable_14, 0x14);
GUEST_OFFSET(netgame__ConfirmMachine, confirm_machine_vtable_1c, 0x1c);
GUEST_OFFSET(netgame__ConfirmMachine, confirm_machine_vtable_24, 0x24);
GUEST_OFFSET(netgame__ConfirmMachine, confirm_machine_vtable_2c, 0x2c);
GUEST_OFFSET(netgame__ConfirmMachine, confirm_machine_vtable_34, 0x34);
GUEST_OFFSET(netgame__ConfirmMachine, confirm_machine_vtable_3c, 0x3c);
GUEST_OFFSET(netgame__ConfirmMachine, byte_44, 0x44);
GUEST_OFFSET(netgame__ConfirmMachine, word_48, 0x48);
GUEST_OFFSET(netgame__ConfirmMachine, word_4c, 0x4c);
GUEST_OFFSET(netgame__ConfirmMachine, word_50, 0x50);
GUEST_OFFSET(netgame__ConfirmMachine, word_54, 0x54);
GUEST_OFFSET(netgame__ConfirmMachine, word_58, 0x58);
GUEST_OFFSET(netgame__ConfirmMachine, word_5c, 0x5c);

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

inline constexpr u32 vtable_netgame__ConfirmMachine_rec = 0x0090ac18u;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x00624c90, u32(u32, u32, u32, u32)> clear_flag_pair_b;

u32 netgame__ConfirmMachine__ConfirmMachine_0061f4c0(gptr<netgame__ConfirmMachine> confirm_machine) {
    confirm_machine->byte_0 = 0;
    confirm_machine->byte_1 = 2;
    confirm_machine->byte_2 = 0xff;
    confirm_machine->byte_3 = 4;
    confirm_machine->byte_4 = 4;
    u32 r0_1 = confirm_machine.addr() + 5u;
    clear_flag_pair_b(r0_1, 4u, 0xffu, 2u);
    u32 r0_2 = r0_1 + 2u;
    clear_flag_pair_b(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_3 = r0_2 + 9u;
    clear_flag_pair_b(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    confirm_machine->confirm_machine_vtable = vtable_netgame__ConfirmMachine_rec;
    u32 r0_4 = r0_3 + 8u;
    clear_flag_pair_b(r0_4, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    confirm_machine->confirm_machine_vtable_14 = vtable_netgame__ConfirmMachine_rec;
    u32 r0_5 = r0_4 + 8u;
    clear_flag_pair_b(r0_5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    confirm_machine->confirm_machine_vtable_1c = vtable_netgame__ConfirmMachine_rec;
    u32 r0_6 = r0_5 + 8u;
    clear_flag_pair_b(r0_6, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    confirm_machine->confirm_machine_vtable_24 = vtable_netgame__ConfirmMachine_rec;
    u32 r0_7 = r0_6 + 8u;
    clear_flag_pair_b(r0_7, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    confirm_machine->confirm_machine_vtable_2c = vtable_netgame__ConfirmMachine_rec;
    u32 r0_8 = r0_7 + 8u;
    clear_flag_pair_b(r0_8, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    confirm_machine->confirm_machine_vtable_34 = vtable_netgame__ConfirmMachine_rec;
    u32 r0_9 = r0_8 + 8u;
    clear_flag_pair_b(r0_9, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    confirm_machine->confirm_machine_vtable_3c = vtable_netgame__ConfirmMachine_rec;
    confirm_machine->byte_44 = 3;
    confirm_machine->word_48 = 0;
    confirm_machine->word_4c = 0;
    confirm_machine->word_50 = 0;
    confirm_machine->word_54 = 0;
    confirm_machine->word_58 = 0;
    confirm_machine->word_5c = 0;
    u32 r0_10 = r0_9 + 0x30u;
    clear_flag_pair_b(r0_10, 3u, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_12 = for_each_element(r0_10 + 2u, 0x29b870u, 0x32u, 4u);
    gptr<Local_0061f4c0_r0_13> r0_13 = gptr<Local_0061f4c0_r0_13>(r0_12 - 0x72u);
    *gptr<u16>(r0_13.addr() + 0x13au) = 0;
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
    guest::cpu()->r[1] = 0x13au;
    return r0_13.addr();
}

}  // namespace d_0061f4c0
GUEST_EXPORT_FRAMED(0x0061f4c0, d_0061f4c0::netgame__ConfirmMachine__ConfirmMachine_0061f4c0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0061f608: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Accepts a friend key that is new to the three known ones (when the link allows it): sends it (0050d1b4) and records
// it; true when done or already known.
namespace d_0061f608 {

struct __attribute__((packed)) NetGuest {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(NetGuest, word_0, 0x0);
GUEST_OFFSET(NetGuest, word_4, 0x4);
GUEST_OFFSET(NetGuest, word_8, 0x8);

struct __attribute__((packed)) NetGuestAcceptFriendArg1 {
    u32 word_0;
};
GUEST_OFFSET(NetGuestAcceptFriendArg1, word_0, 0x0);

inline constexpr u32 request_pool_address = 0x00a22020u;
inline constexpr guest::Function<0x0050d1b4, u32(u32, u32, u32)> RequestPool__request_get_meta;
inline constexpr guest::Function<0x0061f6a0, u32(u32, u32)> NetGuest__record_friend;
inline constexpr guest::Function<0x00746efc, u32(u32)> RequestPool__component_state;
inline constexpr guest::Function<0x00746f8c, u32(u32, u32, u32, u32)> UnknownStateA22020__flag_144_without_flag_30;

u32 NetGuest__accept_friend(gptr<NetGuest> net_guest, gptr<NetGuestAcceptFriendArg1> arg1, u32 r2) {
    u32 r1 = arg1.addr();
    u32 r0_4 = 0;
    u32 r0_1 = arg1->word_0;
    u32 r5_1 = r1;
    u32 zf_1 = r0_1 == 0;
    if (!zf_1) {
        r1 = net_guest->word_0;
        zf_1 = r1 == r0_1;
    }
    if (!zf_1) {
        r1 = net_guest->word_4;
        u32 zf_2 = r1 == r0_1;
        if (!zf_2) {
            r1 = net_guest->word_8;
            zf_2 = r1 == r0_1;
        }
        if (!zf_2) {
            if (UnknownStateA22020__flag_144_without_flag_30(request_pool_address, r1, r2, guest::cpu()->r[3]) != 0) {
                if (RequestPool__component_state(request_pool_address) >= 2u) {
                    return 0u;
                }
            }
            r0_4 = RequestPool__request_get_meta(request_pool_address, r5_1, r2);
            if (r0_4 != 0) {
                NetGuest__record_friend(net_guest.addr(), r5_1);
                r0_4 = 1u;
            }
            return r0_4;
        }
    }
    guest::cpu()->r[1] = r1;
    return 1u;
}

}  // namespace d_0061f608
GUEST_EXPORT_FRAMED(0x0061f608, d_0061f608::NetGuest__accept_friend, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0061f6a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Records an accepted friend key in a free entry.
namespace d_0061f6a0 {

struct __attribute__((packed)) NetGuest {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(NetGuest, word_0, 0x0);
GUEST_OFFSET(NetGuest, word_4, 0x4);
GUEST_OFFSET(NetGuest, word_8, 0x8);

struct __attribute__((packed)) NetGuestRecordFriendArg1 {
    u32 word_0;
};
GUEST_OFFSET(NetGuestRecordFriendArg1, word_0, 0x0);

struct __attribute__((packed)) Local_0061f6a0_r0_4 {
    u32 word_0;
    u16 half_4;
    u16 half_6;
};
GUEST_OFFSET(Local_0061f6a0_r0_4, word_0, 0x0);
GUEST_OFFSET(Local_0061f6a0_r0_4, half_4, 0x4);
GUEST_OFFSET(Local_0061f6a0_r0_4, half_6, 0x6);

inline guest::global<u32, 0x0095362c> net_session;
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> current_net_station;
inline constexpr guest::Function<0x0075f4d4, u32(u32, u32, u32, u32)> entry_in_use;

struct __attribute__((packed)) NetGuestRecordFriendFrame {
    u32 word_0;
};
GUEST_OFFSET(NetGuestRecordFriendFrame, word_0, 0x0);
GUEST_SIZE(NetGuestRecordFriendFrame, 0x4);

void NetGuest__record_friend(gptr<NetGuest> net_guest, gptr<NetGuestRecordFriendArg1> arg1, u32 r2, u32 r3) {
    guest::StackFrameOf<NetGuestRecordFriendFrame> frame;  // the original's stack frame
    u32 r0 = net_guest.addr();
    u32 r1 = arg1.addr();
    frame->word_0 = r3;
    u32 r7 = r0;
    u32 r8 = r1;
    u32 r0_1 = arg1->word_0;
    if (r0_1 == 0) {
        guest::cpu()->r[1] = r1;
        return;
    }
    r1 = net_guest->word_0;
    u32 r10 = 0u;
    u32 zf_1 = r1 == r0_1;
    if (!zf_1) {
        r2 = net_guest->word_4;
        zf_1 = r2 == r0_1;
    }
    if (zf_1) {
        guest::cpu()->r[1] = r1;
        return;
    }
    u32 r3_1 = net_guest->word_8;
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
            u32 station = current_net_station(r0_1, r1, r2, r3_1);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (station < 4u) {
                u32 r9 = 0x88f298u;
                u32 r6 = 0u;
                frame->word_0 = *net_session + 0xb0u;
L_61f71c:;
                u32 r5 = gptr<u32>(r7)[r6];
                if (r5 != 0) {
                    u32 i = 0u;
                    do {
                        u32 r0_3 = frame->word_0;
                        gptr<Local_0061f6a0_r0_4> r0_4 = gptr<Local_0061f6a0_r0_4>(entry_in_use(r0_3, i & 0xffu, r2, r3));
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
                        i += 1u;
                        guest::preempt();
                    } while (s32(i) < 4);
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
GUEST_EXPORT_FRAMED(0x0061f6a0, d_0061f6a0::NetGuest__record_friend, 0x4ff0);  // pushes {i, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_0061fc98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sends the 100-entry friend list (+0x11950) through the link object; clears the pending flags when it went through.
namespace d_0061fc98 {

struct __attribute__((packed)) NetGuest {
    u8 unknown_0[0x11ae8];  // (not used here)
    u8 byte_11ae8;
    u8 byte_11ae9;
};
GUEST_OFFSET(NetGuest, byte_11ae8, 0x11ae8);
GUEST_OFFSET(NetGuest, byte_11ae9, 0x11ae9);

inline constexpr u32 request_pool_address = 0x00a22020u;
inline constexpr guest::Function<0x0050d0c4, u32(u32, u32, u32, u32)> RequestPool__request_post;

struct __attribute__((packed)) NetGuestSendFriendListFrame {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(NetGuestSendFriendListFrame, word_0, 0x0);
GUEST_OFFSET(NetGuestSendFriendListFrame, word_4, 0x4);
GUEST_SIZE(NetGuestSendFriendListFrame, 0x8);

u32 NetGuest__send_friend_list(gptr<NetGuest> net_guest) {
    guest::StackFrameOf<NetGuestSendFriendListFrame> frame;  // the original's stack frame
    u32 r5_1 = net_guest.addr() + 0x11ae8u;
    net_guest->byte_11ae8 = 1;
    frame->word_0 = 1;
    frame->word_4 = 0;
    u32 r0_1 = RequestPool__request_post(request_pool_address, net_guest.addr() + 0x11950u, 0x64u, net_guest.addr() + 0x11ae4u);
    u32 r1_2 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        net_guest->byte_11ae8 = 0;
        r1_2 = net_guest.addr() - 0xfffee517u;
        net_guest->byte_11ae9 = 0;
    }
    guest::cpu()->r[1] = r1_2;
    return r0_1;
}

}  // namespace d_0061fc98
GUEST_EXPORT_FRAMED(0x0061fc98, d_0061fc98::NetGuest__send_friend_list, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0061fd68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sends the station's bit (packet 0x30), or requests it as the host.
namespace d_0061fd68 {

inline constexpr u32 net_session_address = 0x0095362cu;
inline guest::global<u32, 0x0095362c> net_session;
inline constexpr guest::Function<0x00622fe4, u32(u32, u32)> NetLink__request_station_bit;
inline constexpr guest::Function<0x00627d44, u32(u32, u32, u32)> PacketBuffer__append;
inline constexpr guest::Function<0x00627f74, u32(u32)> PacketBuffer__reserve_record;
inline constexpr guest::Function<0x0062801c, u32(u32, u32, u32)> PacketBuffer__flush_record;
inline constexpr guest::Function<0x0075dfe8, u32(u32, u32, u32, u32)> NetSession__station;

u32 NetSession__send_station_bit(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x20);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    if (NetSession__station(*net_session, r1, r2, r3) == 0) {
        u32 net_link = *net_session + 0x7880u;
        frame.release();
        return NetLink__request_station_bit(net_link, r0);
    }
    *frame.at<u16>(0) = u16(1u | r0 << 8);
    if (u32(1)) {
        u32 r7_1 = *net_session + 0x10u;
        PacketBuffer__reserve_record(r7_1);
        PacketBuffer__append(r7_1, frame.at(0).addr(), 2u);
        PacketBuffer__flush_record(r7_1, 0x30u, 0u);
    }
    return 1u;
}

}  // namespace d_0061fd68
GUEST_EXPORT(0x0061fd68, d_0061fd68::NetSession__send_station_bit);
