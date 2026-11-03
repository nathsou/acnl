// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "graphics/hemisphere_light.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_006a04c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a04c4 {

inline constexpr guest::Function<0x001139fd, u32(u32, u32)> SaveVillager__set_state_250f;
inline constexpr guest::Function<0x00116e31, u32(u32, u32)> BitSet32__set;
inline constexpr guest::Function<0x0011945d, u32(u32, u32)> call_0011945c;
inline constexpr guest::Function<0x001194e1, u32(u32, u32)> call_001194e0;
inline constexpr guest::Function<0x0011a391, u32(u32)> check_villager_11a390;
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> get_data_base;
inline constexpr guest::Function<0x002fb310, u32(u32)> slot_records_of;
inline constexpr guest::Function<0x002fe450, u32(u32)> table_a82b90_entry;
inline constexpr guest::Function<0x002fe4d0, u32(u32)> set_value_a83388;
inline constexpr guest::Function<0x00300904, u32(u32)> main_object_value;
inline constexpr guest::Function<0x003058c9, u32(u32, u32)> valid_villager_at;
inline constexpr guest::Function<0x003099d0, u32(u32)> call_003099d0;
inline constexpr guest::Function<0x0051d1f8, u32(u32, u32)> read_u32_0x00a83388_;

void f_006a04c4(u32 r0, u32 r1) {
    u32 r4 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r8 = r1;
    u32 data_base_2 = get_data_base(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 records_2 = slot_records_of(data_base_2);
    u32 r7 = records_2 + 4u;
    u32 r0_3 = call_0011945c(r7, ~0u);
    if (r0_3 == 0) {
        return;
    } else {
        r4 = 0u;
    }
    do {
        u32 r0_4 = call_001194e0(r7, r4);
        u32 r0_5 = valid_villager_at(r7, r0_4);
        if (r0_5 != 0) {
            SaveVillager__set_state_250f(r0_5, 2u);
            BitSet32__set(r8, r0_4);
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 2u);
    r4 = 0u;
L_6a053c:;
    u32 r0_6 = valid_villager_at(r7, r4);
    if (r0_6 == 0) {
        goto L_6a05d8;
    }
    r0_7 = table_a82b90_entry(r4);
    if (r0_7 == 0) {
        goto L_6a05d8;
    }
    r0_8 = call_003099d0(r0_7);
    if (s32(r0_8) < 0) {
        goto L_6a05d8;
    }
    r0_9 = valid_villager_at(r7, r0_8);
    r0_10 = main_object_value(r0_9);
    if ((r0_10 - 1u & r0_9) == 0) {
        goto L_6a05e8;
    }
    r0_11 = check_villager_11a390(r0_9);
    if (r0_11 == 0) {
        goto L_6a05e8;
    }
    SaveVillager__set_state_250f(r0_6, 3u);
    r0 = BitSet32__set(r8, r4);
    r1 = guest::cpu()->r[1];
L_6a05c4:;
    r0_12 = read_u32_0x00a83388_(r0, r1);
    if (r0_12 == r4) {
        set_value_a83388(~0u);
    }
L_6a05d8:;
    r4 += 1u;
    if (s32(r4) < 0xa) {  // (from the original)
        guest::preempt();
        goto L_6a053c;
    }
    return;
L_6a05e8:;
    r0 = SaveVillager__set_state_250f(r0_6, 2u);
    r1 = guest::cpu()->r[1];
    guest::preempt();
    goto L_6a05c4;
}

}  // namespace d_006a04c4
GUEST_EXPORT_FRAMED(0x006a04c4, d_006a04c4::f_006a04c4, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_006a0848: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a0848 {

struct __attribute__((packed)) Object_006a0848_0 {
    u8 unknown_0[0xeb58];  // (not used here)
    u32 word_eb58;
};
GUEST_OFFSET(Object_006a0848_0, word_eb58, 0xeb58);

inline guest::global<u8, 0x008540d0> global_008540d0;
inline guest::global<u8, 0x008540d1> global_008540d1;
inline guest::global<u8, 0x008540d2> global_008540d2;
inline guest::global<u16, 0x0088729a> global_0088729a;
inline guest::global<u8, 0x008c9f1c> empty_string;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> read_global_byte_2;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> table_entry_has_all_bits;
inline constexpr guest::Function<0x002fb94c, u32(u32)> get_current_player;
inline constexpr guest::Function<0x00307220, u32(u32, u32)> call_00307220;
inline constexpr guest::Function<0x0057b9dc, u32(u32, u32, u32, u32)> start_529c80_mode_2;
inline constexpr guest::Function<0x006cbbe4, u32(u32)> call_006cbbe4;

struct __attribute__((packed)) Frame_006a0848 {
    u32 word_0;
    float float_4;
    u8 unknown_8[0x4];  // (not read or written by name)
    float float_c;
    u16 half_10;
    u16 half_12;
    u16 half_14;
    u8 unknown_16[0x2];  // (not read or written by name)
    u8 byte_18;
    u8 byte_19;
    u8 unknown_1a[0x2];  // (not read or written by name)
    u32 word_1c;
    u8 unknown_20[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006a0848, word_0, 0x0);
GUEST_OFFSET(Frame_006a0848, float_4, 0x4);
GUEST_OFFSET(Frame_006a0848, float_c, 0xc);
GUEST_OFFSET(Frame_006a0848, half_10, 0x10);
GUEST_OFFSET(Frame_006a0848, half_12, 0x12);
GUEST_OFFSET(Frame_006a0848, half_14, 0x14);
GUEST_OFFSET(Frame_006a0848, byte_18, 0x18);
GUEST_OFFSET(Frame_006a0848, byte_19, 0x19);
GUEST_OFFSET(Frame_006a0848, word_1c, 0x1c);
GUEST_SIZE(Frame_006a0848, 0x24);

void f_006a0848(gptr<Object_006a0848_0> arg0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2, float S3) {
    guest::StackFrameOf<Frame_006a0848> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r0_1 = read_global_byte_2(arg0.addr(), r1, r2, r3);
    u32 r0_2 = table_entry_has_all_bits(0x10u, r0_1);  // (from the original)
    if (r0_2 != 0) {
        return;
    }
    u32 player_2 = get_current_player(r0_2);
    if (player_2 == 0) {
        return;
    }
    u32 r0_4 = call_006cbbe4(player_2);
    call_00307220(frame.at(4).addr(), r0_4);
    float S3_5 = 2.5f;
    float S1_5 = 2.0f;
    float S2_5 = 32.0f;
    frame->float_c = frame->float_c + S2_5 * S3_5;
    float S0_5 = frame->float_4 + S2_5 * S1_5;
    frame->float_4 = S0_5;
    frame->half_10 = 0;
    frame->half_14 = 0;
    frame->half_12 = u16(0xffff8000u);  // (from the original)
    u32 r1_3 = u32(*empty_string) << 0x18 | (((u32(*global_008540d0) & 0xffu | r4 & ~0xffu) & ~0xff00u | u32(*global_008540d1) << 8 & 0xff00u) & ~0xff0000u | u32(*global_008540d2) << 0x10 & 0xff0000u) & ~0xff000000u;  // (from the original)
    frame->byte_18 = 1;
    frame->byte_19 = 0;
    frame->word_1c = r1_3;
    u32 r0_6 = *global_0088729a;
    frame->word_0 = frame.at(0x10).addr();  // (from the original)
    guest::cpu()->s[0] = S0_5;
    guest::cpu()->s[1] = S1_5;
    guest::cpu()->s[2] = S2_5;
    guest::cpu()->s[3] = S3_5;
    u32 r0_7 = start_529c80_mode_2(r0_6, arg0.addr(), frame.at(0x18).addr(), frame.at(4).addr());  // (from the original)
    if (r0_7 == 0) {
        return;
    }
    u32 r2_6 = arg0->word_eb58;
    if (r2_6 != 0) {
        *gptr<u32>(r2_6) = r0_7;
    }
    arg0->word_eb58 = arg0->word_eb58 + 4u;
    guest::cpu()->r[1] = arg0.addr() + 0xeb54u;  // (from the original)
}

}  // namespace d_006a0848
GUEST_EXPORT_FRAMED(0x006a0848, d_006a0848::f_006a0848, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_006a0ecc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a0ecc {

struct __attribute__((packed)) Local_006a0ecc_r0_19 {
    u8 unknown_0[0x1c];  // (not used here)
    u8 byte_1c;
    u8 byte_1d;
};
GUEST_OFFSET(Local_006a0ecc_r0_19, byte_1c, 0x1c);
GUEST_OFFSET(Local_006a0ecc_r0_19, byte_1d, 0x1d);

inline constexpr u32 current_player_data_address = 0x00aaf14cu;
inline guest::global<u32, 0x00aaf14c> current_player_data;
inline constexpr guest::Function<0x001139f4, u32(u32, u32)> call_001139f4;
inline constexpr guest::Function<0x00116e31, u32(u32, u32, u32)> BitSet32__set;
inline constexpr guest::Function<0x00116ea5, u32(u32, u32, u32)> init_bit_mask;
inline constexpr guest::Function<0x00119715, u32(u32, u32, u32)> call_00119714;
inline constexpr guest::Function<0x001198e9, u32(u32, u32, u32)> SaveVillager__has_flag_1;
inline constexpr guest::Function<0x0011a1c9, u32(u32, u32, u32)> SaveVillager__has_flag_2510_bit0;
inline constexpr guest::Function<0x0011a651, u32(u32, u32, u32)> villager_check_11a650;
inline constexpr guest::Function<0x0011b4f7, u32(u32, u32, u32)> small_bit_set_has;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32)> read_global_byte_2;
inline constexpr guest::Function<0x002fae84, u32(u32)> get_data_base;
inline constexpr guest::Function<0x002fb310, u32(u32)> slot_records_of;
inline constexpr guest::Function<0x002fb328, u32(u32)> get_save_data;
inline constexpr guest::Function<0x002fe419, u32(u32)> pick_random_set_bit;
inline constexpr guest::Function<0x002fe450, u32(u32, u32, u32)> table_a82b90_entry;
inline constexpr guest::Function<0x002ff6f4, u32(u32, u32, u32)> roll_2ff6f4;
inline constexpr guest::Function<0x003058c9, u32(u32, u32, u32)> valid_villager_at;
inline constexpr guest::Function<0x00309ac9, u32(u32, u32, u32)> villager_check_309ac8;
inline constexpr guest::Function<0x00309eb9, u32(u32, u32, u32)> SaveVillager__find_player_record_00309eb8;
inline constexpr guest::Function<0x0051ca20, u32(u32, u32, u32, u32)> call_0051ca20;
inline constexpr guest::Function<0x00716b74, u32(u32)> object_check_c;
inline constexpr guest::Function<0x00716de4, u32(u32)> object_check_b;
inline constexpr guest::Function<0x0076cec4, u32(u32, u32, u32)> indexed_check;

struct __attribute__((packed)) Frame_006a0ecc {
    u8 unknown_0[0x8];  // (not read or written by name)
    u32 word_8;
    u8 unknown_c[0x8];  // (not read or written by name)
    u32 word_14;
};
GUEST_OFFSET(Frame_006a0ecc, word_8, 0x8);
GUEST_OFFSET(Frame_006a0ecc, word_14, 0x14);
GUEST_SIZE(Frame_006a0ecc, 0x18);

void f_006a0ecc(u32 r0, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_006a0ecc> frame;  // the original's stack frame
    u32 r0_8 = 0;
    u32 r1_7 = 0;
    u32 r1_10 = 0;
    u32 r10 = r1;
    u32 r0_1 = call_0051ca20(r0, r1, r2, guest::cpu()->r[3]);
    if (r0_1 != 0) {
        u32 r6 = *current_player_data;
        if (r6 != 0) {
            u32 r0_2 = u32(*gptr<u8>(r6 + 0x5701u)) << 0x1e;  // (from the original)
            if (s32(r0_2) < 0) {
                u32 data_base_2 = get_data_base(r0_2);
                u32 records_2 = slot_records_of(data_base_2);
                u32 r9 = records_2 + 4u;
                u32 r0_5 = frame.at(0).addr();
                init_bit_mask(r0_5, 0xau, 0u);  // (from the original)
                u32 r5 = 0x18u;  // (from the original)
                u32 save_data_3 = get_save_data(r0_5);
                u32 r7 = save_data_3 + 0x6aeb8u;  // (from the original)
                init_bit_mask(frame.at(0xc).addr(), 0xbu, 0u);  // (from the original)
                r2 = guest::cpu()->r[2];
                u32 r4 = 0x4au;  // (from the original)
                do {
                    r0_8 = indexed_check(r7, r4 & 0xffu, r2);  // (from the original)
                    r2 = guest::cpu()->r[2];
                    if (r0_8 != 0) {
                        r0_8 = BitSet32__set(frame.at(0xc).addr(), r4 - 0x4au, r2);  // (from the original)
                        r2 = guest::cpu()->r[2];
                    }
                    r4 += 1u;
                    guest::preempt();
                } while (s32(r4) <= 0x54);  // (from the original)
                u32 r0_10 = read_global_byte_2(r0_8, guest::cpu()->r[1], r2);
                r2 = guest::cpu()->r[2];
                u32 zf_1 = r0_10 - 0x3fu == 0;  // (from the original)
                r7 = r0_10;
                if (zf_1) {
                    r5 = 0x15u;  // (from the original)
                } else {
                    if (zf_1 || s32(r0_10) < 0x3f) {  // (from the original)
                        if (r7 == 0x39u || r7 == 0x3au || r7 == 0x3bu || r7 == 0x3cu) {  // (from the original)
                            goto L_6a0fc8;
                        }
                        goto L_6a0fcc;
                    }
                    if (r7 == 0x46u || r7 == 0x47u) {  // (from the original)
                        r5 = 9u;
                        goto L_6a0fcc;
                    }
                    if (r7 == 0x49u) {  // (from the original)
                        r5 = 0xau;  // (from the original)
                    }
                    goto L_6a0fcc;
L_6a0fc8:;
                    r5 = 8u;
                }
L_6a0fcc:;
                r4 = 0u;
                u32 r8 = r6 + 0x55a6u;  // (from the original)
                do {
                    u32 r0_11 = valid_villager_at(r9, r4, r2);
                    r1_7 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    if (r0_11 != 0) {
                        if (*gptr<u8>(r0_11 + 0x250fu) == r5 || r5 == 0xau) {  // (from the original)
                            return;
                        }
                        u32 r0_12 = small_bit_set_has(r10, r4, r2);
                        r1_7 = guest::cpu()->r[1];
                        r2 = guest::cpu()->r[2];
                        if (r0_12 == 0) {
                            u32 r0_13 = SaveVillager__has_flag_2510_bit0(r0_11, r1_7, r2);
                            r1_7 = guest::cpu()->r[1];
                            r2 = guest::cpu()->r[2];
                            if (r0_13 == 0) {
                                u32 r0_14 = SaveVillager__has_flag_1(r0_11, r1_7, r2);
                                r1_7 = guest::cpu()->r[1];
                                r2 = guest::cpu()->r[2];
                                if (r0_14 == 0) {
                                    u32 r0_15 = villager_check_309ac8(r0_11, 0u, r2);
                                    r2 = guest::cpu()->r[2];
                                    if (r0_15 != 0) {
                                        u32 r0_16 = call_00119714(r9, r4, 0u);
                                        r1_7 = guest::cpu()->r[1];
                                        r2 = guest::cpu()->r[2];
                                        if (r0_16 == 0) {
                                            goto L_6a10e8;
                                        }
                                    }
                                    u32 r0_17 = SaveVillager__find_player_record_00309eb8(r0_11, r8, r2);
                                    r1_7 = guest::cpu()->r[1];
                                    r2 = guest::cpu()->r[2];
                                    if (r0_17 != 0) {
                                        if ((u32(*gptr<u8>(r0_17 + 0xbcu)) >> 7) != 0) {  // (from the original)
                                            u32 r0_18 = villager_check_11a650(r0_11, r1_7, r2);
                                            r1_7 = guest::cpu()->r[1];
                                            r2 = guest::cpu()->r[2];
                                            if (r0_18 == 0) {
                                                gptr<Local_006a0ecc_r0_19> r0_19 = gptr<Local_006a0ecc_r0_19>(table_a82b90_entry(r4, r1_7, r2));
                                                r1_7 = guest::cpu()->r[1];
                                                r2 = guest::cpu()->r[2];
                                                if (r0_19.addr() != 0) {
                                                    r1_7 = r0_19->byte_1c;
                                                    if (r1_7 == 0xa5u && r0_19->byte_1d == 0xa5u) {  // (from the original)
                                                        BitSet32__set(frame.at(0).addr(), r4, r2);
                                                        r1_7 = guest::cpu()->r[1];
                                                        r2 = guest::cpu()->r[2];
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
L_6a10e8:;
                    r4 += 1u;
                    guest::preempt();
                } while (s32(r4) < 0xa);  // (from the original)
                if (s32(frame->word_8) > 0) {
                    u32 r0_21 = roll_2ff6f4(0x64u, r1_7, r2);  // (from the original)
                    if (s32(r0_21) < 0x14) {  // (from the original)
                        u32 r0_23 = pick_random_set_bit(frame.at(0).addr());
                        u32 r0_24 = valid_villager_at(r9, r0_23, guest::cpu()->r[2]);
                        if (r0_24 != 0) {
                            if (r7 != 0x46u && r7 != 0x47u) {  // (from the original)
                                if (r7 == 0x49u) {  // (from the original)
                                    if (s32(frame->word_14) <= 0) {
                                        return;
                                    }
                                    u32 r0_26 = pick_random_set_bit(frame.at(0xc).addr());  // (from the original)
                                    r1_10 = r0_26 + 0xau & 0xffu;  // (from the original)
                                    goto L_6a11b4;
                                }
                            } else {
                                u32 save_data_4 = get_save_data(r0_24);
                                u32 r4_1 = save_data_4 + 0x6ad82u;  // (from the original)
                                if (r4_1 == 0) {
                                    return;
                                }
                                u32 r0_28 = object_check_b(r4_1);
                                if (r0_28 == 0) {
                                    u32 r0_29 = object_check_c(r4_1);
                                    if (r0_29 == 0) {
                                        return;
                                    }
                                }
                            }
                            r1_10 = r5;
L_6a11b4:;
                            if (r1_10 != 0x18u) {  // (from the original)
                                call_001139f4(r0_24, r1_10);
                            }
                        }
                    }
                }
            }
        }
    }
}

}  // namespace d_006a0ecc
GUEST_EXPORT_FRAMED(0x006a0ecc, d_006a0ecc::f_006a0ecc, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_006a14bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a14bc {

inline constexpr u32 current_player_data_address = 0x00aaf14cu;
inline guest::global<u32, 0x00aaf14c> current_player_data;
inline constexpr guest::Function<0x00111f95, u32(u32)> check_111f94;
inline constexpr guest::Function<0x001120f1, u32(u32)> check_1120f0;
inline constexpr guest::Function<0x001139fd, u32(u32, u32, u32)> SaveVillager__set_state_250f;
inline constexpr guest::Function<0x00116e31, u32(u32, u32)> BitSet32__set;
inline constexpr guest::Function<0x00116e4f, u32(u32, u32, u32)> BitSet32__clear;
inline constexpr guest::Function<0x00116e93, u32(u32, u32, u32)> BitSet32__assign;
inline constexpr guest::Function<0x00116ea5, u32(u32, u32, u32)> init_bit_mask;
inline constexpr guest::Function<0x001198e9, u32(u32)> SaveVillager__has_flag_1;
inline constexpr guest::Function<0x0011a1c9, u32(u32)> SaveVillager__has_flag_2510_bit0;
inline constexpr guest::Function<0x0011a651, u32(u32)> villager_check_11a650;
inline constexpr guest::Function<0x0011ab05, u32(u32, u32)> villager_passes_checks;
inline constexpr guest::Function<0x0011b4f7, u32(u32, u32, u32)> small_bit_set_has;
inline constexpr guest::Function<0x002fae84, u32(u32)> get_data_base;
inline constexpr guest::Function<0x002fb310, u32(u32)> slot_records_of;
inline constexpr guest::Function<0x002fe419, u32(u32, u32, u32)> pick_random_set_bit;
inline constexpr guest::Function<0x002fe450, u32(u32, u32, u32)> table_a82b90_entry;
inline constexpr guest::Function<0x002fe4d0, u32(u32, u32, u32)> set_value_a83388;
inline constexpr guest::Function<0x002ff6f4, u32(u32)> roll_2ff6f4;
inline constexpr guest::Function<0x003041c8, u32(u32)> kind_state_byte_1;
inline constexpr guest::Function<0x003058c9, u32(u32, u32)> valid_villager_at;
inline constexpr guest::Function<0x00309f85, u32(u32, u32)> SaveVillager__find_player_record_00309f84;
inline constexpr guest::Function<0x0030a038, u32(u32, u32)> collect_flags;
inline constexpr guest::Function<0x0051ca20, u32(u32, u32, u32, u32)> call_0051ca20;
inline constexpr guest::Function<0x0051d1f8, u32(u32)> read_u32_0x00a83388_;
inline constexpr guest::Function<0x0051d6e8, u32(u32)> clear_flags_7_to_22;

struct __attribute__((packed)) Frame_006a14bc {
    u8 unknown_0[0x8];  // (not read or written by name)
    u32 word_8;
    u8 unknown_c[0x8];  // (not read or written by name)
    u32 word_14;
    u8 unknown_18[0x18];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006a14bc, word_8, 0x8);
GUEST_OFFSET(Frame_006a14bc, word_14, 0x14);
GUEST_SIZE(Frame_006a14bc, 0x30);

void f_006a14bc(u32 r0, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_006a14bc> frame;  // the original's stack frame
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_5 = 0;
    u32 r0_10 = 0;
    u32 r4_2 = 0;
    u32 r10 = r1;
    u32 r0_1 = call_0051ca20(r0, r1, r2, guest::cpu()->r[3]);
    if (r0_1 != 0) {
        u32 data_base_2 = get_data_base(r0_1);
        u32 records_2 = slot_records_of(data_base_2);
        u32 r9 = records_2 + 4u;
        init_bit_mask(frame.at(0xc).addr(), 0xau, 0u);  // (from the original)
        init_bit_mask(frame.at(0).addr(), 0x18u, 0u);  // (from the original)
        collect_flags(frame.at(0).addr(), 2u);
        u32 r6 = *current_player_data;
        if (r6 != 0) {
            r0_7 = u32(*gptr<u8>(r6 + 0x5701u)) << 0x1e;  // (from the original)
            if (s32(r0_7) < 0) {
                goto L_6a1534;
            }
        }
        r0_8 = frame.at(0).addr();
        r0_7 = clear_flags_7_to_22(r0_8);
L_6a1534:;
        u32 r0_9 = kind_state_byte_1(r0_7);
        if (r0_9 == 0x2bu) {  // (from the original)
            r1_5 = 5u;
        } else if (r0_9 == 0x32u) {  // (from the original)
            r1_5 = 6u;
        } else {
            goto L_6a155c;
        }
        r0_10 = frame.at(0).addr();
        r0_9 = BitSet32__clear(r0_10, r1_5, guest::cpu()->r[2]);
L_6a155c:;
        u32 r0_11 = check_1120f0(r0_9);
        if (r0_11 == 0) {
            r0_11 = BitSet32__clear(frame.at(0).addr(), 5u, guest::cpu()->r[2]);
        }
        u32 r0_13 = check_111f94(r0_11);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0_13 == 0) {
            BitSet32__clear(frame.at(0).addr(), 6u, r2);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
        }
        u32 r4 = 0u;
        do {
            u32 r0_15 = table_a82b90_entry(r4, r1, r2);
            u32 r0_16 = valid_villager_at(r9, r4);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            u32 zf_1 = r0_15 == 0;
            if (!zf_1) {
                zf_1 = r0_16 == 0;
            }
            if (!zf_1) {
                u32 r8_1 = *gptr<u8>(r0_16 + 0x250fu);  // (from the original)
                if (r8_1 - 3u != 0) {
                    if ((r8_1 - 3u >> 0x1f) == (((r8_1 ^ 3u) & (r8_1 ^ r8_1 - 3u)) >> 0x1f)) {  // (from the original)
                        if (r8_1 == 7u || r8_1 == 0x17u) {  // (from the original)
                            goto L_6a1678;
                        }
                    } else if (r8_1 == 0 || r8_1 == 1u) {
                        goto L_6a1678;
                    }
                    u32 r0_17 = small_bit_set_has(r10, r4, r2);
                    if (r0_17 == 0) {
                        u32 r0_18 = SaveVillager__has_flag_2510_bit0(r0_16);
                        if (r0_18 == 0) {
                            u32 r0_19 = SaveVillager__has_flag_1(r0_16);
                            if (r0_19 == 0) {
                                if ((*gptr<u32>(r0_15 + 0x20u) >> 0xdu & 3u) == 0) {  // (from the original)
                                    u32 r0_20 = roll_2ff6f4(0x64u);  // (from the original)
                                    if (s32(r0_20) < 0x14) {  // (from the original)
                                        BitSet32__set(frame.at(0xc).addr(), r4);  // (from the original)
                                    }
                                }
                            }
                        }
                    }
                    BitSet32__clear(frame.at(0).addr(), r8_1, guest::cpu()->r[2]);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                }
            }
L_6a1678:;
            r4 += 1u;
            guest::preempt();
        } while (s32(r4) < 0xa);  // (from the original)
        u32 r8 = r6 + 0x55a6u;  // (from the original)
L_6a168c:;
        u32 r0_23 = frame->word_14;
        u32 nf_2 = r0_23 >> 0x1f;  // (from the original)
        u32 zf_2 = r0_23 == 0;
        if (!zf_2 && nf_2 == 0u) {
            u32 r0_24 = frame->word_8;
            nf_2 = r0_24 >> 0x1f;  // (from the original)
            zf_2 = r0_24 == 0;
        }
        if (!zf_2 && nf_2 == 0u) {
            u32 r0_26 = pick_random_set_bit(frame.at(0xc).addr(), r1, r2);  // (from the original)
            BitSet32__clear(frame.at(0xc).addr(), r0_26, guest::cpu()->r[2]);  // (from the original)
            u32 r0_28 = valid_villager_at(r9, r0_26);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            if (r0_28 == 0) {
                guest::preempt();
                goto L_6a168c;
            }
            BitSet32__assign(frame.at(0x18).addr(), frame.at(0).addr(), r2);  // (from the original)
            if (r6 != 0) {
                u32 r0_30 = SaveVillager__find_player_record_00309f84(r0_28, r8);
                if (r0_30 != 0) {
                    if ((u32(*gptr<u8>(r0_30 + 0xbcu)) >> 7) != 0) {  // (from the original)
                        u32 r0_31 = villager_check_11a650(r0_28);
                        if (r0_31 == 0) {
                            goto L_6a1728;
                        }
                    }
                }
                clear_flags_7_to_22(frame.at(0x18).addr());  // (from the original)
            }
L_6a1728:;
            u32 r4_1 = frame.at(0x18).addr();  // (from the original)
            u32 r0_33 = small_bit_set_has(r4_1, 5u, guest::cpu()->r[2]);
            if (r0_33 != 0) {
                BitSet32__assign(frame.at(0x24).addr(), r4_1, guest::cpu()->r[2]);  // (from the original)
                u32 r0_35 = villager_passes_checks(r0_28, r0_26);
                if (r0_35 == 0) {
                    BitSet32__clear(frame.at(0x24).addr(), 5u, guest::cpu()->r[2]);  // (from the original)
                }
                u32 r0_38 = pick_random_set_bit(frame.at(0x24).addr(), guest::cpu()->r[1], guest::cpu()->r[2]);  // (from the original)
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r4_2 = r0_38 & 0xffu;  // (from the original)
            } else {
                u32 r0_39 = pick_random_set_bit(r4_1, guest::cpu()->r[1], guest::cpu()->r[2]);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r4_2 = r0_39 & 0xffu;  // (from the original)
            }
            if (r4_2 >= 0x18u) {  // (from the original)
                guest::preempt();
                goto L_6a168c;
            }
            SaveVillager__set_state_250f(r0_28, r4_2, r2);
            u32 r0_40 = frame.at(0).addr();
            BitSet32__clear(r0_40, r4_2, guest::cpu()->r[2]);
            u32 r0_41 = read_u32_0x00a83388_(r0_40);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            if (r0_41 == r0_26) {
                set_value_a83388(~0u, r1, r2);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
            }
            guest::preempt();
            goto L_6a168c;
        }
    }
}

}  // namespace d_006a14bc
GUEST_EXPORT_FRAMED(0x006a14bc, d_006a14bc::f_006a14bc, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_006a1ca0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a1ca0 {

struct __attribute__((packed)) Object_006a1ca0_0 {
    u8 unknown_0[0xeb54];  // (not used here)
    u32 word_eb54;
    u32 word_eb58;
};
GUEST_OFFSET(Object_006a1ca0_0, word_eb54, 0xeb54);
GUEST_OFFSET(Object_006a1ca0_0, word_eb58, 0xeb58);

struct __attribute__((packed)) Local_006a1ca0_r5_1 {
    u32 word_0;
    u8 unknown_4[0x50];  // (not used here)
    u32 word_54;
};
GUEST_OFFSET(Local_006a1ca0_r5_1, word_0, 0x0);
GUEST_OFFSET(Local_006a1ca0_r5_1, word_54, 0x54);


u32 f_006a1ca0(gptr<Object_006a1ca0_0> arg0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r7 = r1;
    r1 = r0 + 0xeb54u;  // (from the original)
    u32 r4 = arg0->word_eb54;
    u32 r6 = arg0->word_eb58;
    u32 r8 = r2;
    if (r4 != r6) {
        do {
            gptr<Local_006a1ca0_r5_1> r5_1 = gptr<Local_006a1ca0_r5_1>(*gptr<u32>(r4));
            if (r5_1.addr() != 0 && r5_1->word_54 == r7) {
                u32 r2_1 = *gptr<u32>(r5_1->word_0 + 0xe8u);  // (from the original)
                // virtual function 58 of r5_1.addr()
                frame.release();
                return guest::call_address<u32>(r2_1, r5_1.addr(), r8, r2_1, guest::cpu()->r[3]);
            }
            r4 += 4u;
            guest::preempt();
        } while (r4 != r6);
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_006a1ca0
GUEST_EXPORT(0x006a1ca0, d_006a1ca0::f_006a1ca0);

// f_006a2c2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a2c2c {

struct __attribute__((packed)) Object_006a2c2c_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_006a2c2c_0, word_0, 0x0);

inline constexpr guest::Function<0x00757aa0, u32(u32, u32, u32, u32)> call_00757aa0;

u32 f_006a2c2c(gptr<Object_006a2c2c_0> arg0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r0_1 = call_00757aa0(arg0.addr(), r1, guest::cpu()->r[2], r3);
    u32 r1_1 = arg0->word_0;
    *gptr<u8>(r1_1 + r0_1) = u8(r3);
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_006a2c2c
GUEST_EXPORT_FRAMED(0x006a2c2c, d_006a2c2c::f_006a2c2c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006a2c48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a2c48 {

inline constexpr guest::Function<0x005bf518, u32(u32, u32)> call_005bf518;

u32 f_006a2c48(u32 r0_unused, u32 r1) {
    call_005bf518(guest::cpu()->r[0], r1);
    return guest::cpu()->r[0];
}

}  // namespace d_006a2c48
GUEST_EXPORT_FRAMED(0x006a2c48, d_006a2c48::f_006a2c48, 0x4010);  // pushes {r4, lr} first, as the original

// f_006a2c58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a2c58 {

struct __attribute__((packed)) Object_006a2c58_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_006a2c58_0, word_0, 0x0);
GUEST_OFFSET(Object_006a2c58_0, word_4, 0x4);
GUEST_OFFSET(Object_006a2c58_0, word_8, 0x8);


void f_006a2c58(gptr<Object_006a2c58_0> arg0, u32 r1, u32 r2, u32 r3) {
    arg0->word_0 = r1;
    arg0->word_4 = r2;
    arg0->word_8 = r3;
}

}  // namespace d_006a2c58
GUEST_EXPORT(0x006a2c58, d_006a2c58::f_006a2c58);

// f_006a2ca4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a2ca4 {

inline constexpr u32 vtable_script__WordFix_64u_ = 0x0090a228u;
inline constexpr u32 message_store_address = 0x0095deccu;
inline guest::global<u32, 0x0095decc> message_store;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> script__construct_word_ptr;
inline constexpr guest::Function<0x005d6cc0, u32(u32, u32)> start_window_message;
inline constexpr guest::Function<0x005d6d28, u32(u32)> call_005d6d28;
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32)> LinkOwner__unlink;
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> load_message;
inline constexpr guest::Function<0x005f4bfc, u32(u32)> construct_script_word;

struct __attribute__((packed)) Frame_006a2ca4 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not read or written by name)
    u32 word_8;
    u8 unknown_c[0x94];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006a2ca4, word_0, 0x0);
GUEST_OFFSET(Frame_006a2ca4, word_8, 0x8);
GUEST_SIZE(Frame_006a2ca4, 0xa0);

void script__WordFix_64u___WordFix_006a2ca4(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_006a2ca4> frame;  // the original's stack frame
    u32 res_1 = 0;
    u32 r3_4 = 0;
    u32 r5 = r0;
    u32 r7 = r1;
    u32 r0_1 = frame.at(8).addr();
    script__construct_word_ptr(r0_1, frame.at(0x20).addr(), 0x40u, r3);  // (from the original)
    u32 r6 = vtable_script__WordFix_64u_;
    *gptr<u32>(r0_1) = r6;
    u32 r0_2 = r0_1 + 0xcu;  // (from the original)
    construct_script_word(r0_2);
    clear_aligned(r0_2 + 0xcu, 0x80u);  // (from the original)
    u32 r2 = 0x8906ecu;  // (from the original)
    u32 r4 = 0u;
    r0 = (r0_2 + 0xcu) - 2u;  // (from the original)
    r1 = 0x20u;  // (from the original)
    do {
        u32 r3_3 = *gptr<u16>(r2);
        res_1 = r1 - 1u;
        r1 = res_1;
        *gptr<u16>(r0 + 2u) = u16(r3_3);
        r3_4 = *gptr<u16>(r2);
        u32 ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r3_4);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    call_005ea8f8(*message_store, 0u, r2, r3_4);
    frame->word_0 = r4;
    load_message(*message_store, frame.at(8).addr(), 0x857b98u, r7);  // (from the original)
    LinkOwner__unlink(*message_store, 0u);
    start_window_message(r5 + 0x24u, frame.at(8).addr());  // (from the original)
    call_005d6d28(r5 + 0x24u);  // (from the original)
    frame->word_8 = r6;
}

}  // namespace d_006a2ca4
GUEST_EXPORT_FRAMED(0x006a2ca4, d_006a2ca4::script__WordFix_64u___WordFix_006a2ca4, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_006a3988: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a3988 {

inline constexpr guest::Function<0x001323bc, u32(u32)> read_global_975c20;
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32)> call_00569e6c;

u32 f_006a3988(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = read_global_975c20(r0);
    frame.release();
    return call_00569e6c(r0_1, r0 + 0x504u, 1u);  // (from the original)
}

}  // namespace d_006a3988
GUEST_EXPORT(0x006a3988, d_006a3988::f_006a3988);

// f_006a3bd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a3bd4 {

inline constexpr guest::Function<0x00132364, u32(u32, u32, u32, u32)> release_layout_parts;
inline constexpr guest::Function<0x001323b4, u32(u32)> layout_at_10_virtual_8;
inline constexpr guest::Function<0x005d6bfc, u32(u32)> call_005d6bfc;
inline constexpr guest::Function<0x005e2e04, u32(u32)> call_005e2e04;

u32 f_006a3bd4(u32 r0) {
    release_layout_parts(r0 + 0x650u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    layout_at_10_virtual_8(r0 + 0x504u);  // (from the original)
    call_005d6bfc(r0 + 0x24u);  // (from the original)
    call_005e2e04(r0 + 0x124u);  // (from the original)
    call_005e2e04(r0 + 0x1e8u);  // (from the original)
    call_005e2e04(r0 + 0x2acu);  // (from the original)
    call_005e2e04(r0 + 0x370u);  // (from the original)
    call_005e2e04(r0 + 0x434u);  // (from the original)
    return 1u;
}

}  // namespace d_006a3bd4
GUEST_EXPORT_FRAMED(0x006a3bd4, d_006a3bd4::f_006a3bd4, 0x4010);  // pushes {r4, lr} first, as the original

// f_006a3cb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a3cb4 {

inline constexpr guest::Function<0x00567e24, u32(u32, u32)> load_layout_archive;

u32 f_006a3cb4(u32 r0) {
    return load_layout_archive(r0 + 0x650u, 0x6a3cc0u);  // (from the original)
}

}  // namespace d_006a3cb4
GUEST_EXPORT(0x006a3cb4, d_006a3cb4::f_006a3cb4);

// f_006a3d54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a3d54 {

struct __attribute__((packed)) Local_006a3d54_ea_1 {
    u8 byte_0;
};
GUEST_OFFSET(Local_006a3d54_ea_1, byte_0, 0x0);

struct __attribute__((packed)) Local_006a3d54_ea_2 {
    u8 byte_0;
};
GUEST_OFFSET(Local_006a3d54_ea_2, byte_0, 0x0);

struct __attribute__((packed)) Local_006a3d54_ea_3 {
    u8 byte_0;
};
GUEST_OFFSET(Local_006a3d54_ea_3, byte_0, 0x0);

struct __attribute__((packed)) Local_006a3d54_ea_4 {
    u8 byte_0;
};
GUEST_OFFSET(Local_006a3d54_ea_4, byte_0, 0x0);

struct __attribute__((packed)) Local_006a3d54_ea_5 {
    u8 byte_0;
};
GUEST_OFFSET(Local_006a3d54_ea_5, byte_0, 0x0);

struct __attribute__((packed)) Local_006a3d54_ea_6 {
    u8 byte_0;
};
GUEST_OFFSET(Local_006a3d54_ea_6, byte_0, 0x0);

struct __attribute__((packed)) Local_006a3d54_ea_7 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006a3d54_ea_7, word_0, 0x0);
GUEST_OFFSET(Local_006a3d54_ea_7, word_4, 0x4);

struct __attribute__((packed)) Local_006a3d54_r0_10 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_006a3d54_r0_10, byte_b7, 0xb7);

struct __attribute__((packed)) Local_006a3d54_r0_11 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_006a3d54_r0_11, byte_b7, 0xb7);

struct __attribute__((packed)) Local_006a3d54_r0_18 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_006a3d54_r0_18, byte_b7, 0xb7);

struct __attribute__((packed)) Local_006a3d54_r0_19 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_006a3d54_r0_19, byte_b7, 0xb7);

struct __attribute__((packed)) Local_006a3d54_r0_2 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_006a3d54_r0_2, byte_b7, 0xb7);

struct __attribute__((packed)) Local_006a3d54_r0_23 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_006a3d54_r0_23, byte_b7, 0xb7);

struct __attribute__((packed)) Local_006a3d54_r0_24 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_006a3d54_r0_24, byte_b7, 0xb7);

struct __attribute__((packed)) Local_006a3d54_r0_25 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_006a3d54_r0_25, byte_b7, 0xb7);

struct __attribute__((packed)) Local_006a3d54_r0_26 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_006a3d54_r0_26, byte_b7, 0xb7);

