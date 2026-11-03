// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_001b02c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b02c0 {

struct __attribute__((packed)) Local_001b02c0_r0_2 {
    u32 word_0;
    u8 unknown_4[0x8];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Local_001b02c0_r0_2, word_0, 0x0);
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

u32 SelectBase__SelectBase(u32 r0) {
    u32 r0_1 = CatalogBase__CatalogBase(r0);
    *gptr<u32>(r0_1) = vtable_SelectBase;
    gptr<Local_001b02c0_r0_2> r0_2 = gptr<Local_001b02c0_r0_2>(r0_1 + 0x9e0u);  // (from the original)
    construct_list_node(r0_2.addr());
    r0_2->word_c = 0;
    r0_2->word_0 = vtable_ContentNode;
    u32 ea_1 = r0_2.addr() + 0x1cu;  // (from the original)
    *gptr<u32>(ea_1) = 0;
    u32 r0_3 = ea_1 + 4u;
    construct_button_action_control(r0_3);
    gptr<Local_001b02c0_r0_4> r0_4 = gptr<Local_001b02c0_r0_4>(r0_3 - 0xa00u);  // (from the original)
    r0_4->word_24 = 0x1b0314;  // (from the original)
    r0_4->word_ae8 = ~0u;
    r0_4->word_ae4 = 0;
    guest::cpu()->r[1] = 0x1b0314u;  // (from the original)
    return r0_4.addr();
}

}  // namespace d_001b02c0
GUEST_EXPORT_FRAMED(0x001b02c0, d_001b02c0::SelectBase__SelectBase, 0x4010);  // pushes {r4, lr} first, as the original

// f_001b1010: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b1010 {

inline constexpr u32 global_00ac3a14_address = 0x00ac3a14u;
inline constexpr u32 global_00ac4e40_address = 0x00ac4e40u;
inline constexpr u32 global_00ac8c6c_address = 0x00ac8c6cu;
inline constexpr u32 global_00acfa98_address = 0x00acfa98u;
inline constexpr u32 global_00acfdc4_address = 0x00acfdc4u;
inline constexpr u32 global_00ad0ff0_address = 0x00ad0ff0u;
inline constexpr guest::Function<0x001bc1fc, u32(u32)> sead__SafeStringBase_char___SafeStringBase_001bc1fc;
inline constexpr guest::Function<0x001bc684, u32(u32)> sead__SafeStringBase_char___SafeStringBase_001bc684;
inline constexpr guest::Function<0x001bcbb8, u32(u32, u32, u32, u32)> call_001bcbb8;
inline constexpr guest::Function<0x001bd6f0, u32(u32)> sead__SafeStringBase_char___SafeStringBase_001bd6f0;
inline constexpr guest::Function<0x001bdedc, u32(u32)> sead__SafeStringBase_char___SafeStringBase_001bdedc;
inline constexpr guest::Function<0x001be284, u32(u32)> sead__FixedSafeString_80___FixedSafeString;

u32 f_001b1010() {
    u32 r0_1 = call_001bcbb8(global_00ac3a14_address, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_2 = sead__SafeStringBase_char___SafeStringBase_001bd6f0(global_00ac4e40_address);
    u32 r0_3 = sead__SafeStringBase_char___SafeStringBase_001bc684(global_00ac8c6c_address);
    u32 r0_4 = sead__SafeStringBase_char___SafeStringBase_001bdedc(global_00acfa98_address);
    u32 r0_5 = sead__FixedSafeString_80___FixedSafeString(global_00acfdc4_address);
    u32 r0_6 = sead__SafeStringBase_char___SafeStringBase_001bc1fc(global_00ad0ff0_address);
    return r0_6 & ((((r0_1 & r0_2) & r0_3) & r0_4) & r0_5);
}

}  // namespace d_001b1010
GUEST_EXPORT_FRAMED(0x001b1010, d_001b1010::f_001b1010, 0x4010);  // pushes {r4, lr} first, as the original

// f_001b1308: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b1308 {

inline constexpr u32 vtable_sead__SafeStringBase_char_ = 0x009047f8u;
inline constexpr u32 real_estate_heap_address = 0x00952c54u;
inline constexpr u32 global_00ac3a14_address = 0x00ac3a14u;
inline constexpr u32 global_00ac4e40_address = 0x00ac4e40u;
inline constexpr u32 global_00ac8c6c_address = 0x00ac8c6cu;
inline constexpr u32 global_00acfa98_address = 0x00acfa98u;
inline constexpr u32 global_00acfdc4_address = 0x00acfdc4u;
inline constexpr u32 global_00ad0ff0_address = 0x00ad0ff0u;
inline constexpr guest::Function<0x00132478, u32(u32, u32, u32, u32)> clear_list;
inline constexpr guest::Function<0x00138744, u32(u32)> destroy_load_split_base_part;
inline constexpr guest::Function<0x0013f134, u32(u32, u32, u32, u32)> queue_append;
inline constexpr guest::Function<0x002f747c, u32(u32, u32, u32, u32)> ObjectOwner__release_object;
inline constexpr guest::Function<0x0031758c, u32(u32, u32, u32, u32)> HeapHolder__recreate;
inline constexpr guest::Function<0x005b19f8, u32(u32, u32, u32, u32)> WordAndFlag__clear;

struct __attribute__((packed)) Frame_001b1308 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u8 unknown_1c[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_001b1308, word_0, 0x0);
GUEST_OFFSET(Frame_001b1308, word_4, 0x4);
GUEST_OFFSET(Frame_001b1308, word_8, 0x8);
GUEST_OFFSET(Frame_001b1308, word_c, 0xc);
GUEST_OFFSET(Frame_001b1308, word_10, 0x10);
GUEST_OFFSET(Frame_001b1308, word_14, 0x14);
GUEST_OFFSET(Frame_001b1308, word_18, 0x18);
GUEST_SIZE(Frame_001b1308, 0x24);

