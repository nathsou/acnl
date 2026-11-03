// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_00120364: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00120364 {

inline constexpr u32 vtable_sead__DrawLockContext = 0x00904840u;
inline constexpr guest::Function<0x0012bfec, u32(u32, u32, u32, u32)> sead__CriticalSection__CriticalSection_0012bfec;

u32 sead__DrawLockContext__DrawLockContext(gptr<sead__DrawLockContext> draw_lock_context) {
    u32 r1 = 0;
    draw_lock_context->vtable = vtable_sead__DrawLockContext;
    draw_lock_context->word_4 = 0;
    u32 critical_section = draw_lock_context.addr() + 8;
    sead__CriticalSection__CriticalSection_0012bfec(critical_section, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    draw_lock_context->word_24 = 0;
    draw_lock_context->word_28 = 0;
    return critical_section - 8u;
}

}  // namespace d_00120364
GUEST_EXPORT_FRAMED(0x00120364, d_00120364::sead__DrawLockContext__DrawLockContext, 0x4010);  // pushes {r4, lr} first, as the original

// f_0012038c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012038c {

inline constexpr u32 vtable_sead__GraphicsContext = 0x009049c8u;
inline constexpr guest::Function<0x00123678, u32(u32)> RenderStateBlock__init;

u32 sead__GraphicsContext__GraphicsContext_0012038c(gptr<sead__GraphicsContext> graphics_context) {
    graphics_context->vtable = vtable_sead__GraphicsContext;
    graphics_context->byte_4 = 1;
    graphics_context->byte_5 = 1;
    graphics_context->word_c = 1;
    graphics_context->word_8 = 5;
    graphics_context->byte_10 = 1;
    graphics_context->word_14 = 6;
    graphics_context->word_1c = 7;
    graphics_context->word_18 = 6;
    graphics_context->word_20 = 7;
    graphics_context->word_24 = 0;
    float S0_1 = 1.0f;
    graphics_context->word_28 = 0;
    graphics_context->float_2c = S0_1;
    graphics_context->float_30 = S0_1;
    graphics_context->float_34 = S0_1;
    graphics_context->float_38 = S0_1;
    float S0_2 = 0.0f;
    graphics_context->byte_3c = 0;
    graphics_context->word_40 = 6;
    graphics_context->float_44 = S0_2;
    graphics_context->byte_48 = 1;
    graphics_context->byte_49 = 1;
    graphics_context->byte_4a = 1;
    graphics_context->byte_4b = 1;
    graphics_context->byte_4c = 0;
    u32 r8_1 = ~0u;
    graphics_context->word_50 = 0;
    graphics_context->word_54 = 0;
    graphics_context->word_58 = r8_1;
    graphics_context->word_5c = 0;
    graphics_context->word_60 = 0;
    u32 ea_1 = graphics_context.addr() + 0x64u;  // (from the original)
    graphics_context->word_64 = 0;
    guest::cpu()->s[0] = S0_2;
    RenderStateBlock__init(ea_1 + 4u);
    graphics_context->byte_be = 5;
    graphics_context->byte_68 = 1;
    graphics_context->byte_9a = 6;
    graphics_context->byte_b8 = 0xf;  // (from the original)
    graphics_context->byte_a4 = 0;
    graphics_context->word_ac = r8_1;
    guest::cpu()->r[1] = 0xfu;  // (from the original)
    return ea_1 - 0x64u;  // (from the original)
}

}  // namespace d_0012038c
GUEST_EXPORT_FRAMED(0x0012038c, d_0012038c::sead__GraphicsContext__GraphicsContext_0012038c, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0012051c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012051c {

inline constexpr u32 vtable_sead__Graphics = 0x00905c10u;
inline constexpr guest::Function<0x00132174, u32(u32, u32, u32, u32)> sead__IDisposer__IDisposer_00132174;

u32 sead__Graphics__Graphics(gptr<sead__Graphics> graphics, u32 r1_unused, u32 r2) {
    u32 r1 = 0;
    sead__IDisposer__IDisposer_00132174(graphics.addr(), r1, r2, guest::cpu()->r[3]);
    graphics->word_10 = 0;
    graphics->vtable = vtable_sead__Graphics;
    graphics->word_14 = 0;
    return graphics.addr();
}

}  // namespace d_0012051c
GUEST_EXPORT_FRAMED(0x0012051c, d_0012051c::sead__Graphics__Graphics, 0x4010);  // pushes {r4, lr} first, as the original

// f_0012089c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Creates the script heap's children: libms, static, message, mail and flow.
namespace d_0012089c {

inline constexpr u32 vtable_sead__SafeStringBase_char_ = 0x009047f8u;
inline guest::global<u32, 0x0095ded4> script_libms_heap;
inline guest::global<u32, 0x0095ded8> script_static_heap;
inline guest::global<u32, 0x0095dedc> script_message_heap;
inline guest::global<u32, 0x0095dee0> script_mail_heap;
inline guest::global<u32, 0x0095dee4> script_flow_heap;
inline constexpr guest::Function<0x002f6e78, u32(u32, u32, u32, u32)> create_heap;

struct __attribute__((packed)) Frame_0012089c {
    u32 word_0;
    u8 unknown_4[0x4];  // (not read or written by name)
    u32 object_8_vtable;
    u32 word_c;
};
GUEST_OFFSET(Frame_0012089c, word_0, 0x0);
GUEST_OFFSET(Frame_0012089c, object_8_vtable, 0x8);
GUEST_OFFSET(Frame_0012089c, word_c, 0xc);
GUEST_SIZE(Frame_0012089c, 0x10);

void create_script_sub_heaps(u32 heap) {
    guest::StackFrameOf<Frame_0012089c> frame;  // the original's stack frame
    frame->word_c = 0x120988;  // (from the original)
    frame->word_0 = 1;
    frame->object_8_vtable = vtable_sead__SafeStringBase_char_;
    u32 r0_1 = create_heap(0x400u, frame.at(8).addr(), heap, 1u);  // (from the original)
    *script_libms_heap = r0_1;
    frame->word_c = 0x1209a0;  // (from the original)
    frame->object_8_vtable = vtable_sead__SafeStringBase_char_;
    frame->word_0 = 0;
    u32 r0_2 = create_heap(0x107c00u, frame.at(8).addr(), heap, 1u);  // (from the original)
    *script_static_heap = r0_2;
    frame->word_c = 0x1209b8;  // (from the original)
    frame->object_8_vtable = vtable_sead__SafeStringBase_char_;
    frame->word_0 = 0;
    u32 r0_3 = create_heap(0x6b800u, frame.at(8).addr(), heap, 1u);  // (from the original)
    *script_message_heap = r0_3;
    frame->word_c = 0x1209cc;  // (from the original)
    frame->object_8_vtable = vtable_sead__SafeStringBase_char_;
    frame->word_0 = 1;
    u32 r0_4 = create_heap(0x25800u, frame.at(8).addr(), heap, 1u);  // (from the original)
    *script_mail_heap = r0_4;
    frame->word_c = 0x1209dc;  // (from the original)
    frame->object_8_vtable = vtable_sead__SafeStringBase_char_;
    frame->word_0 = 0;
    u32 r0_5 = create_heap(0xa000u, frame.at(8).addr(), heap, 1u);  // (from the original)
    *script_flow_heap = r0_5;
}

}  // namespace d_0012089c
GUEST_EXPORT_FRAMED(0x0012089c, d_0012089c::create_script_sub_heaps, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_001209f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Loads the font resources of the table.
namespace d_001209f8 {

struct __attribute__((packed)) Object_001209f8_0 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
};
GUEST_OFFSET(Object_001209f8_0, word_10, 0x10);
GUEST_OFFSET(Object_001209f8_0, word_14, 0x14);
GUEST_OFFSET(Object_001209f8_0, word_18, 0x18);
GUEST_OFFSET(Object_001209f8_0, word_1c, 0x1c);
GUEST_OFFSET(Object_001209f8_0, word_20, 0x20);
GUEST_OFFSET(Object_001209f8_0, word_24, 0x24);

struct __attribute__((packed)) Local_001209f8_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001209f8_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_001209f8_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_001209f8_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001209f8_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_001209f8_ea_3, word_4, 0x4);

struct __attribute__((packed)) Local_001209f8_r0_3 {
    u8 unknown_0[0xe20];  // (not used here)
    u32 word_e20;
    u8 byte_e24;
    u8 byte_e25;
};
GUEST_OFFSET(Local_001209f8_r0_3, word_e20, 0xe20);
GUEST_OFFSET(Local_001209f8_r0_3, byte_e24, 0xe24);
GUEST_OFFSET(Local_001209f8_r0_3, byte_e25, 0xe25);

struct __attribute__((packed)) Local_001209f8_r5_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001209f8_r5_1, word_0, 0x0);
GUEST_OFFSET(Local_001209f8_r5_1, word_4, 0x4);

inline constexpr guest::Function<0x0012ca50, u32(u32, u32)> construct_font_source;