struct __attribute__((packed)) Local_006a3d54_r0_3 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_006a3d54_r0_3, byte_b7, 0xb7);

struct __attribute__((packed)) Local_006a3d54_r0_4 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_006a3d54_r0_4, byte_b7, 0xb7);

struct __attribute__((packed)) Local_006a3d54_r0_5 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_006a3d54_r0_5, byte_b7, 0xb7);

struct __attribute__((packed)) Local_006a3d54_r0_6 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_006a3d54_r0_6, byte_b7, 0xb7);

struct __attribute__((packed)) Local_006a3d54_r0_7 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_006a3d54_r0_7, byte_b7, 0xb7);

struct __attribute__((packed)) Local_006a3d54_r0_8 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_006a3d54_r0_8, byte_b7, 0xb7);

struct __attribute__((packed)) Local_006a3d54_r0_9 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_006a3d54_r0_9, byte_b7, 0xb7);

inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> LayoutObjectWithChild__forward_to_child;
inline constexpr guest::Function<0x00568a80, u32(u32, u32)> find_of_type_b;
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> Layout__virtual_3;
inline constexpr guest::Function<0x005d46dc, u32(u32, u32)> value_for_mode;
inline constexpr guest::Function<0x005d69bc, u32(u32, u32, u32, u32)> call_005d69bc;

struct __attribute__((packed)) Frame_006a3d54 {
    u32 word_0;
    u8 unknown_4[0x1c];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006a3d54, word_0, 0x0);
GUEST_SIZE(Frame_006a3d54, 0x20);

void f_006a3d54(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_006a3d54> frame;  // the original's stack frame
    u32 r1_2 = 0;
    frame->word_0 = r3;
    u32 r0_1 = r0 + 0x504u;  // (from the original)
    gptr<Local_006a3d54_r0_2> child_11 = gptr<Local_006a3d54_r0_2>(LayoutObjectWithChild__forward_to_child(r0_1, 0x6a4000u, r2, r3));  // (from the original)
    child_11->byte_b7 = u8(u32(child_11->byte_b7) & 0xfeu);  // (from the original)
    gptr<Local_006a3d54_r0_3> child_12 = gptr<Local_006a3d54_r0_3>(LayoutObjectWithChild__forward_to_child(r0_1, 0x6a4008u, guest::cpu()->r[2], guest::cpu()->r[3]));  // (from the original)
    child_12->byte_b7 = u8(u32(child_12->byte_b7) & 0xfeu);  // (from the original)
    gptr<Local_006a3d54_r0_4> child_13 = gptr<Local_006a3d54_r0_4>(LayoutObjectWithChild__forward_to_child(r0_1, 0x6a4010u, guest::cpu()->r[2], guest::cpu()->r[3]));  // (from the original)
    child_13->byte_b7 = u8(u32(child_13->byte_b7) & 0xfeu);  // (from the original)
    gptr<Local_006a3d54_r0_5> child_14 = gptr<Local_006a3d54_r0_5>(LayoutObjectWithChild__forward_to_child(r0_1, 0x6a4018u, guest::cpu()->r[2], guest::cpu()->r[3]));  // (from the original)
    child_14->byte_b7 = u8(u32(child_14->byte_b7) & 0xfeu);  // (from the original)
    gptr<Local_006a3d54_r0_6> child_15 = gptr<Local_006a3d54_r0_6>(LayoutObjectWithChild__forward_to_child(r0_1, 0x6a4024u, guest::cpu()->r[2], guest::cpu()->r[3]));  // (from the original)
    child_15->byte_b7 = u8(u32(child_15->byte_b7) & 0xfeu);  // (from the original)
    gptr<Local_006a3d54_r0_7> child_16 = gptr<Local_006a3d54_r0_7>(LayoutObjectWithChild__forward_to_child(r0_1, 0x6a4030u, guest::cpu()->r[2], guest::cpu()->r[3]));  // (from the original)
    child_16->byte_b7 = u8(u32(child_16->byte_b7) & 0xfeu);  // (from the original)
    gptr<Local_006a3d54_r0_8> child_17 = gptr<Local_006a3d54_r0_8>(LayoutObjectWithChild__forward_to_child(r0_1, 0x6a403cu, guest::cpu()->r[2], guest::cpu()->r[3]));  // (from the original)
    child_17->byte_b7 = u8(u32(child_17->byte_b7) & 0xfeu);  // (from the original)
    gptr<Local_006a3d54_r0_9> child_18 = gptr<Local_006a3d54_r0_9>(LayoutObjectWithChild__forward_to_child(r0_1, 0x6a4044u, guest::cpu()->r[2], guest::cpu()->r[3]));  // (from the original)
    child_18->byte_b7 = u8(u32(child_18->byte_b7) & 0xfeu);  // (from the original)
    gptr<Local_006a3d54_r0_10> child_19 = gptr<Local_006a3d54_r0_10>(LayoutObjectWithChild__forward_to_child(r0_1, 0x6a4050u, guest::cpu()->r[2], guest::cpu()->r[3]));  // (from the original)
    child_19->byte_b7 = u8(u32(child_19->byte_b7) & 0xfeu);  // (from the original)
    gptr<Local_006a3d54_r0_11> child_20 = gptr<Local_006a3d54_r0_11>(LayoutObjectWithChild__forward_to_child(r0_1, 0x6a4058u, guest::cpu()->r[2], guest::cpu()->r[3]));  // (from the original)
    u32 r1_1 = u32(child_20->byte_b7) & 0xfeu;  // (from the original)
    child_20->byte_b7 = u8(r1_1);
    u32 r0_12 = value_for_mode(child_20.addr(), r1_1);
    if (r0_12 == 0) {
        u32 r0_13 = find_of_type_b(r0_1, 0x6a4078u);  // (from the original)
        gptr<Local_006a3d54_ea_1> ea_1 = gptr<Local_006a3d54_ea_1>(r0_13 + 0xb7u);  // (from the original)
        ea_1->byte_0 = u8(u32(ea_1->byte_0) & 0xfeu | 1u);  // (from the original)
        u32 r0_14 = find_of_type_b(r0_1, 0x6a4084u);  // (from the original)
        gptr<Local_006a3d54_ea_2> ea_2 = gptr<Local_006a3d54_ea_2>(r0_14 + 0xb7u);  // (from the original)
        ea_2->byte_0 = u8(u32(ea_2->byte_0) & 0xfeu | 1u);  // (from the original)
        u32 r0_15 = find_of_type_b(r0_1, 0x6a4090u);  // (from the original)
        gptr<Local_006a3d54_ea_3> ea_3 = gptr<Local_006a3d54_ea_3>(r0_15 + 0xb7u);  // (from the original)
        ea_3->byte_0 = u8(u32(ea_3->byte_0) & 0xfeu | 1u);  // (from the original)
        u32 r0_16 = find_of_type_b(r0_1, 0x6a409cu);  // (from the original)
        gptr<Local_006a3d54_ea_4> ea_4 = gptr<Local_006a3d54_ea_4>(r0_16 + 0xb7u);  // (from the original)
        ea_4->byte_0 = u8(u32(ea_4->byte_0) & 0xfeu | 1u);  // (from the original)
        frame->word_0 = r0_16;
        call_005d69bc(r0 + 0x24u, r0_13, r0_14, r0_15);  // (from the original)
        gptr<Local_006a3d54_r0_18> r0_18 = gptr<Local_006a3d54_r0_18>(find_of_type_b(r0_1, 0x6a4060u));  // (from the original)
        r0_18->byte_b7 = u8(u32(r0_18->byte_b7) & 0xfeu);  // (from the original)
        r1_2 = 0x6a406cu;  // (from the original)
        gptr<Local_006a3d54_r0_19> r0_19 = gptr<Local_006a3d54_r0_19>(find_of_type_b(r0_1, r1_2));
        r0_19->byte_b7 = u8(u32(r0_19->byte_b7) & 0xfeu);  // (from the original)
    } else {
        u32 r0_20 = find_of_type_b(r0_1, 0x6a4060u);  // (from the original)
        gptr<Local_006a3d54_ea_5> ea_5 = gptr<Local_006a3d54_ea_5>(r0_20 + 0xb7u);  // (from the original)
        ea_5->byte_0 = u8(u32(ea_5->byte_0) & 0xfeu | 1u);  // (from the original)
        u32 r0_21 = find_of_type_b(r0_1, 0x6a406cu);  // (from the original)
        gptr<Local_006a3d54_ea_6> ea_6 = gptr<Local_006a3d54_ea_6>(r0_21 + 0xb7u);  // (from the original)
        ea_6->byte_0 = u8(u32(ea_6->byte_0) & 0xfeu | 1u);  // (from the original)
        frame->word_0 = 0;
        call_005d69bc(r0 + 0x24u, r0_20, 0u, r0_21);  // (from the original)
        gptr<Local_006a3d54_r0_23> r0_23 = gptr<Local_006a3d54_r0_23>(find_of_type_b(r0_1, 0x6a4078u));  // (from the original)
        r0_23->byte_b7 = u8(u32(r0_23->byte_b7) & 0xfeu);  // (from the original)
        gptr<Local_006a3d54_r0_24> r0_24 = gptr<Local_006a3d54_r0_24>(find_of_type_b(r0_1, 0x6a4084u));  // (from the original)
        r0_24->byte_b7 = u8(u32(r0_24->byte_b7) & 0xfeu);  // (from the original)
        gptr<Local_006a3d54_r0_25> r0_25 = gptr<Local_006a3d54_r0_25>(find_of_type_b(r0_1, 0x6a4090u));  // (from the original)
        r0_25->byte_b7 = u8(u32(r0_25->byte_b7) & 0xfeu);  // (from the original)
        r1_2 = 0x6a409cu;  // (from the original)
        gptr<Local_006a3d54_r0_26> r0_26 = gptr<Local_006a3d54_r0_26>(find_of_type_b(r0_1, r1_2));
        r0_26->byte_b7 = u8(u32(r0_26->byte_b7) & 0xfeu);  // (from the original)
    }
    gptr<Local_006a3d54_ea_7> ea_7 = gptr<Local_006a3d54_ea_7>(r0 + 0x940u);  // (from the original)
    ea_7->word_0 = 0;
    ea_7->word_4 = 0;
    u32 r3_22 = frame->word_0;
    frame.release();
    Layout__virtual_3(r0_1, r1_2, guest::cpu()->r[2], r3_22);
    return;
}

}  // namespace d_006a3d54
GUEST_EXPORT(0x006a3d54, d_006a3d54::f_006a3d54);

