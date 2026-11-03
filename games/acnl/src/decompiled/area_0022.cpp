// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_00220c28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00220c28 {

struct __attribute__((packed)) Object_00220c28_0 {
    u8 unknown_0[0xb28c];  // (not used here)
    u32 word_b28c;
};
GUEST_OFFSET(Object_00220c28_0, word_b28c, 0xb28c);

struct __attribute__((packed)) Local_00220c28_r4_1 {
    u8 unknown_0[0x28c];  // (not used here)
    u32 word_28c;
    u8 unknown_290[0x118];  // (not used here)
    u8 byte_3a8;
    u8 unknown_3a9[0x17];  // (not used here)
    u32 word_3c0;
};
GUEST_OFFSET(Local_00220c28_r4_1, word_28c, 0x28c);
GUEST_OFFSET(Local_00220c28_r4_1, byte_3a8, 0x3a8);
GUEST_OFFSET(Local_00220c28_r4_1, word_3c0, 0x3c0);

inline constexpr guest::Function<0x0060e094, u32(u32, u32)> call_0060e094;
inline constexpr guest::Function<0x0060e0cc, u32(u32, u32, u32, u32)> call_0060e0cc;

u32 f_00220c28(gptr<Object_00220c28_0> arg0, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    gptr<Local_00220c28_r4_1> r4_1 = gptr<Local_00220c28_r4_1>(arg0.addr() + 0xb000u);  // (from the original)
    u32 r0_1 = arg0->word_b28c;
    u32 r5_1 = arg0.addr() + r1 * 0x314u + 0x2b1cu;  // (from the original)
    if (r0_1 != r5_1 && r0_1 != 0) {
        u32 r1_1 = *gptr<u8>(r0_1 + 0x26bu);  // (from the original)
        if (r1_1 == 1u) {
            call_0060e0cc(r0_1, r1_1, arg0.addr(), guest::cpu()->r[3]);
        }
    }
    r4_1->word_28c = r5_1;
    r4_1->byte_3a8 = 2;
    r4_1->word_3c0 = r1;
    u32 r1_2 = *gptr<u8>(r5_1 + 0x26bu);  // (from the original)
    if (r1_2 == 0) {
        frame.release();
        return call_0060e094(r5_1, r1_2);
    }
    guest::cpu()->r[1] = r1_2;
    return r5_1;
}

}  // namespace d_00220c28
GUEST_EXPORT(0x00220c28, d_00220c28::f_00220c28);

// f_0022105c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022105c {

struct __attribute__((packed)) Object_0022105c_0 {
    u8 unknown_0[0xb28c];  // (not used here)
    u32 word_b28c;
};
GUEST_OFFSET(Object_0022105c_0, word_b28c, 0xb28c);

struct __attribute__((packed)) Local_0022105c_r4_1 {
    u8 unknown_0[0x28c];  // (not used here)
    u32 word_28c;
    u8 unknown_290[0x118];  // (not used here)
    u8 byte_3a8;
    u8 unknown_3a9[0x17];  // (not used here)
    u32 word_3c0;
};
GUEST_OFFSET(Local_0022105c_r4_1, word_28c, 0x28c);
GUEST_OFFSET(Local_0022105c_r4_1, byte_3a8, 0x3a8);
GUEST_OFFSET(Local_0022105c_r4_1, word_3c0, 0x3c0);

inline constexpr guest::Function<0x0060e094, u32(u32, u32)> call_0060e094;
inline constexpr guest::Function<0x0060e0cc, u32(u32, u32, u32, u32)> call_0060e0cc;

u32 f_0022105c(gptr<Object_0022105c_0> arg0, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    gptr<Local_0022105c_r4_1> r4_1 = gptr<Local_0022105c_r4_1>(arg0.addr() + 0xb000u);  // (from the original)
    u32 r0_1 = arg0->word_b28c;
    u32 r5_1 = arg0.addr() + r1 * 0x314u + 4u;  // (from the original)
    if (r0_1 != r5_1 && r0_1 != 0) {
        u32 r1_1 = *gptr<u8>(r0_1 + 0x26bu);  // (from the original)
        if (r1_1 == 1u) {
            call_0060e0cc(r0_1, r1_1, arg0.addr(), guest::cpu()->r[3]);
        }
    }
    r4_1->word_28c = r5_1;
    r4_1->byte_3a8 = 1;
    r4_1->word_3c0 = r1;
    u32 r1_2 = *gptr<u8>(r5_1 + 0x26bu);  // (from the original)
    if (r1_2 == 0) {
        frame.release();
        return call_0060e094(r5_1, r1_2);
    }
    guest::cpu()->r[1] = r1_2;
    return r5_1;
}

}  // namespace d_0022105c
GUEST_EXPORT(0x0022105c, d_0022105c::f_0022105c);

// f_002214e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002214e4 {

struct __attribute__((packed)) Object_002214e4_0 {
    u8 unknown_0[0xb28c];  // (not used here)
    u32 word_b28c;
};
GUEST_OFFSET(Object_002214e4_0, word_b28c, 0xb28c);

struct __attribute__((packed)) Local_002214e4_r4_1 {
    u8 unknown_0[0x28c];  // (not used here)
    u32 word_28c;
    u8 unknown_290[0x118];  // (not used here)
    u8 byte_3a8;
    u8 unknown_3a9[0x17];  // (not used here)
    u32 word_3c0;
};
GUEST_OFFSET(Local_002214e4_r4_1, word_28c, 0x28c);
GUEST_OFFSET(Local_002214e4_r4_1, byte_3a8, 0x3a8);
GUEST_OFFSET(Local_002214e4_r4_1, word_3c0, 0x3c0);

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> read_global_byte_2;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> table_entry_has_all_bits;
inline constexpr guest::Function<0x0060e094, u32(u32, u32)> call_0060e094;
inline constexpr guest::Function<0x0060e0cc, u32(u32, u32)> call_0060e0cc;

void f_002214e4(gptr<Object_002214e4_0> arg0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = read_global_byte_2(arg0.addr(), r1, guest::cpu()->r[2], r3);
    u32 r1_1 = r0_1;
    u32 r0_2 = table_entry_has_all_bits(0x20u, r1_1);  // (from the original)
    if (r0_2 != 0) {
        gptr<Local_002214e4_r4_1> r4_1 = gptr<Local_002214e4_r4_1>(arg0.addr() + 0xb000u);  // (from the original)
        u32 r0_3 = arg0->word_b28c;
        u32 r5_1 = arg0.addr() + 0xac64u;  // (from the original)
        if (r0_3 != r5_1 && r0_3 != 0) {
            r1_1 = *gptr<u8>(r0_3 + 0x26bu);  // (from the original)
            if (r1_1 == 1u) {
                call_0060e0cc(r0_3, r1_1);
            }
        }
        r4_1->word_28c = r5_1;
        r4_1->byte_3a8 = 5;
        r4_1->word_3c0 = 0;
        if (*gptr<u8>(r5_1 + 0x26bu) == 0) {  // (from the original)
            frame.release();
            call_0060e094(r5_1, r1_1);
            return;
        }
    }
}

}  // namespace d_002214e4
GUEST_EXPORT(0x002214e4, d_002214e4::f_002214e4);

// f_00221790: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00221790 {

struct __attribute__((packed)) Object_00221790_0 {
    u8 unknown_0[0xb290];  // (not used here)
    u32 word_b290;
};
GUEST_OFFSET(Object_00221790_0, word_b290, 0xb290);

inline constexpr guest::Function<0x002213bc, u32(u32, u32, u32, u32)> call_002213bc;
inline constexpr guest::Function<0x006a923c, u32(u32, u32, u32, u32)> holder_flagged_has_flag_b7_bit_0;

