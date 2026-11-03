// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_00770060: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Computes the item's price from its data and index.
namespace d_00770060 {

inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> construct_item;
inline constexpr guest::Function<0x005361a8, u32(u32)> Item__data;
inline constexpr guest::Function<0x00768da0, u32(u32)> Item__index;

u32 ItemPrice__compute(u32 item_price, u32 r1, u32 r2, float S0, float S1, float S2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r7 = item_price;
    u32 r8 = r1;
    u32 r9 = r2;
    construct_item(frame.at(0).addr(), 0x2000u, r2, guest::cpu()->r[3]);  // (from the original)
    u32 item_data_2 = Item__data(frame.at(0).addr());
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    u32 r5 = item_data_2;
    if (item_data_2 != 0) {
        u32 r10 = 0x172bu;  // (from the original)
        u32 r6 = 0u;
        u32 r4 = r6;
        do {
            if (s32(u32(*gptr<u8>(r5 + 0x1cu)) << 0x1b) < 0) {  // (from the original)
                guest::cpu()->s[0] = S0;
                guest::cpu()->s[1] = S1;
                guest::cpu()->s[2] = S2;
                construct_item(frame.at(4).addr(), uxth(r4 + 0x2000u), r2, guest::cpu()->r[3]);  // (from the original)
                u32 r0_6 = Item__index(frame.at(4).addr());
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                S0 = guest::cpu()->s[0];
                S1 = guest::cpu()->s[1];
                S2 = guest::cpu()->s[2];
                if (s32(r0_6) >= 0) {
                    r1 = s32(r0_6) >> 5;
                    if (r1 < 0xbau) {  // (from the original)
                        r1 = gptr<u32>(r7)[r1];
                        if (((r1 >> (r0_6 & 0x1fu)) & 1u) != 0) {  // (from the original)
                            r6 += 1u;
                        }
                    }
                }
            }
            r4 += 1u;
            r5 += 0x1eu;  // (from the original)
            guest::preempt();
        } while (r10 > r4);
        if (r9 != 0) {
            *gptr<u32>(r9) = 0xe86;  // (from the original)
        }
        if (r8 != 0) {
            *gptr<u32>(r8) = r6;
        }
        if (r6 != 0) {
            if (0xe86u > r6) {  // (from the original)
                float S1_3 = 3718.0f;
                float S0_3 = float(r6) * 100.0f / S1_3;
                if (s32(std::bit_cast<u32>(S0_3)) < 0x3f800000) {  // (from the original)
                    guest::cpu()->r[1] = r1;
                    guest::cpu()->s[0] = S0_3;
                    guest::cpu()->s[1] = S1_3;
                    return 1u;
                }
                float S0_4 = std::bit_cast<float>(vcvt_uz_f(S0_3));
                guest::cpu()->r[1] = r1;
                guest::cpu()->s[0] = S0_4;
                guest::cpu()->s[1] = S1_3;
                return std::bit_cast<u32>(S0_4);
            }
            guest::cpu()->r[1] = r1;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            return 0x64u;  // (from the original)
        }
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return 0u;
}

}  // namespace d_00770060
GUEST_EXPORT_FRAMED(0x00770060, d_00770060::ItemPrice__compute, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0077025c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The item of the category list at the index, or the empty id when the category differs or it is out of range.
namespace d_0077025c {

struct __attribute__((packed)) ItemList {
    u8 byte_0;
};
GUEST_OFFSET(ItemList, byte_0, 0x0);

inline constexpr guest::Function<0x005359fc, u32(u32, u32)> category_info;
inline constexpr guest::Function<0x006b9b30, u32(u32, u32)> item_number_in_category;

u32 ItemList__item_at(gptr<ItemList> item_list, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = item_list->byte_0;
    if (r0_1 == r1) {
        u32 info_2 = category_info(r0_1, r1);
        r1 = guest::cpu()->r[1];
        if (*gptr<u32>(info_2 + 4u) >= r2) {
            u32 r1_1 = *gptr<u32>(item_list.addr() + (r2 << 2) + 4u);
            u32 r0_3 = item_list->byte_0;
            frame.release();
            return item_number_in_category(r0_3, r1_1);
        }
    }
    guest::cpu()->r[1] = r1;
    return 0x7ffeu;  // (from the original)
}

}  // namespace d_0077025c
GUEST_EXPORT(0x0077025c, d_0077025c::ItemList__item_at);

// f_007702a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The number of items in the list before its first empty entry.
namespace d_007702a4 {

struct __attribute__((packed)) ItemList {
    u8 byte_0;
};
GUEST_OFFSET(ItemList, byte_0, 0x0);

inline constexpr guest::Function<0x005359fc, u32(u32, u32, u32, u32)> category_info;

u32 ItemList__count(gptr<ItemList> item_list, u32 r1, u32 r2) {
    u32 r0 = item_list.addr();
    u32 r0_2 = 0;
    u32 r0_1 = item_list->byte_0;
    if (r0_1 == 0x9bu) {  // (from the original)
        r0_2 = 0u;
    } else {
        u32 r4 = 0u;
        u32 info_2 = category_info(r0_1, r1, r2, guest::cpu()->r[3]);
        u32 r1_1 = r0 + (*gptr<u32>(info_2 + 4u) << 2);
        r0 += 4u;
        r1 = r1_1 + 4u;
        if (r1 > r0) {
            do {
                if (*gptr<u32>(r0) + 1u == 0) {
                    break;
                }
                r0 += 4u;
                r4 += 1u;
                guest::preempt();
            } while (r1 > r0);
        }
        r0_2 = r4;
    }
    guest::cpu()->r[1] = r1;
    return r0_2;
}

}  // namespace d_007702a4
GUEST_EXPORT_FRAMED(0x007702a4, d_007702a4::ItemList__count, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00770300: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The low 16 bits of the word at +0 (bounded by +4) plus byte +9 shifted left by 8.
namespace d_00770300 {

struct __attribute__((packed)) Object_00770300_0 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x1];  // (not used here)
    u8 byte_9;
};
GUEST_OFFSET(Object_00770300_0, word_0, 0x0);
GUEST_OFFSET(Object_00770300_0, word_4, 0x4);
GUEST_OFFSET(Object_00770300_0, byte_9, 0x9);


u32 pack_id_with_byte_9(gptr<Object_00770300_0> arg0) {
    u32 r1_1 = arg0->word_4;
    u32 r2_1 = arg0->word_0;
    if (r1_1 >= 1u) {
        if (!u32((u64(0xffu) + ~r1_1 + u32(~0u >= r2_1)) >> 0x20)) {  // (from the original)
            r1_1 &= 0xffu;  // (from the original)
        }
    }
    u32 r3_1 = arg0->byte_9;
    guest::cpu()->r[1] = uxth(u32(u64(r1_1) + (r3_1 << 8) + u32(r2_1 < r2_1)));
    return r2_1;
}

}  // namespace d_00770300
GUEST_EXPORT_FRAMED(0x00770300, d_00770300::pack_id_with_byte_9, 0x30);  // pushes {r4, r5} first, as the original

// f_007703c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The state, or 0 for state 1 with the flag.
namespace d_007703c8 {

struct __attribute__((packed)) State1 {
    u32 word_0;
};
GUEST_OFFSET(State1, word_0, 0x0);


u32 State1__value_unless_flag(gptr<State1> state1, u32 r1) {
    u32 r0_1 = state1->word_0;
    if (r0_1 != 1u) {
        return r0_1;
    }
    if (r1 != 0) {
        r0_1 = 0u;
    }
    return r0_1;
}

}  // namespace d_007703c8
GUEST_EXPORT(0x007703c8, d_007703c8::State1__value_unless_flag);

// f_00770934: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The index of the first free record of the 10, or -1.
namespace d_00770934 {

inline constexpr guest::Function<0x00758104, u32(u32, u32, u32, u32)> byte_270_low_bits_clear;

u32 Records10__first_free(u32 records10) {
    u32 r5 = records10;
    u32 r4 = 0u;
    do {
        u32 r0_2 = byte_270_low_bits_clear(r5 + r4 * 0x280u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        if (r0_2 != 0) {
            return r4;
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0xau);  // (from the original)
    return ~0u;
}

}  // namespace d_00770934
GUEST_EXPORT_FRAMED(0x00770934, d_00770934::Records10__first_free, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00770974: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether any of the 10 records is in use.
namespace d_00770974 {

inline constexpr guest::Function<0x00758104, u32(u32, u32, u32, u32)> byte_270_low_bits_clear;

u32 Records10__any_used(u32 records10) {
    u32 r5 = records10;
    u32 r4 = 0u;
    do {
        u32 r0_2 = byte_270_low_bits_clear(r5 + r4 * 0x280u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        if (r0_2 == 0) {
            return 1u;
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0xau);  // (from the original)
    return 0u;
}

}  // namespace d_00770974
GUEST_EXPORT_FRAMED(0x00770974, d_00770974::Records10__any_used, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_007709b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the color's two channels (scaled to 0.5..1.25) are within 10% of each other.
namespace d_007709b4 {

struct __attribute__((packed)) Color {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
    u8 byte_9;
};
GUEST_OFFSET(Color, byte_8, 0x8);
GUEST_OFFSET(Color, byte_9, 0x9);


u32 Color__is_near_neutral(gptr<Color> color) {
    float S3_1 = 0.003921569f;
    float S4_1 = 0.5f;
    float S2_1 = 1.25f - S4_1;
    float S1_1 = S2_1 * float(u32(color->byte_9));
    float S0_1 = S4_1 + S1_1 * S3_1;
    if (std::bit_cast<u32>(S0_1) + 0xc0a66665u > 0x266665u) {  // (from the original)
        guest::cpu()->r[1] = 0x88f97cu;  // (from the original)
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return 0u;
    }
    float S1_2 = 0.5f;
    float S1_3 = S1_2 + S2_1 * float(u32(color->byte_8)) * S3_1;
    if (0x4ccccdu >= std::bit_cast<u32>(S1_3 / S0_1) + 0xc0cccccdu) {  // (from the original)
        guest::cpu()->r[1] = 0xc0cccccdu;  // (from the original)
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_3;
        return 1u;
    }
    guest::cpu()->r[1] = 0xc0cccccdu;  // (from the original)
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_3;
    return 0u;
}

}  // namespace d_007709b4
GUEST_EXPORT(0x007709b4, d_007709b4::Color__is_near_neutral);

// f_00770b68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the animation is one of the two fixed ones; bit 0 for the second.
namespace d_00770b68 {

struct __attribute__((packed)) Animation {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Animation, word_c, 0xc);
GUEST_OFFSET(Animation, word_10, 0x10);

inline guest::global<u32, 0x00890210> global_00890210;
inline guest::global<u32, 0x00890214> global_00890214;
inline guest::global<u32, 0x00890218> global_00890218;
inline guest::global<u32, 0x0089021c> global_0089021c;

u32 Animation__is_kind_a_or_b(gptr<Animation> animation) {
    u32 r4_1 = 0;
    u32 r3_1 = animation->word_c;
    u32 r1_1 = *global_0089021c;
    if (r3_1 == *global_00890218) {
        if ((r3_1 != 0 || ((animation->word_10 | r1_1) & 1u) != 0) && animation->word_10 != r1_1) {
            goto L_770bb0;
        }
        r4_1 = 1u;
        goto L_770bb4;
    }
L_770bb0:;
    r4_1 = 0u;
L_770bb4:;
    u32 r1_2 = *global_00890214;
    if (r3_1 == *global_00890210) {
        if ((r3_1 != 0 || ((animation->word_10 | r1_2) & 1u) != 0) && animation->word_10 != r1_2) {
            guest::cpu()->r[1] = r1_2;
            return r4_1;
        }
        guest::cpu()->r[1] = r1_2;
        return 1u | r4_1;
    }
    guest::cpu()->r[1] = r1_2;
    return r4_1;
}

}  // namespace d_00770b68
GUEST_EXPORT_FRAMED(0x00770b68, d_00770b68::Animation__is_kind_a_or_b, 0x10);  // pushes {r4} first, as the original

// f_00770c04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The object's value at +0xc.
namespace d_00770c04 {

struct __attribute__((packed)) Object_00770c04_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_00770c04_0, word_c, 0xc);


u32 Object__word_c(gptr<Object_00770c04_0> object) {
    return object->word_c;
}

}  // namespace d_00770c04
GUEST_EXPORT(0x00770c04, d_00770c04::Object__word_c);

// f_00770c10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the counter has reached 100.
namespace d_00770c10 {

struct __attribute__((packed)) Counter {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Counter, word_4, 0x4);


u32 Counter__at_least_100(gptr<Counter> counter) {
    return counter->word_4 >= 0x64u;  // (from the original)
}

}  // namespace d_00770c10
GUEST_EXPORT(0x00770c10, d_00770c10::Counter__at_least_100);

// f_00779500: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Allocates from the current heap, 4-byte aligned.
namespace d_00779500 {

inline constexpr guest::Function<0x00131294, u32(u32, u32, u32, u32)> Heap__allocate;

u32 allocate_default(u32 size) {
    return Heap__allocate(0u, size, 4u, 0u);
}

}  // namespace d_00779500
GUEST_EXPORT(0x00779500, d_00779500::allocate_default);

// f_00779704: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Appends a no-op GPU command of the length (padded to 8 bytes), or marks the list full.
namespace d_00779704 {

struct __attribute__((packed)) Local_00779704_r12_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00779704_r12_1, word_0, 0x0);
GUEST_OFFSET(Local_00779704_r12_1, word_4, 0x4);

inline constexpr u32 command_list_cursor_address = 0x00974a7cu;
inline constexpr u32 command_list_end_address = 0x00974a80u;
inline guest::global<u32, 0x00974a7c> command_list_cursor;
inline guest::global<u32, 0x00974a80> command_list_end;

void CommandList__add_nop(u32 command_list, u32 r1) {
    gptr<Local_00779704_r12_1> r12_1 = gptr<Local_00779704_r12_1>(*command_list_cursor);
    u32 r3_1 = *command_list_end;
    if (r12_1.addr() + (r1 << 2) + 8u >= r3_1) {
        *command_list_cursor = r3_1;
    } else if (r1 != 0) {
        u32 r1_1 = r1 - 1u;
        r12_1->word_0 = 0;
        r12_1->word_4 = command_list | r1_1 << 0x14;  // (from the original)
        if ((r1_1 & 1u) != 0) {
            r1_1 += 1u;
        }
        *command_list_cursor = r12_1.addr() + 8u;
        *command_list_cursor = r12_1.addr() + 8u + (r1_1 << 2);
    }
}

}  // namespace d_00779704
GUEST_EXPORT_FRAMED(0x00779704, d_00779704::CommandList__add_nop, 0x70);  // pushes {r4, r5, r6} first, as the original

// f_00779764: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Appends the GPU commands to the list.
namespace d_00779764 {

inline constexpr u32 command_list_cursor_address = 0x00974a7cu;

void CommandList__add_commands(u32 command_list, u32 r1, u32 r2) {
    u32 res_2 = 0;
    u32 res_3 = 0;
    u32 r6 = command_list_cursor_address;
    u32 r3 = *gptr<u32>(r6);
    u32 r12_1 = *gptr<u32>(r6 + 4);
    if (r12_1 <= r3 + ((r1 & ~1u) + (r1 >> 7 << 1) << 2) + 8u) {
        *gptr<u32>(r6) = r12_1;
    } else {
        u32 r5 = 0u;
        if (r1 >= 0u && r1 != 0) {
            u32 r7 = r5 - 0x100000u;  // (from the original)
            do {
                u32 r12_2 = r2 + (r5 << 2);
                u32 r8_1 = r1 - r5;
                u32 v_1 = *gptr<u32>(r12_2);
                u32 r12 = r12_2 + 4u;
                if (r8_1 > 0x80u) {  // (from the original)
                    r8_1 = 0x80u;  // (from the original)
                }
                *gptr<u32>(r3) = v_1;
                u32 r3_1 = r3 + 4u;
                u32 r4 = r8_1 >> 1;
                u32 res_1 = r4 + 0x80000001u;  // (from the original)
                *gptr<u32>(r3_1) = r7 + (r8_1 << 0x14) | command_list + r5 | 0x80000000u | 0xf0000u;  // (from the original)
                r3 = r3_1 + 4u;
                if (res_1 < r4 && res_1 != 0) {
                    do {
                        u32 v_2 = *gptr<u32>(r12);
                        u32 r12_3 = r12 + 4u;
                        res_2 = r4 - 1u;
                        r4 = res_2;
                        *gptr<u32>(r3) = v_2;
                        u32 r3_2 = r3 + 4u;
                        r12 = r12_3 + 4u;
                        *gptr<u32>(r3_2) = *gptr<u32>(r12_3);
                        r3 = r3_2 + 4u;
                        guest::preempt();
                    } while (res_2 != 0);
                } else {
                    u32 r9_1 = r4 << 1;
                    if (s32(r9_1) > 0) {
                        r12 -= 4u;
                        u32 r8 = r3 - 4u;
                        u32 r9 = s32(r9_1) >> 1;
                        do {
                            res_3 = r9 - 1u;
                            r9 = res_3;
                            *gptr<u32>(r8 + 4u) = *gptr<u32>(r12 + 4u);
                            u32 ea_3 = r12 + 8u;
                            r12 = ea_3;
                            u32 r10_2 = *gptr<u32>(ea_3);
                            u32 ea_4 = r8 + 8u;
                            *gptr<u32>(ea_4) = r10_2;
                            r8 = ea_4;
                            guest::preempt();
                        } while (res_3 != 0);
                        r3 += (r4 << 3);
                    }
                }
                r5 += 0x80u;  // (from the original)
                guest::preempt();
            } while (r5 < r1);
        }
        *gptr<u32>(r6) = r3;
    }
}

}  // namespace d_00779764
GUEST_EXPORT_FRAMED(0x00779764, d_00779764::CommandList__add_commands, 0x7f0);  // pushes {r4, r5, r6, r7, r8, r9, r10} first, as the original

// f_00779848: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The GPU state's value at +0xc.
namespace d_00779848 {

inline guest::global<u32, 0x0097d46c> block_list;

u32 gpu_state_word_c() {
    return *gptr<u32>(*gptr<u32>(*block_list + 8u) + 0xcu);  // (from the original)
}

}  // namespace d_00779848
GUEST_EXPORT(0x00779848, d_00779848::gpu_state_word_c);

// f_00779860: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The GPU state's value at +0x1c.
namespace d_00779860 {

inline guest::global<u32, 0x0097d46c> block_list;

u32 gpu_state_word_1c() {
    return *gptr<u32>(*gptr<u32>(*block_list + 8u) + 0x1cu);  // (from the original)
}

}  // namespace d_00779860
GUEST_EXPORT(0x00779860, d_00779860::gpu_state_word_1c);

// f_0077a214: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Rounds the float up (in s0).
namespace d_0077a214 {


u32 ceilf(float S0, float S1) {
    u32 fpsr = guest::cpu()->fpscr;
    u32 r0_1 = std::bit_cast<u32>(S0);
    u32 r1_1 = (r0_1 >> 0x17u & 0xffu) - 0x7fu;  // (from the original)
    if (s32(r1_1) >= 0x17) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0;
        return r0_1;
    }
    float S2_1 = 0.0f;
    float S1_1 = S0 + 1e30f;
    if (s32(r1_1) < 0) {
        if ((fpsr & 0xfffffffu | vfp_cmpf(S2_1, S1_1)) >> 0x1d & 1) {  // (from the original)
            float S0_1 = std::bit_cast<float>(r0_1);
            guest::cpu()->r[1] = r1_1;
            guest::cpu()->s[0] = S0_1;
            guest::cpu()->s[1] = S1_1;
            return r0_1;
        }
        u32 res_1 = r0_1;
        u32 vf_1 = (r0_1 & (r0_1 ^ res_1)) >> 0x1f;  // (from the original)
        if (res_1 != 0 && s32(r0_1) >= 0) {
            r0_1 = 0x3f800000u;  // (from the original)
        }
        if (res_1 >> 0x1f != vf_1) {  // (from the original)
            r0_1 = 0x80000000u;  // (from the original)
        }
        float S0_2 = std::bit_cast<float>(r0_1);
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_1;
        return r0_1;
    }
    u32 r2_1 = lsr_r(0x7fffffu, r1_1 & 0xff);  // (from the original)
    if ((r0_1 & r2_1) == 0) {
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1_1;
        return r0_1;
    }
    if (!(S1_1 > S2_1)) {
        float S0_3 = std::bit_cast<float>(r0_1);
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_3;
        guest::cpu()->s[1] = S1_1;
        return r0_1;
    }
    if (s32(r0_1) <= 0) {
        u32 r0_2 = r0_1 & ~r2_1;
        float S0_4 = std::bit_cast<float>(r0_2);
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_4;
        guest::cpu()->s[1] = S1_1;
        return r0_2;
    }
    u32 r1_2 = lsr_r(0x800000u, r1_1 & 0xff);  // (from the original)
    u32 r0_4 = (r0_1 + r1_2) & ~r2_1;
    float S0_5 = std::bit_cast<float>(r0_4);
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->s[0] = S0_5;
    guest::cpu()->s[1] = S1_1;
    return r0_4;
}

}  // namespace d_0077a214
GUEST_EXPORT(0x0077a214, d_0077a214::ceilf);

// f_0077a2a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Converts the float to fixed point and stores it.
namespace d_0077a2a4 {

inline constexpr guest::Function<0x00101a13, u32(u32, u32)> store_word_af75e8;
inline constexpr guest::Function<0x0077b710, u32(u32, u32)> float_to_f24;

struct __attribute__((packed)) Frame_0077a2a4 {
    u32 word_0;
};
GUEST_OFFSET(Frame_0077a2a4, word_0, 0x0);
GUEST_SIZE(Frame_0077a2a4, 0x4);

u32 float_to_fixed_command(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3, float S0) {
    guest::StackFrameOf<Frame_0077a2a4> frame;  // the original's stack frame
    u32 r1_1 = std::bit_cast<u32>(S0);
    frame->word_0 = r3;
    if (0x7e921fb6u > (r1_1 << 1)) {  // (from the original)
        u32 r0_2 = 0x73000000u;  // (from the original)
        u32 b_2 = r1_1 << 1;
        u32 zf_1 = r0_2 == b_2;
        u32 cf_1 = r0_2 >= b_2;
        if (r0_2 > b_2) {
            r0_2 = ~0u;
        }
        if (!cf_1 || zf_1) {
            r0_2 = 0u;
        }
        frame->word_0 = r0_2;
    } else if (0x46490e49u > (r1_1 & ~0x80000000u)) {  // (from the original)
        float S4_1 = 0.0004837513f;
        float S3_1 = 2.563344e-12f;
        float S2_1 = S0 * 0.63661975f;
        float S1_1 = 8388608.0f;
        float S1_2 = s32(r1_1) >= 0 ? S2_1 + S1_1 - S1_1 : S2_1 - S1_1 + S1_1;
        float S0_1 = S0 - S1_2 * 1.5703125f;
        float S2_2 = 7.5495336e-8f;
        frame->word_0 = vcvt_sz_f(S1_2) & 3u;
        S0 = S0_1 - S1_2 * S4_1 - S1_2 * S2_2 - S1_2 * S3_1;
    } else {
        guest::cpu()->s[0] = S0;
        float_to_f24(frame.at(0).addr(), r1_1);
        r1_1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
    }
    u32 r0_3 = frame->word_0;
    float S0_2 = 1.0f;
    if (s32(r0_3) < 0) {
        u32 r0_4 = std::bit_cast<u32>(S0) << 1;
        if (r0_4 > 0xff000000u) {  // (from the original)
            S0_2 = S0 + S0;
        }
        if (r0_4 < 0xff000000u || r0_4 != 0xff000000u) {  // (from the original)
            guest::cpu()->r[1] = r1_1;
            guest::cpu()->s[0] = S0_2;
            guest::cpu()->s[1] = S0;
            return r0_4;
        }
        u32 r0_5 = store_word_af75e8(1u, r1_1);
        float S1_3 = 0.0f;
        float S0_3 = S1_3 / S1_3;
        guest::cpu()->s[0] = S0_3;
        guest::cpu()->s[1] = S1_3;
        return r0_5;
    }
    if ((r0_3 & 1u) != 0) {
        float S2_3 = S0 * S0;
        float S0_4 = S0 + S0 * ((-0.16666651f + S2_3 * (0.008331979f - S2_3 * 0.00019495636f)) * S2_3);
        if ((r0_3 & 2u) != 0) {
            guest::cpu()->r[1] = r1_1;
            guest::cpu()->s[0] = S0_4;
            guest::cpu()->s[1] = S0;
            return r0_3;
        }
        float S0_5 = -S0_4;
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_5;
        guest::cpu()->s[1] = S0;
        return r0_3;
    }
    float S1_4 = S0 * S0;
    float S0_6 = S0_2 + S1_4 * (-0.49999896f + S1_4 * (0.041656293f + S1_4 * -0.0013597823f));
    if ((r0_3 & 2u) == 0) {
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_6;
        guest::cpu()->s[1] = S1_4;
        return r0_3;
    }
    float S0_7 = -S0_6;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_7;
    guest::cpu()->s[1] = S1_4;
    return r0_3;
}

}  // namespace d_0077a2a4
GUEST_EXPORT_FRAMED(0x0077a2a4, d_0077a2a4::float_to_fixed_command, 0x4000);  // pushes {lr} first, as the original

// f_0077a650: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Rounds the float down (in s0).
namespace d_0077a650 {


u32 floorf(float S0, float S1) {
    u32 fpsr = guest::cpu()->fpscr;
    u32 r0_1 = std::bit_cast<u32>(S0);
    u32 r1_1 = (r0_1 >> 0x17u & 0xffu) - 0x7fu;  // (from the original)
    if (s32(r1_1) >= 0x17) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0;
        return r0_1;
    }
    float S2_1 = 0.0f;
    float S1_1 = S0 + 1e30f;
    if (s32(r1_1) < 0) {
        if ((fpsr & 0xfffffffu | vfp_cmpf(S2_1, S1_1)) >> 0x1d & 1) {  // (from the original)
            float S0_1 = std::bit_cast<float>(r0_1);
            guest::cpu()->r[1] = r1_1;
            guest::cpu()->s[0] = S0_1;
            guest::cpu()->s[1] = S1_1;
            return r0_1;
        }
        if (s32(r0_1) >= 0) {
            float S0_2 = std::bit_cast<float>(0u);
            guest::cpu()->r[1] = r1_1;
            guest::cpu()->s[0] = S0_2;
            guest::cpu()->s[1] = S1_1;
            return 0u;
        }
        if (r0_1 != 0x80000000u) {  // (from the original)
            r0_1 = 0xbf800000u;  // (from the original)
        }
        float S0_3 = std::bit_cast<float>(r0_1);
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_3;
        guest::cpu()->s[1] = S1_1;
        return r0_1;
    }
    u32 r2_1 = lsr_r(0x7fffffu, r1_1 & 0xff);  // (from the original)
    if ((r0_1 & r2_1) == 0) {
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1_1;
        return r0_1;
    }
    if ((fpsr & 0xfffffffu | vfp_cmpf(S2_1, S1_1)) >> 0x1d & 1) {  // (from the original)
        float S0_4 = std::bit_cast<float>(r0_1);
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_4;
        guest::cpu()->s[1] = S1_1;
        return r0_1;
    }
    if (s32(r0_1) >= 0) {
        u32 r0_2 = r0_1 & ~r2_1;
        float S0_5 = std::bit_cast<float>(r0_2);
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_5;
        guest::cpu()->s[1] = S1_1;
        return r0_2;
    }
    u32 r1_2 = lsr_r(0x800000u, r1_1 & 0xff);  // (from the original)
    u32 r0_4 = (r0_1 + r1_2) & ~r2_1;
    float S0_6 = std::bit_cast<float>(r0_4);
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->s[0] = S0_6;
    guest::cpu()->s[1] = S1_1;
    return r0_4;
}

}  // namespace d_0077a650
GUEST_EXPORT(0x0077a650, d_0077a650::floorf);

// f_0077ab5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Splits the float into its integer part (stored) and its fraction (in s0).
namespace d_0077ab5c {

struct __attribute__((packed)) Object_0077ab5c_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0077ab5c_0, word_0, 0x0);

struct __attribute__((packed)) Local_0077ab5c_ea_2 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_0077ab5c_ea_2, float_0, 0x0);
GUEST_OFFSET(Local_0077ab5c_ea_2, float_4, 0x4);


struct __attribute__((packed)) Frame_0077ab5c {
    u32 word_0;
    u8 unknown_4[0x4];  // (not read or written by name)
    u32 word_8;
};
GUEST_OFFSET(Frame_0077ab5c, word_0, 0x0);
GUEST_OFFSET(Frame_0077ab5c, word_8, 0x8);
GUEST_SIZE(Frame_0077ab5c, 0xc);

void modff(gptr<Object_0077ab5c_0> arg0, float S0, float S1) {
    guest::StackFrameOf<Frame_0077ab5c> frame;  // the original's stack frame
    frame->word_8 = arg0.addr();
    gptr<Local_0077ab5c_ea_2> ea_2 = gptr<Local_0077ab5c_ea_2>(frame.at(0).addr());
    ea_2->float_0 = S0;
    ea_2->float_4 = S1;
    u32 r1_1 = frame->word_0;
    if (0xff000000u < r1_1 << 1) {  // (from the original)
        arg0->word_0 = r1_1;
        float S0_1 = std::bit_cast<float>(frame->word_0);
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_1;
        return;
    }
    u32 r3_1 = r1_1 & 0x80000000u;  // (from the original)
    u32 r2_1 = (r1_1 >> 0x17u & 0xffu) - 0x7fu;  // (from the original)
    if (s32(r2_1) < 0x17) {  // (from the original)
        if (s32(r2_1) < 0) {
            u32 r1_2 = r1_1 & 0x80000000u;  // (from the original)
            arg0->word_0 = r1_2;
            float S0_2 = std::bit_cast<float>(frame->word_0);
            guest::cpu()->r[1] = r1_2;
            guest::cpu()->s[0] = S0_2;
            return;
        }
        u32 r2_2 = lsr_r(0x7fffffu, r2_1 & 0xff);  // (from the original)
        if ((r1_1 & r2_2) != 0) {
            u32 r1_3 = r1_1 & ~r2_2;
            arg0->word_0 = r1_3;
            float S1_1 = std::bit_cast<float>(frame->word_0);
            float S0_3 = S1_1 - std::bit_cast<float>(r1_3);
            guest::cpu()->r[1] = r1_3;
            guest::cpu()->s[0] = S0_3;
            return;
        }
    }
    arg0->word_0 = r1_1;
    float S0_4 = std::bit_cast<float>(r3_1);
    frame->word_0 = r3_1;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_4;
}

}  // namespace d_0077ab5c
GUEST_EXPORT(0x0077ab5c, d_0077ab5c::modff);

// f_0077b6e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Raises the floating-point overflow by squaring a huge double (in d0).
namespace d_0077b6e8 {

inline guest::global<u32, 0x0077b6fc> global_0077b6fc;

void math_raise_overflow_double() {
    float S0_1 = 0.0f;
    float S1_1 = std::bit_cast<float>(*global_0077b6fc);
    double dset_0_1 = D2F(S0_1, S1_1) * D2F(S0_1, S1_1);
    float S0_2 = std::bit_cast<float>(u32(std::bit_cast<u64>(dset_0_1)));
    float S1_2 = std::bit_cast<float>(u32(std::bit_cast<u64>(dset_0_1) >> 0x20u));  // (from the original)
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
}

}  // namespace d_0077b6e8
GUEST_EXPORT(0x0077b6e8, d_0077b6e8::math_raise_overflow_double);

// f_0077b700: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Raises the floating-point underflow by squaring a tiny float (in s0).
namespace d_0077b700 {


void math_raise_underflow_float() {
    float S0_1 = 2.524355e-29f;
    float S0_2 = S0_1 * S0_1;
    guest::cpu()->s[0] = S0_2;
}

}  // namespace d_0077b700
GUEST_EXPORT(0x0077b700, d_0077b700::math_raise_underflow_float);

// f_0077b854: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the bytes (any alignment) when there are any.
namespace d_0077b854 {

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32)> copy_bytes_at_any_alignment;

void memmove_if_any(u32 r0, u32 r1, u32 r2) {
    if (r2 == 0) {
        return;
    }
    copy_bytes_at_any_alignment(r1, r0, r2);
}

}  // namespace d_0077b854
GUEST_EXPORT(0x0077b854, d_0077b854::memmove_if_any);

