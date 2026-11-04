// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen. Hexadecimal constants are the original's
// (addresses, offsets, sizes and ids as the game has them).
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_001b02c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a selection base: a catalog base with a content node and a button action control.
namespace d_001b02c0 {

struct __attribute__((packed)) Local_001b02c0_r0_2 {
    u32 vtable;
    u8 unknown_4[0x8];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Local_001b02c0_r0_2, vtable, 0x0);
GUEST_OFFSET(Local_001b02c0_r0_2, word_c, 0xc);

struct __attribute__((packed)) Local_001b02c0_r0_4 {
    u8 unknown_0[0x24];  // (not used here)
    u32 word_24;
    u8 unknown_28[0xabc];  // (not used here)
    u32 word_ae4;
    u32 word_ae8;
};
GUEST_OFFSET(Local_001b02c0_r0_4, word_24, 0x24);
GUEST_OFFSET(Local_001b02c0_r0_4, word_ae4, 0xae4);
GUEST_OFFSET(Local_001b02c0_r0_4, word_ae8, 0xae8);

inline constexpr u32 vtable_SelectBase = 0x008eb3f8u;
inline constexpr u32 vtable_ContentNode = 0x008ebb18u;
inline constexpr guest::Function<0x001324a8, u32(u32)> construct_list_node;
inline constexpr guest::Function<0x001c55b0, u32(u32)> CatalogBase__CatalogBase;
inline constexpr guest::Function<0x002f7604, u32(u32)> construct_button_action_control;

u32 SelectBase__SelectBase(u32 select_base) {
    u32 r0_1 = CatalogBase__CatalogBase(select_base);
    *gptr<u32>(r0_1) = vtable_SelectBase;
    gptr<Local_001b02c0_r0_2> r0_2 = gptr<Local_001b02c0_r0_2>(r0_1 + 0x9e0u);
    construct_list_node(r0_2.addr());
    r0_2->word_c = 0;
    r0_2->vtable = vtable_ContentNode;
    u32 ea_1 = r0_2.addr() + 0x1cu;
    *gptr<u32>(ea_1) = 0;
    u32 r0_3 = ea_1 + 4u;
    construct_button_action_control(r0_3);
    gptr<Local_001b02c0_r0_4> r0_4 = gptr<Local_001b02c0_r0_4>(r0_3 - 0xa00u);
    r0_4->word_24 = 0x1b0314;
    r0_4->word_ae8 = ~0u;
    r0_4->word_ae4 = 0;
    guest::cpu()->r[1] = 0x1b0314u;
    return r0_4.addr();
}

}  // namespace d_001b02c0
GUEST_EXPORT_FRAMED(0x001b02c0, d_001b02c0::SelectBase__SelectBase, 0x4010);  // pushes {r4, lr} first, as the original

