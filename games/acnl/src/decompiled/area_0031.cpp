// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen. Hexadecimal constants are the original's
// (addresses, offsets, sizes and ids as the game has them).
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_0031032c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031032c {

struct __attribute__((packed)) script__WordFix_60u_ {
    u8 unknown_0[0xa05];  // (not used here)
    u8 byte_a05;
    u8 unknown_a06[0x29a];  // (not used here)
    u32 word_ca0;
    u8 unknown_ca4[0x700];  // (not used here)
    u32 word_13a4;
    u8 unknown_13a8[0x700];  // (not used here)
    u32 word_1aa8;
    u8 unknown_1aac[0xcb8];  // (not used here)
    u32 word_2764;
};
GUEST_OFFSET(script__WordFix_60u_, byte_a05, 0xa05);
GUEST_OFFSET(script__WordFix_60u_, word_ca0, 0xca0);
GUEST_OFFSET(script__WordFix_60u_, word_13a4, 0x13a4);
GUEST_OFFSET(script__WordFix_60u_, word_1aa8, 0x1aa8);
GUEST_OFFSET(script__WordFix_60u_, word_2764, 0x2764);

struct __attribute__((packed)) Local_0031032c_r0_1 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_0031032c_r0_1, byte_b7, 0xb7);

struct __attribute__((packed)) Local_0031032c_r0_2 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_0031032c_r0_2, byte_b7, 0xb7);

inline constexpr u32 vtable_script__WordFix_60u__rec = 0x0090a1f0u;
inline constexpr u32 message_store_address = 0x0095deccu;
inline guest::global<u32, 0x0095decc> message_store;
inline constexpr guest::Function<0x00299984, u32(u32, u32)> set_flag_6f8;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x00305784, u32(u32, u32)> MailView__refresh;
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32)> script__construct_word_ptr;
inline constexpr guest::Function<0x0030af7c, u32(u32, u32)> NetMenu__set_toggle;
inline constexpr guest::Function<0x0030b4a8, u32(u32, u32)> NetMenu__set_peer_toggle;
inline constexpr guest::Function<0x0030baa8, u32(u32, u32)> NetMenu__select_button;
inline constexpr guest::Function<0x00568630, u32(u32, u32, u32, u32)> notify_objects_of_list;
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> notify_list_objects;
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> Layout__virtual_3;
inline constexpr guest::Function<0x005697e0, u32(u32)> Animation__set_value;
inline constexpr guest::Function<0x005e2e50, u32(u32, u32)> start_message;
inline constexpr guest::Function<0x005e2f94, u32(u32)> TextBox__layout_lines;
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32)> LinkOwner__unlink;
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> MessageStore__attach_window;
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> load_message;
inline constexpr guest::Function<0x005f4bfc, u32(u32)> construct_script_word;

struct __attribute__((packed)) RefreshNetMenuTextBFrame {
    u32 word_0;
    u8 unknown_4[0x4];  // (not read or written by name)
    u32 word_8;
    u8 unknown_c[0x90];  // (not read or written by name)
};
GUEST_OFFSET(RefreshNetMenuTextBFrame, word_0, 0x0);
GUEST_OFFSET(RefreshNetMenuTextBFrame, word_8, 0x8);
GUEST_SIZE(RefreshNetMenuTextBFrame, 0x9c);

u32 refresh_net_menu_text_b(gptr<script__WordFix_60u_> word_fix_60u, u32 r1_unused, u32 r2_unused, u32 r3, float S0) {
    guest::StackFrameOf<RefreshNetMenuTextBFrame> frame;  // the original's stack frame
    u32 r0 = word_fix_60u.addr();
    u32 res_1 = 0;
    u32 r3_12 = 0;
    u32 net_menu = r0;
    *gptr<u8>(net_menu + 0x35b4u) = 1;
    gptr<Local_0031032c_r0_1> r0_1 = gptr<Local_0031032c_r0_1>(*gptr<u32>(net_menu + 0x2754u));
    u32 r7 = 0u;
    r0_1->byte_b7 = u8(u32(r0_1->byte_b7) & 0xfeu | 1u);
    gptr<Local_0031032c_r0_2> r0_2 = gptr<Local_0031032c_r0_2>(*gptr<u32>(net_menu + 0x2750u));
    u32 r1_1 = u32(r0_2->byte_b7) & 0xfeu;
    r0_2->byte_b7 = u8(r1_1);
    Layout__virtual_3(net_menu + 0x4d0u, r1_1, 0x2754u, r3);
    word_fix_60u->word_ca0 = word_fix_60u->word_ca0 | 8u;
    word_fix_60u->word_13a4 = word_fix_60u->word_13a4 | 8u;
    word_fix_60u->word_1aa8 = word_fix_60u->word_1aa8 | 8u;
    set_flag_6f8(net_menu + 0x1ab8u, 1u);
    MailView__refresh(net_menu, 0u);
    if (word_fix_60u->byte_a05 == 1u) {
        u32 r5_1 = net_menu + 0x2764u;
        u32 r1_2 = net_menu + 0x458u;
        notify_objects_of_list(net_menu + 0x294u, r1_2, word_fix_60u->word_2764, 0u);
        float S0_4 = 0.0f;
        guest::cpu()->s[0] = S0_4;
        Animation__set_value(r1_2);
        word_fix_60u->byte_a05 = u8(r7);
        Layout__virtual_3(net_menu + 0x294u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        notify_list_objects(net_menu + 0x294u, r1_2, word_fix_60u->word_2764, 0u);
    }
    NetMenu__set_toggle(net_menu, 1u);
    NetMenu__set_peer_toggle(net_menu, 1u);
    NetMenu__select_button(net_menu, 1u);
    u32 r0_8 = frame.at(8).addr();
    script__construct_word_ptr(r0_8, frame.at(0x20).addr(), 0x3cu);
    u32 r6 = vtable_script__WordFix_60u__rec;
    *gptr<u32>(r0_8) = r6;
    u32 r0_9 = r0_8 + 0xcu;
    construct_script_word(r0_9);
    clear_aligned(r0_9 + 0xcu, 0x78u);
    S0 = guest::cpu()->s[0];
    u32 r2 = 0x8906ecu;
    r0 = (r0_9 - 0xcu) + 0x16u;
    u32 r1 = 0x1eu;
    do {
        res_1 = r1 - 1u;
        r1 = res_1;
        u32 r3_11 = *gptr<u16>(r2);
        *gptr<u16>(r0 + 2u) = u16(r3_11);
        r3_12 = *gptr<u16>(r2);
        u32 ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r3_12);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    u32 r0_11 = *message_store;
    guest::cpu()->s[0] = S0;
    MessageStore__attach_window(r0_11, 0u, r2, r3_12);
    frame->word_0 = r7;
    load_message(*message_store, frame.at(8).addr(), 0x310524u, 0x17cu);
    LinkOwner__unlink(*message_store, 0u);
    u32 view = net_menu + 0x34f0u;
    start_message(view, frame.at(8).addr());
    TextBox__layout_lines(view);
    frame->word_8 = r6;
    return frame.at(8).addr();
}

}  // namespace d_0031032c
GUEST_EXPORT_FRAMED(0x0031032c, d_0031032c::refresh_net_menu_text_b, 0x40f0);  // pushes {net_menu, r5, r6, r7, lr} first, as the original

// f_00310530: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Flag `index` (fewer than 10) of the villager (bits of +0x1f and +0x20); false for no villager.
namespace d_00310530 {

struct __attribute__((packed)) Index {
    u8 unknown_0[0x310542];  // (not used here)
    u8 byte_310542;
};
GUEST_OFFSET(Index, byte_310542, 0x310542);


u32 Villager__flag(u32 villager, gptr<Index> index) {
    u32 r1 = index.addr();
    u32 r0_2 = 0;
    u32 r0_5 = 0;
    u32 r0_7 = 0;
    u32 r0_9 = 0;
    u32 r0_11 = 0;
    u32 r0_13 = 0;
    u32 r0_15 = 0;
    if (villager == 0 || r1 >= 0xau) {
        return 0u;
    }
    u32 r2_1 = index->byte_310542;
    u32 r2_2 = r2_1 + r2_1;
    u32 tpc_1 = r2_2 + 0x310544u | 1;
    switch (tpc_1) {
        case 0x31054d: goto L_31054c;
        case 0x310555: goto L_310554;
        case 0x310559: goto L_310558;
        case 0x310561: goto L_310560;
        case 0x310569: goto L_310568;
        case 0x310573: goto L_310572;
        case 0x31057b: goto L_31057a;
        case 0x310583: goto L_310582;
        case 0x31058b: goto L_31058a;
        case 0x310593: goto L_310592;
        default: break;
    }
    return guest::call_address<u32>(tpc_1, villager, r1, r2_2, guest::cpu()->r[3]);
L_31054c:;
    return u32(*gptr<u8>(villager + 0x1fu)) >> 1u & 1u;
L_310554:;
    r0_2 = *gptr<u8>(villager + 0x1fu);
    return r0_2 & 1u;
L_310558:;
    return u32(*gptr<u8>(villager + 0x20u)) >> 7;
L_310560:;
    r0_5 = u32(*gptr<u8>(villager + 0x20u)) << 0x19;
    return r0_5 >> 0x1f;
L_310568:;
    r0_7 = u32(*gptr<u8>(villager + 0x20u)) << 0x1a;
    return r0_7 >> 0x1f;
L_310572:;
    r0_9 = u32(*gptr<u8>(villager + 0x20u)) << 0x1b;
    return r0_9 >> 0x1f;
L_31057a:;
    r0_11 = u32(*gptr<u8>(villager + 0x20u)) << 0x1c;
    return r0_11 >> 0x1f;
L_310582:;
    r0_13 = u32(*gptr<u8>(villager + 0x20u)) << 0x1d;
    return r0_13 >> 0x1f;
L_31058a:;
    r0_15 = u32(*gptr<u8>(villager + 0x20u)) << 0x1e;
    return r0_15 >> 0x1f;
L_310592:;
    u32 r0_17 = *gptr<u8>(villager + 0x20u);
    return r0_17 & 1u;
}

}  // namespace d_00310530
GUEST_EXPORT(0x00310531, d_00310530::Villager__flag);

// f_00310a30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the villager part of the town data: villagers, their records, the paired player records and the timed
// records.
namespace d_00310a30 {

struct __attribute__((packed)) Local_00310a30_r5_1 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
    u8 byte_4;
    u8 byte_5;
    u8 byte_6;
    u8 byte_7;
};
GUEST_OFFSET(Local_00310a30_r5_1, byte_0, 0x0);
GUEST_OFFSET(Local_00310a30_r5_1, byte_1, 0x1);
GUEST_OFFSET(Local_00310a30_r5_1, byte_2, 0x2);
GUEST_OFFSET(Local_00310a30_r5_1, byte_3, 0x3);
GUEST_OFFSET(Local_00310a30_r5_1, byte_4, 0x4);
GUEST_OFFSET(Local_00310a30_r5_1, byte_5, 0x5);
GUEST_OFFSET(Local_00310a30_r5_1, byte_6, 0x6);
GUEST_OFFSET(Local_00310a30_r5_1, byte_7, 0x7);

struct __attribute__((packed)) Local_00310a30_r6_1 {
    u8 unknown_0[0x10];  // (not used here)
    u16 half_10;
    u16 half_12;
    u8 unknown_14[0x6];  // (not used here)
    u16 half_1a;
};
GUEST_OFFSET(Local_00310a30_r6_1, half_10, 0x10);
GUEST_OFFSET(Local_00310a30_r6_1, half_12, 0x12);
GUEST_OFFSET(Local_00310a30_r6_1, half_1a, 0x1a);

inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x00301444, u32(u32, u32)> clear;
inline constexpr guest::Function<0x00308355, u32(u32, u32, u32, u32)> init_object_with_sub_objects;
inline constexpr guest::Function<0x00308d4d, u32(u32, u32, u32, u32)> Villager__clear;
inline constexpr guest::Function<0x0030b8bc, u32(u32)> reset_record_0030b8bc;
inline constexpr guest::Function<0x0030c428, u32(u32, u32, u32, u32)> reset_record_book;
inline constexpr guest::Function<0x0030c4d0, u32(u32)> reset_record_4e;
inline constexpr guest::Function<0x0030c4f4, u32(u32)> PlayerPairRecords__clear;
inline constexpr guest::Function<0x0030c599, u32(u32)> clear_16_entries_of_12_bytes;
inline constexpr guest::Function<0x005bbdf8, u32(u32)> TimedRecord__init_state_2;

struct __attribute__((packed)) TownDataClearVillagerPartFrame {
    u32 word_0;
};
GUEST_OFFSET(TownDataClearVillagerPartFrame, word_0, 0x0);
GUEST_SIZE(TownDataClearVillagerPartFrame, 0x4);