// f_006a42ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a42ac {

struct __attribute__((packed)) Object_006a42ac_0 {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
    u8 unknown_18[0xe0d];  // (not used here)
    u8 byte_e25;
};
GUEST_OFFSET(Object_006a42ac_0, word_14, 0x14);
GUEST_OFFSET(Object_006a42ac_0, byte_e25, 0xe25);


void f_006a42ac(gptr<Object_006a42ac_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r2_1 = arg0->word_14;
    u32 r12 = 3u;
    u32 r1 = r2_1 - 0x124u;  // (from the original)
    u32 r2 = *gptr<u32>(r2_1 + 4u);
    for (;;) {
        if (r1 == r0 - 0x114u) {  // (from the original)
            break;
        }
        *gptr<u8>(r1 + 0x120u) = u8(r12);  // (from the original)
        r1 = r2 - 0x124u;  // (from the original)
        r2 = *gptr<u32>(r2 + 4u);
        guest::preempt();
    }
    arg0->byte_e25 = 1;
    guest::cpu()->r[1] = 1u;
}

}  // namespace d_006a42ac
GUEST_EXPORT(0x006a42ac, d_006a42ac::f_006a42ac);

// f_006a4f98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a4f98 {

inline constexpr u32 vtable_sead__SafeStringBase_char_ = 0x009047f8u;
inline constexpr guest::Function<0x006a42e4, u32(u32, u32, u32, u32)> sead__SafeStringBase_char___SafeStringBase_006a42e4;

struct __attribute__((packed)) Frame_006a4f98 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006a4f98, word_0, 0x0);
GUEST_OFFSET(Frame_006a4f98, word_4, 0x4);
GUEST_SIZE(Frame_006a4f98, 0xc);