// f_001b1010: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Loads the six static data tables; true when all loaded.
namespace d_001b1010 {

inline constexpr u32 static_table_c_address = 0x00ac3a14u;
inline constexpr u32 static_table_d_address = 0x00ac4e40u;
inline constexpr u32 static_table_e_address = 0x00ac8c6cu;
inline constexpr u32 static_table_f_address = 0x00acfa98u;
inline constexpr u32 static_table_a_address = 0x00acfdc4u;
inline constexpr u32 static_table_b_address = 0x00ad0ff0u;
inline constexpr guest::Function<0x001bc1fc, u32(u32)> sead__SafeStringBase_char___SafeStringBase_001bc1fc;
inline constexpr guest::Function<0x001bc684, u32(u32)> load_fobj_strc_data;
inline constexpr guest::Function<0x001bcbb8, u32(u32, u32, u32, u32)> BulletinBoard__load;
inline constexpr guest::Function<0x001bd6f0, u32(u32)> load_sobj_strc_data;
inline constexpr guest::Function<0x001bdedc, u32(u32)> load_fobj_sp_strc_data;
inline constexpr guest::Function<0x001be284, u32(u32)> sead__FixedSafeString_80___FixedSafeString;

u32 load_static_tables() {
    u32 r0_1 = BulletinBoard__load(static_table_c_address, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r4_1 = r0_1 & load_sobj_strc_data(static_table_d_address);
    u32 r4_2 = r4_1 & load_fobj_strc_data(static_table_e_address);
    u32 r4_3 = r4_2 & load_fobj_sp_strc_data(static_table_f_address);
    u32 r4_4 = r4_3 & sead__FixedSafeString_80___FixedSafeString(static_table_a_address);
    return sead__SafeStringBase_char___SafeStringBase_001bc1fc(static_table_b_address) & r4_4;
}

}  // namespace d_001b1010
GUEST_EXPORT_FRAMED(0x001b1010, d_001b1010::load_static_tables, 0x4010);  // pushes {r4, lr} first, as the original

// f_001b1308: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Recreates the resource manager's heaps and releases what they held.
namespace d_001b1308 {

inline constexpr u32 vtable_sead__SafeStringBase_char__rec = 0x009047f8u;
inline constexpr u32 real_estate_heap_address = 0x00952c54u;
inline constexpr u32 static_table_c_address = 0x00ac3a14u;
inline constexpr u32 static_table_d_address = 0x00ac4e40u;
inline constexpr u32 static_table_e_address = 0x00ac8c6cu;
inline constexpr u32 static_table_f_address = 0x00acfa98u;
inline constexpr u32 static_table_a_address = 0x00acfdc4u;
inline constexpr u32 static_table_b_address = 0x00ad0ff0u;
inline constexpr guest::Function<0x00132478, u32(u32, u32, u32, u32)> clear_list;
inline constexpr guest::Function<0x00138744, u32(u32)> destroy_load_split_base_part;
inline constexpr guest::Function<0x0013f134, u32(u32, u32, u32, u32)> queue_append;
inline constexpr guest::Function<0x002f747c, u32(u32, u32, u32, u32)> ObjectOwner__release_object;
inline constexpr guest::Function<0x0031758c, u32(u32, u32, u32, u32)> HeapHolder__recreate;
inline constexpr guest::Function<0x005b19f8, u32(u32, u32, u32, u32)> WordAndFlag__clear;

struct __attribute__((packed)) RecreateResourceMgrHeapsFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u8 unknown_1c[0x8];  // (not read or written by name)
};
GUEST_OFFSET(RecreateResourceMgrHeapsFrame, word_0, 0x0);
GUEST_OFFSET(RecreateResourceMgrHeapsFrame, word_4, 0x4);
GUEST_OFFSET(RecreateResourceMgrHeapsFrame, word_8, 0x8);
GUEST_OFFSET(RecreateResourceMgrHeapsFrame, word_c, 0xc);
GUEST_OFFSET(RecreateResourceMgrHeapsFrame, word_10, 0x10);
GUEST_OFFSET(RecreateResourceMgrHeapsFrame, word_14, 0x14);
GUEST_OFFSET(RecreateResourceMgrHeapsFrame, word_18, 0x18);
GUEST_SIZE(RecreateResourceMgrHeapsFrame, 0x24);

u32 recreate_resource_mgr_heaps(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<RecreateResourceMgrHeapsFrame> frame;  // the original's stack frame
    u32 zf_2 = 0;
    u32 zf_4 = 0;
    u32 cf_1 = 0;
    u32 zf_7 = 0;
    u32 zf_9 = 0;
    u32 cf_2 = 0;
    u32 zf_12 = 0;
    u32 zf_14 = 0;
    u32 cf_3 = 0;
    u32 zf_17 = 0;
    u32 zf_19 = 0;
    u32 cf_4 = 0;
    u32 zf_22 = 0;
    u32 zf_24 = 0;
    u32 cf_5 = 0;
    u32 zf_27 = 0;
    u32 zf_29 = 0;
    u32 cf_6 = 0;
    u32 r10 = 0xc800u;
    u32 r5 = static_table_c_address;
    u32 r11 = real_estate_heap_address;
    u32 r4 = *gptr<u32>(r5 + 0x140cu);
    u32 r9 = *gptr<u32>(r11);
    if (r4 != 0) {
        do {
            WordAndFlag__clear(r4 + 0xcu, r1, r2, r3);
            destroy_load_split_base_part(r4 + 0x14u);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r4 = *gptr<u32>(r4 + 8u);
            zf_2 = r4 == 0;
            guest::preempt();
        } while (!zf_2);
    }
    r4 = *gptr<u32>(r5 + 0x1424u);
    if (r4 != 0) {
        do {
            WordAndFlag__clear(r4 + 0xcu, r1, r2, r3);
            destroy_load_split_base_part(r4 + 0x14u);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r4 = *gptr<u32>(r4 + 8u);
            zf_4 = r4 == 0;
            guest::preempt();
        } while (!zf_4);
    }
    clear_list((r5 + 0x1400u) + 8u, r1, r2, r3);
    u32 r0_7 = r5 + 0x1400u;
    u32 r6 = r0_7 + 0x14u;
    clear_list(r0_7 + 0x14u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    clear_list((r5 + 0x1000u) + 0x420u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    do {
        queue_append(r6, (r5 + (r4 << 8)) + 8u, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 += 1u;
        cf_1 = r4 >= 0x14u;
        guest::preempt();
    } while (!cf_1);
    ObjectOwner__release_object(r5, guest::cpu()->r[1], r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = vtable_sead__SafeStringBase_char__rec;
    u32 r7 = 0u;
    u32 r8 = 1u;
    if (r9 != 0) {
        frame->word_c = 0x88e3d4;
        frame->word_8 = r6;
        frame->word_4 = r7;
        frame->word_0 = r8;
        HeapHolder__recreate(r5, r10, r9, frame.at(8).addr());
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r5 = static_table_d_address;
    r9 = *gptr<u32>(r11);
    r10 = 0x26c00u;
    r4 = *gptr<u32>(r5 + 0x3e0cu);
    if (r4 != 0) {
        do {
            WordAndFlag__clear(r4 + 0xcu, r1, r2, r3);
            destroy_load_split_base_part(r4 + 0x14u);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r4 = *gptr<u32>(r4 + 8u);
            zf_7 = r4 == 0;
            guest::preempt();
        } while (!zf_7);
    }
    r4 = *gptr<u32>(r5 + 0x3e24u);
    if (r4 != 0) {
        do {
            WordAndFlag__clear(r4 + 0xcu, r1, r2, r3);
            destroy_load_split_base_part(r4 + 0x14u);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r4 = *gptr<u32>(r4 + 8u);
            zf_9 = r4 == 0;
            guest::preempt();
        } while (!zf_9);
    }
    clear_list((r5 + 0x3c00u) + 0x208u, r1, r2, r3);
    u32 r0_18 = r5 + 0x3c00u;
    frame->word_10 = r0_18 + 0x214u;
    clear_list(r0_18 + 0x214u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    clear_list((r5 + 0x3000u) + 0xe20u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    do {
        queue_append(frame->word_10, (r5 + (r4 << 8)) + 8u, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 += 1u;
        cf_2 = r4 >= 0x3eu;
        guest::preempt();
    } while (!cf_2);
    ObjectOwner__release_object(r5, guest::cpu()->r[1], r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r9 != 0) {
        frame->word_14 = 0x88e3d4;
        frame->word_10 = r6;
        frame->word_4 = r7;
        frame->word_0 = r8;
        HeapHolder__recreate(r5, r10, r9, frame.at(0x10).addr());
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r5 = static_table_e_address;
    r9 = *gptr<u32>(r11);
    r10 = 0x44c00u;
    r4 = *gptr<u32>(r5 + 0x6e0cu);
    if (r4 != 0) {
        do {
            WordAndFlag__clear(r4 + 0xcu, r1, r2, r3);
            destroy_load_split_base_part(r4 + 0x14u);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r4 = *gptr<u32>(r4 + 8u);
            zf_12 = r4 == 0;
            guest::preempt();
        } while (!zf_12);
    }
    r4 = *gptr<u32>(r5 + 0x6e24u);
    if (r4 != 0) {
        do {
            WordAndFlag__clear(r4 + 0xcu, r1, r2, r3);
            destroy_load_split_base_part(r4 + 0x14u);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r4 = *gptr<u32>(r4 + 8u);
            zf_14 = r4 == 0;
            guest::preempt();
        } while (!zf_14);
    }
    clear_list((r5 + 0x6c00u) + 0x208u, r1, r2, r3);
    u32 r0_30 = r5 + 0x6c00u;
    frame->word_8 = r0_30 + 0x214u;
    clear_list(r0_30 + 0x214u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    clear_list((r5 + 0x6000u) + 0xe20u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    do {
        queue_append(frame->word_8, (r5 + (r4 << 8)) + 8u, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 += 1u;
        cf_3 = r4 >= 0x6eu;
        guest::preempt();
    } while (!cf_3);
    ObjectOwner__release_object(r5, guest::cpu()->r[1], r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r9 != 0) {
        frame->word_c = 0x88e3d4;
        frame->word_8 = r6;
        frame->word_4 = r7;
        frame->word_0 = r8;
        HeapHolder__recreate(r5, r10, r9, frame.at(8).addr());
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r5 = static_table_f_address;
    r9 = *gptr<u32>(r11);
    r10 = 0x1e00u;
    r4 = *gptr<u32>(r5 + 0x30cu);
    if (r4 != 0) {
        do {
            WordAndFlag__clear(r4 + 0xcu, r1, r2, r3);
            destroy_load_split_base_part(r4 + 0x14u);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r4 = *gptr<u32>(r4 + 8u);
            zf_17 = r4 == 0;
            guest::preempt();
        } while (!zf_17);
    }
    r4 = *gptr<u32>(r5 + 0x324u);
    if (r4 != 0) {
        do {
            WordAndFlag__clear(r4 + 0xcu, r1, r2, r3);
            destroy_load_split_base_part(r4 + 0x14u);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r4 = *gptr<u32>(r4 + 8u);
            zf_19 = r4 == 0;
            guest::preempt();
        } while (!zf_19);
    }
    clear_list(r5 + 0x308u, r1, r2, r3);
    clear_list(r5 + 0x314u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    clear_list(r5 + 0x320u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    do {
        queue_append(r5 + 0x314u, (r5 + (r4 << 8)) + 8u, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 += 1u;
        cf_4 = r4 >= 3u;
        guest::preempt();
    } while (!cf_4);
    ObjectOwner__release_object(r5, guest::cpu()->r[1], r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r9 != 0) {
        frame->word_14 = 0x88e3d4;
        frame->word_10 = r6;
        frame->word_4 = r7;
        frame->word_0 = r8;
        HeapHolder__recreate(r5, r10, r9, frame.at(0x10).addr());
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r5 = static_table_a_address;
    r9 = *gptr<u32>(r11);
    r10 = r5 + 0x1000u;
    frame->word_18 = 0xbe00;
    r4 = *gptr<u32>(r10 + 0x20cu);
    if (r4 != 0) {
        do {
            WordAndFlag__clear(r4 + 0xcu, r1, r2, r3);
            destroy_load_split_base_part(r4 + 0x14u);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r4 = *gptr<u32>(r4 + 8u);
            zf_22 = r4 == 0;
            guest::preempt();
        } while (!zf_22);
    }
    r4 = *gptr<u32>(r10 + 0x224u);
    if (r4 != 0) {
        do {
            WordAndFlag__clear(r4 + 0xcu, r1, r2, r3);
            destroy_load_split_base_part(r4 + 0x14u);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r4 = *gptr<u32>(r4 + 8u);
            zf_24 = r4 == 0;
            guest::preempt();
        } while (!zf_24);
    }
    clear_list((r5 + 0x1000u) + 0x208u, r1, r2, r3);
    u32 r0_51 = r5 + 0x1000u;
    r10 = r0_51 + 0x214u;
    clear_list(r0_51 + 0x214u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    clear_list((r5 + 0x1000u) + 0x220u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    do {
        queue_append(r10, (r5 + (r4 << 8)) + 8u, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 += 1u;
        cf_5 = r4 >= 0x12u;
        guest::preempt();
    } while (!cf_5);
    ObjectOwner__release_object(r5, guest::cpu()->r[1], r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r9 != 0) {
        frame->word_4 = r7;
        u32 r1_31 = frame->word_18;
        frame->word_c = 0x88e3d4;
        frame->word_8 = r6;
        frame->word_0 = r8;
        HeapHolder__recreate(r5, r1_31, r9, frame.at(8).addr());
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r5 = static_table_b_address;
    r9 = *gptr<u32>(r11);
    r10 = 0x12200u;
    r4 = *gptr<u32>(r5 + 0x1f0cu);
    if (r4 != 0) {
        do {
            WordAndFlag__clear(r4 + 0xcu, r1, r2, r3);
            destroy_load_split_base_part(r4 + 0x14u);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r4 = *gptr<u32>(r4 + 8u);
            zf_27 = r4 == 0;
            guest::preempt();
        } while (!zf_27);
    }
    r4 = *gptr<u32>(r5 + 0x1f24u);
    if (r4 != 0) {
        do {
            WordAndFlag__clear(r4 + 0xcu, r1, r2, r3);
            destroy_load_split_base_part(r4 + 0x14u);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r4 = *gptr<u32>(r4 + 8u);
            zf_29 = r4 == 0;
            guest::preempt();
        } while (!zf_29);
    }
    clear_list((r5 + 0x1c00u) + 0x308u, r1, r2, r3);
    u32 r0_62 = r5 + 0x1c00u;
    r11 = r0_62 + 0x314u;
    clear_list(r0_62 + 0x314u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    clear_list((r5 + 0x1000u) + 0xf20u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    do {
        queue_append(r11, (r5 + (r4 << 8)) + 8u, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 += 1u;
        cf_6 = r4 >= 0x1fu;
        guest::preempt();
    } while (!cf_6);
    u32 r0_67 = ObjectOwner__release_object(r5, guest::cpu()->r[1], r2, r3);
    if (r9 != 0) {
        frame->word_c = 0x88e3d4;
        frame->word_8 = r6;
        frame->word_4 = r7;
        frame->word_0 = r8;
        r0_67 = HeapHolder__recreate(r5, r10, r9, frame.at(8).addr());
    }
    return r0_67;
}

}  // namespace d_001b1308
GUEST_EXPORT_FRAMED(0x001b1308, d_001b1308::recreate_resource_mgr_heaps, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_001b1900: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Takes the received letter (version 3, newer than the current one) when its checksum over 0x28c bytes matches and its
// letter is valid; true when taken.
namespace d_001b1900 {

struct __attribute__((packed)) ReceivedLetter {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(ReceivedLetter, word_4, 0x4);

struct __attribute__((packed)) ReceivedLetterAcceptArg1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(ReceivedLetterAcceptArg1, word_4, 0x4);
GUEST_OFFSET(ReceivedLetterAcceptArg1, word_8, 0x8);

inline constexpr guest::Function<0x00134544, u32(u32, u32, u32)> copy_bytes_small_sizes_first;
inline constexpr guest::Function<0x003193e8, u32(u32, u32, u32, u32)> crc32;
inline constexpr guest::Function<0x007586b4, u32(u32, u32)> Villager__describe_items;

u32 ReceivedLetter__accept(gptr<ReceivedLetter> received_letter, gptr<ReceivedLetterAcceptArg1> arg1) {
    u32 r0 = received_letter.addr();
    u32 r1 = arg1.addr();
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 villager = 0;
    u32 r0_4 = 0;
    u32 r4_1 = 0;
    u32 r6 = r0;
    u32 r5 = r1;
    u32 r4 = r1;
    if (arg1->word_4 == 3u) {
        if (received_letter->word_4 == 3u) {
            goto L_1b1988;
        }
        if (arg1->word_8 == 0) {
            guest::cpu()->r[1] = r1;
            return 0u;
        }
L_1b1934:;
        r3_1 = ~0u;
        r0_1 = r4 + 4u;
        r0_2 = crc32(r0_1, 0x28cu, r3_1, r3_1);
        r1 = *gptr<u32>(r4);
        if (r1 != r0_2) {
            guest::cpu()->r[1] = r1;
            return 0u;
        }
        villager = r4 + 0x10u;
        r0_4 = Villager__describe_items(villager, 0u);
        r1 = guest::cpu()->r[1];
        if (r0_4 == 0) {
            return 0u;
        } else {
            r4_1 = 1u;
        }
        copy_bytes_small_sizes_first(r6, r5, 0x290u);
        r1 = guest::cpu()->r[1];
        return r4_1;
L_1b1988:;
        r1 = *gptr<u32>(r4 + 8u);
        if (r1 > *gptr<u32>(r6 + 8u)) {
            guest::preempt();
            goto L_1b1934;
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_001b1900
GUEST_EXPORT_FRAMED(0x001b1900, d_001b1900::ReceivedLetter__accept, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001b19ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs an empty received letter record.
namespace d_001b19ac {

struct __attribute__((packed)) ReceivedLetter {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 byte_c;
    u16 half_d;
    u8 byte_f;
};
GUEST_OFFSET(ReceivedLetter, word_0, 0x0);
GUEST_OFFSET(ReceivedLetter, word_4, 0x4);
GUEST_OFFSET(ReceivedLetter, word_8, 0x8);
GUEST_OFFSET(ReceivedLetter, byte_c, 0xc);
GUEST_OFFSET(ReceivedLetter, half_d, 0xd);
GUEST_OFFSET(ReceivedLetter, byte_f, 0xf);

inline constexpr guest::Function<0x002ff368, u32(u32, u32, u32, u32)> Letter__Letter;

u32 ReceivedLetter__ReceivedLetter(gptr<ReceivedLetter> received_letter) {
    received_letter->word_0 = 0;
    received_letter->word_4 = 0;
    received_letter->word_8 = 0;
    received_letter->byte_c = 0;
    u32 letter = received_letter.addr() + 0x10u;
    Letter__Letter(letter, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    received_letter->half_d = 0;
    received_letter->byte_f = 0;
    return letter - 0x10u;
}

}  // namespace d_001b19ac
GUEST_EXPORT_FRAMED(0x001b19ac, d_001b19ac::ReceivedLetter__ReceivedLetter, 0x4010);  // pushes {r4, lr} first, as the original

// f_001b19dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Adds to the progress; in states 1 and 2 it moves to state 2 once the goal (+4) is reached.
namespace d_001b19dc {

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


void Progress__add(gptr<Progress> progress, u32 r1) {
    u32 r2_1 = progress->word_8 + r1;
    progress->word_8 = r2_1;
    u32 r1_1 = progress->byte_2;
    if (r1_1 != 2u && r1_1 != 1u) {
        guest::cpu()->r[1] = r1_1;
        return;
    }
    u32 r1_2 = progress->word_4;
    if (r1_2 == 0 || r2_1 == 0) {
        guest::cpu()->r[1] = r1_2;
        return;
    }
    if (r1_2 <= r2_1) {
        r1_2 = 2u;
        progress->byte_2 = u8(r1_2);
    }
    guest::cpu()->r[1] = r1_2;
}

}  // namespace d_001b19dc
GUEST_EXPORT(0x001b19dc, d_001b19dc::Progress__add);

// f_001b1a18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Moves a reached progress (state 2) to finished (state 4).
namespace d_001b1a18 {

struct __attribute__((packed)) Progress {
    u8 unknown_0[0x2];  // (not used here)
    u8 byte_2;
};
GUEST_OFFSET(Progress, byte_2, 0x2);


void Progress__finish(gptr<Progress> progress) {
    u32 r1_1 = progress->byte_2;
    if (r1_1 == 2u) {
        r1_1 = 4u;
        progress->byte_2 = u8(r1_1);
    }
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_001b1a18
GUEST_EXPORT(0x001b1a18, d_001b1a18::Progress__finish);

// f_001b1a2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the first two bytes.
namespace d_001b1a2c {

struct __attribute__((packed)) SetTwoBytesArg0 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(SetTwoBytesArg0, byte_0, 0x0);
GUEST_OFFSET(SetTwoBytesArg0, byte_1, 0x1);


void set_two_bytes(gptr<SetTwoBytesArg0> arg0, u32 r1, u32 r2) {
    arg0->byte_0 = u8(r1);
    arg0->byte_1 = u8(r2);
}

}  // namespace d_001b1a2c
GUEST_EXPORT(0x001b1a2c, d_001b1a2c::set_two_bytes);

// f_001b1a44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Zeroes the progress record and its number pair.
namespace d_001b1a44 {

struct __attribute__((packed)) Progress {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 unknown_3[0x1];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Progress, byte_0, 0x0);
GUEST_OFFSET(Progress, byte_1, 0x1);
GUEST_OFFSET(Progress, byte_2, 0x2);
GUEST_OFFSET(Progress, word_4, 0x4);
GUEST_OFFSET(Progress, word_8, 0x8);

inline constexpr guest::Function<0x0024ea1c, u32(u32)> clear_number_pair;

u32 Progress__Progress(gptr<Progress> progress) {
    progress->byte_0 = 0;
    progress->byte_1 = 0;
    progress->byte_2 = 0;
    progress->word_4 = 0;
    progress->word_8 = 0;
    clear_number_pair(progress.addr() + 0xcu);
    return progress.addr();
}

}  // namespace d_001b1a44
GUEST_EXPORT_FRAMED(0x001b1a44, d_001b1a44::Progress__Progress, 0x4010);  // pushes {r4, lr} first, as the original

// f_001b1b40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies three bytes.
namespace d_001b1b40 {

struct __attribute__((packed)) Copy3BytesArg0 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Copy3BytesArg0, byte_0, 0x0);
GUEST_OFFSET(Copy3BytesArg0, byte_1, 0x1);
GUEST_OFFSET(Copy3BytesArg0, byte_2, 0x2);

struct __attribute__((packed)) Copy3BytesArg1 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Copy3BytesArg1, byte_0, 0x0);
GUEST_OFFSET(Copy3BytesArg1, byte_1, 0x1);
GUEST_OFFSET(Copy3BytesArg1, byte_2, 0x2);


void copy_3_bytes(gptr<Copy3BytesArg0> dst, gptr<Copy3BytesArg1> src) {
    dst->byte_0 = src->byte_0;
    dst->byte_1 = src->byte_1;
    u32 r1_1 = src->byte_2;
    dst->byte_2 = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_001b1b40
GUEST_EXPORT(0x001b1b40, d_001b1b40::copy_3_bytes);

// f_001b1bf8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Puts the remembered item back in the field (or clears the tile).
namespace d_001b1bf8 {

struct __attribute__((packed)) Local_001b1bf8_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_001b1bf8_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_001b1bf8_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_001b1bf8_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_001b1bf8_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_001b1bf8_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_001b1bf8_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_001b1bf8_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_001b1bf8_ea_1, word_1c, 0x1c);

struct __attribute__((packed)) Local_001b1bf8_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_001b1bf8_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_001b1bf8_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_001b1bf8_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_001b1bf8_ea_2, word_c, 0xc);
GUEST_OFFSET(Local_001b1bf8_ea_2, word_10, 0x10);
GUEST_OFFSET(Local_001b1bf8_ea_2, word_14, 0x14);
GUEST_OFFSET(Local_001b1bf8_ea_2, word_18, 0x18);
GUEST_OFFSET(Local_001b1bf8_ea_2, word_1c, 0x1c);

struct __attribute__((packed)) Local_001b1bf8_ea_3 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_001b1bf8_ea_3, word_4, 0x4);
GUEST_OFFSET(Local_001b1bf8_ea_3, word_8, 0x8);
GUEST_OFFSET(Local_001b1bf8_ea_3, word_c, 0xc);
GUEST_OFFSET(Local_001b1bf8_ea_3, word_10, 0x10);
GUEST_OFFSET(Local_001b1bf8_ea_3, word_14, 0x14);
GUEST_OFFSET(Local_001b1bf8_ea_3, word_18, 0x18);
GUEST_OFFSET(Local_001b1bf8_ea_3, word_1c, 0x1c);

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> Item__copy;
inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> GridMap__place_item_at_world;
inline constexpr guest::Function<0x0059e65c, u32(u32, u32, u32, u32)> clear_field_tile;
inline constexpr guest::Function<0x006a5e34, u32(u32)> get_map_table;

struct __attribute__((packed)) RestoreFieldItemFrame {
    u32 word_0;
    u8 unknown_4[0x1c];  // (not read or written by name)
};
GUEST_OFFSET(RestoreFieldItemFrame, word_0, 0x0);
GUEST_SIZE(RestoreFieldItemFrame, 0x20);

u32 restore_field_item(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<RestoreFieldItemFrame> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r14 = guest::cpu()->r[14];
    if (s32(r1) < 0 || r1 >= 0x10u) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    gptr<Local_001b1bf8_ea_1> ea_1 = gptr<Local_001b1bf8_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r3;
    ea_1->word_4 = r4;
    ea_1->word_8 = r5;
    ea_1->word_c = r6;
    ea_1->word_10 = r7;
    ea_1->word_14 = r8;
    ea_1->word_18 = r9;
    ea_1->word_1c = r14;
    Item__copy(r0 + (r1 << 2), empty_item_address, r2, r3);
    u32 r0_2 = r0 + r1;
    *gptr<u8>(r0_2 + 0x40u) = 0;
    u32 map_table = get_map_table(r0_2);
    if (map_table != 0) {
        frame->word_0 = 0;
        GridMap__place_item_at_world(map_table, empty_item_address, r2, r3);
        gptr<Local_001b1bf8_ea_2> ea_2 = gptr<Local_001b1bf8_ea_2>(frame.at(0).addr());
        u32 r3_2 = ea_2->word_0;
        u32 r4_1 = ea_2->word_4;
        u32 r5_1 = ea_2->word_8;
        u32 r6_1 = ea_2->word_c;
        u32 r7_1 = ea_2->word_10;
        u32 r8_1 = ea_2->word_14;
        u32 r9_1 = ea_2->word_18;
        r14 = ea_2->word_1c;
        guest::cpu()->r[4] = r4_1;
        guest::cpu()->r[5] = r5_1;
        guest::cpu()->r[6] = r6_1;
        guest::cpu()->r[7] = r7_1;
        guest::cpu()->r[8] = r8_1;
        guest::cpu()->r[9] = r9_1;
        frame.release();
        return clear_field_tile(r2, r3, 1u, r3_2);
    }
    gptr<Local_001b1bf8_ea_3> ea_3 = gptr<Local_001b1bf8_ea_3>(frame.at(0).addr());
    u32 r4_2 = ea_3->word_4;
    u32 r5_2 = ea_3->word_8;
    u32 r6_2 = ea_3->word_c;
    u32 r7_2 = ea_3->word_10;
    u32 r8_2 = ea_3->word_14;
    u32 r9_2 = ea_3->word_18;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[8] = r8_2;
    guest::cpu()->r[9] = r9_2;
    return map_table;
}

}  // namespace d_001b1bf8
GUEST_EXPORT(0x001b1bf8, d_001b1bf8::restore_field_item);

// f_001b1c70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Adds the items of the set to the slots, closing gaps first.
namespace d_001b1c70 {

inline constexpr guest::Function<0x001b1b5c, u32(u32, u32, u32, u32)> Pockets__close_gaps;
inline constexpr guest::Function<0x001b21f4, u32(u32, u32, u32, u32)> ItemSlots16__set;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;
inline constexpr guest::Function<0x002fc288, u32(u32, u32, u32, u32)> ItemBitSet__clear_and_return;
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> Item__is_empty;
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> Item__category;
inline constexpr guest::Function<0x002fe9c8, u32(u32, u32, u32, u32)> ItemSet__add_group_without_flags;
inline constexpr guest::Function<0x003004c4, u32(u32, u32, u32)> pick_distinct_items;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;

void Pockets__add_item_set(u32 pockets, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x2f8);  // the original's stack frame
    u32 j = 0u;
    u32 item_slots16 = pockets;
    u32 i = j;
    do {
        u32 is_empty = Item__is_empty(item_slots16 + (i << 2), r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (is_empty == 0) {
            j += 1u;
        }
        i += 1u;
        guest::preempt();
    } while (i < 0x10u);
    ItemBitSet__clear_and_return(frame.at(0).addr(), r1, r2, r3);
    ItemSet__add_group_without_flags(frame.at(0).addr(), 5u, 5u, 0u);
    for_each_element(frame.at(0x2e8).addr(), 0x2fc20cu, 4u, 3u);
    pick_distinct_items(frame.at(0x2e8).addr(), 3u, frame.at(0).addr());
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 r7 = 0u;
    if (s32(j) < 3) {
        u32 r10 = frame.at(0x2e8).addr();
        do {
            u32 r8 = r10 + (r7 << 2);
            u32 r9 = 0u;
            u32 category = Item__category(r8, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (category != 0x95u) {
                Pockets__close_gaps(item_slots16, r1, r2, r3);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                i = 0u;
                do {
                    u32 is_empty_2 = Item__is_empty(item_slots16 + (i << 2), r1, r2, r3);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    if (is_empty_2 != 0) {
                        ItemSlots16__set(item_slots16, i, r8, r9);
                        r1 = guest::cpu()->r[1];
                        r2 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
                        break;
                    }
                    i += 1u;
                    guest::preempt();
                } while (i < 0x10u);
            }
            j += 1u;
            r7 += 1u;
            guest::preempt();
        } while (s32(j) < 3);
    }
    destroy_array_elements(frame.at(0x2e8).addr(), 0x2f777cu, 4u, 3u);
}

}  // namespace d_001b1c70
GUEST_EXPORT_FRAMED(0x001b1c70, d_001b1c70::Pockets__add_item_set, 0x47f0);  // pushes {i, item_slots16, j, r7, r8, r9, r10, lr} first, as the original

// f_001b2114: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores the item in the first empty of the 16 slots (closing gaps first); true for kind 0x95 items, false when full.
namespace d_001b2114 {

inline constexpr guest::Function<0x001b1b5c, u32(u32, u32)> Pockets__close_gaps;
inline constexpr guest::Function<0x001b21f4, u32(u32, u32, u32, u32)> ItemSlots16__set;
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> Item__is_empty;
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> Item__category;

u32 ItemSlots16__store(u32 item_slots16, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r0_2 = 0;
    u32 r5 = item_slots16;
    u32 r7 = r2;
    u32 r6 = r1;
    u32 category = Item__category(r1, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (category == 0x95u) {
        r0_2 = 1u;
    } else {
        Pockets__close_gaps(r5, r1);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        u32 i = 0u;
        do {
            u32 is_empty = Item__is_empty(r5 + (i << 2), r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (is_empty != 0) {
                frame.release();
                return ItemSlots16__set(r5, i, r6, r7);
            }
            i += 1u;
            guest::preempt();
        } while (i < 0x10u);
        r0_2 = 0u;
    }
    guest::cpu()->r[1] = r1;
    return r0_2;
}

}  // namespace d_001b2114
GUEST_EXPORT(0x001b2114, d_001b2114::ItemSlots16__store);

// f_001b21f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Puts the item in slot `index` with its flags, by its category (bell bags and kind-2 items are special).
namespace d_001b21f4 {

struct __attribute__((packed)) Local_001b21f4_r5_1 {
    u8 unknown_0[0x40];  // (not used here)
    u8 byte_40;
};
GUEST_OFFSET(Local_001b21f4_r5_1, byte_40, 0x40);

inline constexpr guest::Function<0x002fae84, u32(u32)> get_data_base;
inline constexpr guest::Function<0x002fb310, u32(u32)> slot_records_of;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> Item__copy_b;
inline constexpr guest::Function<0x002fcb34, u32(u32)> Item__category;
inline constexpr guest::Function<0x002fcb9c, u32(u32)> item_flags_bit_15;
inline constexpr guest::Function<0x002fe53c, u32(u32)> Item__is_bell_bag;
inline constexpr guest::Function<0x0030c578, u32(u32, u32)> reset_record_kind_21;
inline constexpr guest::Function<0x006b9914, u32(u32)> clear_half_bits_6b9914;
inline constexpr guest::Function<0x006b9924, u32(u32)> clear_half_bits_6b9924;
inline constexpr guest::Function<0x006b9c98, u32(u32, u32)> pick_matching_item_of_group_e;
inline constexpr guest::Function<0x00768174, u32(u32)> Item__is_kind_2;
inline constexpr guest::Function<0x00768cc8, u32(u32)> item_category_flag_bit_4;

u32 ItemSlots16__set(u32 item_slots16, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    gptr<Local_001b21f4_r5_1> r5_1 = gptr<Local_001b21f4_r5_1>(0u);
    u32 r6_1 = 0;
    u32 r0_14 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    Item__copy_b(frame.at(0).addr(), r2, r2, r3);
    if (Item__is_bell_bag(frame.at(0).addr()) != 0) {
        clear_half_bits_6b9914(frame.at(0).addr());
    }
    u32 category = Item__category(r2);
    if (category != 0x4eu) {
        if (r1 >= 0x10u) {
            return 0u;
        }
        u32 r0_6 = Item__is_kind_2(r2);
        r5_1 = gptr<Local_001b21f4_r5_1>(item_slots16 + r1);
        r6_1 = item_slots16 + (r1 << 2);
        if (r0_6 == 0) {
            if (item_category_flag_bit_4(r2) != 0) {
                Item__copy_b(frame.at(4).addr(), frame.at(0).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
                u32 category_2 = Item__category(frame.at(4).addr());
                u32 r0_11 = frame.at(4).addr();
                if (category_2 != 0x2bu) {
                    clear_half_bits_6b9924(r0_11);
                    if (category_2 == 0x27u || category_2 == 0x24u) {
                        goto L_1b2324;
                    }
                    if (category_2 == 0x3fu) {
                        pick_matching_item_of_group_e(frame.at(8).addr(), frame.at(4).addr());
                        Item__copy(frame.at(4).addr(), frame.at(8).addr());
                        goto L_1b2378;
                    }
                    goto L_1b2378;
                }
                r0_14 = item_flags_bit_15(r0_11);
                if (r0_14 == 0) {
                    clear_half_bits_6b9924(frame.at(4).addr());
                    goto L_1b2378;
                }
L_1b2324:;
            }
            return 0u;
        }
        Item__copy(r6_1, frame.at(0).addr());
        clear_half_bits_6b9924(r6_1);
        r5_1->byte_40 = u8(r3);
        return 1u;
    }
    r0_16 = get_data_base(category);
    r0_17 = slot_records_of(r0_16);
    r0_18 = r0_17 + 0x1764eu;
    reset_record_kind_21(r0_18, 0x1764au);
    return 0u;
L_1b2378:;
    Item__copy(r6_1, frame.at(4).addr());
    r5_1->byte_40 = u8(r3);
    return 1u;
}

}  // namespace d_001b21f4
GUEST_EXPORT_FRAMED(0x001b21f4, d_001b21f4::ItemSlots16__set, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_001b23ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs the 16 item slots, all empty.
namespace d_001b23ac {

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> Item__copy;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;

u32 ItemSlots16__ItemSlots16(u32 item_slots16) {
    u32 r0_1 = for_each_element(item_slots16, 0x2fc20cu, 4u, 0x10u);
    u32 r2 = guest::cpu()->r[2];
    u32 r3 = guest::cpu()->r[3];
    u32 r5 = r0_1;
    u32 i = 0u;
    do {
        Item__copy(r5 + (i << 2), empty_item_address, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        i += 1u;
        guest::preempt();
    } while (i < 0x10u);
    return r5;
}

}  // namespace d_001b23ac
GUEST_EXPORT_FRAMED(0x001b23ac, d_001b23ac::ItemSlots16__ItemSlots16, 0x4070);  // pushes {i, r5, r6, lr} first, as the original

// f_001b23f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b23f0 {

struct __attribute__((packed)) script__WordFix_9u_ {
    u8 unknown_0[0xc6];  // (not used here)
    u8 byte_c6;
    u8 byte_c7;
};
GUEST_OFFSET(script__WordFix_9u_, byte_c6, 0xc6);
GUEST_OFFSET(script__WordFix_9u_, byte_c7, 0xc7);

inline constexpr u32 vtable_script__WordFix_9u__rec = 0x0090a3e8u;
inline constexpr guest::Function<0x0022d74c, u32(u32, u32, u32, u32)> LetterWriter__write_from_template;
inline constexpr guest::Function<0x0022e048, u32(u32)> MessageStore__start_board_b;
inline constexpr guest::Function<0x0022e05c, u32(u32)> MessageStore__start_message_b;
inline constexpr guest::Function<0x0022e070, u32(u32)> MessageStore__is_open_b;
inline constexpr guest::Function<0x0022e08c, u32(u32, u32, u32, u32)> MailLoadAdapt__MailLoadAdapt;
inline constexpr guest::Function<0x0022e138, u32(u32)> MailLoadAdapt__destructor;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32)> copy_bytes_at_any_alignment;
inline constexpr guest::Function<0x002fb94c, u32(u32)> get_current_player;
inline constexpr guest::Function<0x002fc20c, u32(u32)> construct_empty_item;
inline constexpr guest::Function<0x002ff408, u32(u32)> Letter__clear;
inline constexpr guest::Function<0x00300a64, u32(u32, u32, u32)> Object__virtual_34;
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32)> script__construct_word_ptr;
inline constexpr guest::Function<0x0056d374, u32(u32, u32, u32, u32)> TextBox__set_player_name;
inline constexpr guest::Function<0x005f4bfc, u32(u32)> construct_script_word;

struct __attribute__((packed)) WriteSpecialFirstMailFrame {
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
    u8 byte_38;
    u8 unknown_39[0x3];  // (not read or written by name)
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
    u8 byte_6c;
    u8 unknown_6d[0x209];  // (not read or written by name)
    u8 byte_276;
    u8 unknown_277[0x149];  // (not read or written by name)
    u32 word_3c0;
    u8 unknown_3c4[0x28];  // (not read or written by name)
};
GUEST_OFFSET(WriteSpecialFirstMailFrame, word_0, 0x0);
GUEST_OFFSET(WriteSpecialFirstMailFrame, word_4, 0x4);
GUEST_OFFSET(WriteSpecialFirstMailFrame, word_8, 0x8);
GUEST_OFFSET(WriteSpecialFirstMailFrame, word_c, 0xc);
GUEST_OFFSET(WriteSpecialFirstMailFrame, word_10, 0x10);
GUEST_OFFSET(WriteSpecialFirstMailFrame, word_14, 0x14);
GUEST_OFFSET(WriteSpecialFirstMailFrame, word_18, 0x18);
GUEST_OFFSET(WriteSpecialFirstMailFrame, word_1c, 0x1c);
GUEST_OFFSET(WriteSpecialFirstMailFrame, word_20, 0x20);
GUEST_OFFSET(WriteSpecialFirstMailFrame, word_24, 0x24);
GUEST_OFFSET(WriteSpecialFirstMailFrame, word_28, 0x28);
GUEST_OFFSET(WriteSpecialFirstMailFrame, word_2c, 0x2c);
GUEST_OFFSET(WriteSpecialFirstMailFrame, word_30, 0x30);
GUEST_OFFSET(WriteSpecialFirstMailFrame, word_34, 0x34);
GUEST_OFFSET(WriteSpecialFirstMailFrame, byte_38, 0x38);
GUEST_OFFSET(WriteSpecialFirstMailFrame, word_3c, 0x3c);
GUEST_OFFSET(WriteSpecialFirstMailFrame, word_40, 0x40);
GUEST_OFFSET(WriteSpecialFirstMailFrame, word_44, 0x44);
GUEST_OFFSET(WriteSpecialFirstMailFrame, word_48, 0x48);
GUEST_OFFSET(WriteSpecialFirstMailFrame, word_4c, 0x4c);
GUEST_OFFSET(WriteSpecialFirstMailFrame, word_50, 0x50);
GUEST_OFFSET(WriteSpecialFirstMailFrame, word_54, 0x54);
GUEST_OFFSET(WriteSpecialFirstMailFrame, word_58, 0x58);
GUEST_OFFSET(WriteSpecialFirstMailFrame, word_5c, 0x5c);
GUEST_OFFSET(WriteSpecialFirstMailFrame, word_60, 0x60);
GUEST_OFFSET(WriteSpecialFirstMailFrame, word_64, 0x64);
GUEST_OFFSET(WriteSpecialFirstMailFrame, word_68, 0x68);
GUEST_OFFSET(WriteSpecialFirstMailFrame, byte_6c, 0x6c);
GUEST_OFFSET(WriteSpecialFirstMailFrame, byte_276, 0x276);
GUEST_OFFSET(WriteSpecialFirstMailFrame, word_3c0, 0x3c0);
GUEST_SIZE(WriteSpecialFirstMailFrame, 0x3ec);

void write_special_first_mail(gptr<script__WordFix_9u_> word_fix_9u, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<WriteSpecialFirstMailFrame> frame;  // the original's stack frame
    u32 r0 = word_fix_9u.addr();
    u32 res_1 = 0;
    u32 r3_8 = 0;
    u32 r0_7 = 0;
    u32 r0_11 = 0;
    u32 r7 = 0u;
    u32 r4 = r0;
    u32 r9 = frame.at(0x288).addr();
    word_fix_9u->byte_c7 = u8(r7);
    word_fix_9u->byte_c6 = u8(r7);
    MailLoadAdapt__MailLoadAdapt(r9, r1, r2, r3);
    frame->word_8 = r7;
    frame->word_c = r7;
    frame->word_10 = r7;
    frame->word_14 = r7;
    frame->word_18 = r7;
    frame->word_1c = r7;
    frame->word_20 = r7;
    frame->word_24 = r7;
    frame->word_28 = r7;
    frame->word_2c = r7;
    frame->word_30 = r7;
    frame->word_34 = r7;
    frame->byte_38 = u8(r7);
    frame->word_3c = r7;
    frame->word_40 = r7;
    frame->word_44 = r7;
    u32 letter = frame.at(8).addr();
    frame->word_48 = r7;
    frame->word_4c = r7;
    frame->word_50 = r7;
    frame->word_54 = r7;
    frame->word_58 = r7;
    u32 r0_1 = letter + 0x274u;
    frame->word_5c = r7;
    frame->word_60 = r7;
    frame->word_64 = r7;
    frame->word_68 = r7;
    frame->byte_6c = u8(r7);
    construct_empty_item(r0_1);
    Letter__clear(r0_1 - 0x274u);
    MessageStore__start_message_b(r9);
    u32 r8 = frame.at(0x3c0).addr();
    u32 r11 = 4u;
    script__construct_word_ptr(r8, frame.at(0x3d8).addr(), 9u);
    u32 r6 = vtable_script__WordFix_9u__rec;
    *gptr<u32>(r8) = r6;
    u32 r0_3 = r8 + 0xcu;
    construct_script_word(r0_3);
    u32 r5 = r0_3 - 0xcu;
    clear_aligned(r0_3 + 0xcu, 0x12u);
    r1 = 0x8906ecu;
    r0 = r5 + 0x18u;
    *gptr<u16>(r5 + 0x18u) = *gptr<u16>(r1);
    r2 = 4u;
    do {
        u32 r3_7 = *gptr<u16>(r1);
        res_1 = r2 - 1u;
        r2 = res_1;
        *gptr<u16>(r0 + 2u) = u16(r3_7);
        r3_8 = *gptr<u16>(r1);
        u32 ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r3_8);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    TextBox__set_player_name(r5, r11, r2, r3_8);
    Object__virtual_34(MessageStore__is_open_b(r9), r8, 0u);
    frame->word_3c0 = r6;
    frame->word_0 = r7;
    frame->word_4 = r7;
    LetterWriter__write_from_template(r9, letter, 0x88e890u, 3u);
    copy_bytes_at_any_alignment(r4 + 0x84u, letter + 0x22cu, 0x42u);
    if (frame->byte_38 == 6u) {
        r0_7 = r4 + 0x42u;
        *gptr<u8>(r4 + 0xc7u) = frame->byte_276;
    } else {
        *gptr<u8>(r4 + 0xc6u) = frame->byte_276;
        r0_7 = r4;
    }
    u32 player = get_current_player(copy_bytes_at_any_alignment(r0_7, letter + 0x68u, 0x42u));
    u32 r1_10 = 0u;
    if (player != 0) {
        r1_10 = player + 0x55a6u;
    }
    frame->word_0 = 1;
    frame->word_4 = r1_10;
    LetterWriter__write_from_template(r9, letter, 0x88e890u, 4u);
    copy_bytes_at_any_alignment(r4 + 0x84u, letter + 0x22cu, 0x42u);
    u32 r1_12 = frame->byte_276;
    if (frame->byte_38 == 6u) {
        *gptr<u8>(r4 + 0xc7u) = u8(r1_12);
        r0_11 = r4 + 0x42u;
    } else {
        *gptr<u8>(r4 + 0xc6u) = u8(r1_12);
        r0_11 = r4;
    }
    copy_bytes_at_any_alignment(r0_11, letter + 0x68u, 0x42u);
    MessageStore__start_board_b(r0_11);
    MailLoadAdapt__destructor(r9);
}

}  // namespace d_001b23f0
GUEST_EXPORT_FRAMED(0x001b23f0, d_001b23f0::write_special_first_mail, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, letter, r11, lr} first, as the original

// f_001b264c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Zeroes the 200-byte record with its two last bytes at 0xff.
namespace d_001b264c {

struct __attribute__((packed)) Record200 {
    u8 unknown_0[0xc6];  // (not used here)
    u8 byte_c6;
    u8 byte_c7;
};
GUEST_OFFSET(Record200, byte_c6, 0xc6);
GUEST_OFFSET(Record200, byte_c7, 0xc7);

inline constexpr guest::Function<0x00301444, u32(u32, u32)> clear;

void Record200__clear(gptr<Record200> record200) {
    clear(record200.addr(), 0xc8u);
    record200->byte_c7 = 0xff;
    record200->byte_c6 = 0xff;
}

}  // namespace d_001b264c
GUEST_EXPORT_FRAMED(0x001b264c, d_001b264c::Record200__clear, 0x4010);  // pushes {r4, lr} first, as the original

// f_001b266c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Zeroes the 200-byte record with its two last bytes at 0xff.
namespace d_001b266c {

struct __attribute__((packed)) Record200 {
    u8 unknown_0[0xc6];  // (not used here)
    u8 byte_c6;
    u8 byte_c7;
};
GUEST_OFFSET(Record200, byte_c6, 0xc6);
GUEST_OFFSET(Record200, byte_c7, 0xc7);

inline constexpr guest::Function<0x00301444, u32(u32, u32)> clear;

u32 Record200__Record200(gptr<Record200> record200) {
    clear(record200.addr(), 0xc8u);
    record200->byte_c7 = 0xff;
    record200->byte_c6 = 0xff;
    return record200.addr();
}

}  // namespace d_001b266c
GUEST_EXPORT_FRAMED(0x001b266c, d_001b266c::Record200__Record200, 0x4010);  // pushes {r4, lr} first, as the original

// f_001b2690: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the work data's player part (+8) and its 0x1228-byte entry (+0xa488).
namespace d_001b2690 {

struct __attribute__((packed)) WorkData {
    u8 unknown_0[0xc8b0];  // (not used here)
    u8 byte_c8b0;
};
GUEST_OFFSET(WorkData, byte_c8b0, 0xc8b0);

inline constexpr guest::Function<0x0024dbc0, u32(u32, u32)> Block1228__reset;
inline constexpr guest::Function<0x006bd910, u32(u32, u32, u32, u32)> player_operation_c;

u32 WorkData__clear_players(gptr<WorkData> work_data) {
    player_operation_c(work_data.addr() + 8u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    Block1228__reset(work_data.addr() + 0xa488u, 0u);
    work_data->byte_c8b0 = 0;
    return 0u;
}

}  // namespace d_001b2690
GUEST_EXPORT_FRAMED(0x001b2690, d_001b2690::WorkData__clear_players, 0x4010);  // pushes {r4, lr} first, as the original

// f_001b26c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs the 0xc8b8-byte work data: its records, letters, item sets, id lists and counters.
namespace d_001b26c8 {

struct __attribute__((packed)) Local_001b26c8_r0_38 {
    u8 unknown_0[0x1c];  // (not used here)
    u16 half_1c;
    u16 half_1e;
    u16 half_20;
    u8 byte_22;
    u8 byte_23;
};
GUEST_OFFSET(Local_001b26c8_r0_38, half_1c, 0x1c);
GUEST_OFFSET(Local_001b26c8_r0_38, half_1e, 0x1e);
GUEST_OFFSET(Local_001b26c8_r0_38, half_20, 0x20);
GUEST_OFFSET(Local_001b26c8_r0_38, byte_22, 0x22);
GUEST_OFFSET(Local_001b26c8_r0_38, byte_23, 0x23);

struct __attribute__((packed)) Local_001b26c8_r1_22 {
    u16 half_0;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Local_001b26c8_r1_22, half_0, 0x0);
GUEST_OFFSET(Local_001b26c8_r1_22, byte_2, 0x2);
GUEST_OFFSET(Local_001b26c8_r1_22, byte_3, 0x3);

inline constexpr guest::Function<0x001b266c, u32(u32)> Record200__Record200;
inline constexpr guest::Function<0x0020bec8, u32(u32)> Record29__construct;
inline constexpr guest::Function<0x0020cbf0, u32(u32, u32, u32, u32)> Player__construct_main_part;
inline constexpr guest::Function<0x0024a56c, u32(u32)> clear_320_bytes;
inline constexpr guest::Function<0x0024a5ec, u32(u32)> ItemBitSet__clear;
inline constexpr guest::Function<0x0024b730, u32(u32)> BadgeCounters__construct_with_time;
inline constexpr guest::Function<0x0024d8fc, u32(u32, u32, u32, u32)> PlayerRecord42__clear;
inline constexpr guest::Function<0x0024dcc0, u32(u32)> Block1228__construct;
inline constexpr guest::Function<0x0029b870, u32(u32)> clear_32_bytes;
inline constexpr guest::Function<0x002beff0, u32(u32)> clear_counter_set;
inline constexpr guest::Function<0x002c0048, u32(u32)> FlagBlockBc__reset;
inline constexpr guest::Function<0x002fc20c, u32(u32)> construct_empty_item;
inline constexpr guest::Function<0x00301444, u32(u32, u32)> clear;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x00303534, u32(u32, u32)> EncryptedInt__set;
inline constexpr guest::Function<0x00303b10, u32(u32)> set_empty_item;
inline constexpr guest::Function<0x003328ec, u32(u32)> ExhibitionLetters__ExhibitionLetters;
inline constexpr guest::Function<0x005bb9f0, u32(u32)> VillagerRequest__clear;
inline constexpr guest::Function<0x005bd01c, u32(u32)> TimedRecord__clear;
inline constexpr guest::Function<0x005bd234, u32(u32)> TimedRecord16__clear;
inline constexpr guest::Function<0x005bd3fc, u32(u32)> ItemRecord16__clear;
inline constexpr guest::Function<0x005bdaa0, u32(u32)> TwoItemTimedRecord__clear;
inline constexpr guest::Function<0x005be19c, u32(u32)> NamePairRecord__construct;
inline constexpr guest::Function<0x005be8c0, u32(u32)> IdList11__clear_2;

u32 WorkData__WorkData(u32 work_data, u32 r1, u32 r2, u32 r3) {
    u32 r0_2 = Player__construct_main_part(work_data + 8u, r1, r2, r3);
    EncryptedInt__set(r0_2 + 0x6b8cu, 0u);
    u32 r6 = 0u;
    EncryptedInt__set(r0_2 + 0x6b94u, r6);
    EncryptedInt__set(r0_2 + 0x6b9cu, 0u);
    EncryptedInt__set(r0_2 + 0x6ba4u, 0u);
    u32 r0_8 = for_each_element(r0_2 + 0x6bd0u, 0x2fc20cu, 4u, 0x10u);
    ItemBitSet__clear(r0_8 + 0x50u);
    EncryptedInt__set(r0_8 + 0x338u, 0u);
    u32 r0_14 = for_each_element(for_each_element(r0_8 + 0x340u, 0x2fc20cu, 4u, 0x28u) + 0xa0u, 0x2fc20cu, 4u, 0x10u);
    u32 r0_15 = r0_14 + 0x50u;
    construct_empty_item(r0_15);
    u32 r0_16 = r0_15 + 4u;
    construct_empty_item(r0_16);
    u32 record200 = for_each_element(r0_16 + 4u, 0x2ff368u, 0x280u, 0xau) + 0x1900u;
    Record200__Record200(record200);
    r3 = 0xffffu;
    work_data = record200 + 0xf2u;
    r2 = 0u;
    r1 = r2;
    do {
        u32 r2_10 = r2 + 1u;
        r1 += 2u;
        *gptr<u16>(work_data + (r2 << 1)) = u16(r3);
        r2 = r2_10 + 1u;
        *gptr<u16>(work_data + (r2_10 << 1)) = u16(r3);
        guest::preempt();
    } while (s32(r1) < 0x20);
    u32 badge_counters = PlayerRecord42__clear(work_data + 0x42u, r1, r2, r3) + 0xa4u;
    BadgeCounters__construct_with_time(badge_counters);
    u32 r4_1 = badge_counters + 0x23cu;
    EncryptedInt__set(r4_1, 0u);
    EncryptedInt__set(r4_1 + 8u, 0u);
    EncryptedInt__set(r4_1 + 0x10u, 0u);
    EncryptedInt__set(r4_1 + 0x18u, 0u);
    EncryptedInt__set(r4_1 + 0x20u, 0u);
    EncryptedInt__set(r4_1 + 0x28u, 0u);
    clear_counter_set(r4_1);
    u32 timed_record16 = (badge_counters - 0x8ae0u) + 0x8d4cu;
    TimedRecord16__clear(timed_record16);
    u32 item_record16 = timed_record16 + 0x10u;
    ItemRecord16__clear(item_record16);
    u32 two_item_timed_record = item_record16 + 0x10u;
    TwoItemTimedRecord__clear(two_item_timed_record);
    u32 name_pair_record = two_item_timed_record + 0x18u;
    NamePairRecord__construct(name_pair_record);
    u32 villager_request = name_pair_record + 0x76u;
    VillagerRequest__clear(villager_request);
    u32 timed_record = villager_request + 0xeu;
    TimedRecord__clear(timed_record);
    u32 record29 = IdList11__clear_2(timed_record + 0xb6u) + 0x22u;
    Record29__construct(record29);
    u32 r0_37 = record29 + 0x2au;
    construct_empty_item(r0_37);
    gptr<Local_001b26c8_r0_38> r0_38 = gptr<Local_001b26c8_r0_38>(r0_37 + 4u);
    construct_empty_item(r0_38.addr());
    u32 r5_3 = r0_38.addr() + 0x69u;
    r0_38->half_1c = 0x7db;
    r0_38->half_1e = 0x7db;
    r0_38->half_20 = u16(r6);
    r0_38->byte_22 = u8(r6);
    r0_38->byte_23 = u8(r6);
    clear(r5_3, 0x22u);
    FlagBlockBc__reset(r5_3);
    u32 r4 = (r0_38.addr() - 0x8f0eu) + 0x8f99u;
    work_data = 0u;
    *gptr<u8>(r4) = u8(r6);
    do {
        *gptr<u8>(r4) = u8(u32(*gptr<u8>(r4)) & ~1u);
L_1b2964:;
        work_data += 1u;
        if (s32(work_data) >= 3) {
            u32 r0_41 = for_each_element(r4 + 0xfu, 0x2fc20cu, 4u, 0xau) + 0x28u;
            clear_320_bytes(r0_41);
            u32 r0_45 = ExhibitionLetters__ExhibitionLetters(for_each_element(r0_41 + 0x320u, 0x2fc20cu, 4u, 0xb4u) + 0x314u);
            u32 r4_3 = r0_45 - 0x9604u;
            clear(r0_45 + 0xde0u, 0x40u);
            clear(r4_3 + 0xa424u, 0x40u);
            u32 r0_50 = for_each_element(r4_3 + 0xa468u, 0x6bd060u, 6u, 3u) + 0x12u;
            set_empty_item(r0_50);
            u32 r0_55 = for_each_element(Block1228__construct(r0_50 + 6u) + 0x1228u, 0x2fc20cu, 4u, 0x168u) + 0x5a0u;
            clear_32_bytes(r0_55);
            u32 r0_56 = r0_55 - 0xbc50u;
            gptr<Local_001b26c8_r1_22> r1_22 = gptr<Local_001b26c8_r1_22>(r0_56 + 0xbc84u);
            r1_22->half_0 = u16(r6);
            r1_22->byte_2 = u8(r6);
            r1_22->byte_3 = u8(r6);
            guest::cpu()->r[1] = r1_22.addr();
            return r0_56;
        }
        if (work_data != 0) {
            if (work_data == 1u) {
                *gptr<u8>(r4) = u8(u32(*gptr<u8>(r4)) & ~2u);
                guest::preempt();
                goto L_1b2964;
            }
            if (work_data != 2u) {
                guest::preempt();
                goto L_1b2964;
            }
            *gptr<u8>(r4) = u8(u32(*gptr<u8>(r4)) & ~4u);
            guest::preempt();
            goto L_1b2964;
        }
        guest::preempt();
    } while (1);
}

}  // namespace d_001b26c8
GUEST_EXPORT_FRAMED(0x001b26c8, d_001b26c8::WorkData__WorkData, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001b2a5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys the work data's arrays of items, letters and records.
namespace d_001b2a5c {

inline constexpr guest::Function<0x00134fa4, u32(u32)> Heap__destroy_children;
inline constexpr guest::Function<0x00138a00, u32(u32)> do_nothing_00138a00;
inline constexpr guest::Function<0x00138a1c, u32(u32)> do_nothing_00138a1c;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;

u32 WorkData__destroy(u32 work_data) {
    u32 r0_1 = work_data + 0xbc50u;
    destroy_array_elements(r0_1 - 0x5a0u, 0x2f777cu, 4u, 0x168u);
    Heap__destroy_children(r0_1 - 0x17c8u);
    destroy_array_elements(r0_1 - 0x17e0u, 0x138b90u, 6u, 3u);
    destroy_array_elements(r0_1 - 0x2644u, 0x2f77e8u, 0x280u, 5u);
    destroy_array_elements(r0_1 - 0x2958u, 0x2f777cu, 4u, 0xb4u);
    destroy_array_elements(r0_1 - 0x2ca0u, 0x2f777cu, 4u, 0xau);
    do_nothing_00138a1c(r0_1 - 0x2ec4u);
    do_nothing_00138a00(r0_1 - 0x2edcu);
    destroy_array_elements(r0_1 - 0x4c40u, 0x2f77e8u, 0x280u, 0xau);
    destroy_array_elements(r0_1 - 0x4c98u, 0x2f777cu, 4u, 0x10u);
    destroy_array_elements(r0_1 - 0x4d38u, 0x2f777cu, 4u, 0x28u);
    destroy_array_elements(r0_1 - 0x5078u, 0x2f777cu, 4u, 0x10u);
    destroy_array_elements(r0_1 - 0x6704u, 0x2f7744u, 0x18u, 4u);
    return r0_1 - 0xbc50u;
}

}  // namespace d_001b2a5c
GUEST_EXPORT_FRAMED(0x001b2a5c, d_001b2a5c::WorkData__destroy, 0x4010);  // pushes {r4, lr} first, as the original

// f_001b3174: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets color slot `index` (below 15) of the palette to `color`, or 0 when the picker marks that color unusable.
namespace d_001b3174 {

struct __attribute__((packed)) Local_001b3174_r0_1 {
    u8 unknown_0[0x58];  // (not used here)
    u8 byte_58;
};
GUEST_OFFSET(Local_001b3174_r0_1, byte_58, 0x58);

inline constexpr u32 design_palette_colors_address = 0x0095c010u;

void DesignPalette__set_color(u32 design_palette, u32 r1, u32 r2) {
    if (r1 >= 0xfu) {
        return;
    }
    gptr<Local_001b3174_r0_1> r0_1 = gptr<Local_001b3174_r0_1>(design_palette + r1);
    if ((u32(gptr<u16>(design_palette_colors_address)[r2]) & 0xfu) == 0) {
        r0_1->byte_58 = u8(r2);
    } else {
        r0_1->byte_58 = 0;
    }
}

}  // namespace d_001b3174
GUEST_EXPORT(0x001b3174, d_001b3174::DesignPalette__set_color);

// f_001b31a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Loads the design color picker (256 colors into 0x95c010) and the 12 preset palettes (into 0xad53a4).
namespace d_001b31a4 {

struct __attribute__((packed)) Local_001b31a4_r3_2 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u16 half_c;
    u8 byte_e;
};
GUEST_OFFSET(Local_001b31a4_r3_2, word_4, 0x4);
GUEST_OFFSET(Local_001b31a4_r3_2, word_8, 0x8);
GUEST_OFFSET(Local_001b31a4_r3_2, half_c, 0xc);
GUEST_OFFSET(Local_001b31a4_r3_2, byte_e, 0xe);

struct __attribute__((packed)) Local_001b31a4_r4_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u16 half_c;
    u8 byte_e;
};
GUEST_OFFSET(Local_001b31a4_r4_1, word_0, 0x0);
GUEST_OFFSET(Local_001b31a4_r4_1, word_4, 0x4);
GUEST_OFFSET(Local_001b31a4_r4_1, word_8, 0x8);
GUEST_OFFSET(Local_001b31a4_r4_1, half_c, 0xc);
GUEST_OFFSET(Local_001b31a4_r4_1, byte_e, 0xe);

inline constexpr u32 design_palette_colors_address = 0x0095c010u;
inline constexpr u32 heap_mgr_instance_address = 0x00975338u;
inline constexpr u32 preset_palette_address = 0x00ad53a4u;
inline guest::global<u32, 0x00975338> heap_mgr_instance;
inline constexpr guest::Function<0x00125b38, u32(u32, u32, u32, u32)> FileLoader__load;
inline constexpr guest::Function<0x0012ca50, u32(u32, u32, u32, u32)> construct_font_source;
inline constexpr guest::Function<0x0013864c, u32(u32, u32, u32, u32)> Handle__release;
inline constexpr guest::Function<0x0013bb80, u32(u32)> do_nothing_13bb80;
inline constexpr guest::Function<0x003045a8, u32(u32)> current_thread_context;

struct __attribute__((packed)) LoadDesignPalettesFrame {
    u8 unknown_0[0x4];  // (not read or written by name)
    u32 word_4;
    u8 unknown_8[0xc];  // (not read or written by name)
};
GUEST_OFFSET(LoadDesignPalettesFrame, word_4, 0x4);
GUEST_SIZE(LoadDesignPalettesFrame, 0x14);

u32 load_design_palettes(u32 r0_unused, u32 i, u32 r2, u32 r3) {
    guest::StackFrameOf<LoadDesignPalettesFrame> frame;  // the original's stack frame
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    construct_font_source(frame.at(0).addr(), i, r2, r3);
    u32 context = current_thread_context(*heap_mgr_instance);
    u32 r4 = context;
    FileLoader__load(frame.at(0).addr(), 0x1b328cu, context, 0u);
    r3 = design_palette_colors_address;
    u32 j = frame->word_4;
    i = 0u;
    do {
        u32 r12_1 = r3 + (i << 1);
        u32 v_1 = *gptr<u8>(j);
        u32 r0_5 = j + 1u;
        i += 1u;
        u32 v_2 = *gptr<u8>(r0_5);
        j = r0_5 + 1u;
        r2_2 = v_1 | v_2 << 8;
        *gptr<u16>(r12_1) = u16(r2_2);
        guest::preempt();
    } while (i < 0x100u);
    Handle__release(frame.at(0).addr(), i, r2_2, r3);
    FileLoader__load(frame.at(0).addr(), 0x1b32a8u, r4, 0u);
    r2 = preset_palette_address;
    i = frame->word_4;
    j = 0u;
    do {
        gptr<Local_001b31a4_r3_2> r3_2 = gptr<Local_001b31a4_r3_2>(i);
        u32 v_3 = *gptr<u32>(i);
        i += 0xfu;
        gptr<Local_001b31a4_r4_1> r4_1 = gptr<Local_001b31a4_r4_1>((j << 4) - j + r2);
        j += 1u;
        r4_1->word_0 = v_3;
        r4_1->word_4 = r3_2->word_4;
        r4_1->word_8 = r3_2->word_8;
        r4_1->half_c = r3_2->half_c;
        r3_3 = r3_2->byte_e;
        r4_1->byte_e = u8(r3_3);
        guest::preempt();
    } while (j < 0xcu);
    Handle__release(frame.at(0).addr(), i, r2, r3_3);
    return do_nothing_13bb80(frame.at(0).addr());
}

}  // namespace d_001b31a4
GUEST_EXPORT_FRAMED(0x001b31a4, d_001b31a4::load_design_palettes, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_001b32c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Fills the pattern's pixels (0x800 bytes at +0x6c) with 0xcc and copies the header (0x26c bytes) from the source.
namespace d_001b32c8 {

struct __attribute__((packed)) Pattern {
    u8 unknown_0[0x86c];  // (not used here)
    u8 byte_86c;
};
GUEST_OFFSET(Pattern, byte_86c, 0x86c);

inline constexpr guest::Function<0x0013fac4, u32(u32, u32, u32, u32)> set_bytes;
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32)> copy_aligned_bytes;

void Pattern__init_from_header(gptr<Pattern> pattern, u32 r1) {
    set_bytes(pattern.addr() + 0x6cu, 0x800u, 0xccu, guest::cpu()->r[3]);
    copy_aligned_bytes(pattern.addr(), r1, 0x26cu);
    pattern->byte_86c = 0;
}

}  // namespace d_001b32c8
GUEST_EXPORT_FRAMED(0x001b32c8, d_001b32c8::Pattern__init_from_header, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001b3300: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Imports the image (when given) into the pattern with the palette mode.
namespace d_001b3300 {

inline constexpr guest::Function<0x001b3340, u32(u32, u32, u32)> Pattern__convert_image;
inline constexpr guest::Function<0x001c4c14, u32(u32, u32, u32, u32)> TextureView__from_resource_wrapper;

u32 Pattern__import_image(u32 pattern, u32 r1, u32 r2) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        return pattern;
    }
    TextureView__from_resource_wrapper(frame.at(0).addr(), r1, r2, guest::cpu()->r[3]);
    Pattern__convert_image(pattern, frame.at(0).addr(), r2);
    return frame.at(0).addr();
}

}  // namespace d_001b3300
GUEST_EXPORT_FRAMED(0x001b3300, d_001b3300::Pattern__import_image, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_001b3340: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Converts the image's pixels to the pattern's palette and writes them, then notifies the listeners.
namespace d_001b3340 {

struct __attribute__((packed)) Pattern {
    u8 unknown_0[0x69];  // (not used here)
    u8 byte_69;
};
GUEST_OFFSET(Pattern, byte_69, 0x69);

struct __attribute__((packed)) Local_001b3340_ea_1 {
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
};
GUEST_OFFSET(Local_001b3340_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_001b3340_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_001b3340_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_001b3340_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_001b3340_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_001b3340_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_001b3340_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_001b3340_ea_1, word_1c, 0x1c);
GUEST_OFFSET(Local_001b3340_ea_1, word_20, 0x20);
GUEST_OFFSET(Local_001b3340_ea_1, word_24, 0x24);
GUEST_OFFSET(Local_001b3340_ea_1, word_28, 0x28);
GUEST_OFFSET(Local_001b3340_ea_1, word_2c, 0x2c);

struct __attribute__((packed)) Local_001b3340_ea_2 {
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
GUEST_OFFSET(Local_001b3340_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_001b3340_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_001b3340_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_001b3340_ea_2, word_c, 0xc);
GUEST_OFFSET(Local_001b3340_ea_2, word_10, 0x10);
GUEST_OFFSET(Local_001b3340_ea_2, word_14, 0x14);
GUEST_OFFSET(Local_001b3340_ea_2, word_18, 0x18);
GUEST_OFFSET(Local_001b3340_ea_2, word_1c, 0x1c);
GUEST_OFFSET(Local_001b3340_ea_2, word_20, 0x20);

struct __attribute__((packed)) Local_001b3340_ea_3 {
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
GUEST_OFFSET(Local_001b3340_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_001b3340_ea_3, word_4, 0x4);
GUEST_OFFSET(Local_001b3340_ea_3, word_8, 0x8);
GUEST_OFFSET(Local_001b3340_ea_3, word_c, 0xc);
GUEST_OFFSET(Local_001b3340_ea_3, word_10, 0x10);
GUEST_OFFSET(Local_001b3340_ea_3, word_14, 0x14);
GUEST_OFFSET(Local_001b3340_ea_3, word_18, 0x18);
GUEST_OFFSET(Local_001b3340_ea_3, word_1c, 0x1c);
GUEST_OFFSET(Local_001b3340_ea_3, word_20, 0x20);

inline constexpr u32 design_palette_colors_address = 0x0095c010u;
inline constexpr guest::Function<0x001b488c, u32(u32, u32, u32, u32)> Pattern__set_pixel;
inline constexpr guest::Function<0x006aaa58, u32(u32, u32, u32, u32)> notify_registered;
inline constexpr guest::Function<0x0070b7e8, u32(u32, u32, u32, u32)> Pattern__image_region;
inline constexpr guest::Function<0x0070d904, u32(u32, u32, u32, u32)> get_u16_cell;

struct __attribute__((packed)) PatternConvertImageFrame {
    u32 word_0;
    u8 unknown_4[0x4];  // (not read or written by name)
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u8 byte_18;
    u8 byte_19;
    u8 unknown_1a[0x2];  // (not read or written by name)
    u32 word_1c;
    u8 unknown_20[0x4];  // (not read or written by name)
    u32 word_24;
    u8 unknown_28[0x28];  // (not read or written by name)
};
GUEST_OFFSET(PatternConvertImageFrame, word_0, 0x0);
GUEST_OFFSET(PatternConvertImageFrame, word_8, 0x8);
GUEST_OFFSET(PatternConvertImageFrame, word_c, 0xc);
GUEST_OFFSET(PatternConvertImageFrame, word_10, 0x10);
GUEST_OFFSET(PatternConvertImageFrame, word_14, 0x14);
GUEST_OFFSET(PatternConvertImageFrame, byte_18, 0x18);
GUEST_OFFSET(PatternConvertImageFrame, byte_19, 0x19);
GUEST_OFFSET(PatternConvertImageFrame, word_1c, 0x1c);
GUEST_OFFSET(PatternConvertImageFrame, word_24, 0x24);
GUEST_SIZE(PatternConvertImageFrame, 0x50);

void Pattern__convert_image(gptr<Pattern> pattern, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<PatternConvertImageFrame> frame;  // the original's stack frame
    u32 r0 = pattern.addr();
    u32 i = guest::cpu()->r[4];
    u32 j = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r14 = guest::cpu()->r[14];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 array = 0;
    gptr<Local_001b3340_ea_2> ea_2 = gptr<Local_001b3340_ea_2>(0u);
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 r8_1 = 0;
    u32 r9_1 = 0;
    u32 r10_2 = 0;
    u32 r11_2 = 0;
    u32 r0_9 = 0;
    u32 r8_2 = 0;
    u32 r0_10 = 0;
    u32 r3_2 = 0;
    u32 r9_2 = 0;
    u32 r10_3 = 0;
    u32 r1_4 = 0;
    gptr<Local_001b3340_ea_1> ea_1 = gptr<Local_001b3340_ea_1>(frame.at(0x20).addr());
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = i;
    ea_1->word_10 = j;
    ea_1->word_14 = r6;
    ea_1->word_18 = r7;
    ea_1->word_1c = r8;
    ea_1->word_20 = r9;
    ea_1->word_24 = r10;
    ea_1->word_28 = r11;
    ea_1->word_2c = r14;
    r7 = r0;
    r6 = design_palette_colors_address;
    if (pattern->byte_69 == 8u) {
        r8 = 0u;
        goto L_1b33bc;
    }
    r1_1 = frame.at(8).addr();
    Pattern__image_region(r7, r1_1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    r0_1 = frame->word_10;
    j = 0u;
    if (r0_1 < 0u || r0_1 == 0) {
        goto L_1b3508;
    }
L_1b337c:;
    r0_2 = frame->word_14;
    i = 0u;
    if (r0_2 < 0u || r0_2 == 0) {
        goto L_1b34f8;
    }
L_1b338c:;
    if (frame->byte_18 == 0) {
        r0_4 = get_u16_cell(frame->word_24, j, i, r3);
        goto L_1b3488;
    }
    r1_2 = frame->word_14 - i - 1u;
    array = frame->word_24;
    r0_4 = get_u16_cell(array, r1_2, j, r3);
    goto L_1b3488;
L_1b33bc:;
    j = 0u;
    r6 = (r8 << 3) + 0x88ebe0u;
    do {
        i = 0u;
        r9 = (j & 0x1fu) + ((r8 & 3u) << 5);
        do {
            r1 = *gptr<u32>(r6) + i;
            if (r1 < 0x34u) {
                u32 cell_value_3 = get_u16_cell(frame->word_24, r1, *gptr<u32>(r6 + 4u) + j, r3);
                u32 r0_8 = cell_value_3 & 0xfu;
                if (r0_8 >= 0xfu) {
                    r0_8 = 0xcu;
                }
                u32 r10_1 = r0_8 & 0xfu;
                u32 r11_1 = i & 0x1fu;
                frame->word_0 = r8 & 3u;
                Pattern__set_pixel(r7, r10_1, r11_1, j & 0x1fu);
                u32 r1_3 = gptr<u16>(design_palette_colors_address)[u32(*gptr<u8>(r7 + r10_1 + 0x58u))];
                notify_registered(r7, r1_3, r11_1, r9);
                r1 = guest::cpu()->r[1];
                r3 = guest::cpu()->r[3];
            }
            i += 1u;
            guest::preempt();
        } while (i < 0x20u);
        j += 1u;
        guest::preempt();
    } while (j < 0x20u);
    r8 += 1u;
    if (r8 < 4u) {
        guest::preempt();
        goto L_1b33bc;
    }
L_1b3470:;
    ea_2 = gptr<Local_001b3340_ea_2>(frame.at(0x2c).addr());
    r4_1 = ea_2->word_0;
    r5_1 = ea_2->word_4;
    r6_1 = ea_2->word_8;
    r7_1 = ea_2->word_c;
    r8_1 = ea_2->word_10;
    r9_1 = ea_2->word_14;
    r10_2 = ea_2->word_18;
    r11_2 = ea_2->word_1c;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
    guest::cpu()->r[10] = r10_2;
    guest::cpu()->r[11] = r11_2;
    return;
L_1b3488:;
    r0_9 = r0_4 & 0xfu;
    if (r0_9 >= 0xfu) {
        r0_9 = 0xcu;
    }
    r8_2 = r0_9 & 0xfu;
    r0_10 = frame->word_c & 3u;
    r3_2 = frame->word_8 + i & 0x1fu;
    r9_2 = j & 0x1fu;
    r10_3 = r3_2 + (r0_10 << 5);
    frame->word_0 = r0_10;
    Pattern__set_pixel(r7, r8_2, r9_2, r3_2);
    r1_4 = gptr<u16>(r6)[u32(*gptr<u8>(r7 + r8_2 + 0x58u))];
    notify_registered(r7, r1_4, r9_2, r10_3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    i += 1u;
    if (frame->word_14 > i) {
        guest::preempt();
        goto L_1b338c;
    }
L_1b34f8:;
    j += 1u;
    if (frame->word_10 > j) {
        guest::preempt();
        goto L_1b337c;
    }
L_1b3508:;
    if (frame->byte_19 == 0) {
        guest::preempt();
        goto L_1b3470;
    } else {
        j = 0u;
    }
    do {
        i = 0u;
        do {
            u32 cell_value_4 = get_u16_cell(frame->word_24, j, i + 0x20u, r3);
            u32 r0_13 = cell_value_4 & 0xfu;
            if (r0_13 >= 0xfu) {
                r0_13 = 0xcu;
            }
            u32 r3_3 = frame->word_1c + i & 0x1fu;
            u32 r8_3 = r0_13 & 0xfu;
            u32 r9_3 = j & 0x1fu;
            frame->word_0 = 3;
            Pattern__set_pixel(r7, r8_3, r9_3, r3_3);
            u32 r1_5 = gptr<u16>(r6)[u32(*gptr<u8>(r7 + r8_3 + 0x58u))];
            notify_registered(r7, r1_5, r9_3, r3_3 + 0x60u);
            r3 = guest::cpu()->r[3];
            i += 1u;
            guest::preempt();
        } while (i < 0x10u);
        j += 1u;
        guest::preempt();
    } while (j < 0x20u);
    gptr<Local_001b3340_ea_3> ea_3 = gptr<Local_001b3340_ea_3>(frame.at(0x2c).addr());
    u32 r4_2 = ea_3->word_0;
    u32 r5_2 = ea_3->word_4;
    u32 r6_2 = ea_3->word_8;
    u32 r7_2 = ea_3->word_c;
    u32 r8_4 = ea_3->word_10;
    u32 r9_4 = ea_3->word_14;
    u32 r10_5 = ea_3->word_18;
    u32 r11_3 = ea_3->word_1c;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[8] = r8_4;
    guest::cpu()->r[9] = r9_4;
    guest::cpu()->r[10] = r10_5;
    guest::cpu()->r[11] = r11_3;
}

}  // namespace d_001b3340
GUEST_EXPORT(0x001b3340, d_001b3340::Pattern__convert_image);

// f_001b35b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the high bits (arg 2) of a texture cell (arg 3, row arg on the stack): in all four quarter rows for
// wide textures of the object's later kinds.
namespace d_001b35b0 {

struct __attribute__((packed)) NotifyTarget001b35b0Arg0 {
    u8 unknown_0[0x69];  // (not used here)
    u8 byte_69;
};
GUEST_OFFSET(NotifyTarget001b35b0Arg0, byte_69, 0x69);

inline constexpr guest::Function<0x001c4bc8, u32(u32, u32, u32, u32)> set_cell_high_bits;
inline constexpr guest::Function<0x001c4c14, u32(u32, u32, u32, u32)> TextureView__from_resource_wrapper;

struct __attribute__((packed)) NotifyTarget001b35b0Frame {
    u8 unknown_0[0x8];  // (not read or written by name)
    u32 word_8;
};
GUEST_OFFSET(NotifyTarget001b35b0Frame, word_8, 0x8);
GUEST_SIZE(NotifyTarget001b35b0Frame, 0xc);

void set_texture_cell_bits(gptr<NotifyTarget001b35b0Arg0> arg0, u32 r1, u32 bits, u32 r3) {
    guest::StackFrameOf<NotifyTarget001b35b0Frame> frame;  // the original's stack frame
    u32 r4_1 = *frame.at<u32>(0x20);
    TextureView__from_resource_wrapper(frame.at(0).addr(), r1, bits, r3);
    if (frame->word_8 == 0x20u) {
        if (r4_1 >= 0x20u) {
            return;
        }
    } else {
        u32 r0_2 = arg0->byte_69;
        if (r0_2 >= 0xcu || r0_2 >= 9u) {
            if (r4_1 < 0x20u) {
                set_cell_high_bits(frame.at(0).addr(), r3, r4_1, bits);
                set_cell_high_bits(frame.at(0).addr(), r3, r4_1 + 0x20u, bits);
                set_cell_high_bits(frame.at(0).addr(), r3, r4_1 + 0x40u, bits);
                set_cell_high_bits(frame.at(0).addr(), r3, r4_1 + 0x60u, bits);
            }
            return;
        }
    }
    set_cell_high_bits(frame.at(0).addr(), r3, r4_1, bits);
}

}  // namespace d_001b35b0
GUEST_EXPORT_FRAMED(0x001b35b0, d_001b35b0::set_texture_cell_bits, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_001b3a20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The picker color of (row, column), or 0 when the picker marks it unusable.
namespace d_001b3a20 {

inline constexpr u32 design_palette_colors_address = 0x0095c010u;

u32 picker_color_or_zero(u32 r0, u32 r1) {
    u32 r0_1 = r0 + (r1 << 4) & 0xffu;
    if ((u32(gptr<u16>(design_palette_colors_address)[r0_1]) & 0xfu) != 0) {
        r0_1 = 0u;
    }
    return r0_1;
}

}  // namespace d_001b3a20
GUEST_EXPORT(0x001b3a20, d_001b3a20::picker_color_or_zero);

// f_001b3a44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Color `slot` (below 15) of preset palette `index` (below 12); 0 out of range.
namespace d_001b3a44 {

inline constexpr u32 preset_palette_address = 0x00ad53a4u;

u32 preset_palette_color(u32 r0, u32 r1) {
    if (r0 >= 0xcu || r1 >= 0xfu) {
        return 0u;
    }
    return *gptr<u8>(r0 * 0xfu + preset_palette_address + r1);
}

}  // namespace d_001b3a44
GUEST_EXPORT(0x001b3a44, d_001b3a44::preset_palette_color);

// f_001b3a6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the 15 colors of preset palette `index` into the pattern's palette (+0x58).
namespace d_001b3a6c {

inline constexpr u32 preset_palette_address = 0x00ad53a4u;

void Pattern__set_preset_palette(u32 pattern, u32 r1) {
    u32 i = 0u;
    u32 r12 = r1 * 0xfu + preset_palette_address;
    do {
        u32 r4_1 = pattern + i;
        u32 r3_1 = (r1 >= 0xcu || i >= 0xfu) ? 0u : u32(*gptr<u8>(r12 + i));
        i += 1u;
        *gptr<u8>(r4_1 + 0x58u) = u8(r3_1);
        guest::preempt();
    } while (i < 0xfu);
}

}  // namespace d_001b3a6c
GUEST_EXPORT_FRAMED(0x001b3a6c, d_001b3a6c::Pattern__set_preset_palette, 0x10);  // pushes {r4} first, as the original

// f_001b3ab0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Remaps the pattern's pixels through the color table.
namespace d_001b3ab0 {

struct __attribute__((packed)) Pattern {
    u8 unknown_0[0x69];  // (not used here)
    u8 byte_69;
};
GUEST_OFFSET(Pattern, byte_69, 0x69);

struct __attribute__((packed)) Local_001b3ab0_r4_1 {
    u8 unknown_0[0x6c];  // (not used here)
    u32 word_6c;
};
GUEST_OFFSET(Local_001b3ab0_r4_1, word_6c, 0x6c);

struct __attribute__((packed)) Local_001b3ab0_r5_1 {
    u8 unknown_0[0x6c];  // (not used here)
    u32 word_6c;
};
GUEST_OFFSET(Local_001b3ab0_r5_1, word_6c, 0x6c);

struct __attribute__((packed)) Local_001b3ab0_r5_2 {
    u8 unknown_0[0x6c];  // (not used here)
    u32 word_6c;
};
GUEST_OFFSET(Local_001b3ab0_r5_2, word_6c, 0x6c);

struct __attribute__((packed)) Local_001b3ab0_r6_1 {
    u8 unknown_0[0x6c];  // (not used here)
    u32 word_6c;
};
GUEST_OFFSET(Local_001b3ab0_r6_1, word_6c, 0x6c);


struct __attribute__((packed)) PatternRemapPixelsFrame {
    u32 word_0;
};
GUEST_OFFSET(PatternRemapPixelsFrame, word_0, 0x0);
GUEST_SIZE(PatternRemapPixelsFrame, 0x4);

void Pattern__remap_pixels(gptr<Pattern> pattern, u32 r1_unused, u32 r2_unused, u32 j) {
    guest::StackFrameOf<PatternRemapPixelsFrame> frame;  // the original's stack frame
    u32 r0 = pattern.addr();
    u32 i = 0;
    u32 r2 = 0;
    u32 r4 = 0;
    u32 k = 0;
    u32 r10 = 0;
    u32 r11 = 0;
    u32 r12 = 0;
    u32 r3_2 = 0;
    gptr<Local_001b3ab0_r4_1> r4_1 = gptr<Local_001b3ab0_r4_1>(0u);
    u32 r3_3 = 0;
    u32 r1_2 = 0;
    frame->word_0 = j;
    u32 r8 = 0xfu;
    u32 r1_1 = pattern->byte_69;
    if (r1_1 != 8u) {
        if (r1_1 - 6u <= 1u || r1_1 >= 0xcu || r1_1 >= 9u) {
            k = 1u;
            do {
                j = 0u;
                r10 = k << 0x1e >> 0x17;
                do {
                    i = 0u;
                    r4 = r10 + ((j & 0x1fu) << 2);
                    do {
                        u32 r2_1 = i & 0x1fu;
                        gptr<Local_001b3ab0_r5_1> r5_1 = gptr<Local_001b3ab0_r5_1>(r0 + (r4 + (r2_1 >> 3) << 2));
                        u32 r2_2 = r2_1 << 0x1d >> 0x1b;
                        i += 1u;
                        r5_1->word_6c = r5_1->word_6c & ~lsl_r(r8, r2_2 & 0xff) | lsl_r(0xcu, r2_2 & 0xff);
                        guest::preempt();
                    } while (i < 0x20u);
                    j += 1u;
                    guest::preempt();
                } while (j < 0x20u);
                k += 1u;
                guest::preempt();
            } while (k < 4u);
            return;
        }
        if (r1_1 == 4u || r1_1 == 3u || r1_1 == 5u) {
            j = 0u;
            k = 0x180u;
            goto L_1b3c20;
        }
        goto L_1b3c70;
    }
    k = 0x88e9c8u;
    r11 = 1u;
    frame->word_0 = 0;
    do {
        r10 = (frame->word_0 << 1) + 0x88e8c0u;
        r2 = 0u;
        u32 r14 = frame->word_0 << 0x1e >> 0x17;
        do {
            i = 0u;
            u32 r5 = r14 + ((r2 & 0x1fu) << 2);
            do {
                if (u32(*gptr<u8>(r10)) + i < 0x34u) {
                    if ((gptr<u32>(k)[r2 + (i << 5)] & lsl_r(r11, i & 0xff)) == 0) {
                        goto L_1b3b80;
                    }
                }
                r3_2 = i & 0x1fu;
                r4_1 = gptr<Local_001b3ab0_r4_1>(r0 + (r5 + (r3_2 >> 3) << 2));
                r3_3 = r3_2 << 0x1d >> 0x1b;
                r4_1->word_6c = lsl_r(0xcu, r3_3 & 0xff) | r4_1->word_6c & ~lsl_r(r8, r3_3 & 0xff);
L_1b3b80:;
                i += 1u;
                guest::preempt();
            } while (i < 0x20u);
            r2 += 1u;
            guest::preempt();
        } while (r2 < 0x20u);
        r1_2 = frame->word_0 + 1u;
        frame->word_0 = r1_2;
        guest::preempt();
    } while (r1_2 < 4u);
    return;
L_1b3c20:;
    i = 0u;
    r12 = k + ((j & 0x1fu) << 2);
    do {
        u32 r2_3 = i & 0x1fu;
        gptr<Local_001b3ab0_r5_2> r5_2 = gptr<Local_001b3ab0_r5_2>(r0 + (r12 + (r2_3 >> 3) << 2));
        u32 r2_4 = r2_3 << 0x1d >> 0x1b;
        i += 1u;
        r5_2->word_6c = r5_2->word_6c & ~lsl_r(r8, r2_4 & 0xff) | lsl_r(0xcu, r2_4 & 0xff);
        guest::preempt();
    } while (i < 0x20u);
    j += 1u;
    if (j < 0x20u) {
        guest::preempt();
        goto L_1b3c20;
    }
L_1b3c70:;
    u32 r1_3 = pattern->byte_69;
    r2 = 0x20u;
    if (r1_3 == 2u || r1_3 == 5u) {
        r2 = 0u;
    } else if (r1_3 == 1u || r1_3 == 4u) {
        r2 = 0x10u;
    } else {
        j = 0u;
        goto L_1b3cf0;
    }
    j = 0u;
L_1b3ca0:;
    i = r2;
    if (r2 < 0x20u) {
        r4 = ((j & 0x1fu) << 2) + 0x100u;
        do {
            u32 r12_1 = i & 0x1fu;
            gptr<Local_001b3ab0_r6_1> r6_1 = gptr<Local_001b3ab0_r6_1>(r0 + (r4 + (r12_1 >> 3) << 2));
            u32 r12_2 = r12_1 << 0x1d >> 0x1b;
            i += 1u;
            r6_1->word_6c = r6_1->word_6c & ~lsl_r(r8, r12_2 & 0xff) | lsl_r(0xcu, r12_2 & 0xff);
            guest::preempt();
        } while (i < 0x20u);
    }
L_1b3cf0:;
    j += 1u;
    if (j >= 0x20u) {
        return;
    }
    guest::preempt();
    goto L_1b3ca0;
}

}  // namespace d_001b3ab0
GUEST_EXPORT_FRAMED(0x001b3ab0, d_001b3ab0::Pattern__remap_pixels, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, k, r10, r11, lr} first, as the original

// f_001b3d08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The picker's color entry, with its low 4 bits set when asked.
namespace d_001b3d08 {

inline constexpr u32 design_palette_colors_address = 0x0095c010u;

u32 picker_color_with_flag(u32 r0, u32 r1) {
    return (r1 == 0 ? 0u : 0xfu) | u32(gptr<u16>(design_palette_colors_address)[r0]);
}

}  // namespace d_001b3d08
GUEST_EXPORT(0x001b3d08, d_001b3d08::picker_color_with_flag);

// f_001b3d2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the current player's identity into the pattern's creator (+0x2a).
namespace d_001b3d2c {

inline constexpr u32 current_player_data_address = 0x00aaf14cu;
inline guest::global<u32, 0x00aaf14c> current_player_data;
inline constexpr guest::Function<0x001b4a8c, u32(u32, u32)> copy_46_bytes;

void Pattern__set_creator_to_current_player(u32 pattern) {
    u32 r1_1 = *current_player_data;
    if (r1_1 == 0) {
        return;
    }
    copy_46_bytes(pattern + 0x2au, r1_1 + 0x55a6u);
    return;
}

}  // namespace d_001b3d2c
GUEST_EXPORT(0x001b3d2c, d_001b3d2c::Pattern__set_creator_to_current_player);

// f_001b488c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the 4-bit pixel (x, y) of the pattern's page to the color index.
namespace d_001b488c {

struct __attribute__((packed)) Local_001b488c_r2_2 {
    u8 unknown_0[0x6c];  // (not used here)
    u32 word_6c;
};
GUEST_OFFSET(Local_001b488c_r2_2, word_6c, 0x6c);


void Pattern__set_pixel(u32 pattern, u32 r1, u32 r2, u32 r3) {
    u32 r2_1 = r2 & 0x1fu;
    u32 r12_1 = (*gptr<u32>(guest::cpu()->r[13] + 4u) << 0x1e >> 0x17) + ((r3 & 0x1fu) << 2);
    gptr<Local_001b488c_r2_2> r2_2 = gptr<Local_001b488c_r2_2>(pattern + (r12_1 + (r2_1 >> 3) << 2));
    u32 r0_1 = (r2_1 << 0x1d) >> 0x1b;
    r2_2->word_6c = r2_2->word_6c & ~lsl_r(0xfu, r0_1 & 0xff) | lsl_r(r1 & 0xfu, r0_1 & 0xff);
}

}  // namespace d_001b488c
GUEST_EXPORT_FRAMED(0x001b488c, d_001b488c::Pattern__set_pixel, 0x10);  // pushes {r4} first, as the original

// f_001b48dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the pattern's town (+0x40) when its creator is the given player.
namespace d_001b48dc {

inline constexpr guest::Function<0x002fe940, u32(u32, u32, u32, u32)> PersonalId__equals;
inline constexpr guest::Function<0x0030f52c, u32(u32, u32)> copy_22_bytes;

void Pattern__set_town_if_creator(u32 pattern, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    if (PersonalId__equals(pattern + 0x2au, r1, r2, guest::cpu()->r[3]) != 0) {
        frame.release();
        copy_22_bytes(pattern + 0x40u, r2);
        return;
    }
}

}  // namespace d_001b48dc
GUEST_EXPORT(0x001b48dc, d_001b48dc::Pattern__set_town_if_creator);

// f_001b490c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the 0x870-byte pattern, marks it foreign when its id is not local in a network session, and refreshes it.
namespace d_001b490c {

struct __attribute__((packed)) Pattern {
    u8 unknown_0[0x28];  // (not used here)
    u16 half_28;
    u8 unknown_2a[0x842];  // (not used here)
    u8 byte_86c;
};
GUEST_OFFSET(Pattern, half_28, 0x28);
GUEST_OFFSET(Pattern, byte_86c, 0x86c);

inline constexpr guest::Function<0x001b2c7c, u32(u32, u32)> Town__clear_records;
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> copy_aligned_bytes;
inline constexpr guest::Function<0x002fc900, u32(u32)> mode_above_1;
inline constexpr guest::Function<0x00305f44, u32(u32, u32)> current_net_station;
inline constexpr guest::Function<0x006aac60, u32(u32, u32)> find_packed_id;

void Pattern__copy_from(gptr<Pattern> pattern, u32 r1) {
    u32 r0_1 = copy_aligned_bytes(pattern.addr(), r1, 0x870u, guest::cpu()->r[3]);
    pattern->byte_86c = 0;
    u32 r0_2 = mode_above_1(r0_1);
    u32 r1_2 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        u32 station = current_net_station(r0_2, r1_2);
        r1_2 = guest::cpu()->r[1];
        if (station != 0) {
            u32 packed_id = find_packed_id(pattern.addr(), r1_2);
            r1_2 = guest::cpu()->r[1];
            if ((packed_id >> 8u & 0xfu) == 0) {
                r1_2 = 1u;
                pattern->byte_86c = u8(r1_2);
            }
        }
    }
    Town__clear_records(pattern.addr(), r1_2);
    pattern->half_28 = 0;
}

}  // namespace d_001b490c
GUEST_EXPORT_FRAMED(0x001b490c, d_001b490c::Pattern__copy_from, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001b4980: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets the pattern's flags (type 4, shareable).
namespace d_001b4980 {

struct __attribute__((packed)) Pattern {
    u8 unknown_0[0x67];  // (not used here)
    u8 byte_67;
    u8 byte_68;
    u8 byte_69;
    u8 unknown_6a[0x802];  // (not used here)
    u8 byte_86c;
};
GUEST_OFFSET(Pattern, byte_67, 0x67);
GUEST_OFFSET(Pattern, byte_68, 0x68);
GUEST_OFFSET(Pattern, byte_69, 0x69);
GUEST_OFFSET(Pattern, byte_86c, 0x86c);


void Pattern__reset_flags(gptr<Pattern> pattern) {
    pattern->byte_67 = 1;
    pattern->byte_68 = 0;
    pattern->byte_69 = 4;
    pattern->byte_86c = 0;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_001b4980
GUEST_EXPORT_FRAMED(0x001b4980, d_001b4980::Pattern__reset_flags, 0x4010);  // pushes {r4, lr} first, as the original

// f_001b49b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the pattern, refreshes it and, in a network session, sends the replacement of the old id by the new one
// (message 0x6d).
namespace d_001b49b0 {

struct __attribute__((packed)) Pattern {
    u8 unknown_0[0x28];  // (not used here)
    u16 half_28;
    u8 unknown_2a[0x842];  // (not used here)
    u8 byte_86c;
};
GUEST_OFFSET(Pattern, half_28, 0x28);
GUEST_OFFSET(Pattern, byte_86c, 0x86c);

inline constexpr guest::Function<0x001b2c7c, u32(u32, u32)> Town__clear_records;
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> copy_aligned_bytes;
inline constexpr guest::Function<0x002fc900, u32(u32)> mode_above_1;
inline constexpr guest::Function<0x00305f44, u32(u32, u32)> current_net_station;
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> send_message;
inline constexpr guest::Function<0x006aac60, u32(u32, u32)> find_packed_id;
inline constexpr guest::Function<0x006aaf98, u32(u32, u32)> PackedColor__unpack;
inline constexpr guest::Function<0x006ab0b0, u32(u32, u32)> ObjectList__update_all;

struct __attribute__((packed)) PatternCopyAndShareFrame {
    u8 unknown_0[0x2];  // (not read or written by name)
    u16 packed_id;
};
GUEST_OFFSET(PatternCopyAndShareFrame, packed_id, 0x2);
GUEST_SIZE(PatternCopyAndShareFrame, 0x4);

u32 Pattern__copy_and_share(gptr<Pattern> pattern, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<PatternCopyAndShareFrame> frame;  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r0_1 = copy_aligned_bytes(pattern.addr(), r1, 0x870u, r3);
    pattern->byte_86c = 0;
    u32 r0_2 = mode_above_1(r0_1);
    u32 r1_2 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        u32 station = current_net_station(r0_2, r1_2);
        r1_2 = guest::cpu()->r[1];
        if (station != 0) {
            u32 packed_id = find_packed_id(pattern.addr(), r1_2);
            r1_2 = guest::cpu()->r[1];
            if ((packed_id >> 8u & 0xfu) == 0) {
                r1_2 = 1u;
                pattern->byte_86c = u8(r1_2);
            }
        }
    }
    ObjectList__update_all(pattern.addr(), r1_2);
    u32 packed_id_2 = find_packed_id(pattern.addr(), guest::cpu()->r[1]);
    u32 r0_7 = mode_above_1(PackedColor__unpack(packed_id_2, 0u));
    u32 r1_5 = guest::cpu()->r[1];
    if (r0_7 != 0) {
        u32 packed_id_3 = find_packed_id(r1, r1_5);
        r1_5 = 0xffffu;
        if (!(packed_id_2 == r1_5 || packed_id_3 == r1_5)) {
            *frame.at<u16>(0) = u16(packed_id_2);
            frame->packed_id = u16(packed_id_3);
            send_message(0x6du, 4u, frame.at(0).addr(), 4u);
            r1_5 = guest::cpu()->r[1];
        }
    }
    Town__clear_records(pattern.addr(), r1_5);
    pattern->half_28 = 0;
    return pattern.addr();
}

}  // namespace d_001b49b0
GUEST_EXPORT_FRAMED(0x001b49b0, d_001b49b0::Pattern__copy_and_share, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_001b4a8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies 46 bytes.
namespace d_001b4a8c {

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32)> copy_bytes_at_any_alignment;

u32 copy_46_bytes() {
    return copy_bytes_at_any_alignment(guest::cpu()->r[0], guest::cpu()->r[1], 0x2eu);
}

}  // namespace d_001b4a8c
GUEST_EXPORT(0x001b4a8c, d_001b4a8c::copy_46_bytes);

// f_001b4b20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the pattern's name (+0x16) and stamps it with the current month and day.
namespace d_001b4b20 {

struct __attribute__((packed)) Pattern {
    u8 unknown_0[0x16];  // (not used here)
    u32 word_16;
    u32 word_1a;
    u32 word_1e;
    u32 word_22;
    u32 word_26;
    u16 half_2a;
    u8 byte_2c;
    u8 byte_2d;
};
GUEST_OFFSET(Pattern, word_16, 0x16);
GUEST_OFFSET(Pattern, word_1a, 0x1a);
GUEST_OFFSET(Pattern, word_1e, 0x1e);
GUEST_OFFSET(Pattern, word_22, 0x22);
GUEST_OFFSET(Pattern, word_26, 0x26);
GUEST_OFFSET(Pattern, half_2a, 0x2a);
GUEST_OFFSET(Pattern, byte_2c, 0x2c);
GUEST_OFFSET(Pattern, byte_2d, 0x2d);

struct __attribute__((packed)) PatternSetNameArg1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u16 half_14;
};
GUEST_OFFSET(PatternSetNameArg1, word_0, 0x0);
GUEST_OFFSET(PatternSetNameArg1, word_4, 0x4);
GUEST_OFFSET(PatternSetNameArg1, word_8, 0x8);
GUEST_OFFSET(PatternSetNameArg1, word_c, 0xc);
GUEST_OFFSET(PatternSetNameArg1, word_10, 0x10);
GUEST_OFFSET(PatternSetNameArg1, half_14, 0x14);

inline constexpr guest::Function<0x0035072c, u32(u32, u32, u32, u32)> current_stamp;

struct __attribute__((packed)) PatternSetNameFrame {
    u32 word_0;
};
GUEST_OFFSET(PatternSetNameFrame, word_0, 0x0);
GUEST_SIZE(PatternSetNameFrame, 0x4);

void Pattern__set_name(gptr<Pattern> pattern, gptr<PatternSetNameArg1> arg1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<PatternSetNameFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r4_1 = pattern.addr() + 0x2cu;
    pattern->word_16 = arg1->word_0;
    pattern->word_1a = arg1->word_4;
    pattern->word_1e = arg1->word_8;
    pattern->word_22 = arg1->word_c;
    u32 r2_1 = arg1->word_10;
    pattern->word_26 = r2_1;
    u32 r1_1 = arg1->half_14;
    pattern->half_2a = u16(r1_1);
    current_stamp(frame.at(0).addr(), r1_1, r2_1, r3);
    pattern->byte_2c = u8(frame->word_0 >> 0x18);
    pattern->byte_2d = u8(frame->word_0 >> 0x10);
}

}  // namespace d_001b4b20
GUEST_EXPORT_FRAMED(0x001b4b20, d_001b4b20::Pattern__set_name, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_001b545c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// True when the id is below 399.
namespace d_001b545c {


u32 id_below_399(u32 r0) {
    guest::cpu()->r[1] = 0x18fu;
    return !(r0 >= 0x18fu);
}

}  // namespace d_001b545c
GUEST_EXPORT(0x001b545c, d_001b545c::id_below_399);

// f_001b5474: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Places item `index` (of 2) of the pair in the room or the field once, when its owner is the current player.
namespace d_001b5474 {

struct __attribute__((packed)) Local_001b5474_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001b5474_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_001b5474_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_001b5474_r4_1 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
};
GUEST_OFFSET(Local_001b5474_r4_1, byte_8, 0x8);

inline constexpr guest::Function<0x002f74c8, u32(u32)> current_scene_id;
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> Item__copy_b;
inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> GridMap__place_item_at_world;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> construct_item;
inline constexpr guest::Function<0x00303acc, u32(u32)> item_is_kind_11_with_class_4_or_5;
inline constexpr guest::Function<0x0030b654, u32(u32)> item_has_valid_data;
inline constexpr guest::Function<0x004e9a78, u32(u32, u32, u32, u32)> RoomGrid__furniture_at_layer;
inline constexpr guest::Function<0x0059e65c, u32(u32, u32, u32)> clear_field_tile;
inline constexpr guest::Function<0x006a5e34, u32(u32)> get_map_table;

struct __attribute__((packed)) ItemPairPlaceInWorldFrame {
    u32 word_0;
    u8 unknown_4[0x8];  // (not read or written by name)
};
GUEST_OFFSET(ItemPairPlaceInWorldFrame, word_0, 0x0);
GUEST_SIZE(ItemPairPlaceInWorldFrame, 0xc);

u32 ItemPair__place_in_world(u32 item_pair, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<ItemPairPlaceInWorldFrame> frame;  // the original's stack frame
    if (r2 >= 2u) {
        return item_pair;
    }
    gptr<Local_001b5474_r4_1> r4_1 = gptr<Local_001b5474_r4_1>(item_pair + r2);
    gptr<Local_001b5474_ea_1> ea_1 = gptr<Local_001b5474_ea_1>(frame.at(0x28).addr());
    u32 r6_1 = ea_1->word_0;
    u32 r7_1 = ea_1->word_4;
    u32 r3_1 = frame.at(4).addr();
    if (r4_1->byte_8 != 0) {
        construct_item(r3_1, 0x2083u, r2, r3_1);
    } else {
        Item__copy_b(r3_1, item_pair + (r2 << 2), r2, r3_1);
    }
    if (r4_1->byte_8 == 0) {
        r4_1->byte_8 = 1;
        u32 scene_2 = current_scene_id(1u);
        if (scene_2 == r1) {
            u32 r0_3 = item_has_valid_data(frame.at(4).addr());
            if (r0_3 != 0) {
                if (item_is_kind_11_with_class_4_or_5(frame.at(4).addr()) != 0) {
                    RoomGrid__furniture_at_layer(r3, r6_1, 2u, r7_1);
                } else {
                    RoomGrid__furniture_at_layer(r3, r6_1, 1u, r7_1);
                }
            } else {
                u32 map_table = get_map_table(r0_3);
                if (map_table != 0) {
                    u32 r0_7 = frame.at(8).addr();
                    construct_item(r0_7, 0x2083u, guest::cpu()->r[2], guest::cpu()->r[3]);
                    frame->word_0 = 0;
                    GridMap__place_item_at_world(map_table, r0_7, r3, r6_1);
                    clear_field_tile(r3, r6_1, 1u);
                }
            }
        }
    }
    return frame.at(4).addr();
}

}  // namespace d_001b5474
GUEST_EXPORT_FRAMED(0x001b5474, d_001b5474::ItemPair__place_in_world, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_001b55b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The model name of the id from the shared table (under its lock).
namespace d_001b55b8 {

inline constexpr u32 global_00982180_address = 0x00982180u;
inline constexpr u32 global_009821f4_address = 0x009821f4u;
inline constexpr u32 global_009821f8_address = 0x009821f8u;
inline constexpr u32 global_00982268_address = 0x00982268u;
inline constexpr u32 npc_text_table_address = 0x00a83afcu;
inline constexpr u32 model_name_table_a_address = 0x00af7f40u;
inline constexpr u32 model_name_table_b_address = 0x00af7f84u;
inline constexpr guest::Function<0x00135740, u32(u32)> lock_member_lock;
inline constexpr guest::Function<0x00137e84, u32(u32, u32)> unlock_member_lock;
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> copy_aligned_bytes;
inline constexpr guest::Function<0x0056029c, u32(u32, u32, u32)> NameTable__build;
inline constexpr guest::Function<0x005603f0, u32(u32, u32, u32, u32)> get_shared_critical_section;

u32 model_name_lookup(u32 r0, u32 r1_unused, u32 r2) {
    guest::StackFrame frame(0x640);  // the original's stack frame
    u32 r1 = 0;
    u32 r4 = 0;
    u32 r5 = 0;
    u32 r6 = 0;
    u32 r0_2 = 0;
    u32 r0_5 = 0;
    u32 r0_7 = 0;
    u32 r1_1 = r0 - 0x2000u;
    u32 cf_1 = r0 >= 0x18fu;
    if (cf_1) {
        cf_1 = r0 - 0x1000u >= 0x10u;
    }
    if (cf_1 && r1_1 >= 0x11u) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    if (r0 - 0x1000u < 0x10u) {
        r6 = global_00982268_address;
        r5 = r0 - 0x1000u;
        u32 r0_3 = *gptr<u32>(r6);
        if (r0_3 == 0) {
            u32 r0_4 = get_shared_critical_section(r0_3, r1_1, r2, guest::cpu()->r[3]);
            r4 = r0_4;
            lock_member_lock(r0_4);
            r1 = guest::cpu()->r[1];
            if (*gptr<u32>(r6) == 0) {
                NameTable__build(model_name_table_b_address, global_009821f8_address, 0x10u);
                r1 = guest::cpu()->r[1];
                r0_5 = model_name_table_b_address;
                *gptr<u32>(r6) = r0_5;
                goto L_1b5664;
            }
            goto L_1b5664;
        }
        r0_2 = gptr<u32>(*gptr<u32>(r6))[r5];
        guest::cpu()->r[1] = r1_1;
        return r0_2;
    }
    if (r1_1 >= 0x11u) {
        u32 r5_1 = frame.at(0).addr();
        copy_aligned_bytes(r5_1, npc_text_table_address, 0x63cu, guest::cpu()->r[3]);
        u32 r1_3 = gptr<u32>(r5_1)[r0];
        *gptr<u8>(r1_3 + 0xfu) = 0;
        guest::cpu()->r[1] = r1_3;
        return r1_3 + 0xau;
    }
    r6 = global_009821f4_address;
    r5 = r1_1;
    r0_7 = *gptr<u32>(r6);
    if (r0_7 == 0) {
        u32 r0_8 = get_shared_critical_section(r0_7, r1_1, r2, guest::cpu()->r[3]);
        r4 = r0_8;
        lock_member_lock(r0_8);
        r1 = guest::cpu()->r[1];
        if (*gptr<u32>(r6) != 0) {
            goto L_1b5664;
        }
        NameTable__build(model_name_table_a_address, global_00982180_address, 0x11u);
        r1 = guest::cpu()->r[1];
        r0_5 = model_name_table_a_address;
        *gptr<u32>(r6) = r0_5;
        goto L_1b5664;
    }
    r0_2 = gptr<u32>(*gptr<u32>(r6))[r5];
    guest::cpu()->r[1] = r1_1;
    return r0_2;
L_1b5664:;
    unlock_member_lock(r4, r1);
    r1_1 = guest::cpu()->r[1];
    return gptr<u32>(*gptr<u32>(r6))[r5];
}

}  // namespace d_001b55b8
GUEST_EXPORT_FRAMED(0x001b55b8, d_001b55b8::model_name_lookup, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001b5d74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The model name of the id; id 0x2010 has the shared default.
namespace d_001b5d74 {

inline constexpr u32 model_names_address = 0x0095c360u;
inline guest::global<u32, 0x0095c360> model_names;
inline constexpr guest::Function<0x001b55b8, u32(u32, u32, u32, u32)> model_name_lookup;

u32 model_name_of_id(u32 r0) {
    u32 r1 = 0;
    if (r0 == 0x2010u) {
        return *model_names;
    }
    return model_name_lookup(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_001b5d74
GUEST_EXPORT(0x001b5d74, d_001b5d74::model_name_of_id);

// f_001b5d94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// True for ids below 399, 0x1000 to 0x100f and 0x2000 to 0x2010.
namespace d_001b5d94 {


u32 model_id_is_valid(u32 r0) {
    u32 r1_1 = 0x18fu;
    u32 cf_1 = r0 >= r1_1;
    if (cf_1) {
        r1_1 = r0 - 0x1000u;
        cf_1 = r1_1 >= 0x10u;
    }
    if (!cf_1) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    if (r0 - 0x2000u >= 0x11u) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_001b5d94
GUEST_EXPORT(0x001b5d94, d_001b5d94::model_id_is_valid);

// f_001b5f7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the record: its items, pattern and name, with the default shirt and hat items.
namespace d_001b5f7c {

struct __attribute__((packed)) ClothingRecord {
    u8 byte_0;
};
GUEST_OFFSET(ClothingRecord, byte_0, 0x0);

inline constexpr guest::Function<0x002d4d30, u32(u32, u32)> RoomLayout__set_wallpaper;
inline constexpr guest::Function<0x002d4f3c, u32(u32, u32, u32, u32)> RoomLayout__clear;
inline constexpr guest::Function<0x002d5184, u32(u32, u32)> RoomLayout__set_floor;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> construct_item;
inline constexpr guest::Function<0x00301444, u32(u32, u32)> clear;
inline constexpr guest::Function<0x003059f8, u32(u32)> Pattern__clear;

void ClothingRecord__clear(gptr<ClothingRecord> clothing_record, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    clothing_record->byte_0 = 0xff;
    RoomLayout__clear(clothing_record.addr() + 2u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    Pattern__clear(clothing_record.addr() + 0x304u);
    clear(clothing_record.addr() + 0xb74u, 0x22u);
    construct_item(frame.at(0).addr(), 0x23c6u);
    construct_item(frame.at(4).addr(), 0x2460u);
    RoomLayout__set_wallpaper(clothing_record.addr() + 2u, frame.at(0).addr());
    RoomLayout__set_floor(clothing_record.addr() + 2u, frame.at(4).addr());
}

}  // namespace d_001b5f7c
GUEST_EXPORT_FRAMED(0x001b5f7c, d_001b5f7c::ClothingRecord__clear, 0x4010);  // pushes {r4, lr} first, as the original

// f_001b625c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets bit `index` (below 10) of the bit set.
namespace d_001b625c {

inline constexpr guest::Function<0x001b6278, u32(u32, u32, u32, u32)> TourResult__set_score;

void BitSet10__set(u32 r0_unused, u32 r1) {
    if (s32(r1) >= 0xa) {
        guest::cpu()->r[1] = r1;
        return;
    }
    TourResult__set_score(guest::cpu()->r[0], 1u, r1, 0u);
}

}  // namespace d_001b625c
GUEST_EXPORT(0x001b625c, d_001b625c::BitSet10__set);

// f_001b732c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the record: its ids at -1 and its two levels at 200.
namespace d_001b732c {

struct __attribute__((packed)) Record1a {
    u8 byte_0;
    u8 byte_1;
    u16 half_2;
    u16 half_4;
    u8 unknown_6[0x8];  // (not used here)
    u8 byte_e;
    u8 byte_f;
    u8 unknown_10[0x8];  // (not used here)
    u8 byte_18;
    u8 byte_19;
};
GUEST_OFFSET(Record1a, byte_0, 0x0);
GUEST_OFFSET(Record1a, byte_1, 0x1);
GUEST_OFFSET(Record1a, half_2, 0x2);
GUEST_OFFSET(Record1a, half_4, 0x4);
GUEST_OFFSET(Record1a, byte_e, 0xe);
GUEST_OFFSET(Record1a, byte_f, 0xf);
GUEST_OFFSET(Record1a, byte_18, 0x18);
GUEST_OFFSET(Record1a, byte_19, 0x19);


void Record1a__clear(gptr<Record1a> record1a) {
    record1a->byte_0 = 0;
    u32 r2_1 = ~0u;
    record1a->byte_1 = 0;
    record1a->half_2 = u16(r2_1);
    record1a->half_4 = u16(r2_1);
    record1a->byte_e = 0;
    record1a->byte_f = 0xc8;
    record1a->byte_18 = 0;
    record1a->byte_19 = 0xc8;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_001b732c
GUEST_EXPORT(0x001b732c, d_001b732c::Record1a__clear);

// f_001b7530: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// True when adding is allowed (0xad56fb set, 0xad56fa clear) and the count (+0x18) is at most 15.
namespace d_001b7530 {

struct __attribute__((packed)) CanAddEntry16Arg0 {
    u8 unknown_0[0x18];  // (not used here)
    u8 byte_18;
};
GUEST_OFFSET(CanAddEntry16Arg0, byte_18, 0x18);

inline constexpr u32 menu_entry_state_address = 0x00ad56e0u;
inline guest::global<u8, 0x00ad56fa> global_00ad56fa;
inline guest::global<u8, 0x00ad56fb> global_00ad56fb;

u32 can_add_entry_16(gptr<CanAddEntry16Arg0> arg0) {
    if (*global_00ad56fa != 0) {
        guest::cpu()->r[1] = menu_entry_state_address;
        return 0u;
    }
    u32 r1_1 = *global_00ad56fb;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    if (arg0->byte_18 <= 0xfu) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_001b7530
GUEST_EXPORT(0x001b7530, d_001b7530::can_add_entry_16);

// f_001b7568: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Adds the sale to the tally of the kind (+0x10): by count, price or a quarter of the item's price, by the shop's
// mode; true when the tally changed.
namespace d_001b7568 {

inline guest::global<u32, 0x0095c6d0> tour_instance;
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32)> Item__is_empty;
inline constexpr guest::Function<0x006c4280, u32(u32, u32, u32, u32)> record_value;
inline constexpr guest::Function<0x00768738, u32(u32)> Item__quarter_price;
inline constexpr guest::Function<0x0076e80c, u32(u32, u32)> Tour__goal_count;

u32 SalesTally__add(u32 sales_tally, u32 r1, u32 r2, u32 r3) {
    u32 r0_7 = 0;
    u32 r0_10 = 0;
    u32 r4 = sales_tally + (r1 << 2);
    u32 r6 = *gptr<u32>(r4 + 0x10u);
    u32 r0_1 = *gptr<s8>(*tour_instance + 0x1cu);
    u32 r0_2 = record_value(r0_1, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0_2 == 1u) {
        *gptr<u32>(r4 + 0x10u) = *gptr<u32>(r4 + 0x10u) + r2;
        u32 goal_count_3 = Tour__goal_count(*tour_instance + 0x10u, r3);
        r1 = guest::cpu()->r[1];
        if (goal_count_3 == 0) {
            *gptr<u32>(r4 + 0x20u) = *gptr<u32>(r4 + 0x20u) + r2;
        }
    } else {
        if (r0_2 == 2u || r0_2 == 3u || r0_2 == 0xau) {
            u32 r0_5 = *tour_instance + 0x10u;
            r1 = *gptr<u8>(r0_5 + 0xdu);
            if (r1 != 0) {
                if (r1 == 1u) {
                    u32 is_empty = Item__is_empty(r3, r1);
                    if (is_empty != 0) {
                        r1 = (r2 << 7) - r2 * 3u;
                        r0_7 = *gptr<u32>(r4 + 0x10u) + (r1 << 3);
                    } else {
                        u32 r0_8 = Item__quarter_price(r3);
                        r1 = *gptr<u32>(r4 + 0x10u);
                        r0_7 = r0_8 * r2 + r1;
                    }
                    *gptr<u32>(r4 + 0x10u) = r0_7;
                    r0_10 = *gptr<u32>(r4 + 0x10u) != r6;
                    guest::cpu()->r[1] = r1;
                    return r0_10;
                }
                if (r1 != 2u) {
                    r0_10 = *gptr<u32>(r4 + 0x10u) != r6;
                    guest::cpu()->r[1] = r1;
                    return r0_10;
                }
                u32 goal_count_4 = Tour__goal_count(r0_5, r3);
                r1 = guest::cpu()->r[1];
                if (goal_count_4 == 0) {
                    return *gptr<u32>(r4 + 0x10u) != r6;
                }
            }
            r0_7 = *gptr<u32>(r4 + 0x10u) + r2;
            *gptr<u32>(r4 + 0x10u) = r0_7;
            r0_10 = *gptr<u32>(r4 + 0x10u) != r6;
            guest::cpu()->r[1] = r1;
            return r0_10;
        }
        *gptr<u32>(r4 + 0x10u) = *gptr<u32>(r4 + 0x10u) + r2;
    }
    r0_10 = *gptr<u32>(r4 + 0x10u) != r6;
    guest::cpu()->r[1] = r1;
    return r0_10;
}

}  // namespace d_001b7568
GUEST_EXPORT_FRAMED(0x001b7568, d_001b7568::SalesTally__add, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_001b7688: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Creates the singleton on a heap (arg 0), with its disposer, unless it exists.
namespace d_001b7688 {

inline constexpr u32 vtable_TourResult__SingletonDisposer_ = 0x008f9a24u;
inline guest::global<u32, 0x0095c71c> tour_result_instance;
inline guest::global<u32, 0x0095c720> tour_result_disposer;
inline constexpr guest::Function<0x00131280, u32(u32, u32, u32, u32)> allocate_on_heap_entry;
inline constexpr guest::Function<0x001320cc, u32(u32, u32, u32)> IDisposer__construct_in_heap;

void TourResult__create_instance(u32 singleton_disposer) {
    if (*tour_result_instance == 0) {
        u32 block_2 = allocate_on_heap_entry(0x3cu, singleton_disposer, 4u, guest::cpu()->r[3]);
        u32 r4_1 = block_2;
        if (block_2 == 0) {
            *tour_result_disposer = r4_1;
            r4_1 = 0u;
        } else {
            IDisposer__construct_in_heap(block_2, singleton_disposer, 3u);
            *gptr<u32>(block_2) = vtable_TourResult__SingletonDisposer_;
            *tour_result_disposer = block_2;
        }
        *tour_result_instance = r4_1;
    }
}

}  // namespace d_001b7688
GUEST_EXPORT_FRAMED(0x001b7688, d_001b7688::TourResult__create_instance, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001b7b90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// In area scene 9, marks the area visited once when its maps match and, in a network session, sends message 0x45.
namespace d_001b7b90 {

struct __attribute__((packed)) Local_001b7b90_r4_1 {
    u8 unknown_0[0x34];  // (not used here)
    u8 byte_34;
};
GUEST_OFFSET(Local_001b7b90_r4_1, byte_34, 0x34);

inline constexpr u32 tour_instance_address = 0x0095c6d0u;
inline guest::global<u32, 0x0095c6d0> tour_instance;
inline constexpr guest::Function<0x002f74c8, u32(u32)> current_scene_id;
inline constexpr guest::Function<0x00300904, u32(u32)> current_net_signed_value;
inline constexpr guest::Function<0x004e4510, u32(u32)> item_maps_match_in_area;
inline constexpr guest::Function<0x005b49e0, u32(u32)> scene_is_odd_after_81;
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> send_message;
inline constexpr guest::Function<0x00625690, u32(u32)> current_mode;
inline constexpr guest::Function<0x006c4280, u32(u32, u32, u32, u32)> record_value;

void report_area_visit(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = *tour_instance;
    if (r0_1 == 0) {
        return;
    }
    u32 r0_2 = *gptr<s8>(r0_1 + 0x1cu);
    u32 r0_3 = record_value(r0_2, r1, r2, r3);
    if (r0_3 != 9u) {
        return;
    }
    u32 scene_4 = current_scene_id(r0_3);
    u32 r0_5 = scene_is_odd_after_81(scene_4);
    if (r0_5 == 0) {
        return;
    }
    u32 scene_5 = current_scene_id(r0_5);
    u32 r0_7 = scene_5 - 0x81u;
    gptr<Local_001b7b90_r4_1> r4_1 = gptr<Local_001b7b90_r4_1>(r0 + u32(s32(r0_7 + (r0_7 >> 0x1f)) >> 1));
    u32 r0_8 = r4_1->byte_34;
    if (r0_8 != 0) {
        return;
    }
    u32 scene_6 = current_scene_id(r0_8);
    if (item_maps_match_in_area(scene_6) == 0) {
        return;
    }
    r4_1->byte_34 = 1;
    u32 r0_11 = current_net_signed_value(1u);
    if (r0_11 == 0) {
        return;
    }
    u32 mode = current_mode(r0_11);
    if (mode <= 1u) {
        return;
    }
    frame.release();
    send_message(0x45u, 4u, 0u, 0u);
    return;
}

}  // namespace d_001b7b90
GUEST_EXPORT(0x001b7b90, d_001b7b90::report_area_visit);

// f_001b88c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Drops a user of the save archive and unmounts it when it was the last.
namespace d_001b88c0 {

inline guest::global<u8, 0x00951481> save_archive_mounted;
inline guest::global<u32, 0x00951488> save_archive_mounted_b;
inline constexpr guest::Function<0x00135520, u32(u32)> cfl_unmount_135520;

u32 SaveArchive__unmount(u32 r0_unused, u32 r1) {
    u32 r0_1 = *save_archive_mounted_b - 1u;
    *save_archive_mounted_b = r0_1;
    if (s32(r0_1) > 0) {
        return r0_1;
    }
    u32 r0_2 = cfl_unmount_135520(0x8575c8u);
    u32 r1_1 = r0_2 & 0x80000000u;
    u32 res_1 = r1_1;
    u32 vf_1 = (r1_1 & (r1_1 ^ res_1)) >> 0x1f;
    if (s32(r1_1) < 0) {
        r1_1 = r0_2 & 0x3fc00u;
    }
    if (res_1 >> 0x1f != vf_1) {
        r1_1 >>= 0xa;
    }
    *save_archive_mounted = 0;
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_001b88c0
GUEST_EXPORT_FRAMED(0x001b88c0, d_001b88c0::SaveArchive__unmount, 0x4010);  // pushes {r4, lr} first, as the original

// f_001b8978: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Closes the three files of the current slot, then unmounts the archive when mounted; the first error.
namespace d_001b8978 {

inline constexpr u32 save_archive_files_address = 0x009514b0u;
inline guest::global<u8, 0x00951480> input_lock_state;
inline constexpr guest::Function<0x001b8008, u32(u32, u32, u32)> sead__SafeStringBase_char___SafeStringBase_001b8008;
inline constexpr guest::Function<0x001b88c0, u32(u32, u32)> SaveArchive__unmount;
inline constexpr guest::Function<0x001b9254, u32(u32, u32, u32)> InputLock__acquire;
inline constexpr guest::Function<0x002ff8b0, u32(u32, u32, u32, u32)> player_slot_byte;

u32 SaveArchive__close_player_files(u32 r0_unused, u32 r1, u32 r2) {
    u32 slot_byte = player_slot_byte(4u, r1, r2, guest::cpu()->r[3]);
    u32 r5 = slot_byte;
    u32 r0_2 = InputLock__acquire(0u, 0u, 0u);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    u32 r6 = r0_2;
    if (r0_2 == 1u) {
        u32 r7 = save_archive_files_address;
        u32 i = 0u;
        do {
            u32 r0_4 = sead__SafeStringBase_char___SafeStringBase_001b8008(gptr<u32>(gptr<u32>(r7)[i])[r5], r1, r2);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            if (r0_4 != 1u) {
                r6 = r0_4;
            }
            i += 1u;
            guest::preempt();
        } while (s32(i) < 3);
        u32 r0_5 = *input_lock_state;
        if (r0_5 == 1u) {
            SaveArchive__unmount(r0_5, r1);
            r1 = guest::cpu()->r[1];
        }
        r0_2 = r6;
    }
    guest::cpu()->r[1] = r1;
    return r0_2;
}

}  // namespace d_001b8978
GUEST_EXPORT_FRAMED(0x001b8978, d_001b8978::SaveArchive__close_player_files, 0x41f0);  // pushes {i, r5, r6, r7, r8, lr} first, as the original

// f_001b8a08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Maps the file system result to the game's code, reporting fatal ones.
namespace d_001b8a08 {

struct __attribute__((packed)) SaveArchive {
    u32 word_0;
};
GUEST_OFFSET(SaveArchive, word_0, 0x0);

inline constexpr guest::Function<0x0012f598, u32(u32, u32, u32, u32)> report_fatal_result_with_info;

u32 SaveArchive__check_result(gptr<SaveArchive> save_archive) {
    u32 r2 = 0;
    u32 r0_12 = 0;
    u32 r1_5 = 0;
    u32 r0_1 = save_archive->word_0;
    u32 r1_1 = r0_1 & 0x80000000u;
    if (s32(r1_1) >= 0) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    u32 r1_2 = (r0_1 & 0x3fc00u) >> 0xa;
    if (r1_2 == 0x11u) {
        u32 r0_2 = r0_1 & 0x3ffu;
        if (s32(r0_2) >= 0x64 && s32(r0_2) <= 0xb3) {
            guest::cpu()->r[1] = r1_2;
            return 5u;
        }
    }
    u32 r0_3 = save_archive->word_0;
    u32 r1_3 = (r0_3 & 0x3fc00u) >> 0xa;
    if (r1_3 == 0x11u) {
        u32 r0_4 = r0_3 & 0x3ffu;
        if (s32(r0_4) >= 0xb4 && s32(r0_4) <= 0xc7) {
            guest::cpu()->r[1] = r1_3;
            return 8u;
        }
    }
    u32 r0_5 = save_archive->word_0;
    if ((r0_5 & 0x3fc00u) >> 0xa == 0x11u) {
        u32 r0_6 = r0_5 & 0x3ffu;
        if (s32(r0_6) >= s32(0x186u) && s32(r0_6) < 0x190) {
            guest::cpu()->r[1] = 0x186u;
            return 3u;
        }
    }
    u32 r0_7 = save_archive->word_0;
    if ((r0_7 & 0x3fc00u) >> 0xa == 0x11u) {
        u32 r0_8 = r0_7 & 0x3ffu;
        if (s32(r0_8) >= 0xe6 && s32(r0_8) < 0x154) {
            u32 r0_9 = save_archive->word_0;
            u32 r1_4 = (r0_9 & 0x3fc00u) >> 0xa;
            if (r1_4 != 0x11u) {
                guest::cpu()->r[1] = r1_4;
                return 8u;
            }
            u32 r0_10 = r0_9 & 0x3ffu;
            u32 nf_1 = r0_10 - 0x118u >> 0x1f;
            u32 vf_1 = ((r0_10 ^ 0x118u) & (r0_10 ^ r0_10 - 0x118u)) >> 0x1f;
            if (nf_1 == vf_1) {
                r1_4 = 0x14eu;
                u32 res_2 = r1_4 - r0_10;
                nf_1 = res_2 >> 0x1f;
                vf_1 = ((r1_4 ^ r0_10) & (r1_4 ^ res_2)) >> 0x1f;
            }
            if (nf_1 != vf_1) {
                guest::cpu()->r[1] = r1_4;
                return 8u;
            }
            u32 r0_11 = save_archive->word_0;
            r2 = r0_11 >> 0x1f;
            if (r2 != 0) {
                report_fatal_result_with_info(r0_11, 0x1b8b10u, r2, guest::cpu()->r[3]);
            }
            goto L_1b8b54;
        }
    }
    r0_12 = save_archive->word_0;
    r1_5 = (r0_12 & 0x3fc00u) >> 0xa;
    if (r1_5 == 0x11u) {
        u32 r0_13 = r0_12 & 0x3ffu;
        if (s32(r0_13) >= 0xc8 && s32(r0_13) <= 0xdb) {
            guest::cpu()->r[1] = r1_5;
            return 4u;
        }
    }
L_1b8b54:;
    u32 info = 0x1b8b5cu;
    u32 r0_14 = save_archive->word_0;
    if ((r0_14 >> 0x1f) != 0) {
        report_fatal_result_with_info(r0_14, info, r2, guest::cpu()->r[3]);
        info = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = info;
    return 8u;
}

}  // namespace d_001b8a08
GUEST_EXPORT_FRAMED(0x001b8a08, d_001b8a08::SaveArchive__check_result, 0x4010);  // pushes {r4, lr} first, as the original

// f_001b9400: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Writes the save counter (when asked) and commits the save archive; 8 on failure, 1 on success.
namespace d_001b9400 {

struct __attribute__((packed)) SaveData {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(SaveData, word_0, 0x0);
GUEST_OFFSET(SaveData, word_4, 0x4);

inline constexpr u32 save_archive_address = 0x0095bf70u;
inline guest::global<u8, 0x00951480> input_lock_state;
inline guest::global<u8, 0x00951481> save_archive_mounted;
inline guest::global<u32, 0x0095bf70> save_archive;
inline constexpr guest::Function<0x001b8e44, u32(u32, u32, u32, u32)> sead__SafeStringBase_char___SafeStringBase_001b8e44;
inline constexpr guest::Function<0x002fb328, u32(u32)> get_save_data;
inline constexpr guest::Function<0x00345bc4, u32(u32)> Fs__file_size;
inline constexpr guest::Function<0x003463a4, u32(u32, u32, u32, u32)> SaveFile__create;
inline constexpr guest::Function<0x005ca648, u32(u32, u32, u32, u32)> increment_save_counter;
inline constexpr guest::Function<0x005cad0c, u32(u32)> read_save_data_pointer;

struct __attribute__((packed)) SaveArchiveCommitFrame {
    u32 word_0;
};
GUEST_OFFSET(SaveArchiveCommitFrame, word_0, 0x0);
GUEST_SIZE(SaveArchiveCommitFrame, 0x4);

u32 SaveArchive__commit(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<SaveArchiveCommitFrame> frame;  // the original's stack frame
    u32 r0_7 = 0;
    frame->word_0 = r3;
    if (r0 != 0) {
        u32 r0_2 = read_save_data_pointer(increment_save_counter(r0, r1, r2, r3));
        frame->word_0 = 0;
        u32 r0_4 = sead__SafeStringBase_char___SafeStringBase_001b8e44(*save_archive, 0u, r0_2, 8u);
        if (r0_4 != 1u) {
            return r0_4;
        }
    }
    u32 r1_3 = *input_lock_state;
    if (r1_3 == 1u) {
        u32 r0_5 = *save_archive_mounted;
        if (r0_5 != 0) {
            if (r0 != 0) {
                gptr<SaveData> save_data = gptr<SaveData>(get_save_data(r0_5));
                r0_7 = SaveFile__create(0x1b94a8u, r1_3, save_data->word_0, save_data->word_4);
            } else {
                r0_7 = Fs__file_size(0x1b94a8u);
            }
            r1_3 = r0_7 & 0x80000000u;
            if (s32(r1_3) < 0) {
                guest::cpu()->r[1] = (r0_7 & 0x3fc00u) >> 0xa;
                return 8u;
            }
        }
    }
    guest::cpu()->r[1] = r1_3;
    return 1u;
}

}  // namespace d_001b9400
GUEST_EXPORT_FRAMED(0x001b9400, d_001b9400::SaveArchive__commit, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_001b94b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Closes every save file and unmounts the archive, reporting fatal errors.
namespace d_001b94b0 {

inline constexpr u32 boot_resources_dirty_address = 0x009500e1u;
inline constexpr u32 input_lock_state_address = 0x00951480u;
inline constexpr u32 save_archive_open_files_address = 0x00951494u;
inline constexpr u32 save_archive_files_address = 0x009514b0u;
inline guest::global<u8, 0x009500e0> boot_resources_loaded;
inline guest::global<u8, 0x009500e1> boot_resources_dirty;
inline constexpr guest::Function<0x0012f598, u32(u32, u32, u32)> report_fatal_result_with_info;
inline constexpr guest::Function<0x001b8008, u32(u32, u32, u32)> sead__SafeStringBase_char___SafeStringBase_001b8008;
inline constexpr guest::Function<0x001b88c0, u32(u32, u32, u32, u32)> SaveArchive__unmount;
inline constexpr guest::Function<0x001b9254, u32(u32, u32, u32, u32)> InputLock__acquire;
inline constexpr guest::Function<0x001b94b0, u32(u32, u32, u32)> call_SaveArchive__close_all;
inline constexpr guest::Function<0x00345c20, u32(u32, u32, u32, u32)> Fs__open_extdata;

void SaveArchive__close_all(u32 r0_unused, u32 r1, u32 r2) {
    u32 i = 0;
    u32 j = 0;
    u32 r6 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 res_1 = 0;
    u32 r8 = input_lock_state_address;
    u32 r0_1 = *gptr<u8>(r8);
    if (r0_1 == 2u) {
        *gptr<u8>(r8) = 1;
    } else {
        if (r0_1 == 0) {
            r6 = 1u;
            goto L_1b952c;
        }
        if (r0_1 != 1u) {
            goto L_1b9514;
        }
    }
    r0_2 = *gptr<u8>(r8 + 1u);
    if (r0_2 != 0) {
        SaveArchive__unmount(r0_2, r1, r2, guest::cpu()->r[3]);
    }
    r0_3 = Fs__open_extdata(0x10u, 1u, 1u, guest::cpu()->r[3]);
    res_1 = r0_3 & 0x80000000u;
    if (s32(res_1) < 0) {
        u32 r2_1 = r0_3 >> 0x1f;
        if (r2_1 != 0) {
            report_fatal_result_with_info(r0_3, 0x1b9510u, r2_1);
        }
    }
L_1b9514:;
    *boot_resources_loaded = 0;
    *boot_resources_dirty = 0;
    guest::cpu()->r[1] = boot_resources_dirty_address;
    return;
L_1b952c:;
    u32 r0_4 = InputLock__acquire(0u, 0u, 0u, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_4 == 1u) {
        j = save_archive_open_files_address;
        i = 0u;
    } else {
        if (r0_4 == 3u) {
            call_SaveArchive__close_all(r0_4, r1, r2);
        }
        guest::preempt();
        goto L_1b9514;
    }
    do {
        sead__SafeStringBase_char___SafeStringBase_001b8008(gptr<u32>(j)[i], r1, r2);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        i += 1u;
        guest::preempt();
    } while (s32(i) < 7);
    u32 r7 = save_archive_files_address;
    j = 0u;
    do {
        i = 0u;
        do {
            sead__SafeStringBase_char___SafeStringBase_001b8008(gptr<u32>(gptr<u32>(r7)[i])[j], r1, r2);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            i += 1u;
            guest::preempt();
        } while (s32(i) < 3);
        j += 1u;
        guest::preempt();
    } while (s32(j) < 4);
    if (r6 != 0) {
        u32 r0_7 = *gptr<u8>(r8);
        if (r0_7 != 0) {
            if (r0_7 == 1u) {
                SaveArchive__unmount(r0_7, r1, r2, guest::cpu()->r[3]);
            }
            guest::preempt();
            goto L_1b9514;
        }
        guest::preempt();
        goto L_1b9514;
    }
    guest::preempt();
    goto L_1b9514;
}

}  // namespace d_001b94b0
GUEST_EXPORT_FRAMED(0x001b94b0, d_001b94b0::SaveArchive__close_all, 0x41f0);  // pushes {i, j, r6, r7, r8, lr} first, as the original

// f_001b95f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether a file (arg 0) exists in the save archive, mounting it (under the input lock) when asked
// (arg 1).
namespace d_001b95f8 {

inline constexpr u32 vtable_sead__SafeStringBase_char__rec = 0x009047f8u;
inline guest::global<u8, 0x00951480> input_lock_state;
inline constexpr guest::Function<0x001b85c0, u32(u32, u32, u32, u32)> sead__SafeStringBase_char___SafeStringBase_001b85c0;
inline constexpr guest::Function<0x001b88c0, u32(u32, u32)> SaveArchive__unmount;
inline constexpr guest::Function<0x001b9254, u32(u32, u32, u32, u32)> InputLock__acquire;
inline constexpr guest::Function<0x0053dffc, u32(u32, u32, u32)> FileDevice__file_exists;

struct __attribute__((packed)) SaveFileExistsFrame {
    u32 object_0_vtable;
    u32 word_4;
    u8 unknown_8[0x8];  // (not read or written by name)
    u8 byte_10;
    u8 unknown_11[0x7];  // (not read or written by name)
};
GUEST_OFFSET(SaveFileExistsFrame, object_0_vtable, 0x0);
GUEST_OFFSET(SaveFileExistsFrame, word_4, 0x4);
GUEST_OFFSET(SaveFileExistsFrame, byte_10, 0x10);
GUEST_SIZE(SaveFileExistsFrame, 0x18);

u32 save_file_exists(u32 r0, u32 r1, u32 r2) {
    guest::StackFrameOf<SaveFileExistsFrame> frame;  // the original's stack frame
    u32 r4_1 = r1;
    u32 r6_1 = r0;
    if (r1 != 0) {
        r0 = InputLock__acquire(0u, 0u, 0u, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0 != 1u) {
            return 0u;
        }
    }
    u32 r5_1 = 0u;
    u32 file_device = sead__SafeStringBase_char___SafeStringBase_001b85c0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (file_device != 0) {
        frame->object_0_vtable = vtable_sead__SafeStringBase_char__rec;
        frame->word_4 = r6_1;
        u32 size_2 = FileDevice__file_exists(file_device, frame.at(0x10).addr(), frame.at(0).addr());
        r1 = guest::cpu()->r[1];
        if (size_2 != 0) {
            r5_1 = s8(frame->byte_10);
        }
    }
    if (r4_1 != 0) {
        u32 r0_4 = *input_lock_state;
        if (r0_4 == 1u) {
            SaveArchive__unmount(r0_4, r1);
            r1 = guest::cpu()->r[1];
        }
    }
    guest::cpu()->r[1] = r1;
    return r5_1;
}

}  // namespace d_001b95f8
GUEST_EXPORT_FRAMED(0x001b95f8, d_001b95f8::save_file_exists, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001b96a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Opens the main save file.
namespace d_001b96a0 {

inline constexpr u32 save_archive_address = 0x0095bf70u;
inline guest::global<u32, 0x0088e5bc> global_0088e5bc;
inline guest::global<u32, 0x0095bf70> save_archive;
inline constexpr guest::Function<0x001b8b74, u32(u32, u32, u32, u32)> sead__FileHandle__FileHandle;
inline constexpr guest::Function<0x005cad0c, u32(u32, u32, u32, u32)> read_save_data_pointer;

u32 SaveArchive__open_main_file(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = read_save_data_pointer(r0, r1, r2, r3);
    u32 r3_1 = *global_0088e5bc;
    u32 r0_2 = *save_archive;
    frame.release();
    return sead__FileHandle__FileHandle(r0_2, 0u, r0_1, r3_1);
}

}  // namespace d_001b96a0
GUEST_EXPORT(0x001b96a0, d_001b96a0::SaveArchive__open_main_file);

// f_001b97dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Closes the 7 shared files and the 3 files of each of the 4 slots, then unmounts the archive (when asked and
// mounted).
namespace d_001b97dc {

inline constexpr u32 save_archive_open_files_address = 0x00951494u;
inline constexpr u32 save_archive_files_address = 0x009514b0u;
inline guest::global<u8, 0x00951480> input_lock_state;
inline constexpr guest::Function<0x001b8008, u32(u32, u32, u32, u32)> sead__SafeStringBase_char___SafeStringBase_001b8008;
inline constexpr guest::Function<0x001b88c0, u32(u32, u32)> SaveArchive__unmount;
inline constexpr guest::Function<0x001b9254, u32(u32, u32, u32, u32)> InputLock__acquire;
inline constexpr guest::Function<0x001b94b0, u32(u32, u32, u32)> SaveArchive__close_all;

void SaveArchive__close_files(u32 save_archive, u32 r1, u32 r2) {
    u32 r7 = save_archive;
    if (save_archive != 0) {
        u32 r0_1 = InputLock__acquire(0u, 0u, 0u, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0_1 != 1u) {
            if (r0_1 == 3u) {
                SaveArchive__close_all(r0_1, r1, r2);
                r1 = guest::cpu()->r[1];
            }
            guest::cpu()->r[1] = r1;
            return;
        }
    }
    u32 j = save_archive_open_files_address;
    u32 i = 0u;
    do {
        u32 r0_3 = sead__SafeStringBase_char___SafeStringBase_001b8008(gptr<u32>(j)[i], r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0_3 != 1u) {
        }
        i += 1u;
        guest::preempt();
    } while (s32(i) < 7);
    u32 r8 = save_archive_files_address;
    j = 0u;
    do {
        i = 0u;
        do {
            u32 r0_5 = sead__SafeStringBase_char___SafeStringBase_001b8008(gptr<u32>(gptr<u32>(r8)[i])[j], r1, r2, guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            if (r0_5 != 1u) {
            }
            i += 1u;
            guest::preempt();
        } while (s32(i) < 3);
        j += 1u;
        guest::preempt();
    } while (s32(j) < 4);
    if (r7 != 0) {
        u32 r0_6 = *input_lock_state;
        if (r0_6 == 1u) {
            SaveArchive__unmount(r0_6, r1);
            r1 = guest::cpu()->r[1];
        }
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_001b97dc
GUEST_EXPORT_FRAMED(0x001b97dc, d_001b97dc::SaveArchive__close_files, 0x41f0);  // pushes {i, j, r6, r7, r8, lr} first, as the original

// f_001b9a88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The genotype index of the flower genes: the number of set alleles in each of the four 2-bit loci, as base-3 digits
// (81 genotypes).
namespace d_001b9a88 {


u32 FlowerGenes__index(u32 flower_genes) {
    u32 r1_1 = (((flower_genes & 0x10u) >> 4) + ((flower_genes & 0x20u) >> 5)) * 9u + (((flower_genes & 0x40u) >> 6) + ((flower_genes & 0x80u) >> 7)) * 9u * 3u + (((flower_genes & 4u) >> 2) + ((flower_genes & 8u) >> 3)) * 3u;
    guest::cpu()->r[1] = r1_1;
    return (flower_genes & 1u) + ((flower_genes & 2u) >> 1) + r1_1;
}

}  // namespace d_001b9a88
GUEST_EXPORT(0x001b9a88, d_001b9a88::FlowerGenes__index);

// f_001b9ae4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The flower item index of the species (`kind`) with the genes, from the species' genotype table; the species' first
// flower when out of range.
namespace d_001b9ae4 {

inline constexpr guest::Function<0x001b9a88, u32(u32)> FlowerGenes__index;

u32 FlowerGenes__flower_index(u32 flower_genes, u32 r1) {
    u32 res_1 = flower_genes - 0xeu;
    u32 zf_1 = res_1 == 0;
    if (!zf_1) {
        if (zf_1 || (res_1 >> 0x1f) != (((flower_genes ^ 0xeu) & (flower_genes ^ res_1)) >> 0x1f)) {
            if (flower_genes == 0xbu) {
                u32 r0_1 = FlowerGenes__index(r1);
                if (r0_1 < 0x1bu) {
                    return gptr<u16>(0x865168u)[r0_1];
                }
                return 0x9fu;
            }
            if (flower_genes == 0xcu) {
                u32 r0_3 = FlowerGenes__index(r1);
                return r0_3 >= 0x1bu ? 0xa6u : u32(gptr<u16>(0x86519eu)[r0_3]);
            }
            if (flower_genes != 0xdu) {
                return 0x9fu;
            }
        } else {
            if (flower_genes == 0x10u) {
                u32 r0_5 = FlowerGenes__index(r1);
                return r0_5 >= 9u ? 0xbbu : u32(gptr<u16>(0x8652acu)[r0_5]);
            }
            if (flower_genes == 0x1bu) {
                u32 r0_7 = FlowerGenes__index(r1);
                return r0_7 >= 0x1bu ? 0xbeu : u32(gptr<u16>(0x8652beu)[r0_7]);
            }
            if (flower_genes != 0x1cu) {
                return 0x9fu;
            }
            u32 r0_9 = FlowerGenes__index(r1);
            return r0_9 >= 0x1bu ? 0xc4u : u32(gptr<u16>(0x8652f4u)[r0_9]);
        }
        u32 r0_11 = FlowerGenes__index(r1);
        return r0_11 >= 0x1bu ? 0xacu : u32(gptr<u16>(0x8651d4u)[r0_11]);
    }
    u32 r0_13 = FlowerGenes__index(r1);
    return r0_13 >= 0x51u ? 0xb2u : u32(gptr<u16>(0x86520au)[r0_13]);
}

}  // namespace d_001b9ae4
GUEST_EXPORT_FRAMED(0x001b9ae4, d_001b9ae4::FlowerGenes__flower_index, 0x4000);  // pushes {lr} first, as the original

// f_001b9c34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The default genes of flower item 0xbe + n (n below 6) from the table; 0 otherwise.
namespace d_001b9c34 {


u32 flower_default_genes_be(u32 r0) {
    u32 r0_1 = r0 - 0xbeu;
    return r0_1 >= 6u ? 0u : u32(gptr<u16>(0x865360u)[r0_1]);
}

}  // namespace d_001b9c34
GUEST_EXPORT(0x001b9c34, d_001b9c34::flower_default_genes_be);

// f_001b9c54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The default genes of flower item 0xb2 + n (n below 8) from the table; 0 otherwise.
namespace d_001b9c54 {


u32 flower_default_genes_b2(u32 r0) {
    u32 r0_1 = r0 - 0xb2u;
    return r0_1 >= 8u ? 0u : u32(gptr<u16>(0x865350u)[r0_1]);
}

}  // namespace d_001b9c54
GUEST_EXPORT(0x001b9c54, d_001b9c54::flower_default_genes_b2);

// f_001b9c74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The default genes of flower item 0xa6 + n (n below 6) from the table; 0 otherwise.
namespace d_001b9c74 {


u32 flower_default_genes_a6(u32 r0) {
    u32 r0_1 = r0 - 0xa6u;
    return r0_1 >= 6u ? 0u : u32(gptr<u16>(0x865338u)[r0_1]);
}

}  // namespace d_001b9c74
GUEST_EXPORT(0x001b9c74, d_001b9c74::flower_default_genes_a6);

// f_001b9c94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The default genes of flower item 0x9f + n (n below 7) from the table; 0 otherwise.
namespace d_001b9c94 {


u32 flower_default_genes_9f(u32 r0) {
    u32 r0_1 = r0 - 0x9fu;
    return r0_1 >= 7u ? 0u : u32(gptr<u16>(0x86532au)[r0_1]);
}

}  // namespace d_001b9c94
GUEST_EXPORT(0x001b9c94, d_001b9c94::flower_default_genes_9f);

// f_001b9cb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The default genes of flower item 0xac + n (n below 6) from the table; 0 otherwise.
namespace d_001b9cb4 {


u32 flower_default_genes_ac(u32 r0) {
    u32 r0_1 = r0 - 0xacu;
    return r0_1 >= 6u ? 0u : u32(gptr<u16>(0x865344u)[r0_1]);
}

}  // namespace d_001b9cb4
GUEST_EXPORT(0x001b9cb4, d_001b9cb4::flower_default_genes_ac);

// f_001b9cd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The default genes of flower item 0xc4 + n (n below 4) from the table; 0 otherwise.
namespace d_001b9cd4 {


u32 flower_default_genes_c4(u32 r0) {
    u32 r0_1 = r0 - 0xc4u;
    return r0_1 >= 4u ? 0u : u32(gptr<u16>(0x865160u)[r0_1]);
}

}  // namespace d_001b9cd4
GUEST_EXPORT(0x001b9cd4, d_001b9cd4::flower_default_genes_c4);

// f_001b9cf4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The default genes of flower item 0xbb + n (n below 3) from the table; 0 otherwise.
namespace d_001b9cf4 {


u32 flower_default_genes_bb(u32 r0) {
    u32 r0_1 = r0 - 0xbbu;
    return r0_1 >= 3u ? 0u : u32(gptr<u16>(0x86515au)[r0_1]);
}

}  // namespace d_001b9cf4
GUEST_EXPORT(0x001b9cf4, d_001b9cf4::flower_default_genes_bb);

// f_001b9d14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The genes of a child of the two parents: for each of the four loci, a random outcome of the parents' allele counts
// from the cross tables.
namespace d_001b9d14 {

inline constexpr u32 global_009528b8_address = 0x009528b8u;
inline constexpr guest::Function<0x002fc25c, u32(u32, u32, u32, u32)> second_random_below;

u32 FlowerGenes__breed(u32 flower_genes, u32 r1) {
    u32 r6 = 0u;
    u32 r8 = flower_genes;
    u32 r9 = r1;
    u32 r10 = global_009528b8_address;
    u32 r4 = r6;
    u32 i = r6;
    do {
        u32 r0_1 = lsr_r(r9, r4 & 0xff);
        u32 r1_1 = lsr_r(r8, r4 & 0xff);
        u32 r2_1 = r0_1 & 1u;
        u32 r3_1 = r1_1 & 1u;
        u32 r1_2 = r3_1 + ((r1_1 & 2u) >> 1);
        u32 r7_1 = r1_2 + (r2_1 + ((r0_1 & 2u) >> 1)) * 3u;
        u32 r0_2 = second_random_below(4u, r1_2, r2_1, r3_1);
        i += 1u;
        u32 r0_3 = lsl_r(u32(*gptr<u8>(gptr<u32>(r10)[r7_1] + r0_2)), r4 & 0xff) | r6;
        r4 = uxth(r4 + 2u);
        r6 = uxth(r0_3);
        guest::preempt();
    } while (i < 4u);
    return r6;
}

}  // namespace d_001b9d14
GUEST_EXPORT_FRAMED(0x001b9d14, d_001b9d14::FlowerGenes__breed, 0x47f0);  // pushes {r4, i, r6, r7, r8, r9, r10, lr} first, as the original

// f_001ba7c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001ba7c0 {

struct __attribute__((packed)) Local_001ba7c0_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001ba7c0_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_001ba7c0_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_001ba7c0_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001ba7c0_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_001ba7c0_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_001ba7c0_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001ba7c0_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_001ba7c0_ea_3, word_4, 0x4);

struct __attribute__((packed)) Local_001ba7c0_r0_7 {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
    float float_10;
    float float_14;
};
GUEST_OFFSET(Local_001ba7c0_r0_7, float_0, 0x0);
GUEST_OFFSET(Local_001ba7c0_r0_7, float_4, 0x4);
GUEST_OFFSET(Local_001ba7c0_r0_7, float_8, 0x8);
GUEST_OFFSET(Local_001ba7c0_r0_7, float_c, 0xc);
GUEST_OFFSET(Local_001ba7c0_r0_7, float_10, 0x10);
GUEST_OFFSET(Local_001ba7c0_r0_7, float_14, 0x14);

inline constexpr u32 vtable_sead__FixedSafeString_256_ = 0x009048b0u;
inline constexpr u32 work_heap_address = 0x00952cacu;
inline constexpr u32 default_params_3c_value_address = 0x00a185a8u;
inline constexpr u32 default_params_38_value_address = 0x00a185e4u;
inline guest::global<u8, 0x008c9f1c> empty_string;
inline guest::global<u32, 0x00952cac> work_heap;
inline guest::global<u32, 0x00a18590> default_params_a;
inline guest::global<u32, 0x00a18594> default_params_b;
inline guest::global<u32, 0x00a18598> default_params_c;
inline guest::global<u32, 0x00a1859c> default_params_d;
inline guest::global<u32, 0x00a185a0> default_params_e;
inline guest::global<u32, 0x00a185a4> default_params_f;
inline constexpr guest::Function<0x0012ca50, u32(u32)> construct_font_source;
inline constexpr guest::Function<0x0013864c, u32(u32, u32, u32)> Handle__release;
inline constexpr guest::Function<0x0013bb80, u32(u32, u32, u32)> do_nothing_13bb80;
inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32)> copy_bytes_at_any_alignment;
inline constexpr guest::Function<0x00544f18, u32(u32)> print_finish;
inline constexpr guest::Function<0x00544fec, u32(u32, u32)> print_append;
inline constexpr guest::Function<0x0054a644, u32(u32, u32, u32, u32)> construct_print_output;
inline constexpr guest::Function<0x0056a4a4, u32(u32, u32, u32)> file_exists;
inline constexpr guest::Function<0x005bf790, u32(u32, u32, u32, u32)> source_start;

struct __attribute__((packed)) LoadCatalogLightFrame {
    u32 object_0_vtable;
    u8 unknown_4[0x8];  // (not read or written by name)
    u8 byte_c;
    u8 unknown_d[0xfe];  // (not read or written by name)
    u8 byte_10b;
    u8 unknown_10c[0x8];  // (not read or written by name)
    u32 word_114;
    u8 unknown_118[0x18];  // (not read or written by name)
};
GUEST_OFFSET(LoadCatalogLightFrame, object_0_vtable, 0x0);
GUEST_OFFSET(LoadCatalogLightFrame, byte_c, 0xc);
GUEST_OFFSET(LoadCatalogLightFrame, byte_10b, 0x10b);
GUEST_OFFSET(LoadCatalogLightFrame, word_114, 0x114);
GUEST_SIZE(LoadCatalogLightFrame, 0x130);

u32 load_catalog_light(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3, float S0, float S1, float S2, float S3, float S4, float S5) {
    guest::StackFrameOf<LoadCatalogLightFrame> frame;  // the original's stack frame
    gptr<Local_001ba7c0_ea_1> ea_1 = gptr<Local_001ba7c0_ea_1>(frame.at(4).addr());
    ea_1->word_0 = frame.at(0xc).addr();
    ea_1->word_4 = 0x100;
    u32 r2_1 = *empty_string;
    frame->byte_10b = u8(r2_1);
    u32 r0_1 = *empty_string;
    frame->object_0_vtable = vtable_sead__FixedSafeString_256_;
    frame->byte_c = u8(r0_1);
    u32 r0_2 = frame.at(0x110).addr();
    construct_print_output(r0_2, frame.at(0).addr(), r2_1, r3);
    print_append(r0_2, 0x1baa00u);
    print_finish(r0_2);
    u32 r6_1 = frame.at(0).addr();
    construct_font_source(frame.at(0x110).addr());
    u32 exists = file_exists(r6_1, guest::cpu()->r[1], guest::cpu()->r[2]);
    if (exists != 0) {
        if (source_start(frame.at(0x110).addr(), r6_1, *work_heap, 0x20u) != 0) {
            gptr<Local_001ba7c0_r0_7> r0_7 = gptr<Local_001ba7c0_r0_7>(frame->word_114);
            float S0_6 = r0_7->float_0;
            float S1_6 = r0_7->float_4;
            float S2_6 = r0_7->float_8;
            float S3_6 = r0_7->float_c;
            float S4_6 = r0_7->float_10;
            float S5_6 = r0_7->float_14;
            *default_params_a = std::bit_cast<u32>(S0_6);
            *default_params_b = std::bit_cast<u32>(S1_6);
            *default_params_c = std::bit_cast<u32>(S2_6);
            *default_params_d = std::bit_cast<u32>(S3_6);
            *default_params_e = std::bit_cast<u32>(S4_6);
            *default_params_f = std::bit_cast<u32>(S5_6);
            guest::cpu()->s[0] = S0_6;
            guest::cpu()->s[1] = S1_6;
            guest::cpu()->s[2] = S2_6;
            guest::cpu()->s[3] = S3_6;
            guest::cpu()->s[4] = S4_6;
            guest::cpu()->s[5] = S5_6;
            Handle__release(frame.at(0x110).addr(), guest::cpu()->r[1], guest::cpu()->r[2]);
        }
    }
    do_nothing_13bb80(frame.at(0x110).addr(), guest::cpu()->r[1], guest::cpu()->r[2]);
    gptr<Local_001ba7c0_ea_2> ea_2 = gptr<Local_001ba7c0_ea_2>(frame.at(4).addr());
    ea_2->word_0 = frame.at(0xc).addr();
    ea_2->word_4 = 0x100;
    u32 r2_8 = *empty_string;
    frame->byte_10b = u8(r2_8);
    u32 r0_10 = *empty_string;
    frame->object_0_vtable = vtable_sead__FixedSafeString_256_;
    frame->byte_c = u8(r0_10);
    u32 r0_11 = frame.at(0x110).addr();
    construct_print_output(r0_11, frame.at(0).addr(), r2_8, guest::cpu()->r[3]);
    print_append(r0_11, 0x1baa1cu);
    print_finish(r0_11);
    u32 r5_1 = frame.at(0).addr();
    construct_font_source(frame.at(0x110).addr());
    u32 exists_2 = file_exists(r5_1, guest::cpu()->r[1], guest::cpu()->r[2]);
    if (exists_2 != 0) {
        if (source_start(frame.at(0x110).addr(), r5_1, *work_heap, 0x20u) != 0) {
            copy_bytes_at_any_alignment(default_params_3c_value_address, frame->word_114, 0x3cu);
            Handle__release(frame.at(0x110).addr(), guest::cpu()->r[1], guest::cpu()->r[2]);
        }
    }
    do_nothing_13bb80(frame.at(0x110).addr(), guest::cpu()->r[1], guest::cpu()->r[2]);
    gptr<Local_001ba7c0_ea_3> ea_3 = gptr<Local_001ba7c0_ea_3>(frame.at(4).addr());
    ea_3->word_0 = frame.at(0xc).addr();
    ea_3->word_4 = 0x100;
    u32 r2_16 = *empty_string;
    frame->byte_10b = u8(r2_16);
    u32 r0_18 = *empty_string;
    frame->object_0_vtable = vtable_sead__FixedSafeString_256_;
    frame->byte_c = u8(r0_18);
    u32 r0_19 = frame.at(0x110).addr();
    construct_print_output(r0_19, frame.at(0).addr(), r2_16, guest::cpu()->r[3]);
    print_append(r0_19, 0x1baa34u);
    print_finish(r0_19);
    u32 r4_1 = frame.at(0).addr();
    construct_font_source(frame.at(0x110).addr());
    u32 r2_20 = guest::cpu()->r[2];
    u32 exists_3 = file_exists(r4_1, guest::cpu()->r[1], r2_20);
    if (exists_3 != 0) {
        r2_20 = *work_heap;
        exists_3 = source_start(frame.at(0x110).addr(), r4_1, r2_20, 0x20u);
        if (exists_3 != 0) {
            copy_bytes_at_any_alignment(default_params_38_value_address, frame->word_114, 0x38u);
            r2_20 = guest::cpu()->r[2];
            exists_3 = frame.at(0x110).addr();
            Handle__release(exists_3, guest::cpu()->r[1], r2_20);
        }
    }
    do_nothing_13bb80(exists_3, guest::cpu()->r[1], r2_20);
    return frame.at(0x110).addr();
}

}  // namespace d_001ba7c0
GUEST_EXPORT_FRAMED(0x001ba7c0, d_001ba7c0::load_catalog_light, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_001baa4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Loads the parameter file into the 0x78-byte record (from the work heap).
namespace d_001baa4c {

inline constexpr u32 work_heap_address = 0x00952cacu;
inline guest::global<u32, 0x00952cac> work_heap;
inline constexpr guest::Function<0x0012ca50, u32(u32, u32, u32, u32)> construct_font_source;
inline constexpr guest::Function<0x0013864c, u32(u32)> Handle__release;
inline constexpr guest::Function<0x0013bb80, u32(u32)> do_nothing_13bb80;
inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32)> copy_bytes_at_any_alignment;
inline constexpr guest::Function<0x0056a4a4, u32(u32)> file_exists;
inline constexpr guest::Function<0x005bf790, u32(u32, u32, u32, u32)> source_start;

struct __attribute__((packed)) LoadParams78Frame {
    u8 unknown_0[0x4];  // (not read or written by name)
    u32 word_4;
    u8 unknown_8[0xc];  // (not read or written by name)
};
GUEST_OFFSET(LoadParams78Frame, word_4, 0x4);
GUEST_SIZE(LoadParams78Frame, 0x14);

void load_params_78(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<LoadParams78Frame> frame;  // the original's stack frame
    if (r0 == 0) {
        return;
    }
    construct_font_source(frame.at(0).addr(), r1, r2, r3);
    u32 exists = file_exists(r1);
    if (exists != 0) {
        exists = source_start(frame.at(0).addr(), r1, *work_heap, 0x20u);
        if (exists != 0) {
            copy_bytes_at_any_alignment(r0, frame->word_4, 0x78u);
            exists = frame.at(0).addr();
            Handle__release(exists);
        }
    }
    do_nothing_13bb80(exists);
}

}  // namespace d_001baa4c
GUEST_EXPORT_FRAMED(0x001baa4c, d_001baa4c::load_params_78, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_001baac8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Loads the parameter file into the six floats.
namespace d_001baac8 {

struct __attribute__((packed)) LoadParams18Arg0 {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
    float float_10;
    float float_14;
};
GUEST_OFFSET(LoadParams18Arg0, float_0, 0x0);
GUEST_OFFSET(LoadParams18Arg0, float_4, 0x4);
GUEST_OFFSET(LoadParams18Arg0, float_8, 0x8);
GUEST_OFFSET(LoadParams18Arg0, float_c, 0xc);
GUEST_OFFSET(LoadParams18Arg0, float_10, 0x10);
GUEST_OFFSET(LoadParams18Arg0, float_14, 0x14);

struct __attribute__((packed)) Local_001baac8_r0_4 {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
    float float_10;
    float float_14;
};
GUEST_OFFSET(Local_001baac8_r0_4, float_0, 0x0);
GUEST_OFFSET(Local_001baac8_r0_4, float_4, 0x4);
GUEST_OFFSET(Local_001baac8_r0_4, float_8, 0x8);
GUEST_OFFSET(Local_001baac8_r0_4, float_c, 0xc);
GUEST_OFFSET(Local_001baac8_r0_4, float_10, 0x10);
GUEST_OFFSET(Local_001baac8_r0_4, float_14, 0x14);

inline constexpr u32 work_heap_address = 0x00952cacu;
inline guest::global<u32, 0x00952cac> work_heap;
inline constexpr guest::Function<0x0012ca50, u32(u32, u32, u32, u32)> construct_font_source;
inline constexpr guest::Function<0x0013864c, u32(u32)> Handle__release;
inline constexpr guest::Function<0x0013bb80, u32(u32)> do_nothing_13bb80;
inline constexpr guest::Function<0x0056a4a4, u32(u32)> file_exists;
inline constexpr guest::Function<0x005bf790, u32(u32, u32, u32, u32)> source_start;

struct __attribute__((packed)) LoadParams18Frame {
    u8 unknown_0[0x4];  // (not read or written by name)
    u32 word_4;
    u8 unknown_8[0xc];  // (not read or written by name)
};
GUEST_OFFSET(LoadParams18Frame, word_4, 0x4);
GUEST_SIZE(LoadParams18Frame, 0x14);

u32 load_params_18(gptr<LoadParams18Arg0> arg0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2, float S3, float S4, float S5) {
    guest::StackFrameOf<LoadParams18Frame> frame;  // the original's stack frame
    if (arg0.addr() == 0) {
        return arg0.addr();
    }
    construct_font_source(frame.at(0).addr(), r1, r2, r3);
    u32 exists = file_exists(r1);
    if (exists != 0) {
        exists = source_start(frame.at(0).addr(), r1, *work_heap, 0x20u);
        if (exists != 0) {
            gptr<Local_001baac8_r0_4> r0_4 = gptr<Local_001baac8_r0_4>(frame->word_4);
            float S0_3 = r0_4->float_0;
            float S1_3 = r0_4->float_4;
            float S2_3 = r0_4->float_8;
            float S3_3 = r0_4->float_c;
            float S4_3 = r0_4->float_10;
            float S5_3 = r0_4->float_14;
            exists = frame.at(0).addr();
            arg0->float_0 = S0_3;
            arg0->float_4 = S1_3;
            arg0->float_8 = S2_3;
            arg0->float_c = S3_3;
            arg0->float_10 = S4_3;
            arg0->float_14 = S5_3;
            guest::cpu()->s[0] = S0_3;
            guest::cpu()->s[1] = S1_3;
            guest::cpu()->s[2] = S2_3;
            guest::cpu()->s[3] = S3_3;
            guest::cpu()->s[4] = S4_3;
            guest::cpu()->s[5] = S5_3;
            Handle__release(exists);
        }
    }
    do_nothing_13bb80(exists);
    return frame.at(0).addr();
}

}  // namespace d_001baac8
GUEST_EXPORT_FRAMED(0x001baac8, d_001baac8::load_params_18, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_001bab40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Loads the parameter file into the 0x3c-byte record.
namespace d_001bab40 {

inline constexpr u32 work_heap_address = 0x00952cacu;
inline guest::global<u32, 0x00952cac> work_heap;
inline constexpr guest::Function<0x0012ca50, u32(u32, u32, u32, u32)> construct_font_source;
inline constexpr guest::Function<0x0013864c, u32(u32)> Handle__release;
inline constexpr guest::Function<0x0013bb80, u32(u32)> do_nothing_13bb80;
inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32)> copy_bytes_at_any_alignment;
inline constexpr guest::Function<0x0056a4a4, u32(u32)> file_exists;
inline constexpr guest::Function<0x005bf790, u32(u32, u32, u32, u32)> source_start;

struct __attribute__((packed)) LoadParams3cFrame {
    u8 unknown_0[0x4];  // (not read or written by name)
    u32 word_4;
    u8 unknown_8[0xc];  // (not read or written by name)
};
GUEST_OFFSET(LoadParams3cFrame, word_4, 0x4);
GUEST_SIZE(LoadParams3cFrame, 0x14);

u32 load_params_3c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<LoadParams3cFrame> frame;  // the original's stack frame
    if (r0 == 0) {
        return r0;
    }
    construct_font_source(frame.at(0).addr(), r1, r2, r3);
    u32 exists = file_exists(r1);
    if (exists != 0) {
        exists = source_start(frame.at(0).addr(), r1, *work_heap, 0x20u);
        if (exists != 0) {
            copy_bytes_at_any_alignment(r0, frame->word_4, 0x3cu);
            exists = frame.at(0).addr();
            Handle__release(exists);
        }
    }
    do_nothing_13bb80(exists);
    return frame.at(0).addr();
}

}  // namespace d_001bab40
GUEST_EXPORT_FRAMED(0x001bab40, d_001bab40::load_params_3c, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_001babbc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Loads the parameter file into the 0x38-byte record.
namespace d_001babbc {

inline constexpr u32 work_heap_address = 0x00952cacu;
inline guest::global<u32, 0x00952cac> work_heap;
inline constexpr guest::Function<0x0012ca50, u32(u32, u32, u32, u32)> construct_font_source;
inline constexpr guest::Function<0x0013864c, u32(u32)> Handle__release;
inline constexpr guest::Function<0x0013bb80, u32(u32)> do_nothing_13bb80;
inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32)> copy_bytes_at_any_alignment;
inline constexpr guest::Function<0x0056a4a4, u32(u32)> file_exists;
inline constexpr guest::Function<0x005bf790, u32(u32, u32, u32, u32)> source_start;

struct __attribute__((packed)) LoadParams38Frame {
    u8 unknown_0[0x4];  // (not read or written by name)
    u32 word_4;
    u8 unknown_8[0xc];  // (not read or written by name)
};
GUEST_OFFSET(LoadParams38Frame, word_4, 0x4);
GUEST_SIZE(LoadParams38Frame, 0x14);

u32 load_params_38(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<LoadParams38Frame> frame;  // the original's stack frame
    if (r0 == 0) {
        return r0;
    }
    construct_font_source(frame.at(0).addr(), r1, r2, r3);
    u32 exists = file_exists(r1);
    if (exists != 0) {
        exists = source_start(frame.at(0).addr(), r1, *work_heap, 0x20u);
        if (exists != 0) {
            copy_bytes_at_any_alignment(r0, frame->word_4, 0x38u);
            exists = frame.at(0).addr();
            Handle__release(exists);
        }
    }
    do_nothing_13bb80(exists);
    return frame.at(0).addr();
}

}  // namespace d_001babbc
GUEST_EXPORT_FRAMED(0x001babbc, d_001babbc::load_params_38, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_001bac38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the default six-value parameters from 0xa18590.
namespace d_001bac38 {

struct __attribute__((packed)) DefaultParams18Arg0 {
    u32 word_0;
    float float_4;
    float float_8;
    float float_c;
    float float_10;
    float float_14;
};
GUEST_OFFSET(DefaultParams18Arg0, word_0, 0x0);
GUEST_OFFSET(DefaultParams18Arg0, float_4, 0x4);
GUEST_OFFSET(DefaultParams18Arg0, float_8, 0x8);
GUEST_OFFSET(DefaultParams18Arg0, float_c, 0xc);
GUEST_OFFSET(DefaultParams18Arg0, float_10, 0x10);
GUEST_OFFSET(DefaultParams18Arg0, float_14, 0x14);

inline guest::global<u32, 0x00a18590> default_params_a;
inline guest::global<u32, 0x00a18594> default_params_b;
inline guest::global<u32, 0x00a18598> default_params_c;
inline guest::global<u32, 0x00a1859c> default_params_d;
inline guest::global<u32, 0x00a185a0> default_params_e;
inline guest::global<u32, 0x00a185a4> default_params_f;

void default_params_18(gptr<DefaultParams18Arg0> arg0) {
    float S1_1 = std::bit_cast<float>(*default_params_b);
    float S2_1 = std::bit_cast<float>(*default_params_c);
    float S3_1 = std::bit_cast<float>(*default_params_d);
    float S4_1 = std::bit_cast<float>(*default_params_e);
    float S5_1 = std::bit_cast<float>(*default_params_f);
    arg0->word_0 = *default_params_a;
    arg0->float_4 = S1_1;
    arg0->float_8 = S2_1;
    arg0->float_c = S3_1;
    arg0->float_10 = S4_1;
    arg0->float_14 = S5_1;
}

}  // namespace d_001bac38
GUEST_EXPORT(0x001bac38, d_001bac38::default_params_18);

// f_001bac4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the default 0x3c-byte parameters from 0xa185a8.
namespace d_001bac4c {

struct __attribute__((packed)) DefaultParams3cArg0 {
    u32 word_0;
    float float_4;
    float float_8;
    float float_c;
    float float_10;
    float float_14;
    float float_18;
    float float_1c;
    u32 word_20;
    float float_24;
    float float_28;
    float float_2c;
    float float_30;
    float float_34;
    float float_38;
};
GUEST_OFFSET(DefaultParams3cArg0, word_0, 0x0);
GUEST_OFFSET(DefaultParams3cArg0, float_4, 0x4);
GUEST_OFFSET(DefaultParams3cArg0, float_8, 0x8);
GUEST_OFFSET(DefaultParams3cArg0, float_c, 0xc);
GUEST_OFFSET(DefaultParams3cArg0, float_10, 0x10);
GUEST_OFFSET(DefaultParams3cArg0, float_14, 0x14);
GUEST_OFFSET(DefaultParams3cArg0, float_18, 0x18);
GUEST_OFFSET(DefaultParams3cArg0, float_1c, 0x1c);
GUEST_OFFSET(DefaultParams3cArg0, word_20, 0x20);
GUEST_OFFSET(DefaultParams3cArg0, float_24, 0x24);
GUEST_OFFSET(DefaultParams3cArg0, float_28, 0x28);
GUEST_OFFSET(DefaultParams3cArg0, float_2c, 0x2c);
GUEST_OFFSET(DefaultParams3cArg0, float_30, 0x30);
GUEST_OFFSET(DefaultParams3cArg0, float_34, 0x34);
GUEST_OFFSET(DefaultParams3cArg0, float_38, 0x38);

inline guest::global<u32, 0x00a185a8> default_params_3c_value;
inline guest::global<u32, 0x00a185ac> global_00a185ac;
inline guest::global<u32, 0x00a185b0> global_00a185b0;
inline guest::global<u32, 0x00a185b4> global_00a185b4;
inline guest::global<u32, 0x00a185b8> global_00a185b8;
inline guest::global<u32, 0x00a185bc> global_00a185bc;
inline guest::global<u32, 0x00a185c0> global_00a185c0;
inline guest::global<u32, 0x00a185c4> global_00a185c4;
inline guest::global<u32, 0x00a185c8> global_00a185c8;
inline guest::global<u32, 0x00a185cc> global_00a185cc;
inline guest::global<u32, 0x00a185d0> global_00a185d0;
inline guest::global<u32, 0x00a185d4> global_00a185d4;
inline guest::global<u32, 0x00a185d8> global_00a185d8;
inline guest::global<u32, 0x00a185dc> global_00a185dc;
inline guest::global<u32, 0x00a185e0> global_00a185e0;

void default_params_3c(gptr<DefaultParams3cArg0> arg0) {
    float S1_1 = std::bit_cast<float>(*global_00a185ac);
    float S2_1 = std::bit_cast<float>(*global_00a185b0);
    float S3_1 = std::bit_cast<float>(*global_00a185b4);
    float S4_1 = std::bit_cast<float>(*global_00a185b8);
    float S5_1 = std::bit_cast<float>(*global_00a185bc);
    float S6_1 = std::bit_cast<float>(*global_00a185c0);
    float S7_1 = std::bit_cast<float>(*global_00a185c4);
    arg0->word_0 = *default_params_3c_value;
    arg0->float_4 = S1_1;
    arg0->float_8 = S2_1;
    arg0->float_c = S3_1;
    arg0->float_10 = S4_1;
    arg0->float_14 = S5_1;
    arg0->float_18 = S6_1;
    arg0->float_1c = S7_1;
    float S1_2 = std::bit_cast<float>(*global_00a185cc);
    float S2_2 = std::bit_cast<float>(*global_00a185d0);
    float S3_2 = std::bit_cast<float>(*global_00a185d4);
    float S4_2 = std::bit_cast<float>(*global_00a185d8);
    float S5_2 = std::bit_cast<float>(*global_00a185dc);
    float S6_2 = std::bit_cast<float>(*global_00a185e0);
    arg0->word_20 = *global_00a185c8;
    arg0->float_24 = S1_2;
    arg0->float_28 = S2_2;
    arg0->float_2c = S3_2;
    arg0->float_30 = S4_2;
    arg0->float_34 = S5_2;
    arg0->float_38 = S6_2;
}

}  // namespace d_001bac4c
GUEST_EXPORT(0x001bac4c, d_001bac4c::default_params_3c);

// f_001bac74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the default 0x38-byte parameters from 0xa185e4.
namespace d_001bac74 {

struct __attribute__((packed)) DefaultParams38Arg0 {
    u32 word_0;
    float float_4;
    float float_8;
    float float_c;
    float float_10;
    float float_14;
    float float_18;
    float float_1c;
    u32 word_20;
    float float_24;
    float float_28;
    float float_2c;
    float float_30;
    float float_34;
};
GUEST_OFFSET(DefaultParams38Arg0, word_0, 0x0);
GUEST_OFFSET(DefaultParams38Arg0, float_4, 0x4);
GUEST_OFFSET(DefaultParams38Arg0, float_8, 0x8);
GUEST_OFFSET(DefaultParams38Arg0, float_c, 0xc);
GUEST_OFFSET(DefaultParams38Arg0, float_10, 0x10);
GUEST_OFFSET(DefaultParams38Arg0, float_14, 0x14);
GUEST_OFFSET(DefaultParams38Arg0, float_18, 0x18);
GUEST_OFFSET(DefaultParams38Arg0, float_1c, 0x1c);
GUEST_OFFSET(DefaultParams38Arg0, word_20, 0x20);
GUEST_OFFSET(DefaultParams38Arg0, float_24, 0x24);
GUEST_OFFSET(DefaultParams38Arg0, float_28, 0x28);
GUEST_OFFSET(DefaultParams38Arg0, float_2c, 0x2c);
GUEST_OFFSET(DefaultParams38Arg0, float_30, 0x30);
GUEST_OFFSET(DefaultParams38Arg0, float_34, 0x34);

inline guest::global<u32, 0x00a185e4> default_params_38_value;
inline guest::global<u32, 0x00a185e8> global_00a185e8;
inline guest::global<u32, 0x00a185ec> global_00a185ec;
inline guest::global<u32, 0x00a185f0> global_00a185f0;
inline guest::global<u32, 0x00a185f4> global_00a185f4;
inline guest::global<u32, 0x00a185f8> global_00a185f8;
inline guest::global<u32, 0x00a185fc> global_00a185fc;
inline guest::global<u32, 0x00a18600> global_00a18600;
inline guest::global<u32, 0x00a18604> global_00a18604;
inline guest::global<u32, 0x00a18608> global_00a18608;
inline guest::global<u32, 0x00a1860c> global_00a1860c;
inline guest::global<u32, 0x00a18610> global_00a18610;
inline guest::global<u32, 0x00a18614> global_00a18614;
inline guest::global<u32, 0x00a18618> global_00a18618;

void default_params_38(gptr<DefaultParams38Arg0> arg0) {
    float S1_1 = std::bit_cast<float>(*global_00a185e8);
    float S2_1 = std::bit_cast<float>(*global_00a185ec);
    float S3_1 = std::bit_cast<float>(*global_00a185f0);
    float S4_1 = std::bit_cast<float>(*global_00a185f4);
    float S5_1 = std::bit_cast<float>(*global_00a185f8);
    float S6_1 = std::bit_cast<float>(*global_00a185fc);
    float S7_1 = std::bit_cast<float>(*global_00a18600);
    arg0->word_0 = *default_params_38_value;
    arg0->float_4 = S1_1;
    arg0->float_8 = S2_1;
    arg0->float_c = S3_1;
    arg0->float_10 = S4_1;
    arg0->float_14 = S5_1;
    arg0->float_18 = S6_1;
    arg0->float_1c = S7_1;
    float S1_2 = std::bit_cast<float>(*global_00a18608);
    float S2_2 = std::bit_cast<float>(*global_00a1860c);
    float S3_2 = std::bit_cast<float>(*global_00a18610);
    float S4_2 = std::bit_cast<float>(*global_00a18614);
    float S5_2 = std::bit_cast<float>(*global_00a18618);
    arg0->word_20 = *global_00a18604;
    arg0->float_24 = S1_2;
    arg0->float_28 = S2_2;
    arg0->float_2c = S3_2;
    arg0->float_30 = S4_2;
    arg0->float_34 = S5_2;
}

}  // namespace d_001bac74
GUEST_EXPORT(0x001bac74, d_001bac74::default_params_38);

// f_001bac9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Zeroes the 0x20 bytes at 0xa21f6c and sets the 0x20 bytes at 0x953602 to 0xff.
namespace d_001bac9c {

inline constexpr u32 global_00953602_address = 0x00953602u;
inline constexpr u32 global_00a21f6c_address = 0x00a21f6cu;
inline constexpr guest::Function<0x0013fac4, u32(u32, u32, u32)> set_bytes;
inline constexpr guest::Function<0x00301444, u32(u32, u32)> clear;

u32 reset_tables_a21f6c() {
    guest::StackFrame frame(0x8);  // the original's stack frame
    clear(global_00a21f6c_address, 0x20u);
    frame.release();
    return set_bytes(global_00953602_address, 0x20u, ~0u);
}

}  // namespace d_001bac9c
GUEST_EXPORT(0x001bac9c, d_001bac9c::reset_tables_a21f6c);

// f_001bace0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Delivers the letter from a town player (not another town or a villager) into the recipient's mailbox; true when
// delivered.
namespace d_001bace0 {

inline constexpr guest::Function<0x00118c9d, u32(u32, u32)> index_of_villager_in_town;
inline constexpr guest::Function<0x001df274, u32(u32, u32)> MailData__mailbox_of_player_b;
inline constexpr guest::Function<0x002fb328, u32(u32, u32)> get_save_data;
inline constexpr guest::Function<0x002fb918, u32(u32)> data_block_71900;
inline constexpr guest::Function<0x00309fbc, u32(u32, u32)> player_index_in;
inline constexpr guest::Function<0x006f5138, u32(u32, u32, u32, u32)> Mailbox__store_letter;
inline constexpr guest::Function<0x0071a0b0, u32(u32, u32)> find_player_matching_entry;
inline constexpr guest::Function<0x00758070, u32(u32)> Letter__if_from_villager;
inline constexpr guest::Function<0x007580d0, u32(u32, u32)> Letter__if_from_player;
inline constexpr guest::Function<0x00758128, u32(u32, u32, u32, u32)> Letter__is_from_another_town;
inline constexpr guest::Function<0x00770934, u32(u32)> Records10__first_free;

u32 Letter__deliver_to_player(u32 letter, u32 r1, u32 r2, u32 r3) {
    u32 r5_1 = 0;
    u32 r0_1 = Letter__is_from_another_town(letter, r1, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        u32 r0_2 = Letter__if_from_player(letter, r1_1);
        if (r0_2 == 0) {
            u32 r0_3 = Letter__if_from_villager(letter);
            r1_1 = guest::cpu()->r[1];
            if (r0_3 != 0) {
                u32 save_data = get_save_data(r0_3, r1_1);
                index_of_villager_in_town(save_data + 0x292a4u, r0_3);
                r1_1 = guest::cpu()->r[1];
            }
        } else {
            u32 save_data_2 = get_save_data(r0_2, guest::cpu()->r[1]);
            u32 r0_8 = find_player_matching_entry(save_data_2 + 0xa0u, r0_2);
            r1_1 = guest::cpu()->r[1];
            if (r0_8 != 0) {
                u32 r0_9 = Letter__if_from_player(letter, r1_1);
                if (r0_9 == 0) {
                    r5_1 = 0u;
                } else {
                    u32 save_data_3 = get_save_data(r0_9, guest::cpu()->r[1]);
                    r0_9 = player_index_in(save_data_3 + 0xa0u, find_player_matching_entry(save_data_3 + 0xa0u, r0_9));
                    r5_1 = r0_9;
                }
                u32 mail_data = data_block_71900(r0_9);
                u32 r0_13 = MailData__mailbox_of_player_b(mail_data, r5_1);
                u32 free_index_2 = Records10__first_free(r0_13);
                r1_1 = free_index_2;
                if (s32(free_index_2) >= 0) {
                    Mailbox__store_letter(r0_13, r1_1, letter, 0u);
                    return 1u;
                }
            }
        }
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_001bace0
GUEST_EXPORT_FRAMED(0x001bace0, d_001bace0::Letter__deliver_to_player, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001baf6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores the letter in the first free of the 80 letter slots (+0xa4f8); false when full.
namespace d_001baf6c {

inline constexpr guest::Function<0x001e4348, u32(u32, u32, u32)> LetterStorage__store_at;
inline constexpr guest::Function<0x002fb918, u32(u32, u32, u32, u32)> data_block_71900;
inline constexpr guest::Function<0x007105d4, u32(u32)> first_clear_entry_of_80;

u32 LetterStorage__store(u32 letter_storage, u32 r1, u32 r2) {
    u32 r0_3 = 0;
    u32 r0_1 = data_block_71900(letter_storage, r1, r2, guest::cpu()->r[3]);
    u32 r0_2 = first_clear_entry_of_80(r0_1 + 0xa4f8u);
    u32 r1_2 = r0_2;
    if (r0_2 + 1u == 0) {
        r0_3 = 0u;
    } else {
        LetterStorage__store_at(r0_1 + 0xa4f8u, r1_2, letter_storage);
        r1_2 = guest::cpu()->r[1];
        r0_3 = 1u;
    }
    guest::cpu()->r[1] = r1_2;
    return r0_3;
}

}  // namespace d_001baf6c
GUEST_EXPORT_FRAMED(0x001baf6c, d_001baf6c::LetterStorage__store, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001bb0c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Outside network sessions and special scenes, delivers the stored letters that are due today, then compacts the
// storage.
namespace d_001bb0c4 {

struct __attribute__((packed)) Local_001bb0c4_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001bb0c4_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_001bb0c4_ea_1, word_4, 0x4);

struct __attribute__((packed)) Now {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Now, word_0, 0x0);
GUEST_OFFSET(Now, word_4, 0x4);
GUEST_OFFSET(Now, word_8, 0x8);

inline guest::global<u32, 0x00953fa4> letter_delivery_a;
inline guest::global<u32, 0x00953fa8> letter_delivery_b;
inline constexpr guest::Function<0x001bbc30, u32(u32)> Letter__try_deliver;
inline constexpr guest::Function<0x001df3d4, u32(u32)> main_slot_entry_001df3d4;
inline constexpr guest::Function<0x001e4214, u32(u32, u32, u32, u32)> LetterStorage__deliver_range_due;
inline constexpr guest::Function<0x001e442c, u32(u32, u32, u32, u32)> LetterStorage__compact;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x002fb378, u32(u32)> game_time_now;
inline constexpr guest::Function<0x002fb918, u32(u32)> data_block_71900;
inline constexpr guest::Function<0x002fc900, u32(u32)> mode_above_1;
inline constexpr guest::Function<0x002ff3fc, u32(u32, u32, u32, u32)> Records280__clear;
inline constexpr guest::Function<0x006f4f48, u32(u32)> Mailbox__deliver_pending;
inline constexpr guest::Function<0x00710614, u32(u32, u32, u32, u32)> letter_at;

void LetterStorage__deliver_due(u32 letter_storage, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 scene_3 = current_scene_id(letter_storage, r1, r2, r3);
    u32 scene_flagged_3 = scene_has_flags(0x10u, scene_3);
    if (scene_flagged_3 == 0) {
        u32 r0_3 = mode_above_1(scene_flagged_3);
        if (r0_3 == 0) {
            u32 scene_4 = current_scene_id(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            u32 scene_flagged_4 = scene_has_flags(0x20000u, scene_4);
            if (scene_flagged_4 == 0) {
                u32 mailbox = main_slot_entry_001df3d4(data_block_71900(scene_flagged_4));
                if (mailbox != 0) {
                    mailbox = Mailbox__deliver_pending(mailbox);
                }
                gptr<Now> now_2 = gptr<Now>(game_time_now(mailbox));
                u32 r4_1 = now_2->word_0;
                u32 r5_1 = now_2->word_4;
                u32 r6_1 = now_2->word_8;
                u32 r0_9 = data_block_71900(now_2.addr());
                gptr<Local_001bb0c4_ea_1> ea_1 = gptr<Local_001bb0c4_ea_1>(r0_9 + 0x16cf8u);
                u32 r3_9 = ea_1->word_4;
                *letter_delivery_a = ea_1->word_0;
                *letter_delivery_b = r3_9;
                u32 r0_11 = LetterStorage__deliver_range_due(r0_9 + 0xa4f8u, r4_1, r5_1, r6_1);
                if (r0_11 != 0) {
                    u32 r6 = data_block_71900(r0_11) + 0xa4f8u;
                    u32 r0_13 = LetterStorage__compact(r6, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    u32 r5 = r0_13;
                    u32 i = 0u;
                    if (s32(r0_13) > 0) {
                        do {
                            u32 letter_2 = letter_at(r6, i, r2, r3);
                            u32 r0_15 = Letter__try_deliver(letter_2);
                            r2 = guest::cpu()->r[2];
                            r3 = guest::cpu()->r[3];
                            if (r0_15 != 0) {
                                Records280__clear(r6, i, r2, r3);
                                r2 = guest::cpu()->r[2];
                                r3 = guest::cpu()->r[3];
                            }
                            i += 1u;
                            guest::preempt();
                        } while (s32(i) < s32(r5));
                    }
                    frame.release();
                    LetterStorage__compact(r6, guest::cpu()->r[1], r2, r3);
                    return;
                }
            }
        }
    }
}

}  // namespace d_001bb0c4
GUEST_EXPORT(0x001bb0c4, d_001bb0c4::LetterStorage__deliver_due);

// f_001bb304: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores the time stamp at 0xaaf6a4 moved to 6:00:00.000.
namespace d_001bb304 {

struct __attribute__((packed)) SetDayStart6amArg0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(SetDayStart6amArg0, word_0, 0x0);
GUEST_OFFSET(SetDayStart6amArg0, word_4, 0x4);
GUEST_OFFSET(SetDayStart6amArg0, word_8, 0x8);

inline constexpr u32 day_start_hour_address = 0x00aaf6a4u;
inline guest::global<u32, 0x00aaf6a4> day_start_hour;
inline guest::global<u32, 0x00aaf6a8> global_00aaf6a8;
inline guest::global<u32, 0x00aaf6ac> global_00aaf6ac;
inline constexpr guest::Function<0x0056cbe8, u32(u32, u32)> TimeStamp__set_millisecond;
inline constexpr guest::Function<0x0056cce4, u32(u32, u32, u32, u32)> TimeStamp__set_hour;
inline constexpr guest::Function<0x0056ce84, u32(u32, u32)> TimeStamp__set_minute;
inline constexpr guest::Function<0x0056cedc, u32(u32, u32)> TimeStamp__set_second;

void set_day_start_6am(gptr<SetDayStart6amArg0> arg0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r2_1 = arg0->word_4;
    u32 r3_1 = arg0->word_8;
    *day_start_hour = arg0->word_0;
    *global_00aaf6a8 = r2_1;
    *global_00aaf6ac = r3_1;
    TimeStamp__set_hour(day_start_hour_address, 6u, r2_1, r3_1);
    TimeStamp__set_minute(day_start_hour_address, 0u);
    TimeStamp__set_second(day_start_hour_address, 0u);
    frame.release();
    TimeStamp__set_millisecond(day_start_hour_address, 0u);
    return;
}

}  // namespace d_001bb304
GUEST_EXPORT(0x001bb304, d_001bb304::set_day_start_6am);

// f_001bb354: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Delivers the stored letters that are due on the given day, then compacts the storage.
namespace d_001bb354 {

struct __attribute__((packed)) Local_001bb354_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001bb354_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_001bb354_ea_1, word_4, 0x4);

inline guest::global<u32, 0x00953fa4> letter_delivery_a;
inline guest::global<u32, 0x00953fa8> letter_delivery_b;
inline constexpr guest::Function<0x001bbc30, u32(u32)> Letter__try_deliver;
inline constexpr guest::Function<0x001e4214, u32(u32, u32, u32, u32)> LetterStorage__deliver_range_due;
inline constexpr guest::Function<0x001e442c, u32(u32, u32, u32, u32)> LetterStorage__compact;
inline constexpr guest::Function<0x002fb918, u32(u32, u32, u32, u32)> data_block_71900;
inline constexpr guest::Function<0x002ff3fc, u32(u32, u32, u32, u32)> Records280__clear;
inline constexpr guest::Function<0x00710614, u32(u32, u32, u32, u32)> letter_at;

u32 LetterStorage__deliver_due_on(u32 letter_storage, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = data_block_71900(letter_storage, r1, r2, r3);
    gptr<Local_001bb354_ea_1> ea_1 = gptr<Local_001bb354_ea_1>(r0_1 + 0x16cf8u);
    u32 r3_1 = ea_1->word_4;
    *letter_delivery_a = ea_1->word_0;
    *letter_delivery_b = r3_1;
    u32 r0_3 = LetterStorage__deliver_range_due(r0_1 + 0xa4f8u, letter_storage, r1, r2);
    if (r0_3 != 0) {
        u32 r6 = data_block_71900(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]) + 0xa4f8u;
        u32 r0_5 = LetterStorage__compact(r6, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        u32 r5 = r0_5;
        u32 i = 0u;
        if (s32(r0_5) > 0) {
            do {
                u32 letter_2 = letter_at(r6, i, r2, r3);
                u32 r0_7 = Letter__try_deliver(letter_2);
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_7 != 0) {
                    Records280__clear(r6, i, r2, r3);
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                }
                i += 1u;
                guest::preempt();
            } while (s32(i) < s32(r5));
        }
        frame.release();
        return LetterStorage__compact(r6, guest::cpu()->r[1], r2, r3);
    }
    return r0_3;
}

}  // namespace d_001bb354
GUEST_EXPORT(0x001bb354, d_001bb354::LetterStorage__deliver_due_on);

// f_001bbbe8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// True when the player's mailbox has a free slot.
namespace d_001bbbe8 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x0070eed0, u32(u32, u32)> MailData__mailbox_of_player;
inline constexpr guest::Function<0x00770934, u32(u32)> Records10__first_free;

u32 player_has_mailbox_room(u32 r0, u32 r1) {
    u32 save_data = get_save_data(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 mailbox = MailData__mailbox_of_player(save_data + 0x71900u, r0);
    u32 free_index_2 = Records10__first_free(mailbox);
    return !(free_index_2 + 1u == 0);
}

}  // namespace d_001bbbe8
GUEST_EXPORT_FRAMED(0x001bbbe8, d_001bbbe8::player_has_mailbox_room, 0x4010);  // pushes {r4, lr} first, as the original

// f_001bbc30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Delivers the stored letter to its recipient (town player or villager) when its day has come; true when delivered.
namespace d_001bbc30 {

inline constexpr guest::Function<0x0010cadd, u32(u32, u32)> find_valid_villager_record;
inline constexpr guest::Function<0x001127ac, u32(u32, u32)> call_001127b4;
inline constexpr guest::Function<0x00118c9d, u32(u32, u32)> index_of_villager_in_town;
inline constexpr guest::Function<0x001df274, u32(u32, u32)> MailData__mailbox_of_player_b;
inline constexpr guest::Function<0x002fae84, u32(u32)> get_data_base;
inline constexpr guest::Function<0x002fb310, u32(u32)> slot_records_of;
inline constexpr guest::Function<0x002fb328, u32(u32, u32)> get_save_data;
inline constexpr guest::Function<0x002fb918, u32(u32)> data_block_71900;
inline constexpr guest::Function<0x00309fbc, u32(u32, u32)> player_index_in;
inline constexpr guest::Function<0x006f5138, u32(u32, u32, u32, u32)> Mailbox__store_letter;
inline constexpr guest::Function<0x0071a0b0, u32(u32, u32)> find_player_matching_entry;
inline constexpr guest::Function<0x00758070, u32(u32)> Letter__if_from_villager;
inline constexpr guest::Function<0x007580d0, u32(u32, u32)> Letter__if_from_player;
inline constexpr guest::Function<0x00758128, u32(u32, u32, u32, u32)> Letter__is_from_another_town;
inline constexpr guest::Function<0x00770934, u32(u32)> Records10__first_free;

u32 Letter__try_deliver(u32 letter, u32 r1, u32 r2, u32 r3) {
    u32 r8 = 0;
    u32 r0_17 = 0;
    u32 r0_19 = 0;
    u32 r5_1 = 0;
    if (Letter__is_from_another_town(letter, r1, r2, r3) == 0) {
        u32 r0_2 = Letter__if_from_player(letter, guest::cpu()->r[1]);
        if (r0_2 != 0) {
            u32 save_data = get_save_data(r0_2, guest::cpu()->r[1]);
            if (find_player_matching_entry(save_data + 0xa0u, r0_2) == 0) {
                return 1u;
            } else {
                r8 = 0u;
            }
            u32 r0_6 = Letter__is_from_another_town(letter, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            if (r0_6 != 0) {
                return r8;
            }
        } else {
            u32 r0_7 = Letter__if_from_villager(letter);
            if (r0_7 == 0) {
                return 1u;
            }
            u32 save_data_2 = get_save_data(r0_7, guest::cpu()->r[1]);
            if (index_of_villager_in_town(save_data_2 + 0x292a4u, r0_7) + 1u == 0) {
                return 1u;
            }
            u32 r0_11 = Letter__if_from_villager(letter);
            if (r0_11 != 0) {
                u32 data_base = get_data_base(r0_11);
                u32 records = slot_records_of(data_base);
                u32 r0_15 = find_valid_villager_record(records + 4u, r0_11);
                if (r0_15 != 0) {
                    call_001127b4(r0_15, letter);
                }
            }
            return 1u;
        }
        u32 r0_16 = Letter__if_from_player(letter, r1);
        if (r0_16 == 0) {
            goto L_1bbdb0;
        }
        r0_17 = get_save_data(r0_16, guest::cpu()->r[1]);
        r0_19 = find_player_matching_entry(r0_17 + 0xa0u, r0_16);
        r1 = guest::cpu()->r[1];
        if (r0_19 != 0) {
            u32 r0_20 = Letter__if_from_player(letter, r1);
            if (r0_20 == 0) {
                r5_1 = r8;
            } else {
                u32 save_data_3 = get_save_data(r0_20, guest::cpu()->r[1]);
                r0_20 = player_index_in(save_data_3 + 0xa0u, find_player_matching_entry(save_data_3 + 0xa0u, r0_20));
                r5_1 = r0_20;
            }
            u32 mail_data = data_block_71900(r0_20);
            u32 r0_24 = MailData__mailbox_of_player_b(mail_data, r5_1);
            u32 free_index_2 = Records10__first_free(r0_24);
            r1 = free_index_2;
            if (s32(free_index_2) >= 0) {
                Mailbox__store_letter(r0_24, r1, letter, 0u);
                r1 = guest::cpu()->r[1];
                r8 = 1u;
            }
        }
        guest::cpu()->r[1] = r1;
        return r8;
L_1bbdb0:;
        u32 r0_26 = Letter__if_from_villager(letter);
        r1 = guest::cpu()->r[1];
        if (r0_26 == 0) {
            return r8;
        }
        u32 save_data_4 = get_save_data(r0_26, r1);
        index_of_villager_in_town(save_data_4 + 0x292a4u, r0_26);
        r1 = guest::cpu()->r[1];
        return r8;
    }
    return 1u;
}

}  // namespace d_001bbc30
GUEST_EXPORT_FRAMED(0x001bbc30, d_001bbc30::Letter__try_deliver, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_001bfa48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Places the shown item's model at its cell (raised for wall items) and attaches it to the NPC.
namespace d_001bfa48 {

inline guest::global<u32, 0x0094ddbc> global_0094ddbc;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> current_scene_id;
inline constexpr guest::Function<0x00303acc, u32(u32)> item_is_kind_11_with_class_4_or_5;
inline constexpr guest::Function<0x00535ab0, u32(u32, u32, u32)> Map__place_structure_at;
inline constexpr guest::Function<0x0068efc8, u32(u32, u32)> CameraCtl__attach;
inline constexpr guest::Function<0x006a6dbc, u32(u32, u32, u32)> cell_corner_with_height;

struct __attribute__((packed)) ShopNpcTalkReceptPlaceItemModelFrame {
    u8 unknown_0[0x4];  // (not read or written by name)
    float float_4;
    u8 unknown_8[0x8];  // (not read or written by name)
};
GUEST_OFFSET(ShopNpcTalkReceptPlaceItemModelFrame, float_4, 0x4);
GUEST_SIZE(ShopNpcTalkReceptPlaceItemModelFrame, 0x10);

u32 ShopNpcTalkRecept__place_item_model(gptr<AcNpcSpShop__ShopNpcTalkRecept> shop_npc_talk_recept, u32 r1, u32 r2, float S0, float S1) {
    guest::StackFrameOf<ShopNpcTalkReceptPlaceItemModelFrame> frame;  // the original's stack frame
    u32 scene_2 = current_scene_id(shop_npc_talk_recept.addr(), r1, r2, guest::cpu()->r[3]);
    u32 zf_1 = scene_2 == 0x30u;
    u32 r1_1 = shop_npc_talk_recept->word_28c;
    u32 r2_1 = shop_npc_talk_recept->word_290;
    if (!zf_1) {
        zf_1 = scene_2 == 0x31u;
    }
    u32 r0_2 = frame.at(0).addr();
    if (zf_1) {
        cell_corner_with_height(r0_2, r1_1, r2_1);
    } else {
        Map__place_structure_at(r0_2, r1_1, r2_1);
    }
    u32 r0_4 = item_is_kind_11_with_class_4_or_5(shop_npc_talk_recept.addr() + 0x276u);
    float S0_3 = guest::cpu()->s[0];
    float S1_3 = guest::cpu()->s[1];
    if (r0_4 != 0) {
        S1_3 = std::bit_cast<float>(*global_0094ddbc);
        S0_3 = frame->float_4 + S1_3;
        frame->float_4 = S0_3;
    }
    u32 r0_5 = shop_npc_talk_recept->word_f0;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_3;
    return CameraCtl__attach(frame.at(0).addr(), r0_5 == 0 ? 0u : r0_5 + 0x14u);
}

}  // namespace d_001bfa48
GUEST_EXPORT_FRAMED(0x001bfa48, d_001bfa48::ShopNpcTalkRecept__place_item_model, 0x4010);  // pushes {r4, lr} first, as the original