// f_0077f2ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Writes the command for the depth mode when it changed since the last frame, and records it.
namespace d_0077f2ac {

struct __attribute__((packed)) Local_0077f2ac_r0_1 {
    u8 unknown_0[0xe38];  // (not used here)
    u32 word_e38;
    u8 unknown_e3c[0x38];  // (not used here)
    u8 byte_e74;
};
GUEST_OFFSET(Local_0077f2ac_r0_1, word_e38, 0xe38);
GUEST_OFFSET(Local_0077f2ac_r0_1, byte_e74, 0xe74);

struct __attribute__((packed)) Local_0077f2ac_r0_2 {
    u32 word_0;
    u8 unknown_4[0x176c];  // (not used here)
    u32 word_1770;
};
GUEST_OFFSET(Local_0077f2ac_r0_2, word_0, 0x0);
GUEST_OFFSET(Local_0077f2ac_r0_2, word_1770, 0x1770);

struct __attribute__((packed)) Local_0077f2ac_r1_1 {
    u32 word_0;
};
GUEST_OFFSET(Local_0077f2ac_r1_1, word_0, 0x0);

struct __attribute__((packed)) Local_0077f2ac_r1_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0077f2ac_r1_2, word_0, 0x0);
GUEST_OFFSET(Local_0077f2ac_r1_2, word_4, 0x4);

