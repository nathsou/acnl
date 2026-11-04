// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen. Hexadecimal constants are the original's
// (addresses, offsets, sizes and ids as the game has them).
#include "guest/guest.hpp"
#include "core/word_pair.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_005a064c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Initializes a field drop: three empty items, no kind (0xa5), counters cleared.
namespace d_005a064c {

struct __attribute__((packed)) FieldDrop {
    u8 unknown_0[0xc];  // (not used here)
    u8 byte_c;
    u8 byte_d;
    u8 byte_e;
    u8 byte_f;
    u8 byte_10;
    u8 byte_11;
    u8 byte_12;
    u8 byte_13;
    u8 byte_14;
};
GUEST_OFFSET(FieldDrop, byte_c, 0xc);
GUEST_OFFSET(FieldDrop, byte_d, 0xd);
GUEST_OFFSET(FieldDrop, byte_e, 0xe);
GUEST_OFFSET(FieldDrop, byte_f, 0xf);
GUEST_OFFSET(FieldDrop, byte_10, 0x10);
GUEST_OFFSET(FieldDrop, byte_11, 0x11);
GUEST_OFFSET(FieldDrop, byte_12, 0x12);
GUEST_OFFSET(FieldDrop, byte_13, 0x13);
GUEST_OFFSET(FieldDrop, byte_14, 0x14);

inline constexpr guest::Function<0x002fc20c, u32(u32)> construct_empty_item;

u32 FieldDrop__init(gptr<FieldDrop> drop) {
    construct_empty_item(drop.addr());
    construct_empty_item(drop.addr() + 4u);
    construct_empty_item(drop.addr() + 8u);
    drop->byte_12 = 0xa5;
    drop->byte_13 = 0;
    drop->byte_14 = 0;
    drop->byte_f = 0;
    drop->byte_10 = 0;
    drop->byte_11 = 0;
    drop->byte_c = u8(u32(drop->byte_c) & ~0xffu);
    drop->byte_d = u8(u32(drop->byte_d) & ~0xffu | 0x28u);
    drop->byte_e = u8(u32(drop->byte_e) & ~0xffu);
    return drop.addr();
}

}  // namespace d_005a064c
GUEST_EXPORT_FRAMED(0x005a064c, d_005a064c::FieldDrop__init, 0x4010);  // pushes {r4, lr} first, as the original

// f_005a06b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Forwards to do_nothing_002f777c.
namespace d_005a06b4 {

inline constexpr guest::Function<0x002f777c, u32(u32, u32)> do_nothing_002f777c;

u32 do_nothing_002f777c_veneer_10(u32 r0) {
    return do_nothing_002f777c(r0, guest::cpu()->r[1]);
}

}  // namespace d_005a06b4
GUEST_EXPORT(0x005a06b4, d_005a06b4::do_nothing_002f777c_veneer_10);

// f_005a06d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The index of the used entry for (x, z, layer) among the 32 five-byte field markers; -1 when none (layer 0xa5: the
// current one).
namespace d_005a06d4 {

struct __attribute__((packed)) Local_005a06d4_r3_1 {
    u8 unknown_0[0x1];  // (not used here)
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Local_005a06d4_r3_1, byte_1, 0x1);
GUEST_OFFSET(Local_005a06d4_r3_1, byte_2, 0x2);

inline constexpr u32 field_markers_address = 0x009b41c4u;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> current_scene_id;

u32 find_field_marker(u32 field_drops, u32 r1, u32 layer, u32 r3) {
    u32 x = field_drops;
    u32 z = r1;
    if (layer == 0xa5u) {
        u32 scene_2 = current_scene_id(field_drops, r1, layer, r3);
        layer = scene_2;
    }
    r1 = field_markers_address;
    field_drops = 0u;
    do {
        u32 r6_1 = field_drops * 5u;
        gptr<Local_005a06d4_r3_1> r3_1 = gptr<Local_005a06d4_r3_1>(r6_1 + r1);
        u32 r12_1 = r3_1->byte_2;
        if (r12_1 != 0xa5u && *gptr<u8>(r1 + r6_1) == x && r3_1->byte_1 == z && r12_1 == layer) {
            guest::cpu()->r[1] = r1;
            return field_drops;
        }
        field_drops += 1u;
        guest::preempt();
    } while (s32(field_drops) < 0x20);
    guest::cpu()->r[1] = r1;
    return ~0u;
}

}  // namespace d_005a06d4
GUEST_EXPORT_FRAMED(0x005a06d4, d_005a06d4::find_field_marker, 0x4070);  // pushes {x, z, r6, lr} first, as the original

// f_005a08dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sends or applies the pending field drops (as field-drop records) to the stations.
namespace d_005a08dc {

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr u32 field_markers_address = 0x009b41c4u;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> Item__copy;
inline constexpr guest::Function<0x002fc900, u32(u32, u32, u32, u32)> mode_above_1;
inline constexpr guest::Function<0x00305f44, u32(u32)> current_net_station;
inline constexpr guest::Function<0x0030b6c4, u32(u32, u32, u32, u32)> main_object_idle;
inline constexpr guest::Function<0x005a064c, u32(u32, u32, u32, u32)> FieldDrop__init;
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> send_message;
inline constexpr guest::Function<0x00624f00, u32(u32, u32, u32, u32)> station_is_waited_for;

struct __attribute__((packed)) FieldDropsSendPendingFrame {
    u8 unknown_0[0xc];  // (not read or written by name)
    u8 byte_c;
    u8 byte_d;
    u8 byte_e;
    u8 unknown_f[0x3];  // (not read or written by name)
    u8 byte_12;
    u8 byte_13;
    u8 byte_14;
    u8 unknown_15[0x7];  // (not read or written by name)
};
GUEST_OFFSET(FieldDropsSendPendingFrame, byte_c, 0xc);
GUEST_OFFSET(FieldDropsSendPendingFrame, byte_d, 0xd);
GUEST_OFFSET(FieldDropsSendPendingFrame, byte_e, 0xe);
GUEST_OFFSET(FieldDropsSendPendingFrame, byte_12, 0x12);
GUEST_OFFSET(FieldDropsSendPendingFrame, byte_13, 0x13);
GUEST_OFFSET(FieldDropsSendPendingFrame, byte_14, 0x14);
GUEST_SIZE(FieldDropsSendPendingFrame, 0x1c);

u32 FieldDrops__send_pending(u32 field_drops, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<FieldDropsSendPendingFrame> frame;  // the original's stack frame
    u32 r7 = r1;
    u32 r8 = r2;
    r1 = field_markers_address;
    r2 = *frame.at<u32>(0x38);
    u32 r12 = field_drops;
    u32 r9 = r3;
    u32 r6 = 0u;
L_5a0900:;
    if (*gptr<u8>(r6 + (r6 << 2) + r1 + 2u) != 0xa5u) {
        r6 += 1u;
        if (s32(r6) < 0x20) {
            guest::preempt();
            goto L_5a0900;
        }
        r6 = ~0u;
    } else if (r6 + 1u != 0) {
        u32 r0_1 = r6 + (r6 << 2);
        u32 r5 = r0_1 + r1;
        *gptr<u8>(r5) = u8(r7);
        *gptr<u8>(r5 + 1u) = u8(r8);
        *gptr<u8>(r5 + 2u) = u8(r9);
        *gptr<u8>(r5 + 4u) = u8(r12);
        if (r2 != 0) {
            u32 r0_2 = mode_above_1(r0_1, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_2 != 0) {
                u32 r0_3 = main_object_idle(r0_2, r1, r2, r3);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_3 != 0) {
                    u32 r0_5 = FieldDrop__init(frame.at(0).addr(), r1, r2, r3);
                    u32 r4_1 = frame.at(0).addr();
                    u32 station = current_net_station(r0_5);
                    u32 r3_2 = frame->byte_d;
                    u32 r1_2 = frame->byte_e;
                    frame->byte_c = u8((station & 3u | u32(frame->byte_c) & ~3u) & ~0xfcu);
                    u32 r2_2 = r3_2 & ~0x3fu;
                    frame->byte_d = u8(r2_2 | 0x20u);
                    frame->byte_e = u8(r1_2 & ~0x3fu & ~0xc0u);
                    frame->byte_13 = u8(r7);
                    frame->byte_14 = u8(r8);
                    Item__copy(r4_1, empty_item_address, r2_2, r3_2);
                    Item__copy(r4_1 + 4u, empty_item_address, guest::cpu()->r[2], guest::cpu()->r[3]);
                    Item__copy(r4_1 + 8u, empty_item_address, guest::cpu()->r[2], guest::cpu()->r[3]);
                    frame->byte_12 = u8(r9);
                    send_message(0x3au, 4u, frame.at(0).addr(), 0x16u);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                }
            }
            r7 = 1u;
            u32 i = r7;
            *gptr<u8>(r5 + 3u) = u8(r7);
            do {
                u32 r0_10 = station_is_waited_for(i & 0xffu, r1, r2, r3);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_10 != 0) {
                    r2 = *gptr<u8>(r5 + 3u);
                    r1 = r2 | lsl_r(r7, i & 0xff);
                    *gptr<u8>(r5 + 3u) = u8(r1);
                }
                i += 1u;
                guest::preempt();
            } while (i < 4u);
            u32 r0_11 = *gptr<u8>(r5 + 4u);
            u32 zf_1 = r0_11 - 0x17u == 0;
            if (!zf_1) {
                if (zf_1 || s32(r0_11) < 0x17) {
                    if (r0_11 == 2u || r0_11 == 4u || r0_11 == 5u || r0_11 == 0x15u) {
                        goto L_5a0a98;
                    }
                    guest::cpu()->r[1] = r1;
                    return r6;
                }
                if (r0_11 != 0x18u && r0_11 != 0x19u && r0_11 != 0x1au) {
                    guest::cpu()->r[1] = r1;
                    return r6;
                }
            }
L_5a0a98:;
            *gptr<u8>(r5 + 3u) = u8(u32(*gptr<u8>(r5 + 3u)) | 0x10u);
        }
    }
    guest::cpu()->r[1] = r1;
    return r6;
}

}  // namespace d_005a08dc
GUEST_EXPORT_FRAMED(0x005a08dc, d_005a08dc::FieldDrops__send_pending, 0x43f0);  // pushes {i, r5, r6, r7, r8, r9, lr} first, as the original

// f_005a0ab8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// For the 32 five-byte entries at 0x9b41c4: clears those of kind 0x23 and places an empty item for those of kind 0x24
// (00168868), freeing them.
namespace d_005a0ab8 {

struct __attribute__((packed)) Local_005a0ab8_r5_1 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 unknown_3[0x1];  // (not used here)
    u8 byte_4;
};
GUEST_OFFSET(Local_005a0ab8_r5_1, byte_0, 0x0);
GUEST_OFFSET(Local_005a0ab8_r5_1, byte_1, 0x1);
GUEST_OFFSET(Local_005a0ab8_r5_1, byte_2, 0x2);
GUEST_OFFSET(Local_005a0ab8_r5_1, byte_4, 0x4);

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr u32 field_markers_address = 0x009b41c4u;
inline constexpr guest::Function<0x00168868, u32(u32, u32, u32, u32)> FieldDrop__place_item;

struct __attribute__((packed)) FieldDropsFinishKind2324Frame {
    u32 word_0;
};
GUEST_OFFSET(FieldDropsFinishKind2324Frame, word_0, 0x0);
GUEST_SIZE(FieldDropsFinishKind2324Frame, 0x4);

void FieldDrops__finish_kind_23_24(u32 r0_unused, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<FieldDropsFinishKind2324Frame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 i = 0u;
    u32 r6 = 0xa5u;
    u32 r7 = field_markers_address;
    u32 r8 = empty_item_address;
    do {
        gptr<Local_005a0ab8_r5_1> r5_1 = gptr<Local_005a0ab8_r5_1>(i * 5u + r7);
        u32 r3_1 = r5_1->byte_2;
        if (r3_1 != 0xa5u) {
            u32 r0_1 = r5_1->byte_4;
            if (r0_1 == 0x23u) {
                r5_1->byte_2 = u8(r6);
            } else if (r0_1 == 0x24u) {
                frame->word_0 = r8;
                u32 r1_1 = r5_1->byte_1;
                u32 r0_2 = r5_1->byte_0;
                FieldDrop__place_item(r0_2, r1_1, 0u, r3_1);
                r1 = guest::cpu()->r[1];
                r5_1->byte_2 = u8(r6);
            }
        }
        i += 1u;
        guest::preempt();
    } while (s32(i) < 0x20);
    guest::cpu()->r[1] = r1;
}

}  // namespace d_005a0ab8
GUEST_EXPORT_FRAMED(0x005a0ab8, d_005a0ab8::FieldDrops__finish_kind_23_24, 0x43f0);  // pushes {i, r5, r6, r7, r8, r9, lr} first, as the original

// f_005a0d3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Spawns the effects of an object at random positions around it (with its matrix).
namespace d_005a0d3c {

struct __attribute__((packed)) SpawnRandomEffectsArg0 {
    u8 unknown_0[0x18];  // (not used here)
    u32 word_18;
    u32 word_1c;
    u8 unknown_20[0x8];  // (not used here)
    u8 byte_28;
};
GUEST_OFFSET(SpawnRandomEffectsArg0, word_18, 0x18);
GUEST_OFFSET(SpawnRandomEffectsArg0, word_1c, 0x1c);
GUEST_OFFSET(SpawnRandomEffectsArg0, byte_28, 0x28);

struct __attribute__((packed)) SpawnRandomEffectsArg1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(SpawnRandomEffectsArg1, word_4, 0x4);

struct __attribute__((packed)) Local_005a0d3c_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005a0d3c_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_005a0d3c_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_005a0d3c_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_005a0d3c_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_005a0d3c_ea_3, word_4, 0x4);
GUEST_OFFSET(Local_005a0d3c_ea_3, word_8, 0x8);

struct __attribute__((packed)) Local_005a0d3c_r3_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_005a0d3c_r3_3, word_0, 0x0);
GUEST_OFFSET(Local_005a0d3c_r3_3, word_4, 0x4);
GUEST_OFFSET(Local_005a0d3c_r3_3, word_8, 0x8);

inline constexpr u32 effect_spawn_params_address = 0x00975beeu;
inline constexpr u32 origin_x_address = 0x00ae5658u;
inline constexpr u32 effect_spawn_context_address = 0x00ae5664u;
inline constexpr guest::Function<0x002073dc, u32(u32, u32, u32, u32)> EffectHandle__start;
inline constexpr guest::Function<0x002e5ed8, u32(u32, u32)> EffectHandle__stop;
inline constexpr guest::Function<0x002e627c, u32(u32, u32)> EffectHandle__set_endless;
inline constexpr guest::Function<0x002e668c, u32(u32, u32)> EffectHandle__get_position;
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> random_below;
inline constexpr guest::Function<0x0052e294, u32(u32, u32, u32, u32)> Matrix34__from_position_and_angles;
inline constexpr guest::Function<0x005c08dc, u32(u32, u32, u32, u32)> slot_object_words_47c_480;

struct __attribute__((packed)) SpawnRandomEffectsFrame {
    u8 unknown_0[0x4];  // (not read or written by name)
    u32 word_4;
    u8 unknown_8[0x48];  // (not read or written by name)
};
GUEST_OFFSET(SpawnRandomEffectsFrame, word_4, 0x4);
GUEST_SIZE(SpawnRandomEffectsFrame, 0x50);

