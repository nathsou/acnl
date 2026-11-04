// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen. Hexadecimal constants are the original's
// (addresses, offsets, sizes and ids as the game has them).
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_005d03f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When the store opens: deletes each existing entry of the local table, then ends the operation.
namespace d_005d03f0 {

inline constexpr u32 net_store_address = 0x009535e4u;
inline constexpr guest::Function<0x0050d698, u32(u32)> script__WordFix_64u___WordFix_0050d698;
inline constexpr guest::Function<0x0050d8f0, u32(u32, u32, u32, u32)> NetStore__finish;
inline constexpr guest::Function<0x0050dd68, u32(u32, u32, u32)> NetStore__delete_slot;
inline constexpr guest::Function<0x0071a084, u32(u32, u32, u32, u32)> save_flag_7190c;
inline constexpr guest::Function<0x00728128, u32(u32, u32, u32)> NetStore__slot_state;

void NetStore__clear_local_slots(u32 net_store, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    if (save_flag_7190c(net_store, r1, r2, guest::cpu()->r[3]) != 0) {
        u32 r0_2 = script__WordFix_64u___WordFix_0050d698(0u);
        if (r0_2 == 0) {
            u32 r5 = net_store_address;
            u32 r4 = *gptr<u32>(*gptr<u32>(r5) + 0x210u);
            if (r4 != 0) {
                do {
                    r4 -= 1u;
                    r0_2 = NetStore__slot_state(*gptr<u32>(r5), 0u, r4);
                    if (r0_2 == 1u) {
                        r0_2 = *gptr<u32>(r5);
                        NetStore__delete_slot(r0_2, 0u, r4);
                    }
                    guest::preempt();
                } while (r4 != 0);
            }
        }
        frame.release();
        NetStore__finish(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        return;
    }
}

}  // namespace d_005d03f0
GUEST_EXPORT(0x005d03f0, d_005d03f0::NetStore__clear_local_slots);

// f_005d0470: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When online is allowed: deletes the remote table's entries that exist or are unreadable and sets the town's
// identity; whether it did.
namespace d_005d0470 {

inline constexpr u32 net_store_address = 0x009535e4u;
inline guest::global<u8, 0x009514c7> global_009514c7;
inline constexpr guest::Function<0x0017c448, u32(u32)> script__WordPtrSv__WordPtrSv_0017c448;
inline constexpr guest::Function<0x0023bc64, u32(u32, u32)> Boss__is_disabled;
inline constexpr guest::Function<0x0023c65c, u32(u32, u32)> online_is_blocked;
inline constexpr guest::Function<0x003505bc, u32(u32, u32)> Boss__is_ready;
inline constexpr guest::Function<0x0050d698, u32(u32, u32)> script__WordFix_64u___WordFix_0050d698;
inline constexpr guest::Function<0x0050d8f0, u32(u32)> NetStore__finish;
inline constexpr guest::Function<0x0050dd68, u32(u32, u32, u32)> NetStore__delete_slot;
inline constexpr guest::Function<0x005373a4, u32(u32)> town_identity;
inline constexpr guest::Function<0x0071a084, u32(u32, u32, u32, u32)> save_flag_7190c;
inline constexpr guest::Function<0x00728128, u32(u32, u32, u32)> NetStore__slot_state;
inline constexpr guest::Function<0x007283f4, u32(u32, u32, u32)> NetStore__slot_flag;

u32 NetStore__clear_remote_slots(u32 r0_unused, u32 r1, u32 r2) {
    u32 net_store = 0;
    u32 r0_1 = *global_009514c7;
    if (r0_1 == 0) {
        u32 r0_2 = save_flag_7190c(r0_1, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0_2 != 0) {
            u32 r0_3 = Boss__is_disabled(r0_2, r1);
            r1 = guest::cpu()->r[1];
            if (r0_3 != 0) {
                u32 r0_4 = Boss__is_ready(r0_3, r1);
                r1 = guest::cpu()->r[1];
                if (r0_4 != 0) {
                    u32 r0_5 = online_is_blocked(r0_4, r1);
                    r1 = guest::cpu()->r[1];
                    if (r0_5 != 0) {
                        u32 r0_6 = script__WordFix_64u___WordFix_0050d698(0u, r1);
                        if (r0_6 == 0) {
                            u32 r5 = net_store_address;
                            u32 r0_7 = *gptr<u32>(r5);
                            u32 r4 = *gptr<u32>(r0_7 + 0x3c0u);
                            if (r4 != 0) {
                                do {
                                    r4 -= 1u;
                                    if (NetStore__slot_flag(*gptr<u32>(r5), 1u, r4) != 0) {
                                        r0_7 = NetStore__slot_state(*gptr<u32>(r5), 1u, r4);
                                        if (r0_7 != 1u) {
                                            goto L_5d0530;
                                        }
                                    }
                                    net_store = *gptr<u32>(r5);
                                    r0_7 = NetStore__delete_slot(net_store, 1u, r4);
L_5d0530:;
                                    guest::preempt();
                                } while (r4 != 0);
                            }
                            script__WordPtrSv__WordPtrSv_0017c448(town_identity(r0_7));
                            return 1u;
                        }
                        NetStore__finish(r0_6);
                        r1 = guest::cpu()->r[1];
                    }
                }
            }
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_005d0470
GUEST_EXPORT_FRAMED(0x005d0470, d_005d0470::NetStore__clear_remote_slots, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005d055c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Allocates the villager buffer (0x2520 bytes) once; the buffer.
namespace d_005d055c {

inline constexpr u32 net_store_open_address = 0x009514c4u;
inline constexpr u32 net_store_villager_buffer_address = 0x009514c8u;
inline guest::global<u32, 0x009514c8> net_store_villager_buffer;
inline constexpr guest::Function<0x00113d15, u32(u32, u32)> Villager__Villager;
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32)> allocate_on_heap;
inline constexpr guest::Function<0x0050d4dc, u32(u32)> read_u32_0x009535e8_;
inline constexpr guest::Function<0x0050d91c, u32(u32, u32, u32, u32)> create_cec_heap;

u32 NetStore__alloc_villager_buffer(u32 net_store, u32 r1, u32 r2) {
    create_cec_heap(net_store, r1, r2, guest::cpu()->r[3]);
    u32 r0_1 = *net_store_villager_buffer;
    if (r0_1 != 0) {
        return r0_1;
    }
    u32 block = allocate_on_heap(0x2520u, read_u32_0x009535e8_(r0_1), 4u);
    *gptr<u32>(block) = 0;
    u32 ea_1 = block + 4u;
    *gptr<u32>(ea_1) = 0;
    u32 r0_5 = Villager__Villager(ea_1 + 4u, 0u);
    *net_store_villager_buffer = r0_5 - 8u;
    return r0_5 - 8u;
}

}  // namespace d_005d055c
GUEST_EXPORT_FRAMED(0x005d055c, d_005d055c::NetStore__alloc_villager_buffer, 0x4010);  // pushes {r4, lr} first, as the original

// f_005d05b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Opens the store once and ends the operation.
namespace d_005d05b0 {

inline guest::global<u8, 0x009514c4> net_store_open;
inline constexpr guest::Function<0x0050d698, u32(u32, u32, u32, u32)> script__WordFix_64u___WordFix_0050d698;
inline constexpr guest::Function<0x0050d8f0, u32(u32, u32, u32, u32)> NetStore__finish;

u32 NetStore__open_once() {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = *net_store_open;
    if (r0_1 == 1u) {
        return r0_1;
    }
    u32 r0_3 = script__WordFix_64u___WordFix_0050d698(0u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]) == 0;
    *net_store_open = u8(r0_3);
    frame.release();
    return NetStore__finish(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005d05b0
GUEST_EXPORT(0x005d05b0, d_005d05b0::NetStore__open_once);

// f_005d05ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Closes the store (when it opened) and ends the operation.
namespace d_005d05ec {

inline constexpr u32 net_store_open_address = 0x009514c4u;
inline constexpr u32 net_store_address = 0x009535e4u;
inline guest::global<u8, 0x009514c4> net_store_open;
inline guest::global<u32, 0x009535e4> net_store;
inline constexpr guest::Function<0x0050d698, u32(u32, u32, u32, u32)> script__WordFix_64u___WordFix_0050d698;
inline constexpr guest::Function<0x0050d8f0, u32(u32, u32, u32, u32)> NetStore__finish;
inline constexpr guest::Function<0x0050ded0, u32(u32)> NetStore__close;

void NetStore__close_and_finish(u32 r0_unused, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = script__WordFix_64u___WordFix_0050d698(0u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 != 0) {
        frame.release();
        NetStore__finish(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        return;
    }
    u32 r0_2 = *net_store;
    NetStore__close(r0_2);
    *net_store_open = 0;
    frame.release();
    NetStore__finish(r0_2, net_store_open_address, guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
}

}  // namespace d_005d05ec
GUEST_EXPORT(0x005d05ec, d_005d05ec::NetStore__close_and_finish);

// f_005d0e38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The byte of the table at 0x8578dc for the index.
namespace d_005d0e38 {


u32 table_8578dc_at(u32 r0) {
    u32 r0_1 = *gptr<u8>(r0 + 0x8578dcu);
    guest::cpu()->r[1] = 0x8578dcu;
    return r0_1;
}

}  // namespace d_005d0e38
GUEST_EXPORT(0x005d0e38, d_005d0e38::table_8578dc_at);

// f_005d1d08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs an escape event's base: a framework process, nothing escaping yet.
namespace d_005d1d08 {

struct __attribute__((packed)) escape__BsEscapeEventBase {
    u32 word_0;
    u8 unknown_4[0xf];  // (not used here)
    u8 byte_13;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u8 unknown_24[0x4];  // (not used here)
    u8 byte_28;
    u8 byte_29;
    u8 byte_2a;
    u8 byte_2b;
    u8 byte_2c;
    u8 unknown_2d[0x3];  // (not used here)
    float float_30;
    float float_34;
    float float_38;
    float float_3c;
    u32 word_40;
    float float_44;
    u8 byte_48;
    u8 unknown_49[0x3];  // (not used here)
    u32 word_4c;
    u32 word_50;
    u32 word_54;
    float float_58;
    u32 word_5c;
    u32 word_60;
    u8 byte_64;
    u8 byte_65;
    u8 byte_66;
    u8 byte_67;
    u8 byte_68;
    u8 byte_69;
    u8 byte_6a;
    u8 byte_6b;
    u32 word_6c;
    u8 byte_70;
    u8 byte_71;
    u8 byte_72;
    u8 byte_73;
    u8 byte_74;
    u8 unknown_75[0x3];  // (not used here)
    u32 word_78;
    u32 word_7c;
    u32 word_80;
    u32 word_84;
    u32 word_88;
    u8 byte_8c;
    u8 unknown_8d[0x3];  // (not used here)
    u8 byte_90;
    u8 unknown_91[0x3];  // (not used here)
    u32 word_94;
    float float_98;
    u32 word_9c;
    u8 byte_a0;
    u8 byte_a1;
    u8 unknown_a2[0x2];  // (not used here)
    u32 word_a4;
};
GUEST_OFFSET(escape__BsEscapeEventBase, word_0, 0x0);
GUEST_OFFSET(escape__BsEscapeEventBase, byte_13, 0x13);
GUEST_OFFSET(escape__BsEscapeEventBase, word_14, 0x14);
GUEST_OFFSET(escape__BsEscapeEventBase, word_18, 0x18);
GUEST_OFFSET(escape__BsEscapeEventBase, word_1c, 0x1c);
GUEST_OFFSET(escape__BsEscapeEventBase, word_20, 0x20);
GUEST_OFFSET(escape__BsEscapeEventBase, byte_28, 0x28);
GUEST_OFFSET(escape__BsEscapeEventBase, byte_29, 0x29);
GUEST_OFFSET(escape__BsEscapeEventBase, byte_2a, 0x2a);
GUEST_OFFSET(escape__BsEscapeEventBase, byte_2b, 0x2b);
GUEST_OFFSET(escape__BsEscapeEventBase, byte_2c, 0x2c);
GUEST_OFFSET(escape__BsEscapeEventBase, float_30, 0x30);
GUEST_OFFSET(escape__BsEscapeEventBase, float_34, 0x34);
GUEST_OFFSET(escape__BsEscapeEventBase, float_38, 0x38);
GUEST_OFFSET(escape__BsEscapeEventBase, float_3c, 0x3c);
GUEST_OFFSET(escape__BsEscapeEventBase, word_40, 0x40);
GUEST_OFFSET(escape__BsEscapeEventBase, float_44, 0x44);
GUEST_OFFSET(escape__BsEscapeEventBase, byte_48, 0x48);
GUEST_OFFSET(escape__BsEscapeEventBase, word_4c, 0x4c);
GUEST_OFFSET(escape__BsEscapeEventBase, word_50, 0x50);
GUEST_OFFSET(escape__BsEscapeEventBase, word_54, 0x54);
GUEST_OFFSET(escape__BsEscapeEventBase, float_58, 0x58);
GUEST_OFFSET(escape__BsEscapeEventBase, word_5c, 0x5c);
GUEST_OFFSET(escape__BsEscapeEventBase, word_60, 0x60);
GUEST_OFFSET(escape__BsEscapeEventBase, byte_64, 0x64);
GUEST_OFFSET(escape__BsEscapeEventBase, byte_65, 0x65);
GUEST_OFFSET(escape__BsEscapeEventBase, byte_66, 0x66);
GUEST_OFFSET(escape__BsEscapeEventBase, byte_67, 0x67);
GUEST_OFFSET(escape__BsEscapeEventBase, byte_68, 0x68);
GUEST_OFFSET(escape__BsEscapeEventBase, byte_69, 0x69);
GUEST_OFFSET(escape__BsEscapeEventBase, byte_6a, 0x6a);
GUEST_OFFSET(escape__BsEscapeEventBase, byte_6b, 0x6b);
GUEST_OFFSET(escape__BsEscapeEventBase, word_6c, 0x6c);
GUEST_OFFSET(escape__BsEscapeEventBase, byte_70, 0x70);
GUEST_OFFSET(escape__BsEscapeEventBase, byte_71, 0x71);
GUEST_OFFSET(escape__BsEscapeEventBase, byte_72, 0x72);
GUEST_OFFSET(escape__BsEscapeEventBase, byte_73, 0x73);
GUEST_OFFSET(escape__BsEscapeEventBase, byte_74, 0x74);
GUEST_OFFSET(escape__BsEscapeEventBase, word_78, 0x78);
GUEST_OFFSET(escape__BsEscapeEventBase, word_7c, 0x7c);
GUEST_OFFSET(escape__BsEscapeEventBase, word_80, 0x80);
GUEST_OFFSET(escape__BsEscapeEventBase, word_84, 0x84);
GUEST_OFFSET(escape__BsEscapeEventBase, word_88, 0x88);
GUEST_OFFSET(escape__BsEscapeEventBase, byte_8c, 0x8c);
GUEST_OFFSET(escape__BsEscapeEventBase, byte_90, 0x90);
GUEST_OFFSET(escape__BsEscapeEventBase, word_94, 0x94);
GUEST_OFFSET(escape__BsEscapeEventBase, float_98, 0x98);
GUEST_OFFSET(escape__BsEscapeEventBase, word_9c, 0x9c);
GUEST_OFFSET(escape__BsEscapeEventBase, byte_a0, 0xa0);
GUEST_OFFSET(escape__BsEscapeEventBase, byte_a1, 0xa1);
GUEST_OFFSET(escape__BsEscapeEventBase, word_a4, 0xa4);

inline guest::global<u32, 0x005d1df8> global_005d1df8;
inline constexpr guest::Function<0x00521a8c, u32(u32)> construct_process;

u32 escape__BsEscapeEventBase__BsEscapeEventBase(gptr<escape__BsEscapeEventBase> bs_escape_event_base) {
    construct_process(bs_escape_event_base.addr());
    u32 r3_1 = *global_005d1df8;
    bs_escape_event_base->byte_13 = 0;
    bs_escape_event_base->word_14 = 0;
    bs_escape_event_base->word_0 = r3_1;
    bs_escape_event_base->word_18 = 0;
    bs_escape_event_base->word_1c = bs_escape_event_base.addr();
    bs_escape_event_base->word_20 = 0;
    u32 r3_2 = ~0u;
    bs_escape_event_base->byte_28 = 0;
    float S0_1 = 0.0f;
    bs_escape_event_base->byte_29 = 0;
    bs_escape_event_base->byte_2a = 0;
    bs_escape_event_base->byte_2b = 0;
    bs_escape_event_base->byte_2c = 0;
    bs_escape_event_base->float_30 = S0_1;
    bs_escape_event_base->float_34 = S0_1;
    bs_escape_event_base->float_38 = S0_1;
    bs_escape_event_base->float_3c = S0_1;
    bs_escape_event_base->word_40 = 0;
    bs_escape_event_base->float_44 = S0_1;
    bs_escape_event_base->byte_48 = 0;
    bs_escape_event_base->word_4c = 0;
    bs_escape_event_base->word_50 = 0;
    bs_escape_event_base->word_54 = 0;
    bs_escape_event_base->float_58 = S0_1;
    bs_escape_event_base->word_5c = 0;
    bs_escape_event_base->word_60 = 0;
    bs_escape_event_base->byte_64 = 0;
    bs_escape_event_base->byte_65 = 0;
    bs_escape_event_base->byte_66 = 0;
    bs_escape_event_base->byte_67 = 0;
    bs_escape_event_base->byte_68 = 0;
    bs_escape_event_base->byte_69 = 0;
    bs_escape_event_base->byte_6a = 0;
    bs_escape_event_base->byte_6b = 0;
    bs_escape_event_base->word_6c = r3_2;
    bs_escape_event_base->byte_70 = 0;
    bs_escape_event_base->byte_71 = 0;
    bs_escape_event_base->byte_72 = 0;
    bs_escape_event_base->byte_73 = 0;
    bs_escape_event_base->byte_74 = 0;
    bs_escape_event_base->word_78 = 0;
    bs_escape_event_base->word_7c = 0;
    bs_escape_event_base->word_80 = 0;
    bs_escape_event_base->word_84 = 0;
    bs_escape_event_base->word_88 = 0;
    bs_escape_event_base->byte_8c = 0;
    bs_escape_event_base->byte_90 = 0;
    bs_escape_event_base->word_94 = 0;
    bs_escape_event_base->float_98 = S0_1;
    bs_escape_event_base->word_9c = 0;
    bs_escape_event_base->byte_a0 = 0;
    bs_escape_event_base->byte_a1 = u8(r3_2);
    bs_escape_event_base->word_a4 = 0;
    guest::cpu()->s[0] = S0_1;
    return bs_escape_event_base.addr();
}

}  // namespace d_005d1d08
GUEST_EXPORT_FRAMED(0x005d1d08, d_005d1d08::escape__BsEscapeEventBase__BsEscapeEventBase, 0x4010);  // pushes {r4, lr} first, as the original

// f_005d1ee0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Places a random kind of item (from the 4) in the cells of each of the 2x2 blocks, with a random flag.
namespace d_005d1ee0 {

inline constexpr u32 global_00952bf0_address = 0x00952bf0u;
inline constexpr guest::Function<0x00105f55, u32(u32, u32, u32)> place_items_in_cells;
inline constexpr guest::Function<0x0013bb30, u32(u32, u32, u32, u32)> Random__next_float;
inline constexpr guest::Function<0x002eba64, u32(u32, u32, u32, u32)> Grid2x2__block_at;
inline constexpr guest::Function<0x006a6eb0, u32(u32)> read_town_block_grid;

struct __attribute__((packed)) ScatterItemsInBlocksFrame {
    u32 word_0;
};
GUEST_OFFSET(ScatterItemsInBlocksFrame, word_0, 0x0);
GUEST_SIZE(ScatterItemsInBlocksFrame, 0x4);

void scatter_items_in_blocks(u32 r0, u32 r1_unused, u32 r2, u32 r3, float S0, float S1) {
    guest::StackFrameOf<ScatterItemsInBlocksFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    frame->word_0 = r0;
    Random__next_float(frame.at(0).addr(), r0, r2, r3);
    float S0_1 = guest::cpu()->s[0];
    float S1_1 = 4.0f;
    float S0_2 = std::bit_cast<float>(vcvt_sz_f(S0_1 * S1_1));
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_1;
    Random__next_float(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    float S0_3 = guest::cpu()->s[0];
    u32 r0_3 = std::bit_cast<u32>(S0_3);
    u32 r8 = s32(r0_3) < 0x3f000000;
    guest::cpu()->s[0] = S0_3;
    u32 r0_4 = read_town_block_grid(r0_3);
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    u32 grid2x2 = r0_4;
    if (r0_4 != 0) {
        u32 j = 0u;
        u32 r5 = (std::bit_cast<u32>(S0_2) << 1) + global_00952bf0_address;
        do {
            u32 i = 0u;
            do {
                guest::cpu()->s[0] = S0;
                guest::cpu()->s[1] = S1;
                u32 block_2 = Grid2x2__block_at(grid2x2, i, j, r3);
                u32 r1_4 = *gptr<u16>(r5);
                place_items_in_cells(block_2, r1_4, r8);
                r3 = guest::cpu()->r[3];
                S0 = guest::cpu()->s[0];
                S1 = guest::cpu()->s[1];
                i += 1u;
                guest::preempt();
            } while (s32(i) < 2);
            j += 1u;
            guest::preempt();
        } while (s32(j) < 2);
    }
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
}

}  // namespace d_005d1ee0
GUEST_EXPORT_FRAMED(0x005d1ee0, d_005d1ee0::scatter_items_in_blocks, 0x43f0);  // pushes {i, r5, j, grid2x2, r8, r9, lr} first, as the original

// f_005d1f84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The value times 0.05 (in s0).
namespace d_005d1f84 {


void scale_by_0_05(u32 r0) {
    float S0_1 = float(r0) * 0.05f;
    guest::cpu()->s[0] = S0_1;
}

}  // namespace d_005d1f84
GUEST_EXPORT(0x005d1f84, d_005d1f84::scale_by_0_05);

// f_005d1f9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The value times 0.127 (in s0).
namespace d_005d1f9c {


void scale_by_0_127_a(u32 r0) {
    float S0_1 = float(r0) * 0.12699999f;
    guest::cpu()->s[0] = S0_1;
}

}  // namespace d_005d1f9c
GUEST_EXPORT(0x005d1f9c, d_005d1f9c::scale_by_0_127_a);

// f_005d205c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The value times 0.127 (in s0).
namespace d_005d205c {


void scale_by_0_127(u32 r0) {
    float S0_1 = float(r0) * 0.127f;
    guest::cpu()->s[0] = S0_1;
}

}  // namespace d_005d205c
GUEST_EXPORT(0x005d205c, d_005d205c::scale_by_0_127);

// f_005d2218: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the first word and clears the other two.
namespace d_005d2218 {

struct __attribute__((packed)) Triple {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Triple, word_0, 0x0);
GUEST_OFFSET(Triple, word_4, 0x4);
GUEST_OFFSET(Triple, word_8, 0x8);


void Triple__init_a(gptr<Triple> triple, u32 r1) {
    triple->word_0 = r1;
    triple->word_4 = 0;
    triple->word_8 = 0;
}

}  // namespace d_005d2218
GUEST_EXPORT(0x005d2218, d_005d2218::Triple__init_a);

// f_005d23e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the first word and clears the other two.
namespace d_005d23e4 {

struct __attribute__((packed)) Triple {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Triple, word_0, 0x0);
GUEST_OFFSET(Triple, word_4, 0x4);
GUEST_OFFSET(Triple, word_8, 0x8);


void Triple__init_b(gptr<Triple> triple, u32 r1) {
    triple->word_0 = r1;
    triple->word_4 = 0;
    triple->word_8 = 0;
}

}  // namespace d_005d23e4
GUEST_EXPORT(0x005d23e4, d_005d23e4::Triple__init_b);

// f_005d458c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Where a value (S0) falls between two bounds (S1, S2), clamped to 0..1 (1 when the bounds are equal);
// returned in S0.
namespace d_005d458c {


void normalize_in_range(float S0, float S1, float S2) {
    float S3_1 = 1.0f;
    if (S1 == S2) {
        guest::cpu()->s[0] = S3_1;
        guest::cpu()->s[1] = S1;
        return;
    }
    float S4_1 = 0.0f;
    if (S2 > S1) {
        if (S0 <= S1) {
            guest::cpu()->s[0] = S4_1;
            guest::cpu()->s[1] = S1;
            return;
        }
        if (S0 >= S2) {
            guest::cpu()->s[0] = S3_1;
            guest::cpu()->s[1] = S1;
            return;
        }
        float S3_2 = S0 - S1;
        float S1_1 = S2 - S1;
        float S0_1 = S3_2 / S1_1;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return;
    }
    if (S0 >= S1) {
        guest::cpu()->s[0] = S4_1;
        guest::cpu()->s[1] = S1;
        return;
    }
    if (!(S0 <= S2)) {
        float S3_3 = S0 - S1;
        float S1_2 = S2 - S1;
        float S0_2 = S3_3 / S1_2;
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_2;
        return;
    }
    guest::cpu()->s[0] = S3_1;
    guest::cpu()->s[1] = S1;
}

}  // namespace d_005d458c
GUEST_EXPORT(0x005d458c, d_005d458c::normalize_in_range);

// f_005d4608: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The start speed (in s0) that covers the distance in the frames under the acceleration.
namespace d_005d4608 {


void start_speed_for_distance(u32 r0, float S0, float S1, float S2) {
    u32 res_1 = 0;
    float S5 = 0.0f;
    float S3 = S5;
    float S4 = S3;
    if (r0 == 0) {
        float S3_1 = S1 - S3;
        float S1_1 = float(r0);
        float S0_1 = (S3_1 - S0) / S1_1;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return;
    }
    if ((r0 & 1u) != 0) {
        S4 = S4 + S2;
        S3 = S3 + S4;
    }
    u32 r1 = r0 >> 1;
    if (r1 != 0) {
        do {
            float S4_1 = S4 + S2;
            res_1 = r1 - 1u;
            r1 = res_1;
            S3 = S3 + S4_1;
            S4 = S4_1 + S2;
            S5 = S5 + S4;
            guest::preempt();
        } while (res_1 != 0);
    }
    float S3_2 = S3 + S5;
    float S3_3 = S1 - S3_2;
    float S1_2 = float(r0);
    float S0_2 = (S3_3 - S0) / S1_2;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
}

}  // namespace d_005d4608
GUEST_EXPORT(0x005d4608, d_005d4608::start_speed_for_distance);

// f_005d4a68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls the object's virtual function 11 with true.
namespace d_005d4a68 {

struct __attribute__((packed)) ObjectVirtual11TrueArg0 {
    u32 word_0;
};
GUEST_OFFSET(ObjectVirtual11TrueArg0, word_0, 0x0);


void Object__virtual_11_true(gptr<ObjectVirtual11TrueArg0> object) {
    u32 r2_1 = *gptr<u32>(object->word_0 + 0x2cu);
    // virtual function 11 of object.addr()
    guest::call_address<u32>(r2_1, object.addr(), 1u, r2_1, guest::cpu()->r[3]);
}

}  // namespace d_005d4a68
GUEST_EXPORT(0x005d4a68, d_005d4a68::Object__virtual_11_true);

// f_005d4a78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls the object's virtual at +8.
namespace d_005d4a78 {

struct __attribute__((packed)) MessageChoice {
    u32 word_0;
};
GUEST_OFFSET(MessageChoice, word_0, 0x0);


u32 call_virtual_slot_2(gptr<MessageChoice> message_choice) {
    // virtual function 2 of message_choice.addr()
    return guest::call_address<u32>(*gptr<u32>(message_choice->word_0 + 8u), message_choice.addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005d4a78
GUEST_EXPORT(0x005d4a78, d_005d4a78::call_virtual_slot_2);

// f_005d4edc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a choice entry: an empty 65-character word, no id.
namespace d_005d4edc {

struct __attribute__((packed)) script__WordFix_65u_ {
    u32 word_0;
    u32 word_4;
    u32 word_fix_65u_vtable;
    u32 word_c;
    u32 word_10;
    u8 byte_14;
    u8 unknown_15[0x3];  // (not used here)
    u32 word_18;
    u32 word_1c;
    u16 half_20;
};
GUEST_OFFSET(script__WordFix_65u_, word_0, 0x0);
GUEST_OFFSET(script__WordFix_65u_, word_4, 0x4);
GUEST_OFFSET(script__WordFix_65u_, word_fix_65u_vtable, 0x8);
GUEST_OFFSET(script__WordFix_65u_, word_c, 0xc);
GUEST_OFFSET(script__WordFix_65u_, word_10, 0x10);
GUEST_OFFSET(script__WordFix_65u_, byte_14, 0x14);
GUEST_OFFSET(script__WordFix_65u_, word_18, 0x18);
GUEST_OFFSET(script__WordFix_65u_, word_1c, 0x1c);
GUEST_OFFSET(script__WordFix_65u_, half_20, 0x20);

inline constexpr u32 vtable_script__WordFix_65u__rec = 0x0090a260u;
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> clear_aligned;

u32 ChoiceEntry__construct(gptr<script__WordFix_65u_> word_fix_65u) {
    u32 r0 = word_fix_65u.addr();
    u32 res_1 = 0;
    u32 r1_1 = ~0u;
    u32 r4 = r0 + 8u;
    word_fix_65u->word_0 = r1_1;
    word_fix_65u->word_4 = 0x2f;
    word_fix_65u->word_c = r0 + 0x20u;
    word_fix_65u->word_10 = 0x41;
    word_fix_65u->word_fix_65u_vtable = vtable_script__WordFix_65u__rec;
    word_fix_65u->byte_14 = 4;
    word_fix_65u->word_18 = r1_1;
    word_fix_65u->word_1c = r1_1;
    clear_aligned(r4 + 0x18u, 0x82u, 4u, r4 + 4u);
    u32 r2 = 0u;
    r0 = r4 + 0x18u;
    u32 r1 = 0x20u;
    word_fix_65u->half_20 = u16(r2);
    do {
        *gptr<u16>(r0 + 2u) = u16(r2);
        res_1 = r1 - 1u;
        r1 = res_1;
        u32 ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r2);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    *gptr<u8>(r4 + 0x9cu) = u8(r2);
    *gptr<u32>(r4 + 0xa0u) = r2;
    guest::cpu()->r[1] = r1;
    return r4 - 8u;
}

}  // namespace d_005d4edc
GUEST_EXPORT_FRAMED(0x005d4edc, d_005d4edc::ChoiceEntry__construct, 0x4010);  // pushes {r4, lr} first, as the original

// f_005d5374: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs the text receptor with the default font settings and the values.
namespace d_005d5374 {

struct __attribute__((packed)) Local_005d5374_ea_1 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_005d5374_ea_1, float_0, 0x0);
GUEST_OFFSET(Local_005d5374_ea_1, float_4, 0x4);

struct __attribute__((packed)) Local_005d5374_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_005d5374_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_005d5374_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_005d5374_ea_2, word_8, 0x8);

inline guest::global<u32, 0x008931ec> global_008931ec;
inline constexpr guest::Function<0x005d8a3c, u32(u32, u32, u32, u32)> script__DialogCompo__TextRecept__TextRecept;

struct __attribute__((packed)) TextReceptConstructDefaultFrame {
    u8 unknown_0[0x14];  // (not read or written by name)
    float float_14;
    u8 unknown_18[0x4];  // (not read or written by name)
};
GUEST_OFFSET(TextReceptConstructDefaultFrame, float_14, 0x14);
GUEST_SIZE(TextReceptConstructDefaultFrame, 0x1c);

void TextRecept__construct_default(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<TextReceptConstructDefaultFrame> frame;  // the original's stack frame
    float S2_1 = 7e-45f;
    float S0_1 = 1.2608996e-38f;
    float S1_1 = std::bit_cast<float>(*global_008931ec);
    frame->float_14 = S2_1;
    gptr<Local_005d5374_ea_1> ea_1 = gptr<Local_005d5374_ea_1>(frame.at(0).addr());
    ea_1->float_0 = S0_1;
    ea_1->float_4 = S1_1;
    gptr<Local_005d5374_ea_2> ea_2 = gptr<Local_005d5374_ea_2>(frame.at(8).addr());
    ea_2->word_0 = r1;
    ea_2->word_4 = r2;
    ea_2->word_8 = r3;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    script__DialogCompo__TextRecept__TextRecept(guest::cpu()->r[0], frame.at(0).addr(), r2, r3);
}

}  // namespace d_005d5374
GUEST_EXPORT_FRAMED(0x005d5374, d_005d5374::TextRecept__construct_default, 0x4000);  // pushes {lr} first, as the original

// f_005d53b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Advances to the next page when there is one, and puts it.
namespace d_005d53b0 {

struct __attribute__((packed)) DialogCompo {
    u8 unknown_0[0x90];  // (not used here)
    u32 word_90;
    u32 word_94;
};
GUEST_OFFSET(DialogCompo, word_90, 0x90);
GUEST_OFFSET(DialogCompo, word_94, 0x94);

inline constexpr guest::Function<0x005d8740, u32(u32, u32, u32, u32)> script__DialogCompo__PagePut__PagePut;

void DialogCompo__next_page(gptr<DialogCompo> dialog_compo) {
    u32 r1_1 = dialog_compo->word_94;
    u32 r2_1 = dialog_compo->word_90 - 1u;
    if (s32(r1_1) >= s32(r2_1)) {
        guest::cpu()->r[1] = r1_1;
        return;
    }
    dialog_compo->word_94 = r1_1 + 1u;
    script__DialogCompo__PagePut__PagePut(dialog_compo.addr(), r1_1 + 1u, r2_1, guest::cpu()->r[3]);
}

}  // namespace d_005d53b0
GUEST_EXPORT(0x005d53b0, d_005d53b0::DialogCompo__next_page);

// f_005d53d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs the text receptor with the given style and the default font settings.
namespace d_005d53d4 {

struct __attribute__((packed)) Local_005d53d4_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005d53d4_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_005d53d4_ea_2, word_4, 0x4);

inline guest::global<u32, 0x008931d8> global_008931d8;
inline constexpr guest::Function<0x005d8a3c, u32(u32, u32, u32, u32)> script__DialogCompo__TextRecept__TextRecept;

struct __attribute__((packed)) TextReceptConstructWithStyleFrame {
    float float_0;
    u32 word_4;
    float float_8;
    u8 unknown_c[0x8];  // (not read or written by name)
    float float_14;
    u8 unknown_18[0x4];  // (not read or written by name)
};
GUEST_OFFSET(TextReceptConstructWithStyleFrame, float_0, 0x0);
GUEST_OFFSET(TextReceptConstructWithStyleFrame, word_4, 0x4);
GUEST_OFFSET(TextReceptConstructWithStyleFrame, float_8, 0x8);
GUEST_OFFSET(TextReceptConstructWithStyleFrame, float_14, 0x14);
GUEST_SIZE(TextReceptConstructWithStyleFrame, 0x1c);

void TextRecept__construct_with_style(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<TextReceptConstructWithStyleFrame> frame;  // the original's stack frame
    float S0_1 = 1.2608996e-38f;
    float S1_1 = std::bit_cast<float>(*global_008931d8);
    float S2_1 = 7e-45f;
    frame->float_0 = S0_1;
    frame->float_8 = S1_1;
    frame->float_14 = S2_1;
    frame->word_4 = r1;
    gptr<Local_005d53d4_ea_2> ea_2 = gptr<Local_005d53d4_ea_2>(frame.at(0xc).addr());
    ea_2->word_0 = r2;
    ea_2->word_4 = r3;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    script__DialogCompo__TextRecept__TextRecept(guest::cpu()->r[0], frame.at(0).addr(), r2, r3);
}

}  // namespace d_005d53d4
GUEST_EXPORT_FRAMED(0x005d53d4, d_005d53d4::TextRecept__construct_with_style, 0x4000);  // pushes {lr} first, as the original

// f_005d5414: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a 400-character script word (over a 1536-character one).
namespace d_005d5414 {

struct __attribute__((packed)) script__WordFix_400u_ {
    u8 unknown_0[0xb8];  // (not used here)
    u32 word_fix_1536u_vtable;
    u8 unknown_bc[0xc14];  // (not used here)
    u32 word_fix_400u_vtable;
};
GUEST_OFFSET(script__WordFix_400u_, word_fix_1536u_vtable, 0xb8);
GUEST_OFFSET(script__WordFix_400u_, word_fix_400u_vtable, 0xcd0);

inline constexpr u32 vtable_script__WordFix_1536u__rec = 0x00909ab8u;
inline constexpr u32 vtable_script__WordFix_400u__rec = 0x00909ff8u;

void script__WordFix_400u___WordFix(gptr<script__WordFix_400u_> word_fix_400u) {
    word_fix_400u->word_fix_400u_vtable = vtable_script__WordFix_400u__rec;
    word_fix_400u->word_fix_1536u_vtable = vtable_script__WordFix_1536u__rec;
}

}  // namespace d_005d5414
GUEST_EXPORT(0x005d5414, d_005d5414::script__WordFix_400u___WordFix);

// f_005d6000: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys a mail insert: its words and ten entries.
namespace d_005d6000 {

inline constexpr u32 vtable_script__MailInsert = 0x00908524u;
inline constexpr u32 vtable_script__WordFix_12u__rec = 0x00909a10u;
inline constexpr u32 vtable_script__WordFix_13u__rec = 0x00909a48u;
inline constexpr u32 vtable_script__WordFix_19u_ = 0x00909c78u;
inline constexpr u32 vtable_script__WordFix_33u__rec = 0x00909f18u;
inline constexpr u32 vtable_script__WordFix_9u__rec = 0x0090a3e8u;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;
inline constexpr guest::Function<0x005f0bc4, u32(u32, u32)> script__Insert__destructor;

u32 script__MailInsert__destructor(gptr<script__MailInsert> mail_insert) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    mail_insert->vtable = vtable_script__MailInsert;
    mail_insert->word_fix_9u_vtable = vtable_script__WordFix_9u__rec;
    destroy_array_elements(mail_insert.addr() + 0x11f8cu, 0x81d3fcu, 0x44u, 0xau);
    *gptr<u32>(mail_insert.addr() + 0x11f58u) = vtable_script__WordFix_13u__rec;
    *gptr<u32>(mail_insert.addr() + 0x11f28u) = vtable_script__WordFix_12u__rec;
    *gptr<u32>(mail_insert.addr() + 0x11ef4u) = vtable_script__WordFix_13u__rec;
    *gptr<u32>(mail_insert.addr() + 0x11ec8u) = vtable_script__WordFix_9u__rec;
    *gptr<u32>(mail_insert.addr() + 0x11e9cu) = vtable_script__WordFix_9u__rec;
    *gptr<u32>(mail_insert.addr() + 0x11e58u) = vtable_script__WordFix_19u_;
    *gptr<u32>(mail_insert.addr() + 0x11e14u) = vtable_script__WordFix_19u_;
    *gptr<u32>(mail_insert.addr() + 0x11dd0u) = vtable_script__WordFix_19u_;
    *gptr<u32>(mail_insert.addr() + 0x11d74u) = vtable_script__WordFix_33u__rec;
    *gptr<u32>(mail_insert.addr() + 0x11d18u) = vtable_script__WordFix_33u__rec;
    *gptr<u32>(mail_insert.addr() + 0x11cd4u) = vtable_script__WordFix_19u_;
    frame.release();
    return script__Insert__destructor(mail_insert.addr(), vtable_script__WordFix_19u_);
}

}  // namespace d_005d6000
GUEST_EXPORT(0x005d6000, d_005d6000::script__MailInsert__destructor);

// f_005d60d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the text buffer and the line starts, marking the last line.
namespace d_005d60d4 {

struct __attribute__((packed)) Local_005d60d4_ea_4 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Local_005d60d4_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_005d60d4_ea_4, word_8, 0x8);


u32 RenderBase__clear(gptr<script__RenderBase> render_base) {
    u32 r0 = render_base.addr();
    u32 i = 0;
    u32 res_1 = 0;
    u32 r2_1 = render_base->word_14;
    u32 r3_1 = r2_1 + (render_base->word_18 << 1) - r2_1;
    u32 r1 = 0u;
    if (s32(r3_1) >> 1 > 0) {
        i = r2_1 - 2u;
        if ((r3_1 & 2u) != 0u) {
            u32 ea_1 = i + 2u;
            *gptr<u16>(ea_1) = u16(r1);
            i = ea_1;
        }
        u32 r3 = s32(r3_1) >> 2;
        if (r3 != 0) {
            do {
                *gptr<u16>(i + 2u) = u16(r1);
                res_1 = r3 - 1u;
                r3 = res_1;
                u32 ea_3 = i + 4u;
                *gptr<u16>(ea_3) = u16(r1);
                i = ea_3;
                guest::preempt();
            } while (res_1 != 0);
        }
    }
    u32 r2_2 = *gptr<u32>(r0 + 0x1cu);
    i = 0u;
    if ((r2_2 >= 0u) && r2_2 != 0) {
        do {
            *gptr<u32>(*gptr<u32>(r0 + 0x20u) + (i << 2)) = *gptr<u32>(r0 + 0x14u);
            *gptr<u8>(*gptr<u32>(r0 + 0x24u) + i) = u8(r1);
            i += 1u;
            guest::preempt();
        } while (*gptr<u32>(r0 + 0x1cu) > i);
    }
    gptr<Local_005d60d4_ea_4> ea_4 = gptr<Local_005d60d4_ea_4>(r0 + 0x1cu);
    u32 r0_1 = ea_4->word_0 - 1u;
    *gptr<u8>(ea_4->word_8 + r0_1) = 1;
    guest::cpu()->r[1] = 1u;
    return r0_1;
}

}  // namespace d_005d60d4
GUEST_EXPORT(0x005d60d4, d_005d60d4::RenderBase__clear);

// f_005d6168: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a render base: black colors, no scale yet, a character buffer (arg 1) and room for arg 2 lines.
namespace d_005d6168 {

struct __attribute__((packed)) Local_005d6168_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005d6168_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_005d6168_ea_1, word_4, 0x4);

inline constexpr u32 vtable_script__RenderBase = 0x0090883cu;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x005d60d4, u32(u32)> RenderBase__clear;
inline constexpr guest::Function<0x00779500, u32(u32, u32, u32, u32)> allocate_default;

u32 script__RenderBase__RenderBase(gptr<script__RenderBase> render_base, u32 r1, u32 r2, u32 r3) {
    u32 r7 = guest::cpu()->r[7];
    render_base->vtable = vtable_script__RenderBase;
    render_base->word_4 = 0xff000000;
    float S0_1 = -1.0f;
    render_base->word_8 = 0xff000000;
    render_base->float_c = S0_1;
    render_base->float_10 = S0_1;
    guest::cpu()->s[0] = S0_1;
    u32 r0_2 = allocate_default(r1 << 1, r7, r2, r3);
    u32 r2_1 = guest::cpu()->r[2];
    u32 r3_1 = guest::cpu()->r[3];
    render_base->word_14 = r0_2;
    render_base->word_18 = r1;
    render_base->word_1c = r2 + 1u;
    u32 r1_1 = r7;
    u32 r0_4 = allocate_default((r2 + 1u << 2) + 8u, r1_1, r2_1, r3_1);
    if (r0_4 != 0) {
        gptr<Local_005d6168_ea_1> ea_1 = gptr<Local_005d6168_ea_1>(r0_4 + 0u);
        ea_1->word_0 = 4;
        ea_1->word_4 = r2 + 1u;
        r2_1 = 4u;
        r1_1 = 0x5e9d4cu;
        r3_1 = r2 + 1u;
        r0_4 = for_each_element(r0_4 + 8u, r1_1, r2_1, r3_1);
    }
    render_base->word_20 = r0_4;
    render_base->word_24 = allocate_default(render_base->word_1c, r1_1, r2_1, r3_1);
    render_base->word_28 = render_base->word_14 + (r1 << 1);
    RenderBase__clear(render_base.addr());
    return render_base.addr();
}

}  // namespace d_005d6168
GUEST_EXPORT_FRAMED(0x005d6168, d_005d6168::script__RenderBase__RenderBase, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005d6510: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Text tag: sets the color (from the tag's two halves) and skips the tag.
namespace d_005d6510 {

struct __attribute__((packed)) TextColorTagArg1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(TextColorTagArg1, word_0, 0x0);
GUEST_OFFSET(TextColorTagArg1, word_4, 0x4);

struct __attribute__((packed)) TextColorTagArg2 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(TextColorTagArg2, word_10, 0x10);
GUEST_OFFSET(TextColorTagArg2, word_14, 0x14);

struct __attribute__((packed)) Local_005d6510_r0_1 {
    u16 half_0;
    u16 half_2;
};
GUEST_OFFSET(Local_005d6510_r0_1, half_0, 0x0);
GUEST_OFFSET(Local_005d6510_r0_1, half_2, 0x2);

inline constexpr guest::Function<0x004d60b0, u32(u32)> Pane__refresh_color;

u32 text_color_tag(u32 r0_unused, gptr<TextColorTagArg1> arg1, gptr<TextColorTagArg2> arg2) {
    gptr<Local_005d6510_r0_1> r0_1 = gptr<Local_005d6510_r0_1>(arg2->word_10);
    u32 r0_2 = u32(r0_1->half_2) & 0xffffu | u32(r0_1->half_0) << 0x10 & 0xffff0000u;
    u32 r1_1 = r0_2 << 0x18 | (r0_2 >> 8u & 0xffu) << 0x10 | (r0_2 >> 0x10u & 0xffu) << 8 | r0_2 >> 0x18;
    u32 r0_3 = arg1->word_0;
    *gptr<u32>(r0_3 + 0x18u) = r1_1;
    Pane__refresh_color(r0_3);
    u32 r1_2 = ~1u;
    arg1->word_4 = r1_2 + (arg2->word_14 >> 1 << 1) + arg1->word_4;
    guest::cpu()->r[1] = r1_2;
    return 0u;
}

}  // namespace d_005d6510
GUEST_EXPORT_FRAMED(0x005d6510, d_005d6510::text_color_tag, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005d6868: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a main renderer: a render base with room for twice arg 2 points, all at the origin, no scale
// yet (-1).
namespace d_005d6868 {

struct __attribute__((packed)) Local_005d6868_r1_2 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_005d6868_r1_2, float_0, 0x0);
GUEST_OFFSET(Local_005d6868_r1_2, float_4, 0x4);

inline constexpr u32 vtable_script__RenderMain = 0x00908854u;
inline constexpr guest::Function<0x005d6168, u32(u32, u32, u32, u32)> script__RenderBase__RenderBase;
inline constexpr guest::Function<0x00779500, u32(u32, u32, u32)> allocate_default;

u32 script__RenderMain__RenderMain_005d6868(gptr<script__RenderMain> render_main, u32 r1, u32 r2, u32 r3, float S0) {
    u32 render_base = render_main.addr();
    script__RenderBase__RenderBase(render_base, r1, r3, r3);
    u32 b_1 = r2 << 1;
    render_main->vtable = vtable_script__RenderMain;
    render_main->word_2c = 0;
    render_main->word_34 = b_1;
    render_main->word_30 = 0;
    u32 r4 = render_base;
    render_main->byte_38 = 0;
    S0 = -1.0f;
    render_main->word_3c = std::bit_cast<u32>(S0);
    render_main->word_40 = std::bit_cast<u32>(S0);
    if (b_1 != 0) {
        guest::cpu()->s[0] = S0;
        u32 r0_2 = allocate_default(b_1 << 3, vtable_script__RenderMain, b_1);
        S0 = guest::cpu()->s[0];
        render_main->word_30 = r0_2;
    }
    *gptr<u32>(r4 + 0x2cu) = 0;
    u32 r1_1 = *gptr<u32>(r4 + 0x34u);
    render_base = 0u;
    if (r1_1 >= 0u && r1_1 != 0) {
        S0 = 0.0f;
        do {
            gptr<Local_005d6868_r1_2> r1_2 = gptr<Local_005d6868_r1_2>(*gptr<u32>(r4 + 0x30u) + (render_base << 3));
            render_base += 1u;
            r1_2->float_0 = S0;
            r1_2->float_4 = S0;
            r1_1 = *gptr<u32>(r4 + 0x34u);
            guest::preempt();
        } while (r1_1 > render_base);
    }
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0;
    return r4;
}

}  // namespace d_005d6868
GUEST_EXPORT_FRAMED(0x005d6868, d_005d6868::script__RenderMain__RenderMain_005d6868, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005d6fac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a ruby (reading aid) renderer: a main renderer with a second render base and a tracing message
// engine.
namespace d_005d6fac {

struct __attribute__((packed)) Local_005d6fac_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005d6fac_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_005d6fac_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_005d6fac_ea_3 {
    u32 render_base;
    u32 word_4;
};
GUEST_OFFSET(Local_005d6fac_ea_3, render_base, 0x0);
GUEST_OFFSET(Local_005d6fac_ea_3, word_4, 0x4);

struct __attribute__((packed)) Local_005d6fac_r0_4 {
    u32 vtable;
    u8 unknown_4[0x68];  // (not used here)
    u32 word_6c;
    u32 word_70;
    u32 word_74;
    u32 word_78;
    u32 word_7c;
    u32 word_80;
    u8 byte_84;
};
GUEST_OFFSET(Local_005d6fac_r0_4, vtable, 0x0);
GUEST_OFFSET(Local_005d6fac_r0_4, word_6c, 0x6c);
GUEST_OFFSET(Local_005d6fac_r0_4, word_70, 0x70);
GUEST_OFFSET(Local_005d6fac_r0_4, word_74, 0x74);
GUEST_OFFSET(Local_005d6fac_r0_4, word_78, 0x78);
GUEST_OFFSET(Local_005d6fac_r0_4, word_7c, 0x7c);
GUEST_OFFSET(Local_005d6fac_r0_4, word_80, 0x80);
GUEST_OFFSET(Local_005d6fac_r0_4, byte_84, 0x84);

inline constexpr u32 vtable_script__RenderRuby = 0x0090886cu;
inline constexpr u32 vtable_script__RenderTrace = 0x00908f2cu;
inline constexpr guest::Function<0x005d6168, u32(u32, u32, u32)> script__RenderBase__RenderBase;
inline constexpr guest::Function<0x005d6868, u32(u32, u32, u32, u32)> script__RenderMain__RenderMain_005d6868;
inline constexpr guest::Function<0x00601a20, u32(u32)> construct_msg_engine;

u32 script__RenderRuby__RenderRuby_005d6fac(u32 render_ruby, u32 r1, u32 r2) {
    u32 r0_1 = script__RenderMain__RenderMain_005d6868(render_ruby, r1, r2, 0u);
    u32 render_base = r0_1 + 0x44u;
    script__RenderBase__RenderBase(render_base, r1, 0u);
    *gptr<u32>(render_base) = vtable_script__RenderRuby;
    gptr<Local_005d6fac_ea_1> ea_1 = gptr<Local_005d6fac_ea_1>(render_base + 0x2cu);
    ea_1->word_0 = r0_1;
    ea_1->word_4 = 0;
    gptr<Local_005d6fac_r0_4> r0_4 = gptr<Local_005d6fac_r0_4>(construct_msg_engine(render_base + 0x34u));
    r0_4->vtable = vtable_script__RenderTrace;
    *gptr<u32>(r0_4.addr() + 0x60u) = render_base - 0x44u;
    gptr<Local_005d6fac_ea_3> ea_3 = gptr<Local_005d6fac_ea_3>(r0_4.addr() + 0x64u);
    ea_3->render_base = render_base;
    ea_3->word_4 = 0;
    r0_4->word_6c = 0;
    r0_4->word_70 = 0;
    r0_4->word_74 = 0;
    r0_4->word_78 = 0;
    r0_4->word_7c = 0;
    r0_4->word_80 = 0;
    r0_4->byte_84 = 0;
    guest::cpu()->r[1] = r0_4.addr();
    return r0_4.addr() - 0x78u;
}

}  // namespace d_005d6fac
GUEST_EXPORT_FRAMED(0x005d6fac, d_005d6fac::script__RenderRuby__RenderRuby_005d6fac, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005d72a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Text tag: places the ruby text above its base characters, centered, and skips the tag.
namespace d_005d72a4 {

struct __attribute__((packed)) Object_005d72a4_2 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Object_005d72a4_2, word_10, 0x10);
GUEST_OFFSET(Object_005d72a4_2, word_14, 0x14);

struct __attribute__((packed)) Local_005d72a4_r0_1 {
    float float_0;
    float float_4;
    u8 unknown_8[0x24];  // (not used here)
    u32 word_2c;
    u32 word_30;
    u32 word_34;
};
GUEST_OFFSET(Local_005d72a4_r0_1, float_0, 0x0);
GUEST_OFFSET(Local_005d72a4_r0_1, float_4, 0x4);
GUEST_OFFSET(Local_005d72a4_r0_1, word_2c, 0x2c);
GUEST_OFFSET(Local_005d72a4_r0_1, word_30, 0x30);
GUEST_OFFSET(Local_005d72a4_r0_1, word_34, 0x34);

inline constexpr guest::Function<0x0077a650, u32(u32)> floorf;

u32 RenderRuby__place_ruby(gptr<script__RenderRuby> render_ruby, u32 r1, gptr<Object_005d72a4_2> arg2) {
    u32 fpsr = guest::cpu()->fpscr;
    float S2_2 = 0;
    float S0_1 = 0.0f;
    gptr<Local_005d72a4_r0_1> r0_1 = gptr<Local_005d72a4_r0_1>(render_ruby->word_2c);
    u32 r1_1 = render_ruby->word_30;
    u32 r2_1 = r0_1->word_2c;
    float S2_1 = float(s32(sxth(u32(*gptr<u16>(arg2->word_10)))));
    float S1_1 = 0.5f;
    u32 r3_1 = r0_1->word_34;
    u32 fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S2_1, S0_1);
    float S3_1 = (fpsr_1 >> 0x1f == (fpsr_1 >> 0x1c & 1) ? S2_1 + S1_1 : S2_1 - S1_1) * 0.03125f;
    if (r2_1 < r3_1 && r1_1 < r3_1 && r2_1 >= r1_1) {
        r0_1 = gptr<Local_005d72a4_r0_1>(r0_1->word_30);
        if (r0_1.addr() != 0) {
            r0_1 = gptr<Local_005d72a4_r0_1>(r0_1.addr() + (r1_1 << 3));
            S0_1 = r0_1->float_0;
            S2_2 = r0_1->float_4;
        } else {
            S2_2 = S0_1;
        }
    } else {
        S2_2 = S0_1;
    }
    float S0_2 = S0_1 + (S2_2 - S3_1) * S1_1 + -0.5f + S1_1;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_1;
    floorf(r0_1.addr());
    float S0_3 = guest::cpu()->s[0];
    u32 r1_2 = ~1u;
    *gptr<u32>(*gptr<u32>(r1) + 0x2cu) = std::bit_cast<u32>(S0_3);
    float S0_4 = 3.4028235e38f;
    *gptr<u32>(*gptr<u32>(r1) + 0x4cu) = std::bit_cast<u32>(S0_4);
    render_ruby->word_30 = render_ruby->word_30 + 1u;
    *gptr<u32>(r1 + 4u) = r1_2 + (arg2->word_14 >> 1 << 1) + *gptr<u32>(r1 + 4u);
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->s[0] = S0_4;
    return 0u;
}

}  // namespace d_005d72a4
GUEST_EXPORT_FRAMED(0x005d72a4, d_005d72a4::RenderRuby__place_ruby, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005d79bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the style to the preset of the index (below 7), else the default.
namespace d_005d79bc {

struct __attribute__((packed)) TextStyle {
    u32 word_0;
};
GUEST_OFFSET(TextStyle, word_0, 0x0);


void TextStyle__set_preset(gptr<TextStyle> text_style, u32 r1) {
    text_style->word_0 = r1 >= 7u ? 0x890eb0u : r1 * 0xcu + 0x890e5cu;
}

}  // namespace d_005d79bc
GUEST_EXPORT(0x005d79bc, d_005d79bc::TextStyle__set_preset);

// f_005d79e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds the text scale command (in 1/32 units), once; the command.
namespace d_005d79e0 {

inline constexpr u32 text_command_scale_b_address = 0x0095def4u;
inline constexpr u32 global_0095df1c_address = 0x0095df1cu;
inline constexpr u32 text_command_scale_address = 0x00ad5718u;
inline guest::global<u32, 0x0095def4> text_command_scale_b;
inline guest::global<u16, 0x0095df24> global_0095df24;
inline constexpr guest::Function<0x002fe7dd, u32(u32)> static_guard_acquire;
inline constexpr guest::Function<0x005d7a8c, u32(u32, u32)> TextCommand__read;

struct __attribute__((packed)) TextCommandScaleFrame {
    u32 word_0;
};
GUEST_OFFSET(TextCommandScaleFrame, word_0, 0x0);
GUEST_SIZE(TextCommandScaleFrame, 0x4);

u32 TextCommand__scale(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3, float S0) {
    guest::StackFrameOf<TextCommandScaleFrame> frame;  // the original's stack frame
    float S1_1 = 32.0f;
    frame->word_0 = r3;
    float S0_1 = std::bit_cast<float>(vcvt_sz_f(S0 * S1_1));
    *global_0095df24 = u16(std::bit_cast<u32>(S0_1));
    frame->word_0 = 0x95df1c;
    if ((*text_command_scale_b & 1u) != 0) {
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return text_command_scale_address;
    }
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    u32 first_time_2 = static_guard_acquire(text_command_scale_b_address);
    if (first_time_2 == 0) {
        return text_command_scale_address;
    }
    TextCommand__read(text_command_scale_address, frame.at(0).addr());
    return text_command_scale_address;
}

}  // namespace d_005d79e0
GUEST_EXPORT_FRAMED(0x005d79e0, d_005d79e0::TextCommand__scale, 0x4000);  // pushes {lr} first, as the original

// f_005d7a4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds the text color command from the tag's value.
namespace d_005d7a4c {

struct __attribute__((packed)) TextCommand {
    u32 word_0;
};
GUEST_OFFSET(TextCommand, word_0, 0x0);

struct __attribute__((packed)) TextCommandColorArg1 {
    u32 word_0;
};
GUEST_OFFSET(TextCommandColorArg1, word_0, 0x0);

inline constexpr u32 global_0095df34_address = 0x0095df34u;
inline guest::global<u16, 0x0095df3c> global_0095df3c;
inline guest::global<u16, 0x0095df3e> global_0095df3e;

void TextCommand__color(gptr<TextCommand> text_command, gptr<TextCommandColorArg1> arg1) {
    u32 r1_1 = arg1->word_0;
    u32 r1_2 = r1_1 << 0x18 | (r1_1 >> 8u & 0xffu) << 0x10 | (r1_1 >> 0x10u & 0xffu) << 8 | r1_1 >> 0x18;
    *global_0095df3c = u16(r1_2 >> 0x10);
    *global_0095df3e = u16(r1_2);
    text_command->word_0 = 0x95df34;
}

}  // namespace d_005d7a4c
GUEST_EXPORT(0x005d7a4c, d_005d7a4c::TextCommand__color);

// f_005d7a8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Reads a text command at a position (arg 1): its kind, parameter size and data, and where the text
// continues.
namespace d_005d7a8c {

struct __attribute__((packed)) TextCommandScaleAddress {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(TextCommandScaleAddress, word_0, 0x0);
GUEST_OFFSET(TextCommandScaleAddress, word_4, 0x4);
GUEST_OFFSET(TextCommandScaleAddress, word_8, 0x8);
GUEST_OFFSET(TextCommandScaleAddress, word_c, 0xc);
GUEST_OFFSET(TextCommandScaleAddress, word_10, 0x10);
GUEST_OFFSET(TextCommandScaleAddress, word_14, 0x14);

struct __attribute__((packed)) TextCommandReadArg1 {
    u32 word_0;
};
GUEST_OFFSET(TextCommandReadArg1, word_0, 0x0);

struct __attribute__((packed)) Local_005d7a8c_r2_1 {
    u8 unknown_0[0x2];  // (not used here)
    u16 half_2;
    u16 half_4;
    u16 half_6;
};
GUEST_OFFSET(Local_005d7a8c_r2_1, half_2, 0x2);
GUEST_OFFSET(Local_005d7a8c_r2_1, half_4, 0x4);
GUEST_OFFSET(Local_005d7a8c_r2_1, half_6, 0x6);


void TextCommand__read(gptr<TextCommandScaleAddress> text_command_scale_address, gptr<TextCommandReadArg1> arg1) {
    text_command_scale_address->word_0 = 0;
    text_command_scale_address->word_4 = ~0x80000000u;
    text_command_scale_address->word_8 = ~0u;
    text_command_scale_address->word_c = 0;
    text_command_scale_address->word_10 = 0;
    text_command_scale_address->word_14 = 0;
    gptr<Local_005d7a8c_r2_1> r2_1 = gptr<Local_005d7a8c_r2_1>(arg1->word_0);
    if (r2_1.addr() == 0) {
        return;
    }
    text_command_scale_address->word_0 = r2_1.addr();
    text_command_scale_address->word_4 = u32(r2_1->half_2);
    text_command_scale_address->word_8 = u32(r2_1->half_4);
    text_command_scale_address->word_c = u32(r2_1->half_6);
    text_command_scale_address->word_10 = arg1->word_0 + 8u;
    text_command_scale_address->word_14 = text_command_scale_address->word_c + 8u;
}

}  // namespace d_005d7a8c
GUEST_EXPORT(0x005d7a8c, d_005d7a8c::TextCommand__read);

// f_005d8274: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a talk insert: its words.
namespace d_005d8274 {

struct __attribute__((packed)) ScriptTalkInsertTalkInsertArg1 {
    u8 unknown_0[0x344];  // (not used here)
    u32 word_344;
};
GUEST_OFFSET(ScriptTalkInsertTalkInsertArg1, word_344, 0x344);

struct __attribute__((packed)) Local_005d8274_r0_25 {
    u8 byte_0;
    u8 unknown_1[0x3];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_005d8274_r0_25, byte_0, 0x0);
GUEST_OFFSET(Local_005d8274_r0_25, word_4, 0x4);
GUEST_OFFSET(Local_005d8274_r0_25, word_8, 0x8);

struct __attribute__((packed)) Local_005d8274_r3_11 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005d8274_r3_11, word_0, 0x0);
GUEST_OFFSET(Local_005d8274_r3_11, word_4, 0x4);

inline constexpr u32 vtable_script__TalkInsert = 0x00908884u;
inline constexpr u32 vtable_script__WordFix_17u_ = 0x00909b60u;
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> clear_aligned;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x00312bd0, u32(u32, u32, u32)> construct_word_fix_19;
inline constexpr guest::Function<0x005f05e4, u32(u32, u32, u32, u32)> script__Insert__Insert_005f05e4;
inline constexpr guest::Function<0x0081c8b8, u32(u32)> script__WordFix_12u___WordFix;
inline constexpr guest::Function<0x0081c9bc, u32(u32)> script__WordFix_13u___WordFix;
inline constexpr guest::Function<0x0081d8c0, u32(u32)> script__WordFix_33u___WordFix_0081d8c0;
inline constexpr guest::Function<0x0081e8d0, u32(u32)> script__construct_word_fix_9;

u32 script__TalkInsert__TalkInsert(u32 talk_insert, gptr<ScriptTalkInsertTalkInsertArg1> arg1, u32 r2, u32 r3) {
    u32 r1 = arg1.addr();
    u32 res_1 = 0;
    u32 r1_1 = arg1->word_344;
    if (r1_1 != 0) {
        r1_1 += 0x8cu;
    }
    u32 r0_1 = script__Insert__Insert_005f05e4(talk_insert, r1_1, r2, r3);
    *gptr<u32>(r0_1) = vtable_script__TalkInsert;
    *gptr<u32>(r0_1 + 0x11cd0u) = r1;
    u32 r0_6 = script__WordFix_33u___WordFix_0081d8c0(construct_word_fix_19(r0_1 + 0x11cd4u, 0x11cd0u, vtable_script__TalkInsert) + 0x44u) + 0x5cu;
    u32 r0_8 = script__WordFix_33u___WordFix_0081d8c0(r0_6) + 0x5cu;
    u32 r0_10 = construct_word_fix_19(r0_8, guest::cpu()->r[1], guest::cpu()->r[2]) + 0x44u;
    u32 r0_12 = construct_word_fix_19(r0_10, guest::cpu()->r[1], guest::cpu()->r[2]) + 0x44u;
    u32 r0_16 = script__construct_word_fix_9(construct_word_fix_19(r0_12, guest::cpu()->r[1], guest::cpu()->r[2]) + 0x44u) + 0x2cu;
    u32 r0_22 = script__WordFix_13u___WordFix(script__WordFix_12u___WordFix(script__WordFix_13u___WordFix(r0_16) + 0x34u) + 0x30u) + 0x34u;
    u32 r0_24 = for_each_element(r0_22, 0x81d370u, 0x44u, 0xau) + 0x2a8u;
    gptr<Local_005d8274_r3_11> r3_11 = gptr<Local_005d8274_r3_11>(r0_24 + 4u);
    r3_11->word_0 = r0_24 + 0x18u;
    r3_11->word_4 = 0x11;
    u32 r4 = r0_24;
    *gptr<u32>(r0_24) = vtable_script__WordFix_17u_;
    gptr<Local_005d8274_r0_25> r0_25 = gptr<Local_005d8274_r0_25>(r0_24 + 0xcu);
    u32 r1_11 = ~0u;
    r0_25->byte_0 = 4;
    r0_25->word_4 = r1_11;
    r0_25->word_8 = r1_11;
    clear_aligned(r4 + 0x18u, 0x22u, 4u, r3_11.addr());
    r1 = 0u;
    talk_insert = r4 + 0x18u;
    r2 = 8u;
    *gptr<u16>(r4 + 0x18u) = u16(r1);
    do {
        *gptr<u16>(talk_insert + 2u) = u16(r1);
        res_1 = r2 - 1u;
        r2 = res_1;
        u32 ea_2 = talk_insert + 4u;
        *gptr<u16>(ea_2) = u16(r1);
        talk_insert = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    return r4 - 0x12208u;
}

}  // namespace d_005d8274
GUEST_EXPORT_FRAMED(0x005d8274, d_005d8274::script__TalkInsert__TalkInsert, 0x4010);  // pushes {r4, lr} first, as the original

// f_005d8ec8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a 1536-character script word, empty.
namespace d_005d8ec8 {

struct __attribute__((packed)) script__WordFix_1536u_ {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 byte_c;
    u8 unknown_d[0x3];  // (not used here)
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
    u32 word_6c;
    u32 word_70;
    u32 word_74;
    u32 word_78;
    u32 word_7c;
    u32 word_80;
    u32 word_84;
    u32 word_88;
    u32 word_8c;
    u32 word_90;
    u32 word_94;
    u32 word_98;
    u32 word_9c;
    u32 word_a0;
    u32 word_a4;
    u32 word_a8;
    u8 byte_ac;
    u8 unknown_ad[0x3];  // (not used here)
    u32 word_b0;
    u8 byte_b4;
    u8 unknown_b5[0x3];  // (not used here)
    u32 word_fix_1536u_vtable;
    u32 word_bc;
    u32 word_c0;
    u8 byte_c4;
    u8 unknown_c5[0x3];  // (not used here)
    u32 word_c8;
    u32 word_cc;
};
GUEST_OFFSET(script__WordFix_1536u_, word_0, 0x0);
GUEST_OFFSET(script__WordFix_1536u_, word_4, 0x4);
GUEST_OFFSET(script__WordFix_1536u_, word_8, 0x8);
GUEST_OFFSET(script__WordFix_1536u_, byte_c, 0xc);
GUEST_OFFSET(script__WordFix_1536u_, word_10, 0x10);
GUEST_OFFSET(script__WordFix_1536u_, word_14, 0x14);
GUEST_OFFSET(script__WordFix_1536u_, word_18, 0x18);
GUEST_OFFSET(script__WordFix_1536u_, word_1c, 0x1c);
GUEST_OFFSET(script__WordFix_1536u_, word_20, 0x20);
GUEST_OFFSET(script__WordFix_1536u_, word_24, 0x24);
GUEST_OFFSET(script__WordFix_1536u_, word_28, 0x28);
GUEST_OFFSET(script__WordFix_1536u_, word_2c, 0x2c);
GUEST_OFFSET(script__WordFix_1536u_, word_30, 0x30);
GUEST_OFFSET(script__WordFix_1536u_, word_34, 0x34);
GUEST_OFFSET(script__WordFix_1536u_, word_38, 0x38);
GUEST_OFFSET(script__WordFix_1536u_, word_3c, 0x3c);
GUEST_OFFSET(script__WordFix_1536u_, word_40, 0x40);
GUEST_OFFSET(script__WordFix_1536u_, word_44, 0x44);
GUEST_OFFSET(script__WordFix_1536u_, word_48, 0x48);
GUEST_OFFSET(script__WordFix_1536u_, word_4c, 0x4c);
GUEST_OFFSET(script__WordFix_1536u_, word_50, 0x50);
GUEST_OFFSET(script__WordFix_1536u_, word_54, 0x54);
GUEST_OFFSET(script__WordFix_1536u_, word_58, 0x58);
GUEST_OFFSET(script__WordFix_1536u_, word_5c, 0x5c);
GUEST_OFFSET(script__WordFix_1536u_, word_60, 0x60);
GUEST_OFFSET(script__WordFix_1536u_, word_64, 0x64);
GUEST_OFFSET(script__WordFix_1536u_, word_68, 0x68);
GUEST_OFFSET(script__WordFix_1536u_, word_6c, 0x6c);
GUEST_OFFSET(script__WordFix_1536u_, word_70, 0x70);
GUEST_OFFSET(script__WordFix_1536u_, word_74, 0x74);
GUEST_OFFSET(script__WordFix_1536u_, word_78, 0x78);
GUEST_OFFSET(script__WordFix_1536u_, word_7c, 0x7c);
GUEST_OFFSET(script__WordFix_1536u_, word_80, 0x80);
GUEST_OFFSET(script__WordFix_1536u_, word_84, 0x84);
GUEST_OFFSET(script__WordFix_1536u_, word_88, 0x88);
GUEST_OFFSET(script__WordFix_1536u_, word_8c, 0x8c);
GUEST_OFFSET(script__WordFix_1536u_, word_90, 0x90);
GUEST_OFFSET(script__WordFix_1536u_, word_94, 0x94);
GUEST_OFFSET(script__WordFix_1536u_, word_98, 0x98);
GUEST_OFFSET(script__WordFix_1536u_, word_9c, 0x9c);
GUEST_OFFSET(script__WordFix_1536u_, word_a0, 0xa0);
GUEST_OFFSET(script__WordFix_1536u_, word_a4, 0xa4);
GUEST_OFFSET(script__WordFix_1536u_, word_a8, 0xa8);
GUEST_OFFSET(script__WordFix_1536u_, byte_ac, 0xac);
GUEST_OFFSET(script__WordFix_1536u_, word_b0, 0xb0);
GUEST_OFFSET(script__WordFix_1536u_, byte_b4, 0xb4);
GUEST_OFFSET(script__WordFix_1536u_, word_fix_1536u_vtable, 0xb8);
GUEST_OFFSET(script__WordFix_1536u_, word_bc, 0xbc);
GUEST_OFFSET(script__WordFix_1536u_, word_c0, 0xc0);
GUEST_OFFSET(script__WordFix_1536u_, byte_c4, 0xc4);
GUEST_OFFSET(script__WordFix_1536u_, word_c8, 0xc8);
GUEST_OFFSET(script__WordFix_1536u_, word_cc, 0xcc);

struct __attribute__((packed)) Local_005d8ec8_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005d8ec8_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_005d8ec8_ea_3, word_4, 0x4);

struct __attribute__((packed)) Local_005d8ec8_r2_1 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
    u32 word_14;
    u8 unknown_18[0x38];  // (not used here)
    u32 word_50;
    u32 word_54;
};
GUEST_OFFSET(Local_005d8ec8_r2_1, word_10, 0x10);
GUEST_OFFSET(Local_005d8ec8_r2_1, word_14, 0x14);
GUEST_OFFSET(Local_005d8ec8_r2_1, word_50, 0x50);
GUEST_OFFSET(Local_005d8ec8_r2_1, word_54, 0x54);

inline constexpr u32 vtable_script__WordFix_1536u__rec = 0x00909ab8u;
inline constexpr u32 vtable_script__WordFix_400u__rec = 0x00909ff8u;
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> clear_aligned;

u32 script__WordFix_1536u___WordFix(gptr<script__WordFix_1536u_> word_fix_1536u) {
    u32 r0 = word_fix_1536u.addr();
    u32 res_1 = 0;
    u32 res_2 = 0;
    u32 r6 = 0u;
    word_fix_1536u->word_0 = r6;
    word_fix_1536u->word_4 = r6;
    word_fix_1536u->word_8 = r6;
    word_fix_1536u->byte_c = 1;
    word_fix_1536u->word_10 = r6;
    word_fix_1536u->word_14 = r6;
    word_fix_1536u->word_18 = r6;
    word_fix_1536u->word_1c = r6;
    word_fix_1536u->word_20 = r6;
    word_fix_1536u->word_24 = r6;
    word_fix_1536u->word_28 = r6;
    word_fix_1536u->word_2c = r6;
    word_fix_1536u->word_30 = r6;
    word_fix_1536u->word_34 = r6;
    word_fix_1536u->word_38 = r6;
    word_fix_1536u->word_3c = r6;
    word_fix_1536u->word_40 = r6;
    word_fix_1536u->word_44 = r6;
    word_fix_1536u->word_48 = r6;
    word_fix_1536u->word_4c = r6;
    word_fix_1536u->word_50 = r6;
    word_fix_1536u->word_54 = r6;
    word_fix_1536u->word_58 = r6;
    word_fix_1536u->word_5c = r6;
    word_fix_1536u->word_60 = r6;
    word_fix_1536u->word_64 = r6;
    word_fix_1536u->word_68 = r6;
    word_fix_1536u->word_6c = r6;
    word_fix_1536u->word_70 = r6;
    word_fix_1536u->word_74 = r6;
    word_fix_1536u->word_78 = r6;
    word_fix_1536u->word_7c = r6;
    word_fix_1536u->word_80 = r6;
    word_fix_1536u->word_84 = r6;
    word_fix_1536u->word_88 = r6;
    word_fix_1536u->word_8c = r6;
    word_fix_1536u->word_90 = r6;
    word_fix_1536u->word_94 = r6;
    word_fix_1536u->word_98 = r6;
    u32 r7 = ~0u;
    word_fix_1536u->word_9c = r6;
    word_fix_1536u->word_a0 = r6;
    word_fix_1536u->word_a4 = r7;
    word_fix_1536u->word_a8 = r7;
    word_fix_1536u->byte_ac = 5;
    word_fix_1536u->word_b0 = r6;
    u32 r4_1 = r0 + 0xb8u;
    word_fix_1536u->byte_b4 = 0x27;
    word_fix_1536u->word_bc = r0 + 0xd0u;
    word_fix_1536u->word_c0 = 0x600;
    u32 r8 = 4u;
    word_fix_1536u->word_fix_1536u_vtable = vtable_script__WordFix_1536u__rec;
    word_fix_1536u->byte_c4 = u8(r8);
    word_fix_1536u->word_c8 = r7;
    word_fix_1536u->word_cc = r7;
    clear_aligned(r4_1 + 0x18u, 0xc00u, 0x27u, guest::cpu()->r[3]);
    u32 r2 = guest::cpu()->r[2];
    u32 r5 = r4_1 + 0xc18u;
    r0 = r4_1 + 0x16u;
    u32 r1 = 0x300u;
    do {
        *gptr<u16>(r0 + 2u) = u16(r6);
        res_1 = r1 - 1u;
        r1 = res_1;
        u32 ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r6);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    gptr<Local_005d8ec8_ea_3> ea_3 = gptr<Local_005d8ec8_ea_3>(r5 + 4u);
    ea_3->word_0 = r5 + 0x18u;
    ea_3->word_4 = 0x190;
    *gptr<u32>(r5) = vtable_script__WordFix_400u__rec;
    *gptr<u8>(r5 + 0xcu) = u8(r8);
    *gptr<u32>(r5 + 0x10u) = r7;
    *gptr<u32>(r5 + 0x14u) = r7;
    clear_aligned(r5 + 0x18u, 0x320u, r2, guest::cpu()->r[3]);
    r0 = r5 + 0x16u;
    r1 = 0xc8u;
    do {
        *gptr<u16>(r0 + 2u) = u16(r6);
        res_2 = r1 - 1u;
        r1 = res_2;
        u32 ea_5 = r0 + 4u;
        *gptr<u16>(ea_5) = u16(r6);
        r0 = ea_5;
        guest::preempt();
    } while (res_2 != 0);
    r0 = r5 - 0xcd0u;
    r1 = 0u;
    do {
        gptr<Local_005d8ec8_r2_1> r2_1 = gptr<Local_005d8ec8_r2_1>(r0 + (r1 << 2));
        r1 += 2u;
        r2_1->word_10 = r6;
        r2_1->word_50 = r6;
        r2_1->word_14 = r6;
        r2_1->word_54 = r6;
        guest::preempt();
    } while (r1 < 0x10u);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005d8ec8
GUEST_EXPORT_FRAMED(0x005d8ec8, d_005d8ec8::script__WordFix_1536u___WordFix, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_005daf1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Empties the selected pocket slot (below 16) of the current player.
namespace d_005daf1c {

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline guest::global<u8, 0x0094fd25> global_0094fd25;
inline constexpr guest::Function<0x002bf9cc, u32(u32, u32, u32, u32)> Pockets__set_slot;
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> get_current_player;

struct __attribute__((packed)) PocketsClearSelectedFrame {
    u32 word_0;
};
GUEST_OFFSET(PocketsClearSelectedFrame, word_0, 0x0);
GUEST_SIZE(PocketsClearSelectedFrame, 0x4);

u32 Pockets__clear_selected(u32 pockets, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<PocketsClearSelectedFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 player = get_current_player(pockets, r1, r2, r3);
    u32 r1_1 = *global_0094fd25;
    if (r1_1 >= 0x10u || player == 0) {
        guest::cpu()->r[1] = r1_1;
        return player;
    }
    frame->word_0 = 1;
    return Pockets__set_slot(player + 0x6bd0u, r1_1, empty_item_address, 0u);
}

}  // namespace d_005daf1c
GUEST_EXPORT_FRAMED(0x005daf1c, d_005daf1c::Pockets__clear_selected, 0x4000);  // pushes {lr} first, as the original

// f_005dc374: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies two C strings (args 1 and 2) into the object's strings at 0xc and 0x38.
namespace d_005dc374 {

inline constexpr u32 vtable_sead__SafeStringBase_char__rec = 0x009047f8u;
inline constexpr guest::Function<0x0013cd00, u32(u32, u32, u32, u32)> SafeString__copy;

struct __attribute__((packed)) SeadSafeStringBaseCharSafeStringBase005dc374Frame {
    u32 object_0_vtable;
    u32 word_4;
};
GUEST_OFFSET(SeadSafeStringBaseCharSafeStringBase005dc374Frame, object_0_vtable, 0x0);
GUEST_OFFSET(SeadSafeStringBaseCharSafeStringBase005dc374Frame, word_4, 0x4);
GUEST_SIZE(SeadSafeStringBaseCharSafeStringBase005dc374Frame, 0x8);

u32 copy_two_names(u32 r0, u32 r1, u32 r2) {
    guest::StackFrameOf<SeadSafeStringBaseCharSafeStringBase005dc374Frame> frame;  // the original's stack frame
    frame->word_4 = r1;
    frame->object_0_vtable = vtable_sead__SafeStringBase_char__rec;
    SafeString__copy(r0 + 0xcu, frame.at(0).addr(), ~0u, guest::cpu()->r[3]);
    frame->object_0_vtable = vtable_sead__SafeStringBase_char__rec;
    frame->word_4 = r2;
    return SafeString__copy(r0 + 0x38u, frame.at(0).addr(), ~0u, guest::cpu()->r[3]);
}

}  // namespace d_005dc374
GUEST_EXPORT_FRAMED(0x005dc374, d_005dc374::copy_two_names, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005dc9d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Adds the item to the current player's pockets and refreshes them.
namespace d_005dc9d4 {

inline constexpr guest::Function<0x002bf814, u32(u32, u32, u32, u32)> Pockets__add;
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> get_current_player;
inline constexpr guest::Function<0x005c81f4, u32(u32, u32, u32, u32)> Pockets__refresh_current;

u32 Pockets__add_and_refresh(u32 pockets, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 player = get_current_player(pockets, r1, r2, r3);
    if (player != 0) {
        u32 r0_3 = Pockets__add(player + 0x6bd0u, r1, r2, 1u);
        frame.release();
        return Pockets__refresh_current(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    return player;
}

}  // namespace d_005dc9d4
GUEST_EXPORT(0x005dc9d4, d_005dc9d4::Pockets__add_and_refresh);

// f_005dd400: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the object's names from C strings.
namespace d_005dd400 {

struct __attribute__((packed)) sead__SafeStringBase_char_ {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u8 unknown_14[0x4];  // (not used here)
    u32 word_18;
    u8 unknown_1c[0x54];  // (not used here)
    u32 word_70;
    u8 unknown_74[0x24];  // (not used here)
    u32 word_98;
    u32 word_9c;
    u32 word_a0;
    u32 word_a4;
    u32 word_a8;
    u8 byte_ac;
    u8 byte_ad;
};
GUEST_OFFSET(sead__SafeStringBase_char_, word_4, 0x4);
GUEST_OFFSET(sead__SafeStringBase_char_, word_8, 0x8);
GUEST_OFFSET(sead__SafeStringBase_char_, word_c, 0xc);
GUEST_OFFSET(sead__SafeStringBase_char_, word_10, 0x10);
GUEST_OFFSET(sead__SafeStringBase_char_, word_18, 0x18);
GUEST_OFFSET(sead__SafeStringBase_char_, word_70, 0x70);
GUEST_OFFSET(sead__SafeStringBase_char_, word_98, 0x98);
GUEST_OFFSET(sead__SafeStringBase_char_, word_9c, 0x9c);
GUEST_OFFSET(sead__SafeStringBase_char_, word_a0, 0xa0);
GUEST_OFFSET(sead__SafeStringBase_char_, word_a4, 0xa4);
GUEST_OFFSET(sead__SafeStringBase_char_, word_a8, 0xa8);
GUEST_OFFSET(sead__SafeStringBase_char_, byte_ac, 0xac);
GUEST_OFFSET(sead__SafeStringBase_char_, byte_ad, 0xad);

inline constexpr u32 vtable_sead__SafeStringBase_char__rec = 0x009047f8u;
inline guest::global<u8, 0x008c9f1c> empty_string;
inline constexpr guest::Function<0x0013cd00, u32(u32, u32, u32, u32)> SafeString__copy;

struct __attribute__((packed)) SeadSafeStringBaseCharSafeStringBase005dd400Frame {
    u32 object_0_vtable;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(SeadSafeStringBaseCharSafeStringBase005dd400Frame, object_0_vtable, 0x0);
GUEST_OFFSET(SeadSafeStringBaseCharSafeStringBase005dd400Frame, word_4, 0x4);
GUEST_SIZE(SeadSafeStringBaseCharSafeStringBase005dd400Frame, 0xc);

void sead__SafeStringBase_char___SafeStringBase_005dd400(gptr<sead__SafeStringBase_char_> safe_string_base_char, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<SeadSafeStringBaseCharSafeStringBase005dd400Frame> frame;  // the original's stack frame
    safe_string_base_char->word_4 = 0;
    safe_string_base_char->word_8 = r1;
    safe_string_base_char->word_c = 0;
    safe_string_base_char->word_10 = 0;
    *gptr<u8>(safe_string_base_char->word_18) = *empty_string;
    frame->word_4 = r2;
    frame->object_0_vtable = vtable_sead__SafeStringBase_char__rec;
    SafeString__copy(safe_string_base_char.addr() + 0x40u, frame.at(0).addr(), ~0u, vtable_sead__SafeStringBase_char__rec);
    *gptr<u8>(safe_string_base_char->word_70) = *empty_string;
    u32 r0_2 = ~0u;
    safe_string_base_char->word_98 = r0_2;
    safe_string_base_char->word_9c = r3;
    safe_string_base_char->word_a0 = r0_2;
    safe_string_base_char->word_a4 = r0_2;
    safe_string_base_char->word_a8 = r0_2;
    safe_string_base_char->byte_ac = 2;
    safe_string_base_char->byte_ad = 0;
    guest::cpu()->r[1] = 2u;
}

}  // namespace d_005dd400
GUEST_EXPORT_FRAMED(0x005dd400, d_005dd400::sead__SafeStringBase_char___SafeStringBase_005dd400, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_005dd51c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies a C string (arg 1) into the object's string at 8.
namespace d_005dd51c {

inline constexpr u32 vtable_sead__SafeStringBase_char__rec = 0x009047f8u;
inline constexpr guest::Function<0x0013cd00, u32(u32, u32, u32, u32)> SafeString__copy;

struct __attribute__((packed)) SeadSafeStringBaseCharSafeStringBase005dd51cFrame {
    u32 object_0_vtable;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(SeadSafeStringBaseCharSafeStringBase005dd51cFrame, object_0_vtable, 0x0);
GUEST_OFFSET(SeadSafeStringBaseCharSafeStringBase005dd51cFrame, word_4, 0x4);
GUEST_SIZE(SeadSafeStringBaseCharSafeStringBase005dd51cFrame, 0xc);

u32 sead__SafeStringBase_char___SafeStringBase_005dd51c(u32 r0, u32 r1) {
    guest::StackFrameOf<SeadSafeStringBaseCharSafeStringBase005dd51cFrame> frame;  // the original's stack frame
    frame->word_4 = r1;
    frame->object_0_vtable = vtable_sead__SafeStringBase_char__rec;
    return SafeString__copy(r0 + 8u, frame.at(0).addr(), ~0u, vtable_sead__SafeStringBase_char__rec);
}

}  // namespace d_005dd51c
GUEST_EXPORT_FRAMED(0x005dd51c, d_005dd51c::sead__SafeStringBase_char___SafeStringBase_005dd51c, 0x4000);  // pushes {lr} first, as the original

// f_005dd5b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Formats the number with three digits into the string.
namespace d_005dd5b8 {

inline constexpr guest::Function<0x00544a20, u32(u32, u32, u32)> PrintOutput__finish_to_buffer;
inline constexpr guest::Function<0x00544d08, u32(u32, u32, u32)> PrintOutput__write;
inline constexpr guest::Function<0x00544f18, u32(u32, u32, u32)> print_finish;
inline constexpr guest::Function<0x00544fec, u32(u32, u32)> print_append;
inline constexpr guest::Function<0x0054a644, u32(u32, u32, u32, u32)> construct_print_output;

struct __attribute__((packed)) SafeStringFormat3DigitsFrame {
    u8 unknown_0[0x28];  // (not read or written by name)
    u8 byte_28;
    u8 unknown_29[0x1f];  // (not read or written by name)
    u32 word_48;
};
GUEST_OFFSET(SafeStringFormat3DigitsFrame, byte_28, 0x28);
GUEST_OFFSET(SafeStringFormat3DigitsFrame, word_48, 0x48);
GUEST_SIZE(SafeStringFormat3DigitsFrame, 0x4c);

u32 SafeString__format_3_digits(u32 safe_string, u32 r1, u32 r2) {
    guest::StackFrameOf<SafeStringFormat3DigitsFrame> frame;  // the original's stack frame
    u32 r0_1 = frame.at(8).addr();
    construct_print_output(r0_1, safe_string + 0x34u, r2, guest::cpu()->r[3]);
    print_append(r0_1, 0x894b7cu);
    u32 r2_2 = guest::cpu()->r[2];
    frame->word_48 = r1;
    if (PrintOutput__finish_to_buffer(r0_1, frame.at(0x28).addr(), r2_2) != 0) {
        r2_2 = *gptr<u32>(r0_1 + 4u);
        PrintOutput__write(frame.at(0x48).addr(), frame->byte_28 == 0 ? 0u : frame.at(0x28).addr(), r2_2);
    }
    print_finish(r0_1, guest::cpu()->r[1], r2_2);
    return frame.at(0x1c).addr();
}

}  // namespace d_005dd5b8
GUEST_EXPORT_FRAMED(0x005dd5b8, d_005dd5b8::SafeString__format_3_digits, 0x4030);  // pushes {r4, r5, lr} first, as the original