u32 TownData__clear_villager_part(u32 town_data, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<TownDataClearVillagerPartFrame> frame;  // the original's stack frame
    u32 res_1 = 0;
    frame->word_0 = r3;
    u32 i = 0u;
    u32 r4 = town_data;
    do {
        Villager__clear(0x2518u * i + r4, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        i += 1u;
        guest::preempt();
    } while (s32(i) < 0xa);
    u32 r1_1 = r4 + 0x172e0u;
    *gptr<u32>(r1_1 + 0x10u) = 0;
    reset_record_book(r4 + 0x172f4u, r1_1, r2, r3);
    reset_record_0030b8bc(r4 + 0x173a0u);
    reset_record_0030b8bc(r4 + 0x173c6u);
    reset_record_4e(r4 + 0x173ecu);
    PlayerPairRecords__clear(r4 + 0x17448u);
    TimedRecord__init_state_2(r4 + 0x1764au);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    i = 0xffffu;
    town_data = r4 + 0x17654u;
    r1 = 8u;
    do {
        *gptr<u16>(town_data + 2u) = u16(i);
        town_data += 4u;
        res_1 = r1 - 1u;
        r1 = res_1;
        *gptr<u16>(town_data) = u16(i);
        guest::preempt();
    } while (res_1 != 0);
    init_object_with_sub_objects(r4 + 0x17676u, r1, r2, r3);
    init_object_with_sub_objects(r4 + 0x185f2u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    clear_16_entries_of_12_bytes(r4 + 0x19570u);
    clear_16_entries_of_12_bytes(r4 + 0x19630u);
    gptr<Local_00310a30_r6_1> r6_1 = gptr<Local_00310a30_r6_1>(r4 + 0x196e0u);
    r6_1->half_10 = u16(i);
    gptr<Local_00310a30_r5_1> r5_1 = gptr<Local_00310a30_r5_1>(r4 + 0x19760u);
    r6_1->half_1a = 0x7ffe;
    u32 r7_1 = ~0u;
    r5_1->byte_7 = u8(r7_1);
    clear_aligned(r4 + 0x196fcu, 0x32u);
    clear(r4 + 0x1972eu, 0x32u);
    r5_1->byte_0 = 0;
    r5_1->byte_1 = u8(r7_1);
    r5_1->byte_2 = u8(r7_1);
    r5_1->byte_3 = u8(r7_1);
    r5_1->byte_5 = u8(r7_1);
    r5_1->byte_4 = u8(r7_1);
    r5_1->byte_6 = 0;
    r6_1->half_12 = 0x7db;
    u32 r1_10 = r4 + 0x196e6u;
    *gptr<u16>((r4 + 0x196e2u) + 0x12u) = 0x7db;
    *gptr<u16>((r4 + 0x196e4u) + 0x12u) = 0x7db;
    *gptr<u16>(r1_10 + 0x12u) = 0x7db;
    guest::cpu()->r[1] = r1_10;
    return 0x7dbu;
}

}  // namespace d_00310a30
GUEST_EXPORT_FRAMED(0x00310a31, d_00310a30::TownData__clear_villager_part, 0x40f0);  // pushes {r4, i, r6, r7, lr} first, as the original

// f_0031108c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Moves the villager out: copies its block to the moved-out list, removes it from the id list and clears its slot.
namespace d_0031108c {

struct __attribute__((packed)) Local_0031108c_ea_1 {
    u32 villager;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(Local_0031108c_ea_1, villager, 0x0);
GUEST_OFFSET(Local_0031108c_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0031108c_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_0031108c_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_0031108c_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_0031108c_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_0031108c_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_0031108c_ea_1, word_1c, 0x1c);
GUEST_OFFSET(Local_0031108c_ea_1, word_20, 0x20);

struct __attribute__((packed)) Local_0031108c_r1_9 {
    u8 unknown_0[0x2];  // (not used here)
    u8 byte_2;
    u8 unknown_3[0x3];  // (not used here)
    u8 byte_6;
};
GUEST_OFFSET(Local_0031108c_r1_9, byte_2, 0x2);
GUEST_OFFSET(Local_0031108c_r1_9, byte_6, 0x6);

inline constexpr guest::Function<0x0010d691, u32(u32, u32, u32, u32)> VillagerPart__copy_villager_block;
inline constexpr guest::Function<0x0010edd5, u32(u32, u32, u32, u32)> Players__update_records;
inline constexpr guest::Function<0x001b63b4, u32(u32, u32, u32)> remove_numbered_entry;
inline constexpr guest::Function<0x0024088c, u32(u32)> StructureList__remove_matching;
inline constexpr guest::Function<0x0024e8cc, u32(u32, u32, u32)> SaleSlots8__clear_villager;
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> get_data_base;
inline constexpr guest::Function<0x002fb7e8, u32(u32, u32, u32, u32)> player_at;
inline constexpr guest::Function<0x002fbd54, u32(u32, u32, u32, u32)> PersonalId__is_set;
inline constexpr guest::Function<0x002fe470, u32(u32, u32, u32, u32)> is_record_valid;
inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> is_villager_record;
inline constexpr guest::Function<0x00308d4d, u32(u32)> Villager__clear;
inline constexpr guest::Function<0x005be844, u32(u32, u32, u32, u32)> IdList11__remove;

void Villager__move_out(u32 villager, u32 r1, u32 r2, u32 r3) {
    u32 i = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 r4_1 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    gptr<Local_0031108c_ea_1> ea_1 = gptr<Local_0031108c_ea_1>(r13 - 0x24);
    ea_1->villager = villager;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r3;
    ea_1->word_10 = i;
    ea_1->word_14 = r5;
    ea_1->word_18 = r6;
    ea_1->word_1c = r7;
    ea_1->word_20 = r14;
    r13 = ea_1.addr() - 0x14u;
    u32 r0_1 = *gptr<u32>(r13 + 0x18u);
    u32 r1_1 = *gptr<u32>(r13 + 0x14u);
    if (r0_1 >= 0xau) {
        r4_1 = 0u;
    } else {
        r2 = 0x2518u;
        r4_1 = r0_1 * r2 + r1_1;
        if (r4_1 == 0) {
            goto L_3110ee;
        }
        guest::cpu()->r[13] = r13;
        u32 r0_2 = is_record_valid(r4_1, r1_1, r2, r3);
        r1_1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_2 == 0) {
            goto L_3110ee;
        }
    }
    if (r4_1 != 0) {
        guest::cpu()->r[13] = r13;
        u32 is_villager = is_villager_record(r4_1, r1_1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (is_villager != 0) {
            u32 r0_4 = *gptr<u16>(r4_1 + 0x2cu);
            *gptr<u32>(r13 + 0xcu) = r0_4;
            guest::cpu()->r[13] = r13;
            u32 data_base = get_data_base(r0_4, guest::cpu()->r[1], r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r6 = 0x55a6u;
            r7 = 0x8ebeu;
            i = 0u;
            *gptr<u32>(r13) = data_base + 0x20u;
            do {
                u32 r0_6 = *gptr<u32>(r13);
                guest::cpu()->r[13] = r13;
                u32 player = player_at(r0_6, uxtb(i), r2, r3);
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (player != 0) {
                    guest::cpu()->r[13] = r13;
                    u32 r0_9 = PersonalId__is_set(player + r6, guest::cpu()->r[1], r2, r3);
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    if (r0_9 != 0) {
                        u32 r1_5 = *gptr<u32>(r13 + 0xcu);
                        guest::cpu()->r[13] = r13;
                        IdList11__remove(player + r7, r1_5, r2, r3);
                        r2 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
                    }
                }
                i += 1u;
                guest::preempt();
            } while (s32(i) < 4);
        }
    }
L_3110ee:;
    u32 r1_6 = *gptr<u32>(r13 + 0x1cu);
    u32 r0_11 = *gptr<u32>(r13 + 0x14u);
    guest::cpu()->r[13] = r13;
    u32 r0_12 = Players__update_records(r0_11, r1_6, r2, r3);
    guest::cpu()->r[13] = r13;
    u32 data_base_2 = get_data_base(r0_12, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_8 = *gptr<u32>(r13 + 0x18u);
    guest::cpu()->r[13] = r13;
    remove_numbered_entry(data_base_2 + 0x7170cu, r1_8, 0x7170cu);
    i = 0u;
    r5 = 0xfdu;
    villager = *gptr<u32>(r13 + 0x1cu) + 0x8eeu;
    r6 = 0xfbu;
    r7 = 0xf7u;
    do {
        gptr<Local_0031108c_r1_9> r1_9 = gptr<Local_0031108c_r1_9>(villager + 0xb6u);
        villager += 0xf2u;
        i += 1u;
        r2_2 = u32(r1_9->byte_2) & r5 & r6;
        r3_3 = u32(r1_9->byte_6) & r5 & r7;
        r1_9->byte_2 = u8(r2_2);
        r1_9->byte_6 = u8(r3_3);
        guest::preempt();
    } while (s32(i) < 0x10);
    u32 r1_10 = *gptr<u16>(*gptr<u32>(r13 + 0x1cu) + 0x2cu);
    u32 villager_part = *gptr<u32>(r13 + 0x14u);
    guest::cpu()->r[13] = r13;
    VillagerPart__copy_villager_block(villager_part, r1_10, r2_2, r3_3);
    u32 r0_16 = *gptr<u32>(r13 + 0x1cu);
    guest::cpu()->r[13] = r13;
    Villager__clear(r0_16);
    u32 structure_list = uxtb(*gptr<u32>(r13 + 0x18u) + 8u);
    guest::cpu()->r[13] = r13;
    StructureList__remove_matching(structure_list);
    u32 r1_13 = guest::cpu()->r[1];
    u32 r2_5 = guest::cpu()->r[2];
    u32 r0_18 = *gptr<u32>(r13 + 0x20u);
    if (r0_18 == 0) {
        r2_5 = 0x19760u;
        r0_18 = 0u;
        r1_13 = *gptr<u32>(r13 + 0x14u) + r2_5;
        *gptr<u8>(r1_13) = u8(r0_18);
    }
    guest::cpu()->r[13] = r13;
    u32 data_base_3 = get_data_base(r0_18, r1_13, r2_5, guest::cpu()->r[3]);
    u32 r1_14 = *gptr<u32>(r13 + 0x18u);
    guest::cpu()->r[13] = r13;
    SaleSlots8__clear_villager(data_base_3 + 0x621d0u, r1_14, 0x621d0u);
    r13 += 0x24u;
    u32 r4_2 = *gptr<u32>(r13);
    u32 r5_1 = *gptr<u32>(r13 + 4);
    u32 r6_1 = *gptr<u32>(r13 + 8);
    u32 r7_1 = *gptr<u32>(r13 + 0xc);
    u32 tpc_1 = *gptr<u32>(r13 + 0x10);
    r13 += 0x14;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[13] = r13;
}

}  // namespace d_0031108c
GUEST_EXPORT(0x0031108d, d_0031108c::Villager__move_out);

// f_003113b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs an empty scheduled record (kind 0x21, invalid time).
namespace d_003113b8 {

struct __attribute__((packed)) ScheduledRecord {
    u8 unknown_0[0x1e];  // (not used here)
    u8 byte_1e;
    u8 byte_1f;
    u8 byte_20;
    u8 byte_21;
    u8 byte_22;
    u8 byte_23;
    u8 byte_24;
};
GUEST_OFFSET(ScheduledRecord, byte_1e, 0x1e);
GUEST_OFFSET(ScheduledRecord, byte_1f, 0x1f);
GUEST_OFFSET(ScheduledRecord, byte_20, 0x20);
GUEST_OFFSET(ScheduledRecord, byte_21, 0x21);
GUEST_OFFSET(ScheduledRecord, byte_22, 0x22);
GUEST_OFFSET(ScheduledRecord, byte_23, 0x23);
GUEST_OFFSET(ScheduledRecord, byte_24, 0x24);

inline constexpr guest::Function<0x0027a48c, u32(u32)> SavedRecordHeader__clear;
inline constexpr guest::Function<0x00303cdc, u32(u32)> clear_inner;
inline constexpr guest::Function<0x005cdf48, u32(u32, u32, u32, u32)> game_time_set;

u32 ScheduledRecord__ScheduledRecord(gptr<ScheduledRecord> scheduled_record, u32 r1) {
    u32 r4_1 = scheduled_record.addr() + 0x16u;
    game_time_set(r4_1, r1, ~0u, ~0x80000000u);
    scheduled_record->byte_1e = 0x21;
    clear_inner(r4_1);
    scheduled_record->byte_1f = 0xff;
    scheduled_record->byte_20 = 9;
    scheduled_record->byte_1e = 0x21;
    clear_inner(scheduled_record.addr() + 0x16u);
    scheduled_record->byte_1f = 0xff;
    scheduled_record->byte_20 = 9;
    SavedRecordHeader__clear(scheduled_record.addr());
    scheduled_record->byte_21 = 0xff;
    scheduled_record->byte_22 = 0;
    scheduled_record->byte_23 = 0;
    scheduled_record->byte_24 = 0;
    return scheduled_record.addr();
}

}  // namespace d_003113b8
GUEST_EXPORT_FRAMED(0x003113b8, d_003113b8::ScheduledRecord__ScheduledRecord, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_00311744: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The 0x58-byte data entry of villager `id` (below 0x18f); null without the table.
namespace d_00311744 {

struct __attribute__((packed)) VillagerDataEntryArg0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(VillagerDataEntryArg0, word_4, 0x4);


u32 villager_data_entry(gptr<VillagerDataEntryArg0> table, u32 id) {
    u32 r0_1 = table->word_4;
    u32 zf_1 = r0_1 == 0;
    u32 cf_1 = r0_1 >= 0u;
    if (!zf_1) {
        zf_1 = 0x18fu == id;
        cf_1 = 0x18fu >= id;
    }
    if (!cf_1 || zf_1) {
        guest::cpu()->r[1] = id;
        return 0u;
    }
    u32 r1_1 = id * 3u + (id << 3);
    guest::cpu()->r[1] = r1_1;
    return r0_1 + (r1_1 << 3);
}

}  // namespace d_00311744
GUEST_EXPORT(0x00311744, d_00311744::villager_data_entry);

// f_00311f7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Adds the friendship (8-bit, saturating) to the villager's memory of the player.
namespace d_00311f7c {

struct __attribute__((packed)) SaveVillagerAddFriendshipArg2 {
    u8 unknown_0[0x14];  // (not used here)
    u8 byte_14;
};
GUEST_OFFSET(SaveVillagerAddFriendshipArg2, byte_14, 0x14);

struct __attribute__((packed)) Local_00311f7c_ea_1 {
    u32 save_villager;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(Local_00311f7c_ea_1, save_villager, 0x0);
GUEST_OFFSET(Local_00311f7c_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_00311f7c_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_00311f7c_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_00311f7c_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_00311f7c_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_00311f7c_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_00311f7c_ea_1, word_1c, 0x1c);
GUEST_OFFSET(Local_00311f7c_ea_1, word_20, 0x20);

inline constexpr guest::Function<0x001df598, u32(u32, u32)> Packed__add_8bits_at_3_1;
inline constexpr guest::Function<0x002fc224, u32(u32, u32)> read_state_value;
inline constexpr guest::Function<0x00309f85, u32(u32, u32, u32, u32)> SaveVillager__find_player_record_00309f84;
inline constexpr guest::Function<0x0030e228, u32(u32)> byte_2e_is_4_to_7;

u32 SaveVillager__add_friendship(u32 save_villager, u32 r1, gptr<SaveVillagerAddFriendshipArg2> arg2, u32 r3) {
    u32 r2 = arg2.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 r4_2 = 0;
    u32 r5_2 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 tpc_1 = 0;
    gptr<Local_00311f7c_ea_1> ea_1 = gptr<Local_00311f7c_ea_1>(r13 - 0x24);
    ea_1->save_villager = save_villager;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r3;
    ea_1->word_10 = r4;
    ea_1->word_14 = r5;
    ea_1->word_18 = r6;
    ea_1->word_1c = r7;
    ea_1->word_20 = r14;
    r13 = ea_1.addr() - 4u;
    u32 r4_1 = r1;
    u32 r0_1 = *gptr<u32>(r13 + 4u);
    guest::cpu()->r[13] = r13;
    u32 r0_2 = SaveVillager__find_player_record_00309f84(r0_1, r2, r2, r3);
    if (r0_2 != 0) {
        if (r3 == 0) {
            goto L_311ff0;
        }
        u32 r0_3 = *gptr<u32>(r13 + 4u);
        guest::cpu()->r[13] = r13;
        u32 r0_4 = byte_2e_is_4_to_7(r0_3);
        u32 r1_2 = u32(arg2->byte_14) & 1u;
        u32 r5_1 = r0_4 == r1_2;
        guest::cpu()->r[13] = r13;
        u32 r0_5 = read_state_value(r0_4, r1_2);
        if (r0_5 != 2u) {
            if (r0_5 == 3u) {
                if (r5_1 == 0) {
                    goto L_311ff0;
                }
                if (s32(r4_1) >= 0) {
                    goto L_311fea;
                }
                goto L_311ff0;
            }
            if (r0_5 == 4u) {
                if (r5_1 != 0) {
                    goto L_311ff0;
                }
                if (s32(r4_1) <= 0) {
                    goto L_311fea;
                }
                r4_1 += 1u;
                goto L_311ff0;
            }
            if (r0_5 != 5u || r5_1 != 0 || s32(r4_1) < 0) {
                goto L_311ff0;
            }
            goto L_311fea;
        }
        if (r5_1 == 0) {
            goto L_311ff0;
        }
        if (s32(r4_1) <= 0) {
            goto L_311fea;
        }
        r4_1 += 1u;
        goto L_311ff0;
L_311fea:;
        r0_2 = 0u;
    }
    r13 += 0x14u;
    r4_2 = *gptr<u32>(r13);
    r5_2 = *gptr<u32>(r13 + 4);
    r6_1 = *gptr<u32>(r13 + 8);
    r7_1 = *gptr<u32>(r13 + 0xc);
    tpc_1 = *gptr<u32>(r13 + 0x10);
    r13 += 0x14;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[13] = r13;
    return r0_2;
L_311ff0:;
    guest::cpu()->r[13] = r13;
    Packed__add_8bits_at_3_1(r0_2 + 0xb6u, r4_1);
    r13 += 0x14u;
    u32 r4_3 = *gptr<u32>(r13);
    u32 r5_3 = *gptr<u32>(r13 + 4);
    u32 r6_2 = *gptr<u32>(r13 + 8);
    u32 r7_2 = *gptr<u32>(r13 + 0xc);
    u32 tpc_2 = *gptr<u32>(r13 + 0x10);
    r13 += 0x14;
    guest::cpu()->r[4] = r4_3;
    guest::cpu()->r[5] = r5_3;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[13] = r13;
    return r4_1;
}

}  // namespace d_00311f7c
GUEST_EXPORT(0x00311f7d, d_00311f7c::SaveVillager__add_friendship);

// f_00312008: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00312008 {

struct __attribute__((packed)) PartSet312008Arg0 {
    u8 unknown_0[0x10];  // (not used here)
    u8 byte_10;
    u8 unknown_11[0x3];  // (not used here)
    u32 word_14;
    u8 byte_18;
};
GUEST_OFFSET(PartSet312008Arg0, byte_10, 0x10);
GUEST_OFFSET(PartSet312008Arg0, word_14, 0x14);
GUEST_OFFSET(PartSet312008Arg0, byte_18, 0x18);


void part_set_312008(gptr<PartSet312008Arg0> arg0, u32 r1) {
    arg0->byte_10 = u8(r1);
    arg0->word_14 = 0;
    arg0->byte_18 = 0;
}

}  // namespace d_00312008
GUEST_EXPORT(0x00312008, d_00312008::part_set_312008);

// f_003120a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets item `slot` (0-3, from +0x24d6) of the villager, then moves its non-empty items to the front.
namespace d_003120a8 {

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;
inline constexpr guest::Function<0x002f777c, u32(u32)> do_nothing_002f777c;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> Item__copy;
inline constexpr guest::Function<0x002fcaf4, u32(u32)> Item__is_empty;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x003107d5, u32(u32, u32, u32)> get_owner_item;

struct __attribute__((packed)) VillagerSetItemAndCompactFrame {
    u8 unknown_0[0x14];  // (not read or written by name)
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(VillagerSetItemAndCompactFrame, word_14, 0x14);
GUEST_OFFSET(VillagerSetItemAndCompactFrame, word_18, 0x18);
GUEST_OFFSET(VillagerSetItemAndCompactFrame, word_1c, 0x1c);
GUEST_OFFSET(VillagerSetItemAndCompactFrame, word_20, 0x20);
GUEST_SIZE(VillagerSetItemAndCompactFrame, 0x24);

u32 Villager__set_item_and_compact(u32 self_villager, u32 slot, u32 item) {
    guest::StackFrameOf<VillagerSetItemAndCompactFrame> frame;  // the original's stack frame
    u32 r1_1 = 0;
    u32 villager = self_villager;
    frame->word_14 = villager + 0x24d6u;
    frame->word_18 = villager + 0x24dau;
    u32 r3_1 = villager + 0x24deu;
    u32 r0_1 = villager + 0x24e2u;
    frame->word_1c = r3_1;
    frame->word_20 = r0_1;
    if (slot != 0) {
        if (slot == 1u) {
            r0_1 = frame->word_18;
            r1_1 = item;
        } else if (slot == 2u) {
            r1_1 = item;
            r0_1 = r3_1;
        } else {
            if (slot != 3u) {
                goto L_3120f0;
            }
            r1_1 = item;
        }
    } else {
        r0_1 = frame->word_14;
        r1_1 = item;
    }
    Item__copy(r0_1, r1_1, item, r3_1);
L_3120f0:;
    for_each_element(frame.at(0).addr(), 0x2fc20cu, 4u, 4u);
    item = guest::cpu()->r[2];
    u32 r3 = guest::cpu()->r[3];
    u32 r7 = 0u;
    u32 i = r7;
    u32 r6 = frame.at(0).addr();
    do {
        Item__copy((i << 2) + r6, empty_item_address, item, r3);
        get_owner_item(frame.at(0x10).addr(), villager, i);
        u32 is_empty = Item__is_empty(frame.at(0x10).addr());
        if (is_empty == 0) {
            Item__copy((r7 << 2) + r6, frame.at(0x10).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
            r7 += 1u;
        }
        do_nothing_002f777c(frame.at(0x10).addr());
        item = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        i += 1u;
        guest::preempt();
    } while (s32(i) < 4);
    Item__copy(frame->word_14, frame.at(0).addr(), item, r3);
    Item__copy(frame->word_18, r6 + 4u, guest::cpu()->r[2], guest::cpu()->r[3]);
    Item__copy(frame->word_1c, frame.at(8).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
    Item__copy(frame->word_20, frame.at(0xc).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
    return destroy_array_elements(frame.at(0).addr(), 0x2f777cu, 4u, 4u);
}

}  // namespace d_003120a8
GUEST_EXPORT_FRAMED(0x003120a9, d_003120a8::Villager__set_item_and_compact, 0x40f0);  // pushes {villager, i, r6, r7, lr} first, as the original

// f_00312178: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the villager's item at 0x24ea (a copy of arg 1).
namespace d_00312178 {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;

u32 Villager__set_item_24ea(u32 villager) {
    return Item__copy(villager + 0x24eau, guest::cpu()->r[1]);
}

}  // namespace d_00312178
GUEST_EXPORT(0x00312178, d_00312178::Villager__set_item_24ea);

// f_00312184: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the villager's item at 0x24e6 (a copy of arg 1).
namespace d_00312184 {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;

u32 Villager__set_item_24e6(u32 villager) {
    return Item__copy(villager + 0x24e6u, guest::cpu()->r[1]);
}

}  // namespace d_00312184
GUEST_EXPORT(0x00312184, d_00312184::Villager__set_item_24e6);

// f_00312190: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Chooses the villager's held item of the kind and copies it.
namespace d_00312190 {

struct __attribute__((packed)) Slot {
    u8 unknown_0[0x3121a0];  // (not used here)
    u8 byte_3121a0;
};
GUEST_OFFSET(Slot, byte_3121a0, 0x3121a0);

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;

u32 Villager__choose_gift_item(u32 villager, gptr<Slot> slot, u32 r2) {
    u32 r1 = slot.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    guest::cpu()->r[13] -= 8u;
    if (r1 >= 0xau) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return villager;
    }
    u32 r3_1 = slot->byte_3121a0;
    u32 r3_2 = r3_1 + r3_1;
    u32 tpc_1 = r3_2 + 0x3121a2u | 1;
    switch (tpc_1) {
        case 0x3121ab: goto L_3121aa;
        case 0x3121b7: goto L_3121b6;
        case 0x3121c3: goto L_3121c2;
        case 0x3121cf: goto L_3121ce;
        case 0x3121db: goto L_3121da;
        case 0x3121e7: goto L_3121e6;
        case 0x3121f3: goto L_3121f2;
        case 0x3121ff: goto L_3121fe;
        case 0x31220b: goto L_31220a;
        case 0x312217: goto L_312216;
        default: break;
    }
    return guest::call_address<u32>(tpc_1, villager, r1, r2, r3_2);
L_3121aa:;
    r0_1 = villager + 0x24aeu;
    Item__copy(r0_1, r2);
    guest::cpu()->r[13] += 8u;
    return r0_1;
L_3121b6:;
    r0_2 = villager + 0x24b2u;
    Item__copy(r0_2, r2);
    guest::cpu()->r[13] += 8u;
    return r0_2;
L_3121c2:;
    r0_3 = villager + 0x24b6u;
    Item__copy(r0_3, r2);
    guest::cpu()->r[13] += 8u;
    return r0_3;
L_3121ce:;
    r0_4 = villager + 0x24bau;
    Item__copy(r0_4, r2);
    guest::cpu()->r[13] += 8u;
    return r0_4;
L_3121da:;
    r0_5 = villager + 0x24beu;
    Item__copy(r0_5, r2);
    guest::cpu()->r[13] += 8u;
    return r0_5;
L_3121e6:;
    r0_6 = villager + 0x24c2u;
    Item__copy(r0_6, r2);
    guest::cpu()->r[13] += 8u;
    return r0_6;
L_3121f2:;
    r0_7 = villager + 0x24c6u;
    Item__copy(r0_7, r2);
    guest::cpu()->r[13] += 8u;
    return r0_7;
L_3121fe:;
    r0_8 = villager + 0x24cau;
    Item__copy(r0_8, r2);
    guest::cpu()->r[13] += 8u;
    return r0_8;
L_31220a:;
    r0_9 = villager + 0x24ceu;
    Item__copy(r0_9, r2);
    guest::cpu()->r[13] += 8u;
    return r0_9;
L_312216:;
    u32 r0_10 = villager + 0x24d2u;
    Item__copy(r0_10, r2);
    guest::cpu()->r[13] += 8u;
    return r0_10;
}

}  // namespace d_00312190
GUEST_EXPORT(0x00312191, d_00312190::Villager__choose_gift_item);

// f_00312274: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sends network message 0x41 of kind 0x11 carrying the word, when the main object is set.
namespace d_00312274 {

struct __attribute__((packed)) SendNetMessage11Arg1 {
    u32 word_0;
};
GUEST_OFFSET(SendNetMessage11Arg1, word_0, 0x0);

inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> current_net_signed_value;
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> send_message;

struct __attribute__((packed)) SendNetMessage11Frame {
    u8 byte_0;
    u32 word_1;
    u8 unknown_5[0x7];  // (not read or written by name)
};
GUEST_OFFSET(SendNetMessage11Frame, byte_0, 0x0);
GUEST_OFFSET(SendNetMessage11Frame, word_1, 0x1);
GUEST_SIZE(SendNetMessage11Frame, 0xc);

u32 send_net_message_11(u32 r0, gptr<SendNetMessage11Arg1> arg1, u32 r2, u32 r3) {
    guest::StackFrameOf<SendNetMessage11Frame> frame;  // the original's stack frame
    u32 r0_1 = current_net_signed_value(r0, arg1.addr(), r2, r3);
    if (r0_1 == 0) {
        return r0_1;
    }
    frame->byte_0 = 0x11;
    frame->word_1 = arg1->word_0;
    return send_message(0x41u, r0, frame.at(0).addr(), 5u);
}

}  // namespace d_00312274
GUEST_EXPORT_FRAMED(0x00312274, d_00312274::send_net_message_11, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_003122bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the villager's catchphrase (+0x24f2) to its default from the message data (its data entry's), or to the common
// default.
namespace d_003122bc {

inline constexpr u32 word_resources_address = 0x0095debcu;
inline constexpr u32 npc_package_table_address = 0x00a83aecu;
inline guest::global<u32, 0x0095debc> word_resources;
inline constexpr guest::Function<0x00301e64, u32(u32, u32, u32, u32)> read_field_u16_0x2c_;
inline constexpr guest::Function<0x00301e6c, u32(u32, u32)> entry_34_at;
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32)> script__construct_word_ptr;
inline constexpr guest::Function<0x003083d4, u32(u32)> terminate_short_text;
inline constexpr guest::Function<0x003083e4, u32(u32, u32, u32, u32)> script__WordRes__WordRes_003083e4;
inline constexpr guest::Function<0x00308450, u32(u32, u32)> script__construct_word_ptr_sv;
inline constexpr guest::Function<0x0030846c, u32(u32, u32)> call_virtual_5;
inline constexpr guest::Function<0x003084c8, u32(u32)> do_nothing_003084c8;
inline constexpr guest::Function<0x003084cc, u32(u32)> do_nothing_003084cc;
inline constexpr guest::Function<0x00312a40, u32(u32)> member_address_0x24f2_;
inline constexpr guest::Function<0x00312a4c, u32(u32, u32, u32, u32)> script__WordRes__WordRes_00312a4c;

void Villager__reset_catchphrase(u32 villager, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x30);  // the original's stack frame
    u32 data = entry_34_at(npc_package_table_address, read_field_u16_0x2c_(villager, r1, r2, r3));
    if (data != 0) {
        script__construct_word_ptr(frame.at(0).addr(), frame.at(0x18).addr(), 0xbu);
        u32 r0_4 = terminate_short_text(data);
        if (script__WordRes__WordRes_003083e4(*word_resources, frame.at(0).addr(), 0x312368u, r0_4) != 0) {
            u32 r0_7 = member_address_0x24f2_(villager);
            script__construct_word_ptr_sv(frame.at(0xc).addr(), r0_7);
            u32 r0_9 = frame.at(0xc).addr();
            call_virtual_5(r0_9, frame.at(0).addr());
            do_nothing_003084c8(r0_9);
            do_nothing_003084cc(r0_9);
            return;
        }
        do_nothing_003084cc(frame.at(0).addr());
    }
    script__construct_word_ptr(frame.at(0).addr(), frame.at(0x18).addr(), 0xbu);
    u32 r0_13 = script__WordRes__WordRes_00312a4c(*word_resources, frame.at(0).addr(), 0x88eed0u, 0x27u);
    if (r0_13 != 0) {
        u32 r0_14 = member_address_0x24f2_(villager);
        script__construct_word_ptr_sv(frame.at(0xc).addr(), r0_14);
        r0_13 = frame.at(0xc).addr();
        call_virtual_5(r0_13, frame.at(0).addr());
        do_nothing_003084c8(r0_13);
    }
    do_nothing_003084cc(r0_13);
}

}  // namespace d_003122bc
GUEST_EXPORT_FRAMED(0x003122bd, d_003122bc::Villager__reset_catchphrase, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0031237c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the villager's design pattern and gives it back its default clothing item (from its data, or by its type)
// when it wears a special one.
namespace d_0031237c {

struct __attribute__((packed)) Villager {
    u8 unknown_0[0x2c];  // (not used here)
    u16 half_2c;
};
GUEST_OFFSET(Villager, half_2c, 0x2c);

inline constexpr u32 villager_template_table_address = 0x00a8349cu;
inline constexpr guest::Function<0x002f777c, u32(u32, u32)> do_nothing_002f777c;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> construct_item;
inline constexpr guest::Function<0x003059f8, u32(u32, u32, u32, u32)> Pattern__clear;
inline constexpr guest::Function<0x0030e228, u32(u32)> byte_2e_is_4_to_7;
inline constexpr guest::Function<0x0030f588, u32(u32, u32)> copy_villager_item_249a;
inline constexpr guest::Function<0x0030f594, u32(u32)> is_special_item;
inline constexpr guest::Function<0x00311744, u32(u32, u32)> villager_data_entry;
inline constexpr guest::Function<0x00312b20, u32(u32, u32)> Villager__set_item_249a;

void Villager__reset_clothing(gptr<Villager> villager, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 pattern = villager.addr() + 0x30u;
    Pattern__clear(pattern, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    copy_villager_item_249a(frame.at(0).addr(), villager.addr());
    u32 r0_4 = is_special_item(frame.at(0).addr());
    do_nothing_002f777c(frame.at(0).addr(), guest::cpu()->r[1]);
    if (r0_4 != 0) {
        u32 r1_3 = villager->half_2c;
        u32 r0_6 = villager_data_entry(villager_template_table_address, r1_3);
        if (r0_6 == 0) {
            Pattern__clear(pattern, r0_6, guest::cpu()->r[2], guest::cpu()->r[3]);
            copy_villager_item_249a(frame.at(4).addr(), villager.addr());
            u32 r0_9 = is_special_item(frame.at(4).addr());
            do_nothing_002f777c(frame.at(4).addr(), guest::cpu()->r[1]);
            if (r0_9 != 0) {
                if (byte_2e_is_4_to_7(villager.addr()) != 0) {
                    u32 r0_12 = frame.at(8).addr();
                    construct_item(r0_12, 0x4bu << 7);
                    Villager__set_item_249a(villager.addr(), r0_12);
                    do_nothing_002f777c(villager.addr(), r0_12);
                    return;
                }
                u32 r0_13 = frame.at(8).addr();
                construct_item(r0_13, 0x2581u);
                Villager__set_item_249a(villager.addr(), r0_13);
                do_nothing_002f777c(villager.addr(), r0_13);
                return;
            }
        } else {
            Item__copy(villager.addr() + 0x249au, r0_6);
        }
    }
}

}  // namespace d_0031237c
GUEST_EXPORT_FRAMED(0x0031237d, d_0031237c::Villager__reset_clothing, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00312434: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Adds points to the villager's friendship (10 bits at +0x571a), capped at 100 (or 50 before the bond), when the
// memory is in use; true when it changed.
namespace d_00312434 {

struct __attribute__((packed)) VillagerMemory {
    u8 unknown_0[0x5700];  // (not used here)
    u8 byte_5700;
    u8 unknown_5701[0xd];  // (not used here)
    u8 byte_570e;
    u8 unknown_570f[0xa];  // (not used here)
    u8 byte_5719;
    u8 byte_571a;
    u8 byte_571b;
};
GUEST_OFFSET(VillagerMemory, byte_5700, 0x5700);
GUEST_OFFSET(VillagerMemory, byte_570e, 0x570e);
GUEST_OFFSET(VillagerMemory, byte_5719, 0x5719);
GUEST_OFFSET(VillagerMemory, byte_571a, 0x571a);
GUEST_OFFSET(VillagerMemory, byte_571b, 0x571b);


u32 VillagerMemory__add_friendship(gptr<VillagerMemory> villager_memory, u32 r1, u32 r2) {
    u32 r0 = villager_memory.addr();
    u32 r4_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    r0 += 0x5700u;
    if (s32(u32(villager_memory->byte_5700) << 0x1b) < 0 && s32(r1) > 0) {
        if (s32(u32(villager_memory->byte_570e) << 0x1c) >= 0) {
            u32 r3 = villager_memory->byte_571a;
            u32 res_3 = u32(villager_memory->byte_5719) >> 7;
            r1 += ((r3 >> 1) + ((u32(villager_memory->byte_571b) & 7u) << 7));
            if (res_3 == 0) {
                goto L_3124bc;
            }
            if (r2 != 0) {
                r1 += 2u;
            }
L_312488:;
            if (r1 > 0x64u) {
                r1 = 0x64u;
            }
            r4_1 = r1 & 0x380u;
            r1_1 = r3 & ~0xfeu | r1 << 1;
            r2_1 = u32(*gptr<u8>(r0 + 0x1bu)) & ~7u | r4_1 >> 7;
            *gptr<u8>(r0 + 0x1au) = u8(r1_1);
            *gptr<u8>(r0 + 0x1bu) = u8(r2_1);
            guest::cpu()->r[1] = r1_1;
            return 1u;
L_3124bc:;
            if (r2 != 0) {
                u32 zf_1 = r1 == 0x32u;
                u32 cf_1 = r1 >= 0x32u;
                if (r1 > 0x32u) {
                    r1 = 0x32u;
                }
                if (!cf_1 || zf_1) {
                    guest::preempt();
                    goto L_312488;
                }
                r4_1 = r1 & 0x380u;
                r1_1 = r3 & ~0xfeu | r1 << 1;
                r2_1 = u32(*gptr<u8>(r0 + 0x1bu)) & ~7u | r4_1 >> 7;
                *gptr<u8>(r0 + 0x1au) = u8(r1_1);
                *gptr<u8>(r0 + 0x1bu) = u8(r2_1);
                guest::cpu()->r[1] = r1_1;
                return 1u;
            }
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_00312434
GUEST_EXPORT_FRAMED(0x00312434, d_00312434::VillagerMemory__add_friendship, 0x30);  // pushes {r4, r5} first, as the original

// f_00312ab8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Forwards to TimeStamp__advance.
namespace d_00312ab8 {

inline constexpr guest::Function<0x0030a488, u32(u32, u32, u32, u32)> TimeStamp__advance;

struct __attribute__((packed)) TimeStampAdvanceVeneerFrame {
    u32 word_0;
};
GUEST_OFFSET(TimeStampAdvanceVeneerFrame, word_0, 0x0);
GUEST_SIZE(TimeStampAdvanceVeneerFrame, 0x4);

u32 TimeStamp__advance_veneer(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<TimeStampAdvanceVeneerFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    frame->word_0 = *frame.at<u32>(8);
    TimeStamp__advance(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], r3);
    return guest::cpu()->r[0];
}

}  // namespace d_00312ab8
GUEST_EXPORT_FRAMED(0x00312ab8, d_00312ab8::TimeStamp__advance_veneer, 0x4000);  // pushes {lr} first, as the original

// f_00312acc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets a time to a time stamp (arg 1); returns the time.
namespace d_00312acc {

inline constexpr guest::Function<0x005cddb4, u32(u32, u32)> GameTime__set_time_stamp;

u32 set_time_stamp_returning(u32 time) {
    GameTime__set_time_stamp(time, guest::cpu()->r[1]);
    return time;
}

}  // namespace d_00312acc
GUEST_EXPORT_FRAMED(0x00312acc, d_00312acc::set_time_stamp_returning, 0x4010);  // pushes {r4, lr} first, as the original

// f_00312ae0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00312ae0 {

struct __attribute__((packed)) Villager {
    u8 unknown_0[0x2510];  // (not used here)
    u32 word_2510;
};
GUEST_OFFSET(Villager, word_2510, 0x2510);


void Villager__set_flag_100(gptr<Villager> villager) {
    u32 r1_1 = villager->word_2510 | 0x100u;
    villager->word_2510 = r1_1;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_00312ae0
GUEST_EXPORT(0x00312ae0, d_00312ae0::Villager__set_flag_100);

// f_00312af8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// True unless the villager's flags (+0x2510) keep it in town.
namespace d_00312af8 {

inline constexpr guest::Function<0x0030e430, u32(u32, u32)> field_2510_is_2;

u32 Villager__may_leave(u32 villager) {
    u32 r1_1 = *gptr<u32>(villager + (0x25u << 8) + 0x10u);
    if ((r1_1 >> 1u & 1u) != 0) {
        r1_1 &= 1u;
        if (r1_1 == 0) {
            guest::cpu()->r[1] = r1_1;
            return 0u;
        }
    }
    return field_2510_is_2(villager, r1_1) == 0;
}

}  // namespace d_00312af8
GUEST_EXPORT_FRAMED(0x00312af9, d_00312af8::Villager__may_leave, 0x4010);  // pushes {r4, lr} first, as the original

// f_00312b20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the villager's item at 0x249a (a copy of arg 1).
namespace d_00312b20 {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;

void Villager__set_item_249a(u32 villager) {
    Item__copy(villager + 0x249au, guest::cpu()->r[1]);
}

}  // namespace d_00312b20
GUEST_EXPORT(0x00312b20, d_00312b20::Villager__set_item_249a);

// f_00313414: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the time stamp to the invalid value.
namespace d_00313414 {

inline constexpr guest::Function<0x005cdf48, u32(u32, u32, u32, u32)> game_time_set;

u32 TimeStamp__set_invalid(u32 time_stamp) {
    game_time_set(time_stamp, guest::cpu()->r[1], ~0u, ~0x80000000u);
    return time_stamp;
}

}  // namespace d_00313414
GUEST_EXPORT_FRAMED(0x00313414, d_00313414::TimeStamp__set_invalid, 0x4010);  // pushes {r4, lr} first, as the original

// f_00313a40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether villager `id` (below 0x18f) has type 0 (the low nibble of its data's +0x1c).
namespace d_00313a40 {

inline constexpr u32 item_list_400_address = 0x00a83af0u;
inline guest::global<u32, 0x00a83af0> item_list_400;

u32 villager_type_is_0(u32 id) {
    u32 r1_1 = *item_list_400;
    u32 zf_1 = r1_1 == 0;
    u32 cf_1 = r1_1 >= 0u;
    if (!zf_1) {
        zf_1 = 0x18fu == id;
        cf_1 = 0x18fu >= id;
    }
    if (!cf_1 || zf_1) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r0_1 = r1_1 + id * 0x22u;
    if (r0_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    if ((u32(*gptr<u8>(r0_1 + 0x1cu)) & 0xfu) == 0) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_00313a40
GUEST_EXPORT(0x00313a40, d_00313a40::villager_type_is_0);

// f_00313a8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The address of the shared object at 0xab7f30.
namespace d_00313a8c {

inline constexpr u32 global_00ab7f30_address = 0x00ab7f30u;

u32 return_constant_0xab7f30_() {
    return global_00ab7f30_address;
}

}  // namespace d_00313a8c
GUEST_EXPORT(0x00313a8d, d_00313a8c::return_constant_0xab7f30_);

// f_00314278: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether (word r0, signed bytes 0 and 1 of r1) equals (word r3, the same bytes of the stack argument).
namespace d_00314278 {


u32 word_and_byte_pairs_equal(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r2_1 = *gptr<u32>(r13);
    if (r0 != r3 || sxtb(r1) != sxtb(r2_1)) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    u32 r0_1 = s32(r1 << 0x10) >> 0x18;
    u32 r1_1 = s32(r2_1 << 0x10) >> 0x18;
    if (r0_1 == r1_1) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_00314278
GUEST_EXPORT(0x00314278, d_00314278::word_and_byte_pairs_equal);

// f_00314b40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The signed byte of map kind `kind` (below 0xfc) in the table at 0x88c528; 0 otherwise.
namespace d_00314b40 {


u32 map_kind_byte_88c528(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    if (r0 >= 0xfcu) {
        r0_1 = 0u;
    } else {
        r1 = 0x88c528u;
        r0_1 = *gptr<s8>(r1 + r0);
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_00314b40
GUEST_EXPORT(0x00314b40, d_00314b40::map_kind_byte_88c528);

// f_00314c04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The signed byte of map kind `kind` (below 0xfc) in the table at 0x88c626; 0 otherwise.
namespace d_00314c04 {


u32 map_kind_byte_88c626(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    if (r0 >= 0xfcu) {
        r0_1 = 0u;
    } else {
        r1 = 0x88c626u;
        r0_1 = *gptr<s8>(r1 + r0);
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_00314c04
GUEST_EXPORT(0x00314c04, d_00314c04::map_kind_byte_88c626);

// f_00314d40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Updates the menu window's buttons, nodes and its shown state.
namespace d_00314d40 {

struct __attribute__((packed)) MenuWindow {
    u8 unknown_0[0x34];  // (not used here)
    u32 word_34;
    u32 word_38;
};
GUEST_OFFSET(MenuWindow, word_34, 0x34);
GUEST_OFFSET(MenuWindow, word_38, 0x38);

inline guest::global<u32, 0x00851ae8> global_00851ae8;
inline guest::global<u32, 0x00851aec> global_00851aec;
inline guest::global<u32, 0x00851b08> menu_window_handler;
inline guest::global<u32, 0x00851b0c> menu_window_handler_adjust;
inline guest::global<u32, 0x00851b10> global_00851b10;
inline guest::global<u32, 0x00851b14> global_00851b14;
inline guest::global<u32, 0x00851b60> global_00851b60;
inline guest::global<u32, 0x00851b64> global_00851b64;
inline guest::global<u8, 0x0094fe94> global_0094fe94;
inline constexpr guest::Function<0x001fa354, u32(u32)> LayoutWindow__show_now;
inline constexpr guest::Function<0x002f6adc, u32(u32, u32, u32)> call_virtual_3_of_each_node;
inline constexpr guest::Function<0x002f6b14, u32(u32)> NodeTree__update_all;
inline constexpr guest::Function<0x002f6e14, u32(u32)> ButtonActionControl__virtual_3;
inline constexpr guest::Function<0x002f71e4, u32(u32, u32, u32, u32)> ButtonActionControl__virtual_2;
inline constexpr guest::Function<0x006d1e64, u32(u32, u32, u32, u32)> get_state_30;
inline constexpr guest::Function<0x00819c2c, u32(u32, u32, u32, u32)> dispatch_offset_28_b;

void MenuWindow__update(gptr<MenuWindow> menu_window) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0 = menu_window.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r1_2 = 0;
    u32 r0_6 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r0_7 = 0;
    u32 r4 = r0;
    *global_0094fe94 = 1;
    u32 r2_1 = menu_window->word_34;
    u32 r0_1 = *global_00851b64;
    if (r2_1 != *global_00851b60) {
        goto L_314da4;
    }
    if ((r2_1 != 0 || ((menu_window->word_38 | r0_1) & 1u) != 0) && *gptr<u32>(r4 + 0x38u) != r0_1) {
        goto L_314da4;
    }
    r0_2 = r4 + 0x28u;
    r1_1 = *menu_window_handler;
    r2_2 = *menu_window_handler_adjust;
    dispatch_offset_28_b(r0_2, r1_1, r2_2, guest::cpu()->r[3]);
    return;
L_314da4:;
    u32 r0_3 = *global_00851aec;
    if (r2_1 == *global_00851ae8) {
        if (r2_1 == 0) {
            r1_2 = *gptr<u32>(r4 + 0x38u) | r0_3;
            if ((r1_2 & 1u) == 0) {
                goto L_314dd8;
            }
        }
        r1_2 = *gptr<u32>(r4 + 0x38u);
        if (r1_2 != r0_3) {
            return;
        }
L_314dd8:;
        u32 r0_4 = get_state_30(r0_3, r1_2, r2_1, guest::cpu()->r[3]);
        u32 layout_window = *gptr<u32>(r0_4 + 0x1f4u);
        *gptr<u8>(layout_window + 0x4d7u) = 1;
        LayoutWindow__show_now(layout_window);
        if (*gptr<u8>(r4 + 0x1890u) == 1u) {
            goto L_314e4c;
        }
        r0_6 = r4 + 0x28u;
        r1_4 = *menu_window_handler;
        r2_4 = *menu_window_handler_adjust;
        dispatch_offset_28_b(r0_6, r1_4, r2_4, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
L_314e0c:;
        r0_7 = r4 + 0xb34u;
        call_virtual_3_of_each_node(r0_7, r1, r2);
        NodeTree__update_all(r0_7);
        ButtonActionControl__virtual_3(r0_7);
        *gptr<u32>(r4 + 0xc08u) = *gptr<u32>(r4 + 0xc08u) | 8u;
        frame.release();
        ButtonActionControl__virtual_2(r0_7, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        return;
L_314e4c:;
        dispatch_offset_28_b(r4 + 0x28u, *global_00851b10, *global_00851b14, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        guest::preempt();
        goto L_314e0c;
    }
}

}  // namespace d_00314d40
GUEST_EXPORT(0x00314d40, d_00314d40::MenuWindow__update);

// f_00315110: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Scans the items around the position by their terrain.
namespace d_00315110 {

struct __attribute__((packed)) Local_00315110_ea_1 {
    u32 field;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(Local_00315110_ea_1, field, 0x0);
GUEST_OFFSET(Local_00315110_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_00315110_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_00315110_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_00315110_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_00315110_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_00315110_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_00315110_ea_1, word_1c, 0x1c);
GUEST_OFFSET(Local_00315110_ea_1, word_20, 0x20);

struct __attribute__((packed)) Local_00315110_r0_1 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00315110_r0_1, word_8, 0x8);
GUEST_OFFSET(Local_00315110_r0_1, word_c, 0xc);

struct __attribute__((packed)) Local_00315110_r0_11 {
    u32 word_0;
    u8 unknown_4[0xc];  // (not used here)
    u16 half_10;
};
GUEST_OFFSET(Local_00315110_r0_11, word_0, 0x0);
GUEST_OFFSET(Local_00315110_r0_11, half_10, 0x10);

struct __attribute__((packed)) Local_00315110_r0_8 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00315110_r0_8, word_8, 0x8);
GUEST_OFFSET(Local_00315110_r0_8, word_c, 0xc);

struct __attribute__((packed)) Local_00315110_r2_2 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00315110_r2_2, word_8, 0x8);
GUEST_OFFSET(Local_00315110_r2_2, word_c, 0xc);

struct __attribute__((packed)) Local_00315110_r2_8 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00315110_r2_8, word_0, 0x0);
GUEST_OFFSET(Local_00315110_r2_8, word_4, 0x4);
GUEST_OFFSET(Local_00315110_r2_8, word_8, 0x8);

inline guest::global<u8, 0x00952b9d> map_default_kind;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32)> Item__is_empty;
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> GridMap__process_world_position;
inline constexpr guest::Function<0x002ff160, u32(u32, u32, u32)> terrain_byte_unless_blocked;
inline constexpr guest::Function<0x00300a74, u32(u32, u32, u32, u32)> terrain_byte_db1c_unless_blocked;

void Field__scan_items_around(u32 field, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_12 = 0;
    gptr<Local_00315110_ea_1> ea_1 = gptr<Local_00315110_ea_1>(r13 - 0x24);
    ea_1->field = field;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r3;
    ea_1->word_10 = r4;
    ea_1->word_14 = r5;
    ea_1->word_18 = r6;
    ea_1->word_1c = r7;
    ea_1->word_20 = r14;
    r13 = ea_1.addr() - 0xcu;
    r5 = field;
    *gptr<u32>(r13 + 4u) = 0;
    *gptr<u32>(r13) = r5 + 0x180u;
    do {
        gptr<Local_00315110_r0_1> r0_1 = gptr<Local_00315110_r0_1>(*gptr<u32>(r13 + 0x10u));
        u32 r3_1 = r0_1->word_c;
        u32 r2_1 = r0_1->word_8;
        r1 = *gptr<u32>(*gptr<u32>(r13 + 0x14u) + 8u);
        u32 r0_2 = *gptr<u32>(r13 + 4u) << 2;
        r6 = r3_1 + *gptr<u32>(r0_2 + 0x8657ccu);
        r4 = r2_1 + *gptr<u32>(r0_2 + 0x8657acu);
        if (r1 == r4 && *gptr<u32>(*gptr<u32>(r13 + 0x14u) + 0xcu) == r6) {
            goto L_3151fe;
        }
        if (*gptr<u32>(r13 + 0x30u) == 0) {
            r1 = *gptr<u32>(*gptr<u32>(r13));
            field = 0u;
            if (s32(r1) > 0) {
                do {
                    gptr<Local_00315110_r2_2> r2_2 = gptr<Local_00315110_r2_2>(0x14u * field + r5);
                    if (r2_2->word_8 == r4 && r2_2->word_c == r6) {
                        goto L_3151fe;
                    }
                    field += 1u;
                    guest::preempt();
                } while (s32(r1) > s32(field));
            }
        }
        r0_3 = *gptr<u32>(r13 + 0x18u);
        guest::cpu()->r[13] = r13;
        r0_4 = GridMap__process_world_position(r0_3, r4, r6, 0u);
        r1 = guest::cpu()->r[1];
        *gptr<u32>(r13 + 8u) = r0_4;
        if (r0_4 != 0) {
            guest::cpu()->r[13] = r13;
            u32 is_empty = Item__is_empty(r0_4, r1);
            r1 = guest::cpu()->r[1];
            if (is_empty != 0) {
                u32 r2_4 = *map_default_kind;
                guest::cpu()->r[13] = r13;
                u32 r0_6 = terrain_byte_unless_blocked(r4, r6, r2_4);
                r1 = guest::cpu()->r[1];
                if (r0_6 != 0) {
                    u32 r2_5 = *map_default_kind;
                    guest::cpu()->r[13] = r13;
                    u32 r0_7 = terrain_byte_db1c_unless_blocked(r4, r6, r2_5, guest::cpu()->r[3]);
                    gptr<Local_00315110_r0_8> r0_8 = gptr<Local_00315110_r0_8>(*gptr<u32>(r13 + 0x10u));
                    u32 r3_5 = r0_8->word_8;
                    u32 r1_1 = r0_8->word_c;
                    u32 r2_6 = *map_default_kind;
                    guest::cpu()->r[13] = r13;
                    u32 r0_9 = terrain_byte_db1c_unless_blocked(r3_5, r1_1, r2_6, r3_5);
                    r1 = guest::cpu()->r[1];
                    if (r0_7 == r0_9) {
                        u32 r1_2 = *gptr<u32>(r13 + 8u);
                        u32 r0_10 = (*gptr<u32>(*gptr<u32>(r13)) << 2) + r5 + 0x140u;
                        guest::cpu()->r[13] = r13;
                        Item__copy(r0_10, r1_2);
                        gptr<Local_00315110_r0_11> r0_11 = gptr<Local_00315110_r0_11>(*gptr<u32>(*gptr<u32>(r13)) * 0x14u + r5);
                        gptr<Local_00315110_r2_8> r2_8 = gptr<Local_00315110_r2_8>(r0_11.addr() + 4u);
                        u32 r1_3 = r4 & 0xfu;
                        r2_8->word_0 = r1_3;
                        r2_8->word_4 = r4;
                        r2_8->word_8 = r6;
                        r0_11->word_0 = (r4 - 0x10u >> 4) + (r6 + (r6 << 2)) - 0x50u;
                        r0_11->half_10 = u16(lsl_r(1u, r1_3 & 0xff));
                        r1 = *gptr<u32>(r13);
                        *gptr<u32>(r1) = *gptr<u32>(*gptr<u32>(r13)) + 1u;
                    }
                }
            }
        }
L_3151fe:;
        r0_12 = *gptr<u32>(r13 + 4u) + 1u;
        *gptr<u32>(r13 + 4u) = r0_12;
        guest::preempt();
    } while (r0_12 < 8u);
    r13 += 0x1cu;
    u32 r4_1 = *gptr<u32>(r13);
    u32 r5_1 = *gptr<u32>(r13 + 4);
    u32 r6_1 = *gptr<u32>(r13 + 8);
    u32 r7_1 = *gptr<u32>(r13 + 0xc);
    u32 tpc_1 = *gptr<u32>(r13 + 0x10);
    r13 += 0x14;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[13] = r13;
}

}  // namespace d_00315110
GUEST_EXPORT(0x00315111, d_00315110::Field__scan_items_around);

// f_00315924: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the record's bit in the mask at +0xf5c and places the kind-2 item at the record's world position.
namespace d_00315924 {

inline constexpr u32 place_item_kind_2_a_address = 0x00952bccu;
inline constexpr u32 place_item_kind_2_b_address = 0x00952bd0u;
inline guest::global<u32, 0x00952bcc> place_item_kind_2_a;
inline constexpr guest::Function<0x002fc949, u32(u32, u32, u32, u32)> map_or_default_a14860;
inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> GridMap__place_item_at_world;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> construct_item;
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> static_guard_acquire;
inline constexpr guest::Function<0x002fe7f0, u32(u32, u32, u32)> do_nothing_002fe7f0;

struct __attribute__((packed)) PlaceItemKind2Frame {
    u32 word_0;
};
GUEST_OFFSET(PlaceItemKind2Frame, word_0, 0x0);
GUEST_SIZE(PlaceItemKind2Frame, 0x4);

u32 place_item_kind_2(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<PlaceItemKind2Frame> frame;  // the original's stack frame
    frame->word_0 = r3;
    if ((*place_item_kind_2_a & 1u) == 0u) {
        u32 first_time_2 = static_guard_acquire(place_item_kind_2_a_address, r1, r2, r3);
        if (first_time_2 != 0) {
            construct_item(place_item_kind_2_b_address, 2u);
            do_nothing_002fe7f0(place_item_kind_2_b_address, 0x2f777cu, 0x100000u);
        }
    }
    u32 r2_2 = *gptr<u16>(r1 + 0x10u);
    u32 r1_1 = *gptr<u32>(r1) << 1;
    u32 r3_3 = u32(*gptr<u16>(r0 + 0xf5cu + r1_1)) & ~r2_2;
    *gptr<u16>(r0 + 0xf5cu + r1_1) = u16(r3_3);
    u32 r0_3 = map_or_default_a14860(r0 + 0xf5cu, r1_1, r2_2, r3_3);
    frame->word_0 = 0;
    return GridMap__place_item_at_world(r0_3, place_item_kind_2_b_address, *gptr<u32>(r1 + 8u), *gptr<u32>(r1 + 0xcu));
}

}  // namespace d_00315924
GUEST_EXPORT_FRAMED(0x00315925, d_00315924::place_item_kind_2, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00315df4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the record's bit in the masks at +0xa54 and +0x1464 and places the kind-3 item at the record's world
// position.
namespace d_00315df4 {

inline constexpr u32 place_item_kind_3_a_address = 0x00952bb4u;
inline constexpr u32 place_item_kind_3_b_address = 0x00952bb8u;
inline guest::global<u32, 0x00952bb4> place_item_kind_3_a;
inline constexpr guest::Function<0x002fc949, u32(u32, u32, u32, u32)> map_or_default_a14860;
inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> GridMap__place_item_at_world;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> construct_item;
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> static_guard_acquire;
inline constexpr guest::Function<0x002fe7f0, u32(u32, u32, u32)> do_nothing_002fe7f0;

struct __attribute__((packed)) PlaceItemKind3Frame {
    u32 word_0;
};
GUEST_OFFSET(PlaceItemKind3Frame, word_0, 0x0);
GUEST_SIZE(PlaceItemKind3Frame, 0x4);

u32 place_item_kind_3(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<PlaceItemKind3Frame> frame;  // the original's stack frame
    frame->word_0 = r3;
    if ((*place_item_kind_3_a & 1u) == 0u) {
        u32 first_time_2 = static_guard_acquire(place_item_kind_3_a_address, r1, r2, r3);
        if (first_time_2 != 0) {
            construct_item(place_item_kind_3_b_address, 3u);
            do_nothing_002fe7f0(place_item_kind_3_b_address, 0x2f777cu, 0x100000u);
        }
    }
    u32 r3_3 = *gptr<u16>(r1 + 0x10u);
    u32 r0_2 = *gptr<u32>(r1) << 1;
    u32 r2_2 = u32(*gptr<u16>(r0 + 0xa54u + r0_2)) & ~r3_3;
    *gptr<u16>(r0 + 0xa54u + r0_2) = u16(r2_2);
    u32 r0_3 = map_or_default_a14860(r0_2, r0 + 0xa54u, r2_2, r3_3);
    frame->word_0 = 0;
    GridMap__place_item_at_world(r0_3, place_item_kind_3_b_address, *gptr<u32>(r1 + 8u), *gptr<u32>(r1 + 0xcu));
    u32 r1_2 = *gptr<u32>(r1) << 1;
    *gptr<u16>(r0 + 0x1464u + r1_2) = u16(u32(*gptr<u16>(r0 + 0x1464u + r1_2)) & ~u32(*gptr<u16>(r1 + 0x10u)));
    guest::cpu()->r[1] = r1_2;
    return r0 + 0x1464u;
}

}  // namespace d_00315df4
GUEST_EXPORT_FRAMED(0x00315df5, d_00315df4::place_item_kind_3, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0031600c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the record's bit in the masks at +0xcd8 and +0x1464 and places the kind-4 item at the record's world
// position.
namespace d_0031600c {

inline constexpr u32 place_item_kind_4_a_address = 0x00952bbcu;
inline constexpr u32 place_item_kind_4_b_address = 0x00952bc0u;
inline guest::global<u32, 0x00952bbc> place_item_kind_4_a;
inline constexpr guest::Function<0x002fc949, u32(u32, u32, u32, u32)> map_or_default_a14860;
inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> GridMap__place_item_at_world;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> construct_item;
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> static_guard_acquire;
inline constexpr guest::Function<0x002fe7f0, u32(u32, u32, u32)> do_nothing_002fe7f0;

struct __attribute__((packed)) PlaceItemKind4Frame {
    u32 word_0;
};
GUEST_OFFSET(PlaceItemKind4Frame, word_0, 0x0);
GUEST_SIZE(PlaceItemKind4Frame, 0x4);

u32 place_item_kind_4(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<PlaceItemKind4Frame> frame;  // the original's stack frame
    frame->word_0 = r3;
    if ((*place_item_kind_4_a & 1u) == 0u) {
        u32 first_time_2 = static_guard_acquire(place_item_kind_4_a_address, r1, r2, r3);
        if (first_time_2 != 0) {
            construct_item(place_item_kind_4_b_address, 4u);
            do_nothing_002fe7f0(place_item_kind_4_b_address, 0x2f777cu, 0x100000u);
        }
    }
    u32 r3_3 = *gptr<u16>(r1 + 0x10u);
    u32 r0_2 = *gptr<u32>(r1) << 1;
    u32 r2_2 = u32(*gptr<u16>(r0 + 0xcd8u + r0_2)) & ~r3_3;
    *gptr<u16>(r0 + 0xcd8u + r0_2) = u16(r2_2);
    u32 r0_3 = map_or_default_a14860(r0_2, r0 + 0xcd8u, r2_2, r3_3);
    frame->word_0 = 0;
    GridMap__place_item_at_world(r0_3, place_item_kind_4_b_address, *gptr<u32>(r1 + 8u), *gptr<u32>(r1 + 0xcu));
    u32 r1_2 = *gptr<u32>(r1) << 1;
    *gptr<u16>(r0 + 0x1464u + r1_2) = u16(u32(*gptr<u16>(r0 + 0x1464u + r1_2)) & ~u32(*gptr<u16>(r1 + 0x10u)));
    guest::cpu()->r[1] = r1_2;
    return r0 + 0x1464u;
}

}  // namespace d_0031600c
GUEST_EXPORT_FRAMED(0x0031600d, d_0031600c::place_item_kind_4, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00316664: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Entry (0xc bytes) of the id among the 72 of the table; null for an unknown id or no table.
namespace d_00316664 {

struct __attribute__((packed)) Entry12Of72Arg0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Entry12Of72Arg0, word_4, 0x4);

inline constexpr guest::Function<0x00723998, u32(u32, u32, u32, u32)> ItemGrid__layout;

u32 entry_12_of_72(gptr<Entry12Of72Arg0> arg0, u32 r1) {
    u32 r0_1 = ItemGrid__layout(arg0.addr(), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 zf_1 = r0_1 - 0xffffu == 0;
    u32 r1_1 = r0_1 - 0xffffu;
    if (!zf_1) {
        r1_1 = arg0->word_4;
        zf_1 = r1_1 == 0;
    }
    if (zf_1) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    if (r0_1 < 0x48u) {
        guest::cpu()->r[1] = r1_1;
        return r1_1 + r0_1 * 0xcu;
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_00316664
GUEST_EXPORT_FRAMED(0x00316664, d_00316664::entry_12_of_72, 0x4010);  // pushes {r4, lr} first, as the original

// f_00316ebc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Bit `index` (fewer than 96) of the flag bytes; 0 for a larger index.
namespace d_00316ebc {


u32 flag_bit_of_96(u32 flags, u32 index) {
    if (index >= 0x60u) {
        guest::cpu()->r[1] = index;
        return 0u;
    }
    u32 r0_1 = *gptr<u8>(flags + (index >> 3));
    u32 r1_1 = index & 7u;
    guest::cpu()->r[1] = r1_1;
    return lsr_r(r0_1, r1_1 & 0xff) & 1u;
}

}  // namespace d_00316ebc
GUEST_EXPORT(0x00316ebc, d_00316ebc::flag_bit_of_96);

// f_00316edc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Bit `index` (fewer than 7) of the flag bytes; 0 for a larger index.
namespace d_00316edc {


u32 flag_bit_of_7(u32 flags, u32 index) {
    if (index >= 7u) {
        guest::cpu()->r[1] = index;
        return 0u;
    }
    u32 r0_1 = *gptr<u8>(flags + (index >> 3));
    u32 r1_1 = index & 7u;
    guest::cpu()->r[1] = r1_1;
    return lsr_r(r0_1, r1_1 & 0xff) & 1u;
}

}  // namespace d_00316edc
GUEST_EXPORT(0x00316edc, d_00316edc::flag_bit_of_7);

// f_0031708c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031708c {

struct __attribute__((packed)) sead__SafeStringBase_char_ {
    u32 word_0;
};
GUEST_OFFSET(sead__SafeStringBase_char_, word_0, 0x0);

inline constexpr u32 vtable_sead__SafeStringBase_char__rec = 0x009047f8u;
inline constexpr guest::Function<0x0013cd00, u32(u32, u32, u32, u32)> SafeString__copy;

struct __attribute__((packed)) SeadSafeStringBaseCharSafeStringBase0031708cFrame {
    u32 object_0_vtable;
    u32 word_4;
};
GUEST_OFFSET(SeadSafeStringBaseCharSafeStringBase0031708cFrame, object_0_vtable, 0x0);
GUEST_OFFSET(SeadSafeStringBaseCharSafeStringBase0031708cFrame, word_4, 0x4);
GUEST_SIZE(SeadSafeStringBaseCharSafeStringBase0031708cFrame, 0x8);

u32 sead__SafeStringBase_char___SafeStringBase_0031708c(gptr<sead__SafeStringBase_char_> safe_string_base_char, u32 r1) {
    guest::StackFrameOf<SeadSafeStringBaseCharSafeStringBase0031708cFrame> frame;  // the original's stack frame
    frame->object_0_vtable = vtable_sead__SafeStringBase_char__rec;
    frame->word_4 = r1;
    SafeString__copy(safe_string_base_char.addr() + 0xcu, frame.at(0).addr(), ~0u, guest::cpu()->r[3]);
    safe_string_base_char->word_0 = 4;
    return 4u;
}

}  // namespace d_0031708c
GUEST_EXPORT_FRAMED(0x0031708c, d_0031708c::sead__SafeStringBase_char___SafeStringBase_0031708c, 0x4010);  // pushes {r4, lr} first, as the original

// f_003171b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// A base's virtual 0: nothing.
namespace d_003171b0 {

inline constexpr guest::Function<0x00521ae0, u32(u32, u32)> do_nothing_00521ae0;

u32 Base__virtual_0() {
    return do_nothing_00521ae0(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_003171b0
GUEST_EXPORT(0x003171b0, d_003171b0::Base__virtual_0);

// f_00317a50: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts the split load, setting the read and write positions from its word (+0xec) the first time.
namespace d_00317a50 {

struct __attribute__((packed)) LoadSplitWord {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0xe0];  // (not used here)
    u32 word_ec;
};
GUEST_OFFSET(LoadSplitWord, word_4, 0x4);
GUEST_OFFSET(LoadSplitWord, word_8, 0x8);
GUEST_OFFSET(LoadSplitWord, word_ec, 0xec);

inline constexpr guest::Function<0x0056a974, u32(u32, u32, u32, u32)> load_split_start;

u32 LoadSplitWord__start(gptr<LoadSplitWord> load_split_word, u32 r1) {
    u32 r0_2 = load_split_start(load_split_word.addr() + 0x1cu, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_2 == 0 || load_split_word->word_4 != 0) {
        guest::cpu()->r[1] = r0_2;
        return r0_2;
    }
    u32 r0_3 = load_split_word->word_ec;
    load_split_word->word_4 = r0_3;
    load_split_word->word_8 = r0_3;
    guest::cpu()->r[1] = r0_2;
    return r0_2;
}

}  // namespace d_00317a50
GUEST_EXPORT_FRAMED(0x00317a50, d_00317a50::LoadSplitWord__start, 0x4010);  // pushes {r4, lr} first, as the original

// f_00317cc8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Entry `index` of the resource file's dictionary (offset +0x20, 0x10-byte entries from +0x28), resolved from its
// self-relative offset; null when absent.
namespace d_00317cc8 {

struct __attribute__((packed)) ResFile {
    u32 word_0;
};
GUEST_OFFSET(ResFile, word_0, 0x0);


u32 ResFile__dict_entry(gptr<ResFile> res_file, u32 r1) {
    u32 r0_1 = 0u;
    u32 ea_1 = res_file->word_0 + 0x20u;
    u32 r3_1 = *gptr<u32>(ea_1);
    u32 r2_1 = r3_1 == 0 ? r0_1 : ea_1 + r3_1;
    if (r2_1 == 0) {
        return 0u;
    }
    u32 ea_2 = r2_1 + (r1 << 4) + 0x28u;
    u32 r2_2 = *gptr<u32>(ea_2);
    if (r2_2 != 0) {
        r0_1 = r2_2 + ea_2;
    }
    guest::cpu()->r[1] = ea_2;
    return r0_1;
}

}  // namespace d_00317cc8
GUEST_EXPORT(0x00317cc8, d_00317cc8::ResFile__dict_entry);

// f_00317d8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys a background guard box: resets it and destroys its moving background.
namespace d_00317d8c {

inline constexpr u32 vtable_bgcheck__GuardBox = 0x0090ab88u;
inline constexpr guest::Function<0x002f74b0, u32(u32)> FlaggedObject__reset;
inline constexpr guest::Function<0x006148ac, u32(u32, u32)> destroy_move_bg;

u32 bgcheck__GuardBox__destructor(gptr<bgcheck__GuardBox> guard_box) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    guard_box->vtable = vtable_bgcheck__GuardBox;
    FlaggedObject__reset(guard_box.addr());
    frame.release();
    return destroy_move_bg(guard_box.addr(), guest::cpu()->r[1]);
}

}  // namespace d_00317d8c
GUEST_EXPORT(0x00317d8c, d_00317d8c::bgcheck__GuardBox__destructor);

// f_00317e2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys a resource loader: its load split, then (when a resource is set) releases the resource file under
// its graphics context.
namespace d_00317e2c {

inline constexpr u32 vtable_g3d__ResourceSet = 0x0090289cu;
inline constexpr u32 vtable_g3d__ResourceLoader = 0x0090298cu;
inline constexpr guest::Function<0x00130804, u32(u32)> ResFile__first_entry;
inline constexpr guest::Function<0x001329c4, u32(u32, u32, u32, u32)> graphic__CurrentSetter__CurrentSetter;
inline constexpr guest::Function<0x00132a3c, u32(u32, u32, u32)> graphic__CurrentSetter__destructor;
inline constexpr guest::Function<0x0013bc00, u32(u32, u32, u32, u32)> destroy_load_split;

struct __attribute__((packed)) G3dResourceLoaderDestructorFrame {
    u8 unknown_0[0x4];  // (not read or written by name)
    u32 word_4;
    u8 unknown_8[0x10];  // (not read or written by name)
};
GUEST_OFFSET(G3dResourceLoaderDestructorFrame, word_4, 0x4);
GUEST_SIZE(G3dResourceLoaderDestructorFrame, 0x18);

u32 g3d__ResourceLoader__destructor(gptr<g3d__ResourceSet> resource_set, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<G3dResourceLoaderDestructorFrame> frame;  // the original's stack frame
    resource_set->vtable = vtable_g3d__ResourceLoader;
    u32 r0_1 = resource_set.addr() + 0x1cu;
    destroy_load_split(r0_1, vtable_g3d__ResourceLoader, r2, r3);
    resource_set->vtable = vtable_g3d__ResourceSet;
    if (resource_set->word_4 == 0) {
        return r0_1 - 0x1cu;
    }
    graphic__CurrentSetter__CurrentSetter(frame.at(8).addr(), resource_set->word_18, resource_set->word_10, resource_set->word_14);
    u32 r0_3 = resource_set->word_8;
    frame->word_4 = r0_3;
    if (r0_3 != 0) {
        ResFile__first_entry(frame.at(4).addr());
    }
    u32 r1_4 = ~0u;
    resource_set->word_c = r1_4;
    resource_set->word_4 = 0;
    graphic__CurrentSetter__destructor(frame.at(8).addr(), r1_4, 0u);
    return r0_1 - 0x1cu;
}

}  // namespace d_00317e2c
GUEST_EXPORT_FRAMED(0x00317e2c, d_00317e2c::g3d__ResourceLoader__destructor, 0x4010);  // pushes {r4, lr} first, as the original

// f_00317eac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The byte cell (x, y) of the array.
namespace d_00317eac {

struct __attribute__((packed)) Array {
    u32 word_0;
};
GUEST_OFFSET(Array, word_0, 0x0);

inline constexpr guest::Function<0x00757aa0, u32(u32, u32, u32, u32)> Buffer__read_bytes;

u32 get_u8_cell(gptr<Array> array, u32 x) {
    u32 index = Buffer__read_bytes(array.addr(), x, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = array->word_0;
    u32 r0_2 = *gptr<u8>(r1_1 + index);
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_00317eac
GUEST_EXPORT_FRAMED(0x00317eac, d_00317eac::get_u8_cell, 0x4010);  // pushes {r4, lr} first, as the original

// f_00317ec4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// `value` limited to [low, high] (signed).
namespace d_00317ec4 {


u32 clamp_signed(u32 value, u32 low, u32 high) {
    if (s32(value) < s32(low)) {
        return low;
    }
    if (s32(high) < s32(value)) {
        value = high;
    }
    return value;
}

}  // namespace d_00317ec4
GUEST_EXPORT(0x00317ec4, d_00317ec4::clamp_signed);

// f_00317fd8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Scans the items of the cells around the world position, checking their properties.
namespace d_00317fd8 {

struct __attribute__((packed)) Local_00317fd8_ea_10 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00317fd8_ea_10, word_0, 0x0);
GUEST_OFFSET(Local_00317fd8_ea_10, word_4, 0x4);

struct __attribute__((packed)) Local_00317fd8_ea_11 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00317fd8_ea_11, word_0, 0x0);
GUEST_OFFSET(Local_00317fd8_ea_11, word_4, 0x4);
GUEST_OFFSET(Local_00317fd8_ea_11, word_8, 0x8);

struct __attribute__((packed)) Local_00317fd8_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00317fd8_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_00317fd8_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_00317fd8_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00317fd8_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_00317fd8_ea_3, word_4, 0x4);

struct __attribute__((packed)) Local_00317fd8_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00317fd8_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_00317fd8_ea_4, word_4, 0x4);

struct __attribute__((packed)) Local_00317fd8_ea_7 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00317fd8_ea_7, word_0, 0x0);
GUEST_OFFSET(Local_00317fd8_ea_7, word_4, 0x4);

struct __attribute__((packed)) Local_00317fd8_ea_8 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00317fd8_ea_8, word_0, 0x0);
GUEST_OFFSET(Local_00317fd8_ea_8, word_4, 0x4);
GUEST_OFFSET(Local_00317fd8_ea_8, word_8, 0x8);

struct __attribute__((packed)) Local_00317fd8_ea_9 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00317fd8_ea_9, word_0, 0x0);
GUEST_OFFSET(Local_00317fd8_ea_9, word_4, 0x4);

struct __attribute__((packed)) Local_00317fd8_r7_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00317fd8_r7_1, word_0, 0x0);
GUEST_OFFSET(Local_00317fd8_r7_1, word_4, 0x4);

struct __attribute__((packed)) Local_00317fd8_r7_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00317fd8_r7_2, word_0, 0x0);
GUEST_OFFSET(Local_00317fd8_r7_2, word_4, 0x4);

struct __attribute__((packed)) Local_00317fd8_r8_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00317fd8_r8_1, word_0, 0x0);
GUEST_OFFSET(Local_00317fd8_r8_1, word_4, 0x4);

inline constexpr guest::Function<0x0016dad0, u32(u32, u32, u32, u32)> FieldItem__spawn_at;
inline constexpr guest::Function<0x002fe7cc, u32(u32)> read_map_table;
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> GridMap__process_world_position;
inline constexpr guest::Function<0x00302fec, u32(u32)> item_property_17;
inline constexpr guest::Function<0x0030b654, u32(u32)> item_has_valid_data;
inline constexpr guest::Function<0x006fb27c, u32(u32, u32)> room_layer_byte;
inline constexpr guest::Function<0x006fb3f4, u32(u32, u32, u32, u32)> room_layer_index;

void scan_items_around(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = 0;
    u32 r5 = 0;
    u32 r6 = 0;
    u32 r7 = 0;
    u32 r8 = 0;
    u32 r10 = 0;
    u32 r11 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 ea_5 = 0;
    u32 ea_6 = 0;
    gptr<Local_00317fd8_ea_7> ea_7 = gptr<Local_00317fd8_ea_7>(0u);
    gptr<Local_00317fd8_r8_1> r8_1 = gptr<Local_00317fd8_r8_1>(0u);
    gptr<Local_00317fd8_ea_8> ea_8 = gptr<Local_00317fd8_ea_8>(0u);
    u32 r0_16 = 0;
    u32 r3_11 = 0;
    u32 r2_11 = 0;
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    r13 -= 0x60u;
    guest::cpu()->r[13] = r13;
    u32 r0_1 = room_layer_index(r1, 0u, r2, r3);
    guest::cpu()->r[13] = r13;
    u32 r0_2 = room_layer_index(r1, r0, guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] = r13;
    u32 map_3 = read_map_table(r0_1);
    *gptr<u32>(r13 + 0x1cu) = map_3;
    guest::cpu()->r[13] = r13;
    u32 map_4 = read_map_table(r0_2);
    u32 r9 = map_4;
    if (*gptr<u32>(r13 + 0x1cu) != 0 && r9 != 0) {
        guest::cpu()->r[13] = r13;
        *gptr<u32>(r13 + 0x24u) = room_layer_byte(r1, 0u);
        guest::cpu()->r[13] = r13;
        u32 r0_6 = room_layer_byte(r1, r0);
        r6 = 0u;
        r5 = 1u;
        r8 = 8u;
        *gptr<u32>(r13 + 0x20u) = r0_6;
        if (r0 != 3u) {
            if (r0 == 4u) {
                r7 = ~0u;
                r4 = 0xcu;
                r11 = 3u;
                r10 = 7u;
                goto L_318140;
            }
            if (r0 != 5u) {
                r13 += 0x60u;
                guest::cpu()->r[13] = r13;
                return;
            }
            r4 = 6u;
            r11 = 4u;
            r10 = r5;
            goto L_3181cc;
        }
        r4 = 9u;
        r11 = 0xcu;
        r10 = r5;
        goto L_31809c;
L_318094:;
        if (r4 != 9u) {
            goto L_3180e0;
        }
L_31809c:;
        r0_7 = *gptr<u32>(r13 + 0x1cu);
        guest::cpu()->r[13] = r13;
        r0_8 = GridMap__process_world_position(r0_7, 0xcu, r4, 0u);
        if (r0_8 != 0) {
            guest::cpu()->r[13] = r13;
            if (item_has_valid_data(r0_8) != 0) {
                guest::cpu()->r[13] = r13;
                if (item_property_17(r0_8) == 0) {
                    r4 = 0xau;
                    guest::preempt();
                    goto L_318094;
                }
            }
        }
L_3180e0:;
        *gptr<u32>(r13) = r11;
        gptr<Local_00317fd8_ea_2> ea_2 = gptr<Local_00317fd8_ea_2>(r13 + 4u);
        ea_2->word_0 = r4;
        ea_2->word_4 = r8;
        gptr<Local_00317fd8_r7_1> r7_1 = gptr<Local_00317fd8_r7_1>(r13 + 0x1cu);
        gptr<Local_00317fd8_ea_3> ea_3 = gptr<Local_00317fd8_ea_3>(r13 + 0xcu);
        ea_3->word_0 = r4;
        ea_3->word_4 = r6;
        gptr<Local_00317fd8_ea_4> ea_4 = gptr<Local_00317fd8_ea_4>(r13 + 0x14u);
        ea_4->word_0 = r5;
        ea_4->word_4 = r10;
        u32 r0_11 = r7_1->word_0;
        u32 r3_8 = r7_1->word_4;
        u32 r2_8 = *gptr<u32>(r13 + 0x24u);
        guest::cpu()->r[13] = r13;
        FieldItem__spawn_at(r0_11, r9, r2_8, r3_8);
        r4 += 1u;
        if (s32(r4) <= 0xb) {
            guest::preempt();
            goto L_318094;
        }
    }
    r13 += 0x60u;
    guest::cpu()->r[13] = r13;
    return;
L_318138:;
    if (r4 != 0xcu) {
        goto L_318184;
    }
L_318140:;
    r0_12 = *gptr<u32>(r13 + 0x1cu);
    guest::cpu()->r[13] = r13;
    r0_13 = GridMap__process_world_position(r0_12, 3u, r4, 0u);
    if (r0_13 != 0) {
        guest::cpu()->r[13] = r13;
        if (item_has_valid_data(r0_13) != 0) {
            guest::cpu()->r[13] = r13;
            if (item_property_17(r0_13) == 0) {
                r4 = 0xbu;
                guest::preempt();
                goto L_318138;
            }
        }
    }
L_318184:;
    ea_5 = r13 + 0x18u;
    *gptr<u32>(ea_5) = r5;
    ea_6 = r13;
    *gptr<u32>(ea_6) = r11;
    ea_7 = gptr<Local_00317fd8_ea_7>(r13 + 4u);
    ea_7->word_0 = r4;
    ea_7->word_4 = r10;
    r8_1 = gptr<Local_00317fd8_r8_1>(r13 + 0x1cu);
    ea_8 = gptr<Local_00317fd8_ea_8>(r13 + 0xcu);
    ea_8->word_0 = r4;
    ea_8->word_4 = r6;
    ea_8->word_8 = r7;
    r0_16 = r8_1->word_0;
    r3_11 = r8_1->word_4;
    r2_11 = *gptr<u32>(r13 + 0x24u);
    guest::cpu()->r[13] = r13;
    FieldItem__spawn_at(r0_16, r9, r2_11, r3_11);
    r4 -= 1u;
    if (s32(r4) >= 0xa) {
        guest::preempt();
        goto L_318138;
    }
    r13 += 0x60u;
    guest::cpu()->r[13] = r13;
    return;
L_3181c4:;
    if (r4 != 6u) {
        goto L_318210;
    }
L_3181cc:;
    r0_17 = *gptr<u32>(r13 + 0x1cu);
    guest::cpu()->r[13] = r13;
    r0_18 = GridMap__process_world_position(r0_17, r4, 4u, 0u);
    if (r0_18 != 0) {
        guest::cpu()->r[13] = r13;
        if (item_has_valid_data(r0_18) != 0) {
            guest::cpu()->r[13] = r13;
            if (item_property_17(r0_18) == 0) {
                r4 = 7u;
                guest::preempt();
                goto L_3181c4;
            }
        }
    }
L_318210:;
    gptr<Local_00317fd8_ea_9> ea_9 = gptr<Local_00317fd8_ea_9>(r13);
    ea_9->word_0 = r4;
    ea_9->word_4 = r11;
    gptr<Local_00317fd8_ea_10> ea_10 = gptr<Local_00317fd8_ea_10>(r13 + 8u);
    ea_10->word_0 = r4;
    ea_10->word_4 = r8;
    gptr<Local_00317fd8_r7_2> r7_2 = gptr<Local_00317fd8_r7_2>(r13 + 0x1cu);
    gptr<Local_00317fd8_ea_11> ea_11 = gptr<Local_00317fd8_ea_11>(r13 + 0x10u);
    ea_11->word_0 = r5;
    ea_11->word_4 = r6;
    ea_11->word_8 = r10;
    u32 r0_21 = r7_2->word_0;
    u32 r3_14 = r7_2->word_4;
    u32 r2_14 = *gptr<u32>(r13 + 0x24u);
    guest::cpu()->r[13] = r13;
    FieldItem__spawn_at(r0_21, r9, r2_14, r3_14);
    r4 += 1u;
    if (s32(r4) > 8) {
        r13 += 0x60u;
        guest::cpu()->r[13] = r13;
        return;
    }
    guest::preempt();
    goto L_3181c4;
}

}  // namespace d_00317fd8
GUEST_EXPORT(0x00317fd8, d_00317fd8::scan_items_around);

// f_00318540: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the bits in the record's first half.
namespace d_00318540 {

struct __attribute__((packed)) SetHalfBitsArg0 {
    u16 half_0;
};
GUEST_OFFSET(SetHalfBitsArg0, half_0, 0x0);


void set_half_bits(gptr<SetHalfBitsArg0> arg0, u32 r1) {
    u32 r1_1 = r1 | u32(arg0->half_0);
    arg0->half_0 = u16(r1_1);
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_00318540
GUEST_EXPORT(0x00318540, d_00318540::set_half_bits);

// f_003187a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys the model home board menu: its button, layouts, archive readers and menu base.
namespace d_003187a8 {

inline constexpr u32 vtable_ComButton1Lyt = 0x008ee218u;
inline constexpr u32 vtable_Control1Button = 0x008ef22cu;
inline constexpr u32 vtable_Control1Button_at_e4 = 0x008ef270u;
inline constexpr u32 vtable_ComButtonLytBase = 0x008f18f4u;
inline constexpr u32 vtable_BsMenuModelHomeBoard = 0x008f43ccu;
inline constexpr u32 vtable_BsMenuModelHomeBoard_at_28 = 0x008f4438u;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;
inline constexpr guest::Function<0x002f770c, u32(u32)> ControlButtonBase__destructor;
inline constexpr guest::Function<0x002f7710, u32(u32)> destroy_button_action_control;
inline constexpr guest::Function<0x00567ef0, u32(u32, u32)> ssys__ma__lyt__ArcResAccReader__destructor;
inline constexpr guest::Function<0x0056988c, u32(u32)> destroy_animation;
inline constexpr guest::Function<0x005bf744, u32(u32)> Layout__destructor;
inline constexpr guest::Function<0x006aaa30, u32(u32, u32)> MenuBase__destructor;

u32 BsMenuModelHomeBoard__destructor(gptr<BsMenuModelHomeBoard> bs_menu_model_home_board) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    bs_menu_model_home_board->bs_menu_model_home_board_vtable = vtable_BsMenuModelHomeBoard_at_28;
    bs_menu_model_home_board->vtable = vtable_BsMenuModelHomeBoard;
    u32 r4_1 = bs_menu_model_home_board.addr() + 0x1250u;
    bs_menu_model_home_board->vtable_eb8 = vtable_ComButton1Lyt;
    bs_menu_model_home_board->control1_button_vtable = vtable_Control1Button;
    bs_menu_model_home_board->control1_button_vtable_1334 = vtable_Control1Button_at_e4;
    destroy_array_elements(bs_menu_model_home_board.addr() + 0x1368u, 0x2e0b3cu, 0x518u, 1u);
    ControlButtonBase__destructor(r4_1);
    bs_menu_model_home_board->vtable_eb8 = vtable_ComButtonLytBase;
    u32 r0_5 = Layout__destructor(ssys__ma__lyt__ArcResAccReader__destructor(r4_1 - 0x248u, vtable_ComButtonLytBase) - 0x14cu);
    destroy_array_elements(r0_5 - 0x2a4u, 0x2b6ef8u, 0xe0u, 3u);
    destroy_button_action_control(r0_5 - 0x388u);
    destroy_array_elements(r0_5 - 0x5ecu, 0x68eaccu, 0xccu, 3u);
    destroy_array_elements(r0_5 - 0x9e8u, 0x68eaccu, 0xccu, 5u);
    destroy_animation(r0_5 - 0xa14u);
    destroy_animation(r0_5 - 0xa3cu);
    destroy_array_elements(r0_5 - 0xa8cu, 0x56988cu, 0x28u, 2u);
    destroy_animation(r0_5 - 0xab4u);
    destroy_animation(r0_5 - 0xadcu);
    u32 r0_18 = Layout__destructor(ssys__ma__lyt__ArcResAccReader__destructor(r0_5 - 0xd24u, guest::cpu()->r[1]) - 0x14cu);
    frame.release();
    return MenuBase__destructor(r0_18 - 0x4cu, guest::cpu()->r[1]);
}

}  // namespace d_003187a8
GUEST_EXPORT(0x003187a8, d_003187a8::BsMenuModelHomeBoard__destructor);

// f_00318960: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00318960 {

struct __attribute__((packed)) InnerKindArg0 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
};
GUEST_OFFSET(InnerKindArg0, byte_8, 0x8);


u32 inner_kind(gptr<InnerKindArg0> arg0) {
    u32 r0 = arg0.addr();
    u32 r2 = arg0->byte_8;
    u32 r3 = 0x88f364u;
    r0 = 0xcu;
    u32 i = 0u;
    do {
        if (s32(r2) < s32(gptr<u32>(r3)[i])) {
            guest::cpu()->r[1] = i;
            return i & 0xffu;
        }
        i += 1u;
        guest::preempt();
    } while (s32(i) < 0xc);
    guest::cpu()->r[1] = i;
    return r0;
}

}  // namespace d_00318960
GUEST_EXPORT(0x00318960, d_00318960::inner_kind);

// f_00318d8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The signed byte `index` (below 3) at +0x56; -1 out of range.
namespace d_00318d8c {


u32 byte_56_at(u32 r0, u32 r1) {
    return r1 >= 3u ? ~0u : u32(*gptr<s8>(r0 + r1 + 0x56u));
}

}  // namespace d_00318d8c
GUEST_EXPORT(0x00318d8c, d_00318d8c::byte_56_at);

// f_00318da0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// True when the two identity pairs (with the town ids at +0x2c) are equal.
namespace d_00318da0 {

struct __attribute__((packed)) PersonalIdPair {
    u16 half_0;
    u8 unknown_2[0x12];  // (not used here)
    u8 byte_14;
    u8 unknown_15[0x1];  // (not used here)
    u16 half_16;
    u8 unknown_18[0x12];  // (not used here)
    u8 byte_2a;
    u8 unknown_2b[0x1];  // (not used here)
    u16 half_2c;
};
GUEST_OFFSET(PersonalIdPair, half_0, 0x0);
GUEST_OFFSET(PersonalIdPair, byte_14, 0x14);
GUEST_OFFSET(PersonalIdPair, half_16, 0x16);
GUEST_OFFSET(PersonalIdPair, byte_2a, 0x2a);
GUEST_OFFSET(PersonalIdPair, half_2c, 0x2c);

struct __attribute__((packed)) PersonalIdPairEqualsArg1 {
    u16 half_0;
    u8 unknown_2[0x12];  // (not used here)
    u8 byte_14;
    u8 unknown_15[0x1];  // (not used here)
    u16 half_16;
    u8 unknown_18[0x12];  // (not used here)
    u8 byte_2a;
    u8 unknown_2b[0x1];  // (not used here)
    u16 half_2c;
};
GUEST_OFFSET(PersonalIdPairEqualsArg1, half_0, 0x0);
GUEST_OFFSET(PersonalIdPairEqualsArg1, byte_14, 0x14);
GUEST_OFFSET(PersonalIdPairEqualsArg1, half_16, 0x16);
GUEST_OFFSET(PersonalIdPairEqualsArg1, byte_2a, 0x2a);
GUEST_OFFSET(PersonalIdPairEqualsArg1, half_2c, 0x2c);

inline constexpr guest::Function<0x00100d2d, u32(u32, u32, u32)> memory_compare_100d2c;

u32 PersonalIdPair__equals(gptr<PersonalIdPair> personal_id_pair, gptr<PersonalIdPairEqualsArg1> arg1) {
    u32 r1_1 = arg1->half_2c;
    if (personal_id_pair->half_2c == r1_1) {
        r1_1 = arg1->half_0;
        if (personal_id_pair->half_0 == r1_1) {
            r1_1 = personal_id_pair->byte_14;
            if (r1_1 == arg1->byte_14) {
                u32 r0_2 = memory_compare_100d2c(personal_id_pair.addr() + 2u, arg1.addr() + 2u, 0x12u);
                r1_1 = guest::cpu()->r[1];
                if (r0_2 == 0) {
                    r1_1 = arg1->half_16;
                    if (personal_id_pair->half_16 == r1_1) {
                        r1_1 = arg1->byte_2a;
                        if (personal_id_pair->byte_2a == r1_1) {
                            u32 r0_4 = memory_compare_100d2c(personal_id_pair.addr() + 0x18u, arg1.addr() + 0x18u, 0x12u);
                            r1_1 = guest::cpu()->r[1];
                            if (r0_4 == 0) {
                                return 1u;
                            }
                        }
                    }
                }
            }
        }
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_00318da0
GUEST_EXPORT_FRAMED(0x00318da0, d_00318da0::PersonalIdPair__equals, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00318e38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The record of the player (of the two kept for them) whose identity pair matches; null when none does.
namespace d_00318e38 {

struct __attribute__((packed)) Local_00318e38_ea_1 {
    u16 half_0;
    u8 unknown_2[0x12];  // (not used here)
    u8 byte_14;
};
GUEST_OFFSET(Local_00318e38_ea_1, half_0, 0x0);
GUEST_OFFSET(Local_00318e38_ea_1, byte_14, 0x14);

struct __attribute__((packed)) Local_00318e38_r5_1 {
    u16 half_0;
    u8 unknown_2[0x12];  // (not used here)
    u8 byte_14;
};
GUEST_OFFSET(Local_00318e38_r5_1, half_0, 0x0);
GUEST_OFFSET(Local_00318e38_r5_1, byte_14, 0x14);

inline constexpr guest::Function<0x00100d2d, u32(u32, u32, u32)> memory_compare_100d2c;
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x00309fbc, u32(u32, u32)> player_index_in;

u32 PlayerPairRecords__find(u32 player_pair_records, u32 r1, u32 r2) {
    u32 r6 = r1;
    u32 save_data = get_save_data(player_pair_records, r1, r2, guest::cpu()->r[3]);
    u32 r0_3 = player_index_in(save_data + 0xa0u, r2);
    u32 r1_1 = guest::cpu()->r[1];
    if (!(r0_3 >= 4u)) {
        u32 i = 0u;
        u32 r7 = player_pair_records + (r0_3 << 7);
        do {
            u32 r1_2 = r7 + (i << 6);
            gptr<Local_00318e38_r5_1> r5_1 = gptr<Local_00318e38_r5_1>(r1_2 + 0xcu);
            r1_1 = *gptr<u16>(r1_2 + 0x38u);
            if (r1_1 == *gptr<u16>(r6 + 0x2cu)) {
                r1_1 = *gptr<u16>(r6);
                if (r5_1->half_0 == r1_1) {
                    r1_1 = r5_1->byte_14;
                    if (r1_1 == *gptr<u8>(r6 + 0x14u)) {
                        u32 r0_5 = memory_compare_100d2c(r5_1.addr() + 2u, r6 + 2u, 0x12u);
                        r1_1 = guest::cpu()->r[1];
                        if (r0_5 == 0) {
                            gptr<Local_00318e38_ea_1> ea_1 = gptr<Local_00318e38_ea_1>(r5_1.addr() + 0x16u);
                            r1_1 = ea_1->half_0;
                            u32 r0_6 = r6 + 0x16u;
                            if (r1_1 == *gptr<u16>(r6 + 0x16u)) {
                                r1_1 = ea_1->byte_14;
                                if (r1_1 == *gptr<u8>(r0_6 + 0x14u)) {
                                    u32 r0_8 = memory_compare_100d2c(ea_1.addr() + 2u, r0_6 + 2u, 0x12u);
                                    r1_1 = guest::cpu()->r[1];
                                    if (r0_8 == 0) {
                                        return r7 + (i << 6);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            i += 1u;
            guest::preempt();
        } while (s32(i) < 2);
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_00318e38
GUEST_EXPORT_FRAMED(0x00318e38, d_00318e38::PlayerPairRecords__find, 0x41f0);  // pushes {i, r5, r6, r7, r8, lr} first, as the original

// f_00318f18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// True for states 0 and 1, and for state 3 while its time stamp holds.
namespace d_00318f18 {

struct __attribute__((packed)) ScheduledStamp {
    u8 unknown_0[0x9];  // (not used here)
    u8 byte_9;
};
GUEST_OFFSET(ScheduledStamp, byte_9, 0x9);

inline constexpr guest::Function<0x007596ac, u32(u32, u32, u32, u32)> check_stamp_time;

u32 ScheduledStamp__is_active(gptr<ScheduledStamp> scheduled_stamp) {
    u32 r1_1 = scheduled_stamp->byte_9;
    if (r1_1 <= 1u) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    if (r1_1 != 3u) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    return check_stamp_time(scheduled_stamp.addr(), 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00318f18
GUEST_EXPORT(0x00318f18, d_00318f18::ScheduledStamp__is_active);

// f_00318fbc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Runs the function at 0x200ab4 on the shared object at 0x9b3ce0; true.
namespace d_00318fbc {

inline constexpr u32 global_009b3ce0_address = 0x009b3ce0u;
inline constexpr guest::Function<0x00200ab4, u32(u32, u32, u32, u32)> ItemLayoutTable__read_entries;

u32 call_on_9b3ce0(u32 r0, u32 r1, u32 r2) {
    ItemLayoutTable__read_entries(global_009b3ce0_address, r0, r1, r2);
    return 1u;
}

}  // namespace d_00318fbc
GUEST_EXPORT_FRAMED(0x00318fbc, d_00318fbc::call_on_9b3ce0, 0x4010);  // pushes {r4, lr} first, as the original

// f_00319568: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the bit-table bits of the villagers of the town.
namespace d_00319568 {

struct __attribute__((packed)) Local_00319568_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 bit_table;
    u32 word_10;
    u32 word_14;
    u32 word_18;
};
GUEST_OFFSET(Local_00319568_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00319568_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_00319568_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_00319568_ea_1, bit_table, 0xc);
GUEST_OFFSET(Local_00319568_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_00319568_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_00319568_ea_1, word_18, 0x18);

inline constexpr u32 villager_part_flags_address = 0x0095c218u;
inline constexpr u32 villager_bits_address = 0x0095c220u;
inline constexpr u32 villager_flags_address = 0x00ad555cu;
inline guest::global<u32, 0x0095c220> villager_bits;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> current_scene_id;
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x00308971, u32(u32, u32, u32)> index_of_same_villager;
inline constexpr guest::Function<0x00319aa4, u32(u32, u32, u32, u32)> BitTable__set_bit;

void mark_villager_bits(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 i = guest::cpu()->r[4];
    u32 bit_table = guest::cpu()->r[5];
    u32 j = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_00319568_ea_1> ea_1 = gptr<Local_00319568_ea_1>(r13 - 0x1c);
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = i;
    ea_1->bit_table = bit_table;
    ea_1->word_10 = j;
    ea_1->word_14 = r7;
    ea_1->word_18 = r14;
    r13 = ea_1.addr() - 0xcu;
    guest::cpu()->r[13] = r13;
    u32 save_data = get_save_data(r0, r1, r2, r3);
    guest::cpu()->r[13] = r13;
    u32 r0_2 = index_of_same_villager(r0, save_data + 0x292a4u, 0xau);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = r0_2;
    if (r0_2 < 0xau) {
        u32 r0_3 = lsl_r(1u, r7 & 0xff);
        u32 r1_2 = *villager_bits;
        *gptr<u32>(r13 + 4u) = r0_3;
        r0 = r0_3 & r1_2;
        if (r0 != 0) {
            r0 = 1u;
        }
        r1 = *gptr<u32>(r13 + 0x10u);
        if (r1 != r0) {
            j = 0u;
            do {
                bit_table = 0u;
                do {
                    i = 0u;
                    do {
                        guest::cpu()->r[13] = r13;
                        u32 scene_2 = current_scene_id(r0, r1, r2, r3);
                        *gptr<u32>(r13) = scene_2;
                        guest::cpu()->r[13] = r13;
                        r0 = BitTable__set_bit(bit_table, j, uxtb(i), 1u);
                        r1 = guest::cpu()->r[1];
                        r2 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
                        i += 1u;
                        guest::preempt();
                    } while (s32(i) < 2);
                    bit_table += 1u;
                    guest::preempt();
                } while (s32(bit_table) < 0x10);
                j += 1u;
                guest::preempt();
            } while (s32(j) < 0x10);
            u32 r1_3 = *gptr<u32>(r13 + 4u);
            u32 r2_2 = *villager_bits;
            if (*gptr<u32>(r13 + 0x10u) != 0) {
                *villager_bits = r1_3 | r2_2;
            } else {
                *villager_bits = r2_2 & ~r1_3;
            }
            r1 = r7 << 1;
            *gptr<u16>(r1 + villager_flags_address) = 0;
        }
    }
    r13 += 0x14u;
    u32 r4_1 = *gptr<u32>(r13);
    u32 r5_1 = *gptr<u32>(r13 + 4);
    u32 r6_1 = *gptr<u32>(r13 + 8);
    u32 r7_1 = *gptr<u32>(r13 + 0xc);
    u32 tpc_1 = *gptr<u32>(r13 + 0x10);
    r13 += 0x14;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[13] = r13;
}

}  // namespace d_00319568
GUEST_EXPORT(0x00319569, d_00319568::mark_villager_bits);

// f_00319aa4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets or clears bit (column, row, page) of the bit table of `kind` (halves of 16 bits, 16 per page).
namespace d_00319aa4 {

struct __attribute__((packed)) BitTable {
    u16 half_0;
};
GUEST_OFFSET(BitTable, half_0, 0x0);

inline constexpr guest::Function<0x005826e8, u32(u32, u32, u32, u32)> bit_table_of_kind;

u32 BitTable__set_bit(u32 bit_table, u32 r1, u32 layer, u32 r3) {
    u32 scene = *gptr<u32>(guest::cpu()->r[13] + 0x18u);
    gptr<BitTable> bit_table_2 = gptr<BitTable>(bit_table_of_kind(scene, r1, layer, r3));
    u32 r1_1 = guest::cpu()->r[1];
    if (bit_table_2.addr() != 0) {
        u32 r1_2 = 1u << (bit_table & 0xfu);
        bit_table_2 = gptr<BitTable>(bit_table_2.addr() + ((layer & 1u) << 5) + ((r1 & 0xfu) << 1));
        u32 r2_1 = bit_table_2->half_0;
        r1_1 = r3 == 0 ? r2_1 & ~r1_2 : r1_2 | r2_1;
        bit_table_2->half_0 = u16(r1_1);
    }
    guest::cpu()->r[1] = r1_1;
    return bit_table_2.addr();
}

}  // namespace d_00319aa4
GUEST_EXPORT_FRAMED(0x00319aa4, d_00319aa4::BitTable__set_bit, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0031a334: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Fills the item description for its category (recursing for kinds 5 and 6).
namespace d_0031a334 {

struct __attribute__((packed)) Info {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Info, word_0, 0x0);
GUEST_OFFSET(Info, word_4, 0x4);

inline constexpr guest::Function<0x001b1b40, u32(u32, u32)> copy_3_bytes;
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> get_data_base;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> construct_item;
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> random_below;
inline constexpr guest::Function<0x0031a334, u32(u32, u32, u32, u32)> call_Item__describe_by_category;
inline constexpr guest::Function<0x005359fc, u32(u32)> category_info;
inline constexpr guest::Function<0x005361a8, u32(u32, u32, u32, u32)> Item__data;
inline constexpr guest::Function<0x0070b49c, u32(u32, u32, u32, u32)> TraitBytes__first_field_2;
inline constexpr guest::Function<0x0070b510, u32(u32, u32, u32, u32)> TraitBytes__first_field_0;
inline constexpr guest::Function<0x0070b574, u32(u32, u32, u32, u32)> TraitBytes__first_field_3;
inline constexpr guest::Function<0x0070b5e8, u32(u32, u32, u32, u32)> TraitBytes__first_field_1;
inline constexpr guest::Function<0x0070b65c, u32(u32, u32, u32, u32)> TraitBytes__field_3_value;
inline constexpr guest::Function<0x0070b694, u32(u32, u32)> TraitBytes__field_2_value;
inline constexpr guest::Function<0x0070b6d0, u32(u32, u32)> TraitBytes__field_1_value;
inline constexpr guest::Function<0x0070b70c, u32(u32, u32)> TraitBytes__field_0_value;

struct __attribute__((packed)) ItemDescribeByCategoryFrame {
    u8 unknown_0[0x8];  // (not read or written by name)
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u8 unknown_18[0x4];  // (not read or written by name)
};
GUEST_OFFSET(ItemDescribeByCategoryFrame, word_8, 0x8);
GUEST_OFFSET(ItemDescribeByCategoryFrame, word_c, 0xc);
GUEST_OFFSET(ItemDescribeByCategoryFrame, word_10, 0x10);
GUEST_OFFSET(ItemDescribeByCategoryFrame, word_14, 0x14);
GUEST_SIZE(ItemDescribeByCategoryFrame, 0x1c);

u32 Item__describe_by_category(u32 item, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<ItemDescribeByCategoryFrame> frame;  // the original's stack frame
    u32 r4 = 0;
    u32 r6 = 0;
    u32 r8 = 0;
    u32 r10 = 0;
    u32 r11 = guest::cpu()->r[11];
    u32 r12 = 0;
    u32 r0_1 = 0;
    u32 r0_28 = 0;
    u32 cf_5 = 0;
    u32 cf_8 = 0;
    u32 cf_11 = 0;
    u32 zf_15 = 0;
    u32 r0_31 = 0;
    u32 r1_13 = 0;
    u32 cf_12 = 0;
    u32 cf_13 = 0;
    u32 zf_16 = 0;
    u32 cf_14 = 0;
    u32 zf_18 = 0;
    u32 cf_15 = 0;
    u32 zf_21 = 0;
    u32 cf_16 = 0;
    u32 zf_28 = 0;
    u32 cf_18 = 0;
    u32 r0_47 = 0;
    u32 r0_50 = 0;
    u32 cf_29 = 0;
    u32 zf_37 = 0;
    u32 r0_51 = 0;
    u32 cf_30 = 0;
    u32 cf_31 = 0;
    u32 r1_17 = 0;
    u32 r0_52 = 0;
    u32 r1_18 = 0;
    u32 zf_38 = 0;
    u32 cf_32 = 0;
    u32 zf_40 = 0;
    u32 cf_33 = 0;
    u32 zf_43 = 0;
    u32 cf_34 = 0;
    u32 zf_50 = 0;
    u32 cf_36 = 0;
    u32 r0_58 = 0;
    u32 r0_62 = 0;
    u32 zf_55 = 0;
    u32 cf_37 = 0;
    u32 r1_19 = 0;
    u32 r0_63 = 0;
    u32 r1_20 = 0;
    u32 r3_15 = 0;
    u32 zf_56 = 0;
    u32 cf_38 = 0;
    u32 r0_64 = 0;
    u32 r0_65 = 0;
    u32 r3_16 = 0;
    u32 r0_66 = 0;
    u32 zf_63 = 0;
    u32 cf_41 = 0;
    u32 zf_65 = 0;
    u32 cf_42 = 0;
    u32 zf_72 = 0;
    u32 cf_45 = 0;
    u32 r7 = r2;
    u32 r9 = item;
    u32 r5 = r1;
    if (r2 != 4u) {
        if (r7 == 3u) {
            r0_1 = random_below(3u, r1, r2, r3);
            if (r0_1 == 0) {
                return call_Item__describe_by_category(r9, r5, 5u, guest::cpu()->r[3]);
            }
            if (r0_1 == 1u) {
                return call_Item__describe_by_category(r9, r5, 6u, guest::cpu()->r[3]);
            }
            if (r0_1 != 2u) {
                return r0_1;
            }
            goto L_31a428;
        }
        u32 data_base = get_data_base(item, r1, r2, r3);
        copy_3_bytes(frame.at(0).addr(), (data_base + 0x62000u) + 0x1ccu);
        gptr<Info> info = gptr<Info>(category_info(5u));
        u32 r0_7 = info->word_0;
        r6 = info->word_4;
        r10 = uxth(r0_7);
        construct_item(frame.at(4).addr(), r10);
        u32 item_data = Item__data(frame.at(4).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        r4 = item_data;
        u32 data_base_2 = get_data_base(item_data, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r12 = guest::cpu()->r[12];
        u32 r0_12 = *gptr<u8>(data_base_2 + 0x6214eu);
        r8 = r0_12 >> 4 == 0;
        if (r7 == 1u) {
            frame->word_8 = TraitBytes__field_3_value(frame.at(0).addr(), 5u, r2, r3);
            frame->word_c = TraitBytes__field_2_value(frame.at(0).addr(), 5u);
            frame->word_10 = TraitBytes__field_1_value(frame.at(0).addr(), 5u);
            frame->word_14 = TraitBytes__field_0_value(frame.at(0).addr(), 5u);
            u32 r0_22 = TraitBytes__first_field_3(frame.at(0).addr(), 5u, guest::cpu()->r[2], guest::cpu()->r[3]);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r11 = r0_22;
            r7 = 0u;
            if ((r6 >= 0u) && r6 != 0) {
                do {
                    u32 r0_23 = *gptr<u8>(r4 + 0x19u);
                    u32 r0_24 = r0_23 & 0xfu;
                    if (r0_24 >= 0xeu) {
                        r0_24 = 0u;
                    }
                    if (r0_24 == r5) {
                        if (r8 == 0) {
                            u32 r0_25 = *gptr<u8>(r4 + 0x1bu);
                            if ((r0_25 & 1u) != 0) {
                                goto L_31a60c;
                            }
                        }
                        u32 r0_26 = *gptr<u8>(r4 + 0xdu);
                        u32 r1_9 = r0_26 >= 0xb9u ? 0u : r0_26;
                        if (r1_9 != r11) {
                            if (!(r0_26 >= 0xb9u)) {
                                if (r0_26 == 0x14u) {
                                    u32 random = random_below(0x64u, r1_9, r2, r3);
                                    r2 = guest::cpu()->r[2];
                                    r3 = guest::cpu()->r[3];
                                    if (random >= frame->word_8) {
                                        goto L_31a60c;
                                    }
                                    r0_28 = r10 + r7;
                                    if (0x372au >= r0_28) {
                                        goto L_31a5f0;
                                    }
                                    goto L_31a60c;
                                }
                            }
                            cf_5 = r0_26 >= 0xb9u;
                            if (!cf_5) {
                                if (r0_26 == 0x15u) {
                                    u32 random_2 = random_below(0x64u, r1_9, r2, r3);
                                    r2 = guest::cpu()->r[2];
                                    r3 = guest::cpu()->r[3];
                                    if (random_2 >= frame->word_c) {
                                        goto L_31a60c;
                                    }
                                    r0_28 = r10 + r7;
                                    if (0x372au >= r0_28) {
                                        goto L_31a5f0;
                                    }
                                    goto L_31a60c;
                                }
                            }
                            cf_8 = r0_26 >= 0xb9u;
                            if (!cf_8) {
                                if (r0_26 == 0x16u) {
                                    u32 random_3 = random_below(0x64u, r1_9, r2, r3);
                                    r2 = guest::cpu()->r[2];
                                    r3 = guest::cpu()->r[3];
                                    if (random_3 >= frame->word_10) {
                                        goto L_31a60c;
                                    }
                                    r0_28 = r10 + r7;
                                    if (0x372au >= r0_28) {
                                        goto L_31a5f0;
                                    }
                                    goto L_31a60c;
                                }
                            }
                            cf_11 = r0_26 >= 0xb9u;
                            if (cf_11) {
                                goto L_31a60c;
                            }
                            zf_15 = r0_26 == 0x17u;
                            if (!zf_15) {
                                goto L_31a60c;
                            }
                            r0_31 = random_below(0x64u, r1_9, r2, r3);
                            r2 = guest::cpu()->r[2];
                            r3 = guest::cpu()->r[3];
                            r1_13 = frame->word_14;
                            cf_12 = r0_31 >= r1_13;
                            if (cf_12) {
                                goto L_31a60c;
                            }
                            r0_28 = r10 + r7;
                            cf_13 = 0x372au >= r0_28;
                            if (!cf_13) {
                                goto L_31a60c;
                            }
L_31a5f0:;
                            u32 r1_14 = r0_28 - 0x2000u;
                            r2 = 1u;
                            u32 r0_32 = r1_14 >> 5;
                            r3 = gptr<u32>(r9)[r0_32];
                            *gptr<u32>(r9 + (r0_32 << 2)) = r3 | (r2 << (r1_14 & 0x1fu));
                        }
                    }
L_31a60c:;
                    r7 += 1u;
                    zf_16 = r6 == r7;
                    cf_14 = r6 >= r7;
                    r4 += 0x1eu;
                    guest::preempt();
                } while (cf_14 && !zf_16);
            }
            r2 = 0u;
            r1 = r2;
            do {
                item = gptr<u32>(r9)[r1];
                if (item != 0) {
                    do {
                        if ((item & 1u) != 0) {
                            r2 += 1u;
                        }
                        u32 res_1 = item >> 1;
                        zf_18 = res_1 == 0;
                        item = res_1;
                        guest::preempt();
                    } while (!zf_18);
                }
                r1 += 1u;
                cf_15 = r1 >= 0xbau;
                guest::preempt();
            } while (!cf_15);
            if (r2 != 0) {
                guest::cpu()->r[1] = r1;
                return frame.at(0).addr();
            }
            call_Item__describe_by_category(r9, r5, 5u, r3);
            r3 = guest::cpu()->r[3];
            r2 = 0u;
            r1 = r2;
            do {
                item = gptr<u32>(r9)[r1];
                if (item != 0) {
                    do {
                        if ((item & 1u) != 0) {
                            r2 += 1u;
                        }
                        u32 res_2 = item >> 1;
                        zf_21 = res_2 == 0;
                        item = res_2;
                        guest::preempt();
                    } while (!zf_21);
                }
                r1 += 1u;
                cf_16 = r1 >= 0xbau;
                guest::preempt();
            } while (!cf_16);
            if (r2 != 0) {
                guest::cpu()->r[1] = r1;
                return frame.at(0).addr();
            }
            item = Item__data(frame.at(4).addr(), r1, r2, r3);
            r1 = guest::cpu()->r[1];
            if (item == 0) {
                return frame.at(0).addr();
            }
            r1 = 0u;
            if (!(r6 >= 0u) || (r6 == 0)) {
                guest::cpu()->r[1] = r1;
                return frame.at(0).addr();
            }
            do {
                u32 r2_10 = *gptr<u8>(item + 0x19u);
                u32 r2_11 = r2_10 & 0xfu;
                if (r2_11 >= 0xeu) {
                    r2_11 = 0u;
                }
                if (r2_11 == r5) {
                    if (r8 != 0) {
                        goto L_31a6fc;
                    }
                    u32 r2_12 = *gptr<u8>(item + 0x1bu);
                    if ((r2_12 & 1u) == 0) {
                        goto L_31a6fc;
                    }
                }
                r1 += 1u;
                zf_28 = r6 == r1;
                cf_18 = r6 >= r1;
                item += 0x1eu;
                guest::preempt();
            } while (cf_18 && !zf_28);
            guest::cpu()->r[1] = r1;
            return frame.at(0).addr();
        }
        if (r7 == 2u) {
            frame->word_8 = TraitBytes__field_3_value(frame.at(0).addr(), 5u, r2, r3);
            frame->word_c = TraitBytes__field_2_value(frame.at(0).addr(), 5u);
            frame->word_10 = TraitBytes__field_1_value(frame.at(0).addr(), 5u);
            u32 r0_41 = TraitBytes__field_0_value(frame.at(0).addr(), 5u);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r6 >= 0u && r6 != 0) {
                r11 = 0x372au;
            }
            r7 = 0u;
            frame->word_14 = r0_41;
            if ((r6 >= 0u) && r6 != 0) {
                do {
                    u32 r0_42 = *gptr<u8>(r4 + 0x19u);
                    u32 r0_43 = r0_42 & 0xfu;
                    if (r0_43 >= 0xeu) {
                        r0_43 = 0u;
                    }
                    if (r0_43 == r5) {
                        if (r8 == 0) {
                            u32 r0_44 = *gptr<u8>(r4 + 0x1bu);
                            if ((r0_44 & 1u) != 0) {
                                goto L_31a8b4;
                            }
                        }
                        u32 r0_45 = *gptr<u8>(r4 + 0xdu);
                        if (!(r0_45 >= 0xb9u)) {
                            if (r0_45 == 0x14u) {
                                u32 random_4 = random_below(0x64u, r1, r2, r3);
                                r2 = guest::cpu()->r[2];
                                r3 = guest::cpu()->r[3];
                                r1 = frame->word_8;
                                if (random_4 >= r1) {
                                    goto L_31a8b4;
                                }
                                r0_47 = r10 + r7;
                                if (r11 >= r0_47) {
                                    r1_17 = r0_47 - 0x2000u;
                                    r2 = 1u;
                                    r0_52 = r1_17 >> 5;
                                    r1_18 = r1_17 & 0x1fu;
                                    r3 = gptr<u32>(r9)[r0_52];
                                    r1 = r3 | lsl_r(r2, r1_18 & 0xff);
                                    *gptr<u32>(r9 + (r0_52 << 2)) = r1;
                                    goto L_31a8b4;
                                }
                                goto L_31a8b4;
                            }
                        }
                        if (!(r0_45 >= 0xb9u)) {
                            if (r0_45 == 0x15u) {
                                u32 random_5 = random_below(0x64u, r1, r2, r3);
                                r2 = guest::cpu()->r[2];
                                r3 = guest::cpu()->r[3];
                                r1 = frame->word_c;
                                if (random_5 >= r1) {
                                    goto L_31a8b4;
                                }
                                r0_47 = r10 + r7;
                                if (!(r11 >= r0_47)) {
                                    goto L_31a8b4;
                                }
                                r1_17 = r0_47 - 0x2000u;
                                r2 = 1u;
                                r0_52 = r1_17 >> 5;
                                r1_18 = r1_17 & 0x1fu;
                                r3 = gptr<u32>(r9)[r0_52];
                                r1 = r3 | lsl_r(r2, r1_18 & 0xff);
                                *gptr<u32>(r9 + (r0_52 << 2)) = r1;
                                goto L_31a8b4;
                            }
                        }
                        if (!(r0_45 >= 0xb9u)) {
                            if (r0_45 == 0x16u) {
                                u32 random_6 = random_below(0x64u, r1, r2, r3);
                                r2 = guest::cpu()->r[2];
                                r3 = guest::cpu()->r[3];
                                r1 = frame->word_10;
                                if (random_6 >= r1) {
                                    goto L_31a8b4;
                                }
                                r0_50 = r10 + r7;
                                if (r11 >= r0_50) {
                                    goto L_31a898;
                                }
                                goto L_31a8b4;
                            }
                        }
                        cf_29 = r0_45 >= 0xb9u;
                        if (cf_29) {
                            goto L_31a8b4;
                        }
                        zf_37 = r0_45 == 0x17u;
                        if (!zf_37) {
                            goto L_31a8b4;
                        }
                        r0_51 = random_below(0x64u, r1, r2, r3);
                        r2 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
                        r1 = frame->word_14;
                        cf_30 = r0_51 >= r1;
                        if (cf_30) {
                            goto L_31a8b4;
                        }
                        r0_50 = r10 + r7;
                        cf_31 = r11 >= r0_50;
                        if (!cf_31) {
                            goto L_31a8b4;
                        }
                        goto L_31a898;
L_31a898:;
                        u32 r0_53 = r0_50 - 0x2000u;
                        r1 = 1u;
                        r3 = r0_53 >> 5;
                        r2 = gptr<u32>(r9)[r3];
                        *gptr<u32>(r9 + (r3 << 2)) = r2 | (r1 << (r0_53 & 0x1fu));
                    }
L_31a8b4:;
                    r7 += 1u;
                    zf_38 = r6 == r7;
                    cf_32 = r6 >= r7;
                    r4 += 0x1eu;
                    guest::preempt();
                } while (cf_32 && !zf_38);
            }
            r2 = 0u;
            r1 = r2;
            do {
                item = gptr<u32>(r9)[r1];
                if (item != 0) {
                    do {
                        if ((item & 1u) != 0) {
                            r2 += 1u;
                        }
                        u32 res_3 = item >> 1;
                        zf_40 = res_3 == 0;
                        item = res_3;
                        guest::preempt();
                    } while (!zf_40);
                }
                r1 += 1u;
                cf_33 = r1 >= 0xbau;
                guest::preempt();
            } while (!cf_33);
            if (r2 != 0) {
                guest::cpu()->r[1] = r1;
                return frame.at(0).addr();
            }
            call_Item__describe_by_category(r9, r5, 5u, r3);
            r3 = guest::cpu()->r[3];
            r2 = 0u;
            r1 = r2;
            do {
                item = gptr<u32>(r9)[r1];
                if (item != 0) {
                    do {
                        if ((item & 1u) != 0) {
                            r2 += 1u;
                        }
                        u32 res_4 = item >> 1;
                        zf_43 = res_4 == 0;
                        item = res_4;
                        guest::preempt();
                    } while (!zf_43);
                }
                r1 += 1u;
                cf_34 = r1 >= 0xbau;
                guest::preempt();
            } while (!cf_34);
            if (r2 != 0) {
                guest::cpu()->r[1] = r1;
                return frame.at(0).addr();
            }
            item = Item__data(frame.at(4).addr(), r1, r2, r3);
            r1 = guest::cpu()->r[1];
            if (item == 0) {
                return frame.at(0).addr();
            }
            r1 = 0u;
            if (!(r6 >= 0u) || (r6 == 0)) {
                guest::cpu()->r[1] = r1;
                return frame.at(0).addr();
            }
            do {
                u32 r2_16 = *gptr<u8>(item + 0x19u);
                u32 r2_17 = r2_16 & 0xfu;
                if (r2_17 >= 0xeu) {
                    r2_17 = 0u;
                }
                if (r2_17 == r5) {
                    if (r8 != 0) {
                        goto L_31a9a4;
                    }
                    u32 r2_18 = *gptr<u8>(item + 0x1bu);
                    if ((r2_18 & 1u) == 0) {
                        goto L_31a9a4;
                    }
                }
                r1 += 1u;
                zf_50 = r6 == r1;
                cf_36 = r6 >= r1;
                item += 0x1eu;
                guest::preempt();
            } while (cf_36 && !zf_50);
            guest::cpu()->r[1] = r1;
            return frame.at(0).addr();
        }
        if (r7 == 5u) {
            r0_58 = TraitBytes__first_field_0(frame.at(0).addr(), 5u, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r12 = guest::cpu()->r[12];
            goto L_31aa28;
        }
        if (r7 == 6u) {
            r0_58 = TraitBytes__first_field_1(frame.at(0).addr(), 5u, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r12 = guest::cpu()->r[12];
            goto L_31aa28;
        }
        if (r7 == 7u) {
            r0_58 = TraitBytes__first_field_2(frame.at(0).addr(), 5u, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r12 = guest::cpu()->r[12];
            goto L_31aa28;
        }
        if (r7 == 8u) {
            r0_58 = TraitBytes__first_field_3(frame.at(0).addr(), 5u, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r12 = guest::cpu()->r[12];
            goto L_31aa28;
        }
        goto L_31aa2c;
    }
    call_Item__describe_by_category(item, r1, 5u, r3);
    call_Item__describe_by_category(r9, r5, 6u, guest::cpu()->r[3]);
L_31a428:;
    r0_1 = call_Item__describe_by_category(r9, r5, 7u, guest::cpu()->r[3]);
    return r0_1;
L_31a6fc:;
    r0_62 = r10 + r1;
    r1 = 0x372au;
    zf_55 = r0_62 == r1;
    cf_37 = r0_62 >= r1;
    if (cf_37 && !zf_55) {
        guest::cpu()->r[1] = r1;
        return frame.at(0).addr();
    }
    r1_19 = r0_62 - 0x2000u;
    r0_63 = r1_19 >> 5;
    r1_20 = r1_19 & 0x1fu;
    r3_15 = gptr<u32>(r9)[r0_63];
    r1 = r3_15 | lsl_r(1u, r1_20 & 0xff);
    *gptr<u32>(r9 + (r0_63 << 2)) = r1;
    guest::cpu()->r[1] = r1;
    return frame.at(0).addr();
L_31a9a4:;
    item = r10 + r1;
    r1 = 0x372au;
    zf_56 = item == r1;
    cf_38 = item >= r1;
    if (cf_38 && !zf_56) {
        guest::cpu()->r[1] = r1;
        return frame.at(0).addr();
    }
    r0_64 = item - 0x2000u;
    r1 = r0_64 >> 5;
    r0_65 = r0_64 & 0x1fu;
    r3_16 = gptr<u32>(r9)[r1];
    r0_66 = r3_16 | lsl_r(1u, r0_65 & 0xff);
    *gptr<u32>(r9 + (r1 << 2)) = r0_66;
    guest::cpu()->r[1] = r1;
    return frame.at(0).addr();
L_31aa28:;
    r7 = r0_58;
L_31aa2c:;
    item = 0u;
    if (r6 >= 0u && r6 != 0) {
        r12 = 0x372au;
        r3 = 1u;
    }
    if ((r6 >= 0u) && r6 != 0) {
        do {
            u32 r1_21 = *gptr<u8>(r4 + 0x19u);
            u32 r1_22 = r1_21 & 0xfu;
            if (r1_22 >= 0xeu) {
                r1_22 = 0u;
            }
            if (r1_22 == r5) {
                u32 r1_23 = *gptr<u8>(r4 + 0xdu);
                if (r1_23 >= 0xb9u) {
                    r1_23 = 0u;
                }
                if (r1_23 == r7) {
                    if (r8 == 0) {
                        u32 r1_24 = *gptr<u8>(r4 + 0x1bu);
                        if ((r1_24 & 1u) != 0) {
                            goto L_31aaa4;
                        }
                    }
                    u32 r1_25 = r10 + item;
                    u32 zf_62 = r1_25 == r12;
                    u32 cf_40 = r1_25 >= r12;
                    if (r1_25 <= r12) {
                        u32 r1_26 = r1_25 - 0x2000u >> 5;
                        r2 = gptr<u32>(r9)[r1_26] | lsl_r(r3, (r1_25 - 0x2000u & 0x1fu) & 0xff);
                        *gptr<u32>(r9 + (r1_26 << 2)) = r2;
                    }
                }
            }
L_31aaa4:;
            item += 1u;
            zf_63 = r6 == item;
            cf_41 = r6 >= item;
            r4 += 0x1eu;
            guest::preempt();
        } while (cf_41 && !zf_63);
    }
    r3 = 0u;
    r1 = r3;
    do {
        item = gptr<u32>(r9)[r1];
        if (item != 0) {
            do {
                if ((item & 1u) != 0) {
                    r3 += 1u;
                }
                u32 res_5 = item >> 1;
                zf_65 = res_5 == 0;
                item = res_5;
                guest::preempt();
            } while (!zf_65);
        }
        r1 += 1u;
        cf_42 = r1 >= 0xbau;
        guest::preempt();
    } while (!cf_42);
    if (r3 == 0) {
        u32 item_data_2 = Item__data(frame.at(4).addr(), r1, r2, r3);
        r1 = item_data_2;
        if (item_data_2 != 0) {
            item = 0u;
            if ((r6 >= 0u) && r6 != 0) {
                do {
                    u32 r2_21 = *gptr<u8>(r1 + 0x19u);
                    u32 r2_22 = r2_21 & 0xfu;
                    if (r2_22 >= 0xeu) {
                        r2_22 = 0u;
                    }
                    if (r2_22 == r5) {
                        u32 r2_23 = *gptr<u8>(r1 + 0xdu);
                        if (r2_23 >= 0xb9u) {
                            r2_23 = 0u;
                        }
                        if (r2_23 == r7) {
                            r1 = 0x372au;
                            item += r10;
                            if ((item >= r1) && item != r1) {
                                break;
                            }
                            r0_64 = item - 0x2000u;
                            r1 = r0_64 >> 5;
                            r0_65 = r0_64 & 0x1fu;
                            r3_16 = gptr<u32>(r9)[r1];
                            r0_66 = r3_16 | lsl_r(1u, r0_65 & 0xff);
                            *gptr<u32>(r9 + (r1 << 2)) = r0_66;
                            guest::cpu()->r[1] = r1;
                            return frame.at(0).addr();
                        }
                    }
                    item += 1u;
                    zf_72 = r6 == item;
                    cf_45 = r6 >= item;
                    r1 += 0x1eu;
                    guest::preempt();
                } while (cf_45 && !zf_72);
            }
        }
    }
    guest::cpu()->r[1] = r1;
    return frame.at(0).addr();
}

}  // namespace d_0031a334
GUEST_EXPORT_FRAMED(0x0031a334, d_0031a334::Item__describe_by_category, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_0031af8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys the design select menu: its windows, buttons, renderers, layouts and menu base.
namespace d_0031af8c {

struct __attribute__((packed)) Local_0031af8c_ea_1 {
    u32 vtable;
    u8 unknown_4[0x8];  // (not used here)
    u32 drag_icon_group_vtable;
};
GUEST_OFFSET(Local_0031af8c_ea_1, vtable, 0x0);
GUEST_OFFSET(Local_0031af8c_ea_1, drag_icon_group_vtable, 0xc);

inline constexpr u32 vtable_ComButton2Lyt = 0x008ee228u;
inline constexpr u32 vtable_DragIconGroup = 0x008ee248u;
inline constexpr u32 vtable_DragIconGroup_at_c = 0x008ee258u;
inline constexpr u32 vtable_Control2Button = 0x008ef284u;
inline constexpr u32 vtable_Control2Button_at_e4 = 0x008ef2c8u;
inline constexpr u32 vtable_DragIconControl_rec = 0x008f08acu;
inline constexpr u32 vtable_ComButtonLytBase = 0x008f18f4u;
inline constexpr u32 vtable_BsMenuMyDesignSelect = 0x008f444cu;
inline constexpr u32 vtable_BsMenuMyDesignSelect_at_28 = 0x008f44b8u;
inline constexpr u32 vtable_BsMenuMyDesignSelect_at_a4 = 0x008f45bcu;
inline constexpr u32 vtable_ItemSelectNameWindow = 0x008f47a0u;
inline constexpr u32 vtable_ComTitle = 0x008f8b4cu;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;
inline constexpr guest::Function<0x002f770c, u32(u32)> ControlButtonBase__destructor;
inline constexpr guest::Function<0x002f7710, u32(u32, u32)> destroy_button_action_control;
inline constexpr guest::Function<0x003170d0, u32(u32)> destroy_ITalkRecept;
inline constexpr guest::Function<0x00317dec, u32(u32)> ssys__ma__HeapAllocator__destructor;
inline constexpr guest::Function<0x00567ef0, u32(u32, u32)> ssys__ma__lyt__ArcResAccReader__destructor;
inline constexpr guest::Function<0x0056988c, u32(u32, u32)> destroy_animation;
inline constexpr guest::Function<0x005bf744, u32(u32)> Layout__destructor;
inline constexpr guest::Function<0x005d703c, u32(u32)> script__MsgEngine__destructor;
inline constexpr guest::Function<0x005e3194, u32(u32, u32)> script__RenderTrace__destructor_b;
inline constexpr guest::Function<0x006aaa30, u32(u32, u32)> MenuBase__destructor;

u32 BsMenuMyDesignSelect__destructor(gptr<BsMenuMyDesignSelect> bs_menu_my_design_select) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    bs_menu_my_design_select->bs_menu_my_design_select_vtable_a4 = vtable_BsMenuMyDesignSelect_at_a4;
    bs_menu_my_design_select->vtable = vtable_BsMenuMyDesignSelect;
    bs_menu_my_design_select->bs_menu_my_design_select_vtable = vtable_BsMenuMyDesignSelect_at_28;
    bs_menu_my_design_select->vtable_2f20 = vtable_ComButton2Lyt;
    u32 r4_1 = bs_menu_my_design_select.addr() + 0x32b8u;
    bs_menu_my_design_select->control2_button_vtable_339c = vtable_Control2Button_at_e4;
    bs_menu_my_design_select->control2_button_vtable = vtable_Control2Button;
    destroy_array_elements(r4_1 + 0x118u, 0x2e0b3cu, 0x518u, 2u);
    ControlButtonBase__destructor(r4_1);
    bs_menu_my_design_select->vtable_2f20 = vtable_ComButtonLytBase;
    u32 r0_5 = Layout__destructor(ssys__ma__lyt__ArcResAccReader__destructor(r4_1 - 0x248u, vtable_ComButtonLytBase) - 0x14cu);
    *gptr<u32>(r0_5 - 0x954u) = vtable_ComTitle;
    u32 r0_6 = r0_5 - 0x44u;
    destroy_animation(r0_6, vtable_ComTitle);
    u32 r0_7 = r0_6 - 0x28u;
    destroy_animation(r0_7, guest::cpu()->r[1]);
    u32 r0_8 = r0_7 - 0x28u;
    destroy_animation(r0_8, guest::cpu()->r[1]);
    u32 r0_9 = r0_8 - 0x28u;
    destroy_animation(r0_9, guest::cpu()->r[1]);
    u32 r0_14 = Layout__destructor(ssys__ma__lyt__ArcResAccReader__destructor(r0_9 - 0x248u, guest::cpu()->r[1]) - 0x14cu) - 0xd0u;
    script__RenderTrace__destructor_b(r0_14, guest::cpu()->r[1]);
    u32 r0_15 = r0_14 - 0xc4u;
    script__RenderTrace__destructor_b(r0_15, guest::cpu()->r[1]);
    u32 r0_16 = r0_15 - 0xc4u;
    script__RenderTrace__destructor_b(r0_16, guest::cpu()->r[1]);
    u32 r0_17 = r0_16 - 0xc4u;
    script__RenderTrace__destructor_b(r0_17, guest::cpu()->r[1]);
    u32 r0_18 = r0_17 - 0xc4u;
    script__RenderTrace__destructor_b(r0_18, guest::cpu()->r[1]);
    u32 r0_19 = r0_18 - 0x100u;
    script__MsgEngine__destructor(r0_19);
    *gptr<u32>(r0_19 - 0x518u) = vtable_ItemSelectNameWindow;
    u32 r0_20 = r0_19 - 0xfcu;
    script__RenderTrace__destructor_b(r0_20, vtable_ItemSelectNameWindow);
    u32 r0_21 = r0_20 - 0x28u;
    destroy_animation(r0_21, guest::cpu()->r[1]);
    u32 r0_22 = r0_21 - 0x28u;
    destroy_animation(r0_22, guest::cpu()->r[1]);
    u32 r0_25 = Layout__destructor(r0_22 - 0x15cu) - 0x24cu;
    u32 r0_27 = ssys__ma__lyt__ArcResAccReader__destructor(r0_25, guest::cpu()->r[1]) - 0x50u;
    destroy_animation(r0_27, guest::cpu()->r[1]);
    u32 r0_28 = r0_27 - 0x28u;
    destroy_animation(r0_28, guest::cpu()->r[1]);
    u32 r0_29 = r0_28 - 0x28u;
    destroy_array_elements(r0_29 - 0x19a4u, 0x320b0cu, 0x290u, 0xau);
    gptr<Local_0031af8c_ea_1> ea_1 = gptr<Local_0031af8c_ea_1>((r0_29 - 0x2060u) + 0x57cu);
    ea_1->vtable = vtable_DragIconGroup;
    u32 r0_31 = ea_1.addr() + 0x114u;
    ea_1->drag_icon_group_vtable = vtable_DragIconGroup_at_c;
    destroy_animation(r0_31, vtable_DragIconGroup_at_c);
    u32 r0_32 = r0_31 - 0x28u;
    destroy_animation(r0_32, guest::cpu()->r[1]);
    u32 r0_33 = r0_32 - 0x28u;
    destroy_animation(r0_33, guest::cpu()->r[1]);
    u32 r0_34 = r0_33 - 0x28u;
    destroy_animation(r0_34, guest::cpu()->r[1]);
    u32 r0_35 = r0_34 - 0x28u;
    destroy_animation(r0_35, guest::cpu()->r[1]);
    u32 r0_36 = r0_35 - 0x28u;
    destroy_animation(r0_36, guest::cpu()->r[1]);
    u32 r0_37 = r0_36 - 0x2cu;
    destroy_animation(r0_37, guest::cpu()->r[1]);
    u32 ea_2 = r0_37 - 0x138u;
    *gptr<u32>(ea_2) = vtable_DragIconControl_rec;
    destroy_button_action_control(ea_2, vtable_DragIconControl_rec);
    u32 r0_38 = ea_2 - 8u;
    ssys__ma__HeapAllocator__destructor(r0_38);
    u32 r0_41 = Layout__destructor(r0_38 - 0x14cu) - 0x248u;
    u32 r0_43 = ssys__ma__lyt__ArcResAccReader__destructor(r0_41, guest::cpu()->r[1]) - 0xa0u;
    destroy_ITalkRecept(r0_43);
    frame.release();
    return MenuBase__destructor(r0_43 - 0x28u, guest::cpu()->r[1]);
}

}  // namespace d_0031af8c
GUEST_EXPORT(0x0031af8c, d_0031af8c::BsMenuMyDesignSelect__destructor);

// f_0031b25c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a script word pointing at a constant nine-character word (arg 1).
namespace d_0031b25c {

inline constexpr u32 vtable_script__WordCPtrSv = 0x00908b9cu;
inline constexpr guest::Function<0x005fdf68, u32(u32, u32, u32)> script__WordCPtr__WordCPtr_005fdf68;

void script__WordCPtrSv__WordCPtrSv_0031b25c(gptr<script__WordCPtrSv> word_c_ptr_sv, u32 r1) {
    script__WordCPtr__WordCPtr_005fdf68(word_c_ptr_sv.addr(), r1, 9u);
    word_c_ptr_sv->vtable = vtable_script__WordCPtrSv;
    guest::cpu()->r[1] = vtable_script__WordCPtrSv;
}

}  // namespace d_0031b25c
GUEST_EXPORT_FRAMED(0x0031b25c, d_0031b25c::script__WordCPtrSv__WordCPtrSv_0031b25c, 0x4010);  // pushes {r4, lr} first, as the original

// f_0031b394: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The locale's multibyte maximum: its stored value for multibyte locales, else 1.
namespace d_0031b394 {

inline constexpr guest::Function<0x002f7a10, u32(u32)> char_table_location;

u32 locale_mb_cur_max(u32 r0) {
    u32 r0_1 = char_table_location(r0);
    u32 r0_2 = *gptr<u32>(r0_1);
    u32 r1_1 = *gptr<u8>(r0_2 + 0x101u);
    if (r1_1 == 1u) {
        u32 r0_3 = *gptr<u32>(r0_2 + 0x10bu);
        guest::cpu()->r[1] = r1_1;
        return r0_3;
    }
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_0031b394
GUEST_EXPORT_FRAMED(0x0031b395, d_0031b394::locale_mb_cur_max, 0x4010);  // pushes {r4, lr} first, as the original

// f_0031b3b2: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Remembers the current locale of the category (copying its name) and switches to the given one.
namespace d_0031b3b2 {

struct __attribute__((packed)) LocaleSaver {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(LocaleSaver, word_0, 0x0);
GUEST_OFFSET(LocaleSaver, word_4, 0x4);

inline constexpr guest::Function<0x002fa9d0, u32(u32)> string_length;
inline constexpr guest::Function<0x003075cc, u32(u32)> heap_allocate;
inline constexpr guest::Function<0x00307979, u32(u32, u32, u32, u32)> call_on_af75ec;
inline constexpr guest::Function<0x00307990, u32(u32, u32)> strcpy;

struct __attribute__((packed)) LocaleSaverLocaleSaverFrame {
    u32 word_0;
};
GUEST_OFFSET(LocaleSaverLocaleSaverFrame, word_0, 0x0);
GUEST_SIZE(LocaleSaverLocaleSaverFrame, 0x4);

u32 LocaleSaver__LocaleSaver(gptr<LocaleSaver> locale_saver, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<LocaleSaverLocaleSaverFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    locale_saver->word_0 = r2;
    u32 r0_1 = call_on_af75ec(r2, 0u, r2, r3);
    locale_saver->word_4 = r0_1;
    if (r0_1 != 0) {
        u32 length = string_length(r0_1);
        u32 block = heap_allocate(length + 1u);
        strcpy(block, locale_saver->word_4);
        locale_saver->word_4 = block;
    }
    call_on_af75ec(r2, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    return locale_saver.addr();
}

}  // namespace d_0031b3b2
GUEST_EXPORT_FRAMED(0x0031b3b3, d_0031b3b2::LocaleSaver__LocaleSaver, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0031b3ea: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Restores the remembered locale and frees its name.
namespace d_0031b3ea {

struct __attribute__((packed)) LocaleSaver {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(LocaleSaver, word_0, 0x0);
GUEST_OFFSET(LocaleSaver, word_4, 0x4);

inline constexpr guest::Function<0x002f88b8, u32(u32)> release_owned_object;
inline constexpr guest::Function<0x00307979, u32(u32, u32, u32, u32)> call_on_af75ec;

u32 LocaleSaver__destroy(gptr<LocaleSaver> locale_saver) {
    u32 r1_1 = locale_saver->word_4;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return locale_saver.addr();
    }
    call_on_af75ec(locale_saver->word_0, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    release_owned_object(locale_saver->word_4);
    return locale_saver.addr();
}

}  // namespace d_0031b3ea
GUEST_EXPORT_FRAMED(0x0031b3eb, d_0031b3ea::LocaleSaver__destroy, 0x4010);  // pushes {r4, lr} first, as the original

// f_0031b404: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the string (up to `size` bytes) through the locale's translation table when it has one; the length of the
// source.
namespace d_0031b404 {

inline constexpr guest::Function<0x002f91d4, u32(u32)> return_constant_0xaf74c8_;
inline constexpr guest::Function<0x002fa9d0, u32(u32, u32, u32, u32)> string_length;

struct __attribute__((packed)) TranslateStringFrame {
    u32 word_0;
};
GUEST_OFFSET(TranslateStringFrame, word_0, 0x0);
GUEST_SIZE(TranslateStringFrame, 0x4);

u32 translate_string(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<TranslateStringFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r5 = r0;
    u32 r4 = r2;
    u32 r6 = r1;
    u32 length = string_length(r1, r1, r2, r3);
    u32 r7 = length;
    u32 r0_2 = return_constant_0xaf74c8_(length);
    r1 = *gptr<u32>(r0_2);
    u32 r0_3 = *gptr<u32>(r1);
    if (r0_3 == 0) {
        goto L_31b43c;
    }
    r1 += r0_3;
    if (r4 != 0) {
        do {
            u32 r0_4 = *gptr<u8>(r6);
            r6 += 1u;
            if (r0_4 == 0) {
                *gptr<u8>(r5) = 0;
                break;
            }
            *gptr<u8>(r5) = *gptr<u8>(r1 + r0_4);
            r5 += 1u;
            r4 -= 1u;
            guest::preempt();
        } while (r4 != 0);
    }
    guest::cpu()->r[1] = r1;
    return r7;
L_31b43c:;
    if (r4 != 0) {
        u32 r0_5 = *gptr<u8>(r6);
        r6 += 1u;
        *gptr<u8>(r5) = u8(r0_5);
        r5 += 1u;
        if (r0_5 == 0) {
            guest::cpu()->r[1] = r1;
            return r7;
        }
        r4 -= 1u;
        guest::preempt();
        goto L_31b43c;
    }
    guest::cpu()->r[1] = r1;
    return r7;
}

}  // namespace d_0031b404
GUEST_EXPORT_FRAMED(0x0031b405, d_0031b404::translate_string, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0031b4c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a shared string of `length` characters copied from the source (the empty representation for 0).
namespace d_0031b4c4 {

struct __attribute__((packed)) Local_0031b4c4_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0031b4c4_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0031b4c4_ea_1, word_4, 0x4);

inline constexpr u32 shared_string_empty_rep_address = 0x00af7f30u;
inline constexpr guest::Function<0x00307569, u32(u32, u32, u32, u32)> debug_log;
inline constexpr guest::Function<0x0031c311, u32(u32, u32, u32, u32)> max_of_words;
inline constexpr guest::Function<0x0031c31d, u32(u32, u32, u32)> SharedString__create_rep;
inline constexpr guest::Function<0x0031c39d, u32(u32, u32, u32, u32)> copy_bytes_veneer;

struct __attribute__((packed)) SharedStringConstructFrame {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(SharedStringConstructFrame, word_0, 0x0);
GUEST_OFFSET(SharedStringConstructFrame, word_4, 0x4);
GUEST_SIZE(SharedStringConstructFrame, 0x8);

u32 SharedString__construct(u32 shared_string, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<SharedStringConstructFrame> frame;  // the original's stack frame
    u32 r0_2 = 0;
    gptr<Local_0031b4c4_ea_1> ea_1 = gptr<Local_0031b4c4_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r2;
    ea_1->word_4 = r3;
    u32 r4_1 = r2;
    u32 r1_1 = r3;
    u32 r0_1 = ~0xeu;
    if (r4_1 > r0_1) {
        frame->word_0 = r0_1;
        debug_log(8u, 0x31b51cu, 0x31b51cu, r4_1);
        r1_1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    if (r4_1 == 0) {
        r0_2 = shared_string_empty_rep_address;
    } else {
        frame->word_4 = 0x20;
        frame->word_0 = r4_1;
        u32 max = max_of_words(frame.at(4).addr(), frame.at(0).addr(), r2, r3);
        r0_2 = SharedString__create_rep(shared_string, *gptr<u32>(max), r4_1);
        r1_1 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
    }
    u32 r0_5 = r0_2 + 0xcu;
    *gptr<u32>(shared_string) = r0_5;
    if (r1 != 0) {
        copy_bytes_veneer(r0_5, r1, r4_1, r3);
        r1_1 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1_1;
    return shared_string;
}

}  // namespace d_0031b4c4
GUEST_EXPORT_FRAMED(0x0031b4c5, d_0031b4c4::SharedString__construct, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0031b578: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The shared empty word pair at 0x9825f8 (constructed once).
namespace d_0031b578 {

inline constexpr u32 empty_pair_head_address = 0x009825f4u;
inline constexpr u32 empty_pair_address = 0x009825f8u;
inline guest::global<u32, 0x009825f4> empty_pair_head;
inline guest::global<u32, 0x009825f8> empty_pair;
inline guest::global<u32, 0x009825fc> global_009825fc;
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32)> static_guard_acquire;
inline constexpr guest::Function<0x002fe7f0, u32(u32, u32)> do_nothing_002fe7f0;

u32 static_empty_pair(u32 r0_unused, u32 r1) {
    if ((*empty_pair_head & 1u) != 0u) {
        return empty_pair_address;
    }
    u32 first_time_2 = static_guard_acquire(empty_pair_head_address, r1);
    if (first_time_2 == 0) {
        return empty_pair_address;
    }
    *empty_pair = 0;
    *global_009825fc = 0;
    do_nothing_002fe7f0(empty_pair_address, 0x11c2a1u);
    return empty_pair_address;
}

}  // namespace d_0031b578
GUEST_EXPORT_FRAMED(0x0031b579, d_0031b578::static_empty_pair, 0x4010);  // pushes {r4, lr} first, as the original

// f_0031b5b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Assigns the locale: takes a reference to the other's implementation and drops this one's, destroying it when it was
// the last (count at +0x1c).
namespace d_0031b5b8 {

struct __attribute__((packed)) Locale {
    u32 locale_impl;
};
GUEST_OFFSET(Locale, locale_impl, 0x0);

struct __attribute__((packed)) LocaleAssignArg1 {
    u32 word_0;
};
GUEST_OFFSET(LocaleAssignArg1, word_0, 0x0);

struct __attribute__((packed)) Local_0031b5b8_r0_1 {
    u8 unknown_0[0x1c];  // (not used here)
    u32 word_1c;
};
GUEST_OFFSET(Local_0031b5b8_r0_1, word_1c, 0x1c);

struct __attribute__((packed)) Local_0031b5b8_r0_2 {
    u8 unknown_0[0x1c];  // (not used here)
    u32 word_1c;
};
GUEST_OFFSET(Local_0031b5b8_r0_2, word_1c, 0x1c);

inline constexpr guest::Function<0x002ffb64, u32(u32)> free_memory;
inline constexpr guest::Function<0x0031bea1, u32(u32, u32, u32, u32)> LocaleImpl__destroy;

u32 Locale__assign(gptr<Locale> locale, gptr<LocaleAssignArg1> arg1) {
    u32 r1_1 = locale->locale_impl;
    gptr<Local_0031b5b8_r0_1> r0_1 = gptr<Local_0031b5b8_r0_1>(arg1->word_0);
    if (r1_1 != r0_1.addr()) {
        r0_1->word_1c = r0_1->word_1c + 1u;
        gptr<Local_0031b5b8_r0_2> r0_2 = gptr<Local_0031b5b8_r0_2>(locale->locale_impl);
        u32 res_1 = r0_2->word_1c - 1u;
        r1_1 = res_1;
        r0_2->word_1c = r1_1;
        if (res_1 == 0) {
            u32 locale_impl = locale->locale_impl;
            if (locale_impl != 0) {
                LocaleImpl__destroy(locale_impl, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
                free_memory(locale_impl);
                r1_1 = guest::cpu()->r[1];
            }
        }
        locale->locale_impl = arg1->word_0;
    }
    guest::cpu()->r[1] = r1_1;
    return locale.addr();
}

}  // namespace d_0031b5b8
GUEST_EXPORT_FRAMED(0x0031b5b9, d_0031b5b8::Locale__assign, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0031b5ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The global locale at 0x981fbc, constructed once from the classic implementation (initialized first when needed).
namespace d_0031b5ec {

inline constexpr u32 locale_b_address = 0x00981fb8u;
inline constexpr u32 locale_address = 0x00981fbcu;
inline constexpr u32 locale_c_address = 0x00981fc0u;
inline constexpr u32 global_locale_address = 0x00981fc8u;
inline guest::global<u32, 0x00981fb8> locale_b;
inline guest::global<u32, 0x00981fc0> locale_c;
inline guest::global<u32, 0x00981fc8> global_locale;
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> static_guard_acquire;
inline constexpr guest::Function<0x002fe7f0, u32(u32)> do_nothing_002fe7f0;
inline constexpr guest::Function<0x0031b7b1, u32(u32, u32)> Locale__Locale;
inline constexpr guest::Function<0x0031bebd, u32(u32, u32, u32, u32)> Locale__classic;

u32 Locale__global(u32 r0_unused, u32 r1, u32 r2) {
    u32 r0_1 = *global_locale;
    if (r0_1 == 0) {
        Locale__classic(r0_1, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
    }
    if ((*locale_b & 1u) != 0u) {
        return locale_address;
    }
    u32 first_time_2 = static_guard_acquire(locale_b_address, r1, r2, guest::cpu()->r[3]);
    if (first_time_2 == 0) {
        return locale_address;
    }
    Locale__Locale(locale_address, *locale_c);
    do_nothing_002fe7f0(locale_address);
    return locale_address;
}

}  // namespace d_0031b5ec
GUEST_EXPORT_FRAMED(0x0031b5ed, d_0031b5ec::Locale__global, 0x4010);  // pushes {r4, lr} first, as the original

// f_0031b766: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resizes the word vector to `count` words: copies the kept ones into a new buffer and fills the rest with the value.
namespace d_0031b766 {

struct __attribute__((packed)) WordVector {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(WordVector, word_4, 0x4);

struct __attribute__((packed)) Local_0031b766_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0031b766_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0031b766_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0031b766_ea_1, word_8, 0x8);

inline constexpr guest::Function<0x002f88b8, u32(u32, u32, u32, u32)> release_owned_object;
inline constexpr guest::Function<0x003075cc, u32(u32, u32, u32, u32)> heap_allocate;

struct __attribute__((packed)) WordVectorResizeFrame {
    u8 unknown_0[0x8];  // (not read or written by name)
    u32 word_8;
};
GUEST_OFFSET(WordVectorResizeFrame, word_8, 0x8);
GUEST_SIZE(WordVectorResizeFrame, 0xc);

void WordVector__resize(gptr<WordVector> word_vector, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<WordVectorResizeFrame> frame;  // the original's stack frame
    u32 r0 = word_vector.addr();
    gptr<Local_0031b766_ea_1> ea_1 = gptr<Local_0031b766_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    u32 r4 = r0;
    u32 r5 = r1;
    u32 block = heap_allocate(r1 << 2, r1, r2, r3);
    r2 = word_vector->word_4;
    u32 r6 = block;
    if (r2 >= r5) {
        r2 = r5;
    }
    r1 = r6;
    r0 = *gptr<u32>(r4);
    r3 = r2 << 2;
    for (;;) {
        if ((*gptr<u32>(r4) + r3) == r0) {
            break;
        }
        u32 r7_1 = *gptr<u32>(r0);
        r0 += 4;
        *gptr<u32>(r1) = r7_1;
        r1 += 4;
        guest::preempt();
    }
    for (;;) {
        if (r2 >= r5) {
            break;
        }
        r1 = r2 << 2;
        r2 += 1u;
        *gptr<u32>(r6 + r1) = *gptr<u32>(frame->word_8);
        guest::preempt();
    }
    release_owned_object(*gptr<u32>(r4), r1, r2, r3);
    *gptr<u32>(r4) = r6;
    *gptr<u32>(r4 + 4u) = r5;
}

}  // namespace d_0031b766
GUEST_EXPORT_FRAMED(0x0031b767, d_0031b766::WordVector__resize, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0031b7b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs the locale on the implementation, taking a reference (initializing the classic one first when needed).
namespace d_0031b7b0 {

struct __attribute__((packed)) Locale {
    u32 word_0;
};
GUEST_OFFSET(Locale, word_0, 0x0);

struct __attribute__((packed)) Local_0031b7b0_r1_1 {
    u8 unknown_0[0x1c];  // (not used here)
    u32 word_1c;
};
GUEST_OFFSET(Local_0031b7b0_r1_1, word_1c, 0x1c);

inline constexpr u32 global_locale_address = 0x00981fc8u;
inline guest::global<u32, 0x00981fc8> global_locale;
inline constexpr guest::Function<0x0031bebd, u32(u32, u32, u32, u32)> Locale__classic;

void Locale__Locale(gptr<Locale> locale, u32 r1) {
    locale->word_0 = r1;
    u32 r0_1 = *global_locale;
    if (r0_1 == 0) {
        Locale__classic(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    gptr<Local_0031b7b0_r1_1> r1_1 = gptr<Local_0031b7b0_r1_1>(locale->word_0);
    r1_1->word_1c = r1_1->word_1c + 1u;
}

}  // namespace d_0031b7b0
GUEST_EXPORT_FRAMED(0x0031b7b1, d_0031b7b0::Locale__Locale, 0x4010);  // pushes {r4, lr} first, as the original

// f_0031b854: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Drops the locale's reference, destroying the implementation when it was the last.
namespace d_0031b854 {

struct __attribute__((packed)) Locale {
    u32 locale_impl;
};
GUEST_OFFSET(Locale, locale_impl, 0x0);

struct __attribute__((packed)) Local_0031b854_r0_1 {
    u8 unknown_0[0x1c];  // (not used here)
    u32 res;
};
GUEST_OFFSET(Local_0031b854_r0_1, res, 0x1c);

inline constexpr guest::Function<0x002ffb64, u32(u32)> free_memory;
inline constexpr guest::Function<0x0031bea1, u32(u32, u32, u32, u32)> LocaleImpl__destroy;

u32 Locale__destroy(gptr<Locale> locale, u32 r1) {
    gptr<Local_0031b854_r0_1> r0_1 = gptr<Local_0031b854_r0_1>(locale->locale_impl);
    if (r0_1.addr() == 0) {
        return locale.addr();
    }
    u32 res_1 = r0_1->res - 1u;
    r0_1->res = res_1;
    if (res_1 != 0) {
        guest::cpu()->r[1] = res_1;
        return locale.addr();
    }
    u32 locale_impl = locale->locale_impl;
    if (locale_impl == 0) {
        guest::cpu()->r[1] = res_1;
        return locale.addr();
    }
    LocaleImpl__destroy(locale_impl, res_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    free_memory(locale_impl);
    return locale.addr();
}

}  // namespace d_0031b854
GUEST_EXPORT_FRAMED(0x0031b855, d_0031b854::Locale__destroy, 0x4010);  // pushes {r4, lr} first, as the original

// f_0031b8f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Address of word `index` of the vector.
namespace d_0031b8f0 {

struct __attribute__((packed)) WordVector {
    u32 word_0;
};
GUEST_OFFSET(WordVector, word_0, 0x0);


u32 WordVector__at(gptr<WordVector> word_vector, u32 r1) {
    u32 r1_1 = r1 << 2;
    u32 r0_1 = word_vector->word_0 + r1_1;
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0031b8f0
GUEST_EXPORT(0x0031b8f1, d_0031b8f0::WordVector__at);

// f_0031ba1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds the character class table from the class bits.
namespace d_0031ba1c {

struct __attribute__((packed)) Locale {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0x4];  // (not used here)
    u32 word_14;
    u8 byte_18;
};
GUEST_OFFSET(Locale, word_0, 0x0);
GUEST_OFFSET(Locale, word_4, 0x4);
GUEST_OFFSET(Locale, word_8, 0x8);
GUEST_OFFSET(Locale, word_c, 0xc);
GUEST_OFFSET(Locale, word_14, 0x14);
GUEST_OFFSET(Locale, byte_18, 0x18);

inline constexpr guest::Function<0x003075cc, u32(u32, u32, u32, u32)> heap_allocate;
inline constexpr guest::Function<0x0031b759, u32(u32, u32, u32, u32)> halfword_has_bits;

struct __attribute__((packed)) BuildCharClassTableFrame {
    u32 word_0;
};
GUEST_OFFSET(BuildCharClassTableFrame, word_0, 0x0);
GUEST_SIZE(BuildCharClassTableFrame, 0x4);

u32 build_char_class_table(gptr<Locale> locale, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<BuildCharClassTableFrame> frame;  // the original's stack frame
    u32 r0 = locale.addr();
    u32 r0_8 = 0;
    u32 r0_16 = 0;
    frame->word_0 = r3;
    u32 r4 = r0;
    locale->word_4 = 0x20;
    locale->word_c = r3;
    r3 = 0x90b608u;
    locale->word_8 = 0;
    locale->word_0 = r3;
    locale->word_14 = r1;
    locale->byte_18 = u8(r2);
    if (r1 == 0) {
        locale->word_14 = 0x8c8680;
        locale->byte_18 = 0;
    }
    u32 i = 0u;
    u32 r6 = 0xffu;
    do {
        u32 r0_1 = halfword_has_bits(r4, 0x10u, i & 0xffu, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_1 != 0) {
            do {
                if (r6 <= i) {
                    goto L_31ba70;
                }
                u32 r0_2 = halfword_has_bits(r4, 0x10u, r6 & 0xffu, r3);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_2 != 0) {
                    goto L_31ba70;
                }
                r6 -= 1u;
                guest::preempt();
            } while (1);
        }
        i += 1u;
        guest::preempt();
    } while (i < r6);
L_31ba70:;
    *gptr<u32>(r4 + 0x20u) = r6;
    *gptr<u32>(r4 + 0x1cu) = i;
    u32 block = heap_allocate(r6 - i + 1u, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    u32 r7 = block;
    *gptr<u32>(r4 + 0x2cu) = block;
    for (;;) {
        if (i > r6) {
            break;
        }
        if (i - 0x61u <= 0x19u) {
            u32 r0_5 = halfword_has_bits(r4, 0x10u, i & 0xffu, r3);
            r3 = guest::cpu()->r[3];
            if (r0_5 != 0) {
                u32 r0_6 = i - 0x20u;
                frame->word_0 = r0_6;
                u32 r0_7 = halfword_has_bits(r4, 8u, r0_6 & 0xffu, r3);
                r3 = guest::cpu()->r[3];
                if (r0_7 != 0) {
                    r0_8 = frame->word_0;
                    goto L_31bab6;
                }
            }
        }
        r0_8 = i;
L_31bab6:;
        *gptr<u8>(r7) = u8(r0_8);
        r7 += 1u;
        i += 1u;
        guest::preempt();
    }
    i = 0u;
    r6 = 0xffu;
    do {
        u32 r0_9 = halfword_has_bits(r4, 8u, i & 0xffu, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_9 != 0) {
            do {
                if (r6 <= i) {
                    goto L_31baf4;
                }
                u32 r0_10 = halfword_has_bits(r4, 8u, r6 & 0xffu, r3);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_10 != 0) {
                    goto L_31baf4;
                }
                r6 -= 1u;
                guest::preempt();
            } while (1);
        }
        i += 1u;
        guest::preempt();
    } while (i < r6);
L_31baf4:;
    *gptr<u32>(r4 + 0x28u) = r6;
    *gptr<u32>(r4 + 0x24u) = i;
    u32 block_2 = heap_allocate(r6 - i + 1u, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    r7 = block_2;
    *gptr<u32>(r4 + 0x30u) = block_2;
    for (;;) {
        if (i > r6) {
            break;
        }
        if (i - 0x41u <= 0x19u) {
            u32 r0_13 = halfword_has_bits(r4, 8u, i & 0xffu, r3);
            r1 = guest::cpu()->r[1];
            r3 = guest::cpu()->r[3];
            if (r0_13 != 0) {
                u32 r0_14 = i + 0x20u;
                frame->word_0 = r0_14;
                u32 r0_15 = halfword_has_bits(r4, 0x10u, r0_14 & 0xffu, r3);
                r1 = guest::cpu()->r[1];
                r3 = guest::cpu()->r[3];
                if (r0_15 != 0) {
                    r0_16 = frame->word_0;
                    goto L_31bb3a;
                }
            }
        }
        r0_16 = i;
L_31bb3a:;
        *gptr<u8>(r7) = u8(r0_16);
        r7 += 1u;
        i += 1u;
        guest::preempt();
    }
    guest::cpu()->r[1] = r1;
    return r4;
}

}  // namespace d_0031ba1c
GUEST_EXPORT_FRAMED(0x0031ba1d, d_0031ba1c::build_char_class_table, 0x40f0);  // pushes {r4, i, r6, r7, lr} first, as the original

// f_0031bdb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a locale implementation: its name, facet vector and tables.
namespace d_0031bdb8 {

struct __attribute__((packed)) LocaleImpl {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(LocaleImpl, word_0, 0x0);
GUEST_OFFSET(LocaleImpl, word_4, 0x4);

struct __attribute__((packed)) Local_0031bdb8_ea_1 {
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
GUEST_OFFSET(Local_0031bdb8_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0031bdb8_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0031bdb8_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_0031bdb8_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_0031bdb8_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_0031bdb8_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_0031bdb8_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_0031bdb8_ea_1, word_1c, 0x1c);
GUEST_OFFSET(Local_0031bdb8_ea_1, word_20, 0x20);

inline constexpr guest::Function<0x002f8720, u32(u32, u32, u32)> memcpy;
inline constexpr guest::Function<0x002fa9d0, u32(u32, u32, u32, u32)> string_length;
inline constexpr guest::Function<0x002fae75, u32(u32, u32, u32, u32)> set_shared_string_pointer;
inline constexpr guest::Function<0x003075cc, u32(u32, u32, u32, u32)> heap_allocate;
inline constexpr guest::Function<0x003076c9, u32(u32)> call_0031c3a8_return_self;
inline constexpr guest::Function<0x00307839, u32(u32, u32, u32, u32)> construct_array_veneer;
inline constexpr guest::Function<0x0030784d, u32(u32, u32, u32, u32)> SharedString__assign_2;
inline constexpr guest::Function<0x00307889, u32(u32, u32, u32, u32)> release_shared_string;

u32 LocaleImpl__construct(gptr<LocaleImpl> locale_impl, u32 r1, u32 r2, u32 r3) {
    u32 r0 = locale_impl.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 r0_2 = 0;
    gptr<Local_0031bdb8_ea_1> ea_1 = gptr<Local_0031bdb8_ea_1>(r13 - 0x24);
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r3;
    ea_1->word_10 = r4;
    ea_1->word_14 = r5;
    ea_1->word_18 = r6;
    ea_1->word_1c = r7;
    ea_1->word_20 = r14;
    r13 = ea_1.addr() - 0x1cu;
    r4 = r2;
    r5 = r0 + 8u;
    r6 = 0u;
    locale_impl->word_0 = 0;
    locale_impl->word_4 = 0;
    if (r2 != 0) {
        guest::cpu()->r[13] = r13;
        r0_2 = heap_allocate(r4 << 2, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    } else {
        r0_2 = 0u;
    }
    *gptr<u32>(r5 + 4u) = r4;
    *gptr<u32>(r5) = r0_2;
    for (;;) {
        if (r4 == 0) {
            break;
        }
        u32 r0_3 = r4;
        r1 = *gptr<u32>(r5);
        r4 -= 1u;
        *gptr<u32>(r1 + ((r0_3 << 2) - 4u)) = r6;
        guest::preempt();
    }
    *gptr<u32>(r5 + 8u) = 0;
    *gptr<u32>(r5 + 0xcu) = 0;
    *gptr<u32>(r5 + 0x10u) = 0;
    *gptr<u32>(r5 + 0x14u) = *gptr<u32>(r13 + 0x28u);
    u32 r0_4 = *gptr<u32>(r13 + 0x20u);
    r4 = r5 - 8u;
    if (r0_4 != 0) {
        guest::cpu()->r[13] = r13;
        u32 length = string_length(r0_4, r1, r2, r3);
        u32 r5_1 = length + 1u;
        guest::cpu()->r[13] = r13;
        u32 block = heap_allocate(r5_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r1_2 = *gptr<u32>(r13 + 0x20u);
        guest::cpu()->r[13] = r13;
        u32 r0_7 = memcpy(block, r1_2, r5_1);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        *gptr<u32>(r4 + 0x18u) = r0_7;
    }
    *gptr<u32>(r13) = 6;
    u32 r0_8 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    set_shared_string_pointer(r0_8, r13 + 0x14u, r2, r3);
    *gptr<u32>(r13 + 0xcu) = r0_8;
    u32 r1_4 = *gptr<u32>(r13);
    guest::cpu()->r[13] = r13;
    u32 r0_9 = construct_array_veneer(4u, r1_4, 0x103a07u, 0x3076c9u);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = *gptr<u32>(r4 + 4u);
    r7 = r0_9;
    if (r5 >= 6u) {
        r5 = *gptr<u32>(r13);
    }
    r6 = *gptr<u32>(r4);
    *gptr<u32>(r13 + 4u) = r7;
    *gptr<u32>(r13 + 0x10u) = r5 << 2;
    for (;;) {
        if (*gptr<u32>(r4) + *gptr<u32>(r13 + 0x10u) == r6) {
            break;
        }
        u32 shared_string = *gptr<u32>(r13 + 4u);
        guest::cpu()->r[13] = r13;
        SharedString__assign_2(shared_string, r6, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r6 += 4u;
        *gptr<u32>(r13 + 4u) = *gptr<u32>(r13 + 4u) + 4u;
        guest::preempt();
    }
    for (;;) {
        if (r5 >= *gptr<u32>(r13)) {
            break;
        }
        u32 r1_5 = *gptr<u32>(r13 + 0xcu);
        u32 r0_11 = (r5 << 2) + r7;
        r5 += 1u;
        guest::cpu()->r[13] = r13;
        SharedString__assign_2(r0_11, r1_5, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        guest::preempt();
    }
    u32 r0_12 = *gptr<u32>(r4);
    guest::cpu()->r[13] = r13;
    release_shared_string(r0_12, 0x3076c9u, r2, r3);
    u32 r0_13 = *gptr<u32>(r13);
    *gptr<u32>(r4) = r7;
    *gptr<u32>(r4 + 4u) = r0_13;
    guest::cpu()->r[13] = r13;
    call_0031c3a8_return_self(r13 + 8u);
    r13 += 0x2cu;
    u32 r4_1 = *gptr<u32>(r13);
    u32 r5_2 = *gptr<u32>(r13 + 4);
    u32 r6_1 = *gptr<u32>(r13 + 8);
    u32 r7_1 = *gptr<u32>(r13 + 0xc);
    u32 tpc_1 = *gptr<u32>(r13 + 0x10);
    r13 += 0x14;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[13] = r13;
    return r4;
}

}  // namespace d_0031bdb8
GUEST_EXPORT(0x0031bdb9, d_0031bdb8::LocaleImpl__construct);

// f_0031bea0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys a locale implementation: its facets (+0x18), holder (+8) and name.
namespace d_0031bea0 {

struct __attribute__((packed)) LocaleImpl {
    u8 unknown_0[0x18];  // (not used here)
    u32 word_18;
};
GUEST_OFFSET(LocaleImpl, word_18, 0x18);

inline constexpr guest::Function<0x0011c1fd, u32(u32)> release_pointer_holder;
inline constexpr guest::Function<0x002f88b8, u32(u32, u32, u32, u32)> release_owned_object;
inline constexpr guest::Function<0x0030774d, u32(u32)> release_shared_string_at_0;

u32 LocaleImpl__destroy(gptr<LocaleImpl> locale_impl) {
    release_owned_object(locale_impl->word_18, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    release_pointer_holder(locale_impl.addr() + 8u);
    release_shared_string_at_0(locale_impl.addr());
    return locale_impl.addr();
}

}  // namespace d_0031bea0
GUEST_EXPORT_FRAMED(0x0031bea1, d_0031bea0::LocaleImpl__destroy, 0x4010);  // pushes {r4, lr} first, as the original

// f_0031c020: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys the gift bag select menu: its windows, buttons, renderers, layouts and menu base.
namespace d_0031c020 {

inline constexpr u32 vtable_ComButton2Lyt = 0x008ee228u;
inline constexpr u32 vtable_Control2Button = 0x008ef284u;
inline constexpr u32 vtable_Control2Button_at_e4 = 0x008ef2c8u;
inline constexpr u32 vtable_SantaBagWindow = 0x008ef6f4u;
inline constexpr u32 vtable_ComButtonLytBase = 0x008f18f4u;
inline constexpr u32 vtable_BsMenuSantaBagSelect = 0x008f45d0u;
inline constexpr u32 vtable_BsMenuSantaBagSelect_at_28 = 0x008f463cu;
inline constexpr u32 vtable_ItemSelectNameWindow = 0x008f47a0u;
inline constexpr u32 vtable_ComTitle = 0x008f8b4cu;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;
inline constexpr guest::Function<0x002f770c, u32(u32)> ControlButtonBase__destructor;
inline constexpr guest::Function<0x00567ef0, u32(u32, u32)> ssys__ma__lyt__ArcResAccReader__destructor;
inline constexpr guest::Function<0x0056988c, u32(u32, u32)> destroy_animation;
inline constexpr guest::Function<0x005bf744, u32(u32)> Layout__destructor;
inline constexpr guest::Function<0x005d703c, u32(u32)> script__MsgEngine__destructor;
inline constexpr guest::Function<0x005e3194, u32(u32, u32)> script__RenderTrace__destructor_b;
inline constexpr guest::Function<0x006aaa30, u32(u32, u32)> MenuBase__destructor;

u32 BsMenuSantaBagSelect__destructor(gptr<BsMenuSantaBagSelect> bs_menu_santa_bag_select) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    bs_menu_santa_bag_select->bs_menu_santa_bag_select_vtable = vtable_BsMenuSantaBagSelect_at_28;
    bs_menu_santa_bag_select->vtable = vtable_BsMenuSantaBagSelect;
    u32 r4_1 = bs_menu_santa_bag_select.addr() + 0x39e0u;
    bs_menu_santa_bag_select->vtable_3648 = vtable_ComButton2Lyt;
    bs_menu_santa_bag_select->control2_button_vtable = vtable_Control2Button;
    bs_menu_santa_bag_select->control2_button_vtable_3ac4 = vtable_Control2Button_at_e4;
    destroy_array_elements(bs_menu_santa_bag_select.addr() + 0x3af8u, 0x2e0b3cu, 0x518u, 2u);
    ControlButtonBase__destructor(r4_1);
    bs_menu_santa_bag_select->vtable_3648 = vtable_ComButtonLytBase;
    u32 r0_6 = Layout__destructor(ssys__ma__lyt__ArcResAccReader__destructor(r4_1 - 0x248u, vtable_ComButtonLytBase) - 0x14cu) - 0x2cacu;
    *gptr<u32>(r0_6) = vtable_SantaBagWindow;
    u32 r0_7 = r0_6 + 0x2788u;
    *gptr<u32>(r0_7) = vtable_ItemSelectNameWindow;
    u32 r0_8 = r0_7 + 0x41cu;
    script__RenderTrace__destructor_b(r0_8, vtable_ItemSelectNameWindow);
    u32 r0_9 = r0_8 - 0x28u;
    destroy_animation(r0_9, guest::cpu()->r[1]);
    u32 r0_10 = r0_9 - 0x28u;
    destroy_animation(r0_10, guest::cpu()->r[1]);
    u32 r0_13 = Layout__destructor(r0_10 - 0x15cu) - 0x24cu;
    u32 r0_14 = ssys__ma__lyt__ArcResAccReader__destructor(r0_13, guest::cpu()->r[1]);
    destroy_array_elements(r0_14 - 0x212cu, 0x20710cu, 0x348u, 0xau);
    u32 r0_16 = r0_14 - 0x2154u;
    destroy_animation(r0_16, guest::cpu()->r[1]);
    u32 r0_19 = ssys__ma__lyt__ArcResAccReader__destructor(r0_16 - 0x24cu, guest::cpu()->r[1]) - 0x2cu;
    destroy_animation(r0_19, guest::cpu()->r[1]);
    u32 r0_20 = r0_19 - 0x28u;
    destroy_animation(r0_20, guest::cpu()->r[1]);
    u32 r0_24 = Layout__destructor(ssys__ma__lyt__ArcResAccReader__destructor(r0_20 - 0x248u, guest::cpu()->r[1]) - 0x14cu);
    *gptr<u32>(r0_24 - 0x974u) = vtable_ComTitle;
    u32 r0_25 = r0_24 - 0x64u;
    destroy_animation(r0_25, vtable_ComTitle);
    u32 r0_26 = r0_25 - 0x28u;
    destroy_animation(r0_26, guest::cpu()->r[1]);
    u32 r0_27 = r0_26 - 0x28u;
    destroy_animation(r0_27, guest::cpu()->r[1]);
    u32 r0_28 = r0_27 - 0x28u;
    destroy_animation(r0_28, guest::cpu()->r[1]);
    u32 r0_33 = Layout__destructor(ssys__ma__lyt__ArcResAccReader__destructor(r0_28 - 0x248u, guest::cpu()->r[1]) - 0x14cu) - 0xd0u;
    script__RenderTrace__destructor_b(r0_33, guest::cpu()->r[1]);
    u32 r0_34 = r0_33 - 0xc4u;
    script__RenderTrace__destructor_b(r0_34, guest::cpu()->r[1]);
    u32 r0_35 = r0_34 - 0xc4u;
    script__RenderTrace__destructor_b(r0_35, guest::cpu()->r[1]);
    u32 r0_36 = r0_35 - 0xc4u;
    script__RenderTrace__destructor_b(r0_36, guest::cpu()->r[1]);
    u32 r0_37 = r0_36 - 0xc4u;
    script__RenderTrace__destructor_b(r0_37, guest::cpu()->r[1]);
    u32 r0_38 = r0_37 - 0x100u;
    script__MsgEngine__destructor(r0_38);
    frame.release();
    return MenuBase__destructor(r0_38 - 0x74u, guest::cpu()->r[1]);
}

}  // namespace d_0031c020
GUEST_EXPORT(0x0031c020, d_0031c020::BsMenuSantaBagSelect__destructor);

// f_0031c1c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the holder's word and locale.
namespace d_0031c1c8 {

struct __attribute__((packed)) LocaleHolder {
    u32 word_0;
};
GUEST_OFFSET(LocaleHolder, word_0, 0x0);

struct __attribute__((packed)) LocaleHolderCopyArg1 {
    u32 word_0;
};
GUEST_OFFSET(LocaleHolderCopyArg1, word_0, 0x0);

inline constexpr guest::Function<0x0031b5b9, u32(u32, u32, u32, u32)> Locale__assign;

void LocaleHolder__copy(gptr<LocaleHolder> locale_holder, gptr<LocaleHolderCopyArg1> arg1) {
    locale_holder->word_0 = arg1->word_0;
    Locale__assign(locale_holder.addr() + 4u, arg1.addr() + 4, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0031c1c8
GUEST_EXPORT_FRAMED(0x0031c1c9, d_0031c1c8::LocaleHolder__copy, 0x4010);  // pushes {r4, lr} first, as the original

// f_0031c1da: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Maps the character through the tree of ranges (low +0xc, high +0xd): by its table, or by adding the range's offset
// (+0xe); unchanged when no range has it.
namespace d_0031c1da {

struct __attribute__((packed)) CharRangeMap {
    u32 word_0;
};
GUEST_OFFSET(CharRangeMap, word_0, 0x0);


u32 CharRangeMap__map(gptr<CharRangeMap> char_range_map, u32 r1) {
    u32 r0 = char_range_map.addr();
    r0 = r1;
    u32 r2 = char_range_map->word_0 + 4u;
    for (;;) {
        if (r2 == 0) {
            break;
        }
        r1 = *gptr<u8>(r2 + 0xcu);
        if (r1 > r0) {
            r2 = *gptr<u32>(r2);
        } else {
            r1 = *gptr<u8>(r2 + 0xdu);
            if (r1 >= r0) {
                u32 r1_1 = *gptr<u32>(r2 + 8u);
                if (r1_1 == 0) {
                    u32 r1_2 = *gptr<u8>(r2 + 0xeu);
                    guest::cpu()->r[1] = r1_2;
                    return r1_2 + r0 & 0xffu;
                }
                u32 r0_2 = *gptr<u8>(r1_1 + (r0 - u32(*gptr<u8>(r2 + 0xcu))));
                guest::cpu()->r[1] = r1_1;
                return r0_2;
            }
            r2 = *gptr<u32>(r2 + 4u);
        }
        guest::preempt();
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0031c1da
GUEST_EXPORT(0x0031c1db, d_0031c1da::CharRangeMap__map);

// f_0031c310: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The address of the larger of the two words.
namespace d_0031c310 {

struct __attribute__((packed)) MaxOfWordsArg0 {
    u32 word_0;
};
GUEST_OFFSET(MaxOfWordsArg0, word_0, 0x0);

struct __attribute__((packed)) MaxOfWordsArg1 {
    u32 word_0;
};
GUEST_OFFSET(MaxOfWordsArg1, word_0, 0x0);


u32 max_of_words(gptr<MaxOfWordsArg0> arg0, gptr<MaxOfWordsArg1> arg1) {
    return arg0->word_0 >= arg1->word_0 ? arg0.addr() : arg1.addr();
}

}  // namespace d_0031c310
GUEST_EXPORT(0x0031c311, d_0031c310::max_of_words);

// f_0031c31c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Allocates a shared string representation of `capacity` with `length` (the empty one for 0); too large sizes raise
// the length error.
namespace d_0031c31c {

struct __attribute__((packed)) Local_0031c31c_r0_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0031c31c_r0_3, word_0, 0x0);
GUEST_OFFSET(Local_0031c31c_r0_3, word_4, 0x4);
GUEST_OFFSET(Local_0031c31c_r0_3, word_8, 0x8);

inline constexpr u32 shared_string_empty_rep_address = 0x00af7f30u;
inline constexpr guest::Function<0x0010bf99, u32(u32, u32, u32, u32)> allocate_or_fail;
inline constexpr guest::Function<0x00307569, u32(u32, u32, u32, u32)> debug_log;

u32 SharedString__create_rep(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r4_1 = r1;
    u32 r7_1 = r2;
    u32 r0_1 = ~0xeu;
    if (r1 > r0_1) {
        *frame.at<u32>(0) = r0_1;
        debug_log(8u, 0x31c394u, 0x31c394u, r1);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    if (r7_1 > r4_1) {
        *frame.at<u32>(0) = r4_1;
        debug_log(8u, 0x31c394u, 0x31c394u, r7_1);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    if (r4_1 != 0) {
        gptr<Local_0031c31c_r0_3> r0_3 = gptr<Local_0031c31c_r0_3>(allocate_or_fail(r4_1 + 0xeu, 0u, r2, r3));
        if (r0_3.addr() != 0) {
            r0_3->word_0 = 0;
            r0_3->word_4 = 0;
            r0_3->word_8 = 0;
        }
        r0_3->word_8 = r7_1;
        u32 r1_1 = r0_3.addr() + 0xcu + r7_1;
        r0_3->word_0 = 0;
        r0_3->word_4 = r4_1;
        *frame.at<u8>(0) = 0;
        if (r1_1 != 0) {
            *gptr<u8>(r1_1) = 0;
        }
        guest::cpu()->r[1] = r1_1;
        return r0_3.addr();
    }
    guest::cpu()->r[1] = r1;
    return shared_string_empty_rep_address;
}

}  // namespace d_0031c31c
GUEST_EXPORT_FRAMED(0x0031c31d, d_0031c31c::SharedString__create_rep, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0031c39c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Forwards to copy_bytes_at_any_alignment.
namespace d_0031c39c {

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32)> copy_bytes_at_any_alignment;

void copy_bytes_veneer(u32 r0) {
    copy_bytes_at_any_alignment(r0, guest::cpu()->r[1], guest::cpu()->r[2]);
}

}  // namespace d_0031c39c
GUEST_EXPORT_FRAMED(0x0031c39d, d_0031c39c::copy_bytes_veneer, 0x4010);  // pushes {r4, lr} first, as the original

// f_0031c3a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Drops the string's reference to its representation, freeing it when it was the last (the empty ones are never
// freed).
namespace d_0031c3a8 {

struct __attribute__((packed)) SharedString {
    u32 word_0;
};
GUEST_OFFSET(SharedString, word_0, 0x0);

struct __attribute__((packed)) Local_0031c3a8_r2_2 {
    u32 word_0;
};
GUEST_OFFSET(Local_0031c3a8_r2_2, word_0, 0x0);

inline constexpr u32 shared_string_empty_rep_address = 0x00af7f30u;
inline constexpr u32 shared_string_pointer_address = 0x00af7f3cu;
inline constexpr guest::Function<0x0010c12d, u32(u32, u32, u32, u32)> free_memory_veneer_30;

struct __attribute__((packed)) SharedStringReleaseFrame {
    u32 word_0;
};
GUEST_OFFSET(SharedStringReleaseFrame, word_0, 0x0);
GUEST_SIZE(SharedStringReleaseFrame, 0x4);

void SharedString__release(gptr<SharedString> shared_string, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<SharedStringReleaseFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r2_1 = shared_string->word_0;
    if (r2_1 == shared_string_pointer_address) {
        return;
    }
    gptr<Local_0031c3a8_r2_2> r2_2 = gptr<Local_0031c3a8_r2_2>(r2_1 - 0xcu);
    u32 r0_1 = r2_2->word_0;
    if (r0_1 + 1u != 0) {
        if (r2_2.addr() == shared_string_empty_rep_address) {
            guest::cpu()->r[1] = shared_string_empty_rep_address;
            return;
        }
        r2_2->word_0 = r0_1 - 1u;
        if (r0_1 != 0) {
            guest::cpu()->r[1] = shared_string_empty_rep_address;
            return;
        }
    }
    free_memory_veneer_30(shared_string->word_0 - 0xcu, *gptr<u32>(shared_string->word_0 - 8u) + 0xeu, 0u, r3);
}

}  // namespace d_0031c3a8
GUEST_EXPORT_FRAMED(0x0031c3a9, d_0031c3a8::SharedString__release, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0031c75c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Adds a reference to the representation (not to the empty one).
namespace d_0031c75c {

struct __attribute__((packed)) SharedStringRep {
    u32 word_0;
};
GUEST_OFFSET(SharedStringRep, word_0, 0x0);

inline constexpr u32 shared_string_empty_rep_address = 0x00af7f30u;

void SharedStringRep__add_ref(gptr<SharedStringRep> shared_string_rep) {
    if (shared_string_rep.addr() == shared_string_empty_rep_address) {
        guest::cpu()->r[1] = shared_string_empty_rep_address;
        return;
    }
    u32 r1_1 = shared_string_rep->word_0 + 1u;
    shared_string_rep->word_0 = r1_1;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_0031c75c
GUEST_EXPORT(0x0031c75d, d_0031c75c::SharedStringRep__add_ref);

// f_0031c770: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Replaces a part of the string (position, length) with the given characters, making the representation its own.
namespace d_0031c770 {

struct __attribute__((packed)) Local_0031c770_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0031c770_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0031c770_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0031c770_ea_1, word_8, 0x8);

inline constexpr guest::Function<0x0011c499, u32(u32, u32, u32, u32)> SharedString__replace;

struct __attribute__((packed)) SharedStringMutateFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(SharedStringMutateFrame, word_0, 0x0);
GUEST_OFFSET(SharedStringMutateFrame, word_4, 0x4);
GUEST_OFFSET(SharedStringMutateFrame, word_8, 0x8);
GUEST_SIZE(SharedStringMutateFrame, 0xc);

void SharedString__mutate(u32 shared_string, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<SharedStringMutateFrame> frame;  // the original's stack frame
    gptr<Local_0031c770_ea_1> ea_1 = gptr<Local_0031c770_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r1;
    ea_1->word_4 = r2;
    ea_1->word_8 = r3;
    u32 r4_1 = *frame.at<u32>(0x18);
    frame->word_4 = 0;
    frame->word_0 = r4_1;
    frame->word_8 = r4_1;
    SharedString__replace(shared_string, r1, r2, r3);
    guest::cpu()->r[1] = frame->word_0;
}

}  // namespace d_0031c770
GUEST_EXPORT_FRAMED(0x0031c771, d_0031c770::SharedString__mutate, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0031c7dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets up the window's parts with dummy layouts.
namespace d_0031c7dc {

struct __attribute__((packed)) SetupDummyLayoutPartsArg0 {
    u8 unknown_0[0xc];  // (not used here)
    float float_c;
    float float_10;
    float float_14;
    float float_18;
    u32 word_1c;
    u8 unknown_20[0xa0];  // (not used here)
    float float_c0;
    float float_c4;
    float float_c8;
};
GUEST_OFFSET(SetupDummyLayoutPartsArg0, float_c, 0xc);
GUEST_OFFSET(SetupDummyLayoutPartsArg0, float_10, 0x10);
GUEST_OFFSET(SetupDummyLayoutPartsArg0, float_14, 0x14);
GUEST_OFFSET(SetupDummyLayoutPartsArg0, float_18, 0x18);
GUEST_OFFSET(SetupDummyLayoutPartsArg0, word_1c, 0x1c);
GUEST_OFFSET(SetupDummyLayoutPartsArg0, float_c0, 0xc0);
GUEST_OFFSET(SetupDummyLayoutPartsArg0, float_c4, 0xc4);
GUEST_OFFSET(SetupDummyLayoutPartsArg0, float_c8, 0xc8);

struct __attribute__((packed)) SetupDummyLayoutPartsArg1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    float float_18;
    float float_1c;
    float float_20;
    float float_24;
    float float_28;
    float float_2c;
    float float_30;
};
GUEST_OFFSET(SetupDummyLayoutPartsArg1, word_0, 0x0);
GUEST_OFFSET(SetupDummyLayoutPartsArg1, word_4, 0x4);
GUEST_OFFSET(SetupDummyLayoutPartsArg1, word_8, 0x8);
GUEST_OFFSET(SetupDummyLayoutPartsArg1, word_c, 0xc);
GUEST_OFFSET(SetupDummyLayoutPartsArg1, word_10, 0x10);
GUEST_OFFSET(SetupDummyLayoutPartsArg1, word_14, 0x14);
GUEST_OFFSET(SetupDummyLayoutPartsArg1, float_18, 0x18);
GUEST_OFFSET(SetupDummyLayoutPartsArg1, float_1c, 0x1c);
GUEST_OFFSET(SetupDummyLayoutPartsArg1, float_20, 0x20);
GUEST_OFFSET(SetupDummyLayoutPartsArg1, float_24, 0x24);
GUEST_OFFSET(SetupDummyLayoutPartsArg1, float_28, 0x28);
GUEST_OFFSET(SetupDummyLayoutPartsArg1, float_2c, 0x2c);
GUEST_OFFSET(SetupDummyLayoutPartsArg1, float_30, 0x30);

inline constexpr guest::Function<0x005695e4, u32(u32, u32, u32, u32)> construct_dummy_layout;

void setup_dummy_layout_parts(gptr<SetupDummyLayoutPartsArg0> arg0, gptr<SetupDummyLayoutPartsArg1> arg1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    float S0_1 = arg1->float_18;
    float S1_1 = arg1->float_1c;
    float S2_1 = arg1->float_20;
    float S3_1 = arg1->float_24;
    float S4_1 = arg1->float_28;
    float S5_1 = arg1->float_2c;
    float S6_1 = arg1->float_30;
    arg0->float_c = S0_1;
    arg0->float_10 = S1_1;
    arg0->float_14 = S2_1;
    arg0->float_18 = S3_1;
    arg0->float_c0 = S6_1;
    arg0->float_c4 = S4_1;
    arg0->float_c8 = S5_1;
    arg0->word_1c = arg1->word_4;
    u32 r1_1 = arg1->word_8;
    if (r1_1 != 0) {
        u32 r2_1 = arg1->word_0;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        guest::cpu()->s[2] = S2_1;
        guest::cpu()->s[3] = S3_1;
        guest::cpu()->s[4] = S4_1;
        guest::cpu()->s[5] = S5_1;
        guest::cpu()->s[6] = S6_1;
        construct_dummy_layout(arg0.addr() + 0x20u, r1_1, r2_1, guest::cpu()->r[3]);
        S0_1 = guest::cpu()->s[0];
        S1_1 = guest::cpu()->s[1];
        S2_1 = guest::cpu()->s[2];
        S3_1 = guest::cpu()->s[3];
        S4_1 = guest::cpu()->s[4];
        S5_1 = guest::cpu()->s[5];
        S6_1 = guest::cpu()->s[6];
    }
    u32 r1_2 = arg1->word_c;
    if (r1_2 != 0) {
        u32 r2_2 = arg1->word_0;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        guest::cpu()->s[2] = S2_1;
        guest::cpu()->s[3] = S3_1;
        guest::cpu()->s[4] = S4_1;
        guest::cpu()->s[5] = S5_1;
        guest::cpu()->s[6] = S6_1;
        construct_dummy_layout(arg0.addr() + 0x48u, r1_2, r2_2, guest::cpu()->r[3]);
        S0_1 = guest::cpu()->s[0];
        S1_1 = guest::cpu()->s[1];
        S2_1 = guest::cpu()->s[2];
        S3_1 = guest::cpu()->s[3];
        S4_1 = guest::cpu()->s[4];
        S5_1 = guest::cpu()->s[5];
        S6_1 = guest::cpu()->s[6];
    }
    u32 r1_3 = arg1->word_10;
    if (r1_3 != 0) {
        u32 r2_3 = arg1->word_0;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        guest::cpu()->s[2] = S2_1;
        guest::cpu()->s[3] = S3_1;
        guest::cpu()->s[4] = S4_1;
        guest::cpu()->s[5] = S5_1;
        guest::cpu()->s[6] = S6_1;
        construct_dummy_layout(arg0.addr() + 0x70u, r1_3, r2_3, guest::cpu()->r[3]);
        S0_1 = guest::cpu()->s[0];
        S1_1 = guest::cpu()->s[1];
        S2_1 = guest::cpu()->s[2];
        S3_1 = guest::cpu()->s[3];
        S4_1 = guest::cpu()->s[4];
        S5_1 = guest::cpu()->s[5];
        S6_1 = guest::cpu()->s[6];
    }
    u32 r1_4 = arg1->word_14;
    if (r1_4 != 0) {
        u32 r2_4 = arg1->word_0;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        guest::cpu()->s[2] = S2_1;
        guest::cpu()->s[3] = S3_1;
        guest::cpu()->s[4] = S4_1;
        guest::cpu()->s[5] = S5_1;
        guest::cpu()->s[6] = S6_1;
        frame.release();
        construct_dummy_layout(arg0.addr() + 0x98u, r1_4, r2_4, guest::cpu()->r[3]);
        return;
    }
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_0031c7dc
GUEST_EXPORT(0x0031c7dc, d_0031c7dc::setup_dummy_layout_parts);

// f_0031c878: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a custom button action node.
namespace d_0031c878 {

inline constexpr u32 vtable_ButtonActionCstmNode = 0x008f46c4u;
inline constexpr guest::Function<0x002b6de0, u32(u32)> construct_button_node;

u32 ButtonActionCstmNode__ButtonActionCstmNode(gptr<ButtonActionCstmNode> button_action_cstm_node) {
    construct_button_node(button_action_cstm_node.addr());
    button_action_cstm_node->vtable = vtable_ButtonActionCstmNode;
    guest::cpu()->r[1] = vtable_ButtonActionCstmNode;
    return button_action_cstm_node.addr();
}

}  // namespace d_0031c878
GUEST_EXPORT_FRAMED(0x0031c878, d_0031c878::ButtonActionCstmNode__ButtonActionCstmNode, 0x4010);  // pushes {r4, lr} first, as the original

// f_0031c92c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys a custom button action node: releases its four animations' linked objects and textures, then
// destroys them.
namespace d_0031c92c {

inline constexpr u32 vtable_ButtonActionNode_rec = 0x008f183cu;
inline constexpr u32 vtable_ButtonActionCstmNode = 0x008f46c4u;
inline constexpr guest::Function<0x005694c8, u32(u32, u32, u32, u32)> release_linked_objects;
inline constexpr guest::Function<0x00569774, u32(u32, u32)> TextureAnim__bind_texture;
inline constexpr guest::Function<0x0056988c, u32(u32)> destroy_animation;

u32 ButtonActionCstmNode__destructor(gptr<ButtonActionNode_rec> button_action_node_rec, u32 r1) {
    button_action_node_rec->vtable = vtable_ButtonActionCstmNode;
    release_linked_objects(button_action_node_rec.addr() + 0x20u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    release_linked_objects(button_action_node_rec.addr() + 0x48u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    release_linked_objects(button_action_node_rec.addr() + 0x70u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    release_linked_objects(button_action_node_rec.addr() + 0x98u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    button_action_node_rec->vtable = vtable_ButtonActionNode_rec;
    TextureAnim__bind_texture(button_action_node_rec.addr() + 0x20u, 0u);
    TextureAnim__bind_texture(button_action_node_rec.addr() + 0x48u, 0u);
    TextureAnim__bind_texture(button_action_node_rec.addr() + 0x70u, 0u);
    TextureAnim__bind_texture(button_action_node_rec.addr() + 0x98u, 0u);
    destroy_animation(button_action_node_rec.addr() + 0x98u);
    destroy_animation(button_action_node_rec.addr() + 0x70u);
    destroy_animation(button_action_node_rec.addr() + 0x48u);
    destroy_animation(button_action_node_rec.addr() + 0x20u);
    return button_action_node_rec.addr();
}

}  // namespace d_0031c92c
GUEST_EXPORT_FRAMED(0x0031c92c, d_0031c92c::ButtonActionCstmNode__destructor, 0x4010);  // pushes {r4, lr} first, as the original

// f_0031cd1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a storage stock change window: a rental change window with ten item slots and an item drag icon
// group, its layout names and the storage state.
namespace d_0031cd1c {

struct __attribute__((packed)) Local_0031cd1c_r0_1 {
    u32 vtable;
    u8 unknown_4[0xa3c];  // (not used here)
    u32 cabinet_vtable;
};
GUEST_OFFSET(Local_0031cd1c_r0_1, vtable, 0x0);
GUEST_OFFSET(Local_0031cd1c_r0_1, cabinet_vtable, 0xa40);

struct __attribute__((packed)) Local_0031cd1c_r0_5 {
    u32 vtable;
    u8 unknown_4[0x20];  // (not used here)
    u32 word_24;
    u8 unknown_28[0xa18];  // (not used here)
    u32 change_stock_warehouse_vtable;
    u8 unknown_a44[0x20];  // (not used here)
    u32 word_a64;
    u32 word_a68;
    u32 word_a6c;
};
GUEST_OFFSET(Local_0031cd1c_r0_5, vtable, 0x0);
GUEST_OFFSET(Local_0031cd1c_r0_5, word_24, 0x24);
GUEST_OFFSET(Local_0031cd1c_r0_5, change_stock_warehouse_vtable, 0xa40);
GUEST_OFFSET(Local_0031cd1c_r0_5, word_a64, 0xa64);
GUEST_OFFSET(Local_0031cd1c_r0_5, word_a68, 0xa68);
GUEST_OFFSET(Local_0031cd1c_r0_5, word_a6c, 0xa6c);

inline constexpr u32 vtable_ChangeStockWarehouse = 0x008f470cu;
inline constexpr u32 vtable_ChangeStockWarehouse_at_a40 = 0x008f4758u;
inline constexpr u32 vtable_Cabinet = 0x008f7fd4u;
inline constexpr u32 vtable_Cabinet_at_a40 = 0x008f8020u;
inline constexpr u32 global_009533d4_address = 0x009533d4u;
inline constexpr guest::Function<0x002682ac, u32(u32, u32, u32, u32)> ChangeRentalBase__construct;
inline constexpr guest::Function<0x002cdcb0, u32(u32)> ItemDragIconGroup__ItemDragIconGroup;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;

u32 ChangeStockWarehouse__construct(u32 cabinet, u32 r1, u32 r2, u32 r3) {
    gptr<Local_0031cd1c_r0_1> r0_1 = gptr<Local_0031cd1c_r0_1>(ChangeRentalBase__construct(cabinet, r1, r2, r3));
    r0_1->vtable = vtable_Cabinet;
    r0_1->cabinet_vtable = vtable_Cabinet_at_a40;
    u32 item_drag_icon_group = for_each_element(r0_1.addr() + 0x1888u, 0x2b9440u, 0x36cu, 0xau) + 0x2238u;
    ItemDragIconGroup__ItemDragIconGroup(item_drag_icon_group);
    gptr<Local_0031cd1c_r0_5> r0_5 = gptr<Local_0031cd1c_r0_5>(item_drag_icon_group - 0x3ac0u);
    *gptr<u8>(r0_5.addr() + 0x3ca0u) = 0;
    *gptr<u32>(r0_5.addr() + 0x3ca4u) = 0;
    r0_5->word_a64 = 0x31cdc0;
    r0_5->word_a6c = 0x31cdd0;
    r0_5->word_a68 = 0x9533d4;
    r0_5->word_24 = 0x31cdb0;
    r0_5->change_stock_warehouse_vtable = vtable_ChangeStockWarehouse_at_a40;
    r0_5->vtable = vtable_ChangeStockWarehouse;
    guest::cpu()->r[1] = 0x31cdd0u;
    return r0_5.addr();
}

}  // namespace d_0031cd1c
GUEST_EXPORT_FRAMED(0x0031cd1c, d_0031cd1c::ChangeStockWarehouse__construct, 0x4010);  // pushes {r4, lr} first, as the original

// f_0031d00c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Updates the button control at +0x608 and releases its active child once it is ready.
namespace d_0031d00c {

inline constexpr guest::Function<0x002f67ac, u32(u32)> release_active_child;
inline constexpr guest::Function<0x002f6e14, u32(u32, u32, u32, u32)> ButtonActionControl__virtual_3;
inline constexpr guest::Function<0x002f71e4, u32(u32, u32, u32, u32)> ButtonActionControl__virtual_2;
inline constexpr guest::Function<0x007237e0, u32(u32)> sub_is_ready;

void release_button_control_608(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = r0 + 0x608u;
    ButtonActionControl__virtual_2(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (sub_is_ready(r0_1) == 0) {
        return;
    }
    release_active_child(r0_1);
    frame.release();
    ButtonActionControl__virtual_3(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
}

}  // namespace d_0031d00c
GUEST_EXPORT(0x0031d00c, d_0031d00c::release_button_control_608);

// f_0031d048: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets up the button controls and their panes and animation targets.
namespace d_0031d048 {

struct __attribute__((packed)) SetupButtonPanesArg0 {
    u8 unknown_0[0x6fe];  // (not used here)
    u8 byte_6fe;
};
GUEST_OFFSET(SetupButtonPanesArg0, byte_6fe, 0x6fe);

struct __attribute__((packed)) Local_0031d048_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0031d048_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0031d048_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_0031d048_ea_14 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0031d048_ea_14, word_0, 0x0);
GUEST_OFFSET(Local_0031d048_ea_14, word_4, 0x4);

struct __attribute__((packed)) Local_0031d048_ea_15 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0031d048_ea_15, word_0, 0x0);
GUEST_OFFSET(Local_0031d048_ea_15, word_4, 0x4);

struct __attribute__((packed)) Local_0031d048_ea_18 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0031d048_ea_18, word_0, 0x0);
GUEST_OFFSET(Local_0031d048_ea_18, word_4, 0x4);

struct __attribute__((packed)) Local_0031d048_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0031d048_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_0031d048_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_0031d048_r0_1 {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
    float float_10;
    float float_14;
    float float_18;
};
GUEST_OFFSET(Local_0031d048_r0_1, float_0, 0x0);
GUEST_OFFSET(Local_0031d048_r0_1, float_4, 0x4);
GUEST_OFFSET(Local_0031d048_r0_1, float_8, 0x8);
GUEST_OFFSET(Local_0031d048_r0_1, float_c, 0xc);
GUEST_OFFSET(Local_0031d048_r0_1, float_10, 0x10);
GUEST_OFFSET(Local_0031d048_r0_1, float_14, 0x14);
GUEST_OFFSET(Local_0031d048_r0_1, float_18, 0x18);

struct __attribute__((packed)) Local_0031d048_r6_1 {
    u8 unknown_0[0x522];  // (not used here)
    u8 byte_522;
    u8 byte_523;
};
GUEST_OFFSET(Local_0031d048_r6_1, byte_522, 0x522);
GUEST_OFFSET(Local_0031d048_r6_1, byte_523, 0x523);

inline guest::global<u32, 0x00857cc0> global_00857cc0;
inline guest::global<u32, 0x00857cc4> global_00857cc4;
inline guest::global<u32, 0x00857cc8> global_00857cc8;
inline guest::global<u32, 0x00857ccc> global_00857ccc;
inline guest::global<u32, 0x00857cdc> global_00857cdc;
inline guest::global<u32, 0x00857ce0> global_00857ce0;
inline guest::global<u32, 0x00857ce4> global_00857ce4;
inline guest::global<u32, 0x00857ce8> global_00857ce8;
inline guest::global<u32, 0x00857cec> global_00857cec;
inline guest::global<u32, 0x00857cf0> global_00857cf0;
inline guest::global<u32, 0x00857d08> global_00857d08;
inline guest::global<u32, 0x00857d14> global_00857d14;
inline constexpr guest::Function<0x002b6a00, u32(u32, u32)> set_node_values;
inline constexpr guest::Function<0x002f6a30, u32(u32, u32)> Model__set_flag_10;
inline constexpr guest::Function<0x002f6e98, u32(u32, u32, u32, u32)> ButtonActionControl__setup;
inline constexpr guest::Function<0x002f7508, u32(u32, u32, u32)> copy_four_animation_targets;
inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32)> Layout__find_pane;
inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> LayoutObjectWithChild__forward_to_child;

struct __attribute__((packed)) SetupButtonPanesFrame {
    u32 child;
    u32 pane;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 model;
    u8 unknown_20[0x10];  // (not read or written by name)
    float float_30;
    float float_34;
    float float_38;
    u32 word_3c;
    float float_40;
    float float_44;
    u32 word_48;
    u32 word_4c;
    u32 word_50;
    u32 word_54;
    u8 unknown_58[0x14];  // (not read or written by name)
};
GUEST_OFFSET(SetupButtonPanesFrame, child, 0x0);
GUEST_OFFSET(SetupButtonPanesFrame, pane, 0x4);
GUEST_OFFSET(SetupButtonPanesFrame, word_8, 0x8);
GUEST_OFFSET(SetupButtonPanesFrame, word_c, 0xc);
GUEST_OFFSET(SetupButtonPanesFrame, word_10, 0x10);
GUEST_OFFSET(SetupButtonPanesFrame, word_14, 0x14);
GUEST_OFFSET(SetupButtonPanesFrame, word_18, 0x18);
GUEST_OFFSET(SetupButtonPanesFrame, model, 0x1c);
GUEST_OFFSET(SetupButtonPanesFrame, float_30, 0x30);
GUEST_OFFSET(SetupButtonPanesFrame, float_34, 0x34);
GUEST_OFFSET(SetupButtonPanesFrame, float_38, 0x38);
GUEST_OFFSET(SetupButtonPanesFrame, word_3c, 0x3c);
GUEST_OFFSET(SetupButtonPanesFrame, float_40, 0x40);
GUEST_OFFSET(SetupButtonPanesFrame, float_44, 0x44);
GUEST_OFFSET(SetupButtonPanesFrame, word_48, 0x48);
GUEST_OFFSET(SetupButtonPanesFrame, word_4c, 0x4c);
GUEST_OFFSET(SetupButtonPanesFrame, word_50, 0x50);
GUEST_OFFSET(SetupButtonPanesFrame, word_54, 0x54);
GUEST_SIZE(SetupButtonPanesFrame, 0x6c);

void setup_button_panes(gptr<SetupButtonPanesArg0> arg0, float S0_unused, float S1_unused, float S2_unused, float S3_unused, float S4_unused, float S5, float S6) {
    guest::StackFrameOf<SetupButtonPanesFrame> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    float S0_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    float S3_1 = 0;
    float S4_1 = 0;
    u32 r5 = r0;
    u32 r2_1 = r5 + 4u;
    frame->word_4c = r0 + 0x600u;
    u32 r3_1 = r5 + 0x24cu;
    if (arg0->byte_6fe == 1u) {
        S0_1 = 0.0f;
        S1_1 = std::bit_cast<float>(*global_00857cdc);
        S2_1 = std::bit_cast<float>(*global_00857ce0);
        S3_1 = std::bit_cast<float>(*global_00857ce4);
        S4_1 = std::bit_cast<float>(*global_00857ce8);
        S5 = std::bit_cast<float>(*global_00857cec);
        S6 = std::bit_cast<float>(*global_00857cf0);
        gptr<Local_0031d048_r0_1> r0_1 = gptr<Local_0031d048_r0_1>(frame.at(0x30).addr());
        gptr<Local_0031d048_ea_1> ea_1 = gptr<Local_0031d048_ea_1>(frame.at(0x28).addr());
        ea_1->word_0 = r2_1;
        ea_1->word_4 = r3_1;
        r0_1->float_0 = S0_1;
        r0_1->float_4 = S1_1;
        r0_1->float_8 = S2_1;
        r0_1->float_c = S3_1;
        r0_1->float_10 = S4_1;
        r0_1->float_14 = S5;
        r0_1->float_18 = S6;
    } else {
        u32 r1_1 = *global_00857d08;
        u32 r0_2 = *global_00857d14;
        S2_1 = 0.0f;
        S0_1 = 1.3335018e-38f;
        S3_1 = 1.3335248e-38f;
        S4_1 = 1.3335167e-38f;
        S1_1 = 4e-45f;
        gptr<Local_0031d048_ea_2> ea_2 = gptr<Local_0031d048_ea_2>(frame.at(0x28).addr());
        ea_2->word_0 = r2_1;
        ea_2->word_4 = r3_1;
        frame->float_30 = S2_1;
        frame->float_34 = S0_1;
        frame->float_38 = S3_1;
        frame->word_3c = r1_1;
        frame->float_40 = S4_1;
        frame->float_44 = S1_1;
        frame->word_48 = r0_2;
    }
    u32 r0_3 = r5 + 0x608u;
    frame->model = r0_3;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    guest::cpu()->s[3] = S3_1;
    guest::cpu()->s[4] = S4_1;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    ButtonActionControl__setup(r0_3, frame.at(0x28).addr(), 0u, r3_1);
    u32 r2 = guest::cpu()->r[2];
    u32 r3 = guest::cpu()->r[3];
    float S1 = guest::cpu()->s[1];
    float S2 = guest::cpu()->s[2];
    float S3 = guest::cpu()->s[3];
    float S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    S6 = guest::cpu()->s[6];
    u32 r8 = 0u;
    float S0 = 0.0f;
    *gptr<u32>(r5 + 0x6dcu) = *gptr<u32>(r5 + 0x6dcu) | 0x40u;
    frame->child = r8;
    frame->pane = r8;
    frame->word_8 = r8;
    frame->word_c = r8;
    frame->word_10 = r8;
    frame->word_14 = r8;
    frame->word_18 = r8;
    frame->word_8 = std::bit_cast<u32>(S0);
    frame->word_c = std::bit_cast<u32>(S0);
    frame->word_50 = r8;
    frame->word_54 = r8;
    u32 r0_5 = *global_00857cc0;
    u32 r1_3 = *global_00857cc4;
    u32 r9 = frame.at(0x50).addr();
    u32 r10 = frame.at(0x58).addr();
    gptr<Local_0031d048_ea_14> ea_14 = gptr<Local_0031d048_ea_14>(frame.at(0x58).addr());
    ea_14->word_0 = r0_5;
    ea_14->word_4 = r1_3;
    u32 r0_6 = *global_00857cc8;
    u32 r1_4 = *global_00857ccc;
    u32 i = r8;
    u32 r11 = frame.at(0x60).addr();
    gptr<Local_0031d048_ea_15> ea_15 = gptr<Local_0031d048_ea_15>(frame.at(0x60).addr());
    ea_15->word_0 = r0_6;
    ea_15->word_4 = r1_4;
    do {
        u32 r1_5 = gptr<u32>(r10)[i];
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        guest::cpu()->s[3] = S3;
        guest::cpu()->s[4] = S4;
        guest::cpu()->s[5] = S5;
        guest::cpu()->s[6] = S6;
        u32 child = LayoutObjectWithChild__forward_to_child(r5 + 0x24cu, r1_5, r2, r3);
        frame->child = child;
        u32 pane = Layout__find_pane(r5 + 0x24cu, gptr<u32>(r11)[i], 1u);
        frame->pane = pane;
        u32 r0_11 = *gptr<u32>(r9 + (i << 2));
        gptr<Local_0031d048_ea_18> ea_18 = gptr<Local_0031d048_ea_18>(frame.at(0x10).addr());
        ea_18->word_0 = r0_11;
        ea_18->word_4 = i;
        gptr<Local_0031d048_r6_1> r6_1 = gptr<Local_0031d048_r6_1>(r5 + i * 0xe0u);
        u32 r7_1 = r6_1.addr() + 0x448u;
        set_node_values(r7_1, frame.at(0).addr());
        r6_1->byte_522 = u8(r8);
        r6_1->byte_523 = u8(r8);
        copy_four_animation_targets(frame->model, r7_1, 1u);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        S2 = guest::cpu()->s[2];
        S3 = guest::cpu()->s[3];
        S4 = guest::cpu()->s[4];
        S5 = guest::cpu()->s[5];
        S6 = guest::cpu()->s[6];
        i += 1u;
        guest::preempt();
    } while (s32(i) < 2);
    u32 model = frame->model;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    Model__set_flag_10(model, 0u);
    *gptr<u32>(r5 + 0x6dcu) = *gptr<u32>(r5 + 0x6dcu) & ~8u;
    *gptr<u16>(frame->word_4c + 0xd8u) = 0x23;
}

}  // namespace d_0031d048
GUEST_EXPORT_FRAMED(0x0031d048, d_0031d048::setup_button_panes, 0x4ff0);  // pushes {i, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_0031d5d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a wide common scroll bar.
namespace d_0031d5d4 {

inline constexpr u32 vtable_CommonScrollBarWidth = 0x008f476cu;
inline constexpr guest::Function<0x00299b30, u32(u32, u32, u32, u32)> CommonScrollBar__CommonScrollBar;

u32 CommonScrollBarWidth__CommonScrollBarWidth(u32 common_scroll_bar_width, u32 r1) {
    u32 r0_1 = CommonScrollBar__CommonScrollBar(common_scroll_bar_width, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r0_1) = vtable_CommonScrollBarWidth;
    return r0_1;
}

}  // namespace d_0031d5d4
GUEST_EXPORT_FRAMED(0x0031d5d4, d_0031d5d4::CommonScrollBarWidth__CommonScrollBarWidth, 0x4010);  // pushes {r4, lr} first, as the original

// f_0031d6e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores the chosen appearance value (bits 3 to 5) in the part (bits 0 to 2) of the player's look, then updates the
// player model for that part.
namespace d_0031d6e8 {

struct __attribute__((packed)) Player {
    u8 byte_0;
};
GUEST_OFFSET(Player, byte_0, 0x0);

struct __attribute__((packed)) Local_0031d6e8_r0_3 {
    u32 word_0;
};
GUEST_OFFSET(Local_0031d6e8_r0_3, word_0, 0x0);

inline constexpr u32 event_npc_source_address = 0x009506b4u;
inline guest::global<u8, 0x009506b0> event_npc_mode;
inline guest::global<u32, 0x009506b4> event_npc_source;
inline constexpr guest::Function<0x002fe8a8, u32(u32, u32, u32, u32)> player_of_slot_index;
inline constexpr guest::Function<0x006dcdac, u32(u32, u32, u32)> BsNpcMgr__first_active;

u32 Player__apply_appearance_choice(gptr<Player> player, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 player_3 = player_of_slot_index(0u, r1, r2, guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    if (player_3 != 0) {
        u32 r1_2 = player->byte_0;
        r2_1 = player_3 + 0x8a3cu;
        u32 r0_2 = r1_2 & 7u;
        if (r0_2 >= 4u) {
            r0_2 = 0u;
        }
        r1_1 = (r1_2 & 0x38u) >> 3;
        *gptr<u8>(r0_2 + r2_1 + 0xdu) = u8(r1_1);
    }
    gptr<Local_0031d6e8_r0_3> r0_3 = gptr<Local_0031d6e8_r0_3>(u32(*event_npc_mode));
    if (r0_3.addr() == 0xffu) {
        r0_3 = gptr<Local_0031d6e8_r0_3>(*event_npc_source);
        if (r0_3.addr() != 0) {
            r0_3 = gptr<Local_0031d6e8_r0_3>(BsNpcMgr__first_active(r0_3.addr(), r1_1, r2_1));
            r1_1 = guest::cpu()->r[1];
            if (r0_3.addr() != 0) {
                r1_1 = u32(player->byte_0) & 7u;
                if (r1_1 != 0) {
                    if (r1_1 == 1u) {
                        u32 r1_3 = *gptr<u8>(u32(*gptr<u8>(player_3 + 0x8a4au)) + 0x88f033u);
                        u32 r2_3 = *gptr<u32>(r0_3->word_0 + 0xa8u);
                        // virtual function 42 of r0_3.addr()
                        frame.release();
                        return guest::call_address<u32>(r2_3, r0_3.addr(), r1_3, r2_3, guest::cpu()->r[3]);
                    }
                    if (r1_1 == 2u) {
                        u32 r1_4 = *gptr<u8>(u32(*gptr<u8>(player_3 + 0x8a4bu)) + 0x88f038u);
                        u32 r2_4 = *gptr<u32>(r0_3->word_0 + 0xacu);
                        // virtual function 43 of r0_3.addr()
                        frame.release();
                        return guest::call_address<u32>(r2_4, r0_3.addr(), r1_4, r2_4, guest::cpu()->r[3]);
                    }
                    if (r1_1 != 3u) {
                        guest::cpu()->r[1] = r1_1;
                        return r0_3.addr();
                    }
                    u32 r1_5 = *gptr<u32>(r0_3->word_0 + 0xb0u);
                    // virtual function 44 of r0_3.addr()
                    frame.release();
                    return guest::call_address<u32>(r1_5, r0_3.addr(), r1_5, 0x88f033u, guest::cpu()->r[3]);
                }
                u32 r1_6 = *gptr<u32>(r0_3->word_0 + 0xa4u);
                // virtual function 41 of r0_3.addr()
                frame.release();
                return guest::call_address<u32>(r1_6, r0_3.addr(), r1_6, guest::cpu()->r[2], guest::cpu()->r[3]);
            }
        }
    }
    guest::cpu()->r[1] = r1_1;
    return r0_3.addr();
}

}  // namespace d_0031d6e8
GUEST_EXPORT(0x0031d6e8, d_0031d6e8::Player__apply_appearance_choice);

// f_0031d8f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stops the model's animation (when asked) and resets the second slot (+0x60) when it is playing.
namespace d_0031d8f8 {

struct __attribute__((packed)) AnimSlots {
    u8 unknown_0[0x1c];  // (not used here)
    u32 model;
    u8 unknown_20[0xa];  // (not used here)
    u8 byte_2a;
};
GUEST_OFFSET(AnimSlots, model, 0x1c);
GUEST_OFFSET(AnimSlots, byte_2a, 0x2a);

inline constexpr guest::Function<0x0031df9c, u32(u32, u32, u32, u32)> AnimSlot__reset;
inline constexpr guest::Function<0x004f0de0, u32(u32, u32, u32, u32)> Model__reset_anim_results;

u32 AnimSlots__stop_second(gptr<AnimSlots> anim_slots, u32 r1, u32 r2) {
    u32 model = anim_slots->model;
    if (model == 0) {
        return model;
    }
    if (r1 != 0) {
        u32 zf_1 = r2 == 0;
        if (zf_1) {
            r1 = anim_slots->byte_2a;
            zf_1 = r1 == 0;
        }
        if (zf_1) {
            guest::cpu()->r[1] = r1;
            return model;
        }
        Model__reset_anim_results(model, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    u32 r0_2 = anim_slots->byte_2a;
    if (r0_2 == 0) {
        guest::cpu()->r[1] = r1;
        return r0_2;
    }
    AnimSlot__reset(anim_slots.addr(), anim_slots.addr() + 0x60u, 1u, guest::cpu()->r[3]);
    anim_slots->byte_2a = 0;
    return 0u;
}

}  // namespace d_0031d8f8
GUEST_EXPORT_FRAMED(0x0031d8f8, d_0031d8f8::AnimSlots__stop_second, 0x4010);  // pushes {r4, lr} first, as the original

// f_0031df9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stops the slot's animation in the model and releases its resource.
namespace d_0031df9c {

struct __attribute__((packed)) AnimSlot {
    u8 unknown_0[0x1c];  // (not used here)
    u32 word_1c;
};
GUEST_OFFSET(AnimSlot, word_1c, 0x1c);

struct __attribute__((packed)) AnimSlotResetArg1 {
    u32 word_0;
    u16 half_4;
    u8 unknown_6[0x2];  // (not used here)
    u32 word_8;
    u8 unknown_c[0x20];  // (not used here)
    u32 word_2c;
    u8 byte_30;
    u8 byte_31;
};
GUEST_OFFSET(AnimSlotResetArg1, word_0, 0x0);
GUEST_OFFSET(AnimSlotResetArg1, half_4, 0x4);
GUEST_OFFSET(AnimSlotResetArg1, word_8, 0x8);
GUEST_OFFSET(AnimSlotResetArg1, word_2c, 0x2c);
GUEST_OFFSET(AnimSlotResetArg1, byte_30, 0x30);
GUEST_OFFSET(AnimSlotResetArg1, byte_31, 0x31);

inline constexpr guest::Function<0x004d57d4, u32(u32, u32, u32, u32)> Pane__bind_material;
inline constexpr guest::Function<0x004f1104, u32(u32, u32, u32, u32)> Model__set_anim_frame;

void AnimSlot__reset(gptr<AnimSlot> anim_slot, gptr<AnimSlotResetArg1> arg1, u32 r2) {
    u32 r0_1 = anim_slot->word_1c;
    if (r0_1 != 0) {
        Model__set_anim_frame(r0_1, r2, r2, guest::cpu()->r[3]);
    }
    u32 r1_1 = 0x276u;
    u32 r0_2 = arg1->word_8;
    arg1->half_4 = u16(r1_1);
    arg1->word_2c = 0;
    arg1->byte_31 = 0;
    if (r0_2 != 0) {
        Pane__bind_material(arg1->word_0 + 4u, arg1.addr() + 8u, r2, guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        arg1->word_8 = 0;
    }
    arg1->byte_30 = 0;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_0031df9c
GUEST_EXPORT_FRAMED(0x0031df9c, d_0031df9c::AnimSlot__reset, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0031e0d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets both animation slots (+0x2c, +0x60) and their material animations, and forgets the model.
namespace d_0031e0d8 {

struct __attribute__((packed)) AnimSlots {
    u8 unknown_0[0x1c];  // (not used here)
    u32 word_1c;
    u32 word_20;
    u8 unknown_24[0x8];  // (not used here)
    u32 word_2c;
    u8 unknown_30[0x30];  // (not used here)
    u32 word_60;
};
GUEST_OFFSET(AnimSlots, word_1c, 0x1c);
GUEST_OFFSET(AnimSlots, word_20, 0x20);
GUEST_OFFSET(AnimSlots, word_2c, 0x2c);
GUEST_OFFSET(AnimSlots, word_60, 0x60);

inline constexpr guest::Function<0x0031df9c, u32(u32, u32, u32, u32)> AnimSlot__reset;
inline constexpr guest::Function<0x004ecb2c, u32(u32, u32)> material_anim_virtual_5;

void AnimSlots__reset(gptr<AnimSlots> anim_slots) {
    AnimSlot__reset(anim_slots.addr(), anim_slots.addr() + 0x2cu, 0u, guest::cpu()->r[3]);
    material_anim_virtual_5(anim_slots.addr() + 0x38u, guest::cpu()->r[1]);
    AnimSlot__reset(anim_slots.addr(), anim_slots.addr() + 0x60u, 1u, guest::cpu()->r[3]);
    material_anim_virtual_5(anim_slots.addr() + 0x6cu, anim_slots.addr() + 0x60u);
    anim_slots->word_1c = 0;
    anim_slots->word_20 = 0;
    anim_slots->word_2c = 0;
    anim_slots->word_60 = 0;
}

}  // namespace d_0031e0d8
GUEST_EXPORT_FRAMED(0x0031e0d8, d_0031e0d8::AnimSlots__reset, 0x4010);  // pushes {r4, lr} first, as the original

// f_0031e124: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a face animation control: two material animations, the default eye and mouth frames, nothing
// playing.
namespace d_0031e124 {

inline constexpr u32 vtable_HumanFaceAnimControl = 0x008f4790u;
inline constexpr guest::Function<0x004ecb80, u32(u32)> construct_base_anim_4ecb80;

u32 HumanFaceAnimControl__HumanFaceAnimControl(gptr<HumanFaceAnimControl> human_face_anim_control) {
    human_face_anim_control->word_4 = 0;
    human_face_anim_control->word_8 = 0;
    human_face_anim_control->word_c = 0;
    human_face_anim_control->half_10 = 0xfa;
    human_face_anim_control->half_12 = 0xfb;
    human_face_anim_control->half_14 = 0;
    human_face_anim_control->byte_16 = 0;
    human_face_anim_control->byte_17 = 0;
    human_face_anim_control->byte_18 = 0;
    human_face_anim_control->word_1c = 0;
    human_face_anim_control->vtable = vtable_HumanFaceAnimControl;
    human_face_anim_control->word_20 = 0;
    human_face_anim_control->byte_24 = 1;
    human_face_anim_control->half_26 = 0xf7;
    human_face_anim_control->half_28 = 0xfa;
    human_face_anim_control->byte_2a = 0;
    u32 ea_1 = human_face_anim_control.addr() + 0x34u;
    human_face_anim_control->word_34 = 0;
    construct_base_anim_4ecb80(ea_1 + 4u);
    human_face_anim_control->word_68 = 0;
    construct_base_anim_4ecb80(ea_1 + 0x38u);
    human_face_anim_control->word_2c = 0;
    human_face_anim_control->half_30 = 0x276;
    human_face_anim_control->word_34 = 0;
    human_face_anim_control->word_58 = 0;
    human_face_anim_control->byte_5c = 0;
    human_face_anim_control->byte_5d = 0;
    human_face_anim_control->word_60 = 0;
    human_face_anim_control->half_64 = 0x276;
    human_face_anim_control->word_68 = 0;
    human_face_anim_control->word_8c = 0;
    human_face_anim_control->byte_90 = 0;
    human_face_anim_control->byte_91 = 0;
    guest::cpu()->r[1] = 0x276u;
    return ea_1 - 0x34u;
}

}  // namespace d_0031e124
GUEST_EXPORT_FRAMED(0x0031e124, d_0031e124::HumanFaceAnimControl__HumanFaceAnimControl, 0x4010);  // pushes {r4, lr} first, as the original

// f_0031e204: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys a face animation control: its two material animations.
namespace d_0031e204 {

inline constexpr u32 vtable_HumanFaceAnimControl = 0x008f4790u;
inline constexpr guest::Function<0x004ecbe0, u32(u32, u32, u32, u32)> g3d__MaterialAnim__destructor;

u32 HumanFaceAnimControl__destructor(gptr<HumanFaceAnimControl> human_face_anim_control) {
    human_face_anim_control->vtable = vtable_HumanFaceAnimControl;
    u32 base_anim = human_face_anim_control.addr() + 0x6cu;
    g3d__MaterialAnim__destructor(base_anim, vtable_HumanFaceAnimControl, guest::cpu()->r[2], guest::cpu()->r[3]);
    g3d__MaterialAnim__destructor(base_anim - 0x34u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return base_anim - 0x6cu;
}

}  // namespace d_0031e204
GUEST_EXPORT_FRAMED(0x0031e204, d_0031e204::HumanFaceAnimControl__destructor, 0x4010);  // pushes {r4, lr} first, as the original

// f_0031e42c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031e42c {

struct __attribute__((packed)) script__WordFix_33u_ {
    u8 unknown_0[0x3c4];  // (not used here)
    u32 word_3c4;
    u8 unknown_3c8[0x124];  // (not used here)
    u8 byte_4ec;
};
GUEST_OFFSET(script__WordFix_33u_, word_3c4, 0x3c4);
GUEST_OFFSET(script__WordFix_33u_, byte_4ec, 0x4ec);

struct __attribute__((packed)) Local_0031e42c_r4_1 {
    u8 unknown_0[0xe0];  // (not used here)
    float float_e0;
    float float_e4;
    float float_e8;
};
GUEST_OFFSET(Local_0031e42c_r4_1, float_e0, 0xe0);
GUEST_OFFSET(Local_0031e42c_r4_1, float_e4, 0xe4);
GUEST_OFFSET(Local_0031e42c_r4_1, float_e8, 0xe8);

inline constexpr u32 vtable_script__WordFix_33u__rec = 0x00909f18u;
inline guest::global<u32, 0x00879424> message_window_text_a;
inline guest::global<u32, 0x00879428> message_window_text_b;
inline constexpr guest::Function<0x002fe7f4, u32(u32, u32, u32)> construct_word_fix_33_into_text_box;
inline constexpr guest::Function<0x005e2e50, u32(u32, u32)> start_message;
inline constexpr guest::Function<0x005e2f94, u32(u32, u32)> TextBox__layout_lines;
inline constexpr guest::Function<0x005fdf68, u32(u32, u32, u32)> script__WordCPtr__WordCPtr_005fdf68;
inline constexpr guest::Function<0x00768174, u32(u32, u32, u32, u32)> Item__is_kind_2;
inline constexpr guest::Function<0x00819f50, u32(u32, u32, u32)> dispatch_offset_0_00819f50;

struct __attribute__((packed)) ScriptWordFix33uWordFix0031e42cFrame {
    u32 word_0;
    u8 unknown_4[0x58];  // (not read or written by name)
};
GUEST_OFFSET(ScriptWordFix33uWordFix0031e42cFrame, word_0, 0x0);
GUEST_SIZE(ScriptWordFix33uWordFix0031e42cFrame, 0x5c);

u32 script__WordFix_33u___WordFix_0031e42c(gptr<script__WordFix_33u_> word_fix_33u, u32 r1, u32 r2, float S0) {
    guest::StackFrameOf<ScriptWordFix33uWordFix0031e42cFrame> frame;  // the original's stack frame
    u32 r1_2 = 0;
    gptr<Local_0031e42c_r4_1> r4_1 = gptr<Local_0031e42c_r4_1>(word_fix_33u.addr() + 0x400u);
    u32 r0_1 = word_fix_33u->byte_4ec;
    if (r0_1 == 0) {
        word_fix_33u->word_3c4 = r2;
        if (Item__is_kind_2(r1, r1, r2, guest::cpu()->r[3]) != 0) {
            script__WordCPtr__WordCPtr_005fdf68(frame.at(0).addr(), 0x31e4f8u, 6u);
            start_message(word_fix_33u.addr() + 0x41cu, frame.at(0).addr());
            r1_2 = guest::cpu()->r[1];
        } else {
            construct_word_fix_33_into_text_box(frame.at(0).addr(), r1, 0u);
            start_message(word_fix_33u.addr() + 0x41cu, frame.at(0).addr());
            r1_2 = vtable_script__WordFix_33u__rec;
            frame->word_0 = r1_2;
        }
        TextBox__layout_lines(word_fix_33u.addr() + 0x41cu, r1_2);
        float S0_5 = 0.0f;
        r4_1->float_e0 = S0_5;
        r4_1->float_e4 = S0_5;
        r4_1->float_e8 = S0_5;
        u32 r1_4 = *message_window_text_a;
        u32 r2_4 = *message_window_text_b;
        guest::cpu()->s[0] = S0_5;
        r0_1 = dispatch_offset_0_00819f50(word_fix_33u.addr(), r1_4, r2_4);
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r0_1;
}

}  // namespace d_0031e42c
GUEST_EXPORT_FRAMED(0x0031e42c, d_0031e42c::script__WordFix_33u___WordFix_0031e42c, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0031e510: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When the window is closed (+0x4ec), sets its text (message, its arguments) and opens it.
namespace d_0031e510 {

struct __attribute__((packed)) MessageWindow {
    u8 unknown_0[0x3c4];  // (not used here)
    u32 word_3c4;
    u8 unknown_3c8[0x118];  // (not used here)
    u32 word_4e0;
    u32 word_4e4;
    u32 word_4e8;
    u8 byte_4ec;
};
GUEST_OFFSET(MessageWindow, word_3c4, 0x3c4);
GUEST_OFFSET(MessageWindow, word_4e0, 0x4e0);
GUEST_OFFSET(MessageWindow, word_4e4, 0x4e4);
GUEST_OFFSET(MessageWindow, word_4e8, 0x4e8);
GUEST_OFFSET(MessageWindow, byte_4ec, 0x4ec);

struct __attribute__((packed)) MessageWindowOpenWithTextArg3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(MessageWindowOpenWithTextArg3, word_0, 0x0);
GUEST_OFFSET(MessageWindowOpenWithTextArg3, word_4, 0x4);
GUEST_OFFSET(MessageWindowOpenWithTextArg3, word_8, 0x8);

inline guest::global<u32, 0x00879424> message_window_text_a;
inline guest::global<u32, 0x00879428> message_window_text_b;
inline constexpr guest::Function<0x005e2e50, u32(u32, u32, u32, u32)> start_message;
inline constexpr guest::Function<0x005e2f94, u32(u32)> TextBox__layout_lines;
inline constexpr guest::Function<0x00819f50, u32(u32, u32, u32)> dispatch_offset_0_00819f50;

u32 MessageWindow__open_with_text(gptr<MessageWindow> message_window, u32 source, u32 r2, gptr<MessageWindowOpenWithTextArg3> arg3) {
    u32 r0_1 = message_window->byte_4ec;
    if (r0_1 == 0) {
        message_window->word_3c4 = r2;
        message_window->word_4e0 = arg3->word_0;
        message_window->word_4e4 = arg3->word_4;
        u32 r2_1 = arg3->word_8;
        message_window->word_4e8 = r2_1;
        start_message(message_window.addr() + 0x41cu, source, r2_1, arg3.addr());
        TextBox__layout_lines(message_window.addr() + 0x41cu);
        r0_1 = dispatch_offset_0_00819f50(message_window.addr(), *message_window_text_a, *message_window_text_b);
        source = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = source;
    return r0_1;
}

}  // namespace d_0031e510
GUEST_EXPORT_FRAMED(0x0031e510, d_0031e510::MessageWindow__open_with_text, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0031e594: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the window's text (message and arguments): refreshes it when open, else opens it.
namespace d_0031e594 {

struct __attribute__((packed)) MessageWindow {
    u8 unknown_0[0x3c4];  // (not used here)
    u32 word_3c4;
    u8 unknown_3c8[0x118];  // (not used here)
    u32 word_4e0;
    u32 word_4e4;
    u32 word_4e8;
    u8 byte_4ec;
};
GUEST_OFFSET(MessageWindow, word_3c4, 0x3c4);
GUEST_OFFSET(MessageWindow, word_4e0, 0x4e0);
GUEST_OFFSET(MessageWindow, word_4e4, 0x4e4);
GUEST_OFFSET(MessageWindow, word_4e8, 0x4e8);
GUEST_OFFSET(MessageWindow, byte_4ec, 0x4ec);

struct __attribute__((packed)) MessageWindowSetTextArg3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(MessageWindowSetTextArg3, word_0, 0x0);
GUEST_OFFSET(MessageWindowSetTextArg3, word_4, 0x4);
GUEST_OFFSET(MessageWindowSetTextArg3, word_8, 0x8);

inline guest::global<u32, 0x00879424> message_window_text_a;
inline guest::global<u32, 0x00879428> message_window_text_b;
inline constexpr guest::Function<0x0031e228, u32(u32)> MessageBox__fit_width;
inline constexpr guest::Function<0x0031e314, u32(u32)> MessageBox__place_cursor;
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> Layout__virtual_3;
inline constexpr guest::Function<0x005e2e50, u32(u32, u32, u32, u32)> start_message;
inline constexpr guest::Function<0x005e2f94, u32(u32)> TextBox__layout_lines;
inline constexpr guest::Function<0x00819f50, u32(u32, u32, u32)> dispatch_offset_0_00819f50;

u32 MessageWindow__set_text(gptr<MessageWindow> message_window, u32 source, u32 r2, gptr<MessageWindowSetTextArg3> arg3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    message_window->word_3c4 = r2;
    message_window->word_4e0 = arg3->word_0;
    message_window->word_4e4 = arg3->word_4;
    u32 r2_1 = arg3->word_8;
    message_window->word_4e8 = r2_1;
    start_message(message_window.addr() + 0x41cu, source, r2_1, arg3.addr());
    TextBox__layout_lines(message_window.addr() + 0x41cu);
    if (message_window->byte_4ec != 0) {
        MessageBox__fit_width(message_window.addr());
        MessageBox__place_cursor(message_window.addr());
        frame.release();
        return Layout__virtual_3(message_window.addr() + 0x270u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    return dispatch_offset_0_00819f50(message_window.addr(), *message_window_text_a, *message_window_text_b);
}

}  // namespace d_0031e594
GUEST_EXPORT(0x0031e594, d_0031e594::MessageWindow__set_text);

// f_0031e810: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Hides the layout's root pane group (clears its visible bit) and lays the layout out again, when it was shown.
namespace d_0031e810 {

struct __attribute__((packed)) Menu {
    u8 unknown_0[0x4ec];  // (not used here)
    u8 byte_4ec;
};
GUEST_OFFSET(Menu, byte_4ec, 0x4ec);

struct __attribute__((packed)) Child {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Child, byte_b7, 0xb7);

inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> LayoutObjectWithChild__forward_to_child;
inline constexpr guest::Function<0x00568c10, u32(u32, u32)> Layout__virtual_3;

u32 hide_all_pane(gptr<Menu> menu, u32 r1) {
    u32 r0_1 = menu->byte_4ec;
    if (r0_1 == 1u) {
        u32 r0_2 = menu.addr() + 0x270u;
        gptr<Child> child = gptr<Child>(LayoutObjectWithChild__forward_to_child(r0_2, 0x31e850u, guest::cpu()->r[2], guest::cpu()->r[3]));
        u32 r1_1 = u32(child->byte_b7) & 0xfeu;
        child->byte_b7 = u8(r1_1);
        r0_1 = Layout__virtual_3(menu.addr() + 0x270u, r1_1);
        r1 = guest::cpu()->r[1];
        menu->byte_4ec = 0;
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_0031e810
GUEST_EXPORT_FRAMED(0x0031e810, d_0031e810::hide_all_pane, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0031e8bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Attaches the layout at +0x270 to the layout system.
namespace d_0031e8bc {

inline constexpr guest::Function<0x001323bc, u32(u32)> read_global_975c20;
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32)> LayoutRenderer__draw_on_screen;

u32 attach_layout_270_b(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = read_global_975c20(r0);
    frame.release();
    return LayoutRenderer__draw_on_screen(r0_1, r0 + 0x270u, 1u);
}

}  // namespace d_0031e8bc
GUEST_EXPORT(0x0031e8bc, d_0031e8bc::attach_layout_270_b);

// f_0031eb20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Releases the window's layout parts (when loaded), layout and text; true.
namespace d_0031eb20 {

struct __attribute__((packed)) MessageWindow {
    u8 unknown_0[0x4ed];  // (not used here)
    u8 byte_4ed;
};
GUEST_OFFSET(MessageWindow, byte_4ed, 0x4ed);

inline constexpr guest::Function<0x00132364, u32(u32, u32, u32, u32)> release_layout_parts;
inline constexpr guest::Function<0x001323b4, u32(u32, u32, u32, u32)> layout_at_10_virtual_8;
inline constexpr guest::Function<0x005e2e04, u32(u32)> TextBox__unlock;

u32 MessageWindow__release(gptr<MessageWindow> message_window) {
    if (message_window->byte_4ed == 1u) {
        release_layout_parts(message_window.addr() + 0x24u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    layout_at_10_virtual_8(message_window.addr() + 0x270u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    TextBox__unlock(message_window.addr() + 0x41cu);
    return 1u;
}

}  // namespace d_0031eb20
GUEST_EXPORT_FRAMED(0x0031eb20, d_0031eb20::MessageWindow__release, 0x4010);  // pushes {r4, lr} first, as the original

// f_0031ec78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Loads an item select window's layout archive; marks it loaded.
namespace d_0031ec78 {

struct __attribute__((packed)) ItemSelectWindow {
    u8 unknown_0[0x4ed];  // (not used here)
    u8 byte_4ed;
};
GUEST_OFFSET(ItemSelectWindow, byte_4ed, 0x4ed);

inline constexpr guest::Function<0x00567e24, u32(u32, u32)> load_layout_archive;

u32 ItemSelectWindow__load_layout_2(gptr<ItemSelectWindow> window) {
    u32 loaded = load_layout_archive(window.addr() + 0x24u, 0x31ec9cu);
    u32 r1_1 = guest::cpu()->r[1];
    if (loaded != 0) {
        r1_1 = 1u;
        window->byte_4ed = u8(r1_1);
    }
    guest::cpu()->r[1] = r1_1;
    return loaded;
}

}  // namespace d_0031ec78
GUEST_EXPORT_FRAMED(0x0031ec78, d_0031ec78::ItemSelectWindow__load_layout_2, 0x4010);  // pushes {r4, lr} first, as the original

// f_0031ecbc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs an item name select window: an archive accessor, a layout with two animations and a
// 21-character trace renderer.
namespace d_0031ecbc {

struct __attribute__((packed)) Local_0031ecbc_r0_10 {
    u8 unknown_0[0x4ec];  // (not used here)
    u8 byte_4ec;
    u8 byte_4ed;
};
GUEST_OFFSET(Local_0031ecbc_r0_10, byte_4ec, 0x4ec);
GUEST_OFFSET(Local_0031ecbc_r0_10, byte_4ed, 0x4ed);

inline constexpr u32 vtable_ItemSelectNameWindow = 0x008f47a0u;
inline guest::global<u32, 0x0087943c> global_0087943c;
inline guest::global<u32, 0x00879440> global_00879440;
inline constexpr guest::Function<0x001207d8, u32(u32, u32, u32, u32)> ssys__ma__lyt__ArcResAcc__ArcResAcc_001207d8;
inline constexpr guest::Function<0x00125aec, u32(u32)> construct_layout_animation;
inline constexpr guest::Function<0x00125e3c, u32(u32)> Layout__Layout;
inline constexpr guest::Function<0x005e3128, u32(u32, u32)> script__RenderTrace__RenderTrace;

u32 ItemSelectNameWindow__ItemSelectNameWindow(gptr<ItemSelectNameWindow> item_select_name_window) {
    item_select_name_window->word_4 = 0;
    item_select_name_window->byte_8 = 0;
    u32 r2_1 = *global_00879440;
    item_select_name_window->word_c = *global_0087943c;
    item_select_name_window->word_10 = r2_1;
    item_select_name_window->word_14 = 0;
    item_select_name_window->byte_18 = 0;
    item_select_name_window->word_1c = 0;
    item_select_name_window->vtable = vtable_ItemSelectNameWindow;
    item_select_name_window->word_20 = 0;
    u32 ea_1 = ssys__ma__lyt__ArcResAcc__ArcResAcc_001207d8(item_select_name_window.addr() + 0x24u, vtable_ItemSelectNameWindow, r2_1, item_select_name_window.addr() + 0xcu) + 0x248u;
    *gptr<u32>(ea_1) = 0;
    u32 r0_5 = Layout__Layout(ea_1 + 4u) - 0x270u;
    *gptr<u32>(r0_5 + 0x3bcu) = 0;
    *gptr<u32>(r0_5 + 0x3c0u) = 0;
    *gptr<u32>(r0_5 + 0x3c4u) = 0;
    u32 ea_5 = r0_5 + 0x3c8u;
    *gptr<u32>(ea_5) = 0;
    u32 r0_6 = ea_5 + 4u;
    construct_layout_animation(r0_6);
    u32 r0_7 = r0_6 + 0x28u;
    construct_layout_animation(r0_7);
    gptr<Local_0031ecbc_r0_10> r0_10 = gptr<Local_0031ecbc_r0_10>(script__RenderTrace__RenderTrace(r0_7 + 0x28u, 0x15u) - 0x41cu);
    r0_10->byte_4ec = 0;
    r0_10->byte_4ed = 0;
    return r0_10.addr();
}

}  // namespace d_0031ecbc
GUEST_EXPORT_FRAMED(0x0031ecbc, d_0031ecbc::ItemSelectNameWindow__ItemSelectNameWindow, 0x4010);  // pushes {r4, lr} first, as the original

// f_0031f1a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts the state at +0x213c with the handler pair at 0x879538.
namespace d_0031f1a4 {

inline guest::global<u32, 0x00879538> global_00879538;
inline guest::global<u32, 0x0087953c> global_0087953c;
inline constexpr guest::Function<0x0081a058, u32(u32, u32, u32)> LayoutAnimator__play_g;

void start_state_879538(u32 r0) {
    LayoutAnimator__play_g(r0 + 0x213cu, *global_00879538, *global_0087953c);
}

}  // namespace d_0031f1a4
GUEST_EXPORT_FRAMED(0x0031f1a4, d_0031f1a4::start_state_879538, 0x4010);  // pushes {r4, lr} first, as the original

// f_0031f2bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts the state at +0x213c with the handler pair at 0x879540.
namespace d_0031f2bc {

inline guest::global<u32, 0x00879540> global_00879540;
inline guest::global<u32, 0x00879544> global_00879544;
inline constexpr guest::Function<0x0081a058, u32(u32, u32, u32)> LayoutAnimator__play_g;

void start_state_879540(u32 r0) {
    LayoutAnimator__play_g(r0 + 0x213cu, *global_00879540, *global_00879544);
}

}  // namespace d_0031f2bc
GUEST_EXPORT_FRAMED(0x0031f2bc, d_0031f2bc::start_state_879540, 0x4010);  // pushes {r4, lr} first, as the original

// f_0031f2dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets up the window's B button pane and its values.
namespace d_0031f2dc {

struct __attribute__((packed)) Local_0031f2dc_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0031f2dc_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_0031f2dc_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_0031f2dc_ea_2, word_8, 0x8);

struct __attribute__((packed)) Local_0031f2dc_r0_2 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_0031f2dc_r0_2, float_0, 0x0);
GUEST_OFFSET(Local_0031f2dc_r0_2, float_4, 0x4);

struct __attribute__((packed)) Local_0031f2dc_r7_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0031f2dc_r7_1, word_0, 0x0);
GUEST_OFFSET(Local_0031f2dc_r7_1, word_4, 0x4);
GUEST_OFFSET(Local_0031f2dc_r7_1, word_8, 0x8);

inline guest::global<u32, 0x008795b4> global_008795b4;
inline guest::global<u32, 0x008795bc> global_008795bc;
inline guest::global<u32, 0x008795c0> global_008795c0;
inline guest::global<u32, 0x008795c4> global_008795c4;
inline guest::global<u32, 0x008795d0> global_008795d0;
inline guest::global<u32, 0x008795d4> global_008795d4;
inline guest::global<u32, 0x008795d8> global_008795d8;
inline guest::global<u32, 0x008795dc> global_008795dc;
inline guest::global<u32, 0x008795e4> global_008795e4;
inline guest::global<u32, 0x008795e8> global_008795e8;
inline guest::global<u32, 0x008795ec> global_008795ec;
inline guest::global<u32, 0x008795f0> global_008795f0;
inline guest::global<u32, 0x008795f4> global_008795f4;
inline guest::global<u32, 0x008795f8> global_008795f8;
inline constexpr guest::Function<0x0022c390, u32(u32, u32, u32, u32)> MapIcon__set;
inline constexpr guest::Function<0x0022c48c, u32(u32, u32, u32)> MapIcon__set_position;
inline constexpr guest::Function<0x002b6a00, u32(u32, u32)> set_node_values;
inline constexpr guest::Function<0x0056878c, u32(u32, u32)> LayoutObjectWithChild__forward_to_child;

struct __attribute__((packed)) LetterDragItemWindowSetupButtonFrame {
    u32 child;
    u32 word_4;
    float float_8;
    float float_c;
    float float_10;
    u32 word_14;
    float float_18;
    u8 unknown_1c[0x10];  // (not read or written by name)
};
GUEST_OFFSET(LetterDragItemWindowSetupButtonFrame, child, 0x0);
GUEST_OFFSET(LetterDragItemWindowSetupButtonFrame, word_4, 0x4);
GUEST_OFFSET(LetterDragItemWindowSetupButtonFrame, float_8, 0x8);
GUEST_OFFSET(LetterDragItemWindowSetupButtonFrame, float_c, 0xc);
GUEST_OFFSET(LetterDragItemWindowSetupButtonFrame, float_10, 0x10);
GUEST_OFFSET(LetterDragItemWindowSetupButtonFrame, word_14, 0x14);
GUEST_OFFSET(LetterDragItemWindowSetupButtonFrame, float_18, 0x18);
GUEST_SIZE(LetterDragItemWindowSetupButtonFrame, 0x2c);

void LetterDragItemWindow__setup_button(gptr<LetterDragItemWindow> letter_drag_item_window, u32 r1, float S0_unused, float S1_unused, float S2, float S3, float S4, float S5, float S6) {
    guest::StackFrameOf<LetterDragItemWindowSetupButtonFrame> frame;  // the original's stack frame
    u32 r0_1 = *global_008795b4;
    u32 r2_1 = *global_008795bc;
    u32 r3_1 = *global_008795c0;
    u32 r12_1 = *global_008795c4;
    float S0_1 = 1.3478015e-38f;
    float S1_1 = std::bit_cast<float>(*global_008795d0);
    gptr<Local_0031f2dc_r7_1> r7_1 = gptr<Local_0031f2dc_r7_1>(frame.at(0x20).addr());
    frame->child = r0_1;
    gptr<Local_0031f2dc_ea_2> ea_2 = gptr<Local_0031f2dc_ea_2>(frame.at(8).addr());
    ea_2->word_0 = r2_1;
    ea_2->word_4 = r3_1;
    ea_2->word_8 = r12_1;
    gptr<Local_0031f2dc_r0_2> r0_2 = gptr<Local_0031f2dc_r0_2>(frame.at(0x18).addr());
    r0_2->float_0 = S0_1;
    r0_2->float_4 = S1_1;
    u32 r0_3 = *global_008795d4;
    u32 r2_2 = *global_008795d8;
    u32 r3_2 = *global_008795dc;
    frame->word_14 = r1;
    frame->word_4 = letter_drag_item_window.addr() + 0x258u;
    r7_1->word_0 = r0_3;
    r7_1->word_4 = r2_2;
    r7_1->word_8 = r3_2;
    u32 r0_4 = letter_drag_item_window.addr() + 0x2308u;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    MapIcon__set(r0_4, frame.at(0).addr(), r2_2, r3_2);
    letter_drag_item_window->byte_2445 = 0;
    float S0_2 = 0.0f;
    float S1_2 = std::bit_cast<float>(*global_008795e4);
    float S2_1 = std::bit_cast<float>(*global_008795e8);
    float S3_1 = std::bit_cast<float>(*global_008795ec);
    float S4_1 = std::bit_cast<float>(*global_008795f0);
    float S5_1 = std::bit_cast<float>(*global_008795f4);
    float S6_1 = std::bit_cast<float>(*global_008795f8);
    frame->child = std::bit_cast<u32>(S0_2);
    frame->word_4 = std::bit_cast<u32>(S1_2);
    frame->float_8 = S2_1;
    frame->float_c = S3_1;
    frame->float_10 = S4_1;
    frame->word_14 = std::bit_cast<u32>(S5_1);
    frame->float_18 = S6_1;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    guest::cpu()->s[2] = S2_1;
    guest::cpu()->s[3] = S3_1;
    guest::cpu()->s[4] = S4_1;
    guest::cpu()->s[5] = S5_1;
    guest::cpu()->s[6] = S6_1;
    u32 child = LayoutObjectWithChild__forward_to_child(letter_drag_item_window.addr() + 0x258u, 0x879638u);
    frame->child = child;
    float S0_3 = 0.0f;
    frame->float_8 = S0_3;
    u32 r0_7 = letter_drag_item_window.addr() + 0x21d8u;
    frame->float_c = S0_3;
    guest::cpu()->s[0] = S0_3;
    set_node_values(r0_7, frame.at(0).addr());
    MapIcon__set_position(r0_4, r0_7, 0u);
    letter_drag_item_window->word_22a4 = 0x10003fb;
    letter_drag_item_window->byte_22b2 = 1;
    letter_drag_item_window->word_22a8 = 0x10003fbu & ~1u;
    letter_drag_item_window->byte_22b3 = 1;
    letter_drag_item_window->byte_22b4 = 1;
    letter_drag_item_window->byte_2447 = 0;
}

}  // namespace d_0031f2dc
GUEST_EXPORT_FRAMED(0x0031f2dc, d_0031f2dc::LetterDragItemWindow__setup_button, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0031f480: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a letter item drag window: a letter drag window base with a parts drag icon node and group.
namespace d_0031f480 {

struct __attribute__((packed)) Local_0031f480_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0031f480_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_0031f480_ea_3, word_4, 0x4);
GUEST_OFFSET(Local_0031f480_ea_3, word_8, 0x8);

struct __attribute__((packed)) Local_0031f480_ea_4 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0031f480_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_0031f480_ea_4, word_4, 0x4);
GUEST_OFFSET(Local_0031f480_ea_4, word_8, 0x8);

struct __attribute__((packed)) Local_0031f480_r1_1 {
    u8 unknown_0[0x18];  // (not used here)
    u8 byte_18;
    u8 unknown_19[0x3];  // (not used here)
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(Local_0031f480_r1_1, byte_18, 0x18);
GUEST_OFFSET(Local_0031f480_r1_1, word_1c, 0x1c);
GUEST_OFFSET(Local_0031f480_r1_1, word_20, 0x20);

inline constexpr u32 vtable_LetterDragItemWindow = 0x008f47b4u;
inline constexpr u32 vtable_LetterDragItemWindow_at_213c = 0x008f47d8u;
inline guest::global<u32, 0x00879568> global_00879568;
inline guest::global<u32, 0x0087956c> global_0087956c;
inline constexpr guest::Function<0x00125aec, u32(u32)> construct_layout_animation;
inline constexpr guest::Function<0x0022c53c, u32(u32)> DragIconGroup__DragIconGroup;
inline constexpr guest::Function<0x002d00bc, u32(u32)> PartsDragIconNode__PartsDragIconNode;
inline constexpr guest::Function<0x00320614, u32(u32, u32, u32, u32)> LetterDragWindowBase__LetterDragWindowBase;

u32 LetterDragItemWindow__LetterDragItemWindow(u32 letter_drag_item_window, u32 r1_unused, u32 r2, u32 r3) {
    u32 r1 = 0;
    u32 r0_1 = LetterDragWindowBase__LetterDragWindowBase(letter_drag_item_window, r1, r2, r3);
    gptr<Local_0031f480_r1_1> r1_1 = gptr<Local_0031f480_r1_1>(r0_1 + 0x213cu);
    *gptr<u32>(r1_1.addr() + 4u) = 0;
    *gptr<u8>(r1_1.addr() + 8u) = 0;
    u32 r2_1 = *global_00879568;
    u32 r3_1 = *global_0087956c;
    gptr<Local_0031f480_ea_3> ea_3 = gptr<Local_0031f480_ea_3>(r0_1 + 0x2148u);
    ea_3->word_0 = r2_1;
    ea_3->word_4 = r3_1;
    ea_3->word_8 = 0;
    r1_1->byte_18 = 0;
    r1_1->word_1c = 0;
    r1_1->word_20 = 0;
    *gptr<u32>(r0_1) = vtable_LetterDragItemWindow;
    *gptr<u32>(r0_1 + 0x213cu) = vtable_LetterDragItemWindow_at_213c;
    u32 r0_2 = r0_1 + 0x2160u;
    construct_layout_animation(r0_2);
    u32 r0_3 = r0_2 + 0x28u;
    construct_layout_animation(r0_3);
    u32 r0_4 = r0_3 + 0x28u;
    construct_layout_animation(r0_4);
    u32 parts_drag_icon_node = r0_4 + 0x28u;
    PartsDragIconNode__PartsDragIconNode(parts_drag_icon_node);
    u32 drag_icon_group = parts_drag_icon_node + 0x130u;
    DragIconGroup__DragIconGroup(drag_icon_group);
    u32 r0_7 = drag_icon_group - 0x2308u;
    *gptr<u8>(r0_7 + 0x2448u) = 0;
    gptr<Local_0031f480_ea_4> ea_4 = gptr<Local_0031f480_ea_4>(r0_7 + 4u);
    ea_4->word_0 = 0x31f530;
    ea_4->word_4 = 0x31f540;
    ea_4->word_8 = 0x14;
    return r0_7;
}

}  // namespace d_0031f480
GUEST_EXPORT_FRAMED(0x0031f480, d_0031f480::LetterDragItemWindow__LetterDragItemWindow, 0x4010);  // pushes {r4, lr} first, as the original

// f_0031f55c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys a letter item drag window: its icon groups and node, drag icon control, layout and archive reader.
namespace d_0031f55c {

inline constexpr u32 vtable_DragIconGroup = 0x008ee248u;
inline constexpr u32 vtable_DragIconGroup_at_c = 0x008ee258u;
inline constexpr u32 vtable_DragIconControl_rec = 0x008f08acu;
inline constexpr u32 vtable_LetterDragItemWindow = 0x008f47b4u;
inline constexpr u32 vtable_LetterDragItemWindow_at_213c = 0x008f47d8u;
inline constexpr u32 vtable_LetterDragWindowBase = 0x008f4828u;
inline constexpr guest::Function<0x001ff9d8, u32(u32)> DragIconNode__destructor;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;
inline constexpr guest::Function<0x002f7710, u32(u32, u32)> destroy_button_action_control;
inline constexpr guest::Function<0x00567ef0, u32(u32)> ssys__ma__lyt__ArcResAccReader__destructor;
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> destroy_animation;
inline constexpr guest::Function<0x005bf744, u32(u32)> Layout__destructor;

u32 LetterDragItemWindow__destructor(gptr<LetterDragWindowBase> letter_drag_window_base) {
    letter_drag_window_base->vtable = vtable_LetterDragItemWindow;
    *gptr<u32>(letter_drag_window_base.addr() + 0x213cu) = vtable_LetterDragItemWindow_at_213c;
    letter_drag_window_base->drag_icon_group_vtable_2308 = vtable_DragIconGroup;
    letter_drag_window_base->drag_icon_group_vtable_2314 = vtable_DragIconGroup_at_c;
    u32 r0_1 = letter_drag_window_base.addr() + 0x241cu;
    destroy_animation(r0_1, vtable_LetterDragItemWindow, vtable_LetterDragItemWindow_at_213c, 0x213cu);
    destroy_animation(r0_1 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    destroy_animation(r0_1 - 0x50u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    destroy_animation(r0_1 - 0x78u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    destroy_animation(r0_1 - 0xa0u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    destroy_animation(r0_1 - 0xc8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    destroy_animation(r0_1 - 0xf4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    DragIconNode__destructor(r0_1 - 0x244u);
    destroy_animation(r0_1 - 0x26cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    destroy_animation(r0_1 - 0x294u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    destroy_animation(r0_1 - 0x2bcu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    letter_drag_window_base->vtable = vtable_LetterDragWindowBase;
    letter_drag_window_base->drag_icon_control_vtable = vtable_DragIconControl_rec;
    destroy_button_action_control(r0_1 - 0x400u, vtable_DragIconControl_rec);
    letter_drag_window_base->drag_icon_group_vtable_1ee8 = vtable_DragIconGroup_at_c;
    letter_drag_window_base->drag_icon_group_vtable = vtable_DragIconGroup;
    destroy_animation(r0_1 - 0x42cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    destroy_animation(r0_1 - 0x454u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    destroy_animation(r0_1 - 0x47cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    destroy_animation(r0_1 - 0x4a4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    destroy_animation(r0_1 - 0x4ccu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    destroy_animation(r0_1 - 0x4f4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    destroy_animation(r0_1 - 0x520u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    destroy_array_elements(r0_1 - 0x2048u, 0x2e3854u, 0x2b4u, 0xau);
    destroy_animation(r0_1 - 0x2074u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return ssys__ma__lyt__ArcResAccReader__destructor(Layout__destructor(r0_1 - 0x21c4u) - 0x248u) - 0x10u;
}

}  // namespace d_0031f55c
GUEST_EXPORT_FRAMED(0x0031f55c, d_0031f55c::LetterDragItemWindow__destructor, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0031f69c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the flag of the entry for the key (0x2b4 bytes each) and updates its node.
namespace d_0031f69c {

inline constexpr guest::Function<0x002e333c, u32(u32, u32)> LetterEntry__set_visible;
inline constexpr guest::Function<0x00723fa0, u32(u32, u32, u32, u32)> Page10__offset;

void set_entry_flag_4ad(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = Page10__offset(r0, r1, r2, guest::cpu()->r[3]);
    LetterEntry__set_visible(r0 + r0_1 * 0x2b4u + 0x3d4u, r2);
    u32 r0_3 = Page10__offset(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u8>(r0 + r0_3 * 0x2b4u + 0x4adu) = u8(r2);
    guest::cpu()->r[1] = 0xadu;
}

}  // namespace d_0031f69c
GUEST_EXPORT_FRAMED(0x0031f69c, d_0031f69c::set_entry_flag_4ad, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0031f7f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Draws a letter post drag window's layout on the lower screen.
namespace d_0031f7f0 {

inline constexpr guest::Function<0x001323bc, u32(u32)> read_global_975c20;
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> Layout__virtual_3;
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32)> LayoutRenderer__draw_on_screen;

u32 LetterDragPostWindow__draw(u32 letter_drag_post_window, u32 r1_unused, u32 r2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r1 = 0;
    u32 r0_3 = read_global_975c20(Layout__virtual_3(letter_drag_post_window + 0x258u, r1, r2, guest::cpu()->r[3]));
    frame.release();
    return LayoutRenderer__draw_on_screen(r0_3, letter_drag_post_window + 0x258u, 1u);
}

}  // namespace d_0031f7f0
GUEST_EXPORT(0x0031f7f0, d_0031f7f0::LetterDragPostWindow__draw);

// f_0031fa14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// True when the state at +0x213c runs the handler pair at 0x879558.
namespace d_0031fa14 {

inline guest::global<u32, 0x00879558> global_00879558;
inline guest::global<u32, 0x0087955c> global_0087955c;
inline constexpr guest::Function<0x0081a168, u32(u32, u32, u32)> LayoutAnimator__play_f;

u32 is_state_879558(u32 r0) {
    return LayoutAnimator__play_f(r0 + 0x213cu, *global_00879558, *global_0087955c);
}

}  // namespace d_0031fa14
GUEST_EXPORT_FRAMED(0x0031fa14, d_0031fa14::is_state_879558, 0x4010);  // pushes {r4, lr} first, as the original

// f_0031fa34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Releases a letter post drag window (as its base).
namespace d_0031fa34 {

inline constexpr guest::Function<0x00320450, u32(u32, u32, u32, u32)> LetterDragWindowBase__release;

u32 LetterDragPostWindow__release() {
    return LetterDragWindowBase__release(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0031fa34
GUEST_EXPORT(0x0031fa34, d_0031fa34::LetterDragPostWindow__release);

// f_0031faf4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// True when the state at +0x213c runs the handler pair at 0x879560.
namespace d_0031faf4 {

inline guest::global<u32, 0x00879560> global_00879560;
inline guest::global<u32, 0x00879564> global_00879564;
inline constexpr guest::Function<0x0081a168, u32(u32, u32, u32)> LayoutAnimator__play_f;

u32 is_state_879560(u32 r0) {
    return LayoutAnimator__play_f(r0 + 0x213cu, *global_00879560, *global_00879564);
}

}  // namespace d_0031faf4
GUEST_EXPORT_FRAMED(0x0031faf4, d_0031faf4::is_state_879560, 0x4010);  // pushes {r4, lr} first, as the original

// f_0031fb14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a letter post drag window: a letter drag window base with three animations.
namespace d_0031fb14 {

struct __attribute__((packed)) Local_0031fb14_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0031fb14_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_0031fb14_ea_3, word_4, 0x4);
GUEST_OFFSET(Local_0031fb14_ea_3, word_8, 0x8);

struct __attribute__((packed)) Local_0031fb14_ea_5 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0031fb14_ea_5, word_0, 0x0);
GUEST_OFFSET(Local_0031fb14_ea_5, word_4, 0x4);

struct __attribute__((packed)) Local_0031fb14_r1_1 {
    u8 unknown_0[0x18];  // (not used here)
    u8 byte_18;
    u8 unknown_19[0x3];  // (not used here)
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(Local_0031fb14_r1_1, byte_18, 0x18);
GUEST_OFFSET(Local_0031fb14_r1_1, word_1c, 0x1c);
GUEST_OFFSET(Local_0031fb14_r1_1, word_20, 0x20);

inline constexpr u32 vtable_LetterDragPostWindow = 0x008f47ecu;
inline constexpr u32 vtable_LetterDragPostWindow_at_213c = 0x008f4814u;
inline guest::global<u32, 0x00879570> global_00879570;
inline guest::global<u32, 0x00879574> global_00879574;
inline constexpr guest::Function<0x00125aec, u32(u32)> construct_layout_animation;
inline constexpr guest::Function<0x00320614, u32(u32, u32, u32, u32)> LetterDragWindowBase__LetterDragWindowBase;

u32 LetterDragPostWindow__LetterDragPostWindow(u32 letter_drag_post_window, u32 r1_unused, u32 r2, u32 r3) {
    u32 r1 = 0;
    u32 r0_1 = LetterDragWindowBase__LetterDragWindowBase(letter_drag_post_window, r1, r2, r3);
    gptr<Local_0031fb14_r1_1> r1_1 = gptr<Local_0031fb14_r1_1>(r0_1 + 0x213cu);
    *gptr<u32>(r1_1.addr() + 4u) = 0;
    *gptr<u8>(r1_1.addr() + 8u) = 0;
    u32 r2_1 = *global_00879570;
    u32 r3_1 = *global_00879574;
    gptr<Local_0031fb14_ea_3> ea_3 = gptr<Local_0031fb14_ea_3>(r0_1 + 0x2148u);
    ea_3->word_0 = r2_1;
    ea_3->word_4 = r3_1;
    ea_3->word_8 = 0;
    r1_1->byte_18 = 0;
    r1_1->word_1c = 0;
    r1_1->word_20 = 0;
    *gptr<u32>(r0_1) = vtable_LetterDragPostWindow;
    *gptr<u32>(r0_1 + 0x213cu) = vtable_LetterDragPostWindow_at_213c;
    u32 r0_2 = r0_1 + 0x2160u;
    construct_layout_animation(r0_2);
    u32 r0_3 = r0_2 + 0x28u;
    construct_layout_animation(r0_3);
    u32 r0_4 = r0_3 + 0x28u;
    construct_layout_animation(r0_4);
    u32 r0_5 = r0_4 - 0x21b0u;
    *gptr<u32>(r0_5 + 4u) = 0x31fbac;
    gptr<Local_0031fb14_ea_5> ea_5 = gptr<Local_0031fb14_ea_5>(r0_5 + 8u);
    ea_5->word_0 = 0x31fbb4;
    ea_5->word_4 = 0;
    guest::cpu()->r[1] = 0x31fbb4u;
    return r0_5;
}

}  // namespace d_0031fb14
GUEST_EXPORT_FRAMED(0x0031fb14, d_0031fb14::LetterDragPostWindow__LetterDragPostWindow, 0x4010);  // pushes {r4, lr} first, as the original

// f_0031fbcc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys a letter post drag window: its animations, drag icon control and group, buttons, layout and
// archive reader.
namespace d_0031fbcc {

inline constexpr u32 vtable_DragIconGroup = 0x008ee248u;
inline constexpr u32 vtable_DragIconGroup_at_c = 0x008ee258u;
inline constexpr u32 vtable_DragIconControl_rec = 0x008f08acu;
inline constexpr u32 vtable_LetterDragPostWindow = 0x008f47ecu;
inline constexpr u32 vtable_LetterDragPostWindow_at_213c = 0x008f4814u;
inline constexpr u32 vtable_LetterDragWindowBase = 0x008f4828u;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;
inline constexpr guest::Function<0x002f7710, u32(u32, u32)> destroy_button_action_control;
inline constexpr guest::Function<0x00567ef0, u32(u32)> ssys__ma__lyt__ArcResAccReader__destructor;
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> destroy_animation;
inline constexpr guest::Function<0x005bf744, u32(u32)> Layout__destructor;

u32 LetterDragPostWindow__destructor_b(gptr<LetterDragWindowBase> letter_drag_window_base) {
    letter_drag_window_base->vtable = vtable_LetterDragPostWindow;
    *gptr<u32>(letter_drag_window_base.addr() + 0x213cu) = vtable_LetterDragPostWindow_at_213c;
    u32 r0_1 = letter_drag_window_base.addr() + 0x21b0u;
    destroy_animation(r0_1, vtable_LetterDragPostWindow, vtable_LetterDragPostWindow_at_213c, 0x213cu);
    destroy_animation(r0_1 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    destroy_animation(r0_1 - 0x50u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    letter_drag_window_base->vtable = vtable_LetterDragWindowBase;
    letter_drag_window_base->drag_icon_control_vtable = vtable_DragIconControl_rec;
    destroy_button_action_control(r0_1 - 0x194u, vtable_DragIconControl_rec);
    letter_drag_window_base->drag_icon_group_vtable_1ee8 = vtable_DragIconGroup_at_c;
    letter_drag_window_base->drag_icon_group_vtable = vtable_DragIconGroup;
    destroy_animation(r0_1 - 0x1c0u, vtable_DragIconGroup_at_c, vtable_DragIconGroup, guest::cpu()->r[3]);
    destroy_animation(r0_1 - 0x1e8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    destroy_animation(r0_1 - 0x210u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    destroy_animation(r0_1 - 0x238u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    destroy_animation(r0_1 - 0x260u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    destroy_animation(r0_1 - 0x288u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    destroy_animation(r0_1 - 0x2b4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    destroy_array_elements(r0_1 - 0x1ddcu, 0x2e3854u, 0x2b4u, 0xau);
    destroy_animation(r0_1 - 0x1e08u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return ssys__ma__lyt__ArcResAccReader__destructor(Layout__destructor(r0_1 - 0x1f58u) - 0x248u) - 0x10u;
}

}  // namespace d_0031fbcc
GUEST_EXPORT_FRAMED(0x0031fbcc, d_0031fbcc::LetterDragPostWindow__destructor_b, 0x4010);  // pushes {r4, lr} first, as the original

// f_0031fcc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Moves the window's drag icon (+0x278) from its list (+0x3d0) into `list` (when not null).
namespace d_0031fcc4 {

struct __attribute__((packed)) MoveDragIconToListArg0 {
    u8 unknown_0[0x278];  // (not used here)
    u32 icon;
    u8 unknown_27c[0x154];  // (not used here)
    u32 list;
};
GUEST_OFFSET(MoveDragIconToListArg0, icon, 0x278);
GUEST_OFFSET(MoveDragIconToListArg0, list, 0x3d0);

inline constexpr guest::Function<0x004b6d74, u32(u32, u32)> DragIconList__add;
inline constexpr guest::Function<0x004b6dc8, u32(u32, u32)> DragIconList__remove;

void move_drag_icon_to_list(gptr<MoveDragIconToListArg0> arg0, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 list = arg0->list;
    if (list != 0) {
        DragIconList__remove(list, arg0->icon);
    }
    arg0->list = r1;
    if (r1 != 0) {
        u32 icon = arg0->icon;
        frame.release();
        DragIconList__add(r1, icon);
        return;
    }
}

}  // namespace d_0031fcc4
GUEST_EXPORT(0x0031fcc4, d_0031fcc4::move_drag_icon_to_list);

// f_0031fcfc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the flag (+0x12d) of entry `index` among the 10 shown from +0xc (0x2b4 bytes each, +0x3d4); other indices set
// the first.
namespace d_0031fcfc {

struct __attribute__((packed)) ItemPage {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(ItemPage, word_c, 0xc);


u32 ItemPage__set_entry_flag(gptr<ItemPage> item_page, u32 r1, u32 r2) {
    u32 r3_1 = item_page->word_c;
    if (r3_1 <= r1) {
        if (r1 < r3_1 + 0xau) {
            u32 r1_1 = (r1 - r3_1) * 0xadu;
            u32 r0_1 = item_page.addr() + (r1_1 << 2) + 0x3d4u;
            *gptr<u8>(r0_1 + 0x12du) = u8(r2);
            guest::cpu()->r[1] = r1_1;
            return r0_1;
        }
    }
    u32 r0_2 = item_page.addr() + 0x3d4u;
    *gptr<u8>(r0_2 + 0x12du) = u8(r2);
    guest::cpu()->r[1] = r1;
    return r0_2;
}

}  // namespace d_0031fcfc
GUEST_EXPORT_FRAMED(0x0031fcfc, d_0031fcfc::ItemPage__set_entry_flag, 0x10);  // pushes {r4} first, as the original

// f_0031fd44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls virtual 24 of entry `index` of the shown page.
namespace d_0031fd44 {

struct __attribute__((packed)) ItemPage {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(ItemPage, word_c, 0xc);


u32 ItemPage__entry_virtual_24(gptr<ItemPage> item_page, u32 r1) {
    u32 ea_1 = item_page.addr() + (r1 - item_page->word_c) * 0x2b4u + 0x3d4u;
    u32 r1_1 = *gptr<u32>(*gptr<u32>(ea_1) + 0x60u);
    // virtual function 24 of ea_1
    return guest::call_address<u32>(r1_1, ea_1, r1_1, 0xadu, guest::cpu()->r[3]);
}

}  // namespace d_0031fd44
GUEST_EXPORT(0x0031fd44, d_0031fd44::ItemPage__entry_virtual_24);

// f_0031fd64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Marks the page changed (+0x201b) and enables all 10 entries, or (when off) restores each from its saved flag.
namespace d_0031fd64 {

struct __attribute__((packed)) ItemPage {
    u8 unknown_0[0x201b];  // (not used here)
    u8 byte_201b;
};
GUEST_OFFSET(ItemPage, byte_201b, 0x201b);


void ItemPage__set_all_enabled(gptr<ItemPage> item_page, u32 r1) {
    u32 r0 = item_page.addr();
    item_page->byte_201b = 1;
    u32 i = 0u;
    do {
        u32 r3_1 = r1 == 0 ? 1u : u32(*gptr<s8>(r0 + i * 0x2b4u + 0x680u));
        u32 r12_1 = i * 0xadu;
        i += 1u;
        *gptr<u8>(r0 + (r12_1 << 2) + 0x501u) = u8(r3_1);
        guest::preempt();
    } while (i < 0xau);
}

}  // namespace d_0031fd64
GUEST_EXPORT(0x0031fd64, d_0031fd64::ItemPage__set_all_enabled);

// f_0031fdb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0031fdb8 {

struct __attribute__((packed)) Local_0031fdb8_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0031fdb8_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_0031fdb8_ea_4, word_4, 0x4);

struct __attribute__((packed)) Local_0031fdb8_r4_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0031fdb8_r4_2, word_0, 0x0);
GUEST_OFFSET(Local_0031fdb8_r4_2, word_4, 0x4);

inline constexpr u32 vtable_script__WordFix_33u__rec = 0x00909f18u;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x002fcaf4, u32(u32)> Item__is_empty;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32)> script__construct_word_ptr;
inline constexpr guest::Function<0x005d4a78, u32(u32, u32, u32, u32)> call_virtual_slot_2;
inline constexpr guest::Function<0x005e34c4, u32(u32, u32, u32, u32)> MessageRef__set;
inline constexpr guest::Function<0x005e4988, u32(u32, u32, u32, u32)> store_byte_constant_pack_0x4_005e4988;
inline constexpr guest::Function<0x005e4994, u32(u32, u32, u32, u32)> script__CapitalTopEngine__CapitalTopEngine_005e4994;
inline constexpr guest::Function<0x005e49c0, u32(u32, u32, u32)> MessageChoice__setup;
inline constexpr guest::Function<0x005e8498, u32(u32, u32)> DialogBox__virtual_5;
inline constexpr guest::Function<0x005f4bfc, u32(u32)> construct_script_word;
inline constexpr guest::Function<0x00758204, u32(u32, u32, u32, u32)> script__WordFix_9u___WordFix_00758204;
inline constexpr guest::Function<0x00758dd4, u32(u32)> masked_byte_758dd4;

struct __attribute__((packed)) SetupItemChoiceDialogFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0xc4];  // (not read or written by name)
};
GUEST_OFFSET(SetupItemChoiceDialogFrame, word_0, 0x0);
GUEST_OFFSET(SetupItemChoiceDialogFrame, word_4, 0x4);
GUEST_OFFSET(SetupItemChoiceDialogFrame, word_8, 0x8);
GUEST_OFFSET(SetupItemChoiceDialogFrame, word_c, 0xc);
GUEST_SIZE(SetupItemChoiceDialogFrame, 0xd4);

u32 setup_item_choice_dialog(u32 r0, u32 r1) {
    guest::StackFrameOf<SetupItemChoiceDialogFrame> frame;  // the original's stack frame
    u32 res_1 = 0;
    u32 r3_5 = 0;
    u32 r8 = r0;
    u32 r5 = r1;
    u32 r6 = 0u;
    for_each_element(frame.at(0x68).addr(), 0x5e35dcu, 0x20u, 3u);
    u32 r0_2 = frame.at(0xc).addr();
    script__construct_word_ptr(r0_2, frame.at(0x24).addr(), 0x21u);
    u32 r7 = vtable_script__WordFix_33u__rec;
    *gptr<u32>(r0_2) = r7;
    u32 r0_3 = r0_2 + 0xcu;
    construct_script_word(r0_3);
    u32 r4_1 = r0_3 - 0xcu;
    clear_aligned(r0_3 + 0xcu, 0x42u);
    r1 = 0x8906ecu;
    r0 = r4_1 + 0x18u;
    *gptr<u16>(r4_1 + 0x18u) = *gptr<u16>(r1);
    u32 r2 = 0x10u;
    do {
        u32 r3_4 = *gptr<u16>(r1);
        res_1 = r2 - 1u;
        r2 = res_1;
        *gptr<u16>(r0 + 2u) = u16(r3_4);
        r3_5 = *gptr<u16>(r1);
        u32 ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r3_5);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    script__WordFix_9u___WordFix_00758204(r5, frame.at(0xc).addr(), r2, r3_5);
    DialogBox__virtual_5(r8, frame.at(0xc).addr());
    gptr<Local_0031fdb8_r4_2> r4_2 = gptr<Local_0031fdb8_r4_2>(frame.at(4).addr());
    frame->word_0 = 0;
    r4_2->word_0 = 0;
    r4_2->word_4 = 7;
    MessageRef__set(frame.at(0x68).addr(), 0x87964cu, 0x36u, 0u);
    u32 r4_3 = r6 + 1u;
    u32 is_empty = Item__is_empty(r5 + 0x274u);
    r6 = frame.at(0x68).addr();
    if (is_empty != 0) {
        if ((u32(*gptr<u8>(r5 + 0x272u)) & 0x80u) == 0) {
            if (masked_byte_758dd4(r5) != 1u) {
                goto L_31fed8;
            }
            if ((u32(*gptr<u8>(r5 + 0x272u)) & 0x80u) == 0) {
                goto L_31fef8;
            }
        }
        if ((u32(*gptr<u8>(r5 + 0x272u)) & 8u) == 0) {
            goto L_31fef8;
        }
L_31fed8:;
        frame->word_8 = 7;
        frame->word_0 = 0;
        frame->word_4 = 1;
        MessageRef__set(r6 + (r4_3 << 5), 0x87964cu, 0x37u, 0u);
        r4_3 += 1u;
    }
L_31fef8:;
    frame->word_0 = 0;
    gptr<Local_0031fdb8_ea_4> ea_4 = gptr<Local_0031fdb8_ea_4>(frame.at(4).addr());
    ea_4->word_0 = 2;
    ea_4->word_4 = 1;
    MessageRef__set(r6 + (r4_3 << 5), 0x87964cu, 0x22u, 0u);
    r5 = r4_3 + 1u;
    MessageChoice__setup(r8, r5, r4_3);
    u32 r3 = guest::cpu()->r[3];
    u32 i = 0u;
    if (s32(r5) > 0) {
        do {
            script__CapitalTopEngine__CapitalTopEngine_005e4994(r8, i, r6 + (i << 5), r3);
            r3 = guest::cpu()->r[3];
            i += 1u;
            guest::preempt();
        } while (s32(r5) > s32(i));
    }
    store_byte_constant_pack_0x4_005e4988(r8, guest::cpu()->r[1], guest::cpu()->r[2], r3);
    call_virtual_slot_2(r8, 0u, 0u, 0u);
    frame->word_c = r7;
    return destroy_array_elements(frame.at(0x68).addr(), 0x5e3618u, 0x20u, 3u);
}

}  // namespace d_0031fdb8
GUEST_EXPORT_FRAMED(0x0031fdb8, d_0031fdb8::setup_item_choice_dialog, 0x4ff0);  // pushes {i, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_0031ffbc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the page's changed flag (+0x201b).
namespace d_0031ffbc {

struct __attribute__((packed)) ItemPage {
    u8 unknown_0[0x201b];  // (not used here)
    u8 byte_201b;
};
GUEST_OFFSET(ItemPage, byte_201b, 0x201b);


void ItemPage__set_changed(gptr<ItemPage> item_page, u32 r1) {
    item_page->byte_201b = u8(r1);
}

}  // namespace d_0031ffbc
GUEST_EXPORT(0x0031ffbc, d_0031ffbc::ItemPage__set_changed);