void sead__SafeStringBase_char___SafeStringBase_006a4f98(u32 r0) {
    guest::StackFrameOf<Frame_006a4f98> frame;  // the original's stack frame
    frame->word_4 = 0x6a4fe0;  // (from the original)
    frame->word_0 = vtable_sead__SafeStringBase_char_;
    sead__SafeStringBase_char___SafeStringBase_006a42e4(r0, frame.at(0).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
    frame->word_4 = 0x6a4fec;  // (from the original)
    frame->word_0 = vtable_sead__SafeStringBase_char_;
    sead__SafeStringBase_char___SafeStringBase_006a42e4(r0, frame.at(0).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_006a4f98
GUEST_EXPORT_FRAMED(0x006a4f98, d_006a4f98::sead__SafeStringBase_char___SafeStringBase_006a4f98, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_006a51ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a51ec {

struct __attribute__((packed)) Local_006a51ec_r0_7 {
    u8 unknown_0[0xa];  // (not used here)
    u8 byte_a;
};
GUEST_OFFSET(Local_006a51ec_r0_7, byte_a, 0xa);

inline constexpr guest::Function<0x001b19dc, u32(u32, u32)> call_001b19dc;
inline constexpr guest::Function<0x002fae84, u32(u32)> get_data_base;
inline constexpr guest::Function<0x002fb328, u32(u32)> get_save_data;
inline constexpr guest::Function<0x0070b334, u32(u32)> call_0070b334;

u32 f_006a51ec(u32 r0, u32 r1) {
    u32 data_base_3 = get_data_base(r0);
    u32 r0_2 = data_base_3 + 0x6e224u;  // (from the original)
    call_001b19dc(r0_2, r1);
    u32 save_data_2 = get_save_data(r0_2);
    u32 r0_5 = call_0070b334(save_data_2 + 0x6e2a4u);  // (from the original)
    if (r0_5 == 0) {
        return r0_5;
    }
    u32 data_base_4 = get_data_base(r0_5);
    gptr<Local_006a51ec_r0_7> r0_7 = gptr<Local_006a51ec_r0_7>(data_base_4 + 0x6214fu);  // (from the original)
    u32 r1_4 = u32(r0_7->byte_a) & ~0x80u;  // (from the original)
    r0_7->byte_a = u8(r1_4);
    guest::cpu()->r[1] = r1_4;
    return r0_7.addr();
}

}  // namespace d_006a51ec
GUEST_EXPORT_FRAMED(0x006a51ec, d_006a51ec::f_006a51ec, 0x4010);  // pushes {r4, lr} first, as the original

// f_006a5928: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a5928 {

inline constexpr u32 fader_heap_address = 0x00952c7cu;
inline guest::global<u8, 0x00952641> global_00952641;
inline guest::global<u32, 0x00952644> global_00952644;
inline guest::global<u32, 0x00952648> global_00952648;
inline guest::global<u32, 0x0095264c> global_0095264c;
inline guest::global<u32, 0x00952650> global_00952650;
inline guest::global<u32, 0x00952654> global_00952654;
inline guest::global<u32, 0x00952658> global_00952658;
inline guest::global<u32, 0x0095265c> global_0095265c;
inline guest::global<u32, 0x00952660> global_00952660;
inline guest::global<u32, 0x00952664> global_00952664;
inline guest::global<u32, 0x00952668> global_00952668;
inline guest::global<u32, 0x00952c7c> fader_heap;
inline constexpr guest::Function<0x001aa440, u32(u32, u32, u32, u32)> FaderColor__FaderColor;
inline constexpr guest::Function<0x001c8290, u32(u32, u32, u32, u32)> construct_fader_moment;
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> allocate_from_heap_002fd108;
inline constexpr guest::Function<0x006e4a48, u32(u32, u32, u32)> FaderWipe__FaderWipe;

struct __attribute__((packed)) Frame_006a5928 {
    u32 word_0;
    u8 byte_4;
    u8 byte_5;
    u8 byte_6;
    u8 byte_7;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006a5928, word_0, 0x0);
GUEST_OFFSET(Frame_006a5928, byte_4, 0x4);
GUEST_OFFSET(Frame_006a5928, byte_5, 0x5);
GUEST_OFFSET(Frame_006a5928, byte_6, 0x6);
GUEST_OFFSET(Frame_006a5928, byte_7, 0x7);
GUEST_SIZE(Frame_006a5928, 0xc);

void f_006a5928(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_006a5928> frame;  // the original's stack frame
    u32 block_10 = allocate_from_heap_002fd108(0x18u, *fader_heap, 4u, r3);  // (from the original)
    frame->byte_4 = 0;
    frame->byte_5 = 0;
    frame->byte_6 = 0;
    frame->byte_7 = 0;
    frame->word_0 = 0;
    *global_00952644 = FaderColor__FaderColor(block_10, 0u, frame.at(4).addr(), 0u);
    if (block_10 != 0) {
        u32 block_11 = allocate_from_heap_002fd108(0x18u, *fader_heap, 4u, guest::cpu()->r[3]);  // (from the original)
        frame->byte_4 = 0;
        frame->byte_5 = 0xff;  // (from the original)
        frame->byte_6 = 0xff;  // (from the original)
        frame->byte_7 = 0xff;  // (from the original)
        frame->word_0 = 0;
        *global_00952648 = FaderColor__FaderColor(block_11, 0u, frame.at(4).addr(), 0u);
        if (block_11 != 0) {
            u32 block_12 = allocate_from_heap_002fd108(0x18u, *fader_heap, 4u, guest::cpu()->r[3]);  // (from the original)
            frame->byte_4 = 0;
            frame->byte_5 = 0xff;  // (from the original)
            frame->byte_6 = 0xff;  // (from the original)
            frame->byte_7 = 0xff;  // (from the original)
            frame->word_0 = 0;
            *global_0095264c = FaderColor__FaderColor(block_12, 0u, frame.at(4).addr(), 1u);
            if (block_12 != 0) {
                u32 block_13 = allocate_from_heap_002fd108(0x14u, *fader_heap, 4u, guest::cpu()->r[3]);  // (from the original)
                *global_00952650 = FaderWipe__FaderWipe(block_13, 0u, 0u);
                if (block_13 != 0) {
                    u32 block_14 = allocate_from_heap_002fd108(0x10u, *fader_heap, 4u, guest::cpu()->r[3]);  // (from the original)
                    *global_00952654 = construct_fader_moment(block_14, 0u, 0u, guest::cpu()->r[3]);
                    if (block_14 != 0) {
                        u32 block_15 = allocate_from_heap_002fd108(0x18u, *fader_heap, 4u, guest::cpu()->r[3]);  // (from the original)
                        frame->byte_4 = 0;
                        frame->byte_5 = 0;
                        frame->byte_6 = 0;
                        frame->byte_7 = 0;
                        frame->word_0 = 0;
                        *global_00952658 = FaderColor__FaderColor(block_15, 1u, frame.at(4).addr(), 0u);
                        if (block_15 != 0) {
                            u32 block_16 = allocate_from_heap_002fd108(0x18u, *fader_heap, 4u, guest::cpu()->r[3]);  // (from the original)
                            frame->byte_4 = 0;
                            frame->byte_5 = 0xff;  // (from the original)
                            frame->byte_6 = 0xff;  // (from the original)
                            frame->byte_7 = 0xff;  // (from the original)
                            frame->word_0 = 0;
                            *global_0095265c = FaderColor__FaderColor(block_16, 1u, frame.at(4).addr(), 0u);
                            if (block_16 != 0) {
                                u32 block_17 = allocate_from_heap_002fd108(0x18u, *fader_heap, 4u, guest::cpu()->r[3]);  // (from the original)
                                frame->byte_4 = 0;
                                frame->byte_5 = 0xff;  // (from the original)
                                frame->byte_6 = 0xff;  // (from the original)
                                frame->byte_7 = 0xff;  // (from the original)
                                frame->word_0 = 0;
                                *global_00952660 = FaderColor__FaderColor(block_17, 1u, frame.at(4).addr(), 1u);
                                if (block_17 != 0) {
                                    u32 block_18 = allocate_from_heap_002fd108(0x10u, *fader_heap, 4u, 1u);  // (from the original)
                                    *global_00952664 = construct_fader_moment(block_18, 1u, 0u, 1u);
                                    if (block_18 != 0) {
                                        *global_00952641 = 0;
                                        *global_00952668 = 0;
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

}  // namespace d_006a5928
GUEST_EXPORT_FRAMED(0x006a5928, d_006a5928::f_006a5928, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_006a5b88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a5b88 {

inline constexpr u32 global_0094e4b8_address = 0x0094e4b8u;
inline guest::global<u32, 0x0094e4b8> global_0094e4b8;
inline guest::global<u8, 0x00952641> global_00952641;
inline guest::global<u32, 0x00952668> global_00952668;
inline constexpr guest::Function<0x00565f00, u32(u32, u32, u32, u32)> notify_listeners_a;
inline constexpr guest::Function<0x0058d5a0, u32(u32)> call_0058d5a0;
inline constexpr guest::Function<0x0076f0cc, u32(u32)> call_0076f0cc;
inline constexpr guest::Function<0x0076f1b4, u32(u32, u32, u32, u32)> call_0076f1b4;

u32 f_006a5b88(u32 r0) {
    u32 r0_5 = 0;
    *global_00952641 = 1;
    *global_00952668 = r0;
    u32 r0_1 = *global_0094e4b8;
    if (r0_1 != 0) {
        u32 r0_2 = call_0076f1b4(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        if (r0_2 != 0) {
            u32 r0_4 = call_0076f0cc(*global_0094e4b8);
            if (r0_4 == 0) {
                return 1u;
            }
        }
    }
    r0_5 = notify_listeners_a(uxth(r0), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_5 != 0) {
        call_0058d5a0(r0_5);
        *global_00952641 = 0;
        r0_5 = 1u;
    }
    return r0_5;
}

}  // namespace d_006a5b88
GUEST_EXPORT_FRAMED(0x006a5b88, d_006a5b88::f_006a5b88, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006a5c00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a5c00 {

inline constexpr u32 global_00952640_address = 0x00952640u;
inline guest::global<u8, 0x00952641> global_00952641;
inline constexpr guest::Function<0x00565f74, u32(u32, u32, u32, u32)> notify_listeners_b;
inline constexpr guest::Function<0x0058d6bc, u32(u32, u32)> call_0058d6bc;

u32 f_006a5c00(u32 r0, u32 r1) {
    u32 r0_2 = notify_listeners_b(uxth(r0), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_2 == 0) {
        return r0_2;
    }
    *global_00952641 = 0;
    call_0058d6bc(r0_2, global_00952640_address);
    return r0_2;
}

}  // namespace d_006a5c00
GUEST_EXPORT_FRAMED(0x006a5c00, d_006a5c00::f_006a5c00, 0x4010);  // pushes {r4, lr} first, as the original

// f_006a5dd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a5dd4 {

struct __attribute__((packed)) Object_006a5dd4_0 {
    float float_0;
    u32 word_4;
    float float_8;
};
GUEST_OFFSET(Object_006a5dd4_0, float_0, 0x0);
GUEST_OFFSET(Object_006a5dd4_0, word_4, 0x4);
GUEST_OFFSET(Object_006a5dd4_0, float_8, 0x8);

inline guest::global<u32, 0x006a5e00> global_006a5e00;

void f_006a5dd4(gptr<Object_006a5dd4_0> arg0, u32 r1, u32 r2) {
    u32 r1_1 = r1 << 5;
    arg0->word_4 = *global_006a5e00;
    float S0_1 = float(s32(r1_1));
    float S1_1 = float(s32(r2 << 5));
    arg0->float_0 = S0_1;
    arg0->float_8 = S1_1;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_006a5dd4
GUEST_EXPORT(0x006a5dd4, d_006a5dd4::f_006a5dd4);

// f_006a6408: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a6408 {

inline constexpr u32 global_009b4a24_address = 0x009b4a24u;
inline constexpr guest::Function<0x001c2074, u32(u32, u32)> call_001c2074;
inline constexpr guest::Function<0x0024246c, u32(u32, u32)> call_0024246c;
inline constexpr guest::Function<0x002e3bd4, u32(u32, u32)> sead__SafeStringBase_char___SafeStringBase_002e3bd4;
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> get_data_base;
inline constexpr guest::Function<0x002faea4, u32(u32, u32, u32, u32)> block_at;
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x00304530, u32(u32, u32, u32, u32)> shared_load_splits;
inline constexpr guest::Function<0x0030512c, u32(u32, u32)> record_302_address_0030512c;
inline constexpr guest::Function<0x0030fbb4, u32(u32, u32)> block_or_first;
inline constexpr guest::Function<0x00317148, u32(u32, u32, u32, u32)> CellGrid__cell_at;
inline constexpr guest::Function<0x0057bc20, u32(u32, u32, u32, u32)> store_two_words_at_4_57bc20;
inline constexpr guest::Function<0x0057bce0, u32(u32, u32, u32, u32)> GridCellSmall__place_item;
inline constexpr guest::Function<0x00613704, u32(u32, u32, u32, u32)> call_00613704;
inline constexpr guest::Function<0x00613758, u32(u32, u32, u32, u32)> member_address_0x6480_;
inline constexpr guest::Function<0x006a6f50, u32(u32)> call_006a6f50;
inline constexpr guest::Function<0x006a92f4, u32(u32, u32, u32, u32)> load_block_a00;
inline constexpr guest::Function<0x006f9db4, u32(u32, u32)> position_in_1b_to_1d;
inline constexpr guest::Function<0x006f9e94, u32(u32, u32)> call_006f9e94;
inline constexpr guest::Function<0x006fa728, u32(u32, u32, u32, u32)> call_006fa728;
inline constexpr guest::Function<0x006fae98, u32(u32, u32)> call_006fae98;
inline constexpr guest::Function<0x006fb0cc, u32(u32)> call_006fb0cc;
inline constexpr guest::Function<0x00720358, u32(u32, u32, u32, u32)> grid_cell_address;
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32)> GridMap__large_cell_at;
inline constexpr guest::Function<0x0075db98, u32(u32, u32, u32, u32)> tile_address_0075db98;
inline constexpr guest::Function<0x0076ce3c, u32(u32, u32)> record_173_address;

struct __attribute__((packed)) Frame_006a6408 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Frame_006a6408, word_0, 0x0);
GUEST_OFFSET(Frame_006a6408, word_4, 0x4);
GUEST_OFFSET(Frame_006a6408, word_8, 0x8);
GUEST_SIZE(Frame_006a6408, 0xc);

u32 f_006a6408(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_006a6408> frame;  // the original's stack frame
    u32 r4 = 0;
    u32 r0_24 = 0;
    u32 r1_9 = 0;
    u32 r8 = global_009b4a24_address;
    u32 r9 = *gptr<u32>(r8 + 4u);
    u32 data_base_3 = get_data_base(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    u32 r7 = data_base_3 + 0x53400u;  // (from the original)
    u32 r6 = 0u;
    do {
        r4 = 0u;
        do {
            u32 r0_2 = CellGrid__cell_at(r9, r4, r6, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_2 != 0) {
                u32 r0_3 = tile_address_0075db98(r7, r4, r6, r3);
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                *gptr<u16>(r0_2) = *gptr<u16>(r0_3);
            }
            r4 += 1u;
            guest::preempt();
        } while (r4 < 7u);
        r6 += 1u;
        guest::preempt();
    } while (r6 < 6u);
    u32 r5 = 0u;
    do {
        r4 = 0u;
        do {
            u32 r0_4 = call_00613704(r4, r5, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_4 != 0) {
                u32 r0_5 = block_at(r7, r4, r5, r3);
                u32 r0_6 = CellGrid__cell_at(r9, r4 + 1u, r5 + 1u, guest::cpu()->r[3]);
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_6 != 0) {
                    store_two_words_at_4_57bc20(r0_6, r0_5, 0u, r3);
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                }
            }
            r4 += 1u;
            guest::preempt();
        } while (r4 < 5u);
        r5 += 1u;
        guest::preempt();
    } while (r5 < 4u);
    u32 r0_7 = member_address_0x6480_(r7, guest::cpu()->r[1], r2, r3);
    *gptr<u32>(r9 + 0x28u) = r0_7;  // (from the original)
    u32 r0_8 = call_006f9e94(1u, r0_7);
    call_006a6f50(r0_8);
    call_0024246c(0u, 0u);
    r3 = guest::cpu()->r[3];
    r6 = 2u;
    u32 r11 = 0u;
    u32 r10 = 1u;
    do {
        u32 r4_1 = r6 & 0xffu;  // (from the original)
        r7 = gptr<u32>(r8)[r4_1];
        u32 r0_9 = CellGrid__cell_at(r7, 0u, 0u, r3);
        r3 = guest::cpu()->r[3];
        r9 = r0_9;
        if (r0_9 != 0) {
            u32 r0_10 = call_006fa728(r4_1, guest::cpu()->r[1], guest::cpu()->r[2], r3);
            u32 save_data_3 = get_save_data(r0_10, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            u32 r0_13 = block_or_first(save_data_3 + 0x5d900u, r0_10);  // (from the original)
            u32 r0_14 = call_006fb0cc(r4_1);
            u32 r0_15 = call_006fae98(r0_13, r0_14);
            frame->word_4 = r0_15;
            *gptr<u16>(r9) = u16(r0_15);
            u32 r0_16 = record_302_address_0030512c(r0_13, r0_14);
            r5 = 0u;
            frame->word_8 = r0_16;
            do {
                r4 = 0u;
                do {
                    u32 cell = grid_cell_address(frame->word_8, r4, r5, 0u);
                    frame->word_0 = r11;
                    GridCellSmall__place_item(r9, cell, r4 + 3u, r5 + 4u);
                    r4 += 1u;
                    guest::preempt();
                } while (r4 < 0xau);  // (from the original)
                r5 += 1u;
                guest::preempt();
            } while (r5 < 0xau);  // (from the original)
            r5 = 0u;
            do {
                r4 = 0u;
                do {
                    u32 cell_2 = grid_cell_address(frame->word_8, r4, r5, 1u);
                    frame->word_0 = r10;
                    GridCellSmall__place_item(r9, cell_2, r4 + 4u, r5 + 5u);
                    r4 += 1u;
                    guest::preempt();
                } while (r4 < 8u);
                r5 += 1u;
                guest::preempt();
            } while (r5 < 8u);
            u32 r0_21 = GridMap__large_cell_at(r7, 0u, 0u);
            r3 = guest::cpu()->r[3];
            if (r0_21 != 0) {
                u32 r0_22 = shared_load_splits(r0_21, guest::cpu()->r[1], guest::cpu()->r[2], r3);
                u32 r0_23 = call_001c2074(r0_22, frame->word_4);
                r3 = guest::cpu()->r[3];
                if (r0_23 != 0) {
                    load_block_a00(r0_21, r0_23, 0xa00u, r3);  // (from the original)
                    r3 = guest::cpu()->r[3];
                }
            }
        }
        r6 += 1u;
        guest::preempt();
    } while (r6 < 0x1au);  // (from the original)
    r6 = 0x1au;  // (from the original)
    do {
        u32 r4_2 = r6 & 0xffu;  // (from the original)
        r7 = gptr<u32>(r8)[r4_2];
        r0_24 = CellGrid__cell_at(r7, 0u, 0u, r3);
        r1_9 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
        r9 = r0_24;
        if (r0_24 != 0) {
            r10 = uxth(r6 + 0x13du);  // (from the original)
            *gptr<u16>(r9) = u16(r10);
            u32 save_data_4 = get_save_data(r9, r10, guest::cpu()->r[2], r3);
            u32 r0_26 = position_in_1b_to_1d(r4_2, 0xfff951c8u);  // (from the original)
            u32 r0_27 = record_173_address(save_data_4 + 0x6aeb8u, r0_26);  // (from the original)
            r5 = 0u;
            r11 = r5;
            frame->word_4 = r0_27 + 2u;
            do {
                r4 = 0u;
                do {
                    u32 cell_3 = grid_cell_address(frame->word_4, r4, r5, 0u);
                    frame->word_0 = r11;
                    GridCellSmall__place_item(r9, cell_3, r4 + 3u, r5 + 4u);
                    r4 += 1u;
                    guest::preempt();
                } while (r4 < 0xau);  // (from the original)
                r5 += 1u;
                guest::preempt();
            } while (r5 < 0xau);  // (from the original)
            r5 = 0u;
            r11 = 1u;
            do {
                r4 = 0u;
                do {
                    u32 cell_4 = grid_cell_address(frame->word_4, r4, r5, 1u);
                    frame->word_0 = r11;
                    GridCellSmall__place_item(r9, cell_4, r4 + 4u, r5 + 5u);
                    r4 += 1u;
                    guest::preempt();
                } while (r4 < 8u);
                r5 += 1u;
                guest::preempt();
            } while (r5 < 8u);
            r0_24 = GridMap__large_cell_at(r7, 0u, 0u);
            r1_9 = guest::cpu()->r[1];
            r3 = guest::cpu()->r[3];
            u32 r4_3 = r0_24;
            if (r0_24 != 0) {
                u32 r0_32 = shared_load_splits(r0_24, r1_9, guest::cpu()->r[2], r3);
                r0_24 = call_001c2074(r0_32, r10);
                r3 = guest::cpu()->r[3];
                r1_9 = r0_24;
                if (r0_24 != 0) {
                    r0_24 = load_block_a00(r4_3, r1_9, 0xa00u, r3);  // (from the original)
                    r1_9 = guest::cpu()->r[1];
                    r3 = guest::cpu()->r[3];
                }
            }
        }
        r6 += 1u;
        guest::preempt();
    } while (r6 < 0x1eu);  // (from the original)
    u32 data_base_4 = get_data_base(r0_24, r1_9, guest::cpu()->r[2], r3);
    sead__SafeStringBase_char___SafeStringBase_002e3bd4(data_base_4 + 0x6fe36u, 0x6fe36u);  // (from the original)
    return 1u;
}

}  // namespace d_006a6408
GUEST_EXPORT_FRAMED(0x006a6408, d_006a6408::f_006a6408, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_006a69a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a69a8 {

inline constexpr u32 global_009b4a24_address = 0x009b4a24u;
inline guest::global<u32, 0x009b4a24> global_009b4a24;

u32 f_006a69a8() {
    u32 r0_1 = *global_009b4a24;
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    return r0_1;
}

}  // namespace d_006a69a8
GUEST_EXPORT(0x006a69a8, d_006a69a8::f_006a69a8);

// f_006a69c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a69c0 {

inline constexpr u32 global_009b4aa0_address = 0x009b4aa0u;
inline guest::global<u32, 0x009b4aa0> global_009b4aa0;
inline constexpr guest::Function<0x00114b15, u32(u32, u32, u32, u32)> call_00114b14;
inline constexpr guest::Function<0x0022d64c, u32(u32, u32)> call_0022d64c;
inline constexpr guest::Function<0x002b836c, u32(u32, u32, u32, u32)> ishutfact2__BasicBuilder__BasicBuilder;

void f_006a69c0(u32 r0, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    ishutfact2__BasicBuilder__BasicBuilder(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    call_0022d64c(*global_009b4aa0, r0);
    u32 r0_2 = *gptr<u32>(r0 + 0x10u);  // (from the original)
    frame.release();
    call_00114b14(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
}

}  // namespace d_006a69c0
GUEST_EXPORT(0x006a69c0, d_006a69c0::f_006a69c0);

// f_006a6b48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a6b48 {

inline constexpr u32 global_009b4a24_address = 0x009b4a24u;
inline constexpr guest::Function<0x002ffb64, u32(u32)> free_memory;
inline constexpr guest::Function<0x005817f0, u32(u32, u32, u32, u32)> GridRect__visit_cells;
inline constexpr guest::Function<0x00581a18, u32(u32)> call_00581a18;

u32 f_006a6b48() {
    u32 r0_3 = 0;
    u32 r7 = 0u;
    u32 r6 = global_009b4a24_address;
    u32 r0_1 = *gptr<u32>(r6 + 0x7cu);  // (from the original)
    if (r0_1 != 0) {
        GridRect__visit_cells(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r0_2 = *gptr<u32>(r6 + 0x7cu);  // (from the original)
        if (r0_2 != 0) {
            call_00581a18(r0_2);
            free_memory(r0_2);
        }
        *gptr<u32>(r6 + 0x7cu) = r7;  // (from the original)
    }
    u32 r4 = 0x20u;  // (from the original)
    do {
        u32 r5_1 = r4 & 0xffu;  // (from the original)
        r0_3 = gptr<u32>(r6)[r5_1];
        if (r0_3 != 0) {
            GridRect__visit_cells(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            r0_3 = gptr<u32>(r6)[r5_1];
            if (r0_3 != 0) {
                call_00581a18(r0_3);
                r0_3 = free_memory(r0_3);
            }
            *gptr<u32>(r6 + (r5_1 << 2)) = r7;
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0x2au);  // (from the original)
    return r0_3;
}

}  // namespace d_006a6b48
GUEST_EXPORT_FRAMED(0x006a6b48, d_006a6b48::f_006a6b48, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_006a6cc8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a6cc8 {

inline constexpr u32 global_009526f8_address = 0x009526f8u;
inline guest::global<u32, 0x009526f8> global_009526f8;
inline constexpr guest::Function<0x001348cc, u32(u32, u32, u32, u32)> call_001348cc;

void f_006a6cc8(u32 r0) {
    call_001348cc(*global_009526f8, r0, 0x102au, guest::cpu()->r[3]);  // (from the original)
    return;  // (from the original)
}

}  // namespace d_006a6cc8
GUEST_EXPORT(0x006a6cc8, d_006a6cc8::f_006a6cc8);

// f_006a7174: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a7174 {

inline constexpr u32 global_009526ec_address = 0x009526ecu;
inline constexpr u32 global_009526f4_address = 0x009526f4u;
inline constexpr u32 global_009526f8_address = 0x009526f8u;
inline constexpr u32 global_009b4a24_address = 0x009b4a24u;
inline constexpr u32 global_009b4a9c_address = 0x009b4a9cu;
inline guest::global<u32, 0x009526f4> global_009526f4;
inline guest::global<u32, 0x009526f8> global_009526f8;
inline guest::global<u32, 0x009b4a9c> global_009b4a9c;
inline constexpr guest::Function<0x0012eacc, u32(u32, u32)> call_0012eacc;
inline constexpr guest::Function<0x002ffb64, u32(u32)> free_memory;
inline constexpr guest::Function<0x005817f0, u32(u32, u32, u32, u32)> GridRect__visit_cells;
inline constexpr guest::Function<0x00581a18, u32(u32, u32)> call_00581a18;

u32 f_006a7174(u32 r0_unused, u32 r1) {
    u32 r0_1 = *global_009b4a9c;
    if (r0_1 != 0) {
        r1 = *global_009526f4;
        if (r1 != 0) {
            GridRect__visit_cells(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            u32 r0_2 = *global_009b4a9c;
            if (r0_2 != 0) {
                call_00581a18(r0_2, r1);
                free_memory(r0_2);
                r1 = guest::cpu()->r[1];
            }
            *global_009b4a9c = *global_009526f4;
            *global_009526f4 = 0;
            r0_1 = *global_009526f8;
            if (r0_1 != 0) {
                call_0012eacc(r0_1, r1);
                r0_1 = free_memory(r0_1);
                r1 = guest::cpu()->r[1];
            }
            *global_009526f8 = 0;
        }
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_006a7174
GUEST_EXPORT_FRAMED(0x006a7174, d_006a7174::f_006a7174, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006a71ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a71ec {

inline constexpr u32 global_00952c50_address = 0x00952c50u;
inline guest::global<u32, 0x009526f4> global_009526f4;
inline guest::global<u32, 0x009526f8> global_009526f8;
inline guest::global<u32, 0x00952c50> global_00952c50;
inline guest::global<u32, 0x009b4a9c> global_009b4a9c;
inline constexpr guest::Function<0x002025bc, u32(u32, u32, u32, u32)> call_002025bc;
inline constexpr guest::Function<0x002ebce4, u32(u32)> construct_table_object;
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32)> allocate_from_heap_002fd108;

void f_006a71ec(u32 r0_unused, u32 r1) {
    u32 r4_1 = *global_00952c50;
    if (r4_1 != 0) {
        *global_009526f4 = *global_009b4a9c;
        u32 r0_1 = call_002025bc(r4_1, 4u, 4u, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0_1 != 0) {
            *global_009b4a9c = r0_1;
            if (*global_009526f8 == 0) {
                u32 block_2 = allocate_from_heap_002fd108(0x102au, r4_1, 4u);  // (from the original)
                u32 r0_3 = construct_table_object(block_2);
                r1 = guest::cpu()->r[1];
                *global_009526f8 = r0_3;
            }
        }
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_006a71ec
GUEST_EXPORT_FRAMED(0x006a71ec, d_006a71ec::f_006a71ec, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006a733c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a733c {

inline guest::global<u32, 0x0085f2e8> half_cell_x;
inline guest::global<u32, 0x0085f2ec> half_cell_z;
inline constexpr guest::Function<0x006c78b8, u32(u32, u32, u32)> call_006c78b8;

u32 f_006a733c(gptr<Float3> arg0, u32 r1, u32 r2) {
    float S1_1 = 0.0f;
    arg0->v[0] = float(s32(*half_cell_x + (r1 << 5)));
    arg0->v[1] = S1_1;
    float S0_1 = float(s32(*half_cell_z + (r2 << 5)));
    arg0->v[2] = S0_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    u32 r0_1 = call_006c78b8(r1, r2, 0u);
    float S0_2 = guest::cpu()->s[0];
    arg0->v[1] = S0_2;
    guest::cpu()->s[0] = S0_2;
    return r0_1;
}

}  // namespace d_006a733c
GUEST_EXPORT_FRAMED(0x006a733c, d_006a733c::f_006a733c, 0x4010);  // pushes {r4, lr} first, as the original

// f_006a739c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a739c {

inline guest::global<u32, 0x0085f2e8> half_cell_x;
inline guest::global<u32, 0x0085f2ec> half_cell_z;
inline constexpr guest::Function<0x006c7908, u32(u32, u32, u32, u32)> call_006c7908;

struct __attribute__((packed)) Frame_006a739c {
    u32 word_0;
};
GUEST_OFFSET(Frame_006a739c, word_0, 0x0);
GUEST_SIZE(Frame_006a739c, 0x4);

u32 f_006a739c(gptr<Float3> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_006a739c> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r6_1 = *half_cell_x;
    u32 r3_1 = *frame.at<u32>(0x18);  // (from the original)
    float S1_1 = 0.0f;
    arg0->v[0] = float(s32(r6_1 + (r3 + (r1 << 4) << 5)));
    arg0->v[1] = S1_1;
    float S0_1 = float(s32(*half_cell_z + ((r3_1 + (r2 << 4)) << 5)));
    arg0->v[2] = S0_1;
    frame->word_0 = 0;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    u32 r0_1 = call_006c7908(r1, r2, r3, r3_1);
    float S0_2 = guest::cpu()->s[0];
    arg0->v[1] = S0_2;
    guest::cpu()->s[0] = S0_2;
    return r0_1;
}

}  // namespace d_006a739c
GUEST_EXPORT_FRAMED(0x006a739c, d_006a739c::f_006a739c, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_006a7410: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a7410 {

inline constexpr u32 global_009526f8_address = 0x009526f8u;
inline guest::global<u32, 0x009526f8> global_009526f8;
inline constexpr guest::Function<0x002e3bd4, u32(u32, u32, u32, u32)> sead__SafeStringBase_char___SafeStringBase_002e3bd4;

u32 f_006a7410() {
    sead__SafeStringBase_char___SafeStringBase_002e3bd4(*global_009526f8, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return 1u;
}

}  // namespace d_006a7410
GUEST_EXPORT_FRAMED(0x006a7410, d_006a7410::f_006a7410, 0x4010);  // pushes {r4, lr} first, as the original

// f_006a742c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a742c {

inline constexpr u32 global_009526ec_address = 0x009526ecu;
inline constexpr u32 global_009526f8_address = 0x009526f8u;
inline guest::global<u32, 0x009526f8> global_009526f8;
inline constexpr guest::Function<0x00114c9d, u32(u32)> call_00114c9c;
inline constexpr guest::Function<0x002e38b4, u32(u32, u32)> call_002e38b4;
inline constexpr guest::Function<0x002e3bd4, u32(u32)> sead__SafeStringBase_char___SafeStringBase_002e3bd4;
inline constexpr guest::Function<0x0055cabc, u32(u32, u32, u32, u32)> Random__seed;
inline constexpr guest::Function<0x0055cb58, u32(u32)> Xorshift128__next_0055cb58;
inline constexpr guest::Function<0x005d1ee0, u32(u32)> call_005d1ee0;

u32 f_006a742c(u32 r0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r1_1 = *global_009526f8;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    Random__seed(frame.at(0).addr(), r0, guest::cpu()->r[2], guest::cpu()->r[3]);
    call_002e38b4(*global_009526f8, frame.at(0).addr());
    sead__SafeStringBase_char___SafeStringBase_002e3bd4(*global_009526f8);
    u32 r0_5 = Xorshift128__next_0055cb58(frame.at(0).addr());
    call_005d1ee0(r0_5);
    u32 r0_7 = Xorshift128__next_0055cb58(frame.at(0).addr());
    call_00114c9c(r0_7);
    return 1u;
}

}  // namespace d_006a742c
GUEST_EXPORT_FRAMED(0x006a742c, d_006a742c::f_006a742c, 0x4010);  // pushes {r4, lr} first, as the original

// f_006a8280: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a8280 {

struct __attribute__((packed)) Object_006a8280_0 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
    u8 byte_4;
    u8 byte_5;
    u8 unknown_6[0x2];  // (not used here)
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
};
GUEST_OFFSET(Object_006a8280_0, byte_0, 0x0);
GUEST_OFFSET(Object_006a8280_0, byte_1, 0x1);
GUEST_OFFSET(Object_006a8280_0, byte_2, 0x2);
GUEST_OFFSET(Object_006a8280_0, byte_3, 0x3);
GUEST_OFFSET(Object_006a8280_0, byte_4, 0x4);
GUEST_OFFSET(Object_006a8280_0, byte_5, 0x5);
GUEST_OFFSET(Object_006a8280_0, word_8, 0x8);
GUEST_OFFSET(Object_006a8280_0, word_c, 0xc);
GUEST_OFFSET(Object_006a8280_0, word_10, 0x10);
GUEST_OFFSET(Object_006a8280_0, word_14, 0x14);
GUEST_OFFSET(Object_006a8280_0, word_18, 0x18);
GUEST_OFFSET(Object_006a8280_0, word_1c, 0x1c);
GUEST_OFFSET(Object_006a8280_0, word_20, 0x20);
GUEST_OFFSET(Object_006a8280_0, word_24, 0x24);

struct __attribute__((packed)) Local_006a8280_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_006a8280_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_006a8280_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_006a8280_ea_1, word_8, 0x8);

struct __attribute__((packed)) Local_006a8280_r0_3 {
    u32 word_0;
    u8 unknown_4[0x1c];  // (not used here)
    u32 word_20;
    u32 word_24;
    u32 word_28;
};
GUEST_OFFSET(Local_006a8280_r0_3, word_0, 0x0);
GUEST_OFFSET(Local_006a8280_r0_3, word_20, 0x20);
GUEST_OFFSET(Local_006a8280_r0_3, word_24, 0x24);
GUEST_OFFSET(Local_006a8280_r0_3, word_28, 0x28);

struct __attribute__((packed)) Local_006a8280_r0_6 {
    u8 unknown_0[0x214];  // (not used here)
    u8 byte_214;
    u8 byte_215;
    u8 unknown_216[0x2];  // (not used here)
    u32 word_218;
};
GUEST_OFFSET(Local_006a8280_r0_6, byte_214, 0x214);
GUEST_OFFSET(Local_006a8280_r0_6, byte_215, 0x215);
GUEST_OFFSET(Local_006a8280_r0_6, word_218, 0x218);

struct __attribute__((packed)) Local_006a8280_r4_2 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
    u8 byte_4;
    u8 byte_5;
};
GUEST_OFFSET(Local_006a8280_r4_2, byte_0, 0x0);
GUEST_OFFSET(Local_006a8280_r4_2, byte_1, 0x1);
GUEST_OFFSET(Local_006a8280_r4_2, byte_2, 0x2);
GUEST_OFFSET(Local_006a8280_r4_2, byte_3, 0x3);
GUEST_OFFSET(Local_006a8280_r4_2, byte_4, 0x4);
GUEST_OFFSET(Local_006a8280_r4_2, byte_5, 0x5);

inline constexpr u32 vtable_RoadSearchCand_15__15__IRootLocateRelative___Cand = 0x008fa3a4u;
inline constexpr guest::Function<0x002f74c8, u32(u32)> read_global_byte_2;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x00307040, u32(u32, u32, u32)> construct_search_cand_core;

u32 IRootLocateRelative___Cand__Cand_006a8280(gptr<Object_006a8280_0> arg0) {
    arg0->byte_0 = 0;
    arg0->byte_1 = 0;
    arg0->byte_2 = 0;
    arg0->byte_3 = 0;
    arg0->byte_4 = 0xff;  // (from the original)
    arg0->byte_5 = 0xff;  // (from the original)
    arg0->word_8 = 0xf;  // (from the original)
    arg0->word_14 = arg0.addr() + 0x28u;  // (from the original)
    arg0->word_18 = 0;
    arg0->word_1c = 0;
    arg0->word_c = 0xf;  // (from the original)
    arg0->word_10 = 0xe1;  // (from the original)
    u32 r4_1 = arg0.addr() + 0x20u;  // (from the original)
    arg0->word_20 = 0;
    arg0->word_24 = arg0.addr() + 0x11bcu;  // (from the original)
    u32 r0_2 = for_each_element(arg0.addr() + 0x28u, 0x274724u, 0x14u, 0xe1u);  // (from the original)
    gptr<Local_006a8280_r0_3> r0_3 = gptr<Local_006a8280_r0_3>(r0_2 + 0x1194u);  // (from the original)
    construct_search_cand_core(r0_3.addr(), 0xe1u, r0_3.addr() + 0x2cu);  // (from the original)
    gptr<Local_006a8280_ea_1> ea_1 = gptr<Local_006a8280_ea_1>(r0_3.addr() + 0x14u);  // (from the original)
    ea_1->word_0 = 0xf;  // (from the original)
    ea_1->word_4 = 0xf;  // (from the original)
    ea_1->word_8 = 0;
    gptr<Local_006a8280_r4_2> r4_2 = gptr<Local_006a8280_r4_2>(r0_3.addr() - 0x11bcu);  // (from the original)
    r0_3->word_0 = vtable_RoadSearchCand_15__15__IRootLocateRelative___Cand;
    r0_3->word_20 = 0;
    r0_3->word_24 = 0;
    r0_3->word_28 = 0;
    r4_2->byte_2 = 0x10;  // (from the original)
    r4_2->byte_3 = 0x10;  // (from the original)
    r4_2->byte_4 = 0x51;  // (from the original)
    r4_2->byte_5 = 0x51;  // (from the original)
    u32 r0_4 = r4_2->byte_0;
    u32 r1_1 = r4_2->byte_1;
    u32 r3_2 = r4_2->byte_4;
    if (r0_4 < 0x10u) {  // (from the original)
        r0_4 = 0x10u;  // (from the original)
    } else if (r0_4 > 0x51u) {  // (from the original)
        r0_4 = r3_2;
    }
    r4_2->byte_0 = u8(r0_4);
    u32 r0_5 = r4_2->byte_3;
    u32 r2_2 = r4_2->byte_5;
    if (r1_1 < 0x10u) {  // (from the original)
        r1_1 = r0_5;
    } else if (r1_1 > 0x51u) {  // (from the original)
        r1_1 = r2_2;
    }
    gptr<Local_006a8280_r0_6> r0_6 = gptr<Local_006a8280_r0_6>(r4_2.addr() + 0x1000u);  // (from the original)
    r4_2->byte_1 = u8(r1_1);
    r0_6->byte_214 = 0;
    r0_6->byte_215 = 0;
    r0_6->word_218 = 0;
    u32 r0_7 = read_global_byte_2(r0_6.addr());
    if (r0_7 == 1u) {
        r4_2->byte_4 = 0x51;  // (from the original)
        r4_2->byte_5 = 0x51;  // (from the original)
        r4_2->byte_2 = 0;
        r4_2->byte_3 = 0;
        u32 r0_8 = r4_2->byte_0;
        u32 r1_2 = r4_2->byte_1;
        if (r0_8 > 0x51u) {  // (from the original)
            r0_8 = 0x51u;  // (from the original)
        }
        r4_2->byte_0 = u8(r0_8);
        u32 r0_9 = r4_2->byte_5;
        if (r1_2 > 0x51u) {  // (from the original)
            r1_2 = r0_9;
        }
        r4_2->byte_1 = u8(r1_2);
    }
    return r4_2.addr();
}

}  // namespace d_006a8280
GUEST_EXPORT_FRAMED(0x006a8280, d_006a8280::IRootLocateRelative___Cand__Cand_006a8280, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_006a83fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a83fc {

inline constexpr guest::Function<0x006a8598, u32(u32, u32, u32, u32)> call_006a8598;

struct __attribute__((packed)) Frame_006a83fc {
    u32 word_0;
    u32 word_4;
    float float_8;
    float float_c;
    float float_10;
    u8 unknown_14[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006a83fc, word_0, 0x0);
GUEST_OFFSET(Frame_006a83fc, word_4, 0x4);
GUEST_OFFSET(Frame_006a83fc, float_8, 0x8);
GUEST_OFFSET(Frame_006a83fc, float_c, 0xc);
GUEST_OFFSET(Frame_006a83fc, float_10, 0x10);
GUEST_SIZE(Frame_006a83fc, 0x18);

u32 f_006a83fc(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_006a83fc> frame;  // the original's stack frame
    float S0_1 = 1.0f;
    frame->float_8 = S0_1;
    frame->float_c = S0_1;
    frame->float_10 = S0_1;
    frame->word_0 = r2;
    frame->word_4 = frame.at(8).addr();
    u32 r2_1 = *gptr<u32>((r3 << 3) + 0x8653fcu);  // (from the original)
    guest::cpu()->s[0] = S0_1;
    call_006a8598(guest::cpu()->r[0], r3, r2_1, r1);
    return guest::cpu()->r[0];
}

}  // namespace d_006a83fc
GUEST_EXPORT_FRAMED(0x006a83fc, d_006a83fc::f_006a83fc, 0x4010);  // pushes {r4, lr} first, as the original

// f_006a8444: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a8444 {

inline constexpr guest::Function<0x006a8598, u32(u32, u32, u32, u32)> call_006a8598;

struct __attribute__((packed)) Frame_006a8444 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006a8444, word_0, 0x0);
GUEST_OFFSET(Frame_006a8444, word_4, 0x4);
GUEST_SIZE(Frame_006a8444, 0xc);

u32 f_006a8444(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_006a8444> frame;  // the original's stack frame
    frame->word_0 = r2;
    frame->word_4 = r3;
    u32 r1_1 = *frame.at<u32>(0x10);  // (from the original)
    call_006a8598(guest::cpu()->r[0], r1_1, *gptr<u32>((r1_1 << 3) + 0x8653fcu), r1);  // (from the original)
    return guest::cpu()->r[0];
}

}  // namespace d_006a8444
GUEST_EXPORT_FRAMED(0x006a8444, d_006a8444::f_006a8444, 0x4000);  // pushes {lr} first, as the original

// f_006a8474: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a8474 {

struct __attribute__((packed)) Object_006a8474_0 {
    u8 unknown_0[0x184];  // (not used here)
    u32 word_184;
};
GUEST_OFFSET(Object_006a8474_0, word_184, 0x184);

struct __attribute__((packed)) Local_006a8474_r0_1 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Local_006a8474_r0_1, word_c, 0xc);
GUEST_OFFSET(Local_006a8474_r0_1, word_10, 0x10);

inline constexpr guest::Function<0x00207190, u32(u32, u32, u32, u32)> call_00207190;
inline constexpr guest::Function<0x002e5bec, u32(u32, u32)> call_002e5bec;

void f_006a8474(gptr<Object_006a8474_0> arg0, u32 r1) {
    guest::StackFrame frame(0x30);  // the original's stack frame
    gptr<Local_006a8474_r0_1> r0_1 = gptr<Local_006a8474_r0_1>(arg0.addr() + arg0->word_184 * 0x18u + 4u);  // (from the original)
    u32 r3_1 = r0_1->word_c;
    if (r3_1 == 0 || r0_1->word_10 != *gptr<u32>(r3_1 + 0xcu)) {  // (from the original)
        return;
    }
    call_00207190(frame.at(0).addr(), r1, guest::cpu()->r[2], 1u);
    call_002e5bec(arg0.addr() + arg0->word_184 * 0x18u + 4u, frame.at(0).addr());  // (from the original)
}

}  // namespace d_006a8474
GUEST_EXPORT_FRAMED(0x006a8474, d_006a8474::f_006a8474, 0x4010);  // pushes {r4, lr} first, as the original

// f_006a84e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a84e8 {

inline constexpr guest::Function<0x006a8598, u32(u32, u32, u32, u32)> call_006a8598;

struct __attribute__((packed)) Frame_006a84e8 {
    u32 word_0;
    u32 word_4;
    float float_8;
    float float_c;
    float float_10;
    u8 unknown_14[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006a84e8, word_0, 0x0);
GUEST_OFFSET(Frame_006a84e8, word_4, 0x4);
GUEST_OFFSET(Frame_006a84e8, float_8, 0x8);
GUEST_OFFSET(Frame_006a84e8, float_c, 0xc);
GUEST_OFFSET(Frame_006a84e8, float_10, 0x10);
GUEST_SIZE(Frame_006a84e8, 0x18);

u32 f_006a84e8(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_006a84e8> frame;  // the original's stack frame
    float S0_1 = 1.0f;
    frame->float_8 = S0_1;
    frame->float_c = S0_1;
    frame->float_10 = S0_1;
    frame->word_0 = r2;
    frame->word_4 = frame.at(8).addr();
    u32 r2_1 = *gptr<u32>((r3 << 3) + 0x8653fcu + 4u);  // (from the original)
    guest::cpu()->s[0] = S0_1;
    call_006a8598(guest::cpu()->r[0], r3, r2_1, r1);
    return guest::cpu()->r[0];
}

}  // namespace d_006a84e8
GUEST_EXPORT_FRAMED(0x006a84e8, d_006a84e8::f_006a84e8, 0x4010);  // pushes {r4, lr} first, as the original

// f_006a8534: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a8534 {

inline constexpr guest::Function<0x006a8598, u32(u32, u32, u32, u32)> call_006a8598;

struct __attribute__((packed)) Frame_006a8534 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006a8534, word_0, 0x0);
GUEST_OFFSET(Frame_006a8534, word_4, 0x4);
GUEST_SIZE(Frame_006a8534, 0xc);

u32 f_006a8534(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_006a8534> frame;  // the original's stack frame
    u32 r1_1 = *frame.at<u32>(0x10);  // (from the original)
    frame->word_0 = r2;
    frame->word_4 = r3;
    call_006a8598(guest::cpu()->r[0], r1_1, *gptr<u32>((r1_1 << 3) + 0x8653fcu + 4u), r1);  // (from the original)
    return guest::cpu()->r[0];
}

}  // namespace d_006a8534
GUEST_EXPORT_FRAMED(0x006a8534, d_006a8534::f_006a8534, 0x4000);  // pushes {lr} first, as the original

// f_006a8568: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a8568 {

struct __attribute__((packed)) Object_006a8568_0 {
    u8 unknown_0[0x188];  // (not used here)
    u32 word_188;
};
GUEST_OFFSET(Object_006a8568_0, word_188, 0x188);

inline constexpr guest::Function<0x002e6450, u32(u32, u32, u32, u32)> call_002e6450;

void f_006a8568(gptr<Object_006a8568_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r5 = r0;
    u32 r4 = 0u;
    arg0->word_188 = r1;
    do {
        call_002e6450(r5 + r4 * 0x18u + 4u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1 = guest::cpu()->r[1];
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 0x10);  // (from the original)
}

}  // namespace d_006a8568
GUEST_EXPORT_FRAMED(0x006a8568, d_006a8568::f_006a8568, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006a8954: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a8954 {

inline constexpr u32 vtable_FootMark_rec = 0x008f8b60u;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;

u32 FootMark__destructor(gptr<FootMark_rec> foot_mark_rec) {
    foot_mark_rec->word_0 = vtable_FootMark_rec;
    destroy_array_elements(foot_mark_rec.addr() + 4u, 0x2e6944u, 0x18u, 0x10u);  // (from the original)
    return foot_mark_rec.addr();
}

}  // namespace d_006a8954
GUEST_EXPORT_FRAMED(0x006a8954, d_006a8954::FootMark__destructor, 0x4010);  // pushes {r4, lr} first, as the original

// f_006a8988: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a8988 {

struct __attribute__((packed)) sead__SafeStringBase_char_ {
    u8 unknown_0[0x18];  // (not used here)
    u32 word_18;
    u8 unknown_1c[0x24];  // (not used here)
    u32 word_40;
};
GUEST_OFFSET(sead__SafeStringBase_char_, word_18, 0x18);
GUEST_OFFSET(sead__SafeStringBase_char_, word_40, 0x40);

inline constexpr u32 vtable_sead__SafeStringBase_char_ = 0x009047f8u;
inline constexpr u32 global_00952ae4_address = 0x00952ae4u;
inline guest::global<u32, 0x00952ae4> global_00952ae4;
inline constexpr guest::Function<0x00125b38, u32(u32, u32, u32, u32)> call_00125b38;
inline constexpr guest::Function<0x0031758c, u32(u32, u32, u32, u32)> HeapHolder__recreate;

struct __attribute__((packed)) Frame_006a8988 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Frame_006a8988, word_0, 0x0);
GUEST_OFFSET(Frame_006a8988, word_4, 0x4);
GUEST_OFFSET(Frame_006a8988, word_8, 0x8);
GUEST_OFFSET(Frame_006a8988, word_c, 0xc);
GUEST_SIZE(Frame_006a8988, 0x10);

void sead__SafeStringBase_char___SafeStringBase_006a8988(gptr<sead__SafeStringBase_char_> safe_string_base_char, u32 r1) {
    guest::StackFrameOf<Frame_006a8988> frame;  // the original's stack frame
    if (safe_string_base_char->word_18 != 0) {
        return;
    }
    frame->word_c = 0x6a89f4;  // (from the original)
    frame->word_8 = vtable_sead__SafeStringBase_char_;
    frame->word_0 = 1;
    frame->word_4 = 0;
    HeapHolder__recreate(safe_string_base_char.addr() + 0x3cu, 0x1080u, r1, frame.at(8).addr());  // (from the original)
    call_00125b38(safe_string_base_char.addr() + 0x14u, *global_00952ae4, safe_string_base_char->word_40, 0u);  // (from the original)
}

}  // namespace d_006a8988
GUEST_EXPORT_FRAMED(0x006a8988, d_006a8988::sead__SafeStringBase_char___SafeStringBase_006a8988, 0x4010);  // pushes {r4, lr} first, as the original

// f_006a8a0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a8a0c {

struct __attribute__((packed)) sead__SafeStringBase_char_ {
    u8 unknown_0[0x28];  // (not used here)
    u32 word_28;
    u8 unknown_2c[0x1c];  // (not used here)
    u32 word_48;
};
GUEST_OFFSET(sead__SafeStringBase_char_, word_28, 0x28);
GUEST_OFFSET(sead__SafeStringBase_char_, word_48, 0x48);

inline constexpr u32 vtable_sead__SafeStringBase_char_ = 0x009047f8u;
inline constexpr u32 global_00952ae8_address = 0x00952ae8u;
inline guest::global<u32, 0x00952ae8> global_00952ae8;
inline constexpr guest::Function<0x00125b38, u32(u32, u32, u32, u32)> call_00125b38;
inline constexpr guest::Function<0x0031758c, u32(u32, u32, u32, u32)> HeapHolder__recreate;

struct __attribute__((packed)) Frame_006a8a0c {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Frame_006a8a0c, word_0, 0x0);
GUEST_OFFSET(Frame_006a8a0c, word_4, 0x4);
GUEST_OFFSET(Frame_006a8a0c, word_8, 0x8);
GUEST_OFFSET(Frame_006a8a0c, word_c, 0xc);
GUEST_SIZE(Frame_006a8a0c, 0x10);

u32 sead__SafeStringBase_char___SafeStringBase_006a8a0c(gptr<sead__SafeStringBase_char_> safe_string_base_char, u32 r1) {
    guest::StackFrameOf<Frame_006a8a0c> frame;  // the original's stack frame
    if (safe_string_base_char->word_28 != 0) {
        return 1u;
    }
    frame->word_c = 0x6a8a78;  // (from the original)
    frame->word_8 = vtable_sead__SafeStringBase_char_;
    frame->word_0 = 1;
    frame->word_4 = 0;
    HeapHolder__recreate(safe_string_base_char.addr() + 0x44u, 0x4000u, r1, frame.at(8).addr());  // (from the original)
    u32 r0_3 = call_00125b38(safe_string_base_char.addr() + 0x24u, *global_00952ae8, safe_string_base_char->word_48, 0u);  // (from the original)
    return r0_3;
}

}  // namespace d_006a8a0c
GUEST_EXPORT_FRAMED(0x006a8a0c, d_006a8a0c::sead__SafeStringBase_char___SafeStringBase_006a8a0c, 0x4010);  // pushes {r4, lr} first, as the original

// f_006a8a90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a8a90 {

inline constexpr guest::Function<0x0013864c, u32(u32, u32, u32, u32)> Handle__release;
inline constexpr guest::Function<0x002f747c, u32(u32, u32, u32, u32)> ObjectOwner__release_object;

void f_006a8a90(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    Handle__release(r0 + 0x14u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    frame.release();
    ObjectOwner__release_object(r0 + 0x3cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return;  // (from the original)
}

}  // namespace d_006a8a90
GUEST_EXPORT(0x006a8a90, d_006a8a90::f_006a8a90);

// f_006a8aac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a8aac {

struct __attribute__((packed)) sead__SafeStringBase_char_ {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u8 unknown_c[0x2c];  // (not used here)
    u32 word_38;
};
GUEST_OFFSET(sead__SafeStringBase_char_, word_8, 0x8);
GUEST_OFFSET(sead__SafeStringBase_char_, word_38, 0x38);

inline constexpr u32 vtable_sead__SafeStringBase_char_ = 0x009047f8u;
inline constexpr u32 global_00952ae0_address = 0x00952ae0u;
inline guest::global<u32, 0x00952ae0> global_00952ae0;
inline constexpr guest::Function<0x00125b38, u32(u32, u32, u32, u32)> call_00125b38;
inline constexpr guest::Function<0x0031758c, u32(u32, u32, u32, u32)> HeapHolder__recreate;

struct __attribute__((packed)) Frame_006a8aac {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Frame_006a8aac, word_0, 0x0);
GUEST_OFFSET(Frame_006a8aac, word_4, 0x4);
GUEST_OFFSET(Frame_006a8aac, word_8, 0x8);
GUEST_OFFSET(Frame_006a8aac, word_c, 0xc);
GUEST_SIZE(Frame_006a8aac, 0x10);

void sead__SafeStringBase_char___SafeStringBase_006a8aac(gptr<sead__SafeStringBase_char_> safe_string_base_char, u32 r1) {
    guest::StackFrameOf<Frame_006a8aac> frame;  // the original's stack frame
    if (safe_string_base_char->word_8 != 0) {
        return;
    }
    frame->word_c = 0x6a8b18;  // (from the original)
    frame->word_8 = vtable_sead__SafeStringBase_char_;
    frame->word_0 = 1;
    frame->word_4 = 0;
    HeapHolder__recreate(safe_string_base_char.addr() + 0x34u, 0x1600u, r1, frame.at(8).addr());  // (from the original)
    call_00125b38(safe_string_base_char.addr() + 4u, *global_00952ae0, safe_string_base_char->word_38, 0u);
}

}  // namespace d_006a8aac
GUEST_EXPORT_FRAMED(0x006a8aac, d_006a8aac::sead__SafeStringBase_char___SafeStringBase_006a8aac, 0x4010);  // pushes {r4, lr} first, as the original

// f_006a8b34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a8b34 {

inline constexpr guest::Function<0x0013864c, u32(u32, u32, u32, u32)> Handle__release;
inline constexpr guest::Function<0x002f747c, u32(u32, u32, u32, u32)> ObjectOwner__release_object;

u32 f_006a8b34(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    Handle__release(r0 + 0x24u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    frame.release();
    return ObjectOwner__release_object(r0 + 0x44u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_006a8b34
GUEST_EXPORT(0x006a8b34, d_006a8b34::f_006a8b34);

// f_006a8b50: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a8b50 {

inline constexpr guest::Function<0x0013864c, u32(u32, u32, u32, u32)> Handle__release;
inline constexpr guest::Function<0x002f747c, u32(u32, u32, u32, u32)> ObjectOwner__release_object;

void f_006a8b50(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    Handle__release(r0 + 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    frame.release();
    ObjectOwner__release_object(r0 + 0x34u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return;  // (from the original)
}

}  // namespace d_006a8b50
GUEST_EXPORT(0x006a8b50, d_006a8b50::f_006a8b50);

// f_006a8d28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a8d28 {

struct __attribute__((packed)) Object_006a8d28_0 {
    u8 unknown_0[0x254];  // (not used here)
    u32 word_254;
    u32 word_258;
};
GUEST_OFFSET(Object_006a8d28_0, word_254, 0x254);
GUEST_OFFSET(Object_006a8d28_0, word_258, 0x258);

inline constexpr guest::Function<0x004bef3c, u32(u32, u32)> call_004bef3c;

u32 f_006a8d28(gptr<Object_006a8d28_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r2_1 = arg0->word_254;
    u32 zf_1 = r2_1 == 0;
    if (!zf_1) {
        r0 = arg0->word_258;
        zf_1 = r0 == 0;
    }
    if (zf_1 || (u32(*gptr<u8>(r2_1 + 0xb7u)) & 1u) == 0 || (u32(*gptr<u8>(r0 + 0xb7u)) & 1u) == 0) {  // (from the original)
        return 0u;
    }
    return call_004bef3c(r0, guest::cpu()->r[1]);
}

}  // namespace d_006a8d28
GUEST_EXPORT(0x006a8d28, d_006a8d28::f_006a8d28);

// f_006a97a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a97a0 {

struct __attribute__((packed)) Object_006a97a0_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_006a97a0_0, word_0, 0x0);
GUEST_OFFSET(Object_006a97a0_0, word_4, 0x4);
GUEST_OFFSET(Object_006a97a0_0, word_8, 0x8);
GUEST_OFFSET(Object_006a97a0_0, word_c, 0xc);

inline guest::global<u32, 0x0085f2c4> global_0085f2c4;
inline guest::global<u32, 0x0085f2c8> global_0085f2c8;
inline constexpr guest::Function<0x006a5e04, u32(u32, u32, u32)> block_corner_position;

u32 f_006a97a0(gptr<Object_006a97a0_0> arg0, u32 r1, u32 r2) {
    arg0->word_0 = r1;
    arg0->word_4 = r2;
    arg0->word_8 = r1 * *global_0085f2c4;
    arg0->word_c = r2 * *global_0085f2c8;
    block_corner_position((arg0.addr() + 0xcu) + 4u, r1, r2);  // (from the original)
    return 1u;
}

}  // namespace d_006a97a0
GUEST_EXPORT_FRAMED(0x006a97a0, d_006a97a0::f_006a97a0, 0x4010);  // pushes {r4, lr} first, as the original

// f_006a9834: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a9834 {

struct __attribute__((packed)) Object_006a9834_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_006a9834_0, word_0, 0x0);
GUEST_OFFSET(Object_006a9834_0, word_4, 0x4);
GUEST_OFFSET(Object_006a9834_0, word_8, 0x8);
GUEST_OFFSET(Object_006a9834_0, word_c, 0xc);

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> clear_aligned;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;

u32 f_006a9834(gptr<Object_006a9834_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    arg0->word_0 = 0;
    arg0->word_4 = 0;
    arg0->word_8 = 0;
    arg0->word_c = 0;
    clear_aligned(arg0.addr() + 0x1cu, 0xa00u, r2, r3);  // (from the original)
    u32 r0_3 = for_each_element(arg0.addr() + 0x1cu, 0x60d240u, 0xau, 0x100u);  // (from the original)
    return r0_3 - 0x1cu;  // (from the original)
}

}  // namespace d_006a9834
GUEST_EXPORT_FRAMED(0x006a9834, d_006a9834::f_006a9834, 0x4010);  // pushes {r4, lr} first, as the original

// f_006a987c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a987c {

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;

u32 f_006a987c(u32 r0) {
    destroy_array_elements(r0 + 0x1cu, 0x60d260u, 0xau, 0x100u);  // (from the original)
    return r0;
}

}  // namespace d_006a987c
GUEST_EXPORT_FRAMED(0x006a987c, d_006a987c::f_006a987c, 0x4010);  // pushes {r4, lr} first, as the original

// f_006a98b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a98b0 {

struct __attribute__((packed)) Object_006a98b0_0 {
    u8 byte_0;
    u8 unknown_1[0x3];  // (not used here)
    float float_4;
    float float_8;
    u8 unknown_c[0x4];  // (not used here)
    u32 word_10;
    u16 half_14;
    u16 half_16;
    u8 byte_18;
};
GUEST_OFFSET(Object_006a98b0_0, byte_0, 0x0);
GUEST_OFFSET(Object_006a98b0_0, float_4, 0x4);
GUEST_OFFSET(Object_006a98b0_0, float_8, 0x8);
GUEST_OFFSET(Object_006a98b0_0, word_10, 0x10);
GUEST_OFFSET(Object_006a98b0_0, half_14, 0x14);
GUEST_OFFSET(Object_006a98b0_0, half_16, 0x16);
GUEST_OFFSET(Object_006a98b0_0, byte_18, 0x18);

inline guest::global<u32, 0x006a9960> global_006a9960;

u32 f_006a98b0(gptr<Object_006a98b0_0> arg0, u32 r1, u32 r2, u32 r3) {
    float S0_2 = 0;
    float S1_1 = arg0->float_4;
    arg0->word_10 = *global_006a9960;
    float S0_1 = fabsf(S1_1);
    if (r1 != 0) {
        if (s32(std::bit_cast<u32>(S0_1)) > 0x34000000) {  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->s[0] = S0_1;
            guest::cpu()->s[1] = S1_1;
            return 0u;
        }
        arg0->byte_18 = u8(r1);
        S0_2 = 1.0f;
        arg0->float_4 = S0_2;
        if (r2 == 0) {
            arg0->float_8 = S0_2;
            guest::cpu()->r[1] = r1;
            guest::cpu()->s[0] = S0_2;
            guest::cpu()->s[1] = S1_1;
            return 0u;
        }
        if (r3 == 0) {
            arg0->byte_0 = 0;
            guest::cpu()->r[1] = r1;
            guest::cpu()->s[0] = S0_2;
            guest::cpu()->s[1] = S1_1;
            return 1u;
        }
        arg0->byte_0 = 1;
        arg0->half_14 = 0;
        arg0->half_16 = 0xf;  // (from the original)
        guest::cpu()->r[1] = 0xfu;  // (from the original)
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_1;
        return 1u;
    }
    arg0->byte_0 = 0;
    if (s32(std::bit_cast<u32>(S0_1)) <= 0x34000000) {  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return 0u;
    }
    arg0->byte_18 = u8(r1);
    S0_2 = 0.0f;
    arg0->float_4 = S0_2;
    if (r2 != 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_1;
        return 1u;
    }
    arg0->float_8 = S0_2;
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_1;
    return 0u;
}

}  // namespace d_006a98b0
GUEST_EXPORT_FRAMED(0x006a98b0, d_006a98b0::f_006a98b0, 0x10);  // pushes {r4} first, as the original

// f_006a996c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a996c {

struct __attribute__((packed)) Object_006a996c_0 {
    u8 byte_0;
    u8 unknown_1[0x3];  // (not used here)
    float float_4;
    float float_8;
    u8 unknown_c[0x4];  // (not used here)
    u32 word_10;
    u8 unknown_14[0x4];  // (not used here)
    u8 byte_18;
};
GUEST_OFFSET(Object_006a996c_0, byte_0, 0x0);
GUEST_OFFSET(Object_006a996c_0, float_4, 0x4);
GUEST_OFFSET(Object_006a996c_0, float_8, 0x8);
GUEST_OFFSET(Object_006a996c_0, word_10, 0x10);
GUEST_OFFSET(Object_006a996c_0, byte_18, 0x18);

inline guest::global<u32, 0x006a99d0> global_006a99d0;

void f_006a996c(gptr<Object_006a996c_0> arg0, u32 r1) {
    arg0->word_10 = *global_006a99d0;
    if (r1 != 0) {
        float S0_1 = fabsf(arg0->float_4);
        if (s32(std::bit_cast<u32>(S0_1)) > 0x34000000) {  // (from the original)
            guest::cpu()->s[0] = S0_1;
            return;
        }
        arg0->byte_18 = u8(r1);
        float S0_2 = 1.0f;
        arg0->float_4 = S0_2;
        arg0->float_8 = S0_2;
        guest::cpu()->s[0] = S0_2;
        return;
    }
    float S0_3 = arg0->float_4;
    arg0->byte_0 = 0;
    float S0_4 = fabsf(S0_3);
    if (s32(std::bit_cast<u32>(S0_4)) <= 0x34000000) {  // (from the original)
        guest::cpu()->s[0] = S0_4;
        return;
    }
    arg0->byte_18 = u8(r1);
    float S0_5 = 0.0f;
    arg0->float_4 = S0_5;
    arg0->float_8 = S0_5;
    guest::cpu()->s[0] = S0_5;
}

}  // namespace d_006a996c
GUEST_EXPORT(0x006a996c, d_006a996c::f_006a996c);

// f_006a99dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a99dc {

struct __attribute__((packed)) Object_006a99dc_0 {
    u8 byte_0;
    u8 unknown_1[0x3];  // (not used here)
    float float_4;
    float float_8;
    u8 unknown_c[0x4];  // (not used here)
    float float_10;
    u16 half_14;
    u16 half_16;
    u8 byte_18;
};
GUEST_OFFSET(Object_006a99dc_0, byte_0, 0x0);
GUEST_OFFSET(Object_006a99dc_0, float_4, 0x4);
GUEST_OFFSET(Object_006a99dc_0, float_8, 0x8);
GUEST_OFFSET(Object_006a99dc_0, float_10, 0x10);
GUEST_OFFSET(Object_006a99dc_0, half_14, 0x14);
GUEST_OFFSET(Object_006a99dc_0, half_16, 0x16);
GUEST_OFFSET(Object_006a99dc_0, byte_18, 0x18);


u32 f_006a99dc(gptr<Object_006a99dc_0> arg0, u32 r1, u32 r2) {
    float S1_1 = 0.2f;
    float S2_1 = 0.0f;
    float S0_1 = 1.0f;
    arg0->float_10 = S1_1;
    arg0->float_8 = S2_1;
    arg0->float_4 = S0_1;
    arg0->byte_18 = 1;
    if (r1 == 0) {
        arg0->float_8 = S0_1;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return 0u;
    }
    if (r2 == 0) {
        arg0->byte_0 = 0;
        guest::cpu()->r[1] = 0u;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return 1u;
    }
    arg0->byte_0 = 1;
    arg0->half_14 = 0;
    arg0->half_16 = 0xf;  // (from the original)
    guest::cpu()->r[1] = 0u;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return 1u;
}

}  // namespace d_006a99dc
GUEST_EXPORT(0x006a99dc, d_006a99dc::f_006a99dc);

// f_006a9a40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006a9a40 {

struct __attribute__((packed)) Object_006a9a40_0 {
    u8 byte_0;
    u8 unknown_1[0x3];  // (not used here)
    float float_4;
    float float_8;
    u8 unknown_c[0x4];  // (not used here)
    float float_10;
    u8 unknown_14[0x4];  // (not used here)
    u8 byte_18;
};
GUEST_OFFSET(Object_006a9a40_0, byte_0, 0x0);
GUEST_OFFSET(Object_006a9a40_0, float_4, 0x4);
GUEST_OFFSET(Object_006a9a40_0, float_8, 0x8);
GUEST_OFFSET(Object_006a9a40_0, float_10, 0x10);
GUEST_OFFSET(Object_006a9a40_0, byte_18, 0x18);


u32 f_006a9a40(gptr<Object_006a9a40_0> arg0, u32 r1) {
    float S1_1 = 0.2f;
    float S0_1 = 0.0f;
    arg0->float_10 = S1_1;
    arg0->byte_0 = 0;
    arg0->float_4 = S0_1;
    if (r1 != 0) {
        S0_1 = 1.0f;
    }
    arg0->byte_18 = 0;
    arg0->float_8 = S0_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return r1 != 0;
}

}  // namespace d_006a9a40
GUEST_EXPORT(0x006a9a40, d_006a9a40::f_006a9a40);

// f_006aa3e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006aa3e0 {

struct __attribute__((packed)) Local_006aa3e0_r0_1 {
    u32 word_0;
    u8 unknown_4[0x5c];  // (not used here)
    u32 word_60;
    float float_64;
    float float_68;
    u8 unknown_6c[0x8];  // (not used here)
    u32 word_74;
};
GUEST_OFFSET(Local_006aa3e0_r0_1, word_0, 0x0);
GUEST_OFFSET(Local_006aa3e0_r0_1, word_60, 0x60);
GUEST_OFFSET(Local_006aa3e0_r0_1, float_64, 0x64);
GUEST_OFFSET(Local_006aa3e0_r0_1, float_68, 0x68);
GUEST_OFFSET(Local_006aa3e0_r0_1, word_74, 0x74);

struct __attribute__((packed)) Local_006aa3e0_r1_1 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_006aa3e0_r1_1, float_0, 0x0);
GUEST_OFFSET(Local_006aa3e0_r1_1, float_4, 0x4);

inline constexpr u32 vtable_MailWork__BodyLineEngine = 0x0090af70u;
inline constexpr guest::Function<0x005e9e58, u32(u32)> store_word_constant_pack_0x0_005e9e58;
inline constexpr guest::Function<0x00601a20, u32(u32)> construct_msg_engine;

void MailWork__BodyLineEngine__BodyLineEngine_006aa3e0(u32 r0, float S0, float S1) {
    gptr<Local_006aa3e0_r0_1> r0_1 = gptr<Local_006aa3e0_r0_1>(construct_msg_engine(r0));
    float S0_1 = 0.0f;
    r0_1->word_0 = vtable_MailWork__BodyLineEngine;
    r0_1->word_60 = 0;
    r0_1->float_64 = S0_1;
    float S1_1 = 1.0f;
    r0_1->float_68 = S0_1;
    gptr<Local_006aa3e0_r1_1> r1_1 = gptr<Local_006aa3e0_r1_1>(r0_1.addr() + 0x6cu);  // (from the original)
    r1_1->float_0 = S0_1;
    r1_1->float_4 = S1_1;
    r0_1->word_74 = 0;
    u32 r0_2 = r0_1.addr() + 0x78u;  // (from the original)
    *gptr<u32>(r0_2) = 0;
    u32 r0_3 = r0_2 + 4u;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    store_word_constant_pack_0x0_005e9e58(r0_3);
    *gptr<u8>(r0_3 + 4u) = 0;
}

}  // namespace d_006aa3e0
GUEST_EXPORT_FRAMED(0x006aa3e0, d_006aa3e0::MailWork__BodyLineEngine__BodyLineEngine_006aa3e0, 0x4010);  // pushes {r4, lr} first, as the original

// f_006aa46c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006aa46c {

inline constexpr u32 vtable_MailWork__BodyLineEngine = 0x0090af70u;
inline constexpr guest::Function<0x00601a88, u32(u32, u32)> destroy_msg_engine;

u32 MailWork__BodyLineEngine__destructor(gptr<MailWork__BodyLineEngine> body_line_engine) {
    body_line_engine->word_0 = vtable_MailWork__BodyLineEngine;
    return destroy_msg_engine(body_line_engine.addr(), vtable_MailWork__BodyLineEngine);
}

}  // namespace d_006aa46c
GUEST_EXPORT(0x006aa46c, d_006aa46c::MailWork__BodyLineEngine__destructor);

// f_006ab00c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ab00c {

struct __attribute__((packed)) Local_006ab00c_r0_3 {
    u8 byte_0;
};
GUEST_OFFSET(Local_006ab00c_r0_3, byte_0, 0x0);

inline constexpr guest::Function<0x0020bf0c, u32(u32, u32, u32, u32)> record_2160_address_0020bf0c;
inline constexpr guest::Function<0x0020bf68, u32(u32, u32, u32, u32)> call_0020bf68;
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> get_current_player;
inline constexpr guest::Function<0x002ff8b0, u32(u32)> slot_value;
inline constexpr guest::Function<0x004e4ac4, u32(u32, u32)> call_004e4ac4;
inline constexpr guest::Function<0x0071287c, u32(u32)> any_pattern_in_use;

u32 f_006ab00c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r1_2 = 0;
    *frame.at<u32>(0) = r3;
    u32 player_2 = get_current_player(r0, r1, r2, r3);
    if (player_2 != 0) {
        u32 r5 = player_2 + 0x2cu;  // (from the original)
        player_2 = any_pattern_in_use(r5);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (player_2 != 0) {
            u32 r4 = 0u;
            u32 r6 = 1u;
            *frame.at<u16>(0) = 0;
            do {
                u32 r0_2 = record_2160_address_0020bf0c(r5, r4, r2, r3);
                r1_2 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (*gptr<u8>(r0_2 + 0x86cu) != 0) {  // (from the original)
                    r1_2 = frame.at(0).addr();
                    if (r4 < 0xau) {  // (from the original)
                        gptr<Local_006ab00c_r0_3> r0_3 = gptr<Local_006ab00c_r0_3>(r1_2 + (r4 >> 3));
                        r2 = r4 & 7u;
                        r1_2 = u32(r0_3->byte_0) | lsl_r(r6, r2 & 0xff);  // (from the original)
                        r0_3->byte_0 = u8(r1_2);
                    }
                }
                r4 += 1u;
                guest::preempt();
            } while (r4 < 0xau);  // (from the original)
            call_0020bf68(r5, r1_2, r2, r3);
            u32 r0_4 = slot_value(4u);
            call_004e4ac4(r0_4, frame.at(0).addr());
            player_2 = 1u;
        }
    }
    return player_2;
}

}  // namespace d_006ab00c
GUEST_EXPORT_FRAMED(0x006ab00c, d_006ab00c::f_006ab00c, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_006ac088: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ac088 {

struct __attribute__((packed)) Object_006ac088_0 {
    u8 unknown_0[0x4c8];  // (not used here)
    u8 byte_4c8;
};
GUEST_OFFSET(Object_006ac088_0, byte_4c8, 0x4c8);

inline constexpr guest::Function<0x001aae00, u32(u32, u32, u32, u32)> call_001aae00;

void f_006ac088(gptr<Object_006ac088_0> arg0, u32 r1) {
    if (arg0->byte_4c8 == 0) {
        arg0->byte_4c8 = 0;
        return;
    }
    call_001aae00(arg0.addr(), 2u, guest::cpu()->r[2], guest::cpu()->r[3]);
    arg0->byte_4c8 = 0;
}

}  // namespace d_006ac088
GUEST_EXPORT_FRAMED(0x006ac088, d_006ac088::f_006ac088, 0x4010);  // pushes {r4, lr} first, as the original

// f_006ac35c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ac35c {

struct __attribute__((packed)) Local_006ac35c_r6_1 {
    u8 byte_0;
};
GUEST_OFFSET(Local_006ac35c_r6_1, byte_0, 0x0);

inline constexpr guest::Function<0x002052f8, u32(u32, u32, u32, u32)> sead__SafeStringBase_char___SafeStringBase_002052f8;
inline constexpr guest::Function<0x002132d0, u32(u32, u32)> call_002132d0;

u32 AcNpcSpJonny__MyModel__virtual_12(gptr<NpcModel> npc_model, u32 r1) {
    npc_model->word_360 = r1;
    u32 r0_1 = sead__SafeStringBase_char___SafeStringBase_002052f8(npc_model.addr(), r1, guest::cpu()->r[2], 0u);
    if (r0_1 != 0) {
        u32 r5_1 = npc_model->word_4cc;
        gptr<Local_006ac35c_r6_1> r6_1 = gptr<Local_006ac35c_r6_1>(npc_model.addr() + 0x281u);  // (from the original)
        if ((u32(npc_model->byte_281) & 1u) != 0) {
            u32 r0_3 = call_002132d0(r5_1 + 0x1b0u, npc_model.addr() + 0x264u);  // (from the original)
            if (r0_3 == 0) {
                return 0u;
            }
        }
        if (*gptr<u32>(r5_1 + 0x1984u) != 0) {  // (from the original)
            if ((u32(r6_1->byte_0) >> 2u & 1u) != 0) {
                u32 r0_5 = call_002132d0(r5_1 + 0x1980u, npc_model.addr() + 0x26cu);  // (from the original)
                if (r0_5 == 0) {
                    return 0u;
                }
            }
        }
        u32 r0_6 = r6_1->byte_0;
        if ((r0_6 >> 1u & 1u) != 0) {
            u32 r0_8 = call_002132d0(r5_1 + 0x7020u, npc_model.addr() + 0x274u);  // (from the original)
            if (r0_8 == 0) {
                return 0u;
            }
        }
        r0_1 = 1u;
    }
    return r0_1;
}

}  // namespace d_006ac35c
GUEST_EXPORT_FRAMED(0x006ac35c, d_006ac35c::AcNpcSpJonny__MyModel__virtual_12, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_006ac760: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ac760 {

struct __attribute__((packed)) Object_006ac760_0 {
    u8 unknown_0[0x390];  // (not used here)
    u32 word_390;
};
GUEST_OFFSET(Object_006ac760_0, word_390, 0x390);

inline constexpr guest::Function<0x00138744, u32(u32, u32, u32, u32)> destroy_load_split_base_part;
inline constexpr guest::Function<0x004f1270, u32(u32)> model_virtual_3;

void f_006ac760(gptr<Object_006ac760_0> arg0) {
    destroy_load_split_base_part(arg0.addr() + 0x3d4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    model_virtual_3(arg0.addr() + 0x384u);  // (from the original)
    arg0->word_390 = 3;
}

}  // namespace d_006ac760
GUEST_EXPORT_FRAMED(0x006ac760, d_006ac760::f_006ac760, 0x4010);  // pushes {r4, lr} first, as the original

// f_006ac784: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ac784 {

struct __attribute__((packed)) Local_006ac784_r0_4 {
    u8 unknown_0[0x281];  // (not used here)
    u8 byte_281;
    u8 unknown_282[0x246];  // (not used here)
    u8 byte_4c8;
    u8 unknown_4c9[0x3];  // (not used here)
    u32 word_4cc;
    u8 byte_4d0;
    u8 byte_4d1;
};
GUEST_OFFSET(Local_006ac784_r0_4, byte_281, 0x281);
GUEST_OFFSET(Local_006ac784_r0_4, byte_4c8, 0x4c8);
GUEST_OFFSET(Local_006ac784_r0_4, word_4cc, 0x4cc);
GUEST_OFFSET(Local_006ac784_r0_4, byte_4d0, 0x4d0);
GUEST_OFFSET(Local_006ac784_r0_4, byte_4d1, 0x4d1);

struct __attribute__((packed)) Local_006ac784_r1_1 {
    u8 byte_0;
};
GUEST_OFFSET(Local_006ac784_r1_1, byte_0, 0x0);

inline constexpr u32 vtable_NpcModel = 0x008f8c1cu;
inline constexpr u32 vtable_GmoLoader = 0x008f9600u;
inline constexpr guest::Function<0x0012ca7c, u32(u32)> construct_load_split;
inline constexpr guest::Function<0x00206190, u32(u32, u32, u32, u32)> NpcModelBase__NpcModelBase;
inline constexpr guest::Function<0x004edd3c, u32(u32, u32)> construct_skeletal_model;

u32 NpcModel__NpcModel(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = NpcModelBase__NpcModelBase(r0, r1, r2, r3);
    *gptr<u32>(r0_1) = vtable_NpcModel;
    u32 r0_2 = r0_1 + 0x384u;  // (from the original)
    construct_skeletal_model(r0_2, vtable_NpcModel);
    u32 ea_1 = r0_2 + 0xcu;  // (from the original)
    *gptr<u32>(ea_1) = 3;
    u32 r0_3 = ea_1 + 0x44u;  // (from the original)
    construct_load_split(r0_3);
    *gptr<u32>(r0_3) = vtable_GmoLoader;
    gptr<Local_006ac784_r0_4> r0_4 = gptr<Local_006ac784_r0_4>(r0_3 - 0x3d4u);  // (from the original)
    r0_4->byte_4c8 = 0;
    r0_4->word_4cc = 0;
    r0_4->byte_4d0 = 0;
    r0_4->byte_4d1 = 1;
    u32 r3_2 = r0_4->byte_281;
    gptr<Local_006ac784_r1_1> r1_1 = gptr<Local_006ac784_r1_1>(r0_4.addr() + 0x281u);  // (from the original)
    u32 r3_3 = r1 == 0 ? r3_2 & ~1u : r3_2 | 1u;
    r1_1->byte_0 = u8(r3_3);
    u32 r3_4 = r3_3 & 0xffu;  // (from the original)
    u32 r3_5 = r2 == 0 ? r3_4 & ~4u : r3_4 | 4u;
    u32 r2_2 = r3_5 & 0xffu;  // (from the original)
    r1_1->byte_0 = u8(r3_5);
    r1_1->byte_0 = u8(r3 == 0 ? r2_2 & ~2u : r2_2 | 2u);
    guest::cpu()->r[1] = r1_1.addr();
    return r0_4.addr();
}

}  // namespace d_006ac784
GUEST_EXPORT_FRAMED(0x006ac784, d_006ac784::NpcModel__NpcModel, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006ac834: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ac834 {

inline constexpr u32 vtable_HumanModel = 0x008eb174u;
inline constexpr u32 vtable_NpcModelBase = 0x008ed6acu;
inline constexpr u32 vtable_NpcModel = 0x008f8c1cu;
inline constexpr guest::Function<0x001abcd4, u32(u32, u32)> call_001abcd4;
inline constexpr guest::Function<0x00317e2c, u32(u32, u32)> g3d__ResourceLoader__destructor;
inline constexpr guest::Function<0x0031e204, u32(u32, u32)> HumanFaceAnimControl__destructor;
inline constexpr guest::Function<0x004edd6c, u32(u32, u32, u32, u32)> call_004edd6c;
inline constexpr guest::Function<0x004edd84, u32(u32)> set_base_vtable_004edd84;
inline constexpr guest::Function<0x004ef50c, u32(u32)> g3d__GroupSkeletalAnim__destructor;

u32 NpcModel__destructor(gptr<HumanModel> human_model) {
    human_model->word_0 = vtable_NpcModel;
    u32 r0_1 = human_model.addr() + 0x384u;  // (from the original)
    call_004edd6c(r0_1, vtable_NpcModel, guest::cpu()->r[2], guest::cpu()->r[3]);
    human_model->word_0 = vtable_NpcModelBase;
    HumanFaceAnimControl__destructor(r0_1 - 0xd4u, vtable_NpcModelBase);  // (from the original)
    u32 r5_1 = ~0u;
    human_model->word_274 = 0;
    human_model->word_278 = r5_1;
    human_model->word_26c = 0;
    human_model->word_270 = r5_1;
    human_model->word_264 = 0;
    human_model->word_268 = r5_1;
    g3d__ResourceLoader__destructor(r0_1 - 0x228u, r0_1 - 0x120u);  // (from the original)
    human_model->word_154 = 0;
    human_model->word_158 = r5_1;
    human_model->word_14c = 0;
    human_model->word_150 = r5_1;
    human_model->word_144 = 0;
    human_model->word_148 = r5_1;
    human_model->word_0 = vtable_HumanModel;
    call_001abcd4(r0_1 - 0x384u, vtable_HumanModel);  // (from the original)
    g3d__GroupSkeletalAnim__destructor(r0_1 - 0x2b8u);  // (from the original)
    set_base_vtable_004edd84(r0_1 - 0x30cu);  // (from the original)
    return r0_1 - 0x384u;  // (from the original)
}

}  // namespace d_006ac834
GUEST_EXPORT_FRAMED(0x006ac834, d_006ac834::NpcModel__destructor, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006ac8e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ac8e8 {

struct __attribute__((packed)) Object_006ac8e8_0 {
    u8 unknown_0[0x14];  // (not used here)
    float float_14;
    float float_18;
    float float_1c;
    float float_20;
    float float_24;
    float float_28;
    u32 word_2c;
};
GUEST_OFFSET(Object_006ac8e8_0, float_14, 0x14);
GUEST_OFFSET(Object_006ac8e8_0, float_18, 0x18);
GUEST_OFFSET(Object_006ac8e8_0, float_1c, 0x1c);
GUEST_OFFSET(Object_006ac8e8_0, float_20, 0x20);
GUEST_OFFSET(Object_006ac8e8_0, float_24, 0x24);
GUEST_OFFSET(Object_006ac8e8_0, float_28, 0x28);
GUEST_OFFSET(Object_006ac8e8_0, word_2c, 0x2c);


void f_006ac8e8(gptr<Object_006ac8e8_0> arg0) {
    float S1_1 = 3.4028235e38f;
    arg0->word_2c = 0;
    float S2_1 = 0.0f;
    arg0->float_14 = S1_1;
    float S0_1 = -3.4028235e38f;
    arg0->float_1c = S1_1;
    arg0->float_18 = S2_1;
    arg0->float_20 = S0_1;
    arg0->float_28 = S0_1;
    arg0->float_24 = S2_1;
    guest::cpu()->r[1] = 0u;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_006ac8e8
GUEST_EXPORT(0x006ac8e8, d_006ac8e8::f_006ac8e8);

// f_006ac950: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ac950 {

struct __attribute__((packed)) Object_006ac950_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u8 unknown_8[0x8];  // (not used here)
    u32 word_10;
    float float_14;
    float float_18;
    float float_1c;
    float float_20;
    float float_24;
    float float_28;
    u32 word_2c;
    u32 word_30;
};
GUEST_OFFSET(Object_006ac950_0, word_4, 0x4);
GUEST_OFFSET(Object_006ac950_0, word_10, 0x10);
GUEST_OFFSET(Object_006ac950_0, float_14, 0x14);
GUEST_OFFSET(Object_006ac950_0, float_18, 0x18);
GUEST_OFFSET(Object_006ac950_0, float_1c, 0x1c);
GUEST_OFFSET(Object_006ac950_0, float_20, 0x20);
GUEST_OFFSET(Object_006ac950_0, float_24, 0x24);
GUEST_OFFSET(Object_006ac950_0, float_28, 0x28);
GUEST_OFFSET(Object_006ac950_0, word_2c, 0x2c);
GUEST_OFFSET(Object_006ac950_0, word_30, 0x30);

struct __attribute__((packed)) Local_006ac950_r0_1 {
    u32 word_0;
    u8 byte_4;
};
GUEST_OFFSET(Local_006ac950_r0_1, word_0, 0x0);
GUEST_OFFSET(Local_006ac950_r0_1, byte_4, 0x4);

struct __attribute__((packed)) Local_006ac950_r0_2 {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_006ac950_r0_2, word_14, 0x14);
GUEST_OFFSET(Local_006ac950_r0_2, word_18, 0x18);
GUEST_OFFSET(Local_006ac950_r0_2, word_1c, 0x1c);

inline constexpr u32 global_009502f8_address = 0x009502f8u;
inline constexpr guest::Function<0x006f7e90, u32(u32, u32)> append_to_list;
inline constexpr guest::Function<0x00770c10, u32(u32, u32)> call_00770c10;

u32 f_006ac950(gptr<Object_006ac950_0> arg0, u32 r1, float S0, float S1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    gptr<Local_006ac950_r0_1> r0_1 = gptr<Local_006ac950_r0_1>(arg0->word_4);
    if (r0_1.addr() != 0) {
        r1 = 0u;
        S1 = 3.4028235e38f;
        arg0->word_2c = r1;
        arg0->word_30 = r1;
        float S2_1 = 0.0f;
        arg0->float_14 = S1;
        S0 = -3.4028235e38f;
        arg0->float_1c = S1;
        arg0->float_18 = S2_1;
        arg0->float_20 = S0;
        arg0->float_28 = S0;
        arg0->float_24 = S2_1;
        if (r0_1->byte_4 == 2u) {
            gptr<Local_006ac950_r0_2> r0_2 = gptr<Local_006ac950_r0_2>(arg0->word_10);
            r1 = arg0->word_4;
            if (r0_2.addr() != 0) {
                *gptr<u32>(r1 + 8u) = r0_2->word_14;
                *gptr<u32>(r1 + 0xcu) = r0_2->word_18;  // (from the original)
                *gptr<u32>(r1 + 0x10u) = r0_2->word_1c;  // (from the original)
            }
        }
        r0_1 = gptr<Local_006ac950_r0_1>(global_009502f8_address);
        u32 r5_1 = r0_1->word_0;
        if (r5_1 != 0) {
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            r0_1 = gptr<Local_006ac950_r0_1>(call_00770c10(r5_1 + 0x14u, r1));  // (from the original)
            r1 = guest::cpu()->r[1];
            S0 = guest::cpu()->s[0];
            S1 = guest::cpu()->s[1];
            if (r0_1.addr() == 0) {
                frame.release();
                return append_to_list(r5_1 + 0x14u, arg0.addr());  // (from the original)
            }
        }
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0_1.addr();
}

}  // namespace d_006ac950
GUEST_EXPORT(0x006ac950, d_006ac950::f_006ac950);

// f_006aca78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006aca78 {

inline constexpr u32 vtable_ObjcBody = 0x008f8c74u;
inline constexpr guest::Function<0x006f7e64, u32(u32)> collision__World__Body__Body_006f7e64;

u32 ObjcBody__ObjcBody(gptr<ObjcBody> objc_body) {
    collision__World__Body__Body_006f7e64(objc_body.addr());
    objc_body->word_10 = 0;
    objc_body->word_0 = vtable_ObjcBody;
    objc_body->word_2c = 0;
    objc_body->word_30 = 0;
    objc_body->word_34 = 0;
    objc_body->word_38 = 0;
    objc_body->word_3c = 0;
    guest::cpu()->r[1] = 0u;
    return objc_body.addr();
}

}  // namespace d_006aca78
GUEST_EXPORT_FRAMED(0x006aca78, d_006aca78::ObjcBody__ObjcBody, 0x4010);  // pushes {r4, lr} first, as the original

// f_006acabc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006acabc {

inline constexpr guest::Function<0x006f7e8c, u32(u32, u32)> do_nothing_006f7e8c;

u32 ObjcBody__destructor() {
    return do_nothing_006f7e8c(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_006acabc
GUEST_EXPORT(0x006acabc, d_006acabc::ObjcBody__destructor);

// f_006acac0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006acac0 {

struct __attribute__((packed)) Object_006acac0_0 {
    u8 unknown_0[0x6340];  // (not used here)
    u32 word_6340;
    u8 unknown_6344[0x15];  // (not used here)
    u8 byte_6359;
};
GUEST_OFFSET(Object_006acac0_0, word_6340, 0x6340);
GUEST_OFFSET(Object_006acac0_0, byte_6359, 0x6359);

struct __attribute__((packed)) Local_006acac0_r0_3 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_006acac0_r0_3, byte_b7, 0xb7);

inline constexpr guest::Function<0x002fd6bc, u32(u32, u32, u32, u32)> script__WordFix_33u___WordFix_002fd6bc;

void f_006acac0(gptr<Object_006acac0_0> arg0, u32 r1) {
    u32 r0_2 = script__WordFix_33u___WordFix_002fd6bc(arg0.addr() + 0xe30u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    arg0->byte_6359 = u8(r0_2);
    gptr<Local_006acac0_r0_3> r0_3 = gptr<Local_006acac0_r0_3>(arg0->word_6340);
    u32 r1_1 = u32(r0_3->byte_b7) & 0xfeu;  // (from the original)
    r0_3->byte_b7 = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_006acac0
GUEST_EXPORT_FRAMED(0x006acac0, d_006acac0::f_006acac0, 0x4010);  // pushes {r4, lr} first, as the original

// f_006acf28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006acf28 {

struct __attribute__((packed)) Object_006acf28_0 {
    u8 unknown_0[0x6340];  // (not used here)
    u32 word_6340;
    u8 unknown_6344[0x4];  // (not used here)
    u32 word_6348;
    u8 unknown_634c[0xc];  // (not used here)
    u8 byte_6358;
};
GUEST_OFFSET(Object_006acf28_0, word_6340, 0x6340);
GUEST_OFFSET(Object_006acf28_0, word_6348, 0x6348);
GUEST_OFFSET(Object_006acf28_0, byte_6358, 0x6358);

struct __attribute__((packed)) Local_006acf28_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_006acf28_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_006acf28_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_006acf28_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_006acf28_ea_1, word_c, 0xc);

struct __attribute__((packed)) Local_006acf28_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_006acf28_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_006acf28_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_006acf28_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_006acf28_ea_2, word_c, 0xc);

struct __attribute__((packed)) Local_006acf28_r0_1 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_006acf28_r0_1, byte_b7, 0xb7);

struct __attribute__((packed)) Local_006acf28_r0_2 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_006acf28_r0_2, byte_b7, 0xb7);

struct __attribute__((packed)) Local_006acf28_r1_1 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_006acf28_r1_1, byte_b7, 0xb7);

inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> Layout__virtual_3;

void f_006acf28(gptr<Object_006acf28_0> arg0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_006acf28_ea_1> ea_1 = gptr<Local_006acf28_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r6;
    ea_1->word_c = r14;
    r5 = r0;
    gptr<Local_006acf28_r0_1> r0_1 = gptr<Local_006acf28_r0_1>(arg0->word_6340);
    r0_1->byte_b7 = u8((arg0->byte_6358 == 0 ? 1u : 0u) | u32(r0_1->byte_b7) & 0xfeu);  // (from the original)
    gptr<Local_006acf28_r1_1> r1_1 = gptr<Local_006acf28_r1_1>(arg0->word_6348);
    u32 r3 = u32(r1_1->byte_b7) & 0xfeu;  // (from the original)
    r1_1->byte_b7 = u8(u32(arg0->byte_6358) | r3);
    if (arg0->byte_6358 == 0) {
        r4 = 0u;
        do {
            u32 r1_2 = r5 + r4 * 0x11u * 0x30u;  // (from the original)
            gptr<Local_006acf28_r0_2> r0_2 = gptr<Local_006acf28_r0_2>(*gptr<u32>(r1_2 + 0x1808u));  // (from the original)
            u32 r2_1 = u32(r0_2->byte_b7) & 0xfeu;  // (from the original)
            r0_2->byte_b7 = u8(r2_1);
            Layout__virtual_3(r1_2 + 0x16bcu, r1_2, r2_1, r3);  // (from the original)
            r1_1 = gptr<Local_006acf28_r1_1>(guest::cpu()->r[1]);
            r3 = guest::cpu()->r[3];
            r4 += 1u;
            guest::preempt();
        } while (r4 < 0x18u);  // (from the original)
    }
    gptr<Local_006acf28_ea_2> ea_2 = gptr<Local_006acf28_ea_2>(frame.at(0).addr());
    u32 r4_1 = ea_2->word_0;
    u32 r5_1 = ea_2->word_4;
    u32 r6_1 = ea_2->word_8;
    guest::cpu()->r[1] = r1_1.addr();
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
}

}  // namespace d_006acf28
GUEST_EXPORT(0x006acf28, d_006acf28::f_006acf28);

// f_006acfc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006acfc4 {

struct __attribute__((packed)) Object_006acfc4_1 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(Object_006acfc4_1, byte_0, 0x0);
GUEST_OFFSET(Object_006acfc4_1, byte_1, 0x1);

inline constexpr u32 vtable_script__WordFix_64u_ = 0x0090a228u;
inline constexpr u32 message_store_address = 0x0095deccu;
inline guest::global<u32, 0x0095decc> message_store;
inline constexpr guest::Function<0x001b98e0, u32(u32, u32)> call_001b98e0;
inline constexpr guest::Function<0x001b9964, u32(u32, u32, u32)> call_001b9964;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> get_current_player;
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32)> script__construct_word_ptr;
inline constexpr guest::Function<0x00568a80, u32(u32, u32)> find_of_type_b;
inline constexpr guest::Function<0x005e2e50, u32(u32, u32)> start_message;
inline constexpr guest::Function<0x005e2f94, u32(u32)> call_005e2f94;
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32)> LinkOwner__unlink;
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;
inline constexpr guest::Function<0x005f4bfc, u32(u32)> construct_script_word;
inline constexpr guest::Function<0x006ad3a0, u32(u32, u32, u32)> call_006ad3a0;

struct __attribute__((packed)) Frame_006acfc4 {
    u32 word_0;
    u8 unknown_4[0x98];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006acfc4, word_0, 0x0);
GUEST_SIZE(Frame_006acfc4, 0x9c);

void script__WordFix_64u___WordFix_006acfc4(u32 r0, gptr<Object_006acfc4_1> arg1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_006acfc4> frame;  // the original's stack frame
    u32 r1 = arg1.addr();
    u32 res_1 = 0;
    u32 r3_5 = 0;
    u32 r5 = r0;
    u32 player_2 = get_current_player(r0, r1, r2, r3);
    u32 r6 = arg1->byte_0;
    u32 r7 = *gptr<u8>(player_2 + 0x55d2u);  // (from the original)
    u32 r9 = arg1->byte_1;
    u32 r0_2 = frame.at(0).addr();
    script__construct_word_ptr(r0_2, frame.at(0x18).addr(), 0x40u);  // (from the original)
    u32 r8 = vtable_script__WordFix_64u_;
    *gptr<u32>(r0_2) = r8;
    u32 r0_3 = r0_2 + 0xcu;  // (from the original)
    construct_script_word(r0_3);
    clear_aligned(r0_3 + 0xcu, 0x80u);  // (from the original)
    r2 = 0x8906ecu;  // (from the original)
    r0 = (r0_3 - 0xcu) + 0x16u;  // (from the original)
    r1 = 0x20u;  // (from the original)
    do {
        res_1 = r1 - 1u;
        r1 = res_1;
        u32 r3_4 = *gptr<u16>(r2);
        *gptr<u16>(r0 + 2u) = u16(r3_4);
        r3_5 = *gptr<u16>(r2);
        u32 ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r3_5);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    call_005ea8f8(*message_store, 0u, r2, r3_5);
    if (r6 == r7) {
        call_001b9964(frame.at(0).addr(), r6, r9);
    } else {
        call_001b98e0(frame.at(0).addr(), r6);
    }
    LinkOwner__unlink(*message_store, 0u);
    u32 r0_10 = find_of_type_b(r5 + 0x4bcu, 0x6ad0f8u);  // (from the original)
    call_006ad3a0(r5, r0_10, frame.at(0).addr());
    u32 r0_11 = r5 + 0x6418u;  // (from the original)
    start_message(r0_11, frame.at(0).addr());
    call_005e2f94(r0_11);
    frame->word_0 = r8;
}

}  // namespace d_006acfc4
GUEST_EXPORT_FRAMED(0x006acfc4, d_006acfc4::script__WordFix_64u___WordFix_006acfc4, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_006adc30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006adc30 {

struct __attribute__((packed)) Object_006adc30_0 {
    u8 unknown_0[0x16b8];  // (not used here)
    u32 word_16b8;
    u8 unknown_16bc[0x4c80];  // (not used here)
    u32 word_633c;
};
GUEST_OFFSET(Object_006adc30_0, word_16b8, 0x16b8);
GUEST_OFFSET(Object_006adc30_0, word_633c, 0x633c);

struct __attribute__((packed)) Local_006adc30_r0_9 {
    u8 unknown_0[0x320];  // (not used here)
    u32 word_320;
};
GUEST_OFFSET(Local_006adc30_r0_9, word_320, 0x320);

inline constexpr guest::Function<0x002f6b14, u32(u32)> call_002f6b14;
inline constexpr guest::Function<0x002f6e14, u32(u32, u32, u32, u32)> ButtonActionControl__virtual_3;
inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32)> Layout__find_pane;
inline constexpr guest::Function<0x004b6dc8, u32(u32, u32, u32, u32)> DragIconList__remove;
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> notify_list_objects;
inline constexpr guest::Function<0x00568c10, u32(u32)> Layout__virtual_3;
inline constexpr guest::Function<0x005697e0, u32(u32, u32, u32, u32)> Animation__set_value;

void f_006adc30(gptr<Object_006adc30_0> arg0, u32 r1, u32 r2, u32 r3, float S0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r5_1 = arg0.addr() + 0x16b8u;  // (from the original)
    if (arg0->word_16b8 != 0x19u) {  // (from the original)
        u32 r1_1 = arg0->word_633c;
        u32 r0_1 = *gptr<u32>(r1_1 + 0xcu);  // (from the original)
        if (r0_1 != 0) {
            DragIconList__remove(r0_1, r1_1, r2, r3);
            r1_1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            S0 = guest::cpu()->s[0];
        }
        u32 r0_2 = arg0->word_16b8;
        u32 r0_3 = r0_2 + (r0_2 << 4);
        u32 r0_4 = arg0.addr() + (r0_3 + (r0_3 << 1) << 4);
        guest::cpu()->s[0] = S0;
        ButtonActionControl__virtual_3(r0_4 + 0x1908u, r1_1, r2, r3);  // (from the original)
        call_002f6b14(r0_4 + 0x1908u);  // (from the original)
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        u32 r0_7 = arg0->word_16b8;
        u32 r0_8 = r0_7 + (r0_7 << 4);
        gptr<Local_006adc30_r0_9> r0_9 = gptr<Local_006adc30_r0_9>(arg0.addr() + (r0_8 + (r0_8 << 1) << 4) + 0x16bcu);  // (from the original)
        r1 = r0_9->word_320 & ~8u;
        r0_9->word_320 = r1;
        arg0->word_16b8 = 0x19;  // (from the original)
    }
    if (*gptr<u8>(arg0.addr() + 0x9c8u) == 1u) {  // (from the original)
        u32 r0_10 = arg0.addr() + 0x9acu;  // (from the original)
        float S0_2 = 0.0f;
        guest::cpu()->s[0] = S0_2;
        Animation__set_value(r0_10, r1, r2, r3);
        u32 r0_11 = arg0.addr() + 0x798u;  // (from the original)
        Layout__virtual_3(r0_11);
        u32 pane_2 = Layout__find_pane(r0_11, 0x881ae4u, 1u);  // (from the original)
        frame.release();
        notify_list_objects(pane_2, r0_10, pane_2, 0u);
        return;
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
}

}  // namespace d_006adc30
GUEST_EXPORT(0x006adc30, d_006adc30::f_006adc30);

// f_006add20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006add20 {

inline constexpr u32 vtable_script__WordFix_40u_ = 0x0090a030u;
inline constexpr u32 vtable_script__WordFix_9u_ = 0x0090a3e8u;
inline constexpr u32 message_store_address = 0x0095deccu;
inline guest::global<u32, 0x0095decc> message_store;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x00300a64, u32(u32, u32, u32)> call_00300a64;
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> script__construct_word_ptr;
inline constexpr guest::Function<0x00568a80, u32(u32, u32)> find_of_type_b;
inline constexpr guest::Function<0x0056d374, u32(u32, u32, u32, u32)> call_0056d374;
inline constexpr guest::Function<0x0056d488, u32(u32, u32, u32)> call_0056d488;
inline constexpr guest::Function<0x005e2e50, u32(u32, u32)> start_message;
inline constexpr guest::Function<0x005e2f94, u32(u32)> call_005e2f94;
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32)> LinkOwner__unlink;
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> load_message;
inline constexpr guest::Function<0x005f4bfc, u32(u32)> construct_script_word;
inline constexpr guest::Function<0x006ad3a0, u32(u32, u32, u32)> call_006ad3a0;

struct __attribute__((packed)) Frame_006add20 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not read or written by name)
    u32 word_8;
    u8 unknown_c[0x64];  // (not read or written by name)
    u32 word_70;
    u8 unknown_74[0x2c];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006add20, word_0, 0x0);
GUEST_OFFSET(Frame_006add20, word_8, 0x8);
GUEST_OFFSET(Frame_006add20, word_70, 0x70);
GUEST_SIZE(Frame_006add20, 0xa0);

void script__WordFix_9u___WordFix_006add20(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_006add20> frame;  // the original's stack frame
    u32 res_1 = 0;
    u32 r2_4 = 0;
    u32 res_2 = 0;
    u32 r2_9 = 0;
    u32 r5 = r0;
    u32 r6 = r1;
    u32 r7 = r2;
    u32 r0_1 = frame.at(0x70).addr();  // (from the original)
    u32 r10 = 4u;
    script__construct_word_ptr(r0_1, frame.at(0x88).addr(), 9u, r3);  // (from the original)
    u32 r8 = vtable_script__WordFix_9u_;
    *gptr<u32>(r0_1) = r8;
    u32 r0_2 = r0_1 + 0xcu;  // (from the original)
    construct_script_word(r0_2);
    u32 r4 = r0_2 - 0xcu;  // (from the original)
    clear_aligned(r0_2 + 0xcu, 0x12u);  // (from the original)
    r3 = guest::cpu()->r[3];
    u32 r9 = 0x8906ecu;  // (from the original)
    r0 = r4 + 0x18u;  // (from the original)
    *gptr<u16>(r4 + 0x18u) = *gptr<u16>(r9);  // (from the original)
    r1 = 4u;
    do {
        u32 r2_3 = *gptr<u16>(r9);
        res_1 = r1 - 1u;
        r1 = res_1;
        *gptr<u16>(r0 + 2u) = u16(r2_3);
        r2_4 = *gptr<u16>(r9);
        u32 ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r2_4);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    call_0056d374(r4, r10, r2_4, r3);
    call_0056d488(frame.at(0x70).addr(), r6 + 2u, u32(*gptr<u8>(r6 + 0x14u)) & 1u);  // (from the original)
    r6 = r7 == 0 ? 0x162u : 0x161u;  // (from the original)
    u32 r0_5 = frame.at(8).addr();
    script__construct_word_ptr(r0_5, frame.at(0x20).addr(), 0x28u, guest::cpu()->r[3]);  // (from the original)
    r7 = vtable_script__WordFix_40u_;
    *gptr<u32>(r0_5) = r7;
    u32 r0_6 = r0_5 + 0xcu;  // (from the original)
    construct_script_word(r0_6);
    clear_aligned(r0_6 + 0xcu, 0x50u);  // (from the original)
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    r0 = ((r0_6 - 0xcu) + 0x18u) - 2u;  // (from the original)
    r1 = 0x14u;  // (from the original)
    do {
        u32 r2_8 = *gptr<u16>(r9);
        res_2 = r1 - 1u;
        r1 = res_2;
        *gptr<u16>(r0 + 2u) = u16(r2_8);
        r2_9 = *gptr<u16>(r9);
        u32 ea_4 = r0 + 4u;
        *gptr<u16>(ea_4) = u16(r2_9);
        r0 = ea_4;
        guest::preempt();
    } while (res_2 != 0);
    call_005ea8f8(*message_store, 0u, r2_9, r3);
    call_00300a64(*gptr<u32>(*message_store + 0x14u), frame.at(0x70).addr(), 0u);  // (from the original)
    frame->word_0 = r4;
    load_message(*message_store, frame.at(8).addr(), 0x6adeecu, r6);  // (from the original)
    LinkOwner__unlink(*message_store, 0u);
    u32 r0_14 = find_of_type_b(r5 + 0x4bcu, 0x6adef8u);  // (from the original)
    call_006ad3a0(r5, r0_14, frame.at(8).addr());
    u32 r0_15 = r5 + 0x64dcu;  // (from the original)
    start_message(r0_15, frame.at(8).addr());
    call_005e2f94(r0_15);
    frame->word_8 = r7;
    frame->word_70 = r8;
}

}  // namespace d_006add20
GUEST_EXPORT_FRAMED(0x006add20, d_006add20::script__WordFix_9u___WordFix_006add20, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_006ae344: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ae344 {

inline constexpr u32 vtable_script__WordFix_25u_ = 0x00909e00u;
inline constexpr u32 vtable_script__WordFix_9u_ = 0x0090a3e8u;
inline constexpr u32 message_store_address = 0x0095deccu;
inline guest::global<u32, 0x0095decc> message_store;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> script__construct_word_ptr;
inline constexpr guest::Function<0x0056e04c, u32(u32, u32, u32, u32)> script__WordCPtrSv__WordCPtrSv_0056e04c;
inline constexpr guest::Function<0x005e2e50, u32(u32, u32)> start_message;
inline constexpr guest::Function<0x005e2f94, u32(u32)> call_005e2f94;
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32)> LinkOwner__unlink;
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> load_message;
inline constexpr guest::Function<0x005f12f4, u32(u32, u32, u32)> call_virtual_24_5f12f4;
inline constexpr guest::Function<0x005f4bfc, u32(u32)> construct_script_word;

struct __attribute__((packed)) Frame_006ae344 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x48];  // (not read or written by name)
    u32 word_50;
    u8 unknown_54[0x2c];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006ae344, word_0, 0x0);
