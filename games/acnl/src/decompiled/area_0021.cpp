// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_00210c2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets up the balloon string's vertex buffers.
namespace d_00210c2c {

struct __attribute__((packed)) Object_00210c2c_0 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
    u8 byte_9;
    u8 byte_a;
    u8 byte_b;
    u8 byte_c;
    u8 byte_d;
    u8 byte_e;
    u8 unknown_f[0x29];  // (not used here)
    u8 byte_38;
    u8 byte_39;
    u8 byte_3a;
    u8 unknown_3b[0x21];  // (not used here)
    u8 byte_5c;
    u8 byte_5d;
    u8 byte_5e;
    u8 unknown_5f[0x5];  // (not used here)
    u8 byte_64;
    u8 unknown_65[0xb];  // (not used here)
    u8 byte_70;
    u8 unknown_71[0x3];  // (not used here)
    float float_74;
    u8 unknown_78[0x10];  // (not used here)
    u8 byte_88;
    u8 unknown_89[0x1383];  // (not used here)
    u8 byte_140c;
    u8 unknown_140d[0x243];  // (not used here)
    u8 byte_1650;
};
GUEST_OFFSET(Object_00210c2c_0, byte_8, 0x8);
GUEST_OFFSET(Object_00210c2c_0, byte_9, 0x9);
GUEST_OFFSET(Object_00210c2c_0, byte_a, 0xa);
GUEST_OFFSET(Object_00210c2c_0, byte_b, 0xb);
GUEST_OFFSET(Object_00210c2c_0, byte_c, 0xc);
GUEST_OFFSET(Object_00210c2c_0, byte_d, 0xd);
GUEST_OFFSET(Object_00210c2c_0, byte_e, 0xe);
GUEST_OFFSET(Object_00210c2c_0, byte_38, 0x38);
GUEST_OFFSET(Object_00210c2c_0, byte_39, 0x39);
GUEST_OFFSET(Object_00210c2c_0, byte_3a, 0x3a);
GUEST_OFFSET(Object_00210c2c_0, byte_5c, 0x5c);
GUEST_OFFSET(Object_00210c2c_0, byte_5d, 0x5d);
GUEST_OFFSET(Object_00210c2c_0, byte_5e, 0x5e);
GUEST_OFFSET(Object_00210c2c_0, byte_64, 0x64);
GUEST_OFFSET(Object_00210c2c_0, byte_70, 0x70);
GUEST_OFFSET(Object_00210c2c_0, float_74, 0x74);
GUEST_OFFSET(Object_00210c2c_0, byte_88, 0x88);
GUEST_OFFSET(Object_00210c2c_0, byte_140c, 0x140c);
GUEST_OFFSET(Object_00210c2c_0, byte_1650, 0x1650);

struct __attribute__((packed)) Local_00210c2c_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00210c2c_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00210c2c_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_00210c2c_ea_1, word_8, 0x8);

struct __attribute__((packed)) Local_00210c2c_r0_2 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Local_00210c2c_r0_2, word_4, 0x4);
GUEST_OFFSET(Local_00210c2c_r0_2, word_8, 0x8);
GUEST_OFFSET(Local_00210c2c_r0_2, word_10, 0x10);

inline guest::global<u32, 0x00845378> global_00845378;
inline guest::global<u32, 0x0084537c> global_0084537c;
inline guest::global<u32, 0x00845380> global_00845380;
inline guest::global<u32, 0x00845384> global_00845384;
inline guest::global<u32, 0x00845388> global_00845388;
inline guest::global<u32, 0x0084538c> global_0084538c;
inline guest::global<u32, 0x00845390> global_00845390;
inline constexpr guest::Function<0x001435b4, u32(u32, u32, u32, u32)> translate_address;
inline constexpr guest::Function<0x001f9684, u32(u32, u32, u32, u32)> read_u32_0x0094f350_;
inline constexpr guest::Function<0x0034a784, u32(u32, u32, u32, u32)> VertexBuffer__bind_attribute;
inline constexpr guest::Function<0x0034a8b4, u32(u32, u32, u32, u32)> VertexBuffer__bind_attribute_values;
inline constexpr guest::Function<0x0052652c, u32(u32, u32, u32)> BalloonString__setup;

struct __attribute__((packed)) Frame_00210c2c {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0xc];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00210c2c, word_0, 0x0);
GUEST_OFFSET(Frame_00210c2c, word_4, 0x4);
GUEST_OFFSET(Frame_00210c2c, word_8, 0x8);
GUEST_OFFSET(Frame_00210c2c, word_c, 0xc);
GUEST_SIZE(Frame_00210c2c, 0x1c);