void spawn_random_effects(gptr<SpawnRandomEffectsArg0> arg0, gptr<SpawnRandomEffectsArg1> arg1, u32 r2, u32 r3) {
    guest::StackFrameOf<SpawnRandomEffectsFrame> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 effect_handle = r0;
    u32 r2_1 = r2 + effect_handle;
    arg0->byte_28 = 0xf;
    u32 r6 = r3;
    *gptr<u8>(r2_1 + 0x20u) = 0x5a;
    u32 random = random_below(r3 == 0 ? arg0->word_1c : arg0->word_18, 0x5au, r2_1, r3);
    u32 r8 = random;
    u32 r4 = arg1->word_4;
    u32 r7 = 0u;
    u32 r0_4 = slot_object_words_47c_480(frame.at(0).addr(), frame.at(4).addr(), 4u, 1u);
    r1 = 0u;
    if (r0_4 == 0) {
        r6 = 0u;
        *frame.at<u32>(0) = r1;
        frame->word_4 = r1;
    }
    u32 r3_1 = *frame.at<u32>(0);
    u32 r0_5 = frame->word_4;
    r2 = r3_1 - 1u;
    u32 r12 = r0_5 - 1u;
    r3 = r3_1 + 1u;
    u32 r9 = r0_5 + 1u;
    if (r4 != 0) {
        do {
            u32 r0_6 = *gptr<u32>(r4 + 0x68u);
            if ((r0_6 & 0x10u) != 0 && (r0_6 & 0x20u) == 0 && *gptr<u8>(r4 + 0x11bu) == 0) {
                if (r6 != 0) {
                    u32 r0_7 = *gptr<u32>(r4 + 0x28u);
                    u32 res_1 = r0_7 - r2;
                    u32 nf_1 = res_1 >> 0x1f;
                    u32 vf_1 = ((r0_7 ^ r2) & (r0_7 ^ res_1)) >> 0x1f;
                    if (nf_1 == vf_1) {
                        u32 res_2 = r3 - r0_7;
                        nf_1 = res_2 >> 0x1f;
                        vf_1 = ((r3 ^ r0_7) & (r3 ^ res_2)) >> 0x1f;
                    }
                    if (nf_1 != vf_1) {
                        goto L_5a0e28;
                    }
                    u32 r0_8 = *gptr<u32>(r4 + 0x2cu);
                    u32 res_3 = r12 - r0_8;
                    u32 nf_2 = res_3 >> 0x1f;
                    u32 zf_1 = res_3 == 0;
                    u32 vf_2 = ((r12 ^ r0_8) & (r12 ^ res_3)) >> 0x1f;
                    if (zf_1 || nf_2 != vf_2) {
                        u32 res_4 = r0_8 - r9;
                        nf_2 = res_4 >> 0x1f;
                        zf_1 = res_4 == 0;
                        vf_2 = ((r0_8 ^ r9) & (r0_8 ^ res_4)) >> 0x1f;
                    }
                    if (!zf_1 && nf_2 == vf_2) {
                        goto L_5a0e28;
                    }
                    if (r7 == r8) {
                        goto L_5a0e3c;
                    }
                } else if (r7 == r8) {
                    goto L_5a0e3c;
                }
                r7 += 1u;
            }
L_5a0e28:;
            r4 = *gptr<u32>(r4 + 8u);
            guest::preempt();
        } while (r4 != 0);
    }
    guest::cpu()->r[1] = r1;
    return;
L_5a0e3c:;
    if (r4 != 0) {
        u32 r0_9 = *gptr<u32>(effect_handle + 0xcu);
        if (r0_9 == 0 || *gptr<u32>(effect_handle + 0x10u) != *gptr<u32>(r0_9 + 0xcu)) {
            *frame.at<u32>(0) = 0xae5664;
            gptr<Local_005a0d3c_ea_2> ea_2 = gptr<Local_005a0d3c_ea_2>(frame.at(4).addr());
            ea_2->word_0 = 1;
            ea_2->word_4 = r1;
            EffectHandle__start(effect_handle, 0xfau, origin_x_address, effect_spawn_params_address);
            EffectHandle__set_endless(effect_handle, 1u);
        }
        gptr<Local_005a0d3c_r3_3> r3_3 = gptr<Local_005a0d3c_r3_3>(frame.at(0x40).addr());
        gptr<Local_005a0d3c_ea_3> ea_3 = gptr<Local_005a0d3c_ea_3>(r4 + 0x40u);
        u32 r1_2 = ea_3->word_4;
        u32 r2_3 = ea_3->word_8;
        r3_3->word_0 = ea_3->word_0;
        r3_3->word_4 = r1_2;
        r3_3->word_8 = r2_3;
        *frame.at<u16>(0) = 0;
        Matrix34__from_position_and_angles(frame.at(0x10).addr(), frame.at(0x40).addr(), *frame.at<u32>(0), r3_3.addr());
        EffectHandle__get_position(effect_handle, frame.at(0x10).addr());
        EffectHandle__stop(effect_handle, origin_x_address);
        *gptr<u8>(r4 + 0x11bu) = 0x2d;
        *gptr<u32>(r4 + 0x68u) = *gptr<u32>(r4 + 0x68u) | 0x20u;
        return;
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_005a0d3c
GUEST_EXPORT_FRAMED(0x005a0d3c, d_005a0d3c::spawn_random_effects, 0x47f0);  // pushes {r4, effect_handle, r6, r7, r8, r9, r10, lr} first, as the original

// f_005a0ef8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The index of the used entry for (x, z, layer) among the 32 field drops (0x16 bytes each); -1 when none.
namespace d_005a0ef8 {

struct __attribute__((packed)) Local_005a0ef8_r3_1 {
    u8 unknown_0[0xe];  // (not used here)
    u8 byte_e;
    u8 byte_f;
    u8 unknown_10[0x1];  // (not used here)
    u8 byte_11;
    u8 unknown_12[0x3];  // (not used here)
    u8 byte_15;
};
GUEST_OFFSET(Local_005a0ef8_r3_1, byte_e, 0xe);
GUEST_OFFSET(Local_005a0ef8_r3_1, byte_f, 0xf);
GUEST_OFFSET(Local_005a0ef8_r3_1, byte_11, 0x11);
GUEST_OFFSET(Local_005a0ef8_r3_1, byte_15, 0x15);

inline constexpr u32 field_drops_address = 0x009b4264u;

u32 find_field_drop(u32 field_drop, u32 z, u32 layer) {
    u32 r12 = field_drops_address;
    u32 x = field_drop;
    field_drop = 0u;
    do {
        gptr<Local_005a0ef8_r3_1> r3_1 = gptr<Local_005a0ef8_r3_1>(r12 + (field_drop * 3u + (field_drop << 3) << 1));
        if (r3_1->byte_11 != 0 && r3_1->byte_e == x && r3_1->byte_f == z && r3_1->byte_15 == layer) {
            return field_drop;
        }
        field_drop += 1u;
        guest::preempt();
    } while (s32(field_drop) < 0x20);
    return ~0u;
}

}  // namespace d_005a0ef8
GUEST_EXPORT_FRAMED(0x005a0ef8, d_005a0ef8::find_field_drop, 0x30);  // pushes {x, r5} first, as the original

// f_005a1174: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// For an item event of this station: counts it (counter 9) for special items, items of category 0x36 or item 0x3413,
// and records shell finds on beach terrain 0xac for the tour result.
namespace d_005a1174 {

struct __attribute__((packed)) CountItemFoundEventArg0 {
    u8 unknown_0[0xc];  // (not used here)
    u8 byte_c;
    u8 byte_d;
    u8 byte_e;
    u8 byte_f;
};
GUEST_OFFSET(CountItemFoundEventArg0, byte_c, 0xc);
GUEST_OFFSET(CountItemFoundEventArg0, byte_d, 0xd);
GUEST_OFFSET(CountItemFoundEventArg0, byte_e, 0xe);
GUEST_OFFSET(CountItemFoundEventArg0, byte_f, 0xf);

inline constexpr u32 tour_instance_address = 0x0095c6d0u;
inline constexpr u32 tour_result_instance_address = 0x0095c71cu;
inline guest::global<u32, 0x0095c6d0> tour_instance;
inline guest::global<u32, 0x0095c71c> tour_result_instance;
inline constexpr guest::Function<0x001b7ce8, u32(u32, u32, u32, u32)> TourResult__record_item;
inline constexpr guest::Function<0x0024b7b8, u32(u32, u32)> add_to_current_player_counter;
inline constexpr guest::Function<0x002a7de4, u32(u32, u32)> decrement_countdown;
inline constexpr guest::Function<0x002fcb34, u32(u32, u32)> Item__category;
inline constexpr guest::Function<0x002fcb84, u32(u32, u32)> Item__has_number;
inline constexpr guest::Function<0x002fccdc, u32(u32, u32)> indexed_item_type;
inline constexpr guest::Function<0x00305f2c, u32(u32, u32)> read_global_object_byte;
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> current_net_station;
inline constexpr guest::Function<0x00315788, u32(u32, u32, u32)> terrain_at_world;
inline constexpr guest::Function<0x006b9d78, u32(u32)> kind_is_3_5_7_16_or_1a;
inline constexpr guest::Function<0x006e0890, u32(u32)> read_u8_0x009507f0_;
inline constexpr guest::Function<0x006f0130, u32(u32, u32)> Player__counter;
inline constexpr guest::Function<0x0076e6cc, u32(u32)> entry_group;

void count_item_found_event(gptr<CountItemFoundEventArg0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 station = current_net_station(arg0.addr(), r1, r2, r3);
    u32 r1_1 = arg0->byte_d;
    if (station == r1_1) {
        u32 r0_2 = read_global_object_byte(station, r1_1);
        r1_1 = guest::cpu()->r[1];
        if (r0_2 != 3u) {
            if (kind_is_3_5_7_16_or_1a(indexed_item_type(r1, r1_1)) != 0) {
                Player__counter(4u, 1u);
                u32 r0_5 = add_to_current_player_counter(9u, 1u);
                frame.release();
                decrement_countdown(r0_5, guest::cpu()->r[1]);
                return;
            }
            if (entry_group(*tour_instance) == 1u) {
                u32 r1_6 = arg0->byte_f;
                u32 r0_8 = arg0->byte_e;
                u32 r0_9 = terrain_at_world(r0_8, r1_6, 0u);
                if (r0_9 == 0xacu) {
                    if (read_u8_0x009507f0_(r0_9) != 0) {
                        u32 r0_11 = *tour_result_instance;
                        if (r0_11 != 0) {
                            u32 r1_7 = arg0->byte_d;
                            TourResult__record_item(r0_11, r1_7, 1u, r1);
                        }
                    }
                }
            }
            u32 r0_13 = entry_group(*tour_instance);
            r1_1 = guest::cpu()->r[1];
            if (r0_13 != 1u) {
                u32 category = Item__category(arg0.addr() + 8u, r1_1);
                if (category != 0x36u) {
                    u32 r0_17 = Item__has_number(arg0.addr() + 8u, 0x3413u);
                    r1_1 = guest::cpu()->r[1];
                    if (r0_17 == 0 || (u32(arg0->byte_c) & 2u) != 0) {
                        return;
                    }
                }
                Player__counter(3u, 1u);
                u32 r0_18 = add_to_current_player_counter(9u, 1u);
                frame.release();
                decrement_countdown(r0_18, guest::cpu()->r[1]);
                return;
            }
        }
    }
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_005a1174
GUEST_EXPORT(0x005a1174, d_005a1174::count_item_found_event);

// f_005a1ba0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Buries the drop's item (a placeholder when its number is not indexed) at its cell, then clears the tile; true when
// it could.
namespace d_005a1ba0 {

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x00168868, u32(u32, u32, u32, u32)> FieldDrop__place_item;
inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32, u32)> construct_empty_item;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> construct_item;
inline constexpr guest::Function<0x002fccc4, u32(u32)> item_number_is_indexed;
inline constexpr guest::Function<0x0059a2d8, u32(u32, u32, u32, u32)> fgobj__ObjectBury__ObjectBury;
inline constexpr guest::Function<0x0059e65c, u32(u32, u32, u32)> clear_field_tile;

struct __attribute__((packed)) FieldDropBuryFrame {
    u32 word_0;
    u8 unknown_4[0x4];  // (not read or written by name)
};
GUEST_OFFSET(FieldDropBuryFrame, word_0, 0x0);
GUEST_SIZE(FieldDropBuryFrame, 0x8);

u32 FieldDrop__bury(u32 field_drop, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<FieldDropBuryFrame> frame;  // the original's stack frame
    construct_empty_item(frame.at(4).addr(), r1, r2, r3);
    if (item_number_is_indexed(field_drop) != 0) {
        Item__copy(frame.at(4).addr(), field_drop);
    } else {
        u32 r0_4 = frame.at(0).addr();
        construct_item(r0_4, 0x9eu);
        Item__copy(frame.at(4).addr(), r0_4);
    }
    frame->word_0 = r2;
    u32 r2_4 = *gptr<u8>(field_drop + 0xfu);
    u32 r1_2 = *gptr<u8>(field_drop + 0xeu);
    if (fgobj__ObjectBury__ObjectBury(frame.at(4).addr(), r1_2, r2_4, r1 == 0 ? 0u : 2u) != 0) {
        frame->word_0 = 0x95bfdc;
        u32 r3_4 = *gptr<u8>(field_drop + 0x15u);
        u32 r1_4 = *gptr<u8>(field_drop + 0xfu);
        u32 r0_8 = *gptr<u8>(field_drop + 0xeu);
        FieldDrop__place_item(r0_8, r1_4, u32(*gptr<u8>(field_drop + 0xcu)) & 1u, r3_4);
        u32 r1_5 = *gptr<u8>(field_drop + 0xfu);
        u32 r0_9 = *gptr<u8>(field_drop + 0xeu);
        clear_field_tile(r0_9, r1_5, 0u);
        return 1u;
    }
    return 0u;
}

}  // namespace d_005a1ba0
GUEST_EXPORT_FRAMED(0x005a1ba0, d_005a1ba0::FieldDrop__bury, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005a213c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Throws the drop's item from its cell, with its effect and sound, then clears the tile.
namespace d_005a213c {

struct __attribute__((packed)) FieldDrop {
    u8 unknown_0[0xc];  // (not used here)
    u8 byte_c;
    u8 unknown_d[0x1];  // (not used here)
    u8 byte_e;
    u8 byte_f;
    u8 unknown_10[0x5];  // (not used here)
    u8 byte_15;
};
GUEST_OFFSET(FieldDrop, byte_c, 0xc);
GUEST_OFFSET(FieldDrop, byte_e, 0xe);
GUEST_OFFSET(FieldDrop, byte_f, 0xf);
GUEST_OFFSET(FieldDrop, byte_15, 0x15);

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr u32 effect_spawn_params_address = 0x00975beeu;
inline constexpr u32 effect_spawn_context_address = 0x00ae5664u;
inline constexpr guest::Function<0x00168868, u32(u32, u32, u32, u32)> FieldDrop__place_item;
inline constexpr guest::Function<0x002075d4, u32(u32, u32, u32, u32)> Effect__spawn;
inline constexpr guest::Function<0x00250354, u32(u32, u32)> SoundObj__place_at;
inline constexpr guest::Function<0x002504d4, u32(u32, u32)> SoundObj__play;
inline constexpr guest::Function<0x00250510, u32(u32)> SoundObj_1___SoundObj_00250510;
inline constexpr guest::Function<0x00250560, u32(u32)> SoundObj_1___SoundObj_00250560;
inline constexpr guest::Function<0x0059a9ac, u32(u32, u32, u32, u32)> field_item_position;
inline constexpr guest::Function<0x0059b080, u32(u32, u32, u32, u32)> fgobj__ObjectThrow__ObjectThrow;
inline constexpr guest::Function<0x0059e65c, u32(u32, u32, u32)> clear_field_tile;

struct __attribute__((packed)) FieldDropThrowFrame {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x64];  // (not read or written by name)
    float float_6c;
    u8 unknown_70[0x10];  // (not read or written by name)
};
GUEST_OFFSET(FieldDropThrowFrame, word_0, 0x0);
GUEST_OFFSET(FieldDropThrowFrame, word_4, 0x4);
GUEST_OFFSET(FieldDropThrowFrame, float_6c, 0x6c);
GUEST_SIZE(FieldDropThrowFrame, 0x80);

u32 FieldDrop__throw(gptr<FieldDrop> drop, float S0, float S1) {
    guest::StackFrameOf<FieldDropThrowFrame> frame;  // the original's stack frame
    frame->word_0 = 0;
    u32 r3_1 = drop->byte_f;
    u32 r2_1 = drop->byte_e;
    field_item_position(frame.at(0x68).addr(), drop.addr(), r2_1, r3_1);
    frame->word_0 = 1;
    frame->word_4 = 0;
    Effect__spawn(0x1f6u, frame.at(0x68).addr(), effect_spawn_params_address, effect_spawn_context_address);
    u32 r2_2 = drop->byte_e;
    u32 r3_2 = drop->byte_f;
    frame->word_0 = 0;
    field_item_position(frame.at(0x74).addr(), drop.addr(), r2_2, r3_2);
    SoundObj_1___SoundObj_00250510(frame.at(8).addr());
    SoundObj__place_at(frame.at(8).addr(), frame.at(0x74).addr());
    SoundObj__play(frame.at(8).addr(), 0x100062du);
    SoundObj_1___SoundObj_00250560(frame.at(8).addr());
    frame->word_0 = 0x95bfdc;
    u32 r3_7 = drop->byte_15;
    u32 r1_5 = drop->byte_f;
    u32 r0_7 = drop->byte_e;
    FieldDrop__place_item(r0_7, r1_5, u32(drop->byte_c) & 1u, r3_7);
    u32 r1_6 = drop->byte_f;
    u32 r0_8 = drop->byte_e;
    clear_field_tile(r0_8, r1_6, 0u);
    float S1_9 = 10.0f;
    frame->float_6c = frame->float_6c + S1_9;
    frame->word_0 = frame.at(0x68).addr();
    u32 r2_8 = drop->byte_f;
    u32 r1_7 = drop->byte_e;
    float S0_9 = 0.0f;
    guest::cpu()->s[0] = S0_9;
    guest::cpu()->s[1] = S1_9;
    fgobj__ObjectThrow__ObjectThrow(drop.addr() + 4u, r1_7, r2_8, 0u);
    return 1u;
}

}  // namespace d_005a213c
GUEST_EXPORT_FRAMED(0x005a213c, d_005a213c::FieldDrop__throw, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005a224c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Ends and clears the field drop at (x, z) when there is one.
namespace d_005a224c {

struct __attribute__((packed)) Drop {
    u8 unknown_0[0x10];  // (not used here)
    u8 byte_10;
    u8 byte_11;
};
GUEST_OFFSET(Drop, byte_10, 0x10);
GUEST_OFFSET(Drop, byte_11, 0x11);

inline constexpr u32 field_drops_address = 0x009b4264u;
inline constexpr guest::Function<0x005a0ef8, u32(u32, u32, u32, u32)> find_field_drop;
inline constexpr guest::Function<0x005a0f5c, u32(u32, u32)> FieldDrop__update_by_kind;
inline constexpr guest::Function<0x005a2438, u32(u32)> send_field_drop_from_entry;

void remove_field_drop(u32 x, u32 z) {
    u32 drop_index_2 = find_field_drop(x, z, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (drop_index_2 + 1u == 0) {
        return;
    }
    gptr<Drop> drop = gptr<Drop>((drop_index_2 * 3u + (drop_index_2 << 3) << 1) + field_drops_address);
    FieldDrop__update_by_kind(drop.addr(), field_drops_address);
    send_field_drop_from_entry(drop.addr());
    drop->byte_10 = 0;
    drop->byte_11 = 0;
}

}  // namespace d_005a224c
GUEST_EXPORT_FRAMED(0x005a224c, d_005a224c::remove_field_drop, 0x4010);  // pushes {r4, lr} first, as the original

// f_005a2400: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Updates the 32 field drops that are active.
namespace d_005a2400 {

inline constexpr u32 field_drops_address = 0x009b4264u;
inline constexpr guest::Function<0x005a180c, u32(u32, u32, u32, u32)> FieldDrop__update;

u32 update_field_drops() {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 index = 0u;
    u32 r5 = field_drops_address;
    do {
        r0_1 = r5 + (index * 3u + (index << 3) << 1);
        r1_1 = *gptr<u8>(r0_1 + 0x11u);
        if (r1_1 != 0) {
            r0_1 = FieldDrop__update(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1_1 = guest::cpu()->r[1];
        }
        index += 1u;
        guest::preempt();
    } while (s32(index) < 0x20);
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_005a2400
GUEST_EXPORT_FRAMED(0x005a2400, d_005a2400::update_field_drops, 0x4070);  // pushes {index, r5, r6, lr} first, as the original

// f_005a2438: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds a field drop from an entry (cell and kind, empty items) and sends it (message 0x3a) when another station
// leads, else applies it.
namespace d_005a2438 {

struct __attribute__((packed)) SendFieldDropFromEntryArg0 {
    u8 unknown_0[0xe];  // (not used here)
    u8 byte_e;
    u8 byte_f;
    u8 unknown_10[0x5];  // (not used here)
    u8 byte_15;
};
GUEST_OFFSET(SendFieldDropFromEntryArg0, byte_e, 0xe);
GUEST_OFFSET(SendFieldDropFromEntryArg0, byte_f, 0xf);
GUEST_OFFSET(SendFieldDropFromEntryArg0, byte_15, 0x15);

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> Item__copy;
inline constexpr guest::Function<0x002fc900, u32(u32)> mode_above_1;
inline constexpr guest::Function<0x00305f44, u32(u32)> current_net_station;
inline constexpr guest::Function<0x0030b6c4, u32(u32)> main_object_idle;
inline constexpr guest::Function<0x0059f4d8, u32(u32)> FieldItem__update_by_kind;
inline constexpr guest::Function<0x005a064c, u32(u32, u32, u32, u32)> FieldDrop__init;
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> send_message;

struct __attribute__((packed)) SendFieldDropFromEntryFrame {
    u8 unknown_0[0xc];  // (not read or written by name)
    u8 byte_c;
    u8 byte_d;
    u8 byte_e;
    u8 unknown_f[0x3];  // (not read or written by name)
    u8 byte_12;
    u8 byte_13;
    u8 byte_14;
    u8 unknown_15[0x7];  // (not read or written by name)
};
GUEST_OFFSET(SendFieldDropFromEntryFrame, byte_c, 0xc);
GUEST_OFFSET(SendFieldDropFromEntryFrame, byte_d, 0xd);
GUEST_OFFSET(SendFieldDropFromEntryFrame, byte_e, 0xe);
GUEST_OFFSET(SendFieldDropFromEntryFrame, byte_12, 0x12);
GUEST_OFFSET(SendFieldDropFromEntryFrame, byte_13, 0x13);
GUEST_OFFSET(SendFieldDropFromEntryFrame, byte_14, 0x14);
GUEST_SIZE(SendFieldDropFromEntryFrame, 0x1c);

u32 send_field_drop_from_entry(gptr<SendFieldDropFromEntryArg0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<SendFieldDropFromEntryFrame> frame;  // the original's stack frame
    u32 drop = frame.at(0).addr();
    FieldDrop__init(drop, r1, r2, r3);
    u32 r7_1 = arg0->byte_e;
    u32 r6_1 = arg0->byte_f;
    u32 r4_1 = arg0->byte_15;
    u32 r5_1 = frame.at(0).addr();
    u32 station = current_net_station(drop);
    u32 r3_2 = (station & 3u | u32(frame->byte_c) & ~3u) & ~0xfcu;
    u32 r2_2 = u32(frame->byte_d) & ~0x3fu;
    u32 r0_3 = u32(frame->byte_e) & ~0x3fu;
    frame->byte_c = u8(r3_2);
    frame->byte_d = u8(r2_2 | 0x10u);
    frame->byte_e = u8(r0_3 & ~0xc0u);
    frame->byte_13 = u8(r7_1);
    frame->byte_14 = u8(r6_1);
    Item__copy(r5_1, empty_item_address, r2_2, r3_2);
    Item__copy(r5_1 + 4u, empty_item_address, guest::cpu()->r[2], guest::cpu()->r[3]);
    Item__copy(r5_1 + 8u, empty_item_address, guest::cpu()->r[2], guest::cpu()->r[3]);
    frame->byte_12 = u8(r4_1);
    u32 r0_6 = mode_above_1(r5_1 + 8u);
    if (r0_6 != 0) {
        if (main_object_idle(r0_6) == 0) {
            send_message(0x3au, 0u, frame.at(0).addr(), 0x16u);
            return frame.at(0).addr();
        }
    }
    FieldItem__update_by_kind(frame.at(0).addr());
    return frame.at(0).addr();
}

}  // namespace d_005a2438
GUEST_EXPORT_FRAMED(0x005a2438, d_005a2438::send_field_drop_from_entry, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_005a2534: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Ends every field drop in use (sending what it needs) and clears it.
namespace d_005a2534 {

struct __attribute__((packed)) Drop {
    u8 unknown_0[0x10];  // (not used here)
    u8 byte_10;
    u8 byte_11;
};
GUEST_OFFSET(Drop, byte_10, 0x10);
GUEST_OFFSET(Drop, byte_11, 0x11);

inline constexpr u32 field_drops_address = 0x009b4264u;
inline constexpr guest::Function<0x005a0f5c, u32(u32, u32, u32, u32)> FieldDrop__update_by_kind;
inline constexpr guest::Function<0x005a2438, u32(u32)> send_field_drop_from_entry;

u32 reset_field_drops() {
    u32 r0_1 = 0;
    u32 index = 0u;
    u32 r6 = index;
    u32 r7 = field_drops_address;
    do {
        gptr<Drop> drop = gptr<Drop>(r7 + (index * 3u + (index << 3) << 1));
        r0_1 = drop->byte_11;
        if (r0_1 != 0) {
            FieldDrop__update_by_kind(drop.addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            r0_1 = send_field_drop_from_entry(drop.addr());
            drop->byte_10 = u8(r6);
            drop->byte_11 = u8(r6);
        }
        index += 1u;
        guest::preempt();
    } while (s32(index) < 0x20);
    return r0_1;
}

}  // namespace d_005a2534
GUEST_EXPORT_FRAMED(0x005a2534, d_005a2534::reset_field_drops, 0x41f0);  // pushes {index, r5, r6, r7, r8, lr} first, as the original

// f_005a2624: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the bit of cell (x, z) in a bit map of the town's 112 x 96 cells (after a 4-byte header); nothing out of range.
namespace d_005a2624 {

struct __attribute__((packed)) Local_005a2624_r0_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Local_005a2624_r0_1, word_4, 0x4);


u32 TownBits__set(u32 town_bits, u32 x, u32 z) {
    u32 nf_1 = x >> 0x1f;
    if (nf_1 == 0u) {
        nf_1 = z >> 0x1f;
    }
    if (nf_1 != 0u || x >= 0x70u || z >= 0x60u) {
        guest::cpu()->r[1] = x;
        return town_bits;
    }
    u32 r1_1 = x + z * 0x70u;
    gptr<Local_005a2624_r0_1> r0_1 = gptr<Local_005a2624_r0_1>(town_bits + (u32(s32(r1_1) >> 5) << 2));
    u32 r1_2 = r0_1->word_4 | 1u << (r1_1 & 0x1fu);
    r0_1->word_4 = r1_2;
    guest::cpu()->r[1] = r1_2;
    return r0_1.addr();
}

}  // namespace d_005a2624
GUEST_EXPORT(0x005a2624, d_005a2624::TownBits__set);

// f_005a2664: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears a bit map of the town's 112 x 96 cells (0x540 bytes after its 4-byte header).
namespace d_005a2664 {

inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;

void TownBits__clear(u32 town_bits) {
    clear_aligned(town_bits + 4u, 0x540u);
    return;
}

}  // namespace d_005a2664
GUEST_EXPORT(0x005a2664, d_005a2664::TownBits__clear);

// f_005a2804: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The nested part (+0x28 twice) of the model of block (row, column) of the block table at 0x94ee58, or 0.
namespace d_005a2804 {

inline constexpr u32 block_model_parts_address = 0x0094ee58u;
inline guest::global<u32, 0x0094ee58> block_model_parts;

u32 block_model_part(u32 r0, u32 r1) {
    u32 r2_1 = *block_model_parts;
    if (r2_1 == 0) {
        return 0u;
    }
    u32 r0_1 = r1 + r0 * 0xau;
    u32 r1_1 = *gptr<u32>(r2_1 + (r0_1 * 5u + (r0_1 << 6) << 2) + 0x10u);
    u32 r0_2 = 0u;
    u32 ea_1 = r1_1 + 0x28u;
    u32 r2_2 = *gptr<u32>(ea_1);
    u32 r1_2 = r2_2 == 0 ? r0_2 : ea_1 + r2_2;
    if (r1_2 == 0) {
        return 0u;
    }
    u32 ea_2 = r1_2 + 0x28u;
    u32 r2_3 = *gptr<u32>(ea_2);
    if (r2_3 != 0) {
        r0_2 = r2_3 + ea_2;
    }
    return r0_2;
}

}  // namespace d_005a2804
GUEST_EXPORT(0x005a2804, d_005a2804::block_model_part);

// f_005a2864: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Tracks repeated attempts at the same cell (up to 8); on a new cell rolls whether the worn item 0x335a gives a bonus
// (20%).
namespace d_005a2864 {

inline constexpr u32 current_player_data_address = 0x00aaf14cu;
inline guest::global<u16, 0x009526b0> fish_bite_streak;
inline guest::global<u8, 0x009526b2> fish_bite_state_a;
inline guest::global<u8, 0x009526b3> fish_bite_state_b;
inline guest::global<u8, 0x009526b4> fish_bite_count;
inline guest::global<u8, 0x009526b5> fish_bite_armed;
inline guest::global<u8, 0x009526b6> fish_bite_flag;
inline guest::global<u32, 0x00aaf14c> current_player_data;
inline constexpr guest::Function<0x002fcb84, u32(u32, u32)> Item__has_number;
inline constexpr guest::Function<0x00565c10, u32(u32)> random_up_to;
inline constexpr guest::Function<0x0071a844, u32(u32)> slot_7_if_class_7;

u32 roll_fish_bite_streak(u32 r0, u32 r1, float S0) {
    u32 r5_1 = r1;
    if (*fish_bite_armed != 0) {
        u32 r0_1 = *fish_bite_streak;
        if (r0_1 != 0) {
            u32 r0_2 = *fish_bite_count;
            if (r0_2 < 8u) {
                r1 = *fish_bite_state_a;
                u32 zf_1 = r1 == r0;
                if (zf_1) {
                    r1 = *fish_bite_state_b;
                    zf_1 = r1 == r5_1;
                }
                if (zf_1) {
                    *fish_bite_count = u8(r0_2 + 1u);
                    guest::cpu()->r[1] = r1;
                    return 1u;
                }
            }
            r0_1 = 0u;
        }
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    *fish_bite_armed = 1;
    u32 r0_3 = *current_player_data;
    if (r0_3 != 0) {
        u32 r0_6 = Item__has_number(slot_7_if_class_7(r0_3 + 0xau), 0x335au);
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        if (r0_6 != 0) {
            float S0_2 = 100.0f;
            guest::cpu()->s[0] = S0_2;
            random_up_to(r0_6);
            S0 = guest::cpu()->s[0];
            r1 = 0x41a00000u;
            if (s32(std::bit_cast<u32>(S0)) <= s32(r1)) {
                *fish_bite_flag = 1;
            } else {
                *fish_bite_flag = 0;
            }
        } else {
            *fish_bite_flag = 0;
        }
    } else {
        *fish_bite_flag = 0;
    }
    *fish_bite_streak = 0x10e;
    *fish_bite_state_a = u8(r0);
    *fish_bite_state_b = u8(r5_1);
    *fish_bite_count = 1;
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return 1u;
}

}  // namespace d_005a2864
GUEST_EXPORT_FRAMED(0x005a2864, d_005a2864::roll_fish_bite_streak, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_005a294c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Counts down the cell timer (0x9526b0) and, when it ends, updates the item at the tracked cell (006b9904) and puts it
// back.
namespace d_005a294c {

inline guest::global<u16, 0x009526b0> fish_bite_streak;
inline guest::global<u8, 0x009526b2> fish_bite_state_a;
inline guest::global<u8, 0x009526b3> fish_bite_state_b;
inline guest::global<u8, 0x009526b5> fish_bite_armed;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> Item__copy_b;
inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> GridMap__place_item_at_world;
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> GridMap__process_world_position;
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> get_map_table;
inline constexpr guest::Function<0x006b9904, u32(u32)> Item__clear_flags_keep_top;

struct __attribute__((packed)) TickCellItemTimerFrame {
    u32 word_0;
    u8 unknown_4[0x8];  // (not read or written by name)
};
GUEST_OFFSET(TickCellItemTimerFrame, word_0, 0x0);
GUEST_SIZE(TickCellItemTimerFrame, 0xc);

void tick_cell_item_timer(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<TickCellItemTimerFrame> frame;  // the original's stack frame
    u32 r0_1 = *fish_bite_armed;
    u32 nf_1 = r0_1 >> 0x1f;
    u32 zf_1 = r0_1 == 0;
    if (!zf_1) {
        r0_1 = s16(*fish_bite_streak);
        nf_1 = r0_1 >> 0x1f;
        zf_1 = r0_1 == 0;
    }
    if (zf_1 || nf_1 != 0u) {
        return;
    }
    u32 r0_2 = sxth(r0_1 - 1u);
    *fish_bite_streak = u16(r0_2);
    if (r0_2 != 0) {
        return;
    }
    u32 map_table = get_map_table(r0_2, r1, r2, r3);
    u32 r2_1 = *fish_bite_state_b;
    u32 r1_1 = *fish_bite_state_a;
    u32 item = GridMap__process_world_position(map_table, r1_1, r2_1, 0u);
    Item__copy_b(frame.at(4).addr(), item);
    Item__clear_flags_keep_top(frame.at(4).addr());
    frame->word_0 = 0;
    u32 r3_3 = *fish_bite_state_b;
    u32 r2_4 = *fish_bite_state_a;
    GridMap__place_item_at_world(map_table, frame.at(4).addr(), r2_4, r3_3);
}

}  // namespace d_005a294c
GUEST_EXPORT_FRAMED(0x005a294c, d_005a294c::tick_cell_item_timer, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_005a29dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When the cell timer is running: updates the item at the tracked cell now and stops the timer.
namespace d_005a29dc {

inline guest::global<u16, 0x009526b0> fish_bite_streak;
inline guest::global<u8, 0x009526b2> fish_bite_state_a;
inline guest::global<u8, 0x009526b3> fish_bite_state_b;
inline guest::global<u8, 0x009526b5> fish_bite_armed;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> Item__copy_b;
inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> GridMap__place_item_at_world;
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> GridMap__process_world_position;
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> get_map_table;
inline constexpr guest::Function<0x006b9904, u32(u32)> Item__clear_flags_keep_top;

struct __attribute__((packed)) FinishCellItemTimerFrame {
    u32 word_0;
    u8 unknown_4[0x4];  // (not read or written by name)
};
GUEST_OFFSET(FinishCellItemTimerFrame, word_0, 0x0);
GUEST_SIZE(FinishCellItemTimerFrame, 0x8);

u32 finish_cell_item_timer(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<FinishCellItemTimerFrame> frame;  // the original's stack frame
    u32 r0_1 = *fish_bite_armed;
    u32 nf_1 = r0_1 >> 0x1f;
    u32 zf_1 = r0_1 == 0;
    if (!zf_1) {
        r0_1 = s16(*fish_bite_streak);
        nf_1 = r0_1 >> 0x1f;
        zf_1 = r0_1 == 0;
    }
    if (!zf_1 && nf_1 == 0u) {
        u32 map_table = get_map_table(r0_1, r1, r2, r3);
        u32 r2_1 = *fish_bite_state_b;
        u32 r1_1 = *fish_bite_state_a;
        u32 item = GridMap__process_world_position(map_table, r1_1, r2_1, 0u);
        Item__copy_b(frame.at(4).addr(), item);
        Item__clear_flags_keep_top(frame.at(4).addr());
        frame->word_0 = 0;
        u32 r3_3 = *fish_bite_state_b;
        u32 r2_4 = *fish_bite_state_a;
        GridMap__place_item_at_world(map_table, frame.at(4).addr(), r2_4, r3_3);
        r1 = guest::cpu()->r[1];
        r0_1 = frame.at(4).addr();
        *fish_bite_streak = 0;
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_005a29dc
GUEST_EXPORT_FRAMED(0x005a29dc, d_005a29dc::finish_cell_item_timer, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005a2fdc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the two words at 0x952898.
namespace d_005a2fdc {

struct __attribute__((packed)) CopyPair952898Arg0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(CopyPair952898Arg0, word_0, 0x0);
GUEST_OFFSET(CopyPair952898Arg0, word_4, 0x4);

inline constexpr u32 pair_952898_address = 0x00952898u;
inline guest::global<u32, 0x00952898> pair_952898;
inline guest::global<u32, 0x0095289c> global_0095289c;

void copy_pair_952898(gptr<CopyPair952898Arg0> arg0) {
    u32 r2_1 = *global_0095289c;
    arg0->word_0 = *pair_952898;
    arg0->word_4 = r2_1;
}

}  // namespace d_005a2fdc
GUEST_EXPORT(0x005a2fdc, d_005a2fdc::copy_pair_952898);

// f_005a2ff0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the two words at 0x9528a0.
namespace d_005a2ff0 {

struct __attribute__((packed)) CopyPair9528a0Arg0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(CopyPair9528a0Arg0, word_0, 0x0);
GUEST_OFFSET(CopyPair9528a0Arg0, word_4, 0x4);

inline constexpr u32 pair_9528a0_address = 0x009528a0u;
inline guest::global<u32, 0x009528a0> pair_9528a0;
inline guest::global<u32, 0x009528a4> global_009528a4;

void copy_pair_9528a0(gptr<CopyPair9528a0Arg0> arg0) {
    u32 r2_1 = *global_009528a4;
    arg0->word_0 = *pair_9528a0;
    arg0->word_4 = r2_1;
}

}  // namespace d_005a2ff0
GUEST_EXPORT(0x005a2ff0, d_005a2ff0::copy_pair_9528a0);

// f_005a3004: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the two words at 0x9528a8.
namespace d_005a3004 {

struct __attribute__((packed)) CopyPair9528a8Arg0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(CopyPair9528a8Arg0, word_0, 0x0);
GUEST_OFFSET(CopyPair9528a8Arg0, word_4, 0x4);

inline constexpr u32 pair_9528a8_address = 0x009528a8u;
inline guest::global<u32, 0x009528a8> pair_9528a8;
inline guest::global<u32, 0x009528ac> global_009528ac;

void copy_pair_9528a8(gptr<CopyPair9528a8Arg0> arg0) {
    u32 r2_1 = *global_009528ac;
    arg0->word_0 = *pair_9528a8;
    arg0->word_4 = r2_1;
}

}  // namespace d_005a3004
GUEST_EXPORT(0x005a3004, d_005a3004::copy_pair_9528a8);

// f_005a3018: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the two words at 0x9528b0.
namespace d_005a3018 {

struct __attribute__((packed)) CopyPair9528b0Arg0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(CopyPair9528b0Arg0, word_0, 0x0);
GUEST_OFFSET(CopyPair9528b0Arg0, word_4, 0x4);

inline constexpr u32 pair_9528b0_address = 0x009528b0u;
inline guest::global<u32, 0x009528b0> pair_9528b0;
inline guest::global<u32, 0x009528b4> global_009528b4;

void copy_pair_9528b0(gptr<CopyPair9528b0Arg0> arg0) {
    u32 r2_1 = *global_009528b4;
    arg0->word_0 = *pair_9528b0;
    arg0->word_4 = r2_1;
}

}  // namespace d_005a3018
GUEST_EXPORT(0x005a3018, d_005a3018::copy_pair_9528b0);

// f_005a337c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the word at 0x952894 is set.
namespace d_005a337c {

inline constexpr u32 word_952894_address = 0x00952894u;
inline guest::global<u32, 0x00952894> word_952894;

u32 word_952894_is_set() {
    u32 r0_1 = *word_952894;
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    return r0_1;
}

}  // namespace d_005a337c
GUEST_EXPORT(0x005a337c, d_005a337c::word_952894_is_set);

// f_005a3394: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores 0xf at 0x952894.
namespace d_005a3394 {

inline constexpr u32 display_list_block_address = 0x0095288cu;
inline guest::global<u32, 0x00952894> word_952894;

void set_952894_to_f() {
    *word_952894 = 0xf;
    guest::cpu()->r[1] = display_list_block_address;
}

}  // namespace d_005a3394
GUEST_EXPORT(0x005a3394, d_005a3394::set_952894_to_f);

// f_005a3474: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When enabled (0x95288c): writes a command block (0x208) with the prepared data and the buffer at 0x9c797c into the
// GPU command list.
namespace d_005a3474 {

inline constexpr u32 display_list_a_address = 0x009c797cu;
inline guest::global<u8, 0x0095288c> display_list_block;
inline guest::global<u32, 0x009c797c> display_list_a;
inline guest::global<u32, 0x009c7980> display_list_b;
inline constexpr guest::Function<0x001277dc, u32(u32, u32, u32, u32)> begin_command_write;
inline constexpr guest::Function<0x001279b4, u32(u32, u32)> advance_command_cursor;
inline constexpr guest::Function<0x001279cc, u32(u32)> close_command_segment;
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32)> copy_aligned_bytes;
inline constexpr guest::Function<0x0034ac5c, u32(u32)> GpuCommandBuffer__init;
inline constexpr guest::Function<0x005a2dc0, u32(u32)> FieldItems__write_commands;
inline constexpr guest::Function<0x00727528, u32(u32, u32, u32)> Shader__find_program;

struct __attribute__((packed)) WriteDisplayListBlockFrame {
    u8 unknown_0[0xa8];  // (not read or written by name)
    u32 program;
    u8 unknown_ac[0x4];  // (not read or written by name)
};
GUEST_OFFSET(WriteDisplayListBlockFrame, program, 0xa8);
GUEST_SIZE(WriteDisplayListBlockFrame, 0xb0);

u32 write_display_list_block(u32 r0_unused, u32 r1, u32 r2) {
    guest::StackFrameOf<WriteDisplayListBlockFrame> frame;  // the original's stack frame
    u32 r0_1 = *display_list_block;
    if (r0_1 == 0) {
        return r0_1;
    }
    begin_command_write(0x208u, frame.at(0xa8).addr(), r2, guest::cpu()->r[3]);
    u32 r5_1 = frame->program;
    frame->program = FieldItems__write_commands(r5_1);
    GpuCommandBuffer__init(frame.at(0).addr());
    u32 program = Shader__find_program(frame.at(0).addr(), frame->program, 1u);
    frame->program = program;
    copy_aligned_bytes(program, *display_list_a, *display_list_b);
    u32 r1_6 = (*display_list_b & ~3u) + program;
    frame->program = r1_6;
    return close_command_segment(advance_command_cursor(r1_6 - r5_1 & ~3u, r1_6));
}

}  // namespace d_005a3474
GUEST_EXPORT_FRAMED(0x005a3474, d_005a3474::write_display_list_block, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005a3508: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// For the four player models (0x128e8 bytes from 0x9c9fe0): binds the 12, 14 and 13 named parts to their slots (tables
// 0x952af0, 0x952b20, 0x952b58).
namespace d_005a3508 {

inline constexpr u32 global_00952af0_address = 0x00952af0u;
inline constexpr u32 global_00952b20_address = 0x00952b20u;
inline constexpr u32 global_00952b58_address = 0x00952b58u;
inline constexpr u32 player_models_address = 0x009c9fe0u;
inline constexpr u32 player_model_parts_address = 0x00a14380u;
inline constexpr u32 player_model_part_visibility_address = 0x00a146c0u;
inline constexpr guest::Function<0x00349878, u32(u32, u32, u32, u32)> Shader__load;
inline constexpr guest::Function<0x004f0568, u32(u32, u32, u32, u32)> SceneEnv__light_if_enabled;
inline constexpr guest::Function<0x00726d2c, u32(u32, u32, u32, u32)> Shader__find_uniform;

void bind_player_model_parts(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r12 = guest::cpu()->r[12];
    *frame.at<u32>(0x20) = r12;
    u32 r0_1 = SceneEnv__light_if_enabled(0u, r1, r2, r3);
    u32 r9 = player_model_parts_address;
    u32 r7 = r0_1;
    u32 j = 0u;
    u32 r10 = r9 + 0x180u;
    do {
        u32 r8 = j * 0x128e8u + player_models_address;
        u32 r1_1 = *gptr<u32>(r7 + 0x1cu);
        if (r1_1 != 0) {
            r1_1 += (r7 + 0x1cu);
        }
        Shader__load(r8, r1_1, j, ~0u);
        r3 = guest::cpu()->r[3];
        u32 r11 = global_00952af0_address;
        u32 i = 0u;
        u32 r5 = r9 + j * 0x60u;
        do {
            Shader__find_uniform(r8, r5 + (i << 3), gptr<u32>(r11)[i], r3);
            r3 = guest::cpu()->r[3];
            i += 1u;
            guest::preempt();
        } while (s32(i) < 0xc);
        r11 = global_00952b20_address;
        i = 0u;
        r5 = r10 + j * 0x70u;
        do {
            Shader__find_uniform(r8, r5 + (i << 3), gptr<u32>(r11)[i], r3);
            r3 = guest::cpu()->r[3];
            i += 1u;
            guest::preempt();
        } while (s32(i) < 0xe);
        r11 = global_00952b58_address;
        i = 0u;
        r5 = (j * 5u + (j << 3) << 3) + player_model_part_visibility_address;
        do {
            Shader__find_uniform(r8, r5 + (i << 3), gptr<u32>(r11)[i], r3);
            r3 = guest::cpu()->r[3];
            i += 1u;
            guest::preempt();
        } while (s32(i) < 0xd);
        j += 1u;
        guest::preempt();
    } while (s32(j) < 4);
}

}  // namespace d_005a3508
GUEST_EXPORT_FRAMED(0x005a3508, d_005a3508::bind_player_model_parts, 0x4ff0);  // pushes {i, r5, j, r7, r8, r9, r10, r11, lr} first, as the original

// f_005a360c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Points the record at player model `index` and at its 12 and 14 part slots.
namespace d_005a360c {

struct __attribute__((packed)) PlayerModelParts {
    u32 word_0;
    u8 unknown_4[0x68];  // (not used here)
    u32 word_6c;
};
GUEST_OFFSET(PlayerModelParts, word_0, 0x0);
GUEST_OFFSET(PlayerModelParts, word_6c, 0x6c);

inline constexpr u32 player_models_address = 0x009c9fe0u;
inline constexpr u32 player_model_parts_address = 0x00a14380u;
inline constexpr u32 global_00a14500_address = 0x00a14500u;

u32 PlayerModelParts__init(gptr<PlayerModelParts> player_model_parts, u32 r1) {
    u32 r0 = player_model_parts.addr();
    player_model_parts->word_6c = r1;
    u32 r12 = r0 + 4u;
    player_model_parts->word_0 = r1 * 0x128e8u + player_models_address;
    u32 r2 = 0u;
    u32 r3 = r2;
    u32 r4 = r1 * 0x60u + player_model_parts_address;
    do {
        *gptr<u32>(r12 + (r2 << 2)) = r4 + (r2 << 3);
        u32 r2_1 = r2 + 1u;
        r3 += 2u;
        *gptr<u32>(r12 + (r2_1 << 2)) = r4 + (r2_1 << 3);
        r2 = r2_1 + 1u;
        guest::preempt();
    } while (s32(r3) < 0xc);
    r3 = r0 + 0x34u;
    r0 = 0u;
    r2 = r0;
    r1 = r1 * 0x70u + global_00a14500_address;
    do {
        *gptr<u32>(r3 + (r0 << 2)) = r1 + (r0 << 3);
        u32 r0_1 = r0 + 1u;
        r2 += 2u;
        *gptr<u32>(r3 + (r0_1 << 2)) = r1 + (r0_1 << 3);
        r0 = r0_1 + 1u;
        guest::preempt();
    } while (s32(r2) < 0xe);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005a360c
GUEST_EXPORT_FRAMED(0x005a360c, d_005a360c::PlayerModelParts__init, 0x30);  // pushes {r4, r5} first, as the original

// f_005a36b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets or clears the visibility bit of part `index` (its bit number from the part table) in the model's mask (+0x29c).
namespace d_005a36b8 {

struct __attribute__((packed)) PlayerModelParts {
    u32 word_0;
    u8 unknown_4[0x68];  // (not used here)
    u32 word_6c;
};
GUEST_OFFSET(PlayerModelParts, word_0, 0x0);
GUEST_OFFSET(PlayerModelParts, word_6c, 0x6c);

struct __attribute__((packed)) Local_005a36b8_r0_1 {
    u8 unknown_0[0x29c];  // (not used here)
    u32 word_29c;
};
GUEST_OFFSET(Local_005a36b8_r0_1, word_29c, 0x29c);

inline constexpr u32 player_model_part_visibility_address = 0x00a146c0u;

u32 PlayerModelParts__set_visible(gptr<PlayerModelParts> player_model_parts, u32 r1, u32 r2) {
    u32 r12_1 = player_model_parts->word_6c;
    gptr<Local_005a36b8_r0_1> r0_1 = gptr<Local_005a36b8_r0_1>(player_model_parts->word_0);
    u32 r1_1 = *gptr<u8>((r12_1 * 5u + (r12_1 << 3) << 3) + player_model_part_visibility_address + (r1 << 3) + 2u);
    u32 r1_2 = lsl_r(r2, r1_1 & 0xff) | r0_1->word_29c & ~lsl_r(1u, r1_1 & 0xff);
    r0_1->word_29c = r1_2;
    guest::cpu()->r[1] = r1_2;
    return r0_1.addr();
}

}  // namespace d_005a36b8
GUEST_EXPORT_FRAMED(0x005a36b8, d_005a36b8::PlayerModelParts__set_visible, 0x10);  // pushes {r4} first, as the original

// f_005a3720: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears 0x70 bytes of the object.
namespace d_005a3720 {

inline constexpr guest::Function<0x00150b94, u32(u32, u32, u32)> memset_returning_destination;

u32 clear_70_bytes(u32 r0) {
    memset_returning_destination(r0, 0u, 0x70u);
    return r0;
}

}  // namespace d_005a3720
GUEST_EXPORT_FRAMED(0x005a3720, d_005a3720::clear_70_bytes, 0x4010);  // pushes {r4, lr} first, as the original

// f_005a3ad0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a photo database file reader over a buffer (arg 1, size arg 2), opened (or not, arg 3).
namespace d_005a3ad0 {

inline constexpr u32 vtable_imgdb__FileReader = 0x00907d70u;

void imgdb__FileReader__FileReader_005a3ad0(gptr<imgdb__FileReader> file_reader, u32 r1, u32 r2, u32 r3) {
    file_reader->word_8 = r1;
    file_reader->word_14 = r1;
    file_reader->word_c = r2;
    file_reader->byte_10 = u8(r3);
    file_reader->byte_28 = 1;
    file_reader->word_4 = 0;
    file_reader->vtable = vtable_imgdb__FileReader;
    file_reader->word_18 = 0;
    file_reader->word_20 = 0;
    file_reader->word_24 = 0;
    file_reader->word_2c = 0;
}

}  // namespace d_005a3ad0
GUEST_EXPORT(0x005a3ad0, d_005a3ad0::imgdb__FileReader__FileReader_005a3ad0);

// f_005a3b10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a photo database file reader for a file (arg 1) with a buffer (arg 2), opened (or not, arg 3).
namespace d_005a3b10 {

inline constexpr u32 vtable_imgdb__FileReader = 0x00907d70u;

void imgdb__FileReader__FileReader_005a3b10(gptr<imgdb__FileReader> file_reader, u32 r1, u32 r2, u32 r3) {
    file_reader->word_8 = 0;
    file_reader->word_14 = 0;
    file_reader->vtable = vtable_imgdb__FileReader;
    file_reader->word_18 = 0;
    file_reader->word_20 = 0;
    file_reader->word_24 = 0;
    file_reader->byte_28 = 1;
    file_reader->word_4 = r1;
    file_reader->word_c = r2;
    file_reader->byte_10 = u8(r3);
    file_reader->word_2c = 0;
}

}  // namespace d_005a3b10
GUEST_EXPORT_FRAMED(0x005a3b10, d_005a3b10::imgdb__FileReader__FileReader_005a3b10, 0xf0);  // pushes {r4, r5, r6, r7} first, as the original

// f_005a3edc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a photo database file writer for a file (arg 1).
namespace d_005a3edc {

inline constexpr u32 vtable_imgdb__FileWriter = 0x00907d88u;

void imgdb__FileWriter__FileWriter_005a3edc(gptr<imgdb__FileWriter> file_writer, u32 r1) {
    file_writer->word_4 = r1;
    file_writer->byte_8 = 1;
    file_writer->vtable = vtable_imgdb__FileWriter;
    file_writer->word_c = 0;
}

}  // namespace d_005a3edc
GUEST_EXPORT(0x005a3edc, d_005a3edc::imgdb__FileWriter__FileWriter_005a3edc);

// f_005a3f08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls 005a4cf4 with a 0x64000-byte buffer and two output slots.
namespace d_005a3f08 {

inline constexpr guest::Function<0x005a4cf4, u32(u32, u32, u32, u32)> JpegEncoder__encode;

struct __attribute__((packed)) ImgdbWriteWithBufferFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x8];  // (not read or written by name)
};
GUEST_OFFSET(ImgdbWriteWithBufferFrame, word_0, 0x0);
GUEST_OFFSET(ImgdbWriteWithBufferFrame, word_4, 0x4);
GUEST_OFFSET(ImgdbWriteWithBufferFrame, word_8, 0x8);
GUEST_SIZE(ImgdbWriteWithBufferFrame, 0x14);

void imgdb__write_with_buffer(u32 r0) {
    guest::StackFrameOf<ImgdbWriteWithBufferFrame> frame;  // the original's stack frame
    frame->word_0 = 0x64000;
    frame->word_4 = frame.at(0xc).addr();
    frame->word_8 = frame.at(0x10).addr();
    JpegEncoder__encode(r0, r0, 0u, 1u);
}

}  // namespace d_005a3f08
GUEST_EXPORT_FRAMED(0x005a3f08, d_005a3f08::imgdb__write_with_buffer, 0x4000);  // pushes {lr} first, as the original

// f_005a4aec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The size of `count` 16-byte entries plus `extra`, rounded up to 32 bytes.
namespace d_005a4aec {


u32 imgdb__aligned_size(u32 r0, u32 r1) {
    return r1 + (r0 << 4) + 0x37u & ~0x1fu;
}

}  // namespace d_005a4aec
GUEST_EXPORT(0x005a4aec, d_005a4aec::imgdb__aligned_size);

// f_005a4bd0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Recomputes the CRC-16 of the database header (its CRC field taken as 0) and stores it at +0x14.
namespace d_005a4bd0 {

struct __attribute__((packed)) ImgdbUpdateHeaderCrcArg0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(ImgdbUpdateHeaderCrcArg0, word_0, 0x0);
GUEST_OFFSET(ImgdbUpdateHeaderCrcArg0, word_4, 0x4);

struct __attribute__((packed)) Local_005a4bd0_r5_1 {
    u8 unknown_0[0x14];  // (not used here)
    u16 half_14;
};
GUEST_OFFSET(Local_005a4bd0_r5_1, half_14, 0x14);

inline constexpr guest::Function<0x005af8c8, u32(u32, u32, u32)> imgdb__Crc16Context__Crc16Context;
inline constexpr guest::Function<0x005af9c4, u32(u32)> store_byte_constant_pack_0x4_005af9c4;

struct __attribute__((packed)) ImgdbUpdateHeaderCrcFrame {
    u8 unknown_0[0x6];  // (not read or written by name)
    u16 half_6;
};
GUEST_OFFSET(ImgdbUpdateHeaderCrcFrame, half_6, 0x6);
GUEST_SIZE(ImgdbUpdateHeaderCrcFrame, 0x8);

void imgdb__update_header_crc(gptr<ImgdbUpdateHeaderCrcArg0> arg0) {
    guest::StackFrameOf<ImgdbUpdateHeaderCrcFrame> frame;  // the original's stack frame
    gptr<Local_005a4bd0_r5_1> r5_1 = gptr<Local_005a4bd0_r5_1>(arg0->word_0);
    u32 r6_1 = r5_1->half_14;
    r5_1->half_14 = 0;
    imgdb__Crc16Context__Crc16Context(frame.at(0).addr(), arg0->word_0, arg0->word_4);
    r5_1->half_14 = u16(r6_1);
    u32 r5_2 = frame->half_6;
    store_byte_constant_pack_0x4_005af9c4(frame.at(0).addr());
    u32 r1_2 = arg0->word_0;
    *gptr<u16>(r1_2 + 0x14u) = u16(r5_2);
    guest::cpu()->r[1] = r1_2;
}

}  // namespace d_005a4bd0
GUEST_EXPORT_FRAMED(0x005a4bd0, d_005a4bd0::imgdb__update_header_crc, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005a4e5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The size of `count` 0x98-byte records plus `extra` and the 0x18-byte header.
namespace d_005a4e5c {


u32 imgdb__record_size(u32 r0, u32 r1) {
    return r1 + (r0 * 3u + (r0 << 4) << 3) + 0x18u;
}

}  // namespace d_005a4e5c
GUEST_EXPORT(0x005a4e5c, d_005a4e5c::imgdb__record_size);

// f_005a4e70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Initializes an image database in a buffer when it is large enough: its header (magic, count, offset) and `count`
// empty records with four entries each.
namespace d_005a4e70 {

struct __attribute__((packed)) ImgdbInitBufferArg0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(ImgdbInitBufferArg0, word_0, 0x0);
GUEST_OFFSET(ImgdbInitBufferArg0, word_4, 0x4);

inline constexpr guest::Function<0x00301444, u32(u32, u32, u32, u32)> clear;
inline constexpr guest::Function<0x005a8af0, u32(u32, u32, u32, u32)> PhotoRecord__clear;
inline constexpr guest::Function<0x005afe90, u32(u32, u32, u32, u32)> PictureEntry__clear;

void imgdb__init_buffer(gptr<ImgdbInitBufferArg0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 zf_1 = r1 == 0;
    u32 r7 = r3;
    u32 r4_1 = *gptr<u32>(guest::cpu()->r[13] + 0x18u);
    arg0->word_0 = r1;
    u32 r3_1 = r1;
    u32 r8 = r0;
    r1 = r2;
    arg0->word_4 = r2;
    if (!zf_1 && r4_1 + (r7 * 3u + (r7 << 4) << 3) + 0x18u <= r2) {
        clear(r3_1, r1, r2, r3_1);
        u32 r0_1 = arg0->word_0;
        *gptr<u32>(r0_1 + 8u) = 0;
        *gptr<u32>(r0_1 + 0xcu) = 0;
        *gptr<u32>(r0_1 + 0x10u) = 0;
        *gptr<u32>(r0_1 + 0x14u) = 0;
        *gptr<u32>(r0_1 + 4u) = 0x315f3030;
        *gptr<u32>(r0_1) = 0x514a5531;
        r1 = r4_1 + 0x18u;
        *gptr<u16>(r0_1 + 0xcu) = u16(r7);
        u32 j = 0u;
        *gptr<u16>(r0_1 + 0x16u) = u16(r1);
        if (s32(r7) > 0) {
            do {
                u32 r1_1 = *gptr<u32>(r8);
                u32 r2_1 = j * 3u + (j << 4);
                u32 r3_2 = *gptr<u16>(r1_1 + 0x16u);
                u32 r5 = r1_1 + r3_2 + (r2_1 << 3);
                PhotoRecord__clear(r5, r1_1, r2_1, r3_2);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                u32 i = 0u;
                do {
                    PictureEntry__clear(r5 + i * 0x12u + 0x50u, r1, r2, r3);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    i += 1u;
                    guest::preempt();
                } while (s32(i) < 4);
                j += 1u;
                guest::preempt();
            } while (s32(j) < s32(r7));
        }
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_005a4e70
GUEST_EXPORT_FRAMED(0x005a4e70, d_005a4e70::imgdb__init_buffer, 0x41f0);  // pushes {i, r5, j, r7, r8, lr} first, as the original

// f_005a4f70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Recomputes the CRC-16 of the database header (its CRC field taken as 0) and stores it at +0x14.
namespace d_005a4f70 {

struct __attribute__((packed)) ImgdbUpdateHeaderCrc2Arg0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(ImgdbUpdateHeaderCrc2Arg0, word_0, 0x0);
GUEST_OFFSET(ImgdbUpdateHeaderCrc2Arg0, word_4, 0x4);

struct __attribute__((packed)) Local_005a4f70_r5_1 {
    u8 unknown_0[0x14];  // (not used here)
    u16 half_14;
};
GUEST_OFFSET(Local_005a4f70_r5_1, half_14, 0x14);

inline constexpr guest::Function<0x005af8c8, u32(u32, u32, u32)> imgdb__Crc16Context__Crc16Context;
inline constexpr guest::Function<0x005af9c4, u32(u32)> store_byte_constant_pack_0x4_005af9c4;

struct __attribute__((packed)) ImgdbUpdateHeaderCrc2Frame {
    u8 unknown_0[0x6];  // (not read or written by name)
    u16 half_6;
};
GUEST_OFFSET(ImgdbUpdateHeaderCrc2Frame, half_6, 0x6);
GUEST_SIZE(ImgdbUpdateHeaderCrc2Frame, 0x8);

void imgdb__update_header_crc_2(gptr<ImgdbUpdateHeaderCrc2Arg0> arg0) {
    guest::StackFrameOf<ImgdbUpdateHeaderCrc2Frame> frame;  // the original's stack frame
    gptr<Local_005a4f70_r5_1> r5_1 = gptr<Local_005a4f70_r5_1>(arg0->word_0);
    u32 r6_1 = r5_1->half_14;
    r5_1->half_14 = 0;
    imgdb__Crc16Context__Crc16Context(frame.at(0).addr(), arg0->word_0, arg0->word_4);
    r5_1->half_14 = u16(r6_1);
    u32 r5_2 = frame->half_6;
    store_byte_constant_pack_0x4_005af9c4(frame.at(0).addr());
    u32 r1_2 = arg0->word_0;
    *gptr<u16>(r1_2 + 0x14u) = u16(r5_2);
    guest::cpu()->r[1] = r1_2;
}

}  // namespace d_005a4f70
GUEST_EXPORT_FRAMED(0x005a4f70, d_005a4f70::imgdb__update_header_crc_2, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005a4fd0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Keeps the two paths at 0x97e098 and 0x97e09c unless they are set.
namespace d_005a4fd0 {

inline guest::global<u32, 0x0097e098> imgdb_default_path_a;
inline guest::global<u32, 0x0097e09c> imgdb_default_path_b;

void imgdb__set_default_paths(u32 r0, u32 r1) {
    if (*imgdb_default_path_a == 0) {
        *imgdb_default_path_a = r0;
    }
    if (*imgdb_default_path_b == 0) {
        *imgdb_default_path_b = r1;
    }
}

}  // namespace d_005a4fd0
GUEST_EXPORT(0x005a4fd0, d_005a4fd0::imgdb__set_default_paths);

// f_005a4ffc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears a picture record (magic 3DS1) and fills it with the current time and date fields.
namespace d_005a4ffc {

struct __attribute__((packed)) PictureInfo {
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
GUEST_OFFSET(PictureInfo, word_0, 0x0);
GUEST_OFFSET(PictureInfo, word_4, 0x4);
GUEST_OFFSET(PictureInfo, word_8, 0x8);
GUEST_OFFSET(PictureInfo, word_c, 0xc);
GUEST_OFFSET(PictureInfo, word_10, 0x10);
GUEST_OFFSET(PictureInfo, word_14, 0x14);
GUEST_OFFSET(PictureInfo, word_18, 0x18);
GUEST_OFFSET(PictureInfo, word_1c, 0x1c);
GUEST_OFFSET(PictureInfo, word_20, 0x20);
GUEST_OFFSET(PictureInfo, word_24, 0x24);
GUEST_OFFSET(PictureInfo, word_28, 0x28);
GUEST_OFFSET(PictureInfo, word_2c, 0x2c);
GUEST_OFFSET(PictureInfo, word_30, 0x30);
GUEST_OFFSET(PictureInfo, word_34, 0x34);
GUEST_OFFSET(PictureInfo, word_38, 0x38);
GUEST_OFFSET(PictureInfo, word_3c, 0x3c);

inline constexpr guest::Function<0x005a8e08, u32(u32, u32, u32, u32)> Stamp__set_now;
inline constexpr guest::Function<0x005aa778, u32(u32, u32)> PictureInfo__clear;

struct __attribute__((packed)) PictureInfoInitFrame {
    u8 unknown_0[0xc];  // (not read or written by name)
    u8 byte_c;
    u8 byte_d;
    u8 byte_e;
    u8 unknown_f[0x11];  // (not read or written by name)
    u8 byte_20;
    u8 unknown_21[0x4b];  // (not read or written by name)
};
GUEST_OFFSET(PictureInfoInitFrame, byte_c, 0xc);
GUEST_OFFSET(PictureInfoInitFrame, byte_d, 0xd);
GUEST_OFFSET(PictureInfoInitFrame, byte_e, 0xe);
GUEST_OFFSET(PictureInfoInitFrame, byte_20, 0x20);
GUEST_SIZE(PictureInfoInitFrame, 0x6c);

void PictureInfo__init(gptr<PictureInfo> picture_info, u32 r1_unused, u32 r2) {
    guest::StackFrameOf<PictureInfoInitFrame> frame;  // the original's stack frame
    picture_info->word_4 = 0;
    picture_info->word_8 = 0;
    picture_info->word_c = 0;
    picture_info->word_10 = 0;
    picture_info->word_14 = 0;
    picture_info->word_18 = 0;
    picture_info->word_1c = 0;
    picture_info->word_20 = 0;
    picture_info->word_24 = 0;
    picture_info->word_28 = 0;
    picture_info->word_2c = 0;
    picture_info->word_30 = 0;
    picture_info->word_34 = 0;
    picture_info->word_38 = 0;
    picture_info->word_0 = 0x31534433;
    float S0_1 = 0.0f;
    picture_info->word_3c = 0;
    picture_info->word_28 = std::bit_cast<u32>(S0_1);
    guest::cpu()->s[0] = S0_1;
    Stamp__set_now(picture_info.addr() + 8u, 0x31534433u, r2, guest::cpu()->r[3]);
    PictureInfo__clear(frame.at(0).addr(), 0u);
    picture_info->word_4 = u32(frame->byte_c);
    *gptr<u16>(picture_info.addr() + 0x14u) = u16(u32(frame->byte_d));
    u32 r0_3 = 0xf80u & u32(frame->byte_20) << 7 | picture_info->word_30 & ~0xf80u;
    picture_info->word_30 = r0_3;
    u32 r1_1 = r0_3 & ~0xff00000u & ~0xff000u;
    picture_info->word_30 = r1_1 | u32(frame->byte_e) << 0xc;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_005a4ffc
GUEST_EXPORT_FRAMED(0x005a4ffc, d_005a4ffc::PictureInfo__init, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_005a50bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores a 5-bit value in bits 7-11 of +0x68.
namespace d_005a50bc {

struct __attribute__((packed)) PictureInfo {
    u8 unknown_0[0x68];  // (not used here)
    u32 word_68;
};
GUEST_OFFSET(PictureInfo, word_68, 0x68);


void PictureInfo__set_bits_7_to_11_of_68(gptr<PictureInfo> picture_info, u32 r1) {
    picture_info->word_68 = 0xf80u & r1 << 7 | picture_info->word_68 & ~0xf80u;
}

}  // namespace d_005a50bc
GUEST_EXPORT(0x005a50bc, d_005a50bc::PictureInfo__set_bits_7_to_11_of_68);

// f_005a5130: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores a value in bits 12-27 of +0x30.
namespace d_005a5130 {

struct __attribute__((packed)) PictureInfo {
    u8 unknown_0[0x30];  // (not used here)
    u32 word_30;
};
GUEST_OFFSET(PictureInfo, word_30, 0x30);


void PictureInfo__set_bits_12_up_of_30(gptr<PictureInfo> picture_info, u32 r1) {
    picture_info->word_30 = picture_info->word_30 & ~0xff00000u & ~0xff000u | r1 << 0xc;
}

}  // namespace d_005a5130
GUEST_EXPORT(0x005a5130, d_005a5130::PictureInfo__set_bits_12_up_of_30);

// f_005a5148: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Once: grows the buffer to 0xdac entries and opens the picture databases (500 and 3000 records) that are asked for.
namespace d_005a5148 {

struct __attribute__((packed)) PictureDb {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
    u8 unknown_5[0x9b];  // (not used here)
    u32 word_a0;
    u32 word_a4;
};
GUEST_OFFSET(PictureDb, byte_4, 0x4);
GUEST_OFFSET(PictureDb, word_a0, 0xa0);
GUEST_OFFSET(PictureDb, word_a4, 0xa4);

inline constexpr guest::Function<0x0013fa10, u32(u32, u32, u32, u32)> container_update;
inline constexpr guest::Function<0x001416b0, u32(u32)> return_constant_0x97e098_;
inline constexpr guest::Function<0x00142450, u32(u32, u32, u32, u32)> ByteBuffer__reserve;
inline constexpr guest::Function<0x005a5240, u32(u32, u32)> PartList__find_kind;
inline constexpr guest::Function<0x005a92a4, u32(u32, u32, u32, u32)> imgdb__PictureDbRecord__PictureDbRecord;

void PictureDb__open(gptr<PictureDb> picture_db, u32 r1, u32 r2, u32 r3) {
    u32 r7_1 = r2;
    if (picture_db->byte_4 == 0) {
        u32 r1_1 = 0xdacu;
        u32 r0_1 = picture_db->word_a0;
        picture_db->word_a4 = r1_1;
        if (r0_1 < r1_1) {
            ByteBuffer__reserve(picture_db.addr() + 0x98u, r1_1, r2, r3);
            r1_1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        u32 r0_2 = container_update(picture_db.addr() + 0x98u, r1_1, r2, r3);
        if (r1 != 0) {
            imgdb__PictureDbRecord__PictureDbRecord(picture_db.addr() + 8u, return_constant_0x97e098_(r0_2), 0x1f4u, 0u);
            r0_2 = PartList__find_kind(picture_db.addr(), 0u);
        }
        if (r7_1 != 0) {
            imgdb__PictureDbRecord__PictureDbRecord(picture_db.addr() + 0x50u, return_constant_0x97e098_(r0_2), 0xbb8u, 1u);
            PartList__find_kind(picture_db.addr(), 1u);
        }
        *gptr<u8>(picture_db.addr() + 4u) = 1;
    }
}

}  // namespace d_005a5148
GUEST_EXPORT_FRAMED(0x005a5148, d_005a5148::PictureDb__open, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_005a51f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Writes a picture (kind 2) with its two scale values through 005a566c.
namespace d_005a51f4 {

struct __attribute__((packed)) Local_005a51f4_r3_1 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_005a51f4_r3_1, float_0, 0x0);
GUEST_OFFSET(Local_005a51f4_r3_1, float_4, 0x4);

inline constexpr guest::Function<0x005a566c, u32(u32, u32, u32, u32)> Camera__set_shot;

struct __attribute__((packed)) ImgdbWritePictureFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    float float_c;
    u32 word_10;
    u32 word_14;
    float float_18;
    u8 unknown_1c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(ImgdbWritePictureFrame, word_0, 0x0);
GUEST_OFFSET(ImgdbWritePictureFrame, word_4, 0x4);
GUEST_OFFSET(ImgdbWritePictureFrame, word_8, 0x8);
GUEST_OFFSET(ImgdbWritePictureFrame, float_c, 0xc);
GUEST_OFFSET(ImgdbWritePictureFrame, word_10, 0x10);
GUEST_OFFSET(ImgdbWritePictureFrame, word_14, 0x14);
GUEST_OFFSET(ImgdbWritePictureFrame, float_18, 0x18);
GUEST_SIZE(ImgdbWritePictureFrame, 0x20);

u32 imgdb__write_picture(u32 r0_unused, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<ImgdbWritePictureFrame> frame;  // the original's stack frame
    gptr<Local_005a51f4_r3_1> r3_1 = gptr<Local_005a51f4_r3_1>(frame.at(0x28).addr());
    float S0_1 = r3_1->float_0;
    float S1_1 = r3_1->float_4;
    frame->float_c = S0_1;
    frame->word_14 = 0;
    frame->word_10 = 1;
    frame->float_18 = S1_1;
    frame->word_4 = 0;
    frame->word_8 = 0;
    frame->word_0 = r3;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    Camera__set_shot(guest::cpu()->r[0], guest::cpu()->r[1], 2u, r2);
    return guest::cpu()->r[0];
}

}  // namespace d_005a51f4
GUEST_EXPORT_FRAMED(0x005a51f4, d_005a51f4::imgdb__write_picture, 0x4010);  // pushes {r4, lr} first, as the original

// f_005a53c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Adds a picture to the database: checks its record, writes it, and inserts its entry in the sorted index.
namespace d_005a53c4 {

struct __attribute__((packed)) PictureDb {
    u8 unknown_0[0x5];  // (not used here)
    u8 byte_5;
};
GUEST_OFFSET(PictureDb, byte_5, 0x5);

struct __attribute__((packed)) Local_005a53c4_r4_1 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
    u8 unknown_14[0x28];  // (not used here)
    u32 word_3c;
};
GUEST_OFFSET(Local_005a53c4_r4_1, word_10, 0x10);
GUEST_OFFSET(Local_005a53c4_r4_1, word_3c, 0x3c);

struct __attribute__((packed)) Local_005a53c4_r7_1 {
    u8 unknown_0[0x6];  // (not used here)
    u8 byte_6;
};
GUEST_OFFSET(Local_005a53c4_r7_1, byte_6, 0x6);

inline constexpr guest::Function<0x0013f274, u32(u32, u32, u32)> clear_word_pair_0013f274;
inline constexpr guest::Function<0x005a5240, u32(u32, u32)> PartList__find_kind;
inline constexpr guest::Function<0x005a6218, u32(u32, u32, u32)> PictureDb__repair;
inline constexpr guest::Function<0x005a992c, u32(u32, u32, u32)> PhotoFile__find_free_folder;
inline constexpr guest::Function<0x005a9c48, u32(u32, u32, u32)> PhotoFile__find_free_index;
inline constexpr guest::Function<0x005aa0b8, u32(u32)> PhotoFile__compute_sizes;
inline constexpr guest::Function<0x005aa450, u32(u32)> clear_word_pair_005aa450;
inline constexpr guest::Function<0x005aa460, u32(u32, u32)> PictureKey__set_bits_2_to_4;
inline constexpr guest::Function<0x005aa47c, u32(u32, u32)> PictureKey__set_id_and_count;
inline constexpr guest::Function<0x005aa4bc, u32(u32, u32)> PictureKey__set_bits_0_to_1;
inline constexpr guest::Function<0x005aa4d4, u32(u32, u32)> PictureKey__set_high_bits;
inline constexpr guest::Function<0x005aa4ec, u32(u32, u32)> PictureKey__set_low_bits;
inline constexpr guest::Function<0x005acde8, u32(u32)> photo_database_path;
inline constexpr guest::Function<0x005adc90, u32(u32)> PhotoDatabase__count_kind;
inline constexpr guest::Function<0x005ae46c, u32(u32, u32, u32)> photo_index_path;
inline constexpr guest::Function<0x0075412c, u32(u32, u32, u32)> Vector8__insert;
inline constexpr guest::Function<0x007546b4, u32(u32)> seconds_to_days;
inline constexpr guest::Function<0x00754978, u32(u32, u32, u32, u32)> field_nonzero_754978;
inline constexpr guest::Function<0x00754a3c, u32(u32, u32, u32)> entry_12_at_2;
inline constexpr guest::Function<0x00754a9c, u32(u32)> entry_of_table_owner_00754a9c;
inline constexpr guest::Function<0x007553d8, u32(u32)> extension_index;
inline constexpr guest::Function<0x00755484, u32(u32)> pack_count_and_id;
inline constexpr guest::Function<0x007554e4, u32(u32)> bit_0_of_28;

struct __attribute__((packed)) PictureDbAddPictureFrame {
    u8 unknown_0[0x8];  // (not read or written by name)
    u32 word_8;
    u8 unknown_c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(PictureDbAddPictureFrame, word_8, 0x8);
GUEST_SIZE(PictureDbAddPictureFrame, 0x10);

u32 PictureDb__add_picture(gptr<PictureDb> picture_db, u32 r1, u32 r2) {
    guest::StackFrameOf<PictureDbAddPictureFrame> frame;  // the original's stack frame
    u32 r0 = picture_db.addr();
    u32 r0_5 = 0;
    picture_db->byte_5 = 0;
    gptr<Local_005a53c4_r4_1> r4_1 = gptr<Local_005a53c4_r4_1>(r0 + (r1 + (r1 << 3) << 3));
    if (field_nonzero_754978(r4_1.addr() + 8u, r1, r2, guest::cpu()->r[3]) != 0) {
        u32 r0_4 = field_nonzero_754978(r4_1.addr() + 8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        gptr<Local_005a53c4_r7_1> r7_1 = gptr<Local_005a53c4_r7_1>(r0 + r1);
        if (r0_4 != 0 && r7_1->byte_6 != 0) {
            r0_5 = ~0u;
        } else {
            PartList__find_kind(r0, r1);
            u32 r0_6 = photo_database_path(r1);
            u32 free_index = PhotoFile__find_free_index(r4_1.addr() + 8u, r1, r0_6);
            u32 r8_1 = free_index;
            PhotoFile__compute_sizes(r4_1.addr() + 8u);
            r2 = guest::cpu()->r[2];
            if (r4_1->word_3c != 0) {
                u32 r0_8 = photo_index_path(r1, guest::cpu()->r[1], r2);
                u32 free_folder = PhotoFile__find_free_folder(r4_1.addr() + 8u, r1, r0_8);
                r2 = guest::cpu()->r[2];
                if (free_folder != 0) {
                    r8_1 = free_folder;
                    goto L_5a5488;
                }
            }
            if (r8_1 == 0) {
                if (r4_1->word_3c != 0) {
                    u32 r0_10 = PictureDb__repair(r0, r1, r2);
                    r2 = guest::cpu()->r[2];
                    if (r0_10 != 0) {
                        if (r0_10 == 0xbu) {
                            r7_1->byte_6 = 1;
                        }
                        return r0_10;
                    }
                }
                goto L_5a54dc;
            }
L_5a5488:;
            if (PhotoDatabase__count_kind(r1) == 0) {
                r0_5 = r8_1;
            } else {
                r0_5 = ~0u;
                r7_1->byte_6 = 1;
            }
        }
        return r0_5;
L_5a54dc:;
        u32 vector8 = r0;
        u32 r10 = r0 + 0x98u;
        u32 r6 = r4_1->word_10;
        u32 r7 = r4_1.addr() + 8u;
        u32 r9 = r1;
        u32 i = 0u;
        if (s32(r6) > 0) {
            do {
                u32 text = entry_of_table_owner_00754a9c(entry_12_at_2(r7, i, r2));
                u32 r0_14 = bit_0_of_28(text);
                r2 = guest::cpu()->r[2];
                if (r0_14 != 0) {
                    clear_word_pair_0013f274(frame.at(0).addr(), guest::cpu()->r[1], r2);
                    clear_word_pair_005aa450(frame.at(0).addr());
                    PictureKey__set_bits_0_to_1(frame.at(0).addr(), r9);
                    PictureKey__set_high_bits(frame.at(0).addr(), i);
                    u32 extension_2 = extension_index(text);
                    PictureKey__set_bits_2_to_4(frame.at(0).addr(), extension_2);
                    frame->word_8 = pack_count_and_id(text);
                    PictureKey__set_id_and_count(frame.at(0).addr(), frame.at(8).addr());
                    u32 r0_24 = seconds_to_days(text + 0x14u);
                    PictureKey__set_low_bits(frame.at(0).addr(), r0_24);
                    Vector8__insert(vector8, r10, frame.at(0).addr());
                    r2 = guest::cpu()->r[2];
                }
                i += 1u;
                guest::preempt();
            } while (s32(i) < s32(r6));
        }
    }
    return 0u;
}

}  // namespace d_005a53c4
GUEST_EXPORT_FRAMED(0x005a53c4, d_005a53c4::PictureDb__add_picture, 0x47f0);  // pushes {i, r5, r6, r7, vector8, r9, r10, lr} first, as the original

// f_005a55cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Writes a picture (kind 1) with its two scale values through 005a566c.
namespace d_005a55cc {

struct __attribute__((packed)) Local_005a55cc_r3_1 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_005a55cc_r3_1, float_0, 0x0);
GUEST_OFFSET(Local_005a55cc_r3_1, float_4, 0x4);

inline constexpr guest::Function<0x005a566c, u32(u32, u32, u32, u32)> Camera__set_shot;

struct __attribute__((packed)) ImgdbWritePicture1Frame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    float float_c;
    u32 word_10;
    u32 word_14;
    float float_18;
    u8 unknown_1c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(ImgdbWritePicture1Frame, word_0, 0x0);
GUEST_OFFSET(ImgdbWritePicture1Frame, word_4, 0x4);
GUEST_OFFSET(ImgdbWritePicture1Frame, word_8, 0x8);
GUEST_OFFSET(ImgdbWritePicture1Frame, float_c, 0xc);
GUEST_OFFSET(ImgdbWritePicture1Frame, word_10, 0x10);
GUEST_OFFSET(ImgdbWritePicture1Frame, word_14, 0x14);
GUEST_OFFSET(ImgdbWritePicture1Frame, float_18, 0x18);
GUEST_SIZE(ImgdbWritePicture1Frame, 0x20);

u32 imgdb__write_picture_1(u32 r0_unused, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<ImgdbWritePicture1Frame> frame;  // the original's stack frame
    gptr<Local_005a55cc_r3_1> r3_1 = gptr<Local_005a55cc_r3_1>(frame.at(0x28).addr());
    float S0_1 = r3_1->float_0;
    float S1_1 = r3_1->float_4;
    frame->float_c = S0_1;
    frame->word_14 = 0;
    frame->word_10 = 1;
    frame->float_18 = S1_1;
    frame->word_4 = 0;
    frame->word_8 = 0;
    frame->word_0 = r3;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    Camera__set_shot(guest::cpu()->r[0], guest::cpu()->r[1], 1u, r2);
    return guest::cpu()->r[0];
}

}  // namespace d_005a55cc
GUEST_EXPORT_FRAMED(0x005a55cc, d_005a55cc::imgdb__write_picture_1, 0x4010);  // pushes {r4, lr} first, as the original

// f_005a5618: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Checks database `index`'s files (005a9e1c), also the second file when it has one; the first error.
namespace d_005a5618 {

inline constexpr guest::Function<0x005a9e1c, u32(u32, u32, u32, u32)> PhotoStore__path_of;

u32 PictureDb__check_files(u32 picture_db, u32 r1) {
    u32 path = PhotoStore__path_of(picture_db, r1, 0u, 0u);
    u32 r4_1 = path;
    if (*gptr<u32>(picture_db + r1 * 0x48u + 0x3cu) != 0) {
        u32 path_2 = PhotoStore__path_of(picture_db, r1, 1u, 0u);
        if (r4_1 == 0) {
            r4_1 = path_2;
        }
    }
    return r4_1;
}

}  // namespace d_005a5618
GUEST_EXPORT_FRAMED(0x005a5618, d_005a5618::PictureDb__check_files, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005a58cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Verifies database `index` when it is open: 0xd when its storage is gone, else the file check result (clearing its
// dirty flag on success).
namespace d_005a58cc {

inline constexpr guest::Function<0x005a5240, u32(u32, u32)> PartList__find_kind;
inline constexpr guest::Function<0x005a5618, u32(u32, u32)> PictureDb__check_files;
inline constexpr guest::Function<0x005ac67c, u32(u32)> PhotoDatabase__scan;
inline constexpr guest::Function<0x00754978, u32(u32, u32, u32, u32)> field_nonzero_754978;

u32 PictureDb__verify(u32 picture_db, u32 r1) {
    u32 r0_4 = 0;
    u32 r6_1 = 0u;
    u32 r0_2 = field_nonzero_754978(picture_db + (r1 + (r1 << 3) << 3) + 8u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        PartList__find_kind(picture_db, r1);
        u32 r0_3 = PhotoDatabase__scan(r1);
        r1_1 = guest::cpu()->r[1];
        if (r0_3 != 0) {
            return 0xdu;
        }
        r0_4 = PictureDb__check_files(picture_db, r1);
        r1_1 = guest::cpu()->r[1];
        r6_1 = r0_4;
        if (r0_4 != 0) {
            return r0_4;
        }
        r1_1 = picture_db + r1;
        *gptr<u8>(r1_1 + 6u) = 0;
    }
    guest::cpu()->r[1] = r1_1;
    return r6_1;
}

}  // namespace d_005a58cc
GUEST_EXPORT_FRAMED(0x005a58cc, d_005a58cc::PictureDb__verify, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005a593c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Adds a picture to the database (the variant that also rebuilds the index when needed).
namespace d_005a593c {

struct __attribute__((packed)) Local_005a593c_r4_1 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
    u8 unknown_14[0x28];  // (not used here)
    u32 word_3c;
};
GUEST_OFFSET(Local_005a593c_r4_1, word_10, 0x10);
GUEST_OFFSET(Local_005a593c_r4_1, word_3c, 0x3c);

inline constexpr guest::Function<0x0013f274, u32(u32, u32, u32, u32)> clear_word_pair_0013f274;
inline constexpr guest::Function<0x005a5240, u32(u32, u32, u32, u32)> PartList__find_kind;
inline constexpr guest::Function<0x005a5618, u32(u32, u32)> PictureDb__check_files;
inline constexpr guest::Function<0x005a7aa8, u32(u32, u32, u32, u32)> PictureDb__rebuild_index;
inline constexpr guest::Function<0x005a992c, u32(u32, u32, u32)> PhotoFile__find_free_folder;
inline constexpr guest::Function<0x005a9c48, u32(u32, u32, u32)> PhotoFile__find_free_index;
inline constexpr guest::Function<0x005a9e1c, u32(u32, u32, u32, u32)> PhotoStore__path_of;
inline constexpr guest::Function<0x005aa0b8, u32(u32)> PhotoFile__compute_sizes;
inline constexpr guest::Function<0x005aa450, u32(u32)> clear_word_pair_005aa450;
inline constexpr guest::Function<0x005aa460, u32(u32, u32)> PictureKey__set_bits_2_to_4;
inline constexpr guest::Function<0x005aa47c, u32(u32, u32)> PictureKey__set_id_and_count;
inline constexpr guest::Function<0x005aa4bc, u32(u32, u32)> PictureKey__set_bits_0_to_1;
inline constexpr guest::Function<0x005aa4d4, u32(u32, u32)> PictureKey__set_high_bits;
inline constexpr guest::Function<0x005aa4ec, u32(u32, u32)> PictureKey__set_low_bits;
inline constexpr guest::Function<0x005acde8, u32(u32)> photo_database_path;
inline constexpr guest::Function<0x005ae46c, u32(u32)> photo_index_path;
inline constexpr guest::Function<0x0075412c, u32(u32, u32, u32)> Vector8__insert;
inline constexpr guest::Function<0x007546b4, u32(u32)> seconds_to_days;
inline constexpr guest::Function<0x00754978, u32(u32, u32, u32, u32)> field_nonzero_754978;
inline constexpr guest::Function<0x00754a3c, u32(u32, u32, u32, u32)> entry_12_at_2;
inline constexpr guest::Function<0x00754a9c, u32(u32)> entry_of_table_owner_00754a9c;
inline constexpr guest::Function<0x007553d8, u32(u32)> extension_index;
inline constexpr guest::Function<0x00755484, u32(u32)> pack_count_and_id;
inline constexpr guest::Function<0x007554e4, u32(u32)> bit_0_of_28;

struct __attribute__((packed)) PictureDbAddPicture2Frame {
    u8 unknown_0[0x8];  // (not read or written by name)
    u32 word_8;
    u8 unknown_c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(PictureDbAddPicture2Frame, word_8, 0x8);
GUEST_SIZE(PictureDbAddPicture2Frame, 0x10);

u32 PictureDb__add_picture_2(u32 picture_db, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<PictureDbAddPicture2Frame> frame;  // the original's stack frame
    u32 r9_1 = 0;
    u32 r0_9 = 0;
    u32 r7 = r1;
    u32 r8 = picture_db;
    u32 r5_1 = 0u;
    gptr<Local_005a593c_r4_1> r4_1 = gptr<Local_005a593c_r4_1>(r8 + (r1 + (r7 << 3) << 3));
    u32 r0_2 = field_nonzero_754978(r4_1.addr() + 8u, r1, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        PartList__find_kind(r8, r7, guest::cpu()->r[2], guest::cpu()->r[3]);
        if (r4_1->word_3c == 0) {
            r9_1 = 0u;
        } else {
            u32 r0_3 = photo_index_path(r7);
            u32 free_folder = PhotoFile__find_free_folder(r4_1.addr() + 8u, r7, r0_3);
            r9_1 = free_folder;
        }
        u32 r0_5 = photo_database_path(r7);
        u32 free_index = PhotoFile__find_free_index(r4_1.addr() + 8u, r7, r0_5);
        PhotoFile__compute_sizes(r4_1.addr() + 8u);
        r1_1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if ((r9_1 | free_index) != 0) {
            if (r9_1 != 0) {
                if (free_index != 0) {
                    PartList__find_kind(r8, r7, r2, r3);
                }
                u32 path = PhotoStore__path_of(r8, r7, 1u, 1u);
                r1_1 = guest::cpu()->r[1];
                if (path != 0) {
                    r5_1 = path;
                }
            }
            if (free_index != 0) {
                u32 path_2 = PhotoStore__path_of(r8, r7, 0u, 1u);
                r1_1 = guest::cpu()->r[1];
                if (path_2 != 0) {
                    return path_2;
                }
            }
            if (r5_1 != 0) {
                guest::cpu()->r[1] = r1_1;
                return r5_1;
            }
            u32 r1_4 = r9_1 == 0;
            u32 upper = free_index == 0;
            r0_9 = PictureDb__rebuild_index(r7, r1_4, upper, r4_1.addr() + 8u);
            r1_1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_9 != 0) {
                return r0_9;
            }
        }
        u32 r6 = r4_1->word_10;
        u32 r9 = r4_1.addr() + 8u;
        u32 r10 = r8 + 0x98u;
        u32 i = 0u;
        if (s32(r6) > 0) {
            do {
                u32 text = entry_of_table_owner_00754a9c(entry_12_at_2(r9, i, r2, r3));
                u32 r0_12 = bit_0_of_28(text);
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_12 != 0) {
                    clear_word_pair_0013f274(frame.at(0).addr(), guest::cpu()->r[1], r2, r3);
                    clear_word_pair_005aa450(frame.at(0).addr());
                    PictureKey__set_bits_0_to_1(frame.at(0).addr(), r7);
                    PictureKey__set_high_bits(frame.at(0).addr(), i);
                    u32 extension_2 = extension_index(text);
                    PictureKey__set_bits_2_to_4(frame.at(0).addr(), extension_2);
                    frame->word_8 = pack_count_and_id(text);
                    PictureKey__set_id_and_count(frame.at(0).addr(), frame.at(8).addr());
                    u32 r0_22 = seconds_to_days(text + 0x14u);
                    PictureKey__set_low_bits(frame.at(0).addr(), r0_22);
                    Vector8__insert(r8, r10, frame.at(0).addr());
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                }
                i += 1u;
                guest::preempt();
            } while (s32(i) < s32(r6));
        }
        r0_9 = PictureDb__check_files(r8, r7);
        r1_1 = guest::cpu()->r[1];
        r5_1 = r0_9;
        if (r0_9 != 0) {
            return r0_9;
        }
        r1_1 = r8 + r7;
        *gptr<u8>(r1_1 + 6u) = 0;
    }
    guest::cpu()->r[1] = r1_1;
    return r5_1;
}

}  // namespace d_005a593c
GUEST_EXPORT_FRAMED(0x005a593c, d_005a593c::PictureDb__add_picture_2, 0x47f0);  // pushes {i, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_005a6218: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Repairs database `index`: checks its files and fixes the broken records.
namespace d_005a6218 {

inline constexpr guest::Function<0x005a5618, u32(u32, u32, u32, u32)> PictureDb__check_files;
inline constexpr guest::Function<0x005a5e9c, u32(u32, u32, u32, u32)> PhotoFolder__scan;
inline constexpr guest::Function<0x005a6350, u32(u32, u32, u32, u32)> PhotoFolder__find_free;
inline constexpr guest::Function<0x005a7910, u32(u32, u32, u32, u32)> PictureDb__fix_record;
inline constexpr guest::Function<0x005a7f70, u32(u32, u32, u32, u32)> PictureDb__fix_entry_files;
inline constexpr guest::Function<0x005a9e1c, u32(u32, u32, u32, u32)> PhotoStore__path_of;
inline constexpr guest::Function<0x00754a3c, u32(u32, u32, u32, u32)> entry_12_at_2;

u32 PictureDb__repair(u32 picture_db, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r12 = guest::cpu()->r[12];
    u32 r11_1 = 0;
    *frame.at<u32>(0x20) = r12;
    u32 r5 = picture_db;
    u32 r8 = r1;
    u32 r9 = r5 + (r1 + (r8 << 3) << 3);
    if (*gptr<u32>(r9 + 0x3cu) != 0) {
        picture_db = PhotoFolder__find_free(r5, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (picture_db == 0) {
            u32 r6 = *gptr<u32>(r9 + 0x10u);
            u32 r7 = 0u;
            u32 r10 = r9 + 8u;
            r11_1 = r7;
            u32 r4 = r7;
            if (s32(r6) <= 0) {
                goto L_5a6328;
            }
L_5a6264:;
            if (*gptr<u8>(r5 + 5u) == 0) {
                u32 r0_1 = entry_12_at_2(r10, r4, r2, r3);
                u32 r0_2 = PictureDb__fix_record(r8, r0_1, 0u, 0u);
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_2 != 0) {
                    PictureDb__fix_entry_files(r8, r0_1, r2, r3);
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    r7 = 1u;
                }
                r4 += 1u;
                if (s32(r6) > s32(r4)) {
                    guest::preempt();
                    goto L_5a6264;
                }
                if (r7 == 0) {
                    goto L_5a6330;
                }
                u32 r0_3 = PictureDb__check_files(r5, r8, r2, r3);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                r11_1 = r0_3;
                if (r0_3 == 0) {
                    goto L_5a6330;
                }
                goto L_5a6328;
            }
            u32 path = PhotoStore__path_of(r5, r8, 0u, 0u);
            r1 = guest::cpu()->r[1];
            if (*gptr<u32>(r9 + 0x3cu) != 0) {
                PhotoStore__path_of(r5, r8, 1u, 0u);
                r1 = guest::cpu()->r[1];
            }
            picture_db = 0xbu;
        }
        guest::cpu()->r[1] = r1;
        return picture_db;
L_5a6328:;
        picture_db = r11_1;
        if (r11_1 != 0) {
            guest::cpu()->r[1] = r1;
            return picture_db;
        }
L_5a6330:;
        picture_db = PhotoFolder__scan(r5, r8, r2, r3);
        r1 = guest::cpu()->r[1];
        if (picture_db != 0) {
            return picture_db;
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_005a6218
GUEST_EXPORT_FRAMED(0x005a6218, d_005a6218::PictureDb__repair, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_005a66d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs the photo image database: two file slots, room for 32 entries, nothing open.
namespace d_005a66d4 {

struct __attribute__((packed)) Local_005a66d4_r0_3 {
    u8 unknown_0[0x6];  // (not used here)
    u8 byte_6;
    u8 byte_7;
    u8 unknown_8[0x94];  // (not used here)
    u32 word_9c;
    u32 word_a0;
    u32 word_a4;
    u32 word_a8;
    u32 word_ac;
};
GUEST_OFFSET(Local_005a66d4_r0_3, byte_6, 0x6);
GUEST_OFFSET(Local_005a66d4_r0_3, byte_7, 0x7);
GUEST_OFFSET(Local_005a66d4_r0_3, word_9c, 0x9c);
GUEST_OFFSET(Local_005a66d4_r0_3, word_a0, 0xa0);
GUEST_OFFSET(Local_005a66d4_r0_3, word_a4, 0xa4);
GUEST_OFFSET(Local_005a66d4_r0_3, word_a8, 0xa8);
GUEST_OFFSET(Local_005a66d4_r0_3, word_ac, 0xac);

inline constexpr u32 vtable_imgdb__ImageDatabase = 0x00907de8u;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;

void imgdb__ImageDatabase__ImageDatabase(gptr<imgdb__ImageDatabase> image_database) {
    image_database->vtable = vtable_imgdb__ImageDatabase;
    image_database->byte_4 = 0;
    image_database->byte_5 = 0;
    gptr<Local_005a66d4_r0_3> r0_3 = gptr<Local_005a66d4_r0_3>(for_each_element(image_database.addr() + 8u, 0x5aa120u, 0x48u, 2u) - 8u);
    r0_3->word_9c = 0x20;
    r0_3->word_a0 = 0;
    r0_3->word_a4 = 0;
    r0_3->word_a8 = 0;
    r0_3->word_ac = 0;
    r0_3->byte_6 = 0;
    r0_3->byte_7 = 0;
}

}  // namespace d_005a66d4
GUEST_EXPORT_FRAMED(0x005a66d4, d_005a66d4::imgdb__ImageDatabase__ImageDatabase, 0x4010);  // pushes {r4, lr} first, as the original

// f_005a68e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Parses the photo file name under the cursor: an 8-character folder name, or a name with a 1-4 character extension; 1
// when it is a valid photo name, 2 otherwise.
namespace d_005a68e8 {

struct __attribute__((packed)) PhotoName {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(PhotoName, word_c, 0xc);

inline constexpr guest::Function<0x00100835, u32(u32)> string16_length;
inline constexpr guest::Function<0x0010181d, u32(u32, u32, u32)> wmemcpy;
inline constexpr guest::Function<0x005aed38, u32(u32)> PhotoName__number_2;
inline constexpr guest::Function<0x005aff24, u32(u32, u32, u32, u32)> DirCursor__next;
inline constexpr guest::Function<0x005b01b0, u32(u32, u32)> String16__copy_8;
inline constexpr guest::Function<0x005b027c, u32(u32, u32)> PhotoRecord__set_folder_name;
inline constexpr guest::Function<0x005b05a8, u32(u32, u32)> PhotoRecord__set_extension_name;
inline constexpr guest::Function<0x005b05b4, u32(u32, u32)> PhotoRecord__set_extension_wide;
inline constexpr guest::Function<0x00755290, u32(u32, u32)> Cursor__current_is_unmarked;
inline constexpr guest::Function<0x007552e8, u32(u32, u32)> Cursor__current;
inline constexpr guest::Function<0x00755384, u32(u32)> is_name_of_4_word_chars;
inline constexpr guest::Function<0x007553d8, u32(u32)> extension_index;

struct __attribute__((packed)) PhotoNameParseFrame {
    u8 unknown_0[0x10];  // (not read or written by name)
    u16 half_10;
    u8 unknown_12[0x6];  // (not read or written by name)
};
GUEST_OFFSET(PhotoNameParseFrame, half_10, 0x10);
GUEST_SIZE(PhotoNameParseFrame, 0x18);

u32 PhotoName__parse(gptr<PhotoName> photo_name, u32 r1, u32 r2) {
    guest::StackFrameOf<PhotoNameParseFrame> frame;  // the original's stack frame
    u32 dir_cursor = photo_name.addr();
    u32 r4_1 = dir_cursor;
    dir_cursor = photo_name->word_c;
    if (dir_cursor != 0) {
        dir_cursor = DirCursor__next(dir_cursor, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (dir_cursor != 0) {
            u32 is_unmarked = Cursor__current_is_unmarked(photo_name->word_c, r1);
            r1 = guest::cpu()->r[1];
            if (is_unmarked != 0) {
                u32 r0_4 = Cursor__current(photo_name->word_c, r1);
                u32 r0_5 = string16_length(r0_4);
                r1 = guest::cpu()->r[1];
                if (s32(r0_5) >= 8) {
                    String16__copy_8(r4_1 + 0x10u, 0x5a6a38u);
                    PhotoRecord__set_extension_name(r4_1 + 0x10u, 0x5a6a38u);
                    r1 = guest::cpu()->r[1];
                    if (s32(r0_5) <= 8) {
                        PhotoRecord__set_folder_name(r4_1 + 0x10u, r0_4);
                        PhotoRecord__set_extension_name(r4_1 + 0x10u, 0x5a6a38u);
                        goto L_5a69d8;
                    }
                    if (*gptr<u16>(r0_4 + 0x10u) == 0x2eu && s32(r0_5 - 9u) >= 1 && s32(r0_5 - 9u) <= 4) {
                        wmemcpy(frame.at(0).addr(), r0_4, 8u);
                        frame->half_10 = 0;
                        PhotoRecord__set_folder_name(r4_1 + 0x10u, frame.at(0).addr());
                        PhotoRecord__set_extension_wide(r4_1 + 0x10u, r0_4 + 0x12u);
                        goto L_5a69d8;
                    }
                }
            }
            dir_cursor = 2u;
        }
    }
    guest::cpu()->r[1] = r1;
    return dir_cursor;
L_5a69d8:;
    if (PhotoName__number_2(r4_1 + 0x10u) != 0) {
        if (is_name_of_4_word_chars(r4_1 + 0x10u) != 0) {
            u32 extension_2 = extension_index(r4_1 + 0x10u);
            r1 = guest::cpu()->r[1];
            if (extension_2 != 0) {
                return 1u;
            }
        }
    }
    String16__copy_8(r4_1 + 0x10u, 0x5a6a38u);
    PhotoRecord__set_extension_name(r4_1 + 0x10u, 0x5a6a38u);
    return 2u;
}

}  // namespace d_005a68e8
GUEST_EXPORT_FRAMED(0x005a68e8, d_005a68e8::PhotoName__parse, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005a6b8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears a photo name parser (state 2) and its path.
namespace d_005a6b8c {

struct __attribute__((packed)) PhotoName {
    u32 word_0;
    u8 byte_4;
    u8 unknown_5[0x3];  // (not used here)
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(PhotoName, word_0, 0x0);
GUEST_OFFSET(PhotoName, byte_4, 0x4);
GUEST_OFFSET(PhotoName, word_8, 0x8);
GUEST_OFFSET(PhotoName, word_c, 0xc);

inline constexpr guest::Function<0x005a8af0, u32(u32)> PhotoRecord__clear;

void PhotoName__init(gptr<PhotoName> photo_name) {
    photo_name->word_0 = 0;
    photo_name->byte_4 = 2;
    photo_name->word_8 = 0;
    photo_name->word_c = 0;
    PhotoRecord__clear(photo_name.addr() + 0x10u);
}

}  // namespace d_005a6b8c
GUEST_EXPORT_FRAMED(0x005a6b8c, d_005a6b8c::PhotoName__init, 0x4010);  // pushes {r4, lr} first, as the original

// f_005a6c4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The address of 18-byte entry `index` from +8.
namespace d_005a6c4c {


u32 entry_18_at(u32 r0, u32 r1) {
    u32 r1_1 = r1 * 9u;
    guest::cpu()->r[1] = r1_1;
    return r0 + (r1_1 << 1) + 8u;
}

}  // namespace d_005a6c4c
GUEST_EXPORT(0x005a6c4c, d_005a6c4c::entry_18_at);

// f_005a7910: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Fixes a broken record: rebuilds the photo's path and file record from its id, and removes the record when its file
// is gone; reports which was done.
namespace d_005a7910 {

inline constexpr guest::Function<0x005a8af0, u32(u32, u32, u32)> PhotoRecord__clear;
inline constexpr guest::Function<0x005aa720, u32(u32)> init_four_words;
inline constexpr guest::Function<0x005aa848, u32(u32)> PictureRecord__clear;
inline constexpr guest::Function<0x005ab768, u32(u32, u32, u32)> PhotoFile__read_header;
inline constexpr guest::Function<0x005ac2b0, u32(u32, u32, u32)> write_photo_file_1;
inline constexpr guest::Function<0x005ac4f4, u32(u32, u32, u32, u32)> PhotoPath__build_full;
inline constexpr guest::Function<0x005ac5dc, u32(u32, u32, u32, u32)> PhotoPath__build_from_record;
inline constexpr guest::Function<0x005af3d4, u32(u32, u32, u32)> PhotoDatabase__add;
inline constexpr guest::Function<0x005b0164, u32(u32, u32)> set_photo_file_name;
inline constexpr guest::Function<0x005b0450, u32(u32, u32)> set_flag_bit_0_at_28;
inline constexpr guest::Function<0x005b0478, u32(u32, u32, u32)> set_photo_folder_name;
inline constexpr guest::Function<0x005b0588, u32(u32, u32)> set_extension_by_index;
inline constexpr guest::Function<0x00754a70, u32(u32)> entry_of_reference;
inline constexpr guest::Function<0x00754a9c, u32(u32, u32, u32, u32)> entry_of_table_owner_00754a9c;
inline constexpr guest::Function<0x00754c88, u32(u32, u32, u32)> unpack_item_id_and_count;
inline constexpr guest::Function<0x007554e4, u32(u32, u32, u32)> bit_0_of_28;

struct __attribute__((packed)) PictureDbFixRecordFrame {
    u32 word_0;
    u8 unknown_4[0x4c];  // (not read or written by name)
    u32 word_50;
    u8 unknown_54[0xc];  // (not read or written by name)
    u8 byte_60;
    u8 unknown_61[0x3];  // (not read or written by name)
    u32 word_64;
    u8 unknown_68[0x4];  // (not read or written by name)
};
GUEST_OFFSET(PictureDbFixRecordFrame, word_0, 0x0);
GUEST_OFFSET(PictureDbFixRecordFrame, word_50, 0x50);
GUEST_OFFSET(PictureDbFixRecordFrame, byte_60, 0x60);
GUEST_OFFSET(PictureDbFixRecordFrame, word_64, 0x64);
GUEST_SIZE(PictureDbFixRecordFrame, 0x6c);

u32 PictureDb__fix_record(u32 picture_db, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<PictureDbFixRecordFrame> frame;  // the original's stack frame
    u32 picture_record = entry_of_table_owner_00754a9c(r1, r1, r2, r3);
    u32 entry_2 = entry_of_reference(r1);
    u32 r1_2 = guest::cpu()->r[1];
    u32 r2_2 = guest::cpu()->r[2];
    u32 r4_1 = 0u;
    u32 r5_1 = r4_1;
    if ((*gptr<u32>(entry_2 + 0xcu) & 1u) != 0) {
        frame->word_64 = unpack_item_id_and_count(entry_2, r1_2, r2_2);
        frame->word_0 = frame.at(0x64).addr();
        *frame.at<u32>(4) = 1;
        PhotoPath__build_full(frame.at(8).addr(), 0x2cu, picture_db, 1u);
        u32 r0_5 = PhotoFile__read_header(picture_db, frame.at(8).addr(), frame.at(0x60).addr());
        r1_2 = guest::cpu()->r[1];
        r2_2 = frame->byte_60;
        if (r2_2 != 0) {
            if ((r0_5 | r1_2) == 0) {
                PhotoRecord__clear(frame.at(0).addr(), r1_2, r2_2);
                set_extension_by_index(frame.at(0).addr(), 1u);
                frame->word_50 = unpack_item_id_and_count(entry_2, guest::cpu()->r[1], guest::cpu()->r[2]);
                set_photo_file_name(frame.at(0).addr(), frame.at(0x50).addr());
                frame->word_50 = unpack_item_id_and_count(entry_2, guest::cpu()->r[1], guest::cpu()->r[2]);
                set_photo_folder_name(frame.at(0).addr(), frame.at(0x50).addr(), 1u);
                set_flag_bit_0_at_28(frame.at(0).addr(), 1u);
                write_photo_file_1(picture_db, frame.at(0).addr(), 1u);
                init_four_words(entry_2);
                r1_2 = guest::cpu()->r[1];
                r2_2 = guest::cpu()->r[2];
                r5_1 = 1u;
            }
        }
    }
    if (bit_0_of_28(picture_record, r1_2, r2_2) != 0) {
        frame->word_0 = 0;
        PhotoPath__build_from_record(frame.at(8).addr(), 0x2cu, picture_db, picture_record);
        u32 r0_15 = PhotoFile__read_header(picture_db, frame.at(8).addr(), frame.at(4).addr());
        if (*frame.at<u8>(4) != 0) {
            if ((r0_15 | guest::cpu()->r[1]) == 0) {
                PhotoDatabase__add(picture_db, picture_record, 1u);
                PictureRecord__clear(picture_record);
                r4_1 = 1u;
            }
        }
    }
    if (r2 != 0) {
        *gptr<u8>(r2) = u8(r4_1);
    }
    if (r3 != 0) {
        *gptr<u8>(r3) = u8(r5_1);
    }
    return r4_1 | r5_1;
}

}  // namespace d_005a7910
GUEST_EXPORT_FRAMED(0x005a7910, d_005a7910::PictureDb__fix_record, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_005a7aa8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Rebuilds the database index (the parts that are missing), returning 0xb when an error was flagged.
namespace d_005a7aa8 {

inline guest::global<u8, 0x009816b8> picture_db;
inline constexpr guest::Function<0x005a7540, u32(u32, u32, u32, u32)> Screenshot__save_a;
inline constexpr guest::Function<0x005a7b2c, u32(u32, u32, u32, u32)> Screenshot__save_b;
inline constexpr guest::Function<0x005a7e10, u32(u32, u32, u32, u32)> Screenshot__save_c;
inline constexpr guest::Function<0x005a802c, u32(u32, u32, u32, u32)> PictureDb__rebuild_records;

u32 PictureDb__rebuild_index(u32 r0, u32 r1, u32 upper, u32 r3) {
    u32 r4_1 = upper;
    u32 r0_1 = 0u;
    u32 r5_1 = r3;
    *picture_db = u8(r0_1);
    if ((r1 & r4_1) == 0) {
        if (r1 == 0) {
            Screenshot__save_c(r0, r3, upper, r3);
            upper = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        if (r4_1 == 0) {
            Screenshot__save_b(r0, r5_1, upper, r3);
            upper = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        if (*gptr<u32>(r5_1 + 0x34u) != 0) {
            Screenshot__save_a(r0, r5_1, upper, r3);
            upper = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        PictureDb__rebuild_records(r0, r5_1, upper, r3);
        r1 = guest::cpu()->r[1];
        r0_1 = *picture_db;
        if (r0_1 != 0) {
            r0_1 = 0xbu;
        }
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_005a7aa8
GUEST_EXPORT_FRAMED(0x005a7aa8, d_005a7aa8::PictureDb__rebuild_index, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_005a7f70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Fixes an entry's files: rebuilds the record when its file exists but the flag is off, or rebuilds the file of
// extension 1 or 2 from the record.
namespace d_005a7f70 {

struct __attribute__((packed)) Entry {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Entry, word_c, 0xc);

inline constexpr guest::Function<0x005a8728, u32(u32, u32, u32, u32)> PhotoView__show_a;
inline constexpr guest::Function<0x005a8870, u32(u32, u32, u32, u32)> PhotoView__show_b;
inline constexpr guest::Function<0x005a89b0, u32(u32, u32, u32, u32)> PhotoView__show_c;
inline constexpr guest::Function<0x00754a70, u32(u32)> entry_of_reference;
inline constexpr guest::Function<0x00754a9c, u32(u32, u32, u32, u32)> entry_of_table_owner_00754a9c;
inline constexpr guest::Function<0x007553d8, u32(u32)> extension_index;
inline constexpr guest::Function<0x007554e4, u32(u32)> bit_0_of_28;

void PictureDb__fix_entry_files(u32 picture_db, u32 r1) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r0_1 = entry_of_table_owner_00754a9c(r1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    gptr<Entry> entry_2 = gptr<Entry>(entry_of_reference(r1));
    if ((entry_2->word_c & 1u) != 0) {
        if (bit_0_of_28(r0_1) == 0) {
            frame.release();
            PhotoView__show_a(picture_db, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            return;
        }
        if ((entry_2->word_c & 1u) != 0) {
            return;
        }
    }
    if (bit_0_of_28(r0_1) != 0) {
        u32 text = entry_of_table_owner_00754a9c(r1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 extension_2 = extension_index(text);
        if (extension_2 != 1u) {
            if (extension_2 != 2u) {
                return;
            }
            frame.release();
            PhotoView__show_b(picture_db, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            return;
        }
        frame.release();
        PhotoView__show_c(picture_db, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        return;
    }
}

}  // namespace d_005a7f70
GUEST_EXPORT(0x005a7f70, d_005a7f70::PictureDb__fix_entry_files);

// f_005a802c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Rebuilds the database records from the files on the storage, flagging errors at 0x9816b8.
namespace d_005a802c {

struct __attribute__((packed)) Local_005a802c_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005a802c_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_005a802c_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_005a802c_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005a802c_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_005a802c_ea_4, word_4, 0x4);

struct __attribute__((packed)) Entry {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Entry, word_0, 0x0);
GUEST_OFFSET(Entry, word_4, 0x4);

inline constexpr u32 picture_db_address = 0x009816b8u;
inline constexpr guest::Function<0x005a4030, u32(u32)> JpegDecoder__finish;
inline constexpr guest::Function<0x005a4418, u32(u32, u32, u32)> imgdb__JpegDecoder__JpegDecoder;
inline constexpr guest::Function<0x005a455c, u32(u32, u32)> imgdb__JpegDecoder__destructor;
inline constexpr guest::Function<0x005a9250, u32(u32)> imgdb__PhotoFileReader__destructor;
inline constexpr guest::Function<0x005aa1b0, u32(u32)> return_constant_0x97e09c_;
inline constexpr guest::Function<0x005aa914, u32(u32)> PhotoName__format;
inline constexpr guest::Function<0x005aa970, u32(u32, u32, u32, u32)> imgdb__PhotoFileReader__PhotoFileReader;
inline constexpr guest::Function<0x005ac5dc, u32(u32, u32, u32, u32)> PhotoPath__build_from_record;
inline constexpr guest::Function<0x005adf88, u32(u32, u32)> PhotoRecord__read;
inline constexpr guest::Function<0x005b0b6c, u32(u32)> PhotoDatabase__is_open;
inline constexpr guest::Function<0x005b0efc, u32(u32, u32, u32)> imgdb__MpDecoder__MpDecoder;
inline constexpr guest::Function<0x005b106c, u32(u32, u32)> imgdb__MpDecoder__destructor;
inline constexpr guest::Function<0x00754a3c, u32(u32, u32, u32, u32)> entry_12_at_2;
inline constexpr guest::Function<0x00754a70, u32(u32)> entry_of_reference;
inline constexpr guest::Function<0x00754a9c, u32(u32)> entry_of_table_owner_00754a9c;
inline constexpr guest::Function<0x007553d8, u32(u32, u32, u32, u32)> extension_index;
inline constexpr guest::Function<0x007554e4, u32(u32)> bit_0_of_28;

struct __attribute__((packed)) PictureDbRebuildRecordsFrame {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x14];  // (not read or written by name)
    u32 word_1c;
    u32 word_20;
    u8 unknown_24[0xf0];  // (not read or written by name)
};
GUEST_OFFSET(PictureDbRebuildRecordsFrame, word_0, 0x0);
GUEST_OFFSET(PictureDbRebuildRecordsFrame, word_4, 0x4);
GUEST_OFFSET(PictureDbRebuildRecordsFrame, word_1c, 0x1c);
GUEST_OFFSET(PictureDbRebuildRecordsFrame, word_20, 0x20);
GUEST_SIZE(PictureDbRebuildRecordsFrame, 0x114);

void PictureDb__rebuild_records(u32 picture_db, u32 r1, u32 upper, u32 r3) {
    guest::StackFrameOf<PictureDbRebuildRecordsFrame> frame;  // the original's stack frame
    u32 r1_9 = 0;
    u32 r7_2 = 0;
    u32 r1_11 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    u32 r1_13 = 0;
    u32 r0_22 = 0;
    u32 r4 = 0u;
    u32 r6 = picture_db;
    u32 r5 = r1;
    u32 r10 = picture_db_address;
    u32 r8 = r4;
    u32 r9 = 0x2cu;
    for (;;) {
        if (s32(*gptr<u32>(r5 + 8u)) <= s32(r4)) {
            break;
        }
        if (*gptr<u8>(r10) != 0) {
            break;
        }
        u32 r0_1 = entry_12_at_2(r5, r4, upper, r3);
        frame->word_4 = entry_of_table_owner_00754a9c(r0_1);
        gptr<Entry> entry_2 = gptr<Entry>(entry_of_reference(r0_1));
        u32 r0_5 = bit_0_of_28(frame->word_4);
        r1 = guest::cpu()->r[1];
        upper = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_5 != 0) {
            u32 extension_2 = extension_index(frame->word_4, r1, upper, r3);
            u32 r3_4 = frame->word_4;
            frame->word_0 = r8;
            u32 r0_10 = return_constant_0x97e09c_(PhotoPath__build_from_record(frame.at(0xb8).addr(), r9, r6, r3_4));
            u32 r3_6 = frame->word_4;
            frame->word_0 = r8;
            imgdb__PhotoFileReader__PhotoFileReader(frame.at(8).addr(), r0_10, r6, r3_6);
            if (PhotoName__format(frame.at(8).addr()) == 0) {
                if (extension_2 != 1u) {
                    if (extension_2 == 2u) {
                        imgdb__MpDecoder__MpDecoder(frame.at(0x48).addr(), frame->word_1c, frame->word_20);
                        u32 r0_16 = PhotoDatabase__is_open(frame.at(0x48).addr());
                        r1_9 = guest::cpu()->r[1];
                        if (r0_16 != 0) {
                            PhotoRecord__read(frame->word_4, frame.at(0x48).addr());
                            r1_9 = guest::cpu()->r[1];
                            if (entry_2.addr() != 0) {
                                gptr<Local_005a802c_ea_2> ea_2 = gptr<Local_005a802c_ea_2>(frame->word_4 + 0x14u);
                                r1_9 = ea_2->word_4;
                                entry_2->word_0 = ea_2->word_0;
                                entry_2->word_4 = r1_9;
                            }
                        }
                        goto L_5a81e0;
                    }
                    goto L_5a81e8;
                }
                r7_2 = frame->word_20;
                r1_11 = frame->word_1c;
                r0_18 = frame.at(0x48).addr();
                imgdb__JpegDecoder__JpegDecoder(r0_18, r1_11, r7_2);
                r0_19 = frame.at(0x48).addr();
                r0_20 = JpegDecoder__finish(r0_19);
                r1_13 = guest::cpu()->r[1];
                if (r0_20 != 0) {
                    PhotoRecord__read(frame->word_4, frame.at(0x48).addr());
                    r1_13 = guest::cpu()->r[1];
                    if (entry_2.addr() != 0) {
                        gptr<Local_005a802c_ea_4> ea_4 = gptr<Local_005a802c_ea_4>(frame->word_4 + 0x14u);
                        r1_13 = ea_4->word_4;
                        entry_2->word_0 = ea_4->word_0;
                        entry_2->word_4 = r1_13;
                    }
                }
                r0_22 = frame.at(0x48).addr();
                imgdb__JpegDecoder__destructor(r0_22, r1_13);
                goto L_5a81e8;
L_5a81e0:;
                imgdb__MpDecoder__destructor(frame.at(0x48).addr(), r1_9);
            }
L_5a81e8:;
            imgdb__PhotoFileReader__destructor(frame.at(8).addr());
            r1 = guest::cpu()->r[1];
            upper = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        r4 += 1u;
        guest::preempt();
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_005a802c
GUEST_EXPORT_FRAMED(0x005a802c, d_005a802c::PictureDb__rebuild_records, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_005a8b24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clamps a 64-bit time between the earliest (005a8c34) and the latest (005a8b9c) times.
namespace d_005a8b24 {

inline constexpr guest::Function<0x005a8b9c, u32(u32)> PhotoFolder__last;
inline constexpr guest::Function<0x005a8c34, u32(u32)> PhotoFolder__first;

struct __attribute__((packed)) StampClampToRangeFrame {
    u32 word_0;
    u32 second;
};
GUEST_OFFSET(StampClampToRangeFrame, word_0, 0x0);
GUEST_OFFSET(StampClampToRangeFrame, second, 0x4);
GUEST_SIZE(StampClampToRangeFrame, 0x8);

void Stamp__clamp_to_range(gptr<WordPair> word_pair, u32 r1_unused, u32 first, u32 r3) {
    guest::StackFrameOf<StampClampToRangeFrame> frame;  // the original's stack frame
    PhotoFolder__first(frame.at(0).addr());
    u32 r1_1 = frame->second;
    u32 res_1 = u64(r3) + ~r1_1 + u32(first >= frame->word_0);
    u32 r0_2 = frame.at(0).addr();
    if (res_1 >> 0x1f == ((r3 ^ r1_1) & (r3 ^ res_1)) >> 0x1f) {
        PhotoFolder__last(r0_2);
        u32 r1_2 = frame->second;
        u32 res_2 = u64(r1_2) + ~r3 + u32(frame->word_0 >= first);
        if (res_2 >> 0x1f != ((r1_2 ^ r3) & (r1_2 ^ res_2)) >> 0x1f) {
            PhotoFolder__last(frame.at(0).addr());
            u32 second = frame->second;
            word_pair->first = frame->word_0;
            word_pair->second = second;
            return;
        }
        word_pair->first = first;
        word_pair->second = r3;
    } else {
        PhotoFolder__first(r0_2);
        u32 r1_4 = frame->second;
        word_pair->first = frame->word_0;
        word_pair->second = r1_4;
    }
}

}  // namespace d_005a8b24
GUEST_EXPORT_FRAMED(0x005a8b24, d_005a8b24::Stamp__clamp_to_range, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005a8da4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The current time as a 64-bit count (from the system clock converted to a date and time).
namespace d_005a8da4 {

struct __attribute__((packed)) Local_005a8da4_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005a8da4_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_005a8da4_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_005a8da4_ea_2 {
    u32 word_0;
    u32 second;
};
GUEST_OFFSET(Local_005a8da4_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_005a8da4_ea_2, second, 0x4);

struct __attribute__((packed)) Local_005a8da4_r1_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005a8da4_r1_1, word_0, 0x0);
GUEST_OFFSET(Local_005a8da4_r1_1, word_4, 0x4);

inline constexpr guest::Function<0x00124130, u32(u32, u32, u32, u32)> Friends__wait_event;
inline constexpr guest::Function<0x001264f0, u32(u32, u32, u32)> count_to_time_stamp;
inline constexpr guest::Function<0x005a8cc0, u32(u32, u32, u32, u32)> PhotoFile__write;

struct __attribute__((packed)) StampNowFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x14];  // (not read or written by name)
    u32 word_20;
    u8 byte_24;
    u8 byte_25;
    u8 unknown_26[0x1];  // (not read or written by name)
    u8 byte_27;
    u8 byte_28;
    u8 byte_29;
    u8 unknown_2a[0x12];  // (not read or written by name)
};
GUEST_OFFSET(StampNowFrame, word_0, 0x0);
GUEST_OFFSET(StampNowFrame, word_4, 0x4);
GUEST_OFFSET(StampNowFrame, word_8, 0x8);
GUEST_OFFSET(StampNowFrame, word_20, 0x20);
GUEST_OFFSET(StampNowFrame, byte_24, 0x24);
GUEST_OFFSET(StampNowFrame, byte_25, 0x25);
GUEST_OFFSET(StampNowFrame, byte_27, 0x27);
GUEST_OFFSET(StampNowFrame, byte_28, 0x28);
GUEST_OFFSET(StampNowFrame, byte_29, 0x29);
GUEST_SIZE(StampNowFrame, 0x3c);

void Stamp__now(gptr<WordPair> word_pair, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<StampNowFrame> frame;  // the original's stack frame
    Friends__wait_event(frame.at(0x30).addr(), r1, r2, r3);
    gptr<Local_005a8da4_ea_1> ea_1 = gptr<Local_005a8da4_ea_1>(frame.at(0x30).addr());
    u32 r2_1 = ea_1->word_4;
    gptr<Local_005a8da4_r1_1> r1_1 = gptr<Local_005a8da4_r1_1>(frame.at(0x10).addr());
    r1_1->word_0 = ea_1->word_0;
    r1_1->word_4 = r2_1;
    count_to_time_stamp(frame.at(0x20).addr(), r1_1.addr(), r2_1);
    u32 r2_2 = s8(frame->byte_29);
    u32 r1_2 = s8(frame->byte_28);
    frame->word_0 = u32(s8(frame->byte_27));
    frame->word_4 = r1_2;
    frame->word_8 = r2_2;
    u32 r3_2 = s8(frame->byte_25);
    u32 r2_3 = s8(frame->byte_24);
    PhotoFile__write(frame.at(0x18).addr(), frame->word_20, r2_3, r3_2);
    gptr<Local_005a8da4_ea_2> ea_2 = gptr<Local_005a8da4_ea_2>(frame.at(0x18).addr());
    u32 second = ea_2->second;
    word_pair->first = ea_2->word_0;
    word_pair->second = second;
}

}  // namespace d_005a8da4
GUEST_EXPORT_FRAMED(0x005a8da4, d_005a8da4::Stamp__now, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_005a8e08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores the current time as a 64-bit count.
namespace d_005a8e08 {

struct __attribute__((packed)) Local_005a8e08_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005a8e08_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_005a8e08_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_005a8e08_r1_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005a8e08_r1_1, word_0, 0x0);
GUEST_OFFSET(Local_005a8e08_r1_1, word_4, 0x4);

inline constexpr guest::Function<0x00124130, u32(u32, u32, u32, u32)> Friends__wait_event;
inline constexpr guest::Function<0x001264f0, u32(u32, u32, u32)> count_to_time_stamp;
inline constexpr guest::Function<0x005a8cc0, u32(u32, u32, u32, u32)> PhotoFile__write;

struct __attribute__((packed)) StampSetNowFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0xc];  // (not read or written by name)
    u32 word_18;
    u8 byte_1c;
    u8 byte_1d;
    u8 unknown_1e[0x1];  // (not read or written by name)
    u8 byte_1f;
    u8 byte_20;
    u8 byte_21;
    u8 unknown_22[0xe];  // (not read or written by name)
};
GUEST_OFFSET(StampSetNowFrame, word_0, 0x0);
GUEST_OFFSET(StampSetNowFrame, word_4, 0x4);
GUEST_OFFSET(StampSetNowFrame, word_8, 0x8);
GUEST_OFFSET(StampSetNowFrame, word_18, 0x18);
GUEST_OFFSET(StampSetNowFrame, byte_1c, 0x1c);
GUEST_OFFSET(StampSetNowFrame, byte_1d, 0x1d);
GUEST_OFFSET(StampSetNowFrame, byte_1f, 0x1f);
GUEST_OFFSET(StampSetNowFrame, byte_20, 0x20);
GUEST_OFFSET(StampSetNowFrame, byte_21, 0x21);
GUEST_SIZE(StampSetNowFrame, 0x30);

void Stamp__set_now(u32 stamp, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<StampSetNowFrame> frame;  // the original's stack frame
    Friends__wait_event(frame.at(0x28).addr(), r1, r2, r3);
    gptr<Local_005a8e08_ea_1> ea_1 = gptr<Local_005a8e08_ea_1>(frame.at(0x28).addr());
    u32 r2_1 = ea_1->word_4;
    gptr<Local_005a8e08_r1_1> r1_1 = gptr<Local_005a8e08_r1_1>(frame.at(0x10).addr());
    r1_1->word_0 = ea_1->word_0;
    r1_1->word_4 = r2_1;
    count_to_time_stamp(frame.at(0x18).addr(), r1_1.addr(), r2_1);
    u32 r2_2 = s8(frame->byte_21);
    u32 r1_2 = s8(frame->byte_20);
    frame->word_0 = u32(s8(frame->byte_1f));
    frame->word_4 = r1_2;
    frame->word_8 = r2_2;
    u32 r3_2 = s8(frame->byte_1d);
    u32 r2_3 = s8(frame->byte_1c);
    PhotoFile__write(stamp, frame->word_18, r2_3, r3_2);
}

}  // namespace d_005a8e08
GUEST_EXPORT_FRAMED(0x005a8e08, d_005a8e08::Stamp__set_now, 0x4010);  // pushes {r4, lr} first, as the original

// f_005a8e60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Converts a count into a date and time and stores it as a 64-bit time.
namespace d_005a8e60 {

inline constexpr guest::Function<0x001264f0, u32(u32, u32, u32, u32)> count_to_time_stamp;
inline constexpr guest::Function<0x005a8cc0, u32(u32, u32, u32, u32)> PhotoFile__write;

struct __attribute__((packed)) StampFromCountFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 byte_10;
    u8 byte_11;
    u8 unknown_12[0x1];  // (not read or written by name)
    u8 byte_13;
    u8 byte_14;
    u8 byte_15;
    u8 unknown_16[0x2];  // (not read or written by name)
};
GUEST_OFFSET(StampFromCountFrame, word_0, 0x0);
GUEST_OFFSET(StampFromCountFrame, word_4, 0x4);
GUEST_OFFSET(StampFromCountFrame, word_8, 0x8);
GUEST_OFFSET(StampFromCountFrame, word_c, 0xc);
GUEST_OFFSET(StampFromCountFrame, byte_10, 0x10);
GUEST_OFFSET(StampFromCountFrame, byte_11, 0x11);
GUEST_OFFSET(StampFromCountFrame, byte_13, 0x13);
GUEST_OFFSET(StampFromCountFrame, byte_14, 0x14);
GUEST_OFFSET(StampFromCountFrame, byte_15, 0x15);
GUEST_SIZE(StampFromCountFrame, 0x18);

void Stamp__from_count(u32 stamp, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<StampFromCountFrame> frame;  // the original's stack frame
    count_to_time_stamp(frame.at(0xc).addr(), r1, r2, r3);
    u32 r2_1 = s8(frame->byte_15);
    u32 r1_1 = s8(frame->byte_14);
    frame->word_0 = u32(s8(frame->byte_13));
    frame->word_4 = r1_1;
    frame->word_8 = r2_1;
    u32 r3_1 = s8(frame->byte_11);
    u32 r2_2 = s8(frame->byte_10);
    PhotoFile__write(stamp, frame->word_c, r2_2, r3_1);
}

}  // namespace d_005a8e60
GUEST_EXPORT_FRAMED(0x005a8e60, d_005a8e60::Stamp__from_count, 0x4010);  // pushes {r4, lr} first, as the original

// f_005a8ea0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Parses a 19-character date YYYY:MM:DD HH:MM:SS into a 64-bit time; true when it is valid.
namespace d_005a8ea0 {

struct __attribute__((packed)) StampParseExifDateArg1 {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
    u8 unknown_5[0x2];  // (not used here)
    u8 byte_7;
    u8 unknown_8[0x2];  // (not used here)
    u8 byte_a;
    u8 unknown_b[0x2];  // (not used here)
    u8 byte_d;
    u8 unknown_e[0x2];  // (not used here)
    u8 byte_10;
};
GUEST_OFFSET(StampParseExifDateArg1, byte_4, 0x4);
GUEST_OFFSET(StampParseExifDateArg1, byte_7, 0x7);
GUEST_OFFSET(StampParseExifDateArg1, byte_a, 0xa);
GUEST_OFFSET(StampParseExifDateArg1, byte_d, 0xd);
GUEST_OFFSET(StampParseExifDateArg1, byte_10, 0x10);

struct __attribute__((packed)) Local_005a8ea0_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_005a8ea0_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_005a8ea0_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_005a8ea0_ea_1, word_8, 0x8);

struct __attribute__((packed)) Local_005a8ea0_r4_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_005a8ea0_r4_1, word_0, 0x0);
GUEST_OFFSET(Local_005a8ea0_r4_1, word_4, 0x4);
GUEST_OFFSET(Local_005a8ea0_r4_1, word_8, 0x8);

inline constexpr guest::Function<0x002fa9d0, u32(u32, u32, u32, u32)> string_length;
inline constexpr guest::Function<0x005a8cc0, u32(u32, u32, u32, u32)> PhotoFile__write;
inline constexpr guest::Function<0x005af6dc, u32(u32, u32, u32)> parse_decimal;

struct __attribute__((packed)) StampParseExifDateFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x18];  // (not read or written by name)
};
GUEST_OFFSET(StampParseExifDateFrame, word_0, 0x0);
GUEST_OFFSET(StampParseExifDateFrame, word_4, 0x4);
GUEST_OFFSET(StampParseExifDateFrame, word_8, 0x8);
GUEST_SIZE(StampParseExifDateFrame, 0x24);

u32 Stamp__parse_exif_date(u32 stamp, gptr<StampParseExifDateArg1> arg1, u32 r2, u32 r3) {
    guest::StackFrameOf<StampParseExifDateFrame> frame;  // the original's stack frame
    u32 length = string_length(arg1.addr(), arg1.addr(), r2, r3);
    if (length == 0x13u && arg1->byte_4 == 0x3au && arg1->byte_7 == 0x3au && arg1->byte_a == 0x20u && arg1->byte_d == 0x3au && arg1->byte_10 == 0x3au) {
        u32 r0_3 = parse_decimal(frame.at(0xc).addr(), arg1.addr(), 4u);
        if (r0_3 == 0) {
            return r0_3;
        }
        u32 r0_5 = parse_decimal(frame.at(0x10).addr(), arg1.addr() + 5u, 2u);
        if (r0_5 == 0) {
            return r0_5;
        }
        u32 r0_7 = parse_decimal(frame.at(0x14).addr(), arg1.addr() + 8u, 2u);
        if (r0_7 == 0) {
            return r0_7;
        }
        u32 r0_9 = parse_decimal(frame.at(0x18).addr(), arg1.addr() + 0xbu, 2u);
        if (r0_9 == 0) {
            return r0_9;
        }
        u32 r0_11 = parse_decimal(frame.at(0x1c).addr(), arg1.addr() + 0xeu, 2u);
        if (r0_11 == 0) {
            return r0_11;
        }
        u32 r0_13 = parse_decimal(frame.at(0x20).addr(), arg1.addr() + 0x11u, 2u);
        if (r0_13 == 0) {
            return r0_13;
        }
        gptr<Local_005a8ea0_r4_1> r4_1 = gptr<Local_005a8ea0_r4_1>(frame.at(0xc).addr());
        gptr<Local_005a8ea0_ea_1> ea_1 = gptr<Local_005a8ea0_ea_1>(frame.at(0x18).addr());
        u32 r1_13 = ea_1->word_4;
        u32 r2_1 = ea_1->word_8;
        frame->word_0 = ea_1->word_0;
        frame->word_4 = r1_13;
        frame->word_8 = r2_1;
        u32 r0_14 = PhotoFile__write(stamp, r4_1->word_0, r4_1->word_4, r4_1->word_8);
        if (r0_14 != 0) {
            r0_14 = 1u;
        }
        return r0_14;
    }
    return 0u;
}

}  // namespace d_005a8ea0
GUEST_EXPORT_FRAMED(0x005a8ea0, d_005a8ea0::Stamp__parse_exif_date, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_005a8fd0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds the entry's path and record, checks the storage and writes it; the writer's result.
namespace d_005a8fd0 {

struct __attribute__((packed)) FileWriter {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
    u8 unknown_9[0x7];  // (not used here)
    u8 byte_10;
    u8 unknown_11[0x3];  // (not used here)
    u32 word_14;
    u8 byte_18;
    u8 unknown_19[0x3];  // (not used here)
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(FileWriter, byte_8, 0x8);
GUEST_OFFSET(FileWriter, byte_10, 0x10);
GUEST_OFFSET(FileWriter, word_14, 0x14);
GUEST_OFFSET(FileWriter, byte_18, 0x18);
GUEST_OFFSET(FileWriter, word_1c, 0x1c);
GUEST_OFFSET(FileWriter, word_20, 0x20);

inline constexpr guest::Function<0x005a3c04, u32(u32, u32, u32, u32)> imgdb__FileWriter__virtual_2;
inline constexpr guest::Function<0x005ac2bc, u32(u32, u32, u32)> PhotoDatabase__load;
inline constexpr guest::Function<0x005ac5dc, u32(u32, u32, u32, u32)> PhotoPath__build_from_record;
inline constexpr guest::Function<0x005ad690, u32(u32, u32, u32, u32)> PhotoPath__build_folder;

struct __attribute__((packed)) ImgdbFileWriterWriteEntryFrame {
    u32 word_0;
    u8 unknown_4[0x9c];  // (not read or written by name)
};
GUEST_OFFSET(ImgdbFileWriterWriteEntryFrame, word_0, 0x0);
GUEST_SIZE(ImgdbFileWriterWriteEntryFrame, 0xa0);

u32 imgdb__FileWriter__write_entry(gptr<FileWriter> file_writer) {
    guest::StackFrameOf<ImgdbFileWriterWriteEntryFrame> frame;  // the original's stack frame
    frame->word_0 = u32(s8(file_writer->byte_18));
    u32 r3_1 = file_writer->word_14;
    u32 r2_1 = file_writer->byte_10;
    PhotoPath__build_folder(frame.at(0x60).addr(), 0x1eu, r2_1, r3_1);
    frame->word_0 = u32(s8(file_writer->byte_18));
    u32 r3_2 = file_writer->word_14;
    u32 r2_2 = file_writer->byte_10;
    PhotoPath__build_from_record(frame.at(8).addr(), 0x2cu, r2_2, r3_2);
    u32 r0_3 = file_writer->byte_10;
    u32 r0_4 = PhotoDatabase__load(r0_3, frame.at(0x60).addr(), 0u);
    if (r0_4 != 0) {
        return r0_4;
    }
    frame->word_0 = file_writer->word_20;
    u32 r3_4 = file_writer->word_1c;
    u32 r1_3 = file_writer->byte_10;
    imgdb__FileWriter__virtual_2(file_writer.addr(), r1_3, frame.at(8).addr(), r3_4);
    return s8(file_writer->byte_8);
}

}  // namespace d_005a8fd0
GUEST_EXPORT_FRAMED(0x005a8fd0, d_005a8fd0::imgdb__FileWriter__write_entry, 0x4010);  // pushes {r4, lr} first, as the original

// f_005a9054: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs an image file writer for a file (arg 1): its kind, buffer and scale.
namespace d_005a9054 {

struct __attribute__((packed)) Local_005a9054_r4_1 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_005a9054_r4_1, float_0, 0x0);
GUEST_OFFSET(Local_005a9054_r4_1, float_4, 0x4);

inline constexpr u32 vtable_imgdb__ImageFileWriter = 0x00907df8u;

void imgdb__FileWriter__FileWriter_005a9054(gptr<imgdb__ImageFileWriter> image_file_writer, u32 r1, u32 r2, u32 r3) {
    gptr<Local_005a9054_r4_1> r4_1 = gptr<Local_005a9054_r4_1>(guest::cpu()->r[13] + 0xcu);
    u32 r12_1 = *gptr<u32>(guest::cpu()->r[13] + 8u);
    float S0_1 = r4_1->float_0;
    float S1_1 = r4_1->float_4;
    image_file_writer->word_4 = r1;
    image_file_writer->byte_8 = 1;
    image_file_writer->word_c = 0;
    image_file_writer->vtable = vtable_imgdb__ImageFileWriter;
    image_file_writer->byte_10 = u8(r2);
    image_file_writer->word_14 = r3;
    image_file_writer->byte_18 = u8(r12_1);
    image_file_writer->float_1c = S0_1;
    image_file_writer->float_20 = S1_1;
    guest::cpu()->r[1] = vtable_imgdb__ImageFileWriter;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_005a9054
GUEST_EXPORT_FRAMED(0x005a9054, d_005a9054::imgdb__FileWriter__FileWriter_005a9054, 0x30);  // pushes {r4, r5} first, as the original

// f_005a90b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores a value at +0x10 of the record (+0xc) and marks it changed.
namespace d_005a90b0 {

struct __attribute__((packed)) PictureInfo {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u8 byte_10;
};
GUEST_OFFSET(PictureInfo, word_c, 0xc);
GUEST_OFFSET(PictureInfo, byte_10, 0x10);


void PictureInfo__set_kind_value(gptr<PictureInfo> picture_info, u32 r1) {
    *gptr<u32>(picture_info->word_c + 0x10u) = r1;
    picture_info->byte_10 = 1;
}

}  // namespace d_005a90b0
GUEST_EXPORT(0x005a90b0, d_005a90b0::PictureInfo__set_kind_value);

// f_005a90c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets or clears flag 0x10 of the record's flags (+0x14 of +0xc).
namespace d_005a90c4 {

struct __attribute__((packed)) PictureInfo {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(PictureInfo, word_c, 0xc);

struct __attribute__((packed)) Local_005a90c4_r1_1 {
    u8 unknown_0[0x14];  // (not used here)
    u16 half_14;
};
GUEST_OFFSET(Local_005a90c4_r1_1, half_14, 0x14);


void PictureInfo__set_flag_10(gptr<PictureInfo> picture_info, u32 r1) {
    u32 zf_1 = r1 == 0;
    gptr<Local_005a90c4_r1_1> r1_1 = gptr<Local_005a90c4_r1_1>(picture_info->word_c);
    u32 r0_1 = r1_1->half_14;
    r1_1->half_14 = u16(zf_1 ? r0_1 & ~0x10u : r0_1 | 0x10u);
}

}  // namespace d_005a90c4
GUEST_EXPORT(0x005a90c4, d_005a90c4::PictureInfo__set_flag_10);

// f_005a91e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Keeps a value at 0x9816ac and marks it pending (0x9816a8).
namespace d_005a91e0 {

inline guest::global<u8, 0x009816a8> pending_photo_file;
inline guest::global<u32, 0x009816ac> pending_picture;

void set_pending_picture(u32 r0) {
    *pending_picture = r0;
    *pending_photo_file = 1;
}

}  // namespace d_005a91e0
GUEST_EXPORT(0x005a91e0, d_005a91e0::set_pending_picture);

// f_005a9c14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies a value into the two open records (+0x2c when +0x20, +0x40 when +0x34).
namespace d_005a9c14 {

struct __attribute__((packed)) PictureDb {
    u8 unknown_0[0x20];  // (not used here)
    u32 word_20;
    u8 unknown_24[0x8];  // (not used here)
    u32 word_2c;
    u8 unknown_30[0x4];  // (not used here)
    u32 word_34;
    u8 unknown_38[0x8];  // (not used here)
    u32 word_40;
};
GUEST_OFFSET(PictureDb, word_20, 0x20);
GUEST_OFFSET(PictureDb, word_2c, 0x2c);
GUEST_OFFSET(PictureDb, word_34, 0x34);
GUEST_OFFSET(PictureDb, word_40, 0x40);

struct __attribute__((packed)) PictureDbSetRecordValuesArg1 {
    u32 word_0;
};
GUEST_OFFSET(PictureDbSetRecordValuesArg1, word_0, 0x0);


void PictureDb__set_record_values(gptr<PictureDb> picture_db, gptr<PictureDbSetRecordValuesArg1> arg1) {
    if (picture_db->word_20 != 0) {
        *gptr<u32>(picture_db->word_2c + 0x10u) = arg1->word_0;
    }
    if (picture_db->word_34 == 0) {
        return;
    }
    *gptr<u32>(picture_db->word_40 + 0xcu) = arg1->word_0;
}

}  // namespace d_005a9c14
GUEST_EXPORT(0x005a9c14, d_005a9c14::PictureDb__set_record_values);

// f_005aa410: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs an SD archive mounter: not mounted.
namespace d_005aa410 {

inline constexpr u32 vtable_imgdb__SdArchiveMounter = 0x00907e4cu;
inline constexpr u32 vtable_imgdb__SdArchiveMounter_at_4 = 0x00907e6cu;

void imgdb__SdArchiveMounter__SdArchiveMounter(gptr<imgdb__SdArchiveMounter> sd_archive_mounter) {
    sd_archive_mounter->vtable = vtable_imgdb__SdArchiveMounter;
    sd_archive_mounter->sd_archive_mounter_vtable = vtable_imgdb__SdArchiveMounter_at_4;
    sd_archive_mounter->byte_8 = 0;
    sd_archive_mounter->byte_9 = 0;
}

}  // namespace d_005aa410
GUEST_EXPORT(0x005aa410, d_005aa410::imgdb__SdArchiveMounter__SdArchiveMounter);

// f_005aa460: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores a 3-bit value in bits 2-4 of the key's second word.
namespace d_005aa460 {


void PictureKey__set_bits_2_to_4(gptr<WordPair> word_pair, u32 extension) {
    u32 second = 0x1cu & extension << 2 | word_pair->second & ~0x1cu;
    word_pair->second = second;
    guest::cpu()->r[1] = second;
}

}  // namespace d_005aa460
GUEST_EXPORT(0x005aa460, d_005aa460::PictureKey__set_bits_2_to_4);

// f_005aa47c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores the packed id and count (two halves) in bits 5-28 of the key's second word.
namespace d_005aa47c {

struct __attribute__((packed)) PictureKeySetIdAndCountArg1 {
    u16 half_0;
    u16 half_2;
};
GUEST_OFFSET(PictureKeySetIdAndCountArg1, half_0, 0x0);
GUEST_OFFSET(PictureKeySetIdAndCountArg1, half_2, 0x2);


void PictureKey__set_id_and_count(gptr<WordPair> word_pair, gptr<PictureKeySetIdAndCountArg1> arg1) {
    u32 second = word_pair->second & ~0x7000u & ~0xfe0u | ~0x1f8000u & u32(arg1->half_0) << 5;
    word_pair->second = second;
    u32 r1_1 = ~0x60000000u & u32(arg1->half_2) << 0xf | second & ~0x1fc00000u & ~0x3f8000u;
    word_pair->second = r1_1;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_005aa47c
GUEST_EXPORT(0x005aa47c, d_005aa47c::PictureKey__set_id_and_count);

// f_005aa4bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores a 2-bit value in bits 0-1 of the key's second word.
namespace d_005aa4bc {


void PictureKey__set_bits_0_to_1(gptr<WordPair> word_pair, u32 r1) {
    word_pair->second = r1 & 3u | word_pair->second & ~3u;
}

}  // namespace d_005aa4bc
GUEST_EXPORT(0x005aa4bc, d_005aa4bc::PictureKey__set_bits_0_to_1);

// f_005aa4d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores a value in bits 18-31 of the key's first word.
namespace d_005aa4d4 {


void PictureKey__set_high_bits(gptr<WordPair> word_pair, u32 r1) {
    u32 first = word_pair->first & 0x3ffffu | r1 << 0x12;
    word_pair->first = first;
    guest::cpu()->r[1] = first;
}

}  // namespace d_005aa4d4
GUEST_EXPORT(0x005aa4d4, d_005aa4d4::PictureKey__set_high_bits);

// f_005aa4ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores an 18-bit value in bits 0-17 of the key's first word.
namespace d_005aa4ec {


void PictureKey__set_low_bits(gptr<WordPair> word_pair, u32 r1) {
    word_pair->first = r1 & 0x3ffffu | word_pair->first >> 0x12 << 0x12;
}

}  // namespace d_005aa4ec
GUEST_EXPORT(0x005aa4ec, d_005aa4ec::PictureKey__set_low_bits);

// f_005aa50c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Halves the width and height (rounding up) until they fit within the limits; the number of halvings.
namespace d_005aa50c {

struct __attribute__((packed)) HalveSizeToFitArg0 {
    u32 word_0;
};
GUEST_OFFSET(HalveSizeToFitArg0, word_0, 0x0);

struct __attribute__((packed)) HalveSizeToFitArg1 {
    u32 word_0;
};
GUEST_OFFSET(HalveSizeToFitArg1, word_0, 0x0);

struct __attribute__((packed)) Local_005aa50c_r12 {
    u32 word_0;
};
GUEST_OFFSET(Local_005aa50c_r12, word_0, 0x0);


u32 halve_size_to_fit(gptr<HalveSizeToFitArg0> arg0, gptr<HalveSizeToFitArg1> arg1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    gptr<Local_005aa50c_r12> r12 = gptr<Local_005aa50c_r12>(r0);
    r0 = 0u;
    u32 r4 = arg0->word_0;
    u32 r5 = arg1->word_0;
    u32 r7 = 1u;
    for (;;) {
        u32 r6_2 = r12->word_0;
        u32 res_1 = r6_2 - r2;
        u32 nf_1 = res_1 >> 0x1f;
        u32 zf_1 = res_1 == 0;
        u32 vf_1 = ((r6_2 ^ r2) & (r6_2 ^ res_1)) >> 0x1f;
        if (zf_1 || nf_1 != vf_1) {
            u32 r6_3 = arg1->word_0;
            u32 res_2 = r6_3 - r3;
            nf_1 = res_2 >> 0x1f;
            zf_1 = res_2 == 0;
            vf_1 = ((r6_3 ^ r3) & (r6_3 ^ res_2)) >> 0x1f;
        }
        if (zf_1 || nf_1 != vf_1) {
            break;
        }
        r0 += 1u;
        u32 r6_1 = lsl_r(r7, r0 & 0xff);
        r12->word_0 = asr_r(r6_1 + r4 - 1u, r0 & 0xff);
        arg1->word_0 = asr_r(r6_1 + r5 - 1u, r0 & 0xff);
        guest::preempt();
    }
    return r0;
}

}  // namespace d_005aa50c
GUEST_EXPORT_FRAMED(0x005aa50c, d_005aa50c::halve_size_to_fit, 0x3f0);  // pushes {r4, r5, r6, r7, r8, r9} first, as the original

// f_005aa638: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores field `index` (+0x50 table) and marks it set in +0x4e.
namespace d_005aa638 {

struct __attribute__((packed)) PictureInfo {
    u8 unknown_0[0x4e];  // (not used here)
    u16 half_4e;
};
GUEST_OFFSET(PictureInfo, half_4e, 0x4e);


void PictureInfo__set_field(gptr<PictureInfo> picture_info, u32 r1, u32 r2) {
    *gptr<u32>(picture_info.addr() + 0x38u + (r1 << 2) + 0x18u) = r2;
    picture_info->half_4e = u16(u32(picture_info->half_4e) | lsl_r(1u, r1 & 0xff));
}

}  // namespace d_005aa638
GUEST_EXPORT(0x005aa638, d_005aa638::PictureInfo__set_field);

// f_005aa65c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Writes the low 20 bits of a value as five lowercase hexadecimal digits and a terminator.
namespace d_005aa65c {

struct __attribute__((packed)) FormatHex5DigitsArg0 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
    u8 byte_4;
    u8 byte_5;
};
GUEST_OFFSET(FormatHex5DigitsArg0, byte_0, 0x0);
GUEST_OFFSET(FormatHex5DigitsArg0, byte_1, 0x1);
GUEST_OFFSET(FormatHex5DigitsArg0, byte_2, 0x2);
GUEST_OFFSET(FormatHex5DigitsArg0, byte_3, 0x3);
GUEST_OFFSET(FormatHex5DigitsArg0, byte_4, 0x4);
GUEST_OFFSET(FormatHex5DigitsArg0, byte_5, 0x5);


void format_hex_5_digits(gptr<FormatHex5DigitsArg0> arg0, u32 r1_unused, u32 r2) {
    u32 r1_1 = r2 & 0xfu;
    u32 zf_1 = r1_1 == 9u;
    u32 cf_1 = r1_1 >= 9u;
    if (r1_1 <= 9u) {
        r1_1 += 0x30u;
    }
    if (cf_1 && !zf_1) {
        r1_1 += 0x57u;
    }
    u32 r2_1 = r2 >> 4;
    u32 r1_2 = r2_1 & 0xfu;
    u32 zf_2 = r1_2 == 9u;
    u32 cf_2 = r1_2 >= 9u;
    if (r1_2 <= 9u) {
        r1_2 += 0x30u;
    }
    if (cf_2 && !zf_2) {
        r1_2 += 0x57u;
    }
    arg0->byte_4 = u8(sxtb(r1_1));
    u32 r2_2 = r2_1 >> 4;
    u32 r1_3 = r2_2 & 0xfu;
    u32 zf_3 = r1_3 == 9u;
    u32 cf_3 = r1_3 >= 9u;
    if (r1_3 <= 9u) {
        r1_3 += 0x30u;
    }
    if (cf_3 && !zf_3) {
        r1_3 += 0x57u;
    }
    arg0->byte_3 = u8(sxtb(r1_2));
    u32 r2_3 = r2_2 >> 4;
    u32 r1_4 = r2_3 & 0xfu;
    u32 zf_4 = r1_4 == 9u;
    u32 cf_4 = r1_4 >= 9u;
    if (r1_4 <= 9u) {
        r1_4 += 0x30u;
    }
    if (cf_4 && !zf_4) {
        r1_4 += 0x57u;
    }
    arg0->byte_2 = u8(sxtb(r1_3));
    u32 r1_5 = (r2_3 >> 4) & 0xfu;
    u32 zf_5 = r1_5 == 9u;
    u32 cf_5 = r1_5 >= 9u;
    if (r1_5 <= 9u) {
        r1_5 += 0x30u;
    }
    if (cf_5 && !zf_5) {
        r1_5 += 0x57u;
    }
    arg0->byte_1 = u8(sxtb(r1_4));
    arg0->byte_0 = u8(sxtb(r1_5));
    arg0->byte_5 = 0;
}

}  // namespace d_005aa65c
GUEST_EXPORT(0x005aa65c, d_005aa65c::format_hex_5_digits);

// f_005aa6f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores a 64-bit time at +0x40.
namespace d_005aa6f0 {

struct __attribute__((packed)) PictureInfo {
    u8 unknown_0[0x40];  // (not used here)
    u32 word_40;
    u32 word_44;
};
GUEST_OFFSET(PictureInfo, word_40, 0x40);
GUEST_OFFSET(PictureInfo, word_44, 0x44);

struct __attribute__((packed)) PictureInfoSetTimeArg1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(PictureInfoSetTimeArg1, word_0, 0x0);
GUEST_OFFSET(PictureInfoSetTimeArg1, word_4, 0x4);


void PictureInfo__set_time(gptr<PictureInfo> picture_info, gptr<PictureInfoSetTimeArg1> arg1) {
    u32 r1_1 = arg1->word_0;
    u32 r2_1 = arg1->word_4;
    picture_info->word_40 = r1_1;
    picture_info->word_44 = r2_1;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_005aa6f0
GUEST_EXPORT(0x005aa6f0, d_005aa6f0::PictureInfo__set_time);

// f_005aa700: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores a value at +0x48 and marks it changed (+0x78).
namespace d_005aa700 {

struct __attribute__((packed)) PictureInfo {
    u8 unknown_0[0x48];  // (not used here)
    u32 word_48;
    u8 unknown_4c[0x2c];  // (not used here)
    u8 byte_78;
};
GUEST_OFFSET(PictureInfo, word_48, 0x48);
GUEST_OFFSET(PictureInfo, byte_78, 0x78);


void PictureInfo__set_value_48(gptr<PictureInfo> picture_info, u32 r1) {
    picture_info->word_48 = r1;
    picture_info->byte_78 = 1;
}

}  // namespace d_005aa700
GUEST_EXPORT(0x005aa700, d_005aa700::PictureInfo__set_value_48);

// f_005aa710: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores the kind (0 or 1 only) at +0xa.
namespace d_005aa710 {

struct __attribute__((packed)) PictureInfo {
    u8 unknown_0[0xa];  // (not used here)
    u8 byte_a;
};
GUEST_OFFSET(PictureInfo, byte_a, 0xa);


void PictureInfo__set_kind_a(gptr<PictureInfo> picture_info, u32 r1) {
    if (r1 == 0 || r1 == 1u) {
        picture_info->byte_a = u8(r1);
    }
}

}  // namespace d_005aa710
GUEST_EXPORT(0x005aa710, d_005aa710::PictureInfo__set_kind_a);

// f_005aa73c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores the packed id and count (two halves) in bits 1-17 of +0xc.
namespace d_005aa73c {

struct __attribute__((packed)) PictureInfo {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(PictureInfo, word_c, 0xc);

struct __attribute__((packed)) PictureInfoSetIdAndCountArg1 {
    u16 half_0;
    u16 half_2;
};
GUEST_OFFSET(PictureInfoSetIdAndCountArg1, half_0, 0x0);
GUEST_OFFSET(PictureInfoSetIdAndCountArg1, half_2, 0x2);


void PictureInfo__set_id_and_count(gptr<PictureInfo> picture_info, gptr<PictureInfoSetIdAndCountArg1> arg1) {
    u32 r2_1 = picture_info->word_c & ~0x700u & ~0xfeu | ~0x1f800u & u32(arg1->half_0) << 1;
    picture_info->word_c = r2_1;
    u32 r1_1 = 0x3f800u & u32(arg1->half_2) << 0xb | r2_1 & ~0x3f800u;
    picture_info->word_c = r1_1;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_005aa73c
GUEST_EXPORT(0x005aa73c, d_005aa73c::PictureInfo__set_id_and_count);

// f_005aa778: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears a picture record (0x6c bytes), sets +0xd to 4 and the kind byte +0x20 from `mode` (9 for mode 3).
namespace d_005aa778 {

struct __attribute__((packed)) PictureInfo {
    u8 unknown_0[0xd];  // (not used here)
    u8 byte_d;
    u8 unknown_e[0x12];  // (not used here)
    u8 byte_20;
};
GUEST_OFFSET(PictureInfo, byte_d, 0xd);
GUEST_OFFSET(PictureInfo, byte_20, 0x20);

inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x005a8b14, u32(u32)> clear_word_pair_005a8b14;

void PictureInfo__clear(gptr<PictureInfo> picture_info, u32 r1) {
    clear_aligned(picture_info.addr(), 0x6cu);
    clear_word_pair_005a8b14(picture_info.addr());
    picture_info->byte_d = 4;
    if (r1 == 1u || r1 == 2u) {
        picture_info->byte_20 = 0;
    } else if (r1 == 3u) {
        picture_info->byte_20 = 9;
    }
}

}  // namespace d_005aa778
GUEST_EXPORT_FRAMED(0x005aa778, d_005aa778::PictureInfo__clear, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005aa7c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears a picture record (0x6c bytes) with +0xd = 4 and +0x20 = 0.
namespace d_005aa7c0 {

struct __attribute__((packed)) PictureInfo {
    u8 unknown_0[0xd];  // (not used here)
    u8 byte_d;
    u8 unknown_e[0x12];  // (not used here)
    u8 byte_20;
};
GUEST_OFFSET(PictureInfo, byte_d, 0xd);
GUEST_OFFSET(PictureInfo, byte_20, 0x20);

inline constexpr guest::Function<0x002f825c, u32(u32, u32)> clear_aligned;
inline constexpr guest::Function<0x005a8b14, u32(u32)> clear_word_pair_005a8b14;

void PictureInfo__clear_default(gptr<PictureInfo> picture_info) {
    clear_aligned(picture_info.addr(), 0x6cu);
    clear_word_pair_005a8b14(picture_info.addr());
    picture_info->byte_d = 4;
    picture_info->byte_20 = 0;
}

}  // namespace d_005aa7c0
GUEST_EXPORT_FRAMED(0x005aa7c0, d_005aa7c0::PictureInfo__clear_default, 0x4010);  // pushes {r4, lr} first, as the original

// f_005aa7ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears slot `index` (+0x10 table) and its bit in +0xf.
namespace d_005aa7ec {

struct __attribute__((packed)) PictureInfo {
    u8 unknown_0[0xf];  // (not used here)
    u8 byte_f;
};
GUEST_OFFSET(PictureInfo, byte_f, 0xf);


void PictureInfo__clear_slot(gptr<PictureInfo> picture_info, u32 r1) {
    picture_info->byte_f = u8(u32(picture_info->byte_f) & ~lsl_r(1u, r1 & 0xff));
    *gptr<u32>(picture_info.addr() + (r1 << 2) + 0x10u) = 0;
}

}  // namespace d_005aa7ec
GUEST_EXPORT_FRAMED(0x005aa7ec, d_005aa7ec::PictureInfo__clear_slot, 0x10);  // pushes {r4} first, as the original

// f_005aa814: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores slot `index` (+0x10 table) and sets its bit in +0xf.
namespace d_005aa814 {

struct __attribute__((packed)) PictureInfo {
    u8 unknown_0[0xf];  // (not used here)
    u8 byte_f;
};
GUEST_OFFSET(PictureInfo, byte_f, 0xf);


void PictureInfo__set_slot(gptr<PictureInfo> picture_info, u32 r1, u32 r2) {
    picture_info->byte_f = u8(u32(picture_info->byte_f) | lsl_r(1u, r1 & 0xff));
    *gptr<u32>(picture_info.addr() + (r1 << 2) + 0x10u) = r2;
}

}  // namespace d_005aa814
GUEST_EXPORT_FRAMED(0x005aa814, d_005aa814::PictureInfo__set_slot, 0x10);  // pushes {r4} first, as the original

// f_005aa838: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores the kind (0 or 1 only) at +0xe.
namespace d_005aa838 {

struct __attribute__((packed)) PictureInfo {
    u8 unknown_0[0xe];  // (not used here)
    u8 byte_e;
};
GUEST_OFFSET(PictureInfo, byte_e, 0xe);


void PictureInfo__set_kind_e(gptr<PictureInfo> picture_info, u32 r1) {
    if (r1 == 0 || r1 == 1u) {
        picture_info->byte_e = u8(r1);
    }
}

}  // namespace d_005aa838
GUEST_EXPORT(0x005aa838, d_005aa838::PictureInfo__set_kind_e);

// f_005aa848: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears a picture record and its four 0x12-byte entries.
namespace d_005aa848 {

inline constexpr guest::Function<0x005a8af0, u32(u32, u32, u32, u32)> PhotoRecord__clear;
inline constexpr guest::Function<0x005afe90, u32(u32)> PictureEntry__clear;

void PictureRecord__clear(u32 picture_record) {
    u32 r5 = picture_record;
    PhotoRecord__clear(picture_record, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 i = 0u;
    do {
        PictureEntry__clear(r5 + i * 0x12u + 0x50u);
        i += 1u;
        guest::preempt();
    } while (s32(i) < 4);
}

}  // namespace d_005aa848
GUEST_EXPORT_FRAMED(0x005aa848, d_005aa848::PictureRecord__clear, 0x4070);  // pushes {i, r5, r6, lr} first, as the original

// f_005aa878: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The size plus a 4-byte header, rounded up to 4.
namespace d_005aa878 {


u32 header_aligned_size(u32 r0) {
    return r0 + 7u & ~3u;
}

}  // namespace d_005aa878
GUEST_EXPORT(0x005aa878, d_005aa878::header_aligned_size);

// f_005aa884: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Initializes a flag buffer when it is large enough: its 16-bit count and `count` cleared flag bytes.
namespace d_005aa884 {

struct __attribute__((packed)) BitFlags {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(BitFlags, word_0, 0x0);
GUEST_OFFSET(BitFlags, word_4, 0x4);

inline constexpr guest::Function<0x00301444, u32(u32, u32, u32, u32)> clear;

void BitFlags__init_buffer(gptr<BitFlags> bit_flags, u32 r1, u32 r2, u32 r3) {
    u32 i = bit_flags.addr();
    u32 zf_1 = r1 == 0;
    u32 r4 = r3;
    bit_flags->word_0 = r1;
    if (!zf_1) {
        zf_1 = r2 == 0;
    }
    u32 r5 = i;
    u32 r1_1 = r2;
    bit_flags->word_4 = r2;
    if (!zf_1 && (r4 + 7u & ~3u) <= r2) {
        clear(r1, r1_1, r2, r1);
        r1_1 = guest::cpu()->r[1];
        u32 r0_1 = bit_flags->word_0;
        r2 = 0u;
        *gptr<u32>(r0_1) = r2;
        *gptr<u16>(r0_1) = u16(r4);
        i = r2;
        if (s32(r4) > 0) {
            do {
                r1_1 = *gptr<u32>(r5) + 4u;
                *gptr<u8>(r1_1 + i) = u8(r2);
                i += 1u;
                guest::preempt();
            } while (s32(r4) > s32(i));
        }
    }
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_005aa884
GUEST_EXPORT_FRAMED(0x005aa884, d_005aa884::BitFlags__init_buffer, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005aa970: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a photo file reader for the pending picture: a file reader over the picture's buffer.
namespace d_005aa970 {

struct __attribute__((packed)) imgdb__PhotoFileReader {
    u32 vtable;
    u8 unknown_4[0x2c];  // (not used here)
    u32 word_30;
    u8 byte_34;
    u8 unknown_35[0x3];  // (not used here)
    u32 word_38;
    u8 byte_3c;
};
GUEST_OFFSET(imgdb__PhotoFileReader, vtable, 0x0);
GUEST_OFFSET(imgdb__PhotoFileReader, word_30, 0x30);
GUEST_OFFSET(imgdb__PhotoFileReader, byte_34, 0x34);
GUEST_OFFSET(imgdb__PhotoFileReader, word_38, 0x38);
GUEST_OFFSET(imgdb__PhotoFileReader, byte_3c, 0x3c);

inline constexpr u32 vtable_imgdb__PhotoFileReader_rec = 0x00907e1cu;
inline constexpr u32 vtable_imgdb__PhotoImageInfoReader = 0x00907e9cu;
inline constexpr u32 pending_photo_file_address = 0x009816a8u;
inline constexpr u32 pending_picture_address = 0x009816acu;
inline guest::global<u32, 0x009816ac> pending_picture;
inline constexpr guest::Function<0x005a3b10, u32(u32, u32, u32, u32)> imgdb__FileReader__FileReader_005a3b10;

void imgdb__PhotoFileReader__PhotoFileReader(gptr<imgdb__PhotoFileReader> photo_file_reader, u32 r1, u32 r2, u32 r3) {
    u32 r6_1 = *gptr<u32>(guest::cpu()->r[13] + 0x14u);
    imgdb__FileReader__FileReader_005a3b10(photo_file_reader.addr(), r1, *pending_picture, 0u);
    photo_file_reader->vtable = vtable_imgdb__PhotoFileReader_rec;
    photo_file_reader->word_30 = *pending_picture;
    photo_file_reader->vtable = vtable_imgdb__PhotoImageInfoReader;
    photo_file_reader->byte_34 = u8(r2);
    photo_file_reader->word_38 = r3;
    photo_file_reader->byte_3c = u8(r6_1);
    guest::cpu()->r[1] = vtable_imgdb__PhotoImageInfoReader;
}

}  // namespace d_005aa970
GUEST_EXPORT_FRAMED(0x005aa970, d_005aa970::imgdb__PhotoFileReader__PhotoFileReader, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_005aab04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a NAND archive mounter: not mounted.
namespace d_005aab04 {

inline constexpr u32 vtable_imgdb__CtrNandArchiveMounter = 0x00907eb4u;
inline constexpr u32 vtable_imgdb__CtrNandArchiveMounter_at_4 = 0x00907ed4u;

void imgdb__CtrNandArchiveMounter__CtrNandArchiveMounter(gptr<imgdb__CtrNandArchiveMounter> ctr_nand_archive_mounter) {
    ctr_nand_archive_mounter->byte_8 = 0;
    ctr_nand_archive_mounter->vtable = vtable_imgdb__CtrNandArchiveMounter;
    ctr_nand_archive_mounter->ctr_nand_archive_mounter_vtable = vtable_imgdb__CtrNandArchiveMounter_at_4;
}

}  // namespace d_005aab04
GUEST_EXPORT(0x005aab04, d_005aab04::imgdb__CtrNandArchiveMounter__CtrNandArchiveMounter);

// f_005aab40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Keeps a value at 0x9816b4 and marks it pending (0x9816aa).
namespace d_005aab40 {

inline guest::global<u8, 0x009816aa> global_009816aa;
inline guest::global<u32, 0x009816b4> global_009816b4;

void set_pending_9816b4(u32 r0) {
    *global_009816b4 = r0;
    *global_009816aa = 1;
}

}  // namespace d_005aab40
GUEST_EXPORT(0x005aab40, d_005aab40::set_pending_9816b4);

// f_005aab58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Keeps a value at 0x9816b0 and marks it pending (0x9816a9).
namespace d_005aab58 {

inline guest::global<u8, 0x009816a9> global_009816a9;
inline guest::global<u32, 0x009816b0> pending_picture_info;

void set_pending_picture_info(u32 r0) {
    *pending_picture_info = r0;
    *global_009816a9 = 1;
}

}  // namespace d_005aab58
GUEST_EXPORT(0x005aab58, d_005aab58::set_pending_picture_info);

// f_005aad34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a DSi NAND archive mounter: not mounted.
namespace d_005aad34 {

inline constexpr u32 vtable_imgdb__TwlNandArchiveMounter = 0x00907f0cu;
inline constexpr u32 vtable_imgdb__TwlNandArchiveMounter_at_4 = 0x00907f2cu;

void imgdb__TwlNandArchiveMounter__TwlNandArchiveMounter(gptr<imgdb__TwlNandArchiveMounter> twl_nand_archive_mounter) {
    twl_nand_archive_mounter->byte_8 = 0;
    twl_nand_archive_mounter->vtable = vtable_imgdb__TwlNandArchiveMounter;
    twl_nand_archive_mounter->twl_nand_archive_mounter_vtable = vtable_imgdb__TwlNandArchiveMounter_at_4;
}

}  // namespace d_005aad34
GUEST_EXPORT(0x005aad34, d_005aad34::imgdb__TwlNandArchiveMounter__TwlNandArchiveMounter);

// f_005aad7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds a wide photo path from its parts.
namespace d_005aad7c {

struct __attribute__((packed)) Local_005aad7c_r2_3 {
    u16 half_0;
    u16 half_2;
};
GUEST_OFFSET(Local_005aad7c_r2_3, half_0, 0x0);
GUEST_OFFSET(Local_005aad7c_r2_3, half_2, 0x2);

inline constexpr guest::Function<0x00100835, u32(u32, u32, u32, u32)> string16_length;

void PhotoPath__build_wide(u32 photo_path, u32 i, u32 r2, u32 r3) {
    u32 nf_1 = 0;
    u32 zf_1 = 0;
    u32 vf_1 = 0;
    u32 r4 = photo_path;
    u32 r6 = i;
    u32 r5 = r2;
    string16_length(r2, i, r2, r3);
    if (s32(r6) <= 0) {
        photo_path = 0u;
    } else {
        photo_path = r6 & 1u;
        i = 0u;
        if (s32(photo_path) > 0) {
            do {
                u32 r2_1 = gptr<u16>(r5)[i];
                if (r2_1 - 0x61u <= 0x19u) {
                    r2_1 -= 0x20u;
                }
                u32 r2_2 = sxtb(r2_1);
                *gptr<u8>(r4 + i) = u8(r2_2);
                if (r2_2 == 0) {
                    return;
                }
                i += 1u;
                guest::preempt();
            } while (s32(photo_path) > s32(i));
        }
    }
    if (s32(photo_path) < s32(r6)) {
        do {
            gptr<Local_005aad7c_r2_3> r2_3 = gptr<Local_005aad7c_r2_3>(r5 + (photo_path << 1));
            u32 r1_1 = r2_3->half_0;
            if (r1_1 - 0x61u <= 0x19u) {
                r1_1 -= 0x20u;
            }
            u32 r1_2 = sxtb(r1_1);
            *gptr<u8>(r4 + photo_path) = u8(r1_2);
            if (r1_2 == 0) {
                break;
            }
            u32 r1_3 = r2_3->half_2;
            if (r1_3 - 0x61u <= 0x19u) {
                r1_3 -= 0x20u;
            }
            u32 r2_4 = r4 + photo_path;
            u32 r1_4 = sxtb(r1_3);
            nf_1 = r1_4 >> 0x1f;
            zf_1 = r1_4 == 0;
            vf_1 = (r1_4 & (r1_4 ^ r1_4)) >> 0x1f;
            if (!zf_1) {
                photo_path += 2u;
                u32 res_1 = r6 - photo_path;
                nf_1 = res_1 >> 0x1f;
                zf_1 = res_1 == 0;
                vf_1 = ((r6 ^ photo_path) & (r6 ^ res_1)) >> 0x1f;
            }
            *gptr<u8>(r2_4 + 1u) = u8(r1_4);
            guest::preempt();
        } while (!zf_1 && nf_1 == vf_1);
    }
}

}  // namespace d_005aad7c
GUEST_EXPORT_FRAMED(0x005aad7c, d_005aad7c::PhotoPath__build_wide, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005ab1fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Reads a photo file's header (extension 1 or 2) into the record; true when it worked.
namespace d_005ab1fc {

struct __attribute__((packed)) PictureInfo {
    u8 byte_0;
};
GUEST_OFFSET(PictureInfo, byte_0, 0x0);

inline constexpr guest::Function<0x001416b0, u32(u32)> return_constant_0x97e098_;
inline constexpr guest::Function<0x005aac5c, u32(u32, u32, u32, u32)> imgdb__PhotoHeaderFileReader__destructor;
inline constexpr guest::Function<0x005aae3c, u32(u32, u32, u32, u32)> PhotoFile__decode_mpo;
inline constexpr guest::Function<0x005ab01c, u32(u32, u32, u32, u32)> PhotoFile__decode_jpeg;
inline constexpr guest::Function<0x005ab334, u32(u32)> imgdb__PhotoHeaderFileReader__read;
inline constexpr guest::Function<0x005ab388, u32(u32, u32, u32, u32)> imgdb__PhotoHeaderFileReader__PhotoHeaderFileReader;
inline constexpr guest::Function<0x00753cbc, u32(u32, u32, u32)> word_20_and_24;
inline constexpr guest::Function<0x007553d8, u32(u32, u32, u32, u32)> extension_index;

struct __attribute__((packed)) PictureInfoReadFromFileFrame {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x14];  // (not read or written by name)
    u32 word_1c;
    u32 word_20;
    u8 unknown_24[0x24];  // (not read or written by name)
};
GUEST_OFFSET(PictureInfoReadFromFileFrame, word_0, 0x0);
GUEST_OFFSET(PictureInfoReadFromFileFrame, word_4, 0x4);
GUEST_OFFSET(PictureInfoReadFromFileFrame, word_1c, 0x1c);
GUEST_OFFSET(PictureInfoReadFromFileFrame, word_20, 0x20);
GUEST_SIZE(PictureInfoReadFromFileFrame, 0x48);

u32 PictureInfo__read_from_file(gptr<PictureInfo> picture_info, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<PictureInfoReadFromFileFrame> frame;  // the original's stack frame
    u32 r0 = picture_info.addr();
    u32 r4 = 0;
    u32 r0_9 = 0;
    picture_info->byte_0 = 0;
    u32 extension_3 = extension_index(r2, r1, r2, r3);
    if (extension_3 == 3u) {
    } else {
        u32 r0_2 = return_constant_0x97e098_(extension_3);
        frame->word_0 = r3;
        imgdb__PhotoHeaderFileReader__PhotoHeaderFileReader(frame.at(8).addr(), r0_2, r1, r2);
        if (imgdb__PhotoHeaderFileReader__read(frame.at(8).addr()) == 0) {
            u32 extension_4 = extension_index(r2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            r2 = guest::cpu()->r[2];
            u32 r7_1 = frame->word_1c;
            u32 r6_1 = frame->word_20;
            u32 r0_8 = word_20_and_24(frame.at(8).addr(), guest::cpu()->r[1], r2);
            r1 = guest::cpu()->r[1];
            r3 = guest::cpu()->r[3];
            picture_info->byte_0 = 0;
            if (extension_4 == 1u) {
                frame->word_0 = r0_8;
                frame->word_4 = r1;
                r2 = r6_1;
                r0_9 = PhotoFile__decode_jpeg(r0, r7_1, r2, r3);
                r1 = guest::cpu()->r[1];
                r3 = guest::cpu()->r[3];
                r4 = r0_9;
                goto L_5ab2b4;
            }
            if (extension_4 == 2u) {
                frame->word_0 = r0_8;
                frame->word_4 = r1;
                r2 = r6_1;
                r0_9 = PhotoFile__decode_mpo(r0, r7_1, r2, r3);
                r1 = guest::cpu()->r[1];
                r3 = guest::cpu()->r[3];
                r4 = r0_9;
                goto L_5ab2b4;
            } else {
                r4 = 0u;
            }
            goto L_5ab2b4;
        }
        imgdb__PhotoHeaderFileReader__destructor(frame.at(8).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    return 0u;
L_5ab2b4:;
    imgdb__PhotoHeaderFileReader__destructor(frame.at(8).addr(), r1, r2, r3);
    return r4;
}

}  // namespace d_005ab1fc
GUEST_EXPORT_FRAMED(0x005ab1fc, d_005ab1fc::PictureInfo__read_from_file, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_005ab304: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears a photo file record and its time.
namespace d_005ab304 {

struct __attribute__((packed)) PhotoFile {
    u8 byte_0;
    u8 unknown_1[0xf];  // (not used here)
    u32 word_10;
    u32 word_14;
    u8 byte_18;
};
GUEST_OFFSET(PhotoFile, byte_0, 0x0);
GUEST_OFFSET(PhotoFile, word_10, 0x10);
GUEST_OFFSET(PhotoFile, word_14, 0x14);
GUEST_OFFSET(PhotoFile, byte_18, 0x18);

inline constexpr guest::Function<0x005a8b14, u32(u32)> clear_word_pair_005a8b14;

void PhotoFile__clear(gptr<PhotoFile> photo_file) {
    photo_file->byte_0 = 0;
    photo_file->byte_18 = 0;
    photo_file->word_10 = 0;
    photo_file->word_14 = 0;
    clear_word_pair_005a8b14(photo_file.addr() + 8u);
}

}  // namespace d_005ab304
GUEST_EXPORT_FRAMED(0x005ab304, d_005ab304::PhotoFile__clear, 0x4010);  // pushes {r4, lr} first, as the original

// f_005ab334: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds the file's path and reads its header through the reader; the reader's result.
namespace d_005ab334 {

struct __attribute__((packed)) PhotoHeaderFileReader {
    u8 unknown_0[0x28];  // (not used here)
    u8 byte_28;
    u8 unknown_29[0xb];  // (not used here)
    u8 byte_34;
    u8 unknown_35[0x3];  // (not used here)
    u32 word_38;
    u8 byte_3c;
};
GUEST_OFFSET(PhotoHeaderFileReader, byte_28, 0x28);
GUEST_OFFSET(PhotoHeaderFileReader, byte_34, 0x34);
GUEST_OFFSET(PhotoHeaderFileReader, word_38, 0x38);
GUEST_OFFSET(PhotoHeaderFileReader, byte_3c, 0x3c);

inline constexpr guest::Function<0x005a37c4, u32(u32, u32, u32, u32)> imgdb__FileReader__virtual_3;
inline constexpr guest::Function<0x005ac5dc, u32(u32, u32, u32, u32)> PhotoPath__build_from_record;

struct __attribute__((packed)) ImgdbPhotoHeaderFileReaderReadFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x60];  // (not read or written by name)
};
GUEST_OFFSET(ImgdbPhotoHeaderFileReaderReadFrame, word_0, 0x0);
GUEST_OFFSET(ImgdbPhotoHeaderFileReaderReadFrame, word_4, 0x4);
GUEST_OFFSET(ImgdbPhotoHeaderFileReaderReadFrame, word_8, 0x8);
GUEST_SIZE(ImgdbPhotoHeaderFileReaderReadFrame, 0x6c);

u32 imgdb__PhotoHeaderFileReader__read(gptr<PhotoHeaderFileReader> photo_header_file_reader) {
    guest::StackFrameOf<ImgdbPhotoHeaderFileReaderReadFrame> frame;  // the original's stack frame
    frame->word_0 = u32(s8(photo_header_file_reader->byte_3c));
    u32 r3_1 = photo_header_file_reader->word_38;
    u32 r2_1 = photo_header_file_reader->byte_34;
    PhotoPath__build_from_record(frame.at(0x10).addr(), 0x2cu, r2_1, r3_1);
    u32 r1_1 = photo_header_file_reader->byte_34;
    frame->word_0 = 0;
    frame->word_4 = 0;
    frame->word_8 = 0;
    imgdb__FileReader__virtual_3(photo_header_file_reader.addr(), r1_1, frame.at(0x10).addr(), 0u);
    return s8(photo_header_file_reader->byte_28);
}

}  // namespace d_005ab334
GUEST_EXPORT_FRAMED(0x005ab334, d_005ab334::imgdb__PhotoHeaderFileReader__read, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_005ab388: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a photo header file reader for the pending picture info: a 0x20000-byte file reader.
namespace d_005ab388 {

inline constexpr u32 vtable_imgdb__PhotoHeaderFileReader = 0x00907ef4u;
inline constexpr u32 vtable_imgdb__PhotoHeaderImageInfoReader = 0x00907f4cu;
inline guest::global<u32, 0x009816b0> pending_picture_info;
inline constexpr guest::Function<0x005a3b10, u32(u32, u32, u32, u32)> imgdb__FileReader__FileReader_005a3b10;

void imgdb__PhotoHeaderFileReader__PhotoHeaderFileReader(gptr<imgdb__PhotoHeaderImageInfoReader> photo_header_image_info_reader, u32 r1, u32 r2, u32 r3) {
    u32 r6_1 = *gptr<u32>(guest::cpu()->r[13] + 0x10u);
    imgdb__FileReader__FileReader_005a3b10(photo_header_image_info_reader.addr(), r1, 0x20000u, 1u);
    photo_header_image_info_reader->vtable = vtable_imgdb__PhotoHeaderFileReader;
    photo_header_image_info_reader->word_30 = *pending_picture_info;
    photo_header_image_info_reader->vtable = vtable_imgdb__PhotoHeaderImageInfoReader;
    photo_header_image_info_reader->byte_34 = u8(r2);
    photo_header_image_info_reader->word_38 = r3;
    photo_header_image_info_reader->byte_3c = u8(r6_1);
    guest::cpu()->r[1] = vtable_imgdb__PhotoHeaderImageInfoReader;
}

}  // namespace d_005ab388
GUEST_EXPORT_FRAMED(0x005ab388, d_005ab388::imgdb__PhotoHeaderFileReader__PhotoHeaderFileReader, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005ab498: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls virtual 3 of the photo storage object (0x982128).
namespace d_005ab498 {

inline constexpr u32 photo_storage_address = 0x00982128u;
inline guest::global<u32, 0x00982128> photo_storage;

void photo_storage_virtual_3() {
    u32 r0_1 = *photo_storage;
    u32 r1_1 = *gptr<u32>(*gptr<u32>(r0_1) + 0xcu);
    // virtual function 3 of r0_1
    guest::call_address<u32>(r1_1, r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005ab498
GUEST_EXPORT(0x005ab498, d_005ab498::photo_storage_virtual_3);

// f_005ab4b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls virtual 2 of the photo storage object (0x982128).
namespace d_005ab4b0 {

inline constexpr u32 photo_storage_address = 0x00982128u;
inline guest::global<u32, 0x00982128> photo_storage;

u32 photo_storage_virtual_2() {
    u32 r0_1 = *photo_storage;
    u32 r1_1 = *gptr<u32>(*gptr<u32>(r0_1) + 8u);
    // virtual function 2 of r0_1
    return guest::call_address<u32>(r1_1, r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005ab4b0
GUEST_EXPORT(0x005ab4b0, d_005ab4b0::photo_storage_virtual_2);

// f_005ab4c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Maps a file-system result to a photo error: 0 for success or not-found codes, 8, 9 or 0xe for media errors, 5
// otherwise.
namespace d_005ab4c8 {

inline constexpr guest::Function<0x001289c4, u32(u32)> Fs__unmount;
inline constexpr guest::Function<0x0012ee90, u32(u32, u32, u32, u32)> required_object_974f20;
inline constexpr guest::Function<0x005aead8, u32(u32, u32)> check_fs_result;

u32 fs_result_to_photo_error(u32 r0, u32 r1, u32 r2) {
    required_object_974f20(r0, r1, r2, guest::cpu()->r[3]);
    u32 r0_1 = Fs__unmount(r1);
    u32 r1_2 = guest::cpu()->r[1];
    if (s32(r0_1) < 0) {
        if (r0 == 0) {
            check_fs_result(r0_1, r1_2);
            r1_2 = guest::cpu()->r[1];
        }
        u32 r0_2 = (r0_1 & 0x3fc00u) >> 0xa;
        if (r0_2 == 0x11u) {
            r1_2 = r0_1 & 0x3ffu;
            if (s32(r1_2) >= 0x104 && s32(r1_2) < 0x118) {
                guest::cpu()->r[1] = r1_2;
                return 9u;
            }
        }
        if (r0_2 == 0x11u) {
            r1_2 = r0_1 & 0x3ffu;
            if (s32(r1_2) >= 0x82 && s32(r1_2) <= 0xb3) {
                guest::cpu()->r[1] = r1_2;
                return 8u;
            }
        }
        if (r0_2 == 0x11u) {
            r1_2 = r0_1 & 0x3ffu;
            if (s32(r1_2) >= 0x118 && s32(r1_2) <= s32(0x14eu)) {
                guest::cpu()->r[1] = r1_2;
                return 0xeu;
            }
        }
        if (r0_2 == 0x11u) {
            u32 r0_4 = r0_1 & 0x3ffu;
            if (s32(r0_4) >= 0x64 && s32(r0_4) <= 0xb3) {
                guest::cpu()->r[1] = r1_2;
                return 0u;
            }
        }
        guest::cpu()->r[1] = r1_2;
        return 5u;
    }
    guest::cpu()->r[1] = r1_2;
    return 0u;
}

}  // namespace d_005ab4c8
GUEST_EXPORT_FRAMED(0x005ab4c8, d_005ab4c8::fs_result_to_photo_error, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005ab5a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether a directory (path arg 1) opens; reports the error unless asked not to (arg 0).
namespace d_005ab5a4 {

inline constexpr u32 vtable_nn__fs__Directory = 0x008faf20u;
inline constexpr guest::Function<0x00347454, u32(u32)> call_virtual_1_if_present_00347454;
inline constexpr guest::Function<0x0034748c, u32(u32, u32, u32, u32)> Fs__open_archive_file;
inline constexpr guest::Function<0x005aead8, u32(u32)> check_fs_result;

struct __attribute__((packed)) DirectoryExistsFrame {
    u32 object_0_vtable;
    u32 word_4;
};
GUEST_OFFSET(DirectoryExistsFrame, object_0_vtable, 0x0);
GUEST_OFFSET(DirectoryExistsFrame, word_4, 0x4);
GUEST_SIZE(DirectoryExistsFrame, 0x8);

u32 directory_exists(u32 directory) {
    guest::StackFrameOf<DirectoryExistsFrame> frame;  // the original's stack frame
    frame->object_0_vtable = vtable_nn__fs__Directory;
    frame->word_4 = 0;
    u32 r0_2 = Fs__open_archive_file(frame.at(4).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (s32(r0_2) >= 0) {
        call_virtual_1_if_present_00347454(frame->word_4);
        frame->word_4 = 0;
    } else if (directory == 0) {
        check_fs_result(r0_2);
    }
    call_virtual_1_if_present_00347454(frame->word_4);
    return u32(s32(r0_2) >> 0x1f) + 1u;
}

}  // namespace d_005ab5a4
GUEST_EXPORT_FRAMED(0x005ab5a4, d_005ab5a4::directory_exists, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005abb6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The value of 003506c8 for 0x204, read once (0x97e0e0).
namespace d_005abb6c {

inline constexpr u32 cached_value_204_b_address = 0x0097e0dcu;
inline constexpr u32 cached_value_204_address = 0x0097e0e0u;
inline guest::global<u8, 0x0097e0dc> cached_value_204_b;
inline guest::global<u32, 0x0097e0e0> cached_value_204;
inline constexpr guest::Function<0x003506c8, u32(u32, u32, u32, u32)> Boss__get_value;

u32 cached_value_0x204() {
    u32 r1 = 0;
    if (*cached_value_204_b != 0) {
        return *cached_value_204;
    }
    u32 value = Boss__get_value(0x204u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *cached_value_204 = value;
    *cached_value_204_b = 1;
    return *cached_value_204;
}

}  // namespace d_005abb6c
GUEST_EXPORT_FRAMED(0x005abb6c, d_005abb6c::cached_value_0x204, 0x4010);  // pushes {r4, lr} first, as the original

// f_005ac04c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls 005abba0 with the bit 1 << `index` as its last argument.
namespace d_005ac04c {

inline constexpr guest::Function<0x005abba0, u32(u32, u32, u32, u32)> PhotoDatabase__set_flags;

struct __attribute__((packed)) Call5abba0WithBitFrame {
    u32 word_0;
};
GUEST_OFFSET(Call5abba0WithBitFrame, word_0, 0x0);
GUEST_SIZE(Call5abba0WithBitFrame, 0x4);

void call_5abba0_with_bit(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Call5abba0WithBitFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    frame->word_0 = *frame.at<u32>(8);
    PhotoDatabase__set_flags(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], lsl_r(1u, r3 & 0xff) & 0xffu);
}

}  // namespace d_005ac04c
GUEST_EXPORT_FRAMED(0x005ac04c, d_005ac04c::call_5abba0_with_bit, 0x4000);  // pushes {lr} first, as the original

// f_005ac2b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Writes a photo file through 005af3e0 with option 1.
namespace d_005ac2b0 {

inline constexpr guest::Function<0x005af3e0, u32(u32, u32, u32, u32)> write_photo_file;

void write_photo_file_1(u32 r0_unused, u32 r1_unused, u32 r2) {
    write_photo_file(guest::cpu()->r[0], guest::cpu()->r[1], 1u, r2);
}

}  // namespace d_005ac2b0
GUEST_EXPORT(0x005ac2b0, d_005ac2b0::write_photo_file_1);

// f_005ac4f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds the full wide path of a photo: drive, folder (number + 100 and the folder suffix), file (prefix and number +
// 1) and extension.
namespace d_005ac4f4 {

struct __attribute__((packed)) Local_005ac4f4_r8_1 {
    u16 half_0;
    u16 half_2;
};
GUEST_OFFSET(Local_005ac4f4_r8_1, half_0, 0x0);
GUEST_OFFSET(Local_005ac4f4_r8_1, half_2, 0x2);

inline constexpr u32 photo_folder_format_address = 0x00981680u;
inline constexpr u32 photo_folder_prefix_address = 0x00981688u;
inline constexpr u32 photo_file_number_address = 0x00981690u;
inline constexpr u32 photo_extensions_address = 0x00981698u;
inline guest::global<u32, 0x00981690> photo_file_number;
inline constexpr guest::Function<0x00100f69, u32(u32, u32, u32, u32)> swprintf;
inline constexpr guest::Function<0x001017e5, u32(u32, u32, u32, u32)> copy_wide_string;
inline constexpr guest::Function<0x005ae51c, u32(u32, u32, u32, u32)> copy_table_wide_string;

struct __attribute__((packed)) PhotoPathBuildFullFrame {
    u32 word_0;
};
GUEST_OFFSET(PhotoPathBuildFullFrame, word_0, 0x0);
GUEST_SIZE(PhotoPathBuildFullFrame, 0x4);

void PhotoPath__build_full(u32 photo_path, u32 r1, u32 picture_db, u32 r3) {
    guest::StackFrameOf<PhotoPathBuildFullFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r6_1 = *frame.at<u32>(0x24);
    gptr<Local_005ac4f4_r8_1> r8_1 = gptr<Local_005ac4f4_r8_1>(*frame.at<u32>(0x20));
    u32 r0_1 = copy_table_wide_string(photo_path, r1, picture_db, r6_1);
    copy_wide_string(photo_path + (r0_1 << 1), 0x8b3710u, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r3_2 = u32(r8_1->half_0) + 0x64u;
    frame->word_0 = *gptr<u32>(r6_1 == 0 ? photo_folder_format_address : photo_folder_prefix_address);
    u32 r4_2 = r0_1 + 1u + swprintf(photo_path + (r0_1 + 1u << 1), r1 - (r0_1 + 1u), 0x8b3700u, r3_2);
    copy_wide_string(photo_path + (r4_2 << 1), 0x5ac5c8u, guest::cpu()->r[2], guest::cpu()->r[3]);
    frame->word_0 = u32(r8_1->half_2) + 1u;
    u32 r6_2 = photo_path + (r4_2 + 1u << 1);
    u32 r3_4 = *photo_file_number;
    u32 r0_6 = swprintf(r6_2, r1 - (r4_2 + 1u), 0x8b36f0u, r3_4);
    copy_wide_string(r6_2 + (r0_6 << 1), gptr<u32>(photo_extensions_address)[r3], 0x8b36f0u, r3_4);
}

}  // namespace d_005ac4f4
GUEST_EXPORT_FRAMED(0x005ac4f4, d_005ac4f4::PhotoPath__build_full, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_005ac5dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds the full wide path of a photo from its record (drive, folder, file name and extension); the length.
namespace d_005ac5dc {

inline constexpr guest::Function<0x001017e5, u32(u32, u32)> copy_wide_string;
inline constexpr guest::Function<0x005ae51c, u32(u32, u32, u32, u32)> copy_table_wide_string;
inline constexpr guest::Function<0x00755330, u32(u32, u32)> PhotoPath__file_name_wide;
inline constexpr guest::Function<0x00755504, u32(u32, u32)> PhotoPath__folder_name_wide;
inline constexpr guest::Function<0x007555cc, u32(u32, u32)> PhotoPath__extension_wide;

u32 PhotoPath__build_from_record(u32 photo_path, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = copy_table_wide_string(photo_path, r1, r2, *gptr<u32>(guest::cpu()->r[13] + 0x20u));
    copy_wide_string(photo_path + (r0_1 << 1), 0x8b3710u);
    u32 r4_2 = r0_1 + 1u + PhotoPath__folder_name_wide(r3, photo_path + (r0_1 + 1u << 1));
    copy_wide_string(photo_path + (r4_2 << 1), 0x5ac678u);
    u32 r6_1 = photo_path + (r4_2 + 1u << 1);
    u32 r7_1 = r1 - (r4_2 + 1u);
    u32 r0_5 = PhotoPath__file_name_wide(r3, r6_1);
    *gptr<u16>(r6_1 + (r0_5 << 1)) = 0x2e;
    return PhotoPath__extension_wide(r3, r6_1 + (r0_5 + 1u << 1)) + (r0_5 + 1u) + (r4_2 + 1u);
}

}  // namespace d_005ac5dc
GUEST_EXPORT_FRAMED(0x005ac5dc, d_005ac5dc::PhotoPath__build_from_record, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_005acca4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Formats a photo file name: the prefix and the number + 1 on four digits.
namespace d_005acca4 {

struct __attribute__((packed)) PhotoPathFormatFileNameArg2 {
    u8 unknown_0[0x2];  // (not used here)
    u16 half_2;
};
GUEST_OFFSET(PhotoPathFormatFileNameArg2, half_2, 0x2);

inline constexpr u32 photo_file_number_address = 0x00981690u;
inline guest::global<u32, 0x00981690> photo_file_number;
inline constexpr guest::Function<0x00100f69, u32(u32, u32, u32, u32)> swprintf;

struct __attribute__((packed)) PhotoPathFormatFileNameFrame {
    u32 word_0;
};
GUEST_OFFSET(PhotoPathFormatFileNameFrame, word_0, 0x0);
GUEST_SIZE(PhotoPathFormatFileNameFrame, 0x4);

void PhotoPath__format_file_name(u32 r0_unused, u32 r1_unused, gptr<PhotoPathFormatFileNameArg2> arg2, u32 r3) {
    guest::StackFrameOf<PhotoPathFormatFileNameFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    frame->word_0 = u32(arg2->half_2) + 1u;
    swprintf(guest::cpu()->r[0], guest::cpu()->r[1], 0x8b36f0u, *photo_file_number);
}

}  // namespace d_005acca4
GUEST_EXPORT_FRAMED(0x005acca4, d_005acca4::PhotoPath__format_file_name, 0x4000);  // pushes {lr} first, as the original

// f_005accd0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The photo root path for storage `which` (0 or 1), built once from the drive and the folder name; the empty path for
// others.
namespace d_005accd0 {

inline constexpr u32 photo_root_a_address = 0x0097e0a0u;
inline constexpr u32 photo_root_b_address = 0x0097e0b8u;
inline constexpr u32 photo_root_path_a_address = 0x00981620u;
inline constexpr u32 photo_root_path_b_address = 0x00981628u;
inline constexpr u32 photo_root_path_0_address = 0x00aedff2u;
inline constexpr u32 photo_root_path_1_address = 0x00aee008u;
inline constexpr u32 photo_root_path_2_address = 0x00aee296u;
inline constexpr u32 photo_root_path_3_address = 0x00aee2f2u;
inline guest::global<u32, 0x0097e0a0> photo_root_a;
inline guest::global<u32, 0x0097e0b8> photo_root_b;
inline guest::global<u8, 0x0097e0e5> photo_root_path_ready_a;
inline guest::global<u8, 0x0097e0e6> photo_root_path_ready_b;
inline guest::global<u8, 0x0097e0ed> photo_root_path_set;
inline guest::global<u32, 0x00981620> photo_root_path_a;
inline guest::global<u32, 0x00981628> photo_root_path_b;
inline constexpr guest::Function<0x001017e5, u32(u32, u32)> copy_wide_string;
inline constexpr guest::Function<0x00101831, u32(u32, u32)> append_wide_string;
inline constexpr guest::Function<0x005ace98, u32(u32)> photo_root_length_1;
inline constexpr guest::Function<0x005add7c, u32(u32)> photo_root_length_0;

u32 photo_root_path(u32 r0) {
    if (*photo_root_path_set == 0) {
        if (*photo_root_path_ready_a == 0) {
            copy_wide_string(photo_root_path_0_address, *photo_root_b);
            append_wide_string(photo_root_path_0_address, 0x8b36e8u);
            *photo_root_path_ready_a = 1;
        }
        u32 r0_2 = photo_root_length_0(copy_wide_string(photo_root_path_2_address, photo_root_path_0_address));
        copy_wide_string((r0_2 << 1) + photo_root_path_2_address, *photo_root_path_a);
        if (*photo_root_path_ready_b == 0) {
            copy_wide_string(photo_root_path_1_address, *photo_root_a);
            append_wide_string(photo_root_path_1_address, 0x8b36e8u);
            *photo_root_path_ready_b = 1;
        }
        u32 r0_5 = photo_root_length_1(copy_wide_string(photo_root_path_3_address, photo_root_path_1_address));
        copy_wide_string((r0_5 << 1) + photo_root_path_3_address, *photo_root_path_b);
        *photo_root_path_set = 1;
    }
    return r0 == 0 ? photo_root_path_2_address : r0 == 1u ? photo_root_path_3_address : 0x8b3714u;
}

}  // namespace d_005accd0
GUEST_EXPORT_FRAMED(0x005accd0, d_005accd0::photo_root_path, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005acde8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The path of the photo database file for storage `which` (0 or 1), built once; the empty path for others.
namespace d_005acde8 {

inline constexpr u32 photo_database_path_pointer_address = 0x00981678u;
inline constexpr u32 photo_database_path_0_address = 0x00aee10au;
inline constexpr u32 photo_database_path_1_address = 0x00aee180u;
inline guest::global<u8, 0x0097e0eb> photo_database_path_set;
inline guest::global<u32, 0x00981678> photo_database_path_pointer;
inline constexpr guest::Function<0x001017e5, u32(u32, u32)> copy_wide_string;
inline constexpr guest::Function<0x00101831, u32(u32, u32)> append_wide_string;
inline constexpr guest::Function<0x005accd0, u32(u32)> photo_root_path;

u32 photo_database_path(u32 r0, u32 r1) {
    if (*photo_database_path_set == 0) {
        copy_wide_string(photo_database_path_0_address, photo_root_path(0u));
        append_wide_string(photo_database_path_0_address, 0x5ace88u);
        append_wide_string(photo_database_path_0_address, *photo_database_path_pointer);
        copy_wide_string(photo_database_path_1_address, photo_root_path(1u));
        append_wide_string(photo_database_path_1_address, 0x5ace88u);
        append_wide_string(photo_database_path_1_address, *photo_database_path_pointer);
        r1 = guest::cpu()->r[1];
        *photo_database_path_set = 1;
    }
    guest::cpu()->r[1] = r1;
    return r0 == 0 ? photo_database_path_0_address : r0 == 1u ? photo_database_path_1_address : 0x5ace94u;
}

}  // namespace d_005acde8
GUEST_EXPORT_FRAMED(0x005acde8, d_005acde8::photo_database_path, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005ace98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The length of the photo root path of storage 1, computed once.
namespace d_005ace98 {

inline constexpr u32 photo_root_a_address = 0x0097e0a0u;
inline constexpr u32 photo_drive_length_cache_address = 0x0097e0e4u;
inline constexpr u32 photo_root_length_1_value_address = 0x0097e0f8u;
inline constexpr u32 photo_root_path_1_address = 0x00aee008u;
inline guest::global<u32, 0x0097e0a0> photo_root_a;
inline guest::global<u8, 0x0097e0e6> photo_root_path_ready_b;
inline guest::global<u8, 0x0097e0e9> photo_root_length_1_set;
inline guest::global<u32, 0x0097e0f8> photo_root_length_1_value;
inline constexpr guest::Function<0x00100835, u32(u32, u32)> string16_length;
inline constexpr guest::Function<0x001017e5, u32(u32, u32)> copy_wide_string;
inline constexpr guest::Function<0x00101831, u32(u32, u32)> append_wide_string;

u32 photo_root_length_1(u32 r0_unused, u32 r1) {
    if (*photo_root_length_1_set == 0) {
        if (*photo_root_path_ready_b == 0) {
            copy_wide_string(photo_root_path_1_address, *photo_root_a);
            append_wide_string(photo_root_path_1_address, 0x8b36e8u);
            r1 = guest::cpu()->r[1];
            *photo_root_path_ready_b = 1;
        }
        u32 r0_1 = string16_length(photo_root_path_1_address, r1);
        r1 = guest::cpu()->r[1];
        *photo_root_length_1_value = r0_1;
        *photo_root_length_1_set = 1;
    }
    u32 r0_2 = *photo_root_length_1_value;
    guest::cpu()->r[1] = r1;
    return r0_2;
}

}  // namespace d_005ace98
GUEST_EXPORT_FRAMED(0x005ace98, d_005ace98::photo_root_length_1, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005acf04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Scans the next photo folder or file under the cursor, building their paths.
namespace d_005acf04 {

inline constexpr guest::Function<0x001416b0, u32(u32)> return_constant_0x97e098_;
inline constexpr guest::Function<0x005ab5a4, u32(u32, u32)> directory_exists;
inline constexpr guest::Function<0x005ad6d8, u32(u32, u32, u32, u32)> PhotoPath__build_folder_from_number;
inline constexpr guest::Function<0x005adb08, u32(u32, u32, u32)> PhotoDatabase__open_file;
inline constexpr guest::Function<0x005add4c, u32(u32, u32)> PhotoName__parse_2;
inline constexpr guest::Function<0x005ae51c, u32(u32, u32, u32, u32)> copy_table_wide_string;
inline constexpr guest::Function<0x005aff24, u32(u32, u32, u32, u32)> DirCursor__next;
inline constexpr guest::Function<0x005affd8, u32(u32, u32, u32, u32)> nn__fs__Directory__Directory_005affd8;
inline constexpr guest::Function<0x005b00a8, u32(u32, u32, u32, u32)> Handle__release_2;
inline constexpr guest::Function<0x0075523c, u32(u32, u32, u32, u32)> Cursor__current_is_marked;
inline constexpr guest::Function<0x007552e8, u32(u32, u32)> Cursor__current;

struct __attribute__((packed)) PhotoDirScanNextFrame {
    u32 word_0;
    u8 unknown_4[0x8];  // (not read or written by name)
    u8 byte_c;
    u8 unknown_d[0x4f];  // (not read or written by name)
};
GUEST_OFFSET(PhotoDirScanNextFrame, word_0, 0x0);
GUEST_OFFSET(PhotoDirScanNextFrame, byte_c, 0xc);
GUEST_SIZE(PhotoDirScanNextFrame, 0x5c);

u32 PhotoDir__scan_next(u32 photo_dir, u32 r1, u32 r2) {
    guest::StackFrameOf<PhotoDirScanNextFrame> frame;  // the original's stack frame
    u32 r3 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r3_3 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r1_3 = 0;
    u32 cursor = 0;
    u32 r0_12 = 0;
    u32 r1_4 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 dir_cursor = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r4 = r1;
    u32 r5 = r2;
    frame->word_0 = r2;
    u32 directory = photo_dir;
    u32 r7 = 0x1eu;
    PhotoPath__build_folder_from_number(frame.at(4).addr(), r7, photo_dir, r4);
    u32 exists = directory_exists(directory, frame.at(4).addr());
    if (exists != 0) {
        goto L_5ad010;
    }
    r0_3 = frame.at(0x30).addr();
    r0_4 = copy_table_wide_string(r0_3, 0x15u, directory, r5);
    r0_5 = return_constant_0x97e098_(r0_4);
    frame->word_0 = 0x3e8;
    r3_3 = frame.at(0x30).addr();
    r0_6 = frame.at(8).addr();
    nn__fs__Directory__Directory_005affd8(r0_6, r0_5, directory, r3_3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (frame->byte_c == 0) {
        goto L_5ad008;
    }
    r0_7 = frame.at(8).addr();
    r0_8 = DirCursor__next(r0_7, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_8 == 0) {
        goto L_5ad008;
    }
L_5acf98:;
    r0_9 = frame.at(8).addr();
    r0_10 = Cursor__current_is_marked(r0_9, r1, r2, r3);
    r1_3 = guest::cpu()->r[1];
    if (r0_10 == 0) {
        goto L_5acff4;
    }
    cursor = frame.at(8).addr();
    r0_12 = Cursor__current(cursor, r1_3);
    r1_4 = frame.at(0).addr();
    r0_13 = PhotoName__parse_2(r0_12, r1_4);
    r1_3 = guest::cpu()->r[1];
    if (r0_13 == 0) {
        goto L_5acff4;
    }
    r1_3 = frame->word_0;
    if (u32(*gptr<u16>(r4)) + 0x64u != r1_3) {
        goto L_5acff4;
    }
    r0_14 = frame.at(8).addr();
    Handle__release_2(r0_14, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    return 0u;
L_5acff4:;
    dir_cursor = frame.at(8).addr();
    r0_16 = DirCursor__next(dir_cursor, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_16 != 0) {
        guest::preempt();
        goto L_5acf98;
    }
L_5ad008:;
    r0_17 = frame.at(8).addr();
    Handle__release_2(r0_17, r1, r2, r3);
L_5ad010:;
    frame->word_0 = r5;
    PhotoPath__build_folder_from_number(frame.at(4).addr(), r7, directory, r4);
    u32 exists_2 = directory_exists(directory, frame.at(4).addr());
    if (exists_2 != 0) {
        photo_dir = PhotoDatabase__open_file(directory, r4, r5);
        if (photo_dir == 0) {
            return photo_dir;
        }
    }
    return 1u;
}

}  // namespace d_005acf04
GUEST_EXPORT_FRAMED(0x005acf04, d_005acf04::PhotoDir__scan_next, 0x40f0);  // pushes {r4, r5, directory, r7, lr} first, as the original

// f_005ad068: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls 005ad0b4 with the current time.
namespace d_005ad068 {

struct __attribute__((packed)) Local_005ad068_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005ad068_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_005ad068_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_005ad068_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005ad068_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_005ad068_ea_3, word_4, 0x4);

inline constexpr guest::Function<0x005a8da4, u32(u32, u32, u32, u32)> Stamp__now;
inline constexpr guest::Function<0x005ad0b4, u32(u32, u32, u32, u32)> PhotoDatabase__read_file;

struct __attribute__((packed)) Call005ad0b4NowFrame {
    u32 word_0;
    u8 unknown_4[0x18];  // (not read or written by name)
};
GUEST_OFFSET(Call005ad0b4NowFrame, word_0, 0x0);
GUEST_SIZE(Call005ad0b4NowFrame, 0x1c);

u32 call_005ad0b4_now(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Call005ad0b4NowFrame> frame;  // the original's stack frame
    Stamp__now(frame.at(0x10).addr(), r1, r2, r3);
    gptr<Local_005ad068_ea_1> ea_1 = gptr<Local_005ad068_ea_1>(frame.at(0x10).addr());
    u32 r0_2 = ea_1->word_0;
    u32 r1_1 = ea_1->word_4;
    frame->word_0 = frame.at(8).addr();
    gptr<Local_005ad068_ea_3> ea_3 = gptr<Local_005ad068_ea_3>(frame.at(8).addr());
    ea_3->word_0 = r0_2;
    ea_3->word_4 = r1_1;
    return PhotoDatabase__read_file(r0, r1, r2, r3);
}

}  // namespace d_005ad068
GUEST_EXPORT_FRAMED(0x005ad068, d_005ad068::call_005ad0b4_now, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_005ad658: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Formats a photo folder name: the number + 100 on three digits and the folder suffix of the storage.
namespace d_005ad658 {

struct __attribute__((packed)) PhotoPathFormatFolderNameArg2 {
    u16 half_0;
};
GUEST_OFFSET(PhotoPathFormatFolderNameArg2, half_0, 0x0);

inline constexpr u32 photo_folder_format_address = 0x00981680u;
inline constexpr u32 photo_folder_prefix_address = 0x00981688u;
inline constexpr guest::Function<0x00100f69, u32(u32, u32, u32, u32)> swprintf;

struct __attribute__((packed)) PhotoPathFormatFolderNameFrame {
    u32 word_0;
};
GUEST_OFFSET(PhotoPathFormatFolderNameFrame, word_0, 0x0);
GUEST_SIZE(PhotoPathFormatFolderNameFrame, 0x4);

void PhotoPath__format_folder_name(u32 r0_unused, u32 r1_unused, gptr<PhotoPathFormatFolderNameArg2> arg2, u32 r3) {
    guest::StackFrameOf<PhotoPathFormatFolderNameFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    float S0_1 = std::bit_cast<float>(*gptr<u32>(r3 == 0 ? photo_folder_format_address : photo_folder_prefix_address));
    u32 r3_1 = u32(arg2->half_0) + 0x64u;
    frame->word_0 = std::bit_cast<u32>(S0_1);
    guest::cpu()->s[0] = S0_1;
    swprintf(guest::cpu()->r[0], guest::cpu()->r[1], 0x8b3700u, r3_1);
}

}  // namespace d_005ad658
GUEST_EXPORT_FRAMED(0x005ad658, d_005ad658::PhotoPath__format_folder_name, 0x4000);  // pushes {lr} first, as the original

// f_005ad690: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds the wide path of a photo's folder (drive and folder name); the length.
namespace d_005ad690 {

inline constexpr guest::Function<0x001017e5, u32(u32, u32)> copy_wide_string;
inline constexpr guest::Function<0x005ae51c, u32(u32, u32, u32, u32)> copy_table_wide_string;
inline constexpr guest::Function<0x00755504, u32(u32, u32)> PhotoPath__folder_name_wide;

u32 PhotoPath__build_folder(u32 photo_path, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = copy_table_wide_string(photo_path, r1, r2, *gptr<u32>(guest::cpu()->r[13] + 0x18u));
    copy_wide_string(photo_path + (r0_1 << 1), 0x8b3710u);
    return PhotoPath__folder_name_wide(r3, photo_path + (r0_1 + 1u << 1)) + (r0_1 + 1u);
}

}  // namespace d_005ad690
GUEST_EXPORT_FRAMED(0x005ad690, d_005ad690::PhotoPath__build_folder, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_005ad6d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds the wide path of a photo folder from its number; the length.
namespace d_005ad6d8 {

struct __attribute__((packed)) PhotoPathBuildFolderFromNumberArg3 {
    u16 half_0;
};
GUEST_OFFSET(PhotoPathBuildFolderFromNumberArg3, half_0, 0x0);

inline constexpr u32 photo_folder_format_address = 0x00981680u;
inline constexpr u32 photo_folder_prefix_address = 0x00981688u;
inline constexpr guest::Function<0x00100f69, u32(u32, u32, u32, u32)> swprintf;
inline constexpr guest::Function<0x001017e5, u32(u32, u32)> copy_wide_string;
inline constexpr guest::Function<0x005ae51c, u32(u32, u32, u32, u32)> copy_table_wide_string;

struct __attribute__((packed)) PhotoPathBuildFolderFromNumberFrame {
    u32 word_0;
};
GUEST_OFFSET(PhotoPathBuildFolderFromNumberFrame, word_0, 0x0);
GUEST_SIZE(PhotoPathBuildFolderFromNumberFrame, 0x4);

u32 PhotoPath__build_folder_from_number(u32 photo_path, u32 r1, u32 r2, gptr<PhotoPathBuildFolderFromNumberArg3> arg3) {
    guest::StackFrameOf<PhotoPathBuildFolderFromNumberFrame> frame;  // the original's stack frame
    frame->word_0 = arg3.addr();
    u32 r6_1 = *frame.at<u32>(0x20);
    u32 r0_1 = copy_table_wide_string(photo_path, r1, r2, r6_1);
    copy_wide_string(photo_path + (r0_1 << 1), 0x8b3710u);
    u32 r3_2 = u32(arg3->half_0) + 0x64u;
    frame->word_0 = *gptr<u32>(r6_1 == 0 ? photo_folder_format_address : photo_folder_prefix_address);
    return swprintf(photo_path + (r0_1 + 1u << 1), r1 - (r0_1 + 1u), 0x8b3700u, r3_2) + (r0_1 + 1u);
}

}  // namespace d_005ad6d8
GUEST_EXPORT_FRAMED(0x005ad6d8, d_005ad6d8::PhotoPath__build_folder_from_number, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_005ad968: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls 005af04c with the time from 005acb9c and the two arguments.
namespace d_005ad968 {

inline constexpr guest::Function<0x005acb9c, u32(u32, u32, u32, u32)> PhotoDatabase__path_of_kind;
inline constexpr guest::Function<0x005af04c, u32(u32, u32, u32, u32)> PhotoDatabase__write_file;

struct __attribute__((packed)) Call005af04cWithTimeFrame {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Call005af04cWithTimeFrame, word_0, 0x0);
GUEST_OFFSET(Call005af04cWithTimeFrame, word_4, 0x4);
GUEST_SIZE(Call005af04cWithTimeFrame, 0x8);

u32 call_005af04c_with_time(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Call005af04cWithTimeFrame> frame;  // the original's stack frame
    u32 path = PhotoDatabase__path_of_kind(r0, r2, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    frame->word_0 = r1;
    frame->word_4 = r2;
    return PhotoDatabase__write_file(r0, r1_1, path, r1_1);
}

}  // namespace d_005ad968
GUEST_EXPORT_FRAMED(0x005ad968, d_005ad968::call_005af04c_with_time, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005ad9a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The four-digit number of a photo name (four non-empty characters then four digits), or -1.
namespace d_005ad9a0 {

struct __attribute__((packed)) PhotoName {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
    u8 byte_4;
    u8 byte_5;
    u8 byte_6;
    u8 byte_7;
};
GUEST_OFFSET(PhotoName, byte_0, 0x0);
GUEST_OFFSET(PhotoName, byte_1, 0x1);
GUEST_OFFSET(PhotoName, byte_2, 0x2);
GUEST_OFFSET(PhotoName, byte_3, 0x3);
GUEST_OFFSET(PhotoName, byte_4, 0x4);
GUEST_OFFSET(PhotoName, byte_5, 0x5);
GUEST_OFFSET(PhotoName, byte_6, 0x6);
GUEST_OFFSET(PhotoName, byte_7, 0x7);


u32 PhotoName__number(gptr<PhotoName> photo_name) {
    u32 v_1 = photo_name->byte_0;
    if (v_1 == 0) {
        return ~0u;
    }
    u32 v_2 = photo_name->byte_1;
    if (v_2 == 0) {
        return ~0u;
    }
    u32 v_3 = photo_name->byte_2;
    if (v_3 == 0) {
        return ~0u;
    }
    u32 v_4 = photo_name->byte_3;
    if (v_4 == 0) {
        return ~0u;
    }
    u32 r2_1 = s8(photo_name->byte_4);
    if (r2_1 - 0x30u >= 0xau) {
        return ~0u;
    }
    u32 r3_1 = s8(photo_name->byte_5);
    u32 r1_1 = ~0x2fu;
    if (r3_1 - 0x30u >= 0xau) {
        return ~0u;
    }
    u32 r2_2 = s8(photo_name->byte_6);
    if (r2_2 - 0x30u >= 0xau) {
        return ~0u;
    }
    u32 r0_8 = s8(photo_name->byte_7);
    if (r0_8 - 0x30u < 0xau) {
        return r0_8 + (r1_1 + (r2_2 + (r1_1 + (r3_1 + (r1_1 + (r2_1 - 0x30u) * 0xau)) * 0xau)) * 0xau);
    }
    return ~0u;
}

}  // namespace d_005ad9a0
GUEST_EXPORT_FRAMED(0x005ad9a0, d_005ad9a0::PhotoName__number, 0x10);  // pushes {r4} first, as the original

// f_005ada54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The four-digit number of a wide photo name (four non-empty characters then four digits), or -1.
namespace d_005ada54 {

struct __attribute__((packed)) PhotoName {
    u16 half_0;
    u16 half_2;
    u16 half_4;
    u16 half_6;
    u16 half_8;
    u16 half_a;
    u16 half_c;
    u16 half_e;
};
GUEST_OFFSET(PhotoName, half_0, 0x0);
GUEST_OFFSET(PhotoName, half_2, 0x2);
GUEST_OFFSET(PhotoName, half_4, 0x4);
GUEST_OFFSET(PhotoName, half_6, 0x6);
GUEST_OFFSET(PhotoName, half_8, 0x8);
GUEST_OFFSET(PhotoName, half_a, 0xa);
GUEST_OFFSET(PhotoName, half_c, 0xc);
GUEST_OFFSET(PhotoName, half_e, 0xe);


u32 PhotoName__number_wide(gptr<PhotoName> photo_name) {
    u32 v_1 = photo_name->half_0;
    if (v_1 == 0) {
        return ~0u;
    }
    u32 v_2 = photo_name->half_2;
    if (v_2 == 0) {
        return ~0u;
    }
    u32 v_3 = photo_name->half_4;
    if (v_3 == 0) {
        return ~0u;
    }
    u32 v_4 = photo_name->half_6;
    if (v_4 == 0) {
        return ~0u;
    }
    u32 r2_1 = photo_name->half_8;
    if (r2_1 - 0x30u >= 0xau) {
        return ~0u;
    }
    u32 r3_1 = photo_name->half_a;
    u32 r1_1 = ~0x2fu;
    if (r3_1 - 0x30u >= 0xau) {
        return ~0u;
    }
    u32 r2_2 = photo_name->half_c;
    if (r2_2 - 0x30u >= 0xau) {
        return ~0u;
    }
    u32 r0_8 = photo_name->half_e;
    if (r0_8 - 0x30u < 0xau) {
        return r0_8 + (r1_1 + (r2_2 + (r1_1 + (r3_1 + (r1_1 + (r2_1 - 0x30u) * 0xau)) * 0xau)) * 0xau);
    }
    return ~0u;
}

}  // namespace d_005ada54
GUEST_EXPORT_FRAMED(0x005ada54, d_005ada54::PhotoName__number_wide, 0x10);  // pushes {r4} first, as the original

// f_005add7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The length of the photo root path of storage 0, computed once.
namespace d_005add7c {

inline constexpr u32 photo_root_b_address = 0x0097e0b8u;
inline constexpr u32 photo_drive_length_cache_address = 0x0097e0e4u;
inline constexpr u32 photo_root_length_0_value_address = 0x0097e0f4u;
inline constexpr u32 photo_root_path_0_address = 0x00aedff2u;
inline guest::global<u32, 0x0097e0b8> photo_root_b;
inline guest::global<u8, 0x0097e0e5> photo_root_path_ready_a;
inline guest::global<u8, 0x0097e0e8> photo_root_length_0_set;
inline guest::global<u32, 0x0097e0f4> photo_root_length_0_value;
inline constexpr guest::Function<0x00100835, u32(u32, u32)> string16_length;
inline constexpr guest::Function<0x001017e5, u32(u32, u32)> copy_wide_string;
inline constexpr guest::Function<0x00101831, u32(u32, u32)> append_wide_string;

u32 photo_root_length_0(u32 r0_unused, u32 r1) {
    if (*photo_root_length_0_set == 0) {
        if (*photo_root_path_ready_a == 0) {
            copy_wide_string(photo_root_path_0_address, *photo_root_b);
            append_wide_string(photo_root_path_0_address, 0x8b36e8u);
            r1 = guest::cpu()->r[1];
            *photo_root_path_ready_a = 1;
        }
        u32 r0_1 = string16_length(photo_root_path_0_address, r1);
        r1 = guest::cpu()->r[1];
        *photo_root_length_0_value = r0_1;
        *photo_root_length_0_set = 1;
    }
    u32 r0_2 = *photo_root_length_0_value;
    guest::cpu()->r[1] = r1;
    return r0_2;
}

}  // namespace d_005add7c
GUEST_EXPORT_FRAMED(0x005add7c, d_005add7c::photo_root_length_0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005adf1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The length of the photo drive path, computed once.
namespace d_005adf1c {

inline constexpr u32 photo_drive_length_b_address = 0x0097e0bcu;
inline constexpr u32 photo_drive_length_cache_address = 0x0097e0e4u;
inline constexpr u32 photo_drive_length_value_address = 0x0097e0f0u;
inline constexpr u32 photo_drive_path_address = 0x00aedfdcu;
inline guest::global<u32, 0x0097e0bc> photo_drive_length_b;
inline guest::global<u8, 0x0097e0e4> photo_drive_length_cache;
inline guest::global<u8, 0x0097e0e7> photo_drive_length_set;
inline guest::global<u32, 0x0097e0f0> photo_drive_length_value;
inline constexpr guest::Function<0x00100835, u32(u32, u32)> string16_length;
inline constexpr guest::Function<0x001017e5, u32(u32, u32)> copy_wide_string;
inline constexpr guest::Function<0x00101831, u32(u32, u32)> append_wide_string;

u32 photo_drive_length(u32 r0_unused, u32 r1) {
    if (*photo_drive_length_set == 0) {
        if (*photo_drive_length_cache == 0) {
            copy_wide_string(photo_drive_path_address, *photo_drive_length_b);
            append_wide_string(photo_drive_path_address, 0x8b36e8u);
            r1 = guest::cpu()->r[1];
            *photo_drive_length_cache = 1;
        }
        u32 r0_1 = string16_length(photo_drive_path_address, r1);
        r1 = guest::cpu()->r[1];
        *photo_drive_length_value = r0_1;
        *photo_drive_length_set = 1;
    }
    u32 r0_2 = *photo_drive_length_value;
    guest::cpu()->r[1] = r1;
    return r0_2;
}

}  // namespace d_005adf1c
GUEST_EXPORT_FRAMED(0x005adf1c, d_005adf1c::photo_drive_length, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005ae46c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The path of the photo index file for storage `which` (0 or 1), built once; the empty path for others.
namespace d_005ae46c {

inline constexpr u32 photo_index_path_pointer_address = 0x00981674u;
inline constexpr u32 photo_index_path_0_address = 0x00aee01eu;
inline constexpr u32 photo_index_path_1_address = 0x00aee094u;
inline guest::global<u8, 0x0097e0ea> photo_index_path_set;
inline guest::global<u32, 0x00981674> photo_index_path_pointer;
inline constexpr guest::Function<0x001017e5, u32(u32, u32)> copy_wide_string;
inline constexpr guest::Function<0x00101831, u32(u32, u32)> append_wide_string;
inline constexpr guest::Function<0x005adde8, u32(u32, u32, u32, u32)> PhotoStore__count;

u32 photo_index_path(u32 r0, u32 r1) {
    if (*photo_index_path_set == 0) {
        copy_wide_string(photo_index_path_0_address, PhotoStore__count(0u, r1, guest::cpu()->r[2], guest::cpu()->r[3]));
        append_wide_string(photo_index_path_0_address, 0x5ae50cu);
        u32 r1_1 = *photo_index_path_pointer;
        append_wide_string(photo_index_path_0_address, r1_1);
        copy_wide_string(photo_index_path_1_address, PhotoStore__count(1u, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]));
        append_wide_string(photo_index_path_1_address, 0x5ae50cu);
        append_wide_string(photo_index_path_1_address, *photo_index_path_pointer);
        *photo_index_path_set = 1;
    }
    return r0 == 0 ? photo_index_path_0_address : r0 == 1u ? photo_index_path_1_address : 0x5ae518u;
}

}  // namespace d_005ae46c
GUEST_EXPORT_FRAMED(0x005ae46c, d_005ae46c::photo_index_path, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005aead8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Reports a fatal error for a failing file-system result, except the media and not-found codes the photo code handles.
namespace d_005aead8 {

inline constexpr guest::Function<0x0012f598, u32(u32, u32)> report_fatal_result_with_info;

void check_fs_result(u32 r0) {
    u32 res_1 = r0 & 0x80000000u;
    if (s32(res_1) >= 0) {
        guest::cpu()->r[1] = res_1;
        return;
    }
    u32 r1_1 = (r0 & 0x3fc00u) >> 0xa;
    u32 r0_1 = r0 & 0x3ffu;
    if (r1_1 == 0x11u && s32(r0_1) >= 0x64 && s32(r0_1) <= 0xb3 || r1_1 == 0x11u && s32(r0_1) >= 0xb4 && s32(r0_1) <= 0xc7 || r1_1 == 0x11u && s32(r0_1) >= 0xc8 && s32(r0_1) <= 0xdb) {
        guest::cpu()->r[1] = r1_1;
        return;
    }
    u32 info = 0x5aeb4cu;
    if ((r0 >> 0x1f) != 0) {
        report_fatal_result_with_info(r0, info);
        info = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = info;
}

}  // namespace d_005aead8
GUEST_EXPORT_FRAMED(0x005aead8, d_005aead8::check_fs_result, 0x4010);  // pushes {r4, lr} first, as the original

// f_005aeb58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the parent directory of a wide path (up to its last slash).
namespace d_005aeb58 {

inline constexpr guest::Function<0x00100835, u32(u32, u32, u32, u32)> string16_length;
inline constexpr guest::Function<0x0010181d, u32(u32, u32, u32)> wmemcpy;

void wide_path_parent(u32 i, u32 r1, u32 r2) {
    u32 r6 = i;
    u32 r5 = r2;
    u32 r0_1 = string16_length(r2, r1, r2, guest::cpu()->r[3]);
    r1 = r0_1 + 1u;
    u32 r4 = r0_1 - 1u;
    i = 1u;
    if (s32(r1) > 1) {
        do {
            if (gptr<u16>(r5)[r4] == 0x2fu) {
                break;
            }
            i += 1u;
            r4 -= 1u;
            guest::preempt();
        } while (s32(r1) > s32(i));
    }
    if (s32(r4) >= 0) {
        wmemcpy(r6, r5, r4);
        r1 = r6 + (r4 << 1);
        *gptr<u16>(r1) = 0;
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_005aeb58
GUEST_EXPORT_FRAMED(0x005aeb58, d_005aeb58::wide_path_parent, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005aebc8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Looks through the photo folders under the cursor for the one with the given name.
namespace d_005aebc8 {

struct __attribute__((packed)) Local_005aebc8_r0_16 {
    u8 unknown_0[0x71];  // (not used here)
    u8 byte_71;
};
GUEST_OFFSET(Local_005aebc8_r0_16, byte_71, 0x71);

struct __attribute__((packed)) Local_005aebc8_r0_17 {
    u8 unknown_0[0x71];  // (not used here)
    u8 byte_71;
};
GUEST_OFFSET(Local_005aebc8_r0_17, byte_71, 0x71);

inline constexpr u32 photo_folder_format_address = 0x00981680u;
inline constexpr u32 photo_folder_prefix_address = 0x00981688u;
inline constexpr guest::Function<0x0010184d, u32(u32, u32, u32, u32)> compare_wide_strings;
inline constexpr guest::Function<0x001416b0, u32(u32)> return_constant_0x97e098_;
inline constexpr guest::Function<0x005add4c, u32(u32, u32)> PhotoName__parse_2;
inline constexpr guest::Function<0x005ae51c, u32(u32, u32, u32, u32)> copy_table_wide_string;
inline constexpr guest::Function<0x005aff24, u32(u32, u32, u32, u32)> DirCursor__next;
inline constexpr guest::Function<0x005affd8, u32(u32, u32, u32, u32)> nn__fs__Directory__Directory_005affd8;
inline constexpr guest::Function<0x005b00a8, u32(u32, u32, u32, u32)> Handle__release_2;
inline constexpr guest::Function<0x0075523c, u32(u32, u32, u32, u32)> Cursor__current_is_marked;
inline constexpr guest::Function<0x007552e8, u32(u32, u32, u32, u32)> Cursor__current;

struct __attribute__((packed)) PhotoDirFindFolderFrame {
    u32 word_0;
    u8 unknown_4[0x8];  // (not read or written by name)
    u8 byte_c;
    u8 unknown_d[0x4f];  // (not read or written by name)
};
GUEST_OFFSET(PhotoDirFindFolderFrame, word_0, 0x0);
GUEST_OFFSET(PhotoDirFindFolderFrame, byte_c, 0xc);
GUEST_SIZE(PhotoDirFindFolderFrame, 0x5c);

void PhotoDir__find_folder(u32 photo_dir, u32 r1, u32 r2) {
    guest::StackFrameOf<PhotoDirFindFolderFrame> frame;  // the original's stack frame
    u32 r5_1 = r1;
    u32 r4 = photo_dir;
    u32 r6_1 = r2;
    u32 r0_3 = return_constant_0x97e098_(copy_table_wide_string(frame.at(0x30).addr(), 0x15u, r5_1, r2));
    frame->word_0 = 0x3e8;
    nn__fs__Directory__Directory_005affd8(frame.at(8).addr(), r0_3, r5_1, frame.at(0x30).addr());
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    u32 r3 = guest::cpu()->r[3];
    if (frame->byte_c != 0) {
        u32 r0_5 = r5_1 == 0 ? r6_1 != 0 ? photo_folder_prefix_address : photo_folder_format_address : photo_folder_format_address;
        u32 r7 = 1u;
        u32 r6 = *gptr<u32>(r0_5);
L_5aec3c:;
        u32 r0_7 = DirCursor__next(frame.at(8).addr(), r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_7 != 0) {
            u32 is_marked = Cursor__current_is_marked(frame.at(8).addr(), r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (is_marked == 0) {
                guest::preempt();
                goto L_5aec3c;
            }
            u32 r0_11 = Cursor__current(frame.at(8).addr(), r1, r2, r3);
            u32 r0_12 = PhotoName__parse_2(r0_11, frame.at(0).addr());
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_12 == 0) {
                guest::preempt();
                goto L_5aec3c;
            }
            u32 r0_14 = compare_wide_strings(r0_11 + 6u, r6, r2, r3);
            u32 r12_1 = guest::cpu()->r[12];
            r2 = frame->word_0;
            if (r0_14 == 0u) {
                r12_1 = 1u;
            }
            u32 r0_15 = r2 - 0x64u;
            if (r0_14 != 0u) {
                r12_1 = 0u;
            }
            u32 b_1 = s32(r0_15) >> 0x1f;
            r1 = r0_15 + (b_1 >> 0x1d);
            r3 = r1 & ~7u;
            u32 r5_2 = *gptr<u8>(r4 + u32(s32(r1) >> 3));
            if ((r5_2 & lsl_r(r7, r0_15 - r3 & 0xff)) != 0) {
                if (r12_1 == 0) {
                    guest::preempt();
                    goto L_5aec3c;
                }
                r2 = r2 - 0x64u - r3;
                gptr<Local_005aebc8_r0_16> r0_16 = gptr<Local_005aebc8_r0_16>(r4 + u32(s32(r1) >> 3));
                r1 = u32(r0_16->byte_71) | lsl_r(r7, r2 & 0xff);
                r0_16->byte_71 = u8(r1);
                guest::preempt();
                goto L_5aec3c;
            }
            u32 r5_3 = *gptr<u8>(r4 + u32(s32(r1) >> 3));
            *gptr<u8>(r4 + u32(s32(r1) >> 3)) = u8(r5_3 | lsl_r(r7, r2 - 0x64u - r3 & 0xff));
            gptr<Local_005aebc8_r0_17> r0_17 = gptr<Local_005aebc8_r0_17>(r4 + u32(s32(r1) >> 3));
            u32 r1_3 = r0_17->byte_71;
            r2 = lsl_r(r7, r2 - 0x64u - r3 & 0xff);
            r1 = r12_1 == 0 ? r1_3 & ~r2 : r1_3 | r2;
            r0_17->byte_71 = u8(r1);
            guest::preempt();
            goto L_5aec3c;
        }
    }
    Handle__release_2(frame.at(8).addr(), r1, r2, r3);
}

}  // namespace d_005aebc8
GUEST_EXPORT_FRAMED(0x005aebc8, d_005aebc8::PhotoDir__find_folder, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_005aed44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Fills a photo record from its folder and file names (numbers and extension).
namespace d_005aed44 {

struct __attribute__((packed)) PhotoRecord {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(PhotoRecord, byte_0, 0x0);
GUEST_OFFSET(PhotoRecord, byte_1, 0x1);
GUEST_OFFSET(PhotoRecord, byte_2, 0x2);
GUEST_OFFSET(PhotoRecord, byte_3, 0x3);

inline constexpr guest::Function<0x005ad9a0, u32(u32)> PhotoName__number;

u32 PhotoRecord__from_name(gptr<PhotoRecord> photo_record, u32 r1) {
    u32 r2_1 = s8(photo_record->byte_0);
    u32 r1_1 = r2_1 - 0x30u;
    u32 zf_1 = r1_1 == 9u;
    u32 cf_1 = r1_1 >= 9u;
    if (cf_1 && !zf_1) {
        r1_1 = r2_1 - 0x41u;
        zf_1 = r1_1 == 0x19u;
        cf_1 = r1_1 >= 0x19u;
    }
    if (cf_1 && !zf_1) {
        r1_1 = r2_1 - 0x61u;
        zf_1 = r1_1 == 0x19u;
        cf_1 = r1_1 >= 0x19u;
    }
    if (cf_1 && !zf_1 && r2_1 != 0x5fu) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r2_2 = s8(photo_record->byte_1);
    u32 r1_2 = r2_2 - 0x30u;
    u32 zf_2 = r1_2 == 9u;
    u32 cf_2 = r1_2 >= 9u;
    if (cf_2 && !zf_2) {
        r1_2 = r2_2 - 0x41u;
        zf_2 = r1_2 == 0x19u;
        cf_2 = r1_2 >= 0x19u;
    }
    if (cf_2 && !zf_2) {
        r1_2 = r2_2 - 0x61u;
        zf_2 = r1_2 == 0x19u;
        cf_2 = r1_2 >= 0x19u;
    }
    if (cf_2 && !zf_2 && r2_2 != 0x5fu) {
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    u32 r2_3 = s8(photo_record->byte_2);
    u32 r1_3 = r2_3 - 0x30u;
    u32 zf_3 = r1_3 == 9u;
    u32 cf_3 = r1_3 >= 9u;
    if (cf_3 && !zf_3) {
        r1_3 = r2_3 - 0x41u;
        zf_3 = r1_3 == 0x19u;
        cf_3 = r1_3 >= 0x19u;
    }
    if (cf_3 && !zf_3) {
        r1_3 = r2_3 - 0x61u;
        zf_3 = r1_3 == 0x19u;
        cf_3 = r1_3 >= 0x19u;
    }
    if (cf_3 && !zf_3 && r2_3 != 0x5fu) {
        guest::cpu()->r[1] = r1_3;
        return 0u;
    }
    u32 r2_4 = s8(photo_record->byte_3);
    u32 r1_4 = r2_4 - 0x30u;
    u32 zf_4 = r1_4 == 9u;
    u32 cf_4 = r1_4 >= 9u;
    if (cf_4 && !zf_4) {
        r1_4 = r2_4 - 0x41u;
        zf_4 = r1_4 == 0x19u;
        cf_4 = r1_4 >= 0x19u;
    }
    if (cf_4 && !zf_4) {
        r1_4 = r2_4 - 0x61u;
        zf_4 = r1_4 == 0x19u;
        cf_4 = r1_4 >= 0x19u;
    }
    if (cf_4 && !zf_4 && r2_4 != 0x5fu) {
        guest::cpu()->r[1] = r1_4;
        return 0u;
    }
    u32 r0_1 = PhotoName__number(photo_record.addr());
    if (r0_1 - 1u >= 0x270fu) {
        guest::cpu()->r[1] = 0x270fu;
        return 0u;
    }
    if (r1 != 0) {
        *gptr<u32>(r1) = r0_1;
    }
    guest::cpu()->r[1] = 0x270fu;
    return 1u;
}

}  // namespace d_005aed44
GUEST_EXPORT_FRAMED(0x005aed44, d_005aed44::PhotoRecord__from_name, 0x4010);  // pushes {r4, lr} first, as the original

// f_005aee20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Fills a photo record from its wide folder and file names.
namespace d_005aee20 {

struct __attribute__((packed)) PhotoRecord {
    u16 half_0;
    u16 half_2;
    u16 half_4;
    u16 half_6;
    u8 unknown_8[0x8];  // (not used here)
    u16 half_10;
};
GUEST_OFFSET(PhotoRecord, half_0, 0x0);
GUEST_OFFSET(PhotoRecord, half_2, 0x2);
GUEST_OFFSET(PhotoRecord, half_4, 0x4);
GUEST_OFFSET(PhotoRecord, half_6, 0x6);
GUEST_OFFSET(PhotoRecord, half_10, 0x10);

struct __attribute__((packed)) Local_005aee20_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_005aee20_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_005aee20_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_005aee20_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_005aee20_ea_1, word_c, 0xc);

struct __attribute__((packed)) Local_005aee20_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_005aee20_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_005aee20_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_005aee20_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_005aee20_ea_2, word_c, 0xc);

struct __attribute__((packed)) Local_005aee20_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005aee20_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_005aee20_ea_3, word_4, 0x4);

struct __attribute__((packed)) Local_005aee20_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005aee20_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_005aee20_ea_4, word_4, 0x4);

struct __attribute__((packed)) Local_005aee20_ea_5 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_005aee20_ea_5, word_0, 0x0);
GUEST_OFFSET(Local_005aee20_ea_5, word_4, 0x4);
GUEST_OFFSET(Local_005aee20_ea_5, word_8, 0x8);
GUEST_OFFSET(Local_005aee20_ea_5, word_c, 0xc);

struct __attribute__((packed)) Local_005aee20_ea_6 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005aee20_ea_6, word_0, 0x0);
GUEST_OFFSET(Local_005aee20_ea_6, word_4, 0x4);

inline constexpr guest::Function<0x00100835, u32(u32, u32)> string16_length;
inline constexpr guest::Function<0x005ada54, u32(u32)> PhotoName__number_wide;

u32 PhotoRecord__from_wide_name(gptr<PhotoRecord> photo_record, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r1_2 = 0;
    gptr<Local_005aee20_ea_1> ea_1 = gptr<Local_005aee20_ea_1>(r13 - 0x10);
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r6;
    ea_1->word_c = r14;
    r13 -= 0x10;
    guest::cpu()->r[13] = r13;
    u32 r0_1 = string16_length(photo_record.addr(), r1);
    if (s32(r0_1) >= 8 && (s32(r0_1) < 9 || photo_record->half_10 == 0x2eu)) {
        gptr<Local_005aee20_ea_2> ea_2 = gptr<Local_005aee20_ea_2>(r13);
        r13 += 0x10;
        u32 r4_1 = ea_2->word_0;
        r5_1 = ea_2->word_4;
        r6_1 = ea_2->word_8;
        r14 = ea_2->word_c;
        gptr<Local_005aee20_ea_3> ea_3 = gptr<Local_005aee20_ea_3>(r13 - 8);
        ea_3->word_0 = r4_1;
        ea_3->word_4 = r14;
        r13 -= 8;
        u32 r2_1 = photo_record->half_0;
        r1_2 = r2_1 - 0x30u;
        u32 zf_1 = r1_2 == 9u;
        u32 cf_1 = r1_2 >= 9u;
        if (cf_1 && !zf_1) {
            r1_2 = r2_1 - 0x41u;
            zf_1 = r1_2 == 0x19u;
            cf_1 = r1_2 >= 0x19u;
        }
        if (cf_1 && !zf_1) {
            r1_2 = r2_1 - 0x61u;
            zf_1 = r1_2 == 0x19u;
            cf_1 = r1_2 >= 0x19u;
        }
        if (!cf_1 || zf_1 || r2_1 == 0x5fu) {
            u32 r2_2 = photo_record->half_2;
            r1_2 = r2_2 - 0x30u;
            u32 zf_2 = r1_2 == 9u;
            u32 cf_2 = r1_2 >= 9u;
            if (cf_2 && !zf_2) {
                r1_2 = r2_2 - 0x41u;
                zf_2 = r1_2 == 0x19u;
                cf_2 = r1_2 >= 0x19u;
            }
            if (cf_2 && !zf_2) {
                r1_2 = r2_2 - 0x61u;
                zf_2 = r1_2 == 0x19u;
                cf_2 = r1_2 >= 0x19u;
            }
            if (!cf_2 || zf_2 || r2_2 == 0x5fu) {
                u32 r2_3 = photo_record->half_4;
                r1_2 = r2_3 - 0x30u;
                u32 zf_3 = r1_2 == 9u;
                u32 cf_3 = r1_2 >= 9u;
                if (cf_3 && !zf_3) {
                    r1_2 = r2_3 - 0x41u;
                    zf_3 = r1_2 == 0x19u;
                    cf_3 = r1_2 >= 0x19u;
                }
                if (cf_3 && !zf_3) {
                    r1_2 = r2_3 - 0x61u;
                    zf_3 = r1_2 == 0x19u;
                    cf_3 = r1_2 >= 0x19u;
                }
                if (!cf_3 || zf_3 || r2_3 == 0x5fu) {
                    u32 r2_4 = photo_record->half_6;
                    r1_2 = r2_4 - 0x30u;
                    u32 zf_4 = r1_2 == 9u;
                    u32 cf_4 = r1_2 >= 9u;
                    if (cf_4 && !zf_4) {
                        r1_2 = r2_4 - 0x41u;
                        zf_4 = r1_2 == 0x19u;
                        cf_4 = r1_2 >= 0x19u;
                    }
                    if (cf_4 && !zf_4) {
                        r1_2 = r2_4 - 0x61u;
                        zf_4 = r1_2 == 0x19u;
                        cf_4 = r1_2 >= 0x19u;
                    }
                    if (!cf_4 || zf_4 || r2_4 == 0x5fu) {
                        guest::cpu()->r[13] = r13;
                        u32 r0_2 = PhotoName__number_wide(photo_record.addr());
                        r1_2 = 0x270fu;
                        if (r0_2 - 1u < r1_2) {
                            if (r1 != 0) {
                                *gptr<u32>(r1) = r0_2;
                            }
                            gptr<Local_005aee20_ea_4> ea_4 = gptr<Local_005aee20_ea_4>(r13);
                            r13 += 8;
                            u32 r4_2 = ea_4->word_0;
                            guest::cpu()->r[1] = r1_2;
                            guest::cpu()->r[4] = r4_2;
                            guest::cpu()->r[5] = r5_1;
                            guest::cpu()->r[6] = r6_1;
                            guest::cpu()->r[13] = r13;
                            return 1u;
                        }
                    }
                }
            }
        }
    } else {
        gptr<Local_005aee20_ea_5> ea_5 = gptr<Local_005aee20_ea_5>(r13);
        r13 += 0x10;
        u32 r4_3 = ea_5->word_0;
        u32 r5_2 = ea_5->word_4;
        u32 r6_2 = ea_5->word_8;
        guest::cpu()->r[4] = r4_3;
        guest::cpu()->r[5] = r5_2;
        guest::cpu()->r[6] = r6_2;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    gptr<Local_005aee20_ea_6> ea_6 = gptr<Local_005aee20_ea_6>(r13);
    r13 += 8;
    u32 r4_4 = ea_6->word_0;
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[4] = r4_4;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[13] = r13;
    return 0u;
}

}  // namespace d_005aee20
GUEST_EXPORT(0x005aee20, d_005aee20::PhotoRecord__from_wide_name);

// f_005aef40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the time, kinds and the four slots of a picture record into a photo record.
namespace d_005aef40 {

struct __attribute__((packed)) PhotoRecord {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
    u32 word_18;
    u8 unknown_1c[0x8];  // (not used here)
    u32 word_24;
};
GUEST_OFFSET(PhotoRecord, word_14, 0x14);
GUEST_OFFSET(PhotoRecord, word_18, 0x18);
GUEST_OFFSET(PhotoRecord, word_24, 0x24);

struct __attribute__((packed)) PhotoRecordCopyFromInfoArg1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 byte_c;
    u8 byte_d;
    u8 byte_e;
    u8 unknown_f[0x11];  // (not used here)
    u8 byte_20;
};
GUEST_OFFSET(PhotoRecordCopyFromInfoArg1, word_0, 0x0);
GUEST_OFFSET(PhotoRecordCopyFromInfoArg1, word_4, 0x4);
GUEST_OFFSET(PhotoRecordCopyFromInfoArg1, word_8, 0x8);
GUEST_OFFSET(PhotoRecordCopyFromInfoArg1, byte_c, 0xc);
GUEST_OFFSET(PhotoRecordCopyFromInfoArg1, byte_d, 0xd);
GUEST_OFFSET(PhotoRecordCopyFromInfoArg1, byte_e, 0xe);
GUEST_OFFSET(PhotoRecordCopyFromInfoArg1, byte_20, 0x20);

inline constexpr guest::Function<0x005b0120, u32(u32, u32)> PhotoRecord__clear_slot;
inline constexpr guest::Function<0x005b0438, u32(u32, u32)> PhotoRecord__set_bits_0_to_4_of_2c;
inline constexpr guest::Function<0x005b04d0, u32(u32, u32, u32, u32)> PhotoRecord__set_bits_1_to_8_of_28;
inline constexpr guest::Function<0x005b04e8, u32(u32, u32)> PhotoRecord__set_bits_21_to_24_of_2c;
inline constexpr guest::Function<0x005b0504, u32(u32, u32)> PhotoRecord__set_bits_5_to_20_of_2c;
inline constexpr guest::Function<0x005b05c0, u32(u32, u32, u32)> PhotoRecord__set_slot;
inline constexpr guest::Function<0x00754cc0, u32(u32, u32, u32)> flag_bit_of_byte_f;
inline constexpr guest::Function<0x00754cd4, u32(u32, u32)> word_10_at;

void PhotoRecord__copy_from_info(gptr<PhotoRecord> photo_record, gptr<PhotoRecordCopyFromInfoArg1> arg1, u32 r2) {
    u32 r0 = photo_record.addr();
    u32 r1 = arg1.addr();
    u32 r6 = r1;
    u32 r7 = r0;
    u32 r1_1 = arg1->word_4;
    photo_record->word_14 = arg1->word_0;
    photo_record->word_18 = r1_1;
    photo_record->word_24 = arg1->word_8;
    u32 r1_2 = arg1->byte_d;
    PhotoRecord__set_bits_1_to_8_of_28(r7, r1_2, r2, guest::cpu()->r[3]);
    u32 r1_3 = arg1->byte_20;
    PhotoRecord__set_bits_0_to_4_of_2c(r7, r1_3);
    u32 r1_4 = arg1->byte_e;
    PhotoRecord__set_bits_5_to_20_of_2c(r7, r1_4);
    u32 r1_5 = arg1->byte_c;
    PhotoRecord__set_bits_21_to_24_of_2c(r7, r1_5);
    r2 = guest::cpu()->r[2];
    u32 i = 0u;
    do {
        u32 r5_1 = i & 0xffu;
        if (flag_bit_of_byte_f(r6, r5_1, r2) != 0) {
            PhotoRecord__set_slot(r7, r5_1, word_10_at(r6, r5_1));
            r2 = guest::cpu()->r[2];
        } else {
            PhotoRecord__clear_slot(r7, r5_1);
            r2 = guest::cpu()->r[2];
        }
        i += 1u;
        guest::preempt();
    } while (s32(i) < 4);
}

}  // namespace d_005aef40
GUEST_EXPORT_FRAMED(0x005aef40, d_005aef40::PhotoRecord__copy_from_info, 0x41f0);  // pushes {i, r5, r6, r7, r8, lr} first, as the original

// f_005aeff0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The three-digit number at the start of a folder name, or -1.
namespace d_005aeff0 {

struct __attribute__((packed)) PhotoName {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(PhotoName, byte_0, 0x0);
GUEST_OFFSET(PhotoName, byte_1, 0x1);
GUEST_OFFSET(PhotoName, byte_2, 0x2);


u32 PhotoName__folder_number(gptr<PhotoName> photo_name) {
    u32 r3_1 = s8(photo_name->byte_0);
    if (r3_1 - 0x30u >= 0xau) {
        return ~0u;
    }
    u32 r2_1 = s8(photo_name->byte_1);
    u32 r1_1 = ~0x2fu;
    if (r2_1 - 0x30u >= 0xau) {
        return ~0u;
    }
    u32 r0_3 = s8(photo_name->byte_2);
    if (r0_3 - 0x30u < 0xau) {
        return r0_3 + (r1_1 + (r2_1 + (r1_1 + (r3_1 - 0x30u) * 0xau)) * 0xau);
    }
    return ~0u;
}

}  // namespace d_005aeff0
GUEST_EXPORT(0x005aeff0, d_005aeff0::PhotoName__folder_number);

// f_005af13c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Fills a photo record's folder fields from a folder name.
namespace d_005af13c {

struct __attribute__((packed)) PhotoRecord {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(PhotoRecord, byte_0, 0x0);
GUEST_OFFSET(PhotoRecord, byte_1, 0x1);
GUEST_OFFSET(PhotoRecord, byte_2, 0x2);
GUEST_OFFSET(PhotoRecord, byte_3, 0x3);

struct __attribute__((packed)) PhotoRecordFromFolderNameArg1 {
    u32 word_0;
};
GUEST_OFFSET(PhotoRecordFromFolderNameArg1, word_0, 0x0);

struct __attribute__((packed)) Local_005af13c_ea_4 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(Local_005af13c_ea_4, byte_0, 0x0);
GUEST_OFFSET(Local_005af13c_ea_4, byte_1, 0x1);


u32 PhotoRecord__from_folder_name(gptr<PhotoRecord> photo_record, gptr<PhotoRecordFromFolderNameArg1> arg1) {
    u32 r1 = arg1.addr();
    u32 r4_1 = s8(photo_record->byte_0);
    if (r4_1 - 0x30u < 0xau) {
        u32 r12_1 = s8(photo_record->byte_1);
        u32 r3_1 = ~0x2fu;
        if (r12_1 - 0x30u < 0xau) {
            u32 r2_1 = s8(photo_record->byte_2);
            if (r2_1 - 0x30u < 0xau) {
                u32 r2_2 = r2_1 + (r3_1 + (r12_1 + (r3_1 + (r4_1 - 0x30u) * 0xau)) * 0xau);
                if (r2_2 - 0x64u < 0x384u) {
                    if (r1 != 0) {
                        arg1->word_0 = r2_2;
                    }
                    r1 = s8(photo_record->byte_3);
                    u32 r2_3 = r1 - 0x30u;
                    u32 zf_1 = r2_3 == 9u;
                    u32 cf_1 = r2_3 >= 9u;
                    if (cf_1 && !zf_1) {
                        u32 r2_4 = r1 - 0x41u;
                        zf_1 = r2_4 == 0x19u;
                        cf_1 = r2_4 >= 0x19u;
                    }
                    if (cf_1 && !zf_1) {
                        u32 r2_5 = r1 - 0x61u;
                        zf_1 = r2_5 == 0x19u;
                        cf_1 = r2_5 >= 0x19u;
                    }
                    if (!cf_1 || zf_1 || r1 == 0x5fu) {
                        u32 ea_2 = (photo_record.addr() + 3u) + 1u;
                        r1 = *gptr<s8>(ea_2);
                        u32 r2_6 = r1 - 0x30u;
                        u32 zf_2 = r2_6 == 9u;
                        u32 cf_2 = r2_6 >= 9u;
                        if (cf_2 && !zf_2) {
                            u32 r2_7 = r1 - 0x41u;
                            zf_2 = r2_7 == 0x19u;
                            cf_2 = r2_7 >= 0x19u;
                        }
                        if (cf_2 && !zf_2) {
                            u32 r2_8 = r1 - 0x61u;
                            zf_2 = r2_8 == 0x19u;
                            cf_2 = r2_8 >= 0x19u;
                        }
                        if (!cf_2 || zf_2 || r1 == 0x5fu) {
                            u32 ea_3 = ea_2 + 1u;
                            r1 = *gptr<s8>(ea_3);
                            u32 r2_9 = r1 - 0x30u;
                            u32 zf_3 = r2_9 == 9u;
                            u32 cf_3 = r2_9 >= 9u;
                            if (cf_3 && !zf_3) {
                                u32 r2_10 = r1 - 0x41u;
                                zf_3 = r2_10 == 0x19u;
                                cf_3 = r2_10 >= 0x19u;
                            }
                            if (cf_3 && !zf_3) {
                                u32 r2_11 = r1 - 0x61u;
                                zf_3 = r2_11 == 0x19u;
                                cf_3 = r2_11 >= 0x19u;
                            }
                            if (!cf_3 || zf_3 || r1 == 0x5fu) {
                                gptr<Local_005af13c_ea_4> ea_4 = gptr<Local_005af13c_ea_4>(ea_3 + 1u);
                                r1 = s8(ea_4->byte_0);
                                u32 r2_12 = r1 - 0x30u;
                                u32 zf_4 = r2_12 == 9u;
                                u32 cf_4 = r2_12 >= 9u;
                                if (cf_4 && !zf_4) {
                                    u32 r2_13 = r1 - 0x41u;
                                    zf_4 = r2_13 == 0x19u;
                                    cf_4 = r2_13 >= 0x19u;
                                }
                                if (cf_4 && !zf_4) {
                                    u32 r2_14 = r1 - 0x61u;
                                    zf_4 = r2_14 == 0x19u;
                                    cf_4 = r2_14 >= 0x19u;
                                }
                                if (!cf_4 || zf_4 || r1 == 0x5fu) {
                                    u32 r0_1 = s8(ea_4->byte_1);
                                    r1 = r0_1 - 0x30u;
                                    u32 zf_5 = r1 == 9u;
                                    u32 cf_5 = r1 >= 9u;
                                    if (cf_5 && !zf_5) {
                                        r1 = r0_1 - 0x41u;
                                        zf_5 = r1 == 0x19u;
                                        cf_5 = r1 >= 0x19u;
                                    }
                                    if (cf_5 && !zf_5) {
                                        r1 = r0_1 - 0x61u;
                                        zf_5 = r1 == 0x19u;
                                        cf_5 = r1 >= 0x19u;
                                    }
                                    if (!cf_5 || zf_5 || r0_1 == 0x5fu) {
                                        guest::cpu()->r[1] = r1;
                                        return 1u;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_005af13c
GUEST_EXPORT_FRAMED(0x005af13c, d_005af13c::PhotoRecord__from_folder_name, 0x30);  // pushes {r4, r5} first, as the original

// f_005af3e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Writes a photo file to the storage: makes its folder when missing, builds its path and writes the data (with the
// given option).
namespace d_005af3e0 {

struct __attribute__((packed)) Local_005af3e0_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 upper;
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
};
GUEST_OFFSET(Local_005af3e0_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_005af3e0_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_005af3e0_ea_1, upper, 0x8);
GUEST_OFFSET(Local_005af3e0_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_005af3e0_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_005af3e0_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_005af3e0_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_005af3e0_ea_1, word_1c, 0x1c);
GUEST_OFFSET(Local_005af3e0_ea_1, word_20, 0x20);
GUEST_OFFSET(Local_005af3e0_ea_1, word_24, 0x24);
GUEST_OFFSET(Local_005af3e0_ea_1, word_28, 0x28);
GUEST_OFFSET(Local_005af3e0_ea_1, word_2c, 0x2c);
GUEST_OFFSET(Local_005af3e0_ea_1, word_30, 0x30);

struct __attribute__((packed)) Local_005af3e0_ea_2 {
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
GUEST_OFFSET(Local_005af3e0_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_005af3e0_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_005af3e0_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_005af3e0_ea_2, word_c, 0xc);
GUEST_OFFSET(Local_005af3e0_ea_2, word_10, 0x10);
GUEST_OFFSET(Local_005af3e0_ea_2, word_14, 0x14);
GUEST_OFFSET(Local_005af3e0_ea_2, word_18, 0x18);
GUEST_OFFSET(Local_005af3e0_ea_2, word_1c, 0x1c);
GUEST_OFFSET(Local_005af3e0_ea_2, word_20, 0x20);

inline constexpr guest::Function<0x001416b0, u32(u32)> return_constant_0x97e098_;
inline constexpr guest::Function<0x005ab4c8, u32(u32, u32)> fs_result_to_photo_error;
inline constexpr guest::Function<0x005ac5dc, u32(u32, u32, u32, u32)> PhotoPath__build_from_record;
inline constexpr guest::Function<0x005ad690, u32(u32, u32, u32, u32)> PhotoPath__build_folder;
inline constexpr guest::Function<0x005ad74c, u32(u32, u32)> PhotoStore__open;
inline constexpr guest::Function<0x005ae51c, u32(u32, u32, u32, u32)> copy_table_wide_string;
inline constexpr guest::Function<0x005aff24, u32(u32, u32, u32, u32)> DirCursor__next;
inline constexpr guest::Function<0x005affd8, u32(u32, u32, u32, u32)> nn__fs__Directory__Directory_005affd8;
inline constexpr guest::Function<0x005b00a8, u32(u32, u32, u32, u32)> Handle__release_2;
inline constexpr guest::Function<0x005b0520, u32(u32, u32, u32, u32)> PhotoRecord__copy;
inline constexpr guest::Function<0x007553d8, u32(u32, u32, u32, u32)> extension_index;

struct __attribute__((packed)) WritePhotoFileFrame {
    u32 word_0;
    u8 unknown_4[0x8];  // (not read or written by name)
    u8 byte_c;
    u8 unknown_d[0xab];  // (not read or written by name)
    u32 word_b8;
    u8 unknown_bc[0x2c];  // (not read or written by name)
};
GUEST_OFFSET(WritePhotoFileFrame, word_0, 0x0);
GUEST_OFFSET(WritePhotoFileFrame, byte_c, 0xc);
GUEST_OFFSET(WritePhotoFileFrame, word_b8, 0xb8);
GUEST_SIZE(WritePhotoFileFrame, 0xe8);

u32 write_photo_file(u32 r0, u32 r1, u32 upper, u32 r3) {
    guest::StackFrameOf<WritePhotoFileFrame> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r14 = guest::cpu()->r[14];
    u32 r3_10 = 0;
    u32 photo_path = 0;
    u32 r1_9 = 0;
    u32 r0_19 = 0;
    u32 r3_12 = 0;
    u32 r0_20 = 0;
    u32 r0_21 = 0;
    u32 r7_2 = 0;
    u32 r0_22 = 0;
    u32 r0_23 = 0;
    u32 dir_cursor = 0;
    u32 r0_25 = 0;
    u32 r0_26 = 0;
    u32 r0_27 = 0;
    u32 r0_28 = 0;
    u32 r5_1 = 0;
    u32 r0_29 = 0;
    u32 r0_30 = 0;
    u32 r0_31 = 0;
    u32 r0_32 = 0;
    u32 r0_33 = 0;
    u32 r1_13 = 0;
    u32 r0_34 = 0;
    u32 r1_14 = 0;
    u32 r0_35 = 0;
    u32 r0_36 = 0;
    u32 r5_2 = 0;
    u32 r0_37 = 0;
    u32 r0_38 = 0;
    u32 r0_39 = 0;
    u32 r0_40 = 0;
    u32 r0_41 = 0;
    gptr<Local_005af3e0_ea_2> ea_2 = gptr<Local_005af3e0_ea_2>(0u);
    u32 r4_1 = 0;
    u32 r5_3 = 0;
    u32 r6_1 = 0;
    u32 r7_3 = 0;
    u32 r8_1 = 0;
    u32 r9_1 = 0;
    u32 r10_1 = 0;
    u32 r11_1 = 0;
    gptr<Local_005af3e0_ea_1> ea_1 = gptr<Local_005af3e0_ea_1>(frame.at(0xb4).addr());
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->upper = upper;
    ea_1->word_c = r3;
    ea_1->word_10 = r4;
    ea_1->word_14 = r5;
    ea_1->word_18 = r6;
    ea_1->word_1c = r7;
    ea_1->word_20 = r8;
    ea_1->word_24 = r9;
    ea_1->word_28 = r10;
    ea_1->word_2c = r11;
    ea_1->word_30 = r14;
    r4 = r0;
    r5 = upper;
    r6 = 1u;
    u32 extension_4 = extension_index(frame->word_b8, r1, upper, r3);
    r9 = 0x15u;
    r8 = 0x3e8u;
    if (extension_4 != 1u) {
        u32 extension_5 = extension_index(frame->word_b8, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        if (extension_5 != 3u) {
            u32 extension_6 = extension_index(frame->word_b8, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            if (extension_6 == 2u) {
                u32 r3_3 = frame->word_b8;
                frame->word_0 = r5;
                PhotoPath__build_from_record(frame.at(8).addr(), 0x2cu, r4, r3_3);
                r6 = fs_result_to_photo_error(r4, frame.at(8).addr());
                if (r4 == 1u) {
                    PhotoRecord__copy(frame.at(0x60).addr(), frame->word_b8, 1u, r5);
                    frame->word_0 = r5;
                    PhotoPath__build_from_record(frame.at(8).addr(), 0x2cu, r4, frame.at(0x60).addr());
                    fs_result_to_photo_error(r4, frame.at(8).addr());
                }
                if (r6 != 0 || r3 == 0) {
                    goto L_5af6b0;
                }
                u32 r3_7 = frame->word_b8;
                frame->word_0 = r5;
                u32 r0_13 = return_constant_0x97e098_(PhotoPath__build_folder(frame.at(0x30).addr(), 0x1eu, r4, r3_7));
                frame->word_0 = r8;
                nn__fs__Directory__Directory_005affd8(frame.at(8).addr(), r0_13, r4, frame.at(0x30).addr());
                if (frame->byte_c == 0) {
                    goto L_5af6bc;
                }
                if (DirCursor__next(frame.at(8).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]) == 0) {
                    goto L_5af6bc;
                }
                Handle__release_2(frame.at(8).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                goto L_5af650;
            }
            goto L_5af6b0;
        }
    }
    r3_10 = frame->word_b8;
    photo_path = frame.at(8).addr();
    frame->word_0 = r5;
    PhotoPath__build_from_record(photo_path, 0x2cu, r4, r3_10);
    r1_9 = frame.at(8).addr();
    r0_19 = fs_result_to_photo_error(r4, r1_9);
    r6 = r0_19;
    if (r0_19 != 0 || r3 == 0) {
        goto L_5af6b0;
    }
    r3_12 = frame->word_b8;
    r0_20 = frame.at(0x30).addr();
    frame->word_0 = r5;
    r0_21 = PhotoPath__build_folder(r0_20, 0x1eu, r4, r3_12);
    r7_2 = frame.at(0x30).addr();
    r0_22 = return_constant_0x97e098_(r0_21);
    r0_23 = frame.at(8).addr();
    frame->word_0 = r8;
    nn__fs__Directory__Directory_005affd8(r0_23, r0_22, r4, r7_2);
    if (frame->byte_c == 0) {
        goto L_5af534;
    }
    dir_cursor = frame.at(8).addr();
    r0_25 = DirCursor__next(dir_cursor, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_25 == 0) {
        goto L_5af534;
    }
    r0_26 = frame.at(8).addr();
    Handle__release_2(r0_26, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
L_5af4d8:;
    r0_27 = frame.at(0x30).addr();
    r0_28 = copy_table_wide_string(r0_27, r9, r4, r5);
    r5_1 = frame.at(0x30).addr();
    r0_29 = return_constant_0x97e098_(r0_28);
    r0_30 = frame.at(8).addr();
    frame->word_0 = r8;
    nn__fs__Directory__Directory_005affd8(r0_30, r0_29, r4, r5_1);
    r1 = guest::cpu()->r[1];
    upper = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (frame->byte_c == 0) {
        goto L_5af554;
    }
    r0_31 = frame.at(8).addr();
    r0_32 = DirCursor__next(r0_31, r1, upper, r3);
    r1 = guest::cpu()->r[1];
    upper = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_32 == 0) {
        goto L_5af554;
    }
    goto L_5af6a8;
L_5af534:;
    r0_33 = frame.at(8).addr();
    Handle__release_2(r0_33, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_13 = frame.at(0x30).addr();
    PhotoStore__open(r4, r1_13);
    guest::preempt();
    goto L_5af4d8;
L_5af554:;
    r0_34 = frame.at(8).addr();
    Handle__release_2(r0_34, r1, upper, r3);
    r1_14 = frame.at(0x30).addr();
    PhotoStore__open(r4, r1_14);
    goto L_5af6b0;
L_5af650:;
    r0_35 = frame.at(0x30).addr();
    r0_36 = copy_table_wide_string(r0_35, r9, r4, r5);
    r5_2 = frame.at(0x30).addr();
    r0_37 = return_constant_0x97e098_(r0_36);
    r0_38 = frame.at(8).addr();
    frame->word_0 = r8;
    nn__fs__Directory__Directory_005affd8(r0_38, r0_37, r4, r5_2);
    r1 = guest::cpu()->r[1];
    upper = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (frame->byte_c == 0) {
        guest::preempt();
        goto L_5af554;
    }
    r0_39 = frame.at(8).addr();
    r0_40 = DirCursor__next(r0_39, r1, upper, r3);
    r1 = guest::cpu()->r[1];
    upper = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_40 == 0) {
        guest::preempt();
        goto L_5af554;
    }
L_5af6a8:;
    r0_41 = frame.at(8).addr();
    Handle__release_2(r0_41, r1, upper, r3);
L_5af6b0:;
    ea_2 = gptr<Local_005af3e0_ea_2>(frame.at(0xc4).addr());
    r4_1 = ea_2->word_0;
    r5_3 = ea_2->word_4;
    r6_1 = ea_2->word_8;
    r7_3 = ea_2->word_c;
    r8_1 = ea_2->word_10;
    r9_1 = ea_2->word_14;
    r10_1 = ea_2->word_18;
    r11_1 = ea_2->word_1c;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_3;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_3;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
    guest::cpu()->r[10] = r10_1;
    guest::cpu()->r[11] = r11_1;
    return r6;
L_5af6bc:;
    Handle__release_2(frame.at(8).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    PhotoStore__open(r4, frame.at(0x30).addr());
    guest::preempt();
    goto L_5af650;
}

}  // namespace d_005af3e0
GUEST_EXPORT(0x005af3e0, d_005af3e0::write_photo_file);

// f_005af6dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Parses up to `count` decimal digits (stopping at a terminator) into `out`; false on a non-digit.
namespace d_005af6dc {

struct __attribute__((packed)) ParseDecimalArg0 {
    u32 word_0;
};
GUEST_OFFSET(ParseDecimalArg0, word_0, 0x0);


u32 parse_decimal(gptr<ParseDecimalArg0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    if (s32(r2) <= 0) {
        return 0u;
    }
    u32 r12 = ~0x2fu;
    arg0->word_0 = 0;
    for (;;) {
        r2 -= 1u;
        if (s32(r2) < 0) {
            guest::cpu()->r[1] = r1;
            return 1u;
        }
        u32 r3 = *gptr<s8>(r1);
        if (r3 == 0) {
            break;
        }
        if (r3 - 0x30u >= 0xau) {
            guest::cpu()->r[1] = r1;
            return 0u;
        }
        r1 += 1u;
        *gptr<u32>(r0) = r3 + (r12 + *gptr<u32>(r0) * 0xau);
        guest::preempt();
    }
    guest::cpu()->r[1] = r1;
    return 1u;
}

}  // namespace d_005af6dc
GUEST_EXPORT_FRAMED(0x005af6dc, d_005af6dc::parse_decimal, 0x10);  // pushes {r4} first, as the original

// f_005af748: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Parses up to `count` wide decimal digits (stopping at a terminator) into `out`; false on a non-digit.
namespace d_005af748 {

struct __attribute__((packed)) ParseDecimalWideArg0 {
    u32 word_0;
};
GUEST_OFFSET(ParseDecimalWideArg0, word_0, 0x0);


u32 parse_decimal_wide(gptr<ParseDecimalWideArg0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    if (s32(r2) <= 0) {
        return 0u;
    }
    u32 r12 = ~0x2fu;
    arg0->word_0 = 0;
    for (;;) {
        r2 -= 1u;
        if (s32(r2) < 0) {
            guest::cpu()->r[1] = r1;
            return 1u;
        }
        u32 r3 = *gptr<u16>(r1);
        if (r3 == 0) {
            break;
        }
        if (r3 - 0x30u >= 0xau) {
            guest::cpu()->r[1] = r1;
            return 0u;
        }
        r1 += 2u;
        *gptr<u32>(r0) = r3 + (r12 + *gptr<u32>(r0) * 0xau);
        guest::preempt();
    }
    guest::cpu()->r[1] = r1;
    return 1u;
}

}  // namespace d_005af748
GUEST_EXPORT_FRAMED(0x005af748, d_005af748::parse_decimal_wide, 0x10);  // pushes {r4} first, as the original

// f_005af7b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Compares two wide strings ignoring ASCII case; the difference of the first mismatching characters.
namespace d_005af7b4 {


u32 compare_wide_strings_ignore_case(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
L_5af7b4:;
    u32 r2_1 = *gptr<u16>(r0);
    u32 zf_1 = r2_1 == 0;
    if (!zf_1) {
        r3 = *gptr<u16>(r1);
        zf_1 = r3 == 0;
    }
    if (!zf_1) {
        if (r2_1 - 0x41u <= 0x19u) {
            r2_1 += 0x20u;
        }
        if (r3 - 0x41u <= 0x19u) {
            r3 += 0x20u;
        }
        r3 = uxth(r3);
        if (uxth(r2_1) == r3) {
            r0 += 2u;
            r1 += 2u;
            guest::preempt();
            goto L_5af7b4;
        }
    }
    u32 r0_1 = *gptr<u16>(r0);
    if (r0_1 - 0x41u <= 0x19u) {
        r0_1 += 0x20u;
    }
    u32 r0_2 = *gptr<u16>(r1);
    u32 r1_1 = r0_2 - 0x41u;
    if (r1_1 <= 0x19u) {
        r0_2 += 0x20u;
    }
    guest::cpu()->r[1] = r1_1;
    return uxth(r0_1) - uxth(r0_2);
}

}  // namespace d_005af7b4
GUEST_EXPORT(0x005af7b4, d_005af7b4::compare_wide_strings_ignore_case);

// f_005af8c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a CRC-16 context (building the shared table, polynomial 0xa001, the first time) and runs it over
// a buffer (arg 1, length arg 2).
namespace d_005af8c8 {

inline constexpr u32 vtable_imgdb__Crc16Context = 0x00907dbcu;
inline constexpr u32 global_00981eb1_address = 0x00981eb1u;
inline constexpr u32 crc16_context_address = 0x00af6e08u;

void imgdb__Crc16Context__Crc16Context(gptr<imgdb__Crc16Context> crc16_context, u32 r1, u32 r2) {
    u32 r3 = 0;
    u32 res_1 = 0;
    u32 r7 = 0u;
    u32 r9 = 1u;
    u32 r8 = global_00981eb1_address;
    crc16_context->vtable = vtable_imgdb__Crc16Context;
    crc16_context->byte_4 = u8(r7);
    crc16_context->half_6 = u16(r7);
    if (*gptr<u8>(r8) == 0) {
        u32 r10 = crc16_context_address;
        u32 i = 0u;
        u32 r6 = r9 + 0xa000u;
        do {
            r3 = i;
            u32 r4 = 4u;
            do {
                u32 r12_1 = (r3 & 1u) == 0 ? r3 >> 1 : r6 ^ r3 >> 1;
                r3 = (r12_1 & 1u) == 0 ? r12_1 >> 1 : r6 ^ r12_1 >> 1;
                r4 -= 1u;
                guest::preempt();
            } while (r4 != 0);
            u32 r12_2 = r10 + (i << 1);
            i += 1u;
            *gptr<u16>(r12_2) = u16(r3);
            guest::preempt();
        } while (i < 0x100u);
        *gptr<u8>(r8) = u8(r9);
    }
    r3 = crc16_context_address;
    crc16_context->half_6 = u16(r7);
    crc16_context->byte_4 = u8(r9);
    if (r2 != 0) {
        r1 -= 1u;
        if ((r2 & 1u) != 0) {
            u32 ea_1 = r1 + 1u;
            r1 = ea_1;
            r7 = gptr<u16>(r3)[u32(*gptr<u8>(ea_1))];
        }
        r2 >>= 1;
        if (r2 != 0) {
            do {
                u32 r12_3 = *gptr<u8>(r1 + 1u);
                u32 ea_3 = r1 + 2u;
                r1 = ea_3;
                res_1 = r2 - 1u;
                r2 = res_1;
                u32 r12_4 = u32(gptr<u16>(r3)[(r12_3 ^ r7) & 0xffu]) ^ r7 >> 8;
                r7 = u32(gptr<u16>(r3)[(u32(*gptr<u8>(ea_3)) ^ r12_4) & 0xffu]) ^ r12_4 >> 8;
                guest::preempt();
            } while (res_1 != 0);
        }
    }
    crc16_context->half_6 = u16(r7);
    guest::cpu()->r[1] = r1;
}

}  // namespace d_005af8c8
GUEST_EXPORT_FRAMED(0x005af8c8, d_005af8c8::imgdb__Crc16Context__Crc16Context, 0x7f0);  // pushes {r4, i, r6, r7, r8, r9, r10} first, as the original

// f_005afd20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores the writer's three words, its scale and its flag (+0x1c to +0x2c).
namespace d_005afd20 {

struct __attribute__((packed)) PictureWriter {
    u8 unknown_0[0x1c];  // (not used here)
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    float float_28;
    u8 byte_2c;
};
GUEST_OFFSET(PictureWriter, word_1c, 0x1c);
GUEST_OFFSET(PictureWriter, word_20, 0x20);
GUEST_OFFSET(PictureWriter, word_24, 0x24);
GUEST_OFFSET(PictureWriter, float_28, 0x28);
GUEST_OFFSET(PictureWriter, byte_2c, 0x2c);


void PictureWriter__set_params(gptr<PictureWriter> picture_writer, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r12_1 = *gptr<u32>(r13 + 4u);
    float S0_1 = std::bit_cast<float>(*gptr<u32>(r13));
    picture_writer->word_1c = r1;
    picture_writer->word_20 = r2;
    picture_writer->word_24 = r3;
    picture_writer->float_28 = S0_1;
    picture_writer->byte_2c = u8(r12_1);
    guest::cpu()->s[0] = S0_1;
}

}  // namespace d_005afd20
GUEST_EXPORT(0x005afd20, d_005afd20::PictureWriter__set_params);

// f_005afe90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears an 18-byte picture entry.
namespace d_005afe90 {

struct __attribute__((packed)) PictureEntry {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u16 half_10;
};
GUEST_OFFSET(PictureEntry, word_0, 0x0);
GUEST_OFFSET(PictureEntry, word_4, 0x4);
GUEST_OFFSET(PictureEntry, word_8, 0x8);
GUEST_OFFSET(PictureEntry, word_c, 0xc);
GUEST_OFFSET(PictureEntry, half_10, 0x10);


void PictureEntry__clear(gptr<PictureEntry> picture_entry) {
    picture_entry->word_0 = 0;
    picture_entry->word_4 = 0;
    picture_entry->word_8 = 0;
    picture_entry->word_c = 0;
    picture_entry->half_10 = 0;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_005afe90
GUEST_EXPORT(0x005afe90, d_005afe90::PictureEntry__clear);

// f_005aff24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Moves the directory cursor to the next entry, reading the next batch of 64 entries when needed; false at the end or
// on an error (reported unless quiet).
namespace d_005aff24 {

struct __attribute__((packed)) DirCursor {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
    u8 unknown_5[0x3];  // (not used here)
    u8 byte_8;
    u8 unknown_9[0x7];  // (not used here)
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
};
GUEST_OFFSET(DirCursor, byte_4, 0x4);
GUEST_OFFSET(DirCursor, byte_8, 0x8);
GUEST_OFFSET(DirCursor, word_10, 0x10);
GUEST_OFFSET(DirCursor, word_14, 0x14);
GUEST_OFFSET(DirCursor, word_18, 0x18);
GUEST_OFFSET(DirCursor, word_1c, 0x1c);
GUEST_OFFSET(DirCursor, word_20, 0x20);
GUEST_OFFSET(DirCursor, word_24, 0x24);

struct __attribute__((packed)) Local_005aff24_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005aff24_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_005aff24_ea_1, word_4, 0x4);

inline constexpr guest::Function<0x00347454, u32(u32)> call_virtual_1_if_present_00347454;
inline constexpr guest::Function<0x00347518, u32(u32, u32, u32, u32)> DataStore__read_into;
inline constexpr guest::Function<0x005aead8, u32(u32, u32)> check_fs_result;

struct __attribute__((packed)) DirCursorNextFrame {
    u32 word_0;
};
GUEST_OFFSET(DirCursorNextFrame, word_0, 0x0);
GUEST_SIZE(DirCursorNextFrame, 0x4);

u32 DirCursor__next(gptr<DirCursor> dir_cursor, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<DirCursorNextFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    if (dir_cursor->byte_4 != 0) {
        u32 r0_1 = dir_cursor->word_24;
        r1 = dir_cursor->word_20;
        if (s32(r1) > s32(r0_1)) {
            u32 r1_1 = dir_cursor->word_18;
            u32 r0_2 = dir_cursor->word_1c + 1u;
            dir_cursor->word_1c = r0_2;
            dir_cursor->word_24 = r0_1 + 1u;
            if (s32(r1_1) <= s32(r0_2)) {
                dir_cursor->word_1c = 0;
                u32 r0_4 = DataStore__read_into(frame.at(0).addr(), dir_cursor->word_10, dir_cursor->word_14, 0x40u);
                if (s32(r0_4) >= 0) {
                    dir_cursor->word_18 = frame->word_0;
                } else {
                    call_virtual_1_if_present_00347454(dir_cursor->word_10);
                    r1 = guest::cpu()->r[1];
                    dir_cursor->word_10 = 0;
                    u32 r0_6 = dir_cursor->byte_8;
                    dir_cursor->byte_4 = 0;
                    if (r0_6 == 0) {
                        check_fs_result(r0_4, r1);
                        r1 = guest::cpu()->r[1];
                    }
                    guest::cpu()->r[1] = r1;
                    return 0u;
                }
            }
            gptr<Local_005aff24_ea_1> ea_1 = gptr<Local_005aff24_ea_1>(dir_cursor.addr() + 0x18u);
            r1 = ea_1->word_4;
            if (s32(r1) < s32(ea_1->word_0)) {
                guest::cpu()->r[1] = r1;
                return 1u;
            }
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_005aff24
GUEST_EXPORT_FRAMED(0x005aff24, d_005aff24::DirCursor__next, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original