inline constexpr u32 command_list_cursor_address = 0x00974a7cu;
inline constexpr u32 gpu_depth_mode_address = 0x0097d470u;
inline constexpr u32 gpu_depth_state_address = 0x0097d478u;
inline guest::global<u32, 0x00974a7c> command_list_cursor;
inline guest::global<u32, 0x00974a80> command_list_end;
inline guest::global<u32, 0x0097d478> gpu_depth_state;
inline constexpr guest::Function<0x0079fb70, u32(u32, u32, u32, u32)> GpuState__set_depth_test;

void GpuState__sync_depth_mode() {
    gptr<Local_0077f2ac_r0_1> r0_1 = gptr<Local_0077f2ac_r0_1>(*gptr<u32>(*gpu_depth_state));
    if (r0_1.addr() == 0) {
        return;
    }
    u32 r3_1 = *gpu_depth_state;
    gptr<Local_0077f2ac_r1_1> r1_1 = gptr<Local_0077f2ac_r1_1>(r3_1 + 0x1770u);  // (from the original)
    if (r0_1->word_e38 == 0x6051u) {  // (from the original)
        if (r1_1->word_0 != 0x6051u) {  // (from the original)
            gptr<Local_0077f2ac_r1_2> r1_2 = gptr<Local_0077f2ac_r1_2>(*command_list_cursor);
            if (*command_list_end > r1_2.addr()) {
                r1_2->word_0 = 0;
                r1_2->word_4 = 0xf0125;  // (from the original)
                *command_list_cursor = r1_2.addr() + 8u;
            }
        }
    } else if (r1_1->word_0 == 0x6051u && r0_1->byte_e74 != 0) {  // (from the original)
        GpuState__set_depth_test(r0_1.addr(), r1_1.addr(), 0x6051u, r3_1);  // (from the original)
    }
    gptr<Local_0077f2ac_r0_2> r0_2 = gptr<Local_0077f2ac_r0_2>(*gpu_depth_state);
    r0_2->word_1770 = *gptr<u32>(r0_2->word_0 + 0xe38u);  // (from the original)
}

}  // namespace d_0077f2ac
GUEST_EXPORT_FRAMED(0x0077f2ac, d_0077f2ac::GpuState__sync_depth_mode, 0x4010);  // pushes {r4, lr} first, as the original