GUEST_OFFSET(Frame_006ae344, word_4, 0x4);
GUEST_OFFSET(Frame_006ae344, word_50, 0x50);
GUEST_SIZE(Frame_006ae344, 0x80);

void script__WordFix_9u___WordFix_006ae344(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_006ae344> frame;  // the original's stack frame
    u32 res_1 = 0;
    u32 r2_4 = 0;
    u32 res_2 = 0;
    u32 r2_8 = 0;
    u32 r7 = r0;
    u32 r5 = r1;
    u32 r0_1 = frame.at(0x50).addr();  // (from the original)
    script__construct_word_ptr(r0_1, frame.at(0x68).addr(), 9u, r3);  // (from the original)
    u32 r6 = vtable_script__WordFix_9u_;
    *gptr<u32>(r0_1) = r6;
    u32 r0_2 = r0_1 + 0xcu;  // (from the original)
    construct_script_word(r0_2);
    u32 r4_1 = r0_2 - 0xcu;  // (from the original)
    clear_aligned(r0_2 + 0xcu, 0x12u);  // (from the original)
    r3 = guest::cpu()->r[3];
    u32 r8 = 0x8906ecu;  // (from the original)
    r0 = r4_1 + 0x18u;  // (from the original)
    *gptr<u16>(r4_1 + 0x18u) = *gptr<u16>(r8);  // (from the original)
    r1 = 4u;
    do {
        u32 r2_3 = *gptr<u16>(r8);
        res_1 = r1 - 1u;
        r1 = res_1;
        *gptr<u16>(r0 + 2u) = u16(r2_3);
        r2_4 = *gptr<u16>(r8);
        u32 ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r2_4);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    script__WordCPtrSv__WordCPtrSv_0056e04c(frame.at(0x50).addr(), r5 + 0x16u, r2_4, r3);  // (from the original)
    u32 r0_5 = frame.at(4).addr();
    script__construct_word_ptr(r0_5, frame.at(0x1c).addr(), 0x19u, guest::cpu()->r[3]);  // (from the original)
    r5 = vtable_script__WordFix_25u_;
    *gptr<u32>(r0_5) = r5;
    u32 r0_6 = r0_5 + 0xcu;  // (from the original)
    construct_script_word(r0_6);
    u32 r4_2 = r0_6 - 0xcu;  // (from the original)
    clear_aligned(r0_6 + 0xcu, 0x32u);  // (from the original)
    r3 = guest::cpu()->r[3];
    r0 = r4_2 + 0x18u;  // (from the original)
    *gptr<u16>(r4_2 + 0x18u) = *gptr<u16>(r8);  // (from the original)
    r1 = 0xcu;  // (from the original)
    do {
        u32 r2_7 = *gptr<u16>(r8);
        res_2 = r1 - 1u;
        r1 = res_2;
        *gptr<u16>(r0 + 2u) = u16(r2_7);
        r2_8 = *gptr<u16>(r8);
        u32 ea_4 = r0 + 4u;
        *gptr<u16>(ea_4) = u16(r2_8);
        r0 = ea_4;
        guest::preempt();
    } while (res_2 != 0);
    call_005ea8f8(*message_store, 0u, r2_8, r3);
    call_virtual_24_5f12f4(*gptr<u32>(*message_store + 0x14u), frame.at(0x50).addr(), 0u);  // (from the original)
    frame->word_0 = 0;
    load_message(*message_store, frame.at(4).addr(), 0x6ae4c8u, 0x15fu);  // (from the original)
    LinkOwner__unlink(*message_store, 0u);
    u32 r0_12 = r7 + 0x65a0u;  // (from the original)
    start_message(r0_12, frame.at(4).addr());
    call_005e2f94(r0_12);
    frame->word_4 = r5;
    frame->word_50 = r6;
}

}  // namespace d_006ae344
GUEST_EXPORT_FRAMED(0x006ae344, d_006ae344::script__WordFix_9u___WordFix_006ae344, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_006ae6a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ae6a0 {

inline constexpr u32 vtable_script__WordFix_40u_ = 0x0090a030u;
inline constexpr u32 message_store_address = 0x0095deccu;
inline guest::global<u32, 0x0095decc> message_store;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x00300914, u32(u32, u32, u32)> forward_to_held_object_slot_21;
inline constexpr guest::Function<0x00300924, u32(u32, u32, u32)> forward_to_held_object_slot_22;
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> script__construct_word_ptr;
inline constexpr guest::Function<0x00568a80, u32(u32, u32)> find_of_type_b;
inline constexpr guest::Function<0x005e2e50, u32(u32, u32)> start_message;
inline constexpr guest::Function<0x005e2f94, u32(u32)> call_005e2f94;
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32)> LinkOwner__unlink;
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> load_message;
inline constexpr guest::Function<0x005f1224, u32(u32, u32, u32)> call_target_with_two_0x50_;
inline constexpr guest::Function<0x005f4bfc, u32(u32)> construct_script_word;
inline constexpr guest::Function<0x006ad3a0, u32(u32, u32, u32)> call_006ad3a0;

struct __attribute__((packed)) Frame_006ae6a0 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not read or written by name)
    u32 word_8;
    u8 unknown_c[0x64];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006ae6a0, word_0, 0x0);
