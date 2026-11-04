// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen. Hexadecimal constants are the original's
// (addresses, offsets, sizes and ids as the game has them).
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_00250334: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs the sound object at full volume.
namespace d_00250334 {

struct __attribute__((packed)) Local_00250334_r0_1 {
    u8 unknown_0[0xc0];  // (not used here)
    float float_c0;
    u8 byte_c4;
};
GUEST_OFFSET(Local_00250334_r0_1, float_c0, 0xc0);
GUEST_OFFSET(Local_00250334_r0_1, byte_c4, 0xc4);

inline constexpr guest::Function<0x00277fe4, u32(u32, u32, u32, u32)> SoundObjPlayer__construct;

u32 SoundObjVolume__construct(u32 sound_obj_volume, u32 r1, float S0) {
    gptr<Local_00250334_r0_1> r0_1 = gptr<Local_00250334_r0_1>(SoundObjPlayer__construct(sound_obj_volume, r1, guest::cpu()->r[2], guest::cpu()->r[3]));
    float S0_1 = 1.0f;
    r0_1->float_c0 = S0_1;
    r0_1->byte_c4 = 0;
    guest::cpu()->r[1] = 0u;
    guest::cpu()->s[0] = S0_1;
    return r0_1.addr();
}

}  // namespace d_00250334
GUEST_EXPORT_FRAMED(0x00250334, d_00250334::SoundObjVolume__construct, 0x4010);  // pushes {r4, lr} first, as the original