u32 sead__SafeStringBase_char___SafeStringBase_001b1308(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_001b1308> frame;  // the original's stack frame
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
    u32 r10 = 0xc800u;  // (from the original)
    u32 r5 = global_00ac3a14_address;
    u32 r11 = real_estate_heap_address;
    u32 r4 = *gptr<u32>(r5 + 0x140cu);  // (from the original)
    u32 r9 = *gptr<u32>(r11);
    if (r4 != 0) {
        do {
            WordAndFlag__clear(r4 + 0xcu, r1, r2, r3);  // (from the original)
            destroy_load_split_base_part(r4 + 0x14u);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r4 = *gptr<u32>(r4 + 8u);
            zf_2 = r4 == 0;
            guest::preempt();
        } while (!zf_2);
    }
    r4 = *gptr<u32>(r5 + 0x1424u);  // (from the original)
    if (r4 != 0) {
        do {
            WordAndFlag__clear(r4 + 0xcu, r1, r2, r3);  // (from the original)
            destroy_load_split_base_part(r4 + 0x14u);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r4 = *gptr<u32>(r4 + 8u);
            zf_4 = r4 == 0;
            guest::preempt();
        } while (!zf_4);
    }
    clear_list((r5 + 0x1400u) + 8u, r1, r2, r3);  // (from the original)
    u32 r0_7 = r5 + 0x1400u;  // (from the original)
    u32 r6 = r0_7 + 0x14u;  // (from the original)
    clear_list(r0_7 + 0x14u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    clear_list((r5 + 0x1000u) + 0x420u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    do {
        queue_append(r6, (r5 + (r4 << 8)) + 8u, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 += 1u;
        cf_1 = r4 >= 0x14u;  // (from the original)
        guest::preempt();
    } while (!cf_1);
    ObjectOwner__release_object(r5, guest::cpu()->r[1], r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = vtable_sead__SafeStringBase_char_;
    u32 r7 = 0u;
    u32 r8 = 1u;
    if (r9 != 0) {
        frame->word_c = 0x88e3d4;  // (from the original)
        frame->word_8 = r6;
        frame->word_4 = r7;
        frame->word_0 = r8;
        HeapHolder__recreate(r5, r10, r9, frame.at(8).addr());
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r5 = global_00ac4e40_address;
    r9 = *gptr<u32>(r11);
    r10 = 0x26c00u;  // (from the original)
    r4 = *gptr<u32>(r5 + 0x3e0cu);  // (from the original)
    if (r4 != 0) {
        do {
            WordAndFlag__clear(r4 + 0xcu, r1, r2, r3);  // (from the original)
            destroy_load_split_base_part(r4 + 0x14u);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r4 = *gptr<u32>(r4 + 8u);
            zf_7 = r4 == 0;
            guest::preempt();
        } while (!zf_7);
    }
    r4 = *gptr<u32>(r5 + 0x3e24u);  // (from the original)
    if (r4 != 0) {
        do {
            WordAndFlag__clear(r4 + 0xcu, r1, r2, r3);  // (from the original)
            destroy_load_split_base_part(r4 + 0x14u);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r4 = *gptr<u32>(r4 + 8u);
            zf_9 = r4 == 0;
            guest::preempt();
        } while (!zf_9);
    }
    clear_list((r5 + 0x3c00u) + 0x208u, r1, r2, r3);  // (from the original)
    u32 r0_18 = r5 + 0x3c00u;  // (from the original)
    frame->word_10 = r0_18 + 0x214u;  // (from the original)
    clear_list(r0_18 + 0x214u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    clear_list((r5 + 0x3000u) + 0xe20u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    do {
        queue_append(frame->word_10, (r5 + (r4 << 8)) + 8u, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 += 1u;
        cf_2 = r4 >= 0x3eu;  // (from the original)
        guest::preempt();
    } while (!cf_2);
    ObjectOwner__release_object(r5, guest::cpu()->r[1], r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r9 != 0) {
        frame->word_14 = 0x88e3d4;  // (from the original)
        frame->word_10 = r6;
        frame->word_4 = r7;
        frame->word_0 = r8;
        HeapHolder__recreate(r5, r10, r9, frame.at(0x10).addr());  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r5 = global_00ac8c6c_address;
    r9 = *gptr<u32>(r11);
    r10 = 0x44c00u;  // (from the original)
    r4 = *gptr<u32>(r5 + 0x6e0cu);  // (from the original)
    if (r4 != 0) {
        do {
            WordAndFlag__clear(r4 + 0xcu, r1, r2, r3);  // (from the original)
            destroy_load_split_base_part(r4 + 0x14u);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r4 = *gptr<u32>(r4 + 8u);
            zf_12 = r4 == 0;
            guest::preempt();
        } while (!zf_12);
    }
    r4 = *gptr<u32>(r5 + 0x6e24u);  // (from the original)
    if (r4 != 0) {
        do {
            WordAndFlag__clear(r4 + 0xcu, r1, r2, r3);  // (from the original)
            destroy_load_split_base_part(r4 + 0x14u);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r4 = *gptr<u32>(r4 + 8u);
            zf_14 = r4 == 0;
            guest::preempt();
        } while (!zf_14);
    }
    clear_list((r5 + 0x6c00u) + 0x208u, r1, r2, r3);  // (from the original)
    u32 r0_30 = r5 + 0x6c00u;  // (from the original)
    frame->word_8 = r0_30 + 0x214u;  // (from the original)
    clear_list(r0_30 + 0x214u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    clear_list((r5 + 0x6000u) + 0xe20u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    do {
        queue_append(frame->word_8, (r5 + (r4 << 8)) + 8u, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 += 1u;
        cf_3 = r4 >= 0x6eu;  // (from the original)
        guest::preempt();
    } while (!cf_3);
    ObjectOwner__release_object(r5, guest::cpu()->r[1], r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r9 != 0) {
        frame->word_c = 0x88e3d4;  // (from the original)
        frame->word_8 = r6;
        frame->word_4 = r7;
        frame->word_0 = r8;
        HeapHolder__recreate(r5, r10, r9, frame.at(8).addr());
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r5 = global_00acfa98_address;
    r9 = *gptr<u32>(r11);
    r10 = 0x1e00u;  // (from the original)
    r4 = *gptr<u32>(r5 + 0x30cu);  // (from the original)
    if (r4 != 0) {
        do {
            WordAndFlag__clear(r4 + 0xcu, r1, r2, r3);  // (from the original)
            destroy_load_split_base_part(r4 + 0x14u);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r4 = *gptr<u32>(r4 + 8u);
            zf_17 = r4 == 0;
            guest::preempt();
        } while (!zf_17);
    }
    r4 = *gptr<u32>(r5 + 0x324u);  // (from the original)
    if (r4 != 0) {
        do {
            WordAndFlag__clear(r4 + 0xcu, r1, r2, r3);  // (from the original)
            destroy_load_split_base_part(r4 + 0x14u);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r4 = *gptr<u32>(r4 + 8u);
            zf_19 = r4 == 0;
            guest::preempt();
        } while (!zf_19);
    }
    clear_list(r5 + 0x308u, r1, r2, r3);  // (from the original)
    clear_list(r5 + 0x314u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    clear_list(r5 + 0x320u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    do {
        queue_append(r5 + 0x314u, (r5 + (r4 << 8)) + 8u, r2, r3);  // (from the original)
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
        frame->word_14 = 0x88e3d4;  // (from the original)
        frame->word_10 = r6;
        frame->word_4 = r7;
        frame->word_0 = r8;
        HeapHolder__recreate(r5, r10, r9, frame.at(0x10).addr());  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r5 = global_00acfdc4_address;
    r9 = *gptr<u32>(r11);
    r10 = r5 + 0x1000u;  // (from the original)
    frame->word_18 = 0xbe00;  // (from the original)
    r4 = *gptr<u32>(r10 + 0x20cu);  // (from the original)
    if (r4 != 0) {
        do {
            WordAndFlag__clear(r4 + 0xcu, r1, r2, r3);  // (from the original)
            destroy_load_split_base_part(r4 + 0x14u);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r4 = *gptr<u32>(r4 + 8u);
            zf_22 = r4 == 0;
            guest::preempt();
        } while (!zf_22);
    }
    r4 = *gptr<u32>(r10 + 0x224u);  // (from the original)
    if (r4 != 0) {
        do {
            WordAndFlag__clear(r4 + 0xcu, r1, r2, r3);  // (from the original)
            destroy_load_split_base_part(r4 + 0x14u);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r4 = *gptr<u32>(r4 + 8u);
            zf_24 = r4 == 0;
            guest::preempt();
        } while (!zf_24);
    }
    clear_list((r5 + 0x1000u) + 0x208u, r1, r2, r3);  // (from the original)
    u32 r0_51 = r5 + 0x1000u;  // (from the original)
    r10 = r0_51 + 0x214u;  // (from the original)
    clear_list(r0_51 + 0x214u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    clear_list((r5 + 0x1000u) + 0x220u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    do {
        queue_append(r10, (r5 + (r4 << 8)) + 8u, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 += 1u;
        cf_5 = r4 >= 0x12u;  // (from the original)
        guest::preempt();
    } while (!cf_5);
    ObjectOwner__release_object(r5, guest::cpu()->r[1], r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r9 != 0) {
        frame->word_4 = r7;
        u32 r1_31 = frame->word_18;
        frame->word_c = 0x88e3d4;  // (from the original)
        frame->word_8 = r6;
        frame->word_0 = r8;
        HeapHolder__recreate(r5, r1_31, r9, frame.at(8).addr());
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r5 = global_00ad0ff0_address;
    r9 = *gptr<u32>(r11);
    r10 = 0x12200u;  // (from the original)
    r4 = *gptr<u32>(r5 + 0x1f0cu);  // (from the original)
    if (r4 != 0) {
        do {
            WordAndFlag__clear(r4 + 0xcu, r1, r2, r3);  // (from the original)
            destroy_load_split_base_part(r4 + 0x14u);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r4 = *gptr<u32>(r4 + 8u);
            zf_27 = r4 == 0;
            guest::preempt();
        } while (!zf_27);
    }
    r4 = *gptr<u32>(r5 + 0x1f24u);  // (from the original)
    if (r4 != 0) {
        do {
            WordAndFlag__clear(r4 + 0xcu, r1, r2, r3);  // (from the original)
            destroy_load_split_base_part(r4 + 0x14u);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r4 = *gptr<u32>(r4 + 8u);
            zf_29 = r4 == 0;
            guest::preempt();
        } while (!zf_29);
    }
    clear_list((r5 + 0x1c00u) + 0x308u, r1, r2, r3);  // (from the original)
    u32 r0_62 = r5 + 0x1c00u;  // (from the original)
    r11 = r0_62 + 0x314u;  // (from the original)
    clear_list(r0_62 + 0x314u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    clear_list((r5 + 0x1000u) + 0xf20u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    do {
        queue_append(r11, (r5 + (r4 << 8)) + 8u, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 += 1u;
        cf_6 = r4 >= 0x1fu;  // (from the original)
        guest::preempt();
    } while (!cf_6);
    u32 r0_67 = ObjectOwner__release_object(r5, guest::cpu()->r[1], r2, r3);
    if (r9 != 0) {
        frame->word_c = 0x88e3d4;  // (from the original)
        frame->word_8 = r6;
        frame->word_4 = r7;
        frame->word_0 = r8;
        r0_67 = HeapHolder__recreate(r5, r10, r9, frame.at(8).addr());
    }
    return r0_67;
}

}  // namespace d_001b1308
GUEST_EXPORT_FRAMED(0x001b1308, d_001b1308::sead__SafeStringBase_char___SafeStringBase_001b1308, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_001b1900: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b1900 {

struct __attribute__((packed)) Object_001b1900_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_001b1900_0, word_4, 0x4);

struct __attribute__((packed)) Object_001b1900_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_001b1900_1, word_4, 0x4);
GUEST_OFFSET(Object_001b1900_1, word_8, 0x8);

inline constexpr guest::Function<0x00134544, u32(u32, u32, u32)> copy_bytes_small_sizes_first;
inline constexpr guest::Function<0x003193e8, u32(u32, u32, u32, u32)> crc32;
inline constexpr guest::Function<0x007586b4, u32(u32, u32)> call_007586b4;

u32 f_001b1900(gptr<Object_001b1900_0> arg0, gptr<Object_001b1900_1> arg1) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r4_1 = 0;
    u32 r6 = r0;
    u32 r5 = r1;
    u32 r4 = r1;
    if (arg1->word_4 == 3u) {
        if (arg0->word_4 == 3u) {
            goto L_1b1988;
        }
        if (arg1->word_8 == 0) {
            guest::cpu()->r[1] = r1;
            return 0u;
        }
L_1b1934:;
        r3_1 = ~0u;
        r0_1 = r4 + 4u;
        r0_2 = crc32(r0_1, 0x28cu, r3_1, r3_1);  // (from the original)
        r1 = *gptr<u32>(r4);
        if (r1 != r0_2) {
            guest::cpu()->r[1] = r1;
            return 0u;
        }
        r0_3 = r4 + 0x10u;  // (from the original)
        r0_4 = call_007586b4(r0_3, 0u);
        r1 = guest::cpu()->r[1];
        if (r0_4 == 0) {
            return 0u;
        } else {
            r4_1 = 1u;
        }
        copy_bytes_small_sizes_first(r6, r5, 0x290u);  // (from the original)
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
GUEST_EXPORT_FRAMED(0x001b1900, d_001b1900::f_001b1900, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001b19ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b19ac {

struct __attribute__((packed)) Object_001b19ac_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 byte_c;
    u16 half_d;
    u8 byte_f;
};
GUEST_OFFSET(Object_001b19ac_0, word_0, 0x0);
GUEST_OFFSET(Object_001b19ac_0, word_4, 0x4);
GUEST_OFFSET(Object_001b19ac_0, word_8, 0x8);
GUEST_OFFSET(Object_001b19ac_0, byte_c, 0xc);
GUEST_OFFSET(Object_001b19ac_0, half_d, 0xd);
GUEST_OFFSET(Object_001b19ac_0, byte_f, 0xf);

inline constexpr guest::Function<0x002ff368, u32(u32, u32, u32, u32)> Letter__Letter;

u32 f_001b19ac(gptr<Object_001b19ac_0> arg0) {
    arg0->word_0 = 0;
    arg0->word_4 = 0;
    arg0->word_8 = 0;
    arg0->byte_c = 0;
    u32 r0_1 = arg0.addr() + 0x10u;  // (from the original)
    Letter__Letter(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    arg0->half_d = 0;
    arg0->byte_f = 0;
    return r0_1 - 0x10u;  // (from the original)
}

}  // namespace d_001b19ac
GUEST_EXPORT_FRAMED(0x001b19ac, d_001b19ac::f_001b19ac, 0x4010);  // pushes {r4, lr} first, as the original

// f_001b19dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b19dc {

struct __attribute__((packed)) Object_001b19dc_0 {
    u8 unknown_0[0x2];  // (not used here)
    u8 byte_2;
    u8 unknown_3[0x1];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_001b19dc_0, byte_2, 0x2);
GUEST_OFFSET(Object_001b19dc_0, word_4, 0x4);
GUEST_OFFSET(Object_001b19dc_0, word_8, 0x8);


void f_001b19dc(gptr<Object_001b19dc_0> arg0, u32 r1) {
    u32 r2_1 = arg0->word_8 + r1;
    arg0->word_8 = r2_1;
    u32 r1_1 = arg0->byte_2;
    if (r1_1 != 2u && r1_1 != 1u) {
        guest::cpu()->r[1] = r1_1;
        return;
    }
    u32 r1_2 = arg0->word_4;
    if (r1_2 == 0 || r2_1 == 0) {
        guest::cpu()->r[1] = r1_2;
        return;
    }
    if (r1_2 <= r2_1) {
        r1_2 = 2u;
        arg0->byte_2 = u8(r1_2);
    }
    guest::cpu()->r[1] = r1_2;
}

}  // namespace d_001b19dc
GUEST_EXPORT(0x001b19dc, d_001b19dc::f_001b19dc);

// f_001b1a18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b1a18 {

struct __attribute__((packed)) Object_001b1a18_0 {
    u8 unknown_0[0x2];  // (not used here)
    u8 byte_2;
};
GUEST_OFFSET(Object_001b1a18_0, byte_2, 0x2);


void f_001b1a18(gptr<Object_001b1a18_0> arg0) {
    u32 r1_1 = arg0->byte_2;
    if (r1_1 == 2u) {
        r1_1 = 4u;
        arg0->byte_2 = u8(r1_1);
    }
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_001b1a18
GUEST_EXPORT(0x001b1a18, d_001b1a18::f_001b1a18);

// f_001b1a2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b1a2c {

struct __attribute__((packed)) Object_001b1a2c_0 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(Object_001b1a2c_0, byte_0, 0x0);
GUEST_OFFSET(Object_001b1a2c_0, byte_1, 0x1);


void f_001b1a2c(gptr<Object_001b1a2c_0> arg0, u32 r1, u32 r2) {
    arg0->byte_0 = u8(r1);
    arg0->byte_1 = u8(r2);
}

}  // namespace d_001b1a2c
GUEST_EXPORT(0x001b1a2c, d_001b1a2c::f_001b1a2c);

// f_001b1a44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b1a44 {

struct __attribute__((packed)) Object_001b1a44_0 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 unknown_3[0x1];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_001b1a44_0, byte_0, 0x0);
GUEST_OFFSET(Object_001b1a44_0, byte_1, 0x1);
GUEST_OFFSET(Object_001b1a44_0, byte_2, 0x2);
GUEST_OFFSET(Object_001b1a44_0, word_4, 0x4);
GUEST_OFFSET(Object_001b1a44_0, word_8, 0x8);

inline constexpr guest::Function<0x0024ea1c, u32(u32)> clear_number_pair;

u32 f_001b1a44(gptr<Object_001b1a44_0> arg0) {
    arg0->byte_0 = 0;
    arg0->byte_1 = 0;
    arg0->byte_2 = 0;
    arg0->word_4 = 0;
    arg0->word_8 = 0;
    clear_number_pair(arg0.addr() + 0xcu);  // (from the original)
    return arg0.addr();
}

}  // namespace d_001b1a44
GUEST_EXPORT_FRAMED(0x001b1a44, d_001b1a44::f_001b1a44, 0x4010);  // pushes {r4, lr} first, as the original

// f_001b1b40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b1b40 {

struct __attribute__((packed)) Object_001b1b40_0 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Object_001b1b40_0, byte_0, 0x0);
GUEST_OFFSET(Object_001b1b40_0, byte_1, 0x1);
GUEST_OFFSET(Object_001b1b40_0, byte_2, 0x2);

struct __attribute__((packed)) Object_001b1b40_1 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Object_001b1b40_1, byte_0, 0x0);
GUEST_OFFSET(Object_001b1b40_1, byte_1, 0x1);
GUEST_OFFSET(Object_001b1b40_1, byte_2, 0x2);


void copy_3_bytes(gptr<Object_001b1b40_0> dst, gptr<Object_001b1b40_1> src) {
    dst->byte_0 = src->byte_0;
    dst->byte_1 = src->byte_1;
    u32 r1_1 = src->byte_2;
    dst->byte_2 = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_001b1b40
GUEST_EXPORT(0x001b1b40, d_001b1b40::copy_3_bytes);

// f_001b1bf8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
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
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> copy_item_002fc8e8;
inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> GridMap__place_item_at_world;
inline constexpr guest::Function<0x0059e65c, u32(u32, u32, u32, u32)> clear_field_tile;
inline constexpr guest::Function<0x006a5e34, u32(u32)> get_object_009b4a24;

struct __attribute__((packed)) Frame_001b1bf8 {
    u32 word_0;
    u8 unknown_4[0x1c];  // (not read or written by name)
};
GUEST_OFFSET(Frame_001b1bf8, word_0, 0x0);
GUEST_SIZE(Frame_001b1bf8, 0x20);

u32 f_001b1bf8(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_001b1bf8> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r14 = guest::cpu()->r[14];
    if (s32(r1) < 0 || r1 >= 0x10u) {  // (from the original)
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
    copy_item_002fc8e8(r0 + (r1 << 2), empty_item_address, r2, r3);
    u32 r0_2 = r0 + r1;
    *gptr<u8>(r0_2 + 0x40u) = 0;  // (from the original)
    u32 r0_3 = get_object_009b4a24(r0_2);
    if (r0_3 != 0) {
        frame->word_0 = 0;
        GridMap__place_item_at_world(r0_3, empty_item_address, r2, r3);
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
    return r0_3;
}

}  // namespace d_001b1bf8
GUEST_EXPORT(0x001b1bf8, d_001b1bf8::f_001b1bf8);

// f_001b1c70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b1c70 {

inline constexpr guest::Function<0x001b1b5c, u32(u32, u32, u32, u32)> Pockets__close_gaps;
inline constexpr guest::Function<0x001b21f4, u32(u32, u32, u32, u32)> call_001b21f4;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;
inline constexpr guest::Function<0x002fc288, u32(u32, u32, u32, u32)> call_24a5ec_returning_first;
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> Item__is_empty;
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> Item__category;
inline constexpr guest::Function<0x002fe9c8, u32(u32, u32, u32, u32)> ItemSet__add_group_without_flags;
inline constexpr guest::Function<0x003004c4, u32(u32, u32, u32)> pick_distinct_items;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;

void f_001b1c70(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x2f8);  // the original's stack frame
    u32 r6 = 0u;
    u32 r5 = r0;
    u32 r4 = r6;
    do {
        u32 is_empty_3 = Item__is_empty(r5 + (r4 << 2), r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (is_empty_3 == 0) {
            r6 += 1u;
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0x10u);  // (from the original)
    call_24a5ec_returning_first(frame.at(0).addr(), r1, r2, r3);
    ItemSet__add_group_without_flags(frame.at(0).addr(), 5u, 5u, 0u);
    for_each_element(frame.at(0x2e8).addr(), 0x2fc20cu, 4u, 3u);  // (from the original)
    pick_distinct_items(frame.at(0x2e8).addr(), 3u, frame.at(0).addr());  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 r7 = 0u;
    if (s32(r6) < 3) {
        u32 r10 = frame.at(0x2e8).addr();  // (from the original)
        do {
            u32 r8 = r10 + (r7 << 2);
            u32 r9 = 0u;
            u32 category_2 = Item__category(r8, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (category_2 != 0x95u) {  // (from the original)
                Pockets__close_gaps(r5, r1, r2, r3);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                r4 = 0u;
                do {
                    u32 is_empty_4 = Item__is_empty(r5 + (r4 << 2), r1, r2, r3);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    if (is_empty_4 != 0) {
                        call_001b21f4(r5, r4, r8, r9);
                        r1 = guest::cpu()->r[1];
                        r2 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
                        break;
                    }
                    r4 += 1u;
                    guest::preempt();
                } while (r4 < 0x10u);  // (from the original)
            }
            r6 += 1u;
            r7 += 1u;
            guest::preempt();
        } while (s32(r6) < 3);
    }
    destroy_array_elements(frame.at(0x2e8).addr(), 0x2f777cu, 4u, 3u);  // (from the original)
}

}  // namespace d_001b1c70
GUEST_EXPORT_FRAMED(0x001b1c70, d_001b1c70::f_001b1c70, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_001b2114: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b2114 {

inline constexpr guest::Function<0x001b1b5c, u32(u32, u32)> Pockets__close_gaps;
inline constexpr guest::Function<0x001b21f4, u32(u32, u32, u32, u32)> call_001b21f4;
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> Item__is_empty;
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> Item__category;

u32 f_001b2114(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r0_2 = 0;
    u32 r5 = r0;
    u32 r7 = r2;
    u32 r6 = r1;
    u32 category_2 = Item__category(r1, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (category_2 == 0x95u) {  // (from the original)
        r0_2 = 1u;
    } else {
        Pockets__close_gaps(r5, r1);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        u32 r4 = 0u;
        do {
            u32 is_empty_2 = Item__is_empty(r5 + (r4 << 2), r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (is_empty_2 != 0) {
                frame.release();
                return call_001b21f4(r5, r4, r6, r7);
            }
            r4 += 1u;
            guest::preempt();
        } while (r4 < 0x10u);  // (from the original)
        r0_2 = 0u;
    }
    guest::cpu()->r[1] = r1;
    return r0_2;
}

}  // namespace d_001b2114
GUEST_EXPORT(0x001b2114, d_001b2114::f_001b2114);

// f_001b21f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b21f4 {

struct __attribute__((packed)) Local_001b21f4_r5_1 {
    u8 unknown_0[0x40];  // (not used here)
    u8 byte_40;
};
GUEST_OFFSET(Local_001b21f4_r5_1, byte_40, 0x40);

inline constexpr guest::Function<0x002fae84, u32(u32)> get_data_base;
inline constexpr guest::Function<0x002fb310, u32(u32)> slot_records_of;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> copy_item_002fc8e8;
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> copy_item_002fc934;
inline constexpr guest::Function<0x002fcb34, u32(u32)> Item__category;
inline constexpr guest::Function<0x002fcb9c, u32(u32)> item_flags_bit_15;
inline constexpr guest::Function<0x002fe53c, u32(u32)> Item__is_bell_bag;
inline constexpr guest::Function<0x0030c578, u32(u32, u32)> call_0030c578;
inline constexpr guest::Function<0x006b9914, u32(u32)> clear_half_bits_6b9914;
inline constexpr guest::Function<0x006b9924, u32(u32)> clear_half_bits_6b9924;
inline constexpr guest::Function<0x006b9c98, u32(u32, u32)> call_006b9c98;
inline constexpr guest::Function<0x00768174, u32(u32)> Item__is_kind_2;
inline constexpr guest::Function<0x00768cc8, u32(u32)> item_category_flag_bit_4;

u32 f_001b21f4(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    gptr<Local_001b21f4_r5_1> r5_1 = gptr<Local_001b21f4_r5_1>(0u);
    u32 r6_1 = 0;
    u32 r0_14 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    copy_item_002fc934(frame.at(0).addr(), r2, r2, r3);
    u32 r0_3 = Item__is_bell_bag(frame.at(0).addr());
    if (r0_3 != 0) {
        clear_half_bits_6b9914(frame.at(0).addr());
    }
    u32 category_3 = Item__category(r2);
    if (category_3 != 0x4eu) {  // (from the original)
        if (r1 >= 0x10u) {  // (from the original)
            return 0u;
        }
        u32 r0_6 = Item__is_kind_2(r2);
        r5_1 = gptr<Local_001b21f4_r5_1>(r0 + r1);
        r6_1 = r0 + (r1 << 2);
        if (r0_6 == 0) {
            u32 r0_7 = item_category_flag_bit_4(r2);
            if (r0_7 != 0) {
                copy_item_002fc934(frame.at(4).addr(), frame.at(0).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
                u32 category_4 = Item__category(frame.at(4).addr());
                u32 r0_11 = frame.at(4).addr();
                if (category_4 != 0x2bu) {  // (from the original)
                    clear_half_bits_6b9924(r0_11);
                    if (category_4 == 0x27u || category_4 == 0x24u) {  // (from the original)
                        goto L_1b2324;
                    }
                    if (category_4 == 0x3fu) {  // (from the original)
                        call_006b9c98(frame.at(8).addr(), frame.at(4).addr());
                        copy_item_002fc8e8(frame.at(4).addr(), frame.at(8).addr());
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
        copy_item_002fc8e8(r6_1, frame.at(0).addr());
        clear_half_bits_6b9924(r6_1);
        r5_1->byte_40 = u8(r3);
        return 1u;
    }
    r0_16 = get_data_base(category_3);
    r0_17 = slot_records_of(r0_16);
    r0_18 = r0_17 + 0x1764eu;  // (from the original)
    call_0030c578(r0_18, 0x1764au);  // (from the original)
    return 0u;
L_1b2378:;
    copy_item_002fc8e8(r6_1, frame.at(4).addr());
    r5_1->byte_40 = u8(r3);
    return 1u;
}

}  // namespace d_001b21f4
GUEST_EXPORT_FRAMED(0x001b21f4, d_001b21f4::f_001b21f4, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_001b23ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b23ac {

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> copy_item_002fc8e8;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;

u32 f_001b23ac(u32 r0) {
    u32 r0_1 = for_each_element(r0, 0x2fc20cu, 4u, 0x10u);  // (from the original)
    u32 r2 = guest::cpu()->r[2];
    u32 r3 = guest::cpu()->r[3];
    u32 r5 = r0_1;
    u32 r4 = 0u;
    do {
        copy_item_002fc8e8(r5 + (r4 << 2), empty_item_address, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0x10u);  // (from the original)
    return r5;
}

}  // namespace d_001b23ac
GUEST_EXPORT_FRAMED(0x001b23ac, d_001b23ac::f_001b23ac, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001b23f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b23f0 {

struct __attribute__((packed)) script__WordFix_9u_ {
    u8 unknown_0[0xc6];  // (not used here)
    u8 byte_c6;
    u8 byte_c7;
};
GUEST_OFFSET(script__WordFix_9u_, byte_c6, 0xc6);
GUEST_OFFSET(script__WordFix_9u_, byte_c7, 0xc7);

inline constexpr u32 vtable_script__WordFix_9u_ = 0x0090a3e8u;
inline constexpr guest::Function<0x0022d74c, u32(u32, u32, u32, u32)> call_0022d74c;
inline constexpr guest::Function<0x0022e048, u32(u32)> call_0022e048;
inline constexpr guest::Function<0x0022e05c, u32(u32)> call_0022e05c;
inline constexpr guest::Function<0x0022e070, u32(u32)> call_0022e070;
inline constexpr guest::Function<0x0022e08c, u32(u32, u32, u32, u32)> MailLoadAdapt__MailLoadAdapt;
inline constexpr guest::Function<0x0022e138, u32(u32)> MailLoadAdapt__destructor;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32)> copy_bytes_at_any_alignment;
inline constexpr guest::Function<0x002fb94c, u32(u32)> get_current_player;
inline constexpr guest::Function<0x002fc20c, u32(u32)> construct_empty_item;
inline constexpr guest::Function<0x002ff408, u32(u32)> Letter__clear;
inline constexpr guest::Function<0x00300a64, u32(u32, u32, u32)> call_00300a64;
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32)> script__construct_word_ptr;
inline constexpr guest::Function<0x0056d374, u32(u32, u32, u32, u32)> call_0056d374;
inline constexpr guest::Function<0x005f4bfc, u32(u32)> construct_script_word;

struct __attribute__((packed)) Frame_001b23f0 {
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
GUEST_OFFSET(Frame_001b23f0, word_0, 0x0);
GUEST_OFFSET(Frame_001b23f0, word_4, 0x4);
GUEST_OFFSET(Frame_001b23f0, word_8, 0x8);
GUEST_OFFSET(Frame_001b23f0, word_c, 0xc);
GUEST_OFFSET(Frame_001b23f0, word_10, 0x10);
GUEST_OFFSET(Frame_001b23f0, word_14, 0x14);
GUEST_OFFSET(Frame_001b23f0, word_18, 0x18);
GUEST_OFFSET(Frame_001b23f0, word_1c, 0x1c);
GUEST_OFFSET(Frame_001b23f0, word_20, 0x20);
GUEST_OFFSET(Frame_001b23f0, word_24, 0x24);
GUEST_OFFSET(Frame_001b23f0, word_28, 0x28);
GUEST_OFFSET(Frame_001b23f0, word_2c, 0x2c);
GUEST_OFFSET(Frame_001b23f0, word_30, 0x30);
GUEST_OFFSET(Frame_001b23f0, word_34, 0x34);
GUEST_OFFSET(Frame_001b23f0, byte_38, 0x38);
GUEST_OFFSET(Frame_001b23f0, word_3c, 0x3c);
GUEST_OFFSET(Frame_001b23f0, word_40, 0x40);
GUEST_OFFSET(Frame_001b23f0, word_44, 0x44);
GUEST_OFFSET(Frame_001b23f0, word_48, 0x48);
GUEST_OFFSET(Frame_001b23f0, word_4c, 0x4c);
GUEST_OFFSET(Frame_001b23f0, word_50, 0x50);
GUEST_OFFSET(Frame_001b23f0, word_54, 0x54);
GUEST_OFFSET(Frame_001b23f0, word_58, 0x58);
GUEST_OFFSET(Frame_001b23f0, word_5c, 0x5c);
GUEST_OFFSET(Frame_001b23f0, word_60, 0x60);
GUEST_OFFSET(Frame_001b23f0, word_64, 0x64);
GUEST_OFFSET(Frame_001b23f0, word_68, 0x68);
GUEST_OFFSET(Frame_001b23f0, byte_6c, 0x6c);
GUEST_OFFSET(Frame_001b23f0, byte_276, 0x276);
GUEST_OFFSET(Frame_001b23f0, word_3c0, 0x3c0);
GUEST_SIZE(Frame_001b23f0, 0x3ec);

void script__WordFix_9u___WordFix_001b23f0(gptr<script__WordFix_9u_> word_fix_9u, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_001b23f0> frame;  // the original's stack frame
    u32 r0 = word_fix_9u.addr();
    u32 res_1 = 0;
    u32 r3_8 = 0;
    u32 r0_7 = 0;
    u32 r0_11 = 0;
    u32 r7 = 0u;
    u32 r4 = r0;
    u32 r9 = frame.at(0x288).addr();  // (from the original)
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
    u32 r10 = frame.at(8).addr();
    frame->word_48 = r7;
    frame->word_4c = r7;
    frame->word_50 = r7;
    frame->word_54 = r7;
    frame->word_58 = r7;
    u32 r0_1 = r10 + 0x274u;  // (from the original)
    frame->word_5c = r7;
    frame->word_60 = r7;
    frame->word_64 = r7;
    frame->word_68 = r7;
    frame->byte_6c = u8(r7);
    construct_empty_item(r0_1);
    Letter__clear(r0_1 - 0x274u);  // (from the original)
    call_0022e05c(r9);
    u32 r8 = frame.at(0x3c0).addr();  // (from the original)
    u32 r11 = 4u;
    script__construct_word_ptr(r8, frame.at(0x3d8).addr(), 9u);  // (from the original)
    u32 r6 = vtable_script__WordFix_9u_;
    *gptr<u32>(r8) = r6;
    u32 r0_3 = r8 + 0xcu;  // (from the original)
    construct_script_word(r0_3);
    u32 r5 = r0_3 - 0xcu;  // (from the original)
    clear_aligned(r0_3 + 0xcu, 0x12u);  // (from the original)
    r1 = 0x8906ecu;  // (from the original)
    r0 = r5 + 0x18u;  // (from the original)
    *gptr<u16>(r5 + 0x18u) = *gptr<u16>(r1);  // (from the original)
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
    call_0056d374(r5, r11, r2, r3_8);
    u32 r0_5 = call_0022e070(r9);
    call_00300a64(r0_5, r8, 0u);
    frame->word_3c0 = r6;
    frame->word_0 = r7;
    frame->word_4 = r7;
    call_0022d74c(r9, r10, 0x88e890u, 3u);  // (from the original)
    copy_bytes_at_any_alignment(r4 + 0x84u, r10 + 0x22cu, 0x42u);  // (from the original)
    if (frame->byte_38 == 6u) {
        r0_7 = r4 + 0x42u;  // (from the original)
        *gptr<u8>(r4 + 0xc7u) = frame->byte_276;  // (from the original)
    } else {
        *gptr<u8>(r4 + 0xc6u) = frame->byte_276;  // (from the original)
        r0_7 = r4;
    }
    u32 r0_8 = copy_bytes_at_any_alignment(r0_7, r10 + 0x68u, 0x42u);  // (from the original)
    u32 player_2 = get_current_player(r0_8);
    u32 r1_10 = 0u;
    if (player_2 != 0) {
        r1_10 = player_2 + 0x55a6u;  // (from the original)
    }
    frame->word_0 = 1;
    frame->word_4 = r1_10;
    call_0022d74c(r9, r10, 0x88e890u, 4u);  // (from the original)
    copy_bytes_at_any_alignment(r4 + 0x84u, r10 + 0x22cu, 0x42u);  // (from the original)
    u32 r1_12 = frame->byte_276;
    if (frame->byte_38 == 6u) {
        *gptr<u8>(r4 + 0xc7u) = u8(r1_12);  // (from the original)
        r0_11 = r4 + 0x42u;  // (from the original)
    } else {
        *gptr<u8>(r4 + 0xc6u) = u8(r1_12);  // (from the original)
        r0_11 = r4;
    }
    copy_bytes_at_any_alignment(r0_11, r10 + 0x68u, 0x42u);  // (from the original)
    call_0022e048(r0_11);
    MailLoadAdapt__destructor(r9);
}

}  // namespace d_001b23f0
GUEST_EXPORT_FRAMED(0x001b23f0, d_001b23f0::script__WordFix_9u___WordFix_001b23f0, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_001b264c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b264c {

struct __attribute__((packed)) Object_001b264c_0 {
    u8 unknown_0[0xc6];  // (not used here)
    u8 byte_c6;
    u8 byte_c7;
};
GUEST_OFFSET(Object_001b264c_0, byte_c6, 0xc6);
GUEST_OFFSET(Object_001b264c_0, byte_c7, 0xc7);

inline constexpr guest::Function<0x00301444, u32(u32, u32)> clear;

void f_001b264c(gptr<Object_001b264c_0> arg0) {
    clear(arg0.addr(), 0xc8u);  // (from the original)
    arg0->byte_c7 = 0xff;  // (from the original)
    arg0->byte_c6 = 0xff;  // (from the original)
}

}  // namespace d_001b264c
GUEST_EXPORT_FRAMED(0x001b264c, d_001b264c::f_001b264c, 0x4010);  // pushes {r4, lr} first, as the original

// f_001b266c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b266c {

struct __attribute__((packed)) Object_001b266c_0 {
    u8 unknown_0[0xc6];  // (not used here)
    u8 byte_c6;
    u8 byte_c7;
};
GUEST_OFFSET(Object_001b266c_0, byte_c6, 0xc6);
GUEST_OFFSET(Object_001b266c_0, byte_c7, 0xc7);

inline constexpr guest::Function<0x00301444, u32(u32, u32)> clear;

u32 f_001b266c(gptr<Object_001b266c_0> arg0) {
    clear(arg0.addr(), 0xc8u);  // (from the original)
    arg0->byte_c7 = 0xff;  // (from the original)
    arg0->byte_c6 = 0xff;  // (from the original)
    return arg0.addr();
}

}  // namespace d_001b266c
GUEST_EXPORT_FRAMED(0x001b266c, d_001b266c::f_001b266c, 0x4010);  // pushes {r4, lr} first, as the original

// f_001b2690: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b2690 {

struct __attribute__((packed)) Object_001b2690_0 {
    u8 unknown_0[0xc8b0];  // (not used here)
    u8 byte_c8b0;
};
GUEST_OFFSET(Object_001b2690_0, byte_c8b0, 0xc8b0);

inline constexpr guest::Function<0x0024dbc0, u32(u32, u32)> call_0024dbc0;
inline constexpr guest::Function<0x006bd910, u32(u32, u32, u32, u32)> player_operation_c;

u32 f_001b2690(gptr<Object_001b2690_0> arg0) {
    player_operation_c(arg0.addr() + 8u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    call_0024dbc0(arg0.addr() + 0xa488u, 0u);  // (from the original)
    arg0->byte_c8b0 = 0;
    return 0u;
}

}  // namespace d_001b2690
GUEST_EXPORT_FRAMED(0x001b2690, d_001b2690::f_001b2690, 0x4010);  // pushes {r4, lr} first, as the original

// f_001b26c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
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

inline constexpr guest::Function<0x001b266c, u32(u32)> call_001b266c;
inline constexpr guest::Function<0x0020bec8, u32(u32)> call_0020bec8;
inline constexpr guest::Function<0x0020cbf0, u32(u32, u32, u32, u32)> call_0020cbf0;
inline constexpr guest::Function<0x0024a56c, u32(u32)> call_0024a56c;
inline constexpr guest::Function<0x0024a5ec, u32(u32)> ItemBitSet__clear;
inline constexpr guest::Function<0x0024b730, u32(u32)> call_0024b730;
inline constexpr guest::Function<0x0024d8fc, u32(u32, u32, u32, u32)> call_0024d8fc;
inline constexpr guest::Function<0x0024dcc0, u32(u32)> call_0024dcc0;
inline constexpr guest::Function<0x0029b870, u32(u32)> clear_32_bytes;
inline constexpr guest::Function<0x002beff0, u32(u32)> clear_counter_set;
inline constexpr guest::Function<0x002c0048, u32(u32)> call_002c0048;
inline constexpr guest::Function<0x002fc20c, u32(u32)> construct_empty_item;
inline constexpr guest::Function<0x00301444, u32(u32, u32)> clear;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x00303534, u32(u32, u32)> EncryptedInt__set;
inline constexpr guest::Function<0x00303b10, u32(u32)> call_00303b10;
inline constexpr guest::Function<0x003328ec, u32(u32)> call_003328ec;
inline constexpr guest::Function<0x005bb9f0, u32(u32)> call_005bb9f0;
inline constexpr guest::Function<0x005bd01c, u32(u32)> call_005bd01c;
inline constexpr guest::Function<0x005bd234, u32(u32)> call_005bd234;
inline constexpr guest::Function<0x005bd3fc, u32(u32)> call_005bd3fc;
inline constexpr guest::Function<0x005bdaa0, u32(u32)> call_005bdaa0;
inline constexpr guest::Function<0x005be19c, u32(u32)> call_005be19c;
inline constexpr guest::Function<0x005be8c0, u32(u32)> call_005be8c0;

u32 f_001b26c8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_2 = call_0020cbf0(r0 + 8u, r1, r2, r3);
    EncryptedInt__set(r0_2 + 0x6b8cu, 0u);  // (from the original)
    u32 r6 = 0u;
    EncryptedInt__set(r0_2 + 0x6b94u, r6);  // (from the original)
    EncryptedInt__set(r0_2 + 0x6b9cu, 0u);  // (from the original)
    EncryptedInt__set(r0_2 + 0x6ba4u, 0u);  // (from the original)
    u32 r0_8 = for_each_element(r0_2 + 0x6bd0u, 0x2fc20cu, 4u, 0x10u);  // (from the original)
    ItemBitSet__clear(r0_8 + 0x50u);  // (from the original)
    EncryptedInt__set(r0_8 + 0x338u, 0u);  // (from the original)
    u32 r0_12 = for_each_element(r0_8 + 0x340u, 0x2fc20cu, 4u, 0x28u);  // (from the original)
    u32 r0_14 = for_each_element(r0_12 + 0xa0u, 0x2fc20cu, 4u, 0x10u);  // (from the original)
    u32 r0_15 = r0_14 + 0x50u;  // (from the original)
    construct_empty_item(r0_15);
    u32 r0_16 = r0_15 + 4u;
    construct_empty_item(r0_16);
    u32 r0_18 = for_each_element(r0_16 + 4u, 0x2ff368u, 0x280u, 0xau);  // (from the original)
    u32 r0_19 = r0_18 + 0x1900u;  // (from the original)
    call_001b266c(r0_19);
    r3 = 0xffffu;  // (from the original)
    r0 = r0_19 + 0xf2u;  // (from the original)
    r2 = 0u;
    r1 = r2;
    do {
        u32 r2_10 = r2 + 1u;
        r1 += 2u;
        *gptr<u16>(r0 + (r2 << 1)) = u16(r3);
        r2 = r2_10 + 1u;
        *gptr<u16>(r0 + (r2_10 << 1)) = u16(r3);
        guest::preempt();
    } while (s32(r1) < 0x20);  // (from the original)
    u32 r0_21 = call_0024d8fc(r0 + 0x42u, r1, r2, r3);  // (from the original)
    u32 r0_22 = r0_21 + 0xa4u;  // (from the original)
    call_0024b730(r0_22);
    u32 r4_1 = r0_22 + 0x23cu;  // (from the original)
    EncryptedInt__set(r4_1, 0u);
    EncryptedInt__set(r4_1 + 8u, 0u);
    EncryptedInt__set(r4_1 + 0x10u, 0u);  // (from the original)
    EncryptedInt__set(r4_1 + 0x18u, 0u);  // (from the original)
    EncryptedInt__set(r4_1 + 0x20u, 0u);  // (from the original)
    EncryptedInt__set(r4_1 + 0x28u, 0u);  // (from the original)
    clear_counter_set(r4_1);
    u32 r0_28 = (r0_22 - 0x8ae0u) + 0x8d4cu;  // (from the original)
    call_005bd234(r0_28);
    u32 r0_29 = r0_28 + 0x10u;  // (from the original)
    call_005bd3fc(r0_29);
    u32 r0_30 = r0_29 + 0x10u;  // (from the original)
    call_005bdaa0(r0_30);
    u32 r0_31 = r0_30 + 0x18u;  // (from the original)
    call_005be19c(r0_31);
    u32 r0_32 = r0_31 + 0x76u;  // (from the original)
    call_005bb9f0(r0_32);
    u32 r0_33 = r0_32 + 0xeu;  // (from the original)
    call_005bd01c(r0_33);
    u32 r0_35 = call_005be8c0(r0_33 + 0xb6u);  // (from the original)
    u32 r0_36 = r0_35 + 0x22u;  // (from the original)
    call_0020bec8(r0_36);
    u32 r0_37 = r0_36 + 0x2au;  // (from the original)
    construct_empty_item(r0_37);
    gptr<Local_001b26c8_r0_38> r0_38 = gptr<Local_001b26c8_r0_38>(r0_37 + 4u);
    construct_empty_item(r0_38.addr());
    u32 r5_3 = r0_38.addr() + 0x69u;  // (from the original)
    r0_38->half_1c = 0x7db;  // (from the original)
    r0_38->half_1e = 0x7db;  // (from the original)
    r0_38->half_20 = u16(r6);
    r0_38->byte_22 = u8(r6);
    r0_38->byte_23 = u8(r6);
    clear(r5_3, 0x22u);  // (from the original)
    call_002c0048(r5_3);
    u32 r4 = (r0_38.addr() - 0x8f0eu) + 0x8f99u;  // (from the original)
    r0 = 0u;
    *gptr<u8>(r4) = u8(r6);
    do {
        *gptr<u8>(r4) = u8(u32(*gptr<u8>(r4)) & ~1u);
L_1b2964:;
        r0 += 1u;
        if (s32(r0) >= 3) {
            u32 r0_40 = for_each_element(r4 + 0xfu, 0x2fc20cu, 4u, 0xau);  // (from the original)
            u32 r0_41 = r0_40 + 0x28u;  // (from the original)
            call_0024a56c(r0_41);
            u32 r0_43 = for_each_element(r0_41 + 0x320u, 0x2fc20cu, 4u, 0xb4u);  // (from the original)
            u32 r0_45 = call_003328ec(r0_43 + 0x314u);  // (from the original)
            u32 r4_3 = r0_45 - 0x9604u;  // (from the original)
            clear(r0_45 + 0xde0u, 0x40u);  // (from the original)
            clear(r4_3 + 0xa424u, 0x40u);  // (from the original)
            u32 r0_49 = for_each_element(r4_3 + 0xa468u, 0x6bd060u, 6u, 3u);  // (from the original)
            u32 r0_50 = r0_49 + 0x12u;  // (from the original)
            call_00303b10(r0_50);
            u32 r0_52 = call_0024dcc0(r0_50 + 6u);
            u32 r0_54 = for_each_element(r0_52 + 0x1228u, 0x2fc20cu, 4u, 0x168u);  // (from the original)
            u32 r0_55 = r0_54 + 0x5a0u;  // (from the original)
            clear_32_bytes(r0_55);
            u32 r0_56 = r0_55 - 0xbc50u;  // (from the original)
            gptr<Local_001b26c8_r1_22> r1_22 = gptr<Local_001b26c8_r1_22>(r0_56 + 0xbc84u);  // (from the original)
            r1_22->half_0 = u16(r6);
            r1_22->byte_2 = u8(r6);
            r1_22->byte_3 = u8(r6);
            guest::cpu()->r[1] = r1_22.addr();
            return r0_56;
        }
        if (r0 != 0) {
            if (r0 == 1u) {
                *gptr<u8>(r4) = u8(u32(*gptr<u8>(r4)) & ~2u);
                guest::preempt();
                goto L_1b2964;
            }
            if (r0 != 2u) {
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
GUEST_EXPORT_FRAMED(0x001b26c8, d_001b26c8::f_001b26c8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001b2a5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b2a5c {

inline constexpr guest::Function<0x00134fa4, u32(u32)> call_00134fa4;
inline constexpr guest::Function<0x00138a00, u32(u32)> do_nothing_00138a00;
inline constexpr guest::Function<0x00138a1c, u32(u32)> do_nothing_00138a1c;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;

u32 f_001b2a5c(u32 r0) {
    u32 r0_1 = r0 + 0xbc50u;  // (from the original)
    destroy_array_elements(r0_1 - 0x5a0u, 0x2f777cu, 4u, 0x168u);  // (from the original)
    call_00134fa4(r0_1 - 0x17c8u);  // (from the original)
    destroy_array_elements(r0_1 - 0x17e0u, 0x138b90u, 6u, 3u);  // (from the original)
    destroy_array_elements(r0_1 - 0x2644u, 0x2f77e8u, 0x280u, 5u);  // (from the original)
    destroy_array_elements(r0_1 - 0x2958u, 0x2f777cu, 4u, 0xb4u);  // (from the original)
    destroy_array_elements(r0_1 - 0x2ca0u, 0x2f777cu, 4u, 0xau);  // (from the original)
    do_nothing_00138a1c(r0_1 - 0x2ec4u);  // (from the original)
    do_nothing_00138a00(r0_1 - 0x2edcu);  // (from the original)
    destroy_array_elements(r0_1 - 0x4c40u, 0x2f77e8u, 0x280u, 0xau);  // (from the original)
    destroy_array_elements(r0_1 - 0x4c98u, 0x2f777cu, 4u, 0x10u);  // (from the original)
    destroy_array_elements(r0_1 - 0x4d38u, 0x2f777cu, 4u, 0x28u);  // (from the original)
    destroy_array_elements(r0_1 - 0x5078u, 0x2f777cu, 4u, 0x10u);  // (from the original)
    destroy_array_elements(r0_1 - 0x6704u, 0x2f7744u, 0x18u, 4u);  // (from the original)
    return r0_1 - 0xbc50u;  // (from the original)
}

}  // namespace d_001b2a5c
GUEST_EXPORT_FRAMED(0x001b2a5c, d_001b2a5c::f_001b2a5c, 0x4010);  // pushes {r4, lr} first, as the original

// f_001b3174: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b3174 {

struct __attribute__((packed)) Local_001b3174_r0_1 {
    u8 unknown_0[0x58];  // (not used here)
    u8 byte_58;
};
GUEST_OFFSET(Local_001b3174_r0_1, byte_58, 0x58);

inline constexpr u32 global_0095c010_address = 0x0095c010u;

void f_001b3174(u32 r0, u32 r1, u32 r2) {
    if (r1 >= 0xfu) {  // (from the original)
        return;
    }
    gptr<Local_001b3174_r0_1> r0_1 = gptr<Local_001b3174_r0_1>(r0 + r1);
    if ((u32(gptr<u16>(global_0095c010_address)[r2]) & 0xfu) == 0) {  // (from the original)
        r0_1->byte_58 = u8(r2);
    } else {
        r0_1->byte_58 = 0;
    }
}

}  // namespace d_001b3174
GUEST_EXPORT(0x001b3174, d_001b3174::f_001b3174);

// f_001b31a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
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

inline constexpr u32 global_0095c010_address = 0x0095c010u;
inline constexpr u32 global_00975338_address = 0x00975338u;
inline constexpr u32 global_00ad53a4_address = 0x00ad53a4u;
inline guest::global<u32, 0x00975338> global_00975338;
inline constexpr guest::Function<0x00125b38, u32(u32, u32, u32, u32)> call_00125b38;
inline constexpr guest::Function<0x0012ca50, u32(u32, u32, u32, u32)> construct_font_source;
inline constexpr guest::Function<0x0013864c, u32(u32, u32, u32, u32)> Handle__release;
inline constexpr guest::Function<0x0013bb80, u32(u32)> do_nothing_13bb80;
inline constexpr guest::Function<0x003045a8, u32(u32)> call_3045a8;

struct __attribute__((packed)) Frame_001b31a4 {
    u8 unknown_0[0x4];  // (not read or written by name)
    u32 word_4;
    u8 unknown_8[0xc];  // (not read or written by name)
};
GUEST_OFFSET(Frame_001b31a4, word_4, 0x4);
GUEST_SIZE(Frame_001b31a4, 0x14);

u32 f_001b31a4(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_001b31a4> frame;  // the original's stack frame
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    construct_font_source(frame.at(0).addr(), r1, r2, r3);
    u32 r0_3 = call_3045a8(*global_00975338);
    u32 r4 = r0_3;
    call_00125b38(frame.at(0).addr(), 0x1b328cu, r0_3, 0u);  // (from the original)
    r3 = global_0095c010_address;
    u32 r0 = frame->word_4;
    r1 = 0u;
    do {
        u32 r12_1 = r3 + (r1 << 1);
        u32 v_1 = *gptr<u8>(r0);
        u32 r0_5 = r0 + 1u;
        r1 += 1u;
        u32 v_2 = *gptr<u8>(r0_5);
        r0 = r0_5 + 1u;
        r2_2 = v_1 | v_2 << 8;
        *gptr<u16>(r12_1) = u16(r2_2);
        guest::preempt();
    } while (r1 < 0x100u);  // (from the original)
    Handle__release(frame.at(0).addr(), r1, r2_2, r3);
    call_00125b38(frame.at(0).addr(), 0x1b32a8u, r4, 0u);  // (from the original)
    r2 = global_00ad53a4_address;
    r1 = frame->word_4;
    r0 = 0u;
    do {
        gptr<Local_001b31a4_r3_2> r3_2 = gptr<Local_001b31a4_r3_2>(r1);
        u32 v_3 = *gptr<u32>(r1);
        r1 += 0xfu;  // (from the original)
        gptr<Local_001b31a4_r4_1> r4_1 = gptr<Local_001b31a4_r4_1>((r0 << 4) - r0 + r2);
        r0 += 1u;
        r4_1->word_0 = v_3;
        r4_1->word_4 = r3_2->word_4;
        r4_1->word_8 = r3_2->word_8;
        r4_1->half_c = r3_2->half_c;
        r3_3 = r3_2->byte_e;
        r4_1->byte_e = u8(r3_3);
        guest::preempt();
    } while (r0 < 0xcu);  // (from the original)
    Handle__release(frame.at(0).addr(), r1, r2, r3_3);
    u32 r0_10 = do_nothing_13bb80(frame.at(0).addr());
    return r0_10;
}

}  // namespace d_001b31a4
GUEST_EXPORT_FRAMED(0x001b31a4, d_001b31a4::f_001b31a4, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_001b32c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b32c8 {

struct __attribute__((packed)) Object_001b32c8_0 {
    u8 unknown_0[0x86c];  // (not used here)
    u8 byte_86c;
};
GUEST_OFFSET(Object_001b32c8_0, byte_86c, 0x86c);

inline constexpr guest::Function<0x0013fac4, u32(u32, u32, u32, u32)> set_bytes;
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32)> copy_aligned_bytes;

void f_001b32c8(gptr<Object_001b32c8_0> arg0, u32 r1) {
    set_bytes(arg0.addr() + 0x6cu, 0x800u, 0xccu, guest::cpu()->r[3]);  // (from the original)
    copy_aligned_bytes(arg0.addr(), r1, 0x26cu);  // (from the original)
    arg0->byte_86c = 0;
}

}  // namespace d_001b32c8
GUEST_EXPORT_FRAMED(0x001b32c8, d_001b32c8::f_001b32c8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001b3300: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b3300 {

inline constexpr guest::Function<0x001b3340, u32(u32, u32, u32)> call_001b3340;
inline constexpr guest::Function<0x001c4c14, u32(u32, u32, u32, u32)> call_005bf518;

u32 f_001b3300(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    call_005bf518(frame.at(0).addr(), r1, r2, guest::cpu()->r[3]);
    call_001b3340(r0, frame.at(0).addr(), r2);
    return frame.at(0).addr();
}

}  // namespace d_001b3300
GUEST_EXPORT_FRAMED(0x001b3300, d_001b3300::f_001b3300, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_001b3340: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b3340 {

struct __attribute__((packed)) Object_001b3340_0 {
    u8 unknown_0[0x69];  // (not used here)
    u8 byte_69;
};
GUEST_OFFSET(Object_001b3340_0, byte_69, 0x69);

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

inline constexpr u32 global_0095c010_address = 0x0095c010u;
inline constexpr guest::Function<0x001b488c, u32(u32, u32, u32, u32)> call_001b488c;
inline constexpr guest::Function<0x006aaa58, u32(u32, u32, u32, u32)> notify_registered;
inline constexpr guest::Function<0x0070b7e8, u32(u32, u32, u32, u32)> call_0070b7e8;
inline constexpr guest::Function<0x0070d904, u32(u32, u32, u32, u32)> get_u16_cell;

struct __attribute__((packed)) Frame_001b3340 {
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
GUEST_OFFSET(Frame_001b3340, word_0, 0x0);
GUEST_OFFSET(Frame_001b3340, word_8, 0x8);
GUEST_OFFSET(Frame_001b3340, word_c, 0xc);
GUEST_OFFSET(Frame_001b3340, word_10, 0x10);
GUEST_OFFSET(Frame_001b3340, word_14, 0x14);
GUEST_OFFSET(Frame_001b3340, byte_18, 0x18);
GUEST_OFFSET(Frame_001b3340, byte_19, 0x19);
GUEST_OFFSET(Frame_001b3340, word_1c, 0x1c);
GUEST_OFFSET(Frame_001b3340, word_24, 0x24);
GUEST_SIZE(Frame_001b3340, 0x50);

void f_001b3340(gptr<Object_001b3340_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_001b3340> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
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
    u32 r0_5 = 0;
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
    gptr<Local_001b3340_ea_1> ea_1 = gptr<Local_001b3340_ea_1>(frame.at(0x20).addr());  // (from the original)
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r4;
    ea_1->word_10 = r5;
    ea_1->word_14 = r6;
    ea_1->word_18 = r7;
    ea_1->word_1c = r8;
    ea_1->word_20 = r9;
    ea_1->word_24 = r10;
    ea_1->word_28 = r11;
    ea_1->word_2c = r14;
    r7 = r0;
    r6 = global_0095c010_address;
    if (arg0->byte_69 == 8u) {
        r8 = 0u;
        goto L_1b33bc;
    }
    r1_1 = frame.at(8).addr();
    call_0070b7e8(r7, r1_1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    r0_1 = frame->word_10;
    r5 = 0u;
    if (r0_1 < 0u || r0_1 == 0) {
        goto L_1b3508;
    }
L_1b337c:;
    r0_2 = frame->word_14;
    r4 = 0u;
    if (r0_2 < 0u || r0_2 == 0) {
        goto L_1b34f8;
    }
L_1b338c:;
    if (frame->byte_18 == 0) {
        r0_4 = get_u16_cell(frame->word_24, r5, r4, r3);
        goto L_1b3488;
    }
    r1_2 = frame->word_14 - r4 - 1u;
    r0_5 = frame->word_24;
    r0_4 = get_u16_cell(r0_5, r1_2, r5, r3);
    goto L_1b3488;
L_1b33bc:;
    r5 = 0u;
    r6 = (r8 << 3) + 0x88ebe0u;  // (from the original)
    do {
        r4 = 0u;
        r9 = (r5 & 0x1fu) + ((r8 & 3u) << 5);  // (from the original)
        do {
            r1 = *gptr<u32>(r6) + r4;
            if (r1 < 0x34u) {  // (from the original)
                u32 cell_value = get_u16_cell(frame->word_24, r1, *gptr<u32>(r6 + 4u) + r5, r3);
                u32 r0_8 = cell_value & 0xfu;  // (from the original)
                if (r0_8 >= 0xfu) {  // (from the original)
                    r0_8 = 0xcu;  // (from the original)
                }
                u32 r10_1 = r0_8 & 0xfu;  // (from the original)
                u32 r11_1 = r4 & 0x1fu;  // (from the original)
                frame->word_0 = r8 & 3u;
                call_001b488c(r7, r10_1, r11_1, r5 & 0x1fu);  // (from the original)
                u32 r1_3 = gptr<u16>(global_0095c010_address)[u32(*gptr<u8>(r7 + r10_1 + 0x58u))];  // (from the original)
                notify_registered(r7, r1_3, r11_1, r9);
                r1 = guest::cpu()->r[1];
                r3 = guest::cpu()->r[3];
            }
            r4 += 1u;
            guest::preempt();
        } while (r4 < 0x20u);  // (from the original)
        r5 += 1u;
        guest::preempt();
    } while (r5 < 0x20u);  // (from the original)
    r8 += 1u;
    if (r8 < 4u) {
        guest::preempt();
        goto L_1b33bc;
    }
L_1b3470:;
    ea_2 = gptr<Local_001b3340_ea_2>(frame.at(0x2c).addr());  // (from the original)
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
    r0_9 = r0_4 & 0xfu;  // (from the original)
    if (r0_9 >= 0xfu) {  // (from the original)
        r0_9 = 0xcu;  // (from the original)
    }
    r8_2 = r0_9 & 0xfu;  // (from the original)
    r0_10 = frame->word_c & 3u;
    r3_2 = frame->word_8 + r4 & 0x1fu;  // (from the original)
    r9_2 = r5 & 0x1fu;  // (from the original)
    r10_3 = r3_2 + (r0_10 << 5);
    frame->word_0 = r0_10;
    call_001b488c(r7, r8_2, r9_2, r3_2);
    r1_4 = gptr<u16>(r6)[u32(*gptr<u8>(r7 + r8_2 + 0x58u))];  // (from the original)
    notify_registered(r7, r1_4, r9_2, r10_3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    r4 += 1u;
    if (frame->word_14 > r4) {
        guest::preempt();
        goto L_1b338c;
    }
L_1b34f8:;
    r5 += 1u;
    if (frame->word_10 > r5) {
        guest::preempt();
        goto L_1b337c;
    }
L_1b3508:;
    if (frame->byte_19 == 0) {
        guest::preempt();
        goto L_1b3470;
    } else {
        r5 = 0u;
    }
    do {
        r4 = 0u;
        do {
            u32 cell_value_2 = get_u16_cell(frame->word_24, r5, r4 + 0x20u, r3);  // (from the original)
            u32 r0_13 = cell_value_2 & 0xfu;  // (from the original)
            if (r0_13 >= 0xfu) {  // (from the original)
                r0_13 = 0xcu;  // (from the original)
            }
            u32 r3_3 = frame->word_1c + r4 & 0x1fu;  // (from the original)
            u32 r8_3 = r0_13 & 0xfu;  // (from the original)
            u32 r9_3 = r5 & 0x1fu;  // (from the original)
            frame->word_0 = 3;
            call_001b488c(r7, r8_3, r9_3, r3_3);
            u32 r1_5 = gptr<u16>(r6)[u32(*gptr<u8>(r7 + r8_3 + 0x58u))];  // (from the original)
            notify_registered(r7, r1_5, r9_3, r3_3 + 0x60u);  // (from the original)
            r3 = guest::cpu()->r[3];
            r4 += 1u;
            guest::preempt();
        } while (r4 < 0x10u);  // (from the original)
        r5 += 1u;
        guest::preempt();
    } while (r5 < 0x20u);  // (from the original)
    gptr<Local_001b3340_ea_3> ea_3 = gptr<Local_001b3340_ea_3>(frame.at(0x2c).addr());  // (from the original)
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
GUEST_EXPORT(0x001b3340, d_001b3340::f_001b3340);

// f_001b35b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b35b0 {

struct __attribute__((packed)) Object_001b35b0_0 {
    u8 unknown_0[0x69];  // (not used here)
    u8 byte_69;
};
GUEST_OFFSET(Object_001b35b0_0, byte_69, 0x69);

inline constexpr guest::Function<0x001c4bc8, u32(u32, u32, u32, u32)> set_cell_high_bits;
inline constexpr guest::Function<0x001c4c14, u32(u32, u32, u32, u32)> call_005bf518;

struct __attribute__((packed)) Frame_001b35b0 {
    u8 unknown_0[0x8];  // (not read or written by name)
    u32 word_8;
};
GUEST_OFFSET(Frame_001b35b0, word_8, 0x8);
GUEST_SIZE(Frame_001b35b0, 0xc);

void notify_target_001b35b0(gptr<Object_001b35b0_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_001b35b0> frame;  // the original's stack frame
    u32 r4_1 = *frame.at<u32>(0x20);  // (from the original)
    call_005bf518(frame.at(0).addr(), r1, r2, r3);
    if (frame->word_8 == 0x20u) {  // (from the original)
        if (r4_1 >= 0x20u) {  // (from the original)
            return;
        }
    } else {
        u32 r0_2 = arg0->byte_69;
        if (r0_2 >= 0xcu || r0_2 >= 9u) {  // (from the original)
            if (r4_1 < 0x20u) {  // (from the original)
                set_cell_high_bits(frame.at(0).addr(), r3, r4_1, r2);
                set_cell_high_bits(frame.at(0).addr(), r3, r4_1 + 0x20u, r2);  // (from the original)
                set_cell_high_bits(frame.at(0).addr(), r3, r4_1 + 0x40u, r2);  // (from the original)
                set_cell_high_bits(frame.at(0).addr(), r3, r4_1 + 0x60u, r2);  // (from the original)
            }
            return;
        }
    }
    set_cell_high_bits(frame.at(0).addr(), r3, r4_1, r2);
}

}  // namespace d_001b35b0
GUEST_EXPORT_FRAMED(0x001b35b0, d_001b35b0::notify_target_001b35b0, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_001b3a20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b3a20 {

inline constexpr u32 global_0095c010_address = 0x0095c010u;

u32 f_001b3a20(u32 r0, u32 r1) {
    u32 r0_1 = r0 + (r1 << 4) & 0xffu;  // (from the original)
    if ((u32(gptr<u16>(global_0095c010_address)[r0_1]) & 0xfu) != 0) {  // (from the original)
        r0_1 = 0u;
    }
    return r0_1;
}

}  // namespace d_001b3a20
GUEST_EXPORT(0x001b3a20, d_001b3a20::f_001b3a20);

// f_001b3a44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b3a44 {

inline constexpr u32 global_00ad53a4_address = 0x00ad53a4u;

u32 f_001b3a44(u32 r0, u32 r1) {
    if (r0 >= 0xcu || r1 >= 0xfu) {  // (from the original)
        return 0u;
    }
    return *gptr<u8>(r0 * 0xfu + global_00ad53a4_address + r1);  // (from the original)
}

}  // namespace d_001b3a44
GUEST_EXPORT(0x001b3a44, d_001b3a44::f_001b3a44);

// f_001b3a6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b3a6c {

inline constexpr u32 global_00ad53a4_address = 0x00ad53a4u;

void f_001b3a6c(u32 r0, u32 r1) {
    u32 r2 = 0u;
    u32 r12 = r1 * 0xfu + global_00ad53a4_address;  // (from the original)
    do {
        u32 r4_1 = r0 + r2;
        u32 r3_1 = (r1 >= 0xcu || r2 >= 0xfu) ? 0u : u32(*gptr<u8>(r12 + r2));  // (from the original)
        r2 += 1u;
        *gptr<u8>(r4_1 + 0x58u) = u8(r3_1);  // (from the original)
        guest::preempt();
    } while (r2 < 0xfu);  // (from the original)
}

}  // namespace d_001b3a6c
GUEST_EXPORT_FRAMED(0x001b3a6c, d_001b3a6c::f_001b3a6c, 0x10);  // pushes {r4} first, as the original

// f_001b3ab0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b3ab0 {

struct __attribute__((packed)) Object_001b3ab0_0 {
    u8 unknown_0[0x69];  // (not used here)
    u8 byte_69;
};
GUEST_OFFSET(Object_001b3ab0_0, byte_69, 0x69);

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


struct __attribute__((packed)) Frame_001b3ab0 {
    u32 word_0;
};
GUEST_OFFSET(Frame_001b3ab0, word_0, 0x0);
GUEST_SIZE(Frame_001b3ab0, 0x4);

void f_001b3ab0(gptr<Object_001b3ab0_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_001b3ab0> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = 0;
    u32 r9 = 0;
    u32 r10 = 0;
    u32 r11 = 0;
    u32 r12 = 0;
    u32 r3_2 = 0;
    gptr<Local_001b3ab0_r4_1> r4_1 = gptr<Local_001b3ab0_r4_1>(0u);
    u32 r3_3 = 0;
    u32 r1_2 = 0;
    frame->word_0 = r3;
    u32 r8 = 0xfu;  // (from the original)
    u32 r1_1 = arg0->byte_69;
    if (r1_1 != 8u) {
        if (r1_1 - 6u <= 1u || r1_1 >= 0xcu || r1_1 >= 9u) {  // (from the original)
            r9 = 1u;
            do {
                r3 = 0u;
                r10 = r9 << 0x1e >> 0x17;  // (from the original)
                do {
                    r1 = 0u;
                    r4 = r10 + ((r3 & 0x1fu) << 2);  // (from the original)
                    do {
                        u32 r2_1 = r1 & 0x1fu;  // (from the original)
                        gptr<Local_001b3ab0_r5_1> r5_1 = gptr<Local_001b3ab0_r5_1>(r0 + (r4 + (r2_1 >> 3) << 2));
                        u32 r2_2 = r2_1 << 0x1d >> 0x1b;  // (from the original)
                        r1 += 1u;
                        r5_1->word_6c = r5_1->word_6c & ~lsl_r(r8, r2_2 & 0xff) | lsl_r(0xcu, r2_2 & 0xff);  // (from the original)
                        guest::preempt();
                    } while (r1 < 0x20u);  // (from the original)
                    r3 += 1u;
                    guest::preempt();
                } while (r3 < 0x20u);  // (from the original)
                r9 += 1u;
                guest::preempt();
            } while (r9 < 4u);
            return;
        }
        if (r1_1 == 4u || r1_1 == 3u || r1_1 == 5u) {
            r3 = 0u;
            r9 = 0x180u;  // (from the original)
            goto L_1b3c20;
        }
        goto L_1b3c70;
    }
    r9 = 0x88e9c8u;  // (from the original)
    r11 = 1u;
    frame->word_0 = 0;
    do {
        r10 = (frame->word_0 << 1) + 0x88e8c0u;  // (from the original)
        r2 = 0u;
        u32 r14 = frame->word_0 << 0x1e >> 0x17;  // (from the original)
        do {
            r1 = 0u;
            u32 r5 = r14 + ((r2 & 0x1fu) << 2);  // (from the original)
            do {
                if (u32(*gptr<u8>(r10)) + r1 < 0x34u) {  // (from the original)
                    if ((gptr<u32>(r9)[r2 + (r1 << 5)] & lsl_r(r11, r1 & 0xff)) == 0) {  // (from the original)
                        goto L_1b3b80;
                    }
                }
                r3_2 = r1 & 0x1fu;  // (from the original)
                r4_1 = gptr<Local_001b3ab0_r4_1>(r0 + (r5 + (r3_2 >> 3) << 2));
                r3_3 = r3_2 << 0x1d >> 0x1b;  // (from the original)
                r4_1->word_6c = lsl_r(0xcu, r3_3 & 0xff) | r4_1->word_6c & ~lsl_r(r8, r3_3 & 0xff);  // (from the original)
L_1b3b80:;
                r1 += 1u;
                guest::preempt();
            } while (r1 < 0x20u);  // (from the original)
            r2 += 1u;
            guest::preempt();
        } while (r2 < 0x20u);  // (from the original)
        r1_2 = frame->word_0 + 1u;
        frame->word_0 = r1_2;
        guest::preempt();
    } while (r1_2 < 4u);
    return;
L_1b3c20:;
    r1 = 0u;
    r12 = r9 + ((r3 & 0x1fu) << 2);  // (from the original)
    do {
        u32 r2_3 = r1 & 0x1fu;  // (from the original)
        gptr<Local_001b3ab0_r5_2> r5_2 = gptr<Local_001b3ab0_r5_2>(r0 + (r12 + (r2_3 >> 3) << 2));
        u32 r2_4 = r2_3 << 0x1d >> 0x1b;  // (from the original)
        r1 += 1u;
        r5_2->word_6c = r5_2->word_6c & ~lsl_r(r8, r2_4 & 0xff) | lsl_r(0xcu, r2_4 & 0xff);  // (from the original)
        guest::preempt();
    } while (r1 < 0x20u);  // (from the original)
    r3 += 1u;
    if (r3 < 0x20u) {  // (from the original)
        guest::preempt();
        goto L_1b3c20;
    }
L_1b3c70:;
    u32 r1_3 = arg0->byte_69;
    r2 = 0x20u;  // (from the original)
    if (r1_3 == 2u || r1_3 == 5u) {
        r2 = 0u;
    } else if (r1_3 == 1u || r1_3 == 4u) {
        r2 = 0x10u;  // (from the original)
    } else {
        r3 = 0u;
        goto L_1b3cf0;
    }
    r3 = 0u;
L_1b3ca0:;
    r1 = r2;
    if (r2 < 0x20u) {  // (from the original)
        r4 = ((r3 & 0x1fu) << 2) + 0x100u;  // (from the original)
        do {
            u32 r12_1 = r1 & 0x1fu;  // (from the original)
            gptr<Local_001b3ab0_r6_1> r6_1 = gptr<Local_001b3ab0_r6_1>(r0 + (r4 + (r12_1 >> 3) << 2));
            u32 r12_2 = r12_1 << 0x1d >> 0x1b;  // (from the original)
            r1 += 1u;
            r6_1->word_6c = r6_1->word_6c & ~lsl_r(r8, r12_2 & 0xff) | lsl_r(0xcu, r12_2 & 0xff);  // (from the original)
            guest::preempt();
        } while (r1 < 0x20u);  // (from the original)
    }
L_1b3cf0:;
    r3 += 1u;
    if (r3 >= 0x20u) {  // (from the original)
        return;
    }
    guest::preempt();
    goto L_1b3ca0;
}

}  // namespace d_001b3ab0
GUEST_EXPORT_FRAMED(0x001b3ab0, d_001b3ab0::f_001b3ab0, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_001b3d08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b3d08 {

inline constexpr u32 global_0095c010_address = 0x0095c010u;

u32 f_001b3d08(u32 r0, u32 r1) {
    return (r1 == 0 ? 0u : 0xfu) | u32(gptr<u16>(global_0095c010_address)[r0]);  // (from the original)
}

}  // namespace d_001b3d08
GUEST_EXPORT(0x001b3d08, d_001b3d08::f_001b3d08);

// f_001b3d2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b3d2c {

inline constexpr u32 current_player_data_address = 0x00aaf14cu;
inline guest::global<u32, 0x00aaf14c> current_player_data;
inline constexpr guest::Function<0x001b4a8c, u32(u32, u32)> copy_46_bytes;

void f_001b3d2c(u32 r0) {
    u32 r1_1 = *current_player_data;
    if (r1_1 == 0) {
        return;
    }
    copy_46_bytes(r0 + 0x2au, r1_1 + 0x55a6u);  // (from the original)
    return;  // (from the original)
}

}  // namespace d_001b3d2c
GUEST_EXPORT(0x001b3d2c, d_001b3d2c::f_001b3d2c);

// f_001b488c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b488c {

struct __attribute__((packed)) Local_001b488c_r2_2 {
    u8 unknown_0[0x6c];  // (not used here)
    u32 word_6c;
};
GUEST_OFFSET(Local_001b488c_r2_2, word_6c, 0x6c);


void f_001b488c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r2_1 = r2 & 0x1fu;  // (from the original)
    u32 r12_1 = (*gptr<u32>(guest::cpu()->r[13] + 4u) << 0x1e >> 0x17) + ((r3 & 0x1fu) << 2);  // (from the original)
    gptr<Local_001b488c_r2_2> r2_2 = gptr<Local_001b488c_r2_2>(r0 + (r12_1 + (r2_1 >> 3) << 2));
    u32 r0_1 = (r2_1 << 0x1d) >> 0x1b;  // (from the original)
    r2_2->word_6c = r2_2->word_6c & ~lsl_r(0xfu, r0_1 & 0xff) | lsl_r(r1 & 0xfu, r0_1 & 0xff);  // (from the original)
}

}  // namespace d_001b488c
GUEST_EXPORT_FRAMED(0x001b488c, d_001b488c::f_001b488c, 0x10);  // pushes {r4} first, as the original

// f_001b48dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b48dc {

inline constexpr guest::Function<0x002fe940, u32(u32, u32, u32, u32)> PersonalId__equals;
inline constexpr guest::Function<0x0030f52c, u32(u32, u32)> copy_22_bytes;

void f_001b48dc(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_2 = PersonalId__equals(r0 + 0x2au, r1, r2, guest::cpu()->r[3]);  // (from the original)
    if (r0_2 != 0) {
        frame.release();
        copy_22_bytes(r0 + 0x40u, r2);
        return;  // (from the original)
    }
}

}  // namespace d_001b48dc
GUEST_EXPORT(0x001b48dc, d_001b48dc::f_001b48dc);

// f_001b490c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b490c {

struct __attribute__((packed)) Object_001b490c_0 {
    u8 unknown_0[0x28];  // (not used here)
    u16 half_28;
    u8 unknown_2a[0x842];  // (not used here)
    u8 byte_86c;
};
GUEST_OFFSET(Object_001b490c_0, half_28, 0x28);
GUEST_OFFSET(Object_001b490c_0, byte_86c, 0x86c);

inline constexpr guest::Function<0x001b2c7c, u32(u32, u32)> call_001b2c7c;
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> copy_aligned_bytes;
inline constexpr guest::Function<0x002fc900, u32(u32)> mode_above_1;
inline constexpr guest::Function<0x00305f44, u32(u32, u32)> query_current_main_object;
inline constexpr guest::Function<0x006aac60, u32(u32, u32)> find_packed_id;

void f_001b490c(gptr<Object_001b490c_0> arg0, u32 r1) {
    u32 r0_1 = copy_aligned_bytes(arg0.addr(), r1, 0x870u, guest::cpu()->r[3]);  // (from the original)
    arg0->byte_86c = 0;
    u32 r0_2 = mode_above_1(r0_1);
    u32 r1_2 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        u32 r0_3 = query_current_main_object(r0_2, r1_2);
        r1_2 = guest::cpu()->r[1];
        if (r0_3 != 0) {
            u32 r0_4 = find_packed_id(arg0.addr(), r1_2);
            r1_2 = guest::cpu()->r[1];
            if ((r0_4 >> 8u & 0xfu) == 0) {  // (from the original)
                r1_2 = 1u;
                arg0->byte_86c = u8(r1_2);
            }
        }
    }
    call_001b2c7c(arg0.addr(), r1_2);
    arg0->half_28 = 0;
}

}  // namespace d_001b490c
GUEST_EXPORT_FRAMED(0x001b490c, d_001b490c::f_001b490c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001b4980: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b4980 {

struct __attribute__((packed)) Object_001b4980_0 {
    u8 unknown_0[0x67];  // (not used here)
    u8 byte_67;
    u8 byte_68;
    u8 byte_69;
    u8 unknown_6a[0x802];  // (not used here)
    u8 byte_86c;
};
GUEST_OFFSET(Object_001b4980_0, byte_67, 0x67);
GUEST_OFFSET(Object_001b4980_0, byte_68, 0x68);
GUEST_OFFSET(Object_001b4980_0, byte_69, 0x69);
GUEST_OFFSET(Object_001b4980_0, byte_86c, 0x86c);


void f_001b4980(gptr<Object_001b4980_0> arg0) {
    arg0->byte_67 = 1;
    arg0->byte_68 = 0;
    arg0->byte_69 = 4;
    arg0->byte_86c = 0;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_001b4980
GUEST_EXPORT_FRAMED(0x001b4980, d_001b4980::f_001b4980, 0x4010);  // pushes {r4, lr} first, as the original

// f_001b49b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b49b0 {

struct __attribute__((packed)) Object_001b49b0_0 {
    u8 unknown_0[0x28];  // (not used here)
    u16 half_28;
    u8 unknown_2a[0x842];  // (not used here)
    u8 byte_86c;
};
GUEST_OFFSET(Object_001b49b0_0, half_28, 0x28);
GUEST_OFFSET(Object_001b49b0_0, byte_86c, 0x86c);

inline constexpr guest::Function<0x001b2c7c, u32(u32, u32)> call_001b2c7c;
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> copy_aligned_bytes;
inline constexpr guest::Function<0x002fc900, u32(u32)> mode_above_1;
inline constexpr guest::Function<0x00305f44, u32(u32, u32)> query_current_main_object;
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> send_message;
inline constexpr guest::Function<0x006aac60, u32(u32, u32)> find_packed_id;
inline constexpr guest::Function<0x006aaf98, u32(u32, u32)> call_006aaf98;
inline constexpr guest::Function<0x006ab0b0, u32(u32, u32)> call_006ab0b0;

struct __attribute__((packed)) Frame_001b49b0 {
    u8 unknown_0[0x2];  // (not read or written by name)
    u16 half_2;
};
GUEST_OFFSET(Frame_001b49b0, half_2, 0x2);
GUEST_SIZE(Frame_001b49b0, 0x4);

u32 f_001b49b0(gptr<Object_001b49b0_0> arg0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_001b49b0> frame;  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r0_1 = copy_aligned_bytes(arg0.addr(), r1, 0x870u, r3);  // (from the original)
    arg0->byte_86c = 0;
    u32 r0_2 = mode_above_1(r0_1);
    u32 r1_2 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        u32 r0_3 = query_current_main_object(r0_2, r1_2);
        r1_2 = guest::cpu()->r[1];
        if (r0_3 != 0) {
            u32 r0_4 = find_packed_id(arg0.addr(), r1_2);
            r1_2 = guest::cpu()->r[1];
            if ((r0_4 >> 8u & 0xfu) == 0) {  // (from the original)
                r1_2 = 1u;
                arg0->byte_86c = u8(r1_2);
            }
        }
    }
    call_006ab0b0(arg0.addr(), r1_2);
    u32 r0_5 = find_packed_id(arg0.addr(), guest::cpu()->r[1]);
    u32 r0_6 = call_006aaf98(r0_5, 0u);
    u32 r0_7 = mode_above_1(r0_6);
    u32 r1_5 = guest::cpu()->r[1];
    if (r0_7 != 0) {
        u32 r0_8 = find_packed_id(r1, r1_5);
        r1_5 = 0xffffu;  // (from the original)
        if (!(r0_5 == r1_5 || r0_8 == r1_5)) {
            *frame.at<u16>(0) = u16(r0_5);
            frame->half_2 = u16(r0_8);
            send_message(0x6du, 4u, frame.at(0).addr(), 4u);  // (from the original)
            r1_5 = guest::cpu()->r[1];
        }
    }
    call_001b2c7c(arg0.addr(), r1_5);
    arg0->half_28 = 0;
    return arg0.addr();
}

}  // namespace d_001b49b0
GUEST_EXPORT_FRAMED(0x001b49b0, d_001b49b0::f_001b49b0, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_001b4a8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b4a8c {

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32)> copy_bytes_at_any_alignment;

u32 copy_46_bytes() {
    return copy_bytes_at_any_alignment(guest::cpu()->r[0], guest::cpu()->r[1], 0x2eu);  // (from the original)
}

}  // namespace d_001b4a8c
GUEST_EXPORT(0x001b4a8c, d_001b4a8c::copy_46_bytes);

// f_001b4b20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b4b20 {

struct __attribute__((packed)) Object_001b4b20_0 {
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
GUEST_OFFSET(Object_001b4b20_0, word_16, 0x16);
GUEST_OFFSET(Object_001b4b20_0, word_1a, 0x1a);
GUEST_OFFSET(Object_001b4b20_0, word_1e, 0x1e);
GUEST_OFFSET(Object_001b4b20_0, word_22, 0x22);
GUEST_OFFSET(Object_001b4b20_0, word_26, 0x26);
GUEST_OFFSET(Object_001b4b20_0, half_2a, 0x2a);
GUEST_OFFSET(Object_001b4b20_0, byte_2c, 0x2c);
GUEST_OFFSET(Object_001b4b20_0, byte_2d, 0x2d);

struct __attribute__((packed)) Object_001b4b20_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u16 half_14;
};
GUEST_OFFSET(Object_001b4b20_1, word_0, 0x0);
GUEST_OFFSET(Object_001b4b20_1, word_4, 0x4);
GUEST_OFFSET(Object_001b4b20_1, word_8, 0x8);
GUEST_OFFSET(Object_001b4b20_1, word_c, 0xc);
GUEST_OFFSET(Object_001b4b20_1, word_10, 0x10);
GUEST_OFFSET(Object_001b4b20_1, half_14, 0x14);

inline constexpr guest::Function<0x0035072c, u32(u32, u32, u32, u32)> current_stamp;

struct __attribute__((packed)) Frame_001b4b20 {
    u32 word_0;
};
GUEST_OFFSET(Frame_001b4b20, word_0, 0x0);
GUEST_SIZE(Frame_001b4b20, 0x4);

void f_001b4b20(gptr<Object_001b4b20_0> arg0, gptr<Object_001b4b20_1> arg1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_001b4b20> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r4_1 = arg0.addr() + 0x2cu;  // (from the original)
    arg0->word_16 = arg1->word_0;
    arg0->word_1a = arg1->word_4;
    arg0->word_1e = arg1->word_8;
    arg0->word_22 = arg1->word_c;
    u32 r2_1 = arg1->word_10;
    arg0->word_26 = r2_1;
    u32 r1_1 = arg1->half_14;
    arg0->half_2a = u16(r1_1);
    current_stamp(frame.at(0).addr(), r1_1, r2_1, r3);
    arg0->byte_2c = u8(frame->word_0 >> 0x18);  // (from the original)
    arg0->byte_2d = u8(frame->word_0 >> 0x10);  // (from the original)
}

}  // namespace d_001b4b20
GUEST_EXPORT_FRAMED(0x001b4b20, d_001b4b20::f_001b4b20, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_001b545c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b545c {


u32 f_001b545c(u32 r0) {
    guest::cpu()->r[1] = 0x18fu;  // (from the original)
    return !(r0 >= 0x18fu);  // (from the original)
}

}  // namespace d_001b545c
GUEST_EXPORT(0x001b545c, d_001b545c::f_001b545c);

// f_001b5474: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
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

inline constexpr guest::Function<0x002f74c8, u32(u32)> read_global_byte_2;
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> copy_item_002fc934;
inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> GridMap__place_item_at_world;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> construct_item;
inline constexpr guest::Function<0x00303acc, u32(u32)> item_is_kind_11_with_class_4_or_5;
inline constexpr guest::Function<0x0030b654, u32(u32)> item_has_valid_data;
inline constexpr guest::Function<0x004e9a78, u32(u32, u32, u32, u32)> RoomGrid__furniture_at_layer;
inline constexpr guest::Function<0x0059e65c, u32(u32, u32, u32)> clear_field_tile;
inline constexpr guest::Function<0x006a5e34, u32(u32)> get_object_009b4a24;

struct __attribute__((packed)) Frame_001b5474 {
    u32 word_0;
    u8 unknown_4[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_001b5474, word_0, 0x0);
GUEST_SIZE(Frame_001b5474, 0xc);

u32 f_001b5474(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_001b5474> frame;  // the original's stack frame
    if (r2 >= 2u) {
        return r0;
    }
    gptr<Local_001b5474_r4_1> r4_1 = gptr<Local_001b5474_r4_1>(r0 + r2);
    gptr<Local_001b5474_ea_1> ea_1 = gptr<Local_001b5474_ea_1>(frame.at(0x28).addr());  // (from the original)
    u32 r6_1 = ea_1->word_0;
    u32 r7_1 = ea_1->word_4;
    u32 r3_1 = frame.at(4).addr();
    if (r4_1->byte_8 != 0) {
        construct_item(r3_1, 0x2083u, r2, r3_1);  // (from the original)
    } else {
        copy_item_002fc934(r3_1, r0 + (r2 << 2), r2, r3_1);
    }
    if (r4_1->byte_8 == 0) {
        r4_1->byte_8 = 1;
        u32 r0_1 = read_global_byte_2(1u);
        if (r0_1 == r1) {
            u32 r0_3 = item_has_valid_data(frame.at(4).addr());
            if (r0_3 != 0) {
                u32 r0_5 = item_is_kind_11_with_class_4_or_5(frame.at(4).addr());
                if (r0_5 != 0) {
                    RoomGrid__furniture_at_layer(r3, r6_1, 2u, r7_1);
                } else {
                    RoomGrid__furniture_at_layer(r3, r6_1, 1u, r7_1);
                }
            } else {
                u32 r0_6 = get_object_009b4a24(r0_3);
                if (r0_6 != 0) {
                    u32 r0_7 = frame.at(8).addr();
                    construct_item(r0_7, 0x2083u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                    frame->word_0 = 0;
                    GridMap__place_item_at_world(r0_6, r0_7, r3, r6_1);
                    clear_field_tile(r3, r6_1, 1u);
                }
            }
        }
    }
    return frame.at(4).addr();
}

}  // namespace d_001b5474
GUEST_EXPORT_FRAMED(0x001b5474, d_001b5474::f_001b5474, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_001b55b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b55b8 {

inline constexpr u32 global_00982180_address = 0x00982180u;
inline constexpr u32 global_009821f4_address = 0x009821f4u;
inline constexpr u32 global_009821f8_address = 0x009821f8u;
inline constexpr u32 global_00982268_address = 0x00982268u;
inline constexpr u32 global_00a83afc_address = 0x00a83afcu;
inline constexpr u32 global_00af7f40_address = 0x00af7f40u;
inline constexpr u32 global_00af7f84_address = 0x00af7f84u;
inline constexpr guest::Function<0x00135740, u32(u32)> lock_member_lock;
inline constexpr guest::Function<0x00137e84, u32(u32, u32)> unlock_member_lock;
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> copy_aligned_bytes;
inline constexpr guest::Function<0x0056029c, u32(u32, u32, u32)> call_0056029c;
inline constexpr guest::Function<0x005603f0, u32(u32, u32, u32, u32)> call_005603f0;

u32 f_001b55b8(u32 r0, u32 r1_unused, u32 r2) {
    guest::StackFrame frame(0x640);  // the original's stack frame
    u32 r1 = 0;
    u32 r4 = 0;
    u32 r5 = 0;
    u32 r6 = 0;
    u32 r0_2 = 0;
    u32 r0_5 = 0;
    u32 r0_7 = 0;
    u32 r1_1 = r0 - 0x2000u;  // (from the original)
    u32 cf_1 = r0 >= 0x18fu;  // (from the original)
    if (cf_1) {
        cf_1 = r0 - 0x1000u >= 0x10u;  // (from the original)
    }
    if (cf_1 && r1_1 >= 0x11u) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    if (r0 - 0x1000u < 0x10u) {  // (from the original)
        r6 = global_00982268_address;
        r5 = r0 - 0x1000u;  // (from the original)
        u32 r0_3 = *gptr<u32>(r6);
        if (r0_3 == 0) {
            u32 r0_4 = call_005603f0(r0_3, r1_1, r2, guest::cpu()->r[3]);
            r4 = r0_4;
            lock_member_lock(r0_4);
            r1 = guest::cpu()->r[1];
            if (*gptr<u32>(r6) == 0) {
                call_0056029c(global_00af7f84_address, global_009821f8_address, 0x10u);  // (from the original)
                r1 = guest::cpu()->r[1];
                r0_5 = global_00af7f84_address;
                *gptr<u32>(r6) = r0_5;
                goto L_1b5664;
            }
            goto L_1b5664;
        }
        r0_2 = gptr<u32>(*gptr<u32>(r6))[r5];
        guest::cpu()->r[1] = r1_1;
        return r0_2;
    }
    if (r1_1 >= 0x11u) {  // (from the original)
        u32 r5_1 = frame.at(0).addr();
        copy_aligned_bytes(r5_1, global_00a83afc_address, 0x63cu, guest::cpu()->r[3]);  // (from the original)
        u32 r1_3 = gptr<u32>(r5_1)[r0];
        *gptr<u8>(r1_3 + 0xfu) = 0;  // (from the original)
        guest::cpu()->r[1] = r1_3;
        return r1_3 + 0xau;  // (from the original)
    }
    r6 = global_009821f4_address;
    r5 = r1_1;
    r0_7 = *gptr<u32>(r6);
    if (r0_7 == 0) {
        u32 r0_8 = call_005603f0(r0_7, r1_1, r2, guest::cpu()->r[3]);
        r4 = r0_8;
        lock_member_lock(r0_8);
        r1 = guest::cpu()->r[1];
        if (*gptr<u32>(r6) != 0) {
            goto L_1b5664;
        }
        call_0056029c(global_00af7f40_address, global_00982180_address, 0x11u);  // (from the original)
        r1 = guest::cpu()->r[1];
        r0_5 = global_00af7f40_address;
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
GUEST_EXPORT_FRAMED(0x001b55b8, d_001b55b8::f_001b55b8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001b5d74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b5d74 {

inline constexpr u32 global_0095c360_address = 0x0095c360u;
inline guest::global<u32, 0x0095c360> global_0095c360;
inline constexpr guest::Function<0x001b55b8, u32(u32, u32, u32, u32)> call_001b55b8;

u32 f_001b5d74(u32 r0) {
    u32 r1 = 0;
    if (r0 == 0x2010u) {  // (from the original)
        return *global_0095c360;
    }
    return call_001b55b8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_001b5d74
GUEST_EXPORT(0x001b5d74, d_001b5d74::f_001b5d74);

// f_001b5d94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b5d94 {


u32 f_001b5d94(u32 r0) {
    u32 r1_1 = 0x18fu;  // (from the original)
    u32 cf_1 = r0 >= r1_1;
    if (cf_1) {
        r1_1 = r0 - 0x1000u;  // (from the original)
        cf_1 = r1_1 >= 0x10u;  // (from the original)
    }
    if (!cf_1) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    if (r0 - 0x2000u >= 0x11u) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_001b5d94
GUEST_EXPORT(0x001b5d94, d_001b5d94::f_001b5d94);

// f_001b5f7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b5f7c {

struct __attribute__((packed)) Object_001b5f7c_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_001b5f7c_0, byte_0, 0x0);

inline constexpr guest::Function<0x002d4d30, u32(u32, u32)> call_002d4d30;
inline constexpr guest::Function<0x002d4f3c, u32(u32, u32, u32, u32)> call_002d4f3c;
inline constexpr guest::Function<0x002d5184, u32(u32, u32)> call_002d5184;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> construct_item;
inline constexpr guest::Function<0x00301444, u32(u32, u32)> clear;
inline constexpr guest::Function<0x003059f8, u32(u32)> Pattern__clear;

void f_001b5f7c(gptr<Object_001b5f7c_0> arg0, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    arg0->byte_0 = 0xff;  // (from the original)
    call_002d4f3c(arg0.addr() + 2u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    Pattern__clear(arg0.addr() + 0x304u);  // (from the original)
    clear(arg0.addr() + 0xb74u, 0x22u);  // (from the original)
    construct_item(frame.at(0).addr(), 0x23c6u);  // (from the original)
    construct_item(frame.at(4).addr(), 0x2460u);  // (from the original)
    call_002d4d30(arg0.addr() + 2u, frame.at(0).addr());
    call_002d5184(arg0.addr() + 2u, frame.at(4).addr());
}

}  // namespace d_001b5f7c
GUEST_EXPORT_FRAMED(0x001b5f7c, d_001b5f7c::f_001b5f7c, 0x4010);  // pushes {r4, lr} first, as the original

// f_001b625c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b625c {

inline constexpr guest::Function<0x001b6278, u32(u32, u32, u32, u32)> call_001b6278;

void f_001b625c(u32 r0_unused, u32 r1) {
    if (s32(r1) >= 0xa) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return;
    }
    call_001b6278(guest::cpu()->r[0], 1u, r1, 0u);
}

}  // namespace d_001b625c
GUEST_EXPORT(0x001b625c, d_001b625c::f_001b625c);

// f_001b732c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b732c {

struct __attribute__((packed)) Object_001b732c_0 {
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
GUEST_OFFSET(Object_001b732c_0, byte_0, 0x0);
GUEST_OFFSET(Object_001b732c_0, byte_1, 0x1);
GUEST_OFFSET(Object_001b732c_0, half_2, 0x2);
GUEST_OFFSET(Object_001b732c_0, half_4, 0x4);
GUEST_OFFSET(Object_001b732c_0, byte_e, 0xe);
GUEST_OFFSET(Object_001b732c_0, byte_f, 0xf);
GUEST_OFFSET(Object_001b732c_0, byte_18, 0x18);
GUEST_OFFSET(Object_001b732c_0, byte_19, 0x19);


void f_001b732c(gptr<Object_001b732c_0> arg0) {
    arg0->byte_0 = 0;
    u32 r2_1 = ~0u;
    arg0->byte_1 = 0;
    arg0->half_2 = u16(r2_1);
    arg0->half_4 = u16(r2_1);
    arg0->byte_e = 0;
    arg0->byte_f = 0xc8;  // (from the original)
    arg0->byte_18 = 0;
    arg0->byte_19 = 0xc8;  // (from the original)
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_001b732c
GUEST_EXPORT(0x001b732c, d_001b732c::f_001b732c);

// f_001b7530: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b7530 {

struct __attribute__((packed)) Object_001b7530_0 {
    u8 unknown_0[0x18];  // (not used here)
    u8 byte_18;
};
GUEST_OFFSET(Object_001b7530_0, byte_18, 0x18);

inline constexpr u32 global_00ad56e0_address = 0x00ad56e0u;
inline guest::global<u8, 0x00ad56fa> global_00ad56fa;
inline guest::global<u8, 0x00ad56fb> global_00ad56fb;

u32 f_001b7530(gptr<Object_001b7530_0> arg0) {
    if (*global_00ad56fa != 0) {
        guest::cpu()->r[1] = global_00ad56e0_address;
        return 0u;
    }
    u32 r1_1 = *global_00ad56fb;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    if (arg0->byte_18 <= 0xfu) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_001b7530
GUEST_EXPORT(0x001b7530, d_001b7530::f_001b7530);

// f_001b7568: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b7568 {

inline guest::global<u32, 0x0095c6d0> global_0095c6d0;
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32)> Item__is_empty;
inline constexpr guest::Function<0x006c4280, u32(u32, u32, u32, u32)> record_value;
inline constexpr guest::Function<0x00768738, u32(u32)> Item__quarter_price;
inline constexpr guest::Function<0x0076e80c, u32(u32, u32)> call_0076e80c;

u32 f_001b7568(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_7 = 0;
    u32 r0_10 = 0;
    u32 r4 = r0 + (r1 << 2);
    u32 r6 = *gptr<u32>(r4 + 0x10u);  // (from the original)
    u32 r0_1 = *gptr<s8>(*global_0095c6d0 + 0x1cu);  // (from the original)
    u32 r0_2 = record_value(r0_1, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0_2 == 1u) {
        *gptr<u32>(r4 + 0x10u) = *gptr<u32>(r4 + 0x10u) + r2;  // (from the original)
        u32 r0_4 = call_0076e80c(*global_0095c6d0 + 0x10u, r3);  // (from the original)
        r1 = guest::cpu()->r[1];
        if (r0_4 == 0) {
            *gptr<u32>(r4 + 0x20u) = *gptr<u32>(r4 + 0x20u) + r2;  // (from the original)
        }
    } else {
        if (r0_2 == 2u || r0_2 == 3u || r0_2 == 0xau) {  // (from the original)
            u32 r0_5 = *global_0095c6d0 + 0x10u;  // (from the original)
            r1 = *gptr<u8>(r0_5 + 0xdu);  // (from the original)
            if (r1 != 0) {
                if (r1 == 1u) {
                    u32 is_empty_2 = Item__is_empty(r3, r1);
                    if (is_empty_2 != 0) {
                        r1 = (r2 << 7) - r2 * 3u;
                        r0_7 = *gptr<u32>(r4 + 0x10u) + (r1 << 3);  // (from the original)
                    } else {
                        u32 r0_8 = Item__quarter_price(r3);
                        r1 = *gptr<u32>(r4 + 0x10u);  // (from the original)
                        r0_7 = r0_8 * r2 + r1;
                    }
                    *gptr<u32>(r4 + 0x10u) = r0_7;  // (from the original)
                    r0_10 = *gptr<u32>(r4 + 0x10u) != r6;  // (from the original)
                    guest::cpu()->r[1] = r1;
                    return r0_10;
                }
                if (r1 != 2u) {
                    r0_10 = *gptr<u32>(r4 + 0x10u) != r6;  // (from the original)
                    guest::cpu()->r[1] = r1;
                    return r0_10;
                }
                u32 r0_9 = call_0076e80c(r0_5, r3);
                r1 = guest::cpu()->r[1];
                if (r0_9 == 0) {
                    return *gptr<u32>(r4 + 0x10u) != r6;  // (from the original)
                }
            }
            r0_7 = *gptr<u32>(r4 + 0x10u) + r2;  // (from the original)
            *gptr<u32>(r4 + 0x10u) = r0_7;  // (from the original)
            r0_10 = *gptr<u32>(r4 + 0x10u) != r6;  // (from the original)
            guest::cpu()->r[1] = r1;
            return r0_10;
        }
        *gptr<u32>(r4 + 0x10u) = *gptr<u32>(r4 + 0x10u) + r2;  // (from the original)
    }
    r0_10 = *gptr<u32>(r4 + 0x10u) != r6;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_10;
}

}  // namespace d_001b7568
GUEST_EXPORT_FRAMED(0x001b7568, d_001b7568::f_001b7568, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_001b7688: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b7688 {

inline constexpr u32 vtable_TourResult__SingletonDisposer_ = 0x008f9a24u;
inline guest::global<u32, 0x0095c71c> global_0095c71c;
inline guest::global<u32, 0x0095c720> global_0095c720;
inline constexpr guest::Function<0x00131280, u32(u32, u32, u32, u32)> allocate_from_heap_00131280;
inline constexpr guest::Function<0x001320cc, u32(u32, u32, u32)> sead__IDisposer__IDisposer_001320cc;

void TourResult__SingletonDisposer___SingletonDisposer_(u32 r0) {
    if (*global_0095c71c == 0) {
        u32 block_2 = allocate_from_heap_00131280(0x3cu, r0, 4u, guest::cpu()->r[3]);  // (from the original)
        u32 r4_1 = block_2;
        if (block_2 == 0) {
            *global_0095c720 = r4_1;
            r4_1 = 0u;
        } else {
            sead__IDisposer__IDisposer_001320cc(block_2, r0, 3u);
            *gptr<u32>(block_2) = vtable_TourResult__SingletonDisposer_;
            *global_0095c720 = block_2;
        }
        *global_0095c71c = r4_1;
    }
}

}  // namespace d_001b7688
GUEST_EXPORT_FRAMED(0x001b7688, d_001b7688::TourResult__SingletonDisposer___SingletonDisposer_, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001b7b90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b7b90 {

struct __attribute__((packed)) Local_001b7b90_r4_1 {
    u8 unknown_0[0x34];  // (not used here)
    u8 byte_34;
};
GUEST_OFFSET(Local_001b7b90_r4_1, byte_34, 0x34);

inline constexpr u32 global_0095c6d0_address = 0x0095c6d0u;
inline guest::global<u32, 0x0095c6d0> global_0095c6d0;
inline constexpr guest::Function<0x002f74c8, u32(u32)> read_global_byte_2;
inline constexpr guest::Function<0x00300904, u32(u32)> main_object_value;
inline constexpr guest::Function<0x004e4510, u32(u32)> item_maps_match_in_area;
inline constexpr guest::Function<0x005b49e0, u32(u32)> call_005b49e0;
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> send_message;
inline constexpr guest::Function<0x00625690, u32(u32)> current_mode;
inline constexpr guest::Function<0x006c4280, u32(u32, u32, u32, u32)> record_value;

void f_001b7b90(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = *global_0095c6d0;
    if (r0_1 == 0) {
        return;
    }
    u32 r0_2 = *gptr<s8>(r0_1 + 0x1cu);  // (from the original)
    u32 r0_3 = record_value(r0_2, r1, r2, r3);
    if (r0_3 != 9u) {
        return;
    }
    u32 r0_4 = read_global_byte_2(r0_3);
    u32 r0_5 = call_005b49e0(r0_4);
    if (r0_5 == 0) {
        return;
    }
    u32 r0_6 = read_global_byte_2(r0_5);
    u32 r0_7 = r0_6 - 0x81u;  // (from the original)
    gptr<Local_001b7b90_r4_1> r4_1 = gptr<Local_001b7b90_r4_1>(r0 + u32(s32(r0_7 + (r0_7 >> 0x1f)) >> 1));  // (from the original)
    u32 r0_8 = r4_1->byte_34;
    if (r0_8 != 0) {
        return;
    }
    u32 r0_9 = read_global_byte_2(r0_8);
    u32 r0_10 = item_maps_match_in_area(r0_9);
    if (r0_10 == 0) {
        return;
    }
    r4_1->byte_34 = 1;
    u32 r0_11 = main_object_value(1u);
    if (r0_11 == 0) {
        return;
    }
    u32 r0_12 = current_mode(r0_11);
    if (r0_12 <= 1u) {
        return;
    }
    frame.release();
    send_message(0x45u, 4u, 0u, 0u);
    return;  // (from the original)
}

}  // namespace d_001b7b90
GUEST_EXPORT(0x001b7b90, d_001b7b90::f_001b7b90);

// f_001b88c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b88c0 {

inline guest::global<u8, 0x00951481> global_00951481;
inline guest::global<u32, 0x00951488> global_00951488;
inline constexpr guest::Function<0x00135520, u32(u32)> cfl_unmount_135520;

u32 f_001b88c0(u32 r0_unused, u32 r1) {
    u32 r0_1 = *global_00951488 - 1u;
    *global_00951488 = r0_1;
    if (s32(r0_1) > 0) {
        return r0_1;
    }
    u32 r0_2 = cfl_unmount_135520(0x8575c8u);  // (from the original)
    u32 r1_1 = r0_2 & 0x80000000u;  // (from the original)
    u32 res_1 = r1_1;
    u32 vf_1 = (r1_1 & (r1_1 ^ res_1)) >> 0x1f;  // (from the original)
    if (s32(r1_1) < 0) {
        r1_1 = r0_2 & 0x3fc00u;  // (from the original)
    }
    if (res_1 >> 0x1f != vf_1) {  // (from the original)
        r1_1 >>= 0xa;  // (from the original)
    }
    *global_00951481 = 0;
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_001b88c0
GUEST_EXPORT_FRAMED(0x001b88c0, d_001b88c0::f_001b88c0, 0x4010);  // pushes {r4, lr} first, as the original

// f_001b8978: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b8978 {

inline constexpr u32 global_009514b0_address = 0x009514b0u;
inline guest::global<u8, 0x00951480> global_00951480;
inline constexpr guest::Function<0x001b8008, u32(u32, u32, u32)> sead__SafeStringBase_char___SafeStringBase_001b8008;
inline constexpr guest::Function<0x001b88c0, u32(u32, u32)> call_001b88c0;
inline constexpr guest::Function<0x001b9254, u32(u32, u32, u32)> call_001b9254;
inline constexpr guest::Function<0x002ff8b0, u32(u32, u32, u32, u32)> slot_value;

u32 f_001b8978(u32 r0_unused, u32 r1, u32 r2) {
    u32 r0_1 = slot_value(4u, r1, r2, guest::cpu()->r[3]);
    u32 r5 = r0_1;
    u32 r0_2 = call_001b9254(0u, 0u, 0u);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    u32 r6 = r0_2;
    if (r0_2 == 1u) {
        u32 r7 = global_009514b0_address;
        u32 r4 = 0u;
        do {
            u32 r0_4 = sead__SafeStringBase_char___SafeStringBase_001b8008(gptr<u32>(gptr<u32>(r7)[r4])[r5], r1, r2);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            if (r0_4 != 1u) {
                r6 = r0_4;
            }
            r4 += 1u;
            guest::preempt();
        } while (s32(r4) < 3);
        u32 r0_5 = *global_00951480;
        if (r0_5 == 1u) {
            call_001b88c0(r0_5, r1);
            r1 = guest::cpu()->r[1];
        }
        r0_2 = r6;
    }
    guest::cpu()->r[1] = r1;
    return r0_2;
}

}  // namespace d_001b8978
GUEST_EXPORT_FRAMED(0x001b8978, d_001b8978::f_001b8978, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_001b8a08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b8a08 {

struct __attribute__((packed)) Object_001b8a08_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_001b8a08_0, word_0, 0x0);

inline constexpr guest::Function<0x0012f598, u32(u32, u32, u32, u32)> report_fatal_result_with_info;

u32 f_001b8a08(gptr<Object_001b8a08_0> arg0) {
    u32 r2 = 0;
    u32 r0_12 = 0;
    u32 r1_5 = 0;
    u32 r0_1 = arg0->word_0;
    u32 r1_1 = r0_1 & 0x80000000u;  // (from the original)
    if (s32(r1_1) >= 0) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    u32 r1_2 = (r0_1 & 0x3fc00u) >> 0xa;  // (from the original)
    if (r1_2 == 0x11u) {  // (from the original)
        u32 r0_2 = r0_1 & 0x3ffu;  // (from the original)
        if (s32(r0_2) >= 0x64 && s32(r0_2) <= 0xb3) {  // (from the original)
            guest::cpu()->r[1] = r1_2;
            return 5u;
        }
    }
    u32 r0_3 = arg0->word_0;
    u32 r1_3 = (r0_3 & 0x3fc00u) >> 0xa;  // (from the original)
    if (r1_3 == 0x11u) {  // (from the original)
        u32 r0_4 = r0_3 & 0x3ffu;  // (from the original)
        if (s32(r0_4) >= 0xb4 && s32(r0_4) <= 0xc7) {  // (from the original)
            guest::cpu()->r[1] = r1_3;
            return 8u;
        }
    }
    u32 r0_5 = arg0->word_0;
    if ((r0_5 & 0x3fc00u) >> 0xa == 0x11u) {  // (from the original)
        u32 r0_6 = r0_5 & 0x3ffu;  // (from the original)
        if (s32(r0_6) >= s32(0x186u) && s32(r0_6) < 0x190) {  // (from the original)
            guest::cpu()->r[1] = 0x186u;  // (from the original)
            return 3u;
        }
    }
    u32 r0_7 = arg0->word_0;
    if ((r0_7 & 0x3fc00u) >> 0xa == 0x11u) {  // (from the original)
        u32 r0_8 = r0_7 & 0x3ffu;  // (from the original)
        if (s32(r0_8) >= 0xe6 && s32(r0_8) < 0x154) {  // (from the original)
            u32 r0_9 = arg0->word_0;
            u32 r1_4 = (r0_9 & 0x3fc00u) >> 0xa;  // (from the original)
            if (r1_4 != 0x11u) {  // (from the original)
                guest::cpu()->r[1] = r1_4;
                return 8u;
            }
            u32 r0_10 = r0_9 & 0x3ffu;  // (from the original)
            u32 nf_1 = r0_10 - 0x118u >> 0x1f;  // (from the original)
            u32 vf_1 = ((r0_10 ^ 0x118u) & (r0_10 ^ r0_10 - 0x118u)) >> 0x1f;  // (from the original)
            if (nf_1 == vf_1) {
                r1_4 = 0x14eu;  // (from the original)
                u32 res_2 = r1_4 - r0_10;
                nf_1 = res_2 >> 0x1f;  // (from the original)
                vf_1 = ((r1_4 ^ r0_10) & (r1_4 ^ res_2)) >> 0x1f;  // (from the original)
            }
            if (nf_1 != vf_1) {
                guest::cpu()->r[1] = r1_4;
                return 8u;
            }
            u32 r0_11 = arg0->word_0;
            r2 = r0_11 >> 0x1f;  // (from the original)
            if (r2 != 0) {
                report_fatal_result_with_info(r0_11, 0x1b8b10u, r2, guest::cpu()->r[3]);  // (from the original)
            }
            goto L_1b8b54;
        }
    }
    r0_12 = arg0->word_0;
    r1_5 = (r0_12 & 0x3fc00u) >> 0xa;  // (from the original)
    if (r1_5 == 0x11u) {  // (from the original)
        u32 r0_13 = r0_12 & 0x3ffu;  // (from the original)
        if (s32(r0_13) >= 0xc8 && s32(r0_13) <= 0xdb) {  // (from the original)
            guest::cpu()->r[1] = r1_5;
            return 4u;
        }
    }
L_1b8b54:;
    u32 r1_6 = 0x1b8b5cu;  // (from the original)
    u32 r0_14 = arg0->word_0;
    if ((r0_14 >> 0x1f) != 0) {  // (from the original)
        report_fatal_result_with_info(r0_14, r1_6, r2, guest::cpu()->r[3]);
        r1_6 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1_6;
    return 8u;
}

}  // namespace d_001b8a08
GUEST_EXPORT_FRAMED(0x001b8a08, d_001b8a08::f_001b8a08, 0x4010);  // pushes {r4, lr} first, as the original

// f_001b9400: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b9400 {

struct __attribute__((packed)) Local_001b9400_r0_6 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001b9400_r0_6, word_0, 0x0);
GUEST_OFFSET(Local_001b9400_r0_6, word_4, 0x4);

inline constexpr u32 global_0095bf70_address = 0x0095bf70u;
inline guest::global<u8, 0x00951480> global_00951480;
inline guest::global<u8, 0x00951481> global_00951481;
inline guest::global<u32, 0x0095bf70> global_0095bf70;
inline constexpr guest::Function<0x001b8e44, u32(u32, u32, u32, u32)> sead__SafeStringBase_char___SafeStringBase_001b8e44;
inline constexpr guest::Function<0x002fb328, u32(u32)> get_save_data;
inline constexpr guest::Function<0x00345bc4, u32(u32)> call_00345bc4;
inline constexpr guest::Function<0x003463a4, u32(u32, u32, u32, u32)> call_003463a4;
inline constexpr guest::Function<0x005ca648, u32(u32, u32, u32, u32)> call_005ca648;
inline constexpr guest::Function<0x005cad0c, u32(u32)> read_u32_0x0095bf74_;

struct __attribute__((packed)) Frame_001b9400 {
    u32 word_0;
};
GUEST_OFFSET(Frame_001b9400, word_0, 0x0);
GUEST_SIZE(Frame_001b9400, 0x4);

u32 f_001b9400(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_001b9400> frame;  // the original's stack frame
    u32 r0_7 = 0;
    frame->word_0 = r3;
    if (r0 != 0) {
        u32 r0_1 = call_005ca648(r0, r1, r2, r3);
        u32 r0_2 = read_u32_0x0095bf74_(r0_1);
        frame->word_0 = 0;
        u32 r0_4 = sead__SafeStringBase_char___SafeStringBase_001b8e44(*global_0095bf70, 0u, r0_2, 8u);
        if (r0_4 != 1u) {
            return r0_4;
        }
    }
    u32 r1_3 = *global_00951480;
    if (r1_3 == 1u) {
        u32 r0_5 = *global_00951481;
        if (r0_5 != 0) {
            if (r0 != 0) {
                gptr<Local_001b9400_r0_6> save_data_2 = gptr<Local_001b9400_r0_6>(get_save_data(r0_5));
                r0_7 = call_003463a4(0x1b94a8u, r1_3, save_data_2->word_0, save_data_2->word_4);  // (from the original)
            } else {
                r0_7 = call_00345bc4(0x1b94a8u);  // (from the original)
            }
            r1_3 = r0_7 & 0x80000000u;  // (from the original)
            if (s32(r1_3) < 0) {
                guest::cpu()->r[1] = (r0_7 & 0x3fc00u) >> 0xa;  // (from the original)
                return 8u;
            }
        }
    }
    guest::cpu()->r[1] = r1_3;
    return 1u;
}

}  // namespace d_001b9400
GUEST_EXPORT_FRAMED(0x001b9400, d_001b9400::f_001b9400, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_001b94b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b94b0 {

inline constexpr u32 global_009500e1_address = 0x009500e1u;
inline constexpr u32 global_00951480_address = 0x00951480u;
inline constexpr u32 global_00951494_address = 0x00951494u;
inline constexpr u32 global_009514b0_address = 0x009514b0u;
inline guest::global<u8, 0x009500e0> global_009500e0;
inline guest::global<u8, 0x009500e1> global_009500e1;
inline constexpr guest::Function<0x0012f598, u32(u32, u32, u32)> report_fatal_result_with_info;
inline constexpr guest::Function<0x001b8008, u32(u32, u32, u32)> sead__SafeStringBase_char___SafeStringBase_001b8008;
inline constexpr guest::Function<0x001b88c0, u32(u32, u32, u32, u32)> call_001b88c0;
inline constexpr guest::Function<0x001b9254, u32(u32, u32, u32, u32)> call_001b9254;
inline constexpr guest::Function<0x001b94b0, u32(u32, u32, u32)> call_001b94b0;
inline constexpr guest::Function<0x00345c20, u32(u32, u32, u32, u32)> call_00345c20;

void f_001b94b0(u32 r0_unused, u32 r1, u32 r2) {
    u32 r4 = 0;
    u32 r5 = 0;
    u32 r6 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 res_1 = 0;
    u32 r8 = global_00951480_address;
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
        call_001b88c0(r0_2, r1, r2, guest::cpu()->r[3]);
    }
    r0_3 = call_00345c20(0x10u, 1u, 1u, guest::cpu()->r[3]);  // (from the original)
    res_1 = r0_3 & 0x80000000u;  // (from the original)
    if (s32(res_1) < 0) {
        u32 r2_1 = r0_3 >> 0x1f;  // (from the original)
        if (r2_1 != 0) {
            report_fatal_result_with_info(r0_3, 0x1b9510u, r2_1);  // (from the original)
        }
    }
L_1b9514:;
    *global_009500e0 = 0;
    *global_009500e1 = 0;
    guest::cpu()->r[1] = global_009500e1_address;
    return;
L_1b952c:;
    u32 r0_4 = call_001b9254(0u, 0u, 0u, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_4 == 1u) {
        r5 = global_00951494_address;
        r4 = 0u;
    } else {
        if (r0_4 == 3u) {
            call_001b94b0(r0_4, r1, r2);
        }
        guest::preempt();
        goto L_1b9514;
    }
    do {
        sead__SafeStringBase_char___SafeStringBase_001b8008(gptr<u32>(r5)[r4], r1, r2);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 7);
    u32 r7 = global_009514b0_address;
    r5 = 0u;
    do {
        r4 = 0u;
        do {
            sead__SafeStringBase_char___SafeStringBase_001b8008(gptr<u32>(gptr<u32>(r7)[r4])[r5], r1, r2);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r4 += 1u;
            guest::preempt();
        } while (s32(r4) < 3);
        r5 += 1u;
        guest::preempt();
    } while (s32(r5) < 4);
    if (r6 != 0) {
        u32 r0_7 = *gptr<u8>(r8);
        if (r0_7 != 0) {
            if (r0_7 == 1u) {
                call_001b88c0(r0_7, r1, r2, guest::cpu()->r[3]);
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
GUEST_EXPORT_FRAMED(0x001b94b0, d_001b94b0::f_001b94b0, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_001b95f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b95f8 {

inline constexpr u32 vtable_sead__SafeStringBase_char_ = 0x009047f8u;
inline guest::global<u8, 0x00951480> global_00951480;
inline constexpr guest::Function<0x001b85c0, u32(u32, u32, u32, u32)> sead__SafeStringBase_char___SafeStringBase_001b85c0;
inline constexpr guest::Function<0x001b88c0, u32(u32, u32)> call_001b88c0;
inline constexpr guest::Function<0x001b9254, u32(u32, u32, u32, u32)> call_001b9254;
inline constexpr guest::Function<0x0053dffc, u32(u32, u32, u32)> call_0053dffc;

struct __attribute__((packed)) Frame_001b95f8 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x8];  // (not read or written by name)
    u8 byte_10;
    u8 unknown_11[0x7];  // (not read or written by name)
};
GUEST_OFFSET(Frame_001b95f8, word_0, 0x0);
GUEST_OFFSET(Frame_001b95f8, word_4, 0x4);
GUEST_OFFSET(Frame_001b95f8, byte_10, 0x10);
GUEST_SIZE(Frame_001b95f8, 0x18);

u32 sead__SafeStringBase_char___SafeStringBase_001b95f8(u32 r0, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_001b95f8> frame;  // the original's stack frame
    u32 r4_1 = r1;
    u32 r6_1 = r0;
    if (r1 != 0) {
        r0 = call_001b9254(0u, 0u, 0u, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0 != 1u) {
            return 0u;
        }
    }
    u32 r5_1 = 0u;
    u32 r0_2 = sead__SafeStringBase_char___SafeStringBase_001b85c0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        frame->word_0 = vtable_sead__SafeStringBase_char_;
        frame->word_4 = r6_1;
        u32 r0_3 = call_0053dffc(r0_2, frame.at(0x10).addr(), frame.at(0).addr());  // (from the original)
        r1 = guest::cpu()->r[1];
        if (r0_3 != 0) {
            r5_1 = s8(frame->byte_10);
        }
    }
    if (r4_1 != 0) {
        u32 r0_4 = *global_00951480;
        if (r0_4 == 1u) {
            call_001b88c0(r0_4, r1);
            r1 = guest::cpu()->r[1];
        }
    }
    guest::cpu()->r[1] = r1;
    return r5_1;
}

}  // namespace d_001b95f8
GUEST_EXPORT_FRAMED(0x001b95f8, d_001b95f8::sead__SafeStringBase_char___SafeStringBase_001b95f8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001b96a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b96a0 {

inline constexpr u32 global_0095bf70_address = 0x0095bf70u;
inline guest::global<u32, 0x0088e5bc> global_0088e5bc;
inline guest::global<u32, 0x0095bf70> global_0095bf70;
inline constexpr guest::Function<0x001b8b74, u32(u32, u32, u32, u32)> sead__FileHandle__FileHandle;
inline constexpr guest::Function<0x005cad0c, u32(u32, u32, u32, u32)> read_u32_0x0095bf74_;

u32 f_001b96a0(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = read_u32_0x0095bf74_(r0, r1, r2, r3);
    u32 r3_1 = *global_0088e5bc;
    u32 r0_2 = *global_0095bf70;
    frame.release();
    return sead__FileHandle__FileHandle(r0_2, 0u, r0_1, r3_1);
}

}  // namespace d_001b96a0
GUEST_EXPORT(0x001b96a0, d_001b96a0::f_001b96a0);

// f_001b97dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b97dc {

inline constexpr u32 global_00951494_address = 0x00951494u;
inline constexpr u32 global_009514b0_address = 0x009514b0u;
inline guest::global<u8, 0x00951480> global_00951480;
inline constexpr guest::Function<0x001b8008, u32(u32, u32, u32, u32)> sead__SafeStringBase_char___SafeStringBase_001b8008;
inline constexpr guest::Function<0x001b88c0, u32(u32, u32)> call_001b88c0;
inline constexpr guest::Function<0x001b9254, u32(u32, u32, u32, u32)> call_001b9254;
inline constexpr guest::Function<0x001b94b0, u32(u32, u32, u32)> call_001b94b0;

void f_001b97dc(u32 r0, u32 r1, u32 r2) {
    u32 r7 = r0;
    if (r0 != 0) {
        u32 r0_1 = call_001b9254(0u, 0u, 0u, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0_1 != 1u) {
            if (r0_1 == 3u) {
                call_001b94b0(r0_1, r1, r2);
                r1 = guest::cpu()->r[1];
            }
            guest::cpu()->r[1] = r1;
            return;
        }
    }
    u32 r5 = global_00951494_address;
    u32 r4 = 0u;
    do {
        u32 r0_3 = sead__SafeStringBase_char___SafeStringBase_001b8008(gptr<u32>(r5)[r4], r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0_3 != 1u) {
        }
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 7);
    u32 r8 = global_009514b0_address;
    r5 = 0u;
    do {
        r4 = 0u;
        do {
            u32 r0_5 = sead__SafeStringBase_char___SafeStringBase_001b8008(gptr<u32>(gptr<u32>(r8)[r4])[r5], r1, r2, guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            if (r0_5 != 1u) {
            }
            r4 += 1u;
            guest::preempt();
        } while (s32(r4) < 3);
        r5 += 1u;
        guest::preempt();
    } while (s32(r5) < 4);
    if (r7 != 0) {
        u32 r0_6 = *global_00951480;
        if (r0_6 == 1u) {
            call_001b88c0(r0_6, r1);
            r1 = guest::cpu()->r[1];
        }
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_001b97dc
GUEST_EXPORT_FRAMED(0x001b97dc, d_001b97dc::f_001b97dc, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_001b9a88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b9a88 {


u32 f_001b9a88(u32 r0) {
    u32 r1_1 = (((r0 & 0x10u) >> 4) + ((r0 & 0x20u) >> 5)) * 9u + (((r0 & 0x40u) >> 6) + ((r0 & 0x80u) >> 7)) * 9u * 3u + (((r0 & 4u) >> 2) + ((r0 & 8u) >> 3)) * 3u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return (r0 & 1u) + ((r0 & 2u) >> 1) + r1_1;
}

}  // namespace d_001b9a88
GUEST_EXPORT(0x001b9a88, d_001b9a88::f_001b9a88);

// f_001b9ae4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b9ae4 {

inline constexpr guest::Function<0x001b9a88, u32(u32)> call_001b9a88;

u32 f_001b9ae4(u32 r0, u32 r1) {
    u32 res_1 = r0 - 0xeu;  // (from the original)
    u32 zf_1 = res_1 == 0;
    if (!zf_1) {
        if (zf_1 || (res_1 >> 0x1f) != (((r0 ^ 0xeu) & (r0 ^ res_1)) >> 0x1f)) {  // (from the original)
            if (r0 == 0xbu) {  // (from the original)
                u32 r0_1 = call_001b9a88(r1);
                if (r0_1 < 0x1bu) {  // (from the original)
                    return gptr<u16>(0x865168u)[r0_1];  // (from the original)
                }
                return 0x9fu;  // (from the original)
            }
            if (r0 == 0xcu) {  // (from the original)
                u32 r0_3 = call_001b9a88(r1);
                return r0_3 >= 0x1bu ? 0xa6u : u32(gptr<u16>(0x86519eu)[r0_3]);  // (from the original)
            }
            if (r0 != 0xdu) {  // (from the original)
                return 0x9fu;  // (from the original)
            }
        } else {
            if (r0 == 0x10u) {  // (from the original)
                u32 r0_5 = call_001b9a88(r1);
                return r0_5 >= 9u ? 0xbbu : u32(gptr<u16>(0x8652acu)[r0_5]);  // (from the original)
            }
            if (r0 == 0x1bu) {  // (from the original)
                u32 r0_7 = call_001b9a88(r1);
                return r0_7 >= 0x1bu ? 0xbeu : u32(gptr<u16>(0x8652beu)[r0_7]);  // (from the original)
            }
            if (r0 != 0x1cu) {  // (from the original)
                return 0x9fu;  // (from the original)
            }
            u32 r0_9 = call_001b9a88(r1);
            return r0_9 >= 0x1bu ? 0xc4u : u32(gptr<u16>(0x8652f4u)[r0_9]);  // (from the original)
        }
        u32 r0_11 = call_001b9a88(r1);
        return r0_11 >= 0x1bu ? 0xacu : u32(gptr<u16>(0x8651d4u)[r0_11]);  // (from the original)
    }
    u32 r0_13 = call_001b9a88(r1);
    return r0_13 >= 0x51u ? 0xb2u : u32(gptr<u16>(0x86520au)[r0_13]);  // (from the original)
}

}  // namespace d_001b9ae4
GUEST_EXPORT_FRAMED(0x001b9ae4, d_001b9ae4::f_001b9ae4, 0x4000);  // pushes {lr} first, as the original

// f_001b9c34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b9c34 {


u32 f_001b9c34(u32 r0) {
    u32 r0_1 = r0 - 0xbeu;  // (from the original)
    return r0_1 >= 6u ? 0u : u32(gptr<u16>(0x865360u)[r0_1]);  // (from the original)
}

}  // namespace d_001b9c34
GUEST_EXPORT(0x001b9c34, d_001b9c34::f_001b9c34);

// f_001b9c54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b9c54 {


u32 f_001b9c54(u32 r0) {
    u32 r0_1 = r0 - 0xb2u;  // (from the original)
    return r0_1 >= 8u ? 0u : u32(gptr<u16>(0x865350u)[r0_1]);  // (from the original)
}

}  // namespace d_001b9c54
GUEST_EXPORT(0x001b9c54, d_001b9c54::f_001b9c54);

// f_001b9c74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b9c74 {


u32 f_001b9c74(u32 r0) {
    u32 r0_1 = r0 - 0xa6u;  // (from the original)
    return r0_1 >= 6u ? 0u : u32(gptr<u16>(0x865338u)[r0_1]);  // (from the original)
}

}  // namespace d_001b9c74
GUEST_EXPORT(0x001b9c74, d_001b9c74::f_001b9c74);

// f_001b9c94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b9c94 {


u32 f_001b9c94(u32 r0) {
    u32 r0_1 = r0 - 0x9fu;  // (from the original)
    return r0_1 >= 7u ? 0u : u32(gptr<u16>(0x86532au)[r0_1]);  // (from the original)
}

}  // namespace d_001b9c94
GUEST_EXPORT(0x001b9c94, d_001b9c94::f_001b9c94);

// f_001b9cb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b9cb4 {


u32 f_001b9cb4(u32 r0) {
    u32 r0_1 = r0 - 0xacu;  // (from the original)
    return r0_1 >= 6u ? 0u : u32(gptr<u16>(0x865344u)[r0_1]);  // (from the original)
}

}  // namespace d_001b9cb4
GUEST_EXPORT(0x001b9cb4, d_001b9cb4::f_001b9cb4);

// f_001b9cd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b9cd4 {


u32 f_001b9cd4(u32 r0) {
    u32 r0_1 = r0 - 0xc4u;  // (from the original)
    return r0_1 >= 4u ? 0u : u32(gptr<u16>(0x865160u)[r0_1]);  // (from the original)
}

}  // namespace d_001b9cd4
GUEST_EXPORT(0x001b9cd4, d_001b9cd4::f_001b9cd4);

// f_001b9cf4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b9cf4 {


u32 f_001b9cf4(u32 r0) {
    u32 r0_1 = r0 - 0xbbu;  // (from the original)
    return r0_1 >= 3u ? 0u : u32(gptr<u16>(0x86515au)[r0_1]);  // (from the original)
}

}  // namespace d_001b9cf4
GUEST_EXPORT(0x001b9cf4, d_001b9cf4::f_001b9cf4);

// f_001b9d14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001b9d14 {

inline constexpr u32 global_009528b8_address = 0x009528b8u;
inline constexpr guest::Function<0x002fc25c, u32(u32, u32, u32, u32)> second_random_below;

u32 f_001b9d14(u32 r0, u32 r1) {
    u32 r6 = 0u;
    u32 r8 = r0;
    u32 r9 = r1;
    u32 r10 = global_009528b8_address;
    u32 r4 = r6;
    u32 r5 = r6;
    do {
        u32 r0_1 = lsr_r(r9, r4 & 0xff);  // (from the original)
        u32 r1_1 = lsr_r(r8, r4 & 0xff);  // (from the original)
        u32 r2_1 = r0_1 & 1u;
        u32 r3_1 = r1_1 & 1u;
        u32 r1_2 = r3_1 + ((r1_1 & 2u) >> 1);
        u32 r7_1 = r1_2 + (r2_1 + ((r0_1 & 2u) >> 1)) * 3u;
        u32 r0_2 = second_random_below(4u, r1_2, r2_1, r3_1);
        r5 += 1u;
        u32 r0_3 = lsl_r(u32(*gptr<u8>(gptr<u32>(r10)[r7_1] + r0_2)), r4 & 0xff) | r6;  // (from the original)
        r4 = uxth(r4 + 2u);
        r6 = uxth(r0_3);
        guest::preempt();
    } while (r5 < 4u);
    return r6;
}

}  // namespace d_001b9d14
GUEST_EXPORT_FRAMED(0x001b9d14, d_001b9d14::f_001b9d14, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

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
inline constexpr u32 global_00a185a8_address = 0x00a185a8u;
inline constexpr u32 global_00a185e4_address = 0x00a185e4u;
inline guest::global<u8, 0x008c9f1c> empty_string;
inline guest::global<u32, 0x00952cac> work_heap;
inline guest::global<u32, 0x00a18590> global_00a18590;
inline guest::global<u32, 0x00a18594> global_00a18594;
inline guest::global<u32, 0x00a18598> global_00a18598;
inline guest::global<u32, 0x00a1859c> global_00a1859c;
inline guest::global<u32, 0x00a185a0> global_00a185a0;
inline guest::global<u32, 0x00a185a4> global_00a185a4;
inline constexpr guest::Function<0x0012ca50, u32(u32)> construct_font_source;
inline constexpr guest::Function<0x0013864c, u32(u32, u32, u32)> Handle__release;
inline constexpr guest::Function<0x0013bb80, u32(u32, u32, u32)> do_nothing_13bb80;
inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32)> copy_bytes_at_any_alignment;
inline constexpr guest::Function<0x00544f18, u32(u32)> print_finish;
inline constexpr guest::Function<0x00544fec, u32(u32, u32)> print_append;
inline constexpr guest::Function<0x0054a644, u32(u32, u32, u32, u32)> construct_print_output;
inline constexpr guest::Function<0x0056a4a4, u32(u32, u32, u32)> sead__FixedSafeString_256___FixedSafeString_0056a4a4;
inline constexpr guest::Function<0x005bf790, u32(u32, u32, u32, u32)> source_start;

struct __attribute__((packed)) Frame_001ba7c0 {
    u32 word_0;
    u8 unknown_4[0x8];  // (not read or written by name)
    u8 byte_c;
    u8 unknown_d[0xfe];  // (not read or written by name)
    u8 byte_10b;
    u8 unknown_10c[0x8];  // (not read or written by name)
    u32 word_114;
    u8 unknown_118[0x18];  // (not read or written by name)
};
GUEST_OFFSET(Frame_001ba7c0, word_0, 0x0);
GUEST_OFFSET(Frame_001ba7c0, byte_c, 0xc);
GUEST_OFFSET(Frame_001ba7c0, byte_10b, 0x10b);
GUEST_OFFSET(Frame_001ba7c0, word_114, 0x114);
GUEST_SIZE(Frame_001ba7c0, 0x130);

u32 sead__FixedSafeString_256___FixedSafeString_001ba7c0(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3, float S0, float S1, float S2, float S3, float S4, float S5) {
    guest::StackFrameOf<Frame_001ba7c0> frame;  // the original's stack frame
    gptr<Local_001ba7c0_ea_1> ea_1 = gptr<Local_001ba7c0_ea_1>(frame.at(4).addr());
    ea_1->word_0 = frame.at(0xc).addr();  // (from the original)
    ea_1->word_4 = 0x100;  // (from the original)
    u32 r2_1 = *empty_string;
    frame->byte_10b = u8(r2_1);
    u32 r0_1 = *empty_string;
    frame->word_0 = vtable_sead__FixedSafeString_256_;
    frame->byte_c = u8(r0_1);
    u32 r0_2 = frame.at(0x110).addr();  // (from the original)
    construct_print_output(r0_2, frame.at(0).addr(), r2_1, r3);
    print_append(r0_2, 0x1baa00u);  // (from the original)
    print_finish(r0_2);
    u32 r6_1 = frame.at(0).addr();
    construct_font_source(frame.at(0x110).addr());  // (from the original)
    u32 r0_4 = sead__FixedSafeString_256___FixedSafeString_0056a4a4(r6_1, guest::cpu()->r[1], guest::cpu()->r[2]);
    if (r0_4 != 0) {
        u32 r0_6 = source_start(frame.at(0x110).addr(), r6_1, *work_heap, 0x20u);  // (from the original)
        if (r0_6 != 0) {
            gptr<Local_001ba7c0_r0_7> r0_7 = gptr<Local_001ba7c0_r0_7>(frame->word_114);
            float S0_6 = r0_7->float_0;
            float S1_6 = r0_7->float_4;
            float S2_6 = r0_7->float_8;
            float S3_6 = r0_7->float_c;
            float S4_6 = r0_7->float_10;
            float S5_6 = r0_7->float_14;
            *global_00a18590 = std::bit_cast<u32>(S0_6);
            *global_00a18594 = std::bit_cast<u32>(S1_6);
            *global_00a18598 = std::bit_cast<u32>(S2_6);
            *global_00a1859c = std::bit_cast<u32>(S3_6);
            *global_00a185a0 = std::bit_cast<u32>(S4_6);
            *global_00a185a4 = std::bit_cast<u32>(S5_6);
            guest::cpu()->s[0] = S0_6;
            guest::cpu()->s[1] = S1_6;
            guest::cpu()->s[2] = S2_6;
            guest::cpu()->s[3] = S3_6;
            guest::cpu()->s[4] = S4_6;
            guest::cpu()->s[5] = S5_6;
            Handle__release(frame.at(0x110).addr(), guest::cpu()->r[1], guest::cpu()->r[2]);  // (from the original)
        }
    }
    do_nothing_13bb80(frame.at(0x110).addr(), guest::cpu()->r[1], guest::cpu()->r[2]);  // (from the original)
    gptr<Local_001ba7c0_ea_2> ea_2 = gptr<Local_001ba7c0_ea_2>(frame.at(4).addr());
    ea_2->word_0 = frame.at(0xc).addr();  // (from the original)
    ea_2->word_4 = 0x100;  // (from the original)
    u32 r2_8 = *empty_string;
    frame->byte_10b = u8(r2_8);
    u32 r0_10 = *empty_string;
    frame->word_0 = vtable_sead__FixedSafeString_256_;
    frame->byte_c = u8(r0_10);
    u32 r0_11 = frame.at(0x110).addr();  // (from the original)
    construct_print_output(r0_11, frame.at(0).addr(), r2_8, guest::cpu()->r[3]);
    print_append(r0_11, 0x1baa1cu);  // (from the original)
    print_finish(r0_11);
    u32 r5_1 = frame.at(0).addr();
    construct_font_source(frame.at(0x110).addr());  // (from the original)
    u32 r0_13 = sead__FixedSafeString_256___FixedSafeString_0056a4a4(r5_1, guest::cpu()->r[1], guest::cpu()->r[2]);
    if (r0_13 != 0) {
        u32 r0_15 = source_start(frame.at(0x110).addr(), r5_1, *work_heap, 0x20u);  // (from the original)
        if (r0_15 != 0) {
            copy_bytes_at_any_alignment(global_00a185a8_address, frame->word_114, 0x3cu);  // (from the original)
            Handle__release(frame.at(0x110).addr(), guest::cpu()->r[1], guest::cpu()->r[2]);  // (from the original)
        }
    }
    do_nothing_13bb80(frame.at(0x110).addr(), guest::cpu()->r[1], guest::cpu()->r[2]);  // (from the original)
    gptr<Local_001ba7c0_ea_3> ea_3 = gptr<Local_001ba7c0_ea_3>(frame.at(4).addr());
    ea_3->word_0 = frame.at(0xc).addr();  // (from the original)
    ea_3->word_4 = 0x100;  // (from the original)
    u32 r2_16 = *empty_string;
    frame->byte_10b = u8(r2_16);
    u32 r0_18 = *empty_string;
    frame->word_0 = vtable_sead__FixedSafeString_256_;
    frame->byte_c = u8(r0_18);
    u32 r0_19 = frame.at(0x110).addr();  // (from the original)
    construct_print_output(r0_19, frame.at(0).addr(), r2_16, guest::cpu()->r[3]);
    print_append(r0_19, 0x1baa34u);  // (from the original)
    print_finish(r0_19);
    u32 r4_1 = frame.at(0).addr();
    construct_font_source(frame.at(0x110).addr());  // (from the original)
    u32 r2_20 = guest::cpu()->r[2];
    u32 r0_21 = sead__FixedSafeString_256___FixedSafeString_0056a4a4(r4_1, guest::cpu()->r[1], r2_20);
    if (r0_21 != 0) {
        r2_20 = *work_heap;
        r0_21 = source_start(frame.at(0x110).addr(), r4_1, r2_20, 0x20u);  // (from the original)
        if (r0_21 != 0) {
            copy_bytes_at_any_alignment(global_00a185e4_address, frame->word_114, 0x38u);  // (from the original)
            r2_20 = guest::cpu()->r[2];
            r0_21 = frame.at(0x110).addr();  // (from the original)
            Handle__release(r0_21, guest::cpu()->r[1], r2_20);
        }
    }
    do_nothing_13bb80(r0_21, guest::cpu()->r[1], r2_20);
    return frame.at(0x110).addr();  // (from the original)
}

}  // namespace d_001ba7c0
GUEST_EXPORT_FRAMED(0x001ba7c0, d_001ba7c0::sead__FixedSafeString_256___FixedSafeString_001ba7c0, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_001baa4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001baa4c {

inline constexpr u32 work_heap_address = 0x00952cacu;
inline guest::global<u32, 0x00952cac> work_heap;
inline constexpr guest::Function<0x0012ca50, u32(u32, u32, u32, u32)> construct_font_source;
inline constexpr guest::Function<0x0013864c, u32(u32)> Handle__release;
inline constexpr guest::Function<0x0013bb80, u32(u32)> do_nothing_13bb80;
inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32)> copy_bytes_at_any_alignment;
inline constexpr guest::Function<0x0056a4a4, u32(u32)> sead__FixedSafeString_256___FixedSafeString_0056a4a4;
inline constexpr guest::Function<0x005bf790, u32(u32, u32, u32, u32)> source_start;

struct __attribute__((packed)) Frame_001baa4c {
    u8 unknown_0[0x4];  // (not read or written by name)
    u32 word_4;
    u8 unknown_8[0xc];  // (not read or written by name)
};
GUEST_OFFSET(Frame_001baa4c, word_4, 0x4);
GUEST_SIZE(Frame_001baa4c, 0x14);

void f_001baa4c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_001baa4c> frame;  // the original's stack frame
    if (r0 == 0) {
        return;
    }
    construct_font_source(frame.at(0).addr(), r1, r2, r3);
    u32 r0_2 = sead__FixedSafeString_256___FixedSafeString_0056a4a4(r1);
    if (r0_2 != 0) {
        r0_2 = source_start(frame.at(0).addr(), r1, *work_heap, 0x20u);  // (from the original)
        if (r0_2 != 0) {
            copy_bytes_at_any_alignment(r0, frame->word_4, 0x78u);  // (from the original)
            r0_2 = frame.at(0).addr();
            Handle__release(r0_2);
        }
    }
    do_nothing_13bb80(r0_2);
}

}  // namespace d_001baa4c
GUEST_EXPORT_FRAMED(0x001baa4c, d_001baa4c::f_001baa4c, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_001baac8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001baac8 {

struct __attribute__((packed)) Object_001baac8_0 {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
    float float_10;
    float float_14;
};
GUEST_OFFSET(Object_001baac8_0, float_0, 0x0);
GUEST_OFFSET(Object_001baac8_0, float_4, 0x4);
GUEST_OFFSET(Object_001baac8_0, float_8, 0x8);
GUEST_OFFSET(Object_001baac8_0, float_c, 0xc);
GUEST_OFFSET(Object_001baac8_0, float_10, 0x10);
GUEST_OFFSET(Object_001baac8_0, float_14, 0x14);

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
inline constexpr guest::Function<0x0056a4a4, u32(u32)> sead__FixedSafeString_256___FixedSafeString_0056a4a4;
inline constexpr guest::Function<0x005bf790, u32(u32, u32, u32, u32)> source_start;

struct __attribute__((packed)) Frame_001baac8 {
    u8 unknown_0[0x4];  // (not read or written by name)
    u32 word_4;
    u8 unknown_8[0xc];  // (not read or written by name)
};
GUEST_OFFSET(Frame_001baac8, word_4, 0x4);
GUEST_SIZE(Frame_001baac8, 0x14);

u32 f_001baac8(gptr<Object_001baac8_0> arg0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2, float S3, float S4, float S5) {
    guest::StackFrameOf<Frame_001baac8> frame;  // the original's stack frame
    if (arg0.addr() == 0) {
        return arg0.addr();
    }
    construct_font_source(frame.at(0).addr(), r1, r2, r3);
    u32 r0_2 = sead__FixedSafeString_256___FixedSafeString_0056a4a4(r1);
    if (r0_2 != 0) {
        r0_2 = source_start(frame.at(0).addr(), r1, *work_heap, 0x20u);  // (from the original)
        if (r0_2 != 0) {
            gptr<Local_001baac8_r0_4> r0_4 = gptr<Local_001baac8_r0_4>(frame->word_4);
            float S0_3 = r0_4->float_0;
            float S1_3 = r0_4->float_4;
            float S2_3 = r0_4->float_8;
            float S3_3 = r0_4->float_c;
            float S4_3 = r0_4->float_10;
            float S5_3 = r0_4->float_14;
            r0_2 = frame.at(0).addr();
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
            Handle__release(r0_2);
        }
    }
    do_nothing_13bb80(r0_2);
    return frame.at(0).addr();
}

}  // namespace d_001baac8
GUEST_EXPORT_FRAMED(0x001baac8, d_001baac8::f_001baac8, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_001bab40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001bab40 {

inline constexpr u32 work_heap_address = 0x00952cacu;
inline guest::global<u32, 0x00952cac> work_heap;
inline constexpr guest::Function<0x0012ca50, u32(u32, u32, u32, u32)> construct_font_source;
inline constexpr guest::Function<0x0013864c, u32(u32)> Handle__release;
inline constexpr guest::Function<0x0013bb80, u32(u32)> do_nothing_13bb80;
inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32)> copy_bytes_at_any_alignment;
inline constexpr guest::Function<0x0056a4a4, u32(u32)> sead__FixedSafeString_256___FixedSafeString_0056a4a4;
inline constexpr guest::Function<0x005bf790, u32(u32, u32, u32, u32)> source_start;

struct __attribute__((packed)) Frame_001bab40 {
    u8 unknown_0[0x4];  // (not read or written by name)
    u32 word_4;
    u8 unknown_8[0xc];  // (not read or written by name)
};
GUEST_OFFSET(Frame_001bab40, word_4, 0x4);
GUEST_SIZE(Frame_001bab40, 0x14);

u32 f_001bab40(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_001bab40> frame;  // the original's stack frame
    if (r0 == 0) {
        return r0;
    }
    construct_font_source(frame.at(0).addr(), r1, r2, r3);
    u32 r0_2 = sead__FixedSafeString_256___FixedSafeString_0056a4a4(r1);
    if (r0_2 != 0) {
        r0_2 = source_start(frame.at(0).addr(), r1, *work_heap, 0x20u);  // (from the original)
        if (r0_2 != 0) {
            copy_bytes_at_any_alignment(r0, frame->word_4, 0x3cu);  // (from the original)
            r0_2 = frame.at(0).addr();
            Handle__release(r0_2);
        }
    }
    do_nothing_13bb80(r0_2);
    return frame.at(0).addr();
}

}  // namespace d_001bab40
GUEST_EXPORT_FRAMED(0x001bab40, d_001bab40::f_001bab40, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_001babbc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001babbc {

inline constexpr u32 work_heap_address = 0x00952cacu;
inline guest::global<u32, 0x00952cac> work_heap;
inline constexpr guest::Function<0x0012ca50, u32(u32, u32, u32, u32)> construct_font_source;
inline constexpr guest::Function<0x0013864c, u32(u32)> Handle__release;
inline constexpr guest::Function<0x0013bb80, u32(u32)> do_nothing_13bb80;
inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32)> copy_bytes_at_any_alignment;
inline constexpr guest::Function<0x0056a4a4, u32(u32)> sead__FixedSafeString_256___FixedSafeString_0056a4a4;
inline constexpr guest::Function<0x005bf790, u32(u32, u32, u32, u32)> source_start;

struct __attribute__((packed)) Frame_001babbc {
    u8 unknown_0[0x4];  // (not read or written by name)
    u32 word_4;
    u8 unknown_8[0xc];  // (not read or written by name)
};
GUEST_OFFSET(Frame_001babbc, word_4, 0x4);
GUEST_SIZE(Frame_001babbc, 0x14);

u32 f_001babbc(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_001babbc> frame;  // the original's stack frame
    if (r0 == 0) {
        return r0;
    }
    construct_font_source(frame.at(0).addr(), r1, r2, r3);
    u32 r0_2 = sead__FixedSafeString_256___FixedSafeString_0056a4a4(r1);
    if (r0_2 != 0) {
        r0_2 = source_start(frame.at(0).addr(), r1, *work_heap, 0x20u);  // (from the original)
        if (r0_2 != 0) {
            copy_bytes_at_any_alignment(r0, frame->word_4, 0x38u);  // (from the original)
            r0_2 = frame.at(0).addr();
            Handle__release(r0_2);
        }
    }
    do_nothing_13bb80(r0_2);
    return frame.at(0).addr();
}

}  // namespace d_001babbc
GUEST_EXPORT_FRAMED(0x001babbc, d_001babbc::f_001babbc, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_001bac38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001bac38 {

struct __attribute__((packed)) Object_001bac38_0 {
    u32 word_0;
    float float_4;
    float float_8;
    float float_c;
    float float_10;
    float float_14;
};
GUEST_OFFSET(Object_001bac38_0, word_0, 0x0);
GUEST_OFFSET(Object_001bac38_0, float_4, 0x4);
GUEST_OFFSET(Object_001bac38_0, float_8, 0x8);
GUEST_OFFSET(Object_001bac38_0, float_c, 0xc);
GUEST_OFFSET(Object_001bac38_0, float_10, 0x10);
GUEST_OFFSET(Object_001bac38_0, float_14, 0x14);

inline guest::global<u32, 0x00a18590> global_00a18590;
inline guest::global<u32, 0x00a18594> global_00a18594;
inline guest::global<u32, 0x00a18598> global_00a18598;
inline guest::global<u32, 0x00a1859c> global_00a1859c;
inline guest::global<u32, 0x00a185a0> global_00a185a0;
inline guest::global<u32, 0x00a185a4> global_00a185a4;

void f_001bac38(gptr<Object_001bac38_0> arg0) {
    float S1_1 = std::bit_cast<float>(*global_00a18594);
    float S2_1 = std::bit_cast<float>(*global_00a18598);
    float S3_1 = std::bit_cast<float>(*global_00a1859c);
    float S4_1 = std::bit_cast<float>(*global_00a185a0);
    float S5_1 = std::bit_cast<float>(*global_00a185a4);
    arg0->word_0 = *global_00a18590;
    arg0->float_4 = S1_1;
    arg0->float_8 = S2_1;
    arg0->float_c = S3_1;
    arg0->float_10 = S4_1;
    arg0->float_14 = S5_1;
}

}  // namespace d_001bac38
GUEST_EXPORT(0x001bac38, d_001bac38::f_001bac38);

// f_001bac4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001bac4c {

struct __attribute__((packed)) Object_001bac4c_0 {
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
GUEST_OFFSET(Object_001bac4c_0, word_0, 0x0);
GUEST_OFFSET(Object_001bac4c_0, float_4, 0x4);
GUEST_OFFSET(Object_001bac4c_0, float_8, 0x8);
GUEST_OFFSET(Object_001bac4c_0, float_c, 0xc);
GUEST_OFFSET(Object_001bac4c_0, float_10, 0x10);
GUEST_OFFSET(Object_001bac4c_0, float_14, 0x14);
GUEST_OFFSET(Object_001bac4c_0, float_18, 0x18);
GUEST_OFFSET(Object_001bac4c_0, float_1c, 0x1c);
GUEST_OFFSET(Object_001bac4c_0, word_20, 0x20);
GUEST_OFFSET(Object_001bac4c_0, float_24, 0x24);
GUEST_OFFSET(Object_001bac4c_0, float_28, 0x28);
GUEST_OFFSET(Object_001bac4c_0, float_2c, 0x2c);
GUEST_OFFSET(Object_001bac4c_0, float_30, 0x30);
GUEST_OFFSET(Object_001bac4c_0, float_34, 0x34);
GUEST_OFFSET(Object_001bac4c_0, float_38, 0x38);

inline guest::global<u32, 0x00a185a8> global_00a185a8;
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

void f_001bac4c(gptr<Object_001bac4c_0> arg0) {
    float S1_1 = std::bit_cast<float>(*global_00a185ac);
    float S2_1 = std::bit_cast<float>(*global_00a185b0);
    float S3_1 = std::bit_cast<float>(*global_00a185b4);
    float S4_1 = std::bit_cast<float>(*global_00a185b8);
    float S5_1 = std::bit_cast<float>(*global_00a185bc);
    float S6_1 = std::bit_cast<float>(*global_00a185c0);
    float S7_1 = std::bit_cast<float>(*global_00a185c4);
    arg0->word_0 = *global_00a185a8;
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
GUEST_EXPORT(0x001bac4c, d_001bac4c::f_001bac4c);

// f_001bac74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001bac74 {

struct __attribute__((packed)) Object_001bac74_0 {
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
GUEST_OFFSET(Object_001bac74_0, word_0, 0x0);
GUEST_OFFSET(Object_001bac74_0, float_4, 0x4);
GUEST_OFFSET(Object_001bac74_0, float_8, 0x8);
GUEST_OFFSET(Object_001bac74_0, float_c, 0xc);
GUEST_OFFSET(Object_001bac74_0, float_10, 0x10);
GUEST_OFFSET(Object_001bac74_0, float_14, 0x14);
GUEST_OFFSET(Object_001bac74_0, float_18, 0x18);
GUEST_OFFSET(Object_001bac74_0, float_1c, 0x1c);
GUEST_OFFSET(Object_001bac74_0, word_20, 0x20);
GUEST_OFFSET(Object_001bac74_0, float_24, 0x24);
GUEST_OFFSET(Object_001bac74_0, float_28, 0x28);
GUEST_OFFSET(Object_001bac74_0, float_2c, 0x2c);
GUEST_OFFSET(Object_001bac74_0, float_30, 0x30);
GUEST_OFFSET(Object_001bac74_0, float_34, 0x34);

inline guest::global<u32, 0x00a185e4> global_00a185e4;
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

void f_001bac74(gptr<Object_001bac74_0> arg0) {
    float S1_1 = std::bit_cast<float>(*global_00a185e8);
    float S2_1 = std::bit_cast<float>(*global_00a185ec);
    float S3_1 = std::bit_cast<float>(*global_00a185f0);
    float S4_1 = std::bit_cast<float>(*global_00a185f4);
    float S5_1 = std::bit_cast<float>(*global_00a185f8);
    float S6_1 = std::bit_cast<float>(*global_00a185fc);
    float S7_1 = std::bit_cast<float>(*global_00a18600);
    arg0->word_0 = *global_00a185e4;
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
GUEST_EXPORT(0x001bac74, d_001bac74::f_001bac74);

// f_001bac9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001bac9c {

inline constexpr u32 global_00953602_address = 0x00953602u;
inline constexpr u32 global_00a21f6c_address = 0x00a21f6cu;
inline constexpr guest::Function<0x0013fac4, u32(u32, u32, u32)> set_bytes;
inline constexpr guest::Function<0x00301444, u32(u32, u32)> clear;

u32 f_001bac9c() {
    guest::StackFrame frame(0x8);  // the original's stack frame
    clear(global_00a21f6c_address, 0x20u);  // (from the original)
    frame.release();
    return set_bytes(global_00953602_address, 0x20u, ~0u);  // (from the original)
}

}  // namespace d_001bac9c
GUEST_EXPORT(0x001bac9c, d_001bac9c::f_001bac9c);

// f_001bace0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001bace0 {

inline constexpr guest::Function<0x00118c9d, u32(u32, u32)> index_of_villager_in_town;
inline constexpr guest::Function<0x001df274, u32(u32, u32)> call_001df274;
inline constexpr guest::Function<0x002fb328, u32(u32, u32)> get_save_data;
inline constexpr guest::Function<0x002fb918, u32(u32)> data_block_71900;
inline constexpr guest::Function<0x00309fbc, u32(u32, u32)> player_index_in;
inline constexpr guest::Function<0x006f5138, u32(u32, u32, u32, u32)> call_006f5138;
inline constexpr guest::Function<0x0071a0b0, u32(u32, u32)> find_player_matching_entry;
inline constexpr guest::Function<0x00758070, u32(u32)> call_00758070;
inline constexpr guest::Function<0x007580d0, u32(u32, u32)> call_007580d0;
inline constexpr guest::Function<0x00758128, u32(u32, u32, u32, u32)> call_00758128;
inline constexpr guest::Function<0x00770934, u32(u32)> call_00770934;

u32 f_001bace0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r5_1 = 0;
    u32 r0_1 = call_00758128(r0, r1, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        u32 r0_2 = call_007580d0(r0, r1_1);
        if (r0_2 == 0) {
            u32 r0_3 = call_00758070(r0);
            r1_1 = guest::cpu()->r[1];
            if (r0_3 != 0) {
                u32 save_data_4 = get_save_data(r0_3, r1_1);
                index_of_villager_in_town(save_data_4 + 0x292a4u, r0_3);  // (from the original)
                r1_1 = guest::cpu()->r[1];
            }
        } else {
            u32 save_data_5 = get_save_data(r0_2, guest::cpu()->r[1]);
            u32 r0_8 = find_player_matching_entry(save_data_5 + 0xa0u, r0_2);  // (from the original)
            r1_1 = guest::cpu()->r[1];
            if (r0_8 != 0) {
                u32 r0_9 = call_007580d0(r0, r1_1);
                if (r0_9 == 0) {
                    r5_1 = 0u;
                } else {
                    u32 save_data_6 = get_save_data(r0_9, guest::cpu()->r[1]);
                    u32 r0_11 = find_player_matching_entry(save_data_6 + 0xa0u, r0_9);  // (from the original)
                    r0_9 = player_index_in(save_data_6 + 0xa0u, r0_11);  // (from the original)
                    r5_1 = r0_9;
                }
                u32 r0_12 = data_block_71900(r0_9);
                u32 r0_13 = call_001df274(r0_12, r5_1);
                u32 r0_14 = call_00770934(r0_13);
                r1_1 = r0_14;
                if (s32(r0_14) >= 0) {
                    call_006f5138(r0_13, r1_1, r0, 0u);
                    return 1u;
                }
            }
        }
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_001bace0
GUEST_EXPORT_FRAMED(0x001bace0, d_001bace0::f_001bace0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001baf6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001baf6c {

inline constexpr guest::Function<0x001e4348, u32(u32, u32, u32)> call_001e4348;
inline constexpr guest::Function<0x002fb918, u32(u32, u32, u32, u32)> data_block_71900;
inline constexpr guest::Function<0x007105d4, u32(u32)> first_clear_entry_of_80;

u32 f_001baf6c(u32 r0, u32 r1, u32 r2) {
    u32 r0_3 = 0;
    u32 r0_1 = data_block_71900(r0, r1, r2, guest::cpu()->r[3]);
    u32 r0_2 = first_clear_entry_of_80(r0_1 + 0xa4f8u);  // (from the original)
    u32 r1_2 = r0_2;
    if (r0_2 + 1u == 0) {
        r0_3 = 0u;
    } else {
        call_001e4348(r0_1 + 0xa4f8u, r1_2, r0);  // (from the original)
        r1_2 = guest::cpu()->r[1];
        r0_3 = 1u;
    }
    guest::cpu()->r[1] = r1_2;
    return r0_3;
}

}  // namespace d_001baf6c
GUEST_EXPORT_FRAMED(0x001baf6c, d_001baf6c::f_001baf6c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001bb0c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001bb0c4 {

struct __attribute__((packed)) Local_001bb0c4_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001bb0c4_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_001bb0c4_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_001bb0c4_r0_8 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_001bb0c4_r0_8, word_0, 0x0);
GUEST_OFFSET(Local_001bb0c4_r0_8, word_4, 0x4);
GUEST_OFFSET(Local_001bb0c4_r0_8, word_8, 0x8);

inline guest::global<u32, 0x00953fa4> global_00953fa4;
inline guest::global<u32, 0x00953fa8> global_00953fa8;
inline constexpr guest::Function<0x001bbc30, u32(u32)> call_001bbc30;
inline constexpr guest::Function<0x001df3d4, u32(u32)> main_slot_entry_001df3d4;
inline constexpr guest::Function<0x001e4214, u32(u32, u32, u32, u32)> call_001e4214;
inline constexpr guest::Function<0x001e442c, u32(u32, u32, u32, u32)> call_001e442c;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> read_global_byte_2;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> table_entry_has_all_bits;
inline constexpr guest::Function<0x002fb378, u32(u32)> return_constant_0xad56b0_;
inline constexpr guest::Function<0x002fb918, u32(u32)> data_block_71900;
inline constexpr guest::Function<0x002fc900, u32(u32)> mode_above_1;
inline constexpr guest::Function<0x002ff3fc, u32(u32, u32, u32, u32)> call_002ff3fc;
inline constexpr guest::Function<0x006f4f48, u32(u32)> call_006f4f48;
inline constexpr guest::Function<0x00710614, u32(u32, u32, u32, u32)> letter_at;

void f_001bb0c4(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = read_global_byte_2(r0, r1, r2, r3);
    u32 r0_2 = table_entry_has_all_bits(0x10u, r0_1);  // (from the original)
    if (r0_2 == 0) {
        u32 r0_3 = mode_above_1(r0_2);
        if (r0_3 == 0) {
            u32 r0_4 = read_global_byte_2(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            u32 r0_5 = table_entry_has_all_bits(0x20000u, r0_4);  // (from the original)
            if (r0_5 == 0) {
                u32 r0_6 = data_block_71900(r0_5);
                u32 r0_7 = main_slot_entry_001df3d4(r0_6);
                if (r0_7 != 0) {
                    r0_7 = call_006f4f48(r0_7);
                }
                gptr<Local_001bb0c4_r0_8> r0_8 = gptr<Local_001bb0c4_r0_8>(return_constant_0xad56b0_(r0_7));
                u32 r4_1 = r0_8->word_0;
                u32 r5_1 = r0_8->word_4;
                u32 r6_1 = r0_8->word_8;
                u32 r0_9 = data_block_71900(r0_8.addr());
                gptr<Local_001bb0c4_ea_1> ea_1 = gptr<Local_001bb0c4_ea_1>(r0_9 + 0x16cf8u);  // (from the original)
                u32 r3_9 = ea_1->word_4;
                *global_00953fa4 = ea_1->word_0;
                *global_00953fa8 = r3_9;
                u32 r0_11 = call_001e4214(r0_9 + 0xa4f8u, r4_1, r5_1, r6_1);  // (from the original)
                if (r0_11 != 0) {
                    u32 r0_12 = data_block_71900(r0_11);
                    u32 r6 = r0_12 + 0xa4f8u;  // (from the original)
                    u32 r0_13 = call_001e442c(r6, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    u32 r5 = r0_13;
                    u32 r4 = 0u;
                    if (s32(r0_13) > 0) {
                        do {
                            u32 letter = letter_at(r6, r4, r2, r3);
                            u32 r0_15 = call_001bbc30(letter);
                            r2 = guest::cpu()->r[2];
                            r3 = guest::cpu()->r[3];
                            if (r0_15 != 0) {
                                call_002ff3fc(r6, r4, r2, r3);
                                r2 = guest::cpu()->r[2];
                                r3 = guest::cpu()->r[3];
                            }
                            r4 += 1u;
                            guest::preempt();
                        } while (s32(r4) < s32(r5));
                    }
                    frame.release();
                    call_001e442c(r6, guest::cpu()->r[1], r2, r3);
                    return;
                }
            }
        }
    }
}

}  // namespace d_001bb0c4
GUEST_EXPORT(0x001bb0c4, d_001bb0c4::f_001bb0c4);

// f_001bb304: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001bb304 {

struct __attribute__((packed)) Object_001bb304_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_001bb304_0, word_0, 0x0);
GUEST_OFFSET(Object_001bb304_0, word_4, 0x4);
GUEST_OFFSET(Object_001bb304_0, word_8, 0x8);

inline constexpr u32 global_00aaf6a4_address = 0x00aaf6a4u;
inline guest::global<u32, 0x00aaf6a4> global_00aaf6a4;
inline guest::global<u32, 0x00aaf6a8> global_00aaf6a8;
inline guest::global<u32, 0x00aaf6ac> global_00aaf6ac;
inline constexpr guest::Function<0x0056cbe8, u32(u32, u32)> TimeStamp__set_millisecond;
inline constexpr guest::Function<0x0056cce4, u32(u32, u32, u32, u32)> TimeStamp__set_hour;
inline constexpr guest::Function<0x0056ce84, u32(u32, u32)> TimeStamp__set_minute;
inline constexpr guest::Function<0x0056cedc, u32(u32, u32)> TimeStamp__set_second;

void f_001bb304(gptr<Object_001bb304_0> arg0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r2_1 = arg0->word_4;
    u32 r3_1 = arg0->word_8;
    *global_00aaf6a4 = arg0->word_0;
    *global_00aaf6a8 = r2_1;
    *global_00aaf6ac = r3_1;
    TimeStamp__set_hour(global_00aaf6a4_address, 6u, r2_1, r3_1);
    TimeStamp__set_minute(global_00aaf6a4_address, 0u);
    TimeStamp__set_second(global_00aaf6a4_address, 0u);
    frame.release();
    TimeStamp__set_millisecond(global_00aaf6a4_address, 0u);
    return;
}

}  // namespace d_001bb304
GUEST_EXPORT(0x001bb304, d_001bb304::f_001bb304);

// f_001bb354: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001bb354 {

struct __attribute__((packed)) Local_001bb354_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001bb354_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_001bb354_ea_1, word_4, 0x4);

inline guest::global<u32, 0x00953fa4> global_00953fa4;
inline guest::global<u32, 0x00953fa8> global_00953fa8;
inline constexpr guest::Function<0x001bbc30, u32(u32)> call_001bbc30;
inline constexpr guest::Function<0x001e4214, u32(u32, u32, u32, u32)> call_001e4214;
inline constexpr guest::Function<0x001e442c, u32(u32, u32, u32, u32)> call_001e442c;
inline constexpr guest::Function<0x002fb918, u32(u32, u32, u32, u32)> data_block_71900;
inline constexpr guest::Function<0x002ff3fc, u32(u32, u32, u32, u32)> call_002ff3fc;
inline constexpr guest::Function<0x00710614, u32(u32, u32, u32, u32)> letter_at;

u32 f_001bb354(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = data_block_71900(r0, r1, r2, r3);
    gptr<Local_001bb354_ea_1> ea_1 = gptr<Local_001bb354_ea_1>(r0_1 + 0x16cf8u);  // (from the original)
    u32 r3_1 = ea_1->word_4;
    *global_00953fa4 = ea_1->word_0;
    *global_00953fa8 = r3_1;
    u32 r0_3 = call_001e4214(r0_1 + 0xa4f8u, r0, r1, r2);  // (from the original)
    if (r0_3 != 0) {
        u32 r0_4 = data_block_71900(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r6 = r0_4 + 0xa4f8u;  // (from the original)
        u32 r0_5 = call_001e442c(r6, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        u32 r5 = r0_5;
        u32 r4 = 0u;
        if (s32(r0_5) > 0) {
            do {
                u32 letter = letter_at(r6, r4, r2, r3);
                u32 r0_7 = call_001bbc30(letter);
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_7 != 0) {
                    call_002ff3fc(r6, r4, r2, r3);
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                }
                r4 += 1u;
                guest::preempt();
            } while (s32(r4) < s32(r5));
        }
        frame.release();
        return call_001e442c(r6, guest::cpu()->r[1], r2, r3);
    }
    return r0_3;
}

}  // namespace d_001bb354
GUEST_EXPORT(0x001bb354, d_001bb354::f_001bb354);

// f_001bbbe8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001bbbe8 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x0070eed0, u32(u32, u32)> call_0070eed0;
inline constexpr guest::Function<0x00770934, u32(u32)> call_00770934;

u32 f_001bbbe8(u32 r0, u32 r1) {
    u32 save_data_2 = get_save_data(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_3 = call_0070eed0(save_data_2 + 0x71900u, r0);  // (from the original)
    u32 r0_4 = call_00770934(r0_3);
    return !(r0_4 + 1u == 0);
}

}  // namespace d_001bbbe8
GUEST_EXPORT_FRAMED(0x001bbbe8, d_001bbbe8::f_001bbbe8, 0x4010);  // pushes {r4, lr} first, as the original

// f_001bbc30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001bbc30 {

inline constexpr guest::Function<0x0010cadd, u32(u32, u32)> call_0010cadc;
inline constexpr guest::Function<0x001127ac, u32(u32, u32)> call_001127ac;
inline constexpr guest::Function<0x00118c9d, u32(u32, u32)> index_of_villager_in_town;
inline constexpr guest::Function<0x001df274, u32(u32, u32)> call_001df274;
inline constexpr guest::Function<0x002fae84, u32(u32)> get_data_base;
inline constexpr guest::Function<0x002fb310, u32(u32)> slot_records_of;
inline constexpr guest::Function<0x002fb328, u32(u32, u32)> get_save_data;
inline constexpr guest::Function<0x002fb918, u32(u32)> data_block_71900;
inline constexpr guest::Function<0x00309fbc, u32(u32, u32)> player_index_in;
inline constexpr guest::Function<0x006f5138, u32(u32, u32, u32, u32)> call_006f5138;
inline constexpr guest::Function<0x0071a0b0, u32(u32, u32)> find_player_matching_entry;
inline constexpr guest::Function<0x00758070, u32(u32)> call_00758070;
inline constexpr guest::Function<0x007580d0, u32(u32, u32)> call_007580d0;
inline constexpr guest::Function<0x00758128, u32(u32, u32, u32, u32)> call_00758128;
inline constexpr guest::Function<0x00770934, u32(u32)> call_00770934;

u32 f_001bbc30(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r8 = 0;
    u32 r0_17 = 0;
    u32 r0_19 = 0;
    u32 r5_1 = 0;
    u32 r0_1 = call_00758128(r0, r1, r2, r3);
    if (r0_1 == 0) {
        u32 r0_2 = call_007580d0(r0, guest::cpu()->r[1]);
        if (r0_2 != 0) {
            u32 save_data_5 = get_save_data(r0_2, guest::cpu()->r[1]);
            u32 r0_5 = find_player_matching_entry(save_data_5 + 0xa0u, r0_2);  // (from the original)
            if (r0_5 == 0) {
                return 1u;
            } else {
                r8 = 0u;
            }
            u32 r0_6 = call_00758128(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            if (r0_6 != 0) {
                return r8;
            }
        } else {
            u32 r0_7 = call_00758070(r0);
            if (r0_7 == 0) {
                return 1u;
            }
            u32 save_data_6 = get_save_data(r0_7, guest::cpu()->r[1]);
            u32 r0_10 = index_of_villager_in_town(save_data_6 + 0x292a4u, r0_7);  // (from the original)
            if (r0_10 + 1u == 0) {
                return 1u;
            }
            u32 r0_11 = call_00758070(r0);
            if (r0_11 != 0) {
                u32 data_base_2 = get_data_base(r0_11);
                u32 records_2 = slot_records_of(data_base_2);
                u32 r0_15 = call_0010cadc(records_2 + 4u, r0_11);
                if (r0_15 != 0) {
                    call_001127ac(r0_15, r0);
                }
            }
            return 1u;
        }
        u32 r0_16 = call_007580d0(r0, r1);
        if (r0_16 == 0) {
            goto L_1bbdb0;
        }
        r0_17 = get_save_data(r0_16, guest::cpu()->r[1]);
        r0_19 = find_player_matching_entry(r0_17 + 0xa0u, r0_16);  // (from the original)
        r1 = guest::cpu()->r[1];
        if (r0_19 != 0) {
            u32 r0_20 = call_007580d0(r0, r1);
            if (r0_20 == 0) {
                r5_1 = r8;
            } else {
                u32 save_data_7 = get_save_data(r0_20, guest::cpu()->r[1]);
                u32 r0_22 = find_player_matching_entry(save_data_7 + 0xa0u, r0_20);  // (from the original)
                r0_20 = player_index_in(save_data_7 + 0xa0u, r0_22);  // (from the original)
                r5_1 = r0_20;
            }
            u32 r0_23 = data_block_71900(r0_20);
            u32 r0_24 = call_001df274(r0_23, r5_1);
            u32 r0_25 = call_00770934(r0_24);
            r1 = r0_25;
            if (s32(r0_25) >= 0) {
                call_006f5138(r0_24, r1, r0, 0u);
                r1 = guest::cpu()->r[1];
                r8 = 1u;
            }
        }
        guest::cpu()->r[1] = r1;
        return r8;
L_1bbdb0:;
        u32 r0_26 = call_00758070(r0);
        r1 = guest::cpu()->r[1];
        if (r0_26 == 0) {
            return r8;
        }
        u32 save_data_8 = get_save_data(r0_26, r1);
        index_of_villager_in_town(save_data_8 + 0x292a4u, r0_26);  // (from the original)
        r1 = guest::cpu()->r[1];
        return r8;
    }
    return 1u;
}

}  // namespace d_001bbc30
GUEST_EXPORT_FRAMED(0x001bbc30, d_001bbc30::f_001bbc30, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_001bfa48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001bfa48 {

inline guest::global<u32, 0x0094ddbc> global_0094ddbc;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> read_global_byte_2;
inline constexpr guest::Function<0x00303acc, u32(u32)> item_is_kind_11_with_class_4_or_5;
inline constexpr guest::Function<0x00535ab0, u32(u32, u32, u32)> call_00535ab0;
inline constexpr guest::Function<0x0068efc8, u32(u32, u32)> call_0068efc8;
inline constexpr guest::Function<0x006a6dbc, u32(u32, u32, u32)> cell_corner_with_height;

struct __attribute__((packed)) Frame_001bfa48 {
    u8 unknown_0[0x4];  // (not read or written by name)
    float float_4;
    u8 unknown_8[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_001bfa48, float_4, 0x4);
GUEST_SIZE(Frame_001bfa48, 0x10);

u32 f_001bfa48(gptr<AcNpcSpShop__ShopNpcTalkRecept> shop_npc_talk_recept, u32 r1, u32 r2, float S0, float S1) {
    guest::StackFrameOf<Frame_001bfa48> frame;  // the original's stack frame
    u32 r0_1 = read_global_byte_2(shop_npc_talk_recept.addr(), r1, r2, guest::cpu()->r[3]);
    u32 zf_1 = r0_1 == 0x30u;  // (from the original)
    u32 r1_1 = shop_npc_talk_recept->word_28c;
    u32 r2_1 = shop_npc_talk_recept->word_290;
    if (!zf_1) {
        zf_1 = r0_1 == 0x31u;  // (from the original)
    }
    u32 r0_2 = frame.at(0).addr();
    if (zf_1) {
        cell_corner_with_height(r0_2, r1_1, r2_1);
    } else {
        call_00535ab0(r0_2, r1_1, r2_1);
    }
    u32 r0_4 = item_is_kind_11_with_class_4_or_5(shop_npc_talk_recept.addr() + 0x276u);  // (from the original)
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
    u32 r0_7 = call_0068efc8(frame.at(0).addr(), r0_5 == 0 ? 0u : r0_5 + 0x14u);  // (from the original)
    return r0_7;
}

}  // namespace d_001bfa48
GUEST_EXPORT_FRAMED(0x001bfa48, d_001bfa48::f_001bfa48, 0x4010);  // pushes {r4, lr} first, as the original