GUEST_OFFSET(Frame_006ae6a0, word_8, 0x8);
GUEST_SIZE(Frame_006ae6a0, 0x70);

void script__WordFix_40u___WordFix_006ae6a0(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_006ae6a0> frame;  // the original's stack frame
    u32 res_1 = 0;
    u32 r3_4 = 0;
    u32 r6 = r0;
    u32 r4 = r1;
    u32 r0_1 = frame.at(8).addr();
    script__construct_word_ptr(r0_1, frame.at(0x20).addr(), 0x28u, r3);  // (from the original)
    u32 r7 = vtable_script__WordFix_40u_;
    *gptr<u32>(r0_1) = r7;
    u32 r0_2 = r0_1 + 0xcu;  // (from the original)
    construct_script_word(r0_2);
    clear_aligned(r0_2 + 0xcu, 0x50u);  // (from the original)
    u32 r2 = 0x8906ecu;  // (from the original)
    u32 r5 = 0u;
    r0 = (r0_2 + 0xcu) - 2u;  // (from the original)
    r1 = 0x14u;  // (from the original)
    do {
        u32 r3_3 = *gptr<u16>(r2);
        res_1 = r1 - 1u;
        r1 = res_1;
        *gptr<u16>(r0 + 2u) = u16(r3_3);
        r3_4 = *gptr<u16>(r2);
        u32 ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r3_4);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    call_005ea8f8(*message_store, 0u, r2, r3_4);
    call_target_with_two_0x50_(*gptr<u32>(*message_store + 0x14u), uxth(r4), 0u);  // (from the original)
    forward_to_held_object_slot_21(*gptr<u32>(*message_store + 0x14u), r4 >> 0x10u & 0xffu, 0u);  // (from the original)
    forward_to_held_object_slot_22(*gptr<u32>(*message_store + 0x14u), r4 >> 0x18, 0u);  // (from the original)
    frame->word_0 = r5;
    load_message(*message_store, frame.at(8).addr(), 0x6ae7f8u, 0x165u);  // (from the original)
    LinkOwner__unlink(*message_store, 0u);
    u32 r0_12 = find_of_type_b(r6 + 0x4bcu, 0x6ae804u);  // (from the original)
    call_006ad3a0(r6, r0_12, frame.at(8).addr());
    u32 r0_13 = r6 + 0x68b0u;  // (from the original)
    start_message(r0_13, frame.at(8).addr());
    call_005e2f94(r0_13);
    frame->word_8 = r7;
}

}  // namespace d_006ae6a0
GUEST_EXPORT_FRAMED(0x006ae6a0, d_006ae6a0::script__WordFix_40u___WordFix_006ae6a0, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_006ae870: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ae870 {

inline constexpr u32 vtable_script__WordFix_40u_ = 0x0090a030u;
inline constexpr u32 message_store_address = 0x0095deccu;
inline guest::global<u32, 0x0095decc> message_store;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x00300914, u32(u32, u32, u32)> forward_to_held_object_slot_21;
inline constexpr guest::Function<0x00300924, u32(u32, u32, u32)> forward_to_held_object_slot_22;
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> script__construct_word_ptr;
inline constexpr guest::Function<0x00568a80, u32(u32, u32)> find_of_type_b;
inline constexpr guest::Function<0x005e2e50, u32(u32, u32)> start_message;
inline constexpr guest::Function<0x005e2f94, u32(u32)> call_005e2f94;
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32)> LinkOwner__unlink;
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> load_message;
inline constexpr guest::Function<0x005f4bfc, u32(u32)> construct_script_word;
inline constexpr guest::Function<0x006ad3a0, u32(u32, u32, u32)> call_006ad3a0;

struct __attribute__((packed)) Frame_006ae870 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not read or written by name)
    u32 word_8;
    u8 unknown_c[0x64];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006ae870, word_0, 0x0);
