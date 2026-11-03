// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_002a2850: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Detaches the layout at +0x24 from the layout system.
namespace d_002a2850 {

inline constexpr guest::Function<0x001323bc, u32(u32)> read_global_975c20;
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32)> LayoutRenderer__draw_on_screen;

u32 detach_layout_24(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = read_global_975c20(r0);
    frame.release();
    return LayoutRenderer__draw_on_screen(r0_1, r0 + 0x24u, 0u);  // (from the original)
}

}  // namespace d_002a2850
GUEST_EXPORT(0x002a2850, d_002a2850::detach_layout_24);

// f_002a2ad0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Releases the layout at +0x24.
namespace d_002a2ad0 {

inline constexpr guest::Function<0x001323b4, u32(u32, u32, u32, u32)> layout_at_10_virtual_8;

u32 release_layout_24(u32 r0) {
    return layout_at_10_virtual_8(r0 + 0x24u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_002a2ad0
GUEST_EXPORT(0x002a2ad0, d_002a2ad0::release_layout_24);

// f_002a324c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores the id with its priority in the first free of the 10 entries (counting it), else replaces the lowest-priority
// one.
namespace d_002a324c {

struct __attribute__((packed)) PriorityList10 {
    u8 unknown_0[0x60];  // (not used here)
    u32 word_60;
};
GUEST_OFFSET(PriorityList10, word_60, 0x60);


u32 PriorityList10__add(gptr<PriorityList10> priority_list10, u32 r1, u32 r2) {
    u32 r5 = 0xffu;  // (from the original)
    u32 r12 = ~0u;
    u32 r3 = 0u;
    do {
        u32 r4_1 = priority_list10.addr() + 0x10u;  // (from the original)
        if (r3 < 0xau) {  // (from the original)
            r4_1 += (r3 << 3);
        }
        if (*gptr<u32>(r4_1) + 1u == 0) {
            u32 r12_1 = priority_list10.addr() + 0x10u;  // (from the original)
            if (r3 < 0xau) {  // (from the original)
                r12_1 += (r3 << 3);
            }
            *gptr<u32>(r12_1) = r1;
            u32 r1_1 = priority_list10.addr() + 0x10u;  // (from the original)
            if (r3 < 0xau) {  // (from the original)
                r1_1 += (r3 << 3);
            }
            *gptr<u8>(r1_1 + 4u) = u8(r2);
            u32 r1_2 = priority_list10->word_60 + 1u;
            priority_list10->word_60 = r1_2;
            guest::cpu()->r[1] = r1_2;
            return priority_list10.addr();
        }
        u32 r4_2 = priority_list10.addr() + 0x10u;  // (from the original)
        if (r3 < 0xau) {  // (from the original)
            r4_2 += (r3 << 3);
        }
        if (*gptr<u8>(r4_2 + 4u) < r5) {
            u32 r4_3 = priority_list10.addr() + 0x10u;  // (from the original)
            if (r3 < 0xau) {  // (from the original)
                r4_3 += (r3 << 3);
            }
            r12 = r3;
            r5 = *gptr<u8>(r4_3 + 4u);
        }
        r3 += 1u;
        guest::preempt();
    } while (s32(r3) < 0xa);  // (from the original)
    u32 r3_1 = priority_list10.addr() + 0x10u;  // (from the original)
    u32 r0_1 = priority_list10.addr() + 0x10u;  // (from the original)
    if (r12 < 0xau) {  // (from the original)
        r3_1 += (r12 << 3);
        r0_1 += (r12 << 3);
    }
    *gptr<u32>(r3_1) = r1;
    *gptr<u8>(r0_1 + 4u) = u8(r2);
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_002a324c
GUEST_EXPORT_FRAMED(0x002a324c, d_002a324c::PriorityList10__add, 0x70);  // pushes {r4, r5, r6} first, as the original

// f_002a3e08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Plays the song of the index through the sound system with its sound data.
namespace d_002a3e08 {

struct __attribute__((packed)) Object_002a3e08_0 {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Object_002a3e08_0, word_14, 0x14);
GUEST_OFFSET(Object_002a3e08_0, word_18, 0x18);
GUEST_OFFSET(Object_002a3e08_0, word_1c, 0x1c);

struct __attribute__((packed)) Local_002a3e08_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002a3e08_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_002a3e08_ea_3, word_4, 0x4);

struct __attribute__((packed)) Local_002a3e08_ea_8 {
    u8 byte_0;
    u8 unknown_1[0x3];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_002a3e08_ea_8, byte_0, 0x0);
GUEST_OFFSET(Local_002a3e08_ea_8, word_4, 0x4);
GUEST_OFFSET(Local_002a3e08_ea_8, word_8, 0x8);

struct __attribute__((packed)) Local_002a3e08_r1_3 {
    u8 unknown_0[0x98];  // (not used here)
    u32 word_98;
    u8 byte_9c;
    u8 unknown_9d[0x7];  // (not used here)
    u32 word_a4;
};
GUEST_OFFSET(Local_002a3e08_r1_3, word_98, 0x98);
GUEST_OFFSET(Local_002a3e08_r1_3, byte_9c, 0x9c);
GUEST_OFFSET(Local_002a3e08_r1_3, word_a4, 0xa4);

inline constexpr u32 sound_kk_info_instance_address = 0x0094d004u;
inline constexpr u32 sound_system_address = 0x0094d080u;
inline guest::global<u32, 0x0094d004> sound_kk_info_instance;
inline guest::global<u32, 0x0094d080> sound_system;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x004c5104, u32(u32, u32)> SoundParams__set_value;
inline constexpr guest::Function<0x006b4170, u32(u32, u32, u32)> SoundSystem__start_object_sound;
inline constexpr guest::Function<0x006b41a4, u32(u32, u32, u32, u32)> SoundSystem__start_object_sound_with;
inline constexpr guest::Function<0x0070eb14, u32(u32, u32, u32, u32)> table_83a980_word_8;

struct __attribute__((packed)) Frame_002a3e08 {
    u32 word_0;
    u8 byte_4;
    u8 unknown_5[0x3];  // (not read or written by name)
    u32 word_8;
    u8 unknown_c[0xc];  // (not read or written by name)
    u32 word_18;
    u8 unknown_1c[0x8];  // (not read or written by name)
    u32 word_24;
    u32 word_28;
    u32 word_2c;
    u32 word_30;
    u32 word_34;
    u32 word_38;
    u32 word_3c;
    u32 word_40;
    u32 word_44;
    u16 half_48;
    u16 half_4a;
    u8 unknown_4c[0x5c];  // (not read or written by name)
};
GUEST_OFFSET(Frame_002a3e08, word_0, 0x0);
GUEST_OFFSET(Frame_002a3e08, byte_4, 0x4);
GUEST_OFFSET(Frame_002a3e08, word_8, 0x8);
GUEST_OFFSET(Frame_002a3e08, word_18, 0x18);
GUEST_OFFSET(Frame_002a3e08, word_24, 0x24);
GUEST_OFFSET(Frame_002a3e08, word_28, 0x28);
GUEST_OFFSET(Frame_002a3e08, word_2c, 0x2c);
GUEST_OFFSET(Frame_002a3e08, word_30, 0x30);
GUEST_OFFSET(Frame_002a3e08, word_34, 0x34);
GUEST_OFFSET(Frame_002a3e08, word_38, 0x38);
GUEST_OFFSET(Frame_002a3e08, word_3c, 0x3c);
GUEST_OFFSET(Frame_002a3e08, word_40, 0x40);
GUEST_OFFSET(Frame_002a3e08, word_44, 0x44);
GUEST_OFFSET(Frame_002a3e08, half_48, 0x48);
GUEST_OFFSET(Frame_002a3e08, half_4a, 0x4a);
GUEST_SIZE(Frame_002a3e08, 0xa8);

u32 SoundKKInfo__play_song(gptr<Object_002a3e08_0> arg0, u32 r1, u32 r2, u32 r3, float S0) {
    guest::StackFrameOf<Frame_002a3e08> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r0_7 = 0;
    u32 r1_5 = 0;
    float S0_3 = 0;
    u32 r2_2 = 0;
    u32 r0_8 = 0;
    u32 r1_6 = 0;
    if (r1 != 0) {
        u32 r1_1 = arg0->word_14;
        u32 r0_1 = *sound_kk_info_instance;
        u32 r0_2 = table_83a980_word_8(r0_1, r1_1, r2, r3);
        u32 r7_1 = ~0u;
        if (r0_2 > r1) {
            frame->word_0 = 0;
            frame->word_18 = 0;
            gptr<Local_002a3e08_ea_3> ea_3 = gptr<Local_002a3e08_ea_3>(frame.at(0x1c).addr());  // (from the original)
            ea_3->word_0 = 0;
            ea_3->word_4 = r7_1;
            frame->word_34 = 0;
            frame->word_24 = r7_1;
            frame->word_28 = r7_1;
            frame->word_30 = 0;
            frame->word_2c = r7_1;
            frame->half_48 = 0;
            frame->word_38 = 0;
            frame->word_3c = 0;
            frame->word_40 = 0;
            frame->word_44 = 0;
            frame->half_4a = 0;
            u32 r0_4 = for_each_element(frame.at(0x4c).addr(), 0x4bfb50u, 0xdu, 4u);  // (from the original)
            u32 r0_5 = r0_4 - 4u;
            float S0_2 = 1.0f;
            *gptr<u32>(r0_5 + 0x38u) = std::bit_cast<u32>(S0_2);  // (from the original)
            *gptr<u8>(r0_5 + 0x3cu) = 0x7f;  // (from the original)
            *gptr<u8>(r0_5 + 0x3fu) = 0;  // (from the original)
            *gptr<u32>(r0_5 + 0x40u) = r7_1;  // (from the original)
            gptr<Local_002a3e08_r1_3> r1_3 = gptr<Local_002a3e08_r1_3>(r0_5 - 0x48u);  // (from the original)
            *gptr<u16>(r0_5 + 0x3du) = 0;  // (from the original)
            gptr<Local_002a3e08_ea_8> ea_8 = gptr<Local_002a3e08_ea_8>(r0_5 + 0x44u);  // (from the original)
            ea_8->byte_0 = 0;
            ea_8->word_4 = 0;
            ea_8->word_8 = 0;
            r1_3->word_98 = 0;
            r1_3->byte_9c = 0;
            r1_3->word_a4 = 0;
            frame->word_0 = 1;
            frame->byte_4 = 1;
            frame->word_8 = r1;
            u32 r2_1 = arg0->word_18;
            u32 r0_6 = *sound_system;
            guest::cpu()->s[0] = S0_2;
            r0_7 = SoundSystem__start_object_sound_with(r0_6, r0 + 0x1cu, r2_1, frame.at(0).addr());  // (from the original)
            r1_5 = guest::cpu()->r[1];
            S0_3 = guest::cpu()->s[0];
            goto L_2a3f20;
        }
        arg0->word_14 = r7_1;
        arg0->word_18 = r7_1;
        return 0u;
    }
    r2_2 = arg0->word_18;
    r0_8 = *sound_system;
    r1_6 = r0 + 0x1cu;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0_7 = SoundSystem__start_object_sound(r0_8, r1_6, r2_2);
    r1_5 = guest::cpu()->r[1];
    S0_3 = guest::cpu()->s[0];
L_2a3f20:;
    if (r0_7 != 0) {
        u32 r0_9 = arg0->word_1c;
        r1_5 = 0u;
        S0_3 = 0.4f;
        if (r0_9 != 0) {
            guest::cpu()->s[0] = S0_3;
            SoundParams__set_value(r0_9, r1_5);
            r1_5 = guest::cpu()->r[1];
            S0_3 = guest::cpu()->s[0];
        }
    }
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->s[0] = S0_3;
    return r0_7;
}

}  // namespace d_002a3e08
GUEST_EXPORT_FRAMED(0x002a3e08, d_002a3e08::SoundKKInfo__play_song, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_002a4abc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs the room music player: its two buffers (0x262 and 0x14 entries), ids at -1 and cleared fades.
namespace d_002a4abc {

struct __attribute__((packed)) SoundRoomMusicPlayer {
    u8 unknown_0[0x10];  // (not used here)
    u8 byte_10;
    u8 unknown_11[0x3];  // (not used here)
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u32 word_28;
    u32 word_2c;
    u32 word_30;
    u8 unknown_34[0x5cc];  // (not used here)
    u32 word_600;
    u32 word_604;
    u32 word_608;
    u32 word_60c;
    u8 unknown_610[0x1c98];  // (not used here)
    u16 half_22a8;
    u16 half_22aa;
    u16 half_22ac;
    u16 half_22ae;
    u16 half_22b0;
    u16 half_22b2;
    u32 word_22b4;
    u32 word_22b8;
    u32 word_22bc;
    u32 word_22c0;
    u8 unknown_22c4[0xf0];  // (not used here)
    float float_23b4;
    float float_23b8;
    float float_23bc;
    u8 byte_23c0;
    u8 byte_23c1;
    u8 unknown_23c2[0x2];  // (not used here)
    u32 word_23c4;
};
GUEST_OFFSET(SoundRoomMusicPlayer, byte_10, 0x10);
GUEST_OFFSET(SoundRoomMusicPlayer, word_14, 0x14);
GUEST_OFFSET(SoundRoomMusicPlayer, word_18, 0x18);
GUEST_OFFSET(SoundRoomMusicPlayer, word_1c, 0x1c);
GUEST_OFFSET(SoundRoomMusicPlayer, word_20, 0x20);
GUEST_OFFSET(SoundRoomMusicPlayer, word_24, 0x24);
GUEST_OFFSET(SoundRoomMusicPlayer, word_28, 0x28);
GUEST_OFFSET(SoundRoomMusicPlayer, word_2c, 0x2c);
GUEST_OFFSET(SoundRoomMusicPlayer, word_30, 0x30);
GUEST_OFFSET(SoundRoomMusicPlayer, word_600, 0x600);
GUEST_OFFSET(SoundRoomMusicPlayer, word_604, 0x604);
GUEST_OFFSET(SoundRoomMusicPlayer, word_608, 0x608);
GUEST_OFFSET(SoundRoomMusicPlayer, word_60c, 0x60c);
GUEST_OFFSET(SoundRoomMusicPlayer, half_22a8, 0x22a8);
GUEST_OFFSET(SoundRoomMusicPlayer, half_22aa, 0x22aa);
GUEST_OFFSET(SoundRoomMusicPlayer, half_22ac, 0x22ac);
GUEST_OFFSET(SoundRoomMusicPlayer, half_22ae, 0x22ae);
GUEST_OFFSET(SoundRoomMusicPlayer, half_22b0, 0x22b0);
GUEST_OFFSET(SoundRoomMusicPlayer, half_22b2, 0x22b2);
GUEST_OFFSET(SoundRoomMusicPlayer, word_22b4, 0x22b4);
GUEST_OFFSET(SoundRoomMusicPlayer, word_22b8, 0x22b8);
GUEST_OFFSET(SoundRoomMusicPlayer, word_22bc, 0x22bc);
GUEST_OFFSET(SoundRoomMusicPlayer, word_22c0, 0x22c0);
GUEST_OFFSET(SoundRoomMusicPlayer, float_23b4, 0x23b4);
GUEST_OFFSET(SoundRoomMusicPlayer, float_23b8, 0x23b8);
GUEST_OFFSET(SoundRoomMusicPlayer, float_23bc, 0x23bc);
GUEST_OFFSET(SoundRoomMusicPlayer, byte_23c0, 0x23c0);
GUEST_OFFSET(SoundRoomMusicPlayer, byte_23c1, 0x23c1);
GUEST_OFFSET(SoundRoomMusicPlayer, word_23c4, 0x23c4);


u32 SoundRoomMusicPlayer__construct(gptr<SoundRoomMusicPlayer> sound_room_music_player) {
    u32 r3_1 = ~0u;
    sound_room_music_player->byte_10 = 0;
    sound_room_music_player->word_14 = r3_1;
    sound_room_music_player->word_1c = 0;
    sound_room_music_player->word_20 = 0x78;  // (from the original)
    sound_room_music_player->word_18 = r3_1;
    sound_room_music_player->word_24 = 0;
    sound_room_music_player->word_28 = 0;
    sound_room_music_player->word_2c = 0;
    sound_room_music_player->word_30 = 0;
    u32 ea_1 = sound_room_music_player.addr() + 0x600u;  // (from the original)
    sound_room_music_player->word_600 = 0;
    sound_room_music_player->word_604 = 0;
    sound_room_music_player->word_608 = 0;
    sound_room_music_player->word_60c = 0;
    if (ea_1 + 0x10u != 0) {  // (from the original)
        sound_room_music_player->word_600 = ea_1 + 0x10u;  // (from the original)
        sound_room_music_player->word_604 = 0x262;  // (from the original)
    }
    sound_room_music_player->half_22a8 = u16(r3_1);
    sound_room_music_player->half_22aa = u16(r3_1);
    sound_room_music_player->half_22ac = 0;
    sound_room_music_player->half_22ae = u16(r3_1);
    sound_room_music_player->half_22b0 = u16(r3_1);
    sound_room_music_player->half_22b2 = 4;
    sound_room_music_player->word_22b4 = 0;
    sound_room_music_player->word_22b8 = 0;
    sound_room_music_player->word_22bc = 0;
    sound_room_music_player->word_22c0 = 0;
    if (ea_1 + 0x1cc4u != 0) {  // (from the original)
        sound_room_music_player->word_22b4 = ea_1 + 0x1cc4u;  // (from the original)
        sound_room_music_player->word_22b8 = 0x14;  // (from the original)
    }
    float S0_1 = 0.0f;
    sound_room_music_player->float_23b4 = S0_1;
    sound_room_music_player->float_23b8 = S0_1;
    sound_room_music_player->float_23bc = S0_1;
    sound_room_music_player->byte_23c0 = 0;
    sound_room_music_player->byte_23c1 = 1;
    sound_room_music_player->word_23c4 = 0;
    guest::cpu()->r[1] = 0u;
    guest::cpu()->s[0] = S0_1;
    return ea_1 - 0x600u;  // (from the original)
}

}  // namespace d_002a4abc
GUEST_EXPORT(0x002a4abc, d_002a4abc::SoundRoomMusicPlayer__construct);

// f_002a4b84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Points the object at the room music player.
namespace d_002a4b84 {

struct __attribute__((packed)) Object_002a4b84_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_002a4b84_0, word_0, 0x0);

inline constexpr u32 sound_room_music_player_instance_address = 0x0094d548u;
inline guest::global<u32, 0x0094d548> sound_room_music_player_instance;

void bind_room_music_player(gptr<Object_002a4b84_0> arg0) {
    u32 r1_1 = *sound_room_music_player_instance;
    arg0->word_0 = r1_1;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_002a4b84
GUEST_EXPORT(0x002a4b84, d_002a4b84::bind_room_music_player);

// f_002a4b98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Looks the sequence up and registers its two tracks (groups 0x20 and 0x21) with the parser; marks it loaded.
namespace d_002a4b98 {

struct __attribute__((packed)) SoundSeqParser {
    u8 unknown_0[0x534];  // (not used here)
    u8 byte_534;
};
GUEST_OFFSET(SoundSeqParser, byte_534, 0x534);

inline constexpr u32 sound_seq_parser_instance_address = 0x0094d560u;
inline guest::global<u32, 0x0094d560> sound_seq_parser_instance;
inline constexpr guest::Function<0x002783c4, u32(u32, u32, u32, u32)> SoundBank__find_sound;
inline constexpr guest::Function<0x00278484, u32(u32, u32, u32, u32)> SoundBank__register_sound;

struct __attribute__((packed)) Frame_002a4b98 {
    u32 word_0;
};
GUEST_OFFSET(Frame_002a4b98, word_0, 0x0);
GUEST_SIZE(Frame_002a4b98, 0x4);

void SoundSeqParser__register_sounds(gptr<SoundSeqParser> sound_seq_parser, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_002a4b98> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 sound_bank = *sound_seq_parser_instance;
    if (sound_bank != 0) {
        SoundBank__find_sound(sound_bank, r1, r2, r3);
        frame->word_0 = 0x46;  // (from the original)
        SoundBank__register_sound(sound_bank, sound_seq_parser.addr() + 0xd4u, 0xfu, 0x20u);  // (from the original)
        frame->word_0 = 0x46;  // (from the original)
        SoundBank__register_sound(sound_bank, sound_seq_parser.addr() + 0x304u, 0xfu, 0x21u);  // (from the original)
        r1 = guest::cpu()->r[1];
        sound_seq_parser->byte_534 = 1;
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_002a4b98
GUEST_EXPORT_FRAMED(0x002a4b98, d_002a4b98::SoundSeqParser__register_sounds, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_002a4bfc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Counts a beat and, once synced, starts the 120-frame hold.
namespace d_002a4bfc {

struct __attribute__((packed)) BeatTracker {
    u8 unknown_0[0x53c];  // (not used here)
    u32 word_53c;
    u32 word_540;
    u8 unknown_544[0x1];  // (not used here)
    u8 byte_545;
    u8 unknown_546[0x2];  // (not used here)
    u32 word_548;
};
GUEST_OFFSET(BeatTracker, word_53c, 0x53c);
GUEST_OFFSET(BeatTracker, word_540, 0x540);
GUEST_OFFSET(BeatTracker, byte_545, 0x545);
GUEST_OFFSET(BeatTracker, word_548, 0x548);


void BeatTracker__on_beat(gptr<BeatTracker> beat_tracker) {
    beat_tracker->word_540 = 0;
    beat_tracker->word_53c = beat_tracker->word_53c + 1u;
    if (beat_tracker->byte_545 == 1u && beat_tracker->word_548 == 0) {
        beat_tracker->word_548 = 0x78;  // (from the original)
    } else {
        return;
    }
}

}  // namespace d_002a4bfc
GUEST_EXPORT(0x002a4bfc, d_002a4bfc::BeatTracker__on_beat);

// f_002a4c30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Frees slot `index` (below 48) and uncounts it.
namespace d_002a4c30 {

struct __attribute__((packed)) SlotTable48 {
    u8 unknown_0[0xc4];  // (not used here)
    u32 word_c4;
};
GUEST_OFFSET(SlotTable48, word_c4, 0xc4);

struct __attribute__((packed)) Local_002a4c30_r1_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Local_002a4c30_r1_1, word_4, 0x4);


void SlotTable48__remove(gptr<SlotTable48> slot_table48, u32 r1) {
    if (r1 >= 0x30u) {  // (from the original)
        return;
    }
    gptr<Local_002a4c30_r1_1> r1_1 = gptr<Local_002a4c30_r1_1>(slot_table48.addr() + (r1 << 2));
    if (r1_1->word_4 == 0) {
        return;
    }
    r1_1->word_4 = 0;
    slot_table48->word_c4 = slot_table48->word_c4 - 1u;
}

}  // namespace d_002a4c30
GUEST_EXPORT(0x002a4c30, d_002a4c30::SlotTable48__remove);

// f_002a4c60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Updates the beat tracker's timers: syncs after steady beats, drops sync after silence, and counts the hold down.
namespace d_002a4c60 {

struct __attribute__((packed)) BeatTracker {
    u8 unknown_0[0x538];  // (not used here)
    u32 word_538;
    u32 word_53c;
    u32 word_540;
    u8 byte_544;
    u8 byte_545;
    u8 unknown_546[0x2];  // (not used here)
    u32 word_548;
};
GUEST_OFFSET(BeatTracker, word_538, 0x538);
GUEST_OFFSET(BeatTracker, word_53c, 0x53c);
GUEST_OFFSET(BeatTracker, word_540, 0x540);
GUEST_OFFSET(BeatTracker, byte_544, 0x544);
GUEST_OFFSET(BeatTracker, byte_545, 0x545);
GUEST_OFFSET(BeatTracker, word_548, 0x548);


void BeatTracker__update(gptr<BeatTracker> beat_tracker) {
    u32 r2_1 = beat_tracker->word_540 + 1u;
    beat_tracker->word_540 = r2_1;
    u32 r5_1 = beat_tracker->word_538 + 1u;
    beat_tracker->word_538 = r5_1;
    if (beat_tracker->byte_544 != 0) {
        if (r2_1 >= 0x78u) {  // (from the original)
            beat_tracker->byte_544 = 0;
            beat_tracker->byte_545 = 0;
            beat_tracker->word_548 = 0;
            beat_tracker->word_538 = 0;
            beat_tracker->word_53c = 0;
        } else if (r2_1 >= 0x1eu) {  // (from the original)
            beat_tracker->byte_545 = 1;
        }
    } else if (r2_1 >= 0x5au) {  // (from the original)
        beat_tracker->word_538 = 0;
        beat_tracker->word_53c = 0;
    } else if (r5_1 >= 0x78u && r2_1 < 0x1eu) {  // (from the original)
        beat_tracker->byte_544 = 1;
        beat_tracker->word_540 = 0;
    }
    u32 r2_2 = *gptr<u8>((beat_tracker.addr() + 0x500u) + 0x45u);  // (from the original)
    u32 zf_1 = r2_2 == 0;
    if (!zf_1) {
        r2_2 = beat_tracker->word_548;
        zf_1 = r2_2 == 0;
    }
    if (!zf_1) {
        u32 res_1 = r2_2 - 1u;
        *gptr<u32>(beat_tracker.addr() + 0x548u) = res_1;  // (from the original)
        if (res_1 == 0) {
            beat_tracker->byte_545 = 0;
        }
    }
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_002a4c60
GUEST_EXPORT_FRAMED(0x002a4c60, d_002a4c60::BeatTracker__update, 0x70);  // pushes {r4, r5, r6} first, as the original

// f_002a502c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores the object in the first free of the 48 slots and counts it; 0x31 when full.
namespace d_002a502c {

struct __attribute__((packed)) SlotTable48 {
    u8 unknown_0[0xc4];  // (not used here)
    u32 word_c4;
};
GUEST_OFFSET(SlotTable48, word_c4, 0xc4);


u32 SlotTable48__add(gptr<SlotTable48> slot_table48, u32 r1) {
    u32 r0 = slot_table48.addr();
    u32 r2 = r0;
    r0 = slot_table48->word_c4;
    u32 zf_1 = r0 == 0x30u;  // (from the original)
    u32 cf_1 = r0 >= 0x30u;  // (from the original)
    if (r0 > 0x30u) {  // (from the original)
        r0 = 0x31u;  // (from the original)
    }
    if (!cf_1 || zf_1) {
        r0 = 0u;
    }
    if (cf_1 && !zf_1) {
        return r0;
    }
    do {
        if (*gptr<u32>(r2 + (r0 << 2) + 4u) == 0) {
            *gptr<u32>(r2 + (r0 << 2) + 4u) = r1;
            u32 r1_1 = *gptr<u32>(r2 + 0xc4u) + 1u;  // (from the original)
            *gptr<u32>(r2 + 0xc4u) = r1_1;  // (from the original)
            guest::cpu()->r[1] = r1_1;
            return r0;
        }
        r0 += 1u;
        guest::preempt();
    } while (r0 < 0x30u);  // (from the original)
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_002a502c
GUEST_EXPORT(0x002a502c, d_002a502c::SlotTable48__add);

// f_002a5080: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Zeroes the slot table, its 48 slots and the beat tracker.
namespace d_002a5080 {

struct __attribute__((packed)) SlotTable48 {
    u32 word_0;
    u8 unknown_4[0xc0];  // (not used here)
    u32 word_c4;
    u32 word_c8;
    u16 half_cc;
    u16 half_ce;
    u16 half_d0;
    u8 byte_d2;
    u8 unknown_d3[0x461];  // (not used here)
    u8 byte_534;
    u8 unknown_535[0x3];  // (not used here)
    u32 word_538;
    u32 word_53c;
    u32 word_540;
    u8 byte_544;
    u8 byte_545;
    u8 unknown_546[0x2];  // (not used here)
    u32 word_548;
    u16 half_54c;
    u16 half_54e;
};
GUEST_OFFSET(SlotTable48, word_0, 0x0);
GUEST_OFFSET(SlotTable48, word_c4, 0xc4);
GUEST_OFFSET(SlotTable48, word_c8, 0xc8);
GUEST_OFFSET(SlotTable48, half_cc, 0xcc);
GUEST_OFFSET(SlotTable48, half_ce, 0xce);
GUEST_OFFSET(SlotTable48, half_d0, 0xd0);
GUEST_OFFSET(SlotTable48, byte_d2, 0xd2);
GUEST_OFFSET(SlotTable48, byte_534, 0x534);
GUEST_OFFSET(SlotTable48, word_538, 0x538);
GUEST_OFFSET(SlotTable48, word_53c, 0x53c);
GUEST_OFFSET(SlotTable48, word_540, 0x540);
GUEST_OFFSET(SlotTable48, byte_544, 0x544);
GUEST_OFFSET(SlotTable48, byte_545, 0x545);
GUEST_OFFSET(SlotTable48, word_548, 0x548);
GUEST_OFFSET(SlotTable48, half_54c, 0x54c);
GUEST_OFFSET(SlotTable48, half_54e, 0x54e);


void SlotTable48__construct(gptr<SlotTable48> slot_table48) {
    u32 r0 = slot_table48.addr();
    u32 r1 = 0u;
    slot_table48->word_0 = r1;
    slot_table48->word_c4 = r1;
    slot_table48->word_c8 = r1;
    slot_table48->half_cc = u16(r1);
    slot_table48->half_ce = 1;
    slot_table48->half_d0 = u16(r1);
    slot_table48->byte_d2 = u8(r1);
    slot_table48->byte_534 = u8(r1);
    slot_table48->word_538 = r1;
    slot_table48->word_53c = r1;
    slot_table48->word_540 = r1;
    slot_table48->byte_544 = u8(r1);
    slot_table48->byte_545 = u8(r1);
    slot_table48->word_548 = r1;
    slot_table48->half_54c = u16(r1);
    u32 r3 = 0u;
    slot_table48->half_54e = u16(r1);
    u32 r2 = r3;
    do {
        u32 r3_1 = r3 + 1u;
        r2 += 2u;
        *gptr<u32>((r0 + (r3 << 2)) + 4u) = r1;
        r3 = r3_1 + 1u;
        *gptr<u32>((r0 + (r3_1 << 2)) + 4u) = r1;
        guest::preempt();
    } while (r2 < 0x30u);  // (from the original)
}

}  // namespace d_002a5080
GUEST_EXPORT_FRAMED(0x002a5080, d_002a5080::SlotTable48__construct, 0x10);  // pushes {r4} first, as the original

// f_002a5fa8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the owner word when it is not set yet.
namespace d_002a5fa8 {

struct __attribute__((packed)) Object_002a5fa8_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_002a5fa8_0, word_0, 0x0);


void set_owner_once(gptr<Object_002a5fa8_0> arg0, u32 r1) {
    if (arg0->word_0 == 0) {
        arg0->word_0 = r1;
    }
}

}  // namespace d_002a5fa8
GUEST_EXPORT(0x002a5fa8, d_002a5fa8::set_owner_once);

// f_002a6594: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the owner word.
namespace d_002a6594 {

struct __attribute__((packed)) Object_002a6594_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_002a6594_0, word_0, 0x0);


void clear_owner(gptr<Object_002a6594_0> arg0) {
    u32 r1_1 = arg0->word_0;
    if (r1_1 != 0) {
        r1_1 = 0u;
        arg0->word_0 = r1_1;
    }
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_002a6594
GUEST_EXPORT(0x002a6594, d_002a6594::clear_owner);

// f_002a65d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Zeroes the fade state with a step of 1.
namespace d_002a65d0 {

struct __attribute__((packed)) FadeState {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
    u8 unknown_9[0x3];  // (not used here)
    u32 word_c;
    u8 byte_10;
    u8 byte_11;
    u8 unknown_12[0x2];  // (not used here)
    float float_14;
};
GUEST_OFFSET(FadeState, word_0, 0x0);
GUEST_OFFSET(FadeState, word_4, 0x4);
GUEST_OFFSET(FadeState, byte_8, 0x8);
GUEST_OFFSET(FadeState, word_c, 0xc);
GUEST_OFFSET(FadeState, byte_10, 0x10);
GUEST_OFFSET(FadeState, byte_11, 0x11);
GUEST_OFFSET(FadeState, float_14, 0x14);


void FadeState__construct(gptr<FadeState> fade_state) {
    fade_state->word_0 = 0;
    fade_state->word_4 = 0;
    fade_state->byte_8 = 0;
    fade_state->word_c = 1;
    float S0_1 = 0.0f;
    fade_state->byte_10 = 0;
    fade_state->byte_11 = 0;
    fade_state->float_14 = S0_1;
}

}  // namespace d_002a65d0
GUEST_EXPORT(0x002a65d0, d_002a65d0::FadeState__construct);

// f_002a661c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the 10 daily counter entries (+0x1418, 4 bytes each).
namespace d_002a661c {

struct __attribute__((packed)) DailyCounters {
    u8 unknown_0[0x1418];  // (not used here)
    u16 half_1418;
    u8 byte_141a;
    u8 byte_141b;
    u16 half_141c;
    u8 byte_141e;
    u8 byte_141f;
    u16 half_1420;
    u8 byte_1422;
    u8 byte_1423;
    u16 half_1424;
    u8 byte_1426;
    u8 byte_1427;
    u16 half_1428;
    u8 byte_142a;
    u8 byte_142b;
    u16 half_142c;
    u8 byte_142e;
    u8 byte_142f;
    u16 half_1430;
    u8 byte_1432;
    u8 byte_1433;
    u16 half_1434;
    u8 byte_1436;
    u8 byte_1437;
    u16 half_1438;
    u8 byte_143a;
    u8 byte_143b;
    u16 half_143c;
    u8 byte_143e;
    u8 byte_143f;
};
GUEST_OFFSET(DailyCounters, half_1418, 0x1418);
GUEST_OFFSET(DailyCounters, byte_141a, 0x141a);
GUEST_OFFSET(DailyCounters, byte_141b, 0x141b);
GUEST_OFFSET(DailyCounters, half_141c, 0x141c);
GUEST_OFFSET(DailyCounters, byte_141e, 0x141e);
GUEST_OFFSET(DailyCounters, byte_141f, 0x141f);
GUEST_OFFSET(DailyCounters, half_1420, 0x1420);
GUEST_OFFSET(DailyCounters, byte_1422, 0x1422);
GUEST_OFFSET(DailyCounters, byte_1423, 0x1423);
GUEST_OFFSET(DailyCounters, half_1424, 0x1424);
GUEST_OFFSET(DailyCounters, byte_1426, 0x1426);
GUEST_OFFSET(DailyCounters, byte_1427, 0x1427);
GUEST_OFFSET(DailyCounters, half_1428, 0x1428);
GUEST_OFFSET(DailyCounters, byte_142a, 0x142a);
GUEST_OFFSET(DailyCounters, byte_142b, 0x142b);
GUEST_OFFSET(DailyCounters, half_142c, 0x142c);
GUEST_OFFSET(DailyCounters, byte_142e, 0x142e);
GUEST_OFFSET(DailyCounters, byte_142f, 0x142f);
GUEST_OFFSET(DailyCounters, half_1430, 0x1430);
GUEST_OFFSET(DailyCounters, byte_1432, 0x1432);
GUEST_OFFSET(DailyCounters, byte_1433, 0x1433);
GUEST_OFFSET(DailyCounters, half_1434, 0x1434);
GUEST_OFFSET(DailyCounters, byte_1436, 0x1436);
GUEST_OFFSET(DailyCounters, byte_1437, 0x1437);
GUEST_OFFSET(DailyCounters, half_1438, 0x1438);
GUEST_OFFSET(DailyCounters, byte_143a, 0x143a);
GUEST_OFFSET(DailyCounters, byte_143b, 0x143b);
GUEST_OFFSET(DailyCounters, half_143c, 0x143c);
GUEST_OFFSET(DailyCounters, byte_143e, 0x143e);
GUEST_OFFSET(DailyCounters, byte_143f, 0x143f);


void DailyCounters__clear(gptr<DailyCounters> daily_counters) {
    daily_counters->half_1418 = 0;
    daily_counters->byte_141a = 0;
    daily_counters->byte_141b = 0;
    daily_counters->half_141c = 0;
    daily_counters->byte_141e = 0;
    daily_counters->byte_141f = 0;
    daily_counters->half_1420 = 0;
    daily_counters->byte_1422 = 0;
    daily_counters->byte_1423 = 0;
    daily_counters->half_1424 = 0;
    daily_counters->byte_1426 = 0;
    daily_counters->byte_1427 = 0;
    daily_counters->half_1428 = 0;
    daily_counters->byte_142a = 0;
    daily_counters->byte_142b = 0;
    daily_counters->half_142c = 0;
    daily_counters->byte_142e = 0;
    daily_counters->byte_142f = 0;
    daily_counters->half_1430 = 0;
    daily_counters->byte_1432 = 0;
    daily_counters->byte_1433 = 0;
    daily_counters->half_1434 = 0;
    daily_counters->byte_1436 = 0;
    daily_counters->byte_1437 = 0;
    daily_counters->half_1438 = 0;
    daily_counters->byte_143a = 0;
    daily_counters->byte_143b = 0;
    daily_counters->half_143c = 0;
    daily_counters->byte_143e = 0;
    daily_counters->byte_143f = 0;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_002a661c
GUEST_EXPORT(0x002a661c, d_002a661c::DailyCounters__clear);

// f_002a684c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Updates the daily counters for the new day.
namespace d_002a684c {

struct __attribute__((packed)) Local_002a684c_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002a684c_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_002a684c_ea_1, word_4, 0x4);

struct __attribute__((packed)) Now {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Now, word_0, 0x0);
GUEST_OFFSET(Now, word_4, 0x4);
GUEST_OFFSET(Now, word_8, 0x8);

struct __attribute__((packed)) Local_002a684c_r1_22 {
    u16 half_0;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Local_002a684c_r1_22, half_0, 0x0);
GUEST_OFFSET(Local_002a684c_r1_22, byte_2, 0x2);
GUEST_OFFSET(Local_002a684c_r1_22, byte_3, 0x3);

struct __attribute__((packed)) Local_002a684c_r1_23 {
    u16 half_0;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Local_002a684c_r1_23, half_0, 0x0);
GUEST_OFFSET(Local_002a684c_r1_23, byte_2, 0x2);
GUEST_OFFSET(Local_002a684c_r1_23, byte_3, 0x3);

inline guest::global<u32, 0x0088e544> global_0088e544;
inline guest::global<u32, 0x0088e548> global_0088e548;
inline guest::global<u32, 0x0088e54c> global_0088e54c;
inline guest::global<u32, 0x0088e550> global_0088e550;
inline guest::global<u32, 0x0088e554> global_0088e554;
inline guest::global<u32, 0x0088e558> global_0088e558;
inline guest::global<u32, 0x0088e55c> global_0088e55c;
inline guest::global<u32, 0x0088e560> global_0088e560;
inline guest::global<u32, 0x0088e564> global_0088e564;
inline guest::global<u32, 0x0088e568> global_0088e568;
inline guest::global<u32, 0x0088e56c> global_0088e56c;
inline guest::global<u32, 0x0088e570> global_0088e570;
inline guest::global<u32, 0x0088e574> global_0088e574;
inline guest::global<u32, 0x0088e578> global_0088e578;
inline guest::global<u32, 0x0088e57c> global_0088e57c;
inline guest::global<u32, 0x0088e580> global_0088e580;
inline guest::global<u32, 0x0088e584> global_0088e584;
inline guest::global<u32, 0x0088e588> global_0088e588;
inline guest::global<u32, 0x0088e58c> global_0088e58c;
inline guest::global<u32, 0x0088e590> global_0088e590;
inline guest::global<u32, 0x0088e594> global_0088e594;
inline guest::global<u32, 0x0088e598> global_0088e598;
inline guest::global<u32, 0x0088e59c> global_0088e59c;
inline guest::global<u32, 0x0088e5a0> global_0088e5a0;
inline constexpr guest::Function<0x002a66ec, u32(u32, u32, u32, u32)> MenuList__setup_entries;
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> get_save_data;
inline constexpr guest::Function<0x002fb338, u32(u32)> is_not_sentinel;
inline constexpr guest::Function<0x002fb378, u32(u32)> game_time_now;
inline constexpr guest::Function<0x002fb430, u32(u32, u32)> make_adjusted_words;
inline constexpr guest::Function<0x002fb4a0, u32(u32, u32, u32, u32)> words_not_less;

struct __attribute__((packed)) Frame_002a684c {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_002a684c, word_0, 0x0);
GUEST_OFFSET(Frame_002a684c, word_4, 0x4);
GUEST_OFFSET(Frame_002a684c, word_8, 0x8);
GUEST_SIZE(Frame_002a684c, 0x14);

u32 DailyCounters__update_day(u32 daily_counters, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_002a684c> frame;  // the original's stack frame
    u32 save_data_3 = get_save_data(daily_counters, r1, r2, r3);
    u32 r0_3 = is_not_sentinel(save_data_3 + 0x6e292u);  // (from the original)
    if (r0_3 != 0) {
        gptr<Now> now = gptr<Now>(game_time_now(r0_3));
        u32 r5_1 = now->word_0;
        u32 r7_1 = now->word_4;
        u32 r8_1 = now->word_8;
        u32 save_data_4 = get_save_data(now.addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        make_adjusted_words(frame.at(8).addr(), save_data_4 + 0x6e292u);  // (from the original)
        gptr<Local_002a684c_ea_1> ea_1 = gptr<Local_002a684c_ea_1>(frame.at(0xc).addr());  // (from the original)
        u32 r1_5 = ea_1->word_4;
        u32 r3_5 = frame->word_8;
        frame->word_0 = ea_1->word_0;
        frame->word_4 = r1_5;
        words_not_less(r5_1, r7_1, r8_1, r3_5);
    }
    frame->word_8 = 0;
    u32 r1_6 = *global_0088e548;
    frame->word_0 = *global_0088e544;
    frame->word_4 = r1_6;
    MenuList__setup_entries(daily_counters, daily_counters + 0x1418u, r1, 0x31u);  // (from the original)
    frame->word_8 = 0;
    u32 r1_8 = *global_0088e550;
    frame->word_0 = *global_0088e54c;
    frame->word_4 = r1_8;
    MenuList__setup_entries(daily_counters, daily_counters + 0x141cu, r1, 0x32u);  // (from the original)
    frame->word_8 = 0;
    u32 r1_10 = *global_0088e558;
    frame->word_0 = *global_0088e554;
    frame->word_4 = r1_10;
    MenuList__setup_entries(daily_counters, daily_counters + 0x1420u, r1, 0x33u);  // (from the original)
    frame->word_8 = 0;
    u32 r1_12 = *global_0088e560;
    frame->word_0 = *global_0088e55c;
    frame->word_4 = r1_12;
    MenuList__setup_entries(daily_counters, daily_counters + 0x1424u, r1, 0x34u);  // (from the original)
    frame->word_8 = 0;
    u32 r1_14 = *global_0088e568;
    frame->word_0 = *global_0088e564;
    frame->word_4 = r1_14;
    MenuList__setup_entries(daily_counters, daily_counters + 0x1428u, r1, 0x35u);  // (from the original)
    frame->word_8 = 0;
    u32 r1_16 = *global_0088e570;
    frame->word_0 = *global_0088e56c;
    frame->word_4 = r1_16;
    MenuList__setup_entries(daily_counters, daily_counters + 0x142cu, r1, 0x36u);  // (from the original)
    frame->word_8 = 0;
    u32 r1_18 = *global_0088e578;
    frame->word_0 = *global_0088e574;
    frame->word_4 = r1_18;
    MenuList__setup_entries(daily_counters, daily_counters + 0x1430u, r1, 0x37u);  // (from the original)
    frame->word_8 = 0;
    u32 r1_20 = *global_0088e580;
    frame->word_0 = *global_0088e57c;
    frame->word_4 = r1_20;
    MenuList__setup_entries(daily_counters, daily_counters + 0x1434u, r1, 0x38u);  // (from the original)
    u32 r0_7 = *gptr<s8>(r1 + 4u);
    u32 r0_8 = *gptr<u32>(r1);
    gptr<Local_002a684c_r1_22> r1_22 = gptr<Local_002a684c_r1_22>(daily_counters + 0x1438u);  // (from the original)
    if (r0_7 - 0xau != 0 && r0_7 - 0xau >> 0x1f == (((r0_7 ^ 0xau) & (r0_7 ^ r0_7 - 0xau)) >> 0x1f)) {  // (from the original)
        r0_8 += 1u;
    }
    u32 r7_2 = 0u;
    u32 r5_2 = uxth(r0_8);
    u32 r0_9 = r1_22->half_0;
    if (r5_2 >= 0x803u) {  // (from the original)
        r5_2 = 0x7dcu;  // (from the original)
    }
    if (r0_9 != 0 && r1_22->byte_2 != 0 && r1_22->byte_3 != 0) {
        if (r0_9 > 0xau) {  // (from the original)
            r0_9 += 1u;
        }
        u32 r0_10 = uxth(r0_9);
        if (r0_10 >= 0x803u) {  // (from the original)
            r0_10 = 0x7dcu;  // (from the original)
        }
        r7_2 = r5_2 == r0_10;
    }
    frame->word_8 = 0;
    u32 r2_5 = *global_0088e588;
    frame->word_0 = *global_0088e584;
    frame->word_4 = r2_5;
    MenuList__setup_entries(daily_counters, r1_22.addr(), r1, 0x39u);  // (from the original)
    if (r7_2 != 0) {
        *gptr<u32>(daily_counters + 0x4a0u) = 0;  // (from the original)
        *gptr<u32>(daily_counters + 0x4a4u) = 0;  // (from the original)
        *gptr<u32>(daily_counters + 0x4a8u) = 0;  // (from the original)
        *gptr<u32>(daily_counters + 0x4acu) = 0;  // (from the original)
        *gptr<u32>(daily_counters + 0x4b0u) = 0;  // (from the original)
    }
    gptr<Local_002a684c_r1_23> r1_23 = gptr<Local_002a684c_r1_23>(daily_counters + 0x1444u);  // (from the original)
    u32 r2_6 = 0u;
    u32 r0_11 = r1_23->half_0;
    if (r0_11 != 0 && r1_23->byte_2 != 0 && r1_23->byte_3 != 0) {
        if (r0_11 > 0xau) {  // (from the original)
            r0_11 += 1u;
        }
        u32 r0_12 = uxth(r0_11);
        if (r0_12 >= 0x803u) {  // (from the original)
            r0_12 = 0x7dcu;  // (from the original)
        }
        r2_6 = r5_2 == r0_12;
    }
    frame->word_8 = r2_6;
    u32 r2_7 = *global_0088e590;
    frame->word_0 = *global_0088e58c;
    frame->word_4 = r2_7;
    MenuList__setup_entries(daily_counters, r1_23.addr(), r1, 0x3du);  // (from the original)
    frame->word_8 = 0;
    u32 r1_24 = *global_0088e598;
    frame->word_0 = *global_0088e594;
    frame->word_4 = r1_24;
    MenuList__setup_entries(daily_counters, daily_counters + 0x143cu, r1, 0x3au);  // (from the original)
    frame->word_8 = 0;
    u32 r1_26 = *global_0088e5a0;
    frame->word_0 = *global_0088e59c;
    frame->word_4 = r1_26;
    u32 r0_13 = MenuList__setup_entries(daily_counters, daily_counters + 0x1440u, r1, 0x3cu);  // (from the original)
    return r0_13;
}

}  // namespace d_002a684c
GUEST_EXPORT_FRAMED(0x002a684c, d_002a684c::DailyCounters__update_day, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_002a6b44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs the base part and clears the 12 daily counter entries.
namespace d_002a6b44 {

struct __attribute__((packed)) DailyCounters {
    u8 unknown_0[0x1418];  // (not used here)
    u16 half_1418;
    u8 byte_141a;
    u8 byte_141b;
    u16 half_141c;
    u8 byte_141e;
    u8 byte_141f;
    u16 half_1420;
    u8 byte_1422;
    u8 byte_1423;
    u16 half_1424;
    u8 byte_1426;
    u8 byte_1427;
    u16 half_1428;
    u8 byte_142a;
    u8 byte_142b;
    u16 half_142c;
    u8 byte_142e;
    u8 byte_142f;
    u16 half_1430;
    u8 byte_1432;
    u8 byte_1433;
    u16 half_1434;
    u8 byte_1436;
    u8 byte_1437;
    u16 half_1438;
    u8 byte_143a;
    u8 byte_143b;
    u16 half_143c;
    u8 byte_143e;
    u8 byte_143f;
    u16 half_1440;
    u8 byte_1442;
    u8 byte_1443;
    u16 half_1444;
    u8 byte_1446;
    u8 byte_1447;
};
GUEST_OFFSET(DailyCounters, half_1418, 0x1418);
GUEST_OFFSET(DailyCounters, byte_141a, 0x141a);
GUEST_OFFSET(DailyCounters, byte_141b, 0x141b);
GUEST_OFFSET(DailyCounters, half_141c, 0x141c);
GUEST_OFFSET(DailyCounters, byte_141e, 0x141e);
GUEST_OFFSET(DailyCounters, byte_141f, 0x141f);
GUEST_OFFSET(DailyCounters, half_1420, 0x1420);
GUEST_OFFSET(DailyCounters, byte_1422, 0x1422);
GUEST_OFFSET(DailyCounters, byte_1423, 0x1423);
GUEST_OFFSET(DailyCounters, half_1424, 0x1424);
GUEST_OFFSET(DailyCounters, byte_1426, 0x1426);
GUEST_OFFSET(DailyCounters, byte_1427, 0x1427);
GUEST_OFFSET(DailyCounters, half_1428, 0x1428);
GUEST_OFFSET(DailyCounters, byte_142a, 0x142a);
GUEST_OFFSET(DailyCounters, byte_142b, 0x142b);
GUEST_OFFSET(DailyCounters, half_142c, 0x142c);
GUEST_OFFSET(DailyCounters, byte_142e, 0x142e);
GUEST_OFFSET(DailyCounters, byte_142f, 0x142f);
GUEST_OFFSET(DailyCounters, half_1430, 0x1430);
GUEST_OFFSET(DailyCounters, byte_1432, 0x1432);
GUEST_OFFSET(DailyCounters, byte_1433, 0x1433);
GUEST_OFFSET(DailyCounters, half_1434, 0x1434);
GUEST_OFFSET(DailyCounters, byte_1436, 0x1436);
GUEST_OFFSET(DailyCounters, byte_1437, 0x1437);
GUEST_OFFSET(DailyCounters, half_1438, 0x1438);
GUEST_OFFSET(DailyCounters, byte_143a, 0x143a);
GUEST_OFFSET(DailyCounters, byte_143b, 0x143b);
GUEST_OFFSET(DailyCounters, half_143c, 0x143c);
GUEST_OFFSET(DailyCounters, byte_143e, 0x143e);
GUEST_OFFSET(DailyCounters, byte_143f, 0x143f);
GUEST_OFFSET(DailyCounters, half_1440, 0x1440);
GUEST_OFFSET(DailyCounters, byte_1442, 0x1442);
GUEST_OFFSET(DailyCounters, byte_1443, 0x1443);
GUEST_OFFSET(DailyCounters, half_1444, 0x1444);
GUEST_OFFSET(DailyCounters, byte_1446, 0x1446);
GUEST_OFFSET(DailyCounters, byte_1447, 0x1447);

inline constexpr guest::Function<0x002a661c, u32(u32)> DailyCounters__clear;
inline constexpr guest::Function<0x006b9038, u32(u32, u32, u32, u32)> DailyCountersBase__construct;

u32 DailyCounters__construct(gptr<DailyCounters> daily_counters, u32 r1) {
    DailyCountersBase__construct(daily_counters.addr() + 4u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    daily_counters->half_1418 = 0;
    daily_counters->byte_141a = 0;
    daily_counters->byte_141b = 0;
    daily_counters->half_141c = 0;
    daily_counters->byte_141e = 0;
    daily_counters->byte_141f = 0;
    daily_counters->half_1420 = 0;
    daily_counters->byte_1422 = 0;
    daily_counters->byte_1423 = 0;
    daily_counters->half_1424 = 0;
    daily_counters->byte_1426 = 0;
    daily_counters->byte_1427 = 0;
    daily_counters->half_1428 = 0;
    daily_counters->byte_142a = 0;
    daily_counters->byte_142b = 0;
    daily_counters->half_142c = 0;
    daily_counters->byte_142e = 0;
    daily_counters->byte_142f = 0;
    daily_counters->half_1430 = 0;
    daily_counters->byte_1432 = 0;
    daily_counters->byte_1433 = 0;
    daily_counters->half_1434 = 0;
    daily_counters->byte_1436 = 0;
    daily_counters->byte_1437 = 0;
    daily_counters->half_1438 = 0;
    daily_counters->byte_143a = 0;
    daily_counters->byte_143b = 0;
    daily_counters->half_143c = 0;
    daily_counters->byte_143e = 0;
    daily_counters->byte_143f = 0;
    daily_counters->half_1440 = 0;
    daily_counters->byte_1442 = 0;
    daily_counters->byte_1443 = 0;
    daily_counters->half_1444 = 0;
    daily_counters->byte_1446 = 0;
    daily_counters->byte_1447 = 0;
    DailyCounters__clear(daily_counters.addr());
    return daily_counters.addr();
}

}  // namespace d_002a6b44
GUEST_EXPORT_FRAMED(0x002a6b44, d_002a6b44::DailyCounters__construct, 0x4010);  // pushes {r4, lr} first, as the original

// f_002a70d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the visit record: its identity, player reference and 10 ids, with its index at -1.
namespace d_002a70d0 {

struct __attribute__((packed)) PlayerVisitRecord {
    u32 word_0;
    u8 unknown_4[0x2e];  // (not used here)
    u16 half_32;
    u8 byte_34;
    u8 byte_35;
};
GUEST_OFFSET(PlayerVisitRecord, word_0, 0x0);
GUEST_OFFSET(PlayerVisitRecord, half_32, 0x32);
GUEST_OFFSET(PlayerVisitRecord, byte_34, 0x34);
GUEST_OFFSET(PlayerVisitRecord, byte_35, 0x35);

inline constexpr guest::Function<0x003052f0, u32(u32, u32, u32, u32)> clear_identity_with_flags;
inline constexpr guest::Function<0x0030589c, u32(u32)> PlayerRef__clear;

u32 PlayerVisitRecord__construct(gptr<PlayerVisitRecord> player_visit_record, u32 r1, u32 r2, u32 r3) {
    u32 r0 = player_visit_record.addr();
    u32 r4 = r0;
    player_visit_record->half_32 = 0;
    player_visit_record->byte_34 = 0;
    player_visit_record->byte_35 = 0;
    player_visit_record->word_0 = 0;
    clear_identity_with_flags(r4 + 4u, r1, r2, r3);
    player_visit_record->half_32 = 0;
    player_visit_record->byte_34 = 0;
    player_visit_record->byte_35 = 0;
    PlayerRef__clear(r4 + 0x36u);  // (from the original)
    r2 = 0xffffu;  // (from the original)
    r1 = 0u;
    r0 = r1;
    do {
        u32 r1_2 = r1 + 1u;
        r0 += 2u;
        *gptr<u16>((r4 + (r1 << 1)) + 0x4cu) = u16(r2);  // (from the original)
        r1 = r1_2 + 1u;
        *gptr<u16>((r4 + (r1_2 << 1)) + 0x4cu) = u16(r2);  // (from the original)
        guest::preempt();
    } while (s32(r0) < 0xa);  // (from the original)
    u32 r1_3 = ~0u;
    *gptr<u32>(r4 + 0x60u) = r1_3;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    return r4;
}

}  // namespace d_002a70d0
GUEST_EXPORT_FRAMED(0x002a70d0, d_002a70d0::PlayerVisitRecord__construct, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002a7190: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Address of outfit `index` (below 4, 0x18 bytes each); out-of-range gives the first.
namespace d_002a7190 {


u32 PlayerOutfits4__outfit_at(u32 player_outfits4, u32 r1) {
    if (r1 < 4u) {
        r1 = r1 * 3u;
        player_outfits4 += (r1 << 3);
    }
    guest::cpu()->r[1] = r1;
    return player_outfits4;
}

}  // namespace d_002a7190
GUEST_EXPORT(0x002a7190, d_002a7190::PlayerOutfits4__outfit_at);

// f_002a71a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Counts to 4 (does nothing).
namespace d_002a71a0 {


void count_to_4() {
    u32 r0 = 0u;
    do {
        r0 += 1u;
        guest::preempt();
    } while (r0 < 4u);
}

}  // namespace d_002a71a0
GUEST_EXPORT(0x002a71a0, d_002a71a0::count_to_4);

// f_002a71b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Empties the 6 items of each of the 4 outfits and clears the flag (+0x60).
namespace d_002a71b4 {

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> Item__copy;

void PlayerOutfits4__clear(u32 player_outfits4) {
    u32 r6 = player_outfits4;
    u32 r5 = 0u;
    do {
        u32 r4_1 = r6 + (r5 + (r5 << 1) << 3);
        Item__copy(r4_1, empty_item_address, guest::cpu()->r[2], guest::cpu()->r[3]);
        Item__copy(r4_1 + 4u, empty_item_address, guest::cpu()->r[2], guest::cpu()->r[3]);
        Item__copy(r4_1 + 8u, empty_item_address, guest::cpu()->r[2], guest::cpu()->r[3]);
        Item__copy(r4_1 + 0xcu, empty_item_address, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        Item__copy(r4_1 + 0x10u, empty_item_address, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        Item__copy(r4_1 + 0x14u, empty_item_address, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r5 += 1u;
        guest::preempt();
    } while (r5 < 4u);
    *gptr<u8>(r6 + 0x60u) = 0;  // (from the original)
}

}  // namespace d_002a71b4
GUEST_EXPORT_FRAMED(0x002a71b4, d_002a71b4::PlayerOutfits4__clear, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002a722c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Refreshes the outfits of the first player when they exist.
namespace d_002a722c {

inline constexpr guest::Function<0x002a7270, u32(u32, u32, u32, u32)> BadgeList__setup;
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> get_data_base;
inline constexpr guest::Function<0x002fb7e8, u32(u32, u32)> player_at;
inline constexpr guest::Function<0x002fbd54, u32(u32)> PersonalId__is_set;

void PlayerOutfits4__refresh_first_player(u32 player_outfits4, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 data_base_2 = get_data_base(player_outfits4, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 player_2 = player_at(data_base_2 + 0x20u, 0u);  // (from the original)
    if (player_2 == 0) {
        return;
    }
    u32 r0_5 = PersonalId__is_set(player_2 + 0x55a6u);  // (from the original)
    if (r0_5 == 0) {
        return;
    }
    frame.release();
    BadgeList__setup(player_2 + 0x5544u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return;  // (from the original)
}

}  // namespace d_002a722c
GUEST_EXPORT(0x002a722c, d_002a722c::PlayerOutfits4__refresh_first_player);

// f_002a75dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Converts the shirt and hat items of the 4 outfits by the rule.
namespace d_002a75dc {

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> Item__copy;
inline constexpr guest::Function<0x002fcaf4, u32(u32)> Item__is_empty;
inline constexpr guest::Function<0x0076ab28, u32(u32, u32, u32, u32)> Item__wear_class;
inline constexpr guest::Function<0x0076aff4, u32(u32, u32, u32)> ItemDisplay__from_item;

struct __attribute__((packed)) Frame_002a75dc {
    u32 word_0;
};
GUEST_OFFSET(Frame_002a75dc, word_0, 0x0);
GUEST_SIZE(Frame_002a75dc, 0x4);

void PlayerOutfits4__convert_items(u32 player_outfits4, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_002a75dc> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r5 = 0u;
    u32 r7 = player_outfits4;
    u32 r6 = r1;
    do {
        u32 r4_1 = r7 + r5 * 0x18u;  // (from the original)
        u32 r0_1 = Item__wear_class(r4_1, r1, r2, r3);
        u32 is_empty_3 = Item__is_empty(r0_1 == 1u ? r4_1 : empty_item_address);
        if (is_empty_3 == 0) {
            u32 r0_4 = Item__wear_class(r4_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            ItemDisplay__from_item(frame.at(0).addr(), r0_4 == 1u ? r4_1 : empty_item_address, r6);
            Item__copy(r4_1, frame.at(0).addr());
        }
        u32 r0_7 = Item__wear_class(r4_1 + 8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 is_empty_4 = Item__is_empty(r0_7 == 3u ? r4_1 + 8u : empty_item_address);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (is_empty_4 == 0) {
            u32 r0_11 = Item__wear_class(r4_1 + 8u, r1, r2, r3);
            ItemDisplay__from_item(frame.at(0).addr(), r0_11 == 3u ? r4_1 + 8u : empty_item_address, r6);
            Item__copy(r4_1 + 8u, frame.at(0).addr());
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        r5 += 1u;
        guest::preempt();
    } while (r5 < 4u);
    guest::cpu()->r[1] = r1;
}

}  // namespace d_002a75dc
GUEST_EXPORT_FRAMED(0x002a75dc, d_002a75dc::PlayerOutfits4__convert_items, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_002a76c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Restocks the 7 items: 3 from group 0xc, 3 from group 0xd and 1 from group 0x19, all distinct.
namespace d_002a76c0 {

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x002fc288, u32(u32, u32, u32, u32)> ItemBitSet__clear_and_return;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> Item__copy;
inline constexpr guest::Function<0x002fe9c8, u32(u32, u32, u32, u32)> ItemSet__add_group_without_flags;
inline constexpr guest::Function<0x003004c4, u32(u32, u32, u32)> pick_distinct_items;

void ShopStock7__restock(u32 shop_stock7, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x2e8);  // the original's stack frame
    u32 r4 = 0u;
    u32 r5 = shop_stock7;
    u32 r6 = r4;
    do {
        Item__copy(r5 + (r4 << 2), empty_item_address, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        u32 r0_2 = r5 + r4;
        r4 += 1u;
        *gptr<u8>(r0_2 + 0x1cu) = u8(r6);  // (from the original)
        guest::preempt();
    } while (s32(r4) < 7);
    ItemBitSet__clear_and_return(frame.at(0).addr(), guest::cpu()->r[1], r2, r3);
    ItemSet__add_group_without_flags(frame.at(0).addr(), 0xcu, 0x2du, 0u);  // (from the original)
    pick_distinct_items(r5, 3u, frame.at(0).addr());
    ItemBitSet__clear_and_return(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    ItemSet__add_group_without_flags(frame.at(0).addr(), 0xdu, 0x2du, 0u);  // (from the original)
    pick_distinct_items(r5 + 0xcu, 3u, frame.at(0).addr());  // (from the original)
    ItemBitSet__clear_and_return(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    ItemSet__add_group_without_flags(frame.at(0).addr(), 0x19u, 0x2du, 0u);  // (from the original)
    pick_distinct_items(r5 + 0x18u, 1u, frame.at(0).addr());  // (from the original)
}

}  // namespace d_002a76c0
GUEST_EXPORT_FRAMED(0x002a76c0, d_002a76c0::ShopStock7__restock, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002a77bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Places item `index` (below 7) in the room or the field once, when its owner is the current player.
namespace d_002a77bc {

struct __attribute__((packed)) Local_002a77bc_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002a77bc_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_002a77bc_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_002a77bc_r4_1 {
    u8 unknown_0[0x1c];  // (not used here)
    u8 byte_1c;
};
GUEST_OFFSET(Local_002a77bc_r4_1, byte_1c, 0x1c);

inline constexpr guest::Function<0x002f74c8, u32(u32)> current_scene_id;
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> Item__copy_b;
inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> GridMap__place_item_at_world;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> construct_item;
inline constexpr guest::Function<0x00303acc, u32(u32)> item_is_kind_11_with_class_4_or_5;
inline constexpr guest::Function<0x0030b654, u32(u32)> item_has_valid_data;
inline constexpr guest::Function<0x004e9a78, u32(u32, u32, u32, u32)> RoomGrid__furniture_at_layer;
inline constexpr guest::Function<0x0059e65c, u32(u32, u32, u32)> clear_field_tile;
inline constexpr guest::Function<0x006a5e34, u32(u32)> get_map_table;

struct __attribute__((packed)) Frame_002a77bc {
    u32 word_0;
    u8 unknown_4[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_002a77bc, word_0, 0x0);
GUEST_SIZE(Frame_002a77bc, 0xc);

void ShopStock7__place_in_world(u32 shop_stock7, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_002a77bc> frame;  // the original's stack frame
    if (r2 >= 7u) {
        return;
    }
    gptr<Local_002a77bc_r4_1> r4_1 = gptr<Local_002a77bc_r4_1>(shop_stock7 + r2);
    gptr<Local_002a77bc_ea_1> ea_1 = gptr<Local_002a77bc_ea_1>(frame.at(0x28).addr());  // (from the original)
    u32 r6_1 = ea_1->word_0;
    u32 r7_1 = ea_1->word_4;
    u32 r3_1 = frame.at(4).addr();
    if (r4_1->byte_1c != 0) {
        construct_item(r3_1, 0x2084u, r2, r3_1);  // (from the original)
    } else {
        Item__copy_b(r3_1, shop_stock7 + (r2 << 2), r2, r3_1);
    }
    if (r4_1->byte_1c == 0) {
        r4_1->byte_1c = 1;
        u32 scene = current_scene_id(1u);
        if (scene == r1) {
            u32 r0_3 = item_has_valid_data(frame.at(4).addr());
            if (r0_3 != 0) {
                u32 r0_5 = item_is_kind_11_with_class_4_or_5(frame.at(4).addr());
                if (r0_5 != 0) {
                    RoomGrid__furniture_at_layer(r3, r6_1, 4u, r7_1);
                } else {
                    RoomGrid__furniture_at_layer(r3, r6_1, 3u, r7_1);
                }
            } else {
                u32 map_table_2 = get_map_table(r0_3);
                if (map_table_2 != 0) {
                    u32 r0_7 = frame.at(8).addr();
                    construct_item(r0_7, 0x2084u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                    frame->word_0 = 0;
                    GridMap__place_item_at_world(map_table_2, r0_7, r3, r6_1);
                    clear_field_tile(r3, r6_1, 1u);
                }
            }
        }
    }
}

}  // namespace d_002a77bc
GUEST_EXPORT_FRAMED(0x002a77bc, d_002a77bc::ShopStock7__place_in_world, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_002a799c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Picks one item from group 0xc (up to 0x73).
namespace d_002a799c {

inline constexpr guest::Function<0x002fc288, u32(u32, u32, u32, u32)> ItemBitSet__clear_and_return;
inline constexpr guest::Function<0x002fe9c8, u32(u32, u32, u32, u32)> ItemSet__add_group_without_flags;
inline constexpr guest::Function<0x003004c4, u32(u32, u32, u32)> pick_distinct_items;

u32 pick_item_from_group_c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x2e8);  // the original's stack frame
    ItemBitSet__clear_and_return(frame.at(0).addr(), r1, r2, r3);
    ItemSet__add_group_without_flags(frame.at(0).addr(), 0xcu, 0x73u, 0u);  // (from the original)
    pick_distinct_items(r0, 1u, frame.at(0).addr());
    return frame.at(0).addr();
}

}  // namespace d_002a799c
GUEST_EXPORT_FRAMED(0x002a799c, d_002a799c::pick_item_from_group_c, 0x4010);  // pushes {r4, lr} first, as the original

// f_002a7c74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Places item `index` (below 11) in the room or the field once, when its owner is the current player.
namespace d_002a7c74 {

struct __attribute__((packed)) Local_002a7c74_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002a7c74_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_002a7c74_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_002a7c74_r4_1 {
    u8 unknown_0[0x3e];  // (not used here)
    u8 byte_3e;
};
GUEST_OFFSET(Local_002a7c74_r4_1, byte_3e, 0x3e);

inline constexpr guest::Function<0x002f74c8, u32(u32)> current_scene_id;
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> Item__copy_b;
inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> GridMap__place_item_at_world;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> construct_item;
inline constexpr guest::Function<0x00303acc, u32(u32, u32, u32, u32)> item_is_kind_11_with_class_4_or_5;
inline constexpr guest::Function<0x0030b654, u32(u32)> item_has_valid_data;
inline constexpr guest::Function<0x004e9a78, u32(u32, u32, u32, u32)> RoomGrid__furniture_at_layer;
inline constexpr guest::Function<0x0059e65c, u32(u32, u32, u32)> clear_field_tile;
inline constexpr guest::Function<0x006a5e34, u32(u32)> get_map_table;

struct __attribute__((packed)) Frame_002a7c74 {
    u32 word_0;
    u8 unknown_4[0xc];  // (not read or written by name)
};
GUEST_OFFSET(Frame_002a7c74, word_0, 0x0);
GUEST_SIZE(Frame_002a7c74, 0x10);

void ItemSlots11__place_in_world(u32 item_slots11, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_002a7c74> frame;  // the original's stack frame
    if (r2 >= 0xbu) {  // (from the original)
        return;
    }
    gptr<Local_002a7c74_r4_1> r4_1 = gptr<Local_002a7c74_r4_1>(item_slots11 + r2);
    gptr<Local_002a7c74_ea_1> ea_1 = gptr<Local_002a7c74_ea_1>(frame.at(0x30).addr());  // (from the original)
    u32 r7_1 = ea_1->word_0;
    u32 r8_1 = ea_1->word_4;
    u32 r1_1 = r4_1->byte_3e;
    u32 r6_1 = frame.at(4).addr();
    u32 r0_1 = item_slots11 + (r2 << 2);
    if (r1_1 != 0) {
        u32 r0_3 = item_is_kind_11_with_class_4_or_5(r0_1 + 0x12u, r1_1, r2, r3);  // (from the original)
        if (r0_3 == 0) {
            construct_item(r6_1, 0x2083u);  // (from the original)
        } else {
            construct_item(r6_1, 0x2086u);  // (from the original)
        }
    } else {
        Item__copy_b(r6_1, r0_1 + 0x12u, r2, r3);  // (from the original)
    }
    if (r4_1->byte_3e == 0) {
        r4_1->byte_3e = 1;
        u32 scene = current_scene_id(1u);
        if (scene == r1) {
            u32 r0_6 = item_has_valid_data(frame.at(4).addr());
            if (r0_6 != 0) {
                u32 r0_8 = item_is_kind_11_with_class_4_or_5(frame.at(4).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                if (r0_8 != 0) {
                    RoomGrid__furniture_at_layer(r3, r7_1, 2u, r8_1);
                } else {
                    RoomGrid__furniture_at_layer(r3, r7_1, 1u, r8_1);
                }
            } else {
                u32 map_table_2 = get_map_table(r0_6);
                if (map_table_2 != 0) {
                    u32 r0_10 = frame.at(8).addr();
                    construct_item(r0_10, 0x2083u);  // (from the original)
                    frame->word_0 = 0;
                    GridMap__place_item_at_world(map_table_2, r0_10, r3, r7_1);
                    clear_field_tile(r3, r7_1, 1u);
                }
            }
        }
    }
}

}  // namespace d_002a7c74
GUEST_EXPORT_FRAMED(0x002a7c74, d_002a7c74::ItemSlots11__place_in_world, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_002a8560: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002a8560 {

inline constexpr u32 vtable_AcSimpleTalkBase = 0x008f1078u;
inline constexpr guest::Function<0x006e47a0, u32(u32, u32, u32, u32)> DemoActor__DemoActor;

u32 AcSimpleTalkBase__AcSimpleTalkBase(gptr<AcSimpleTalkBase> ac_simple_talk_base, u32 r1, u32 r2) {
    DemoActor__DemoActor(ac_simple_talk_base.addr(), r1, r2, guest::cpu()->r[3]);
    ac_simple_talk_base->byte_66 = 0;
    ac_simple_talk_base->vtable = vtable_AcSimpleTalkBase;
    ac_simple_talk_base->word_68 = r1;
    ac_simple_talk_base->byte_6c = 1;
    return ac_simple_talk_base.addr();
}

}  // namespace d_002a8560
GUEST_EXPORT_FRAMED(0x002a8560, d_002a8560::AcSimpleTalkBase__AcSimpleTalkBase, 0x4010);  // pushes {r4, lr} first, as the original

// f_002a9294: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When enabled (bit 1 of +0x8a) and idle (+0x59c), stores the value and starts.
namespace d_002a9294 {

struct __attribute__((packed)) Object_002a9294_0 {
    u8 unknown_0[0x8a];  // (not used here)
    u8 byte_8a;
    u8 unknown_8b[0x511];  // (not used here)
    u8 byte_59c;
    u8 unknown_59d[0xc3];  // (not used here)
    u32 word_660;
};
GUEST_OFFSET(Object_002a9294_0, byte_8a, 0x8a);
GUEST_OFFSET(Object_002a9294_0, byte_59c, 0x59c);
GUEST_OFFSET(Object_002a9294_0, word_660, 0x660);

inline constexpr guest::Function<0x002a93e8, u32(u32, u32, u32, u32)> ShopTalk__set_mode;

void start_when_flag_8a(gptr<Object_002a9294_0> arg0, u32 r1) {
    if ((u32(arg0->byte_8a) >> 1u & 1u) == 0) {
        return;
    }
    u32 r2_1 = arg0->byte_59c;
    if (r2_1 != 0) {
        return;
    }
    arg0->word_660 = r1;
    ShopTalk__set_mode(arg0.addr(), 1u, r2_1, guest::cpu()->r[3]);
}

}  // namespace d_002a9294
GUEST_EXPORT(0x002a9294, d_002a9294::start_when_flag_8a);

// f_002a9cd8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Formats the value into the message buffer and stores the word.
namespace d_002a9cd8 {

struct __attribute__((packed)) Object_002a9cd8_0 {
    u8 unknown_0[0x68];  // (not used here)
    u32 word_68;
};
GUEST_OFFSET(Object_002a9cd8_0, word_68, 0x68);

inline constexpr guest::Function<0x0030f48c, u32(u32, u32, u32, u32)> format_string;

u32 format_message_word(gptr<Object_002a9cd8_0> arg0, u32 r1, u32 r2) {
    u32 r4_1 = arg0->word_68;
    u32 r0_2 = format_string(r4_1 + 0x104u, 0x845170u, r1, guest::cpu()->r[3]);  // (from the original)
    *gptr<u32>(r4_1 + 0x130u) = r2;  // (from the original)
    return r0_2;
}

}  // namespace d_002a9cd8
GUEST_EXPORT_FRAMED(0x002a9cd8, d_002a9cd8::format_message_word, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002aa08c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts the furniture sound and marks it on (+0x98).
namespace d_002aa08c {

struct __attribute__((packed)) SoundObjFurnitureHolder2 {
    u8 unknown_0[0x98];  // (not used here)
    u8 byte_98;
};
GUEST_OFFSET(SoundObjFurnitureHolder2, byte_98, 0x98);

inline constexpr guest::Function<0x00246f64, u32(u32)> SoundObjFurnitureHolder__start;

void SoundObjFurnitureHolder2__start(gptr<SoundObjFurnitureHolder2> sound_obj_furniture_holder2) {
    SoundObjFurnitureHolder__start(sound_obj_furniture_holder2.addr());
    sound_obj_furniture_holder2->byte_98 = 1;
}

}  // namespace d_002aa08c
GUEST_EXPORT_FRAMED(0x002aa08c, d_002aa08c::SoundObjFurnitureHolder2__start, 0x4010);  // pushes {r4, lr} first, as the original

// f_002aa0dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stops the furniture sound when on.
namespace d_002aa0dc {

struct __attribute__((packed)) SoundObjFurnitureHolder2 {
    u8 unknown_0[0x98];  // (not used here)
    u8 byte_98;
};
GUEST_OFFSET(SoundObjFurnitureHolder2, byte_98, 0x98);

inline constexpr guest::Function<0x0024727c, u32(u32, u32, u32, u32)> SoundObjFurnitureHolder__stop;

void SoundObjFurnitureHolder2__stop(gptr<SoundObjFurnitureHolder2> sound_obj_furniture_holder2) {
    if (sound_obj_furniture_holder2->byte_98 == 0) {
        return;
    }
    SoundObjFurnitureHolder__stop(sound_obj_furniture_holder2.addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    sound_obj_furniture_holder2->byte_98 = 0;
}

}  // namespace d_002aa0dc
GUEST_EXPORT_FRAMED(0x002aa0dc, d_002aa0dc::SoundObjFurnitureHolder2__stop, 0x4010);  // pushes {r4, lr} first, as the original

// f_002aa104: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs the holder, off.
namespace d_002aa104 {

inline constexpr guest::Function<0x00247294, u32(u32, u32, u32, u32)> SoundObjFurnitureHolder__construct;

u32 SoundObjFurnitureHolder2__construct(u32 sound_obj_furniture_holder2, u32 r1) {
    u32 r0_1 = SoundObjFurnitureHolder__construct(sound_obj_furniture_holder2, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u8>(r0_1 + 0x98u) = 0;  // (from the original)
    return r0_1;
}

}  // namespace d_002aa104
GUEST_EXPORT_FRAMED(0x002aa104, d_002aa104::SoundObjFurnitureHolder2__construct, 0x4010);  // pushes {r4, lr} first, as the original

// f_002aa6c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Spawns an insect of kind 0x42 at the position when fewer than 4 exist and the spot allows it; true when it tried.
namespace d_002aa6c0 {

struct __attribute__((packed)) InsectMgr {
    u8 unknown_0[0x1c];  // (not used here)
    u32 word_1c;
};
GUEST_OFFSET(InsectMgr, word_1c, 0x1c);

struct __attribute__((packed)) Local_002aa6c0_r0_5 {
    u8 unknown_0[0x1f8];  // (not used here)
    u32 word_1f8;
    u32 word_1fc;
};
GUEST_OFFSET(Local_002aa6c0_r0_5, word_1f8, 0x1f8);
GUEST_OFFSET(Local_002aa6c0_r0_5, word_1fc, 0x1fc);

inline constexpr guest::Function<0x001f499c, u32(u32, u32, u32)> InsectMgr__spawn;
inline constexpr guest::Function<0x002ab460, u32(u32, u32, u32)> NpcTalk__start_kind;
inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32, u32)> position_to_cell;

u32 InsectMgr__try_spawn_kind_42(gptr<InsectMgr> insect_mgr, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0 = insect_mgr.addr();
    u32 r4 = r0;
    r0 = insect_mgr->word_1c;
    u32 r5 = r1;
    u32 r6 = 0u;
    u32 r3 = 0x42u;  // (from the original)
    r1 = r6;
    if (r0 != 0) {
        do {
            u32 r2_1 = *gptr<u32>(r0);
            if (r2_1 != 0 && *gptr<u8>(r2_1 + 0xc9u) == r3) {  // (from the original)
                r1 += 1u;
                if (r1 >= 4u) {
                    guest::cpu()->r[1] = r1;
                    return 0u;
                }
            }
            r0 = *gptr<u32>(r0 + 4u);
            guest::preempt();
        } while (r0 != 0);
    }
    position_to_cell(frame.at(0).addr(), frame.at(4).addr(), r5, r3);
    u32 r0_3 = InsectMgr__spawn(frame.at(0).addr(), 0x42u, 1u);  // (from the original)
    r1 = guest::cpu()->r[1];
    if (r0_3 == 0) {
        u32 r0_4 = NpcTalk__start_kind(r4, 0x42u, r5);  // (from the original)
        u32 r1_2 = guest::cpu()->r[1];
        gptr<Local_002aa6c0_r0_5> r0_5 = gptr<Local_002aa6c0_r0_5>(r4 + 0x1000u);  // (from the original)
        if (r0_4 == 0) {
            r0_5->word_1fc = r6;
        } else {
            r1_2 = r0_5->word_1f8;
            r0_5->word_1fc = r1_2;
        }
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_002aa6c0
GUEST_EXPORT_FRAMED(0x002aa6c0, d_002aa6c0::InsectMgr__try_spawn_kind_42, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002aa92c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Finds the spawn list of the insect kind (its special list for flagged kinds), counting a use.
namespace d_002aa92c {

struct __attribute__((packed)) Object_002aa92c_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_002aa92c_1, word_0, 0x0);

inline guest::global<u32, 0x00000138> global_00000138;

void InsectMgr__spawn_list_for_kind(u32 insect_mgr, gptr<Object_002aa92c_1> arg1, u32 r2) {
    if (*gptr<u8>(r2 * 0x50u + 0x868888u + 0x4du) != 0) {  // (from the original)
        u32 r2_1 = 0u;
        if (r2 == 0x1du) {  // (from the original)
            r2_1 = 1u;
        }
        u32 r0_1 = insect_mgr + 0xf5cu;  // (from the original)
        if (r2_1 >= 2u) {
            arg1->word_0 = r0_1 + 0x2cu;  // (from the original)
            return;
        }
        arg1->word_0 = (r0_1 + (r2_1 * 0x11u + (r2_1 << 6) << 2)) + 0x2cu;  // (from the original)
        return;
    }
    insect_mgr = *gptr<u32>(insect_mgr + 0x24u);  // (from the original)
    if (insect_mgr == 0) {
        *global_00000138 = *global_00000138 + 1u;
        arg1->word_0 = 0x2c;  // (from the original)
        return;
    }
    do {
        if (*gptr<u8>(insect_mgr) == r2) {
            *gptr<u32>(insect_mgr + 0x138u) = *gptr<u32>(insect_mgr + 0x138u) + 1u;  // (from the original)
            arg1->word_0 = insect_mgr + 0x2cu;  // (from the original)
            return;
        }
        insect_mgr = *gptr<u32>(insect_mgr + 0x13cu);  // (from the original)
        guest::preempt();
    } while (insect_mgr != 0);
    *global_00000138 = *global_00000138 + 1u;
    arg1->word_0 = 0x2c;  // (from the original)
}

}  // namespace d_002aa92c
GUEST_EXPORT(0x002aa92c, d_002aa92c::InsectMgr__spawn_list_for_kind);

// f_002aab48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The special insect slot (0x18 bytes each, +0x1340): the second for kind 0x1d, else the first.
namespace d_002aab48 {


u32 InsectMgr__special_slot(u32 insect_mgr, u32 r1) {
    u32 r1_1 = 0u;
    if (r1 == 0x1du) {  // (from the original)
        r1_1 = 1u;
    }
    return insect_mgr + r1_1 * 0x18u + 0x1340u;  // (from the original)
}

}  // namespace d_002aab48
GUEST_EXPORT(0x002aab48, d_002aab48::InsectMgr__special_slot);

// f_002aafd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Picks an insect to spawn now for the time period, from the spawn list, skipping the ones the player cannot get.
namespace d_002aafd4 {

struct __attribute__((packed)) InsectMgr {
    u8 unknown_0[0x11f4];  // (not used here)
    u8 time_period;
};
GUEST_OFFSET(InsectMgr, time_period, 0x11f4);

struct __attribute__((packed)) Local_002aafd4_r3_5 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002aafd4_r3_5, word_0, 0x0);
GUEST_OFFSET(Local_002aafd4_r3_5, word_4, 0x4);

inline constexpr guest::Function<0x002fb378, u32(u32, u32)> game_time_now;
inline constexpr guest::Function<0x002fb94c, u32(u32, u32)> get_current_player;
inline constexpr guest::Function<0x00305f2c, u32(u32, u32, u32, u32)> read_global_object_byte;
inline constexpr guest::Function<0x00700974, u32(u32)> time_period_of_hour;
inline constexpr guest::Function<0x00701900, u32(u32, u32, u32, u32)> build_insect_spawn_list;
inline constexpr guest::Function<0x007019f0, u32(u32, u32, u32, u32)> insect_index_to_item;
inline constexpr guest::Function<0x007701f8, u32(u32, u32, u32, u32)> contains_item_for;

struct __attribute__((packed)) Frame_002aafd4 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0x4];  // (not read or written by name)
    u32 word_14;
    u32 word_18;
    u8 unknown_1c[0xc];  // (not read or written by name)
    u32 word_28;
    u32 word_2c;
    u8 unknown_30[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_002aafd4, word_0, 0x0);
GUEST_OFFSET(Frame_002aafd4, word_4, 0x4);
GUEST_OFFSET(Frame_002aafd4, word_8, 0x8);
GUEST_OFFSET(Frame_002aafd4, word_c, 0xc);
GUEST_OFFSET(Frame_002aafd4, word_14, 0x14);
GUEST_OFFSET(Frame_002aafd4, word_18, 0x18);
GUEST_OFFSET(Frame_002aafd4, word_28, 0x28);
GUEST_OFFSET(Frame_002aafd4, word_2c, 0x2c);
GUEST_SIZE(Frame_002aafd4, 0x34);

u32 InsectMgr__pick_insect(gptr<InsectMgr> insect_mgr, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_002aafd4> frame;  // the original's stack frame
    u32 r0 = insect_mgr.addr();
    u32 r0_2 = 0;
    u32 r5 = r0;
    u32 r8 = r1;
    u32 r0_1 = read_global_object_byte(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0_1 == 3u) {
        if (r8 == 0x48u) {  // (from the original)
            return 0u;
        }
        frame->word_2c = 0;
        frame->word_28 = 0x24;  // (from the original)
        insect_index_to_item(frame.at(0x2c).addr(), frame.at(0x28).addr(), r8, guest::cpu()->r[3]);  // (from the original)
        r1 = guest::cpu()->r[1];
        u32 r0_4 = frame->word_28;
        if (r0_4 == 0x24u) {  // (from the original)
            r0_2 = get_current_player(r0_4, r1);
            r1 = guest::cpu()->r[1];
            if (r0_2 == 0) {
                return r0_2;
            }
            frame->word_14 = r0_2 + 0x6c20u;  // (from the original)
            u32 now = game_time_now(r0_2 + 0x6c20u, r1);  // (from the original)
            u32 time_period_2 = time_period_of_hour(now);
            r3 = guest::cpu()->r[3];
            u32 r6 = r5 + 0x1000u;  // (from the original)
            r1 = insect_mgr->time_period;
            if (r1 != time_period_2) {
                insect_mgr->time_period = u8(time_period_2);
                build_insect_spawn_list(r5 + 0x13b8u, r1, guest::cpu()->r[2], r3);  // (from the original)
                r1 = guest::cpu()->r[1];
                r3 = guest::cpu()->r[3];
                frame->word_18 = 0;
                frame->word_0 = 0x24;  // (from the original)
                u32 r7 = 0u;
                frame->word_4 = 0;
                frame->word_8 = 0;
                frame->word_c = 0;
                u32 r4 = r7;
                u32 r10 = 1u;
                u32 r11 = frame.at(4).addr();
                u32 r9 = r5 + 0x1002u;  // (from the original)
                do {
                    u32 r2_5 = *gptr<u8>(r5 + r4 + 0x13b8u);  // (from the original)
                    if (r2_5 < 0x53u) {  // (from the original)
                        insect_index_to_item(frame.at(0x18).addr(), frame.at(0).addr(), r2_5, r3);  // (from the original)
                        r1 = guest::cpu()->r[1];
                        r3 = guest::cpu()->r[3];
                        if (frame->word_0 == 0x24u) {  // (from the original)
                            gptr<Local_002aafd4_r3_5> r3_5 = gptr<Local_002aafd4_r3_5>(frame.at(0x14).addr());  // (from the original)
                            u32 contains_item_2 = contains_item_for(r3_5->word_0, 0x24u, r3_5->word_4, r3_5.addr());  // (from the original)
                            r1 = guest::cpu()->r[1];
                            r3 = guest::cpu()->r[3];
                            if (contains_item_2 != 0) {
                                r7 += 1u;
                                *gptr<u32>(r11 + (r4 << 2)) = r10;
                                if (r4 == 2u) {
                                    u32 r0_12 = 0u;
                                    if (r7 == 2u) {
                                        r0_12 = frame->word_4;
                                        if (r0_12 != 0) {
                                            r0_12 = 1u;
                                        }
                                    }
                                    r1 = r0_12 + r5 + 0x1000u;  // (from the original)
                                    u32 r0_13 = *gptr<u8>(r1 + 0x3b8u);  // (from the original)
                                    *gptr<u8>(r1 + 0x3b8u) = *gptr<u8>(r9 + 0x3b8u);  // (from the original)
                                    *gptr<u8>(r9 + 0x3b8u) = u8(r0_13);  // (from the original)
                                }
                            }
                        }
                    }
                    r4 += 1u;
                    guest::preempt();
                } while (s32(r4) < 3);
            }
            if (*gptr<u8>(r6 + 0x3b8u) != r8 && *gptr<u8>(r6 + 0x3b9u) != r8) {  // (from the original)
                r0_2 = contains_item_for(frame->word_14, 0x24u, r8, r3);  // (from the original)
                r1 = guest::cpu()->r[1];
                if (r0_2 == 0) {
                    return r0_2;
                }
            }
        }
    }
    guest::cpu()->r[1] = r1;
    return 1u;
}

}  // namespace d_002aafd4
GUEST_EXPORT_FRAMED(0x002aafd4, d_002aafd4::InsectMgr__pick_insect, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_002ab16c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the flag at 0x94f520.
namespace d_002ab16c {

inline constexpr u32 flag_94f520_address = 0x0094f520u;
inline guest::global<u8, 0x0094f520> flag_94f520;

u32 set_flag_94f520() {
    u32 r1_1 = *flag_94f520;
    if (r1_1 == 0) {
        r1_1 = 1u;
        *flag_94f520 = u8(r1_1);
    }
    guest::cpu()->r[1] = r1_1;
    return flag_94f520_address;
}

}  // namespace d_002ab16c
GUEST_EXPORT(0x002ab16c, d_002ab16c::set_flag_94f520);

// f_002ab240: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The next insect id (+0x1202) used by no insect and no special slot.
namespace d_002ab240 {

struct __attribute__((packed)) InsectMgr {
    u8 unknown_0[0x1c];  // (not used here)
    u32 word_1c;
};
GUEST_OFFSET(InsectMgr, word_1c, 0x1c);

struct __attribute__((packed)) Local_002ab240_r12 {
    u8 unknown_0[0x202];  // (not used here)
    u8 byte_202;
};
GUEST_OFFSET(Local_002ab240_r12, byte_202, 0x202);


u32 InsectMgr__next_free_id(gptr<InsectMgr> insect_mgr) {
    u32 r0 = insect_mgr.addr();
    u32 r4 = insect_mgr->word_1c;
    gptr<Local_002ab240_r12> r12 = gptr<Local_002ab240_r12>(r0 + 0x1000u);  // (from the original)
L_2ab24c:;
    u32 r1 = r4;
    u32 r2 = u32(r12->byte_202) + 1u & 0xffu;  // (from the original)
    r12->byte_202 = u8(r2);
    if (r4 != 0) {
        do {
            u32 r3_1 = *gptr<u32>(r1);
            if (r3_1 != 0 && *gptr<u8>(r3_1 + 0x18cu) == r2) {  // (from the original)
                guest::preempt();
                goto L_2ab24c;
            }
            r1 = *gptr<u32>(r1 + 4u);
            guest::preempt();
        } while (r1 != 0);
    }
    r1 = 0u;
    do {
        u32 r3_2 = *gptr<u32>(r0 + r1 * 0x18u + 0x1340u);  // (from the original)
        if (r3_2 != 0 && *gptr<u8>(r3_2 + 0x18cu) == r2) {  // (from the original)
            guest::preempt();
            goto L_2ab24c;
        }
        r1 += 1u;
        guest::preempt();
    } while (s32(r1) < 2);
    return r2 & 0xffu;  // (from the original)
}

}  // namespace d_002ab240
GUEST_EXPORT_FRAMED(0x002ab240, d_002ab240::InsectMgr__next_free_id, 0x10);  // pushes {r4} first, as the original

// f_002ab3bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Counts the spawn timer down, then tries the special spawn (outside tours and some weathers) or kind 0x53, resetting
// the timer.
namespace d_002ab3bc {

struct __attribute__((packed)) InsectMgr {
    u8 unknown_0[0x11fc];  // (not used here)
    u32 word_11fc;
};
GUEST_OFFSET(InsectMgr, word_11fc, 0x11fc);

struct __attribute__((packed)) Local_002ab3bc_r4_1 {
    u8 unknown_0[0x1f8];  // (not used here)
    u32 word_1f8;
    u32 word_1fc;
};
GUEST_OFFSET(Local_002ab3bc_r4_1, word_1f8, 0x1f8);
GUEST_OFFSET(Local_002ab3bc_r4_1, word_1fc, 0x1fc);

inline guest::global<u8, 0x0094f522> insect_spawns_ready;
inline guest::global<u8, 0x0094f523> global_0094f523;
inline constexpr guest::Function<0x002aa6c0, u32(u32, u32)> InsectMgr__try_spawn_kind_42;
inline constexpr guest::Function<0x002ab460, u32(u32, u32, u32, u32)> NpcTalk__start_kind;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;

void InsectMgr__update_spawns(gptr<InsectMgr> insect_mgr, u32 r1, u32 r2) {
    u32 r0_2 = 0;
    gptr<Local_002ab3bc_r4_1> r4_1 = gptr<Local_002ab3bc_r4_1>(insect_mgr.addr() + 0x1000u);  // (from the original)
    u32 r0_1 = insect_mgr->word_11fc;
    if (s32(r0_1) > 0) {
        r0_2 = r0_1 - 1u;
    } else {
        u32 r0_3 = *insect_spawns_ready;
        if (r0_3 != 0) {
            u32 scene = current_scene_id(r0_3, r1, r2, guest::cpu()->r[3]);
            u32 scene_flagged = scene_has_flags(0x20000u, scene);  // (from the original)
            if (scene_flagged == 0) {
                u32 r0_6 = *global_0094f523;
                if (r0_6 != 3u && r0_6 != 4u && r0_6 != 5u && r0_6 != 6u) {
                    u32 r0_7 = InsectMgr__try_spawn_kind_42(insect_mgr.addr(), insect_mgr.addr() + 0x11e8u);  // (from the original)
                    r1 = guest::cpu()->r[1];
                    if (r0_7 != 0) {
                        return;
                    }
                }
            }
        }
        r0_2 = NpcTalk__start_kind(insect_mgr.addr(), 0x53u, 0u, guest::cpu()->r[3]);  // (from the original)
        r1 = guest::cpu()->r[1];
        if (r0_2 != 0) {
            r4_1->word_1fc = r4_1->word_1f8;
            return;
        }
    }
    r4_1->word_1fc = r0_2;
    guest::cpu()->r[1] = r1;
}

}  // namespace d_002ab3bc
GUEST_EXPORT_FRAMED(0x002ab3bc, d_002ab3bc::InsectMgr__update_spawns, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002abba8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Keeps the spawn point (0x94f530) on the ground, or picks a new one when asked.
namespace d_002abba8 {

struct __attribute__((packed)) InsectMgr {
    u8 unknown_0[0x11e8];  // (not used here)
    u32 word_11e8;
    float float_11ec;
    u32 word_11f0;
};
GUEST_OFFSET(InsectMgr, word_11e8, 0x11e8);
GUEST_OFFSET(InsectMgr, float_11ec, 0x11ec);
GUEST_OFFSET(InsectMgr, word_11f0, 0x11f0);

struct __attribute__((packed)) Local_002abba8_r4_1 {
    u8 unknown_0[0x1e8];  // (not used here)
    u32 word_1e8;
    float float_1ec;
    u32 word_1f0;
};
GUEST_OFFSET(Local_002abba8_r4_1, word_1e8, 0x1e8);
GUEST_OFFSET(Local_002abba8_r4_1, float_1ec, 0x1ec);
GUEST_OFFSET(Local_002abba8_r4_1, word_1f0, 0x1f0);

inline guest::global<u8, 0x0094f521> insect_spawn_point_set;
inline guest::global<u8, 0x0094f522> insect_spawns_ready;
inline guest::global<u32, 0x0094f530> insect_spawn_point_a;
inline guest::global<u32, 0x0094f534> insect_spawn_point_b;
inline constexpr guest::Function<0x00598164, u32(u32, u32, u32, u32)> FieldDrops__find_item_cd;
inline constexpr guest::Function<0x006c5c60, u32(u32, u32, u32, u32)> ground_height_at;

void InsectMgr__update_spawn_point(gptr<InsectMgr> insect_mgr, u32 r1, float S0) {
    gptr<Local_002abba8_r4_1> r4_1 = gptr<Local_002abba8_r4_1>(insect_mgr.addr() + 0x1000u);  // (from the original)
    u32 field_drops = insect_mgr.addr() + 0x11e8u;  // (from the original)
    if (*insect_spawn_point_set == 0) {
        if (*insect_spawns_ready != 0) {
            r4_1->word_1e8 = *insect_spawn_point_a;
            r4_1->word_1f0 = *insect_spawn_point_b;
            ground_height_at(field_drops, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
            float S0_1 = guest::cpu()->s[0];
            r4_1->float_1ec = S0_1;
            return;
        }
    } else {
        *insect_spawn_point_set = 0;
        *insect_spawns_ready = 0;
        guest::cpu()->s[0] = S0;
        u32 item_cd_2 = FieldDrops__find_item_cd(field_drops, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (item_cd_2 != 0) {
            ground_height_at(field_drops, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            float S0_3 = guest::cpu()->s[0];
            insect_mgr->float_11ec = S0_3;
            *insect_spawns_ready = 1;
            *insect_spawn_point_a = insect_mgr->word_11e8;
            *insect_spawn_point_b = insect_mgr->word_11f0;
        }
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_002abba8
GUEST_EXPORT_FRAMED(0x002abba8, d_002abba8::InsectMgr__update_spawn_point, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002abdfc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Picks a random insect from the spawn table for the time, skipping the ones already out or not allowed.
namespace d_002abdfc {

struct __attribute__((packed)) InsectMgr {
    u8 unknown_0[0x1c];  // (not used here)
    u32 word_1c;
};
GUEST_OFFSET(InsectMgr, word_1c, 0x1c);

inline guest::global<u32, 0x0086c2f0> global_0086c2f0;
inline constexpr guest::Function<0x002f74c8, u32(u32)> current_scene_id;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> scene_has_flags;
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> game_time_now;
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> get_current_player;
inline constexpr guest::Function<0x002fdf10, u32(u32, u32, u32, u32)> is_in_registered_list;
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> random_below;
inline constexpr guest::Function<0x005c33cc, u32(u32, u32, u32, u32)> find_object;
inline constexpr guest::Function<0x006bbd54, u32(u32, u32, u32, u32)> Item__from_category_index;
inline constexpr guest::Function<0x00700adc, u32(u32)> item_actor_kind_byte;
inline constexpr guest::Function<0x00700f58, u32(u32)> insect_spawn_table_for_time;

struct __attribute__((packed)) Frame_002abdfc {
    u32 word_0;
};
GUEST_OFFSET(Frame_002abdfc, word_0, 0x0);
GUEST_SIZE(Frame_002abdfc, 0x4);

u32 InsectMgr__pick_from_spawn_table(gptr<InsectMgr> insect_mgr, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_002abdfc> frame;  // the original's stack frame
    u32 r0 = insect_mgr.addr();
    frame->word_0 = r3;
    u32 player_2 = get_current_player(r0, r1, r2, r3);
    u32 scene = current_scene_id(player_2);
    r0 = scene_has_flags(0x20000u, scene);  // (from the original)
    r1 = guest::cpu()->r[1];
    u32 r2_3 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        r0 = find_object(4u, 0u, r2_3, r3);
        r1 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 != 0 && player_2 != 0) {
            r0 = u32(*gptr<u8>(player_2 + 0x5701u)) << 0x1e;  // (from the original)
            if (s32(r0) < 0) {
                r0 = u32(*gptr<u8>(player_2 + 0x572bu)) >> 7;  // (from the original)
                if (r0 == 0) {
                    r0 = is_in_registered_list(9u, r1, r2_3, r3);
                    r1 = guest::cpu()->r[1];
                    r2_3 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    if (r0 != 0) {
                        r0 = insect_mgr->word_1c;
                        r1 = 0u;
                        if (r0 != 0) {
                            do {
                                r2_3 = *gptr<u32>(r0);
                                if (r2_3 != 0) {
                                    r2_3 = u32(*gptr<u8>(r2_3 + 0xc9u)) - 0x49u;  // (from the original)
                                    if (r2_3 <= 7u) {
                                        r1 += 1u;
                                    }
                                }
                                r0 = *gptr<u32>(r0 + 4u);
                                guest::preempt();
                            } while (r0 != 0);
                            if (r1 >= 5u) {
                                goto L_2abf14;
                            }
                        }
                        r0 = random_below(0x64u, r1, r2_3, r3);  // (from the original)
                        r1 = guest::cpu()->r[1];
                        r2_3 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
                        if (r0 < 5u) {
                            return 0x50u;  // (from the original)
                        }
                        if (r0 < 0x5fu) {  // (from the original)
                            u32 r1_2 = u32(u64(r0) * 0x49249249u + (0ull | 0x49249249u) >> 0x20) >> 1;  // (from the original)
                            Item__from_category_index(frame.at(0).addr(), 0x25u, r1_2 - (r1_2 << 3) + r0, r3);  // (from the original)
                            u32 r0_5 = item_actor_kind_byte(frame.at(0).addr());
                            return r0_5;
                        }
                    }
                }
            }
        }
    }
L_2abf14:;
    u32 now = game_time_now(r0, r1, r2_3, r3);
    u32 r0_7 = insect_spawn_table_for_time(now);
    u32 r4 = r0_7;
    u32 random_2 = random_below(*global_0086c2f0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = random_2;
    do {
        if (*gptr<u16>(r4 + 2u) > r1) {
            u32 r0_10 = *gptr<u8>(r4);
            guest::cpu()->r[1] = r1;
            return r0_10;
        }
        r4 += 4u;
        guest::preempt();
    } while (1);
}

}  // namespace d_002abdfc
GUEST_EXPORT_FRAMED(0x002abdfc, d_002abdfc::InsectMgr__pick_from_spawn_table, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_002abf60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The insect with the id: in the list, or one of the two special slots; null when none.
namespace d_002abf60 {

struct __attribute__((packed)) InsectMgr {
    u8 unknown_0[0x1c];  // (not used here)
    u32 word_1c;
};
GUEST_OFFSET(InsectMgr, word_1c, 0x1c);

struct __attribute__((packed)) Local_002abf60_r0_1 {
    u8 unknown_0[0x340];  // (not used here)
    u32 word_340;
    u8 unknown_344[0xc];  // (not used here)
    u8 byte_350;
    u8 unknown_351[0x7];  // (not used here)
    u32 word_358;
    u8 unknown_35c[0xc];  // (not used here)
    u8 byte_368;
};
GUEST_OFFSET(Local_002abf60_r0_1, word_340, 0x340);
GUEST_OFFSET(Local_002abf60_r0_1, byte_350, 0x350);
GUEST_OFFSET(Local_002abf60_r0_1, word_358, 0x358);
GUEST_OFFSET(Local_002abf60_r0_1, byte_368, 0x368);


u32 InsectMgr__find_by_id(gptr<InsectMgr> insect_mgr, u32 r1) {
    u32 r0 = insect_mgr.addr();
    u32 r2 = r0;
    r0 = insect_mgr->word_1c;
    if (r0 != 0) {
        do {
            if (*gptr<u8>(r0 + 0x10u) == r1) {  // (from the original)
                return r0;
            }
            r0 = *gptr<u32>(r0 + 4u);
            guest::preempt();
        } while (r0 != 0);
    }
    gptr<Local_002abf60_r0_1> r0_1 = gptr<Local_002abf60_r0_1>(r2 + 0x1000u);  // (from the original)
    if (r0_1->word_340 != 0 && r0_1->byte_350 == r1) {
        return r2 + 0x1340u;  // (from the original)
    }
    if (r0_1->word_358 == 0) {
        return 0u;
    }
    if (r0_1->byte_368 == r1) {
        return r2 + 0x1358u;  // (from the original)
    }
    return 0u;
}

}  // namespace d_002abf60
GUEST_EXPORT(0x002abf60, d_002abf60::InsectMgr__find_by_id);

// f_002ac76c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// True when the insect is in the spawn table at one of the 6 hours of the day, with the weather it needs (dry for 1,
// rain or snow for 2).
namespace d_002ac76c {

inline constexpr guest::Function<0x0056cce4, u32(u32, u32, u32, u32)> TimeStamp__set_hour;
inline constexpr guest::Function<0x0062f04c, u32(u32, u32, u32)> weather_type_at;
inline constexpr guest::Function<0x00700f58, u32(u32)> insect_spawn_table_for_time;

struct __attribute__((packed)) Frame_002ac76c {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Frame_002ac76c, word_0, 0x0);
GUEST_OFFSET(Frame_002ac76c, word_4, 0x4);
GUEST_OFFSET(Frame_002ac76c, word_8, 0x8);
GUEST_SIZE(Frame_002ac76c, 0xc);

u32 insect_spawns_today(u32 r0, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_002ac76c> frame;  // the original's stack frame
    u32 r5 = r0;
    u32 r7 = r1;
    u32 r9 = 0x846fb0u;  // (from the original)
    u32 r8 = 0x86c2f0u;  // (from the original)
    u32 r6 = r2;
    u32 r4 = 0u;
    do {
        u32 r1_1 = *gptr<u32>(r6 + 4);
        u32 r2_1 = *gptr<u32>(r6 + 8);
        frame->word_0 = *gptr<u32>(r6);
        frame->word_4 = r1_1;
        frame->word_8 = r2_1;
        u32 r1_2 = *gptr<s8>(r9 + r4);
        TimeStamp__set_hour(frame.at(0).addr(), r1_2, r2_1, guest::cpu()->r[3]);
        r0 = insect_spawn_table_for_time(frame.at(0).addr());
        r1 = guest::cpu()->r[1];
L_2ac7ac:;
        u32 r2_3 = *gptr<u8>(r0);
        if (r2_3 == r5) {
            if (r7 == 1u) {
                u32 weather_type_3 = weather_type_at(frame.at(0).addr(), r1, r2_3);
                r1 = guest::cpu()->r[1];
                if (weather_type_3 == 3u || weather_type_3 == 4u || weather_type_3 == 5u || weather_type_3 == 6u) {
                    goto L_2ac81c;
                }
                return 1u;
            }
            if (r7 == 2u) {
                u32 weather_type_4 = weather_type_at(frame.at(0).addr(), r1, r2_3);
                r1 = guest::cpu()->r[1];
                if (weather_type_4 == 5u || weather_type_4 == 6u) {
                    return 1u;
                }
                goto L_2ac81c;
            }
            guest::cpu()->r[1] = r1;
            return 1u;
        }
        r1 = *gptr<u32>(r8);
        if (*gptr<u16>(r0 + 2u) != r1) {
            r0 += 4u;
            guest::preempt();
            goto L_2ac7ac;
        }
L_2ac81c:;
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 6);
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_002ac76c
GUEST_EXPORT_FRAMED(0x002ac76c, d_002ac76c::insect_spawns_today, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_002ad1fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// For an insect item (category 0x24), the flag of its insect index; 0 otherwise.
namespace d_002ad1fc {

inline constexpr guest::Function<0x002ad0a0, u32(u32, u32, u32, u32)> Catalog__item_of_offset;
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> Item__category;
inline constexpr guest::Function<0x002ffad8, u32(u32)> item_offset_in_category;

u32 Item__insect_flag(u32 item) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 category_2 = Item__category(item, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (category_2 != 0x24u) {  // (from the original)
        return 0u;
    }
    u32 offset_2 = item_offset_in_category(item);
    frame.release();
    return Catalog__item_of_offset(offset_2 & 0xffu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_002ad1fc
GUEST_EXPORT(0x002ad1fc, d_002ad1fc::Item__insect_flag);

// f_002ae274: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Puts the remembered item (0x94fd64) into the current player's pocket slot (+0xc8) and refreshes.
namespace d_002ae274 {

struct __attribute__((packed)) Object_002ae274_0 {
    u8 unknown_0[0xc8];  // (not used here)
    u32 word_c8;
};
GUEST_OFFSET(Object_002ae274_0, word_c8, 0xc8);

inline constexpr u32 global_0094fd64_address = 0x0094fd64u;
inline guest::global<u8, 0x0094fd2b> menu_resume_flag;
inline constexpr guest::Function<0x0026d328, u32(u32, u32)> PocketsGrid__refresh;
inline constexpr guest::Function<0x002bf9cc, u32(u32, u32, u32, u32)> Pockets__set_slot;
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> get_current_player;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> Item__copy_b;

struct __attribute__((packed)) Frame_002ae274 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_002ae274, word_0, 0x0);
GUEST_SIZE(Frame_002ae274, 0x8);

void put_item_in_pocket_slot(gptr<Object_002ae274_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_002ae274> frame;  // the original's stack frame
    u32 player_2 = get_current_player(arg0.addr(), r1, r2, r3);
    *menu_resume_flag = 1;
    Item__copy_b(frame.at(4).addr(), global_0094fd64_address);
    frame->word_0 = 1;
    u32 r1_1 = arg0->word_c8;
    Pockets__set_slot(player_2 + 0x6bd0u, r1_1, frame.at(4).addr(), 0u);  // (from the original)
    PocketsGrid__refresh(arg0.addr() + 0xf4u, r1_1);  // (from the original)
}

}  // namespace d_002ae274
GUEST_EXPORT_FRAMED(0x002ae274, d_002ae274::put_item_in_pocket_slot, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002afa70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002afa70 {

struct __attribute__((packed)) Local_002afa70_ea_1 {
    u32 vtable;
    u8 unknown_4[0x394];  // (not used here)
    u32 control1_button_vtable;
    u8 unknown_39c[0xe0];  // (not used here)
    u32 control1_button_vtable_47c;
};
GUEST_OFFSET(Local_002afa70_ea_1, vtable, 0x0);
GUEST_OFFSET(Local_002afa70_ea_1, control1_button_vtable, 0x398);
GUEST_OFFSET(Local_002afa70_ea_1, control1_button_vtable_47c, 0x47c);

inline constexpr u32 vtable_ComButton1Lyt = 0x008ee218u;
inline constexpr u32 vtable_Control1Button = 0x008ef22cu;
inline constexpr u32 vtable_Control1Button_at_e4 = 0x008ef270u;
inline constexpr u32 vtable_BsMenuItemChange = 0x008f1414u;
inline constexpr u32 vtable_BsMenuItemChange_at_28 = 0x008f1480u;
inline constexpr u32 vtable_BsMenuItemChange_at_a4 = 0x008f1584u;
inline constexpr u32 vtable_ComButtonLytBase = 0x008f18f4u;
inline constexpr u32 vtable_ItemSelectNameWindow = 0x008f47a0u;
inline constexpr guest::Function<0x0026fe3c, u32(u32)> ItemDragWindow__destructor;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;
inline constexpr guest::Function<0x002f770c, u32(u32)> ControlButtonBase__virtual_0_002f770c;
inline constexpr guest::Function<0x003170d0, u32(u32)> destroy_ITalkRecept;
inline constexpr guest::Function<0x00567ef0, u32(u32, u32)> ssys__ma__lyt__ArcResAccReader__destructor;
inline constexpr guest::Function<0x0056988c, u32(u32)> destroy_animation;
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> Layout__destructor;
inline constexpr guest::Function<0x005e3194, u32(u32, u32)> script__RenderMain__RenderMain_005e3194;
inline constexpr guest::Function<0x005e8a7c, u32(u32)> script__ChoiceStandardItem__destructor;
inline constexpr guest::Function<0x006aaa30, u32(u32, u32)> MenuBase__destructor;

u32 BsMenuItemChange__virtual_0_002afa70(gptr<BsMenuItemChange> bs_menu_item_change) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    bs_menu_item_change->vtable = vtable_BsMenuItemChange;
    bs_menu_item_change->bs_menu_item_change_vtable_a4 = vtable_BsMenuItemChange_at_a4;
    bs_menu_item_change->bs_menu_item_change_vtable = vtable_BsMenuItemChange_at_28;
    u32 r0_1 = bs_menu_item_change.addr() + 0xa078u;  // (from the original)
    u32 r0_2 = Layout__destructor(r0_1, vtable_BsMenuItemChange, vtable_BsMenuItemChange_at_a4, vtable_BsMenuItemChange_at_28);
    gptr<Local_002afa70_ea_1> ea_1 = gptr<Local_002afa70_ea_1>(r0_2 - 0x9c8u);  // (from the original)
    ea_1->vtable = vtable_ComButton1Lyt;
    ea_1->control1_button_vtable = vtable_Control1Button;
    ea_1->control1_button_vtable_47c = vtable_Control1Button_at_e4;
    u32 r4_1 = ea_1.addr() + 0x398u;  // (from the original)
    destroy_array_elements(ea_1.addr() + 0x4b0u, 0x2e0b3cu, 0x518u, 1u);  // (from the original)
    ControlButtonBase__virtual_0_002f770c(r4_1);
    *gptr<u32>(r4_1 - 0x398u) = vtable_ComButtonLytBase;  // (from the original)
    u32 r0_5 = ssys__ma__lyt__ArcResAccReader__destructor(r4_1 - 0x248u, vtable_ComButtonLytBase);  // (from the original)
    u32 r0_7 = Layout__destructor(r0_5 - 0x14cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_9 = script__ChoiceStandardItem__destructor(r0_7 - 0xc68u);  // (from the original)
    *gptr<u32>(r0_9 - 0x4f0u) = vtable_ItemSelectNameWindow;  // (from the original)
    u32 r0_10 = r0_9 - 0xd4u;  // (from the original)
    script__RenderMain__RenderMain_005e3194(r0_10, vtable_ItemSelectNameWindow);
    u32 r0_11 = r0_10 - 0x28u;  // (from the original)
    destroy_animation(r0_11);
    u32 r0_12 = r0_11 - 0x28u;  // (from the original)
    destroy_animation(r0_12);
    u32 r0_14 = Layout__destructor(r0_12 - 0x15cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_16 = ssys__ma__lyt__ArcResAccReader__destructor(r0_14 - 0x24cu, guest::cpu()->r[1]);  // (from the original)
    u32 r0_18 = ItemDragWindow__destructor(r0_16 - 0x848cu);  // (from the original)
    u32 r0_19 = r0_18 - 0xccu;  // (from the original)
    destroy_ITalkRecept(r0_19);
    frame.release();
    return MenuBase__destructor(r0_19 - 0x28u, guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_002afa70
GUEST_EXPORT(0x002afa70, d_002afa70::BsMenuItemChange__virtual_0_002afa70);
