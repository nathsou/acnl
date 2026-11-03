// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_00530da8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00530da8 {

struct __attribute__((packed)) sead__SafeStringBase_char_ {
    u8 unknown_0[0x290];  // (not used here)
    u8 byte_290;
    u8 byte_291;
};
GUEST_OFFSET(sead__SafeStringBase_char_, byte_290, 0x290);
GUEST_OFFSET(sead__SafeStringBase_char_, byte_291, 0x291);

inline constexpr u32 vtable_sead__SafeStringBase_char_ = 0x009047f8u;
inline constexpr u32 strc_heap_address = 0x00952c5cu;
inline guest::global<u32, 0x00952c5c> strc_heap;
inline constexpr guest::Function<0x002d5b40, u32(u32, u32)> SoundObjWithMelody__play_at;
inline constexpr guest::Function<0x0031758c, u32(u32, u32, u32, u32)> HeapHolder__recreate;
inline constexpr guest::Function<0x008156fc, u32(u32, u32, u32)> recreate_resource_mgr_heap;

struct __attribute__((packed)) Frame_00530da8 {
    u32 word_0;
    u32 word_4;
    u32 object_8_vtable;
    u32 word_c;
};
GUEST_OFFSET(Frame_00530da8, word_0, 0x0);
GUEST_OFFSET(Frame_00530da8, word_4, 0x4);
GUEST_OFFSET(Frame_00530da8, object_8_vtable, 0x8);
GUEST_OFFSET(Frame_00530da8, word_c, 0xc);
GUEST_SIZE(Frame_00530da8, 0x10);