GUEST_OFFSET(Frame_006ae870, word_8, 0x8);
GUEST_SIZE(Frame_006ae870, 0x70);

void script__WordFix_40u___WordFix_006ae870(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_006ae870> frame;  // the original's stack frame
    u32 res_1 = 0;
    u32 r3_4 = 0;
    u32 r5 = r0;
    u32 r6 = r1;
    u32 r0_1 = frame.at(8).addr();
    script__construct_word_ptr(r0_1, frame.at(0x20).addr(), 0x28u, r3);  // (from the original)
    u32 r7 = vtable_script__WordFix_40u_;
    *gptr<u32>(r0_1) = r7;
    u32 r0_2 = r0_1 + 0xcu;  // (from the original)
    construct_script_word(r0_2);
    clear_aligned(r0_2 + 0xcu, 0x50u);  // (from the original)
    u32 r2 = 0x8906ecu;  // (from the original)
    u32 r4 = 0u;
    r0 = (r0_2 + 0xcu) - 2u;  // (from the original)
    r1 = 0x14u;  // (from the original)
    do {
        u32 r3_3 = *gptr<u16>(r2);
        res_1 = r1 - 1u;
        r1 = res_1;
        *gptr<u16>(r0 + 2u) = u16(r3_3);
        r3_4 = *gptr<u16>(r2);
        u32 ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r3_4);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    call_005ea8f8(*message_store, 0u, r2, r3_4);
    u32 r0_6 = *gptr<u32>(*message_store + 0x14u);  // (from the original)
    u32 r1_3 = *gptr<u8>(r6);
    forward_to_held_object_slot_21(r0_6, r1_3, 1u);
    u32 r0_7 = *gptr<u32>(*message_store + 0x14u);  // (from the original)
    u32 r1_4 = *gptr<u8>(r6 + 1u);
    forward_to_held_object_slot_22(r0_7, r1_4, 1u);
    frame->word_0 = r4;
    load_message(*message_store, frame.at(8).addr(), 0x6ae9acu, 0x163u);  // (from the original)
    LinkOwner__unlink(*message_store, 0u);
    u32 r0_11 = find_of_type_b(r5 + 0x4bcu, 0x6ae9b8u);  // (from the original)
    call_006ad3a0(r5, r0_11, frame.at(8).addr());
    u32 r0_12 = r5 + 0x6664u;  // (from the original)
    start_message(r0_12, frame.at(8).addr());
    call_005e2f94(r0_12);
    frame->word_8 = r7;
}

}  // namespace d_006ae870
GUEST_EXPORT_FRAMED(0x006ae870, d_006ae870::script__WordFix_40u___WordFix_006ae870, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_006ae9c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006ae9c4 {

struct __attribute__((packed)) Object_006ae9c4_0 {
    u8 unknown_0[0x15c0];  // (not used here)
    u32 word_15c0;
    u8 unknown_15c4[0x7];  // (not used here)
    u8 byte_15cb;
    u8 byte_15cc;
    u8 unknown_15cd[0xd7];  // (not used here)
    u32 word_16a4;
};
GUEST_OFFSET(Object_006ae9c4_0, word_15c0, 0x15c0);
GUEST_OFFSET(Object_006ae9c4_0, byte_15cb, 0x15cb);
GUEST_OFFSET(Object_006ae9c4_0, byte_15cc, 0x15cc);
GUEST_OFFSET(Object_006ae9c4_0, word_16a4, 0x16a4);

struct __attribute__((packed)) Local_006ae9c4_ea_8 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_006ae9c4_ea_8, float_0, 0x0);
GUEST_OFFSET(Local_006ae9c4_ea_8, float_4, 0x4);

struct __attribute__((packed)) Local_006ae9c4_r3_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006ae9c4_r3_2, word_0, 0x0);
GUEST_OFFSET(Local_006ae9c4_r3_2, word_4, 0x4);