void f_00221790(gptr<Object_00221790_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r3_2 = 0;
    u32 r5 = r0;
    u32 r4 = r5 + 0xb000u;  // (from the original)
    r0 = 0u;
    u32 r2 = 1u;
    u32 r1 = r2;
    arg0->word_b290 = r0;
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
            call_002213bc(r5, r6_1 + 4u, r2, r3);
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
                call_002213bc(r5, r6_2 + 0x2b1cu, r2, r3);  // (from the original)
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
                call_002213bc(r5, r6_4 + 0x2b1cu, r2, r3);  // (from the original)
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
GUEST_EXPORT_FRAMED(0x00221790, d_00221790::f_00221790, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00222ebc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00222ebc {

struct __attribute__((packed)) Object_00222ebc_0 {
    u8 unknown_0[0xb2f4];  // (not used here)
    u32 word_b2f4;
};
GUEST_OFFSET(Object_00222ebc_0, word_b2f4, 0xb2f4);

inline constexpr guest::Function<0x001323b4, u32(u32, u32, u32, u32)> layout_at_10_virtual_8;
inline constexpr guest::Function<0x006a923c, u32(u32)> holder_flagged_has_flag_b7_bit_0;

u32 f_00222ebc(gptr<Object_00222ebc_0> arg0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r4 = r0;
    u32 r0_1 = arg0->word_b2f4;
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
GUEST_EXPORT(0x00222ebc, d_00222ebc::f_00222ebc);

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
    bs_menu_map_base->word_0 = vtable_BsMenuMapBase;
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
    bs_menu_map_base->word_0 = vtable_BsMenuMapBase;
    bs_menu_map_base->word_b350 = vtable_script__WordFix_21u_;
    u32 r0_1 = bs_menu_map_base.addr() + 0xb350u;  // (from the original)
    destroy_array_elements(r0_1 - 0x54u, 0x56988cu, 0x28u, 2u);  // (from the original)
    bs_menu_map_base->word_af78 = vtable_MapIcon;
    u32 r0_3 = r0_1 - 0xf0u;  // (from the original)
    destroy_animation(r0_3);
    u32 r0_4 = r0_3 - 0x28u;  // (from the original)
    destroy_animation(r0_4);
    u32 r0_5 = r0_4 - 0x28u;  // (from the original)
    destroy_animation(r0_5);
    u32 r0_6 = r0_5 - 0x28u;  // (from the original)
    destroy_animation(r0_6);
    bs_menu_map_base->word_af78 = vtable_IconBase;
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
namespace d_002236c0 {

struct __attribute__((packed)) Object_002236c0_0 {
    u8 unknown_0[0x176c];  // (not used here)
    float float_176c;
    u8 unknown_1770[0x554];  // (not used here)
    float float_1cc4;
};
GUEST_OFFSET(Object_002236c0_0, float_176c, 0x176c);
GUEST_OFFSET(Object_002236c0_0, float_1cc4, 0x1cc4);

struct __attribute__((packed)) Local_002236c0_r3_1 {
    u8 unknown_0[0x1778];  // (not used here)
    float float_1778;
    u8 byte_177c;
};
GUEST_OFFSET(Local_002236c0_r3_1, float_1778, 0x1778);
GUEST_OFFSET(Local_002236c0_r3_1, byte_177c, 0x177c);


u32 f_002236c0(gptr<Object_002236c0_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 fpsr = guest::cpu()->fpscr;
    u32 r2 = r0;
    float S0 = arg0->float_176c;
    float S1 = arg0->float_1cc4;
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
GUEST_EXPORT_FRAMED(0x002236c0, d_002236c0::f_002236c0, 0x10);  // pushes {r4} first, as the original

// f_00223778: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00223778 {

struct __attribute__((packed)) Object_00223778_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00223778_0, word_4, 0x4);

inline constexpr u32 global_0094fcc4_address = 0x0094fcc4u;
inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> Layout__find_pane;
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> notify_list_objects;

u32 f_00223778(gptr<Object_00223778_0> arg0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 pane_2 = Layout__find_pane(arg0->word_4, gptr<u32>(global_0094fcc4_address)[r1], 1u, r3);
    u32 r0_3 = arg0->word_4;
    frame.release();
    return notify_list_objects(r0_3, (arg0.addr() + r1 * 0x28u) + 0xcu, pane_2, 0u);  // (from the original)
}

}  // namespace d_00223778
GUEST_EXPORT(0x00223778, d_00223778::f_00223778);

// f_0022384c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022384c {

inline constexpr guest::Function<0x006a8c1c, u32(u32, u32, u32, u32)> set_flagged_bits_b7;

u32 f_0022384c(u32 r0) {
    u32 r0_2 = 0;
    u32 r5 = r0;
    u32 r4 = 0u;
    do {
        r0_2 = set_flagged_bits_b7(r5 + r4 * 0x314u + 0x110u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 7);
    return r0_2;
}

}  // namespace d_0022384c
GUEST_EXPORT_FRAMED(0x0022384c, d_0022384c::f_0022384c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00223c68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
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

inline constexpr guest::Function<0x002f6b14, u32(u32, u32, u32, u32)> call_002f6b14;
inline constexpr guest::Function<0x002f6e14, u32(u32)> ButtonActionControl__virtual_3;

u32 f_00223c68(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2) {
    float S0_2 = 0;
    float S1_2 = 0;
    gptr<Local_00223c68_r0_4> r0_4 = gptr<Local_00223c68_r0_4>(0u);
    u32 r1_3 = 0;
    u32 r4 = r0;
    u32 r0_1 = r0 + 0x2220u;  // (from the original)
    call_002f6b14(r0_1, r1, r2, r3);
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
GUEST_EXPORT_FRAMED(0x00223c68, d_00223c68::f_00223c68, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00224204: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00224204 {

struct __attribute__((packed)) Object_00224204_0 {
    u8 unknown_0[0x2934];  // (not used here)
    u32 word_2934;
};
GUEST_OFFSET(Object_00224204_0, word_2934, 0x2934);


u32 f_00224204(gptr<Object_00224204_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r1_1 = arg0.addr() + 0x2934u;  // (from the original)
    u32 r12_1 = arg0->word_2934;
    u32 r4_1 = *gptr<u32>(guest::cpu()->r[13] + 4u);
    if (s32(r12_1) >= 0x1c) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return arg0.addr();
    }
    *gptr<u32>(arg0.addr() + (r12_1 << 3) + 0x1cd8u) = r2;  // (from the original)
    *gptr<u8>(arg0.addr() + (arg0->word_2934 << 3) + 0x1cdcu) = u8(r4_1);  // (from the original)
    *gptr<u8>(arg0.addr() + (arg0->word_2934 << 3) + 0x1cddu) = u8(r3);  // (from the original)
    u32 r0_1 = arg0->word_2934 + 1u;
    arg0->word_2934 = r0_1;
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_00224204
GUEST_EXPORT_FRAMED(0x00224204, d_00224204::f_00224204, 0x10);  // pushes {r4} first, as the original

// f_0022426c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022426c {

struct __attribute__((packed)) Object_0022426c_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_0022426c_0, word_4, 0x4);

inline constexpr guest::Function<0x001323bc, u32(u32, u32, u32, u32)> read_global_975c20;
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32)> call_00569e6c;
inline constexpr guest::Function<0x0060e47c, u32(u32, u32, u32)> MapIcon__virtual_4;
inline constexpr guest::Function<0x006a923c, u32(u32, u32, u32)> holder_flagged_has_flag_b7_bit_0;

u32 f_0022426c(gptr<Object_0022426c_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r0_3 = 0;
    u32 r6 = r0;
    u32 r0_1 = read_global_975c20(r0, r1, r2, guest::cpu()->r[3]);
    call_00569e6c(r0_1, arg0->word_4, 1u);
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
GUEST_EXPORT_FRAMED(0x0022426c, d_0022426c::f_0022426c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002248ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002248ec {

struct __attribute__((packed)) Object_002248ec_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_002248ec_0, word_4, 0x4);

inline constexpr guest::Function<0x001323b4, u32(u32, u32, u32, u32)> layout_at_10_virtual_8;
inline constexpr guest::Function<0x005e2e04, u32(u32)> call_005e2e04;

u32 f_002248ec(gptr<Object_002248ec_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_4 = 0;
    u32 r5 = r0;
    u32 r0_1 = arg0->word_4;
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
        r0_4 = call_005e2e04(r5 + ((r4 << 6) - r4 * 7u << 2) + 0x16a0u);  // (from the original)
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 7);
    return r0_4;
}

}  // namespace d_002248ec
GUEST_EXPORT_FRAMED(0x002248ec, d_002248ec::f_002248ec, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00224950: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00224950 {

struct __attribute__((packed)) Object_00224950_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u8 unknown_8[0x80];  // (not used here)
    float float_88;
};
GUEST_OFFSET(Object_00224950_0, word_4, 0x4);
GUEST_OFFSET(Object_00224950_0, float_88, 0x88);

struct __attribute__((packed)) Local_00224950_r0_2 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_00224950_r0_2, byte_b7, 0xb7);

inline constexpr guest::Function<0x00224a7c, u32(u32, u32, u32, u32)> call_00224a7c;
inline constexpr guest::Function<0x0056878c, u32(u32, u32)> LayoutObjectWithChild__forward_to_child;

void f_00224950(gptr<Object_00224950_0> arg0) {
    float S1_1 = 1.0f;
    float S0_1 = arg0->float_88 - S1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    call_00224a7c(arg0.addr(), 3u, guest::cpu()->r[2], guest::cpu()->r[3]);
    gptr<Local_00224950_r0_2> child_2 = gptr<Local_00224950_r0_2>(LayoutObjectWithChild__forward_to_child(arg0->word_4, 0x22498cu));  // (from the original)
    u32 r1_1 = u32(child_2->byte_b7) & 0xfeu;  // (from the original)
    child_2->byte_b7 = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_00224950
GUEST_EXPORT_FRAMED(0x00224950, d_00224950::f_00224950, 0x4010);  // pushes {r4, lr} first, as the original

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
    bs_menu_map_list->word_0 = vtable_BsMenuMapList;
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
namespace d_0022526c {

struct __attribute__((packed)) Object_0022526c_0 {
    u8 unknown_0[0x38];  // (not used here)
    u32 word_38;
};
GUEST_OFFSET(Object_0022526c_0, word_38, 0x38);


u32 f_0022526c(gptr<Object_0022526c_0> arg0, u32 r1) {
    u32 r0_1 = arg0->word_38;
    if (r0_1 != 0) {
        *gptr<u8>(r0_1 + 0xabcu) = u8(r1);  // (from the original)
    }
    return r0_1;
}

}  // namespace d_0022526c
GUEST_EXPORT(0x0022526c, d_0022526c::f_0022526c);

// f_00225948: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00225948 {

inline constexpr u32 global_00950694_address = 0x00950694u;
inline constexpr u32 global_00997c30_address = 0x00997c30u;
inline guest::global<u32, 0x00950694> global_00950694;
inline constexpr guest::Function<0x0014f8ec, u32(u32, u32, u32, u32)> call_0014f8ec;

u32 f_00225948(u32 r0) {
    u32 r1_1 = *global_00950694;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return r0;
    }
    u32 r0_1 = gptr<u32>(global_00997c30_address)[r0];
    if (r0_1 == 0) {
        guest::cpu()->r[1] = global_00997c30_address;
        return r0_1;
    }
    return call_0014f8ec(r0_1, 1u, 0u, guest::cpu()->r[3]);
}

}  // namespace d_00225948
GUEST_EXPORT(0x00225948, d_00225948::f_00225948);

// f_00225984: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00225984 {

struct __attribute__((packed)) Local_00225984_r1_1 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Local_00225984_r1_1, word_8, 0x8);

inline constexpr u32 global_00950694_address = 0x00950694u;
inline constexpr u32 global_00997c30_address = 0x00997c30u;
inline guest::global<u16, 0x00887312> global_00887312;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> read_global_byte_2;
inline constexpr guest::Function<0x002fb328, u32(u32, u32)> get_save_data;
inline constexpr guest::Function<0x002fcb84, u32(u32, u32, u32, u32)> Item__has_number;
inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> read_table_9b4a24;
inline constexpr guest::Function<0x00317148, u32(u32, u32, u32, u32)> CellGrid__cell_at;
inline constexpr guest::Function<0x0057b9dc, u32(u32, u32, u32, u32)> start_529c80_mode_2;
inline constexpr guest::Function<0x006a6e1c, u32(u32, u32, u32, u32)> tile_corner_with_height;
inline constexpr guest::Function<0x007482b8, u32(u32, u32)> call_007482b8;
inline constexpr guest::Function<0x0074830c, u32(u32)> call_0074830c;
inline constexpr guest::Function<0x0075281c, u32(u32, u32, u32, u32)> GridCellSmall__cell_at_0075281c;

struct __attribute__((packed)) Frame_00225984 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0xc];  // (not read or written by name)
    u32 word_1c;
    u8 unknown_20[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00225984, word_0, 0x0);
GUEST_OFFSET(Frame_00225984, word_4, 0x4);
GUEST_OFFSET(Frame_00225984, word_8, 0x8);
GUEST_OFFSET(Frame_00225984, word_c, 0xc);
GUEST_OFFSET(Frame_00225984, word_1c, 0x1c);
GUEST_SIZE(Frame_00225984, 0x24);

void f_00225984(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00225984> frame;  // the original's stack frame
    u32 r4 = 0;
    u32 r5 = 0;
    u32 r0_7 = 0;
    u32 r1_4 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r7_1 = 0;
    u32 r0_1 = read_global_byte_2(r0, r1, r2, r3);
    gptr<Local_00225984_r1_1> r1_1 = gptr<Local_00225984_r1_1>(guest::cpu()->r[1]);
    if (r0_1 != 0) {
        guest::cpu()->r[1] = r1_1.addr();
        return;
    }
    u32 save_data_2 = get_save_data(r0_1, r1_1.addr());
    u32 r8 = 0u;
    r2 = save_data_2 + 0x6fe78u;  // (from the original)
    r0 = r8;
    r3 = global_00997c30_address;
    r1 = r0;
    u32 r10 = r8;
    for (;;) {
        r1_1 = gptr<Local_00225984_r1_1>(u32(*gptr<u8>(r2 + r1 * 0xcu + 0xau)));  // (from the original)
        if ((r1_1.addr() & 1u) != 0) {
            r8 += 1u;
        } else {
            r1_1 = gptr<Local_00225984_r1_1>(r3 + (r0 << 2));
            if (r1_1->word_8 != 0) {
                r1_1->word_8 = r10;
            }
        }
        r0 += 1u;
        u32 res_1 = r0 - 4u;
        u32 nf = res_1 >> 0x1f;  // (from the original)
        u32 vf = ((r0 ^ 4u) & (r0 ^ res_1)) >> 0x1f;  // (from the original)
        if (nf == vf) {
            break;
        }
        r1 = r0;
        if (nf == vf) {
            r1 = 0u;
        }
        guest::preempt();
    }
    if (r8 == 0) {
        guest::cpu()->r[1] = r1_1.addr();
        return;
    }
    u32 r0_3 = read_table_9b4a24(1u, r1_1.addr(), r2, r3);
    r1_1 = gptr<Local_00225984_r1_1>(guest::cpu()->r[1]);
    frame->word_8 = r0_3;
    if (r0_3 == 0) {
        guest::cpu()->r[1] = r1_1.addr();
        return;
    }
    u32 r0_4 = call_007482b8(r0_3, r1_1.addr());
    u32 r0_6 = call_0074830c(frame->word_8);
    r3 = guest::cpu()->r[3];
    u32 r1_3 = r0_4 - 1u;
    u32 r6 = 0u;
    frame->word_c = r1_3;
    frame->word_4 = 1;
    if (r1_3 <= 1u) {
        guest::cpu()->r[1] = r1_3;
        return;
    }
    u32 r11 = global_00950694_address;
    r0 = r0_6 - 1u;
    frame->word_1c = r0;
L_225a50:;
    u32 r9 = 1u;
    if (r0 <= 1u) {
        goto L_225b60;
    }
L_225a5c:;
    r0_7 = frame->word_8;
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
        u32 r1_6 = *gptr<u32>(r11);
        u32 r0_15 = *global_00887312;
        start_529c80_mode_2(r0_15, r1_6, r7_1 + 2u, frame.at(0x10).addr());  // (from the original)
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
    if (r9 < frame->word_1c) {
        guest::preempt();
        goto L_225a5c;
    }
L_225b60:;
    r1_3 = frame->word_c;
    u32 r0_16 = frame->word_4 + 1u;
    frame->word_4 = r0_16;
    if (r0_16 < r1_3) {
        r0 = frame->word_1c;
        guest::preempt();
        goto L_225a50;
    }
    guest::cpu()->r[1] = r1_3;
}

}  // namespace d_00225984
GUEST_EXPORT_FRAMED(0x00225984, d_00225984::f_00225984, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_00226750: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00226750 {

struct __attribute__((packed)) Local_00226750_r1_1 {
    u8 unknown_0[0x2];  // (not used here)
    u8 byte_2;
};
GUEST_OFFSET(Local_00226750_r1_1, byte_2, 0x2);

inline constexpr u32 global_00997c30_address = 0x00997c30u;

u32 f_00226750() {
    gptr<Local_00226750_r1_1> r1_1 = gptr<Local_00226750_r1_1>(0u);
    u32 r2 = global_00997c30_address;
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
GUEST_EXPORT(0x00226750, d_00226750::f_00226750);

// f_002267e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002267e4 {

inline constexpr u32 global_00997c48_address = 0x00997c48u;

u32 f_002267e4() {
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
GUEST_EXPORT(0x002267e4, d_002267e4::f_002267e4);

// f_00226828: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00226828 {

struct __attribute__((packed)) Local_00226828_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00226828_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_00226828_ea_2, word_4, 0x4);

inline constexpr guest::Function<0x002fcb84, u32(u32, u32, u32, u32)> Item__has_number;
inline constexpr guest::Function<0x002fe7cc, u32(u32, u32, u32, u32)> read_table_9b4a24;
inline constexpr guest::Function<0x00317148, u32(u32, u32, u32, u32)> CellGrid__cell_at;
inline constexpr guest::Function<0x006a6e90, u32(u32, u32, u32, u32)> position_of_block;
inline constexpr guest::Function<0x006fb50c, u32(u32, u32, u32)> call_006fb50c;
inline constexpr guest::Function<0x007482b8, u32(u32, u32)> call_007482b8;
inline constexpr guest::Function<0x0074830c, u32(u32)> call_0074830c;
inline constexpr guest::Function<0x0075281c, u32(u32, u32, u32, u32)> GridCellSmall__cell_at_0075281c;

struct __attribute__((packed)) Frame_00226828 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not read or written by name)
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u8 unknown_1c[0x4];  // (not read or written by name)
    u32 word_20;
    u8 unknown_24[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00226828, word_0, 0x0);
GUEST_OFFSET(Frame_00226828, word_4, 0x4);
GUEST_OFFSET(Frame_00226828, word_8, 0x8);
GUEST_OFFSET(Frame_00226828, word_10, 0x10);
GUEST_OFFSET(Frame_00226828, word_14, 0x14);
GUEST_OFFSET(Frame_00226828, word_18, 0x18);
GUEST_OFFSET(Frame_00226828, word_20, 0x20);
GUEST_SIZE(Frame_00226828, 0x2c);

u32 f_00226828(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00226828> frame;  // the original's stack frame
    u32 r0_1 = read_table_9b4a24(1u, r1, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    frame->word_10 = r0_1;
    if (r0_1 != 0) {
        u32 r0_2 = call_007482b8(r0_1, r1_1);
        r0_1 = call_0074830c(frame->word_10);
        r3 = guest::cpu()->r[3];
        r1_1 = r0_2 - 1u;
        frame->word_20 = r1_1;
        frame->word_8 = 1;
        if (r1_1 > 1u) {
            u32 r9 = 0x7ff8u;  // (from the original)
            u32 r8 = ~0u;
            u32 r7 = r0_1 - 1u;
            u32 r10 = r9 | 1u;
            u32 r11 = r10 + 1u;
            do {
                u32 r6 = 1u;
                if (r7 > 1u) {
                    do {
                        u32 r0_5 = CellGrid__cell_at(frame->word_10, frame->word_8, r6, r3);
                        u32 r0_6 = GridCellSmall__cell_at_0075281c(r0_5, 0u, 0u, 0u);
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
                                u32 r2_6 = frame->word_8;
                                frame->word_18 = r8;
                                position_of_block(frame.at(0x14).addr(), frame.at(0x18).addr(), r2_6, r6);  // (from the original)
                                u32 r2_7 = frame->word_10;
                                gptr<Local_00226828_ea_2> ea_2 = gptr<Local_00226828_ea_2>(frame.at(0x14).addr());  // (from the original)
                                call_006fb50c(ea_2->word_0, ea_2->word_4, r2_7);
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
                r0_1 = frame->word_8 + 1u;
                frame->word_8 = r0_1;
                guest::preempt();
            } while (r0_1 < r1_1);
        }
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_00226828
GUEST_EXPORT_FRAMED(0x00226828, d_00226828::f_00226828, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_00226ee8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
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

u32 f_00226ee8(u32 r0) {
    u32 r5 = r0;
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
GUEST_EXPORT_FRAMED(0x00226ee8, d_00226ee8::f_00226ee8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

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
    bs_strc_catalog->word_0 = vtable_BsStrcCatalog;
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
namespace d_00228f74 {

inline constexpr u32 weather_heap_address = 0x00952c48u;
inline constexpr u32 global_009984bc_address = 0x009984bcu;
inline guest::global<u32, 0x00952c48> weather_heap;
inline constexpr guest::Function<0x00125b38, u32(u32, u32, u32, u32)> call_00125b38;

u32 f_00228f74() {
    return call_00125b38(global_009984bc_address, 0x228f90u, *weather_heap, 0x80u);  // (from the original)
}

}  // namespace d_00228f74
GUEST_EXPORT(0x00228f74, d_00228f74::f_00228f74);

// f_00229c50: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
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

u32 f_00229c50() {
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
GUEST_EXPORT_FRAMED(0x00229c50, d_00229c50::f_00229c50, 0x4010);  // pushes {r4, lr} first, as the original

// f_0022a250: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022a250 {

inline constexpr u32 weather_heap_address = 0x00952c48u;
inline constexpr u32 global_009984dc_address = 0x009984dcu;
inline guest::global<u32, 0x00952c48> weather_heap;
inline constexpr guest::Function<0x00125b38, u32(u32, u32, u32, u32)> call_00125b38;

u32 f_0022a250() {
    return call_00125b38(global_009984dc_address, 0x22a26cu, *weather_heap, 0x80u);  // (from the original)
}

}  // namespace d_0022a250
GUEST_EXPORT(0x0022a250, d_0022a250::f_0022a250);

// f_0022ba54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022ba54 {

inline constexpr u32 vtable_CameraCatalog = 0x008ee1e4u;
inline constexpr guest::Function<0x001a113c, u32(u32, u32)> call_001a113c;

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
    camera_catalog->word_0 = vtable_CameraCatalog;
    guest::cpu()->s[0] = S0_2;
    call_001a113c(camera_catalog.addr(), 0x8572a8u);  // (from the original)
    return camera_catalog.addr();
}

}  // namespace d_0022ba54
GUEST_EXPORT_FRAMED(0x0022ba54, d_0022ba54::CameraCatalog__CameraCatalog, 0x4010);  // pushes {r4, lr} first, as the original

// f_0022bac4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022bac4 {

inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> Layout__find_pane;
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> notify_list_objects;

void f_0022bac4(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 pane_2 = Layout__find_pane(r0 + 0x24u, 0x22baf4u, 1u, r3);  // (from the original)
    frame.release();
    notify_list_objects(pane_2, r0 + 0x3b8u, pane_2, 0u);
    return;  // (from the original)
}

}  // namespace d_0022bac4
GUEST_EXPORT(0x0022bac4, d_0022bac4::f_0022bac4);

// f_0022bb00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022bb00 {

inline constexpr guest::Function<0x001323bc, u32(u32)> read_global_975c20;
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32)> call_00569e6c;

void f_0022bb00(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = read_global_975c20(r0);
    frame.release();
    call_00569e6c(r0_1, r0 + 0x24u, 0u);
    return;  // (from the original)
}

}  // namespace d_0022bb00
GUEST_EXPORT(0x0022bb00, d_0022bb00::f_0022bb00);

// f_0022bb1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022bb1c {

struct __attribute__((packed)) Object_0022bb1c_0 {
    u8 unknown_0[0x30];  // (not used here)
    u8 byte_30;
    u8 unknown_31[0xdf];  // (not used here)
    u32 word_110;
};
GUEST_OFFSET(Object_0022bb1c_0, byte_30, 0x30);
GUEST_OFFSET(Object_0022bb1c_0, word_110, 0x110);

inline guest::global<u32, 0x00952cc0> global_00952cc0;
inline constexpr guest::Function<0x00567d60, u32(u32, u32, u32, u32)> call_00567d60;
inline constexpr guest::Function<0x00569184, u32(u32, u32, u32, u32)> Layout__virtual_4;
inline constexpr guest::Function<0x005695e4, u32(u32, u32, u32, u32)> construct_dummy_layout;

void f_0022bb1c(gptr<Object_0022bb1c_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    call_00567d60(arg0.addr() + 0x170u, *global_00952cc0 + 0x27cu, r2, r3);  // (from the original)
    arg0->word_110 = arg0.addr() + 0x170u;  // (from the original)
    Layout__virtual_4(arg0.addr() + 0x24u, 0x22bb74u, 0u, 0x500u);  // (from the original)
    arg0->byte_30 = 0x8c;  // (from the original)
    frame.release();
    construct_dummy_layout(arg0.addr() + 0x3b8u, 0x22bb88u, arg0.addr() + 0x170u, guest::cpu()->r[3]);
    return;  // (from the original)
}

}  // namespace d_0022bb1c
GUEST_EXPORT(0x0022bb1c, d_0022bb1c::f_0022bb1c);

// f_0022bba4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022bba4 {

inline constexpr guest::Function<0x001323b4, u32(u32, u32, u32, u32)> layout_at_10_virtual_8;

void f_0022bba4(u32 r0) {
    layout_at_10_virtual_8(r0 + 0x24u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0022bba4
GUEST_EXPORT(0x0022bba4, d_0022bba4::f_0022bba4);

// f_0022bbac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022bbac {

struct __attribute__((packed)) Object_0022bbac_0 {
    u8 unknown_0[0x3d4];  // (not used here)
    u8 byte_3d4;
};
GUEST_OFFSET(Object_0022bbac_0, byte_3d4, 0x3d4);

inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> Layout__find_pane;
inline constexpr guest::Function<0x00568630, u32(u32, u32, u32, u32)> notify_objects_of_list;
inline constexpr guest::Function<0x005697e0, u32(u32, u32)> Animation__set_value;

void f_0022bbac(gptr<Object_0022bbac_0> arg0, u32 r1, u32 r2_unused, u32 r3, float S0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    if (arg0->byte_3d4 != 0) {
        return;
    }
    u32 pane_2 = Layout__find_pane(arg0.addr() + 0x24u, 0x22bbf8u, 1u, r3);  // (from the original)
    notify_objects_of_list(pane_2, arg0.addr() + 0x3b8u, pane_2, 0u);  // (from the original)
    float S0_2 = 0.0f;
    guest::cpu()->s[0] = S0_2;
    frame.release();
    Animation__set_value(arg0.addr() + 0x3b8u, guest::cpu()->r[1]);
    return;  // (from the original)
}

}  // namespace d_0022bbac
GUEST_EXPORT(0x0022bbac, d_0022bbac::f_0022bbac);

// f_0022bc08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022bc08 {

inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> Layout__virtual_3;
inline constexpr guest::Function<0x00569544, u32(u32, u32, u32, u32)> FrameControl__advance;

void f_0022bc08(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    FrameControl__advance(r0 + 0x3b8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    frame.release();
    Layout__virtual_3(r0 + 0x24u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return;  // (from the original)
}

}  // namespace d_0022bc08
GUEST_EXPORT(0x0022bc08, d_0022bc08::f_0022bc08);

// f_0022bc80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022bc80 {

struct __attribute__((packed)) Object_0022bc80_0 {
    u8 unknown_0[0x10];  // (not used here)
    u8 byte_10;
    u8 unknown_11[0xdf];  // (not used here)
    u32 word_f0;
    u8 unknown_f4[0x2b0];  // (not used here)
    u32 word_3a4;
};
GUEST_OFFSET(Object_0022bc80_0, byte_10, 0x10);
GUEST_OFFSET(Object_0022bc80_0, word_f0, 0xf0);
GUEST_OFFSET(Object_0022bc80_0, word_3a4, 0x3a4);

inline constexpr u32 global_00951658_address = 0x00951658u;
inline constexpr guest::Function<0x002ccfd4, u32(u32)> call_002ccfd4;
inline constexpr guest::Function<0x002e0374, u32(u32, u32)> call_002e0374;
inline constexpr guest::Function<0x0056878c, u32(u32, u32)> LayoutObjectWithChild__forward_to_child;
inline constexpr guest::Function<0x00569184, u32(u32, u32, u32, u32)> Layout__virtual_4;

u32 f_0022bc80(gptr<Object_0022bc80_0> arg0, u32 r1) {
    arg0->word_f0 = arg0.addr() + 0x150u;  // (from the original)
    Layout__virtual_4(arg0.addr() + 4u, 0x857a40u, 0u, 0x2500u);  // (from the original)
    arg0->byte_10 = 0x9b;  // (from the original)
    call_002ccfd4(arg0.addr() + 0x398u);  // (from the original)
    arg0->word_3a4 = arg0.addr() + 4u;
    u32 child_2 = LayoutObjectWithChild__forward_to_child(arg0.addr() + 4u, gptr<u32>(global_00951658_address)[r1]);
    call_002e0374(arg0.addr() + 0x398u, child_2);  // (from the original)
    return 1u;
}

}  // namespace d_0022bc80
GUEST_EXPORT_FRAMED(0x0022bc80, d_0022bc80::f_0022bc80, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0022bcec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022bcec {

inline constexpr guest::Function<0x00132364, u32(u32)> release_layout_parts;
inline constexpr guest::Function<0x002cd0e0, u32(u32, u32, u32, u32)> call_002cd0e0;

u32 f_0022bcec(u32 r0) {
    call_002cd0e0(r0 + 0x398u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    release_layout_parts(r0 + 0x150u);  // (from the original)
    return 1u;
}

}  // namespace d_0022bcec
GUEST_EXPORT_FRAMED(0x0022bcec, d_0022bcec::f_0022bcec, 0x4010);  // pushes {r4, lr} first, as the original

// f_0022bdf0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022bdf0 {

inline constexpr guest::Function<0x00268928, u32(u32, u32, u32)> call_00268928;
inline constexpr guest::Function<0x002cd3d0, u32(u32, u32)> call_002cd3d0;
inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> LayoutObjectWithChild__forward_to_child;
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> Layout__virtual_3;

u32 f_0022bdf0(u32 r0, u32 r1_unused, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 child_3 = LayoutObjectWithChild__forward_to_child(r0 + 4u, 0x22be3cu, r2, guest::cpu()->r[3]);  // (from the original)
    u32 child_4 = LayoutObjectWithChild__forward_to_child(r0 + 4u, 0x22be4cu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_00268928(r0 + 0x398u, child_4, child_3);  // (from the original)
    call_002cd3d0(r0 + 0x398u, 2u);  // (from the original)
    frame.release();
    return Layout__virtual_3(r0 + 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0022bdf0
GUEST_EXPORT(0x0022bdf0, d_0022bdf0::f_0022bdf0);

// f_0022be5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022be5c {

inline constexpr u32 global_00951658_address = 0x00951658u;
inline constexpr guest::Function<0x00268928, u32(u32, u32, u32)> call_00268928;
inline constexpr guest::Function<0x002cd3d0, u32(u32, u32)> call_002cd3d0;
inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> LayoutObjectWithChild__forward_to_child;
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> Layout__virtual_3;

u32 f_0022be5c(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 child_2 = LayoutObjectWithChild__forward_to_child(r0 + 4u, gptr<u32>(global_00951658_address)[r1], r2, guest::cpu()->r[3]);
    call_00268928(r0 + 0x398u, 0u, child_2);  // (from the original)
    call_002cd3d0(r0 + 0x398u, 1u);  // (from the original)
    frame.release();
    return Layout__virtual_3(r0 + 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0022be5c
GUEST_EXPORT(0x0022be5c, d_0022be5c::f_0022be5c);

// f_0022bea0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022bea0 {

struct __attribute__((packed)) Object_0022bea0_0 {
    u8 unknown_0[0x10];  // (not used here)
    u8 byte_10;
    u8 unknown_11[0xdf];  // (not used here)
    u32 word_f0;
    u8 unknown_f4[0x2b0];  // (not used here)
    u32 word_3a4;
};
GUEST_OFFSET(Object_0022bea0_0, byte_10, 0x10);
GUEST_OFFSET(Object_0022bea0_0, word_f0, 0xf0);
GUEST_OFFSET(Object_0022bea0_0, word_3a4, 0x3a4);

inline constexpr guest::Function<0x00268928, u32(u32, u32, u32)> call_00268928;
inline constexpr guest::Function<0x002ccfd4, u32(u32)> call_002ccfd4;
inline constexpr guest::Function<0x0056878c, u32(u32, u32)> LayoutObjectWithChild__forward_to_child;
inline constexpr guest::Function<0x00569184, u32(u32, u32, u32, u32)> Layout__virtual_4;

u32 f_0022bea0(gptr<Object_0022bea0_0> arg0) {
    arg0->word_f0 = arg0.addr() + 0x150u;  // (from the original)
    Layout__virtual_4(arg0.addr() + 4u, 0x857a40u, 0u, 0x2500u);  // (from the original)
    arg0->byte_10 = 0x9b;  // (from the original)
    call_002ccfd4(arg0.addr() + 0x398u);  // (from the original)
    arg0->word_3a4 = arg0.addr() + 4u;
    u32 child_3 = LayoutObjectWithChild__forward_to_child(arg0.addr() + 4u, 0x22bf14u);  // (from the original)
    u32 child_4 = LayoutObjectWithChild__forward_to_child(arg0.addr() + 4u, 0x22bf24u);  // (from the original)
    call_00268928(arg0.addr() + 0x398u, child_4, child_3);  // (from the original)
    return 1u;
}

}  // namespace d_0022bea0
GUEST_EXPORT_FRAMED(0x0022bea0, d_0022bea0::f_0022bea0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0022bf34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022bf34 {

inline constexpr guest::Function<0x00132364, u32(u32)> release_layout_parts;
inline constexpr guest::Function<0x002cd0e0, u32(u32, u32, u32, u32)> call_002cd0e0;

u32 f_0022bf34(u32 r0) {
    call_002cd0e0(r0 + 0x398u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    release_layout_parts(r0 + 0x150u);  // (from the original)
    return 1u;
}

}  // namespace d_0022bf34
GUEST_EXPORT_FRAMED(0x0022bf34, d_0022bf34::f_0022bf34, 0x4010);  // pushes {r4, lr} first, as the original

// f_0022bf54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022bf54 {

inline constexpr guest::Function<0x002cd17c, u32(u32, u32, u32, u32)> Control1Button__virtual_2_002cd17c;

u32 f_0022bf54(u32 r0) {
    return Control1Button__virtual_2_002cd17c(r0 + 0x398u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0022bf54
GUEST_EXPORT(0x0022bf54, d_0022bf54::f_0022bf54);

// f_0022c040: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022c040 {

struct __attribute__((packed)) Object_0022c040_0 {
    u8 unknown_0[0x10];  // (not used here)
    u8 byte_10;
    u8 unknown_11[0xdf];  // (not used here)
    u32 word_f0;
    u8 unknown_f4[0x2b0];  // (not used here)
    u32 word_3a4;
};
GUEST_OFFSET(Object_0022c040_0, byte_10, 0x10);
GUEST_OFFSET(Object_0022c040_0, word_f0, 0xf0);
GUEST_OFFSET(Object_0022c040_0, word_3a4, 0x3a4);

inline constexpr guest::Function<0x00268b68, u32(u32, u32, u32, u32)> call_00268b68;
inline constexpr guest::Function<0x002ccfd4, u32(u32)> call_002ccfd4;
inline constexpr guest::Function<0x0056878c, u32(u32, u32)> LayoutObjectWithChild__forward_to_child;
inline constexpr guest::Function<0x00569184, u32(u32, u32, u32, u32)> Layout__virtual_4;

void f_0022c040(gptr<Object_0022c040_0> arg0) {
    arg0->word_f0 = arg0.addr() + 0x150u;  // (from the original)
    Layout__virtual_4(arg0.addr() + 4u, 0x857a40u, 0u, 0x2500u);  // (from the original)
    arg0->byte_10 = 0x9b;  // (from the original)
    call_002ccfd4(arg0.addr() + 0x398u);  // (from the original)
    arg0->word_3a4 = arg0.addr() + 4u;
    u32 child_4 = LayoutObjectWithChild__forward_to_child(arg0.addr() + 4u, 0x22c0c8u);  // (from the original)
    u32 child_5 = LayoutObjectWithChild__forward_to_child(arg0.addr() + 4u, 0x22c0d8u);  // (from the original)
    u32 child_6 = LayoutObjectWithChild__forward_to_child(arg0.addr() + 4u, 0x22c0e8u);  // (from the original)
    call_00268b68(arg0.addr() + 0x398u, child_6, child_5, child_4);  // (from the original)
}

}  // namespace d_0022c040
GUEST_EXPORT_FRAMED(0x0022c040, d_0022c040::f_0022c040, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0022c0f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022c0f8 {

inline constexpr guest::Function<0x00132364, u32(u32)> release_layout_parts;
inline constexpr guest::Function<0x002cd0e0, u32(u32, u32, u32, u32)> call_002cd0e0;

void f_0022c0f8(u32 r0) {
    call_002cd0e0(r0 + 0x398u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    release_layout_parts(r0 + 0x150u);  // (from the original)
}

}  // namespace d_0022c0f8
GUEST_EXPORT_FRAMED(0x0022c0f8, d_0022c0f8::f_0022c0f8, 0x4010);  // pushes {r4, lr} first, as the original

// f_0022c118: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022c118 {

inline constexpr guest::Function<0x002cd17c, u32(u32, u32, u32, u32)> Control1Button__virtual_2_002cd17c;

void f_0022c118(u32 r0) {
    Control1Button__virtual_2_002cd17c(r0 + 0x398u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0022c118
GUEST_EXPORT(0x0022c118, d_0022c118::f_0022c118);

// f_0022c368: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
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


u32 f_0022c368(gptr<Object_0022c368_0> arg0) {
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
GUEST_EXPORT(0x0022c368, d_0022c368::f_0022c368);

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
    drag_icon_group->word_c = vtable_DragIconGroup_at_c;
    drag_icon_group->word_0 = vtable_DragIconGroup;
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
    drag_icon_group->word_0 = vtable_DragIconGroup;
    drag_icon_group->word_c = vtable_DragIconGroup_at_c;
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
namespace d_0022c720 {

inline constexpr guest::Function<0x00568630, u32(u32, u32, u32, u32)> notify_objects_of_list;

u32 f_0022c720(u32 r0, u32 r1, float S0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    if (r1 != 0) {
        if (r1 == 1u) {
            *gptr<u32>(r0 + 0x1a8u) = *gptr<u32>(r0 + 0x1a4u);  // (from the original)
            *gptr<u32>(r0 + 0x1a0u) = r0 + 0x178u;  // (from the original)
        } else if (r1 == 2u) {
            *gptr<u32>(r0 + 0x1a8u) = *gptr<u32>(r0 + 0x200u);  // (from the original)
            *gptr<u32>(r0 + 0x1a0u) = r0 + 0x1b0u;  // (from the original)
        } else if (r1 == 3u) {
            *gptr<u32>(r0 + 0x1a8u) = *gptr<u32>(r0 + 0x200u);  // (from the original)
            *gptr<u32>(r0 + 0x1a0u) = r0 + 0x1d8u;  // (from the original)
        }
    } else {
        *gptr<u32>(r0 + 0x1a8u) = *gptr<u32>(r0 + 0x1a4u);  // (from the original)
        *gptr<u32>(r0 + 0x1a0u) = r0 + 0x150u;  // (from the original)
    }
    u32 r1_1 = *gptr<u32>(r0 + 0x1a0u);  // (from the original)
    u32 r2_1 = *gptr<u32>(r0 + 0x1a8u);  // (from the original)
    notify_objects_of_list(r0 + 4u, r1_1, r2_1, 0u);
    u32 r0_2 = *gptr<u32>(r0 + 0x1a0u);  // (from the original)
    float S0_1 = 0.0f;
    u32 r1_2 = *gptr<u32>(*gptr<u32>(r0_2) + 8u);
    // virtual function 2 of r0_2
    guest::cpu()->s[0] = S0_1;
    frame.release();
    return guest::call_address<u32>(r1_2, r0_2, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0022c720
GUEST_EXPORT(0x0022c720, d_0022c720::f_0022c720);

// f_0022c7c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022c7c8 {

struct __attribute__((packed)) Local_0022c7c8_r0_5 {
    u32 word_0;
    u8 unknown_4[0x19c];  // (not used here)
    u32 word_1a0;
    u32 word_1a4;
    u32 word_1a8;
    u8 byte_1ac;
    u8 byte_1ad;
};
GUEST_OFFSET(Local_0022c7c8_r0_5, word_0, 0x0);
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
    in_out_window->word_0 = vtable_InOutWindow;
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
    r0_5->word_0 = vtable_ExplainWindow;
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
    in_out_window->word_0 = vtable_ExplainWindow;
    u32 r0_1 = in_out_window.addr() + 0x1d8u;  // (from the original)
    destroy_animation(r0_1, vtable_ExplainWindow, guest::cpu()->r[2], guest::cpu()->r[3]);
    destroy_animation(r0_1 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    in_out_window->word_0 = vtable_InOutWindow;
    destroy_animation(r0_1 - 0x60u, vtable_InOutWindow, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    destroy_animation(r0_1 - 0x88u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_6 = Layout__destructor(r0_1 - 0x1d4u);  // (from the original)
    return r0_6 - 4u;
}

}  // namespace d_0022c87c
GUEST_EXPORT_FRAMED(0x0022c87c, d_0022c87c::ExplainWindow__destructor, 0x4010);  // pushes {r4, lr} first, as the original

// f_0022d734: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022d734 {

inline constexpr u32 global_00a182fc_address = 0x00a182fcu;
inline guest::global<u8, 0x00a182f8> global_00a182f8;
inline constexpr guest::Function<0x0055cabc, u32(u32, u32)> Random__seed;

u32 f_0022d734() {
    *global_00a182f8 = 0;
    return Random__seed(global_00a182fc_address, 0u);
}

}  // namespace d_0022d734
GUEST_EXPORT(0x0022d734, d_0022d734::f_0022d734);

// f_0022d74c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
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

inline constexpr u32 global_0095dec4_address = 0x0095dec4u;
inline guest::global<u32, 0x0095dec4> global_0095dec4;
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

void f_0022d74c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0022d74c> frame;  // the original's stack frame
    u32 r7_1 = *frame.at<u32>(0x4c);  // (from the original)
    u32 r8_1 = *frame.at<u32>(0x48);  // (from the original)
    construct_word_ptr_sv_68(frame.at(0x1c).addr(), r1, r2, r3);  // (from the original)
    copy_word_buffer(r0 + 0xb0u, frame.at(0x1c).addr());  // (from the original)
    construct_word_ptr_sv_aa(frame.at(0x1c).addr(), r1);  // (from the original)
    copy_word_buffer(r0 + 0xbcu, frame.at(0x1c).addr());  // (from the original)
    construct_word_ptr_sv_22c(frame.at(0x1c).addr(), r1);  // (from the original)
    copy_word_buffer(r0 + 0xc8u, frame.at(0x1c).addr());  // (from the original)
    clear_identity_with_value(r0 + 0xd8u);  // (from the original)
    if (r7_1 != 0) {
        copy_46_bytes(r0 + 0x108u, r7_1);  // (from the original)
    } else {
        clear_identity_with_flags(r0 + 0x108u);  // (from the original)
    }
    Letter__clear(r1);
    gptr<Local_0022d74c_ea_1> ea_1 = gptr<Local_0022d74c_ea_1>(frame.at(0xc).addr());  // (from the original)
    ea_1->word_0 = r2;
    ea_1->word_4 = r3;
    gptr<Local_0022d74c_ea_2> ea_2 = gptr<Local_0022d74c_ea_2>(frame.at(0x14).addr());  // (from the original)
    ea_2->word_0 = r2;
    ea_2->word_4 = r3;
    frame->word_0 = r0 + 0xd4u;  // (from the original)
    frame->word_4 = r2;
    frame->word_8 = r3;
    sead__SafeStringBase_char___SafeStringBase_005dd348(r0, r0 + 0xb0u, r0 + 0xbcu, r0 + 0xc8u);  // (from the original)
    StateTask__run(*global_0095dec4);
    u32 r0_11 = byte_ad_is_2(r0);
    if (r0_11 != 0) {
        if (r8_1 != 0) {
            store_byte_constant_pack_0x30_005cc070(r1);
        }
        u32 r0_12 = *gptr<u32>(r0 + 0xd4u);  // (from the original)
        if (s32(r0_12) >= 0) {
            *gptr<u8>(r1 + 0x26eu) = u8(r0_12 & 0xffu);  // (from the original)
            return;
        }
        *gptr<u8>(r1 + 0x26eu) = 0;  // (from the original)
        return;
    }
    Letter__clear(r1);
}

}  // namespace d_0022d74c
GUEST_EXPORT_FRAMED(0x0022d74c, d_0022d74c::f_0022d74c, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_0022d958: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022d958 {

struct __attribute__((packed)) Object_0022d958_0 {
    u8 unknown_0[0xd4];  // (not used here)
    u32 word_d4;
};
GUEST_OFFSET(Object_0022d958_0, word_d4, 0xd4);

struct __attribute__((packed)) Object_0022d958_1 {
    u8 unknown_0[0x26e];  // (not used here)
    u8 byte_26e;
    u8 unknown_26f[0x2];  // (not used here)
    u8 byte_271;
};
GUEST_OFFSET(Object_0022d958_1, byte_26e, 0x26e);
GUEST_OFFSET(Object_0022d958_1, byte_271, 0x271);

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

inline constexpr u32 global_0095dec4_address = 0x0095dec4u;
inline guest::global<u32, 0x0095dec4> global_0095dec4;
inline constexpr guest::Function<0x001b4a80, u32(u32, u32)> call_001b4a80;
inline constexpr guest::Function<0x001b4a8c, u32(u32, u32)> copy_46_bytes;
inline constexpr guest::Function<0x002ff408, u32(u32)> Letter__clear;
inline constexpr guest::Function<0x00303c84, u32(u32)> byte_ad_is_2;
inline constexpr guest::Function<0x005cbc3c, u32(u32, u32)> call_005cbc3c;
inline constexpr guest::Function<0x005cbe34, u32(u32, u32)> call_005cbe34;
inline constexpr guest::Function<0x005cbea4, u32(u32, u32)> note_item_offset;
inline constexpr guest::Function<0x005cc454, u32(u32, u32)> call_005cc454;
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

void f_0022d958(gptr<Object_0022d958_0> arg0, gptr<Object_0022d958_1> arg1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0022d958> frame;  // the original's stack frame
    gptr<Local_0022d958_ea_1> ea_1 = gptr<Local_0022d958_ea_1>(frame.at(0x48).addr());  // (from the original)
    u32 r7_1 = ea_1->word_0;
    u32 r8_1 = ea_1->word_4;
    u32 r9_1 = ea_1->word_8;
    construct_word_ptr_sv_68(frame.at(0x1c).addr(), arg1.addr(), r2, r3);  // (from the original)
    copy_word_buffer(arg0.addr() + 0xb0u, frame.at(0x1c).addr());  // (from the original)
    construct_word_ptr_sv_aa(frame.at(0x1c).addr(), arg1.addr());  // (from the original)
    copy_word_buffer(arg0.addr() + 0xbcu, frame.at(0x1c).addr());  // (from the original)
    construct_word_ptr_sv_22c(frame.at(0x1c).addr(), arg1.addr());  // (from the original)
    copy_word_buffer(arg0.addr() + 0xc8u, frame.at(0x1c).addr());  // (from the original)
    copy_48_bytes(arg0.addr() + 0xd8u, r7_1);  // (from the original)
    copy_46_bytes(arg0.addr() + 0x108u, r8_1);  // (from the original)
    Letter__clear(arg1.addr());
    gptr<Local_0022d958_ea_2> ea_2 = gptr<Local_0022d958_ea_2>(frame.at(0xc).addr());  // (from the original)
    ea_2->word_0 = r2;
    ea_2->word_4 = r3;
    gptr<Local_0022d958_ea_3> ea_3 = gptr<Local_0022d958_ea_3>(frame.at(0x14).addr());  // (from the original)
    ea_3->word_0 = r2;
    ea_3->word_4 = r3;
    frame->word_0 = arg0.addr() + 0xd4u;  // (from the original)
    frame->word_4 = r2;
    frame->word_8 = r3;
    sead__SafeStringBase_char___SafeStringBase_005dd348(arg0.addr(), arg0.addr() + 0xb0u, arg0.addr() + 0xbcu, arg0.addr() + 0xc8u);  // (from the original)
    StateTask__run(*global_0095dec4);
    u32 r0_10 = byte_ad_is_2(arg0.addr());
    if (r0_10 != 0) {
        note_item_offset(arg1.addr(), r9_1);
        arg1->byte_271 = 0;
        call_001b4a80(arg1.addr(), r8_1);
        call_005cbe34(arg1.addr(), r7_1);
        call_005cbc3c(arg1.addr(), 1u);
        u32 r0_11 = arg0->word_d4;
        if (s32(r0_11) >= 0) {
            u32 r1_9 = r0_11 & 0xffu;  // (from the original)
            arg1->byte_26e = u8(r1_9);
            guest::cpu()->r[1] = r1_9;
            return;
        }
        arg1->byte_26e = 0;
        call_005cc454(arg1.addr(), 0u);
        return;
    }
    Letter__clear(arg1.addr());
}

}  // namespace d_0022d958
GUEST_EXPORT_FRAMED(0x0022d958, d_0022d958::f_0022d958, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0022dacc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
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

inline constexpr guest::Function<0x0022dd30, u32(u32, u32, u32, u32)> call_0022dd30;

struct __attribute__((packed)) Frame_0022dacc {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0xc];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0022dacc, word_0, 0x0);
GUEST_OFFSET(Frame_0022dacc, word_4, 0x4);
GUEST_SIZE(Frame_0022dacc, 0x14);

void f_0022dacc(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
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
    call_0022dd30(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], r3);
}

}  // namespace d_0022dacc
GUEST_EXPORT_FRAMED(0x0022dacc, d_0022dacc::f_0022dacc, 0x4000);  // pushes {lr} first, as the original

// f_0022e08c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022e08c {

inline constexpr u32 vtable_MailLoadAdapt = 0x008ee2a4u;
inline constexpr guest::Function<0x005dd490, u32(u32)> construct_mail_recept;
inline constexpr guest::Function<0x005fcf9c, u32(u32)> construct_empty_word_ptr;

void MailLoadAdapt__MailLoadAdapt(gptr<MailLoadAdapt> mail_load_adapt) {
    construct_mail_recept(mail_load_adapt.addr());
    mail_load_adapt->word_0 = vtable_MailLoadAdapt;
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
    mail_load_adapt->word_0 = vtable_MailLoadAdapt;
    return store_word_0x00908d30_(mail_load_adapt.addr(), vtable_MailLoadAdapt);
}

}  // namespace d_0022e138
GUEST_EXPORT(0x0022e138, d_0022e138::MailLoadAdapt__destructor);

// f_0022e168: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022e168 {

inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> copy_aligned_bytes;

void f_0022e168(u32 r0, u32 r1) {
    copy_aligned_bytes(r0, r1, 0x26cu, guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0022e168
GUEST_EXPORT_FRAMED(0x0022e168, d_0022e168::f_0022e168, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0022e194: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022e194 {

struct __attribute__((packed)) Object_0022e194_0 {
    u8 unknown_0[0x67];  // (not used here)
    u8 byte_67;
    u8 byte_68;
    u8 byte_69;
};
GUEST_OFFSET(Object_0022e194_0, byte_67, 0x67);
GUEST_OFFSET(Object_0022e194_0, byte_68, 0x68);
GUEST_OFFSET(Object_0022e194_0, byte_69, 0x69);


void f_0022e194(gptr<Object_0022e194_0> arg0) {
    arg0->byte_67 = 1;
    arg0->byte_68 = 0;
    arg0->byte_69 = 4;
}

}  // namespace d_0022e194
GUEST_EXPORT_FRAMED(0x0022e194, d_0022e194::f_0022e194, 0x4010);  // pushes {r4, lr} first, as the original

// f_0022e1c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022e1c0 {

struct __attribute__((packed)) Object_0022e1c0_0 {
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
GUEST_OFFSET(Object_0022e1c0_0, byte_3c, 0x3c);
GUEST_OFFSET(Object_0022e1c0_0, byte_3d, 0x3d);
GUEST_OFFSET(Object_0022e1c0_0, word_40, 0x40);
GUEST_OFFSET(Object_0022e1c0_0, word_44, 0x44);
GUEST_OFFSET(Object_0022e1c0_0, word_48, 0x48);
GUEST_OFFSET(Object_0022e1c0_0, byte_5d, 0x5d);

inline constexpr u32 global_00a22020_address = 0x00a22020u;
inline constexpr guest::Function<0x00746ed0, u32(u32)> call_00746ed0;
inline constexpr guest::Function<0x00746ee4, u32(u32, u32, u32)> call_00746ee4;
inline constexpr guest::Function<0x00746efc, u32(u32)> call_00746efc;
inline constexpr guest::Function<0x00746f8c, u32(u32, u32, u32, u32)> UnknownStateA22020__flag_144_without_flag_30;

u32 f_0022e1c0(gptr<Object_0022e1c0_0> arg0, u32 r1, u32 r2) {
    u32 r0_2 = 0;
    u32 r0_1 = UnknownStateA22020__flag_144_without_flag_30(global_00a22020_address, r1, r2, guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        r0_2 = 1u;
    } else {
        u32 r0_3 = call_00746ee4(global_00a22020_address, r1_1, r2);
        arg0->byte_3d = u8(r0_3);
        u32 r0_4 = call_00746ed0(global_00a22020_address);
        arg0->word_40 = r0_4;
        r0_2 = call_00746efc(global_00a22020_address);
        r1_1 = guest::cpu()->r[1];
    }
    if (r2 != 0 || r0_2 >= 2u) {
        r1_1 = arg0->byte_3d;
        if (r1_1 >= 3u) {
            arg0->byte_3d = 1;
        }
        arg0->byte_3c = u8(r1);
        arg0->byte_5d = 1;
    }
    u32 r0_5 = arg0->word_48;
    arg0->word_44 = r0_5;
    guest::cpu()->r[1] = r1_1;
    return r0_5;
}

}  // namespace d_0022e1c0
GUEST_EXPORT_FRAMED(0x0022e1c0, d_0022e1c0::f_0022e1c0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0022fcb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0022fcb8 {

struct __attribute__((packed)) Object_0022fcb8_0 {
    u8 unknown_0[0x164];  // (not used here)
    u32 word_164;
    u8 unknown_168[0x391];  // (not used here)
    u8 byte_4f9;
};
GUEST_OFFSET(Object_0022fcb8_0, word_164, 0x164);
GUEST_OFFSET(Object_0022fcb8_0, byte_4f9, 0x4f9);

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

u32 f_0022fcb8(gptr<Object_0022fcb8_0> arg0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_0022fcb8> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    frame->word_0 = r3;
    gptr<Local_0022fcb8_r0_1> r0_1 = gptr<Local_0022fcb8_r0_1>(arg0->word_164);
    if (r0_1->word_64 != 0 && r0_1->word_1c != 0) {
        u32 ea_1 = r0_1.addr() + 0x68u;  // (from the original)
        u32 r2_1 = *gptr<u32>(ea_1);
        u32 r7_1 = 0u;
        r0_1 = gptr<Local_0022fcb8_r0_1>(r2_1 == 0 ? r7_1 : ea_1 + r2_1);
        frame->word_0 = r0_1.addr();
        if (r0_1.addr() != 0 && r1 != 0) {
            u32 length_2 = string_length(r1, r1, r2_1, r3);
            r0_1 = gptr<Local_0022fcb8_r0_1>(ResDic__find(frame.at(0).addr(), r1, length_2));
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
        r1 = r7_1;
        if (r7_1 != 0) {
            g3d__BaseAnim__virtual_4(r0 + 0x4e0u, r1, r2_1, r3);  // (from the original)
            r1 = guest::cpu()->r[1];
            r0_1 = gptr<Local_0022fcb8_r0_1>(1u);
            arg0->byte_4f9 = u8(r0_1.addr());
        }
    }
    guest::cpu()->r[1] = r1;
    return r0_1.addr();
}

}  // namespace d_0022fcb8
GUEST_EXPORT_FRAMED(0x0022fcb8, d_0022fcb8::f_0022fcb8, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original