u32 construct_door_allocator(gptr<sead__SafeStringBase_char_> safe_string_base_char, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00530da8> frame;  // the original's stack frame
    u32 r7_1 = *strc_heap;
    frame->object_8_vtable = vtable_sead__SafeStringBase_char_;
    frame->word_c = 0x530e28;  // (from the original)
    frame->word_0 = 1;
    frame->word_4 = 0;
    HeapHolder__recreate(safe_string_base_char.addr(), 0x1400u, r7_1, frame.at(8).addr());  // (from the original)
    recreate_resource_mgr_heap(safe_string_base_char.addr() + 0x2cu, r7_1, 0x4000u);  // (from the original)
    safe_string_base_char->byte_290 = u8(r1);
    safe_string_base_char->byte_291 = u8(r2);
    u32 play = SoundObjWithMelody__play_at(safe_string_base_char.addr() + 0x2a4u, r3);  // (from the original)
    return play;
}

}  // namespace d_00530da8
GUEST_EXPORT_FRAMED(0x00530da8, d_00530da8::construct_door_allocator, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0053138c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls slot 4 of the cloud model's transform node.
namespace d_0053138c {

inline constexpr guest::Function<0x004ee364, u32(u32, u32)> TransformNode__call_node_slot_4;

u32 MapCloud__call_node_slot_4(u32 map_cloud) {
    return TransformNode__call_node_slot_4(map_cloud + 8u, 0u);
}

}  // namespace d_0053138c
GUEST_EXPORT(0x0053138c, d_0053138c::MapCloud__call_node_slot_4);

// f_00531398: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Updates the cloud model's transform and model.
namespace d_00531398 {

inline constexpr guest::Function<0x004edd20, u32(u32, u32, u32, u32)> escape__MapCloudModel__virtual_2;
inline constexpr guest::Function<0x004ee4c8, u32(u32, u32, u32, u32)> TransformNode__update_transform;

u32 MapCloud__update(u32 map_cloud) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    TransformNode__update_transform(map_cloud + 8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    frame.release();
    return escape__MapCloudModel__virtual_2(map_cloud + 8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00531398
GUEST_EXPORT(0x00531398, d_00531398::MapCloud__update);

// f_005313b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Releases the item model: its sub parts, model, animation, the two lists of loaded parts and its objects.
namespace d_005313b4 {

struct __attribute__((packed)) ItemModel {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u8 unknown_10[0xc];  // (not used here)
    u32 word_1c;
    u8 unknown_20[0x250];  // (not used here)
    u32 word_270;
};
GUEST_OFFSET(ItemModel, word_c, 0xc);
GUEST_OFFSET(ItemModel, word_1c, 0x1c);
GUEST_OFFSET(ItemModel, word_270, 0x270);

inline constexpr guest::Function<0x00132478, u32(u32, u32)> clear_list;
inline constexpr guest::Function<0x0013f134, u32(u32, u32)> queue_append;
inline constexpr guest::Function<0x002d5f68, u32(u32, u32, u32, u32)> SoundObjWithMelody__stop;
inline constexpr guest::Function<0x002f73b8, u32(u32)> unload_split_part;
inline constexpr guest::Function<0x002f747c, u32(u32, u32, u32, u32)> ObjectOwner__release_object;
inline constexpr guest::Function<0x004ecec8, u32(u32, u32)> g3d__MorphSkeletalAnim__virtual_5;
inline constexpr guest::Function<0x004f1270, u32(u32, u32)> model_virtual_3;
inline constexpr guest::Function<0x005b19f8, u32(u32, u32)> WordAndFlag__clear;

u32 ItemModel__release(gptr<ItemModel> item_model, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0 = item_model.addr();
    u32 r6 = r0;
    SoundObjWithMelody__stop(r0 + 0x2a4u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    if (item_model->word_c != 0) {
        model_virtual_3(r6 + 8u, r1);
        r1 = guest::cpu()->r[1];
    }
    if (item_model->word_1c != 0) {
        g3d__MorphSkeletalAnim__virtual_5(r6 + 0x14u, r1);  // (from the original)
        r1 = guest::cpu()->r[1];
    }
    u32 r4 = item_model->word_270;
    u32 r5 = r6 + 0x2cu;  // (from the original)
    if (r4 != 0) {
        do {
            WordAndFlag__clear(r4 + 0xcu, r1);  // (from the original)
            unload_split_part(r4 + 0x14u);  // (from the original)
            r1 = guest::cpu()->r[1];
            r4 = *gptr<u32>(r4 + 8u);
            guest::preempt();
        } while (r4 != 0);
    }
    r4 = *gptr<u32>(r5 + 0x25cu);  // (from the original)
    if (r4 != 0) {
        do {
            WordAndFlag__clear(r4 + 0xcu, r1);  // (from the original)
            unload_split_part(r4 + 0x14u);  // (from the original)
            r1 = guest::cpu()->r[1];
            r4 = *gptr<u32>(r4 + 8u);
            guest::preempt();
        } while (r4 != 0);
    }
    clear_list(r5 + 0x240u, r1);  // (from the original)
    clear_list(r5 + 0x24cu, guest::cpu()->r[1]);  // (from the original)
    clear_list(r5 + 0x258u, guest::cpu()->r[1]);  // (from the original)
    r4 = 0u;
    do {
        queue_append(r5 + 0x24cu, r5 + (r4 * 7u + (r4 << 6) << 2) + 8u);  // (from the original)
        r4 += 1u;
        guest::preempt();
    } while (r4 < 2u);
    ObjectOwner__release_object(r5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    frame.release();
    return ObjectOwner__release_object(r6, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005313b4
GUEST_EXPORT(0x005313b4, d_005313b4::ItemModel__release);

// f_0053149c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs the item model: its allocators, skeletal model, animation, the two part slots and lists.
namespace d_0053149c {

struct __attribute__((packed)) Local_0053149c_r0_10 {
    u8 unknown_0[0x290];  // (not used here)
    u8 byte_290;
    u8 byte_291;
};
GUEST_OFFSET(Local_0053149c_r0_10, byte_290, 0x290);
GUEST_OFFSET(Local_0053149c_r0_10, byte_291, 0x291);

inline constexpr guest::Function<0x00125e08, u32(u32)> construct_layout_list;
inline constexpr guest::Function<0x002d5f90, u32(u32)> SoundObjWithMelody__construct;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x004ecf18, u32(u32)> construct_base_anim_4ecf18;
inline constexpr guest::Function<0x004edd3c, u32(u32)> construct_skeletal_model;
inline constexpr guest::Function<0x005673c8, u32(u32, u32, u32, u32)> construct_heap_allocator;
inline constexpr guest::Function<0x005b1a1c, u32(u32, u32)> ClearableSlot__clear;

u32 ItemModel__construct(u32 item_model, u32 r1, u32 r2, u32 r3) {
    construct_heap_allocator(item_model, r1, r2, r3);
    u32 r0_1 = item_model + 8u;
    construct_skeletal_model(r0_1);
    u32 r0_2 = r0_1 + 0xcu;  // (from the original)
    construct_base_anim_4ecf18(r0_2);
    clear_aligned(r0_2 + 0x18u, 0x264u);  // (from the original)
    u32 r0_4 = r0_2 + 0x18u;  // (from the original)
    construct_heap_allocator(r0_4, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_6 = for_each_element(r0_4 + 8u, 0x5b1c18u, 0x11cu, 2u);  // (from the original)
    u32 r0_7 = r0_6 + 0x238u;  // (from the original)
    construct_layout_list(r0_7);
    u32 r0_8 = r0_7 + 0xcu;  // (from the original)
    construct_layout_list(r0_8);
    u32 r0_9 = r0_8 + 0xcu;  // (from the original)
    construct_layout_list(r0_9);
    gptr<Local_0053149c_r0_10> r0_10 = gptr<Local_0053149c_r0_10>(r0_9 - 0x284u);  // (from the original)
    r0_10->byte_290 = 0;
    r0_10->byte_291 = 0;
    u32 r0_11 = r0_10.addr() + 0x294u;  // (from the original)
    ClearableSlot__clear(r0_11, 0u);
    u32 r0_12 = r0_11 + 8u;
    ClearableSlot__clear(r0_12, guest::cpu()->r[1]);
    u32 r0_14 = SoundObjWithMelody__construct(r0_12 + 8u);
    return r0_14 - 0x2a4u;  // (from the original)
}

}  // namespace d_0053149c
GUEST_EXPORT_FRAMED(0x0053149c, d_0053149c::ItemModel__construct, 0x4010);  // pushes {r4, lr} first, as the original

// f_0053152c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys the item model's parts, allocators and animation.
namespace d_0053152c {

inline constexpr guest::Function<0x002e9324, u32(u32, u32, u32, u32)> SoundObj3d__destroy;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;
inline constexpr guest::Function<0x00317dec, u32(u32, u32, u32, u32)> ssys__ma__HeapAllocator__destructor;
inline constexpr guest::Function<0x004ecf70, u32(u32)> g3d__SkeletalAnim__destructor;
inline constexpr guest::Function<0x004edd84, u32(u32)> set_base_vtable_004edd84;

u32 ItemModel__destroy(u32 item_model, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = item_model + 0x2a4u;  // (from the original)
    SoundObj3d__destroy(r0_1, r1, r2, r3);
    destroy_array_elements(r0_1 - 0x270u, 0x5b1c68u, 0x11cu, 2u);  // (from the original)
    ssys__ma__HeapAllocator__destructor(r0_1 - 0x278u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    g3d__SkeletalAnim__destructor(r0_1 - 0x290u);  // (from the original)
    set_base_vtable_004edd84(r0_1 - 0x29cu);  // (from the original)
    frame.release();
    return ssys__ma__HeapAllocator__destructor(r0_1 - 0x2a4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0053152c
GUEST_EXPORT(0x0053152c, d_0053152c::ItemModel__destroy);

// f_005360e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The first or second word of the entry of the kind (below 0xaa, 0xc bytes each) of the table at 0x878198.
namespace d_005360e0 {

struct __attribute__((packed)) Object_005360e0_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_005360e0_0, byte_0, 0x0);

inline guest::global<u32, 0x00878198> global_00878198;

u32 kind_table_878198_word(gptr<Object_005360e0_0> arg0, u32 r1) {
    u32 r0_1 = arg0->byte_0;
    if (r0_1 >= 0xaau) {  // (from the original)
        return *global_00878198;
    }
    u32 r0_3 = r0_1 * 3u;
    return r1 == 0 ? *gptr<u32>((r0_3 << 2) + 0x878198u + 4u) : gptr<u32>(0x878198u)[r0_3];  // (from the original)
}

}  // namespace d_005360e0
GUEST_EXPORT(0x005360e0, d_005360e0::kind_table_878198_word);

// f_00536110: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Half `index` (below 0x56) of the table at 0xa184e4; the default otherwise.
namespace d_00536110 {

inline constexpr u32 global_00a184e4_address = 0x00a184e4u;

u32 half_of_86_a184e4(u32 r0) {
    return *gptr<u16>(r0 >= 0x56u ? 0x887086u : (r0 << 1) + global_00a184e4_address);  // (from the original)
}

}  // namespace d_00536110
GUEST_EXPORT(0x00536110, d_00536110::half_of_86_a184e4);

// f_00536130: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The model word of the item (by its model index, with the variant for indices 0x136 and 0x151); the default
// otherwise.
namespace d_00536130 {

inline guest::global<u32, 0x00878990> item_model_words;
inline constexpr guest::Function<0x005361a8, u32(u32)> Item__data;
inline constexpr guest::Function<0x006bf18c, u32(u32)> Item__growth_scale;

u32 Item__model_word(u32 item, float S0) {
    u32 r0_3 = 0;
    u32 item_data_2 = Item__data(item);
    float S0_1 = guest::cpu()->s[0];
    if (item_data_2 != 0) {
        u32 r4_1 = *gptr<u16>(item_data_2);
        if (r4_1 >= 0x1fbu) {  // (from the original)
            r4_1 = 0u;
            return gptr<u32>(0x878990u)[r4_1];  // (from the original)
        }
        if (r4_1 != 0x136u && r4_1 != 0x151u) {  // (from the original)
            return gptr<u32>(0x878990u)[r4_1];  // (from the original)
        }
        Item__growth_scale(item);
        float S0_2 = guest::cpu()->s[0];
        S0_1 = std::bit_cast<float>(vcvt_uz_f(S0_2));
        u32 r0_2 = std::bit_cast<u32>(S0_1) + r4_1;
        r0_3 = r0_2 < 0x1fbu ? gptr<u32>(0x878990u)[r0_2] : *item_model_words;  // (from the original)
    } else {
        r0_3 = *item_model_words;
    }
    guest::cpu()->s[0] = S0_1;
    return r0_3;
}

}  // namespace d_00536130
GUEST_EXPORT_FRAMED(0x00536130, d_00536130::Item__model_word, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_005361e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Entry `index` (below 0x9b, 3 bytes each) of the table held at 0xa183a0; null otherwise.
namespace d_005361e8 {

inline constexpr u32 table_a183a0_address = 0x00a183a0u;
inline guest::global<u32, 0x00a183a0> table_a183a0;

u32 table_a183a0_entry(u32 r0, u32 r1) {
    if (r0 >= 0x9bu) {  // (from the original)
        return 0u;
    }
    u32 r1_1 = *table_a183a0;
    if (r1_1 != 0) {
        guest::cpu()->r[1] = r1_1;
        return r0 * 3u + r1_1;
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_005361e8
GUEST_EXPORT(0x005361e8, d_005361e8::table_a183a0_entry);

// f_005369d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The byte at +0x34 of the model's material `index` (only for materials of the right kind).
namespace d_005369d0 {

struct __attribute__((packed)) ResModel {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(ResModel, word_8, 0x8);

struct __attribute__((packed)) Local_005369d0_r0_1 {
    u32 word_0;
    u8 unknown_4[0x30];  // (not used here)
    u32 word_34;
};
GUEST_OFFSET(Local_005369d0_r0_1, word_0, 0x0);
GUEST_OFFSET(Local_005369d0_r0_1, word_34, 0x34);


u32 ResModel__material_byte_34(gptr<ResModel> res_model, u32 r1) {
    gptr<Local_005369d0_r0_1> r0_1 = gptr<Local_005369d0_r0_1>(0u);
    u32 ea_1 = res_model->word_8 + 0x28u;  // (from the original)
    u32 r3_1 = *gptr<u32>(ea_1);
    u32 r2_1 = r3_1 == 0 ? r0_1.addr() : ea_1 + r3_1;
    if (r2_1 == 0) {
        r0_1 = gptr<Local_005369d0_r0_1>(0u);
    } else {
        u32 ea_2 = r2_1 + (r1 << 4) + 0x28u;  // (from the original)
        u32 r2_2 = *gptr<u32>(ea_2);
        if (r2_2 != 0) {
            r0_1 = gptr<Local_005369d0_r0_1>(r2_2 + ea_2);
        }
    }
    if (r0_1.addr() == 0) {
        return r0_1->word_34 & 0xffu;  // (from the original)
    }
    if ((0x20000001u & ~r0_1->word_0) != 0) {  // (from the original)
        r0_1 = gptr<Local_005369d0_r0_1>(0u);
    }
    return r0_1->word_34 & 0xffu;  // (from the original)
}

}  // namespace d_005369d0
GUEST_EXPORT(0x005369d0, d_005369d0::ResModel__material_byte_34);

// f_00536a28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The texture of the model's material `index` (only for materials of the right kind); null otherwise.
namespace d_00536a28 {

struct __attribute__((packed)) ResModel {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(ResModel, word_8, 0x8);


u32 ResModel__material_texture(gptr<ResModel> res_model, u32 r1) {
    u32 r1_1 = 0;
    u32 r0_1 = 0u;
    u32 ea_1 = res_model->word_8 + 0x28u;  // (from the original)
    u32 r3_1 = *gptr<u32>(ea_1);
    u32 r2_1 = r3_1 == 0 ? r0_1 : ea_1 + r3_1;
    if (r2_1 == 0) {
        r1_1 = 0u;
    } else {
        u32 ea_2 = r2_1 + (r1 << 4) + 0x28u;  // (from the original)
        u32 r2_2 = *gptr<u32>(ea_2);
        r1_1 = r2_2 == 0 ? r0_1 : ea_2 + r2_2;
    }
    if (r1_1 == 0) {
        return 0u;
    }
    if ((0x20000011u & ~*gptr<u32>(r1_1)) != 0) {  // (from the original)
        r1_1 = 0u;
    }
    u32 ea_3 = r1_1 + 0x38u;  // (from the original)
    u32 r2_3 = *gptr<u32>(ea_3);
    u32 ea_4 = (r2_3 == 0 ? r0_1 : ea_3 + r2_3) + 0xcu;  // (from the original)
    u32 r2_4 = *gptr<u32>(ea_4);
    if (r2_4 != 0) {
        r0_1 = r2_4 + ea_4;
    }
    return r0_1;
}

}  // namespace d_00536a28
GUEST_EXPORT(0x00536a28, d_00536a28::ResModel__material_texture);

// f_00536cfc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// For tools (category 0x1c), binds the tool's texture to the model's material.
namespace d_00536cfc {

struct __attribute__((packed)) ItemModel {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(ItemModel, word_8, 0x8);

inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> Item__category;
inline constexpr guest::Function<0x004f2c10, u32(u32, u32, u32, u32)> Material__set_value_of_kind;
inline constexpr guest::Function<0x00536650, u32(u32, u32)> Item__model_scale;

void ItemModel__bind_tool_texture(gptr<ItemModel> item_model, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 category_2 = Item__category(r1, r1, r2, guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    if (category_2 == 0x1cu) {  // (from the original)
        u32 r4_1 = 0u;
        u32 ea_1 = item_model->word_8 + 0x20u;  // (from the original)
        r1_1 = *gptr<u32>(ea_1);
        u32 r0_2 = r1_1 == 0 ? r4_1 : ea_1 + r1_1;
        if (r0_2 != 0) {
            u32 ea_2 = r0_2 + 0x28u;  // (from the original)
            r1_1 = *gptr<u32>(ea_2);
            r0_2 = r1_1 == 0 ? r4_1 : ea_2 + r1_1;
        }
        if (r0_2 != 0) {
            u32 ea_3 = r0_2 + 0xc0u;  // (from the original)
            r1_1 = *gptr<u32>(ea_3);
            u32 r0_3 = r1_1 == 0 ? r4_1 : ea_3 + r1_1;
            if (r0_3 == 0) {
                r4_1 = 0u;
            } else {
                u32 ea_4 = r0_3 + 0x28u;  // (from the original)
                r1_1 = *gptr<u32>(ea_4);
                if (r1_1 != 0) {
                    r4_1 = r1_1 + ea_4;
                }
            }
            if (r4_1 != 0) {
                u32 scale = Item__model_scale(r1, r1_1);
                frame.release();
                Material__set_value_of_kind(r4_1, scale, 0u, guest::cpu()->r[3]);
                return;
            }
        }
    }
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_00536cfc
GUEST_EXPORT(0x00536cfc, d_00536cfc::ItemModel__bind_tool_texture);

// f_00536da0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Writes the item's extra model path: its cap, accessory or tool part for clothing (category 0x40), its tool part
// (0x1c), or its catalog model (0x29).
namespace d_00536da0 {

inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> Item__category;
inline constexpr guest::Function<0x005361a8, u32(u32)> Item__data;
inline constexpr guest::Function<0x00544f18, u32(u32, u32)> print_finish;
inline constexpr guest::Function<0x00544fec, u32(u32, u32)> print_append;
inline constexpr guest::Function<0x0054a644, u32(u32, u32)> construct_print_output;

void Item__extra_model_path(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x24);  // the original's stack frame
    u32 r5_1 = *frame.at<u32>(0x38);  // (from the original)
    u32 category_2 = Item__category(r2, r1, r2, r3);
    if (category_2 == 0x40u) {  // (from the original)
        u32 item_data_2 = Item__data(r2);
        u32 r0_3 = *gptr<u8>(item_data_2 + 0xfu);  // (from the original)
        if (r0_3 >= 0x32u) {  // (from the original)
            return;
        }
        if (r0_3 == 0x2au) {  // (from the original)
            u32 r0_4 = frame.at(0).addr();
            construct_print_output(r0_4, r1);
            print_append(r0_4, 0x536f40u);  // (from the original)
            print_append(r0_4, r3);
            print_finish(r0_4, r3);
            return;
        }
        if (r0_3 == 1u) {
            u32 r0_5 = frame.at(0).addr();
            construct_print_output(r0_5, r1);
            print_append(r0_5, 0x536f58u);  // (from the original)
            print_append(r0_5, r3);
            print_finish(r0_5, r3);
            return;
        }
        if (r0_3 != 7u) {
            return;
        }
        goto L_536e3c;
    }
    if (category_2 == 0x1cu) {  // (from the original)
        goto L_536e3c;
    }
    if (category_2 == 0x29u && r5_1 == 1u) {  // (from the original)
        u32 r0_6 = frame.at(0).addr();
        construct_print_output(r0_6, r1);
        print_append(r0_6, 0x536f08u);  // (from the original)
        print_append(r0_6, r3);
        print_finish(r0_6, r3);
    }
    return;
L_536e3c:;
    u32 r0_7 = frame.at(0).addr();
    construct_print_output(r0_7, r1);
    print_append(r0_7, 0x536f24u);  // (from the original)
    print_append(r0_7, r3);
    print_finish(r0_7, r3);
}

}  // namespace d_00536da0
GUEST_EXPORT_FRAMED(0x00536da0, d_00536da0::Item__extra_model_path, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00537028: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Takes the part off the menu list when it is on it, then unloads it.
namespace d_00537028 {

struct __attribute__((packed)) Part {
    u8 unknown_0[0x110];  // (not used here)
    u32 word_110;
};
GUEST_OFFSET(Part, word_110, 0x110);

inline constexpr guest::Function<0x002f73b8, u32(u32, u32, u32, u32)> unload_split_part;
inline constexpr guest::Function<0x006aac18, u32(u32, u32, u32, u32)> unregister_from_menu_list;

u32 unload_menu_part(gptr<Part> part) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    if (part->word_110 == 0) {
        frame.release();
        return unload_split_part(part.addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    unregister_from_menu_list(part.addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    part->word_110 = 0;
    frame.release();
    return unload_split_part(part.addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00537028
GUEST_EXPORT(0x00537028, d_00537028::unload_menu_part);

// f_0053721c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053721c {

inline constexpr guest::Function<0x00317e2c, u32(u32, u32, u32, u32)> g3d__ResourceLoader__destructor;

u32 item__ResLoader__destructor() {
    return g3d__ResourceLoader__destructor(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0053721c
GUEST_EXPORT(0x0053721c, d_0053721c::item__ResLoader__destructor);

// f_00537220: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Refreshes the exhibition park's state and its entries when it exists.
namespace d_00537220 {

inline constexpr guest::Function<0x002bec28, u32(u32, u32, u32, u32)> ParkSets3__slot_flag;
inline constexpr guest::Function<0x002becec, u32(u32)> ParkSets3__prune;
inline constexpr guest::Function<0x005ca6fc, u32(u32, u32, u32, u32)> exhibition_park_data_unless_set;

u32 ExhibitionPark__refresh(u32 exhibition_park) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 park_sets3 = exhibition_park_data_unless_set(exhibition_park, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (park_sets3 != 0) {
        park_sets3 = ParkSets3__prune(park_sets3);
    }
    u32 r0_2 = exhibition_park_data_unless_set(park_sets3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_2 == 0) {
        return r0_2;
    }
    frame.release();
    return ParkSets3__slot_flag(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00537220
GUEST_EXPORT(0x00537220, d_00537220::ExhibitionPark__refresh);

// f_00537328: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// True when the ready exhibition park has fewer than 16 used slots.
namespace d_00537328 {

struct __attribute__((packed)) Local_00537328_r0_1 {
    u8 unknown_0[0xa0];  // (not used here)
    u8 byte_a0;
    u8 byte_a1;
};
GUEST_OFFSET(Local_00537328_r0_1, byte_a0, 0xa0);
GUEST_OFFSET(Local_00537328_r0_1, byte_a1, 0xa1);

inline constexpr u32 exhibition_park_info_instance_address = 0x00952620u;
inline guest::global<u32, 0x00952620> exhibition_park_info_instance;

u32 ExhibitionPark__has_room(u32 r0_unused, u32 r1) {
    gptr<Local_00537328_r0_1> r0_1 = gptr<Local_00537328_r0_1>(*exhibition_park_info_instance);
    u32 zf_1 = r0_1.addr() == 0;
    if (!zf_1) {
        r1 = r0_1->byte_a1;
        zf_1 = r1 == 0;
    }
    if (zf_1) {
        r0_1 = gptr<Local_00537328_r0_1>(0u);
    }
    u32 r0_2 = !(r0_1->byte_a0 >= 0x10u);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_2;
}

}  // namespace d_00537328
GUEST_EXPORT(0x00537328, d_00537328::ExhibitionPark__has_room);

// f_00537358: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Marks the entry free (state 4) when it is the marked slot, and recounts the park's used slots.
namespace d_00537358 {

struct __attribute__((packed)) ExhibitionPark {
    u8 unknown_0[0x7dd7];  // (not used here)
    u8 byte_7dd7;
};
GUEST_OFFSET(ExhibitionPark, byte_7dd7, 0x7dd7);

inline constexpr u32 exhibition_park_info_instance_address = 0x00952620u;
inline guest::global<u32, 0x00952620> exhibition_park_info_instance;
inline constexpr guest::Function<0x002e0d04, u32(u32, u32, u32, u32)> count_used_slots;
inline constexpr guest::Function<0x0071fcb8, u32(u32, u32, u32, u32)> main_slot_is_marked_slot;

void ExhibitionPark__free_entry(gptr<ExhibitionPark> exhibition_park, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = main_slot_is_marked_slot(exhibition_park.addr(), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        return;
    }
    exhibition_park->byte_7dd7 = 4;
    u32 r0_2 = *exhibition_park_info_instance;
    u32 zf_1 = r0_2 == 0;
    if (!zf_1) {
        r1_1 = *gptr<u8>(r0_2 + 0xa1u);  // (from the original)
        zf_1 = r1_1 == 0;
    }
    if (zf_1) {
        return;
    }
    frame.release();
    count_used_slots(r0_2, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
}

}  // namespace d_00537358
GUEST_EXPORT(0x00537358, d_00537358::ExhibitionPark__free_entry);

// f_0053742c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When the visitor list is not empty and the check passes, clears the visit record and flags the players with the
// identity.
namespace d_0053742c {

inline constexpr guest::Function<0x001e0190, u32(u32, u32, u32, u32)> flag_players_with_identity;
inline constexpr guest::Function<0x0027a48c, u32(u32)> SavedRecordHeader__clear;
inline constexpr guest::Function<0x002fb918, u32(u32)> data_block_71900;
inline constexpr guest::Function<0x005cfa78, u32(u32, u32, u32, u32)> visitor_list_is_empty_cached;
inline constexpr guest::Function<0x005cfef0, u32(u32)> call_0071a084_veneer;

u32 ExhibitionPark__clear_visit(u32 exhibition_park) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = visitor_list_is_empty_cached(exhibition_park, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 != 0) {
        return r0_1;
    }
    u32 r0_2 = call_0071a084_veneer(r0_1);
    if (r0_2 == 0) {
        return r0_2;
    }
    u32 r0_3 = data_block_71900(r0_2);
    SavedRecordHeader__clear(r0_3 + 0xcu);  // (from the original)
    u32 r0_5 = data_block_71900(r0_3 + 0xcu);  // (from the original)
    frame.release();
    return flag_players_with_identity(r0_5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0053742c
GUEST_EXPORT(0x0053742c, d_0053742c::ExhibitionPark__clear_visit);

// f_00537464: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The exhibition park when it exists and is ready (+0xa1); null otherwise.
namespace d_00537464 {

inline constexpr u32 exhibition_park_info_instance_address = 0x00952620u;
inline guest::global<u32, 0x00952620> exhibition_park_info_instance;

u32 ExhibitionPark__if_ready(u32 r0_unused, u32 r1) {
    u32 r0_1 = *exhibition_park_info_instance;
    u32 zf_1 = r0_1 == 0;
    if (!zf_1) {
        r1 = *gptr<u8>(r0_1 + 0xa1u);  // (from the original)
        zf_1 = r1 == 0;
    }
    if (zf_1) {
        r0_1 = 0u;
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_00537464
GUEST_EXPORT(0x00537464, d_00537464::ExhibitionPark__if_ready);

// f_005374f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores the entry in the park's least full design block, for its owner.
namespace d_005374f0 {

struct __attribute__((packed)) ExhibitionPark {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u8 unknown_8[0x67ec];  // (not used here)
    u16 half_67f4;
    u8 unknown_67f6[0x12];  // (not used here)
    u8 byte_6808;
};
GUEST_OFFSET(ExhibitionPark, word_4, 0x4);
GUEST_OFFSET(ExhibitionPark, half_67f4, 0x67f4);
GUEST_OFFSET(ExhibitionPark, byte_6808, 0x6808);

struct __attribute__((packed)) Local_005374f0_r3_4 {
    u16 half_0;
    u8 unknown_2[0x12];  // (not used here)
    u8 byte_14;
};
GUEST_OFFSET(Local_005374f0_r3_4, half_0, 0x0);
GUEST_OFFSET(Local_005374f0_r3_4, byte_14, 0x14);

inline constexpr guest::Function<0x00100d2d, u32(u32, u32, u32, u32)> memory_compare_100d2c;
inline constexpr guest::Function<0x002be920, u32(u32, u32)> slot_address_002be920;
inline constexpr guest::Function<0x002bea00, u32(u32, u32, u32, u32)> ExhibitionPark__store_local;
inline constexpr guest::Function<0x002beb4c, u32(u32, u32, u32, u32)> ExhibitionPark__store_remote;
inline constexpr guest::Function<0x002beb90, u32(u32, u32, u32)> ParkSet__slot_for_incoming;
inline constexpr guest::Function<0x002bedd8, u32(u32, u32)> record_fbb_address;
inline constexpr guest::Function<0x002bee04, u32(u32, u32, u32, u32)> ParkSets3__find;
inline constexpr guest::Function<0x002fb328, u32(u32, u32)> get_save_data;
inline constexpr guest::Function<0x002fe940, u32(u32, u32)> PersonalId__equals;
inline constexpr guest::Function<0x0030f4fc, u32(u32, u32)> Player__copy_identity;
inline constexpr guest::Function<0x00467590, u32(u32, u32, u32, u32)> PiaReliable__is_ready;
inline constexpr guest::Function<0x00582d34, u32(u32, u32)> player_operation_b;
inline constexpr guest::Function<0x005ca6fc, u32(u32)> exhibition_park_data_unless_set;
inline constexpr guest::Function<0x0071a23c, u32(u32)> first_player_with_flag_5700_bit_4;
inline constexpr guest::Function<0x0071d5b8, u32(u32)> first_free_slot;
inline constexpr guest::Function<0x0071d664, u32(u32, u32)> DesignBlocks__least_full;
inline constexpr guest::Function<0x00725978, u32(u32, u32, u32, u32)> Pair8__get;
inline constexpr guest::Function<0x00725984, u32(u32, u32, u32, u32)> Identity__is_valid_player;
inline constexpr guest::Function<0x007259b4, u32(u32, u32)> Record__checksum;

struct __attribute__((packed)) Frame_005374f0 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x34];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005374f0, word_0, 0x0);
GUEST_OFFSET(Frame_005374f0, word_4, 0x4);
GUEST_SIZE(Frame_005374f0, 0x3c);

u32 ExhibitionPark__store_entry(gptr<ExhibitionPark> exhibition_park, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005374f0> frame;  // the original's stack frame
    u32 r0_6 = 0;
    u32 r0_1 = Identity__is_valid_player(exhibition_park.addr(), r1, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        u32 r0_2 = Record__checksum(exhibition_park.addr(), r1_1);
        r1_1 = exhibition_park->word_4;
        if (r0_2 == r1_1) {
            u32 save_data_3 = get_save_data(r0_2, r1_1);
            gptr<Local_005374f0_r3_4> r3_4 = gptr<Local_005374f0_r3_4>((save_data_3 + 0x62080u) + 0x138u);  // (from the original)
            u32 r1_2 = exhibition_park->half_67f4;
            u32 r2_3 = r3_4->half_0;
            if (r2_3 == r1_2) {
                r1_2 = r3_4->byte_14;
                r2_3 = exhibition_park->byte_6808;
                if (r1_2 == r2_3) {
                    r0_6 = memory_compare_100d2c(r3_4.addr() + 2u, exhibition_park.addr() + 0x67f6u, 0x12u, r3_4.addr());  // (from the original)
                    r1_2 = guest::cpu()->r[1];
                    r2_3 = guest::cpu()->r[2];
                    r3_4 = gptr<Local_005374f0_r3_4>(guest::cpu()->r[3]);
                    if (r0_6 == 0) {
                        return r0_6;
                    }
                }
            }
            u32 r0_7 = Pair8__get(exhibition_park.addr(), r1_2, r2_3, r3_4.addr());
            frame->word_0 = 0;
            frame->word_4 = 0;
            u32 r0_8 = PiaReliable__is_ready(r0_7, guest::cpu()->r[1], 0u, 0u);
            r1_1 = guest::cpu()->r[1];
            if (r0_8 != 0) {
                return 0u;
            }
            u32 save_data_4 = get_save_data(r0_8, r1_1);
            u32 r0_11 = first_player_with_flag_5700_bit_4(save_data_4 + 0xa0u);  // (from the original)
            r1_1 = guest::cpu()->r[1];
            if (r0_11 != 0) {
                Player__copy_identity(r0_11, frame.at(0).addr());
                u32 r0_13 = PersonalId__equals(exhibition_park.addr() + 0x67deu, frame.at(0).addr());  // (from the original)
                r1_1 = guest::cpu()->r[1];
                if (r0_13 != 0) {
                    return 0u;
                }
            }
            u32 r0_15 = player_operation_b(exhibition_park.addr() + 0x1238u, r1_1);  // (from the original)
            u32 r0_16 = exhibition_park_data_unless_set(r0_15);
            u32 park_entry = ParkSets3__find(r0_16, exhibition_park.addr(), frame.at(0x30).addr(), frame.at(0x34).addr());  // (from the original)
            if (park_entry != 0) {
                ExhibitionPark__store_remote(r0_16, park_entry, exhibition_park.addr(), r1);
                r1_2 = guest::cpu()->r[1];
            } else {
                u32 r0_18 = DesignBlocks__least_full(r0_16, park_entry);
                if (s32(r0_18) >= 0) {
                    u32 r0_19 = record_fbb_address(r0_16, r0_18 & 0xffu);  // (from the original)
                    u32 r0_20 = first_free_slot(r0_19);
                    u32 r0_21 = record_fbb_address(r0_16, r0_18 & 0xffu);  // (from the original)
                    u32 r0_22 = slot_address_002be920(r0_21, r0_20);
                    r1_1 = r0_22;
                } else {
                    u32 slot_2 = ParkSet__slot_for_incoming(r0_16, frame.at(0x30).addr(), frame.at(0x34).addr());  // (from the original)
                    r1_1 = slot_2;
                    if (slot_2 == 0) {
                        guest::cpu()->r[1] = r1_1;
                        return 0u;
                    }
                }
                frame->word_0 = r2;
                ExhibitionPark__store_local(r0_16, r1_1, exhibition_park.addr(), r1);
                r1_2 = guest::cpu()->r[1];
            }
            guest::cpu()->r[1] = r1_2;
            return 1u;
        }
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_005374f0
GUEST_EXPORT_FRAMED(0x005374f0, d_005374f0::ExhibitionPark__store_entry, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_005376d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Forwards to word_95262c_unless_95262c_set.
namespace d_005376d4 {

inline constexpr guest::Function<0x005ca6fc, u32(u32, u32)> exhibition_park_data_unless_set;

u32 exhibition_park_data_unless_set_veneer() {
    return exhibition_park_data_unless_set(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_005376d4
GUEST_EXPORT(0x005376d4, d_005376d4::exhibition_park_data_unless_set_veneer);

// f_005376d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The number of free slots of the ready park (16 minus the used ones).
namespace d_005376d8 {

struct __attribute__((packed)) Local_005376d8_r0_1 {
    u8 unknown_0[0xa0];  // (not used here)
    u8 byte_a0;
    u8 byte_a1;
};
GUEST_OFFSET(Local_005376d8_r0_1, byte_a0, 0xa0);
GUEST_OFFSET(Local_005376d8_r0_1, byte_a1, 0xa1);

inline constexpr u32 exhibition_park_info_instance_address = 0x00952620u;
inline guest::global<u32, 0x00952620> exhibition_park_info_instance;

u32 ExhibitionPark__free_count() {
    gptr<Local_005376d8_r0_1> r0_1 = gptr<Local_005376d8_r0_1>(*exhibition_park_info_instance);
    if (r0_1.addr() == 0 || r0_1->byte_a1 == 0) {
        r0_1 = gptr<Local_005376d8_r0_1>(0u);
    }
    u32 r0_2 = r0_1->byte_a0;
    return r0_2 >= 0x10u ? 0u : 0x10u - r0_2;  // (from the original)
}

}  // namespace d_005376d8
GUEST_EXPORT(0x005376d8, d_005376d8::ExhibitionPark__free_count);

// f_005377fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Records the visit with the time in the save (+0x6e29a).
namespace d_005377fc {

inline constexpr guest::Function<0x002fb328, u32(u32, u32)> get_save_data;
inline constexpr guest::Function<0x003355ac, u32(u32, u32, u32, u32)> TownTune__play_note;
inline constexpr guest::Function<0x003506c0, u32(u32, u32, u32, u32)> Boss__get_value_0;

struct __attribute__((packed)) Frame_005377fc {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Frame_005377fc, word_0, 0x0);
GUEST_OFFSET(Frame_005377fc, word_4, 0x4);
GUEST_SIZE(Frame_005377fc, 0x8);

void ExhibitionPark__record_visit(u32 exhibition_park, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005377fc> frame;  // the original's stack frame
    u32 r0_1 = Boss__get_value_0(exhibition_park, r1, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    u32 save_data_2 = get_save_data(r0_1, r1_1);
    frame->word_0 = r0_1;
    frame->word_4 = r1_1;
    TownTune__play_note(r2, exhibition_park, r1, save_data_2 + 0x6e29au);  // (from the original)
}

}  // namespace d_005377fc
GUEST_EXPORT_FRAMED(0x005377fc, d_005377fc::ExhibitionPark__record_visit, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0053784c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When the check passes, clears the current player's bit (12 + slot) of the record's flags (+0x22).
namespace d_0053784c {

inline constexpr guest::Function<0x0023bc64, u32(u32, u32, u32, u32)> Boss__is_disabled;
inline constexpr guest::Function<0x002fb918, u32(u32)> data_block_71900;
inline constexpr guest::Function<0x002ff8b0, u32(u32)> player_slot_byte;

void ExhibitionPark__clear_player_bit(u32 exhibition_park, u32 r1, u32 r2, u32 r3) {
    for (;;) {
        u32 r0_1 = Boss__is_disabled(exhibition_park, r1, r2, r3);
        if (r0_1 == 0) {
            return;
        }
        u32 r0_2 = player_slot_byte(4u);
        exhibition_park = data_block_71900(r0_2);
        r1 = r0_2;
        if (!1) {
            break;
        }
        if (r1 >= 4u) {
            guest::cpu()->r[1] = r1;
            return;
        }
        u32 r1_1 = u32(*gptr<u16>(exhibition_park + 0x22u)) & ~lsl_r(0x1000u, r1 & 0xff);  // (from the original)
        *gptr<u16>(exhibition_park + 0x22u) = u16(r1_1);  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return;
        guest::preempt();
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0053784c
GUEST_EXPORT_FRAMED(0x0053784c, d_0053784c::ExhibitionPark__clear_player_bit, 0x4010);  // pushes {r4, lr} first, as the original

// f_0053787c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When the park has room, gives the entry to the current slot and recounts the park's used slots.
namespace d_0053787c {

struct __attribute__((packed)) ExhibitionPark {
    u8 unknown_0[0x7dd7];  // (not used here)
    u8 byte_7dd7;
};
GUEST_OFFSET(ExhibitionPark, byte_7dd7, 0x7dd7);

struct __attribute__((packed)) Local_0053787c_r0_1 {
    u8 unknown_0[0xa0];  // (not used here)
    u8 byte_a0;
    u8 byte_a1;
};
GUEST_OFFSET(Local_0053787c_r0_1, byte_a0, 0xa0);
GUEST_OFFSET(Local_0053787c_r0_1, byte_a1, 0xa1);

inline constexpr u32 exhibition_park_info_instance_address = 0x00952620u;
inline guest::global<u32, 0x00952620> exhibition_park_info_instance;
inline constexpr guest::Function<0x002e0d04, u32(u32, u32)> count_used_slots;
inline constexpr guest::Function<0x002ff8b0, u32(u32, u32, u32, u32)> player_slot_byte;

void ExhibitionPark__take_entry(gptr<ExhibitionPark> exhibition_park, u32 r1_unused, u32 r2) {
    gptr<Local_0053787c_r0_1> r0_1 = gptr<Local_0053787c_r0_1>(*exhibition_park_info_instance);
    u32 zf_1 = r0_1.addr() == 0;
    if (!zf_1) {
        r2 = r0_1->byte_a1;
        zf_1 = r2 == 0;
    }
    if (zf_1) {
        r0_1 = gptr<Local_0053787c_r0_1>(0u);
    }
    if (r0_1->byte_a0 < 0x10u) {  // (from the original)
        u32 r0_2 = player_slot_byte(4u, 0u, r2, guest::cpu()->r[3]);
        u32 r1_1 = guest::cpu()->r[1];
        u32 r4_1 = exhibition_park.addr() + 0x7dd7u;  // (from the original)
        exhibition_park->byte_7dd7 = u8(r0_2);
        u32 r0_3 = *exhibition_park_info_instance;
        u32 zf_2 = r0_3 == 0;
        if (!zf_2) {
            r1_1 = *gptr<u8>(r0_3 + 0xa1u);  // (from the original)
            zf_2 = r1_1 == 0;
        }
        if (!zf_2) {
            count_used_slots(r0_3, r1_1);
        }
    }
}

}  // namespace d_0053787c
GUEST_EXPORT_FRAMED(0x0053787c, d_0053787c::ExhibitionPark__take_entry, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005378e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Updates the exhibition park when it exists.
namespace d_005378e4 {

inline constexpr guest::Function<0x002bed24, u32(u32, u32)> ParkSets3__clear_slot_flag;
inline constexpr guest::Function<0x005ca6fc, u32(u32)> exhibition_park_data_unless_set;

void ExhibitionPark__update(u32 exhibition_park) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = exhibition_park_data_unless_set(exhibition_park);
    if (r0_1 == 0) {
        return;
    }
    frame.release();
    ParkSets3__clear_slot_flag(r0_1, guest::cpu()->r[1]);
    return;
}

}  // namespace d_005378e4
GUEST_EXPORT(0x005378e4, d_005378e4::ExhibitionPark__update);

// f_00537b6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The number of set bits of the word.
namespace d_00537b6c {


u32 popcount32(u32 r0) {
    u32 r0_1 = r0 - (0x55555555u & r0 >> 1);  // (from the original)
    u32 r0_3 = (0x33333333u & r0_1 >> 2) + (r0_1 & 0x33333333u);  // (from the original)
    u32 r0_4 = r0_3 + (r0_3 >> 4) & 0xf0f0f0fu;  // (from the original)
    u32 r0_5 = r0_4 + (r0_4 >> 8);
    guest::cpu()->r[1] = 0xf0f0f0fu;  // (from the original)
    return r0_5 + (r0_5 >> 0x10) & 0x3fu;  // (from the original)
}

}  // namespace d_00537b6c
GUEST_EXPORT(0x00537b6c, d_00537b6c::popcount32);

// f_00537bb0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The index of the n-th set bit (from 1) of the word; -1 when there are fewer.
namespace d_00537bb0 {


u32 index_of_nth_set_bit(u32 r0, u32 r1) {
    if (r0 == 0) {
        return ~0u;
    }
    do {
        r1 -= 1u;
        if (s32(r1) <= 0) {
            u32 r0_2 = (r0 & 0u - r0) - 1u;
            u32 r0_3 = r0_2 - (0x55555555u & r0_2 >> 1);  // (from the original)
            u32 r0_5 = (0x33333333u & r0_3 >> 2) + (r0_3 & 0x33333333u);  // (from the original)
            u32 r0_6 = r0_5 + (r0_5 >> 4) & 0xf0f0f0fu;  // (from the original)
            u32 r0_7 = r0_6 + (r0_6 >> 8);
            guest::cpu()->r[1] = 0xf0f0f0fu;  // (from the original)
            return r0_7 + (r0_7 >> 0x10) & 0x3fu;  // (from the original)
        }
        r0 &= r0 - 1u;
        guest::preempt();
    } while (r0 != 0);
    guest::cpu()->r[1] = r1;
    return ~0u;
}

}  // namespace d_00537bb0
GUEST_EXPORT(0x00537bb0, d_00537bb0::index_of_nth_set_bit);

// f_00537ce0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Releases the part (+4) and frees the buffer from its heap.
namespace d_00537ce0 {

struct __attribute__((packed)) OwnedBuffer {
    u32 word_0;
};
GUEST_OFFSET(OwnedBuffer, word_0, 0x0);

inline constexpr guest::Function<0x001435c8, u32(u32, u32, u32, u32)> Handle__invalidate;
inline constexpr guest::Function<0x005380a8, u32(u32)> allocation_owner;
inline constexpr guest::Function<0x0053814c, u32(u32)> free_in_containing_heap;

void OwnedBuffer__release(gptr<OwnedBuffer> owned_buffer) {
    Handle__invalidate(owned_buffer.addr() + 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r5_1 = owned_buffer->word_0;
    if (r5_1 != 0) {
        allocation_owner(r5_1);
        free_in_containing_heap(r5_1);
        owned_buffer->word_0 = 0;
    }
}

}  // namespace d_00537ce0
GUEST_EXPORT_FRAMED(0x00537ce0, d_00537ce0::OwnedBuffer__release, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00537d70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Allocates `count` empty pointer slots and sets the pool up on them.
namespace d_00537d70 {

inline constexpr guest::Function<0x0013cbdc, u32(u32, u32, u32)> SoundChannel__init;
inline constexpr guest::Function<0x0053ac4c, u32(u32, u32, u32, u32)> Heap__allocate_aligned_4;

void PtrPool__init(u32 ptr_pool, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    if (s32(r1) <= 0) {
        return;
    }
    u32 capacity = r1;
    u32 r5 = ptr_pool;
    ptr_pool = Heap__allocate_aligned_4(capacity << 2, r2, r2, r3);
    r3 = 0u;
    if (ptr_pool == 0) {
        ptr_pool = r3;
    } else {
        r1 = 0u;
        if (capacity >= 0u && capacity != 0) {
            do {
                u32 res_1 = ptr_pool + (r1 << 2);
                r1 += 1u;
                if (res_1 != 0) {
                    *gptr<u32>(res_1) = r3;
                }
                guest::preempt();
            } while (r1 < capacity);
        }
    }
    *gptr<u32>(r5) = ptr_pool;
    frame.release();
    SoundChannel__init(r5 + 4u, ptr_pool, capacity);
    return;
}

}  // namespace d_00537d70
GUEST_EXPORT(0x00537d70, d_00537d70::PtrPool__init);

// f_00537dd8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Zeroes the pool, with its index at -1.
namespace d_00537dd8 {

struct __attribute__((packed)) PtrPool {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
    u16 half_c;
    u8 unknown_e[0x2];  // (not used here)
    u32 word_10;
    u16 half_14;
    u8 unknown_16[0x2];  // (not used here)
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u8 unknown_24[0xc];  // (not used here)
    u32 word_30;
    u32 word_34;
};
GUEST_OFFSET(PtrPool, word_0, 0x0);
GUEST_OFFSET(PtrPool, word_8, 0x8);
GUEST_OFFSET(PtrPool, half_c, 0xc);
GUEST_OFFSET(PtrPool, word_10, 0x10);
GUEST_OFFSET(PtrPool, half_14, 0x14);
GUEST_OFFSET(PtrPool, word_18, 0x18);
GUEST_OFFSET(PtrPool, word_1c, 0x1c);
GUEST_OFFSET(PtrPool, word_20, 0x20);
GUEST_OFFSET(PtrPool, word_30, 0x30);
GUEST_OFFSET(PtrPool, word_34, 0x34);


void PtrPool__construct(gptr<PtrPool> ptr_pool) {
    ptr_pool->word_0 = 0;
    ptr_pool->word_8 = 0;
    ptr_pool->half_c = 0;
    ptr_pool->word_10 = 0;
    ptr_pool->half_14 = 0;
    ptr_pool->word_18 = 0;
    ptr_pool->word_1c = 0;
    ptr_pool->word_20 = ~0u;
    ptr_pool->word_30 = 0;
    ptr_pool->word_34 = 0;
}

}  // namespace d_00537dd8
GUEST_EXPORT(0x00537dd8, d_00537dd8::PtrPool__construct);

// f_00537e0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Releases the part and the buffer, then destroys the part.
namespace d_00537e0c {

struct __attribute__((packed)) OwnedBuffer {
    u32 word_0;
};
GUEST_OFFSET(OwnedBuffer, word_0, 0x0);

inline constexpr guest::Function<0x001435c8, u32(u32, u32, u32, u32)> Handle__invalidate;
inline constexpr guest::Function<0x00143604, u32(u32)> Handle__invalidate_b;
inline constexpr guest::Function<0x005380a8, u32(u32, u32)> allocation_owner;
inline constexpr guest::Function<0x0053814c, u32(u32, u32)> free_in_containing_heap;

u32 OwnedBuffer__destroy(gptr<OwnedBuffer> owned_buffer, u32 r1) {
    Handle__invalidate(owned_buffer.addr() + 4u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r5_1 = owned_buffer->word_0;
    if (r5_1 != 0) {
        allocation_owner(r5_1, r1_1);
        free_in_containing_heap(r5_1, r1_1);
        r1_1 = 0u;
        owned_buffer->word_0 = r1_1;
    }
    Handle__invalidate(owned_buffer.addr() + 4u, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    Handle__invalidate_b(owned_buffer.addr() + 4u);
    return owned_buffer.addr();
}

}  // namespace d_00537e0c
GUEST_EXPORT_FRAMED(0x00537e0c, d_00537e0c::OwnedBuffer__destroy, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00537e98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Allocates a zeroed buffer of `count` pointers (with the heap and alignment) and sets the array up empty on it.
namespace d_00537e98 {

inline constexpr guest::Function<0x0053ac90, u32(u32, u32, u32, u32)> Heap__allocate_2;

u32 PtrArray__allocate(u32 ptr_array, u32 r1, u32 r2, u32 r3) {
    u32 res_1 = r1;
    u32 vf_1 = (r1 & (r1 ^ res_1)) >> 0x1f;  // (from the original)
    u32 r6 = res_1;
    r1 = r2;
    u32 r5 = ptr_array;
    if (res_1 != 0 && res_1 >> 0x1f == vf_1) {  // (from the original)
        u32 heap = r6 << 2;
        ptr_array = Heap__allocate_2(heap, r1, r3, r3);
        r1 = guest::cpu()->r[1];
        r2 = 0u;
        if (ptr_array == 0) {
            ptr_array = r2;
        } else {
            r1 = 0u;
            if (heap >= 0u && heap != 0) {
                do {
                    u32 res_2 = ptr_array + r1;
                    r1 += 1u;
                    if (res_2 != 0) {
                        *gptr<u8>(res_2) = u8(r2);
                    }
                    guest::preempt();
                } while (r1 < heap);
            }
        }
        if (s32(r6) > 0 && ptr_array != 0) {
            *gptr<u32>(r5 + 8u) = ptr_array;
            *gptr<u32>(r5) = r2;
            *gptr<u32>(r5 + 4) = r6;
        }
    }
    guest::cpu()->r[1] = r1;
    return ptr_array;
}

}  // namespace d_00537e98
GUEST_EXPORT_FRAMED(0x00537e98, d_00537e98::PtrArray__allocate, 0x4070);  // pushes {heap, r5, r6, lr} first, as the original

// f_00538024: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Inserts the pointer at `index` (up to the count, while there is room), moving the later ones up.
namespace d_00538024 {

struct __attribute__((packed)) PtrArray {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(PtrArray, word_0, 0x0);
GUEST_OFFSET(PtrArray, word_4, 0x4);
GUEST_OFFSET(PtrArray, word_8, 0x8);

inline constexpr guest::Function<0x001348cc, u32(u32, u32, u32, u32)> memmove;

void PtrArray__insert(gptr<PtrArray> ptr_array, u32 r1, u32 r2) {
    if (s32(r1) < 0) {
        guest::cpu()->r[1] = r1;
        return;
    }
    u32 r0_1 = ptr_array->word_0;
    u32 r1_1 = ptr_array->word_4;
    u32 res_1 = r1_1 - (r0_1 + 1u);
    u32 nf_1 = res_1 >> 0x1f;  // (from the original)
    u32 zf_1 = res_1 == 0;
    u32 vf_1 = ((r1_1 ^ r0_1 + 1u) & (r1_1 ^ res_1)) >> 0x1f;  // (from the original)
    if (nf_1 == vf_1) {
        u32 res_2 = r0_1 - r1;
        nf_1 = res_2 >> 0x1f;  // (from the original)
        zf_1 = res_2 == 0;
        vf_1 = ((r0_1 ^ r1) & (r0_1 ^ res_2)) >> 0x1f;  // (from the original)
    }
    if (nf_1 == vf_1) {
        if (!zf_1 && nf_1 == vf_1) {
            u32 r1_2 = ptr_array->word_8;
            memmove(r1_2 + (r1 + 1u << 2), r1_2 + (r1 << 2), (r0_1 - r1) << 2, r1 + 1u);
            r1_1 = guest::cpu()->r[1];
        }
        *gptr<u32>(ptr_array->word_8 + (r1 << 2)) = r2;
        ptr_array->word_0 = ptr_array->word_0 + 1u;
    }
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_00538024
GUEST_EXPORT_FRAMED(0x00538024, d_00538024::PtrArray__insert, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00538088: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the array up empty on the buffer of `capacity` pointers.
namespace d_00538088 {

struct __attribute__((packed)) PtrArray {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(PtrArray, word_0, 0x0);
GUEST_OFFSET(PtrArray, word_4, 0x4);
GUEST_OFFSET(PtrArray, word_8, 0x8);


void PtrArray__set_buffer(gptr<PtrArray> ptr_array, u32 r1, u32 r2) {
    if (s32(r1) <= 0 || r2 == 0) {
        return;
    }
    ptr_array->word_0 = 0;
    ptr_array->word_4 = r1;
    ptr_array->word_8 = r2;
}

}  // namespace d_00538088
GUEST_EXPORT(0x00538088, d_00538088::PtrArray__set_buffer);

// f_00538188: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00538188 {

inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> RecursiveLock__lock;

void lock_lock_at_10(u32 r0) {
    RecursiveLock__lock(r0 + 0x10u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_00538188
GUEST_EXPORT(0x00538188, d_00538188::lock_lock_at_10);

// f_00538274: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00538274 {

inline constexpr guest::Function<0x001357ec, u32(u32, u32)> RecursiveLock__unlock;

u32 unlock_lock_at_10(u32 r0) {
    return RecursiveLock__unlock(r0 + 0x10u, guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_00538274
GUEST_EXPORT(0x00538274, d_00538274::unlock_lock_at_10);

// f_0053827c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053827c {

inline constexpr u32 vtable_pead__CriticalSection = 0x00903a08u;
inline constexpr guest::Function<0x0012f154, u32(u32)> RecursiveLock__initialize;
inline constexpr guest::Function<0x0053d490, u32(u32, u32, u32, u32)> pead__IDisposer__IDisposer;

u32 pead__CriticalSection__CriticalSection(gptr<pead__CriticalSection> critical_section) {
    u32 r1 = 0;
    pead__IDisposer__IDisposer(critical_section.addr(), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    critical_section->vtable = vtable_pead__CriticalSection;
    critical_section->word_10 = 0;
    RecursiveLock__initialize(critical_section.addr() + 0x10u);  // (from the original)
    return critical_section.addr();
}

}  // namespace d_0053827c
GUEST_EXPORT_FRAMED(0x0053827c, d_0053827c::pead__CriticalSection__CriticalSection, 0x4010);  // pushes {r4, lr} first, as the original

// f_005382c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005382c4 {

inline constexpr u32 vtable_pead__CriticalSection = 0x00903a08u;
inline constexpr guest::Function<0x0053d530, u32(u32, u32, u32, u32)> pead__IDisposer__destructor;

u32 pead__CriticalSection__destructor(gptr<pead__CriticalSection> critical_section) {
    critical_section->vtable = vtable_pead__CriticalSection;
    return pead__IDisposer__destructor(critical_section.addr(), vtable_pead__CriticalSection, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005382c4
GUEST_EXPORT(0x005382c4, d_005382c4::pead__CriticalSection__destructor);

// f_0053ac4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Allocates `size` bytes (aligned to 4) from the heap, or the current thread's heap.
namespace d_0053ac4c {

inline constexpr u32 thread_local_heap_key_address = 0x0097d40cu;
inline guest::global<u32, 0x0097d40c> thread_local_heap_key;
inline constexpr guest::Function<0x00749010, u32(u32, u32, u32, u32)> current_thread_word_64;

u32 Heap__allocate_aligned_4(u32 heap, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = r1;
    if (r1 == 0) {
        r0_1 = current_thread_word_64(*thread_local_heap_key, r1, r2, r3);
        if (r0_1 == 0) {
            return r0_1;
        }
    }
    u32 r3_1 = *gptr<u32>(*gptr<u32>(r0_1) + 0x18u);  // (from the original)
    // virtual function 6 of r0_1
    frame.release();
    return guest::call_address<u32>(r3_1, r0_1, heap, 4u, r3_1);
}

}  // namespace d_0053ac4c
GUEST_EXPORT(0x0053ac4c, d_0053ac4c::Heap__allocate_aligned_4);

// f_0053ac90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Allocates `size` bytes with the alignment from the heap, or the current thread's heap.
namespace d_0053ac90 {

inline constexpr u32 thread_local_heap_key_address = 0x0097d40cu;
inline guest::global<u32, 0x0097d40c> thread_local_heap_key;
inline constexpr guest::Function<0x00749010, u32(u32, u32, u32, u32)> current_thread_word_64;

u32 Heap__allocate_2(u32 heap, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = r1;
    if (r1 == 0) {
        r0_1 = current_thread_word_64(*thread_local_heap_key, r1, r2, r3);
        if (r0_1 == 0) {
            return r0_1;
        }
    }
    u32 r3_1 = *gptr<u32>(*gptr<u32>(r0_1) + 0x18u);  // (from the original)
    // virtual function 6 of r0_1
    frame.release();
    return guest::call_address<u32>(r3_1, r0_1, heap, r2, r3_1);
}

}  // namespace d_0053ac90
GUEST_EXPORT(0x0053ac90, d_0053ac90::Heap__allocate_2);

// f_0053acd8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Formats into the string's buffer (always terminated).
namespace d_0053acd8 {

struct __attribute__((packed)) BufferedString {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(BufferedString, word_4, 0x4);
GUEST_OFFSET(BufferedString, word_8, 0x8);

struct __attribute__((packed)) Local_0053acd8_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0053acd8_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0053acd8_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0053acd8_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_0053acd8_ea_1, word_c, 0xc);

struct __attribute__((packed)) Local_0053acd8_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0053acd8_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_0053acd8_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_0053acd8_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_0053acd8_ea_2, word_c, 0xc);

struct __attribute__((packed)) Local_0053acd8_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0053acd8_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_0053acd8_ea_3, word_4, 0x4);
GUEST_OFFSET(Local_0053acd8_ea_3, word_8, 0x8);

inline constexpr guest::Function<0x00100e5d, u32(u32, u32, u32, u32)> vsnprintf;

struct __attribute__((packed)) Frame_0053acd8 {
    u8 unknown_0[0xc];  // (not read or written by name)
    u32 word_c;
    u8 unknown_10[0x4];  // (not read or written by name)
    u32 format;
    u8 unknown_18[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0053acd8, word_c, 0xc);
GUEST_OFFSET(Frame_0053acd8, format, 0x14);
GUEST_SIZE(Frame_0053acd8, 0x20);

void BufferedString__format(gptr<BufferedString> buffered_string, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0053acd8> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_0053acd8_ea_1> ea_1 = gptr<Local_0053acd8_ea_1>(frame.at(0x10).addr());  // (from the original)
    ea_1->word_0 = buffered_string.addr();
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r3;
    gptr<Local_0053acd8_ea_2> ea_2 = gptr<Local_0053acd8_ea_2>(frame.at(0).addr());
    ea_2->word_0 = r4;
    ea_2->word_4 = r5;
    ea_2->word_8 = r6;
    ea_2->word_c = r14;
    u32 r5_1 = buffered_string->word_4;
    u32 format = frame->format;
    u32 r4_1 = buffered_string->word_8;
    u32 r0_1 = vsnprintf(r5_1, r4_1, format, frame.at(0x18).addr());  // (from the original)
    if (s32(r0_1) >= 0) {
        if (!(s32(r0_1) < s32(r4_1))) {
            *gptr<u8>(r5_1 + r4_1 - 1u) = 0;
        }
    } else {
        *gptr<u8>(r5_1 + r4_1 - 1u) = 0;
    }
    gptr<Local_0053acd8_ea_3> ea_3 = gptr<Local_0053acd8_ea_3>(frame.at(0).addr());
    u32 r4_2 = ea_3->word_0;
    u32 r5_2 = ea_3->word_4;
    u32 r6_1 = ea_3->word_8;
    u32 v_1 = frame->word_c;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_1;
}

}  // namespace d_0053acd8
GUEST_EXPORT(0x0053acd8, d_0053acd8::BufferedString__format);

// f_0053ad24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Adds the child heap (by its node offset) to the heap's children, under the heap's lock when it has one.
namespace d_0053ad24 {

struct __attribute__((packed)) Heap {
    u8 unknown_0[0x6c];  // (not used here)
    u32 word_6c;
};
GUEST_OFFSET(Heap, word_6c, 0x6c);

struct __attribute__((packed)) Local_0053ad24_r5_1 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0053ad24_r5_1, word_8, 0x8);
GUEST_OFFSET(Local_0053ad24_r5_1, word_c, 0xc);

inline constexpr guest::Function<0x00538188, u32(u32, u32, u32, u32)> lock_lock_at_10;
inline constexpr guest::Function<0x00538274, u32(u32, u32)> unlock_lock_at_10;
inline constexpr guest::Function<0x0053d268, u32(u32, u32)> insert_node_after_0053d268;

void Heap__add_child(gptr<Heap> heap, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = heap.addr() + 0x50u;  // (from the original)
    u32 r4_1 = 0u;
    u32 r1_1 = heap->word_6c & 1u;
    if (r1_1 != 0) {
        r1_1 = 1u;
    }
    if (r1_1 != 0) {
        r4_1 = r0_1;
        lock_lock_at_10(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    gptr<Local_0053ad24_r5_1> r5_1 = gptr<Local_0053ad24_r5_1>(heap.addr() + 0x3cu);  // (from the original)
    u32 r1_2 = r5_1->word_c + r1;
    insert_node_after_0053d268(r5_1.addr(), r1_2);
    r5_1->word_8 = r5_1->word_8 + 1u;
    if (r4_1 != 0) {
        frame.release();
        unlock_lock_at_10(r4_1, r1_2);
        return;
    }
}

}  // namespace d_0053ad24
GUEST_EXPORT(0x0053ad24, d_0053ad24::Heap__add_child);

// f_0053ad94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Removes the child heap from the heap's children, under the heap's lock when it has one.
namespace d_0053ad94 {

struct __attribute__((packed)) Heap {
    u8 unknown_0[0x44];  // (not used here)
    u32 word_44;
    u32 word_48;
    u8 unknown_4c[0x20];  // (not used here)
    u32 word_6c;
};
GUEST_OFFSET(Heap, word_44, 0x44);
GUEST_OFFSET(Heap, word_48, 0x48);
GUEST_OFFSET(Heap, word_6c, 0x6c);

inline constexpr guest::Function<0x00538188, u32(u32, u32, u32, u32)> lock_lock_at_10;
inline constexpr guest::Function<0x00538274, u32(u32, u32)> unlock_lock_at_10;
inline constexpr guest::Function<0x0053d284, u32(u32, u32)> unlink_node_0053d284;

void Heap__remove_child(gptr<Heap> heap, u32 i_disposer) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = heap.addr() + 0x50u;  // (from the original)
    u32 r5_1 = 0u;
    u32 r1_1 = heap->word_6c & 1u;
    if (r1_1 != 0) {
        r1_1 = 1u;
    }
    if (r1_1 != 0) {
        r5_1 = r0_1;
        lock_lock_at_10(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
    }
    unlink_node_0053d284(heap->word_48 + i_disposer, r1_1);
    heap->word_44 = heap->word_44 - 1u;
    if (r5_1 != 0) {
        frame.release();
        unlock_lock_at_10(r5_1, guest::cpu()->r[1]);
        return;
    }
}

}  // namespace d_0053ad94
GUEST_EXPORT(0x0053ad94, d_0053ad94::Heap__remove_child);

// f_0053af90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Frees all of the heap's blocks and removes it from its parent's children (under both locks).
namespace d_0053af90 {

struct __attribute__((packed)) Local_0053af90_r4_1 {
    u8 unknown_0[0x2c];  // (not used here)
    u32 word_2c;
    u32 word_30;
    u8 unknown_34[0x38];  // (not used here)
    u32 word_6c;
};
GUEST_OFFSET(Local_0053af90_r4_1, word_2c, 0x2c);
GUEST_OFFSET(Local_0053af90_r4_1, word_30, 0x30);
GUEST_OFFSET(Local_0053af90_r4_1, word_6c, 0x6c);

inline constexpr guest::Function<0x00538188, u32(u32, u32, u32, u32)> lock_lock_at_10;
inline constexpr guest::Function<0x00538274, u32(u32, u32)> unlock_lock_at_10;
inline constexpr guest::Function<0x0053aef0, u32(u32, u32, u32, u32)> ExpHeap__set_flags;
inline constexpr guest::Function<0x0053d284, u32(u32, u32)> unlink_node_0053d284;

void ExpHeap__destroy(gptr<pead__ExpHeap> exp_heap, u32 r1_unused, u32 r2) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r0_1 = exp_heap.addr() + 0x50u;  // (from the original)
    u32 r6_1 = 0u;
    u32 r1_1 = exp_heap->flags & 1u;
    if (r1_1 != 0) {
        r1_1 = 1u;
    }
    if (r1_1 != 0) {
        r6_1 = r0_1;
        lock_lock_at_10(r0_1, r1_1, r2, guest::cpu()->r[3]);
    }
    ExpHeap__set_flags(exp_heap.addr(), 0u, 0u, guest::cpu()->r[3]);
    gptr<Local_0053af90_r4_1> r4_1 = gptr<Local_0053af90_r4_1>(exp_heap->word_20);
    if (r4_1.addr() != 0) {
        u32 r1_3 = r4_1->word_6c & 1u;
        if (r1_3 != 0) {
            r1_3 = 1u;
        }
        u32 r5_1 = 0u;
        if (r1_3 != 0) {
            r5_1 = r4_1.addr() + 0x50u;  // (from the original)
            lock_lock_at_10(r4_1.addr() + 0x50u, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            r1_3 = guest::cpu()->r[1];
        }
        unlink_node_0053d284(r4_1->word_30 + exp_heap.addr(), r1_3);
        r4_1->word_2c = r4_1->word_2c - 1u;
        if (r5_1 != 0) {
            unlock_lock_at_10(r5_1, guest::cpu()->r[1]);
        }
    }
    if (r6_1 != 0) {
        frame.release();
        unlock_lock_at_10(r6_1, guest::cpu()->r[1]);
        return;
    }
}

}  // namespace d_0053af90
GUEST_EXPORT(0x0053af90, d_0053af90::ExpHeap__destroy);

// f_0053b1b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053b1b0 {

inline constexpr u32 vtable_pead__Heap = 0x00903bc0u;
inline constexpr guest::Function<0x005382c4, u32(u32, u32, u32, u32)> pead__CriticalSection__destructor;
inline constexpr guest::Function<0x0053d530, u32(u32, u32, u32, u32)> pead__IDisposer__destructor;

u32 pead__Heap__destructor(gptr<pead__Heap> heap) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    heap->vtable = vtable_pead__Heap;
    u32 critical_section = heap.addr() + 0x50u;  // (from the original)
    pead__CriticalSection__destructor(critical_section, vtable_pead__Heap, guest::cpu()->r[2], guest::cpu()->r[3]);
    frame.release();
    return pead__IDisposer__destructor(critical_section - 0x50u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0053b1b0
GUEST_EXPORT(0x0053b1b0, d_0053b1b0::pead__Heap__destructor);

// f_0053b1d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the manager's words and the current heap (0x97e9fc).
namespace d_0053b1d0 {

struct __attribute__((packed)) HeapManager {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
};
GUEST_OFFSET(HeapManager, word_0, 0x0);
GUEST_OFFSET(HeapManager, word_4, 0x4);
GUEST_OFFSET(HeapManager, byte_8, 0x8);

inline guest::global<u8, 0x0097e9fc> global_0097e9fc;

void HeapManager__reset(gptr<HeapManager> heap_manager) {
    heap_manager->word_4 = 0;
    heap_manager->word_0 = 0;
    *global_0097e9fc = 0;
    heap_manager->byte_8 = 0;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_0053b1d0
GUEST_EXPORT(0x0053b1d0, d_0053b1d0::HeapManager__reset);

// f_0053b2e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053b2e0 {

inline constexpr u32 vtable_pead__Event = 0x00903c20u;
inline constexpr guest::Function<0x00127cf8, u32(u32, u32)> svc_create_event;
inline constexpr guest::Function<0x0012f204, u32(u32, u32)> check_result;
inline constexpr guest::Function<0x0053d490, u32(u32, u32, u32, u32)> pead__IDisposer__IDisposer;

struct __attribute__((packed)) Frame_0053b2e0 {
    u32 word_0;
};
GUEST_OFFSET(Frame_0053b2e0, word_0, 0x0);
GUEST_SIZE(Frame_0053b2e0, 0x4);

u32 pead__Event__Event(gptr<pead__Event> event, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0053b2e0> frame;  // the original's stack frame
    frame->word_0 = r3;
    pead__IDisposer__IDisposer(event.addr(), r1, r2, r3);
    event->vtable = vtable_pead__Event;
    event->word_10 = 0;
    frame->word_0 = 0;
    u32 r0_2 = svc_create_event(frame.at(0).addr(), r1);
    if ((r0_2 >> 0x1f) == 0) {  // (from the original)
        r0_2 = 0u;
        event->word_10 = frame->word_0;
    }
    u32 r1_1 = r0_2 >> 0x1f;  // (from the original)
    if (r1_1 != 0) {
        check_result(r0_2, r1_1);
        r1_1 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1_1;
    return event.addr();
}

}  // namespace d_0053b2e0
GUEST_EXPORT_FRAMED(0x0053b2e0, d_0053b2e0::pead__Event__Event, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0053b400: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053b400 {

inline constexpr u32 vtable_pead__Mutex = 0x00903c30u;
inline constexpr guest::Function<0x0012f204, u32(u32)> check_result;
inline constexpr guest::Function<0x0014f5dc, u32(u32, u32)> svc_create_mutex;
inline constexpr guest::Function<0x0053d490, u32(u32, u32, u32, u32)> pead__IDisposer__IDisposer;

struct __attribute__((packed)) Frame_0053b400 {
    u32 word_0;
};
GUEST_OFFSET(Frame_0053b400, word_0, 0x0);
GUEST_SIZE(Frame_0053b400, 0x4);

u32 pead__Mutex__Mutex(gptr<pead__Mutex> mutex, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0053b400> frame;  // the original's stack frame
    frame->word_0 = r3;
    pead__IDisposer__IDisposer(mutex.addr(), r1, r2, r3);
    mutex->vtable = vtable_pead__Mutex;
    mutex->word_10 = 0;
    frame->word_0 = 0;
    u32 r0_2 = svc_create_mutex(frame.at(0).addr(), 0u);
    if ((r0_2 >> 0x1f) == 0) {  // (from the original)
        r0_2 = 0u;
        mutex->word_10 = frame->word_0;
    }
    if ((r0_2 >> 0x1f) != 0) {  // (from the original)
        check_result(r0_2);
    }
    return mutex.addr();
}

}  // namespace d_0053b400
GUEST_EXPORT_FRAMED(0x0053b400, d_0053b400::pead__Mutex__Mutex, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0053b4cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Decodes the Base64 text into the buffer.
namespace d_0053b4cc {


void base64_decode(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r12 = 0u;
    u32 r4 = r12;
    u32 r6 = *gptr<u32>(guest::cpu()->r[13] + 0x1cu);  // (from the original)
    if (s32(r3) > 0) {
        do {
            if (*gptr<s8>(r2) < 0x20) {  // (from the original)
                r4 += 1u;
                r2 += 1u;
                if (s32(r4) >= s32(r3)) {
                    break;
                }
                if (*gptr<s8>(r2) < 0x20) {  // (from the original)
                    r4 += 1u;
                    r2 += 1u;
                    if (s32(r4) >= s32(r3)) {
                        break;
                    }
                }
            }
            if (s32(r3) >= s32(r4 + 4u)) {
                u32 v_1 = *gptr<s8>(r2);
                u32 r2_1 = r2 + 1u;
                u32 r7_1 = v_1 - 0x41u;  // (from the original)
                if (r7_1 > 0x19u) {  // (from the original)
                    r7_1 = v_1 - 0x61u <= 0x19u ? v_1 - 0x47u : v_1 - 0x30u <= 9u ? v_1 + 4u : (v_1 == 0x2bu || v_1 == 0x2du) ? 0x3eu : (v_1 == 0x2fu || v_1 == 0x5fu) ? 0x3fu : 0x40u;  // (from the original)
                }
                u32 v_2 = *gptr<s8>(r2_1);
                u32 r2_2 = r2_1 + 1u;
                u32 r7_2 = v_2 - 0x41u;  // (from the original)
                if (r7_2 > 0x19u) {  // (from the original)
                    r7_2 = v_2 - 0x61u <= 0x19u ? v_2 - 0x47u : v_2 - 0x30u <= 9u ? v_2 + 4u : (v_2 == 0x2bu || v_2 == 0x2du) ? 0x3eu : (v_2 == 0x2fu || v_2 == 0x5fu) ? 0x3fu : 0x40u;  // (from the original)
                }
                u32 v_3 = *gptr<s8>(r2_2);
                u32 r2_3 = r2_2 + 1u;
                u32 r9_1 = r7_2 & 0x3fu;  // (from the original)
                u32 r7_3 = v_3 - 0x41u;  // (from the original)
                if (r7_3 > 0x19u) {  // (from the original)
                    r7_3 = v_3 - 0x61u <= 0x19u ? v_3 - 0x47u : v_3 - 0x30u <= 9u ? v_3 + 4u : (v_3 == 0x2bu || v_3 == 0x2du) ? 0x3eu : (v_3 == 0x2fu || v_3 == 0x5fu) ? 0x3fu : 0x40u;  // (from the original)
                }
                u32 v_4 = *gptr<s8>(r2_3);
                r2 = r2_3 + 1u;
                u32 r7_4 = r7_3 & 0x7fu;  // (from the original)
                u32 r5_1 = v_4 - 0x41u <= 0x19u ? v_4 - 0x41u : v_4 - 0x61u <= 0x19u ? v_4 - 0x47u : v_4 - 0x30u <= 9u ? v_4 + 4u : (v_4 == 0x2bu || v_4 == 0x2du) ? 0x3eu : (v_4 == 0x2fu || v_4 == 0x5fu) ? 0x3fu : 0x40u;  // (from the original)
                u32 r5_2 = r5_1 & 0x7fu;  // (from the original)
                if (s32(r1) > s32(r12)) {
                    *gptr<u8>(r0 + r12) = u8((r7_1 & 0x3fu) << 2 | r9_1 >> 4);  // (from the original)
                    r12 += 1u;
                    if (r7_4 >= 0x40u) {  // (from the original)
                        goto L_53b6dc;
                    }
                    if (s32(r1) > s32(r12)) {
                        *gptr<u8>(r0 + r12) = u8(r9_1 << 4 | r7_4 >> 2);
                        r12 += 1u;
                        if (r5_2 >= 0x40u) {  // (from the original)
                            goto L_53b6dc;
                        }
                        if (s32(r1) > s32(r12)) {
                            *gptr<u8>(r0 + r12) = u8(r5_2 | r7_4 << 6);
                            r12 += 1u;
                            goto L_53b6dc;
                        }
                    }
                }
            }
            return;
L_53b6dc:;
            r4 += 4u;
            guest::preempt();
        } while (s32(r4) < s32(r3));
    }
    if (r6 != 0) {
        *gptr<u32>(r6) = r12;
    }
}

}  // namespace d_0053b4cc
GUEST_EXPORT_FRAMED(0x0053b4cc, d_0053b4cc::base64_decode, 0x7f0);  // pushes {r4, r5, r6, r7, r8, r9, r10} first, as the original

// f_0053b6fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Encodes the bytes as Base64 (the URL-safe alphabet when asked), padding with '='.
namespace d_0053b6fc {

struct __attribute__((packed)) Local_0053b6fc_r12 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Local_0053b6fc_r12, byte_0, 0x0);
GUEST_OFFSET(Local_0053b6fc_r12, byte_1, 0x1);
GUEST_OFFSET(Local_0053b6fc_r12, byte_2, 0x2);


void base64_encode(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res_1 = 0;
    r3 = r3 == 0 ? 0x8c83a0u : 0x8c835cu;  // (from the original)
    u32 r12_1 = u64(s64(s32(0x55555556u)) * s32(r2)) >> 0x20;  // (from the original)
    u32 r12_2 = r12_1 - u32(s32(r12_1) >> 0x1f);  // (from the original)
    u32 r7 = r12_2 + (r12_2 << 1);
    u32 r6_1 = r7 + 2u;
    if (s32(r6_1) > 2) {
        u32 r5_1 = u64(s64(s32(0x55555556u)) * s32(r6_1)) >> 0x20;  // (from the original)
        gptr<Local_0053b6fc_r12> r12 = gptr<Local_0053b6fc_r12>(r1);
        u32 r4 = r0;
        u32 r5 = r5_1 - u32(s32(r5_1) >> 0x1f);  // (from the original)
        u32 r6 = r5;
        do {
            res_1 = r5 - 1u;
            r5 = res_1;
            *gptr<u8>(r4) = *gptr<u8>(r3 + (u32(r12->byte_0) >> 2));
            *gptr<u8>(r4 + 1u) = *gptr<u8>(r3 + (u32(r12->byte_0) << 0x1e >> 0x1a | (u32(r12->byte_1) & 0xf0u) >> 4));  // (from the original)
            *gptr<u8>(r4 + 2u) = *gptr<u8>(r3 + (u32(r12->byte_1) << 0x1c >> 0x1a | (u32(r12->byte_2) & 0xc0u) >> 6));  // (from the original)
            u32 r8_1 = r12->byte_2;
            r12 = gptr<Local_0053b6fc_r12>(r12.addr() + 3u);
            *gptr<u8>(r4 + 3u) = *gptr<u8>(r3 + (r8_1 & 0x3fu));  // (from the original)
            r4 += 4u;
            guest::preempt();
        } while (res_1 != 0);
        r0 += (r6 << 2);
        r1 += (r6 + (r6 << 1));
    }
    u32 r12_3 = r2 - r7;
    if (r12_3 != 1u) {
        if (r12_3 != 2u) {
            return;
        }
        *gptr<u8>(r0) = *gptr<u8>(r3 + (u32(*gptr<u8>(r1)) >> 2));
        *gptr<u8>(r0 + 1u) = *gptr<u8>(r3 + (u32(*gptr<u8>(r1)) << 0x1e >> 0x1a | (u32(*gptr<u8>(r1 + 1u)) & 0xf0u) >> 4));  // (from the original)
        *gptr<u8>(r0 + 2u) = *gptr<u8>(r3 + ((u32(*gptr<u8>(r1 + 1u)) & 0xfu) << 2));  // (from the original)
    } else {
        *gptr<u8>(r0) = *gptr<u8>(r3 + (u32(*gptr<u8>(r1)) >> 2));
        *gptr<u8>(r0 + 1u) = *gptr<u8>(r3 + ((u32(*gptr<u8>(r1)) & 3u) << 4));
        *gptr<u8>(r0 + 2u) = 0x3d;  // (from the original)
    }
    *gptr<u8>(r0 + 3u) = 0x3d;  // (from the original)
}

}  // namespace d_0053b6fc
GUEST_EXPORT_FRAMED(0x0053b6fc, d_0053b6fc::base64_encode, 0x3f0);  // pushes {r4, r5, r6, r7, r8, r9} first, as the original

// f_0053b844: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Seeds the 4-word random state from the system tick (with the Mersenne Twister initializer).
namespace d_0053b844 {

struct __attribute__((packed)) Random {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Random, word_0, 0x0);
GUEST_OFFSET(Random, word_4, 0x4);
GUEST_OFFSET(Random, word_8, 0x8);
GUEST_OFFSET(Random, word_c, 0xc);

inline constexpr guest::Function<0x0053d2b4, u32(u32, u32, u32, u32)> Tick__now;

u32 Random__seed_from_tick(gptr<Random> random, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_2 = Tick__now(frame.at(0).addr(), r1, r2, r3);
    u32 r0_3 = *gptr<u32>(r0_2);
    u32 r0_4 = (r0_3 ^ r0_3 >> 0x1e) * 0x6c078965u + 1u;  // (from the original)
    random->word_0 = r0_4;
    u32 r0_5 = (r0_4 ^ r0_4 >> 0x1e) * 0x6c078965u + 2u;  // (from the original)
    random->word_4 = r0_5;
    u32 r0_6 = (r0_5 ^ r0_5 >> 0x1e) * 0x6c078965u + 3u;  // (from the original)
    random->word_8 = r0_6;
    u32 r0_7 = (r0_6 ^ r0_6 >> 0x1e) * 0x6c078965u + 4u;  // (from the original)
    random->word_c = r0_7;
    guest::cpu()->r[1] = 0x6c078965u;  // (from the original)
    return r0_7;
}

}  // namespace d_0053b844
GUEST_EXPORT_FRAMED(0x0053b844, d_0053b844::Random__seed_from_tick, 0x4010);  // pushes {r4, lr} first, as the original

// f_0053bb14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053bb14 {

struct __attribute__((packed)) Local_0053bb14_r0_1 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_0053bb14_r0_1, float_0, 0x0);
GUEST_OFFSET(Local_0053bb14_r0_1, float_4, 0x4);

inline constexpr guest::Function<0x00128e80, u32(u32, u32, u32, u32)> FsArchive__open_file;
inline constexpr guest::Function<0x0012f204, u32(u32, u32)> check_result;
inline constexpr guest::Function<0x00139504, u32(u32, u32)> svc_get_thread_id;

struct __attribute__((packed)) Frame_0053bb14 {
    u32 word_0;
    u8 unknown_4[0x8];  // (not read or written by name)
    u32 word_c;
    u8 unknown_10[0x4];  // (not read or written by name)
    u32 word_14;
    u8 unknown_18[0x8];  // (not read or written by name)
    u32 word_20;
    u32 word_24;
    u32 word_28;
    u32 word_2c;
    u8 unknown_30[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0053bb14, word_0, 0x0);
GUEST_OFFSET(Frame_0053bb14, word_c, 0xc);
GUEST_OFFSET(Frame_0053bb14, word_14, 0x14);
GUEST_OFFSET(Frame_0053bb14, word_20, 0x20);
GUEST_OFFSET(Frame_0053bb14, word_24, 0x24);
GUEST_OFFSET(Frame_0053bb14, word_28, 0x28);
GUEST_OFFSET(Frame_0053bb14, word_2c, 0x2c);
GUEST_SIZE(Frame_0053bb14, 0x34);

u32 pead__DelegateThread__virtual_5(gptr<pead__Thread> thread, u32 r1, float S0, float S1) {
    guest::StackFrameOf<Frame_0053bb14> frame;  // the original's stack frame
    if (thread->word_74 == 0) {
        u32 r12_1 = thread->word_78;
        frame->word_14 = thread.addr();
        float S0_1 = std::bit_cast<float>(thread->physical_address);
        float S1_1 = std::bit_cast<float>(thread->word_84);
        frame->word_20 = 4;
        frame->word_24 = 0x1394e4;  // (from the original)
        frame->word_28 = 0x139500;  // (from the original)
        frame->word_2c = 0x1394f4;  // (from the original)
        frame->word_0 = thread->word_50 + thread->word_7c;
        gptr<Local_0053bb14_r0_1> r0_1 = gptr<Local_0053bb14_r0_1>(frame.at(4).addr());
        r0_1->float_0 = S0_1;
        r0_1->float_4 = S1_1;
        frame->word_c = 0;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        u32 r0_2 = FsArchive__open_file(r12_1, frame.at(0x20).addr(), 0x53b9a0u, frame.at(0x14).addr());  // (from the original)
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        if ((r0_2 & 0x7e00000u) != 0x600000u) {  // (from the original)
            u32 b_1 = r0_2 >> 0x1f;  // (from the original)
            r1 = b_1;
            if (b_1 != 0) {
                check_result(r0_2, r1);
                r1 = guest::cpu()->r[1];
                S0 = guest::cpu()->s[0];
                S1 = guest::cpu()->s[1];
            }
        }
        if (s32(r0_2) >= 0) {
            u32 r1_2 = *gptr<u32>(thread->word_78);
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            u32 r0_4 = svc_get_thread_id(frame.at(0).addr(), r1_2);
            if ((r0_4 >> 0x1f) != 0) {  // (from the original)
                check_result(r0_4, r1_2);
            }
            u32 r1_3 = thread->word_74;
            thread->word_70 = frame->word_0;
            if (r1_3 == 0) {
                thread->word_74 = 1;
            }
            guest::cpu()->r[1] = r1_3;
            return 1u;
        }
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return 0u;
}

}  // namespace d_0053bb14
GUEST_EXPORT_FRAMED(0x0053bb14, d_0053bb14::pead__DelegateThread__virtual_5, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0053bc7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053bc7c {

struct __attribute__((packed)) Object_0053bc7c_2 {
    u32 word_0;
};
GUEST_OFFSET(Object_0053bc7c_2, word_0, 0x0);

inline constexpr u32 vtable_pead__SafeStringBase_char_ = 0x009039e0u;
inline constexpr u32 vtable_pead__Thread = 0x00903c40u;
inline constexpr guest::Function<0x0012f204, u32(u32, u32)> check_result;
inline constexpr guest::Function<0x0013d00c, u32(u32, u32, u32)> svc_get_thread_priority;
inline constexpr guest::Function<0x0013e164, u32(u32, u32)> physical_address_of_vram;
inline constexpr guest::Function<0x00537d70, u32(u32, u32, u32)> PtrPool__init;
inline constexpr guest::Function<0x00537dd8, u32(u32, u32, u32, u32)> PtrPool__construct;
inline constexpr guest::Function<0x0053d490, u32(u32, u32, u32, u32)> pead__IDisposer__IDisposer;

struct __attribute__((packed)) Frame_0053bc7c {
    u32 word_0;
};
GUEST_OFFSET(Frame_0053bc7c, word_0, 0x0);
GUEST_SIZE(Frame_0053bc7c, 0x4);

u32 pead__Thread__construct_main(gptr<pead__Thread> thread, u32 r1, gptr<Object_0053bc7c_2> arg2, u32 r3) {
    guest::StackFrameOf<Frame_0053bc7c> frame;  // the original's stack frame
    frame->word_0 = r3;
    pead__IDisposer__IDisposer(thread.addr(), r1, arg2.addr(), r3);
    thread->safe_string_base_char_vtable = vtable_pead__SafeStringBase_char_;
    thread->word_14 = 0x8b06ac;  // (from the original)
    thread->vtable = vtable_pead__Thread;
    PtrPool__construct(thread.addr() + 0x18u, thread.addr(), 0x8b06acu, vtable_pead__SafeStringBase_char_);  // (from the original)
    thread->word_50 = 0;
    thread->word_54 = 0;
    thread->word_58 = 0;
    thread->word_5c = 0;
    thread->word_60 = 0;
    thread->word_64 = 0;
    thread->byte_68 = 1;
    thread->word_6c = ~0x80000000u;  // (from the original)
    thread->word_70 = r3;
    thread->word_74 = 1;
    thread->word_78 = arg2.addr();
    thread->word_7c = 0;
    u32 r0_3 = svc_get_thread_priority(frame.at(0).addr(), arg2->word_0, thread.addr() + 0x6cu);  // (from the original)
    u32 r1_2 = r0_3 >> 0x1f;  // (from the original)
    if (r1_2 != 0) {
        check_result(r0_3, r1_2);
        r1_2 = guest::cpu()->r[1];
    }
    u32 physical_address_2 = physical_address_of_vram(frame->word_0, r1_2);
    thread->physical_address = physical_address_2;
    thread->word_84 = ~1u;
    thread->word_5c = thread.addr();
    PtrPool__init(thread.addr() + 0x18u, 0x20u, r1);  // (from the original)
    return thread.addr();
}

}  // namespace d_0053bc7c
GUEST_EXPORT_FRAMED(0x0053bc7c, d_0053bc7c::pead__Thread__construct_main, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_0053c024: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls the function at 0x537c28 with the two words as a pair.
namespace d_0053c024 {

inline constexpr guest::Function<0x00537c28, u32(u32, u32, u32, u32)> ResourceMgr__find_loaded;

struct __attribute__((packed)) Frame_0053c024 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0053c024, word_0, 0x0);
GUEST_OFFSET(Frame_0053c024, word_4, 0x4);
GUEST_SIZE(Frame_0053c024, 0xc);

void call_537c28_with_pair(u32 r0, u32 r1) {
    guest::StackFrameOf<Frame_0053c024> frame;  // the original's stack frame
    frame->word_0 = r0;
    frame->word_4 = r1;
    ResourceMgr__find_loaded(frame.at(0).addr(), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0053c024
GUEST_EXPORT_FRAMED(0x0053c024, d_0053c024::call_537c28_with_pair, 0x4000);  // pushes {lr} first, as the original

// f_0053c568: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Allocates `size` bytes with the alignment from the back of a free block, splitting off the rest.
namespace d_0053c568 {

struct __attribute__((packed)) ExpHeap {
    u8 unknown_0[0x70];  // (not used here)
    u8 byte_70;
    u8 unknown_71[0xf];  // (not used here)
    u32 word_80;
};
GUEST_OFFSET(ExpHeap, byte_70, 0x70);
GUEST_OFFSET(ExpHeap, word_80, 0x80);

struct __attribute__((packed)) Local_0053c568_r0_1 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0053c568_r0_1, word_8, 0x8);
GUEST_OFFSET(Local_0053c568_r0_1, word_c, 0xc);

struct __attribute__((packed)) Local_0053c568_r4_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0053c568_r4_1, word_0, 0x0);
GUEST_OFFSET(Local_0053c568_r4_1, word_4, 0x4);
GUEST_OFFSET(Local_0053c568_r4_1, word_8, 0x8);
GUEST_OFFSET(Local_0053c568_r4_1, word_c, 0xc);

struct __attribute__((packed)) Local_0053c568_r5_1 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0053c568_r5_1, word_8, 0x8);
GUEST_OFFSET(Local_0053c568_r5_1, word_c, 0xc);

struct __attribute__((packed)) Local_0053c568_r5_2 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0053c568_r5_2, word_8, 0x8);
GUEST_OFFSET(Local_0053c568_r5_2, word_c, 0xc);

inline constexpr guest::Function<0x0053d268, u32(u32, u32)> insert_node_after_0053d268;
inline constexpr guest::Function<0x0053d284, u32(u32)> unlink_node_0053d284;
inline constexpr guest::Function<0x00748dd8, u32(u32, u32, u32, u32)> ExpHeap__allocate_from_block;

u32 ExpHeap__allocate_tail(gptr<ExpHeap> exp_heap, u32 r1, u32 r2) {
    u32 r3_1 = exp_heap->byte_70;
    gptr<Local_0053c568_r0_1> r0_1 = gptr<Local_0053c568_r0_1>(ExpHeap__allocate_from_block(exp_heap.addr(), r1, r2, r3_1));
    if (r0_1.addr() != 0) {
        u32 r1_2 = r0_1->word_8;
        u32 r0_2 = r0_1->word_c + 0x10u;  // (from the original)
        u32 r2_1 = r1_2 - r1 + (r0_1.addr() + r0_2);
        u32 r2_2 = r2_1 - (r2_1 & ~(r2 - 1u)) + r1;
        u32 r1_3 = r1_2 - r2_2;
        if (r1_3 <= 0x10u) {  // (from the original)
            r0_1->word_c = r1_3;
            if (r1_3 != 0) {
                *gptr<u32>(r0_1.addr() + (r1_3 + 0x10u) - 4u) = r0_1.addr() + 1u;  // (from the original)
            }
            r0_1->word_8 = r2_2;
            unlink_node_0053d284(exp_heap->word_80 + r0_1.addr());
            u32 r0_4 = *gptr<u32>(exp_heap.addr() + 0x7cu) - 1u;  // (from the original)
            u32 ea_2 = exp_heap.addr() + 0x7cu;  // (from the original)
            *gptr<u32>(ea_2) = r0_4;
            gptr<Local_0053c568_r5_1> r5_1 = gptr<Local_0053c568_r5_1>(ea_2 + 8u);
            insert_node_after_0053d268(r5_1.addr(), r5_1->word_c + r0_1.addr());
            r5_1->word_8 = r5_1->word_8 + 1u;
            return r0_1.addr();
        }
        r0_1->word_8 = r1_3 - 0x10u;  // (from the original)
        gptr<Local_0053c568_r4_1> r4_1 = gptr<Local_0053c568_r4_1>(r0_2 + r0_1.addr() + (r1_3 - 0x10u));  // (from the original)
        if (r4_1.addr() != 0) {
            r4_1->word_0 = 0;
            r4_1->word_4 = 0;
            r4_1->word_8 = 0;
            r4_1->word_c = 0;
        }
        gptr<Local_0053c568_r5_2> r5_2 = gptr<Local_0053c568_r5_2>(exp_heap.addr() + 0x84u);  // (from the original)
        r4_1->word_8 = r2_2;
        insert_node_after_0053d268(r5_2.addr(), r5_2->word_c + r4_1.addr());
        r5_2->word_8 = r5_2->word_8 + 1u;
        r0_1 = gptr<Local_0053c568_r0_1>(r4_1.addr());
    }
    return r0_1.addr();
}

}  // namespace d_0053c568
GUEST_EXPORT_FRAMED(0x0053c568, d_0053c568::ExpHeap__allocate_tail, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0053cd54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Creates an expanded heap in the memory (more than 0xa4 bytes, under the global lock) and registers it with its
// parent.
namespace d_0053cd54 {

inline constexpr u32 exp_heap_list_address = 0x00ae70c0u;
inline constexpr guest::Function<0x00538188, u32(u32, u32, u32, u32)> lock_lock_at_10;
inline constexpr guest::Function<0x00538274, u32(u32)> unlock_lock_at_10;
inline constexpr guest::Function<0x0053c7b8, u32(u32, u32)> ExpHeap__free_all;
inline constexpr guest::Function<0x0053cef0, u32(u32, u32, u32, u32)> pead__ExpHeap__ExpHeap;

struct __attribute__((packed)) Frame_0053cd54 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0053cd54, word_0, 0x0);
GUEST_OFFSET(Frame_0053cd54, word_4, 0x4);
GUEST_OFFSET(Frame_0053cd54, word_8, 0x8);
GUEST_SIZE(Frame_0053cd54, 0x10);

u32 ExpHeap__create(u32 exp_heap, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0053cd54> frame;  // the original's stack frame
    u32 r5_1 = exp_heap;
    lock_lock_at_10(exp_heap_list_address, r1, r2, r3);
    u32 r1_1 = r1 + 3u & ~3u;
    if (r1_1 <= 0xa4u) {  // (from the original)
        unlock_lock_at_10(exp_heap_list_address);
        return 0u;
    }
    if (r5_1 != 0) {
        frame->word_0 = r1_1;
        frame->word_4 = 1;
        frame->word_8 = r3;
        r5_1 = pead__ExpHeap__ExpHeap(r5_1, r2, 0u, r5_1);
        r1_1 = guest::cpu()->r[1];
    }
    ExpHeap__free_all(r5_1, r1_1);
    unlock_lock_at_10(exp_heap_list_address);
    return r5_1;
}

}  // namespace d_0053cd54
GUEST_EXPORT_FRAMED(0x0053cd54, d_0053cd54::ExpHeap__create, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0053cef0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053cef0 {

struct __attribute__((packed)) Local_0053cef0_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0053cef0_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0053cef0_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0053cef0_ea_1, word_8, 0x8);

inline constexpr u32 vtable_pead__ExpHeap = 0x00903c8cu;
inline constexpr guest::Function<0x00538188, u32(u32, u32)> lock_lock_at_10;
inline constexpr guest::Function<0x00538274, u32(u32, u32)> unlock_lock_at_10;
inline constexpr guest::Function<0x0053b040, u32(u32, u32, u32, u32)> pead__SafeStringBase_char___SafeStringBase_0053b040;

struct __attribute__((packed)) Frame_0053cef0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Frame_0053cef0, word_0, 0x0);
GUEST_OFFSET(Frame_0053cef0, word_4, 0x4);
GUEST_OFFSET(Frame_0053cef0, word_8, 0x8);
GUEST_SIZE(Frame_0053cef0, 0xc);

u32 pead__ExpHeap__ExpHeap(gptr<pead__ExpHeap> exp_heap, u32 r1) {
    guest::StackFrameOf<Frame_0053cef0> frame;  // the original's stack frame
    gptr<Local_0053cef0_ea_1> ea_1 = gptr<Local_0053cef0_ea_1>(frame.at(0x18).addr());  // (from the original)
    u32 r4_1 = ea_1->word_0;
    u32 r5_1 = ea_1->word_4;
    u32 r12_1 = ea_1->word_8;
    frame->word_0 = r4_1;
    frame->word_4 = r5_1;
    frame->word_8 = r12_1;
    pead__SafeStringBase_char___SafeStringBase_0053b040(exp_heap.addr(), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r5_2 = 0u;
    exp_heap->vtable = vtable_pead__ExpHeap;
    exp_heap->byte_70 = u8(r5_2);
    u32 r1_1 = ~0u;
    exp_heap->word_78 = exp_heap.addr() + 0x74u;  // (from the original)
    exp_heap->word_7c = r5_2;
    exp_heap->word_80 = r1_1;
    exp_heap->word_74 = exp_heap.addr() + 0x74u;  // (from the original)
    exp_heap->word_88 = exp_heap.addr() + 0x84u;  // (from the original)
    exp_heap->word_8c = r5_2;
    exp_heap->word_84 = exp_heap.addr() + 0x84u;  // (from the original)
    exp_heap->word_90 = r1_1;
    u32 r1_2 = exp_heap.addr() + 0x50u;  // (from the original)
    u32 r0_3 = exp_heap->flags & 1u;
    if (r0_3 != 0) {
        r0_3 = 1u;
    }
    if (r0_3 != 0) {
        r5_2 = r1_2;
        lock_lock_at_10(r1_2, r1_2);
        r1_2 = guest::cpu()->r[1];
    }
    *gptr<u32>(exp_heap.addr() + 0x80u) = 0;  // (from the original)
    *gptr<u32>(exp_heap.addr() + 0x90u) = 0;  // (from the original)
    if (r5_2 != 0) {
        unlock_lock_at_10(r5_2, r1_2);
        r1_2 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1_2;
    return exp_heap.addr();
}

}  // namespace d_0053cef0
GUEST_EXPORT_FRAMED(0x0053cef0, d_0053cef0::pead__ExpHeap__ExpHeap, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0053cfe8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053cfe8 {

struct __attribute__((packed)) pead__SafeStringBase_char_ {
    u32 exp_heap;
    u32 word_4;
};
GUEST_OFFSET(pead__SafeStringBase_char_, exp_heap, 0x0);
GUEST_OFFSET(pead__SafeStringBase_char_, word_4, 0x4);

inline constexpr u32 vtable_pead__SafeStringBase_char_ = 0x009039e0u;
inline constexpr u32 global_0097d414_address = 0x0097d414u;
inline constexpr u32 heap_name_counter_address = 0x00ae70a4u;
inline guest::global<u32, 0x0097d40c> thread_local_heap_key;
inline guest::global<u32, 0x0097d410> global_0097d410;
inline guest::global<u32, 0x0097d418> global_0097d418;
inline guest::global<u32, 0x00ae70a4> heap_name_counter;
inline guest::global<u32, 0x00ae70a8> global_00ae70a8;
inline guest::global<u32, 0x00ae70ac> global_00ae70ac;
inline constexpr guest::Function<0x0053cd54, u32(u32, u32, u32, u32)> ExpHeap__create;

struct __attribute__((packed)) Frame_0053cfe8 {
    u32 object_0_vtable;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0053cfe8, object_0_vtable, 0x0);
GUEST_OFFSET(Frame_0053cfe8, word_4, 0x4);
GUEST_SIZE(Frame_0053cfe8, 0xc);

void pead__create_root_heap(gptr<pead__SafeStringBase_char_> safe_string_base_char) {
    guest::StackFrameOf<Frame_0053cfe8> frame;  // the original's stack frame
    *global_0097d410 = safe_string_base_char.addr();
    *global_0097d418 = 0;
    u32 exp_heap = safe_string_base_char->exp_heap;
    u32 r1_1 = safe_string_base_char->word_4;
    frame->word_4 = 0x8b069c;  // (from the original)
    frame->object_0_vtable = vtable_pead__SafeStringBase_char_;
    u32 r0_2 = ExpHeap__create(exp_heap, r1_1, frame.at(0).addr(), 0u);
    u32 r2_2 = *heap_name_counter;
    if (s32(r2_2) < s32(*global_00ae70a8)) {
        *gptr<u32>(*global_00ae70ac + (r2_2 << 2)) = r0_2;
        *heap_name_counter = *heap_name_counter + 1u;
    }
    *thread_local_heap_key = 0x97d414;  // (from the original)
}

}  // namespace d_0053cfe8
GUEST_EXPORT_FRAMED(0x0053cfe8, d_0053cfe8::pead__create_root_heap, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0053d230: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Unlinks every node of the list and empties it.
namespace d_0053d230 {

struct __attribute__((packed)) IntrusiveList {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(IntrusiveList, word_0, 0x0);
GUEST_OFFSET(IntrusiveList, word_4, 0x4);
GUEST_OFFSET(IntrusiveList, word_8, 0x8);

struct __attribute__((packed)) Local_0053d230_r3_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0053d230_r3_1, word_0, 0x0);
GUEST_OFFSET(Local_0053d230_r3_1, word_4, 0x4);


void IntrusiveList__clear_b(gptr<IntrusiveList> intrusive_list) {
    u32 r0 = intrusive_list.addr();
    u32 r1 = intrusive_list->word_4;
    u32 r2 = 0u;
    if (r1 != r0) {
        do {
            gptr<Local_0053d230_r3_1> r3_1 = gptr<Local_0053d230_r3_1>(r1);
            r1 = *gptr<u32>(r1 + 4u);
            r3_1->word_4 = r2;
            r3_1->word_0 = r2;
            guest::preempt();
        } while (r1 != r0);
    }
    intrusive_list->word_4 = r0;
    intrusive_list->word_8 = r2;
    intrusive_list->word_0 = r0;
    guest::cpu()->r[1] = r0 + 4u;
}

}  // namespace d_0053d230
GUEST_EXPORT(0x0053d230, d_0053d230::IntrusiveList__clear_b);

// f_0053d2cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The CRC-16 (polynomial 0xa001, table built once) of the bytes.
namespace d_0053d2cc {

inline constexpr u32 global_00981e90_address = 0x00981e90u;
inline constexpr u32 crc16_table_address = 0x00af6bdcu;

u32 crc16(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r12 = 0;
    u32 res_1 = 0;
    u32 r6 = global_00981e90_address;
    if (*gptr<u8>(r6) == 0) {
        u32 r5 = 0xa001u;  // (from the original)
        u32 r7 = crc16_table_address;
        u32 r4 = 0u;
        do {
            r2 = r4;
            r12 = 4u;
            do {
                u32 r3_1 = (r2 & 1u) == 0 ? r2 >> 1 : r5 ^ r2 >> 1;
                r2 = (r3_1 & 1u) == 0 ? r3_1 >> 1 : r5 ^ r3_1 >> 1;
                r12 -= 1u;
                guest::preempt();
            } while (r12 != 0);
            u32 r3_2 = r7 + (r4 << 1);
            r4 += 1u;
            *gptr<u16>(r3_2) = u16(r2);
            guest::preempt();
        } while (r4 < 0x100u);  // (from the original)
        *gptr<u8>(r6) = 1;
    }
    r12 = crc16_table_address;
    r2 = 0u;
    if (r1 != 0) {
        u32 r3 = r0 - 1u;
        if ((r1 & 1u) != 0) {
            u32 ea_1 = r3 + 1u;
            r3 = ea_1;
            r2 = gptr<u16>(r12)[u32(*gptr<u8>(ea_1))];
        }
        r1 >>= 1;
        if (r1 != 0) {
            do {
                u32 r0_1 = *gptr<u8>(r3 + 1u);
                u32 ea_3 = r3 + 2u;
                r3 = ea_3;
                res_1 = r1 - 1u;
                r1 = res_1;
                u32 r0_2 = u32(gptr<u16>(r12)[(r0_1 ^ r2) & 0xffu]) ^ r2 >> 8;  // (from the original)
                r2 = u32(gptr<u16>(r12)[(u32(*gptr<u8>(ea_3)) ^ r0_2) & 0xffu]) ^ r0_2 >> 8;  // (from the original)
                guest::preempt();
            } while (res_1 != 0);
        }
    }
    guest::cpu()->r[1] = r1;
    return uxth(r2);
}

}  // namespace d_0053d2cc
GUEST_EXPORT_FRAMED(0x0053d2cc, d_0053d2cc::crc16, 0xf0);  // pushes {r4, r5, r6, r7} first, as the original

// f_0053d3b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The CRC-32 (polynomial 0xedb88320, table built once) of the bytes.
namespace d_0053d3b0 {

inline constexpr u32 global_0097ea04_address = 0x0097ea04u;
inline constexpr u32 crc32_table_b_address = 0x00af4990u;

u32 crc32_b(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 res_1 = 0;
    u32 r6 = global_0097ea04_address;
    if (*gptr<u8>(r6) == 0) {
        u32 r5 = 0xedb88320u;  // (from the original)
        u32 r7 = crc32_table_b_address;
        u32 r12 = 0u;
        do {
            r2 = r12;
            u32 r4 = 4u;
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
    u32 r3 = crc32_table_b_address;
    r2 = ~0u;
    if (r1 != 0) {
        r0 -= 1u;
        if ((r1 & 1u) != 0) {
            u32 ea_1 = r0 + 1u;
            r0 = ea_1;
            r2 = gptr<u32>(r3)[(u32(*gptr<u8>(ea_1)) ^ r2) & 0xffu] ^ r2 >> 8;  // (from the original)
        }
        r1 >>= 1;
        if (r1 != 0) {
            do {
                res_1 = r1 - 1u;
                r1 = res_1;
                u32 r4_1 = (u32(*gptr<u8>(r0 + 1u)) ^ r2) & 0xffu;  // (from the original)
                u32 ea_3 = r0 + 2u;
                r0 = ea_3;
                u32 r2_1 = gptr<u32>(r3)[r4_1] ^ r2 >> 8;
                r2 = gptr<u32>(r3)[(u32(*gptr<u8>(ea_3)) ^ r2_1) & 0xffu] ^ r2_1 >> 8;  // (from the original)
                guest::preempt();
            } while (res_1 != 0);
        }
    }
    return ~r2;
}

}  // namespace d_0053d3b0
GUEST_EXPORT_FRAMED(0x0053d3b0, d_0053d3b0::crc32_b, 0xf0);  // pushes {r4, r5, r6, r7} first, as the original

// f_0053d490: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053d490 {

inline constexpr u32 vtable_pead__IDisposer = 0x00903d1cu;
inline constexpr u32 thread_local_heap_key_address = 0x0097d40cu;
inline guest::global<u32, 0x0097d40c> thread_local_heap_key;
inline constexpr guest::Function<0x0053ad24, u32(u32, u32)> Heap__add_child;
inline constexpr guest::Function<0x00749030, u32(u32, u32, u32, u32)> find_heap_containing;

u32 pead__IDisposer__IDisposer(gptr<pead__IDisposer> i_disposer) {
    i_disposer->vtable = vtable_pead__IDisposer;
    i_disposer->heap = 0;
    i_disposer->word_8 = 0;
    i_disposer->word_c = 0;
    u32 r0_1 = *thread_local_heap_key;
    if (r0_1 == 0) {
        return i_disposer.addr();
    }
    u32 heap_containing_2 = find_heap_containing(r0_1, i_disposer.addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    if (heap_containing_2 != 0) {
        r1_1 = i_disposer.addr();
    }
    i_disposer->heap = heap_containing_2;
    if (heap_containing_2 != 0) {
        Heap__add_child(heap_containing_2, r1_1);
    }
    return i_disposer.addr();
}

}  // namespace d_0053d490
GUEST_EXPORT_FRAMED(0x0053d490, d_0053d490::pead__IDisposer__IDisposer, 0x4010);  // pushes {r4, lr} first, as the original

// f_0053d530: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053d530 {

inline constexpr u32 vtable_pead__IDisposer = 0x00903d1cu;
inline constexpr u32 disposer_list_address = 0x0097ea00u;
inline guest::global<u32, 0x0097ea00> disposer_list;
inline constexpr guest::Function<0x0053ad94, u32(u32, u32, u32, u32)> Heap__remove_child;

u32 pead__IDisposer__destructor(gptr<pead__IDisposer> i_disposer) {
    i_disposer->vtable = vtable_pead__IDisposer;
    u32 heap = i_disposer->heap;
    u32 r1_1 = *disposer_list;
    if (heap != r1_1) {
        if (heap != 0) {
            Heap__remove_child(heap, i_disposer.addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
            r1_1 = guest::cpu()->r[1];
        }
        i_disposer->heap = *disposer_list;
    }
    guest::cpu()->r[1] = r1_1;
    return i_disposer.addr();
}

}  // namespace d_0053d530
GUEST_EXPORT_FRAMED(0x0053d530, d_0053d530::pead__IDisposer__destructor, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0053d66c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053d66c {

struct __attribute__((packed)) Local_0053d66c_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_0053d66c_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0053d66c_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0053d66c_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_0053d66c_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_0053d66c_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_0053d66c_ea_1, word_14, 0x14);

struct __attribute__((packed)) Local_0053d66c_ea_3 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_0053d66c_ea_3, word_4, 0x4);
GUEST_OFFSET(Local_0053d66c_ea_3, word_8, 0x8);
GUEST_OFFSET(Local_0053d66c_ea_3, word_c, 0xc);
GUEST_OFFSET(Local_0053d66c_ea_3, word_10, 0x10);
GUEST_OFFSET(Local_0053d66c_ea_3, word_14, 0x14);

inline constexpr u32 vtable_pead__MainThread = 0x00903908u;
inline constexpr u32 global_00974f6c_address = 0x00974f6cu;
inline guest::global<u32, 0x008b06a8> global_008b06a8;
inline constexpr guest::Function<0x0012f204, u32(u32, u32)> check_result;
inline constexpr guest::Function<0x00139504, u32(u32, u32, u32, u32)> svc_get_thread_id;
inline constexpr guest::Function<0x0013a37c, u32(u32, u32)> ThreadLocal__set;
inline constexpr guest::Function<0x0053ac4c, u32(u32, u32)> Heap__allocate_aligned_4;
inline constexpr guest::Function<0x0053bc7c, u32(u32, u32, u32, u32)> pead__Thread__construct_main;

struct __attribute__((packed)) Frame_0053d66c {
    u32 word_0;
    u8 unknown_4[0x14];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0053d66c, word_0, 0x0);
GUEST_SIZE(Frame_0053d66c, 0x18);

void pead__MainThread__MainThread(u32 main_thread, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0053d66c> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_0053d66c_ea_1> ea_1 = gptr<Local_0053d66c_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r3;
    ea_1->word_4 = r4;
    ea_1->word_8 = r5;
    ea_1->word_c = r6;
    ea_1->word_10 = r7;
    ea_1->word_14 = r14;
    u32 r0_2 = svc_get_thread_id(frame.at(0).addr(), *global_008b06a8, r2, r3);
    u32 r1_2 = r0_2 >> 0x1f;  // (from the original)
    if (r1_2 != 0) {
        check_result(r0_2, r1_2);
    }
    u32 r6_1 = frame->word_0;
    u32 thread = Heap__allocate_aligned_4(0x88u, r1);  // (from the original)
    if (thread != 0) {
        thread = pead__Thread__construct_main(thread, r1, global_00974f6c_address, r6_1);
        *gptr<u32>(thread) = vtable_pead__MainThread;
    }
    *gptr<u32>(main_thread + 0x20u) = thread;  // (from the original)
    gptr<Local_0053d66c_ea_3> ea_3 = gptr<Local_0053d66c_ea_3>(frame.at(0).addr());
    u32 r4_1 = ea_3->word_4;
    u32 r5_1 = ea_3->word_8;
    u32 r6_2 = ea_3->word_c;
    u32 r7_1 = ea_3->word_10;
    r14 = ea_3->word_14;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_1;
    frame.release();
    ThreadLocal__set(main_thread + 0x24u, thread);  // (from the original)
    return;
}

}  // namespace d_0053d66c
GUEST_EXPORT(0x0053d66c, d_0053d66c::pead__MainThread__MainThread);

// f_0053d7c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053d7c8 {

inline constexpr u32 vtable_pead__ThreadMgr = 0x00903d3cu;
inline constexpr guest::Function<0x0013a38c, u32(u32, u32, u32, u32)> ThreadLocal__allocate;

u32 pead__ThreadMgr__ThreadMgr(gptr<pead__ThreadMgr> thread_mgr) {
    thread_mgr->vtable = vtable_pead__ThreadMgr;
    u32 r1_1 = thread_mgr.addr() + 0x14u;  // (from the original)
    thread_mgr->word_18 = r1_1;
    thread_mgr->word_1c = 0;
    thread_mgr->word_14 = r1_1;
    thread_mgr->word_20 = 0;
    u32 r0_2 = ThreadLocal__allocate((thread_mgr.addr() + 0x14u) + 0x10u, r1_1, 0u, thread_mgr.addr() + 0x18u);  // (from the original)
    return r0_2 - 0x24u;  // (from the original)
}

}  // namespace d_0053d7c8
GUEST_EXPORT_FRAMED(0x0053d7c8, d_0053d7c8::pead__ThreadMgr__ThreadMgr, 0x4010);  // pushes {r4, lr} first, as the original

// f_0053df24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053df24 {

inline constexpr u32 vtable_sead__Controller = 0x00903d64u;
inline constexpr guest::Function<0x00543c54, u32(u32, u32, u32, u32)> sead__ControllerBase__ControllerBase;

struct __attribute__((packed)) Frame_0053df24 {
    u32 word_0;
};
GUEST_OFFSET(Frame_0053df24, word_0, 0x0);
GUEST_SIZE(Frame_0053df24, 0x4);

u32 sead__Controller__Controller(gptr<sead__Controller> controller, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_0053df24> frame;  // the original's stack frame
    frame->word_0 = r3;
    frame->word_0 = 0xf;  // (from the original)
    sead__ControllerBase__ControllerBase(controller.addr(), 0x1cu, 0x14u, 0x18u);  // (from the original)
    controller->vtable = vtable_sead__Controller;
    controller->byte_134 = 0;
    controller->word_138 = r1;
    controller->word_140 = controller.addr() + 0x13cu;  // (from the original)
    controller->word_144 = 0;
    controller->word_13c = controller.addr() + 0x13cu;  // (from the original)
    controller->word_150 = controller.addr() + 0x14cu;  // (from the original)
    controller->word_154 = 0;
    controller->word_14c = controller.addr() + 0x14cu;  // (from the original)
    controller->word_148 = 4;
    controller->word_158 = 0x14c;  // (from the original)
    return controller.addr();
}

}  // namespace d_0053df24
GUEST_EXPORT_FRAMED(0x0053df24, d_0053df24::sead__Controller__Controller, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0053dfa0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Reads from the file through the device (virtual 19) when the device is open and the arguments are set.
namespace d_0053dfa0 {

struct __attribute__((packed)) FileDevice {
    u32 word_0;
    u8 unknown_4[0x48];  // (not used here)
    u8 byte_4c;
};
GUEST_OFFSET(FileDevice, word_0, 0x0);
GUEST_OFFSET(FileDevice, byte_4c, 0x4c);


u32 FileDevice__read(gptr<FileDevice> file_device, u32 r1, u32 file_request) {
    if (file_device->byte_4c == 0 || file_request == 0 || r1 == 0) {
        return 0u;
    }
    u32 r3_1 = *gptr<u32>(file_device->word_0 + 0x4cu);  // (from the original)
    // virtual function 19 of file_device.addr()
    return guest::call_address<u32>(r3_1, file_device.addr(), r1, file_request, r3_1);
}

}  // namespace d_0053dfa0
GUEST_EXPORT(0x0053dfa0, d_0053dfa0::FileDevice__read);

// f_0053dffc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Gets the file's size through the device (virtual 20) when the device is open.
namespace d_0053dffc {

struct __attribute__((packed)) FileDevice {
    u32 word_0;
    u8 unknown_4[0x48];  // (not used here)
    u8 byte_4c;
};
GUEST_OFFSET(FileDevice, word_0, 0x0);
GUEST_OFFSET(FileDevice, byte_4c, 0x4c);


u32 FileDevice__get_size(gptr<FileDevice> file_device, u32 r1) {
    if (file_device->byte_4c == 0 || r1 == 0) {
        return 0u;
    }
    u32 r3_1 = *gptr<u32>(file_device->word_0 + 0x50u);  // (from the original)
    // virtual function 20 of file_device.addr()
    return guest::call_address<u32>(r3_1, file_device.addr(), r1, guest::cpu()->r[2], r3_1);
}

}  // namespace d_0053dffc
GUEST_EXPORT(0x0053dffc, d_0053dffc::FileDevice__get_size);

// f_0053e23c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053e23c {

inline constexpr u32 vtable_sead__SafeStringBase_char_ = 0x009047f8u;

void sead__SafeStringBase_char___SafeStringBase_0053e23c(gptr<sead__SafeStringBase_char_> safe_string_base_char) {
    safe_string_base_char->vtable = vtable_sead__SafeStringBase_char_;
    safe_string_base_char->word_4 = 0x8c9f1c;  // (from the original)
    safe_string_base_char->word_8 = 0;
    safe_string_base_char->word_c = 0;
    safe_string_base_char->word_10 = 0;
    safe_string_base_char->word_14 = 0;
    safe_string_base_char->word_18 = 0;
    safe_string_base_char->byte_1c = 1;
    safe_string_base_char->byte_1d = 1;
    safe_string_base_char->word_20 = 0;
    safe_string_base_char->word_24 = 0;
    safe_string_base_char->byte_28 = 0;
}

}  // namespace d_0053e23c
GUEST_EXPORT(0x0053e23c, d_0053e23c::sead__SafeStringBase_char___SafeStringBase_0053e23c);

// f_0053e958: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053e958 {

inline constexpr u32 vtable_sead__FileDevice = 0x00903d90u;
inline constexpr u32 file_device_mgr_instance_address = 0x009752e0u;
inline guest::global<u32, 0x009752e0> file_device_mgr_instance;
inline constexpr guest::Function<0x0013efb4, u32(u32, u32, u32, u32)> destroy_disposer;
inline constexpr guest::Function<0x005423b8, u32(u32, u32, u32, u32)> FileDevice__close;

u32 sead__FileDevice__destructor(gptr<sead__FileDevice> file_device, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    file_device->vtable = vtable_sead__FileDevice;
    u32 r0_1 = *file_device_mgr_instance;
    if (r0_1 != 0) {
        FileDevice__close(r0_1, file_device.addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    frame.release();
    return destroy_disposer(file_device.addr(), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0053e958
GUEST_EXPORT(0x0053e958, d_0053e958::sead__FileDevice__destructor);

// f_0053e990: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Releases the file handle through its device when it has one.
namespace d_0053e990 {

struct __attribute__((packed)) FileHandle {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(FileHandle, word_8, 0x8);

inline constexpr guest::Function<0x0013ef38, u32(u32, u32, u32, u32)> release_handle_0013ef38;

u32 FileHandle__release(gptr<FileHandle> file_handle, u32 r1) {
    u32 r2_1 = file_handle->word_8;
    if (r2_1 == 0) {
        return 0u;
    }
    return release_handle_0013ef38(r2_1, file_handle.addr(), r2_1, guest::cpu()->r[3]);
}

}  // namespace d_0053e990
GUEST_EXPORT(0x0053e990, d_0053e990::FileHandle__release);

// f_0053e9b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Reads from the file handle through its device when it has one.
namespace d_0053e9b0 {

struct __attribute__((packed)) FileHandle {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(FileHandle, word_4, 0x4);

inline constexpr guest::Function<0x0053e71c, u32(u32, u32, u32, u32)> TouchPanel__hit_test;

struct __attribute__((packed)) Frame_0053e9b0 {
    u32 word_0;
};
GUEST_OFFSET(Frame_0053e9b0, word_0, 0x0);
GUEST_SIZE(Frame_0053e9b0, 0x4);

u32 FileHandle__read(gptr<FileHandle> file_handle, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0053e9b0> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r12_1 = file_handle->word_4;
    if (r12_1 == 0) {
        return 0u;
    }
    frame->word_0 = r3;
    u32 r0_1 = TouchPanel__hit_test(r12_1, guest::cpu()->r[1], file_handle.addr(), r2);
    return r0_1;
}

}  // namespace d_0053e9b0
GUEST_EXPORT_FRAMED(0x0053e9b0, d_0053e9b0::FileHandle__read, 0x4000);  // pushes {lr} first, as the original

// f_0053ecf8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Converts the UTF-8 text into UTF-16.
namespace d_0053ecf8 {

struct __attribute__((packed)) Local_0053ecf8_r4_1 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Local_0053ecf8_r4_1, byte_0, 0x0);
GUEST_OFFSET(Local_0053ecf8_r4_1, byte_1, 0x1);
GUEST_OFFSET(Local_0053ecf8_r4_1, byte_2, 0x2);


u32 utf8_to_utf16_2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r5 = guest::cpu()->r[5];
    u32 r1_1 = 0;
    u32 r6 = r0;
    if (r1 != 0) {
        u32 res_1 = r3 + 1u;
        u32 vf_1 = ((r3 ^ res_1) & (1u ^ res_1)) >> 0x1f;  // (from the original)
        if (res_1 >> 0x1f == ((r3 ^ res_1) & (1u ^ res_1)) >> 0x1f) {  // (from the original)
            r0 = 0u;
            r5 = r0;
        }
        if (res_1 == 0) {
            r3 = ~0x80000000u;  // (from the original)
        }
        if (res_1 >> 0x1f == vf_1) {  // (from the original)
            u32 r7 = 0u;
            if (r1 >= 0u && r1 != 0) {
                u32 r8 = 0xc0u;  // (from the original)
                u32 r9 = 0xe0u;  // (from the original)
                u32 r11 = 0x80u;  // (from the original)
                do {
                    u32 r12_1 = gptr<u16>(r2)[r5];
                    gptr<Local_0053ecf8_r4_1> r4_1 = gptr<Local_0053ecf8_r4_1>(r6 + r0);
                    if (s32(r3) <= s32(r5)) {
                        *gptr<u8>(r6 + r0) = u8(r7);
                        guest::cpu()->r[1] = r1;
                        return r0;
                    }
                    if (r12_1 != 0) {
                        if (r12_1 <= 0x7fu) {  // (from the original)
                            r0 += 1u;
                            r4_1->byte_0 = u8(r12_1);
                        } else if (r12_1 >= 0x800u) {  // (from the original)
                            if (r1 <= r0 + 2u) {
                                r1_1 = r6 + r0;
                                *gptr<u8>(r1_1 - 1u) = u8(r7);
                                guest::cpu()->r[1] = r1_1;
                                return r0 - 1u;
                            }
                            r4_1->byte_0 = u8(r9 | r12_1 >> 0xc);  // (from the original)
                            r4_1->byte_1 = u8(r11 | r12_1 >> 6u & 0x3fu);  // (from the original)
                            r0 += 3u;
                            r4_1->byte_2 = u8(r12_1 & 0x3fu | 0x80u);  // (from the original)
                        } else {
                            if (r1 <= r0 + 1u) {
                                r1_1 = r6 + r0;
                                *gptr<u8>(r1_1 - 1u) = u8(r7);
                                guest::cpu()->r[1] = r1_1;
                                return r0 - 1u;
                            }
                            r4_1->byte_0 = u8(r8 | r12_1 >> 6);
                            r0 += 2u;
                            r4_1->byte_1 = u8(r12_1 & 0x3fu | 0x80u);  // (from the original)
                        }
                    } else {
                        r4_1->byte_0 = u8(r7);
                        guest::cpu()->r[1] = r1;
                        return r0;
                    }
                    r5 += 1u;
                    guest::preempt();
                } while (r0 < r1);
            }
            r1_1 = r6 + r0;
            *gptr<u8>(r1_1 - 1u) = u8(r7);
            guest::cpu()->r[1] = r1_1;
            return r0 - 1u;
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_0053ecf8
GUEST_EXPORT_FRAMED(0x0053ecf8, d_0053ecf8::utf8_to_utf16_2, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_0053edf4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Converts the UTF-16 text into UTF-8.
namespace d_0053edf4 {

struct __attribute__((packed)) Local_0053edf4_r6_1 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Local_0053edf4_r6_1, byte_0, 0x0);
GUEST_OFFSET(Local_0053edf4_r6_1, byte_1, 0x1);
GUEST_OFFSET(Local_0053edf4_r6_1, byte_2, 0x2);


u32 utf16_to_utf8_2(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r5 = guest::cpu()->r[5];
    u32 r4_2 = 0;
    u32 r6_3 = 0;
    u32 r1_2 = 0;
    u32 r12 = r0;
    if (r1 != 0) {
        u32 res_1 = r3 + 1u;
        u32 vf_1 = ((r3 ^ res_1) & (1u ^ res_1)) >> 0x1f;  // (from the original)
        if (res_1 >> 0x1f == ((r3 ^ res_1) & (1u ^ res_1)) >> 0x1f) {  // (from the original)
            r0 = 0u;
            r5 = r0;
        }
        if (res_1 == 0) {
            r3 = ~0x80000000u;  // (from the original)
        }
        if (res_1 >> 0x1f == vf_1) {  // (from the original)
            u32 r7 = 0u;
            if (r1 >= 0u && r1 != 0) {
                do {
                    gptr<Local_0053edf4_r6_1> r6_1 = gptr<Local_0053edf4_r6_1>(r2 + r5);
                    if (s32(r3) <= s32(r5)) {
                        r1_2 = r12 + (r0 << 1);
                        *gptr<u16>(r1_2) = u16(r7);
                        guest::cpu()->r[1] = r1_2;
                        return r0;
                    }
                    u32 r4_1 = r6_1->byte_0;
                    if (r4_1 == 0) {
                        r1_2 = r12 + (r0 << 1);
                        *gptr<u16>(r1_2) = u16(r7);
                        guest::cpu()->r[1] = r1_2;
                        return r0;
                    }
                    if ((r4_1 & 0x80u) != 0) {  // (from the original)
                        if ((r4_1 & 0xe0u) == 0xc0u) {  // (from the original)
                            u32 r6_2 = r6_1->byte_1;
                            if (r6_2 == 0) {
                                r1_2 = r12 + (r0 << 1);
                                *gptr<u16>(r1_2) = u16(r7);
                                guest::cpu()->r[1] = r1_2;
                                return r0;
                            }
                            r4_2 = r6_2 & 0x3fu | (r4_1 & 0x1fu) << 6;  // (from the original)
                            r6_3 = r12 + (r0 << 1);
                            r5 += 2u;
                            goto L_53eed0;
                        }
                        if ((r4_1 & 0xf0u) == 0xe0u) {  // (from the original)
                            u32 r8_1 = r6_1->byte_1;
                            u32 zf_1 = r8_1 == 0;
                            if (!zf_1) {
                                r6_1 = gptr<Local_0053edf4_r6_1>(u32(r6_1->byte_2));
                                zf_1 = r6_1.addr() == 0;
                            }
                            if (zf_1) {
                                r1_2 = r12 + (r0 << 1);
                                *gptr<u16>(r1_2) = u16(r7);
                                guest::cpu()->r[1] = r1_2;
                                return r0;
                            }
                            r6_3 = r12 + (r0 << 1);
                            r4_2 = (r6_1.addr() & 0x3fu) | (r4_1 << 0xc) | (r8_1 & 0x3fu) << 6;  // (from the original)
                            r5 += 3u;
                            goto L_53eed0;
                        }
                        r1_2 = r12 + (r0 << 1);
                        *gptr<u16>(r1_2) = u16(r7);
                        guest::cpu()->r[1] = r1_2;
                        return r0;
                    }
                    r5 += 1u;
                    *gptr<u16>(r12 + (r0 << 1)) = u16(r4_1);
                    goto L_53eed4;
L_53eed0:;
                    *gptr<u16>(r6_3) = u16(r4_2);
L_53eed4:;
                    r0 += 1u;
                    guest::preempt();
                } while (r0 < r1);
            }
            u32 r1_1 = r12 + (r0 << 1);
            *gptr<u16>(r1_1 - 2u) = u16(r7);
            guest::cpu()->r[1] = r1_1;
            return r0 - 1u;
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_0053edf4
GUEST_EXPORT_FRAMED(0x0053edf4, d_0053edf4::utf16_to_utf8_2, 0x3f0);  // pushes {r4, r5, r6, r7, r8, r9} first, as the original

// f_0053f59c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Writes the GPU commands of the shared part at 0xaf52e8.
namespace d_0053f59c {

inline constexpr u32 global_00af52e8_address = 0x00af52e8u;
inline constexpr guest::Function<0x001210d4, u32(u32, u32, u32, u32)> write_gpu_part_commands;

void write_gpu_part_commands_af52e8() {
    write_gpu_part_commands(global_00af52e8_address, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0053f59c
GUEST_EXPORT(0x0053f59c, d_0053f59c::write_gpu_part_commands_af52e8);

// f_0053f608: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053f608 {

inline constexpr u32 vtable_sead__TextWriter = 0x00903ea0u;
inline constexpr u32 text_writer_a_address = 0x00981d70u;
inline constexpr u32 text_writer_b_address = 0x00981eb8u;
inline guest::global<u32, 0x0053f69c> global_0053f69c;
inline guest::global<u32, 0x00981d70> text_writer_a;
inline guest::global<u32, 0x00981eb8> text_writer_b;

void sead__TextWriter__TextWriter(gptr<sead__TextWriter> text_writer) {
    text_writer->word_4 = 0;
    text_writer->vtable = vtable_sead__TextWriter;
    text_writer->word_8 = 0;
    text_writer->word_c = 0;
    u32 r2_1 = *text_writer_a;
    float S1_1 = 0.0f;
    float S0_1 = 1.0f;
    if (r2_1 == 0) {
        r2_1 = *text_writer_b;
    }
    text_writer->word_10 = r2_1;
    text_writer->float_14 = S1_1;
    text_writer->float_18 = S1_1;
    text_writer->float_1c = S0_1;
    text_writer->float_20 = S0_1;
    text_writer->float_24 = S0_1;
    text_writer->float_28 = S0_1;
    text_writer->float_2c = S0_1;
    text_writer->float_30 = S0_1;
    text_writer->float_34 = S1_1;
    float S0_2 = std::bit_cast<float>(*global_0053f69c);
    text_writer->float_38 = S1_1;
    text_writer->word_3c = 0;
    text_writer->float_40 = S0_2;
    text_writer->word_44 = 0;
    text_writer->word_48 = 0;
    text_writer->byte_4c = 1;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_0053f608
GUEST_EXPORT(0x0053f608, d_0053f608::sead__TextWriter__TextWriter);

// f_0053f6c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The number of set bits of the word.
namespace d_0053f6c4 {


u32 popcount32_b(u32 r0) {
    u32 r0_1 = r0 - (0x55555555u & r0 >> 1);  // (from the original)
    u32 r0_3 = (0x33333333u & r0_1 >> 2) + (r0_1 & 0x33333333u);  // (from the original)
    u32 r0_4 = r0_3 + (r0_3 >> 4) & 0xf0f0f0fu;  // (from the original)
    u32 r0_5 = r0_4 + (r0_4 >> 8);
    guest::cpu()->r[1] = 0xf0f0f0fu;  // (from the original)
    return r0_5 + (r0_5 >> 0x10) & 0x3fu;  // (from the original)
}

}  // namespace d_0053f6c4
GUEST_EXPORT(0x0053f6c4, d_0053f6c4::popcount32_b);

// f_0053f730: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053f730 {

inline constexpr u32 vtable_sead__FrameBuffer = 0x00903edcu;
inline constexpr u32 current_frame_buffer_address = 0x00975320u;
inline guest::global<u32, 0x00975320> current_frame_buffer;

void sead__FrameBuffer__destructor(gptr<sead__FrameBuffer> frame_buffer) {
    frame_buffer->vtable = vtable_sead__FrameBuffer;
    if (frame_buffer.addr() == *current_frame_buffer) {
        *current_frame_buffer = 0;
    }
    guest::cpu()->r[1] = current_frame_buffer_address;
}

}  // namespace d_0053f730
GUEST_EXPORT(0x0053f730, d_0053f730::sead__FrameBuffer__destructor);

// f_0053fda8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the camera's center from the viewport's bounds and its look-at below it, then updates its view.
namespace d_0053fda8 {

struct __attribute__((packed)) Camera {
    u8 unknown_0[0x34];  // (not used here)
    float float_34;
    float float_38;
    u32 word_3c;
    float float_40;
    float float_44;
    float float_48;
    float float_4c;
    float float_50;
    float float_54;
};
GUEST_OFFSET(Camera, float_34, 0x34);
GUEST_OFFSET(Camera, float_38, 0x38);
GUEST_OFFSET(Camera, word_3c, 0x3c);
GUEST_OFFSET(Camera, float_40, 0x40);
GUEST_OFFSET(Camera, float_44, 0x44);
GUEST_OFFSET(Camera, float_48, 0x48);
GUEST_OFFSET(Camera, float_4c, 0x4c);
GUEST_OFFSET(Camera, float_50, 0x50);
GUEST_OFFSET(Camera, float_54, 0x54);

struct __attribute__((packed)) Object_0053fda8_1 {
    u8 unknown_0[0x94];  // (not used here)
    u32 word_94;
    u8 unknown_98[0x4];  // (not used here)
    float float_9c;
    float float_a0;
    float float_a4;
    float float_a8;
};
GUEST_OFFSET(Object_0053fda8_1, word_94, 0x94);
GUEST_OFFSET(Object_0053fda8_1, float_9c, 0x9c);
GUEST_OFFSET(Object_0053fda8_1, float_a0, 0xa0);
GUEST_OFFSET(Object_0053fda8_1, float_a4, 0xa4);
GUEST_OFFSET(Object_0053fda8_1, float_a8, 0xa8);

inline constexpr guest::Function<0x0014f4ec, u32(u32, u32)> Vec3__normalize;

void Camera__set_from_viewport(gptr<Camera> camera, gptr<Object_0053fda8_1> arg1) {
    float S2_1 = arg1->float_9c + arg1->float_a0;
    float S3_1 = 0.5f;
    float S1_1 = arg1->float_a4 + arg1->float_a8;
    camera->word_3c = arg1->word_94;
    camera->float_34 = S1_1 * S3_1;
    camera->float_38 = S2_1 * S3_1;
    float S2_2 = arg1->float_a4 + arg1->float_a8;
    float S1_2 = 1.0f;
    float S4_1 = arg1->float_9c + arg1->float_a0;
    camera->float_48 = std::bit_cast<float>(arg1->word_94) - S1_2;
    float S0_1 = 0.0f;
    camera->float_40 = S2_2 * S3_1;
    camera->float_44 = S4_1 * S3_1;
    camera->float_4c = S0_1;
    camera->float_50 = S1_2;
    camera->float_54 = S0_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_2;
    Vec3__normalize(camera.addr() + 0x4cu, arg1.addr());  // (from the original)
}

}  // namespace d_0053fda8
GUEST_EXPORT(0x0053fda8, d_0053fda8::Camera__set_from_viewport);