u32 load_font_resource_table(gptr<Object_001209f8_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r3 = 0;
    u32 r12 = 0;
    u32 r14 = 0;
    u32 res_2 = 0;
    u32 res_4 = 0;
    u32 r2 = r0 + 0x10u;  // (from the original)
    u32 r4 = 0u;
    arg0->word_14 = r2;
    arg0->word_18 = r4;
    u32 r5 = 0xau;  // (from the original)
    arg0->word_10 = r2;
    arg0->word_1c = r4;
    arg0->word_20 = r4;
    u32 res_1 = r2 + 0x18u;  // (from the original)
    r0 = res_1;
    arg0->word_24 = r4;
    if (res_1 != 0) {
        r3 = 0x4bu;  // (from the original)
        r1 = 0u;
        r12 = 9u;
        arg0->word_1c = r0;
        do {
            res_2 = r12 - 1u;
            r12 = res_2;
            *gptr<u32>(r0 + (r1 << 2)) = r0 + (r3 + r1 << 2);
            r14 = r0;
            r1 += r3;
            guest::preempt();
        } while (res_2 != 0);
        *gptr<u32>(r0 + (r3 * (r5 - 1u) << 2)) = r4;
        gptr<Local_001209f8_ea_2> ea_2 = gptr<Local_001209f8_ea_2>(r2 + 0x10u);  // (from the original)
        ea_2->word_0 = r14;
        ea_2->word_4 = r5;
    }
    r1 = r2 + 0xbd0u;  // (from the original)
    gptr<Local_001209f8_ea_3> ea_3 = gptr<Local_001209f8_ea_3>(r2 + 0xbd4u);  // (from the original)
    ea_3->word_0 = r1;
    ea_3->word_4 = r4;
    *gptr<u32>(r2 + 0xbd0u) = r1;  // (from the original)
    *gptr<u32>(r2 + 0xbdcu) = r4;  // (from the original)
    *gptr<u32>(r2 + 0xbe0u) = r4;  // (from the original)
    u32 res_3 = r2 + 0xbe8u;  // (from the original)
    r0 = res_3;
    u32 r6 = 0xau;  // (from the original)
    *gptr<u32>(r2 + 0xbe4u) = r4;  // (from the original)
    if (res_3 != 0) {
        r3 = 0xdu;  // (from the original)
        r2 = 0u;
        r12 = 9u;
        *gptr<u32>(r1 + 0xcu) = r0;  // (from the original)
        do {
            res_4 = r12 - 1u;
            r12 = res_4;
            *gptr<u32>(r0 + (r2 << 2)) = r0 + (r3 + r2 << 2);
            r14 = r0;
            r2 += r3;
            guest::preempt();
        } while (res_4 != 0);
        gptr<Local_001209f8_r5_1> r5_1 = gptr<Local_001209f8_r5_1>(r1 + 0x10u);  // (from the original)
        *gptr<u32>(r0 + (r3 * (r6 - 1u) << 2)) = r4;
        r5_1->word_0 = r14;
        r5_1->word_4 = r6;
    }
    u32 r0_1 = r1 + 0x220u;  // (from the original)
    construct_font_source(r0_1, r1);
    u32 r0_2 = r0_1 + 0x10u;  // (from the original)
    construct_font_source(r0_2, guest::cpu()->r[1]);
    gptr<Local_001209f8_r0_3> r0_3 = gptr<Local_001209f8_r0_3>(r0_2 - 0xe10u);  // (from the original)
    r0_3->word_e20 = r4;
    r0_3->byte_e24 = u8(r4);
    r0_3->byte_e25 = u8(r4);
    return r0_3.addr();
}

}  // namespace d_001209f8
GUEST_EXPORT_FRAMED(0x001209f8, d_001209f8::load_font_resource_table, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001210d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Writes the GPU commands of the part at +0x68 into the command buffer.
namespace d_001210d4 {

inline constexpr guest::Function<0x001262dc, u32(u32, u32, u32)> write_part_100;
inline constexpr guest::Function<0x001277dc, u32(u32, u32, u32, u32)> begin_command_write;
inline constexpr guest::Function<0x001279b4, u32(u32)> advance_command_cursor;

struct __attribute__((packed)) Frame_001210d4 {
    u32 word_0;
};
GUEST_OFFSET(Frame_001210d4, word_0, 0x0);
GUEST_SIZE(Frame_001210d4, 0x4);

void write_gpu_part_commands(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_001210d4> frame;  // the original's stack frame
    frame->word_0 = r3;
    begin_command_write(0x208u, frame.at(0).addr(), r2, r3);  // (from the original)
    u32 r1_2 = frame->word_0;
    u32 r0_2 = write_part_100(r0 + 0x68u, r1_2, 1u);  // (from the original)
    frame->word_0 = r0_2;
    advance_command_cursor(r0_2 - r1_2 & ~3u);
}

}  // namespace d_001210d4
GUEST_EXPORT_FRAMED(0x001210d4, d_001210d4::write_gpu_part_commands, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00121110: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the mode at 0xadf9e4 from the request: 0x400 and 0x401 give 0 and 1, 0x410 gives 2.
namespace d_00121110 {

inline constexpr u32 segment_hooks_address = 0x00adf8c0u;
inline guest::global<u32, 0x00adf9e4> display_mode;

u32 set_mode_adf9e4(u32 r0, u32 r1_unused, u32 r2) {
    u32 zf_1 = r0 == 0x400u;  // (from the original)
    if (!zf_1) {
        u32 res_2 = r0 - 0x401u;  // (from the original)
        zf_1 = res_2 == 0;
        r2 = res_2;
    }
    if (zf_1) {
        u32 r0_1 = r0 - 0x400u;  // (from the original)
        *display_mode = r0_1;
        guest::cpu()->r[1] = segment_hooks_address;
        return r0_1;
    }
    if (r2 == 0xfu) {  // (from the original)
    } else {
        guest::cpu()->r[1] = segment_hooks_address;
        return r0;
    }
    *display_mode = 2;
    guest::cpu()->r[1] = segment_hooks_address;
    return 2u;
}

}  // namespace d_00121110
GUEST_EXPORT(0x00121110, d_00121110::set_mode_adf9e4);

// f_00122554: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the display mode (0x700 to 0x702) and its width: 400, or 800 for the stereoscopic mode 0x701.
namespace d_00122554 {

inline constexpr u32 segment_hooks_address = 0x00adf8c0u;
inline guest::global<u32, 0x00adf8c8> display_width;
inline guest::global<u32, 0x00adfa24> display_width_mode;

void set_display_width_mode(u32 r0) {
    if (*display_width_mode == r0) {
        guest::cpu()->r[1] = segment_hooks_address;
        return;
    }
    if (r0 == 0x700u) {  // (from the original)
        *display_width = 0x190;  // (from the original)
        *display_width_mode = r0;
        guest::cpu()->r[1] = segment_hooks_address;
        return;
    }
    u32 r3_1 = r0 - 0x701u;  // (from the original)
    if (r3_1 == 0) {
        *display_width = 0x320;  // (from the original)
        *display_width_mode = r0;
        guest::cpu()->r[1] = segment_hooks_address;
        return;
    }
    if (r3_1 != 1u) {
        guest::cpu()->r[1] = segment_hooks_address;
        return;
    }
    *display_width = 0x190;  // (from the original)
    *display_width_mode = r0;
    guest::cpu()->r[1] = segment_hooks_address;
}

}  // namespace d_00122554
GUEST_EXPORT(0x00122554, d_00122554::set_display_width_mode);

// f_00122620: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Appends an item when the array is not full.
namespace d_00122620 {

struct __attribute__((packed)) PointerArray {
    u32 count;
    u32 capacity;
    u32 items;
};
GUEST_OFFSET(PointerArray, count, 0x0);
GUEST_OFFSET(PointerArray, capacity, 0x4);
GUEST_OFFSET(PointerArray, items, 0x8);


void pointer_array_push(gptr<PointerArray> array, u32 item) {
    u32 count = array->count;
    if (s32(count) >= s32(array->capacity)) {
        return;
    }
    *gptr<u32>(array->items + (count << 2)) = item;
    u32 new_count = array->count + 1u;
    array->count = new_count;
    guest::cpu()->r[1] = new_count;
}

}  // namespace d_00122620
GUEST_EXPORT(0x00122620, d_00122620::pointer_array_push);

// f_00122ca8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The word at +0x94 of the object held at +0x1c of 0x953384; 0 when missing.
namespace d_00122ca8 {

inline constexpr u32 object_953384_address = 0x00953384u;
inline guest::global<u32, 0x00953384> object_953384;

u32 word_94_of_953384() {
    u32 r0_1 = *object_953384;
    if (r0_1 == 0) {
        return 0u;
    }
    u32 r0_2 = *gptr<u32>(r0_1 + 0x1cu);  // (from the original)
    if (r0_2 == 0) {
        return 0u;
    }
    return *gptr<u32>(r0_2 + 0x94u);  // (from the original)
}

}  // namespace d_00122ca8
GUEST_EXPORT(0x00122ca8, d_00122ca8::word_94_of_953384);

// f_00122d60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00122d60 {

inline constexpr u32 vtable_SoundKKInfo__SingletonDisposer_ = 0x008f9d64u;
inline guest::global<u32, 0x0094d004> sound_kk_info_instance;
inline guest::global<u32, 0x0094d008> global_0094d008;
inline constexpr guest::Function<0x00131280, u32(u32, u32, u32, u32)> allocate_on_heap_entry;
inline constexpr guest::Function<0x001320cc, u32(u32, u32, u32)> sead__IDisposer__IDisposer_001320cc;

void SoundKKInfo__SingletonDisposer___SingletonDisposer_(u32 singleton_disposer, u32 r1) {
    if (*sound_kk_info_instance == 0) {
        u32 block_2 = allocate_on_heap_entry(0x10u, singleton_disposer, 4u, guest::cpu()->r[3]);  // (from the original)
        r1 = guest::cpu()->r[1];
        u32 r4_1 = block_2;
        if (block_2 != 0) {
            block_2 = sead__IDisposer__IDisposer_001320cc(block_2, singleton_disposer, 3u);
            r1 = vtable_SoundKKInfo__SingletonDisposer_;
            *gptr<u32>(block_2) = r1;
        }
        *global_0094d008 = block_2;
        *sound_kk_info_instance = r4_1;
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_00122d60
GUEST_EXPORT_FRAMED(0x00122d60, d_00122d60::SoundKKInfo__SingletonDisposer___SingletonDisposer_, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00122dbc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00122dbc {

struct __attribute__((packed)) Microphone {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
    u8 byte_14;
    u8 byte_15;
    u8 unknown_16[0x2];  // (not used here)
    u32 word_18;
    u32 word_1c;
    u8 unknown_20[0x8];  // (not used here)
    u32 word_28;
    u8 unknown_2c[0x4];  // (not used here)
    u32 word_30;
};
GUEST_OFFSET(Microphone, word_10, 0x10);
GUEST_OFFSET(Microphone, byte_14, 0x14);
GUEST_OFFSET(Microphone, byte_15, 0x15);
GUEST_OFFSET(Microphone, word_18, 0x18);
GUEST_OFFSET(Microphone, word_1c, 0x1c);
GUEST_OFFSET(Microphone, word_28, 0x28);
GUEST_OFFSET(Microphone, word_30, 0x30);

inline constexpr guest::Function<0x001297c4, u32(u32, u32, u32, u32)> mic_initialize;
inline constexpr guest::Function<0x00129870, u32(u32)> get_value_974f34;
inline constexpr guest::Function<0x00129898, u32(u32, u32)> mic_map_shared_memory;
inline constexpr guest::Function<0x0012fa28, u32(u32)> ipc_97d8c4_command_9;
inline constexpr guest::Function<0x00131280, u32(u32, u32, u32)> allocate_on_heap_entry;

struct __attribute__((packed)) Frame_00122dbc {
    u32 word_0;
};
GUEST_OFFSET(Frame_00122dbc, word_0, 0x0);
GUEST_SIZE(Frame_00122dbc, 0x4);

void Microphone__initialize(gptr<Microphone> microphone, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00122dbc> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r0_1 = microphone->byte_14;
    if (r0_1 != 0) {
        return;
    }
    u32 r0_2 = mic_initialize(r0_1, r1, r2, r3);
    if (s32(r0_2) < 0) {
        return;
    }
    u32 r0_3 = mic_map_shared_memory(0x983000u, 0x1000u);  // (from the original)
    if (s32(r0_3) < 0) {
        return;
    }
    microphone->word_1c = 0x983000;  // (from the original)
    u32 r0_5 = get_value_974f34(frame.at(0).addr());
    if (s32(r0_5) < 0) {
        return;
    }
    microphone->word_18 = frame->word_0;
    u32 r0_7 = ipc_97d8c4_command_9(microphone.addr() + 0x24u);  // (from the original)
    if (s32(r0_7) < 0) {
        return;
    }
    u32 r0_8 = microphone->word_18;
    microphone->word_30 = r0_8;
    u32 block_2 = allocate_on_heap_entry(r0_8 & ~1u, r1, 4u);
    microphone->word_28 = block_2;
    microphone->byte_15 = 2;
    microphone->byte_14 = 1;
    microphone->word_10 = r1;
}

}  // namespace d_00122dbc
GUEST_EXPORT_FRAMED(0x00122dbc, d_00122dbc::Microphone__initialize, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00122f14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00122f14 {

inline constexpr u32 vtable_SoundMuInfo__SingletonDisposer_ = 0x008f9d84u;
inline guest::global<u32, 0x0094d0d0> sound_mu_info_instance;
inline guest::global<u32, 0x0094d0d4> global_0094d0d4;
inline constexpr guest::Function<0x00131280, u32(u32, u32, u32, u32)> allocate_on_heap_entry;
inline constexpr guest::Function<0x001320cc, u32(u32, u32, u32)> sead__IDisposer__IDisposer_001320cc;

void SoundMuInfo__SingletonDisposer___SingletonDisposer_(u32 singleton_disposer, u32 r1) {
    if (*sound_mu_info_instance == 0) {
        u32 block_2 = allocate_on_heap_entry(0x10u, singleton_disposer, 4u, guest::cpu()->r[3]);  // (from the original)
        r1 = guest::cpu()->r[1];
        u32 r4_1 = block_2;
        if (block_2 != 0) {
            block_2 = sead__IDisposer__IDisposer_001320cc(block_2, singleton_disposer, 3u);
            r1 = vtable_SoundMuInfo__SingletonDisposer_;
            *gptr<u32>(block_2) = r1;
        }
        *global_0094d0d4 = block_2;
        *sound_mu_info_instance = r4_1;
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_00122f14
GUEST_EXPORT_FRAMED(0x00122f14, d_00122f14::SoundMuInfo__SingletonDisposer___SingletonDisposer_, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00123074: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00123074 {

struct __attribute__((packed)) Local_00123074_r4_1 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u8 byte_1c;
};
GUEST_OFFSET(Local_00123074_r4_1, word_10, 0x10);
GUEST_OFFSET(Local_00123074_r4_1, word_14, 0x14);
GUEST_OFFSET(Local_00123074_r4_1, word_18, 0x18);
GUEST_OFFSET(Local_00123074_r4_1, byte_1c, 0x1c);

inline constexpr u32 vtable_SoundSeqParser__SingletonDisposer_ = 0x008fa3f4u;
inline guest::global<u32, 0x0094d560> sound_seq_parser_instance;
inline guest::global<u32, 0x0094d564> sound_seq_parser_disposer;
inline constexpr guest::Function<0x00131280, u32(u32, u32, u32, u32)> allocate_on_heap_entry;
inline constexpr guest::Function<0x001320cc, u32(u32, u32, u32)> sead__IDisposer__IDisposer_001320cc;

void SoundSeqParser__SingletonDisposer___SingletonDisposer_(u32 singleton_disposer, u32 r1) {
    if (*sound_seq_parser_instance == 0) {
        u32 block_2 = allocate_on_heap_entry(0x20u, singleton_disposer, 4u, guest::cpu()->r[3]);  // (from the original)
        r1 = guest::cpu()->r[1];
        gptr<Local_00123074_r4_1> r4_1 = gptr<Local_00123074_r4_1>(block_2);
        if (block_2 == 0) {
            *sound_seq_parser_disposer = r4_1.addr();
            r4_1 = gptr<Local_00123074_r4_1>(0u);
        } else {
            sead__IDisposer__IDisposer_001320cc(block_2, singleton_disposer, 3u);
            *gptr<u32>(block_2) = vtable_SoundSeqParser__SingletonDisposer_;
            *sound_seq_parser_disposer = block_2;
            r1 = ~0u;
            r4_1->word_14 = 0;
            r4_1->word_10 = r1;
            r4_1->word_18 = 0;
            r4_1->byte_1c = 0;
        }
        *sound_seq_parser_instance = r4_1.addr();
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_00123074
GUEST_EXPORT_FRAMED(0x00123074, d_00123074::SoundSeqParser__SingletonDisposer___SingletonDisposer_, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00123344: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Creates the two audio sound heaps (named from 0x8391f8) when missing.
namespace d_00123344 {

struct __attribute__((packed)) Local_00123344_r5_1 {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
};
GUEST_OFFSET(Local_00123344_r5_1, word_14, 0x14);

inline constexpr guest::Function<0x0012c048, u32(u32, u32, u32)> sead__AudioSoundHeapCtr__AudioSoundHeapCtr;
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> allocate_on_heap;

void create_sound_heaps(u32 r0, u32 r1) {
    u32 r6 = r0;
    u32 r7 = r1;
    u32 r8 = 0x8391f8u;  // (from the original)
    u32 r4 = 0u;
    do {
        gptr<Local_00123344_r5_1> r5_1 = gptr<Local_00123344_r5_1>(r6 + (r4 << 2));
        if (r5_1->word_14 == 0) {
            u32 block = allocate_on_heap(0x30u, r7, 0x20u, guest::cpu()->r[3]);  // (from the original)
            r5_1->word_14 = sead__AudioSoundHeapCtr__AudioSoundHeapCtr(block, gptr<u32>(r8)[r4], r7);
        }
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 2);
}

}  // namespace d_00123344
GUEST_EXPORT_FRAMED(0x00123344, d_00123344::create_sound_heaps, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00123600: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Initializes the screen parameters for a 240 x 400 screen.
namespace d_00123600 {

struct __attribute__((packed)) ScreenParams {
    u32 word_0;
    u8 byte_4;
    u8 byte_5;
    u8 unknown_6[0x2];  // (not used here)
    u32 word_8;
    u32 word_c;
    float float_10;
    float float_14;
    float float_18;
    float float_1c;
    u32 word_20;
    u32 word_24;
    u8 byte_28;
    u8 unknown_29[0x3];  // (not used here)
    u32 word_2c;
    u32 word_30;
    float float_34;
    u8 byte_38;
    u8 unknown_39[0x3];  // (not used here)
    u32 word_3c;
    u32 word_40;
    u32 word_44;
};
GUEST_OFFSET(ScreenParams, word_0, 0x0);
GUEST_OFFSET(ScreenParams, byte_4, 0x4);
GUEST_OFFSET(ScreenParams, byte_5, 0x5);
GUEST_OFFSET(ScreenParams, word_8, 0x8);
GUEST_OFFSET(ScreenParams, word_c, 0xc);
GUEST_OFFSET(ScreenParams, float_10, 0x10);
GUEST_OFFSET(ScreenParams, float_14, 0x14);
GUEST_OFFSET(ScreenParams, float_18, 0x18);
GUEST_OFFSET(ScreenParams, float_1c, 0x1c);
GUEST_OFFSET(ScreenParams, word_20, 0x20);
GUEST_OFFSET(ScreenParams, word_24, 0x24);
GUEST_OFFSET(ScreenParams, byte_28, 0x28);
GUEST_OFFSET(ScreenParams, word_2c, 0x2c);
GUEST_OFFSET(ScreenParams, word_30, 0x30);
GUEST_OFFSET(ScreenParams, float_34, 0x34);
GUEST_OFFSET(ScreenParams, byte_38, 0x38);
GUEST_OFFSET(ScreenParams, word_3c, 0x3c);
GUEST_OFFSET(ScreenParams, word_40, 0x40);
GUEST_OFFSET(ScreenParams, word_44, 0x44);


void ScreenParams__ScreenParams(gptr<ScreenParams> screen_params) {
    screen_params->word_0 = 0;
    screen_params->byte_4 = 0;
    screen_params->byte_5 = 0;
    screen_params->word_8 = 0xf0;  // (from the original)
    float S0_1 = 0.0f;
    screen_params->word_c = 0x190;  // (from the original)
    screen_params->word_20 = screen_params.addr();
    screen_params->float_10 = S0_1;
    screen_params->float_14 = S0_1;
    screen_params->float_18 = S0_1;
    screen_params->float_1c = S0_1;
    screen_params->word_24 = 0;
    screen_params->byte_28 = 3;
    float S0_2 = 1.0f;
    screen_params->word_2c = 0xf0;  // (from the original)
    screen_params->word_30 = 0x190;  // (from the original)
    screen_params->float_34 = S0_2;
    screen_params->byte_38 = 0;
    screen_params->word_3c = screen_params.addr();
    screen_params->word_40 = 0xf0;  // (from the original)
    screen_params->word_44 = 0x190;  // (from the original)
    guest::cpu()->s[0] = S0_2;
}

}  // namespace d_00123600
GUEST_EXPORT_FRAMED(0x00123600, d_00123600::ScreenParams__ScreenParams, 0x30);  // pushes {r4, r5} first, as the original

// f_00123678: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Initializes the render state block to its defaults.
namespace d_00123678 {

struct __attribute__((packed)) RenderStateBlock {
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
    u8 byte_a;
    u8 unknown_b[0x1];  // (not used here)
    u32 word_c;
    u8 byte_10;
    u8 byte_11;
    u8 unknown_12[0x2];  // (not used here)
    u32 word_14;
    u8 byte_18;
    u8 byte_19;
    u8 unknown_1a[0x2];  // (not used here)
    float float_1c;
    float float_20;
    float float_24;
    float float_28;
    u32 word_2c;
    u8 byte_30;
    u8 byte_31;
    u8 byte_32;
    u8 unknown_33[0x1];  // (not used here)
    u32 word_34;
    u8 byte_38;
    u8 byte_39;
    u8 unknown_3a[0x2];  // (not used here)
    u8 byte_3c;
    u8 unknown_3d[0x3];  // (not used here)
    u32 word_40;
    u32 word_44;
    u8 byte_48;
    u8 byte_49;
    u8 byte_4a;
    u8 unknown_4b[0x1];  // (not used here)
    u32 word_4c;
    u8 byte_50;
    u8 unknown_51[0x3];  // (not used here)
    u8 byte_54;
    u8 byte_55;
    u8 byte_56;
    u8 unknown_57[0x1];  // (not used here)
    u32 word_58;
    u8 byte_5c;
    u8 byte_5d;
    u8 byte_5e;
    u8 unknown_5f[0x1];  // (not used here)
    u32 word_60;
    float float_64;
    u8 byte_68;
    u8 unknown_69[0x3];  // (not used here)
    float float_6c;
    float float_70;
    float float_74;
    u8 byte_78;
    u8 unknown_79[0x3];  // (not used here)
    u32 word_7c;
};
GUEST_OFFSET(RenderStateBlock, byte_0, 0x0);
GUEST_OFFSET(RenderStateBlock, byte_1, 0x1);
GUEST_OFFSET(RenderStateBlock, byte_2, 0x2);
GUEST_OFFSET(RenderStateBlock, byte_3, 0x3);
GUEST_OFFSET(RenderStateBlock, byte_4, 0x4);
GUEST_OFFSET(RenderStateBlock, byte_5, 0x5);
GUEST_OFFSET(RenderStateBlock, byte_6, 0x6);
GUEST_OFFSET(RenderStateBlock, byte_7, 0x7);
GUEST_OFFSET(RenderStateBlock, byte_8, 0x8);
GUEST_OFFSET(RenderStateBlock, byte_9, 0x9);
GUEST_OFFSET(RenderStateBlock, byte_a, 0xa);
GUEST_OFFSET(RenderStateBlock, word_c, 0xc);
GUEST_OFFSET(RenderStateBlock, byte_10, 0x10);
GUEST_OFFSET(RenderStateBlock, byte_11, 0x11);
GUEST_OFFSET(RenderStateBlock, word_14, 0x14);
GUEST_OFFSET(RenderStateBlock, byte_18, 0x18);
GUEST_OFFSET(RenderStateBlock, byte_19, 0x19);
GUEST_OFFSET(RenderStateBlock, float_1c, 0x1c);
GUEST_OFFSET(RenderStateBlock, float_20, 0x20);
GUEST_OFFSET(RenderStateBlock, float_24, 0x24);
GUEST_OFFSET(RenderStateBlock, float_28, 0x28);
GUEST_OFFSET(RenderStateBlock, word_2c, 0x2c);
GUEST_OFFSET(RenderStateBlock, byte_30, 0x30);
GUEST_OFFSET(RenderStateBlock, byte_31, 0x31);
GUEST_OFFSET(RenderStateBlock, byte_32, 0x32);
GUEST_OFFSET(RenderStateBlock, word_34, 0x34);
GUEST_OFFSET(RenderStateBlock, byte_38, 0x38);
GUEST_OFFSET(RenderStateBlock, byte_39, 0x39);
GUEST_OFFSET(RenderStateBlock, byte_3c, 0x3c);
GUEST_OFFSET(RenderStateBlock, word_40, 0x40);
GUEST_OFFSET(RenderStateBlock, word_44, 0x44);
GUEST_OFFSET(RenderStateBlock, byte_48, 0x48);
GUEST_OFFSET(RenderStateBlock, byte_49, 0x49);
GUEST_OFFSET(RenderStateBlock, byte_4a, 0x4a);
GUEST_OFFSET(RenderStateBlock, word_4c, 0x4c);
GUEST_OFFSET(RenderStateBlock, byte_50, 0x50);
GUEST_OFFSET(RenderStateBlock, byte_54, 0x54);
GUEST_OFFSET(RenderStateBlock, byte_55, 0x55);
GUEST_OFFSET(RenderStateBlock, byte_56, 0x56);
GUEST_OFFSET(RenderStateBlock, word_58, 0x58);
GUEST_OFFSET(RenderStateBlock, byte_5c, 0x5c);
GUEST_OFFSET(RenderStateBlock, byte_5d, 0x5d);
GUEST_OFFSET(RenderStateBlock, byte_5e, 0x5e);
GUEST_OFFSET(RenderStateBlock, word_60, 0x60);
GUEST_OFFSET(RenderStateBlock, float_64, 0x64);
GUEST_OFFSET(RenderStateBlock, byte_68, 0x68);
GUEST_OFFSET(RenderStateBlock, float_6c, 0x6c);
GUEST_OFFSET(RenderStateBlock, float_70, 0x70);
GUEST_OFFSET(RenderStateBlock, float_74, 0x74);
GUEST_OFFSET(RenderStateBlock, byte_78, 0x78);
GUEST_OFFSET(RenderStateBlock, word_7c, 0x7c);


void RenderStateBlock__init(gptr<RenderStateBlock> render_state_block) {
    render_state_block->byte_0 = 0;
    render_state_block->byte_1 = 0;
    render_state_block->byte_2 = 0;
    render_state_block->byte_3 = 6;
    render_state_block->byte_4 = 6;
    render_state_block->byte_5 = 7;
    render_state_block->byte_6 = 7;
    render_state_block->byte_7 = 0xff;  // (from the original)
    render_state_block->byte_8 = 0xff;  // (from the original)
    render_state_block->byte_9 = 0xff;  // (from the original)
    render_state_block->byte_a = 0xff;  // (from the original)
    render_state_block->word_c = render_state_block.addr();
    render_state_block->byte_10 = 0;
    render_state_block->byte_11 = 6;
    render_state_block->word_14 = render_state_block.addr();
    render_state_block->byte_18 = 0;
    float S0_1 = 0.0f;
    float S1_1 = 1.0f;
    render_state_block->byte_19 = 1;
    render_state_block->float_1c = S0_1;
    render_state_block->float_20 = S1_1;
    render_state_block->float_24 = S0_1;
    render_state_block->float_28 = S1_1;
    render_state_block->word_2c = render_state_block.addr();
    render_state_block->byte_30 = 0;
    render_state_block->byte_31 = 0;
    render_state_block->byte_32 = 0;
    render_state_block->word_34 = render_state_block.addr();
    render_state_block->byte_38 = 0;
    render_state_block->byte_39 = 0xff;  // (from the original)
    render_state_block->byte_3c = 1;
    render_state_block->word_40 = 0;
    render_state_block->word_44 = 0xff;  // (from the original)
    render_state_block->byte_48 = 0;
    render_state_block->byte_49 = 0;
    render_state_block->byte_4a = 0;
    render_state_block->word_4c = render_state_block.addr();
    render_state_block->byte_50 = 0xf;  // (from the original)
    render_state_block->byte_54 = 1;
    render_state_block->byte_55 = 1;
    render_state_block->byte_56 = 4;
    render_state_block->word_58 = render_state_block.addr();
    render_state_block->byte_5c = 1;
    render_state_block->byte_5d = 1;
    render_state_block->byte_5e = 1;
    render_state_block->word_60 = render_state_block.addr();
    render_state_block->float_64 = S0_1;
    render_state_block->byte_68 = 0;
    render_state_block->float_6c = S0_1;
    render_state_block->float_70 = S0_1;
    render_state_block->float_74 = S1_1;
    render_state_block->byte_78 = 0x18;  // (from the original)
    render_state_block->word_7c = render_state_block.addr();
    guest::cpu()->r[1] = render_state_block.addr();
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_00123678
GUEST_EXPORT_FRAMED(0x00123678, d_00123678::RenderStateBlock__init, 0x30);  // pushes {r4, r5} first, as the original

// f_00123788: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00123788 {

struct __attribute__((packed)) Local_00123788_r0_1 {
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
};
GUEST_OFFSET(Local_00123788_r0_1, word_0, 0x0);
GUEST_OFFSET(Local_00123788_r0_1, word_4, 0x4);
GUEST_OFFSET(Local_00123788_r0_1, word_8, 0x8);
GUEST_OFFSET(Local_00123788_r0_1, word_c, 0xc);
GUEST_OFFSET(Local_00123788_r0_1, word_10, 0x10);
GUEST_OFFSET(Local_00123788_r0_1, word_14, 0x14);
GUEST_OFFSET(Local_00123788_r0_1, word_18, 0x18);
GUEST_OFFSET(Local_00123788_r0_1, word_1c, 0x1c);
GUEST_OFFSET(Local_00123788_r0_1, word_20, 0x20);
GUEST_OFFSET(Local_00123788_r0_1, word_24, 0x24);
GUEST_OFFSET(Local_00123788_r0_1, word_28, 0x28);
GUEST_OFFSET(Local_00123788_r0_1, word_2c, 0x2c);
GUEST_OFFSET(Local_00123788_r0_1, word_30, 0x30);
GUEST_OFFSET(Local_00123788_r0_1, word_34, 0x34);
GUEST_OFFSET(Local_00123788_r0_1, word_38, 0x38);
GUEST_OFFSET(Local_00123788_r0_1, word_3c, 0x3c);


u32 clear_thread_local_storage() {
    gptr<Local_00123788_r0_1> r0_1 = gptr<Local_00123788_r0_1>(guest::cpu()->tls);
    r0_1->word_0 = 0;
    r0_1->word_4 = 0;
    r0_1->word_8 = 0;
    r0_1->word_c = 0;
    r0_1->word_10 = 0;
    r0_1->word_14 = 0;
    r0_1->word_18 = 0;
    r0_1->word_1c = 0;
    r0_1->word_20 = 0;
    r0_1->word_24 = 0;
    r0_1->word_28 = 0;
    r0_1->word_2c = 0;
    r0_1->word_30 = 0;
    r0_1->word_34 = 0;
    r0_1->word_38 = 0;
    r0_1->word_3c = 0;
    guest::cpu()->r[1] = 0u;
    return r0_1.addr();
}

}  // namespace d_00123788
GUEST_EXPORT(0x00123788, d_00123788::clear_thread_local_storage);

// f_001237d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets up the thread's local block (at +0x60 of the thread storage).
namespace d_001237d4 {

struct __attribute__((packed)) Local_001237d4_r2_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 byte_c;
    u8 unknown_d[0x3];  // (not used here)
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_001237d4_r2_1, word_0, 0x0);
GUEST_OFFSET(Local_001237d4_r2_1, word_4, 0x4);
GUEST_OFFSET(Local_001237d4_r2_1, word_8, 0x8);
GUEST_OFFSET(Local_001237d4_r2_1, byte_c, 0xc);
GUEST_OFFSET(Local_001237d4_r2_1, word_10, 0x10);
GUEST_OFFSET(Local_001237d4_r2_1, word_14, 0x14);
GUEST_OFFSET(Local_001237d4_r2_1, word_18, 0x18);
GUEST_OFFSET(Local_001237d4_r2_1, word_1c, 0x1c);

inline constexpr guest::Function<0x00100848, u32(u32, u32, u32, u32)> create_small_block_veneer;

u32 init_thread_local_block() {
    u32 r0_1 = guest::cpu()->tls;
    gptr<Local_001237d4_r2_1> r2_1 = gptr<Local_001237d4_r2_1>(r0_1 + 0x60u);  // (from the original)
    *gptr<u32>(r0_1 + 0x5cu) = r2_1.addr();  // (from the original)
    u32 r1_1 = 0u;
    r2_1->word_4 = 0x100798;  // (from the original)
    r2_1->word_8 = 0x123834;  // (from the original)
    r2_1->word_0 = r1_1;
    r2_1->byte_c = u8(r1_1);
    r2_1->word_10 = r1_1;
    r2_1->word_14 = r1_1;
    u32 r0_2 = 0u;
    r2_1->word_18 = r1_1;
    if (!u32(1)) {
        r0_2 = create_small_block_veneer(r0_2, r1_1, r2_1.addr(), guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
    }
    r2_1->word_1c = r0_2;
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_001237d4
GUEST_EXPORT_FRAMED(0x001237d4, d_001237d4::init_thread_local_block, 0x4010);  // pushes {r4, lr} first, as the original

// f_00123838: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Runs the call and stops with a fatal error when it fails.
namespace d_00123838 {

inline constexpr guest::Function<0x00129be4, u32(u32, u32, u32, u32)> ipc_handle_command_b_buffer;
inline constexpr guest::Function<0x00134250, u32(u32, u32, u32, u32)> fatal_result;

u32 check_result_fatal_129be4(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = ipc_handle_command_b_buffer(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_2 = r0_1 >> 0x1f;  // (from the original)
    if (r0_2 == 0) {
        return r0_2;
    }
    frame.release();
    return fatal_result(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00123838
GUEST_EXPORT(0x00123838, d_00123838::check_result_fatal_129be4);

// f_00123854: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The value returned by the query at 0x129c30.
namespace d_00123854 {

inline constexpr guest::Function<0x00129c30, u32(u32, u32, u32, u32)> ipc_97e004_command_c;

struct __attribute__((packed)) Frame_00123854 {
    u32 word_0;
};
GUEST_OFFSET(Frame_00123854, word_0, 0x0);
GUEST_SIZE(Frame_00123854, 0x4);

u32 query_value_129c30(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_00123854> frame;  // the original's stack frame
    frame->word_0 = r3;
    frame->word_0 = 0;
    ipc_97e004_command_c(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], r3);
    return frame->word_0;
}

}  // namespace d_00123854
GUEST_EXPORT_FRAMED(0x00123854, d_00123854::query_value_129c30, 0x4000);  // pushes {lr} first, as the original

// f_00123870: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The worker thread's loop: waits for work and runs it.
namespace d_00123870 {

inline constexpr u32 storage_service_address = 0x0097dffcu;
inline constexpr guest::Function<0x00123ae8, u32(u32, u32, u32)> WorkerThread__main;
inline constexpr guest::Function<0x001289c4, u32(u32)> Fs__unmount;
inline constexpr guest::Function<0x00129270, u32(u32, u32, u32)> raise_fatal_error_5;
inline constexpr guest::Function<0x0012ee90, u32(u32, u32, u32)> required_object_974f20;
inline constexpr guest::Function<0x0012f274, u32(u32, u32, u32)> sleep_thread_ns;
inline constexpr guest::Function<0x00139ffc, u32(u32, u32, u32, u32)> Archive__open_file;

u32 WorkerThread__loop(u32 worker_thread) {
    u32 res_2 = 0;
    u32 nf_1 = 0;
    u32 vf_1 = 0;
    u32 r6_1 = 0;
    u32 r6 = 0u;
    u32 r7 = worker_thread;
    u32 r4 = r6;
    u32 r9 = 0x185u;  // (from the original)
    u32 r5 = storage_service_address;
    u32 r8 = r9 + 1u;
L_12388c:;
    u32 r1_1 = *gptr<u32>(r5 + 4u);
    *gptr<u32>(r7 + 0x14u) = r4;  // (from the original)
    *gptr<u32>(r7 + 0x18u) = r4;  // (from the original)
    *gptr<u32>(r7 + 0xcu) = r4;  // (from the original)
    *gptr<u32>(r7 + 0x10u) = r4;  // (from the original)
    worker_thread = Archive__open_file(r7 + 8u, r1_1, 3u, guest::cpu()->r[3]);
    u32 r2 = guest::cpu()->r[2];
    if (s32(worker_thread) >= 0) {
        return r6;
    }
    u32 r1 = (worker_thread & 0x3fc00u) >> 0xa;  // (from the original)
    if (r1 == 0x11u) {  // (from the original)
        r2 = worker_thread & 0x3ffu;  // (from the original)
        if (s32(r2) >= 0xe6 && s32(r2) < 0x154) {  // (from the original)
            sleep_thread_ns(0x989680u, 0u, r2);  // (from the original)
            guest::preempt();
            goto L_12388c;
        }
    }
    if (r1 != 0x11u) {  // (from the original)
        goto L_123934;
    }
    r2 = worker_thread & 0x3ffu;  // (from the original)
    if (s32(r2) < 0x64 || s32(r2) > 0xb3) {  // (from the original)
        goto L_123934;
    }
L_123920:;
    WorkerThread__main(worker_thread, r1, r2);
    r6 = 1u;
    guest::preempt();
    goto L_12388c;
L_123934:;
    if (r1 == 0x11u) {  // (from the original)
        r2 = worker_thread & 0x3ffu;  // (from the original)
        if (s32(r2) >= 0x168 && s32(r2) <= s32(r9)) {  // (from the original)
            goto L_123970;
        }
    }
    if (r1 != 0x11u) {  // (from the original)
        goto L_1239c4;
    }
    r1 = worker_thread & 0x3ffu;  // (from the original)
    res_2 = r8 - r1;
    nf_1 = res_2 >> 0x1f;  // (from the original)
    vf_1 = ((r8 ^ r1) & (r8 ^ res_2)) >> 0x1f;  // (from the original)
    if (res_2 == 0 || nf_1 != vf_1) {
        u32 res_3 = r1 - 0x190u;  // (from the original)
        nf_1 = res_3 >> 0x1f;  // (from the original)
        vf_1 = ((r1 ^ 0x190u) & (r1 ^ res_3)) >> 0x1f;  // (from the original)
    }
    if (nf_1 == vf_1) {
        goto L_1239c4;
    }
L_123970:;
    r6_1 = *gptr<u32>(r5 + 4u);
    required_object_974f20(worker_thread, r1, r2);
    worker_thread = Fs__unmount(r6_1);
    r2 = guest::cpu()->r[2];
    if ((worker_thread & 0x3fc00u) >> 0xa == 0x11u) {  // (from the original)
        r1 = worker_thread & 0x3ffu;  // (from the original)
        if (s32(r1) >= 0x64 && s32(r1) <= 0xb3) {  // (from the original)
            guest::preempt();
            goto L_123920;
        }
    }
    r1 = 0x1239b4u;  // (from the original)
    r2 = worker_thread >> 0x1f;  // (from the original)
    if (r2 != 0) {
        worker_thread = raise_fatal_error_5(worker_thread, r1, r2);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
    }
    guest::preempt();
    goto L_123920;
L_1239c4:;
    u32 r2_2 = worker_thread >> 0x1f;  // (from the original)
    if (r2_2 != 0) {
        raise_fatal_error_5(worker_thread, 0x1239ccu, r2_2);  // (from the original)
    }
    guest::preempt();
    goto L_12388c;
}

}  // namespace d_00123870
GUEST_EXPORT_FRAMED(0x00123870, d_00123870::WorkerThread__loop, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_00123ae8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The worker thread's entry: sets it up, runs its loop and cleans up.
namespace d_00123ae8 {

struct __attribute__((packed)) Local_00123ae8_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00123ae8_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00123ae8_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_00123ae8_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00123ae8_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_00123ae8_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_00123ae8_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00123ae8_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_00123ae8_ea_3, word_4, 0x4);
GUEST_OFFSET(Local_00123ae8_ea_3, word_8, 0x8);

struct __attribute__((packed)) Local_00123ae8_ea_5 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00123ae8_ea_5, word_0, 0x0);
GUEST_OFFSET(Local_00123ae8_ea_5, word_4, 0x4);

struct __attribute__((packed)) Local_00123ae8_r3_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00123ae8_r3_3, word_0, 0x0);
GUEST_OFFSET(Local_00123ae8_r3_3, word_4, 0x4);
GUEST_OFFSET(Local_00123ae8_r3_3, word_8, 0x8);

inline constexpr u32 storage_service_address = 0x0097dffcu;
inline guest::global<u32, 0x008fab74> worker_service_a;
inline guest::global<u32, 0x008fab94> worker_service_b;
inline guest::global<u32, 0x008fab98> worker_service_c;
inline guest::global<u32, 0x0097e000> global_0097e000;
inline constexpr guest::Function<0x00123838, u32(u32, u32, u32, u32)> check_result_fatal_129be4;
inline constexpr guest::Function<0x00123854, u32(u32)> query_value_129c30;
inline constexpr guest::Function<0x00123870, u32(u32, u32, u32, u32)> WorkerThread__loop;
inline constexpr guest::Function<0x001239e8, u32(u32, u32)> Fs__read_file_size;
inline constexpr guest::Function<0x001240fc, u32(u32, u32, u32, u32)> time_stamp_to_count;
inline constexpr guest::Function<0x00124130, u32(u32, u32)> Friends__wait_event;
inline constexpr guest::Function<0x001264f0, u32(u32, u32)> count_to_time_stamp;
inline constexpr guest::Function<0x00129270, u32(u32, u32)> raise_fatal_error_5;
inline constexpr guest::Function<0x0012ede8, u32(u32, u32)> call_virtual_12_if_present;
inline constexpr guest::Function<0x0012ee90, u32(u32, u32, u32, u32)> required_object_974f20;
inline constexpr guest::Function<0x00134250, u32(u32, u32)> fatal_result;
inline constexpr guest::Function<0x00135308, u32(u32, u32, u32, u32)> Fs__open_file_in;

struct __attribute__((packed)) Frame_00123ae8 {
    u8 unknown_0[0x10];  // (not read or written by name)
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u32 word_28;
    u8 unknown_2c[0x4];  // (not read or written by name)
    u32 word_30;
    u8 byte_34;
    u8 byte_35;
    u8 unknown_36[0x1];  // (not read or written by name)
    u8 byte_37;
    u8 byte_38;
    u8 byte_39;
    u16 half_3a;
    u8 unknown_3c[0x4];  // (not read or written by name)
    u16 half_40;
    u16 half_42;
    u8 unknown_44[0x2a];  // (not read or written by name)
    u16 half_6e;
    u8 unknown_70[0x8];  // (not read or written by name)
    u32 word_78;
    u16 half_7c;
    u16 half_7e;
    u32 word_80;
    u32 word_84;
    u8 unknown_88[0x20];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00123ae8, word_10, 0x10);
GUEST_OFFSET(Frame_00123ae8, word_14, 0x14);
GUEST_OFFSET(Frame_00123ae8, word_18, 0x18);
GUEST_OFFSET(Frame_00123ae8, word_1c, 0x1c);
GUEST_OFFSET(Frame_00123ae8, word_20, 0x20);
GUEST_OFFSET(Frame_00123ae8, word_24, 0x24);
GUEST_OFFSET(Frame_00123ae8, word_28, 0x28);
GUEST_OFFSET(Frame_00123ae8, word_30, 0x30);
GUEST_OFFSET(Frame_00123ae8, byte_34, 0x34);
GUEST_OFFSET(Frame_00123ae8, byte_35, 0x35);
GUEST_OFFSET(Frame_00123ae8, byte_37, 0x37);
GUEST_OFFSET(Frame_00123ae8, byte_38, 0x38);
GUEST_OFFSET(Frame_00123ae8, byte_39, 0x39);
GUEST_OFFSET(Frame_00123ae8, half_3a, 0x3a);
GUEST_OFFSET(Frame_00123ae8, half_40, 0x40);
GUEST_OFFSET(Frame_00123ae8, half_42, 0x42);
GUEST_OFFSET(Frame_00123ae8, half_6e, 0x6e);
GUEST_OFFSET(Frame_00123ae8, word_78, 0x78);
GUEST_OFFSET(Frame_00123ae8, half_7c, 0x7c);
GUEST_OFFSET(Frame_00123ae8, half_7e, 0x7e);
GUEST_OFFSET(Frame_00123ae8, word_80, 0x80);
GUEST_OFFSET(Frame_00123ae8, word_84, 0x84);
GUEST_SIZE(Frame_00123ae8, 0xa8);

void WorkerThread__main(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00123ae8> frame;  // the original's stack frame
    u32 r1_3 = 0;
    u32 res_2 = 0;
    u32 r4_1 = *global_0097e000;
    required_object_974f20(storage_service_address, r1, r2, r3);
    u32 r0_1 = Fs__open_file_in(r4_1, guest::cpu()->r[1], 0x14u, 0u);  // (from the original)
    u32 r1_2 = r0_1 & 0x80000000u;  // (from the original)
    if (s32(r1_2) < 0) {
        if ((r0_1 & 0x3fc00u) >> 0xa == 0x11u) {  // (from the original)
            r1_3 = r0_1 & 0x3ffu;  // (from the original)
            if (s32(r1_3) >= 0xb4 && s32(r1_3) <= 0xc7) {  // (from the original)
                guest::cpu()->r[1] = r1_3;
                return;
            }
        }
        r1_3 = 0x123c90u;  // (from the original)
        if ((r0_1 >> 0x1f) != 0) {  // (from the original)
            frame.release();
            raise_fatal_error_5(r0_1, r1_3);
            return;
        }
    } else {
        u32 r6 = frame.at(0x78).addr();  // (from the original)
        Friends__wait_event(frame.at(0).addr(), r1_2);
        gptr<Local_00123ae8_ea_1> ea_1 = gptr<Local_00123ae8_ea_1>(frame.at(0).addr());
        u32 r0_3 = ea_1->word_0;
        u32 r1_4 = ea_1->word_4;
        gptr<Local_00123ae8_ea_2> ea_2 = gptr<Local_00123ae8_ea_2>(frame.at(0x90).addr());  // (from the original)
        ea_2->word_0 = r0_3;
        ea_2->word_4 = r1_4;
        count_to_time_stamp(frame.at(0x3c).addr(), frame.at(0x90).addr());  // (from the original)
        u32 r5 = 0u;
        gptr<Local_00123ae8_ea_3> ea_3 = gptr<Local_00123ae8_ea_3>(frame.at(0x3c).addr());  // (from the original)
        u32 r1_6 = ea_3->word_4;
        u32 r2_3 = ea_3->word_8;
        gptr<Local_00123ae8_r3_3> r3_3 = gptr<Local_00123ae8_r3_3>(frame.at(0x30).addr());  // (from the original)
        r3_3->word_0 = ea_3->word_0;
        r3_3->word_4 = r1_6;
        r3_3->word_8 = r2_3;
        frame->byte_38 = u8(r5);
        frame->byte_39 = u8(r5);
        frame->byte_37 = u8(r5);
        frame->half_3a = u16(r5);
        u32 r0_6 = time_stamp_to_count(frame.at(0x70).addr(), frame.at(0x30).addr(), r2_3, r3_3.addr());  // (from the original)
        u32 r0_7 = query_value_129c30(r0_6);
        frame->word_80 = r0_7;
        gptr<Local_00123ae8_ea_5> ea_5 = gptr<Local_00123ae8_ea_5>(frame.at(0x70).addr());  // (from the original)
        u32 r2_5 = ea_5->word_0;
        u32 r3_5 = ea_5->word_4;
        frame->half_7e = u16(r5);
        check_result_fatal_129be4(frame.at(0x40).addr(), 0x18u, r2_5, r3_5);  // (from the original)
        r1 = frame->half_40;
        r3 = frame->half_42;
        u32 r0 = frame.at(0x40).addr();  // (from the original)
        r2 = 0u;
        u32 r12 = 0xbu;  // (from the original)
        do {
            u32 ea_6 = r0 + 4u;
            r0 = ea_6;
            u32 r4_2 = *gptr<u16>(ea_6);
            r1 += r3;
            r3 = *gptr<u16>(r0 + 2u);
            res_2 = r12 - 1u;
            r12 = res_2;
            r2 += r4_2;
            guest::preempt();
        } while (res_2 != 0);
        frame->word_84 = r1 + r2 + u32(frame->half_6e);
        u32 worker_thread = frame.at(0x10).addr();  // (from the original)
        *gptr<u16>(r6 + 0x10u) = u16(frame->word_30);  // (from the original)
        *gptr<u8>(r6 + 0x12u) = frame->byte_34;  // (from the original)
        *gptr<u8>(r6 + 0x13u) = frame->byte_35;  // (from the original)
        frame->word_78 = 0x4f00;  // (from the original)
        frame->half_7c = u16(r5);
        frame->word_18 = r5;
        frame->word_1c = r5;
        frame->word_20 = r5;
        frame->word_24 = r5;
        frame->word_28 = r5;
        u32 r2_6 = *worker_service_a;
        frame->word_10 = r2_6;
        u32 r3_6 = *gptr<u32>(r2_6 - 0x30u);  // (from the original)
        u32 r2_7 = *worker_service_b;
        *gptr<u32>(worker_thread + r3_6) = r2_7;
        frame->word_14 = *worker_service_c;
        WorkerThread__loop(worker_thread, worker_thread, r2_7, r3_6);
        Fs__read_file_size(frame.at(0x10).addr(), frame.at(0x78).addr());  // (from the original)
        r1_3 = guest::cpu()->r[1];
        if ((frame->word_18 & ~1u) != 0) {
            u32 r0_10 = frame->word_18;
            if ((r0_10 & 1u) != 0) {
                fatal_result(r0_10, r1_3);
                r1_3 = guest::cpu()->r[1];
            }
            call_virtual_12_if_present(frame->word_18 & ~1u, r1_3);
            r1_3 = guest::cpu()->r[1];
            frame->word_18 = r5;
        }
    }
    guest::cpu()->r[1] = r1_3;
}

}  // namespace d_00123ae8
GUEST_EXPORT(0x00123ae8, d_00123ae8::WorkerThread__main);

// f_00123e40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Gets the service handle (once, under the lock) and counts a user.
namespace d_00123e40 {

inline constexpr u32 service_ab_handle_address = 0x00981e98u;
inline guest::global<u32, 0x008c13dc> global_008c13dc;
inline guest::global<u32, 0x0097d81c> service_handle_97d81c;
inline guest::global<u8, 0x0097ea2c> global_0097ea2c;
inline guest::global<u32, 0x0097ea30> service_b_refcount;
inline guest::global<u32, 0x00981e98> service_ab_handle;
inline constexpr guest::Function<0x00129094, u32(u32, u32)> get_service_handle;
inline constexpr guest::Function<0x001290f0, u32(u32, u32, u32, u32)> global_lock_ae8344;
inline constexpr guest::Function<0x00135748, u32(u32)> RecursiveLock__lock;
inline constexpr guest::Function<0x001357ec, u32(u32, u32)> RecursiveLock__unlock;

u32 ServiceB__initialize(u32 service_b, u32 r1) {
    u32 lock = global_lock_ae8344(service_b, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    RecursiveLock__lock(lock);
    u32 r1_2 = guest::cpu()->r[1];
    if (*service_b_refcount == 0) {
        u32 service_handle_2 = get_service_handle(service_ab_handle_address, *global_008c13dc);
        r1_2 = guest::cpu()->r[1];
        if (s32(service_handle_2) >= 0) {
            *global_0097ea2c = 1;
            r1_2 = *service_ab_handle;
            *service_handle_97d81c = r1_2;
        } else if (service_handle_2 == 0xd92103fbu) {  // (from the original)
            RecursiveLock__unlock(lock, r1_2);
            return service_handle_2;
        }
    }
    *service_b_refcount = *service_b_refcount + 1u;
    RecursiveLock__unlock(lock, r1_2);
    return 0u;
}

}  // namespace d_00123e40
GUEST_EXPORT_FRAMED(0x00123e40, d_00123e40::ServiceB__initialize, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00123ee8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Gets the service handle (once, under the lock) and counts a user.
namespace d_00123ee8 {

inline constexpr u32 service_a_instance_address = 0x00981e94u;
inline guest::global<u32, 0x008c13d4> global_008c13d4;
inline guest::global<u32, 0x0097d81c> service_handle_97d81c;
inline guest::global<u32, 0x0097ea28> service_a_refcount;
inline guest::global<u32, 0x00981e94> service_a_instance;
inline guest::global<u32, 0x00981e98> service_ab_handle;
inline constexpr guest::Function<0x00129094, u32(u32, u32)> get_service_handle;
inline constexpr guest::Function<0x001290f0, u32(u32, u32, u32, u32)> global_lock_ae8344;
inline constexpr guest::Function<0x00135748, u32(u32)> RecursiveLock__lock;
inline constexpr guest::Function<0x001357ec, u32(u32)> RecursiveLock__unlock;

u32 ServiceA__initialize(u32 service_a, u32 r1) {
    u32 lock = global_lock_ae8344(service_a, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    RecursiveLock__lock(lock);
    if (*service_a_refcount == 0) {
        u32 service_handle_2 = get_service_handle(service_a_instance_address, *global_008c13d4);
        if (s32(service_handle_2) >= 0) {
            u32 r0_3 = *service_a_instance;
            *service_ab_handle = r0_3;
            *service_handle_97d81c = r0_3;
        } else if (service_handle_2 == 0xd92103fbu) {  // (from the original)
            RecursiveLock__unlock(lock);
            return service_handle_2;
        }
    }
    *service_a_refcount = *service_a_refcount + 1u;
    RecursiveLock__unlock(lock);
    return 0u;
}

}  // namespace d_00123ee8
GUEST_EXPORT_FRAMED(0x00123ee8, d_00123ee8::ServiceA__initialize, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00124244: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Signals the event at 0x97d8b4 when its owner (0x97d8a0) exists.
namespace d_00124244 {

inline constexpr u32 global_0097d8b4_address = 0x0097d8b4u;
inline guest::global<u8, 0x0097d8a0> global_0097d8a0;
inline constexpr guest::Function<0x0012ff0c, u32(u32, u32, u32, u32)> ipc_handle_command_b;

u32 signal_event_97d8b4(u32 r0_unused, u32 r1) {
    u32 r0_1 = *global_0097d8a0;
    if (r0_1 == 0) {
        return r0_1;
    }
    return ipc_handle_command_b(global_0097d8b4_address, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00124244
GUEST_EXPORT(0x00124244, d_00124244::signal_event_97d8b4);

// f_00124270: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The low 3 bits of the flags at 0x974af0.
namespace d_00124270 {

inline guest::global<u32, 0x00974af0> applet_state;

u32 applet_state_low_3() {
    return *applet_state & 7u;
}

}  // namespace d_00124270
GUEST_EXPORT(0x00124270, d_00124270::applet_state_low_3);

// f_001242a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the callback at 0x974b2c and its argument (0x974b6c).
namespace d_001242a0 {

inline guest::global<u32, 0x00974b2c> applet_callback_c;
inline guest::global<u32, 0x00974b6c> applet_callback_c_arg;

void set_applet_callback_c(u32 r0, u32 r1) {
    *applet_callback_c = r0;
    *applet_callback_c_arg = r1;
}

}  // namespace d_001242a0
GUEST_EXPORT(0x001242a0, d_001242a0::set_applet_callback_c);

// f_001242b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the callback at 0x974b20 and its argument (0x974b60).
namespace d_001242b4 {

inline guest::global<u32, 0x00974b20> applet_callback_a;
inline guest::global<u32, 0x00974b60> applet_callback_a_arg;

void set_applet_callback_a(u32 r0, u32 r1) {
    *applet_callback_a = r0;
    *applet_callback_a_arg = r1;
}

}  // namespace d_001242b4
GUEST_EXPORT(0x001242b4, d_001242b4::set_applet_callback_a);

// f_00124304: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the callback at 0x974b24 and its argument (0x974b64).
namespace d_00124304 {

inline guest::global<u32, 0x00974b24> applet_callback_b;
inline guest::global<u32, 0x00974b64> applet_callback_b_arg;

void set_applet_callback_b(u32 r0, u32 r1) {
    *applet_callback_b = r0;
    *applet_callback_b_arg = r1;
}

}  // namespace d_00124304
GUEST_EXPORT(0x00124304, d_00124304::set_applet_callback_b);

// f_00124b4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sends command 5 with the word and the byte.
namespace d_00124b4c {

inline constexpr guest::Function<0x0012a370, u32(u32, u32, u32, u32)> ServiceCommand__send;

struct __attribute__((packed)) Frame_00124b4c {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 byte_c;
    u8 unknown_d[0x7];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00124b4c, word_0, 0x0);
GUEST_OFFSET(Frame_00124b4c, word_4, 0x4);
GUEST_OFFSET(Frame_00124b4c, word_8, 0x8);
GUEST_OFFSET(Frame_00124b4c, byte_c, 0xc);
GUEST_SIZE(Frame_00124b4c, 0x14);

u32 send_command_5(u32 r0, u32 r1) {
    guest::StackFrameOf<Frame_00124b4c> frame;  // the original's stack frame
    frame->word_8 = r0;
    frame->byte_c = u8(r1);
    frame->word_0 = 0;
    frame->word_4 = 0;
    u32 r0_1 = ServiceCommand__send(5u, frame.at(8).addr(), 8u, 0u);
    return r0_1;
}

}  // namespace d_00124b4c
GUEST_EXPORT_FRAMED(0x00124b4c, d_00124b4c::send_command_5, 0x4000);  // pushes {lr} first, as the original

// f_00124b80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sends command 7 with the word.
namespace d_00124b80 {

struct __attribute__((packed)) Local_00124b80_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00124b80_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00124b80_ea_1, word_4, 0x4);

inline constexpr guest::Function<0x0012a370, u32(u32, u32, u32, u32)> ServiceCommand__send;

struct __attribute__((packed)) Frame_00124b80 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
    u32 word_c;
};
GUEST_OFFSET(Frame_00124b80, word_0, 0x0);
GUEST_OFFSET(Frame_00124b80, word_4, 0x4);
GUEST_OFFSET(Frame_00124b80, word_c, 0xc);
GUEST_SIZE(Frame_00124b80, 0x10);

u32 send_command_7(u32 r0) {
    guest::StackFrameOf<Frame_00124b80> frame;  // the original's stack frame
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_00124b80_ea_1> ea_1 = gptr<Local_00124b80_ea_1>(frame.at(8).addr());
    ea_1->word_0 = r0;
    ea_1->word_4 = r14;
    frame->word_0 = 0;
    frame->word_4 = 0;
    u32 r0_1 = ServiceCommand__send(7u, frame.at(8).addr(), 4u, 0u);
    u32 v_1 = frame->word_c;
    return r0_1;
}

}  // namespace d_00124b80
GUEST_EXPORT(0x00124b80, d_00124b80::send_command_7);

// f_00124c20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the callback at 0x97d7d0 and its argument.
namespace d_00124c20 {

inline guest::global<u32, 0x0097d7d0> global_0097d7d0;
inline guest::global<u32, 0x0097d7d4> global_0097d7d4;

void set_callback_97d7d0(u32 r0, u32 r1) {
    *global_0097d7d0 = r0;
    *global_0097d7d4 = r1;
}

}  // namespace d_00124c20
GUEST_EXPORT(0x00124c20, d_00124c20::set_callback_97d7d0);

// f_00124c4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sends command 4 without data.
namespace d_00124c4c {

inline constexpr guest::Function<0x0012a370, u32(u32, u32, u32, u32)> ServiceCommand__send;

struct __attribute__((packed)) Frame_00124c4c {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00124c4c, word_0, 0x0);
GUEST_OFFSET(Frame_00124c4c, word_4, 0x4);
GUEST_SIZE(Frame_00124c4c, 0xc);

u32 send_command_4() {
    guest::StackFrameOf<Frame_00124c4c> frame;  // the original's stack frame
    frame->word_0 = 0;
    frame->word_4 = 0;
    u32 r0_1 = ServiceCommand__send(4u, 0u, 0u, 0u);
    return r0_1;
}

}  // namespace d_00124c4c
GUEST_EXPORT_FRAMED(0x00124c4c, d_00124c4c::send_command_4, 0x4000);  // pushes {lr} first, as the original

// f_00124f94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Opens the friends service (frd:u) the first time, counting the users.
namespace d_00124f94 {

inline constexpr u32 global_0097d89c_address = 0x0097d89cu;
inline constexpr u32 global_00ae0b44_address = 0x00ae0b44u;
inline constexpr u32 global_00ae0b50_address = 0x00ae0b50u;
inline constexpr u32 frd_lock_address = 0x00ae0b5cu;
inline guest::global<u8, 0x00974ee8> global_00974ee8;
inline guest::global<u32, 0x00974eec> friends_init_count;
inline guest::global<u32, 0x00974ef0> global_00974ef0;
inline constexpr guest::Function<0x00129c7c, u32(u32, u32)> srv_initialize;
inline constexpr guest::Function<0x00129da0, u32(u32, u32, u32, u32)> srv_get_service_handle;
inline constexpr guest::Function<0x0012b228, u32(u32, u32)> frd_session_open;
inline constexpr guest::Function<0x0012b264, u32(u32, u32)> ipc_command_8_buffer;
inline constexpr guest::Function<0x0012b31c, u32(u32, u32)> ipc_97d89c_command_32;
inline constexpr guest::Function<0x0012f154, u32(u32)> RecursiveLock__initialize;
inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> RecursiveLock__lock;
inline constexpr guest::Function<0x001357ec, u32(u32, u32)> RecursiveLock__unlock;
inline constexpr guest::Function<0x002fa9d0, u32(u32, u32)> string_length;

struct __attribute__((packed)) Frame_00124f94 {
    u8 unknown_0[0x8];  // (not read or written by name)
    u32 word_8;
    u8 unknown_c[0x124];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00124f94, word_8, 0x8);
GUEST_SIZE(Frame_00124f94, 0x130);

u32 frd_initialize(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00124f94> frame;  // the original's stack frame
    u32 r5_1 = 0;
    u32 r0_8 = 0;
    u32 r0_1 = RecursiveLock__lock(frd_lock_address, r1, r2, r3);
    u32 r0_2 = frd_session_open(r0_1, guest::cpu()->r[1]);
    u32 r1_2 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        r5_1 = 0xd8a0c7f9u;  // (from the original)
    } else {
        RecursiveLock__lock(frd_lock_address, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r7_1 = *friends_init_count != 0;
        u32 r0_3 = RecursiveLock__unlock(frd_lock_address, guest::cpu()->r[1]);
        r1_2 = guest::cpu()->r[1];
        if (r7_1 != 0) {
            r5_1 = 0u;
            *friends_init_count = *friends_init_count + 1u;
        } else {
            u32 r0_4 = srv_initialize(r0_3, r1_2);
            r1_2 = r0_4 >> 0x1f;  // (from the original)
            if (r1_2 == 0) {
                u32 length_2 = string_length(0x1250f4u, r1_2);  // (from the original)
                r0_4 = srv_get_service_handle(global_0097d89c_address, 0x1250f4u, length_2, 0u);  // (from the original)
                r1_2 = r0_4 >> 0x1f;  // (from the original)
                if (r1_2 == 0) {
                    *friends_init_count = *friends_init_count + 1u;
                    ipc_97d89c_command_32(0xb0500c8u, r1_2);  // (from the original)
                    RecursiveLock__initialize(global_00ae0b44_address);
                    *global_00974ee8 = 0;
                    RecursiveLock__initialize(global_00ae0b50_address);
                    RecursiveLock__lock(frd_lock_address, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                    u32 r8_1 = *friends_init_count != 0;
                    u32 r0_6 = RecursiveLock__unlock(frd_lock_address, guest::cpu()->r[1]);
                    r1_2 = guest::cpu()->r[1];
                    if (r8_1 == 0) {
                        u32 r0_7 = frd_session_open(r0_6, r1_2);
                        r1_2 = guest::cpu()->r[1];
                        if (r0_7 == 0) {
                            r0_8 = 0xd8a0c7f8u;  // (from the original)
                            goto L_1250c0;
                        }
                    }
                    r0_8 = ipc_command_8_buffer(frame.at(0).addr(), r1_2);
                    r1_2 = guest::cpu()->r[1];
                    goto L_1250c0;
                }
            }
            r5_1 = r0_4;
            goto L_1250d4;
L_1250c0:;
            r5_1 = r0_8;
            if (s32(r0_8) >= 0) {
                *global_00974ef0 = frame->word_8;
            }
        }
    }
L_1250d4:;
    RecursiveLock__unlock(frd_lock_address, r1_2);
    return r5_1;
}

}  // namespace d_00124f94
GUEST_EXPORT_FRAMED(0x00124f94, d_00124f94::frd_initialize, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0012564c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Inserts the object (by its node offset, +0x20) at the end of the list (+0x14) and counts it (+0x1c).
namespace d_0012564c {

struct __attribute__((packed)) IntrusiveList {
    u8 unknown_0[0x1c];  // (not used here)
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(IntrusiveList, word_1c, 0x1c);
GUEST_OFFSET(IntrusiveList, word_20, 0x20);

inline constexpr guest::Function<0x00138560, u32(u32, u32)> insert_node_after_00138560;

void IntrusiveList__push_back_counted(gptr<IntrusiveList> intrusive_list, u32 r1) {
    insert_node_after_00138560(intrusive_list.addr() + 0x14u, r1 + intrusive_list->word_20);  // (from the original)
    intrusive_list->word_1c = intrusive_list->word_1c + 1u;
}

}  // namespace d_0012564c
GUEST_EXPORT_FRAMED(0x0012564c, d_0012564c::IntrusiveList__push_back_counted, 0x4010);  // pushes {r4, lr} first, as the original

// f_00125674: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the source's second word to +0x24 and sets the flag byte (+4).
namespace d_00125674 {

struct __attribute__((packed)) Object_00125674_0 {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
    u8 unknown_5[0x1f];  // (not used here)
    u32 word_24;
};
GUEST_OFFSET(Object_00125674_0, byte_4, 0x4);
GUEST_OFFSET(Object_00125674_0, word_24, 0x24);

struct __attribute__((packed)) Object_00125674_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00125674_1, word_4, 0x4);


void set_word_24_and_flag(gptr<Object_00125674_0> arg0, gptr<Object_00125674_1> arg1) {
    arg0->word_24 = arg1->word_4;
    arg0->byte_4 = 1;
    guest::cpu()->r[1] = 1u;
}

}  // namespace d_00125674
GUEST_EXPORT(0x00125674, d_00125674::set_word_24_and_flag);

// f_001257fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001257fc {

struct __attribute__((packed)) Block {
    u32 vtable;
    u8 unknown_4[0x10];  // (not used here)
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
    u8 byte_39;
    u8 byte_3a;
    u8 byte_3b;
};
GUEST_OFFSET(Block, vtable, 0x0);
GUEST_OFFSET(Block, word_14, 0x14);
GUEST_OFFSET(Block, word_18, 0x18);
GUEST_OFFSET(Block, word_1c, 0x1c);
GUEST_OFFSET(Block, word_20, 0x20);
GUEST_OFFSET(Block, word_24, 0x24);
GUEST_OFFSET(Block, word_28, 0x28);
GUEST_OFFSET(Block, word_2c, 0x2c);
GUEST_OFFSET(Block, word_30, 0x30);
GUEST_OFFSET(Block, word_34, 0x34);
GUEST_OFFSET(Block, byte_38, 0x38);
GUEST_OFFSET(Block, byte_39, 0x39);
GUEST_OFFSET(Block, byte_3a, 0x3a);
GUEST_OFFSET(Block, byte_3b, 0x3b);

inline constexpr u32 vtable_sead__AudioMgr__SingletonDisposer_ = 0x00905b7cu;
inline constexpr u32 vtable_sead__AudioMgr = 0x00905b8cu;
inline constexpr u32 audio_mgr_instance_address = 0x009752b8u;
inline guest::global<u32, 0x009752b8> audio_mgr_instance;
inline guest::global<u32, 0x009752bc> global_009752bc;
inline constexpr guest::Function<0x00131280, u32(u32, u32, u32, u32)> allocate_on_heap_entry;
inline constexpr guest::Function<0x001320cc, u32(u32, u32, u32)> sead__IDisposer__IDisposer_001320cc;

u32 sead__AudioMgr__SingletonDisposer___SingletonDisposer_(u32 singleton_disposer, u32 r1) {
    if (*audio_mgr_instance == 0) {
        gptr<Block> block_2 = gptr<Block>(allocate_on_heap_entry(0x3cu, singleton_disposer, 4u, guest::cpu()->r[3]));  // (from the original)
        r1 = guest::cpu()->r[1];
        u32 i_disposer = block_2.addr() + 4u;
        if (i_disposer != 0) {
            i_disposer = sead__IDisposer__IDisposer_001320cc(i_disposer, singleton_disposer, 3u);
            r1 = vtable_sead__AudioMgr__SingletonDisposer_;
            *gptr<u32>(i_disposer) = r1;
        }
        *global_009752bc = i_disposer;
        if (block_2.addr() != 0) {
            block_2->word_14 = 0;
            block_2->vtable = vtable_sead__AudioMgr;
            block_2->word_18 = 0;
            block_2->word_1c = 0;
            block_2->word_20 = 0;
            r1 = block_2.addr() + 0x24u;  // (from the original)
            block_2->word_2c = 0;
            block_2->word_28 = r1;
            block_2->word_34 = 0;
            block_2->word_24 = r1;
            block_2->byte_38 = 0;
            block_2->byte_39 = 0;
            block_2->byte_3a = 0;
            block_2->byte_3b = 0;
            block_2->word_30 = 4;
        }
        *audio_mgr_instance = block_2.addr();
    }
    u32 r0_3 = *audio_mgr_instance;
    guest::cpu()->r[1] = r1;
    return r0_3;
}

}  // namespace d_001257fc
GUEST_EXPORT_FRAMED(0x001257fc, d_001257fc::sead__AudioMgr__SingletonDisposer___SingletonDisposer_, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00125acc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs the unit heap with the two float parameters passed on the stack.
namespace d_00125acc {

struct __attribute__((packed)) Local_00125acc_r12_1 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_00125acc_r12_1, float_0, 0x0);
GUEST_OFFSET(Local_00125acc_r12_1, float_4, 0x4);

inline constexpr guest::Function<0x0012c65c, u32(u32, u32, u32, u32)> sead__UnitHeap__UnitHeap_0012c65c;

struct __attribute__((packed)) Frame_00125acc {
    float float_0;
    float float_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00125acc, float_0, 0x0);
GUEST_OFFSET(Frame_00125acc, float_4, 0x4);
GUEST_SIZE(Frame_00125acc, 0xc);

u32 UnitHeap__construct_with_floats() {
    guest::StackFrameOf<Frame_00125acc> frame;  // the original's stack frame
    gptr<Local_00125acc_r12_1> r12_1 = gptr<Local_00125acc_r12_1>(frame.at(0x10).addr());  // (from the original)
    float S0_1 = r12_1->float_0;
    float S1_1 = r12_1->float_4;
    frame->float_0 = S0_1;
    frame->float_4 = S1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    sead__UnitHeap__UnitHeap_0012c65c(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return guest::cpu()->r[0];
}

}  // namespace d_00125acc
GUEST_EXPORT_FRAMED(0x00125acc, d_00125acc::UnitHeap__construct_with_floats, 0x4000);  // pushes {lr} first, as the original

// f_001266a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Creates the first block and points both ends of the list at 0x97d46c at it; -1 when it cannot.
namespace d_001266a4 {

struct __attribute__((packed)) Local_001266a4_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001266a4_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_001266a4_ea_3, word_4, 0x4);

struct __attribute__((packed)) Local_001266a4_r2_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001266a4_r2_1, word_0, 0x0);
GUEST_OFFSET(Local_001266a4_r2_1, word_4, 0x4);

inline constexpr u32 block_list_address = 0x0097d46cu;
inline guest::global<u32, 0x0097d46c> block_list;
inline constexpr guest::Function<0x0012db70, u32(u32, u32)> GpuCommandList__reserve;

u32 init_block_list(u32 r0, u32 r1) {
    *block_list = r0;
    u32 r0_1 = GpuCommandList__reserve(r0, r1);
    if (r0_1 == 0) {
        return ~0u;
    }
    *gptr<u32>(r0_1 + 0x20u) = 0;  // (from the original)
    *gptr<u32>(r0_1 + 0x24u) = 0;  // (from the original)
    gptr<Local_001266a4_r2_1> r2_1 = gptr<Local_001266a4_r2_1>(*block_list);
    r2_1->word_0 = r0_1;
    r2_1->word_4 = 0;
    gptr<Local_001266a4_ea_3> ea_3 = gptr<Local_001266a4_ea_3>(r2_1.addr() + 8u);
    ea_3->word_0 = r0_1;
    ea_3->word_4 = 0;
    guest::cpu()->r[1] = 0u;
    return 0u;
}

}  // namespace d_001266a4
GUEST_EXPORT_FRAMED(0x001266a4, d_001266a4::init_block_list, 0x4010);  // pushes {r4, lr} first, as the original

// f_001266e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Decompresses the data block into the buffer.
namespace d_001266e8 {

struct __attribute__((packed)) Local_001266e8_r1_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_001266e8_r1_2, word_0, 0x0);
GUEST_OFFSET(Local_001266e8_r1_2, word_4, 0x4);
GUEST_OFFSET(Local_001266e8_r1_2, word_8, 0x8);
GUEST_OFFSET(Local_001266e8_r1_2, word_c, 0xc);

struct __attribute__((packed)) Local_001266e8_r2_3 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_001266e8_r2_3, word_4, 0x4);
GUEST_OFFSET(Local_001266e8_r2_3, word_8, 0x8);

struct __attribute__((packed)) Local_001266e8_r2_5 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001266e8_r2_5, word_0, 0x0);
GUEST_OFFSET(Local_001266e8_r2_5, word_4, 0x4);

struct __attribute__((packed)) Local_001266e8_r2_8 {
    u8 unknown_0[0x35c];  // (not used here)
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
    u8 unknown_398[0x4];  // (not used here)
    u32 word_39c;
    u8 unknown_3a0[0x4];  // (not used here)
    u32 word_3a4;
    u32 word_3a8;
    u32 word_3ac;
    u32 word_3b0;
    u32 word_3b4;
    u32 word_3b8;
    u32 word_3bc;
    u32 word_3c0;
    u32 word_3c4;
};
GUEST_OFFSET(Local_001266e8_r2_8, word_35c, 0x35c);
GUEST_OFFSET(Local_001266e8_r2_8, word_360, 0x360);
GUEST_OFFSET(Local_001266e8_r2_8, word_364, 0x364);
GUEST_OFFSET(Local_001266e8_r2_8, word_368, 0x368);
GUEST_OFFSET(Local_001266e8_r2_8, word_36c, 0x36c);
GUEST_OFFSET(Local_001266e8_r2_8, word_370, 0x370);
GUEST_OFFSET(Local_001266e8_r2_8, word_374, 0x374);
GUEST_OFFSET(Local_001266e8_r2_8, word_378, 0x378);
GUEST_OFFSET(Local_001266e8_r2_8, word_37c, 0x37c);
GUEST_OFFSET(Local_001266e8_r2_8, word_380, 0x380);
GUEST_OFFSET(Local_001266e8_r2_8, word_384, 0x384);
GUEST_OFFSET(Local_001266e8_r2_8, word_388, 0x388);
GUEST_OFFSET(Local_001266e8_r2_8, word_38c, 0x38c);
GUEST_OFFSET(Local_001266e8_r2_8, word_390, 0x390);
GUEST_OFFSET(Local_001266e8_r2_8, word_394, 0x394);
GUEST_OFFSET(Local_001266e8_r2_8, word_39c, 0x39c);
GUEST_OFFSET(Local_001266e8_r2_8, word_3a4, 0x3a4);
GUEST_OFFSET(Local_001266e8_r2_8, word_3a8, 0x3a8);
GUEST_OFFSET(Local_001266e8_r2_8, word_3ac, 0x3ac);
GUEST_OFFSET(Local_001266e8_r2_8, word_3b0, 0x3b0);
GUEST_OFFSET(Local_001266e8_r2_8, word_3b4, 0x3b4);
GUEST_OFFSET(Local_001266e8_r2_8, word_3b8, 0x3b8);
GUEST_OFFSET(Local_001266e8_r2_8, word_3bc, 0x3bc);
GUEST_OFFSET(Local_001266e8_r2_8, word_3c0, 0x3c0);
GUEST_OFFSET(Local_001266e8_r2_8, word_3c4, 0x3c4);

inline constexpr u32 gpu_depth_mode_address = 0x0097d470u;
inline constexpr u32 global_0097d480_address = 0x0097d480u;
inline constexpr u32 global_0097d4e0_address = 0x0097d4e0u;
inline constexpr u32 global_0097d4f8_address = 0x0097d4f8u;
inline constexpr u32 global_0097d510_address = 0x0097d510u;
inline constexpr u32 global_00a0280a_address = 0x00a0280au;
inline constexpr u32 global_00ae711c_address = 0x00ae711cu;
inline constexpr u32 global_00ae7f08_address = 0x00ae7f08u;
inline constexpr u32 global_00ae80f8_address = 0x00ae80f8u;
inline constexpr u32 global_00ae8214_address = 0x00ae8214u;
inline constexpr u32 global_00ae822c_address = 0x00ae822cu;
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> clear_aligned;
inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32)> copy_bytes_at_any_alignment;
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> copy_aligned_bytes;

u32 decompress_block_97d470(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r5 = 0;
    u32 r6 = 0;
    u32 r7 = 0;
    u32 r11 = 0;
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 zf_2 = 0;
    u32 zf_4 = 0;
    u32 res_5 = 0;
    u32 nf_5 = 0;
    u32 zf_22 = 0;
    u32 vf_5 = 0;
    u32 res_7 = 0;
    u32 nf_7 = 0;
    u32 zf_30 = 0;
    u32 vf_7 = 0;
    u32 zf_34 = 0;
    u32 zf_35 = 0;
    u32 zf_36 = 0;
    u32 r3_1 = 0;
    u32 r3_2 = 0;
    u32 r3_3 = 0;
    u32 zf_37 = 0;
    u32 cf_1 = 0;
    u32 r5_8 = 0;
    u32 r5_9 = 0;
    u32 r7_7 = 0;
    u32 r7_8 = 0;
    u32 r8_1 = 0;
    u32 r8_2 = 0;
    u32 r9_5 = 0;
    u32 r9_6 = 0;
    u32 r10_4 = 0;
    u32 r10_5 = 0;
    u32 r2_9 = 0;
    u32 r2_10 = 0;
    u32 r11_2 = 0;
    u32 r3_4 = 0;
    u32 r3_5 = 0;
    u32 r12_3 = 0;
    u32 r12_4 = 0;
    u32 r6_6 = 0;
    u32 r6_7 = 0;
    u32 r7_9 = 0;
    u32 r7_10 = 0;
    u32 r8_3 = 0;
    u32 r8_4 = 0;
    u32 r9_7 = 0;
    u32 r9_8 = 0;
    u32 r10_6 = 0;
    u32 r10_7 = 0;
    u32 r12_5 = 0;
    u32 r2_11 = 0;
    u32 r3_6 = 0;
    u32 r12_6 = 0;
    u32 r6_8 = 0;
    u32 r2_12 = 0;
    u32 r6_9 = 0;
    u32 r2_13 = 0;
    u32 r3_7 = 0;
    u32 r12_7 = 0;
    u32 r3_8 = 0;
    u32 r3_9 = 0;
    u32 r3_10 = 0;
    u32 r3_11 = 0;
    u32 r3_12 = 0;
    u32 r3_13 = 0;
    u32 r3_14 = 0;
    u32 r3_15 = 0;
    u32 res_8 = 0;
    u32 zf_38 = 0;
    u32 r1_5 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_6 = 0;
    u32 r0_5 = 0;
    u32 r1_7 = 0;
    u32 r0_6 = 0;
    u32 r1_8 = 0;
    u32 zf_43 = 0;
    u32 zf_44 = 0;
    u32 r2_14 = 0;
    u32 zf_45 = 0;
    u32 zf_46 = 0;
    u32 r3_20 = 0;
    u32 zf_47 = 0;
    u32 zf_48 = 0;
    u32 r2_17 = 0;
    u32 zf_49 = 0;
    u32 zf_50 = 0;
    u32 r0_7 = 0;
    *gptr<u32>(r13 - 0x28u) = r3;  // (from the original)
    r13 -= 0x28;  // (from the original)
    u32 r4 = gpu_depth_mode_address;
    *gptr<u32>(r4 + 8u) = r0;
    guest::cpu()->r[13] = r13;
    clear_aligned(r0, 0x1774u, r2, r3);  // (from the original)
    *gptr<u32>(r13) = 0;
    r3 = 0x8b0990u;  // (from the original)
    u32 r8 = 1u;
    *gptr<u32>(r4 + 4u) = r8;
    *gptr<u32>(r4 + 0xcu) = ~0u;  // (from the original)
    *gptr<u32>(r4) = r8;
    r0 = 0u;
    if (!(*gptr<u32>(r3) + 1u == 0)) {
        r12 = global_00ae711c_address;
        do {
            gptr<Local_001266e8_r1_2> r1_2 = gptr<Local_001266e8_r1_2>(r3 + (r0 << 4));
            r0 += 1u;
            u32 r2_1 = r1_2->word_0;
            u32 r5_1 = r1_2->word_4;
            u32 r2_2 = r2_1 * 3u;
            *gptr<u32>(r12 + (r2_2 << 2)) = r5_1;
            u32 r5_2 = r1_2->word_8;
            gptr<Local_001266e8_r2_3> r2_3 = gptr<Local_001266e8_r2_3>(r12 + (r2_2 << 2));
            r2_3->word_4 = r5_2;
            r2_3->word_8 = r1_2->word_c;
            zf_2 = *gptr<u32>(r3 + (r0 << 4)) + 1u == 0;
            guest::preempt();
        } while (!zf_2);
    }
    r0 = 0x8b1c30u;  // (from the original)
    u32 r1 = 0u;
    if (!(*gptr<u32>(r0) + 1u == 0)) {
        r3 = global_00ae7f08_address;
        do {
            gptr<Local_001266e8_r2_5> r2_5 = gptr<Local_001266e8_r2_5>(r0 + (r1 << 3));
            r1 += 1u;
            *gptr<u32>(r3 + (r2_5->word_0 << 2)) = r2_5->word_4;
            zf_4 = *gptr<u32>(r0 + (r1 << 3)) + 1u == 0;
            guest::preempt();
        } while (!zf_4);
    }
    r0 = *gptr<u32>(r4 + 8u);
    r1 = 0xfu;  // (from the original)
    gptr<Local_001266e8_r2_8> r2_8 = gptr<Local_001266e8_r2_8>(r0 + 0x1000u);  // (from the original)
    r2_8->word_3a4 = 0x1000;  // (from the original)
    u32 r14 = 0x16dau | u32(s32(r1) >> 2);  // (from the original)
    *gptr<u8>(r0 + 0x16dau) = 2;  // (from the original)
    u32 r7_1 = r14 ^ u32(s32(r1) >> 1);
    r2_8->word_3a8 = 0;
    *gptr<u8>(r14 + r0) = u8(r1);
    u32 r12_2 = 0x16dau ^ u32(s32(r1) >> 1);  // (from the original)
    r2_8->word_3ac = 0;
    *gptr<u8>(r7_1 + r0) = u8(r1);
    r2_8->word_3b0 = 9;
    r14 = r12_2 ^ u32(s32(r1) >> 2);
    *gptr<u8>(r12_2 + r0) = u8(r1);
    u32 r5_3 = r7_1 | r1;
    r2_8->word_3b4 = 0;
    *gptr<u8>(r14 + r0) = u8(r1);
    u32 r6_1 = r12_2 + u32(s32(r1) >> 2);
    r2_8->word_3b8 = 0;
    *gptr<u8>(r5_3 + r0) = u8(r1);
    r2_8->word_3bc = 0;
    *gptr<u8>(r6_1 + r0) = u8(r1);
    r2_8->word_3c0 = 0x1c00301;  // (from the original)
    *gptr<u8>((r14 + u32(s32(r1) >> 2)) + r0) = u8(r1);
    r2_8->word_3c4 = 0xe0c08000;  // (from the original)
    *gptr<u8>((r5_3 + u32(s32(r1) >> 2)) + r0) = u8(r1);
    r14 = r5_3 + 0x2du;  // (from the original)
    *gptr<u32>((r6_1 - 0x274u) + r0) = 0x3c00;  // (from the original)
    u32 r10_1 = r5_3 - 0x15u;  // (from the original)
    *gptr<u8>(r14 + r0) = u8(r1);
    r14 = 0x1f1f1f1fu;  // (from the original)
    r2_8->word_364 = 0;
    u32 r4_1 = r10_1 | u32(s32(r1) >> 2);
    *gptr<u8>(r10_1 + r0) = u8(r1);
    r2_8->word_368 = r14;
    *gptr<u8>(r4_1 + r0) = u8(r1);
    r2_8->word_36c = r14;
    *gptr<u8>((r4_1 ^ u32(s32(r1) >> 1)) + r0) = u8(r1);
    r2_8->word_370 = r14;
    *gptr<u8>((r0 + 0x1600u) + 0xcdu) = u8(r1);  // (from the original)
    r2_8->word_374 = r14;
    *gptr<u8>((r0 + 0x1600u) + 0xceu) = u8(r1);  // (from the original)
    u32 r10_2 = r4_1 + 5u;
    r2_8->word_378 = r14;
    *gptr<u8>((r0 + 0x1600u) + 0xcfu) = u8(r1);  // (from the original)
    r12 = 0x5cu;  // (from the original)
    u32 r9_4 = r10_2 | u32(s32(r10_2) >> 0xb);  // (from the original)
    r2_8->word_37c = r14;
    *gptr<u8>(r10_2 + r0) = u8(r1);
    r2_8->word_380 = r14;
    *gptr<u8>((r0 + 0x1600u) + 0xd1u) = u8(r1);  // (from the original)
    r2_8->word_39c = r8;
    *gptr<u8>((r0 + 0x1400u) + 0x2d8u) = u8(r1);  // (from the original)
    r2_8->word_35c = 0xbf0000;  // (from the original)
    *gptr<u8>((r0 + 0x1400u) + 0x2c8u) = u8(r1);  // (from the original)
    r2_8->word_360 = 0;
    *gptr<u8>((r0 + 0x1600u) + 0xc9u) = u8(r1);  // (from the original)
    r2_8->word_384 = 0;
    u32 r10_3 = r9_4 | u32(s32(r1) >> 2);
    *gptr<u8>(r9_4 + r0) = u8(r1);
    r2_8->word_388 = 0;
    r14 = r10_3 ^ u32(s32(r1) >> 1);
    *gptr<u8>(r10_3 + r0) = u8(r1);
    r2_8->word_38c = 0;
    u32 r4_4 = r9_4 ^ u32(s32(r1) >> 1);
    *gptr<u8>(r14 + r0) = u8(r1);
    r2_8->word_390 = 0;
    *gptr<u8>(r4_4 + r0) = u8(r1);
    r2_8->word_394 = 0;
    *gptr<u8>((r4_4 ^ u32(s32(r1) >> 2)) + r0) = u8(r1);
L_126924:;
    u32 res_1 = r12 - 0x8du;  // (from the original)
    u32 zf_5 = res_1 == 0;
    if (zf_5) {
        goto L_126c88;
    }
    if (zf_5 || (res_1 >> 0x1f) != (((r12 ^ 0x8du) & (r12 ^ res_1)) >> 0x1f)) {  // (from the original)
        u32 res_2 = r12 - 0x77u;  // (from the original)
        u32 zf_6 = res_2 == 0;
        if (zf_6) {
            goto L_126c88;
        }
        if (zf_6 || (res_2 >> 0x1f) != (((r12 ^ 0x77u) & (r12 ^ res_2)) >> 0x1f)) {  // (from the original)
            u32 res_3 = r12 - 0x6cu;  // (from the original)
            u32 zf_7 = res_3 == 0;
            if (zf_7) {
                goto L_126c88;
            }
            if (zf_7 || (res_3 >> 0x1f) != (((r12 ^ 0x6cu) & (r12 ^ res_3)) >> 0x1f)) {  // (from the original)
                if (r12 == 0x61u) {  // (from the original)
                    goto L_126c88;
                }
                if (r12 == 0x63u) {  // (from the original)
                    goto L_126cac;
                }
                if (r12 == 0x64u) {  // (from the original)
                    goto L_126cb4;
                }
                if (r12 != 0x66u) {  // (from the original)
                    goto L_126a5c;
                }
                goto L_126c64;
            }
            if (r12 == 0x6eu) {  // (from the original)
                goto L_126cac;
            }
            if (r12 == 0x6fu) {  // (from the original)
                goto L_126cb4;
            }
            if (r12 != 0x71u) {  // (from the original)
                goto L_126a5c;
            }
            goto L_126c64;
        }
        u32 res_4 = r12 - 0x82u;  // (from the original)
        u32 zf_15 = res_4 == 0;
        if (zf_15) {
            goto L_126c88;
        }
        if (zf_15 || (res_4 >> 0x1f) != (((r12 ^ 0x82u) & (r12 ^ res_4)) >> 0x1f)) {  // (from the original)
            if (r12 == 0x79u) {  // (from the original)
                goto L_126cac;
            }
            if (r12 == 0x7au) {  // (from the original)
                goto L_126cb4;
            }
            if (r12 != 0x7cu) {  // (from the original)
                goto L_126a5c;
            }
            goto L_126c64;
        }
        if (r12 == 0x84u) {  // (from the original)
            goto L_126cac;
        }
        if (r12 == 0x85u) {  // (from the original)
            goto L_126cb4;
        }
        if (r12 != 0x87u) {  // (from the original)
            goto L_126a5c;
        }
        goto L_126c64;
    }
    res_5 = r12 - 0xa3u;  // (from the original)
    nf_5 = res_5 >> 0x1f;  // (from the original)
    zf_22 = res_5 == 0;
    vf_5 = ((r12 ^ 0xa3u) & (r12 ^ res_5)) >> 0x1f;  // (from the original)
    if (zf_22) {
        goto L_126c88;
    }
    if (zf_22 || nf_5 != vf_5) {
        u32 res_6 = r12 - 0x98u;  // (from the original)
        u32 zf_23 = res_6 == 0;
        if (zf_23) {
            goto L_126c88;
        }
        if (zf_23 || (res_6 >> 0x1f) != (((r12 ^ 0x98u) & (r12 ^ res_6)) >> 0x1f)) {  // (from the original)
            if (r12 == 0x8fu) {  // (from the original)
                goto L_126cac;
            }
            if (r12 == 0x90u) {  // (from the original)
                goto L_126cb4;
            }
            if (r12 != 0x92u) {  // (from the original)
                goto L_126a5c;
            }
            goto L_126c64;
        }
        if (r12 == 0x9au) {  // (from the original)
            goto L_126cac;
        }
        if (r12 == 0x9bu) {  // (from the original)
            goto L_126cb4;
        }
        if (r12 != 0x9du) {  // (from the original)
            goto L_126a5c;
        }
        goto L_126c64;
    }
    res_7 = r12 - 0xaeu;  // (from the original)
    nf_7 = res_7 >> 0x1f;  // (from the original)
    zf_30 = res_7 == 0;
    vf_7 = ((r12 ^ 0xaeu) & (r12 ^ res_7)) >> 0x1f;  // (from the original)
    if (zf_30) {
        goto L_126c88;
    }
    if (zf_30 || nf_7 != vf_7) {
        if (r12 == 0xa5u) {  // (from the original)
            goto L_126cac;
        }
        if (r12 == 0xa6u) {  // (from the original)
            goto L_126cb4;
        }
        if (r12 != 0xa8u) {  // (from the original)
            goto L_126a5c;
        }
        goto L_126c64;
    }
    zf_34 = r12 == 0xb0u;  // (from the original)
    if (zf_34) {
        goto L_126cac;
    }
    zf_35 = r12 == 0xb1u;  // (from the original)
    if (zf_35) {
        goto L_126cb4;
    }
    zf_36 = r12 == 0xb3u;  // (from the original)
    if (zf_36) {
        goto L_126c64;
    }
L_126a5c:;
    r14 = r0 + (r12 << 2);
    r3_1 = r0 + r12;
    r14 += 0x1000u;  // (from the original)
    r3_2 = r3_1 + 0x1600u;  // (from the original)
    r3_3 = r3_2 + 0xb1u;  // (from the original)
    *gptr<u32>(r14 + 0x300u) = 0;  // (from the original)
    *gptr<u8>(r3_3) = u8(r1);
L_126a7c:;
    r12 += 1u;
    zf_37 = r12 == 0xb3u;  // (from the original)
    cf_1 = r12 >= 0xb3u;  // (from the original)
    if (!cf_1 || zf_37) {
        guest::preempt();
        goto L_126924;
    }
    *gptr<u32>(r0 + 0x1478u) = 0xcc330cc;  // (from the original)
    r14 = 0x15d4u;  // (from the original)
    *gptr<u8>(r0 + 0x170fu) = u8(r1);  // (from the original)
    *gptr<u32>(r0 + 0x15d0u) = 0xa0280a;  // (from the original)
    *gptr<u8>(r0 + 0x1765u) = u8(r1);  // (from the original)
    r4 = 0u;
    r5_8 = r0 + 0x1700u;  // (from the original)
    *gptr<u32>(r14 + r0) = r4;
    r5_9 = r5_8 + 0x66u;  // (from the original)
    r7_7 = r0 + 0x1000u;  // (from the original)
    r7_8 = r7_7 + 0x5e0u;  // (from the original)
    *gptr<u8>(r5_9) = u8(r1);
    r5 = 1u;
    r8_1 = r0 + 0x1700u;  // (from the original)
    *gptr<u32>(r7_8) = r5;
    r8_2 = r8_1 + 0x69u;  // (from the original)
    r9_5 = r0 + 0x1400u;  // (from the original)
    *gptr<u8>(r8_2) = u8(r1);
    r9_6 = r9_5 + 0x1d8u;  // (from the original)
    r10_4 = r0 + 0x1700u;  // (from the original)
    *gptr<u32>(r9_6) = 0x88000400;  // (from the original)
    r10_5 = r10_4 + 0x67u;  // (from the original)
    r2_9 = r0 + 0x1400u;  // (from the original)
    *gptr<u8>(r10_5) = u8(r1);
    r2_10 = r2_9 + 0x1dcu;  // (from the original)
    r11_2 = ~0u;
    r3_4 = r0 + 0x1400u;  // (from the original)
    *gptr<u32>(r2_10) = r11_2;
    r3_5 = r3_4 + 0x368u;  // (from the original)
    r12_3 = r0 + 0x1400u;  // (from the original)
    r12_4 = r12_3 + 0x1e8u;  // (from the original)
    *gptr<u8>(r3_5) = u8(r1);
    r14 = r0 + 0x1700u;  // (from the original)
    r14 += 0x6bu;  // (from the original)
    r6_6 = r0 + 0x1400u;  // (from the original)
    *gptr<u32>(r12_4) = r4;
    r6_7 = r6_6 + 0x1ecu;  // (from the original)
    r7_9 = r0 + 0x1400u;  // (from the original)
    r7_10 = r7_9 + 0x36cu;  // (from the original)
    *gptr<u8>(r14) = u8(r1);
    *gptr<u32>(r6_7) = r4;
    *gptr<u8>(r7_10) = u8(r1);
    r8_3 = r0 + 0x1400u;  // (from the original)
    r8_4 = r8_3 + 0x1e4u;  // (from the original)
    r9_7 = r0 + 0x1700u;  // (from the original)
    r9_8 = r9_7 + 0x6au;  // (from the original)
    r10_6 = r0 + 0x1000u;  // (from the original)
    *gptr<u32>(r8_4) = 0x2222222;  // (from the original)
    r10_7 = r10_6 + 0x5f0u;  // (from the original)
    *gptr<u8>(r9_8) = u8(r1);
    *gptr<u32>(r10_7) = r4;
    *gptr<u8>(r0 + 0x176du) = u8(r1);  // (from the original)
    *gptr<u32>(r0 + 0x1440u) = r4;  // (from the original)
    r14 = 0x1444u;  // (from the original)
    *gptr<u8>(r0 + 0x1701u) = u8(r1);  // (from the original)
    *gptr<u32>(r14 + r0) = r4;
    r11 = gpu_depth_mode_address;
    r12_5 = r14 + (r5 << 2);
    r14 = 0x1703u;  // (from the original)
    r2_11 = r12_5 + 0xcu;  // (from the original)
    *gptr<u8>(r0 + 0x1702u) = u8(r1);  // (from the original)
    *gptr<u32>(r12_5 + r0) = 0x3c00;  // (from the original)
    *gptr<u8>(r14 + r0) = u8(r1);
    r3_6 = r14 ^ u32(s32(r2_11) >> 0xa);  // (from the original)
    *gptr<u32>(r2_11 + r0) = r4;
    r12_6 = r2_11 + 4u;
    *gptr<u8>(r3_6 + r0) = u8(r1);
    r14 = r3_6 | u32(s32(r2_11) >> 0xa);  // (from the original)
    *gptr<u32>(r12_6 + r0) = r4;
    r6_8 = r2_11 + 8u;
    r2_12 = r2_11 + 0x2b4u;  // (from the original)
    *gptr<u8>(r14 + r0) = u8(r1);
    *gptr<u32>(r6_8 + r0) = 0x100;  // (from the original)
    *gptr<u8>(r2_12 + r0) = u8(r1);
    *gptr<u32>(r0 + 0x1460u) = 0xa00;  // (from the original)
    r14 = 7u;
    *gptr<u8>(r0 + 0x1709u) = u8(r14);  // (from the original)
    *gptr<u32>(r0 + 0x144cu) = 0x3c00;  // (from the original)
    r14 = 0x1464u;  // (from the original)
    *gptr<u8>(r0 + 0x1704u) = u8(r1);  // (from the original)
    r6_9 = 0x1704u ^ u32(s32(0xe40100u) >> 0x14);  // (from the original)
    *gptr<u32>(r14 + r0) = 0xe40100;  // (from the original)
    *gptr<u8>(r6_9 + r0) = 0xd;  // (from the original)
    *gptr<u32>(r0 + 0x1468u) = 0x10;  // (from the original)
    r7 = 0xeee0eeeu;  // (from the original)
    r2_13 = 0x1704u ^ u32(s32(0x3c00u) >> 0xa);  // (from the original)
    r3_7 = r0 + 0x1000u;  // (from the original)
    r12_7 = r0 + 0x1600u;  // (from the original)
    *gptr<u8>(r2_13 + r0) = u8(r1);
    r2 = 0u;
    r14 = 0x1eu;  // (from the original)
    r3 = r3_7 + 0x3c8u;  // (from the original)
    r12 = r12_7 + 0xe3u;  // (from the original)
    r6 = r7 | u32(s32(r7) >> 1);
    goto L_126eac;
L_126c64:;
    r2 = 0x3f000u;  // (from the original)
    r14 = r0 + (r12 << 2);
    r3_8 = r0 + r12;
    r14 += 0x1000u;  // (from the original)
    r3_9 = r3_8 + 0x1600u;  // (from the original)
    r3_10 = r3_9 + 0xb1u;  // (from the original)
    *gptr<u32>(r14 + 0x300u) = r2;  // (from the original)
    *gptr<u8>(r3_10) = u8(r1);
    guest::preempt();
    goto L_126a7c;
L_126c88:;
    r3_11 = r0 + (r12 << 2);
    r14 = r0 + r12;
    r3_12 = r3_11 + 0x1000u;  // (from the original)
    r14 += 0x1600u;  // (from the original)
    r14 += 0xb1u;  // (from the original)
    *gptr<u32>(r3_12 + 0x300u) = 0x3c00;  // (from the original)
    *gptr<u8>(r14) = u8(r1);
    guest::preempt();
    goto L_126a7c;
L_126cac:;
    r2 = 0x800u;  // (from the original)
    r14 = r0 + (r12 << 2);
    r3_8 = r0 + r12;
    r14 += 0x1000u;  // (from the original)
    r3_9 = r3_8 + 0x1600u;  // (from the original)
    r3_10 = r3_9 + 0xb1u;  // (from the original)
    *gptr<u32>(r14 + 0x300u) = r2;  // (from the original)
    *gptr<u8>(r3_10) = u8(r1);
    guest::preempt();
    goto L_126a7c;
L_126cb4:;
    r14 = r0 + (r12 << 2);
    r3_13 = r0 + r12;
    r14 += 0x1000u;  // (from the original)
    r3_14 = r3_13 + 0x1600u;  // (from the original)
    r3_15 = r3_14 + 0xb1u;  // (from the original)
    *gptr<u32>(r14 + 0x300u) = 1;  // (from the original)
    *gptr<u8>(r3_15) = u8(r1);
    guest::preempt();
    goto L_126a7c;
L_126d08:;
    res_8 = r14 - 1u;
    zf_38 = res_8 == 0;
    r14 = res_8;
    r3 += 4u;
    r12 += 1u;
    r2 += 1u;
    if (!zf_38) {
        if (r2 == 0) {
            goto L_126eac;
        }
        if (r2 == 5u || r2 == 0xau) {  // (from the original)
            *gptr<u32>(r3) = r6;
            *gptr<u8>(r12) = u8(r1);
            guest::preempt();
            goto L_126d08;
        }
        if (r2 == 0xfu || r2 == 0x14u) {  // (from the original)
            *gptr<u32>(r3) = r6;
            *gptr<u8>(r12) = u8(r1);
            guest::preempt();
            goto L_126d08;
        }
        if (r2 == 0x19u) {  // (from the original)
            *gptr<u32>(r3) = r6;
            *gptr<u8>(r12) = u8(r1);
            guest::preempt();
            goto L_126d08;
        } else {
            *gptr<u32>(r3) = r4;
            *gptr<u8>(r12) = u8(r1);
        }
        guest::preempt();
        goto L_126d08;
    }
    *gptr<u32>(r0 + 0x1450u) = r4;  // (from the original)
    *gptr<u8>(r0 + 0x1705u) = u8(r1);  // (from the original)
    r1_5 = r0 + 0x1300u;  // (from the original)
    r0_2 = r0 + 0x1000u;  // (from the original)
    r0_3 = r0_2 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    copy_aligned_bytes(r0_3, r1_5, 0x2f4u, 0x1705u);  // (from the original)
    r0_4 = *gptr<u32>(r11 + 8u);
    r1_6 = r0_4 + 0x1600u;  // (from the original)
    r0_5 = r0_4 + 0x1400u;  // (from the original)
    r1_7 = r1_6 + 0xb1u;  // (from the original)
    r0_6 = r0_5 + 0x1f4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    copy_bytes_at_any_alignment(r0_6, r1_7, 0xbdu);  // (from the original)
    r14 = global_00ae80f8_address;
    r2 = global_0097d480_address;
    r0 = 0u;
    *gptr<u32>(r14 + 0x104u) = r4;  // (from the original)
    *gptr<u32>(r14 + 0x108u) = r4;  // (from the original)
    *gptr<u32>(r14 + 0x10cu) = r4;  // (from the original)
    *gptr<u32>(r14 + 0x110u) = r4;  // (from the original)
    *gptr<u32>(r14 + 0x114u) = r4;  // (from the original)
    *gptr<u32>(r14 + 0x118u) = r4;  // (from the original)
    r1_8 = *gptr<u32>(r2);
    zf_43 = r1_8 == 0xbdu;  // (from the original)
    if (!zf_43) {
        r3 = r14 + 0x104u;  // (from the original)
        do {
            u32 r12_8 = gptr<u32>(r2)[r0];
            r0 += 1u;
            u32 r1_9 = s32(r12_8) >> 5;
            *gptr<u32>(r3 + (r1_9 << 2)) = gptr<u32>(r3)[r1_9] | (r5 << (r12_8 & 0x1fu));  // (from the original)
            zf_44 = gptr<u32>(r2)[r0] == 0xbdu;  // (from the original)
            guest::preempt();
        } while (!zf_44);
    }
    *gptr<u32>(r14 + 0x11cu) = r4;  // (from the original)
    *gptr<u32>(r14 + 0x120u) = r4;  // (from the original)
    r12 = global_0097d4e0_address;
    *gptr<u32>(r14 + 0x124u) = r4;  // (from the original)
    *gptr<u32>(r14 + 0x128u) = r4;  // (from the original)
    *gptr<u32>(r14 + 0x12cu) = r4;  // (from the original)
    *gptr<u32>(r14 + 0x130u) = r4;  // (from the original)
    r2_14 = *gptr<u32>(r12);
    r0 = global_00ae8214_address;
    r1 = 0u;
    zf_45 = r2_14 == 0xbdu;  // (from the original)
    if (!zf_45) {
        do {
            u32 r3_17 = gptr<u32>(r12)[r1];
            r1 += 1u;
            u32 r2_15 = s32(r3_17) >> 5;
            *gptr<u32>(r0 + (r2_15 << 2)) = gptr<u32>(r0)[r2_15] | (r5 << (r3_17 & 0x1fu));  // (from the original)
            zf_46 = gptr<u32>(r12)[r1] == 0xbdu;  // (from the original)
            guest::preempt();
        } while (!zf_46);
    }
    r2 = global_0097d4f8_address;
    r1 = 0u;
    r3_20 = *gptr<u32>(r2);
    zf_47 = r3_20 == 0xbdu;  // (from the original)
    if (!zf_47) {
        do {
            u32 r12_11 = gptr<u32>(r2)[r1];
            r1 += 1u;
            u32 r3_21 = s32(r12_11) >> 5;
            *gptr<u32>(r0 + (r3_21 << 2)) = gptr<u32>(r0)[r3_21] | (r5 << (r12_11 & 0x1fu));  // (from the original)
            zf_48 = gptr<u32>(r2)[r1] == 0xbdu;  // (from the original)
            guest::preempt();
        } while (!zf_48);
    }
    *gptr<u32>(r14 + 0x134u) = r4;  // (from the original)
    *gptr<u32>(r14 + 0x138u) = r4;  // (from the original)
    r1 = global_0097d510_address;
    *gptr<u32>(r14 + 0x13cu) = r4;  // (from the original)
    *gptr<u32>(r14 + 0x140u) = r4;  // (from the original)
    *gptr<u32>(r14 + 0x144u) = r4;  // (from the original)
    *gptr<u32>(r14 + 0x148u) = r4;  // (from the original)
    r2_17 = *gptr<u32>(r1);
    r0 = 0u;
    zf_49 = r2_17 == 0xbdu;  // (from the original)
    if (!zf_49) {
        r2 = global_00ae822c_address;
        do {
            u32 r3_23 = gptr<u32>(r1)[r0];
            r0 += 1u;
            u32 r12_14 = s32(r3_23) >> 5;
            r14 = gptr<u32>(r2)[r12_14];
            *gptr<u32>(r2 + (r12_14 << 2)) = r14 | (r5 << (r3_23 & 0x1fu));  // (from the original)
            zf_50 = gptr<u32>(r1)[r0] == 0xbdu;  // (from the original)
            guest::preempt();
        } while (!zf_50);
    }
    r0_7 = *gptr<u32>(r13);
    r13 += 0x28;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_7;
L_126eac:;
    *gptr<u32>(r3) = r7;
    *gptr<u8>(r12) = u8(r1);
    guest::preempt();
    goto L_126d08;
}

}  // namespace d_001266e8
GUEST_EXPORT(0x001266e8, d_001266e8::decompress_block_97d470);

// f_001275f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Initializes the service object at 0x974a88 and its four parts.
namespace d_001275f0 {

inline guest::global<u32, 0x00974a88> service_974a88;
inline constexpr guest::Function<0x0012da60, u32(u32)> store_word_constant_pack_0x0_0012da60;
inline constexpr guest::Function<0x0012da6c, u32(u32)> GpuFramebuffer__init;
inline constexpr guest::Function<0x0012db48, u32(u32, u32, u32, u32)> GpuState__set_depth_buffer_flags;
inline constexpr guest::Function<0x00134024, u32(u32)> GpuState__reset_tex_units;

u32 init_service_974a88(u32 r0) {
    *service_974a88 = r0;
    GpuState__set_depth_buffer_flags(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    store_word_constant_pack_0x0_0012da60(*service_974a88 + 4u);
    GpuState__reset_tex_units(*service_974a88 + 8u);
    GpuFramebuffer__init(*service_974a88 + 0xcu);  // (from the original)
    return 0u;
}

}  // namespace d_001275f0
GUEST_EXPORT_FRAMED(0x001275f0, d_001275f0::init_service_974a88, 0x4010);  // pushes {r4, lr} first, as the original

// f_00127c70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// 0x3000000.
namespace d_00127c70 {


u32 return_constant_0x3000000() {
    return 0x3000000u;  // (from the original)
}

}  // namespace d_00127c70
GUEST_EXPORT(0x00127c70, d_00127c70::return_constant_0x3000000);

// f_00127db8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00127db8 {

struct __attribute__((packed)) Local_00127db8_ea_12 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00127db8_ea_12, word_0, 0x0);
GUEST_OFFSET(Local_00127db8_ea_12, word_4, 0x4);

struct __attribute__((packed)) Local_00127db8_ea_22 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_00127db8_ea_22, float_0, 0x0);
GUEST_OFFSET(Local_00127db8_ea_22, float_4, 0x4);

struct __attribute__((packed)) Local_00127db8_ea_37 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00127db8_ea_37, word_0, 0x0);
GUEST_OFFSET(Local_00127db8_ea_37, word_4, 0x4);

struct __attribute__((packed)) Local_00127db8_ea_38 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00127db8_ea_38, word_0, 0x0);
GUEST_OFFSET(Local_00127db8_ea_38, word_4, 0x4);

struct __attribute__((packed)) Local_00127db8_ea_39 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00127db8_ea_39, word_0, 0x0);
GUEST_OFFSET(Local_00127db8_ea_39, word_4, 0x4);

struct __attribute__((packed)) Local_00127db8_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00127db8_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_00127db8_ea_4, word_4, 0x4);

struct __attribute__((packed)) Local_00127db8_ea_8 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00127db8_ea_8, word_0, 0x0);
GUEST_OFFSET(Local_00127db8_ea_8, word_4, 0x4);

struct __attribute__((packed)) Local_00127db8_r0_5 {
    u8 unknown_0[0x1bc];  // (not used here)
    float float_1bc;
    float float_1c0;
    u8 unknown_1c4[0x4];  // (not used here)
    float float_1c8;
    float float_1cc;
    u8 unknown_1d0[0x10];  // (not used here)
    float float_1e0;
    float float_1e4;
    u8 unknown_1e8[0x4];  // (not used here)
    float float_1ec;
    float float_1f0;
    u8 unknown_1f4[0x10];  // (not used here)
    float float_204;
    float float_208;
    u8 unknown_20c[0x4];  // (not used here)
    float float_210;
    float float_214;
    u8 unknown_218[0x64];  // (not used here)
    float float_27c;
    float float_280;
    float float_284;
    u8 unknown_288[0x8];  // (not used here)
    float float_290;
    float float_294;
    float float_298;
};
GUEST_OFFSET(Local_00127db8_r0_5, float_1bc, 0x1bc);
GUEST_OFFSET(Local_00127db8_r0_5, float_1c0, 0x1c0);
GUEST_OFFSET(Local_00127db8_r0_5, float_1c8, 0x1c8);
GUEST_OFFSET(Local_00127db8_r0_5, float_1cc, 0x1cc);
GUEST_OFFSET(Local_00127db8_r0_5, float_1e0, 0x1e0);
GUEST_OFFSET(Local_00127db8_r0_5, float_1e4, 0x1e4);
GUEST_OFFSET(Local_00127db8_r0_5, float_1ec, 0x1ec);
GUEST_OFFSET(Local_00127db8_r0_5, float_1f0, 0x1f0);
GUEST_OFFSET(Local_00127db8_r0_5, float_204, 0x204);
GUEST_OFFSET(Local_00127db8_r0_5, float_208, 0x208);
GUEST_OFFSET(Local_00127db8_r0_5, float_210, 0x210);
GUEST_OFFSET(Local_00127db8_r0_5, float_214, 0x214);
GUEST_OFFSET(Local_00127db8_r0_5, float_27c, 0x27c);
GUEST_OFFSET(Local_00127db8_r0_5, float_280, 0x280);
GUEST_OFFSET(Local_00127db8_r0_5, float_284, 0x284);
GUEST_OFFSET(Local_00127db8_r0_5, float_290, 0x290);
GUEST_OFFSET(Local_00127db8_r0_5, float_294, 0x294);
GUEST_OFFSET(Local_00127db8_r0_5, float_298, 0x298);

struct __attribute__((packed)) Local_00127db8_r2_1 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_00127db8_r2_1, float_0, 0x0);
GUEST_OFFSET(Local_00127db8_r2_1, float_4, 0x4);

struct __attribute__((packed)) Local_00127db8_r3_1 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_00127db8_r3_1, float_0, 0x0);
GUEST_OFFSET(Local_00127db8_r3_1, float_4, 0x4);

struct __attribute__((packed)) Local_00127db8_r3_2 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_00127db8_r3_2, float_0, 0x0);
GUEST_OFFSET(Local_00127db8_r3_2, float_4, 0x4);

struct __attribute__((packed)) Local_00127db8_r3_3 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_00127db8_r3_3, float_0, 0x0);
GUEST_OFFSET(Local_00127db8_r3_3, float_4, 0x4);

inline constexpr u32 vtable_SoundFader_rec = 0x008eb474u;
inline constexpr u32 vtable_SoundFxMgr = 0x008eb490u;
inline constexpr u32 global_00ae0fd4_address = 0x00ae0fd4u;
inline constexpr guest::Function<0x00131b3c, u32(u32, u32, u32, u32)> SoundFxMgr__construct_parts;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;

u32 SoundFxMgr__SoundFxMgr(gptr<SoundFxMgr> sound_fx_mgr, u32 r1_unused, u32 r2, u32 r3, float S0, float S1, float S2) {
    u32 r5_1 = ~0u;
    sound_fx_mgr->word_4 = 0;
    sound_fx_mgr->vtable = vtable_SoundFxMgr;
    sound_fx_mgr->word_8 = 0;
    sound_fx_mgr->word_c = 0;
    sound_fx_mgr->word_10 = r5_1;
    u32 r0_2 = SoundFxMgr__construct_parts(sound_fx_mgr.addr() + 0x14u, vtable_SoundFxMgr, r2, r3);  // (from the original)
    u32 ea_1 = r0_2 + 0x2cu;  // (from the original)
    *gptr<u32>(ea_1) = 0;
    u32 r0_4 = for_each_element(ea_1 + 4u, 0x131694u, 0x20u, 0xau);  // (from the original)
    gptr<Local_00127db8_r0_5> r0_5 = gptr<Local_00127db8_r0_5>(r0_4 - 0x44u);  // (from the original)
    *gptr<u8>(r0_5.addr() + 0x184u) = 0;  // (from the original)
    *gptr<u32>(r0_5.addr() + 0x1b8u) = 0x64;  // (from the original)
    gptr<Local_00127db8_ea_4> ea_4 = gptr<Local_00127db8_ea_4>(r0_5.addr() + 0x1b0u);  // (from the original)
    ea_4->word_0 = 0x3c;  // (from the original)
    ea_4->word_4 = 0xfa0;  // (from the original)
    float S1_2 = 0.5f;
    float S0_2 = 0.4f;
    r0_5->float_1bc = S1_2;
    float S2_2 = 0.6f;
    r0_5->float_1c0 = S0_2;
    *gptr<u32>(r0_5.addr() + 0x1c4u) = 0xae0fd4;  // (from the original)
    r0_5->float_1c8 = S2_2;
    r0_5->float_1cc = S0_2;
    *gptr<u8>(r0_5.addr() + 0x1d0u) = 0;  // (from the original)
    *gptr<u32>(r0_5.addr() + 0x1dcu) = 0x64;  // (from the original)
    gptr<Local_00127db8_ea_8> ea_8 = gptr<Local_00127db8_ea_8>(r0_5.addr() + 0x1d4u);  // (from the original)
    ea_8->word_0 = 0x3c;  // (from the original)
    ea_8->word_4 = 0xfa0;  // (from the original)
    r0_5->float_1e0 = S1_2;
    r0_5->float_1e4 = S0_2;
    *gptr<u32>(r0_5.addr() + 0x1e8u) = 0xae0fd4;  // (from the original)
    r0_5->float_1ec = S2_2;
    r0_5->float_1f0 = S0_2;
    *gptr<u8>(r0_5.addr() + 0x1f4u) = 0;  // (from the original)
    *gptr<u32>(r0_5.addr() + 0x200u) = 0x64;  // (from the original)
    gptr<Local_00127db8_ea_12> ea_12 = gptr<Local_00127db8_ea_12>(r0_5.addr() + 0x1f8u);  // (from the original)
    ea_12->word_0 = 0x3c;  // (from the original)
    ea_12->word_4 = 0xfa0;  // (from the original)
    gptr<Local_00127db8_r3_1> r3_1 = gptr<Local_00127db8_r3_1>(r0_5.addr() + 0x220u);  // (from the original)
    r0_5->float_204 = S1_2;
    r0_5->float_208 = S0_2;
    *gptr<u32>(r0_5.addr() + 0x20cu) = 0xae0fd4;  // (from the original)
    r0_5->float_210 = S2_2;
    r0_5->float_214 = S0_2;
    *gptr<u8>(r0_5.addr() + 0x218u) = 0;  // (from the original)
    *gptr<u32>(r0_5.addr() + 0x21cu) = 0xfa;  // (from the original)
    r3_1->float_0 = S0_2;
    r3_1->float_4 = S1_2;
    gptr<Local_00127db8_r3_2> r3_2 = gptr<Local_00127db8_r3_2>(r0_5.addr() + 0x230u);  // (from the original)
    *gptr<u8>(r0_5.addr() + 0x228u) = 0;  // (from the original)
    *gptr<u32>(r0_5.addr() + 0x22cu) = 0xfa;  // (from the original)
    r3_2->float_0 = S0_2;
    r3_2->float_4 = S1_2;
    gptr<Local_00127db8_r3_3> r3_3 = gptr<Local_00127db8_r3_3>(r0_5.addr() + 0x240u);  // (from the original)
    *gptr<u8>(r0_5.addr() + 0x238u) = 0;  // (from the original)
    *gptr<u32>(r0_5.addr() + 0x23cu) = 0xfa;  // (from the original)
    r3_3->float_0 = S0_2;
    r3_3->float_4 = S1_2;
    *gptr<u8>(r0_5.addr() + 0x248u) = 0;  // (from the original)
    *gptr<u32>(r0_5.addr() + 0x24cu) = 0xfa;  // (from the original)
    gptr<Local_00127db8_ea_22> ea_22 = gptr<Local_00127db8_ea_22>(r0_5.addr() + 0x250u);  // (from the original)
    ea_22->float_0 = S0_2;
    ea_22->float_4 = S1_2;
    *gptr<u8>(r0_5.addr() + 0x258u) = 0;  // (from the original)
    *gptr<u32>(r0_5.addr() + 0x25cu) = 0xfa;  // (from the original)
    gptr<Local_00127db8_r2_1> r2_1 = gptr<Local_00127db8_r2_1>(r0_5.addr() + 0x260u);  // (from the original)
    r2_1->float_0 = S0_2;
    r2_1->float_4 = S1_2;
    *gptr<u8>(r0_5.addr() + 0x268u) = 0;  // (from the original)
    *gptr<u32>(r0_5.addr() + 0x270u) = 0;  // (from the original)
    *gptr<u32>(r0_5.addr() + 0x26cu) = r5_1;  // (from the original)
    float S0_3 = 0.0f;
    *gptr<u32>(r0_5.addr() + 0x278u) = vtable_SoundFader_rec;  // (from the original)
    *gptr<u32>(r0_5.addr() + 0x274u) = 0;  // (from the original)
    r0_5->float_27c = S0_3;
    r0_5->float_280 = S0_3;
    r0_5->float_284 = S0_3;
    *gptr<u32>(r0_5.addr() + 0x28cu) = vtable_SoundFader_rec;  // (from the original)
    *gptr<u32>(r0_5.addr() + 0x288u) = r5_1;  // (from the original)
    r0_5->float_290 = S0_3;
    r0_5->float_294 = S0_3;
    r0_5->float_298 = S0_3;
    *gptr<u32>(r0_5.addr() + 0x29cu) = r5_1;  // (from the original)
    u32 r2_2 = r0_5.addr() + 0x21cu;  // (from the original)
    *gptr<u32>(r0_5.addr() + 0x194u) = r2_2;  // (from the original)
    *gptr<u32>(r0_5.addr() + 0x190u) = r0_5.addr() + 0x1f8u;  // (from the original)
    *gptr<u32>(r0_5.addr() + 0x18cu) = r0_5.addr() + 0x1d4u;  // (from the original)
    *gptr<u32>(r0_5.addr() + 0x188u) = r0_5.addr() + 0x1b0u;  // (from the original)
    gptr<Local_00127db8_ea_37> ea_37 = gptr<Local_00127db8_ea_37>(r0_5.addr() + 0x198u);  // (from the original)
    ea_37->word_0 = r2_2;
    ea_37->word_4 = r0_5.addr() + 0x22cu;  // (from the original)
    gptr<Local_00127db8_ea_38> ea_38 = gptr<Local_00127db8_ea_38>(r0_5.addr() + 0x1a0u);  // (from the original)
    ea_38->word_0 = r2_2;
    ea_38->word_4 = r0_5.addr() + 0x23cu;  // (from the original)
    gptr<Local_00127db8_ea_39> ea_39 = gptr<Local_00127db8_ea_39>(r0_5.addr() + 0x1a8u);  // (from the original)
    ea_39->word_0 = r0_5.addr() + 0x24cu;  // (from the original)
    ea_39->word_4 = r0_5.addr() + 0x25cu;  // (from the original)
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_2;
    return r0_5.addr();
}

}  // namespace d_00127db8
GUEST_EXPORT_FRAMED(0x00127db8, d_00127db8::SoundFxMgr__SoundFxMgr, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_001282dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001282dc {

inline constexpr u32 vtable_SoundMelodyMgr = 0x008ef740u;
inline guest::global<u32, 0x0083b146> global_0083b146;
inline guest::global<u32, 0x0083b14a> global_0083b14a;
inline guest::global<u32, 0x0083b14e> global_0083b14e;
inline guest::global<u32, 0x0083b152> global_0083b152;
inline constexpr guest::Function<0x0012ec48, u32(u32)> SoundMelodyPlayerBase__SoundMelodyPlayerBase;
inline constexpr guest::Function<0x0013121c, u32(u32)> SoundMelodyPlayerOneSeqTimeTone__SoundMelodyPlayerOneSeqTimeTone;
inline constexpr guest::Function<0x00135134, u32(u32)> SoundMelodyPlayerOneSeqBase__SoundMelodyPlayerOneSeqBase;

u32 SoundMelodyMgr__SoundMelodyMgr(gptr<SoundMelodyMgr> sound_melody_mgr) {
    sound_melody_mgr->word_4 = 0;
    sound_melody_mgr->vtable = vtable_SoundMelodyMgr;
    sound_melody_mgr->word_8 = 0;
    u32 sound_melody_player_base = sound_melody_mgr.addr() + 0xcu;  // (from the original)
    SoundMelodyPlayerBase__SoundMelodyPlayerBase(sound_melody_player_base);
    SoundMelodyPlayerOneSeqBase__SoundMelodyPlayerOneSeqBase(sound_melody_player_base + 0x4cu);  // (from the original)
    SoundMelodyPlayerOneSeqTimeTone__SoundMelodyPlayerOneSeqTimeTone(sound_melody_player_base + 0x60u);  // (from the original)
    sound_melody_mgr->word_bc = 0;
    sound_melody_mgr->word_c0 = 0;
    sound_melody_mgr->word_c4 = 0;
    sound_melody_mgr->word_ac = *global_0083b146;
    sound_melody_mgr->word_b0 = *global_0083b14a;
    sound_melody_mgr->word_b4 = *global_0083b14e;
    u32 r1_1 = *global_0083b152;
    sound_melody_mgr->word_b8 = r1_1;
    guest::cpu()->r[1] = r1_1;
    return sound_melody_player_base - 0xcu;  // (from the original)
}

}  // namespace d_001282dc
GUEST_EXPORT_FRAMED(0x001282dc, d_001282dc::SoundMelodyMgr__SoundMelodyMgr, 0x4010);  // pushes {r4, lr} first, as the original

// f_001285a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001285a4 {

inline constexpr u32 vtable_SoundSharedObjMgr = 0x008f2d14u;

void SoundSharedObjMgr__SoundSharedObjMgr(gptr<SoundSharedObjMgr> sound_shared_obj_mgr) {
    sound_shared_obj_mgr->word_4 = 0;
    sound_shared_obj_mgr->word_8 = 0;
    sound_shared_obj_mgr->vtable = vtable_SoundSharedObjMgr;
    sound_shared_obj_mgr->byte_c = 0;
    sound_shared_obj_mgr->byte_d = 0;
}

}  // namespace d_001285a4
GUEST_EXPORT(0x001285a4, d_001285a4::SoundSharedObjMgr__SoundSharedObjMgr);

// f_00128608: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00128608 {

struct __attribute__((packed)) Local_00128608_ea_23 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00128608_ea_23, word_0, 0x0);
GUEST_OFFSET(Local_00128608_ea_23, word_4, 0x4);

struct __attribute__((packed)) Local_00128608_ea_5 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00128608_ea_5, word_0, 0x0);
GUEST_OFFSET(Local_00128608_ea_5, word_4, 0x4);

struct __attribute__((packed)) Local_00128608_ea_7 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00128608_ea_7, word_0, 0x0);
GUEST_OFFSET(Local_00128608_ea_7, word_4, 0x4);

struct __attribute__((packed)) Local_00128608_r0_3 {
    u8 unknown_0[0x60];  // (not used here)
    u32 word_60;
    u32 word_64;
    u32 word_68;
    u8 byte_6c;
    u8 unknown_6d[0xb];  // (not used here)
    float float_78;
    u8 unknown_7c[0x8];  // (not used here)
    u32 word_84;
    u8 unknown_88[0x4];  // (not used here)
    u32 word_8c;
    u8 byte_90;
    u8 byte_91;
    u8 unknown_92[0x2];  // (not used here)
    u32 word_94;
    u32 word_98;
    u8 unknown_9c[0xc];  // (not used here)
    u32 word_a8;
    float float_ac;
    u32 word_b0;
    u32 word_b4;
    u32 word_b8;
    u32 word_bc;
    u32 word_c0;
};
GUEST_OFFSET(Local_00128608_r0_3, word_60, 0x60);
GUEST_OFFSET(Local_00128608_r0_3, word_64, 0x64);
GUEST_OFFSET(Local_00128608_r0_3, word_68, 0x68);
GUEST_OFFSET(Local_00128608_r0_3, byte_6c, 0x6c);
GUEST_OFFSET(Local_00128608_r0_3, float_78, 0x78);
GUEST_OFFSET(Local_00128608_r0_3, word_84, 0x84);
GUEST_OFFSET(Local_00128608_r0_3, word_8c, 0x8c);
GUEST_OFFSET(Local_00128608_r0_3, byte_90, 0x90);
GUEST_OFFSET(Local_00128608_r0_3, byte_91, 0x91);
GUEST_OFFSET(Local_00128608_r0_3, word_94, 0x94);
GUEST_OFFSET(Local_00128608_r0_3, word_98, 0x98);
GUEST_OFFSET(Local_00128608_r0_3, word_a8, 0xa8);
GUEST_OFFSET(Local_00128608_r0_3, float_ac, 0xac);
GUEST_OFFSET(Local_00128608_r0_3, word_b0, 0xb0);
GUEST_OFFSET(Local_00128608_r0_3, word_b4, 0xb4);
GUEST_OFFSET(Local_00128608_r0_3, word_b8, 0xb8);
GUEST_OFFSET(Local_00128608_r0_3, word_bc, 0xbc);
GUEST_OFFSET(Local_00128608_r0_3, word_c0, 0xc0);

struct __attribute__((packed)) Local_00128608_r0_5 {
    u8 unknown_0[0x24];  // (not used here)
    u8 byte_24;
    u8 byte_25;
    u8 byte_26;
    u8 byte_27;
};
GUEST_OFFSET(Local_00128608_r0_5, byte_24, 0x24);
GUEST_OFFSET(Local_00128608_r0_5, byte_25, 0x25);
GUEST_OFFSET(Local_00128608_r0_5, byte_26, 0x26);
GUEST_OFFSET(Local_00128608_r0_5, byte_27, 0x27);

struct __attribute__((packed)) Local_00128608_r1_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00128608_r1_1, word_0, 0x0);
GUEST_OFFSET(Local_00128608_r1_1, word_4, 0x4);

struct __attribute__((packed)) Local_00128608_r4_1 {
    u8 unknown_0[0x70];  // (not used here)
    u32 word_70;
    u8 unknown_74[0xc];  // (not used here)
    float float_80;
    u8 unknown_84[0x4];  // (not used here)
    u32 word_88;
};
GUEST_OFFSET(Local_00128608_r4_1, word_70, 0x70);
GUEST_OFFSET(Local_00128608_r4_1, float_80, 0x80);
GUEST_OFFSET(Local_00128608_r4_1, word_88, 0x88);

struct __attribute__((packed)) Local_00128608_r5_1 {
    u8 unknown_0[0x21];  // (not used here)
    u8 byte_21;
};
GUEST_OFFSET(Local_00128608_r5_1, byte_21, 0x21);

inline constexpr u32 vtable_SoundDoubutsugoMgr = 0x008f39fcu;
inline constexpr u32 global_0094cd34_address = 0x0094cd34u;
inline constexpr guest::Function<0x0012ea28, u32(u32)> SoundObj__restart_fade;
inline constexpr guest::Function<0x0013366c, u32(u32)> store_constants_13366c_0013366c;
inline constexpr guest::Function<0x002f86c0, u32(u32, u32)> udiv;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;

u32 SoundDoubutsugoMgr__SoundDoubutsugoMgr(gptr<SoundDoubutsugoMgr> sound_doubutsugo_mgr, float S0, float S1, float S2) {
    sound_doubutsugo_mgr->word_4 = 0;
    sound_doubutsugo_mgr->vtable = vtable_SoundDoubutsugoMgr;
    sound_doubutsugo_mgr->word_8 = 0;
    u32 r0_2 = for_each_element(sound_doubutsugo_mgr.addr() + 0xcu, 0x131800u, 4u, 3u);  // (from the original)
    gptr<Local_00128608_r0_3> r0_3 = gptr<Local_00128608_r0_3>(r0_2 - 0xcu);  // (from the original)
    *gptr<u32>(r0_3.addr() + 0x18u) = 0;  // (from the original)
    *gptr<u32>(r0_3.addr() + 0x1cu) = 0;  // (from the original)
    *gptr<u32>(r0_3.addr() + 0x20u) = 0;  // (from the original)
    *gptr<u32>(r0_3.addr() + 0x24u) = 0;  // (from the original)
    gptr<Local_00128608_ea_5> ea_5 = gptr<Local_00128608_ea_5>(r0_3.addr() + 0x28u);  // (from the original)
    ea_5->word_0 = 5;
    ea_5->word_4 = 2;
    *gptr<u8>(r0_3.addr() + 0x30u) = 1;  // (from the original)
    gptr<Local_00128608_ea_7> ea_7 = gptr<Local_00128608_ea_7>(r0_3.addr() + 0x58u);  // (from the original)
    ea_7->word_0 = 0;
    ea_7->word_4 = 1;
    r0_3->word_60 = 0;
    r0_3->word_64 = 0;
    float S0_1 = 1.0f;
    r0_3->word_68 = 0;
    r0_3->byte_6c = 0;
    r0_3->float_78 = S0_1;
    r0_3->word_84 = 0;
    r0_3->word_8c = 0;
    r0_3->byte_90 = 0;
    r0_3->byte_91 = 0;
    r0_3->word_98 = 0x14;  // (from the original)
    r0_3->word_94 = 0;
    r0_3->word_a8 = 0;
    r0_3->float_ac = S0_1;
    r0_3->word_b0 = 0;
    r0_3->word_b4 = 0;
    r0_3->word_b8 = 0;
    r0_3->word_bc = 0;
    gptr<Local_00128608_r1_1> r1_1 = gptr<Local_00128608_r1_1>(r0_3.addr() + 0xb4u);  // (from the original)
    r0_3->word_c0 = 0;
    if (r0_3.addr() + 0xc4u != 0) {  // (from the original)
        r1_1->word_0 = r0_3.addr() + 0xc4u;  // (from the original)
        r1_1->word_4 = 3;
    }
    u32 r0_4 = r0_3.addr() + 0xd0u;  // (from the original)
    guest::cpu()->s[0] = S0_1;
    gptr<Local_00128608_r0_5> r0_5 = gptr<Local_00128608_r0_5>(for_each_element(r0_4, 0x131800u, 4u, 9u));  // (from the original)
    r0_5->byte_24 = 0;
    r0_5->byte_25 = 0;
    r0_5->byte_26 = 0;
    gptr<Local_00128608_r4_1> r4_1 = gptr<Local_00128608_r4_1>(r0_5.addr() - 0xd0u);  // (from the original)
    r0_5->byte_27 = 0;
    store_constants_13366c_0013366c(r0_5.addr() - 0x9eu);  // (from the original)
    *gptr<u32>(r4_1.addr() + 0x40u) = 0;  // (from the original)
    *gptr<u32>(r4_1.addr() + 0x44u) = 0;  // (from the original)
    *gptr<u32>(r4_1.addr() + 0x48u) = 0;  // (from the original)
    *gptr<u32>(r4_1.addr() + 0x4cu) = 0;  // (from the original)
    *gptr<u32>(r4_1.addr() + 0x50u) = 0;  // (from the original)
    *gptr<u32>(r4_1.addr() + 0x54u) = 0;  // (from the original)
    *gptr<u8>(r4_1.addr() + 0x9cu) = 1;  // (from the original)
    *gptr<u8>(r4_1.addr() + 0x9du) = 1;  // (from the original)
    *gptr<u8>(r4_1.addr() + 0x9eu) = 1;  // (from the original)
    *gptr<u8>(r4_1.addr() + 0x9fu) = 1;  // (from the original)
    *gptr<u8>(r4_1.addr() + 0xa0u) = 0;  // (from the original)
    *gptr<u8>(r4_1.addr() + 0xa1u) = 0;  // (from the original)
    *gptr<u8>(r4_1.addr() + 0xa2u) = 0;  // (from the original)
    *gptr<u8>(r4_1.addr() + 0xa3u) = 0;  // (from the original)
    *gptr<u8>(r4_1.addr() + 0xa4u) = 0;  // (from the original)
    gptr<Local_00128608_ea_23> ea_23 = gptr<Local_00128608_ea_23>(r4_1.addr() + 0x24u);  // (from the original)
    gptr<Local_00128608_r5_1> r5_1 = gptr<Local_00128608_r5_1>(gptr<u32>(ea_23->word_4 * 0x18u + global_0094cd34_address)[ea_23->word_0]);  // (from the original)
    r4_1->word_70 = r5_1.addr();
    u32 quotient = udiv(0xcu, u32(r5_1->byte_21) + 1u);  // (from the original)
    r4_1->word_88 = quotient;
    u32 r0_8 = r5_1->byte_21;
    float S2_3 = float(r0_8);
    float S0_3 = std::bit_cast<float>(r0_8 + 1u);
    float S0_4 = float(std::bit_cast<u32>(S0_3));
    float S1_3 = S2_3 * 12.0f;
    r4_1->float_80 = S0_4 / S1_3;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_3;
    SoundObj__restart_fade(r4_1.addr());
    return r4_1.addr();
}

}  // namespace d_00128608
GUEST_EXPORT_FRAMED(0x00128608, d_00128608::SoundDoubutsugoMgr__SoundDoubutsugoMgr, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00128804: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00128804 {

struct __attribute__((packed)) SoundConductor {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
    u8 unknown_14[0x4];  // (not used here)
    u8 byte_18;
    u8 byte_19;
    u8 unknown_1a[0x3a];  // (not used here)
    u8 byte_54;
    u8 unknown_55[0x19f];  // (not used here)
    u32 sound_conductor_vtable;
    u8 unknown_1f8[0x14];  // (not used here)
    u32 sound_handle_bind_seq_vtable;
};
GUEST_OFFSET(SoundConductor, word_10, 0x10);
GUEST_OFFSET(SoundConductor, byte_18, 0x18);
GUEST_OFFSET(SoundConductor, byte_19, 0x19);
GUEST_OFFSET(SoundConductor, byte_54, 0x54);
GUEST_OFFSET(SoundConductor, sound_conductor_vtable, 0x1f4);
GUEST_OFFSET(SoundConductor, sound_handle_bind_seq_vtable, 0x20c);

inline constexpr u32 vtable_SoundConductor = 0x008ef714u;
inline constexpr u32 vtable_SoundHandleBindSeq = 0x008f3a54u;
inline constexpr guest::Function<0x0012e904, u32(u32)> SoundSystemBgm__stop;
inline constexpr guest::Function<0x0012e968, u32(u32)> SoundHaniwaMgr__release;
inline constexpr guest::Function<0x0012ebf4, u32(u32, u32, u32, u32)> SoundSlot__release_request;
inline constexpr guest::Function<0x00130ed8, u32(u32, u32)> SoundHandle__detach;
inline constexpr guest::Function<0x00136cc8, u32(u32)> detach_from_parent;
inline constexpr guest::Function<0x00136e58, u32(u32, u32, u32, u32)> BasicSound__stop;

u32 SoundConductor__SoundConductor_00128804(gptr<SoundConductor> sound_conductor, u32 r1) {
    if (sound_conductor->byte_18 != 0) {
        u32 r0_1 = sound_conductor->word_10;
        if (r0_1 != 0) {
            BasicSound__stop(r0_1, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
            sound_conductor->byte_19 = 0;
        }
        SoundSlot__release_request(sound_conductor.addr(), 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
        SoundSystemBgm__stop(sound_conductor.addr() + 0x1f4u);  // (from the original)
        SoundHaniwaMgr__release(sound_conductor.addr() + 0x1f4u);  // (from the original)
        r1 = guest::cpu()->r[1];
        sound_conductor->byte_54 = 0;
        sound_conductor->byte_18 = 0;
    }
    sound_conductor->sound_conductor_vtable = vtable_SoundConductor;
    sound_conductor->sound_handle_bind_seq_vtable = vtable_SoundHandleBindSeq;
    SoundHandle__detach(sound_conductor.addr() + 0x214u, r1);  // (from the original)
    detach_from_parent(sound_conductor.addr() + 0x210u);  // (from the original)
    detach_from_parent(sound_conductor.addr() + 0x10u);  // (from the original)
    return sound_conductor.addr();
}

}  // namespace d_00128804
GUEST_EXPORT_FRAMED(0x00128804, d_00128804::SoundConductor__SoundConductor_00128804, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001288a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Zeroes the record and its 10 bytes.
namespace d_001288a8 {

struct __attribute__((packed)) Record18 {
    u8 byte_0;
    u8 byte_1;
    u8 unknown_2[0x2];  // (not used here)
    u32 word_4;
    u8 unknown_8[0xc];  // (not used here)
    u32 word_14;
};
GUEST_OFFSET(Record18, byte_0, 0x0);
GUEST_OFFSET(Record18, byte_1, 0x1);
GUEST_OFFSET(Record18, word_4, 0x4);
GUEST_OFFSET(Record18, word_14, 0x14);


void Record18__clear(gptr<Record18> record18) {
    u32 r0 = record18.addr();
    u32 r1 = 0u;
    record18->byte_0 = u8(r1);
    record18->byte_1 = u8(r1);
    record18->word_4 = r1;
    u32 r12 = r0 + 8u;
    u32 r3 = r1;
    u32 r2 = r1;
    record18->word_14 = r1;
    do {
        *gptr<u8>(r12 + r3) = u8(r1);
        u32 r3_1 = r3 + 1u;
        r2 += 2u;
        *gptr<u8>(r12 + r3_1) = u8(r1);
        r3 = r3_1 + 1u;
        guest::preempt();
    } while (s32(r2) < 0xa);  // (from the original)
}

}  // namespace d_001288a8
GUEST_EXPORT(0x001288a8, d_001288a8::Record18__clear);

// f_00128924: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs the table's 6 entries (0xec bytes each) and resets its 10 halves to -1.
namespace d_00128924 {

struct __attribute__((packed)) Table6 {
    u8 byte_0;
    u8 unknown_1[0x3];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Table6, byte_0, 0x0);
GUEST_OFFSET(Table6, word_4, 0x4);
GUEST_OFFSET(Table6, word_8, 0x8);

inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;

u32 Table6__Table6(gptr<Table6> table6) {
    u32 r0 = table6.addr();
    table6->byte_0 = 0;
    table6->word_4 = 0;
    table6->word_8 = 0;
    u32 r0_2 = for_each_element((r0 + 8u) + 4u, 0x12e8b0u, 0xecu, 6u);  // (from the original)
    r0 = r0_2 - 0xcu;  // (from the original)
    *gptr<u32>(r0 + 0x594u) = 0;  // (from the original)
    *gptr<u32>(r0 + 0x5e0u) = 0;  // (from the original)
    *gptr<u32>(r0 + 0x5e4u) = 0;  // (from the original)
    *gptr<u32>(r0 + 0x5e8u) = 0;  // (from the original)
    *gptr<u8>(r0 + 0x5ecu) = 1;  // (from the original)
    u32 r2 = 0u;
    u32 r1 = r2;
    u32 r3 = ~0u;
    *gptr<u32>(r0 + 0x5f0u) = 0;  // (from the original)
    do {
        u32 r2_1 = r2 + 1u;
        r1 += 2u;
        *gptr<u16>((r0 + (r2 << 1)) + 0x5f4u) = u16(r3);  // (from the original)
        r2 = r2_1 + 1u;
        *gptr<u16>((r0 + (r2_1 << 1) + 0x500u) + 0xf4u) = u16(r3);  // (from the original)
        guest::preempt();
    } while (s32(r1) < 0xa);  // (from the original)
    return r0;
}

}  // namespace d_00128924
GUEST_EXPORT_FRAMED(0x00128924, d_00128924::Table6__Table6, 0x4010);  // pushes {r4, lr} first, as the original

// f_001289ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the record's kind byte and its two words, clearing the rest.
namespace d_001289ac {

struct __attribute__((packed)) Record0c {
    u8 byte_0;
    u8 byte_1;
    u16 half_2;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Record0c, byte_0, 0x0);
GUEST_OFFSET(Record0c, byte_1, 0x1);
GUEST_OFFSET(Record0c, half_2, 0x2);
GUEST_OFFSET(Record0c, word_4, 0x4);
GUEST_OFFSET(Record0c, word_8, 0x8);


void Record0c__set(gptr<Record0c> record0c, u32 r1, u32 r2, u32 r3) {
    record0c->half_2 = 0;
    record0c->byte_0 = u8(r1);
    record0c->byte_1 = 0;
    record0c->word_4 = r2;
    record0c->word_8 = r3;
}

}  // namespace d_001289ac
GUEST_EXPORT(0x001289ac, d_001289ac::Record0c__set);

// f_00128a30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00128a30 {

struct __attribute__((packed)) Local_00128a30_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00128a30_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00128a30_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_00128a30_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00128a30_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_00128a30_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_00128a30_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00128a30_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_00128a30_ea_3, word_4, 0x4);

struct __attribute__((packed)) Local_00128a30_r0_3 {
    u32 vtable;
    u32 word_4;
};
GUEST_OFFSET(Local_00128a30_r0_3, vtable, 0x0);
GUEST_OFFSET(Local_00128a30_r0_3, word_4, 0x4);

inline constexpr u32 vtable_nn__fs__CTR__MPCore__detail__FileServerArchive = 0x008fae8cu;
inline constexpr u32 time_ticks_ready_address = 0x00974f00u;
inline constexpr u32 file_server_archive_count_address = 0x00974f10u;
inline constexpr u32 global_00ae0c04_address = 0x00ae0c04u;
inline guest::global<u32, 0x00974f10> file_server_archive_count;
inline constexpr guest::Function<0x0012ee00, u32(u32, u32, u32, u32)> ipc_handle_command_80c_buffers;
inline constexpr guest::Function<0x0012ee60, u32(u32, u32, u32, u32)> ipc_handle_command_80e;
inline constexpr guest::Function<0x0013cc9c, u32(u32, u32)> FixedPool__allocate;

struct __attribute__((packed)) Frame_00128a30 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x8];  // (not read or written by name)
    u32 word_10;
    u8 unknown_14[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00128a30, word_0, 0x0);
GUEST_OFFSET(Frame_00128a30, word_4, 0x4);
GUEST_OFFSET(Frame_00128a30, word_10, 0x10);
GUEST_SIZE(Frame_00128a30, 0x18);

u32 nn__fs__CTR__MPCore__detail__FileServerArchive__FileServerArchive_00128a30(u32 file_server_archive, u32 r1) {
    guest::StackFrameOf<Frame_00128a30> frame;  // the original's stack frame
    u32 r2_1 = *file_server_archive_count;
    frame->word_4 = 0xc;  // (from the original)
    frame->word_0 = r1;
    frame->word_10 = r2_1;
    u32 r1_1 = frame.at(8).addr();
    u32 r0_2 = ipc_handle_command_80c_buffers(frame.at(0x10).addr(), r1_1, 7u, 2u);  // (from the original)
    if ((r0_2 >> 0x1f) == 0) {  // (from the original)
        gptr<Local_00128a30_ea_1> ea_1 = gptr<Local_00128a30_ea_1>(frame.at(8).addr());
        u32 r6_1 = ea_1->word_0;
        u32 r7_1 = ea_1->word_4;
        u32 r4_1 = *file_server_archive_count;
        gptr<Local_00128a30_r0_3> r0_3 = gptr<Local_00128a30_r0_3>(FixedPool__allocate(global_00ae0c04_address, r1_1));
        if (r0_3.addr() != 0) {
            r0_3->vtable = vtable_nn__fs__CTR__MPCore__detail__FileServerArchive;
            gptr<Local_00128a30_ea_2> ea_2 = gptr<Local_00128a30_ea_2>(r0_3.addr() + 8u);
            ea_2->word_0 = r6_1;
            ea_2->word_4 = r7_1;
            r0_3->word_4 = r4_1;
        }
        u32 r4_2 = r0_3.addr() == 0 ? 0xd8604659u : 0u;  // (from the original)
        *gptr<u32>(file_server_archive) = r0_3.addr();
        r0_2 = r4_2 >> 0x1f;  // (from the original)
        if (r0_2 != 0) {
            u32 r0_4 = *file_server_archive_count;
            gptr<Local_00128a30_ea_3> ea_3 = gptr<Local_00128a30_ea_3>(frame.at(8).addr());
            u32 r2_3 = ea_3->word_0;
            u32 r3_2 = ea_3->word_4;
            frame->word_0 = r0_4;
            ipc_handle_command_80e(frame.at(0).addr(), r1_1, r2_3, r3_2);
            r0_2 = r4_2;
        }
    }
    return r0_2;
}

}  // namespace d_00128a30
GUEST_EXPORT_FRAMED(0x00128a30, d_00128a30::nn__fs__CTR__MPCore__detail__FileServerArchive__FileServerArchive_00128a30, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00128c0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets the once flag: finishes its pending wait when it was in progress.
namespace d_00128c0c {

struct __attribute__((packed)) OnceFlag {
    u32 word_0;
};
GUEST_OFFSET(OnceFlag, word_0, 0x0);

inline constexpr guest::Function<0x00128c70, u32(u32, u32)> LightEvent__signal;
inline constexpr guest::Function<0x0012f050, u32(u32, u32, u32, u32)> LightEvent__clear;

u32 OnceFlag__reset(gptr<OnceFlag> once_flag, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0 = once_flag.addr();
    u32 r4 = r0;
    if (once_flag->word_0 != 1u) {
        u32 r0_1 = once_flag->word_0;
        if (r0_1 == 0) {
            r1 = ~0u;
            do {
                r0_1 = *gptr<u32>(r4);
                *gptr<u32>(r4) = r1;
                guest::preempt();
            } while (!u32(1));
        }
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    u32 r0_2 = r4 + 4u;
    u32 r5 = r0_2;
    LightEvent__clear(r0_2, r1, guest::cpu()->r[2], r3);
    r1 = ~1u;
    do {
        *gptr<u32>(r4) = r1;
        guest::preempt();
    } while (!u32(1));
    frame.release();
    return LightEvent__signal(r5, r1);
}

}  // namespace d_00128c0c
GUEST_EXPORT(0x00128c0c, d_00128c0c::OnceFlag__reset);

// f_00129094: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The handle of a named service, through the service manager (fails when the handle is already open).
namespace d_00129094 {

struct __attribute__((packed)) Handle {
    u32 word_0;
};
GUEST_OFFSET(Handle, word_0, 0x0);

inline constexpr guest::Function<0x00129c7c, u32(u32, u32, u32, u32)> srv_initialize;
inline constexpr guest::Function<0x00129da0, u32(u32, u32, u32, u32)> srv_get_service_handle;
inline constexpr guest::Function<0x00134250, u32(u32, u32)> fatal_result;
inline constexpr guest::Function<0x002fa9d0, u32(u32, u32)> string_length;

u32 get_service_handle(gptr<Handle> handle, u32 name, u32 r2, u32 r3) {
    u32 result = 0;
    u32 r0_1 = srv_initialize(handle.addr(), name, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r0_2 = r0_1 >> 0x1f;  // (from the original)
    if (r0_2 != 0) {
        fatal_result(r0_2, r1_1);
        r1_1 = guest::cpu()->r[1];
    }
    if (handle->word_0 != 0) {
        result = 0xd8a103f9u;  // (from the original)
    } else {
        u32 length_2 = string_length(name, r1_1);
        result = srv_get_service_handle(handle.addr(), name, length_2, 0u);
        r1_1 = result & 0x80000000u;  // (from the original)
        if (s32(r1_1) < 0) {
            result = 0xd92103fbu;  // (from the original)
        }
    }
    guest::cpu()->r[1] = r1_1;
    return result;
}

}  // namespace d_00129094
GUEST_EXPORT_FRAMED(0x00129094, d_00129094::get_service_handle, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001290f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The shared lock at 0xae8344, initialized once (other threads wait for it).
namespace d_001290f0 {

inline constexpr u32 global_0097d814_address = 0x0097d814u;
inline constexpr u32 global_00ae8344_address = 0x00ae8344u;
inline constexpr guest::Function<0x0012f154, u32(u32, u32, u32, u32)> RecursiveLock__initialize;
inline constexpr guest::Function<0x0012f274, u32(u32, u32, u32, u32)> sleep_thread_ns;

u32 global_lock_ae8344() {
    u32 r1 = global_0097d814_address;
    u32 r3 = 0u;
    u32 r4 = r1;
    u32 r2 = 1u;
L_129104:;
    u32 r0_1 = *gptr<u32>(r1);
    if (r0_1 == r3) {
        *gptr<u32>(r1) = r2;
        if (0) {
            guest::preempt();
            goto L_129104;
        }
    }
    if (r0_1 == 0) {
        u32 lock = global_00ae8344_address;
        *gptr<u32>(lock) = 0;
        RecursiveLock__initialize(lock, 0u, r2, r3);
        r1 = guest::cpu()->r[1];
        u32 r6 = r4;
        do {
            *gptr<u32>(r6) = lock;
            guest::preempt();
        } while (!u32(1));
    } else {
        do {
            if (*gptr<u32>(r4) > 1u) {
                break;
            }
            sleep_thread_ns(0xf4240u, 0u, r2, r3);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            guest::preempt();
        } while (1);
    }
    u32 r0_2 = *gptr<u32>(r4);
    guest::cpu()->r[1] = r1;
    return r0_2;
}

}  // namespace d_001290f0
GUEST_EXPORT_FRAMED(0x001290f0, d_001290f0::global_lock_ae8344, 0x4070);  // pushes {r4, lock, r6, lr} first, as the original

// f_001292b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001292b0 {

inline constexpr u32 fatal_error_info_address = 0x00ae0ab8u;
inline guest::global<u8, 0x00ae0ab8> fatal_error_info;
inline guest::global<u8, 0x00ae0ab9> fatal_error_level;
inline guest::global<u16, 0x00ae0aba> fatal_error_module;
inline guest::global<u32, 0x00ae0abc> fatal_error_result;
inline guest::global<u32, 0x00ae0ac0> fatal_error_location;
inline constexpr guest::Function<0x00129330, u32(u32, u32, u32, u32)> raise_fatal_error;

u32 report_fatal_result(u32 result, u32 r1, u32 r2) {
    *fatal_error_level = 0;
    *fatal_error_info = u8(r1);
    *fatal_error_module = 0xf22c;  // (from the original)
    *fatal_error_location = r2;
    *fatal_error_result = result;
    return raise_fatal_error(fatal_error_info_address, r1, r2, result);
}

}  // namespace d_001292b0
GUEST_EXPORT(0x001292b0, d_001292b0::report_fatal_result);

// f_001292e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Returns the result when its level is success or info; otherwise reports it as fatal.
namespace d_001292e8 {

inline constexpr u32 fatal_error_info_address = 0x00ae0ab8u;
inline guest::global<u8, 0x00ae0ab8> fatal_error_info;
inline guest::global<u8, 0x00ae0ab9> fatal_error_level;
inline guest::global<u16, 0x00ae0aba> fatal_error_module;
inline guest::global<u32, 0x00ae0abc> fatal_error_result;
inline guest::global<u32, 0x00ae0ac0> fatal_error_location;
inline constexpr guest::Function<0x00129330, u32(u32, u32, u32, u32)> raise_fatal_error;

u32 fatal_unless_success_level(u32 result, u32 r1) {
    u32 level = result >> 0x1b;  // (from the original)
    if (s32(result) < 0) {
        level -= 0x20u;  // (from the original)
    }
    if (level == 1u || level + 7u == 0) {
        return result;
    }
    *fatal_error_level = 0;
    *fatal_error_module = 0xf22c;  // (from the original)
    *fatal_error_info = 0;
    *fatal_error_result = result;
    *fatal_error_location = r1;
    return raise_fatal_error(fatal_error_info_address, r1, fatal_error_info_address, 0u);
}

}  // namespace d_001292e8
GUEST_EXPORT(0x001292e8, d_001292e8::fatal_unless_success_level);

// f_001297c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Opens the microphone service (mic:u) once.
namespace d_001297c4 {

inline constexpr u32 global_0097d8c4_address = 0x0097d8c4u;
inline guest::global<u8, 0x00974f30> mic_state;
inline constexpr guest::Function<0x00129c7c, u32(u32, u32, u32, u32)> srv_initialize;
inline constexpr guest::Function<0x00129da0, u32(u32, u32, u32, u32)> srv_get_service_handle;
inline constexpr guest::Function<0x0012f9f0, u32(u32)> ipc_97d8c4_command_10;
inline constexpr guest::Function<0x00134250, u32(u32, u32)> fatal_result;
inline constexpr guest::Function<0x002fa9d0, u32(u32, u32)> string_length;

u32 mic_initialize(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r0_2 = 0;
    u32 r0_1 = *mic_state;
    if (r0_1 != 0) {
        r0_2 = 0xd8208ff9u;  // (from the original)
    } else {
        u32 r0_3 = srv_initialize(r0_1, r1, r2, r3);
        u32 r1_1 = 0xfe400000u;  // (from the original)
        u32 zf_1 = (r1_1 - (r0_3 << 0x16)) == 0;  // (from the original)
        if (!zf_1) {
            u32 res_2 = r0_3 >> 0x1f;  // (from the original)
            zf_1 = res_2 == 0;
            r0_3 = res_2;
        }
        if (!zf_1) {
            fatal_result(r0_3, r1_1);
            r1_1 = guest::cpu()->r[1];
        }
        u32 length_2 = string_length(0x8a23d0u, r1_1);  // (from the original)
        u32 r0_5 = srv_get_service_handle(global_0097d8c4_address, 0x8a23d0u, length_2, 1u);  // (from the original)
        if (s32(r0_5) < 0) {
            if (r0_5 == 0xd0401834u) {  // (from the original)
                return 0xc8a08ff9u;  // (from the original)
            }
            u32 r0_6 = r0_5 >> 0x1f;  // (from the original)
            if (r0_6 != 0) {
                fatal_result(r0_6, guest::cpu()->r[1]);
            }
        }
        ipc_97d8c4_command_10(0xb0500c8u);  // (from the original)
        r0_2 = r0_5;
        *mic_state = 1;
    }
    return r0_2;
}

}  // namespace d_001297c4
GUEST_EXPORT_FRAMED(0x001297c4, d_001297c4::mic_initialize, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00129870: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Reads the value at 0x974f34 when it is set; an error code otherwise.
namespace d_00129870 {

struct __attribute__((packed)) Object_00129870_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00129870_0, word_0, 0x0);

struct __attribute__((packed)) Local_00129870_r1_1 {
    u8 unknown_0[0x1];  // (not used here)
    u8 byte_1;
    u8 unknown_2[0x2];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Local_00129870_r1_1, byte_1, 0x1);
GUEST_OFFSET(Local_00129870_r1_1, word_4, 0x4);

inline constexpr u32 mic_state_address = 0x00974f30u;

u32 get_value_974f34(gptr<Object_00129870_0> arg0) {
    u32 r0_1 = 0;
    gptr<Local_00129870_r1_1> r1_1 = gptr<Local_00129870_r1_1>(mic_state_address);
    if (r1_1->byte_1 == 0) {
        r0_1 = 0xd8208ff8u;  // (from the original)
    } else {
        r1_1 = gptr<Local_00129870_r1_1>(r1_1->word_4);
        arg0->word_0 = r1_1.addr();
        r0_1 = 0u;
    }
    guest::cpu()->r[1] = r1_1.addr();
    return r0_1;
}

}  // namespace d_00129870
GUEST_EXPORT(0x00129870, d_00129870::get_value_974f34);

// f_00129898: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Gives the microphone service its sample buffer (address and size aligned to 4 KiB).
namespace d_00129898 {

inline constexpr u32 global_00ae0f18_address = 0x00ae0f18u;
inline constexpr u32 mic_shared_memory_address = 0x00ae0f2cu;
inline guest::global<u8, 0x00974f31> mic_shared_memory_mapped;
inline guest::global<u32, 0x00974f34> global_00974f34;
inline guest::global<u32, 0x00ae0f2c> mic_shared_memory;
inline constexpr guest::Function<0x0012f170, u32(u32, u32, u32, u32)> MemoryBlock__create;
inline constexpr guest::Function<0x0012f9ac, u32(u32, u32)> ipc_97d8c4_command_1;

struct __attribute__((packed)) Frame_00129898 {
    u32 word_0;
};
GUEST_OFFSET(Frame_00129898, word_0, 0x0);
GUEST_SIZE(Frame_00129898, 0x4);

u32 mic_map_shared_memory(u32 address, u32 size, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_00129898> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r1_1 = *mic_shared_memory_mapped;
    if (r1_1 != 0) {
        guest::cpu()->r[1] = r1_1;
        return 0xd8208ff9u;  // (from the original)
    }
    u32 r1_2 = size << 0x14;  // (from the original)
    if (r1_2 != 0) {
        guest::cpu()->r[1] = r1_2;
        return 0xe0e08ff2u;  // (from the original)
    }
    u32 r1_3 = address << 0x14;  // (from the original)
    if (r1_3 != 0) {
        guest::cpu()->r[1] = r1_3;
        return 0xe0e08ff1u;  // (from the original)
    }
    frame->word_0 = 3;
    MemoryBlock__create(global_00ae0f18_address, address, size, 3u);
    u32 result = ipc_97d8c4_command_1(*mic_shared_memory, size);
    u32 r1_4 = size - 4u;
    *global_00974f34 = r1_4;
    if (s32(result) >= 0) {
        r1_4 = 1u;
        *mic_shared_memory_mapped = u8(r1_4);
    }
    guest::cpu()->r[1] = r1_4;
    return result;
}

}  // namespace d_00129898
GUEST_EXPORT_FRAMED(0x00129898, d_00129898::mic_map_shared_memory, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00129c7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Connects to the service manager's port (srv:) once, retrying every half millisecond while the port does not exist
// yet; counts the users.
namespace d_00129c7c {

inline constexpr u32 srv_state_address = 0x0097e064u;
inline constexpr u32 srv_port_address = 0x0097e06cu;
inline constexpr u32 srv_state_b_address = 0x00aed620u;
inline constexpr u32 os_object_list_tail_address = 0x00aed63cu;
inline guest::global<u32, 0x00aed620> srv_state_b;
inline guest::global<u32, 0x00aed62c> os_event_thread;
inline guest::global<u32, 0x00aed630> os_event_thread_b;
inline guest::global<u8, 0x00aed634> global_00aed634;
inline guest::global<u32, 0x00aed638> os_object_list_head;
inline guest::global<u32, 0x00aed63c> os_object_list_tail;
inline constexpr guest::Function<0x0011e084, u32(u32, u32)> srv_port_command_1;
inline constexpr guest::Function<0x00127ce0, u32(u32, u32)> svc_connect_to_port;
inline constexpr guest::Function<0x0012f154, u32(u32, u32, u32, u32)> RecursiveLock__initialize;
inline constexpr guest::Function<0x0012f274, u32(u32, u32)> sleep_thread_ns;
inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> RecursiveLock__lock;
inline constexpr guest::Function<0x001357ec, u32(u32, u32)> RecursiveLock__unlock;

u32 srv_initialize(u32 r0_unused, u32 r1) {
    u32 port_name = 0;
    u32 r7 = 0;
    u32 r5 = srv_state_address;
    if (*gptr<u8>(r5) == 0) {
        *srv_state_b = 0;
        RecursiveLock__initialize(srv_state_b_address, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        *os_event_thread = 0;
        *os_event_thread_b = 0;
        *global_00aed634 = 1;
        *os_object_list_head = 0;
        *os_object_list_tail = 0;
        RecursiveLock__initialize(os_object_list_tail_address, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        *gptr<u8>(r5) = 1;
    }
    u32 lock = srv_state_b_address;
    RecursiveLock__lock(srv_state_b_address, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_2 = *gptr<u32>(r5 + 4u);
    if (s32(r0_2) <= 0) {
        port_name = 0x8b36bcu;  // (from the original)
        r7 = 0x3fau;  // (from the original)
    } else {
        *gptr<u32>(r5 + 4u) = r0_2 + 1u;
        RecursiveLock__unlock(lock, guest::cpu()->r[1]);
        return 0x82067f9u;  // (from the original)
    }
    do {
        u32 result = svc_connect_to_port(srv_port_address, port_name);
        u32 level = result >> 0x1b;  // (from the original)
        if (s32(result) < 0) {
            level -= 0x20u;  // (from the original)
        }
        if (level + 5u != 0 || (result & 0x7e00000u) >> 0x15 != 4u || (result & 0x3ffu) != r7) {  // (from the original)
            u32 r1_5 = result & 0x80000000u;  // (from the original)
            if (s32(r1_5) >= 0) {
                result = srv_port_command_1(result, r1_5);
                r1_5 = *gptr<u32>(r5 + 4u) + 1u;
                *gptr<u32>(r5 + 4u) = r1_5;
            }
            RecursiveLock__unlock(lock, r1_5);
            return result;
        }
        sleep_thread_ns(0x7a120u, 0u);  // (from the original)
        guest::preempt();
    } while (1);
}

}  // namespace d_00129c7c
GUEST_EXPORT_FRAMED(0x00129c7c, d_00129c7c::srv_initialize, 0x41f0);  // pushes {lock, r5, port_name, r7, r8, lr} first, as the original

// f_00129fa0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Registers the sleep notification (when the applet is up) and tells the handler it is on; an error code when the
// applet is not initialized.
namespace d_00129fa0 {

inline guest::global<u32, 0x008b2f4c> global_008b2f4c;
inline constexpr guest::Function<0x0012a130, u32(u32)> read_s8_0x0097d8a1_;
inline constexpr guest::Function<0x0012fb3c, u32(u32)> read_s8_0x0097d8a0_;
inline constexpr guest::Function<0x0012fe1c, u32(u32, u32)> set_flag_bit_24_of_list;
inline constexpr guest::Function<0x0012fea0, u32(u32, u32, u32)> ipc_handle_command_16;
inline constexpr guest::Function<0x00136464, u32(u32)> read_applet_instance;
inline constexpr guest::Function<0x00136474, u32(u32)> return_constant_0x97d8b4_;

u32 Applet__enable_sleep_handling(u32 applet) {
    u32 r0_2 = 0;
    u32 r0_1 = read_s8_0x0097d8a0_(applet);
    if (r0_1 == 0) {
        r0_2 = 0x202bf8u;  // (from the original)
    } else {
        u32 r4_1 = *global_008b2f4c;
        u32 r0_3 = return_constant_0x97d8b4_(0x8b2f4cu);  // (from the original)
        u32 r0_4 = ipc_handle_command_16(r0_3, r4_1, 0u);
        u32 r0_5 = r0_4 >> 0x1f;  // (from the original)
        if (r0_5 == 0) {
            u32 r0_6 = read_s8_0x0097d8a1_(r0_5);
            if (r0_6 != 0) {
                u32 r0_7 = read_applet_instance(r0_6);
                set_flag_bit_24_of_list(r0_7 + 0x30u, 0u);  // (from the original)
            }
        }
        r0_2 = r0_4;
    }
    return r0_2;
}

}  // namespace d_00129fa0
GUEST_EXPORT_FRAMED(0x00129fa0, d_00129fa0::Applet__enable_sleep_handling, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0012a008: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Unregisters the sleep notification and tells the handler it is off.
namespace d_0012a008 {

inline constexpr guest::Function<0x0012a130, u32(u32)> read_s8_0x0097d8a1_;
inline constexpr guest::Function<0x0012fb3c, u32(u32, u32, u32, u32)> read_s8_0x0097d8a0_;
inline constexpr guest::Function<0x0012fe1c, u32(u32, u32)> set_flag_bit_24_of_list;
inline constexpr guest::Function<0x0012fee4, u32(u32)> ipc_handle_command_17;
inline constexpr guest::Function<0x00136464, u32(u32)> read_applet_instance;
inline constexpr guest::Function<0x00136474, u32(u32)> return_constant_0x97d8b4_;

u32 Applet__disable_sleep_handling(u32 applet, u32 r1) {
    u32 r0_2 = 0;
    u32 r0_1 = read_s8_0x0097d8a0_(applet, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 == 0) {
        r0_2 = 0x202bf8u;  // (from the original)
    } else {
        u32 r0_3 = return_constant_0x97d8b4_(r0_1);
        u32 r0_4 = ipc_handle_command_17(r0_3);
        u32 r0_5 = r0_4 >> 0x1f;  // (from the original)
        if (r0_5 == 0) {
            u32 r0_6 = read_s8_0x0097d8a1_(r0_5);
            if (r0_6 != 0) {
                u32 r0_7 = read_applet_instance(r0_6);
                set_flag_bit_24_of_list(r0_7 + 0x30u, 1u);  // (from the original)
            }
        }
        r0_2 = r0_4;
    }
    return r0_2;
}

}  // namespace d_0012a008
GUEST_EXPORT_FRAMED(0x0012a008, d_0012a008::Applet__disable_sleep_handling, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0012a084: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sends the parameter to the applet event at 0x97d8b4.
namespace d_0012a084 {

inline constexpr guest::Function<0x0012ff6c, u32(u32, u32, u32, u32)> ipc_handle_command_2_buffer;
inline constexpr guest::Function<0x00136474, u32(u32)> return_constant_0x97d8b4_;

struct __attribute__((packed)) Frame_0012a084 {
    u32 word_0;
};
GUEST_OFFSET(Frame_0012a084, word_0, 0x0);
GUEST_SIZE(Frame_0012a084, 0x4);

void Applet__send_parameter(u32 applet, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0012a084> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r0_1 = return_constant_0x97d8b4_(applet);
    frame->word_0 = r3;
    ipc_handle_command_2_buffer(r0_1, applet, r1, r2);
}

}  // namespace d_0012a084
GUEST_EXPORT_FRAMED(0x0012a084, d_0012a084::Applet__send_parameter, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0012a0b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The state byte at +0x75 of the applet's handler.
namespace d_0012a0b8 {

inline guest::global<u32, 0x0097d8bc> applet_instance;

u32 Applet__state_byte_75() {
    return *gptr<s8>(*applet_instance + 0x75u);  // (from the original)
}

}  // namespace d_0012a0b8
GUEST_EXPORT(0x0012a0b8, d_0012a0b8::Applet__state_byte_75);

// f_0012a0d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Replaces callback `index` (below 7) of the applet's handler (under its lock); the previous one.
namespace d_0012a0d0 {

struct __attribute__((packed)) Local_0012a0d0_r1_1 {
    u8 unknown_0[0x10];  // (not used here)
    u32 applet;
};
GUEST_OFFSET(Local_0012a0d0_r1_1, applet, 0x10);

inline constexpr u32 applet_instance_address = 0x0097d8bcu;
inline guest::global<u32, 0x0097d8bc> applet_instance;
inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> RecursiveLock__lock;
inline constexpr guest::Function<0x001357ec, u32(u32, u32)> RecursiveLock__unlock;

u32 Applet__set_callback(u32 applet, u32 r1) {
    u32 lock = *applet_instance;
    u32 r0_1 = 0u;
    if (r1 < 7u) {
        RecursiveLock__lock(lock, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        gptr<Local_0012a0d0_r1_1> r1_1 = gptr<Local_0012a0d0_r1_1>(lock + (r1 << 2));
        u32 r5_1 = r1_1->applet;
        r1_1->applet = applet;
        RecursiveLock__unlock(lock, r1_1.addr());
        r1 = guest::cpu()->r[1];
        r0_1 = r5_1;
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_0012a0d0
GUEST_EXPORT_FRAMED(0x0012a0d0, d_0012a0d0::Applet__set_callback, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0012a11c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The word at 0x97d8ac.
namespace d_0012a11c {

inline constexpr u32 applet_word_address = 0x0097d8acu;
inline guest::global<u32, 0x0097d8ac> applet_word;

u32 Applet__word_97d8ac() {
    return *applet_word;
}

}  // namespace d_0012a11c
GUEST_EXPORT(0x0012a11c, d_0012a11c::Applet__word_97d8ac);

// f_0012a370: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sends the command with its input and output buffers to the service and waits; stops with a fatal error when it
// fails.
namespace d_0012a370 {

struct __attribute__((packed)) Local_0012a370_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0012a370_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0012a370_ea_1, word_4, 0x4);

inline constexpr guest::Function<0x001292e8, u32(u32, u32, u32)> fatal_unless_success_level;
inline constexpr guest::Function<0x0012a518, u32(u32, u32, u32, u32)> wait_on_handle;
inline constexpr guest::Function<0x0012ab78, u32(u32, u32, u32)> close_service_handle_97d7f8;
inline constexpr guest::Function<0x0013028c, u32(u32, u32, u32, u32)> ipc_handle_command_4b_buffers;

struct __attribute__((packed)) Frame_0012a370 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u8 unknown_14[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0012a370, word_0, 0x0);
GUEST_OFFSET(Frame_0012a370, word_4, 0x4);
GUEST_OFFSET(Frame_0012a370, word_8, 0x8);
GUEST_OFFSET(Frame_0012a370, word_c, 0xc);
GUEST_OFFSET(Frame_0012a370, word_10, 0x10);
GUEST_SIZE(Frame_0012a370, 0x18);

u32 ServiceCommand__send(u32 service_command, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0012a370> frame;  // the original's stack frame
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r1_2 = 0;
    u32 r9_1 = r2;
    gptr<Local_0012a370_ea_1> ea_1 = gptr<Local_0012a370_ea_1>(frame.at(0x38).addr());  // (from the original)
    u32 r6_1 = ea_1->word_0;
    u32 r7_1 = ea_1->word_4;
    frame->word_8 = 0;
    frame->word_c = 0;
    wait_on_handle(service_command, r1, r2, r3);
    u32 r3_1 = guest::cpu()->r[3];
    u32 r0_1 = frame.at(0x10).addr();  // (from the original)
    if (r3 == 0) {
        frame->word_4 = r0_1;
        frame->word_0 = 1;
        r3_1 = frame.at(0xc).addr();  // (from the original)
    } else {
        if (r6_1 == 0) {
            r1_1 = 1u;
        } else {
            r1_1 = r6_1;
            r3_1 = r3;
        }
        frame->word_4 = r0_1;
        frame->word_0 = r1_1;
        if (r6_1 == 0) {
            r3_1 = frame.at(0xc).addr();  // (from the original)
        }
    }
    if (r1 == 0) {
        r2_1 = 1u;
        r1_2 = frame.at(8).addr();
    } else {
        u32 zf_1 = r9_1 == 0;
        if (r9_1 == 0) {
            r9_1 = 1u;
        }
        r2_1 = r9_1;
        r1_2 = zf_1 ? frame.at(8).addr() : r1;
    }
    u32 r0_2 = ipc_handle_command_4b_buffers(service_command, r1_2, r2_1, r3_1);
    u32 r1_3 = 0x12a400u;  // (from the original)
    u32 r2_2 = r0_2 >> 0x1f;  // (from the original)
    if (r2_2 != 0) {
        fatal_unless_success_level(r0_2, r1_3, r2_2);
        r1_3 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
    }
    if (r3 == 0 || r6_1 == 0) {
        frame->word_10 = 0;
    }
    if (r7_1 != 0) {
        *gptr<u32>(r7_1) = frame->word_10;
    }
    close_service_handle_97d7f8(r0_2, r1_3, r2_2);
    return r0_2;
}

}  // namespace d_0012a370
GUEST_EXPORT_FRAMED(0x0012a370, d_0012a370::ServiceCommand__send, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0012a450: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Blocks (when not set) or unblocks the HOME button handling.
namespace d_0012a450 {

inline guest::global<u8, 0x00974ab4> home_button_blocked;
inline constexpr guest::Function<0x0012f374, u32(u32, u32, u32, u32)> read_s8_0x0097d875_;
inline constexpr guest::Function<0x0012f474, u32(u32)> Hid__update;
inline constexpr guest::Function<0x0012f518, u32(u32)> Hid__reset_state;

u32 set_home_button_blocked(u32 r0) {
    if (r0 != 0) {
        u32 r0_1 = *home_button_blocked;
        if (r0_1 == 0) {
            return r0_1;
        }
        Hid__reset_state(r0_1);
        *home_button_blocked = 0;
        return 0u;
    }
    u32 r0_2 = read_s8_0x0097d875_(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_2 == 0) {
        return r0_2;
    }
    Hid__update(r0_2);
    *home_button_blocked = 1;
    return 1u;
}

}  // namespace d_0012a450
GUEST_EXPORT_FRAMED(0x0012a450, d_0012a450::set_home_button_blocked, 0x4010);  // pushes {r4, lr} first, as the original

// f_0012a4a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Turns the sleep notification handling on or off, stopping with a fatal error on unexpected results.
namespace d_0012a4a0 {

inline constexpr u32 sleep_handling_address = 0x00974ab0u;
inline guest::global<u8, 0x00974ab3> sleep_handling_enabled;
inline constexpr guest::Function<0x001292e8, u32(u32, u32)> fatal_unless_success_level;
inline constexpr guest::Function<0x00129fa0, u32(u32, u32, u32, u32)> Applet__enable_sleep_handling;
inline constexpr guest::Function<0x0012a008, u32(u32, u32, u32, u32)> Applet__disable_sleep_handling;

u32 set_sleep_handling(u32 r0, u32 r1_unused, u32 r2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    if (r0 != 0) {
        *sleep_handling_enabled = 1;
        u32 r0_1 = Applet__enable_sleep_handling(1u, sleep_handling_address, r2, guest::cpu()->r[3]);
        if ((r0_1 >> 0x1f) != 0) {  // (from the original)
            frame.release();
            return fatal_unless_success_level(r0_1, 0x12a4c4u);  // (from the original)
        }
        guest::cpu()->r[1] = 0x12a4c4u;  // (from the original)
        return r0_1;
    }
    u32 r0_2 = *sleep_handling_enabled;
    if (r0_2 == 0) {
        guest::cpu()->r[1] = sleep_handling_address;
        return r0_2;
    }
    *sleep_handling_enabled = 0;
    u32 r0_3 = Applet__disable_sleep_handling(0u, sleep_handling_address, r2, guest::cpu()->r[3]);
    u32 r1_1 = 0xd8a02a05u;  // (from the original)
    u32 zf_1 = r0_3 == r1_1;
    if (!zf_1) {
        r1_1 = 0xd9001bf7u;  // (from the original)
        zf_1 = r0_3 == r1_1;
    }
    if (zf_1) {
        guest::cpu()->r[1] = r1_1;
        return r0_3;
    }
    if ((r0_3 >> 0x1f) == 0) {  // (from the original)
        guest::cpu()->r[1] = 0x12a500u;  // (from the original)
        return r0_3;
    }
    frame.release();
    return fatal_unless_success_level(r0_3, 0x12a500u);  // (from the original)
}

}  // namespace d_0012a4a0
GUEST_EXPORT(0x0012a4a0, d_0012a4a0::set_sleep_handling);

// f_0012a54c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sends the query to the service and waits; stops with a fatal error when it fails.
namespace d_0012a54c {

inline constexpr guest::Function<0x001292e8, u32(u32, u32, u32)> fatal_unless_success_level;
inline constexpr guest::Function<0x0012a518, u32(u32, u32, u32, u32)> wait_on_handle;
inline constexpr guest::Function<0x0012ab78, u32(u32, u32, u32)> close_service_handle_97d7f8;
inline constexpr guest::Function<0x00130360, u32(u32, u32, u32, u32)> ipc_97d7f8_command_f;

struct __attribute__((packed)) Frame_0012a54c {
    u32 word_0;
    u8 unknown_4[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0012a54c, word_0, 0x0);
GUEST_SIZE(Frame_0012a54c, 0xc);

void ServiceCommand__query(u32 service_command, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0012a54c> frame;  // the original's stack frame
    wait_on_handle(service_command, r1, r2, r3);
    frame->word_0 = frame.at(4).addr();
    u32 r0_1 = ipc_97d7f8_command_f(service_command, r1, r2, r3);
    u32 r1_1 = 0x12a58cu;  // (from the original)
    u32 r2_1 = r0_1 >> 0x1f;  // (from the original)
    if (r2_1 != 0) {
        fatal_unless_success_level(r0_1, r1_1, r2_1);
        r1_1 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
    }
    close_service_handle_97d7f8(r0_1, r1_1, r2_1);
}

}  // namespace d_0012a54c
GUEST_EXPORT_FRAMED(0x0012a54c, d_0012a54c::ServiceCommand__query, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0012ae20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls the service command at 0x130448 with the argument; stops with a fatal error when it fails.
namespace d_0012ae20 {

inline constexpr guest::Function<0x001292e8, u32(u32, u32, u32)> fatal_unless_success_level;
inline constexpr guest::Function<0x0012a22c, u32(u32)> read_u32_0x00974aec_;
inline constexpr guest::Function<0x0012a518, u32(u32, u32, u32, u32)> wait_on_handle;
inline constexpr guest::Function<0x0012ab78, u32(u32, u32, u32, u32)> close_service_handle_97d7f8;
inline constexpr guest::Function<0x00130448, u32(u32, u32)> ipc_97d7f8_command_3e;

u32 ServiceCommand__call_130448(u32 service_command, u32 r1, u32 r2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = wait_on_handle(service_command, r1, r2, guest::cpu()->r[3]);
    u32 r0_2 = read_u32_0x00974aec_(r0_1);
    u32 r0_3 = ipc_97d7f8_command_3e(r0_2, service_command);
    u32 r1_2 = 0x12ae40u;  // (from the original)
    u32 r2_3 = r0_3 >> 0x1f;  // (from the original)
    if (r2_3 != 0) {
        r0_3 = fatal_unless_success_level(r0_3, r1_2, r2_3);
        r1_2 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
    }
    frame.release();
    return close_service_handle_97d7f8(r0_3, r1_2, r2_3, guest::cpu()->r[3]);
}

}  // namespace d_0012ae20
GUEST_EXPORT(0x0012ae20, d_0012ae20::ServiceCommand__call_130448);

// f_0012ae80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls the service command at 0x130658; stops with a fatal error when it fails.
namespace d_0012ae80 {

inline constexpr guest::Function<0x001292e8, u32(u32, u32, u32)> fatal_unless_success_level;
inline constexpr guest::Function<0x0012a22c, u32(u32)> read_u32_0x00974aec_;
inline constexpr guest::Function<0x0012a518, u32(u32, u32, u32, u32)> wait_on_handle;
inline constexpr guest::Function<0x0012ab78, u32(u32, u32, u32, u32)> close_service_handle_97d7f8;
inline constexpr guest::Function<0x00130658, u32(u32)> ipc_97d7f8_command_3f;

void ServiceCommand__call_130658(u32 service_command, u32 r1, u32 r2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = wait_on_handle(service_command, r1, r2, guest::cpu()->r[3]);
    u32 r0_2 = read_u32_0x00974aec_(r0_1);
    u32 r0_3 = ipc_97d7f8_command_3f(r0_2);
    u32 r1_3 = 0x12ae98u;  // (from the original)
    u32 r2_3 = r0_3 >> 0x1f;  // (from the original)
    if (r2_3 != 0) {
        fatal_unless_success_level(r0_3, r1_3, r2_3);
        r1_3 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
    }
    frame.release();
    close_service_handle_97d7f8(r0_3, r1_3, r2_3, guest::cpu()->r[3]);
    return;
}

}  // namespace d_0012ae80
GUEST_EXPORT(0x0012ae80, d_0012ae80::ServiceCommand__call_130658);

// f_0012b228: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012b228 {

inline constexpr u32 frd_lock_address = 0x00ae0b5cu;
inline guest::global<u32, 0x0097d898> global_0097d898;
inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> RecursiveLock__lock;
inline constexpr guest::Function<0x001357ec, u32(u32)> RecursiveLock__unlock;

u32 frd_session_open() {
    RecursiveLock__lock(frd_lock_address, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r5_1 = *global_0097d898 != 0;
    RecursiveLock__unlock(frd_lock_address);
    return r5_1;
}

}  // namespace d_0012b228
GUEST_EXPORT_FRAMED(0x0012b228, d_0012b228::frd_session_open, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0012b394: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012b394 {

inline constexpr u32 vtable_nw__lyt__ArcResourceAccessor = 0x00901accu;
inline constexpr guest::Function<0x00130c60, u32(u32)> nw__lyt__ResourceAccessor__ResourceAccessor;

u32 nw__lyt__ArcResourceAccessor__ArcResourceAccessor(gptr<nw__lyt__ArcResourceAccessor> arc_resource_accessor) {
    nw__lyt__ResourceAccessor__ResourceAccessor(arc_resource_accessor.addr());
    arc_resource_accessor->vtable = vtable_nw__lyt__ArcResourceAccessor;
    arc_resource_accessor->word_20 = 0;
    arc_resource_accessor->word_24 = 0;
    arc_resource_accessor->word_28 = arc_resource_accessor.addr() + 0x28u;  // (from the original)
    arc_resource_accessor->word_2c = arc_resource_accessor.addr() + 0x28u;  // (from the original)
    arc_resource_accessor->word_30 = 0;
    arc_resource_accessor->word_34 = arc_resource_accessor.addr() + 0x34u;  // (from the original)
    arc_resource_accessor->word_38 = arc_resource_accessor.addr() + 0x34u;  // (from the original)
    return arc_resource_accessor.addr();
}

}  // namespace d_0012b394
GUEST_EXPORT_FRAMED(0x0012b394, d_0012b394::nw__lyt__ArcResourceAccessor__ArcResourceAccessor, 0x4010);  // pushes {r4, lr} first, as the original

// f_0012b3dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Runs the function at 0x131154 on +0x10 under the lock at +4.
namespace d_0012b3dc {

inline constexpr guest::Function<0x00131154, u32(u32)> FrameHeap__push_state;
inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> RecursiveLock__lock;
inline constexpr guest::Function<0x001357ec, u32(u32)> RecursiveLock__unlock;

void locked_call_131154(u32 r0) {
    u32 lock = r0 + 4u;
    RecursiveLock__lock(lock, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_2 = FrameHeap__push_state(r0 + 0x10u);  // (from the original)
    RecursiveLock__unlock(lock);
}

}  // namespace d_0012b3dc
GUEST_EXPORT_FRAMED(0x0012b3dc, d_0012b3dc::locked_call_131154, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0012b40c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Shuts the system services down in order and releases their global objects.
namespace d_0012b40c {

inline guest::global<u8, 0x00ac1933> global_00ac1933;
inline constexpr guest::Function<0x001008e9, u32(u32)> release_global_object_64;
inline constexpr guest::Function<0x00100901, u32(u32)> release_global_object_48;
inline constexpr guest::Function<0x00100919, u32(u32)> destroy_font_heap;
inline constexpr guest::Function<0x00100931, u32(u32)> destroy_save_heap;
inline constexpr guest::Function<0x00100949, u32(u32, u32, u32, u32)> Heaps__destroy_work_heap;
inline constexpr guest::Function<0x00100961, u32(u32)> Heaps__destroy_fader_heap;
inline constexpr guest::Function<0x00100979, u32(u32)> destroy_field_heap;
inline constexpr guest::Function<0x00100999, u32(u32, u32, u32, u32)> destroy_photo_heap;
inline constexpr guest::Function<0x001009b1, u32(u32)> Heaps__destroy_sound_heap;
inline constexpr guest::Function<0x001009c9, u32(u32)> Heaps__destroy_script_heap;
inline constexpr guest::Function<0x001009e5, u32(u32)> Heaps__destroy_weather_heap;
inline constexpr guest::Function<0x001009fd, u32(u32)> Heaps__destroy_real_estate_heap;
inline constexpr guest::Function<0x00100a15, u32(u32)> Heaps__destroy_model_effect_unit_heap;
inline constexpr guest::Function<0x00100a2d, u32(u32)> Heaps__destroy_sead_particle_heap;
inline constexpr guest::Function<0x00100a45, u32(u32)> Heaps__destroy_human_anim_bank_heap;
inline constexpr guest::Function<0x00100a5d, u32(u32)> Heaps__destroy_model_effect_res_heap;
inline constexpr guest::Function<0x00100a75, u32(u32)> Heaps__destroy_particle_handle_heap;
inline constexpr guest::Function<0x00132558, u32(u32)> SaveData__flush;

u32 shutdown_system_services(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = Heaps__destroy_work_heap(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_2 = destroy_field_heap(r0_1);
    u32 r0_3 = Heaps__destroy_real_estate_heap(r0_2);
    u32 r0_4 = Heaps__destroy_human_anim_bank_heap(r0_3);
    u32 r0_5 = Heaps__destroy_weather_heap(r0_4);
    u32 r0_6 = Heaps__destroy_particle_handle_heap(r0_5);
    u32 r0_7 = Heaps__destroy_sead_particle_heap(r0_6);
    u32 r0_8 = Heaps__destroy_model_effect_unit_heap(r0_7);
    u32 r0_9 = Heaps__destroy_model_effect_res_heap(r0_8);
    u32 r0_10 = Heaps__destroy_fader_heap(r0_9);
    u32 r0_11 = release_global_object_48(r0_10);
    u32 r0_12 = Heaps__destroy_script_heap(r0_11);
    u32 r0_13 = destroy_font_heap(r0_12);
    u32 r0_14 = Heaps__destroy_sound_heap(r0_13);
    u32 r0_15 = destroy_save_heap(r0_14);
    SaveData__flush(r0_15);
    u32 r0_16 = *global_00ac1933;
    if (r0_16 == 0) {
        frame.release();
        return destroy_photo_heap(r0_16, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    u32 r0_17 = release_global_object_64(r0_16);
    frame.release();
    return destroy_photo_heap(r0_17, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0012b40c
GUEST_EXPORT(0x0012b40c, d_0012b40c::shutdown_system_services);

// f_0012bd24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012bd24 {

inline constexpr u32 vtable_sead__GameFramework = 0x00904458u;
inline constexpr u32 vtable_sead__SafeStringBase_char_ = 0x009047f8u;
inline constexpr guest::Function<0x0013208c, u32(u32)> sead__Framework__Framework;

u32 sead__GameFramework__GameFramework(gptr<sead__GameFramework> game_framework) {
    sead__Framework__Framework(game_framework.addr());
    game_framework->vtable = vtable_sead__GameFramework;
    game_framework->byte_28 = 0;
    game_framework->safe_string_base_char_vtable = vtable_sead__SafeStringBase_char_;
    game_framework->word_30 = 0x8a3ba0;  // (from the original)
    game_framework->safe_string_base_char_vtable_34 = vtable_sead__SafeStringBase_char_;
    game_framework->word_38 = 0x8a3ba0;  // (from the original)
    game_framework->safe_string_base_char_vtable_3c = vtable_sead__SafeStringBase_char_;
    game_framework->word_40 = 0x8a3ba0;  // (from the original)
    game_framework->word_44 = 0;
    game_framework->word_4c = 0;
    game_framework->word_48 = 0x131560;  // (from the original)
    return game_framework.addr();
}

}  // namespace d_0012bd24
GUEST_EXPORT_FRAMED(0x0012bd24, d_0012bd24::sead__GameFramework__GameFramework, 0x4010);  // pushes {r4, lr} first, as the original

// f_0012bd88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012bd88 {

inline constexpr u32 vtable_sead__AudioPlayerCtr = 0x00904554u;
inline constexpr u32 vtable_sead__AudioPlayerCtr_at_4 = 0x00904598u;
inline constexpr u32 vtable_sead__AudioPlayerCtr_at_11c = 0x009045b0u;
inline constexpr guest::Function<0x0012bfec, u32(u32, u32, u32, u32)> sead__CriticalSection__CriticalSection_0012bfec;
inline constexpr guest::Function<0x00130d6c, u32(u32, u32, u32, u32)> nw__snd__SoundArchivePlayer__SoundArchivePlayer;
inline constexpr guest::Function<0x00131be0, u32(u32)> sead__AudioSoundDataMgrCtr__AudioSoundDataMgrCtr;
inline constexpr guest::Function<0x001391d8, u32(u32, u32)> allocate;

u32 sead__AudioPlayerCtr__AudioPlayerCtr(gptr<sead__AudioPlayerCtr> audio_player_ctr, u32 r1, u32 r2, u32 r3) {
    u32 r5 = guest::cpu()->r[5];
    u32 sound_archive_player = audio_player_ctr.addr() + 4u;
    nw__snd__SoundArchivePlayer__SoundArchivePlayer(sound_archive_player, r1, r2, r3);
    audio_player_ctr->audio_player_ctr_vtable = vtable_sead__AudioPlayerCtr_at_4;
    u32 r4_1 = sound_archive_player + 0x118u;  // (from the original)
    audio_player_ctr->vtable = vtable_sead__AudioPlayerCtr;
    audio_player_ctr->audio_player_ctr_vtable_11c = vtable_sead__AudioPlayerCtr_at_11c;
    audio_player_ctr->word_120 = 0;
    audio_player_ctr->word_124 = 0;
    audio_player_ctr->word_128 = 0;
    audio_player_ctr->word_12c = 0;
    audio_player_ctr->word_130 = 0;
    audio_player_ctr->word_134 = 0;
    audio_player_ctr->word_138 = 0;
    audio_player_ctr->word_13c = 0;
    audio_player_ctr->word_140 = 0;
    audio_player_ctr->word_144 = 0;
    audio_player_ctr->word_148 = 0;
    audio_player_ctr->byte_14c = 0;
    sead__CriticalSection__CriticalSection_0012bfec(sound_archive_player + 0x14cu, vtable_sead__AudioPlayerCtr_at_4, vtable_sead__AudioPlayerCtr, vtable_sead__AudioPlayerCtr_at_11c);  // (from the original)
    audio_player_ctr->byte_16c = 0;
    u32 block_2 = allocate(0x230u, r5);  // (from the original)
    if (block_2 != 0) {
        block_2 = sead__AudioSoundDataMgrCtr__AudioSoundDataMgrCtr(block_2);
    }
    audio_player_ctr->word_144 = block_2;
    return sound_archive_player - 4u;
}

}  // namespace d_0012bd88
GUEST_EXPORT_FRAMED(0x0012bd88, d_0012bd88::sead__AudioPlayerCtr__AudioPlayerCtr, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0012be14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012be14 {

inline constexpr u32 vtable_sead__AudioSystemCtr = 0x009045bcu;
inline constexpr u32 vtable_sead__AudioSystemCtr_at_4 = 0x00904608u;
inline constexpr guest::Function<0x0012bfec, u32(u32, u32, u32, u32)> sead__CriticalSection__CriticalSection_0012bfec;

u32 sead__AudioSystemCtr__AudioSystemCtr(gptr<sead__AudioSystemCtr> audio_system_ctr) {
    audio_system_ctr->word_8 = 4;
    audio_system_ctr->word_c = 3;
    audio_system_ctr->word_10 = 0x4000;  // (from the original)
    audio_system_ctr->word_18 = 0;
    audio_system_ctr->word_14 = 0x4000;  // (from the original)
    audio_system_ctr->word_1c = 0;
    audio_system_ctr->word_20 = 0;
    audio_system_ctr->vtable = vtable_sead__AudioSystemCtr;
    audio_system_ctr->audio_system_ctr_vtable = vtable_sead__AudioSystemCtr_at_4;
    u32 r14 = 1u;
    audio_system_ctr->byte_24 = 0;
    audio_system_ctr->byte_25 = u8(r14);
    u32 r3_1 = ~0u;
    audio_system_ctr->byte_26 = 0;
    audio_system_ctr->word_28 = r3_1;
    audio_system_ctr->byte_2c = u8(r14);
    audio_system_ctr->word_30 = 4;
    audio_system_ctr->word_3c = 0x20000;  // (from the original)
    audio_system_ctr->word_34 = 0;
    audio_system_ctr->word_38 = 0x4000;  // (from the original)
    u32 r8_1 = audio_system_ctr.addr() + 0x40u;  // (from the original)
    audio_system_ctr->word_48 = 0x2000;  // (from the original)
    audio_system_ctr->word_40 = 3;
    audio_system_ctr->word_44 = 0x4000;  // (from the original)
    u32 r5_1 = audio_system_ctr.addr() + 0x64u;  // (from the original)
    audio_system_ctr->byte_4c = u8(r14);
    audio_system_ctr->byte_4d = 0;
    audio_system_ctr->byte_4e = u8(r14);
    audio_system_ctr->word_50 = r3_1;
    audio_system_ctr->byte_54 = 0;
    audio_system_ctr->word_58 = 0;
    audio_system_ctr->byte_5c = 0;
    u32 r1_1 = audio_system_ctr.addr() + 0x60u;  // (from the original)
    audio_system_ctr->byte_5d = 0;
    audio_system_ctr->word_64 = r1_1;
    audio_system_ctr->word_68 = 0;
    u32 ea_1 = audio_system_ctr.addr() + 0x60u;  // (from the original)
    audio_system_ctr->word_60 = r1_1;
    audio_system_ctr->word_6c = r3_1;
    sead__CriticalSection__CriticalSection_0012bfec(ea_1 + 0x10u, r1_1, 0u, r3_1);  // (from the original)
    audio_system_ctr->word_6c = 4;
    return ea_1 - 0x60u;  // (from the original)
}

}  // namespace d_0012be14
GUEST_EXPORT_FRAMED(0x0012be14, d_0012be14::sead__AudioSystemCtr__AudioSystemCtr, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0012bed8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012bed8 {

struct __attribute__((packed)) Object_0012bed8_0 {
    u8 unknown_0[0x3c];  // (not used here)
    u32 word_3c;
};
GUEST_OFFSET(Object_0012bed8_0, word_3c, 0x3c);

inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> lock_member_lock;

void lock_lock_at_3c_if_present(gptr<Object_0012bed8_0> arg0) {
    u32 r0_1 = arg0->word_3c;
    if (r0_1 == 0) {
        return;
    }
    lock_member_lock(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0012bed8
GUEST_EXPORT(0x0012bed8, d_0012bed8::lock_lock_at_3c_if_present);

// f_0012bf54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012bf54 {

struct __attribute__((packed)) Object_0012bf54_0 {
    u8 unknown_0[0x3c];  // (not used here)
    u32 word_3c;
};
GUEST_OFFSET(Object_0012bf54_0, word_3c, 0x3c);

inline constexpr guest::Function<0x00137e84, u32(u32, u32)> unlock_member_lock;

u32 unlock_lock_at_3c_if_present(gptr<Object_0012bf54_0> arg0) {
    u32 r0_1 = arg0->word_3c;
    if (r0_1 == 0) {
        return r0_1;
    }
    return unlock_member_lock(r0_1, guest::cpu()->r[1]);
}

}  // namespace d_0012bf54
GUEST_EXPORT(0x0012bf54, d_0012bf54::unlock_lock_at_3c_if_present);

// f_0012bf68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012bf68 {

inline constexpr u32 vtable_sead__MethodTreeNode = 0x009047b0u;
inline constexpr u32 vtable_sead__SafeStringBase_char_ = 0x009047f8u;
inline constexpr u32 vtable_sead__Delegate_sead__MethodTreeNode_ = 0x00905bf0u;
inline guest::global<u32, 0x008a3b78> global_008a3b78;
inline guest::global<u32, 0x008a3b7c> global_008a3b7c;
inline constexpr guest::Function<0x0012c528, u32(u32, u32, u32, u32)> store_constants_12c528;
inline constexpr guest::Function<0x00132174, u32(u32, u32, u32)> sead__IDisposer__IDisposer_00132174;

u32 MethodTreeNode__construct(gptr<sead__MethodTreeNode> method_tree_node, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = method_tree_node.addr() + 0x10u;  // (from the original)
    store_constants_12c528(r0_1, r1, r2, r3);
    method_tree_node->word_28 = 0x12bfd8;  // (from the original)
    method_tree_node->safe_string_base_char_vtable = vtable_sead__SafeStringBase_char_;
    method_tree_node->word_20 = method_tree_node.addr();
    sead__IDisposer__IDisposer_00132174(r0_1 - 0x10u, r1, vtable_sead__SafeStringBase_char_);  // (from the original)
    method_tree_node->vtable = vtable_sead__MethodTreeNode;
    method_tree_node->word_44 = 0;
    method_tree_node->word_3c = r1;
    method_tree_node->word_48 = 0;
    method_tree_node->word_4c = 0;
    if (r0_1 + 0x1cu != 0) {  // (from the original)
        method_tree_node->word_30 = 0;
        u32 r3_2 = *global_008a3b7c;
        method_tree_node->word_34 = *global_008a3b78;
        method_tree_node->word_38 = r3_2;
        method_tree_node->method_tree_node_vtable = vtable_sead__Delegate_sead__MethodTreeNode_;
    }
    guest::cpu()->r[1] = r0_1 + 0x1cu;  // (from the original)
    return r0_1 - 0x10u;  // (from the original)
}

}  // namespace d_0012bf68
GUEST_EXPORT_FRAMED(0x0012bf68, d_0012bf68::MethodTreeNode__construct, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0012bfec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012bfec {

inline constexpr u32 vtable_sead__CriticalSection = 0x00904830u;
inline constexpr guest::Function<0x0012f154, u32(u32, u32)> RecursiveLock__initialize;
inline constexpr guest::Function<0x00132174, u32(u32, u32, u32, u32)> sead__IDisposer__IDisposer_00132174;

u32 sead__CriticalSection__CriticalSection_0012bfec(gptr<sead__CriticalSection> critical_section) {
    u32 r1 = 0;
    sead__IDisposer__IDisposer_00132174(critical_section.addr(), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    critical_section->vtable = vtable_sead__CriticalSection;
    critical_section->word_10 = 0;
    RecursiveLock__initialize(critical_section.addr() + 0x10u, 0u);  // (from the original)
    return critical_section.addr();
}

}  // namespace d_0012bfec
GUEST_EXPORT_FRAMED(0x0012bfec, d_0012bfec::sead__CriticalSection__CriticalSection_0012bfec, 0x4010);  // pushes {r4, lr} first, as the original

// f_0012c018: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012c018 {

inline constexpr u32 vtable_sead__AudioResetterCtr = 0x00904cf0u;
inline constexpr guest::Function<0x001318c0, u32(u32)> sead__AudioResetter__AudioResetter;

u32 sead__AudioResetterCtr__AudioResetterCtr(gptr<sead__AudioResetterCtr> audio_resetter_ctr) {
    sead__AudioResetter__AudioResetter(audio_resetter_ctr.addr());
    float S0_1 = 1.0f;
    audio_resetter_ctr->vtable = vtable_sead__AudioResetterCtr;
    audio_resetter_ctr->byte_8 = 0;
    audio_resetter_ctr->byte_9 = 0;
    audio_resetter_ctr->float_c = S0_1;
    guest::cpu()->r[1] = 0u;
    guest::cpu()->s[0] = S0_1;
    return audio_resetter_ctr.addr();
}

}  // namespace d_0012c018
GUEST_EXPORT_FRAMED(0x0012c018, d_0012c018::sead__AudioResetterCtr__AudioResetterCtr, 0x4010);  // pushes {r4, lr} first, as the original

// f_0012c0e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Loads the sound data (with the given or default heap, +0x228) when the loader is ready; false otherwise.
namespace d_0012c0e8 {

struct __attribute__((packed)) SoundPlayer {
    u8 unknown_0[0x228];  // (not used here)
    u32 word_228;
};
GUEST_OFFSET(SoundPlayer, word_228, 0x228);

inline constexpr guest::Function<0x00130f0c, u32(u32, u32, u32, u32)> SoundDataLoader__load;
inline constexpr guest::Function<0x001330fc, u32(u32, u32, u32, u32)> has_active_child_at_4;

struct __attribute__((packed)) Frame_0012c0e8 {
    u32 word_0;
};
GUEST_OFFSET(Frame_0012c0e8, word_0, 0x0);
GUEST_SIZE(Frame_0012c0e8, 0x4);

u32 SoundPlayer__load_data(gptr<SoundPlayer> sound_player, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0012c0e8> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r8_1 = r1;
    u32 r4_1 = *frame.at<u32>(0x20);  // (from the original)
    u32 zf_1 = r4_1 == 0;
    if (zf_1) {
        r4_1 = sound_player->word_228;
        zf_1 = r4_1 == 0;
    }
    if (!zf_1) {
        u32 r0_2 = has_active_child_at_4(sound_player.addr() + 0xcu, r1, r2, r3);  // (from the original)
        r1 = guest::cpu()->r[1];
        if (r0_2 != 0) {
            frame->word_0 = r3;
            u32 r0_4 = SoundDataLoader__load(sound_player.addr() + 0xcu, r8_1, r4_1, r2);  // (from the original)
            return r0_4;
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_0012c0e8
GUEST_EXPORT_FRAMED(0x0012c0e8, d_0012c0e8::SoundPlayer__load_data, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_0012c144: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012c144 {

inline constexpr u32 vtable_sead__AudioSettingParameter = 0x009053f8u;

void sead__AudioSettingParameter__AudioSettingParameter(gptr<sead__AudioSettingParameter> audio_setting_parameter) {
    audio_setting_parameter->vtable = vtable_sead__AudioSettingParameter;
    audio_setting_parameter->word_4 = 0;
    u32 r1_1 = audio_setting_parameter.addr() + 0x14u;  // (from the original)
    audio_setting_parameter->word_8 = 0;
    audio_setting_parameter->word_c = 0;
    audio_setting_parameter->word_10 = 0;
    audio_setting_parameter->word_18 = r1_1;
    audio_setting_parameter->word_1c = 0;
    audio_setting_parameter->word_14 = r1_1;
    audio_setting_parameter->word_20 = 4;
    guest::cpu()->r[1] = 4u;
}

}  // namespace d_0012c144
GUEST_EXPORT(0x0012c144, d_0012c144::sead__AudioSettingParameter__AudioSettingParameter);

// f_0012c17c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012c17c {

inline constexpr u32 vtable_sead__SafeStringBase_char_ = 0x009047f8u;
inline constexpr u32 vtable_sead__AudioResourceLoaderCtr = 0x00905568u;

void sead__AudioResourceLoaderCtr__AudioResourceLoaderCtr(gptr<sead__AudioResourceLoaderCtr> audio_resource_loader_ctr) {
    float S0_1 = 1.0f;
    audio_resource_loader_ctr->vtable = vtable_sead__AudioResourceLoaderCtr;
    audio_resource_loader_ctr->byte_4 = 0;
    audio_resource_loader_ctr->word_8 = 0;
    audio_resource_loader_ctr->word_c = 0;
    audio_resource_loader_ctr->word_10 = 0;
    audio_resource_loader_ctr->word_14 = std::bit_cast<u32>(S0_1);
    audio_resource_loader_ctr->word_18 = 0;
    audio_resource_loader_ctr->word_1c = 0;
    audio_resource_loader_ctr->safe_string_base_char_vtable = vtable_sead__SafeStringBase_char_;
    audio_resource_loader_ctr->word_28 = 0;
    audio_resource_loader_ctr->word_24 = 0x8c9f1c;  // (from the original)
    audio_resource_loader_ctr->word_2c = 0;
    guest::cpu()->r[1] = 0u;
    guest::cpu()->s[0] = S0_1;
}

}  // namespace d_0012c17c
GUEST_EXPORT(0x0012c17c, d_0012c17c::sead__AudioResourceLoaderCtr__AudioResourceLoaderCtr);

// f_0012c40c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012c40c {

struct __attribute__((packed)) Local_0012c40c_r0_2 {
    u8 unknown_0[0x68];  // (not used here)
    u32 word_68;
};
GUEST_OFFSET(Local_0012c40c_r0_2, word_68, 0x68);

inline guest::global<u32, 0x009753d0> thread_mgr_instance;
inline constexpr guest::Function<0x00138c78, u32(u32)> ThreadLocal__get;

u32 service_call(u32 r0_unused, u32 r1) {
    gptr<Local_0012c40c_r0_2> r0_2 = gptr<Local_0012c40c_r0_2>(ThreadLocal__get(*thread_mgr_instance + 0x40u));  // (from the original)
    u32 r1_1 = r0_2->word_68;
    r0_2->word_68 = r1;
    guest::cpu()->r[1] = r1_1;
    return r1_1;
}

}  // namespace d_0012c40c
GUEST_EXPORT_FRAMED(0x0012c40c, d_0012c40c::service_call, 0x4010);  // pushes {r4, lr} first, as the original

// f_0012c48c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012c48c {

struct __attribute__((packed)) Object_0012c48c_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_0012c48c_1, word_0, 0x0);
GUEST_OFFSET(Object_0012c48c_1, word_4, 0x4);
GUEST_OFFSET(Object_0012c48c_1, word_8, 0x8);

struct __attribute__((packed)) Local_0012c48c_r1_1 {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
    float float_10;
    float float_14;
};
GUEST_OFFSET(Local_0012c48c_r1_1, float_0, 0x0);
GUEST_OFFSET(Local_0012c48c_r1_1, float_4, 0x4);
GUEST_OFFSET(Local_0012c48c_r1_1, float_8, 0x8);
GUEST_OFFSET(Local_0012c48c_r1_1, float_c, 0xc);
GUEST_OFFSET(Local_0012c48c_r1_1, float_10, 0x10);
GUEST_OFFSET(Local_0012c48c_r1_1, float_14, 0x14);

inline constexpr u32 vtable_sead__SafeStringBase_char_ = 0x009047f8u;
inline constexpr u32 vtable_sead__TaskBase = 0x00905c88u;
inline constexpr guest::Function<0x0012c528, u32(u32, u32, u32, u32)> store_constants_12c528;
inline constexpr guest::Function<0x00132174, u32(u32, u32)> sead__IDisposer__IDisposer_00132174;

u32 sead__TaskBase__TaskBase(gptr<sead__TaskBase> task_base, gptr<Object_0012c48c_1> arg1, u32 r2, u32 r3, float S0, float S1, float S2, float S3, float S4, float S5) {
    u32 r0_1 = task_base.addr() + 0x10u;  // (from the original)
    store_constants_12c528(r0_1, arg1.addr(), r2, r3);
    task_base->word_20 = task_base.addr();
    sead__IDisposer__IDisposer_00132174(r0_1 - 0x10u, arg1.addr());  // (from the original)
    task_base->vtable = vtable_sead__TaskBase;
    task_base->word_28 = 0x8a3ba4;  // (from the original)
    task_base->safe_string_base_char_vtable = vtable_sead__SafeStringBase_char_;
    task_base->word_2c = arg1->word_8;
    task_base->word_30 = 0;
    task_base->word_34 = 0;
    task_base->word_38 = 0;
    task_base->word_3c = r0_1 - 0x10u;  // (from the original)
    task_base->word_40 = 0;
    gptr<Local_0012c48c_r1_1> r1_1 = gptr<Local_0012c48c_r1_1>(arg1->word_0);
    float S0_2 = r1_1->float_0;
    float S1_2 = r1_1->float_4;
    float S2_2 = r1_1->float_8;
    float S3_2 = r1_1->float_c;
    float S4_2 = r1_1->float_10;
    float S5_2 = r1_1->float_14;
    task_base->float_44 = S0_2;
    task_base->float_48 = S1_2;
    task_base->float_4c = S2_2;
    task_base->float_50 = S3_2;
    task_base->float_54 = S4_2;
    task_base->float_58 = S5_2;
    task_base->task_mgr = arg1->word_4;
    task_base->byte_64 = 0;
    task_base->word_68 = 0;
    task_base->byte_60 = 0;
    task_base->byte_61 = 1;
    task_base->word_28 = r2;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    return r0_1 - 0x10u;  // (from the original)
}

}  // namespace d_0012c48c
GUEST_EXPORT_FRAMED(0x0012c48c, d_0012c48c::sead__TaskBase__TaskBase, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0012c984: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012c984 {

struct __attribute__((packed)) Local_0012c984_r0_4 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_0012c984_r0_4, float_0, 0x0);
GUEST_OFFSET(Local_0012c984_r0_4, float_4, 0x4);

struct __attribute__((packed)) Local_0012c984_r4_1 {
    u8 unknown_0[0xb0];  // (not used here)
    u32 word_b0;
    u8 unknown_b4[0x44];  // (not used here)
    float float_f8;
    u32 word_fc;
    u32 word_100;
    u32 word_104;
    u32 word_108;
    u32 word_10c;
    u32 word_110;
    u32 word_114;
    u32 word_118;
    u8 byte_11c;
    u8 byte_11d;
    u8 byte_11e;
    u8 byte_11f;
    u8 byte_120;
    u8 byte_121;
    u8 byte_122;
    u8 unknown_123[0x1];  // (not used here)
    float float_124;
    float float_128;
    float float_12c;
    float float_130;
    u32 word_134;
    u8 byte_138;
    u8 unknown_139[0xb];  // (not used here)
    float float_144;
    float float_148;
};
GUEST_OFFSET(Local_0012c984_r4_1, word_b0, 0xb0);
GUEST_OFFSET(Local_0012c984_r4_1, float_f8, 0xf8);
GUEST_OFFSET(Local_0012c984_r4_1, word_fc, 0xfc);
GUEST_OFFSET(Local_0012c984_r4_1, word_100, 0x100);
GUEST_OFFSET(Local_0012c984_r4_1, word_104, 0x104);
GUEST_OFFSET(Local_0012c984_r4_1, word_108, 0x108);
GUEST_OFFSET(Local_0012c984_r4_1, word_10c, 0x10c);
GUEST_OFFSET(Local_0012c984_r4_1, word_110, 0x110);
GUEST_OFFSET(Local_0012c984_r4_1, word_114, 0x114);
GUEST_OFFSET(Local_0012c984_r4_1, word_118, 0x118);
GUEST_OFFSET(Local_0012c984_r4_1, byte_11c, 0x11c);
GUEST_OFFSET(Local_0012c984_r4_1, byte_11d, 0x11d);
GUEST_OFFSET(Local_0012c984_r4_1, byte_11e, 0x11e);
GUEST_OFFSET(Local_0012c984_r4_1, byte_11f, 0x11f);
GUEST_OFFSET(Local_0012c984_r4_1, byte_120, 0x120);
GUEST_OFFSET(Local_0012c984_r4_1, byte_121, 0x121);
GUEST_OFFSET(Local_0012c984_r4_1, byte_122, 0x122);
GUEST_OFFSET(Local_0012c984_r4_1, float_124, 0x124);
GUEST_OFFSET(Local_0012c984_r4_1, float_128, 0x128);
GUEST_OFFSET(Local_0012c984_r4_1, float_12c, 0x12c);
GUEST_OFFSET(Local_0012c984_r4_1, float_130, 0x130);
GUEST_OFFSET(Local_0012c984_r4_1, word_134, 0x134);
GUEST_OFFSET(Local_0012c984_r4_1, byte_138, 0x138);
GUEST_OFFSET(Local_0012c984_r4_1, float_144, 0x144);
GUEST_OFFSET(Local_0012c984_r4_1, float_148, 0x148);

inline constexpr u32 vtable_ssys__ma__lyt__DummyLayout = 0x0090615cu;
inline constexpr u32 vtable_ssys__ma__lyt__Layout = 0x009061ecu;
inline constexpr guest::Function<0x00130c70, u32(u32, u32)> nw__lyt__Layout__Layout;
inline constexpr guest::Function<0x00130cac, u32(u32, u32)> nw__lyt__DrawInfo__DrawInfo;
inline constexpr guest::Function<0x001323bc, u32(u32, u32)> read_global_975c20;
inline constexpr guest::Function<0x001324a8, u32(u32, u32, u32, u32)> construct_list_node;

u32 ssys__ma__lyt__Layout__Layout(gptr<ssys__ma__lyt__Layout> layout, u32 r1, float S0, float S1) {
    construct_list_node(layout.addr(), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    layout->byte_c = 0x80;  // (from the original)
    layout->vtable = vtable_ssys__ma__lyt__Layout;
    u32 r0_1 = layout.addr() + 0x10u;  // (from the original)
    nw__lyt__Layout__Layout(r0_1, vtable_ssys__ma__lyt__Layout);
    layout->dummy_layout_vtable = vtable_ssys__ma__lyt__DummyLayout;
    u32 r0_3 = nw__lyt__DrawInfo__DrawInfo(r0_1 + 0x20u, vtable_ssys__ma__lyt__DummyLayout);  // (from the original)
    gptr<Local_0012c984_r4_1> r4_1 = gptr<Local_0012c984_r4_1>(r0_3 - 0x30u);  // (from the original)
    u32 ea_1 = r0_3 + 0xbcu;  // (from the original)
    *gptr<u32>(ea_1) = 0;
    float S0_3 = 0.0f;
    gptr<Local_0012c984_r0_4> r0_4 = gptr<Local_0012c984_r0_4>(ea_1 + 4u);
    float S1_3 = 1.0f;
    r0_4->float_0 = S0_3;
    r0_4->float_4 = S0_3;
    r4_1->float_f8 = S1_3;
    r4_1->word_fc = 0;
    r4_1->word_100 = 0;
    r4_1->word_104 = 0;
    r4_1->word_108 = 0;
    r4_1->word_10c = 0;
    r4_1->word_110 = 0;
    r4_1->word_114 = 0;
    r4_1->word_118 = 0;
    r4_1->byte_11c = 0;
    r4_1->byte_11d = 0;
    r4_1->byte_11e = 0;
    r4_1->byte_11f = 0;
    r4_1->byte_120 = 0;
    r4_1->byte_121 = 0;
    r4_1->byte_122 = 0;
    r4_1->float_124 = S0_3;
    r4_1->float_128 = S0_3;
    r4_1->float_12c = S0_3;
    r4_1->float_130 = S0_3;
    r4_1->word_134 = 0;
    r4_1->byte_138 = 0;
    r4_1->float_144 = S0_3;
    r4_1->float_148 = S0_3;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_3;
    u32 r0_5 = read_global_975c20(r0_4.addr(), 0u);
    r4_1->word_b0 = r0_5 + 0x1cu;  // (from the original)
    return r4_1.addr();
}

}  // namespace d_0012c984
GUEST_EXPORT_FRAMED(0x0012c984, d_0012c984::ssys__ma__lyt__Layout__Layout, 0x4010);  // pushes {r4, lr} first, as the original

// f_0012ca6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores arg 1 at the object's offset 4 and returns 1.
namespace d_0012ca6c {

struct __attribute__((packed)) Object_0012ca6c_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_0012ca6c_0, word_4, 0x4);


u32 set_word_4_and_succeed(gptr<Object_0012ca6c_0> arg0, u32 r1) {
    arg0->word_4 = r1;
    return 1u;
}

}  // namespace d_0012ca6c
GUEST_EXPORT(0x0012ca6c, d_0012ca6c::set_word_4_and_succeed);

// f_0012ca7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012ca7c {

inline constexpr u32 vtable_sead__FixedSafeString_128_ = 0x00904860u;
inline constexpr u32 vtable_sead__FixedSafeStringBase_char__128_ = 0x009050bcu;
inline constexpr u32 vtable_sead__BufferedSafeStringBase_char_ = 0x0090558cu;
inline constexpr u32 vtable_ssys__ma__LoadSplit = 0x009062a0u;
inline guest::global<u8, 0x008c9f1c> empty_string;
inline constexpr guest::Function<0x001323cc, u32(u32)> construct_file_handle_001323cc;
inline constexpr guest::Function<0x001324a8, u32(u32, u32, u32, u32)> construct_list_node;

u32 construct_load_split(gptr<ssys__ma__LoadSplit> load_split, u32 r1, u32 r2, u32 r3) {
    construct_list_node(load_split.addr(), r1, r2, r3);
    load_split->vtable = vtable_ssys__ma__LoadSplit;
    construct_file_handle_001323cc(load_split.addr() + 0xcu);  // (from the original)
    load_split->word_44 = load_split.addr() + 0x4cu;  // (from the original)
    load_split->vtable_40 = vtable_sead__BufferedSafeStringBase_char_;
    load_split->word_48 = 0x80;  // (from the original)
    *gptr<u8>(load_split->word_44 + 0x7fu) = *empty_string;  // (from the original)
    load_split->vtable_40 = vtable_sead__FixedSafeStringBase_char__128_;
    *gptr<u8>(load_split->word_44) = *empty_string;
    load_split->vtable_40 = vtable_sead__FixedSafeString_128_;
    load_split->word_cc = 0;
    load_split->word_d0 = 0;
    load_split->word_d4 = 0;
    load_split->word_d8 = 0;
    load_split->word_dc = 0;
    load_split->word_e0 = 0;
    load_split->word_e4 = 0;
    load_split->byte_e8 = 0;
    load_split->byte_e9 = 0;
    load_split->byte_ea = 0;
    guest::cpu()->r[1] = 0u;
    return load_split.addr();
}

}  // namespace d_0012ca7c
GUEST_EXPORT_FRAMED(0x0012ca7c, d_0012ca7c::construct_load_split, 0x4010);  // pushes {r4, lr} first, as the original

// f_0012cb24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012cb24 {

inline guest::global<u8, 0x0095c4d2> clock_state_flags;

u32 call_12cb24() {
    return (u32(*clock_state_flags) & 2u) >> 1;
}

}  // namespace d_0012cb24
GUEST_EXPORT(0x0012cb24, d_0012cb24::call_12cb24);

// f_0012cb3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012cb3c {

inline guest::global<u8, 0x0095c4d2> clock_state_flags;

void call_12cb3c() {
    *clock_state_flags = u8(u32(*clock_state_flags) & ~2u);
}

}  // namespace d_0012cb3c
GUEST_EXPORT(0x0012cb3c, d_0012cb3c::call_12cb3c);

// f_0012d3ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Releases the layout at +0x27c.
namespace d_0012d3ec {

inline constexpr guest::Function<0x001323b4, u32(u32, u32, u32, u32)> layout_at_10_virtual_8;

void release_layout_27c(u32 r0) {
    layout_at_10_virtual_8(r0 + 0x27cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0012d3ec
GUEST_EXPORT(0x0012d3ec, d_0012d3ec::release_layout_27c);

// f_0012d3f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When loaded (+0xeb18), unloads the split part, releases its object and clears flag 4 at +0xf126.
namespace d_0012d3f4 {

struct __attribute__((packed)) Object_0012d3f4_0 {
    u8 unknown_0[0xeb18];  // (not used here)
    u32 word_eb18;
};
GUEST_OFFSET(Object_0012d3f4_0, word_eb18, 0xeb18);

inline constexpr guest::Function<0x002f73b8, u32(u32, u32, u32, u32)> unload_split_part;
inline constexpr guest::Function<0x002f747c, u32(u32, u32)> ObjectOwner__release_object;
inline constexpr guest::Function<0x00317a00, u32(u32, u32, u32)> set_flag_below_8_00317a00;

void release_scene_resources(gptr<Object_0012d3f4_0> arg0, u32 r1, u32 r2) {
    if (arg0->word_eb18 == 0) {
        return;
    }
    unload_split_part(arg0.addr() + 0xea0cu, r1, r2, guest::cpu()->r[3]);  // (from the original)
    ObjectOwner__release_object(arg0.addr() + 0xeb14u, r1);  // (from the original)
    set_flag_below_8_00317a00(arg0.addr() + 0xf126u, 4u, 0u);  // (from the original)
}

}  // namespace d_0012d3f4
GUEST_EXPORT_FRAMED(0x0012d3f4, d_0012d3f4::release_scene_resources, 0x4010);  // pushes {r4, lr} first, as the original

// f_0012d4ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Runs the finish step, then the destroy step.
namespace d_0012d4ac {

inline constexpr guest::Function<0x0012d4bc, u32(u32, u32, u32, u32)> SaveState__close_service;
inline constexpr guest::Function<0x0012d4e8, u32(u32, u32, u32, u32)> SaveState__finish;

u32 finish_then_destroy_12d4bc(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = SaveState__finish(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    frame.release();
    return SaveState__close_service(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0012d4ac
GUEST_EXPORT(0x0012d4ac, d_0012d4ac::finish_then_destroy_12d4bc);

// f_0012d89c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Converts the sound parameters (volume, pitch) and writes them.
namespace d_0012d89c {

struct __attribute__((packed)) Object_0012d89c_0 {
    u8 byte_0;
    u8 byte_1;
    u8 unknown_2[0x2];  // (not used here)
    float float_4;
    u8 unknown_8[0x4];  // (not used here)
    float float_c;
    float float_10;
    u32 word_14;
};
GUEST_OFFSET(Object_0012d89c_0, byte_0, 0x0);
GUEST_OFFSET(Object_0012d89c_0, byte_1, 0x1);
GUEST_OFFSET(Object_0012d89c_0, float_4, 0x4);
GUEST_OFFSET(Object_0012d89c_0, float_c, 0xc);
GUEST_OFFSET(Object_0012d89c_0, float_10, 0x10);
GUEST_OFFSET(Object_0012d89c_0, word_14, 0x14);

struct __attribute__((packed)) Object_0012d89c_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Object_0012d89c_1, word_0, 0x0);
GUEST_OFFSET(Object_0012d89c_1, word_4, 0x4);
GUEST_OFFSET(Object_0012d89c_1, word_8, 0x8);
GUEST_OFFSET(Object_0012d89c_1, word_c, 0xc);
GUEST_OFFSET(Object_0012d89c_1, word_10, 0x10);
GUEST_OFFSET(Object_0012d89c_1, word_14, 0x14);

inline constexpr guest::Function<0x00132ea8, u32(u32, u32, u32, u32)> write_enable_commands;

u32 write_sound_params(gptr<Object_0012d89c_0> arg0, gptr<Object_0012d89c_1> arg1, u32 r2, u32 r3, float S0, float S1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r1 = arg1.addr();
    u32 r14 = guest::cpu()->r[14];
    u32 r0_5 = 0;
    if (arg0->byte_0 != 0) {
        arg1->word_0 = 0xe40103;  // (from the original)
        arg1->word_4 = 0x10100;  // (from the original)
        u32 r1_1 = r1 + 8u;
        u32 r0_1 = 0u;
        if (r3 != 0) {
            arg1->word_8 = r0_1;
            arg1->word_c = 0x200080;  // (from the original)
            arg1->word_10 = r0_1;
            arg1->word_14 = r0_1;
            r1_1 += 0x10u;  // (from the original)
        }
        float S0_1 = arg0->float_4;
        if (!(S0_1 <= 0.0f) && 0xffu != (std::bit_cast<u32>(S0_1) >> 0x17u & 0xffu)) {  // (from the original)
            float S0_2 = S0_1 * 16777216.0f;
            u32 r0_2 = std::bit_cast<u32>(S0_2);
            if (0x4b800000u != r0_2 && s32(0x4b800000u) >= s32(r0_2)) {  // (from the original)
                S0_2 = std::bit_cast<float>(vcvt_uz_f(S0_2));
            }
            r0_1 = s32(0x4b800000u) <= s32(r0_2) ? ~0xff000000u : std::bit_cast<u32>(S0_2);  // (from the original)
        }
        *gptr<u32>(r1_1) = u32(arg0->byte_1 == 0) | r0_1 >> 1 << 1;
        u32 r1_2 = r1_1 + 4u;
        *gptr<u32>(r1_2) = 0xf008b;  // (from the original)
        u32 r1_3 = r1_2 + 4u;
        S1 = arg0->float_c;
        u32 r0_3 = std::bit_cast<u32>(S1 + arg0->float_10);
        u32 r3_1 = r0_3 & ~0x80000000u;  // (from the original)
        if (r3_1 != 0) {
            u32 r3_2 = (r0_3 >> 0x17u & 0xffu) - 0x70u;  // (from the original)
            r14 = s32(r3_2) < 0 ? r0_3 >> 0x1f << 0xf : uxth((r0_3 & ~0x1f800000u) >> 0xd | r3_2 << 0xa | r0_3 >> 0x1f << 0xf);  // (from the original)
        } else {
            r14 = uxth((r0_3 & ~0x1f800000u) >> 0xd | r3_1 << 0xa | r0_3 >> 0x1f << 0xf);  // (from the original)
        }
        S0 = -S1;
        u32 r0_4 = std::bit_cast<u32>(S0);
        u32 r3_3 = r0_4 & ~0x80000000u;  // (from the original)
        if (r3_3 != 0) {
            u32 r3_4 = (r0_4 >> 0x17u & 0xffu) - 0x70u;  // (from the original)
            r0_5 = s32(r3_4) < 0 ? r0_4 >> 0x1f << 0xf : uxth((r0_4 & ~0x1f800000u) >> 0xd | r3_4 << 0xa | r0_4 >> 0x1f << 0xf);  // (from the original)
        } else {
            r0_5 = uxth((r0_4 & ~0x1f800000u) >> 0xd | r3_3 << 0xa | r0_4 >> 0x1f << 0xf);  // (from the original)
        }
        r3 = r14 | r0_5 << 0x10;  // (from the original)
        *gptr<u32>(r1_3) = r3;
        u32 r1_4 = r1_3 + 4u;
        *gptr<u32>(r1_4) = 0xf0130;  // (from the original)
        r1 = r1_4 + 4u;
    }
    if (r2 == 0) {
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r1;
    }
    u32 r0_6 = arg0->word_14 + 0x7cu;  // (from the original)
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    frame.release();
    return write_enable_commands(r0_6, r1, 1u, r3);
}

}  // namespace d_0012d89c
GUEST_EXPORT(0x0012d89c, d_0012d89c::write_sound_params);

// f_0012de20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012de20 {

struct __attribute__((packed)) Object_0012de20_0 {
    u8 unknown_0[0x30];  // (not used here)
    u32 word_30;
    u32 word_34;
};
GUEST_OFFSET(Object_0012de20_0, word_30, 0x30);
GUEST_OFFSET(Object_0012de20_0, word_34, 0x34);

struct __attribute__((packed)) Object_0012de20_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_0012de20_1, word_4, 0x4);
GUEST_OFFSET(Object_0012de20_1, word_8, 0x8);
GUEST_OFFSET(Object_0012de20_1, word_c, 0xc);

inline constexpr guest::Function<0x00136084, u32(u32, u32)> Heap__free_veneer;

void notify_segment(gptr<Object_0012de20_0> arg0, gptr<Object_0012de20_1> arg1) {
    u32 r0_1 = arg0->word_34;
    *gptr<u32>(r0_1 + 8u) = arg1->word_4 + arg1->word_8 - r0_1 - 0x18u >> 3;  // (from the original)
    Heap__free_veneer(arg1->word_4, arg1->word_8);
    arg1->word_c = arg1->word_c | 4u;
    arg1->word_8 = arg0->word_30;
    arg0->word_34 = 0;
    arg0->word_30 = 0;
}

}  // namespace d_0012de20
GUEST_EXPORT_FRAMED(0x0012de20, d_0012de20::notify_segment, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0012e640: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Signed 64-bit division through the unsigned one, the operands and the quotient negated as their signs need.
namespace d_0012e640 {

inline constexpr guest::Function<0x0012e350, u32(u32, u32, u32, u32)> uint64_divide;

u32 int64_divide(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 b_1 = s32(r1) >> 1;
    u32 signs = b_1 ^ r3 >> 1;
    if (s32(b_1) < 0) {
        u32 cf_1 = 0u >= r0;
        r0 = 0u - r0;
        r1 = 0ull + ~r1 + cf_1;
    }
    if (s32(r3 & r3) < 0) {
        u32 cf_2 = 0u >= r2;
        r2 = 0u - r2;
        r3 = 0ull + ~r3 + cf_2;
    }
    u32 low = uint64_divide(r0, r1, r2, r3);
    u32 high = guest::cpu()->r[1];
    if ((signs & 0x40000000u) != 0) {  // (from the original)
        u32 cf_3 = 0u >= low;
        low = 0u - low;
        high = 0ull + ~high + cf_3;
    }
    guest::cpu()->r[1] = high;
    return low;
}

}  // namespace d_0012e640
GUEST_EXPORT_FRAMED(0x0012e640, d_0012e640::int64_divide, 0x4010);  // pushes {r4, lr} first, as the original

// f_0012e8e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012e8e8 {


void DuckingFader__virtual_2(gptr<SoundFaderEx> sound_fader_ex, float S0) {
    sound_fader_ex->word_4 = std::bit_cast<u32>(S0);
    sound_fader_ex->word_8 = std::bit_cast<u32>(S0);
    sound_fader_ex->res = ~0u;
    sound_fader_ex->word_14 = 0;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_0012e8e8
GUEST_EXPORT(0x0012e8e8, d_0012e8e8::DuckingFader__virtual_2);

// f_0012e904: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When the BGM flag (0x94cd06) is set, clears it and the sound system's two words, and stops the sound (+0x1c).
namespace d_0012e904 {

struct __attribute__((packed)) SoundSystemBgm {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u8 unknown_8[0x14];  // (not used here)
    u32 word_1c;
};
GUEST_OFFSET(SoundSystemBgm, word_4, 0x4);
GUEST_OFFSET(SoundSystemBgm, word_1c, 0x1c);

inline constexpr u32 bgm_stop_flag_address = 0x0094cd06u;
inline guest::global<u8, 0x0094cd06> bgm_stop_flag;
inline guest::global<u32, 0x0094d080> sound_system;
inline constexpr guest::Function<0x00136e4c, u32(u32, u32, u32, u32)> store_two_words_at_10_136e4c;
inline constexpr guest::Function<0x00136e58, u32(u32, u32, u32, u32)> BasicSound__stop;

u32 SoundSystemBgm__stop(gptr<SoundSystemBgm> sound_system_bgm) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r1_1 = *bgm_stop_flag;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return bgm_stop_flag_address;
    }
    sound_system_bgm->word_4 = 0;
    *bgm_stop_flag = 0;
    store_two_words_at_10_136e4c(*gptr<u32>(*sound_system + 0xc0cu) + 4u, 0u, 0u, guest::cpu()->r[3]);  // (from the original)
    u32 r0_2 = sound_system_bgm->word_1c;
    if (r0_2 == 0) {
        return r0_2;
    }
    frame.release();
    return BasicSound__stop(r0_2, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0012e904
GUEST_EXPORT(0x0012e904, d_0012e904::SoundSystemBgm__stop);

// f_0012eacc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys the two number pairs, the four blocks and the 16 halves.
namespace d_0012eacc {

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;

u32 Grid2x2__destroy(u32 grid2x2) {
    destroy_array_elements(grid2x2 + 0x1022u, 0x134fe8u, 4u, 2u);  // (from the original)
    destroy_array_elements(grid2x2 + 0x22u, 0x138b98u, 0x400u, 4u);  // (from the original)
    destroy_array_elements(grid2x2 + 2u, 0x138ab0u, 2u, 0x10u);  // (from the original)
    return grid2x2;
}

}  // namespace d_0012eacc
GUEST_EXPORT_FRAMED(0x0012eacc, d_0012eacc::Grid2x2__destroy, 0x4010);  // pushes {r4, lr} first, as the original

// f_0012eb28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys the four 0x1228-byte entries.
namespace d_0012eb28 {

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;

u32 Block1228__destroy_all(u32 block1228) {
    destroy_array_elements(block1228, 0x134fa4u, 0x1228u, 4u);  // (from the original)
    return block1228;
}

}  // namespace d_0012eb28
GUEST_EXPORT_FRAMED(0x0012eb28, d_0012eb28::Block1228__destroy_all, 0x4010);  // pushes {r4, lr} first, as the original

// f_0012ebf4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Releases the slot's sound data request (all of it when asked, else its own, +0x14).
namespace d_0012ebf4 {

inline constexpr u32 sound_data_load_mgr_instance_address = 0x0094cd20u;
inline guest::global<u32, 0x0094cd20> sound_data_load_mgr_instance;
inline constexpr guest::Function<0x00135010, u32(u32, u32, u32, u32)> SoundSlots__trim_queue;
inline constexpr guest::Function<0x0013d4f0, u32(u32, u32, u32, u32)> SoundBank__slot_ready;

u32 SoundSlot__release_request(u32 sound_slot, u32 r1) {
    u32 sound_slots = *sound_data_load_mgr_instance;
    if (sound_slots != 0) {
        if (r1 != 0) {
            sound_slots = SoundBank__slot_ready(sound_slots, 0u, 1u, guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
        } else {
            r1 = *gptr<u32>(sound_slot + 0x14u);  // (from the original)
            if (r1 + 1u == 0) {
                guest::cpu()->r[1] = r1;
                return sound_slots;
            }
            sound_slots = SoundSlots__trim_queue(sound_slots, r1, 1u, guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
        }
        *gptr<u32>(sound_slot + 0x14u) = ~0u;  // (from the original)
    }
    guest::cpu()->r[1] = r1;
    return sound_slots;
}

}  // namespace d_0012ebf4
GUEST_EXPORT_FRAMED(0x0012ebf4, d_0012ebf4::SoundSlot__release_request, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0012ec48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012ec48 {

inline constexpr u32 vtable_SoundMelodyPlayerBase = 0x008f54d0u;

void SoundMelodyPlayerBase__SoundMelodyPlayerBase(gptr<SoundMelodyPlayerBase> sound_melody_player_base) {
    float S0_1 = 1.0f;
    u32 r2_1 = ~0u;
    sound_melody_player_base->vtable = vtable_SoundMelodyPlayerBase;
    sound_melody_player_base->word_4 = 0;
    sound_melody_player_base->float_8 = S0_1;
    sound_melody_player_base->word_c = 0;
    sound_melody_player_base->word_10 = 0;
    sound_melody_player_base->byte_24 = 0;
    sound_melody_player_base->word_44 = r2_1;
    float S1_1 = -1.0f;
    sound_melody_player_base->byte_48 = 0;
    sound_melody_player_base->byte_49 = 0;
    sound_melody_player_base->float_14 = S1_1;
    sound_melody_player_base->float_18 = S1_1;
    sound_melody_player_base->half_1c = u16(r2_1);
    sound_melody_player_base->half_1e = u16(r2_1);
    sound_melody_player_base->half_20 = u16(r2_1);
    sound_melody_player_base->half_22 = u16(~0x63u);  // (from the original)
    float S0_2 = 0.0f;
    sound_melody_player_base->word_28 = r2_1;
    sound_melody_player_base->word_2c = r2_1;
    sound_melody_player_base->float_30 = S0_2;
    sound_melody_player_base->word_34 = 0;
    sound_melody_player_base->float_38 = S0_2;
    sound_melody_player_base->float_3c = S0_2;
    sound_melody_player_base->byte_40 = 0;
    sound_melody_player_base->byte_41 = 0;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_0012ec48
GUEST_EXPORT(0x0012ec48, d_0012ec48::SoundMelodyPlayerBase__SoundMelodyPlayerBase);

// f_0012ecd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the 0x3000-byte buffer at 0xad6670 and its four counters.
namespace d_0012ecd4 {

inline constexpr u32 global_00ad6670_address = 0x00ad6670u;
inline guest::global<u32, 0x0095e308> global_0095e308;
inline guest::global<u32, 0x0095e30c> global_0095e30c;
inline guest::global<u32, 0x0095e310> global_0095e310;
inline guest::global<u32, 0x0095e314> global_0095e314;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;

void clear_buffer_ad6670() {
    *global_0095e308 = 0;
    *global_0095e314 = 0;
    *global_0095e310 = 0;
    *global_0095e30c = 0;
    clear_aligned(global_00ad6670_address, 0x3000u);
    return;  // (from the original)
}

}  // namespace d_0012ecd4
GUEST_EXPORT(0x0012ecd4, d_0012ecd4::clear_buffer_ad6670);

// f_0012edc0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs the file with an empty path record.
namespace d_0012edc0 {

inline constexpr guest::Function<0x00135158, u32(u32, u32, u32, u32)> nn__fs__CTR__MPCore__detail__FileServerArchive__File__File_00135158;

struct __attribute__((packed)) Frame_0012edc0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Frame_0012edc0, word_0, 0x0);
GUEST_OFFSET(Frame_0012edc0, word_4, 0x4);
GUEST_OFFSET(Frame_0012edc0, word_8, 0x8);
GUEST_SIZE(Frame_0012edc0, 0xc);

u32 File__construct_with_empty_path() {
    guest::StackFrameOf<Frame_0012edc0> frame;  // the original's stack frame
    frame->word_0 = 0;
    frame->word_4 = 0;
    frame->word_8 = 0;
    nn__fs__CTR__MPCore__detail__FileServerArchive__File__File_00135158(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], frame.at(0).addr());
    return guest::cpu()->r[0];
}

}  // namespace d_0012edc0
GUEST_EXPORT_FRAMED(0x0012edc0, d_0012edc0::File__construct_with_empty_path, 0x4000);  // pushes {lr} first, as the original

// f_0012ede8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012ede8 {

struct __attribute__((packed)) Object_0012ede8_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0012ede8_0, word_0, 0x0);


u32 call_virtual_12_if_present(gptr<Object_0012ede8_0> object, u32 r1) {
    if (object.addr() == 0) {
        return object.addr();
    }
    u32 r1_1 = *gptr<u32>(object->word_0 + 0x30u);  // (from the original)
    // virtual function 12 of object.addr()
    return guest::call_address<u32>(r1_1, object.addr(), r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0012ede8
GUEST_EXPORT(0x0012ede8, d_0012ede8::call_virtual_12_if_present);

// f_0012ee90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The object at 0x974f20; a fatal error when it is missing.
namespace d_0012ee90 {

inline constexpr u32 required_object_address = 0x00974f20u;
inline guest::global<u32, 0x00974f20> required_object;
inline constexpr guest::Function<0x00134250, u32(u32, u32, u32, u32)> fatal_result;

u32 required_object_974f20() {
    u32 r0 = 0;
    if (*required_object == 0) {
        fatal_result(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    return *required_object;
}

}  // namespace d_0012ee90
GUEST_EXPORT_FRAMED(0x0012ee90, d_0012ee90::required_object_974f20, 0x4010);  // pushes {r4, lr} first, as the original

// f_0012eeb0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Mounts the RomFS archive as rom:.
namespace d_0012eeb0 {

inline constexpr guest::Function<0x00135680, u32(u32, u32, u32, u32)> Thread__create;

struct __attribute__((packed)) Frame_0012eeb0 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0012eeb0, word_0, 0x0);
GUEST_OFFSET(Frame_0012eeb0, word_4, 0x4);
GUEST_SIZE(Frame_0012eeb0, 0xc);

void mount_rom(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0012eeb0> frame;  // the original's stack frame
    u32 r1_1 = *frame.at<u32>(0x10);  // (from the original)
    frame->word_0 = r3;
    frame->word_4 = r1_1;
    Thread__create(0x12eee4u, r0, r1, r2);  // (from the original)
}

}  // namespace d_0012eeb0
GUEST_EXPORT_FRAMED(0x0012eeb0, d_0012eeb0::mount_rom, 0x4000);  // pushes {lr} first, as the original

// f_0012eeec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012eeec {

inline constexpr guest::Function<0x0012f038, u32(u32, u32, u32, u32)> atomic_store_one;

u32 LightEvent__initialize(u32 light_event, u32 manual_reset, u32 r2_unused, u32 r3) {
    u32 r0_2 = 0;
    u32 r4 = light_event;
    atomic_store_one(light_event + 4u, manual_reset, guest::cpu()->r[2], r3);
    manual_reset = manual_reset == 0 ? ~0u : ~1u;
    do {
        r0_2 = *gptr<u32>(r4);
        *gptr<u32>(r4) = manual_reset;
        guest::preempt();
    } while (!u32(1));
    guest::cpu()->r[1] = manual_reset;
    return r0_2;
}

}  // namespace d_0012eeec
GUEST_EXPORT_FRAMED(0x0012eeec, d_0012eeec::LightEvent__initialize, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0012ef20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Waits until the event is signaled (an automatic one is cleared again by the waiter that wakes).
namespace d_0012ef20 {

inline constexpr u32 service_handle_cache_address = 0x0097dff8u;
inline constexpr guest::Function<0x00134c68, u32(u32, u32, u32, u32)> svc_arbitrate_address;

struct __attribute__((packed)) Frame_0012ef20 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0012ef20, word_0, 0x0);
GUEST_OFFSET(Frame_0012ef20, word_4, 0x4);
GUEST_SIZE(Frame_0012ef20, 0xc);

u32 LightEvent__wait(u32 light_event, u32 r1) {
    guest::StackFrameOf<Frame_0012ef20> frame;  // the original's stack frame
    u32 r2 = 0;
    u32 r4 = 0;
    u32 event = light_event;
    u32 arbiter = service_handle_cache_address;
    do {
        light_event = *gptr<u32>(event);
        if (light_event + 2u == 0) {
            u32 r0_1 = *gptr<u32>(arbiter);
            frame->word_0 = 0;
            frame->word_4 = 0;
            u32 r0_2 = svc_arbitrate_address(r0_1, event, 1u, 0u);
            return r0_2;
        }
        if (light_event + 1u != 0) {
            if (light_event == 0) {
                light_event = event;
                r2 = 0u;
                r4 = ~0u;
                goto L_12ef90;
            }
            if (light_event != 1u) {
                goto L_12efb8;
            }
            guest::cpu()->r[1] = r1;
            return light_event;
L_12ef90:;
            u32 r3_1 = *gptr<u32>(light_event);
            if (r3_1 == r2) {
                *gptr<u32>(light_event) = r4;
                if (0) {
                    guest::preempt();
                    goto L_12ef90;
                }
            }
            if (r3_1 == 0) {
                guest::cpu()->r[1] = r1;
                return light_event;
            }
        }
L_12efb8:;
        u32 r0_3 = *gptr<u32>(arbiter);
        frame->word_0 = 0;
        frame->word_4 = 0;
        svc_arbitrate_address(r0_3, event, 1u, 0u);
        r1 = guest::cpu()->r[1];
        guest::preempt();
    } while (1);
}

}  // namespace d_0012ef20
GUEST_EXPORT_FRAMED(0x0012ef20, d_0012ef20::LightEvent__wait, 0x40f0);  // pushes {r4, arbiter, event, r7, lr} first, as the original

// f_0012efe8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012efe8 {

struct __attribute__((packed)) LightEvent {
    u32 word_0;
};
GUEST_OFFSET(LightEvent, word_0, 0x0);


u32 LightEvent__try_wait(gptr<LightEvent> event) {
    u32 r0 = event.addr();
    u32 r1 = event->word_0;
    if (r1 != 1u) {
        u32 r2 = 0u;
        r1 = ~0u;
L_12f000:;
        u32 r3_1 = *gptr<u32>(r0);
        if (r3_1 == r2) {
            *gptr<u32>(r0) = r1;
            if (!u32(1)) {
                guest::preempt();
                goto L_12f000;
            }
        }
        if (r3_1 != 0) {
            guest::cpu()->r[1] = r1;
            return 0u;
        }
    }
    guest::cpu()->r[1] = r1;
    return 1u;
}

}  // namespace d_0012efe8
GUEST_EXPORT_FRAMED(0x0012efe8, d_0012efe8::LightEvent__try_wait, 0x30);  // pushes {r4, r5} first, as the original

// f_0012f038: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012f038 {

struct __attribute__((packed)) Lock {
    u32 word_0;
};
GUEST_OFFSET(Lock, word_0, 0x0);


void atomic_store_one(gptr<Lock> lock) {
    u32 r1 = 1u;
    do {
        lock->word_0 = r1;
        guest::preempt();
    } while (!u32(1));
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0012f038
GUEST_EXPORT(0x0012f038, d_0012f038::atomic_store_one);

// f_0012f154: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012f154 {

struct __attribute__((packed)) RecursiveLock {
    u8 unknown_0[0x4];  // (not used here)
    u32 owner;
    u32 depth;
};
GUEST_OFFSET(RecursiveLock, owner, 0x4);
GUEST_OFFSET(RecursiveLock, depth, 0x8);

inline constexpr guest::Function<0x0012f038, u32(u32)> atomic_store_one;

u32 RecursiveLock__initialize(gptr<RecursiveLock> lock) {
    atomic_store_one(lock.addr());
    lock->owner = 0;
    lock->depth = 0;
    return 0u;
}

}  // namespace d_0012f154
GUEST_EXPORT_FRAMED(0x0012f154, d_0012f154::RecursiveLock__initialize, 0x4010);  // pushes {r4, lr} first, as the original

// f_0012f170: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Creates a shared memory block over page-aligned memory (fails when already created).
namespace d_0012f170 {

struct __attribute__((packed)) MemoryBlock {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0x4];  // (not used here)
    u32 word_14;
};
GUEST_OFFSET(MemoryBlock, word_8, 0x8);
GUEST_OFFSET(MemoryBlock, word_c, 0xc);
GUEST_OFFSET(MemoryBlock, word_14, 0x14);

inline constexpr guest::Function<0x0012f204, u32(u32, u32)> check_result;
inline constexpr guest::Function<0x00134c98, u32(u32, u32, u32, u32)> svc_create_memory_block;

struct __attribute__((packed)) Frame_0012f170 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x10];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0012f170, word_0, 0x0);
GUEST_OFFSET(Frame_0012f170, word_4, 0x4);
GUEST_SIZE(Frame_0012f170, 0x18);

u32 MemoryBlock__create(gptr<MemoryBlock> block, u32 address, u32 size) {
    guest::StackFrameOf<Frame_0012f170> frame;  // the original's stack frame
    u32 result = 0;
    u32 r12_1 = *frame.at<u32>(0x18);  // (from the original)
    if (block->word_8 != 0) {
        result = 0x8a01bf9u;  // (from the original)
    } else if ((address & 0xfffu) != 0u) {  // (from the original)
        result = 0xe0e01bf1u;  // (from the original)
    } else if ((size & 0xfffu) != 0u) {  // (from the original)
        result = 0xe0e01bf2u;  // (from the original)
    } else {
        frame->word_4 = 0;
        frame->word_0 = r12_1;
        result = svc_create_memory_block(frame.at(4).addr(), address, size, guest::cpu()->r[3]);
        if ((result >> 0x1f) == 0) {  // (from the original)
            block->word_14 = frame->word_4;
            block->word_8 = address;
            block->word_c = size;
        }
    }
    u32 r1_1 = result >> 0x1f;  // (from the original)
    if (r1_1 != 0) {
        frame.release();
        return check_result(result, r1_1);
    }
    guest::cpu()->r[1] = r1_1;
    return result;
}

}  // namespace d_0012f170
GUEST_EXPORT(0x0012f170, d_0012f170::MemoryBlock__create);

// f_0012f204: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// A failed result code (negative) is reported as fatal, unless its level is one the caller tolerates; a success passes
// through.
namespace d_0012f204 {

struct __attribute__((packed)) Local_0012f204_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0012f204_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0012f204_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_0012f204_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0012f204_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_0012f204_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_0012f204_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0012f204_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_0012f204_ea_4, word_4, 0x4);

struct __attribute__((packed)) Local_0012f204_ea_5 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0012f204_ea_5, word_0, 0x0);
GUEST_OFFSET(Local_0012f204_ea_5, word_4, 0x4);

struct __attribute__((packed)) Local_0012f204_ea_6 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0012f204_ea_6, word_0, 0x0);
GUEST_OFFSET(Local_0012f204_ea_6, word_4, 0x4);

inline guest::global<u8, 0x00974f50> global_00974f50;
inline guest::global<u8, 0x1ff80014> global_1ff80014;
inline constexpr guest::Function<0x001292b0, u32(u32, u32, u32, u32)> report_fatal_result;
inline constexpr guest::Function<0x00134250, u32(u32, u32, u32, u32)> fatal_result;

struct __attribute__((packed)) Frame_0012f204 {
    u8 unknown_0[0x4];  // (not read or written by name)
    u32 word_4;
};
GUEST_OFFSET(Frame_0012f204, word_4, 0x4);
GUEST_SIZE(Frame_0012f204, 0x8);

u32 check_result(u32 result) {
    guest::StackFrameOf<Frame_0012f204> frame;  // the original's stack frame
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_0012f204_ea_1> ea_1 = gptr<Local_0012f204_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r4;
    ea_1->word_4 = r14;
    u32 r3_1 = s8(*global_00974f50);
    u32 level = result >> 0x1b;  // (from the original)
    if (s32(result) < 0) {
        level -= 0x20u;  // (from the original)
    }
    if ((u32(*global_1ff80014) & 1u | r3_1) != 0) {
        if (level + 7u == 0 || level == 1u) {
            gptr<Local_0012f204_ea_2> ea_2 = gptr<Local_0012f204_ea_2>(frame.at(0).addr());
            u32 r4_1 = ea_2->word_0;
            guest::cpu()->r[1] = level;
            guest::cpu()->r[4] = r4_1;
            return result;
        }
        u32 r2_1 = frame->word_4;
        gptr<Local_0012f204_ea_4> ea_4 = gptr<Local_0012f204_ea_4>(frame.at(0).addr());
        u32 r4_2 = ea_4->word_0;
        r14 = ea_4->word_4;
        guest::cpu()->r[4] = r4_2;
        frame.release();
        return report_fatal_result(result, 0u, r2_1, r3_1);
    }
    if (level + 1u != 0) {
        gptr<Local_0012f204_ea_5> ea_5 = gptr<Local_0012f204_ea_5>(frame.at(0).addr());
        u32 r4_3 = ea_5->word_0;
        r14 = ea_5->word_4;
        guest::cpu()->r[4] = r4_3;
        frame.release();
        return fatal_result(result, level, r2, r3_1);
    }
    u32 r2_2 = frame->word_4;
    u32 r0_1 = report_fatal_result(result, 0u, r2_2, r3_1);
    gptr<Local_0012f204_ea_6> ea_6 = gptr<Local_0012f204_ea_6>(frame.at(0).addr());
    u32 r4_4 = ea_6->word_0;
    r14 = ea_6->word_4;
    guest::cpu()->r[4] = r4_4;
    frame.release();
    return fatal_result(r0_1, guest::cpu()->r[1], r2_2, guest::cpu()->r[3]);
}

}  // namespace d_0012f204
GUEST_EXPORT(0x0012f204, d_0012f204::check_result);

// f_0012f278: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Unmounts the storage when mounted (0x974f76).
namespace d_0012f278 {

inline guest::global<u8, 0x00974f76> storage_mounted;
inline constexpr guest::Function<0x001358c0, u32(u32, u32, u32, u32)> unmount_storage_or_report;

u32 unmount_mounted_storage() {
    u32 r0_1 = *storage_mounted;
    if (r0_1 == 0) {
        return r0_1;
    }
    unmount_storage_or_report(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *storage_mounted = 0;
    return 0u;
}

}  // namespace d_0012f278
GUEST_EXPORT_FRAMED(0x0012f278, d_0012f278::unmount_mounted_storage, 0x4010);  // pushes {r4, lr} first, as the original

// f_0012f384: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls the applet service with the arguments under its light lock (retrying every millisecond); an error when the
// applet is not up.
namespace d_0012f384 {

inline constexpr u32 global_0097d874_address = 0x0097d874u;
inline constexpr u32 global_0097d875_address = 0x0097d875u;
inline constexpr u32 applet_lock_address = 0x0097d884u;
inline constexpr guest::Function<0x0012f274, u32(u32, u32)> sleep_thread_ns;
inline constexpr guest::Function<0x0013580c, u32(u32)> LightLock__unlock;
inline constexpr guest::Function<0x00135858, u32(u32, u32, u32, u32)> LightLock__try_lock;
inline constexpr guest::Function<0x00135b30, u32(u32, u32, u32, u32)> ipc_command_11_buffer;

struct __attribute__((packed)) Frame_0012f384 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Frame_0012f384, word_0, 0x0);
GUEST_OFFSET(Frame_0012f384, word_4, 0x4);
GUEST_SIZE(Frame_0012f384, 0x8);

u32 Applet__call_locked(u32 applet, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0012f384> frame;  // the original's stack frame
    u32 r6 = applet;
    u32 r4 = global_0097d874_address;
    u32 r7 = r1;
    u32 r8 = r2;
    u32 r5 = r3;
    if (*gptr<u32>(r4 + 8u) == 0 || *gptr<u8>(r4 + 1u) != 0) {
        return 0xc8a0a7fcu;  // (from the original)
    }
    do {
        u32 r0_1 = LightLock__try_lock(applet_lock_address, r1, r2, r3);
        if (r0_1 != 0) {
            frame->word_0 = r5;
            frame->word_4 = 0x97d875;  // (from the original)
            u32 r0_3 = ipc_command_11_buffer(*gptr<u32>(r4 + 8u), r6, r7, r8);
            LightLock__unlock(applet_lock_address);
            return r0_3;
        }
        sleep_thread_ns(0xf4240u, 0u);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        guest::preempt();
    } while (1);
}

}  // namespace d_0012f384
GUEST_EXPORT_FRAMED(0x0012f384, d_0012f384::Applet__call_locked, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0012f598: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012f598 {

inline constexpr u32 fatal_error_info_address = 0x00ae0ab8u;
inline guest::global<u8, 0x00ae0ab8> fatal_error_info;
inline guest::global<u8, 0x00ae0ab9> fatal_error_level;
inline guest::global<u16, 0x00ae0aba> fatal_error_module;
inline guest::global<u32, 0x00ae0abc> fatal_error_result;
inline guest::global<u32, 0x00ae0ac0> fatal_error_location;
inline constexpr guest::Function<0x00129330, u32(u32, u32, u32, u32)> raise_fatal_error;

u32 report_fatal_result_with_info(u32 result, u32 info) {
    *fatal_error_level = 0;
    *fatal_error_module = 0xf22c;  // (from the original)
    *fatal_error_info = 0;
    *fatal_error_location = info;
    *fatal_error_result = result;
    return raise_fatal_error(fatal_error_info_address, info, result, 0u);
}

}  // namespace d_0012f598
GUEST_EXPORT(0x0012f598, d_0012f598::report_fatal_result_with_info);

// f_0012f600: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Allocates a block of `size` with its alignment, direction and group, counting it (+0x54).
namespace d_0012f600 {

struct __attribute__((packed)) ExpHeap {
    u8 unknown_0[0x54];  // (not used here)
    u32 word_54;
};
GUEST_OFFSET(ExpHeap, word_54, 0x54);

struct __attribute__((packed)) Local_0012f600_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0012f600_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0012f600_ea_1, word_4, 0x4);

inline constexpr guest::Function<0x0012f664, u32(u32, u32, u32)> ParamBlock__reserve;
inline constexpr guest::Function<0x0012f814, u32(u32, u32, u32, u32)> ExpHeapBlock__set_alignment;
inline constexpr guest::Function<0x0012f824, u32(u32, u32)> ExpHeapBlock__set_direction;
inline constexpr guest::Function<0x0012f844, u32(u32, u32)> ExpHeapBlock__set_group;

u32 ExpHeap__allocate_counted(gptr<ExpHeap> exp_heap, u32 r1, u32 r2, u32 r3) {
    gptr<Local_0012f600_ea_1> ea_1 = gptr<Local_0012f600_ea_1>(guest::cpu()->r[13] + 0x18u);  // (from the original)
    u32 r7_1 = ea_1->word_0;
    u32 r8_1 = ea_1->word_4;
    ExpHeapBlock__set_alignment(exp_heap.addr() + 0x18u, r3, r2, r3);  // (from the original)
    ExpHeapBlock__set_direction(exp_heap.addr() + 0x18u, r7_1);  // (from the original)
    ExpHeapBlock__set_group(exp_heap.addr() + 0x18u, r8_1);  // (from the original)
    u32 r0_5 = ParamBlock__reserve(exp_heap.addr() + 0x18u, r1, r2);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_5 != 0) {
        r1_1 = exp_heap->word_54 + 1u;
        exp_heap->word_54 = r1_1;
    }
    guest::cpu()->r[1] = r1_1;
    return r0_5;
}

}  // namespace d_0012f600
GUEST_EXPORT_FRAMED(0x0012f600, d_0012f600::ExpHeap__allocate_counted, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0012f814: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the block's alignment (+0x34).
namespace d_0012f814 {

struct __attribute__((packed)) ExpHeapBlock {
    u8 unknown_0[0x34];  // (not used here)
    u16 half_34;
};
GUEST_OFFSET(ExpHeapBlock, half_34, 0x34);


void ExpHeapBlock__set_alignment(gptr<ExpHeapBlock> exp_heap_block, u32 r1) {
    exp_heap_block->half_34 = u16(r1);
}

}  // namespace d_0012f814
GUEST_EXPORT(0x0012f814, d_0012f814::ExpHeapBlock__set_alignment);

// f_0012f824: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the block's direction bit (+0x36 bit 0).
namespace d_0012f824 {

struct __attribute__((packed)) ExpHeapBlock {
    u8 unknown_0[0x36];  // (not used here)
    u16 half_36;
};
GUEST_OFFSET(ExpHeapBlock, half_36, 0x36);


void ExpHeapBlock__set_direction(gptr<ExpHeapBlock> exp_heap_block, u32 r1) {
    exp_heap_block->half_36 = u16(r1 & 1u | u32(exp_heap_block->half_36) & ~1u);
}

}  // namespace d_0012f824
GUEST_EXPORT(0x0012f824, d_0012f824::ExpHeapBlock__set_direction);

// f_0012f844: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the block's group id (+0x38).
namespace d_0012f844 {

struct __attribute__((packed)) ExpHeapBlock {
    u8 unknown_0[0x38];  // (not used here)
    u8 byte_38;
};
GUEST_OFFSET(ExpHeapBlock, byte_38, 0x38);


void ExpHeapBlock__set_group(gptr<ExpHeapBlock> exp_heap_block, u32 r1) {
    exp_heap_block->byte_38 = u8(r1);
}

}  // namespace d_0012f844
GUEST_EXPORT(0x0012f844, d_0012f844::ExpHeapBlock__set_group);

// f_0012f854: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Zeroes the record and sets its half at +0xa.
namespace d_0012f854 {

struct __attribute__((packed)) Record0c {
    u32 word_0;
    u32 word_4;
    u16 half_8;
    u16 half_a;
};
GUEST_OFFSET(Record0c, word_0, 0x0);
GUEST_OFFSET(Record0c, word_4, 0x4);
GUEST_OFFSET(Record0c, half_8, 0x8);
GUEST_OFFSET(Record0c, half_a, 0xa);


void Record0c__init_with_half(gptr<Record0c> record0c, u32 r1) {
    record0c->half_a = u16(r1);
    record0c->word_0 = 0;
    record0c->word_4 = 0;
    record0c->half_8 = 0;
}

}  // namespace d_0012f854
GUEST_EXPORT(0x0012f854, d_0012f854::Record0c__init_with_half);

// f_0012fa68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Unmounts the bad-word archive and frees its memory when held, then resets the filter.
namespace d_0012fa68 {

struct __attribute__((packed)) NgWordFilter {
    u8 unknown_0[0x18];  // (not used here)
    u8 byte_18;
    u8 byte_19;
    u8 byte_1a;
    u8 unknown_1b[0x1];  // (not used here)
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u32 word_28;
    u32 word_2c;
    u8 byte_30;
};
GUEST_OFFSET(NgWordFilter, byte_18, 0x18);
GUEST_OFFSET(NgWordFilter, byte_19, 0x19);
GUEST_OFFSET(NgWordFilter, byte_1a, 0x1a);
GUEST_OFFSET(NgWordFilter, word_1c, 0x1c);
GUEST_OFFSET(NgWordFilter, word_20, 0x20);
GUEST_OFFSET(NgWordFilter, word_24, 0x24);
GUEST_OFFSET(NgWordFilter, word_28, 0x28);
GUEST_OFFSET(NgWordFilter, word_2c, 0x2c);
GUEST_OFFSET(NgWordFilter, byte_30, 0x30);

inline constexpr guest::Function<0x00135520, u32(u32, u32, u32, u32)> cfl_unmount_135520;
inline constexpr guest::Function<0x00135720, u32(u32, u32, u32, u32)> release_memory_block_if_set;

void NgWordFilter__finalize(gptr<NgWordFilter> ng_word_filter, u32 r1) {
    if (ng_word_filter->byte_19 != 0) {
        cfl_unmount_135520(0x8a24c8u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    }
    if (ng_word_filter->byte_18 != 0) {
        release_memory_block_if_set(ng_word_filter.addr() + 4u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    ng_word_filter->byte_18 = 0;
    ng_word_filter->byte_19 = 0;
    ng_word_filter->byte_1a = 0;
    ng_word_filter->word_1c = 0;
    ng_word_filter->word_20 = 0;
    ng_word_filter->word_24 = 0;
    ng_word_filter->word_28 = 0;
    ng_word_filter->word_2c = 0;
    ng_word_filter->byte_30 = 1;
    guest::cpu()->r[1] = 1u;
}

}  // namespace d_0012fa68
GUEST_EXPORT_FRAMED(0x0012fa68, d_0012fa68::NgWordFilter__finalize, 0x4010);  // pushes {r4, lr} first, as the original

// f_0012fe1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets or clears bit 24 of the first entry's word in the list (+4).
namespace d_0012fe1c {

struct __attribute__((packed)) Object_0012fe1c_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_0012fe1c_0, word_4, 0x4);

struct __attribute__((packed)) Local_0012fe1c_r3_1 {
    u32 word_0;
};
GUEST_OFFSET(Local_0012fe1c_r3_1, word_0, 0x0);


void set_flag_bit_24_of_list(gptr<Object_0012fe1c_0> arg0, u32 r1) {
    if (arg0->word_4 == 0) {
        return;
    }
    do {
        gptr<Local_0012fe1c_r3_1> r3_1 = gptr<Local_0012fe1c_r3_1>(arg0->word_4);
        u32 r2_1 = r3_1->word_0;
        u32 r12_1 = r2_1 >> 0x18;  // (from the original)
        r3_1->word_0 = r2_1 & ~0xff000000u | (r1 == 0 ? r12_1 & ~1u : r12_1 | 1u) << 0x18;  // (from the original)
        guest::preempt();
    } while (!u32(1));
}

}  // namespace d_0012fe1c
GUEST_EXPORT(0x0012fe1c, d_0012fe1c::set_flag_bit_24_of_list);

// f_0012ffcc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012ffcc {

inline constexpr u32 segment_hook_state_address = 0x00ae83c4u;
inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> RecursiveLock__lock;

u32 segment_hook_begin() {
    return RecursiveLock__lock(segment_hook_state_address, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0012ffcc
GUEST_EXPORT(0x0012ffcc, d_0012ffcc::segment_hook_begin);

// f_0012ffdc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0012ffdc {

inline constexpr u32 segment_hook_state_address = 0x00ae83c4u;
inline constexpr guest::Function<0x001357ec, u32(u32, u32)> RecursiveLock__unlock;

u32 segment_hook_end() {
    return RecursiveLock__unlock(segment_hook_state_address, guest::cpu()->r[1]);
}

}  // namespace d_0012ffdc
GUEST_EXPORT(0x0012ffdc, d_0012ffdc::segment_hook_end);