struct __attribute__((packed)) Local_006ae9c4_r9_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_006ae9c4_r9_1, word_0, 0x0);
GUEST_OFFSET(Local_006ae9c4_r9_1, word_4, 0x4);
GUEST_OFFSET(Local_006ae9c4_r9_1, word_8, 0x8);
GUEST_OFFSET(Local_006ae9c4_r9_1, word_c, 0xc);
GUEST_OFFSET(Local_006ae9c4_r9_1, word_10, 0x10);
GUEST_OFFSET(Local_006ae9c4_r9_1, word_14, 0x14);

inline guest::global<u32, 0x008817b0> global_008817b0;
inline guest::global<u32, 0x008817b4> global_008817b4;
inline guest::global<u32, 0x008819cc> global_008819cc;
inline guest::global<u32, 0x008819d0> global_008819d0;
inline guest::global<u32, 0x008819d4> global_008819d4;
inline guest::global<u32, 0x008819d8> global_008819d8;
inline guest::global<u32, 0x008819dc> global_008819dc;
inline guest::global<u32, 0x008819e0> global_008819e0;
inline guest::global<u32, 0x008819e4> global_008819e4;
inline constexpr guest::Function<0x002b6a00, u32(u32, u32)> set_node_values;
inline constexpr guest::Function<0x002f6a30, u32(u32, u32)> Model__set_flag_10;
inline constexpr guest::Function<0x002f6e98, u32(u32, u32, u32, u32)> ButtonActionControl__setup;
inline constexpr guest::Function<0x002f7508, u32(u32, u32, u32)> copy_four_animation_targets;
inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32)> Layout__find_pane;
inline constexpr guest::Function<0x0056878c, u32(u32, u32)> LayoutObjectWithChild__forward_to_child;

struct __attribute__((packed)) Frame_006ae9c4 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u8 unknown_1c[0x20];  // (not read or written by name)
    u32 word_3c;
    u8 unknown_40[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006ae9c4, word_0, 0x0);
GUEST_OFFSET(Frame_006ae9c4, word_4, 0x4);
GUEST_OFFSET(Frame_006ae9c4, word_8, 0x8);
GUEST_OFFSET(Frame_006ae9c4, word_c, 0xc);
GUEST_OFFSET(Frame_006ae9c4, word_10, 0x10);
GUEST_OFFSET(Frame_006ae9c4, word_14, 0x14);
GUEST_OFFSET(Frame_006ae9c4, word_18, 0x18);
GUEST_OFFSET(Frame_006ae9c4, word_3c, 0x3c);
GUEST_SIZE(Frame_006ae9c4, 0x44);

void f_006ae9c4(gptr<Object_006ae9c4_0> arg0, float S0, float S1) {
    guest::StackFrameOf<Frame_006ae9c4> frame;  // the original's stack frame
    gptr<Local_006ae9c4_r9_1> r9_1 = gptr<Local_006ae9c4_r9_1>(frame.at(0x24).addr());  // (from the original)
    u32 r7_1 = arg0.addr() + 0x798u;  // (from the original)
    u32 r2_1 = *global_008819d0;
    u32 r3_1 = *global_008819d4;
    u32 r5_1 = *global_008819d8;
    u32 r8_1 = *global_008819dc;
    u32 r12_1 = *global_008819e0;
    r9_1->word_0 = *global_008819cc;
    r9_1->word_4 = r2_1;
    r9_1->word_8 = r3_1;
    r9_1->word_c = r5_1;
    r9_1->word_10 = r8_1;
    r9_1->word_14 = r12_1;
    gptr<Local_006ae9c4_r3_2> r3_2 = gptr<Local_006ae9c4_r3_2>(frame.at(0x1c).addr());  // (from the original)
    frame->word_3c = *global_008819e4;
    r3_2->word_0 = arg0.addr() + 0x2cu;  // (from the original)
    r3_2->word_4 = r7_1;
    ButtonActionControl__setup(arg0.addr() + 0x15d0u, frame.at(0x1c).addr(), 0u, r3_2.addr());  // (from the original)
    float S0_1 = 0.0f;
    arg0->word_16a4 = arg0->word_16a4 | 0x40u;  // (from the original)
    frame->word_0 = 0;
    frame->word_4 = 0;
    float S1_1 = -60.0f;
    frame->word_8 = 0;
    frame->word_c = 0;
    frame->word_10 = 0;
    frame->word_14 = 0;
    frame->word_18 = 0;
    gptr<Local_006ae9c4_ea_8> ea_8 = gptr<Local_006ae9c4_ea_8>(frame.at(8).addr());
    ea_8->float_0 = S0_1;
    ea_8->float_4 = S1_1;
    u32 r1_3 = *global_008817b0;
    u32 r6_1 = *global_008817b4;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    u32 child_2 = LayoutObjectWithChild__forward_to_child(r7_1, r1_3);
    frame->word_0 = child_2;
    u32 pane_2 = Layout__find_pane(r7_1, r6_1, 1u);
    u32 r6_2 = arg0.addr() + 0x14f0u;  // (from the original)
    frame->word_4 = pane_2;
    frame->word_10 = 0;
    frame->word_14 = 0;
    set_node_values(r6_2, frame.at(0).addr());
    copy_four_animation_targets(arg0.addr() + 0x15d0u, r6_2, 1u);  // (from the original)
    Model__set_flag_10(arg0.addr() + 0x15d0u, 0u);  // (from the original)
    arg0->word_16a4 = arg0->word_16a4 | 8u;
    *gptr<u32>(arg0.addr() + 0x15bcu) = 0x100041f;  // (from the original)
    *gptr<u8>(arg0.addr() + 0x15cau) = 1;  // (from the original)
    arg0->word_15c0 = 0x1000398;  // (from the original)
    arg0->byte_15cb = 1;
    arg0->byte_15cc = 1;
    *gptr<u16>(arg0.addr() + 0x16a0u) = 3;  // (from the original)
    guest::cpu()->r[1] = 0x16a0u;  // (from the original)
}

}  // namespace d_006ae9c4
GUEST_EXPORT_FRAMED(0x006ae9c4, d_006ae9c4::f_006ae9c4, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_006aee8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006aee8c {

struct __attribute__((packed)) Local_006aee8c_r0_3 {
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
    u32 word_48;
    u32 word_4c;
    u32 word_50;
};
GUEST_OFFSET(Local_006aee8c_r0_3, word_18, 0x18);
GUEST_OFFSET(Local_006aee8c_r0_3, word_1c, 0x1c);
GUEST_OFFSET(Local_006aee8c_r0_3, word_20, 0x20);
GUEST_OFFSET(Local_006aee8c_r0_3, word_24, 0x24);
GUEST_OFFSET(Local_006aee8c_r0_3, word_28, 0x28);
GUEST_OFFSET(Local_006aee8c_r0_3, word_2c, 0x2c);
GUEST_OFFSET(Local_006aee8c_r0_3, word_30, 0x30);
GUEST_OFFSET(Local_006aee8c_r0_3, word_34, 0x34);
GUEST_OFFSET(Local_006aee8c_r0_3, word_38, 0x38);
GUEST_OFFSET(Local_006aee8c_r0_3, word_3c, 0x3c);
GUEST_OFFSET(Local_006aee8c_r0_3, word_40, 0x40);
GUEST_OFFSET(Local_006aee8c_r0_3, word_44, 0x44);
GUEST_OFFSET(Local_006aee8c_r0_3, word_48, 0x48);
GUEST_OFFSET(Local_006aee8c_r0_3, word_4c, 0x4c);
GUEST_OFFSET(Local_006aee8c_r0_3, word_50, 0x50);

inline constexpr u32 vtable_script__WordFix_30u_ = 0x00909ea8u;
inline constexpr u32 message_store_address = 0x0095deccu;
inline guest::global<u32, 0x0095decc> message_store;
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> script__construct_word_ptr;
inline constexpr guest::Function<0x00568a80, u32(u32, u32)> find_of_type_b;
inline constexpr guest::Function<0x005e2e50, u32(u32, u32)> start_message;
inline constexpr guest::Function<0x005e2f94, u32(u32, u32)> call_005e2f94;
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32)> LinkOwner__unlink;
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> load_message;
inline constexpr guest::Function<0x005f4bfc, u32(u32)> construct_script_word;
inline constexpr guest::Function<0x006ad3a0, u32(u32, u32, u32)> call_006ad3a0;

struct __attribute__((packed)) Frame_006aee8c {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x54];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006aee8c, word_0, 0x0);
GUEST_OFFSET(Frame_006aee8c, word_4, 0x4);
GUEST_SIZE(Frame_006aee8c, 0x5c);

void script__WordFix_30u___WordFix_006aee8c(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_006aee8c> frame;  // the original's stack frame
    u32 res_1 = 0;
    u32 r3_3 = 0;
    u32 r4 = r0;
    u32 r0_1 = frame.at(4).addr();
    script__construct_word_ptr(r0_1, frame.at(0x1c).addr(), 0x1eu, r3);  // (from the original)
    u32 r5 = vtable_script__WordFix_30u_;
    *gptr<u32>(r0_1) = r5;
    u32 r0_2 = r0_1 + 0xcu;  // (from the original)
    construct_script_word(r0_2);
    gptr<Local_006aee8c_r0_3> r0_3 = gptr<Local_006aee8c_r0_3>(r0_2 - 0xcu);  // (from the original)
    u32 r6 = 0u;
    r0_3->word_18 = r6;
    r0_3->word_1c = r6;
    r0_3->word_20 = r6;
    r0_3->word_24 = r6;
    r0_3->word_28 = r6;
    r0_3->word_2c = r6;
    r0_3->word_30 = r6;
    r0_3->word_34 = r6;
    r0_3->word_38 = r6;
    r0_3->word_3c = r6;
    r0_3->word_40 = r6;
    r0_3->word_44 = r6;
    r0_3->word_48 = r6;
    u32 r2 = 0x8906ecu;  // (from the original)
    r0_3->word_4c = r6;
    r0_3->word_50 = r6;
    u32 r1 = 0xfu;  // (from the original)
    r0 = r0_3.addr() + 0x16u;  // (from the original)
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
    call_005ea8f8(*message_store, 0u, r2, r3_3);
    frame->word_0 = r6;
    load_message(*message_store, frame.at(4).addr(), 0x881a44u, 0x167u);  // (from the original)
    LinkOwner__unlink(*message_store, 0u);
    u32 r0_7 = r4 + 0x4bcu;  // (from the original)
    u32 r0_8 = find_of_type_b(r0_7, 0x881a68u);  // (from the original)
    call_006ad3a0(r4, r0_8, frame.at(4).addr());
    u32 r0_9 = find_of_type_b(r0_7, 0x881a5cu);  // (from the original)
    call_006ad3a0(r4, r0_9, frame.at(4).addr());
    u32 r0_10 = r4 + 0x6974u;  // (from the original)
    start_message(r0_10, frame.at(4).addr());
    call_005e2f94(r0_10, guest::cpu()->r[1]);
    u32 r0_11 = r4 + 0x6a38u;  // (from the original)
    u32 r1_6 = frame.at(4).addr();
    start_message(r0_11, r1_6);
    call_005e2f94(r0_11, r1_6);
    frame->word_4 = r5;
}

}  // namespace d_006aee8c
GUEST_EXPORT_FRAMED(0x006aee8c, d_006aee8c::script__WordFix_30u___WordFix_006aee8c, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_006af218: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006af218 {

struct __attribute__((packed)) Object_006af218_0 {
    u8 unknown_0[0x13fc];  // (not used here)
    u32 word_13fc;
    u8 unknown_1400[0x7];  // (not used here)
    u8 byte_1407;
    u8 byte_1408;
    u8 unknown_1409[0xd7];  // (not used here)
    u32 word_14e0;
};
GUEST_OFFSET(Object_006af218_0, word_13fc, 0x13fc);
GUEST_OFFSET(Object_006af218_0, byte_1407, 0x1407);
GUEST_OFFSET(Object_006af218_0, byte_1408, 0x1408);
GUEST_OFFSET(Object_006af218_0, word_14e0, 0x14e0);

struct __attribute__((packed)) Local_006af218_r0_2 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_006af218_r0_2, float_0, 0x0);
GUEST_OFFSET(Local_006af218_r0_2, float_4, 0x4);

struct __attribute__((packed)) Local_006af218_r3_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006af218_r3_2, word_0, 0x0);
GUEST_OFFSET(Local_006af218_r3_2, word_4, 0x4);

struct __attribute__((packed)) Local_006af218_r9_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_006af218_r9_1, word_0, 0x0);
GUEST_OFFSET(Local_006af218_r9_1, word_4, 0x4);
GUEST_OFFSET(Local_006af218_r9_1, word_8, 0x8);
GUEST_OFFSET(Local_006af218_r9_1, word_c, 0xc);
GUEST_OFFSET(Local_006af218_r9_1, word_10, 0x10);
GUEST_OFFSET(Local_006af218_r9_1, word_14, 0x14);

inline guest::global<u32, 0x008817a8> global_008817a8;
inline guest::global<u32, 0x008817ac> global_008817ac;
inline guest::global<u32, 0x008819a8> global_008819a8;
inline guest::global<u32, 0x008819ac> global_008819ac;
inline guest::global<u32, 0x008819b0> global_008819b0;
inline guest::global<u32, 0x008819b4> global_008819b4;
inline guest::global<u32, 0x008819b8> global_008819b8;
inline guest::global<u32, 0x008819bc> global_008819bc;
inline guest::global<u32, 0x008819c0> global_008819c0;
inline constexpr guest::Function<0x002b6a00, u32(u32, u32)> set_node_values;
inline constexpr guest::Function<0x002f6a30, u32(u32, u32)> Model__set_flag_10;
inline constexpr guest::Function<0x002f6e98, u32(u32, u32, u32, u32)> ButtonActionControl__setup;
inline constexpr guest::Function<0x002f7508, u32(u32, u32, u32)> copy_four_animation_targets;
inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32)> Layout__find_pane;
inline constexpr guest::Function<0x0056878c, u32(u32, u32)> LayoutObjectWithChild__forward_to_child;

struct __attribute__((packed)) Frame_006af218 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u8 unknown_1c[0x20];  // (not read or written by name)
    u32 word_3c;
    u8 unknown_40[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006af218, word_0, 0x0);
GUEST_OFFSET(Frame_006af218, word_4, 0x4);
GUEST_OFFSET(Frame_006af218, word_8, 0x8);
GUEST_OFFSET(Frame_006af218, word_c, 0xc);
GUEST_OFFSET(Frame_006af218, word_10, 0x10);
GUEST_OFFSET(Frame_006af218, word_14, 0x14);
GUEST_OFFSET(Frame_006af218, word_18, 0x18);
GUEST_OFFSET(Frame_006af218, word_3c, 0x3c);
GUEST_SIZE(Frame_006af218, 0x44);

void f_006af218(gptr<Object_006af218_0> arg0, float S0, float S1) {
    guest::StackFrameOf<Frame_006af218> frame;  // the original's stack frame
    gptr<Local_006af218_r9_1> r9_1 = gptr<Local_006af218_r9_1>(frame.at(0x24).addr());  // (from the original)
    u32 r7_1 = arg0.addr() + 0x4bcu;  // (from the original)
    u32 r2_1 = *global_008819ac;
    u32 r3_1 = *global_008819b0;
    u32 r5_1 = *global_008819b4;
    u32 r8_1 = *global_008819b8;
    u32 r12_1 = *global_008819bc;
    r9_1->word_0 = *global_008819a8;
    r9_1->word_4 = r2_1;
    r9_1->word_8 = r3_1;
    r9_1->word_c = r5_1;
    r9_1->word_10 = r8_1;
    r9_1->word_14 = r12_1;
    gptr<Local_006af218_r3_2> r3_2 = gptr<Local_006af218_r3_2>(frame.at(0x1c).addr());  // (from the original)
    frame->word_3c = *global_008819c0;
    u32 r0_1 = arg0.addr() + 0x140cu;  // (from the original)
    r3_2->word_0 = arg0.addr() + 0x2cu;  // (from the original)
    r3_2->word_4 = r7_1;
    ButtonActionControl__setup(r0_1, frame.at(0x1c).addr(), 0u, r3_2.addr());  // (from the original)
    float S0_1 = 0.0f;
    arg0->word_14e0 = arg0->word_14e0 | 0x40u;  // (from the original)
    frame->word_0 = 0;
    frame->word_4 = 0;
    float S1_1 = -60.0f;
    gptr<Local_006af218_r0_2> r0_2 = gptr<Local_006af218_r0_2>(frame.at(8).addr());
    frame->word_8 = 0;
    frame->word_c = 0;
    frame->word_10 = 0;
    frame->word_14 = 0;
    frame->word_18 = 0;
    r0_2->float_0 = S0_1;
    r0_2->float_4 = S1_1;
    u32 r1_3 = *global_008817a8;
    u32 r6_1 = *global_008817ac;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    u32 child_2 = LayoutObjectWithChild__forward_to_child(r7_1, r1_3);
    frame->word_0 = child_2;
    u32 pane_2 = Layout__find_pane(r7_1, r6_1, 1u);
    u32 r6_2 = arg0.addr() + 0x132cu;  // (from the original)
    frame->word_4 = pane_2;
    frame->word_10 = 0;
    frame->word_14 = 0;
    set_node_values(r6_2, frame.at(0).addr());
    copy_four_animation_targets(r0_1, r6_2, 1u);
    *gptr<u32>(arg0.addr() + 0x13f8u) = 0x100041d;  // (from the original)
    *gptr<u8>(arg0.addr() + 0x1406u) = 1;  // (from the original)
    arg0->word_13fc = 0x1000398;  // (from the original)
    arg0->byte_1407 = 1;
    arg0->byte_1408 = 1;
    Model__set_flag_10(r0_1, 0u);
    arg0->word_14e0 = arg0->word_14e0 | 8u;
    *gptr<u16>(arg0.addr() + 0x14dcu) = 3;  // (from the original)
    guest::cpu()->r[1] = 0x14dcu;  // (from the original)
}

}  // namespace d_006af218
GUEST_EXPORT_FRAMED(0x006af218, d_006af218::f_006af218, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_006af568: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006af568 {

struct __attribute__((packed)) Local_006af568_r0_15 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_006af568_r0_15, byte_b7, 0xb7);

struct __attribute__((packed)) Local_006af568_r0_4 {
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
};
GUEST_OFFSET(Local_006af568_r0_4, word_18, 0x18);
GUEST_OFFSET(Local_006af568_r0_4, word_1c, 0x1c);
GUEST_OFFSET(Local_006af568_r0_4, word_20, 0x20);
GUEST_OFFSET(Local_006af568_r0_4, word_24, 0x24);
GUEST_OFFSET(Local_006af568_r0_4, word_28, 0x28);
GUEST_OFFSET(Local_006af568_r0_4, word_2c, 0x2c);
GUEST_OFFSET(Local_006af568_r0_4, word_30, 0x30);
GUEST_OFFSET(Local_006af568_r0_4, word_34, 0x34);
GUEST_OFFSET(Local_006af568_r0_4, word_38, 0x38);
GUEST_OFFSET(Local_006af568_r0_4, word_3c, 0x3c);

inline constexpr u32 vtable_script__WordFix_20u_ = 0x00909ce8u;
inline constexpr u32 message_store_address = 0x0095deccu;
inline guest::global<u32, 0x0095decc> message_store;
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32)> script__construct_word_ptr;
inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32)> Layout__find_pane;
inline constexpr guest::Function<0x00568630, u32(u32, u32, u32, u32)> notify_objects_of_list;
inline constexpr guest::Function<0x0056878c, u32(u32, u32)> LayoutObjectWithChild__forward_to_child;
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> notify_list_objects;
inline constexpr guest::Function<0x00568c10, u32(u32)> Layout__virtual_3;
inline constexpr guest::Function<0x00569508, u32(u32)> apply_value;
inline constexpr guest::Function<0x005e2e50, u32(u32, u32)> start_message;
inline constexpr guest::Function<0x005e2f94, u32(u32, u32)> call_005e2f94;
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32)> LinkOwner__unlink;
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> load_message;
inline constexpr guest::Function<0x005f12c4, u32(u32, u32, u32, u32)> call_target_with_none_0xa4_;
inline constexpr guest::Function<0x005f4bfc, u32(u32)> construct_script_word;
inline constexpr guest::Function<0x00770300, u32(u32)> call_00770300;
inline constexpr guest::Function<0x0077033c, u32(u32, u32, u32, u32)> OptionalWord64__is_present_and_nonzero;

struct __attribute__((packed)) Frame_006af568 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not read or written by name)
    u32 word_8;
    u8 unknown_c[0x3c];  // (not read or written by name)
};
GUEST_OFFSET(Frame_006af568, word_0, 0x0);
GUEST_OFFSET(Frame_006af568, word_8, 0x8);
GUEST_SIZE(Frame_006af568, 0x48);

void script__WordFix_20u___WordFix_006af568(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_006af568> frame;  // the original's stack frame
    u32 res_1 = 0;
    u32 r3_4 = 0;
    u32 r4 = r0;
    u32 r5 = r2;
    u32 r6 = r1;
    u32 r0_1 = OptionalWord64__is_present_and_nonzero(r1, r1, r2, r3);
    u32 r10 = 0u;
    u32 r8 = r4 + 0x4bcu;  // (from the original)
    if (r0_1 != 0) {
        u32 r0_2 = frame.at(8).addr();
        script__construct_word_ptr(r0_2, frame.at(0x20).addr(), 0x14u);  // (from the original)
        u32 r7 = vtable_script__WordFix_20u_;
        *gptr<u32>(r0_2) = r7;
        u32 r0_3 = r0_2 + 0xcu;  // (from the original)
        construct_script_word(r0_3);
        gptr<Local_006af568_r0_4> r0_4 = gptr<Local_006af568_r0_4>(r0_3 - 0xcu);  // (from the original)
        r2 = 0x8906ecu;  // (from the original)
        r0_4->word_18 = r10;
        r0_4->word_1c = r10;
        r0_4->word_20 = r10;
        r0_4->word_24 = r10;
        r0_4->word_28 = r10;
        r0_4->word_2c = r10;
        r0_4->word_30 = r10;
        r0_4->word_34 = r10;
        r0_4->word_38 = r10;
        r0_4->word_3c = r10;
        r1 = 0xau;  // (from the original)
        r0 = r0_4.addr() + 0x16u;  // (from the original)
        do {
            u32 r3_3 = *gptr<u16>(r2);
            res_1 = r1 - 1u;
            r1 = res_1;
            *gptr<u16>(r0 + 2u) = u16(r3_3);
            r3_4 = *gptr<u16>(r2);
            u32 ea_2 = r0 + 4u;
            *gptr<u16>(ea_2) = u16(r3_4);
            r0 = ea_2;
            guest::preempt();
        } while (res_1 != 0);
        call_005ea8f8(*message_store, 0u, r2, r3_4);
        if (r5 != 0) {
            u32 r0_6 = call_00770300(r6);
            u32 r1_4 = guest::cpu()->r[1];
            call_target_with_none_0xa4_(*gptr<u32>(*message_store + 0x14u), r1_4, r0_6, r1_4);  // (from the original)
            frame->word_0 = r10;
            load_message(*message_store, frame.at(8).addr(), 0x6af76cu, 0x168u);  // (from the original)
            u32 pane_2 = Layout__find_pane(r8, 0x6af778u, 1u);  // (from the original)
            notify_objects_of_list(r8, r4 + 0x720u, pane_2, 0u);  // (from the original)
            apply_value(r4 + 0x720u);  // (from the original)
            Layout__virtual_3(r8);
            notify_list_objects(r8, r4 + 0x720u, pane_2, 0u);  // (from the original)
        } else {
            frame->word_0 = r10;
            load_message(*message_store, frame.at(8).addr(), 0x6af76cu, 0x169u);  // (from the original)
        }
        LinkOwner__unlink(*message_store, 0u);
        u32 r0_13 = r4 + 0x6728u;  // (from the original)
        start_message(r0_13, frame.at(8).addr());
        call_005e2f94(r0_13, guest::cpu()->r[1]);
        u32 r0_14 = r4 + 0x67ecu;  // (from the original)
        u32 r1_13 = frame.at(8).addr();
        start_message(r0_14, r1_13);
        call_005e2f94(r0_14, r1_13);
        frame->word_8 = r7;
        return;
    }
    gptr<Local_006af568_r0_15> child_2 = gptr<Local_006af568_r0_15>(LayoutObjectWithChild__forward_to_child(r8, 0x6af788u));  // (from the original)
    child_2->byte_b7 = u8(u32(child_2->byte_b7) & 0xfeu);  // (from the original)
}

}  // namespace d_006af568
GUEST_EXPORT_FRAMED(0x006af568, d_006af568::script__WordFix_20u___WordFix_006af568, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_006afbcc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006afbcc {

inline constexpr guest::Function<0x001323bc, u32(u32)> read_global_975c20;
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32)> call_00569e6c;

void f_006afbcc(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = read_global_975c20(r0);
    frame.release();
    call_00569e6c(r0_1, r0 + 0x4bcu, 0u);
    return;  // (from the original)
}

}  // namespace d_006afbcc
GUEST_EXPORT(0x006afbcc, d_006afbcc::f_006afbcc);