void BalloonString__setup_vertex_buffers(gptr<Object_00210c2c_0> balloon_string, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00210c2c> frame;  // the original's stack frame
    balloon_string->byte_8 = 0;
    balloon_string->byte_88 = 0;
    balloon_string->byte_38 = 0;
    balloon_string->byte_3a = 1;
    balloon_string->byte_39 = 0;
    balloon_string->byte_9 = 0;
    balloon_string->byte_d = 1;
    balloon_string->byte_b = 1;
    balloon_string->byte_a = 0;
    balloon_string->byte_e = 1;
    float S0_1 = 0.0f;
    balloon_string->byte_c = 1;
    balloon_string->byte_70 = 1;
    balloon_string->float_74 = S0_1;
    balloon_string->byte_5c = 1;
    balloon_string->byte_5d = 1;
    balloon_string->byte_5e = 4;
    balloon_string->byte_64 = 0;
    guest::cpu()->s[0] = S0_1;
    u32 r0_1 = read_u32_0x0094f350_(4u, r1, r2, r3);
    gptr<Local_00210c2c_r0_2> r0_2 = gptr<Local_00210c2c_r0_2>(r0_1 + 0x24u);  // (from the original)
    BalloonString__setup(balloon_string.addr() + 0x1450u, r0_2.addr(), balloon_string.addr() + 0x1458u);  // (from the original)
    u32 r0_5 = translate_address(balloon_string.addr() + 0x1590u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_6 = balloon_string.addr() + 0x4e4u;  // (from the original)
    VertexBuffer__bind_attribute(r0_6, r0_2->word_4, r0_5, 0xbu);  // (from the original)
    u32 r0_8 = translate_address(balloon_string.addr() + 0x15f0u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_9 = balloon_string.addr() + 0xc74u;  // (from the original)
    VertexBuffer__bind_attribute(r0_9, r0_2->word_4, r0_8, 0xbu);  // (from the original)
    u32 r1_5 = *global_00845378;
    u32 r2_4 = *global_0084537c;
    u32 r3_4 = *global_00845380;
    gptr<Local_00210c2c_ea_1> ea_1 = gptr<Local_00210c2c_ea_1>(frame.at(0x10).addr());  // (from the original)
    ea_1->word_0 = r1_5;
    ea_1->word_4 = r2_4;
    ea_1->word_8 = r3_4;
    u32 r1_6 = *global_00845384;
    u32 r2_5 = *global_00845388;
    u32 r3_5 = *global_0084538c;
    frame->word_c = *global_00845390;
    frame->word_0 = r1_6;
    frame->word_4 = r2_5;
    frame->word_8 = r3_5;
    VertexBuffer__bind_attribute_values(r0_6, r0_2->word_8, 3u, frame.at(0x10).addr());  // (from the original)
    VertexBuffer__bind_attribute_values(r0_9, r0_2->word_8, 3u, frame.at(0x10).addr());  // (from the original)
    VertexBuffer__bind_attribute_values(r0_6, r0_2->word_10, 4u, frame.at(0).addr());
    u32 r1_10 = r0_2->word_10;
    u32 r3_9 = frame.at(0).addr();
    VertexBuffer__bind_attribute_values(r0_9, r1_10, 4u, r3_9);
    balloon_string->byte_1650 = 0;
    *gptr<u8>(balloon_string.addr() + 0x1651u) = 1;  // (from the original)
    *gptr<u8>(balloon_string.addr() + 0x1652u) = 2;  // (from the original)
    u32 r0_10 = 0x1652u | u32(s32(0x1652u) >> 0xc);  // (from the original)
    *gptr<u8>(r0_10 + balloon_string.addr()) = 2;
    u32 r0_11 = r0_10 + 1u;
    u32 r2_6 = r0_11 | u32(s32(r0_11) >> 0xa);  // (from the original)
    *gptr<u8>(r0_11 + balloon_string.addr()) = 1;
    *gptr<u8>(r2_6 + balloon_string.addr()) = 3;
    u32 r2_7 = r2_6 ^ 3u;
    *gptr<u8>(r2_7 + balloon_string.addr()) = 2;
    u32 r1_11 = r2_7 | 3u;
    u32 r2_8 = r1_11 + u32(s32(3u) >> 1);
    *gptr<u8>(r1_11 + balloon_string.addr()) = 3;
    *gptr<u8>(r2_8 + balloon_string.addr()) = 4;
    u32 r2_9 = r2_8 | u32(s32(3u) >> 1);
    *gptr<u8>(r2_9 + balloon_string.addr()) = 4;
    u32 r2_10 = r2_9 ^ 3u;
    *gptr<u8>(r2_10 + balloon_string.addr()) = 3;
    u32 r0_12 = r2_10 | 3u;
    *gptr<u8>(r0_12 + balloon_string.addr()) = 5;
    u32 r0_13 = r0_12 + 1u;
    *gptr<u8>(r0_13 + balloon_string.addr()) = 4;
    u32 r0_14 = r0_13 | u32(s32(r0_13) >> 6);
    *gptr<u8>(r0_14 + balloon_string.addr()) = 5;
    *gptr<u8>(r0_14 + 1u + balloon_string.addr()) = 6;
    u32 r1_13 = r0_14 + 1u | u32(s32(6u) >> 1);
    *gptr<u8>(r1_13 + balloon_string.addr()) = 6;
    u32 r0_15 = r1_13 + u32(s32(6u) >> 2);
    *gptr<u8>(r0_15 + balloon_string.addr()) = 5;
    *gptr<u8>((r0_15 | u32(s32(r0_15) >> 0xc)) + balloon_string.addr()) = 7;  // (from the original)
    u32 r0_17 = translate_address(balloon_string.addr() + 0x1650u, r1_13, 5u, r3_9);  // (from the original)
    *gptr<u32>(balloon_string.addr() + 0x1404u) = r0_17;  // (from the original)
    *gptr<u32>(balloon_string.addr() + 0x1408u) = 0x12;  // (from the original)
    balloon_string->byte_140c = 1;
    guest::cpu()->r[1] = 0x12u;  // (from the original)
}

}  // namespace d_00210c2c
GUEST_EXPORT_FRAMED(0x00210c2c, d_00210c2c::BalloonString__setup_vertex_buffers, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_002127f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Writes the balloon string's shader setup and light commands; their end.
namespace d_002127f4 {

struct __attribute__((packed)) Local_002127f4_ea_1 {
    u32 word_0;
};
GUEST_OFFSET(Local_002127f4_ea_1, word_0, 0x0);

struct __attribute__((packed)) Local_002127f4_r6_1 {
    u8 byte_0;
};
GUEST_OFFSET(Local_002127f4_r6_1, byte_0, 0x0);

inline constexpr guest::Function<0x00210e64, u32(u32, u32, u32, u32)> BalloonString__update_segments;
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32)> copy_aligned_bytes;
inline constexpr guest::Function<0x00726e94, u32(u32, u32, u32)> Shader__write_bind_commands;
inline constexpr guest::Function<0x00726f34, u32(u32, u32)> Shader__write_setup_commands;

u32 BalloonString__write_commands(gptr<BalloonString> balloon_string, u32 r1, u32 r2, u32 r3) {
    u32 r0 = balloon_string.addr();
    u32 r0_7 = 0;
    u32 r5_1 = r0;
    BalloonString__update_segments(r0, r1, r2, r3);
    gptr<Local_002127f4_r6_1> r6_1 = gptr<Local_002127f4_r6_1>(r5_1 + 0x1662u);  // (from the original)
    u32 r0_1 = balloon_string->byte_1662;
    gptr<Local_002127f4_ea_1> ea_1 = gptr<Local_002127f4_ea_1>(r5_1 + ((r0_1 << 7) - r0_1 * 7u << 4) + 0x4e4u);  // (from the original)
    u32 r0_2 = ea_1->word_0;
    if (r0_2 == 0) {
        u32 r0_3 = Shader__write_setup_commands(ea_1.addr(), ea_1.addr() + 4u);
        r0_2 = s32(r0_3 - ea_1.addr() - 4u) >> 2;
        ea_1->word_0 = r0_2;
    }
    copy_aligned_bytes(r1, ea_1.addr() + 4u, r0_2 << 2);
    u32 r1_3 = r1 + (ea_1->word_0 << 2);
    u32 r0_4 = r6_1->byte_0;
    r0 = Shader__write_bind_commands(r5_1 + ((r0_4 << 7) - r0_4 * 7u << 4) + 0x4e4u, r1_3, r5_1 + 0x1404u);  // (from the original)
    u32 r1_4 = r6_1->byte_0;
    u32 r12 = 0x803f0232u;  // (from the original)
    r1 = 0u;
    r3 = (r5_1 + ((r1_4 << 7) - r1_4 * 7u << 4) + 0x400u) + 0xe4u;  // (from the original)
    r2 = r1;
    do {
        u32 r4_1 = r1 * 3u;
        if (*gptr<u32>(r3 + r1 * 0x70u + 0x160u) != 0) {  // (from the original)
            *gptr<u32>(r0) = r2;
            *gptr<u32>(r0 + 4) = r4_1 + 0x203u | 0x80000000u | 0x2f0000u;  // (from the original)
            u32 r0_6 = r0 + 8;
            *gptr<u32>(r0_6) = r2;
            r0_7 = r0_6 + 4u;
            *gptr<u32>(r0_7) = r2;
        } else {
            *gptr<u32>(r0) = r2;
            *gptr<u32>(r0 + 4) = r4_1 + 0x205u | 0xf0000u;  // (from the original)
            r0_7 = r0 + 4u;
        }
        r0 = r0_7 + 4u;
        if (*gptr<u8>(r3 + r1 * 0x14u + 0x6a0u) != 0) {  // (from the original)
            *gptr<u32>(r0) = r1;
            *gptr<u32>(r0 + 4) = r12;
            u32 r0_8 = r0 + 8;
            *gptr<u32>(r0_8) = r2;
            u32 r0_9 = r0_8 + 4u;
            *gptr<u32>(r0_9) = r2;
            u32 r0_10 = r0_9 + 4u;
            *gptr<u32>(r0_10) = r2;
            u32 r0_11 = r0_10 + 4u;
            *gptr<u32>(r0_11) = r2;
            r0 = r0_11 + 4u;
        }
        r1 += 1u;
        guest::preempt();
    } while (s32(r1) < 0xc);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002127f4
GUEST_EXPORT_FRAMED(0x002127f4, d_002127f4::BalloonString__write_commands, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00212ba4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00212ba4 {

struct __attribute__((packed)) Local_00212ba4_ea_1 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
    u8 byte_4;
};
GUEST_OFFSET(Local_00212ba4_ea_1, byte_0, 0x0);
GUEST_OFFSET(Local_00212ba4_ea_1, byte_1, 0x1);
GUEST_OFFSET(Local_00212ba4_ea_1, byte_2, 0x2);
GUEST_OFFSET(Local_00212ba4_ea_1, byte_3, 0x3);
GUEST_OFFSET(Local_00212ba4_ea_1, byte_4, 0x4);

struct __attribute__((packed)) Local_00212ba4_ea_2 {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
};
GUEST_OFFSET(Local_00212ba4_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_00212ba4_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_00212ba4_ea_2, byte_8, 0x8);

struct __attribute__((packed)) Local_00212ba4_r0_1 {
    u32 vtable;
    u32 word_4;
};
GUEST_OFFSET(Local_00212ba4_r0_1, vtable, 0x0);
GUEST_OFFSET(Local_00212ba4_r0_1, word_4, 0x4);

struct __attribute__((packed)) Local_00212ba4_r0_21 {
    u8 unknown_0[0xd2];  // (not used here)
    u8 byte_d2;
    u8 unknown_d3[0x3];  // (not used here)
    u16 half_d6;
    u8 byte_d8;
};
GUEST_OFFSET(Local_00212ba4_r0_21, byte_d2, 0xd2);
GUEST_OFFSET(Local_00212ba4_r0_21, half_d6, 0xd6);
GUEST_OFFSET(Local_00212ba4_r0_21, byte_d8, 0xd8);

inline constexpr u32 vtable_BalloonString = 0x008edc28u;
inline constexpr u32 vtable_sead__SafeStringBase_char_ = 0x009047f8u;
inline constexpr guest::Function<0x00123678, u32(u32, u32)> RenderStateBlock__init;
inline constexpr guest::Function<0x00210c2c, u32(u32)> BalloonString__setup_vertex_buffers;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> allocate_on_heap;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x0031758c, u32(u32, u32, u32, u32)> HeapHolder__recreate;
inline constexpr guest::Function<0x003494fc, u32(u32)> GpuTexEnv__init_all;
inline constexpr guest::Function<0x0034af5c, u32(u32)> GpuState__init_tex_units;
inline constexpr guest::Function<0x005673c8, u32(u32, u32, u32, u32)> construct_heap_allocator;

struct __attribute__((packed)) Frame_00212ba4 {
    u32 word_0;
    u32 word_4;
    u32 object_8_vtable;
    u32 word_c;
};
GUEST_OFFSET(Frame_00212ba4, word_0, 0x0);
GUEST_OFFSET(Frame_00212ba4, word_4, 0x4);
GUEST_OFFSET(Frame_00212ba4, object_8_vtable, 0x8);
GUEST_OFFSET(Frame_00212ba4, word_c, 0xc);
GUEST_SIZE(Frame_00212ba4, 0x10);

u32 BalloonString__BalloonString(u32 balloon_string, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_00212ba4> frame;  // the original's stack frame
    u32 r3_5 = 0;
    u32 r5 = balloon_string;
    gptr<Local_00212ba4_r0_1> block = gptr<Local_00212ba4_r0_1>(allocate_on_heap(0x166cu, balloon_string, 4u, r3));  // (from the original)
    block->word_4 = ~0u;
    block->vtable = vtable_BalloonString;
    u32 render_state_block = block.addr() + 8u;
    RenderStateBlock__init(render_state_block, vtable_BalloonString);
    u32 r6 = 0u;
    gptr<Local_00212ba4_ea_1> ea_1 = gptr<Local_00212ba4_ea_1>(render_state_block + 0x80u);  // (from the original)
    ea_1->byte_0 = u8(r6);
    ea_1->byte_1 = u8(r6);
    ea_1->byte_2 = u8(r6);
    ea_1->byte_3 = u8(r6);
    ea_1->byte_4 = u8(r6);
    clear_aligned(ea_1.addr() + 8u, 0x210u);  // (from the original)
    u32 r0_5 = GpuState__init_tex_units(render_state_block + 0x298u);  // (from the original)
    u32 r0_7 = GpuTexEnv__init_all(r0_5 + 0x94u);  // (from the original)
    u32 r0_9 = for_each_element(r0_7 + 0x1b0u, 0x34ab24u, 0x790u, 2u);  // (from the original)
    gptr<Local_00212ba4_ea_2> ea_2 = gptr<Local_00212ba4_ea_2>(r0_9 + 0xf20u);  // (from the original)
    ea_2->word_0 = r6;
    ea_2->word_4 = r6;
    ea_2->byte_8 = u8(r6);
    u32 r0_12 = for_each_element((r0_9 + 0xf2cu) + 4u, 0x7e4470u, 1u, 0xcu);  // (from the original)
    u32 r1 = 0u;
    u32 ea_3 = r0_12 - 4u;
    *gptr<u8>(ea_3) = u8(r6);
    balloon_string = ea_3;
    do {
        u32 r2_5 = balloon_string + r1;
        r1 += 1u;
        *gptr<u8>(r2_5 + 4u) = u8(r6);
        guest::preempt();
    } while (r1 < 0xcu);  // (from the original)
    u32 r2 = 0u;
    r1 = r2;
    do {
        r3_5 = balloon_string + (r2 << 2);
        u32 r2_6 = r2 + 1u;
        r1 += 2u;
        *gptr<u32>(r3_5 + 0x10u) = r6;  // (from the original)
        r2 = r2_6 + 1u;
        *gptr<u32>((balloon_string + (r2_6 << 2)) + 0x10u) = r6;  // (from the original)
        guest::preempt();
    } while (r1 < 0xcu);  // (from the original)
    u32 ea_4 = balloon_string + 0x40u;  // (from the original)
    *gptr<u32>(ea_4) = r6;
    u32 ea_5 = ea_4 + 4u;
    *gptr<u32>(ea_5) = r6;
    u32 r0_13 = ea_5 + 4u;
    construct_heap_allocator(r0_13, r1, r2, r3_5);
    u32 r0_15 = for_each_element(r0_13 + 0x78u, 0x3040fcu, 0xcu, 5u);  // (from the original)
    u32 r0_17 = for_each_element(r0_15 + 0x3cu, 0x3040fcu, 0xcu, 5u);  // (from the original)
    u32 r0_19 = for_each_element(r0_17 + 0x3cu, 0x3040fcu, 0xcu, 5u);  // (from the original)
    u32 r0_20 = r0_19 + 0x48u;  // (from the original)
    gptr<Local_00212ba4_r0_21> r0_21 = gptr<Local_00212ba4_r0_21>(for_each_element(r0_20, 0x3040fcu, 0xcu, 0x10u));  // (from the original)
    u32 r4_2 = r0_21.addr() - 0x1590u;  // (from the original)
    r0_21->byte_d2 = u8(r6);
    *gptr<u16>(r4_2 + 0x1664u) = u16(r6);  // (from the original)
    r0_21->half_d6 = u16(r6);
    r0_21->byte_d8 = 0xff;  // (from the original)
    *gptr<u8>(r4_2 + 0x1669u) = u8(r6);  // (from the original)
    *gptr<u8>(r4_2 + 0x166au) = u8(r6);  // (from the original)
    frame->word_c = 0x212d88;  // (from the original)
    frame->object_8_vtable = vtable_sead__SafeStringBase_char_;
    frame->word_0 = 1;
    frame->word_4 = r6;
    HeapHolder__recreate(r4_2 + 0x1458u, 0x1000u, r5, frame.at(8).addr());  // (from the original)
    BalloonString__setup_vertex_buffers(r4_2);
    return r4_2;
}

}  // namespace d_00212ba4
GUEST_EXPORT_FRAMED(0x00212ba4, d_00212ba4::BalloonString__BalloonString, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00212ed0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Adds the balloon string to the draw list when it is shown.
namespace d_00212ed0 {

struct __attribute__((packed)) Object_00212ed0_0 {
    u8 unknown_0[0x1669];  // (not used here)
    u8 byte_1669;
};
GUEST_OFFSET(Object_00212ed0_0, byte_1669, 0x1669);

inline constexpr guest::Function<0x001f963c, u32(u32, u32)> append_if_room;
inline constexpr guest::Function<0x001f9684, u32(u32, u32)> read_u32_0x0094f350_;

void BalloonString__register_draw(gptr<Object_00212ed0_0> balloon_string, u32 r1) {
    u32 r0_1 = balloon_string->byte_1669;
    if (r0_1 == 0) {
        return;
    }
    u32 r0_2 = read_u32_0x0094f350_(r0_1, r1);
    if (r0_2 == 0) {
        return;
    }
    u32 r0_3 = read_u32_0x0094f350_(r0_2, guest::cpu()->r[1]);
    append_if_room(r0_3, balloon_string.addr());
}

}  // namespace d_00212ed0
GUEST_EXPORT_FRAMED(0x00212ed0, d_00212ed0::BalloonString__register_draw, 0x4010);  // pushes {r4, lr} first, as the original

// f_00213868: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Caps the zoom so the map fits in 400 units and keeps the offset within 200.
namespace d_00213868 {

struct __attribute__((packed)) MapView {
    u8 unknown_0[0x31c];  // (not used here)
    u32 word_31c;
    u8 unknown_320[0x68];  // (not used here)
    float float_388;
    u8 unknown_38c[0x4];  // (not used here)
    float float_390;
    u8 unknown_394[0x4];  // (not used here)
    float float_398;
    u8 unknown_39c[0x28];  // (not used here)
    float float_3c4;
    float float_3c8;
};
GUEST_OFFSET(MapView, word_31c, 0x31c);
GUEST_OFFSET(MapView, float_388, 0x388);
GUEST_OFFSET(MapView, float_390, 0x390);
GUEST_OFFSET(MapView, float_398, 0x398);
GUEST_OFFSET(MapView, float_3c4, 0x3c4);
GUEST_OFFSET(MapView, float_3c8, 0x3c8);

struct __attribute__((packed)) Object_00213868_1 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Object_00213868_1, float_0, 0x0);
GUEST_OFFSET(Object_00213868_1, float_4, 0x4);
GUEST_OFFSET(Object_00213868_1, float_8, 0x8);

struct __attribute__((packed)) Local_00213868_r0_1 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_00213868_r0_1, float_0, 0x0);
GUEST_OFFSET(Local_00213868_r0_1, float_4, 0x4);
GUEST_OFFSET(Local_00213868_r0_1, float_8, 0x8);

struct __attribute__((packed)) Local_00213868_r1_1 {
    u8 unknown_0[0x40];  // (not used here)
    float float_40;
    float float_44;
    u8 unknown_48[0x6f];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_00213868_r1_1, float_40, 0x40);
GUEST_OFFSET(Local_00213868_r1_1, float_44, 0x44);
GUEST_OFFSET(Local_00213868_r1_1, byte_b7, 0xb7);


void MapView__clamp_zoom_and_offset(gptr<MapView> map_view, gptr<Object_00213868_1> arg1) {
    float S4_1 = map_view->float_3c8;
    float S0_1 = arg1->float_0;
    float S1_1 = arg1->float_4;
    float S2_1 = arg1->float_8;
    float S3_1 = (map_view->float_388 + map_view->float_390 - map_view->float_3c4) * S4_1;
    if (s32(std::bit_cast<u32>(S3_1)) > s32(0x43c80000u)) {  // (from the original)
        float S0_2 = 400.0f / S3_1 * S4_1;
        map_view->float_3c8 = S0_2;
        gptr<Local_00213868_r1_1> r1_1 = gptr<Local_00213868_r1_1>(map_view->word_31c);
        r1_1->float_40 = S0_2;
        r1_1->float_44 = S0_2;
        S0_1 = 0.0f;
        r1_1->byte_b7 = u8(u32(r1_1->byte_b7) & 0xcfu);  // (from the original)
    }
    float S3_2 = map_view->float_398 * map_view->float_3c8;
    u32 r1_2 = std::bit_cast<u32>(S0_1 + S3_2);
    if (s32(r1_2) > s32(0x43480000u)) {  // (from the original)
        S0_1 = 200.0f - S3_2;
    } else {
        r1_2 = std::bit_cast<u32>(S0_1 - S3_2);
        if (r1_2 > 0xc3480000u) {  // (from the original)
            S0_1 = S3_2 + -200.0f;
        }
    }
    gptr<Local_00213868_r0_1> r0_1 = gptr<Local_00213868_r0_1>(map_view.addr() + 0x3ccu);  // (from the original)
    r0_1->float_0 = S0_1;
    r0_1->float_4 = S1_1;
    r0_1->float_8 = S2_1;
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_00213868
GUEST_EXPORT(0x00213868, d_00213868::MapView__clamp_zoom_and_offset);

// f_00213930: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Moves the view toward its target by up to 6 units a frame (snapping on the first), then places it.
namespace d_00213930 {

struct __attribute__((packed)) MapView {
    u8 unknown_0[0x31c];  // (not used here)
    u32 word_31c;
    u8 unknown_320[0x98];  // (not used here)
    float float_3b8;
    float float_3bc;
    float float_3c0;
    u8 unknown_3c4[0x4];  // (not used here)
    float float_3c8;
    u32 word_3cc;
    u32 word_3d0;
    u32 word_3d4;
    u32 word_3d8;
    u32 word_3dc;
    u32 word_3e0;
    u8 unknown_3e4[0x13];  // (not used here)
    u8 byte_3f7;
};
GUEST_OFFSET(MapView, word_31c, 0x31c);
GUEST_OFFSET(MapView, float_3b8, 0x3b8);
GUEST_OFFSET(MapView, float_3bc, 0x3bc);
GUEST_OFFSET(MapView, float_3c0, 0x3c0);
GUEST_OFFSET(MapView, float_3c8, 0x3c8);
GUEST_OFFSET(MapView, word_3cc, 0x3cc);
GUEST_OFFSET(MapView, word_3d0, 0x3d0);
GUEST_OFFSET(MapView, word_3d4, 0x3d4);
GUEST_OFFSET(MapView, word_3d8, 0x3d8);
GUEST_OFFSET(MapView, word_3dc, 0x3dc);
GUEST_OFFSET(MapView, word_3e0, 0x3e0);
GUEST_OFFSET(MapView, byte_3f7, 0x3f7);

struct __attribute__((packed)) Local_00213930_r1_1 {
    u8 unknown_0[0x4];  // (not used here)
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_00213930_r1_1, float_4, 0x4);
GUEST_OFFSET(Local_00213930_r1_1, float_8, 0x8);

struct __attribute__((packed)) Local_00213930_r1_2 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_00213930_r1_2, float_0, 0x0);
GUEST_OFFSET(Local_00213930_r1_2, float_4, 0x4);
GUEST_OFFSET(Local_00213930_r1_2, float_8, 0x8);

struct __attribute__((packed)) Local_00213930_r1_3 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_00213930_r1_3, float_0, 0x0);
GUEST_OFFSET(Local_00213930_r1_3, float_4, 0x4);

inline constexpr guest::Function<0x004b71c8, u32(u32, u32)> Pane__set_position;

struct __attribute__((packed)) Frame_00213930 {
    float float_0;
    u8 unknown_4[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00213930, float_0, 0x0);
GUEST_SIZE(Frame_00213930, 0xc);

void MapView__smooth_scroll(gptr<MapView> map_view) {
    guest::StackFrameOf<Frame_00213930> frame;  // the original's stack frame
    if (map_view->byte_3f7 != 0) {
        float S3_1 = std::bit_cast<float>(map_view->word_3cc);
        float S2_1 = std::bit_cast<float>(map_view->word_3d0);
        float S1_1 = std::bit_cast<float>(map_view->word_3d8) - S3_1;
        float S0_1 = std::bit_cast<float>(map_view->word_3dc) - S2_1;
        float S0_2 = sqrtf(S1_1 * S1_1 + S0_1 * S0_1);
        if (s32(0x40c00000u) <= s32(std::bit_cast<u32>(S0_2))) {  // (from the original)
            float S3_2 = 6.0f / S0_2;
            gptr<Local_00213930_r1_1> r1_1 = gptr<Local_00213930_r1_1>(map_view.addr() + 0x3d8u);  // (from the original)
            float S1_2 = (S2_1 - std::bit_cast<float>(map_view->word_3dc)) * S3_2;
            float S2_2 = (std::bit_cast<float>(map_view->word_3d4) - std::bit_cast<float>(map_view->word_3e0)) * S3_2;
            map_view->word_3d8 = std::bit_cast<u32>(std::bit_cast<float>(map_view->word_3d8) + (std::bit_cast<float>(map_view->word_3cc) - std::bit_cast<float>(map_view->word_3d8)) * S3_2);
            r1_1->float_4 = std::bit_cast<float>(map_view->word_3dc) + S1_2;
            r1_1->float_8 = r1_1->float_8 + S2_2;
        } else {
            map_view->word_3d8 = std::bit_cast<u32>(S3_1);
            map_view->word_3dc = map_view->word_3d0;
            map_view->word_3e0 = map_view->word_3d4;
        }
    } else {
        map_view->word_3d8 = map_view->word_3cc;
        map_view->word_3dc = map_view->word_3d0;
        map_view->word_3e0 = map_view->word_3d4;
        map_view->byte_3f7 = 1;
    }
    float S0_3 = map_view->float_3c8;
    gptr<Local_00213930_r1_2> r1_2 = gptr<Local_00213930_r1_2>(map_view.addr() + 0x3d8u);  // (from the original)
    float S3_3 = r1_2->float_0;
    float S4_1 = r1_2->float_4;
    float S5_1 = r1_2->float_8;
    gptr<Local_00213930_r1_3> r1_3 = gptr<Local_00213930_r1_3>(frame.at(4).addr());
    float S2_3 = S3_3 - float(s32(vcvt_sz_f(map_view->float_3b8 * S0_3)));
    float S1_3 = S5_1 - float(s32(vcvt_sz_f(map_view->float_3c0 * S0_3)));
    float S0_4 = S4_1 - float(s32(vcvt_sz_f(map_view->float_3bc * S0_3)));
    frame->float_0 = S2_3;
    r1_3->float_0 = S0_4;
    r1_3->float_4 = S1_3;
    u32 r0_1 = map_view->word_31c;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_3;
    Pane__set_position(r0_1, frame.at(0).addr());
}

}  // namespace d_00213930
GUEST_EXPORT_FRAMED(0x00213930, d_00213930::MapView__smooth_scroll, 0x4000);  // pushes {lr} first, as the original

// f_00213b54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Inserts the node into the depth-sorted tree (by +0x3d0); the subtree's root.
namespace d_00213b54 {

struct __attribute__((packed)) DepthTree {
    u8 unknown_0[0x3d0];  // (not used here)
    float float_3d0;
    u8 unknown_3d4[0x154];  // (not used here)
    u32 word_528;
    u32 word_52c;
};
GUEST_OFFSET(DepthTree, float_3d0, 0x3d0);
GUEST_OFFSET(DepthTree, word_528, 0x528);
GUEST_OFFSET(DepthTree, word_52c, 0x52c);

struct __attribute__((packed)) Object_00213b54_1 {
    u8 unknown_0[0x3d0];  // (not used here)
    float float_3d0;
    u8 unknown_3d4[0x154];  // (not used here)
    u32 word_528;
    u32 word_52c;
};
GUEST_OFFSET(Object_00213b54_1, float_3d0, 0x3d0);
GUEST_OFFSET(Object_00213b54_1, word_528, 0x528);
GUEST_OFFSET(Object_00213b54_1, word_52c, 0x52c);

inline constexpr guest::Function<0x00213b54, u32(u32, u32, u32, u32)> call_DepthTree__insert;

u32 DepthTree__insert(gptr<DepthTree> depth_tree, gptr<Object_00213b54_1> arg1) {
    float S1_1 = arg1->float_3d0;
    float S0_1 = depth_tree->float_3d0;
    u32 r0_1 = arg1.addr();
    if (S1_1 > S0_1) {
        arg1->word_52c = depth_tree.addr();
        u32 r2_1 = depth_tree->word_528;
        if (r2_1 != 0) {
            *gptr<u32>(r2_1 + 0x52cu) = r0_1;  // (from the original)
            arg1->word_528 = depth_tree->word_528;
        }
        depth_tree->word_528 = r0_1;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return r0_1;
    }
    u32 r2_2 = depth_tree->word_52c;
    if (r2_2 == 0) {
        depth_tree->word_52c = r0_1;
    } else {
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        r0_1 = call_DepthTree__insert(r2_2, arg1.addr(), r2_2, guest::cpu()->r[3]);
        S0_1 = guest::cpu()->s[0];
        S1_1 = guest::cpu()->s[1];
        *gptr<u32>(depth_tree.addr() + 0x52cu) = r0_1;  // (from the original)
    }
    *gptr<u32>(r0_1 + 0x528u) = depth_tree.addr();  // (from the original)
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return depth_tree.addr();
}

}  // namespace d_00213b54
GUEST_EXPORT_FRAMED(0x00213b54, d_00213b54::DepthTree__insert, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00214e88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the scene, the online state or a pending request blocks balloons.
namespace d_00214e88 {

inline guest::global<u8, 0x0094f7e1> global_0094f7e1;
inline guest::global<u8, 0x0094fd80> global_0094fd80;
inline guest::global<u32, 0x00950058> global_00950058;
inline constexpr guest::Function<0x00281cc8, u32(u32)> read_npc_net_share_info_instance;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x004ee524, u32(u32)> photo_mode_first_byte;
inline constexpr guest::Function<0x005896c4, u32(u32)> read_s8_0x0094e4a9_;
inline constexpr guest::Function<0x006d1f38, u32(u32)> request_list_has_value;
inline constexpr guest::Function<0x0071e9e8, u32(u32)> station_byte_or_one;

u32 scene_blocks_balloons(u32 r0) {
    u32 r1 = 0;
    u32 scene = current_scene_id(r0, r1);
    u32 scene_flagged = scene_has_flags(0x10u, scene);  // (from the original)
    if (scene_flagged != 0 || *global_00950058 != 0) {
        return 1u;
    }
    u32 r0_3 = request_list_has_value(0x80u);  // (from the original)
    if (r0_3 != 0) {
        return 1u;
    }
    u32 r0_4 = read_s8_0x0094e4a9_(r0_3);
    if (r0_4 != 0) {
        return 1u;
    }
    u32 r0_5 = read_npc_net_share_info_instance(r0_4);
    u32 r0_6 = station_byte_or_one(r0_5);
    if (r0_6 != 0) {
        return 1u;
    }
    u32 r0_7 = photo_mode_first_byte(r0_6);
    if (r0_7 == 1u) {
        return r0_7;
    }
    u32 r0_8 = request_list_has_value(0x63u);  // (from the original)
    if (r0_8 != 0) {
        return 1u;
    }
    u32 r0_9 = request_list_has_value(0x7bu);  // (from the original)
    if (r0_9 != 0) {
        return 1u;
    }
    u32 r0_10 = *global_0094f7e1;
    if (r0_10 != 0) {
        return 1u;
    }
    u32 scene_2 = current_scene_id(r0_10, guest::cpu()->r[1]);
    if (scene_2 == 0x5cu) {  // (from the original)
        return 1u;
    }
    u32 r0_12 = *global_0094fd80;
    return r0_12 == 0 ? r0_12 : 1u;
}

}  // namespace d_00214e88
GUEST_EXPORT_FRAMED(0x00214e88, d_00214e88::scene_blocks_balloons, 0x4010);  // pushes {r4, lr} first, as the original

// f_002161a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// In a multiplayer session: refreshes the template and each of the 4 players' slots and presence flags.
namespace d_002161a4 {

struct __attribute__((packed)) NetPlayers {
    u8 unknown_0[0x2088];  // (not used here)
    u32 word_2088;
};
GUEST_OFFSET(NetPlayers, word_2088, 0x2088);

struct __attribute__((packed)) Local_002161a4_ea_2 {
    u8 byte_0;
};
GUEST_OFFSET(Local_002161a4_ea_2, byte_0, 0x0);

inline guest::global<u8, 0x0094ed72> global_0094ed72;
inline constexpr guest::Function<0x00305f2c, u32(u32, u32, u32, u32)> read_global_object_byte;
inline constexpr guest::Function<0x00305f44, u32(u32, u32)> current_net_station;
inline constexpr guest::Function<0x0062512c, u32(u32, u32, u32)> apply_entry_template;

struct __attribute__((packed)) Frame_002161a4 {
    u32 word_0;
    u8 byte_4;
    u8 unknown_5[0x7];  // (not read or written by name)
};
GUEST_OFFSET(Frame_002161a4, word_0, 0x0);
GUEST_OFFSET(Frame_002161a4, byte_4, 0x4);
GUEST_SIZE(Frame_002161a4, 0xc);

void NetPlayers__refresh_slots(gptr<NetPlayers> net_players, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_002161a4> frame;  // the original's stack frame
    u32 r0 = net_players.addr();
    u32 r4_1 = r0;
    u32 r0_1 = read_global_object_byte(r0, r1, r2, r3);
    if (r0_1 != 2u) {
        return;
    }
    frame->word_0 = 0;
    frame->byte_4 = 0xa;  // (from the original)
    u32 r0_2 = current_net_station(0u, 0xau);  // (from the original)
    u32 r0_3 = *gptr<u8>(r0_2 + 0x8461b4u);  // (from the original)
    apply_entry_template(r0_3, frame.at(0).addr(), 1u);
    if (net_players->word_2088 == 0) {
        return;
    }
    r0 = 0u;
    u32 r12 = 1u;
    r2 = r4_1 + 0x2084u;  // (from the original)
    do {
        u32 r1_2 = *gptr<u32>(r2) <= r0 ? *gptr<u32>(r2 + 4u) : *gptr<u32>(r2 + 4u) + r0 * 0x29cu;  // (from the original)
        u32 r4_2 = *global_0094ed72;
        *gptr<u8>(r1_2 + 0x298u) = u8(r0);  // (from the original)
        u32 b_1 = lsl_r(r12, r0 & 0xffu);  // (from the original)
        gptr<Local_002161a4_ea_2> ea_2 = gptr<Local_002161a4_ea_2>(r1_2 + 0x29bu);  // (from the original)
        u32 r3_4 = ea_2->byte_0;
        r0 += 1u;
        ea_2->byte_0 = u8(u32((r4_2 & b_1) == 0) == 0 ? r3_4 & ~1u : r3_4 | 1u);
        guest::preempt();
    } while (r0 < 4u);
}

}  // namespace d_002161a4
GUEST_EXPORT_FRAMED(0x002161a4, d_002161a4::NetPlayers__refresh_slots, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_002170bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002170bc {

inline constexpr u32 vtable_sead__SafeStringBase_char_ = 0x009047f8u;
inline constexpr u32 global_0098a30c_address = 0x0098a30cu;
inline constexpr guest::Function<0x00569dc4, u32(u32, u32, u32, u32)> layout_allocator_8;
inline constexpr guest::Function<0x0056a974, u32(u32, u32, u32, u32)> load_split_start;

struct __attribute__((packed)) Frame_002170bc {
    u32 object_0_vtable;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_002170bc, object_0_vtable, 0x0);
GUEST_OFFSET(Frame_002170bc, word_4, 0x4);
GUEST_SIZE(Frame_002170bc, 0xc);

u32 load_chat_balloon_layout(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_002170bc> frame;  // the original's stack frame
    u32 r0_1 = layout_allocator_8(r0, r1, r2, r3);
    frame->word_4 = 0x2170f4;  // (from the original)
    frame->object_0_vtable = vtable_sead__SafeStringBase_char_;
    u32 r0_2 = load_split_start(global_0098a30c_address, frame.at(0).addr(), *gptr<u32>(r0_1 + 4u), 0x80u);  // (from the original)
    return r0_2;
}

}  // namespace d_002170bc
GUEST_EXPORT_FRAMED(0x002170bc, d_002170bc::load_chat_balloon_layout, 0x4000);  // pushes {lr} first, as the original

// f_002194d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Launches the firework with its light and its sound.
namespace d_002194d8 {

struct __attribute__((packed)) Local_002194d8_r0_3 {
    u8 unknown_0[0x59c];  // (not used here)
    u32 word_59c;
    u32 word_5a0;
    u32 word_5a4;
};
GUEST_OFFSET(Local_002194d8_r0_3, word_59c, 0x59c);
GUEST_OFFSET(Local_002194d8_r0_3, word_5a0, 0x5a0);
GUEST_OFFSET(Local_002194d8_r0_3, word_5a4, 0x5a4);

struct __attribute__((packed)) Local_002194d8_r0_4 {
    u8 unknown_0[0x59c];  // (not used here)
    u32 word_59c;
    u32 word_5a0;
    u32 word_5a4;
};
GUEST_OFFSET(Local_002194d8_r0_4, word_59c, 0x59c);
GUEST_OFFSET(Local_002194d8_r0_4, word_5a0, 0x5a0);
GUEST_OFFSET(Local_002194d8_r0_4, word_5a4, 0x5a4);

struct __attribute__((packed)) Local_002194d8_r0_5 {
    u8 unknown_0[0x59c];  // (not used here)
    u32 word_59c;
    u32 word_5a0;
    u32 word_5a4;
};
GUEST_OFFSET(Local_002194d8_r0_5, word_59c, 0x59c);
GUEST_OFFSET(Local_002194d8_r0_5, word_5a0, 0x5a0);
GUEST_OFFSET(Local_002194d8_r0_5, word_5a4, 0x5a4);

inline guest::global<u32, 0x0098ad64> global_0098ad64;
inline guest::global<u32, 0x0098ad68> global_0098ad68;
inline guest::global<u32, 0x0098ad6c> global_0098ad6c;
inline guest::global<u32, 0x0098ad70> global_0098ad70;
inline guest::global<u32, 0x0098ad74> global_0098ad74;
inline guest::global<u32, 0x0098ad78> global_0098ad78;
inline guest::global<u32, 0x0098ad7c> global_0098ad7c;
inline guest::global<u32, 0x0098ad80> global_0098ad80;
inline guest::global<u32, 0x0098ad84> global_0098ad84;
inline constexpr guest::Function<0x001e62dc, u32(u32, u32, u32, u32)> SceneLight__add_light;
inline constexpr guest::Function<0x00218220, u32(u32, u32, u32, u32)> Fireworks__place;
inline constexpr guest::Function<0x002198b4, u32(u32, u32, u32, u32)> Fireworks__play_sound;
inline constexpr guest::Function<0x007207d8, u32(u32, u32, u32, u32)> EffectHandle__is_alive;

u32 Fireworks__launch(u32 fireworks, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r0_1 = 0;
    u32 r3_5 = 0;
    u32 r2_1 = 0;
    u32 r5 = fireworks;
    u32 r6 = r1;
    u32 r7 = r2;
    u32 r4 = 0u;
    do {
        r0_1 = *gptr<u32>(r5 + (r4 << 2) + 0x578u);  // (from the original)
        if (s32(r0_1) <= 0) {
            u32 r1_1 = r4 + (r4 << 1);
            r0_1 = EffectHandle__is_alive(r5 + (r1_1 << 3) + 0x500u, r1_1, r2, r3);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_1 == 0) {
                if (s32(r4) >= 0) {
                    if (r7 != 1u) {
                        if (r7 == 2u) {
                            gptr<Local_002194d8_r0_3> r0_3 = gptr<Local_002194d8_r0_3>(r5 + (r4 + (r4 << 1) << 2));
                            r0_3->word_59c = *global_0098ad70;
                            r0_3->word_5a0 = *global_0098ad74;
                            r0_3->word_5a4 = *global_0098ad78;
                        } else if (r7 == 3u) {
                            gptr<Local_002194d8_r0_4> r0_4 = gptr<Local_002194d8_r0_4>(r5 + (r4 + (r4 << 1) << 2));
                            r0_4->word_59c = *global_0098ad7c;
                            r0_4->word_5a0 = *global_0098ad80;
                            r0_4->word_5a4 = *global_0098ad84;
                        }
                    } else {
                        gptr<Local_002194d8_r0_5> r0_5 = gptr<Local_002194d8_r0_5>(r5 + (r4 + (r4 << 1) << 2));
                        r0_5->word_59c = *global_0098ad64;
                        r0_5->word_5a0 = *global_0098ad68;
                        r0_5->word_5a4 = *global_0098ad6c;
                    }
                    *gptr<u32>(r5 + (r4 << 2) + 0x578u) = 0x78;  // (from the original)
                    u32 r0_6 = r4 + (r4 << 1);
                    Fireworks__place(r5, r5 + (r0_6 << 3) + 0x500u, r6, r5 + (r0_6 << 2) + 0x59cu);  // (from the original)
                    if (r6 != 0x23u) {  // (from the original)
                        if (r6 == 0x24u) {  // (from the original)
                            SceneLight__add_light(8u, 0x1eu, 0x50u, 0x82u);  // (from the original)
                            frame.release();
                            return Fireworks__play_sound(r5, 0x1000797u, r4, guest::cpu()->r[3]);  // (from the original)
                        }
                        if (r6 == 0x25u) {  // (from the original)
                            SceneLight__add_light(1u, 0x1eu, 0x28u, 0x5au);  // (from the original)
                            frame.release();
                            return Fireworks__play_sound(r5, 0x1000795u, r4, guest::cpu()->r[3]);  // (from the original)
                        }
                        if (r6 == 0x26u) {  // (from the original)
                            SceneLight__add_light(8u, 0x1eu, 0x28u, 0x5au);  // (from the original)
                            frame.release();
                            return Fireworks__play_sound(r5, 0x1000796u, r4, guest::cpu()->r[3]);  // (from the original)
                        }
                        if (r6 == 0x28u) {  // (from the original)
                            r3_5 = 0x82u;  // (from the original)
                            r2_1 = 0x50u;  // (from the original)
                        } else {
                            r3_5 = 0x5au;  // (from the original)
                            r2_1 = 0x28u;  // (from the original)
                        }
                        frame.release();
                        return SceneLight__add_light(0u, 0x1eu, r2_1, r3_5);  // (from the original)
                    }
                    SceneLight__add_light(4u, 0x1eu, 0x28u, 0x5au);  // (from the original)
                    frame.release();
                    return Fireworks__play_sound(r5, 0x1000796u, r4, guest::cpu()->r[3]);  // (from the original)
                }
                break;
            }
        }
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 5);
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_002194d8
GUEST_EXPORT(0x002194d8, d_002194d8::Fireworks__launch);

// f_002198b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Plays the firework's sound at its position, unless the scene mutes it.
namespace d_002198b4 {

struct __attribute__((packed)) Local_002198b4_ea_1 {
    u32 word_0;
    u8 unknown_4[0x10];  // (not used here)
    u32 word_14;
};
GUEST_OFFSET(Local_002198b4_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_002198b4_ea_1, word_14, 0x14);

struct __attribute__((packed)) Local_002198b4_r0_5 {
    u8 unknown_0[0x24];  // (not used here)
    float float_24;
    float float_28;
    float float_2c;
};
GUEST_OFFSET(Local_002198b4_r0_5, float_24, 0x24);
GUEST_OFFSET(Local_002198b4_r0_5, float_28, 0x28);
GUEST_OFFSET(Local_002198b4_r0_5, float_2c, 0x2c);

struct __attribute__((packed)) Local_002198b4_r1_2 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_002198b4_r1_2, float_0, 0x0);
GUEST_OFFSET(Local_002198b4_r1_2, float_4, 0x4);

struct __attribute__((packed)) Local_002198b4_r2_3 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_002198b4_r2_3, float_0, 0x0);
GUEST_OFFSET(Local_002198b4_r2_3, float_4, 0x4);

struct __attribute__((packed)) Local_002198b4_r4_1 {
    u8 unknown_0[0x7c4];  // (not used here)
    u32 word_7c4;
    u8 unknown_7c8[0x10];  // (not used here)
    u32 word_7d8;
};
GUEST_OFFSET(Local_002198b4_r4_1, word_7c4, 0x7c4);
GUEST_OFFSET(Local_002198b4_r4_1, word_7d8, 0x7d8);

inline constexpr u32 camera_manager_address = 0x0094edd8u;
inline constexpr u32 global_0094f234_address = 0x0094f234u;
inline constexpr u32 fireworks_sound_address = 0x0094f250u;
inline guest::global<u32, 0x0094edd8> camera_manager;
inline guest::global<u32, 0x0094f250> fireworks_sound;
inline constexpr guest::Function<0x00250438, u32(u32, u32, u32)> SoundObj__play_at;
inline constexpr guest::Function<0x002504d4, u32(u32, u32)> SoundObj__play;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x00583be8, u32(u32)> global_flag_b18;

struct __attribute__((packed)) Frame_002198b4 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Frame_002198b4, float_0, 0x0);
GUEST_OFFSET(Frame_002198b4, float_4, 0x4);
GUEST_OFFSET(Frame_002198b4, float_8, 0x8);
GUEST_SIZE(Frame_002198b4, 0xc);

u32 Fireworks__play_sound(u32 fireworks, u32 r1, u32 r2, float S0, float S1, float S2, float S3) {
    guest::StackFrameOf<Frame_002198b4> frame;  // the original's stack frame
    u32 r0_10 = 0;
    u32 scene = current_scene_id(fireworks, r1, r2, guest::cpu()->r[3]);
    u32 scene_flagged = scene_has_flags(4u, scene);
    u32 r0_3 = r2 + (r2 << 1);
    gptr<Local_002198b4_r4_1> r4_1 = gptr<Local_002198b4_r4_1>(fireworks + (r2 << 2));
    u32 r1_1 = fireworks + (r0_3 << 2) + 0x59cu;  // (from the original)
    u32 r5_1 = fireworks + (r0_3 << 5) + 0x5e4u;  // (from the original)
    if (scene_flagged != 0) {
        u32 r0_4 = *camera_manager;
        if (r0_4 != 0) {
            float S2_3 = std::bit_cast<float>(*gptr<u32>(r1_1));
            gptr<Local_002198b4_r1_2> r1_2 = gptr<Local_002198b4_r1_2>(r1_1 + 4u);
            gptr<Local_002198b4_r2_3> r2_3 = gptr<Local_002198b4_r2_3>(frame.at(4).addr());
            float S0_3 = r1_2->float_0;
            float S1_3 = r1_2->float_4;
            frame->float_0 = S2_3;
            r2_3->float_0 = S0_3;
            r2_3->float_4 = S1_3;
            gptr<Local_002198b4_r0_5> r0_5 = gptr<Local_002198b4_r0_5>(*gptr<u32>(r0_4 + 0x1a4u));  // (from the original)
            float S3_3 = r0_5->float_24;
            frame->float_0 = S2_3 + S3_3;
            float S2_4 = r0_5->float_28;
            frame->float_4 = S0_3 + S2_4;
            float S0_4 = r0_5->float_2c;
            float S0_5 = S1_3 + S0_4;
            frame->float_8 = S0_5;
            guest::cpu()->s[0] = S0_5;
            guest::cpu()->s[1] = S1_3;
            guest::cpu()->s[2] = S2_4;
            guest::cpu()->s[3] = S3_3;
            u32 play = SoundObj__play_at(r5_1, frame.at(0).addr(), r2_3.addr());
            u32 r0_7 = global_flag_b18(play);
            r1_1 = guest::cpu()->r[1];
            if (r0_7 != 0) {
                SoundObj__play(r5_1, 0x1000794u);  // (from the original)
                r1_1 = guest::cpu()->r[1];
            }
        }
        u32 r0_8 = *fireworks_sound;
        gptr<Local_002198b4_ea_1> ea_1 = gptr<Local_002198b4_ea_1>(r4_1.addr() + 0x7c4u);  // (from the original)
        ea_1->word_0 = r0_8;
        ea_1->word_14 = r1;
        guest::cpu()->r[1] = r1_1;
        return r0_8;
    }
    SoundObj__play_at(r5_1, r1_1, guest::cpu()->r[2]);
    u32 r0_9 = *fireworks_sound;
    r4_1->word_7c4 = r0_9;
    u32 r1_5 = r1 + 0xfefff86bu;  // (from the original)
    if (r1_5 == 0) {
        r0_10 = 0x1000799u;  // (from the original)
    } else if (r1_5 == 1u) {
        r0_10 = 0x100079au;  // (from the original)
    } else {
        if (r1_5 == 2u) {
            r0_9 = 0x100079bu;  // (from the original)
            r4_1->word_7d8 = r0_9;
        }
        guest::cpu()->r[1] = r1_5;
        return r0_9;
    }
    r4_1->word_7d8 = r0_10;
    guest::cpu()->r[1] = r1_5;
    return r0_10;
}

}  // namespace d_002198b4
GUEST_EXPORT_FRAMED(0x002198b4, d_002198b4::Fireworks__play_sound, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0021cdc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0021cdc4 {

inline constexpr u32 vtable_BsMenuCatalog = 0x008edd1cu;
inline constexpr u32 vtable_BsMenuCatalog_at_28 = 0x008edd88u;
inline constexpr u32 vtable_ComButton2Lyt = 0x008ee228u;
inline constexpr u32 vtable_Control2Button = 0x008ef284u;
inline constexpr u32 vtable_Control2Button_at_e4 = 0x008ef2c8u;
inline constexpr u32 vtable_ComButtonLytBase = 0x008f18f4u;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;
inline constexpr guest::Function<0x002f770c, u32(u32)> ControlButtonBase__virtual_0_002f770c;
inline constexpr guest::Function<0x002f7710, u32(u32)> destroy_button_action_control;
inline constexpr guest::Function<0x00567ef0, u32(u32, u32)> ssys__ma__lyt__ArcResAccReader__destructor;
inline constexpr guest::Function<0x0056988c, u32(u32)> destroy_animation;
inline constexpr guest::Function<0x005bf744, u32(u32)> Layout__destructor;
inline constexpr guest::Function<0x005e3194, u32(u32)> script__RenderMain__RenderMain_005e3194;
inline constexpr guest::Function<0x006aaa30, u32(u32, u32)> MenuBase__destructor;

u32 BsMenuCatalog__virtual_0_0021cdc4(gptr<BsMenuCatalog> bs_menu_catalog) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    bs_menu_catalog->vtable = vtable_BsMenuCatalog;
    bs_menu_catalog->bs_menu_catalog_vtable = vtable_BsMenuCatalog_at_28;
    bs_menu_catalog->vtable_10fc = vtable_ComButton2Lyt;
    u32 r4_1 = bs_menu_catalog.addr() + 0x1494u;  // (from the original)
    bs_menu_catalog->control2_button_vtable_1578 = vtable_Control2Button_at_e4;
    bs_menu_catalog->control2_button_vtable = vtable_Control2Button;
    destroy_array_elements(r4_1 + 0x118u, 0x2e0b3cu, 0x518u, 2u);  // (from the original)
    ControlButtonBase__virtual_0_002f770c(r4_1);
    bs_menu_catalog->vtable_10fc = vtable_ComButtonLytBase;
    u32 r0_3 = ssys__ma__lyt__ArcResAccReader__destructor(r4_1 - 0x248u, vtable_ComButtonLytBase);  // (from the original)
    u32 r0_5 = Layout__destructor(r0_3 - 0x14cu);  // (from the original)
    destroy_button_action_control(r0_5 - 0xe8u);  // (from the original)
    destroy_array_elements(r0_5 - 0x628u, 0x2b6ef8u, 0xe0u, 6u);  // (from the original)
    script__RenderMain__RenderMain_005e3194(r0_5 - 0x6f8u);  // (from the original)
    script__RenderMain__RenderMain_005e3194(r0_5 - 0x7bcu);  // (from the original)
    script__RenderMain__RenderMain_005e3194(r0_5 - 0x880u);  // (from the original)
    script__RenderMain__RenderMain_005e3194(r0_5 - 0x944u);  // (from the original)
    destroy_animation(r0_5 - 0x96cu);  // (from the original)
    destroy_animation(r0_5 - 0x994u);  // (from the original)
    destroy_animation(r0_5 - 0x9bcu);  // (from the original)
    destroy_animation(r0_5 - 0x9e4u);  // (from the original)
    destroy_animation(r0_5 - 0xa0cu);  // (from the original)
    destroy_animation(r0_5 - 0xa34u);  // (from the original)
    destroy_animation(r0_5 - 0xa5cu);  // (from the original)
    destroy_animation(r0_5 - 0xa84u);  // (from the original)
    u32 r0_21 = Layout__destructor(r0_5 - 0xbd0u);  // (from the original)
    u32 r0_23 = Layout__destructor(r0_21 - 0x14cu);  // (from the original)
    u32 r0_25 = Layout__destructor(r0_23 - 0x14cu);  // (from the original)
    u32 r0_27 = ssys__ma__lyt__ArcResAccReader__destructor(r0_25 - 0x248u, guest::cpu()->r[1]);  // (from the original)
    frame.release();
    return MenuBase__destructor(r0_27 - 0x50u, guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_0021cdc4
GUEST_EXPORT(0x0021cdc4, d_0021cdc4::BsMenuCatalog__virtual_0_0021cdc4);

// f_0021d000: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0021d000 {

struct __attribute__((packed)) script__WordFix_33u_ {
    u8 unknown_0[0xc833];  // (not used here)
    u8 byte_c833;
};
GUEST_OFFSET(script__WordFix_33u_, byte_c833, 0xc833);

struct __attribute__((packed)) Local_0021d000_r0_7 {
    u8 unknown_0[0x4d4];  // (not used here)
    u32 word_4d4;
    u32 word_4d8;
    u32 word_4dc;
};
GUEST_OFFSET(Local_0021d000_r0_7, word_4d4, 0x4d4);
GUEST_OFFSET(Local_0021d000_r0_7, word_4d8, 0x4d8);
GUEST_OFFSET(Local_0021d000_r0_7, word_4dc, 0x4dc);

struct __attribute__((packed)) Local_0021d000_r6_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0021d000_r6_1, word_0, 0x0);
GUEST_OFFSET(Local_0021d000_r6_1, word_4, 0x4);
GUEST_OFFSET(Local_0021d000_r6_1, word_8, 0x8);

inline constexpr u32 vtable_script__WordFix_33u_ = 0x00909f18u;
inline guest::global<u32, 0x00848f44> global_00848f44;
inline guest::global<u32, 0x00848f48> global_00848f48;
inline guest::global<u32, 0x00848f4c> global_00848f4c;
inline constexpr guest::Function<0x0026e250, u32(u32, u32)> PocketsGrid__button_virtual_24;
inline constexpr guest::Function<0x002cbccc, u32(u32, u32)> ListWindow__row_on_page;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;
inline constexpr guest::Function<0x002fe7f4, u32(u32, u32, u32)> script__WordFix_33u___WordFix_002fe7f4;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x0030b6b8, u32(u32)> Item__number;
inline constexpr guest::Function<0x004de5d4, u32(u32)> Item__is_category_75_or_76;
inline constexpr guest::Function<0x005d4a78, u32(u32, u32, u32, u32)> call_virtual_slot_2;
inline constexpr guest::Function<0x005e34c4, u32(u32, u32, u32, u32)> MessageRef__set;
inline constexpr guest::Function<0x005e4988, u32(u32, u32, u32, u32)> store_byte_constant_pack_0x4_005e4988;
inline constexpr guest::Function<0x005e4994, u32(u32, u32, u32, u32)> script__CapitalTopEngine__CapitalTopEngine_005e4994;
inline constexpr guest::Function<0x005e49c0, u32(u32, u32, u32)> MessageChoice__setup;
inline constexpr guest::Function<0x005e8498, u32(u32, u32)> DialogBox__virtual_5;
inline constexpr guest::Function<0x0071348c, u32(u32, u32)> stock_item_at;
inline constexpr guest::Function<0x00718c0c, u32(u32, u32)> slot_index_is_valid;
inline constexpr guest::Function<0x0071af4c, u32(u32, u32)> ChildList__first_position;
inline constexpr guest::Function<0x0071ecc4, u32(u32, u32, u32, u32)> within_age_window;

struct __attribute__((packed)) Frame_0021d000 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0xc4];  // (not read or written by name)
    u32 object_d0_vtable;
    u8 unknown_d4[0x58];  // (not read or written by name)
    u32 word_12c;
    u32 word_130;
    u32 word_134;
    u8 unknown_138[0x10];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0021d000, word_0, 0x0);
GUEST_OFFSET(Frame_0021d000, word_4, 0x4);
GUEST_OFFSET(Frame_0021d000, word_8, 0x8);
GUEST_OFFSET(Frame_0021d000, object_d0_vtable, 0xd0);
GUEST_OFFSET(Frame_0021d000, word_12c, 0x12c);
GUEST_OFFSET(Frame_0021d000, word_130, 0x130);
GUEST_OFFSET(Frame_0021d000, word_134, 0x134);
GUEST_SIZE(Frame_0021d000, 0x148);

void script__WordFix_33u___WordFix_0021d000(gptr<script__WordFix_33u_> word_fix_33u, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0021d000> frame;  // the original's stack frame
    u32 r0 = word_fix_33u.addr();
    u32 r0_4 = 0;
    u32 r7 = r0 + 0xc274u;  // (from the original)
    word_fix_33u->byte_c833 = 1;
    u32 r0_2 = within_age_window(r0 + 0x4cu, r1, r2, r3);  // (from the original)
    if (r0_2 != 0) {
        r0_4 = ListWindow__row_on_page(r0 + 0x4cu, r1);  // (from the original)
    } else {
        u32 pockets_grid = r0 + 0x3cf4u;  // (from the original)
        r0_4 = slot_index_is_valid(pockets_grid, r1);
        if (r0_4 != 0) {
            r0_4 = PocketsGrid__button_virtual_24(pockets_grid, r1);
        }
    }
    *gptr<u32>(r7 + 0x590u) = r0_4;  // (from the original)
    ChildList__first_position(r0 + 0xc15cu, frame.at(0x12c).addr());  // (from the original)
    gptr<Local_0021d000_r0_7> r0_7 = gptr<Local_0021d000_r0_7>(r7 + 0xdcu);  // (from the original)
    r0_7->word_4d4 = frame->word_12c;
    r0_7->word_4d8 = frame->word_130;
    r0_7->word_4dc = frame->word_134;
    u32 stock_item = stock_item_at(r0, r1);
    *gptr<u8>(r7 + 0x5beu) = 1;  // (from the original)
    u32 r0_10 = script__WordFix_33u___WordFix_002fe7f4(frame.at(0xd0).addr(), stock_item, 0u);  // (from the original)
    DialogBox__virtual_5(r7, r0_10);
    frame->object_d0_vtable = vtable_script__WordFix_33u_;
    gptr<Local_0021d000_r6_1> r6_1 = gptr<Local_0021d000_r6_1>(frame.at(0x138).addr());  // (from the original)
    u32 r1_2 = *global_00848f48;
    u32 r2_5 = *global_00848f4c;
    r6_1->word_0 = *global_00848f44;
    r6_1->word_4 = r1_2;
    r6_1->word_8 = r2_5;
    for_each_element(frame.at(0x10).addr(), 0x5e35dcu, 0x20u, 6u);  // (from the original)
    Item__number(stock_item);
    u32 r0_12 = Item__is_category_75_or_76(stock_item);
    frame->word_8 = 7;
    frame->word_0 = 0;
    frame->word_4 = 0;
    MessageRef__set(frame.at(0x10).addr(), frame.at(0x138).addr(), r0_12 == 0 ? 0x32u : 0x19u, 0u);  // (from the original)
    frame->word_0 = 0;
    frame->word_4 = 1;
    u32 r6 = frame.at(0x10).addr();  // (from the original)
    frame->word_8 = 1;
    MessageRef__set(frame.at(0x30).addr(), frame.at(0x138).addr(), 0xbu, 0u);  // (from the original)
    u32 r5 = 2u;
    MessageChoice__setup(r7, r5, 1u);
    r3 = guest::cpu()->r[3];
    u32 r4 = 0u;
    do {
        script__CapitalTopEngine__CapitalTopEngine_005e4994(r7, r4, r6 + (r4 << 5), r3);
        r3 = guest::cpu()->r[3];
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < s32(r5));
    store_byte_constant_pack_0x4_005e4988(r7, guest::cpu()->r[1], guest::cpu()->r[2], r3);
    call_virtual_slot_2(r7, 0u, 0u, 0u);
    destroy_array_elements(frame.at(0x10).addr(), 0x5e3618u, 0x20u, 6u);  // (from the original)
}

}  // namespace d_0021d000
GUEST_EXPORT_FRAMED(0x0021d000, d_0021d000::script__WordFix_33u___WordFix_0021d000, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0021e664: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0021e664 {

struct __attribute__((packed)) Local_0021e664_r0_12 {
    u32 vtable;
    u8 unknown_4[0xa3c];  // (not used here)
    u32 change_stock_cooler_vtable;
};
GUEST_OFFSET(Local_0021e664_r0_12, vtable, 0x0);
GUEST_OFFSET(Local_0021e664_r0_12, change_stock_cooler_vtable, 0xa40);

inline constexpr u32 vtable_BsMenuCoolbox = 0x008edd9cu;
inline constexpr u32 vtable_BsMenuCoolbox_at_28 = 0x008ede08u;
inline constexpr u32 vtable_DragIconControl_rec = 0x008f08acu;
inline constexpr u32 vtable_ChangeStockCooler = 0x008f2674u;
inline constexpr u32 vtable_ChangeStockCooler_at_a40 = 0x008f26a4u;
inline constexpr u32 vtable_ItemDragIconGroup = 0x008f2a0cu;
inline constexpr u32 vtable_ItemDragIconGroup_at_c = 0x008f2a1cu;
inline constexpr u32 vtable_ItemSelectNameWindow = 0x008f47a0u;
inline constexpr guest::Function<0x0022c5d8, u32(u32)> DragIconGroup__virtual_0_0022c5d8;
inline constexpr guest::Function<0x002684c0, u32(u32, u32, u32)> ChangeListBase__ChangeListBase;
inline constexpr guest::Function<0x0026fe3c, u32(u32)> ItemDragWindow__destructor;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;
inline constexpr guest::Function<0x002f7710, u32(u32, u32)> destroy_button_action_control;
inline constexpr guest::Function<0x00567ef0, u32(u32)> ssys__ma__lyt__ArcResAccReader__destructor;
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32)> destroy_animation;
inline constexpr guest::Function<0x005bf744, u32(u32)> Layout__destructor;
inline constexpr guest::Function<0x005e3194, u32(u32, u32, u32, u32)> script__RenderMain__RenderMain_005e3194;
inline constexpr guest::Function<0x005e8a7c, u32(u32)> script__ChoiceStandardItem__destructor;
inline constexpr guest::Function<0x006aaa30, u32(u32, u32)> MenuBase__destructor;

u32 BsMenuCoolbox__virtual_0_0021e664(gptr<BsMenuCoolbox> bs_menu_coolbox, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    bs_menu_coolbox->vtable = vtable_BsMenuCoolbox;
    bs_menu_coolbox->bs_menu_coolbox_vtable = vtable_BsMenuCoolbox_at_28;
    bs_menu_coolbox->item_select_name_window_vtable = vtable_ItemSelectNameWindow;
    u32 r0_1 = bs_menu_coolbox.addr() + 0xd2f4u;  // (from the original)
    script__RenderMain__RenderMain_005e3194(r0_1, vtable_ItemSelectNameWindow, vtable_BsMenuCoolbox_at_28, r3);
    u32 r0_2 = r0_1 - 0x28u;  // (from the original)
    destroy_animation(r0_2, guest::cpu()->r[1], guest::cpu()->r[2]);
    u32 r0_3 = r0_2 - 0x28u;  // (from the original)
    destroy_animation(r0_3, guest::cpu()->r[1], guest::cpu()->r[2]);
    u32 r0_5 = Layout__destructor(r0_3 - 0x15cu);  // (from the original)
    u32 r0_7 = ssys__ma__lyt__ArcResAccReader__destructor(r0_5 - 0x24cu);  // (from the original)
    u32 r0_9 = script__ChoiceStandardItem__destructor(r0_7 - 0xc88u);  // (from the original)
    u32 ea_1 = r0_9 - 0x118u;  // (from the original)
    *gptr<u32>(ea_1) = vtable_DragIconControl_rec;
    destroy_button_action_control(ea_1, vtable_DragIconControl_rec);
    u32 r0_11 = ItemDragWindow__destructor(ea_1 - 0x8468u);  // (from the original)
    gptr<Local_0021e664_r0_12> r0_12 = gptr<Local_0021e664_r0_12>(r0_11 - 0x3ca8u);  // (from the original)
    r0_12->change_stock_cooler_vtable = vtable_ChangeStockCooler_at_a40;
    r0_12->vtable = vtable_ChangeStockCooler;
    u32 r0_13 = r0_12.addr() + 0x3ac0u;  // (from the original)
    *gptr<u32>(r0_13) = vtable_ItemDragIconGroup;
    u32 r0_14 = r0_13 + 0xcu;  // (from the original)
    *gptr<u32>(r0_14) = vtable_ItemDragIconGroup_at_c;
    u32 r0_15 = r0_14 + 0x1acu;  // (from the original)
    destroy_animation(r0_15, vtable_ItemDragIconGroup, vtable_ItemDragIconGroup_at_c);
    u32 r0_16 = r0_15 - 0x28u;  // (from the original)
    destroy_animation(r0_16, guest::cpu()->r[1], guest::cpu()->r[2]);
    u32 r0_17 = r0_16 - 0x28u;  // (from the original)
    destroy_animation(r0_17, guest::cpu()->r[1], guest::cpu()->r[2]);
    u32 r0_18 = r0_17 - 0x28u;  // (from the original)
    destroy_animation(r0_18, guest::cpu()->r[1], guest::cpu()->r[2]);
    u32 drag_icon_group = r0_18 - 0x140u;  // (from the original)
    DragIconGroup__virtual_0_0022c5d8(drag_icon_group);
    destroy_array_elements(drag_icon_group - 0x2238u, 0x2b950cu, 0x36cu, 0xau);  // (from the original)
    u32 r0_21 = ChangeListBase__ChangeListBase(drag_icon_group - 0x3ac0u, guest::cpu()->r[1], 0x36cu);  // (from the original)
    frame.release();
    return MenuBase__destructor(r0_21 - 0x4cu, guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_0021e664
GUEST_EXPORT(0x0021e664, d_0021e664::BsMenuCoolbox__virtual_0_0021e664);

// f_0021fa30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The word of the entry: a letter on the page, or an item.
namespace d_0021fa30 {

inline constexpr guest::Function<0x00274394, u32(u32, u32)> LetterPage__entry_word_1250;
inline constexpr guest::Function<0x00320548, u32(u32, u32)> ItemPage__entry_word_684;
inline constexpr guest::Function<0x00718d98, u32(u32, u32)> value_within_window_of_counter;
inline constexpr guest::Function<0x00723f84, u32(u32, u32)> Page10__contains;

u32 Mailbox__entry_word(u32 mailbox, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_2 = value_within_window_of_counter(mailbox + 0xc8u, r1);  // (from the original)
    if (r0_2 != 0) {
        frame.release();
        return LetterPage__entry_word_1250(mailbox + 0xc8u, r1);  // (from the original)
    }
    u32 r0_5 = Page10__contains(mailbox + 0x2cbcu, r1);  // (from the original)
    if (r0_5 != 0) {
        frame.release();
        return ItemPage__entry_word_684(mailbox + 0x2cbcu, r1);  // (from the original)
    }
    return r0_5;
}

}  // namespace d_0021fa30
GUEST_EXPORT(0x0021fa30, d_0021fa30::Mailbox__entry_word);

// f_0021fb60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0021fb60 {

inline constexpr u32 vtable_BsMenuMailbox = 0x008ede1cu;
inline constexpr u32 vtable_BsMenuMailbox_at_28 = 0x008ede88u;
inline constexpr u32 vtable_BsMenuMailbox_at_a4 = 0x008edf8cu;
inline constexpr u32 vtable_DragIconGroup = 0x008ee248u;
inline constexpr u32 vtable_DragIconGroup_at_c = 0x008ee258u;
inline constexpr u32 vtable_DragIconControl_rec = 0x008f08acu;
inline constexpr u32 vtable_ItemSelectNameWindow = 0x008f47a0u;
inline constexpr u32 vtable_LetterDragPostWindow = 0x008f47ecu;
inline constexpr u32 vtable_LetterDragPostWindow_at_213c = 0x008f4814u;
inline constexpr u32 vtable_LetterDragWindowBase = 0x008f4828u;
inline constexpr guest::Function<0x0027460c, u32(u32)> PostDragWindow__destructor;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;
inline constexpr guest::Function<0x002f7710, u32(u32, u32, u32, u32)> destroy_button_action_control;
inline constexpr guest::Function<0x003170d0, u32(u32)> destroy_ITalkRecept;
inline constexpr guest::Function<0x00567ef0, u32(u32)> ssys__ma__lyt__ArcResAccReader__destructor;
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> destroy_animation;
inline constexpr guest::Function<0x005bf744, u32(u32)> Layout__destructor;
inline constexpr guest::Function<0x005e3194, u32(u32, u32)> script__RenderMain__RenderMain_005e3194;
inline constexpr guest::Function<0x005e8a7c, u32(u32)> script__ChoiceStandardItem__destructor;
inline constexpr guest::Function<0x006aaa30, u32(u32, u32)> MenuBase__destructor;

u32 BsMenuMailbox__virtual_0_0021fb60(gptr<BsMenuMailbox> bs_menu_mailbox) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    bs_menu_mailbox->bs_menu_mailbox_vtable_a4 = vtable_BsMenuMailbox_at_a4;
    bs_menu_mailbox->bs_menu_mailbox_vtable = vtable_BsMenuMailbox_at_28;
    bs_menu_mailbox->vtable = vtable_BsMenuMailbox;
    u32 r0_1 = bs_menu_mailbox.addr() + 0x5fe8u;  // (from the original)
    bs_menu_mailbox->drag_icon_control_vtable = vtable_DragIconControl_rec;
    destroy_button_action_control(r0_1, vtable_BsMenuMailbox_at_a4, vtable_BsMenuMailbox_at_28, vtable_BsMenuMailbox);
    u32 r0_3 = script__ChoiceStandardItem__destructor(r0_1 - 0xc64u);  // (from the original)
    *gptr<u32>(r0_3 - 0x4f0u) = vtable_ItemSelectNameWindow;  // (from the original)
    u32 r0_4 = r0_3 - 0xd4u;  // (from the original)
    script__RenderMain__RenderMain_005e3194(r0_4, vtable_ItemSelectNameWindow);
    u32 r0_5 = r0_4 - 0x28u;  // (from the original)
    destroy_animation(r0_5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_6 = r0_5 - 0x28u;  // (from the original)
    destroy_animation(r0_6, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_8 = Layout__destructor(r0_6 - 0x15cu);  // (from the original)
    u32 r0_10 = ssys__ma__lyt__ArcResAccReader__destructor(r0_8 - 0x24cu);  // (from the original)
    u32 r0_11 = r0_10 - 0x21fcu;  // (from the original)
    *gptr<u32>(r0_11) = vtable_LetterDragPostWindow;
    *gptr<u32>(r0_11 + 0x213cu) = vtable_LetterDragPostWindow_at_213c;  // (from the original)
    u32 r0_12 = r0_11 + 0x21b0u;  // (from the original)
    destroy_animation(r0_12, vtable_LetterDragPostWindow, vtable_LetterDragPostWindow_at_213c, 0x213cu);  // (from the original)
    u32 r0_13 = r0_12 - 0x28u;  // (from the original)
    destroy_animation(r0_13, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_14 = r0_13 - 0x28u;  // (from the original)
    destroy_animation(r0_14, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_15 = r0_14 - 0x2160u;  // (from the original)
    *gptr<u32>(r0_15) = vtable_LetterDragWindowBase;
    u32 r0_16 = r0_15 + 0x201cu;  // (from the original)
    *gptr<u32>(r0_16) = vtable_DragIconControl_rec;
    destroy_button_action_control(r0_16, vtable_LetterDragWindowBase, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r0_16 - 0x134u) = vtable_DragIconGroup_at_c;  // (from the original)
    *gptr<u32>(r0_16 - 0x140u) = vtable_DragIconGroup;  // (from the original)
    u32 r0_17 = r0_16 - 0x2cu;  // (from the original)
    destroy_animation(r0_17, vtable_DragIconGroup, vtable_DragIconGroup_at_c, guest::cpu()->r[3]);
    u32 r0_18 = r0_17 - 0x28u;  // (from the original)
    destroy_animation(r0_18, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_19 = r0_18 - 0x28u;  // (from the original)
    destroy_animation(r0_19, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_20 = r0_19 - 0x28u;  // (from the original)
    destroy_animation(r0_20, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_21 = r0_20 - 0x28u;  // (from the original)
    destroy_animation(r0_21, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_22 = r0_21 - 0x28u;  // (from the original)
    destroy_animation(r0_22, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_23 = r0_22 - 0x2cu;  // (from the original)
    destroy_animation(r0_23, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    destroy_array_elements(r0_23 - 0x1b28u, 0x2e3854u, 0x2b4u, 0xau);  // (from the original)
    u32 r0_25 = r0_23 - 0x1b54u;  // (from the original)
    destroy_animation(r0_25, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_27 = Layout__destructor(r0_25 - 0x150u);  // (from the original)
    u32 r0_29 = ssys__ma__lyt__ArcResAccReader__destructor(r0_27 - 0x248u);  // (from the original)
    u32 r0_31 = PostDragWindow__destructor(r0_29 - 0x2c04u);  // (from the original)
    u32 r0_32 = r0_31 - 0xa0u;  // (from the original)
    destroy_ITalkRecept(r0_32);
    frame.release();
    return MenuBase__destructor(r0_32 - 0x28u, guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_0021fb60
GUEST_EXPORT(0x0021fb60, d_0021fb60::BsMenuMailbox__virtual_0_0021fb60);

// f_0021fe04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Plays the tab's animation on its pane.
namespace d_0021fe04 {

struct __attribute__((packed)) Mailbox {
    u8 unknown_0[0xb2f4];  // (not used here)
    u32 word_b2f4;
};
GUEST_OFFSET(Mailbox, word_b2f4, 0xb2f4);

inline constexpr u32 global_0094fc50_address = 0x0094fc50u;
inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> Layout__find_pane;
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> notify_list_objects;

u32 Mailbox__play_tab_animation(gptr<Mailbox> mailbox, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r6_1 = mailbox.addr() + 0xb000u;  // (from the original)
    u32 pane_2 = Layout__find_pane(mailbox->word_b2f4, gptr<u32>(global_0094fc50_address)[r1], 1u, r3);
    u32 r0_3 = mailbox->word_b2f4;
    frame.release();
    return notify_list_objects(r0_3, (mailbox.addr() + r1 * 0x28u) + 0xb2fcu, pane_2, 0u);  // (from the original)
}

}  // namespace d_0021fe04
GUEST_EXPORT(0x0021fe04, d_0021fe04::Mailbox__play_tab_animation);