// f_00250354: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Places the sound object at the world position, seen from the camera.
namespace d_00250354 {

struct __attribute__((packed)) SoundObj {
    u8 unknown_0[0x5c];  // (not used here)
    u8 byte_5c;
};
GUEST_OFFSET(SoundObj, byte_5c, 0x5c);

inline constexpr guest::Function<0x001e5894, u32(u32, u32, u32, u32)> camera_transform_point;
inline constexpr guest::Function<0x0020a4cc, u32(u32, u32, u32)> SoundObjBase__virtual_2;

u32 SoundObj__place_at(gptr<SoundObj> sound_obj, u32 r1, u32 r2) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    camera_transform_point(frame.at(0).addr(), r1, r2, guest::cpu()->r[3]);
    SoundObjBase__virtual_2(sound_obj.addr(), r1, frame.at(0).addr());
    sound_obj->byte_5c = 1;
    return 1u;
}

}  // namespace d_00250354
GUEST_EXPORT_FRAMED(0x00250354, d_00250354::SoundObj__place_at, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_002503b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls the sound object's virtual function 9.
namespace d_002503b0 {

inline constexpr guest::Function<0x0081fe54, u32(u32, u32, u32, u32)> SoundObj_1___virtual_9;

u32 SoundObj_1___virtual_9_veneer() {
    SoundObj_1___virtual_9(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return guest::cpu()->r[0];
}

}  // namespace d_002503b0
GUEST_EXPORT_FRAMED(0x002503b0, d_002503b0::SoundObj_1___virtual_9_veneer, 0x4010);  // pushes {r4, lr} first, as the original

// f_002504d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Plays the sound (the sound object's virtual function 7).
namespace d_002504d4 {

inline constexpr guest::Function<0x00820110, u32(u32, u32, u32, u32)> SoundObj_1___virtual_7;

u32 SoundObj__play() {
    SoundObj_1___virtual_7(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return guest::cpu()->r[0];
}

}  // namespace d_002504d4
GUEST_EXPORT_FRAMED(0x002504d4, d_002504d4::SoundObj__play, 0x4010);  // pushes {r4, lr} first, as the original

// f_00250510: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a one-sound sound object: a sound object base with one sound slot.
namespace d_00250510 {

inline constexpr u32 vtable_SoundObj_1_ = 0x008f8d88u;
inline constexpr guest::Function<0x0020af18, u32(u32, u32, u32, u32)> SoundObjBase__SoundObjBase;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;

u32 SoundObj_1___SoundObj_00250510(gptr<SoundObj_1_> sound_obj, u32 r1, u32 r2, u32 r3) {
    SoundObjBase__SoundObjBase(sound_obj.addr(), r1, r2, r3);
    sound_obj->vtable = vtable_SoundObj_1_;
    u32 r0_5 = for_each_element(for_each_element(sound_obj.addr() + 0x44u, 0x131800u, 4u, 1u) + 4u, 0x1287a8u, 0x14u, 1u) - 0x48u;
    *gptr<u8>(r0_5 + 0x5cu) = 0;
    guest::cpu()->r[1] = 0u;
    return r0_5;
}

}  // namespace d_00250510
GUEST_EXPORT_FRAMED(0x00250510, d_00250510::SoundObj_1___SoundObj_00250510, 0x4010);  // pushes {r4, lr} first, as the original

// f_00250560: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys a one-sound sound object: detaches its sound and stops the base.
namespace d_00250560 {

inline constexpr u32 vtable_SoundObj_1_ = 0x008f8d88u;
inline constexpr guest::Function<0x00136cc8, u32(u32, u32, u32, u32)> detach_from_parent;
inline constexpr guest::Function<0x0020aedc, u32(u32)> SoundObjBase__stop;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;

u32 SoundObj_1___SoundObj_00250560(gptr<SoundObj_1_> sound_obj, u32 r1, u32 r2, u32 r3) {
    sound_obj->vtable = vtable_SoundObj_1_;
    detach_from_parent(sound_obj.addr() + 0x44u, r1, r2, r3);
    SoundObjBase__stop(sound_obj.addr());
    detach_from_parent(sound_obj.addr() + 0x44u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    destroy_array_elements(sound_obj.addr() + 0x44u, 0x137d74u, 4u, 1u);
    return sound_obj.addr();
}

}  // namespace d_00250560
GUEST_EXPORT_FRAMED(0x00250560, d_00250560::SoundObj_1___SoundObj_00250560, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00250b34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Claims the tour's reward and clears the pending flag.
namespace d_00250b34 {

inline guest::global<u32, 0x0094ee34> player_event_once;
inline constexpr guest::Function<0x002933cc, u32(u32, u32, u32, u32)> TourState__claim_reward;

void TourState__claim_reward_and_clear(u32 tour_state, u32 r1) {
    TourState__claim_reward(tour_state, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *player_event_once = 0;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_00250b34
GUEST_EXPORT_FRAMED(0x00250b34, d_00250b34::TourState__claim_reward_and_clear, 0x4010);  // pushes {r4, lr} first, as the original

// f_00250b58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Spawns and updates the fish in the slots (species, shadows, places).
namespace d_00250b58 {

struct __attribute__((packed)) ObjectData {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(ObjectData, word_0, 0x0);
GUEST_OFFSET(ObjectData, word_4, 0x4);
GUEST_OFFSET(ObjectData, word_8, 0x8);

struct __attribute__((packed)) Local_00250b58_r5_1 {
    u8 unknown_0[0x138];  // (not used here)
    u8 byte_138;
    u8 byte_139;
    u8 byte_13a;
    u8 byte_13b;
};
GUEST_OFFSET(Local_00250b58_r5_1, byte_138, 0x138);
GUEST_OFFSET(Local_00250b58_r5_1, byte_139, 0x139);
GUEST_OFFSET(Local_00250b58_r5_1, byte_13a, 0x13a);
GUEST_OFFSET(Local_00250b58_r5_1, byte_13b, 0x13b);

inline constexpr guest::Function<0x0014f7fc, u32(u32, u32, u32, u32)> import_thunk_14f7fc;
inline constexpr guest::Function<0x0014f9b4, u32(u32, u32, u32)> import_thunk_14f9b4;
inline constexpr guest::Function<0x0014f9bc, u32(u32, u32, u32, u32)> import_thunk_14f9bc;
inline constexpr guest::Function<0x001de7f8, u32(u32, u32, u32, u32)> TwoBitFlags6__has;
inline constexpr guest::Function<0x0024da38, u32(u32)> member_address_0x1224_;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> current_scene_id;
inline constexpr guest::Function<0x002fae84, u32(u32)> get_data_base;
inline constexpr guest::Function<0x00317ee0, u32(u32, u32)> record_4648_address;
inline constexpr guest::Function<0x0057b9dc, u32(u32, u32, u32, u32)> StringPool__find_message_mode_2;
inline constexpr guest::Function<0x005c2ce0, u32(u32, u32, u32, u32)> object_data_of_id;
inline constexpr guest::Function<0x006268f8, u32(u32, u32, u32, u32)> entry_template_address;
inline constexpr guest::Function<0x006c5fa0, u32(u32, u32, u32, u32)> tile_height_at_position;
inline constexpr guest::Function<0x006f9638, u32(u32)> list_position_of_mode;
inline constexpr guest::Function<0x006fa728, u32(u32)> scene_room_record_byte;
inline constexpr guest::Function<0x006fb0cc, u32(u32)> byte_of_952742;

struct __attribute__((packed)) FishMgrUpdateSlotsFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0x4];  // (not read or written by name)
};
GUEST_OFFSET(FishMgrUpdateSlotsFrame, word_0, 0x0);
GUEST_OFFSET(FishMgrUpdateSlotsFrame, word_4, 0x4);
GUEST_OFFSET(FishMgrUpdateSlotsFrame, word_8, 0x8);
GUEST_OFFSET(FishMgrUpdateSlotsFrame, word_c, 0xc);
GUEST_SIZE(FishMgrUpdateSlotsFrame, 0x14);

void FishMgr__update_slots(u32 fish_mgr, u32 r1, u32 r2, u32 r3, float S0) {
    guest::StackFrameOf<FishMgrUpdateSlotsFrame> frame;  // the original's stack frame
    u32 r0_8 = 0;
    u32 talk = fish_mgr;
    u32 scene_3 = current_scene_id(fish_mgr, r1, r2, r3);
    u32 position = list_position_of_mode(scene_3);
    u32 r0_3 = byte_of_952742(position);
    u32 r0_4 = scene_room_record_byte(position);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    u32 r0_5 = r0_4 * 0xcu + (r0_3 << 1);
    if (r0_5 > 0x26u) {
        r0_5 = 0u;
    }
    u32 r5 = r0_5 + 0x5cu;
    u32 i = 0u;
    do {
        guest::cpu()->s[0] = S0;
        u32 r0_7 = entry_template_address(r5 + i & 0xffu, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        r0_8 = *gptr<u32>(r0_7);
        r1 = talk + (i << 2);
        i += 1u;
        *gptr<u32>(r1 + 0x138u) = r0_8;
        guest::preempt();
    } while (i < 2u);
    guest::cpu()->s[0] = S0;
    u32 scene_4 = current_scene_id(r0_8, r1, r2, r3);
    u32 position_2 = list_position_of_mode(scene_4);
    u32 r8 = byte_of_952742(position_2);
    u32 r0_12 = scene_room_record_byte(position_2);
    u32 data_base = get_data_base(r0_12);
    u32 r0_16 = member_address_0x1224_(record_4648_address(data_base + 0x5d880u, r0_12));
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    u32 r10 = 0x887212u;
    i = 0u;
    u32 two_bit_flags6 = r0_16;
    u32 r9 = i;
    do {
        guest::cpu()->s[0] = S0;
        u32 r0_17 = TwoBitFlags6__has(two_bit_flags6, r8, i, r3);
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        if (r0_17 != 0) {
            gptr<Local_00250b58_r5_1> r5_1 = gptr<Local_00250b58_r5_1>(talk + (i << 2));
            u32 r2_10 = r5_1->byte_139;
            frame->word_4 = std::bit_cast<u32>(float((u32(r5_1->byte_138) >> 6) + (r2_10 << 2) << 2));
            float S0_10 = float(u32(r5_1->byte_13a) + ((u32(r5_1->byte_13b) & 3u) << 8) << 2);
            frame->word_c = std::bit_cast<u32>(S0_10);
            if ((u32(r5_1->byte_138) >> 2u & 0xfu) == 0) {
                guest::cpu()->s[0] = S0_10;
                gptr<ObjectData> object_data = gptr<ObjectData>(object_data_of_id(4u, 1u, r2_10, r3));
                r2_10 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                S0_10 = guest::cpu()->s[0];
                if (object_data.addr() != 0) {
                    frame->word_4 = object_data->word_0;
                    frame->word_8 = object_data->word_4;
                    frame->word_c = object_data->word_8;
                }
            }
            guest::cpu()->s[0] = S0_10;
            tile_height_at_position(frame.at(4).addr(), 0u, r2_10, r3);
            float S0_11 = guest::cpu()->s[0];
            frame->word_8 = std::bit_cast<u32>(S0_11);
            u32 r1_10 = u32(r5_1->byte_138) >> 2u & 0xfu;
            guest::cpu()->s[0] = S0_11;
            u32 r0_20 = import_thunk_14f9b4(i, r1_10, 0u);
            frame->word_0 = r9;
            u32 string_pool = *gptr<u16>(r10);
            u32 r0_22 = StringPool__find_message_mode_2(string_pool, talk, r0_20, frame.at(4).addr());
            r3 = guest::cpu()->r[3];
            S0 = guest::cpu()->s[0];
            u32 ea_1 = r5_1.addr() + 0x140u;
            u32 r0_23 = *gptr<u32>(ea_1);
            if (r0_23 != 0) {
                import_thunk_14f7fc(r0_23, guest::cpu()->r[1], guest::cpu()->r[2], r3);
                r3 = guest::cpu()->r[3];
                S0 = guest::cpu()->s[0];
            }
            if (r0_22 != 0) {
                guest::cpu()->s[0] = S0;
                import_thunk_14f9bc(r0_22, ea_1, guest::cpu()->r[2], r3);
                r3 = guest::cpu()->r[3];
                S0 = guest::cpu()->s[0];
            }
        }
        i += 1u;
        guest::preempt();
    } while (i < 2u);
    guest::cpu()->s[0] = S0;
}

}  // namespace d_00250b58
GUEST_EXPORT_FRAMED(0x00250b58, d_00250b58::FishMgr__update_slots, 0x4ff0);  // pushes {i, r5, talk, r7, r8, r9, r10, two_bit_flags6, lr} first, as the original

// f_00251690: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the object's id (+0x34) is one of two fixed ids.
namespace d_00251690 {

struct __attribute__((packed)) ObjectIsKindAOrBArg0 {
    u8 unknown_0[0x34];  // (not used here)
    u32 word_34;
    u32 word_38;
};
GUEST_OFFSET(ObjectIsKindAOrBArg0, word_34, 0x34);
GUEST_OFFSET(ObjectIsKindAOrBArg0, word_38, 0x38);

inline guest::global<u32, 0x00846510> global_00846510;
inline guest::global<u32, 0x00846514> global_00846514;
inline guest::global<u32, 0x00846520> object_kind_a;
inline guest::global<u32, 0x00846524> object_kind_b;

u32 Object__is_kind_a_or_b(gptr<ObjectIsKindAOrBArg0> object) {
    u32 r3_1 = object->word_34;
    u32 r1_1 = *object_kind_b;
    if (r3_1 == *object_kind_a && (r3_1 == 0 && ((object->word_38 | r1_1) & 1u) == 0 || object->word_38 == r1_1)) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    u32 r1_2 = *global_00846514;
    if (r3_1 != *global_00846510) {
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    if (r3_1 == 0 && ((object->word_38 | r1_2) & 1u) == 0) {
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    if (object->word_38 != r1_2) {
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    guest::cpu()->r[1] = r1_2;
    return 1u;
}

}  // namespace d_00251690
GUEST_EXPORT(0x00251690, d_00251690::Object__is_kind_a_or_b);

// f_00251818: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the object's id (+0x34) is the first of the two fixed ids.
namespace d_00251818 {

struct __attribute__((packed)) ObjectIsKindAArg0 {
    u8 unknown_0[0x34];  // (not used here)
    u32 word_34;
    u32 word_38;
};
GUEST_OFFSET(ObjectIsKindAArg0, word_34, 0x34);
GUEST_OFFSET(ObjectIsKindAArg0, word_38, 0x38);

inline guest::global<u32, 0x00846520> object_kind_a;
inline guest::global<u32, 0x00846524> object_kind_b;

u32 Object__is_kind_a(gptr<ObjectIsKindAArg0> object) {
    u32 r3_1 = object->word_34;
    u32 r2_1 = *object_kind_a;
    u32 r1_1 = *object_kind_b;
    if (r3_1 != r2_1) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    if (r3_1 == 0 && ((object->word_38 | r1_1) & 1u) == 0) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    if (object->word_38 != r1_1) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_00251818
GUEST_EXPORT(0x00251818, d_00251818::Object__is_kind_a);

// f_00251868: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts the object's fixed animation.
namespace d_00251868 {

inline guest::global<u32, 0x00846530> global_00846530;
inline guest::global<u32, 0x00846534> global_00846534;
inline constexpr guest::Function<0x00817694, u32(u32, u32, u32)> LayoutAnimator__play_n;

u32 Object__start_animation(u32 object) {
    return LayoutAnimator__play_n(object + 0x28u, *global_00846530, *global_00846534);
}

}  // namespace d_00251868
GUEST_EXPORT_FRAMED(0x00251868, d_00251868::Object__start_animation, 0x4010);  // pushes {r4, lr} first, as the original

// f_002518f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the template of the slot's species into the record.
namespace d_002518f4 {

struct __attribute__((packed)) FishMgrCopyTemplateArg2 {
    u8 unknown_0[0x846bcb];  // (not used here)
    u8 byte_846bcb;
};
GUEST_OFFSET(FishMgrCopyTemplateArg2, byte_846bcb, 0x846bcb);

inline constexpr guest::Function<0x006268f8, u32(u32)> entry_template_address;
inline constexpr guest::Function<0x007795ec, u32(u32, u32)> copy_record;

u32 FishMgr__copy_template(u32 r0_unused, u32 r1, gptr<FishMgrCopyTemplateArg2> arg2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = arg2->byte_846bcb;
    u32 r0_2 = entry_template_address(r0_1);
    frame.release();
    return copy_record(r1, r0_2);
}

}  // namespace d_002518f4
GUEST_EXPORT(0x002518f4, d_002518f4::FishMgr__copy_template);

// f_0025191c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The fish slot (0x108 bytes each).
namespace d_0025191c {


u32 FishMgr__slot(u32 fish_mgr, u32 r1) {
    return fish_mgr + r1 * 0x108u + 0x128u;
}

}  // namespace d_0025191c
GUEST_EXPORT(0x0025191c, d_0025191c::FishMgr__slot);

// f_00251938: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When the slot's fish is hooked (state 2): its position and item; else false.
namespace d_00251938 {

struct __attribute__((packed)) FishMgrHookedFishArg2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(FishMgrHookedFishArg2, word_0, 0x0);
GUEST_OFFSET(FishMgrHookedFishArg2, word_4, 0x4);
GUEST_OFFSET(FishMgrHookedFishArg2, word_8, 0x8);

struct __attribute__((packed)) Local_00251938_r1_1 {
    u8 unknown_0[0x3a8];  // (not used here)
    u32 word_3a8;
    u32 word_3ac;
    u32 word_3b0;
    u8 unknown_3b4[0x44];  // (not used here)
    u8 byte_3f8;
    u8 unknown_3f9[0x1];  // (not used here)
    u8 byte_3fa;
};
GUEST_OFFSET(Local_00251938_r1_1, word_3a8, 0x3a8);
GUEST_OFFSET(Local_00251938_r1_1, word_3ac, 0x3ac);
GUEST_OFFSET(Local_00251938_r1_1, word_3b0, 0x3b0);
GUEST_OFFSET(Local_00251938_r1_1, byte_3f8, 0x3f8);
GUEST_OFFSET(Local_00251938_r1_1, byte_3fa, 0x3fa);

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;
inline constexpr guest::Function<0x006162e0, u32(u32, u32, u32, u32)> Item__from_catalog_index;

struct __attribute__((packed)) FishMgrHookedFishFrame {
    u32 word_0;
};
GUEST_OFFSET(FishMgrHookedFishFrame, word_0, 0x0);
GUEST_SIZE(FishMgrHookedFishFrame, 0x4);

u32 FishMgr__hooked_fish(u32 fish_mgr, u32 r1, gptr<FishMgrHookedFishArg2> arg2, u32 r3) {
    guest::StackFrameOf<FishMgrHookedFishFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    gptr<Local_00251938_r1_1> r1_1 = gptr<Local_00251938_r1_1>(fish_mgr + ((r1 << 4) - r1 << 4));
    if (r1_1->byte_3fa != 2u) {
        guest::cpu()->r[1] = r1_1.addr();
        return 0u;
    }
    arg2->word_0 = r1_1->word_3a8;
    u32 r3_1 = r1_1->word_3ac;
    arg2->word_4 = r3_1;
    arg2->word_8 = r1_1->word_3b0;
    u32 r1_2 = r1_1->byte_3f8;
    Item__from_catalog_index(frame.at(0).addr(), r1_2, 0u, r3_1);
    Item__copy(r3, frame.at(0).addr());
    return 1u;
}

}  // namespace d_00251938
GUEST_EXPORT_FRAMED(0x00251938, d_00251938::FishMgr__hooked_fish, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00251c24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the slot belongs to the current main object (or, for a guest, its entry is ready).
namespace d_00251c24 {

struct __attribute__((packed)) Local_00251c24_r0_2 {
    u8 unknown_0[0x3];  // (not used here)
    u8 byte_3;
    u8 byte_4;
    u8 byte_5;
};
GUEST_OFFSET(Local_00251c24_r0_2, byte_3, 0x3);
GUEST_OFFSET(Local_00251c24_r0_2, byte_4, 0x4);
GUEST_OFFSET(Local_00251c24_r0_2, byte_5, 0x5);

inline constexpr guest::Function<0x00300904, u32(u32, u32)> current_net_signed_value;
inline constexpr guest::Function<0x00305f44, u32(u32, u32)> current_net_station;
inline constexpr guest::Function<0x0061a7a0, u32(u32, u32)> net_guest_entry_is_ready;

u32 FishMgr__slot_is_owned_here(u32 fish_mgr, u32 r1) {
    u32 r0_5 = 0;
    u32 r0_1 = current_net_signed_value(fish_mgr, r1);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        gptr<Local_00251c24_r0_2> r0_2 = gptr<Local_00251c24_r0_2>(fish_mgr + r1 * 6u + 0xe4u);
        u32 r4_1 = 0u;
        r1_1 = u32(r0_2->byte_5) << 0x19;
        if (s32(r1_1) >= 0) {
            u32 r1_2 = r0_2->byte_3;
            u32 r0_3 = u32(r0_2->byte_4) & 3u;
            u32 r1_3 = r1_2 >> 7;
            u32 r5_1 = r1_3 + (r0_3 << 1);
            if (r5_1 != 4u) {
                u32 station = current_net_station(r0_3, r1_3);
                r1_1 = guest::cpu()->r[1];
                if (r5_1 == station) {
                    goto L_251c98;
                }
                goto L_251c9c;
            }
            r0_5 = net_guest_entry_is_ready(r0_3, r1_3);
            r1_1 = guest::cpu()->r[1];
            if (r0_5 == 0) {
                goto L_251c9c;
            }
L_251c98:;
            r4_1 = 1u;
        }
L_251c9c:;
        r0_1 = r4_1;
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_00251c24
GUEST_EXPORT_FRAMED(0x00251c24, d_00251c24::FishMgr__slot_is_owned_here, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00251f14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Makes the current main object the owner of the slot, resets it from its template and tells its actor.
namespace d_00251f14 {

struct __attribute__((packed)) FishMgrClaimSlotArg1 {
    u8 unknown_0[0x846bcb];  // (not used here)
    u8 byte_846bcb;
};
GUEST_OFFSET(FishMgrClaimSlotArg1, byte_846bcb, 0x846bcb);

struct __attribute__((packed)) Local_00251f14_r4_1 {
    u8 unknown_0[0x3];  // (not used here)
    u8 byte_3;
    u8 byte_4;
};
GUEST_OFFSET(Local_00251f14_r4_1, byte_3, 0x3);
GUEST_OFFSET(Local_00251f14_r4_1, byte_4, 0x4);

struct __attribute__((packed)) Local_00251f14_r5_1 {
    u8 unknown_0[0xe9];  // (not used here)
    u8 byte_e9;
};
GUEST_OFFSET(Local_00251f14_r5_1, byte_e9, 0xe9);

inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> current_net_station;
inline constexpr guest::Function<0x0062512c, u32(u32, u32, u32)> apply_entry_template;

void FishMgr__claim_slot(u32 fish_mgr, gptr<FishMgrClaimSlotArg1> arg1, u32 r2) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r8_1 = arg1.addr() + (arg1.addr() << 1);
    gptr<Local_00251f14_r5_1> r5_1 = gptr<Local_00251f14_r5_1>(fish_mgr + (r8_1 << 1));
    gptr<Local_00251f14_r4_1> r4_1 = gptr<Local_00251f14_r4_1>(r5_1.addr() + 0xe4u);
    u32 station = current_net_station(fish_mgr, arg1.addr(), r2, guest::cpu()->r[3]);
    u32 r2_1 = station & 6u;
    r4_1->byte_3 = u8(u32(r4_1->byte_3) & ~0x80u | station << 7);
    r4_1->byte_4 = u8(u32(r4_1->byte_4) & ~3u | r2_1 >> 1);
    u32 r1_1 = u32(r5_1->byte_e9) & ~0x40u;
    r5_1->byte_e9 = u8(r1_1);
    if (s32(arg1.addr()) < 8) {
        u32 r0_2 = arg1->byte_846bcb;
        apply_entry_template(r0_2, r5_1.addr() + 0xe4u, 1u);
        r1_1 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
    }
    u32 r0_3 = *gptr<u32>(fish_mgr + (r8_1 << 3) + 0x24u);
    if (r0_3 != 0) {
        u32 r1_3 = *gptr<u32>(*gptr<u32>(r0_3) + 0xacu);
        // virtual function 43 of r0_3
        frame.release();
        guest::call_address<u32>(r1_3, r0_3, r1_3, r2_1, guest::cpu()->r[3]);
        return;
    }
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_00251f14
GUEST_EXPORT(0x00251f14, d_00251f14::FishMgr__claim_slot);

// f_00251fa4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Releases a claimed slot, resets it from its template and tells its actor.
namespace d_00251fa4 {

struct __attribute__((packed)) FishMgrReleaseSlotArg1 {
    u8 unknown_0[0x846bcb];  // (not used here)
    u8 byte_846bcb;
};
GUEST_OFFSET(FishMgrReleaseSlotArg1, byte_846bcb, 0x846bcb);

struct __attribute__((packed)) Local_00251fa4_r2_1 {
    u8 unknown_0[0xe7];  // (not used here)
    u8 byte_e7;
    u8 byte_e8;
    u8 byte_e9;
};
GUEST_OFFSET(Local_00251fa4_r2_1, byte_e7, 0xe7);
GUEST_OFFSET(Local_00251fa4_r2_1, byte_e8, 0xe8);
GUEST_OFFSET(Local_00251fa4_r2_1, byte_e9, 0xe9);

inline constexpr guest::Function<0x0062512c, u32(u32, u32, u32, u32)> apply_entry_template;

u32 FishMgr__release_slot(u32 fish_mgr, gptr<FishMgrReleaseSlotArg1> arg1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r1 = arg1.addr();
    u32 r3_1 = r1 * 3u;
    gptr<Local_00251fa4_r2_1> r2_1 = gptr<Local_00251fa4_r2_1>(fish_mgr + (r3_1 << 1));
    if (s32(u32(r2_1->byte_e9) << 0x19) < 0) {
        fish_mgr += (r3_1 << 3);
        u32 r4_1 = *gptr<u32>(fish_mgr + 0x24u);
        r2_1->byte_e7 = u8(u32(r2_1->byte_e7) & ~0x80u);
        r2_1->byte_e8 = u8(u32(r2_1->byte_e8) & ~3u | 2u);
        u32 r3_2 = u32(r2_1->byte_e9) & ~0x40u;
        r2_1->byte_e9 = u8(r3_2);
        if (s32(r1) < 8) {
            u32 r0_1 = arg1->byte_846bcb;
            fish_mgr = apply_entry_template(r0_1, r2_1.addr() + 0xe4u, 1u, r3_2);
            r1 = guest::cpu()->r[1];
            r3_2 = guest::cpu()->r[3];
        }
        if (r4_1 != 0) {
            u32 r2_2 = *gptr<u32>(*gptr<u32>(r4_1) + 0xb0u);
            // virtual function 44 of r4_1
            frame.release();
            return guest::call_address<u32>(r2_2, r4_1, r2 & 0xffu, r2_2, r3_2);
        }
    }
    guest::cpu()->r[1] = r1;
    return fish_mgr;
}

}  // namespace d_00251fa4
GUEST_EXPORT(0x00251fa4, d_00251fa4::FishMgr__release_slot);

// f_00252034: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the fish is hooked (state 2) and within the radius of the point (on the ground plane).
namespace d_00252034 {

struct __attribute__((packed)) FishMgr {
    u8 unknown_0[0x11b8];  // (not used here)
    float float_11b8;
    u8 unknown_11bc[0x4];  // (not used here)
    float float_11c0;
    u8 unknown_11c4[0xd];  // (not used here)
    u8 byte_11d1;
};
GUEST_OFFSET(FishMgr, float_11b8, 0x11b8);
GUEST_OFFSET(FishMgr, float_11c0, 0x11c0);
GUEST_OFFSET(FishMgr, byte_11d1, 0x11d1);

struct __attribute__((packed)) FishMgrIsWithinArg1 {
    float float_0;
    u8 unknown_4[0x4];  // (not used here)
    float float_8;
};
GUEST_OFFSET(FishMgrIsWithinArg1, float_0, 0x0);
GUEST_OFFSET(FishMgrIsWithinArg1, float_8, 0x8);


u32 FishMgr__is_within(gptr<FishMgr> fish_mgr, gptr<FishMgrIsWithinArg1> arg1, float S0, float S1) {
    if (fish_mgr->byte_11d1 != 2u) {
        return 0u;
    }
    float S2_1 = S0 * S0;
    float S0_1 = arg1->float_0 - fish_mgr->float_11b8;
    float S1_1 = arg1->float_8 - fish_mgr->float_11c0;
    float S0_2 = S0_1 * S0_1 + S1_1 * S1_1;
    if (S2_1 > S0_2) {
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_1;
        return 1u;
    }
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_1;
    return 0u;
}

}  // namespace d_00252034
GUEST_EXPORT(0x00252034, d_00252034::FishMgr__is_within);

// f_002520fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the record of the slot that belongs here (or its template).
namespace d_002520fc {

struct __attribute__((packed)) Local_002520fc_r0_2 {
    u8 unknown_0[0x3];  // (not used here)
    u8 byte_3;
    u8 byte_4;
};
GUEST_OFFSET(Local_002520fc_r0_2, byte_3, 0x3);
GUEST_OFFSET(Local_002520fc_r0_2, byte_4, 0x4);

struct __attribute__((packed)) Local_002520fc_r7_1 {
    u8 unknown_0[0xe7];  // (not used here)
    u8 byte_e7;
    u8 byte_e8;
};
GUEST_OFFSET(Local_002520fc_r7_1, byte_e7, 0xe7);
GUEST_OFFSET(Local_002520fc_r7_1, byte_e8, 0xe8);

inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> current_net_signed_value;
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32)> current_net_station;
inline constexpr guest::Function<0x0061a7a0, u32(u32, u32, u32)> net_guest_entry_is_ready;
inline constexpr guest::Function<0x006268f8, u32(u32, u32, u32)> entry_template_address;
inline constexpr guest::Function<0x007795ec, u32(u32, u32, u32)> copy_record;

u32 FishMgr__copy_owned_slot(u32 fish_mgr, u32 r1, u32 r2) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r12 = guest::cpu()->r[12];
    u32 r2_1 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r11_1 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r2_2 = 0;
    gptr<Local_002520fc_r7_1> r7_1 = gptr<Local_002520fc_r7_1>(0u);
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r2_3 = 0;
    *frame.at<u32>(0x20) = r12;
    u32 r6 = 0u;
    u32 r5 = fish_mgr;
    u32 r8 = 1u;
    u32 i = r6;
    u32 r10 = 0x846bcbu;
    do {
        u32 r0_1 = current_net_signed_value(fish_mgr, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0_1 != 0) {
            u32 r7 = 0u;
            u32 r9 = r5 + i * 6u;
            r6 = r7;
            gptr<Local_002520fc_r0_2> r0_2 = gptr<Local_002520fc_r0_2>(r9 + 0xe4u);
            r1 = u32(*gptr<u8>(r9 + 0xe9u)) << 0x19;
            if (s32(r1) < 0) {
                goto L_252178;
            }
            r2_1 = r0_2->byte_4;
            r0_3 = u32(r0_2->byte_3) >> 7;
            r1_1 = r2_1 & 3u;
            r11_1 = r0_3 + (r1_1 << 1);
            if (r11_1 == 4u) {
                goto L_2521a4;
            }
            r0_4 = current_net_station(r0_3, r1_1, r2_1);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            if (r11_1 != r0_4) {
                goto L_252178;
            }
L_252174:;
            r7 = 1u;
L_252178:;
            if ((r7 ^ 1u) == 0) {
                goto L_2521bc;
            }
            r0_5 = *gptr<u8>(r10 + i);
            r0_6 = entry_template_address(r0_5, r1, r2);
            r2_2 = r9 + 0xe4u;
            copy_record(r2_2, r0_6, r2_2);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r8 = 0u;
            goto L_252210;
L_2521a4:;
            u32 r0_7 = net_guest_entry_is_ready(r0_3, r1_1, r2_1);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            if (r0_7 == 0) {
                r6 = 1u;
                guest::preempt();
                goto L_252178;
            }
            guest::preempt();
            goto L_252174;
        }
L_2521bc:;
        if (r8 == 0) {
            goto L_252210;
        }
        r7_1 = gptr<Local_002520fc_r7_1>(r5 + i * 6u);
        r2 = r7_1->byte_e8;
        r1 = r2 & 3u;
        if ((u32(r7_1->byte_e7) >> 7) + (r1 << 1) != 4u || *gptr<u8>(r5 + i + 0x114u) == 0) {
            goto L_252210;
        }
        r0_8 = *gptr<u8>(r10 + i);
        r0_9 = entry_template_address(r0_8, r1, r2);
        r2_3 = r7_1.addr() + 0xe4u;
        copy_record(r2_3, r0_9, r2_3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
L_252210:;
        fish_mgr = r5 + i;
        i += 1u;
        *gptr<u8>(fish_mgr + 0x114u) = u8(r6);
        guest::preempt();
    } while (i < 8u);
    guest::cpu()->r[1] = r1;
    return fish_mgr;
}

}  // namespace d_002520fc
GUEST_EXPORT_FRAMED(0x002520fc, d_002520fc::FishMgr__copy_owned_slot, 0x4ff0);  // pushes {i, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_0025244c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Picks a species that appears at the place, the season and the time.
namespace d_0025244c {

struct __attribute__((packed)) Local_0025244c_r0_8 {
    u8 byte_0;
};
GUEST_OFFSET(Local_0025244c_r0_8, byte_0, 0x0);

struct __attribute__((packed)) Local_0025244c_r3_8 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0025244c_r3_8, word_0, 0x0);
GUEST_OFFSET(Local_0025244c_r3_8, word_4, 0x4);

inline constexpr guest::Function<0x002fb378, u32(u32, u32)> game_time_now;
inline constexpr guest::Function<0x002fb94c, u32(u32, u32)> get_current_player;
inline constexpr guest::Function<0x00305f2c, u32(u32, u32, u32, u32)> read_global_object_byte;
inline constexpr guest::Function<0x00615934, u32(u32)> byte_group;
inline constexpr guest::Function<0x00615bcc, u32(u32, u32, u32)> creature_appears_at_time;
inline constexpr guest::Function<0x00616058, u32(u32, u32, u32)> creature_season_check;
inline constexpr guest::Function<0x006166dc, u32(u32, u32)> ItemOffsetPair__from_item;
inline constexpr guest::Function<0x00616c68, u32(u32, u32, u32, u32)> catalog_index_to_category;
inline constexpr guest::Function<0x007701f8, u32(u32, u32, u32, u32)> contains_item_for;

struct __attribute__((packed)) FishMgrPickSpeciesFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u8 unknown_20[0x4];  // (not read or written by name)
};
GUEST_OFFSET(FishMgrPickSpeciesFrame, word_0, 0x0);
GUEST_OFFSET(FishMgrPickSpeciesFrame, word_4, 0x4);
GUEST_OFFSET(FishMgrPickSpeciesFrame, word_8, 0x8);
GUEST_OFFSET(FishMgrPickSpeciesFrame, word_c, 0xc);
GUEST_OFFSET(FishMgrPickSpeciesFrame, word_10, 0x10);
GUEST_OFFSET(FishMgrPickSpeciesFrame, word_14, 0x14);
GUEST_OFFSET(FishMgrPickSpeciesFrame, word_18, 0x18);
GUEST_OFFSET(FishMgrPickSpeciesFrame, word_1c, 0x1c);
GUEST_SIZE(FishMgrPickSpeciesFrame, 0x24);

u32 FishMgr__pick_species(u32 fish_mgr, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<FishMgrPickSpeciesFrame> frame;  // the original's stack frame
    u32 r5 = 0;
    u32 r0_4 = 0;
    u32 r8 = r1;
    u32 r0_1 = read_global_object_byte(fish_mgr, r1, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 == 3u) {
        frame->word_1c = 0x27;
        frame->word_14 = 0;
        catalog_index_to_category(frame.at(0x14).addr(), frame.at(0x1c).addr(), r8, guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        u32 r0_3 = frame->word_1c;
        if (r0_3 == 0x27u || r0_3 == 0x28u) {
            r0_4 = get_current_player(r0_3, r1_1);
            r1_1 = guest::cpu()->r[1];
            if (r0_4 == 0) {
                return r0_4;
            }
            frame->word_10 = r0_4 + 0x6c20u;
            u32 r0_5 = *gptr<u8>((r8 * 3u + (r8 << 4) << 2) + 0x86a2c8u + 0x18u);
            u32 r7 = !(r0_5 >= 5u);
            u32 now_2 = game_time_now(r0_5, 0x86a2c8u);
            u32 r0_7 = byte_group(now_2);
            gptr<Local_0025244c_r0_8> r0_8 = gptr<Local_0025244c_r0_8>(frame->word_1c == 0x28u ? fish_mgr + 0x12f8u : r7 == 0 ? fish_mgr + 0x12f7u : fish_mgr + 0x12f6u);
            u32 r2_4 = r0_8->byte_0;
            u32 r10 = fish_mgr + 0x12f9u;
            u32 r11 = fish_mgr + 0x12fcu;
            u32 r9 = fish_mgr + 0x12ffu;
            if (r2_4 != r0_7) {
                r0_8->byte_0 = u8(r0_7);
                if (frame->word_1c == 0x27u) {
                    u32 r0_9 = creature_appears_at_time(r7, now_2, r2_4);
                    r5 = r7 == 0 ? r11 : r10;
                    ItemOffsetPair__from_item(r5, r0_9);
                    r3 = guest::cpu()->r[3];
                } else {
                    ItemOffsetPair__from_item(r9, creature_season_check(now_2, r0_7, r2_4));
                    r3 = guest::cpu()->r[3];
                    r5 = r9;
                }
                u32 r6 = 0u;
                frame->word_18 = 0;
                u32 i = r6;
                frame->word_0 = 0x27;
                frame->word_4 = 0;
                frame->word_8 = 0;
                frame->word_c = 0;
                do {
                    u32 r2_7 = *gptr<u8>(r5 + i);
                    if (r2_7 < 0x6bu) {
                        catalog_index_to_category(frame.at(0x18).addr(), frame.at(0).addr(), r2_7, r3);
                        r3 = guest::cpu()->r[3];
                        u32 r0_12 = frame->word_0;
                        if (r0_12 == 0x27u || r0_12 == 0x28u) {
                            u32 contains_item = contains_item_for(frame->word_10, r0_12 & 0xffu, frame->word_18, r3);
                            r3 = guest::cpu()->r[3];
                            if (contains_item != 0) {
                                r6 += 1u;
                                *gptr<u32>(frame.at(4).addr() + (i << 2)) = 1;
                                if (i == 2u) {
                                    u32 r0_15 = 0u;
                                    if (r6 == 2u) {
                                        r0_15 = frame->word_4;
                                        if (r0_15 != 0) {
                                            r0_15 = 1u;
                                        }
                                    }
                                    u32 r1_6 = *gptr<u8>(r5 + r0_15);
                                    *gptr<u8>(r5 + r0_15) = *gptr<u8>(r5 + 2u);
                                    *gptr<u8>(r5 + 2u) = u8(r1_6);
                                }
                            }
                        }
                    }
                    i += 1u;
                    guest::preempt();
                } while (s32(i) < 3);
            }
            u32 r0_16 = frame->word_1c;
            if (r0_16 != 0x28u) {
                r9 = r7 == 0 ? r11 : r10;
            }
            r1_1 = *gptr<u8>(r9);
            u32 zf_1 = r1_1 == r8;
            if (!zf_1) {
                r1_1 = *gptr<u8>(r9 + 1u);
                zf_1 = r1_1 == r8;
            }
            if (!zf_1) {
                gptr<Local_0025244c_r3_8> r3_8 = gptr<Local_0025244c_r3_8>(frame.at(0x10).addr());
                r0_4 = contains_item_for(r3_8->word_0, r0_16 & 0xffu, r3_8->word_4, r3_8.addr());
                r1_1 = guest::cpu()->r[1];
                if (r0_4 == 0) {
                    return r0_4;
                }
            }
        }
    }
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_0025244c
GUEST_EXPORT_FRAMED(0x0025244c, d_0025244c::FishMgr__pick_species, 0x4ff0);  // pushes {i, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_00252850: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the fish's state to gone (3).
namespace d_00252850 {

struct __attribute__((packed)) FishMgr {
    u8 unknown_0[0x11d1];  // (not used here)
    u8 byte_11d1;
};
GUEST_OFFSET(FishMgr, byte_11d1, 0x11d1);


void FishMgr__set_gone(gptr<FishMgr> fish_mgr) {
    fish_mgr->byte_11d1 = 3;
}

}  // namespace d_00252850
GUEST_EXPORT(0x00252850, d_00252850::FishMgr__set_gone);

// f_0025286c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the slot does not belong here; writes whether its guest entry is still pending.
namespace d_0025286c {

struct __attribute__((packed)) Local_0025286c_r0_2 {
    u8 unknown_0[0x3];  // (not used here)
    u8 byte_3;
    u8 byte_4;
    u8 byte_5;
};
GUEST_OFFSET(Local_0025286c_r0_2, byte_3, 0x3);
GUEST_OFFSET(Local_0025286c_r0_2, byte_4, 0x4);
GUEST_OFFSET(Local_0025286c_r0_2, byte_5, 0x5);

inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> current_net_signed_value;
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32)> current_net_station;
inline constexpr guest::Function<0x0061a7a0, u32(u32, u32, u32)> net_guest_entry_is_ready;

u32 FishMgr__slot_is_free_here(u32 fish_mgr, u32 r1, u32 r2) {
    u32 r2_1 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r7_1 = 0;
    u32 r0_4 = 0;
    u32 r6_1 = r1;
    u32 r5 = r2;
    u32 r0_1 = current_net_signed_value(fish_mgr, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        return r0_1;
    }
    gptr<Local_0025286c_r0_2> r0_2 = gptr<Local_0025286c_r0_2>(fish_mgr + r6_1 * 6u + 0xe4u);
    u32 r4 = 0u;
    u32 r6 = r4;
    r1 = u32(r0_2->byte_5) << 0x19;
    if (s32(r1) < 0) {
        goto L_2528d4;
    }
    r2_1 = r0_2->byte_4;
    r0_3 = u32(r0_2->byte_3) >> 7;
    r1_1 = r2_1 & 3u;
    r7_1 = r0_3 + (r1_1 << 1);
    if (r7_1 == 4u) {
        goto L_2528e4;
    }
    r0_4 = current_net_station(r0_3, r1_1, r2_1);
    r1 = guest::cpu()->r[1];
    if (r7_1 != r0_4) {
        goto L_2528d4;
    }
L_2528d0:;
    r4 = 1u;
L_2528d4:;
    r0_1 = r4 ^ 1u;
    if (r5 != 0) {
        *gptr<u8>(r5) = u8(r6);
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
L_2528e4:;
    u32 r0_5 = net_guest_entry_is_ready(r0_3, r1_1, r2_1);
    r1 = guest::cpu()->r[1];
    if (r0_5 == 0) {
        r6 = 1u;
        guest::preempt();
        goto L_2528d4;
    }
    guest::preempt();
    goto L_2528d0;
}

}  // namespace d_0025286c
GUEST_EXPORT_FRAMED(0x0025286c, d_0025286c::FishMgr__slot_is_free_here, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00253bc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The fish manager's flag at +0x118a, or 0 without a manager.
namespace d_00253bc4 {

inline constexpr u32 fish_manager_address = 0x0094f268u;
inline guest::global<u32, 0x0094f268> fish_manager;

u32 FishMgr__flag_118a() {
    u32 r0_1 = *fish_manager;
    if (r0_1 != 0) {
        r0_1 = *gptr<u8>(r0_1 + 0x118au);
    }
    return r0_1;
}

}  // namespace d_00253bc4
GUEST_EXPORT(0x00253bc4, d_00253bc4::FishMgr__flag_118a);

// f_002549b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When the slot (below 15) is in use: its cell's x and z.
namespace d_002549b4 {

struct __attribute__((packed)) FishMgrSlotCellArg1 {
    u32 word_0;
};
GUEST_OFFSET(FishMgrSlotCellArg1, word_0, 0x0);

struct __attribute__((packed)) FishMgrSlotCellArg2 {
    u32 word_0;
};
GUEST_OFFSET(FishMgrSlotCellArg2, word_0, 0x0);

struct __attribute__((packed)) Local_002549b4_r0_1 {
    u8 unknown_0[0x3fa];  // (not used here)
    u8 byte_3fa;
    u8 byte_3fb;
    u8 byte_3fc;
};
GUEST_OFFSET(Local_002549b4_r0_1, byte_3fa, 0x3fa);
GUEST_OFFSET(Local_002549b4_r0_1, byte_3fb, 0x3fb);
GUEST_OFFSET(Local_002549b4_r0_1, byte_3fc, 0x3fc);


u32 FishMgr__slot_cell(u32 fish_mgr, gptr<FishMgrSlotCellArg1> arg1, gptr<FishMgrSlotCellArg2> arg2, u32 r3) {
    if (r3 >= 0xfu) {
        return 0u;
    }
    gptr<Local_002549b4_r0_1> r0_1 = gptr<Local_002549b4_r0_1>(fish_mgr + r3 * 0xf0u);
    if (r0_1->byte_3fa == 0) {
        return 0u;
    }
    arg1->word_0 = u32(r0_1->byte_3fb);
    arg2->word_0 = u32(r0_1->byte_3fc);
    return 1u;
}

}  // namespace d_002549b4
GUEST_EXPORT(0x002549b4, d_002549b4::FishMgr__slot_cell);

// f_002549f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the species appears at one of the day's three sample hours (in the place, or in the season); with
// `rain_only`, only in rain or snow.
namespace d_002549f0 {

inline constexpr guest::Function<0x0056cce4, u32(u32, u32, u32, u32)> TimeStamp__set_hour;
inline constexpr guest::Function<0x00615bcc, u32(u32, u32)> creature_appears_at_time;
inline constexpr guest::Function<0x00616058, u32(u32)> creature_season_check;
inline constexpr guest::Function<0x0062f04c, u32(u32, u32, u32, u32)> weather_type_at;

struct __attribute__((packed)) SpeciesAppearsTodayFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(SpeciesAppearsTodayFrame, word_0, 0x0);
GUEST_OFFSET(SpeciesAppearsTodayFrame, word_4, 0x4);
GUEST_OFFSET(SpeciesAppearsTodayFrame, word_8, 0x8);
GUEST_SIZE(SpeciesAppearsTodayFrame, 0x10);

u32 species_appears_today(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<SpeciesAppearsTodayFrame> frame;  // the original's stack frame
    u32 r0_3 = 0;
    u32 r6 = r0;
    u32 r7 = r1;
    u32 r10 = 0x846bc8u;
    u32 r5 = *frame.at<u32>(0x30);
    u32 r9 = r2;
    u32 r8 = r3;
    u32 i = 0u;
    do {
        u32 r1_1 = *gptr<u32>(r5 + 4);
        u32 r2_1 = *gptr<u32>(r5 + 8);
        frame->word_0 = *gptr<u32>(r5);
        frame->word_4 = r1_1;
        frame->word_8 = r2_1;
        u32 r1_2 = *gptr<s8>(r10 + i);
        TimeStamp__set_hour(frame.at(0).addr(), r1_2, r2_1, r3);
        if (r7 != 0) {
            r0 = creature_appears_at_time(r9, frame.at(0).addr());
            r1 = guest::cpu()->r[1];
            r3 = guest::cpu()->r[3];
        } else {
            r0 = creature_season_check(frame.at(0).addr());
            r1 = guest::cpu()->r[1];
            r3 = guest::cpu()->r[3];
        }
L_254a54:;
        u32 r2_3 = *gptr<u8>(r0);
        if (r2_3 == r6) {
            r0_3 = 1u;
        } else {
            r1 = *gptr<u16>(r0 + 2u);
            if (r1 != 0x64u) {
                r0 += 4u;
                guest::preempt();
                goto L_254a54;
            }
            r0_3 = 0u;
        }
        if ((r0_3 & r8) != 0) {
            u32 weather_type = weather_type_at(frame.at(0).addr(), r1, r2_3, r3);
            r1 = guest::cpu()->r[1];
            r3 = guest::cpu()->r[3];
            if (weather_type == 3u || weather_type == 4u || weather_type == 5u || weather_type == 6u) {
                return 1u;
            }
            goto L_254abc;
        }
        if (r0_3 == 0) {
            goto L_254abc;
        }
        guest::cpu()->r[1] = r1;
        return 1u;
L_254abc:;
        i += 1u;
        guest::preempt();
    } while (s32(i) < 3);
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_002549f0
GUEST_EXPORT_FRAMED(0x002549f0, d_002549f0::species_appears_today, 0x47f0);  // pushes {i, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0025591c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The fish information of a fish item (category 0x27), or 0.
namespace d_0025591c {

inline constexpr guest::Function<0x0025577c, u32(u32, u32, u32, u32)> FishInfo__for_offset;
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> Item__category;
inline constexpr guest::Function<0x002ffad8, u32(u32)> item_offset_in_category;

u32 Item__fish_info(u32 item) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 category = Item__category(item, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (category != 0x27u) {
        return 0u;
    }
    u32 offset = item_offset_in_category(item);
    frame.release();
    return FishInfo__for_offset(offset & 0xffu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0025591c
GUEST_EXPORT(0x0025591c, d_0025591c::Item__fish_info);

// f_0025594c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The actor of the slot.
namespace d_0025594c {


u32 FishMgr__slot_actor(u32 fish_mgr, u32 r1) {
    u32 r1_1 = r1 * 3u;
    u32 r0_1 = *gptr<u32>(fish_mgr + (r1_1 << 3) + 0x24u);
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0025594c
GUEST_EXPORT(0x0025594c, d_0025594c::FishMgr__slot_actor);

// f_00255dfc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts a cast at the position, with the flag.
namespace d_00255dfc {

inline constexpr u32 fishing_instance_address = 0x0094f4f0u;
inline guest::global<u32, 0x0094f4f0> fishing_instance;
inline constexpr guest::Function<0x00255f1c, u32(u32, u32, u32, u32)> Fishing__cast;

struct __attribute__((packed)) FishingStartCastAtFrame {
    u32 word_0;
};
GUEST_OFFSET(FishingStartCastAtFrame, word_0, 0x0);
GUEST_SIZE(FishingStartCastAtFrame, 0x4);

u32 Fishing__start_cast_at(u32 fishing, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<FishingStartCastAtFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r12_1 = *fishing_instance;
    if (r12_1 == 0) {
        guest::cpu()->r[1] = fishing_instance_address;
        return 0u;
    }
    frame->word_0 = r2;
    return Fishing__cast(r12_1 + 0x14u, fishing, r1, 1u);
}

}  // namespace d_00255dfc
GUEST_EXPORT_FRAMED(0x00255dfc, d_00255dfc::Fishing__start_cast_at, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00255e38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts a cast at the position.
namespace d_00255e38 {

inline constexpr u32 fishing_instance_address = 0x0094f4f0u;
inline guest::global<u32, 0x0094f4f0> fishing_instance;
inline constexpr guest::Function<0x00255f1c, u32(u32, u32, u32, u32)> Fishing__cast;

struct __attribute__((packed)) FishingStartCastFrame {
    u32 word_0;
};
GUEST_OFFSET(FishingStartCastFrame, word_0, 0x0);
GUEST_SIZE(FishingStartCastFrame, 0x4);

u32 Fishing__start_cast(u32 fishing, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<FishingStartCastFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r12_1 = *fishing_instance;
    if (r12_1 == 0) {
        return 0u;
    }
    frame->word_0 = r1;
    return Fishing__cast(r12_1 + 0x14u, fishing, 0u, 1u);
}

}  // namespace d_00255e38
GUEST_EXPORT_FRAMED(0x00255e38, d_00255e38::Fishing__start_cast, 0x4000);  // pushes {lr} first, as the original

// f_00255ebc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The sound kind of the water at the position (0x4a, 0x50 or 0x56), or 0 when there is none.
namespace d_00255ebc {

inline constexpr guest::Function<0x006dc248, u32(u32, u32, u32, u32)> water_at_position;

struct __attribute__((packed)) FishingWaterSoundKindFrame {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
    u8 unknown_9[0xf];  // (not read or written by name)
};
GUEST_OFFSET(FishingWaterSoundKindFrame, word_0, 0x0);
GUEST_OFFSET(FishingWaterSoundKindFrame, word_4, 0x4);
GUEST_OFFSET(FishingWaterSoundKindFrame, byte_8, 0x8);
GUEST_SIZE(FishingWaterSoundKindFrame, 0x18);

u32 Fishing__water_sound_kind(u32 fishing) {
    guest::StackFrameOf<FishingWaterSoundKindFrame> frame;  // the original's stack frame
    u32 r4_1 = fishing;
    frame->word_0 = frame.at(8).addr();
    u32 r0_1 = frame.at(4).addr();
    u32 r0_2 = water_at_position(r0_1, frame.at(0xc).addr(), frame.at(0x10).addr(), frame.at(0x14).addr());
    if (r0_2 == 0) {
        return r0_2;
    }
    if (s32(frame->word_4) < 0) {
        r4_1 = 0u;
    }
    if (frame->byte_8 != 0) {
        return 0x50u;
    }
    return r4_1 == 0 ? 0x4au : 0x56u;
}

}  // namespace d_00255ebc
GUEST_EXPORT_FRAMED(0x00255ebc, d_00255ebc::Fishing__water_sound_kind, 0x4010);  // pushes {r4, lr} first, as the original

// f_00255f1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts the cast at the position when idle, finding the water there and its kind.
namespace d_00255f1c {

struct __attribute__((packed)) Fishing {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0xe0];  // (not used here)
    u8 byte_ec;
    u8 unknown_ed[0x3];  // (not used here)
    u32 word_f0;
    u32 word_f4;
    u8 unknown_f8[0xc];  // (not used here)
    u8 byte_104;
    u8 byte_105;
    u8 byte_106;
};
GUEST_OFFSET(Fishing, word_0, 0x0);
GUEST_OFFSET(Fishing, word_4, 0x4);
GUEST_OFFSET(Fishing, word_8, 0x8);
GUEST_OFFSET(Fishing, byte_ec, 0xec);
GUEST_OFFSET(Fishing, word_f0, 0xf0);
GUEST_OFFSET(Fishing, word_f4, 0xf4);
GUEST_OFFSET(Fishing, byte_104, 0x104);
GUEST_OFFSET(Fishing, byte_105, 0x105);
GUEST_OFFSET(Fishing, byte_106, 0x106);

struct __attribute__((packed)) FishingCastArg1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(FishingCastArg1, word_0, 0x0);
GUEST_OFFSET(FishingCastArg1, word_4, 0x4);
GUEST_OFFSET(FishingCastArg1, word_8, 0x8);

struct __attribute__((packed)) Local_00255f1c_r5_1 {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
    u8 byte_5;
};
GUEST_OFFSET(Local_00255f1c_r5_1, byte_4, 0x4);
GUEST_OFFSET(Local_00255f1c_r5_1, byte_5, 0x5);

inline constexpr guest::Function<0x002d5bc8, u32(u32, u32, u32, u32)> change_mode_002d5bc8;
inline constexpr guest::Function<0x006dc248, u32(u32, u32, u32, u32)> water_at_position;

struct __attribute__((packed)) FishingCastFrame {
    u32 word_0;
    u8 byte_4;
    u8 unknown_5[0x7];  // (not read or written by name)
};
GUEST_OFFSET(FishingCastFrame, word_0, 0x0);
GUEST_OFFSET(FishingCastFrame, byte_4, 0x4);
GUEST_SIZE(FishingCastFrame, 0xc);

u32 Fishing__cast(gptr<Fishing> fishing, gptr<FishingCastArg1> arg1, u32 r2, u32 r3) {
    guest::StackFrameOf<FishingCastFrame> frame;  // the original's stack frame
    u32 r0 = fishing.addr();
    u32 r0_1 = 0;
    u32 r1_1 = *frame.at<u32>(0x28);
    if (fishing->byte_ec != 0) {
        r0_1 = 0u;
    } else {
        fishing->byte_105 = 0;
        gptr<Local_00255f1c_r5_1> r5_1 = gptr<Local_00255f1c_r5_1>(r0 + 0x100u);
        fishing->byte_104 = 0;
        change_mode_002d5bc8(r0 + 0xcu, r1_1, r2, r3);
        fishing->word_0 = arg1->word_0;
        fishing->word_4 = arg1->word_4;
        fishing->word_8 = arg1->word_8;
        frame->word_0 = frame.at(4).addr();
        frame->byte_4 = 0;
        u32 r0_4 = water_at_position(r0 + 0xf4u, r0 + 0xf8u, r0 + 0x100u, r0 + 0xfcu);
        r1_1 = guest::cpu()->r[1];
        if (r0_4 != 0) {
            u32 r1_3 = fishing->word_f4;
            fishing->byte_ec = 1;
            if (s32(r1_3) < 0) {
                fishing->byte_104 = 0;
            }
            r1_1 = frame->byte_4;
            if (r1_1 == 0) {
                fishing->byte_104 = u8(r2);
                fishing->byte_105 = u8(r3);
                fishing->byte_106 = 0;
                if (r5_1->byte_4 == 0) {
                    fishing->word_f0 = 0xc;
                } else {
                    fishing->word_f0 = 0;
                    goto L_256010;
                }
                goto L_256004;
            }
            fishing->byte_104 = 0;
            fishing->byte_106 = 1;
            fishing->word_f0 = 0;
            fishing->byte_105 = u8(r3);
        }
        if (r5_1->byte_4 != 0) {
            goto L_256010;
        }
L_256004:;
        r0_1 = r5_1->byte_5;
        if (r0_1 == 0) {
            guest::cpu()->r[1] = r1_1;
            return r0_1;
        }
L_256010:;
        r0_1 = 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_00255f1c
GUEST_EXPORT_FRAMED(0x00255f1c, d_00255f1c::Fishing__cast, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_0025654c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Deletes a fixed light: its fragment light, then the light base.
namespace d_0025654c {

inline constexpr guest::Function<0x004ed3dc, u32(u32, u32, u32, u32)> g3d__DirectionalFragmentLight__virtual_3;
inline constexpr guest::Function<0x00521a2c, u32(u32)> BsLightBase__do_delete;

u32 BsLightFixBase__do_delete(u32 bs_light_fix_base) {
    u32 directional_fragment_light = bs_light_fix_base + 0x5cu;
    g3d__DirectionalFragmentLight__virtual_3(directional_fragment_light, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    BsLightBase__do_delete(directional_fragment_light);
    return 2u;
}

}  // namespace d_0025654c
GUEST_EXPORT_FRAMED(0x0025654c, d_0025654c::BsLightFixBase__do_delete, 0x4010);  // pushes {r4, lr} first, as the original

// f_00256588: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a fixed light: a light base with a directional fragment light.
namespace d_00256588 {

struct __attribute__((packed)) BsLightFixBase {
    u32 vtable;
    u8 unknown_4[0x14];  // (not used here)
    u32 fix_light_hio_node_vtable;
    u16 half_1c;
    u8 byte_1e;
    u8 byte_1f;
    u8 unknown_20[0x30];  // (not used here)
    u16 half_50;
    u16 half_52;
    u32 word_54;
    u8 byte_58;
    u8 byte_59;
    u8 unknown_5a[0x2];  // (not used here)
    u32 directional_fragment_light_vtable;
    u8 unknown_60[0x124];  // (not used here)
    float float_184;
    float float_188;
    float float_18c;
    float float_190;
    float float_194;
    float float_198;
    float float_19c;
    float float_1a0;
    float float_1a4;
    float float_1a8;
    float float_1ac;
    float float_1b0;
    float float_1b4;
    float float_1b8;
    float float_1bc;
};
GUEST_OFFSET(BsLightFixBase, vtable, 0x0);
GUEST_OFFSET(BsLightFixBase, fix_light_hio_node_vtable, 0x18);
GUEST_OFFSET(BsLightFixBase, half_1c, 0x1c);
GUEST_OFFSET(BsLightFixBase, byte_1e, 0x1e);
GUEST_OFFSET(BsLightFixBase, byte_1f, 0x1f);
GUEST_OFFSET(BsLightFixBase, half_50, 0x50);
GUEST_OFFSET(BsLightFixBase, half_52, 0x52);
GUEST_OFFSET(BsLightFixBase, word_54, 0x54);
GUEST_OFFSET(BsLightFixBase, byte_58, 0x58);
GUEST_OFFSET(BsLightFixBase, byte_59, 0x59);
GUEST_OFFSET(BsLightFixBase, directional_fragment_light_vtable, 0x5c);
GUEST_OFFSET(BsLightFixBase, float_184, 0x184);
GUEST_OFFSET(BsLightFixBase, float_188, 0x188);
GUEST_OFFSET(BsLightFixBase, float_18c, 0x18c);
GUEST_OFFSET(BsLightFixBase, float_190, 0x190);
GUEST_OFFSET(BsLightFixBase, float_194, 0x194);
GUEST_OFFSET(BsLightFixBase, float_198, 0x198);
GUEST_OFFSET(BsLightFixBase, float_19c, 0x19c);
GUEST_OFFSET(BsLightFixBase, float_1a0, 0x1a0);
GUEST_OFFSET(BsLightFixBase, float_1a4, 0x1a4);
GUEST_OFFSET(BsLightFixBase, float_1a8, 0x1a8);
GUEST_OFFSET(BsLightFixBase, float_1ac, 0x1ac);
GUEST_OFFSET(BsLightFixBase, float_1b0, 0x1b0);
GUEST_OFFSET(BsLightFixBase, float_1b4, 0x1b4);
GUEST_OFFSET(BsLightFixBase, float_1b8, 0x1b8);
GUEST_OFFSET(BsLightFixBase, float_1bc, 0x1bc);

inline constexpr u32 vtable_BsLightFixBase_rec = 0x008eeca4u;
inline constexpr u32 vtable_BsLightFixBase__FixLightHioNode = 0x008fa388u;
inline constexpr u32 vtable_g3d__DirectionalFragmentLight = 0x00902a8cu;
inline guest::global<u32, 0x00847368> global_00847368;
inline guest::global<u32, 0x0084736c> global_0084736c;
inline guest::global<u32, 0x00847370> global_00847370;
inline guest::global<u32, 0x00847374> global_00847374;
inline guest::global<u32, 0x00847378> global_00847378;
inline guest::global<u32, 0x0084737c> global_0084737c;
inline guest::global<u32, 0x00847380> global_00847380;
inline guest::global<u32, 0x00847388> global_00847388;
inline guest::global<u32, 0x0084738c> global_0084738c;
inline guest::global<u32, 0x00847390> global_00847390;
inline guest::global<u32, 0x00847394> global_00847394;
inline guest::global<u32, 0x00847398> global_00847398;
inline guest::global<u32, 0x0084739c> global_0084739c;
inline constexpr guest::Function<0x001c2764, u32(u32, u32, u32, u32)> BsLightBase__BsLightBase;
inline constexpr guest::Function<0x004ed3fc, u32(u32)> construct_fragment_light;

u32 BsLightFixBase__BsLightFixBase(gptr<BsLightFixBase> bs_light_fix_base, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2, float S3, float S4, float S5, float S6, float S7) {
    BsLightBase__BsLightBase(bs_light_fix_base.addr(), r1, r2, r3);
    bs_light_fix_base->vtable = vtable_BsLightFixBase_rec;
    bs_light_fix_base->fix_light_hio_node_vtable = vtable_BsLightFixBase__FixLightHioNode;
    bs_light_fix_base->byte_58 = 1;
    bs_light_fix_base->byte_59 = 0;
    bs_light_fix_base->half_1c = 0;
    bs_light_fix_base->byte_1e = 0;
    bs_light_fix_base->byte_1f = 0;
    bs_light_fix_base->half_50 = 0;
    bs_light_fix_base->half_52 = 0;
    bs_light_fix_base->word_54 = 0;
    construct_fragment_light(bs_light_fix_base.addr() + 0x5cu);
    bs_light_fix_base->directional_fragment_light_vtable = vtable_g3d__DirectionalFragmentLight;
    float S0_1 = 2.3418052e-38f;
    float S1_1 = std::bit_cast<float>(*global_00847368);
    float S2_1 = std::bit_cast<float>(*global_0084736c);
    float S3_1 = std::bit_cast<float>(*global_00847370);
    float S4_1 = std::bit_cast<float>(*global_00847374);
    float S5_1 = std::bit_cast<float>(*global_00847378);
    float S6_1 = std::bit_cast<float>(*global_0084737c);
    float S7_1 = std::bit_cast<float>(*global_00847380);
    bs_light_fix_base->float_184 = S0_1;
    bs_light_fix_base->float_188 = S1_1;
    bs_light_fix_base->float_18c = S2_1;
    bs_light_fix_base->float_190 = S3_1;
    bs_light_fix_base->float_194 = S4_1;
    bs_light_fix_base->float_198 = S5_1;
    bs_light_fix_base->float_19c = S6_1;
    bs_light_fix_base->float_1a0 = S7_1;
    float S0_2 = 1.0f;
    float S1_2 = std::bit_cast<float>(*global_00847388);
    float S2_2 = std::bit_cast<float>(*global_0084738c);
    float S3_2 = std::bit_cast<float>(*global_00847390);
    float S4_2 = std::bit_cast<float>(*global_00847394);
    float S5_2 = std::bit_cast<float>(*global_00847398);
    float S6_2 = std::bit_cast<float>(*global_0084739c);
    bs_light_fix_base->float_1a4 = S0_2;
    bs_light_fix_base->float_1a8 = S1_2;
    bs_light_fix_base->float_1ac = S2_2;
    bs_light_fix_base->float_1b0 = S3_2;
    bs_light_fix_base->float_1b4 = S4_2;
    bs_light_fix_base->float_1b8 = S5_2;
    bs_light_fix_base->float_1bc = S6_2;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    return bs_light_fix_base.addr();
}

}  // namespace d_00256588
GUEST_EXPORT_FRAMED(0x00256588, d_00256588::BsLightFixBase__BsLightFixBase, 0x4010);  // pushes {r4, lr} first, as the original

// f_00256664: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the fade step (-1/frames).
namespace d_00256664 {

struct __attribute__((packed)) Fader {
    u8 unknown_0[0x2b4];  // (not used here)
    float float_2b4;
};
GUEST_OFFSET(Fader, float_2b4, 0x2b4);


void Fader__set_fade_out_frames(gptr<Fader> fader, u32 r1, float S0_unused, float S1) {
    float S0_1 = -1.0f;
    if (s32(r1) <= 0) {
        fader->float_2b4 = S0_1;
        guest::cpu()->s[0] = S0_1;
        return;
    }
    float S1_1 = float(s32(r1));
    fader->float_2b4 = S0_1 / S1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_00256664
GUEST_EXPORT(0x00256664, d_00256664::Fader__set_fade_out_frames);

// f_0025668c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the two fade steps (1/frames) and resets their progress.
namespace d_0025668c {

struct __attribute__((packed)) Fader {
    u8 unknown_0[0x2b0];  // (not used here)
    float float_2b0;
    float float_2b4;
    float float_2b8;
    float float_2bc;
};
GUEST_OFFSET(Fader, float_2b0, 0x2b0);
GUEST_OFFSET(Fader, float_2b4, 0x2b4);
GUEST_OFFSET(Fader, float_2b8, 0x2b8);
GUEST_OFFSET(Fader, float_2bc, 0x2bc);


void Fader__set_frames(gptr<Fader> fader, u32 r1, u32 r2) {
    float S0_1 = 1.0f;
    if (s32(r1) <= 0) {
        fader->float_2b4 = S0_1;
    } else {
        fader->float_2b4 = S0_1 / float(s32(r1));
    }
    float S1_1 = 0.0f;
    fader->float_2b0 = S1_1;
    if (s32(r2) <= 0) {
        fader->float_2bc = S0_1;
        fader->float_2b8 = S1_1;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return;
    }
    fader->float_2bc = S0_1 / float(s32(r2));
    fader->float_2b8 = S1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_0025668c
GUEST_EXPORT(0x0025668c, d_0025668c::Fader__set_frames);

// f_002566e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Applies the transform and the two values of the current season's variant (0x3c bytes each).
namespace d_002566e0 {

struct __attribute__((packed)) Actor {
    u8 unknown_0[0x1b8];  // (not used here)
    u16 half_1b8;
    u16 half_1ba;
};
GUEST_OFFSET(Actor, half_1b8, 0x1b8);
GUEST_OFFSET(Actor, half_1ba, 0x1ba);

struct __attribute__((packed)) Local_002566e0_r0_2 {
    u8 unknown_0[0x11e];  // (not used here)
    u8 byte_11e;
};
GUEST_OFFSET(Local_002566e0_r0_2, byte_11e, 0x11e);

inline constexpr u32 season_state_address = 0x0095bf68u;
inline guest::global<u32, 0x0095bf68> season_state;
inline constexpr guest::Function<0x001c244c, u32(u32, u32, u32)> Transform__lerp;

u32 Actor__apply_season_variant(gptr<Actor> actor) {
    float S0_1 = 1.0f;
    u32 r2_1 = actor.addr() + u32(*gptr<u8>(*season_state + 0x11eu)) * 0x3cu + 0x1fcu;
    guest::cpu()->s[0] = S0_1;
    Transform__lerp(actor.addr() + 0x184u, actor.addr() + 0x1c0u, r2_1);
    gptr<Local_002566e0_r0_2> r0_2 = gptr<Local_002566e0_r0_2>(*season_state);
    actor->half_1b8 = *gptr<u16>(actor.addr() + u32(r0_2->byte_11e) * 0x3cu + 0x230u);
    u32 r0_3 = *gptr<u16>(actor.addr() + u32(r0_2->byte_11e) * 0x3cu + 0x232u);
    actor->half_1ba = u16(r0_3);
    guest::cpu()->r[1] = actor.addr() + 0x100u;
    return r0_3;
}

}  // namespace d_002566e0
GUEST_EXPORT_FRAMED(0x002566e0, d_002566e0::Actor__apply_season_variant, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00257660: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00257660 {

struct __attribute__((packed)) script__WordFix_9u_ {
    u8 unknown_0[0x2872];  // (not used here)
    u8 byte_2872;
};
GUEST_OFFSET(script__WordFix_9u_, byte_2872, 0x2872);

struct __attribute__((packed)) Local_00257660_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00257660_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_00257660_ea_2, word_4, 0x4);

inline constexpr u32 vtable_script__WordFix_21u__rec = 0x00909d20u;
inline constexpr u32 vtable_script__WordFix_9u__rec = 0x0090a3e8u;
inline guest::global<u32, 0x00aaf14c> current_player_data;
inline constexpr guest::Function<0x002b9aa4, u32(u32, u32)> ItemNameLabel__set_visible;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x0056d5dc, u32(u32, u32)> script__WordFix_21u___WordFix_0056d5dc;
inline constexpr guest::Function<0x005d4a78, u32(u32, u32, u32, u32)> call_virtual_slot_2;
inline constexpr guest::Function<0x005e34c4, u32(u32, u32, u32, u32)> MessageRef__set;
inline constexpr guest::Function<0x005e4988, u32(u32, u32, u32, u32)> store_byte_constant_pack_0x4_005e4988;
inline constexpr guest::Function<0x005e4994, u32(u32, u32, u32, u32)> script__CapitalTopEngine__CapitalTopEngine_005e4994;
inline constexpr guest::Function<0x005e49c0, u32(u32, u32, u32)> MessageChoice__setup;
inline constexpr guest::Function<0x005e8498, u32(u32, u32)> DialogBox__virtual_5;
inline constexpr guest::Function<0x006d1e64, u32(u32)> get_state_30;
inline constexpr guest::Function<0x00712838, u32(u32, u32)> record_address;
inline constexpr guest::Function<0x00712850, u32(u32, u32)> byte_from_table_5460;
inline constexpr guest::Function<0x0071af38, u32(u32, u32, u32, u32)> value_c8_of_pointer_104;

struct __attribute__((packed)) SetupUiMessageRefsFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 object_c_vtable;
    u8 unknown_10[0x40];  // (not read or written by name)
    u32 object_50_vtable;
    u8 unknown_54[0x28];  // (not read or written by name)
    u32 object_7c_vtable;
    u8 unknown_80[0x8c];  // (not read or written by name)
};
GUEST_OFFSET(SetupUiMessageRefsFrame, word_0, 0x0);
GUEST_OFFSET(SetupUiMessageRefsFrame, word_4, 0x4);
GUEST_OFFSET(SetupUiMessageRefsFrame, word_8, 0x8);
GUEST_OFFSET(SetupUiMessageRefsFrame, object_c_vtable, 0xc);
GUEST_OFFSET(SetupUiMessageRefsFrame, object_50_vtable, 0x50);
GUEST_OFFSET(SetupUiMessageRefsFrame, object_7c_vtable, 0x7c);
GUEST_SIZE(SetupUiMessageRefsFrame, 0x10c);

void setup_ui_message_refs(gptr<script__WordFix_9u_> word_fix_9u, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<SetupUiMessageRefsFrame> frame;  // the original's stack frame
    u32 r0 = word_fix_9u.addr();
    u32 r5_1 = *current_player_data + 0x2cu;
    u32 r0_4 = record_address(r5_1, byte_from_table_5460(r5_1, value_c8_of_pointer_104(r0 + 0x464u, r1, r2, r3) & 0xffu));
    u32 r0_7 = get_state_30(script__WordFix_21u___WordFix_0056d5dc(frame.at(0xc).addr(), r0_4));
    u32 r5 = r0 + 0x22b4u;
    if (*gptr<u8>(r0_7 + 0x40u) == 0) {
        u32 item_name_label = r5 + 0xdcu;
        ItemNameLabel__set_visible(item_name_label, 1u);
        *gptr<u8>(item_name_label + 0x4e2u) = 0;
        DialogBox__virtual_5(r5, frame.at(0xc).addr());
    } else {
        ItemNameLabel__set_visible(r5 + 0xdcu, 0u);
        word_fix_9u->byte_2872 = 0;
    }
    for_each_element(frame.at(0xa8).addr(), 0x5e35dcu, 0x20u, 3u);
    frame->word_8 = 7;
    frame->word_0 = 0;
    frame->word_4 = 0;
    MessageRef__set(frame.at(0xa8).addr(), 0x851ff0u, 0x34u, 0u);
    frame->word_8 = 9;
    u32 r6 = frame.at(0xa8).addr();
    frame->word_4 = 1;
    frame->word_0 = 0;
    MessageRef__set(frame.at(0xc8).addr(), 0x851ff0u, 0x33u, 0u);
    frame->word_0 = 0;
    gptr<Local_00257660_ea_2> ea_2 = gptr<Local_00257660_ea_2>(frame.at(4).addr());
    ea_2->word_0 = 2;
    ea_2->word_4 = 1;
    MessageRef__set(r6 + 0x40u, 0x851ff0u, 0x22u, 0u);
    MessageChoice__setup(r5, 3u, 2u);
    r3 = guest::cpu()->r[3];
    u32 i = 0u;
    do {
        script__CapitalTopEngine__CapitalTopEngine_005e4994(r5, i, r6 + (i << 5), r3);
        r3 = guest::cpu()->r[3];
        i += 1u;
        guest::preempt();
    } while (i < 3u);
    store_byte_constant_pack_0x4_005e4988(r5, guest::cpu()->r[1], guest::cpu()->r[2], r3);
    call_virtual_slot_2(r5, 0u, 0u, 0u);
    destroy_array_elements(frame.at(0xa8).addr(), 0x5e3618u, 0x20u, 3u);
    frame->object_7c_vtable = vtable_script__WordFix_9u__rec;
    frame->object_50_vtable = vtable_script__WordFix_9u__rec;
    frame->object_c_vtable = vtable_script__WordFix_21u__rec;
}

}  // namespace d_00257660
GUEST_EXPORT_FRAMED(0x00257660, d_00257660::setup_ui_message_refs, 0x40f0);  // pushes {i, r5, r6, r7, lr} first, as the original

// f_00257ee4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets up the shop dialog's choices and the item label.
namespace d_00257ee4 {

struct __attribute__((packed)) ShopTalk {
    u8 unknown_0[0x34d6];  // (not used here)
    u8 byte_34d6;
};
GUEST_OFFSET(ShopTalk, byte_34d6, 0x34d6);

struct __attribute__((packed)) Local_00257ee4_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00257ee4_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_00257ee4_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_00257ee4_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00257ee4_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_00257ee4_ea_4, word_4, 0x4);

struct __attribute__((packed)) Local_00257ee4_r5_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00257ee4_r5_1, word_0, 0x0);
GUEST_OFFSET(Local_00257ee4_r5_1, word_4, 0x4);
GUEST_OFFSET(Local_00257ee4_r5_1, word_8, 0x8);

inline guest::global<u32, 0x00851ff0> shop_choice_a;
inline guest::global<u32, 0x00851ff4> shop_choice_b;
inline guest::global<u32, 0x00851ff8> shop_choice_c;
inline constexpr guest::Function<0x001ad2e4, u32(u32, u32)> WordPair__set_first;
inline constexpr guest::Function<0x002b9aa4, u32(u32, u32)> ItemNameLabel__set_visible;
inline constexpr guest::Function<0x002f74c8, u32(u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> get_current_player;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x005b48b4, u32(u32)> current_scene_has_kind_flags;
inline constexpr guest::Function<0x005d4a78, u32(u32, u32, u32, u32)> call_virtual_slot_2;
inline constexpr guest::Function<0x005e34c4, u32(u32, u32, u32, u32)> MessageRef__set;
inline constexpr guest::Function<0x005e4988, u32(u32, u32, u32, u32)> store_byte_constant_pack_0x4_005e4988;
inline constexpr guest::Function<0x005e4994, u32(u32, u32, u32, u32)> script__CapitalTopEngine__CapitalTopEngine_005e4994;
inline constexpr guest::Function<0x005e49c0, u32(u32, u32, u32)> MessageChoice__setup;
inline constexpr guest::Function<0x0070b0b8, u32(u32)> owner_slot_2_if_class_3;
inline constexpr guest::Function<0x00769ff8, u32(u32)> item_wear_class_index_1e;

struct __attribute__((packed)) ShopTalkSetupChoicesFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0xe0];  // (not read or written by name)
};
GUEST_OFFSET(ShopTalkSetupChoicesFrame, word_0, 0x0);
GUEST_OFFSET(ShopTalkSetupChoicesFrame, word_4, 0x4);
GUEST_OFFSET(ShopTalkSetupChoicesFrame, word_8, 0x8);
GUEST_SIZE(ShopTalkSetupChoicesFrame, 0xec);

void ShopTalk__setup_choices(gptr<ShopTalk> shop_talk, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<ShopTalkSetupChoicesFrame> frame;  // the original's stack frame
    u32 r0 = shop_talk.addr();
    u32 ea_1 = 0;
    gptr<Local_00257ee4_ea_2> ea_2 = gptr<Local_00257ee4_ea_2>(0u);
    u32 r0_16 = 0;
    u32 file = 0;
    u32 player = get_current_player(r0, r1, r2, r3);
    WordPair__set_first(frame.at(0xe0).addr(), player + 0xau);
    u32 r0_5 = item_wear_class_index_1e(owner_slot_2_if_class_3(frame.at(0xe0).addr()));
    u32 message_choice = r0 + 0x2f18u;
    ItemNameLabel__set_visible(r0 + 0x2ff4u, 0u);
    shop_talk->byte_34d6 = 0;
    gptr<Local_00257ee4_r5_1> r5_1 = gptr<Local_00257ee4_r5_1>(frame.at(0xd0).addr());
    u32 r1_4 = *shop_choice_b;
    u32 r2_5 = *shop_choice_c;
    u32 r4_1 = 0u;
    r5_1->word_0 = *shop_choice_a;
    r5_1->word_4 = r1_4;
    r5_1->word_8 = r2_5;
    for_each_element(frame.at(0x10).addr(), 0x5e35dcu, 0x20u, 6u);
    if (r0_5 == 0) {
        frame->word_0 = 0;
        frame->word_8 = 7;
        frame->word_4 = 0;
        MessageRef__set(frame.at(0x10).addr(), frame.at(0xd0).addr(), 0x13au, 0u);
        r4_1 = 1u;
    }
    u32 r6 = frame.at(0x10).addr();
    u32 ref = r6 + (r4_1 << 5);
    frame->word_0 = 0;
    frame->word_4 = 1;
    frame->word_8 = 7;
    MessageRef__set(ref, frame.at(0xd0).addr(), 0x139u, 0u);
    u32 r4_2 = r4_1 + 1u;
    u32 r0_11 = current_scene_has_kind_flags(ref);
    if (r0_11 == 0) {
        u32 scene_3 = current_scene_id(r0_11);
        u32 scene_flagged_3 = scene_has_flags(0x200u, scene_3);
        if (scene_flagged_3 == 0) {
            u32 scene_4 = current_scene_id(scene_flagged_3);
            u32 scene_flagged_4 = scene_has_flags(0x10000000u, scene_4);
            if (scene_flagged_4 == 0) {
                goto L_258028;
            }
        }
    }
    ea_1 = frame.at(0).addr();
    *gptr<u32>(ea_1) = 0;
    ea_2 = gptr<Local_00257ee4_ea_2>(frame.at(4).addr());
    ea_2->word_0 = 2;
    ea_2->word_4 = 7;
    r0_16 = r6 + (r4_2 << 5);
    file = frame.at(0xd0).addr();
    MessageRef__set(r0_16, file, 0x13bu, 0u);
    r4_2 += 1u;
L_258028:;
    frame->word_0 = 0;
    gptr<Local_00257ee4_ea_4> ea_4 = gptr<Local_00257ee4_ea_4>(frame.at(4).addr());
    ea_4->word_0 = 3;
    ea_4->word_4 = 1;
    MessageRef__set(r6 + (r4_2 << 5), frame.at(0xd0).addr(), 0x22u, 0u);
    u32 r5 = r4_2 + 1u;
    MessageChoice__setup(message_choice, r5, r4_2);
    r3 = guest::cpu()->r[3];
    u32 i = 0u;
    if (s32(r5) > 0) {
        do {
            script__CapitalTopEngine__CapitalTopEngine_005e4994(message_choice, i, r6 + (i << 5), r3);
            r3 = guest::cpu()->r[3];
            i += 1u;
            guest::preempt();
        } while (s32(r5) > s32(i));
    }
    store_byte_constant_pack_0x4_005e4988(message_choice, guest::cpu()->r[1], guest::cpu()->r[2], r3);
    call_virtual_slot_2(message_choice, 0u, 0u, 0u);
    destroy_array_elements(frame.at(0x10).addr(), 0x5e3618u, 0x20u, 6u);
}

}  // namespace d_00257ee4
GUEST_EXPORT_FRAMED(0x00257ee4, d_00257ee4::ShopTalk__setup_choices, 0x43f0);  // pushes {i, r5, r6, message_choice, r8, r9, lr} first, as the original

// f_00258c8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Hides the item label and sets up the dialog's five choices.
namespace d_00258c8c {

struct __attribute__((packed)) ShopTalk {
    u8 unknown_0[0x34d6];  // (not used here)
    u8 byte_34d6;
};
GUEST_OFFSET(ShopTalk, byte_34d6, 0x34d6);

struct __attribute__((packed)) Local_00258c8c_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00258c8c_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_00258c8c_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_00258c8c_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00258c8c_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_00258c8c_ea_4, word_4, 0x4);

struct __attribute__((packed)) Local_00258c8c_ea_6 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00258c8c_ea_6, word_0, 0x0);
GUEST_OFFSET(Local_00258c8c_ea_6, word_4, 0x4);

struct __attribute__((packed)) Local_00258c8c_r4_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00258c8c_r4_1, word_0, 0x0);
GUEST_OFFSET(Local_00258c8c_r4_1, word_4, 0x4);
GUEST_OFFSET(Local_00258c8c_r4_1, word_8, 0x8);

inline guest::global<u32, 0x00851ff0> shop_choice_a;
inline guest::global<u32, 0x00851ff4> shop_choice_b;
inline guest::global<u32, 0x00851ff8> shop_choice_c;
inline constexpr guest::Function<0x002b9aa4, u32(u32, u32, u32, u32)> ItemNameLabel__set_visible;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x005d4a78, u32(u32, u32, u32, u32)> call_virtual_slot_2;
inline constexpr guest::Function<0x005e34c4, u32(u32, u32, u32, u32)> MessageRef__set;
inline constexpr guest::Function<0x005e4988, u32(u32, u32, u32, u32)> store_byte_constant_pack_0x4_005e4988;
inline constexpr guest::Function<0x005e4994, u32(u32, u32, u32, u32)> script__CapitalTopEngine__CapitalTopEngine_005e4994;
inline constexpr guest::Function<0x005e49c0, u32(u32, u32, u32)> MessageChoice__setup;

struct __attribute__((packed)) ShopTalkSetupFiveChoicesFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0xd4];  // (not read or written by name)
};
GUEST_OFFSET(ShopTalkSetupFiveChoicesFrame, word_0, 0x0);
GUEST_OFFSET(ShopTalkSetupFiveChoicesFrame, word_4, 0x4);
GUEST_OFFSET(ShopTalkSetupFiveChoicesFrame, word_8, 0x8);
GUEST_SIZE(ShopTalkSetupFiveChoicesFrame, 0xe0);

void ShopTalk__setup_five_choices(gptr<ShopTalk> shop_talk, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<ShopTalkSetupFiveChoicesFrame> frame;  // the original's stack frame
    u32 r0 = shop_talk.addr();
    u32 r0_1 = r0 + 0x2f18u;
    u32 message_choice = r0_1;
    ItemNameLabel__set_visible(r0_1 + 0xdcu, 0u, r2, r3);
    shop_talk->byte_34d6 = 0;
    gptr<Local_00258c8c_r4_1> r4_1 = gptr<Local_00258c8c_r4_1>(frame.at(0xd0).addr());
    u32 r1_1 = *shop_choice_b;
    u32 r2_1 = *shop_choice_c;
    r4_1->word_0 = *shop_choice_a;
    r4_1->word_4 = r1_1;
    r4_1->word_8 = r2_1;
    for_each_element(frame.at(0x10).addr(), 0x5e35dcu, 0x20u, 6u);
    frame->word_0 = 0;
    frame->word_8 = 7;
    frame->word_4 = 0;
    MessageRef__set(frame.at(0x10).addr(), frame.at(0xd0).addr(), 0x143u, 0u);
    frame->word_8 = 7;
    u32 r7 = frame.at(0x10).addr();
    frame->word_0 = 0;
    frame->word_4 = 1;
    MessageRef__set(frame.at(0x30).addr(), frame.at(0xd0).addr(), 0x144u, 0u);
    frame->word_0 = 0;
    gptr<Local_00258c8c_ea_2> ea_2 = gptr<Local_00258c8c_ea_2>(frame.at(4).addr());
    ea_2->word_0 = 2;
    ea_2->word_4 = 7;
    MessageRef__set(r7 + 0x40u, frame.at(0xd0).addr(), 0x145u, 0u);
    frame->word_0 = 0;
    gptr<Local_00258c8c_ea_4> ea_4 = gptr<Local_00258c8c_ea_4>(frame.at(4).addr());
    ea_4->word_0 = 3;
    ea_4->word_4 = 7;
    MessageRef__set(r7 + 0x60u, frame.at(0xd0).addr(), 0x146u, 0u);
    frame->word_0 = 0;
    gptr<Local_00258c8c_ea_6> ea_6 = gptr<Local_00258c8c_ea_6>(frame.at(4).addr());
    ea_6->word_0 = 4;
    ea_6->word_4 = 1;
    MessageRef__set(r7 + 0x80u, frame.at(0xd0).addr(), 0x138u, 0u);
    u32 r5 = 5u;
    MessageChoice__setup(message_choice, r5, 4u);
    r3 = guest::cpu()->r[3];
    u32 i = 0u;
    do {
        script__CapitalTopEngine__CapitalTopEngine_005e4994(message_choice, i, r7 + (i << 5), r3);
        r3 = guest::cpu()->r[3];
        i += 1u;
        guest::preempt();
    } while (s32(i) < s32(r5));
    store_byte_constant_pack_0x4_005e4988(message_choice, guest::cpu()->r[1], guest::cpu()->r[2], r3);
    call_virtual_slot_2(message_choice, 0u, 0u, 0u);
    destroy_array_elements(frame.at(0x10).addr(), 0x5e3618u, 0x20u, 6u);
}

}  // namespace d_00258c8c
GUEST_EXPORT_FRAMED(0x00258c8c, d_00258c8c::ShopTalk__setup_five_choices, 0x41f0);  // pushes {i, r5, message_choice, r7, r8, lr} first, as the original

// f_002599ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When the scene does not start the NPC itself: picks the message for its start mode (2 or 3) and starts the dialog;
// whether the NPC starts on its own.
namespace d_002599ec {

struct __attribute__((packed)) ShopTalk {
    u8 unknown_0[0x22b0];  // (not used here)
    u32 word_22b0;
};
GUEST_OFFSET(ShopTalk, word_22b0, 0x22b0);

inline guest::global<u32, 0x00851d64> global_00851d64;
inline guest::global<u32, 0x00851d68> global_00851d68;
inline constexpr guest::Function<0x005b43d4, u32(u32)> scene_start_mode;
inline constexpr guest::Function<0x005b4854, u32(u32, u32, u32, u32)> scene_allows_npc_start;
inline constexpr guest::Function<0x008177a0, u32(u32, u32, u32)> dispatch_offset_a4_008177a0;

u32 ShopTalk__start_from_scene(gptr<ShopTalk> shop_talk, u32 r1, u32 r2) {
    u32 r4_1 = 1u;
    u32 r0_1 = scene_allows_npc_start(shop_talk.addr(), r1, r2, guest::cpu()->r[3]);
    if (r0_1 == 0) {
        u32 r0_2 = scene_start_mode(r0_1);
        u32 r4_2 = shop_talk.addr() + 0x2000u;
        if (r0_2 == 2u) {
            shop_talk->word_22b0 = r1;
        } else {
            if (scene_start_mode(r0_2) == 3u) {
                shop_talk->word_22b0 = r2;
            }
        }
        dispatch_offset_a4_008177a0(shop_talk.addr() + 0xa4u, *global_00851d64, *global_00851d68);
        r4_1 = 0u;
    }
    return r4_1;
}

}  // namespace d_002599ec
GUEST_EXPORT_FRAMED(0x002599ec, d_002599ec::ShopTalk__start_from_scene, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00259dac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Hides the item label and sets up the dialog's five choices (the second set).
namespace d_00259dac {

struct __attribute__((packed)) ShopTalk {
    u8 unknown_0[0x34d6];  // (not used here)
    u8 byte_34d6;
};
GUEST_OFFSET(ShopTalk, byte_34d6, 0x34d6);

struct __attribute__((packed)) Local_00259dac_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00259dac_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_00259dac_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_00259dac_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00259dac_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_00259dac_ea_4, word_4, 0x4);

struct __attribute__((packed)) Local_00259dac_ea_6 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00259dac_ea_6, word_0, 0x0);
GUEST_OFFSET(Local_00259dac_ea_6, word_4, 0x4);

struct __attribute__((packed)) Local_00259dac_r4_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00259dac_r4_1, word_0, 0x0);
GUEST_OFFSET(Local_00259dac_r4_1, word_4, 0x4);
GUEST_OFFSET(Local_00259dac_r4_1, word_8, 0x8);

inline guest::global<u32, 0x00851ff0> shop_choice_a;
inline guest::global<u32, 0x00851ff4> shop_choice_b;
inline guest::global<u32, 0x00851ff8> shop_choice_c;
inline constexpr guest::Function<0x002b9aa4, u32(u32, u32, u32, u32)> ItemNameLabel__set_visible;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x005d4a78, u32(u32, u32, u32, u32)> call_virtual_slot_2;
inline constexpr guest::Function<0x005e34c4, u32(u32, u32, u32, u32)> MessageRef__set;
inline constexpr guest::Function<0x005e4988, u32(u32, u32, u32, u32)> store_byte_constant_pack_0x4_005e4988;
inline constexpr guest::Function<0x005e4994, u32(u32, u32, u32, u32)> script__CapitalTopEngine__CapitalTopEngine_005e4994;
inline constexpr guest::Function<0x005e49c0, u32(u32, u32, u32)> MessageChoice__setup;

struct __attribute__((packed)) ShopTalkSetupFiveChoicesBFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0xd4];  // (not read or written by name)
};
GUEST_OFFSET(ShopTalkSetupFiveChoicesBFrame, word_0, 0x0);
GUEST_OFFSET(ShopTalkSetupFiveChoicesBFrame, word_4, 0x4);
GUEST_OFFSET(ShopTalkSetupFiveChoicesBFrame, word_8, 0x8);
GUEST_SIZE(ShopTalkSetupFiveChoicesBFrame, 0xe0);

void ShopTalk__setup_five_choices_b(gptr<ShopTalk> shop_talk, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<ShopTalkSetupFiveChoicesBFrame> frame;  // the original's stack frame
    u32 r0 = shop_talk.addr();
    u32 r0_1 = r0 + 0x2f18u;
    u32 message_choice = r0_1;
    ItemNameLabel__set_visible(r0_1 + 0xdcu, 0u, r2, r3);
    shop_talk->byte_34d6 = 0;
    gptr<Local_00259dac_r4_1> r4_1 = gptr<Local_00259dac_r4_1>(frame.at(0xd0).addr());
    u32 r1_1 = *shop_choice_b;
    u32 r2_1 = *shop_choice_c;
    r4_1->word_0 = *shop_choice_a;
    r4_1->word_4 = r1_1;
    r4_1->word_8 = r2_1;
    for_each_element(frame.at(0x10).addr(), 0x5e35dcu, 0x20u, 6u);
    frame->word_0 = 0;
    frame->word_8 = 7;
    frame->word_4 = 0;
    MessageRef__set(frame.at(0x10).addr(), frame.at(0xd0).addr(), 0x13au, 0u);
    frame->word_8 = 7;
    u32 r7 = frame.at(0x10).addr();
    frame->word_0 = 0;
    frame->word_4 = 1;
    MessageRef__set(frame.at(0x30).addr(), frame.at(0xd0).addr(), 0x139u, 0u);
    frame->word_0 = 0;
    gptr<Local_00259dac_ea_2> ea_2 = gptr<Local_00259dac_ea_2>(frame.at(4).addr());
    ea_2->word_0 = 2;
    ea_2->word_4 = 7;
    MessageRef__set(r7 + 0x40u, frame.at(0xd0).addr(), 0x13bu, 0u);
    frame->word_0 = 0;
    gptr<Local_00259dac_ea_4> ea_4 = gptr<Local_00259dac_ea_4>(frame.at(4).addr());
    ea_4->word_0 = 3;
    ea_4->word_4 = 7;
    MessageRef__set(r7 + 0x60u, frame.at(0xd0).addr(), 0x13cu, 0u);
    frame->word_0 = 0;
    gptr<Local_00259dac_ea_6> ea_6 = gptr<Local_00259dac_ea_6>(frame.at(4).addr());
    ea_6->word_0 = 4;
    ea_6->word_4 = 1;
    MessageRef__set(r7 + 0x80u, frame.at(0xd0).addr(), 0x138u, 0u);
    u32 r5 = 5u;
    MessageChoice__setup(message_choice, r5, 4u);
    r3 = guest::cpu()->r[3];
    u32 i = 0u;
    do {
        script__CapitalTopEngine__CapitalTopEngine_005e4994(message_choice, i, r7 + (i << 5), r3);
        r3 = guest::cpu()->r[3];
        i += 1u;
        guest::preempt();
    } while (s32(i) < s32(r5));
    store_byte_constant_pack_0x4_005e4988(message_choice, guest::cpu()->r[1], guest::cpu()->r[2], r3);
    call_virtual_slot_2(message_choice, 0u, 0u, 0u);
    destroy_array_elements(frame.at(0x10).addr(), 0x5e3618u, 0x20u, 6u);
}

}  // namespace d_00259dac
GUEST_EXPORT_FRAMED(0x00259dac, d_00259dac::ShopTalk__setup_five_choices_b, 0x41f0);  // pushes {i, r5, message_choice, r7, r8, lr} first, as the original

// f_00259f30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Hides the item label and sets up the dialog's three choices.
namespace d_00259f30 {

struct __attribute__((packed)) ShopTalk {
    u8 unknown_0[0x34d6];  // (not used here)
    u8 byte_34d6;
};
GUEST_OFFSET(ShopTalk, byte_34d6, 0x34d6);

struct __attribute__((packed)) Local_00259f30_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00259f30_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_00259f30_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_00259f30_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00259f30_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_00259f30_ea_4, word_4, 0x4);

struct __attribute__((packed)) Local_00259f30_r4_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00259f30_r4_1, word_0, 0x0);
GUEST_OFFSET(Local_00259f30_r4_1, word_4, 0x4);
GUEST_OFFSET(Local_00259f30_r4_1, word_8, 0x8);

struct __attribute__((packed)) Local_00259f30_r4_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00259f30_r4_2, word_0, 0x0);
GUEST_OFFSET(Local_00259f30_r4_2, word_4, 0x4);

inline guest::global<u32, 0x00851ff0> shop_choice_a;
inline guest::global<u32, 0x00851ff4> shop_choice_b;
inline guest::global<u32, 0x00851ff8> shop_choice_c;
inline constexpr guest::Function<0x002b9aa4, u32(u32, u32, u32, u32)> ItemNameLabel__set_visible;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x005d4a78, u32(u32, u32, u32, u32)> call_virtual_slot_2;
inline constexpr guest::Function<0x005e34c4, u32(u32, u32, u32, u32)> MessageRef__set;
inline constexpr guest::Function<0x005e4988, u32(u32, u32, u32, u32)> store_byte_constant_pack_0x4_005e4988;
inline constexpr guest::Function<0x005e4994, u32(u32, u32, u32, u32)> script__CapitalTopEngine__CapitalTopEngine_005e4994;
inline constexpr guest::Function<0x005e49c0, u32(u32, u32, u32)> MessageChoice__setup;

struct __attribute__((packed)) ShopTalkSetupThreeChoicesFrame {
    u32 word_0;
    u8 unknown_4[0xd8];  // (not read or written by name)
};
GUEST_OFFSET(ShopTalkSetupThreeChoicesFrame, word_0, 0x0);
GUEST_SIZE(ShopTalkSetupThreeChoicesFrame, 0xdc);

void ShopTalk__setup_three_choices(gptr<ShopTalk> shop_talk, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<ShopTalkSetupThreeChoicesFrame> frame;  // the original's stack frame
    u32 r0 = shop_talk.addr();
    u32 r0_1 = r0 + 0x2f18u;
    u32 message_choice = r0_1;
    ItemNameLabel__set_visible(r0_1 + 0xdcu, 0u, r2, r3);
    shop_talk->byte_34d6 = 0;
    gptr<Local_00259f30_r4_1> r4_1 = gptr<Local_00259f30_r4_1>(frame.at(0xd0).addr());
    u32 r1_1 = *shop_choice_b;
    u32 r2_1 = *shop_choice_c;
    r4_1->word_0 = *shop_choice_a;
    r4_1->word_4 = r1_1;
    r4_1->word_8 = r2_1;
    for_each_element(frame.at(0x10).addr(), 0x5e35dcu, 0x20u, 6u);
    gptr<Local_00259f30_r4_2> r4_2 = gptr<Local_00259f30_r4_2>(frame.at(4).addr());
    frame->word_0 = 0;
    r4_2->word_0 = 0;
    r4_2->word_4 = 7;
    MessageRef__set(frame.at(0x10).addr(), frame.at(0xd0).addr(), 0x13au, 0u);
    frame->word_0 = 0;
    gptr<Local_00259f30_ea_2> ea_2 = gptr<Local_00259f30_ea_2>(frame.at(4).addr());
    ea_2->word_0 = 1;
    ea_2->word_4 = 7;
    u32 r7 = frame.at(0x10).addr();
    MessageRef__set(frame.at(0x30).addr(), frame.at(0xd0).addr(), 0x157u, 0u);
    frame->word_0 = 0;
    gptr<Local_00259f30_ea_4> ea_4 = gptr<Local_00259f30_ea_4>(frame.at(4).addr());
    ea_4->word_0 = 2;
    ea_4->word_4 = 1;
    MessageRef__set(r7 + 0x40u, frame.at(0xd0).addr(), 0x138u, 0u);
    u32 r5 = 3u;
    MessageChoice__setup(message_choice, r5, 2u);
    r3 = guest::cpu()->r[3];
    u32 i = 0u;
    do {
        script__CapitalTopEngine__CapitalTopEngine_005e4994(message_choice, i, r7 + (i << 5), r3);
        r3 = guest::cpu()->r[3];
        i += 1u;
        guest::preempt();
    } while (s32(i) < s32(r5));
    store_byte_constant_pack_0x4_005e4988(message_choice, guest::cpu()->r[1], guest::cpu()->r[2], r3);
    call_virtual_slot_2(message_choice, 0u, 0u, 0u);
    destroy_array_elements(frame.at(0x10).addr(), 0x5e3618u, 0x20u, 6u);
}

}  // namespace d_00259f30
GUEST_EXPORT_FRAMED(0x00259f30, d_00259f30::ShopTalk__setup_three_choices, 0x40f0);  // pushes {i, r5, message_choice, r7, lr} first, as the original

// f_0025b1c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys the design menu: its windows, buttons, layouts and menu base.
namespace d_0025b1c0 {

struct __attribute__((packed)) Local_0025b1c0_ea_1 {
    u32 vtable;
    u8 unknown_4[0x8];  // (not used here)
    u32 drag_icon_group_vtable;
};
GUEST_OFFSET(Local_0025b1c0_ea_1, vtable, 0x0);
GUEST_OFFSET(Local_0025b1c0_ea_1, drag_icon_group_vtable, 0xc);

inline constexpr u32 vtable_DragIconGroup = 0x008ee248u;
inline constexpr u32 vtable_DragIconGroup_at_c = 0x008ee258u;
inline constexpr u32 vtable_BsMenuMyDesign = 0x008eed5cu;
inline constexpr u32 vtable_BsMenuMyDesign_at_28 = 0x008eedc8u;
inline constexpr u32 vtable_BsMenuMyDesign_at_a4 = 0x008eeeccu;
inline constexpr u32 vtable_DragIconControl_rec = 0x008f08acu;
inline constexpr u32 vtable_ItemSelectNameWindow = 0x008f47a0u;
inline constexpr guest::Function<0x002b6ef8, u32(u32)> ButtonActionNode__destructor;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;
inline constexpr guest::Function<0x002f7710, u32(u32, u32)> destroy_button_action_control;
inline constexpr guest::Function<0x003170d0, u32(u32)> destroy_ITalkRecept;
inline constexpr guest::Function<0x00317dec, u32(u32)> ssys__ma__HeapAllocator__destructor;
inline constexpr guest::Function<0x00567ef0, u32(u32)> ssys__ma__lyt__ArcResAccReader__destructor;
inline constexpr guest::Function<0x0056988c, u32(u32, u32)> destroy_animation;
inline constexpr guest::Function<0x005bf744, u32(u32)> Layout__destructor;
inline constexpr guest::Function<0x005e3194, u32(u32, u32, u32, u32)> script__RenderTrace__destructor_b;
inline constexpr guest::Function<0x005e8a7c, u32(u32)> script__ChoiceStandardItem__destructor;
inline constexpr guest::Function<0x006aaa30, u32(u32, u32)> MenuBase__destructor;

u32 BsMenuMyDesign__destructor(gptr<BsMenuMyDesign> bs_menu_my_design) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    bs_menu_my_design->vtable = vtable_BsMenuMyDesign;
    bs_menu_my_design->bs_menu_my_design_vtable_a4 = vtable_BsMenuMyDesign_at_a4;
    bs_menu_my_design->bs_menu_my_design_vtable = vtable_BsMenuMyDesign_at_28;
    bs_menu_my_design->item_select_name_window_vtable = vtable_ItemSelectNameWindow;
    u32 r0_1 = bs_menu_my_design.addr() + 0x3f98u;
    script__RenderTrace__destructor_b(r0_1, vtable_ItemSelectNameWindow, vtable_BsMenuMyDesign_at_a4, vtable_BsMenuMyDesign_at_28);
    destroy_animation(r0_1 - 0x28u, guest::cpu()->r[1]);
    destroy_animation(r0_1 - 0x50u, guest::cpu()->r[1]);
    u32 r0_9 = script__ChoiceStandardItem__destructor(ssys__ma__lyt__ArcResAccReader__destructor(Layout__destructor(r0_1 - 0x1acu) - 0x24cu) - 0xc88u);
    u32 r0_11 = script__ChoiceStandardItem__destructor(r0_9 - 0xc64u);
    destroy_animation(r0_11 - 0x3cu, guest::cpu()->r[1]);
    destroy_animation(r0_11 - 0x64u, guest::cpu()->r[1]);
    ButtonActionNode__destructor(r0_11 - 0x174u);
    destroy_button_action_control(r0_11 - 0x258u, guest::cpu()->r[1]);
    destroy_array_elements(r0_11 - 0x1bf8u, 0x320b0cu, 0x290u, 0xau);
    gptr<Local_0025b1c0_ea_1> ea_1 = gptr<Local_0025b1c0_ea_1>((r0_11 - 0x22b4u) + 0x57cu);
    ea_1->vtable = vtable_DragIconGroup;
    ea_1->drag_icon_group_vtable = vtable_DragIconGroup_at_c;
    destroy_animation(ea_1.addr() + 0x114u, vtable_DragIconGroup_at_c);
    destroy_animation(ea_1.addr() + 0xecu, guest::cpu()->r[1]);
    destroy_animation(ea_1.addr() + 0xc4u, guest::cpu()->r[1]);
    destroy_animation(ea_1.addr() + 0x9cu, guest::cpu()->r[1]);
    destroy_animation(ea_1.addr() + 0x74u, guest::cpu()->r[1]);
    destroy_animation(ea_1.addr() + 0x4cu, guest::cpu()->r[1]);
    destroy_animation(ea_1.addr() + 0x20u, guest::cpu()->r[1]);
    u32 ea_2 = ea_1.addr() - 0x118u;
    *gptr<u32>(ea_2) = vtable_DragIconControl_rec;
    destroy_button_action_control(ea_2, vtable_DragIconControl_rec);
    ssys__ma__HeapAllocator__destructor(ea_2 - 8u);
    u32 r0_28 = ssys__ma__lyt__ArcResAccReader__destructor(Layout__destructor(ea_2 - 0x154u) - 0x248u);
    destroy_ITalkRecept(r0_28 - 0xa0u);
    frame.release();
    return MenuBase__destructor(r0_28 - 0xc8u, guest::cpu()->r[1]);
}

}  // namespace d_0025b1c0
GUEST_EXPORT(0x0025b1c0, d_0025b1c0::BsMenuMyDesign__destructor);

// f_0025c1fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Updates the passport menu once its parts are ready.
namespace d_0025c1fc {

struct __attribute__((packed)) Local_0025c1fc_r5_1 {
    u8 unknown_0[0xb8];  // (not used here)
    u32 word_b8;
    u32 word_bc;
};
GUEST_OFFSET(Local_0025c1fc_r5_1, word_b8, 0xb8);
GUEST_OFFSET(Local_0025c1fc_r5_1, word_bc, 0xbc);

inline guest::global<u32, 0x008525dc> global_008525dc;
inline guest::global<u32, 0x008525e0> global_008525e0;
inline guest::global<u32, 0x008525e4> global_008525e4;
inline guest::global<u32, 0x008525e8> global_008525e8;
inline guest::global<u32, 0x008525ec> menu_request_a;
inline guest::global<u32, 0x008525f0> menu_request_b;
inline guest::global<u32, 0x0094fd3c> menu_selection;
inline constexpr guest::Function<0x007237e0, u32(u32, u32, u32, u32)> sub_is_ready;

void BsMenuPassport__update(gptr<BsMenuPassport> bs_menu_passport) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0 = bs_menu_passport.addr();
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r4 = r0 + 0xa000u;
    u32 r1_1 = bs_menu_passport->byte_a355;
    if (r1_1 != 0) {
        bs_menu_passport->byte_a355 = 0;
    } else {
        u32 r2_1 = bs_menu_passport->word_34;
        r1_1 = *global_008525e0;
        if (r2_1 == *global_008525dc && (r2_1 == 0 && ((bs_menu_passport->word_38 | r1_1) & 1u) == 0 || bs_menu_passport->word_38 == r1_1)) {
            guest::cpu()->r[1] = r1_1;
            return;
        }
        r1_1 = *global_008525e8;
        if (r2_1 == *global_008525e4 && (r2_1 == 0 && ((bs_menu_passport->word_38 | r1_1) & 1u) == 0 || bs_menu_passport->word_38 == r1_1)) {
            guest::cpu()->r[1] = r1_1;
            return;
        }
        u32 r3_1 = *menu_request_a;
        r1_1 = *menu_request_b;
        if (r2_1 == r3_1) {
            if (r2_1 == 0) {
                r2_1 = bs_menu_passport->word_38 | r1_1;
                if ((r2_1 & 1u) == 0) {
                    guest::cpu()->r[1] = r1_1;
                    return;
                }
            }
            if (bs_menu_passport->word_38 == r1_1) {
                guest::cpu()->r[1] = r1_1;
                return;
            }
        }
        if (*gptr<u32>(r4 + 0x34cu) != 0) {
            gptr<Local_0025c1fc_r5_1> r5_1 = gptr<Local_0025c1fc_r5_1>(*gptr<u32>(*menu_selection + 0x1e0u) + 0x494u);
            u32 r0_1 = sub_is_ready(r5_1.addr(), r1_1, r2_1, r3_1);
            u32 r2 = guest::cpu()->r[2];
            u32 r3 = guest::cpu()->r[3];
            if (r0_1 == 0) {
                goto L_25c314;
            }
            *gptr<u8>(*gptr<u32>(r4 + 0x34cu) + 4u) = 1;
            r0_2 = *gptr<u32>(r4 + 0x34cu);
            r1_2 = *gptr<u32>(*gptr<u32>(r0_2) + 0x1cu);
            // virtual function 7 of r0_2
            frame.release();
            guest::call_address<u32>(r1_2, r0_2, r1_2, r2, r3);
            return;
L_25c314:;
            if (r5_1->word_b8 != 0x2f635cu || r5_1->word_bc != 0) {
                r0_2 = *gptr<u32>(r4 + 0x34cu);
                r1_2 = *gptr<u32>(*gptr<u32>(r0_2) + 0x1cu);
                // virtual function 7 of r0_2
                frame.release();
                guest::call_address<u32>(r1_2, r0_2, r1_2, r2, r3);
                return;
            }
            *gptr<u8>(*gptr<u32>(r4 + 0x34cu) + 4u) = 1;
            r0_2 = *gptr<u32>(r4 + 0x34cu);
            r1_2 = *gptr<u32>(*gptr<u32>(r0_2) + 0x1cu);
            // virtual function 7 of r0_2
            frame.release();
            guest::call_address<u32>(r1_2, r0_2, r1_2, r2, r3);
            return;
        }
    }
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_0025c1fc
GUEST_EXPORT(0x0025c1fc, d_0025c1fc::BsMenuPassport__update);

// f_0025c3ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Posts the menu's request (0x14, or 0x16 without `first`) and starts it.
namespace d_0025c3ac {

struct __attribute__((packed)) BsMenu {
    u8 unknown_0[0xa351];  // (not used here)
    u8 byte_a351;
};
GUEST_OFFSET(BsMenu, byte_a351, 0xa351);

inline constexpr u32 menu_open_requests_address = 0x009ab068u;
inline guest::global<u32, 0x008525ec> menu_request_a;
inline guest::global<u32, 0x008525f0> menu_request_b;
inline constexpr guest::Function<0x001a9368, u32(u32)> Record1c__reset;
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32)> copy_aligned_bytes;
inline constexpr guest::Function<0x006d2780, u32(u32, u32, u32, u32)> reset_global_98c56c;
inline constexpr guest::Function<0x008178ac, u32(u32, u32, u32)> dispatch_offset_28_first;

struct __attribute__((packed)) BsMenuOpenRequestAFrame {
    u32 word_0;
    u8 unknown_4[0x18];  // (not read or written by name)
};
GUEST_OFFSET(BsMenuOpenRequestAFrame, word_0, 0x0);
GUEST_SIZE(BsMenuOpenRequestAFrame, 0x1c);

void BsMenu__open_request_a(gptr<BsMenu> bs_menu, u32 r1, u32 r2) {
    guest::StackFrameOf<BsMenuOpenRequestAFrame> frame;  // the original's stack frame
    reset_global_98c56c(bs_menu.addr(), r1, r2, guest::cpu()->r[3]);
    Record1c__reset(frame.at(0).addr());
    frame->word_0 = r1 == 0 ? 0x16u : 0x14u;
    copy_aligned_bytes(menu_open_requests_address, frame.at(0).addr(), 0x19u);
    dispatch_offset_28_first(bs_menu.addr() + 0x28u, *menu_request_a, *menu_request_b);
    bs_menu->byte_a351 = 1;
}

}  // namespace d_0025c3ac
GUEST_EXPORT_FRAMED(0x0025c3ac, d_0025c3ac::BsMenu__open_request_a, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0025c418: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Posts the menu's request (0x15, or 0x17 without `first`) and starts it.
namespace d_0025c418 {

struct __attribute__((packed)) BsMenu {
    u8 unknown_0[0xa352];  // (not used here)
    u8 byte_a352;
};
GUEST_OFFSET(BsMenu, byte_a352, 0xa352);

inline constexpr u32 menu_open_requests_address = 0x009ab068u;
inline guest::global<u32, 0x008525ec> menu_request_a;
inline guest::global<u32, 0x008525f0> menu_request_b;
inline constexpr guest::Function<0x001a9368, u32(u32)> Record1c__reset;
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32)> copy_aligned_bytes;
inline constexpr guest::Function<0x006d2780, u32(u32, u32, u32, u32)> reset_global_98c56c;
inline constexpr guest::Function<0x008178ac, u32(u32, u32, u32)> dispatch_offset_28_first;

struct __attribute__((packed)) BsMenuOpenRequestBFrame {
    u32 word_0;
    u8 unknown_4[0x18];  // (not read or written by name)
};
GUEST_OFFSET(BsMenuOpenRequestBFrame, word_0, 0x0);
GUEST_SIZE(BsMenuOpenRequestBFrame, 0x1c);

void BsMenu__open_request_b(gptr<BsMenu> bs_menu, u32 r1, u32 r2) {
    guest::StackFrameOf<BsMenuOpenRequestBFrame> frame;  // the original's stack frame
    reset_global_98c56c(bs_menu.addr(), r1, r2, guest::cpu()->r[3]);
    Record1c__reset(frame.at(0).addr());
    frame->word_0 = r1 == 0 ? 0x17u : 0x15u;
    copy_aligned_bytes(menu_open_requests_address, frame.at(0).addr(), 0x19u);
    dispatch_offset_28_first(bs_menu.addr() + 0x28u, *menu_request_a, *menu_request_b);
    bs_menu->byte_a352 = 1;
}

}  // namespace d_0025c418
GUEST_EXPORT_FRAMED(0x0025c418, d_0025c418::BsMenu__open_request_b, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0025c484: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Posts the menu's request (0x18) and starts it.
namespace d_0025c484 {

struct __attribute__((packed)) BsMenu {
    u8 unknown_0[0xa353];  // (not used here)
    u8 byte_a353;
};
GUEST_OFFSET(BsMenu, byte_a353, 0xa353);

inline constexpr u32 menu_open_requests_address = 0x009ab068u;
inline guest::global<u32, 0x008525ec> menu_request_a;
inline guest::global<u32, 0x008525f0> menu_request_b;
inline constexpr guest::Function<0x001a9368, u32(u32)> Record1c__reset;
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32)> copy_aligned_bytes;
inline constexpr guest::Function<0x006d2780, u32(u32, u32, u32, u32)> reset_global_98c56c;
inline constexpr guest::Function<0x008178ac, u32(u32, u32, u32)> dispatch_offset_28_first;

struct __attribute__((packed)) BsMenuOpenRequestCFrame {
    u32 word_0;
    u8 unknown_4[0x1c];  // (not read or written by name)
};
GUEST_OFFSET(BsMenuOpenRequestCFrame, word_0, 0x0);
GUEST_SIZE(BsMenuOpenRequestCFrame, 0x20);

void BsMenu__open_request_c(gptr<BsMenu> bs_menu, u32 r1, u32 r2) {
    guest::StackFrameOf<BsMenuOpenRequestCFrame> frame;  // the original's stack frame
    reset_global_98c56c(bs_menu.addr(), r1, r2, guest::cpu()->r[3]);
    Record1c__reset(frame.at(0).addr());
    frame->word_0 = 0x18;
    copy_aligned_bytes(menu_open_requests_address, frame.at(0).addr(), 0x19u);
    dispatch_offset_28_first(bs_menu.addr() + 0x28u, *menu_request_a, *menu_request_b);
    bs_menu->byte_a353 = 1;
}

}  // namespace d_0025c484
GUEST_EXPORT_FRAMED(0x0025c484, d_0025c484::BsMenu__open_request_c, 0x4010);  // pushes {r4, lr} first, as the original

// f_0025ca5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Forgets the day's event and clears its two flags.
namespace d_0025ca5c {

inline constexpr u32 daily_event_state_address = 0x00950004u;
inline guest::global<u32, 0x00950004> daily_event_state;
inline guest::global<u32, 0x00953358> global_00953358;
inline guest::global<u32, 0x00953364> daily_event_id;

void DailyEvent__reset() {
    *daily_event_id = ~0u;
    *global_00953358 = 0;
    *daily_event_state = 0;
    guest::cpu()->r[1] = daily_event_state_address;
}

}  // namespace d_0025ca5c
GUEST_EXPORT(0x0025ca5c, d_0025ca5c::DailyEvent__reset);

// f_0025cdf8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Updates the reactions menu: its icons, dragging and selection.
namespace d_0025cdf8 {

struct __attribute__((packed)) Local_0025cdf8_r0_7 {
    u8 unknown_0[0x585];  // (not used here)
    u8 byte_585;
    u8 unknown_586[0x53];  // (not used here)
    u8 byte_5d9;
};
GUEST_OFFSET(Local_0025cdf8_r0_7, byte_585, 0x585);
GUEST_OFFSET(Local_0025cdf8_r0_7, byte_5d9, 0x5d9);

inline guest::global<u32, 0x0025cfe4> global_0025cfe4;
inline constexpr guest::Function<0x0014f9d4, u32(u32, u32, u32, u32)> import_thunk_14f9d4;
inline constexpr guest::Function<0x0029b480, u32(u32, u32)> SubMenu__reset;
inline constexpr guest::Function<0x0029b5fc, u32(u32, u32)> DragIconControl__virtual_3;
inline constexpr guest::Function<0x002f6b14, u32(u32)> NodeTree__update_all;
inline constexpr guest::Function<0x00320cec, u32(u32, u32)> IconButton__set_state;
inline constexpr guest::Function<0x00320d54, u32(u32, u32)> IconButton__refresh;
inline constexpr guest::Function<0x005c3e84, u32(u32, u32, u32, u32)> AcPlayer__can_act;
inline constexpr guest::Function<0x005c6cac, u32(u32, u32)> Player__is_in_water;
inline constexpr guest::Function<0x007237e0, u32(u32, u32)> sub_is_ready;
inline constexpr guest::Function<0x007240f8, u32(u32)> Button__is_visible;

void BsMenuReaction__update(gptr<BsMenuReaction> bs_menu_reaction, u32 r1) {
    u32 r0 = bs_menu_reaction.addr();
    u32 i = 0;
    u32 r4 = r0 + 0x7e00u;
    u32 r6 = r0;
    if (bs_menu_reaction->byte_7e13 == 0) {
        u32 r0_1 = bs_menu_reaction->byte_7e15;
        u32 r7 = r6 + 0x7e12u;
        if (r0_1 == 1u) {
            u32 r0_3 = import_thunk_14f9d4(*gptr<u32>(*global_0025cfe4), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = *gptr<s8>(r4 + 0x12u);
            if (r1 != (r0_3 ^ 1u)) {
                i = 0u;
                *gptr<u8>(r7) = u8(u32(r1 == 0));
                do {
                    u32 r7_1 = r6 + (i * 0x21u + (i << 7) << 2);
                    u32 r8_1 = r7_1 + 0x4acu;
                    IconButton__refresh(r8_1, r1);
                    u32 r0_4 = Button__is_visible(r8_1);
                    r1 = guest::cpu()->r[1];
                    if (r0_4 != 0) {
                        u32 r1_2 = *gptr<s8>(r4 + 0x12u);
                        IconButton__set_state(r8_1, r1_2);
                        r1 = guest::cpu()->r[1];
                        *gptr<u8>(r7_1 + 0x585u) = u8(u32(*gptr<u8>(r4 + 0x12u) == 0));
                    }
                    i += 1u;
                    guest::preempt();
                } while (i < 0x28u);
                guest::cpu()->r[1] = r1;
                return;
            }
        } else {
            u32 r1_3 = AcPlayer__can_act(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            u32 r0_6 = s8(bs_menu_reaction->byte_7e14);
            if (r1_3 != r0_6) {
                u32 r8 = r6 + 0x6e2cu;
                if (r0_6 == 1u) {
                    SubMenu__reset(r8, r1_3);
                }
                i = 0u;
                bs_menu_reaction->byte_7e14 = u8(bs_menu_reaction->byte_7e14 == 0 ? 1u : 0u);
                do {
                    gptr<Local_0025cdf8_r0_7> r0_7 = gptr<Local_0025cdf8_r0_7>(r6 + (i * 0x21u + (i << 7) << 2));
                    r0_7->byte_5d9 = *gptr<u8>(r4 + 0x14u);
                    r1_3 = *gptr<s8>(r4 + 0x14u);
                    if (r1_3 == 1u) {
                        IconButton__refresh(r0_7.addr() + 0x4acu, r1_3);
                        r1_3 = guest::cpu()->r[1];
                    } else {
                        r0_7->byte_585 = u8(r1_3);
                    }
                    i += 1u;
                    guest::preempt();
                } while (i < 0x28u);
                r0_6 = *gptr<u8>(r4 + 0x14u);
                if (r0_6 == 1u) {
                    r0_6 = sub_is_ready(r8, r1_3);
                    r1_3 = guest::cpu()->r[1];
                    if (r0_6 == 0) {
                        r1_3 = 0x2f635cu;
                        r0_6 = *gptr<u32>(r8 + 0xb8u);
                        u32 zf_1 = r0_6 == r1_3;
                        if (zf_1) {
                            r0_6 = *gptr<u32>(r8 + 0xbcu);
                            zf_1 = r0_6 == 0;
                        }
                        if (!zf_1) {
                            DragIconControl__virtual_3(r8, r1_3);
                            r0_6 = NodeTree__update_all(r8);
                            r1_3 = guest::cpu()->r[1];
                        }
                    }
                }
            }
            r1 = Player__is_in_water(r0_6, r1_3);
            u32 r0_10 = *gptr<s8>(r4 + 0x12u);
            if (r1 != r0_10) {
                i = 0u;
                *gptr<u8>(r7) = u8(u32(r0_10 == 0));
                do {
                    u32 r1_5 = *gptr<s8>(r4 + 0x12u);
                    IconButton__set_state(r6 + (i * 0x21u + (i << 7) << 2) + 0x4acu, r1_5);
                    r1 = guest::cpu()->r[1];
                    i += 1u;
                    guest::preempt();
                } while (i < 0x28u);
            }
        }
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0025cdf8
GUEST_EXPORT_FRAMED(0x0025cdf8, d_0025cdf8::BsMenuReaction__update, 0x41f0);  // pushes {r4, i, r6, r7, r8, lr} first, as the original

// f_0025d9e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Finds the first player with the flag and acts on their data.
namespace d_0025d9e4 {

struct __attribute__((packed)) BsMenu {
    u8 unknown_0[0x7e15];  // (not used here)
    u8 byte_7e15;
};
GUEST_OFFSET(BsMenu, byte_7e15, 0x7e15);

inline constexpr u32 current_player_data_address = 0x00aaf14cu;
inline guest::global<u32, 0x0025db24> global_0025db24;
inline guest::global<u32, 0x0094fd58> town_runtime_flags;
inline guest::global<u32, 0x00aaf14c> current_player_data;
inline constexpr guest::Function<0x0014f9fc, u32(u32, u32)> import_thunk_14f9fc;
inline constexpr guest::Function<0x0014fa04, u32(u32, u32, u32, u32)> import_thunk_14fa04;
inline constexpr guest::Function<0x0027a650, u32(u32)> first_player_with_flag;
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> get_data_base;
inline constexpr guest::Function<0x002fb7e8, u32(u32, u32)> player_at;
inline constexpr guest::Function<0x005c3560, u32(u32, u32, u32, u32)> player_call_6739b8;
inline constexpr guest::Function<0x005c3e84, u32(u32, u32, u32, u32)> AcPlayer__can_act;

struct __attribute__((packed)) BsMenuFindPlayerWithFlagFrame {
    u32 word_0;
};
GUEST_OFFSET(BsMenuFindPlayerWithFlagFrame, word_0, 0x0);
GUEST_SIZE(BsMenuFindPlayerWithFlagFrame, 0x4);

void BsMenu__find_player_with_flag(gptr<BsMenu> bs_menu, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<BsMenuFindPlayerWithFlagFrame> frame;  // the original's stack frame
    u32 r0 = bs_menu.addr();
    u32 i = 0;
    frame->word_0 = r3;
    u32 r6 = r0;
    u32 r8 = r0 + 0x7e00u;
    u32 r9 = r1;
    u32 r0_1 = bs_menu->byte_7e15;
    if (r0_1 != 0) {
        u32 data_base = get_data_base(r0_1, r1, r2, r3);
        r0 = first_player_with_flag(data_base + 0x20u);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 == 0) {
            i = 0u;
        } else {
            goto L_25da54;
        }
        do {
            u32 data_base_2 = get_data_base(r0, r1, r2, r3);
            r0 = player_at(data_base_2 + 0x20u, i & 0xffu);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0 != 0) {
                goto L_25da54;
            }
            i += 1u;
            guest::preempt();
        } while (i < 4u);
        return;
    }
    r0 = *current_player_data;
L_25da54:;
    if (r0 != 0) {
        u32 r0_6 = *gptr<u8>(r8 + 0x15u);
        if (r0_6 == 1u) {
            u32 r4_1 = *gptr<u32>(*global_0025db24);
            u32 r1_2 = *gptr<u8>(r0 + 0x89d0u + r9);
            import_thunk_14fa04(r4_1, r1_2, r2, r3);
            *gptr<u8>(r6 + 0x7e16u) = 1;
            u32 r0_7 = *gptr<u32>(r6 + 0x7dfcu);
            if (r0_7 != 0) {
                import_thunk_14f9fc(r0_7, 1u);
            }
            *gptr<u32>(r6 + 0x7e20u) = r9;
            return;
        }
        if (AcPlayer__can_act(r0_6, r1, r2, r3) == 0) {
            return;
        }
        *town_runtime_flags = *town_runtime_flags | 0x400u;
        u32 r0_9 = *gptr<u8>(r0 + 0x89d0u + r9);
        frame->word_0 = 0;
        player_call_6739b8(r0_9, 1u, 0u, 0u);
        return;
    }
}

}  // namespace d_0025d9e4
GUEST_EXPORT_FRAMED(0x0025d9e4, d_0025d9e4::BsMenu__find_player_with_flag, 0x43f0);  // pushes {i, r5, r6, r7, r8, r9, lr} first, as the original

// f_0025efb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the mode (+0x7e0e) and, for mode 1, resets the sub-menu at +0x6e2c.
namespace d_0025efb8 {

inline constexpr guest::Function<0x0029b480, u32(u32, u32, u32, u32)> SubMenu__reset;

u32 BsMenu__set_mode_7e0e(u32 bs_menu, u32 r1) {
    *gptr<u8>(bs_menu + 0x7e0eu) = u8(r1);
    u32 r1_1 = *gptr<u8>(bs_menu + 0x7e0eu);
    if (r1_1 != 1u) {
        guest::cpu()->r[1] = r1_1;
        return bs_menu;
    }
    return SubMenu__reset(bs_menu + 0x6e2cu, r1_1, 0x7e0eu, guest::cpu()->r[3]);
}

}  // namespace d_0025efb8
GUEST_EXPORT(0x0025efb8, d_0025efb8::BsMenu__set_mode_7e0e);

// f_0025f390: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys the reaction menu: its windows, buttons, layouts and menu base.
namespace d_0025f390 {

inline constexpr u32 vtable_ComButton1Lyt = 0x008ee218u;
inline constexpr u32 vtable_DragIconGroup = 0x008ee248u;
inline constexpr u32 vtable_DragIconGroup_at_c = 0x008ee258u;
inline constexpr u32 vtable_BsMenuReaction = 0x008eef60u;
inline constexpr u32 vtable_BsMenuReaction_at_28 = 0x008eefccu;
inline constexpr u32 vtable_Control1Button = 0x008ef22cu;
inline constexpr u32 vtable_Control1Button_at_e4 = 0x008ef270u;
inline constexpr u32 vtable_DragIconControl_rec = 0x008f08acu;
inline constexpr u32 vtable_ComButtonLytBase = 0x008f18f4u;
inline constexpr u32 vtable_ItemSelectNameWindow = 0x008f47a0u;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;
inline constexpr guest::Function<0x002f770c, u32(u32)> ControlButtonBase__destructor;
inline constexpr guest::Function<0x002f7710, u32(u32, u32)> destroy_button_action_control;
inline constexpr guest::Function<0x00567ef0, u32(u32, u32)> ssys__ma__lyt__ArcResAccReader__destructor;
inline constexpr guest::Function<0x0056988c, u32(u32)> destroy_animation;
inline constexpr guest::Function<0x005bf744, u32(u32)> Layout__destructor;
inline constexpr guest::Function<0x005e3194, u32(u32, u32)> script__RenderTrace__destructor_b;
inline constexpr guest::Function<0x006aaa30, u32(u32, u32)> MenuBase__destructor;

u32 BsMenuReaction__destructor(gptr<BsMenuReaction> bs_menu_reaction) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    bs_menu_reaction->bs_menu_reaction_vtable = vtable_BsMenuReaction_at_28;
    bs_menu_reaction->vtable = vtable_BsMenuReaction;
    u32 r4_1 = bs_menu_reaction.addr() + 0x77ccu;
    bs_menu_reaction->vtable_7434 = vtable_ComButton1Lyt;
    bs_menu_reaction->control1_button_vtable = vtable_Control1Button;
    bs_menu_reaction->control1_button_vtable_78b0 = vtable_Control1Button_at_e4;
    destroy_array_elements(bs_menu_reaction.addr() + 0x78e4u, 0x2e0b3cu, 0x518u, 1u);
    ControlButtonBase__destructor(r4_1);
    bs_menu_reaction->vtable_7434 = vtable_ComButtonLytBase;
    u32 r0_5 = Layout__destructor(ssys__ma__lyt__ArcResAccReader__destructor(r4_1 - 0x248u, vtable_ComButtonLytBase) - 0x14cu);
    *gptr<u32>(r0_5 - 0x4f4u) = vtable_ItemSelectNameWindow;
    u32 r0_6 = r0_5 - 0xd8u;
    script__RenderTrace__destructor_b(r0_6, vtable_ItemSelectNameWindow);
    u32 r0_7 = r0_6 - 0x28u;
    destroy_animation(r0_7);
    u32 r0_8 = r0_7 - 0x28u;
    destroy_animation(r0_8);
    u32 r0_11 = Layout__destructor(r0_8 - 0x15cu) - 0x24cu;
    u32 ea_1 = ssys__ma__lyt__ArcResAccReader__destructor(r0_11, guest::cpu()->r[1]) - 0x13cu;
    *gptr<u32>(ea_1) = vtable_DragIconControl_rec;
    destroy_button_action_control(ea_1, vtable_DragIconControl_rec);
    *gptr<u32>(ea_1 - 0x134u) = vtable_DragIconGroup_at_c;
    *gptr<u32>(ea_1 - 0x140u) = vtable_DragIconGroup;
    u32 r0_13 = ea_1 - 0x2cu;
    destroy_animation(r0_13);
    u32 r0_14 = r0_13 - 0x28u;
    destroy_animation(r0_14);
    u32 r0_15 = r0_14 - 0x28u;
    destroy_animation(r0_15);
    u32 r0_16 = r0_15 - 0x28u;
    destroy_animation(r0_16);
    u32 r0_17 = r0_16 - 0x28u;
    destroy_animation(r0_17);
    u32 r0_18 = r0_17 - 0x28u;
    destroy_animation(r0_18);
    u32 r0_19 = r0_18 - 0x2cu;
    destroy_animation(r0_19);
    *gptr<u32>(r0_19 - 0x154u) = vtable_DragIconGroup_at_c;
    *gptr<u32>(r0_19 - 0x160u) = vtable_DragIconGroup;
    u32 r0_20 = r0_19 - 0x4cu;
    destroy_animation(r0_20);
    u32 r0_21 = r0_20 - 0x28u;
    destroy_animation(r0_21);
    u32 r0_22 = r0_21 - 0x28u;
    destroy_animation(r0_22);
    u32 r0_23 = r0_22 - 0x28u;
    destroy_animation(r0_23);
    u32 r0_24 = r0_23 - 0x28u;
    destroy_animation(r0_24);
    u32 r0_25 = r0_24 - 0x28u;
    destroy_animation(r0_25);
    u32 r0_26 = r0_25 - 0x2cu;
    destroy_animation(r0_26);
    destroy_array_elements(r0_26 - 0x280u, 0x1ff9d4u, 0x130u, 2u);
    destroy_array_elements(r0_26 - 0x6720u, 0x320fc8u, 0x284u, 0x28u);
    u32 r0_29 = r0_26 - 0x674cu;
    destroy_animation(r0_29);
    u32 r0_30 = r0_29 - 0x28u;
    destroy_animation(r0_30);
    u32 r0_31 = r0_30 - 0x28u;
    destroy_animation(r0_31);
    u32 r0_32 = r0_31 - 0x28u;
    destroy_animation(r0_32);
    u32 r0_33 = r0_32 - 0x28u;
    destroy_animation(r0_33);
    u32 r0_36 = Layout__destructor(r0_33 - 0x14cu) - 0x248u;
    u32 r0_38 = ssys__ma__lyt__ArcResAccReader__destructor(r0_36, guest::cpu()->r[1]) - 0x4cu;
    frame.release();
    return MenuBase__destructor(r0_38, guest::cpu()->r[1]);
}

}  // namespace d_0025f390
GUEST_EXPORT(0x0025f390, d_0025f390::BsMenuReaction__destructor);

// f_0025f970: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0025f970 {

inline constexpr u32 vtable_script__WordFix_9u__rec = 0x0090a3e8u;
inline guest::global<u32, 0x00aaf14c> current_player_data;
inline constexpr guest::Function<0x0025f68c, u32(u32, u32)> DebugText__format_rows;
inline constexpr guest::Function<0x0025f740, u32(u32, u32, u32)> sead__FixedSafeString_32___FixedSafeString_0025f740;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32)> script__construct_word_ptr;
inline constexpr guest::Function<0x00309ef0, u32(u32, u32, u32, u32)> SavedRecordInner__has_value;
inline constexpr guest::Function<0x0056d874, u32(u32, u32, u32, u32)> set_villager_entry_word;
inline constexpr guest::Function<0x005e2e50, u32(u32, u32)> start_message;
inline constexpr guest::Function<0x005e2f94, u32(u32)> TextBox__layout_lines;
inline constexpr guest::Function<0x005f4bfc, u32(u32)> construct_script_word;
inline constexpr guest::Function<0x00757004, u32(u32)> size_for_kind_byte_8;
inline constexpr guest::Function<0x00757160, u32(u32)> villager_personality_of_record;
inline constexpr guest::Function<0x007571a0, u32(u32, u32, u32, u32)> SavedRecordInner__entry;

struct __attribute__((packed)) ScriptWordFix9uWordFix0025f970Frame {
    u32 word_0;
    u8 unknown_4[0x28];  // (not read or written by name)
    u32 villager_personality;
    u8 unknown_30[0x1c];  // (not read or written by name)
};
GUEST_OFFSET(ScriptWordFix9uWordFix0025f970Frame, word_0, 0x0);
GUEST_OFFSET(ScriptWordFix9uWordFix0025f970Frame, villager_personality, 0x2c);
GUEST_SIZE(ScriptWordFix9uWordFix0025f970Frame, 0x4c);

void script__WordFix_9u___WordFix_0025f970(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<ScriptWordFix9uWordFix0025f970Frame> frame;  // the original's stack frame
    u32 res_1 = 0;
    u32 r2_8 = 0;
    u32 r9 = r0;
    u32 r0_1 = *current_player_data + 0x8e08u;
    u32 r10 = r0_1;
    u32 r0_2 = SavedRecordInner__has_value(r0_1, r1, r2, r3);
    if (r0_2 != 0 && *gptr<u8>(r10 + 9u) < 3u) {
        u32 villager_personality = villager_personality_of_record(r10);
        frame->villager_personality = villager_personality;
        if (villager_personality < 8u) {
            u32 r0_4 = size_for_kind_byte_8(r10);
            u32 r6 = 0u;
            u32 r7 = r0_4;
            u32 i = r6;
            if (s32(r0_4) > 0) {
                u32 r11 = 0x8906ecu;
                u32 r8 = vtable_script__WordFix_9u__rec;
                do {
                    if (SavedRecordInner__entry(r10, frame.at(0x30).addr(), frame.at(0x48).addr(), i) != 0) {
                        u32 r0_6 = frame.at(0).addr();
                        script__construct_word_ptr(r0_6, frame.at(0x18).addr(), 9u);
                        *gptr<u32>(r0_6) = r8;
                        u32 r0_7 = r0_6 + 0xcu;
                        construct_script_word(r0_7);
                        u32 r5 = r0_7 - 0xcu;
                        clear_aligned(r0_7 + 0xcu, 0x12u);
                        r3 = guest::cpu()->r[3];
                        r0 = r5 + 0x18u;
                        *gptr<u16>(r5 + 0x18u) = *gptr<u16>(r11);
                        r1 = 4u;
                        do {
                            u32 r2_7 = *gptr<u16>(r11);
                            res_1 = r1 - 1u;
                            r1 = res_1;
                            *gptr<u16>(r0 + 2u) = u16(r2_7);
                            r2_8 = *gptr<u16>(r11);
                            u32 ea_2 = r0 + 4u;
                            *gptr<u16>(ea_2) = u16(r2_8);
                            r0 = ea_2;
                            guest::preempt();
                        } while (res_1 != 0);
                        set_villager_entry_word(r5, frame.at(0x48).addr(), r2_8, r3);
                        u32 r5_1 = r9 + (r6 * 0x11u + (r6 << 5) << 2);
                        start_message(r5_1 + 0x430u, frame.at(0).addr());
                        TextBox__layout_lines(r5_1 + 0x430u);
                        r6 += 1u;
                        frame->word_0 = r8;
                    }
                    i += 1u;
                    guest::preempt();
                } while (s32(i) < s32(r7));
            }
            DebugText__format_rows(r9, r6);
            u32 r2_11 = *gptr<u8>(r10 + 0xb4u);
            sead__FixedSafeString_32___FixedSafeString_0025f740(r9, frame->villager_personality, r2_11);
        }
    }
}

}  // namespace d_0025f970
GUEST_EXPORT_FRAMED(0x0025f970, d_0025f970::script__WordFix_9u___WordFix_0025f970, 0x4ff0);  // pushes {i, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_0025fadc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0025fadc {

inline constexpr u32 vtable_script__WordFix_75u_ = 0x0090a308u;
inline constexpr u32 vtable_script__WordFix_9u__rec = 0x0090a3e8u;
inline constexpr u32 message_store_address = 0x0095deccu;
inline guest::global<u32, 0x00aaf14c> current_player_data;
inline constexpr guest::Function<0x0025f68c, u32(u32, u32, u32, u32)> DebugText__format_rows;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> get_data_base;
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> script__construct_word_ptr;
inline constexpr guest::Function<0x0056d874, u32(u32, u32, u32, u32)> set_villager_entry_word;
inline constexpr guest::Function<0x0056e04c, u32(u32, u32, u32, u32)> script__WordCPtrSv__WordCPtrSv_0056e04c;
inline constexpr guest::Function<0x005d6cc0, u32(u32, u32)> start_window_message;
inline constexpr guest::Function<0x005d6d28, u32(u32)> TextBox__layout_lines_b;
inline constexpr guest::Function<0x005e2e50, u32(u32, u32)> start_message;
inline constexpr guest::Function<0x005e2f94, u32(u32)> TextBox__layout_lines;
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32)> LinkOwner__unlink;
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> MessageStore__attach_window;
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> load_message;
inline constexpr guest::Function<0x005f12f4, u32(u32, u32, u32)> call_virtual_24_5f12f4;
inline constexpr guest::Function<0x005f4bfc, u32(u32)> construct_script_word;
inline constexpr guest::Function<0x00716d80, u32(u32, u32)> SlotSet6__count_used;

struct __attribute__((packed)) BuildUiTextBoxFrame {
    u32 word_0;
    u8 unknown_4[0x4];  // (not read or written by name)
    u32 word_8;
    u8 unknown_c[0xac];  // (not read or written by name)
    u32 word_b8;
    u8 unknown_bc[0x28];  // (not read or written by name)
    u16 half_e4;
    u8 unknown_e6[0x2];  // (not read or written by name)
    u32 word_e8;
    u8 unknown_ec[0x3c];  // (not read or written by name)
};
GUEST_OFFSET(BuildUiTextBoxFrame, word_0, 0x0);
GUEST_OFFSET(BuildUiTextBoxFrame, word_8, 0x8);
GUEST_OFFSET(BuildUiTextBoxFrame, word_b8, 0xb8);
GUEST_OFFSET(BuildUiTextBoxFrame, half_e4, 0xe4);
GUEST_OFFSET(BuildUiTextBoxFrame, word_e8, 0xe8);
GUEST_SIZE(BuildUiTextBoxFrame, 0x128);

void build_ui_text_box(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<BuildUiTextBoxFrame> frame;  // the original's stack frame
    u32 r5 = 0;
    u32 res_1 = 0;
    u32 r2_6 = 0;
    u32 res_2 = 0;
    u32 r2_12 = 0;
    u32 res_3 = 0;
    u32 r2_16 = 0;
    u32 r7 = r0;
    u32 data_base = get_data_base(r0, r1, r2, r3);
    u32 slot_set6 = data_base + 0x6ad02u;
    u32 r0_2 = SlotSet6__count_used(slot_set6, 0x6ad02u);
    r3 = guest::cpu()->r[3];
    u32 r10 = 0x8906ecu;
    u32 r6 = vtable_script__WordFix_9u__rec;
    u32 r8 = r0_2;
    u32 i = 0u;
    if (s32(r0_2) > 0) {
        do {
            u32 r0_3 = frame.at(0xb8).addr();
            frame->half_e4 = *gptr<u16>(slot_set6 + (i << 1) + 4u);
            script__construct_word_ptr(r0_3, frame.at(0xd0).addr(), 9u, r3);
            *gptr<u32>(r0_3) = r6;
            u32 r0_4 = r0_3 + 0xcu;
            construct_script_word(r0_4);
            r5 = r0_4 - 0xcu;
            clear_aligned(r0_4 + 0xcu, 0x12u);
            r3 = guest::cpu()->r[3];
            r0 = r5 + 0x18u;
            *gptr<u16>(r5 + 0x18u) = *gptr<u16>(r10);
            r1 = 4u;
            do {
                u32 r2_5 = *gptr<u16>(r10);
                res_1 = r1 - 1u;
                r1 = res_1;
                *gptr<u16>(r0 + 2u) = u16(r2_5);
                r2_6 = *gptr<u16>(r10);
                u32 ea_2 = r0 + 4u;
                *gptr<u16>(ea_2) = u16(r2_6);
                r0 = ea_2;
                guest::preempt();
            } while (res_1 != 0);
            set_villager_entry_word(r5, frame.at(0xe4).addr(), r2_6, r3);
            u32 r5_1 = r7 + (i * 0x11u + (i << 5) << 2);
            start_message(r5_1 + 0x430u, frame.at(0xb8).addr());
            TextBox__layout_lines(r5_1 + 0x430u);
            r3 = guest::cpu()->r[3];
            frame->word_b8 = r6;
            i += 1u;
            guest::preempt();
        } while (s32(i) < s32(r8));
    }
    DebugText__format_rows(r7, r8, guest::cpu()->r[2], r3);
    u32 r0_8 = frame.at(8).addr();
    script__construct_word_ptr(r0_8, frame.at(0x20).addr(), 0x4bu, guest::cpu()->r[3]);
    r5 = vtable_script__WordFix_75u_;
    *gptr<u32>(r0_8) = r5;
    u32 r0_9 = r0_8 + 0xcu;
    construct_script_word(r0_9);
    u32 r4_1 = r0_9 - 0xcu;
    clear_aligned(r0_9 + 0xcu, 0x96u);
    r3 = guest::cpu()->r[3];
    r0 = r4_1 + 0x18u;
    *gptr<u16>(r4_1 + 0x18u) = *gptr<u16>(r10);
    r1 = 0x25u;
    do {
        u32 r2_11 = *gptr<u16>(r10);
        res_2 = r1 - 1u;
        r1 = res_2;
        *gptr<u16>(r0 + 2u) = u16(r2_11);
        r2_12 = *gptr<u16>(r10);
        u32 ea_4 = r0 + 4u;
        *gptr<u16>(ea_4) = u16(r2_12);
        r0 = ea_4;
        guest::preempt();
    } while (res_2 != 0);
    r8 = message_store_address;
    MessageStore__attach_window(*gptr<u32>(r8), 0u, r2_12, r3);
    u32 r0_12 = frame.at(0xe8).addr();
    script__construct_word_ptr(r0_12, frame.at(0x100).addr(), 9u, guest::cpu()->r[3]);
    *gptr<u32>(r0_12) = r6;
    u32 r0_13 = r0_12 + 0xcu;
    construct_script_word(r0_13);
    u32 r4_2 = r0_13 - 0xcu;
    clear_aligned(r0_13 + 0xcu, 0x12u);
    r3 = guest::cpu()->r[3];
    r0 = r4_2 + 0x18u;
    *gptr<u16>(r4_2 + 0x18u) = *gptr<u16>(r10);
    r1 = 4u;
    do {
        u32 r2_15 = *gptr<u16>(r10);
        res_3 = r1 - 1u;
        r1 = res_3;
        *gptr<u16>(r0 + 2u) = u16(r2_15);
        r2_16 = *gptr<u16>(r10);
        u32 ea_6 = r0 + 4u;
        *gptr<u16>(ea_6) = u16(r2_16);
        r0 = ea_6;
        guest::preempt();
    } while (res_3 != 0);
    script__WordCPtrSv__WordCPtrSv_0056e04c(frame.at(0xe8).addr(), *current_player_data + 0x55bcu, r2_16, r3);
    call_virtual_24_5f12f4(*gptr<u32>(*gptr<u32>(r8) + 0x14u), frame.at(0xe8).addr(), 0u);
    frame->word_0 = 0;
    load_message(*gptr<u32>(r8), frame.at(8).addr(), 0x25fd54u, 0x123u);
    LinkOwner__unlink(*gptr<u32>(r8), 0u);
    u32 window = r7 + 0x8c8u;
    start_window_message(window, frame.at(8).addr());
    TextBox__layout_lines_b(window);
    frame->word_e8 = r6;
    frame->word_8 = r5;
}

}  // namespace d_0025fadc
GUEST_EXPORT_FRAMED(0x0025fadc, d_0025fadc::build_ui_text_box, 0x47f0);  // pushes {i, r5, r6, r7, r8, slot_set6, r10, lr} first, as the original
